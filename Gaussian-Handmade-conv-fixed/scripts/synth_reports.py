"""
Reads Vivado reports.
    python synth_reports.py <handmade|hls> <tag> <clock period ns>     e.g.  handmade 8_2 10
"""
import re
import sys

from common import BASE, HLS_BASE


# Kintex UltraScale XCKU035 (DS890)
DEVICE_LUTS = 203128
DEVICE_FFS = 406256
DEVICE_BRAM_TILES = 540
DEVICE_DSPS = 1700

DESIGNS = {
    "handmade": (BASE, "rheedGaussianWrapper"),
    "hls": (HLS_BASE, "myproject"),
}


def read_util(util_report, top_module):
    """Top row of the hierarchy table: total LUTs, logic LUTs, LUTRAMs, SRLs, FFs, RAMB36, RAMB18, URAM, DSP48."""
    with open(util_report) as file:
        text = file.read()

    row = r"\|\s*" + top_module + r"\s*\|\s*\(top\)\s*\|" + r"\s*(\d+)\s*\|" * 9
    match = re.search(row, text)
    if match is None:
        raise ValueError(f"no top-level row for {top_module} in {util_report}")

    numbers = [int(number) for number in match.groups()]
    names = ["total_luts", "logic_luts", "lutrams", "srls", "ffs", "ramb36", "ramb18", "urams", "dsp48"]
    return dict(zip(names, numbers))


def read_timing(timing_report):
    """(WNS, TNS) in ns from the first table of the timing summary."""
    with open(timing_report) as file:
        text = file.read()

    match = re.search(r"WNS\(ns\)\s+TNS\(ns\).*?\n\s*-+.*?\n\s*(-?\d+\.\d+)\s+(-?\d+\.\d+)", text)
    if match is None:
        raise ValueError(f"no timing summary in {timing_report}")
    return float(match.group(1)), float(match.group(2))


def bram_tiles(util):
    """A RAMB18 is half a tile."""
    return util["ramb36"] + util["ramb18"] / 2


def main():
    if len(sys.argv) != 4 or sys.argv[1] not in DESIGNS:
        raise SystemExit("usage: python synth_reports.py <handmade|hls> <tag, e.g. 8_2> <clock period in ns>")

    design, tag, period = sys.argv[1], sys.argv[2], sys.argv[3]
    project_dir, top_module = DESIGNS[design]

    util_report = project_dir / "reports" / f"{tag}_{period}ns_util.rpt"
    timing_report = project_dir / "reports" / f"{tag}_{period}ns_timing.rpt"

    for report in (util_report, timing_report):
        if not report.exists():
            raise SystemExit(f"ERROR: {report} not found. Run run_synth.sh first.")

    util = read_util(util_report, top_module)
    wns, tns = read_timing(timing_report)
    tiles = bram_tiles(util)

    print(f"{design} {tag} at a {period} ns clock")
    print(f"  LUTs   {util['total_luts']:7d}   {100 * util['total_luts'] / DEVICE_LUTS:5.1f} % of the device")
    print(f"  FFs    {util['ffs']:7d}   {100 * util['ffs'] / DEVICE_FFS:5.1f} %")
    print(f"  BRAM   {tiles:7.1f}   {100 * tiles / DEVICE_BRAM_TILES:5.1f} %   (RAMB36 {util['ramb36']}, RAMB18 {util['ramb18']})")
    print(f"  DSP    {util['dsp48']:7d}   {100 * util['dsp48'] / DEVICE_DSPS:5.1f} %")
    print(f"  slack (WNS) {wns:+.3f} ns, TNS {tns:.3f} ns")

    if wns >= 0:
        print(f"  timing met; a period of about {float(period) - wns:.2f} ns should still work")
    else:
        print(f"  timing NOT met; about {float(period) - wns:.2f} ns would be needed")


if __name__ == "__main__":
    main()

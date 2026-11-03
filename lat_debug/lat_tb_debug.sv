`timescale 1ns / 1ps

// Feeds zeros. Prints, in clock cycles:
// Latency  = first accepted input to first output
// Interval = first accepted input to first accepted input of the next image

module lat_tb #(
    parameter bitWidth    = 8,
    parameter NFRAC       = 5,
    parameter NFRAC_first = 7
) ();

    localparam PERIOD = 10;
    localparam TIMEOUT_CYCLES = 200000;
    localparam PIXELS = 48 * 48;
    localparam outputSize = 5;

    logic clk = 0;
    logic reset;
    logic signed [bitWidth-1:0] inputPixel;
    logic inputValid;
    logic inputReady;
    logic signed [bitWidth-1:0] finalOutput [outputSize-1:0];
    logic finalOutputValid;

    rheedGaussianWrapper #(
        .bitWidth(bitWidth), .NFRAC(NFRAC), .NFRAC_first(NFRAC_first)
    ) dut (
        .clk(clk), .reset(reset),
        .inputPixel(inputPixel), .inputValid(inputValid), .inputReady(inputReady),
        .finalOutput(finalOutput), .finalOutputValid(finalOutputValid)
    );

    initial begin
        clk <= 0;
        forever #(PERIOD/2) clk <= ~clk;
    end

    initial begin
        reset <= 1;
        inputValid <= 0;
        inputPixel <= 0;
        repeat (3) @(posedge clk);
        reset <= 0;
        inputValid <= 1;
    end

    int cycle = 0;
    int accepted = 0;
    int first_input_cycle = 0;
    int latency = -1;
    int interval = -1;

    // check to see if there's a testbench issue
    int last_pixel_cycle = -1;
    int stalls = 0;
    int starts [8];
    int outs [8];
    int n_out = 0;
    logic prev_valid = 0;

    always @(posedge clk) begin
        cycle <= cycle + 1;

        if (inputValid && inputReady) begin
            if (accepted == 0) first_input_cycle <= cycle;
            if (accepted == PIXELS) interval <= cycle - first_input_cycle;
            accepted <= accepted + 1;
        end

        if (finalOutputValid && latency < 0)
            latency <= cycle - first_input_cycle;

        // added for check
        if (inputValid && inputReady && accepted == PIXELS-1) 
            last_pixel_cycle <= cycle;
        if (inputValid && !inputReady && accepted > 0 && accepted < PIXELS) 
            stalls <= stalls + 1;
        
        if (inputValid && inputReady && (accepted % PIXELS) == 0 && (accepted / PIXELS) < 8)
            starts[accepted / PIXELS] <= cycle;
        if (finalOutputValid && !prev_valid && n_out < 8) begin
            outs[n_out] <= cycle;
            n_out <= n_out + 1;
        end
        prev_valid <= finalOutputValid;
        //

        if (latency >= 0 && interval >= 0) begin
            if (n_out == 5) begin
                for (int k = 0; k < 5; k++)
                    $display("image %0d: first pixel cycle %0d, output cycle %0d, latency %0d",
                            k+1, starts[k], outs[k], outs[k] - starts[k]);
                $finish;
            end
        end

        if (cycle > TIMEOUT_CYCLES) begin
            $display("ERROR: TIMEOUT (latency %0d, interval %0d)", latency, interval);
            $finish;
        end
    end

endmodule

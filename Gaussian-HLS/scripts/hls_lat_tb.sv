`timescale 1ns / 1ps

// Latency testbench for the hls4ml design (myproject).
//
// After reset it starts the design, offers zeros as input, and counts clock cycles from the very
// first input the design accepts to the very first output. The data does not matter, only the timing.
// This is the same measurement as lat_tb.sv does for the handmade design.
//
// Prints one line:   Latency = <N> cycles
//
// INPUT_BITS and OUTPUT_BITS must match the port widths of the generated design.
// For the 8-bit design: input 8 bits, output 16 bits.

module hls_lat_tb #(
    parameter INPUT_BITS  = 8,
    parameter OUTPUT_BITS = 16
) ();

    localparam PERIOD = 10;                 // clock period in ns (simulation only)
    localparam TIMEOUT_CYCLES = 200000;     // give up if there is still no output after this many cycles

    logic ap_clk = 0;
    logic ap_rst_n;
    logic ap_start;

    // the input stream: one pixel at a time
    logic [INPUT_BITS-1:0] input_data;
    logic input_valid;
    wire  input_ready;

    // the output streams: one per output value, each with its own valid
    wire [OUTPUT_BITS-1:0] output_data_0, output_data_1, output_data_2, output_data_3, output_data_4;
    wire output_valid_0, output_valid_1, output_valid_2, output_valid_3, output_valid_4;

    wire ap_done, ap_ready, ap_idle;

    myproject dut (
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .ap_start(ap_start),
        .ap_done(ap_done),
        .ap_ready(ap_ready),
        .ap_idle(ap_idle),

        .q_conv2d_batchnorm_input_V_data_0_V_TDATA(input_data),
        .q_conv2d_batchnorm_input_V_data_0_V_TVALID(input_valid),
        .q_conv2d_batchnorm_input_V_data_0_V_TREADY(input_ready),

        .layer22_out_V_data_0_V_TDATA(output_data_0),
        .layer22_out_V_data_0_V_TVALID(output_valid_0),
        .layer22_out_V_data_0_V_TREADY(1'b1),
        .layer22_out_V_data_1_V_TDATA(output_data_1),
        .layer22_out_V_data_1_V_TVALID(output_valid_1),
        .layer22_out_V_data_1_V_TREADY(1'b1),
        .layer22_out_V_data_2_V_TDATA(output_data_2),
        .layer22_out_V_data_2_V_TVALID(output_valid_2),
        .layer22_out_V_data_2_V_TREADY(1'b1),
        .layer22_out_V_data_3_V_TDATA(output_data_3),
        .layer22_out_V_data_3_V_TVALID(output_valid_3),
        .layer22_out_V_data_3_V_TREADY(1'b1),
        .layer22_out_V_data_4_V_TDATA(output_data_4),
        .layer22_out_V_data_4_V_TVALID(output_valid_4),
        .layer22_out_V_data_4_V_TREADY(1'b1)
    );

    wire any_output_valid = output_valid_0 | output_valid_1 | output_valid_2 | output_valid_3 | output_valid_4;


    // the clock
    initial begin
        ap_clk <= 0;
        forever #(PERIOD/2) ap_clk <= ~ap_clk;
    end


    // reset (active low), then start the design and keep offering a zero input
    initial begin
        ap_rst_n <= 0;
        ap_start <= 0;
        input_valid <= 0;
        input_data <= 0;
        repeat (5) @(posedge ap_clk);
        ap_rst_n <= 1;
        repeat (2) @(posedge ap_clk);
        ap_start <= 1;
        input_valid <= 1;
    end


    // count cycles, and stop at the first output
    int cycle = 0;                 // counts every clock edge
    int first_input_cycle = -1;    // -1 means the first input has not been accepted yet

    always @(posedge ap_clk) begin
        cycle <= cycle + 1;

        // the very first input the design accepts
        if (first_input_cycle < 0 && input_valid && input_ready)
            first_input_cycle <= cycle;

        // the very first output
        if (any_output_valid) begin
            $display("Latency = %0d cycles", cycle - first_input_cycle);
            $finish;
        end

        if (cycle > TIMEOUT_CYCLES) begin
            $display("ERROR: TIMEOUT -- no output after %0d cycles", TIMEOUT_CYCLES);
            $finish;
        end
    end

endmodule
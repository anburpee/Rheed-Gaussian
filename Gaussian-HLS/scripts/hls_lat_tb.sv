`timescale 1ns / 1ps

// Feeds zeros. Prints, in clock cycles:
//   Latency  = first accepted input -> first output
//   Interval = first accepted input -> first accepted input of the next image
// INPUT_BITS / OUTPUT_BITS must match the port widths (8-bit design: 8 and 16).

module hls_lat_tb #(
    parameter INPUT_BITS  = 8,
    parameter OUTPUT_BITS = 16
) ();

    localparam PERIOD = 10;
    localparam TIMEOUT_CYCLES = 200000;
    localparam PIXELS = 48 * 48;

    logic ap_clk = 0;
    logic ap_rst_n;
    logic ap_start;

    logic [INPUT_BITS-1:0] input_data;
    logic input_valid;
    wire  input_ready;

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


    initial begin
        ap_clk <= 0;
        forever #(PERIOD/2) ap_clk <= ~ap_clk;
    end


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


    int cycle = 0;
    int accepted = 0;
    int first_input_cycle = 0;
    int latency = -1;
    int interval = -1;

    always @(posedge ap_clk) begin
        cycle <= cycle + 1;

        if (input_valid && input_ready) begin
            if (accepted == 0) first_input_cycle <= cycle;
            if (accepted == PIXELS) interval <= cycle - first_input_cycle;
            accepted <= accepted + 1;
        end

        if (any_output_valid && latency < 0)
            latency <= cycle - first_input_cycle;

        if (latency >= 0 && interval >= 0) begin
            $display("Latency = %0d cycles", latency);
            $display("Interval = %0d cycles", interval);
            $finish;
        end

        if (cycle > TIMEOUT_CYCLES) begin
            $display("ERROR: TIMEOUT (latency %0d, interval %0d)", latency, interval);
            $finish;
        end
    end

endmodule

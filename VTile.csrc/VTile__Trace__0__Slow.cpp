// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTile__Syms.h"


VL_ATTR_COLD void VTile___024root__trace_init_sub__TOP__0(VTile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+228,"io_host_fromhost_valid", false,-1);
    tracep->declBus(c+229,"io_host_fromhost_bits", false,-1, 31,0);
    tracep->declBit(c+230,"io_nasti_aw_ready", false,-1);
    tracep->declBit(c+231,"io_nasti_w_ready", false,-1);
    tracep->declBit(c+232,"io_nasti_b_valid", false,-1);
    tracep->declBus(c+233,"io_nasti_b_bits_id", false,-1, 4,0);
    tracep->declBus(c+234,"io_nasti_b_bits_resp", false,-1, 1,0);
    tracep->declBit(c+235,"io_nasti_ar_ready", false,-1);
    tracep->declBit(c+236,"io_nasti_r_valid", false,-1);
    tracep->declBus(c+237,"io_nasti_r_bits_id", false,-1, 4,0);
    tracep->declQuad(c+238,"io_nasti_r_bits_data", false,-1, 63,0);
    tracep->declBus(c+240,"io_nasti_r_bits_resp", false,-1, 1,0);
    tracep->declBit(c+241,"io_nasti_r_bits_last", false,-1);
    tracep->declBus(c+242,"io_host_tohost", false,-1, 31,0);
    tracep->declBit(c+243,"io_nasti_aw_valid", false,-1);
    tracep->declBus(c+244,"io_nasti_aw_bits_id", false,-1, 4,0);
    tracep->declBus(c+245,"io_nasti_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+246,"io_nasti_aw_bits_len", false,-1, 7,0);
    tracep->declBus(c+247,"io_nasti_aw_bits_size", false,-1, 2,0);
    tracep->declBus(c+248,"io_nasti_aw_bits_burst", false,-1, 1,0);
    tracep->declBit(c+249,"io_nasti_aw_bits_lock", false,-1);
    tracep->declBus(c+250,"io_nasti_aw_bits_cache", false,-1, 3,0);
    tracep->declBus(c+251,"io_nasti_aw_bits_prot", false,-1, 2,0);
    tracep->declBus(c+252,"io_nasti_aw_bits_qos", false,-1, 3,0);
    tracep->declBit(c+253,"io_nasti_w_valid", false,-1);
    tracep->declQuad(c+254,"io_nasti_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+256,"io_nasti_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+257,"io_nasti_w_bits_last", false,-1);
    tracep->declBit(c+258,"io_nasti_b_ready", false,-1);
    tracep->declBit(c+259,"io_nasti_ar_valid", false,-1);
    tracep->declBus(c+260,"io_nasti_ar_bits_id", false,-1, 4,0);
    tracep->declBus(c+261,"io_nasti_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+262,"io_nasti_ar_bits_len", false,-1, 7,0);
    tracep->declBus(c+263,"io_nasti_ar_bits_size", false,-1, 2,0);
    tracep->declBus(c+264,"io_nasti_ar_bits_burst", false,-1, 1,0);
    tracep->declBit(c+265,"io_nasti_ar_bits_lock", false,-1);
    tracep->declBus(c+266,"io_nasti_ar_bits_cache", false,-1, 3,0);
    tracep->declBus(c+267,"io_nasti_ar_bits_prot", false,-1, 2,0);
    tracep->declBus(c+268,"io_nasti_ar_bits_qos", false,-1, 3,0);
    tracep->declBit(c+269,"io_nasti_r_ready", false,-1);
    tracep->pushNamePrefix("Tile ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+228,"io_host_fromhost_valid", false,-1);
    tracep->declBus(c+229,"io_host_fromhost_bits", false,-1, 31,0);
    tracep->declBit(c+230,"io_nasti_aw_ready", false,-1);
    tracep->declBit(c+231,"io_nasti_w_ready", false,-1);
    tracep->declBit(c+232,"io_nasti_b_valid", false,-1);
    tracep->declBus(c+233,"io_nasti_b_bits_id", false,-1, 4,0);
    tracep->declBus(c+234,"io_nasti_b_bits_resp", false,-1, 1,0);
    tracep->declBit(c+235,"io_nasti_ar_ready", false,-1);
    tracep->declBit(c+236,"io_nasti_r_valid", false,-1);
    tracep->declBus(c+237,"io_nasti_r_bits_id", false,-1, 4,0);
    tracep->declQuad(c+238,"io_nasti_r_bits_data", false,-1, 63,0);
    tracep->declBus(c+240,"io_nasti_r_bits_resp", false,-1, 1,0);
    tracep->declBit(c+241,"io_nasti_r_bits_last", false,-1);
    tracep->declBus(c+242,"io_host_tohost", false,-1, 31,0);
    tracep->declBit(c+243,"io_nasti_aw_valid", false,-1);
    tracep->declBus(c+244,"io_nasti_aw_bits_id", false,-1, 4,0);
    tracep->declBus(c+245,"io_nasti_aw_bits_addr", false,-1, 31,0);
    tracep->declBus(c+246,"io_nasti_aw_bits_len", false,-1, 7,0);
    tracep->declBus(c+247,"io_nasti_aw_bits_size", false,-1, 2,0);
    tracep->declBus(c+248,"io_nasti_aw_bits_burst", false,-1, 1,0);
    tracep->declBit(c+249,"io_nasti_aw_bits_lock", false,-1);
    tracep->declBus(c+250,"io_nasti_aw_bits_cache", false,-1, 3,0);
    tracep->declBus(c+251,"io_nasti_aw_bits_prot", false,-1, 2,0);
    tracep->declBus(c+252,"io_nasti_aw_bits_qos", false,-1, 3,0);
    tracep->declBit(c+253,"io_nasti_w_valid", false,-1);
    tracep->declQuad(c+254,"io_nasti_w_bits_data", false,-1, 63,0);
    tracep->declBus(c+256,"io_nasti_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+257,"io_nasti_w_bits_last", false,-1);
    tracep->declBit(c+258,"io_nasti_b_ready", false,-1);
    tracep->declBit(c+259,"io_nasti_ar_valid", false,-1);
    tracep->declBus(c+260,"io_nasti_ar_bits_id", false,-1, 4,0);
    tracep->declBus(c+261,"io_nasti_ar_bits_addr", false,-1, 31,0);
    tracep->declBus(c+262,"io_nasti_ar_bits_len", false,-1, 7,0);
    tracep->declBus(c+263,"io_nasti_ar_bits_size", false,-1, 2,0);
    tracep->declBus(c+264,"io_nasti_ar_bits_burst", false,-1, 1,0);
    tracep->declBit(c+265,"io_nasti_ar_bits_lock", false,-1);
    tracep->declBus(c+266,"io_nasti_ar_bits_cache", false,-1, 3,0);
    tracep->declBus(c+267,"io_nasti_ar_bits_prot", false,-1, 2,0);
    tracep->declBus(c+268,"io_nasti_ar_bits_qos", false,-1, 3,0);
    tracep->declBit(c+269,"io_nasti_r_ready", false,-1);
    tracep->pushNamePrefix("arb ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+270,"io_icache_ar_valid", false,-1);
    tracep->declBus(c+205,"io_icache_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+140,"io_icache_r_ready", false,-1);
    tracep->declBit(c+271,"io_dcache_aw_valid", false,-1);
    tracep->declBus(c+245,"io_dcache_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+192,"io_dcache_w_valid", false,-1);
    tracep->declQuad(c+254,"io_dcache_w_bits_data", false,-1, 63,0);
    tracep->declBit(c+257,"io_dcache_w_bits_last", false,-1);
    tracep->declBit(c+141,"io_dcache_b_ready", false,-1);
    tracep->declBit(c+272,"io_dcache_ar_valid", false,-1);
    tracep->declBus(c+64,"io_dcache_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+142,"io_dcache_r_ready", false,-1);
    tracep->declBit(c+230,"io_nasti_aw_ready", false,-1);
    tracep->declBit(c+231,"io_nasti_w_ready", false,-1);
    tracep->declBit(c+232,"io_nasti_b_valid", false,-1);
    tracep->declBit(c+235,"io_nasti_ar_ready", false,-1);
    tracep->declBit(c+236,"io_nasti_r_valid", false,-1);
    tracep->declQuad(c+238,"io_nasti_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+241,"io_nasti_r_bits_last", false,-1);
    tracep->declBit(c+273,"io_icache_ar_ready", false,-1);
    tracep->declBit(c+274,"io_icache_r_valid", false,-1);
    tracep->declQuad(c+238,"io_icache_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+275,"io_dcache_aw_ready", false,-1);
    tracep->declBit(c+276,"io_dcache_w_ready", false,-1);
    tracep->declBit(c+277,"io_dcache_b_valid", false,-1);
    tracep->declBit(c+278,"io_dcache_ar_ready", false,-1);
    tracep->declBit(c+279,"io_dcache_r_valid", false,-1);
    tracep->declQuad(c+238,"io_dcache_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+243,"io_nasti_aw_valid", false,-1);
    tracep->declBus(c+245,"io_nasti_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+253,"io_nasti_w_valid", false,-1);
    tracep->declQuad(c+254,"io_nasti_w_bits_data", false,-1, 63,0);
    tracep->declBit(c+257,"io_nasti_w_bits_last", false,-1);
    tracep->declBit(c+258,"io_nasti_b_ready", false,-1);
    tracep->declBit(c+259,"io_nasti_ar_valid", false,-1);
    tracep->declBus(c+261,"io_nasti_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+269,"io_nasti_r_ready", false,-1);
    tracep->declBus(c+143,"state", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+228,"io_host_fromhost_valid", false,-1);
    tracep->declBus(c+229,"io_host_fromhost_bits", false,-1, 31,0);
    tracep->declBit(c+280,"io_icache_resp_valid", false,-1);
    tracep->declBus(c+281,"io_icache_resp_bits_data", false,-1, 31,0);
    tracep->declBit(c+282,"io_dcache_resp_valid", false,-1);
    tracep->declBus(c+193,"io_dcache_resp_bits_data", false,-1, 31,0);
    tracep->declBus(c+242,"io_host_tohost", false,-1, 31,0);
    tracep->declBit(c+283,"io_icache_req_valid", false,-1);
    tracep->declBus(c+284,"io_icache_req_bits_addr", false,-1, 31,0);
    tracep->declBit(c+285,"io_dcache_abort", false,-1);
    tracep->declBit(c+286,"io_dcache_req_valid", false,-1);
    tracep->declBus(c+287,"io_dcache_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+288,"io_dcache_req_bits_data", false,-1, 31,0);
    tracep->declBus(c+289,"io_dcache_req_bits_mask", false,-1, 3,0);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBus(c+202,"io_inst", false,-1, 31,0);
    tracep->declBus(c+290,"io_pc_sel", false,-1, 1,0);
    tracep->declBit(c+291,"io_inst_kill", false,-1);
    tracep->declBit(c+292,"io_A_sel", false,-1);
    tracep->declBit(c+293,"io_B_sel", false,-1);
    tracep->declBus(c+294,"io_imm_sel", false,-1, 2,0);
    tracep->declBus(c+295,"io_alu_op", false,-1, 3,0);
    tracep->declBus(c+296,"io_br_type", false,-1, 2,0);
    tracep->declBus(c+297,"io_st_type", false,-1, 1,0);
    tracep->declBus(c+298,"io_ld_type", false,-1, 2,0);
    tracep->declBus(c+299,"io_mul_op", false,-1, 3,0);
    tracep->declBus(c+300,"io_wb_sel", false,-1, 2,0);
    tracep->declBit(c+301,"io_wb_en", false,-1);
    tracep->declBus(c+302,"io_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+303,"io_illegal", false,-1);
    tracep->declBus(c+304,"io_pe_op", false,-1, 4,0);
    tracep->declBit(c+305,"io_qvm_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpath ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+228,"io_host_fromhost_valid", false,-1);
    tracep->declBus(c+229,"io_host_fromhost_bits", false,-1, 31,0);
    tracep->declBit(c+280,"io_icache_resp_valid", false,-1);
    tracep->declBus(c+281,"io_icache_resp_bits_data", false,-1, 31,0);
    tracep->declBit(c+282,"io_dcache_resp_valid", false,-1);
    tracep->declBus(c+193,"io_dcache_resp_bits_data", false,-1, 31,0);
    tracep->declBus(c+290,"io_ctrl_pc_sel", false,-1, 1,0);
    tracep->declBit(c+291,"io_ctrl_inst_kill", false,-1);
    tracep->declBit(c+292,"io_ctrl_A_sel", false,-1);
    tracep->declBit(c+293,"io_ctrl_B_sel", false,-1);
    tracep->declBus(c+294,"io_ctrl_imm_sel", false,-1, 2,0);
    tracep->declBus(c+295,"io_ctrl_alu_op", false,-1, 3,0);
    tracep->declBus(c+296,"io_ctrl_br_type", false,-1, 2,0);
    tracep->declBus(c+297,"io_ctrl_st_type", false,-1, 1,0);
    tracep->declBus(c+298,"io_ctrl_ld_type", false,-1, 2,0);
    tracep->declBus(c+299,"io_ctrl_mul_op", false,-1, 3,0);
    tracep->declBus(c+300,"io_ctrl_wb_sel", false,-1, 2,0);
    tracep->declBit(c+301,"io_ctrl_wb_en", false,-1);
    tracep->declBus(c+302,"io_ctrl_csr_cmd", false,-1, 2,0);
    tracep->declBit(c+303,"io_ctrl_illegal", false,-1);
    tracep->declBus(c+304,"io_ctrl_pe_op", false,-1, 4,0);
    tracep->declBit(c+305,"io_ctrl_qvm_en", false,-1);
    tracep->declBus(c+242,"io_host_tohost", false,-1, 31,0);
    tracep->declBit(c+283,"io_icache_req_valid", false,-1);
    tracep->declBus(c+284,"io_icache_req_bits_addr", false,-1, 31,0);
    tracep->declBit(c+285,"io_dcache_abort", false,-1);
    tracep->declBit(c+286,"io_dcache_req_valid", false,-1);
    tracep->declBus(c+287,"io_dcache_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+288,"io_dcache_req_bits_data", false,-1, 31,0);
    tracep->declBus(c+289,"io_dcache_req_bits_mask", false,-1, 3,0);
    tracep->declBus(c+202,"io_ctrl_inst", false,-1, 31,0);
    tracep->declBus(c+202,"fe_reg_inst", false,-1, 31,0);
    tracep->declBus(c+306,"fe_reg_pc", false,-1, 31,0);
    tracep->declBus(c+172,"ew_reg_inst", false,-1, 31,0);
    tracep->declBus(c+173,"ew_reg_pc", false,-1, 31,0);
    tracep->declBus(c+174,"ew_reg_alu", false,-1, 31,0);
    tracep->declBus(c+175,"ew_reg_csr_in", false,-1, 31,0);
    tracep->declBus(c+176,"ew_reg_qvmask", false,-1, 15,0);
    tracep->declBus(c+177,"ew_reg_pe", false,-1, 31,0);
    tracep->declBus(c+178,"ew_reg_mul", false,-1, 31,0);
    tracep->declBus(c+179,"st_type", false,-1, 1,0);
    tracep->declBus(c+180,"ld_type", false,-1, 2,0);
    tracep->declBus(c+181,"wb_sel", false,-1, 2,0);
    tracep->declBit(c+182,"wb_en", false,-1);
    tracep->declBus(c+183,"csr_cmd", false,-1, 2,0);
    tracep->declBit(c+184,"illegal", false,-1);
    tracep->declBit(c+185,"pc_check", false,-1);
    tracep->declBit(c+307,"started", false,-1);
    tracep->declBit(c+308,"stall", false,-1);
    tracep->declQuad(c+309,"pc", false,-1, 32,0);
    tracep->declBus(c+311,"rs2", false,-1, 31,0);
    tracep->declBus(c+312,"lshift", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+313,"io_A", false,-1, 31,0);
    tracep->declBus(c+314,"io_B", false,-1, 31,0);
    tracep->declBus(c+295,"io_alu_op", false,-1, 3,0);
    tracep->declBus(c+315,"io_out", false,-1, 31,0);
    tracep->declBus(c+316,"io_sum", false,-1, 31,0);
    tracep->declBus(c+316,"sum", false,-1, 31,0);
    tracep->declBus(c+317,"shin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brCond ");
    tracep->declBus(c+318,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+311,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+296,"io_br_type", false,-1, 2,0);
    tracep->declBit(c+319,"io_taken", false,-1);
    tracep->declBus(c+320,"diff", false,-1, 31,0);
    tracep->declBit(c+321,"isSameSign", false,-1);
    tracep->declBit(c+322,"lt", false,-1);
    tracep->declBit(c+323,"ltu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bypass ");
    tracep->declBus(c+181,"io_wb_sel_in", false,-1, 2,0);
    tracep->declBit(c+182,"io_wb_en", false,-1);
    tracep->declBit(c+308,"io_stall", false,-1);
    tracep->declBit(c+285,"io_csr_io_expt", false,-1);
    tracep->declBus(c+203,"io_rs1_addr_in", false,-1, 4,0);
    tracep->declBus(c+204,"io_rs2_addr_in", false,-1, 4,0);
    tracep->declBus(c+186,"io_rd_addr_in", false,-1, 4,0);
    tracep->declBus(c+174,"io_idata_alu", false,-1, 31,0);
    tracep->declBus(c+324,"io_idata_load", false,-1, 31,0);
    tracep->declBus(c+173,"io_idata_pc", false,-1, 31,0);
    tracep->declBus(c+325,"io_idata_csr", false,-1, 31,0);
    tracep->declBus(c+176,"io_idata_qvm", false,-1, 15,0);
    tracep->declBus(c+177,"io_idata_pe", false,-1, 31,0);
    tracep->declBus(c+178,"io_idata_mul", false,-1, 31,0);
    tracep->declBus(c+326,"io_rs1_out", false,-1, 31,0);
    tracep->declBus(c+326,"io_rs2_out", false,-1, 31,0);
    tracep->declBus(c+176,"io_rs_qvm_out", false,-1, 15,0);
    tracep->declBit(c+327,"io_rs1vaild", false,-1);
    tracep->declBit(c+328,"io_rs2vaild", false,-1);
    tracep->declBit(c+327,"io_rs_qvm_vaild", false,-1);
    tracep->declBus(c+329,"io_regfile_wdata", false,-1, 31,0);
    tracep->declBit(c+330,"io_regfile_wen", false,-1);
    tracep->declBus(c+187,"io_regfile_waddr", false,-1, 31,0);
    tracep->declBus(c+188,"io_regfile_wqvm", false,-1, 15,0);
    tracep->declBit(c+189,"wb_pe_vaild", false,-1);
    tracep->declBit(c+190,"wb_mul_vaild", false,-1);
    tracep->declBus(c+326,"rs_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+308,"io_stall", false,-1);
    tracep->declBus(c+183,"io_cmd", false,-1, 2,0);
    tracep->declBus(c+175,"io_in", false,-1, 31,0);
    tracep->declBus(c+173,"io_pc", false,-1, 31,0);
    tracep->declBus(c+174,"io_addr", false,-1, 31,0);
    tracep->declBus(c+172,"io_inst", false,-1, 31,0);
    tracep->declBit(c+184,"io_illegal", false,-1);
    tracep->declBus(c+179,"io_st_type", false,-1, 1,0);
    tracep->declBus(c+180,"io_ld_type", false,-1, 2,0);
    tracep->declBit(c+185,"io_pc_check", false,-1);
    tracep->declBit(c+228,"io_host_fromhost_valid", false,-1);
    tracep->declBus(c+229,"io_host_fromhost_bits", false,-1, 31,0);
    tracep->declBus(c+325,"io_out", false,-1, 31,0);
    tracep->declBit(c+285,"io_expt", false,-1);
    tracep->declBus(c+331,"io_evec", false,-1, 31,0);
    tracep->declBus(c+150,"io_epc", false,-1, 31,0);
    tracep->declBus(c+242,"io_host_tohost", false,-1, 31,0);
    tracep->declBus(c+151,"io_qnorm_csr", false,-1, 31,0);
    tracep->declBus(c+332,"time_0", false,-1, 31,0);
    tracep->declBus(c+333,"timeh", false,-1, 31,0);
    tracep->declBus(c+334,"cycle", false,-1, 31,0);
    tracep->declBus(c+335,"cycleh", false,-1, 31,0);
    tracep->declBus(c+336,"instret", false,-1, 31,0);
    tracep->declBus(c+337,"instreth", false,-1, 31,0);
    tracep->declBus(c+338,"PRV", false,-1, 1,0);
    tracep->declBus(c+339,"PRV1", false,-1, 1,0);
    tracep->declBit(c+340,"IE", false,-1);
    tracep->declBit(c+341,"IE1", false,-1);
    tracep->declBit(c+152,"MTIP", false,-1);
    tracep->declBit(c+153,"MTIE", false,-1);
    tracep->declBit(c+154,"MSIP", false,-1);
    tracep->declBit(c+155,"MSIE", false,-1);
    tracep->declBus(c+156,"mtimecmp", false,-1, 31,0);
    tracep->declBus(c+157,"mscratch", false,-1, 31,0);
    tracep->declBus(c+150,"mepc", false,-1, 31,0);
    tracep->declBus(c+158,"mcause", false,-1, 31,0);
    tracep->declBus(c+159,"mbadaddr", false,-1, 31,0);
    tracep->declBus(c+160,"mtohost", false,-1, 31,0);
    tracep->declBus(c+161,"mfromhost", false,-1, 31,0);
    tracep->declBus(c+151,"qnorm", false,-1, 31,0);
    tracep->declBus(c+162,"qstate", false,-1, 31,0);
    tracep->declBit(c+191,"privInst", false,-1);
    tracep->declBit(c+342,"isEcall", false,-1);
    tracep->declBit(c+343,"isEbreak", false,-1);
    tracep->declBit(c+344,"wen", false,-1);
    tracep->declBit(c+345,"iaddrInvalid", false,-1);
    tracep->declBit(c+346,"laddrInvalid", false,-1);
    tracep->declBit(c+347,"saddrInvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+163,"isEret", false,-1);
    tracep->declBus(c+164,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBit(c+165,"isInstRet", false,-1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("immGen ");
    tracep->declBus(c+202,"io_inst", false,-1, 31,0);
    tracep->declBus(c+294,"io_sel", false,-1, 2,0);
    tracep->declBus(c+348,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+313,"io_A", false,-1, 31,0);
    tracep->declBus(c+314,"io_B", false,-1, 31,0);
    tracep->declBus(c+299,"io_mul_op", false,-1, 3,0);
    tracep->declBus(c+349,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pe_ctrl ");
    tracep->declBit(c+292,"io_ctrl_A_sel", false,-1);
    tracep->declBit(c+293,"io_ctrl_B_sel", false,-1);
    tracep->declBus(c+304,"io_pe_op_in", false,-1, 4,0);
    tracep->declBit(c+305,"io_pe_qvm_en_in", false,-1);
    tracep->declBus(c+350,"io_pe_qvm_in", false,-1, 15,0);
    tracep->declBus(c+295,"io_alu_op_in", false,-1, 3,0);
    tracep->declBus(c+296,"io_br_op_in", false,-1, 2,0);
    tracep->declBus(c+299,"io_mul_op_in", false,-1, 3,0);
    tracep->declBus(c+306,"io_pc_in", false,-1, 31,0);
    tracep->declBus(c+348,"io_immGen_in", false,-1, 31,0);
    tracep->declBus(c+318,"io_rs1_in0", false,-1, 31,0);
    tracep->declBus(c+311,"io_rs2_in0", false,-1, 31,0);
    tracep->declBus(c+304,"io_pe_op_out", false,-1, 4,0);
    tracep->declBit(c+305,"io_pe_qvm_en_out", false,-1);
    tracep->declBus(c+350,"io_pe_qvm_out", false,-1, 15,0);
    tracep->declBus(c+295,"io_alu_op_out", false,-1, 3,0);
    tracep->declBus(c+296,"io_br_op_out", false,-1, 2,0);
    tracep->declBus(c+299,"io_mul_op_out", false,-1, 3,0);
    tracep->declBus(c+313,"io_rs_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+314,"io_rs_alu_rs2", false,-1, 31,0);
    tracep->declBus(c+318,"io_rs_br_rs1", false,-1, 31,0);
    tracep->declBus(c+311,"io_rs_br_rs2", false,-1, 31,0);
    tracep->declBus(c+313,"io_rs_pe_rs1", false,-1, 31,0);
    tracep->declBus(c+314,"io_rs_pe_rs2", false,-1, 31,0);
    tracep->declBus(c+313,"io_rs_mul_rs1", false,-1, 31,0);
    tracep->declBus(c+314,"io_rs_mul_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pe_unit ");
    tracep->declBus(c+151,"io_csr_qnorm", false,-1, 31,0);
    tracep->declBus(c+313,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+314,"io_rs2", false,-1, 31,0);
    tracep->declBus(c+350,"io_qvm_in", false,-1, 15,0);
    tracep->declBus(c+304,"io_pe_op", false,-1, 4,0);
    tracep->declBit(c+305,"io_qvm_en", false,-1);
    tracep->declBus(c+351,"io_qvm_out", false,-1, 15,0);
    tracep->declBus(c+352,"io_out", false,-1, 31,0);
    tracep->pushNamePrefix("alu8x8 ");
    tracep->declBus(c+166,"io_qnorm_Scale_a8", false,-1, 7,0);
    tracep->declBus(c+167,"io_qnorm_Scale_b5", false,-1, 4,0);
    tracep->declBit(c+168,"io_qnorm_Sign_en", false,-1);
    tracep->declBus(c+169,"io_qnorm_Zero_point8", false,-1, 7,0);
    tracep->declBit(c+305,"io_qnorm_Qvm_en", false,-1);
    tracep->declBit(c+170,"io_qnorm_Norm_en", false,-1);
    tracep->declBus(c+171,"io_qnorm_Lenb", false,-1, 3,0);
    tracep->declBus(c+353,"io_A", false,-1, 31,0);
    tracep->declBus(c+354,"io_B", false,-1, 31,0);
    tracep->declBus(c+355,"io_pe_8Alu8_op", false,-1, 3,0);
    tracep->declBus(c+356,"io_A_qvm_in", false,-1, 15,0);
    tracep->declBus(c+357,"io_out", false,-1, 31,0);
    tracep->declBus(c+358,"rs1B4_0", false,-1, 7,0);
    tracep->declBus(c+359,"rs1B4_1", false,-1, 7,0);
    tracep->declBus(c+360,"rs1B4_2", false,-1, 7,0);
    tracep->declBus(c+361,"rs1B4_3", false,-1, 7,0);
    tracep->declBus(c+362,"rs1B4_4", false,-1, 7,0);
    tracep->declBus(c+363,"rs1B4_5", false,-1, 7,0);
    tracep->declBus(c+364,"rs1B4_6", false,-1, 7,0);
    tracep->declBus(c+365,"rs2B4_0", false,-1, 7,0);
    tracep->declBus(c+366,"rs2B4_1", false,-1, 7,0);
    tracep->declBus(c+367,"rs2B4_2", false,-1, 7,0);
    tracep->declBus(c+368,"rs2B4_3", false,-1, 7,0);
    tracep->declBus(c+369,"rs2B4_4", false,-1, 7,0);
    tracep->declBus(c+370,"rs2B4_5", false,-1, 7,0);
    tracep->declBus(c+371,"rs2B4_6", false,-1, 7,0);
    tracep->declBus(c+372,"rs1B8_0", false,-1, 15,0);
    tracep->declBus(c+373,"rs1B8_1", false,-1, 15,0);
    tracep->declBus(c+374,"rs1B8_2", false,-1, 15,0);
    tracep->declBus(c+375,"rs2B8_0", false,-1, 15,0);
    tracep->declBus(c+376,"rs2B8_1", false,-1, 15,0);
    tracep->declBus(c+377,"rs2B8_2", false,-1, 15,0);
    tracep->declBus(c+378,"out4b_Unorm_0", false,-1, 22,0);
    tracep->declBus(c+379,"out4b_Unorm_1", false,-1, 22,0);
    tracep->declBus(c+380,"out4b_Unorm_2", false,-1, 22,0);
    tracep->declBus(c+381,"out4b_Unorm_3", false,-1, 22,0);
    tracep->declBus(c+382,"out4b_Unorm_4", false,-1, 22,0);
    tracep->declBus(c+383,"out4b_Unorm_5", false,-1, 22,0);
    tracep->declBus(c+384,"out4b_Unorm_6", false,-1, 22,0);
    tracep->declBus(c+385,"out4b_Unorm_7", false,-1, 22,0);
    tracep->declBus(c+386,"out8b_Unorm_0", false,-1, 30,0);
    tracep->declBus(c+387,"out8b_Unorm_1", false,-1, 30,0);
    tracep->declBus(c+388,"out8b_Unorm_2", false,-1, 30,0);
    tracep->declBus(c+389,"out8b_Unorm_3", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("br8x8 ");
    tracep->declBit(c+168,"io_qnorm_Sign_en", false,-1);
    tracep->declBus(c+171,"io_qnorm_Lenb", false,-1, 3,0);
    tracep->declBus(c+390,"io_A", false,-1, 31,0);
    tracep->declBus(c+391,"io_B", false,-1, 31,0);
    tracep->declBus(c+392,"io_pe_8Br8_op", false,-1, 3,0);
    tracep->declBus(c+393,"io_A_qvm_in", false,-1, 15,0);
    tracep->declBus(c+390,"io_out_copy", false,-1, 31,0);
    tracep->declBus(c+394,"io_qvm_out", false,-1, 15,0);
    tracep->declBus(c+395,"rs1B4_0", false,-1, 7,0);
    tracep->declBus(c+396,"rs1B4_1", false,-1, 7,0);
    tracep->declBus(c+397,"rs1B4_2", false,-1, 7,0);
    tracep->declBus(c+398,"rs1B4_3", false,-1, 7,0);
    tracep->declBus(c+399,"rs1B4_4", false,-1, 7,0);
    tracep->declBus(c+400,"rs1B4_5", false,-1, 7,0);
    tracep->declBus(c+401,"rs1B4_6", false,-1, 7,0);
    tracep->declBus(c+402,"rs1B4_7", false,-1, 7,0);
    tracep->declBus(c+403,"rs2B4_0", false,-1, 7,0);
    tracep->declBus(c+404,"rs2B4_1", false,-1, 7,0);
    tracep->declBus(c+405,"rs2B4_2", false,-1, 7,0);
    tracep->declBus(c+406,"rs2B4_3", false,-1, 7,0);
    tracep->declBus(c+407,"rs2B4_4", false,-1, 7,0);
    tracep->declBus(c+408,"rs2B4_5", false,-1, 7,0);
    tracep->declBus(c+409,"rs2B4_6", false,-1, 7,0);
    tracep->declBus(c+410,"rs2B4_7", false,-1, 7,0);
    tracep->declBus(c+411,"rs1B8_0", false,-1, 15,0);
    tracep->declBus(c+412,"rs1B8_1", false,-1, 15,0);
    tracep->declBus(c+413,"rs1B8_2", false,-1, 15,0);
    tracep->declBus(c+414,"rs1B8_3", false,-1, 15,0);
    tracep->declBus(c+415,"rs2B8_0", false,-1, 15,0);
    tracep->declBus(c+416,"rs2B8_1", false,-1, 15,0);
    tracep->declBus(c+417,"rs2B8_2", false,-1, 15,0);
    tracep->declBus(c+418,"rs2B8_3", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mm8x8 ");
    tracep->declBus(c+419,"io_rs1", false,-1, 31,0);
    tracep->declBit(c+168,"io_qnorm_Sign_en", false,-1);
    tracep->declBus(c+171,"io_qnorm_Lenb", false,-1, 3,0);
    tracep->declBus(c+420,"io_pe_8Mm8_op", false,-1, 2,0);
    tracep->declBus(c+421,"io_rs_qvm_in", false,-1, 15,0);
    tracep->declBus(c+422,"io_out", false,-1, 31,0);
    tracep->declBus(c+423,"io_qvm_out", false,-1, 15,0);
    tracep->declBus(c+424,"rs4_0", false,-1, 4,0);
    tracep->declBus(c+425,"rs4_1", false,-1, 4,0);
    tracep->declBus(c+426,"rs4_2", false,-1, 4,0);
    tracep->declBus(c+427,"rs4_3", false,-1, 4,0);
    tracep->declBus(c+428,"rs4_4", false,-1, 4,0);
    tracep->declBus(c+429,"rs4_5", false,-1, 4,0);
    tracep->declBus(c+430,"rs4_6", false,-1, 4,0);
    tracep->declBus(c+431,"rs4_7", false,-1, 4,0);
    tracep->declBus(c+432,"rs8_0", false,-1, 8,0);
    tracep->declBus(c+433,"rs8_1", false,-1, 8,0);
    tracep->declBus(c+434,"rs8_2", false,-1, 8,0);
    tracep->declBus(c+435,"rs8_3", false,-1, 8,0);
    tracep->declBus(c+436,"out4", false,-1, 4,0);
    tracep->declBus(c+437,"out8", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul8x8 ");
    tracep->declBus(c+166,"io_qnorm_Scale_a8", false,-1, 7,0);
    tracep->declBus(c+167,"io_qnorm_Scale_b5", false,-1, 4,0);
    tracep->declBit(c+168,"io_qnorm_Sign_en", false,-1);
    tracep->declBus(c+169,"io_qnorm_Zero_point8", false,-1, 7,0);
    tracep->declBit(c+305,"io_qnorm_Qvm_en", false,-1);
    tracep->declBit(c+170,"io_qnorm_Norm_en", false,-1);
    tracep->declBus(c+171,"io_qnorm_Lenb", false,-1, 3,0);
    tracep->declBus(c+438,"io_A", false,-1, 31,0);
    tracep->declBus(c+439,"io_B", false,-1, 31,0);
    tracep->declBus(c+440,"io_pe_8Mul8_op", false,-1, 3,0);
    tracep->declBus(c+441,"io_A_qvm_in", false,-1, 15,0);
    tracep->declBus(c+442,"io_out", false,-1, 31,0);
    tracep->declBus(c+443,"io_qvm_out", false,-1, 15,0);
    tracep->declBus(c+444,"mulS4out_0", false,-1, 17,0);
    tracep->declBus(c+445,"mulS4out_1", false,-1, 17,0);
    tracep->declBus(c+446,"mulS4out_2", false,-1, 17,0);
    tracep->declBus(c+447,"mulS4out_3", false,-1, 17,0);
    tracep->declBus(c+448,"mulS4out_4", false,-1, 17,0);
    tracep->declBus(c+449,"mulS4out_5", false,-1, 17,0);
    tracep->declBus(c+450,"mulS4out_6", false,-1, 17,0);
    tracep->declBus(c+451,"mulS4out_7", false,-1, 17,0);
    tracep->declBus(c+452,"mulU4out_0", false,-1, 17,0);
    tracep->declBus(c+453,"mulU4out_1", false,-1, 17,0);
    tracep->declBus(c+454,"mulU4out_2", false,-1, 17,0);
    tracep->declBus(c+455,"mulU4out_3", false,-1, 17,0);
    tracep->declBus(c+456,"mulU4out_4", false,-1, 17,0);
    tracep->declBus(c+457,"mulU4out_5", false,-1, 17,0);
    tracep->declBus(c+458,"mulU4out_6", false,-1, 17,0);
    tracep->declBus(c+459,"mulU4out_7", false,-1, 17,0);
    tracep->declBus(c+460,"mulS8out_0", false,-1, 25,0);
    tracep->declBus(c+461,"mulS8out_1", false,-1, 25,0);
    tracep->declBus(c+462,"mulS8out_2", false,-1, 25,0);
    tracep->declBus(c+463,"mulS8out_3", false,-1, 25,0);
    tracep->declBus(c+464,"mulU8out_0", false,-1, 25,0);
    tracep->declBus(c+465,"mulU8out_1", false,-1, 25,0);
    tracep->declBus(c+466,"mulU8out_2", false,-1, 25,0);
    tracep->declBus(c+467,"mulU8out_3", false,-1, 25,0);
    tracep->declBus(c+468,"mulX4b", false,-1, 17,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pe_ctrl ");
    tracep->declBus(c+313,"io_rs1", false,-1, 31,0);
    tracep->declBus(c+314,"io_rs2", false,-1, 31,0);
    tracep->declBit(c+305,"io_qvm_en", false,-1);
    tracep->declBus(c+304,"io_pe_op", false,-1, 4,0);
    tracep->declBus(c+350,"io_qvmask_in", false,-1, 15,0);
    tracep->declBus(c+151,"io_csr_qnorm", false,-1, 31,0);
    tracep->declBus(c+469,"io_pe_sel", false,-1, 2,0);
    tracep->declBus(c+166,"io_io_8alu8_qnorm_Scale_a8", false,-1, 7,0);
    tracep->declBus(c+167,"io_io_8alu8_qnorm_Scale_b5", false,-1, 4,0);
    tracep->declBit(c+168,"io_io_8alu8_qnorm_Sign_en", false,-1);
    tracep->declBus(c+169,"io_io_8alu8_qnorm_Zero_point8", false,-1, 7,0);
    tracep->declBit(c+305,"io_io_8alu8_qnorm_Qvm_en", false,-1);
    tracep->declBit(c+170,"io_io_8alu8_qnorm_Norm_en", false,-1);
    tracep->declBus(c+171,"io_io_8alu8_qnorm_Lenb", false,-1, 3,0);
    tracep->declBus(c+353,"io_io_8alu8_A", false,-1, 31,0);
    tracep->declBus(c+354,"io_io_8alu8_B", false,-1, 31,0);
    tracep->declBus(c+355,"io_io_8alu8_pe_8alu8_op", false,-1, 3,0);
    tracep->declBus(c+356,"io_io_8alu8_A_qvm_in", false,-1, 15,0);
    tracep->declBus(c+390,"io_io_8br8_rs1_32", false,-1, 31,0);
    tracep->declBus(c+391,"io_io_8br8_rs2_32", false,-1, 31,0);
    tracep->declBus(c+470,"io_io_8br8_pe_8br8_type", false,-1, 2,0);
    tracep->declBit(c+168,"io_io_8br8_qnorm_Sign_en", false,-1);
    tracep->declBus(c+171,"io_io_8br8_qnorm_Lenb", false,-1, 3,0);
    tracep->declBus(c+393,"io_io_8br8_rs1_qvm_in", false,-1, 15,0);
    tracep->declBus(c+419,"io_io_8mm8_rs1", false,-1, 31,0);
    tracep->declBit(c+168,"io_io_8mm8_qnorm_Sign_en", false,-1);
    tracep->declBus(c+171,"io_io_8mm8_qnorm_Lenb", false,-1, 3,0);
    tracep->declBus(c+420,"io_io_8mm8_pe_8mm8_op", false,-1, 2,0);
    tracep->declBus(c+421,"io_io_8mm8_rs_qvm_in", false,-1, 15,0);
    tracep->declBus(c+166,"io_io_8mul8_qnorm_Scale_a8", false,-1, 7,0);
    tracep->declBus(c+167,"io_io_8mul8_qnorm_Scale_b5", false,-1, 4,0);
    tracep->declBit(c+168,"io_io_8mul8_qnorm_Sign_en", false,-1);
    tracep->declBus(c+169,"io_io_8mul8_qnorm_Zero_point8", false,-1, 7,0);
    tracep->declBit(c+305,"io_io_8mul8_qnorm_Qvm_en", false,-1);
    tracep->declBit(c+170,"io_io_8mul8_qnorm_Norm_en", false,-1);
    tracep->declBus(c+171,"io_io_8mul8_qnorm_Lenb", false,-1, 3,0);
    tracep->declBus(c+438,"io_io_8mul8_A", false,-1, 31,0);
    tracep->declBus(c+439,"io_io_8mul8_B", false,-1, 31,0);
    tracep->declBus(c+440,"io_io_8mul8_pe_8mul8_op", false,-1, 3,0);
    tracep->declBus(c+441,"io_io_8mul8_A_qvm_in", false,-1, 15,0);
    tracep->declBus(c+469,"pe_sel", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regFile ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBus(c+203,"io_raddr1", false,-1, 4,0);
    tracep->declBus(c+204,"io_raddr2", false,-1, 4,0);
    tracep->declBit(c+330,"io_wen", false,-1);
    tracep->declBus(c+186,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+329,"io_wdata", false,-1, 31,0);
    tracep->declBus(c+188,"io_wqvm", false,-1, 15,0);
    tracep->declBus(c+471,"io_rdata1", false,-1, 31,0);
    tracep->declBus(c+472,"io_rdata2", false,-1, 31,0);
    tracep->declBus(c+473,"io_rqvm", false,-1, 15,0);
    tracep->pushNamePrefix("qvm_ext ");
    tracep->declBus(c+203,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+519,"R0_en", false,-1);
    tracep->declBit(c+226,"R0_clk", false,-1);
    tracep->declBus(c+204,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+519,"R1_en", false,-1);
    tracep->declBit(c+226,"R1_clk", false,-1);
    tracep->declBus(c+186,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+474,"W0_en", false,-1);
    tracep->declBit(c+226,"W0_clk", false,-1);
    tracep->declBus(c+188,"W0_data", false,-1, 15,0);
    tracep->declBus(c+475,"R0_data", false,-1, 15,0);
    tracep->declBus(c+476,"R1_data", false,-1, 15,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+76+i*1,"Memory", true,(i+0), 15,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ext ");
    tracep->declBus(c+203,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+519,"R0_en", false,-1);
    tracep->declBit(c+226,"R0_clk", false,-1);
    tracep->declBus(c+204,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+519,"R1_en", false,-1);
    tracep->declBit(c+226,"R1_clk", false,-1);
    tracep->declBus(c+186,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+474,"W0_en", false,-1);
    tracep->declBit(c+226,"W0_clk", false,-1);
    tracep->declBus(c+329,"W0_data", false,-1, 31,0);
    tracep->declBus(c+477,"R0_data", false,-1, 31,0);
    tracep->declBus(c+478,"R1_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+108+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dcache ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+285,"io_cpu_abort", false,-1);
    tracep->declBit(c+286,"io_cpu_req_valid", false,-1);
    tracep->declBus(c+287,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+288,"io_cpu_req_bits_data", false,-1, 31,0);
    tracep->declBus(c+289,"io_cpu_req_bits_mask", false,-1, 3,0);
    tracep->declBit(c+275,"io_nasti_aw_ready", false,-1);
    tracep->declBit(c+276,"io_nasti_w_ready", false,-1);
    tracep->declBit(c+277,"io_nasti_b_valid", false,-1);
    tracep->declBit(c+278,"io_nasti_ar_ready", false,-1);
    tracep->declBit(c+279,"io_nasti_r_valid", false,-1);
    tracep->declQuad(c+238,"io_nasti_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+282,"io_cpu_resp_valid", false,-1);
    tracep->declBus(c+193,"io_cpu_resp_bits_data", false,-1, 31,0);
    tracep->declBit(c+271,"io_nasti_aw_valid", false,-1);
    tracep->declBus(c+245,"io_nasti_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+192,"io_nasti_w_valid", false,-1);
    tracep->declQuad(c+254,"io_nasti_w_bits_data", false,-1, 63,0);
    tracep->declBit(c+257,"io_nasti_w_bits_last", false,-1);
    tracep->declBit(c+141,"io_nasti_b_ready", false,-1);
    tracep->declBit(c+272,"io_nasti_ar_valid", false,-1);
    tracep->declBus(c+64,"io_nasti_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+142,"io_nasti_r_ready", false,-1);
    tracep->declBit(c+479,"writeEnable", false,-1);
    tracep->declArray(c+1,"wdata", false,-1, 127,0);
    tracep->declBit(c+480,"hit", false,-1);
    tracep->declBus(c+65,"dataMem_3_MPORT_4_addr", false,-1, 7,0);
    tracep->declBit(c+481,"dataMem_3_rdata_MPORT_3_en", false,-1);
    tracep->declBit(c+482,"dataMem_3_MPORT_4_en", false,-1);
    tracep->declBus(c+144,"state", false,-1, 2,0);
    tracep->declArray(c+66,"v", false,-1, 255,0);
    tracep->declArray(c+209,"d", false,-1, 255,0);
    tracep->declBus(c+74,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+39,"cpu_data", false,-1, 31,0);
    tracep->declBus(c+40,"cpu_mask", false,-1, 3,0);
    tracep->declBit(c+145,"read_count", false,-1);
    tracep->declBit(c+483,"read_wrap_out", false,-1);
    tracep->declBit(c+146,"write_count", false,-1);
    tracep->declBit(c+257,"io_nasti_w_bits_w_last", false,-1);
    tracep->declBit(c+147,"is_read", false,-1);
    tracep->declBit(c+5,"is_alloc", false,-1);
    tracep->declBit(c+41,"is_alloc_reg", false,-1);
    tracep->declBit(c+58,"ren_reg", false,-1);
    tracep->declArray(c+194,"rdata", false,-1, 127,0);
    tracep->declArray(c+59,"rdata_buf", false,-1, 127,0);
    tracep->declQuad(c+42,"refill_buf_0", false,-1, 63,0);
    tracep->declQuad(c+44,"refill_buf_1", false,-1, 63,0);
    tracep->declArray(c+198,"read", false,-1, 127,0);
    tracep->declBit(c+217,"is_dirty", false,-1);
    tracep->pushNamePrefix("dataMem_0_ext ");
    tracep->declBus(c+484,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+485,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+482,"RW0_wmode", false,-1);
    tracep->declBus(c+6,"RW0_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"RW0_wmask", false,-1, 3,0);
    tracep->declBus(c+486,"RW0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMem_1_ext ");
    tracep->declBus(c+484,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+485,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+482,"RW0_wmode", false,-1);
    tracep->declBus(c+8,"RW0_wdata", false,-1, 31,0);
    tracep->declBus(c+9,"RW0_wmask", false,-1, 3,0);
    tracep->declBus(c+487,"RW0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMem_2_ext ");
    tracep->declBus(c+484,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+485,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+482,"RW0_wmode", false,-1);
    tracep->declBus(c+10,"RW0_wdata", false,-1, 31,0);
    tracep->declBus(c+11,"RW0_wmask", false,-1, 3,0);
    tracep->declBus(c+488,"RW0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMem_3_ext ");
    tracep->declBus(c+484,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+485,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+482,"RW0_wmode", false,-1);
    tracep->declBus(c+12,"RW0_wdata", false,-1, 31,0);
    tracep->declBus(c+13,"RW0_wmask", false,-1, 3,0);
    tracep->declBus(c+489,"RW0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("metaMem_tag_ext ");
    tracep->declBus(c+490,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+491,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+482,"RW0_wmode", false,-1);
    tracep->declBus(c+75,"RW0_wdata", false,-1, 19,0);
    tracep->declBus(c+63,"RW0_rdata", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("icache ");
    tracep->declBit(c+226,"clock", false,-1);
    tracep->declBit(c+227,"reset", false,-1);
    tracep->declBit(c+520,"io_cpu_abort", false,-1);
    tracep->declBit(c+283,"io_cpu_req_valid", false,-1);
    tracep->declBus(c+284,"io_cpu_req_bits_addr", false,-1, 31,0);
    tracep->declBus(c+521,"io_cpu_req_bits_data", false,-1, 31,0);
    tracep->declBus(c+522,"io_cpu_req_bits_mask", false,-1, 3,0);
    tracep->declBit(c+520,"io_nasti_aw_ready", false,-1);
    tracep->declBit(c+520,"io_nasti_w_ready", false,-1);
    tracep->declBit(c+520,"io_nasti_b_valid", false,-1);
    tracep->declBit(c+273,"io_nasti_ar_ready", false,-1);
    tracep->declBit(c+274,"io_nasti_r_valid", false,-1);
    tracep->declQuad(c+238,"io_nasti_r_bits_data", false,-1, 63,0);
    tracep->declBit(c+280,"io_cpu_resp_valid", false,-1);
    tracep->declBus(c+281,"io_cpu_resp_bits_data", false,-1, 31,0);
    tracep->declBit(c+492,"io_nasti_aw_valid", false,-1);
    tracep->declBus(c+493,"io_nasti_aw_bits_addr", false,-1, 31,0);
    tracep->declBit(c+494,"io_nasti_w_valid", false,-1);
    tracep->declQuad(c+495,"io_nasti_w_bits_data", false,-1, 63,0);
    tracep->declBit(c+520,"io_nasti_w_bits_last", false,-1);
    tracep->declBit(c+497,"io_nasti_b_ready", false,-1);
    tracep->declBit(c+270,"io_nasti_ar_valid", false,-1);
    tracep->declBus(c+205,"io_nasti_ar_bits_addr", false,-1, 31,0);
    tracep->declBit(c+140,"io_nasti_r_ready", false,-1);
    tracep->declBit(c+498,"writeEnable", false,-1);
    tracep->declArray(c+14,"wdata", false,-1, 127,0);
    tracep->declBit(c+499,"hit", false,-1);
    tracep->declBus(c+206,"dataMem_3_MPORT_4_addr", false,-1, 7,0);
    tracep->declBit(c+500,"dataMem_3_rdata_MPORT_3_en", false,-1);
    tracep->declBit(c+501,"dataMem_3_MPORT_4_en", false,-1);
    tracep->declBus(c+148,"state", false,-1, 2,0);
    tracep->declArray(c+23,"v", false,-1, 255,0);
    tracep->declArray(c+31,"d", false,-1, 255,0);
    tracep->declBus(c+207,"addr_reg", false,-1, 31,0);
    tracep->declBus(c+46,"cpu_data", false,-1, 31,0);
    tracep->declBus(c+502,"cpu_mask", false,-1, 3,0);
    tracep->declBit(c+503,"read_count", false,-1);
    tracep->declBit(c+504,"read_wrap_out", false,-1);
    tracep->declBit(c+505,"write_count", false,-1);
    tracep->declBit(c+520,"io_nasti_w_bits_w_last", false,-1);
    tracep->declBit(c+149,"is_read", false,-1);
    tracep->declBit(c+18,"is_alloc", false,-1);
    tracep->declBit(c+47,"is_alloc_reg", false,-1);
    tracep->declBit(c+48,"ren_reg", false,-1);
    tracep->declArray(c+218,"rdata", false,-1, 127,0);
    tracep->declArray(c+49,"rdata_buf", false,-1, 127,0);
    tracep->declQuad(c+53,"refill_buf_0", false,-1, 63,0);
    tracep->declQuad(c+55,"refill_buf_1", false,-1, 63,0);
    tracep->declArray(c+222,"read", false,-1, 127,0);
    tracep->declBit(c+506,"is_dirty", false,-1);
    tracep->pushNamePrefix("dataMem_0_ext ");
    tracep->declBus(c+507,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+508,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+501,"RW0_wmode", false,-1);
    tracep->declBus(c+19,"RW0_wdata", false,-1, 31,0);
    tracep->declBus(c+509,"RW0_wmask", false,-1, 3,0);
    tracep->declBus(c+510,"RW0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMem_1_ext ");
    tracep->declBus(c+507,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+508,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+501,"RW0_wmode", false,-1);
    tracep->declBus(c+20,"RW0_wdata", false,-1, 31,0);
    tracep->declBus(c+511,"RW0_wmask", false,-1, 3,0);
    tracep->declBus(c+512,"RW0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMem_2_ext ");
    tracep->declBus(c+507,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+508,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+501,"RW0_wmode", false,-1);
    tracep->declBus(c+21,"RW0_wdata", false,-1, 31,0);
    tracep->declBus(c+513,"RW0_wmask", false,-1, 3,0);
    tracep->declBus(c+514,"RW0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMem_3_ext ");
    tracep->declBus(c+507,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+508,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+501,"RW0_wmode", false,-1);
    tracep->declBus(c+22,"RW0_wdata", false,-1, 31,0);
    tracep->declBus(c+515,"RW0_wmask", false,-1, 3,0);
    tracep->declBus(c+516,"RW0_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("metaMem_tag_ext ");
    tracep->declBus(c+517,"RW0_addr", false,-1, 7,0);
    tracep->declBit(c+518,"RW0_en", false,-1);
    tracep->declBit(c+226,"RW0_clk", false,-1);
    tracep->declBit(c+501,"RW0_wmode", false,-1);
    tracep->declBus(c+208,"RW0_wdata", false,-1, 19,0);
    tracep->declBus(c+57,"RW0_rdata", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VTile___024root__trace_init_top(VTile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_init_top\n"); );
    // Body
    VTile___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTile___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_4(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_5(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_6(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_7(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_8(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_9(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_10(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_11(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_12(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_13(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_14(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTile___024root__trace_full_top_15(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_4(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_5(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_6(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_7(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_8(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_9(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_10(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_11(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_12(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_13(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_14(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_chg_top_15(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTile___024root__trace_register(VTile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTile___024root__trace_full_top_0, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_1, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_2, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_3, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_4, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_5, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_6, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_7, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_8, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_9, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_10, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_11, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_12, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_13, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_14, vlSelf);
    tracep->addFullCb(&VTile___024root__trace_full_top_15, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_0, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_1, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_2, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_3, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_4, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_5, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_6, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_7, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_8, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_9, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_10, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_11, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_12, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_13, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_14, vlSelf);
    tracep->addChgCb(&VTile___024root__trace_chg_top_15, vlSelf);
    tracep->addCleanupCb(&VTile___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_0(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_0\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_0(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->Tile__DOT__dcache__DOT__wdata),128);
    bufp->fullBit(oldp+5,(vlSelf->Tile__DOT__dcache__DOT__is_alloc));
    bufp->fullIData(oldp+6,(vlSelf->Tile__DOT__dcache__DOT__wdata[0U]),32);
    bufp->fullCData(oldp+7,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_0_ext__RW0_wmask),4);
    bufp->fullIData(oldp+8,(vlSelf->Tile__DOT__dcache__DOT__wdata[1U]),32);
    bufp->fullCData(oldp+9,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_1_ext__RW0_wmask),4);
    bufp->fullIData(oldp+10,(vlSelf->Tile__DOT__dcache__DOT__wdata[2U]),32);
    bufp->fullCData(oldp+11,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_2_ext__RW0_wmask),4);
    bufp->fullIData(oldp+12,(vlSelf->Tile__DOT__dcache__DOT__wdata[3U]),32);
    bufp->fullCData(oldp+13,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_3_ext__RW0_wmask),4);
    bufp->fullWData(oldp+14,(vlSelf->Tile__DOT__icache__DOT__wdata),128);
    bufp->fullBit(oldp+18,(vlSelf->Tile__DOT__icache__DOT__is_alloc));
    bufp->fullIData(oldp+19,(vlSelf->Tile__DOT__icache__DOT__wdata[0U]),32);
    bufp->fullIData(oldp+20,(vlSelf->Tile__DOT__icache__DOT__wdata[1U]),32);
    bufp->fullIData(oldp+21,(vlSelf->Tile__DOT__icache__DOT__wdata[2U]),32);
    bufp->fullIData(oldp+22,(vlSelf->Tile__DOT__icache__DOT__wdata[3U]),32);
    bufp->fullWData(oldp+23,(vlSelf->Tile__DOT__icache__DOT__v),256);
    bufp->fullWData(oldp+31,(vlSelf->Tile__DOT__icache__DOT__d),256);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_1(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_1\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_1((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_1(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+39,(vlSelf->Tile__DOT__dcache__DOT__cpu_data),32);
    bufp->fullCData(oldp+40,(vlSelf->Tile__DOT__dcache__DOT__cpu_mask),4);
    bufp->fullBit(oldp+41,(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg));
    bufp->fullQData(oldp+42,(vlSelf->Tile__DOT__dcache__DOT__refill_buf_0),64);
    bufp->fullQData(oldp+44,(vlSelf->Tile__DOT__dcache__DOT__refill_buf_1),64);
    bufp->fullIData(oldp+46,(vlSelf->Tile__DOT__icache__DOT__cpu_data),32);
    bufp->fullBit(oldp+47,(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg));
    bufp->fullBit(oldp+48,(vlSelf->Tile__DOT__icache__DOT__ren_reg));
    bufp->fullWData(oldp+49,(vlSelf->Tile__DOT__icache__DOT__rdata_buf),128);
    bufp->fullQData(oldp+53,(vlSelf->Tile__DOT__icache__DOT__refill_buf_0),64);
    bufp->fullQData(oldp+55,(vlSelf->Tile__DOT__icache__DOT__refill_buf_1),64);
    bufp->fullIData(oldp+57,(vlSelf->Tile__DOT__icache__DOT___metaMem_tag_ext_RW0_rdata),20);
    bufp->fullBit(oldp+58,(vlSelf->Tile__DOT__dcache__DOT__ren_reg));
    bufp->fullWData(oldp+59,(vlSelf->Tile__DOT__dcache__DOT__rdata_buf),128);
    bufp->fullIData(oldp+63,(vlSelf->Tile__DOT__dcache__DOT___metaMem_tag_ext_RW0_rdata),20);
    bufp->fullIData(oldp+64,((0xfffffff0U & vlSelf->Tile__DOT__dcache__DOT__addr_reg)),32);
    bufp->fullCData(oldp+65,((0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                                       >> 4U))),8);
    bufp->fullWData(oldp+66,(vlSelf->Tile__DOT__dcache__DOT__v),256);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_2(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_2\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_2((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_2(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+74,(vlSelf->Tile__DOT__dcache__DOT__addr_reg),32);
    bufp->fullIData(oldp+75,((vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                              >> 0xcU)),20);
    bufp->fullSData(oldp+76,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[0]),16);
    bufp->fullSData(oldp+77,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[1]),16);
    bufp->fullSData(oldp+78,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[2]),16);
    bufp->fullSData(oldp+79,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[3]),16);
    bufp->fullSData(oldp+80,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[4]),16);
    bufp->fullSData(oldp+81,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[5]),16);
    bufp->fullSData(oldp+82,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[6]),16);
    bufp->fullSData(oldp+83,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[7]),16);
    bufp->fullSData(oldp+84,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[8]),16);
    bufp->fullSData(oldp+85,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[9]),16);
    bufp->fullSData(oldp+86,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[10]),16);
    bufp->fullSData(oldp+87,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[11]),16);
    bufp->fullSData(oldp+88,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[12]),16);
    bufp->fullSData(oldp+89,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[13]),16);
    bufp->fullSData(oldp+90,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[14]),16);
    bufp->fullSData(oldp+91,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[15]),16);
    bufp->fullSData(oldp+92,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[16]),16);
    bufp->fullSData(oldp+93,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[17]),16);
    bufp->fullSData(oldp+94,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[18]),16);
    bufp->fullSData(oldp+95,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[19]),16);
    bufp->fullSData(oldp+96,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[20]),16);
    bufp->fullSData(oldp+97,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[21]),16);
    bufp->fullSData(oldp+98,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[22]),16);
    bufp->fullSData(oldp+99,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[23]),16);
    bufp->fullSData(oldp+100,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[24]),16);
    bufp->fullSData(oldp+101,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[25]),16);
    bufp->fullSData(oldp+102,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[26]),16);
    bufp->fullSData(oldp+103,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[27]),16);
    bufp->fullSData(oldp+104,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[28]),16);
    bufp->fullSData(oldp+105,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[29]),16);
    bufp->fullSData(oldp+106,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[30]),16);
    bufp->fullSData(oldp+107,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[31]),16);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_3(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_3\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_3((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_3(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+108,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+109,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+110,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+111,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+112,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+113,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+114,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+115,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+116,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+117,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+118,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+119,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+120,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+121,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+122,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+123,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+124,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+125,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+126,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+127,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+128,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+129,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+130,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+131,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+132,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+133,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+134,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+135,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+136,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+137,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+138,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+139,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[31]),32);
    bufp->fullBit(oldp+140,((6U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))));
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_4(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_4(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_4\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_4((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_4(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+141,(vlSelf->Tile__DOT__dcache__DOT___io_nasti_b_ready_output));
    bufp->fullBit(oldp+142,((6U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))));
    bufp->fullCData(oldp+143,(vlSelf->Tile__DOT__arb__DOT__state),3);
    bufp->fullCData(oldp+144,(vlSelf->Tile__DOT__dcache__DOT__state),3);
    bufp->fullBit(oldp+145,(vlSelf->Tile__DOT__dcache__DOT__read_count));
    bufp->fullBit(oldp+146,(vlSelf->Tile__DOT__dcache__DOT__write_count));
    bufp->fullBit(oldp+147,((1U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))));
    bufp->fullCData(oldp+148,(vlSelf->Tile__DOT__icache__DOT__state),3);
    bufp->fullBit(oldp+149,((1U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))));
    bufp->fullIData(oldp+150,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc),32);
    bufp->fullIData(oldp+151,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm),32);
    bufp->fullBit(oldp+152,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP));
    bufp->fullBit(oldp+153,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
    bufp->fullBit(oldp+154,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP));
    bufp->fullBit(oldp+155,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
    bufp->fullIData(oldp+156,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp),32);
    bufp->fullIData(oldp+157,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch),32);
    bufp->fullIData(oldp+158,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause),32);
    bufp->fullIData(oldp+159,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr),32);
    bufp->fullIData(oldp+160,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost),32);
    bufp->fullIData(oldp+161,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mfromhost),32);
    bufp->fullIData(oldp+162,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qstate),32);
    bufp->fullBit(oldp+163,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__unnamedblk1__DOT__isEret));
    bufp->fullIData(oldp+164,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__unnamedblk1__DOT__wdata),32);
    bufp->fullBit(oldp+165,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isInstRet));
    bufp->fullCData(oldp+166,((0xffU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                        >> 0x16U))),8);
    bufp->fullCData(oldp+167,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                        >> 0x11U))),5);
    bufp->fullBit(oldp+168,((1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                   >> 7U))));
    bufp->fullCData(oldp+169,((0xffU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                        >> 9U))),8);
    bufp->fullBit(oldp+170,((1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                   >> 8U))));
    bufp->fullCData(oldp+171,((0xfU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm)),4);
    bufp->fullIData(oldp+172,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst),32);
    bufp->fullIData(oldp+173,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc),32);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_5(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_5(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_5\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_5((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_5(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+174,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu),32);
    bufp->fullIData(oldp+175,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_csr_in),32);
    bufp->fullSData(oldp+176,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_qvmask),16);
    bufp->fullIData(oldp+177,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pe),32);
    bufp->fullIData(oldp+178,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_mul),32);
    bufp->fullCData(oldp+179,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__st_type),2);
    bufp->fullCData(oldp+180,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type),3);
    bufp->fullCData(oldp+181,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel),3);
    bufp->fullBit(oldp+182,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en));
    bufp->fullCData(oldp+183,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd),3);
    bufp->fullBit(oldp+184,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__illegal));
    bufp->fullBit(oldp+185,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc_check));
    bufp->fullCData(oldp+186,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+187,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                        >> 7U))),32);
    bufp->fullSData(oldp+188,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))
                                ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_qvmask)
                                : 0U)),16);
    bufp->fullBit(oldp+189,((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))));
    bufp->fullBit(oldp+190,((5U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))));
    bufp->fullBit(oldp+191,((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd))));
    bufp->fullBit(oldp+192,(vlSelf->Tile__DOT__dcache__DOT___io_nasti_w_valid_output));
    bufp->fullIData(oldp+193,(vlSelf->Tile__DOT___dcache_io_cpu_resp_bits_data),32);
    bufp->fullWData(oldp+194,(vlSelf->Tile__DOT__dcache__DOT__rdata),128);
    bufp->fullWData(oldp+198,(vlSelf->Tile__DOT__dcache__DOT__read),128);
    bufp->fullIData(oldp+202,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst),32);
    bufp->fullCData(oldp+203,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+204,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+205,((0xfffffff0U & vlSelf->Tile__DOT__icache__DOT__addr_reg)),32);
    bufp->fullCData(oldp+206,((0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                        >> 4U))),8);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_6(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_6(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_6\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_6((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_6(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_6\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+207,(vlSelf->Tile__DOT__icache__DOT__addr_reg),32);
    bufp->fullIData(oldp+208,((vlSelf->Tile__DOT__icache__DOT__addr_reg 
                               >> 0xcU)),20);
    bufp->fullWData(oldp+209,(vlSelf->Tile__DOT__dcache__DOT__d),256);
    bufp->fullBit(oldp+217,(vlSelf->Tile__DOT__dcache__DOT__is_dirty));
    bufp->fullWData(oldp+218,(vlSelf->Tile__DOT__icache__DOT__rdata),128);
    bufp->fullWData(oldp+222,(vlSelf->Tile__DOT__icache__DOT__read),128);
    bufp->fullBit(oldp+226,(vlSelf->clock));
    bufp->fullBit(oldp+227,(vlSelf->reset));
    bufp->fullBit(oldp+228,(vlSelf->io_host_fromhost_valid));
    bufp->fullIData(oldp+229,(vlSelf->io_host_fromhost_bits),32);
    bufp->fullBit(oldp+230,(vlSelf->io_nasti_aw_ready));
    bufp->fullBit(oldp+231,(vlSelf->io_nasti_w_ready));
    bufp->fullBit(oldp+232,(vlSelf->io_nasti_b_valid));
    bufp->fullCData(oldp+233,(vlSelf->io_nasti_b_bits_id),5);
    bufp->fullCData(oldp+234,(vlSelf->io_nasti_b_bits_resp),2);
    bufp->fullBit(oldp+235,(vlSelf->io_nasti_ar_ready));
    bufp->fullBit(oldp+236,(vlSelf->io_nasti_r_valid));
    bufp->fullCData(oldp+237,(vlSelf->io_nasti_r_bits_id),5);
    bufp->fullQData(oldp+238,(vlSelf->io_nasti_r_bits_data),64);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_7(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_7(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_7\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_7((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_7(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_7\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+240,(vlSelf->io_nasti_r_bits_resp),2);
    bufp->fullBit(oldp+241,(vlSelf->io_nasti_r_bits_last));
    bufp->fullIData(oldp+242,(vlSelf->io_host_tohost),32);
    bufp->fullBit(oldp+243,(vlSelf->io_nasti_aw_valid));
    bufp->fullCData(oldp+244,(vlSelf->io_nasti_aw_bits_id),5);
    bufp->fullIData(oldp+245,(vlSelf->io_nasti_aw_bits_addr),32);
    bufp->fullCData(oldp+246,(vlSelf->io_nasti_aw_bits_len),8);
    bufp->fullCData(oldp+247,(vlSelf->io_nasti_aw_bits_size),3);
    bufp->fullCData(oldp+248,(vlSelf->io_nasti_aw_bits_burst),2);
    bufp->fullBit(oldp+249,(vlSelf->io_nasti_aw_bits_lock));
    bufp->fullCData(oldp+250,(vlSelf->io_nasti_aw_bits_cache),4);
    bufp->fullCData(oldp+251,(vlSelf->io_nasti_aw_bits_prot),3);
    bufp->fullCData(oldp+252,(vlSelf->io_nasti_aw_bits_qos),4);
    bufp->fullBit(oldp+253,(vlSelf->io_nasti_w_valid));
    bufp->fullQData(oldp+254,(vlSelf->io_nasti_w_bits_data),64);
    bufp->fullCData(oldp+256,(vlSelf->io_nasti_w_bits_strb),8);
    bufp->fullBit(oldp+257,(vlSelf->io_nasti_w_bits_last));
    bufp->fullBit(oldp+258,(vlSelf->io_nasti_b_ready));
    bufp->fullBit(oldp+259,(vlSelf->io_nasti_ar_valid));
    bufp->fullCData(oldp+260,(vlSelf->io_nasti_ar_bits_id),5);
    bufp->fullIData(oldp+261,(vlSelf->io_nasti_ar_bits_addr),32);
    bufp->fullCData(oldp+262,(vlSelf->io_nasti_ar_bits_len),8);
    bufp->fullCData(oldp+263,(vlSelf->io_nasti_ar_bits_size),3);
    bufp->fullCData(oldp+264,(vlSelf->io_nasti_ar_bits_burst),2);
    bufp->fullBit(oldp+265,(vlSelf->io_nasti_ar_bits_lock));
    bufp->fullCData(oldp+266,(vlSelf->io_nasti_ar_bits_cache),4);
    bufp->fullCData(oldp+267,(vlSelf->io_nasti_ar_bits_prot),3);
    bufp->fullCData(oldp+268,(vlSelf->io_nasti_ar_bits_qos),4);
    bufp->fullBit(oldp+269,(vlSelf->io_nasti_r_ready));
    bufp->fullBit(oldp+270,(vlSelf->Tile__DOT__icache__DOT___io_nasti_ar_valid_output));
    bufp->fullBit(oldp+271,(vlSelf->Tile__DOT__dcache__DOT___io_nasti_aw_valid_output));
    bufp->fullBit(oldp+272,(vlSelf->Tile__DOT__dcache__DOT___io_nasti_ar_valid_output));
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_8(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_8(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_8\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_8((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_8(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+273,(vlSelf->Tile__DOT__arb__DOT___io_icache_ar_ready_output));
    bufp->fullBit(oldp+274,(((IData)(vlSelf->io_nasti_r_valid) 
                             & (1U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)))));
    bufp->fullBit(oldp+275,(vlSelf->Tile__DOT__arb__DOT___io_dcache_aw_ready_output));
    bufp->fullBit(oldp+276,(vlSelf->Tile__DOT__arb__DOT___io_dcache_w_ready_output));
    bufp->fullBit(oldp+277,(((IData)(vlSelf->io_nasti_b_valid) 
                             & (4U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)))));
    bufp->fullBit(oldp+278,(vlSelf->Tile__DOT__arb__DOT___io_dcache_ar_ready_output));
    bufp->fullBit(oldp+279,(((IData)(vlSelf->io_nasti_r_valid) 
                             & (2U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)))));
    bufp->fullBit(oldp+280,(vlSelf->Tile__DOT__icache__DOT___io_cpu_resp_valid_output));
    bufp->fullIData(oldp+281,(vlSelf->Tile__DOT__icache__DOT__read[
                              (3U & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                     >> 2U))]),32);
    bufp->fullBit(oldp+282,(vlSelf->Tile__DOT__dcache__DOT___io_cpu_resp_valid_output));
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__stall)))));
    bufp->fullIData(oldp+284,(vlSelf->Tile__DOT___core_io_icache_req_bits_addr),32);
    bufp->fullBit(oldp+285,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_expt_output));
    bufp->fullBit(oldp+286,(vlSelf->Tile__DOT___core_io_dcache_req_valid));
    bufp->fullIData(oldp+287,((vlSelf->__VdfgTmp_h1d4f0df6__0 
                               << 2U)),32);
    bufp->fullIData(oldp+288,((vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_br_rs2 
                               << (0x18U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT__sum 
                                            << 3U)))),32);
    bufp->fullCData(oldp+289,(vlSelf->Tile__DOT___core_io_dcache_req_bits_mask),4);
    bufp->fullCData(oldp+290,(vlSelf->Tile__DOT__core__DOT___ctrl_io_pc_sel),2);
    bufp->fullBit(oldp+291,(((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_10)) 
                             & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_9) 
                                | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_8)) 
                                   & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_7) 
                                      | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_6)) 
                                         & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_5) 
                                            | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_2)) 
                                               & (0x10000073U 
                                                  == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))))))))));
    bufp->fullBit(oldp+292,(((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h67a27549__0)) 
                             & ((0x67U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_8)) 
                                   & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_7) 
                                      | ((0x23U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                         | ((0xa3U 
                                             == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                            | ((0x123U 
                                                == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                               | ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_17) 
                                                  | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_15)) 
                                                     & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_14) 
                                                        | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_13)) 
                                                           & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h28509d5e__0))))))))))))));
    bufp->fullBit(oldp+293,(((~ ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h8bec0e33__0) 
                                 | (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_19))) 
                             & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_16) 
                                | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_18)) 
                                   & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h28509d5e__0))))));
    bufp->fullCData(oldp+294,(vlSelf->Tile__DOT__core__DOT___ctrl_io_imm_sel),3);
    bufp->fullCData(oldp+295,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_alu_op_out),4);
    bufp->fullCData(oldp+296,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_br_op_out),3);
    bufp->fullCData(oldp+297,(vlSelf->Tile__DOT__core__DOT___ctrl_io_st_type),2);
    bufp->fullCData(oldp+298,(((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h17a479ec__0)
                                ? 0U : ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                         ? 3U : ((0x83U 
                                                  == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                  ? 2U
                                                  : 
                                                 ((0x103U 
                                                   == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                   ? 1U
                                                   : 
                                                  ((0x203U 
                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                    ? 5U
                                                    : 
                                                   ((0x283U 
                                                     == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                                    << 2U))))))),3);
    bufp->fullCData(oldp+299,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out),4);
    bufp->fullCData(oldp+300,(((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_10)
                                ? 0U : ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_9)
                                         ? 2U : ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_8)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_7)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_24)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_14) 
                                                     | ((0x2f3U 
                                                         == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                                        | ((0x373U 
                                                            == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                                           | ((0x3f3U 
                                                               == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                                              | (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_23)))))
                                                     ? 3U
                                                     : 
                                                    ((0x10200073U 
                                                      == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_22)
                                                       ? 5U
                                                       : 
                                                      ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h990c992e__0) 
                                                       << 2U)))))))))),3);
    bufp->fullBit(oldp+301,(((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_21) 
                             | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_8)) 
                                & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_7) 
                                   | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_20)) 
                                      & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_17) 
                                         | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_15)) 
                                            & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_4) 
                                               | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_12)) 
                                                  & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h28509d5e__0)))))))))));
    bufp->fullCData(oldp+302,((((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h34518d2f__0) 
                                | (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_24))
                                ? 0U : ((0xf3U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                         ? 1U : ((0x173U 
                                                  == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                  ? 2U
                                                  : 
                                                 ((0x1f3U 
                                                   == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                   ? 3U
                                                   : 
                                                  ((0x2f3U 
                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                    ? 1U
                                                    : 
                                                   ((0x373U 
                                                     == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                     ? 2U
                                                     : 
                                                    ((0x3f3U 
                                                      == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_23) 
                                                      << 2U))))))))),3);
    bufp->fullBit(oldp+303,((1U & (~ ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_hdfe1f980__0) 
                                      | (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h28509d5e__0))))));
    bufp->fullCData(oldp+304,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_pe_op_out),5);
    bufp->fullBit(oldp+305,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8alu8_qnorm_Qvm_en));
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_9(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_9(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_9\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_9((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_9(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_9\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<9>/*287:0*/ __Vtemp_hc3bf5703__0;
    // Body
    bufp->fullIData(oldp+306,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_pc),32);
    bufp->fullBit(oldp+307,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__started));
    bufp->fullBit(oldp+308,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__stall));
    bufp->fullQData(oldp+309,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc),33);
    bufp->fullIData(oldp+311,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_br_rs2),32);
    bufp->fullIData(oldp+312,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift),32);
    bufp->fullIData(oldp+313,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1),32);
    bufp->fullIData(oldp+314,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs2),32);
    bufp->fullIData(oldp+315,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___alu_io_out),32);
    bufp->fullIData(oldp+316,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT__sum),32);
    bufp->fullIData(oldp+317,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin),32);
    bufp->fullIData(oldp+318,(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_rs1_in0),32);
    bufp->fullBit(oldp+319,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___brCond_io_taken));
    bufp->fullIData(oldp+320,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff),32);
    bufp->fullBit(oldp+321,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__isSameSign));
    bufp->fullBit(oldp+322,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__lt));
    bufp->fullBit(oldp+323,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__ltu));
    bufp->fullIData(oldp+324,(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__bypass__io_idata_load),32);
    bufp->fullIData(oldp+325,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_output),32);
    bufp->fullIData(oldp+326,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__bypass__DOT__rs_out),32);
    bufp->fullBit(oldp+327,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__bypass__DOT___io_rs1vaild_output));
    bufp->fullBit(oldp+328,(((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__bypass__DOT____VdfgTmp_h8e44abc1__0) 
                             & ((0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                 >> 0x14U))) 
                                & (((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                              >> 7U)) 
                                    == (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                 >> 0x14U))) 
                                   & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en))))));
    __Vtemp_hc3bf5703__0[0U] = (IData)((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu)));
    __Vtemp_hc3bf5703__0[1U] = ((vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__bypass__io_idata_load 
                                 << 1U) | (IData)(((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu)) 
                                                   >> 0x20U)));
    __Vtemp_hc3bf5703__0[2U] = ((((IData)(4U) + vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc) 
                                 << 2U) | ((2U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__bypass__io_idata_load 
                                                  >> 0x1eU)) 
                                           | (vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__bypass__io_idata_load 
                                              >> 0x1fU)));
    __Vtemp_hc3bf5703__0[3U] = ((vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_output 
                                 << 3U) | (((IData)(4U) 
                                            + vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc) 
                                           >> 0x1eU));
    __Vtemp_hc3bf5703__0[4U] = ((vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pe 
                                 << 4U) | (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_output 
                                           >> 0x1dU));
    __Vtemp_hc3bf5703__0[5U] = ((vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_mul 
                                 << 5U) | (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pe 
                                           >> 0x1cU));
    __Vtemp_hc3bf5703__0[6U] = (((IData)((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu))) 
                                 << 6U) | (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_mul 
                                           >> 0x1bU));
    __Vtemp_hc3bf5703__0[7U] = (((IData)((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu))) 
                                 >> 0x1aU) | (((IData)((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu))) 
                                               << 7U) 
                                              | ((IData)(
                                                         ((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu)) 
                                                          >> 0x20U)) 
                                                 << 6U)));
    __Vtemp_hc3bf5703__0[8U] = (((0x3fU & ((IData)((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu))) 
                                           >> 0x19U)) 
                                 | ((IData)(((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu)) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (0xc0U 
                                                  & ((0x40U 
                                                      & ((IData)((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu))) 
                                                         >> 0x19U)) 
                                                     | ((IData)(
                                                                ((QData)((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu)) 
                                                                 >> 0x20U)) 
                                                        << 7U))));
    bufp->fullIData(oldp+329,(((0x107U >= (0x1ffU & 
                                           ((IData)(0x21U) 
                                            * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x21U) 
                                             * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))))
                                     ? 0U : (__Vtemp_hc3bf5703__0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & ((IData)(0x21U) 
                                                     * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)))))) 
                                   | (__Vtemp_hc3bf5703__0[
                                      (0xfU & (((IData)(0x21U) 
                                                * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)) 
                                               >> 5U))] 
                                      >> (0x1fU & ((IData)(0x21U) 
                                                   * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)))))
                                : 0U)),32);
    bufp->fullBit(oldp+330,(((~ ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_expt_output) 
                                 | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__stall))) 
                             & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en))));
    bufp->fullIData(oldp+331,(((IData)(0x100U) + ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV) 
                                                  << 6U))),32);
    bufp->fullIData(oldp+332,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_0),32);
    bufp->fullIData(oldp+333,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh),32);
    bufp->fullIData(oldp+334,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle),32);
    bufp->fullIData(oldp+335,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh),32);
    bufp->fullIData(oldp+336,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret),32);
    bufp->fullIData(oldp+337,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth),32);
    bufp->fullCData(oldp+338,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV),2);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_10(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_10(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_10\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_10((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_10(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_10\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+339,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1),2);
    bufp->fullBit(oldp+340,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE));
    bufp->fullBit(oldp+341,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1));
    bufp->fullBit(oldp+342,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEcall));
    bufp->fullBit(oldp+343,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEbreak));
    bufp->fullBit(oldp+344,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen));
    bufp->fullBit(oldp+345,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__iaddrInvalid));
    bufp->fullBit(oldp+346,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__laddrInvalid));
    bufp->fullBit(oldp+347,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__saddrInvalid));
    bufp->fullIData(oldp+348,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___immGen_io_out),32);
    bufp->fullIData(oldp+349,(((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__mul__DOT____VdfgTmp_h5a0d4b50__0)
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                                : (((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out)) 
                                    | ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out)) 
                                       | (1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out))))
                                    ? (IData)((vlSelf->Tile__DOT__core__DOT__dpath__DOT__mul__DOT___GEN_0 
                                               >> 0x20U))
                                    : ((0U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out))
                                        ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__mul__DOT___GEN_0)
                                        : vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1)))),32);
    bufp->fullSData(oldp+350,(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in),16);
    bufp->fullSData(oldp+351,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___mm8x8_io_qvm_out)
                                : ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                    ? ((0U == (IData)(vlSelf->__VdfgTmp_h6297395b__0))
                                        ? ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                            ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                                            : 0U) : 0U)
                                    : ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                        ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___br8x8_io_qvm_out)
                                        : ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                            ? 0U : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)))))),16);
    bufp->fullIData(oldp+352,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3) 
                                                   >> 8U)))) 
                                    << 9U) | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3))
                                : ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___mul8x8_io_out
                                    : ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                        ? ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                            ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                                            : 0U) : 
                                       ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                         ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___alu8x8_io_out
                                         : vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1))))),32);
    bufp->fullIData(oldp+353,(((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                                : 0U)),32);
    bufp->fullIData(oldp+354,(((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs2
                                : 0U)),32);
    bufp->fullCData(oldp+355,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8alu8_pe_8alu8_op),4);
    bufp->fullSData(oldp+356,(((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                                : 0U)),16);
    bufp->fullIData(oldp+357,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___alu8x8_io_out),32);
    bufp->fullCData(oldp+358,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_0),8);
    bufp->fullCData(oldp+359,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_1),8);
    bufp->fullCData(oldp+360,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_2),8);
    bufp->fullCData(oldp+361,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_3),8);
    bufp->fullCData(oldp+362,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_4),8);
    bufp->fullCData(oldp+363,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_5),8);
    bufp->fullCData(oldp+364,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_6),8);
    bufp->fullCData(oldp+365,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_0),8);
    bufp->fullCData(oldp+366,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_1),8);
    bufp->fullCData(oldp+367,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_2),8);
    bufp->fullCData(oldp+368,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_3),8);
    bufp->fullCData(oldp+369,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_4),8);
    bufp->fullCData(oldp+370,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_5),8);
    bufp->fullCData(oldp+371,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_6),8);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_11(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_11(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_11\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_11((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_11(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_11\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+372,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B8_0),16);
    bufp->fullSData(oldp+373,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B8_1),16);
    bufp->fullSData(oldp+374,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B8_2),16);
    bufp->fullSData(oldp+375,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B8_0),16);
    bufp->fullSData(oldp+376,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B8_1),16);
    bufp->fullSData(oldp+377,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B8_2),16);
    bufp->fullIData(oldp+378,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_0),23);
    bufp->fullIData(oldp+379,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_1),23);
    bufp->fullIData(oldp+380,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_2),23);
    bufp->fullIData(oldp+381,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_3),23);
    bufp->fullIData(oldp+382,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_4),23);
    bufp->fullIData(oldp+383,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_5),23);
    bufp->fullIData(oldp+384,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_6),23);
    bufp->fullIData(oldp+385,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_7),23);
    bufp->fullIData(oldp+386,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out8b_Unorm_0),31);
    bufp->fullIData(oldp+387,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out8b_Unorm_1),31);
    bufp->fullIData(oldp+388,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out8b_Unorm_2),31);
    bufp->fullIData(oldp+389,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out8b_Unorm_3),31);
    bufp->fullIData(oldp+390,(((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                                : 0U)),32);
    bufp->fullIData(oldp+391,(((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs2
                                : 0U)),32);
    bufp->fullCData(oldp+392,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8br8_pe_8br8_type),4);
    bufp->fullSData(oldp+393,(((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                                : 0U)),16);
    bufp->fullSData(oldp+394,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___br8x8_io_qvm_out),16);
    bufp->fullCData(oldp+395,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_0),8);
    bufp->fullCData(oldp+396,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_1),8);
    bufp->fullCData(oldp+397,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_2),8);
    bufp->fullCData(oldp+398,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_3),8);
    bufp->fullCData(oldp+399,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_4),8);
    bufp->fullCData(oldp+400,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_5),8);
    bufp->fullCData(oldp+401,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_6),8);
    bufp->fullCData(oldp+402,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_7),8);
    bufp->fullCData(oldp+403,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_0),8);
    bufp->fullCData(oldp+404,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_1),8);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_12(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_12(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_12\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_12((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_12(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_12\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+405,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_2),8);
    bufp->fullCData(oldp+406,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_3),8);
    bufp->fullCData(oldp+407,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_4),8);
    bufp->fullCData(oldp+408,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_5),8);
    bufp->fullCData(oldp+409,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_6),8);
    bufp->fullCData(oldp+410,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_7),8);
    bufp->fullSData(oldp+411,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B8_0),16);
    bufp->fullSData(oldp+412,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B8_1),16);
    bufp->fullSData(oldp+413,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B8_2),16);
    bufp->fullSData(oldp+414,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B8_3),16);
    bufp->fullSData(oldp+415,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B8_0),16);
    bufp->fullSData(oldp+416,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B8_1),16);
    bufp->fullSData(oldp+417,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B8_2),16);
    bufp->fullSData(oldp+418,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B8_3),16);
    bufp->fullIData(oldp+419,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                                : 0U)),32);
    bufp->fullCData(oldp+420,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8mm8_pe_8mm8_op),3);
    bufp->fullSData(oldp+421,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                                : 0U)),16);
    bufp->fullIData(oldp+422,((((- (IData)((1U & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3) 
                                                  >> 8U)))) 
                                << 9U) | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3))),32);
    bufp->fullSData(oldp+423,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___mm8x8_io_qvm_out),16);
    bufp->fullCData(oldp+424,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_0),5);
    bufp->fullCData(oldp+425,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_1),5);
    bufp->fullCData(oldp+426,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_2),5);
    bufp->fullCData(oldp+427,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_3),5);
    bufp->fullCData(oldp+428,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_4),5);
    bufp->fullCData(oldp+429,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_5),5);
    bufp->fullCData(oldp+430,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_6),5);
    bufp->fullCData(oldp+431,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_7),5);
    bufp->fullSData(oldp+432,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_0),9);
    bufp->fullSData(oldp+433,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_1),9);
    bufp->fullSData(oldp+434,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_2),9);
    bufp->fullSData(oldp+435,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_3),9);
    bufp->fullCData(oldp+436,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4),5);
    bufp->fullSData(oldp+437,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out8),9);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_13(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_13(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_13\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_13((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_13(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_13\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+438,(((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                                : 0U)),32);
    bufp->fullIData(oldp+439,(((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs2
                                : 0U)),32);
    bufp->fullCData(oldp+440,(vlSelf->__VdfgTmp_h6297395b__0),4);
    bufp->fullSData(oldp+441,(((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                                : 0U)),16);
    bufp->fullIData(oldp+442,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___mul8x8_io_out),32);
    bufp->fullSData(oldp+443,(((0U == (IData)(vlSelf->__VdfgTmp_h6297395b__0))
                                ? ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                    ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                                    : 0U) : 0U)),16);
    bufp->fullIData(oldp+444,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_0),18);
    bufp->fullIData(oldp+445,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_1),18);
    bufp->fullIData(oldp+446,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_2),18);
    bufp->fullIData(oldp+447,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_3),18);
    bufp->fullIData(oldp+448,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_4),18);
    bufp->fullIData(oldp+449,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_5),18);
    bufp->fullIData(oldp+450,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_6),18);
    bufp->fullIData(oldp+451,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_7),18);
    bufp->fullIData(oldp+452,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_0),18);
    bufp->fullIData(oldp+453,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_1),18);
    bufp->fullIData(oldp+454,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_2),18);
    bufp->fullIData(oldp+455,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_3),18);
    bufp->fullIData(oldp+456,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_4),18);
    bufp->fullIData(oldp+457,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_5),18);
    bufp->fullIData(oldp+458,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_6),18);
    bufp->fullIData(oldp+459,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_7),18);
    bufp->fullIData(oldp+460,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS8out_0),26);
    bufp->fullIData(oldp+461,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS8out_1),26);
    bufp->fullIData(oldp+462,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS8out_2),26);
    bufp->fullIData(oldp+463,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS8out_3),26);
    bufp->fullIData(oldp+464,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU8out_0),26);
    bufp->fullIData(oldp+465,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU8out_1),26);
    bufp->fullIData(oldp+466,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU8out_2),26);
    bufp->fullIData(oldp+467,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU8out_3),26);
    bufp->fullIData(oldp+468,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulX4b),18);
    bufp->fullCData(oldp+469,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel),3);
    bufp->fullCData(oldp+470,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8br8_pe_8br8_type),3);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_14(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_14(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_14\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_14((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_14(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_14\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+471,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___regFile_io_rdata1),32);
    bufp->fullIData(oldp+472,(((0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                >> 0x14U)))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory
                               [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                          >> 0x14U))]
                                : 0U)),32);
    bufp->fullSData(oldp+473,(((0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                                >> 0xfU)))
                                ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory
                               [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                          >> 0xfU))]
                                : vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory
                               [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                          >> 0x14U))])),16);
    bufp->fullBit(oldp+474,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT___T_1));
    bufp->fullSData(oldp+475,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                         >> 0xfU))]),16);
    bufp->fullSData(oldp+476,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                         >> 0x14U))]),16);
    bufp->fullIData(oldp+477,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+478,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                         >> 0x14U))]),32);
    bufp->fullBit(oldp+479,(vlSelf->Tile__DOT__dcache__DOT__writeEnable));
    bufp->fullBit(oldp+480,(vlSelf->Tile__DOT__dcache__DOT__hit));
    bufp->fullBit(oldp+481,(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_rdata_MPORT_3_en));
    bufp->fullBit(oldp+482,(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_MPORT_4_en));
    bufp->fullBit(oldp+483,(vlSelf->Tile__DOT__dcache__DOT__read_wrap_out));
    bufp->fullCData(oldp+484,(vlSelf->Tile__DOT__dcache__DOT___GEN_0),8);
    bufp->fullBit(oldp+485,(vlSelf->Tile__DOT__dcache__DOT___GEN_1));
    bufp->fullIData(oldp+486,((((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                & (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN_0))
                                ? vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT__Memory
                               [vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN]
                                : 0U)),32);
    bufp->fullIData(oldp+487,((((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                & (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN_0))
                                ? vlSelf->Tile__DOT__dcache__DOT__dataMem_1_ext__DOT__Memory
                               [vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN]
                                : 0U)),32);
    bufp->fullIData(oldp+488,((((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                & (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN_0))
                                ? vlSelf->Tile__DOT__dcache__DOT__dataMem_2_ext__DOT__Memory
                               [vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN]
                                : 0U)),32);
    bufp->fullIData(oldp+489,((((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                & (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN_0))
                                ? vlSelf->Tile__DOT__dcache__DOT__dataMem_3_ext__DOT__Memory
                               [vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN]
                                : 0U)),32);
    bufp->fullCData(oldp+490,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__metaMem_tag_ext__RW0_addr),8);
    bufp->fullBit(oldp+491,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__metaMem_tag_ext__RW0_en));
    bufp->fullBit(oldp+492,(((0U != (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                             & ((1U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                                 ? ((~ (IData)(vlSelf->Tile__DOT__icache__DOT__hit)) 
                                    & (IData)(vlSelf->Tile__DOT__icache__DOT__is_dirty))
                                 : ((2U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                    & ((~ (IData)(vlSelf->Tile__DOT__icache__DOT___T_34)) 
                                       & (IData)(vlSelf->Tile__DOT__icache__DOT__is_dirty)))))));
    bufp->fullIData(oldp+493,(((vlSelf->Tile__DOT__icache__DOT___metaMem_tag_ext_RW0_rdata 
                                << 0xcU) | (0xff0U 
                                            & vlSelf->Tile__DOT__icache__DOT__addr_reg))),32);
    bufp->fullBit(oldp+494,(((~ (IData)(vlSelf->Tile__DOT__icache__DOT___GEN_4)) 
                             & (3U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)))));
    bufp->fullQData(oldp+495,(((IData)(vlSelf->Tile__DOT__icache__DOT__write_count)
                                ? (((QData)((IData)(
                                                    vlSelf->Tile__DOT__icache__DOT__read[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Tile__DOT__icache__DOT__read[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->Tile__DOT__icache__DOT__read[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Tile__DOT__icache__DOT__read[0U]))))),64);
    bufp->fullBit(oldp+497,(((~ ((IData)(vlSelf->Tile__DOT__icache__DOT___GEN_4) 
                                 | (3U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)))) 
                             & (4U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)))));
    bufp->fullBit(oldp+498,(vlSelf->Tile__DOT__icache__DOT__writeEnable));
    bufp->fullBit(oldp+499,(vlSelf->Tile__DOT__icache__DOT__hit));
    bufp->fullBit(oldp+500,(vlSelf->Tile__DOT__icache__DOT__dataMem_3_rdata_MPORT_3_en));
    bufp->fullBit(oldp+501,(vlSelf->Tile__DOT__icache__DOT__dataMem_3_MPORT_4_en));
    bufp->fullCData(oldp+502,(vlSelf->Tile__DOT__icache__DOT__cpu_mask),4);
    bufp->fullBit(oldp+503,(vlSelf->Tile__DOT__icache__DOT__read_count));
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_15(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTile___024root__trace_full_top_15(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_top_15\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTile___024root__trace_full_sub_15((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTile___024root__trace_full_sub_15(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_full_sub_15\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+504,(vlSelf->Tile__DOT__icache__DOT__read_wrap_out));
    bufp->fullBit(oldp+505,(vlSelf->Tile__DOT__icache__DOT__write_count));
    bufp->fullBit(oldp+506,(vlSelf->Tile__DOT__icache__DOT__is_dirty));
    bufp->fullCData(oldp+507,(vlSelf->Tile__DOT__icache__DOT___GEN_0),8);
    bufp->fullBit(oldp+508,(vlSelf->Tile__DOT__icache__DOT___GEN_1));
    bufp->fullCData(oldp+509,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_0_ext__RW0_wmask),4);
    bufp->fullIData(oldp+510,((((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                                ? vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT__Memory
                               [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                                : 0U)),32);
    bufp->fullCData(oldp+511,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_1_ext__RW0_wmask),4);
    bufp->fullIData(oldp+512,((((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                                ? vlSelf->Tile__DOT__icache__DOT__dataMem_1_ext__DOT__Memory
                               [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                                : 0U)),32);
    bufp->fullCData(oldp+513,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_2_ext__RW0_wmask),4);
    bufp->fullIData(oldp+514,((((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                                ? vlSelf->Tile__DOT__icache__DOT__dataMem_2_ext__DOT__Memory
                               [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                                : 0U)),32);
    bufp->fullCData(oldp+515,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_3_ext__RW0_wmask),4);
    bufp->fullIData(oldp+516,((((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                                ? vlSelf->Tile__DOT__icache__DOT__dataMem_3_ext__DOT__Memory
                               [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                                : 0U)),32);
    bufp->fullCData(oldp+517,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__metaMem_tag_ext__RW0_addr),8);
    bufp->fullBit(oldp+518,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__metaMem_tag_ext__RW0_en));
    bufp->fullBit(oldp+519,(1U));
    bufp->fullBit(oldp+520,(0U));
    bufp->fullIData(oldp+521,(0U),32);
    bufp->fullCData(oldp+522,(0U),4);
}

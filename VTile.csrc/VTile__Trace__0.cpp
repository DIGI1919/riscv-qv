// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTile__Syms.h"


void VTile___024root__trace_chg_sub_0(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_0\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_0(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgWData(oldp+0,(vlSelf->Tile__DOT__dcache__DOT__wdata),128);
        bufp->chgBit(oldp+4,(vlSelf->Tile__DOT__dcache__DOT__is_alloc));
        bufp->chgIData(oldp+5,(vlSelf->Tile__DOT__dcache__DOT__wdata[0U]),32);
        bufp->chgCData(oldp+6,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_0_ext__RW0_wmask),4);
        bufp->chgIData(oldp+7,(vlSelf->Tile__DOT__dcache__DOT__wdata[1U]),32);
        bufp->chgCData(oldp+8,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_1_ext__RW0_wmask),4);
        bufp->chgIData(oldp+9,(vlSelf->Tile__DOT__dcache__DOT__wdata[2U]),32);
        bufp->chgCData(oldp+10,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_2_ext__RW0_wmask),4);
        bufp->chgIData(oldp+11,(vlSelf->Tile__DOT__dcache__DOT__wdata[3U]),32);
        bufp->chgCData(oldp+12,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_3_ext__RW0_wmask),4);
        bufp->chgWData(oldp+13,(vlSelf->Tile__DOT__icache__DOT__wdata),128);
        bufp->chgBit(oldp+17,(vlSelf->Tile__DOT__icache__DOT__is_alloc));
        bufp->chgIData(oldp+18,(vlSelf->Tile__DOT__icache__DOT__wdata[0U]),32);
        bufp->chgIData(oldp+19,(vlSelf->Tile__DOT__icache__DOT__wdata[1U]),32);
        bufp->chgIData(oldp+20,(vlSelf->Tile__DOT__icache__DOT__wdata[2U]),32);
        bufp->chgIData(oldp+21,(vlSelf->Tile__DOT__icache__DOT__wdata[3U]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+22,(vlSelf->Tile__DOT__icache__DOT__v),256);
        bufp->chgWData(oldp+30,(vlSelf->Tile__DOT__icache__DOT__d),256);
    }
}

void VTile___024root__trace_chg_sub_1(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_1\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_1(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 39);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+0,(vlSelf->Tile__DOT__dcache__DOT__cpu_data),32);
        bufp->chgCData(oldp+1,(vlSelf->Tile__DOT__dcache__DOT__cpu_mask),4);
        bufp->chgBit(oldp+2,(vlSelf->Tile__DOT__dcache__DOT__is_alloc_reg));
        bufp->chgQData(oldp+3,(vlSelf->Tile__DOT__dcache__DOT__refill_buf_0),64);
        bufp->chgQData(oldp+5,(vlSelf->Tile__DOT__dcache__DOT__refill_buf_1),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+7,(vlSelf->Tile__DOT__icache__DOT__cpu_data),32);
        bufp->chgBit(oldp+8,(vlSelf->Tile__DOT__icache__DOT__is_alloc_reg));
        bufp->chgBit(oldp+9,(vlSelf->Tile__DOT__icache__DOT__ren_reg));
        bufp->chgWData(oldp+10,(vlSelf->Tile__DOT__icache__DOT__rdata_buf),128);
        bufp->chgQData(oldp+14,(vlSelf->Tile__DOT__icache__DOT__refill_buf_0),64);
        bufp->chgQData(oldp+16,(vlSelf->Tile__DOT__icache__DOT__refill_buf_1),64);
        bufp->chgIData(oldp+18,(vlSelf->Tile__DOT__icache__DOT___metaMem_tag_ext_RW0_rdata),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+19,(vlSelf->Tile__DOT__dcache__DOT__ren_reg));
        bufp->chgWData(oldp+20,(vlSelf->Tile__DOT__dcache__DOT__rdata_buf),128);
        bufp->chgIData(oldp+24,(vlSelf->Tile__DOT__dcache__DOT___metaMem_tag_ext_RW0_rdata),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+25,((0xfffffff0U & vlSelf->Tile__DOT__dcache__DOT__addr_reg)),32);
        bufp->chgCData(oldp+26,((0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                                          >> 4U))),8);
        bufp->chgWData(oldp+27,(vlSelf->Tile__DOT__dcache__DOT__v),256);
    }
}

void VTile___024root__trace_chg_sub_2(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_2\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_2(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 74);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+0,(vlSelf->Tile__DOT__dcache__DOT__addr_reg),32);
        bufp->chgIData(oldp+1,((vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                                >> 0xcU)),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgSData(oldp+2,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[0]),16);
        bufp->chgSData(oldp+3,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[1]),16);
        bufp->chgSData(oldp+4,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[2]),16);
        bufp->chgSData(oldp+5,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[3]),16);
        bufp->chgSData(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[4]),16);
        bufp->chgSData(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[5]),16);
        bufp->chgSData(oldp+8,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[6]),16);
        bufp->chgSData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[7]),16);
        bufp->chgSData(oldp+10,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[8]),16);
        bufp->chgSData(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[9]),16);
        bufp->chgSData(oldp+12,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[10]),16);
        bufp->chgSData(oldp+13,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[11]),16);
        bufp->chgSData(oldp+14,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[12]),16);
        bufp->chgSData(oldp+15,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[13]),16);
        bufp->chgSData(oldp+16,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[14]),16);
        bufp->chgSData(oldp+17,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[15]),16);
        bufp->chgSData(oldp+18,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[16]),16);
        bufp->chgSData(oldp+19,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[17]),16);
        bufp->chgSData(oldp+20,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[18]),16);
        bufp->chgSData(oldp+21,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[19]),16);
        bufp->chgSData(oldp+22,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[20]),16);
        bufp->chgSData(oldp+23,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[21]),16);
        bufp->chgSData(oldp+24,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[22]),16);
        bufp->chgSData(oldp+25,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[23]),16);
        bufp->chgSData(oldp+26,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[24]),16);
        bufp->chgSData(oldp+27,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[25]),16);
        bufp->chgSData(oldp+28,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[26]),16);
        bufp->chgSData(oldp+29,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[27]),16);
        bufp->chgSData(oldp+30,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[28]),16);
        bufp->chgSData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[29]),16);
        bufp->chgSData(oldp+32,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[30]),16);
        bufp->chgSData(oldp+33,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory[31]),16);
    }
}

void VTile___024root__trace_chg_sub_3(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_3\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_3(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 108);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+0,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+32,((6U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))));
    }
}

void VTile___024root__trace_chg_sub_4(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_4(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_4\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_4((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_4(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 141);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+0,(vlSelf->Tile__DOT__dcache__DOT___io_nasti_b_ready_output));
        bufp->chgBit(oldp+1,((6U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))));
        bufp->chgCData(oldp+2,(vlSelf->Tile__DOT__arb__DOT__state),3);
        bufp->chgCData(oldp+3,(vlSelf->Tile__DOT__dcache__DOT__state),3);
        bufp->chgBit(oldp+4,(vlSelf->Tile__DOT__dcache__DOT__read_count));
        bufp->chgBit(oldp+5,(vlSelf->Tile__DOT__dcache__DOT__write_count));
        bufp->chgBit(oldp+6,((1U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))));
        bufp->chgCData(oldp+7,(vlSelf->Tile__DOT__icache__DOT__state),3);
        bufp->chgBit(oldp+8,((1U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mepc),32);
        bufp->chgIData(oldp+10,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm),32);
        bufp->chgBit(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIP));
        bufp->chgBit(oldp+12,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MTIE));
        bufp->chgBit(oldp+13,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIP));
        bufp->chgBit(oldp+14,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__MSIE));
        bufp->chgIData(oldp+15,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtimecmp),32);
        bufp->chgIData(oldp+16,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mscratch),32);
        bufp->chgIData(oldp+17,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mcause),32);
        bufp->chgIData(oldp+18,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mbadaddr),32);
        bufp->chgIData(oldp+19,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mtohost),32);
        bufp->chgIData(oldp+20,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__mfromhost),32);
        bufp->chgIData(oldp+21,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qstate),32);
        bufp->chgBit(oldp+22,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__unnamedblk1__DOT__isEret));
        bufp->chgIData(oldp+23,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__unnamedblk1__DOT__wdata),32);
        bufp->chgBit(oldp+24,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isInstRet));
        bufp->chgCData(oldp+25,((0xffU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                          >> 0x16U))),8);
        bufp->chgCData(oldp+26,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                          >> 0x11U))),5);
        bufp->chgBit(oldp+27,((1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                     >> 7U))));
        bufp->chgCData(oldp+28,((0xffU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                          >> 9U))),8);
        bufp->chgBit(oldp+29,((1U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm 
                                     >> 8U))));
        bufp->chgCData(oldp+30,((0xfU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm)),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst),32);
        bufp->chgIData(oldp+32,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pc),32);
    }
}

void VTile___024root__trace_chg_sub_5(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_5(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_5\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_5((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_5(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 174);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+0,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_alu),32);
        bufp->chgIData(oldp+1,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_csr_in),32);
        bufp->chgSData(oldp+2,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_qvmask),16);
        bufp->chgIData(oldp+3,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_pe),32);
        bufp->chgIData(oldp+4,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_mul),32);
        bufp->chgCData(oldp+5,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__st_type),2);
        bufp->chgCData(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ld_type),3);
        bufp->chgCData(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel),3);
        bufp->chgBit(oldp+8,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en));
        bufp->chgCData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd),3);
        bufp->chgBit(oldp+10,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__illegal));
        bufp->chgBit(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc_check));
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+13,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_inst 
                                          >> 7U))),32);
        bufp->chgSData(oldp+14,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))
                                  ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__ew_reg_qvmask)
                                  : 0U)),16);
        bufp->chgBit(oldp+15,((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))));
        bufp->chgBit(oldp+16,((5U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))));
        bufp->chgBit(oldp+17,((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr_cmd))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+18,(vlSelf->Tile__DOT__dcache__DOT___io_nasti_w_valid_output));
        bufp->chgIData(oldp+19,(vlSelf->Tile__DOT___dcache_io_cpu_resp_bits_data),32);
        bufp->chgWData(oldp+20,(vlSelf->Tile__DOT__dcache__DOT__rdata),128);
        bufp->chgWData(oldp+24,(vlSelf->Tile__DOT__dcache__DOT__read),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgIData(oldp+28,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst),32);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+30,((0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                          >> 0x14U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgIData(oldp+31,((0xfffffff0U & vlSelf->Tile__DOT__icache__DOT__addr_reg)),32);
        bufp->chgCData(oldp+32,((0xffU & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                          >> 4U))),8);
    }
}

void VTile___024root__trace_chg_sub_6(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_6(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_6\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_6((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_6(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_6\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 207);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgIData(oldp+0,(vlSelf->Tile__DOT__icache__DOT__addr_reg),32);
        bufp->chgIData(oldp+1,((vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                >> 0xcU)),20);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgWData(oldp+2,(vlSelf->Tile__DOT__dcache__DOT__d),256);
        bufp->chgBit(oldp+10,(vlSelf->Tile__DOT__dcache__DOT__is_dirty));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgWData(oldp+11,(vlSelf->Tile__DOT__icache__DOT__rdata),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgWData(oldp+15,(vlSelf->Tile__DOT__icache__DOT__read),128);
    }
    bufp->chgBit(oldp+19,(vlSelf->clock));
    bufp->chgBit(oldp+20,(vlSelf->reset));
    bufp->chgBit(oldp+21,(vlSelf->io_host_fromhost_valid));
    bufp->chgIData(oldp+22,(vlSelf->io_host_fromhost_bits),32);
    bufp->chgBit(oldp+23,(vlSelf->io_nasti_aw_ready));
    bufp->chgBit(oldp+24,(vlSelf->io_nasti_w_ready));
    bufp->chgBit(oldp+25,(vlSelf->io_nasti_b_valid));
    bufp->chgCData(oldp+26,(vlSelf->io_nasti_b_bits_id),5);
    bufp->chgCData(oldp+27,(vlSelf->io_nasti_b_bits_resp),2);
    bufp->chgBit(oldp+28,(vlSelf->io_nasti_ar_ready));
    bufp->chgBit(oldp+29,(vlSelf->io_nasti_r_valid));
    bufp->chgCData(oldp+30,(vlSelf->io_nasti_r_bits_id),5);
    bufp->chgQData(oldp+31,(vlSelf->io_nasti_r_bits_data),64);
}

void VTile___024root__trace_chg_sub_7(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_7(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_7\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_7((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_7(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_7\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 240);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->io_nasti_r_bits_resp),2);
    bufp->chgBit(oldp+1,(vlSelf->io_nasti_r_bits_last));
    bufp->chgIData(oldp+2,(vlSelf->io_host_tohost),32);
    bufp->chgBit(oldp+3,(vlSelf->io_nasti_aw_valid));
    bufp->chgCData(oldp+4,(vlSelf->io_nasti_aw_bits_id),5);
    bufp->chgIData(oldp+5,(vlSelf->io_nasti_aw_bits_addr),32);
    bufp->chgCData(oldp+6,(vlSelf->io_nasti_aw_bits_len),8);
    bufp->chgCData(oldp+7,(vlSelf->io_nasti_aw_bits_size),3);
    bufp->chgCData(oldp+8,(vlSelf->io_nasti_aw_bits_burst),2);
    bufp->chgBit(oldp+9,(vlSelf->io_nasti_aw_bits_lock));
    bufp->chgCData(oldp+10,(vlSelf->io_nasti_aw_bits_cache),4);
    bufp->chgCData(oldp+11,(vlSelf->io_nasti_aw_bits_prot),3);
    bufp->chgCData(oldp+12,(vlSelf->io_nasti_aw_bits_qos),4);
    bufp->chgBit(oldp+13,(vlSelf->io_nasti_w_valid));
    bufp->chgQData(oldp+14,(vlSelf->io_nasti_w_bits_data),64);
    bufp->chgCData(oldp+16,(vlSelf->io_nasti_w_bits_strb),8);
    bufp->chgBit(oldp+17,(vlSelf->io_nasti_w_bits_last));
    bufp->chgBit(oldp+18,(vlSelf->io_nasti_b_ready));
    bufp->chgBit(oldp+19,(vlSelf->io_nasti_ar_valid));
    bufp->chgCData(oldp+20,(vlSelf->io_nasti_ar_bits_id),5);
    bufp->chgIData(oldp+21,(vlSelf->io_nasti_ar_bits_addr),32);
    bufp->chgCData(oldp+22,(vlSelf->io_nasti_ar_bits_len),8);
    bufp->chgCData(oldp+23,(vlSelf->io_nasti_ar_bits_size),3);
    bufp->chgCData(oldp+24,(vlSelf->io_nasti_ar_bits_burst),2);
    bufp->chgBit(oldp+25,(vlSelf->io_nasti_ar_bits_lock));
    bufp->chgCData(oldp+26,(vlSelf->io_nasti_ar_bits_cache),4);
    bufp->chgCData(oldp+27,(vlSelf->io_nasti_ar_bits_prot),3);
    bufp->chgCData(oldp+28,(vlSelf->io_nasti_ar_bits_qos),4);
    bufp->chgBit(oldp+29,(vlSelf->io_nasti_r_ready));
    bufp->chgBit(oldp+30,(vlSelf->Tile__DOT__icache__DOT___io_nasti_ar_valid_output));
    bufp->chgBit(oldp+31,(vlSelf->Tile__DOT__dcache__DOT___io_nasti_aw_valid_output));
    bufp->chgBit(oldp+32,(vlSelf->Tile__DOT__dcache__DOT___io_nasti_ar_valid_output));
}

void VTile___024root__trace_chg_sub_8(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_8(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_8\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_8((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_8(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 273);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->Tile__DOT__arb__DOT___io_icache_ar_ready_output));
    bufp->chgBit(oldp+1,(((IData)(vlSelf->io_nasti_r_valid) 
                          & (1U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)))));
    bufp->chgBit(oldp+2,(vlSelf->Tile__DOT__arb__DOT___io_dcache_aw_ready_output));
    bufp->chgBit(oldp+3,(vlSelf->Tile__DOT__arb__DOT___io_dcache_w_ready_output));
    bufp->chgBit(oldp+4,(((IData)(vlSelf->io_nasti_b_valid) 
                          & (4U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)))));
    bufp->chgBit(oldp+5,(vlSelf->Tile__DOT__arb__DOT___io_dcache_ar_ready_output));
    bufp->chgBit(oldp+6,(((IData)(vlSelf->io_nasti_r_valid) 
                          & (2U == (IData)(vlSelf->Tile__DOT__arb__DOT__state)))));
    bufp->chgBit(oldp+7,(vlSelf->Tile__DOT__icache__DOT___io_cpu_resp_valid_output));
    bufp->chgIData(oldp+8,(vlSelf->Tile__DOT__icache__DOT__read[
                           (3U & (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                  >> 2U))]),32);
    bufp->chgBit(oldp+9,(vlSelf->Tile__DOT__dcache__DOT___io_cpu_resp_valid_output));
    bufp->chgBit(oldp+10,((1U & (~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__stall)))));
    bufp->chgIData(oldp+11,(vlSelf->Tile__DOT___core_io_icache_req_bits_addr),32);
    bufp->chgBit(oldp+12,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_expt_output));
    bufp->chgBit(oldp+13,(vlSelf->Tile__DOT___core_io_dcache_req_valid));
    bufp->chgIData(oldp+14,((vlSelf->__VdfgTmp_h1d4f0df6__0 
                             << 2U)),32);
    bufp->chgIData(oldp+15,((vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_br_rs2 
                             << (0x18U & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT__sum 
                                          << 3U)))),32);
    bufp->chgCData(oldp+16,(vlSelf->Tile__DOT___core_io_dcache_req_bits_mask),4);
    bufp->chgCData(oldp+17,(vlSelf->Tile__DOT__core__DOT___ctrl_io_pc_sel),2);
    bufp->chgBit(oldp+18,(((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_10)) 
                           & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_9) 
                              | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_8)) 
                                 & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_7) 
                                    | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_6)) 
                                       & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_5) 
                                          | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_2)) 
                                             & (0x10000073U 
                                                == vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst))))))))));
    bufp->chgBit(oldp+19,(((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h67a27549__0)) 
                           & ((0x67U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                              | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_8)) 
                                 & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_7) 
                                    | ((0x23U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                       | ((0xa3U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                          | ((0x123U 
                                              == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN)) 
                                             | ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_17) 
                                                | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_15)) 
                                                   & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_14) 
                                                      | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_13)) 
                                                         & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h28509d5e__0))))))))))))));
    bufp->chgBit(oldp+20,(((~ ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h8bec0e33__0) 
                               | (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_19))) 
                           & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_16) 
                              | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_18)) 
                                 & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h28509d5e__0))))));
    bufp->chgCData(oldp+21,(vlSelf->Tile__DOT__core__DOT___ctrl_io_imm_sel),3);
    bufp->chgCData(oldp+22,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_alu_op_out),4);
    bufp->chgCData(oldp+23,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_br_op_out),3);
    bufp->chgCData(oldp+24,(vlSelf->Tile__DOT__core__DOT___ctrl_io_st_type),2);
    bufp->chgCData(oldp+25,(((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h17a479ec__0)
                              ? 0U : ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                       ? 3U : ((0x83U 
                                                == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                ? 2U
                                                : (
                                                   (0x103U 
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
    bufp->chgCData(oldp+26,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out),4);
    bufp->chgCData(oldp+27,(((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_10)
                              ? 0U : ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_9)
                                       ? 2U : ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_8)
                                                ? 0U
                                                : ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_7)
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
    bufp->chgBit(oldp+28,(((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_21) 
                           | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_8)) 
                              & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_7) 
                                 | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_20)) 
                                    & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_17) 
                                       | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_15)) 
                                          & ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_4) 
                                             | ((~ (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_12)) 
                                                & (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h28509d5e__0)))))))))));
    bufp->chgCData(oldp+29,((((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h34518d2f__0) 
                              | (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN_24))
                              ? 0U : ((0xf3U == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                       ? 1U : ((0x173U 
                                                == (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT___GEN))
                                                ? 2U
                                                : (
                                                   (0x1f3U 
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
    bufp->chgBit(oldp+30,((1U & (~ ((IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_hdfe1f980__0) 
                                    | (IData)(vlSelf->Tile__DOT__core__DOT__ctrl__DOT____VdfgTmp_h28509d5e__0))))));
    bufp->chgCData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_pe_op_out),5);
    bufp->chgBit(oldp+32,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8alu8_qnorm_Qvm_en));
}

void VTile___024root__trace_chg_sub_9(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_9(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_9\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_9((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_9(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_9\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 306);
    VlWide<9>/*287:0*/ __Vtemp_hc3bf5703__0;
    // Body
    bufp->chgIData(oldp+0,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_pc),32);
    bufp->chgBit(oldp+1,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__started));
    bufp->chgBit(oldp+2,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__stall));
    bufp->chgQData(oldp+3,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pc),33);
    bufp->chgIData(oldp+5,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_br_rs2),32);
    bufp->chgIData(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__lshift),32);
    bufp->chgIData(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1),32);
    bufp->chgIData(oldp+8,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs2),32);
    bufp->chgIData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___alu_io_out),32);
    bufp->chgIData(oldp+10,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT__sum),32);
    bufp->chgIData(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__alu__DOT__shin),32);
    bufp->chgIData(oldp+12,(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_rs1_in0),32);
    bufp->chgBit(oldp+13,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___brCond_io_taken));
    bufp->chgIData(oldp+14,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__diff),32);
    bufp->chgBit(oldp+15,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__isSameSign));
    bufp->chgBit(oldp+16,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__lt));
    bufp->chgBit(oldp+17,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__brCond__DOT__ltu));
    bufp->chgIData(oldp+18,(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__bypass__io_idata_load),32);
    bufp->chgIData(oldp+19,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_out_output),32);
    bufp->chgIData(oldp+20,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__bypass__DOT__rs_out),32);
    bufp->chgBit(oldp+21,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__bypass__DOT___io_rs1vaild_output));
    bufp->chgBit(oldp+22,(((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__bypass__DOT____VdfgTmp_h8e44abc1__0) 
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
    bufp->chgIData(oldp+23,(((0x107U >= (0x1ffU & ((IData)(0x21U) 
                                                   * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))))
                              ? (((0U == (0x1fU & ((IData)(0x21U) 
                                                   * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel))))
                                   ? 0U : (__Vtemp_hc3bf5703__0[
                                           (((IData)(0x1fU) 
                                             + (0x1ffU 
                                                & ((IData)(0x21U) 
                                                   * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)))))) 
                                 | (__Vtemp_hc3bf5703__0[
                                    (0xfU & (((IData)(0x21U) 
                                              * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)) 
                                             >> 5U))] 
                                    >> (0x1fU & ((IData)(0x21U) 
                                                 * (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_sel)))))
                              : 0U)),32);
    bufp->chgBit(oldp+24,(((~ ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_expt_output) 
                               | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__stall))) 
                           & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__wb_en))));
    bufp->chgIData(oldp+25,(((IData)(0x100U) + ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV) 
                                                << 6U))),32);
    bufp->chgIData(oldp+26,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__time_0),32);
    bufp->chgIData(oldp+27,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__timeh),32);
    bufp->chgIData(oldp+28,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycle),32);
    bufp->chgIData(oldp+29,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__cycleh),32);
    bufp->chgIData(oldp+30,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instret),32);
    bufp->chgIData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__instreth),32);
    bufp->chgCData(oldp+32,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV),2);
}

void VTile___024root__trace_chg_sub_10(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_10(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_10\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_10((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_10(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_10\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 339);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__PRV1),2);
    bufp->chgBit(oldp+1,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE));
    bufp->chgBit(oldp+2,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__IE1));
    bufp->chgBit(oldp+3,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEcall));
    bufp->chgBit(oldp+4,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__isEbreak));
    bufp->chgBit(oldp+5,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__wen));
    bufp->chgBit(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__iaddrInvalid));
    bufp->chgBit(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__laddrInvalid));
    bufp->chgBit(oldp+8,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__saddrInvalid));
    bufp->chgIData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___immGen_io_out),32);
    bufp->chgIData(oldp+10,(((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__mul__DOT____VdfgTmp_h5a0d4b50__0)
                              ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                              : (((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out)) 
                                  | ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out)) 
                                     | (1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out))))
                                  ? (IData)((vlSelf->Tile__DOT__core__DOT__dpath__DOT__mul__DOT___GEN_0 
                                             >> 0x20U))
                                  : ((0U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_mul_op_out))
                                      ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__mul__DOT___GEN_0)
                                      : vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1)))),32);
    bufp->chgSData(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in),16);
    bufp->chgSData(oldp+12,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
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
    bufp->chgIData(oldp+13,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? (((- (IData)((1U & 
                                              ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3) 
                                               >> 8U)))) 
                                  << 9U) | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3))
                              : ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                  ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___mul8x8_io_out
                                  : ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                      ? ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                          ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                                          : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                    ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___alu8x8_io_out
                                                    : vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1))))),32);
    bufp->chgIData(oldp+14,(((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                              : 0U)),32);
    bufp->chgIData(oldp+15,(((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs2
                              : 0U)),32);
    bufp->chgCData(oldp+16,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8alu8_pe_8alu8_op),4);
    bufp->chgSData(oldp+17,(((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                              : 0U)),16);
    bufp->chgIData(oldp+18,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___alu8x8_io_out),32);
    bufp->chgCData(oldp+19,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_0),8);
    bufp->chgCData(oldp+20,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_1),8);
    bufp->chgCData(oldp+21,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_2),8);
    bufp->chgCData(oldp+22,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_3),8);
    bufp->chgCData(oldp+23,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_4),8);
    bufp->chgCData(oldp+24,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_5),8);
    bufp->chgCData(oldp+25,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B4_6),8);
    bufp->chgCData(oldp+26,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_0),8);
    bufp->chgCData(oldp+27,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_1),8);
    bufp->chgCData(oldp+28,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_2),8);
    bufp->chgCData(oldp+29,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_3),8);
    bufp->chgCData(oldp+30,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_4),8);
    bufp->chgCData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_5),8);
    bufp->chgCData(oldp+32,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B4_6),8);
}

void VTile___024root__trace_chg_sub_11(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_11(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_11\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_11((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_11(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_11\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 372);
    // Body
    bufp->chgSData(oldp+0,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B8_0),16);
    bufp->chgSData(oldp+1,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B8_1),16);
    bufp->chgSData(oldp+2,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs1B8_2),16);
    bufp->chgSData(oldp+3,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B8_0),16);
    bufp->chgSData(oldp+4,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B8_1),16);
    bufp->chgSData(oldp+5,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__rs2B8_2),16);
    bufp->chgIData(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_0),23);
    bufp->chgIData(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_1),23);
    bufp->chgIData(oldp+8,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_2),23);
    bufp->chgIData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_3),23);
    bufp->chgIData(oldp+10,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_4),23);
    bufp->chgIData(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_5),23);
    bufp->chgIData(oldp+12,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_6),23);
    bufp->chgIData(oldp+13,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out4b_Unorm_7),23);
    bufp->chgIData(oldp+14,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out8b_Unorm_0),31);
    bufp->chgIData(oldp+15,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out8b_Unorm_1),31);
    bufp->chgIData(oldp+16,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out8b_Unorm_2),31);
    bufp->chgIData(oldp+17,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__alu8x8__DOT__out8b_Unorm_3),31);
    bufp->chgIData(oldp+18,(((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                              : 0U)),32);
    bufp->chgIData(oldp+19,(((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs2
                              : 0U)),32);
    bufp->chgCData(oldp+20,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8br8_pe_8br8_type),4);
    bufp->chgSData(oldp+21,(((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                              : 0U)),16);
    bufp->chgSData(oldp+22,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___br8x8_io_qvm_out),16);
    bufp->chgCData(oldp+23,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_0),8);
    bufp->chgCData(oldp+24,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_1),8);
    bufp->chgCData(oldp+25,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_2),8);
    bufp->chgCData(oldp+26,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_3),8);
    bufp->chgCData(oldp+27,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_4),8);
    bufp->chgCData(oldp+28,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_5),8);
    bufp->chgCData(oldp+29,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_6),8);
    bufp->chgCData(oldp+30,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B4_7),8);
    bufp->chgCData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_0),8);
    bufp->chgCData(oldp+32,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_1),8);
}

void VTile___024root__trace_chg_sub_12(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_12(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_12\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_12((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_12(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_12\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 405);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_2),8);
    bufp->chgCData(oldp+1,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_3),8);
    bufp->chgCData(oldp+2,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_4),8);
    bufp->chgCData(oldp+3,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_5),8);
    bufp->chgCData(oldp+4,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_6),8);
    bufp->chgCData(oldp+5,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B4_7),8);
    bufp->chgSData(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B8_0),16);
    bufp->chgSData(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B8_1),16);
    bufp->chgSData(oldp+8,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B8_2),16);
    bufp->chgSData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs1B8_3),16);
    bufp->chgSData(oldp+10,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B8_0),16);
    bufp->chgSData(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B8_1),16);
    bufp->chgSData(oldp+12,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B8_2),16);
    bufp->chgSData(oldp+13,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__br8x8__DOT__rs2B8_3),16);
    bufp->chgIData(oldp+14,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                              : 0U)),32);
    bufp->chgCData(oldp+15,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8mm8_pe_8mm8_op),3);
    bufp->chgSData(oldp+16,(((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                              ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                              : 0U)),16);
    bufp->chgIData(oldp+17,((((- (IData)((1U & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3) 
                                                >> 8U)))) 
                              << 9U) | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3))),32);
    bufp->chgSData(oldp+18,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___mm8x8_io_qvm_out),16);
    bufp->chgCData(oldp+19,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_0),5);
    bufp->chgCData(oldp+20,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_1),5);
    bufp->chgCData(oldp+21,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_2),5);
    bufp->chgCData(oldp+22,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_3),5);
    bufp->chgCData(oldp+23,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_4),5);
    bufp->chgCData(oldp+24,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_5),5);
    bufp->chgCData(oldp+25,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_6),5);
    bufp->chgCData(oldp+26,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_7),5);
    bufp->chgSData(oldp+27,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_0),9);
    bufp->chgSData(oldp+28,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_1),9);
    bufp->chgSData(oldp+29,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_2),9);
    bufp->chgSData(oldp+30,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_3),9);
    bufp->chgCData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4),5);
    bufp->chgSData(oldp+32,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out8),9);
}

void VTile___024root__trace_chg_sub_13(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_13(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_13\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_13((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_13(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_13\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 438);
    // Body
    bufp->chgIData(oldp+0,(((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                             ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs1
                             : 0U)),32);
    bufp->chgIData(oldp+1,(((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                             ? vlSelf->Tile__DOT__core__DOT__dpath__DOT___pe_ctrl_io_rs_alu_rs2
                             : 0U)),32);
    bufp->chgCData(oldp+2,(vlSelf->__VdfgTmp_h6297395b__0),4);
    bufp->chgSData(oldp+3,(((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                             ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                             : 0U)),16);
    bufp->chgIData(oldp+4,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___mul8x8_io_out),32);
    bufp->chgSData(oldp+5,(((0U == (IData)(vlSelf->__VdfgTmp_h6297395b__0))
                             ? ((3U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                 ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                                 : 0U) : 0U)),16);
    bufp->chgIData(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_0),18);
    bufp->chgIData(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_1),18);
    bufp->chgIData(oldp+8,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_2),18);
    bufp->chgIData(oldp+9,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_3),18);
    bufp->chgIData(oldp+10,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_4),18);
    bufp->chgIData(oldp+11,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_5),18);
    bufp->chgIData(oldp+12,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_6),18);
    bufp->chgIData(oldp+13,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS4out_7),18);
    bufp->chgIData(oldp+14,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_0),18);
    bufp->chgIData(oldp+15,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_1),18);
    bufp->chgIData(oldp+16,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_2),18);
    bufp->chgIData(oldp+17,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_3),18);
    bufp->chgIData(oldp+18,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_4),18);
    bufp->chgIData(oldp+19,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_5),18);
    bufp->chgIData(oldp+20,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_6),18);
    bufp->chgIData(oldp+21,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU4out_7),18);
    bufp->chgIData(oldp+22,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS8out_0),26);
    bufp->chgIData(oldp+23,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS8out_1),26);
    bufp->chgIData(oldp+24,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS8out_2),26);
    bufp->chgIData(oldp+25,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulS8out_3),26);
    bufp->chgIData(oldp+26,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU8out_0),26);
    bufp->chgIData(oldp+27,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU8out_1),26);
    bufp->chgIData(oldp+28,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU8out_2),26);
    bufp->chgIData(oldp+29,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulU8out_3),26);
    bufp->chgIData(oldp+30,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mul8x8__DOT__mulX4b),18);
    bufp->chgCData(oldp+31,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel),3);
    bufp->chgCData(oldp+32,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8br8_pe_8br8_type),3);
}

void VTile___024root__trace_chg_sub_14(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_14(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_14\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_14((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_14(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_14\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 471);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->Tile__DOT__core__DOT__dpath__DOT___regFile_io_rdata1),32);
    bufp->chgIData(oldp+1,(((0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                             >> 0x14U)))
                             ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory
                            [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                       >> 0x14U))] : 0U)),32);
    bufp->chgSData(oldp+2,(((0U != (0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                             >> 0xfU)))
                             ? vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory
                            [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                       >> 0xfU))] : 
                            vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory
                            [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                       >> 0x14U))])),16);
    bufp->chgBit(oldp+3,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT___T_1));
    bufp->chgSData(oldp+4,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory
                           [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                      >> 0xfU))]),16);
    bufp->chgSData(oldp+5,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__qvm_ext__DOT__Memory
                           [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                      >> 0x14U))]),16);
    bufp->chgIData(oldp+6,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory
                           [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                      >> 0xfU))]),32);
    bufp->chgIData(oldp+7,(vlSelf->Tile__DOT__core__DOT__dpath__DOT__regFile__DOT__regs_ext__DOT__Memory
                           [(0x1fU & (vlSelf->Tile__DOT__core__DOT__dpath__DOT__fe_reg_inst 
                                      >> 0x14U))]),32);
    bufp->chgBit(oldp+8,(vlSelf->Tile__DOT__dcache__DOT__writeEnable));
    bufp->chgBit(oldp+9,(vlSelf->Tile__DOT__dcache__DOT__hit));
    bufp->chgBit(oldp+10,(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_rdata_MPORT_3_en));
    bufp->chgBit(oldp+11,(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_MPORT_4_en));
    bufp->chgBit(oldp+12,(vlSelf->Tile__DOT__dcache__DOT__read_wrap_out));
    bufp->chgCData(oldp+13,(vlSelf->Tile__DOT__dcache__DOT___GEN_0),8);
    bufp->chgBit(oldp+14,(vlSelf->Tile__DOT__dcache__DOT___GEN_1));
    bufp->chgIData(oldp+15,((((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                              & (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN_0))
                              ? vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT__Memory
                             [vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN]
                              : 0U)),32);
    bufp->chgIData(oldp+16,((((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                              & (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN_0))
                              ? vlSelf->Tile__DOT__dcache__DOT__dataMem_1_ext__DOT__Memory
                             [vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN]
                              : 0U)),32);
    bufp->chgIData(oldp+17,((((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                              & (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN_0))
                              ? vlSelf->Tile__DOT__dcache__DOT__dataMem_2_ext__DOT__Memory
                             [vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN]
                              : 0U)),32);
    bufp->chgIData(oldp+18,((((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                              & (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN_0))
                              ? vlSelf->Tile__DOT__dcache__DOT__dataMem_3_ext__DOT__Memory
                             [vlSelf->Tile__DOT__dcache__DOT__dataMem_0_ext__DOT___GEN]
                              : 0U)),32);
    bufp->chgCData(oldp+19,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__metaMem_tag_ext__RW0_addr),8);
    bufp->chgBit(oldp+20,(vlSelf->Tile__DOT__dcache__DOT____Vcellinp__metaMem_tag_ext__RW0_en));
    bufp->chgBit(oldp+21,(((0U != (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                           & ((1U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))
                               ? ((~ (IData)(vlSelf->Tile__DOT__icache__DOT__hit)) 
                                  & (IData)(vlSelf->Tile__DOT__icache__DOT__is_dirty))
                               : ((2U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                  & ((~ (IData)(vlSelf->Tile__DOT__icache__DOT___T_34)) 
                                     & (IData)(vlSelf->Tile__DOT__icache__DOT__is_dirty)))))));
    bufp->chgIData(oldp+22,(((vlSelf->Tile__DOT__icache__DOT___metaMem_tag_ext_RW0_rdata 
                              << 0xcU) | (0xff0U & vlSelf->Tile__DOT__icache__DOT__addr_reg))),32);
    bufp->chgBit(oldp+23,(((~ (IData)(vlSelf->Tile__DOT__icache__DOT___GEN_4)) 
                           & (3U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)))));
    bufp->chgQData(oldp+24,(((IData)(vlSelf->Tile__DOT__icache__DOT__write_count)
                              ? (((QData)((IData)(vlSelf->Tile__DOT__icache__DOT__read[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->Tile__DOT__icache__DOT__read[2U])))
                              : (((QData)((IData)(vlSelf->Tile__DOT__icache__DOT__read[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->Tile__DOT__icache__DOT__read[0U]))))),64);
    bufp->chgBit(oldp+26,(((~ ((IData)(vlSelf->Tile__DOT__icache__DOT___GEN_4) 
                               | (3U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)))) 
                           & (4U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)))));
    bufp->chgBit(oldp+27,(vlSelf->Tile__DOT__icache__DOT__writeEnable));
    bufp->chgBit(oldp+28,(vlSelf->Tile__DOT__icache__DOT__hit));
    bufp->chgBit(oldp+29,(vlSelf->Tile__DOT__icache__DOT__dataMem_3_rdata_MPORT_3_en));
    bufp->chgBit(oldp+30,(vlSelf->Tile__DOT__icache__DOT__dataMem_3_MPORT_4_en));
    bufp->chgCData(oldp+31,(vlSelf->Tile__DOT__icache__DOT__cpu_mask),4);
    bufp->chgBit(oldp+32,(vlSelf->Tile__DOT__icache__DOT__read_count));
}

void VTile___024root__trace_chg_sub_15(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTile___024root__trace_chg_top_15(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_top_15\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTile___024root__trace_chg_sub_15((&vlSymsp->TOP), bufp);
}

void VTile___024root__trace_chg_sub_15(VTile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_chg_sub_15\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 504);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->Tile__DOT__icache__DOT__read_wrap_out));
    bufp->chgBit(oldp+1,(vlSelf->Tile__DOT__icache__DOT__write_count));
    bufp->chgBit(oldp+2,(vlSelf->Tile__DOT__icache__DOT__is_dirty));
    bufp->chgCData(oldp+3,(vlSelf->Tile__DOT__icache__DOT___GEN_0),8);
    bufp->chgBit(oldp+4,(vlSelf->Tile__DOT__icache__DOT___GEN_1));
    bufp->chgCData(oldp+5,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_0_ext__RW0_wmask),4);
    bufp->chgIData(oldp+6,((((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                             & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                             ? vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT__Memory
                            [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                             : 0U)),32);
    bufp->chgCData(oldp+7,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_1_ext__RW0_wmask),4);
    bufp->chgIData(oldp+8,((((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                             & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                             ? vlSelf->Tile__DOT__icache__DOT__dataMem_1_ext__DOT__Memory
                            [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                             : 0U)),32);
    bufp->chgCData(oldp+9,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_2_ext__RW0_wmask),4);
    bufp->chgIData(oldp+10,((((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                              & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                              ? vlSelf->Tile__DOT__icache__DOT__dataMem_2_ext__DOT__Memory
                             [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                              : 0U)),32);
    bufp->chgCData(oldp+11,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_3_ext__RW0_wmask),4);
    bufp->chgIData(oldp+12,((((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                              & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                              ? vlSelf->Tile__DOT__icache__DOT__dataMem_3_ext__DOT__Memory
                             [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                              : 0U)),32);
    bufp->chgCData(oldp+13,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__metaMem_tag_ext__RW0_addr),8);
    bufp->chgBit(oldp+14,(vlSelf->Tile__DOT__icache__DOT____Vcellinp__metaMem_tag_ext__RW0_en));
}

void VTile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root__trace_cleanup\n"); );
    // Init
    VTile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTile___024root*>(voidSelf);
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTile.h for the primary calling header

#include "verilated.h"

#include "VTile___024root.h"

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__558(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__558\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___max4_T_11 
        = (VL_GTS_III(5, (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___max4_T_9), (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_6))
            ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___max4_T_9)
            : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_6));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__559(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__559\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___min4_T_11 
        = (VL_LTS_III(5, (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___min4_T_9), (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_6))
            ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___min4_T_9)
            : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_6));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__560(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__560\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4 
        = ((2U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8mm8_pe_8mm8_op))
            ? (VL_LTS_III(5, (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___min4_T_11), (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_7))
                ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___min4_T_11)
                : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_7))
            : ((1U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8mm8_pe_8mm8_op))
                ? (VL_GTS_III(5, (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___max4_T_11), (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_7))
                    ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___max4_T_11)
                    : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_7))
                : 0U));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__561(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__561\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT___out_T_3 
        = ((2U == (0xfU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm))
            ? ((0x1e0U & ((- (IData)((1U & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                            >> 4U)))) 
                          << 5U)) | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4))
            : (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out8));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__562(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__562\n"); );
    // Body
    vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___mm8x8_io_qvm_out 
        = ((0U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT___pe_ctrl_io_io_8mm8_pe_8mm8_op))
            ? 0U : ((2U == (0xfU & vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT__qnorm))
                     ? ((0xc000U & ((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                      == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_7))
                                      ? (2U | ((4U 
                                                == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                ? ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                   >> 0xeU)
                                                : 0U))
                                      : ((4U == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel)) 
                                         & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                            >> 0xeU))) 
                                    << 0xeU)) | ((0x3000U 
                                                  & ((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                                       == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_6))
                                                       ? 
                                                      (2U 
                                                       | ((4U 
                                                           == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                           ? 
                                                          ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                           >> 0xcU)
                                                           : 0U))
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel)) 
                                                       & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                          >> 0xcU))) 
                                                     << 0xcU)) 
                                                 | ((0xc00U 
                                                     & ((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                                          == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_5))
                                                          ? 
                                                         (2U 
                                                          | ((4U 
                                                              == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                              ? 
                                                             ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                              >> 0xaU)
                                                              : 0U))
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel)) 
                                                          & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                             >> 0xaU))) 
                                                        << 0xaU)) 
                                                    | ((0x300U 
                                                        & ((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                                             == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_4))
                                                             ? 
                                                            (2U 
                                                             | ((4U 
                                                                 == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                                 ? 
                                                                ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                                 >> 8U)
                                                                 : 0U))
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel)) 
                                                             & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                                >> 8U))) 
                                                           << 8U)) 
                                                       | ((0xc0U 
                                                           & ((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                                                == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_3))
                                                                ? 
                                                               (2U 
                                                                | ((4U 
                                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                                    ? 
                                                                   ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                                    >> 6U)
                                                                    : 0U))
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel)) 
                                                                & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                                   >> 6U))) 
                                                              << 6U)) 
                                                          | ((0x30U 
                                                              & ((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                                                   == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_2))
                                                                   ? 
                                                                  (2U 
                                                                   | ((4U 
                                                                       == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                                       ? 
                                                                      ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                                       >> 4U)
                                                                       : 0U))
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel)) 
                                                                   & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                                      >> 4U))) 
                                                                 << 4U)) 
                                                             | ((0xcU 
                                                                 & ((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                                                      == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_1))
                                                                      ? 
                                                                     (2U 
                                                                      | ((4U 
                                                                          == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                                          ? 
                                                                         ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                                          >> 2U)
                                                                          : 0U))
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel)) 
                                                                      & ((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in) 
                                                                         >> 2U))) 
                                                                    << 2U)) 
                                                                | (3U 
                                                                   & (((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out4) 
                                                                       == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs4_0))
                                                                       ? 
                                                                      (2U 
                                                                       | ((4U 
                                                                           == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel))
                                                                           ? (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)
                                                                           : 0U))
                                                                       : 
                                                                      ((4U 
                                                                        == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__pe_ctrl__DOT__pe_sel)) 
                                                                       & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT____Vcellinp__pe_ctrl__io_pe_qvm_in)))))))))))
                     : (((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out8) 
                           == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_3))
                           ? (2U | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT____VdfgTmp_h94fb19e9__0))
                           : (0xdU & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT____VdfgTmp_h94fb19e9__0))) 
                         << 0xcU) | (((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out8) 
                                        == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_2))
                                        ? (2U | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT____VdfgTmp_h94aae4d7__0))
                                        : (0xdU & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT____VdfgTmp_h94aae4d7__0))) 
                                      << 8U) | (((((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out8) 
                                                   == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_1))
                                                   ? 
                                                  (2U 
                                                   | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT____VdfgTmp_h94dbb1b8__0))
                                                   : 
                                                  (0xdU 
                                                   & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT____VdfgTmp_h94dbb1b8__0))) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__out8) 
                                                    == (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT__rs8_0))
                                                    ? 
                                                   (2U 
                                                    | (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT____VdfgTmp_h940d9fbf__0))
                                                    : 
                                                   (0xdU 
                                                    & (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__pe_unit__DOT__mm8x8__DOT____VdfgTmp_h940d9fbf__0))))))));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__563(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__563\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hc380ab92__0;
    // Body
    vlSelf->Tile__DOT__dcache__DOT__d[0U] = vlSelf->__Vdly__Tile__DOT__dcache__DOT__d[0U];
    vlSelf->Tile__DOT__dcache__DOT__d[1U] = vlSelf->__Vdly__Tile__DOT__dcache__DOT__d[1U];
    vlSelf->Tile__DOT__dcache__DOT__d[2U] = vlSelf->__Vdly__Tile__DOT__dcache__DOT__d[2U];
    vlSelf->Tile__DOT__dcache__DOT__d[3U] = vlSelf->__Vdly__Tile__DOT__dcache__DOT__d[3U];
    vlSelf->Tile__DOT__dcache__DOT__d[4U] = vlSelf->__Vdly__Tile__DOT__dcache__DOT__d[4U];
    vlSelf->Tile__DOT__dcache__DOT__d[5U] = vlSelf->__Vdly__Tile__DOT__dcache__DOT__d[5U];
    vlSelf->Tile__DOT__dcache__DOT__d[6U] = vlSelf->__Vdly__Tile__DOT__dcache__DOT__d[6U];
    vlSelf->Tile__DOT__dcache__DOT__d[7U] = vlSelf->__Vdly__Tile__DOT__dcache__DOT__d[7U];
    VL_SHIFTR_WWI(256,256,8, __Vtemp_hc380ab92__0, vlSelf->Tile__DOT__dcache__DOT__d, 
                  (0xffU & (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                            >> 4U)));
    vlSelf->Tile__DOT__dcache__DOT__is_dirty = (1U 
                                                & (vlSelf->Tile__DOT__dcache__DOT___is_dirty_T[0U] 
                                                   & __Vtemp_hc380ab92__0[0U]));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__564(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__564\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT__read_count = vlSelf->__Vdly__Tile__DOT__icache__DOT__read_count;
    vlSelf->Tile__DOT__icache__DOT____VdfgTmp_hc92af663__0 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->Tile__DOT__icache__DOT__state)))) 
                 | (1U == (IData)(vlSelf->Tile__DOT__icache__DOT__state))));
    vlSelf->Tile__DOT__icache__DOT___T_22 = ((6U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                             & ((IData)(vlSelf->io_nasti_r_valid) 
                                                & (1U 
                                                   == (IData)(vlSelf->Tile__DOT__arb__DOT__state))));
    vlSelf->Tile__DOT__icache__DOT___GEN_4 = ((IData)(vlSelf->Tile__DOT__icache__DOT____VdfgTmp_hc92af663__0) 
                                              | (2U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state)));
    vlSelf->Tile__DOT__icache__DOT__read_wrap_out = 
        ((IData)(vlSelf->Tile__DOT__icache__DOT___T_22) 
         & (IData)(vlSelf->Tile__DOT__icache__DOT__read_count));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__565(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__565\n"); );
    // Body
    if (((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
         & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))) {
        vlSelf->Tile__DOT__icache__DOT__rdata[0U] = 
            vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT__Memory
            [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN];
        vlSelf->Tile__DOT__icache__DOT__rdata[1U] = 
            vlSelf->Tile__DOT__icache__DOT__dataMem_1_ext__DOT__Memory
            [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN];
    } else {
        vlSelf->Tile__DOT__icache__DOT__rdata[0U] = 0U;
        vlSelf->Tile__DOT__icache__DOT__rdata[1U] = 0U;
    }
    vlSelf->Tile__DOT__icache__DOT__rdata[2U] = (IData)(
                                                        (((QData)((IData)(
                                                                          (((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                                                            & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                                                                            ? 
                                                                           vlSelf->Tile__DOT__icache__DOT__dataMem_3_ext__DOT__Memory
                                                                           [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           (((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                                                             & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                                                                             ? 
                                                                            vlSelf->Tile__DOT__icache__DOT__dataMem_2_ext__DOT__Memory
                                                                            [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                                                                             : 0U)))));
    vlSelf->Tile__DOT__icache__DOT__rdata[3U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           (((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                                                             & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                                                                             ? 
                                                                            vlSelf->Tile__DOT__icache__DOT__dataMem_3_ext__DOT__Memory
                                                                            [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                                                                             : 0U))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (((~ (IData)(vlSelf->Tile__DOT__icache__DOT__metaMem_tag_ext__DOT___GEN_1)) 
                                                                              & (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN_0))
                                                                              ? 
                                                                             vlSelf->Tile__DOT__icache__DOT__dataMem_2_ext__DOT__Memory
                                                                             [vlSelf->Tile__DOT__icache__DOT__dataMem_0_ext__DOT___GEN]
                                                                              : 0U)))) 
                                                         >> 0x20U));
    vlSelf->io_nasti_aw_bits_addr = ((vlSelf->Tile__DOT__dcache__DOT___metaMem_tag_ext_RW0_rdata 
                                      << 0xcU) | (0xff0U 
                                                  & vlSelf->Tile__DOT__dcache__DOT__addr_reg));
    vlSelf->Tile__DOT__dcache__DOT___wmask_T_2 = (0x7ffffU 
                                                  & ((IData)(vlSelf->Tile__DOT__dcache__DOT__cpu_mask) 
                                                     << 
                                                     (0xcU 
                                                      & vlSelf->Tile__DOT__dcache__DOT__addr_reg)));
    vlSelf->Tile__DOT__icache__DOT__is_alloc = ((6U 
                                                 == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
                                                & (IData)(vlSelf->Tile__DOT__icache__DOT__read_wrap_out));
    vlSelf->Tile__DOT__dcache__DOT__is_alloc = ((6U 
                                                 == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                                                & (IData)(vlSelf->Tile__DOT__dcache__DOT__read_wrap_out));
    if (vlSelf->Tile__DOT__dcache__DOT__is_alloc) {
        vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_1_ext__RW0_wmask = 0xfU;
        vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_2_ext__RW0_wmask = 0xfU;
        vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_3_ext__RW0_wmask = 0xfU;
        vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_0_ext__RW0_wmask = 0xfU;
        vlSelf->Tile__DOT__dcache__DOT__wdata[0U] = (IData)(vlSelf->Tile__DOT__dcache__DOT__refill_buf_0);
        vlSelf->Tile__DOT__dcache__DOT__wdata[1U] = (IData)(
                                                            (vlSelf->Tile__DOT__dcache__DOT__refill_buf_0 
                                                             >> 0x20U));
        vlSelf->Tile__DOT__dcache__DOT__wdata[2U] = (IData)(vlSelf->io_nasti_r_bits_data);
        vlSelf->Tile__DOT__dcache__DOT__wdata[3U] = (IData)(
                                                            (vlSelf->io_nasti_r_bits_data 
                                                             >> 0x20U));
    } else {
        vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_1_ext__RW0_wmask 
            = (0xfU & (vlSelf->Tile__DOT__dcache__DOT___wmask_T_2 
                       >> 4U));
        vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_2_ext__RW0_wmask 
            = (0xfU & (vlSelf->Tile__DOT__dcache__DOT___wmask_T_2 
                       >> 8U));
        vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_3_ext__RW0_wmask 
            = (0xfU & (vlSelf->Tile__DOT__dcache__DOT___wmask_T_2 
                       >> 0xcU));
        vlSelf->Tile__DOT__dcache__DOT____Vcellinp__dataMem_0_ext__RW0_wmask 
            = (0xfU & ((IData)(vlSelf->Tile__DOT__dcache__DOT__cpu_mask) 
                       << (0xcU & vlSelf->Tile__DOT__dcache__DOT__addr_reg)));
        vlSelf->Tile__DOT__dcache__DOT__wdata[0U] = vlSelf->Tile__DOT__dcache__DOT__cpu_data;
        vlSelf->Tile__DOT__dcache__DOT__wdata[1U] = vlSelf->Tile__DOT__dcache__DOT__cpu_data;
        vlSelf->Tile__DOT__dcache__DOT__wdata[2U] = vlSelf->Tile__DOT__dcache__DOT__cpu_data;
        vlSelf->Tile__DOT__dcache__DOT__wdata[3U] = vlSelf->Tile__DOT__dcache__DOT__cpu_data;
    }
    if (vlSelf->Tile__DOT__icache__DOT__is_alloc) {
        vlSelf->Tile__DOT__icache__DOT__wdata[0U] = (IData)(vlSelf->Tile__DOT__icache__DOT__refill_buf_0);
        vlSelf->Tile__DOT__icache__DOT__wdata[1U] = (IData)(
                                                            (vlSelf->Tile__DOT__icache__DOT__refill_buf_0 
                                                             >> 0x20U));
        vlSelf->Tile__DOT__icache__DOT__wdata[2U] = (IData)(vlSelf->io_nasti_r_bits_data);
        vlSelf->Tile__DOT__icache__DOT__wdata[3U] = (IData)(
                                                            (vlSelf->io_nasti_r_bits_data 
                                                             >> 0x20U));
    } else {
        vlSelf->Tile__DOT__icache__DOT__wdata[0U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[1U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[2U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
        vlSelf->Tile__DOT__icache__DOT__wdata[3U] = vlSelf->Tile__DOT__icache__DOT__cpu_data;
    }
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__566(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__566\n"); );
    // Body
    if (vlSelf->Tile__DOT__icache__DOT__is_alloc_reg) {
        vlSelf->Tile__DOT__icache__DOT__read[0U] = (IData)(vlSelf->Tile__DOT__icache__DOT__refill_buf_0);
        vlSelf->Tile__DOT__icache__DOT__read[1U] = (IData)(
                                                           (vlSelf->Tile__DOT__icache__DOT__refill_buf_0 
                                                            >> 0x20U));
        vlSelf->Tile__DOT__icache__DOT__read[2U] = (IData)(vlSelf->Tile__DOT__icache__DOT__refill_buf_1);
        vlSelf->Tile__DOT__icache__DOT__read[3U] = (IData)(
                                                           (vlSelf->Tile__DOT__icache__DOT__refill_buf_1 
                                                            >> 0x20U));
    } else if (vlSelf->Tile__DOT__icache__DOT__ren_reg) {
        vlSelf->Tile__DOT__icache__DOT__read[0U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata[0U];
        vlSelf->Tile__DOT__icache__DOT__read[1U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata[1U];
        vlSelf->Tile__DOT__icache__DOT__read[2U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata[2U];
        vlSelf->Tile__DOT__icache__DOT__read[3U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata[3U];
    } else {
        vlSelf->Tile__DOT__icache__DOT__read[0U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata_buf[0U];
        vlSelf->Tile__DOT__icache__DOT__read[1U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata_buf[1U];
        vlSelf->Tile__DOT__icache__DOT__read[2U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata_buf[2U];
        vlSelf->Tile__DOT__icache__DOT__read[3U] = 
            vlSelf->Tile__DOT__icache__DOT__rdata_buf[3U];
    }
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__567(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__567\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT__dataMem_3_MPORT_4_en 
        = (((2U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
            & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__csr__DOT___io_expt_output)) 
               & (IData)(vlSelf->Tile__DOT__dcache__DOT___T_34))) 
           | (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__568(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__568\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT__writeEnable = ((IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_MPORT_4_en) 
                                                   & (IData)(vlSelf->Tile__DOT__dcache__DOT__is_alloc));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__569(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__569\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___io_nasti_ar_valid_output 
        = ((0U != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
           & ((1U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
               ? ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__hit)) 
                  & (~ (IData)(vlSelf->Tile__DOT__dcache__DOT__is_dirty)))
               : ((2U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
                   ? ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT___T_35)) 
                      & (~ (IData)(vlSelf->Tile__DOT__dcache__DOT__is_dirty)))
                   : ((~ ((3U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                          | (4U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)))) 
                      & (5U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))))));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__570(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__570\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___io_nasti_aw_valid_output 
        = ((0U != (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
           & ((1U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state))
               ? ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__hit)) 
                  & (IData)(vlSelf->Tile__DOT__dcache__DOT__is_dirty))
               : ((2U == (IData)(vlSelf->Tile__DOT__dcache__DOT__state)) 
                  & ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT___T_35)) 
                     & (IData)(vlSelf->Tile__DOT__dcache__DOT__is_dirty)))));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__571(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__571\n"); );
    // Body
    vlSelf->io_nasti_ar_bits_addr = ((IData)(vlSelf->Tile__DOT__dcache__DOT___io_nasti_ar_valid_output)
                                      ? (0xfffffff0U 
                                         & vlSelf->Tile__DOT__dcache__DOT__addr_reg)
                                      : (0xfffffff0U 
                                         & vlSelf->Tile__DOT__icache__DOT__addr_reg));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__572(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__572\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_0_ext__RW0_wmask 
        = ((IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)
            ? 0xfU : (0xfU & ((IData)(vlSelf->Tile__DOT__icache__DOT__cpu_mask) 
                              << (0xcU & vlSelf->Tile__DOT__icache__DOT__addr_reg))));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__573(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__573\n"); );
    // Body
    vlSelf->io_nasti_aw_valid = ((~ (IData)((0U != (IData)(vlSelf->Tile__DOT__arb__DOT__state)))) 
                                 & (IData)(vlSelf->Tile__DOT__dcache__DOT___io_nasti_aw_valid_output));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__574(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__574\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_1_ext__RW0_wmask 
        = ((IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)
            ? 0xfU : (0xfU & (vlSelf->Tile__DOT__icache__DOT___wmask_T_2 
                              >> 4U)));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__575(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__575\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_2_ext__RW0_wmask 
        = ((IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)
            ? 0xfU : (0xfU & (vlSelf->Tile__DOT__icache__DOT___wmask_T_2 
                              >> 8U)));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__576(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__576\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT____Vcellinp__dataMem_3_ext__RW0_wmask 
        = ((IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc)
            ? 0xfU : (0xfU & (vlSelf->Tile__DOT__icache__DOT___wmask_T_2 
                              >> 0xcU)));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__577(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__577\n"); );
    // Body
    vlSelf->Tile__DOT__arb__DOT____VdfgTmp_h4accae57__0 
        = (1U & ((~ (IData)(vlSelf->io_nasti_aw_valid)) 
                 & (~ (IData)((0U != (IData)(vlSelf->Tile__DOT__arb__DOT__state))))));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__578(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__578\n"); );
    // Body
    vlSelf->Tile__DOT__arb__DOT___io_dcache_ar_ready_output 
        = ((IData)(vlSelf->io_nasti_ar_ready) & (IData)(vlSelf->Tile__DOT__arb__DOT____VdfgTmp_h4accae57__0));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__579(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__579\n"); );
    // Body
    vlSelf->Tile__DOT__arb__DOT___io_icache_ar_ready_output 
        = ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT___io_nasti_ar_valid_output)) 
           & (IData)(vlSelf->Tile__DOT__arb__DOT___io_dcache_ar_ready_output));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__580(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__580\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT__dataMem_3_MPORT_4_en 
        = (((2U == (IData)(vlSelf->Tile__DOT__icache__DOT__state)) 
            & (IData)(vlSelf->Tile__DOT__icache__DOT___T_34)) 
           | (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__581(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__581\n"); );
    // Body
    vlSelf->io_nasti_ar_valid = (((IData)(vlSelf->Tile__DOT__dcache__DOT___io_nasti_ar_valid_output) 
                                  | (IData)(vlSelf->Tile__DOT__icache__DOT___io_nasti_ar_valid_output)) 
                                 & (IData)(vlSelf->Tile__DOT__arb__DOT____VdfgTmp_h4accae57__0));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__582(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__582\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT__dataMem_3_rdata_MPORT_3_en 
        = ((~ (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_3_MPORT_4_en)) 
           & ((~ (IData)(vlSelf->Tile__DOT__core__DOT__dpath__DOT__stall)) 
              & (IData)(vlSelf->Tile__DOT__icache__DOT____VdfgTmp_hc92af663__0)));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__583(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__583\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT__writeEnable = ((IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_3_MPORT_4_en) 
                                                   & (IData)(vlSelf->Tile__DOT__icache__DOT__is_alloc));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__584(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__584\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT___GEN_1 = ((IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_3_rdata_MPORT_3_en) 
                                              | (IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_3_MPORT_4_en));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__585(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__585\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT____Vcellinp__metaMem_tag_ext__RW0_en 
        = ((IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_3_rdata_MPORT_3_en) 
           | (IData)(vlSelf->Tile__DOT__icache__DOT__writeEnable));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__586(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__586\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT__dataMem_3_rdata_MPORT_3_en 
        = ((~ (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_MPORT_4_en)) 
           & ((IData)(vlSelf->Tile__DOT__dcache__DOT____VdfgTmp_hc92af663__0) 
              & (IData)(vlSelf->Tile__DOT___core_io_dcache_req_valid)));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__587(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__587\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___GEN_1 = ((IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_rdata_MPORT_3_en) 
                                              | (IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_MPORT_4_en));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__588(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__588\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT____Vcellinp__metaMem_tag_ext__RW0_en 
        = ((IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_rdata_MPORT_3_en) 
           | (IData)(vlSelf->Tile__DOT__dcache__DOT__writeEnable));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__589(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__589\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT___GEN_0 = (0xffU 
                                              & ((IData)(vlSelf->Tile__DOT__icache__DOT__dataMem_3_MPORT_4_en)
                                                  ? 
                                                 (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                                                  >> 4U)
                                                  : 
                                                 (vlSelf->Tile__DOT___core_io_icache_req_bits_addr 
                                                  >> 4U)));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__590(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__590\n"); );
    // Body
    vlSelf->Tile__DOT__icache__DOT____Vcellinp__metaMem_tag_ext__RW0_addr 
        = (0xffU & ((IData)(vlSelf->Tile__DOT__icache__DOT__writeEnable)
                     ? (vlSelf->Tile__DOT__icache__DOT__addr_reg 
                        >> 4U) : (vlSelf->Tile__DOT___core_io_icache_req_bits_addr 
                                  >> 4U)));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__591(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__591\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT___GEN_0 = (0xffU 
                                              & ((IData)(vlSelf->Tile__DOT__dcache__DOT__dataMem_3_MPORT_4_en)
                                                  ? 
                                                 (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                                                  >> 4U)
                                                  : 
                                                 (vlSelf->__VdfgTmp_h1d4f0df6__0 
                                                  >> 2U)));
}

VL_INLINE_OPT void VTile___024root___nba_sequent__TOP__592(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___nba_sequent__TOP__592\n"); );
    // Body
    vlSelf->Tile__DOT__dcache__DOT____Vcellinp__metaMem_tag_ext__RW0_addr 
        = (0xffU & ((IData)(vlSelf->Tile__DOT__dcache__DOT__writeEnable)
                     ? (vlSelf->Tile__DOT__dcache__DOT__addr_reg 
                        >> 4U) : (vlSelf->__VdfgTmp_h1d4f0df6__0 
                                  >> 2U)));
}

void VTile___024root___eval_triggers__ico(VTile___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTile___024root___dump_triggers__ico(VTile___024root* vlSelf);
#endif  // VL_DEBUG
void VTile___024root___eval_ico(VTile___024root* vlSelf);
void VTile___024root___eval_triggers__act(VTile___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTile___024root___dump_triggers__act(VTile___024root* vlSelf);
#endif  // VL_DEBUG
void VTile___024root___eval_act(VTile___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTile___024root___dump_triggers__nba(VTile___024root* vlSelf);
#endif  // VL_DEBUG
void VTile___024root___eval_nba(VTile___024root* vlSelf);

void VTile___024root___eval(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VTile___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VTile___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/digi/code/scala/1215merge/merge/Tile.sv", 3491, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VTile___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VTile___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VTile___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/digi/code/scala/1215merge/merge/Tile.sv", 3491, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VTile___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VTile___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/digi/code/scala/1215merge/merge/Tile.sv", 3491, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VTile___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VTile___024root___eval_debug_assertions(VTile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTile___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_host_fromhost_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("io_host_fromhost_valid");}
    if (VL_UNLIKELY((vlSelf->io_nasti_aw_ready & 0xfeU))) {
        Verilated::overWidthError("io_nasti_aw_ready");}
    if (VL_UNLIKELY((vlSelf->io_nasti_w_ready & 0xfeU))) {
        Verilated::overWidthError("io_nasti_w_ready");}
    if (VL_UNLIKELY((vlSelf->io_nasti_b_valid & 0xfeU))) {
        Verilated::overWidthError("io_nasti_b_valid");}
    if (VL_UNLIKELY((vlSelf->io_nasti_b_bits_id & 0xe0U))) {
        Verilated::overWidthError("io_nasti_b_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_nasti_b_bits_resp & 0xfcU))) {
        Verilated::overWidthError("io_nasti_b_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_nasti_ar_ready & 0xfeU))) {
        Verilated::overWidthError("io_nasti_ar_ready");}
    if (VL_UNLIKELY((vlSelf->io_nasti_r_valid & 0xfeU))) {
        Verilated::overWidthError("io_nasti_r_valid");}
    if (VL_UNLIKELY((vlSelf->io_nasti_r_bits_id & 0xe0U))) {
        Verilated::overWidthError("io_nasti_r_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_nasti_r_bits_resp & 0xfcU))) {
        Verilated::overWidthError("io_nasti_r_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_nasti_r_bits_last & 0xfeU))) {
        Verilated::overWidthError("io_nasti_r_bits_last");}
}
#endif  // VL_DEBUG

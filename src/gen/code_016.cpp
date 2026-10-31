#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// AXGetAuxBCallback
void f_800FD688(Ctx* __restrict c) {
  trace_call(0x800FD688u);
  c->r[0]=R32(c->r[13]+0xFFFF9904u); // 800FD688
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FD68C
  c->r[0]=R32(c->r[13]+0xFFFF98F8u); // 800FD690
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FD694
  return; // 800FD698
}

// AXGetAuxCCallback
void f_800FD69C(Ctx* __restrict c) {
  trace_call(0x800FD69Cu);
  c->r[0]=R32(c->r[13]+0xFFFF9900u); // 800FD69C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FD6A0
  c->r[0]=R32(c->r[13]+0xFFFF98F4u); // 800FD6A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FD6A8
  return; // 800FD6AC
}

// __AXGetCommandListCycles
void f_800FD6B0(Ctx* __restrict c) {
  trace_call(0x800FD6B0u);
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FD6B0
  return; // 800FD6B4
}

// __AXGetCommandListAddress
void f_800FD6B8(Ctx* __restrict c) {
  trace_call(0x800FD6B8u);
  c->r[4]=R32(c->r[13]+0xFFFF9930u); // 800FD6B8
  c->r[5]=0u+0x802E0000u; // 800FD6BC
  c->r[5]=c->r[5]+0x00001F40u; // 800FD6C0
  c->r[3]=c->r[4]+0x00000001u; // 800FD6C4
  c->r[6]=rotl(c->r[4],7)&0xFFFFFF80u; // 800FD6C8
  c->r[0]=rotl(c->r[3],7)&0x00000080u; // 800FD6CC
  c->r[4]=rotl(c->r[3],0)&0x00000001u; // 800FD6D0
  c->r[3]=c->r[5]+c->r[6]; // 800FD6D4
  c->r[0]=c->r[5]+c->r[0]; // 800FD6D8
  W32(c->r[13]+0xFFFF9930u,c->r[4]); // 800FD6DC
  W32(c->r[13]+0xFFFF992Cu,c->r[0]); // 800FD6E0
  return; // 800FD6E4
}

// __AXNextFrame
void f_800FD6E8(Ctx* __restrict c) {
  trace_call(0x800FD6E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD6E8
  c->r[0]=c->lr; // 800FD6EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD6F0
  c->r[0]=0u+0x00001E83u; // 800FD6F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FD6F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FD6FC
  c->r[30]=c->r[5]|c->r[5]; // 800FD700
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FD704
  c->r[29]=c->r[4]|c->r[4]; // 800FD708
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FD70C
  c->r[28]=c->r[3]|c->r[3]; // 800FD710
  c->r[31]=R32(c->r[13]+0xFFFF992Cu); // 800FD714
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FD718
  c->lr=0x800FD720u; f_800FE998(c); // 800FD71C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FD720
  c->r[0]=0u+0x00000000u; // 800FD724
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD728
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD72C
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD730
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD734
  c->r[3]=c->r[3]+0x00000002u; // 800FD738
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD73C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FD740
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD744
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD748
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD74C
  c->r[3]=c->r[3]+0x00000002u; // 800FD750
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD754
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD758
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD75C
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FD760
  c->r[0]=R32(c->r[13]+0xFFFF9928u); // 800FD764
  c->r[4]=c->r[4]+0x00000002u; // 800FD768
  c->r[3]=c->r[3]+0x0000101Eu; // 800FD76C
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FD770
  cmps(c,0,(int32_t)c->r[0],1); // 800FD774
  W32(c->r[13]+0xFFFF9924u,c->r[3]); // 800FD778
  if (crb(c,2)) { goto L_800FD7E4; } // 800FD77C
  if (!crb(c,0)) { goto L_800FD790; } // 800FD780
  cmps(c,0,(int32_t)c->r[0],0); // 800FD784
  if (!crb(c,0)) { goto L_800FD79C; } // 800FD788
  goto L_800FD870; // 800FD78C
L_800FD790:;
  cmps(c,0,(int32_t)c->r[0],3); // 800FD790
  if (!crb(c,0)) { goto L_800FD870; } // 800FD794
  goto L_800FD82C; // 800FD798
L_800FD79C:;
  c->r[3]=0u+0x00000001u; // 800FD79C
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 800FD7A0
  W16(c->r[4]+0x00000000u,c->r[3]); // 800FD7A4
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD7A8
  c->r[3]=c->r[3]+0x00000002u; // 800FD7AC
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD7B0
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD7B4
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD7B8
  c->r[3]=c->r[3]+0x00000002u; // 800FD7BC
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD7C0
  W16(c->r[3]+0x00000000u,c->r[28]); // 800FD7C4
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD7C8
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FD7CC
  c->r[5]=c->r[4]+0x00000002u; // 800FD7D0
  c->r[0]=c->r[3]+0x000002DDu; // 800FD7D4
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FD7D8
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FD7DC
  goto L_800FD870; // 800FD7E0
L_800FD7E4:;
  c->r[3]=0u+0x00000002u; // 800FD7E4
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 800FD7E8
  W16(c->r[4]+0x00000000u,c->r[3]); // 800FD7EC
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD7F0
  c->r[3]=c->r[3]+0x00000002u; // 800FD7F4
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD7F8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD7FC
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD800
  c->r[3]=c->r[3]+0x00000002u; // 800FD804
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD808
  W16(c->r[3]+0x00000000u,c->r[28]); // 800FD80C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD810
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FD814
  c->r[5]=c->r[4]+0x00000002u; // 800FD818
  c->r[0]=c->r[3]+0x0000033Du; // 800FD81C
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FD820
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FD824
  goto L_800FD870; // 800FD828
L_800FD82C:;
  c->r[3]=0u+0x00000003u; // 800FD82C
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 800FD830
  W16(c->r[4]+0x00000000u,c->r[3]); // 800FD834
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD838
  c->r[3]=c->r[3]+0x00000002u; // 800FD83C
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD840
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD844
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD848
  c->r[3]=c->r[3]+0x00000002u; // 800FD84C
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD850
  W16(c->r[3]+0x00000000u,c->r[28]); // 800FD854
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD858
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FD85C
  c->r[5]=c->r[4]+0x00000002u; // 800FD860
  c->r[0]=c->r[3]+0x0000039Du; // 800FD864
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FD868
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FD86C
L_800FD870:;
  c->lr=0x800FD874u; f_800FF624(c); // 800FD870
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FD874
  c->r[0]=0u+0x00000004u; // 800FD878
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD87C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD880
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD884
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD888
  c->r[3]=c->r[3]+0x00000002u; // 800FD88C
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD890
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FD894
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD898
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD89C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD8A0
  c->r[3]=c->r[3]+0x00000002u; // 800FD8A4
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FD8A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FD8AC
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FD8B0
  c->r[0]=R32(c->r[13]+0xFFFF9928u); // 800FD8B4
  c->r[5]=c->r[3]+0x00000002u; // 800FD8B8
  cmpu(c,0,c->r[0],0x00000002u); // 800FD8BC
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FD8C0
  if (!crb(c,2)) { goto L_800FDBEC; } // 800FD8C4
  c->r[3]=c->r[1]+0x00000008u; // 800FD8C8
  c->lr=0x800FD8D0u; f_800FCFAC(c); // 800FD8CC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD8D0
  cmps(c,0,(int32_t)c->r[0],0); // 800FD8D4
  if (crb(c,2)) { goto L_800FDA58; } // 800FD8D8
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD8DC
  c->r[0]=0u+0x00000008u; // 800FD8E0
  c->r[3]=c->r[1]+0x00000008u; // 800FD8E4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD8E8
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD8EC
  c->r[0]=R16(c->r[13]+0xFFFF991Cu); // 800FD8F0
  c->r[4]=c->r[4]+0x00000002u; // 800FD8F4
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FD8F8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD8FC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD900
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD904
  c->r[4]=c->r[4]+0x00000002u; // 800FD908
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FD90C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FD910
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD914
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD918
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD91C
  c->r[4]=c->r[4]+0x00000002u; // 800FD920
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FD924
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD928
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD92C
  c->r[5]=c->r[4]+0x00000002u; // 800FD930
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FD934
  c->lr=0x800FD93Cu; f_800FCFFC(c); // 800FD938
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD93C
  c->r[3]=c->r[1]+0x00000008u; // 800FD940
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD944
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FD948
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD94C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD950
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD954
  c->r[4]=c->r[4]+0x00000002u; // 800FD958
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FD95C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD960
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD964
  c->r[5]=c->r[4]+0x00000002u; // 800FD968
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FD96C
  c->lr=0x800FD974u; f_800FCFE0(c); // 800FD970
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD974
  c->r[3]=c->r[1]+0x00000008u; // 800FD978
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD97C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FD980
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD984
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD988
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD98C
  c->r[4]=c->r[4]+0x00000002u; // 800FD990
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FD994
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD998
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD99C
  c->r[5]=c->r[4]+0x00000002u; // 800FD9A0
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FD9A4
  c->lr=0x800FD9ACu; f_800FD01C(c); // 800FD9A8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD9AC
  c->r[3]=c->r[1]+0x00000008u; // 800FD9B0
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD9B4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FD9B8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD9BC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD9C0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD9C4
  c->r[4]=c->r[4]+0x00000002u; // 800FD9C8
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FD9CC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD9D0
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD9D4
  c->r[5]=c->r[4]+0x00000002u; // 800FD9D8
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FD9DC
  c->lr=0x800FD9E4u; f_800FD03C(c); // 800FD9E0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD9E4
  c->r[3]=c->r[1]+0x00000008u; // 800FD9E8
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD9EC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FD9F0
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FD9F4
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FD9F8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FD9FC
  c->r[4]=c->r[4]+0x00000002u; // 800FDA00
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDA04
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDA08
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDA0C
  c->r[5]=c->r[4]+0x00000002u; // 800FDA10
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDA14
  c->lr=0x800FDA1Cu; f_800FD05C(c); // 800FDA18
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDA1C
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDA20
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDA24
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDA28
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDA2C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDA30
  c->r[3]=c->r[3]+0x00000002u; // 800FDA34
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDA38
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDA3C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDA40
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FDA44
  c->r[5]=c->r[4]+0x00000002u; // 800FDA48
  c->r[0]=c->r[3]+0x00000BDCu; // 800FDA4C
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDA50
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FDA54
L_800FDA58:;
  c->r[3]=c->r[1]+0x00000008u; // 800FDA58
  c->lr=0x800FDA60u; f_800FD07C(c); // 800FDA5C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDA60
  cmps(c,0,(int32_t)c->r[0],0); // 800FDA64
  if (crb(c,2)) { goto L_800FDDFC; } // 800FDA68
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDA6C
  c->r[0]=0u+0x00000009u; // 800FDA70
  c->r[3]=c->r[1]+0x00000008u; // 800FDA74
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDA78
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDA7C
  c->r[0]=R16(c->r[13]+0xFFFF991Au); // 800FDA80
  c->r[4]=c->r[4]+0x00000002u; // 800FDA84
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDA88
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDA8C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDA90
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDA94
  c->r[4]=c->r[4]+0x00000002u; // 800FDA98
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDA9C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDAA0
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDAA4
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDAA8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDAAC
  c->r[4]=c->r[4]+0x00000002u; // 800FDAB0
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDAB4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDAB8
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDABC
  c->r[5]=c->r[4]+0x00000002u; // 800FDAC0
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDAC4
  c->lr=0x800FDACCu; f_800FD0CC(c); // 800FDAC8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDACC
  c->r[3]=c->r[1]+0x00000008u; // 800FDAD0
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDAD4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDAD8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDADC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDAE0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDAE4
  c->r[4]=c->r[4]+0x00000002u; // 800FDAE8
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDAEC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDAF0
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDAF4
  c->r[5]=c->r[4]+0x00000002u; // 800FDAF8
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDAFC
  c->lr=0x800FDB04u; f_800FD0B0(c); // 800FDB00
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDB04
  c->r[3]=c->r[1]+0x00000008u; // 800FDB08
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB0C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDB10
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDB14
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB18
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDB1C
  c->r[4]=c->r[4]+0x00000002u; // 800FDB20
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDB24
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDB28
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB2C
  c->r[5]=c->r[4]+0x00000002u; // 800FDB30
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDB34
  c->lr=0x800FDB3Cu; f_800FD0EC(c); // 800FDB38
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDB3C
  c->r[3]=c->r[1]+0x00000008u; // 800FDB40
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB44
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDB48
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDB4C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB50
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDB54
  c->r[4]=c->r[4]+0x00000002u; // 800FDB58
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDB5C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDB60
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB64
  c->r[5]=c->r[4]+0x00000002u; // 800FDB68
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDB6C
  c->lr=0x800FDB74u; f_800FD10C(c); // 800FDB70
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDB74
  c->r[3]=c->r[1]+0x00000008u; // 800FDB78
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB7C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDB80
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDB84
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB88
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDB8C
  c->r[4]=c->r[4]+0x00000002u; // 800FDB90
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDB94
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDB98
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDB9C
  c->r[5]=c->r[4]+0x00000002u; // 800FDBA0
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDBA4
  c->lr=0x800FDBACu; f_800FD12C(c); // 800FDBA8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDBAC
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDBB0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDBB4
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDBB8
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDBBC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDBC0
  c->r[3]=c->r[3]+0x00000002u; // 800FDBC4
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDBC8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDBCC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDBD0
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FDBD4
  c->r[5]=c->r[4]+0x00000002u; // 800FDBD8
  c->r[0]=c->r[3]+0x00000BDCu; // 800FDBDC
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDBE0
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FDBE4
  goto L_800FDDFC; // 800FDBE8
L_800FDBEC:;
  c->r[3]=c->r[1]+0x00000008u; // 800FDBEC
  c->lr=0x800FDBF4u; f_800FCFAC(c); // 800FDBF0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDBF4
  cmps(c,0,(int32_t)c->r[0],0); // 800FDBF8
  if (crb(c,2)) { goto L_800FDC9C; } // 800FDBFC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDC00
  c->r[0]=0u+0x00000005u; // 800FDC04
  c->r[3]=c->r[1]+0x00000008u; // 800FDC08
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDC0C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDC10
  c->r[0]=R16(c->r[13]+0xFFFF991Cu); // 800FDC14
  c->r[4]=c->r[4]+0x00000002u; // 800FDC18
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDC1C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDC20
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDC24
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDC28
  c->r[4]=c->r[4]+0x00000002u; // 800FDC2C
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDC30
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDC34
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDC38
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDC3C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDC40
  c->r[4]=c->r[4]+0x00000002u; // 800FDC44
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDC48
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDC4C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDC50
  c->r[5]=c->r[4]+0x00000002u; // 800FDC54
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDC58
  c->lr=0x800FDC60u; f_800FCFE0(c); // 800FDC5C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDC60
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDC64
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDC68
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDC6C
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDC70
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDC74
  c->r[3]=c->r[3]+0x00000002u; // 800FDC78
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDC7C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDC80
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDC84
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FDC88
  c->r[5]=c->r[4]+0x00000002u; // 800FDC8C
  c->r[0]=c->r[3]+0x000008BBu; // 800FDC90
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDC94
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FDC98
L_800FDC9C:;
  c->r[3]=c->r[1]+0x00000008u; // 800FDC9C
  c->lr=0x800FDCA4u; f_800FD07C(c); // 800FDCA0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDCA4
  cmps(c,0,(int32_t)c->r[0],0); // 800FDCA8
  if (crb(c,2)) { goto L_800FDD4C; } // 800FDCAC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDCB0
  c->r[0]=0u+0x00000006u; // 800FDCB4
  c->r[3]=c->r[1]+0x00000008u; // 800FDCB8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDCBC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDCC0
  c->r[0]=R16(c->r[13]+0xFFFF991Au); // 800FDCC4
  c->r[4]=c->r[4]+0x00000002u; // 800FDCC8
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDCCC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDCD0
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDCD4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDCD8
  c->r[4]=c->r[4]+0x00000002u; // 800FDCDC
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDCE0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDCE4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDCE8
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDCEC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDCF0
  c->r[4]=c->r[4]+0x00000002u; // 800FDCF4
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDCF8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDCFC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDD00
  c->r[5]=c->r[4]+0x00000002u; // 800FDD04
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDD08
  c->lr=0x800FDD10u; f_800FD0B0(c); // 800FDD0C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDD10
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDD14
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDD18
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDD1C
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDD20
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDD24
  c->r[3]=c->r[3]+0x00000002u; // 800FDD28
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDD2C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDD30
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDD34
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FDD38
  c->r[5]=c->r[4]+0x00000002u; // 800FDD3C
  c->r[0]=c->r[3]+0x000008BBu; // 800FDD40
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDD44
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FDD48
L_800FDD4C:;
  c->r[3]=c->r[1]+0x00000008u; // 800FDD4C
  c->lr=0x800FDD54u; f_800FD14C(c); // 800FDD50
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDD54
  cmps(c,0,(int32_t)c->r[0],0); // 800FDD58
  if (crb(c,2)) { goto L_800FDDFC; } // 800FDD5C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDD60
  c->r[0]=0u+0x00000007u; // 800FDD64
  c->r[3]=c->r[1]+0x00000008u; // 800FDD68
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDD6C
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDD70
  c->r[0]=R16(c->r[13]+0xFFFF9918u); // 800FDD74
  c->r[4]=c->r[4]+0x00000002u; // 800FDD78
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDD7C
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDD80
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDD84
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDD88
  c->r[4]=c->r[4]+0x00000002u; // 800FDD8C
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDD90
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDD94
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDD98
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDD9C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDDA0
  c->r[4]=c->r[4]+0x00000002u; // 800FDDA4
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDDA8
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDDAC
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDDB0
  c->r[5]=c->r[4]+0x00000002u; // 800FDDB4
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDDB8
  c->lr=0x800FDDC0u; f_800FD180(c); // 800FDDBC
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDDC0
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDDC4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDDC8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDDCC
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDDD0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FDDD4
  c->r[3]=c->r[3]+0x00000002u; // 800FDDD8
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDDDC
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDDE0
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDDE4
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FDDE8
  c->r[5]=c->r[4]+0x00000002u; // 800FDDEC
  c->r[0]=c->r[3]+0x000008BBu; // 800FDDF0
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDDF4
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FDDF8
L_800FDDFC:;
  c->r[0]=R32(c->r[13]+0xFFFF9920u); // 800FDDFC
  cmps(c,0,(int32_t)c->r[0],0); // 800FDE00
  if (crb(c,2)) { goto L_800FDE80; } // 800FDE04
  c->r[5]=R32(c->r[13]+0xFFFF992Cu); // 800FDE08
  c->r[6]=0u+0x0000000Au; // 800FDE0C
  c->r[3]=0u+0x00010000u; // 800FDE10
  c->r[4]=0u+0x80290000u; // 800FDE14
  W16(c->r[5]+0x00000000u,c->r[6]); // 800FDE18
  c->r[4]=c->r[4]+0x00002440u; // 800FDE1C
  c->r[3]=c->r[3]+0xFFFF8000u; // 800FDE20
  c->r[5]=R32(c->r[13]+0xFFFF992Cu); // 800FDE24
  c->r[0]=rotl(c->r[4],16)&0x0000FFFFu; // 800FDE28
  c->r[5]=c->r[5]+0x00000002u; // 800FDE2C
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDE30
  W16(c->r[5]+0x00000000u,c->r[3]); // 800FDE34
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDE38
  c->r[3]=c->r[3]+0x00000002u; // 800FDE3C
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDE40
  W16(c->r[3]+0x00000000u,c->r[6]); // 800FDE44
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDE48
  c->r[3]=c->r[3]+0x00000002u; // 800FDE4C
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDE50
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDE54
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDE58
  c->r[3]=c->r[3]+0x00000002u; // 800FDE5C
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDE60
  W16(c->r[3]+0x00000000u,c->r[4]); // 800FDE64
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDE68
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FDE6C
  c->r[5]=c->r[4]+0x00000002u; // 800FDE70
  c->r[0]=c->r[3]+0x0000073Au; // 800FDE74
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDE78
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FDE7C
L_800FDE80:;
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDE80
  c->r[0]=0u+0x0000000Du; // 800FDE84
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDE88
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDE8C
  c->r[3]=c->r[3]+0x00000002u; // 800FDE90
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDE94
  c->r[0]=R32(c->r[30]+0x00000000u); // 800FDE98
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDE9C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDEA0
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDEA4
  c->r[3]=c->r[3]+0x00000002u; // 800FDEA8
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDEAC
  c->r[0]=R32(c->r[30]+0x00000000u); // 800FDEB0
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDEB4
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDEB8
  c->r[3]=c->r[3]+0x00000002u; // 800FDEBC
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDEC0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800FDEC4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDEC8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDECC
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDED0
  c->r[3]=c->r[3]+0x00000002u; // 800FDED4
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDED8
  c->r[0]=R32(c->r[30]+0x00000004u); // 800FDEDC
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDEE0
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDEE4
  c->r[3]=c->r[3]+0x00000002u; // 800FDEE8
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDEEC
  c->r[0]=R32(c->r[30]+0x00000008u); // 800FDEF0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDEF4
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDEF8
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDEFC
  c->r[3]=c->r[3]+0x00000002u; // 800FDF00
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDF04
  c->r[0]=R32(c->r[30]+0x00000008u); // 800FDF08
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDF0C
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDF10
  c->r[3]=c->r[3]+0x00000002u; // 800FDF14
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDF18
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800FDF1C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800FDF20
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDF24
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDF28
  c->r[3]=c->r[3]+0x00000002u; // 800FDF2C
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDF30
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800FDF34
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDF38
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDF3C
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FDF40
  c->r[0]=R32(c->r[13]+0xFFFF9928u); // 800FDF44
  c->r[4]=c->r[4]+0x00000002u; // 800FDF48
  c->r[3]=c->r[3]+0x00000199u; // 800FDF4C
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDF50
  cmpu(c,0,c->r[0],0x00000002u); // 800FDF54
  W32(c->r[13]+0xFFFF9924u,c->r[3]); // 800FDF58
  if (!crb(c,2)) { goto L_800FDFE0; } // 800FDF5C
  c->r[0]=0u+0x0000000Cu; // 800FDF60
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 800FDF64
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDF68
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 800FDF6C
  c->r[5]=R32(c->r[13]+0xFFFF992Cu); // 800FDF70
  c->r[4]=R16(c->r[13]+0xFFFF991Eu); // 800FDF74
  c->r[5]=c->r[5]+0x00000002u; // 800FDF78
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDF7C
  W16(c->r[5]+0x00000000u,c->r[4]); // 800FDF80
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDF84
  c->r[4]=c->r[4]+0x00000002u; // 800FDF88
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FDF8C
  W16(c->r[4]+0x00000000u,c->r[3]); // 800FDF90
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDF94
  c->r[3]=c->r[3]+0x00000002u; // 800FDF98
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDF9C
  W16(c->r[3]+0x00000000u,c->r[28]); // 800FDFA0
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDFA4
  c->r[3]=c->r[3]+0x00000002u; // 800FDFA8
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDFAC
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FDFB0
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FDFB4
  c->r[3]=c->r[3]+0x00000002u; // 800FDFB8
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FDFBC
  W16(c->r[3]+0x00000000u,c->r[29]); // 800FDFC0
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FDFC4
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FDFC8
  c->r[5]=c->r[4]+0x00000002u; // 800FDFCC
  c->r[0]=c->r[3]+0x000004ABu; // 800FDFD0
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDFD4
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FDFD8
  goto L_800FE05C; // 800FDFDC
L_800FDFE0:;
  c->r[0]=0u+0x0000000Bu; // 800FDFE0
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 800FDFE4
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FDFE8
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 800FDFEC
  c->r[5]=R32(c->r[13]+0xFFFF992Cu); // 800FDFF0
  c->r[4]=R16(c->r[13]+0xFFFF991Eu); // 800FDFF4
  c->r[5]=c->r[5]+0x00000002u; // 800FDFF8
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FDFFC
  W16(c->r[5]+0x00000000u,c->r[4]); // 800FE000
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FE004
  c->r[4]=c->r[4]+0x00000002u; // 800FE008
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FE00C
  W16(c->r[4]+0x00000000u,c->r[3]); // 800FE010
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FE014
  c->r[3]=c->r[3]+0x00000002u; // 800FE018
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FE01C
  W16(c->r[3]+0x00000000u,c->r[28]); // 800FE020
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FE024
  c->r[3]=c->r[3]+0x00000002u; // 800FE028
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FE02C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FE030
  c->r[3]=R32(c->r[13]+0xFFFF992Cu); // 800FE034
  c->r[3]=c->r[3]+0x00000002u; // 800FE038
  W32(c->r[13]+0xFFFF992Cu,c->r[3]); // 800FE03C
  W16(c->r[3]+0x00000000u,c->r[29]); // 800FE040
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 800FE044
  c->r[3]=R32(c->r[13]+0xFFFF9924u); // 800FE048
  c->r[5]=c->r[4]+0x00000002u; // 800FE04C
  c->r[0]=c->r[3]+0x00000494u; // 800FE050
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FE054
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FE058
L_800FE05C:;
  c->r[0]=0u+0x0000000Eu; // 800FE05C
  c->r[3]=c->r[31]|c->r[31]; // 800FE060
  W16(c->r[5]+0x00000000u,c->r[0]); // 800FE064
  c->r[4]=0u+0x00000080u; // 800FE068
  c->r[5]=R32(c->r[13]+0xFFFF992Cu); // 800FE06C
  c->r[6]=R32(c->r[13]+0xFFFF9924u); // 800FE070
  c->r[5]=c->r[5]+0x00000002u; // 800FE074
  c->r[0]=c->r[6]+0x0000001Eu; // 800FE078
  W32(c->r[13]+0xFFFF992Cu,c->r[5]); // 800FE07C
  W32(c->r[13]+0xFFFF9924u,c->r[0]); // 800FE080
  c->lr=0x800FE088u; f_800E0380(c); // 800FE084
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE088
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE08C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE090
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FE094
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FE098
  c->lr=c->r[0]; // 800FE09C
  c->r[1]=c->r[1]+0x00000020u; // 800FE0A0
  return; // 800FE0A4
}

// __AXClInit
void f_800FE0A8(Ctx* __restrict c) {
  trace_call(0x800FE0A8u);
  c->r[4]=0u+0x802E0000u; // 800FE0A8
  c->r[3]=0u+0x00010000u; // 800FE0AC
  c->r[0]=c->r[3]+0xFFFF8000u; // 800FE0B0
  c->r[5]=0u+0x00000000u; // 800FE0B4
  c->r[4]=c->r[4]+0x00001F40u; // 800FE0B8
  c->r[3]=0u+0x00000001u; // 800FE0BC
  W32(c->r[13]+0xFFFF9928u,c->r[5]); // 800FE0C0
  W32(c->r[13]+0xFFFF9930u,c->r[5]); // 800FE0C4
  W32(c->r[13]+0xFFFF992Cu,c->r[4]); // 800FE0C8
  W32(c->r[13]+0xFFFF9920u,c->r[3]); // 800FE0CC
  W16(c->r[13]+0xFFFF991Eu,c->r[0]); // 800FE0D0
  W16(c->r[13]+0xFFFF991Cu,c->r[0]); // 800FE0D4
  W16(c->r[13]+0xFFFF991Au,c->r[0]); // 800FE0D8
  W16(c->r[13]+0xFFFF9918u,c->r[0]); // 800FE0DC
  return; // 800FE0E0
}

// fn_800FE0E4
void f_800FE0E4(Ctx* __restrict c) {
  return; // 800FE0E4
}

// fn_800FE0E8
void f_800FE0E8(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF9928u,c->r[3]); // 800FE0E8
  return; // 800FE0EC
}

// AXGetMode
void f_800FE0F0(Ctx* __restrict c) {
  trace_call(0x800FE0F0u);
  c->r[3]=R16(c->r[13]+0xFFFF991Cu); // 800FE0F0
  return; // 800FE0F4
}

// AXSetCompressor
void f_800FE0F8(Ctx* __restrict c) {
  trace_call(0x800FE0F8u);
  c->r[3]=R16(c->r[13]+0xFFFF991Au); // 800FE0F8
  return; // 800FE0FC
}

// AXGetAuxAReturnVolume
void f_800FE100(Ctx* __restrict c) {
  trace_call(0x800FE100u);
  c->r[3]=R16(c->r[13]+0xFFFF9918u); // 800FE100
  return; // 800FE104
}

// fn_800FE108
void f_800FE108(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],0x00008000u); // 800FE108
  if (!crb(c,1)) { goto L_800FE118; } // 800FE10C
  c->r[3]=0u+0x00010000u; // 800FE110
  c->r[3]=c->r[3]+0xFFFF8000u; // 800FE114
L_800FE118:;
  W16(c->r[13]+0xFFFF991Eu,c->r[3]); // 800FE118
  return; // 800FE11C
}

// fn_800FE120
void f_800FE120(Ctx* __restrict c) {
  W16(c->r[13]+0xFFFF991Cu,c->r[3]); // 800FE120
  return; // 800FE124
}

// fn_800FE128
void f_800FE128(Ctx* __restrict c) {
  W16(c->r[13]+0xFFFF991Au,c->r[3]); // 800FE128
  return; // 800FE12C
}

// fn_800FE130
void f_800FE130(Ctx* __restrict c) {
  W16(c->r[13]+0xFFFF9918u,c->r[3]); // 800FE130
  return; // 800FE134
}

// fn_800FE138
void f_800FE138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE138
  c->r[0]=c->lr; // 800FE13C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FE140
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FE144
  c->r[31]=0u+0x802E0000u; // 800FE148
  c->r[31]=c->r[31]+0x00002040u; // 800FE14C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800FE150
  W32(c->r[1]+0x00000024u,c->r[29]); // 800FE154
  c->lr=0x800FE15Cu; f_800E8F9C(c); // 800FE158
  c->r[5]=c->r[31]+0x00000000u; // 800FE15C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800FE160
  W32(c->r[5]+0x00000004u,c->r[4]); // 800FE164
  c->lr=0x800FE16Cu; f_800FC3DC(c); // 800FE168
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800FE16C
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 800FE170
  c->r[3]=addc(c,~c->r[3],0x00000060u,1); // 800FE174
  cmpu(c,0,c->r[0],0x00000001u); // 800FE178
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)3797); // 800FE17C
  if (!crb(c,2)) { goto L_800FE190; } // 800FE180
  c->r[3]=0u+0x00000000u; // 800FE184
  c->lr=0x800FE18Cu; f_800FF314(c); // 800FE188
  goto L_800FE198; // 800FE18C
L_800FE190:;
  c->r[3]=0u+0x00005F50u; // 800FE190
  c->lr=0x800FE198u; f_800FF314(c); // 800FE194
L_800FE198:;
  c->lr=0x800FE19Cu; f_800FEA7C(c); // 800FE198
  c->lr=0x800FE1A0u; f_800FD6B8(c); // 800FE19C
  c->r[4]=0u+0xBABE0000u; // 800FE1A0
  c->r[29]=c->r[3]|c->r[3]; // 800FE1A4
  c->r[3]=c->r[4]+0x00000080u; // 800FE1A8
  c->lr=0x800FE1B0u; f_80100C88(c); // 800FE1AC
L_800FE1B0:;
  c->lr=0x800FE1B4u; f_80100C54(c); // 800FE1B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE1B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800FE1B0; } // 800FE1B8
  c->r[3]=c->r[29]|c->r[29]; // 800FE1BC
  c->lr=0x800FE1C4u; f_80100C88(c); // 800FE1C0
L_800FE1C4:;
  c->lr=0x800FE1C8u; f_80100C54(c); // 800FE1C4
  cmps(c,0,(int32_t)c->r[3],0); // 800FE1C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800FE1C4; } // 800FE1CC
  c->lr=0x800FE1D4u; f_800FC930(c); // 800FE1D0
  c->lr=0x800FE1D8u; f_800E8F9C(c); // 800FE1D4
  c->r[29]=c->r[31]+0x00000000u; // 800FE1D8
  W32(c->r[29]+0x0000000Cu,c->r[4]); // 800FE1DC
  W32(c->r[29]+0x00000008u,c->r[3]); // 800FE1E0
  c->lr=0x800FE1E8u; f_800FD19C(c); // 800FE1E4
  c->lr=0x800FE1ECu; f_800E8F9C(c); // 800FE1E8
  W32(c->r[29]+0x00000014u,c->r[4]); // 800FE1EC
  W32(c->r[29]+0x00000010u,c->r[3]); // 800FE1F0
  c->lr=0x800FE1F8u; f_800E8F9C(c); // 800FE1F4
  c->r[12]=R32(c->r[13]+0xFFFF9964u); // 800FE1F8
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 800FE1FC
  cmps(c,0,(int32_t)c->r[12],0); // 800FE200
  W32(c->r[29]+0x00000018u,c->r[3]); // 800FE204
  if (crb(c,2)) { goto L_800FE214; } // 800FE208
  c->ctr=c->r[12]; // 800FE20C
  if (true) { c->lr=0x800FE214u; dispatch(c,c->ctr); } // 800FE210
L_800FE214:;
  c->lr=0x800FE218u; f_800E8F9C(c); // 800FE214
  c->r[7]=R32(c->r[13]+0xFFFF9940u); // 800FE218
  c->r[8]=c->r[31]+0x00000000u; // 800FE21C
  c->r[5]=c->r[31]+0x00000040u; // 800FE220
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE224
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800FE228
  c->r[7]=c->r[7]+0x00000012u; // 800FE22C
  c->r[6]=c->r[5]+c->r[6]; // 800FE230
  W32(c->r[8]+0x00000024u,c->r[4]); // 800FE234
  c->r[5]=c->r[6]+0x00000168u; // 800FE238
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800FE23C
  c->r[4]=c->r[6]+0x000002D0u; // 800FE240
  c->r[0]=c->r[6]+0x00000438u; // 800FE244
  W32(c->r[8]+0x00000020u,c->r[3]); // 800FE248
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FE24C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800FE250
  W32(c->r[1]+0x00000010u,c->r[4]); // 800FE254
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE258
  if (crb(c,0)) { goto L_800FE264; } // 800FE25C
  c->r[7]=0u+0x00000000u; // 800FE260
L_800FE264:;
  c->r[4]=R32(c->r[13]+0xFFFF993Cu); // 800FE264
  c->r[3]=R32(c->r[13]+0xFFFF9940u); // 800FE268
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800FE26C
  if (crb(c,0)) { goto L_800FE284; } // 800FE270
  c->r[0]=c->r[3]+0x00000012u; // 800FE274
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800FE278
  if (!crb(c,0)) { goto L_800FE284; } // 800FE27C
  W32(c->r[13]+0xFFFF993Cu,c->r[7]); // 800FE280
L_800FE284:;
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 800FE284
  c->r[29]=c->r[31]+0x000008E0u; // 800FE288
  W32(c->r[13]+0xFFFF9940u,c->r[7]); // 800FE28C
  c->r[3]=c->r[31]+0x000005E0u; // 800FE290
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 800FE294
  c->r[5]=c->r[1]+0x00000008u; // 800FE298
  c->r[4]=c->r[29]+c->r[0]; // 800FE29C
  c->lr=0x800FE2A4u; f_800FD6E8(c); // 800FE2A0
  c->r[3]=R32(c->r[13]+0xFFFF9970u); // 800FE2A4
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 800FE2A8
  c->r[3]=c->r[3]+0x00000001u; // 800FE2AC
  cmpu(c,0,c->r[0],0x00000001u); // 800FE2B0
  W32(c->r[13]+0xFFFF9970u,c->r[3]); // 800FE2B4
  if (!crb(c,2)) { goto L_800FE2E0; } // 800FE2B8
  c->r[3]=0u+0xAAAB0000u; // 800FE2BC
  c->r[4]=R32(c->r[13]+0xFFFF9970u); // 800FE2C0
  c->r[0]=c->r[3]+0xFFFFAAABu; // 800FE2C4
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[4])>>32); // 800FE2C8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FE2CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800FE2D0
  c->r[0]=c->r[4]-c->r[0]; // 800FE2D4
  W32(c->r[13]+0xFFFF9970u,c->r[0]); // 800FE2D8
  goto L_800FE300; // 800FE2DC
L_800FE2E0:;
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 800FE2E0
  c->r[4]=0u+0x00000180u; // 800FE2E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800FE2E8
  W32(c->r[13]+0xFFFF9970u,c->r[0]); // 800FE2EC
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 800FE2F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 800FE2F4
  c->r[3]=c->r[29]+c->r[0]; // 800FE2F8
  c->lr=0x800FE300u; f_800FC338(c); // 800FE2FC
L_800FE300:;
  c->lr=0x800FE304u; f_800E8F9C(c); // 800FE300
  c->r[29]=c->r[31]+0x00000000u; // 800FE304
  W32(c->r[29]+0x0000002Cu,c->r[4]); // 800FE308
  W32(c->r[29]+0x00000028u,c->r[3]); // 800FE30C
  c->lr=0x800FE314u; f_800FEDBC(c); // 800FE310
  W32(c->r[29]+0x00000030u,c->r[3]); // 800FE314
  c->lr=0x800FE31Cu; f_800FFB68(c); // 800FE318
  cmps(c,0,(int32_t)c->r[3],0); // 800FE31C
  if (crb(c,2)) { goto L_800FE378; } // 800FE320
  c->r[0]=0u+0x00000007u; // 800FE324
  c->ctr=c->r[0]; // 800FE328
L_800FE32C:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 800FE32C
  W8(c->r[3]+0x00000000u,c->r[0]); // 800FE330
  c->r[0]=R8(c->r[29]+0x00000001u); // 800FE334
  W8(c->r[3]+0x00000001u,c->r[0]); // 800FE338
  c->r[0]=R8(c->r[29]+0x00000002u); // 800FE33C
  W8(c->r[3]+0x00000002u,c->r[0]); // 800FE340
  c->r[0]=R8(c->r[29]+0x00000003u); // 800FE344
  W8(c->r[3]+0x00000003u,c->r[0]); // 800FE348
  c->r[0]=R8(c->r[29]+0x00000004u); // 800FE34C
  W8(c->r[3]+0x00000004u,c->r[0]); // 800FE350
  c->r[0]=R8(c->r[29]+0x00000005u); // 800FE354
  W8(c->r[3]+0x00000005u,c->r[0]); // 800FE358
  c->r[0]=R8(c->r[29]+0x00000006u); // 800FE35C
  W8(c->r[3]+0x00000006u,c->r[0]); // 800FE360
  c->r[0]=R8(c->r[29]+0x00000007u); // 800FE364
  c->r[29]=c->r[29]+0x00000008u; // 800FE368
  W8(c->r[3]+0x00000007u,c->r[0]); // 800FE36C
  c->r[3]=c->r[3]+0x00000008u; // 800FE370
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FE32C; } // 800FE374
L_800FE378:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE378
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FE37C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800FE380
  c->r[29]=R32(c->r[1]+0x00000024u); // 800FE384
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FE388
  c->lr=c->r[0]; // 800FE38C
  c->r[1]=c->r[1]+0x00000030u; // 800FE390
  return; // 800FE394
}

// __AXOutAiCallback
void f_800FE398(Ctx* __restrict c) {
  trace_call(0x800FE398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE398
  c->r[0]=c->lr; // 800FE39C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE3A0
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 800FE3A4
  cmps(c,0,(int32_t)c->r[0],1); // 800FE3A8
  if (crb(c,2)) { goto L_800FE438; } // 800FE3AC
  c->r[0]=R32(c->r[13]+0xFFFF9968u); // 800FE3B0
  cmpu(c,0,c->r[0],0x00000001u); // 800FE3B4
  if (!crb(c,2)) { goto L_800FE3CC; } // 800FE3B8
  c->r[0]=0u+0x00000000u; // 800FE3BC
  W32(c->r[13]+0xFFFF9968u,c->r[0]); // 800FE3C0
  c->lr=0x800FE3C8u; f_800FE138(c); // 800FE3C4
  goto L_800FE3E0; // 800FE3C8
L_800FE3CC:;
  c->r[0]=0u+0x00000002u; // 800FE3CC
  c->r[3]=0u+0x802E0000u; // 800FE3D0
  W32(c->r[13]+0xFFFF9968u,c->r[0]); // 800FE3D4
  c->r[3]=c->r[3]+0x00002DA0u; // 800FE3D8
  c->lr=0x800FE3E0u; f_80100E14(c); // 800FE3DC
L_800FE3E0:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 800FE3E0
  cmpu(c,0,c->r[0],0x00000001u); // 800FE3E4
  if (!crb(c,2)) { goto L_800FE438; } // 800FE3E8
  c->r[0]=R32(c->r[13]+0xFFFF996Cu); // 800FE3EC
  c->r[3]=0u+0x802E0000u; // 800FE3F0
  c->r[3]=c->r[3]+0x00002920u; // 800FE3F4
  c->r[4]=0u+0x00000180u; // 800FE3F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 800FE3FC
  c->r[3]=c->r[3]+c->r[0]; // 800FE400
  c->lr=0x800FE408u; f_800FC338(c); // 800FE404
  c->r[4]=R32(c->r[13]+0xFFFF996Cu); // 800FE408
  c->r[3]=0u+0xAAAB0000u; // 800FE40C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 800FE410
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 800FE414
  c->r[4]=c->r[4]+0x00000001u; // 800FE418
  c->r[3]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 800FE41C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800FE420
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)3); // 800FE424
  c->r[4]=c->r[4]-c->r[3]; // 800FE428
  cmpu(c,0,c->r[4],c->r[0]); // 800FE42C
  if (crb(c,2)) { goto L_800FE438; } // 800FE430
  W32(c->r[13]+0xFFFF996Cu,c->r[4]); // 800FE434
L_800FE438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE438
  c->lr=c->r[0]; // 800FE43C
  c->r[1]=c->r[1]+0x00000010u; // 800FE440
  return; // 800FE444
}

// __AXDSPInitCallback
void f_800FE448(Ctx* __restrict c) {
  trace_call(0x800FE448u);
  c->r[0]=0u+0x00000001u; // 800FE448
  W32(c->r[13]+0xFFFF9960u,c->r[0]); // 800FE44C
  return; // 800FE450
}

// __AXDSPResumeCallback
void f_800FE454(Ctx* __restrict c) {
  trace_call(0x800FE454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE454
  c->r[0]=c->lr; // 800FE458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE45C
  c->r[0]=R32(c->r[13]+0xFFFF9968u); // 800FE460
  cmpu(c,0,c->r[0],0x00000002u); // 800FE464
  if (!crb(c,2)) { goto L_800FE490; } // 800FE468
  c->r[0]=0u+0x00000000u; // 800FE46C
  W32(c->r[13]+0xFFFF9968u,c->r[0]); // 800FE470
  c->lr=0x800FE478u; f_800FE138(c); // 800FE474
  c->r[12]=R32(c->r[13]+0xFFFF9938u); // 800FE478
  cmps(c,0,(int32_t)c->r[12],0); // 800FE47C
  if (crb(c,2)) { goto L_800FE498; } // 800FE480
  c->ctr=c->r[12]; // 800FE484
  if (true) { c->lr=0x800FE48Cu; dispatch(c,c->ctr); } // 800FE488
  goto L_800FE498; // 800FE48C
L_800FE490:;
  c->r[0]=0u+0x00000001u; // 800FE490
  W32(c->r[13]+0xFFFF9968u,c->r[0]); // 800FE494
L_800FE498:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE498
  c->lr=c->r[0]; // 800FE49C
  c->r[1]=c->r[1]+0x00000010u; // 800FE4A0
  return; // 800FE4A4
}

// __AXDSPDoneCallback
void f_800FE4A8(Ctx* __restrict c) {
  trace_call(0x800FE4A8u);
  c->r[0]=0u+0x00000001u; // 800FE4A8
  c->r[3]=c->r[13]+0xFFFF9950u; // 800FE4AC
  W32(c->r[13]+0xFFFF995Cu,c->r[0]); // 800FE4B0
  f_800E8CE4(c); return; // 800FE4B4
}

// __AXDSPRequestCallback
void f_800FE4B8(Ctx* __restrict c) {
  trace_call(0x800FE4B8u);
  return; // 800FE4B8
}

// __AXOutInitDSP
void f_800FE4BC(Ctx* __restrict c) {
  stub_log(0x800FE4BCu);  return;
}

// __AXOutInit
void f_800FE5AC(Ctx* __restrict c) {
  trace_call(0x800FE5ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE5AC
  c->r[0]=c->lr; // 800FE5B0
  c->r[4]=0u+0x00000000u; // 800FE5B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE5B8
  c->r[0]=0u+0x00000020u; // 800FE5BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE5C0
  c->r[31]=0u+0x802E0000u; // 800FE5C4
  c->r[31]=c->r[31]+0x00002040u; // 800FE5C8
  W32(c->r[13]+0xFFFF9970u,c->r[4]); // 800FE5CC
  c->r[5]=c->r[31]+0x000008E0u; // 800FE5D0
  W32(c->r[13]+0xFFFF996Cu,c->r[4]); // 800FE5D4
  W32(c->r[13]+0xFFFF9948u,c->r[3]); // 800FE5D8
  W32(c->r[13]+0xFFFF9958u,c->r[4]); // 800FE5DC
  c->ctr=c->r[0]; // 800FE5E0
L_800FE5E4:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 800FE5E4
  W32(c->r[5]+0x00000004u,c->r[4]); // 800FE5E8
  W32(c->r[5]+0x00000008u,c->r[4]); // 800FE5EC
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800FE5F0
  W32(c->r[5]+0x00000010u,c->r[4]); // 800FE5F4
  W32(c->r[5]+0x00000014u,c->r[4]); // 800FE5F8
  W32(c->r[5]+0x00000018u,c->r[4]); // 800FE5FC
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 800FE600
  W32(c->r[5]+0x00000020u,c->r[4]); // 800FE604
  c->r[5]=c->r[5]+0x00000024u; // 800FE608
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FE5E4; } // 800FE60C
  c->r[3]=c->r[31]+0x000008E0u; // 800FE610
  c->r[4]=0u+0x00000480u; // 800FE614
  c->lr=0x800FE61Cu; f_800E0380(c); // 800FE618
  c->r[0]=0u+0x00000018u; // 800FE61C
  c->r[4]=c->r[31]+0x000005E0u; // 800FE620
  c->r[3]=0u+0x00000000u; // 800FE624
  c->ctr=c->r[0]; // 800FE628
L_800FE62C:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FE62C
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FE630
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FE634
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FE638
  W32(c->r[4]+0x00000010u,c->r[3]); // 800FE63C
  W32(c->r[4]+0x00000014u,c->r[3]); // 800FE640
  W32(c->r[4]+0x00000018u,c->r[3]); // 800FE644
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800FE648
  c->r[4]=c->r[4]+0x00000020u; // 800FE64C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FE62C; } // 800FE650
  c->r[3]=c->r[31]+0x000005E0u; // 800FE654
  c->r[4]=0u+0x00000300u; // 800FE658
  c->lr=0x800FE660u; f_800E0380(c); // 800FE65C
  c->r[0]=0u+0x00000024u; // 800FE660
  c->r[4]=c->r[31]+0x00000040u; // 800FE664
  c->r[3]=0u+0x00000000u; // 800FE668
  c->ctr=c->r[0]; // 800FE66C
L_800FE670:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FE670
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FE674
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FE678
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FE67C
  W32(c->r[4]+0x00000010u,c->r[3]); // 800FE680
  W32(c->r[4]+0x00000014u,c->r[3]); // 800FE684
  W32(c->r[4]+0x00000018u,c->r[3]); // 800FE688
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800FE68C
  W32(c->r[4]+0x00000020u,c->r[3]); // 800FE690
  W32(c->r[4]+0x00000024u,c->r[3]); // 800FE694
  c->r[4]=c->r[4]+0x00000028u; // 800FE698
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FE670; } // 800FE69C
  c->r[3]=c->r[31]+0x00000040u; // 800FE6A0
  c->r[4]=0u+0x000005A0u; // 800FE6A4
  c->lr=0x800FE6ACu; f_800E0380(c); // 800FE6A8
  c->lr=0x800FE6B0u; f_800FE4BC(c); // 800FE6AC
  c->r[3]=0u+0x80100000u; // 800FE6B0
  c->r[3]=c->r[3]+0xFFFFE398u; // 800FE6B4
  c->lr=0x800FE6BCu; f_800FC2F4(c); // 800FE6B8
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 800FE6BC
  c->r[8]=c->r[31]+0x00000040u; // 800FE6C0
  c->r[4]=0u+0x00000012u; // 800FE6C4
  c->r[3]=0u+0x000000B4u; // 800FE6C8
  c->r[7]=c->r[8]+0x00000168u; // 800FE6CC
  c->r[6]=c->r[8]+0x000002D0u; // 800FE6D0
  c->r[5]=c->r[8]+0x00000438u; // 800FE6D4
  cmpu(c,0,c->r[0],0x00000001u); // 800FE6D8
  W32(c->r[1]+0x00000008u,c->r[8]); // 800FE6DC
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800FE6E0
  W32(c->r[1]+0x00000010u,c->r[6]); // 800FE6E4
  W32(c->r[1]+0x00000014u,c->r[5]); // 800FE6E8
  W32(c->r[13]+0xFFFF993Cu,c->r[4]); // 800FE6EC
  W32(c->r[13]+0xFFFF9940u,c->r[4]); // 800FE6F0
  W32(c->r[13]+0xFFFF9944u,c->r[3]); // 800FE6F4
  if (!crb(c,2)) { goto L_800FE714; } // 800FE6F8
  c->r[4]=c->r[31]+0x000008E0u; // 800FE6FC
  c->r[3]=c->r[31]+0x000005E0u; // 800FE700
  c->r[4]=c->r[4]+0x00000300u; // 800FE704
  c->r[5]=c->r[1]+0x00000008u; // 800FE708
  c->lr=0x800FE710u; f_800FD6E8(c); // 800FE70C
  goto L_800FE728; // 800FE710
L_800FE714:;
  c->r[4]=c->r[31]+0x000008E0u; // 800FE714
  c->r[3]=c->r[31]+0x000005E0u; // 800FE718
  c->r[4]=c->r[4]+0x00000180u; // 800FE71C
  c->r[5]=c->r[1]+0x00000008u; // 800FE720
  c->lr=0x800FE728u; f_800FD6E8(c); // 800FE724
L_800FE728:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 800FE728
  c->r[4]=0u+0x00000001u; // 800FE72C
  c->r[3]=0u+0x00000000u; // 800FE730
  W32(c->r[13]+0xFFFF9968u,c->r[4]); // 800FE734
  cmpu(c,0,c->r[0],0x00000001u); // 800FE738
  W32(c->r[13]+0xFFFF9964u,c->r[3]); // 800FE73C
  if (!crb(c,2)) { goto L_800FE76C; } // 800FE740
  c->r[3]=R32(c->r[13]+0xFFFF996Cu); // 800FE744
  c->r[0]=c->r[31]+0x000008E0u; // 800FE748
  c->r[4]=0u+0x00000180u; // 800FE74C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 800FE750
  c->r[3]=c->r[0]+c->r[3]; // 800FE754
  c->lr=0x800FE75Cu; f_800FC338(c); // 800FE758
  c->r[3]=R32(c->r[13]+0xFFFF996Cu); // 800FE75C
  c->r[0]=c->r[3]+0x00000001u; // 800FE760
  W32(c->r[13]+0xFFFF996Cu,c->r[0]); // 800FE764
  goto L_800FE784; // 800FE768
L_800FE76C:;
  c->r[3]=R32(c->r[13]+0xFFFF9970u); // 800FE76C
  c->r[0]=c->r[31]+0x000008E0u; // 800FE770
  c->r[4]=0u+0x00000180u; // 800FE774
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 800FE778
  c->r[3]=c->r[0]+c->r[3]; // 800FE77C
  c->lr=0x800FE784u; f_800FC338(c); // 800FE780
L_800FE784:;
  c->lr=0x800FE788u; f_800FC3B4(c); // 800FE784
  c->r[0]=0u+0x00000000u; // 800FE788
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 800FE78C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE790
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE794
  c->lr=c->r[0]; // 800FE798
  c->r[1]=c->r[1]+0x00000020u; // 800FE79C
  return; // 800FE7A0
}

// __AXOutQuit
void f_800FE7A4(Ctx* __restrict c) {
  trace_call(0x800FE7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE7A4
  c->r[0]=c->lr; // 800FE7A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE7AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE7B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FE7B4
  c->lr=0x800FE7BCu; f_800E4F54(c); // 800FE7B8
  c->r[31]=0u+0x00000000u; // 800FE7BC
  c->r[4]=0u+0x802E0000u; // 800FE7C0
  W32(c->r[13]+0xFFFF9964u,c->r[31]); // 800FE7C4
  c->r[30]=c->r[3]|c->r[3]; // 800FE7C8
  c->r[3]=c->r[4]+0x00002DA0u; // 800FE7CC
  c->lr=0x800FE7D4u; f_80100DD4(c); // 800FE7D0
  c->r[3]=c->r[13]+0xFFFF9950u; // 800FE7D4
  c->lr=0x800FE7DCu; f_800E8BF8(c); // 800FE7D8
  c->r[3]=0u+0x00000000u; // 800FE7DC
  c->lr=0x800FE7E4u; f_800FC2F4(c); // 800FE7E0
  c->lr=0x800FE7E8u; f_800FC3C8(c); // 800FE7E4
  W32(c->r[13]+0xFFFF9938u,c->r[31]); // 800FE7E8
  c->r[3]=c->r[30]|c->r[30]; // 800FE7EC
  c->lr=0x800FE7F4u; f_800E4F7C(c); // 800FE7F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE7F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE7F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FE7FC
  c->lr=c->r[0]; // 800FE800
  c->r[1]=c->r[1]+0x00000010u; // 800FE804
  return; // 800FE808
}

// AXRegisterCallback
void f_800FE80C(Ctx* __restrict c) {
  trace_call(0x800FE80Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE80C
  c->r[0]=c->lr; // 800FE810
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE818
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FE81C
  c->r[30]=c->r[3]|c->r[3]; // 800FE820
  c->r[31]=R32(c->r[13]+0xFFFF9964u); // 800FE824
  c->lr=0x800FE82Cu; f_800E4F54(c); // 800FE828
  W32(c->r[13]+0xFFFF9964u,c->r[30]); // 800FE82C
  c->lr=0x800FE834u; f_800E4F7C(c); // 800FE830
  c->r[3]=c->r[31]|c->r[31]; // 800FE834
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE838
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FE83C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE840
  c->lr=c->r[0]; // 800FE844
  c->r[1]=c->r[1]+0x00000010u; // 800FE848
  return; // 800FE84C
}

// AXRmtGetSamplesLeft
void f_800FE850(Ctx* __restrict c) {
  trace_call(0x800FE850u);
  c->r[3]=R32(c->r[13]+0xFFFF9940u); // 800FE850
  c->r[3]=addc(c,c->r[3],0xFFFFFFDCu,0); cr0(c,c->r[3]); // 800FE854
  if (!crb(c,0)) { goto L_800FE864; } // 800FE858
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE85C
  c->r[3]=c->r[3]+c->r[0]; // 800FE860
L_800FE864:;
  c->r[0]=R32(c->r[13]+0xFFFF993Cu); // 800FE864
  c->r[3]=c->r[3]-c->r[0]; cr0(c,c->r[3]); // 800FE868
  if (!crb(c,0)) return; // 800FE86C
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE870
  c->r[3]=c->r[3]+c->r[0]; // 800FE874
  return; // 800FE878
}

// AXRmtGetSamples
void f_800FE87C(Ctx* __restrict c) {
  trace_call(0x800FE87Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE87C
  c->r[0]=c->lr; // 800FE880
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE884
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FE888
  c->r[6]=R32(c->r[13]+0xFFFF9940u); // 800FE88C
  c->r[31]=addc(c,c->r[6],0xFFFFFFDCu,0); cr0(c,c->r[31]); // 800FE890
  if (!crb(c,0)) { goto L_800FE8A0; } // 800FE894
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE898
  c->r[31]=c->r[31]+c->r[0]; // 800FE89C
L_800FE8A0:;
  c->r[0]=R32(c->r[13]+0xFFFF993Cu); // 800FE8A0
  c->r[31]=c->r[31]-c->r[0]; cr0(c,c->r[31]); // 800FE8A4
  if (!crb(c,0)) { goto L_800FE8B4; } // 800FE8A8
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE8AC
  c->r[31]=c->r[31]+c->r[0]; // 800FE8B0
L_800FE8B4:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 800FE8B4
  if (!crb(c,1)) { goto L_800FE8C0; } // 800FE8B8
  goto L_800FE8C4; // 800FE8BC
L_800FE8C0:;
  c->r[31]=c->r[5]|c->r[5]; // 800FE8C0
L_800FE8C4:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 800FE8C4
  c->r[5]=0u+0x802E0000u; // 800FE8C8
  c->r[7]=R32(c->r[13]+0xFFFF993Cu); // 800FE8CC
  c->r[5]=c->r[5]+0x00002080u; // 800FE8D0
  c->r[5]=c->r[5]+c->r[0]; // 800FE8D4
  c->ctr=c->r[31]; // 800FE8D8
  cmps(c,0,(int32_t)c->r[31],0); // 800FE8DC
  if (!crb(c,1)) { goto L_800FE90C; } // 800FE8E0
L_800FE8E4:;
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800FE8E4
  c->r[7]=c->r[7]+0x00000001u; // 800FE8E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+c->r[5]); // 800FE8EC
  W16(c->r[4]+0x00000000u,c->r[0]); // 800FE8F0
  c->r[4]=c->r[4]+0x00000002u; // 800FE8F4
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE8F8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800FE8FC
  if (crb(c,0)) { goto L_800FE908; } // 800FE900
  c->r[7]=0u+0x00000000u; // 800FE904
L_800FE908:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FE8E4; } // 800FE908
L_800FE90C:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 800FE90C
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE910
  c->r[3]=0u+0x802E0000u; // 800FE914
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800FE918
  c->r[3]=c->r[3]+0x00002080u; // 800FE91C
  c->r[3]=c->r[3]+c->r[5]; // 800FE920
  c->lr=0x800FE928u; f_800E0354(c); // 800FE924
  c->r[3]=c->r[31]|c->r[31]; // 800FE928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FE92C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE930
  c->lr=c->r[0]; // 800FE934
  c->r[1]=c->r[1]+0x00000010u; // 800FE938
  return; // 800FE93C
}

// AXRmtAdvancePtr
void f_800FE940(Ctx* __restrict c) {
  trace_call(0x800FE940u);
  c->r[4]=R32(c->r[13]+0xFFFF9940u); // 800FE940
  c->r[4]=addc(c,c->r[4],0xFFFFFFDCu,0); cr0(c,c->r[4]); // 800FE944
  if (!crb(c,0)) { goto L_800FE954; } // 800FE948
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE94C
  c->r[4]=c->r[4]+c->r[0]; // 800FE950
L_800FE954:;
  c->r[0]=R32(c->r[13]+0xFFFF993Cu); // 800FE954
  c->r[4]=c->r[4]-c->r[0]; cr0(c,c->r[4]); // 800FE958
  if (!crb(c,0)) { goto L_800FE968; } // 800FE95C
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 800FE960
  c->r[4]=c->r[4]+c->r[0]; // 800FE964
L_800FE968:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800FE968
  if (!crb(c,1)) { goto L_800FE974; } // 800FE96C
  c->r[3]=c->r[4]|c->r[4]; // 800FE970
L_800FE974:;
  c->r[0]=R32(c->r[13]+0xFFFF993Cu); // 800FE974
  c->r[4]=R32(c->r[13]+0xFFFF9944u); // 800FE978
  c->r[0]=c->r[0]+c->r[3]; // 800FE97C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800FE980
  W32(c->r[13]+0xFFFF993Cu,c->r[0]); // 800FE984
  if (crb(c,0)) return; // 800FE988
  c->r[0]=c->r[0]-c->r[4]; // 800FE98C
  W32(c->r[13]+0xFFFF993Cu,c->r[0]); // 800FE990
  return; // 800FE994
}

// __AXGetStudio
void f_800FE998(Ctx* __restrict c) {
  trace_call(0x800FE998u);
  c->r[3]=0u+0x802E0000u; // 800FE998
  c->r[3]=c->r[3]+0x00002E40u; // 800FE99C
  return; // 800FE9A0
}

// __AXDepopFadeMain
void f_800FE9A4(Ctx* __restrict c) {
  trace_call(0x800FE9A4u);
  c->r[6]=0u+0x2AAB0000u; // 800FE9A4
  c->r[7]=R32(c->r[3]+0x00000000u); // 800FE9A8
  c->r[0]=c->r[6]+0xFFFFAAABu; // 800FE9AC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 800FE9B0
  c->r[0]=sraw(c,c->r[0],4); // 800FE9B4
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 800FE9B8
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 800FE9BC
  if (crb(c,2)) { goto L_800FE9FC; } // 800FE9C0
  cmps(c,0,(int32_t)c->r[0],20); // 800FE9C4
  if (!crb(c,1)) { goto L_800FE9D0; } // 800FE9C8
  c->r[0]=0u+0x00000014u; // 800FE9CC
L_800FE9D0:;
  cmps(c,0,(int32_t)c->r[0],-20); // 800FE9D0
  if (!crb(c,0)) { goto L_800FE9DC; } // 800FE9D4
  c->r[0]=0u+0xFFFFFFECu; // 800FE9D8
L_800FE9DC:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FE9DC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800FE9E0
  c->r[0]=0u-c->r[0]; // 800FE9E4
  c->r[4]=R32(c->r[3]+0x00000000u); // 800FE9E8
  c->r[4]=c->r[4]-c->r[6]; // 800FE9EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800FE9F0
  W16(c->r[5]+0x00000000u,c->r[0]); // 800FE9F4
  return; // 800FE9F8
L_800FE9FC:;
  c->r[0]=0u+0x00000000u; // 800FE9FC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FEA00
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FEA04
  W16(c->r[5]+0x00000000u,c->r[0]); // 800FEA08
  return; // 800FEA0C
}

// __AXDepopFadeRmt
void f_800FEA10(Ctx* __restrict c) {
  trace_call(0x800FEA10u);
  c->r[6]=0u+0x38E40000u; // 800FEA10
  c->r[7]=R32(c->r[3]+0x00000000u); // 800FEA14
  c->r[0]=c->r[6]+0xFFFF8E39u; // 800FEA18
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 800FEA1C
  c->r[0]=sraw(c,c->r[0],2); // 800FEA20
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 800FEA24
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 800FEA28
  if (crb(c,2)) { goto L_800FEA68; } // 800FEA2C
  cmps(c,0,(int32_t)c->r[0],20); // 800FEA30
  if (!crb(c,1)) { goto L_800FEA3C; } // 800FEA34
  c->r[0]=0u+0x00000014u; // 800FEA38
L_800FEA3C:;
  cmps(c,0,(int32_t)c->r[0],-20); // 800FEA3C
  if (!crb(c,0)) { goto L_800FEA48; } // 800FEA40
  c->r[0]=0u+0xFFFFFFECu; // 800FEA44
L_800FEA48:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 800FEA48
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 800FEA4C
  c->r[0]=0u-c->r[0]; // 800FEA50
  c->r[4]=R32(c->r[3]+0x00000000u); // 800FEA54
  c->r[4]=c->r[4]-c->r[6]; // 800FEA58
  W32(c->r[3]+0x00000000u,c->r[4]); // 800FEA5C
  W16(c->r[5]+0x00000000u,c->r[0]); // 800FEA60
  return; // 800FEA64
L_800FEA68:;
  c->r[0]=0u+0x00000000u; // 800FEA68
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FEA6C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FEA70
  W16(c->r[5]+0x00000000u,c->r[0]); // 800FEA74
  return; // 800FEA78
}

// __AXPrintStudio
void f_800FEA7C(Ctx* __restrict c) {
  trace_call(0x800FEA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEA7C
  c->r[0]=c->lr; // 800FEA80
  c->r[3]=c->r[13]+0xFFFF99C4u; // 800FEA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEA88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FEA8C
  c->r[31]=0u+0x802E0000u; // 800FEA90
  c->r[4]=c->r[31]+0x00002E40u; // 800FEA94
  c->r[5]=c->r[4]+0x00000004u; // 800FEA98
  c->lr=0x800FEAA0u; f_800FE9A4(c); // 800FEA9C
  c->r[31]=c->r[31]+0x00002E40u; // 800FEAA0
  c->r[3]=c->r[13]+0xFFFF99C0u; // 800FEAA4
  c->r[4]=c->r[31]+0x00000006u; // 800FEAA8
  c->r[5]=c->r[31]+0x0000000Au; // 800FEAAC
  c->lr=0x800FEAB4u; f_800FE9A4(c); // 800FEAB0
  c->r[4]=c->r[31]+0x0000000Cu; // 800FEAB4
  c->r[5]=c->r[31]+0x00000010u; // 800FEAB8
  c->r[3]=c->r[13]+0xFFFF99BCu; // 800FEABC
  c->lr=0x800FEAC4u; f_800FE9A4(c); // 800FEAC0
  c->r[4]=c->r[31]+0x00000012u; // 800FEAC4
  c->r[5]=c->r[31]+0x00000016u; // 800FEAC8
  c->r[3]=c->r[13]+0xFFFF99B8u; // 800FEACC
  c->lr=0x800FEAD4u; f_800FE9A4(c); // 800FEAD0
  c->r[4]=c->r[31]+0x00000018u; // 800FEAD4
  c->r[5]=c->r[31]+0x0000001Cu; // 800FEAD8
  c->r[3]=c->r[13]+0xFFFF99B4u; // 800FEADC
  c->lr=0x800FEAE4u; f_800FE9A4(c); // 800FEAE0
  c->r[4]=c->r[31]+0x0000001Eu; // 800FEAE4
  c->r[5]=c->r[31]+0x00000022u; // 800FEAE8
  c->r[3]=c->r[13]+0xFFFF99B0u; // 800FEAEC
  c->lr=0x800FEAF4u; f_800FE9A4(c); // 800FEAF0
  c->r[4]=c->r[31]+0x00000024u; // 800FEAF4
  c->r[5]=c->r[31]+0x00000028u; // 800FEAF8
  c->r[3]=c->r[13]+0xFFFF99ACu; // 800FEAFC
  c->lr=0x800FEB04u; f_800FE9A4(c); // 800FEB00
  c->r[4]=c->r[31]+0x0000002Au; // 800FEB04
  c->r[5]=c->r[31]+0x0000002Eu; // 800FEB08
  c->r[3]=c->r[13]+0xFFFF99A8u; // 800FEB0C
  c->lr=0x800FEB14u; f_800FE9A4(c); // 800FEB10
  c->r[4]=c->r[31]+0x00000030u; // 800FEB14
  c->r[5]=c->r[31]+0x00000034u; // 800FEB18
  c->r[3]=c->r[13]+0xFFFF99A4u; // 800FEB1C
  c->lr=0x800FEB24u; f_800FE9A4(c); // 800FEB20
  c->r[4]=c->r[31]+0x00000036u; // 800FEB24
  c->r[5]=c->r[31]+0x0000003Au; // 800FEB28
  c->r[3]=c->r[13]+0xFFFF99A0u; // 800FEB2C
  c->lr=0x800FEB34u; f_800FE9A4(c); // 800FEB30
  c->r[4]=c->r[31]+0x0000003Cu; // 800FEB34
  c->r[5]=c->r[31]+0x00000040u; // 800FEB38
  c->r[3]=c->r[13]+0xFFFF999Cu; // 800FEB3C
  c->lr=0x800FEB44u; f_800FE9A4(c); // 800FEB40
  c->r[4]=c->r[31]+0x00000042u; // 800FEB44
  c->r[5]=c->r[31]+0x00000046u; // 800FEB48
  c->r[3]=c->r[13]+0xFFFF9998u; // 800FEB4C
  c->lr=0x800FEB54u; f_800FE9A4(c); // 800FEB50
  c->r[4]=c->r[31]+0x00000048u; // 800FEB54
  c->r[5]=c->r[31]+0x0000004Cu; // 800FEB58
  c->r[3]=c->r[13]+0xFFFF9994u; // 800FEB5C
  c->lr=0x800FEB64u; f_800FEA10(c); // 800FEB60
  c->r[4]=c->r[31]+0x00000054u; // 800FEB64
  c->r[5]=c->r[31]+0x00000058u; // 800FEB68
  c->r[3]=c->r[13]+0xFFFF9990u; // 800FEB6C
  c->lr=0x800FEB74u; f_800FEA10(c); // 800FEB70
  c->r[4]=c->r[31]+0x00000060u; // 800FEB74
  c->r[5]=c->r[31]+0x00000064u; // 800FEB78
  c->r[3]=c->r[13]+0xFFFF998Cu; // 800FEB7C
  c->lr=0x800FEB84u; f_800FEA10(c); // 800FEB80
  c->r[4]=c->r[31]+0x0000006Cu; // 800FEB84
  c->r[5]=c->r[31]+0x00000070u; // 800FEB88
  c->r[3]=c->r[13]+0xFFFF9988u; // 800FEB8C
  c->lr=0x800FEB94u; f_800FEA10(c); // 800FEB90
  c->r[4]=c->r[31]+0x0000004Eu; // 800FEB94
  c->r[5]=c->r[31]+0x00000052u; // 800FEB98
  c->r[3]=c->r[13]+0xFFFF9984u; // 800FEB9C
  c->lr=0x800FEBA4u; f_800FEA10(c); // 800FEBA0
  c->r[4]=c->r[31]+0x0000005Au; // 800FEBA4
  c->r[5]=c->r[31]+0x0000005Eu; // 800FEBA8
  c->r[3]=c->r[13]+0xFFFF9980u; // 800FEBAC
  c->lr=0x800FEBB4u; f_800FEA10(c); // 800FEBB0
  c->r[4]=c->r[31]+0x00000066u; // 800FEBB4
  c->r[5]=c->r[31]+0x0000006Au; // 800FEBB8
  c->r[3]=c->r[13]+0xFFFF997Cu; // 800FEBBC
  c->lr=0x800FEBC4u; f_800FEA10(c); // 800FEBC0
  c->r[4]=c->r[31]+0x00000072u; // 800FEBC4
  c->r[5]=c->r[31]+0x00000076u; // 800FEBC8
  c->r[3]=c->r[13]+0xFFFF9978u; // 800FEBCC
  c->lr=0x800FEBD4u; f_800FEA10(c); // 800FEBD0
  c->r[3]=c->r[31]|c->r[31]; // 800FEBD4
  c->r[4]=0u+0x00000078u; // 800FEBD8
  c->lr=0x800FEBE0u; f_800E0380(c); // 800FEBDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEBE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FEBE4
  c->lr=c->r[0]; // 800FEBE8
  c->r[1]=c->r[1]+0x00000010u; // 800FEBEC
  return; // 800FEBF0
}

// __AXSPBInit
void f_800FEBF4(Ctx* __restrict c) {
  trace_call(0x800FEBF4u);
  c->r[0]=0u+0x00000000u; // 800FEBF4
  W32(c->r[13]+0xFFFF9978u,c->r[0]); // 800FEBF8
  W32(c->r[13]+0xFFFF997Cu,c->r[0]); // 800FEBFC
  W32(c->r[13]+0xFFFF9980u,c->r[0]); // 800FEC00
  W32(c->r[13]+0xFFFF9984u,c->r[0]); // 800FEC04
  W32(c->r[13]+0xFFFF9988u,c->r[0]); // 800FEC08
  W32(c->r[13]+0xFFFF998Cu,c->r[0]); // 800FEC0C
  W32(c->r[13]+0xFFFF9990u,c->r[0]); // 800FEC10
  W32(c->r[13]+0xFFFF9994u,c->r[0]); // 800FEC14
  W32(c->r[13]+0xFFFF9998u,c->r[0]); // 800FEC18
  W32(c->r[13]+0xFFFF999Cu,c->r[0]); // 800FEC1C
  W32(c->r[13]+0xFFFF99A0u,c->r[0]); // 800FEC20
  W32(c->r[13]+0xFFFF99A4u,c->r[0]); // 800FEC24
  W32(c->r[13]+0xFFFF99A8u,c->r[0]); // 800FEC28
  W32(c->r[13]+0xFFFF99ACu,c->r[0]); // 800FEC2C
  W32(c->r[13]+0xFFFF99B0u,c->r[0]); // 800FEC30
  W32(c->r[13]+0xFFFF99B4u,c->r[0]); // 800FEC34
  W32(c->r[13]+0xFFFF99B8u,c->r[0]); // 800FEC38
  W32(c->r[13]+0xFFFF99BCu,c->r[0]); // 800FEC3C
  W32(c->r[13]+0xFFFF99C0u,c->r[0]); // 800FEC40
  W32(c->r[13]+0xFFFF99C4u,c->r[0]); // 800FEC44
  return; // 800FEC48
}

// __AXSPBQuit
void f_800FEC4C(Ctx* __restrict c) {
  trace_call(0x800FEC4Cu);
  return; // 800FEC4C
}

// __AXDepopVoice
void f_800FEC50(Ctx* __restrict c) {
  trace_call(0x800FEC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEC50
  c->r[0]=c->lr; // 800FEC54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEC58
  c->r[11]=c->r[1]+0x00000020u; // 800FEC5C
  c->lr=0x800FEC64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FEC60
  c->r[5]=R32(c->r[13]+0xFFFF99C4u); // 800FEC64
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000052u); // 800FEC68
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 800FEC6C
  c->r[0]=c->r[5]+c->r[0]; // 800FEC70
  c->r[7]=R32(c->r[13]+0xFFFF99ACu); // 800FEC74
  W32(c->r[13]+0xFFFF99C4u,c->r[0]); // 800FEC78
  c->r[6]=R32(c->r[13]+0xFFFF99A0u); // 800FEC7C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000054u); // 800FEC80
  c->r[5]=R32(c->r[13]+0xFFFF99C0u); // 800FEC84
  c->r[0]=c->r[4]+c->r[0]; // 800FEC88
  c->r[4]=R32(c->r[13]+0xFFFF99B4u); // 800FEC8C
  W32(c->r[13]+0xFFFF99B8u,c->r[0]); // 800FEC90
  c->r[27]=R32(c->r[13]+0xFFFF99A8u); // 800FEC94
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000056u); // 800FEC98
  c->r[28]=R32(c->r[13]+0xFFFF999Cu); // 800FEC9C
  c->r[0]=c->r[7]+c->r[0]; // 800FECA0
  c->r[29]=R32(c->r[13]+0xFFFF99BCu); // 800FECA4
  W32(c->r[13]+0xFFFF99ACu,c->r[0]); // 800FECA8
  c->r[30]=R32(c->r[13]+0xFFFF99B0u); // 800FECAC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000058u); // 800FECB0
  c->r[31]=R32(c->r[13]+0xFFFF99A4u); // 800FECB4
  c->r[0]=c->r[6]+c->r[0]; // 800FECB8
  c->r[12]=R32(c->r[13]+0xFFFF9998u); // 800FECBC
  W32(c->r[13]+0xFFFF99A0u,c->r[0]); // 800FECC0
  c->r[11]=R32(c->r[13]+0xFFFF9994u); // 800FECC4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Au); // 800FECC8
  c->r[10]=R32(c->r[13]+0xFFFF9990u); // 800FECCC
  c->r[0]=c->r[5]+c->r[0]; // 800FECD0
  c->r[9]=R32(c->r[13]+0xFFFF998Cu); // 800FECD4
  W32(c->r[13]+0xFFFF99C0u,c->r[0]); // 800FECD8
  c->r[8]=R32(c->r[13]+0xFFFF9988u); // 800FECDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Cu); // 800FECE0
  c->r[7]=R32(c->r[13]+0xFFFF9984u); // 800FECE4
  c->r[0]=c->r[4]+c->r[0]; // 800FECE8
  c->r[6]=R32(c->r[13]+0xFFFF9980u); // 800FECEC
  W32(c->r[13]+0xFFFF99B4u,c->r[0]); // 800FECF0
  c->r[5]=R32(c->r[13]+0xFFFF997Cu); // 800FECF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Eu); // 800FECF8
  c->r[4]=R32(c->r[13]+0xFFFF9978u); // 800FECFC
  c->r[0]=c->r[27]+c->r[0]; // 800FED00
  W32(c->r[13]+0xFFFF99A8u,c->r[0]); // 800FED04
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 800FED08
  c->r[0]=c->r[28]+c->r[0]; // 800FED0C
  W32(c->r[13]+0xFFFF999Cu,c->r[0]); // 800FED10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000062u); // 800FED14
  c->r[0]=c->r[29]+c->r[0]; // 800FED18
  W32(c->r[13]+0xFFFF99BCu,c->r[0]); // 800FED1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800FED20
  c->r[0]=c->r[30]+c->r[0]; // 800FED24
  W32(c->r[13]+0xFFFF99B0u,c->r[0]); // 800FED28
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000066u); // 800FED2C
  c->r[0]=c->r[31]+c->r[0]; // 800FED30
  W32(c->r[13]+0xFFFF99A4u,c->r[0]); // 800FED34
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000068u); // 800FED38
  c->r[0]=c->r[12]+c->r[0]; // 800FED3C
  W32(c->r[13]+0xFFFF9998u,c->r[0]); // 800FED40
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FAu); // 800FED44
  c->r[0]=c->r[11]+c->r[0]; // 800FED48
  c->r[11]=c->r[1]+0x00000020u; // 800FED4C
  W32(c->r[13]+0xFFFF9994u,c->r[0]); // 800FED50
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FCu); // 800FED54
  c->r[0]=c->r[10]+c->r[0]; // 800FED58
  W32(c->r[13]+0xFFFF9990u,c->r[0]); // 800FED5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FEu); // 800FED60
  c->r[0]=c->r[9]+c->r[0]; // 800FED64
  W32(c->r[13]+0xFFFF998Cu,c->r[0]); // 800FED68
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000100u); // 800FED6C
  c->r[0]=c->r[8]+c->r[0]; // 800FED70
  W32(c->r[13]+0xFFFF9988u,c->r[0]); // 800FED74
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000102u); // 800FED78
  c->r[0]=c->r[7]+c->r[0]; // 800FED7C
  W32(c->r[13]+0xFFFF9984u,c->r[0]); // 800FED80
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000104u); // 800FED84
  c->r[0]=c->r[6]+c->r[0]; // 800FED88
  W32(c->r[13]+0xFFFF9980u,c->r[0]); // 800FED8C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000106u); // 800FED90
  c->r[0]=c->r[5]+c->r[0]; // 800FED94
  W32(c->r[13]+0xFFFF997Cu,c->r[0]); // 800FED98
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000108u); // 800FED9C
  c->r[0]=c->r[4]+c->r[0]; // 800FEDA0
  W32(c->r[13]+0xFFFF9978u,c->r[0]); // 800FEDA4
  c->lr=0x800FEDACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FEDA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FEDAC
  c->lr=c->r[0]; // 800FEDB0
  c->r[1]=c->r[1]+0x00000020u; // 800FEDB4
  return; // 800FEDB8
}

// __AXGetNumVoices
void f_800FEDBC(Ctx* __restrict c) {
  trace_call(0x800FEDBCu);
  c->r[3]=R32(c->r[13]+0xFFFF99D8u); // 800FEDBC
  return; // 800FEDC0
}

// __AXServiceVPB
void f_800FEDC4(Ctx* __restrict c) {
  trace_call(0x800FEDC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEDC4
  c->r[0]=c->lr; // 800FEDC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEDCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FEDD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FEDD4
  c->r[30]=c->r[3]+0x00000028u; // 800FEDD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FEDDC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FEDE0
  c->r[28]=c->r[3]|c->r[3]; // 800FEDE4
  c->r[5]=R32(c->r[13]+0xFFFF99D8u); // 800FEDE8
  c->r[4]=R32(c->r[13]+0xFFFF99C8u); // 800FEDEC
  c->r[0]=c->r[5]+0x00000001u; // 800FEDF0
  W32(c->r[13]+0xFFFF99D8u,c->r[0]); // 800FEDF4
  c->r[0]=R32(c->r[3]+0x00000018u); // 800FEDF8
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 800FEDFC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800FEE00
  cmps(c,0,(int32_t)c->r[29],0); // 800FEE04
  c->r[31]=c->r[4]+c->r[0]; // 800FEE08
  if (!crb(c,2)) { goto L_800FEE34; } // 800FEE0C
  c->r[0]=R16(c->r[31]+0x00000010u); // 800FEE10
  W16(c->r[30]+0x00000010u,c->r[0]); // 800FEE14
  c->r[0]=R16(c->r[31]+0x0000006Au); // 800FEE18
  W16(c->r[30]+0x0000006Au,c->r[0]); // 800FEE1C
  c->r[0]=R16(c->r[31]+0x0000007Au); // 800FEE20
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800FEE24
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 800FEE28
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 800FEE2C
  goto L_800FF2F4; // 800FEE30
L_800FEE34:;
  c->r[0]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[0]); // 800FEE34
  if (crb(c,2)) { goto L_800FEE50; } // 800FEE38
  c->r[3]=c->r[31]|c->r[31]; // 800FEE3C
  c->r[4]=c->r[30]|c->r[30]; // 800FEE40
  c->r[5]=0u+0x00000140u; // 800FEE44
  c->lr=0x800FEE4Cu; f_80004338(c); // 800FEE48
  goto L_800FF2F4; // 800FEE4C
L_800FEE50:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 800FEE50
  if (crb(c,2)) { goto L_800FEE68; } // 800FEE54
  c->r[0]=R16(c->r[30]+0x00000008u); // 800FEE58
  W16(c->r[31]+0x00000008u,c->r[0]); // 800FEE5C
  c->r[0]=R16(c->r[30]+0x0000000Au); // 800FEE60
  W16(c->r[31]+0x0000000Au,c->r[0]); // 800FEE64
L_800FEE68:;
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 800FEE68
  if (crb(c,2)) { goto L_800FEE78; } // 800FEE6C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800FEE70
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800FEE74
L_800FEE78:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 800FEE78
  if (crb(c,2)) { goto L_800FEE8C; } // 800FEE7C
  c->r[0]=R16(c->r[30]+0x00000010u); // 800FEE80
  W16(c->r[31]+0x00000010u,c->r[0]); // 800FEE84
  goto L_800FEE94; // 800FEE88
L_800FEE8C:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 800FEE8C
  W16(c->r[30]+0x00000010u,c->r[0]); // 800FEE90
L_800FEE94:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 800FEE94
  if (crb(c,2)) { goto L_800FEEA4; } // 800FEE98
  c->r[0]=R16(c->r[30]+0x00000012u); // 800FEE9C
  W16(c->r[31]+0x00000012u,c->r[0]); // 800FEEA0
L_800FEEA4:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 800FEEA4
  if (crb(c,2)) { goto L_800FEEBC; } // 800FEEA8
  c->r[3]=c->r[31]+0x00000014u; // 800FEEAC
  c->r[4]=c->r[30]+0x00000014u; // 800FEEB0
  c->r[5]=0u+0x00000030u; // 800FEEB4
  c->lr=0x800FEEBCu; f_80004338(c); // 800FEEB8
L_800FEEBC:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 800FEEBC
  if (crb(c,2)) { goto L_800FEED8; } // 800FEEC0
  c->r[0]=R16(c->r[30]+0x0000004Eu); // 800FEEC4
  W16(c->r[31]+0x0000004Eu,c->r[0]); // 800FEEC8
  c->r[0]=R16(c->r[30]+0x00000050u); // 800FEECC
  W16(c->r[31]+0x00000050u,c->r[0]); // 800FEED0
  goto L_800FEF60; // 800FEED4
L_800FEED8:;
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 800FEED8
  if (crb(c,2)) { goto L_800FEF60; } // 800FEEDC
  c->r[3]=R16(c->r[30]+0x00000044u); // 800FEEE0
  c->r[0]=0u+0x00000000u; // 800FEEE4
  W16(c->r[31]+0x00000044u,c->r[3]); // 800FEEE8
  c->r[3]=R16(c->r[30]+0x00000046u); // 800FEEEC
  W16(c->r[31]+0x00000046u,c->r[3]); // 800FEEF0
  c->r[3]=R16(c->r[30]+0x00000048u); // 800FEEF4
  W16(c->r[31]+0x00000048u,c->r[3]); // 800FEEF8
  c->r[3]=R16(c->r[30]+0x0000004Au); // 800FEEFC
  W16(c->r[31]+0x0000004Au,c->r[3]); // 800FEF00
  c->r[3]=R16(c->r[30]+0x0000004Cu); // 800FEF04
  W16(c->r[31]+0x0000004Cu,c->r[3]); // 800FEF08
  c->r[3]=R16(c->r[30]+0x0000004Eu); // 800FEF0C
  W16(c->r[31]+0x0000004Eu,c->r[3]); // 800FEF10
  c->r[3]=R16(c->r[30]+0x00000050u); // 800FEF14
  W16(c->r[31]+0x00000050u,c->r[3]); // 800FEF18
  c->r[3]=R32(c->r[28]+0x00000024u); // 800FEF1C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800FEF20
  W32(c->r[3]+0x00000004u,c->r[0]); // 800FEF24
  W32(c->r[3]+0x00000008u,c->r[0]); // 800FEF28
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FEF2C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800FEF30
  W32(c->r[3]+0x00000014u,c->r[0]); // 800FEF34
  W32(c->r[3]+0x00000018u,c->r[0]); // 800FEF38
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FEF3C
  W32(c->r[3]+0x00000020u,c->r[0]); // 800FEF40
  W32(c->r[3]+0x00000024u,c->r[0]); // 800FEF44
  W32(c->r[3]+0x00000028u,c->r[0]); // 800FEF48
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800FEF4C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800FEF50
  W32(c->r[3]+0x00000034u,c->r[0]); // 800FEF54
  W32(c->r[3]+0x00000038u,c->r[0]); // 800FEF58
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800FEF5C
L_800FEF60:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 800FEF60
  if (crb(c,2)) { goto L_800FEF78; } // 800FEF64
  c->r[3]=c->r[31]+0x00000052u; // 800FEF68
  c->r[4]=c->r[30]+0x00000052u; // 800FEF6C
  c->r[5]=0u+0x00000018u; // 800FEF70
  c->lr=0x800FEF78u; f_80004338(c); // 800FEF74
L_800FEF78:;
  c->r[0]=rotl(c->r[29],0)&0x00000200u; cr0(c,c->r[0]); // 800FEF78
  if (crb(c,2)) { goto L_800FEF94; } // 800FEF7C
  c->r[3]=R16(c->r[31]+0x0000006Au); // 800FEF80
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 800FEF84
  W16(c->r[30]+0x0000006Au,c->r[3]); // 800FEF88
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 800FEF8C
  goto L_800FEFAC; // 800FEF90
L_800FEF94:;
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 800FEF94
  if (crb(c,2)) { goto L_800FEFAC; } // 800FEF98
  c->r[0]=R16(c->r[30]+0x0000006Au); // 800FEF9C
  W16(c->r[31]+0x0000006Au,c->r[0]); // 800FEFA0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 800FEFA4
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 800FEFA8
L_800FEFAC:;
  c->r[0]=rotl(c->r[29],0)&0x00007800u; cr0(c,c->r[0]); // 800FEFAC
  if (crb(c,2)) { goto L_800FF004; } // 800FEFB0
  c->r[0]=rotl(c->r[29],0)&0x00000800u; cr0(c,c->r[0]); // 800FEFB4
  if (crb(c,2)) { goto L_800FEFC4; } // 800FEFB8
  c->r[0]=R16(c->r[30]+0x0000006Eu); // 800FEFBC
  W16(c->r[31]+0x0000006Eu,c->r[0]); // 800FEFC0
L_800FEFC4:;
  c->r[0]=rotl(c->r[29],0)&0x00001000u; cr0(c,c->r[0]); // 800FEFC4
  if (crb(c,2)) { goto L_800FEFD4; } // 800FEFC8
  c->r[0]=R32(c->r[30]+0x00000072u); // 800FEFCC
  W32(c->r[31]+0x00000072u,c->r[0]); // 800FEFD0
L_800FEFD4:;
  c->r[0]=rotl(c->r[29],0)&0x00002000u; cr0(c,c->r[0]); // 800FEFD4
  if (crb(c,2)) { goto L_800FEFE4; } // 800FEFD8
  c->r[0]=R32(c->r[30]+0x00000076u); // 800FEFDC
  W32(c->r[31]+0x00000076u,c->r[0]); // 800FEFE0
L_800FEFE4:;
  c->r[0]=rotl(c->r[29],0)&0x00004000u; cr0(c,c->r[0]); // 800FEFE4
  if (crb(c,2)) { goto L_800FEFF8; } // 800FEFE8
  c->r[0]=R32(c->r[30]+0x0000007Au); // 800FEFEC
  W32(c->r[31]+0x0000007Au,c->r[0]); // 800FEFF0
  goto L_800FF040; // 800FEFF4
L_800FEFF8:;
  c->r[0]=R32(c->r[31]+0x0000007Au); // 800FEFF8
  W32(c->r[30]+0x0000007Au,c->r[0]); // 800FEFFC
  goto L_800FF040; // 800FF000
L_800FF004:;
  c->r[0]=rotl(c->r[29],0)&0x00000400u; cr0(c,c->r[0]); // 800FF004
  if (crb(c,2)) { goto L_800FF030; } // 800FF008
  c->r[0]=R32(c->r[30]+0x0000006Eu); // 800FF00C
  W32(c->r[31]+0x0000006Eu,c->r[0]); // 800FF010
  c->r[0]=R32(c->r[30]+0x00000072u); // 800FF014
  W32(c->r[31]+0x00000072u,c->r[0]); // 800FF018
  c->r[0]=R32(c->r[30]+0x00000076u); // 800FF01C
  W32(c->r[31]+0x00000076u,c->r[0]); // 800FF020
  c->r[0]=R32(c->r[30]+0x0000007Au); // 800FF024
  W32(c->r[31]+0x0000007Au,c->r[0]); // 800FF028
  goto L_800FF040; // 800FF02C
L_800FF030:;
  c->r[0]=R16(c->r[31]+0x0000007Au); // 800FF030
  W16(c->r[30]+0x0000007Au,c->r[0]); // 800FF034
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 800FF038
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 800FF03C
L_800FF040:;
  c->r[0]=rotl(c->r[29],0)&0x00008000u; cr0(c,c->r[0]); // 800FF040
  if (crb(c,2)) { goto L_800FF098; } // 800FF044
  c->r[0]=R32(c->r[30]+0x0000007Eu); // 800FF048
  W32(c->r[31]+0x0000007Eu,c->r[0]); // 800FF04C
  c->r[0]=R32(c->r[30]+0x00000082u); // 800FF050
  W32(c->r[31]+0x00000082u,c->r[0]); // 800FF054
  c->r[0]=R32(c->r[30]+0x00000086u); // 800FF058
  W32(c->r[31]+0x00000086u,c->r[0]); // 800FF05C
  c->r[0]=R32(c->r[30]+0x0000008Au); // 800FF060
  W32(c->r[31]+0x0000008Au,c->r[0]); // 800FF064
  c->r[0]=R32(c->r[30]+0x0000008Eu); // 800FF068
  W32(c->r[31]+0x0000008Eu,c->r[0]); // 800FF06C
  c->r[0]=R32(c->r[30]+0x00000092u); // 800FF070
  W32(c->r[31]+0x00000092u,c->r[0]); // 800FF074
  c->r[0]=R32(c->r[30]+0x00000096u); // 800FF078
  W32(c->r[31]+0x00000096u,c->r[0]); // 800FF07C
  c->r[0]=R32(c->r[30]+0x0000009Au); // 800FF080
  W32(c->r[31]+0x0000009Au,c->r[0]); // 800FF084
  c->r[0]=R32(c->r[30]+0x0000009Eu); // 800FF088
  W32(c->r[31]+0x0000009Eu,c->r[0]); // 800FF08C
  c->r[0]=R32(c->r[30]+0x000000A2u); // 800FF090
  W32(c->r[31]+0x000000A2u,c->r[0]); // 800FF094
L_800FF098:;
  c->r[0]=rotl(c->r[29],0)&0x00020000u; cr0(c,c->r[0]); // 800FF098
  if (crb(c,2)) { goto L_800FF0B4; } // 800FF09C
  c->r[0]=R16(c->r[30]+0x000000A6u); // 800FF0A0
  W16(c->r[31]+0x000000A6u,c->r[0]); // 800FF0A4
  c->r[0]=R16(c->r[30]+0x000000A8u); // 800FF0A8
  W16(c->r[31]+0x000000A8u,c->r[0]); // 800FF0AC
  goto L_800FF0F4; // 800FF0B0
L_800FF0B4:;
  c->r[0]=rotl(c->r[29],0)&0x00010000u; cr0(c,c->r[0]); // 800FF0B4
  if (crb(c,2)) { goto L_800FF0F4; } // 800FF0B8
  c->r[0]=R16(c->r[30]+0x000000A6u); // 800FF0BC
  W16(c->r[31]+0x000000A6u,c->r[0]); // 800FF0C0
  c->r[0]=R16(c->r[30]+0x000000A8u); // 800FF0C4
  W16(c->r[31]+0x000000A8u,c->r[0]); // 800FF0C8
  c->r[0]=R16(c->r[30]+0x000000AAu); // 800FF0CC
  W16(c->r[31]+0x000000AAu,c->r[0]); // 800FF0D0
  c->r[0]=R16(c->r[30]+0x000000ACu); // 800FF0D4
  W16(c->r[31]+0x000000ACu,c->r[0]); // 800FF0D8
  c->r[0]=R16(c->r[30]+0x000000AEu); // 800FF0DC
  W16(c->r[31]+0x000000AEu,c->r[0]); // 800FF0E0
  c->r[0]=R16(c->r[30]+0x000000B0u); // 800FF0E4
  W16(c->r[31]+0x000000B0u,c->r[0]); // 800FF0E8
  c->r[0]=R16(c->r[30]+0x000000B2u); // 800FF0EC
  W16(c->r[31]+0x000000B2u,c->r[0]); // 800FF0F0
L_800FF0F4:;
  c->r[0]=rotl(c->r[29],0)&0x00040000u; cr0(c,c->r[0]); // 800FF0F4
  if (crb(c,2)) { goto L_800FF114; } // 800FF0F8
  c->r[0]=R16(c->r[30]+0x000000B4u); // 800FF0FC
  W16(c->r[31]+0x000000B4u,c->r[0]); // 800FF100
  c->r[0]=R16(c->r[30]+0x000000B6u); // 800FF104
  W16(c->r[31]+0x000000B6u,c->r[0]); // 800FF108
  c->r[0]=R16(c->r[30]+0x000000B8u); // 800FF10C
  W16(c->r[31]+0x000000B8u,c->r[0]); // 800FF110
L_800FF114:;
  c->r[0]=rotl(c->r[29],0)&0x00100000u; cr0(c,c->r[0]); // 800FF114
  if (crb(c,2)) { goto L_800FF130; } // 800FF118
  c->r[0]=R16(c->r[30]+0x000000BEu); // 800FF11C
  W16(c->r[31]+0x000000BEu,c->r[0]); // 800FF120
  c->r[0]=R16(c->r[30]+0x000000C0u); // 800FF124
  W16(c->r[31]+0x000000C0u,c->r[0]); // 800FF128
  goto L_800FF158; // 800FF12C
L_800FF130:;
  c->r[0]=rotl(c->r[29],0)&0x00080000u; cr0(c,c->r[0]); // 800FF130
  if (crb(c,2)) { goto L_800FF158; } // 800FF134
  c->r[0]=R16(c->r[30]+0x000000BAu); // 800FF138
  W16(c->r[31]+0x000000BAu,c->r[0]); // 800FF13C
  c->r[0]=R16(c->r[30]+0x000000BCu); // 800FF140
  W16(c->r[31]+0x000000BCu,c->r[0]); // 800FF144
  c->r[0]=R16(c->r[30]+0x000000BEu); // 800FF148
  W16(c->r[31]+0x000000BEu,c->r[0]); // 800FF14C
  c->r[0]=R16(c->r[30]+0x000000C0u); // 800FF150
  W16(c->r[31]+0x000000C0u,c->r[0]); // 800FF154
L_800FF158:;
  c->r[0]=rotl(c->r[29],0)&0x00400000u; cr0(c,c->r[0]); // 800FF158
  if (crb(c,2)) { goto L_800FF18C; } // 800FF15C
  c->r[0]=R16(c->r[30]+0x000000CCu); // 800FF160
  W16(c->r[31]+0x000000CCu,c->r[0]); // 800FF164
  c->r[0]=R16(c->r[30]+0x000000CEu); // 800FF168
  W16(c->r[31]+0x000000CEu,c->r[0]); // 800FF16C
  c->r[0]=R16(c->r[30]+0x000000D0u); // 800FF170
  W16(c->r[31]+0x000000D0u,c->r[0]); // 800FF174
  c->r[0]=R16(c->r[30]+0x000000D2u); // 800FF178
  W16(c->r[31]+0x000000D2u,c->r[0]); // 800FF17C
  c->r[0]=R16(c->r[30]+0x000000D4u); // 800FF180
  W16(c->r[31]+0x000000D4u,c->r[0]); // 800FF184
  goto L_800FF1E4; // 800FF188
L_800FF18C:;
  c->r[0]=rotl(c->r[29],0)&0x00200000u; cr0(c,c->r[0]); // 800FF18C
  if (crb(c,2)) { goto L_800FF1E4; } // 800FF190
  c->r[0]=R16(c->r[30]+0x000000C2u); // 800FF194
  W16(c->r[31]+0x000000C2u,c->r[0]); // 800FF198
  c->r[0]=R16(c->r[30]+0x000000C4u); // 800FF19C
  W16(c->r[31]+0x000000C4u,c->r[0]); // 800FF1A0
  c->r[0]=R16(c->r[30]+0x000000C6u); // 800FF1A4
  W16(c->r[31]+0x000000C6u,c->r[0]); // 800FF1A8
  c->r[0]=R16(c->r[30]+0x000000C8u); // 800FF1AC
  W16(c->r[31]+0x000000C8u,c->r[0]); // 800FF1B0
  c->r[0]=R16(c->r[30]+0x000000CAu); // 800FF1B4
  W16(c->r[31]+0x000000CAu,c->r[0]); // 800FF1B8
  c->r[0]=R16(c->r[30]+0x000000CCu); // 800FF1BC
  W16(c->r[31]+0x000000CCu,c->r[0]); // 800FF1C0
  c->r[0]=R16(c->r[30]+0x000000CEu); // 800FF1C4
  W16(c->r[31]+0x000000CEu,c->r[0]); // 800FF1C8
  c->r[0]=R16(c->r[30]+0x000000D0u); // 800FF1CC
  W16(c->r[31]+0x000000D0u,c->r[0]); // 800FF1D0
  c->r[0]=R16(c->r[30]+0x000000D2u); // 800FF1D4
  W16(c->r[31]+0x000000D2u,c->r[0]); // 800FF1D8
  c->r[0]=R16(c->r[30]+0x000000D4u); // 800FF1DC
  W16(c->r[31]+0x000000D4u,c->r[0]); // 800FF1E0
L_800FF1E4:;
  c->r[0]=rotl(c->r[29],0)&0x00800000u; cr0(c,c->r[0]); // 800FF1E4
  if (crb(c,2)) { goto L_800FF1F4; } // 800FF1E8
  c->r[0]=R16(c->r[30]+0x000000D6u); // 800FF1EC
  W16(c->r[31]+0x000000D6u,c->r[0]); // 800FF1F0
L_800FF1F4:;
  c->r[0]=rotl(c->r[29],0)&0x01000000u; cr0(c,c->r[0]); // 800FF1F4
  if (crb(c,2)) { goto L_800FF204; } // 800FF1F8
  c->r[0]=R16(c->r[30]+0x000000D8u); // 800FF1FC
  W16(c->r[31]+0x000000D8u,c->r[0]); // 800FF200
L_800FF204:;
  c->r[0]=rotl(c->r[29],0)&0x02000000u; cr0(c,c->r[0]); // 800FF204
  if (crb(c,2)) { goto L_800FF21C; } // 800FF208
  c->r[3]=c->r[31]+0x000000DAu; // 800FF20C
  c->r[4]=c->r[30]+0x000000DAu; // 800FF210
  c->r[5]=0u+0x00000020u; // 800FF214
  c->lr=0x800FF21Cu; f_80004338(c); // 800FF218
L_800FF21C:;
  c->r[0]=rotl(c->r[29],0)&0x04000000u; cr0(c,c->r[0]); // 800FF21C
  if (crb(c,2)) { goto L_800FF234; } // 800FF220
  c->r[3]=c->r[31]+0x000000FAu; // 800FF224
  c->r[4]=c->r[30]+0x000000FAu; // 800FF228
  c->r[5]=0u+0x00000010u; // 800FF22C
  c->lr=0x800FF234u; f_80004338(c); // 800FF230
L_800FF234:;
  c->r[0]=rotl(c->r[29],0)&0x08000000u; cr0(c,c->r[0]); // 800FF234
  if (crb(c,2)) { goto L_800FF24C; } // 800FF238
  c->r[3]=c->r[31]+0x0000010Au; // 800FF23C
  c->r[4]=c->r[30]+0x0000010Au; // 800FF240
  c->r[5]=0u+0x0000000Au; // 800FF244
  c->lr=0x800FF24Cu; f_80004338(c); // 800FF248
L_800FF24C:;
  c->r[0]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[0]); // 800FF24C
  if (crb(c,2)) { goto L_800FF268; } // 800FF250
  c->r[0]=R16(c->r[30]+0x00000118u); // 800FF254
  W16(c->r[31]+0x00000118u,c->r[0]); // 800FF258
  c->r[0]=R16(c->r[30]+0x0000011Au); // 800FF25C
  W16(c->r[31]+0x0000011Au,c->r[0]); // 800FF260
  goto L_800FF2F4; // 800FF264
L_800FF268:;
  c->r[0]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[0]); // 800FF268
  if (crb(c,2)) { goto L_800FF29C; } // 800FF26C
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 800FF270
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 800FF274
  c->r[0]=R16(c->r[30]+0x00000120u); // 800FF278
  W16(c->r[31]+0x00000120u,c->r[0]); // 800FF27C
  c->r[0]=R16(c->r[30]+0x00000122u); // 800FF280
  W16(c->r[31]+0x00000122u,c->r[0]); // 800FF284
  c->r[0]=R16(c->r[30]+0x00000124u); // 800FF288
  W16(c->r[31]+0x00000124u,c->r[0]); // 800FF28C
  c->r[0]=R16(c->r[30]+0x00000126u); // 800FF290
  W16(c->r[31]+0x00000126u,c->r[0]); // 800FF294
  goto L_800FF2F4; // 800FF298
L_800FF29C:;
  c->r[0]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[0]); // 800FF29C
  if (crb(c,2)) { goto L_800FF2F4; } // 800FF2A0
  c->r[0]=R16(c->r[30]+0x00000114u); // 800FF2A4
  W16(c->r[31]+0x00000114u,c->r[0]); // 800FF2A8
  c->r[0]=R16(c->r[30]+0x00000116u); // 800FF2AC
  W16(c->r[31]+0x00000116u,c->r[0]); // 800FF2B0
  c->r[0]=R16(c->r[30]+0x00000118u); // 800FF2B4
  W16(c->r[31]+0x00000118u,c->r[0]); // 800FF2B8
  c->r[0]=R16(c->r[30]+0x0000011Au); // 800FF2BC
  W16(c->r[31]+0x0000011Au,c->r[0]); // 800FF2C0
  c->r[0]=R16(c->r[30]+0x0000011Cu); // 800FF2C4
  W16(c->r[31]+0x0000011Cu,c->r[0]); // 800FF2C8
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 800FF2CC
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 800FF2D0
  c->r[0]=R16(c->r[30]+0x00000120u); // 800FF2D4
  W16(c->r[31]+0x00000120u,c->r[0]); // 800FF2D8
  c->r[0]=R16(c->r[30]+0x00000122u); // 800FF2DC
  W16(c->r[31]+0x00000122u,c->r[0]); // 800FF2E0
  c->r[0]=R16(c->r[30]+0x00000124u); // 800FF2E4
  W16(c->r[31]+0x00000124u,c->r[0]); // 800FF2E8
  c->r[0]=R16(c->r[30]+0x00000126u); // 800FF2EC
  W16(c->r[31]+0x00000126u,c->r[0]); // 800FF2F0
L_800FF2F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF2F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FF2F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FF2FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FF300
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FF304
  c->lr=c->r[0]; // 800FF308
  c->r[1]=c->r[1]+0x00000020u; // 800FF30C
  return; // 800FF310
}

// __AXSyncPBs
void f_800FF314(Ctx* __restrict c) {
  trace_call(0x800FF314u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF314
  c->r[0]=c->lr; // 800FF318
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FF31C
  c->r[11]=c->r[1]+0x00000030u; // 800FF320
  c->lr=0x800FF328u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF324
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF328
  c->r[29]=0u+0x00000000u; // 800FF32C
  c->r[25]=c->r[3]|c->r[3]; // 800FF330
  W32(c->r[13]+0xFFFF99D8u,c->r[29]); // 800FF334
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800FF338
  c->r[3]=R32(c->r[13]+0xFFFF99C8u); // 800FF33C
  c->lr=0x800FF344u; f_800E0354(c); // 800FF340
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF344
  c->r[3]=R32(c->r[13]+0xFFFF99CCu); // 800FF348
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800FF34C
  c->lr=0x800FF354u; f_800E0354(c); // 800FF350
  c->lr=0x800FF358u; f_800FD6B0(c); // 800FF354
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF358
  c->r[31]=0u+0x80290000u; // 800FF35C
  c->r[30]=0u+0x80290000u; // 800FF360
  c->r[27]=0u+0x0000001Fu; // 800FF364
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)600); // 800FF368
  c->r[31]=c->r[31]+0x00002428u; // 800FF36C
  c->r[30]=c->r[30]+0x000023A8u; // 800FF370
  c->r[0]=c->r[3]+c->r[0]; // 800FF374
  c->r[3]=c->r[0]+c->r[25]; // 800FF378
  c->r[28]=c->r[3]+0x00000020u; // 800FF37C
L_800FF380:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF380
  c->lr=0x800FF388u; f_800FC91C(c); // 800FF384
  c->r[26]=c->r[3]|c->r[3]; // 800FF388
  goto L_800FF580; // 800FF38C
L_800FF390:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 800FF390
  cmpu(c,0,c->r[0],0x00000001u); // 800FF394
  if (!crb(c,2)) { goto L_800FF3A0; } // 800FF398
  c->r[28]=c->r[28]+0x00000081u; // 800FF39C
L_800FF3A0:;
  c->r[0]=R32(c->r[26]+0x00000020u); // 800FF3A0
  cmps(c,0,(int32_t)c->r[0],0); // 800FF3A4
  if (crb(c,2)) { goto L_800FF3C0; } // 800FF3A8
  c->r[0]=R32(c->r[26]+0x00000018u); // 800FF3AC
  c->r[3]=R32(c->r[13]+0xFFFF99C8u); // 800FF3B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800FF3B4
  c->r[3]=c->r[3]+c->r[0]; // 800FF3B8
  c->lr=0x800FF3C0u; f_800FEC50(c); // 800FF3BC
L_800FF3C0:;
  c->r[0]=R16(c->r[26]+0x00000038u); // 800FF3C0
  cmpu(c,0,c->r[0],0x00000001u); // 800FF3C4
  if (!crb(c,2)) { goto L_800FF56C; } // 800FF3C8
  c->r[0]=R16(c->r[26]+0x000000E2u); // 800FF3CC
  c->r[28]=c->r[28]+0x00000183u; // 800FF3D0
  cmps(c,0,(int32_t)c->r[0],0); // 800FF3D4
  if (crb(c,2)) { goto L_800FF3E0; } // 800FF3D8
  c->r[28]=c->r[28]+0x00000135u; // 800FF3DC
L_800FF3E0:;
  c->r[0]=R16(c->r[26]+0x000000EAu); // 800FF3E0
  cmps(c,0,(int32_t)c->r[0],0); // 800FF3E4
  if (crb(c,2)) { goto L_800FF3F0; } // 800FF3E8
  c->r[28]=c->r[28]+0x00000400u; // 800FF3EC
L_800FF3F0:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 800FF3F0
  cmpu(c,0,c->r[0],0x00000001u); // 800FF3F4
  if (!crb(c,2)) { goto L_800FF400; } // 800FF3F8
  c->r[28]=c->r[28]+0x0000001Bu; // 800FF3FC
L_800FF400:;
  c->r[3]=R16(c->r[26]+0x00000030u); // 800FF400
  c->r[0]=R16(c->r[26]+0x000000CEu); // 800FF404
  cmps(c,0,(int32_t)c->r[3],0); // 800FF408
  c->r[4]=R16(c->r[26]+0x000000D0u); // 800FF40C
  c->r[4]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 800FF410
  if (!crb(c,2)) { goto L_800FF430; } // 800FF414
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 800FF418
  c->r[3]=c->r[3]+0x00010000u; // 800FF41C
  c->r[0]=c->r[3]+0xFFFF8000u; // 800FF420
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800FF424
  c->r[0]=c->r[3]+0x00000619u; // 800FF428
  goto L_800FF450; // 800FF42C
L_800FF430:;
  cmpu(c,0,c->r[3],0x00000001u); // 800FF430
  c->r[0]=0u+0x0000025Du; // 800FF434
  if (!crb(c,2)) { goto L_800FF450; } // 800FF438
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 800FF43C
  c->r[3]=c->r[3]+0x00010000u; // 800FF440
  c->r[0]=c->r[3]+0xFFFF8000u; // 800FF444
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 800FF448
  c->r[0]=c->r[3]+0x000005BAu; // 800FF44C
L_800FF450:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 800FF450
  c->r[28]=c->r[28]+c->r[0]; // 800FF454
  c->r[0]=R16(c->r[26]+0x000000FEu); // 800FF458
  c->r[5]=rotl(c->r[4],13)&0x0000007Cu; // 800FF45C
  c->r[3]=rotl(c->r[4],2)&0x0000007Cu; // 800FF460
  c->r[6]=rotl(c->r[4],8)&0x0000007Cu; // 800FF464
  c->r[4]=rotl(c->r[4],18)&0x0000007Cu; // 800FF468
  cmpu(c,0,c->r[0],0x00000001u); // 800FF46C
  c->r[5]=R32(c->r[30]+c->r[5]); // 800FF470
  c->r[0]=R32(c->r[30]+c->r[3]); // 800FF474
  c->r[6]=R32(c->r[30]+c->r[6]); // 800FF478
  c->r[4]=R32(c->r[30]+c->r[4]); // 800FF47C
  c->r[0]=c->r[5]+c->r[0]; // 800FF480
  c->r[3]=c->r[28]+c->r[6]; // 800FF484
  c->r[0]=c->r[4]+c->r[0]; // 800FF488
  c->r[28]=c->r[3]+c->r[0]; // 800FF48C
  if (!crb(c,2)) { goto L_800FF51C; } // 800FF490
  c->r[0]=R16(c->r[26]+0x0000013Cu); // 800FF494
  c->r[28]=c->r[28]+0x00000265u; // 800FF498
  cmpu(c,0,c->r[0],0x00000001u); // 800FF49C
  if (!crb(c,2)) { goto L_800FF4AC; } // 800FF4A0
  c->r[28]=c->r[28]+0x00000076u; // 800FF4A4
  goto L_800FF4B8; // 800FF4A8
L_800FF4AC:;
  cmpu(c,0,c->r[0],0x00000002u); // 800FF4AC
  if (!crb(c,2)) { goto L_800FF4B8; } // 800FF4B0
  c->r[28]=c->r[28]+0x00000342u; // 800FF4B4
L_800FF4B8:;
  c->r[3]=R16(c->r[26]+0x00000100u); // 800FF4B8
  c->r[4]=rotl(c->r[3],30)&0x0000000Cu; // 800FF4BC
  c->r[0]=rotl(c->r[3],2)&0x0000000Cu; // 800FF4C0
  c->r[4]=R32(c->r[31]+c->r[4]); // 800FF4C4
  c->r[9]=rotl(c->r[3],20)&0x0000000Cu; // 800FF4C8
  c->r[0]=R32(c->r[31]+c->r[0]); // 800FF4CC
  c->r[8]=rotl(c->r[3],22)&0x0000000Cu; // 800FF4D0
  c->r[7]=rotl(c->r[3],24)&0x0000000Cu; // 800FF4D4
  c->r[6]=rotl(c->r[3],26)&0x0000000Cu; // 800FF4D8
  c->r[5]=rotl(c->r[3],28)&0x0000000Cu; // 800FF4DC
  c->r[3]=rotl(c->r[3],0)&0x0000000Cu; // 800FF4E0
  c->r[7]=R32(c->r[31]+c->r[7]); // 800FF4E4
  c->r[0]=c->r[4]+c->r[0]; // 800FF4E8
  c->r[3]=R32(c->r[31]+c->r[3]); // 800FF4EC
  c->r[9]=R32(c->r[31]+c->r[9]); // 800FF4F0
  c->r[7]=c->r[28]+c->r[7]; // 800FF4F4
  c->r[8]=R32(c->r[31]+c->r[8]); // 800FF4F8
  c->r[0]=c->r[3]+c->r[0]; // 800FF4FC
  c->r[6]=R32(c->r[31]+c->r[6]); // 800FF500
  c->r[4]=R32(c->r[31]+c->r[5]); // 800FF504
  c->r[8]=c->r[9]+c->r[8]; // 800FF508
  c->r[3]=c->r[8]+c->r[7]; // 800FF50C
  c->r[4]=c->r[6]+c->r[4]; // 800FF510
  c->r[0]=c->r[4]+c->r[0]; // 800FF514
  c->r[28]=c->r[3]+c->r[0]; // 800FF518
L_800FF51C:;
  c->r[0]=R32(c->r[13]+0xFFFF99E0u); // 800FF51C
  cmpu(c,0,c->r[0],c->r[28]); // 800FF520
  if (!crb(c,1)) { goto L_800FF534; } // 800FF524
  c->r[3]=c->r[26]|c->r[26]; // 800FF528
  c->lr=0x800FF530u; f_800FEDC4(c); // 800FF52C
  goto L_800FF574; // 800FF530
L_800FF534:;
  c->r[0]=R32(c->r[26]+0x00000018u); // 800FF534
  c->r[3]=R32(c->r[13]+0xFFFF99C8u); // 800FF538
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800FF53C
  c->r[25]=c->r[3]+c->r[0]; // 800FF540
  c->r[0]=R16(c->r[25]+0x00000010u); // 800FF544
  cmpu(c,0,c->r[0],0x00000001u); // 800FF548
  if (!crb(c,2)) { goto L_800FF558; } // 800FF54C
  c->r[3]=c->r[25]|c->r[25]; // 800FF550
  c->lr=0x800FF558u; f_800FEC50(c); // 800FF554
L_800FF558:;
  W16(c->r[26]+0x00000038u,c->r[29]); // 800FF558
  c->r[3]=c->r[26]|c->r[26]; // 800FF55C
  W16(c->r[25]+0x00000010u,c->r[29]); // 800FF560
  c->lr=0x800FF568u; f_800FCB58(c); // 800FF564
  goto L_800FF574; // 800FF568
L_800FF56C:;
  c->r[3]=c->r[26]|c->r[26]; // 800FF56C
  c->lr=0x800FF574u; f_800FEDC4(c); // 800FF570
L_800FF574:;
  W32(c->r[26]+0x0000001Cu,c->r[29]); // 800FF574
  W32(c->r[26]+0x00000020u,c->r[29]); // 800FF578
  c->r[26]=R32(c->r[26]+0x00000000u); // 800FF57C
L_800FF580:;
  cmps(c,0,(int32_t)c->r[26],0); // 800FF580
  if (!crb(c,2)) { IRQCHK(c); goto L_800FF390; } // 800FF584
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 800FF588
  if (!crb(c,2)) { IRQCHK(c); goto L_800FF380; } // 800FF58C
  W32(c->r[13]+0xFFFF99DCu,c->r[28]); // 800FF590
  c->r[3]=0u+0x00000000u; // 800FF594
  c->lr=0x800FF59Cu; f_800FC91C(c); // 800FF598
  c->r[25]=c->r[3]|c->r[3]; // 800FF59C
  c->r[26]=0u+0x00000000u; // 800FF5A0
  goto L_800FF5E4; // 800FF5A4
L_800FF5A8:;
  c->r[0]=R32(c->r[25]+0x00000020u); // 800FF5A8
  cmps(c,0,(int32_t)c->r[0],0); // 800FF5AC
  if (crb(c,2)) { goto L_800FF5C8; } // 800FF5B0
  c->r[0]=R32(c->r[25]+0x00000018u); // 800FF5B4
  c->r[3]=R32(c->r[13]+0xFFFF99C8u); // 800FF5B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800FF5BC
  c->r[3]=c->r[3]+c->r[0]; // 800FF5C0
  c->lr=0x800FF5C8u; f_800FEC50(c); // 800FF5C4
L_800FF5C8:;
  W32(c->r[25]+0x00000020u,c->r[26]); // 800FF5C8
  c->r[0]=R32(c->r[25]+0x00000018u); // 800FF5CC
  c->r[3]=R32(c->r[13]+0xFFFF99C8u); // 800FF5D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800FF5D4
  c->r[3]=c->r[3]+c->r[0]; // 800FF5D8
  W16(c->r[3]+0x00000010u,c->r[26]); // 800FF5DC
  c->r[25]=R32(c->r[25]+0x00000000u); // 800FF5E0
L_800FF5E4:;
  cmps(c,0,(int32_t)c->r[25],0); // 800FF5E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800FF5A8; } // 800FF5E8
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF5EC
  c->r[3]=R32(c->r[13]+0xFFFF99C8u); // 800FF5F0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800FF5F4
  c->lr=0x800FF5FCu; f_800E0380(c); // 800FF5F8
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF5FC
  c->r[3]=R32(c->r[13]+0xFFFF99CCu); // 800FF600
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800FF604
  c->lr=0x800FF60Cu; f_800E0380(c); // 800FF608
  c->r[11]=c->r[1]+0x00000030u; // 800FF60C
  c->lr=0x800FF614u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF610
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FF614
  c->lr=c->r[0]; // 800FF618
  c->r[1]=c->r[1]+0x00000030u; // 800FF61C
  return; // 800FF620
}

// __AXGetPBs
void f_800FF624(Ctx* __restrict c) {
  trace_call(0x800FF624u);
  c->r[3]=R32(c->r[13]+0xFFFF99C8u); // 800FF624
  return; // 800FF628
}

// __AXSetPBDefault
void f_800FF62C(Ctx* __restrict c) {
  trace_call(0x800FF62Cu);
  c->r[4]=0u+0x18A80000u; // 800FF62C
  c->r[5]=0u+0x00000000u; // 800FF630
  c->r[0]=c->r[4]+0x00000024u; // 800FF634
  W16(c->r[3]+0x00000038u,c->r[5]); // 800FF638
  W16(c->r[3]+0x0000006Cu,c->r[5]); // 800FF63C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FF640
  W16(c->r[3]+0x000000E2u,c->r[5]); // 800FF644
  W16(c->r[3]+0x000000EAu,c->r[5]); // 800FF648
  W16(c->r[3]+0x000000FEu,c->r[5]); // 800FF64C
  W16(c->r[3]+0x0000013Cu,c->r[5]); // 800FF650
  W16(c->r[3]+0x00000132u,c->r[5]); // 800FF654
  W16(c->r[3]+0x00000134u,c->r[5]); // 800FF658
  W16(c->r[3]+0x00000136u,c->r[5]); // 800FF65C
  W16(c->r[3]+0x00000138u,c->r[5]); // 800FF660
  W16(c->r[3]+0x0000013Au,c->r[5]); // 800FF664
  return; // 800FF668
}

// __AXVPBInit
void f_800FF66C(Ctx* __restrict c) {
  trace_call(0x800FF66Cu);
  c->r[5]=0u+0x802E0000u; // 800FF66C
  c->r[4]=0u+0x802F0000u; // 800FF670
  c->r[3]=0u+0x802F0000u; // 800FF674
  c->r[0]=0u+0x00000060u; // 800FF678
  c->r[5]=c->r[5]+0x00002EC0u; // 800FF67C
  c->r[4]=c->r[4]+0xFFFFA6C0u; // 800FF680
  c->r[3]=c->r[3]+0xFFFFBEC0u; // 800FF684
  W32(c->r[13]+0xFFFF99D4u,c->r[0]); // 800FF688
  W32(c->r[13]+0xFFFF99C8u,c->r[5]); // 800FF68C
  W32(c->r[13]+0xFFFF99CCu,c->r[4]); // 800FF690
  W32(c->r[13]+0xFFFF99D0u,c->r[3]); // 800FF694
  f_800FF69C(c); return; // 800FF698
}

// __AXVPBInitCommon
void f_800FF69C(Ctx* __restrict c) {
  trace_call(0x800FF69Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF69C
  c->r[0]=c->lr; // 800FF6A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FF6A4
  c->r[11]=c->r[1]+0x00000030u; // 800FF6A8
  c->lr=0x800FF6B0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF6AC
  c->r[4]=0u+0x80000000u; // 800FF6B0
  c->r[3]=0u+0x89050000u; // 800FF6B4
  c->r[4]=R32(c->r[4]+0x000000F8u); // 800FF6B8
  c->r[5]=c->r[3]+0xFFFFFD51u; // 800FF6BC
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF6C0
  c->r[3]=0u+0x00000000u; // 800FF6C4
  c->r[5]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 800FF6C8
  W32(c->r[13]+0xFFFF99DCu,c->r[3]); // 800FF6CC
  c->r[7]=R32(c->r[13]+0xFFFF99C8u); // 800FF6D0
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 800FF6D4
  c->r[0]=c->r[4]-c->r[5]; // 800FF6D8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800FF6DC
  c->r[0]=c->r[0]+c->r[5]; // 800FF6E0
  cmps(c,0,(int32_t)c->r[6],0); // 800FF6E4
  c->r[0]=rotl(c->r[0],23)&0x007FFFFFu; // 800FF6E8
  W32(c->r[13]+0xFFFF99E0u,c->r[0]); // 800FF6EC
  if (crb(c,2)) { goto L_800FF740; } // 800FF6F0
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800FF6F4
  c->ctr=c->r[0]; // 800FF6F8
  if (crb(c,2)) { goto L_800FF730; } // 800FF6FC
L_800FF700:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 800FF700
  W32(c->r[7]+0x00000004u,c->r[3]); // 800FF704
  W32(c->r[7]+0x00000008u,c->r[3]); // 800FF708
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 800FF70C
  W32(c->r[7]+0x00000010u,c->r[3]); // 800FF710
  W32(c->r[7]+0x00000014u,c->r[3]); // 800FF714
  W32(c->r[7]+0x00000018u,c->r[3]); // 800FF718
  W32(c->r[7]+0x0000001Cu,c->r[3]); // 800FF71C
  c->r[7]=c->r[7]+0x00000020u; // 800FF720
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF700; } // 800FF724
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 800FF728
  if (crb(c,2)) { goto L_800FF740; } // 800FF72C
L_800FF730:;
  c->ctr=c->r[6]; // 800FF730
L_800FF734:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 800FF734
  c->r[7]=c->r[7]+0x00000004u; // 800FF738
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF734; } // 800FF73C
L_800FF740:;
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF740
  c->r[3]=0u+0x00000000u; // 800FF744
  c->r[4]=R32(c->r[13]+0xFFFF99CCu); // 800FF748
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; cr0(c,c->r[5]); // 800FF74C
  if (crb(c,2)) { goto L_800FF7A0; } // 800FF750
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800FF754
  c->ctr=c->r[0]; // 800FF758
  if (crb(c,2)) { goto L_800FF790; } // 800FF75C
L_800FF760:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FF760
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FF764
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FF768
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FF76C
  W32(c->r[4]+0x00000010u,c->r[3]); // 800FF770
  W32(c->r[4]+0x00000014u,c->r[3]); // 800FF774
  W32(c->r[4]+0x00000018u,c->r[3]); // 800FF778
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800FF77C
  c->r[4]=c->r[4]+0x00000020u; // 800FF780
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF760; } // 800FF784
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 800FF788
  if (crb(c,2)) { goto L_800FF7A0; } // 800FF78C
L_800FF790:;
  c->ctr=c->r[5]; // 800FF790
L_800FF794:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FF794
  c->r[4]=c->r[4]+0x00000004u; // 800FF798
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF794; } // 800FF79C
L_800FF7A0:;
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF7A0
  c->r[3]=0u+0x00000000u; // 800FF7A4
  c->r[4]=R32(c->r[13]+0xFFFF99D0u); // 800FF7A8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)90); // 800FF7AC
  cmps(c,0,(int32_t)c->r[5],0); // 800FF7B0
  if (crb(c,2)) { goto L_800FF804; } // 800FF7B4
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800FF7B8
  c->ctr=c->r[0]; // 800FF7BC
  if (crb(c,2)) { goto L_800FF7F4; } // 800FF7C0
L_800FF7C4:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FF7C4
  W32(c->r[4]+0x00000004u,c->r[3]); // 800FF7C8
  W32(c->r[4]+0x00000008u,c->r[3]); // 800FF7CC
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800FF7D0
  W32(c->r[4]+0x00000010u,c->r[3]); // 800FF7D4
  W32(c->r[4]+0x00000014u,c->r[3]); // 800FF7D8
  W32(c->r[4]+0x00000018u,c->r[3]); // 800FF7DC
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800FF7E0
  c->r[4]=c->r[4]+0x00000020u; // 800FF7E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF7C4; } // 800FF7E8
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 800FF7EC
  if (crb(c,2)) { goto L_800FF804; } // 800FF7F0
L_800FF7F4:;
  c->ctr=c->r[5]; // 800FF7F4
L_800FF7F8:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800FF7F8
  c->r[4]=c->r[4]+0x00000004u; // 800FF7FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF7F8; } // 800FF800
L_800FF804:;
  c->r[3]=0u+0x18A80000u; // 800FF804
  c->r[31]=0u+0x00000000u; // 800FF808
  c->r[29]=c->r[3]+0x00000024u; // 800FF80C
  c->r[27]=0u+0x00000000u; // 800FF810
  c->r[26]=0u+0x00000000u; // 800FF814
  c->r[25]=0u+0x00000000u; // 800FF818
  c->r[28]=0u+0x00000000u; // 800FF81C
  c->r[30]=0u+0x00000001u; // 800FF820
  goto L_800FF8F4; // 800FF824
L_800FF828:;
  c->r[0]=R32(c->r[13]+0xFFFF99D0u); // 800FF828
  c->r[5]=R32(c->r[13]+0xFFFF99C8u); // 800FF82C
  c->r[4]=R32(c->r[13]+0xFFFF99CCu); // 800FF830
  c->r[3]=c->r[0]+c->r[25]; // 800FF834
  c->r[5]=c->r[5]+c->r[27]; // 800FF838
  W32(c->r[3]+0x00000018u,c->r[31]); // 800FF83C
  c->r[6]=c->r[4]+c->r[26]; // 800FF840
  W32(c->r[3]+0x00000024u,c->r[6]); // 800FF844
  W16(c->r[3]+0x00000038u,c->r[28]); // 800FF848
  W16(c->r[3]+0x0000006Cu,c->r[28]); // 800FF84C
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 800FF850
  W16(c->r[3]+0x000000E2u,c->r[28]); // 800FF854
  W16(c->r[3]+0x000000EAu,c->r[28]); // 800FF858
  W16(c->r[3]+0x000000FEu,c->r[28]); // 800FF85C
  W16(c->r[3]+0x0000013Cu,c->r[28]); // 800FF860
  W16(c->r[3]+0x00000132u,c->r[28]); // 800FF864
  W16(c->r[3]+0x00000134u,c->r[28]); // 800FF868
  W16(c->r[3]+0x00000136u,c->r[28]); // 800FF86C
  W16(c->r[3]+0x00000138u,c->r[28]); // 800FF870
  W16(c->r[3]+0x0000013Au,c->r[28]); // 800FF874
  c->r[4]=R32(c->r[13]+0xFFFF99D4u); // 800FF878
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800FF87C
  cmpu(c,0,c->r[31],c->r[0]); // 800FF880
  if (!crb(c,2)) { goto L_800FF89C; } // 800FF884
  W16(c->r[5]+0x00000002u,c->r[28]); // 800FF888
  W16(c->r[5]+0x00000000u,c->r[28]); // 800FF88C
  W16(c->r[3]+0x0000002Au,c->r[28]); // 800FF890
  W16(c->r[3]+0x00000028u,c->r[28]); // 800FF894
  goto L_800FF8B4; // 800FF898
L_800FF89C:;
  c->r[0]=c->r[5]+0x00000140u; // 800FF89C
  c->r[4]=rotl(c->r[0],16)&0x0000FFFFu; // 800FF8A0
  W16(c->r[3]+0x00000028u,c->r[4]); // 800FF8A4
  W16(c->r[3]+0x0000002Au,c->r[0]); // 800FF8A8
  W16(c->r[5]+0x00000000u,c->r[4]); // 800FF8AC
  W16(c->r[5]+0x00000002u,c->r[0]); // 800FF8B0
L_800FF8B4:;
  c->r[0]=rotl(c->r[5],16)&0x0000FFFFu; // 800FF8B4
  c->r[4]=rotl(c->r[6],16)&0x0000FFFFu; // 800FF8B8
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 800FF8BC
  W16(c->r[3]+0x0000002Eu,c->r[5]); // 800FF8C0
  W16(c->r[5]+0x00000004u,c->r[0]); // 800FF8C4
  W16(c->r[5]+0x00000006u,c->r[5]); // 800FF8C8
  W16(c->r[3]+0x0000006Eu,c->r[4]); // 800FF8CC
  W16(c->r[3]+0x00000070u,c->r[6]); // 800FF8D0
  W16(c->r[5]+0x00000046u,c->r[4]); // 800FF8D4
  W16(c->r[5]+0x00000048u,c->r[6]); // 800FF8D8
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 800FF8DC
  c->lr=0x800FF8E4u; f_800FCB3C(c); // 800FF8E0
  c->r[27]=c->r[27]+0x00000140u; // 800FF8E4
  c->r[26]=c->r[26]+0x00000040u; // 800FF8E8
  c->r[25]=c->r[25]+0x00000168u; // 800FF8EC
  c->r[31]=c->r[31]+0x00000001u; // 800FF8F0
L_800FF8F4:;
  c->r[0]=R32(c->r[13]+0xFFFF99D4u); // 800FF8F4
  cmpu(c,0,c->r[31],c->r[0]); // 800FF8F8
  if (crb(c,0)) { IRQCHK(c); goto L_800FF828; } // 800FF8FC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 800FF900
  c->r[3]=R32(c->r[13]+0xFFFF99C8u); // 800FF904
  c->lr=0x800FF90Cu; f_800E0380(c); // 800FF908
  c->r[11]=c->r[1]+0x00000030u; // 800FF90C
  c->lr=0x800FF914u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF910
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FF914
  c->lr=c->r[0]; // 800FF918
  c->r[1]=c->r[1]+0x00000030u; // 800FF91C
  return; // 800FF920
}

// fn_800FF924
void f_800FF924(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800FF924
  W32(c->r[13]+0xFFFF99C8u,c->r[0]); // 800FF928
  W32(c->r[13]+0xFFFF99CCu,c->r[0]); // 800FF92C
  W32(c->r[13]+0xFFFF99D0u,c->r[0]); // 800FF930
  W32(c->r[13]+0xFFFF99D4u,c->r[0]); // 800FF934
  return; // 800FF938
}

// fn_800FF93C
void f_800FF93C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF93C
  c->r[0]=c->lr; // 800FF940
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF948
  c->r[31]=c->r[4]|c->r[4]; // 800FF94C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FF950
  c->r[30]=c->r[3]|c->r[3]; // 800FF954
  c->lr=0x800FF95Cu; f_800E4F54(c); // 800FF958
  c->r[0]=R16(c->r[30]+0x00000038u); // 800FF95C
  cmpu(c,0,c->r[0],c->r[31]); // 800FF960
  if (!crb(c,2)) { goto L_800FF970; } // 800FF964
  c->lr=0x800FF96Cu; f_800E4F7C(c); // 800FF968
  goto L_800FF994; // 800FF96C
L_800FF970:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800FF970
  cmps(c,0,(int32_t)c->r[31],0); // 800FF974
  W16(c->r[30]+0x00000038u,c->r[31]); // 800FF978
  c->r[0]=c->r[0]|0x00000004u; // 800FF97C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800FF980
  if (!crb(c,2)) { goto L_800FF990; } // 800FF984
  c->r[0]=0u+0x00000001u; // 800FF988
  W32(c->r[30]+0x00000020u,c->r[0]); // 800FF98C
L_800FF990:;
  c->lr=0x800FF994u; f_800E4F7C(c); // 800FF990
L_800FF994:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF994
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF998
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FF99C
  c->lr=c->r[0]; // 800FF9A0
  c->r[1]=c->r[1]+0x00000010u; // 800FF9A4
  return; // 800FF9A8
}

// fn_800FF9AC
void f_800FF9AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF9AC
  c->r[0]=c->lr; // 800FF9B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF9B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF9B8
  c->r[31]=c->r[4]|c->r[4]; // 800FF9BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FF9C0
  c->r[30]=c->r[3]|c->r[3]; // 800FF9C4
  c->lr=0x800FF9CCu; f_800E4F54(c); // 800FF9C8
  c->r[0]=R32(c->r[31]+0x00000000u); // 800FF9CC
  W32(c->r[30]+0x00000096u,c->r[0]); // 800FF9D0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FF9D4
  W32(c->r[30]+0x0000009Au,c->r[0]); // 800FF9D8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FF9DC
  W32(c->r[30]+0x0000009Eu,c->r[0]); // 800FF9E0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800FF9E4
  W32(c->r[30]+0x000000A2u,c->r[0]); // 800FF9E8
  c->r[0]=R16(c->r[31]+0x00000002u); // 800FF9EC
  cmps(c,0,(int32_t)c->r[0],10); // 800FF9F0
  if (crb(c,2)) { goto L_800FFA14; } // 800FF9F4
  if (!crb(c,0)) { goto L_800FFA08; } // 800FF9F8
  cmps(c,0,(int32_t)c->r[0],0); // 800FF9FC
  if (crb(c,2)) { goto L_800FFA78; } // 800FFA00
  goto L_800FFA78; // 800FFA04
L_800FFA08:;
  cmps(c,0,(int32_t)c->r[0],25); // 800FFA08
  if (crb(c,2)) { goto L_800FFA48; } // 800FFA0C
  goto L_800FFA78; // 800FFA10
L_800FFA14:;
  c->r[4]=0u+0x00000000u; // 800FFA14
  c->r[0]=0u+0x08000000u; // 800FFA18
  W32(c->r[30]+0x000000A6u,c->r[4]); // 800FFA1C
  W32(c->r[30]+0x000000AAu,c->r[4]); // 800FFA20
  W32(c->r[30]+0x000000AEu,c->r[4]); // 800FFA24
  W32(c->r[30]+0x000000B2u,c->r[4]); // 800FFA28
  W32(c->r[30]+0x000000B6u,c->r[4]); // 800FFA2C
  W32(c->r[30]+0x000000BAu,c->r[4]); // 800FFA30
  W32(c->r[30]+0x000000BEu,c->r[4]); // 800FFA34
  W32(c->r[30]+0x000000C2u,c->r[4]); // 800FFA38
  W32(c->r[30]+0x000000C6u,c->r[0]); // 800FFA3C
  W32(c->r[30]+0x000000CAu,c->r[4]); // 800FFA40
  goto L_800FFA78; // 800FFA44
L_800FFA48:;
  c->r[4]=0u+0x00000000u; // 800FFA48
  c->r[0]=0u+0x01000000u; // 800FFA4C
  W32(c->r[30]+0x000000A6u,c->r[4]); // 800FFA50
  W32(c->r[30]+0x000000AAu,c->r[4]); // 800FFA54
  W32(c->r[30]+0x000000AEu,c->r[4]); // 800FFA58
  W32(c->r[30]+0x000000B2u,c->r[4]); // 800FFA5C
  W32(c->r[30]+0x000000B6u,c->r[4]); // 800FFA60
  W32(c->r[30]+0x000000BAu,c->r[4]); // 800FFA64
  W32(c->r[30]+0x000000BEu,c->r[4]); // 800FFA68
  W32(c->r[30]+0x000000C2u,c->r[4]); // 800FFA6C
  W32(c->r[30]+0x000000C6u,c->r[0]); // 800FFA70
  W32(c->r[30]+0x000000CAu,c->r[4]); // 800FFA74
L_800FFA78:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800FFA78
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 800FFA7C
  c->r[0]=c->r[0]|0x00008400u; // 800FFA80
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800FFA84
  c->lr=0x800FFA8Cu; f_800E4F7C(c); // 800FFA88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFA8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFA90
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FFA94
  c->lr=c->r[0]; // 800FFA98
  c->r[1]=c->r[1]+0x00000010u; // 800FFA9C
  return; // 800FFAA0
}

// fn_800FFAA4
void f_800FFAA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFAA4
  c->r[0]=c->lr; // 800FFAA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FFAAC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800FFAB0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800FFAB4
  c->r[0]=0u+0x43300000u; // 800FFAB8
  {uint32_t ea=c->r[2]+0xFFFF8C38u; c->f[3]=RF64(ea);} // 800FFABC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800FFAC0
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFAC4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FFAC8
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFACC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800FFAD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FFAD4
  c->r[31]=c->r[5]|c->r[5]; // 800FFAD8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800FFADC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FFAE0
  c->r[30]=c->r[4]|c->r[4]; // 800FFAE4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800FFAE8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800FFAEC
  c->lr=0x800FFAF4u; f_8011A5C8(c); // 800FFAF0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800FFAF4
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFAF8
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFAFC
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[2]); // 800FFB00
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 800FFB04
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800FFB08
  c->lr=0x800FFB10u; f_8011AE8C(c); // 800FFB0C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800FFB10
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFB14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800FFB18
  c->f[1]=-c->f[1]; // 800FFB1C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800FFB20
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800FFB24
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800FFB28
  c->r[3]=R32(c->r[1]+0x00000014u); // 800FFB2C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 800FFB30
  W16(c->r[31]+0x00000000u,c->r[3]); // 800FFB34
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 800FFB38
  W16(c->r[30]+0x00000000u,c->r[0]); // 800FFB3C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800FFB40
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800FFB44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FFB48
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FFB4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FFB50
  c->lr=c->r[0]; // 800FFB54
  c->r[1]=c->r[1]+0x00000030u; // 800FFB58
  return; // 800FFB5C
}

// AXGetMaxVoices
void f_800FFB60(Ctx* __restrict c) {
  trace_call(0x800FFB60u);
  c->r[3]=R32(c->r[13]+0xFFFF99D4u); // 800FFB60
  return; // 800FFB64
}

// __AXGetCurrentProfile
void f_800FFB68(Ctx* __restrict c) {
  trace_call(0x800FFB68u);
  c->r[0]=R32(c->r[13]+0xFFFF99E8u); // 800FFB68
  cmps(c,0,(int32_t)c->r[0],0); // 800FFB6C
  if (crb(c,2)) { goto L_800FFBA0; } // 800FFB70
  c->r[5]=R32(c->r[13]+0xFFFF99ECu); // 800FFB74
  c->r[3]=R32(c->r[13]+0xFFFF99F0u); // 800FFB78
  c->r[4]=c->r[5]+0x00000001u; // 800FFB7C
  c->r[6]=R32(c->r[13]+0xFFFF99F4u); // 800FFB80
  c->r[0]=divwu(c->r[4],c->r[3]); // 800FFB84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 800FFB88
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 800FFB8C
  c->r[0]=c->r[4]-c->r[0]; // 800FFB90
  W32(c->r[13]+0xFFFF99ECu,c->r[0]); // 800FFB94
  c->r[3]=c->r[6]+c->r[3]; // 800FFB98
  return; // 800FFB9C
L_800FFBA0:;
  c->r[3]=0u+0x00000000u; // 800FFBA0
  return; // 800FFBA4
}

// AXFXReverbHiInit
void f_800FFBA8(Ctx* __restrict c) {
  trace_call(0x800FFBA8u);
  {uint32_t ea=c->r[3]+0x00000158u; c->f[7]=c->ps1[7]=RF32(ea);} // 800FFBA8
  c->r[0]=0u+0x00000000u; // 800FFBAC
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FFBB0
  c->r[4]=0u+0x00000005u; // 800FFBB4
  {uint32_t ea=c->r[3]+0x00000150u; c->f[6]=c->ps1[6]=RF32(ea);} // 800FFBB8
  {uint32_t ea=c->r[3]+0x00000148u; c->f[5]=c->ps1[5]=RF32(ea);} // 800FFBBC
  {uint32_t ea=c->r[3]+0x00000154u; c->f[4]=c->ps1[4]=RF32(ea);} // 800FFBC0
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FFBC4
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFBC8
  {uint32_t ea=c->r[3]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFBCC
  W32(c->r[3]+0x00000110u,c->r[4]); // 800FFBD0
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[7]);} // 800FFBD4
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[7]);} // 800FFBD8
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800FFBDC
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[6]);} // 800FFBE0
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[5]);} // 800FFBE4
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[4]);} // 800FFBE8
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[3]);} // 800FFBEC
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[2]);} // 800FFBF0
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[1]);} // 800FFBF4
  W32(c->r[3]+0x00000138u,c->r[0]); // 800FFBF8
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 800FFBFC
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 800FFC00
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[2]);} // 800FFC04
  f_800FFCBC(c); return; // 800FFC08
}

// AXFXReverbHiShutdown
void f_800FFC0C(Ctx* __restrict c) {
  trace_call(0x800FFC0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFC0C
  c->r[0]=c->lr; // 800FFC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFC14
  c->lr=0x800FFC1Cu; f_800FFFDC(c); // 800FFC18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFC1C
  c->r[3]=0u+0x00000001u; // 800FFC20
  c->lr=c->r[0]; // 800FFC24
  c->r[1]=c->r[1]+0x00000010u; // 800FFC28
  return; // 800FFC2C
}

// AXFXReverbHiCallback
void f_800FFC30(Ctx* __restrict c) {
  trace_call(0x800FFC30u);
  f_80100030(c); return; // 800FFC30
}

// AXFXReverbHiExpGetMemSize
void f_800FFC34(Ctx* __restrict c) {
  trace_call(0x800FFC34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFC34
  c->r[4]=0u+0x80290000u; // 800FFC38
  c->r[4]=c->r[4]+0x00005400u; // 800FFC3C
  c->r[9]=0u+0x80290000u; // 800FFC40
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFC44
  c->r[9]=c->r[9]+0x000054C0u; // 800FFC48
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFC4C
  c->r[10]=R32(c->r[4]+0x0000005Cu); // 800FFC50
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800FFC54
  c->r[0]=R32(c->r[9]+0x000000C0u); // 800FFC58
  c->r[8]=R32(c->r[9]+0x000000C4u); // 800FFC5C
  c->r[7]=R32(c->r[9]+0x000000C8u); // 800FFC60
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800FFC64
  c->r[6]=R32(c->r[9]+0x000000CCu); // 800FFC68
  c->r[5]=R32(c->r[9]+0x000000D0u); // 800FFC6C
  c->r[4]=R32(c->r[9]+0x000000D4u); // 800FFC70
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800FFC74
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800FFC78
  c->r[10]=c->r[10]+c->r[3]; // 800FFC7C
  c->r[3]=R32(c->r[9]+0x000000D8u); // 800FFC80
  c->r[10]=c->r[10]+c->r[0]; // 800FFC84
  c->r[0]=R32(c->r[9]+0x000000DCu); // 800FFC88
  c->r[10]=c->r[10]+c->r[8]; // 800FFC8C
  c->r[10]=c->r[10]+c->r[7]; // 800FFC90
  c->r[10]=c->r[10]+c->r[6]; // 800FFC94
  c->r[10]=c->r[10]+c->r[5]; // 800FFC98
  c->r[5]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800FFC9C
  c->r[10]=c->r[5]-c->r[10]; // 800FFCA0
  c->r[10]=c->r[10]+c->r[4]; // 800FFCA4
  c->r[10]=c->r[10]+c->r[3]; // 800FFCA8
  c->r[10]=c->r[10]+c->r[0]; // 800FFCAC
  c->r[3]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800FFCB0
  c->r[1]=c->r[1]+0x00000010u; // 800FFCB4
  return; // 800FFCB8
}

// AXFXReverbHiExpInit
void f_800FFCBC(Ctx* __restrict c) {
  trace_call(0x800FFCBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFCBC
  c->r[0]=c->lr; // 800FFCC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFCC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FFCC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FFCCC
  c->r[30]=c->r[3]|c->r[3]; // 800FFCD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FFCD4
  c->lr=0x800FFCDCu; f_800E4F54(c); // 800FFCD8
  {uint32_t ea=c->r[30]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFCDC
  c->r[0]=0u+0x00000001u; // 800FFCE0
  {uint32_t ea=c->r[2]+0xFFFF8C4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFCE4
  c->r[31]=c->r[3]|c->r[3]; // 800FFCE8
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800FFCEC
  fcmp(c,0,c->f[1],c->f[0]); // 800FFCF0
  if (!crb(c,0)) { goto L_800FFD2C; } // 800FFCF4
  c->lr=0x800FFCFCu; f_800E4F54(c); // 800FFCF8
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800FFCFC
  c->r[29]=c->r[3]|c->r[3]; // 800FFD00
  c->r[3]=c->r[30]|c->r[30]; // 800FFD04
  c->r[0]=c->r[0]|0x00000001u; // 800FFD08
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800FFD0C
  c->lr=0x800FFD14u; f_801007E4(c); // 800FFD10
  c->r[3]=c->r[29]|c->r[29]; // 800FFD14
  c->lr=0x800FFD1Cu; f_800E4F7C(c); // 800FFD18
  c->r[3]=c->r[31]|c->r[31]; // 800FFD1C
  c->lr=0x800FFD24u; f_800E4F7C(c); // 800FFD20
  c->r[3]=0u+0x00000000u; // 800FFD24
  goto L_800FFE3C; // 800FFD28
L_800FFD2C:;
  c->r[3]=0u+0x80290000u; // 800FFD2C
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFD30
  c->r[3]=c->r[3]+0x00005400u; // 800FFD34
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 800FFD38
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800FFD3C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800FFD40
  c->lr=0x800FFD48u; f_80109E10(c); // 800FFD44
  W32(c->r[30]+0x00000040u,c->r[3]); // 800FFD48
  c->r[4]=0u+0x80290000u; // 800FFD4C
  c->r[4]=c->r[4]+0x000054C0u; // 800FFD50
  c->r[3]=c->r[30]|c->r[30]; // 800FFD54
  c->r[0]=R32(c->r[4]+0x000000C0u); // 800FFD58
  W32(c->r[30]+0x00000080u,c->r[0]); // 800FFD5C
  c->r[0]=R32(c->r[4]+0x000000C4u); // 800FFD60
  W32(c->r[30]+0x00000084u,c->r[0]); // 800FFD64
  c->r[0]=R32(c->r[4]+0x000000C8u); // 800FFD68
  W32(c->r[30]+0x00000088u,c->r[0]); // 800FFD6C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 800FFD70
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800FFD74
  c->r[0]=R32(c->r[4]+0x000000D0u); // 800FFD78
  W32(c->r[30]+0x000000C4u,c->r[0]); // 800FFD7C
  c->r[0]=R32(c->r[4]+0x000000D4u); // 800FFD80
  W32(c->r[30]+0x000000ECu,c->r[0]); // 800FFD84
  c->r[0]=R32(c->r[4]+0x000000D8u); // 800FFD88
  W32(c->r[30]+0x000000F0u,c->r[0]); // 800FFD8C
  c->r[0]=R32(c->r[4]+0x000000DCu); // 800FFD90
  W32(c->r[30]+0x000000F4u,c->r[0]); // 800FFD94
  c->lr=0x800FFD9Cu; f_8010054C(c); // 800FFD98
  cmps(c,0,(int32_t)c->r[3],0); // 800FFD9C
  if (!crb(c,2)) { goto L_800FFDD8; } // 800FFDA0
  c->lr=0x800FFDA8u; f_800E4F54(c); // 800FFDA4
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800FFDA8
  c->r[29]=c->r[3]|c->r[3]; // 800FFDAC
  c->r[3]=c->r[30]|c->r[30]; // 800FFDB0
  c->r[0]=c->r[0]|0x00000001u; // 800FFDB4
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800FFDB8
  c->lr=0x800FFDC0u; f_801007E4(c); // 800FFDBC
  c->r[3]=c->r[29]|c->r[29]; // 800FFDC0
  c->lr=0x800FFDC8u; f_800E4F7C(c); // 800FFDC4
  c->r[3]=c->r[31]|c->r[31]; // 800FFDC8
  c->lr=0x800FFDD0u; f_800E4F7C(c); // 800FFDCC
  c->r[3]=0u+0x00000000u; // 800FFDD0
  goto L_800FFE3C; // 800FFDD4
L_800FFDD8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFDD8
  c->lr=0x800FFDE0u; f_801006C0(c); // 800FFDDC
  c->r[3]=c->r[30]|c->r[30]; // 800FFDE0
  c->lr=0x800FFDE8u; f_801008F8(c); // 800FFDE4
  cmps(c,0,(int32_t)c->r[3],0); // 800FFDE8
  if (!crb(c,2)) { goto L_800FFE24; } // 800FFDEC
  c->lr=0x800FFDF4u; f_800E4F54(c); // 800FFDF0
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800FFDF4
  c->r[29]=c->r[3]|c->r[3]; // 800FFDF8
  c->r[3]=c->r[30]|c->r[30]; // 800FFDFC
  c->r[0]=c->r[0]|0x00000001u; // 800FFE00
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800FFE04
  c->lr=0x800FFE0Cu; f_801007E4(c); // 800FFE08
  c->r[3]=c->r[29]|c->r[29]; // 800FFE0C
  c->lr=0x800FFE14u; f_800E4F7C(c); // 800FFE10
  c->r[3]=c->r[31]|c->r[31]; // 800FFE14
  c->lr=0x800FFE1Cu; f_800E4F7C(c); // 800FFE18
  c->r[3]=0u+0x00000000u; // 800FFE1C
  goto L_800FFE3C; // 800FFE20
L_800FFE24:;
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800FFE24
  c->r[3]=c->r[31]|c->r[31]; // 800FFE28
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800FFE2C
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800FFE30
  c->lr=0x800FFE38u; f_800E4F7C(c); // 800FFE34
  c->r[3]=0u+0x00000001u; // 800FFE38
L_800FFE3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFE3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FFE40
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FFE44
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FFE48
  c->lr=c->r[0]; // 800FFE4C
  c->r[1]=c->r[1]+0x00000020u; // 800FFE50
  return; // 800FFE54
}

// AXFXReverbHiExpSettings
void f_800FFE58(Ctx* __restrict c) {
  trace_call(0x800FFE58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFE58
  c->r[0]=c->lr; // 800FFE5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFE60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FFE64
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FFE68
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FFE6C
  c->r[29]=c->r[3]|c->r[3]; // 800FFE70
  c->lr=0x800FFE78u; f_800E4F54(c); // 800FFE74
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 800FFE78
  c->r[30]=c->r[3]|c->r[3]; // 800FFE7C
  c->r[0]=c->r[0]|0x00000001u; // 800FFE80
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 800FFE84
  c->lr=0x800FFE8Cu; f_800E4F54(c); // 800FFE88
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 800FFE8C
  c->r[31]=c->r[3]|c->r[3]; // 800FFE90
  c->r[3]=c->r[29]|c->r[29]; // 800FFE94
  c->r[0]=c->r[0]|0x00000001u; // 800FFE98
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 800FFE9C
  c->lr=0x800FFEA4u; f_801007E4(c); // 800FFEA0
  c->r[3]=c->r[31]|c->r[31]; // 800FFEA4
  c->lr=0x800FFEACu; f_800E4F7C(c); // 800FFEA8
  c->r[3]=c->r[29]|c->r[29]; // 800FFEAC
  c->lr=0x800FFEB4u; f_800FFCBC(c); // 800FFEB0
  cmps(c,0,(int32_t)c->r[3],0); // 800FFEB4
  if (!crb(c,2)) { goto L_800FFEF0; } // 800FFEB8
  c->lr=0x800FFEC0u; f_800E4F54(c); // 800FFEBC
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 800FFEC0
  c->r[31]=c->r[3]|c->r[3]; // 800FFEC4
  c->r[3]=c->r[29]|c->r[29]; // 800FFEC8
  c->r[0]=c->r[0]|0x00000001u; // 800FFECC
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 800FFED0
  c->lr=0x800FFED8u; f_801007E4(c); // 800FFED4
  c->r[3]=c->r[31]|c->r[31]; // 800FFED8
  c->lr=0x800FFEE0u; f_800E4F7C(c); // 800FFEDC
  c->r[3]=c->r[30]|c->r[30]; // 800FFEE0
  c->lr=0x800FFEE8u; f_800E4F7C(c); // 800FFEE4
  c->r[3]=0u+0x00000000u; // 800FFEE8
  goto L_800FFF0C; // 800FFEEC
L_800FFEF0:;
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 800FFEF0
  c->r[3]=c->r[30]|c->r[30]; // 800FFEF4
  c->r[0]=c->r[0]|0x00000002u; // 800FFEF8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800FFEFC
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 800FFF00
  c->lr=0x800FFF08u; f_800E4F7C(c); // 800FFF04
  c->r[3]=0u+0x00000001u; // 800FFF08
L_800FFF0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFF0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FFF10
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FFF14
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FFF18
  c->lr=c->r[0]; // 800FFF1C
  c->r[1]=c->r[1]+0x00000020u; // 800FFF20
  return; // 800FFF24
}

// AXFXReverbHiExpSettingsUpdate
void f_800FFF28(Ctx* __restrict c) {
  trace_call(0x800FFF28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFF28
  c->r[0]=c->lr; // 800FFF2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFF30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FFF34
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FFF38
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FFF3C
  c->r[29]=c->r[3]|c->r[3]; // 800FFF40
  c->lr=0x800FFF48u; f_800E4F54(c); // 800FFF44
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 800FFF48
  c->r[30]=c->r[3]|c->r[3]; // 800FFF4C
  c->r[3]=c->r[29]|c->r[29]; // 800FFF50
  c->r[0]=c->r[0]|0x00000001u; // 800FFF54
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 800FFF58
  c->lr=0x800FFF60u; f_801006C0(c); // 800FFF5C
  c->r[3]=c->r[29]|c->r[29]; // 800FFF60
  c->lr=0x800FFF68u; f_801008F8(c); // 800FFF64
  cmps(c,0,(int32_t)c->r[3],0); // 800FFF68
  if (!crb(c,2)) { goto L_800FFFA4; } // 800FFF6C
  c->lr=0x800FFF74u; f_800E4F54(c); // 800FFF70
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 800FFF74
  c->r[31]=c->r[3]|c->r[3]; // 800FFF78
  c->r[3]=c->r[29]|c->r[29]; // 800FFF7C
  c->r[0]=c->r[0]|0x00000001u; // 800FFF80
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 800FFF84
  c->lr=0x800FFF8Cu; f_801007E4(c); // 800FFF88
  c->r[3]=c->r[31]|c->r[31]; // 800FFF8C
  c->lr=0x800FFF94u; f_800E4F7C(c); // 800FFF90
  c->r[3]=c->r[30]|c->r[30]; // 800FFF94
  c->lr=0x800FFF9Cu; f_800E4F7C(c); // 800FFF98
  c->r[3]=0u+0x00000000u; // 800FFF9C
  goto L_800FFFC0; // 800FFFA0
L_800FFFA4:;
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 800FFFA4
  c->r[3]=c->r[30]|c->r[30]; // 800FFFA8
  c->r[0]=c->r[0]|0x00000002u; // 800FFFAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800FFFB0
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 800FFFB4
  c->lr=0x800FFFBCu; f_800E4F7C(c); // 800FFFB8
  c->r[3]=0u+0x00000001u; // 800FFFBC
L_800FFFC0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFFC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FFFC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FFFC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FFFCC
  c->lr=c->r[0]; // 800FFFD0
  c->r[1]=c->r[1]+0x00000020u; // 800FFFD4
  return; // 800FFFD8
}

// AXFXReverbHiExpShutdown
void f_800FFFDC(Ctx* __restrict c) {
  trace_call(0x800FFFDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFFDC
  c->r[0]=c->lr; // 800FFFE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFFE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFFE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FFFEC
  c->r[30]=c->r[3]|c->r[3]; // 800FFFF0
  c->lr=0x800FFFF8u; f_800E4F54(c); // 800FFFF4
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 800FFFF8
  c->r[31]=c->r[3]|c->r[3]; // 800FFFFC
  c->r[3]=c->r[30]|c->r[30]; // 80100000
  c->r[0]=c->r[0]|0x00000001u; // 80100004
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 80100008
  c->lr=0x80100010u; f_801007E4(c); // 8010000C
  c->r[3]=c->r[31]|c->r[31]; // 80100010
  c->lr=0x80100018u; f_800E4F7C(c); // 80100014
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100018
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010001C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100020
  c->lr=c->r[0]; // 80100024
  c->r[1]=c->r[1]+0x00000010u; // 80100028
  return; // 8010002C
}

// AXFXReverbHiExpCallback
void f_80100030(Ctx* __restrict c) {
  trace_call(0x80100030u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100030
  c->r[0]=c->lr; // 80100034
  W32(c->r[1]+0x00000074u,c->r[0]); // 80100038
  c->r[11]=c->r[1]+0x00000070u; // 8010003C
  c->lr=0x80100044u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80100040
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 80100044
  cmps(c,0,(int32_t)c->r[0],0); // 80100048
  if (crb(c,2)) { goto L_8010005C; } // 8010004C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80100050
  W32(c->r[4]+0x0000010Cu,c->r[0]); // 80100054
  goto L_80100534; // 80100058
L_8010005C:;
  c->r[7]=R32(c->r[4]+0x00000138u); // 8010005C
  c->r[6]=R32(c->r[3]+0x00000000u); // 80100060
  c->r[5]=R32(c->r[3]+0x00000004u); // 80100064
  cmps(c,0,(int32_t)c->r[7],0); // 80100068
  c->r[0]=R32(c->r[3]+0x00000008u); // 8010006C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80100070
  W32(c->r[1]+0x00000030u,c->r[5]); // 80100074
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100078
  if (crb(c,2)) { goto L_80100098; } // 8010007C
  c->r[5]=R32(c->r[7]+0x00000000u); // 80100080
  c->r[3]=R32(c->r[7]+0x00000004u); // 80100084
  c->r[0]=R32(c->r[7]+0x00000008u); // 80100088
  W32(c->r[1]+0x00000008u,c->r[5]); // 8010008C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80100090
  W32(c->r[1]+0x00000010u,c->r[0]); // 80100094
L_80100098:;
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 80100098
  cmps(c,0,(int32_t)c->r[7],0); // 8010009C
  if (crb(c,2)) { goto L_801000B0; } // 801000A0
  c->r[3]=R32(c->r[7]+0x00000000u); // 801000A4
  c->r[5]=R32(c->r[7]+0x00000004u); // 801000A8
  c->r[6]=R32(c->r[7]+0x00000008u); // 801000AC
L_801000B0:;
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801000B0
  c->r[31]=0u+0x00000000u; // 801000B4
  {uint32_t ea=c->r[4]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 801000B8
  c->r[29]=0u+0x00000000u; // 801000BC
  {uint32_t ea=c->r[2]+0xFFFF8C54u; c->f[5]=c->ps1[5]=RF32(ea);} // 801000C0
  c->r[0]=0u+0x43300000u; // 801000C4
  {uint32_t ea=c->r[4]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 801000C8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801000CC
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[2]=c->ps1[2]=RF32(ea);} // 801000D0
  c->r[30]=0u+0x00000003u; // 801000D4
  {uint32_t ea=c->r[4]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801000D8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 801000DC
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801000E0
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[0]); // 801000E4
  {uint32_t ea=c->r[2]+0xFFFF8C60u; c->f[0]=RF64(ea);} // 801000E8
L_801000EC:;
  c->r[9]=c->r[4]|c->r[4]; // 801000EC
  c->r[10]=c->r[4]|c->r[4]; // 801000F0
  c->r[11]=c->r[4]|c->r[4]; // 801000F4
  c->r[7]=c->r[1]+0x00000008u; // 801000F8
  c->r[8]=c->r[1]+0x0000002Cu; // 801000FC
  c->r[12]=c->r[1]+0x00000014u; // 80100100
  c->ctr=c->r[30]; // 80100104
L_80100108:;
  c->r[26]=R32(c->r[4]+0x00000138u); // 80100108
  cmps(c,0,(int32_t)c->r[26],0); // 8010010C
  if (crb(c,2)) { goto L_80100148; } // 80100110
  c->r[27]=R32(c->r[7]+0x00000000u); // 80100114
  c->r[28]=R32(c->r[8]+0x00000000u); // 80100118
  c->r[26]=R32(c->r[27]+0x00000000u); // 8010011C
  c->r[27]=c->r[27]+0x00000004u; // 80100120
  c->r[28]=R32(c->r[28]+0x00000000u); // 80100124
  W32(c->r[1]+0x00000038u,c->r[0]); // 80100128
  c->r[26]=c->r[28]+c->r[26]; // 8010012C
  c->r[26]=c->r[26]^0x80000000u; // 80100130
  W32(c->r[7]+0x00000000u,c->r[27]); // 80100134
  W32(c->r[1]+0x0000003Cu,c->r[26]); // 80100138
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 8010013C
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 80100140
  goto L_80100164; // 80100144
L_80100148:;
  c->r[26]=R32(c->r[8]+0x00000000u); // 80100148
  W32(c->r[1]+0x00000040u,c->r[0]); // 8010014C
  c->r[26]=R32(c->r[26]+0x00000000u); // 80100150
  c->r[26]=c->r[26]^0x80000000u; // 80100154
  W32(c->r[1]+0x00000044u,c->r[26]); // 80100158
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 8010015C
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 80100160
L_80100164:;
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 80100164
  c->r[27]=R32(c->r[4]+0x00000010u); // 80100168
  c->r[26]=R32(c->r[4]+0x00000014u); // 8010016C
  c->r[28]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80100170
  c->r[25]=R32(c->r[9]+0x00000000u); // 80100174
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80100178
  {uint32_t ea=c->r[4]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 8010017C
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80100180
  {uint32_t ea=c->r[25]+c->r[28]; c->f[8]=c->ps1[8]=RF32(ea);} // 80100184
  {uint32_t ea=c->r[4]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 80100188
  {uint32_t ea=c->r[25]+c->r[27]; c->f[2]=c->ps1[2]=RF32(ea);} // 8010018C
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 80100190
  {uint32_t ea=c->r[4]+0x00000028u; c->f[10]=c->ps1[10]=RF32(ea);} // 80100194
  {uint32_t ea=c->r[25]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 80100198
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 8010019C
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[11]);} // 801001A0
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[9]); // 801001A4
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 801001A8
  c->r[27]=R32(c->r[4]+0x0000003Cu); // 801001AC
  cmps(c,0,(int32_t)c->r[27],0); // 801001B0
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801001B4
  if (crb(c,2)) { goto L_801001D4; } // 801001B8
  c->r[27]=R32(c->r[4]+0x00000038u); // 801001BC
  c->r[28]=R32(c->r[9]+0x0000002Cu); // 801001C0
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801001C4
  {uint32_t ea=c->r[28]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801001C8
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[11]);} // 801001CC
  goto L_801001D8; // 801001D0
L_801001D4:;
  c->f[9]=c->f[11]; // 801001D4
L_801001D8:;
  c->r[27]=R32(c->r[4]+0x00000068u); // 801001D8
  c->r[25]=R32(c->r[10]+0x00000044u); // 801001DC
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801001E0
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801001E4
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801001E8
  {uint32_t ea=c->r[2]+0xFFFF8C4Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 801001EC
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801001F0
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801001F4
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801001F8
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 801001FC
  c->r[27]=R32(c->r[4]+0x0000006Cu); // 80100200
  c->r[26]=R32(c->r[10]+0x00000048u); // 80100204
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80100208
  {uint32_t ea=c->r[4]+0x00000090u; c->f[7]=c->ps1[7]=RF32(ea);} // 8010020C
  {uint32_t ea=c->r[26]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 80100210
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 80100214
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 80100218
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 8010021C
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 80100220
  c->r[27]=R32(c->r[4]+0x00000070u); // 80100224
  c->r[28]=R32(c->r[10]+0x0000004Cu); // 80100228
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8010022C
  {uint32_t ea=c->r[4]+0x00000094u; c->f[7]=c->ps1[7]=RF32(ea);} // 80100230
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 80100234
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 80100238
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 8010023C
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 80100240
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 80100244
  c->r[27]=R32(c->r[4]+0x000000B0u); // 80100248
  c->r[25]=R32(c->r[11]+0x00000098u); // 8010024C
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80100250
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 80100254
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 80100258
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[7]); // 8010025C
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 80100260
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 80100264
  c->r[27]=R32(c->r[4]+0x000000B4u); // 80100268
  c->r[26]=R32(c->r[11]+0x0000009Cu); // 8010026C
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[7]); // 80100270
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80100274
  {uint32_t ea=c->r[26]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 80100278
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[3]); // 8010027C
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 80100280
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[3]); // 80100284
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 80100288
  {uint32_t ea=c->r[9]+0x000000FCu; c->f[7]=c->ps1[7]=RF32(ea);} // 8010028C
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 80100290
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 80100294
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[8]); // 80100298
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[7]); // 8010029C
  {uint32_t ea=c->r[9]+0x000000FCu; WF32(ea,c->f[9]);} // 801002A0
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801002A4
  c->r[28]=R32(c->r[9]+0x000000C8u); // 801002A8
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801002AC
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801002B0
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801002B4
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801002B8
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 801002BC
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801002C0
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801002C4
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 801002C8
  c->r[27]=c->r[27]+0x00000001u; // 801002CC
  W32(c->r[9]+0x000000D4u,c->r[27]); // 801002D0
  c->r[28]=R32(c->r[9]+0x000000E0u); // 801002D4
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[7]);} // 801002D8
  cmpu(c,0,c->r[27],c->r[28]); // 801002DC
  if (crb(c,0)) { goto L_801002E8; } // 801002E0
  W32(c->r[9]+0x000000D4u,c->r[29]); // 801002E4
L_801002E8:;
  {uint32_t ea=c->r[12]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801002E8
  c->r[7]=c->r[7]+0x00000004u; // 801002EC
  c->r[8]=c->r[8]+0x00000004u; // 801002F0
  c->r[9]=c->r[9]+0x00000004u; // 801002F4
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[5]); // 801002F8
  c->r[10]=c->r[10]+0x0000000Cu; // 801002FC
  c->r[11]=c->r[11]+0x00000008u; // 80100300
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 80100304
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[2]);} // 80100308
  c->r[12]=c->r[12]+0x00000004u; // 8010030C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80100108; } // 80100310
  {uint32_t ea=c->r[1]+0x00000018u; c->f[12]=c->ps1[12]=RF32(ea);} // 80100314
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 80100318
  {uint32_t ea=c->r[1]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 8010031C
  c->f[2]=c->ps1[2]=S(c->f[12]+c->f[11]); // 80100320
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 80100324
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[11]); // 80100328
  c->r[8]=R32(c->r[1]+0x00000034u); // 8010032C
  c->r[11]=c->r[12]+0x00000004u; // 80100330
  c->r[10]=R32(c->r[1]+0x00000030u); // 80100334
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[6]); // 80100338
  c->r[7]=c->r[8]+0x00000004u; // 8010033C
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[6]); // 80100340
  c->r[9]=c->r[10]+0x00000004u; // 80100344
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 80100348
  c->f[13]=c->ps1[13]=S(c->f[10]+c->f[12]); // 8010034C
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 80100350
  W32(c->r[1]+0x0000002Cu,c->r[11]); // 80100354
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 80100358
  c->f[7]=c->ps1[7]=S(c->f[13]*c->f[6]); // 8010035C
  W32(c->r[1]+0x00000034u,c->r[7]); // 80100360
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 80100364
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[9]);} // 80100368
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[7]); // 8010036C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80100370
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[8]);} // 80100374
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[7]);} // 80100378
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 8010037C
  c->r[11]=R32(c->r[1]+0x00000044u); // 80100380
  W32(c->r[1]+0x00000030u,c->r[9]); // 80100384
  W32(c->r[12]+0x00000000u,c->r[11]); // 80100388
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010038C
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 80100390
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80100394
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 80100398
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 8010039C
  W32(c->r[10]+0x00000000u,c->r[7]); // 801003A0
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801003A4
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801003A8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801003AC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801003B0
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801003B4
  W32(c->r[8]+0x00000000u,c->r[7]); // 801003B8
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801003BC
  cmps(c,0,(int32_t)c->r[7],0); // 801003C0
  if (crb(c,2)) { goto L_8010041C; } // 801003C4
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801003C8
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801003CC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801003D0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801003D4
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801003D8
  W32(c->r[3]+0x00000000u,c->r[7]); // 801003DC
  c->r[3]=c->r[3]+0x00000004u; // 801003E0
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801003E4
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801003E8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801003EC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 801003F0
  c->r[7]=R32(c->r[1]+0x00000044u); // 801003F4
  W32(c->r[5]+0x00000000u,c->r[7]); // 801003F8
  c->r[5]=c->r[5]+0x00000004u; // 801003FC
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 80100400
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 80100404
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80100408
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 8010040C
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 80100410
  W32(c->r[6]+0x00000000u,c->r[7]); // 80100414
  c->r[6]=c->r[6]+0x00000004u; // 80100418
L_8010041C:;
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 8010041C
  c->r[8]=c->r[7]+0x00000001u; // 80100420
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 80100424
  c->r[7]=R32(c->r[4]+0x00000018u); // 80100428
  cmpu(c,0,c->r[8],c->r[7]); // 8010042C
  if (crb(c,0)) { goto L_80100438; } // 80100430
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 80100434
L_80100438:;
  c->r[7]=R32(c->r[4]+0x00000010u); // 80100438
  c->r[8]=c->r[7]+0x00000001u; // 8010043C
  W32(c->r[4]+0x00000010u,c->r[8]); // 80100440
  c->r[7]=R32(c->r[4]+0x00000018u); // 80100444
  cmpu(c,0,c->r[8],c->r[7]); // 80100448
  if (crb(c,0)) { goto L_80100454; } // 8010044C
  W32(c->r[4]+0x00000010u,c->r[29]); // 80100450
L_80100454:;
  c->r[7]=R32(c->r[4]+0x00000014u); // 80100454
  c->r[9]=c->r[4]+0x00000008u; // 80100458
  c->r[8]=c->r[7]+0x00000001u; // 8010045C
  W32(c->r[4]+0x00000014u,c->r[8]); // 80100460
  c->r[7]=R32(c->r[4]+0x00000018u); // 80100464
  cmpu(c,0,c->r[8],c->r[7]); // 80100468
  if (crb(c,0)) { goto L_80100474; } // 8010046C
  W32(c->r[9]+0x0000000Cu,c->r[29]); // 80100470
L_80100474:;
  c->r[8]=R32(c->r[4]+0x0000003Cu); // 80100474
  cmps(c,0,(int32_t)c->r[8],0); // 80100478
  if (crb(c,2)) { goto L_80100498; } // 8010047C
  c->r[7]=R32(c->r[4]+0x00000038u); // 80100480
  c->r[7]=c->r[7]+0x00000001u; // 80100484
  cmpu(c,0,c->r[7],c->r[8]); // 80100488
  W32(c->r[4]+0x00000038u,c->r[7]); // 8010048C
  if (crb(c,0)) { goto L_80100498; } // 80100490
  W32(c->r[4]+0x00000038u,c->r[29]); // 80100494
L_80100498:;
  c->r[7]=R32(c->r[4]+0x00000068u); // 80100498
  c->r[8]=c->r[7]+0x00000001u; // 8010049C
  W32(c->r[4]+0x00000068u,c->r[8]); // 801004A0
  c->r[7]=R32(c->r[4]+0x00000074u); // 801004A4
  cmpu(c,0,c->r[8],c->r[7]); // 801004A8
  if (crb(c,0)) { goto L_801004B4; } // 801004AC
  W32(c->r[4]+0x00000068u,c->r[29]); // 801004B0
L_801004B4:;
  c->r[7]=R32(c->r[4]+0x0000006Cu); // 801004B4
  c->r[8]=c->r[7]+0x00000001u; // 801004B8
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 801004BC
  c->r[7]=R32(c->r[4]+0x00000078u); // 801004C0
  cmpu(c,0,c->r[8],c->r[7]); // 801004C4
  if (crb(c,0)) { goto L_801004D0; } // 801004C8
  W32(c->r[4]+0x0000006Cu,c->r[29]); // 801004CC
L_801004D0:;
  c->r[7]=R32(c->r[4]+0x00000070u); // 801004D0
  c->r[9]=c->r[4]+0x00000008u; // 801004D4
  c->r[8]=c->r[7]+0x00000001u; // 801004D8
  W32(c->r[4]+0x00000070u,c->r[8]); // 801004DC
  c->r[7]=R32(c->r[4]+0x0000007Cu); // 801004E0
  cmpu(c,0,c->r[8],c->r[7]); // 801004E4
  if (crb(c,0)) { goto L_801004F0; } // 801004E8
  W32(c->r[9]+0x00000068u,c->r[29]); // 801004EC
L_801004F0:;
  c->r[7]=R32(c->r[4]+0x000000B0u); // 801004F0
  c->r[8]=c->r[7]+0x00000001u; // 801004F4
  W32(c->r[4]+0x000000B0u,c->r[8]); // 801004F8
  c->r[7]=R32(c->r[4]+0x000000B8u); // 801004FC
  cmpu(c,0,c->r[8],c->r[7]); // 80100500
  if (crb(c,0)) { goto L_8010050C; } // 80100504
  W32(c->r[4]+0x000000B0u,c->r[29]); // 80100508
L_8010050C:;
  c->r[7]=R32(c->r[4]+0x000000B4u); // 8010050C
  c->r[8]=c->r[7]+0x00000001u; // 80100510
  W32(c->r[4]+0x000000B4u,c->r[8]); // 80100514
  c->r[7]=R32(c->r[4]+0x000000BCu); // 80100518
  cmpu(c,0,c->r[8],c->r[7]); // 8010051C
  if (crb(c,0)) { goto L_80100528; } // 80100520
  W32(c->r[4]+0x000000B4u,c->r[29]); // 80100524
L_80100528:;
  c->r[31]=c->r[31]+0x00000001u; // 80100528
  cmpu(c,0,c->r[31],0x00000060u); // 8010052C
  if (crb(c,0)) { IRQCHK(c); goto L_801000EC; } // 80100530
L_80100534:;
  c->r[11]=c->r[1]+0x00000070u; // 80100534
  c->lr=0x8010053Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80100538
  c->r[0]=R32(c->r[1]+0x00000074u); // 8010053C
  c->lr=c->r[0]; // 80100540
  c->r[1]=c->r[1]+0x00000070u; // 80100544
  return; // 80100548
}

// __AllocDelayLine
void f_8010054C(Ctx* __restrict c) {
  trace_call(0x8010054Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010054C
  c->r[0]=c->lr; // 80100550
  W32(c->r[1]+0x00000034u,c->r[0]); // 80100554
  c->r[11]=c->r[1]+0x00000030u; // 80100558
  c->lr=0x80100560u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010055C
  c->r[23]=c->r[3]|c->r[3]; // 80100560
  c->r[24]=0u+0x00000000u; // 80100564
  c->r[30]=c->r[23]|c->r[23]; // 80100568
  c->r[31]=0u+0x00000000u; // 8010056C
  c->r[29]=c->r[23]|c->r[23]; // 80100570
  c->r[28]=c->r[23]|c->r[23]; // 80100574
L_80100578:;
  c->r[0]=R32(c->r[23]+0x0000001Cu); // 80100578
  c->r[12]=R32(c->r[13]+0xFFFF8BA8u); // 8010057C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80100580
  c->ctr=c->r[12]; // 80100584
  if (true) { c->lr=0x8010058Cu; dispatch(c,c->ctr); } // 80100588
  cmps(c,0,(int32_t)c->r[3],0); // 8010058C
  W32(c->r[30]+0x00000000u,c->r[3]); // 80100590
  if (!crb(c,2)) { goto L_801005A0; } // 80100594
  c->r[3]=0u+0x00000000u; // 80100598
  goto L_801006A8; // 8010059C
L_801005A0:;
  c->r[0]=R32(c->r[23]+0x00000040u); // 801005A0
  cmps(c,0,(int32_t)c->r[0],0); // 801005A4
  if (crb(c,2)) { goto L_801005D0; } // 801005A8
  c->r[12]=R32(c->r[13]+0xFFFF8BA8u); // 801005AC
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801005B0
  c->ctr=c->r[12]; // 801005B4
  if (true) { c->lr=0x801005BCu; dispatch(c,c->ctr); } // 801005B8
  cmps(c,0,(int32_t)c->r[3],0); // 801005BC
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 801005C0
  if (!crb(c,2)) { goto L_801005D4; } // 801005C4
  c->r[3]=0u+0x00000000u; // 801005C8
  goto L_801006A8; // 801005CC
L_801005D0:;
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801005D0
L_801005D4:;
  c->r[26]=c->r[23]|c->r[23]; // 801005D4
  c->r[27]=c->r[29]|c->r[29]; // 801005D8
  c->r[25]=0u+0x00000000u; // 801005DC
L_801005E0:;
  c->r[0]=R32(c->r[26]+0x00000080u); // 801005E0
  c->r[12]=R32(c->r[13]+0xFFFF8BA8u); // 801005E4
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801005E8
  c->ctr=c->r[12]; // 801005EC
  if (true) { c->lr=0x801005F4u; dispatch(c,c->ctr); } // 801005F0
  cmps(c,0,(int32_t)c->r[3],0); // 801005F4
  W32(c->r[27]+0x00000044u,c->r[3]); // 801005F8
  if (!crb(c,2)) { goto L_80100608; } // 801005FC
  c->r[3]=0u+0x00000000u; // 80100600
  goto L_801006A8; // 80100604
L_80100608:;
  c->r[25]=c->r[25]+0x00000001u; // 80100608
  c->r[27]=c->r[27]+0x00000004u; // 8010060C
  cmpu(c,0,c->r[25],0x00000003u); // 80100610
  c->r[26]=c->r[26]+0x00000004u; // 80100614
  if (crb(c,0)) { IRQCHK(c); goto L_801005E0; } // 80100618
  c->r[27]=c->r[23]|c->r[23]; // 8010061C
  c->r[26]=c->r[28]|c->r[28]; // 80100620
  c->r[25]=0u+0x00000000u; // 80100624
L_80100628:;
  c->r[0]=R32(c->r[27]+0x000000C0u); // 80100628
  c->r[12]=R32(c->r[13]+0xFFFF8BA8u); // 8010062C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80100630
  c->ctr=c->r[12]; // 80100634
  if (true) { c->lr=0x8010063Cu; dispatch(c,c->ctr); } // 80100638
  cmps(c,0,(int32_t)c->r[3],0); // 8010063C
  W32(c->r[26]+0x00000098u,c->r[3]); // 80100640
  if (!crb(c,2)) { goto L_80100650; } // 80100644
  c->r[3]=0u+0x00000000u; // 80100648
  goto L_801006A8; // 8010064C
L_80100650:;
  c->r[25]=c->r[25]+0x00000001u; // 80100650
  c->r[26]=c->r[26]+0x00000004u; // 80100654
  cmpu(c,0,c->r[25],0x00000002u); // 80100658
  c->r[27]=c->r[27]+0x00000004u; // 8010065C
  if (crb(c,0)) { IRQCHK(c); goto L_80100628; } // 80100660
  c->r[0]=R32(c->r[30]+0x000000ECu); // 80100664
  c->r[12]=R32(c->r[13]+0xFFFF8BA8u); // 80100668
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8010066C
  c->ctr=c->r[12]; // 80100670
  if (true) { c->lr=0x80100678u; dispatch(c,c->ctr); } // 80100674
  cmps(c,0,(int32_t)c->r[3],0); // 80100678
  W32(c->r[30]+0x000000C8u,c->r[3]); // 8010067C
  if (!crb(c,2)) { goto L_8010068C; } // 80100680
  c->r[3]=0u+0x00000000u; // 80100684
  goto L_801006A8; // 80100688
L_8010068C:;
  c->r[24]=c->r[24]+0x00000001u; // 8010068C
  c->r[29]=c->r[29]+0x0000000Cu; // 80100690
  cmpu(c,0,c->r[24],0x00000003u); // 80100694
  c->r[28]=c->r[28]+0x00000008u; // 80100698
  c->r[30]=c->r[30]+0x00000004u; // 8010069C
  if (crb(c,0)) { IRQCHK(c); goto L_80100578; } // 801006A0
  c->r[3]=0u+0x00000001u; // 801006A4
L_801006A8:;
  c->r[11]=c->r[1]+0x00000030u; // 801006A8
  c->lr=0x801006B0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801006AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801006B0
  c->lr=c->r[0]; // 801006B4
  c->r[1]=c->r[1]+0x00000030u; // 801006B8
  return; // 801006BC
}

// __BzeroDelayLines
void f_801006C0(Ctx* __restrict c) {
  trace_call(0x801006C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801006C0
  c->r[0]=c->lr; // 801006C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801006C8
  c->r[11]=c->r[1]+0x00000030u; // 801006CC
  c->lr=0x801006D4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801006D0
  c->r[24]=c->r[3]|c->r[3]; // 801006D4
  c->r[25]=0u+0x00000000u; // 801006D8
  c->r[31]=c->r[24]|c->r[24]; // 801006DC
  c->r[30]=c->r[24]|c->r[24]; // 801006E0
  c->r[29]=c->r[24]|c->r[24]; // 801006E4
L_801006E8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801006E8
  cmps(c,0,(int32_t)c->r[3],0); // 801006EC
  if (crb(c,2)) { goto L_80100704; } // 801006F0
  c->r[0]=R32(c->r[24]+0x0000001Cu); // 801006F4
  c->r[4]=0u+0x00000000u; // 801006F8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801006FC
  c->lr=0x80100704u; f_8000443C(c); // 80100700
L_80100704:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 80100704
  cmps(c,0,(int32_t)c->r[3],0); // 80100708
  if (crb(c,2)) { goto L_80100720; } // 8010070C
  c->r[0]=R32(c->r[24]+0x00000040u); // 80100710
  c->r[4]=0u+0x00000000u; // 80100714
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80100718
  c->lr=0x80100720u; f_8000443C(c); // 8010071C
L_80100720:;
  c->r[27]=c->r[30]|c->r[30]; // 80100720
  c->r[28]=c->r[24]|c->r[24]; // 80100724
  c->r[26]=0u+0x00000000u; // 80100728
L_8010072C:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 8010072C
  cmps(c,0,(int32_t)c->r[3],0); // 80100730
  if (crb(c,2)) { goto L_80100748; } // 80100734
  c->r[0]=R32(c->r[28]+0x00000080u); // 80100738
  c->r[4]=0u+0x00000000u; // 8010073C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80100740
  c->lr=0x80100748u; f_8000443C(c); // 80100744
L_80100748:;
  c->r[26]=c->r[26]+0x00000001u; // 80100748
  c->r[28]=c->r[28]+0x00000004u; // 8010074C
  cmpu(c,0,c->r[26],0x00000003u); // 80100750
  c->r[27]=c->r[27]+0x00000004u; // 80100754
  if (crb(c,0)) { IRQCHK(c); goto L_8010072C; } // 80100758
  c->r[28]=c->r[29]|c->r[29]; // 8010075C
  c->r[27]=c->r[24]|c->r[24]; // 80100760
  c->r[26]=0u+0x00000000u; // 80100764
L_80100768:;
  c->r[3]=R32(c->r[28]+0x00000098u); // 80100768
  cmps(c,0,(int32_t)c->r[3],0); // 8010076C
  if (crb(c,2)) { goto L_80100784; } // 80100770
  c->r[0]=R32(c->r[27]+0x000000C0u); // 80100774
  c->r[4]=0u+0x00000000u; // 80100778
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8010077C
  c->lr=0x80100784u; f_8000443C(c); // 80100780
L_80100784:;
  c->r[26]=c->r[26]+0x00000001u; // 80100784
  c->r[27]=c->r[27]+0x00000004u; // 80100788
  cmpu(c,0,c->r[26],0x00000002u); // 8010078C
  c->r[28]=c->r[28]+0x00000004u; // 80100790
  if (crb(c,0)) { IRQCHK(c); goto L_80100768; } // 80100794
  c->r[3]=R32(c->r[31]+0x000000C8u); // 80100798
  cmps(c,0,(int32_t)c->r[3],0); // 8010079C
  if (crb(c,2)) { goto L_801007B4; } // 801007A0
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801007A4
  c->r[4]=0u+0x00000000u; // 801007A8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801007AC
  c->lr=0x801007B4u; f_8000443C(c); // 801007B0
L_801007B4:;
  c->r[25]=c->r[25]+0x00000001u; // 801007B4
  c->r[30]=c->r[30]+0x0000000Cu; // 801007B8
  cmpu(c,0,c->r[25],0x00000003u); // 801007BC
  c->r[29]=c->r[29]+0x00000008u; // 801007C0
  c->r[31]=c->r[31]+0x00000004u; // 801007C4
  if (crb(c,0)) { IRQCHK(c); goto L_801006E8; } // 801007C8
  c->r[11]=c->r[1]+0x00000030u; // 801007CC
  c->lr=0x801007D4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801007D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801007D4
  c->lr=c->r[0]; // 801007D8
  c->r[1]=c->r[1]+0x00000030u; // 801007DC
  return; // 801007E0
}

// __FreeDelayLine
void f_801007E4(Ctx* __restrict c) {
  trace_call(0x801007E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801007E4
  c->r[0]=c->lr; // 801007E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801007EC
  c->r[11]=c->r[1]+0x00000030u; // 801007F0
  c->lr=0x801007F8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801007F4
  c->r[25]=0u+0x00000000u; // 801007F8
  c->r[30]=c->r[3]|c->r[3]; // 801007FC
  c->r[31]=0u+0x00000000u; // 80100800
  c->r[29]=c->r[3]|c->r[3]; // 80100804
  c->r[28]=c->r[3]|c->r[3]; // 80100808
L_8010080C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8010080C
  cmps(c,0,(int32_t)c->r[3],0); // 80100810
  if (crb(c,2)) { goto L_80100828; } // 80100814
  c->r[12]=R32(c->r[13]+0xFFFF8BACu); // 80100818
  c->ctr=c->r[12]; // 8010081C
  if (true) { c->lr=0x80100824u; dispatch(c,c->ctr); } // 80100820
  W32(c->r[30]+0x00000000u,c->r[31]); // 80100824
L_80100828:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 80100828
  cmps(c,0,(int32_t)c->r[3],0); // 8010082C
  if (crb(c,2)) { goto L_80100844; } // 80100830
  c->r[12]=R32(c->r[13]+0xFFFF8BACu); // 80100834
  c->ctr=c->r[12]; // 80100838
  if (true) { c->lr=0x80100840u; dispatch(c,c->ctr); } // 8010083C
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 80100840
L_80100844:;
  c->r[27]=c->r[29]|c->r[29]; // 80100844
  c->r[26]=0u+0x00000000u; // 80100848
L_8010084C:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 8010084C
  cmps(c,0,(int32_t)c->r[3],0); // 80100850
  if (crb(c,2)) { goto L_80100868; } // 80100854
  c->r[12]=R32(c->r[13]+0xFFFF8BACu); // 80100858
  c->ctr=c->r[12]; // 8010085C
  if (true) { c->lr=0x80100864u; dispatch(c,c->ctr); } // 80100860
  W32(c->r[27]+0x00000044u,c->r[31]); // 80100864
L_80100868:;
  c->r[26]=c->r[26]+0x00000001u; // 80100868
  c->r[27]=c->r[27]+0x00000004u; // 8010086C
  cmpu(c,0,c->r[26],0x00000003u); // 80100870
  if (crb(c,0)) { IRQCHK(c); goto L_8010084C; } // 80100874
  c->r[27]=c->r[28]|c->r[28]; // 80100878
  c->r[26]=0u+0x00000000u; // 8010087C
L_80100880:;
  c->r[3]=R32(c->r[27]+0x00000098u); // 80100880
  cmps(c,0,(int32_t)c->r[3],0); // 80100884
  if (crb(c,2)) { goto L_8010089C; } // 80100888
  c->r[12]=R32(c->r[13]+0xFFFF8BACu); // 8010088C
  c->ctr=c->r[12]; // 80100890
  if (true) { c->lr=0x80100898u; dispatch(c,c->ctr); } // 80100894
  W32(c->r[27]+0x00000098u,c->r[31]); // 80100898
L_8010089C:;
  c->r[26]=c->r[26]+0x00000001u; // 8010089C
  c->r[27]=c->r[27]+0x00000004u; // 801008A0
  cmpu(c,0,c->r[26],0x00000002u); // 801008A4
  if (crb(c,0)) { IRQCHK(c); goto L_80100880; } // 801008A8
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801008AC
  cmps(c,0,(int32_t)c->r[3],0); // 801008B0
  if (crb(c,2)) { goto L_801008C8; } // 801008B4
  c->r[12]=R32(c->r[13]+0xFFFF8BACu); // 801008B8
  c->ctr=c->r[12]; // 801008BC
  if (true) { c->lr=0x801008C4u; dispatch(c,c->ctr); } // 801008C0
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801008C4
L_801008C8:;
  c->r[25]=c->r[25]+0x00000001u; // 801008C8
  c->r[29]=c->r[29]+0x0000000Cu; // 801008CC
  cmpu(c,0,c->r[25],0x00000003u); // 801008D0
  c->r[28]=c->r[28]+0x00000008u; // 801008D4
  c->r[30]=c->r[30]+0x00000004u; // 801008D8
  if (crb(c,0)) { IRQCHK(c); goto L_8010080C; } // 801008DC
  c->r[11]=c->r[1]+0x00000030u; // 801008E0
  c->lr=0x801008E8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801008E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801008E8
  c->lr=c->r[0]; // 801008EC
  c->r[1]=c->r[1]+0x00000030u; // 801008F0
  return; // 801008F4
}

// __InitParams
void f_801008F8(Ctx* __restrict c) {
  trace_call(0x801008F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801008F8
  c->r[0]=c->lr; // 801008FC
  W32(c->r[1]+0x00000064u,c->r[0]); // 80100900
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80100904
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80100908
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8010090C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80100910
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80100914
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80100918
  c->r[11]=c->r[1]+0x00000030u; // 8010091C
  c->lr=0x80100924u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80100920
  c->r[4]=R32(c->r[3]+0x00000110u); // 80100924
  c->r[31]=0u+0x80290000u; // 80100928
  c->r[30]=c->r[3]|c->r[3]; // 8010092C
  cmpu(c,0,c->r[4],0x00000008u); // 80100930
  c->r[31]=c->r[31]+0x00005400u; // 80100934
  if (crb(c,0)) { goto L_80100944; } // 80100938
  c->r[3]=0u+0x00000000u; // 8010093C
  goto L_80100BEC; // 80100940
L_80100944:;
  {uint32_t ea=c->r[3]+0x00000118u; c->f[4]=c->ps1[4]=RF32(ea);} // 80100944
  {uint32_t ea=c->r[2]+0xFFFF8C4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80100948
  fcmp(c,0,c->f[4],c->f[2]); // 8010094C
  if (crb(c,0)) { goto L_80100960; } // 80100950
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100954
  fcmp(c,0,c->f[4],c->f[0]); // 80100958
  if (!crb(c,1)) { goto L_80100968; } // 8010095C
L_80100960:;
  c->r[3]=0u+0x00000000u; // 80100960
  goto L_80100BEC; // 80100964
L_80100968:;
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 80100968
  cmpu(c,0,c->r[0],0x00000006u); // 8010096C
  if (crb(c,0)) { goto L_8010097C; } // 80100970
  c->r[3]=0u+0x00000000u; // 80100974
  goto L_80100BEC; // 80100978
L_8010097C:;
  {uint32_t ea=c->r[3]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010097C
  fcmp(c,0,c->f[0],c->f[2]); // 80100980
  if (!crb(c,0)) { goto L_80100990; } // 80100984
  c->r[3]=0u+0x00000000u; // 80100988
  goto L_80100BEC; // 8010098C
L_80100990:;
  {uint32_t ea=c->r[3]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100990
  fcmp(c,0,c->f[0],c->f[2]); // 80100994
  if (crb(c,0)) { goto L_801009A8; } // 80100998
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010099C
  fcmp(c,0,c->f[0],c->f[1]); // 801009A0
  if (!crb(c,1)) { goto L_801009B0; } // 801009A4
L_801009A8:;
  c->r[3]=0u+0x00000000u; // 801009A8
  goto L_80100BEC; // 801009AC
L_801009B0:;
  {uint32_t ea=c->r[3]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 801009B0
  fcmp(c,0,c->f[0],c->f[2]); // 801009B4
  if (crb(c,0)) { goto L_801009C4; } // 801009B8
  fcmp(c,0,c->f[0],c->f[1]); // 801009BC
  if (!crb(c,1)) { goto L_801009CC; } // 801009C0
L_801009C4:;
  c->r[3]=0u+0x00000000u; // 801009C4
  goto L_80100BEC; // 801009C8
L_801009CC:;
  {uint32_t ea=c->r[3]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801009CC
  fcmp(c,0,c->f[0],c->f[2]); // 801009D0
  if (crb(c,0)) { goto L_801009E0; } // 801009D4
  fcmp(c,0,c->f[0],c->f[1]); // 801009D8
  if (!crb(c,1)) { goto L_801009E8; } // 801009DC
L_801009E0:;
  c->r[3]=0u+0x00000000u; // 801009E0
  goto L_80100BEC; // 801009E4
L_801009E8:;
  {uint32_t ea=c->r[3]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 801009E8
  fcmp(c,0,c->f[3],c->f[2]); // 801009EC
  if (crb(c,0)) { goto L_801009FC; } // 801009F0
  fcmp(c,0,c->f[3],c->f[1]); // 801009F4
  if (!crb(c,1)) { goto L_80100A04; } // 801009F8
L_801009FC:;
  c->r[3]=0u+0x00000000u; // 801009FC
  goto L_80100BEC; // 80100A00
L_80100A04:;
  {uint32_t ea=c->r[3]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100A04
  fcmp(c,0,c->f[0],c->f[2]); // 80100A08
  if (crb(c,0)) { goto L_80100A18; } // 80100A0C
  fcmp(c,0,c->f[0],c->f[1]); // 80100A10
  if (!crb(c,1)) { goto L_80100A20; } // 80100A14
L_80100A18:;
  c->r[3]=0u+0x00000000u; // 80100A18
  goto L_80100BEC; // 80100A1C
L_80100A20:;
  {uint32_t ea=c->r[3]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100A20
  fcmp(c,0,c->f[0],c->f[2]); // 80100A24
  if (crb(c,0)) { goto L_80100A34; } // 80100A28
  fcmp(c,0,c->f[0],c->f[1]); // 80100A2C
  if (!crb(c,1)) { goto L_80100A3C; } // 80100A30
L_80100A34:;
  c->r[3]=0u+0x00000000u; // 80100A34
  goto L_80100BEC; // 80100A38
L_80100A3C:;
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100A3C
  fcmp(c,0,c->f[0],c->f[2]); // 80100A40
  if (crb(c,0)) { goto L_80100A50; } // 80100A44
  fcmp(c,0,c->f[0],c->f[1]); // 80100A48
  if (!crb(c,1)) { goto L_80100A58; } // 80100A4C
L_80100A50:;
  c->r[3]=0u+0x00000000u; // 80100A50
  goto L_80100BEC; // 80100A54
L_80100A58:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80100A58
  c->r[9]=c->r[31]+0x00000000u; // 80100A5C
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100A60
  c->r[5]=c->r[31]+0x00000060u; // 80100A64
  {uint32_t ea=c->r[2]+0xFFFF8C54u; c->f[2]=c->ps1[2]=RF32(ea);} // 80100A68
  c->r[27]=0u+0x00000000u; // 80100A6C
  c->r[7]=c->r[9]+c->r[8]; // 80100A70
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 80100A74
  c->r[6]=R32(c->r[7]+0x00000008u); // 80100A78
  c->r[4]=c->r[5]+c->r[8]; // 80100A7C
  W32(c->r[3]+0x00000018u,c->r[6]); // 80100A80
  c->r[0]=R32(c->r[9]+c->r[8]); // 80100A84
  c->r[0]=c->r[6]-c->r[0]; // 80100A88
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80100A8C
  {uint32_t ea=c->r[5]+c->r[8]; c->f[0]=c->ps1[0]=RF32(ea);} // 80100A90
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80100A94
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80100A98
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80100A9C
  c->r[0]=R32(c->r[7]+0x00000004u); // 80100AA0
  c->r[0]=c->r[6]-c->r[0]; // 80100AA4
  W32(c->r[3]+0x00000010u,c->r[0]); // 80100AA8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100AAC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80100AB0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80100AB4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80100AB8
  c->r[0]=R32(c->r[7]+0x00000008u); // 80100ABC
  c->r[0]=c->r[6]-c->r[0]; // 80100AC0
  W32(c->r[3]+0x00000014u,c->r[0]); // 80100AC4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100AC8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80100ACC
  W32(c->r[3]+0x00000038u,c->r[27]); // 80100AD0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80100AD4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80100AD8
  c->lr=0x80100AE0u; f_80109E10(c); // 80100ADC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 80100AE0
  c->r[26]=c->r[30]|c->r[30]; // 80100AE4
  {uint32_t ea=c->r[2]+0xFFFF8C80u; c->f[29]=RF64(ea);} // 80100AE8
  c->r[28]=c->r[31]+0x000000C0u; // 80100AEC
  {uint32_t ea=c->r[2]+0xFFFF8C68u; c->f[30]=c->ps1[30]=RF32(ea);} // 80100AF0
  c->r[24]=0u+0x00000000u; // 80100AF4
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[31]=c->ps1[31]=RF32(ea);} // 80100AF8
  c->r[25]=0u+0x00000000u; // 80100AFC
  c->r[29]=0u+0x43300000u; // 80100B00
L_80100B04:;
  W32(c->r[26]+0x00000068u,c->r[27]); // 80100B04
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[1]=RF64(ea);} // 80100B08
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 80100B0C
  W32(c->r[1]+0x00000008u,c->r[29]); // 80100B10
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80100B14
  c->r[0]=c->r[25]+c->r[0]; // 80100B18
  c->r[0]=R32(c->r[28]+c->r[0]); // 80100B1C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80100B20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80100B24
  W32(c->r[26]+0x00000074u,c->r[0]); // 80100B28
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 80100B2C
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100B30
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 80100B34
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80100B38
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 80100B3C
  c->lr=0x80100B44u; f_8011AC3C(c); // 80100B40
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80100B44
  c->r[24]=c->r[24]+0x00000001u; // 80100B48
  cmpu(c,0,c->r[24],0x00000003u); // 80100B4C
  c->r[25]=c->r[25]+0x00000004u; // 80100B50
  {uint32_t ea=c->r[26]+0x0000008Cu; WF32(ea,c->f[0]);} // 80100B54
  c->r[26]=c->r[26]+0x00000004u; // 80100B58
  if (crb(c,0)) { IRQCHK(c); goto L_80100B04; } // 80100B5C
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 80100B60
  c->r[4]=0u+0x00000000u; // 80100B64
  W32(c->r[30]+0x000000B0u,c->r[4]); // 80100B68
  c->r[3]=c->r[31]+0x000000C0u; // 80100B6C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80100B70
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100B74
  c->r[3]=c->r[3]+c->r[0]; // 80100B78
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100B7C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80100B80
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80100B84
  {uint32_t ea=c->r[2]+0xFFFF8C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100B88
  W32(c->r[30]+0x000000B8u,c->r[0]); // 80100B8C
  {uint32_t ea=c->r[30]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 80100B90
  W32(c->r[30]+0x000000B4u,c->r[4]); // 80100B94
  fcmp(c,0,c->f[1],c->f[0]); // 80100B98
  c->r[0]=R32(c->r[3]+0x00000010u); // 80100B9C
  W32(c->r[30]+0x000000BCu,c->r[0]); // 80100BA0
  W32(c->r[30]+0x000000D4u,c->r[4]); // 80100BA4
  c->r[0]=R32(c->r[3]+0x00000014u); // 80100BA8
  W32(c->r[30]+0x000000E0u,c->r[0]); // 80100BAC
  W32(c->r[30]+0x000000D8u,c->r[4]); // 80100BB0
  c->r[0]=R32(c->r[3]+0x00000018u); // 80100BB4
  W32(c->r[30]+0x000000E4u,c->r[0]); // 80100BB8
  W32(c->r[30]+0x000000DCu,c->r[4]); // 80100BBC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80100BC0
  W32(c->r[30]+0x000000E8u,c->r[0]); // 80100BC4
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[2]);} // 80100BC8
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[1]);} // 80100BCC
  if (!crb(c,1)) { goto L_80100BD8; } // 80100BD0
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[0]);} // 80100BD4
L_80100BD8:;
  {uint32_t ea=c->r[2]+0xFFFF8C4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80100BD8
  c->r[3]=0u+0x00000001u; // 80100BDC
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 80100BE0
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[0]);} // 80100BE4
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 80100BE8
L_80100BEC:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80100BEC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80100BF0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80100BF4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80100BF8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80100BFC
  c->r[11]=c->r[1]+0x00000030u; // 80100C00
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80100C04
  c->lr=0x80100C0Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80100C08
  c->r[0]=R32(c->r[1]+0x00000064u); // 80100C0C
  c->lr=c->r[0]; // 80100C10
  c->r[1]=c->r[1]+0x00000060u; // 80100C14
  return; // 80100C18
}

// fn_80100C1C
void f_80100C1C(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 80100C1C
  c->r[3]=R32(c->r[13]+0xFFFF8A78u); // 80100C20
  f_800DFB9C(c); return; // 80100C24
}

// fn_80100C28
void f_80100C28(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 80100C28
  c->r[3]=R32(c->r[13]+0xFFFF8A78u); // 80100C2C
  f_800DFC94(c); return; // 80100C30
}

// AXFXSetHooks
void f_80100C34(Ctx* __restrict c) {
  trace_call(0x80100C34u);
  W32(c->r[13]+0xFFFF8BA8u,c->r[3]); // 80100C34
  W32(c->r[13]+0xFFFF8BACu,c->r[4]); // 80100C38
  return; // 80100C3C
}

// AXFXGetHooks
void f_80100C40(Ctx* __restrict c) {
  trace_call(0x80100C40u);
  c->r[0]=R32(c->r[13]+0xFFFF8BA8u); // 80100C40
  W32(c->r[3]+0x00000000u,c->r[0]); // 80100C44
  c->r[0]=R32(c->r[13]+0xFFFF8BACu); // 80100C48
  W32(c->r[4]+0x00000000u,c->r[0]); // 80100C4C
  return; // 80100C50
}

void hle_DSPCheckMailToDSP(Ctx*);
// DSPCheckMailToDSP
void f_80100C54(Ctx* __restrict c) {
  hle_DSPCheckMailToDSP(c);
}

void hle_DSPCheckMailFromDSP(Ctx*);
// DSPCheckMailFromDSP
void f_80100C64(Ctx* __restrict c) {
  hle_DSPCheckMailFromDSP(c);
}

// DSPReadMailFromDSP
void f_80100C74(Ctx* __restrict c) {
  trace_call(0x80100C74u);
  c->r[3]=0u+0xCC000000u; // 80100C74
  c->r[0]=R16(c->r[3]+0x00005004u); // 80100C78
  c->r[3]=R16(c->r[3]+0x00005006u); // 80100C7C
  c->r[3]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[3]&~0xFFFF0000u); // 80100C80
  return; // 80100C84
}

void hle_DSPSendMailToDSP(Ctx*);
// DSPSendMailToDSP
void f_80100C88(Ctx* __restrict c) {
  hle_DSPSendMailToDSP(c);
}

// DSPInit
void f_80100C9C(Ctx* __restrict c) {
  trace_call(0x80100C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100C9C
  c->r[0]=c->lr; // 80100CA0
  c->r[5]=0u+0x80290000u; // 80100CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100CA8
  c->r[5]=c->r[5]+0x000055A0u; // 80100CAC
  c->r[3]=c->r[5]+0x00000048u; // 80100CB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100CB4
  c->r[4]=c->r[5]+0x00000068u; // 80100CB8
  c->r[5]=c->r[5]+0x00000074u; // 80100CBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80100CC0
  c->lr=0x80100CC8u; f_80100ED0(c); // 80100CC4
  c->r[0]=R32(c->r[13]+0xFFFF99F8u); // 80100CC8
  cmps(c,0,(int32_t)c->r[0],1); // 80100CCC
  if (crb(c,2)) { goto L_80100D48; } // 80100CD0
  c->r[3]=R32(c->r[13]+0xFFFF8BB0u); // 80100CD4
  c->lr=0x80100CDCu; f_800DF258(c); // 80100CD8
  c->lr=0x80100CE0u; f_800E4F54(c); // 80100CDC
  c->r[4]=0u+0x80100000u; // 80100CE0
  c->r[31]=c->r[3]|c->r[3]; // 80100CE4
  c->r[4]=c->r[4]+0x00000F20u; // 80100CE8
  c->r[3]=0u+0x00000007u; // 80100CEC
  c->lr=0x80100CF4u; f_800E4FA0(c); // 80100CF0
  c->r[3]=0u+0x01000000u; // 80100CF4
  c->lr=0x80100CFCu; f_800E5364(c); // 80100CF8
  c->r[7]=0u+0xCC000000u; // 80100CFC
  c->r[3]=0u+0xFFFFFF57u; // 80100D00
  c->r[6]=R16(c->r[7]+0x0000500Au); // 80100D04
  c->r[5]=0u+0xFFFFFF53u; // 80100D08
  c->r[4]=0u+0x00000000u; // 80100D0C
  c->r[0]=0u+0x00000001u; // 80100D10
  c->r[3]=c->r[6]&c->r[3]; // 80100D14
  c->r[3]=c->r[3]|0x00000800u; // 80100D18
  W16(c->r[7]+0x0000500Au,c->r[3]); // 80100D1C
  c->r[3]=c->r[31]|c->r[31]; // 80100D20
  c->r[6]=R16(c->r[7]+0x0000500Au); // 80100D24
  c->r[5]=c->r[6]&c->r[5]; // 80100D28
  W16(c->r[7]+0x0000500Au,c->r[5]); // 80100D2C
  W32(c->r[13]+0xFFFF9A08u,c->r[4]); // 80100D30
  W32(c->r[13]+0xFFFF9A14u,c->r[4]); // 80100D34
  W32(c->r[13]+0xFFFF9A0Cu,c->r[4]); // 80100D38
  W32(c->r[13]+0xFFFF9A10u,c->r[4]); // 80100D3C
  W32(c->r[13]+0xFFFF99F8u,c->r[0]); // 80100D40
  c->lr=0x80100D48u; f_800E4F7C(c); // 80100D44
L_80100D48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100D48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100D4C
  c->lr=c->r[0]; // 80100D50
  c->r[1]=c->r[1]+0x00000010u; // 80100D54
  return; // 80100D58
}

// DSPCheckInit
void f_80100D5C(Ctx* __restrict c) {
  trace_call(0x80100D5Cu);
  c->r[3]=R32(c->r[13]+0xFFFF99F8u); // 80100D5C
  return; // 80100D60
}

// DSPAddTask
void f_80100D64(Ctx* __restrict c) {
  trace_call(0x80100D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100D64
  c->r[0]=c->lr; // 80100D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100D6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100D70
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100D74
  c->r[30]=c->r[3]|c->r[3]; // 80100D78
  c->lr=0x80100D80u; f_800E4F54(c); // 80100D7C
  c->r[31]=c->r[3]|c->r[3]; // 80100D80
  c->r[3]=c->r[30]|c->r[30]; // 80100D84
  c->lr=0x80100D8Cu; f_80101684(c); // 80100D88
  c->r[3]=0u+0x00000000u; // 80100D8C
  c->r[0]=0u+0x00000001u; // 80100D90
  W32(c->r[30]+0x00000000u,c->r[3]); // 80100D94
  c->r[3]=c->r[31]|c->r[31]; // 80100D98
  W32(c->r[30]+0x00000008u,c->r[0]); // 80100D9C
  c->lr=0x80100DA4u; f_800E4F7C(c); // 80100DA0
  c->r[0]=R32(c->r[13]+0xFFFF9A10u); // 80100DA4
  cmpu(c,0,c->r[30],c->r[0]); // 80100DA8
  if (!crb(c,2)) { goto L_80100DB8; } // 80100DAC
  c->r[3]=c->r[30]|c->r[30]; // 80100DB0
  c->lr=0x80100DB8u; f_801014F8(c); // 80100DB4
L_80100DB8:;
  c->r[3]=c->r[30]|c->r[30]; // 80100DB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100DBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100DC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100DC4
  c->lr=c->r[0]; // 80100DC8
  c->r[1]=c->r[1]+0x00000010u; // 80100DCC
  return; // 80100DD0
}

// fn_80100DD4
void f_80100DD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100DD4
  c->r[0]=c->lr; // 80100DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100DE0
  c->r[31]=c->r[3]|c->r[3]; // 80100DE4
  c->lr=0x80100DECu; f_800E4F54(c); // 80100DE8
  c->r[0]=R32(c->r[31]+0x00000008u); // 80100DEC
  c->r[0]=c->r[0]|0x00000002u; // 80100DF0
  W32(c->r[31]+0x00000008u,c->r[0]); // 80100DF4
  c->lr=0x80100DFCu; f_800E4F7C(c); // 80100DF8
  c->r[3]=c->r[31]|c->r[31]; // 80100DFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100E00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100E04
  c->lr=c->r[0]; // 80100E08
  c->r[1]=c->r[1]+0x00000010u; // 80100E0C
  return; // 80100E10
}

void hle_DSPAssertTask(Ctx*);
// DSPAssertTask
void f_80100E14(Ctx* __restrict c) {
  hle_DSPAssertTask(c);
}

// __DSP_debug_printf
void f_80100ED0(Ctx* __restrict c) {
  trace_call(0x80100ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100ED0
  if (!crb(c,6)) { goto L_80100EF8; } // 80100ED4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80100ED8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80100EDC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 80100EE0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 80100EE4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 80100EE8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 80100EEC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 80100EF0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 80100EF4
L_80100EF8:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 80100EF8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80100EFC
  W32(c->r[1]+0x00000010u,c->r[5]); // 80100F00
  W32(c->r[1]+0x00000014u,c->r[6]); // 80100F04
  W32(c->r[1]+0x00000018u,c->r[7]); // 80100F08
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80100F0C
  W32(c->r[1]+0x00000020u,c->r[9]); // 80100F10
  W32(c->r[1]+0x00000024u,c->r[10]); // 80100F14
  c->r[1]=c->r[1]+0x00000070u; // 80100F18
  return; // 80100F1C
}

// __DSPHandler
void f_80100F20(Ctx* __restrict c) {
  trace_call(0x80100F20u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100F20
  c->r[0]=c->lr; // 80100F24
  c->r[6]=0u+0xCC000000u; // 80100F28
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80100F2C
  c->r[0]=0u+0xFFFFFFD7u; // 80100F30
  c->r[3]=c->r[1]+0x00000008u; // 80100F34
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80100F38
  c->r[31]=c->r[4]|c->r[4]; // 80100F3C
  c->r[5]=R16(c->r[6]+0x0000500Au); // 80100F40
  c->r[0]=c->r[5]&c->r[0]; // 80100F44
  c->r[0]=c->r[0]|0x00000080u; // 80100F48
  W16(c->r[6]+0x0000500Au,c->r[0]); // 80100F4C
  c->lr=0x80100F54u; f_800E0DEC(c); // 80100F50
  c->r[3]=c->r[1]+0x00000008u; // 80100F54
  c->lr=0x80100F5Cu; f_800E0BC4(c); // 80100F58
L_80100F5C:;
  c->lr=0x80100F60u; f_80100C64(c); // 80100F5C
  cmps(c,0,(int32_t)c->r[3],0); // 80100F60
  if (crb(c,2)) { IRQCHK(c); goto L_80100F5C; } // 80100F64
  c->lr=0x80100F6Cu; f_80100C74(c); // 80100F68
  c->r[5]=R32(c->r[13]+0xFFFF9A14u); // 80100F6C
  c->r[0]=R32(c->r[5]+0x00000008u); // 80100F70
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80100F74
  if (crb(c,2)) { goto L_80100F90; } // 80100F78
  c->r[0]=c->r[3]+0x232F0000u; // 80100F7C
  cmpu(c,0,c->r[0],0x00000002u); // 80100F80
  if (!crb(c,2)) { goto L_80100F90; } // 80100F84
  c->r[3]=0u+0xDCD10000u; // 80100F88
  c->r[3]=c->r[3]+0x00000003u; // 80100F8C
L_80100F90:;
  c->r[4]=0u+0xDCD10000u; // 80100F90
  c->r[0]=c->r[4]+0x00000002u; // 80100F94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80100F98
  if (crb(c,2)) { goto L_80101010; } // 80100F9C
  if (!crb(c,0)) { goto L_80100FB4; } // 80100FA0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 80100FA4
  if (crb(c,2)) { goto L_80100FC8; } // 80100FA8
  if (!crb(c,0)) { goto L_80100FEC; } // 80100FAC
  goto L_80101330; // 80100FB0
L_80100FB4:;
  c->r[0]=c->r[4]+0x00000004u; // 80100FB4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80100FB8
  if (crb(c,2)) { goto L_80101318; } // 80100FBC
  if (!crb(c,0)) { goto L_80101330; } // 80100FC0
  goto L_80101178; // 80100FC4
L_80100FC8:;
  c->r[0]=0u+0x00000001u; // 80100FC8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80100FCC
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80100FD0
  c->r[12]=R32(c->r[3]+0x00000028u); // 80100FD4
  cmps(c,0,(int32_t)c->r[12],0); // 80100FD8
  if (crb(c,2)) { goto L_80101330; } // 80100FDC
  c->ctr=c->r[12]; // 80100FE0
  if (true) { c->lr=0x80100FE8u; dispatch(c,c->ctr); } // 80100FE4
  goto L_80101330; // 80100FE8
L_80100FEC:;
  c->r[0]=0u+0x00000001u; // 80100FEC
  W32(c->r[5]+0x00000000u,c->r[0]); // 80100FF0
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80100FF4
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 80100FF8
  cmps(c,0,(int32_t)c->r[12],0); // 80100FFC
  if (crb(c,2)) { goto L_80101330; } // 80101000
  c->ctr=c->r[12]; // 80101004
  if (true) { c->lr=0x8010100Cu; dispatch(c,c->ctr); } // 80101008
  goto L_80101330; // 8010100C
L_80101010:;
  c->r[0]=R32(c->r[13]+0xFFFF9A00u); // 80101010
  cmps(c,0,(int32_t)c->r[0],0); // 80101014
  if (crb(c,2)) { goto L_801010B0; } // 80101018
  c->r[0]=R32(c->r[13]+0xFFFF9A04u); // 8010101C
  cmpu(c,0,c->r[5],c->r[0]); // 80101020
  if (!crb(c,2)) { goto L_80101068; } // 80101024
  c->r[3]=0u+0xCDD10000u; // 80101028
  c->r[3]=c->r[3]+0x00000003u; // 8010102C
  c->lr=0x80101034u; f_80100C88(c); // 80101030
L_80101034:;
  c->lr=0x80101038u; f_80100C54(c); // 80101034
  cmps(c,0,(int32_t)c->r[3],0); // 80101038
  if (!crb(c,2)) { IRQCHK(c); goto L_80101034; } // 8010103C
  c->r[0]=0u+0x00000000u; // 80101040
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80101044
  W32(c->r[13]+0xFFFF9A04u,c->r[0]); // 80101048
  W32(c->r[13]+0xFFFF9A00u,c->r[0]); // 8010104C
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 80101050
  cmps(c,0,(int32_t)c->r[12],0); // 80101054
  if (crb(c,2)) { goto L_80101330; } // 80101058
  c->ctr=c->r[12]; // 8010105C
  if (true) { c->lr=0x80101064u; dispatch(c,c->ctr); } // 80101060
  goto L_80101330; // 80101064
L_80101068:;
  c->r[3]=0u+0xCDD10000u; // 80101068
  c->r[3]=c->r[3]+0x00000001u; // 8010106C
  c->lr=0x80101074u; f_80100C88(c); // 80101070
L_80101074:;
  c->lr=0x80101078u; f_80100C54(c); // 80101074
  cmps(c,0,(int32_t)c->r[3],0); // 80101078
  if (!crb(c,2)) { IRQCHK(c); goto L_80101074; } // 8010107C
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80101080
  c->r[4]=R32(c->r[13]+0xFFFF9A04u); // 80101084
  c->lr=0x8010108Cu; f_80101354(c); // 80101088
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 8010108C
  c->r[4]=0u+0x00000002u; // 80101090
  c->r[0]=0u+0x00000000u; // 80101094
  W32(c->r[3]+0x00000000u,c->r[4]); // 80101098
  c->r[3]=R32(c->r[13]+0xFFFF9A04u); // 8010109C
  W32(c->r[13]+0xFFFF9A00u,c->r[0]); // 801010A0
  W32(c->r[13]+0xFFFF9A14u,c->r[3]); // 801010A4
  W32(c->r[13]+0xFFFF9A04u,c->r[0]); // 801010A8
  goto L_80101330; // 801010AC
L_801010B0:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 801010B0
  cmps(c,0,(int32_t)c->r[0],0); // 801010B4
  if (!crb(c,2)) { goto L_80101138; } // 801010B8
  c->r[0]=R32(c->r[13]+0xFFFF9A10u); // 801010BC
  cmpu(c,0,c->r[5],c->r[0]); // 801010C0
  if (!crb(c,2)) { goto L_801010FC; } // 801010C4
  c->r[3]=0u+0xCDD10000u; // 801010C8
  c->r[3]=c->r[3]+0x00000003u; // 801010CC
  c->lr=0x801010D4u; f_80100C88(c); // 801010D0
L_801010D4:;
  c->lr=0x801010D8u; f_80100C54(c); // 801010D4
  cmps(c,0,(int32_t)c->r[3],0); // 801010D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801010D4; } // 801010DC
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 801010E0
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801010E4
  cmps(c,0,(int32_t)c->r[12],0); // 801010E8
  if (crb(c,2)) { goto L_80101330; } // 801010EC
  c->ctr=c->r[12]; // 801010F0
  if (true) { c->lr=0x801010F8u; dispatch(c,c->ctr); } // 801010F4
  goto L_80101330; // 801010F8
L_801010FC:;
  c->r[3]=0u+0xCDD10000u; // 801010FC
  c->r[3]=c->r[3]+0x00000001u; // 80101100
  c->lr=0x80101108u; f_80100C88(c); // 80101104
L_80101108:;
  c->lr=0x8010110Cu; f_80100C54(c); // 80101108
  cmps(c,0,(int32_t)c->r[3],0); // 8010110C
  if (!crb(c,2)) { IRQCHK(c); goto L_80101108; } // 80101110
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80101114
  c->r[4]=R32(c->r[13]+0xFFFF9A10u); // 80101118
  c->lr=0x80101120u; f_80101354(c); // 8010111C
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80101120
  c->r[0]=0u+0x00000002u; // 80101124
  W32(c->r[3]+0x00000000u,c->r[0]); // 80101128
  c->r[0]=R32(c->r[13]+0xFFFF9A10u); // 8010112C
  W32(c->r[13]+0xFFFF9A14u,c->r[0]); // 80101130
  goto L_80101330; // 80101134
L_80101138:;
  c->r[3]=0u+0xCDD10000u; // 80101138
  c->r[3]=c->r[3]+0x00000001u; // 8010113C
  c->lr=0x80101144u; f_80100C88(c); // 80101140
L_80101144:;
  c->lr=0x80101148u; f_80100C54(c); // 80101144
  cmps(c,0,(int32_t)c->r[3],0); // 80101148
  if (!crb(c,2)) { IRQCHK(c); goto L_80101144; } // 8010114C
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80101150
  c->r[4]=R32(c->r[3]+0x00000038u); // 80101154
  c->lr=0x8010115Cu; f_80101354(c); // 80101158
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 8010115C
  c->r[0]=0u+0x00000002u; // 80101160
  W32(c->r[3]+0x00000000u,c->r[0]); // 80101164
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80101168
  c->r[0]=R32(c->r[3]+0x00000038u); // 8010116C
  W32(c->r[13]+0xFFFF9A14u,c->r[0]); // 80101170
  goto L_80101330; // 80101174
L_80101178:;
  c->r[0]=R32(c->r[13]+0xFFFF9A00u); // 80101178
  cmps(c,0,(int32_t)c->r[0],0); // 8010117C
  if (crb(c,2)) { goto L_801011F8; } // 80101180
  c->r[0]=R32(c->r[13]+0xFFFF9A04u); // 80101184
  cmpu(c,0,c->r[5],c->r[0]); // 80101188
  if (crb(c,2)) { goto L_801011EC; } // 8010118C
  c->r[12]=R32(c->r[5]+0x00000030u); // 80101190
  cmps(c,0,(int32_t)c->r[12],0); // 80101194
  if (crb(c,2)) { goto L_801011A8; } // 80101198
  c->r[3]=c->r[5]|c->r[5]; // 8010119C
  c->ctr=c->r[12]; // 801011A0
  if (true) { c->lr=0x801011A8u; dispatch(c,c->ctr); } // 801011A4
L_801011A8:;
  c->r[3]=0u+0xCDD10000u; // 801011A8
  c->r[3]=c->r[3]+0x00000001u; // 801011AC
  c->lr=0x801011B4u; f_80100C88(c); // 801011B0
L_801011B4:;
  c->lr=0x801011B8u; f_80100C54(c); // 801011B4
  cmps(c,0,(int32_t)c->r[3],0); // 801011B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801011B4; } // 801011BC
  c->r[4]=R32(c->r[13]+0xFFFF9A04u); // 801011C0
  c->r[3]=0u+0x00000000u; // 801011C4
  c->lr=0x801011CCu; f_80101354(c); // 801011C8
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 801011CC
  c->lr=0x801011D4u; f_80101720(c); // 801011D0
  c->r[3]=R32(c->r[13]+0xFFFF9A04u); // 801011D4
  c->r[0]=0u+0x00000000u; // 801011D8
  W32(c->r[13]+0xFFFF9A00u,c->r[0]); // 801011DC
  W32(c->r[13]+0xFFFF9A14u,c->r[3]); // 801011E0
  W32(c->r[13]+0xFFFF9A04u,c->r[0]); // 801011E4
  goto L_80101330; // 801011E8
L_801011EC:;
  c->r[0]=0u+0x00000000u; // 801011EC
  W32(c->r[13]+0xFFFF9A04u,c->r[0]); // 801011F0
  W32(c->r[13]+0xFFFF9A00u,c->r[0]); // 801011F4
L_801011F8:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 801011F8
  cmps(c,0,(int32_t)c->r[0],0); // 801011FC
  if (!crb(c,2)) { goto L_801012B4; } // 80101200
  c->r[0]=R32(c->r[13]+0xFFFF9A10u); // 80101204
  cmpu(c,0,c->r[5],c->r[0]); // 80101208
  if (!crb(c,2)) { goto L_80101258; } // 8010120C
  c->r[12]=R32(c->r[5]+0x00000030u); // 80101210
  cmps(c,0,(int32_t)c->r[12],0); // 80101214
  if (crb(c,2)) { goto L_80101228; } // 80101218
  c->r[3]=c->r[5]|c->r[5]; // 8010121C
  c->ctr=c->r[12]; // 80101220
  if (true) { c->lr=0x80101228u; dispatch(c,c->ctr); } // 80101224
L_80101228:;
  c->r[3]=0u+0xCDD10000u; // 80101228
  c->r[3]=c->r[3]+0x00000002u; // 8010122C
  c->lr=0x80101234u; f_80100C88(c); // 80101230
L_80101234:;
  c->lr=0x80101238u; f_80100C54(c); // 80101234
  cmps(c,0,(int32_t)c->r[3],0); // 80101238
  if (!crb(c,2)) { IRQCHK(c); goto L_80101234; } // 8010123C
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80101240
  c->r[0]=0u+0x00000003u; // 80101244
  W32(c->r[3]+0x00000000u,c->r[0]); // 80101248
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 8010124C
  c->lr=0x80101254u; f_80101720(c); // 80101250
  goto L_80101330; // 80101254
L_80101258:;
  c->r[12]=R32(c->r[5]+0x00000030u); // 80101258
  cmps(c,0,(int32_t)c->r[12],0); // 8010125C
  if (crb(c,2)) { goto L_80101270; } // 80101260
  c->r[3]=c->r[5]|c->r[5]; // 80101264
  c->ctr=c->r[12]; // 80101268
  if (true) { c->lr=0x80101270u; dispatch(c,c->ctr); } // 8010126C
L_80101270:;
  c->r[3]=0u+0xCDD10000u; // 80101270
  c->r[3]=c->r[3]+0x00000001u; // 80101274
  c->lr=0x8010127Cu; f_80100C88(c); // 80101278
L_8010127C:;
  c->lr=0x80101280u; f_80100C54(c); // 8010127C
  cmps(c,0,(int32_t)c->r[3],0); // 80101280
  if (!crb(c,2)) { IRQCHK(c); goto L_8010127C; } // 80101284
  c->r[4]=R32(c->r[13]+0xFFFF9A14u); // 80101288
  c->r[0]=0u+0x00000003u; // 8010128C
  c->r[3]=0u+0x00000000u; // 80101290
  W32(c->r[4]+0x00000000u,c->r[0]); // 80101294
  c->r[4]=R32(c->r[13]+0xFFFF9A10u); // 80101298
  c->lr=0x801012A0u; f_80101354(c); // 8010129C
  c->r[0]=R32(c->r[13]+0xFFFF9A10u); // 801012A0
  c->r[3]=R32(c->r[13]+0xFFFF9A0Cu); // 801012A4
  W32(c->r[13]+0xFFFF9A14u,c->r[0]); // 801012A8
  c->lr=0x801012B0u; f_80101720(c); // 801012AC
  goto L_80101330; // 801012B0
L_801012B4:;
  c->r[12]=R32(c->r[5]+0x00000030u); // 801012B4
  cmps(c,0,(int32_t)c->r[12],0); // 801012B8
  if (crb(c,2)) { goto L_801012CC; } // 801012BC
  c->r[3]=c->r[5]|c->r[5]; // 801012C0
  c->ctr=c->r[12]; // 801012C4
  if (true) { c->lr=0x801012CCu; dispatch(c,c->ctr); } // 801012C8
L_801012CC:;
  c->r[3]=0u+0xCDD10000u; // 801012CC
  c->r[3]=c->r[3]+0x00000001u; // 801012D0
  c->lr=0x801012D8u; f_80100C88(c); // 801012D4
L_801012D8:;
  c->lr=0x801012DCu; f_80100C54(c); // 801012D8
  cmps(c,0,(int32_t)c->r[3],0); // 801012DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801012D8; } // 801012E0
  c->r[4]=R32(c->r[13]+0xFFFF9A14u); // 801012E4
  c->r[0]=0u+0x00000003u; // 801012E8
  c->r[3]=0u+0x00000000u; // 801012EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801012F0
  c->r[4]=R32(c->r[13]+0xFFFF9A14u); // 801012F4
  c->r[4]=R32(c->r[4]+0x00000038u); // 801012F8
  c->lr=0x80101300u; f_80101354(c); // 801012FC
  c->r[3]=R32(c->r[13]+0xFFFF9A14u); // 80101300
  c->r[3]=R32(c->r[3]+0x00000038u); // 80101304
  W32(c->r[13]+0xFFFF9A14u,c->r[3]); // 80101308
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8010130C
  c->lr=0x80101314u; f_80101720(c); // 80101310
  goto L_80101330; // 80101314
L_80101318:;
  c->r[12]=R32(c->r[5]+0x00000034u); // 80101318
  cmps(c,0,(int32_t)c->r[12],0); // 8010131C
  if (crb(c,2)) { goto L_80101330; } // 80101320
  c->r[3]=c->r[5]|c->r[5]; // 80101324
  c->ctr=c->r[12]; // 80101328
  if (true) { c->lr=0x80101330u; dispatch(c,c->ctr); } // 8010132C
L_80101330:;
  c->r[3]=c->r[1]+0x00000008u; // 80101330
  c->lr=0x80101338u; f_800E0DEC(c); // 80101334
  c->r[3]=c->r[31]|c->r[31]; // 80101338
  c->lr=0x80101340u; f_800E0BC4(c); // 8010133C
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80101340
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80101344
  c->lr=c->r[0]; // 80101348
  c->r[1]=c->r[1]+0x000002E0u; // 8010134C
  return; // 80101350
}

// __DSP_exec_task
void f_80101354(Ctx* __restrict c) {
  trace_call(0x80101354u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101354
  c->r[0]=c->lr; // 80101358
  cmps(c,0,(int32_t)c->r[3],0); // 8010135C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101364
  c->r[31]=c->r[4]|c->r[4]; // 80101368
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010136C
  c->r[30]=c->r[3]|c->r[3]; // 80101370
  if (crb(c,2)) { goto L_801013B8; } // 80101374
  c->r[3]=R32(c->r[3]+0x00000018u); // 80101378
  c->lr=0x80101380u; f_80100C88(c); // 8010137C
L_80101380:;
  c->lr=0x80101384u; f_80100C54(c); // 80101380
  cmps(c,0,(int32_t)c->r[3],0); // 80101384
  if (!crb(c,2)) { IRQCHK(c); goto L_80101380; } // 80101388
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8010138C
  c->lr=0x80101394u; f_80100C88(c); // 80101390
L_80101394:;
  c->lr=0x80101398u; f_80100C54(c); // 80101394
  cmps(c,0,(int32_t)c->r[3],0); // 80101398
  if (!crb(c,2)) { IRQCHK(c); goto L_80101394; } // 8010139C
  c->r[3]=R32(c->r[30]+0x00000020u); // 801013A0
  c->lr=0x801013A8u; f_80100C88(c); // 801013A4
L_801013A8:;
  c->lr=0x801013ACu; f_80100C54(c); // 801013A8
  cmps(c,0,(int32_t)c->r[3],0); // 801013AC
  if (!crb(c,2)) { IRQCHK(c); goto L_801013A8; } // 801013B0
  goto L_801013F4; // 801013B4
L_801013B8:;
  c->r[3]=0u+0x00000000u; // 801013B8
  c->lr=0x801013C0u; f_80100C88(c); // 801013BC
L_801013C0:;
  c->lr=0x801013C4u; f_80100C54(c); // 801013C0
  cmps(c,0,(int32_t)c->r[3],0); // 801013C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801013C0; } // 801013C8
  c->r[3]=0u+0x00000000u; // 801013CC
  c->lr=0x801013D4u; f_80100C88(c); // 801013D0
L_801013D4:;
  c->lr=0x801013D8u; f_80100C54(c); // 801013D4
  cmps(c,0,(int32_t)c->r[3],0); // 801013D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801013D4; } // 801013DC
  c->r[3]=0u+0x00000000u; // 801013E0
  c->lr=0x801013E8u; f_80100C88(c); // 801013E4
L_801013E8:;
  c->lr=0x801013ECu; f_80100C54(c); // 801013E8
  cmps(c,0,(int32_t)c->r[3],0); // 801013EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801013E8; } // 801013F0
L_801013F4:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801013F4
  c->lr=0x801013FCu; f_80100C88(c); // 801013F8
L_801013FC:;
  c->lr=0x80101400u; f_80100C54(c); // 801013FC
  cmps(c,0,(int32_t)c->r[3],0); // 80101400
  if (!crb(c,2)) { IRQCHK(c); goto L_801013FC; } // 80101404
  c->r[3]=R32(c->r[31]+0x00000010u); // 80101408
  c->lr=0x80101410u; f_80100C88(c); // 8010140C
L_80101410:;
  c->lr=0x80101414u; f_80100C54(c); // 80101410
  cmps(c,0,(int32_t)c->r[3],0); // 80101414
  if (!crb(c,2)) { IRQCHK(c); goto L_80101410; } // 80101418
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010141C
  c->lr=0x80101424u; f_80100C88(c); // 80101420
L_80101424:;
  c->lr=0x80101428u; f_80100C54(c); // 80101424
  cmps(c,0,(int32_t)c->r[3],0); // 80101428
  if (!crb(c,2)) { IRQCHK(c); goto L_80101424; } // 8010142C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80101430
  cmps(c,0,(int32_t)c->r[0],0); // 80101434
  if (!crb(c,2)) { goto L_80101490; } // 80101438
  c->r[3]=R16(c->r[31]+0x00000024u); // 8010143C
  c->lr=0x80101444u; f_80100C88(c); // 80101440
L_80101444:;
  c->lr=0x80101448u; f_80100C54(c); // 80101444
  cmps(c,0,(int32_t)c->r[3],0); // 80101448
  if (!crb(c,2)) { IRQCHK(c); goto L_80101444; } // 8010144C
  c->r[3]=0u+0x00000000u; // 80101450
  c->lr=0x80101458u; f_80100C88(c); // 80101454
L_80101458:;
  c->lr=0x8010145Cu; f_80100C54(c); // 80101458
  cmps(c,0,(int32_t)c->r[3],0); // 8010145C
  if (!crb(c,2)) { IRQCHK(c); goto L_80101458; } // 80101460
  c->r[3]=0u+0x00000000u; // 80101464
  c->lr=0x8010146Cu; f_80100C88(c); // 80101468
L_8010146C:;
  c->lr=0x80101470u; f_80100C54(c); // 8010146C
  cmps(c,0,(int32_t)c->r[3],0); // 80101470
  if (!crb(c,2)) { IRQCHK(c); goto L_8010146C; } // 80101474
  c->r[3]=0u+0x00000000u; // 80101478
  c->lr=0x80101480u; f_80100C88(c); // 8010147C
L_80101480:;
  c->lr=0x80101484u; f_80100C54(c); // 80101480
  cmps(c,0,(int32_t)c->r[3],0); // 80101484
  if (!crb(c,2)) { IRQCHK(c); goto L_80101480; } // 80101488
  goto L_801014E0; // 8010148C
L_80101490:;
  c->r[3]=R16(c->r[31]+0x00000026u); // 80101490
  c->lr=0x80101498u; f_80100C88(c); // 80101494
L_80101498:;
  c->lr=0x8010149Cu; f_80100C54(c); // 80101498
  cmps(c,0,(int32_t)c->r[3],0); // 8010149C
  if (!crb(c,2)) { IRQCHK(c); goto L_80101498; } // 801014A0
  c->r[3]=R32(c->r[31]+0x00000018u); // 801014A4
  c->lr=0x801014ACu; f_80100C88(c); // 801014A8
L_801014AC:;
  c->lr=0x801014B0u; f_80100C54(c); // 801014AC
  cmps(c,0,(int32_t)c->r[3],0); // 801014B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801014AC; } // 801014B4
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801014B8
  c->lr=0x801014C0u; f_80100C88(c); // 801014BC
L_801014C0:;
  c->lr=0x801014C4u; f_80100C54(c); // 801014C0
  cmps(c,0,(int32_t)c->r[3],0); // 801014C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801014C0; } // 801014C8
  c->r[3]=R32(c->r[31]+0x00000020u); // 801014CC
  c->lr=0x801014D4u; f_80100C88(c); // 801014D0
L_801014D4:;
  c->lr=0x801014D8u; f_80100C54(c); // 801014D4
  cmps(c,0,(int32_t)c->r[3],0); // 801014D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801014D4; } // 801014DC
L_801014E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801014E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801014E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801014E8
  c->lr=c->r[0]; // 801014EC
  c->r[1]=c->r[1]+0x00000010u; // 801014F0
  return; // 801014F4
}

// __DSP_boot_task
void f_801014F8(Ctx* __restrict c) {
  trace_call(0x801014F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801014F8
  c->r[0]=c->lr; // 801014FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101500
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80101504
  c->r[31]=0u+0x80290000u; // 80101508
  c->r[31]=c->r[31]+0x00005620u; // 8010150C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80101510
  c->r[30]=c->r[3]|c->r[3]; // 80101514
L_80101518:;
  c->lr=0x8010151Cu; f_80100C64(c); // 80101518
  cmps(c,0,(int32_t)c->r[3],0); // 8010151C
  if (crb(c,2)) { IRQCHK(c); goto L_80101518; } // 80101520
  c->lr=0x80101528u; f_80100C74(c); // 80101524
  W32(c->r[1]+0x00000008u,c->r[3]); // 80101528
  c->r[3]=0u+0x80F40000u; // 8010152C
  c->r[3]=c->r[3]+0xFFFFA001u; // 80101530
  c->lr=0x80101538u; f_80100C88(c); // 80101534
L_80101538:;
  c->lr=0x8010153Cu; f_80100C54(c); // 80101538
  cmps(c,0,(int32_t)c->r[3],0); // 8010153C
  if (!crb(c,2)) { IRQCHK(c); goto L_80101538; } // 80101540
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80101544
  c->lr=0x8010154Cu; f_80100C88(c); // 80101548
L_8010154C:;
  c->lr=0x80101550u; f_80100C54(c); // 8010154C
  cmps(c,0,(int32_t)c->r[3],0); // 80101550
  if (!crb(c,2)) { IRQCHK(c); goto L_8010154C; } // 80101554
  c->r[3]=0u+0x80F40000u; // 80101558
  c->r[3]=c->r[3]+0xFFFFC002u; // 8010155C
  c->lr=0x80101564u; f_80100C88(c); // 80101560
L_80101564:;
  c->lr=0x80101568u; f_80100C54(c); // 80101564
  cmps(c,0,(int32_t)c->r[3],0); // 80101568
  if (!crb(c,2)) { IRQCHK(c); goto L_80101564; } // 8010156C
  c->r[0]=R32(c->r[30]+0x00000014u); // 80101570
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80101574
  c->lr=0x8010157Cu; f_80100C88(c); // 80101578
L_8010157C:;
  c->lr=0x80101580u; f_80100C54(c); // 8010157C
  cmps(c,0,(int32_t)c->r[3],0); // 80101580
  if (!crb(c,2)) { IRQCHK(c); goto L_8010157C; } // 80101584
  c->r[3]=0u+0x80F40000u; // 80101588
  c->r[3]=c->r[3]+0xFFFFA002u; // 8010158C
  c->lr=0x80101594u; f_80100C88(c); // 80101590
L_80101594:;
  c->lr=0x80101598u; f_80100C54(c); // 80101594
  cmps(c,0,(int32_t)c->r[3],0); // 80101598
  if (!crb(c,2)) { IRQCHK(c); goto L_80101594; } // 8010159C
  c->r[3]=R32(c->r[30]+0x00000010u); // 801015A0
  c->lr=0x801015A8u; f_80100C88(c); // 801015A4
L_801015A8:;
  c->lr=0x801015ACu; f_80100C54(c); // 801015A8
  cmps(c,0,(int32_t)c->r[3],0); // 801015AC
  if (!crb(c,2)) { IRQCHK(c); goto L_801015A8; } // 801015B0
  c->r[3]=0u+0x80F40000u; // 801015B4
  c->r[3]=c->r[3]+0xFFFFB002u; // 801015B8
  c->lr=0x801015C0u; f_80100C88(c); // 801015BC
L_801015C0:;
  c->lr=0x801015C4u; f_80100C54(c); // 801015C0
  cmps(c,0,(int32_t)c->r[3],0); // 801015C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801015C0; } // 801015C8
  c->r[3]=0u+0x00000000u; // 801015CC
  c->lr=0x801015D4u; f_80100C88(c); // 801015D0
L_801015D4:;
  c->lr=0x801015D8u; f_80100C54(c); // 801015D4
  cmps(c,0,(int32_t)c->r[3],0); // 801015D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801015D4; } // 801015DC
  c->r[3]=0u+0x80F40000u; // 801015E0
  c->r[3]=c->r[3]+0xFFFFD001u; // 801015E4
  c->lr=0x801015ECu; f_80100C88(c); // 801015E8
L_801015EC:;
  c->lr=0x801015F0u; f_80100C54(c); // 801015EC
  cmps(c,0,(int32_t)c->r[3],0); // 801015F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801015EC; } // 801015F4
  c->r[3]=R16(c->r[30]+0x00000024u); // 801015F8
  c->lr=0x80101600u; f_80100C88(c); // 801015FC
L_80101600:;
  c->lr=0x80101604u; f_80100C54(c); // 80101600
  cmps(c,0,(int32_t)c->r[3],0); // 80101604
  if (!crb(c,2)) { IRQCHK(c); goto L_80101600; } // 80101608
  c->r[4]=c->r[30]|c->r[30]; // 8010160C
  c->r[3]=c->r[31]+0x00000000u; // 80101610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80101614
  c->lr=0x8010161Cu; f_80100ED0(c); // 80101618
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8010161C
  c->r[3]=c->r[31]+0x00000020u; // 80101620
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80101624
  c->lr=0x8010162Cu; f_80100ED0(c); // 80101628
  c->r[4]=R32(c->r[30]+0x00000014u); // 8010162C
  c->r[3]=c->r[31]+0x00000050u; // 80101630
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80101634
  c->lr=0x8010163Cu; f_80100ED0(c); // 80101638
  c->r[4]=R32(c->r[30]+0x00000010u); // 8010163C
  c->r[3]=c->r[31]+0x00000080u; // 80101640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80101644
  c->lr=0x8010164Cu; f_80100ED0(c); // 80101648
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 8010164C
  c->r[3]=c->r[31]+0x000000B0u; // 80101650
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80101654
  c->lr=0x8010165Cu; f_80100ED0(c); // 80101658
  c->r[4]=R16(c->r[30]+0x00000024u); // 8010165C
  c->r[3]=c->r[31]+0x000000E0u; // 80101660
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80101664
  c->lr=0x8010166Cu; f_80100ED0(c); // 80101668
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010166C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80101670
  c->r[30]=R32(c->r[1]+0x00000018u); // 80101674
  c->lr=c->r[0]; // 80101678
  c->r[1]=c->r[1]+0x00000020u; // 8010167C
  return; // 80101680
}

// __DSP_insert_task
void f_80101684(Ctx* __restrict c) {
  trace_call(0x80101684u);
  c->r[5]=R32(c->r[13]+0xFFFF9A10u); // 80101684
  cmps(c,0,(int32_t)c->r[5],0); // 80101688
  if (!crb(c,2)) { goto L_801016F0; } // 8010168C
  W32(c->r[13]+0xFFFF9A14u,c->r[3]); // 80101690
  c->r[0]=0u+0x00000000u; // 80101694
  W32(c->r[13]+0xFFFF9A0Cu,c->r[3]); // 80101698
  W32(c->r[13]+0xFFFF9A10u,c->r[3]); // 8010169C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801016A0
  W32(c->r[3]+0x00000038u,c->r[0]); // 801016A4
  return; // 801016A8
  goto L_801016F0; // 801016AC
L_801016B0:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801016B0
  c->r[0]=R32(c->r[5]+0x00000004u); // 801016B4
  cmpu(c,0,c->r[4],c->r[0]); // 801016B8
  if (!crb(c,0)) { goto L_801016EC; } // 801016BC
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 801016C0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801016C4
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801016C8
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801016CC
  W32(c->r[3]+0x00000038u,c->r[5]); // 801016D0
  cmps(c,0,(int32_t)c->r[4],0); // 801016D4
  if (!crb(c,2)) { goto L_801016E4; } // 801016D8
  W32(c->r[13]+0xFFFF9A10u,c->r[3]); // 801016DC
  goto L_801016F8; // 801016E0
L_801016E4:;
  W32(c->r[4]+0x00000038u,c->r[3]); // 801016E4
  goto L_801016F8; // 801016E8
L_801016EC:;
  c->r[5]=R32(c->r[5]+0x00000038u); // 801016EC
L_801016F0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801016F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801016B0; } // 801016F4
L_801016F8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801016F8
  if (!crb(c,2)) return; // 801016FC
  c->r[4]=R32(c->r[13]+0xFFFF9A0Cu); // 80101700
  c->r[0]=0u+0x00000000u; // 80101704
  W32(c->r[4]+0x00000038u,c->r[3]); // 80101708
  W32(c->r[3]+0x00000038u,c->r[0]); // 8010170C
  c->r[0]=R32(c->r[13]+0xFFFF9A0Cu); // 80101710
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80101714
  W32(c->r[13]+0xFFFF9A0Cu,c->r[3]); // 80101718
  return; // 8010171C
}

// __DSP_remove_task
void f_80101720(Ctx* __restrict c) {
  trace_call(0x80101720u);
  c->r[4]=0u+0x00000000u; // 80101720
  c->r[0]=0u+0x00000003u; // 80101724
  W32(c->r[3]+0x00000008u,c->r[4]); // 80101728
  W32(c->r[3]+0x00000000u,c->r[0]); // 8010172C
  c->r[0]=R32(c->r[13]+0xFFFF9A10u); // 80101730
  cmpu(c,0,c->r[0],c->r[3]); // 80101734
  if (!crb(c,2)) { goto L_80101768; } // 80101738
  c->r[0]=R32(c->r[3]+0x00000038u); // 8010173C
  cmps(c,0,(int32_t)c->r[0],0); // 80101740
  if (crb(c,2)) { goto L_80101758; } // 80101744
  W32(c->r[13]+0xFFFF9A10u,c->r[0]); // 80101748
  c->r[3]=R32(c->r[3]+0x00000038u); // 8010174C
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 80101750
  return; // 80101754
L_80101758:;
  W32(c->r[13]+0xFFFF9A14u,c->r[4]); // 80101758
  W32(c->r[13]+0xFFFF9A0Cu,c->r[4]); // 8010175C
  W32(c->r[13]+0xFFFF9A10u,c->r[4]); // 80101760
  return; // 80101764
L_80101768:;
  c->r[0]=R32(c->r[13]+0xFFFF9A0Cu); // 80101768
  cmpu(c,0,c->r[0],c->r[3]); // 8010176C
  if (!crb(c,2)) { goto L_80101790; } // 80101770
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80101774
  W32(c->r[13]+0xFFFF9A0Cu,c->r[0]); // 80101778
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8010177C
  W32(c->r[3]+0x00000038u,c->r[4]); // 80101780
  c->r[0]=R32(c->r[13]+0xFFFF9A10u); // 80101784
  W32(c->r[13]+0xFFFF9A14u,c->r[0]); // 80101788
  return; // 8010178C
L_80101790:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 80101790
  W32(c->r[13]+0xFFFF9A14u,c->r[0]); // 80101794
  c->r[0]=R32(c->r[3]+0x00000038u); // 80101798
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 8010179C
  W32(c->r[4]+0x00000038u,c->r[0]); // 801017A0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801017A4
  c->r[3]=R32(c->r[3]+0x00000038u); // 801017A8
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801017AC
  return; // 801017B0
}

// __GXDefaultTexRegionCallback
void f_801017B4(Ctx* __restrict c) {
  trace_call(0x801017B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801017B4
  c->r[0]=c->lr; // 801017B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801017BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801017C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801017C4
  c->r[30]=c->r[4]|c->r[4]; // 801017C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801017CC
  c->r[29]=c->r[3]|c->r[3]; // 801017D0
  c->lr=0x801017D8u; f_801069B8(c); // 801017D4
  c->r[31]=c->r[3]|c->r[3]; // 801017D8
  c->r[3]=c->r[29]|c->r[29]; // 801017DC
  c->lr=0x801017E4u; f_801069D8(c); // 801017E0
  c->r[0]=rotl(c->r[30],29)&0xE0000000u; // 801017E4
  c->r[4]=rotl(c->r[30],1)&0x00000001u; // 801017E8
  c->r[0]=c->r[0]-c->r[4]; // 801017EC
  cmps(c,0,(int32_t)c->r[31],7); // 801017F0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801017F4
  c->r[30]=c->r[0]+c->r[4]; // 801017F8
  if (crb(c,2)) { goto L_80101860; } // 801017FC
  if (!crb(c,0)) { goto L_80101810; } // 80101800
  cmps(c,0,(int32_t)c->r[31],6); // 80101804
  if (!crb(c,0)) { goto L_8010181C; } // 80101808
  goto L_80101860; // 8010180C
L_80101810:;
  cmps(c,0,(int32_t)c->r[31],11); // 80101810
  if (!crb(c,0)) { goto L_80101860; } // 80101814
  goto L_8010184C; // 80101818
L_8010181C:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010181C
  if (crb(c,2)) { goto L_80101838; } // 80101820
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80101824
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 80101828
  c->r[3]=c->r[3]+c->r[0]; // 8010182C
  c->r[3]=c->r[3]+0x00000358u; // 80101830
  goto L_8010188C; // 80101834
L_80101838:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80101838
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 8010183C
  c->r[3]=c->r[3]+c->r[0]; // 80101840
  c->r[3]=c->r[3]+0x000002D8u; // 80101844
  goto L_8010188C; // 80101848
L_8010184C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010184C
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 80101850
  c->r[3]=c->r[3]+c->r[0]; // 80101854
  c->r[3]=c->r[3]+0x00000258u; // 80101858
  goto L_8010188C; // 8010185C
L_80101860:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80101860
  if (crb(c,2)) { goto L_8010187C; } // 80101864
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80101868
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 8010186C
  c->r[3]=c->r[3]+c->r[0]; // 80101870
  c->r[3]=c->r[3]+0x000002D8u; // 80101874
  goto L_8010188C; // 80101878
L_8010187C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010187C
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 80101880
  c->r[3]=c->r[3]+c->r[0]; // 80101884
  c->r[3]=c->r[3]+0x00000258u; // 80101888
L_8010188C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010188C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80101890
  c->r[30]=R32(c->r[1]+0x00000018u); // 80101894
  c->r[29]=R32(c->r[1]+0x00000014u); // 80101898
  c->lr=c->r[0]; // 8010189C
  c->r[1]=c->r[1]+0x00000020u; // 801018A0
  return; // 801018A4
}

// __GXDefaultTlutRegionCallback
void f_801018A8(Ctx* __restrict c) {
  trace_call(0x801018A8u);
  cmpu(c,0,c->r[3],0x00000014u); // 801018A8
  if (crb(c,0)) { goto L_801018B8; } // 801018AC
  c->r[3]=0u+0x00000000u; // 801018B0
  return; // 801018B4
L_801018B8:;
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 801018B8
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 801018BC
  c->r[3]=c->r[4]+c->r[0]; // 801018C0
  c->r[3]=c->r[3]+0x000003D8u; // 801018C4
  return; // 801018C8
}

// __GXShutdown
void f_801018CC(Ctx* __restrict c) {
  trace_call(0x801018CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801018CC
  c->r[0]=c->lr; // 801018D0
  cmps(c,0,(int32_t)c->r[3],0); // 801018D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801018D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801018DC
  if (!crb(c,2)) { goto L_801019B8; } // 801018E0
  c->r[0]=R32(c->r[13]+0xFFFF9A38u); // 801018E4
  cmps(c,0,(int32_t)c->r[0],0); // 801018E8
  if (!crb(c,2)) { goto L_80101934; } // 801018EC
  c->r[5]=R32(c->r[13]+0xFFFF9A24u); // 801018F0
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 801018F4
L_801018F8:;
  c->r[0]=c->r[4]|c->r[4]; // 801018F8
  c->r[3]=R16(c->r[5]+0x00000050u); // 801018FC
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 80101900
  cmpu(c,0,c->r[4],c->r[0]); // 80101904
  if (!crb(c,2)) { IRQCHK(c); goto L_801018F8; } // 80101908
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 8010190C
  c->r[0]=c->r[0]|c->r[3]; // 80101910
  W32(c->r[13]+0xFFFF9A28u,c->r[0]); // 80101914
  c->lr=0x8010191Cu; f_800E8F9C(c); // 80101918
  c->r[0]=0u+0x00000001u; // 8010191C
  W32(c->r[13]+0xFFFF9A30u,c->r[3]); // 80101920
  c->r[3]=0u+0x00000000u; // 80101924
  W32(c->r[13]+0xFFFF9A34u,c->r[4]); // 80101928
  W32(c->r[13]+0xFFFF9A38u,c->r[0]); // 8010192C
  goto L_80101A24; // 80101930
L_80101934:;
  c->lr=0x80101938u; f_800E8F9C(c); // 80101934
  c->r[5]=R32(c->r[13]+0xFFFF9A24u); // 80101938
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 8010193C
L_80101940:;
  c->r[0]=c->r[7]|c->r[7]; // 80101940
  c->r[10]=R16(c->r[5]+0x00000050u); // 80101944
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 80101948
  cmpu(c,0,c->r[7],c->r[0]); // 8010194C
  if (!crb(c,2)) { IRQCHK(c); goto L_80101940; } // 80101950
  c->r[5]=R32(c->r[13]+0xFFFF9A34u); // 80101954
  c->r[0]=0u+0x00000000u; // 80101958
  c->r[6]=R32(c->r[13]+0xFFFF9A30u); // 8010195C
  c->r[9]=rotl(c->r[7],16)&0xFFFF0000u; // 80101960
  c->r[8]=addc(c,~c->r[5],c->r[4],1); // 80101964
  c->r[5]=0u+0x0000000Au; // 80101968
  c->r[7]=addc(c,~c->r[6],c->r[3],c->xer_ca); // 8010196C
  c->r[6]=c->r[0]^0x80000000u; // 80101970
  c->r[5]=addc(c,~c->r[5],c->r[8],1); // 80101974
  c->r[0]=c->r[7]^0x80000000u; // 80101978
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 8010197C
  c->r[5]=c->r[9]|c->r[10]; // 80101980
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80101984
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 80101988
  if (crb(c,2)) { goto L_80101998; } // 8010198C
  c->r[3]=0u+0x00000000u; // 80101990
  goto L_80101A24; // 80101994
L_80101998:;
  c->r[0]=R32(c->r[13]+0xFFFF9A28u); // 80101998
  cmpu(c,0,c->r[5],c->r[0]); // 8010199C
  if (crb(c,2)) { goto L_80101A20; } // 801019A0
  W32(c->r[13]+0xFFFF9A30u,c->r[3]); // 801019A4
  c->r[3]=0u+0x00000000u; // 801019A8
  W32(c->r[13]+0xFFFF9A28u,c->r[5]); // 801019AC
  W32(c->r[13]+0xFFFF9A34u,c->r[4]); // 801019B0
  goto L_80101A24; // 801019B4
L_801019B8:;
  c->r[3]=0u+0x00000000u; // 801019B8
  c->lr=0x801019C0u; f_801030DC(c); // 801019BC
  c->r[3]=0u+0x00000000u; // 801019C0
  c->lr=0x801019C8u; f_801049C8(c); // 801019C4
  c->r[3]=0u+0x00000000u; // 801019C8
  c->lr=0x801019D0u; f_80104A90(c); // 801019CC
  c->r[31]=0u+0x00000000u; // 801019D0
  c->r[3]=0u+0xCC010000u; // 801019D4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801019D8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801019DC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801019E0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801019E4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801019E8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801019EC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801019F0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801019F4
  c->lr=0x801019FCu; f_800DDCE8(c); // 801019F8
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 801019FC
  c->r[5]=0u+0x00000003u; // 80101A00
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80101A04
  c->r[0]=0u+0x00000001u; // 80101A08
  W16(c->r[4]+0x00000002u,c->r[31]); // 80101A0C
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80101A10
  W16(c->r[4]+0x00000004u,c->r[5]); // 80101A14
  W8(c->r[3]+0x000005FAu,c->r[0]); // 80101A18
  c->lr=0x80101A20u; f_80104340(c); // 80101A1C
L_80101A20:;
  c->r[3]=0u+0x00000001u; // 80101A20
L_80101A24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101A24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101A28
  c->lr=c->r[0]; // 80101A2C
  c->r[1]=c->r[1]+0x00000010u; // 80101A30
  return; // 80101A34
}

// __GXInitRevisionBits
void f_80101A38(Ctx* __restrict c) {
  trace_call(0x80101A38u);
  c->r[0]=0u+0x00000002u; // 80101A38
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80101A3C
  c->r[7]=0u+0x00000000u; // 80101A40
  c->r[5]=0u+0x00000008u; // 80101A44
  c->r[4]=0u+0xCC010000u; // 80101A48
  c->ctr=c->r[0]; // 80101A4C
L_80101A50:;
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 80101A50
  c->r[3]=c->r[7]|0x00000080u; // 80101A54
  c->r[7]=c->r[7]+0x00000001u; // 80101A58
  c->r[0]=c->r[0]|0x40000000u; // 80101A5C
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 80101A60
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 80101A64
  c->r[0]=c->r[0]|0x80000000u; // 80101A68
  W32(c->r[6]+0x0000003Cu,c->r[0]); // 80101A6C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80101A70
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 80101A74
  c->r[3]=c->r[7]|0x00000080u; // 80101A78
  c->r[7]=c->r[7]+0x00000001u; // 80101A7C
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 80101A80
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80101A84
  c->r[0]=R32(c->r[6]+0x00000020u); // 80101A88
  c->r[0]=c->r[0]|0x40000000u; // 80101A8C
  W32(c->r[6]+0x00000020u,c->r[0]); // 80101A90
  c->r[0]=R32(c->r[6]+0x00000040u); // 80101A94
  c->r[0]=c->r[0]|0x80000000u; // 80101A98
  W32(c->r[6]+0x00000040u,c->r[0]); // 80101A9C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80101AA0
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 80101AA4
  c->r[3]=c->r[7]|0x00000080u; // 80101AA8
  c->r[7]=c->r[7]+0x00000001u; // 80101AAC
  c->r[0]=R32(c->r[6]+0x00000040u); // 80101AB0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80101AB4
  c->r[0]=R32(c->r[6]+0x00000024u); // 80101AB8
  c->r[0]=c->r[0]|0x40000000u; // 80101ABC
  W32(c->r[6]+0x00000024u,c->r[0]); // 80101AC0
  c->r[0]=R32(c->r[6]+0x00000044u); // 80101AC4
  c->r[0]=c->r[0]|0x80000000u; // 80101AC8
  W32(c->r[6]+0x00000044u,c->r[0]); // 80101ACC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80101AD0
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 80101AD4
  c->r[3]=c->r[7]|0x00000080u; // 80101AD8
  c->r[7]=c->r[7]+0x00000001u; // 80101ADC
  c->r[0]=R32(c->r[6]+0x00000044u); // 80101AE0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80101AE4
  c->r[0]=R32(c->r[6]+0x00000028u); // 80101AE8
  c->r[0]=c->r[0]|0x40000000u; // 80101AEC
  W32(c->r[6]+0x00000028u,c->r[0]); // 80101AF0
  c->r[0]=R32(c->r[6]+0x00000048u); // 80101AF4
  c->r[0]=c->r[0]|0x80000000u; // 80101AF8
  W32(c->r[6]+0x00000048u,c->r[0]); // 80101AFC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80101B00
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 80101B04
  c->r[0]=R32(c->r[6]+0x00000048u); // 80101B08
  c->r[6]=c->r[6]+0x00000010u; // 80101B0C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80101B10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80101A50; } // 80101B14
  c->r[7]=0u+0xCC010000u; // 80101B18
  c->r[8]=0u+0x00000010u; // 80101B1C
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80101B20
  c->r[4]=0u+0x00000000u; // 80101B24
  c->r[0]=0u+0x00001000u; // 80101B28
  c->r[5]=0u+0x00001012u; // 80101B2C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80101B30
  c->r[3]=c->r[4]|0x0000003Fu; // 80101B34
  c->r[6]=c->r[4]|0x00000001u; // 80101B38
  c->r[0]=0u+0x00000061u; // 80101B3C
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80101B40
  c->r[3]=0u+0x00000058u; // 80101B44
  c->r[4]=c->r[4]|0x0000000Fu; // 80101B48
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80101B4C
  c->r[4]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101B50
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 80101B54
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 80101B58
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 80101B5C
  W32(c->r[7]+0xFFFF8000u,c->r[4]); // 80101B60
  return; // 80101B64
}

// GXInit
void f_80101B68(Ctx* __restrict c) {
  trace_call(0x80101B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101B68
  c->r[0]=c->lr; // 80101B6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101B70
  c->r[11]=c->r[1]+0x00000020u; // 80101B74
  c->lr=0x80101B7Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80101B78
  c->r[27]=c->r[3]|c->r[3]; // 80101B7C
  c->r[3]=R32(c->r[13]+0xFFFF8BB8u); // 80101B80
  c->r[26]=c->r[4]|c->r[4]; // 80101B84
  c->lr=0x80101B8Cu; f_800DF258(c); // 80101B88
  c->r[31]=R32(c->r[2]+0xFFFF8C88u); // 80101B8C
  c->r[0]=0u+0x00000000u; // 80101B90
  c->r[29]=0u+0x00000001u; // 80101B94
  c->r[3]=0u+0x00000001u; // 80101B98
  W8(c->r[31]+0x000005F8u,c->r[0]); // 80101B9C
  c->r[4]=0u+0x00000000u; // 80101BA0
  W8(c->r[31]+0x000005F9u,c->r[29]); // 80101BA4
  W8(c->r[31]+0x000005FAu,c->r[29]); // 80101BA8
  W32(c->r[31]+0x000005E4u,c->r[0]); // 80101BAC
  W32(c->r[31]+0x000005E8u,c->r[0]); // 80101BB0
  c->lr=0x80101BB8u; f_80104258(c); // 80101BB4
  c->r[4]=0u+0xCC000000u; // 80101BB8
  c->r[5]=c->r[4]+0x00003000u; // 80101BBC
  W32(c->r[13]+0xFFFF9A1Cu,c->r[4]); // 80101BC0
  c->r[3]=c->r[4]+0x00001000u; // 80101BC4
  c->r[0]=c->r[4]+0x00004000u; // 80101BC8
  W32(c->r[13]+0xFFFF9A18u,c->r[5]); // 80101BCC
  W32(c->r[13]+0xFFFF9A20u,c->r[3]); // 80101BD0
  W32(c->r[13]+0xFFFF9A24u,c->r[0]); // 80101BD4
  c->lr=0x80101BDCu; f_80103120(c); // 80101BD8
  c->r[28]=0u+0x802F0000u; // 80101BDC
  c->r[4]=c->r[27]|c->r[27]; // 80101BE0
  c->r[5]=c->r[26]|c->r[26]; // 80101BE4
  c->r[3]=c->r[28]+0x000045C0u; // 80101BE8
  c->lr=0x80101BF0u; f_80102AE0(c); // 80101BEC
  c->r[3]=c->r[28]+0x000045C0u; // 80101BF0
  c->lr=0x80101BF8u; f_80102C64(c); // 80101BF4
  c->r[3]=c->r[28]+0x000045C0u; // 80101BF8
  c->lr=0x80101C00u; f_80102E44(c); // 80101BFC
  c->r[0]=R32(c->r[13]+0xFFFF9A3Cu); // 80101C00
  cmps(c,0,(int32_t)c->r[0],0); // 80101C04
  if (!crb(c,2)) { goto L_80101C1C; } // 80101C08
  c->r[3]=0u+0x80290000u; // 80101C0C
  c->r[3]=c->r[3]+0x00005990u; // 80101C10
  c->lr=0x80101C18u; f_800E6584(c); // 80101C14
  W32(c->r[13]+0xFFFF9A3Cu,c->r[29]); // 80101C18
L_80101C1C:;
  c->lr=0x80101C20u; f_80104B54(c); // 80101C1C
  c->lr=0x80101C24u; f_800DDD7C(c); // 80101C20
  c->r[4]=0u+0x0C010000u; // 80101C24
  c->r[28]=c->r[3]|c->r[3]; // 80101C28
  c->r[3]=c->r[4]+0xFFFF8000u; // 80101C2C
  c->lr=0x80101C34u; f_800DDD8C(c); // 80101C30
  c->r[3]=c->r[28]|0x40000000u; // 80101C34
  c->lr=0x80101C3Cu; f_800DDD84(c); // 80101C38
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80101C3C
  c->r[8]=0u+0x00000000u; // 80101C40
  c->r[0]=0u+0x0000000Fu; // 80101C44
  c->r[5]=0u+0x000000FFu; // 80101C48
  W32(c->r[3]+0x00000254u,c->r[8]); // 80101C4C
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80101C50
  c->r[0]=0u+0x00000022u; // 80101C54
  c->r[4]=0u+0x00000000u; // 80101C58
  W32(c->r[3]+0x00000174u,c->r[5]); // 80101C5C
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101C60
  c->r[0]=0u+0x00000008u; // 80101C64
  c->r[9]=c->r[3]|c->r[3]; // 80101C68
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 80101C6C
  c->r[26]=0u+0x00000000u; // 80101C70
  c->r[10]=0u+0x000000C0u; // 80101C74
  c->r[6]=0u+0x000000FFu; // 80101C78
  c->ctr=c->r[0]; // 80101C7C
L_80101C80:;
  W32(c->r[9]+0x00000180u,c->r[8]); // 80101C80
  c->r[12]=rotl(c->r[26],31)&0x7FFFFFFFu; // 80101C84
  c->r[7]=rotl(c->r[26],1)&0xFFFFFFFCu; // 80101C88
  c->r[11]=c->r[10]+0x00000001u; // 80101C8C
  W32(c->r[9]+0x000001C0u,c->r[8]); // 80101C90
  c->r[27]=c->r[3]+c->r[7]; // 80101C94
  c->r[26]=c->r[26]+0x00000001u; // 80101C98
  c->r[5]=c->r[12]+0x000000F6u; // 80101C9C
  W32(c->r[27]+0x00000150u,c->r[8]); // 80101CA0
  c->r[0]=c->r[12]+0x00000028u; // 80101CA4
  c->r[7]=rotl(c->r[26],1)&0xFFFFFFFCu; // 80101CA8
  c->r[12]=rotl(c->r[26],31)&0x7FFFFFFFu; // 80101CAC
  W32(c->r[9]+0x000005A4u,c->r[6]); // 80101CB0
  c->r[26]=c->r[26]+0x00000001u; // 80101CB4
  c->r[4]=R32(c->r[9]+0x00000180u); // 80101CB8
  c->r[4]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101CBC
  W32(c->r[9]+0x00000180u,c->r[4]); // 80101CC0
  c->r[4]=R32(c->r[9]+0x000001C0u); // 80101CC4
  c->r[4]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101CC8
  c->r[11]=c->r[10]+0x00000003u; // 80101CCC
  c->r[10]=c->r[10]+0x00000002u; // 80101CD0
  W32(c->r[9]+0x000001C0u,c->r[4]); // 80101CD4
  c->r[4]=R32(c->r[27]+0x00000200u); // 80101CD8
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101CDC
  c->r[5]=c->r[12]+0x000000F6u; // 80101CE0
  W32(c->r[27]+0x00000200u,c->r[4]); // 80101CE4
  c->r[4]=R32(c->r[27]+0x00000150u); // 80101CE8
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101CEC
  c->r[0]=c->r[12]+0x00000028u; // 80101CF0
  W32(c->r[27]+0x00000150u,c->r[4]); // 80101CF4
  c->r[27]=c->r[3]+c->r[7]; // 80101CF8
  W32(c->r[9]+0x00000184u,c->r[8]); // 80101CFC
  W32(c->r[9]+0x000001C4u,c->r[8]); // 80101D00
  W32(c->r[27]+0x00000150u,c->r[8]); // 80101D04
  W32(c->r[9]+0x000005A8u,c->r[6]); // 80101D08
  c->r[4]=R32(c->r[9]+0x00000184u); // 80101D0C
  c->r[4]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101D10
  c->r[10]=c->r[10]+0x00000002u; // 80101D14
  W32(c->r[9]+0x00000184u,c->r[4]); // 80101D18
  c->r[4]=R32(c->r[9]+0x000001C4u); // 80101D1C
  c->r[4]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101D20
  W32(c->r[9]+0x000001C4u,c->r[4]); // 80101D24
  c->r[9]=c->r[9]+0x00000008u; // 80101D28
  c->r[4]=R32(c->r[27]+0x00000200u); // 80101D2C
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101D30
  W32(c->r[27]+0x00000200u,c->r[4]); // 80101D34
  c->r[4]=R32(c->r[27]+0x00000150u); // 80101D38
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101D3C
  W32(c->r[27]+0x00000150u,c->r[4]); // 80101D40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80101C80; } // 80101D44
  c->r[0]=0u+0x00000027u; // 80101D48
  c->r[4]=0u+0x00000000u; // 80101D4C
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101D50
  c->r[5]=0u+0x00000030u; // 80101D54
  c->r[0]=0u+0x00000002u; // 80101D58
  W32(c->r[31]+0x00000170u,c->r[4]); // 80101D5C
  c->ctr=c->r[0]; // 80101D60
L_80101D64:;
  c->r[4]=0u+0x00000000u; // 80101D64
  c->r[6]=c->r[5]+0x00000001u; // 80101D68
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101D6C
  c->r[0]=0u+0x00000000u; // 80101D70
  W32(c->r[3]+0x00000108u,c->r[4]); // 80101D74
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80101D78
  c->r[6]=c->r[5]+0x00000003u; // 80101D7C
  c->r[5]=c->r[5]+0x00000002u; // 80101D80
  W32(c->r[3]+0x00000128u,c->r[0]); // 80101D84
  c->r[4]=0u+0x00000000u; // 80101D88
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101D8C
  c->r[0]=0u+0x00000000u; // 80101D90
  W32(c->r[3]+0x0000010Cu,c->r[4]); // 80101D94
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80101D98
  c->r[6]=c->r[5]+0x00000003u; // 80101D9C
  c->r[5]=c->r[5]+0x00000002u; // 80101DA0
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 80101DA4
  c->r[4]=0u+0x00000000u; // 80101DA8
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101DAC
  c->r[0]=0u+0x00000000u; // 80101DB0
  W32(c->r[3]+0x00000110u,c->r[4]); // 80101DB4
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80101DB8
  c->r[6]=c->r[5]+0x00000003u; // 80101DBC
  c->r[5]=c->r[5]+0x00000002u; // 80101DC0
  W32(c->r[3]+0x00000130u,c->r[0]); // 80101DC4
  c->r[4]=0u+0x00000000u; // 80101DC8
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101DCC
  c->r[0]=0u+0x00000000u; // 80101DD0
  W32(c->r[3]+0x00000114u,c->r[4]); // 80101DD4
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80101DD8
  c->r[5]=c->r[5]+0x00000002u; // 80101DDC
  W32(c->r[3]+0x00000134u,c->r[0]); // 80101DE0
  c->r[3]=c->r[3]+0x00000010u; // 80101DE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80101D64; } // 80101DE8
  c->r[30]=R32(c->r[2]+0xFFFF8C88u); // 80101DEC
  c->r[3]=0u+0x10620000u; // 80101DF0
  c->r[4]=0u+0x00000020u; // 80101DF4
  c->r[0]=0u+0x00000021u; // 80101DF8
  c->r[5]=R32(c->r[30]+0x00000148u); // 80101DFC
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80101E00
  c->r[8]=0u+0x00000041u; // 80101E04
  c->r[7]=0u+0x00000042u; // 80101E08
  W32(c->r[30]+0x00000148u,c->r[5]); // 80101E0C
  c->r[6]=0u+0x00000040u; // 80101E10
  c->r[5]=0u+0x00000043u; // 80101E14
  {uint32_t ea=c->r[2]+0xFFFF8C8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80101E18
  c->r[4]=R32(c->r[30]+0x0000014Cu); // 80101E1C
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80101E20
  {uint32_t ea=c->r[2]+0xFFFF8C90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101E24
  c->r[0]=0u+0x00000000u; // 80101E28
  W32(c->r[30]+0x0000014Cu,c->r[4]); // 80101E2C
  c->r[4]=0u+0x80000000u; // 80101E30
  c->r[3]=c->r[3]+0x00004DD3u; // 80101E34
  c->r[9]=R32(c->r[30]+0x00000220u); // 80101E38
  c->r[9]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 80101E3C
  W32(c->r[30]+0x00000220u,c->r[9]); // 80101E40
  c->r[8]=R32(c->r[30]+0x00000224u); // 80101E44
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80101E48
  W32(c->r[30]+0x00000224u,c->r[8]); // 80101E4C
  c->r[7]=R32(c->r[30]+0x00000228u); // 80101E50
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80101E54
  W32(c->r[30]+0x00000228u,c->r[7]); // 80101E58
  c->r[6]=R32(c->r[30]+0x0000022Cu); // 80101E5C
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80101E60
  W32(c->r[30]+0x0000022Cu,c->r[6]); // 80101E64
  c->r[5]=R32(c->r[30]+0x0000024Cu); // 80101E68
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE7Fu; // 80101E6C
  W32(c->r[30]+0x0000024Cu,c->r[5]); // 80101E70
  {uint32_t ea=c->r[30]+0x00000560u; WF32(ea,c->f[1]);} // 80101E74
  {uint32_t ea=c->r[30]+0x0000055Cu; WF32(ea,c->f[0]);} // 80101E78
  W32(c->r[30]+0x000005FCu,c->r[0]); // 80101E7C
  W8(c->r[30]+0x000005FBu,c->r[0]); // 80101E80
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80101E84
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 80101E88
  c->r[26]=rotl(c->r[0],27)&0x07FFFFFFu; // 80101E8C
  c->lr=0x80101E94u; f_801077FC(c); // 80101E90
  c->r[0]=rotl(c->r[26],21)&0x001FFFFFu; // 80101E94
  c->r[29]=0u+0xCC010000u; // 80101E98
  c->r[28]=0u+0x00000061u; // 80101E9C
  c->r[0]=c->r[0]|0x69000000u; // 80101EA0
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80101EA4
  c->r[0]=c->r[0]|0x00000400u; // 80101EA8
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 80101EAC
  c->lr=0x80101EB4u; f_801077FC(c); // 80101EB0
  c->r[3]=0u+0x3E100000u; // 80101EB4
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80101EB8
  c->r[0]=c->r[3]+0xFFFF83E1u; // 80101EBC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 80101EC0
  c->r[0]=rotl(c->r[0],22)&0x003FFFFFu; // 80101EC4
  c->r[0]=c->r[0]|0x46000000u; // 80101EC8
  c->r[0]=c->r[0]|0x00000200u; // 80101ECC
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 80101ED0
  c->lr=0x80101ED8u; f_80101A38(c); // 80101ED4
  c->r[28]=0u+0x80290000u; // 80101ED8
  c->r[29]=c->r[30]+0x00000258u; // 80101EDC
  c->r[27]=c->r[30]+0x000002D8u; // 80101EE0
  c->r[30]=c->r[30]+0x00000358u; // 80101EE4
  c->r[28]=c->r[28]+0x000058D0u; // 80101EE8
  c->r[26]=0u+0x00000000u; // 80101EEC
L_80101EF0:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 80101EF0
  c->r[3]=c->r[29]|c->r[29]; // 80101EF4
  c->r[7]=R32(c->r[28]+0x00000020u); // 80101EF8
  c->r[4]=0u+0x00000000u; // 80101EFC
  c->r[6]=0u+0x00000000u; // 80101F00
  c->r[8]=0u+0x00000000u; // 80101F04
  c->lr=0x80101F0Cu; f_80106D44(c); // 80101F08
  c->r[5]=R32(c->r[28]+0x00000040u); // 80101F0C
  c->r[3]=c->r[27]|c->r[27]; // 80101F10
  c->r[7]=R32(c->r[28]+0x00000060u); // 80101F14
  c->r[4]=0u+0x00000000u; // 80101F18
  c->r[6]=0u+0x00000000u; // 80101F1C
  c->r[8]=0u+0x00000000u; // 80101F20
  c->lr=0x80101F28u; f_80106D44(c); // 80101F24
  c->r[5]=R32(c->r[28]+0x00000080u); // 80101F28
  c->r[3]=c->r[30]|c->r[30]; // 80101F2C
  c->r[7]=R32(c->r[28]+0x000000A0u); // 80101F30
  c->r[4]=0u+0x00000001u; // 80101F34
  c->r[6]=0u+0x00000000u; // 80101F38
  c->r[8]=0u+0x00000000u; // 80101F3C
  c->lr=0x80101F44u; f_80106D44(c); // 80101F40
  c->r[26]=c->r[26]+0x00000001u; // 80101F44
  c->r[29]=c->r[29]+0x00000010u; // 80101F48
  cmpu(c,0,c->r[26],0x00000008u); // 80101F4C
  c->r[27]=c->r[27]+0x00000010u; // 80101F50
  c->r[30]=c->r[30]+0x00000010u; // 80101F54
  c->r[28]=c->r[28]+0x00000004u; // 80101F58
  if (crb(c,0)) { IRQCHK(c); goto L_80101EF0; } // 80101F5C
  c->r[29]=c->r[31]+0x000003D8u; // 80101F60
  c->r[27]=0u+0x00000000u; // 80101F64
  c->r[28]=0u+0x000C0000u; // 80101F68
L_80101F6C:;
  c->r[3]=c->r[29]|c->r[29]; // 80101F6C
  c->r[4]=c->r[28]|c->r[28]; // 80101F70
  c->r[5]=0u+0x00000010u; // 80101F74
  c->lr=0x80101F7Cu; f_80106DF8(c); // 80101F78
  c->r[27]=c->r[27]+0x00000001u; // 80101F7C
  c->r[29]=c->r[29]+0x00000010u; // 80101F80
  cmpu(c,0,c->r[27],0x00000010u); // 80101F84
  c->r[28]=c->r[28]+0x00002000u; // 80101F88
  if (crb(c,0)) { IRQCHK(c); goto L_80101F6C; } // 80101F8C
  c->r[29]=c->r[31]+0x000003D8u; // 80101F90
  c->r[27]=0u+0x00000000u; // 80101F94
  c->r[28]=0u+0x000E0000u; // 80101F98
L_80101F9C:;
  c->r[0]=c->r[27]+0x00000010u; // 80101F9C
  c->r[4]=c->r[28]|c->r[28]; // 80101FA0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80101FA4
  c->r[5]=0u+0x00000040u; // 80101FA8
  c->r[3]=c->r[29]+c->r[0]; // 80101FAC
  c->lr=0x80101FB4u; f_80106DF8(c); // 80101FB0
  c->r[27]=c->r[27]+0x00000001u; // 80101FB4
  c->r[28]=c->r[28]+0x00010000u; // 80101FB8
  cmpu(c,0,c->r[27],0x00000004u); // 80101FBC
  c->r[28]=c->r[28]+0xFFFF8000u; // 80101FC0
  if (crb(c,0)) { IRQCHK(c); goto L_80101F9C; } // 80101FC4
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80101FC8
  c->r[12]=0u+0x00000000u; // 80101FCC
  c->r[9]=0u+0xCC010000u; // 80101FD0
  c->r[10]=0u+0x00000008u; // 80101FD4
  W16(c->r[3]+0x00000006u,c->r[12]); // 80101FD8
  c->r[3]=0u+0x00000020u; // 80101FDC
  c->r[8]=0u+0x00000010u; // 80101FE0
  c->r[7]=0u+0x00001006u; // 80101FE4
  c->r[0]=R32(c->r[31]+0x000005F4u); // 80101FE8
  c->r[6]=0u+0x00000061u; // 80101FEC
  c->r[5]=0u+0x23000000u; // 80101FF0
  c->r[4]=0u+0x24000000u; // 80101FF4
  c->r[11]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 80101FF8
  c->r[0]=0u+0x67000000u; // 80101FFC
  W32(c->r[31]+0x000005F4u,c->r[11]); // 80102000
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 80102004
  W8(c->r[9]+0xFFFF8000u,c->r[3]); // 80102008
  c->r[3]=R32(c->r[31]+0x000005F4u); // 8010200C
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 80102010
  c->r[3]=0u+0x00000000u; // 80102014
  W8(c->r[9]+0xFFFF8000u,c->r[8]); // 80102018
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 8010201C
  W32(c->r[9]+0xFFFF8000u,c->r[12]); // 80102020
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 80102024
  W32(c->r[9]+0xFFFF8000u,c->r[5]); // 80102028
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 8010202C
  W32(c->r[9]+0xFFFF8000u,c->r[4]); // 80102030
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 80102034
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 80102038
  c->lr=0x80102040u; f_801077CC(c); // 8010203C
  c->r[3]=0u+0x00000002u; // 80102040
  c->lr=0x80102048u; f_80107080(c); // 80102044
  c->lr=0x8010204Cu; f_8010206C(c); // 80102048
  c->r[3]=0u+0x802F0000u; // 8010204C
  c->r[11]=c->r[1]+0x00000020u; // 80102050
  c->r[3]=c->r[3]+0x000045C0u; // 80102054
  c->lr=0x8010205Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80102058
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010205C
  c->lr=c->r[0]; // 80102060
  c->r[1]=c->r[1]+0x00000020u; // 80102064
  return; // 80102068
}

// __GXInitGX
void f_8010206C(Ctx* __restrict c) {
  trace_call(0x8010206Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010206C
  c->r[0]=c->lr; // 80102070
  c->r[10]=0u+0x43300000u; // 80102074
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80102078
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 8010207C
  c->r[31]=0u+0x00000000u; // 80102080
  W32(c->r[1]+0x00000098u,c->r[30]); // 80102084
  c->r[30]=0u+0x80290000u; // 80102088
  c->r[30]=c->r[30]+0x00005760u; // 8010208C
  W32(c->r[1]+0x00000094u,c->r[29]); // 80102090
  W32(c->r[1]+0x00000090u,c->r[28]); // 80102094
  c->r[9]=R8(c->r[2]+0xFFFF8C94u); // 80102098
  c->r[8]=R8(c->r[2]+0xFFFF8C95u); // 8010209C
  c->r[7]=R8(c->r[2]+0xFFFF8C96u); // 801020A0
  c->r[6]=R8(c->r[2]+0xFFFF8C97u); // 801020A4
  c->r[5]=R8(c->r[2]+0xFFFF8C98u); // 801020A8
  c->r[4]=R8(c->r[2]+0xFFFF8C99u); // 801020AC
  c->r[3]=R8(c->r[2]+0xFFFF8C9Au); // 801020B0
  c->r[0]=R8(c->r[2]+0xFFFF8C9Bu); // 801020B4
  W32(c->r[1]+0x00000078u,c->r[10]); // 801020B8
  W32(c->r[1]+0x00000080u,c->r[10]); // 801020BC
  W8(c->r[1]+0x00000024u,c->r[9]); // 801020C0
  W8(c->r[1]+0x00000025u,c->r[8]); // 801020C4
  W8(c->r[1]+0x00000026u,c->r[7]); // 801020C8
  W8(c->r[1]+0x00000027u,c->r[6]); // 801020CC
  W8(c->r[1]+0x00000020u,c->r[5]); // 801020D0
  W8(c->r[1]+0x00000021u,c->r[4]); // 801020D4
  W8(c->r[1]+0x00000022u,c->r[3]); // 801020D8
  W8(c->r[1]+0x00000023u,c->r[0]); // 801020DC
  c->lr=0x801020E4u; f_800F8364(c); // 801020E0
  cmps(c,0,(int32_t)c->r[3],2); // 801020E4
  if (crb(c,2)) { goto L_80102130; } // 801020E8
  if (!crb(c,0)) { goto L_80102100; } // 801020EC
  cmps(c,0,(int32_t)c->r[3],0); // 801020F0
  if (crb(c,2)) { goto L_8010210C; } // 801020F4
  if (!crb(c,0)) { goto L_80102118; } // 801020F8
  goto L_8010213C; // 801020FC
L_80102100:;
  cmps(c,0,(int32_t)c->r[3],5); // 80102100
  if (crb(c,2)) { goto L_80102124; } // 80102104
  goto L_8010213C; // 80102108
L_8010210C:;
  c->r[29]=0u+0x80290000u; // 8010210C
  c->r[29]=c->r[29]+0x00005BE0u; // 80102110
  goto L_80102144; // 80102114
L_80102118:;
  c->r[29]=0u+0x80290000u; // 80102118
  c->r[29]=c->r[29]+0x00005CD0u; // 8010211C
  goto L_80102144; // 80102120
L_80102124:;
  c->r[29]=0u+0x80290000u; // 80102124
  c->r[29]=c->r[29]+0x00005D0Cu; // 80102128
  goto L_80102144; // 8010212C
L_80102130:;
  c->r[29]=0u+0x80290000u; // 80102130
  c->r[29]=c->r[29]+0x00005C58u; // 80102134
  goto L_80102144; // 80102138
L_8010213C:;
  c->r[29]=0u+0x80290000u; // 8010213C
  c->r[29]=c->r[29]+0x00005BE0u; // 80102140
L_80102144:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102144
  c->r[4]=0u+0x01000000u; // 80102148
  c->r[3]=c->r[1]+0x0000001Cu; // 8010214C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80102150
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80102154
  c->lr=0x8010215Cu; f_801057B4(c); // 80102158
  c->r[3]=0u+0x00000000u; // 8010215C
  c->r[4]=0u+0x00000001u; // 80102160
  c->r[5]=0u+0x00000004u; // 80102164
  c->r[6]=0u+0x0000003Cu; // 80102168
  c->r[7]=0u+0x00000000u; // 8010216C
  c->r[8]=0u+0x0000007Du; // 80102170
  c->lr=0x80102178u; f_8010400C(c); // 80102174
  c->r[3]=0u+0x00000001u; // 80102178
  c->r[4]=0u+0x00000001u; // 8010217C
  c->r[5]=0u+0x00000005u; // 80102180
  c->r[6]=0u+0x0000003Cu; // 80102184
  c->r[7]=0u+0x00000000u; // 80102188
  c->r[8]=0u+0x0000007Du; // 8010218C
  c->lr=0x80102194u; f_8010400C(c); // 80102190
  c->r[3]=0u+0x00000002u; // 80102194
  c->r[4]=0u+0x00000001u; // 80102198
  c->r[5]=0u+0x00000006u; // 8010219C
  c->r[6]=0u+0x0000003Cu; // 801021A0
  c->r[7]=0u+0x00000000u; // 801021A4
  c->r[8]=0u+0x0000007Du; // 801021A8
  c->lr=0x801021B0u; f_8010400C(c); // 801021AC
  c->r[3]=0u+0x00000003u; // 801021B0
  c->r[4]=0u+0x00000001u; // 801021B4
  c->r[5]=0u+0x00000007u; // 801021B8
  c->r[6]=0u+0x0000003Cu; // 801021BC
  c->r[7]=0u+0x00000000u; // 801021C0
  c->r[8]=0u+0x0000007Du; // 801021C4
  c->lr=0x801021CCu; f_8010400C(c); // 801021C8
  c->r[3]=0u+0x00000004u; // 801021CC
  c->r[4]=0u+0x00000001u; // 801021D0
  c->r[5]=0u+0x00000008u; // 801021D4
  c->r[6]=0u+0x0000003Cu; // 801021D8
  c->r[7]=0u+0x00000000u; // 801021DC
  c->r[8]=0u+0x0000007Du; // 801021E0
  c->lr=0x801021E8u; f_8010400C(c); // 801021E4
  c->r[3]=0u+0x00000005u; // 801021E8
  c->r[4]=0u+0x00000001u; // 801021EC
  c->r[5]=0u+0x00000009u; // 801021F0
  c->r[6]=0u+0x0000003Cu; // 801021F4
  c->r[7]=0u+0x00000000u; // 801021F8
  c->r[8]=0u+0x0000007Du; // 801021FC
  c->lr=0x80102204u; f_8010400C(c); // 80102200
  c->r[3]=0u+0x00000006u; // 80102204
  c->r[4]=0u+0x00000001u; // 80102208
  c->r[5]=0u+0x0000000Au; // 8010220C
  c->r[6]=0u+0x0000003Cu; // 80102210
  c->r[7]=0u+0x00000000u; // 80102214
  c->r[8]=0u+0x0000007Du; // 80102218
  c->lr=0x80102220u; f_8010400C(c); // 8010221C
  c->r[3]=0u+0x00000007u; // 80102220
  c->r[4]=0u+0x00000001u; // 80102224
  c->r[5]=0u+0x0000000Bu; // 80102228
  c->r[6]=0u+0x0000003Cu; // 8010222C
  c->r[7]=0u+0x00000000u; // 80102230
  c->r[8]=0u+0x0000007Du; // 80102234
  c->lr=0x8010223Cu; f_8010400C(c); // 80102238
  c->r[3]=0u+0x00000001u; // 8010223C
  c->lr=0x80102244u; f_80104234(c); // 80102240
  c->lr=0x80102248u; f_80103938(c); // 80102244
  c->lr=0x8010224Cu; f_80103FFC(c); // 80102248
  c->r[28]=0u+0x00000009u; // 8010224C
L_80102250:;
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80102250
  c->r[3]=c->r[28]|c->r[28]; // 80102254
  c->r[5]=0u+0x00000000u; // 80102258
  c->lr=0x80102260u; f_80103FBC(c); // 8010225C
  c->r[28]=c->r[28]+0x00000001u; // 80102260
  cmpu(c,0,c->r[28],0x00000018u); // 80102264
  if (!crb(c,1)) { IRQCHK(c); goto L_80102250; } // 80102268
  c->r[28]=0u+0x00000000u; // 8010226C
L_80102270:;
  c->r[3]=c->r[28]|c->r[28]; // 80102270
  c->r[4]=c->r[30]+0x00000080u; // 80102274
  c->lr=0x8010227Cu; f_80103B0C(c); // 80102278
  c->r[28]=c->r[28]+0x00000001u; // 8010227C
  cmpu(c,0,c->r[28],0x00000008u); // 80102280
  if (crb(c,0)) { IRQCHK(c); goto L_80102270; } // 80102284
  c->r[3]=0u+0x00000006u; // 80102288
  c->r[4]=0u+0x00000000u; // 8010228C
  c->lr=0x80102294u; f_80105054(c); // 80102290
  c->r[3]=0u+0x00000006u; // 80102294
  c->r[4]=0u+0x00000000u; // 80102298
  c->lr=0x801022A0u; f_80105088(c); // 8010229C
  c->r[3]=0u+0x00000000u; // 801022A0
  c->r[4]=0u+0x00000000u; // 801022A4
  c->r[5]=0u+0x00000000u; // 801022A8
  c->lr=0x801022B0u; f_801050BC(c); // 801022AC
  c->r[3]=0u+0x00000001u; // 801022B0
  c->r[4]=0u+0x00000000u; // 801022B4
  c->r[5]=0u+0x00000000u; // 801022B8
  c->lr=0x801022C0u; f_801050BC(c); // 801022BC
  c->r[3]=0u+0x00000002u; // 801022C0
  c->r[4]=0u+0x00000000u; // 801022C4
  c->r[5]=0u+0x00000000u; // 801022C8
  c->lr=0x801022D0u; f_801050BC(c); // 801022CC
  c->r[3]=0u+0x00000003u; // 801022D0
  c->r[4]=0u+0x00000000u; // 801022D4
  c->r[5]=0u+0x00000000u; // 801022D8
  c->lr=0x801022E0u; f_801050BC(c); // 801022DC
  c->r[3]=0u+0x00000004u; // 801022E0
  c->r[4]=0u+0x00000000u; // 801022E4
  c->r[5]=0u+0x00000000u; // 801022E8
  c->lr=0x801022F0u; f_801050BC(c); // 801022EC
  c->r[3]=0u+0x00000005u; // 801022F0
  c->r[4]=0u+0x00000000u; // 801022F4
  c->r[5]=0u+0x00000000u; // 801022F8
  c->lr=0x80102300u; f_801050BC(c); // 801022FC
  c->r[3]=0u+0x00000006u; // 80102300
  c->r[4]=0u+0x00000000u; // 80102304
  c->r[5]=0u+0x00000000u; // 80102308
  c->lr=0x80102310u; f_801050BC(c); // 8010230C
  c->r[3]=0u+0x00000007u; // 80102310
  c->r[4]=0u+0x00000000u; // 80102314
  c->r[5]=0u+0x00000000u; // 80102318
  c->lr=0x80102320u; f_801050BC(c); // 8010231C
  {uint32_t ea=c->r[2]+0xFFFF8C90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80102320
  c->r[3]=c->r[1]+0x00000048u; // 80102324
  {uint32_t ea=c->r[2]+0xFFFF8C9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80102328
  c->r[4]=0u+0x00000000u; // 8010232C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80102330
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80102334
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80102338
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8010233C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80102340
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80102344
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80102348
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8010234C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80102350
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80102354
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 80102358
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8010235C
  c->lr=0x80102364u; f_80108934(c); // 80102360
  c->r[3]=c->r[1]+0x00000048u; // 80102364
  c->r[4]=0u+0x00000000u; // 80102368
  c->lr=0x80102370u; f_801089B0(c); // 8010236C
  c->r[3]=0u+0x00000000u; // 80102370
  c->lr=0x80102378u; f_80108A3C(c); // 80102374
  c->r[3]=c->r[1]+0x00000048u; // 80102378
  c->r[4]=0u+0x0000003Cu; // 8010237C
  c->r[5]=0u+0x00000000u; // 80102380
  c->lr=0x80102388u; f_80108A5C(c); // 80102384
  c->r[3]=c->r[1]+0x00000048u; // 80102388
  c->r[4]=0u+0x0000007Du; // 8010238C
  c->r[5]=0u+0x00000000u; // 80102390
  c->lr=0x80102398u; f_80108A5C(c); // 80102394
  c->r[3]=R16(c->r[29]+0x00000004u); // 80102398
  c->r[0]=R16(c->r[29]+0x00000008u); // 8010239C
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 801023A0
  {uint32_t ea=c->r[2]+0xFFFF8C90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801023A4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801023A8
  {uint32_t ea=c->r[2]+0xFFFF8CA8u; c->f[4]=RF64(ea);} // 801023AC
  c->f[2]=c->f[1]; // 801023B0
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=RF64(ea);} // 801023B4
  c->f[5]=c->f[1]; // 801023B8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 801023BC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 801023C0
  {uint32_t ea=c->r[2]+0xFFFF8C9Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801023C4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 801023C8
  c->lr=0x801023D0u; f_80108BDC(c); // 801023CC
  c->r[3]=c->r[30]+0x00000150u; // 801023D0
  c->lr=0x801023D8u; f_801088A8(c); // 801023D4
  c->lr=0x801023DCu; f_80105154(c); // 801023D8
  c->r[3]=0u+0x00000000u; // 801023DC
  c->lr=0x801023E4u; f_80105120(c); // 801023E0
  c->r[3]=0u+0x00000002u; // 801023E4
  c->lr=0x801023ECu; f_801050F8(c); // 801023E8
  c->r[3]=0u+0x00000000u; // 801023EC
  c->lr=0x801023F4u; f_80108CAC(c); // 801023F0
  c->r[5]=R16(c->r[29]+0x00000004u); // 801023F4
  c->r[3]=0u+0x00000000u; // 801023F8
  c->r[6]=R16(c->r[29]+0x00000006u); // 801023FC
  c->r[4]=0u+0x00000000u; // 80102400
  c->lr=0x80102408u; f_80108C08(c); // 80102404
  c->r[3]=0u+0x00000000u; // 80102408
  c->r[4]=0u+0x00000000u; // 8010240C
  c->lr=0x80102414u; f_80108C70(c); // 80102410
  c->r[3]=0u+0x00000000u; // 80102414
  c->lr=0x8010241Cu; f_80106338(c); // 80102418
  c->r[3]=0u+0x00000004u; // 8010241C
  c->r[4]=0u+0x00000000u; // 80102420
  c->r[5]=0u+0x00000000u; // 80102424
  c->r[6]=0u+0x00000001u; // 80102428
  c->r[7]=0u+0x00000000u; // 8010242C
  c->r[8]=0u+0x00000000u; // 80102430
  c->r[9]=0u+0x00000002u; // 80102434
  c->lr=0x8010243Cu; f_8010635C(c); // 80102438
  W32(c->r[1]+0x00000018u,c->r[31]); // 8010243C
  c->r[4]=c->r[1]+0x00000018u; // 80102440
  c->r[3]=0u+0x00000004u; // 80102444
  c->lr=0x8010244Cu; f_80106188(c); // 80102448
  c->r[0]=R32(c->r[1]+0x00000020u); // 8010244C
  c->r[4]=c->r[1]+0x00000014u; // 80102450
  c->r[3]=0u+0x00000004u; // 80102454
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102458
  c->lr=0x80102460u; f_80106260(c); // 8010245C
  c->r[3]=0u+0x00000005u; // 80102460
  c->r[4]=0u+0x00000000u; // 80102464
  c->r[5]=0u+0x00000000u; // 80102468
  c->r[6]=0u+0x00000001u; // 8010246C
  c->r[7]=0u+0x00000000u; // 80102470
  c->r[8]=0u+0x00000000u; // 80102474
  c->r[9]=0u+0x00000002u; // 80102478
  c->lr=0x80102480u; f_8010635C(c); // 8010247C
  W32(c->r[1]+0x00000010u,c->r[31]); // 80102480
  c->r[4]=c->r[1]+0x00000010u; // 80102484
  c->r[3]=0u+0x00000005u; // 80102488
  c->lr=0x80102490u; f_80106188(c); // 8010248C
  c->r[0]=R32(c->r[1]+0x00000020u); // 80102490
  c->r[4]=c->r[1]+0x0000000Cu; // 80102494
  c->r[3]=0u+0x00000005u; // 80102498
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010249C
  c->lr=0x801024A4u; f_80106260(c); // 801024A0
  c->lr=0x801024A8u; f_80106E18(c); // 801024A4
  c->r[3]=0u+0x80100000u; // 801024A8
  c->r[3]=c->r[3]+0x000017B4u; // 801024AC
  c->lr=0x801024B4u; f_80106E60(c); // 801024B0
  c->r[3]=0u+0x80100000u; // 801024B4
  c->r[3]=c->r[3]+0x000018A8u; // 801024B8
  c->lr=0x801024C0u; f_80106E74(c); // 801024BC
  c->r[3]=c->r[1]+0x00000028u; // 801024C0
  c->r[4]=c->r[30]+0x00000060u; // 801024C4
  c->r[5]=0u+0x00000004u; // 801024C8
  c->r[6]=0u+0x00000004u; // 801024CC
  c->r[7]=0u+0x00000003u; // 801024D0
  c->r[8]=0u+0x00000000u; // 801024D4
  c->r[9]=0u+0x00000000u; // 801024D8
  c->r[10]=0u+0x00000000u; // 801024DC
  c->lr=0x801024E4u; f_801065E4(c); // 801024E0
  c->r[3]=c->r[1]+0x00000028u; // 801024E4
  c->r[4]=0u+0x00000000u; // 801024E8
  c->lr=0x801024F0u; f_80106C34(c); // 801024EC
  c->r[3]=c->r[1]+0x00000028u; // 801024F0
  c->r[4]=0u+0x00000001u; // 801024F4
  c->lr=0x801024FCu; f_80106C34(c); // 801024F8
  c->r[3]=c->r[1]+0x00000028u; // 801024FC
  c->r[4]=0u+0x00000002u; // 80102500
  c->lr=0x80102508u; f_80106C34(c); // 80102504
  c->r[3]=c->r[1]+0x00000028u; // 80102508
  c->r[4]=0u+0x00000003u; // 8010250C
  c->lr=0x80102514u; f_80106C34(c); // 80102510
  c->r[3]=c->r[1]+0x00000028u; // 80102514
  c->r[4]=0u+0x00000004u; // 80102518
  c->lr=0x80102520u; f_80106C34(c); // 8010251C
  c->r[3]=c->r[1]+0x00000028u; // 80102520
  c->r[4]=0u+0x00000005u; // 80102524
  c->lr=0x8010252Cu; f_80106C34(c); // 80102528
  c->r[3]=c->r[1]+0x00000028u; // 8010252C
  c->r[4]=0u+0x00000006u; // 80102530
  c->lr=0x80102538u; f_80106C34(c); // 80102534
  c->r[3]=c->r[1]+0x00000028u; // 80102538
  c->r[4]=0u+0x00000007u; // 8010253C
  c->lr=0x80102544u; f_80106C34(c); // 80102540
  c->r[3]=0u+0x00000000u; // 80102544
  c->r[4]=0u+0x00000000u; // 80102548
  c->r[5]=0u+0x00000000u; // 8010254C
  c->r[6]=0u+0x00000004u; // 80102550
  c->lr=0x80102558u; f_80107D20(c); // 80102554
  c->r[3]=0u+0x00000001u; // 80102558
  c->r[4]=0u+0x00000001u; // 8010255C
  c->r[5]=0u+0x00000001u; // 80102560
  c->r[6]=0u+0x00000004u; // 80102564
  c->lr=0x8010256Cu; f_80107D20(c); // 80102568
  c->r[3]=0u+0x00000002u; // 8010256C
  c->r[4]=0u+0x00000002u; // 80102570
  c->r[5]=0u+0x00000002u; // 80102574
  c->r[6]=0u+0x00000004u; // 80102578
  c->lr=0x80102580u; f_80107D20(c); // 8010257C
  c->r[3]=0u+0x00000003u; // 80102580
  c->r[4]=0u+0x00000003u; // 80102584
  c->r[5]=0u+0x00000003u; // 80102588
  c->r[6]=0u+0x00000004u; // 8010258C
  c->lr=0x80102594u; f_80107D20(c); // 80102590
  c->r[3]=0u+0x00000004u; // 80102594
  c->r[4]=0u+0x00000004u; // 80102598
  c->r[5]=0u+0x00000004u; // 8010259C
  c->r[6]=0u+0x00000004u; // 801025A0
  c->lr=0x801025A8u; f_80107D20(c); // 801025A4
  c->r[3]=0u+0x00000005u; // 801025A8
  c->r[4]=0u+0x00000005u; // 801025AC
  c->r[5]=0u+0x00000005u; // 801025B0
  c->r[6]=0u+0x00000004u; // 801025B4
  c->lr=0x801025BCu; f_80107D20(c); // 801025B8
  c->r[3]=0u+0x00000006u; // 801025BC
  c->r[4]=0u+0x00000006u; // 801025C0
  c->r[5]=0u+0x00000006u; // 801025C4
  c->r[6]=0u+0x00000004u; // 801025C8
  c->lr=0x801025D0u; f_80107D20(c); // 801025CC
  c->r[3]=0u+0x00000007u; // 801025D0
  c->r[4]=0u+0x00000007u; // 801025D4
  c->r[5]=0u+0x00000007u; // 801025D8
  c->r[6]=0u+0x00000004u; // 801025DC
  c->lr=0x801025E4u; f_80107D20(c); // 801025E0
  c->r[3]=0u+0x00000008u; // 801025E4
  c->r[4]=0u+0x000000FFu; // 801025E8
  c->r[5]=0u+0x000000FFu; // 801025EC
  c->r[6]=0u+0x000000FFu; // 801025F0
  c->lr=0x801025F8u; f_80107D20(c); // 801025F4
  c->r[3]=0u+0x00000009u; // 801025F8
  c->r[4]=0u+0x000000FFu; // 801025FC
  c->r[5]=0u+0x000000FFu; // 80102600
  c->r[6]=0u+0x000000FFu; // 80102604
  c->lr=0x8010260Cu; f_80107D20(c); // 80102608
  c->r[3]=0u+0x0000000Au; // 8010260C
  c->r[4]=0u+0x000000FFu; // 80102610
  c->r[5]=0u+0x000000FFu; // 80102614
  c->r[6]=0u+0x000000FFu; // 80102618
  c->lr=0x80102620u; f_80107D20(c); // 8010261C
  c->r[3]=0u+0x0000000Bu; // 80102620
  c->r[4]=0u+0x000000FFu; // 80102624
  c->r[5]=0u+0x000000FFu; // 80102628
  c->r[6]=0u+0x000000FFu; // 8010262C
  c->lr=0x80102634u; f_80107D20(c); // 80102630
  c->r[3]=0u+0x0000000Cu; // 80102634
  c->r[4]=0u+0x000000FFu; // 80102638
  c->r[5]=0u+0x000000FFu; // 8010263C
  c->r[6]=0u+0x000000FFu; // 80102640
  c->lr=0x80102648u; f_80107D20(c); // 80102644
  c->r[3]=0u+0x0000000Du; // 80102648
  c->r[4]=0u+0x000000FFu; // 8010264C
  c->r[5]=0u+0x000000FFu; // 80102650
  c->r[6]=0u+0x000000FFu; // 80102654
  c->lr=0x8010265Cu; f_80107D20(c); // 80102658
  c->r[3]=0u+0x0000000Eu; // 8010265C
  c->r[4]=0u+0x000000FFu; // 80102660
  c->r[5]=0u+0x000000FFu; // 80102664
  c->r[6]=0u+0x000000FFu; // 80102668
  c->lr=0x80102670u; f_80107D20(c); // 8010266C
  c->r[3]=0u+0x0000000Fu; // 80102670
  c->r[4]=0u+0x000000FFu; // 80102674
  c->r[5]=0u+0x000000FFu; // 80102678
  c->r[6]=0u+0x000000FFu; // 8010267C
  c->lr=0x80102684u; f_80107D20(c); // 80102680
  c->r[3]=0u+0x00000001u; // 80102684
  c->lr=0x8010268Cu; f_80107E7C(c); // 80102688
  c->r[3]=0u+0x00000000u; // 8010268C
  c->r[4]=0u+0x00000003u; // 80102690
  c->lr=0x80102698u; f_80107820(c); // 80102694
  c->r[3]=0u+0x00000007u; // 80102698
  c->r[4]=0u+0x00000000u; // 8010269C
  c->r[5]=0u+0x00000000u; // 801026A0
  c->r[6]=0u+0x00000007u; // 801026A4
  c->r[7]=0u+0x00000000u; // 801026A8
  c->lr=0x801026B0u; f_80107C5C(c); // 801026AC
  c->r[3]=0u+0x00000000u; // 801026B0
  c->r[4]=0u+0x00000011u; // 801026B4
  c->r[5]=0u+0x00000000u; // 801026B8
  c->lr=0x801026C0u; f_80107C94(c); // 801026BC
  c->r[28]=0u+0x00000000u; // 801026C0
L_801026C4:;
  c->r[3]=c->r[28]|c->r[28]; // 801026C4
  c->r[4]=0u+0x00000006u; // 801026C8
  c->lr=0x801026D0u; f_80107B04(c); // 801026CC
  c->r[3]=c->r[28]|c->r[28]; // 801026D0
  c->r[4]=0u+0x00000000u; // 801026D4
  c->lr=0x801026DCu; f_80107B54(c); // 801026D8
  c->r[3]=c->r[28]|c->r[28]; // 801026DC
  c->r[4]=0u+0x00000000u; // 801026E0
  c->r[5]=0u+0x00000000u; // 801026E4
  c->lr=0x801026ECu; f_80107BA4(c); // 801026E8
  c->r[28]=c->r[28]+0x00000001u; // 801026EC
  cmpu(c,0,c->r[28],0x00000010u); // 801026F0
  if (crb(c,0)) { IRQCHK(c); goto L_801026C4; } // 801026F4
  c->r[3]=0u+0x00000000u; // 801026F8
  c->r[4]=0u+0x00000000u; // 801026FC
  c->r[5]=0u+0x00000001u; // 80102700
  c->r[6]=0u+0x00000002u; // 80102704
  c->r[7]=0u+0x00000003u; // 80102708
  c->lr=0x80102710u; f_80107BE0(c); // 8010270C
  c->r[3]=0u+0x00000001u; // 80102710
  c->r[4]=0u+0x00000000u; // 80102714
  c->r[5]=0u+0x00000000u; // 80102718
  c->r[6]=0u+0x00000000u; // 8010271C
  c->r[7]=0u+0x00000003u; // 80102720
  c->lr=0x80102728u; f_80107BE0(c); // 80102724
  c->r[3]=0u+0x00000002u; // 80102728
  c->r[4]=0u+0x00000001u; // 8010272C
  c->r[5]=0u+0x00000001u; // 80102730
  c->r[6]=0u+0x00000001u; // 80102734
  c->r[7]=0u+0x00000003u; // 80102738
  c->lr=0x80102740u; f_80107BE0(c); // 8010273C
  c->r[3]=0u+0x00000003u; // 80102740
  c->r[4]=0u+0x00000002u; // 80102744
  c->r[5]=0u+0x00000002u; // 80102748
  c->r[6]=0u+0x00000002u; // 8010274C
  c->r[7]=0u+0x00000003u; // 80102750
  c->lr=0x80102758u; f_80107BE0(c); // 80102754
  c->r[28]=0u+0x00000000u; // 80102758
L_8010275C:;
  c->r[3]=c->r[28]|c->r[28]; // 8010275C
  c->lr=0x80102764u; f_80107780(c); // 80102760
  c->r[28]=c->r[28]+0x00000001u; // 80102764
  cmpu(c,0,c->r[28],0x00000010u); // 80102768
  if (crb(c,0)) { IRQCHK(c); goto L_8010275C; } // 8010276C
  c->r[3]=0u+0x00000000u; // 80102770
  c->lr=0x80102778u; f_80107760(c); // 80102774
  c->r[3]=0u+0x00000000u; // 80102778
  c->r[4]=0u+0x00000000u; // 8010277C
  c->r[5]=0u+0x00000000u; // 80102780
  c->lr=0x80102788u; f_80107590(c); // 80102784
  c->r[3]=0u+0x00000001u; // 80102788
  c->r[4]=0u+0x00000000u; // 8010278C
  c->r[5]=0u+0x00000000u; // 80102790
  c->lr=0x80102798u; f_80107590(c); // 80102794
  c->r[3]=0u+0x00000002u; // 80102798
  c->r[4]=0u+0x00000000u; // 8010279C
  c->r[5]=0u+0x00000000u; // 801027A0
  c->lr=0x801027A8u; f_80107590(c); // 801027A4
  c->r[3]=0u+0x00000003u; // 801027A8
  c->r[4]=0u+0x00000000u; // 801027AC
  c->r[5]=0u+0x00000000u; // 801027B0
  c->lr=0x801027B8u; f_80107590(c); // 801027B4
  {uint32_t ea=c->r[2]+0xFFFF8C9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801027B8
  c->r[4]=c->r[1]+0x00000008u; // 801027BC
  W32(c->r[1]+0x00000008u,c->r[31]); // 801027C0
  c->r[3]=0u+0x00000000u; // 801027C4
  c->f[4]=c->f[2]; // 801027C8
  {uint32_t ea=c->r[2]+0xFFFF8C90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801027CC
  {uint32_t ea=c->r[2]+0xFFFF8CA0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801027D0
  c->lr=0x801027D8u; f_80107EA0(c); // 801027D4
  c->r[3]=0u+0x00000000u; // 801027D8
  c->r[4]=0u+0x00000000u; // 801027DC
  c->r[5]=0u+0x00000000u; // 801027E0
  c->lr=0x801027E8u; f_8010822C(c); // 801027E4
  c->r[3]=0u+0x00000000u; // 801027E8
  c->r[4]=0u+0x00000004u; // 801027EC
  c->r[5]=0u+0x00000005u; // 801027F0
  c->r[6]=0u+0x00000000u; // 801027F4
  c->lr=0x801027FCu; f_80108350(c); // 801027F8
  c->r[3]=0u+0x00000001u; // 801027FC
  c->lr=0x80102804u; f_801083A0(c); // 80102800
  c->r[3]=0u+0x00000001u; // 80102804
  c->lr=0x8010280Cu; f_801083CC(c); // 80102808
  c->r[3]=0u+0x00000001u; // 8010280C
  c->r[4]=0u+0x00000003u; // 80102810
  c->r[5]=0u+0x00000001u; // 80102814
  c->lr=0x8010281Cu; f_801083F8(c); // 80102818
  c->r[3]=0u+0x00000001u; // 8010281C
  c->lr=0x80102824u; f_8010842C(c); // 80102820
  c->r[3]=0u+0x00000001u; // 80102824
  c->lr=0x8010282Cu; f_80108504(c); // 80102828
  c->r[3]=0u+0x00000000u; // 8010282C
  c->r[4]=0u+0x00000000u; // 80102830
  c->lr=0x80102838u; f_80108530(c); // 80102834
  c->r[3]=0u+0x00000000u; // 80102838
  c->r[4]=0u+0x00000000u; // 8010283C
  c->lr=0x80102844u; f_8010845C(c); // 80102840
  c->r[3]=0u+0x00000001u; // 80102844
  c->r[4]=0u+0x00000001u; // 80102848
  c->lr=0x80102850u; f_80108560(c); // 8010284C
  c->r[0]=R16(c->r[29]+0x00000008u); // 80102850
  c->r[3]=R16(c->r[29]+0x00000010u); // 80102854
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80102858
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8010285C
  if (!crb(c,2)) { goto L_8010286C; } // 80102860
  c->r[4]=0u+0x00000001u; // 80102864
  goto L_80102870; // 80102868
L_8010286C:;
  c->r[4]=0u+0x00000000u; // 8010286C
L_80102870:;
  c->r[3]=R8(c->r[29]+0x00000018u); // 80102870
  c->lr=0x80102878u; f_80108594(c); // 80102874
  c->r[5]=R16(c->r[29]+0x00000004u); // 80102878
  c->r[3]=0u+0x00000000u; // 8010287C
  c->r[6]=R16(c->r[29]+0x00000006u); // 80102880
  c->r[4]=0u+0x00000000u; // 80102884
  c->lr=0x8010288Cu; f_801052B0(c); // 80102888
  c->r[3]=R16(c->r[29]+0x00000004u); // 8010288C
  c->r[4]=R16(c->r[29]+0x00000006u); // 80102890
  c->lr=0x80102898u; f_80105330(c); // 80102894
  c->r[3]=R16(c->r[29]+0x00000008u); // 80102898
  c->r[0]=R16(c->r[29]+0x00000006u); // 8010289C
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 801028A0
  {uint32_t ea=c->r[2]+0xFFFF8CA8u; c->f[2]=RF64(ea);} // 801028A4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801028A8
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 801028AC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 801028B0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801028B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801028B8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801028BC
  c->lr=0x801028C4u; f_801056E8(c); // 801028C0
  c->r[3]=0u+0x00000003u; // 801028C4
  c->lr=0x801028CCu; f_80105490(c); // 801028C8
  c->r[3]=R8(c->r[29]+0x00000019u); // 801028CC
  c->r[4]=c->r[29]+0x0000001Au; // 801028D0
  c->r[6]=c->r[29]+0x00000032u; // 801028D4
  c->r[5]=0u+0x00000001u; // 801028D8
  c->lr=0x801028E0u; f_8010582C(c); // 801028DC
  c->r[3]=0u+0x00000000u; // 801028E0
  c->lr=0x801028E8u; f_80105A10(c); // 801028E4
  c->r[3]=0u+0x00000000u; // 801028E8
  c->lr=0x801028F0u; f_80105470(c); // 801028EC
  c->lr=0x801028F4u; f_80105CB8(c); // 801028F0
  c->r[3]=0u+0x00000001u; // 801028F4
  c->lr=0x801028FCu; f_8010496C(c); // 801028F8
  c->r[3]=0u+0x00000001u; // 801028FC
  c->lr=0x80102904u; f_801048FC(c); // 80102900
  c->r[3]=0u+0x00000000u; // 80102904
  c->lr=0x8010290Cu; f_80104998(c); // 80102908
  c->r[3]=0u+0x00000000u; // 8010290C
  c->r[4]=0u+0x00000000u; // 80102910
  c->r[5]=0u+0x00000001u; // 80102914
  c->r[6]=0u+0x0000000Fu; // 80102918
  c->lr=0x80102920u; f_80104910(c); // 8010291C
  c->r[3]=0u+0x00000007u; // 80102920
  c->r[4]=0u+0x00000000u; // 80102924
  c->lr=0x8010292Cu; f_801048D4(c); // 80102928
  c->r[3]=0u+0x00000001u; // 8010292C
  c->lr=0x80102934u; f_801048E4(c); // 80102930
  c->r[3]=0u+0x00000000u; // 80102934
  c->r[4]=0u+0x00000000u; // 80102938
  c->lr=0x80102940u; f_80104980(c); // 8010293C
  c->r[3]=0u+0x00000001u; // 80102940
  c->r[4]=0u+0x00000007u; // 80102944
  c->r[5]=0u+0x00000001u; // 80102948
  c->lr=0x80102950u; f_801049AC(c); // 8010294C
  c->r[3]=0u+0x00000023u; // 80102950
  c->r[4]=0u+0x00000016u; // 80102954
  c->lr=0x8010295Cu; f_80108D5C(c); // 80102958
  c->lr=0x80102960u; f_80109588(c); // 8010295C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80102960
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80102964
  c->r[30]=R32(c->r[1]+0x00000098u); // 80102968
  c->r[29]=R32(c->r[1]+0x00000094u); // 8010296C
  c->r[28]=R32(c->r[1]+0x00000090u); // 80102970
  c->lr=c->r[0]; // 80102974
  c->r[1]=c->r[1]+0x000000A0u; // 80102978
  return; // 8010297C
}

// GXCPInterruptHandler
void f_80102980(Ctx* __restrict c) {
  trace_call(0x80102980u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102980
  c->r[0]=c->lr; // 80102984
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80102988
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8010298C
  c->r[31]=R32(c->r[2]+0xFFFF8C88u); // 80102990
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80102994
  c->r[30]=c->r[4]|c->r[4]; // 80102998
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 8010299C
  c->r[0]=R16(c->r[3]+0x00000000u); // 801029A0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801029A4
  c->r[0]=R32(c->r[31]+0x00000008u); // 801029A8
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 801029AC
  if (crb(c,2)) { goto L_80102A00; } // 801029B0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801029B4
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 801029B8
  if (crb(c,2)) { goto L_80102A00; } // 801029BC
  c->r[3]=R32(c->r[13]+0xFFFF9A54u); // 801029C0
  c->lr=0x801029C8u; f_800E87CC(c); // 801029C4
  c->r[0]=0u+0x00000000u; // 801029C8
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801029CC
  W32(c->r[13]+0xFFFF9A50u,c->r[0]); // 801029D0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801029D4
  c->r[0]=c->r[0]|0x00000003u; // 801029D8
  W32(c->r[3]+0x00000010u,c->r[0]); // 801029DC
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 801029E0
  W16(c->r[3]+0x00000004u,c->r[0]); // 801029E4
  c->r[0]=R32(c->r[31]+0x00000008u); // 801029E8
  c->r[0]=c->r[0]|0x00000004u; // 801029EC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801029F0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801029F4
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 801029F8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801029FC
L_80102A00:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80102A00
  c->r[0]=rotl(c->r[0],30)&0x00000001u; cr0(c,c->r[0]); // 80102A04
  if (crb(c,2)) { goto L_80102A68; } // 80102A08
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80102A0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80102A10
  if (crb(c,2)) { goto L_80102A68; } // 80102A14
  c->r[3]=R32(c->r[13]+0xFFFF9A44u); // 80102A18
  c->r[0]=0u+0x00000001u; // 80102A1C
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80102A20
  c->r[3]=c->r[3]+0x00000001u; // 80102A24
  W32(c->r[13]+0xFFFF9A44u,c->r[3]); // 80102A28
  c->r[3]=R32(c->r[31]+0x00000008u); // 80102A2C
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFBu; // 80102A30
  c->r[4]=c->r[4]|0x00000008u; // 80102A34
  W32(c->r[31]+0x00000008u,c->r[4]); // 80102A38
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102A3C
  W16(c->r[3]+0x00000002u,c->r[4]); // 80102A40
  c->r[3]=R32(c->r[5]+0x00000010u); // 80102A44
  c->r[3]=c->r[3]|0x00000001u; // 80102A48
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFDu; // 80102A4C
  W32(c->r[5]+0x00000010u,c->r[4]); // 80102A50
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102A54
  W16(c->r[3]+0x00000004u,c->r[4]); // 80102A58
  W32(c->r[13]+0xFFFF9A50u,c->r[0]); // 80102A5C
  c->r[3]=R32(c->r[13]+0xFFFF9A54u); // 80102A60
  c->lr=0x80102A68u; f_800E8A64(c); // 80102A64
L_80102A68:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80102A68
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 80102A6C
  if (crb(c,2)) { goto L_80102AC8; } // 80102A70
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80102A74
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 80102A78
  if (crb(c,2)) { goto L_80102AC8; } // 80102A7C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFDFu; // 80102A80
  W32(c->r[31]+0x00000008u,c->r[0]); // 80102A84
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102A88
  W16(c->r[3]+0x00000002u,c->r[0]); // 80102A8C
  c->r[0]=R32(c->r[13]+0xFFFF9A4Cu); // 80102A90
  cmps(c,0,(int32_t)c->r[0],0); // 80102A94
  if (crb(c,2)) { goto L_80102AC8; } // 80102A98
  c->r[3]=c->r[1]+0x00000008u; // 80102A9C
  c->lr=0x80102AA4u; f_800E0DEC(c); // 80102AA0
  c->r[3]=c->r[1]+0x00000008u; // 80102AA4
  c->lr=0x80102AACu; f_800E0BC4(c); // 80102AA8
  c->r[12]=R32(c->r[13]+0xFFFF9A4Cu); // 80102AAC
  c->ctr=c->r[12]; // 80102AB0
  if (true) { c->lr=0x80102AB8u; dispatch(c,c->ctr); } // 80102AB4
  c->r[3]=c->r[1]+0x00000008u; // 80102AB8
  c->lr=0x80102AC0u; f_800E0DEC(c); // 80102ABC
  c->r[3]=c->r[30]|c->r[30]; // 80102AC0
  c->lr=0x80102AC8u; f_800E0BC4(c); // 80102AC4
L_80102AC8:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80102AC8
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80102ACC
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80102AD0
  c->lr=c->r[0]; // 80102AD4
  c->r[1]=c->r[1]+0x000002E0u; // 80102AD8
  return; // 80102ADC
}

// GXInitFifoBase
void f_80102AE0(Ctx* __restrict c) {
  trace_call(0x80102AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102AE0
  c->r[0]=c->lr; // 80102AE4
  c->r[7]=c->r[4]+c->r[5]; // 80102AE8
  c->r[6]=c->r[5]+0xFFFFC000u; // 80102AEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80102AF0
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 80102AF4
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFE0u; // 80102AF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80102AFC
  c->r[31]=0u+0x00000000u; // 80102B00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80102B04
  c->r[30]=c->r[4]|c->r[4]; // 80102B08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80102B0C
  c->r[29]=c->r[3]|c->r[3]; // 80102B10
  W32(c->r[3]+0x00000000u,c->r[4]); // 80102B14
  W32(c->r[3]+0x00000004u,c->r[7]); // 80102B18
  W32(c->r[3]+0x00000008u,c->r[5]); // 80102B1C
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 80102B20
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 80102B24
  W32(c->r[3]+0x00000010u,c->r[0]); // 80102B28
  c->lr=0x80102B30u; f_800E4F54(c); // 80102B2C
  cmps(c,0,(int32_t)c->r[31],0); // 80102B30
  W32(c->r[29]+0x00000014u,c->r[30]); // 80102B34
  W32(c->r[29]+0x00000018u,c->r[30]); // 80102B38
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 80102B3C
  if (!crb(c,0)) { goto L_80102B4C; } // 80102B40
  c->r[0]=R32(c->r[29]+0x00000008u); // 80102B44
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80102B48
L_80102B4C:;
  c->lr=0x80102B50u; f_800E4F7C(c); // 80102B4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102B50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80102B54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80102B58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80102B5C
  c->lr=c->r[0]; // 80102B60
  c->r[1]=c->r[1]+0x00000020u; // 80102B64
  return; // 80102B68
}

// CPGPLinkCheck
void f_80102B6C(Ctx* __restrict c) {
  trace_call(0x80102B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102B6C
  c->r[0]=c->lr; // 80102B70
  c->r[7]=0u+0x00000000u; // 80102B74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102B78
  c->r[0]=R8(c->r[13]+0xFFFF9A40u); // 80102B7C
  cmps(c,0,(int32_t)c->r[0],0); // 80102B80
  if (crb(c,2)) { goto L_80102B94; } // 80102B84
  c->r[0]=R8(c->r[13]+0xFFFF9A41u); // 80102B88
  cmps(c,0,(int32_t)c->r[0],0); // 80102B8C
  if (!crb(c,2)) { goto L_80102B9C; } // 80102B90
L_80102B94:;
  c->r[3]=0u+0x00000000u; // 80102B94
  goto L_80102C54; // 80102B98
L_80102B9C:;
  c->r[4]=0u+0x802F0000u; // 80102B9C
  c->r[3]=0u+0x802F0000u; // 80102BA0
  c->r[6]=R32(c->r[4]+0x00004C40u); // 80102BA4
  c->r[4]=R32(c->r[3]+0x00004C64u); // 80102BA8
  cmpu(c,0,c->r[4],c->r[6]); // 80102BAC
  if (!crb(c,2)) { goto L_80102BB8; } // 80102BB0
  c->r[7]=0u+0x00000001u; // 80102BB4
L_80102BB8:;
  c->r[5]=0u+0x802F0000u; // 80102BB8
  c->r[3]=0u+0x802F0000u; // 80102BBC
  c->r[5]=c->r[5]+0x00004C40u; // 80102BC0
  c->r[3]=c->r[3]+0x00004C64u; // 80102BC4
  c->r[0]=R32(c->r[5]+0x00000004u); // 80102BC8
  c->r[5]=R32(c->r[3]+0x00000004u); // 80102BCC
  cmpu(c,0,c->r[5],c->r[0]); // 80102BD0
  if (!crb(c,2)) { goto L_80102BDC; } // 80102BD4
  c->r[7]=c->r[7]+0x00000001u; // 80102BD8
L_80102BDC:;
  cmpu(c,0,c->r[7],0x00000002u); // 80102BDC
  if (!crb(c,2)) { goto L_80102BEC; } // 80102BE0
  c->r[3]=0u+0x00000001u; // 80102BE4
  goto L_80102C54; // 80102BE8
L_80102BEC:;
  c->r[3]=c->r[5]-c->r[6]; cr0(c,c->r[3]); // 80102BEC
  c->r[6]=c->r[0]-c->r[4]; // 80102BF0
  c->r[0]=0u+0x00000000u; // 80102BF4
  if (!crb(c,1)) { goto L_80102C04; } // 80102BF8
  cmps(c,0,(int32_t)c->r[6],0); // 80102BFC
  if (crb(c,1)) { goto L_80102C14; } // 80102C00
L_80102C04:;
  cmps(c,0,(int32_t)c->r[3],0); // 80102C04
  if (!crb(c,0)) { goto L_80102C18; } // 80102C08
  cmps(c,0,(int32_t)c->r[6],0); // 80102C0C
  if (!crb(c,0)) { goto L_80102C18; } // 80102C10
L_80102C14:;
  c->r[0]=0u+0x00000001u; // 80102C14
L_80102C18:;
  cmps(c,0,(int32_t)c->r[0],0); // 80102C18
  if (crb(c,2)) { goto L_80102C50; } // 80102C1C
  c->r[3]=0u+0x80290000u; // 80102C20
  c->r[3]=c->r[3]+0x000059A0u; // 80102C24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80102C28
  c->lr=0x80102C30u; f_800E11F8(c); // 80102C2C
  c->r[4]=0u+0x802F0000u; // 80102C30
  c->r[3]=0u+0x80290000u; // 80102C34
  c->r[5]=c->r[4]+0x00004C40u; // 80102C38
  c->r[4]=R32(c->r[4]+0x00004C40u); // 80102C3C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80102C40
  c->r[3]=c->r[3]+0x000059B8u; // 80102C44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80102C48
  c->lr=0x80102C50u; f_800E11F8(c); // 80102C4C
L_80102C50:;
  c->r[3]=0u+0x00000000u; // 80102C50
L_80102C54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102C54
  c->lr=c->r[0]; // 80102C58
  c->r[1]=c->r[1]+0x00000010u; // 80102C5C
  return; // 80102C60
}

// GXSetCPUFifo
void f_80102C64(Ctx* __restrict c) {
  trace_call(0x80102C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102C64
  c->r[0]=c->lr; // 80102C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 80102C6C
  c->r[11]=c->r[1]+0x00000020u; // 80102C70
  c->lr=0x80102C78u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80102C74
  c->r[27]=c->r[3]|c->r[3]; // 80102C78
  c->lr=0x80102C80u; f_800E4F54(c); // 80102C7C
  cmps(c,0,(int32_t)c->r[27],0); // 80102C80
  c->r[30]=c->r[3]|c->r[3]; // 80102C84
  if (!crb(c,2)) { goto L_80102CB0; } // 80102C88
  c->r[4]=0u+0x802F0000u; // 80102C8C
  c->r[0]=0u+0x00000000u; // 80102C90
  c->r[4]=c->r[4]+0x00004C64u; // 80102C94
  W8(c->r[13]+0xFFFF9A40u,c->r[0]); // 80102C98
  W8(c->r[13]+0xFFFF9A58u,c->r[0]); // 80102C9C
  W8(c->r[4]+0x00000022u,c->r[0]); // 80102CA0
  W8(c->r[4]+0x00000021u,c->r[0]); // 80102CA4
  c->lr=0x80102CACu; f_800E4F7C(c); // 80102CA8
  goto L_80102E2C; // 80102CAC
L_80102CB0:;
  c->r[28]=0u+0x802F0000u; // 80102CB0
  c->r[3]=R32(c->r[27]+0x00000000u); // 80102CB4
  c->r[0]=R32(c->r[27]+0x00000004u); // 80102CB8
  c->r[31]=c->r[28]+0x00004C64u; // 80102CBC
  c->r[29]=0u+0x00000001u; // 80102CC0
  W32(c->r[31]+0x00000000u,c->r[3]); // 80102CC4
  W32(c->r[31]+0x00000004u,c->r[0]); // 80102CC8
  c->r[3]=R32(c->r[27]+0x00000008u); // 80102CCC
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80102CD0
  W32(c->r[31]+0x00000008u,c->r[3]); // 80102CD4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80102CD8
  c->r[3]=R32(c->r[27]+0x00000010u); // 80102CDC
  c->r[0]=R32(c->r[27]+0x00000014u); // 80102CE0
  W32(c->r[31]+0x00000010u,c->r[3]); // 80102CE4
  W32(c->r[31]+0x00000014u,c->r[0]); // 80102CE8
  c->r[3]=R32(c->r[27]+0x00000018u); // 80102CEC
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 80102CF0
  W32(c->r[31]+0x00000018u,c->r[3]); // 80102CF4
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80102CF8
  c->r[0]=R32(c->r[27]+0x00000020u); // 80102CFC
  W32(c->r[31]+0x00000020u,c->r[0]); // 80102D00
  W8(c->r[13]+0xFFFF9A40u,c->r[29]); // 80102D04
  W8(c->r[31]+0x00000021u,c->r[29]); // 80102D08
  c->lr=0x80102D10u; f_80102B6C(c); // 80102D0C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80102D10
  if (crb(c,2)) { goto L_80102D9C; } // 80102D14
  c->r[4]=R32(c->r[28]+0x00004C64u); // 80102D18
  c->r[0]=0u+0x00000000u; // 80102D1C
  W8(c->r[13]+0xFFFF9A58u,c->r[29]); // 80102D20
  c->r[3]=R32(c->r[13]+0xFFFF9A18u); // 80102D24
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 80102D28
  W8(c->r[31]+0x00000022u,c->r[29]); // 80102D2C
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80102D30
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80102D34
  c->r[4]=R32(c->r[31]+0x00000004u); // 80102D38
  c->r[3]=R32(c->r[13]+0xFFFF9A18u); // 80102D3C
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 80102D40
  W32(c->r[3]+0x00000010u,c->r[4]); // 80102D44
  c->r[4]=R32(c->r[31]+0x00000018u); // 80102D48
  c->r[3]=R32(c->r[13]+0xFFFF9A18u); // 80102D4C
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 80102D50
  W32(c->r[3]+0x00000014u,c->r[0]); // 80102D54
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102D58
  c->r[0]=c->r[0]|0x00000003u; // 80102D5C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102D60
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102D64
  W16(c->r[3]+0x00000004u,c->r[0]); // 80102D68
  c->r[0]=R32(c->r[5]+0x00000008u); // 80102D6C
  c->r[0]=c->r[0]|0x00000004u; // 80102D70
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80102D74
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102D78
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102D7C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80102D80
  c->r[0]=R32(c->r[5]+0x00000008u); // 80102D84
  c->r[0]=c->r[0]|0x00000010u; // 80102D88
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102D8C
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102D90
  W16(c->r[3]+0x00000002u,c->r[0]); // 80102D94
  goto L_80102E20; // 80102D98
L_80102D9C:;
  c->r[0]=R8(c->r[13]+0xFFFF9A58u); // 80102D9C
  c->r[4]=0u+0x00000000u; // 80102DA0
  W8(c->r[31]+0x00000022u,c->r[4]); // 80102DA4
  cmps(c,0,(int32_t)c->r[0],0); // 80102DA8
  if (crb(c,2)) { goto L_80102DCC; } // 80102DAC
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80102DB0
  c->r[0]=R32(c->r[3]+0x00000008u); // 80102DB4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80102DB8
  W32(c->r[3]+0x00000008u,c->r[0]); // 80102DBC
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102DC0
  W16(c->r[3]+0x00000002u,c->r[0]); // 80102DC4
  W8(c->r[13]+0xFFFF9A58u,c->r[4]); // 80102DC8
L_80102DCC:;
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 80102DCC
  c->r[3]=0u+0x802F0000u; // 80102DD0
  c->r[5]=c->r[3]+0x00004C64u; // 80102DD4
  c->r[0]=0u+0x00000000u; // 80102DD8
  c->r[4]=R32(c->r[7]+0x00000008u); // 80102DDC
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFF3u; // 80102DE0
  W32(c->r[7]+0x00000008u,c->r[6]); // 80102DE4
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102DE8
  W16(c->r[4]+0x00000002u,c->r[6]); // 80102DEC
  c->r[4]=R32(c->r[3]+0x00004C64u); // 80102DF0
  c->r[3]=R32(c->r[13]+0xFFFF9A18u); // 80102DF4
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 80102DF8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80102DFC
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102E00
  c->r[3]=R32(c->r[13]+0xFFFF9A18u); // 80102E04
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 80102E08
  W32(c->r[3]+0x00000010u,c->r[4]); // 80102E0C
  c->r[4]=R32(c->r[5]+0x00000018u); // 80102E10
  c->r[3]=R32(c->r[13]+0xFFFF9A18u); // 80102E14
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 80102E18
  W32(c->r[3]+0x00000014u,c->r[0]); // 80102E1C
L_80102E20:;
  c->lr=0x80102E24u; f_800DDCE8(c); // 80102E20
  c->r[3]=c->r[30]|c->r[30]; // 80102E24
  c->lr=0x80102E2Cu; f_800E4F7C(c); // 80102E28
L_80102E2C:;
  c->r[11]=c->r[1]+0x00000020u; // 80102E2C
  c->lr=0x80102E34u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80102E30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102E34
  c->lr=c->r[0]; // 80102E38
  c->r[1]=c->r[1]+0x00000020u; // 80102E3C
  return; // 80102E40
}

// GXSetGPFifo
void f_80102E44(Ctx* __restrict c) {
  trace_call(0x80102E44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102E44
  c->r[0]=c->lr; // 80102E48
  W32(c->r[1]+0x00000024u,c->r[0]); // 80102E4C
  c->r[11]=c->r[1]+0x00000020u; // 80102E50
  c->lr=0x80102E58u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80102E54
  c->r[27]=c->r[3]|c->r[3]; // 80102E58
  c->lr=0x80102E60u; f_800E4F54(c); // 80102E5C
  c->r[29]=R32(c->r[2]+0xFFFF8C88u); // 80102E60
  cmps(c,0,(int32_t)c->r[27],0); // 80102E64
  c->r[28]=c->r[3]|c->r[3]; // 80102E68
  c->r[0]=R32(c->r[29]+0x00000008u); // 80102E6C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80102E70
  W32(c->r[29]+0x00000008u,c->r[0]); // 80102E74
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102E78
  W16(c->r[4]+0x00000002u,c->r[0]); // 80102E7C
  c->r[0]=R32(c->r[29]+0x00000008u); // 80102E80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 80102E84
  W32(c->r[29]+0x00000008u,c->r[0]); // 80102E88
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102E8C
  W16(c->r[4]+0x00000002u,c->r[0]); // 80102E90
  if (!crb(c,2)) { goto L_80102ED0; } // 80102E94
  c->r[6]=0u+0x00000000u; // 80102E98
  c->r[4]=0u+0x802F0000u; // 80102E9C
  W8(c->r[13]+0xFFFF9A41u,c->r[6]); // 80102EA0
  c->r[4]=c->r[4]+0x00004C40u; // 80102EA4
  W8(c->r[13]+0xFFFF9A58u,c->r[6]); // 80102EA8
  c->r[0]=R32(c->r[29]+0x00000008u); // 80102EAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80102EB0
  W32(c->r[29]+0x00000008u,c->r[0]); // 80102EB4
  c->r[5]=R32(c->r[13]+0xFFFF9A1Cu); // 80102EB8
  W16(c->r[5]+0x00000002u,c->r[0]); // 80102EBC
  W8(c->r[4]+0x00000021u,c->r[6]); // 80102EC0
  W8(c->r[4]+0x00000022u,c->r[6]); // 80102EC4
  c->lr=0x80102ECCu; f_800E4F7C(c); // 80102EC8
  goto L_801030BC; // 80102ECC
L_80102ED0:;
  c->r[3]=0u+0x802F0000u; // 80102ED0
  c->r[6]=R32(c->r[27]+0x00000000u); // 80102ED4
  c->r[0]=R32(c->r[27]+0x00000004u); // 80102ED8
  c->r[30]=c->r[3]+0x00004C40u; // 80102EDC
  c->r[31]=0u+0x00000001u; // 80102EE0
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102EE4
  W32(c->r[30]+0x00000000u,c->r[6]); // 80102EE8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80102EEC
  c->r[5]=R32(c->r[27]+0x00000008u); // 80102EF0
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80102EF4
  W32(c->r[30]+0x00000008u,c->r[5]); // 80102EF8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80102EFC
  c->r[5]=R32(c->r[27]+0x00000010u); // 80102F00
  c->r[0]=R32(c->r[27]+0x00000014u); // 80102F04
  W32(c->r[30]+0x00000010u,c->r[5]); // 80102F08
  W32(c->r[30]+0x00000014u,c->r[0]); // 80102F0C
  c->r[5]=R32(c->r[27]+0x00000018u); // 80102F10
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 80102F14
  W32(c->r[30]+0x00000018u,c->r[5]); // 80102F18
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80102F1C
  c->r[0]=R32(c->r[27]+0x00000020u); // 80102F20
  W32(c->r[30]+0x00000020u,c->r[0]); // 80102F24
  W8(c->r[13]+0xFFFF9A41u,c->r[31]); // 80102F28
  W8(c->r[30]+0x00000022u,c->r[31]); // 80102F2C
  W16(c->r[4]+0x00000020u,c->r[6]); // 80102F30
  c->r[0]=R32(c->r[30]+0x00000004u); // 80102F34
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102F38
  W16(c->r[4]+0x00000024u,c->r[0]); // 80102F3C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80102F40
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102F44
  W16(c->r[4]+0x00000030u,c->r[0]); // 80102F48
  c->r[0]=R32(c->r[30]+0x00000018u); // 80102F4C
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102F50
  W16(c->r[4]+0x00000034u,c->r[0]); // 80102F54
  c->r[0]=R32(c->r[30]+0x00000014u); // 80102F58
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102F5C
  W16(c->r[4]+0x00000038u,c->r[0]); // 80102F60
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80102F64
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102F68
  W16(c->r[4]+0x00000028u,c->r[0]); // 80102F6C
  c->r[0]=R32(c->r[30]+0x00000010u); // 80102F70
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80102F74
  W16(c->r[4]+0x0000002Cu,c->r[0]); // 80102F78
  c->r[0]=R32(c->r[3]+0x00004C40u); // 80102F7C
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102F80
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 80102F84
  W16(c->r[3]+0x00000022u,c->r[0]); // 80102F88
  c->r[0]=R32(c->r[30]+0x00000004u); // 80102F8C
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102F90
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 80102F94
  W16(c->r[3]+0x00000026u,c->r[0]); // 80102F98
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80102F9C
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102FA0
  c->r[0]=sraw(c,c->r[0],16); // 80102FA4
  W16(c->r[3]+0x00000032u,c->r[0]); // 80102FA8
  c->r[0]=R32(c->r[30]+0x00000018u); // 80102FAC
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102FB0
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 80102FB4
  W16(c->r[3]+0x00000036u,c->r[0]); // 80102FB8
  c->r[0]=R32(c->r[30]+0x00000014u); // 80102FBC
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102FC0
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 80102FC4
  W16(c->r[3]+0x0000003Au,c->r[0]); // 80102FC8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80102FCC
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102FD0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80102FD4
  W16(c->r[3]+0x0000002Au,c->r[0]); // 80102FD8
  c->r[0]=R32(c->r[30]+0x00000010u); // 80102FDC
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80102FE0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80102FE4
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 80102FE8
  c->lr=0x80102FF0u; f_800DDCE8(c); // 80102FEC
  c->lr=0x80102FF4u; f_80102B6C(c); // 80102FF0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80102FF4
  if (crb(c,2)) { goto L_80103034; } // 80102FF8
  W8(c->r[13]+0xFFFF9A58u,c->r[31]); // 80102FFC
  W8(c->r[30]+0x00000021u,c->r[31]); // 80103000
  c->r[0]=R32(c->r[29]+0x00000008u); // 80103004
  c->r[0]=c->r[0]|0x00000004u; // 80103008
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 8010300C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80103010
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80103014
  W16(c->r[3]+0x00000002u,c->r[0]); // 80103018
  c->r[0]=R32(c->r[29]+0x00000008u); // 8010301C
  c->r[0]=c->r[0]|0x00000010u; // 80103020
  W32(c->r[29]+0x00000008u,c->r[0]); // 80103024
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80103028
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010302C
  goto L_80103068; // 80103030
L_80103034:;
  c->r[0]=0u+0x00000000u; // 80103034
  W8(c->r[13]+0xFFFF9A58u,c->r[0]); // 80103038
  W8(c->r[30]+0x00000021u,c->r[0]); // 8010303C
  c->r[0]=R32(c->r[29]+0x00000008u); // 80103040
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 80103044
  W32(c->r[29]+0x00000008u,c->r[0]); // 80103048
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 8010304C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80103050
  c->r[0]=R32(c->r[29]+0x00000008u); // 80103054
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80103058
  W32(c->r[29]+0x00000008u,c->r[0]); // 8010305C
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80103060
  W16(c->r[3]+0x00000002u,c->r[0]); // 80103064
L_80103068:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 80103068
  c->r[3]=c->r[28]|c->r[28]; // 8010306C
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80103070
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80103074
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80103078
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 8010307C
  W16(c->r[4]+0x00000002u,c->r[0]); // 80103080
  c->r[0]=R32(c->r[29]+0x00000008u); // 80103084
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80103088
  W16(c->r[4]+0x00000002u,c->r[0]); // 8010308C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80103090
  c->r[0]=c->r[0]|0x00000003u; // 80103094
  W32(c->r[5]+0x00000010u,c->r[0]); // 80103098
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 8010309C
  W16(c->r[4]+0x00000004u,c->r[0]); // 801030A0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801030A4
  c->r[0]=c->r[0]|0x00000001u; // 801030A8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801030AC
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 801030B0
  W16(c->r[4]+0x00000002u,c->r[0]); // 801030B4
  c->lr=0x801030BCu; f_800E4F7C(c); // 801030B8
L_801030BC:;
  c->r[11]=c->r[1]+0x00000020u; // 801030BC
  c->lr=0x801030C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801030C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801030C4
  c->lr=c->r[0]; // 801030C8
  c->r[1]=c->r[1]+0x00000020u; // 801030CC
  return; // 801030D0
}

// fn_801030D4
void f_801030D4(Ctx* __restrict c) {
  c->r[3]=R8(c->r[13]+0xFFFF9A41u); // 801030D4
  return; // 801030D8
}

// fn_801030DC
void f_801030DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801030DC
  c->r[0]=c->lr; // 801030E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801030E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801030E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801030EC
  c->r[30]=c->r[3]|c->r[3]; // 801030F0
  c->r[31]=R32(c->r[13]+0xFFFF9A4Cu); // 801030F4
  c->lr=0x801030FCu; f_800E4F54(c); // 801030F8
  W32(c->r[13]+0xFFFF9A4Cu,c->r[30]); // 801030FC
  c->lr=0x80103104u; f_800E4F7C(c); // 80103100
  c->r[3]=c->r[31]|c->r[31]; // 80103104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103108
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010310C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103110
  c->lr=c->r[0]; // 80103114
  c->r[1]=c->r[1]+0x00000010u; // 80103118
  return; // 8010311C
}

// __GXFifoInit
void f_80103120(Ctx* __restrict c) {
  trace_call(0x80103120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103120
  c->r[0]=c->lr; // 80103124
  c->r[4]=0u+0x80100000u; // 80103128
  c->r[3]=0u+0x00000011u; // 8010312C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103130
  c->r[4]=c->r[4]+0x00002980u; // 80103134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103138
  c->lr=0x80103140u; f_800E4FA0(c); // 8010313C
  c->r[3]=0u+0x00004000u; // 80103140
  c->lr=0x80103148u; f_800E5364(c); // 80103144
  c->lr=0x8010314Cu; f_800E7B90(c); // 80103148
  c->r[31]=0u+0x00000000u; // 8010314C
  W32(c->r[13]+0xFFFF9A54u,c->r[3]); // 80103150
  c->r[3]=0u+0x802F0000u; // 80103154
  c->r[4]=0u+0x00000000u; // 80103158
  W32(c->r[13]+0xFFFF9A50u,c->r[31]); // 8010315C
  c->r[3]=c->r[3]+0x00004C64u; // 80103160
  c->r[5]=0u+0x00000024u; // 80103164
  c->lr=0x8010316Cu; f_8000443C(c); // 80103168
  c->r[3]=0u+0x802F0000u; // 8010316C
  c->r[4]=0u+0x00000000u; // 80103170
  c->r[3]=c->r[3]+0x00004C40u; // 80103174
  c->r[5]=0u+0x00000024u; // 80103178
  c->lr=0x80103180u; f_8000443C(c); // 8010317C
  W8(c->r[13]+0xFFFF9A40u,c->r[31]); // 80103180
  W8(c->r[13]+0xFFFF9A41u,c->r[31]); // 80103184
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103188
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010318C
  c->lr=c->r[0]; // 80103190
  c->r[1]=c->r[1]+0x00000010u; // 80103194
  return; // 80103198
}

// __GXCleanGPFifo
void f_8010319C(Ctx* __restrict c) {
  trace_call(0x8010319Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010319C
  c->r[0]=c->lr; // 801031A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801031A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801031A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801031AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801031B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801031B4
  c->r[0]=R8(c->r[13]+0xFFFF9A41u); // 801031B8
  cmps(c,0,(int32_t)c->r[0],0); // 801031BC
  if (crb(c,2)) { goto L_8010331C; } // 801031C0
  c->lr=0x801031C8u; f_800E4F54(c); // 801031C4
  c->r[29]=R32(c->r[2]+0xFFFF8C88u); // 801031C8
  c->r[30]=0u+0x802F0000u; // 801031CC
  c->r[28]=c->r[3]|c->r[3]; // 801031D0
  c->r[31]=0u+0x00000000u; // 801031D4
  c->r[0]=R32(c->r[29]+0x00000008u); // 801031D8
  c->r[30]=c->r[30]+0x00004C40u; // 801031DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801031E0
  W32(c->r[29]+0x00000008u,c->r[0]); // 801031E4
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 801031E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801031EC
  c->r[0]=R32(c->r[29]+0x00000008u); // 801031F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 801031F4
  W32(c->r[29]+0x00000008u,c->r[0]); // 801031F8
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 801031FC
  W16(c->r[3]+0x00000002u,c->r[0]); // 80103200
  c->r[0]=R32(c->r[30]+0x00000018u); // 80103204
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 80103208
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 8010320C
  W32(c->r[30]+0x00000014u,c->r[0]); // 80103210
  W16(c->r[3]+0x00000030u,c->r[31]); // 80103214
  c->r[0]=R32(c->r[30]+0x00000018u); // 80103218
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 8010321C
  W16(c->r[3]+0x00000034u,c->r[0]); // 80103220
  c->r[0]=R32(c->r[30]+0x00000014u); // 80103224
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80103228
  W16(c->r[3]+0x00000038u,c->r[0]); // 8010322C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80103230
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80103234
  c->r[0]=sraw(c,c->r[0],16); // 80103238
  W16(c->r[3]+0x00000032u,c->r[0]); // 8010323C
  c->r[0]=R32(c->r[30]+0x00000018u); // 80103240
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80103244
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 80103248
  W16(c->r[3]+0x00000036u,c->r[0]); // 8010324C
  c->r[0]=R32(c->r[30]+0x00000014u); // 80103250
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80103254
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 80103258
  W16(c->r[3]+0x0000003Au,c->r[0]); // 8010325C
  c->lr=0x80103264u; f_800DDCE8(c); // 80103260
  c->r[0]=R8(c->r[13]+0xFFFF9A58u); // 80103264
  cmps(c,0,(int32_t)c->r[0],0); // 80103268
  if (crb(c,2)) { goto L_801032C8; } // 8010326C
  c->r[5]=0u+0x802F0000u; // 80103270
  c->r[4]=R32(c->r[30]+0x00000018u); // 80103274
  c->r[5]=c->r[5]+0x00004C64u; // 80103278
  c->r[3]=R32(c->r[30]+0x00000014u); // 8010327C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80103280
  c->r[31]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[31]&~0x1FFFFFE0u); // 80103284
  W32(c->r[5]+0x00000014u,c->r[3]); // 80103288
  c->r[3]=R32(c->r[13]+0xFFFF9A18u); // 8010328C
  W32(c->r[5]+0x00000018u,c->r[4]); // 80103290
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80103294
  W32(c->r[3]+0x00000014u,c->r[31]); // 80103298
  c->r[0]=R32(c->r[29]+0x00000008u); // 8010329C
  c->r[0]=c->r[0]|0x00000004u; // 801032A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801032A4
  W32(c->r[29]+0x00000008u,c->r[0]); // 801032A8
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 801032AC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801032B0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801032B4
  c->r[0]=c->r[0]|0x00000010u; // 801032B8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801032BC
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 801032C0
  W16(c->r[3]+0x00000002u,c->r[0]); // 801032C4
L_801032C8:;
  c->r[4]=R32(c->r[29]+0x00000008u); // 801032C8
  c->r[0]=0u+0x00000000u; // 801032CC
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 801032D0
  c->r[3]=c->r[28]|c->r[28]; // 801032D4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 801032D8
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFDFu; // 801032DC
  W32(c->r[29]+0x00000008u,c->r[5]); // 801032E0
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 801032E4
  W16(c->r[4]+0x00000002u,c->r[5]); // 801032E8
  W32(c->r[13]+0xFFFF9A48u,c->r[0]); // 801032EC
  c->r[0]=R32(c->r[6]+0x00000010u); // 801032F0
  c->r[0]=c->r[0]|0x00000003u; // 801032F4
  W32(c->r[6]+0x00000010u,c->r[0]); // 801032F8
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 801032FC
  W16(c->r[4]+0x00000004u,c->r[0]); // 80103300
  c->r[0]=R32(c->r[29]+0x00000008u); // 80103304
  c->r[0]=c->r[0]|0x00000001u; // 80103308
  W32(c->r[29]+0x00000008u,c->r[0]); // 8010330C
  c->r[4]=R32(c->r[13]+0xFFFF9A1Cu); // 80103310
  W16(c->r[4]+0x00000002u,c->r[0]); // 80103314
  c->lr=0x8010331Cu; f_800E4F7C(c); // 80103318
L_8010331C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010331C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80103320
  c->r[30]=R32(c->r[1]+0x00000018u); // 80103324
  c->r[29]=R32(c->r[1]+0x00000014u); // 80103328
  c->r[28]=R32(c->r[1]+0x00000010u); // 8010332C
  c->lr=c->r[0]; // 80103330
  c->r[1]=c->r[1]+0x00000020u; // 80103334
  return; // 80103338
}

// fn_8010333C
void f_8010333C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFF9A54u); // 8010333C
  return; // 80103340
}

// GXSetVtxDesc
void f_80103344(Ctx* __restrict c) {
  trace_call(0x80103344u);
  cmpu(c,0,c->r[3],0x00000019u); // 80103344
  if (crb(c,1)) { goto L_80103558; } // 80103348
  c->r[5]=0u+0x80290000u; // 8010334C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80103350
  c->r[5]=c->r[5]+0x000059D0u; // 80103354
  c->r[5]=R32(c->r[5]+c->r[0]); // 80103358
  c->ctr=c->r[5]; // 8010335C
  if (true) { switch (c->ctr) { case 0x80103364u: goto L_80103364; case 0x80103378u: goto L_80103378; case 0x8010338Cu: goto L_8010338C; case 0x801033A0u: goto L_801033A0; case 0x801033B4u: goto L_801033B4; case 0x801033C8u: goto L_801033C8; case 0x801033DCu: goto L_801033DC; case 0x801033F0u: goto L_801033F0; case 0x80103404u: goto L_80103404; case 0x80103418u: goto L_80103418; case 0x8010342Cu: goto L_8010342C; case 0x80103460u: goto L_80103460; case 0x80103494u: goto L_80103494; case 0x801034A8u: goto L_801034A8; case 0x801034BCu: goto L_801034BC; case 0x801034D0u: goto L_801034D0; case 0x801034E4u: goto L_801034E4; case 0x801034F8u: goto L_801034F8; case 0x8010350Cu: goto L_8010350C; case 0x80103520u: goto L_80103520; case 0x80103534u: goto L_80103534; case 0x80103548u: goto L_80103548; case 0x80103558u: goto L_80103558; default: break; } dispatch(c,c->ctr); return; } // 80103360
L_80103364:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103364
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103368
  c->r[0]=(rotl(c->r[4],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 8010336C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80103370
  goto L_80103558; // 80103374
L_80103378:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103378
  c->r[0]=R32(c->r[3]+0x00000014u); // 8010337C
  c->r[0]=(rotl(c->r[4],1)&0x00000002u)|(c->r[0]&~0x00000002u); // 80103380
  W32(c->r[3]+0x00000014u,c->r[0]); // 80103384
  goto L_80103558; // 80103388
L_8010338C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010338C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103390
  c->r[0]=(rotl(c->r[4],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 80103394
  W32(c->r[3]+0x00000014u,c->r[0]); // 80103398
  goto L_80103558; // 8010339C
L_801033A0:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801033A0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801033A4
  c->r[0]=(rotl(c->r[4],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 801033A8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801033AC
  goto L_80103558; // 801033B0
L_801033B4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801033B4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801033B8
  c->r[0]=(rotl(c->r[4],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 801033BC
  W32(c->r[3]+0x00000014u,c->r[0]); // 801033C0
  goto L_80103558; // 801033C4
L_801033C8:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801033C8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801033CC
  c->r[0]=(rotl(c->r[4],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 801033D0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801033D4
  goto L_80103558; // 801033D8
L_801033DC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801033DC
  c->r[0]=R32(c->r[3]+0x00000014u); // 801033E0
  c->r[0]=(rotl(c->r[4],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 801033E4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801033E8
  goto L_80103558; // 801033EC
L_801033F0:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801033F0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801033F4
  c->r[0]=(rotl(c->r[4],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 801033F8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801033FC
  goto L_80103558; // 80103400
L_80103404:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103404
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103408
  c->r[0]=(rotl(c->r[4],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 8010340C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80103410
  goto L_80103558; // 80103414
L_80103418:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103418
  c->r[0]=R32(c->r[3]+0x00000014u); // 8010341C
  c->r[0]=(rotl(c->r[4],9)&0x00000600u)|(c->r[0]&~0x00000600u); // 80103420
  W32(c->r[3]+0x00000014u,c->r[0]); // 80103424
  goto L_80103558; // 80103428
L_8010342C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8010342C
  if (crb(c,2)) { goto L_80103450; } // 80103430
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80103434
  c->r[3]=0u+0x00000001u; // 80103438
  c->r[0]=0u+0x00000000u; // 8010343C
  W8(c->r[5]+0x00000524u,c->r[3]); // 80103440
  W8(c->r[5]+0x00000525u,c->r[0]); // 80103444
  W32(c->r[5]+0x00000520u,c->r[4]); // 80103448
  goto L_80103558; // 8010344C
L_80103450:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103450
  c->r[0]=0u+0x00000000u; // 80103454
  W8(c->r[3]+0x00000524u,c->r[0]); // 80103458
  goto L_80103558; // 8010345C
L_80103460:;
  cmps(c,0,(int32_t)c->r[4],0); // 80103460
  if (crb(c,2)) { goto L_80103484; } // 80103464
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80103468
  c->r[3]=0u+0x00000001u; // 8010346C
  c->r[0]=0u+0x00000000u; // 80103470
  W8(c->r[5]+0x00000525u,c->r[3]); // 80103474
  W8(c->r[5]+0x00000524u,c->r[0]); // 80103478
  W32(c->r[5]+0x00000520u,c->r[4]); // 8010347C
  goto L_80103558; // 80103480
L_80103484:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103484
  c->r[0]=0u+0x00000000u; // 80103488
  W8(c->r[3]+0x00000525u,c->r[0]); // 8010348C
  goto L_80103558; // 80103490
L_80103494:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103494
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103498
  c->r[0]=(rotl(c->r[4],13)&0x00006000u)|(c->r[0]&~0x00006000u); // 8010349C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801034A0
  goto L_80103558; // 801034A4
L_801034A8:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801034A8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801034AC
  c->r[0]=(rotl(c->r[4],15)&0x00018000u)|(c->r[0]&~0x00018000u); // 801034B0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801034B4
  goto L_80103558; // 801034B8
L_801034BC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801034BC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801034C0
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 801034C4
  W32(c->r[3]+0x00000018u,c->r[0]); // 801034C8
  goto L_80103558; // 801034CC
L_801034D0:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801034D0
  c->r[0]=R32(c->r[3]+0x00000018u); // 801034D4
  c->r[0]=(rotl(c->r[4],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 801034D8
  W32(c->r[3]+0x00000018u,c->r[0]); // 801034DC
  goto L_80103558; // 801034E0
L_801034E4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801034E4
  c->r[0]=R32(c->r[3]+0x00000018u); // 801034E8
  c->r[0]=(rotl(c->r[4],4)&0x00000030u)|(c->r[0]&~0x00000030u); // 801034EC
  W32(c->r[3]+0x00000018u,c->r[0]); // 801034F0
  goto L_80103558; // 801034F4
L_801034F8:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801034F8
  c->r[0]=R32(c->r[3]+0x00000018u); // 801034FC
  c->r[0]=(rotl(c->r[4],6)&0x000000C0u)|(c->r[0]&~0x000000C0u); // 80103500
  W32(c->r[3]+0x00000018u,c->r[0]); // 80103504
  goto L_80103558; // 80103508
L_8010350C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010350C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80103510
  c->r[0]=(rotl(c->r[4],8)&0x00000300u)|(c->r[0]&~0x00000300u); // 80103514
  W32(c->r[3]+0x00000018u,c->r[0]); // 80103518
  goto L_80103558; // 8010351C
L_80103520:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103520
  c->r[0]=R32(c->r[3]+0x00000018u); // 80103524
  c->r[0]=(rotl(c->r[4],10)&0x00000C00u)|(c->r[0]&~0x00000C00u); // 80103528
  W32(c->r[3]+0x00000018u,c->r[0]); // 8010352C
  goto L_80103558; // 80103530
L_80103534:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103534
  c->r[0]=R32(c->r[3]+0x00000018u); // 80103538
  c->r[0]=(rotl(c->r[4],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 8010353C
  W32(c->r[3]+0x00000018u,c->r[0]); // 80103540
  goto L_80103558; // 80103544
L_80103548:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103548
  c->r[0]=R32(c->r[3]+0x00000018u); // 8010354C
  c->r[0]=(rotl(c->r[4],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 80103550
  W32(c->r[3]+0x00000018u,c->r[0]); // 80103554
L_80103558:;
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80103558
  c->r[0]=R8(c->r[4]+0x00000524u); // 8010355C
  cmps(c,0,(int32_t)c->r[0],0); // 80103560
  if (!crb(c,2)) { goto L_80103574; } // 80103564
  c->r[0]=R8(c->r[4]+0x00000525u); // 80103568
  cmps(c,0,(int32_t)c->r[0],0); // 8010356C
  if (crb(c,2)) { goto L_8010358C; } // 80103570
L_80103574:;
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80103574
  c->r[0]=R32(c->r[5]+0x00000520u); // 80103578
  c->r[3]=R32(c->r[5]+0x00000014u); // 8010357C
  c->r[3]=(rotl(c->r[0],11)&0x00001800u)|(c->r[3]&~0x00001800u); // 80103580
  W32(c->r[5]+0x00000014u,c->r[3]); // 80103584
  goto L_80103598; // 80103588
L_8010358C:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 8010358C
  c->r[0]=rotl(c->r[0],0)&0xFFFFE7FFu; // 80103590
  W32(c->r[4]+0x00000014u,c->r[0]); // 80103594
L_80103598:;
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80103598
  c->r[0]=c->r[0]|0x00000008u; // 8010359C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801035A0
  return; // 801035A4
}

// __GXSetVCD
void f_801035A8(Ctx* __restrict c) {
  trace_call(0x801035A8u);
  c->r[5]=0u+0xCC010000u; // 801035A8
  c->r[6]=0u+0x00000008u; // 801035AC
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801035B0
  c->r[4]=0u+0x00000050u; // 801035B4
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801035B8
  c->r[0]=0u+0x00000060u; // 801035BC
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 801035C0
  c->r[4]=R32(c->r[3]+0x00000014u); // 801035C4
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801035C8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801035CC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801035D0
  c->r[0]=R32(c->r[3]+0x00000018u); // 801035D4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801035D8
  c->r[0]=R8(c->r[3]+0x00000525u); // 801035DC
  cmps(c,0,(int32_t)c->r[0],0); // 801035E0
  if (crb(c,2)) { goto L_801035F0; } // 801035E4
  c->r[8]=0u+0x00000002u; // 801035E8
  goto L_80103600; // 801035EC
L_801035F0:;
  c->r[4]=R8(c->r[3]+0x00000524u); // 801035F0
  c->r[0]=0u-c->r[4]; // 801035F4
  c->r[0]=c->r[0]|c->r[4]; // 801035F8
  c->r[8]=rotl(c->r[0],1)&0x00000001u; // 801035FC
L_80103600:;
  c->r[5]=R32(c->r[3]+0x00000014u); // 80103600
  c->r[6]=0u+0xCC010000u; // 80103604
  c->r[4]=R32(c->r[3]+0x00000018u); // 80103608
  c->r[0]=0u+0x00000010u; // 8010360C
  c->r[7]=rotl(c->r[5],19)&0x0000000Fu; // 80103610
  c->r[5]=0u+0x00001008u; // 80103614
  c->r[7]=cntlz(c->r[7]); // 80103618
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 8010361C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80103620
  c->r[7]=addc(c,~c->r[7],0x00000021u,1); // 80103624
  c->r[0]=cntlz(c->r[4]); // 80103628
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8010362C
  c->r[0]=addc(c,~c->r[0],0x00000021u,1); // 80103630
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 80103634
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF0u; // 80103638
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 8010363C
  c->r[5]=c->r[0]|c->r[7]; // 80103640
  c->r[4]=c->r[5]|c->r[4]; // 80103644
  c->r[0]=0u+0x00000001u; // 80103648
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 8010364C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80103650
  return; // 80103654
}

// __GXCalculateVLim
void f_80103658(Ctx* __restrict c) {
  trace_call(0x80103658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103658
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010365C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103660
  c->r[0]=R16(c->r[3]+0x00000004u); // 80103664
  cmps(c,0,(int32_t)c->r[0],0); // 80103668
  if (crb(c,2)) { goto L_80103778; } // 8010366C
  c->r[9]=R32(c->r[3]+0x00000014u); // 80103670
  c->r[7]=c->r[13]+0xFFFF8BC8u; // 80103674
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 80103678
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 8010367C
  c->r[4]=rotl(c->r[9],31)&0x00000001u; // 80103680
  c->r[0]=c->r[0]+c->r[4]; // 80103684
  c->r[8]=rotl(c->r[5],23)&0x00000001u; // 80103688
  c->r[4]=rotl(c->r[9],30)&0x00000001u; // 8010368C
  c->r[5]=rotl(c->r[9],21)&0x00000003u; // 80103690
  c->r[0]=c->r[0]+c->r[4]; // 80103694
  cmps(c,0,(int32_t)c->r[8],1); // 80103698
  c->r[4]=rotl(c->r[9],29)&0x00000001u; // 8010369C
  c->r[6]=rotl(c->r[9],26)&0x00000001u; // 801036A0
  c->r[0]=c->r[0]+c->r[4]; // 801036A4
  c->r[8]=rotl(c->r[9],24)&0x00000001u; // 801036A8
  c->r[4]=rotl(c->r[9],28)&0x00000001u; // 801036AC
  c->r[31]=R32(c->r[3]+0x00000018u); // 801036B0
  c->r[0]=c->r[0]+c->r[4]; // 801036B4
  c->r[5]=R8(c->r[7]+c->r[5]); // 801036B8
  c->r[4]=rotl(c->r[9],27)&0x00000001u; // 801036BC
  c->r[0]=c->r[0]+c->r[4]; // 801036C0
  c->r[0]=c->r[0]+c->r[6]; // 801036C4
  c->r[6]=rotl(c->r[9],25)&0x00000001u; // 801036C8
  c->r[0]=c->r[0]+c->r[6]; // 801036CC
  c->r[4]=rotl(c->r[9],23)&0x00000003u; // 801036D0
  c->r[6]=R8(c->r[7]+c->r[4]); // 801036D4
  c->r[0]=c->r[0]+c->r[8]; // 801036D8
  c->r[4]=0u+0x00000001u; // 801036DC
  c->r[0]=c->r[0]+c->r[6]; // 801036E0
  if (!crb(c,2)) { goto L_801036EC; } // 801036E4
  c->r[4]=0u+0x00000003u; // 801036E8
L_801036EC:;
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 801036EC
  c->r[7]=c->r[13]+0xFFFF8BC0u; // 801036F0
  c->r[4]=rotl(c->r[9],19)&0x00000003u; // 801036F4
  c->r[5]=rotl(c->r[9],17)&0x00000003u; // 801036F8
  c->r[6]=R8(c->r[7]+c->r[4]); // 801036FC
  c->r[5]=R8(c->r[7]+c->r[5]); // 80103700
  c->r[0]=c->r[0]+c->r[8]; // 80103704
  c->r[12]=c->r[13]+0xFFFF8BC4u; // 80103708
  c->r[0]=c->r[0]+c->r[6]; // 8010370C
  c->r[4]=rotl(c->r[31],0)&0x00000003u; // 80103710
  c->r[10]=rotl(c->r[31],30)&0x00000003u; // 80103714
  c->r[11]=R8(c->r[12]+c->r[4]); // 80103718
  c->r[0]=c->r[0]+c->r[5]; // 8010371C
  c->r[9]=rotl(c->r[31],28)&0x00000003u; // 80103720
  c->r[8]=rotl(c->r[31],26)&0x00000003u; // 80103724
  c->r[7]=rotl(c->r[31],24)&0x00000003u; // 80103728
  c->r[6]=rotl(c->r[31],22)&0x00000003u; // 8010372C
  c->r[5]=rotl(c->r[31],20)&0x00000003u; // 80103730
  c->r[4]=rotl(c->r[31],18)&0x00000003u; // 80103734
  c->r[10]=R8(c->r[12]+c->r[10]); // 80103738
  c->r[0]=c->r[0]+c->r[11]; // 8010373C
  c->r[9]=R8(c->r[12]+c->r[9]); // 80103740
  c->r[0]=c->r[0]+c->r[10]; // 80103744
  c->r[8]=R8(c->r[12]+c->r[8]); // 80103748
  c->r[0]=c->r[0]+c->r[9]; // 8010374C
  c->r[7]=R8(c->r[12]+c->r[7]); // 80103750
  c->r[0]=c->r[0]+c->r[8]; // 80103754
  c->r[6]=R8(c->r[12]+c->r[6]); // 80103758
  c->r[0]=c->r[0]+c->r[7]; // 8010375C
  c->r[5]=R8(c->r[12]+c->r[5]); // 80103760
  c->r[0]=c->r[0]+c->r[6]; // 80103764
  c->r[4]=R8(c->r[12]+c->r[4]); // 80103768
  c->r[0]=c->r[0]+c->r[5]; // 8010376C
  c->r[0]=c->r[0]+c->r[4]; // 80103770
  W16(c->r[3]+0x00000006u,c->r[0]); // 80103774
L_80103778:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103778
  c->r[1]=c->r[1]+0x00000010u; // 8010377C
  return; // 80103780
}

// fn_80103784
void f_80103784(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],0x00000019u); // 80103784
  if (crb(c,1)) { goto L_8010392C; } // 80103788
  c->r[5]=0u+0x80290000u; // 8010378C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80103790
  c->r[5]=c->r[5]+0x00005A38u; // 80103794
  c->r[5]=R32(c->r[5]+c->r[0]); // 80103798
  c->ctr=c->r[5]; // 8010379C
  if (true) { switch (c->ctr) { case 0x801037A4u: goto L_801037A4; case 0x801037B4u: goto L_801037B4; case 0x801037C4u: goto L_801037C4; case 0x801037D4u: goto L_801037D4; case 0x801037E4u: goto L_801037E4; case 0x801037F4u: goto L_801037F4; case 0x80103804u: goto L_80103804; case 0x80103814u: goto L_80103814; case 0x80103824u: goto L_80103824; case 0x80103834u: goto L_80103834; case 0x80103844u: goto L_80103844; case 0x80103868u: goto L_80103868; case 0x8010388Cu: goto L_8010388C; case 0x8010389Cu: goto L_8010389C; case 0x801038ACu: goto L_801038AC; case 0x801038BCu: goto L_801038BC; case 0x801038CCu: goto L_801038CC; case 0x801038DCu: goto L_801038DC; case 0x801038ECu: goto L_801038EC; case 0x801038FCu: goto L_801038FC; case 0x8010390Cu: goto L_8010390C; case 0x8010391Cu: goto L_8010391C; case 0x8010392Cu: goto L_8010392C; default: break; } dispatch(c,c->ctr); return; } // 801037A0
L_801037A4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801037A4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801037A8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801037AC
  goto L_80103930; // 801037B0
L_801037B4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801037B4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801037B8
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 801037BC
  goto L_80103930; // 801037C0
L_801037C4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801037C4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801037C8
  c->r[0]=rotl(c->r[0],30)&0x00000001u; // 801037CC
  goto L_80103930; // 801037D0
L_801037D4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801037D4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801037D8
  c->r[0]=rotl(c->r[0],29)&0x00000001u; // 801037DC
  goto L_80103930; // 801037E0
L_801037E4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801037E4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801037E8
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 801037EC
  goto L_80103930; // 801037F0
L_801037F4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801037F4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801037F8
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801037FC
  goto L_80103930; // 80103800
L_80103804:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103804
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103808
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 8010380C
  goto L_80103930; // 80103810
L_80103814:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103814
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103818
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 8010381C
  goto L_80103930; // 80103820
L_80103824:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103824
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103828
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 8010382C
  goto L_80103930; // 80103830
L_80103834:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103834
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103838
  c->r[0]=rotl(c->r[0],23)&0x00000003u; // 8010383C
  goto L_80103930; // 80103840
L_80103844:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103844
  c->r[0]=R8(c->r[3]+0x00000524u); // 80103848
  cmps(c,0,(int32_t)c->r[0],0); // 8010384C
  if (crb(c,2)) { goto L_80103860; } // 80103850
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103854
  c->r[0]=rotl(c->r[0],21)&0x00000003u; // 80103858
  goto L_80103930; // 8010385C
L_80103860:;
  c->r[0]=0u+0x00000000u; // 80103860
  goto L_80103930; // 80103864
L_80103868:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80103868
  c->r[0]=R8(c->r[3]+0x00000525u); // 8010386C
  cmps(c,0,(int32_t)c->r[0],0); // 80103870
  if (crb(c,2)) { goto L_80103884; } // 80103874
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103878
  c->r[0]=rotl(c->r[0],21)&0x00000003u; // 8010387C
  goto L_80103930; // 80103880
L_80103884:;
  c->r[0]=0u+0x00000000u; // 80103884
  goto L_80103930; // 80103888
L_8010388C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010388C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80103890
  c->r[0]=rotl(c->r[0],19)&0x00000003u; // 80103894
  goto L_80103930; // 80103898
L_8010389C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010389C
  c->r[0]=R32(c->r[3]+0x00000014u); // 801038A0
  c->r[0]=rotl(c->r[0],17)&0x00000003u; // 801038A4
  goto L_80103930; // 801038A8
L_801038AC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801038AC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801038B0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 801038B4
  goto L_80103930; // 801038B8
L_801038BC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801038BC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801038C0
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 801038C4
  goto L_80103930; // 801038C8
L_801038CC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801038CC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801038D0
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 801038D4
  goto L_80103930; // 801038D8
L_801038DC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801038DC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801038E0
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 801038E4
  goto L_80103930; // 801038E8
L_801038EC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801038EC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801038F0
  c->r[0]=rotl(c->r[0],24)&0x00000003u; // 801038F4
  goto L_80103930; // 801038F8
L_801038FC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801038FC
  c->r[0]=R32(c->r[3]+0x00000018u); // 80103900
  c->r[0]=rotl(c->r[0],22)&0x00000003u; // 80103904
  goto L_80103930; // 80103908
L_8010390C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010390C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80103910
  c->r[0]=rotl(c->r[0],20)&0x00000003u; // 80103914
  goto L_80103930; // 80103918
L_8010391C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010391C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80103920
  c->r[0]=rotl(c->r[0],18)&0x00000003u; // 80103924
  goto L_80103930; // 80103928
L_8010392C:;
  c->r[0]=0u+0x00000000u; // 8010392C
L_80103930:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 80103930
  return; // 80103934
}

// GXClearVtxDesc
void f_80103938(Ctx* __restrict c) {
  trace_call(0x80103938u);
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80103938
  c->r[0]=0u+0x00000001u; // 8010393C
  c->r[3]=0u+0x00000000u; // 80103940
  c->r[4]=0u+0x00000000u; // 80103944
  c->r[3]=(rotl(c->r[0],9)&0x00000600u)|(c->r[3]&~0x00000600u); // 80103948
  W32(c->r[5]+0x00000014u,c->r[3]); // 8010394C
  W32(c->r[5]+0x00000018u,c->r[4]); // 80103950
  W8(c->r[5]+0x00000524u,c->r[4]); // 80103954
  W8(c->r[5]+0x00000525u,c->r[4]); // 80103958
  c->r[0]=R32(c->r[5]+0x000005FCu); // 8010395C
  c->r[0]=c->r[0]|0x00000008u; // 80103960
  W32(c->r[5]+0x000005FCu,c->r[0]); // 80103964
  return; // 80103968
}

// GXSetVtxAttrFmt
void f_8010396C(Ctx* __restrict c) {
  trace_call(0x8010396Cu);
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 8010396C
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 80103970
  cmpu(c,0,c->r[0],0x00000010u); // 80103974
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80103978
  c->r[8]=c->r[8]+c->r[4]; // 8010397C
  if (crb(c,1)) { goto L_80103ADC; } // 80103980
  c->r[4]=0u+0x80290000u; // 80103984
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80103988
  c->r[4]=c->r[4]+0x00005AA0u; // 8010398C
  c->r[4]=R32(c->r[4]+c->r[0]); // 80103990
  c->ctr=c->r[4]; // 80103994
  if (true) { switch (c->ctr) { case 0x8010399Cu: goto L_8010399C; case 0x801039B4u: goto L_801039B4; case 0x801039F0u: goto L_801039F0; case 0x80103A04u: goto L_80103A04; case 0x80103A18u: goto L_80103A18; case 0x80103A30u: goto L_80103A30; case 0x80103A48u: goto L_80103A48; case 0x80103A60u: goto L_80103A60; case 0x80103A78u: goto L_80103A78; case 0x80103A98u: goto L_80103A98; case 0x80103AB0u: goto L_80103AB0; case 0x80103AC8u: goto L_80103AC8; case 0x80103ADCu: goto L_80103ADC; default: break; } dispatch(c,c->ctr); return; } // 80103998
L_8010399C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 8010399C
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801039A0
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 801039A4
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 801039A8
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801039AC
  goto L_80103ADC; // 801039B0
L_801039B4:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801039B4
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 801039B8
  cmps(c,0,(int32_t)c->r[5],2); // 801039BC
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801039C0
  if (!crb(c,2)) { goto L_801039DC; } // 801039C4
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801039C8
  c->r[0]=c->r[0]|0x00000200u; // 801039CC
  c->r[0]=c->r[0]|0x80000000u; // 801039D0
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801039D4
  goto L_80103ADC; // 801039D8
L_801039DC:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801039DC
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 801039E0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801039E4
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801039E8
  goto L_80103ADC; // 801039EC
L_801039F0:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801039F0
  c->r[0]=(rotl(c->r[5],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 801039F4
  c->r[0]=(rotl(c->r[6],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 801039F8
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801039FC
  goto L_80103ADC; // 80103A00
L_80103A04:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103A04
  c->r[0]=(rotl(c->r[5],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 80103A08
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 80103A0C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103A10
  goto L_80103ADC; // 80103A14
L_80103A18:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103A18
  c->r[0]=(rotl(c->r[5],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 80103A1C
  c->r[0]=(rotl(c->r[6],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 80103A20
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 80103A24
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103A28
  goto L_80103ADC; // 80103A2C
L_80103A30:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80103A30
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 80103A34
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 80103A38
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 80103A3C
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 80103A40
  goto L_80103ADC; // 80103A44
L_80103A48:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80103A48
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 80103A4C
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 80103A50
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 80103A54
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 80103A58
  goto L_80103ADC; // 80103A5C
L_80103A60:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80103A60
  c->r[0]=(rotl(c->r[5],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 80103A64
  c->r[0]=(rotl(c->r[6],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 80103A68
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 80103A6C
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 80103A70
  goto L_80103ADC; // 80103A74
L_80103A78:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80103A78
  c->r[0]=(rotl(c->r[5],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 80103A7C
  c->r[0]=(rotl(c->r[6],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 80103A80
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 80103A84
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 80103A88
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 80103A8C
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 80103A90
  goto L_80103ADC; // 80103A94
L_80103A98:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 80103A98
  c->r[0]=(rotl(c->r[5],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 80103A9C
  c->r[0]=(rotl(c->r[6],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 80103AA0
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80103AA4
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 80103AA8
  goto L_80103ADC; // 80103AAC
L_80103AB0:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 80103AB0
  c->r[0]=(rotl(c->r[5],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 80103AB4
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80103AB8
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 80103ABC
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 80103AC0
  goto L_80103ADC; // 80103AC4
L_80103AC8:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 80103AC8
  c->r[0]=(rotl(c->r[5],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 80103ACC
  c->r[0]=(rotl(c->r[6],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 80103AD0
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 80103AD4
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 80103AD8
L_80103ADC:;
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80103ADC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80103AE0
  c->r[3]=0u+0x00000001u; // 80103AE4
  c->r[4]=R32(c->r[5]+0x000005FCu); // 80103AE8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80103AEC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80103AF0
  c->r[3]=c->r[4]|0x00000010u; // 80103AF4
  W32(c->r[5]+0x000005FCu,c->r[3]); // 80103AF8
  c->r[3]=R8(c->r[5]+0x000005FBu); // 80103AFC
  c->r[0]=c->r[3]|c->r[0]; // 80103B00
  W8(c->r[5]+0x000005FBu,c->r[0]); // 80103B04
  return; // 80103B08
}

// fn_80103B0C
void f_80103B0C(Ctx* __restrict c) {
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80103B0C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80103B10
  c->r[5]=0u+0x80290000u; // 80103B14
  c->r[8]=c->r[6]+c->r[0]; // 80103B18
  goto L_80103C94; // 80103B1C
L_80103B20:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 80103B20
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 80103B24
  c->r[0]=c->r[6]+0xFFFFFFF7u; // 80103B28
  c->r[10]=R32(c->r[4]+0x00000008u); // 80103B2C
  cmpu(c,0,c->r[0],0x00000010u); // 80103B30
  c->r[9]=R32(c->r[4]+0x00000004u); // 80103B34
  if (crb(c,1)) { goto L_80103C90; } // 80103B38
  c->r[6]=c->r[5]+0x00005AE4u; // 80103B3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80103B40
  c->r[6]=R32(c->r[6]+c->r[0]); // 80103B44
  c->ctr=c->r[6]; // 80103B48
  if (true) { switch (c->ctr) { case 0x80103B50u: goto L_80103B50; case 0x80103B68u: goto L_80103B68; case 0x80103BA4u: goto L_80103BA4; case 0x80103BB8u: goto L_80103BB8; case 0x80103BCCu: goto L_80103BCC; case 0x80103BE4u: goto L_80103BE4; case 0x80103BFCu: goto L_80103BFC; case 0x80103C14u: goto L_80103C14; case 0x80103C2Cu: goto L_80103C2C; case 0x80103C4Cu: goto L_80103C4C; case 0x80103C64u: goto L_80103C64; case 0x80103C7Cu: goto L_80103C7C; case 0x80103C90u: goto L_80103C90; default: break; } dispatch(c,c->ctr); return; } // 80103B4C
L_80103B50:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103B50
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 80103B54
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 80103B58
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 80103B5C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103B60
  goto L_80103C90; // 80103B64
L_80103B68:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103B68
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 80103B6C
  cmps(c,0,(int32_t)c->r[9],2); // 80103B70
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103B74
  if (!crb(c,2)) { goto L_80103B90; } // 80103B78
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103B7C
  c->r[0]=c->r[0]|0x00000200u; // 80103B80
  c->r[0]=c->r[0]|0x80000000u; // 80103B84
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103B88
  goto L_80103C90; // 80103B8C
L_80103B90:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103B90
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 80103B94
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80103B98
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103B9C
  goto L_80103C90; // 80103BA0
L_80103BA4:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103BA4
  c->r[0]=(rotl(c->r[9],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 80103BA8
  c->r[0]=(rotl(c->r[10],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 80103BAC
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103BB0
  goto L_80103C90; // 80103BB4
L_80103BB8:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103BB8
  c->r[0]=(rotl(c->r[9],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 80103BBC
  c->r[0]=(rotl(c->r[10],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 80103BC0
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103BC4
  goto L_80103C90; // 80103BC8
L_80103BCC:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80103BCC
  c->r[0]=(rotl(c->r[9],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 80103BD0
  c->r[0]=(rotl(c->r[10],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 80103BD4
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 80103BD8
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 80103BDC
  goto L_80103C90; // 80103BE0
L_80103BE4:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80103BE4
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 80103BE8
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 80103BEC
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 80103BF0
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 80103BF4
  goto L_80103C90; // 80103BF8
L_80103BFC:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80103BFC
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 80103C00
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 80103C04
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 80103C08
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 80103C0C
  goto L_80103C90; // 80103C10
L_80103C14:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80103C14
  c->r[0]=(rotl(c->r[9],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 80103C18
  c->r[0]=(rotl(c->r[10],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 80103C1C
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 80103C20
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 80103C24
  goto L_80103C90; // 80103C28
L_80103C2C:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80103C2C
  c->r[0]=(rotl(c->r[9],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 80103C30
  c->r[0]=(rotl(c->r[10],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 80103C34
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 80103C38
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 80103C3C
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 80103C40
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 80103C44
  goto L_80103C90; // 80103C48
L_80103C4C:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 80103C4C
  c->r[0]=(rotl(c->r[9],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 80103C50
  c->r[0]=(rotl(c->r[10],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 80103C54
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80103C58
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 80103C5C
  goto L_80103C90; // 80103C60
L_80103C64:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 80103C64
  c->r[0]=(rotl(c->r[9],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 80103C68
  c->r[0]=(rotl(c->r[10],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80103C6C
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 80103C70
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 80103C74
  goto L_80103C90; // 80103C78
L_80103C7C:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 80103C7C
  c->r[0]=(rotl(c->r[9],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 80103C80
  c->r[0]=(rotl(c->r[10],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 80103C84
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 80103C88
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 80103C8C
L_80103C90:;
  c->r[4]=c->r[4]+0x00000010u; // 80103C90
L_80103C94:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80103C94
  cmps(c,0,(int32_t)c->r[0],255); // 80103C98
  if (!crb(c,2)) { IRQCHK(c); goto L_80103B20; } // 80103C9C
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80103CA0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80103CA4
  c->r[3]=0u+0x00000001u; // 80103CA8
  c->r[4]=R32(c->r[5]+0x000005FCu); // 80103CAC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80103CB0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80103CB4
  c->r[3]=c->r[4]|0x00000010u; // 80103CB8
  W32(c->r[5]+0x000005FCu,c->r[3]); // 80103CBC
  c->r[3]=R8(c->r[5]+0x000005FBu); // 80103CC0
  c->r[0]=c->r[3]|c->r[0]; // 80103CC4
  W8(c->r[5]+0x000005FBu,c->r[0]); // 80103CC8
  return; // 80103CCC
}

// fn_80103CD0
void f_80103CD0(Ctx* __restrict c) {
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 80103CD0
  c->r[9]=0u+0x00000000u; // 80103CD4
  c->r[6]=0u+0x00000008u; // 80103CD8
  c->r[5]=0u+0xCC010000u; // 80103CDC
  c->r[10]=R8(c->r[8]+0x000005FBu); // 80103CE0
  c->r[7]=c->r[8]|c->r[8]; // 80103CE4
L_80103CE8:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[0]); // 80103CE8
  if (crb(c,2)) { goto L_80103D2C; } // 80103CEC
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80103CF0
  c->r[4]=c->r[9]|0x00000070u; // 80103CF4
  c->r[3]=c->r[9]|0x00000080u; // 80103CF8
  c->r[0]=c->r[9]|0x00000090u; // 80103CFC
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 80103D00
  c->r[4]=R32(c->r[7]+0x0000001Cu); // 80103D04
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80103D08
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80103D0C
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 80103D10
  c->r[3]=R32(c->r[7]+0x0000003Cu); // 80103D14
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80103D18
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80103D1C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80103D20
  c->r[0]=R32(c->r[7]+0x0000005Cu); // 80103D24
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80103D28
L_80103D2C:;
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; cr0(c,c->r[10]); // 80103D2C
  c->r[9]=c->r[9]+0x00000001u; // 80103D30
  c->r[7]=c->r[7]+0x00000004u; // 80103D34
  if (!crb(c,2)) { IRQCHK(c); goto L_80103CE8; } // 80103D38
  c->r[0]=0u+0x00000000u; // 80103D3C
  c->r[3]=0u+0xCC010000u; // 80103D40
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80103D44
  W8(c->r[8]+0x000005FBu,c->r[0]); // 80103D48
  return; // 80103D4C
}

// fn_80103D50
void f_80103D50(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 80103D50
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80103D54
  cmpu(c,0,c->r[0],0x00000010u); // 80103D58
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80103D5C
  c->r[3]=c->r[4]+c->r[3]; // 80103D60
  if (crb(c,1)) { goto L_80103FA4; } // 80103D64
  c->r[4]=0u+0x80290000u; // 80103D68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80103D6C
  c->r[4]=c->r[4]+0x00005B28u; // 80103D70
  c->r[4]=R32(c->r[4]+c->r[0]); // 80103D74
  c->ctr=c->r[4]; // 80103D78
  if (true) { switch (c->ctr) { case 0x80103D80u: goto L_80103D80; case 0x80103DA8u: goto L_80103DA8; case 0x80103E1Cu: goto L_80103E1C; case 0x80103E40u: goto L_80103E40; case 0x80103E64u: goto L_80103E64; case 0x80103E8Cu: goto L_80103E8C; case 0x80103EB4u: goto L_80103EB4; case 0x80103EDCu: goto L_80103EDC; case 0x80103F04u: goto L_80103F04; case 0x80103F2Cu: goto L_80103F2C; case 0x80103F54u: goto L_80103F54; case 0x80103F7Cu: goto L_80103F7C; case 0x80103FA4u: goto L_80103FA4; default: break; } dispatch(c,c->ctr); return; } // 80103D7C
L_80103D80:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103D80
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80103D84
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103D88
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103D8C
  c->r[0]=rotl(c->r[0],31)&0x00000007u; // 80103D90
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103D94
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103D98
  c->r[0]=rotl(c->r[0],28)&0x0000001Fu; // 80103D9C
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103DA0
  return; // 80103DA4
L_80103DA8:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103DA8
  c->r[0]=rotl(c->r[0],23)&0x00000001u; // 80103DAC
  cmps(c,0,(int32_t)c->r[0],1); // 80103DB0
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103DB4
  if (!crb(c,2)) { goto L_80103DD0; } // 80103DB8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103DBC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80103DC0
  if (crb(c,2)) { goto L_80103DD0; } // 80103DC4
  c->r[0]=0u+0x00000002u; // 80103DC8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103DCC
L_80103DD0:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103DD0
  c->r[0]=rotl(c->r[0],22)&0x00000007u; // 80103DD4
  cmps(c,0,(int32_t)c->r[0],2); // 80103DD8
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103DDC
  if (crb(c,2)) { goto L_80103E10; } // 80103DE0
  if (!crb(c,0)) { goto L_80103DF4; } // 80103DE4
  cmps(c,0,(int32_t)c->r[0],1); // 80103DE8
  if (!crb(c,0)) { goto L_80103E00; } // 80103DEC
  goto L_80103E10; // 80103DF0
L_80103DF4:;
  cmps(c,0,(int32_t)c->r[0],4); // 80103DF4
  if (!crb(c,0)) { goto L_80103E10; } // 80103DF8
  goto L_80103E08; // 80103DFC
L_80103E00:;
  c->r[0]=0u+0x00000006u; // 80103E00
  goto L_80103E14; // 80103E04
L_80103E08:;
  c->r[0]=0u+0x0000000Eu; // 80103E08
  goto L_80103E14; // 80103E0C
L_80103E10:;
  c->r[0]=0u+0x00000000u; // 80103E10
L_80103E14:;
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103E14
  return; // 80103E18
L_80103E1C:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80103E1C
  c->r[0]=0u+0x00000000u; // 80103E20
  c->r[4]=rotl(c->r[4],19)&0x00000001u; // 80103E24
  W32(c->r[5]+0x00000000u,c->r[4]); // 80103E28
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80103E2C
  c->r[3]=rotl(c->r[3],18)&0x00000007u; // 80103E30
  W32(c->r[6]+0x00000000u,c->r[3]); // 80103E34
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103E38
  return; // 80103E3C
L_80103E40:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80103E40
  c->r[0]=0u+0x00000000u; // 80103E44
  c->r[4]=rotl(c->r[4],15)&0x00000001u; // 80103E48
  W32(c->r[5]+0x00000000u,c->r[4]); // 80103E4C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80103E50
  c->r[3]=rotl(c->r[3],14)&0x00000007u; // 80103E54
  W32(c->r[6]+0x00000000u,c->r[3]); // 80103E58
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103E5C
  return; // 80103E60
L_80103E64:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103E64
  c->r[0]=rotl(c->r[0],11)&0x00000001u; // 80103E68
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103E6C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103E70
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 80103E74
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103E78
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80103E7C
  c->r[0]=rotl(c->r[0],7)&0x0000001Fu; // 80103E80
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103E84
  return; // 80103E88
L_80103E8C:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103E8C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80103E90
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103E94
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103E98
  c->r[0]=rotl(c->r[0],31)&0x00000007u; // 80103E9C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103EA0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103EA4
  c->r[0]=rotl(c->r[0],28)&0x0000001Fu; // 80103EA8
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103EAC
  return; // 80103EB0
L_80103EB4:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103EB4
  c->r[0]=rotl(c->r[0],23)&0x00000001u; // 80103EB8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103EBC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103EC0
  c->r[0]=rotl(c->r[0],22)&0x00000007u; // 80103EC4
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103EC8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103ECC
  c->r[0]=rotl(c->r[0],19)&0x0000001Fu; // 80103ED0
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103ED4
  return; // 80103ED8
L_80103EDC:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103EDC
  c->r[0]=rotl(c->r[0],14)&0x00000001u; // 80103EE0
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103EE4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103EE8
  c->r[0]=rotl(c->r[0],13)&0x00000007u; // 80103EEC
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103EF0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103EF4
  c->r[0]=rotl(c->r[0],10)&0x0000001Fu; // 80103EF8
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103EFC
  return; // 80103F00
L_80103F04:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103F04
  c->r[0]=rotl(c->r[0],5)&0x00000001u; // 80103F08
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103F0C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80103F10
  c->r[0]=rotl(c->r[0],4)&0x00000007u; // 80103F14
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103F18
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F1C
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80103F20
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103F24
  return; // 80103F28
L_80103F2C:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F2C
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 80103F30
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103F34
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F38
  c->r[0]=rotl(c->r[0],26)&0x00000007u; // 80103F3C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103F40
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F44
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 80103F48
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103F4C
  return; // 80103F50
L_80103F54:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F54
  c->r[0]=rotl(c->r[0],18)&0x00000001u; // 80103F58
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103F5C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F60
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 80103F64
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103F68
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F6C
  c->r[0]=rotl(c->r[0],14)&0x0000001Fu; // 80103F70
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103F74
  return; // 80103F78
L_80103F7C:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F7C
  c->r[0]=rotl(c->r[0],9)&0x00000001u; // 80103F80
  W32(c->r[5]+0x00000000u,c->r[0]); // 80103F84
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F88
  c->r[0]=rotl(c->r[0],8)&0x00000007u; // 80103F8C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103F90
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80103F94
  c->r[0]=rotl(c->r[0],5)&0x0000001Fu; // 80103F98
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103F9C
  return; // 80103FA0
L_80103FA4:;
  c->r[3]=0u+0x00000001u; // 80103FA4
  c->r[0]=0u+0x00000000u; // 80103FA8
  W32(c->r[5]+0x00000000u,c->r[3]); // 80103FAC
  W32(c->r[6]+0x00000000u,c->r[0]); // 80103FB0
  W8(c->r[7]+0x00000000u,c->r[0]); // 80103FB4
  return; // 80103FB8
}

// fn_80103FBC
void f_80103FBC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],25); // 80103FBC
  if (!crb(c,2)) { goto L_80103FC8; } // 80103FC0
  c->r[3]=0u+0x0000000Au; // 80103FC4
L_80103FC8:;
  c->r[6]=0u+0xCC010000u; // 80103FC8
  c->r[7]=0u+0x00000008u; // 80103FCC
  c->r[8]=c->r[3]+0xFFFFFFF7u; // 80103FD0
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80103FD4
  c->r[0]=c->r[8]|0x000000A0u; // 80103FD8
  c->r[3]=rotl(c->r[4],0)&0x3FFFFFFFu; // 80103FDC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80103FE0
  c->r[0]=c->r[8]|0x000000B0u; // 80103FE4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80103FE8
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80103FEC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80103FF0
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 80103FF4
  return; // 80103FF8
}

// fn_80103FFC
void f_80103FFC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000048u; // 80103FFC
  c->r[3]=0u+0xCC010000u; // 80104000
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80104004
  return; // 80104008
}

// fn_8010400C
void f_8010400C(Ctx* __restrict c) {
  cmpu(c,0,c->r[5],0x00000014u); // 8010400C
  c->r[11]=0u+0x00000000u; // 80104010
  c->r[12]=0u+0x00000000u; // 80104014
  c->r[10]=0u+0x00000005u; // 80104018
  if (crb(c,1)) { goto L_801040B4; } // 8010401C
  c->r[9]=0u+0x80290000u; // 80104020
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80104024
  c->r[9]=c->r[9]+0x00005B88u; // 80104028
  c->r[9]=R32(c->r[9]+c->r[0]); // 8010402C
  c->ctr=c->r[9]; // 80104030
  if (true) { switch (c->ctr) { case 0x80104038u: goto L_80104038; case 0x80104044u: goto L_80104044; case 0x80104050u: goto L_80104050; case 0x8010405Cu: goto L_8010405C; case 0x80104068u: goto L_80104068; case 0x80104070u: goto L_80104070; case 0x80104078u: goto L_80104078; case 0x80104080u: goto L_80104080; case 0x80104088u: goto L_80104088; case 0x80104090u: goto L_80104090; case 0x80104098u: goto L_80104098; case 0x801040A0u: goto L_801040A0; case 0x801040A8u: goto L_801040A8; case 0x801040B0u: goto L_801040B0; case 0x801040B4u: goto L_801040B4; case 0x801041A8u: goto L_801041A8; case 0x801041B8u: goto L_801041B8; case 0x801041C8u: goto L_801041C8; case 0x801041D8u: goto L_801041D8; case 0x801041E8u: goto L_801041E8; case 0x801041F8u: goto L_801041F8; case 0x80104208u: goto L_80104208; default: break; } dispatch(c,c->ctr); return; } // 80104034
L_80104038:;
  c->r[10]=0u+0x00000000u; // 80104038
  c->r[12]=0u+0x00000001u; // 8010403C
  goto L_801040B4; // 80104040
L_80104044:;
  c->r[10]=0u+0x00000001u; // 80104044
  c->r[12]=0u+0x00000001u; // 80104048
  goto L_801040B4; // 8010404C
L_80104050:;
  c->r[10]=0u+0x00000003u; // 80104050
  c->r[12]=0u+0x00000001u; // 80104054
  goto L_801040B4; // 80104058
L_8010405C:;
  c->r[10]=0u+0x00000004u; // 8010405C
  c->r[12]=0u+0x00000001u; // 80104060
  goto L_801040B4; // 80104064
L_80104068:;
  c->r[10]=0u+0x00000002u; // 80104068
  goto L_801040B4; // 8010406C
L_80104070:;
  c->r[10]=0u+0x00000002u; // 80104070
  goto L_801040B4; // 80104074
L_80104078:;
  c->r[10]=0u+0x00000005u; // 80104078
  goto L_801040B4; // 8010407C
L_80104080:;
  c->r[10]=0u+0x00000006u; // 80104080
  goto L_801040B4; // 80104084
L_80104088:;
  c->r[10]=0u+0x00000007u; // 80104088
  goto L_801040B4; // 8010408C
L_80104090:;
  c->r[10]=0u+0x00000008u; // 80104090
  goto L_801040B4; // 80104094
L_80104098:;
  c->r[10]=0u+0x00000009u; // 80104098
  goto L_801040B4; // 8010409C
L_801040A0:;
  c->r[10]=0u+0x0000000Au; // 801040A0
  goto L_801040B4; // 801040A4
L_801040A8:;
  c->r[10]=0u+0x0000000Bu; // 801040A8
  goto L_801040B4; // 801040AC
L_801040B0:;
  c->r[10]=0u+0x0000000Cu; // 801040B0
L_801040B4:;
  cmps(c,0,(int32_t)c->r[4],1); // 801040B4
  if (crb(c,2)) { goto L_801040DC; } // 801040B8
  if (!crb(c,0)) { goto L_801040CC; } // 801040BC
  cmps(c,0,(int32_t)c->r[4],0); // 801040C0
  if (!crb(c,0)) { goto L_801040EC; } // 801040C4
  goto L_80104154; // 801040C8
L_801040CC:;
  cmps(c,0,(int32_t)c->r[4],10); // 801040CC
  if (crb(c,2)) { goto L_80104128; } // 801040D0
  if (!crb(c,0)) { goto L_80104154; } // 801040D4
  goto L_80104100; // 801040D8
L_801040DC:;
  c->r[11]=0u+0x00000000u; // 801040DC
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801040E0
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801040E4
  goto L_80104154; // 801040E8
L_801040EC:;
  c->r[0]=0u+0x00000000u; // 801040EC
  c->r[11]=c->r[0]|0x00000002u; // 801040F0
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801040F4
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801040F8
  goto L_80104154; // 801040FC
L_80104100:;
  c->r[9]=0u+0x00000001u; // 80104100
  c->r[5]=c->r[5]+0xFFFFFFF4u; // 80104104
  c->r[11]=0u+0x00000000u; // 80104108
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 8010410C
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 80104110
  c->r[11]=(rotl(c->r[9],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 80104114
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 80104118
  c->r[11]=(rotl(c->r[5],12)&0x00007000u)|(c->r[11]&~0x00007000u); // 8010411C
  c->r[11]=(rotl(c->r[0],15)&0x00038000u)|(c->r[11]&~0x00038000u); // 80104120
  goto L_80104154; // 80104124
L_80104128:;
  cmps(c,0,(int32_t)c->r[5],19); // 80104128
  c->r[11]=0u+0x00000000u; // 8010412C
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 80104130
  if (!crb(c,2)) { goto L_80104144; } // 80104134
  c->r[0]=0u+0x00000002u; // 80104138
  c->r[11]=(rotl(c->r[0],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 8010413C
  goto L_8010414C; // 80104140
L_80104144:;
  c->r[0]=0u+0x00000003u; // 80104144
  c->r[11]=(rotl(c->r[0],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 80104148
L_8010414C:;
  c->r[0]=0u+0x00000002u; // 8010414C
  c->r[11]=(rotl(c->r[0],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 80104150
L_80104154:;
  c->r[10]=R32(c->r[2]+0xFFFF8C88u); // 80104154
  c->r[9]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80104158
  c->r[0]=c->r[8]+0xFFFFFFC0u; // 8010415C
  c->r[4]=0u+0x00000000u; // 80104160
  c->r[8]=c->r[10]+c->r[9]; // 80104164
  c->r[5]=0u+0x00010000u; // 80104168
  W32(c->r[8]+0x000000C8u,c->r[11]); // 8010416C
  c->r[4]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[4]&~0x0000003Fu); // 80104170
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 80104174
  cmpu(c,0,c->r[3],0x00000006u); // 80104178
  c->r[5]=R32(c->r[10]+0x000005FCu); // 8010417C
  c->r[4]=(rotl(c->r[7],8)&0x00000100u)|(c->r[4]&~0x00000100u); // 80104180
  c->r[0]=c->r[5]|c->r[0]; // 80104184
  W32(c->r[10]+0x000005FCu,c->r[0]); // 80104188
  W32(c->r[8]+0x000000E8u,c->r[4]); // 8010418C
  if (crb(c,1)) { goto L_80104218; } // 80104190
  c->r[3]=0u+0x80290000u; // 80104194
  c->r[3]=c->r[3]+0x00005B6Cu; // 80104198
  c->r[3]=R32(c->r[3]+c->r[9]); // 8010419C
  c->ctr=c->r[3]; // 801041A0
  if (true) { switch (c->ctr) { case 0x80104038u: goto L_80104038; case 0x80104044u: goto L_80104044; case 0x80104050u: goto L_80104050; case 0x8010405Cu: goto L_8010405C; case 0x80104068u: goto L_80104068; case 0x80104070u: goto L_80104070; case 0x80104078u: goto L_80104078; case 0x80104080u: goto L_80104080; case 0x80104088u: goto L_80104088; case 0x80104090u: goto L_80104090; case 0x80104098u: goto L_80104098; case 0x801040A0u: goto L_801040A0; case 0x801040A8u: goto L_801040A8; case 0x801040B0u: goto L_801040B0; case 0x801040B4u: goto L_801040B4; case 0x801041A8u: goto L_801041A8; case 0x801041B8u: goto L_801041B8; case 0x801041C8u: goto L_801041C8; case 0x801041D8u: goto L_801041D8; case 0x801041E8u: goto L_801041E8; case 0x801041F8u: goto L_801041F8; case 0x80104208u: goto L_80104208; default: break; } dispatch(c,c->ctr); return; } // 801041A4
L_801041A8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801041A8
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 801041AC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801041B0
  goto L_80104224; // 801041B4
L_801041B8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801041B8
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 801041BC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801041C0
  goto L_80104224; // 801041C4
L_801041C8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801041C8
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 801041CC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801041D0
  goto L_80104224; // 801041D4
L_801041D8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801041D8
  c->r[0]=(rotl(c->r[6],24)&0x3F000000u)|(c->r[0]&~0x3F000000u); // 801041DC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801041E0
  goto L_80104224; // 801041E4
L_801041E8:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801041E8
  c->r[0]=(rotl(c->r[6],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 801041EC
  W32(c->r[10]+0x00000084u,c->r[0]); // 801041F0
  goto L_80104224; // 801041F4
L_801041F8:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801041F8
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 801041FC
  W32(c->r[10]+0x00000084u,c->r[0]); // 80104200
  goto L_80104224; // 80104204
L_80104208:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 80104208
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 8010420C
  W32(c->r[10]+0x00000084u,c->r[0]); // 80104210
  goto L_80104224; // 80104214
L_80104218:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 80104218
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 8010421C
  W32(c->r[10]+0x00000084u,c->r[0]); // 80104220
L_80104224:;
  c->r[0]=R32(c->r[10]+0x000005FCu); // 80104224
  c->r[0]=c->r[0]|0x04000000u; // 80104228
  W32(c->r[10]+0x000005FCu,c->r[0]); // 8010422C
  return; // 80104230
}

// fn_80104234
void f_80104234(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80104234
  c->r[0]=R32(c->r[4]+0x00000254u); // 80104238
  c->r[0]=(rotl(c->r[3],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 8010423C
  W32(c->r[4]+0x00000254u,c->r[0]); // 80104240
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80104244
  c->r[0]=c->r[0]|0x02000000u; // 80104248
  c->r[0]=c->r[0]|0x00000004u; // 8010424C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80104250
  return; // 80104254
}

// GXSetMisc
void f_80104258(Ctx* __restrict c) {
  trace_call(0x80104258u);
  cmps(c,0,(int32_t)c->r[3],2); // 80104258
  if (crb(c,2)) { goto L_801042B4; } // 8010425C
  if (!crb(c,0)) { goto L_80104274; } // 80104260
  cmps(c,0,(int32_t)c->r[3],0); // 80104264
  if (crb(c,2)) return; // 80104268
  if (!crb(c,0)) { goto L_80104280; } // 8010426C
  return; // 80104270
L_80104274:;
  cmps(c,0,(int32_t)c->r[3],4); // 80104274
  if (!crb(c,0)) return; // 80104278
  goto L_801042CC; // 8010427C
L_80104280:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80104280
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80104284
  W16(c->r[5]+0x00000004u,c->r[4]); // 80104288
  c->r[3]=cntlz(c->r[0]); // 8010428C
  c->r[0]=0u+0x00000001u; // 80104290
  c->r[3]=rotl(c->r[3],27)&0x0000FFFFu; // 80104294
  W16(c->r[5]+0x00000000u,c->r[3]); // 80104298
  W16(c->r[5]+0x00000002u,c->r[0]); // 8010429C
  if (crb(c,2)) return; // 801042A0
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801042A4
  c->r[0]=c->r[0]|0x00000008u; // 801042A8
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801042AC
  return; // 801042B0
L_801042B4:;
  c->r[0]=0u-c->r[4]; // 801042B4
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801042B8
  c->r[0]=c->r[0]|c->r[4]; // 801042BC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801042C0
  W8(c->r[3]+0x000005F9u,c->r[0]); // 801042C4
  return; // 801042C8
L_801042CC:;
  c->r[0]=0u-c->r[4]; // 801042CC
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801042D0
  c->r[0]=c->r[0]|c->r[4]; // 801042D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801042D8
  W8(c->r[3]+0x000005FAu,c->r[0]); // 801042DC
  return; // 801042E0
}

// fn_801042E4
void f_801042E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801042E4
  c->r[0]=c->lr; // 801042E8
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801042EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801042F0
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801042F4
  cmps(c,0,(int32_t)c->r[0],0); // 801042F8
  if (crb(c,2)) { goto L_80104304; } // 801042FC
  c->lr=0x80104304u; f_80104BB8(c); // 80104300
L_80104304:;
  c->r[0]=0u+0x00000000u; // 80104304
  c->r[3]=0u+0xCC010000u; // 80104308
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010430C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104310
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104314
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104318
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010431C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104320
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104324
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104328
  c->lr=0x80104330u; f_800DDCE8(c); // 8010432C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104330
  c->lr=c->r[0]; // 80104334
  c->r[1]=c->r[1]+0x00000010u; // 80104338
  return; // 8010433C
}

// fn_80104340
void f_80104340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104340
  c->r[0]=c->lr; // 80104344
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104348
  c->r[11]=c->r[1]+0x00000020u; // 8010434C
  c->lr=0x80104354u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80104350
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80104354
  c->r[0]=R8(c->r[3]+0x000005FAu); // 80104358
  cmps(c,0,(int32_t)c->r[0],0); // 8010435C
  if (crb(c,2)) { goto L_80104400; } // 80104360
  c->lr=0x80104368u; f_801030D4(c); // 80104364
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80104368
  if (crb(c,2)) { goto L_80104400; } // 8010436C
  c->r[5]=R32(c->r[13]+0xFFFF9A24u); // 80104370
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 80104374
L_80104378:;
  c->r[3]=c->r[0]|c->r[0]; // 80104378
  c->r[4]=R16(c->r[5]+0x00000050u); // 8010437C
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 80104380
  cmpu(c,0,c->r[0],c->r[3]); // 80104384
  if (!crb(c,2)) { IRQCHK(c); goto L_80104378; } // 80104388
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 8010438C
  c->r[0]=0u+0x00000000u; // 80104390
  c->r[27]=c->r[3]|c->r[4]; // 80104394
  c->r[29]=0u+0x00000008u; // 80104398
  c->r[28]=c->r[0]^0x80000000u; // 8010439C
L_801043A0:;
  c->lr=0x801043A4u; f_800E8F9C(c); // 801043A0
  c->r[31]=c->r[4]|c->r[4]; // 801043A4
  c->r[30]=c->r[3]|c->r[3]; // 801043A8
L_801043AC:;
  c->lr=0x801043B0u; f_800E8F9C(c); // 801043AC
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 801043B0
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 801043B4
  c->r[3]=c->r[0]^0x80000000u; // 801043B8
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 801043BC
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 801043C0
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 801043C4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801043C8
  if (crb(c,2)) { IRQCHK(c); goto L_801043AC; } // 801043CC
  c->r[5]=R32(c->r[13]+0xFFFF9A24u); // 801043D0
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801043D4
L_801043D8:;
  c->r[3]=c->r[0]|c->r[0]; // 801043D8
  c->r[4]=R16(c->r[5]+0x00000050u); // 801043DC
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801043E0
  cmpu(c,0,c->r[0],c->r[3]); // 801043E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801043D8; } // 801043E8
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801043EC
  c->r[0]=c->r[0]|c->r[4]; // 801043F0
  cmpu(c,0,c->r[0],c->r[27]); // 801043F4
  c->r[27]=c->r[0]|c->r[0]; // 801043F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801043A0; } // 801043FC
L_80104400:;
  c->r[0]=0u+0x00000001u; // 80104400
  c->r[3]=0u+0xCC000000u; // 80104404
  W32(c->r[3]+0x00003018u,c->r[0]); // 80104408
  c->lr=0x80104410u; f_800E8F9C(c); // 8010440C
  c->r[0]=0u+0x00000000u; // 80104410
  c->r[31]=c->r[4]|c->r[4]; // 80104414
  c->r[30]=c->r[3]|c->r[3]; // 80104418
  c->r[29]=0u+0x00000032u; // 8010441C
  c->r[28]=c->r[0]^0x80000000u; // 80104420
L_80104424:;
  c->lr=0x80104428u; f_800E8F9C(c); // 80104424
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 80104428
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 8010442C
  c->r[3]=c->r[0]^0x80000000u; // 80104430
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 80104434
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 80104438
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 8010443C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80104440
  if (crb(c,2)) { IRQCHK(c); goto L_80104424; } // 80104444
  c->r[30]=0u+0x00000000u; // 80104448
  c->r[3]=0u+0xCC000000u; // 8010444C
  W32(c->r[3]+0x00003018u,c->r[30]); // 80104450
  c->lr=0x80104458u; f_800E8F9C(c); // 80104454
  c->r[31]=c->r[30]^0x80000000u; // 80104458
  c->r[28]=c->r[4]|c->r[4]; // 8010445C
  c->r[29]=c->r[3]|c->r[3]; // 80104460
  c->r[30]=0u+0x00000005u; // 80104464
L_80104468:;
  c->lr=0x8010446Cu; f_800E8F9C(c); // 80104468
  c->r[4]=addc(c,~c->r[28],c->r[4],1); // 8010446C
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 80104470
  c->r[3]=c->r[0]^0x80000000u; // 80104474
  c->r[0]=addc(c,~c->r[4],c->r[30],1); // 80104478
  c->r[3]=addc(c,~c->r[3],c->r[31],c->xer_ca); // 8010447C
  c->r[3]=addc(c,~c->r[31],c->r[31],c->xer_ca); // 80104480
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80104484
  if (crb(c,2)) { IRQCHK(c); goto L_80104468; } // 80104488
  c->r[11]=c->r[1]+0x00000020u; // 8010448C
  c->lr=0x80104494u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80104490
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104494
  c->lr=c->r[0]; // 80104498
  c->r[1]=c->r[1]+0x00000020u; // 8010449C
  return; // 801044A0
}

// fn_801044A4
void f_801044A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801044A4
  c->r[0]=c->lr; // 801044A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801044AC
  c->r[11]=c->r[1]+0x00000020u; // 801044B0
  c->lr=0x801044B8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801044B4
  c->r[31]=R32(c->r[2]+0xFFFF8C88u); // 801044B8
  c->r[0]=R8(c->r[31]+0x000005FAu); // 801044BC
  cmps(c,0,(int32_t)c->r[0],0); // 801044C0
  if (crb(c,2)) { goto L_80104564; } // 801044C4
  c->lr=0x801044CCu; f_801030D4(c); // 801044C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801044CC
  if (crb(c,2)) { goto L_80104564; } // 801044D0
  c->r[5]=R32(c->r[13]+0xFFFF9A24u); // 801044D4
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 801044D8
L_801044DC:;
  c->r[0]=c->r[3]|c->r[3]; // 801044DC
  c->r[4]=R16(c->r[5]+0x00000050u); // 801044E0
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 801044E4
  cmpu(c,0,c->r[3],c->r[0]); // 801044E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801044DC; } // 801044EC
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801044F0
  c->r[0]=0u+0x00000000u; // 801044F4
  c->r[26]=c->r[3]|c->r[4]; // 801044F8
  c->r[28]=0u+0x00000008u; // 801044FC
  c->r[27]=c->r[0]^0x80000000u; // 80104500
L_80104504:;
  c->lr=0x80104508u; f_800E8F9C(c); // 80104504
  c->r[30]=c->r[4]|c->r[4]; // 80104508
  c->r[29]=c->r[3]|c->r[3]; // 8010450C
L_80104510:;
  c->lr=0x80104514u; f_800E8F9C(c); // 80104510
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 80104514
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 80104518
  c->r[3]=c->r[0]^0x80000000u; // 8010451C
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 80104520
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 80104524
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 80104528
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 8010452C
  if (crb(c,2)) { IRQCHK(c); goto L_80104510; } // 80104530
  c->r[5]=R32(c->r[13]+0xFFFF9A24u); // 80104534
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 80104538
L_8010453C:;
  c->r[0]=c->r[4]|c->r[4]; // 8010453C
  c->r[3]=R16(c->r[5]+0x00000050u); // 80104540
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 80104544
  cmpu(c,0,c->r[4],c->r[0]); // 80104548
  if (!crb(c,2)) { IRQCHK(c); goto L_8010453C; } // 8010454C
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 80104550
  c->r[0]=c->r[0]|c->r[3]; // 80104554
  cmpu(c,0,c->r[0],c->r[26]); // 80104558
  c->r[26]=c->r[0]|c->r[0]; // 8010455C
  if (!crb(c,2)) { IRQCHK(c); goto L_80104504; } // 80104560
L_80104564:;
  c->r[0]=0u+0x00000001u; // 80104564
  c->r[3]=0u+0xCC000000u; // 80104568
  W32(c->r[3]+0x00003018u,c->r[0]); // 8010456C
  c->lr=0x80104574u; f_800E8F9C(c); // 80104570
  c->r[0]=0u+0x00000000u; // 80104574
  c->r[30]=c->r[4]|c->r[4]; // 80104578
  c->r[29]=c->r[3]|c->r[3]; // 8010457C
  c->r[28]=0u+0x00000032u; // 80104580
  c->r[27]=c->r[0]^0x80000000u; // 80104584
L_80104588:;
  c->lr=0x8010458Cu; f_800E8F9C(c); // 80104588
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 8010458C
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 80104590
  c->r[3]=c->r[0]^0x80000000u; // 80104594
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 80104598
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 8010459C
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 801045A0
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801045A4
  if (crb(c,2)) { IRQCHK(c); goto L_80104588; } // 801045A8
  c->r[29]=0u+0x00000000u; // 801045AC
  c->r[3]=0u+0xCC000000u; // 801045B0
  W32(c->r[3]+0x00003018u,c->r[29]); // 801045B4
  c->lr=0x801045BCu; f_800E8F9C(c); // 801045B8
  c->r[30]=c->r[29]^0x80000000u; // 801045BC
  c->r[27]=c->r[4]|c->r[4]; // 801045C0
  c->r[28]=c->r[3]|c->r[3]; // 801045C4
  c->r[29]=0u+0x00000005u; // 801045C8
L_801045CC:;
  c->lr=0x801045D0u; f_800E8F9C(c); // 801045CC
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 801045D0
  c->r[0]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 801045D4
  c->r[3]=c->r[0]^0x80000000u; // 801045D8
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 801045DC
  c->r[3]=addc(c,~c->r[3],c->r[30],c->xer_ca); // 801045E0
  c->r[3]=addc(c,~c->r[30],c->r[30],c->xer_ca); // 801045E4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801045E8
  if (crb(c,2)) { IRQCHK(c); goto L_801045CC; } // 801045EC
  c->lr=0x801045F4u; f_801030D4(c); // 801045F0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801045F4
  if (crb(c,2)) { goto L_80104640; } // 801045F8
  c->lr=0x80104600u; f_8010319C(c); // 801045FC
  c->lr=0x80104604u; f_80101A38(c); // 80104600
  c->r[0]=0u+0x00000000u; // 80104604
  W32(c->r[31]+0x000005FCu,c->r[0]); // 80104608
  goto L_80104614; // 8010460C
  c->lr=0x80104614u; f_80104BB8(c); // 80104610
L_80104614:;
  c->r[0]=0u+0x00000000u; // 80104614
  c->r[3]=0u+0xCC010000u; // 80104618
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010461C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104620
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104624
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104628
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010462C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104630
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104634
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104638
  c->lr=0x80104640u; f_800DDCE8(c); // 8010463C
L_80104640:;
  c->r[11]=c->r[1]+0x00000020u; // 80104640
  c->lr=0x80104648u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80104644
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104648
  c->lr=c->r[0]; // 8010464C
  c->r[1]=c->r[1]+0x00000020u; // 80104650
  return; // 80104654
}

// fn_80104658
void f_80104658(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104658
  c->r[0]=c->lr; // 8010465C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104660
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80104664
  W32(c->r[1]+0x00000018u,c->r[30]); // 80104668
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010466C
  c->r[29]=c->r[3]|c->r[3]; // 80104670
  c->lr=0x80104678u; f_800E4F54(c); // 80104674
  c->r[4]=0u+0xCC010000u; // 80104678
  c->r[5]=0u+0x00000061u; // 8010467C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80104680
  c->r[6]=c->r[29]|0x48000000u; // 80104684
  c->r[0]=0u+0x00000047u; // 80104688
  c->r[30]=R32(c->r[2]+0xFFFF8C88u); // 8010468C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80104690
  c->r[6]=(rotl(c->r[29],0)&0x0000FFFFu)|(c->r[6]&~0x0000FFFFu); // 80104694
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80104698
  c->r[29]=c->r[3]|c->r[3]; // 8010469C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801046A0
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801046A4
  c->r[0]=R32(c->r[30]+0x000005FCu); // 801046A8
  cmps(c,0,(int32_t)c->r[0],0); // 801046AC
  if (crb(c,2)) { goto L_801046B8; } // 801046B0
  c->lr=0x801046B8u; f_80104BB8(c); // 801046B4
L_801046B8:;
  c->r[31]=0u+0x00000000u; // 801046B8
  c->r[3]=0u+0xCC010000u; // 801046BC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801046C0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801046C4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801046C8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801046CC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801046D0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801046D4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801046D8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801046DC
  c->lr=0x801046E4u; f_800DDCE8(c); // 801046E0
  c->r[3]=c->r[29]|c->r[29]; // 801046E4
  c->lr=0x801046ECu; f_800E4F7C(c); // 801046E8
  W16(c->r[30]+0x00000002u,c->r[31]); // 801046EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801046F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801046F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801046F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801046FC
  c->lr=c->r[0]; // 80104700
  c->r[1]=c->r[1]+0x00000020u; // 80104704
  return; // 80104708
}

// fn_8010470C
void f_8010470C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010470C
  c->r[0]=c->lr; // 80104710
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104718
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010471C
  c->lr=0x80104724u; f_800E4F54(c); // 80104720
  c->r[5]=0u+0xCC010000u; // 80104724
  c->r[0]=0u+0x00000061u; // 80104728
  c->r[4]=0u+0x45000000u; // 8010472C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80104730
  c->r[0]=c->r[4]+0x00000002u; // 80104734
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80104738
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8010473C
  c->r[30]=c->r[3]|c->r[3]; // 80104740
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80104744
  cmps(c,0,(int32_t)c->r[0],0); // 80104748
  if (crb(c,2)) { goto L_80104754; } // 8010474C
  c->lr=0x80104754u; f_80104BB8(c); // 80104750
L_80104754:;
  c->r[31]=0u+0x00000000u; // 80104754
  c->r[3]=0u+0xCC010000u; // 80104758
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8010475C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104760
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104764
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104768
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8010476C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104770
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104774
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104778
  c->lr=0x80104780u; f_800DDCE8(c); // 8010477C
  W8(c->r[13]+0xFFFF9A68u,c->r[31]); // 80104780
  c->r[3]=c->r[30]|c->r[30]; // 80104784
  c->lr=0x8010478Cu; f_800E4F7C(c); // 80104788
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010478C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104790
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104794
  c->lr=c->r[0]; // 80104798
  c->r[1]=c->r[1]+0x00000010u; // 8010479C
  return; // 801047A0
}

// fn_801047A4
void f_801047A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801047A4
  c->r[0]=c->lr; // 801047A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801047AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801047B0
  c->lr=0x801047B8u; f_800E4F54(c); // 801047B4
  c->r[31]=c->r[3]|c->r[3]; // 801047B8
  goto L_801047C8; // 801047BC
L_801047C0:;
  c->r[3]=c->r[13]+0xFFFF9A60u; // 801047C0
  c->lr=0x801047C8u; f_800E8BF8(c); // 801047C4
L_801047C8:;
  c->r[0]=R8(c->r[13]+0xFFFF9A68u); // 801047C8
  cmps(c,0,(int32_t)c->r[0],0); // 801047CC
  if (crb(c,2)) { IRQCHK(c); goto L_801047C0; } // 801047D0
  c->r[3]=c->r[31]|c->r[31]; // 801047D4
  c->lr=0x801047DCu; f_800E4F7C(c); // 801047D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801047DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801047E0
  c->lr=c->r[0]; // 801047E4
  c->r[1]=c->r[1]+0x00000010u; // 801047E8
  return; // 801047EC
}

// GXDrawDone
void f_801047F0(Ctx* __restrict c) {
  trace_call(0x801047F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801047F0
  c->r[0]=c->lr; // 801047F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801047F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801047FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104800
  c->lr=0x80104808u; f_800E4F54(c); // 80104804
  c->r[5]=0u+0xCC010000u; // 80104808
  c->r[0]=0u+0x00000061u; // 8010480C
  c->r[4]=0u+0x45000000u; // 80104810
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80104814
  c->r[0]=c->r[4]+0x00000002u; // 80104818
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 8010481C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80104820
  c->r[30]=c->r[3]|c->r[3]; // 80104824
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80104828
  cmps(c,0,(int32_t)c->r[0],0); // 8010482C
  if (crb(c,2)) { goto L_80104838; } // 80104830
  c->lr=0x80104838u; f_80104BB8(c); // 80104834
L_80104838:;
  c->r[31]=0u+0x00000000u; // 80104838
  c->r[3]=0u+0xCC010000u; // 8010483C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104840
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104844
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104848
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8010484C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104850
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104854
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80104858
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8010485C
  c->lr=0x80104864u; f_800DDCE8(c); // 80104860
  W8(c->r[13]+0xFFFF9A68u,c->r[31]); // 80104864
  c->r[3]=c->r[30]|c->r[30]; // 80104868
  c->lr=0x80104870u; f_800E4F7C(c); // 8010486C
  c->lr=0x80104874u; f_800E4F54(c); // 80104870
  c->r[30]=c->r[3]|c->r[3]; // 80104874
  goto L_80104884; // 80104878
L_8010487C:;
  c->r[3]=c->r[13]+0xFFFF9A60u; // 8010487C
  c->lr=0x80104884u; f_800E8BF8(c); // 80104880
L_80104884:;
  c->r[0]=R8(c->r[13]+0xFFFF9A68u); // 80104884
  cmps(c,0,(int32_t)c->r[0],0); // 80104888
  if (crb(c,2)) { IRQCHK(c); goto L_8010487C; } // 8010488C
  c->r[3]=c->r[30]|c->r[30]; // 80104890
  c->lr=0x80104898u; f_800E4F7C(c); // 80104894
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104898
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010489C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801048A0
  c->lr=c->r[0]; // 801048A4
  c->r[1]=c->r[1]+0x00000010u; // 801048A8
  return; // 801048AC
}

// GXTexModeSync
void f_801048B0(Ctx* __restrict c) {
  trace_call(0x801048B0u);
  c->r[4]=0u+0xCC010000u; // 801048B0
  c->r[0]=0u+0x00000061u; // 801048B4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801048B8
  c->r[0]=0u+0x00000000u; // 801048BC
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 801048C0
  c->r[3]=R32(c->r[5]+0x0000022Cu); // 801048C4
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801048C8
  W16(c->r[5]+0x00000002u,c->r[0]); // 801048CC
  return; // 801048D0
}

// GXPokeAlphaMode
void f_801048D4(Ctx* __restrict c) {
  trace_call(0x801048D4u);
  c->r[5]=R32(c->r[13]+0xFFFF9A20u); // 801048D4
  c->r[4]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[4]&~0xFFFFFF00u); // 801048D8
  W16(c->r[5]+0x00000006u,c->r[4]); // 801048DC
  return; // 801048E0
}

// GXPokeAlphaRead
void f_801048E4(Ctx* __restrict c) {
  trace_call(0x801048E4u);
  c->r[0]=0u+0x00000000u; // 801048E4
  c->r[4]=R32(c->r[13]+0xFFFF9A20u); // 801048E8
  c->r[0]=(rotl(c->r[3],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 801048EC
  c->r[0]=c->r[0]|0x00000004u; // 801048F0
  W16(c->r[4]+0x00000008u,c->r[0]); // 801048F4
  return; // 801048F8
}

// GXPokeAlphaUpdate
void f_801048FC(Ctx* __restrict c) {
  trace_call(0x801048FCu);
  c->r[4]=R32(c->r[13]+0xFFFF9A20u); // 801048FC
  c->r[0]=R16(c->r[4]+0x00000002u); // 80104900
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 80104904
  W16(c->r[4]+0x00000002u,c->r[0]); // 80104908
  return; // 8010490C
}

// GXPokeBlendMode
void f_80104910(Ctx* __restrict c) {
  trace_call(0x80104910u);
  c->r[7]=R32(c->r[13]+0xFFFF9A20u); // 80104910
  cmps(c,0,(int32_t)c->r[3],1); // 80104914
  c->r[0]=0u+0x00000000u; // 80104918
  c->r[9]=R16(c->r[7]+0x00000002u); // 8010491C
  if (crb(c,2)) { goto L_8010492C; } // 80104920
  cmps(c,0,(int32_t)c->r[3],3); // 80104924
  if (!crb(c,2)) { goto L_80104930; } // 80104928
L_8010492C:;
  c->r[0]=0u+0x00000001u; // 8010492C
L_80104930:;
  c->r[7]=c->r[3]+0xFFFFFFFDu; // 80104930
  c->r[9]=(rotl(c->r[0],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 80104934
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80104938
  c->r[3]=R32(c->r[13]+0xFFFF9A20u); // 8010493C
  c->r[8]=cntlz(c->r[7]); // 80104940
  c->r[7]=cntlz(c->r[0]); // 80104944
  c->r[0]=0u+0x00000041u; // 80104948
  c->r[9]=(rotl(c->r[8],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 8010494C
  c->r[9]=(rotl(c->r[7],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 80104950
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 80104954
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 80104958
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 8010495C
  c->r[9]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 80104960
  W16(c->r[3]+0x00000002u,c->r[9]); // 80104964
  return; // 80104968
}

// GXPokeColorUpdate
void f_8010496C(Ctx* __restrict c) {
  trace_call(0x8010496Cu);
  c->r[4]=R32(c->r[13]+0xFFFF9A20u); // 8010496C
  c->r[0]=R16(c->r[4]+0x00000002u); // 80104970
  c->r[0]=(rotl(c->r[3],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 80104974
  W16(c->r[4]+0x00000002u,c->r[0]); // 80104978
  return; // 8010497C
}

// GXPokeDstAlpha
void f_80104980(Ctx* __restrict c) {
  trace_call(0x80104980u);
  c->r[5]=R32(c->r[13]+0xFFFF9A20u); // 80104980
  c->r[0]=0u+0x00000000u; // 80104984
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80104988
  c->r[0]=(rotl(c->r[3],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 8010498C
  W16(c->r[5]+0x00000004u,c->r[0]); // 80104990
  return; // 80104994
}

// GXPokeDither
void f_80104998(Ctx* __restrict c) {
  trace_call(0x80104998u);
  c->r[4]=R32(c->r[13]+0xFFFF9A20u); // 80104998
  c->r[0]=R16(c->r[4]+0x00000002u); // 8010499C
  c->r[0]=(rotl(c->r[3],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 801049A0
  W16(c->r[4]+0x00000002u,c->r[0]); // 801049A4
  return; // 801049A8
}

// GXPokeZMode
void f_801049AC(Ctx* __restrict c) {
  trace_call(0x801049ACu);
  c->r[6]=R32(c->r[13]+0xFFFF9A20u); // 801049AC
  c->r[0]=0u+0x00000000u; // 801049B0
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801049B4
  c->r[0]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 801049B8
  c->r[0]=(rotl(c->r[5],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 801049BC
  W16(c->r[6]+0x00000000u,c->r[0]); // 801049C0
  return; // 801049C4
}

// GXSetDrawSyncCallback
void f_801049C8(Ctx* __restrict c) {
  trace_call(0x801049C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801049C8
  c->r[0]=c->lr; // 801049CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801049D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801049D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801049D8
  c->r[30]=c->r[3]|c->r[3]; // 801049DC
  c->r[31]=R32(c->r[13]+0xFFFF9A70u); // 801049E0
  c->lr=0x801049E8u; f_800E4F54(c); // 801049E4
  W32(c->r[13]+0xFFFF9A70u,c->r[30]); // 801049E8
  c->lr=0x801049F0u; f_800E4F7C(c); // 801049EC
  c->r[3]=c->r[31]|c->r[31]; // 801049F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801049F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801049F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801049FC
  c->lr=c->r[0]; // 80104A00
  c->r[1]=c->r[1]+0x00000010u; // 80104A04
  return; // 80104A08
}

// GXTokenInterruptHandler
void f_80104A0C(Ctx* __restrict c) {
  trace_call(0x80104A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104A0C
  c->r[0]=c->lr; // 80104A10
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80104A14
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80104A18
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80104A1C
  c->r[30]=c->r[4]|c->r[4]; // 80104A20
  c->r[0]=R32(c->r[13]+0xFFFF9A70u); // 80104A24
  c->r[3]=R32(c->r[13]+0xFFFF9A20u); // 80104A28
  cmps(c,0,(int32_t)c->r[0],0); // 80104A2C
  c->r[31]=R16(c->r[3]+0x0000000Eu); // 80104A30
  if (crb(c,2)) { goto L_80104A68; } // 80104A34
  c->r[3]=c->r[1]+0x00000008u; // 80104A38
  c->lr=0x80104A40u; f_800E0DEC(c); // 80104A3C
  c->r[3]=c->r[1]+0x00000008u; // 80104A40
  c->lr=0x80104A48u; f_800E0BC4(c); // 80104A44
  c->r[12]=R32(c->r[13]+0xFFFF9A70u); // 80104A48
  c->r[3]=c->r[31]|c->r[31]; // 80104A4C
  c->ctr=c->r[12]; // 80104A50
  if (true) { c->lr=0x80104A58u; dispatch(c,c->ctr); } // 80104A54
  c->r[3]=c->r[1]+0x00000008u; // 80104A58
  c->lr=0x80104A60u; f_800E0DEC(c); // 80104A5C
  c->r[3]=c->r[30]|c->r[30]; // 80104A60
  c->lr=0x80104A68u; f_800E0BC4(c); // 80104A64
L_80104A68:;
  c->r[3]=R32(c->r[13]+0xFFFF9A20u); // 80104A68
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80104A6C
  c->r[0]=c->r[0]|0x00000004u; // 80104A70
  W16(c->r[3]+0x0000000Au,c->r[0]); // 80104A74
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80104A78
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80104A7C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80104A80
  c->lr=c->r[0]; // 80104A84
  c->r[1]=c->r[1]+0x000002E0u; // 80104A88
  return; // 80104A8C
}

// GXSetDrawDoneCallback
void f_80104A90(Ctx* __restrict c) {
  trace_call(0x80104A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104A90
  c->r[0]=c->lr; // 80104A94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104A98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104A9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104AA0
  c->r[30]=c->r[3]|c->r[3]; // 80104AA4
  c->r[31]=R32(c->r[13]+0xFFFF9A6Cu); // 80104AA8
  c->lr=0x80104AB0u; f_800E4F54(c); // 80104AAC
  W32(c->r[13]+0xFFFF9A6Cu,c->r[30]); // 80104AB0
  c->lr=0x80104AB8u; f_800E4F7C(c); // 80104AB4
  c->r[3]=c->r[31]|c->r[31]; // 80104AB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104ABC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104AC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104AC4
  c->lr=c->r[0]; // 80104AC8
  c->r[1]=c->r[1]+0x00000010u; // 80104ACC
  return; // 80104AD0
}

// GXFinishInterruptHandler
void f_80104AD4(Ctx* __restrict c) {
  trace_call(0x80104AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104AD4
  c->r[0]=c->lr; // 80104AD8
  c->r[3]=0u+0x00000001u; // 80104ADC
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80104AE0
  W32(c->r[1]+0x000002DCu,c->r[31]); // 80104AE4
  c->r[31]=c->r[4]|c->r[4]; // 80104AE8
  c->r[5]=R32(c->r[13]+0xFFFF9A20u); // 80104AEC
  c->r[0]=R16(c->r[5]+0x0000000Au); // 80104AF0
  c->r[0]=c->r[0]|0x00000008u; // 80104AF4
  W16(c->r[5]+0x0000000Au,c->r[0]); // 80104AF8
  c->r[0]=R32(c->r[13]+0xFFFF9A6Cu); // 80104AFC
  W8(c->r[13]+0xFFFF9A68u,c->r[3]); // 80104B00
  cmps(c,0,(int32_t)c->r[0],0); // 80104B04
  if (crb(c,2)) { goto L_80104B38; } // 80104B08
  c->r[3]=c->r[1]+0x00000008u; // 80104B0C
  c->lr=0x80104B14u; f_800E0DEC(c); // 80104B10
  c->r[3]=c->r[1]+0x00000008u; // 80104B14
  c->lr=0x80104B1Cu; f_800E0BC4(c); // 80104B18
  c->r[12]=R32(c->r[13]+0xFFFF9A6Cu); // 80104B1C
  c->ctr=c->r[12]; // 80104B20
  if (true) { c->lr=0x80104B28u; dispatch(c,c->ctr); } // 80104B24
  c->r[3]=c->r[1]+0x00000008u; // 80104B28
  c->lr=0x80104B30u; f_800E0DEC(c); // 80104B2C
  c->r[3]=c->r[31]|c->r[31]; // 80104B30
  c->lr=0x80104B38u; f_800E0BC4(c); // 80104B34
L_80104B38:;
  c->r[3]=c->r[13]+0xFFFF9A60u; // 80104B38
  c->lr=0x80104B40u; f_800E8CE4(c); // 80104B3C
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80104B40
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80104B44
  c->lr=c->r[0]; // 80104B48
  c->r[1]=c->r[1]+0x000002E0u; // 80104B4C
  return; // 80104B50
}

// __GXPEInit
void f_80104B54(Ctx* __restrict c) {
  trace_call(0x80104B54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104B54
  c->r[0]=c->lr; // 80104B58
  c->r[4]=0u+0x80100000u; // 80104B5C
  c->r[3]=0u+0x00000012u; // 80104B60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104B64
  c->r[4]=c->r[4]+0x00004A0Cu; // 80104B68
  c->lr=0x80104B70u; f_800E4FA0(c); // 80104B6C
  c->r[4]=0u+0x80100000u; // 80104B70
  c->r[3]=0u+0x00000013u; // 80104B74
  c->r[4]=c->r[4]+0x00004AD4u; // 80104B78
  c->lr=0x80104B80u; f_800E4FA0(c); // 80104B7C
  c->r[3]=c->r[13]+0xFFFF9A60u; // 80104B80
  c->lr=0x80104B88u; f_800E7B80(c); // 80104B84
  c->r[3]=0u+0x00002000u; // 80104B88
  c->lr=0x80104B90u; f_800E5364(c); // 80104B8C
  c->r[3]=0u+0x00001000u; // 80104B90
  c->lr=0x80104B98u; f_800E5364(c); // 80104B94
  c->r[3]=R32(c->r[13]+0xFFFF9A20u); // 80104B98
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80104B9C
  c->r[0]=c->r[0]|0x0000000Fu; // 80104BA0
  W16(c->r[3]+0x0000000Au,c->r[0]); // 80104BA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104BA8
  c->lr=c->r[0]; // 80104BAC
  c->r[1]=c->r[1]+0x00000010u; // 80104BB0
  return; // 80104BB4
}

// __GXSetDirtyState
void f_80104BB8(Ctx* __restrict c) {
  trace_call(0x80104BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104BB8
  c->r[0]=c->lr; // 80104BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104BC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104BC4
  c->r[31]=R32(c->r[2]+0xFFFF8C88u); // 80104BC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104BCC
  c->r[30]=R32(c->r[31]+0x000005FCu); // 80104BD0
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80104BD4
  if (crb(c,2)) { goto L_80104BE0; } // 80104BD8
  c->lr=0x80104BE0u; f_80106F18(c); // 80104BDC
L_80104BE0:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 80104BE0
  if (crb(c,2)) { goto L_80104BEC; } // 80104BE4
  c->lr=0x80104BECu; f_801077C8(c); // 80104BE8
L_80104BEC:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 80104BEC
  if (crb(c,2)) { goto L_80104C14; } // 80104BF0
  c->r[4]=0u+0xCC010000u; // 80104BF4
  c->r[0]=0u+0x00000061u; // 80104BF8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80104BFC
  c->r[0]=0u+0x00000000u; // 80104C00
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80104C04
  c->r[3]=R32(c->r[5]+0x00000254u); // 80104C08
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80104C0C
  W16(c->r[5]+0x00000002u,c->r[0]); // 80104C10
L_80104C14:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 80104C14
  if (crb(c,2)) { goto L_80104C20; } // 80104C18
  c->lr=0x80104C20u; f_801035A8(c); // 80104C1C
L_80104C20:;
  c->r[0]=rotl(c->r[30],0)&0x00000010u; cr0(c,c->r[0]); // 80104C20
  if (crb(c,2)) { goto L_80104C2C; } // 80104C24
  c->lr=0x80104C2Cu; f_80103CD0(c); // 80104C28
L_80104C2C:;
  c->r[0]=rotl(c->r[30],0)&0x00000018u; cr0(c,c->r[0]); // 80104C2C
  if (crb(c,2)) { goto L_80104C38; } // 80104C30
  c->lr=0x80104C38u; f_80103658(c); // 80104C34
L_80104C38:;
  c->r[30]=rotl(c->r[30],0)&0xFFFFFF00u; cr0(c,c->r[30]); // 80104C38
  if (crb(c,2)) { goto L_80104E10; } // 80104C3C
  c->r[4]=rotl(c->r[30],0)&0x00000F00u; cr0(c,c->r[4]); // 80104C40
  if (crb(c,2)) { goto L_80104CD8; } // 80104C44
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 80104C48
  if (crb(c,2)) { goto L_80104C6C; } // 80104C4C
  c->r[3]=0u+0xCC010000u; // 80104C50
  c->r[0]=0u+0x00000010u; // 80104C54
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80104C58
  c->r[0]=0u+0x0000100Au; // 80104C5C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104C60
  c->r[0]=R32(c->r[31]+0x000000A8u); // 80104C64
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104C68
L_80104C6C:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 80104C6C
  if (crb(c,2)) { goto L_80104C90; } // 80104C70
  c->r[3]=0u+0xCC010000u; // 80104C74
  c->r[0]=0u+0x00000010u; // 80104C78
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80104C7C
  c->r[0]=0u+0x0000100Bu; // 80104C80
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104C84
  c->r[0]=R32(c->r[31]+0x000000ACu); // 80104C88
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104C8C
L_80104C90:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80104C90
  if (crb(c,2)) { goto L_80104CB4; } // 80104C94
  c->r[3]=0u+0xCC010000u; // 80104C98
  c->r[0]=0u+0x00000010u; // 80104C9C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80104CA0
  c->r[0]=0u+0x0000100Cu; // 80104CA4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104CA8
  c->r[0]=R32(c->r[31]+0x000000B0u); // 80104CAC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104CB0
L_80104CB4:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 80104CB4
  if (crb(c,2)) { goto L_80104CD8; } // 80104CB8
  c->r[3]=0u+0xCC010000u; // 80104CBC
  c->r[0]=0u+0x00000010u; // 80104CC0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80104CC4
  c->r[0]=0u+0x0000100Du; // 80104CC8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104CCC
  c->r[0]=R32(c->r[31]+0x000000B4u); // 80104CD0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104CD4
L_80104CD8:;
  c->r[7]=rotl(c->r[30],0)&0x01000000u; // 80104CD8
  c->r[7]=(rotl(c->r[30],0)&0x0000F000u)|(c->r[7]&~0x0000F000u); cr0(c,c->r[7]); // 80104CDC
  if (crb(c,2)) { goto L_80104D50; } // 80104CE0
  c->r[0]=rotl(c->r[7],0)&0x01000000u; cr0(c,c->r[0]); // 80104CE4
  c->r[6]=0u+0x0000100Eu; // 80104CE8
  if (crb(c,2)) { goto L_80104D10; } // 80104CEC
  c->r[5]=R32(c->r[31]+0x00000254u); // 80104CF0
  c->r[3]=0u+0xCC010000u; // 80104CF4
  c->r[4]=0u+0x00000010u; // 80104CF8
  c->r[0]=0u+0x00001009u; // 80104CFC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80104D00
  c->r[4]=rotl(c->r[5],28)&0x00000007u; // 80104D04
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104D08
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104D0C
L_80104D10:;
  c->r[5]=c->r[31]|c->r[31]; // 80104D10
  c->r[7]=rotl(c->r[7],20)&0x0000000Fu; // 80104D14
  c->r[4]=0u+0x00000010u; // 80104D18
  c->r[3]=0u+0xCC010000u; // 80104D1C
  goto L_80104D48; // 80104D20
L_80104D24:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 80104D24
  if (crb(c,2)) { goto L_80104D3C; } // 80104D28
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80104D2C
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80104D30
  c->r[0]=R32(c->r[5]+0x000000B8u); // 80104D34
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104D38
L_80104D3C:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 80104D3C
  c->r[5]=c->r[5]+0x00000004u; // 80104D40
  c->r[6]=c->r[6]+0x00000001u; // 80104D44
L_80104D48:;
  cmps(c,0,(int32_t)c->r[7],0); // 80104D48
  if (!crb(c,2)) { IRQCHK(c); goto L_80104D24; } // 80104D4C
L_80104D50:;
  c->r[8]=c->r[30]&0x02FF0000u; cr0(c,c->r[8]); // 80104D50
  if (crb(c,2)) { goto L_80104DD8; } // 80104D54
  c->r[0]=rotl(c->r[8],0)&0x02000000u; cr0(c,c->r[0]); // 80104D58
  c->r[6]=0u+0x00001040u; // 80104D5C
  if (crb(c,2)) { goto L_80104D84; } // 80104D60
  c->r[5]=R32(c->r[31]+0x00000254u); // 80104D64
  c->r[3]=0u+0xCC010000u; // 80104D68
  c->r[4]=0u+0x00000010u; // 80104D6C
  c->r[0]=0u+0x0000103Fu; // 80104D70
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80104D74
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 80104D78
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104D7C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104D80
L_80104D84:;
  c->r[7]=c->r[31]|c->r[31]; // 80104D84
  c->r[8]=rotl(c->r[8],16)&0x000000FFu; // 80104D88
  c->r[4]=0u+0x00000010u; // 80104D8C
  c->r[3]=0u+0xCC010000u; // 80104D90
  goto L_80104DD0; // 80104D94
L_80104D98:;
  c->r[0]=rotl(c->r[8],0)&0x00000001u; cr0(c,c->r[0]); // 80104D98
  c->r[5]=c->r[6]+0x00000010u; // 80104D9C
  if (crb(c,2)) { goto L_80104DC4; } // 80104DA0
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80104DA4
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80104DA8
  c->r[0]=R32(c->r[7]+0x000000C8u); // 80104DAC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104DB0
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80104DB4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80104DB8
  c->r[0]=R32(c->r[7]+0x000000E8u); // 80104DBC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80104DC0
L_80104DC4:;
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 80104DC4
  c->r[6]=c->r[6]+0x00000001u; // 80104DC8
  c->r[7]=c->r[7]+0x00000004u; // 80104DCC
L_80104DD0:;
  cmps(c,0,(int32_t)c->r[8],0); // 80104DD0
  if (!crb(c,2)) { IRQCHK(c); goto L_80104D98; } // 80104DD4
L_80104DD8:;
  c->r[0]=rotl(c->r[30],0)&0x04000000u; cr0(c,c->r[0]); // 80104DD8
  if (crb(c,2)) { goto L_80104DF0; } // 80104DDC
  c->r[3]=0u+0x00000000u; // 80104DE0
  c->lr=0x80104DE8u; f_80108CD4(c); // 80104DE4
  c->r[3]=0u+0x00000005u; // 80104DE8
  c->lr=0x80104DF0u; f_80108CD4(c); // 80104DEC
L_80104DF0:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 80104DF0
  if (crb(c,2)) { goto L_80104DFC; } // 80104DF4
  c->lr=0x80104DFCu; f_80108B10(c); // 80104DF8
L_80104DFC:;
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 80104DFC
  if (crb(c,2)) { goto L_80104E08; } // 80104E00
  c->lr=0x80104E08u; f_80108800(c); // 80104E04
L_80104E08:;
  c->r[0]=0u+0x00000001u; // 80104E08
  W16(c->r[31]+0x00000002u,c->r[0]); // 80104E0C
L_80104E10:;
  c->r[0]=0u+0x00000000u; // 80104E10
  W32(c->r[31]+0x000005FCu,c->r[0]); // 80104E14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104E18
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104E1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104E20
  c->lr=c->r[0]; // 80104E24
  c->r[1]=c->r[1]+0x00000010u; // 80104E28
  return; // 80104E2C
}

// GXBegin
void f_80104E30(Ctx* __restrict c) {
  trace_call(0x80104E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104E30
  c->r[0]=c->lr; // 80104E34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104E38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80104E3C
  c->r[31]=R32(c->r[2]+0xFFFF8C88u); // 80104E40
  W32(c->r[1]+0x00000018u,c->r[30]); // 80104E44
  c->r[30]=c->r[5]|c->r[5]; // 80104E48
  W32(c->r[1]+0x00000014u,c->r[29]); // 80104E4C
  c->r[29]=c->r[4]|c->r[4]; // 80104E50
  W32(c->r[1]+0x00000010u,c->r[28]); // 80104E54
  c->r[28]=c->r[3]|c->r[3]; // 80104E58
  c->r[0]=R32(c->r[31]+0x000005FCu); // 80104E5C
  cmps(c,0,(int32_t)c->r[0],0); // 80104E60
  if (crb(c,2)) { goto L_80104E6C; } // 80104E64
  c->lr=0x80104E6Cu; f_80104BB8(c); // 80104E68
L_80104E6C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80104E6C
  cmps(c,0,(int32_t)c->r[0],0); // 80104E70
  if (!crb(c,2)) { goto L_80104F4C; } // 80104E74
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 80104E78
  c->r[3]=0u+0xCC010000u; // 80104E7C
  c->r[0]=0u+0x00000098u; // 80104E80
  c->r[6]=0u+0x00000000u; // 80104E84
  c->r[5]=R16(c->r[7]+0x00000004u); // 80104E88
  c->r[4]=R16(c->r[7]+0x00000006u); // 80104E8C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80104E90
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[5]); // 80104E94
  c->r[0]=R16(c->r[7]+0x00000004u); // 80104E98
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80104E9C
  if (crb(c,2)) { goto L_80104F44; } // 80104EA0
  c->r[3]=c->r[5]+0x00000003u; // 80104EA4
  c->r[7]=c->r[5]+0xFFFFFFE0u; // 80104EA8
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 80104EAC
  cmpu(c,0,c->r[0],0x00000008u); // 80104EB0
  if (!crb(c,1)) { goto L_80104F1C; } // 80104EB4
  cmpu(c,0,c->r[3],0x00000003u); // 80104EB8
  c->r[0]=0u+0x00000000u; // 80104EBC
  if (crb(c,0)) { goto L_80104ED0; } // 80104EC0
  cmpu(c,0,c->r[5],c->r[3]); // 80104EC4
  if (crb(c,1)) { goto L_80104ED0; } // 80104EC8
  c->r[0]=0u+0x00000001u; // 80104ECC
L_80104ED0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80104ED0
  if (crb(c,2)) { goto L_80104F1C; } // 80104ED4
  c->r[0]=c->r[7]+0x0000001Fu; // 80104ED8
  c->r[4]=0u+0x00000000u; // 80104EDC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80104EE0
  c->r[3]=0u+0xCC010000u; // 80104EE4
  c->ctr=c->r[0]; // 80104EE8
  cmpu(c,0,c->r[7],0x00000000u); // 80104EEC
  if (!crb(c,1)) { goto L_80104F1C; } // 80104EF0
L_80104EF4:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104EF4
  c->r[6]=c->r[6]+0x00000020u; // 80104EF8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104EFC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104F00
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104F04
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104F08
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104F0C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104F10
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104F14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104EF4; } // 80104F18
L_80104F1C:;
  c->r[0]=c->r[5]+0x00000003u; // 80104F1C
  c->r[4]=0u+0x00000000u; // 80104F20
  c->r[0]=c->r[0]-c->r[6]; // 80104F24
  c->r[3]=0u+0xCC010000u; // 80104F28
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80104F2C
  c->ctr=c->r[0]; // 80104F30
  cmpu(c,0,c->r[6],c->r[5]); // 80104F34
  if (!crb(c,0)) { goto L_80104F44; } // 80104F38
L_80104F3C:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104F3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104F3C; } // 80104F40
L_80104F44:;
  c->r[0]=0u+0x00000001u; // 80104F44
  W16(c->r[31]+0x00000002u,c->r[0]); // 80104F48
L_80104F4C:;
  c->r[3]=0u+0xCC010000u; // 80104F4C
  c->r[0]=c->r[29]|c->r[28]; // 80104F50
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80104F54
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 80104F58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104F5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80104F60
  c->r[30]=R32(c->r[1]+0x00000018u); // 80104F64
  c->r[29]=R32(c->r[1]+0x00000014u); // 80104F68
  c->r[28]=R32(c->r[1]+0x00000010u); // 80104F6C
  c->lr=c->r[0]; // 80104F70
  c->r[1]=c->r[1]+0x00000020u; // 80104F74
  return; // 80104F78
}

// __GXSendFlushPrim
void f_80104F7C(Ctx* __restrict c) {
  trace_call(0x80104F7Cu);
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80104F7C
  c->r[3]=0u+0xCC010000u; // 80104F80
  c->r[0]=0u+0x00000098u; // 80104F84
  c->r[7]=0u+0x00000000u; // 80104F88
  c->r[5]=R16(c->r[6]+0x00000004u); // 80104F8C
  c->r[4]=R16(c->r[6]+0x00000006u); // 80104F90
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80104F94
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[8]); // 80104F98
  c->r[0]=R16(c->r[6]+0x00000004u); // 80104F9C
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 80104FA0
  if (crb(c,2)) { goto L_80105048; } // 80104FA4
  c->r[3]=c->r[8]+0x00000003u; // 80104FA8
  c->r[5]=c->r[8]+0xFFFFFFE0u; // 80104FAC
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 80104FB0
  cmpu(c,0,c->r[0],0x00000008u); // 80104FB4
  if (!crb(c,1)) { goto L_80105020; } // 80104FB8
  cmpu(c,0,c->r[3],0x00000003u); // 80104FBC
  c->r[0]=0u+0x00000000u; // 80104FC0
  if (crb(c,0)) { goto L_80104FD4; } // 80104FC4
  cmpu(c,0,c->r[8],c->r[3]); // 80104FC8
  if (crb(c,1)) { goto L_80104FD4; } // 80104FCC
  c->r[0]=0u+0x00000001u; // 80104FD0
L_80104FD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 80104FD4
  if (crb(c,2)) { goto L_80105020; } // 80104FD8
  c->r[0]=c->r[5]+0x0000001Fu; // 80104FDC
  c->r[4]=0u+0x00000000u; // 80104FE0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80104FE4
  c->r[3]=0u+0xCC010000u; // 80104FE8
  c->ctr=c->r[0]; // 80104FEC
  cmpu(c,0,c->r[5],0x00000000u); // 80104FF0
  if (!crb(c,1)) { goto L_80105020; } // 80104FF4
L_80104FF8:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80104FF8
  c->r[7]=c->r[7]+0x00000020u; // 80104FFC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80105000
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80105004
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80105008
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 8010500C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80105010
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80105014
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80105018
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104FF8; } // 8010501C
L_80105020:;
  c->r[0]=c->r[8]+0x00000003u; // 80105020
  c->r[4]=0u+0x00000000u; // 80105024
  c->r[0]=c->r[0]-c->r[7]; // 80105028
  c->r[3]=0u+0xCC010000u; // 8010502C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80105030
  c->ctr=c->r[0]; // 80105034
  cmpu(c,0,c->r[7],c->r[8]); // 80105038
  if (!crb(c,0)) { goto L_80105048; } // 8010503C
L_80105040:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80105040
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80105040; } // 80105044
L_80105048:;
  c->r[0]=0u+0x00000001u; // 80105048
  W16(c->r[6]+0x00000002u,c->r[0]); // 8010504C
  return; // 80105050
}

// GXSetLineWidth
void f_80105054(Ctx* __restrict c) {
  trace_call(0x80105054u);
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 80105054
  c->r[5]=0u+0xCC010000u; // 80105058
  c->r[6]=0u+0x00000061u; // 8010505C
  c->r[0]=0u+0x00000000u; // 80105060
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 80105064
  c->r[7]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 80105068
  c->r[7]=(rotl(c->r[4],16)&0x00070000u)|(c->r[7]&~0x00070000u); // 8010506C
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 80105070
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80105074
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 80105078
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 8010507C
  W16(c->r[8]+0x00000002u,c->r[0]); // 80105080
  return; // 80105084
}

// GXSetPointSize
void f_80105088(Ctx* __restrict c) {
  trace_call(0x80105088u);
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 80105088
  c->r[5]=0u+0xCC010000u; // 8010508C
  c->r[6]=0u+0x00000061u; // 80105090
  c->r[0]=0u+0x00000000u; // 80105094
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 80105098
  c->r[7]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 8010509C
  c->r[7]=(rotl(c->r[4],19)&0x00380000u)|(c->r[7]&~0x00380000u); // 801050A0
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 801050A4
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801050A8
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 801050AC
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 801050B0
  W16(c->r[8]+0x00000002u,c->r[0]); // 801050B4
  return; // 801050B8
}

// GXEnableTexOffsets
void f_801050BC(Ctx* __restrict c) {
  trace_call(0x801050BCu);
  c->r[9]=R32(c->r[2]+0xFFFF8C88u); // 801050BC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801050C0
  c->r[6]=0u+0xCC010000u; // 801050C4
  c->r[3]=0u+0x00000061u; // 801050C8
  c->r[8]=c->r[9]+c->r[0]; // 801050CC
  c->r[0]=0u+0x00000000u; // 801050D0
  c->r[7]=R32(c->r[8]+0x00000108u); // 801050D4
  c->r[7]=(rotl(c->r[4],18)&0x00040000u)|(c->r[7]&~0x00040000u); // 801050D8
  c->r[7]=(rotl(c->r[5],19)&0x00080000u)|(c->r[7]&~0x00080000u); // 801050DC
  W32(c->r[8]+0x00000108u,c->r[7]); // 801050E0
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 801050E4
  c->r[3]=R32(c->r[8]+0x00000108u); // 801050E8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801050EC
  W16(c->r[9]+0x00000002u,c->r[0]); // 801050F0
  return; // 801050F4
}

// GXSetCullMode
void f_801050F8(Ctx* __restrict c) {
  trace_call(0x801050F8u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 801050F8
  c->r[5]=rotl(c->r[3],31)&0x00000001u; // 801050FC
  c->r[5]=(rotl(c->r[3],1)&0x00000002u)|(c->r[5]&~0x00000002u); // 80105100
  c->r[0]=R32(c->r[4]+0x00000254u); // 80105104
  c->r[0]=(rotl(c->r[5],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 80105108
  W32(c->r[4]+0x00000254u,c->r[0]); // 8010510C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80105110
  c->r[0]=c->r[0]|0x00000004u; // 80105114
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80105118
  return; // 8010511C
}

// GXSetCoPlanar
void f_80105120(Ctx* __restrict c) {
  trace_call(0x80105120u);
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 80105120
  c->r[4]=0u+0xCC010000u; // 80105124
  c->r[5]=0u+0x00000061u; // 80105128
  c->r[0]=0u+0xFE080000u; // 8010512C
  c->r[6]=R32(c->r[7]+0x00000254u); // 80105130
  c->r[6]=(rotl(c->r[3],19)&0x00080000u)|(c->r[6]&~0x00080000u); // 80105134
  W32(c->r[7]+0x00000254u,c->r[6]); // 80105138
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8010513C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80105140
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80105144
  c->r[0]=R32(c->r[7]+0x00000254u); // 80105148
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8010514C
  return; // 80105150
}

// __GXSetGenMode
void f_80105154(Ctx* __restrict c) {
  trace_call(0x80105154u);
  c->r[4]=0u+0xCC010000u; // 80105154
  c->r[0]=0u+0x00000061u; // 80105158
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8010515C
  c->r[0]=0u+0x00000000u; // 80105160
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80105164
  c->r[3]=R32(c->r[5]+0x00000254u); // 80105168
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 8010516C
  W16(c->r[5]+0x00000002u,c->r[0]); // 80105170
  return; // 80105174
}

// fn_80105178
void f_80105178(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],c->r[4]); // 80105178
  c->r[0]=rotl(c->r[5],1)&0x0000FFFEu; // 8010517C
  c->r[7]=rotl(c->r[6],1)&0x0000FFFEu; // 80105180
  if (crb(c,2)) { goto L_80105200; } // 80105184
  c->r[9]=R32(c->r[3]+0x00000000u); // 80105188
  c->r[8]=R32(c->r[3]+0x00000004u); // 8010518C
  W32(c->r[4]+0x00000000u,c->r[9]); // 80105190
  W32(c->r[4]+0x00000004u,c->r[8]); // 80105194
  c->r[9]=R32(c->r[3]+0x00000008u); // 80105198
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 8010519C
  W32(c->r[4]+0x00000008u,c->r[9]); // 801051A0
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 801051A4
  c->r[9]=R32(c->r[3]+0x00000010u); // 801051A8
  c->r[8]=R32(c->r[3]+0x00000014u); // 801051AC
  W32(c->r[4]+0x00000010u,c->r[9]); // 801051B0
  W32(c->r[4]+0x00000014u,c->r[8]); // 801051B4
  c->r[9]=R32(c->r[3]+0x00000018u); // 801051B8
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 801051BC
  W32(c->r[4]+0x00000018u,c->r[9]); // 801051C0
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 801051C4
  c->r[9]=R32(c->r[3]+0x00000020u); // 801051C8
  c->r[8]=R32(c->r[3]+0x00000024u); // 801051CC
  W32(c->r[4]+0x00000020u,c->r[9]); // 801051D0
  W32(c->r[4]+0x00000024u,c->r[8]); // 801051D4
  c->r[9]=R32(c->r[3]+0x00000028u); // 801051D8
  c->r[8]=R32(c->r[3]+0x0000002Cu); // 801051DC
  W32(c->r[4]+0x00000028u,c->r[9]); // 801051E0
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 801051E4
  c->r[9]=R32(c->r[3]+0x00000030u); // 801051E8
  c->r[8]=R32(c->r[3]+0x00000034u); // 801051EC
  W32(c->r[4]+0x00000030u,c->r[9]); // 801051F0
  W32(c->r[4]+0x00000034u,c->r[8]); // 801051F4
  c->r[8]=R32(c->r[3]+0x00000038u); // 801051F8
  W32(c->r[4]+0x00000038u,c->r[8]); // 801051FC
L_80105200:;
  c->r[8]=R16(c->r[3]+0x00000004u); // 80105200
  c->r[9]=R32(c->r[3]+0x00000000u); // 80105204
  c->r[8]=c->r[8]-c->r[0]; // 80105208
  W16(c->r[4]+0x00000004u,c->r[8]); // 8010520C
  c->r[11]=rotl(c->r[9],0)&0x00000003u; // 80105210
  c->r[10]=R16(c->r[3]+0x00000006u); // 80105214
  c->r[8]=R16(c->r[3]+0x00000008u); // 80105218
  c->r[9]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[10]); // 8010521C
  c->r[8]=divwu(c->r[9],c->r[8]); // 80105220
  c->r[8]=c->r[10]-c->r[8]; // 80105224
  W16(c->r[4]+0x00000006u,c->r[8]); // 80105228
  c->r[8]=R32(c->r[3]+0x00000014u); // 8010522C
  cmps(c,0,(int32_t)c->r[8],0); // 80105230
  if (!crb(c,2)) { goto L_80105254; } // 80105234
  cmps(c,0,(int32_t)c->r[11],0); // 80105238
  if (!crb(c,2)) { goto L_80105254; } // 8010523C
  c->r[8]=R16(c->r[3]+0x00000008u); // 80105240
  c->r[9]=rotl(c->r[7],31)&0x00007FFFu; // 80105244
  c->r[8]=c->r[8]-c->r[9]; // 80105248
  W16(c->r[4]+0x00000008u,c->r[8]); // 8010524C
  goto L_80105260; // 80105250
L_80105254:;
  c->r[8]=R16(c->r[3]+0x00000008u); // 80105254
  c->r[8]=c->r[8]-c->r[7]; // 80105258
  W16(c->r[4]+0x00000008u,c->r[8]); // 8010525C
L_80105260:;
  c->r[8]=R16(c->r[3]+0x0000000Eu); // 80105260
  cmpu(c,0,c->r[11],0x00000001u); // 80105264
  c->r[0]=c->r[8]-c->r[0]; // 80105268
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 8010526C
  if (!crb(c,2)) { goto L_80105288; } // 80105270
  c->r[0]=R16(c->r[3]+0x00000010u); // 80105274
  c->r[7]=rotl(c->r[7],1)&0x0001FFFEu; // 80105278
  c->r[0]=c->r[0]-c->r[7]; // 8010527C
  W16(c->r[4]+0x00000010u,c->r[0]); // 80105280
  goto L_80105294; // 80105284
L_80105288:;
  c->r[0]=R16(c->r[3]+0x00000010u); // 80105288
  c->r[0]=c->r[0]-c->r[7]; // 8010528C
  W16(c->r[4]+0x00000010u,c->r[0]); // 80105290
L_80105294:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 80105294
  c->r[0]=c->r[0]+c->r[5]; // 80105298
  W16(c->r[4]+0x0000000Au,c->r[0]); // 8010529C
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 801052A0
  c->r[0]=c->r[0]+c->r[6]; // 801052A4
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801052A8
  return; // 801052AC
}

// GXSetDispCopySrc
void f_801052B0(Ctx* __restrict c) {
  trace_call(0x801052B0u);
  c->r[7]=0u+0x00000000u; // 801052B0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801052B4
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 801052B8
  c->r[3]=0u+0x00000000u; // 801052BC
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 801052C0
  c->r[4]=0u+0x00000049u; // 801052C4
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801052C8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801052CC
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 801052D0
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 801052D4
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801052D8
  c->r[0]=0u+0x0000004Au; // 801052DC
  W32(c->r[5]+0x00000230u,c->r[7]); // 801052E0
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801052E4
  W32(c->r[5]+0x00000234u,c->r[3]); // 801052E8
  return; // 801052EC
}

// fn_801052F0
void f_801052F0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 801052F0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801052F4
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 801052F8
  c->r[3]=0u+0x00000000u; // 801052FC
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 80105300
  c->r[4]=0u+0x00000049u; // 80105304
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 80105308
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 8010530C
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 80105310
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80105314
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80105318
  c->r[0]=0u+0x0000004Au; // 8010531C
  W32(c->r[5]+0x00000240u,c->r[7]); // 80105320
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80105324
  W32(c->r[5]+0x00000244u,c->r[3]); // 80105328
  return; // 8010532C
}

// GXSetDispCopyDst
void f_80105330(Ctx* __restrict c) {
  trace_call(0x80105330u);
  c->r[0]=rotl(c->r[3],1)&0x0000FFFEu; // 80105330
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80105334
  c->r[0]=sraw(c,c->r[0],5); // 80105338
  c->r[3]=0u+0x00000000u; // 8010533C
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 80105340
  c->r[0]=0u+0x0000004Du; // 80105344
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80105348
  W32(c->r[4]+0x00000238u,c->r[3]); // 8010534C
  return; // 80105350
}

// GXSetTexCopyDst
void f_80105354(Ctx* __restrict c) {
  trace_call(0x80105354u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105354
  c->r[0]=c->lr; // 80105358
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 8010535C
  cmps(c,0,(int32_t)c->r[5],19); // 80105360
  W32(c->r[1]+0x00000034u,c->r[0]); // 80105364
  c->r[0]=0u+0x00000000u; // 80105368
  c->r[9]=c->r[3]|c->r[3]; // 8010536C
  c->r[8]=c->r[4]|c->r[4]; // 80105370
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80105374
  c->r[31]=rotl(c->r[5],0)&0x0000000Fu; // 80105378
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010537C
  c->r[30]=c->r[6]|c->r[6]; // 80105380
  W32(c->r[1]+0x00000024u,c->r[29]); // 80105384
  W32(c->r[1]+0x00000020u,c->r[28]); // 80105388
  W8(c->r[7]+0x00000250u,c->r[0]); // 8010538C
  if (!crb(c,2)) { goto L_80105398; } // 80105390
  c->r[31]=0u+0x0000000Bu; // 80105394
L_80105398:;
  cmps(c,0,(int32_t)c->r[5],38); // 80105398
  if (crb(c,2)) { goto L_801053B8; } // 8010539C
  if (!crb(c,0)) { goto L_801053D0; } // 801053A0
  cmps(c,0,(int32_t)c->r[5],4); // 801053A4
  if (!crb(c,0)) { goto L_801053D0; } // 801053A8
  cmps(c,0,(int32_t)c->r[5],0); // 801053AC
  if (!crb(c,0)) { goto L_801053B8; } // 801053B0
  goto L_801053D0; // 801053B4
L_801053B8:;
  c->r[0]=0u+0x00000003u; // 801053B8
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 801053BC
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 801053C0
  c->r[29]=c->r[7]+0x0000024Cu; // 801053C4
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 801053C8
  goto L_801053E4; // 801053CC
L_801053D0:;
  c->r[0]=0u+0x00000002u; // 801053D0
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 801053D4
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 801053D8
  c->r[29]=c->r[7]+0x0000024Cu; // 801053DC
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 801053E0
L_801053E4:;
  c->r[0]=rotl(c->r[5],28)&0x00000001u; // 801053E4
  c->r[3]=c->r[5]|c->r[5]; // 801053E8
  W8(c->r[7]+0x00000250u,c->r[0]); // 801053EC
  c->r[5]=c->r[8]|c->r[8]; // 801053F0
  c->r[28]=R32(c->r[2]+0xFFFF8C88u); // 801053F4
  c->r[4]=c->r[9]|c->r[9]; // 801053F8
  c->r[0]=R32(c->r[29]+0x00000000u); // 801053FC
  c->r[0]=(rotl(c->r[31],0)&0x00000008u)|(c->r[0]&~0x00000008u); // 80105400
  c->r[6]=c->r[1]+0x00000010u; // 80105404
  c->r[7]=c->r[1]+0x0000000Cu; // 80105408
  W32(c->r[29]+0x00000000u,c->r[0]); // 8010540C
  c->r[8]=c->r[1]+0x00000008u; // 80105410
  c->lr=0x80105418u; f_80106524(c); // 80105414
  c->r[0]=0u+0x00000000u; // 80105418
  c->r[3]=0u+0x00000000u; // 8010541C
  W32(c->r[28]+0x00000248u,c->r[0]); // 80105420
  c->r[0]=0u+0x0000004Du; // 80105424
  c->r[5]=R32(c->r[1]+0x00000010u); // 80105428
  c->r[4]=R32(c->r[1]+0x00000008u); // 8010542C
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 80105430
  c->r[3]=(rotl(c->r[4],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 80105434
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80105438
  W32(c->r[28]+0x00000248u,c->r[3]); // 8010543C
  c->r[0]=R32(c->r[29]+0x00000000u); // 80105440
  c->r[0]=(rotl(c->r[30],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 80105444
  c->r[0]=(rotl(c->r[31],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 80105448
  W32(c->r[29]+0x00000000u,c->r[0]); // 8010544C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80105450
  c->r[30]=R32(c->r[1]+0x00000028u); // 80105454
  c->r[29]=R32(c->r[1]+0x00000024u); // 80105458
  c->r[28]=R32(c->r[1]+0x00000020u); // 8010545C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80105460
  c->lr=c->r[0]; // 80105464
  c->r[1]=c->r[1]+0x00000030u; // 80105468
  return; // 8010546C
}

// GXSetDispCopyFrame2Field
void f_80105470(Ctx* __restrict c) {
  trace_call(0x80105470u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80105470
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 80105474
  c->r[0]=(rotl(c->r[3],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 80105478
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 8010547C
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 80105480
  c->r[0]=rotl(c->r[0],0)&0xFFFFCFFFu; // 80105484
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 80105488
  return; // 8010548C
}

// GXSetCopyClamp
void f_80105490(Ctx* __restrict c) {
  trace_call(0x80105490u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80105490
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 80105494
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 80105498
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 8010549C
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 801054A0
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 801054A4
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801054A8
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 801054AC
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 801054B0
  return; // 801054B4
}

// GXGetYScaleFactor
void f_801054B8(Ctx* __restrict c) {
  trace_call(0x801054B8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801054B8
  c->r[0]=c->lr; // 801054BC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801054C0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801054C4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801054C8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801054CC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801054D0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801054D4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801054D8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 801054DC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 801054E0
  c->r[0]=0u+0x43300000u; // 801054E4
  {uint32_t ea=c->r[2]+0xFFFF8CB8u; c->f[3]=RF64(ea);} // 801054E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801054EC
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801054F0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801054F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801054F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801054FC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 80105500
  W32(c->r[1]+0x00000014u,c->r[3]); // 80105504
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80105508
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010550C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80105510
  W32(c->r[1]+0x00000028u,c->r[30]); // 80105514
  c->f[28]=c->ps1[28]=S(c->f[2]/c->f[1]); // 80105518
  W32(c->r[1]+0x00000024u,c->r[29]); // 8010551C
  c->r[29]=c->r[4]|c->r[4]; // 80105520
  W32(c->r[1]+0x00000020u,c->r[28]); // 80105524
  c->r[28]=c->r[3]|c->r[3]; // 80105528
  c->r[30]=c->r[29]|c->r[29]; // 8010552C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[28]); // 80105530
  c->lr=0x80105538u; f_80109E10(c); // 80105534
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 80105538
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 8010553C
  c->r[31]=rotl(c->r[0],8)&0xFFFFFF00u; // 80105540
  c->r[3]=divwu(c->r[31],c->r[4]); // 80105544
  cmpu(c,0,c->r[4],0x00000080u); // 80105548
  c->r[3]=c->r[3]+0x00000001u; // 8010554C
  if (!crb(c,1)) { goto L_80105580; } // 80105550
  cmpu(c,0,c->r[4],0x00000100u); // 80105554
  if (!crb(c,0)) { goto L_80105580; } // 80105558
  goto L_80105564; // 8010555C
L_80105560:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80105560
L_80105564:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80105564
  if (crb(c,2)) { IRQCHK(c); goto L_80105560; } // 80105568
  c->r[0]=divwu(c->r[28],c->r[4]); // 8010556C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80105570
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 80105574
  if (!crb(c,2)) { goto L_80105580; } // 80105578
  c->r[3]=c->r[3]+0x00000001u; // 8010557C
L_80105580:;
  cmpu(c,0,c->r[3],0x00000400u); // 80105580
  if (!crb(c,1)) { goto L_8010558C; } // 80105584
  c->r[3]=0u+0x00000400u; // 80105588
L_8010558C:;
  {uint32_t ea=c->r[2]+0xFFFF8CB8u; c->f[31]=RF64(ea);} // 8010558C
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[30]=c->ps1[30]=RF32(ea);} // 80105590
  goto L_8010560C; // 80105594
L_80105598:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80105598
  W32(c->r[1]+0x00000014u,c->r[28]); // 8010559C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801055A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801055A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801055A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801055AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801055B0
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 801055B4
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[28]); // 801055B8
  c->lr=0x801055C0u; f_80109E10(c); // 801055BC
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 801055C0
  c->r[3]=divwu(c->r[31],c->r[4]); // 801055C4
  cmpu(c,0,c->r[4],0x00000080u); // 801055C8
  c->r[3]=c->r[3]+0x00000001u; // 801055CC
  if (!crb(c,1)) { goto L_80105600; } // 801055D0
  cmpu(c,0,c->r[4],0x00000100u); // 801055D4
  if (!crb(c,0)) { goto L_80105600; } // 801055D8
  goto L_801055E4; // 801055DC
L_801055E0:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801055E0
L_801055E4:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801055E4
  if (crb(c,2)) { IRQCHK(c); goto L_801055E0; } // 801055E8
  c->r[0]=divwu(c->r[28],c->r[4]); // 801055EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801055F0
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 801055F4
  if (!crb(c,2)) { goto L_80105600; } // 801055F8
  c->r[3]=c->r[3]+0x00000001u; // 801055FC
L_80105600:;
  cmpu(c,0,c->r[3],0x00000400u); // 80105600
  if (!crb(c,1)) { goto L_8010560C; } // 80105604
  c->r[3]=0u+0x00000400u; // 80105608
L_8010560C:;
  cmpu(c,0,c->r[3],c->r[29]); // 8010560C
  if (crb(c,1)) { IRQCHK(c); goto L_80105598; } // 80105610
  c->f[29]=c->f[28]; // 80105614
  {uint32_t ea=c->r[2]+0xFFFF8CB8u; c->f[30]=RF64(ea);} // 80105618
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8010561C
  goto L_8010569C; // 80105620
L_80105624:;
  c->r[30]=c->r[30]+0x00000001u; // 80105624
  W32(c->r[1]+0x00000014u,c->r[28]); // 80105628
  c->f[29]=c->f[28]; // 8010562C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80105630
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80105634
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80105638
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8010563C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 80105640
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 80105644
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[28]); // 80105648
  c->lr=0x80105650u; f_80109E10(c); // 8010564C
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 80105650
  c->r[3]=divwu(c->r[31],c->r[4]); // 80105654
  cmpu(c,0,c->r[4],0x00000080u); // 80105658
  c->r[3]=c->r[3]+0x00000001u; // 8010565C
  if (!crb(c,1)) { goto L_80105690; } // 80105660
  cmpu(c,0,c->r[4],0x00000100u); // 80105664
  if (!crb(c,0)) { goto L_80105690; } // 80105668
  goto L_80105674; // 8010566C
L_80105670:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80105670
L_80105674:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80105674
  if (crb(c,2)) { IRQCHK(c); goto L_80105670; } // 80105678
  c->r[0]=divwu(c->r[28],c->r[4]); // 8010567C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80105680
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 80105684
  if (!crb(c,2)) { goto L_80105690; } // 80105688
  c->r[3]=c->r[3]+0x00000001u; // 8010568C
L_80105690:;
  cmpu(c,0,c->r[3],0x00000400u); // 80105690
  if (!crb(c,1)) { goto L_8010569C; } // 80105694
  c->r[3]=0u+0x00000400u; // 80105698
L_8010569C:;
  cmpu(c,0,c->r[3],c->r[29]); // 8010569C
  if (crb(c,0)) { IRQCHK(c); goto L_80105624; } // 801056A0
  c->f[1]=c->f[29]; // 801056A4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801056A8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801056AC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801056B0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801056B4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801056B8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801056BC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801056C0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801056C4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801056C8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801056CC
  c->r[29]=R32(c->r[1]+0x00000024u); // 801056D0
  c->r[28]=R32(c->r[1]+0x00000020u); // 801056D4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801056D8
  c->lr=c->r[0]; // 801056DC
  c->r[1]=c->r[1]+0x00000070u; // 801056E0
  return; // 801056E4
}

// GXSetDispCopyYScale
void f_801056E8(Ctx* __restrict c) {
  trace_call(0x801056E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801056E8
  c->r[0]=c->lr; // 801056EC
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801056F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801056F4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 801056F8
  c->lr=0x80105700u; f_80109E10(c); // 801056FC
  c->r[4]=0u+0xCC010000u; // 80105700
  c->r[0]=0u+0x00000061u; // 80105704
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80105708
  c->r[0]=0u+0x0000004Eu; // 8010570C
  c->r[5]=0u+0x00000000u; // 80105710
  c->r[7]=rotl(c->r[3],0)&0x000001FFu; // 80105714
  c->r[5]=(rotl(c->r[3],0)&0x000001FFu)|(c->r[5]&~0x000001FFu); // 80105718
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 8010571C
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80105720
  c->r[0]=0u+0x00000000u; // 80105724
  W32(c->r[4]+0xFFFF8000u,c->r[5]); // 80105728
  c->r[3]=addc(c,~c->r[7],0x00000100u,1); // 8010572C
  cmpu(c,0,c->r[7],0x00000080u); // 80105730
  W16(c->r[6]+0x00000002u,c->r[0]); // 80105734
  c->r[0]=c->r[7]+0xFFFFFF00u; // 80105738
  c->r[3]=c->r[3]|c->r[0]; // 8010573C
  c->r[0]=R32(c->r[6]+0x0000023Cu); // 80105740
  c->r[0]=(rotl(c->r[3],11)&0x00000400u)|(c->r[0]&~0x00000400u); // 80105744
  W32(c->r[6]+0x0000023Cu,c->r[0]); // 80105748
  c->r[0]=R32(c->r[6]+0x00000234u); // 8010574C
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 80105750
  c->r[4]=c->r[3]+0x00000001u; // 80105754
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80105758
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8010575C
  c->r[3]=divwu(c->r[0],c->r[7]); // 80105760
  c->r[3]=c->r[3]+0x00000001u; // 80105764
  if (!crb(c,1)) { goto L_80105798; } // 80105768
  cmpu(c,0,c->r[7],0x00000100u); // 8010576C
  if (!crb(c,0)) { goto L_80105798; } // 80105770
  goto L_8010577C; // 80105774
L_80105778:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 80105778
L_8010577C:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 8010577C
  if (crb(c,2)) { IRQCHK(c); goto L_80105778; } // 80105780
  c->r[0]=divwu(c->r[4],c->r[7]); // 80105784
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 80105788
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 8010578C
  if (!crb(c,2)) { goto L_80105798; } // 80105790
  c->r[3]=c->r[3]+0x00000001u; // 80105794
L_80105798:;
  cmpu(c,0,c->r[3],0x00000400u); // 80105798
  if (!crb(c,1)) { goto L_801057A4; } // 8010579C
  c->r[3]=0u+0x00000400u; // 801057A0
L_801057A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801057A4
  c->lr=c->r[0]; // 801057A8
  c->r[1]=c->r[1]+0x00000010u; // 801057AC
  return; // 801057B0
}

// GXSetCopyClear
void f_801057B4(Ctx* __restrict c) {
  trace_call(0x801057B4u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 801057B4
  c->r[7]=0u+0xCC010000u; // 801057B8
  c->r[8]=0u+0x00000061u; // 801057BC
  c->r[0]=R8(c->r[3]+0x00000003u); // 801057C0
  c->r[10]=0u+0x00000000u; // 801057C4
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801057C8
  c->r[10]=(rotl(c->r[6],0)&0x000000FFu)|(c->r[10]&~0x000000FFu); // 801057CC
  c->r[9]=0u+0x0000004Fu; // 801057D0
  c->r[10]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[10]&~0x0000FF00u); // 801057D4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801057D8
  c->r[10]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 801057DC
  c->r[6]=0u+0x00000000u; // 801057E0
  W32(c->r[7]+0xFFFF8000u,c->r[10]); // 801057E4
  c->r[6]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801057E8
  c->r[3]=R8(c->r[3]+0x00000001u); // 801057EC
  c->r[0]=0u+0x00000050u; // 801057F0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801057F4
  c->r[5]=0u+0x00000000u; // 801057F8
  c->r[6]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 801057FC
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80105800
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80105804
  c->r[0]=0u+0x00000051u; // 80105808
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 8010580C
  c->r[5]=(rotl(c->r[4],0)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 80105810
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80105814
  c->r[0]=0u+0x00000000u; // 80105818
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 8010581C
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 80105820
  W16(c->r[3]+0x00000002u,c->r[0]); // 80105824
  return; // 80105828
}

// GXSetCopyFilter
void f_8010582C(Ctx* __restrict c) {
  trace_call(0x8010582Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 8010582C
  if (crb(c,2)) { goto L_80105928; } // 80105830
  c->r[8]=R8(c->r[4]+0x00000000u); // 80105834
  c->r[0]=0u+0x00000000u; // 80105838
  c->r[10]=R8(c->r[4]+0x00000001u); // 8010583C
  c->r[3]=0u+0x00000000u; // 80105840
  c->r[0]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 80105844
  c->r[7]=R8(c->r[4]+0x00000006u); // 80105848
  c->r[0]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8010584C
  c->r[8]=R8(c->r[4]+0x0000000Cu); // 80105850
  c->r[3]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[3]&~0x0000000Fu); // 80105854
  c->r[7]=0u+0x00000000u; // 80105858
  c->r[7]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 8010585C
  c->r[10]=R8(c->r[4]+0x0000000Du); // 80105860
  c->r[11]=R8(c->r[4]+0x00000007u); // 80105864
  c->r[8]=0u+0x00000000u; // 80105868
  c->r[7]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 8010586C
  c->r[10]=R8(c->r[4]+0x00000002u); // 80105870
  c->r[9]=R8(c->r[4]+0x00000012u); // 80105874
  c->r[3]=(rotl(c->r[11],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 80105878
  c->r[0]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[0]&~0x00000F00u); // 8010587C
  c->r[10]=R8(c->r[4]+0x0000000Eu); // 80105880
  c->r[8]=(rotl(c->r[9],0)&0x0000000Fu)|(c->r[8]&~0x0000000Fu); // 80105884
  c->r[9]=R8(c->r[4]+0x00000013u); // 80105888
  c->r[7]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 8010588C
  c->r[10]=R8(c->r[4]+0x00000003u); // 80105890
  c->r[8]=(rotl(c->r[9],4)&0x000000F0u)|(c->r[8]&~0x000000F0u); // 80105894
  c->r[9]=R8(c->r[4]+0x00000014u); // 80105898
  c->r[0]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[0]&~0x0000F000u); // 8010589C
  c->r[10]=R8(c->r[4]+0x0000000Fu); // 801058A0
  c->r[8]=(rotl(c->r[9],8)&0x00000F00u)|(c->r[8]&~0x00000F00u); // 801058A4
  c->r[9]=R8(c->r[4]+0x00000015u); // 801058A8
  c->r[7]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 801058AC
  c->r[10]=R8(c->r[4]+0x00000004u); // 801058B0
  c->r[11]=R8(c->r[4]+0x00000008u); // 801058B4
  c->r[8]=(rotl(c->r[9],12)&0x0000F000u)|(c->r[8]&~0x0000F000u); // 801058B8
  c->r[0]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[0]&~0x000F0000u); // 801058BC
  c->r[10]=R8(c->r[4]+0x00000010u); // 801058C0
  c->r[9]=R8(c->r[4]+0x00000016u); // 801058C4
  c->r[3]=(rotl(c->r[11],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 801058C8
  c->r[11]=R8(c->r[4]+0x00000009u); // 801058CC
  c->r[7]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[7]&~0x000F0000u); // 801058D0
  c->r[10]=R8(c->r[4]+0x00000005u); // 801058D4
  c->r[8]=(rotl(c->r[9],16)&0x000F0000u)|(c->r[8]&~0x000F0000u); // 801058D8
  c->r[9]=R8(c->r[4]+0x00000011u); // 801058DC
  c->r[3]=(rotl(c->r[11],12)&0x0000F000u)|(c->r[3]&~0x0000F000u); // 801058E0
  c->r[11]=R8(c->r[4]+0x0000000Au); // 801058E4
  c->r[0]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 801058E8
  c->r[10]=R8(c->r[4]+0x0000000Bu); // 801058EC
  c->r[7]=(rotl(c->r[9],20)&0x00F00000u)|(c->r[7]&~0x00F00000u); // 801058F0
  c->r[4]=R8(c->r[4]+0x00000017u); // 801058F4
  c->r[9]=0u+0x00000001u; // 801058F8
  c->r[3]=(rotl(c->r[11],16)&0x000F0000u)|(c->r[3]&~0x000F0000u); // 801058FC
  c->r[3]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 80105900
  c->r[8]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 80105904
  c->r[0]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80105908
  c->r[10]=0u+0x00000002u; // 8010590C
  c->r[9]=0u+0x00000003u; // 80105910
  c->r[4]=0u+0x00000004u; // 80105914
  c->r[3]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80105918
  c->r[7]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8010591C
  c->r[8]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80105920
  goto L_80105948; // 80105924
L_80105928:;
  c->r[8]=0u+0x01660000u; // 80105928
  c->r[3]=0u+0x02660000u; // 8010592C
  c->r[7]=0u+0x03660000u; // 80105930
  c->r[4]=0u+0x04660000u; // 80105934
  c->r[0]=c->r[8]+0x00006666u; // 80105938
  c->r[3]=c->r[3]+0x00006666u; // 8010593C
  c->r[7]=c->r[7]+0x00006666u; // 80105940
  c->r[8]=c->r[4]+0x00006666u; // 80105944
L_80105948:;
  c->r[9]=0u+0xCC010000u; // 80105948
  c->r[10]=0u+0x00000061u; // 8010594C
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 80105950
  cmps(c,0,(int32_t)c->r[5],0); // 80105954
  c->r[4]=0u+0x00000053u; // 80105958
  c->r[11]=0u+0x00000000u; // 8010595C
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 80105960
  c->r[0]=0u+0x00000054u; // 80105964
  c->r[12]=0u+0x00000000u; // 80105968
  c->r[11]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 8010596C
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 80105970
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 80105974
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 80105978
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 8010597C
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 80105980
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 80105984
  W32(c->r[9]+0xFFFF8000u,c->r[8]); // 80105988
  if (crb(c,2)) { goto L_801059CC; } // 8010598C
  c->r[4]=R8(c->r[6]+0x00000000u); // 80105990
  c->r[0]=R8(c->r[6]+0x00000004u); // 80105994
  c->r[11]=(rotl(c->r[4],0)&0x0000003Fu)|(c->r[11]&~0x0000003Fu); // 80105998
  c->r[3]=R8(c->r[6]+0x00000001u); // 8010599C
  c->r[12]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 801059A0
  c->r[5]=R8(c->r[6]+0x00000002u); // 801059A4
  c->r[11]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[11]&~0x00000FC0u); // 801059A8
  c->r[3]=R8(c->r[6]+0x00000005u); // 801059AC
  c->r[4]=R8(c->r[6]+0x00000003u); // 801059B0
  c->r[11]=(rotl(c->r[5],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 801059B4
  c->r[0]=R8(c->r[6]+0x00000006u); // 801059B8
  c->r[12]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[12]&~0x00000FC0u); // 801059BC
  c->r[11]=(rotl(c->r[4],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 801059C0
  c->r[12]=(rotl(c->r[0],12)&0x0003F000u)|(c->r[12]&~0x0003F000u); // 801059C4
  goto L_801059E8; // 801059C8
L_801059CC:;
  c->r[3]=0u+0x00000015u; // 801059CC
  c->r[11]=rotl(c->r[11],0)&0xFFFFF000u; // 801059D0
  c->r[12]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 801059D4
  c->r[0]=0u+0x00000016u; // 801059D8
  c->r[11]=(rotl(c->r[3],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 801059DC
  c->r[11]=(rotl(c->r[0],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 801059E0
  c->r[12]=rotl(c->r[12],0)&0xFFFC003Fu; // 801059E4
L_801059E8:;
  c->r[4]=0u+0xCC010000u; // 801059E8
  c->r[5]=0u+0x00000061u; // 801059EC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801059F0
  c->r[0]=0u+0x00000000u; // 801059F4
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801059F8
  W32(c->r[4]+0xFFFF8000u,c->r[11]); // 801059FC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80105A00
  W32(c->r[4]+0xFFFF8000u,c->r[12]); // 80105A04
  W16(c->r[3]+0x00000002u,c->r[0]); // 80105A08
  return; // 80105A0C
}

// GXSetDispCopyGamma
void f_80105A10(Ctx* __restrict c) {
  trace_call(0x80105A10u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80105A10
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 80105A14
  c->r[0]=(rotl(c->r[3],7)&0x00000180u)|(c->r[0]&~0x00000180u); // 80105A18
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 80105A1C
  return; // 80105A20
}

// GXCopyDisp
void f_80105A24(Ctx* __restrict c) {
  trace_call(0x80105A24u);
  cmps(c,0,(int32_t)c->r[4],0); // 80105A24
  if (crb(c,2)) { goto L_80105A58; } // 80105A28
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 80105A2C
  c->r[5]=0u+0xCC010000u; // 80105A30
  c->r[0]=0u+0x00000061u; // 80105A34
  c->r[6]=R32(c->r[7]+0x00000228u); // 80105A38
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80105A3C
  c->r[6]=c->r[6]|0x0000000Fu; // 80105A40
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80105A44
  c->r[6]=R32(c->r[7]+0x00000220u); // 80105A48
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80105A4C
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 80105A50
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80105A54
L_80105A58:;
  cmps(c,0,(int32_t)c->r[4],0); // 80105A58
  c->r[12]=0u+0x00000000u; // 80105A5C
  if (!crb(c,2)) { goto L_80105A7C; } // 80105A60
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80105A64
  c->r[0]=R32(c->r[5]+0x0000022Cu); // 80105A68
  c->r[10]=c->r[5]+0x0000022Cu; // 80105A6C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 80105A70
  cmpu(c,0,c->r[0],0x00000003u); // 80105A74
  if (!crb(c,2)) { goto L_80105AAC; } // 80105A78
L_80105A7C:;
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80105A7C
  c->r[7]=R32(c->r[5]+0x0000022Cu); // 80105A80
  c->r[10]=c->r[5]+0x0000022Cu; // 80105A84
  c->r[0]=rotl(c->r[7],26)&0x00000001u; // 80105A88
  cmpu(c,0,c->r[0],0x00000001u); // 80105A8C
  if (!crb(c,2)) { goto L_80105AAC; } // 80105A90
  c->r[6]=0u+0xCC010000u; // 80105A94
  c->r[0]=0u+0x00000061u; // 80105A98
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80105A9C
  c->r[0]=rotl(c->r[7],0)&0xFFFFFFBFu; // 80105AA0
  c->r[12]=0u+0x00000001u; // 80105AA4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80105AA8
L_80105AAC:;
  c->r[8]=0u+0xCC010000u; // 80105AAC
  c->r[9]=0u+0x00000061u; // 80105AB0
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80105AB4
  c->r[6]=0u+0x00000000u; // 80105AB8
  c->r[11]=R32(c->r[2]+0xFFFF8C88u); // 80105ABC
  c->r[6]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 80105AC0
  c->r[3]=0u+0x0000004Bu; // 80105AC4
  c->r[0]=0u+0x00000052u; // 80105AC8
  c->r[7]=R32(c->r[11]+0x00000230u); // 80105ACC
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80105AD0
  cmps(c,0,(int32_t)c->r[4],0); // 80105AD4
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 80105AD8
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80105ADC
  c->r[3]=R32(c->r[11]+0x00000234u); // 80105AE0
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 80105AE4
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80105AE8
  c->r[3]=R32(c->r[11]+0x00000238u); // 80105AEC
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 80105AF0
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80105AF4
  W32(c->r[8]+0xFFFF8000u,c->r[6]); // 80105AF8
  c->r[3]=R32(c->r[11]+0x0000023Cu); // 80105AFC
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 80105B00
  c->r[3]=c->r[3]|0x00004000u; // 80105B04
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80105B08
  W32(c->r[11]+0x0000023Cu,c->r[3]); // 80105B0C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80105B10
  c->r[0]=R32(c->r[11]+0x0000023Cu); // 80105B14
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80105B18
  if (crb(c,2)) { goto L_80105B38; } // 80105B1C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80105B20
  c->r[0]=R32(c->r[11]+0x00000228u); // 80105B24
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80105B28
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80105B2C
  c->r[0]=R32(c->r[11]+0x00000220u); // 80105B30
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 80105B34
L_80105B38:;
  cmps(c,0,(int32_t)c->r[12],0); // 80105B38
  if (crb(c,2)) { goto L_80105B54; } // 80105B3C
  c->r[3]=0u+0xCC010000u; // 80105B40
  c->r[0]=0u+0x00000061u; // 80105B44
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80105B48
  c->r[0]=R32(c->r[10]+0x00000000u); // 80105B4C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80105B50
L_80105B54:;
  c->r[0]=0u+0x00000000u; // 80105B54
  W16(c->r[5]+0x00000002u,c->r[0]); // 80105B58
  return; // 80105B5C
}

// GXCopyTex
void f_80105B60(Ctx* __restrict c) {
  trace_call(0x80105B60u);
  cmps(c,0,(int32_t)c->r[4],0); // 80105B60
  if (crb(c,2)) { goto L_80105B94; } // 80105B64
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 80105B68
  c->r[5]=0u+0xCC010000u; // 80105B6C
  c->r[0]=0u+0x00000061u; // 80105B70
  c->r[6]=R32(c->r[7]+0x00000228u); // 80105B74
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80105B78
  c->r[6]=c->r[6]|0x0000000Fu; // 80105B7C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80105B80
  c->r[6]=R32(c->r[7]+0x00000220u); // 80105B84
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80105B88
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 80105B8C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80105B90
L_80105B94:;
  c->r[9]=R32(c->r[2]+0xFFFF8C88u); // 80105B94
  c->r[11]=0u+0x00000000u; // 80105B98
  c->r[0]=R8(c->r[9]+0x00000250u); // 80105B9C
  c->r[6]=R32(c->r[9]+0x0000022Cu); // 80105BA0
  cmps(c,0,(int32_t)c->r[0],0); // 80105BA4
  if (crb(c,2)) { goto L_80105BC4; } // 80105BA8
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 80105BAC
  cmpu(c,0,c->r[0],0x00000003u); // 80105BB0
  if (crb(c,2)) { goto L_80105BC4; } // 80105BB4
  c->r[0]=0u+0x00000003u; // 80105BB8
  c->r[11]=0u+0x00000001u; // 80105BBC
  c->r[6]=(rotl(c->r[0],0)&0x00000007u)|(c->r[6]&~0x00000007u); // 80105BC0
L_80105BC4:;
  cmps(c,0,(int32_t)c->r[4],0); // 80105BC4
  if (!crb(c,2)) { goto L_80105BD8; } // 80105BC8
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 80105BCC
  cmpu(c,0,c->r[0],0x00000003u); // 80105BD0
  if (!crb(c,2)) { goto L_80105BEC; } // 80105BD4
L_80105BD8:;
  c->r[0]=rotl(c->r[6],26)&0x00000001u; // 80105BD8
  cmpu(c,0,c->r[0],0x00000001u); // 80105BDC
  if (!crb(c,2)) { goto L_80105BEC; } // 80105BE0
  c->r[11]=0u+0x00000001u; // 80105BE4
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFBFu; // 80105BE8
L_80105BEC:;
  cmps(c,0,(int32_t)c->r[11],0); // 80105BEC
  if (crb(c,2)) { goto L_80105C04; } // 80105BF0
  c->r[5]=0u+0xCC010000u; // 80105BF4
  c->r[0]=0u+0x00000061u; // 80105BF8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80105BFC
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80105C00
L_80105C04:;
  c->r[7]=0u+0xCC010000u; // 80105C04
  c->r[8]=0u+0x00000061u; // 80105C08
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80105C0C
  c->r[5]=0u+0x00000000u; // 80105C10
  c->r[10]=R32(c->r[2]+0xFFFF8C88u); // 80105C14
  c->r[5]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 80105C18
  c->r[3]=0u+0x0000004Bu; // 80105C1C
  c->r[0]=0u+0x00000052u; // 80105C20
  c->r[6]=R32(c->r[10]+0x00000240u); // 80105C24
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80105C28
  cmps(c,0,(int32_t)c->r[4],0); // 80105C2C
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 80105C30
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80105C34
  c->r[3]=R32(c->r[10]+0x00000244u); // 80105C38
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80105C3C
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80105C40
  c->r[3]=R32(c->r[10]+0x00000248u); // 80105C44
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80105C48
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80105C4C
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 80105C50
  c->r[3]=R32(c->r[10]+0x0000024Cu); // 80105C54
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 80105C58
  c->r[3]=rotl(c->r[3],0)&0xFFFFBFFFu; // 80105C5C
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80105C60
  W32(c->r[10]+0x0000024Cu,c->r[3]); // 80105C64
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80105C68
  c->r[0]=R32(c->r[10]+0x0000024Cu); // 80105C6C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80105C70
  if (crb(c,2)) { goto L_80105C90; } // 80105C74
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80105C78
  c->r[0]=R32(c->r[10]+0x00000228u); // 80105C7C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80105C80
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80105C84
  c->r[0]=R32(c->r[10]+0x00000220u); // 80105C88
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80105C8C
L_80105C90:;
  cmps(c,0,(int32_t)c->r[11],0); // 80105C90
  if (crb(c,2)) { goto L_80105CAC; } // 80105C94
  c->r[3]=0u+0xCC010000u; // 80105C98
  c->r[0]=0u+0x00000061u; // 80105C9C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80105CA0
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 80105CA4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80105CA8
L_80105CAC:;
  c->r[0]=0u+0x00000000u; // 80105CAC
  W16(c->r[9]+0x00000002u,c->r[0]); // 80105CB0
  return; // 80105CB4
}

// GXClearBoundingBox
void f_80105CB8(Ctx* __restrict c) {
  trace_call(0x80105CB8u);
  c->r[5]=0u+0xCC010000u; // 80105CB8
  c->r[6]=0u+0x00000061u; // 80105CBC
  c->r[3]=0u+0x55000000u; // 80105CC0
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80105CC4
  c->r[0]=c->r[3]+0x000003FFu; // 80105CC8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80105CCC
  c->r[3]=0u+0x56000000u; // 80105CD0
  c->r[4]=c->r[3]+0x000003FFu; // 80105CD4
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80105CD8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80105CDC
  c->r[0]=0u+0x00000000u; // 80105CE0
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80105CE4
  W16(c->r[3]+0x00000002u,c->r[0]); // 80105CE8
  return; // 80105CEC
}

// GXInitLightAttn
void f_80105CF0(Ctx* __restrict c) {
  trace_call(0x80105CF0u);
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80105CF0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 80105CF4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 80105CF8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 80105CFC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 80105D00
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[6]);} // 80105D04
  return; // 80105D08
}

// GXInitLightAttnA
void f_80105D0C(Ctx* __restrict c) {
  trace_call(0x80105D0Cu);
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80105D0C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 80105D10
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 80105D14
  return; // 80105D18
}

// GXInitLightAttnK
void f_80105D1C(Ctx* __restrict c) {
  trace_call(0x80105D1Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80105D1C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 80105D20
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[3]);} // 80105D24
  return; // 80105D28
}

// GXInitLightSpot
void f_80105D2C(Ctx* __restrict c) {
  trace_call(0x80105D2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105D2C
  c->r[0]=c->lr; // 80105D30
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105D34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105D38
  fcmp(c,0,c->f[1],c->f[0]); // 80105D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105D40
  c->r[31]=c->r[4]|c->r[4]; // 80105D44
  W32(c->r[1]+0x00000008u,c->r[30]); // 80105D48
  c->r[30]=c->r[3]|c->r[3]; // 80105D4C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80105D50
  if (crb(c,2)) { goto L_80105D64; } // 80105D54
  {uint32_t ea=c->r[2]+0xFFFF8CC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105D58
  fcmp(c,0,c->f[1],c->f[0]); // 80105D5C
  if (!crb(c,1)) { goto L_80105D68; } // 80105D60
L_80105D64:;
  c->r[31]=0u+0x00000000u; // 80105D64
L_80105D68:;
  {uint32_t ea=c->r[2]+0xFFFF8CC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105D68
  {uint32_t ea=c->r[2]+0xFFFF8CCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105D6C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80105D70
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80105D74
  c->lr=0x80105D7Cu; f_8011A5C8(c); // 80105D78
  cmpu(c,0,c->r[31],0x00000006u); // 80105D7C
  c->f[5]=c->ps1[5]=S(c->f[1]); // 80105D80
  if (crb(c,1)) { goto L_80105E84; } // 80105D84
  c->r[3]=0u+0x80290000u; // 80105D88
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80105D8C
  c->r[3]=c->r[3]+0x00005D88u; // 80105D90
  c->r[3]=R32(c->r[3]+c->r[0]); // 80105D94
  c->ctr=c->r[3]; // 80105D98
  if (true) { switch (c->ctr) { case 0x80105DA0u: goto L_80105DA0; case 0x80105DB4u: goto L_80105DB4; case 0x80105DD0u: goto L_80105DD0; case 0x80105DECu: goto L_80105DEC; case 0x80105E18u: goto L_80105E18; case 0x80105E48u: goto L_80105E48; case 0x80105E84u: goto L_80105E84; default: break; } dispatch(c,c->ctr); return; } // 80105D9C
L_80105DA0:;
  {uint32_t ea=c->r[2]+0xFFFF8CD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105DA0
  {uint32_t ea=c->r[2]+0xFFFF8CD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105DA4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[5]); // 80105DA8
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[6]=c->ps1[6]=RF32(ea);} // 80105DAC
  goto L_80105E90; // 80105DB0
L_80105DB4:;
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105DB4
  c->f[0]=-c->f[5]; // 80105DB8
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[6]=c->ps1[6]=RF32(ea);} // 80105DBC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[5]); // 80105DC0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 80105DC4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 80105DC8
  goto L_80105E90; // 80105DCC
L_80105DD0:;
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105DD0
  c->f[0]=-c->f[5]; // 80105DD4
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80105DD8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[5]); // 80105DDC
  c->f[6]=c->ps1[6]=S(c->f[2]/c->f[1]); // 80105DE0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 80105DE4
  goto L_80105E90; // 80105DE8
L_80105DEC:;
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80105DEC
  {uint32_t ea=c->r[2]+0xFFFF8CDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105DF0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[5]); // 80105DF4
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[1]); // 80105DF8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80105DFC
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80105E00
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80105E04
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[0]); // 80105E08
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80105E0C
  c->f[6]=-c->f[2]; // 80105E10
  goto L_80105E90; // 80105E14
L_80105E18:;
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80105E18
  {uint32_t ea=c->r[2]+0xFFFF8CE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105E1C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[5]); // 80105E20
  {uint32_t ea=c->r[2]+0xFFFF8CE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80105E24
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 80105E28
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80105E2C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80105E30
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[3]); // 80105E34
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[1]); // 80105E38
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80105E3C
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[5]); // 80105E40
  goto L_80105E90; // 80105E44
L_80105E48:;
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80105E48
  {uint32_t ea=c->r[2]+0xFFFF8CDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105E4C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[5]); // 80105E50
  {uint32_t ea=c->r[2]+0xFFFF8CE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105E54
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 80105E58
  {uint32_t ea=c->r[2]+0xFFFF8CE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105E5C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 80105E60
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80105E64
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 80105E68
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 80105E6C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80105E70
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 80105E74
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[3]); // 80105E78
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[2]); // 80105E7C
  goto L_80105E90; // 80105E80
L_80105E84:;
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105E84
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80105E88
  c->f[6]=c->f[1]; // 80105E8C
L_80105E90:;
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 80105E90
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 80105E94
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 80105E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105E9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80105EA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105EA4
  c->lr=c->r[0]; // 80105EA8
  c->r[1]=c->r[1]+0x00000010u; // 80105EAC
  return; // 80105EB0
}

// GXInitLightDistAttn
void f_80105EB4(Ctx* __restrict c) {
  trace_call(0x80105EB4u);
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105EB4
  fcmp(c,0,c->f[1],c->f[0]); // 80105EB8
  if (!crb(c,0)) { goto L_80105EC4; } // 80105EBC
  c->r[4]=0u+0x00000000u; // 80105EC0
L_80105EC4:;
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105EC4
  fcmp(c,0,c->f[2],c->f[0]); // 80105EC8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80105ECC
  if (crb(c,2)) { goto L_80105EE4; } // 80105ED0
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105ED4
  fcmp(c,0,c->f[2],c->f[0]); // 80105ED8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80105EDC
  if (!crb(c,2)) { goto L_80105EE8; } // 80105EE0
L_80105EE4:;
  c->r[4]=0u+0x00000000u; // 80105EE4
L_80105EE8:;
  cmps(c,0,(int32_t)c->r[4],2); // 80105EE8
  if (crb(c,2)) { goto L_80105F28; } // 80105EEC
  if (!crb(c,0)) { goto L_80105F04; } // 80105EF0
  cmps(c,0,(int32_t)c->r[4],0); // 80105EF4
  if (crb(c,2)) { goto L_80105F68; } // 80105EF8
  if (!crb(c,0)) { goto L_80105F10; } // 80105EFC
  goto L_80105F68; // 80105F00
L_80105F04:;
  cmps(c,0,(int32_t)c->r[4],4); // 80105F04
  if (!crb(c,0)) { goto L_80105F68; } // 80105F08
  goto L_80105F4C; // 80105F0C
L_80105F10:;
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80105F10
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 80105F14
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80105F18
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[2]); // 80105F1C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 80105F20
  goto L_80105F74; // 80105F24
L_80105F28:;
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80105F28
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80105F2C
  {uint32_t ea=c->r[2]+0xFFFF8CECu; c->f[4]=c->ps1[4]=RF32(ea);} // 80105F30
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 80105F34
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[3]); // 80105F38
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 80105F3C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[3]); // 80105F40
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[0]); // 80105F44
  goto L_80105F74; // 80105F48
L_80105F4C:;
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 80105F4C
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80105F50
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80105F54
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 80105F58
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80105F5C
  c->f[4]=c->ps1[4]=S(c->f[2]/c->f[0]); // 80105F60
  goto L_80105F74; // 80105F64
L_80105F68:;
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80105F68
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80105F6C
  c->f[4]=c->f[3]; // 80105F70
L_80105F74:;
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[5]);} // 80105F74
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 80105F78
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[4]);} // 80105F7C
  return; // 80105F80
}

// GXInitLightPos
void f_80105F84(Ctx* __restrict c) {
  trace_call(0x80105F84u);
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 80105F84
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 80105F88
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 80105F8C
  return; // 80105F90
}

// GXGetLightPos
void f_80105F94(Ctx* __restrict c) {
  trace_call(0x80105F94u);
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105F94
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105F98
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80105F9C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105FA0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80105FA4
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80105FA8
  return; // 80105FAC
}

// GXInitLightDir
void f_80105FB0(Ctx* __restrict c) {
  trace_call(0x80105FB0u);
  c->f[4]=-c->f[1]; // 80105FB0
  c->f[1]=-c->f[2]; // 80105FB4
  c->f[0]=-c->f[3]; // 80105FB8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[4]);} // 80105FBC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 80105FC0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80105FC4
  return; // 80105FC8
}

// GXGetLightDir
void f_80105FCC(Ctx* __restrict c) {
  trace_call(0x80105FCCu);
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105FCC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105FD0
  c->f[2]=-c->f[0]; // 80105FD4
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80105FD8
  c->f[1]=-c->f[1]; // 80105FDC
  c->f[0]=-c->f[0]; // 80105FE0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 80105FE4
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 80105FE8
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80105FEC
  return; // 80105FF0
}

// GXInitSpecularDir
void f_80105FF4(Ctx* __restrict c) {
  trace_call(0x80105FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105FF4
  c->r[0]=c->lr; // 80105FF8
  W32(c->r[1]+0x00000074u,c->r[0]); // 80105FFC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80106000
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80106004
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80106008
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8010600C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80106010
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80106014
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 80106018
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 8010601C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[27]);} // 80106020
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,27,ea,0,0);} // 80106024
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[26]);} // 80106028
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,26,ea,0,0);} // 8010602C
  c->f[31]=-c->f[1]; // 80106030
  c->f[30]=-c->f[2]; // 80106034
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80106038
  c->f[6]=-c->f[3]; // 8010603C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80106040
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[31]); // 80106044
  c->f[26]=c->f[1]; // 80106048
  c->f[29]=c->ps1[29]=S(c->f[4]+c->f[6]); // 8010604C
  {uint32_t ea=c->r[2]+0xFFFF8CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106050
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[30]); // 80106054
  c->r[31]=c->r[3]|c->r[3]; // 80106058
  c->f[27]=c->f[2]; // 8010605C
  c->f[6]=c->ps1[6]=S(c->f[29]*c->f[29]); // 80106060
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[4]); // 80106064
  c->f[28]=c->f[3]; // 80106068
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 8010606C
  fcmp(c,0,c->f[0],c->f[1]); // 80106070
  if (crb(c,2)) { goto L_80106088; } // 80106074
  c->lr=0x8010607Cu; f_8011AE8C(c); // 80106078
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8010607C
  {uint32_t ea=c->r[2]+0xFFFF8CD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106080
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 80106084
L_80106088:;
  {uint32_t ea=c->r[2]+0xFFFF8CF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106088
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[1]); // 8010608C
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[1]); // 80106090
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[1]); // 80106094
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[26]); // 80106098
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[5]);} // 8010609C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[27]); // 801060A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 801060A4
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[4]);} // 801060A8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[3]);} // 801060AC
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 801060B0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 801060B4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801060B8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801060BC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801060C0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801060C4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801060C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801060CC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801060D0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801060D4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801060D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,27,ea,0,0);} // 801060DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[27]=RF64(ea);} // 801060E0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,26,ea,0,0);} // 801060E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[26]=RF64(ea);} // 801060E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801060EC
  c->r[0]=R32(c->r[1]+0x00000074u); // 801060F0
  c->lr=c->r[0]; // 801060F4
  c->r[1]=c->r[1]+0x00000070u; // 801060F8
  return; // 801060FC
}

// GXInitLightColor
void f_80106100(Ctx* __restrict c) {
  trace_call(0x80106100u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 80106100
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80106104
  return; // 80106108
}

// GXLoadLightObjImm
void f_8010610C(Ctx* __restrict c) {
  trace_call(0x8010610Cu);
  c->r[0]=cntlz(c->r[4]); // 8010610C
  c->r[4]=0u+0xCC010000u; // 80106110
  c->r[5]=addc(c,~c->r[0],0x0000001Fu,1); // 80106114
  c->r[0]=0u+0x00000010u; // 80106118
  c->r[5]=rotl(c->r[5],4)&0x00000070u; // 8010611C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80106120
  c->r[0]=c->r[5]+0x00000600u; // 80106124
  c->r[0]=c->r[0]|0x000F0000u; // 80106128
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8010612C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80106130
  c->r[6]=c->r[6]^c->r[6]; // 80106134
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,5,ea,0,0);} // 80106138
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,4,ea,0,0);} // 8010613C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,3,ea,0,0);} // 80106140
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,2,ea,0,0);} // 80106144
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,1,ea,0,0);} // 80106148
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,0,ea,0,0);} // 8010614C
  {uint32_t ea=c->r[4]+0xFFFF8000u; W32(ea,c->r[6]); c->r[4]=ea;} // 80106150
  W32(c->r[4]+0x00000000u,c->r[6]); // 80106154
  W32(c->r[4]+0x00000000u,c->r[6]); // 80106158
  W32(c->r[4]+0x00000000u,c->r[0]); // 8010615C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 80106160
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 80106164
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 80106168
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 8010616C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80106170
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80106174
  c->r[0]=0u+0x00000001u; // 80106178
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010617C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80106180
  return; // 80106184
}

// GXSetChanAmbColor
void f_80106188(Ctx* __restrict c) {
  trace_call(0x80106188u);
  cmps(c,0,(int32_t)c->r[3],3); // 80106188
  if (crb(c,2)) { goto L_80106204; } // 8010618C
  if (!crb(c,0)) { goto L_801061AC; } // 80106190
  cmps(c,0,(int32_t)c->r[3],1); // 80106194
  if (crb(c,2)) { goto L_801061D4; } // 80106198
  if (!crb(c,0)) { goto L_801061EC; } // 8010619C
  cmps(c,0,(int32_t)c->r[3],0); // 801061A0
  if (!crb(c,0)) { goto L_801061BC; } // 801061A4
  return; // 801061A8
L_801061AC:;
  cmps(c,0,(int32_t)c->r[3],5); // 801061AC
  if (crb(c,2)) { goto L_80106228; } // 801061B0
  if (!crb(c,0)) return; // 801061B4
  goto L_8010621C; // 801061B8
L_801061BC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801061BC
  c->r[8]=0u+0x00000000u; // 801061C0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801061C4
  c->r[7]=R32(c->r[3]+0x000000A8u); // 801061C8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801061CC
  goto L_80106238; // 801061D0
L_801061D4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801061D4
  c->r[8]=0u+0x00000001u; // 801061D8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801061DC
  c->r[7]=R32(c->r[3]+0x000000ACu); // 801061E0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801061E4
  goto L_80106238; // 801061E8
L_801061EC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801061EC
  c->r[8]=0u+0x00000000u; // 801061F0
  c->r[0]=R8(c->r[4]+0x00000003u); // 801061F4
  c->r[7]=R32(c->r[3]+0x000000A8u); // 801061F8
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801061FC
  goto L_80106238; // 80106200
L_80106204:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80106204
  c->r[8]=0u+0x00000001u; // 80106208
  c->r[0]=R8(c->r[4]+0x00000003u); // 8010620C
  c->r[7]=R32(c->r[3]+0x000000ACu); // 80106210
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 80106214
  goto L_80106238; // 80106218
L_8010621C:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 8010621C
  c->r[8]=0u+0x00000000u; // 80106220
  goto L_80106238; // 80106224
L_80106228:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 80106228
  c->r[8]=0u+0x00000001u; // 8010622C
  goto L_80106238; // 80106230
  return; // 80106234
L_80106238:;
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80106238
  c->r[3]=0u+0x00000100u; // 8010623C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80106240
  c->r[5]=R32(c->r[6]+0x000005FCu); // 80106244
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 80106248
  c->r[3]=c->r[6]+c->r[0]; // 8010624C
  c->r[0]=c->r[5]|c->r[4]; // 80106250
  W32(c->r[6]+0x000005FCu,c->r[0]); // 80106254
  W32(c->r[3]+0x000000A8u,c->r[7]); // 80106258
  return; // 8010625C
}

// GXSetChanMatColor
void f_80106260(Ctx* __restrict c) {
  trace_call(0x80106260u);
  cmps(c,0,(int32_t)c->r[3],3); // 80106260
  if (crb(c,2)) { goto L_801062DC; } // 80106264
  if (!crb(c,0)) { goto L_80106284; } // 80106268
  cmps(c,0,(int32_t)c->r[3],1); // 8010626C
  if (crb(c,2)) { goto L_801062AC; } // 80106270
  if (!crb(c,0)) { goto L_801062C4; } // 80106274
  cmps(c,0,(int32_t)c->r[3],0); // 80106278
  if (!crb(c,0)) { goto L_80106294; } // 8010627C
  return; // 80106280
L_80106284:;
  cmps(c,0,(int32_t)c->r[3],5); // 80106284
  if (crb(c,2)) { goto L_80106300; } // 80106288
  if (!crb(c,0)) return; // 8010628C
  goto L_801062F4; // 80106290
L_80106294:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80106294
  c->r[8]=0u+0x00000000u; // 80106298
  c->r[0]=R32(c->r[4]+0x00000000u); // 8010629C
  c->r[7]=R32(c->r[3]+0x000000B0u); // 801062A0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801062A4
  goto L_80106310; // 801062A8
L_801062AC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801062AC
  c->r[8]=0u+0x00000001u; // 801062B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801062B4
  c->r[7]=R32(c->r[3]+0x000000B4u); // 801062B8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801062BC
  goto L_80106310; // 801062C0
L_801062C4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801062C4
  c->r[8]=0u+0x00000000u; // 801062C8
  c->r[0]=R8(c->r[4]+0x00000003u); // 801062CC
  c->r[7]=R32(c->r[3]+0x000000B0u); // 801062D0
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801062D4
  goto L_80106310; // 801062D8
L_801062DC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801062DC
  c->r[8]=0u+0x00000001u; // 801062E0
  c->r[0]=R8(c->r[4]+0x00000003u); // 801062E4
  c->r[7]=R32(c->r[3]+0x000000B4u); // 801062E8
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801062EC
  goto L_80106310; // 801062F0
L_801062F4:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 801062F4
  c->r[8]=0u+0x00000000u; // 801062F8
  goto L_80106310; // 801062FC
L_80106300:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 80106300
  c->r[8]=0u+0x00000001u; // 80106304
  goto L_80106310; // 80106308
  return; // 8010630C
L_80106310:;
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80106310
  c->r[3]=0u+0x00000400u; // 80106314
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80106318
  c->r[5]=R32(c->r[6]+0x000005FCu); // 8010631C
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 80106320
  c->r[3]=c->r[6]+c->r[0]; // 80106324
  c->r[0]=c->r[5]|c->r[4]; // 80106328
  W32(c->r[6]+0x000005FCu,c->r[0]); // 8010632C
  W32(c->r[3]+0x000000B0u,c->r[7]); // 80106330
  return; // 80106334
}

// GXSetNumChans
void f_80106338(Ctx* __restrict c) {
  trace_call(0x80106338u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80106338
  c->r[0]=R32(c->r[4]+0x00000254u); // 8010633C
  c->r[0]=(rotl(c->r[3],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 80106340
  W32(c->r[4]+0x00000254u,c->r[0]); // 80106344
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80106348
  c->r[0]=c->r[0]|0x01000000u; // 8010634C
  c->r[0]=c->r[0]|0x00000004u; // 80106350
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80106354
  return; // 80106358
}

// GXSetChanCtrl
void f_8010635C(Ctx* __restrict c) {
  trace_call(0x8010635Cu);
  cmps(c,0,(int32_t)c->r[9],0); // 8010635C
  c->r[10]=0u+0x00000000u; // 80106360
  c->r[10]=(rotl(c->r[4],1)&0x00000002u)|(c->r[10]&~0x00000002u); // 80106364
  c->r[11]=rotl(c->r[3],0)&0x00000003u; // 80106368
  c->r[10]=(rotl(c->r[6],0)&0x00000001u)|(c->r[10]&~0x00000001u); // 8010636C
  c->r[10]=(rotl(c->r[5],6)&0x00000040u)|(c->r[10]&~0x00000040u); // 80106370
  if (!crb(c,2)) { goto L_8010637C; } // 80106374
  c->r[8]=0u+0x00000000u; // 80106378
L_8010637C:;
  c->r[5]=addc(c,~c->r[9],0x00000002u,1); // 8010637C
  c->r[4]=c->r[9]+0xFFFFFFFEu; // 80106380
  c->r[0]=0u-c->r[9]; // 80106384
  c->r[10]=(rotl(c->r[8],7)&0x00000180u)|(c->r[10]&~0x00000180u); // 80106388
  c->r[4]=c->r[5]|c->r[4]; // 8010638C
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80106390
  c->r[10]=(rotl(c->r[4],10)&0x00000200u)|(c->r[10]&~0x00000200u); // 80106394
  c->r[0]=c->r[0]|c->r[9]; // 80106398
  c->r[10]=(rotl(c->r[0],11)&0x00000400u)|(c->r[10]&~0x00000400u); // 8010639C
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801063A0
  c->r[10]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[10]&~0x0000003Cu); // 801063A4
  c->r[0]=0u+0x00001000u; // 801063A8
  c->r[4]=c->r[5]+c->r[4]; // 801063AC
  cmps(c,0,(int32_t)c->r[3],4); // 801063B0
  c->r[10]=(rotl(c->r[7],7)&0x00007800u)|(c->r[10]&~0x00007800u); // 801063B4
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 801063B8
  W32(c->r[4]+0x000000B8u,c->r[10]); // 801063BC
  c->r[4]=R32(c->r[5]+0x000005FCu); // 801063C0
  c->r[0]=c->r[4]|c->r[0]; // 801063C4
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801063C8
  if (!crb(c,2)) { goto L_801063E4; } // 801063CC
  W32(c->r[5]+0x000000C0u,c->r[10]); // 801063D0
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801063D4
  c->r[0]=c->r[0]|0x00005000u; // 801063D8
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801063DC
  return; // 801063E0
L_801063E4:;
  cmps(c,0,(int32_t)c->r[3],5); // 801063E4
  if (!crb(c,2)) return; // 801063E8
  W32(c->r[5]+0x000000C4u,c->r[10]); // 801063EC
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801063F0
  c->r[0]=c->r[0]|0x0000A000u; // 801063F4
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801063F8
  return; // 801063FC
}

// GXGetTexBufferSize
void f_80106400(Ctx* __restrict c) {
  trace_call(0x80106400u);
  cmpu(c,0,c->r[5],0x0000003Cu); // 80106400
  if (crb(c,1)) { goto L_80106444; } // 80106404
  c->r[8]=0u+0x80290000u; // 80106408
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8010640C
  c->r[8]=c->r[8]+0x00005DA8u; // 80106410
  c->r[8]=R32(c->r[8]+c->r[0]); // 80106414
  c->ctr=c->r[8]; // 80106418
  if (true) { switch (c->ctr) { case 0x80106420u: goto L_80106420; case 0x8010642Cu: goto L_8010642C; case 0x80106438u: goto L_80106438; case 0x80106444u: goto L_80106444; default: break; } dispatch(c,c->ctr); return; } // 8010641C
L_80106420:;
  c->r[10]=0u+0x00000003u; // 80106420
  c->r[0]=0u+0x00000003u; // 80106424
  goto L_8010644C; // 80106428
L_8010642C:;
  c->r[10]=0u+0x00000003u; // 8010642C
  c->r[0]=0u+0x00000002u; // 80106430
  goto L_8010644C; // 80106434
L_80106438:;
  c->r[10]=0u+0x00000002u; // 80106438
  c->r[0]=0u+0x00000002u; // 8010643C
  goto L_8010644C; // 80106440
L_80106444:;
  c->r[0]=0u+0x00000000u; // 80106444
  c->r[10]=0u+0x00000000u; // 80106448
L_8010644C:;
  cmpu(c,0,c->r[5],0x00000006u); // 8010644C
  if (crb(c,2)) { goto L_8010645C; } // 80106450
  cmpu(c,0,c->r[5],0x00000016u); // 80106454
  if (!crb(c,2)) { goto L_80106464; } // 80106458
L_8010645C:;
  c->r[11]=0u+0x00000040u; // 8010645C
  goto L_80106468; // 80106460
L_80106464:;
  c->r[11]=0u+0x00000020u; // 80106464
L_80106468:;
  cmpu(c,0,c->r[6],0x00000001u); // 80106468
  if (!crb(c,2)) { goto L_801064F0; } // 8010646C
  c->r[5]=0u+0x00000001u; // 80106470
  c->r[12]=0u+0x00000000u; // 80106474
  c->r[8]=((c->r[10])&0x20)?0u:(c->r[5]<<((c->r[10])&31)); // 80106478
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 8010647C
  c->ctr=c->r[7]; // 80106480
  cmpu(c,0,c->r[7],0x00000000u); // 80106484
  if (!crb(c,1)) { goto L_8010651C; } // 80106488
L_8010648C:;
  c->r[6]=c->r[3]+c->r[8]; // 8010648C
  c->r[5]=c->r[4]+c->r[9]; // 80106490
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80106494
  cmpu(c,0,c->r[3],0x00000001u); // 80106498
  c->r[6]=sraw(c,c->r[6],(c->r[10])&63); // 8010649C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801064A0
  c->r[6]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[6]); // 801064A4
  c->r[5]=sraw(c,c->r[5],(c->r[0])&63); // 801064A8
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 801064AC
  c->r[12]=c->r[12]+c->r[5]; // 801064B0
  if (!crb(c,2)) { goto L_801064C0; } // 801064B4
  cmpu(c,0,c->r[4],0x00000001u); // 801064B8
  if (crb(c,2)) { goto L_8010651C; } // 801064BC
L_801064C0:;
  cmpu(c,0,c->r[3],0x00000001u); // 801064C0
  c->r[5]=0u+0x00000001u; // 801064C4
  if (!crb(c,1)) { goto L_801064D0; } // 801064C8
  c->r[5]=rotl(c->r[3],31)&0x00007FFFu; // 801064CC
L_801064D0:;
  cmpu(c,0,c->r[4],0x00000001u); // 801064D0
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801064D4
  c->r[5]=0u+0x00000001u; // 801064D8
  if (!crb(c,1)) { goto L_801064E4; } // 801064DC
  c->r[5]=rotl(c->r[4],31)&0x00007FFFu; // 801064E0
L_801064E4:;
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; // 801064E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010648C; } // 801064E8
  goto L_8010651C; // 801064EC
L_801064F0:;
  c->r[6]=0u+0x00000001u; // 801064F0
  c->r[5]=((c->r[10])&0x20)?0u:(c->r[6]<<((c->r[10])&31)); // 801064F4
  c->r[5]=c->r[3]+c->r[5]; // 801064F8
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801064FC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80106500
  c->r[5]=sraw(c,c->r[5],(c->r[10])&63); // 80106504
  c->r[3]=c->r[4]+c->r[3]; // 80106508
  c->r[4]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[5]); // 8010650C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80106510
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 80106514
  c->r[12]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80106518
L_8010651C:;
  c->r[3]=c->r[12]|c->r[12]; // 8010651C
  return; // 80106520
}

// __GetImageTileCount
void f_80106524(Ctx* __restrict c) {
  trace_call(0x80106524u);
  cmpu(c,0,c->r[3],0x0000003Cu); // 80106524
  if (crb(c,1)) { goto L_80106568; } // 80106528
  c->r[9]=0u+0x80290000u; // 8010652C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80106530
  c->r[9]=c->r[9]+0x00005E9Cu; // 80106534
  c->r[9]=R32(c->r[9]+c->r[0]); // 80106538
  c->ctr=c->r[9]; // 8010653C
  if (true) { switch (c->ctr) { case 0x80106544u: goto L_80106544; case 0x80106550u: goto L_80106550; case 0x8010655Cu: goto L_8010655C; case 0x80106568u: goto L_80106568; default: break; } dispatch(c,c->ctr); return; } // 80106540
L_80106544:;
  c->r[11]=0u+0x00000003u; // 80106544
  c->r[12]=0u+0x00000003u; // 80106548
  goto L_80106570; // 8010654C
L_80106550:;
  c->r[11]=0u+0x00000003u; // 80106550
  c->r[12]=0u+0x00000002u; // 80106554
  goto L_80106570; // 80106558
L_8010655C:;
  c->r[11]=0u+0x00000002u; // 8010655C
  c->r[12]=0u+0x00000002u; // 80106560
  goto L_80106570; // 80106564
L_80106568:;
  c->r[12]=0u+0x00000000u; // 80106568
  c->r[11]=0u+0x00000000u; // 8010656C
L_80106570:;
  cmps(c,0,(int32_t)c->r[4],0); // 80106570
  if (!crb(c,2)) { goto L_8010657C; } // 80106574
  c->r[4]=0u+0x00000001u; // 80106578
L_8010657C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010657C
  if (!crb(c,2)) { goto L_80106588; } // 80106580
  c->r[5]=0u+0x00000001u; // 80106584
L_80106588:;
  c->r[10]=0u+0x00000001u; // 80106588
  cmps(c,0,(int32_t)c->r[3],6); // 8010658C
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[10]<<((c->r[11])&31)); // 80106590
  c->r[9]=0u+0x00000000u; // 80106594
  c->r[4]=c->r[4]+c->r[0]; // 80106598
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[10]<<((c->r[12])&31)); // 8010659C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801065A0
  c->r[10]=sraw(c,c->r[4],(c->r[11])&63); // 801065A4
  c->r[4]=c->r[5]+c->r[0]; // 801065A8
  W32(c->r[6]+0x00000000u,c->r[10]); // 801065AC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801065B0
  c->r[0]=sraw(c,c->r[0],(c->r[12])&63); // 801065B4
  W32(c->r[7]+0x00000000u,c->r[0]); // 801065B8
  if (crb(c,2)) { goto L_801065C8; } // 801065BC
  cmps(c,0,(int32_t)c->r[3],22); // 801065C0
  if (!crb(c,2)) { goto L_801065CC; } // 801065C4
L_801065C8:;
  c->r[9]=0u+0x00000001u; // 801065C8
L_801065CC:;
  c->r[0]=0u-c->r[9]; // 801065CC
  c->r[0]=c->r[0]|c->r[9]; // 801065D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801065D4
  c->r[0]=c->r[3]+0x00000001u; // 801065D8
  W32(c->r[8]+0x00000000u,c->r[0]); // 801065DC
  return; // 801065E0
}

// GXInitTexObj
void f_801065E4(Ctx* __restrict c) {
  trace_call(0x801065E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801065E4
  c->r[0]=c->lr; // 801065E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801065EC
  c->r[11]=c->r[1]+0x00000040u; // 801065F0
  c->lr=0x801065F8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801065F4
  c->r[27]=c->r[4]|c->r[4]; // 801065F8
  c->r[28]=c->r[5]|c->r[5]; // 801065FC
  c->r[31]=c->r[3]|c->r[3]; // 80106600
  c->r[29]=c->r[6]|c->r[6]; // 80106604
  c->r[30]=c->r[7]|c->r[7]; // 80106608
  c->r[24]=c->r[8]|c->r[8]; // 8010660C
  c->r[25]=c->r[9]|c->r[9]; // 80106610
  c->r[26]=c->r[10]|c->r[10]; // 80106614
  c->r[4]=0u+0x00000000u; // 80106618
  c->r[5]=0u+0x00000020u; // 8010661C
  c->lr=0x80106624u; f_8000443C(c); // 80106620
  c->r[0]=R32(c->r[31]+0x00000000u); // 80106624
  c->r[0]=(rotl(c->r[24],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 80106628
  c->r[0]=(rotl(c->r[25],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 8010662C
  cmps(c,0,(int32_t)c->r[26],0); // 80106630
  c->r[4]=c->r[0]|0x00000010u; // 80106634
  W32(c->r[31]+0x00000000u,c->r[4]); // 80106638
  if (crb(c,2)) { goto L_801066CC; } // 8010663C
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 80106640
  c->r[0]=c->r[30]+0xFFFFFFF8u; // 80106644
  cmpu(c,0,c->r[0],0x00000002u); // 80106648
  c->r[0]=c->r[3]|0x00000001u; // 8010664C
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 80106650
  if (crb(c,1)) { goto L_80106668; } // 80106654
  c->r[0]=0u+0x00000005u; // 80106658
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 8010665C
  W32(c->r[31]+0x00000000u,c->r[4]); // 80106660
  goto L_80106674; // 80106664
L_80106668:;
  c->r[0]=0u+0x00000006u; // 80106668
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 8010666C
  W32(c->r[31]+0x00000000u,c->r[4]); // 80106670
L_80106674:;
  cmpu(c,0,c->r[28],c->r[29]); // 80106674
  if (!crb(c,1)) { goto L_80106688; } // 80106678
  c->r[0]=cntlz(c->r[28]); // 8010667C
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 80106680
  goto L_80106690; // 80106684
L_80106688:;
  c->r[0]=cntlz(c->r[29]); // 80106688
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 8010668C
L_80106690:;
  c->r[0]=0u+0x43300000u; // 80106690
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80106694
  {uint32_t ea=c->r[2]+0xFFFF8D00u; c->f[2]=RF64(ea);} // 80106698
  W32(c->r[1]+0x00000008u,c->r[0]); // 8010669C
  {uint32_t ea=c->r[2]+0xFFFF8CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801066A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801066A4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801066A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801066AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801066B0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801066B4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801066B8
  c->r[3]=R32(c->r[1]+0x00000014u); // 801066BC
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 801066C0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801066C4
  goto L_801066D8; // 801066C8
L_801066CC:;
  c->r[0]=0u+0x00000004u; // 801066CC
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 801066D0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801066D4
L_801066D8:;
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 801066D8
  c->r[3]=R32(c->r[31]+0x00000008u); // 801066DC
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801066E0
  c->r[4]=rotl(c->r[30],0)&0x0000000Fu; // 801066E4
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 801066E8
  W32(c->r[31]+0x00000014u,c->r[30]); // 801066EC
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 801066F0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801066F4
  c->r[0]=(rotl(c->r[27],27)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 801066F8
  cmpu(c,0,c->r[4],0x0000000Eu); // 801066FC
  c->r[3]=(rotl(c->r[30],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 80106700
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80106704
  W32(c->r[31]+0x00000008u,c->r[3]); // 80106708
  if (crb(c,1)) { goto L_8010678C; } // 8010670C
  c->r[3]=0u+0x80290000u; // 80106710
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80106714
  c->r[3]=c->r[3]+0x00005F90u; // 80106718
  c->r[3]=R32(c->r[3]+c->r[0]); // 8010671C
  c->ctr=c->r[3]; // 80106720
  if (true) { switch (c->ctr) { case 0x80106728u: goto L_80106728; case 0x8010673Cu: goto L_8010673C; case 0x80106750u: goto L_80106750; case 0x80106764u: goto L_80106764; case 0x80106778u: goto L_80106778; case 0x8010678Cu: goto L_8010678C; default: break; } dispatch(c,c->ctr); return; } // 80106724
L_80106728:;
  c->r[0]=0u+0x00000001u; // 80106728
  c->r[6]=0u+0x00000003u; // 8010672C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80106730
  c->r[7]=0u+0x00000003u; // 80106734
  goto L_8010679C; // 80106738
L_8010673C:;
  c->r[0]=0u+0x00000002u; // 8010673C
  c->r[6]=0u+0x00000003u; // 80106740
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80106744
  c->r[7]=0u+0x00000002u; // 80106748
  goto L_8010679C; // 8010674C
L_80106750:;
  c->r[0]=0u+0x00000002u; // 80106750
  c->r[6]=0u+0x00000002u; // 80106754
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80106758
  c->r[7]=0u+0x00000002u; // 8010675C
  goto L_8010679C; // 80106760
L_80106764:;
  c->r[0]=0u+0x00000003u; // 80106764
  c->r[6]=0u+0x00000002u; // 80106768
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 8010676C
  c->r[7]=0u+0x00000002u; // 80106770
  goto L_8010679C; // 80106774
L_80106778:;
  c->r[0]=0u+0x00000000u; // 80106778
  c->r[6]=0u+0x00000003u; // 8010677C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80106780
  c->r[7]=0u+0x00000003u; // 80106784
  goto L_8010679C; // 80106788
L_8010678C:;
  c->r[0]=0u+0x00000002u; // 8010678C
  c->r[6]=0u+0x00000002u; // 80106790
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 80106794
  c->r[7]=0u+0x00000002u; // 80106798
L_8010679C:;
  c->r[5]=0u+0x00000001u; // 8010679C
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 801067A0
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 801067A4
  c->r[11]=c->r[1]+0x00000040u; // 801067A8
  c->r[4]=c->r[28]+c->r[3]; // 801067AC
  c->r[0]=c->r[0]|0x00000002u; // 801067B0
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801067B4
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 801067B8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801067BC
  c->r[3]=c->r[29]+c->r[3]; // 801067C0
  c->r[4]=sraw(c,c->r[4],(c->r[6])&63); // 801067C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801067C8
  c->r[0]=sraw(c,c->r[0],(c->r[7])&63); // 801067CC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801067D0
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801067D4
  W16(c->r[31]+0x0000001Cu,c->r[0]); // 801067D8
  c->lr=0x801067E0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801067DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801067E0
  c->lr=c->r[0]; // 801067E4
  c->r[1]=c->r[1]+0x00000040u; // 801067E8
  return; // 801067EC
}

// GXInitTexObjCI
void f_801067F0(Ctx* __restrict c) {
  trace_call(0x801067F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801067F0
  c->r[0]=c->lr; // 801067F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801067F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801067FC
  c->r[31]=R32(c->r[1]+0x00000018u); // 80106800
  W32(c->r[1]+0x00000008u,c->r[30]); // 80106804
  c->r[30]=c->r[3]|c->r[3]; // 80106808
  c->lr=0x80106810u; f_801065E4(c); // 8010680C
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 80106810
  W32(c->r[30]+0x00000018u,c->r[31]); // 80106814
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80106818
  W8(c->r[30]+0x0000001Fu,c->r[0]); // 8010681C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80106820
  c->r[30]=R32(c->r[1]+0x00000008u); // 80106824
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106828
  c->lr=c->r[0]; // 8010682C
  c->r[1]=c->r[1]+0x00000010u; // 80106830
  return; // 80106834
}

// GXInitTexObjLOD
void f_80106838(Ctx* __restrict c) {
  trace_call(0x80106838u);
  {uint32_t ea=c->r[2]+0xFFFF8D08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106838
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010683C
  fcmp(c,0,c->f[3],c->f[0]); // 80106840
  if (!crb(c,0)) { goto L_80106850; } // 80106844
  c->f[3]=c->f[0]; // 80106848
  goto L_80106864; // 8010684C
L_80106850:;
  {uint32_t ea=c->r[2]+0xFFFF8D10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106850
  fcmp(c,0,c->f[3],c->f[0]); // 80106854
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80106858
  if (!crb(c,2)) { goto L_80106864; } // 8010685C
  {uint32_t ea=c->r[2]+0xFFFF8D0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80106860
L_80106864:;
  {uint32_t ea=c->r[2]+0xFFFF8D14u; c->f[4]=c->ps1[4]=RF32(ea);} // 80106864
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80106868
  c->r[9]=cntlz(c->r[0]); // 8010686C
  {uint32_t ea=c->r[2]+0xFFFF8D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106870
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80106874
  c->r[0]=cntlz(c->r[7]); // 80106878
  c->r[10]=R32(c->r[3]+0x00000000u); // 8010687C
  c->r[5]=c->r[13]+0xFFFF8C08u; // 80106880
  fcmp(c,0,c->f[1],c->f[0]); // 80106884
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80106888
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[3]);} // 8010688C
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80106890
  c->r[10]=(rotl(c->r[7],9)&0x0001FE00u)|(c->r[10]&~0x0001FE00u); // 80106894
  c->r[10]=(rotl(c->r[9],31)&0x00000010u)|(c->r[10]&~0x00000010u); // 80106898
  W32(c->r[3]+0x00000000u,c->r[10]); // 8010689C
  c->r[4]=R8(c->r[5]+c->r[4]); // 801068A0
  c->r[10]=(rotl(c->r[4],5)&0x000000E0u)|(c->r[10]&~0x000000E0u); // 801068A4
  c->r[10]=(rotl(c->r[0],3)&0x00000100u)|(c->r[10]&~0x00000100u); // 801068A8
  c->r[0]=rotl(c->r[10],0)&0xFFF9FFFFu; // 801068AC
  c->r[0]=(rotl(c->r[8],19)&0x00180000u)|(c->r[0]&~0x00180000u); // 801068B0
  c->r[0]=(rotl(c->r[6],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 801068B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801068B8
  if (!crb(c,0)) { goto L_801068C8; } // 801068BC
  c->f[1]=c->f[0]; // 801068C0
  goto L_801068D8; // 801068C4
L_801068C8:;
  {uint32_t ea=c->r[2]+0xFFFF8D1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801068C8
  fcmp(c,0,c->f[1],c->f[0]); // 801068CC
  if (!crb(c,1)) { goto L_801068D8; } // 801068D0
  c->f[1]=c->f[0]; // 801068D4
L_801068D8:;
  {uint32_t ea=c->r[2]+0xFFFF8CF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801068D8
  {uint32_t ea=c->r[2]+0xFFFF8D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801068DC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801068E0
  fcmp(c,0,c->f[2],c->f[0]); // 801068E4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801068E8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801068EC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801068F0
  if (!crb(c,0)) { goto L_80106900; } // 801068F4
  c->f[2]=c->f[0]; // 801068F8
  goto L_80106910; // 801068FC
L_80106900:;
  {uint32_t ea=c->r[2]+0xFFFF8D1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80106900
  fcmp(c,0,c->f[2],c->f[0]); // 80106904
  if (!crb(c,1)) { goto L_80106910; } // 80106908
  c->f[2]=c->f[0]; // 8010690C
L_80106910:;
  {uint32_t ea=c->r[2]+0xFFFF8CF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106910
  c->r[0]=R32(c->r[3]+0x00000004u); // 80106914
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 80106918
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8010691C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80106920
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80106924
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80106928
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8010692C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106930
  c->r[1]=c->r[1]+0x00000010u; // 80106934
  return; // 80106938
}

// GXInitTexObjWrapMode
void f_8010693C(Ctx* __restrict c) {
  trace_call(0x8010693Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010693C
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 80106940
  c->r[0]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 80106944
  W32(c->r[3]+0x00000000u,c->r[0]); // 80106948
  return; // 8010694C
}

// GXInitTexObjTlut
void f_80106950(Ctx* __restrict c) {
  trace_call(0x80106950u);
  W32(c->r[3]+0x00000018u,c->r[4]); // 80106950
  return; // 80106954
}

// GXInitTexObjFilter
void f_80106958(Ctx* __restrict c) {
  trace_call(0x80106958u);
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80106958
  c->r[6]=R32(c->r[3]+0x00000000u); // 8010695C
  c->r[0]=cntlz(c->r[0]); // 80106960
  c->r[5]=c->r[13]+0xFFFF8C08u; // 80106964
  c->r[6]=(rotl(c->r[0],31)&0x00000010u)|(c->r[6]&~0x00000010u); // 80106968
  W32(c->r[3]+0x00000000u,c->r[6]); // 8010696C
  c->r[0]=R8(c->r[5]+c->r[4]); // 80106970
  c->r[6]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[6]&~0x000000E0u); // 80106974
  W32(c->r[3]+0x00000000u,c->r[6]); // 80106978
  return; // 8010697C
}

// GXInitTexObjUserData
void f_80106980(Ctx* __restrict c) {
  trace_call(0x80106980u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 80106980
  return; // 80106984
}

// GXGetTexObjUserData
void f_80106988(Ctx* __restrict c) {
  trace_call(0x80106988u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80106988
  return; // 8010698C
}

// GXGetTexObjWidth
void f_80106990(Ctx* __restrict c) {
  trace_call(0x80106990u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 80106990
  c->r[3]=rotl(c->r[0],0)&0x000003FFu; // 80106994
  c->r[0]=c->r[3]+0x00000001u; // 80106998
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8010699C
  return; // 801069A0
}

// GXGetTexObjHeight
void f_801069A4(Ctx* __restrict c) {
  trace_call(0x801069A4u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 801069A4
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 801069A8
  c->r[0]=c->r[3]+0x00000001u; // 801069AC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801069B0
  return; // 801069B4
}

// GXGetTexObjFmt
void f_801069B8(Ctx* __restrict c) {
  trace_call(0x801069B8u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 801069B8
  return; // 801069BC
}

// GXGetTexObjWrapS
void f_801069C0(Ctx* __restrict c) {
  trace_call(0x801069C0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801069C0
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 801069C4
  return; // 801069C8
}

// GXGetTexObjWrapT
void f_801069CC(Ctx* __restrict c) {
  trace_call(0x801069CCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801069CC
  c->r[3]=rotl(c->r[0],30)&0x00000003u; // 801069D0
  return; // 801069D4
}

// GXGetTexObjMipMap
void f_801069D8(Ctx* __restrict c) {
  trace_call(0x801069D8u);
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 801069D8
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801069DC
  return; // 801069E0
}

// GXGetTexObjLODAll
void f_801069E4(Ctx* __restrict c) {
  trace_call(0x801069E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801069E4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801069E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801069EC
  c->r[31]=0u+0x43300000u; // 801069F0
  c->r[11]=rotl(c->r[0],0)&0x000000FFu; // 801069F4
  {uint32_t ea=c->r[2]+0xFFFF8D00u; c->f[5]=RF64(ea);} // 801069F8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801069FC
  {uint32_t ea=c->r[2]+0xFFFF8D20u; c->f[3]=c->ps1[3]=RF32(ea);} // 80106A00
  W32(c->r[1]+0x00000024u,c->r[29]); // 80106A04
  c->r[29]=c->r[13]+0xFFFF8C10u; // 80106A08
  {uint32_t ea=c->r[2]+0xFFFF8D28u; c->f[2]=RF64(ea);} // 80106A0C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80106A10
  c->r[28]=R32(c->r[3]+0x00000000u); // 80106A14
  c->r[3]=rotl(c->r[0],24)&0x000000FFu; // 80106A18
  W32(c->r[1]+0x0000000Cu,c->r[11]); // 80106A1C
  c->r[0]=rotl(c->r[28],23)&0x000000FFu; // 80106A20
  c->r[11]=rotl(c->r[28],27)&0x00000007u; // 80106A24
  W32(c->r[1]+0x00000008u,c->r[31]); // 80106A28
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80106A2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80106A30
  c->r[29]=R8(c->r[29]+c->r[11]); // 80106A34
  c->r[12]=c->r[0]^0x80000000u; // 80106A38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80106A3C
  W32(c->r[1]+0x00000014u,c->r[3]); // 80106A40
  c->r[0]=rotl(c->r[28],24)&0x00000001u; // 80106A44
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 80106A48
  c->r[0]=cntlz(c->r[0]); // 80106A4C
  W32(c->r[1]+0x00000010u,c->r[31]); // 80106A50
  c->r[30]=rotl(c->r[28],28)&0x00000001u; // 80106A54
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 80106A58
  c->r[11]=rotl(c->r[28],11)&0x00000001u; // 80106A5C
  W32(c->r[4]+0x00000000u,c->r[29]); // 80106A60
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[3]); // 80106A64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80106A68
  c->r[0]=rotl(c->r[28],13)&0x00000003u; // 80106A6C
  W32(c->r[5]+0x00000000u,c->r[30]); // 80106A70
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 80106A74
  {uint32_t ea=c->r[2]+0xFFFF8D24u; c->f[0]=c->ps1[0]=RF32(ea);} // 80106A78
  W32(c->r[1]+0x0000001Cu,c->r[12]); // 80106A7C
  c->r[4]=R32(c->r[1]+0x00000038u); // 80106A80
  W32(c->r[1]+0x00000018u,c->r[31]); // 80106A84
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80106A88
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80106A8C
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[4]);} // 80106A90
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80106A94
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[3]);} // 80106A98
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80106A9C
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 80106AA0
  W8(c->r[9]+0x00000000u,c->r[11]); // 80106AA4
  W8(c->r[10]+0x00000000u,c->r[3]); // 80106AA8
  W32(c->r[4]+0x00000000u,c->r[0]); // 80106AAC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80106AB0
  c->r[30]=R32(c->r[1]+0x00000028u); // 80106AB4
  c->r[29]=R32(c->r[1]+0x00000024u); // 80106AB8
  c->r[28]=R32(c->r[1]+0x00000020u); // 80106ABC
  c->r[1]=c->r[1]+0x00000030u; // 80106AC0
  return; // 80106AC4
}

// GXGetTexObjTlut
void f_80106AC8(Ctx* __restrict c) {
  trace_call(0x80106AC8u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80106AC8
  return; // 80106ACC
}

// GXLoadTexObjPreLoaded
void f_80106AD0(Ctx* __restrict c) {
  trace_call(0x80106AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106AD0
  c->r[0]=c->lr; // 80106AD4
  c->r[11]=c->r[13]+0xFFFF8BD0u; // 80106AD8
  c->r[10]=c->r[13]+0xFFFF8BD8u; // 80106ADC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80106AE0
  c->r[9]=c->r[13]+0xFFFF8BE0u; // 80106AE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106AE8
  c->r[8]=c->r[13]+0xFFFF8BE8u; // 80106AEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80106AF0
  c->r[7]=c->r[13]+0xFFFF8BF0u; // 80106AF4
  c->r[6]=c->r[13]+0xFFFF8BF8u; // 80106AF8
  c->r[31]=c->r[5]|c->r[5]; // 80106AFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80106B00
  c->r[30]=c->r[3]|c->r[3]; // 80106B04
  W32(c->r[1]+0x00000014u,c->r[29]); // 80106B08
  c->r[29]=0u+0xCC010000u; // 80106B0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80106B10
  c->r[28]=0u+0x00000061u; // 80106B14
  c->r[0]=R8(c->r[11]+c->r[5]); // 80106B18
  c->r[11]=R32(c->r[3]+0x00000004u); // 80106B1C
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 80106B20
  c->r[0]=R8(c->r[10]+c->r[5]); // 80106B24
  c->r[10]=R8(c->r[9]+c->r[5]); // 80106B28
  c->r[11]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 80106B2C
  c->r[0]=R8(c->r[7]+c->r[5]); // 80106B30
  c->r[8]=R8(c->r[8]+c->r[5]); // 80106B34
  c->r[5]=R8(c->r[6]+c->r[5]); // 80106B38
  c->r[9]=R32(c->r[3]+0x00000008u); // 80106B3C
  c->r[9]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 80106B40
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80106B44
  c->r[7]=R32(c->r[4]+0x00000000u); // 80106B48
  c->r[7]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80106B4C
  W32(c->r[29]+0xFFFF8000u,c->r[12]); // 80106B50
  c->r[6]=R32(c->r[4]+0x00000004u); // 80106B54
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80106B58
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80106B5C
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 80106B60
  W32(c->r[29]+0xFFFF8000u,c->r[11]); // 80106B64
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80106B68
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80106B6C
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80106B70
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80106B74
  W32(c->r[29]+0xFFFF8000u,c->r[9]); // 80106B78
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80106B7C
  W32(c->r[29]+0xFFFF8000u,c->r[7]); // 80106B80
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80106B84
  W32(c->r[29]+0xFFFF8000u,c->r[6]); // 80106B88
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80106B8C
  W32(c->r[3]+0x00000000u,c->r[12]); // 80106B90
  W32(c->r[3]+0x00000004u,c->r[11]); // 80106B94
  W32(c->r[3]+0x00000008u,c->r[9]); // 80106B98
  W32(c->r[4]+0x00000000u,c->r[7]); // 80106B9C
  W32(c->r[4]+0x00000004u,c->r[6]); // 80106BA0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80106BA4
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 80106BA8
  if (!crb(c,2)) { goto L_80106BE4; } // 80106BAC
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80106BB0
  c->r[3]=R32(c->r[3]+0x00000018u); // 80106BB4
  c->r[12]=R32(c->r[4]+0x0000051Cu); // 80106BB8
  c->ctr=c->r[12]; // 80106BBC
  if (true) { c->lr=0x80106BC4u; dispatch(c,c->ctr); } // 80106BC0
  c->r[4]=c->r[13]+0xFFFF8C00u; // 80106BC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80106BC8
  c->r[4]=R8(c->r[4]+c->r[31]); // 80106BCC
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80106BD0
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106BD4
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 80106BD8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80106BDC
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 80106BE0
L_80106BE4:;
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80106BE4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80106BE8
  c->r[5]=R32(c->r[30]+0x00000008u); // 80106BEC
  c->r[0]=0u+0x00000000u; // 80106BF0
  c->r[4]=c->r[6]+c->r[3]; // 80106BF4
  c->r[3]=R32(c->r[30]+0x00000000u); // 80106BF8
  W32(c->r[4]+0x00000564u,c->r[5]); // 80106BFC
  W32(c->r[4]+0x00000584u,c->r[3]); // 80106C00
  c->r[3]=R32(c->r[6]+0x000005FCu); // 80106C04
  c->r[3]=c->r[3]|0x00000001u; // 80106C08
  W32(c->r[6]+0x000005FCu,c->r[3]); // 80106C0C
  W16(c->r[6]+0x00000002u,c->r[0]); // 80106C10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80106C14
  c->r[30]=R32(c->r[1]+0x00000018u); // 80106C18
  c->r[29]=R32(c->r[1]+0x00000014u); // 80106C1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80106C20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80106C24
  c->lr=c->r[0]; // 80106C28
  c->r[1]=c->r[1]+0x00000020u; // 80106C2C
  return; // 80106C30
}

// GXLoadTexObj
void f_80106C34(Ctx* __restrict c) {
  trace_call(0x80106C34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106C34
  c->r[0]=c->lr; // 80106C38
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80106C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106C40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80106C44
  c->r[31]=c->r[4]|c->r[4]; // 80106C48
  W32(c->r[1]+0x00000008u,c->r[30]); // 80106C4C
  c->r[30]=c->r[3]|c->r[3]; // 80106C50
  c->r[12]=R32(c->r[5]+0x00000518u); // 80106C54
  c->ctr=c->r[12]; // 80106C58
  if (true) { c->lr=0x80106C60u; dispatch(c,c->ctr); } // 80106C5C
  c->r[4]=c->r[3]|c->r[3]; // 80106C60
  c->r[3]=c->r[30]|c->r[30]; // 80106C64
  c->r[5]=c->r[31]|c->r[31]; // 80106C68
  c->lr=0x80106C70u; f_80106AD0(c); // 80106C6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106C70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80106C74
  c->r[30]=R32(c->r[1]+0x00000008u); // 80106C78
  c->lr=c->r[0]; // 80106C7C
  c->r[1]=c->r[1]+0x00000010u; // 80106C80
  return; // 80106C84
}

// GXInitTlutObj
void f_80106C88(Ctx* __restrict c) {
  trace_call(0x80106C88u);
  c->r[7]=R32(c->r[3]+0x00000004u); // 80106C88
  c->r[0]=0u+0x00000064u; // 80106C8C
  c->r[7]=(rotl(c->r[4],27)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 80106C90
  c->r[4]=0u+0x00000000u; // 80106C94
  c->r[4]=(rotl(c->r[5],10)&0x00000C00u)|(c->r[4]&~0x00000C00u); // 80106C98
  W16(c->r[3]+0x00000008u,c->r[6]); // 80106C9C
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80106CA0
  W32(c->r[3]+0x00000000u,c->r[4]); // 80106CA4
  W32(c->r[3]+0x00000004u,c->r[7]); // 80106CA8
  return; // 80106CAC
}

// GXLoadTlut
void f_80106CB0(Ctx* __restrict c) {
  trace_call(0x80106CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106CB0
  c->r[0]=c->lr; // 80106CB4
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80106CB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106CBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80106CC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80106CC4
  c->r[30]=c->r[3]|c->r[3]; // 80106CC8
  c->r[3]=c->r[4]|c->r[4]; // 80106CCC
  c->r[12]=R32(c->r[5]+0x0000051Cu); // 80106CD0
  c->ctr=c->r[12]; // 80106CD4
  if (true) { c->lr=0x80106CDCu; dispatch(c,c->ctr); } // 80106CD8
  c->r[31]=c->r[3]|c->r[3]; // 80106CDC
  c->lr=0x80106CE4u; f_801077FC(c); // 80106CE0
  c->r[3]=0u+0xCC010000u; // 80106CE4
  c->r[4]=0u+0x00000061u; // 80106CE8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80106CEC
  c->r[0]=R32(c->r[30]+0x00000004u); // 80106CF0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80106CF4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80106CF8
  c->r[0]=R32(c->r[31]+0x00000000u); // 80106CFC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80106D00
  c->lr=0x80106D08u; f_801077FC(c); // 80106D04
  c->r[0]=R32(c->r[31]+0x00000000u); // 80106D08
  c->r[4]=R32(c->r[30]+0x00000000u); // 80106D0C
  c->r[4]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 80106D10
  c->r[3]=R32(c->r[30]+0x00000004u); // 80106D14
  W32(c->r[31]+0x00000004u,c->r[4]); // 80106D18
  c->r[0]=R32(c->r[30]+0x00000008u); // 80106D1C
  W32(c->r[31]+0x00000008u,c->r[3]); // 80106D20
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80106D24
  W32(c->r[30]+0x00000000u,c->r[4]); // 80106D28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80106D2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80106D30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106D34
  c->lr=c->r[0]; // 80106D38
  c->r[1]=c->r[1]+0x00000010u; // 80106D3C
  return; // 80106D40
}

// GXInitTexCacheRegion
void f_80106D44(Ctx* __restrict c) {
  trace_call(0x80106D44u);
  cmps(c,0,(int32_t)c->r[6],1); // 80106D44
  if (crb(c,2)) { goto L_80106D70; } // 80106D48
  if (!crb(c,0)) { goto L_80106D5C; } // 80106D4C
  cmps(c,0,(int32_t)c->r[6],0); // 80106D50
  if (!crb(c,0)) { goto L_80106D68; } // 80106D54
  goto L_80106D7C; // 80106D58
L_80106D5C:;
  cmps(c,0,(int32_t)c->r[6],3); // 80106D5C
  if (!crb(c,0)) { goto L_80106D7C; } // 80106D60
  goto L_80106D78; // 80106D64
L_80106D68:;
  c->r[6]=0u+0x00000003u; // 80106D68
  goto L_80106D7C; // 80106D6C
L_80106D70:;
  c->r[6]=0u+0x00000004u; // 80106D70
  goto L_80106D7C; // 80106D74
L_80106D78:;
  c->r[6]=0u+0x00000005u; // 80106D78
L_80106D7C:;
  c->r[0]=0u+0x00000000u; // 80106D7C
  cmps(c,0,(int32_t)c->r[8],2); // 80106D80
  c->r[0]=(rotl(c->r[5],27)&0x00007FFFu)|(c->r[0]&~0x00007FFFu); // 80106D84
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80106D88
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 80106D8C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80106D90
  if (crb(c,2)) { goto L_80106DC8; } // 80106D94
  if (!crb(c,0)) { goto L_80106DAC; } // 80106D98
  cmps(c,0,(int32_t)c->r[8],0); // 80106D9C
  if (crb(c,2)) { goto L_80106DB8; } // 80106DA0
  if (!crb(c,0)) { goto L_80106DC0; } // 80106DA4
  goto L_80106DD4; // 80106DA8
L_80106DAC:;
  cmps(c,0,(int32_t)c->r[8],4); // 80106DAC
  if (!crb(c,0)) { goto L_80106DD4; } // 80106DB0
  goto L_80106DD0; // 80106DB4
L_80106DB8:;
  c->r[6]=0u+0x00000003u; // 80106DB8
  goto L_80106DD4; // 80106DBC
L_80106DC0:;
  c->r[6]=0u+0x00000004u; // 80106DC0
  goto L_80106DD4; // 80106DC4
L_80106DC8:;
  c->r[6]=0u+0x00000005u; // 80106DC8
  goto L_80106DD4; // 80106DCC
L_80106DD0:;
  c->r[6]=0u+0x00000000u; // 80106DD0
L_80106DD4:;
  c->r[5]=0u+0x00000000u; // 80106DD4
  c->r[0]=0u+0x00000001u; // 80106DD8
  c->r[5]=(rotl(c->r[7],27)&0x00007FFFu)|(c->r[5]&~0x00007FFFu); // 80106DDC
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 80106DE0
  c->r[5]=(rotl(c->r[6],15)&0x00038000u)|(c->r[5]&~0x00038000u); // 80106DE4
  c->r[5]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[5]&~0x001C0000u); // 80106DE8
  W8(c->r[3]+0x0000000Du,c->r[0]); // 80106DEC
  W32(c->r[3]+0x00000004u,c->r[5]); // 80106DF0
  return; // 80106DF4
}

// GXInitTlutRegion
void f_80106DF8(Ctx* __restrict c) {
  trace_call(0x80106DF8u);
  c->r[0]=c->r[4]+0xFFF80000u; // 80106DF8
  c->r[4]=0u+0x00000000u; // 80106DFC
  c->r[4]=(rotl(c->r[0],23)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 80106E00
  c->r[0]=0u+0x00000065u; // 80106E04
  c->r[4]=(rotl(c->r[5],10)&0x001FFC00u)|(c->r[4]&~0x001FFC00u); // 80106E08
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80106E0C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80106E10
  return; // 80106E14
}

// GXInvalidateTexAll
void f_80106E18(Ctx* __restrict c) {
  trace_call(0x80106E18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106E18
  c->r[0]=c->lr; // 80106E1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106E20
  c->lr=0x80106E28u; f_801077FC(c); // 80106E24
  c->r[4]=0u+0xCC010000u; // 80106E28
  c->r[5]=0u+0x00000061u; // 80106E2C
  c->r[3]=0u+0x66000000u; // 80106E30
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80106E34
  c->r[0]=c->r[3]+0x00001000u; // 80106E38
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80106E3C
  c->r[0]=c->r[3]+0x00001100u; // 80106E40
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80106E44
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80106E48
  c->lr=0x80106E50u; f_801077FC(c); // 80106E4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106E50
  c->lr=c->r[0]; // 80106E54
  c->r[1]=c->r[1]+0x00000010u; // 80106E58
  return; // 80106E5C
}

// GXSetTexRegionCallback
void f_80106E60(Ctx* __restrict c) {
  trace_call(0x80106E60u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80106E60
  c->r[0]=c->r[3]|c->r[3]; // 80106E64
  c->r[3]=R32(c->r[4]+0x00000518u); // 80106E68
  W32(c->r[4]+0x00000518u,c->r[0]); // 80106E6C
  return; // 80106E70
}

// GXSetTlutRegionCallback
void f_80106E74(Ctx* __restrict c) {
  trace_call(0x80106E74u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80106E74
  c->r[0]=c->r[3]|c->r[3]; // 80106E78
  c->r[3]=R32(c->r[4]+0x0000051Cu); // 80106E7C
  W32(c->r[4]+0x0000051Cu,c->r[0]); // 80106E80
  return; // 80106E84
}

// __SetSURegs
void f_80106E88(Ctx* __restrict c) {
  trace_call(0x80106E88u);
  c->r[11]=R32(c->r[2]+0xFFFF8C88u); // 80106E88
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80106E8C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80106E90
  c->r[5]=0u+0xCC010000u; // 80106E94
  c->r[10]=c->r[11]+c->r[0]; // 80106E98
  c->r[9]=c->r[11]+c->r[6]; // 80106E9C
  c->r[3]=R32(c->r[10]+0x00000564u); // 80106EA0
  c->r[4]=0u+0x00000061u; // 80106EA4
  c->r[8]=R32(c->r[9]+0x00000108u); // 80106EA8
  c->r[0]=0u+0x00000000u; // 80106EAC
  c->r[6]=rotl(c->r[3],0)&0x000003FFu; // 80106EB0
  c->r[3]=rotl(c->r[3],22)&0x000003FFu; // 80106EB4
  c->r[8]=(rotl(c->r[6],0)&0x0000FFFFu)|(c->r[8]&~0x0000FFFFu); // 80106EB8
  W32(c->r[9]+0x00000108u,c->r[8]); // 80106EBC
  c->r[7]=R32(c->r[9]+0x00000128u); // 80106EC0
  c->r[7]=(rotl(c->r[3],0)&0x0000FFFFu)|(c->r[7]&~0x0000FFFFu); // 80106EC4
  W32(c->r[9]+0x00000128u,c->r[7]); // 80106EC8
  c->r[3]=R32(c->r[10]+0x00000584u); // 80106ECC
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 80106ED0
  c->r[3]=rotl(c->r[3],30)&0x00000003u; // 80106ED4
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80106ED8
  c->r[6]=cntlz(c->r[6]); // 80106EDC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80106EE0
  c->r[8]=(rotl(c->r[6],11)&0x00010000u)|(c->r[8]&~0x00010000u); // 80106EE4
  c->r[3]=cntlz(c->r[3]); // 80106EE8
  W32(c->r[9]+0x00000108u,c->r[8]); // 80106EEC
  c->r[7]=(rotl(c->r[3],11)&0x00010000u)|(c->r[7]&~0x00010000u); // 80106EF0
  W32(c->r[9]+0x00000128u,c->r[7]); // 80106EF4
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 80106EF8
  c->r[3]=R32(c->r[9]+0x00000108u); // 80106EFC
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80106F00
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 80106F04
  c->r[3]=R32(c->r[9]+0x00000128u); // 80106F08
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80106F0C
  W16(c->r[11]+0x00000002u,c->r[0]); // 80106F10
  return; // 80106F14
}

// __GXSetSUTexRegs
void f_80106F18(Ctx* __restrict c) {
  trace_call(0x80106F18u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106F18
  c->r[0]=c->lr; // 80106F1C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80106F20
  c->r[11]=c->r[1]+0x00000030u; // 80106F24
  c->lr=0x80106F2Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80106F28
  c->r[29]=R32(c->r[2]+0xFFFF8C88u); // 80106F2C
  c->r[0]=R32(c->r[29]+0x000005E4u); // 80106F30
  cmpu(c,0,c->r[0],0x000000FFu); // 80106F34
  if (crb(c,2)) { goto L_80107068; } // 80106F38
  c->r[0]=R32(c->r[29]+0x00000254u); // 80106F3C
  c->r[28]=0u+0x00000000u; // 80106F40
  c->r[23]=0u+0x00000001u; // 80106F44
  c->r[3]=rotl(c->r[0],22)&0x0000000Fu; // 80106F48
  c->r[27]=rotl(c->r[0],16)&0x00000007u; // 80106F4C
  c->r[26]=c->r[3]+0x00000001u; // 80106F50
  goto L_80106FDC; // 80106F54
L_80106F58:;
  cmps(c,0,(int32_t)c->r[28],2); // 80106F58
  if (crb(c,2)) { goto L_80106FA0; } // 80106F5C
  if (!crb(c,0)) { goto L_80106F74; } // 80106F60
  cmps(c,0,(int32_t)c->r[28],0); // 80106F64
  if (crb(c,2)) { goto L_80106F80; } // 80106F68
  if (!crb(c,0)) { goto L_80106F90; } // 80106F6C
  goto L_80106FBC; // 80106F70
L_80106F74:;
  cmps(c,0,(int32_t)c->r[28],4); // 80106F74
  if (!crb(c,0)) { goto L_80106FBC; } // 80106F78
  goto L_80106FB0; // 80106F7C
L_80106F80:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 80106F80
  c->r[25]=rotl(c->r[0],0)&0x00000007u; // 80106F84
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 80106F88
  goto L_80106FBC; // 80106F8C
L_80106F90:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 80106F90
  c->r[25]=rotl(c->r[0],26)&0x00000007u; // 80106F94
  c->r[24]=rotl(c->r[0],23)&0x00000007u; // 80106F98
  goto L_80106FBC; // 80106F9C
L_80106FA0:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 80106FA0
  c->r[25]=rotl(c->r[0],20)&0x00000007u; // 80106FA4
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 80106FA8
  goto L_80106FBC; // 80106FAC
L_80106FB0:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 80106FB0
  c->r[25]=rotl(c->r[0],14)&0x00000007u; // 80106FB4
  c->r[24]=rotl(c->r[0],11)&0x00000007u; // 80106FB8
L_80106FBC:;
  c->r[3]=R32(c->r[29]+0x000005E4u); // 80106FBC
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 80106FC0
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80106FC4
  if (!crb(c,2)) { goto L_80106FD8; } // 80106FC8
  c->r[3]=c->r[25]|c->r[25]; // 80106FCC
  c->r[4]=c->r[24]|c->r[24]; // 80106FD0
  c->lr=0x80106FD8u; f_80106E88(c); // 80106FD4
L_80106FD8:;
  c->r[28]=c->r[28]+0x00000001u; // 80106FD8
L_80106FDC:;
  cmpu(c,0,c->r[28],c->r[27]); // 80106FDC
  if (crb(c,0)) { IRQCHK(c); goto L_80106F58; } // 80106FE0
  c->r[28]=R32(c->r[2]+0xFFFF8C88u); // 80106FE4
  c->r[27]=0u+0x00000000u; // 80106FE8
  c->r[23]=0u+0x00000001u; // 80106FEC
  c->r[31]=c->r[28]|c->r[28]; // 80106FF0
  c->r[30]=c->r[28]+0x00000150u; // 80106FF4
  goto L_80107060; // 80106FF8
L_80106FFC:;
  c->r[0]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[0]); // 80106FFC
  c->r[0]=R32(c->r[31]+0x000005A4u); // 80107000
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFCu; // 80107004
  c->r[25]=rotl(c->r[0],0)&0xFFFFFEFFu; // 80107008
  if (crb(c,2)) { goto L_8010701C; } // 8010700C
  c->r[0]=R32(c->r[30]+c->r[3]); // 80107010
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 80107014
  goto L_80107024; // 80107018
L_8010701C:;
  c->r[0]=R32(c->r[30]+c->r[3]); // 8010701C
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 80107020
L_80107024:;
  cmpu(c,0,c->r[25],0x000000FFu); // 80107024
  if (crb(c,2)) { goto L_80107058; } // 80107028
  c->r[3]=R32(c->r[29]+0x000005E4u); // 8010702C
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 80107030
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80107034
  if (!crb(c,2)) { goto L_80107058; } // 80107038
  c->r[3]=R32(c->r[28]+0x000005E8u); // 8010703C
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[23]<<((c->r[27])&31)); // 80107040
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80107044
  if (crb(c,2)) { goto L_80107058; } // 80107048
  c->r[3]=c->r[25]|c->r[25]; // 8010704C
  c->r[4]=c->r[24]|c->r[24]; // 80107050
  c->lr=0x80107058u; f_80106E88(c); // 80107054
L_80107058:;
  c->r[31]=c->r[31]+0x00000004u; // 80107058
  c->r[27]=c->r[27]+0x00000001u; // 8010705C
L_80107060:;
  cmpu(c,0,c->r[27],c->r[26]); // 80107060
  if (crb(c,0)) { IRQCHK(c); goto L_80106FFC; } // 80107064
L_80107068:;
  c->r[11]=c->r[1]+0x00000030u; // 80107068
  c->lr=0x80107070u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010706C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80107070
  c->lr=c->r[0]; // 80107074
  c->r[1]=c->r[1]+0x00000030u; // 80107078
  return; // 8010707C
}

// __GXSetTmemConfig
void f_80107080(Ctx* __restrict c) {
  trace_call(0x80107080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107080
  cmps(c,0,(int32_t)c->r[3],1); // 80107084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107088
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010708C
  if (crb(c,2)) { goto L_801071B0; } // 80107090
  if (!crb(c,0)) { goto L_8010709C; } // 80107094
  goto L_801072BC; // 80107098
L_8010709C:;
  cmps(c,0,(int32_t)c->r[3],3); // 8010709C
  if (!crb(c,0)) { goto L_801072BC; } // 801070A0
  c->r[3]=0u+0xCC010000u; // 801070A4
  c->r[0]=0u+0x00000061u; // 801070A8
  c->r[4]=0u+0x8C0E0000u; // 801070AC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801070B0
  c->r[4]=c->r[4]+0xFFFF8000u; // 801070B4
  c->r[5]=0u+0x900E0000u; // 801070B8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801070BC
  c->r[4]=0u+0x8D0E0000u; // 801070C0
  c->r[31]=0u+0x910E0000u; // 801070C4
  c->r[30]=0u+0x8E0E0000u; // 801070C8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801070CC
  c->r[5]=c->r[5]+0xFFFFC000u; // 801070D0
  c->r[12]=0u+0x920E0000u; // 801070D4
  c->r[11]=0u+0x8F0E0000u; // 801070D8
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801070DC
  c->r[10]=0u+0x930E0000u; // 801070E0
  c->r[9]=0u+0xAC0E0000u; // 801070E4
  c->r[8]=0u+0xB00E0000u; // 801070E8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801070EC
  c->r[4]=c->r[4]+0xFFFF8800u; // 801070F0
  c->r[7]=0u+0xAD0E0000u; // 801070F4
  c->r[6]=0u+0xB10E0000u; // 801070F8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801070FC
  c->r[5]=0u+0xAE0E0000u; // 80107100
  c->r[4]=0u+0xB20E0000u; // 80107104
  c->r[31]=c->r[31]+0xFFFFC800u; // 80107108
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010710C
  c->r[30]=c->r[30]+0xFFFF9000u; // 80107110
  c->r[12]=c->r[12]+0xFFFFD000u; // 80107114
  c->r[11]=c->r[11]+0xFFFF9800u; // 80107118
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 8010711C
  c->r[10]=c->r[10]+0xFFFFD800u; // 80107120
  c->r[9]=c->r[9]+0xFFFFA000u; // 80107124
  c->r[8]=c->r[8]+0xFFFFC400u; // 80107128
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010712C
  c->r[7]=c->r[7]+0xFFFFA800u; // 80107130
  c->r[6]=c->r[6]+0xFFFFCC00u; // 80107134
  c->r[5]=c->r[5]+0xFFFFB000u; // 80107138
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 8010713C
  c->r[4]=c->r[4]+0xFFFFD400u; // 80107140
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107144
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 80107148
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010714C
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 80107150
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107154
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 80107158
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010715C
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 80107160
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107164
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 80107168
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010716C
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 80107170
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107174
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80107178
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010717C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80107180
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107184
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80107188
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010718C
  c->r[5]=0u+0xAF0E0000u; // 80107190
  c->r[4]=0u+0xB30E0000u; // 80107194
  c->r[5]=c->r[5]+0xFFFFB800u; // 80107198
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8010719C
  c->r[4]=c->r[4]+0xFFFFDC00u; // 801071A0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801071A4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801071A8
  goto L_801073C4; // 801071AC
L_801071B0:;
  c->r[3]=0u+0xCC010000u; // 801071B0
  c->r[0]=0u+0x00000061u; // 801071B4
  c->r[4]=0u+0x8C0E0000u; // 801071B8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801071BC
  c->r[4]=c->r[4]+0xFFFF8000u; // 801071C0
  c->r[5]=0u+0x900E0000u; // 801071C4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801071C8
  c->r[4]=0u+0x8D0E0000u; // 801071CC
  c->r[31]=0u+0x910E0000u; // 801071D0
  c->r[30]=0u+0x8E0E0000u; // 801071D4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801071D8
  c->r[5]=c->r[5]+0xFFFFC000u; // 801071DC
  c->r[12]=0u+0x920E0000u; // 801071E0
  c->r[11]=0u+0x8F0E0000u; // 801071E4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801071E8
  c->r[10]=0u+0x930E0000u; // 801071EC
  c->r[9]=0u+0xAC0E0000u; // 801071F0
  c->r[8]=0u+0xB00E0000u; // 801071F4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801071F8
  c->r[4]=c->r[4]+0xFFFF8800u; // 801071FC
  c->r[7]=0u+0xAD0E0000u; // 80107200
  c->r[6]=0u+0xB10E0000u; // 80107204
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80107208
  c->r[5]=0u+0xAE0E0000u; // 8010720C
  c->r[4]=0u+0xB20E0000u; // 80107210
  c->r[31]=c->r[31]+0xFFFFC800u; // 80107214
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107218
  c->r[30]=c->r[30]+0xFFFF9000u; // 8010721C
  c->r[12]=c->r[12]+0xFFFFD000u; // 80107220
  c->r[11]=c->r[11]+0xFFFF9800u; // 80107224
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80107228
  c->r[10]=c->r[10]+0xFFFFD800u; // 8010722C
  c->r[9]=c->r[9]+0xFFFFA000u; // 80107230
  c->r[8]=c->r[8]+0xFFFFE000u; // 80107234
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107238
  c->r[7]=c->r[7]+0xFFFFA800u; // 8010723C
  c->r[6]=c->r[6]+0xFFFFE800u; // 80107240
  c->r[5]=c->r[5]+0xFFFFB000u; // 80107244
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 80107248
  c->r[4]=c->r[4]+0xFFFFF000u; // 8010724C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107250
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 80107254
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107258
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8010725C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107260
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 80107264
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107268
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 8010726C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107270
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 80107274
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107278
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 8010727C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107280
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80107284
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107288
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 8010728C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107290
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80107294
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107298
  c->r[5]=0u+0xAF0E0000u; // 8010729C
  c->r[4]=0u+0xB30E0000u; // 801072A0
  c->r[5]=c->r[5]+0xFFFFB800u; // 801072A4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801072A8
  c->r[4]=c->r[4]+0xFFFFF800u; // 801072AC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801072B0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801072B4
  goto L_801073C4; // 801072B8
L_801072BC:;
  c->r[3]=0u+0xCC010000u; // 801072BC
  c->r[0]=0u+0x00000061u; // 801072C0
  c->r[4]=0u+0x8C0E0000u; // 801072C4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801072C8
  c->r[4]=c->r[4]+0xFFFF8000u; // 801072CC
  c->r[5]=0u+0x900E0000u; // 801072D0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801072D4
  c->r[4]=0u+0x8D0E0000u; // 801072D8
  c->r[30]=0u+0x910E0000u; // 801072DC
  c->r[31]=0u+0x8E0E0000u; // 801072E0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801072E4
  c->r[5]=c->r[5]+0xFFFFC000u; // 801072E8
  c->r[12]=0u+0x920E0000u; // 801072EC
  c->r[11]=0u+0x8F0E0000u; // 801072F0
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801072F4
  c->r[10]=0u+0x930E0000u; // 801072F8
  c->r[9]=0u+0xAC0E0000u; // 801072FC
  c->r[8]=0u+0xB00E0000u; // 80107300
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107304
  c->r[4]=c->r[4]+0xFFFF8400u; // 80107308
  c->r[7]=0u+0xAD0E0000u; // 8010730C
  c->r[6]=0u+0xB10E0000u; // 80107310
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 80107314
  c->r[5]=0u+0xAE0E0000u; // 80107318
  c->r[4]=0u+0xB20E0000u; // 8010731C
  c->r[30]=c->r[30]+0xFFFFC400u; // 80107320
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107324
  c->r[31]=c->r[31]+0xFFFF8800u; // 80107328
  c->r[12]=c->r[12]+0xFFFFC800u; // 8010732C
  c->r[11]=c->r[11]+0xFFFF8C00u; // 80107330
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 80107334
  c->r[10]=c->r[10]+0xFFFFCC00u; // 80107338
  c->r[9]=c->r[9]+0xFFFF9000u; // 8010733C
  c->r[8]=c->r[8]+0xFFFFD000u; // 80107340
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107344
  c->r[7]=c->r[7]+0xFFFF9400u; // 80107348
  c->r[6]=c->r[6]+0xFFFFD400u; // 8010734C
  c->r[5]=c->r[5]+0xFFFF9800u; // 80107350
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 80107354
  c->r[4]=c->r[4]+0xFFFFD800u; // 80107358
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010735C
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 80107360
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107364
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 80107368
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010736C
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 80107370
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107374
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 80107378
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010737C
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 80107380
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107384
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 80107388
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010738C
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 80107390
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107394
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80107398
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010739C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801073A0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801073A4
  c->r[5]=0u+0xAF0E0000u; // 801073A8
  c->r[4]=0u+0xB30E0000u; // 801073AC
  c->r[5]=c->r[5]+0xFFFF9C00u; // 801073B0
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801073B4
  c->r[4]=c->r[4]+0xFFFFDC00u; // 801073B8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801073BC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801073C0
L_801073C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801073C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801073C8
  c->r[1]=c->r[1]+0x00000010u; // 801073CC
  return; // 801073D0
}

// GXSetTevIndirect
void f_801073D4(Ctx* __restrict c) {
  trace_call(0x801073D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801073D4
  c->r[12]=0u+0x00000000u; // 801073D8
  c->r[12]=(rotl(c->r[4],0)&0x00000003u)|(c->r[12]&~0x00000003u); // 801073DC
  c->r[4]=c->r[3]+0x00000010u; // 801073E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801073E4
  c->r[12]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[12]&~0x0000000Cu); // 801073E8
  c->r[11]=0u+0xCC010000u; // 801073EC
  c->r[0]=0u+0x00000061u; // 801073F0
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 801073F4
  c->r[12]=(rotl(c->r[6],4)&0x00000070u)|(c->r[12]&~0x00000070u); // 801073F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801073FC
  c->r[0]=0u+0x00000000u; // 80107400
  c->r[5]=R8(c->r[1]+0x0000001Bu); // 80107404
  c->r[12]=(rotl(c->r[31],7)&0x00000180u)|(c->r[12]&~0x00000180u); // 80107408
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010740C
  c->r[12]=(rotl(c->r[7],9)&0x00001E00u)|(c->r[12]&~0x00001E00u); // 80107410
  c->r[12]=(rotl(c->r[8],13)&0x0000E000u)|(c->r[12]&~0x0000E000u); // 80107414
  c->r[12]=(rotl(c->r[9],16)&0x00070000u)|(c->r[12]&~0x00070000u); // 80107418
  c->r[12]=(rotl(c->r[5],19)&0x00080000u)|(c->r[12]&~0x00080000u); // 8010741C
  c->r[12]=(rotl(c->r[10],20)&0x00100000u)|(c->r[12]&~0x00100000u); // 80107420
  c->r[12]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 80107424
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 80107428
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010742C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107430
  c->r[1]=c->r[1]+0x00000010u; // 80107434
  return; // 80107438
}

// GXSetIndTexMtx
void f_8010743C(Ctx* __restrict c) {
  trace_call(0x8010743Cu);
  cmps(c,0,(int32_t)c->r[3],8); // 8010743C
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107440
  if (crb(c,2)) { goto L_80107488; } // 80107444
  if (!crb(c,0)) { goto L_80107464; } // 80107448
  cmps(c,0,(int32_t)c->r[3],4); // 8010744C
  if (crb(c,2)) { goto L_80107488; } // 80107450
  if (!crb(c,0)) { goto L_80107478; } // 80107454
  cmps(c,0,(int32_t)c->r[3],1); // 80107458
  if (!crb(c,0)) { goto L_80107470; } // 8010745C
  goto L_80107488; // 80107460
L_80107464:;
  cmps(c,0,(int32_t)c->r[3],12); // 80107464
  if (!crb(c,0)) { goto L_80107488; } // 80107468
  goto L_80107480; // 8010746C
L_80107470:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80107470
  goto L_8010748C; // 80107474
L_80107478:;
  c->r[3]=c->r[3]+0xFFFFFFFBu; // 80107478
  goto L_8010748C; // 8010747C
L_80107480:;
  c->r[3]=c->r[3]+0xFFFFFFF7u; // 80107480
  goto L_8010748C; // 80107484
L_80107488:;
  c->r[3]=0u+0x00000000u; // 80107488
L_8010748C:;
  {uint32_t ea=c->r[2]+0xFFFF8D30u; c->f[6]=c->ps1[6]=RF32(ea);} // 8010748C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80107490
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107494
  c->r[9]=c->r[0]-c->r[3]; // 80107498
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010749C
  c->r[8]=c->r[5]+0x00000011u; // 801074A0
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 801074A4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801074A8
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 801074AC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801074B0
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 801074B4
  c->r[6]=0u+0xCC010000u; // 801074B8
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801074BC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801074C0
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801074C4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801074C8
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 801074CC
  c->r[7]=0u+0x00000061u; // 801074D0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[5]);} // 801074D4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801074D8
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 801074DC
  c->r[5]=0u+0x00000000u; // 801074E0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801074E4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801074E8
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 801074EC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801074F0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 801074F4
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 801074F8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801074FC
  c->r[3]=c->r[9]+0x00000006u; // 80107500
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107504
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 80107508
  c->r[4]=0u+0x00000000u; // 8010750C
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 80107510
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80107514
  c->r[5]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 80107518
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8010751C
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80107520
  c->r[4]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[4]&~0x000007FFu); // 80107524
  c->r[3]=c->r[9]+0x00000007u; // 80107528
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 8010752C
  c->r[5]=0u+0x00000000u; // 80107530
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 80107534
  c->r[0]=R32(c->r[1]+0x00000024u); // 80107538
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8010753C
  c->r[4]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[4]&~0x003FF800u); // 80107540
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80107544
  c->r[4]=(rotl(c->r[8],20)&0x00C00000u)|(c->r[4]&~0x00C00000u); // 80107548
  c->r[4]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8010754C
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80107550
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 80107554
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80107558
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 8010755C
  c->r[4]=c->r[9]+0x00000008u; // 80107560
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80107564
  c->r[0]=R32(c->r[1]+0x00000034u); // 80107568
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 8010756C
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 80107570
  c->r[0]=0u+0x00000000u; // 80107574
  c->r[5]=(rotl(c->r[8],18)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 80107578
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8010757C
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 80107580
  W16(c->r[3]+0x00000002u,c->r[0]); // 80107584
  c->r[1]=c->r[1]+0x00000040u; // 80107588
  return; // 8010758C
}

// GXSetIndTexCoordScale
void f_80107590(Ctx* __restrict c) {
  trace_call(0x80107590u);
  cmps(c,0,(int32_t)c->r[3],2); // 80107590
  if (crb(c,2)) { goto L_80107620; } // 80107594
  if (!crb(c,0)) { goto L_801075AC; } // 80107598
  cmps(c,0,(int32_t)c->r[3],0); // 8010759C
  if (crb(c,2)) { goto L_801075B8; } // 801075A0
  if (!crb(c,0)) { goto L_801075EC; } // 801075A4
  goto L_80107684; // 801075A8
L_801075AC:;
  cmps(c,0,(int32_t)c->r[3],4); // 801075AC
  if (!crb(c,0)) { goto L_80107684; } // 801075B0
  goto L_80107654; // 801075B4
L_801075B8:;
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 801075B8
  c->r[6]=0u+0x00000025u; // 801075BC
  c->r[3]=0u+0xCC010000u; // 801075C0
  c->r[0]=0u+0x00000061u; // 801075C4
  c->r[7]=R32(c->r[8]+0x00000178u); // 801075C8
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 801075CC
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 801075D0
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801075D4
  W32(c->r[8]+0x00000178u,c->r[7]); // 801075D8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801075DC
  c->r[0]=R32(c->r[8]+0x00000178u); // 801075E0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801075E4
  goto L_80107684; // 801075E8
L_801075EC:;
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 801075EC
  c->r[6]=0u+0x00000025u; // 801075F0
  c->r[3]=0u+0xCC010000u; // 801075F4
  c->r[0]=0u+0x00000061u; // 801075F8
  c->r[7]=R32(c->r[8]+0x00000178u); // 801075FC
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 80107600
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 80107604
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80107608
  W32(c->r[8]+0x00000178u,c->r[7]); // 8010760C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107610
  c->r[0]=R32(c->r[8]+0x00000178u); // 80107614
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80107618
  goto L_80107684; // 8010761C
L_80107620:;
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 80107620
  c->r[6]=0u+0x00000026u; // 80107624
  c->r[3]=0u+0xCC010000u; // 80107628
  c->r[0]=0u+0x00000061u; // 8010762C
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 80107630
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 80107634
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 80107638
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 8010763C
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 80107640
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107644
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 80107648
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010764C
  goto L_80107684; // 80107650
L_80107654:;
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 80107654
  c->r[6]=0u+0x00000026u; // 80107658
  c->r[3]=0u+0xCC010000u; // 8010765C
  c->r[0]=0u+0x00000061u; // 80107660
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 80107664
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 80107668
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 8010766C
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80107670
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 80107674
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80107678
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 8010767C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80107680
L_80107684:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80107684
  c->r[0]=0u+0x00000000u; // 80107688
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010768C
  return; // 80107690
}

// GXSetIndTexOrder
void f_80107694(Ctx* __restrict c) {
  trace_call(0x80107694u);
  cmps(c,0,(int32_t)c->r[5],255); // 80107694
  if (!crb(c,2)) { goto L_801076A0; } // 80107698
  c->r[5]=0u+0x00000000u; // 8010769C
L_801076A0:;
  cmps(c,0,(int32_t)c->r[4],255); // 801076A0
  if (!crb(c,2)) { goto L_801076AC; } // 801076A4
  c->r[4]=0u+0x00000000u; // 801076A8
L_801076AC:;
  cmps(c,0,(int32_t)c->r[3],2); // 801076AC
  if (crb(c,2)) { goto L_80107704; } // 801076B0
  if (!crb(c,0)) { goto L_801076C8; } // 801076B4
  cmps(c,0,(int32_t)c->r[3],0); // 801076B8
  if (crb(c,2)) { goto L_801076D4; } // 801076BC
  if (!crb(c,0)) { goto L_801076EC; } // 801076C0
  goto L_80107730; // 801076C4
L_801076C8:;
  cmps(c,0,(int32_t)c->r[3],4); // 801076C8
  if (!crb(c,0)) { goto L_80107730; } // 801076CC
  goto L_8010771C; // 801076D0
L_801076D4:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801076D4
  c->r[0]=R32(c->r[3]+0x00000170u); // 801076D8
  c->r[0]=(rotl(c->r[5],0)&0x00000007u)|(c->r[0]&~0x00000007u); // 801076DC
  c->r[0]=(rotl(c->r[4],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 801076E0
  W32(c->r[3]+0x00000170u,c->r[0]); // 801076E4
  goto L_80107730; // 801076E8
L_801076EC:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 801076EC
  c->r[0]=R32(c->r[3]+0x00000170u); // 801076F0
  c->r[0]=(rotl(c->r[5],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 801076F4
  c->r[0]=(rotl(c->r[4],9)&0x00000E00u)|(c->r[0]&~0x00000E00u); // 801076F8
  W32(c->r[3]+0x00000170u,c->r[0]); // 801076FC
  goto L_80107730; // 80107700
L_80107704:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80107704
  c->r[0]=R32(c->r[3]+0x00000170u); // 80107708
  c->r[0]=(rotl(c->r[5],12)&0x00007000u)|(c->r[0]&~0x00007000u); // 8010770C
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80107710
  W32(c->r[3]+0x00000170u,c->r[0]); // 80107714
  goto L_80107730; // 80107718
L_8010771C:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010771C
  c->r[0]=R32(c->r[3]+0x00000170u); // 80107720
  c->r[0]=(rotl(c->r[5],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 80107724
  c->r[0]=(rotl(c->r[4],21)&0x00E00000u)|(c->r[0]&~0x00E00000u); // 80107728
  W32(c->r[3]+0x00000170u,c->r[0]); // 8010772C
L_80107730:;
  c->r[4]=0u+0xCC010000u; // 80107730
  c->r[0]=0u+0x00000061u; // 80107734
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80107738
  c->r[0]=0u+0x00000000u; // 8010773C
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80107740
  c->r[3]=R32(c->r[5]+0x00000170u); // 80107744
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80107748
  c->r[3]=R32(c->r[5]+0x000005FCu); // 8010774C
  c->r[3]=c->r[3]|0x00000003u; // 80107750
  W32(c->r[5]+0x000005FCu,c->r[3]); // 80107754
  W16(c->r[5]+0x00000002u,c->r[0]); // 80107758
  return; // 8010775C
}

// GXSetNumIndStages
void f_80107760(Ctx* __restrict c) {
  trace_call(0x80107760u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80107760
  c->r[0]=R32(c->r[4]+0x00000254u); // 80107764
  c->r[0]=(rotl(c->r[3],16)&0x00070000u)|(c->r[0]&~0x00070000u); // 80107768
  W32(c->r[4]+0x00000254u,c->r[0]); // 8010776C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80107770
  c->r[0]=c->r[0]|0x00000006u; // 80107774
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80107778
  return; // 8010777C
}

// GXSetTevDirect
void f_80107780(Ctx* __restrict c) {
  trace_call(0x80107780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107780
  c->r[0]=c->lr; // 80107784
  c->r[4]=0u+0x00000000u; // 80107788
  c->r[5]=0u+0x00000000u; // 8010778C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107790
  c->r[0]=0u+0x00000000u; // 80107794
  c->r[6]=0u+0x00000000u; // 80107798
  c->r[7]=0u+0x00000000u; // 8010779C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801077A0
  c->r[8]=0u+0x00000000u; // 801077A4
  c->r[9]=0u+0x00000000u; // 801077A8
  c->r[10]=0u+0x00000000u; // 801077AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801077B0
  c->lr=0x801077B8u; f_801073D4(c); // 801077B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801077B8
  c->lr=c->r[0]; // 801077BC
  c->r[1]=c->r[1]+0x00000010u; // 801077C0
  return; // 801077C4
}

// __GXUpdateBPMask
void f_801077C8(Ctx* __restrict c) {
  trace_call(0x801077C8u);
  return; // 801077C8
}

// __GXSetIndirectMask
void f_801077CC(Ctx* __restrict c) {
  trace_call(0x801077CCu);
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 801077CC
  c->r[4]=0u+0xCC010000u; // 801077D0
  c->r[5]=0u+0x00000061u; // 801077D4
  c->r[0]=0u+0x00000000u; // 801077D8
  c->r[6]=R32(c->r[7]+0x00000174u); // 801077DC
  c->r[6]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801077E0
  W32(c->r[7]+0x00000174u,c->r[6]); // 801077E4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801077E8
  c->r[3]=R32(c->r[7]+0x00000174u); // 801077EC
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801077F0
  W16(c->r[7]+0x00000002u,c->r[0]); // 801077F4
  return; // 801077F8
}

// __GXFlushTextureState
void f_801077FC(Ctx* __restrict c) {
  trace_call(0x801077FCu);
  c->r[4]=0u+0xCC010000u; // 801077FC
  c->r[0]=0u+0x00000061u; // 80107800
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80107804
  c->r[0]=0u+0x00000000u; // 80107808
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 8010780C
  c->r[3]=R32(c->r[5]+0x00000174u); // 80107810
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80107814
  W16(c->r[5]+0x00000002u,c->r[0]); // 80107818
  return; // 8010781C
}

// GXSetTevOp
void f_80107820(Ctx* __restrict c) {
  trace_call(0x80107820u);
  cmps(c,0,(int32_t)c->r[3],0); // 80107820
  c->r[5]=0u+0x80290000u; // 80107824
  c->r[5]=c->r[5]+0x00005FD0u; // 80107828
  if (!crb(c,2)) { goto L_80107848; } // 8010782C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80107830
  c->r[4]=c->r[5]+0x00000000u; // 80107834
  c->r[0]=c->r[5]+0x00000028u; // 80107838
  c->r[8]=c->r[4]+c->r[6]; // 8010783C
  c->r[9]=c->r[0]+c->r[6]; // 80107840
  goto L_8010785C; // 80107844
L_80107848:;
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80107848
  c->r[4]=c->r[5]+0x00000014u; // 8010784C
  c->r[0]=c->r[5]+0x0000003Cu; // 80107850
  c->r[8]=c->r[4]+c->r[6]; // 80107854
  c->r[9]=c->r[0]+c->r[6]; // 80107858
L_8010785C:;
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 8010785C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80107860
  c->r[3]=R32(c->r[8]+0x00000000u); // 80107864
  c->r[4]=0u+0xCC010000u; // 80107868
  c->r[6]=c->r[7]+c->r[0]; // 8010786C
  c->r[5]=0u+0x00000061u; // 80107870
  c->r[8]=R32(c->r[6]+0x00000180u); // 80107874
  c->r[0]=0u+0x00000000u; // 80107878
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8010787C
  c->r[8]=rotl(c->r[8],0)&0xFF000000u; // 80107880
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 80107884
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 80107888
  W32(c->r[6]+0x00000180u,c->r[8]); // 8010788C
  c->r[8]=R32(c->r[6]+0x000001C0u); // 80107890
  c->r[3]=R32(c->r[9]+0x00000000u); // 80107894
  c->r[8]=rotl(c->r[8],0)&0xFF00000Fu; // 80107898
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8010789C
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFF0u)|(c->r[8]&~0x00FFFFF0u); // 801078A0
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 801078A4
  W32(c->r[6]+0x000001C0u,c->r[8]); // 801078A8
  W16(c->r[7]+0x00000002u,c->r[0]); // 801078AC
  return; // 801078B0
}

// GXSetTevColorIn
void f_801078B4(Ctx* __restrict c) {
  trace_call(0x801078B4u);
  c->r[11]=R32(c->r[2]+0xFFFF8C88u); // 801078B4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801078B8
  c->r[3]=0u+0xCC010000u; // 801078BC
  c->r[8]=0u+0x00000061u; // 801078C0
  c->r[10]=c->r[11]+c->r[0]; // 801078C4
  c->r[0]=0u+0x00000000u; // 801078C8
  c->r[9]=R32(c->r[10]+0x00000180u); // 801078CC
  c->r[9]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 801078D0
  c->r[9]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[9]&~0x00000F00u); // 801078D4
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 801078D8
  c->r[9]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[9]&~0x000000F0u); // 801078DC
  c->r[9]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[9]&~0x0000000Fu); // 801078E0
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 801078E4
  W32(c->r[10]+0x00000180u,c->r[9]); // 801078E8
  W16(c->r[11]+0x00000002u,c->r[0]); // 801078EC
  return; // 801078F0
}

// GXSetTevAlphaIn
void f_801078F4(Ctx* __restrict c) {
  trace_call(0x801078F4u);
  c->r[11]=R32(c->r[2]+0xFFFF8C88u); // 801078F4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801078F8
  c->r[3]=0u+0xCC010000u; // 801078FC
  c->r[8]=0u+0x00000061u; // 80107900
  c->r[10]=c->r[11]+c->r[0]; // 80107904
  c->r[0]=0u+0x00000000u; // 80107908
  c->r[9]=R32(c->r[10]+0x000001C0u); // 8010790C
  c->r[9]=(rotl(c->r[4],13)&0x0000E000u)|(c->r[9]&~0x0000E000u); // 80107910
  c->r[9]=(rotl(c->r[5],10)&0x00001C00u)|(c->r[9]&~0x00001C00u); // 80107914
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 80107918
  c->r[9]=(rotl(c->r[6],7)&0x00000380u)|(c->r[9]&~0x00000380u); // 8010791C
  c->r[9]=(rotl(c->r[7],4)&0x00000070u)|(c->r[9]&~0x00000070u); // 80107920
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 80107924
  W32(c->r[10]+0x000001C0u,c->r[9]); // 80107928
  W16(c->r[11]+0x00000002u,c->r[0]); // 8010792C
  return; // 80107930
}

// GXSetTevColorOp
void f_80107934(Ctx* __restrict c) {
  trace_call(0x80107934u);
  c->r[10]=R32(c->r[2]+0xFFFF8C88u); // 80107934
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80107938
  cmps(c,0,(int32_t)c->r[4],1); // 8010793C
  c->r[9]=c->r[10]+c->r[0]; // 80107940
  c->r[11]=R32(c->r[9]+0x00000180u); // 80107944
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 80107948
  if (crb(c,1)) { goto L_8010795C; } // 8010794C
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 80107950
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 80107954
  goto L_80107964; // 80107958
L_8010795C:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 8010795C
  c->r[11]=c->r[11]|0x00030000u; // 80107960
L_80107964:;
  c->r[3]=0u+0xCC010000u; // 80107964
  c->r[0]=0u+0x00000061u; // 80107968
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8010796C
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 80107970
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 80107974
  c->r[0]=0u+0x00000000u; // 80107978
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 8010797C
  W32(c->r[9]+0x00000180u,c->r[11]); // 80107980
  W16(c->r[10]+0x00000002u,c->r[0]); // 80107984
  return; // 80107988
}

// GXSetTevAlphaOp
void f_8010798C(Ctx* __restrict c) {
  trace_call(0x8010798Cu);
  c->r[10]=R32(c->r[2]+0xFFFF8C88u); // 8010798C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80107990
  cmps(c,0,(int32_t)c->r[4],1); // 80107994
  c->r[9]=c->r[10]+c->r[0]; // 80107998
  c->r[11]=R32(c->r[9]+0x000001C0u); // 8010799C
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 801079A0
  if (crb(c,1)) { goto L_801079B4; } // 801079A4
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 801079A8
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 801079AC
  goto L_801079BC; // 801079B0
L_801079B4:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 801079B4
  c->r[11]=c->r[11]|0x00030000u; // 801079B8
L_801079BC:;
  c->r[3]=0u+0xCC010000u; // 801079BC
  c->r[0]=0u+0x00000061u; // 801079C0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801079C4
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 801079C8
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 801079CC
  c->r[0]=0u+0x00000000u; // 801079D0
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 801079D4
  W32(c->r[9]+0x000001C0u,c->r[11]); // 801079D8
  W16(c->r[10]+0x00000002u,c->r[0]); // 801079DC
  return; // 801079E0
}

// GXSetTevColor
void f_801079E4(Ctx* __restrict c) {
  trace_call(0x801079E4u);
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801079E4
  c->r[8]=R32(c->r[4]+0x00000000u); // 801079E8
  c->r[0]=c->r[3]+0x000000E0u; // 801079EC
  c->r[4]=0u+0xCC010000u; // 801079F0
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 801079F4
  c->r[5]=0u+0x00000061u; // 801079F8
  c->r[7]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801079FC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80107A00
  c->r[7]=(rotl(c->r[8],12)&0x000FF000u)|(c->r[7]&~0x000FF000u); // 80107A04
  c->r[0]=c->r[3]+0x000000E1u; // 80107A08
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 80107A0C
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 80107A10
  c->r[6]=(rotl(c->r[8],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 80107A14
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80107A18
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80107A1C
  c->r[6]=(rotl(c->r[8],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 80107A20
  c->r[0]=0u+0x00000000u; // 80107A24
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80107A28
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80107A2C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80107A30
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80107A34
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80107A38
  W16(c->r[3]+0x00000002u,c->r[0]); // 80107A3C
  return; // 80107A40
}

// GXSetTevColorS10
void f_80107A44(Ctx* __restrict c) {
  trace_call(0x80107A44u);
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80107A44
  c->r[8]=R32(c->r[4]+0x00000000u); // 80107A48
  c->r[0]=c->r[3]+0x000000E0u; // 80107A4C
  c->r[5]=0u+0xCC010000u; // 80107A50
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 80107A54
  c->r[6]=0u+0x00000061u; // 80107A58
  c->r[9]=R32(c->r[4]+0x00000004u); // 80107A5C
  c->r[7]=(rotl(c->r[8],16)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 80107A60
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80107A64
  c->r[0]=c->r[3]+0x000000E1u; // 80107A68
  c->r[7]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[7]&~0x007FF000u); // 80107A6C
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80107A70
  c->r[4]=rotl(c->r[0],24)&0xFF000000u; // 80107A74
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 80107A78
  c->r[4]=(rotl(c->r[9],16)&0x000007FFu)|(c->r[4]&~0x000007FFu); // 80107A7C
  c->r[0]=0u+0x00000000u; // 80107A80
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80107A84
  c->r[4]=(rotl(c->r[8],12)&0x007FF000u)|(c->r[4]&~0x007FF000u); // 80107A88
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80107A8C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80107A90
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80107A94
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80107A98
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80107A9C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80107AA0
  return; // 80107AA4
}

// GXSetTevKColor
void f_80107AA8(Ctx* __restrict c) {
  trace_call(0x80107AA8u);
  c->r[6]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80107AA8
  c->r[9]=R32(c->r[4]+0x00000000u); // 80107AAC
  c->r[3]=c->r[6]+0x000000E0u; // 80107AB0
  c->r[4]=0u+0xCC010000u; // 80107AB4
  c->r[8]=rotl(c->r[3],24)&0xFF000000u; // 80107AB8
  c->r[5]=0u+0x00000061u; // 80107ABC
  c->r[8]=(rotl(c->r[9],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 80107AC0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80107AC4
  c->r[7]=0u+0x00000008u; // 80107AC8
  c->r[0]=c->r[6]+0x000000E1u; // 80107ACC
  c->r[8]=(rotl(c->r[9],12)&0x000FF000u)|(c->r[8]&~0x000FF000u); // 80107AD0
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80107AD4
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 80107AD8
  c->r[0]=0u+0x00000000u; // 80107ADC
  c->r[8]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 80107AE0
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 80107AE4
  c->r[6]=(rotl(c->r[9],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 80107AE8
  c->r[6]=(rotl(c->r[9],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 80107AEC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80107AF0
  c->r[6]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[6]&~0x00F00000u); // 80107AF4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80107AF8
  W16(c->r[3]+0x00000002u,c->r[0]); // 80107AFC
  return; // 80107B00
}

// GXSetTevKColorSel
void f_80107B04(Ctx* __restrict c) {
  trace_call(0x80107B04u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80107B04
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80107B08
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 80107B0C
  c->r[3]=c->r[5]+c->r[0]; // 80107B10
  if (crb(c,2)) { goto L_80107B28; } // 80107B14
  c->r[0]=R32(c->r[3]+0x00000200u); // 80107B18
  c->r[0]=(rotl(c->r[4],14)&0x0007C000u)|(c->r[0]&~0x0007C000u); // 80107B1C
  W32(c->r[3]+0x00000200u,c->r[0]); // 80107B20
  goto L_80107B34; // 80107B24
L_80107B28:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 80107B28
  c->r[0]=(rotl(c->r[4],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 80107B2C
  W32(c->r[3]+0x00000200u,c->r[0]); // 80107B30
L_80107B34:;
  c->r[4]=0u+0xCC010000u; // 80107B34
  c->r[0]=0u+0x00000061u; // 80107B38
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80107B3C
  c->r[0]=0u+0x00000000u; // 80107B40
  c->r[3]=R32(c->r[3]+0x00000200u); // 80107B44
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80107B48
  W16(c->r[5]+0x00000002u,c->r[0]); // 80107B4C
  return; // 80107B50
}

// GXSetTevKAlphaSel
void f_80107B54(Ctx* __restrict c) {
  trace_call(0x80107B54u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80107B54
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80107B58
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 80107B5C
  c->r[3]=c->r[5]+c->r[0]; // 80107B60
  if (crb(c,2)) { goto L_80107B78; } // 80107B64
  c->r[0]=R32(c->r[3]+0x00000200u); // 80107B68
  c->r[0]=(rotl(c->r[4],19)&0x00F80000u)|(c->r[0]&~0x00F80000u); // 80107B6C
  W32(c->r[3]+0x00000200u,c->r[0]); // 80107B70
  goto L_80107B84; // 80107B74
L_80107B78:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 80107B78
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80107B7C
  W32(c->r[3]+0x00000200u,c->r[0]); // 80107B80
L_80107B84:;
  c->r[4]=0u+0xCC010000u; // 80107B84
  c->r[0]=0u+0x00000061u; // 80107B88
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80107B8C
  c->r[0]=0u+0x00000000u; // 80107B90
  c->r[3]=R32(c->r[3]+0x00000200u); // 80107B94
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80107B98
  W16(c->r[5]+0x00000002u,c->r[0]); // 80107B9C
  return; // 80107BA0
}

// GXSetTevSwapMode
void f_80107BA4(Ctx* __restrict c) {
  trace_call(0x80107BA4u);
  c->r[9]=R32(c->r[2]+0xFFFF8C88u); // 80107BA4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80107BA8
  c->r[6]=0u+0xCC010000u; // 80107BAC
  c->r[3]=0u+0x00000061u; // 80107BB0
  c->r[8]=c->r[9]+c->r[0]; // 80107BB4
  c->r[0]=0u+0x00000000u; // 80107BB8
  c->r[7]=R32(c->r[8]+0x000001C0u); // 80107BBC
  c->r[7]=(rotl(c->r[4],0)&0x00000003u)|(c->r[7]&~0x00000003u); // 80107BC0
  c->r[7]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[7]&~0x0000000Cu); // 80107BC4
  W32(c->r[8]+0x000001C0u,c->r[7]); // 80107BC8
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 80107BCC
  c->r[3]=R32(c->r[8]+0x000001C0u); // 80107BD0
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80107BD4
  W16(c->r[9]+0x00000002u,c->r[0]); // 80107BD8
  return; // 80107BDC
}

// GXSetTevSwapModeTable
void f_80107BE0(Ctx* __restrict c) {
  trace_call(0x80107BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107BE0
  c->r[11]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80107BE4
  c->r[12]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80107BE8
  c->r[8]=0u+0xCC010000u; // 80107BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107BF0
  c->r[9]=0u+0x00000061u; // 80107BF4
  c->r[3]=c->r[12]+0x00000001u; // 80107BF8
  c->r[0]=0u+0x00000000u; // 80107BFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80107C00
  c->r[30]=R32(c->r[2]+0xFFFF8C88u); // 80107C04
  c->r[31]=c->r[30]+0x00000200u; // 80107C08
  c->r[10]=R32(c->r[31]+c->r[11]); // 80107C0C
  c->r[10]=(rotl(c->r[4],0)&0x00000003u)|(c->r[10]&~0x00000003u); // 80107C10
  c->r[10]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[10]&~0x0000000Cu); // 80107C14
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80107C18
  W32(c->r[31]+c->r[11],c->r[10]); // 80107C1C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80107C20
  c->r[3]=R32(c->r[31]+c->r[11]); // 80107C24
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 80107C28
  c->r[3]=R32(c->r[31]+c->r[4]); // 80107C2C
  c->r[3]=(rotl(c->r[6],0)&0x00000003u)|(c->r[3]&~0x00000003u); // 80107C30
  c->r[3]=(rotl(c->r[7],2)&0x0000000Cu)|(c->r[3]&~0x0000000Cu); // 80107C34
  W32(c->r[31]+c->r[4],c->r[3]); // 80107C38
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 80107C3C
  c->r[3]=R32(c->r[31]+c->r[4]); // 80107C40
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 80107C44
  W16(c->r[30]+0x00000002u,c->r[0]); // 80107C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107C4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80107C50
  c->r[1]=c->r[1]+0x00000010u; // 80107C54
  return; // 80107C58
}

// GXSetAlphaCompare
void f_80107C5C(Ctx* __restrict c) {
  trace_call(0x80107C5Cu);
  c->r[8]=0u+0xCC010000u; // 80107C5C
  c->r[0]=0u+0x00000061u; // 80107C60
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 80107C64
  c->r[9]=0u+0xF3000000u; // 80107C68
  c->r[9]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 80107C6C
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80107C70
  c->r[9]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[9]&~0x0000FF00u); // 80107C74
  c->r[0]=0u+0x00000000u; // 80107C78
  c->r[9]=(rotl(c->r[3],16)&0x00070000u)|(c->r[9]&~0x00070000u); // 80107C7C
  c->r[9]=(rotl(c->r[6],19)&0x00380000u)|(c->r[9]&~0x00380000u); // 80107C80
  c->r[9]=(rotl(c->r[5],22)&0x00C00000u)|(c->r[9]&~0x00C00000u); // 80107C84
  W32(c->r[8]+0xFFFF8000u,c->r[9]); // 80107C88
  W16(c->r[4]+0x00000002u,c->r[0]); // 80107C8C
  return; // 80107C90
}

// GXSetZTexture
void f_80107C94(Ctx* __restrict c) {
  trace_call(0x80107C94u);
  cmps(c,0,(int32_t)c->r[4],19); // 80107C94
  c->r[7]=0u+0x00000000u; // 80107C98
  c->r[0]=0u+0x000000F4u; // 80107C9C
  c->r[7]=(rotl(c->r[5],0)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 80107CA0
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80107CA4
  if (crb(c,2)) { goto L_80107CD0; } // 80107CA8
  if (!crb(c,0)) { goto L_80107CBC; } // 80107CAC
  cmps(c,0,(int32_t)c->r[4],17); // 80107CB0
  if (crb(c,2)) { goto L_80107CC8; } // 80107CB4
  goto L_80107CE0; // 80107CB8
L_80107CBC:;
  cmps(c,0,(int32_t)c->r[4],22); // 80107CBC
  if (crb(c,2)) { goto L_80107CD8; } // 80107CC0
  goto L_80107CE0; // 80107CC4
L_80107CC8:;
  c->r[5]=0u+0x00000000u; // 80107CC8
  goto L_80107CE4; // 80107CCC
L_80107CD0:;
  c->r[5]=0u+0x00000001u; // 80107CD0
  goto L_80107CE4; // 80107CD4
L_80107CD8:;
  c->r[5]=0u+0x00000002u; // 80107CD8
  goto L_80107CE4; // 80107CDC
L_80107CE0:;
  c->r[5]=0u+0x00000002u; // 80107CE0
L_80107CE4:;
  c->r[4]=0u+0xCC010000u; // 80107CE4
  c->r[0]=0u+0x00000061u; // 80107CE8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80107CEC
  c->r[6]=0u+0x00000000u; // 80107CF0
  c->r[6]=(rotl(c->r[5],0)&0x00000003u)|(c->r[6]&~0x00000003u); // 80107CF4
  c->r[5]=0u+0x000000F5u; // 80107CF8
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 80107CFC
  c->r[6]=(rotl(c->r[3],2)&0x0000000Cu)|(c->r[6]&~0x0000000Cu); // 80107D00
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80107D04
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80107D08
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80107D0C
  c->r[0]=0u+0x00000000u; // 80107D10
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80107D14
  W16(c->r[3]+0x00000002u,c->r[0]); // 80107D18
  return; // 80107D1C
}

// GXSetTevOrder
void f_80107D20(Ctx* __restrict c) {
  trace_call(0x80107D20u);
  c->r[11]=rotl(c->r[5],0)&0xFFFFFEFFu; // 80107D20
  c->r[7]=0u+0x00000008u; // 80107D24
  c->r[9]=rotl(c->r[3],1)&0x00000001u; // 80107D28
  c->r[10]=R32(c->r[2]+0xFFFF8C88u); // 80107D2C
  c->r[0]=addc(c,~c->r[7],c->r[11],1); // 80107D30
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80107D34
  c->r[0]=addc(c,c->r[7],0,c->xer_ca); // 80107D38
  c->r[9]=c->r[9]+c->r[3]; // 80107D3C
  c->r[7]=c->r[10]+c->r[8]; // 80107D40
  cmps(c,0,(int32_t)c->r[4],8); // 80107D44
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFCu; // 80107D48
  c->r[0]=addc(c,~c->r[0],0x00000008u,1); // 80107D4C
  W32(c->r[7]+0x000005A4u,c->r[5]); // 80107D50
  c->r[7]=c->r[10]+c->r[8]; // 80107D54
  c->r[9]=c->r[11]&~c->r[0]; // 80107D58
  if (crb(c,0)) { goto L_80107D7C; } // 80107D5C
  c->r[0]=0u+0x00000001u; // 80107D60
  c->r[8]=R32(c->r[10]+0x000005E8u); // 80107D64
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80107D68
  c->r[4]=0u+0x00000000u; // 80107D6C
  c->r[0]=c->r[8]&~c->r[0]; // 80107D70
  W32(c->r[10]+0x000005E8u,c->r[0]); // 80107D74
  goto L_80107D90; // 80107D78
L_80107D7C:;
  c->r[0]=0u+0x00000001u; // 80107D7C
  c->r[8]=R32(c->r[10]+0x000005E8u); // 80107D80
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80107D84
  c->r[0]=c->r[8]|c->r[0]; // 80107D88
  W32(c->r[10]+0x000005E8u,c->r[0]); // 80107D8C
L_80107D90:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80107D90
  if (crb(c,2)) { goto L_80107DF4; } // 80107D94
  c->r[8]=R32(c->r[7]+0x00000150u); // 80107D98
  c->r[8]=(rotl(c->r[9],12)&0x00007000u)|(c->r[8]&~0x00007000u); // 80107D9C
  c->r[8]=(rotl(c->r[4],15)&0x00038000u)|(c->r[8]&~0x00038000u); // 80107DA0
  cmps(c,0,(int32_t)c->r[6],255); // 80107DA4
  W32(c->r[7]+0x00000150u,c->r[8]); // 80107DA8
  if (!crb(c,2)) { goto L_80107DB8; } // 80107DAC
  c->r[0]=0u+0x00000007u; // 80107DB0
  goto L_80107DC8; // 80107DB4
L_80107DB8:;
  c->r[3]=0u+0x80290000u; // 80107DB8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80107DBC
  c->r[3]=c->r[3]+0x00006020u; // 80107DC0
  c->r[0]=R32(c->r[3]+c->r[0]); // 80107DC4
L_80107DC8:;
  c->r[8]=(rotl(c->r[0],19)&0x00380000u)|(c->r[8]&~0x00380000u); // 80107DC8
  cmps(c,0,(int32_t)c->r[5],255); // 80107DCC
  W32(c->r[7]+0x00000150u,c->r[8]); // 80107DD0
  c->r[3]=0u+0x00000000u; // 80107DD4
  if (crb(c,2)) { goto L_80107DE8; } // 80107DD8
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 80107DDC
  if (!crb(c,2)) { goto L_80107DE8; } // 80107DE0
  c->r[3]=0u+0x00000001u; // 80107DE4
L_80107DE8:;
  c->r[8]=(rotl(c->r[3],18)&0x00040000u)|(c->r[8]&~0x00040000u); // 80107DE8
  W32(c->r[7]+0x00000150u,c->r[8]); // 80107DEC
  goto L_80107E4C; // 80107DF0
L_80107DF4:;
  c->r[8]=R32(c->r[7]+0x00000150u); // 80107DF4
  c->r[8]=(rotl(c->r[9],0)&0x00000007u)|(c->r[8]&~0x00000007u); // 80107DF8
  c->r[8]=(rotl(c->r[4],3)&0x00000038u)|(c->r[8]&~0x00000038u); // 80107DFC
  cmps(c,0,(int32_t)c->r[6],255); // 80107E00
  W32(c->r[7]+0x00000150u,c->r[8]); // 80107E04
  if (!crb(c,2)) { goto L_80107E14; } // 80107E08
  c->r[0]=0u+0x00000007u; // 80107E0C
  goto L_80107E24; // 80107E10
L_80107E14:;
  c->r[3]=0u+0x80290000u; // 80107E14
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80107E18
  c->r[3]=c->r[3]+0x00006020u; // 80107E1C
  c->r[0]=R32(c->r[3]+c->r[0]); // 80107E20
L_80107E24:;
  c->r[8]=(rotl(c->r[0],7)&0x00000380u)|(c->r[8]&~0x00000380u); // 80107E24
  cmps(c,0,(int32_t)c->r[5],255); // 80107E28
  W32(c->r[7]+0x00000150u,c->r[8]); // 80107E2C
  c->r[3]=0u+0x00000000u; // 80107E30
  if (crb(c,2)) { goto L_80107E44; } // 80107E34
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 80107E38
  if (!crb(c,2)) { goto L_80107E44; } // 80107E3C
  c->r[3]=0u+0x00000001u; // 80107E40
L_80107E44:;
  c->r[8]=(rotl(c->r[3],6)&0x00000040u)|(c->r[8]&~0x00000040u); // 80107E44
  W32(c->r[7]+0x00000150u,c->r[8]); // 80107E48
L_80107E4C:;
  c->r[4]=0u+0xCC010000u; // 80107E4C
  c->r[0]=0u+0x00000061u; // 80107E50
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80107E54
  c->r[0]=0u+0x00000000u; // 80107E58
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80107E5C
  c->r[3]=R32(c->r[7]+0x00000150u); // 80107E60
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80107E64
  W16(c->r[5]+0x00000002u,c->r[0]); // 80107E68
  c->r[0]=R32(c->r[5]+0x000005FCu); // 80107E6C
  c->r[0]=c->r[0]|0x00000001u; // 80107E70
  W32(c->r[5]+0x000005FCu,c->r[0]); // 80107E74
  return; // 80107E78
}

// GXSetNumTevStages
void f_80107E7C(Ctx* __restrict c) {
  trace_call(0x80107E7Cu);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80107E7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80107E80
  c->r[3]=R32(c->r[4]+0x00000254u); // 80107E84
  c->r[3]=(rotl(c->r[0],10)&0x00003C00u)|(c->r[3]&~0x00003C00u); // 80107E88
  W32(c->r[4]+0x00000254u,c->r[3]); // 80107E8C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80107E90
  c->r[0]=c->r[0]|0x00000004u; // 80107E94
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80107E98
  return; // 80107E9C
}

// GXSetFog
void f_80107EA0(Ctx* __restrict c) {
  trace_call(0x80107EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107EA0
  c->r[0]=c->lr; // 80107EA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80107EA8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80107EAC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80107EB0
  c->r[8]=0u+0x00000000u; // 80107EB4
  c->r[9]=0u+0x00000000u; // 80107EB8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80107EBC
  c->r[31]=rotl(c->r[3],0)&0x00000007u; // 80107EC0
  W32(c->r[1]+0x00000028u,c->r[30]); // 80107EC4
  c->r[30]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[30]); // 80107EC8
  W32(c->r[1]+0x00000024u,c->r[29]); // 80107ECC
  c->r[29]=c->r[4]|c->r[4]; // 80107ED0
  W32(c->r[1]+0x00000020u,c->r[28]); // 80107ED4
  if (crb(c,2)) { goto L_80107F24; } // 80107ED8
  fcmp(c,0,c->f[4],c->f[3]); // 80107EDC
  if (crb(c,2)) { goto L_80107EEC; } // 80107EE0
  fcmp(c,0,c->f[2],c->f[1]); // 80107EE4
  if (!crb(c,2)) { goto L_80107EFC; } // 80107EE8
L_80107EEC:;
  {uint32_t ea=c->r[2]+0xFFFF8D38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107EEC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80107EF0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80107EF4
  goto L_80108014; // 80107EF8
L_80107EFC:;
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[1]); // 80107EFC
  {uint32_t ea=c->r[2]+0xFFFF8D3Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80107F00
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[3]); // 80107F04
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 80107F08
  c->f[3]=c->ps1[3]=S(c->f[5]/c->f[6]); // 80107F0C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 80107F10
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80107F14
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80107F18
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80107F1C
  goto L_80108014; // 80107F20
L_80107F24:;
  fcmp(c,0,c->f[4],c->f[3]); // 80107F24
  if (crb(c,2)) { goto L_80107F34; } // 80107F28
  fcmp(c,0,c->f[2],c->f[1]); // 80107F2C
  if (!crb(c,2)) { goto L_80107F44; } // 80107F30
L_80107F34:;
  {uint32_t ea=c->r[2]+0xFFFF8D38u; c->f[3]=c->ps1[3]=RF32(ea);} // 80107F34
  {uint32_t ea=c->r[2]+0xFFFF8D40u; c->f[4]=c->ps1[4]=RF32(ea);} // 80107F38
  c->f[31]=c->f[3]; // 80107F3C
  goto L_80107F60; // 80107F40
L_80107F44:;
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 80107F44
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 80107F48
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80107F4C
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[0]); // 80107F50
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80107F54
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[2]); // 80107F58
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 80107F5C
L_80107F60:;
  {uint32_t ea=c->r[2]+0xFFFF8D40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107F60
  c->r[28]=0u+0x00000000u; // 80107F64
  {uint32_t ea=c->r[2]+0xFFFF8D48u; c->f[0]=RF64(ea);} // 80107F68
  goto L_80107F78; // 80107F6C
L_80107F70:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80107F70
  c->r[28]=c->r[28]+0x00000001u; // 80107F74
L_80107F78:;
  fcmp(c,0,c->f[4],c->f[0]); // 80107F78
  if (crb(c,1)) { IRQCHK(c); goto L_80107F70; } // 80107F7C
  {uint32_t ea=c->r[2]+0xFFFF8D58u; c->f[0]=RF64(ea);} // 80107F80
  {uint32_t ea=c->r[2]+0xFFFF8D50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80107F84
  {uint32_t ea=c->r[2]+0xFFFF8D38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107F88
  goto L_80107F98; // 80107F8C
L_80107F90:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[2]); // 80107F90
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80107F94
L_80107F98:;
  fcmp(c,0,c->f[4],c->f[1]); // 80107F98
  c->r[0]=c->cr; // 80107F9C
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 80107FA0
  if (crb(c,2)) { goto L_80107FB0; } // 80107FA4
  fcmp(c,0,c->f[4],c->f[0]); // 80107FA8
  if (crb(c,0)) { IRQCHK(c); goto L_80107F90; } // 80107FAC
L_80107FB0:;
  c->r[0]=c->r[28]+0x00000001u; // 80107FB0
  c->r[3]=0u+0x00000001u; // 80107FB4
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80107FB8
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80107FBC
  c->r[0]=0u+0x43300000u; // 80107FC0
  {uint32_t ea=c->r[2]+0xFFFF8D68u; c->f[2]=RF64(ea);} // 80107FC4
  c->r[3]=c->r[3]^0x80000000u; // 80107FC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80107FCC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 80107FD0
  W32(c->r[1]+0x00000014u,c->r[3]); // 80107FD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80107FD8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80107FDC
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 80107FE0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80107FE4
  c->lr=0x80107FECu; f_80109E10(c); // 80107FE8
  c->r[0]=c->r[28]+0x00000001u; // 80107FEC
  c->r[8]=0u+0x00000000u; // 80107FF0
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 80107FF4
  c->r[9]=0u+0x00000000u; // 80107FF8
  c->r[9]=(rotl(c->r[0],0)&0x0000001Fu)|(c->r[9]&~0x0000001Fu); // 80107FFC
  c->r[3]=0u+0x000000EFu; // 80108000
  c->r[0]=0u+0x000000F0u; // 80108004
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 80108008
  c->r[8]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 8010800C
  c->r[9]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 80108010
L_80108014:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80108014
  c->r[4]=0u+0xCC010000u; // 80108018
  c->r[5]=0u+0x00000061u; // 8010801C
  c->r[0]=0u+0x000000EEu; // 80108020
  c->r[6]=0u+0x00000000u; // 80108024
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80108028
  c->r[6]=(rotl(c->r[3],20)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 8010802C
  c->r[10]=R32(c->r[1]+0x00000008u); // 80108030
  c->r[6]=(rotl(c->r[3],20)&0x0007F800u)|(c->r[6]&~0x0007F800u); // 80108034
  c->r[7]=0u+0x00000000u; // 80108038
  c->r[6]=(rotl(c->r[3],20)&0x00080000u)|(c->r[6]&~0x00080000u); // 8010803C
  c->r[3]=0u+0x000000F1u; // 80108040
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80108044
  c->r[7]=(rotl(c->r[10],20)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 80108048
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8010804C
  c->r[7]=(rotl(c->r[10],20)&0x0007F800u)|(c->r[7]&~0x0007F800u); // 80108050
  c->r[7]=(rotl(c->r[10],20)&0x00080000u)|(c->r[7]&~0x00080000u); // 80108054
  c->r[0]=R32(c->r[29]+0x00000000u); // 80108058
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8010805C
  c->r[7]=(rotl(c->r[30],20)&0x00100000u)|(c->r[7]&~0x00100000u); // 80108060
  c->r[7]=(rotl(c->r[31],21)&0x00E00000u)|(c->r[7]&~0x00E00000u); // 80108064
  c->r[6]=0u+0x00000000u; // 80108068
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 8010806C
  c->r[7]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 80108070
  c->r[6]=(rotl(c->r[0],24)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 80108074
  c->r[0]=0u+0x000000F2u; // 80108078
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8010807C
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80108080
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80108084
  c->r[0]=0u+0x00000000u; // 80108088
  W32(c->r[4]+0xFFFF8000u,c->r[9]); // 8010808C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80108090
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 80108094
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80108098
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8010809C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801080A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801080A4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801080A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801080AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801080B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801080B4
  c->r[28]=R32(c->r[1]+0x00000020u); // 801080B8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801080BC
  c->lr=c->r[0]; // 801080C0
  c->r[1]=c->r[1]+0x00000040u; // 801080C4
  return; // 801080C8
}

// GXInitFogAdjTable
void f_801080CC(Ctx* __restrict c) {
  trace_call(0x801080CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801080CC
  c->r[0]=c->lr; // 801080D0
  W32(c->r[1]+0x00000084u,c->r[0]); // 801080D4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801080D8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801080DC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801080E0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801080E4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801080E8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801080EC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801080F0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801080F4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801080F8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801080FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 80108100
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 80108104
  {uint32_t ea=c->r[2]+0xFFFF8D70u; c->f[1]=RF64(ea);} // 80108108
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010810C
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108110
  W32(c->r[1]+0x00000018u,c->r[30]); // 80108114
  fcmp(c,0,c->f[1],c->f[0]); // 80108118
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010811C
  if (!crb(c,2)) { goto L_80108144; } // 80108120
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80108124
  {uint32_t ea=c->r[2]+0xFFFF8D3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108128
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010812C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80108130
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108134
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 80108138
  c->f[26]=c->ps1[26]=S(c->f[1]/c->f[0]); // 8010813C
  goto L_80108158; // 80108140
L_80108144:;
  {uint32_t ea=c->r[2]+0xFFFF8D3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80108144
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108148
  {uint32_t ea=c->r[2]+0xFFFF8D78u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010814C
  c->f[26]=c->ps1[26]=S(c->f[2]/c->f[1]); // 80108150
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[26]); // 80108154
L_80108158:;
  c->r[31]=0u+0x43300000u; // 80108158
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8010815C
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[28]=RF64(ea);} // 80108160
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[1]); // 80108164
  W32(c->r[1]+0x00000008u,c->r[31]); // 80108168
  c->r[30]=c->r[3]|c->r[3]; // 8010816C
  {uint32_t ea=c->r[2]+0xFFFF8D50u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108170
  c->r[29]=0u+0x00000000u; // 80108174
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80108178
  {uint32_t ea=c->r[2]+0xFFFF8D3Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8010817C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 80108180
  {uint32_t ea=c->r[2]+0xFFFF8D7Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80108184
  c->f[27]=c->ps1[27]=S(c->f[0]/c->f[1]); // 80108188
L_8010818C:;
  c->r[0]=c->r[29]+0x00000001u; // 8010818C
  W32(c->r[1]+0x00000008u,c->r[31]); // 80108190
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80108194
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80108198
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8010819C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 801081A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 801081A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[26]); // 801081A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801081AC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 801081B0
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 801081B4
  c->lr=0x801081BCu; f_8011AE8C(c); // 801081B8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801081BC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801081C0
  c->lr=0x801081C8u; f_80109E10(c); // 801081C4
  c->r[29]=c->r[29]+0x00000001u; // 801081C8
  c->r[0]=rotl(c->r[3],0)&0x00000FFFu; // 801081CC
  cmpu(c,0,c->r[29],0x0000000Au); // 801081D0
  W16(c->r[30]+0x00000000u,c->r[0]); // 801081D4
  c->r[30]=c->r[30]+0x00000002u; // 801081D8
  if (crb(c,0)) { IRQCHK(c); goto L_8010818C; } // 801081DC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801081E0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801081E4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801081E8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801081EC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801081F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801081F4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801081F8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801081FC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 80108200
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 80108204
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 80108208
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 8010820C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80108210
  c->r[30]=R32(c->r[1]+0x00000018u); // 80108214
  c->r[0]=R32(c->r[1]+0x00000084u); // 80108218
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010821C
  c->lr=c->r[0]; // 80108220
  c->r[1]=c->r[1]+0x00000080u; // 80108224
  return; // 80108228
}

// GXSetFogRangeAdj
void f_8010822C(Ctx* __restrict c) {
  trace_call(0x8010822Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 8010822C
  if (crb(c,2)) { goto L_80108318; } // 80108230
  c->r[12]=R16(c->r[5]+0x00000000u); // 80108234
  c->r[11]=0u+0x00000000u; // 80108238
  c->r[10]=R16(c->r[5]+0x00000002u); // 8010823C
  c->r[6]=0u+0xCC010000u; // 80108240
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 80108244
  c->r[0]=0u+0x00000061u; // 80108248
  c->r[9]=c->r[11]|c->r[11]; // 8010824C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108250
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 80108254
  c->r[7]=0u+0x000000E9u; // 80108258
  c->r[8]=c->r[9]|c->r[9]; // 8010825C
  c->r[12]=R16(c->r[5]+0x00000004u); // 80108260
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80108264
  c->r[11]=0u+0x00000000u; // 80108268
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 8010826C
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 80108270
  c->r[9]=c->r[11]|c->r[11]; // 80108274
  c->r[10]=R16(c->r[5]+0x00000006u); // 80108278
  c->r[7]=0u+0x000000EAu; // 8010827C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108280
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 80108284
  c->r[12]=R16(c->r[5]+0x00000008u); // 80108288
  c->r[8]=c->r[9]|c->r[9]; // 8010828C
  c->r[11]=0u+0x00000000u; // 80108290
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80108294
  c->r[10]=R16(c->r[5]+0x0000000Au); // 80108298
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 8010829C
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801082A0
  c->r[9]=c->r[11]|c->r[11]; // 801082A4
  c->r[7]=0u+0x000000EBu; // 801082A8
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801082AC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801082B0
  c->r[8]=c->r[9]|c->r[9]; // 801082B4
  c->r[12]=R16(c->r[5]+0x0000000Cu); // 801082B8
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801082BC
  c->r[11]=0u+0x00000000u; // 801082C0
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801082C4
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801082C8
  c->r[9]=c->r[11]|c->r[11]; // 801082CC
  c->r[10]=R16(c->r[5]+0x0000000Eu); // 801082D0
  c->r[7]=0u+0x000000ECu; // 801082D4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801082D8
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801082DC
  c->r[12]=R16(c->r[5]+0x00000010u); // 801082E0
  c->r[8]=c->r[9]|c->r[9]; // 801082E4
  c->r[11]=0u+0x00000000u; // 801082E8
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801082EC
  c->r[10]=R16(c->r[5]+0x00000012u); // 801082F0
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801082F4
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801082F8
  c->r[9]=c->r[11]|c->r[11]; // 801082FC
  c->r[7]=0u+0x000000EDu; // 80108300
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 80108304
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108308
  c->r[8]=c->r[9]|c->r[9]; // 8010830C
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 80108310
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 80108314
L_80108318:;
  c->r[0]=c->r[4]+0x00000156u; // 80108318
  c->r[6]=0u+0x00000000u; // 8010831C
  c->r[6]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 80108320
  c->r[4]=0u+0xCC010000u; // 80108324
  c->r[0]=0u+0x00000061u; // 80108328
  c->r[5]=0u+0x000000E8u; // 8010832C
  c->r[6]=(rotl(c->r[3],10)&0x00000400u)|(c->r[6]&~0x00000400u); // 80108330
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80108334
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80108338
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010833C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80108340
  c->r[0]=0u+0x00000000u; // 80108344
  W16(c->r[3]+0x00000002u,c->r[0]); // 80108348
  return; // 8010834C
}

// GXSetBlendMode
void f_80108350(Ctx* __restrict c) {
  trace_call(0x80108350u);
  c->r[10]=R32(c->r[2]+0xFFFF8C88u); // 80108350
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 80108354
  c->r[8]=c->r[3]+0xFFFFFFFEu; // 80108358
  c->r[7]=0u+0xCC010000u; // 8010835C
  c->r[0]=cntlz(c->r[0]); // 80108360
  c->r[9]=R32(c->r[10]+0x00000220u); // 80108364
  c->r[9]=(rotl(c->r[0],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 80108368
  c->r[8]=cntlz(c->r[8]); // 8010836C
  c->r[0]=0u+0x00000061u; // 80108370
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 80108374
  c->r[9]=(rotl(c->r[3],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 80108378
  c->r[9]=(rotl(c->r[8],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 8010837C
  c->r[0]=0u+0x00000000u; // 80108380
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 80108384
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 80108388
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 8010838C
  W32(c->r[7]+0xFFFF8000u,c->r[9]); // 80108390
  W32(c->r[10]+0x00000220u,c->r[9]); // 80108394
  W16(c->r[10]+0x00000002u,c->r[0]); // 80108398
  return; // 8010839C
}

// GXSetColorUpdate
void f_801083A0(Ctx* __restrict c) {
  trace_call(0x801083A0u);
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 801083A0
  c->r[4]=0u+0xCC010000u; // 801083A4
  c->r[5]=0u+0x00000061u; // 801083A8
  c->r[0]=0u+0x00000000u; // 801083AC
  c->r[6]=R32(c->r[7]+0x00000220u); // 801083B0
  c->r[6]=(rotl(c->r[3],3)&0x00000008u)|(c->r[6]&~0x00000008u); // 801083B4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801083B8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801083BC
  W32(c->r[7]+0x00000220u,c->r[6]); // 801083C0
  W16(c->r[7]+0x00000002u,c->r[0]); // 801083C4
  return; // 801083C8
}

// GXSetAlphaUpdate
void f_801083CC(Ctx* __restrict c) {
  trace_call(0x801083CCu);
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 801083CC
  c->r[4]=0u+0xCC010000u; // 801083D0
  c->r[5]=0u+0x00000061u; // 801083D4
  c->r[0]=0u+0x00000000u; // 801083D8
  c->r[6]=R32(c->r[7]+0x00000220u); // 801083DC
  c->r[6]=(rotl(c->r[3],4)&0x00000010u)|(c->r[6]&~0x00000010u); // 801083E0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801083E4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801083E8
  W32(c->r[7]+0x00000220u,c->r[6]); // 801083EC
  W16(c->r[7]+0x00000002u,c->r[0]); // 801083F0
  return; // 801083F4
}

// GXSetZMode
void f_801083F8(Ctx* __restrict c) {
  trace_call(0x801083F8u);
  c->r[9]=R32(c->r[2]+0xFFFF8C88u); // 801083F8
  c->r[6]=0u+0xCC010000u; // 801083FC
  c->r[7]=0u+0x00000061u; // 80108400
  c->r[0]=0u+0x00000000u; // 80108404
  c->r[8]=R32(c->r[9]+0x00000228u); // 80108408
  c->r[8]=(rotl(c->r[3],0)&0x00000001u)|(c->r[8]&~0x00000001u); // 8010840C
  c->r[8]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[8]&~0x0000000Eu); // 80108410
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80108414
  c->r[8]=(rotl(c->r[5],4)&0x00000010u)|(c->r[8]&~0x00000010u); // 80108418
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 8010841C
  W32(c->r[9]+0x00000228u,c->r[8]); // 80108420
  W16(c->r[9]+0x00000002u,c->r[0]); // 80108424
  return; // 80108428
}

// GXSetZCompLoc
void f_8010842C(Ctx* __restrict c) {
  trace_call(0x8010842Cu);
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 8010842C
  c->r[4]=0u+0xCC010000u; // 80108430
  c->r[5]=0u+0x00000061u; // 80108434
  c->r[0]=0u+0x00000000u; // 80108438
  c->r[6]=R32(c->r[7]+0x0000022Cu); // 8010843C
  c->r[6]=(rotl(c->r[3],6)&0x00000040u)|(c->r[6]&~0x00000040u); // 80108440
  W32(c->r[7]+0x0000022Cu,c->r[6]); // 80108444
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80108448
  c->r[3]=R32(c->r[7]+0x0000022Cu); // 8010844C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 80108450
  W16(c->r[7]+0x00000002u,c->r[0]); // 80108454
  return; // 80108458
}

// GXSetPixelFmt
void f_8010845C(Ctx* __restrict c) {
  trace_call(0x8010845Cu);
  c->r[9]=R32(c->r[2]+0xFFFF8C88u); // 8010845C
  c->r[6]=0u+0x80290000u; // 80108460
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80108464
  c->r[6]=c->r[6]+0x00006048u; // 80108468
  c->r[8]=R32(c->r[9]+0x0000022Cu); // 8010846C
  c->r[0]=R32(c->r[6]+c->r[7]); // 80108470
  c->r[5]=c->r[8]|c->r[8]; // 80108474
  c->r[5]=(rotl(c->r[0],0)&0x00000007u)|(c->r[5]&~0x00000007u); // 80108478
  c->r[5]=(rotl(c->r[4],3)&0x00000038u)|(c->r[5]&~0x00000038u); // 8010847C
  cmpu(c,0,c->r[8],c->r[5]); // 80108480
  W32(c->r[9]+0x0000022Cu,c->r[5]); // 80108484
  if (crb(c,2)) { goto L_801084C0; } // 80108488
  c->r[5]=0u+0xCC010000u; // 8010848C
  c->r[0]=0u+0x00000061u; // 80108490
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108494
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80108498
  c->r[4]=cntlz(c->r[0]); // 8010849C
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 801084A0
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801084A4
  c->r[0]=R32(c->r[9]+0x00000254u); // 801084A8
  c->r[0]=(rotl(c->r[4],4)&0x00000200u)|(c->r[0]&~0x00000200u); // 801084AC
  W32(c->r[9]+0x00000254u,c->r[0]); // 801084B0
  c->r[0]=R32(c->r[9]+0x000005FCu); // 801084B4
  c->r[0]=c->r[0]|0x00000004u; // 801084B8
  W32(c->r[9]+0x000005FCu,c->r[0]); // 801084BC
L_801084C0:;
  c->r[0]=R32(c->r[6]+c->r[7]); // 801084C0
  cmpu(c,0,c->r[0],0x00000004u); // 801084C4
  if (!crb(c,2)) { goto L_801084F8; } // 801084C8
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801084CC
  c->r[4]=R32(c->r[9]+0x00000224u); // 801084D0
  c->r[4]=(rotl(c->r[0],9)&0x00000600u)|(c->r[4]&~0x00000600u); // 801084D4
  c->r[3]=0u+0xCC010000u; // 801084D8
  c->r[0]=0u+0x00000042u; // 801084DC
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801084E0
  W32(c->r[9]+0x00000224u,c->r[4]); // 801084E4
  c->r[0]=0u+0x00000061u; // 801084E8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801084EC
  c->r[0]=R32(c->r[9]+0x00000224u); // 801084F0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801084F4
L_801084F8:;
  c->r[0]=0u+0x00000000u; // 801084F8
  W16(c->r[9]+0x00000002u,c->r[0]); // 801084FC
  return; // 80108500
}

// GXSetDither
void f_80108504(Ctx* __restrict c) {
  trace_call(0x80108504u);
  c->r[7]=R32(c->r[2]+0xFFFF8C88u); // 80108504
  c->r[4]=0u+0xCC010000u; // 80108508
  c->r[5]=0u+0x00000061u; // 8010850C
  c->r[0]=0u+0x00000000u; // 80108510
  c->r[6]=R32(c->r[7]+0x00000220u); // 80108514
  c->r[6]=(rotl(c->r[3],2)&0x00000004u)|(c->r[6]&~0x00000004u); // 80108518
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8010851C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 80108520
  W32(c->r[7]+0x00000220u,c->r[6]); // 80108524
  W16(c->r[7]+0x00000002u,c->r[0]); // 80108528
  return; // 8010852C
}

// GXSetDstAlpha
void f_80108530(Ctx* __restrict c) {
  trace_call(0x80108530u);
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 80108530
  c->r[5]=0u+0xCC010000u; // 80108534
  c->r[6]=0u+0x00000061u; // 80108538
  c->r[0]=0u+0x00000000u; // 8010853C
  c->r[7]=R32(c->r[8]+0x00000224u); // 80108540
  c->r[7]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 80108544
  c->r[7]=(rotl(c->r[3],8)&0x00000100u)|(c->r[7]&~0x00000100u); // 80108548
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8010854C
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 80108550
  W32(c->r[8]+0x00000224u,c->r[7]); // 80108554
  W16(c->r[8]+0x00000002u,c->r[0]); // 80108558
  return; // 8010855C
}

// GXSetFieldMask
void f_80108560(Ctx* __restrict c) {
  trace_call(0x80108560u);
  c->r[5]=0u+0xCC010000u; // 80108560
  c->r[0]=0u+0x00000061u; // 80108564
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108568
  c->r[0]=0u+0x00000044u; // 8010856C
  c->r[6]=0u+0x00000000u; // 80108570
  c->r[6]=(rotl(c->r[4],0)&0x00000001u)|(c->r[6]&~0x00000001u); // 80108574
  c->r[6]=(rotl(c->r[3],1)&0x00000002u)|(c->r[6]&~0x00000002u); // 80108578
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 8010857C
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80108580
  c->r[0]=0u+0x00000000u; // 80108584
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80108588
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010858C
  return; // 80108590
}

// GXSetFieldMode
void f_80108594(Ctx* __restrict c) {
  trace_call(0x80108594u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108594
  c->r[0]=c->lr; // 80108598
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 8010859C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801085A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801085A4
  c->r[31]=0u+0xCC010000u; // 801085A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801085AC
  c->r[30]=0u+0x00000061u; // 801085B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801085B4
  c->r[29]=c->r[3]|c->r[3]; // 801085B8
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 801085BC
  c->r[0]=(rotl(c->r[4],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 801085C0
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 801085C4
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 801085C8
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 801085CC
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 801085D0
  c->lr=0x801085D8u; f_801077FC(c); // 801085D4
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 801085D8
  c->r[0]=c->r[29]|0x68000000u; // 801085DC
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 801085E0
  c->lr=0x801085E8u; f_801077FC(c); // 801085E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801085E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801085EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801085F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801085F4
  c->lr=c->r[0]; // 801085F8
  c->r[1]=c->r[1]+0x00000020u; // 801085FC
  return; // 80108600
}

// GXCallDisplayList
void f_80108604(Ctx* __restrict c) {
  trace_call(0x80108604u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108604
  c->r[0]=c->lr; // 80108608
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010860C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80108610
  c->r[31]=R32(c->r[2]+0xFFFF8C88u); // 80108614
  W32(c->r[1]+0x00000018u,c->r[30]); // 80108618
  c->r[30]=c->r[4]|c->r[4]; // 8010861C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80108620
  c->r[29]=c->r[3]|c->r[3]; // 80108624
  c->r[0]=R32(c->r[31]+0x000005FCu); // 80108628
  cmps(c,0,(int32_t)c->r[0],0); // 8010862C
  if (crb(c,2)) { goto L_80108638; } // 80108630
  c->lr=0x80108638u; f_80104BB8(c); // 80108634
L_80108638:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80108638
  cmps(c,0,(int32_t)c->r[0],0); // 8010863C
  if (!crb(c,2)) { goto L_80108648; } // 80108640
  c->lr=0x80108648u; f_80104F7C(c); // 80108644
L_80108648:;
  c->r[3]=0u+0xCC010000u; // 80108648
  c->r[0]=0u+0x00000040u; // 8010864C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80108650
  W32(c->r[3]+0xFFFF8000u,c->r[29]); // 80108654
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 80108658
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010865C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80108660
  c->r[30]=R32(c->r[1]+0x00000018u); // 80108664
  c->r[29]=R32(c->r[1]+0x00000014u); // 80108668
  c->lr=c->r[0]; // 8010866C
  c->r[1]=c->r[1]+0x00000020u; // 80108670
  return; // 80108674
}

// GXProject
void f_80108678(Ctx* __restrict c) {
  trace_call(0x80108678u);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80108678
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8010867C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108680
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[1]); // 80108684
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80108688
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[2]); // 8010868C
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[1]); // 80108690
  {uint32_t ea=c->r[3]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 80108694
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[2]); // 80108698
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[1]); // 8010869C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801086A0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 801086A4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[2]); // 801086A8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[10]=c->ps1[10]=RF32(ea);} // 801086AC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 801086B0
  c->f[13]=c->ps1[13]=S(c->f[11]*c->f[3]); // 801086B4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 801086B8
  c->f[0]=c->ps1[0]=S(c->f[12]+c->f[7]); // 801086BC
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 801086C0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801086C4
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[3]); // 801086C8
  c->f[9]=c->ps1[9]=S(c->f[13]+c->f[0]); // 801086CC
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801086D0
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[3]); // 801086D4
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[4]); // 801086D8
  {uint32_t ea=c->r[2]+0xFFFF8D88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801086DC
  c->f[4]=c->ps1[4]=S(c->f[10]+c->f[8]); // 801086E0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801086E4
  c->f[9]=c->ps1[9]=S(c->f[11]+c->f[9]); // 801086E8
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801086EC
  c->f[8]=c->ps1[8]=S(c->f[7]+c->f[4]); // 801086F0
  c->f[3]=c->ps1[3]=S(c->f[6]+c->f[3]); // 801086F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 801086F8
  fcmp(c,0,c->f[1],c->f[0]); // 801086FC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 80108700
  c->f[7]=c->ps1[7]=S(c->f[2]+c->f[3]); // 80108704
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 80108708
  if (!crb(c,2)) { goto L_80108758; } // 8010870C
  c->f[1]=-c->f[7]; // 80108710
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108714
  {uint32_t ea=c->r[4]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 80108718
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8010871C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80108720
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80108724
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80108728
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010872C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108730
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 80108734
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[6]); // 80108738
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[5]); // 8010873C
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[3]); // 80108740
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[4]); // 80108744
  c->f[7]=c->ps1[7]=S(c->f[6]+c->f[5]); // 80108748
  c->f[10]=c->ps1[10]=S(c->f[1]+c->f[2]); // 8010874C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80108750
  goto L_8010878C; // 80108754
L_80108758:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80108758
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010875C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108760
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[2]); // 80108764
  c->f[4]=c->ps1[4]=S(c->f[8]*c->f[1]); // 80108768
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010876C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[0]); // 80108770
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80108774
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108778
  c->f[7]=c->ps1[7]=S(c->f[5]+c->f[6]); // 8010877C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 80108780
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108784
  c->f[10]=c->ps1[10]=S(c->f[1]+c->f[2]); // 80108788
L_8010878C:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8010878C
  c->f[1]=-c->f[3]; // 80108790
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80108794
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[6]); // 80108798
  {uint32_t ea=c->r[2]+0xFFFF8D90u; c->f[9]=c->ps1[9]=RF32(ea);} // 8010879C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[5]); // 801087A0
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801087A4
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801087A8
  c->f[8]=c->ps1[8]=S(c->f[6]*c->f[9]); // 801087AC
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[9]); // 801087B0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 801087B4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[9]); // 801087B8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801087BC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801087C0
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 801087C4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 801087C8
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[1]); // 801087CC
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[7]); // 801087D0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 801087D4
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[9]); // 801087D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801087DC
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[6]); // 801087E0
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[3]); // 801087E4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801087E8
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[4]);} // 801087EC
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 801087F0
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 801087F4
  c->r[1]=c->r[1]+0x00000020u; // 801087F8
  return; // 801087FC
}

// __GXSetProjection
void f_80108800(Ctx* __restrict c) {
  trace_call(0x80108800u);
  c->r[4]=0u+0xCC010000u; // 80108800
  c->r[0]=0u+0x00000010u; // 80108804
  c->r[3]=0u+0x00060000u; // 80108808
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8010880C
  c->r[0]=c->r[3]+0x00001020u; // 80108810
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80108814
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80108818
  c->r[5]=c->r[4]+0xFFFF8000u; // 8010881C
  {uint32_t ea=c->r[3]+0x0000052Cu; psq_load(c,2,ea,0,0);} // 80108820
  {uint32_t ea=c->r[3]+0x00000534u; psq_load(c,1,ea,0,0);} // 80108824
  {uint32_t ea=c->r[3]+0x0000053Cu; psq_load(c,0,ea,0,0);} // 80108828
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 8010882C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 80108830
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 80108834
  c->r[0]=R32(c->r[3]+0x00000528u); // 80108838
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8010883C
  return; // 80108840
}

// GXSetProjection
void f_80108844(Ctx* __restrict c) {
  trace_call(0x80108844u);
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80108844
  cmps(c,0,(int32_t)c->r[4],1); // 80108848
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010884C
  W32(c->r[5]+0x00000528u,c->r[4]); // 80108850
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108854
  {uint32_t ea=c->r[5]+0x0000052Cu; WF32(ea,c->f[1]);} // 80108858
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010885C
  {uint32_t ea=c->r[5]+0x00000534u; WF32(ea,c->f[0]);} // 80108860
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108864
  {uint32_t ea=c->r[5]+0x0000053Cu; WF32(ea,c->f[1]);} // 80108868
  {uint32_t ea=c->r[5]+0x00000540u; WF32(ea,c->f[0]);} // 8010886C
  if (!crb(c,2)) { goto L_80108888; } // 80108870
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80108874
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108878
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[1]);} // 8010887C
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 80108880
  goto L_80108898; // 80108884
L_80108888:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108888
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010888C
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[1]);} // 80108890
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 80108894
L_80108898:;
  c->r[0]=R32(c->r[5]+0x000005FCu); // 80108898
  c->r[0]=c->r[0]|0x08000000u; // 8010889C
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801088A0
  return; // 801088A4
}

// GXSetProjectionv
void f_801088A8(Ctx* __restrict c) {
  trace_call(0x801088A8u);
  {uint32_t ea=c->r[2]+0xFFFF8D88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801088A8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801088AC
  fcmp(c,0,c->f[1],c->f[0]); // 801088B0
  if (!crb(c,2)) { goto L_801088C0; } // 801088B4
  c->r[0]=0u+0x00000000u; // 801088B8
  goto L_801088C4; // 801088BC
L_801088C0:;
  c->r[0]=0u+0x00000001u; // 801088C0
L_801088C4:;
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 801088C4
  W32(c->r[4]+0x00000528u,c->r[0]); // 801088C8
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 801088CC
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 801088D0
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,0,ea,0,0);} // 801088D4
  {uint32_t ea=c->r[4]+0x0000052Cu; psq_store(c,2,ea,0,0);} // 801088D8
  {uint32_t ea=c->r[4]+0x00000534u; psq_store(c,1,ea,0,0);} // 801088DC
  {uint32_t ea=c->r[4]+0x0000053Cu; psq_store(c,0,ea,0,0);} // 801088E0
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801088E4
  c->r[0]=c->r[0]|0x08000000u; // 801088E8
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801088EC
  return; // 801088F0
}

// GXGetProjectionv
void f_801088F4(Ctx* __restrict c) {
  trace_call(0x801088F4u);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 801088F4
  c->r[0]=R32(c->r[4]+0x00000528u); // 801088F8
  cmps(c,0,(int32_t)c->r[0],0); // 801088FC
  if (crb(c,2)) { goto L_8010890C; } // 80108900
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108904
  goto L_80108910; // 80108908
L_8010890C:;
  {uint32_t ea=c->r[2]+0xFFFF8D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010890C
L_80108910:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80108910
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80108914
  {uint32_t ea=c->r[4]+0x0000052Cu; psq_load(c,2,ea,0,0);} // 80108918
  {uint32_t ea=c->r[4]+0x00000534u; psq_load(c,1,ea,0,0);} // 8010891C
  {uint32_t ea=c->r[4]+0x0000053Cu; psq_load(c,0,ea,0,0);} // 80108920
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,2,ea,0,0);} // 80108924
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,1,ea,0,0);} // 80108928
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,0,ea,0,0);} // 8010892C
  return; // 80108930
}

// GXLoadPosMtxImm
void f_80108934(Ctx* __restrict c) {
  trace_call(0x80108934u);
  c->r[5]=0u+0xCC010000u; // 80108934
  c->r[0]=0u+0x00000010u; // 80108938
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8010893C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108940
  c->r[0]=c->r[4]|0x000B0000u; // 80108944
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80108948
  c->r[4]=c->r[5]+0xFFFF8000u; // 8010894C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 80108950
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 80108954
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 80108958
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8010895C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 80108960
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 80108964
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 80108968
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 8010896C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 80108970
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80108974
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80108978
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8010897C
  return; // 80108980
}

// GXLoadPosMtxIndx
void f_80108984(Ctx* __restrict c) {
  trace_call(0x80108984u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80108984
  c->r[6]=0u+0x00000000u; // 80108988
  c->r[6]=(rotl(c->r[0],0)&0x00000FFFu)|(c->r[6]&~0x00000FFFu); // 8010898C
  c->r[4]=0u+0xCC010000u; // 80108990
  c->r[0]=0u+0x00000020u; // 80108994
  c->r[5]=0u+0x0000000Bu; // 80108998
  c->r[6]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[6]&~0x0000F000u); // 8010899C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801089A0
  c->r[6]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 801089A4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801089A8
  return; // 801089AC
}

// GXLoadNrmMtxImm
void f_801089B0(Ctx* __restrict c) {
  trace_call(0x801089B0u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801089B0
  c->r[5]=0u+0xCC010000u; // 801089B4
  c->r[4]=c->r[0]-c->r[4]; // 801089B8
  c->r[0]=0u+0x00000010u; // 801089BC
  c->r[4]=c->r[4]+0x00000400u; // 801089C0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801089C4
  c->r[0]=c->r[4]|0x00080000u; // 801089C8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801089CC
  c->r[4]=c->r[5]+0xFFFF8000u; // 801089D0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 801089D4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801089D8
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 801089DC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801089E0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 801089E4
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801089E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 801089EC
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[4]);} // 801089F0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 801089F4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801089F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801089FC
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80108A00
  return; // 80108A04
}

// GXLoadNrmMtxIndx3x3
void f_80108A08(Ctx* __restrict c) {
  trace_call(0x80108A08u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80108A08
  c->r[5]=0u+0xCC010000u; // 80108A0C
  c->r[4]=c->r[0]-c->r[4]; // 80108A10
  c->r[6]=0u+0x00000000u; // 80108A14
  c->r[0]=0u+0x00000028u; // 80108A18
  c->r[4]=c->r[4]+0x00000400u; // 80108A1C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108A20
  c->r[6]=(rotl(c->r[4],0)&0x00000FFFu)|(c->r[6]&~0x00000FFFu); // 80108A24
  c->r[4]=0u+0x00000008u; // 80108A28
  c->r[6]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[6]&~0x0000F000u); // 80108A2C
  c->r[6]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 80108A30
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80108A34
  return; // 80108A38
}

// GXSetCurrentMtx
void f_80108A3C(Ctx* __restrict c) {
  trace_call(0x80108A3Cu);
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80108A3C
  c->r[0]=R32(c->r[4]+0x00000080u); // 80108A40
  c->r[0]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 80108A44
  W32(c->r[4]+0x00000080u,c->r[0]); // 80108A48
  c->r[0]=R32(c->r[4]+0x000005FCu); // 80108A4C
  c->r[0]=c->r[0]|0x04000000u; // 80108A50
  W32(c->r[4]+0x000005FCu,c->r[0]); // 80108A54
  return; // 80108A58
}

// GXLoadTexMtxImm
void f_80108A5C(Ctx* __restrict c) {
  trace_call(0x80108A5Cu);
  cmpu(c,0,c->r[4],0x00000040u); // 80108A5C
  if (crb(c,0)) { goto L_80108A74; } // 80108A60
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 80108A64
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80108A68
  c->r[7]=c->r[4]+0x00000500u; // 80108A6C
  goto L_80108A78; // 80108A70
L_80108A74:;
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80108A74
L_80108A78:;
  cmps(c,0,(int32_t)c->r[5],1); // 80108A78
  if (!crb(c,2)) { goto L_80108A88; } // 80108A7C
  c->r[4]=0u+0x00000008u; // 80108A80
  goto L_80108A8C; // 80108A84
L_80108A88:;
  c->r[4]=0u+0x0000000Cu; // 80108A88
L_80108A8C:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 80108A8C
  c->r[4]=0u+0xCC010000u; // 80108A90
  c->r[0]=0u+0x00000010u; // 80108A94
  cmps(c,0,(int32_t)c->r[5],0); // 80108A98
  c->r[5]=rotl(c->r[6],16)&0xFFFF0000u; // 80108A9C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80108AA0
  c->r[0]=c->r[7]|c->r[5]; // 80108AA4
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80108AA8
  if (!crb(c,2)) { goto L_80108AE8; } // 80108AAC
  c->r[4]=c->r[4]+0xFFFF8000u; // 80108AB0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 80108AB4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 80108AB8
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 80108ABC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 80108AC0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 80108AC4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 80108AC8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 80108ACC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 80108AD0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 80108AD4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80108AD8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80108ADC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80108AE0
  return; // 80108AE4
L_80108AE8:;
  c->r[4]=c->r[4]+0xFFFF8000u; // 80108AE8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 80108AEC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 80108AF0
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 80108AF4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 80108AF8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 80108AFC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80108B00
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 80108B04
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80108B08
  return; // 80108B0C
}

// __GXSetViewport
void f_80108B10(Ctx* __restrict c) {
  trace_call(0x80108B10u);
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80108B10
  c->r[3]=0u+0x00050000u; // 80108B14
  {uint32_t ea=c->r[2]+0xFFFF8D90u; c->f[6]=c->ps1[6]=RF32(ea);} // 80108B18
  c->r[4]=0u+0xCC010000u; // 80108B1C
  {uint32_t ea=c->r[6]+0x00000550u; c->f[2]=c->ps1[2]=RF32(ea);} // 80108B20
  c->r[5]=0u+0x00000010u; // 80108B24
  {uint32_t ea=c->r[6]+0x0000054Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80108B28
  c->r[0]=c->r[3]+0x0000101Au; // 80108B2C
  c->f[1]=-c->f[2]; // 80108B30
  {uint32_t ea=c->r[6]+0x00000544u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108B34
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[6]); // 80108B38
  {uint32_t ea=c->r[6]+0x00000548u; c->f[4]=c->ps1[4]=RF32(ea);} // 80108B3C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[6]); // 80108B40
  {uint32_t ea=c->r[6]+0x00000554u; c->f[3]=c->ps1[3]=RF32(ea);} // 80108B44
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[6]); // 80108B48
  {uint32_t ea=c->r[6]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 80108B4C
  {uint32_t ea=c->r[6]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108B50
  c->f[6]=c->ps1[6]=S(c->f[0]+c->f[7]); // 80108B54
  {uint32_t ea=c->r[6]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80108B58
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 80108B5C
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[2]); // 80108B60
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80108B64
  {uint32_t ea=c->r[2]+0xFFFF8D94u; c->f[2]=c->ps1[2]=RF32(ea);} // 80108B68
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 80108B6C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80108B70
  c->f[3]=c->ps1[3]=S(c->f[9]-c->f[3]); // 80108B74
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[7]);} // 80108B78
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[6]); // 80108B7C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80108B80
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[8]);} // 80108B84
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[0]); // 80108B88
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 80108B8C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 80108B90
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80108B94
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80108B98
  return; // 80108B9C
}

// GXSetViewportJitter
void f_80108BA0(Ctx* __restrict c) {
  trace_call(0x80108BA0u);
  cmps(c,0,(int32_t)c->r[3],0); // 80108BA0
  if (!crb(c,2)) { goto L_80108BB0; } // 80108BA4
  {uint32_t ea=c->r[2]+0xFFFF8D90u; c->f[0]=c->ps1[0]=RF32(ea);} // 80108BA8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80108BAC
L_80108BB0:;
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80108BB0
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 80108BB4
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 80108BB8
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 80108BBC
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 80108BC0
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 80108BC4
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 80108BC8
  c->r[0]=R32(c->r[3]+0x000005FCu); // 80108BCC
  c->r[0]=c->r[0]|0x10000000u; // 80108BD0
  W32(c->r[3]+0x000005FCu,c->r[0]); // 80108BD4
  return; // 80108BD8
}

// GXSetViewport
void f_80108BDC(Ctx* __restrict c) {
  trace_call(0x80108BDCu);
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80108BDC
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 80108BE0
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 80108BE4
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 80108BE8
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 80108BEC
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 80108BF0
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 80108BF4
  c->r[0]=R32(c->r[3]+0x000005FCu); // 80108BF8
  c->r[0]=c->r[0]|0x10000000u; // 80108BFC
  W32(c->r[3]+0x000005FCu,c->r[0]); // 80108C00
  return; // 80108C04
}

// GXSetScissor
void f_80108C08(Ctx* __restrict c) {
  trace_call(0x80108C08u);
  c->r[8]=R32(c->r[2]+0xFFFF8C88u); // 80108C08
  c->r[4]=c->r[4]+0x00000156u; // 80108C0C
  c->r[9]=c->r[3]+0x00000156u; // 80108C10
  c->r[7]=0u+0xCC010000u; // 80108C14
  c->r[0]=R32(c->r[8]+0x00000148u); // 80108C18
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 80108C1C
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 80108C20
  c->r[6]=c->r[4]+c->r[6]; // 80108C24
  W32(c->r[8]+0x00000148u,c->r[0]); // 80108C28
  c->r[3]=c->r[9]+c->r[5]; // 80108C2C
  c->r[5]=c->r[6]+0xFFFFFFFFu; // 80108C30
  c->r[4]=0u+0x00000061u; // 80108C34
  c->r[6]=R32(c->r[8]+0x0000014Cu); // 80108C38
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80108C3C
  c->r[6]=(rotl(c->r[5],0)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 80108C40
  c->r[0]=0u+0x00000000u; // 80108C44
  c->r[6]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[6]&~0x007FF000u); // 80108C48
  W32(c->r[8]+0x0000014Cu,c->r[6]); // 80108C4C
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80108C50
  c->r[3]=R32(c->r[8]+0x00000148u); // 80108C54
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80108C58
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80108C5C
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 80108C60
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80108C64
  W16(c->r[8]+0x00000002u,c->r[0]); // 80108C68
  return; // 80108C6C
}

// GXSetScissorBoxOffset
void f_80108C70(Ctx* __restrict c) {
  trace_call(0x80108C70u);
  c->r[0]=c->r[3]+0x00000156u; // 80108C70
  c->r[6]=0u+0x00000000u; // 80108C74
  c->r[6]=(rotl(c->r[0],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 80108C78
  c->r[5]=0u+0xCC010000u; // 80108C7C
  c->r[0]=0u+0x00000061u; // 80108C80
  c->r[3]=c->r[4]+0x00000156u; // 80108C84
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108C88
  c->r[6]=(rotl(c->r[3],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 80108C8C
  c->r[0]=0u+0x00000059u; // 80108C90
  c->r[3]=R32(c->r[2]+0xFFFF8C88u); // 80108C94
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80108C98
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80108C9C
  c->r[0]=0u+0x00000000u; // 80108CA0
  W16(c->r[3]+0x00000002u,c->r[0]); // 80108CA4
  return; // 80108CA8
}

// GXSetClipMode
void f_80108CAC(Ctx* __restrict c) {
  trace_call(0x80108CACu);
  c->r[6]=0u+0xCC010000u; // 80108CAC
  c->r[0]=0u+0x00000010u; // 80108CB0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108CB4
  c->r[5]=0u+0x00001005u; // 80108CB8
  c->r[4]=R32(c->r[2]+0xFFFF8C88u); // 80108CBC
  c->r[0]=0u+0x00000001u; // 80108CC0
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 80108CC4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108CC8
  W16(c->r[4]+0x00000002u,c->r[0]); // 80108CCC
  return; // 80108CD0
}

// __GXSetMatrixIndex
void f_80108CD4(Ctx* __restrict c) {
  trace_call(0x80108CD4u);
  cmps(c,0,(int32_t)c->r[3],5); // 80108CD4
  if (!crb(c,0)) { goto L_80108D18; } // 80108CD8
  c->r[5]=0u+0xCC010000u; // 80108CDC
  c->r[0]=0u+0x00000008u; // 80108CE0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108CE4
  c->r[0]=0u+0x00000030u; // 80108CE8
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80108CEC
  c->r[3]=0u+0x00000010u; // 80108CF0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108CF4
  c->r[0]=0u+0x00001018u; // 80108CF8
  c->r[4]=R32(c->r[6]+0x00000080u); // 80108CFC
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80108D00
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 80108D04
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80108D08
  c->r[0]=R32(c->r[6]+0x00000080u); // 80108D0C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80108D10
  goto L_80108D50; // 80108D14
L_80108D18:;
  c->r[5]=0u+0xCC010000u; // 80108D18
  c->r[0]=0u+0x00000008u; // 80108D1C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108D20
  c->r[0]=0u+0x00000040u; // 80108D24
  c->r[6]=R32(c->r[2]+0xFFFF8C88u); // 80108D28
  c->r[3]=0u+0x00000010u; // 80108D2C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80108D30
  c->r[0]=0u+0x00001019u; // 80108D34
  c->r[4]=R32(c->r[6]+0x00000084u); // 80108D38
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80108D3C
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 80108D40
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80108D44
  c->r[0]=R32(c->r[6]+0x00000084u); // 80108D48
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80108D4C
L_80108D50:;
  c->r[0]=0u+0x00000001u; // 80108D50
  W16(c->r[6]+0x00000002u,c->r[0]); // 80108D54
  return; // 80108D58
}

// GXSetGPMetric
void f_80108D5C(Ctx* __restrict c) {
  trace_call(0x80108D5Cu);
  c->r[5]=R32(c->r[2]+0xFFFF8C88u); // 80108D5C
  c->r[0]=R32(c->r[5]+0x000005ECu); // 80108D60
  cmps(c,0,(int32_t)c->r[0],34); // 80108D64
  if (crb(c,2)) { goto L_80108D94; } // 80108D68
  if (!crb(c,0)) { goto L_80108DE0; } // 80108D6C
  cmps(c,0,(int32_t)c->r[0],11); // 80108D70
  if (!crb(c,0)) { goto L_80108D84; } // 80108D74
  cmps(c,0,(int32_t)c->r[0],0); // 80108D78
  if (!crb(c,0)) { goto L_80108D94; } // 80108D7C
  goto L_80108DE0; // 80108D80
L_80108D84:;
  cmps(c,0,(int32_t)c->r[0],27); // 80108D84
  if (!crb(c,0)) { goto L_80108DCC; } // 80108D88
  goto L_80108DB4; // 80108D8C
  goto L_80108DE0; // 80108D90
L_80108D94:;
  c->r[7]=0u+0xCC010000u; // 80108D94
  c->r[0]=0u+0x00000010u; // 80108D98
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 80108D9C
  c->r[6]=0u+0x00001006u; // 80108DA0
  c->r[0]=0u+0x00000000u; // 80108DA4
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 80108DA8
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80108DAC
  goto L_80108DE0; // 80108DB0
L_80108DB4:;
  c->r[6]=0u+0xCC010000u; // 80108DB4
  c->r[0]=0u+0x00000061u; // 80108DB8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108DBC
  c->r[0]=0u+0x23000000u; // 80108DC0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108DC4
  goto L_80108DE0; // 80108DC8
L_80108DCC:;
  c->r[6]=0u+0xCC010000u; // 80108DCC
  c->r[0]=0u+0x00000061u; // 80108DD0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108DD4
  c->r[0]=0u+0x24000000u; // 80108DD8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108DDC
L_80108DE0:;
  c->r[0]=R32(c->r[5]+0x000005F0u); // 80108DE0
  cmps(c,0,(int32_t)c->r[0],21); // 80108DE4
  if (crb(c,2)) { goto L_80108E14; } // 80108DE8
  if (!crb(c,0)) { goto L_80108E64; } // 80108DEC
  cmps(c,0,(int32_t)c->r[0],9); // 80108DF0
  if (!crb(c,0)) { goto L_80108E04; } // 80108DF4
  cmps(c,0,(int32_t)c->r[0],0); // 80108DF8
  if (!crb(c,0)) { goto L_80108E14; } // 80108DFC
  goto L_80108E64; // 80108E00
L_80108E04:;
  cmps(c,0,(int32_t)c->r[0],17); // 80108E04
  if (!crb(c,0)) { goto L_80108E58; } // 80108E08
  goto L_80108E2C; // 80108E0C
  goto L_80108E64; // 80108E10
L_80108E14:;
  c->r[6]=0u+0xCC010000u; // 80108E14
  c->r[0]=0u+0x00000061u; // 80108E18
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108E1C
  c->r[0]=0u+0x67000000u; // 80108E20
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108E24
  goto L_80108E64; // 80108E28
L_80108E2C:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 80108E2C
  c->r[6]=0u+0xCC010000u; // 80108E30
  c->r[7]=0u+0x00000008u; // 80108E34
  c->r[0]=0u+0x00000020u; // 80108E38
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 80108E3C
  W32(c->r[5]+0x000005F4u,c->r[8]); // 80108E40
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80108E44
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108E48
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80108E4C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108E50
  goto L_80108E64; // 80108E54
L_80108E58:;
  c->r[6]=R32(c->r[13]+0xFFFF9A1Cu); // 80108E58
  c->r[0]=0u+0x00000000u; // 80108E5C
  W16(c->r[6]+0x00000006u,c->r[0]); // 80108E60
L_80108E64:;
  cmpu(c,0,c->r[3],0x00000023u); // 80108E64
  W32(c->r[5]+0x000005ECu,c->r[3]); // 80108E68
  if (crb(c,1)) { goto L_80109288; } // 80108E6C
  c->r[6]=0u+0x80290000u; // 80108E70
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80108E74
  c->r[6]=c->r[6]+0x000060C4u; // 80108E78
  c->r[6]=R32(c->r[6]+c->r[0]); // 80108E7C
  c->ctr=c->r[6]; // 80108E80
  if (true) { switch (c->ctr) { case 0x80108E88u: goto L_80108E88; case 0x80108EA8u: goto L_80108EA8; case 0x80108EC8u: goto L_80108EC8; case 0x80108EE8u: goto L_80108EE8; case 0x80108F08u: goto L_80108F08; case 0x80108F28u: goto L_80108F28; case 0x80108F48u: goto L_80108F48; case 0x80108F68u: goto L_80108F68; case 0x80108F88u: goto L_80108F88; case 0x80108FA8u: goto L_80108FA8; case 0x80108FC8u: goto L_80108FC8; case 0x80108FE8u: goto L_80108FE8; case 0x80109008u: goto L_80109008; case 0x80109024u: goto L_80109024; case 0x80109040u: goto L_80109040; case 0x8010905Cu: goto L_8010905C; case 0x80109078u: goto L_80109078; case 0x80109094u: goto L_80109094; case 0x801090B0u: goto L_801090B0; case 0x801090CCu: goto L_801090CC; case 0x801090E8u: goto L_801090E8; case 0x80109104u: goto L_80109104; case 0x80109120u: goto L_80109120; case 0x8010913Cu: goto L_8010913C; case 0x80109158u: goto L_80109158; case 0x80109174u: goto L_80109174; case 0x80109190u: goto L_80109190; case 0x801091ACu: goto L_801091AC; case 0x801091C8u: goto L_801091C8; case 0x801091E4u: goto L_801091E4; case 0x80109200u: goto L_80109200; case 0x8010921Cu: goto L_8010921C; case 0x80109238u: goto L_80109238; case 0x80109254u: goto L_80109254; case 0x80109270u: goto L_80109270; case 0x80109288u: goto L_80109288; case 0x801092ACu: goto L_801092AC; case 0x801092C8u: goto L_801092C8; case 0x801092E4u: goto L_801092E4; case 0x80109300u: goto L_80109300; case 0x8010931Cu: goto L_8010931C; case 0x80109338u: goto L_80109338; case 0x80109354u: goto L_80109354; case 0x80109370u: goto L_80109370; case 0x8010938Cu: goto L_8010938C; case 0x801093A8u: goto L_801093A8; case 0x801093C4u: goto L_801093C4; case 0x801093F4u: goto L_801093F4; case 0x80109424u: goto L_80109424; case 0x80109454u: goto L_80109454; case 0x80109484u: goto L_80109484; case 0x801094B4u: goto L_801094B4; case 0x801094E4u: goto L_801094E4; case 0x80109514u: goto L_80109514; case 0x80109540u: goto L_80109540; case 0x80109550u: goto L_80109550; case 0x80109560u: goto L_80109560; case 0x80109570u: goto L_80109570; case 0x8010957Cu: goto L_8010957C; default: break; } dispatch(c,c->ctr); return; } // 80108E84
L_80108E88:;
  c->r[6]=0u+0xCC010000u; // 80108E88
  c->r[0]=0u+0x00000010u; // 80108E8C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108E90
  c->r[3]=0u+0x00001006u; // 80108E94
  c->r[0]=0u+0x00000273u; // 80108E98
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108E9C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108EA0
  goto L_80109288; // 80108EA4
L_80108EA8:;
  c->r[6]=0u+0xCC010000u; // 80108EA8
  c->r[0]=0u+0x00000010u; // 80108EAC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108EB0
  c->r[3]=0u+0x00001006u; // 80108EB4
  c->r[0]=0u+0x0000014Au; // 80108EB8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108EBC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108EC0
  goto L_80109288; // 80108EC4
L_80108EC8:;
  c->r[6]=0u+0xCC010000u; // 80108EC8
  c->r[0]=0u+0x00000010u; // 80108ECC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108ED0
  c->r[3]=0u+0x00001006u; // 80108ED4
  c->r[0]=0u+0x0000016Bu; // 80108ED8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108EDC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108EE0
  goto L_80109288; // 80108EE4
L_80108EE8:;
  c->r[6]=0u+0xCC010000u; // 80108EE8
  c->r[0]=0u+0x00000010u; // 80108EEC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108EF0
  c->r[3]=0u+0x00001006u; // 80108EF4
  c->r[0]=0u+0x00000084u; // 80108EF8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108EFC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F00
  goto L_80109288; // 80108F04
L_80108F08:;
  c->r[6]=0u+0xCC010000u; // 80108F08
  c->r[0]=0u+0x00000010u; // 80108F0C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F10
  c->r[3]=0u+0x00001006u; // 80108F14
  c->r[0]=0u+0x000000C6u; // 80108F18
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108F1C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F20
  goto L_80109288; // 80108F24
L_80108F28:;
  c->r[6]=0u+0xCC010000u; // 80108F28
  c->r[0]=0u+0x00000010u; // 80108F2C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F30
  c->r[3]=0u+0x00001006u; // 80108F34
  c->r[0]=0u+0x00000210u; // 80108F38
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108F3C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F40
  goto L_80109288; // 80108F44
L_80108F48:;
  c->r[6]=0u+0xCC010000u; // 80108F48
  c->r[0]=0u+0x00000010u; // 80108F4C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F50
  c->r[3]=0u+0x00001006u; // 80108F54
  c->r[0]=0u+0x00000252u; // 80108F58
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108F5C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F60
  goto L_80109288; // 80108F64
L_80108F68:;
  c->r[6]=0u+0xCC010000u; // 80108F68
  c->r[0]=0u+0x00000010u; // 80108F6C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F70
  c->r[3]=0u+0x00001006u; // 80108F74
  c->r[0]=0u+0x00000231u; // 80108F78
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108F7C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F80
  goto L_80109288; // 80108F84
L_80108F88:;
  c->r[6]=0u+0xCC010000u; // 80108F88
  c->r[0]=0u+0x00000010u; // 80108F8C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108F90
  c->r[3]=0u+0x00001006u; // 80108F94
  c->r[0]=0u+0x000001ADu; // 80108F98
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108F9C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108FA0
  goto L_80109288; // 80108FA4
L_80108FA8:;
  c->r[6]=0u+0xCC010000u; // 80108FA8
  c->r[0]=0u+0x00000010u; // 80108FAC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108FB0
  c->r[3]=0u+0x00001006u; // 80108FB4
  c->r[0]=0u+0x000001CEu; // 80108FB8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108FBC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108FC0
  goto L_80109288; // 80108FC4
L_80108FC8:;
  c->r[6]=0u+0xCC010000u; // 80108FC8
  c->r[0]=0u+0x00000010u; // 80108FCC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108FD0
  c->r[3]=0u+0x00001006u; // 80108FD4
  c->r[0]=0u+0x00000021u; // 80108FD8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108FDC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80108FE0
  goto L_80109288; // 80108FE4
L_80108FE8:;
  c->r[6]=0u+0xCC010000u; // 80108FE8
  c->r[0]=0u+0x00000010u; // 80108FEC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80108FF0
  c->r[3]=0u+0x00001006u; // 80108FF4
  c->r[0]=0u+0x00000153u; // 80108FF8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80108FFC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109000
  goto L_80109288; // 80109004
L_80109008:;
  c->r[6]=0u+0xCC010000u; // 80109008
  c->r[0]=0u+0x00000061u; // 8010900C
  c->r[3]=0u+0x23010000u; // 80109010
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109014
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 80109018
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8010901C
  goto L_80109288; // 80109020
L_80109024:;
  c->r[6]=0u+0xCC010000u; // 80109024
  c->r[0]=0u+0x00000061u; // 80109028
  c->r[3]=0u+0x23010000u; // 8010902C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109030
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 80109034
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109038
  goto L_80109288; // 8010903C
L_80109040:;
  c->r[6]=0u+0xCC010000u; // 80109040
  c->r[0]=0u+0x00000061u; // 80109044
  c->r[3]=0u+0x23010000u; // 80109048
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8010904C
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 80109050
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109054
  goto L_80109288; // 80109058
L_8010905C:;
  c->r[6]=0u+0xCC010000u; // 8010905C
  c->r[0]=0u+0x00000061u; // 80109060
  c->r[3]=0u+0x23000000u; // 80109064
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109068
  c->r[0]=c->r[3]+0x00001E7Fu; // 8010906C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109070
  goto L_80109288; // 80109074
L_80109078:;
  c->r[6]=0u+0xCC010000u; // 80109078
  c->r[0]=0u+0x00000061u; // 8010907C
  c->r[3]=0u+0x23010000u; // 80109080
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109084
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 80109088
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8010908C
  goto L_80109288; // 80109090
L_80109094:;
  c->r[6]=0u+0xCC010000u; // 80109094
  c->r[0]=0u+0x00000061u; // 80109098
  c->r[3]=0u+0x23010000u; // 8010909C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801090A0
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 801090A4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801090A8
  goto L_80109288; // 801090AC
L_801090B0:;
  c->r[6]=0u+0xCC010000u; // 801090B0
  c->r[0]=0u+0x00000061u; // 801090B4
  c->r[3]=0u+0x23010000u; // 801090B8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801090BC
  c->r[0]=c->r[3]+0xFFFFACBFu; // 801090C0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801090C4
  goto L_80109288; // 801090C8
L_801090CC:;
  c->r[6]=0u+0xCC010000u; // 801090CC
  c->r[0]=0u+0x00000061u; // 801090D0
  c->r[3]=0u+0x23010000u; // 801090D4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801090D8
  c->r[0]=c->r[3]+0xFFFFACFFu; // 801090DC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801090E0
  goto L_80109288; // 801090E4
L_801090E8:;
  c->r[6]=0u+0xCC010000u; // 801090E8
  c->r[0]=0u+0x00000061u; // 801090EC
  c->r[3]=0u+0x23010000u; // 801090F0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801090F4
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 801090F8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801090FC
  goto L_80109288; // 80109100
L_80109104:;
  c->r[6]=0u+0xCC010000u; // 80109104
  c->r[0]=0u+0x00000061u; // 80109108
  c->r[3]=0u+0x23010000u; // 8010910C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109110
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 80109114
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109118
  goto L_80109288; // 8010911C
L_80109120:;
  c->r[6]=0u+0xCC010000u; // 80109120
  c->r[0]=0u+0x00000061u; // 80109124
  c->r[3]=0u+0x23010000u; // 80109128
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8010912C
  c->r[0]=c->r[3]+0xFFFFADBFu; // 80109130
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109134
  goto L_80109288; // 80109138
L_8010913C:;
  c->r[6]=0u+0xCC010000u; // 8010913C
  c->r[0]=0u+0x00000061u; // 80109140
  c->r[3]=0u+0x23010000u; // 80109144
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109148
  c->r[0]=c->r[3]+0xFFFFADFFu; // 8010914C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109150
  goto L_80109288; // 80109154
L_80109158:;
  c->r[6]=0u+0xCC010000u; // 80109158
  c->r[0]=0u+0x00000061u; // 8010915C
  c->r[3]=0u+0x23010000u; // 80109160
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109164
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 80109168
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8010916C
  goto L_80109288; // 80109170
L_80109174:;
  c->r[6]=0u+0xCC010000u; // 80109174
  c->r[0]=0u+0x00000061u; // 80109178
  c->r[3]=0u+0x23010000u; // 8010917C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109180
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 80109184
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109188
  goto L_80109288; // 8010918C
L_80109190:;
  c->r[6]=0u+0xCC010000u; // 80109190
  c->r[0]=0u+0x00000061u; // 80109194
  c->r[3]=0u+0x23010000u; // 80109198
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8010919C
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 801091A0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801091A4
  goto L_80109288; // 801091A8
L_801091AC:;
  c->r[6]=0u+0xCC010000u; // 801091AC
  c->r[0]=0u+0x00000061u; // 801091B0
  c->r[3]=0u+0x23010000u; // 801091B4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801091B8
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 801091BC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801091C0
  goto L_80109288; // 801091C4
L_801091C8:;
  c->r[6]=0u+0xCC010000u; // 801091C8
  c->r[0]=0u+0x00000061u; // 801091CC
  c->r[3]=0u+0x24030000u; // 801091D0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801091D4
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 801091D8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801091DC
  goto L_80109288; // 801091E0
L_801091E4:;
  c->r[6]=0u+0xCC010000u; // 801091E4
  c->r[0]=0u+0x00000061u; // 801091E8
  c->r[3]=0u+0x24030000u; // 801091EC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801091F0
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 801091F4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801091F8
  goto L_80109288; // 801091FC
L_80109200:;
  c->r[6]=0u+0xCC010000u; // 80109200
  c->r[0]=0u+0x00000061u; // 80109204
  c->r[3]=0u+0x24030000u; // 80109208
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8010920C
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 80109210
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109214
  goto L_80109288; // 80109218
L_8010921C:;
  c->r[6]=0u+0xCC010000u; // 8010921C
  c->r[0]=0u+0x00000061u; // 80109220
  c->r[3]=0u+0x24030000u; // 80109224
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109228
  c->r[0]=c->r[3]+0xFFFFC108u; // 8010922C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109230
  goto L_80109288; // 80109234
L_80109238:;
  c->r[6]=0u+0xCC010000u; // 80109238
  c->r[0]=0u+0x00000061u; // 8010923C
  c->r[3]=0u+0x24030000u; // 80109240
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109244
  c->r[0]=c->r[3]+0xFFFFC129u; // 80109248
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8010924C
  goto L_80109288; // 80109250
L_80109254:;
  c->r[6]=0u+0xCC010000u; // 80109254
  c->r[0]=0u+0x00000061u; // 80109258
  c->r[3]=0u+0x24030000u; // 8010925C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80109260
  c->r[0]=c->r[3]+0xFFFFC14Au; // 80109264
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109268
  goto L_80109288; // 8010926C
L_80109270:;
  c->r[6]=0u+0xCC010000u; // 80109270
  c->r[0]=0u+0x00000061u; // 80109274
  c->r[3]=0u+0x24030000u; // 80109278
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8010927C
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 80109280
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80109284
L_80109288:;
  cmpu(c,0,c->r[4],0x00000016u); // 80109288
  W32(c->r[5]+0x000005F0u,c->r[4]); // 8010928C
  if (crb(c,1)) { goto L_8010957C; } // 80109290
  c->r[3]=0u+0x80290000u; // 80109294
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80109298
  c->r[3]=c->r[3]+0x00006068u; // 8010929C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801092A0
  c->ctr=c->r[3]; // 801092A4
  if (true) { switch (c->ctr) { case 0x80108E88u: goto L_80108E88; case 0x80108EA8u: goto L_80108EA8; case 0x80108EC8u: goto L_80108EC8; case 0x80108EE8u: goto L_80108EE8; case 0x80108F08u: goto L_80108F08; case 0x80108F28u: goto L_80108F28; case 0x80108F48u: goto L_80108F48; case 0x80108F68u: goto L_80108F68; case 0x80108F88u: goto L_80108F88; case 0x80108FA8u: goto L_80108FA8; case 0x80108FC8u: goto L_80108FC8; case 0x80108FE8u: goto L_80108FE8; case 0x80109008u: goto L_80109008; case 0x80109024u: goto L_80109024; case 0x80109040u: goto L_80109040; case 0x8010905Cu: goto L_8010905C; case 0x80109078u: goto L_80109078; case 0x80109094u: goto L_80109094; case 0x801090B0u: goto L_801090B0; case 0x801090CCu: goto L_801090CC; case 0x801090E8u: goto L_801090E8; case 0x80109104u: goto L_80109104; case 0x80109120u: goto L_80109120; case 0x8010913Cu: goto L_8010913C; case 0x80109158u: goto L_80109158; case 0x80109174u: goto L_80109174; case 0x80109190u: goto L_80109190; case 0x801091ACu: goto L_801091AC; case 0x801091C8u: goto L_801091C8; case 0x801091E4u: goto L_801091E4; case 0x80109200u: goto L_80109200; case 0x8010921Cu: goto L_8010921C; case 0x80109238u: goto L_80109238; case 0x80109254u: goto L_80109254; case 0x80109270u: goto L_80109270; case 0x80109288u: goto L_80109288; case 0x801092ACu: goto L_801092AC; case 0x801092C8u: goto L_801092C8; case 0x801092E4u: goto L_801092E4; case 0x80109300u: goto L_80109300; case 0x8010931Cu: goto L_8010931C; case 0x80109338u: goto L_80109338; case 0x80109354u: goto L_80109354; case 0x80109370u: goto L_80109370; case 0x8010938Cu: goto L_8010938C; case 0x801093A8u: goto L_801093A8; case 0x801093C4u: goto L_801093C4; case 0x801093F4u: goto L_801093F4; case 0x80109424u: goto L_80109424; case 0x80109454u: goto L_80109454; case 0x80109484u: goto L_80109484; case 0x801094B4u: goto L_801094B4; case 0x801094E4u: goto L_801094E4; case 0x80109514u: goto L_80109514; case 0x80109540u: goto L_80109540; case 0x80109550u: goto L_80109550; case 0x80109560u: goto L_80109560; case 0x80109570u: goto L_80109570; case 0x8010957Cu: goto L_8010957C; default: break; } dispatch(c,c->ctr); return; } // 801092A8
L_801092AC:;
  c->r[4]=0u+0xCC010000u; // 801092AC
  c->r[0]=0u+0x00000061u; // 801092B0
  c->r[3]=0u+0x67000000u; // 801092B4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801092B8
  c->r[0]=c->r[3]+0x00000042u; // 801092BC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801092C0
  goto L_8010957C; // 801092C4
L_801092C8:;
  c->r[4]=0u+0xCC010000u; // 801092C8
  c->r[0]=0u+0x00000061u; // 801092CC
  c->r[3]=0u+0x67000000u; // 801092D0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801092D4
  c->r[0]=c->r[3]+0x00000084u; // 801092D8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801092DC
  goto L_8010957C; // 801092E0
L_801092E4:;
  c->r[4]=0u+0xCC010000u; // 801092E4
  c->r[0]=0u+0x00000061u; // 801092E8
  c->r[3]=0u+0x67000000u; // 801092EC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801092F0
  c->r[0]=c->r[3]+0x00000063u; // 801092F4
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801092F8
  goto L_8010957C; // 801092FC
L_80109300:;
  c->r[4]=0u+0xCC010000u; // 80109300
  c->r[0]=0u+0x00000061u; // 80109304
  c->r[3]=0u+0x67000000u; // 80109308
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8010930C
  c->r[0]=c->r[3]+0x00000129u; // 80109310
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80109314
  goto L_8010957C; // 80109318
L_8010931C:;
  c->r[4]=0u+0xCC010000u; // 8010931C
  c->r[0]=0u+0x00000061u; // 80109320
  c->r[3]=0u+0x67000000u; // 80109324
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80109328
  c->r[0]=c->r[3]+0x00000252u; // 8010932C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80109330
  goto L_8010957C; // 80109334
L_80109338:;
  c->r[4]=0u+0xCC010000u; // 80109338
  c->r[0]=0u+0x00000061u; // 8010933C
  c->r[3]=0u+0x67000000u; // 80109340
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80109344
  c->r[0]=c->r[3]+0x00000021u; // 80109348
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8010934C
  goto L_8010957C; // 80109350
L_80109354:;
  c->r[4]=0u+0xCC010000u; // 80109354
  c->r[0]=0u+0x00000061u; // 80109358
  c->r[3]=0u+0x67000000u; // 8010935C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80109360
  c->r[0]=c->r[3]+0x0000014Bu; // 80109364
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80109368
  goto L_8010957C; // 8010936C
L_80109370:;
  c->r[4]=0u+0xCC010000u; // 80109370
  c->r[0]=0u+0x00000061u; // 80109374
  c->r[3]=0u+0x67000000u; // 80109378
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8010937C
  c->r[0]=c->r[3]+0x0000018Du; // 80109380
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80109384
  goto L_8010957C; // 80109388
L_8010938C:;
  c->r[4]=0u+0xCC010000u; // 8010938C
  c->r[0]=0u+0x00000061u; // 80109390
  c->r[3]=0u+0x67000000u; // 80109394
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 80109398
  c->r[0]=c->r[3]+0x000001CFu; // 8010939C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801093A0
  goto L_8010957C; // 801093A4
L_801093A8:;
  c->r[4]=0u+0xCC010000u; // 801093A8
  c->r[0]=0u+0x00000061u; // 801093AC
  c->r[3]=0u+0x67000000u; // 801093B0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801093B4
  c->r[0]=c->r[3]+0x00000211u; // 801093B8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801093BC
  goto L_8010957C; // 801093C0
L_801093C4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801093C4
  c->r[0]=0u+0x00000002u; // 801093C8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801093CC
  c->r[3]=0u+0xCC010000u; // 801093D0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801093D4
  c->r[4]=0u+0x00000008u; // 801093D8
  c->r[0]=0u+0x00000020u; // 801093DC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801093E0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801093E4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801093E8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801093EC
  goto L_8010957C; // 801093F0
L_801093F4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801093F4
  c->r[0]=0u+0x00000003u; // 801093F8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801093FC
  c->r[3]=0u+0xCC010000u; // 80109400
  W32(c->r[5]+0x000005F4u,c->r[4]); // 80109404
  c->r[4]=0u+0x00000008u; // 80109408
  c->r[0]=0u+0x00000020u; // 8010940C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80109410
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80109414
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80109418
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010941C
  goto L_8010957C; // 80109420
L_80109424:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 80109424
  c->r[0]=0u+0x00000004u; // 80109428
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8010942C
  c->r[3]=0u+0xCC010000u; // 80109430
  W32(c->r[5]+0x000005F4u,c->r[4]); // 80109434
  c->r[4]=0u+0x00000008u; // 80109438
  c->r[0]=0u+0x00000020u; // 8010943C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80109440
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80109444
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80109448
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010944C
  goto L_8010957C; // 80109450
L_80109454:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 80109454
  c->r[0]=0u+0x00000005u; // 80109458
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8010945C
  c->r[3]=0u+0xCC010000u; // 80109460
  W32(c->r[5]+0x000005F4u,c->r[4]); // 80109464
  c->r[4]=0u+0x00000008u; // 80109468
  c->r[0]=0u+0x00000020u; // 8010946C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80109470
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80109474
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80109478
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010947C
  goto L_8010957C; // 80109480
L_80109484:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 80109484
  c->r[0]=0u+0x00000006u; // 80109488
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8010948C
  c->r[3]=0u+0xCC010000u; // 80109490
  W32(c->r[5]+0x000005F4u,c->r[4]); // 80109494
  c->r[4]=0u+0x00000008u; // 80109498
  c->r[0]=0u+0x00000020u; // 8010949C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801094A0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801094A4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801094A8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801094AC
  goto L_8010957C; // 801094B0
L_801094B4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801094B4
  c->r[0]=0u+0x00000007u; // 801094B8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801094BC
  c->r[3]=0u+0xCC010000u; // 801094C0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801094C4
  c->r[4]=0u+0x00000008u; // 801094C8
  c->r[0]=0u+0x00000020u; // 801094CC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801094D0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801094D4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801094D8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801094DC
  goto L_8010957C; // 801094E0
L_801094E4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801094E4
  c->r[0]=0u+0x00000009u; // 801094E8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801094EC
  c->r[3]=0u+0xCC010000u; // 801094F0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801094F4
  c->r[4]=0u+0x00000008u; // 801094F8
  c->r[0]=0u+0x00000020u; // 801094FC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 80109500
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80109504
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80109508
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8010950C
  goto L_8010957C; // 80109510
L_80109514:;
  c->r[4]=0u+0x00000008u; // 80109514
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80109518
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8010951C
  c->r[3]=0u+0xCC010000u; // 80109520
  W32(c->r[5]+0x000005F4u,c->r[0]); // 80109524
  c->r[0]=0u+0x00000020u; // 80109528
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8010952C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 80109530
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80109534
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 80109538
  goto L_8010957C; // 8010953C
L_80109540:;
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80109540
  c->r[0]=0u+0x00000002u; // 80109544
  W16(c->r[3]+0x00000006u,c->r[0]); // 80109548
  goto L_8010957C; // 8010954C
L_80109550:;
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80109550
  c->r[0]=0u+0x00000003u; // 80109554
  W16(c->r[3]+0x00000006u,c->r[0]); // 80109558
  goto L_8010957C; // 8010955C
L_80109560:;
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80109560
  c->r[0]=0u+0x00000004u; // 80109564
  W16(c->r[3]+0x00000006u,c->r[0]); // 80109568
  goto L_8010957C; // 8010956C
L_80109570:;
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80109570
  c->r[0]=0u+0x00000005u; // 80109574
  W16(c->r[3]+0x00000006u,c->r[0]); // 80109578
L_8010957C:;
  c->r[0]=0u+0x00000000u; // 8010957C
  W16(c->r[5]+0x00000002u,c->r[0]); // 80109580
  return; // 80109584
}

// GXClearGPMetric
void f_80109588(Ctx* __restrict c) {
  trace_call(0x80109588u);
  c->r[3]=R32(c->r[13]+0xFFFF9A1Cu); // 80109588
  c->r[0]=0u+0x00000004u; // 8010958C
  W16(c->r[3]+0x00000004u,c->r[0]); // 80109590
  return; // 80109594
}

// strlen
void f_80109598(Ctx* __restrict c) {
  trace_call(0x80109598u);
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 80109598
  c->r[3]=0u+0xFFFFFFFFu; // 8010959C
L_801095A0:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801095A0
  c->r[3]=c->r[3]+0x00000001u; // 801095A4
  cmps(c,0,(int32_t)c->r[0],0); // 801095A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801095A0; } // 801095AC
  return; // 801095B0
}

// __va_arg
void f_801095B4(Ctx* __restrict c) {
  trace_call(0x801095B4u);
  c->r[7]=R8(c->r[3]+0x00000000u); // 801095B4
  cmps(c,0,(int32_t)c->r[4],3); // 801095B8
  c->r[6]=c->r[3]|c->r[3]; // 801095BC
  c->r[0]=0u+0x00000008u; // 801095C0
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801095C4
  c->r[8]=0u+0x00000004u; // 801095C8
  c->r[9]=0u+0x00000001u; // 801095CC
  c->r[5]=0u+0x00000000u; // 801095D0
  c->r[10]=0u+0x00000000u; // 801095D4
  c->r[11]=0u+0x00000004u; // 801095D8
  if (!crb(c,2)) { goto L_801095F8; } // 801095DC
  c->r[7]=R8(c->r[3]+0x00000001u); // 801095E0
  c->r[6]=c->r[3]+0x00000001u; // 801095E4
  c->r[8]=0u+0x00000008u; // 801095E8
  c->r[10]=0u+0x00000020u; // 801095EC
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801095F0
  c->r[11]=0u+0x00000008u; // 801095F4
L_801095F8:;
  cmps(c,0,(int32_t)c->r[4],2); // 801095F8
  if (!crb(c,2)) { goto L_80109618; } // 801095FC
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 80109600
  c->r[8]=0u+0x00000008u; // 80109604
  c->r[0]=0u+0x00000007u; // 80109608
  if (crb(c,2)) { goto L_80109614; } // 8010960C
  c->r[5]=0u+0x00000001u; // 80109610
L_80109614:;
  c->r[9]=0u+0x00000002u; // 80109614
L_80109618:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80109618
  if (!crb(c,0)) { goto L_80109640; } // 8010961C
  c->r[7]=c->r[7]+c->r[5]; // 80109620
  c->r[3]=R32(c->r[3]+0x00000008u); // 80109624
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[11]); // 80109628
  c->r[0]=c->r[7]+c->r[9]; // 8010962C
  c->r[3]=c->r[3]+c->r[10]; // 80109630
  W8(c->r[6]+0x00000000u,c->r[0]); // 80109634
  c->r[5]=c->r[5]+c->r[3]; // 80109638
  goto L_80109668; // 8010963C
L_80109640:;
  c->r[5]=0u+0x00000008u; // 80109640
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 80109644
  W8(c->r[6]+0x00000000u,c->r[5]); // 80109648
  c->r[6]=~(c->r[0]|c->r[0]); // 8010964C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80109650
  c->r[5]=c->r[8]+c->r[0]; // 80109654
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80109658
  c->r[5]=c->r[6]&c->r[0]; // 8010965C
  c->r[0]=c->r[5]+c->r[8]; // 80109660
  W32(c->r[3]+0x00000004u,c->r[0]); // 80109664
L_80109668:;
  cmps(c,0,(int32_t)c->r[4],0); // 80109668
  if (!crb(c,2)) { goto L_80109674; } // 8010966C
  c->r[5]=R32(c->r[5]+0x00000000u); // 80109670
L_80109674:;
  c->r[3]=c->r[5]|c->r[5]; // 80109674
  return; // 80109678
}

// __register_global_object
void f_8010967C(Ctx* __restrict c) {
  trace_call(0x8010967Cu);
  c->r[0]=R32(c->r[13]+0xFFFF9A7Cu); // 8010967C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80109680
  W32(c->r[5]+0x00000004u,c->r[4]); // 80109684
  W32(c->r[5]+0x00000008u,c->r[3]); // 80109688
  W32(c->r[13]+0xFFFF9A7Cu,c->r[5]); // 8010968C
  return; // 80109690
}

// __destroy_global_chain
void f_80109694(Ctx* __restrict c) {
  trace_call(0x80109694u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109694
  c->r[0]=c->lr; // 80109698
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010969C
  goto L_801096C0; // 801096A0
L_801096A4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801096A4
  c->r[4]=0u+0xFFFFFFFFu; // 801096A8
  W32(c->r[13]+0xFFFF9A7Cu,c->r[0]); // 801096AC
  c->r[12]=R32(c->r[3]+0x00000004u); // 801096B0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801096B4
  c->ctr=c->r[12]; // 801096B8
  if (true) { c->lr=0x801096C0u; dispatch(c,c->ctr); } // 801096BC
L_801096C0:;
  c->r[3]=R32(c->r[13]+0xFFFF9A7Cu); // 801096C0
  cmps(c,0,(int32_t)c->r[3],0); // 801096C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801096A4; } // 801096C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801096CC
  c->lr=c->r[0]; // 801096D0
  c->r[1]=c->r[1]+0x00000010u; // 801096D4
  return; // 801096D8
}

// __register_atexit
void f_801096DC(Ctx* __restrict c) {
  trace_call(0x801096DCu);
  c->r[4]=R32(c->r[13]+0xFFFF9A78u); // 801096DC
  cmps(c,0,(int32_t)c->r[4],64); // 801096E0
  if (!crb(c,2)) { goto L_801096F0; } // 801096E4
  c->r[3]=0u+0xFFFFFFFFu; // 801096E8
  return; // 801096EC
L_801096F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801096F0
  c->r[6]=c->r[4]+0x00000001u; // 801096F4
  c->r[5]=0u+0x802F0000u; // 801096F8
  c->r[4]=R32(c->r[13]+0xFFFF9A7Cu); // 801096FC
  W32(c->r[13]+0xFFFF9A78u,c->r[6]); // 80109700
  c->r[5]=c->r[5]+0x00004C88u; // 80109704
  c->r[5]=c->r[5]+c->r[0]; // 80109708
  c->r[0]=0u+0x00000000u; // 8010970C
  W32(c->r[5]+0x00000000u,c->r[4]); // 80109710
  W32(c->r[5]+0x00000004u,c->r[3]); // 80109714
  c->r[3]=0u+0x00000000u; // 80109718
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010971C
  W32(c->r[13]+0xFFFF9A7Cu,c->r[5]); // 80109720
  return; // 80109724
}

// dtor_80109728
void f_80109728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109728
  c->r[0]=c->lr; // 8010972C
  cmps(c,0,(int32_t)c->r[3],0); // 80109730
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109734
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109738
  c->r[31]=c->r[3]|c->r[3]; // 8010973C
  if (crb(c,2)) { goto L_80109750; } // 80109740
  cmps(c,0,(int32_t)c->r[4],0); // 80109744
  if (!crb(c,1)) { goto L_80109750; } // 80109748
  c->lr=0x80109750u; f_8009230C(c); // 8010974C
L_80109750:;
  c->r[3]=c->r[31]|c->r[31]; // 80109750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80109754
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109758
  c->lr=c->r[0]; // 8010975C
  c->r[1]=c->r[1]+0x00000010u; // 80109760
  return; // 80109764
}

// fn_80109768
void f_80109768(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109768
  c->r[0]=c->lr; // 8010976C
  cmps(c,0,(int32_t)c->r[3],0); // 80109770
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109778
  c->r[31]=c->r[3]|c->r[3]; // 8010977C
  if (crb(c,2)) { goto L_80109790; } // 80109780
  cmps(c,0,(int32_t)c->r[4],0); // 80109784
  if (!crb(c,1)) { goto L_80109790; } // 80109788
  c->lr=0x80109790u; f_8009230C(c); // 8010978C
L_80109790:;
  c->r[3]=c->r[31]|c->r[31]; // 80109790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80109794
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109798
  c->lr=c->r[0]; // 8010979C
  c->r[1]=c->r[1]+0x00000010u; // 801097A0
  return; // 801097A4
}

// fn_801097A8
void f_801097A8(Ctx* __restrict c) {
  c->r[3]=0u+0x80290000u; // 801097A8
  c->r[3]=c->r[3]+0x00006174u; // 801097AC
  return; // 801097B0
}

// fn_801097B4
void f_801097B4(Ctx* __restrict c) {
  f_80116998(c); return; // 801097B4
}

// fn_801097B8
void f_801097B8(Ctx* __restrict c) {
  f_801097BC(c); return; // 801097B8
}

// fn_801097BC
void f_801097BC(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF8C28u); // 801097BC
  c->ctr=c->r[12]; // 801097C0
  if (true) { dispatch(c,c->ctr); return; } // 801097C4
}

// fn_801097C8
void f_801097C8(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF8C2Cu); // 801097C8
  c->ctr=c->r[12]; // 801097CC
  if (true) { dispatch(c,c->ctr); return; } // 801097D0
}

// fn_801097D4
void f_801097D4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801097D4
  cmps(c,0,(int32_t)c->r[4],0); // 801097D8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801097DC
  c->r[7]=c->r[4]|c->r[4]; // 801097E0
  if (!crb(c,2)) { goto L_801097F0; } // 801097E4
  c->r[3]=0u+0x00000001u; // 801097E8
  return; // 801097EC
L_801097F0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801097F0
  c->r[6]=c->r[3]|c->r[3]; // 801097F4
  cmps(c,0,(int32_t)c->r[0],80); // 801097F8
  if (!crb(c,2)) { goto L_80109854; } // 801097FC
  c->r[0]=R8(c->r[4]+0x00000001u); // 80109800
  c->r[7]=c->r[4]+0x00000001u; // 80109804
  cmps(c,0,(int32_t)c->r[0],67); // 80109808
  if (!crb(c,2)) { goto L_80109814; } // 8010980C
  c->r[7]=c->r[7]+0x00000001u; // 80109810
L_80109814:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80109814
  cmps(c,0,(int32_t)c->r[0],86); // 80109818
  if (!crb(c,2)) { goto L_80109824; } // 8010981C
  c->r[7]=c->r[7]+0x00000001u; // 80109820
L_80109824:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80109824
  cmps(c,0,(int32_t)c->r[0],118); // 80109828
  if (!crb(c,2)) { goto L_80109850; } // 8010982C
  c->r[0]=R8(c->r[3]+0x00000000u); // 80109830
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80109834
  cmps(c,0,(int32_t)c->r[0],80); // 80109838
  if (crb(c,2)) { goto L_80109848; } // 8010983C
  cmps(c,0,(int32_t)c->r[0],42); // 80109840
  if (!crb(c,2)) { goto L_80109850; } // 80109844
L_80109848:;
  c->r[3]=0u+0x00000001u; // 80109848
  return; // 8010984C
L_80109850:;
  c->r[7]=c->r[4]|c->r[4]; // 80109850
L_80109854:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80109854
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80109858
  cmps(c,0,(int32_t)c->r[0],42); // 8010985C
  if (crb(c,2)) { goto L_80109874; } // 80109860
  if (!crb(c,0)) { goto L_801099A8; } // 80109864
  cmps(c,0,(int32_t)c->r[0],33); // 80109868
  if (crb(c,2)) { goto L_80109874; } // 8010986C
  goto L_801099A8; // 80109870
L_80109874:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80109874
  c->r[6]=c->r[3]+0x00000001u; // 80109878
  c->r[3]=R8(c->r[3]+0x00000000u); // 8010987C
  c->r[7]=c->r[7]+0x00000001u; // 80109880
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80109884
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80109888
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8010988C
  if (crb(c,2)) { goto L_8010989C; } // 80109890
  c->r[3]=0u+0x00000000u; // 80109894
  return; // 80109898
L_8010989C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 8010989C
  c->r[7]=c->r[7]+0x00000001u; // 801098A0
  c->r[3]=R8(c->r[6]+0x00000000u); // 801098A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801098A8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801098AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801098B0
  if (!crb(c,2)) { goto L_801098FC; } // 801098B4
  cmps(c,0,(int32_t)c->r[3],33); // 801098B8
  c->r[6]=c->r[6]+0x00000001u; // 801098BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8010989C; } // 801098C0
  c->r[4]=0u+0x00000000u; // 801098C4
  goto L_801098E4; // 801098C8
L_801098CC:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 801098CC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801098D0
  c->r[6]=c->r[6]+0x00000001u; // 801098D4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801098D8
  c->r[4]=c->r[3]+c->r[0]; // 801098DC
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 801098E0
L_801098E4:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801098E4
  cmps(c,0,(int32_t)c->r[0],33); // 801098E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801098CC; } // 801098EC
  W32(c->r[5]+0x00000000u,c->r[4]); // 801098F0
  c->r[3]=0u+0x00000001u; // 801098F4
  return; // 801098F8
L_801098FC:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801098FC
  c->r[6]=c->r[6]+0x00000001u; // 80109900
  cmps(c,0,(int32_t)c->r[0],33); // 80109904
  if (!crb(c,2)) { IRQCHK(c); goto L_801098FC; } // 80109908
L_8010990C:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 8010990C
  c->r[6]=c->r[6]+0x00000001u; // 80109910
  cmps(c,0,(int32_t)c->r[0],33); // 80109914
  if (!crb(c,2)) { IRQCHK(c); goto L_8010990C; } // 80109918
  c->r[0]=R8(c->r[6]+0x00000000u); // 8010991C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80109920
  if (!crb(c,2)) { goto L_80109930; } // 80109924
  c->r[3]=0u+0x00000000u; // 80109928
  return; // 8010992C
L_80109930:;
  c->r[7]=c->r[4]+0x00000001u; // 80109930
  IRQCHK(c); goto L_8010989C; // 80109934
  goto L_801099A8; // 80109938
L_8010993C:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 8010993C
  c->r[6]=c->r[6]+0x00000001u; // 80109940
  cmps(c,0,(int32_t)c->r[0],67); // 80109944
  if (!crb(c,2)) { goto L_80109960; } // 80109948
  c->r[0]=R8(c->r[6]+0x00000000u); // 8010994C
  cmps(c,0,(int32_t)c->r[0],67); // 80109950
  if (!crb(c,2)) { goto L_8010995C; } // 80109954
  c->r[6]=c->r[6]+0x00000001u; // 80109958
L_8010995C:;
  c->r[7]=c->r[7]+0x00000001u; // 8010995C
L_80109960:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 80109960
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80109964
  cmps(c,0,(int32_t)c->r[3],67); // 80109968
  if (!crb(c,2)) { goto L_80109978; } // 8010996C
  c->r[3]=0u+0x00000000u; // 80109970
  return; // 80109974
L_80109978:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 80109978
  cmps(c,0,(int32_t)c->r[0],86); // 8010997C
  if (!crb(c,2)) { goto L_80109994; } // 80109980
  cmps(c,0,(int32_t)c->r[3],86); // 80109984
  if (!crb(c,2)) { goto L_80109990; } // 80109988
  c->r[6]=c->r[6]+0x00000001u; // 8010998C
L_80109990:;
  c->r[7]=c->r[7]+0x00000001u; // 80109990
L_80109994:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 80109994
  cmps(c,0,(int32_t)c->r[0],86); // 80109998
  if (!crb(c,2)) { goto L_801099A8; } // 8010999C
  c->r[3]=0u+0x00000000u; // 801099A0
  return; // 801099A4
L_801099A8:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 801099A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801099AC
  cmps(c,0,(int32_t)c->r[0],80); // 801099B0
  if (crb(c,2)) { goto L_801099C0; } // 801099B4
  cmps(c,0,(int32_t)c->r[0],82); // 801099B8
  if (!crb(c,2)) { goto L_801099F0; } // 801099BC
L_801099C0:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801099C0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801099C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801099C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801099CC
  if (crb(c,2)) { IRQCHK(c); goto L_8010993C; } // 801099D0
  goto L_801099F0; // 801099D4
L_801099D8:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801099D8
  if (!crb(c,2)) { goto L_801099E8; } // 801099DC
  c->r[3]=0u+0x00000001u; // 801099E0
  return; // 801099E4
L_801099E8:;
  c->r[6]=c->r[6]+0x00000001u; // 801099E8
  c->r[7]=c->r[7]+0x00000001u; // 801099EC
L_801099F0:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 801099F0
  c->r[0]=R8(c->r[7]+0x00000000u); // 801099F4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801099F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801099FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80109A00
  if (crb(c,2)) { IRQCHK(c); goto L_801099D8; } // 80109A04
  c->r[3]=0u+0x00000000u; // 80109A08
  return; // 80109A0C
}

// __construct_new_array
void f_80109A10(Ctx* __restrict c) {
  trace_call(0x80109A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109A10
  c->r[0]=c->lr; // 80109A14
  cmps(c,0,(int32_t)c->r[3],0); // 80109A18
  W32(c->r[1]+0x00000044u,c->r[0]); // 80109A1C
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80109A20
  c->r[30]=c->r[3]|c->r[3]; // 80109A24
  c->r[27]=c->r[4]|c->r[4]; // 80109A28
  c->r[28]=c->r[6]|c->r[6]; // 80109A2C
  c->r[29]=c->r[7]|c->r[7]; // 80109A30
  if (crb(c,2)) { goto L_80109AFC; } // 80109A34
  cmps(c,0,(int32_t)c->r[4],0); // 80109A38
  W32(c->r[3]+0x00000000u,c->r[6]); // 80109A3C
  c->r[30]=c->r[3]+0x00000010u; // 80109A40
  W32(c->r[3]+0x00000004u,c->r[7]); // 80109A44
  if (crb(c,2)) { goto L_80109AFC; } // 80109A48
  c->r[0]=0u+0x00000000u; // 80109A4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80109A50
  c->r[31]=c->r[30]|c->r[30]; // 80109A54
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80109A58
  W32(c->r[1]+0x00000010u,c->r[7]); // 80109A5C
  W32(c->r[1]+0x00000014u,c->r[5]); // 80109A60
  W32(c->r[1]+0x00000018u,c->r[0]); // 80109A64
  goto L_80109A90; // 80109A68
L_80109A6C:;
  c->r[12]=c->r[27]|c->r[27]; // 80109A6C
  c->r[3]=c->r[31]|c->r[31]; // 80109A70
  c->r[4]=0u+0x00000001u; // 80109A74
  c->ctr=c->r[12]; // 80109A78
  if (true) { c->lr=0x80109A80u; dispatch(c,c->ctr); } // 80109A7C
  c->r[3]=R32(c->r[1]+0x00000018u); // 80109A80
  c->r[31]=c->r[31]+c->r[28]; // 80109A84
  c->r[0]=c->r[3]+0x00000001u; // 80109A88
  W32(c->r[1]+0x00000018u,c->r[0]); // 80109A8C
L_80109A90:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 80109A90
  cmpu(c,0,c->r[4],c->r[29]); // 80109A94
  if (crb(c,0)) { IRQCHK(c); goto L_80109A6C; } // 80109A98
  c->r[0]=R32(c->r[1]+0x00000010u); // 80109A9C
  cmpu(c,0,c->r[4],c->r[0]); // 80109AA0
  if (!crb(c,0)) { goto L_80109AFC; } // 80109AA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109AA8
  cmps(c,0,(int32_t)c->r[0],0); // 80109AAC
  if (crb(c,2)) { goto L_80109AFC; } // 80109AB0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80109AB4
  c->r[3]=R32(c->r[1]+0x00000008u); // 80109AB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80109ABC
  c->r[31]=c->r[3]+c->r[0]; // 80109AC0
  goto L_80109AF0; // 80109AC4
L_80109AC8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80109AC8
  c->r[4]=0u+0xFFFFFFFFu; // 80109ACC
  c->r[12]=R32(c->r[1]+0x00000014u); // 80109AD0
  c->r[31]=c->r[31]-c->r[0]; // 80109AD4
  c->r[3]=c->r[31]|c->r[31]; // 80109AD8
  c->ctr=c->r[12]; // 80109ADC
  if (true) { c->lr=0x80109AE4u; dispatch(c,c->ctr); } // 80109AE0
  c->r[3]=R32(c->r[1]+0x00000018u); // 80109AE4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80109AE8
  W32(c->r[1]+0x00000018u,c->r[0]); // 80109AEC
L_80109AF0:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 80109AF0
  cmps(c,0,(int32_t)c->r[0],0); // 80109AF4
  if (!crb(c,2)) { IRQCHK(c); goto L_80109AC8; } // 80109AF8
L_80109AFC:;
  c->r[3]=c->r[30]|c->r[30]; // 80109AFC
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80109B00
  c->r[0]=R32(c->r[1]+0x00000044u); // 80109B04
  c->lr=c->r[0]; // 80109B08
  c->r[1]=c->r[1]+0x00000040u; // 80109B0C
  return; // 80109B10
}

// dtor
void f_80109B14(Ctx* __restrict c) {
  trace_call(0x80109B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109B14
  c->r[0]=c->lr; // 80109B18
  cmps(c,0,(int32_t)c->r[3],0); // 80109B1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80109B20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80109B24
  W32(c->r[1]+0x00000018u,c->r[30]); // 80109B28
  c->r[30]=c->r[4]|c->r[4]; // 80109B2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80109B30
  c->r[29]=c->r[3]|c->r[3]; // 80109B34
  if (crb(c,2)) { goto L_80109BB0; } // 80109B38
  c->r[4]=R32(c->r[3]+0x00000010u); // 80109B3C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80109B40
  cmpu(c,0,c->r[4],c->r[0]); // 80109B44
  if (!crb(c,0)) { goto L_80109BA0; } // 80109B48
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80109B4C
  cmps(c,0,(int32_t)c->r[0],0); // 80109B50
  if (crb(c,2)) { goto L_80109BA0; } // 80109B54
  c->r[0]=R32(c->r[3]+0x00000004u); // 80109B58
  c->r[3]=R32(c->r[3]+0x00000000u); // 80109B5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80109B60
  c->r[31]=c->r[3]+c->r[0]; // 80109B64
  goto L_80109B94; // 80109B68
L_80109B6C:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80109B6C
  c->r[4]=0u+0xFFFFFFFFu; // 80109B70
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 80109B74
  c->r[31]=c->r[31]-c->r[0]; // 80109B78
  c->r[3]=c->r[31]|c->r[31]; // 80109B7C
  c->ctr=c->r[12]; // 80109B80
  if (true) { c->lr=0x80109B88u; dispatch(c,c->ctr); } // 80109B84
  c->r[3]=R32(c->r[29]+0x00000010u); // 80109B88
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80109B8C
  W32(c->r[29]+0x00000010u,c->r[0]); // 80109B90
L_80109B94:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80109B94
  cmps(c,0,(int32_t)c->r[0],0); // 80109B98
  if (!crb(c,2)) { IRQCHK(c); goto L_80109B6C; } // 80109B9C
L_80109BA0:;
  cmps(c,0,(int32_t)c->r[30],0); // 80109BA0
  if (!crb(c,1)) { goto L_80109BB0; } // 80109BA4
  c->r[3]=c->r[29]|c->r[29]; // 80109BA8
  c->lr=0x80109BB0u; f_8009230C(c); // 80109BAC
L_80109BB0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80109BB0
  c->r[3]=c->r[29]|c->r[29]; // 80109BB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80109BB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80109BBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109BC0
  c->lr=c->r[0]; // 80109BC4
  c->r[1]=c->r[1]+0x00000020u; // 80109BC8
  return; // 80109BCC
}

// __construct_array
void f_80109BD0(Ctx* __restrict c) {
  trace_call(0x80109BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109BD0
  c->r[0]=c->lr; // 80109BD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80109BD8
  c->r[0]=0u+0x00000000u; // 80109BDC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80109BE0
  c->r[31]=c->r[3]|c->r[3]; // 80109BE4
  W32(c->r[1]+0x00000028u,c->r[30]); // 80109BE8
  c->r[30]=c->r[7]|c->r[7]; // 80109BEC
  W32(c->r[1]+0x00000024u,c->r[29]); // 80109BF0
  c->r[29]=c->r[6]|c->r[6]; // 80109BF4
  W32(c->r[1]+0x00000020u,c->r[28]); // 80109BF8
  c->r[28]=c->r[4]|c->r[4]; // 80109BFC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80109C00
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80109C04
  W32(c->r[1]+0x00000010u,c->r[7]); // 80109C08
  W32(c->r[1]+0x00000014u,c->r[5]); // 80109C0C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80109C10
  goto L_80109C3C; // 80109C14
L_80109C18:;
  c->r[12]=c->r[28]|c->r[28]; // 80109C18
  c->r[3]=c->r[31]|c->r[31]; // 80109C1C
  c->r[4]=0u+0x00000001u; // 80109C20
  c->ctr=c->r[12]; // 80109C24
  if (true) { c->lr=0x80109C2Cu; dispatch(c,c->ctr); } // 80109C28
  c->r[3]=R32(c->r[1]+0x00000018u); // 80109C2C
  c->r[31]=c->r[31]+c->r[29]; // 80109C30
  c->r[0]=c->r[3]+0x00000001u; // 80109C34
  W32(c->r[1]+0x00000018u,c->r[0]); // 80109C38
L_80109C3C:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 80109C3C
  cmpu(c,0,c->r[4],c->r[30]); // 80109C40
  if (crb(c,0)) { IRQCHK(c); goto L_80109C18; } // 80109C44
  c->r[0]=R32(c->r[1]+0x00000010u); // 80109C48
  cmpu(c,0,c->r[4],c->r[0]); // 80109C4C
  if (!crb(c,0)) { goto L_80109CA8; } // 80109C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109C54
  cmps(c,0,(int32_t)c->r[0],0); // 80109C58
  if (crb(c,2)) { goto L_80109CA8; } // 80109C5C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80109C60
  c->r[3]=R32(c->r[1]+0x00000008u); // 80109C64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80109C68
  c->r[31]=c->r[3]+c->r[0]; // 80109C6C
  goto L_80109C9C; // 80109C70
L_80109C74:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80109C74
  c->r[4]=0u+0xFFFFFFFFu; // 80109C78
  c->r[12]=R32(c->r[1]+0x00000014u); // 80109C7C
  c->r[31]=c->r[31]-c->r[0]; // 80109C80
  c->r[3]=c->r[31]|c->r[31]; // 80109C84
  c->ctr=c->r[12]; // 80109C88
  if (true) { c->lr=0x80109C90u; dispatch(c,c->ctr); } // 80109C8C
  c->r[3]=R32(c->r[1]+0x00000018u); // 80109C90
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80109C94
  W32(c->r[1]+0x00000018u,c->r[0]); // 80109C98
L_80109C9C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 80109C9C
  cmps(c,0,(int32_t)c->r[0],0); // 80109CA0
  if (!crb(c,2)) { IRQCHK(c); goto L_80109C74; } // 80109CA4
L_80109CA8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80109CA8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80109CAC
  c->r[30]=R32(c->r[1]+0x00000028u); // 80109CB0
  c->r[29]=R32(c->r[1]+0x00000024u); // 80109CB4
  c->r[28]=R32(c->r[1]+0x00000020u); // 80109CB8
  c->lr=c->r[0]; // 80109CBC
  c->r[1]=c->r[1]+0x00000030u; // 80109CC0
  return; // 80109CC4
}

// __destroy_arr
void f_80109CC8(Ctx* __restrict c) {
  trace_call(0x80109CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109CC8
  c->r[0]=c->lr; // 80109CCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80109CD0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 80109CD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80109CD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80109CDC
  c->r[30]=c->r[6]|c->r[6]; // 80109CE0
  c->r[31]=c->r[3]+c->r[0]; // 80109CE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80109CE8
  c->r[29]=c->r[5]|c->r[5]; // 80109CEC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80109CF0
  c->r[28]=c->r[4]|c->r[4]; // 80109CF4
  goto L_80109D18; // 80109CF8
L_80109CFC:;
  c->r[31]=c->r[31]-c->r[29]; // 80109CFC
  c->r[12]=c->r[28]|c->r[28]; // 80109D00
  c->r[3]=c->r[31]|c->r[31]; // 80109D04
  c->r[4]=0u+0xFFFFFFFFu; // 80109D08
  c->ctr=c->r[12]; // 80109D0C
  if (true) { c->lr=0x80109D14u; dispatch(c,c->ctr); } // 80109D10
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80109D14
L_80109D18:;
  cmps(c,0,(int32_t)c->r[30],0); // 80109D18
  if (!crb(c,2)) { IRQCHK(c); goto L_80109CFC; } // 80109D1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109D20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80109D24
  c->r[30]=R32(c->r[1]+0x00000018u); // 80109D28
  c->r[29]=R32(c->r[1]+0x00000014u); // 80109D2C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80109D30
  c->lr=c->r[0]; // 80109D34
  c->r[1]=c->r[1]+0x00000020u; // 80109D38
  return; // 80109D3C
}

// fn_80109D40
void f_80109D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109D40
  c->r[0]=c->lr; // 80109D44
  cmps(c,0,(int32_t)c->r[3],0); // 80109D48
  W32(c->r[1]+0x00000024u,c->r[0]); // 80109D4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80109D50
  c->r[26]=c->r[3]|c->r[3]; // 80109D54
  c->r[27]=c->r[4]|c->r[4]; // 80109D58
  if (crb(c,2)) { goto L_80109DAC; } // 80109D5C
  cmps(c,0,(int32_t)c->r[4],0); // 80109D60
  if (crb(c,2)) { goto L_80109DA4; } // 80109D64
  c->r[29]=R32(c->r[3]+0xFFFFFFF0u); // 80109D68
  c->r[31]=0u+0x00000000u; // 80109D6C
  c->r[30]=R32(c->r[3]+0xFFFFFFF4u); // 80109D70
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[30]); // 80109D74
  c->r[28]=c->r[3]+c->r[0]; // 80109D78
  goto L_80109D9C; // 80109D7C
L_80109D80:;
  c->r[28]=c->r[28]-c->r[29]; // 80109D80
  c->r[12]=c->r[27]|c->r[27]; // 80109D84
  c->r[3]=c->r[28]|c->r[28]; // 80109D88
  c->r[4]=0u+0xFFFFFFFFu; // 80109D8C
  c->ctr=c->r[12]; // 80109D90
  if (true) { c->lr=0x80109D98u; dispatch(c,c->ctr); } // 80109D94
  c->r[31]=c->r[31]+0x00000001u; // 80109D98
L_80109D9C:;
  cmpu(c,0,c->r[31],c->r[30]); // 80109D9C
  if (crb(c,0)) { IRQCHK(c); goto L_80109D80; } // 80109DA0
L_80109DA4:;
  c->r[3]=c->r[26]+0xFFFFFFF0u; // 80109DA4
  c->lr=0x80109DACu; f_8009231C(c); // 80109DA8
L_80109DAC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80109DAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109DB0
  c->lr=c->r[0]; // 80109DB4
  c->r[1]=c->r[1]+0x00000020u; // 80109DB8
  return; // 80109DBC
}

// __ptmf_scall
void f_80109DC0(Ctx* __restrict c) {
  trace_call(0x80109DC0u);
  c->r[0]=R32(c->r[12]+0x00000000u); // 80109DC0
  c->r[11]=R32(c->r[12]+0x00000004u); // 80109DC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80109DC8
  c->r[3]=c->r[3]+c->r[0]; // 80109DCC
  cmps(c,0,(int32_t)c->r[11],0); // 80109DD0
  if (crb(c,0)) { goto L_80109DE0; } // 80109DD4
  c->r[12]=R32(c->r[3]+c->r[12]); // 80109DD8
  c->r[12]=R32(c->r[12]+c->r[11]); // 80109DDC
L_80109DE0:;
  c->ctr=c->r[12]; // 80109DE0
  if (true) { dispatch(c,c->ctr); return; } // 80109DE4
}

// __ptmf_scall_80109DE8
void f_80109DE8(Ctx* __restrict c) {
  trace_call(0x80109DE8u);
  c->r[0]=R32(c->r[12]+0x00000000u); // 80109DE8
  c->r[11]=R32(c->r[12]+0x00000004u); // 80109DEC
  c->r[12]=R32(c->r[12]+0x00000008u); // 80109DF0
  c->r[4]=c->r[4]+c->r[0]; // 80109DF4
  cmps(c,0,(int32_t)c->r[11],0); // 80109DF8
  if (crb(c,0)) { goto L_80109E08; } // 80109DFC
  c->r[12]=R32(c->r[4]+c->r[12]); // 80109E00
  c->r[12]=R32(c->r[12]+c->r[11]); // 80109E04
L_80109E08:;
  c->ctr=c->r[12]; // 80109E08
  if (true) { dispatch(c,c->ctr); return; } // 80109E0C
}

// __cvt_fp2unsigned
void f_80109E10(Ctx* __restrict c) {
  trace_call(0x80109E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109E10
  c->r[4]=0u+0x80260000u; // 80109E14
  c->r[4]=c->r[4]+0x00001118u; // 80109E18
  c->r[3]=0u+0x00000000u; // 80109E1C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 80109E20
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=RF64(ea);} // 80109E24
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=RF64(ea);} // 80109E28
  fcmp(c,0,c->f[1],c->f[0]); // 80109E2C
  fcmp(c,6,c->f[1],c->f[3]); // 80109E30
  if (crb(c,0)) { goto L_80109E64; } // 80109E34
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80109E38
  if (!crb(c,24)) { goto L_80109E64; } // 80109E3C
  fcmp(c,7,c->f[1],c->f[4]); // 80109E40
  c->f[2]=c->f[1]; // 80109E44
  if (crb(c,28)) { goto L_80109E50; } // 80109E48
  c->f[2]=c->f[1]-c->f[4]; // 80109E4C
L_80109E50:;
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80109E50
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 80109E54
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80109E58
  if (crb(c,28)) { goto L_80109E64; } // 80109E5C
  c->r[3]=c->r[3]+0x80000000u; // 80109E60
L_80109E64:;
  c->r[1]=c->r[1]+0x00000010u; // 80109E64
  return; // 80109E68
}

// __save_fpr
void f_80109E6C(Ctx* __restrict c) {
  trace_call(0x80109E6Cu);
  {uint32_t ea=c->r[11]+0xFFFFFF70u; WF64(ea,c->f[14]);} // 80109E6C
  {uint32_t ea=c->r[11]+0xFFFFFF78u; WF64(ea,c->f[15]);} // 80109E70
  {uint32_t ea=c->r[11]+0xFFFFFF80u; WF64(ea,c->f[16]);} // 80109E74
  {uint32_t ea=c->r[11]+0xFFFFFF88u; WF64(ea,c->f[17]);} // 80109E78
  {uint32_t ea=c->r[11]+0xFFFFFF90u; WF64(ea,c->f[18]);} // 80109E7C
  {uint32_t ea=c->r[11]+0xFFFFFF98u; WF64(ea,c->f[19]);} // 80109E80
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; WF64(ea,c->f[20]);} // 80109E84
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; WF64(ea,c->f[21]);} // 80109E88
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; WF64(ea,c->f[22]);} // 80109E8C
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; WF64(ea,c->f[23]);} // 80109E90
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; WF64(ea,c->f[24]);} // 80109E94
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; WF64(ea,c->f[25]);} // 80109E98
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; WF64(ea,c->f[26]);} // 80109E9C
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} // 80109EA0
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} // 80109EA4
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} // 80109EA8
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} // 80109EAC
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} // 80109EB0
  return; // 80109EB4
}

// __restore_fpr
void f_80109EB8(Ctx* __restrict c) {
  trace_call(0x80109EB8u);
  {uint32_t ea=c->r[11]+0xFFFFFF70u; c->f[14]=RF64(ea);} // 80109EB8
  {uint32_t ea=c->r[11]+0xFFFFFF78u; c->f[15]=RF64(ea);} // 80109EBC
  {uint32_t ea=c->r[11]+0xFFFFFF80u; c->f[16]=RF64(ea);} // 80109EC0
  {uint32_t ea=c->r[11]+0xFFFFFF88u; c->f[17]=RF64(ea);} // 80109EC4
  {uint32_t ea=c->r[11]+0xFFFFFF90u; c->f[18]=RF64(ea);} // 80109EC8
  {uint32_t ea=c->r[11]+0xFFFFFF98u; c->f[19]=RF64(ea);} // 80109ECC
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; c->f[20]=RF64(ea);} // 80109ED0
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; c->f[21]=RF64(ea);} // 80109ED4
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; c->f[22]=RF64(ea);} // 80109ED8
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; c->f[23]=RF64(ea);} // 80109EDC
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; c->f[24]=RF64(ea);} // 80109EE0
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; c->f[25]=RF64(ea);} // 80109EE4
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; c->f[26]=RF64(ea);} // 80109EE8
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} // 80109EEC
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} // 80109EF0
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} // 80109EF4
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} // 80109EF8
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} // 80109EFC
  return; // 80109F00
}

// __save_gpr
void f_80109F04(Ctx* __restrict c) {
  trace_call(0x80109F04u);
  W32(c->r[11]+0xFFFFFFB8u,c->r[14]); // 80109F04
  W32(c->r[11]+0xFFFFFFBCu,c->r[15]); // 80109F08
  W32(c->r[11]+0xFFFFFFC0u,c->r[16]); // 80109F0C
  W32(c->r[11]+0xFFFFFFC4u,c->r[17]); // 80109F10
  W32(c->r[11]+0xFFFFFFC8u,c->r[18]); // 80109F14
  W32(c->r[11]+0xFFFFFFCCu,c->r[19]); // 80109F18
  W32(c->r[11]+0xFFFFFFD0u,c->r[20]); // 80109F1C
  W32(c->r[11]+0xFFFFFFD4u,c->r[21]); // 80109F20
  W32(c->r[11]+0xFFFFFFD8u,c->r[22]); // 80109F24
  W32(c->r[11]+0xFFFFFFDCu,c->r[23]); // 80109F28
  W32(c->r[11]+0xFFFFFFE0u,c->r[24]); // 80109F2C
  W32(c->r[11]+0xFFFFFFE4u,c->r[25]); // 80109F30
  W32(c->r[11]+0xFFFFFFE8u,c->r[26]); // 80109F34
  W32(c->r[11]+0xFFFFFFECu,c->r[27]); // 80109F38
  W32(c->r[11]+0xFFFFFFF0u,c->r[28]); // 80109F3C
  W32(c->r[11]+0xFFFFFFF4u,c->r[29]); // 80109F40
  W32(c->r[11]+0xFFFFFFF8u,c->r[30]); // 80109F44
  W32(c->r[11]+0xFFFFFFFCu,c->r[31]); // 80109F48
  return; // 80109F4C
}

// __restore_gpr
void f_80109F50(Ctx* __restrict c) {
  trace_call(0x80109F50u);
  c->r[14]=R32(c->r[11]+0xFFFFFFB8u); // 80109F50
  c->r[15]=R32(c->r[11]+0xFFFFFFBCu); // 80109F54
  c->r[16]=R32(c->r[11]+0xFFFFFFC0u); // 80109F58
  c->r[17]=R32(c->r[11]+0xFFFFFFC4u); // 80109F5C
  c->r[18]=R32(c->r[11]+0xFFFFFFC8u); // 80109F60
  c->r[19]=R32(c->r[11]+0xFFFFFFCCu); // 80109F64
  c->r[20]=R32(c->r[11]+0xFFFFFFD0u); // 80109F68
  c->r[21]=R32(c->r[11]+0xFFFFFFD4u); // 80109F6C
  c->r[22]=R32(c->r[11]+0xFFFFFFD8u); // 80109F70
  c->r[23]=R32(c->r[11]+0xFFFFFFDCu); // 80109F74
  c->r[24]=R32(c->r[11]+0xFFFFFFE0u); // 80109F78
  c->r[25]=R32(c->r[11]+0xFFFFFFE4u); // 80109F7C
  c->r[26]=R32(c->r[11]+0xFFFFFFE8u); // 80109F80
  c->r[27]=R32(c->r[11]+0xFFFFFFECu); // 80109F84
  c->r[28]=R32(c->r[11]+0xFFFFFFF0u); // 80109F88
  c->r[29]=R32(c->r[11]+0xFFFFFFF4u); // 80109F8C
  c->r[30]=R32(c->r[11]+0xFFFFFFF8u); // 80109F90
  c->r[31]=R32(c->r[11]+0xFFFFFFFCu); // 80109F94
  return; // 80109F98
}

// __div2u
void f_80109F9C(Ctx* __restrict c) {
  trace_call(0x80109F9Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 80109F9C
  c->r[0]=cntlz(c->r[3]); // 80109FA0
  c->r[9]=cntlz(c->r[4]); // 80109FA4
  if (!crb(c,2)) { goto L_80109FB0; } // 80109FA8
  c->r[0]=c->r[9]+0x00000020u; // 80109FAC
L_80109FB0:;
  cmps(c,0,(int32_t)c->r[5],0); // 80109FB0
  c->r[9]=cntlz(c->r[5]); // 80109FB4
  c->r[10]=cntlz(c->r[6]); // 80109FB8
  if (!crb(c,2)) { goto L_80109FC4; } // 80109FBC
  c->r[9]=c->r[10]+0x00000020u; // 80109FC0
L_80109FC4:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 80109FC4
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 80109FC8
  if (crb(c,1)) { goto L_8010A07C; } // 80109FCC
  c->r[9]=c->r[9]+0x00000001u; // 80109FD0
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 80109FD4
  c->r[0]=c->r[0]+c->r[9]; // 80109FD8
  c->r[9]=c->r[10]-c->r[9]; // 80109FDC
  c->ctr=c->r[9]; // 80109FE0
  cmps(c,0,(int32_t)c->r[9],32); // 80109FE4
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 80109FE8
  if (crb(c,0)) { goto L_80109FFC; } // 80109FEC
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 80109FF0
  c->r[7]=0u+0x00000000u; // 80109FF4
  goto L_8010A010; // 80109FF8
L_80109FFC:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 80109FFC
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 8010A000
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 8010A004
  c->r[8]=c->r[8]|c->r[7]; // 8010A008
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 8010A00C
L_8010A010:;
  cmps(c,0,(int32_t)c->r[0],32); // 8010A010
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 8010A014
  if (crb(c,0)) { goto L_8010A028; } // 8010A018
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8010A01C
  c->r[4]=0u+0x00000000u; // 8010A020
  goto L_8010A03C; // 8010A024
L_8010A028:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8010A028
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 8010A02C
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 8010A030
  c->r[3]=c->r[3]|c->r[9]; // 8010A034
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8010A038
L_8010A03C:;
  c->r[10]=0u+0xFFFFFFFFu; // 8010A03C
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 8010A040
L_8010A044:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 8010A044
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 8010A048
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 8010A04C
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 8010A050
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 8010A054
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 8010A058
  if (crb(c,0)) { goto L_8010A06C; } // 8010A05C
  c->r[8]=c->r[0]|c->r[0]; // 8010A060
  c->r[7]=c->r[9]|c->r[9]; // 8010A064
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 8010A068
L_8010A06C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A044; } // 8010A06C
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 8010A070
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 8010A074
  return; // 8010A078
L_8010A07C:;
  c->r[4]=0u+0x00000000u; // 8010A07C
  c->r[3]=0u+0x00000000u; // 8010A080
  return; // 8010A084
}

// __div2i
void f_8010A088(Ctx* __restrict c) {
  trace_call(0x8010A088u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A088
  c->r[9]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[9]); // 8010A08C
  if (crb(c,2)) { goto L_8010A09C; } // 8010A090
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8010A094
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8010A098
L_8010A09C:;
  W32(c->r[1]+0x00000008u,c->r[9]); // 8010A09C
  c->r[10]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[10]); // 8010A0A0
  if (crb(c,2)) { goto L_8010A0B0; } // 8010A0A4
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 8010A0A8
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 8010A0AC
L_8010A0B0:;
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 8010A0B0
  cmps(c,0,(int32_t)c->r[3],0); // 8010A0B4
  c->r[0]=cntlz(c->r[3]); // 8010A0B8
  c->r[9]=cntlz(c->r[4]); // 8010A0BC
  if (!crb(c,2)) { goto L_8010A0C8; } // 8010A0C0
  c->r[0]=c->r[9]+0x00000020u; // 8010A0C4
L_8010A0C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010A0C8
  c->r[9]=cntlz(c->r[5]); // 8010A0CC
  c->r[10]=cntlz(c->r[6]); // 8010A0D0
  if (!crb(c,2)) { goto L_8010A0DC; } // 8010A0D4
  c->r[9]=c->r[10]+0x00000020u; // 8010A0D8
L_8010A0DC:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 8010A0DC
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 8010A0E0
  if (crb(c,1)) { goto L_8010A1B0; } // 8010A0E4
  c->r[9]=c->r[9]+0x00000001u; // 8010A0E8
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 8010A0EC
  c->r[0]=c->r[0]+c->r[9]; // 8010A0F0
  c->r[9]=c->r[10]-c->r[9]; // 8010A0F4
  c->ctr=c->r[9]; // 8010A0F8
  cmps(c,0,(int32_t)c->r[9],32); // 8010A0FC
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 8010A100
  if (crb(c,0)) { goto L_8010A114; } // 8010A104
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 8010A108
  c->r[7]=0u+0x00000000u; // 8010A10C
  goto L_8010A128; // 8010A110
L_8010A114:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 8010A114
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 8010A118
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 8010A11C
  c->r[8]=c->r[8]|c->r[7]; // 8010A120
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 8010A124
L_8010A128:;
  cmps(c,0,(int32_t)c->r[0],32); // 8010A128
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 8010A12C
  if (crb(c,0)) { goto L_8010A140; } // 8010A130
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8010A134
  c->r[4]=0u+0x00000000u; // 8010A138
  goto L_8010A154; // 8010A13C
L_8010A140:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8010A140
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 8010A144
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 8010A148
  c->r[3]=c->r[3]|c->r[9]; // 8010A14C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8010A150
L_8010A154:;
  c->r[10]=0u+0xFFFFFFFFu; // 8010A154
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 8010A158
L_8010A15C:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 8010A15C
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 8010A160
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 8010A164
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 8010A168
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 8010A16C
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 8010A170
  if (crb(c,0)) { goto L_8010A184; } // 8010A174
  c->r[8]=c->r[0]|c->r[0]; // 8010A178
  c->r[7]=c->r[9]|c->r[9]; // 8010A17C
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 8010A180
L_8010A184:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A15C; } // 8010A184
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 8010A188
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 8010A18C
  c->r[9]=R32(c->r[1]+0x00000008u); // 8010A190
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 8010A194
  c->r[7]=c->r[9]^c->r[10]; cr0(c,c->r[7]); // 8010A198
  if (crb(c,2)) { goto L_8010A1AC; } // 8010A19C
  cmps(c,0,(int32_t)c->r[9],0); // 8010A1A0
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8010A1A4
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8010A1A8
L_8010A1AC:;
  goto L_8010A1B8; // 8010A1AC
L_8010A1B0:;
  c->r[4]=0u+0x00000000u; // 8010A1B0
  c->r[3]=0u+0x00000000u; // 8010A1B4
L_8010A1B8:;
  c->r[1]=c->r[1]+0x00000010u; // 8010A1B8
  return; // 8010A1BC
}

// __mod2u
void f_8010A1C0(Ctx* __restrict c) {
  trace_call(0x8010A1C0u);
  cmps(c,0,(int32_t)c->r[3],0); // 8010A1C0
  c->r[0]=cntlz(c->r[3]); // 8010A1C4
  c->r[9]=cntlz(c->r[4]); // 8010A1C8
  if (!crb(c,2)) { goto L_8010A1D4; } // 8010A1CC
  c->r[0]=c->r[9]+0x00000020u; // 8010A1D0
L_8010A1D4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010A1D4
  c->r[9]=cntlz(c->r[5]); // 8010A1D8
  c->r[10]=cntlz(c->r[6]); // 8010A1DC
  if (!crb(c,2)) { goto L_8010A1E8; } // 8010A1E0
  c->r[9]=c->r[10]+0x00000020u; // 8010A1E4
L_8010A1E8:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 8010A1E8
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 8010A1EC
  if (crb(c,1)) { goto L_8010A2A0; } // 8010A1F0
  c->r[9]=c->r[9]+0x00000001u; // 8010A1F4
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 8010A1F8
  c->r[0]=c->r[0]+c->r[9]; // 8010A1FC
  c->r[9]=c->r[10]-c->r[9]; // 8010A200
  c->ctr=c->r[9]; // 8010A204
  cmps(c,0,(int32_t)c->r[9],32); // 8010A208
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 8010A20C
  if (crb(c,0)) { goto L_8010A220; } // 8010A210
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 8010A214
  c->r[7]=0u+0x00000000u; // 8010A218
  goto L_8010A234; // 8010A21C
L_8010A220:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 8010A220
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 8010A224
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 8010A228
  c->r[8]=c->r[8]|c->r[7]; // 8010A22C
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 8010A230
L_8010A234:;
  cmps(c,0,(int32_t)c->r[0],32); // 8010A234
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 8010A238
  if (crb(c,0)) { goto L_8010A24C; } // 8010A23C
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8010A240
  c->r[4]=0u+0x00000000u; // 8010A244
  goto L_8010A260; // 8010A248
L_8010A24C:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8010A24C
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 8010A250
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 8010A254
  c->r[3]=c->r[3]|c->r[9]; // 8010A258
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8010A25C
L_8010A260:;
  c->r[10]=0u+0xFFFFFFFFu; // 8010A260
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 8010A264
L_8010A268:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 8010A268
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 8010A26C
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 8010A270
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 8010A274
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 8010A278
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 8010A27C
  if (crb(c,0)) { goto L_8010A290; } // 8010A280
  c->r[8]=c->r[0]|c->r[0]; // 8010A284
  c->r[7]=c->r[9]|c->r[9]; // 8010A288
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 8010A28C
L_8010A290:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A268; } // 8010A290
  c->r[4]=c->r[8]|c->r[8]; // 8010A294
  c->r[3]=c->r[7]|c->r[7]; // 8010A298
  return; // 8010A29C
L_8010A2A0:;
  return; // 8010A2A0
}

// __mod2i
void f_8010A2A4(Ctx* __restrict c) {
  trace_call(0x8010A2A4u);
  cmps(c,7,(int32_t)c->r[3],0); // 8010A2A4
  if (!crb(c,28)) { goto L_8010A2B4; } // 8010A2A8
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8010A2AC
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8010A2B0
L_8010A2B4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010A2B4
  if (!crb(c,0)) { goto L_8010A2C4; } // 8010A2B8
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 8010A2BC
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 8010A2C0
L_8010A2C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8010A2C4
  c->r[0]=cntlz(c->r[3]); // 8010A2C8
  c->r[9]=cntlz(c->r[4]); // 8010A2CC
  if (!crb(c,2)) { goto L_8010A2D8; } // 8010A2D0
  c->r[0]=c->r[9]+0x00000020u; // 8010A2D4
L_8010A2D8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010A2D8
  c->r[9]=cntlz(c->r[5]); // 8010A2DC
  c->r[10]=cntlz(c->r[6]); // 8010A2E0
  if (!crb(c,2)) { goto L_8010A2EC; } // 8010A2E4
  c->r[9]=c->r[10]+0x00000020u; // 8010A2E8
L_8010A2EC:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 8010A2EC
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 8010A2F0
  if (crb(c,1)) { goto L_8010A3A0; } // 8010A2F4
  c->r[9]=c->r[9]+0x00000001u; // 8010A2F8
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 8010A2FC
  c->r[0]=c->r[0]+c->r[9]; // 8010A300
  c->r[9]=c->r[10]-c->r[9]; // 8010A304
  c->ctr=c->r[9]; // 8010A308
  cmps(c,0,(int32_t)c->r[9],32); // 8010A30C
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 8010A310
  if (crb(c,0)) { goto L_8010A324; } // 8010A314
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 8010A318
  c->r[7]=0u+0x00000000u; // 8010A31C
  goto L_8010A338; // 8010A320
L_8010A324:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 8010A324
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 8010A328
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 8010A32C
  c->r[8]=c->r[8]|c->r[7]; // 8010A330
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 8010A334
L_8010A338:;
  cmps(c,0,(int32_t)c->r[0],32); // 8010A338
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 8010A33C
  if (crb(c,0)) { goto L_8010A350; } // 8010A340
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8010A344
  c->r[4]=0u+0x00000000u; // 8010A348
  goto L_8010A364; // 8010A34C
L_8010A350:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8010A350
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 8010A354
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 8010A358
  c->r[3]=c->r[3]|c->r[9]; // 8010A35C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8010A360
L_8010A364:;
  c->r[10]=0u+0xFFFFFFFFu; // 8010A364
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 8010A368
L_8010A36C:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 8010A36C
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 8010A370
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 8010A374
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 8010A378
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 8010A37C
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 8010A380
  if (crb(c,0)) { goto L_8010A394; } // 8010A384
  c->r[8]=c->r[0]|c->r[0]; // 8010A388
  c->r[7]=c->r[9]|c->r[9]; // 8010A38C
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 8010A390
L_8010A394:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A36C; } // 8010A394
  c->r[4]=c->r[8]|c->r[8]; // 8010A398
  c->r[3]=c->r[7]|c->r[7]; // 8010A39C
L_8010A3A0:;
  if (!crb(c,28)) { goto L_8010A3AC; } // 8010A3A0
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8010A3A4
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8010A3A8
L_8010A3AC:;
  return; // 8010A3AC
}

// __shl2i
void f_8010A3B0(Ctx* __restrict c) {
  trace_call(0x8010A3B0u);
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 8010A3B0
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 8010A3B4
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8010A3B8
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 8010A3BC
  c->r[3]=c->r[3]|c->r[10]; // 8010A3C0
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8010A3C4
  c->r[3]=c->r[3]|c->r[10]; // 8010A3C8
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 8010A3CC
  return; // 8010A3D0
}

// fn_8010A3D4
void f_8010A3D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A3D4
  c->r[5]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[5]); // 8010A3D8
  if (crb(c,2)) { goto L_8010A3E8; } // 8010A3DC
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8010A3E0
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8010A3E4
L_8010A3E8:;
  c->r[7]=c->r[3]|c->r[4]; cr0(c,c->r[7]); // 8010A3E8
  c->r[6]=0u+0x00000000u; // 8010A3EC
  if (crb(c,2)) { goto L_8010A470; } // 8010A3F0
  c->r[7]=cntlz(c->r[3]); // 8010A3F4
  c->r[8]=cntlz(c->r[4]); // 8010A3F8
  c->r[9]=rotl(c->r[7],26)&0xF8000000u; // 8010A3FC
  c->r[9]=sraw(c,c->r[9],31); // 8010A400
  c->r[9]=c->r[9]&c->r[8]; // 8010A404
  c->r[7]=c->r[7]+c->r[9]; // 8010A408
  c->r[8]=addc(c,~c->r[7],0x00000020u,1); // 8010A40C
  c->r[9]=addc(c,c->r[7],0xFFFFFFE0u,0); // 8010A410
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 8010A414
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 8010A418
  c->r[3]=c->r[3]|c->r[10]; // 8010A41C
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8010A420
  c->r[3]=c->r[3]|c->r[10]; // 8010A424
  c->r[4]=((c->r[7])&0x20)?0u:(c->r[4]<<((c->r[7])&31)); // 8010A428
  c->r[6]=c->r[6]-c->r[7]; // 8010A42C
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 8010A430
  cmps(c,0,(int32_t)c->r[7],1024); // 8010A434
  c->r[6]=c->r[6]+0x0000043Eu; // 8010A438
  if (crb(c,0)) { goto L_8010A458; } // 8010A43C
  if (crb(c,1)) { goto L_8010A44C; } // 8010A440
  c->r[7]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[7]); // 8010A444
  if (crb(c,2)) { goto L_8010A458; } // 8010A448
L_8010A44C:;
  c->r[4]=addc(c,c->r[4],0x00000800u,0); // 8010A44C
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 8010A450
  c->r[6]=addc(c,c->r[6],0,c->xer_ca); // 8010A454
L_8010A458:;
  c->r[4]=rotl(c->r[4],21)&0xFFFFFFFFu; // 8010A458
  c->r[4]=(rotl(c->r[3],21)&0xFFE00000u)|(c->r[4]&~0xFFE00000u); // 8010A45C
  c->r[3]=rotl(c->r[3],21)&0x000FFFFFu; // 8010A460
  c->r[6]=rotl(c->r[6],20)&0xFFF00000u; // 8010A464
  c->r[3]=c->r[6]|c->r[3]; // 8010A468
  c->r[3]=c->r[5]|c->r[3]; // 8010A46C
L_8010A470:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010A470
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8010A474
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8010A478
  c->r[1]=c->r[1]+0x00000010u; // 8010A47C
  return; // 8010A480
}

// fn_8010A484
void f_8010A484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A484
  c->r[5]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[5]); // 8010A488
  if (crb(c,2)) { goto L_8010A498; } // 8010A48C
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 8010A490
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 8010A494
L_8010A498:;
  c->r[7]=c->r[3]|c->r[4]; cr0(c,c->r[7]); // 8010A498
  c->r[6]=0u+0x00000000u; // 8010A49C
  if (crb(c,2)) { goto L_8010A520; } // 8010A4A0
  c->r[7]=cntlz(c->r[3]); // 8010A4A4
  c->r[8]=cntlz(c->r[4]); // 8010A4A8
  c->r[9]=rotl(c->r[7],26)&0xF8000000u; // 8010A4AC
  c->r[9]=sraw(c,c->r[9],31); // 8010A4B0
  c->r[9]=c->r[9]&c->r[8]; // 8010A4B4
  c->r[7]=c->r[7]+c->r[9]; // 8010A4B8
  c->r[8]=addc(c,~c->r[7],0x00000020u,1); // 8010A4BC
  c->r[9]=addc(c,c->r[7],0xFFFFFFE0u,0); // 8010A4C0
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 8010A4C4
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 8010A4C8
  c->r[3]=c->r[3]|c->r[10]; // 8010A4CC
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8010A4D0
  c->r[3]=c->r[3]|c->r[10]; // 8010A4D4
  c->r[4]=((c->r[7])&0x20)?0u:(c->r[4]<<((c->r[7])&31)); // 8010A4D8
  c->r[6]=c->r[6]-c->r[7]; // 8010A4DC
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 8010A4E0
  cmps(c,0,(int32_t)c->r[7],1024); // 8010A4E4
  c->r[6]=c->r[6]+0x0000043Eu; // 8010A4E8
  if (crb(c,0)) { goto L_8010A508; } // 8010A4EC
  if (crb(c,1)) { goto L_8010A4FC; } // 8010A4F0
  c->r[7]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[7]); // 8010A4F4
  if (crb(c,2)) { goto L_8010A508; } // 8010A4F8
L_8010A4FC:;
  c->r[4]=addc(c,c->r[4],0x00000800u,0); // 8010A4FC
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 8010A500
  c->r[6]=addc(c,c->r[6],0,c->xer_ca); // 8010A504
L_8010A508:;
  c->r[4]=rotl(c->r[4],21)&0xFFFFFFFFu; // 8010A508
  c->r[4]=(rotl(c->r[3],21)&0xFFE00000u)|(c->r[4]&~0xFFE00000u); // 8010A50C
  c->r[3]=rotl(c->r[3],21)&0x000FFFFFu; // 8010A510
  c->r[6]=rotl(c->r[6],20)&0xFFF00000u; // 8010A514
  c->r[3]=c->r[6]|c->r[3]; // 8010A518
  c->r[3]=c->r[5]|c->r[3]; // 8010A51C
L_8010A520:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010A520
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8010A524
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8010A528
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8010A52C
  c->r[1]=c->r[1]+0x00000010u; // 8010A530
  return; // 8010A534
}

// __cvt_dbl_ull
void f_8010A538(Ctx* __restrict c) {
  trace_call(0x8010A538u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A538
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 8010A53C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8010A540
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8010A544
  c->r[5]=rotl(c->r[3],12)&0x000007FFu; // 8010A548
  cmpu(c,0,c->r[5],0x000003FFu); // 8010A54C
  if (!crb(c,0)) { goto L_8010A560; } // 8010A550
L_8010A554:;
  c->r[3]=0u+0x00000000u; // 8010A554
  c->r[4]=0u+0x00000000u; // 8010A558
  goto L_8010A5D8; // 8010A55C
L_8010A560:;
  c->r[6]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[6]); // 8010A560
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A554; } // 8010A564
  c->r[3]=rotl(c->r[3],0)&0x000FFFFFu; // 8010A568
  c->r[3]=c->r[3]|0x00100000u; // 8010A56C
  c->r[5]=c->r[5]+0xFFFFFBCDu; // 8010A570
  cmps(c,0,(int32_t)c->r[5],0); // 8010A574
  if (!crb(c,0)) { goto L_8010A5A4; } // 8010A578
  c->r[5]=0u-c->r[5]; // 8010A57C
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 8010A580
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 8010A584
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]>>((c->r[5])&31)); // 8010A588
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 8010A58C
  c->r[4]=c->r[4]|c->r[10]; // 8010A590
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 8010A594
  c->r[4]=c->r[4]|c->r[10]; // 8010A598
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 8010A59C
  goto L_8010A5D8; // 8010A5A0
L_8010A5A4:;
  cmps(c,0,(int32_t)c->r[5],11); // 8010A5A4
  if (!crb(c,1)) { goto L_8010A5B8; } // 8010A5A8
  c->r[3]=0u+0xFFFFFFFFu; // 8010A5AC
  c->r[4]=0u+0xFFFFFFFFu; // 8010A5B0
  goto L_8010A5D8; // 8010A5B4
L_8010A5B8:;
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 8010A5B8
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 8010A5BC
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 8010A5C0
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 8010A5C4
  c->r[3]=c->r[3]|c->r[10]; // 8010A5C8
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 8010A5CC
  c->r[3]=c->r[3]|c->r[10]; // 8010A5D0
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 8010A5D4
L_8010A5D8:;
  c->r[1]=c->r[1]+0x00000010u; // 8010A5D8
  return; // 8010A5DC
}

// __init_cpp_exceptions
void f_8010A5E0(Ctx* __restrict c) {
  trace_call(0x8010A5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A5E0
  c->r[0]=c->lr; // 8010A5E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A5E8
  c->r[0]=R32(c->r[13]+0xFFFF8C30u); // 8010A5EC
  cmps(c,0,(int32_t)c->r[0],-2); // 8010A5F0
  if (!crb(c,2)) { goto L_8010A60C; } // 8010A5F4
  c->r[3]=0u+0x80010000u; // 8010A5F8
  c->r[4]=c->r[2]|c->r[2]; // 8010A5FC
  c->r[3]=c->r[3]+0xFFFFC644u; // 8010A600
  c->lr=0x8010A608u; f_8010A864(c); // 8010A604
  W32(c->r[13]+0xFFFF8C30u,c->r[3]); // 8010A608
L_8010A60C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A60C
  c->lr=c->r[0]; // 8010A610
  c->r[1]=c->r[1]+0x00000010u; // 8010A614
  return; // 8010A618
}

// __fini_cpp_exceptions
void f_8010A61C(Ctx* __restrict c) {
  trace_call(0x8010A61Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A61C
  c->r[0]=c->lr; // 8010A620
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A624
  c->r[3]=R32(c->r[13]+0xFFFF8C30u); // 8010A628
  cmps(c,0,(int32_t)c->r[3],-2); // 8010A62C
  if (crb(c,2)) { goto L_8010A640; } // 8010A630
  c->lr=0x8010A638u; f_8010A898(c); // 8010A634
  c->r[0]=0u+0xFFFFFFFEu; // 8010A638
  W32(c->r[13]+0xFFFF8C30u,c->r[0]); // 8010A63C
L_8010A640:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A640
  c->lr=c->r[0]; // 8010A644
  c->r[1]=c->r[1]+0x00000010u; // 8010A648
  return; // 8010A64C
}

// fn_8010A650
void f_8010A650(Ctx* __restrict c) {
  c->r[5]=c->lr; // 8010A650
  c->r[6]=c->cr; // 8010A654
  W32(c->r[3]+0x00000000u,c->r[5]); // 8010A658
  W32(c->r[3]+0x00000004u,c->r[6]); // 8010A65C
  W32(c->r[3]+0x00000008u,c->r[1]); // 8010A660
  W32(c->r[3]+0x0000000Cu,c->r[2]); // 8010A664
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=13;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010A668
  c->f[0]=u2d((uint64_t)c->fpscr); // 8010A66C
  {uint32_t ea=c->r[3]+0x00000060u; WF64(ea,c->f[14]);} // 8010A670
  c->r[4]=c->r[3]+0x00000068u; // 8010A674
  {uint32_t ea=0u+c->r[4]; psq_store(c,14,ea,0,0);} // 8010A678
  {uint32_t ea=c->r[3]+0x00000070u; WF64(ea,c->f[15]);} // 8010A67C
  c->r[4]=c->r[3]+0x00000078u; // 8010A680
  {uint32_t ea=0u+c->r[4]; psq_store(c,15,ea,0,0);} // 8010A684
  {uint32_t ea=c->r[3]+0x00000080u; WF64(ea,c->f[16]);} // 8010A688
  c->r[4]=c->r[3]+0x00000088u; // 8010A68C
  {uint32_t ea=0u+c->r[4]; psq_store(c,16,ea,0,0);} // 8010A690
  {uint32_t ea=c->r[3]+0x00000090u; WF64(ea,c->f[17]);} // 8010A694
  c->r[4]=c->r[3]+0x00000098u; // 8010A698
  {uint32_t ea=0u+c->r[4]; psq_store(c,17,ea,0,0);} // 8010A69C
  {uint32_t ea=c->r[3]+0x000000A0u; WF64(ea,c->f[18]);} // 8010A6A0
  c->r[4]=c->r[3]+0x000000A8u; // 8010A6A4
  {uint32_t ea=0u+c->r[4]; psq_store(c,18,ea,0,0);} // 8010A6A8
  {uint32_t ea=c->r[3]+0x000000B0u; WF64(ea,c->f[19]);} // 8010A6AC
  c->r[4]=c->r[3]+0x000000B8u; // 8010A6B0
  {uint32_t ea=0u+c->r[4]; psq_store(c,19,ea,0,0);} // 8010A6B4
  {uint32_t ea=c->r[3]+0x000000C0u; WF64(ea,c->f[20]);} // 8010A6B8
  c->r[4]=c->r[3]+0x000000C8u; // 8010A6BC
  {uint32_t ea=0u+c->r[4]; psq_store(c,20,ea,0,0);} // 8010A6C0
  {uint32_t ea=c->r[3]+0x000000D0u; WF64(ea,c->f[21]);} // 8010A6C4
  c->r[4]=c->r[3]+0x000000D8u; // 8010A6C8
  {uint32_t ea=0u+c->r[4]; psq_store(c,21,ea,0,0);} // 8010A6CC
  {uint32_t ea=c->r[3]+0x000000E0u; WF64(ea,c->f[22]);} // 8010A6D0
  c->r[4]=c->r[3]+0x000000E8u; // 8010A6D4
  {uint32_t ea=0u+c->r[4]; psq_store(c,22,ea,0,0);} // 8010A6D8
  {uint32_t ea=c->r[3]+0x000000F0u; WF64(ea,c->f[23]);} // 8010A6DC
  c->r[4]=c->r[3]+0x000000F8u; // 8010A6E0
  {uint32_t ea=0u+c->r[4]; psq_store(c,23,ea,0,0);} // 8010A6E4
  {uint32_t ea=c->r[3]+0x00000100u; WF64(ea,c->f[24]);} // 8010A6E8
  c->r[4]=c->r[3]+0x00000108u; // 8010A6EC
  {uint32_t ea=0u+c->r[4]; psq_store(c,24,ea,0,0);} // 8010A6F0
  {uint32_t ea=c->r[3]+0x00000110u; WF64(ea,c->f[25]);} // 8010A6F4
  c->r[4]=c->r[3]+0x00000118u; // 8010A6F8
  {uint32_t ea=0u+c->r[4]; psq_store(c,25,ea,0,0);} // 8010A6FC
  {uint32_t ea=c->r[3]+0x00000120u; WF64(ea,c->f[26]);} // 8010A700
  c->r[4]=c->r[3]+0x00000128u; // 8010A704
  {uint32_t ea=0u+c->r[4]; psq_store(c,26,ea,0,0);} // 8010A708
  {uint32_t ea=c->r[3]+0x00000130u; WF64(ea,c->f[27]);} // 8010A70C
  c->r[4]=c->r[3]+0x00000138u; // 8010A710
  {uint32_t ea=0u+c->r[4]; psq_store(c,27,ea,0,0);} // 8010A714
  {uint32_t ea=c->r[3]+0x00000140u; WF64(ea,c->f[28]);} // 8010A718
  c->r[4]=c->r[3]+0x00000148u; // 8010A71C
  {uint32_t ea=0u+c->r[4]; psq_store(c,28,ea,0,0);} // 8010A720
  {uint32_t ea=c->r[3]+0x00000150u; WF64(ea,c->f[29]);} // 8010A724
  c->r[4]=c->r[3]+0x00000158u; // 8010A728
  {uint32_t ea=0u+c->r[4]; psq_store(c,29,ea,0,0);} // 8010A72C
  {uint32_t ea=c->r[3]+0x00000160u; WF64(ea,c->f[30]);} // 8010A730
  c->r[4]=c->r[3]+0x00000168u; // 8010A734
  {uint32_t ea=0u+c->r[4]; psq_store(c,30,ea,0,0);} // 8010A738
  {uint32_t ea=c->r[3]+0x00000170u; WF64(ea,c->f[31]);} // 8010A73C
  c->r[4]=c->r[3]+0x00000178u; // 8010A740
  {uint32_t ea=0u+c->r[4]; psq_store(c,31,ea,0,0);} // 8010A744
  {uint32_t ea=c->r[3]+0x00000180u; WF64(ea,c->f[0]);} // 8010A748
  c->r[3]=0u+0x00000000u; // 8010A74C
  return; // 8010A750
}

// fn_8010A754
void f_8010A754(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 8010A754
  c->r[6]=R32(c->r[3]+0x00000004u); // 8010A758
  c->lr=c->r[5]; // 8010A75C
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[6]&0xFFFFFFFFu); // 8010A760
  c->r[1]=R32(c->r[3]+0x00000008u); // 8010A764
  c->r[2]=R32(c->r[3]+0x0000000Cu); // 8010A768
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010A76C
  {uint32_t ea=c->r[3]+0x00000060u; c->f[14]=RF64(ea);} // 8010A770
  c->r[7]=c->r[3]+0x00000068u; // 8010A774
  {uint32_t ea=0u+c->r[7]; psq_load(c,14,ea,0,0);} // 8010A778
  {uint32_t ea=c->r[3]+0x00000070u; c->f[15]=RF64(ea);} // 8010A77C
  c->r[7]=c->r[3]+0x00000078u; // 8010A780
  {uint32_t ea=0u+c->r[7]; psq_load(c,15,ea,0,0);} // 8010A784
  {uint32_t ea=c->r[3]+0x00000080u; c->f[16]=RF64(ea);} // 8010A788
  c->r[7]=c->r[3]+0x00000088u; // 8010A78C
  {uint32_t ea=0u+c->r[7]; psq_load(c,16,ea,0,0);} // 8010A790
  {uint32_t ea=c->r[3]+0x00000090u; c->f[17]=RF64(ea);} // 8010A794
  c->r[7]=c->r[3]+0x00000098u; // 8010A798
  {uint32_t ea=0u+c->r[7]; psq_load(c,17,ea,0,0);} // 8010A79C
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[18]=RF64(ea);} // 8010A7A0
  c->r[7]=c->r[3]+0x000000A8u; // 8010A7A4
  {uint32_t ea=0u+c->r[7]; psq_load(c,18,ea,0,0);} // 8010A7A8
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[19]=RF64(ea);} // 8010A7AC
  c->r[7]=c->r[3]+0x000000B8u; // 8010A7B0
  {uint32_t ea=0u+c->r[7]; psq_load(c,19,ea,0,0);} // 8010A7B4
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[20]=RF64(ea);} // 8010A7B8
  c->r[7]=c->r[3]+0x000000C8u; // 8010A7BC
  {uint32_t ea=0u+c->r[7]; psq_load(c,20,ea,0,0);} // 8010A7C0
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[21]=RF64(ea);} // 8010A7C4
  c->r[7]=c->r[3]+0x000000D8u; // 8010A7C8
  {uint32_t ea=0u+c->r[7]; psq_load(c,21,ea,0,0);} // 8010A7CC
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[22]=RF64(ea);} // 8010A7D0
  c->r[7]=c->r[3]+0x000000E8u; // 8010A7D4
  {uint32_t ea=0u+c->r[7]; psq_load(c,22,ea,0,0);} // 8010A7D8
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[23]=RF64(ea);} // 8010A7DC
  c->r[7]=c->r[3]+0x000000F8u; // 8010A7E0
  {uint32_t ea=0u+c->r[7]; psq_load(c,23,ea,0,0);} // 8010A7E4
  {uint32_t ea=c->r[3]+0x00000100u; c->f[24]=RF64(ea);} // 8010A7E8
  c->r[7]=c->r[3]+0x00000108u; // 8010A7EC
  {uint32_t ea=0u+c->r[7]; psq_load(c,24,ea,0,0);} // 8010A7F0
  {uint32_t ea=c->r[3]+0x00000110u; c->f[25]=RF64(ea);} // 8010A7F4
  c->r[7]=c->r[3]+0x00000118u; // 8010A7F8
  {uint32_t ea=0u+c->r[7]; psq_load(c,25,ea,0,0);} // 8010A7FC
  {uint32_t ea=c->r[3]+0x00000120u; c->f[26]=RF64(ea);} // 8010A800
  c->r[7]=c->r[3]+0x00000128u; // 8010A804
  {uint32_t ea=0u+c->r[7]; psq_load(c,26,ea,0,0);} // 8010A808
  {uint32_t ea=c->r[3]+0x00000130u; c->f[27]=RF64(ea);} // 8010A80C
  c->r[7]=c->r[3]+0x00000138u; // 8010A810
  {uint32_t ea=0u+c->r[7]; psq_load(c,27,ea,0,0);} // 8010A814
  {uint32_t ea=c->r[3]+0x00000140u; c->f[28]=RF64(ea);} // 8010A818
  c->r[7]=c->r[3]+0x00000148u; // 8010A81C
  {uint32_t ea=0u+c->r[7]; psq_load(c,28,ea,0,0);} // 8010A820
  {uint32_t ea=c->r[3]+0x00000150u; c->f[29]=RF64(ea);} // 8010A824
  c->r[7]=c->r[3]+0x00000158u; // 8010A828
  {uint32_t ea=0u+c->r[7]; psq_load(c,29,ea,0,0);} // 8010A82C
  {uint32_t ea=c->r[3]+0x00000160u; c->f[30]=RF64(ea);} // 8010A830
  c->r[7]=c->r[3]+0x00000168u; // 8010A834
  {uint32_t ea=0u+c->r[7]; psq_load(c,30,ea,0,0);} // 8010A838
  {uint32_t ea=c->r[3]+0x00000170u; c->f[31]=RF64(ea);} // 8010A83C
  c->r[7]=c->r[3]+0x00000178u; // 8010A840
  {uint32_t ea=0u+c->r[7]; psq_load(c,31,ea,0,0);} // 8010A844
  {uint32_t ea=c->r[3]+0x00000180u; c->f[0]=RF64(ea);} // 8010A848
  cmps(c,0,(int32_t)c->r[4],0); // 8010A84C
  c->r[3]=c->r[4]|c->r[4]; // 8010A850
  c->fpscr=(uint32_t)d2u(c->f[0]); // 8010A854
  if (!crb(c,2)) return; // 8010A858
  c->r[3]=0u+0x00000001u; // 8010A85C
  return; // 8010A860
}

// __register_fragment
void f_8010A864(Ctx* __restrict c) {
  trace_call(0x8010A864u);
  c->r[5]=0u+0x802F0000u; // 8010A864
  c->r[5]=c->r[5]+0x00004F88u; // 8010A868
  c->r[0]=R32(c->r[5]+0x00000008u); // 8010A86C
  cmps(c,0,(int32_t)c->r[0],0); // 8010A870
  if (!crb(c,2)) { goto L_8010A890; } // 8010A874
  W32(c->r[5]+0x00000000u,c->r[3]); // 8010A878
  c->r[0]=0u+0x00000001u; // 8010A87C
  c->r[3]=0u+0x00000000u; // 8010A880
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010A884
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010A888
  return; // 8010A88C
L_8010A890:;
  c->r[3]=0u+0xFFFFFFFFu; // 8010A890
  return; // 8010A894
}

// __unregister_fragment
void f_8010A898(Ctx* __restrict c) {
  trace_call(0x8010A898u);
  cmps(c,0,(int32_t)c->r[3],0); // 8010A898
  if (crb(c,0)) return; // 8010A89C
  cmps(c,0,(int32_t)c->r[3],1); // 8010A8A0
  if (!crb(c,0)) return; // 8010A8A4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8010A8A8
  c->r[3]=0u+0x802F0000u; // 8010A8AC
  c->r[0]=0u+0x00000000u; // 8010A8B0
  c->r[3]=c->r[3]+0x00004F88u; // 8010A8B4
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 8010A8B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8010A8BC
  W32(c->r[3]+0x00000008u,c->r[0]); // 8010A8C0
  return; // 8010A8C4
}

// fn_8010A8C8
void f_8010A8C8(Ctx* __restrict c) {
  c->r[6]=0u+0x802F0000u; // 8010A8C8
  c->r[6]=c->r[6]+0x00004F88u; // 8010A8CC
  c->r[0]=R32(c->r[6]+0x00000008u); // 8010A8D0
  cmps(c,0,(int32_t)c->r[0],0); // 8010A8D4
  if (crb(c,2)) { goto L_8010A948; } // 8010A8D8
  c->r[7]=R32(c->r[6]+0x00000000u); // 8010A8DC
L_8010A8E0:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 8010A8E0
  cmps(c,0,(int32_t)c->r[0],0); // 8010A8E4
  if (crb(c,2)) { goto L_8010A948; } // 8010A8E8
  c->r[5]=R32(c->r[7]+0x00000008u); // 8010A8EC
  cmpu(c,0,c->r[3],c->r[5]); // 8010A8F0
  if (crb(c,0)) { goto L_8010A940; } // 8010A8F4
  c->r[0]=c->r[5]+c->r[0]; // 8010A8F8
  cmpu(c,0,c->r[3],c->r[0]); // 8010A8FC
  if (!crb(c,0)) { goto L_8010A940; } // 8010A900
  c->r[5]=R32(c->r[7]+0x00000000u); // 8010A904
  c->r[0]=0u+0x00000000u; // 8010A908
  c->r[3]=0u+0x00000001u; // 8010A90C
  W32(c->r[4]+0x00000000u,c->r[5]); // 8010A910
  c->r[5]=R32(c->r[7]+0x00000004u); // 8010A914
  W32(c->r[4]+0x00000004u,c->r[5]); // 8010A918
  W32(c->r[4]+0x00000008u,c->r[0]); // 8010A91C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8010A920
  W32(c->r[4]+0x00000010u,c->r[0]); // 8010A924
  W32(c->r[4]+0x00000014u,c->r[0]); // 8010A928
  c->r[0]=R32(c->r[6]+0x00000004u); // 8010A92C
  W32(c->r[4]+0x00000018u,c->r[0]); // 8010A930
  c->r[0]=R32(c->r[6]+0x00000008u); // 8010A934
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010A938
  return; // 8010A93C
L_8010A940:;
  c->r[7]=c->r[7]+0x00000010u; // 8010A940
  IRQCHK(c); goto L_8010A8E0; // 8010A944
L_8010A948:;
  c->r[3]=0u+0x00000000u; // 8010A948
  return; // 8010A94C
}


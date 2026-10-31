#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801FF644
void f_801FF644(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF644
  c->r[12]=c->r[1]|c->r[1]; // 801FF648
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FF64C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF650
  c->r[0]=c->lr; // 801FF654
  cmps(c,0,(int32_t)c->r[3],0); // 801FF658
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF65C
  c->r[7]=c->r[1]+0x000000F0u; // 801FF660
  c->r[8]=c->r[1]+0x00000020u; // 801FF664
  if (crb(c,0)) { goto L_801FF680; } // 801FF668
  c->r[0]=0u+0x00000000u; // 801FF66C
  cmpu(c,0,c->r[4],c->r[0]); // 801FF670
  if (crb(c,2)) { goto L_801FF680; } // 801FF674
  cmps(c,0,(int32_t)c->r[5],0); // 801FF678
  if (!crb(c,2)) { goto L_801FF688; } // 801FF67C
L_801FF680:;
  c->r[3]=0u+0xFFFFFC07u; // 801FF680
  goto L_801FF6D8; // 801FF684
L_801FF688:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FF688
  if (crb(c,2)) { goto L_801FF698; } // 801FF68C
  c->r[3]=0u+0xFFFFFC07u; // 801FF690
  goto L_801FF6D8; // 801FF694
L_801FF698:;
  c->r[6]=R32(c->r[13]+0xFFFF9128u); // 801FF698
  cmps(c,0,(int32_t)c->r[6],0); // 801FF69C
  if (!crb(c,0)) { goto L_801FF6AC; } // 801FF6A0
  c->r[3]=0u+0xFFFFFC07u; // 801FF6A4
  goto L_801FF6D8; // 801FF6A8
L_801FF6AC:;
  c->r[0]=0u+0x00000004u; // 801FF6AC
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FF6B0
  c->r[3]=c->r[6]|c->r[6]; // 801FF6B4
  c->r[6]=0u+0x00000000u; // 801FF6B8
  W32(c->r[1]+0x000000F8u,c->r[4]); // 801FF6BC
  c->r[4]=0u+0x00000004u; // 801FF6C0
  W32(c->r[1]+0x000000FCu,c->r[5]); // 801FF6C4
  c->r[5]=0u+0x00000002u; // 801FF6C8
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801FF6CC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FF6D0
  c->lr=0x801FF6D8u; f_8012B280(c); // 801FF6D4
L_801FF6D8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FF6D8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FF6DC
  c->lr=c->r[0]; // 801FF6E0
  c->r[1]=c->r[10]|c->r[10]; // 801FF6E4
  return; // 801FF6E8
}

// fn_801FF6EC
void f_801FF6EC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF6EC
  c->r[12]=c->r[1]|c->r[1]; // 801FF6F0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FF6F4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF6F8
  c->r[0]=c->lr; // 801FF6FC
  cmps(c,0,(int32_t)c->r[3],0); // 801FF700
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF704
  c->r[7]=c->r[1]+0x000000F0u; // 801FF708
  c->r[5]=c->r[1]+0x00000020u; // 801FF70C
  if (crb(c,0)) { goto L_801FF720; } // 801FF710
  c->r[4]=R32(c->r[13]+0xFFFF9128u); // 801FF714
  cmps(c,0,(int32_t)c->r[4],0); // 801FF718
  if (!crb(c,0)) { goto L_801FF728; } // 801FF71C
L_801FF720:;
  c->r[3]=0u+0xFFFFFC07u; // 801FF720
  goto L_801FF74C; // 801FF724
L_801FF728:;
  c->r[0]=0u+0x00000004u; // 801FF728
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FF72C
  c->r[3]=c->r[4]|c->r[4]; // 801FF730
  c->r[4]=0u+0x00000005u; // 801FF734
  W32(c->r[1]+0x000000F0u,c->r[5]); // 801FF738
  c->r[5]=0u+0x00000001u; // 801FF73C
  c->r[6]=0u+0x00000000u; // 801FF740
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FF744
  c->lr=0x801FF74Cu; f_8012B280(c); // 801FF748
L_801FF74C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FF74C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FF750
  c->lr=c->r[0]; // 801FF754
  c->r[1]=c->r[10]|c->r[10]; // 801FF758
  return; // 801FF75C
}

// fn_801FF760
void f_801FF760(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF760
  c->r[12]=c->r[1]|c->r[1]; // 801FF764
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FF768
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF76C
  c->r[0]=c->lr; // 801FF770
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF774
  c->r[7]=c->r[1]+0x000000F0u; // 801FF778
  c->r[3]=R32(c->r[13]+0xFFFF9128u); // 801FF77C
  cmps(c,0,(int32_t)c->r[3],0); // 801FF780
  if (!crb(c,0)) { goto L_801FF790; } // 801FF784
  c->r[3]=0u+0xFFFFFC07u; // 801FF788
  goto L_801FF7A0; // 801FF78C
L_801FF790:;
  c->r[4]=0u+0x00000006u; // 801FF790
  c->r[5]=0u+0x00000000u; // 801FF794
  c->r[6]=0u+0x00000000u; // 801FF798
  c->lr=0x801FF7A0u; f_8012B280(c); // 801FF79C
L_801FF7A0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FF7A0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FF7A4
  c->lr=c->r[0]; // 801FF7A8
  c->r[1]=c->r[10]|c->r[10]; // 801FF7AC
  return; // 801FF7B0
}

// fn_801FF7B4
void f_801FF7B4(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF7B4
  c->r[12]=c->r[1]|c->r[1]; // 801FF7B8
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FF7BC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF7C0
  c->r[0]=c->lr; // 801FF7C4
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF7C8
  c->r[7]=c->r[1]+0x000000F0u; // 801FF7CC
  c->r[3]=R32(c->r[13]+0xFFFF9128u); // 801FF7D0
  cmps(c,0,(int32_t)c->r[3],0); // 801FF7D4
  if (!crb(c,0)) { goto L_801FF7E4; } // 801FF7D8
  c->r[3]=0u+0xFFFFFC07u; // 801FF7DC
  goto L_801FF7F4; // 801FF7E0
L_801FF7E4:;
  c->r[4]=0u+0x0000002Fu; // 801FF7E4
  c->r[5]=0u+0x00000000u; // 801FF7E8
  c->r[6]=0u+0x00000000u; // 801FF7EC
  c->lr=0x801FF7F4u; f_8012B280(c); // 801FF7F0
L_801FF7F4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FF7F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FF7F8
  c->lr=c->r[0]; // 801FF7FC
  c->r[1]=c->r[10]|c->r[10]; // 801FF800
  return; // 801FF804
}

// fn_801FF808
void f_801FF808(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF808
  c->r[12]=c->r[1]|c->r[1]; // 801FF80C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FF810
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF814
  c->r[0]=c->lr; // 801FF818
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF81C
  c->r[7]=c->r[1]+0x000000F0u; // 801FF820
  c->r[10]=c->r[1]+0x00000020u; // 801FF824
  c->r[9]=R32(c->r[13]+0xFFFF9128u); // 801FF828
  cmps(c,0,(int32_t)c->r[9],0); // 801FF82C
  if (!crb(c,0)) { goto L_801FF83C; } // 801FF830
  c->r[3]=0u+0xFFFFFC07u; // 801FF834
  goto L_801FF888; // 801FF838
L_801FF83C:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FF83C
  if (crb(c,2)) { goto L_801FF84C; } // 801FF840
  c->r[3]=0u+0xFFFFFC07u; // 801FF844
  goto L_801FF888; // 801FF848
L_801FF84C:;
  c->r[8]=0u+0x00000008u; // 801FF84C
  c->r[0]=0u+0x000000D8u; // 801FF850
  W32(c->r[1]+0x00000024u,c->r[4]); // 801FF854
  c->r[4]=0u+0x00000008u; // 801FF858
  c->r[6]=0u+0x00000000u; // 801FF85C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FF860
  c->r[3]=c->r[9]|c->r[9]; // 801FF864
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801FF868
  c->r[5]=0u+0x00000002u; // 801FF86C
  W32(c->r[1]+0x000000F0u,c->r[10]); // 801FF870
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801FF874
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FF878
  c->lr=0x801FF880u; f_8012B35C(c); // 801FF87C
  c->r[0]=0u+0xFFFFFFFFu; // 801FF880
  W32(c->r[13]+0xFFFF9128u,c->r[0]); // 801FF884
L_801FF888:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FF888
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FF88C
  c->lr=c->r[0]; // 801FF890
  c->r[1]=c->r[10]|c->r[10]; // 801FF894
  return; // 801FF898
}

// fn_801FF89C
void f_801FF89C(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF89C
  c->r[12]=c->r[1]|c->r[1]; // 801FF8A0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FF8A4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF8A8
  c->r[0]=c->lr; // 801FF8AC
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF8B0
  c->r[7]=c->r[1]+0x000000F0u; // 801FF8B4
  c->r[5]=c->r[1]+0x00000020u; // 801FF8B8
  c->r[4]=R32(c->r[13]+0xFFFF9128u); // 801FF8BC
  cmps(c,0,(int32_t)c->r[4],0); // 801FF8C0
  if (!crb(c,0)) { goto L_801FF8D0; } // 801FF8C4
  c->r[3]=0u+0xFFFFFC07u; // 801FF8C8
  goto L_801FF8F4; // 801FF8CC
L_801FF8D0:;
  c->r[0]=0u+0x00000004u; // 801FF8D0
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FF8D4
  c->r[3]=c->r[4]|c->r[4]; // 801FF8D8
  c->r[4]=0u+0x00000009u; // 801FF8DC
  W32(c->r[1]+0x000000F0u,c->r[5]); // 801FF8E0
  c->r[5]=0u+0x00000001u; // 801FF8E4
  c->r[6]=0u+0x00000000u; // 801FF8E8
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FF8EC
  c->lr=0x801FF8F4u; f_8012B280(c); // 801FF8F0
L_801FF8F4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FF8F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FF8F8
  c->lr=c->r[0]; // 801FF8FC
  c->r[1]=c->r[10]|c->r[10]; // 801FF900
  return; // 801FF904
}

// fn_801FF908
void f_801FF908(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF908
  c->r[12]=c->r[1]|c->r[1]; // 801FF90C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FF910
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF914
  c->r[0]=c->lr; // 801FF918
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF91C
  c->r[7]=c->r[1]+0x000000F0u; // 801FF920
  c->r[11]=c->r[1]+0x00000020u; // 801FF924
  c->r[12]=c->r[1]+0x00000040u; // 801FF928
  c->r[10]=R32(c->r[13]+0xFFFF9128u); // 801FF92C
  cmps(c,0,(int32_t)c->r[10],0); // 801FF930
  if (crb(c,0)) { goto L_801FF940; } // 801FF934
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FF938
  if (crb(c,2)) { goto L_801FF948; } // 801FF93C
L_801FF940:;
  c->r[3]=0u+0xFFFFFC07u; // 801FF940
  goto L_801FF98C; // 801FF944
L_801FF948:;
  c->r[9]=0u+0x00000008u; // 801FF948
  c->r[8]=0u+0x000000D8u; // 801FF94C
  c->r[0]=0u+0x00000004u; // 801FF950
  W32(c->r[1]+0x00000024u,c->r[4]); // 801FF954
  c->r[4]=0u+0x00000024u; // 801FF958
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FF95C
  c->r[3]=c->r[10]|c->r[10]; // 801FF960
  W32(c->r[1]+0x00000040u,c->r[6]); // 801FF964
  c->r[6]=0u+0x00000000u; // 801FF968
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801FF96C
  c->r[5]=0u+0x00000003u; // 801FF970
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801FF974
  W32(c->r[1]+0x000000F4u,c->r[9]); // 801FF978
  W32(c->r[1]+0x000000FCu,c->r[8]); // 801FF97C
  W32(c->r[1]+0x00000100u,c->r[12]); // 801FF980
  W32(c->r[1]+0x00000104u,c->r[0]); // 801FF984
  c->lr=0x801FF98Cu; f_8012B280(c); // 801FF988
L_801FF98C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FF98C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FF990
  c->lr=c->r[0]; // 801FF994
  c->r[1]=c->r[10]|c->r[10]; // 801FF998
  return; // 801FF99C
}

// fn_801FF9A0
void f_801FF9A0(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FF9A0
  c->r[12]=c->r[1]|c->r[1]; // 801FF9A4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FF9A8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF9AC
  c->r[0]=c->lr; // 801FF9B0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FF9B4
  c->r[7]=c->r[1]+0x000000F0u; // 801FF9B8
  c->r[8]=c->r[1]+0x00000020u; // 801FF9BC
  c->r[6]=R32(c->r[13]+0xFFFF9128u); // 801FF9C0
  cmps(c,0,(int32_t)c->r[6],0); // 801FF9C4
  if (crb(c,0)) { goto L_801FF9E8; } // 801FF9C8
  cmps(c,0,(int32_t)c->r[3],0); // 801FF9CC
  if (crb(c,0)) { goto L_801FF9E8; } // 801FF9D0
  c->r[0]=0u+0x00000000u; // 801FF9D4
  cmpu(c,0,c->r[4],c->r[0]); // 801FF9D8
  if (crb(c,2)) { goto L_801FF9E8; } // 801FF9DC
  cmps(c,0,(int32_t)c->r[5],0); // 801FF9E0
  if (!crb(c,2)) { goto L_801FF9F0; } // 801FF9E4
L_801FF9E8:;
  c->r[3]=0u+0xFFFFFC07u; // 801FF9E8
  goto L_801FFA2C; // 801FF9EC
L_801FF9F0:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FF9F0
  if (crb(c,2)) { goto L_801FFA00; } // 801FF9F4
  c->r[3]=0u+0xFFFFFC07u; // 801FF9F8
  goto L_801FFA2C; // 801FF9FC
L_801FFA00:;
  c->r[0]=0u+0x00000004u; // 801FFA00
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FFA04
  c->r[3]=c->r[6]|c->r[6]; // 801FFA08
  c->r[6]=0u+0x00000001u; // 801FFA0C
  W32(c->r[1]+0x000000F8u,c->r[4]); // 801FFA10
  c->r[4]=0u+0x0000000Au; // 801FFA14
  W32(c->r[1]+0x000000FCu,c->r[5]); // 801FFA18
  c->r[5]=0u+0x00000001u; // 801FFA1C
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801FFA20
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FFA24
  c->lr=0x801FFA2Cu; f_8012B280(c); // 801FFA28
L_801FFA2C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFA2C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFA30
  c->lr=c->r[0]; // 801FFA34
  c->r[1]=c->r[10]|c->r[10]; // 801FFA38
  return; // 801FFA3C
}

// fn_801FFA40
void f_801FFA40(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FFA40
  c->r[12]=c->r[1]|c->r[1]; // 801FFA44
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FFA48
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFA4C
  c->r[0]=c->lr; // 801FFA50
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FFA54
  c->r[7]=c->r[1]+0x000000F0u; // 801FFA58
  c->r[8]=c->r[1]+0x00000020u; // 801FFA5C
  c->r[9]=c->r[1]+0x00000040u; // 801FFA60
  c->r[6]=R32(c->r[13]+0xFFFF9128u); // 801FFA64
  c->r[10]=c->r[1]+0x00000060u; // 801FFA68
  cmps(c,0,(int32_t)c->r[6],0); // 801FFA6C
  if (!crb(c,0)) { goto L_801FFA7C; } // 801FFA70
  c->r[3]=0u+0xFFFFFC07u; // 801FFA74
  goto L_801FFAB8; // 801FFA78
L_801FFA7C:;
  c->r[0]=0u+0x00000004u; // 801FFA7C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FFA80
  c->r[3]=c->r[6]|c->r[6]; // 801FFA84
  c->r[6]=0u+0x00000000u; // 801FFA88
  W32(c->r[1]+0x00000040u,c->r[4]); // 801FFA8C
  c->r[4]=0u+0x00000023u; // 801FFA90
  W32(c->r[1]+0x00000060u,c->r[5]); // 801FFA94
  c->r[5]=0u+0x00000003u; // 801FFA98
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801FFA9C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FFAA0
  W32(c->r[1]+0x000000F8u,c->r[9]); // 801FFAA4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FFAA8
  W32(c->r[1]+0x00000100u,c->r[10]); // 801FFAAC
  W32(c->r[1]+0x00000104u,c->r[0]); // 801FFAB0
  c->lr=0x801FFAB8u; f_8012B280(c); // 801FFAB4
L_801FFAB8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFAB8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFABC
  c->lr=c->r[0]; // 801FFAC0
  c->r[1]=c->r[10]|c->r[10]; // 801FFAC4
  return; // 801FFAC8
}

// fn_801FFACC
void f_801FFACC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FFACC
  c->r[12]=c->r[1]|c->r[1]; // 801FFAD0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801FFAD4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFAD8
  c->r[0]=c->lr; // 801FFADC
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FFAE0
  c->r[7]=c->r[1]+0x000000F0u; // 801FFAE4
  c->r[5]=c->r[1]+0x00000020u; // 801FFAE8
  c->r[4]=R32(c->r[13]+0xFFFF9128u); // 801FFAEC
  cmps(c,0,(int32_t)c->r[4],0); // 801FFAF0
  if (crb(c,0)) { goto L_801FFB00; } // 801FFAF4
  cmps(c,0,(int32_t)c->r[3],0); // 801FFAF8
  if (!crb(c,0)) { goto L_801FFB08; } // 801FFAFC
L_801FFB00:;
  c->r[3]=0u+0xFFFFFC07u; // 801FFB00
  goto L_801FFB2C; // 801FFB04
L_801FFB08:;
  c->r[0]=0u+0x00000004u; // 801FFB08
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FFB0C
  c->r[3]=c->r[4]|c->r[4]; // 801FFB10
  c->r[4]=0u+0x0000000Bu; // 801FFB14
  W32(c->r[1]+0x000000F0u,c->r[5]); // 801FFB18
  c->r[5]=0u+0x00000001u; // 801FFB1C
  c->r[6]=0u+0x00000000u; // 801FFB20
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FFB24
  c->lr=0x801FFB2Cu; f_8012B280(c); // 801FFB28
L_801FFB2C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFB2C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFB30
  c->lr=c->r[0]; // 801FFB34
  c->r[1]=c->r[10]|c->r[10]; // 801FFB38
  return; // 801FFB3C
}

// fn_801FFB40
void f_801FFB40(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FFB40
  c->r[12]=c->r[1]|c->r[1]; // 801FFB44
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801FFB48
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFB4C
  c->r[0]=c->lr; // 801FFB50
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FFB54
  c->r[7]=c->r[1]+0x000000F0u; // 801FFB58
  c->r[8]=c->r[1]+0x00000020u; // 801FFB5C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801FFB60
  c->r[31]=c->r[4]|c->r[4]; // 801FFB64
  c->r[6]=R32(c->r[13]+0xFFFF9128u); // 801FFB68
  cmps(c,0,(int32_t)c->r[6],0); // 801FFB6C
  if (crb(c,0)) { goto L_801FFB80; } // 801FFB70
  c->r[5]=0u+0x00000000u; // 801FFB74
  cmpu(c,0,c->r[4],c->r[5]); // 801FFB78
  if (!crb(c,2)) { goto L_801FFB88; } // 801FFB7C
L_801FFB80:;
  c->r[3]=0u+0xFFFFFC07u; // 801FFB80
  goto L_801FFC1C; // 801FFB84
L_801FFB88:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FFB88
  if (crb(c,2)) { goto L_801FFB98; } // 801FFB8C
  c->r[3]=0u+0xFFFFFC07u; // 801FFB90
  goto L_801FFC1C; // 801FFB94
L_801FFB98:;
  cmpu(c,0,c->r[3],c->r[5]); // 801FFB98
  if (!crb(c,2)) { goto L_801FFBD4; } // 801FFB9C
  c->r[0]=0u+0x00000004u; // 801FFBA0
  c->r[3]=c->r[6]|c->r[6]; // 801FFBA4
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801FFBA8
  c->r[4]=0u+0x0000000Cu; // 801FFBAC
  c->r[5]=0u+0x00000000u; // 801FFBB0
  c->r[6]=0u+0x00000001u; // 801FFBB4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FFBB8
  c->lr=0x801FFBC0u; f_8012B280(c); // 801FFBBC
  cmps(c,0,(int32_t)c->r[3],0); // 801FFBC0
  if (!crb(c,2)) { goto L_801FFC1C; } // 801FFBC4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801FFBC8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801FFBCC
  goto L_801FFC1C; // 801FFBD0
L_801FFBD4:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801FFBD4
  cmps(c,0,(int32_t)c->r[5],0); // 801FFBD8
  if (!crb(c,2)) { goto L_801FFBE8; } // 801FFBDC
  c->r[3]=0u+0xFFFFFC07u; // 801FFBE0
  goto L_801FFC1C; // 801FFBE4
L_801FFBE8:;
  c->r[0]=0u+0x00000004u; // 801FFBE8
  W32(c->r[1]+0x000000F8u,c->r[3]); // 801FFBEC
  c->r[3]=c->r[6]|c->r[6]; // 801FFBF0
  c->r[6]=0u+0x00000001u; // 801FFBF4
  W32(c->r[1]+0x00000020u,c->r[5]); // 801FFBF8
  c->r[5]=0u+0x00000001u; // 801FFBFC
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801FFC00
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FFC04
  c->r[0]=R32(c->r[4]+0x00000000u); // 801FFC08
  c->r[4]=0u+0x0000000Du; // 801FFC0C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801FFC10
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FFC14
  c->lr=0x801FFC1Cu; f_8012B280(c); // 801FFC18
L_801FFC1C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFC1C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFC20
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801FFC24
  c->lr=c->r[0]; // 801FFC28
  c->r[1]=c->r[10]|c->r[10]; // 801FFC2C
  return; // 801FFC30
}

// fn_801FFC34
void f_801FFC34(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FFC34
  c->r[12]=c->r[1]|c->r[1]; // 801FFC38
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801FFC3C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFC40
  c->r[0]=c->lr; // 801FFC44
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FFC48
  c->r[7]=c->r[1]+0x000000F0u; // 801FFC4C
  c->r[8]=c->r[1]+0x00000020u; // 801FFC50
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801FFC54
  c->r[31]=c->r[4]|c->r[4]; // 801FFC58
  c->r[6]=R32(c->r[13]+0xFFFF9128u); // 801FFC5C
  cmps(c,0,(int32_t)c->r[6],0); // 801FFC60
  if (crb(c,0)) { goto L_801FFC74; } // 801FFC64
  c->r[5]=0u+0x00000000u; // 801FFC68
  cmpu(c,0,c->r[4],c->r[5]); // 801FFC6C
  if (!crb(c,2)) { goto L_801FFC7C; } // 801FFC70
L_801FFC74:;
  c->r[3]=0u+0xFFFFFC07u; // 801FFC74
  goto L_801FFD10; // 801FFC78
L_801FFC7C:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FFC7C
  if (crb(c,2)) { goto L_801FFC8C; } // 801FFC80
  c->r[3]=0u+0xFFFFFC07u; // 801FFC84
  goto L_801FFD10; // 801FFC88
L_801FFC8C:;
  cmpu(c,0,c->r[3],c->r[5]); // 801FFC8C
  if (!crb(c,2)) { goto L_801FFCC8; } // 801FFC90
  c->r[0]=0u+0x00000004u; // 801FFC94
  c->r[3]=c->r[6]|c->r[6]; // 801FFC98
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801FFC9C
  c->r[4]=0u+0x0000000Eu; // 801FFCA0
  c->r[5]=0u+0x00000000u; // 801FFCA4
  c->r[6]=0u+0x00000001u; // 801FFCA8
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FFCAC
  c->lr=0x801FFCB4u; f_8012B280(c); // 801FFCB0
  cmps(c,0,(int32_t)c->r[3],0); // 801FFCB4
  if (!crb(c,2)) { goto L_801FFD10; } // 801FFCB8
  c->r[0]=R32(c->r[1]+0x00000020u); // 801FFCBC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801FFCC0
  goto L_801FFD10; // 801FFCC4
L_801FFCC8:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801FFCC8
  cmps(c,0,(int32_t)c->r[5],0); // 801FFCCC
  if (!crb(c,2)) { goto L_801FFCDC; } // 801FFCD0
  c->r[3]=0u+0xFFFFFC07u; // 801FFCD4
  goto L_801FFD10; // 801FFCD8
L_801FFCDC:;
  c->r[0]=0u+0x00000004u; // 801FFCDC
  W32(c->r[1]+0x000000F8u,c->r[3]); // 801FFCE0
  c->r[3]=c->r[6]|c->r[6]; // 801FFCE4
  c->r[6]=0u+0x00000001u; // 801FFCE8
  W32(c->r[1]+0x00000020u,c->r[5]); // 801FFCEC
  c->r[5]=0u+0x00000001u; // 801FFCF0
  W32(c->r[1]+0x000000F0u,c->r[8]); // 801FFCF4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801FFCF8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801FFCFC
  c->r[4]=0u+0x0000000Fu; // 801FFD00
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801FFD04
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FFD08
  c->lr=0x801FFD10u; f_8012B280(c); // 801FFD0C
L_801FFD10:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFD10
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFD14
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801FFD18
  c->lr=c->r[0]; // 801FFD1C
  c->r[1]=c->r[10]|c->r[10]; // 801FFD20
  return; // 801FFD24
}

// fn_801FFD28
void f_801FFD28(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FFD28
  c->r[12]=c->r[1]|c->r[1]; // 801FFD2C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801FFD30
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFD34
  c->r[0]=c->lr; // 801FFD38
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FFD3C
  c->r[7]=c->r[1]+0x000000F0u; // 801FFD40
  c->r[11]=c->r[1]+0x00000020u; // 801FFD44
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801FFD48
  c->r[31]=c->r[6]|c->r[6]; // 801FFD4C
  c->r[12]=c->r[1]+0x00000040u; // 801FFD50
  c->r[10]=R32(c->r[13]+0xFFFF9128u); // 801FFD54
  cmps(c,0,(int32_t)c->r[10],0); // 801FFD58
  if (crb(c,0)) { goto L_801FFD6C; } // 801FFD5C
  c->r[8]=0u+0x00000000u; // 801FFD60
  cmpu(c,0,c->r[6],c->r[8]); // 801FFD64
  if (!crb(c,2)) { goto L_801FFD74; } // 801FFD68
L_801FFD6C:;
  c->r[3]=0u+0xFFFFFC07u; // 801FFD6C
  goto L_801FFE28; // 801FFD70
L_801FFD74:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FFD74
  if (crb(c,2)) { goto L_801FFD84; } // 801FFD78
  c->r[3]=0u+0xFFFFFC07u; // 801FFD7C
  goto L_801FFE28; // 801FFD80
L_801FFD84:;
  cmpu(c,0,c->r[5],c->r[8]); // 801FFD84
  W32(c->r[1]+0x00000024u,c->r[4]); // 801FFD88
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FFD8C
  if (!crb(c,2)) { goto L_801FFDD4; } // 801FFD90
  c->r[5]=0u+0x00000008u; // 801FFD94
  c->r[0]=0u+0x00000004u; // 801FFD98
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801FFD9C
  c->r[3]=c->r[10]|c->r[10]; // 801FFDA0
  c->r[4]=0u+0x00000010u; // 801FFDA4
  c->r[5]=0u+0x00000001u; // 801FFDA8
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801FFDAC
  c->r[6]=0u+0x00000001u; // 801FFDB0
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801FFDB4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FFDB8
  c->lr=0x801FFDC0u; f_8012B280(c); // 801FFDBC
  cmps(c,0,(int32_t)c->r[3],0); // 801FFDC0
  if (!crb(c,2)) { goto L_801FFE28; } // 801FFDC4
  c->r[0]=R32(c->r[1]+0x00000040u); // 801FFDC8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801FFDCC
  goto L_801FFE28; // 801FFDD0
L_801FFDD4:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 801FFDD4
  cmps(c,0,(int32_t)c->r[9],0); // 801FFDD8
  if (!crb(c,2)) { goto L_801FFDE8; } // 801FFDDC
  c->r[3]=0u+0xFFFFFC07u; // 801FFDE0
  goto L_801FFE28; // 801FFDE4
L_801FFDE8:;
  c->r[8]=0u+0x00000008u; // 801FFDE8
  c->r[0]=0u+0x00000004u; // 801FFDEC
  W32(c->r[1]+0x00000100u,c->r[5]); // 801FFDF0
  c->r[3]=c->r[10]|c->r[10]; // 801FFDF4
  c->r[4]=0u+0x00000011u; // 801FFDF8
  c->r[5]=0u+0x00000002u; // 801FFDFC
  W32(c->r[1]+0x00000040u,c->r[9]); // 801FFE00
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801FFE04
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801FFE08
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801FFE0C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FFE10
  c->r[0]=R32(c->r[6]+0x00000000u); // 801FFE14
  c->r[6]=0u+0x00000001u; // 801FFE18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801FFE1C
  W32(c->r[1]+0x00000104u,c->r[0]); // 801FFE20
  c->lr=0x801FFE28u; f_8012B280(c); // 801FFE24
L_801FFE28:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFE28
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFE2C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801FFE30
  c->lr=c->r[0]; // 801FFE34
  c->r[1]=c->r[10]|c->r[10]; // 801FFE38
  return; // 801FFE3C
}

// fn_801FFE40
void f_801FFE40(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FFE40
  c->r[12]=c->r[1]|c->r[1]; // 801FFE44
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801FFE48
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFE4C
  c->r[0]=c->lr; // 801FFE50
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FFE54
  c->r[7]=c->r[1]+0x000000F0u; // 801FFE58
  c->r[10]=c->r[1]+0x00000020u; // 801FFE5C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801FFE60
  c->r[31]=c->r[6]|c->r[6]; // 801FFE64
  c->r[9]=R32(c->r[13]+0xFFFF9128u); // 801FFE68
  cmps(c,0,(int32_t)c->r[9],0); // 801FFE6C
  if (crb(c,0)) { goto L_801FFE98; } // 801FFE70
  c->r[8]=0u+0x00000000u; // 801FFE74
  cmpu(c,0,c->r[3],c->r[8]); // 801FFE78
  if (crb(c,2)) { goto L_801FFE98; } // 801FFE7C
  cmps(c,0,(int32_t)c->r[4],0); // 801FFE80
  if (crb(c,2)) { goto L_801FFE98; } // 801FFE84
  cmpu(c,0,c->r[4],0x000049E4u); // 801FFE88
  if (crb(c,1)) { goto L_801FFE98; } // 801FFE8C
  cmpu(c,0,c->r[6],c->r[8]); // 801FFE90
  if (!crb(c,2)) { goto L_801FFEA0; } // 801FFE94
L_801FFE98:;
  c->r[3]=0u+0xFFFFFC07u; // 801FFE98
  goto L_801FFF4C; // 801FFE9C
L_801FFEA0:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FFEA0
  if (!crb(c,2)) { goto L_801FFEB0; } // 801FFEA4
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FFEA8
  if (crb(c,2)) { goto L_801FFEB8; } // 801FFEAC
L_801FFEB0:;
  c->r[3]=0u+0xFFFFFC07u; // 801FFEB0
  goto L_801FFF4C; // 801FFEB4
L_801FFEB8:;
  cmpu(c,0,c->r[5],c->r[8]); // 801FFEB8
  if (!crb(c,2)) { goto L_801FFEFC; } // 801FFEBC
  c->r[0]=0u+0x00000004u; // 801FFEC0
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801FFEC4
  c->r[3]=c->r[9]|c->r[9]; // 801FFEC8
  c->r[5]=0u+0x00000001u; // 801FFECC
  W32(c->r[1]+0x000000F4u,c->r[4]); // 801FFED0
  c->r[4]=0u+0x00000032u; // 801FFED4
  c->r[6]=0u+0x00000001u; // 801FFED8
  W32(c->r[1]+0x000000F8u,c->r[10]); // 801FFEDC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FFEE0
  c->lr=0x801FFEE8u; f_8012B280(c); // 801FFEE4
  cmps(c,0,(int32_t)c->r[3],0); // 801FFEE8
  if (!crb(c,2)) { goto L_801FFF4C; } // 801FFEEC
  c->r[0]=R32(c->r[1]+0x00000020u); // 801FFEF0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801FFEF4
  goto L_801FFF4C; // 801FFEF8
L_801FFEFC:;
  c->r[8]=R32(c->r[6]+0x00000000u); // 801FFEFC
  cmps(c,0,(int32_t)c->r[8],0); // 801FFF00
  if (!crb(c,2)) { goto L_801FFF10; } // 801FFF04
  c->r[3]=0u+0xFFFFFC07u; // 801FFF08
  goto L_801FFF4C; // 801FFF0C
L_801FFF10:;
  c->r[0]=0u+0x00000004u; // 801FFF10
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801FFF14
  c->r[3]=c->r[9]|c->r[9]; // 801FFF18
  W32(c->r[1]+0x000000F4u,c->r[4]); // 801FFF1C
  c->r[4]=0u+0x00000033u; // 801FFF20
  W32(c->r[1]+0x00000100u,c->r[5]); // 801FFF24
  c->r[5]=0u+0x00000002u; // 801FFF28
  W32(c->r[1]+0x00000020u,c->r[8]); // 801FFF2C
  W32(c->r[1]+0x000000F8u,c->r[10]); // 801FFF30
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FFF34
  c->r[0]=R32(c->r[6]+0x00000000u); // 801FFF38
  c->r[6]=0u+0x00000001u; // 801FFF3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801FFF40
  W32(c->r[1]+0x00000104u,c->r[0]); // 801FFF44
  c->lr=0x801FFF4Cu; f_8012B280(c); // 801FFF48
L_801FFF4C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801FFF4C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801FFF50
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801FFF54
  c->lr=c->r[0]; // 801FFF58
  c->r[1]=c->r[10]|c->r[10]; // 801FFF5C
  return; // 801FFF60
}

// ESP_GetTicketViews
void f_801FFF64(Ctx* __restrict c) {
  trace_call(0x801FFF64u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801FFF64
  c->r[12]=c->r[1]|c->r[1]; // 801FFF68
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801FFF6C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFF70
  c->r[0]=c->lr; // 801FFF74
  W32(c->r[12]+0x00000004u,c->r[0]); // 801FFF78
  c->r[7]=c->r[1]+0x000000F0u; // 801FFF7C
  c->r[11]=c->r[1]+0x00000020u; // 801FFF80
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801FFF84
  c->r[31]=c->r[6]|c->r[6]; // 801FFF88
  c->r[12]=c->r[1]+0x00000040u; // 801FFF8C
  c->r[10]=R32(c->r[13]+0xFFFF9128u); // 801FFF90
  cmps(c,0,(int32_t)c->r[10],0); // 801FFF94
  if (crb(c,0)) { goto L_801FFFA8; } // 801FFF98
  c->r[8]=0u+0x00000000u; // 801FFF9C
  cmpu(c,0,c->r[6],c->r[8]); // 801FFFA0
  if (!crb(c,2)) { goto L_801FFFB0; } // 801FFFA4
L_801FFFA8:;
  c->r[3]=0u+0xFFFFFC07u; // 801FFFA8
  goto L_80200064; // 801FFFAC
L_801FFFB0:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801FFFB0
  if (crb(c,2)) { goto L_801FFFC0; } // 801FFFB4
  c->r[3]=0u+0xFFFFFC07u; // 801FFFB8
  goto L_80200064; // 801FFFBC
L_801FFFC0:;
  cmpu(c,0,c->r[5],c->r[8]); // 801FFFC0
  W32(c->r[1]+0x00000024u,c->r[4]); // 801FFFC4
  W32(c->r[1]+0x00000020u,c->r[3]); // 801FFFC8
  if (!crb(c,2)) { goto L_80200010; } // 801FFFCC
  c->r[5]=0u+0x00000008u; // 801FFFD0
  c->r[0]=0u+0x00000004u; // 801FFFD4
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801FFFD8
  c->r[3]=c->r[10]|c->r[10]; // 801FFFDC
  c->r[4]=0u+0x00000012u; // 801FFFE0
  c->r[5]=0u+0x00000001u; // 801FFFE4
  W32(c->r[1]+0x000000F0u,c->r[11]); // 801FFFE8
  c->r[6]=0u+0x00000001u; // 801FFFEC
  W32(c->r[1]+0x000000F8u,c->r[12]); // 801FFFF0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801FFFF4
  c->lr=0x801FFFFCu; f_8012B280(c); // 801FFFF8
  cmps(c,0,(int32_t)c->r[3],0); // 801FFFFC
  if (!crb(c,2)) { goto L_80200064; } // 80200000
  c->r[0]=R32(c->r[1]+0x00000040u); // 80200004
  W32(c->r[31]+0x00000000u,c->r[0]); // 80200008
  goto L_80200064; // 8020000C
L_80200010:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 80200010
  cmps(c,0,(int32_t)c->r[9],0); // 80200014
  if (!crb(c,2)) { goto L_80200024; } // 80200018
  c->r[3]=0u+0xFFFFFC07u; // 8020001C
  goto L_80200064; // 80200020
L_80200024:;
  c->r[8]=0u+0x00000008u; // 80200024
  c->r[0]=0u+0x00000004u; // 80200028
  W32(c->r[1]+0x00000100u,c->r[5]); // 8020002C
  c->r[3]=c->r[10]|c->r[10]; // 80200030
  c->r[4]=0u+0x00000013u; // 80200034
  c->r[5]=0u+0x00000002u; // 80200038
  W32(c->r[1]+0x00000040u,c->r[9]); // 8020003C
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80200040
  W32(c->r[1]+0x000000F4u,c->r[8]); // 80200044
  W32(c->r[1]+0x000000F8u,c->r[12]); // 80200048
  W32(c->r[1]+0x000000FCu,c->r[0]); // 8020004C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80200050
  c->r[6]=0u+0x00000001u; // 80200054
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 80200058
  W32(c->r[1]+0x00000104u,c->r[0]); // 8020005C
  c->lr=0x80200064u; f_8012B280(c); // 80200060
L_80200064:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80200064
  c->r[0]=R32(c->r[10]+0x00000004u); // 80200068
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8020006C
  c->lr=c->r[0]; // 80200070
  c->r[1]=c->r[10]|c->r[10]; // 80200074
  return; // 80200078
}

// ESP_DiGetTicketView
void f_8020007C(Ctx* __restrict c) {
  trace_call(0x8020007Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8020007C
  c->r[12]=c->r[1]|c->r[1]; // 80200080
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80200084
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80200088
  c->r[0]=c->lr; // 8020008C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80200090
  c->r[7]=c->r[1]+0x000000F0u; // 80200094
  c->r[0]=R32(c->r[13]+0xFFFF9128u); // 80200098
  cmps(c,0,(int32_t)c->r[0],0); // 8020009C
  if (crb(c,0)) { goto L_802000B0; } // 802000A0
  c->r[5]=0u+0x00000000u; // 802000A4
  cmpu(c,0,c->r[4],c->r[5]); // 802000A8
  if (!crb(c,2)) { goto L_802000B8; } // 802000AC
L_802000B0:;
  c->r[3]=0u+0xFFFFFC07u; // 802000B0
  goto L_8020010C; // 802000B4
L_802000B8:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 802000B8
  if (!crb(c,2)) { goto L_802000C8; } // 802000BC
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 802000C0
  if (crb(c,2)) { goto L_802000D0; } // 802000C4
L_802000C8:;
  c->r[3]=0u+0xFFFFFC07u; // 802000C8
  goto L_8020010C; // 802000CC
L_802000D0:;
  cmpu(c,0,c->r[3],c->r[5]); // 802000D0
  W32(c->r[1]+0x000000F0u,c->r[3]); // 802000D4
  if (!crb(c,2)) { goto L_802000E4; } // 802000D8
  W32(c->r[1]+0x000000F4u,c->r[5]); // 802000DC
  goto L_802000EC; // 802000E0
L_802000E4:;
  c->r[0]=0u+0x000002A4u; // 802000E4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 802000E8
L_802000EC:;
  c->r[0]=0u+0x000000D8u; // 802000EC
  W32(c->r[1]+0x000000F8u,c->r[4]); // 802000F0
  c->r[3]=R32(c->r[13]+0xFFFF9128u); // 802000F4
  c->r[4]=0u+0x0000001Bu; // 802000F8
  W32(c->r[1]+0x000000FCu,c->r[0]); // 802000FC
  c->r[5]=0u+0x00000001u; // 80200100
  c->r[6]=0u+0x00000001u; // 80200104
  c->lr=0x8020010Cu; f_8012B280(c); // 80200108
L_8020010C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020010C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80200110
  c->lr=c->r[0]; // 80200114
  c->r[1]=c->r[10]|c->r[10]; // 80200118
  return; // 8020011C
}

// ESP_DiGetTmd
void f_80200120(Ctx* __restrict c) {
  trace_call(0x80200120u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80200120
  c->r[12]=c->r[1]|c->r[1]; // 80200124
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 80200128
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8020012C
  c->r[0]=c->lr; // 80200130
  W32(c->r[12]+0x00000004u,c->r[0]); // 80200134
  c->r[7]=c->r[1]+0x000000F0u; // 80200138
  c->r[8]=c->r[1]+0x00000020u; // 8020013C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80200140
  c->r[31]=c->r[4]|c->r[4]; // 80200144
  c->r[6]=R32(c->r[13]+0xFFFF9128u); // 80200148
  cmps(c,0,(int32_t)c->r[6],0); // 8020014C
  if (crb(c,0)) { goto L_80200160; } // 80200150
  c->r[5]=0u+0x00000000u; // 80200154
  cmpu(c,0,c->r[4],c->r[5]); // 80200158
  if (!crb(c,2)) { goto L_80200168; } // 8020015C
L_80200160:;
  c->r[3]=0u+0xFFFFFC07u; // 80200160
  goto L_802001F8; // 80200164
L_80200168:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 80200168
  if (crb(c,2)) { goto L_80200178; } // 8020016C
  c->r[3]=0u+0xFFFFFC07u; // 80200170
  goto L_802001F8; // 80200174
L_80200178:;
  cmpu(c,0,c->r[3],c->r[5]); // 80200178
  if (!crb(c,2)) { goto L_802001B4; } // 8020017C
  c->r[0]=0u+0x00000004u; // 80200180
  c->r[3]=c->r[6]|c->r[6]; // 80200184
  W32(c->r[1]+0x000000F0u,c->r[8]); // 80200188
  c->r[4]=0u+0x00000039u; // 8020018C
  c->r[5]=0u+0x00000000u; // 80200190
  c->r[6]=0u+0x00000001u; // 80200194
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80200198
  c->lr=0x802001A0u; f_8012B280(c); // 8020019C
  cmps(c,0,(int32_t)c->r[3],0); // 802001A0
  if (!crb(c,2)) { goto L_802001F8; } // 802001A4
  c->r[0]=R32(c->r[1]+0x00000020u); // 802001A8
  W32(c->r[31]+0x00000000u,c->r[0]); // 802001AC
  goto L_802001F8; // 802001B0
L_802001B4:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802001B4
  cmps(c,0,(int32_t)c->r[5],0); // 802001B8
  if (!crb(c,2)) { goto L_802001C8; } // 802001BC
  c->r[3]=0u+0xFFFFFC07u; // 802001C0
  goto L_802001F8; // 802001C4
L_802001C8:;
  c->r[0]=0u+0x00000004u; // 802001C8
  W32(c->r[1]+0x000000F8u,c->r[3]); // 802001CC
  c->r[3]=c->r[6]|c->r[6]; // 802001D0
  c->r[6]=0u+0x00000001u; // 802001D4
  W32(c->r[1]+0x00000020u,c->r[5]); // 802001D8
  c->r[5]=0u+0x00000001u; // 802001DC
  W32(c->r[1]+0x000000F0u,c->r[8]); // 802001E0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 802001E4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802001E8
  c->r[4]=0u+0x0000003Au; // 802001EC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 802001F0
  c->lr=0x802001F8u; f_8012B280(c); // 802001F4
L_802001F8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802001F8
  c->r[0]=R32(c->r[10]+0x00000004u); // 802001FC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80200200
  c->lr=c->r[0]; // 80200204
  c->r[1]=c->r[10]|c->r[10]; // 80200208
  return; // 8020020C
}

// fn_80200210
void f_80200210(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80200210
  c->r[12]=c->r[1]|c->r[1]; // 80200214
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 80200218
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8020021C
  c->r[0]=c->lr; // 80200220
  W32(c->r[12]+0x00000004u,c->r[0]); // 80200224
  c->r[7]=c->r[1]+0x000000F0u; // 80200228
  c->r[11]=c->r[1]+0x00000020u; // 8020022C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80200230
  c->r[31]=c->r[6]|c->r[6]; // 80200234
  c->r[12]=c->r[1]+0x00000040u; // 80200238
  c->r[10]=R32(c->r[13]+0xFFFF9128u); // 8020023C
  cmps(c,0,(int32_t)c->r[10],0); // 80200240
  if (crb(c,0)) { goto L_80200254; } // 80200244
  c->r[8]=0u+0x00000000u; // 80200248
  cmpu(c,0,c->r[6],c->r[8]); // 8020024C
  if (!crb(c,2)) { goto L_8020025C; } // 80200250
L_80200254:;
  c->r[3]=0u+0xFFFFFC07u; // 80200254
  goto L_8020030C; // 80200258
L_8020025C:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 8020025C
  if (crb(c,2)) { goto L_8020026C; } // 80200260
  c->r[3]=0u+0xFFFFFC07u; // 80200264
  goto L_8020030C; // 80200268
L_8020026C:;
  cmpu(c,0,c->r[5],c->r[8]); // 8020026C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80200270
  W32(c->r[1]+0x00000020u,c->r[3]); // 80200274
  if (!crb(c,2)) { goto L_802002BC; } // 80200278
  c->r[5]=0u+0x00000008u; // 8020027C
  c->r[0]=0u+0x00000004u; // 80200280
  W32(c->r[1]+0x000000F4u,c->r[5]); // 80200284
  c->r[3]=c->r[10]|c->r[10]; // 80200288
  c->r[4]=0u+0x00000034u; // 8020028C
  c->r[5]=0u+0x00000001u; // 80200290
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80200294
  c->r[6]=0u+0x00000001u; // 80200298
  W32(c->r[1]+0x000000F8u,c->r[12]); // 8020029C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 802002A0
  c->lr=0x802002A8u; f_8012B280(c); // 802002A4
  cmps(c,0,(int32_t)c->r[3],0); // 802002A8
  if (!crb(c,2)) { goto L_8020030C; } // 802002AC
  c->r[0]=R32(c->r[1]+0x00000040u); // 802002B0
  W32(c->r[31]+0x00000000u,c->r[0]); // 802002B4
  goto L_8020030C; // 802002B8
L_802002BC:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 802002BC
  cmps(c,0,(int32_t)c->r[9],0); // 802002C0
  if (!crb(c,2)) { goto L_802002D0; } // 802002C4
  c->r[3]=0u+0xFFFFFC07u; // 802002C8
  goto L_8020030C; // 802002CC
L_802002D0:;
  c->r[8]=0u+0x00000008u; // 802002D0
  c->r[0]=0u+0x00000004u; // 802002D4
  W32(c->r[1]+0x00000100u,c->r[5]); // 802002D8
  c->r[3]=c->r[10]|c->r[10]; // 802002DC
  c->r[4]=0u+0x00000035u; // 802002E0
  c->r[5]=0u+0x00000002u; // 802002E4
  W32(c->r[1]+0x00000040u,c->r[9]); // 802002E8
  W32(c->r[1]+0x000000F0u,c->r[11]); // 802002EC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 802002F0
  W32(c->r[1]+0x000000F8u,c->r[12]); // 802002F4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 802002F8
  c->r[0]=R32(c->r[6]+0x00000000u); // 802002FC
  c->r[6]=0u+0x00000001u; // 80200300
  W32(c->r[1]+0x00000104u,c->r[0]); // 80200304
  c->lr=0x8020030Cu; f_8012B280(c); // 80200308
L_8020030C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020030C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80200310
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80200314
  c->lr=c->r[0]; // 80200318
  c->r[1]=c->r[10]|c->r[10]; // 8020031C
  return; // 80200320
}

// ESP_GetTmdView
void f_80200324(Ctx* __restrict c) {
  trace_call(0x80200324u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80200324
  c->r[12]=c->r[1]|c->r[1]; // 80200328
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8020032C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80200330
  c->r[0]=c->lr; // 80200334
  W32(c->r[12]+0x00000004u,c->r[0]); // 80200338
  c->r[7]=c->r[1]+0x000000F0u; // 8020033C
  c->r[11]=c->r[1]+0x00000020u; // 80200340
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80200344
  c->r[31]=c->r[6]|c->r[6]; // 80200348
  c->r[12]=c->r[1]+0x00000040u; // 8020034C
  c->r[10]=R32(c->r[13]+0xFFFF9128u); // 80200350
  cmps(c,0,(int32_t)c->r[10],0); // 80200354
  if (crb(c,0)) { goto L_80200368; } // 80200358
  c->r[8]=0u+0x00000000u; // 8020035C
  cmpu(c,0,c->r[6],c->r[8]); // 80200360
  if (!crb(c,2)) { goto L_80200370; } // 80200364
L_80200368:;
  c->r[3]=0u+0xFFFFFC07u; // 80200368
  goto L_80200420; // 8020036C
L_80200370:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80200370
  if (crb(c,2)) { goto L_80200380; } // 80200374
  c->r[3]=0u+0xFFFFFC07u; // 80200378
  goto L_80200420; // 8020037C
L_80200380:;
  cmpu(c,0,c->r[5],c->r[8]); // 80200380
  W32(c->r[1]+0x00000024u,c->r[4]); // 80200384
  W32(c->r[1]+0x00000020u,c->r[3]); // 80200388
  if (!crb(c,2)) { goto L_802003D0; } // 8020038C
  c->r[5]=0u+0x00000008u; // 80200390
  c->r[0]=0u+0x00000004u; // 80200394
  W32(c->r[1]+0x000000F4u,c->r[5]); // 80200398
  c->r[3]=c->r[10]|c->r[10]; // 8020039C
  c->r[4]=0u+0x00000014u; // 802003A0
  c->r[5]=0u+0x00000001u; // 802003A4
  W32(c->r[1]+0x000000F0u,c->r[11]); // 802003A8
  c->r[6]=0u+0x00000001u; // 802003AC
  W32(c->r[1]+0x000000F8u,c->r[12]); // 802003B0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 802003B4
  c->lr=0x802003BCu; f_8012B280(c); // 802003B8
  cmps(c,0,(int32_t)c->r[3],0); // 802003BC
  if (!crb(c,2)) { goto L_80200420; } // 802003C0
  c->r[0]=R32(c->r[1]+0x00000040u); // 802003C4
  W32(c->r[31]+0x00000000u,c->r[0]); // 802003C8
  goto L_80200420; // 802003CC
L_802003D0:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 802003D0
  cmps(c,0,(int32_t)c->r[9],0); // 802003D4
  if (!crb(c,2)) { goto L_802003E4; } // 802003D8
  c->r[3]=0u+0xFFFFFC07u; // 802003DC
  goto L_80200420; // 802003E0
L_802003E4:;
  c->r[8]=0u+0x00000008u; // 802003E4
  c->r[0]=0u+0x00000004u; // 802003E8
  W32(c->r[1]+0x00000100u,c->r[5]); // 802003EC
  c->r[3]=c->r[10]|c->r[10]; // 802003F0
  c->r[4]=0u+0x00000015u; // 802003F4
  c->r[5]=0u+0x00000002u; // 802003F8
  W32(c->r[1]+0x00000040u,c->r[9]); // 802003FC
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80200400
  W32(c->r[1]+0x000000F4u,c->r[8]); // 80200404
  W32(c->r[1]+0x000000F8u,c->r[12]); // 80200408
  W32(c->r[1]+0x000000FCu,c->r[0]); // 8020040C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80200410
  c->r[6]=0u+0x00000001u; // 80200414
  W32(c->r[1]+0x00000104u,c->r[0]); // 80200418
  c->lr=0x80200420u; f_8012B280(c); // 8020041C
L_80200420:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80200420
  c->r[0]=R32(c->r[10]+0x00000004u); // 80200424
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80200428
  c->lr=c->r[0]; // 8020042C
  c->r[1]=c->r[10]|c->r[10]; // 80200430
  return; // 80200434
}

// ESP_GetDataDir
void f_80200438(Ctx* __restrict c) {
  trace_call(0x80200438u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80200438
  c->r[12]=c->r[1]|c->r[1]; // 8020043C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80200440
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80200444
  c->r[0]=c->lr; // 80200448
  W32(c->r[12]+0x00000004u,c->r[0]); // 8020044C
  c->r[7]=c->r[1]+0x000000F0u; // 80200450
  c->r[10]=c->r[1]+0x00000020u; // 80200454
  c->r[9]=R32(c->r[13]+0xFFFF9128u); // 80200458
  cmps(c,0,(int32_t)c->r[9],0); // 8020045C
  if (crb(c,0)) { goto L_80200470; } // 80200460
  c->r[0]=0u+0x00000000u; // 80200464
  cmpu(c,0,c->r[5],c->r[0]); // 80200468
  if (!crb(c,2)) { goto L_80200478; } // 8020046C
L_80200470:;
  c->r[3]=0u+0xFFFFFC07u; // 80200470
  goto L_802004BC; // 80200474
L_80200478:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80200478
  if (crb(c,2)) { goto L_80200488; } // 8020047C
  c->r[3]=0u+0xFFFFFC07u; // 80200480
  goto L_802004BC; // 80200484
L_80200488:;
  c->r[8]=0u+0x00000008u; // 80200488
  c->r[0]=0u+0x0000001Eu; // 8020048C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80200490
  c->r[4]=0u+0x0000001Du; // 80200494
  c->r[6]=0u+0x00000001u; // 80200498
  W32(c->r[1]+0x00000020u,c->r[3]); // 8020049C
  c->r[3]=c->r[9]|c->r[9]; // 802004A0
  W32(c->r[1]+0x000000F8u,c->r[5]); // 802004A4
  c->r[5]=0u+0x00000001u; // 802004A8
  W32(c->r[1]+0x000000F0u,c->r[10]); // 802004AC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 802004B0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 802004B4
  c->lr=0x802004BCu; f_8012B280(c); // 802004B8
L_802004BC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802004BC
  c->r[0]=R32(c->r[10]+0x00000004u); // 802004C0
  c->lr=c->r[0]; // 802004C4
  c->r[1]=c->r[10]|c->r[10]; // 802004C8
  return; // 802004CC
}

// ESP_GetTitleId
void f_802004D0(Ctx* __restrict c) {
  trace_call(0x802004D0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 802004D0
  c->r[12]=c->r[1]|c->r[1]; // 802004D4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 802004D8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 802004DC
  c->r[0]=c->lr; // 802004E0
  W32(c->r[12]+0x00000004u,c->r[0]); // 802004E4
  c->r[7]=c->r[1]+0x000000F0u; // 802004E8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 802004EC
  c->r[31]=c->r[3]|c->r[3]; // 802004F0
  c->r[4]=R32(c->r[13]+0xFFFF9128u); // 802004F4
  cmps(c,0,(int32_t)c->r[4],0); // 802004F8
  if (crb(c,0)) { goto L_8020050C; } // 802004FC
  c->r[0]=0u+0x00000000u; // 80200500
  cmpu(c,0,c->r[3],c->r[0]); // 80200504
  if (!crb(c,2)) { goto L_80200514; } // 80200508
L_8020050C:;
  c->r[3]=0u+0xFFFFFC07u; // 8020050C
  goto L_80200550; // 80200510
L_80200514:;
  c->r[3]=c->r[1]+0x00000020u; // 80200514
  c->r[0]=0u+0x00000008u; // 80200518
  W32(c->r[1]+0x000000F0u,c->r[3]); // 8020051C
  c->r[3]=c->r[4]|c->r[4]; // 80200520
  c->r[4]=0u+0x00000020u; // 80200524
  c->r[5]=0u+0x00000000u; // 80200528
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8020052C
  c->r[6]=0u+0x00000001u; // 80200530
  c->lr=0x80200538u; f_8012B280(c); // 80200534
  cmps(c,0,(int32_t)c->r[3],0); // 80200538
  if (!crb(c,2)) { goto L_80200550; } // 8020053C
  c->r[0]=R32(c->r[1]+0x00000020u); // 80200540
  c->r[4]=R32(c->r[1]+0x00000024u); // 80200544
  W32(c->r[31]+0x00000004u,c->r[4]); // 80200548
  W32(c->r[31]+0x00000000u,c->r[0]); // 8020054C
L_80200550:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80200550
  c->r[0]=R32(c->r[10]+0x00000004u); // 80200554
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80200558
  c->lr=c->r[0]; // 8020055C
  c->r[1]=c->r[10]|c->r[10]; // 80200560
  return; // 80200564
}

// fn_80200568
void f_80200568(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80200568
  c->r[12]=c->r[1]|c->r[1]; // 8020056C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 80200570
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80200574
  c->r[0]=c->lr; // 80200578
  W32(c->r[12]+0x00000004u,c->r[0]); // 8020057C
  c->r[7]=c->r[1]+0x000000F0u; // 80200580
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80200584
  c->r[31]=c->r[3]|c->r[3]; // 80200588
  c->r[4]=R32(c->r[13]+0xFFFF9128u); // 8020058C
  cmps(c,0,(int32_t)c->r[4],0); // 80200590
  if (crb(c,0)) { goto L_802005A4; } // 80200594
  c->r[0]=0u+0x00000000u; // 80200598
  cmpu(c,0,c->r[3],c->r[0]); // 8020059C
  if (!crb(c,2)) { goto L_802005AC; } // 802005A0
L_802005A4:;
  c->r[3]=0u+0xFFFFFC07u; // 802005A4
  goto L_802005E0; // 802005A8
L_802005AC:;
  c->r[3]=c->r[1]+0x00000020u; // 802005AC
  c->r[0]=0u+0x00000004u; // 802005B0
  W32(c->r[1]+0x000000F0u,c->r[3]); // 802005B4
  c->r[3]=c->r[4]|c->r[4]; // 802005B8
  c->r[4]=0u+0x00000007u; // 802005BC
  c->r[5]=0u+0x00000000u; // 802005C0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 802005C4
  c->r[6]=0u+0x00000001u; // 802005C8
  c->lr=0x802005D0u; f_8012B280(c); // 802005CC
  cmps(c,0,(int32_t)c->r[3],0); // 802005D0
  if (!crb(c,2)) { goto L_802005E0; } // 802005D4
  c->r[0]=R32(c->r[1]+0x00000020u); // 802005D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 802005DC
L_802005E0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802005E0
  c->r[0]=R32(c->r[10]+0x00000004u); // 802005E4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 802005E8
  c->lr=c->r[0]; // 802005EC
  c->r[1]=c->r[10]|c->r[10]; // 802005F0
  return; // 802005F4
}

// ESP_GetConsumption
void f_802005F8(Ctx* __restrict c) {
  trace_call(0x802005F8u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 802005F8
  c->r[12]=c->r[1]|c->r[1]; // 802005FC
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 80200600
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80200604
  c->r[0]=c->lr; // 80200608
  W32(c->r[12]+0x00000004u,c->r[0]); // 8020060C
  c->r[7]=c->r[1]+0x000000F0u; // 80200610
  c->r[9]=c->r[1]+0x00000020u; // 80200614
  c->r[10]=c->r[1]+0x00000040u; // 80200618
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8020061C
  c->r[31]=c->r[6]|c->r[6]; // 80200620
  c->r[0]=R32(c->r[13]+0xFFFF9128u); // 80200624
  cmps(c,0,(int32_t)c->r[0],0); // 80200628
  if (!crb(c,0)) { goto L_80200638; } // 8020062C
  c->r[3]=0u+0xFFFFFC07u; // 80200630
  goto L_802006B4; // 80200634
L_80200638:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80200638
  if (crb(c,2)) { goto L_80200648; } // 8020063C
  c->r[3]=0u+0xFFFFFC07u; // 80200640
  goto L_802006B4; // 80200644
L_80200648:;
  c->r[0]=0u+0x00000000u; // 80200648
  c->r[8]=0u+0x00000008u; // 8020064C
  cmpu(c,0,c->r[5],c->r[0]); // 80200650
  W32(c->r[1]+0x00000024u,c->r[4]); // 80200654
  W32(c->r[1]+0x00000020u,c->r[3]); // 80200658
  W32(c->r[1]+0x000000F0u,c->r[9]); // 8020065C
  W32(c->r[1]+0x000000F4u,c->r[8]); // 80200660
  if (!crb(c,2)) { goto L_80200674; } // 80200664
  W32(c->r[1]+0x000000F8u,c->r[0]); // 80200668
  W32(c->r[1]+0x000000FCu,c->r[0]); // 8020066C
  goto L_8020068C; // 80200670
L_80200674:;
  W32(c->r[1]+0x000000F8u,c->r[5]); // 80200674
  c->r[0]=R32(c->r[6]+0x00000000u); // 80200678
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8020067C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 80200680
  c->r[0]=R32(c->r[6]+0x00000000u); // 80200684
  W32(c->r[1]+0x00000040u,c->r[0]); // 80200688
L_8020068C:;
  c->r[0]=0u+0x00000004u; // 8020068C
  W32(c->r[1]+0x00000100u,c->r[10]); // 80200690
  c->r[3]=R32(c->r[13]+0xFFFF9128u); // 80200694
  c->r[4]=0u+0x00000016u; // 80200698
  W32(c->r[1]+0x00000104u,c->r[0]); // 8020069C
  c->r[5]=0u+0x00000001u; // 802006A0
  c->r[6]=0u+0x00000002u; // 802006A4
  c->lr=0x802006ACu; f_8012B280(c); // 802006A8
  c->r[0]=R32(c->r[1]+0x00000040u); // 802006AC
  W32(c->r[31]+0x00000000u,c->r[0]); // 802006B0
L_802006B4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802006B4
  c->r[0]=R32(c->r[10]+0x00000004u); // 802006B8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 802006BC
  c->lr=c->r[0]; // 802006C0
  c->r[1]=c->r[10]|c->r[10]; // 802006C4
  return; // 802006C8
}

// fn_802006CC
void f_802006CC(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 802006CC
  c->r[12]=c->r[1]|c->r[1]; // 802006D0
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 802006D4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 802006D8
  c->r[0]=c->lr; // 802006DC
  W32(c->r[12]+0x00000004u,c->r[0]); // 802006E0
  c->r[7]=c->r[1]+0x000000F0u; // 802006E4
  c->r[4]=R32(c->r[13]+0xFFFF9128u); // 802006E8
  cmps(c,0,(int32_t)c->r[4],0); // 802006EC
  if (crb(c,0)) { goto L_80200700; } // 802006F0
  c->r[0]=0u+0x00000000u; // 802006F4
  cmpu(c,0,c->r[3],c->r[0]); // 802006F8
  if (!crb(c,2)) { goto L_80200708; } // 802006FC
L_80200700:;
  c->r[3]=0u+0xFFFFFC07u; // 80200700
  goto L_80200738; // 80200704
L_80200708:;
  c->r[0]=rotl(c->r[3],0)&0x0000003Fu; cr0(c,c->r[0]); // 80200708
  if (crb(c,2)) { goto L_80200718; } // 8020070C
  c->r[3]=0u+0xFFFFFC07u; // 80200710
  goto L_80200738; // 80200714
L_80200718:;
  c->r[0]=0u+0x00000180u; // 80200718
  W32(c->r[1]+0x000000F0u,c->r[3]); // 8020071C
  c->r[3]=c->r[4]|c->r[4]; // 80200720
  c->r[4]=0u+0x0000001Eu; // 80200724
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80200728
  c->r[5]=0u+0x00000000u; // 8020072C
  c->r[6]=0u+0x00000001u; // 80200730
  c->lr=0x80200738u; f_8012B280(c); // 80200734
L_80200738:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80200738
  c->r[0]=R32(c->r[10]+0x00000004u); // 8020073C
  c->lr=c->r[0]; // 80200740
  c->r[1]=c->r[10]|c->r[10]; // 80200744
  return; // 80200748
}

// fn_8020074C
void f_8020074C(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8020074C
  c->r[12]=c->r[1]|c->r[1]; // 80200750
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80200754
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80200758
  c->r[0]=c->lr; // 8020075C
  W32(c->r[12]+0x00000004u,c->r[0]); // 80200760
  c->r[7]=c->r[1]+0x000000F0u; // 80200764
  c->r[9]=R32(c->r[13]+0xFFFF9128u); // 80200768
  cmps(c,0,(int32_t)c->r[9],0); // 8020076C
  if (crb(c,0)) { goto L_80200790; } // 80200770
  c->r[0]=0u+0x00000000u; // 80200774
  cmpu(c,0,c->r[3],c->r[0]); // 80200778
  if (crb(c,2)) { goto L_80200790; } // 8020077C
  cmpu(c,0,c->r[5],c->r[0]); // 80200780
  if (crb(c,2)) { goto L_80200790; } // 80200784
  cmpu(c,0,c->r[6],c->r[0]); // 80200788
  if (!crb(c,2)) { goto L_80200798; } // 8020078C
L_80200790:;
  c->r[3]=0u+0xFFFFFC07u; // 80200790
  goto L_802007EC; // 80200794
L_80200798:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 80200798
  if (!crb(c,2)) { goto L_802007B0; } // 8020079C
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 802007A0
  if (!crb(c,2)) { goto L_802007B0; } // 802007A4
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 802007A8
  if (crb(c,2)) { goto L_802007B8; } // 802007AC
L_802007B0:;
  c->r[3]=0u+0xFFFFFC07u; // 802007B0
  goto L_802007EC; // 802007B4
L_802007B8:;
  c->r[8]=0u+0x0000003Cu; // 802007B8
  c->r[0]=0u+0x00000180u; // 802007BC
  W32(c->r[1]+0x000000F0u,c->r[3]); // 802007C0
  c->r[3]=c->r[9]|c->r[9]; // 802007C4
  W32(c->r[1]+0x000000F4u,c->r[4]); // 802007C8
  c->r[4]=0u+0x00000030u; // 802007CC
  W32(c->r[1]+0x000000F8u,c->r[5]); // 802007D0
  c->r[5]=0u+0x00000001u; // 802007D4
  W32(c->r[1]+0x00000100u,c->r[6]); // 802007D8
  c->r[6]=0u+0x00000002u; // 802007DC
  W32(c->r[1]+0x000000FCu,c->r[8]); // 802007E0
  W32(c->r[1]+0x00000104u,c->r[0]); // 802007E4
  c->lr=0x802007ECu; f_8012B280(c); // 802007E8
L_802007EC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802007EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 802007F0
  c->lr=c->r[0]; // 802007F4
  c->r[1]=c->r[10]|c->r[10]; // 802007F8
  return; // 802007FC
}

// fn_80200800
void f_80200800(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80200800
  c->r[12]=c->r[1]|c->r[1]; // 80200804
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80200808
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8020080C
  c->r[0]=c->lr; // 80200810
  W32(c->r[12]+0x00000004u,c->r[0]); // 80200814
  c->r[7]=c->r[1]+0x000000F0u; // 80200818
  c->r[8]=c->r[1]+0x00000020u; // 8020081C
  c->r[5]=R32(c->r[13]+0xFFFF9128u); // 80200820
  cmps(c,0,(int32_t)c->r[5],0); // 80200824
  if (!crb(c,0)) { goto L_80200834; } // 80200828
  c->r[3]=0u+0xFFFFFC07u; // 8020082C
  goto L_8020085C; // 80200830
L_80200834:;
  c->r[0]=0u+0x00000008u; // 80200834
  W32(c->r[1]+0x00000024u,c->r[4]); // 80200838
  c->r[4]=0u+0x00000022u; // 8020083C
  c->r[6]=0u+0x00000000u; // 80200840
  W32(c->r[1]+0x00000020u,c->r[3]); // 80200844
  c->r[3]=c->r[5]|c->r[5]; // 80200848
  c->r[5]=0u+0x00000001u; // 8020084C
  W32(c->r[1]+0x000000F0u,c->r[8]); // 80200850
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80200854
  c->lr=0x8020085Cu; f_8012B280(c); // 80200858
L_8020085C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020085C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80200860
  c->lr=c->r[0]; // 80200864
  c->r[1]=c->r[10]|c->r[10]; // 80200868
  return; // 8020086C
}

// fn_80200870
void f_80200870(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80200870
  c->r[12]=c->r[1]|c->r[1]; // 80200874
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80200878
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8020087C
  c->r[0]=c->lr; // 80200880
  W32(c->r[12]+0x00000004u,c->r[0]); // 80200884
  c->r[7]=c->r[1]+0x000000F0u; // 80200888
  c->r[10]=c->r[1]+0x00000020u; // 8020088C
  c->r[11]=c->r[1]+0x00000040u; // 80200890
  c->r[9]=R32(c->r[13]+0xFFFF9128u); // 80200894
  cmps(c,0,(int32_t)c->r[9],0); // 80200898
  if (!crb(c,0)) { goto L_802008A8; } // 8020089C
  c->r[3]=0u+0xFFFFFC07u; // 802008A0
  goto L_802008E0; // 802008A4
L_802008A8:;
  c->r[8]=0u+0x00000008u; // 802008A8
  c->r[0]=0u+0x00000004u; // 802008AC
  W32(c->r[1]+0x00000024u,c->r[4]); // 802008B0
  c->r[4]=0u+0x0000003Eu; // 802008B4
  c->r[6]=0u+0x00000000u; // 802008B8
  W32(c->r[1]+0x00000020u,c->r[3]); // 802008BC
  c->r[3]=c->r[9]|c->r[9]; // 802008C0
  W32(c->r[1]+0x00000040u,c->r[5]); // 802008C4
  c->r[5]=0u+0x00000002u; // 802008C8
  W32(c->r[1]+0x000000F0u,c->r[10]); // 802008CC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 802008D0
  W32(c->r[1]+0x000000F8u,c->r[11]); // 802008D4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 802008D8
  c->lr=0x802008E0u; f_8012B280(c); // 802008DC
L_802008E0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 802008E0
  c->r[0]=R32(c->r[10]+0x00000004u); // 802008E4
  c->lr=c->r[0]; // 802008E8
  c->r[1]=c->r[10]|c->r[10]; // 802008EC
  return; // 802008F0
}

// fn_802008F4
void f_802008F4(Ctx* __restrict c) {
  c->r[7]=0u+0x67450000u; // 802008F4
  c->r[6]=0u+0xEFCE0000u; // 802008F8
  c->r[8]=0u+0x00000000u; // 802008FC
  c->r[5]=0u+0x98BB0000u; // 80200900
  c->r[4]=0u+0x10320000u; // 80200904
  c->r[7]=c->r[7]+0x00002301u; // 80200908
  c->r[6]=c->r[6]+0xFFFFAB89u; // 8020090C
  c->r[5]=c->r[5]+0xFFFFDCFEu; // 80200910
  c->r[0]=c->r[4]+0x00005476u; // 80200914
  W32(c->r[3]+0x00000014u,c->r[8]); // 80200918
  W32(c->r[3]+0x00000010u,c->r[8]); // 8020091C
  W32(c->r[3]+0x00000000u,c->r[7]); // 80200920
  W32(c->r[3]+0x00000004u,c->r[6]); // 80200924
  W32(c->r[3]+0x00000008u,c->r[5]); // 80200928
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8020092C
  return; // 80200930
}

// fn_80200934
void f_80200934(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200934
  c->r[0]=c->lr; // 80200938
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020093C
  c->r[11]=c->r[1]+0x00000020u; // 80200940
  c->lr=0x80200948u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200944
  c->r[6]=R32(c->r[3]+0x00000010u); // 80200948
  c->r[7]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8020094C
  c->r[28]=c->r[3]|c->r[3]; // 80200950
  c->r[29]=c->r[4]|c->r[4]; // 80200954
  c->r[0]=c->r[6]+c->r[7]; // 80200958
  c->r[30]=c->r[5]|c->r[5]; // 8020095C
  cmpu(c,0,c->r[0],c->r[7]); // 80200960
  W32(c->r[3]+0x00000010u,c->r[0]); // 80200964
  c->r[6]=rotl(c->r[6],29)&0x0000003Fu; // 80200968
  if (!crb(c,0)) { goto L_8020097C; } // 8020096C
  c->r[4]=R32(c->r[3]+0x00000014u); // 80200970
  c->r[0]=c->r[4]+0x00000001u; // 80200974
  W32(c->r[3]+0x00000014u,c->r[0]); // 80200978
L_8020097C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 8020097C
  c->r[0]=rotl(c->r[5],3)&0x00000007u; // 80200980
  c->r[31]=addc(c,~c->r[6],0x00000040u,1); // 80200984
  c->r[0]=c->r[4]+c->r[0]; // 80200988
  cmpu(c,0,c->r[5],c->r[31]); // 8020098C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80200990
  if (crb(c,0)) { goto L_802009E0; } // 80200994
  c->r[3]=c->r[3]+c->r[6]; // 80200998
  c->r[4]=c->r[29]|c->r[29]; // 8020099C
  c->r[5]=c->r[31]|c->r[31]; // 802009A0
  c->r[3]=c->r[3]+0x00000018u; // 802009A4
  c->lr=0x802009ACu; f_802014A0(c); // 802009A8
  c->r[3]=c->r[28]|c->r[28]; // 802009AC
  c->r[4]=c->r[28]+0x00000018u; // 802009B0
  c->lr=0x802009B8u; f_80200AAC(c); // 802009B4
  goto L_802009CC; // 802009B8
L_802009BC:;
  c->r[3]=c->r[28]|c->r[28]; // 802009BC
  c->r[4]=c->r[29]+c->r[31]; // 802009C0
  c->lr=0x802009C8u; f_80200AAC(c); // 802009C4
  c->r[31]=c->r[31]+0x00000040u; // 802009C8
L_802009CC:;
  c->r[0]=c->r[31]+0x0000003Fu; // 802009CC
  cmpu(c,0,c->r[0],c->r[30]); // 802009D0
  if (crb(c,0)) { IRQCHK(c); goto L_802009BC; } // 802009D4
  c->r[6]=0u+0x00000000u; // 802009D8
  goto L_802009E4; // 802009DC
L_802009E0:;
  c->r[31]=0u+0x00000000u; // 802009E0
L_802009E4:;
  c->r[3]=c->r[28]+c->r[6]; // 802009E4
  c->r[4]=c->r[29]+c->r[31]; // 802009E8
  c->r[3]=c->r[3]+0x00000018u; // 802009EC
  c->r[5]=c->r[30]-c->r[31]; // 802009F0
  c->lr=0x802009F8u; f_802014A0(c); // 802009F4
  c->r[11]=c->r[1]+0x00000020u; // 802009F8
  c->lr=0x80200A00u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802009FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200A00
  c->lr=c->r[0]; // 80200A04
  c->r[1]=c->r[1]+0x00000020u; // 80200A08
  return; // 80200A0C
}

// fn_80200A10
void f_80200A10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200A10
  c->r[0]=c->lr; // 80200A14
  c->r[5]=0u+0x00000008u; // 80200A18
  W32(c->r[1]+0x00000024u,c->r[0]); // 80200A1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80200A20
  c->r[31]=c->r[4]|c->r[4]; // 80200A24
  c->r[4]=c->r[4]+0x00000010u; // 80200A28
  W32(c->r[1]+0x00000018u,c->r[30]); // 80200A2C
  c->r[30]=c->r[3]|c->r[3]; // 80200A30
  c->r[3]=c->r[1]+0x00000008u; // 80200A34
  c->lr=0x80200A3Cu; f_80201444(c); // 80200A38
  c->r[0]=R32(c->r[31]+0x00000010u); // 80200A3C
  c->r[4]=0u+0x802A0000u; // 80200A40
  c->r[3]=c->r[31]|c->r[31]; // 80200A44
  c->r[0]=rotl(c->r[0],29)&0x0000003Fu; // 80200A48
  c->r[4]=c->r[4]+0x00002DC8u; // 80200A4C
  cmpu(c,0,c->r[0],0x00000038u); // 80200A50
  c->r[5]=addc(c,~c->r[0],0x00000078u,1); // 80200A54
  if (!crb(c,0)) { goto L_80200A60; } // 80200A58
  c->r[5]=addc(c,~c->r[0],0x00000038u,1); // 80200A5C
L_80200A60:;
  c->lr=0x80200A64u; f_80200934(c); // 80200A60
  c->r[3]=c->r[31]|c->r[31]; // 80200A64
  c->r[4]=c->r[1]+0x00000008u; // 80200A68
  c->r[5]=0u+0x00000008u; // 80200A6C
  c->lr=0x80200A74u; f_80200934(c); // 80200A70
  c->r[3]=c->r[30]|c->r[30]; // 80200A74
  c->r[4]=c->r[31]|c->r[31]; // 80200A78
  c->r[5]=0u+0x00000010u; // 80200A7C
  c->lr=0x80200A84u; f_80201444(c); // 80200A80
  c->r[3]=c->r[31]|c->r[31]; // 80200A84
  c->r[4]=0u+0x00000000u; // 80200A88
  c->r[5]=0u+0x00000058u; // 80200A8C
  c->lr=0x80200A94u; f_802014C4(c); // 80200A90
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200A94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80200A98
  c->r[30]=R32(c->r[1]+0x00000018u); // 80200A9C
  c->lr=c->r[0]; // 80200AA0
  c->r[1]=c->r[1]+0x00000020u; // 80200AA4
  return; // 80200AA8
}

// fn_80200AAC
void f_80200AAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200AAC
  c->r[0]=c->lr; // 80200AB0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80200AB4
  c->r[11]=c->r[1]+0x000000A0u; // 80200AB8
  c->lr=0x80200AC0u; f_80109F04(c); // 80200ABC
  c->r[0]=0u+0x00000010u; // 80200AC0
  c->r[7]=c->r[1]+0x00000008u; // 80200AC4
  c->r[15]=R32(c->r[3]+0x00000000u); // 80200AC8
  c->r[5]=0u+0x00000000u; // 80200ACC
  c->r[6]=R32(c->r[3]+0x00000004u); // 80200AD0
  c->r[12]=0u+0x00000000u; // 80200AD4
  c->r[8]=R32(c->r[3]+0x00000008u); // 80200AD8
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 80200ADC
  c->ctr=c->r[0]; // 80200AE0
L_80200AE4:;
  c->r[14]=c->r[4]+c->r[12]; // 80200AE4
  c->r[0]=R8(c->r[4]+c->r[12]); // 80200AE8
  c->r[10]=R8(c->r[14]+0x00000001u); // 80200AEC
  c->r[12]=c->r[12]+0x00000004u; // 80200AF0
  c->r[11]=R8(c->r[14]+0x00000002u); // 80200AF4
  c->r[0]=(rotl(c->r[10],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80200AF8
  c->r[10]=R8(c->r[14]+0x00000003u); // 80200AFC
  c->r[0]=(rotl(c->r[11],16)&0x00FF0000u)|(c->r[0]&~0x00FF0000u); // 80200B00
  c->r[0]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 80200B04
  W32(c->r[7]+c->r[5],c->r[0]); // 80200B08
  c->r[5]=c->r[5]+0x00000004u; // 80200B0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80200AE4; } // 80200B10
  c->r[25]=R32(c->r[1]+0x00000008u); // 80200B14
  c->r[5]=c->r[6]&c->r[8]; // 80200B18
  c->r[0]=c->r[9]&~c->r[6]; // 80200B1C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80200B20
  c->r[7]=c->r[25]+0xD76B0000u; // 80200B24
  c->r[28]=R32(c->r[1]+0x00000010u); // 80200B28
  c->r[7]=c->r[7]+c->r[15]; // 80200B2C
  c->r[0]=c->r[5]|c->r[0]; // 80200B30
  c->r[5]=c->r[7]+c->r[0]; // 80200B34
  c->r[11]=c->r[4]+0xE8C80000u; // 80200B38
  c->r[15]=c->r[5]+0xFFFFA478u; // 80200B3C
  c->r[16]=c->r[28]+0x24200000u; // 80200B40
  c->r[0]=rotl(c->r[15],7)&0xFFFFFFFFu; // 80200B44
  c->r[31]=R32(c->r[1]+0x00000014u); // 80200B48
  c->r[0]=c->r[0]+c->r[6]; // 80200B4C
  c->r[10]=R32(c->r[1]+0x00000018u); // 80200B50
  c->r[7]=c->r[0]&c->r[6]; // 80200B54
  c->r[14]=c->r[31]+0xC1BE0000u; // 80200B58
  c->r[5]=c->r[8]&~c->r[0]; // 80200B5C
  c->r[9]=c->r[11]+c->r[9]; // 80200B60
  c->r[5]=c->r[7]|c->r[5]; // 80200B64
  c->r[12]=c->r[10]+0xF57C0000u; // 80200B68
  c->r[5]=c->r[9]+c->r[5]; // 80200B6C
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 80200B70
  c->r[9]=c->r[5]+0xFFFFB756u; // 80200B74
  c->r[16]=c->r[16]+c->r[8]; // 80200B78
  c->r[9]=rotl(c->r[9],12)&0xFFFFFFFFu; // 80200B7C
  c->r[18]=c->r[14]+c->r[6]; // 80200B80
  c->r[9]=c->r[9]+c->r[0]; // 80200B84
  c->r[5]=R32(c->r[1]+0x00000020u); // 80200B88
  c->r[15]=c->r[9]&c->r[0]; // 80200B8C
  c->r[17]=c->r[12]+c->r[0]; // 80200B90
  c->r[8]=c->r[6]&~c->r[9]; // 80200B94
  c->r[27]=R32(c->r[1]+0x00000024u); // 80200B98
  c->r[8]=c->r[15]|c->r[8]; // 80200B9C
  c->r[11]=c->r[7]+0x47880000u; // 80200BA0
  c->r[6]=c->r[16]+c->r[8]; // 80200BA4
  c->r[12]=c->r[27]+0xFD470000u; // 80200BA8
  c->r[8]=c->r[6]+0x000070DBu; // 80200BAC
  c->r[15]=c->r[11]+c->r[9]; // 80200BB0
  c->r[8]=rotl(c->r[8],17)&0xFFFFFFFFu; // 80200BB4
  c->r[30]=R32(c->r[1]+0x00000028u); // 80200BB8
  c->r[8]=c->r[8]+c->r[9]; // 80200BBC
  c->r[6]=c->r[5]+0xA8300000u; // 80200BC0
  c->r[16]=c->r[8]&c->r[9]; // 80200BC4
  c->r[11]=c->r[30]+0x69810000u; // 80200BC8
  c->r[0]=c->r[0]&~c->r[8]; // 80200BCC
  c->r[14]=c->r[6]+c->r[8]; // 80200BD0
  c->r[0]=c->r[16]|c->r[0]; // 80200BD4
  c->r[6]=c->r[18]+c->r[0]; // 80200BD8
  c->r[6]=c->r[6]+0xFFFFCEEEu; // 80200BDC
  c->r[6]=rotl(c->r[6],22)&0xFFFFFFFFu; // 80200BE0
  c->r[6]=c->r[6]+c->r[8]; // 80200BE4
  c->r[16]=c->r[6]&c->r[8]; // 80200BE8
  c->r[0]=c->r[9]&~c->r[6]; // 80200BEC
  c->r[12]=c->r[12]+c->r[6]; // 80200BF0
  c->r[0]=c->r[16]|c->r[0]; // 80200BF4
  c->r[9]=c->r[17]+c->r[0]; // 80200BF8
  c->r[0]=c->r[9]+0x00000FAFu; // 80200BFC
  c->r[0]=rotl(c->r[0],7)&0xFFFFFFFFu; // 80200C00
  c->r[0]=c->r[0]+c->r[6]; // 80200C04
  c->r[9]=c->r[0]&c->r[6]; // 80200C08
  c->r[8]=c->r[8]&~c->r[0]; // 80200C0C
  c->r[11]=c->r[11]+c->r[0]; // 80200C10
  c->r[8]=c->r[9]|c->r[8]; // 80200C14
  c->r[8]=c->r[15]+c->r[8]; // 80200C18
  c->r[9]=c->r[8]+0xFFFFC62Au; // 80200C1C
  c->r[9]=rotl(c->r[9],12)&0xFFFFFFFFu; // 80200C20
  c->r[9]=c->r[9]+c->r[0]; // 80200C24
  c->r[8]=c->r[9]&c->r[0]; // 80200C28
  c->r[6]=c->r[6]&~c->r[9]; // 80200C2C
  c->r[6]=c->r[8]|c->r[6]; // 80200C30
  c->r[6]=c->r[14]+c->r[6]; // 80200C34
  c->r[8]=c->r[6]+0x00004613u; // 80200C38
  c->r[15]=rotl(c->r[8],17)&0xFFFFFFFFu; // 80200C3C
  c->r[15]=c->r[15]+c->r[9]; // 80200C40
  c->r[6]=c->r[15]&c->r[9]; // 80200C44
  c->r[0]=c->r[0]&~c->r[15]; // 80200C48
  c->r[0]=c->r[6]|c->r[0]; // 80200C4C
  c->r[6]=c->r[12]+c->r[0]; // 80200C50
  c->r[6]=c->r[6]+0xFFFF9501u; // 80200C54
  c->r[14]=rotl(c->r[6],22)&0xFFFFFFFFu; // 80200C58
  c->r[14]=c->r[14]+c->r[15]; // 80200C5C
  c->r[6]=c->r[14]&c->r[15]; // 80200C60
  c->r[0]=c->r[9]&~c->r[14]; // 80200C64
  c->r[0]=c->r[6]|c->r[0]; // 80200C68
  c->r[6]=c->r[11]+c->r[0]; // 80200C6C
  c->r[0]=c->r[6]+0xFFFF98D8u; // 80200C70
  c->r[18]=rotl(c->r[0],7)&0xFFFFFFFFu; // 80200C74
  c->r[11]=R32(c->r[1]+0x0000002Cu); // 80200C78
  c->r[18]=c->r[18]+c->r[14]; // 80200C7C
  c->r[6]=R32(c->r[1]+0x00000034u); // 80200C80
  c->r[12]=c->r[11]+0x8B450000u; // 80200C84
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 80200C88
  c->r[16]=c->r[18]&c->r[14]; // 80200C8C
  c->r[0]=c->r[15]&~c->r[18]; // 80200C90
  c->r[9]=c->r[12]+c->r[9]; // 80200C94
  c->r[8]=R32(c->r[1]+0x00000030u); // 80200C98
  c->r[0]=c->r[16]|c->r[0]; // 80200C9C
  c->r[26]=R32(c->r[1]+0x00000038u); // 80200CA0
  c->r[9]=c->r[9]+c->r[0]; // 80200CA4
  c->r[12]=c->r[8]+0xFFFF0000u; // 80200CA8
  c->r[9]=c->r[9]+0xFFFFF7AFu; // 80200CAC
  c->r[0]=c->r[26]+0x6B900000u; // 80200CB0
  c->r[16]=rotl(c->r[9],12)&0xFFFFFFFFu; // 80200CB4
  c->r[20]=c->r[12]+c->r[15]; // 80200CB8
  c->r[16]=c->r[16]+c->r[18]; // 80200CBC
  c->r[17]=c->r[29]+0xFD980000u; // 80200CC0
  c->r[15]=c->r[16]&c->r[18]; // 80200CC4
  c->r[19]=c->r[6]+0x895D0000u; // 80200CC8
  c->r[9]=c->r[14]&~c->r[16]; // 80200CCC
  c->r[0]=c->r[0]+c->r[18]; // 80200CD0
  c->r[15]=c->r[15]|c->r[9]; // 80200CD4
  c->r[14]=c->r[19]+c->r[14]; // 80200CD8
  c->r[15]=c->r[20]+c->r[15]; // 80200CDC
  c->r[9]=R32(c->r[1]+0x00000044u); // 80200CE0
  c->r[15]=c->r[15]+0x00005BB1u; // 80200CE4
  c->r[21]=c->r[17]+c->r[16]; // 80200CE8
  c->r[15]=rotl(c->r[15],17)&0xFFFFFFFFu; // 80200CEC
  c->r[12]=R32(c->r[1]+0x00000040u); // 80200CF0
  c->r[15]=c->r[15]+c->r[16]; // 80200CF4
  c->r[19]=c->r[9]+0x49B40000u; // 80200CF8
  c->r[22]=c->r[15]&c->r[16]; // 80200CFC
  c->r[17]=c->r[12]+0xA6790000u; // 80200D00
  c->r[18]=c->r[18]&~c->r[15]; // 80200D04
  c->r[18]=c->r[22]|c->r[18]; // 80200D08
  c->r[20]=c->r[17]+c->r[15]; // 80200D0C
  c->r[14]=c->r[14]+c->r[18]; // 80200D10
  c->r[17]=c->r[4]+0xF61E0000u; // 80200D14
  c->r[14]=c->r[14]+0xFFFFD7BEu; // 80200D18
  c->r[14]=rotl(c->r[14],22)&0xFFFFFFFFu; // 80200D1C
  c->r[14]=c->r[14]+c->r[15]; // 80200D20
  c->r[18]=c->r[14]&c->r[15]; // 80200D24
  c->r[16]=c->r[16]&~c->r[14]; // 80200D28
  c->r[19]=c->r[19]+c->r[14]; // 80200D2C
  c->r[16]=c->r[18]|c->r[16]; // 80200D30
  c->r[16]=c->r[0]+c->r[16]; // 80200D34
  c->r[18]=c->r[16]+0x00001122u; // 80200D38
  c->r[0]=rotl(c->r[18],7)&0xFFFFFFFFu; // 80200D3C
  c->r[0]=c->r[0]+c->r[14]; // 80200D40
  c->r[16]=c->r[0]&c->r[14]; // 80200D44
  c->r[15]=c->r[15]&~c->r[0]; // 80200D48
  c->r[18]=c->r[17]+c->r[0]; // 80200D4C
  c->r[15]=c->r[16]|c->r[15]; // 80200D50
  c->r[15]=c->r[21]+c->r[15]; // 80200D54
  c->r[16]=c->r[15]+0x00007193u; // 80200D58
  c->r[17]=rotl(c->r[16],12)&0xFFFFFFFFu; // 80200D5C
  c->r[17]=c->r[17]+c->r[0]; // 80200D60
  c->r[21]=~(c->r[17]|c->r[17]); // 80200D64
  c->r[15]=c->r[17]&c->r[0]; // 80200D68
  c->r[14]=c->r[21]&c->r[14]; // 80200D6C
  c->r[14]=c->r[15]|c->r[14]; // 80200D70
  c->r[14]=c->r[20]+c->r[14]; // 80200D74
  c->r[15]=c->r[14]+0x0000438Eu; // 80200D78
  c->r[16]=rotl(c->r[15],17)&0xFFFFFFFFu; // 80200D7C
  c->r[16]=c->r[16]+c->r[17]; // 80200D80
  c->r[15]=~(c->r[16]|c->r[16]); // 80200D84
  c->r[14]=c->r[16]&c->r[17]; // 80200D88
  c->r[20]=c->r[16]&c->r[21]; // 80200D8C
  c->r[0]=c->r[15]&c->r[0]; // 80200D90
  c->r[0]=c->r[14]|c->r[0]; // 80200D94
  c->r[14]=c->r[19]+c->r[0]; // 80200D98
  c->r[14]=c->r[14]+0x00000821u; // 80200D9C
  c->r[22]=rotl(c->r[14],22)&0xFFFFFFFFu; // 80200DA0
  c->r[22]=c->r[22]+c->r[16]; // 80200DA4
  c->r[0]=c->r[22]&c->r[17]; // 80200DA8
  c->r[0]=c->r[0]|c->r[20]; // 80200DAC
  c->r[14]=c->r[18]+c->r[0]; // 80200DB0
  c->r[0]=c->r[14]+0x00002562u; // 80200DB4
  c->r[20]=rotl(c->r[0],5)&0xFFFFFFFFu; // 80200DB8
  c->r[20]=c->r[20]+c->r[22]; // 80200DBC
  c->r[18]=c->r[5]+0xC0410000u; // 80200DC0
  c->r[0]=c->r[22]&c->r[15]; // 80200DC4
  c->r[19]=c->r[20]&c->r[16]; // 80200DC8
  c->r[14]=c->r[6]+0x265E0000u; // 80200DCC
  c->r[15]=c->r[18]+c->r[17]; // 80200DD0
  c->r[18]=c->r[25]+0xE9B70000u; // 80200DD4
  c->r[0]=c->r[19]|c->r[0]; // 80200DD8
  c->r[19]=c->r[7]+0xD62F0000u; // 80200DDC
  c->r[15]=c->r[15]+c->r[0]; // 80200DE0
  c->r[18]=c->r[18]+c->r[22]; // 80200DE4
  c->r[17]=c->r[15]+0xFFFFB340u; // 80200DE8
  c->r[0]=c->r[20]&~c->r[22]; // 80200DEC
  c->r[15]=c->r[14]+c->r[16]; // 80200DF0
  c->r[16]=c->r[8]+0x02440000u; // 80200DF4
  c->r[14]=rotl(c->r[17],9)&0xFFFFFFFFu; // 80200DF8
  c->r[21]=c->r[19]+c->r[20]; // 80200DFC
  c->r[14]=c->r[14]+c->r[20]; // 80200E00
  c->r[23]=c->r[12]+0xC3370000u; // 80200E04
  c->r[17]=c->r[14]&c->r[22]; // 80200E08
  c->r[0]=c->r[17]|c->r[0]; // 80200E0C
  c->r[19]=c->r[16]+c->r[14]; // 80200E10
  c->r[15]=c->r[15]+c->r[0]; // 80200E14
  c->r[22]=c->r[14]&~c->r[20]; // 80200E18
  c->r[16]=c->r[15]+0x00005A51u; // 80200E1C
  c->r[17]=c->r[10]+0xE7D40000u; // 80200E20
  c->r[0]=rotl(c->r[16],14)&0xFFFFFFFFu; // 80200E24
  c->r[15]=c->r[9]+0xD8A20000u; // 80200E28
  c->r[0]=c->r[0]+c->r[14]; // 80200E2C
  c->r[16]=c->r[11]+0x21E20000u; // 80200E30
  c->r[20]=c->r[0]&c->r[20]; // 80200E34
  c->r[22]=c->r[20]|c->r[22]; // 80200E38
  c->r[22]=c->r[18]+c->r[22]; // 80200E3C
  c->r[18]=c->r[15]+c->r[0]; // 80200E40
  c->r[22]=c->r[22]+0xFFFFC7AAu; // 80200E44
  c->r[20]=c->r[0]&~c->r[14]; // 80200E48
  c->r[22]=rotl(c->r[22],20)&0xFFFFFFFFu; // 80200E4C
  c->r[15]=c->r[31]+0xF4D50000u; // 80200E50
  c->r[22]=c->r[22]+c->r[0]; // 80200E54
  c->r[14]=c->r[22]&c->r[14]; // 80200E58
  c->r[20]=c->r[14]|c->r[20]; // 80200E5C
  c->r[17]=c->r[17]+c->r[22]; // 80200E60
  c->r[20]=c->r[21]+c->r[20]; // 80200E64
  c->r[14]=c->r[22]&~c->r[0]; // 80200E68
  c->r[20]=c->r[20]+0x0000105Du; // 80200E6C
  c->r[20]=rotl(c->r[20],5)&0xFFFFFFFFu; // 80200E70
  c->r[20]=c->r[20]+c->r[22]; // 80200E74
  c->r[0]=c->r[20]&c->r[0]; // 80200E78
  c->r[14]=c->r[0]|c->r[14]; // 80200E7C
  c->r[16]=c->r[16]+c->r[20]; // 80200E80
  c->r[14]=c->r[19]+c->r[14]; // 80200E84
  c->r[0]=c->r[20]&~c->r[22]; // 80200E88
  c->r[14]=c->r[14]+0x00001453u; // 80200E8C
  c->r[14]=rotl(c->r[14],9)&0xFFFFFFFFu; // 80200E90
  c->r[14]=c->r[14]+c->r[20]; // 80200E94
  c->r[19]=c->r[14]&c->r[22]; // 80200E98
  c->r[0]=c->r[19]|c->r[0]; // 80200E9C
  c->r[21]=c->r[14]&~c->r[20]; // 80200EA0
  c->r[19]=c->r[18]+c->r[0]; // 80200EA4
  c->r[18]=c->r[23]+c->r[14]; // 80200EA8
  c->r[0]=c->r[19]+0xFFFFE681u; // 80200EAC
  c->r[19]=rotl(c->r[0],14)&0xFFFFFFFFu; // 80200EB0
  c->r[19]=c->r[19]+c->r[14]; // 80200EB4
  c->r[0]=c->r[19]&c->r[20]; // 80200EB8
  c->r[20]=c->r[0]|c->r[21]; // 80200EBC
  c->r[20]=c->r[17]+c->r[20]; // 80200EC0
  c->r[17]=c->r[15]+c->r[19]; // 80200EC4
  c->r[22]=c->r[20]+0xFFFFFBC8u; // 80200EC8
  c->r[0]=c->r[19]&~c->r[14]; // 80200ECC
  c->r[15]=rotl(c->r[22],20)&0xFFFFFFFFu; // 80200ED0
  c->r[15]=c->r[15]+c->r[19]; // 80200ED4
  c->r[14]=c->r[15]&c->r[14]; // 80200ED8
  c->r[0]=c->r[14]|c->r[0]; // 80200EDC
  c->r[16]=c->r[16]+c->r[0]; // 80200EE0
  c->r[14]=c->r[15]&~c->r[19]; // 80200EE4
  c->r[20]=c->r[16]+0xFFFFCDE6u; // 80200EE8
  c->r[0]=rotl(c->r[20],5)&0xFFFFFFFFu; // 80200EEC
  c->r[0]=c->r[0]+c->r[15]; // 80200EF0
  c->r[16]=c->r[0]&c->r[19]; // 80200EF4
  c->r[14]=c->r[16]|c->r[14]; // 80200EF8
  c->r[14]=c->r[18]+c->r[14]; // 80200EFC
  c->r[16]=c->r[0]&~c->r[15]; // 80200F00
  c->r[14]=c->r[14]+0x000007D6u; // 80200F04
  c->r[22]=rotl(c->r[14],9)&0xFFFFFFFFu; // 80200F08
  c->r[22]=c->r[22]+c->r[0]; // 80200F0C
  c->r[14]=c->r[22]&c->r[15]; // 80200F10
  c->r[14]=c->r[14]|c->r[16]; // 80200F14
  c->r[14]=c->r[17]+c->r[14]; // 80200F18
  c->r[19]=c->r[14]+0x00000D87u; // 80200F1C
  c->r[17]=rotl(c->r[19],14)&0xFFFFFFFFu; // 80200F20
  c->r[18]=c->r[30]+0x455A0000u; // 80200F24
  c->r[17]=c->r[17]+c->r[22]; // 80200F28
  c->r[14]=c->r[22]&~c->r[0]; // 80200F2C
  c->r[16]=c->r[17]&c->r[0]; // 80200F30
  c->r[15]=c->r[18]+c->r[15]; // 80200F34
  c->r[14]=c->r[16]|c->r[14]; // 80200F38
  c->r[19]=c->r[29]+0xA9E40000u; // 80200F3C
  c->r[15]=c->r[15]+c->r[14]; // 80200F40
  c->r[18]=c->r[28]+0xFCF00000u; // 80200F44
  c->r[15]=c->r[15]+0x000014EDu; // 80200F48
  c->r[0]=c->r[19]+c->r[0]; // 80200F4C
  c->r[21]=rotl(c->r[15],20)&0xFFFFFFFFu; // 80200F50
  c->r[14]=c->r[17]&~c->r[22]; // 80200F54
  c->r[21]=c->r[21]+c->r[17]; // 80200F58
  c->r[16]=c->r[27]+0x676F0000u; // 80200F5C
  c->r[20]=c->r[21]&c->r[22]; // 80200F60
  c->r[19]=c->r[18]+c->r[22]; // 80200F64
  c->r[14]=c->r[20]|c->r[14]; // 80200F68
  c->r[18]=c->r[16]+c->r[17]; // 80200F6C
  c->r[14]=c->r[0]+c->r[14]; // 80200F70
  c->r[15]=c->r[26]+0x8D2A0000u; // 80200F74
  c->r[0]=c->r[14]+0xFFFFE905u; // 80200F78
  c->r[22]=c->r[21]&~c->r[17]; // 80200F7C
  c->r[20]=rotl(c->r[0],5)&0xFFFFFFFFu; // 80200F80
  c->r[16]=c->r[15]+c->r[21]; // 80200F84
  c->r[20]=c->r[20]+c->r[21]; // 80200F88
  c->r[15]=c->r[7]+0xFFFA0000u; // 80200F8C
  c->r[17]=c->r[20]&c->r[17]; // 80200F90
  c->r[14]=c->r[30]+0x87720000u; // 80200F94
  c->r[22]=c->r[17]|c->r[22]; // 80200F98
  c->r[0]=c->r[6]+0x6D9D0000u; // 80200F9C
  c->r[19]=c->r[19]+c->r[22]; // 80200FA0
  c->r[17]=c->r[20]&~c->r[21]; // 80200FA4
  c->r[22]=c->r[19]+0xFFFFA3F8u; // 80200FA8
  c->r[23]=c->r[12]+0xFDE50000u; // 80200FAC
  c->r[19]=rotl(c->r[22],9)&0xFFFFFFFFu; // 80200FB0
  c->r[24]=c->r[4]+0xA4BF0000u; // 80200FB4
  c->r[19]=c->r[19]+c->r[20]; // 80200FB8
  c->r[21]=c->r[19]&c->r[21]; // 80200FBC
  c->r[17]=c->r[21]|c->r[17]; // 80200FC0
  c->r[17]=c->r[18]+c->r[17]; // 80200FC4
  c->r[21]=c->r[19]&~c->r[20]; // 80200FC8
  c->r[17]=c->r[17]+0x000002D9u; // 80200FCC
  c->r[17]=rotl(c->r[17],14)&0xFFFFFFFFu; // 80200FD0
  c->r[17]=c->r[17]+c->r[19]; // 80200FD4
  c->r[18]=c->r[17]&c->r[20]; // 80200FD8
  c->r[18]=c->r[18]|c->r[21]; // 80200FDC
  c->r[16]=c->r[16]+c->r[18]; // 80200FE0
  c->r[21]=c->r[16]+0x00004C8Au; // 80200FE4
  c->r[16]=rotl(c->r[21],20)&0xFFFFFFFFu; // 80200FE8
  c->r[16]=c->r[16]+c->r[17]; // 80200FEC
  c->r[18]=c->r[19]^c->r[16]; // 80200FF0
  c->r[18]=c->r[18]^c->r[17]; // 80200FF4
  c->r[18]=c->r[20]+c->r[18]; // 80200FF8
  c->r[20]=c->r[18]+c->r[15]; // 80200FFC
  c->r[20]=c->r[20]+0x00003942u; // 80201000
  c->r[15]=rotl(c->r[20],4)&0xFFFFFFFFu; // 80201004
  c->r[15]=c->r[15]+c->r[16]; // 80201008
  c->r[18]=c->r[17]^c->r[15]; // 8020100C
  c->r[18]=c->r[18]^c->r[16]; // 80201010
  c->r[18]=c->r[19]+c->r[18]; // 80201014
  c->r[19]=c->r[18]+c->r[14]; // 80201018
  c->r[19]=c->r[19]+0xFFFFF681u; // 8020101C
  c->r[14]=rotl(c->r[19],11)&0xFFFFFFFFu; // 80201020
  c->r[14]=c->r[14]+c->r[15]; // 80201024
  c->r[18]=c->r[16]^c->r[14]; // 80201028
  c->r[18]=c->r[18]^c->r[15]; // 8020102C
  c->r[17]=c->r[17]+c->r[18]; // 80201030
  c->r[17]=c->r[17]+c->r[0]; // 80201034
  c->r[17]=c->r[17]+0x00006122u; // 80201038
  c->r[22]=rotl(c->r[17],16)&0xFFFFFFFFu; // 8020103C
  c->r[22]=c->r[22]+c->r[14]; // 80201040
  c->r[0]=c->r[15]^c->r[22]; // 80201044
  c->r[0]=c->r[0]^c->r[14]; // 80201048
  c->r[0]=c->r[16]+c->r[0]; // 8020104C
  c->r[16]=c->r[0]+c->r[23]; // 80201050
  c->r[16]=c->r[16]+0x0000380Cu; // 80201054
  c->r[23]=rotl(c->r[16],23)&0xFFFFFFFFu; // 80201058
  c->r[23]=c->r[23]+c->r[22]; // 8020105C
  c->r[0]=c->r[14]^c->r[23]; // 80201060
  c->r[0]=c->r[0]^c->r[22]; // 80201064
  c->r[0]=c->r[15]+c->r[0]; // 80201068
  c->r[15]=c->r[0]+c->r[24]; // 8020106C
  c->r[15]=c->r[15]+0xFFFFEA44u; // 80201070
  c->r[24]=rotl(c->r[15],4)&0xFFFFFFFFu; // 80201074
  c->r[15]=c->r[10]+0x4BDF0000u; // 80201078
  c->r[24]=c->r[24]+c->r[23]; // 8020107C
  c->r[16]=c->r[27]+0xF6BB0000u; // 80201080
  c->r[0]=c->r[22]^c->r[24]; // 80201084
  c->r[17]=c->r[8]+0xBEC00000u; // 80201088
  c->r[0]=c->r[0]^c->r[23]; // 8020108C
  c->r[18]=c->r[29]+0x289B0000u; // 80201090
  c->r[0]=c->r[14]+c->r[0]; // 80201094
  c->r[19]=c->r[25]+0xEAA10000u; // 80201098
  c->r[14]=c->r[0]+c->r[15]; // 8020109C
  c->r[20]=c->r[11]+0xD9D50000u; // 802010A0
  c->r[14]=c->r[14]+0xFFFFCFA9u; // 802010A4
  c->r[0]=c->r[31]+0xD4EF0000u; // 802010A8
  c->r[21]=rotl(c->r[14],11)&0xFFFFFFFFu; // 802010AC
  W32(c->r[1]+0x00000048u,c->r[0]); // 802010B0
  c->r[21]=c->r[21]+c->r[24]; // 802010B4
  c->r[0]=c->r[5]+0x04880000u; // 802010B8
  c->r[15]=c->r[23]^c->r[21]; // 802010BC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 802010C0
  c->r[15]=c->r[15]^c->r[24]; // 802010C4
  c->r[0]=c->r[26]+0xE6DC0000u; // 802010C8
  c->r[15]=c->r[22]+c->r[15]; // 802010CC
  c->r[14]=c->r[9]+0x1FA20000u; // 802010D0
  c->r[22]=c->r[15]+c->r[16]; // 802010D4
  c->r[22]=c->r[22]+0x00004B60u; // 802010D8
  c->r[15]=rotl(c->r[22],16)&0xFFFFFFFFu; // 802010DC
  c->r[15]=c->r[15]+c->r[21]; // 802010E0
  c->r[16]=c->r[24]^c->r[15]; // 802010E4
  c->r[16]=c->r[16]^c->r[21]; // 802010E8
  c->r[16]=c->r[23]+c->r[16]; // 802010EC
  c->r[23]=c->r[16]+c->r[17]; // 802010F0
  c->r[23]=c->r[23]+0xFFFFBC70u; // 802010F4
  c->r[17]=rotl(c->r[23],23)&0xFFFFFFFFu; // 802010F8
  c->r[17]=c->r[17]+c->r[15]; // 802010FC
  c->r[16]=c->r[21]^c->r[17]; // 80201100
  c->r[16]=c->r[16]^c->r[15]; // 80201104
  c->r[16]=c->r[24]+c->r[16]; // 80201108
  c->r[24]=c->r[16]+c->r[18]; // 8020110C
  c->r[24]=c->r[24]+0x00007EC6u; // 80201110
  c->r[16]=rotl(c->r[24],4)&0xFFFFFFFFu; // 80201114
  c->r[16]=c->r[16]+c->r[17]; // 80201118
  c->r[18]=c->r[15]^c->r[16]; // 8020111C
  c->r[18]=c->r[18]^c->r[17]; // 80201120
  c->r[18]=c->r[21]+c->r[18]; // 80201124
  c->r[21]=c->r[18]+c->r[19]; // 80201128
  c->r[21]=c->r[21]+0x000027FAu; // 8020112C
  c->r[19]=rotl(c->r[21],11)&0xFFFFFFFFu; // 80201130
  c->r[19]=c->r[19]+c->r[16]; // 80201134
  c->r[18]=c->r[17]^c->r[19]; // 80201138
  c->r[18]=c->r[18]^c->r[16]; // 8020113C
  c->r[18]=c->r[15]+c->r[18]; // 80201140
  c->r[15]=R32(c->r[1]+0x00000048u); // 80201144
  c->r[15]=c->r[18]+c->r[15]; // 80201148
  c->r[15]=c->r[15]+0x00003085u; // 8020114C
  c->r[18]=rotl(c->r[15],16)&0xFFFFFFFFu; // 80201150
  c->r[18]=c->r[18]+c->r[19]; // 80201154
  c->r[15]=c->r[16]^c->r[18]; // 80201158
  c->r[15]=c->r[15]^c->r[19]; // 8020115C
  c->r[17]=c->r[17]+c->r[15]; // 80201160
  c->r[15]=R32(c->r[1]+0x0000004Cu); // 80201164
  c->r[17]=c->r[17]+c->r[15]; // 80201168
  c->r[17]=c->r[17]+0x00001D05u; // 8020116C
  c->r[17]=rotl(c->r[17],23)&0xFFFFFFFFu; // 80201170
  c->r[17]=c->r[17]+c->r[18]; // 80201174
  c->r[15]=c->r[19]^c->r[17]; // 80201178
  c->r[15]=c->r[15]^c->r[18]; // 8020117C
  c->r[15]=c->r[16]+c->r[15]; // 80201180
  c->r[16]=c->r[15]+c->r[20]; // 80201184
  c->r[16]=c->r[16]+0xFFFFD039u; // 80201188
  c->r[15]=rotl(c->r[16],4)&0xFFFFFFFFu; // 8020118C
  c->r[15]=c->r[15]+c->r[17]; // 80201190
  c->r[16]=c->r[18]^c->r[15]; // 80201194
  c->r[16]=c->r[16]^c->r[17]; // 80201198
  c->r[16]=c->r[19]+c->r[16]; // 8020119C
  c->r[19]=c->r[16]+c->r[0]; // 802011A0
  c->r[19]=c->r[19]+0xFFFF99E5u; // 802011A4
  c->r[0]=rotl(c->r[19],11)&0xFFFFFFFFu; // 802011A8
  c->r[0]=c->r[0]+c->r[15]; // 802011AC
  c->r[16]=c->r[17]^c->r[0]; // 802011B0
  c->r[16]=c->r[16]^c->r[15]; // 802011B4
  c->r[16]=c->r[18]+c->r[16]; // 802011B8
  c->r[18]=c->r[16]+c->r[14]; // 802011BC
  c->r[18]=c->r[18]+0x00007CF8u; // 802011C0
  c->r[18]=rotl(c->r[18],16)&0xFFFFFFFFu; // 802011C4
  c->r[18]=c->r[18]+c->r[0]; // 802011C8
  c->r[14]=c->r[27]+0x432B0000u; // 802011CC
  c->r[19]=c->r[15]^c->r[18]; // 802011D0
  c->r[16]=c->r[25]+0xF4290000u; // 802011D4
  c->r[20]=c->r[19]^c->r[0]; // 802011D8
  c->r[12]=c->r[12]+0xAB940000u; // 802011DC
  c->r[15]=c->r[16]+c->r[15]; // 802011E0
  c->r[19]=c->r[28]+0xC4AC0000u; // 802011E4
  c->r[16]=c->r[17]+c->r[20]; // 802011E8
  c->r[14]=c->r[14]+c->r[0]; // 802011EC
  c->r[17]=c->r[16]+c->r[19]; // 802011F0
  c->r[20]=c->r[8]+0xFFF00000u; // 802011F4
  c->r[17]=c->r[17]+0x00005665u; // 802011F8
  c->r[19]=c->r[4]+0x85840000u; // 802011FC
  c->r[16]=rotl(c->r[17],23)&0xFFFFFFFFu; // 80201200
  c->r[12]=c->r[12]+c->r[18]; // 80201204
  c->r[16]=c->r[16]+c->r[18]; // 80201208
  c->r[7]=c->r[7]+0xFC940000u; // 8020120C
  c->r[0]=c->r[16]|~c->r[0]; // 80201210
  c->r[22]=c->r[26]+0x655B0000u; // 80201214
  c->r[0]=c->r[18]^c->r[0]; // 80201218
  c->r[7]=c->r[7]+c->r[16]; // 8020121C
  c->r[8]=c->r[15]+c->r[0]; // 80201220
  c->r[21]=c->r[31]+0x8F0D0000u; // 80201224
  c->r[15]=c->r[8]+0x00002244u; // 80201228
  c->r[17]=c->r[30]+0x6FA80000u; // 8020122C
  c->r[4]=rotl(c->r[15],6)&0xFFFFFFFFu; // 80201230
  c->r[4]=c->r[4]+c->r[16]; // 80201234
  c->r[0]=c->r[4]|~c->r[18]; // 80201238
  c->r[0]=c->r[16]^c->r[0]; // 8020123C
  c->r[22]=c->r[22]+c->r[4]; // 80201240
  c->r[8]=c->r[14]+c->r[0]; // 80201244
  c->r[0]=c->r[8]+0xFFFFFF97u; // 80201248
  c->r[8]=rotl(c->r[0],10)&0xFFFFFFFFu; // 8020124C
  c->r[8]=c->r[8]+c->r[4]; // 80201250
  c->r[0]=c->r[8]|~c->r[16]; // 80201254
  c->r[0]=c->r[4]^c->r[0]; // 80201258
  c->r[15]=c->r[21]+c->r[8]; // 8020125C
  c->r[12]=c->r[12]+c->r[0]; // 80201260
  c->r[18]=c->r[12]+0x000023A7u; // 80201264
  c->r[0]=rotl(c->r[18],15)&0xFFFFFFFFu; // 80201268
  c->r[0]=c->r[0]+c->r[8]; // 8020126C
  c->r[4]=c->r[0]|~c->r[4]; // 80201270
  c->r[4]=c->r[8]^c->r[4]; // 80201274
  c->r[14]=c->r[20]+c->r[0]; // 80201278
  c->r[4]=c->r[7]+c->r[4]; // 8020127C
  c->r[16]=c->r[4]+0xFFFFA039u; // 80201280
  c->r[18]=rotl(c->r[16],21)&0xFFFFFFFFu; // 80201284
  c->r[18]=c->r[18]+c->r[0]; // 80201288
  c->r[4]=c->r[18]|~c->r[8]; // 8020128C
  c->r[4]=c->r[0]^c->r[4]; // 80201290
  c->r[7]=c->r[19]+c->r[18]; // 80201294
  c->r[4]=c->r[22]+c->r[4]; // 80201298
  c->r[4]=c->r[4]+0x000059C3u; // 8020129C
  c->r[16]=rotl(c->r[4],6)&0xFFFFFFFFu; // 802012A0
  c->r[16]=c->r[16]+c->r[18]; // 802012A4
  c->r[0]=c->r[16]|~c->r[0]; // 802012A8
  c->r[0]=c->r[18]^c->r[0]; // 802012AC
  c->r[12]=c->r[17]+c->r[16]; // 802012B0
  c->r[4]=c->r[15]+c->r[0]; // 802012B4
  c->r[8]=c->r[4]+0xFFFFCC92u; // 802012B8
  c->r[8]=rotl(c->r[8],10)&0xFFFFFFFFu; // 802012BC
  c->r[8]=c->r[8]+c->r[16]; // 802012C0
  c->r[0]=c->r[8]|~c->r[18]; // 802012C4
  c->r[0]=c->r[16]^c->r[0]; // 802012C8
  c->r[4]=c->r[14]+c->r[0]; // 802012CC
  c->r[0]=c->r[4]+0xFFFFF47Du; // 802012D0
  c->r[4]=rotl(c->r[0],15)&0xFFFFFFFFu; // 802012D4
  c->r[4]=c->r[4]+c->r[8]; // 802012D8
  c->r[0]=c->r[4]|~c->r[16]; // 802012DC
  c->r[0]=c->r[8]^c->r[0]; // 802012E0
  c->r[7]=c->r[7]+c->r[0]; // 802012E4
  c->r[18]=c->r[7]+0x00005DD1u; // 802012E8
  c->r[7]=rotl(c->r[18],21)&0xFFFFFFFFu; // 802012EC
  c->r[7]=c->r[7]+c->r[4]; // 802012F0
  c->r[0]=c->r[7]|~c->r[8]; // 802012F4
  c->r[0]=c->r[4]^c->r[0]; // 802012F8
  c->r[12]=c->r[12]+c->r[0]; // 802012FC
  c->r[16]=c->r[12]+0x00007E4Fu; // 80201300
  c->r[0]=rotl(c->r[16],6)&0xFFFFFFFFu; // 80201304
  c->r[0]=c->r[0]+c->r[7]; // 80201308
  c->r[12]=c->r[9]+0xFE2D0000u; // 8020130C
  c->r[9]=c->r[0]|~c->r[4]; // 80201310
  c->r[8]=c->r[12]+c->r[8]; // 80201314
  c->r[12]=c->r[5]+0xA3010000u; // 80201318
  c->r[5]=c->r[7]^c->r[9]; // 8020131C
  c->r[8]=c->r[8]+c->r[5]; // 80201320
  c->r[9]=c->r[29]+0x4E080000u; // 80201324
  c->r[8]=c->r[8]+0xFFFFE6E0u; // 80201328
  c->r[5]=c->r[10]+0xF7530000u; // 8020132C
  c->r[8]=rotl(c->r[8],10)&0xFFFFFFFFu; // 80201330
  c->r[10]=c->r[12]+c->r[4]; // 80201334
  c->r[8]=c->r[8]+c->r[0]; // 80201338
  c->r[4]=c->r[6]+0xBD3B0000u; // 8020133C
  c->r[6]=c->r[8]|~c->r[7]; // 80201340
  c->r[16]=c->r[5]+c->r[0]; // 80201344
  c->r[5]=c->r[0]^c->r[6]; // 80201348
  c->r[15]=c->r[4]+c->r[8]; // 8020134C
  c->r[4]=c->r[10]+c->r[5]; // 80201350
  c->r[17]=c->r[9]+c->r[7]; // 80201354
  c->r[4]=c->r[4]+0x00004314u; // 80201358
  c->r[12]=c->r[11]+0xEB870000u; // 8020135C
  c->r[18]=rotl(c->r[4],15)&0xFFFFFFFFu; // 80201360
  c->r[11]=R32(c->r[3]+0x00000000u); // 80201364
  c->r[18]=c->r[18]+c->r[8]; // 80201368
  c->r[5]=c->r[28]+0x2AD80000u; // 8020136C
  c->r[0]=c->r[18]|~c->r[0]; // 80201370
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 80201374
  c->r[0]=c->r[8]^c->r[0]; // 80201378
  c->r[14]=c->r[5]+c->r[18]; // 8020137C
  c->r[4]=c->r[17]+c->r[0]; // 80201380
  c->r[9]=R32(c->r[3]+0x00000008u); // 80201384
  c->r[7]=c->r[4]+0x000011A1u; // 80201388
  c->r[10]=R32(c->r[3]+0x00000004u); // 8020138C
  c->r[17]=rotl(c->r[7],21)&0xFFFFFFFFu; // 80201390
  c->r[4]=0u+0x00000000u; // 80201394
  c->r[17]=c->r[17]+c->r[18]; // 80201398
  c->r[5]=0u+0x00000040u; // 8020139C
  c->r[0]=c->r[17]|~c->r[8]; // 802013A0
  c->r[0]=c->r[18]^c->r[0]; // 802013A4
  c->r[7]=c->r[12]+c->r[17]; // 802013A8
  c->r[8]=c->r[16]+c->r[0]; // 802013AC
  c->r[0]=c->r[8]+0x00007E82u; // 802013B0
  c->r[12]=rotl(c->r[0],6)&0xFFFFFFFFu; // 802013B4
  c->r[12]=c->r[12]+c->r[17]; // 802013B8
  c->r[0]=c->r[12]|~c->r[18]; // 802013BC
  c->r[8]=c->r[17]^c->r[0]; // 802013C0
  c->r[8]=c->r[15]+c->r[8]; // 802013C4
  c->r[0]=c->r[11]+c->r[12]; // 802013C8
  c->r[8]=c->r[8]+0xFFFFF235u; // 802013CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 802013D0
  c->r[11]=rotl(c->r[8],10)&0xFFFFFFFFu; // 802013D4
  c->r[11]=c->r[11]+c->r[12]; // 802013D8
  c->r[0]=c->r[11]|~c->r[17]; // 802013DC
  c->r[8]=c->r[12]^c->r[0]; // 802013E0
  c->r[0]=c->r[6]+c->r[11]; // 802013E4
  c->r[6]=c->r[14]+c->r[8]; // 802013E8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802013EC
  c->r[18]=c->r[6]+0xFFFFD2BBu; // 802013F0
  c->r[8]=rotl(c->r[18],15)&0xFFFFFFFFu; // 802013F4
  c->r[8]=c->r[8]+c->r[11]; // 802013F8
  c->r[0]=c->r[8]|~c->r[12]; // 802013FC
  c->r[6]=c->r[11]^c->r[0]; // 80201400
  c->r[6]=c->r[7]+c->r[6]; // 80201404
  c->r[0]=c->r[9]+c->r[8]; // 80201408
  c->r[17]=c->r[6]+0xFFFFD391u; // 8020140C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80201410
  c->r[0]=rotl(c->r[17],21)&0xFFFFFFFFu; // 80201414
  c->r[0]=c->r[0]+c->r[8]; // 80201418
  c->r[0]=c->r[10]+c->r[0]; // 8020141C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80201420
  c->r[3]=c->r[1]+0x00000008u; // 80201424
  c->lr=0x8020142Cu; f_802014C4(c); // 80201428
  c->r[11]=c->r[1]+0x000000A0u; // 8020142C
  c->lr=0x80201434u; f_80109F50(c); // 80201430
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80201434
  c->lr=c->r[0]; // 80201438
  c->r[1]=c->r[1]+0x000000A0u; // 8020143C
  return; // 80201440
}

// fn_80201444
void f_80201444(Ctx* __restrict c) {
  c->r[0]=c->r[5]+0x00000003u; // 80201444
  c->r[6]=0u+0x00000000u; // 80201448
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020144C
  c->r[7]=0u+0x00000000u; // 80201450
  c->ctr=c->r[0]; // 80201454
  cmpu(c,0,c->r[5],0x00000000u); // 80201458
  if (!crb(c,1)) return; // 8020145C
L_80201460:;
  c->r[0]=R32(c->r[4]+c->r[6]); // 80201460
  c->r[5]=c->r[3]+c->r[7]; // 80201464
  W8(c->r[3]+c->r[7],c->r[0]); // 80201468
  c->r[7]=c->r[7]+0x00000004u; // 8020146C
  c->r[0]=R32(c->r[4]+c->r[6]); // 80201470
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 80201474
  W8(c->r[5]+0x00000001u,c->r[0]); // 80201478
  c->r[0]=R32(c->r[4]+c->r[6]); // 8020147C
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 80201480
  W8(c->r[5]+0x00000002u,c->r[0]); // 80201484
  c->r[0]=R32(c->r[4]+c->r[6]); // 80201488
  c->r[6]=c->r[6]+0x00000004u; // 8020148C
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 80201490
  W8(c->r[5]+0x00000003u,c->r[0]); // 80201494
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80201460; } // 80201498
  return; // 8020149C
}

// fn_802014A0
void f_802014A0(Ctx* __restrict c) {
  c->ctr=c->r[5]; // 802014A0
  cmpu(c,0,c->r[5],0x00000000u); // 802014A4
  if (!crb(c,1)) return; // 802014A8
L_802014AC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 802014AC
  c->r[4]=c->r[4]+0x00000001u; // 802014B0
  W8(c->r[3]+0x00000000u,c->r[0]); // 802014B4
  c->r[3]=c->r[3]+0x00000001u; // 802014B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802014AC; } // 802014BC
  return; // 802014C0
}

// fn_802014C4
void f_802014C4(Ctx* __restrict c) {
  c->ctr=c->r[5]; // 802014C4
  cmpu(c,0,c->r[5],0x00000000u); // 802014C8
  if (!crb(c,1)) return; // 802014CC
L_802014D0:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 802014D0
  c->r[3]=c->r[3]+0x00000001u; // 802014D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802014D0; } // 802014D8
  return; // 802014DC
}

// fn_802014E0
void f_802014E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802014E0
  c->r[0]=c->lr; // 802014E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802014E8
  c->r[11]=c->r[1]+0x00000020u; // 802014EC
  c->lr=0x802014F4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802014F0
  c->r[29]=c->r[3]|c->r[3]; // 802014F4
  c->r[30]=c->r[4]|c->r[4]; // 802014F8
  c->r[31]=c->r[6]|c->r[6]; // 802014FC
  c->lr=0x80201504u; f_800E61D8(c); // 80201500
  cmps(c,0,(int32_t)c->r[31],0); // 80201504
  W32(c->r[29]+0x00000018u,c->r[30]); // 80201508
  if (crb(c,2)) { goto L_80201518; } // 8020150C
  c->lr=0x80201514u; f_800E7B90(c); // 80201510
  goto L_8020151C; // 80201514
L_80201518:;
  c->r[3]=0u+0x00000000u; // 80201518
L_8020151C:;
  c->r[0]=addc(c,c->r[31],0xFFFFFFFFu,0); // 8020151C
  cmps(c,0,(int32_t)c->r[31],0); // 80201520
  c->r[0]=addc(c,~c->r[0],c->r[31],c->xer_ca); // 80201524
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 80201528
  W32(c->r[29]+0x00000020u,c->r[0]); // 8020152C
  if (crb(c,2)) { goto L_8020153C; } // 80201530
  c->r[3]=c->r[29]|c->r[29]; // 80201534
  c->lr=0x8020153Cu; f_800E6210(c); // 80201538
L_8020153C:;
  c->r[11]=c->r[1]+0x00000020u; // 8020153C
  c->r[3]=0u+0x00000000u; // 80201540
  c->lr=0x80201548u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201544
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201548
  c->lr=c->r[0]; // 8020154C
  c->r[1]=c->r[1]+0x00000020u; // 80201550
  return; // 80201554
}

// fn_80201558
void f_80201558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201558
  c->r[0]=c->lr; // 8020155C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201560
  c->r[11]=c->r[1]+0x00000020u; // 80201564
  c->lr=0x8020156Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201568
  c->r[29]=c->r[3]|c->r[3]; // 8020156C
  c->r[30]=0u+0x00000000u; // 80201570
  c->lr=0x80201578u; f_800E7B90(c); // 80201574
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 80201578
  c->r[31]=c->r[3]|c->r[3]; // 8020157C
  cmpu(c,0,c->r[0],c->r[3]); // 80201580
  if (!crb(c,2)) { goto L_8020159C; } // 80201584
  c->r[0]=R32(c->r[29]+0x00000018u); // 80201588
  cmpu(c,0,c->r[0],0x00000001u); // 8020158C
  if (crb(c,2)) { goto L_8020159C; } // 80201590
  c->r[30]=0u+0xFFFFFFDDu; // 80201594
  goto L_802015B4; // 80201598
L_8020159C:;
  c->r[3]=c->r[29]|c->r[29]; // 8020159C
  c->lr=0x802015A4u; f_800E6210(c); // 802015A0
  c->r[3]=R32(c->r[29]+0x00000020u); // 802015A4
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 802015A8
  c->r[0]=c->r[3]+0x00000001u; // 802015AC
  W32(c->r[29]+0x00000020u,c->r[0]); // 802015B0
L_802015B4:;
  c->r[11]=c->r[1]+0x00000020u; // 802015B4
  c->r[3]=c->r[30]|c->r[30]; // 802015B8
  c->lr=0x802015C0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802015BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802015C0
  c->lr=c->r[0]; // 802015C4
  c->r[1]=c->r[1]+0x00000020u; // 802015C8
  return; // 802015CC
}

// fn_802015D0
void f_802015D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802015D0
  c->r[0]=c->lr; // 802015D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802015D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802015DC
  c->r[31]=0u+0x00000000u; // 802015E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802015E4
  c->r[30]=c->r[3]|c->r[3]; // 802015E8
  c->lr=0x802015F0u; f_800E7B90(c); // 802015EC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 802015F0
  cmpu(c,0,c->r[0],c->r[3]); // 802015F4
  if (crb(c,2)) { goto L_80201614; } // 802015F8
  c->r[3]=0u+0x802A0000u; // 802015FC
  c->r[3]=c->r[3]+0x00002E08u; // 80201600
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201604
  c->lr=0x8020160Cu; f_80112618(c); // 80201608
  c->r[31]=0u+0xFFFFFFFFu; // 8020160C
  goto L_80201634; // 80201610
L_80201614:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 80201614
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80201618
  W32(c->r[30]+0x00000020u,c->r[0]); // 8020161C
  if (!crb(c,2)) { goto L_8020162C; } // 80201620
  c->r[0]=0u+0x00000000u; // 80201624
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80201628
L_8020162C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020162C
  c->lr=0x80201634u; f_800E62EC(c); // 80201630
L_80201634:;
  c->r[3]=c->r[31]|c->r[31]; // 80201634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80201638
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020163C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201640
  c->lr=c->r[0]; // 80201644
  c->r[1]=c->r[1]+0x00000010u; // 80201648
  return; // 8020164C
}

// fn_80201650
void f_80201650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201650
  c->r[0]=c->lr; // 80201654
  W32(c->r[1]+0x00000014u,c->r[0]); // 80201658
  c->lr=0x80201660u; f_800E56F0(c); // 8020165C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201660
  c->r[3]=0u+0x00000000u; // 80201664
  c->lr=c->r[0]; // 80201668
  c->r[1]=c->r[1]+0x00000010u; // 8020166C
  return; // 80201670
}

// fn_80201674
void f_80201674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201674
  c->r[0]=c->lr; // 80201678
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020167C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80201680
  c->r[31]=0u+0x00000000u; // 80201684
  c->lr=0x8020168Cu; f_800E5750(c); // 80201688
  cmps(c,0,(int32_t)c->r[3],0); // 8020168C
  if (!crb(c,2)) { goto L_80201698; } // 80201690
  c->r[31]=0u+0xFFFFFF01u; // 80201694
L_80201698:;
  c->r[3]=c->r[31]|c->r[31]; // 80201698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020169C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802016A0
  c->lr=c->r[0]; // 802016A4
  c->r[1]=c->r[1]+0x00000010u; // 802016A8
  return; // 802016AC
}

// fn_802016B0
void f_802016B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802016B0
  c->r[0]=c->lr; // 802016B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802016B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802016BC
  c->r[31]=0u+0x00000000u; // 802016C0
  c->lr=0x802016C8u; f_800E5818(c); // 802016C4
  cmps(c,0,(int32_t)c->r[3],0); // 802016C8
  if (!crb(c,2)) { goto L_802016D4; } // 802016CC
  c->r[31]=0u+0xFFFFFF01u; // 802016D0
L_802016D4:;
  c->r[3]=c->r[31]|c->r[31]; // 802016D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802016D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802016DC
  c->lr=c->r[0]; // 802016E0
  c->r[1]=c->r[1]+0x00000010u; // 802016E4
  return; // 802016E8
}

// fn_802016EC
void f_802016EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802016EC
  c->r[0]=c->lr; // 802016F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802016F4
  c->r[11]=c->r[1]+0x00000020u; // 802016F8
  c->lr=0x80201700u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802016FC
  cmps(c,0,(int32_t)c->r[4],0); // 80201700
  c->r[29]=c->r[3]|c->r[3]; // 80201704
  c->r[30]=c->r[4]|c->r[4]; // 80201708
  c->r[31]=0u+0x00000000u; // 8020170C
  if (crb(c,2)) { goto L_80201724; } // 80201710
  c->r[7]=R32(c->r[4]+0x00000004u); // 80201714
  c->r[0]=R32(c->r[4]+0x00000000u); // 80201718
  c->r[0]=c->r[0]+c->r[7]; // 8020171C
  goto L_8020173C; // 80201720
L_80201724:;
  c->r[3]=0u+0x802A0000u; // 80201724
  c->r[3]=c->r[3]+0x00002E3Du; // 80201728
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020172C
  c->lr=0x80201734u; f_80112618(c); // 80201730
  c->r[31]=0u+0xFFFFFF01u; // 80201734
  goto L_80201768; // 80201738
L_8020173C:;
  c->r[8]=R32(c->r[30]+0x00000008u); // 8020173C
  c->r[4]=c->r[5]|c->r[5]; // 80201740
  c->r[5]=c->r[6]|c->r[6]; // 80201744
  c->r[6]=c->r[0]|c->r[0]; // 80201748
  c->r[9]=0u+0x00000000u; // 8020174C
  c->lr=0x80201754u; f_800E8164(c); // 80201750
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80201754
  cmps(c,0,(int32_t)c->r[0],0); // 80201758
  if (crb(c,2)) { goto L_80201768; } // 8020175C
  c->r[3]=c->r[29]|c->r[29]; // 80201760
  c->lr=0x80201768u; f_800E87CC(c); // 80201764
L_80201768:;
  c->r[11]=c->r[1]+0x00000020u; // 80201768
  c->r[3]=c->r[31]|c->r[31]; // 8020176C
  c->lr=0x80201774u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201770
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201774
  c->lr=c->r[0]; // 80201778
  c->r[1]=c->r[1]+0x00000020u; // 8020177C
  return; // 80201780
}

// fn_80201784
void f_80201784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201784
  c->r[0]=c->lr; // 80201788
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020178C
  c->lr=0x80201794u; f_800E868C(c); // 80201790
  c->r[0]=R32(c->r[1]+0x00000014u); // 80201794
  c->r[3]=0u+0x00000000u; // 80201798
  c->lr=c->r[0]; // 8020179C
  c->r[1]=c->r[1]+0x00000010u; // 802017A0
  return; // 802017A4
}

// fn_802017A8
void f_802017A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802017A8
  c->r[0]=c->lr; // 802017AC
  c->r[4]=0u+0x80000000u; // 802017B0
  c->r[6]=0u+0x00000000u; // 802017B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802017B8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[6]); // 802017BC
  c->r[5]=R32(c->r[4]+0x000000F8u); // 802017C0
  c->r[4]=0u+0x000003E8u; // 802017C4
  c->r[5]=rotl(c->r[5],30)&0x3FFFFFFFu; // 802017C8
  c->r[4]=divwu(c->r[5],c->r[4]); // 802017CC
  c->r[5]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 802017D0
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 802017D4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 802017D8
  c->r[3]=c->r[5]+c->r[6]; // 802017DC
  c->r[3]=c->r[3]+c->r[0]; // 802017E0
  c->lr=0x802017E8u; f_800E8EE8(c); // 802017E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802017E8
  c->r[3]=0u+0x00000000u; // 802017EC
  c->lr=c->r[0]; // 802017F0
  c->r[1]=c->r[1]+0x00000010u; // 802017F4
  return; // 802017F8
}

// fn_802017FC
void f_802017FC(Ctx* __restrict c) {
  f_800E8F9C(c); return; // 802017FC
}

// fn_80201800
void f_80201800(Ctx* __restrict c) {
  c->r[5]=0u+0x80000000u; // 80201800
  c->r[0]=0u+0x000003E8u; // 80201804
  c->r[6]=R32(c->r[5]+0x000000F8u); // 80201808
  c->r[5]=0u+0x00000000u; // 8020180C
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 80201810
  c->r[6]=divwu(c->r[6],c->r[0]); // 80201814
  f_80109F9C(c); return; // 80201818
}

// fn_8020181C
void f_8020181C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020181C
  c->r[0]=c->lr; // 80201820
  W32(c->r[1]+0x00000034u,c->r[0]); // 80201824
  c->r[11]=c->r[1]+0x00000030u; // 80201828
  c->lr=0x80201830u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020182C
  c->r[31]=c->r[1]|c->r[1]; // 80201830
  c->r[5]=0u+0x80380000u; // 80201834
  c->r[30]=0u+0x802A0000u; // 80201838
  c->r[0]=R32(c->r[5]+0x000025E8u); // 8020183C
  c->r[30]=c->r[30]+0x00002E68u; // 80201840
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80201844
  cmps(c,0,(int32_t)c->r[0],0); // 80201848
  if (crb(c,2)) { goto L_80201858; } // 8020184C
  c->r[3]=0u+0xFFFFF039u; // 80201850
  goto L_802018F8; // 80201854
L_80201858:;
  cmps(c,0,(int32_t)c->r[4],0); // 80201858
  if (crb(c,2)) { goto L_80201870; } // 8020185C
  cmps(c,0,(int32_t)c->r[3],0); // 80201860
  if (!crb(c,2)) { goto L_80201870; } // 80201864
  c->r[3]=0u+0xFFFFF05Cu; // 80201868
  goto L_802018F8; // 8020186C
L_80201870:;
  c->lr=0x80201874u; f_8021A9CC(c); // 80201870
  cmps(c,0,(int32_t)c->r[3],0); // 80201874
  c->r[29]=c->r[3]|c->r[3]; // 80201878
  if (!crb(c,2)) { goto L_80201890; } // 8020187C
  c->r[3]=0u+0x80380000u; // 80201880
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80201884
  c->lr=0x8020188Cu; f_80203AE0(c); // 80201888
  c->r[29]=c->r[3]|c->r[3]; // 8020188C
L_80201890:;
  c->r[5]=R32(c->r[30]+0x00000038u); // 80201890
  c->r[4]=c->r[30]+0x00000085u; // 80201894
  c->r[3]=0u+0x00000003u; // 80201898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020189C
  c->lr=0x802018A4u; f_8020B328(c); // 802018A0
  goto L_802018F4; // 802018A4
  c->r[4]=c->r[30]+0x000000A1u; // 802018A8
  c->r[3]=0u+0x00000001u; // 802018AC
  c->r[5]=0u+0x00000038u; // 802018B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802018B4
  c->lr=0x802018BCu; f_8020B328(c); // 802018B8
  c->r[29]=0u+0xFFFFF05Bu; // 802018BC
  goto L_802018DC; // 802018C0
  c->r[4]=c->r[30]+0x000000FEu; // 802018C4
  c->r[3]=0u+0x00000001u; // 802018C8
  c->r[5]=0u+0x00000038u; // 802018CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802018D0
  c->lr=0x802018D8u; f_8020B328(c); // 802018D4
  c->r[29]=0u+0xFFFFF05Fu; // 802018D8
L_802018DC:;
  c->r[3]=c->r[31]+0x00000008u; // 802018DC
  c->lr=0x802018E4u; f_8010BF74(c); // 802018E0
  c->r[0]=c->r[0]|0x00000000u; // 802018E4
  c->r[0]=R32(c->r[1]+0x00000000u); // 802018E8
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 802018EC
  W32(c->r[1]+0x00000000u,c->r[0]); // 802018F0
L_802018F4:;
  c->r[3]=c->r[29]|c->r[29]; // 802018F4
L_802018F8:;
  c->r[10]=c->r[31]|c->r[31]; // 802018F8
  c->r[11]=c->r[10]+0x00000030u; // 802018FC
  c->lr=0x80201904u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201900
  c->r[10]=R32(c->r[1]+0x00000000u); // 80201904
  c->r[0]=R32(c->r[10]+0x00000004u); // 80201908
  c->r[1]=c->r[10]|c->r[10]; // 8020190C
  c->lr=c->r[0]; // 80201910
  return; // 80201914
}

// fn_80201918
void f_80201918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201918
  c->r[0]=c->lr; // 8020191C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80201920
  c->r[11]=c->r[1]+0x00000040u; // 80201924
  c->lr=0x8020192Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201928
  c->r[31]=c->r[1]|c->r[1]; // 8020192C
  c->r[29]=0u+0x80380000u; // 80201930
  c->r[28]=0u+0x802A0000u; // 80201934
  c->r[0]=R32(c->r[29]+0x000025E8u); // 80201938
  c->r[28]=c->r[28]+0x00002E68u; // 8020193C
  cmps(c,0,(int32_t)c->r[0],0); // 80201940
  if (!crb(c,2)) { goto L_80201950; } // 80201944
  c->r[3]=0u+0x00000000u; // 80201948
  goto L_80201BD0; // 8020194C
L_80201950:;
  W32(c->r[31]+0x00000020u,c->r[1]); // 80201950
  c->lr=0x80201958u; f_8020EA54(c); // 80201954
  c->r[3]=R32(c->r[29]+0x000025E8u); // 80201958
  c->lr=0x80201960u; f_80203CD8(c); // 8020195C
  cmps(c,0,(int32_t)c->r[3],0); // 80201960
  c->r[30]=c->r[3]|c->r[3]; // 80201964
  if (!crb(c,2)) { goto L_80201B78; } // 80201968
  c->lr=0x80201970u; f_8021B2B8(c); // 8020196C
  cmps(c,0,(int32_t)c->r[3],0); // 80201970
  c->r[30]=c->r[3]|c->r[3]; // 80201974
  if (!crb(c,2)) { goto L_80201B78; } // 80201978
  c->r[26]=R32(c->r[29]+0x000025E8u); // 8020197C
  cmps(c,0,(int32_t)c->r[26],0); // 80201980
  if (crb(c,2)) { goto L_80201B6C; } // 80201984
  c->r[29]=0u+0xFFFFFFFFu; // 80201988
  c->r[3]=c->r[26]+0x00000214u; // 8020198C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201990
  c->lr=0x80201998u; f_802030B0(c); // 80201994
  c->r[3]=c->r[26]+0x00000208u; // 80201998
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 8020199C
  c->lr=0x802019A4u; f_802030B0(c); // 802019A0
  c->r[3]=c->r[26]+0x000001FCu; // 802019A4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 802019A8
  c->lr=0x802019B0u; f_802030B0(c); // 802019AC
  c->r[3]=c->r[26]+0x000001B4u; // 802019B0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 802019B4
  c->lr=0x802019BCu; f_802030B0(c); // 802019B8
  c->r[3]=c->r[26]+0x000001A0u; // 802019BC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 802019C0
  c->lr=0x802019C8u; f_802030B0(c); // 802019C4
  c->r[3]=c->r[26]+0x00000194u; // 802019C8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 802019CC
  c->lr=0x802019D4u; f_802030B0(c); // 802019D0
  c->r[3]=c->r[26]+0x0000017Cu; // 802019D4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 802019D8
  c->lr=0x802019E0u; f_802030B0(c); // 802019DC
  c->r[3]=c->r[26]+0x00000170u; // 802019E0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 802019E4
  c->lr=0x802019ECu; f_802030B0(c); // 802019E8
  c->r[3]=c->r[26]+0x0000013Cu; // 802019EC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 802019F0
  c->lr=0x802019F8u; f_802030B0(c); // 802019F4
  c->r[3]=c->r[26]+0x00000130u; // 802019F8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 802019FC
  c->lr=0x80201A04u; f_802030B0(c); // 80201A00
  c->r[3]=c->r[26]+0x00000124u; // 80201A04
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A08
  c->lr=0x80201A10u; f_802030B0(c); // 80201A0C
  c->r[3]=c->r[26]+0x00000118u; // 80201A10
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A14
  c->lr=0x80201A1Cu; f_802030B0(c); // 80201A18
  c->r[3]=c->r[26]+0x0000010Cu; // 80201A1C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A20
  c->lr=0x80201A28u; f_802030B0(c); // 80201A24
  c->r[3]=c->r[26]+0x00000100u; // 80201A28
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A2C
  c->lr=0x80201A34u; f_802030B0(c); // 80201A30
  c->r[3]=c->r[26]+0x000000F4u; // 80201A34
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A38
  c->lr=0x80201A40u; f_802030B0(c); // 80201A3C
  c->r[3]=c->r[26]+0x000000E8u; // 80201A40
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A44
  c->lr=0x80201A4Cu; f_802030B0(c); // 80201A48
  c->r[3]=c->r[26]+0x000000DCu; // 80201A4C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A50
  c->lr=0x80201A58u; f_802030B0(c); // 80201A54
  c->r[3]=c->r[26]+0x000000D0u; // 80201A58
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A5C
  c->lr=0x80201A64u; f_802030B0(c); // 80201A60
  c->r[3]=c->r[26]+0x000000C4u; // 80201A64
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A68
  c->lr=0x80201A70u; f_802030B0(c); // 80201A6C
  c->r[3]=c->r[26]+0x000000B8u; // 80201A70
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201A74
  c->lr=0x80201A7Cu; f_802030B0(c); // 80201A78
  c->r[0]=addc(c,c->r[26],0x00000080u,0); cr0(c,c->r[0]); // 80201A7C
  if (crb(c,2)) { goto L_80201B0C; } // 80201A80
  if (crb(c,2)) { goto L_80201B0C; } // 80201A84
  if (crb(c,2)) { goto L_80201B0C; } // 80201A88
  if (crb(c,2)) { goto L_80201B0C; } // 80201A8C
  c->r[4]=R32(c->r[26]+0x00000080u); // 80201A90
  cmps(c,0,(int32_t)c->r[4],0); // 80201A94
  if (crb(c,2)) { goto L_80201B0C; } // 80201A98
  c->r[27]=R32(c->r[26]+0x00000084u); // 80201A9C
  c->r[0]=0u+0x00000000u; // 80201AA0
  W8(c->r[31]+0x00000008u,c->r[0]); // 80201AA4
  c->r[0]=c->r[27]-c->r[27]; // 80201AA8
  c->r[3]=rotl(c->r[27],5)&0xFFFFFFE0u; // 80201AAC
  W32(c->r[26]+0x00000084u,c->r[0]); // 80201AB0
  c->r[29]=c->r[4]+c->r[3]; // 80201AB4
  goto L_80201AD8; // 80201AB8
L_80201ABC:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFE0u,0); cr0(c,c->r[29]); // 80201ABC
  if (crb(c,2)) { goto L_80201AD4; } // 80201AC0
  c->r[0]=0u+0xFFFFFFFFu; // 80201AC4
  c->r[3]=c->r[29]+0x00000010u; // 80201AC8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80201ACC
  c->lr=0x80201AD4u; f_802030B0(c); // 80201AD0
L_80201AD4:;
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 80201AD4
L_80201AD8:;
  cmps(c,0,(int32_t)c->r[27],0); // 80201AD8
  if (!crb(c,2)) { IRQCHK(c); goto L_80201ABC; } // 80201ADC
  c->r[5]=R32(c->r[26]+0x00000088u); // 80201AE0
  c->r[4]=c->r[28]+0x00000151u; // 80201AE4
  c->r[29]=R32(c->r[26]+0x00000080u); // 80201AE8
  c->r[3]=0u+0x00000006u; // 80201AEC
  c->r[7]=rotl(c->r[5],5)&0xFFFFFFE0u; // 80201AF0
  c->r[6]=0u+0x00000020u; // 80201AF4
  c->r[8]=c->r[29]|c->r[29]; // 80201AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201AFC
  c->lr=0x80201B04u; f_8020B328(c); // 80201B00
  c->r[3]=c->r[29]|c->r[29]; // 80201B04
  c->lr=0x80201B0Cu; f_8020EB2C(c); // 80201B08
L_80201B0C:;
  c->r[29]=0u+0xFFFFFFFFu; // 80201B0C
  c->r[3]=c->r[26]+0x00000074u; // 80201B10
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201B14
  c->lr=0x80201B1Cu; f_802030B0(c); // 80201B18
  c->r[3]=c->r[26]+0x00000068u; // 80201B1C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201B20
  c->lr=0x80201B28u; f_802030B0(c); // 80201B24
  c->r[3]=c->r[26]+0x00000040u; // 80201B28
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201B2C
  c->lr=0x80201B34u; f_802030B0(c); // 80201B30
  c->r[3]=c->r[26]+0x00000034u; // 80201B34
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201B38
  c->lr=0x80201B40u; f_802030B0(c); // 80201B3C
  c->r[3]=c->r[26]+0x00000028u; // 80201B40
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201B44
  c->lr=0x80201B4Cu; f_802030B0(c); // 80201B48
  c->r[3]=c->r[26]+0x0000001Cu; // 80201B4C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201B50
  c->lr=0x80201B58u; f_802030B0(c); // 80201B54
  c->r[3]=c->r[26]+0x00000010u; // 80201B58
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80201B5C
  c->lr=0x80201B64u; f_802030B0(c); // 80201B60
  c->r[3]=c->r[26]|c->r[26]; // 80201B64
  c->lr=0x80201B6Cu; f_8020ECE0(c); // 80201B68
L_80201B6C:;
  c->r[0]=0u+0x00000000u; // 80201B6C
  c->r[3]=0u+0x80380000u; // 80201B70
  W32(c->r[3]+0x000025E8u,c->r[0]); // 80201B74
L_80201B78:;
  c->lr=0x80201B7Cu; f_8020EA54(c); // 80201B78
  goto L_80201BCC; // 80201B7C
  c->r[4]=c->r[28]+0x000000A1u; // 80201B80
  c->r[3]=0u+0x00000001u; // 80201B84
  c->r[5]=0u+0x00000051u; // 80201B88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201B8C
  c->lr=0x80201B94u; f_8020B328(c); // 80201B90
  c->r[30]=0u+0xFFFFF05Bu; // 80201B94
  goto L_80201BB4; // 80201B98
  c->r[4]=c->r[28]+0x000000FEu; // 80201B9C
  c->r[3]=0u+0x00000001u; // 80201BA0
  c->r[5]=0u+0x00000051u; // 80201BA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201BA8
  c->lr=0x80201BB0u; f_8020B328(c); // 80201BAC
  c->r[30]=0u+0xFFFFF05Fu; // 80201BB0
L_80201BB4:;
  c->r[3]=c->r[31]+0x0000000Cu; // 80201BB4
  c->lr=0x80201BBCu; f_8010BF74(c); // 80201BB8
  c->r[0]=c->r[0]|0x00000000u; // 80201BBC
  c->r[0]=R32(c->r[1]+0x00000000u); // 80201BC0
  c->r[1]=R32(c->r[31]+0x00000020u); // 80201BC4
  W32(c->r[1]+0x00000000u,c->r[0]); // 80201BC8
L_80201BCC:;
  c->r[3]=c->r[30]|c->r[30]; // 80201BCC
L_80201BD0:;
  c->r[10]=c->r[31]|c->r[31]; // 80201BD0
  c->r[11]=c->r[10]+0x00000040u; // 80201BD4
  c->lr=0x80201BDCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201BD8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80201BDC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80201BE0
  c->r[1]=c->r[10]|c->r[10]; // 80201BE4
  c->lr=c->r[0]; // 80201BE8
  return; // 80201BEC
}

// fn_80201BF0
void f_80201BF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201BF0
  c->r[0]=c->lr; // 80201BF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80201BF8
  c->r[11]=c->r[1]+0x00000040u; // 80201BFC
  c->lr=0x80201C04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201C00
  c->r[31]=c->r[1]|c->r[1]; // 80201C04
  c->r[30]=0u+0x80380000u; // 80201C08
  c->r[29]=0u+0x802A0000u; // 80201C0C
  c->r[0]=R32(c->r[30]+0x000025E8u); // 80201C10
  c->r[26]=c->r[3]|c->r[3]; // 80201C14
  c->r[27]=c->r[4]|c->r[4]; // 80201C18
  c->r[29]=c->r[29]+0x00002E68u; // 80201C1C
  cmps(c,0,(int32_t)c->r[0],0); // 80201C20
  if (!crb(c,2)) { goto L_80201C30; } // 80201C24
  c->r[3]=0u+0xFFFFF037u; // 80201C28
  goto L_80201DD4; // 80201C2C
L_80201C30:;
  cmps(c,0,(int32_t)c->r[3],0); // 80201C30
  if (!crb(c,2)) { goto L_80201C40; } // 80201C34
  c->r[3]=0u+0xFFFFF05Cu; // 80201C38
  goto L_80201DD4; // 80201C3C
L_80201C40:;
  c->r[3]=c->r[0]|c->r[0]; // 80201C40
  c->lr=0x80201C48u; f_80203E04(c); // 80201C44
  W32(c->r[31]+0x00000020u,c->r[1]); // 80201C48
  c->r[3]=c->r[26]|c->r[26]; // 80201C4C
  c->r[4]=c->r[29]+0x00000187u; // 80201C50
  c->r[28]=0u+0x00000000u; // 80201C54
  c->r[5]=0u+0x00000004u; // 80201C58
  c->lr=0x80201C60u; f_801143A4(c); // 80201C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80201C60
  if (!crb(c,2)) { goto L_80201C98; } // 80201C64
  cmps(c,0,(int32_t)c->r[27],0); // 80201C68
  if (!crb(c,2)) { goto L_80201C84; } // 80201C6C
  c->r[3]=R32(c->r[30]+0x000025E8u); // 80201C70
  c->r[4]=c->r[29]+0x0000018Bu; // 80201C74
  c->r[3]=c->r[3]+0x0000017Cu; // 80201C78
  c->lr=0x80201C80u; f_80201DF4(c); // 80201C7C
  goto L_80201DC4; // 80201C80
L_80201C84:;
  c->r[3]=R32(c->r[30]+0x000025E8u); // 80201C84
  c->r[4]=c->r[27]|c->r[27]; // 80201C88
  c->r[3]=c->r[3]+0x0000017Cu; // 80201C8C
  c->lr=0x80201C94u; f_80201DF4(c); // 80201C90
  goto L_80201DC4; // 80201C94
L_80201C98:;
  c->r[3]=c->r[26]|c->r[26]; // 80201C98
  c->r[4]=c->r[29]+0x0000018Cu; // 80201C9C
  c->r[5]=0u+0x00000006u; // 80201CA0
  c->lr=0x80201CA8u; f_801143A4(c); // 80201CA4
  cmps(c,0,(int32_t)c->r[3],0); // 80201CA8
  if (!crb(c,2)) { goto L_80201CE0; } // 80201CAC
  cmps(c,0,(int32_t)c->r[27],0); // 80201CB0
  if (!crb(c,2)) { goto L_80201CCC; } // 80201CB4
  c->r[3]=R32(c->r[30]+0x000025E8u); // 80201CB8
  c->r[4]=c->r[29]+0x0000018Bu; // 80201CBC
  c->r[3]=c->r[3]+0x00000170u; // 80201CC0
  c->lr=0x80201CC8u; f_80201DF4(c); // 80201CC4
  goto L_80201DC4; // 80201CC8
L_80201CCC:;
  c->r[3]=R32(c->r[30]+0x000025E8u); // 80201CCC
  c->r[4]=c->r[27]|c->r[27]; // 80201CD0
  c->r[3]=c->r[3]+0x00000170u; // 80201CD4
  c->lr=0x80201CDCu; f_80201DF4(c); // 80201CD8
  goto L_80201DC4; // 80201CDC
L_80201CE0:;
  c->r[3]=c->r[26]|c->r[26]; // 80201CE0
  c->r[4]=c->r[29]+0x00000192u; // 80201CE4
  c->r[5]=0u+0x00000005u; // 80201CE8
  c->lr=0x80201CF0u; f_801143A4(c); // 80201CEC
  cmps(c,0,(int32_t)c->r[3],0); // 80201CF0
  if (!crb(c,2)) { goto L_80201D28; } // 80201CF4
  c->r[3]=R32(c->r[30]+0x000025E8u); // 80201CF8
  c->r[4]=c->r[27]|c->r[27]; // 80201CFC
  c->r[5]=c->r[31]+0x00000008u; // 80201D00
  c->lr=0x80201D08u; f_80206230(c); // 80201D04
  cmps(c,0,(int32_t)c->r[3],0); // 80201D08
  c->r[28]=c->r[3]|c->r[3]; // 80201D0C
  if (!crb(c,2)) { goto L_80201DC4; } // 80201D10
  c->r[0]=R32(c->r[31]+0x00000008u); // 80201D14
  cmps(c,0,(int32_t)c->r[0],0); // 80201D18
  if (!crb(c,2)) { goto L_80201DC4; } // 80201D1C
  c->r[28]=0u+0xFFFFF016u; // 80201D20
  goto L_80201DC4; // 80201D24
L_80201D28:;
  c->r[3]=c->r[26]|c->r[26]; // 80201D28
  c->r[4]=c->r[29]+0x00000197u; // 80201D2C
  c->r[5]=0u+0x00000009u; // 80201D30
  c->lr=0x80201D38u; f_801143A4(c); // 80201D34
  cmps(c,0,(int32_t)c->r[3],0); // 80201D38
  if (!crb(c,2)) { goto L_80201D70; } // 80201D3C
  cmps(c,0,(int32_t)c->r[27],0); // 80201D40
  if (!crb(c,2)) { goto L_80201D58; } // 80201D44
  c->r[0]=0u+0x00000000u; // 80201D48
  c->r[3]=0u+0x80380000u; // 80201D4C
  W8(c->r[3]+0x00003338u,c->r[0]); // 80201D50
  goto L_80201DC4; // 80201D54
L_80201D58:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 80201D58
  c->r[3]=0u+0x80380000u; // 80201D5C
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); // 80201D60
  c->r[0]=addc(c,~c->r[0],c->r[4],c->xer_ca); // 80201D64
  W8(c->r[3]+0x00003338u,c->r[0]); // 80201D68
  goto L_80201DC4; // 80201D6C
L_80201D70:;
  c->r[28]=0u+0xFFFFF05Au; // 80201D70
  goto L_80201DC4; // 80201D74
  c->r[4]=c->r[29]+0x000000A1u; // 80201D78
  c->r[3]=0u+0x00000001u; // 80201D7C
  c->r[5]=0u+0x0000008Du; // 80201D80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201D84
  c->lr=0x80201D8Cu; f_8020B328(c); // 80201D88
  c->r[28]=0u+0xFFFFF05Bu; // 80201D8C
  goto L_80201DAC; // 80201D90
  c->r[4]=c->r[29]+0x000000FEu; // 80201D94
  c->r[3]=0u+0x00000001u; // 80201D98
  c->r[5]=0u+0x0000008Du; // 80201D9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201DA0
  c->lr=0x80201DA8u; f_8020B328(c); // 80201DA4
  c->r[28]=0u+0xFFFFF05Fu; // 80201DA8
L_80201DAC:;
  c->r[3]=c->r[31]+0x0000000Cu; // 80201DAC
  c->lr=0x80201DB4u; f_8010BF74(c); // 80201DB0
  c->r[0]=c->r[0]|0x00000000u; // 80201DB4
  c->r[0]=R32(c->r[1]+0x00000000u); // 80201DB8
  c->r[1]=R32(c->r[31]+0x00000020u); // 80201DBC
  W32(c->r[1]+0x00000000u,c->r[0]); // 80201DC0
L_80201DC4:;
  c->r[3]=0u+0x80380000u; // 80201DC4
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80201DC8
  c->lr=0x80201DD0u; f_80203E30(c); // 80201DCC
  c->r[3]=c->r[28]|c->r[28]; // 80201DD0
L_80201DD4:;
  c->r[10]=c->r[31]|c->r[31]; // 80201DD4
  c->r[11]=c->r[10]+0x00000040u; // 80201DD8
  c->lr=0x80201DE0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201DDC
  c->r[10]=R32(c->r[1]+0x00000000u); // 80201DE0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80201DE4
  c->r[1]=c->r[10]|c->r[10]; // 80201DE8
  c->lr=c->r[0]; // 80201DEC
  return; // 80201DF0
}

// fn_80201DF4
void f_80201DF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201DF4
  c->r[0]=c->lr; // 80201DF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80201DFC
  c->r[11]=c->r[1]+0x00000020u; // 80201E00
  c->lr=0x80201E08u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201E04
  c->r[29]=c->r[3]|c->r[3]; // 80201E08
  c->r[30]=c->r[4]|c->r[4]; // 80201E0C
  c->lr=0x80201E14u; f_802020A8(c); // 80201E10
  c->r[0]=R8(c->r[1]+0x00000008u); // 80201E14
  c->r[31]=c->r[3]|c->r[3]; // 80201E18
  c->r[3]=c->r[30]|c->r[30]; // 80201E1C
  W8(c->r[1]+0x00000009u,c->r[0]); // 80201E20
  c->lr=0x80201E28u; f_80109598(c); // 80201E24
  c->r[0]=c->r[3]|c->r[3]; // 80201E28
  c->r[3]=c->r[29]|c->r[29]; // 80201E2C
  c->r[5]=c->r[31]|c->r[31]; // 80201E30
  c->r[6]=c->r[30]|c->r[30]; // 80201E34
  c->r[7]=c->r[30]+c->r[0]; // 80201E38
  c->r[8]=c->r[1]+0x00000009u; // 80201E3C
  c->r[4]=0u+0x00000000u; // 80201E40
  c->lr=0x80201E48u; f_80203148(c); // 80201E44
  c->r[11]=c->r[1]+0x00000020u; // 80201E48
  c->lr=0x80201E50u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201E4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80201E50
  c->lr=c->r[0]; // 80201E54
  c->r[1]=c->r[1]+0x00000020u; // 80201E58
  return; // 80201E5C
}

// fn_80201E60
void f_80201E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201E60
  c->r[0]=c->lr; // 80201E64
  W32(c->r[1]+0x00000034u,c->r[0]); // 80201E68
  c->r[11]=c->r[1]+0x00000030u; // 80201E6C
  c->lr=0x80201E74u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201E70
  c->r[31]=c->r[1]|c->r[1]; // 80201E74
  c->r[29]=0u+0x80380000u; // 80201E78
  c->r[28]=c->r[3]|c->r[3]; // 80201E7C
  c->r[3]=R32(c->r[29]+0x000025E8u); // 80201E80
  c->r[30]=c->r[4]|c->r[4]; // 80201E84
  cmps(c,0,(int32_t)c->r[3],0); // 80201E88
  if (!crb(c,2)) { goto L_80201E98; } // 80201E8C
  c->r[3]=0u+0xFFFFF037u; // 80201E90
  goto L_80201FCC; // 80201E94
L_80201E98:;
  cmps(c,0,(int32_t)c->r[4],0); // 80201E98
  if (!crb(c,2)) { goto L_80201EA8; } // 80201E9C
  c->r[3]=0u+0xFFFFF05Cu; // 80201EA0
  goto L_80201FCC; // 80201EA4
L_80201EA8:;
  c->lr=0x80201EACu; f_80203E5C(c); // 80201EA8
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80201EAC
  c->r[3]=R32(c->r[29]+0x000025E8u); // 80201EB0
  c->r[6]=R32(c->r[3]+0x00000004u); // 80201EB4
  cmps(c,0,(int32_t)c->r[6],0); // 80201EB8
  if (!crb(c,2)) { goto L_80201ECC; } // 80201EBC
  c->r[0]=0u+0xFFFFF059u; // 80201EC0
  W32(c->r[30]+0x00000000u,c->r[0]); // 80201EC4
  goto L_80201F60; // 80201EC8
L_80201ECC:;
  cmps(c,0,(int32_t)c->r[28],0); // 80201ECC
  if (crb(c,2)) { goto L_80201EEC; } // 80201ED0
  c->r[0]=R32(c->r[6]+0x00000004u); // 80201ED4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80201ED8
  if (crb(c,2)) { goto L_80201EEC; } // 80201EDC
  c->r[0]=0u+0xFFFFF034u; // 80201EE0
  W32(c->r[30]+0x00000000u,c->r[0]); // 80201EE4
  goto L_80201F60; // 80201EE8
L_80201EEC:;
  c->r[3]=R32(c->r[6]+0x00000020u); // 80201EEC
  c->r[0]=0u+0x00000040u; // 80201EF0
  c->r[5]=c->r[30]+0x0000001Bu; // 80201EF4
  c->r[4]=c->r[6]+0x0000003Bu; // 80201EF8
  W32(c->r[30]+0x00000000u,c->r[3]); // 80201EFC
  c->r[3]=R32(c->r[6]+0x00000024u); // 80201F00
  W32(c->r[30]+0x00000004u,c->r[3]); // 80201F04
  c->r[3]=R32(c->r[6]+0x00000028u); // 80201F08
  W32(c->r[30]+0x00000008u,c->r[3]); // 80201F0C
  c->r[3]=R32(c->r[6]+0x0000002Cu); // 80201F10
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 80201F14
  c->r[3]=R32(c->r[6]+0x00000030u); // 80201F18
  W32(c->r[30]+0x00000010u,c->r[3]); // 80201F1C
  c->r[3]=R32(c->r[6]+0x00000034u); // 80201F20
  W32(c->r[30]+0x00000014u,c->r[3]); // 80201F24
  c->r[3]=R32(c->r[6]+0x00000038u); // 80201F28
  W32(c->r[30]+0x00000018u,c->r[3]); // 80201F2C
  c->ctr=c->r[0]; // 80201F30
L_80201F34:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 80201F34
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 80201F38
  W8(c->r[5]+0x00000001u,c->r[3]); // 80201F3C
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 80201F40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80201F34; } // 80201F44
  c->r[3]=0u+0x80380000u; // 80201F48
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80201F4C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80201F50
  c->r[3]=c->r[3]+0x00000020u; // 80201F54
  c->lr=0x80201F5Cu; f_8021A8AC(c); // 80201F58
  W32(c->r[30]+0x00000018u,c->r[3]); // 80201F5C
L_80201F60:;
  c->r[29]=R32(c->r[30]+0x00000000u); // 80201F60
  goto L_80201FBC; // 80201F64
  c->r[4]=0u+0x802A0000u; // 80201F68
  c->r[3]=0u+0x00000001u; // 80201F6C
  c->r[4]=c->r[4]+0x00002F09u; // 80201F70
  c->r[5]=0u+0x000000B3u; // 80201F74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201F78
  c->lr=0x80201F80u; f_8020B328(c); // 80201F7C
  c->r[29]=0u+0xFFFFF05Bu; // 80201F80
  goto L_80201FA4; // 80201F84
  c->r[4]=0u+0x802A0000u; // 80201F88
  c->r[3]=0u+0x00000001u; // 80201F8C
  c->r[4]=c->r[4]+0x00002F66u; // 80201F90
  c->r[5]=0u+0x000000B3u; // 80201F94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201F98
  c->lr=0x80201FA0u; f_8020B328(c); // 80201F9C
  c->r[29]=0u+0xFFFFF05Fu; // 80201FA0
L_80201FA4:;
  c->r[3]=c->r[31]+0x00000008u; // 80201FA4
  c->lr=0x80201FACu; f_8010BF74(c); // 80201FA8
  c->r[0]=c->r[0]|0x00000000u; // 80201FAC
  c->r[0]=R32(c->r[1]+0x00000000u); // 80201FB0
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 80201FB4
  W32(c->r[1]+0x00000000u,c->r[0]); // 80201FB8
L_80201FBC:;
  c->r[3]=0u+0x80380000u; // 80201FBC
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80201FC0
  c->lr=0x80201FC8u; f_80203E88(c); // 80201FC4
  c->r[3]=c->r[29]|c->r[29]; // 80201FC8
L_80201FCC:;
  c->r[10]=c->r[31]|c->r[31]; // 80201FCC
  c->r[11]=c->r[10]+0x00000030u; // 80201FD0
  c->lr=0x80201FD8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201FD4
  c->r[10]=R32(c->r[1]+0x00000000u); // 80201FD8
  c->r[0]=R32(c->r[10]+0x00000004u); // 80201FDC
  c->r[1]=c->r[10]|c->r[10]; // 80201FE0
  c->lr=c->r[0]; // 80201FE4
  return; // 80201FE8
}

// fn_80201FEC
void f_80201FEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80201FEC
  c->r[0]=c->lr; // 80201FF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80201FF4
  c->r[11]=c->r[1]+0x00000030u; // 80201FF8
  c->lr=0x80202000u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80201FFC
  c->r[31]=c->r[1]|c->r[1]; // 80202000
  c->r[30]=0u+0x80380000u; // 80202004
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80202008
  c->r[4]=R32(c->r[30]+0x000025E8u); // 8020200C
  c->r[29]=c->r[3]|c->r[3]; // 80202010
  cmps(c,0,(int32_t)c->r[4],0); // 80202014
  if (!crb(c,2)) { goto L_80202024; } // 80202018
  c->r[3]=0u+0xFFFFF037u; // 8020201C
  goto L_80202088; // 80202020
L_80202024:;
  cmps(c,0,(int32_t)c->r[3],0); // 80202024
  if (!crb(c,2)) { goto L_80202034; } // 80202028
  c->r[3]=0u+0xFFFFF05Cu; // 8020202C
  goto L_80202088; // 80202030
L_80202034:;
  c->r[0]=R8(c->r[4]+0x0000016Cu); // 80202034
  cmps(c,0,(int32_t)c->r[0],0); // 80202038
  if (!crb(c,2)) { goto L_80202048; } // 8020203C
  c->r[3]=0u+0xFFFFF01Bu; // 80202040
  goto L_80202088; // 80202044
L_80202048:;
  c->r[3]=c->r[4]+0x000000B8u; // 80202048
  c->lr=0x80202050u; f_802020A8(c); // 8020204C
  c->r[0]=cntlz(c->r[3]); // 80202050
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80202054
  if (crb(c,2)) { goto L_80202064; } // 80202058
  c->r[3]=0u+0xFFFFF036u; // 8020205C
  goto L_80202088; // 80202060
L_80202064:;
  c->r[3]=R32(c->r[30]+0x000025E8u); // 80202064
  c->r[0]=R8(c->r[3]+0x00000050u); // 80202068
  cmps(c,0,(int32_t)c->r[0],0); // 8020206C
  if (!crb(c,2)) { goto L_8020207C; } // 80202070
  c->r[3]=0u+0xFFFFF05Au; // 80202074
  goto L_80202088; // 80202078
L_8020207C:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8020207C
  c->r[3]=0u+0x00000000u; // 80202080
  W32(c->r[29]+0x00000000u,c->r[0]); // 80202084
L_80202088:;
  c->r[10]=c->r[31]|c->r[31]; // 80202088
  c->r[11]=c->r[10]+0x00000030u; // 8020208C
  c->lr=0x80202094u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202090
  c->r[10]=R32(c->r[1]+0x00000000u); // 80202094
  c->r[0]=R32(c->r[10]+0x00000004u); // 80202098
  c->r[1]=c->r[10]|c->r[10]; // 8020209C
  c->lr=c->r[0]; // 802020A0
  return; // 802020A4
}

// fn_802020A8
void f_802020A8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 802020A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802020AC
  if (!crb(c,2)) { goto L_802020C0; } // 802020B0
  c->r[0]=R8(c->r[3]+0x00000000u); // 802020B4
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 802020B8
  return; // 802020BC
L_802020C0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 802020C0
  return; // 802020C4
}

// fn_802020C8
void f_802020C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802020C8
  c->r[0]=c->lr; // 802020CC
  c->r[5]=0u+0x80380000u; // 802020D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802020D4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802020D8
  c->r[31]=c->r[1]|c->r[1]; // 802020DC
  W32(c->r[1]+0x00000028u,c->r[30]); // 802020E0
  c->r[0]=R32(c->r[5]+0x000025E8u); // 802020E4
  cmps(c,0,(int32_t)c->r[0],0); // 802020E8
  if (!crb(c,2)) { goto L_802020F8; } // 802020EC
  c->r[3]=0u+0xFFFFF037u; // 802020F0
  goto L_80202160; // 802020F4
L_802020F8:;
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 802020F8
  c->lr=0x80202100u; f_80200800(c); // 802020FC
  c->r[30]=c->r[3]|c->r[3]; // 80202100
  goto L_8020215C; // 80202104
  c->r[4]=0u+0x802A0000u; // 80202108
  c->r[3]=0u+0x00000001u; // 8020210C
  c->r[4]=c->r[4]+0x00002F09u; // 80202110
  c->r[5]=0u+0x00000106u; // 80202114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202118
  c->lr=0x80202120u; f_8020B328(c); // 8020211C
  c->r[30]=0u+0xFFFFF05Bu; // 80202120
  goto L_80202144; // 80202124
  c->r[4]=0u+0x802A0000u; // 80202128
  c->r[3]=0u+0x00000001u; // 8020212C
  c->r[4]=c->r[4]+0x00002F66u; // 80202130
  c->r[5]=0u+0x00000106u; // 80202134
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202138
  c->lr=0x80202140u; f_8020B328(c); // 8020213C
  c->r[30]=0u+0xFFFFF05Fu; // 80202140
L_80202144:;
  c->r[3]=c->r[31]+0x00000008u; // 80202144
  c->lr=0x8020214Cu; f_8010BF74(c); // 80202148
  c->r[0]=c->r[0]|0x00000000u; // 8020214C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80202150
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 80202154
  W32(c->r[1]+0x00000000u,c->r[0]); // 80202158
L_8020215C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020215C
L_80202160:;
  c->r[10]=c->r[31]|c->r[31]; // 80202160
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80202164
  c->r[30]=R32(c->r[10]+0x00000028u); // 80202168
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020216C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80202170
  c->r[1]=c->r[10]|c->r[10]; // 80202174
  c->lr=c->r[0]; // 80202178
  return; // 8020217C
}

// fn_80202180
void f_80202180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202180
  c->r[0]=c->lr; // 80202184
  W32(c->r[1]+0x00000044u,c->r[0]); // 80202188
  c->r[11]=c->r[1]+0x00000040u; // 8020218C
  c->lr=0x80202194u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202190
  c->r[31]=c->r[1]|c->r[1]; // 80202194
  c->r[6]=0u+0x80380000u; // 80202198
  c->r[29]=c->r[3]|c->r[3]; // 8020219C
  c->r[6]=R32(c->r[6]+0x000025E8u); // 802021A0
  c->r[28]=c->r[4]|c->r[4]; // 802021A4
  c->r[30]=c->r[5]|c->r[5]; // 802021A8
  cmps(c,0,(int32_t)c->r[6],0); // 802021AC
  if (!crb(c,2)) { goto L_802021BC; } // 802021B0
  c->r[3]=0u+0xFFFFF037u; // 802021B4
  goto L_80202294; // 802021B8
L_802021BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 802021BC
  if (!crb(c,2)) { goto L_802021CC; } // 802021C0
  c->r[3]=0u+0xFFFFF05Cu; // 802021C4
  goto L_80202294; // 802021C8
L_802021CC:;
  c->r[0]=0u+0x00000000u; // 802021CC
  c->r[4]=c->r[4]^c->r[0]; // 802021D0
  c->r[0]=c->r[3]^c->r[0]; // 802021D4
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 802021D8
  if (!crb(c,2)) { goto L_802021E8; } // 802021DC
  c->r[3]=0u+0xFFFFF02Eu; // 802021E0
  goto L_80202294; // 802021E4
L_802021E8:;
  c->r[3]=c->r[6]|c->r[6]; // 802021E8
  c->lr=0x802021F0u; f_80203E04(c); // 802021EC
  c->r[0]=0u+0x00000001u; // 802021F0
  W32(c->r[31]+0x00000020u,c->r[1]); // 802021F4
  c->r[3]=c->r[30]|c->r[30]; // 802021F8
  c->r[6]=c->r[28]|c->r[28]; // 802021FC
  W32(c->r[31]+0x00000008u,c->r[0]); // 80202200
  c->r[5]=c->r[29]|c->r[29]; // 80202204
  c->r[4]=c->r[31]+0x00000008u; // 80202208
  c->lr=0x80202210u; f_802022C0(c); // 8020220C
  cmps(c,0,(int32_t)c->r[3],0); // 80202210
  c->r[30]=c->r[3]|c->r[3]; // 80202214
  if (!crb(c,2)) { goto L_80202284; } // 80202218
  c->r[0]=R32(c->r[31]+0x00000008u); // 8020221C
  cmps(c,0,(int32_t)c->r[0],0); // 80202220
  if (!crb(c,2)) { goto L_80202284; } // 80202224
  c->r[30]=0u+0xFFFFF02Eu; // 80202228
  goto L_80202284; // 8020222C
  c->r[4]=0u+0x802A0000u; // 80202230
  c->r[3]=0u+0x00000001u; // 80202234
  c->r[4]=c->r[4]+0x00002F09u; // 80202238
  c->r[5]=0u+0x00000139u; // 8020223C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202240
  c->lr=0x80202248u; f_8020B328(c); // 80202244
  c->r[30]=0u+0xFFFFF05Bu; // 80202248
  goto L_8020226C; // 8020224C
  c->r[4]=0u+0x802A0000u; // 80202250
  c->r[3]=0u+0x00000001u; // 80202254
  c->r[4]=c->r[4]+0x00002F66u; // 80202258
  c->r[5]=0u+0x00000139u; // 8020225C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202260
  c->lr=0x80202268u; f_8020B328(c); // 80202264
  c->r[30]=0u+0xFFFFF05Fu; // 80202268
L_8020226C:;
  c->r[3]=c->r[31]+0x0000000Cu; // 8020226C
  c->lr=0x80202274u; f_8010BF74(c); // 80202270
  c->r[0]=c->r[0]|0x00000000u; // 80202274
  c->r[0]=R32(c->r[1]+0x00000000u); // 80202278
  c->r[1]=R32(c->r[31]+0x00000020u); // 8020227C
  W32(c->r[1]+0x00000000u,c->r[0]); // 80202280
L_80202284:;
  c->r[3]=0u+0x80380000u; // 80202284
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80202288
  c->lr=0x80202290u; f_80203E30(c); // 8020228C
  c->r[3]=c->r[30]|c->r[30]; // 80202290
L_80202294:;
  c->r[10]=c->r[31]|c->r[31]; // 80202294
  c->r[11]=c->r[10]+0x00000040u; // 80202298
  c->lr=0x802022A0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020229C
  c->r[10]=R32(c->r[1]+0x00000000u); // 802022A0
  c->r[0]=R32(c->r[10]+0x00000004u); // 802022A4
  c->r[1]=c->r[10]|c->r[10]; // 802022A8
  c->lr=c->r[0]; // 802022AC
  return; // 802022B0
}

// fn_802022B4
void f_802022B4(Ctx* __restrict c) {
  c->r[6]=0u+0x00000000u; // 802022B4
  c->r[5]=0u+0x00000000u; // 802022B8
  f_802022C0(c); return; // 802022BC
}

// fn_802022C0
void f_802022C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 802022C0
  c->r[0]=c->lr; // 802022C4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802022C8
  c->r[11]=c->r[1]+0x000000A0u; // 802022CC
  c->lr=0x802022D4u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802022D0
  c->r[31]=c->r[1]|c->r[1]; // 802022D4
  c->r[7]=0u+0x80380000u; // 802022D8
  c->r[27]=0u+0x802A0000u; // 802022DC
  c->r[0]=R32(c->r[7]+0x000025E8u); // 802022E0
  c->r[29]=c->r[3]|c->r[3]; // 802022E4
  c->r[30]=c->r[4]|c->r[4]; // 802022E8
  c->r[17]=c->r[5]|c->r[5]; // 802022EC
  cmps(c,0,(int32_t)c->r[0],0); // 802022F0
  c->r[22]=c->r[6]|c->r[6]; // 802022F4
  c->r[27]=c->r[27]+0x00002E68u; // 802022F8
  c->r[21]=0u+0x00000000u; // 802022FC
  c->r[20]=0u+0x00000000u; // 80202300
  c->r[19]=0u+0x00000000u; // 80202304
  if (!crb(c,2)) { goto L_80202314; } // 80202308
  c->r[3]=0u+0xFFFFF037u; // 8020230C
  goto L_80202A5C; // 80202310
L_80202314:;
  c->r[3]=c->r[0]|c->r[0]; // 80202314
  c->lr=0x8020231Cu; f_80203E04(c); // 80202318
  cmps(c,0,(int32_t)c->r[30],0); // 8020231C
  W32(c->r[31]+0x00000050u,c->r[1]); // 80202320
  if (!crb(c,2)) { goto L_80202330; } // 80202324
  c->r[18]=0u+0xFFFFF05Cu; // 80202328
  goto L_80202A1C; // 8020232C
L_80202330:;
  cmps(c,0,(int32_t)c->r[29],0); // 80202330
  if (!crb(c,2)) { goto L_80202340; } // 80202334
  c->r[23]=0u+0x00000000u; // 80202338
  goto L_80202344; // 8020233C
L_80202340:;
  c->r[23]=R32(c->r[30]+0x00000000u); // 80202340
L_80202344:;
  c->r[0]=0u+0x00000000u; // 80202344
  c->r[4]=c->r[31]+0x00000010u; // 80202348
  W32(c->r[30]+0x00000000u,c->r[0]); // 8020234C
  c->r[3]=0u+0x00000000u; // 80202350
  c->lr=0x80202358u; f_801FFB40(c); // 80202354
  cmps(c,0,(int32_t)c->r[3],0); // 80202358
  c->r[18]=c->r[3]|c->r[3]; // 8020235C
  if (!crb(c,2)) { goto L_80202A1C; } // 80202360
  c->r[4]=c->r[31]+0x0000000Cu; // 80202364
  c->r[3]=0u+0x00000000u; // 80202368
  c->lr=0x80202370u; f_801FFC34(c); // 8020236C
  cmps(c,0,(int32_t)c->r[3],0); // 80202370
  c->r[18]=c->r[3]|c->r[3]; // 80202374
  if (!crb(c,2)) { goto L_80202A1C; } // 80202378
  c->r[0]=R32(c->r[31]+0x00000010u); // 8020237C
  cmps(c,0,(int32_t)c->r[0],0); // 80202380
  if (crb(c,2)) { goto L_80202398; } // 80202384
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80202388
  c->r[4]=0u+0x00000020u; // 8020238C
  c->lr=0x80202394u; f_8020EA58(c); // 80202390
  c->r[19]=c->r[3]|c->r[3]; // 80202394
L_80202398:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80202398
  cmps(c,0,(int32_t)c->r[0],0); // 8020239C
  if (crb(c,2)) { goto L_802023B4; } // 802023A0
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802023A4
  c->r[4]=0u+0x00000020u; // 802023A8
  c->lr=0x802023B0u; f_8020EA58(c); // 802023AC
  c->r[20]=c->r[3]|c->r[3]; // 802023B0
L_802023B4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802023B4
  cmps(c,0,(int32_t)c->r[0],0); // 802023B8
  if (crb(c,2)) { goto L_802023C8; } // 802023BC
  cmps(c,0,(int32_t)c->r[19],0); // 802023C0
  if (crb(c,2)) { goto L_802023DC; } // 802023C4
L_802023C8:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802023C8
  cmps(c,0,(int32_t)c->r[0],0); // 802023CC
  if (crb(c,2)) { goto L_802023E4; } // 802023D0
  cmps(c,0,(int32_t)c->r[20],0); // 802023D4
  if (!crb(c,2)) { goto L_802023E4; } // 802023D8
L_802023DC:;
  c->r[18]=0u+0xFFFFF05Bu; // 802023DC
  goto L_80202A1C; // 802023E0
L_802023E4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802023E4
  if (crb(c,2)) { goto L_80202404; } // 802023E8
  cmps(c,0,(int32_t)c->r[23],0); // 802023EC
  if (crb(c,2)) { goto L_80202404; } // 802023F0
  c->r[5]=(uint32_t)((int32_t)c->r[23]*(int32_t)24); // 802023F4
  c->r[3]=c->r[29]|c->r[29]; // 802023F8
  c->r[4]=0u+0x00000000u; // 802023FC
  c->lr=0x80202404u; f_8000443C(c); // 80202400
L_80202404:;
  c->r[3]=c->r[19]|c->r[19]; // 80202404
  c->r[4]=c->r[31]+0x00000010u; // 80202408
  c->lr=0x80202410u; f_801FFB40(c); // 8020240C
  cmps(c,0,(int32_t)c->r[3],0); // 80202410
  c->r[18]=c->r[3]|c->r[3]; // 80202414
  if (!crb(c,2)) { goto L_80202A1C; } // 80202418
  c->r[24]=0u+0x00000000u; // 8020241C
  c->r[26]=c->r[24]|c->r[24]; // 80202420
  goto L_802024C8; // 80202424
L_80202428:;
  c->r[0]=0u+0x00000000u; // 80202428
  c->r[3]=c->r[22]^c->r[0]; // 8020242C
  c->r[0]=c->r[17]^c->r[0]; // 80202430
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80202434
  if (crb(c,2)) { goto L_80202460; } // 80202438
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 8020243C
  c->r[3]=c->r[19]+c->r[0]; // 80202440
  c->r[0]=R32(c->r[19]+c->r[0]); // 80202444
  c->r[3]=R32(c->r[3]+0x00000004u); // 80202448
  c->r[0]=c->r[17]^c->r[0]; // 8020244C
  c->r[3]=c->r[22]^c->r[3]; // 80202450
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80202454
  if (!crb(c,2)) { goto L_802024C4; } // 80202458
  goto L_80202490; // 8020245C
L_80202460:;
  c->r[3]=0u+0x80380000u; // 80202460
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80202464
  c->r[0]=R8(c->r[3]+0x00000232u); // 80202468
  cmps(c,0,(int32_t)c->r[0],0); // 8020246C
  if (crb(c,2)) { goto L_80202490; } // 80202470
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80202474
  c->r[4]=c->r[19]+c->r[0]; // 80202478
  c->r[3]=R32(c->r[19]+c->r[0]); // 8020247C
  c->r[4]=R32(c->r[4]+0x00000004u); // 80202480
  c->lr=0x80202488u; f_8021EB34(c); // 80202484
  cmps(c,0,(int32_t)c->r[3],0); // 80202488
  if (crb(c,2)) { goto L_802024C4; } // 8020248C
L_80202490:;
  cmps(c,0,(int32_t)c->r[29],0); // 80202490
  if (crb(c,2)) { goto L_802024C0; } // 80202494
  cmpu(c,0,c->r[24],c->r[23]); // 80202498
  if (!crb(c,0)) { goto L_802024C0; } // 8020249C
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 802024A0
  c->r[3]=c->r[19]+c->r[0]; // 802024A4
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)24); // 802024A8
  c->r[4]=R32(c->r[3]+0x00000000u); // 802024AC
  c->r[5]=R32(c->r[3]+0x00000004u); // 802024B0
  c->r[3]=c->r[29]+c->r[0]; // 802024B4
  W32(c->r[3]+0x00000004u,c->r[5]); // 802024B8
  W32(c->r[29]+c->r[0],c->r[4]); // 802024BC
L_802024C0:;
  c->r[24]=c->r[24]+0x00000001u; // 802024C0
L_802024C4:;
  c->r[26]=c->r[26]+0x00000001u; // 802024C4
L_802024C8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802024C8
  cmpu(c,0,c->r[26],c->r[0]); // 802024CC
  if (crb(c,0)) { IRQCHK(c); goto L_80202428; } // 802024D0
  c->r[3]=c->r[20]|c->r[20]; // 802024D4
  c->r[4]=c->r[31]+0x0000000Cu; // 802024D8
  c->lr=0x802024E0u; f_801FFC34(c); // 802024DC
  cmps(c,0,(int32_t)c->r[3],0); // 802024E0
  c->r[18]=c->r[3]|c->r[3]; // 802024E4
  if (!crb(c,2)) { goto L_80202A1C; } // 802024E8
  c->r[26]=0u+0x00000000u; // 802024EC
  goto L_80202734; // 802024F0
L_802024F4:;
  c->r[0]=0u+0x00000000u; // 802024F4
  c->r[3]=c->r[22]^c->r[0]; // 802024F8
  c->r[0]=c->r[17]^c->r[0]; // 802024FC
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80202500
  if (crb(c,2)) { goto L_8020252C; } // 80202504
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80202508
  c->r[3]=c->r[20]+c->r[0]; // 8020250C
  c->r[0]=R32(c->r[20]+c->r[0]); // 80202510
  c->r[3]=R32(c->r[3]+0x00000004u); // 80202514
  c->r[0]=c->r[17]^c->r[0]; // 80202518
  c->r[3]=c->r[22]^c->r[3]; // 8020251C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80202520
  if (!crb(c,2)) { goto L_80202730; } // 80202524
  goto L_8020255C; // 80202528
L_8020252C:;
  c->r[3]=0u+0x80380000u; // 8020252C
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80202530
  c->r[0]=R8(c->r[3]+0x00000232u); // 80202534
  cmps(c,0,(int32_t)c->r[0],0); // 80202538
  if (crb(c,2)) { goto L_8020255C; } // 8020253C
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80202540
  c->r[4]=c->r[20]+c->r[0]; // 80202544
  c->r[3]=R32(c->r[20]+c->r[0]); // 80202548
  c->r[4]=R32(c->r[4]+0x00000004u); // 8020254C
  c->lr=0x80202554u; f_8021EB34(c); // 80202550
  cmps(c,0,(int32_t)c->r[3],0); // 80202554
  if (crb(c,2)) { goto L_80202730; } // 80202558
L_8020255C:;
  c->r[6]=0u+0x00000000u; // 8020255C
  c->r[25]=0u+0x00000000u; // 80202560
  goto L_802025A4; // 80202564
L_80202568:;
  c->r[3]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80202568
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 8020256C
  c->r[5]=c->r[20]+c->r[3]; // 80202570
  c->r[3]=c->r[19]+c->r[0]; // 80202574
  c->r[4]=R32(c->r[5]+0x00000000u); // 80202578
  c->r[0]=R32(c->r[19]+c->r[0]); // 8020257C
  c->r[5]=R32(c->r[5]+0x00000004u); // 80202580
  c->r[3]=R32(c->r[3]+0x00000004u); // 80202584
  c->r[0]=c->r[4]^c->r[0]; // 80202588
  c->r[3]=c->r[5]^c->r[3]; // 8020258C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80202590
  if (!crb(c,2)) { goto L_802025A0; } // 80202594
  c->r[6]=0u+0x00000001u; // 80202598
  goto L_802025B0; // 8020259C
L_802025A0:;
  c->r[25]=c->r[25]+0x00000001u; // 802025A0
L_802025A4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802025A4
  cmpu(c,0,c->r[25],c->r[0]); // 802025A8
  if (crb(c,0)) { IRQCHK(c); goto L_80202568; } // 802025AC
L_802025B0:;
  cmps(c,0,(int32_t)c->r[6],0); // 802025B0
  if (!crb(c,2)) { goto L_80202730; } // 802025B4
  c->r[25]=0u+0x00000000u; // 802025B8
  goto L_80202698; // 802025BC
L_802025C0:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 802025C0
  c->r[4]=c->r[19]+c->r[0]; // 802025C4
  c->r[3]=R32(c->r[19]+c->r[0]); // 802025C8
  c->r[4]=R32(c->r[4]+0x00000004u); // 802025CC
  c->lr=0x802025D4u; f_8020B554(c); // 802025D0
  cmps(c,0,(int32_t)c->r[3],0); // 802025D4
  if (crb(c,2)) { goto L_80202694; } // 802025D8
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 802025DC
  c->r[4]=c->r[20]+c->r[0]; // 802025E0
  c->r[3]=R32(c->r[20]+c->r[0]); // 802025E4
  c->r[4]=R32(c->r[4]+0x00000004u); // 802025E8
  c->lr=0x802025F0u; f_8020B544(c); // 802025EC
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 802025F0
  c->r[28]=c->r[3]|c->r[3]; // 802025F4
  c->r[4]=c->r[19]+c->r[0]; // 802025F8
  c->r[3]=R32(c->r[19]+c->r[0]); // 802025FC
  c->r[4]=R32(c->r[4]+0x00000004u); // 80202600
  c->lr=0x80202608u; f_8020B544(c); // 80202604
  cmpu(c,0,c->r[3],c->r[28]); // 80202608
  if (!crb(c,2)) { goto L_80202694; } // 8020260C
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80202610
  c->r[3]=c->r[31]+0x00000030u; // 80202614
  c->r[4]=c->r[20]+c->r[0]; // 80202618
  c->r[5]=R32(c->r[20]+c->r[0]); // 8020261C
  c->r[6]=R32(c->r[4]+0x00000004u); // 80202620
  c->r[7]=0u+0x00000010u; // 80202624
  c->lr=0x8020262Cu; f_80215AD8(c); // 80202628
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 8020262C
  c->r[3]=c->r[31]+0x00000024u; // 80202630
  c->r[4]=c->r[19]+c->r[0]; // 80202634
  c->r[5]=R32(c->r[19]+c->r[0]); // 80202638
  c->r[6]=R32(c->r[4]+0x00000004u); // 8020263C
  c->r[7]=0u+0x00000010u; // 80202640
  c->lr=0x80202648u; f_80215AD8(c); // 80202644
  c->r[3]=c->r[31]+0x00000024u; // 80202648
  c->lr=0x80202650u; f_80202A7C(c); // 8020264C
  c->r[28]=c->r[3]|c->r[3]; // 80202650
  c->r[3]=c->r[31]+0x00000030u; // 80202654
  c->lr=0x8020265Cu; f_80202A7C(c); // 80202658
  c->r[5]=c->r[3]|c->r[3]; // 8020265C
  c->r[6]=c->r[28]|c->r[28]; // 80202660
  c->r[4]=c->r[27]+0x000001A0u; // 80202664
  c->r[3]=0u+0x00000003u; // 80202668
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020266C
  c->lr=0x80202674u; f_8020B328(c); // 80202670
  c->r[28]=0u+0xFFFFFFFFu; // 80202674
  c->r[3]=c->r[31]+0x00000024u; // 80202678
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8020267C
  c->lr=0x80202684u; f_802030B0(c); // 80202680
  c->r[3]=c->r[31]+0x00000030u; // 80202684
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 80202688
  c->lr=0x80202690u; f_802030B0(c); // 8020268C
  goto L_802026A4; // 80202690
L_80202694:;
  c->r[25]=c->r[25]+0x00000001u; // 80202694
L_80202698:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80202698
  cmpu(c,0,c->r[25],c->r[0]); // 8020269C
  if (crb(c,0)) { IRQCHK(c); goto L_802025C0; } // 802026A0
L_802026A4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802026A4
  cmpu(c,0,c->r[25],c->r[0]); // 802026A8
  if (!crb(c,2)) { goto L_802026FC; } // 802026AC
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 802026B0
  c->r[3]=c->r[31]+0x00000018u; // 802026B4
  c->r[4]=c->r[20]+c->r[0]; // 802026B8
  c->r[5]=R32(c->r[20]+c->r[0]); // 802026BC
  c->r[6]=R32(c->r[4]+0x00000004u); // 802026C0
  c->r[7]=0u+0x00000010u; // 802026C4
  c->lr=0x802026CCu; f_80215AD8(c); // 802026C8
  c->r[3]=c->r[31]+0x00000018u; // 802026CC
  c->lr=0x802026D4u; f_80202A7C(c); // 802026D0
  c->r[5]=c->r[3]|c->r[3]; // 802026D4
  c->r[4]=c->r[27]+0x000001D3u; // 802026D8
  c->r[3]=0u+0x00000003u; // 802026DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802026E0
  c->lr=0x802026E8u; f_8020B328(c); // 802026E4
  c->r[0]=0u+0xFFFFFFFFu; // 802026E8
  c->r[3]=c->r[31]+0x00000018u; // 802026EC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802026F0
  c->lr=0x802026F8u; f_802030B0(c); // 802026F4
  goto L_80202730; // 802026F8
L_802026FC:;
  cmps(c,0,(int32_t)c->r[29],0); // 802026FC
  if (crb(c,2)) { goto L_8020272C; } // 80202700
  cmpu(c,0,c->r[24],c->r[23]); // 80202704
  if (!crb(c,0)) { goto L_8020272C; } // 80202708
  c->r[0]=rotl(c->r[26],3)&0xFFFFFFF8u; // 8020270C
  c->r[3]=c->r[20]+c->r[0]; // 80202710
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)24); // 80202714
  c->r[4]=R32(c->r[3]+0x00000000u); // 80202718
  c->r[5]=R32(c->r[3]+0x00000004u); // 8020271C
  c->r[3]=c->r[29]+c->r[0]; // 80202720
  W32(c->r[3]+0x00000004u,c->r[5]); // 80202724
  W32(c->r[29]+c->r[0],c->r[4]); // 80202728
L_8020272C:;
  c->r[24]=c->r[24]+0x00000001u; // 8020272C
L_80202730:;
  c->r[26]=c->r[26]+0x00000001u; // 80202730
L_80202734:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80202734
  cmpu(c,0,c->r[26],c->r[0]); // 80202738
  if (crb(c,0)) { IRQCHK(c); goto L_802024F4; } // 8020273C
  cmps(c,0,(int32_t)c->r[29],0); // 80202740
  if (!crb(c,2)) { goto L_80202750; } // 80202744
  W32(c->r[30]+0x00000000u,c->r[24]); // 80202748
  goto L_80202A1C; // 8020274C
L_80202750:;
  cmpu(c,0,c->r[24],c->r[23]); // 80202750
  if (!crb(c,1)) { goto L_80202764; } // 80202754
  W32(c->r[30]+0x00000000u,c->r[24]); // 80202758
  c->r[18]=0u+0xFFFFF04Eu; // 8020275C
  goto L_80202A1C; // 80202760
L_80202764:;
  c->r[23]=c->r[24]|c->r[24]; // 80202764
  c->r[26]=0u+0x00000000u; // 80202768
  goto L_802029C0; // 8020276C
L_80202770:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)24); // 80202770
  c->r[25]=0u+0x00000000u; // 80202774
  c->r[17]=c->r[29]+c->r[0]; // 80202778
  goto L_802027B8; // 8020277C
L_80202780:;
  c->r[0]=rotl(c->r[25],3)&0xFFFFFFF8u; // 80202780
  c->r[4]=R32(c->r[17]+0x00000000u); // 80202784
  c->r[3]=c->r[20]+c->r[0]; // 80202788
  c->r[0]=R32(c->r[20]+c->r[0]); // 8020278C
  c->r[5]=R32(c->r[17]+0x00000004u); // 80202790
  c->r[3]=R32(c->r[3]+0x00000004u); // 80202794
  c->r[0]=c->r[4]^c->r[0]; // 80202798
  c->r[3]=c->r[5]^c->r[3]; // 8020279C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 802027A0
  if (!crb(c,2)) { goto L_802027B4; } // 802027A4
  c->r[0]=0u+0x00000001u; // 802027A8
  W32(c->r[17]+0x0000000Cu,c->r[0]); // 802027AC
  goto L_802027C4; // 802027B0
L_802027B4:;
  c->r[25]=c->r[25]+0x00000001u; // 802027B4
L_802027B8:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802027B8
  cmpu(c,0,c->r[25],c->r[0]); // 802027BC
  if (crb(c,0)) { IRQCHK(c); goto L_80202780; } // 802027C0
L_802027C4:;
  c->r[0]=0u+0x00002060u; // 802027C4
  c->r[22]=0u+0x80380000u; // 802027C8
  W32(c->r[31]+0x00000014u,c->r[0]); // 802027CC
  c->r[5]=c->r[22]+0x000053A0u; // 802027D0
  c->r[6]=c->r[31]+0x00000014u; // 802027D4
  c->r[3]=R32(c->r[17]+0x00000000u); // 802027D8
  c->r[4]=R32(c->r[17]+0x00000004u); // 802027DC
  c->lr=0x802027E4u; f_8020B758(c); // 802027E0
  cmps(c,0,(int32_t)c->r[3],0); // 802027E4
  c->r[18]=c->r[3]|c->r[3]; // 802027E8
  if (crb(c,2)) { goto L_80202828; } // 802027EC
  cmps(c,0,(int32_t)c->r[3],-4070); // 802027F0
  c->r[3]=0u+0x00000001u; // 802027F4
  if (!crb(c,2)) { goto L_80202800; } // 802027F8
  c->r[3]=0u+0x00000003u; // 802027FC
L_80202800:;
  c->r[5]=R32(c->r[17]+0x00000000u); // 80202800
  c->r[7]=c->r[18]|c->r[18]; // 80202804
  c->r[6]=R32(c->r[17]+0x00000004u); // 80202808
  c->r[4]=c->r[27]+0x000001FFu; // 8020280C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202810
  c->lr=0x80202818u; f_8020B328(c); // 80202814
  c->r[0]=0u+0x00000000u; // 80202818
  c->r[18]=0u+0x00000000u; // 8020281C
  W32(c->r[17]+0x0000000Cu,c->r[0]); // 80202820
  goto L_802029BC; // 80202824
L_80202828:;
  c->r[0]=0u+0x00000001u; // 80202828
  c->r[3]=c->r[22]+0x000053A0u; // 8020282C
  W32(c->r[17]+0x00000008u,c->r[0]); // 80202830
  c->r[0]=R32(c->r[3]+0x00000018u); // 80202834
  W32(c->r[17]+0x00000010u,c->r[0]); // 80202838
  c->r[0]=R16(c->r[3]+0x0000005Cu); // 8020283C
  W32(c->r[17]+0x00000014u,c->r[0]); // 80202840
  c->r[0]=R32(c->r[17]+0x0000000Cu); // 80202844
  cmps(c,0,(int32_t)c->r[0],0); // 80202848
  if (crb(c,2)) { goto L_802029BC; } // 8020284C
  c->r[22]=0u+0x00000000u; // 80202850
  c->r[6]=c->r[31]+0x00000008u; // 80202854
  W32(c->r[31]+0x00000008u,c->r[22]); // 80202858
  c->r[5]=0u+0x00000000u; // 8020285C
  c->r[3]=R32(c->r[17]+0x00000000u); // 80202860
  c->r[4]=R32(c->r[17]+0x00000004u); // 80202864
  c->lr=0x8020286Cu; f_801FFD28(c); // 80202868
  cmps(c,0,(int32_t)c->r[3],0); // 8020286C
  c->r[18]=c->r[3]|c->r[3]; // 80202870
  if (crb(c,2)) { goto L_80202884; } // 80202874
  W32(c->r[31]+0x00000008u,c->r[22]); // 80202878
  W32(c->r[17]+0x0000000Cu,c->r[22]); // 8020287C
  goto L_80202A1C; // 80202880
L_80202884:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80202884
  cmps(c,0,(int32_t)c->r[0],0); // 80202888
  if (!crb(c,2)) { goto L_80202898; } // 8020288C
  W32(c->r[17]+0x0000000Cu,c->r[22]); // 80202890
  goto L_802029BC; // 80202894
L_80202898:;
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80202898
  c->r[4]=0u+0x00000020u; // 8020289C
  c->lr=0x802028A4u; f_8020EA58(c); // 802028A0
  cmps(c,0,(int32_t)c->r[3],0); // 802028A4
  c->r[21]=c->r[3]|c->r[3]; // 802028A8
  if (!crb(c,2)) { goto L_802028B8; } // 802028AC
  c->r[18]=0u+0xFFFFF05Bu; // 802028B0
  goto L_80202A1C; // 802028B4
L_802028B8:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 802028B8
  c->r[5]=c->r[21]|c->r[21]; // 802028BC
  c->r[4]=R32(c->r[17]+0x00000004u); // 802028C0
  c->r[6]=c->r[31]+0x00000008u; // 802028C4
  c->lr=0x802028CCu; f_801FFD28(c); // 802028C8
  cmps(c,0,(int32_t)c->r[3],0); // 802028CC
  c->r[18]=c->r[3]|c->r[3]; // 802028D0
  if (!crb(c,2)) { goto L_80202A1C; } // 802028D4
  c->r[22]=0u+0x00000000u; // 802028D8
  c->r[28]=0u+0x00000000u; // 802028DC
  c->r[25]=0u+0x00000000u; // 802028E0
  goto L_80202990; // 802028E4
L_802028E8:;
  c->r[3]=0u+0x80380000u; // 802028E8
  c->r[0]=rotl(c->r[25],4)&0xFFFFFFF0u; // 802028EC
  c->r[3]=c->r[3]+0x000053A0u; // 802028F0
  c->r[3]=c->r[3]+c->r[0]; // 802028F4
  c->r[0]=R16(c->r[3]+0x00000066u); // 802028F8
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 802028FC
  if (!crb(c,2)) { goto L_8020298C; } // 80202900
  c->r[24]=0u+0x00000000u; // 80202904
  goto L_80202934; // 80202908
L_8020290C:;
  c->r[4]=0u+0x80380000u; // 8020290C
  c->r[0]=rotl(c->r[24],2)&0xFFFFFFFCu; // 80202910
  c->r[4]=c->r[4]+0x000053A0u; // 80202914
  c->r[3]=rotl(c->r[25],4)&0xFFFFFFF0u; // 80202918
  c->r[3]=c->r[4]+c->r[3]; // 8020291C
  c->r[0]=R32(c->r[21]+c->r[0]); // 80202920
  c->r[3]=R32(c->r[3]+0x00000060u); // 80202924
  cmpu(c,0,c->r[3],c->r[0]); // 80202928
  if (crb(c,2)) { goto L_80202940; } // 8020292C
  c->r[24]=c->r[24]+0x00000001u; // 80202930
L_80202934:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80202934
  cmpu(c,0,c->r[24],c->r[0]); // 80202938
  if (crb(c,0)) { IRQCHK(c); goto L_8020290C; } // 8020293C
L_80202940:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80202940
  cmpu(c,0,c->r[24],c->r[0]); // 80202944
  if (!crb(c,2)) { goto L_8020298C; } // 80202948
  c->r[3]=0u+0x80380000u; // 8020294C
  c->r[0]=rotl(c->r[25],4)&0xFFFFFFF0u; // 80202950
  c->r[3]=c->r[3]+0x000053A0u; // 80202954
  c->r[5]=R32(c->r[17]+0x00000000u); // 80202958
  c->r[3]=c->r[3]+c->r[0]; // 8020295C
  c->r[6]=R32(c->r[17]+0x00000004u); // 80202960
  c->r[8]=R32(c->r[3]+0x0000006Cu); // 80202964
  c->r[4]=c->r[27]+0x00000225u; // 80202968
  c->r[7]=R32(c->r[3]+0x00000060u); // 8020296C
  c->r[3]=0u+0x00000003u; // 80202970
  c->r[0]=c->r[8]+0x0000000Fu; // 80202974
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF0u; // 80202978
  c->r[22]=addc(c,c->r[22],c->r[0],0); // 8020297C
  c->r[28]=addc(c,c->r[28],0,c->xer_ca); // 80202980
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202984
  c->lr=0x8020298Cu; f_8020B328(c); // 80202988
L_8020298C:;
  c->r[25]=c->r[25]+0x00000001u; // 8020298C
L_80202990:;
  c->r[3]=0u+0x80380000u; // 80202990
  c->r[3]=c->r[3]+0x000053A0u; // 80202994
  c->r[0]=R16(c->r[3]+0x0000005Eu); // 80202998
  cmpu(c,0,c->r[25],c->r[0]); // 8020299C
  if (crb(c,0)) { IRQCHK(c); goto L_802028E8; } // 802029A0
  c->r[4]=0u+0x00000000u; // 802029A4
  c->r[3]=c->r[22]^c->r[4]; // 802029A8
  c->r[0]=c->r[28]^c->r[4]; // 802029AC
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 802029B0
  if (crb(c,2)) { goto L_802029BC; } // 802029B4
  W32(c->r[17]+0x0000000Cu,c->r[4]); // 802029B8
L_802029BC:;
  c->r[26]=c->r[26]+0x00000001u; // 802029BC
L_802029C0:;
  cmpu(c,0,c->r[26],c->r[23]); // 802029C0
  if (crb(c,0)) { IRQCHK(c); goto L_80202770; } // 802029C4
  W32(c->r[30]+0x00000000u,c->r[23]); // 802029C8
  goto L_80202A1C; // 802029CC
  c->r[4]=c->r[27]+0x000000A1u; // 802029D0
  c->r[3]=0u+0x00000001u; // 802029D4
  c->r[5]=0u+0x0000022Du; // 802029D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802029DC
  c->lr=0x802029E4u; f_8020B328(c); // 802029E0
  c->r[18]=0u+0xFFFFF05Bu; // 802029E4
  goto L_80202A04; // 802029E8
  c->r[4]=c->r[27]+0x000000FEu; // 802029EC
  c->r[3]=0u+0x00000001u; // 802029F0
  c->r[5]=0u+0x0000022Du; // 802029F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802029F8
  c->lr=0x80202A00u; f_8020B328(c); // 802029FC
  c->r[18]=0u+0xFFFFF05Fu; // 80202A00
L_80202A04:;
  c->r[3]=c->r[31]+0x0000003Cu; // 80202A04
  c->lr=0x80202A0Cu; f_8010BF74(c); // 80202A08
  c->r[0]=c->r[0]|0x00000000u; // 80202A0C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80202A10
  c->r[1]=R32(c->r[31]+0x00000050u); // 80202A14
  W32(c->r[1]+0x00000000u,c->r[0]); // 80202A18
L_80202A1C:;
  cmps(c,0,(int32_t)c->r[20],0); // 80202A1C
  if (crb(c,2)) { goto L_80202A2C; } // 80202A20
  c->r[3]=c->r[20]|c->r[20]; // 80202A24
  c->lr=0x80202A2Cu; f_8020EB2C(c); // 80202A28
L_80202A2C:;
  cmps(c,0,(int32_t)c->r[19],0); // 80202A2C
  if (crb(c,2)) { goto L_80202A3C; } // 80202A30
  c->r[3]=c->r[19]|c->r[19]; // 80202A34
  c->lr=0x80202A3Cu; f_8020EB2C(c); // 80202A38
L_80202A3C:;
  cmps(c,0,(int32_t)c->r[21],0); // 80202A3C
  if (crb(c,2)) { goto L_80202A4C; } // 80202A40
  c->r[3]=c->r[21]|c->r[21]; // 80202A44
  c->lr=0x80202A4Cu; f_8020EB2C(c); // 80202A48
L_80202A4C:;
  c->r[3]=0u+0x80380000u; // 80202A4C
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80202A50
  c->lr=0x80202A58u; f_80203E30(c); // 80202A54
  c->r[3]=c->r[18]|c->r[18]; // 80202A58
L_80202A5C:;
  c->r[10]=c->r[31]|c->r[31]; // 80202A5C
  c->r[11]=c->r[10]+0x000000A0u; // 80202A60
  c->lr=0x80202A68u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202A64
  c->r[10]=R32(c->r[1]+0x00000000u); // 80202A68
  c->r[0]=R32(c->r[10]+0x00000004u); // 80202A6C
  c->r[1]=c->r[10]|c->r[10]; // 80202A70
  c->lr=c->r[0]; // 80202A74
  return; // 80202A78
}

// fn_80202A7C
void f_80202A7C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80202A7C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80202A80
  if (!crb(c,2)) { goto L_80202A90; } // 80202A84
  c->r[3]=c->r[3]+0x00000001u; // 80202A88
  return; // 80202A8C
L_80202A90:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80202A90
  return; // 80202A94
}

// fn_80202A98
void f_80202A98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202A98
  c->r[0]=c->lr; // 80202A9C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80202AA0
  c->r[11]=c->r[1]+0x00000070u; // 80202AA4
  c->lr=0x80202AACu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202AA8
  c->r[31]=c->r[1]|c->r[1]; // 80202AAC
  c->r[7]=0u+0x80380000u; // 80202AB0
  c->r[28]=0u+0x00000000u; // 80202AB4
  c->r[0]=R32(c->r[7]+0x000025E8u); // 80202AB8
  c->r[30]=0u+0x802A0000u; // 80202ABC
  W32(c->r[31]+0x0000000Cu,c->r[28]); // 80202AC0
  c->r[24]=c->r[3]|c->r[3]; // 80202AC4
  cmps(c,0,(int32_t)c->r[0],0); // 80202AC8
  c->r[23]=c->r[4]|c->r[4]; // 80202ACC
  W32(c->r[31]+0x00000008u,c->r[28]); // 80202AD0
  c->r[25]=c->r[5]|c->r[5]; // 80202AD4
  c->r[26]=c->r[6]|c->r[6]; // 80202AD8
  c->r[30]=c->r[30]+0x00002E68u; // 80202ADC
  if (!crb(c,2)) { goto L_80202AEC; } // 80202AE0
  c->r[3]=0u+0xFFFFF037u; // 80202AE4
  goto L_80202E28; // 80202AE8
L_80202AEC:;
  c->r[3]=c->r[0]|c->r[0]; // 80202AEC
  c->lr=0x80202AF4u; f_80203E04(c); // 80202AF0
  cmps(c,0,(int32_t)c->r[26],0); // 80202AF4
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 80202AF8
  if (!crb(c,2)) { goto L_80202B08; } // 80202AFC
  c->r[27]=0u+0xFFFFF05Cu; // 80202B00
  goto L_80202DF8; // 80202B04
L_80202B08:;
  cmps(c,0,(int32_t)c->r[25],0); // 80202B08
  if (!crb(c,2)) { goto L_80202B18; } // 80202B0C
  c->r[29]=0u+0x00000000u; // 80202B10
  goto L_80202B1C; // 80202B14
L_80202B18:;
  c->r[29]=R32(c->r[26]+0x00000000u); // 80202B18
L_80202B1C:;
  c->r[0]=0u+0x00000000u; // 80202B1C
  c->r[3]=0u+0x80380000u; // 80202B20
  W32(c->r[26]+0x00000000u,c->r[0]); // 80202B24
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80202B28
  c->r[0]=R8(c->r[3]+0x00000232u); // 80202B2C
  cmps(c,0,(int32_t)c->r[0],0); // 80202B30
  if (crb(c,2)) { goto L_80202B54; } // 80202B34
  c->r[4]=c->r[23]|c->r[23]; // 80202B38
  c->r[3]=c->r[24]|c->r[24]; // 80202B3C
  c->lr=0x80202B44u; f_8021EB34(c); // 80202B40
  cmps(c,0,(int32_t)c->r[3],0); // 80202B44
  if (!crb(c,2)) { goto L_80202B54; } // 80202B48
  c->r[27]=0u+0xFFFFF05Cu; // 80202B4C
  goto L_80202DF8; // 80202B50
L_80202B54:;
  c->r[4]=c->r[23]|c->r[23]; // 80202B54
  c->r[3]=c->r[24]|c->r[24]; // 80202B58
  c->r[5]=c->r[31]+0x0000000Cu; // 80202B5C
  c->r[6]=c->r[31]+0x00000008u; // 80202B60
  c->lr=0x80202B68u; f_8020B560(c); // 80202B64
  cmps(c,0,(int32_t)c->r[3],0); // 80202B68
  c->r[27]=c->r[3]|c->r[3]; // 80202B6C
  if (!crb(c,2)) { goto L_80202DF8; } // 80202B70
  c->r[0]=R32(c->r[31]+0x00000008u); // 80202B74
  cmps(c,0,(int32_t)c->r[0],0); // 80202B78
  if (!crb(c,2)) { goto L_80202B88; } // 80202B7C
  c->r[27]=0u+0xFFFFF02Eu; // 80202B80
  goto L_80202DF8; // 80202B84
L_80202B88:;
  c->r[0]=0u+0x00002060u; // 80202B88
  c->r[22]=0u+0x80380000u; // 80202B8C
  W32(c->r[31]+0x00000014u,c->r[0]); // 80202B90
  c->r[4]=c->r[23]|c->r[23]; // 80202B94
  c->r[3]=c->r[24]|c->r[24]; // 80202B98
  c->r[5]=c->r[22]+0x000053A0u; // 80202B9C
  c->r[6]=c->r[31]+0x00000014u; // 80202BA0
  c->lr=0x80202BA8u; f_8020B758(c); // 80202BA4
  cmps(c,0,(int32_t)c->r[3],0); // 80202BA8
  c->r[27]=c->r[3]|c->r[3]; // 80202BAC
  if (crb(c,2)) { goto L_80202BE4; } // 80202BB0
  cmps(c,0,(int32_t)c->r[3],-4070); // 80202BB4
  c->r[3]=0u+0x00000001u; // 80202BB8
  if (!crb(c,2)) { goto L_80202BC4; } // 80202BBC
  c->r[3]=0u+0x00000003u; // 80202BC0
L_80202BC4:;
  c->r[6]=c->r[23]|c->r[23]; // 80202BC4
  c->r[5]=c->r[24]|c->r[24]; // 80202BC8
  c->r[7]=c->r[27]|c->r[27]; // 80202BCC
  c->r[4]=c->r[30]+0x000001FFu; // 80202BD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202BD4
  c->lr=0x80202BDCu; f_8020B328(c); // 80202BD8
  c->r[27]=0u+0xFFFFF01Au; // 80202BDC
  goto L_80202DF8; // 80202BE0
L_80202BE4:;
  cmps(c,0,(int32_t)c->r[29],0); // 80202BE4
  if (!crb(c,2)) { goto L_80202BFC; } // 80202BE8
  c->r[3]=c->r[22]+0x000053A0u; // 80202BEC
  c->r[0]=R16(c->r[3]+0x0000005Eu); // 80202BF0
  W32(c->r[26]+0x00000000u,c->r[0]); // 80202BF4
  goto L_80202DF8; // 80202BF8
L_80202BFC:;
  c->r[3]=c->r[22]+0x000053A0u; // 80202BFC
  c->r[0]=R16(c->r[3]+0x0000005Eu); // 80202C00
  cmpu(c,0,c->r[29],c->r[0]); // 80202C04
  if (!crb(c,0)) { goto L_80202C18; } // 80202C08
  W32(c->r[26]+0x00000000u,c->r[0]); // 80202C0C
  c->r[27]=0u+0xFFFFF04Eu; // 80202C10
  goto L_80202DF8; // 80202C14
L_80202C18:;
  c->r[29]=0u+0x00000000u; // 80202C18
  c->r[4]=c->r[23]|c->r[23]; // 80202C1C
  W32(c->r[31]+0x00000010u,c->r[29]); // 80202C20
  c->r[3]=c->r[24]|c->r[24]; // 80202C24
  c->r[6]=c->r[31]+0x00000010u; // 80202C28
  c->r[5]=0u+0x00000000u; // 80202C2C
  c->lr=0x80202C34u; f_801FFD28(c); // 80202C30
  cmps(c,0,(int32_t)c->r[3],0); // 80202C34
  c->r[27]=c->r[3]|c->r[3]; // 80202C38
  if (!crb(c,2)) { goto L_80202C4C; } // 80202C3C
  c->r[0]=R32(c->r[31]+0x00000010u); // 80202C40
  cmps(c,0,(int32_t)c->r[0],0); // 80202C44
  if (!crb(c,2)) { goto L_80202C58; } // 80202C48
L_80202C4C:;
  c->r[0]=0u+0x00000000u; // 80202C4C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80202C50
  goto L_80202C9C; // 80202C54
L_80202C58:;
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80202C58
  c->r[4]=0u+0x00000020u; // 80202C5C
  c->lr=0x80202C64u; f_8020EA58(c); // 80202C60
  cmps(c,0,(int32_t)c->r[3],0); // 80202C64
  c->r[28]=c->r[3]|c->r[3]; // 80202C68
  if (!crb(c,2)) { goto L_80202C78; } // 80202C6C
  c->r[27]=0u+0xFFFFF05Bu; // 80202C70
  goto L_80202DF8; // 80202C74
L_80202C78:;
  c->r[4]=c->r[23]|c->r[23]; // 80202C78
  c->r[3]=c->r[24]|c->r[24]; // 80202C7C
  c->r[5]=c->r[28]|c->r[28]; // 80202C80
  c->r[6]=c->r[31]+0x00000010u; // 80202C84
  c->lr=0x80202C8Cu; f_801FFD28(c); // 80202C88
  cmps(c,0,(int32_t)c->r[3],0); // 80202C8C
  c->r[27]=c->r[3]|c->r[3]; // 80202C90
  if (crb(c,2)) { goto L_80202C9C; } // 80202C94
  W32(c->r[31]+0x00000010u,c->r[29]); // 80202C98
L_80202C9C:;
  c->r[29]=0u+0x00000000u; // 80202C9C
  goto L_80202D90; // 80202CA0
L_80202CA4:;
  c->r[3]=c->r[31]+0x00000018u; // 80202CA4
  c->r[4]=0u+0x00000000u; // 80202CA8
  c->r[5]=0u+0x00000010u; // 80202CAC
  c->lr=0x80202CB4u; f_8000443C(c); // 80202CB0
  c->r[3]=0u+0x80380000u; // 80202CB4
  c->r[6]=rotl(c->r[29],4)&0xFFFFFFF0u; // 80202CB8
  c->r[3]=c->r[3]+0x000053A0u; // 80202CBC
  c->r[4]=c->r[3]+c->r[6]; // 80202CC0
  c->r[3]=R16(c->r[4]+0x00000066u); // 80202CC4
  c->r[5]=R16(c->r[4]+0x00000064u); // 80202CC8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80202CCC
  c->r[0]=R32(c->r[4]+0x00000068u); // 80202CD0
  c->r[4]=R32(c->r[4]+0x0000006Cu); // 80202CD4
  W16(c->r[31]+0x0000001Cu,c->r[5]); // 80202CD8
  W32(c->r[31]+0x00000024u,c->r[4]); // 80202CDC
  W32(c->r[31]+0x00000020u,c->r[0]); // 80202CE0
  W16(c->r[31]+0x0000001Eu,c->r[3]); // 80202CE4
  if (crb(c,2)) { goto L_80202CFC; } // 80202CE8
  c->r[3]=c->r[25]+c->r[6]; // 80202CEC
  c->r[4]=c->r[31]+0x00000018u; // 80202CF0
  c->lr=0x80202CF8u; f_80202E48(c); // 80202CF4
  goto L_80202D8C; // 80202CF8
L_80202CFC:;
  c->r[5]=0u+0x00000000u; // 80202CFC
  goto L_80202D3C; // 80202D00
L_80202D04:;
  c->r[4]=0u+0x80380000u; // 80202D04
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80202D08
  c->r[4]=c->r[4]+0x000053A0u; // 80202D0C
  c->r[3]=rotl(c->r[29],4)&0xFFFFFFF0u; // 80202D10
  c->r[3]=c->r[4]+c->r[3]; // 80202D14
  c->r[0]=R32(c->r[28]+c->r[0]); // 80202D18
  c->r[3]=R32(c->r[3]+0x00000060u); // 80202D1C
  cmpu(c,0,c->r[3],c->r[0]); // 80202D20
  if (!crb(c,2)) { goto L_80202D38; } // 80202D24
  c->r[0]=R32(c->r[31]+0x00000018u); // 80202D28
  c->r[0]=c->r[0]|0x00000001u; // 80202D2C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80202D30
  goto L_80202D48; // 80202D34
L_80202D38:;
  c->r[5]=c->r[5]+0x00000001u; // 80202D38
L_80202D3C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80202D3C
  cmpu(c,0,c->r[5],c->r[0]); // 80202D40
  if (crb(c,0)) { IRQCHK(c); goto L_80202D04; } // 80202D44
L_80202D48:;
  c->r[4]=0u+0x80380000u; // 80202D48
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 80202D4C
  c->r[4]=c->r[4]+0x000053A0u; // 80202D50
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80202D54
  c->r[5]=c->r[4]+c->r[0]; // 80202D58
  c->r[4]=R32(c->r[31]+0x00000008u); // 80202D5C
  c->r[5]=c->r[5]+0x00000060u; // 80202D60
  c->lr=0x80202D68u; f_8020B6D8(c); // 80202D64
  cmps(c,0,(int32_t)c->r[3],0); // 80202D68
  if (crb(c,2)) { goto L_80202D7C; } // 80202D6C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80202D70
  c->r[0]=c->r[0]|0x00000002u; // 80202D74
  W32(c->r[31]+0x00000018u,c->r[0]); // 80202D78
L_80202D7C:;
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 80202D7C
  c->r[4]=c->r[31]+0x00000018u; // 80202D80
  c->r[3]=c->r[25]+c->r[0]; // 80202D84
  c->lr=0x80202D8Cu; f_80202E48(c); // 80202D88
L_80202D8C:;
  c->r[29]=c->r[29]+0x00000001u; // 80202D8C
L_80202D90:;
  c->r[3]=0u+0x80380000u; // 80202D90
  c->r[3]=c->r[3]+0x000053A0u; // 80202D94
  c->r[0]=R16(c->r[3]+0x0000005Eu); // 80202D98
  cmpu(c,0,c->r[29],c->r[0]); // 80202D9C
  if (crb(c,0)) { IRQCHK(c); goto L_80202CA4; } // 80202DA0
  W32(c->r[26]+0x00000000u,c->r[0]); // 80202DA4
  goto L_80202DF8; // 80202DA8
  c->r[4]=c->r[30]+0x000000A1u; // 80202DAC
  c->r[3]=0u+0x00000001u; // 80202DB0
  c->r[5]=0u+0x000002BEu; // 80202DB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202DB8
  c->lr=0x80202DC0u; f_8020B328(c); // 80202DBC
  c->r[27]=0u+0xFFFFF05Bu; // 80202DC0
  goto L_80202DE0; // 80202DC4
  c->r[4]=c->r[30]+0x000000FEu; // 80202DC8
  c->r[3]=0u+0x00000001u; // 80202DCC
  c->r[5]=0u+0x000002BEu; // 80202DD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202DD4
  c->lr=0x80202DDCu; f_8020B328(c); // 80202DD8
  c->r[27]=0u+0xFFFFF05Fu; // 80202DDC
L_80202DE0:;
  c->r[3]=c->r[31]+0x00000028u; // 80202DE0
  c->lr=0x80202DE8u; f_8010BF74(c); // 80202DE4
  c->r[0]=c->r[0]|0x00000000u; // 80202DE8
  c->r[0]=R32(c->r[1]+0x00000000u); // 80202DEC
  c->r[1]=R32(c->r[31]+0x0000003Cu); // 80202DF0
  W32(c->r[1]+0x00000000u,c->r[0]); // 80202DF4
L_80202DF8:;
  cmps(c,0,(int32_t)c->r[28],0); // 80202DF8
  if (crb(c,2)) { goto L_80202E08; } // 80202DFC
  c->r[3]=c->r[28]|c->r[28]; // 80202E00
  c->lr=0x80202E08u; f_8020EB2C(c); // 80202E04
L_80202E08:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80202E08
  cmps(c,0,(int32_t)c->r[3],0); // 80202E0C
  if (crb(c,2)) { goto L_80202E18; } // 80202E10
  c->lr=0x80202E18u; f_8020EB2C(c); // 80202E14
L_80202E18:;
  c->r[3]=0u+0x80380000u; // 80202E18
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80202E1C
  c->lr=0x80202E24u; f_80203E30(c); // 80202E20
  c->r[3]=c->r[27]|c->r[27]; // 80202E24
L_80202E28:;
  c->r[10]=c->r[31]|c->r[31]; // 80202E28
  c->r[11]=c->r[10]+0x00000070u; // 80202E2C
  c->lr=0x80202E34u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202E30
  c->r[10]=R32(c->r[1]+0x00000000u); // 80202E34
  c->r[0]=R32(c->r[10]+0x00000004u); // 80202E38
  c->r[1]=c->r[10]|c->r[10]; // 80202E3C
  c->lr=c->r[0]; // 80202E40
  return; // 80202E44
}

// fn_80202E48
void f_80202E48(Ctx* __restrict c) {
  c->r[7]=R32(c->r[4]+0x00000000u); // 80202E48
  c->r[6]=R16(c->r[4]+0x00000004u); // 80202E4C
  c->r[5]=R16(c->r[4]+0x00000006u); // 80202E50
  c->r[0]=R32(c->r[4]+0x00000008u); // 80202E54
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 80202E58
  W32(c->r[3]+0x00000000u,c->r[7]); // 80202E5C
  W16(c->r[3]+0x00000004u,c->r[6]); // 80202E60
  W16(c->r[3]+0x00000006u,c->r[5]); // 80202E64
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80202E68
  W32(c->r[3]+0x00000008u,c->r[0]); // 80202E6C
  return; // 80202E70
}

// fn_80202E74
void f_80202E74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202E74
  c->r[0]=c->lr; // 80202E78
  W32(c->r[1]+0x00000034u,c->r[0]); // 80202E7C
  c->r[11]=c->r[1]+0x00000030u; // 80202E80
  c->lr=0x80202E88u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202E84
  c->r[31]=c->r[1]|c->r[1]; // 80202E88
  c->r[28]=0u+0x80380000u; // 80202E8C
  c->r[29]=c->r[3]|c->r[3]; // 80202E90
  c->r[4]=R32(c->r[28]+0x000025E8u); // 80202E94
  c->r[30]=0u+0x00000000u; // 80202E98
  cmps(c,0,(int32_t)c->r[4],0); // 80202E9C
  if (!crb(c,2)) { goto L_80202EAC; } // 80202EA0
  c->r[3]=0u+0xFFFFF037u; // 80202EA4
  goto L_80202FA4; // 80202EA8
L_80202EAC:;
  c->r[0]=R8(c->r[4]+0x0000016Cu); // 80202EAC
  cmps(c,0,(int32_t)c->r[0],0); // 80202EB0
  if (!crb(c,2)) { goto L_80202EC0; } // 80202EB4
  c->r[3]=0u+0xFFFFF01Bu; // 80202EB8
  goto L_80202FA4; // 80202EBC
L_80202EC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80202EC0
  if (!crb(c,2)) { goto L_80202ED0; } // 80202EC4
  c->r[3]=0u+0xFFFFF05Cu; // 80202EC8
  goto L_80202FA4; // 80202ECC
L_80202ED0:;
  c->r[3]=c->r[4]|c->r[4]; // 80202ED0
  c->lr=0x80202ED8u; f_80203E04(c); // 80202ED4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80202ED8
  c->r[3]=0u+0x00000000u; // 80202EDC
  c->r[4]=R32(c->r[28]+0x000025E8u); // 80202EE0
  c->r[0]=R32(c->r[4]+0x00000058u); // 80202EE4
  c->r[4]=R32(c->r[4]+0x0000005Cu); // 80202EE8
  c->r[0]=c->r[0]^c->r[3]; // 80202EEC
  c->r[3]=c->r[4]^c->r[3]; // 80202EF0
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80202EF4
  if (crb(c,2)) { goto L_80202F38; } // 80202EF8
  c->lr=0x80202F00u; f_802017FC(c); // 80202EFC
  c->r[6]=R32(c->r[28]+0x000025E8u); // 80202F00
  c->r[5]=R32(c->r[6]+0x00000064u); // 80202F04
  c->r[0]=R32(c->r[6]+0x00000060u); // 80202F08
  c->r[4]=addc(c,~c->r[5],c->r[4],1); // 80202F0C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80202F10
  c->lr=0x80202F18u; f_80201800(c); // 80202F14
  c->r[6]=R32(c->r[28]+0x000025E8u); // 80202F18
  c->r[5]=R32(c->r[6]+0x0000005Cu); // 80202F1C
  c->r[0]=R32(c->r[6]+0x00000058u); // 80202F20
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 80202F24
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80202F28
  W32(c->r[29]+0x00000004u,c->r[4]); // 80202F2C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80202F30
  goto L_80202F94; // 80202F34
L_80202F38:;
  c->r[30]=0u+0xFFFFF05Fu; // 80202F38
  goto L_80202F94; // 80202F3C
  c->r[4]=0u+0x802A0000u; // 80202F40
  c->r[3]=0u+0x00000001u; // 80202F44
  c->r[4]=c->r[4]+0x00002F09u; // 80202F48
  c->r[5]=0u+0x000002E5u; // 80202F4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202F50
  c->lr=0x80202F58u; f_8020B328(c); // 80202F54
  c->r[30]=0u+0xFFFFF05Bu; // 80202F58
  goto L_80202F7C; // 80202F5C
  c->r[4]=0u+0x802A0000u; // 80202F60
  c->r[3]=0u+0x00000001u; // 80202F64
  c->r[4]=c->r[4]+0x00002F66u; // 80202F68
  c->r[5]=0u+0x000002E5u; // 80202F6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202F70
  c->lr=0x80202F78u; f_8020B328(c); // 80202F74
  c->r[30]=0u+0xFFFFF05Fu; // 80202F78
L_80202F7C:;
  c->r[3]=c->r[31]+0x00000008u; // 80202F7C
  c->lr=0x80202F84u; f_8010BF74(c); // 80202F80
  c->r[0]=c->r[0]|0x00000000u; // 80202F84
  c->r[0]=R32(c->r[1]+0x00000000u); // 80202F88
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 80202F8C
  W32(c->r[1]+0x00000000u,c->r[0]); // 80202F90
L_80202F94:;
  c->r[3]=0u+0x80380000u; // 80202F94
  c->r[3]=R32(c->r[3]+0x000025E8u); // 80202F98
  c->lr=0x80202FA0u; f_80203E30(c); // 80202F9C
  c->r[3]=c->r[30]|c->r[30]; // 80202FA0
L_80202FA4:;
  c->r[10]=c->r[31]|c->r[31]; // 80202FA4
  c->r[11]=c->r[10]+0x00000030u; // 80202FA8
  c->lr=0x80202FB0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202FAC
  c->r[10]=R32(c->r[1]+0x00000000u); // 80202FB0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80202FB4
  c->r[1]=c->r[10]|c->r[10]; // 80202FB8
  c->lr=c->r[0]; // 80202FBC
  return; // 80202FC0
}

// fn_80202FC4
void f_80202FC4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 80202FC4
  c->r[6]=0u+0x00000000u; // 80202FC8
  if (crb(c,2)) { goto L_80202FD8; } // 80202FCC
  cmps(c,0,(int32_t)c->r[5],0); // 80202FD0
  if (!crb(c,2)) { goto L_80202FE0; } // 80202FD4
L_80202FD8:;
  c->r[3]=0u+0xFFFFF05Cu; // 80202FD8
  return; // 80202FDC
L_80202FE0:;
  cmps(c,0,(int32_t)c->r[3],2); // 80202FE0
  if (crb(c,2)) { goto L_8020301C; } // 80202FE4
  if (!crb(c,0)) { goto L_80202FFC; } // 80202FE8
  cmps(c,0,(int32_t)c->r[3],0); // 80202FEC
  if (crb(c,2)) { goto L_80203008; } // 80202FF0
  if (!crb(c,0)) { goto L_80203030; } // 80202FF4
  goto L_80203054; // 80202FF8
L_80202FFC:;
  cmps(c,0,(int32_t)c->r[3],4); // 80202FFC
  if (!crb(c,0)) { goto L_80203054; } // 80203000
  goto L_80203040; // 80203004
L_80203008:;
  c->r[3]=0u+0x00000003u; // 80203008
  c->r[0]=0u+0x00000008u; // 8020300C
  W32(c->r[4]+0x00000000u,c->r[3]); // 80203010
  W32(c->r[5]+0x00000000u,c->r[0]); // 80203014
  goto L_80203058; // 80203018
L_8020301C:;
  c->r[3]=0u+0x00000002u; // 8020301C
  c->r[0]=0u+0x00000006u; // 80203020
  W32(c->r[4]+0x00000000u,c->r[3]); // 80203024
  W32(c->r[5]+0x00000000u,c->r[0]); // 80203028
  goto L_80203058; // 8020302C
L_80203030:;
  c->r[0]=0u+0x00000002u; // 80203030
  W32(c->r[4]+0x00000000u,c->r[0]); // 80203034
  W32(c->r[5]+0x00000000u,c->r[0]); // 80203038
  goto L_80203058; // 8020303C
L_80203040:;
  c->r[3]=0u+0x00000003u; // 80203040
  c->r[0]=0u+0x00000008u; // 80203044
  W32(c->r[4]+0x00000000u,c->r[3]); // 80203048
  W32(c->r[5]+0x00000000u,c->r[0]); // 8020304C
  goto L_80203058; // 80203050
L_80203054:;
  c->r[6]=0u+0xFFFFF05Cu; // 80203054
L_80203058:;
  c->r[3]=c->r[6]|c->r[6]; // 80203058
  return; // 8020305C
}

// fn_80203060
void f_80203060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203060
  c->r[0]=c->lr; // 80203064
  c->r[3]=0u+0x80380000u; // 80203068
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020306C
  c->r[4]=R32(c->r[3]+0x000025E8u); // 80203070
  cmps(c,0,(int32_t)c->r[4],0); // 80203074
  if (!crb(c,2)) { goto L_80203084; } // 80203078
  c->r[3]=0u+0xFFFFF037u; // 8020307C
  goto L_802030A0; // 80203080
L_80203084:;
  c->r[3]=R32(c->r[4]+0x00000188u); // 80203084
  c->r[4]=R32(c->r[4]+0x0000018Cu); // 80203088
  c->lr=0x80203090u; f_8021E664(c); // 8020308C
  c->r[3]=addc(c,~c->r[3],0x00000000u,1); // 80203090
  c->r[0]=0u+0xFFFFF01Eu; // 80203094
  c->r[3]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 80203098
  c->r[3]=c->r[0]&c->r[3]; // 8020309C
L_802030A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802030A0
  c->lr=c->r[0]; // 802030A4
  c->r[1]=c->r[1]+0x00000010u; // 802030A8
  return; // 802030AC
}

// dtor_802030B0
void f_802030B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802030B0
  c->r[0]=c->lr; // 802030B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802030B8
  c->r[11]=c->r[1]+0x00000020u; // 802030BC
  c->lr=0x802030C4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802030C0
  cmps(c,0,(int32_t)c->r[3],0); // 802030C4
  c->r[29]=c->r[3]|c->r[3]; // 802030C8
  c->r[30]=c->r[4]|c->r[4]; // 802030CC
  if (crb(c,2)) { goto L_8020312C; } // 802030D0
  c->r[4]=R32(c->r[3]+0x00000000u); // 802030D4
  c->r[0]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[0]); // 802030D8
  if (crb(c,2)) { goto L_80203110; } // 802030DC
  c->r[31]=R32(c->r[3]+0x00000008u); // 802030E0
  c->r[5]=rotl(c->r[4],0)&0x7FFFFFFFu; // 802030E4
  c->r[4]=0u+0x802A0000u; // 802030E8
  c->r[3]=0u+0x00000006u; // 802030EC
  c->r[7]=c->r[5]|c->r[5]; // 802030F0
  c->r[8]=c->r[31]|c->r[31]; // 802030F4
  c->r[4]=c->r[4]+0x00002FB9u; // 802030F8
  c->r[6]=0u+0x00000001u; // 802030FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203100
  c->lr=0x80203108u; f_8020B328(c); // 80203104
  c->r[3]=c->r[31]|c->r[31]; // 80203108
  c->lr=0x80203110u; f_8020EB2C(c); // 8020310C
L_80203110:;
  c->r[3]=c->r[29]|c->r[29]; // 80203110
  c->r[4]=0u+0xFFFFFFFFu; // 80203114
  c->lr=0x8020311Cu; f_802035AC(c); // 80203118
  cmps(c,0,(int32_t)c->r[30],0); // 8020311C
  if (!crb(c,1)) { goto L_8020312C; } // 80203120
  c->r[3]=c->r[29]|c->r[29]; // 80203124
  c->lr=0x8020312Cu; f_8009230C(c); // 80203128
L_8020312C:;
  c->r[11]=c->r[1]+0x00000020u; // 8020312C
  c->r[3]=c->r[29]|c->r[29]; // 80203130
  c->lr=0x80203138u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203134
  c->r[0]=R32(c->r[1]+0x00000024u); // 80203138
  c->lr=c->r[0]; // 8020313C
  c->r[1]=c->r[1]+0x00000020u; // 80203140
  return; // 80203144
}

// fn_80203148
void f_80203148(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203148
  c->r[0]=c->lr; // 8020314C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80203150
  c->r[11]=c->r[1]+0x00000080u; // 80203154
  c->lr=0x8020315Cu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203158
  W32(c->r[1]+0x00000008u,c->r[5]); // 8020315C
  c->r[30]=0u+0x802A0000u; // 80203160
  c->r[18]=c->r[3]|c->r[3]; // 80203164
  c->r[19]=c->r[4]|c->r[4]; // 80203168
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020316C
  c->r[20]=c->r[6]|c->r[6]; // 80203170
  c->r[21]=c->r[7]|c->r[7]; // 80203174
  c->r[30]=c->r[30]+0x00002E68u; // 80203178
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 8020317C
  if (!crb(c,2)) { goto L_80203198; } // 80203180
  c->r[0]=R8(c->r[3]+0x00000000u); // 80203184
  c->r[28]=c->r[3]+0x00000001u; // 80203188
  c->r[27]=0u+0x0000000Bu; // 8020318C
  c->r[29]=rotl(c->r[0],0)&0x0000007Fu; // 80203190
  goto L_802031A4; // 80203194
L_80203198:;
  c->r[28]=R32(c->r[3]+0x00000008u); // 80203198
  c->r[27]=rotl(c->r[0],0)&0x7FFFFFFFu; // 8020319C
  c->r[29]=R32(c->r[3]+0x00000004u); // 802031A0
L_802031A4:;
  cmpu(c,0,c->r[4],c->r[29]); // 802031A4
  if (!crb(c,1)) { goto L_802031D8; } // 802031A8
  c->r[4]=c->r[30]+0x000003AAu; // 802031AC
  c->r[3]=c->r[1]+0x00000030u; // 802031B0
  c->lr=0x802031B8u; f_802034AC(c); // 802031B4
  c->r[4]=0u+0x80290000u; // 802031B8
  c->r[5]=0u+0x80120000u; // 802031BC
  c->r[4]=c->r[4]+0x00006C68u; // 802031C0
  c->r[3]=c->r[30]+0x000003C5u; // 802031C4
  W32(c->r[1]+0x00000030u,c->r[4]); // 802031C8
  c->r[4]=c->r[1]+0x00000030u; // 802031CC
  c->r[5]=c->r[5]+0xFFFFD68Cu; // 802031D0
  c->lr=0x802031D8u; f_8010BE30(c); // 802031D4
L_802031D8:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 802031D8
  c->r[3]=c->r[29]-c->r[19]; // 802031DC
  W32(c->r[1]+0x00000014u,c->r[3]); // 802031E0
  c->r[4]=c->r[1]+0x00000008u; // 802031E4
  cmpu(c,0,c->r[3],c->r[0]); // 802031E8
  if (!crb(c,0)) { goto L_802031F4; } // 802031EC
  c->r[4]=c->r[1]+0x00000014u; // 802031F0
L_802031F4:;
  c->r[3]=0u+0x80000000u; // 802031F4
  c->r[25]=c->r[21]-c->r[20]; // 802031F8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 802031FC
  c->r[26]=R32(c->r[4]+0x00000000u); // 80203200
  cmpu(c,0,c->r[25],c->r[0]); // 80203204
  if (crb(c,1)) { goto L_8020321C; } // 80203208
  c->r[3]=c->r[29]-c->r[26]; // 8020320C
  c->r[0]=c->r[0]-c->r[25]; // 80203210
  cmpu(c,0,c->r[3],c->r[0]); // 80203214
  if (!crb(c,1)) { goto L_80203248; } // 80203218
L_8020321C:;
  c->r[4]=c->r[30]+0x000003FCu; // 8020321C
  c->r[3]=c->r[1]+0x00000024u; // 80203220
  c->lr=0x80203228u; f_802034AC(c); // 80203224
  c->r[4]=0u+0x80290000u; // 80203228
  c->r[5]=0u+0x80120000u; // 8020322C
  c->r[4]=c->r[4]+0x00006C90u; // 80203230
  c->r[3]=c->r[30]+0x00000417u; // 80203234
  W32(c->r[1]+0x00000024u,c->r[4]); // 80203238
  c->r[4]=c->r[1]+0x00000024u; // 8020323C
  c->r[5]=c->r[5]+0xFFFFD5F8u; // 80203240
  c->lr=0x80203248u; f_8010BE30(c); // 80203244
L_80203248:;
  c->r[3]=c->r[29]-c->r[26]; // 80203248
  c->r[0]=c->r[19]+c->r[26]; // 8020324C
  c->r[24]=c->r[25]+c->r[3]; // 80203250
  cmpu(c,0,c->r[24],c->r[27]); // 80203254
  c->r[23]=c->r[29]-c->r[0]; // 80203258
  if (crb(c,0)) { goto L_802033AC; } // 8020325C
  c->r[3]=c->r[27]+0x0000000Fu; // 80203260
  c->r[0]=c->r[24]+0x00000001u; // 80203264
  c->r[22]=rotl(c->r[3],0)&0xFFFFFFF0u; // 80203268
  goto L_8020327C; // 8020326C
L_80203270:;
  c->r[3]=rotl(c->r[22],1)&0xFFFFFFFEu; // 80203270
  c->r[3]=c->r[3]+0x0000000Fu; // 80203274
  c->r[22]=rotl(c->r[3],0)&0xFFFFFFF0u; // 80203278
L_8020327C:;
  cmpu(c,0,c->r[22],c->r[0]); // 8020327C
  if (crb(c,0)) { IRQCHK(c); goto L_80203270; } // 80203280
  c->r[5]=c->r[22]|c->r[22]; // 80203284
  c->r[7]=c->r[22]|c->r[22]; // 80203288
  c->r[4]=c->r[30]+0x0000044Eu; // 8020328C
  c->r[3]=0u+0x00000006u; // 80203290
  c->r[6]=0u+0x00000001u; // 80203294
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203298
  c->lr=0x802032A0u; f_8020B328(c); // 8020329C
  c->r[3]=c->r[22]|c->r[22]; // 802032A0
  c->lr=0x802032A8u; f_8020EAC4(c); // 802032A4
  cmps(c,0,(int32_t)c->r[3],0); // 802032A8
  c->r[29]=c->r[3]|c->r[3]; // 802032AC
  if (!crb(c,2)) { goto L_802032F0; } // 802032B0
  c->r[5]=c->r[22]|c->r[22]; // 802032B4
  c->r[7]=c->r[22]|c->r[22]; // 802032B8
  c->r[4]=c->r[30]+0x0000047Au; // 802032BC
  c->r[3]=0u+0x00000001u; // 802032C0
  c->r[6]=0u+0x00000001u; // 802032C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802032C8
  c->lr=0x802032D0u; f_8020B328(c); // 802032CC
  c->r[4]=0u+0x80290000u; // 802032D0
  c->r[5]=0u+0x80110000u; // 802032D4
  c->r[4]=c->r[4]+0x00006158u; // 802032D8
  c->r[3]=c->r[30]+0x000004B3u; // 802032DC
  W32(c->r[1]+0x00000010u,c->r[4]); // 802032E0
  c->r[4]=c->r[1]+0x00000010u; // 802032E4
  c->r[5]=c->r[5]+0xFFFF9768u; // 802032E8
  c->lr=0x802032F0u; f_8010BE30(c); // 802032EC
L_802032F0:;
  c->r[5]=c->r[29]|c->r[29]; // 802032F0
  c->r[4]=c->r[30]+0x000004D5u; // 802032F4
  c->r[3]=0u+0x00000006u; // 802032F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802032FC
  c->lr=0x80203304u; f_8020B328(c); // 80203300
  cmps(c,0,(int32_t)c->r[19],0); // 80203304
  if (crb(c,2)) { goto L_8020331C; } // 80203308
  c->r[3]=c->r[29]|c->r[29]; // 8020330C
  c->r[4]=c->r[28]|c->r[28]; // 80203310
  c->r[5]=c->r[19]|c->r[19]; // 80203314
  c->lr=0x8020331Cu; f_80004338(c); // 80203318
L_8020331C:;
  c->r[17]=c->r[29]+c->r[19]; // 8020331C
  c->r[4]=c->r[20]|c->r[20]; // 80203320
  c->r[3]=c->r[17]|c->r[17]; // 80203324
  c->r[5]=c->r[21]-c->r[20]; // 80203328
  c->lr=0x80203330u; f_8011007C(c); // 8020332C
  cmps(c,0,(int32_t)c->r[23],0); // 80203330
  if (crb(c,2)) { goto L_8020334C; } // 80203334
  c->r[0]=c->r[28]+c->r[19]; // 80203338
  c->r[5]=c->r[23]|c->r[23]; // 8020333C
  c->r[3]=c->r[17]+c->r[25]; // 80203340
  c->r[4]=c->r[26]+c->r[0]; // 80203344
  c->lr=0x8020334Cu; f_80004338(c); // 80203348
L_8020334C:;
  c->r[0]=R8(c->r[30]+0x000003A8u); // 8020334C
  cmps(c,0,(int32_t)c->r[31],0); // 80203350
  W8(c->r[29]+c->r[24],c->r[0]); // 80203354
  if (crb(c,2)) { goto L_80203388; } // 80203358
  c->r[5]=c->r[27]|c->r[27]; // 8020335C
  c->r[7]=c->r[27]|c->r[27]; // 80203360
  c->r[8]=c->r[28]|c->r[28]; // 80203364
  c->r[4]=c->r[30]+0x00000151u; // 80203368
  c->r[3]=0u+0x00000006u; // 8020336C
  c->r[6]=0u+0x00000001u; // 80203370
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203374
  c->lr=0x8020337Cu; f_8020B328(c); // 80203378
  c->r[3]=c->r[28]|c->r[28]; // 8020337C
  c->lr=0x80203384u; f_8020EB2C(c); // 80203380
  goto L_80203394; // 80203384
L_80203388:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 80203388
  c->r[0]=c->r[0]|0x80000000u; // 8020338C
  W32(c->r[18]+0x00000000u,c->r[0]); // 80203390
L_80203394:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 80203394
  c->r[0]=(rotl(c->r[22],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 80203398
  W32(c->r[18]+0x00000008u,c->r[29]); // 8020339C
  W32(c->r[18]+0x00000004u,c->r[24]); // 802033A0
  W32(c->r[18]+0x00000000u,c->r[0]); // 802033A4
  goto L_80203490; // 802033A8
L_802033AC:;
  c->r[0]=0u+0x00000003u; // 802033AC
  c->r[4]=c->r[1]+0x00000018u; // 802033B0
  c->r[5]=0u+0x00000000u; // 802033B4
  c->r[3]=0u+0x00000000u; // 802033B8
  c->ctr=c->r[0]; // 802033BC
L_802033C0:;
  W32(c->r[4]+c->r[3],c->r[5]); // 802033C0
  c->r[3]=c->r[3]+0x00000004u; // 802033C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802033C0; } // 802033C8
  cmps(c,0,(int32_t)c->r[23],0); // 802033CC
  if (crb(c,2)) { goto L_80203434; } // 802033D0
  c->r[0]=c->r[28]+c->r[19]; // 802033D4
  c->r[0]=c->r[25]+c->r[0]; // 802033D8
  cmpu(c,0,c->r[0],c->r[21]); // 802033DC
  if (!crb(c,0)) { goto L_80203434; } // 802033E0
  c->r[0]=c->r[28]+c->r[29]; // 802033E4
  cmpu(c,0,c->r[21],c->r[0]); // 802033E8
  if (crb(c,1)) { goto L_80203434; } // 802033EC
  c->r[3]=c->r[1]+0x00000018u; // 802033F0
  c->lr=0x802033F8u; f_802020A8(c); // 802033F4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 802033F8
  c->r[5]=c->r[3]|c->r[3]; // 802033FC
  c->r[6]=c->r[20]|c->r[20]; // 80203400
  c->r[7]=c->r[21]|c->r[21]; // 80203404
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80203408
  c->r[3]=c->r[1]+0x00000018u; // 8020340C
  c->r[8]=c->r[1]+0x0000000Du; // 80203410
  c->r[4]=0u+0x00000000u; // 80203414
  c->lr=0x8020341Cu; f_80203148(c); // 80203418
  c->r[0]=R32(c->r[1]+0x00000018u); // 8020341C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80203420
  if (crb(c,2)) { goto L_80203430; } // 80203424
  c->r[20]=R32(c->r[1]+0x00000020u); // 80203428
  goto L_80203434; // 8020342C
L_80203430:;
  c->r[20]=c->r[1]+0x00000019u; // 80203430
L_80203434:;
  cmps(c,0,(int32_t)c->r[23],0); // 80203434
  if (crb(c,2)) { goto L_80203450; } // 80203438
  c->r[0]=c->r[28]+c->r[19]; // 8020343C
  c->r[5]=c->r[23]|c->r[23]; // 80203440
  c->r[3]=c->r[0]+c->r[25]; // 80203444
  c->r[4]=c->r[0]+c->r[26]; // 80203448
  c->lr=0x80203450u; f_8011007C(c); // 8020344C
L_80203450:;
  c->r[4]=c->r[20]|c->r[20]; // 80203450
  c->r[5]=c->r[25]|c->r[25]; // 80203454
  c->r[3]=c->r[28]+c->r[19]; // 80203458
  c->lr=0x80203460u; f_8011007C(c); // 8020345C
  c->r[0]=R8(c->r[30]+0x000003A9u); // 80203460
  cmps(c,0,(int32_t)c->r[31],0); // 80203464
  W8(c->r[28]+c->r[24],c->r[0]); // 80203468
  if (!crb(c,2)) { goto L_80203480; } // 8020346C
  c->r[0]=R8(c->r[18]+0x00000000u); // 80203470
  c->r[0]=(rotl(c->r[24],0)&0x0000007Fu)|(c->r[0]&~0x0000007Fu); // 80203474
  W8(c->r[18]+0x00000000u,c->r[0]); // 80203478
  goto L_80203484; // 8020347C
L_80203480:;
  W32(c->r[18]+0x00000004u,c->r[24]); // 80203480
L_80203484:;
  c->r[3]=c->r[1]+0x00000018u; // 80203484
  c->r[4]=0u+0xFFFFFFFFu; // 80203488
  c->lr=0x80203490u; f_802030B0(c); // 8020348C
L_80203490:;
  c->r[11]=c->r[1]+0x00000080u; // 80203490
  c->r[3]=c->r[18]|c->r[18]; // 80203494
  c->lr=0x8020349Cu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203498
  c->r[0]=R32(c->r[1]+0x00000084u); // 8020349C
  c->lr=c->r[0]; // 802034A0
  c->r[1]=c->r[1]+0x00000080u; // 802034A4
  return; // 802034A8
}

// fn_802034AC
void f_802034AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802034AC
  c->r[0]=c->lr; // 802034B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802034B4
  c->r[11]=c->r[1]+0x00000030u; // 802034B8
  c->lr=0x802034C0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802034BC
  c->r[5]=0u+0x80290000u; // 802034C0
  c->r[0]=0u+0x00000000u; // 802034C4
  c->r[5]=c->r[5]+0x00006CB8u; // 802034C8
  c->r[30]=c->r[4]|c->r[4]; // 802034CC
  W32(c->r[3]+0x00000000u,c->r[5]); // 802034D0
  c->r[29]=c->r[3]|c->r[3]; // 802034D4
  c->r[3]=c->r[30]|c->r[30]; // 802034D8
  W8(c->r[1]+0x00000008u,c->r[0]); // 802034DC
  c->lr=0x802034E4u; f_80109598(c); // 802034E0
  c->r[3]=c->r[3]+0x00000001u; // 802034E4
  c->lr=0x802034ECu; f_800922A0(c); // 802034E8
  W32(c->r[29]+0x00000004u,c->r[3]); // 802034EC
  c->r[0]=c->r[1]+0x00000008u; // 802034F0
  c->r[31]=c->r[3]|c->r[3]; // 802034F4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802034F8
  c->r[3]=0u+0x00000010u; // 802034FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80203500
  c->lr=0x80203508u; f_8009228C(c); // 80203504
  cmps(c,0,(int32_t)c->r[3],0); // 80203508
  if (crb(c,2)) { goto L_8020352C; } // 8020350C
  c->r[0]=0u+0x00000001u; // 80203510
  c->r[4]=0u+0x80290000u; // 80203514
  W32(c->r[3]+0x00000004u,c->r[0]); // 80203518
  c->r[4]=c->r[4]+0x00006B18u; // 8020351C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80203520
  W32(c->r[3]+0x00000000u,c->r[4]); // 80203524
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 80203528
L_8020352C:;
  W32(c->r[29]+0x00000008u,c->r[3]); // 8020352C
  c->r[0]=0u+0x00000000u; // 80203530
  c->r[3]=c->r[1]+0x0000000Cu; // 80203534
  c->r[4]=0u+0xFFFFFFFFu; // 80203538
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8020353C
  c->lr=0x80203544u; f_8011B384(c); // 80203540
  c->r[3]=R32(c->r[29]+0x00000004u); // 80203544
  c->r[4]=c->r[30]|c->r[30]; // 80203548
  c->lr=0x80203550u; f_8011410C(c); // 8020354C
  c->r[11]=c->r[1]+0x00000030u; // 80203550
  c->r[3]=c->r[29]|c->r[29]; // 80203554
  c->lr=0x8020355Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203558
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020355C
  c->lr=c->r[0]; // 80203560
  c->r[1]=c->r[1]+0x00000030u; // 80203564
  return; // 80203568
}

// dtor_8020356C
void f_8020356C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020356C
  c->r[0]=c->lr; // 80203570
  cmps(c,0,(int32_t)c->r[3],0); // 80203574
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020357C
  c->r[31]=c->r[3]|c->r[3]; // 80203580
  if (crb(c,2)) { goto L_80203594; } // 80203584
  cmps(c,0,(int32_t)c->r[4],0); // 80203588
  if (!crb(c,1)) { goto L_80203594; } // 8020358C
  c->lr=0x80203594u; f_8009230C(c); // 80203590
L_80203594:;
  c->r[3]=c->r[31]|c->r[31]; // 80203594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203598
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020359C
  c->lr=c->r[0]; // 802035A0
  c->r[1]=c->r[1]+0x00000010u; // 802035A4
  return; // 802035A8
}

// dtor_802035AC
void f_802035AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802035AC
  c->r[0]=c->lr; // 802035B0
  cmps(c,0,(int32_t)c->r[3],0); // 802035B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802035B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802035BC
  c->r[31]=c->r[3]|c->r[3]; // 802035C0
  if (crb(c,2)) { goto L_802035D4; } // 802035C4
  cmps(c,0,(int32_t)c->r[4],0); // 802035C8
  if (!crb(c,1)) { goto L_802035D4; } // 802035CC
  c->lr=0x802035D4u; f_8009230C(c); // 802035D0
L_802035D4:;
  c->r[3]=c->r[31]|c->r[31]; // 802035D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802035D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802035DC
  c->lr=c->r[0]; // 802035E0
  c->r[1]=c->r[1]+0x00000010u; // 802035E4
  return; // 802035E8
}

// fn_802035EC
void f_802035EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802035EC
  c->r[0]=c->lr; // 802035F0
  W32(c->r[1]+0x00000054u,c->r[0]); // 802035F4
  c->r[11]=c->r[1]+0x00000050u; // 802035F8
  c->lr=0x80203600u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802035FC
  c->r[31]=c->r[1]|c->r[1]; // 80203600
  c->r[30]=0u+0x802A0000u; // 80203604
  W32(c->r[31]+0x00000038u,c->r[1]); // 80203608
  c->r[29]=c->r[3]|c->r[3]; // 8020360C
  c->r[30]=c->r[30]+0x00003408u; // 80203610
L_80203614:;
  c->r[3]=0u+0x80380000u; // 80203614
  c->r[4]=c->r[31]+0x00000008u; // 80203618
  c->r[3]=c->r[3]+0x00002638u; // 8020361C
  c->r[5]=0u+0x00000001u; // 80203620
  c->lr=0x80203628u; f_802016B0(c); // 80203624
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 80203628
  cmps(c,0,(int32_t)c->r[0],0); // 8020362C
  if (crb(c,2)) { goto L_80203648; } // 80203630
  c->r[4]=c->r[30]+0x00000011u; // 80203634
  c->r[3]=0u+0x00000003u; // 80203638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020363C
  c->lr=0x80203644u; f_8020B328(c); // 80203640
  goto L_802036FC; // 80203644
L_80203648:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80203648
  c->r[3]=c->r[3]+0x00000008u; // 8020364C
  c->lr=0x80203654u; f_80203778(c); // 80203650
  c->r[5]=c->r[3]|c->r[3]; // 80203654
  c->r[4]=c->r[30]+0x00000035u; // 80203658
  c->r[3]=0u+0x00000004u; // 8020365C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203660
  c->lr=0x80203668u; f_8020B328(c); // 80203664
  c->r[3]=0u+0x80380000u; // 80203668
  c->r[3]=c->r[3]+0x000025F0u; // 8020366C
  c->lr=0x80203674u; f_80201558(c); // 80203670
  W32(c->r[31]+0x00000020u,c->r[1]); // 80203674
  c->r[3]=c->r[29]|c->r[29]; // 80203678
  c->r[4]=R32(c->r[31]+0x00000008u); // 8020367C
  c->lr=0x80203684u; f_80203EB4(c); // 80203680
  goto L_802036CC; // 80203684
  c->r[4]=c->r[30]+0x00000058u; // 80203688
  c->r[3]=0u+0x00000001u; // 8020368C
  c->r[5]=0u+0x00000049u; // 80203690
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203694
  c->lr=0x8020369Cu; f_8020B328(c); // 80203698
  goto L_802036B4; // 8020369C
  c->r[4]=c->r[30]+0x000000B9u; // 802036A0
  c->r[3]=0u+0x00000001u; // 802036A4
  c->r[5]=0u+0x00000049u; // 802036A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802036AC
  c->lr=0x802036B4u; f_8020B328(c); // 802036B0
L_802036B4:;
  c->r[3]=c->r[31]+0x0000000Cu; // 802036B4
  c->lr=0x802036BCu; f_8010BF74(c); // 802036B8
  c->r[0]=c->r[0]|0x00000000u; // 802036BC
  c->r[0]=R32(c->r[1]+0x00000000u); // 802036C0
  c->r[1]=R32(c->r[31]+0x00000020u); // 802036C4
  W32(c->r[1]+0x00000000u,c->r[0]); // 802036C8
L_802036CC:;
  c->r[3]=0u+0x80380000u; // 802036CC
  c->r[3]=c->r[3]+0x000025F0u; // 802036D0
  c->lr=0x802036D8u; f_802015D0(c); // 802036D4
  c->r[3]=R32(c->r[31]+0x00000008u); // 802036D8
  c->r[3]=c->r[3]+0x00000008u; // 802036DC
  c->lr=0x802036E4u; f_80203778(c); // 802036E0
  c->r[5]=c->r[3]|c->r[3]; // 802036E4
  c->r[4]=c->r[30]+0x00000110u; // 802036E8
  c->r[3]=0u+0x00000004u; // 802036EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802036F0
  c->lr=0x802036F8u; f_8020B328(c); // 802036F4
  IRQCHK(c); goto L_80203614; // 802036F8
L_802036FC:;
  c->r[4]=c->r[30]+0x00000132u; // 802036FC
  c->r[3]=0u+0x00000004u; // 80203700
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203704
  c->lr=0x8020370Cu; f_8020B328(c); // 80203708
  goto L_80203754; // 8020370C
  c->r[4]=c->r[30]+0x00000058u; // 80203710
  c->r[3]=0u+0x00000001u; // 80203714
  c->r[5]=0u+0x00000050u; // 80203718
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020371C
  c->lr=0x80203724u; f_8020B328(c); // 80203720
  goto L_8020373C; // 80203724
  c->r[4]=c->r[30]+0x000000B9u; // 80203728
  c->r[3]=0u+0x00000001u; // 8020372C
  c->r[5]=0u+0x00000050u; // 80203730
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203734
  c->lr=0x8020373Cu; f_8020B328(c); // 80203738
L_8020373C:;
  c->r[3]=c->r[31]+0x00000024u; // 8020373C
  c->lr=0x80203744u; f_8010BF74(c); // 80203740
  c->r[0]=c->r[0]|0x00000000u; // 80203744
  c->r[0]=R32(c->r[1]+0x00000000u); // 80203748
  c->r[1]=R32(c->r[31]+0x00000038u); // 8020374C
  W32(c->r[1]+0x00000000u,c->r[0]); // 80203750
L_80203754:;
  c->r[10]=c->r[31]|c->r[31]; // 80203754
  c->r[3]=0u+0x00000000u; // 80203758
  c->r[11]=c->r[10]+0x00000050u; // 8020375C
  c->lr=0x80203764u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203760
  c->r[10]=R32(c->r[1]+0x00000000u); // 80203764
  c->r[0]=R32(c->r[10]+0x00000004u); // 80203768
  c->r[1]=c->r[10]|c->r[10]; // 8020376C
  c->lr=c->r[0]; // 80203770
  return; // 80203774
}

// fn_80203778
void f_80203778(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80203778
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8020377C
  if (!crb(c,2)) { goto L_8020378C; } // 80203780
  c->r[3]=c->r[3]+0x00000001u; // 80203784
  return; // 80203788
L_8020378C:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8020378C
  return; // 80203790
}

// fn_80203794
void f_80203794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203794
  c->r[0]=c->lr; // 80203798
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020379C
  c->r[11]=c->r[1]+0x00000020u; // 802037A0
  c->lr=0x802037A8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802037A4
  c->r[29]=c->r[3]|c->r[3]; // 802037A8
  c->r[3]=c->r[3]+0x00000010u; // 802037AC
  c->lr=0x802037B4u; f_80203990(c); // 802037B0
  c->r[3]=c->r[29]+0x0000001Cu; // 802037B4
  c->lr=0x802037BCu; f_80203990(c); // 802037B8
  c->r[3]=c->r[29]+0x00000028u; // 802037BC
  c->lr=0x802037C4u; f_80203990(c); // 802037C0
  c->r[3]=c->r[29]+0x00000034u; // 802037C4
  c->lr=0x802037CCu; f_80203990(c); // 802037C8
  c->r[3]=c->r[29]+0x00000040u; // 802037CC
  c->lr=0x802037D4u; f_80203990(c); // 802037D0
  c->r[3]=c->r[29]+0x00000068u; // 802037D4
  c->lr=0x802037DCu; f_80203990(c); // 802037D8
  c->r[3]=c->r[29]+0x00000074u; // 802037DC
  c->lr=0x802037E4u; f_80203990(c); // 802037E0
  c->r[30]=0u+0x00000000u; // 802037E4
  c->r[3]=c->r[29]+0x000000B8u; // 802037E8
  W32(c->r[29]+0x00000080u,c->r[30]); // 802037EC
  W32(c->r[29]+0x00000084u,c->r[30]); // 802037F0
  W32(c->r[29]+0x00000088u,c->r[30]); // 802037F4
  c->lr=0x802037FCu; f_80203990(c); // 802037F8
  c->r[3]=c->r[29]+0x000000C4u; // 802037FC
  c->lr=0x80203804u; f_80203990(c); // 80203800
  c->r[3]=c->r[29]+0x000000D0u; // 80203804
  c->lr=0x8020380Cu; f_80203990(c); // 80203808
  c->r[3]=c->r[29]+0x000000DCu; // 8020380C
  c->lr=0x80203814u; f_80203990(c); // 80203810
  c->r[3]=c->r[29]+0x000000E8u; // 80203814
  c->lr=0x8020381Cu; f_80203990(c); // 80203818
  c->r[3]=c->r[29]+0x000000F4u; // 8020381C
  c->lr=0x80203824u; f_80203990(c); // 80203820
  c->r[3]=c->r[29]+0x00000100u; // 80203824
  c->lr=0x8020382Cu; f_80203990(c); // 80203828
  c->r[3]=c->r[29]+0x0000010Cu; // 8020382C
  c->lr=0x80203834u; f_80203990(c); // 80203830
  c->r[3]=c->r[29]+0x00000118u; // 80203834
  c->lr=0x8020383Cu; f_80203990(c); // 80203838
  c->r[3]=c->r[29]+0x00000124u; // 8020383C
  c->lr=0x80203844u; f_80203990(c); // 80203840
  c->r[3]=c->r[29]+0x00000130u; // 80203844
  c->lr=0x8020384Cu; f_80203990(c); // 80203848
  c->r[3]=c->r[29]+0x0000013Cu; // 8020384C
  c->lr=0x80203854u; f_80203990(c); // 80203850
  c->r[3]=c->r[29]+0x00000170u; // 80203854
  c->lr=0x8020385Cu; f_80203990(c); // 80203858
  c->r[3]=c->r[29]+0x0000017Cu; // 8020385C
  c->lr=0x80203864u; f_80203990(c); // 80203860
  c->r[3]=c->r[29]+0x00000194u; // 80203864
  c->lr=0x8020386Cu; f_80203990(c); // 80203868
  c->r[3]=c->r[29]+0x000001A0u; // 8020386C
  c->lr=0x80203874u; f_80203990(c); // 80203870
  c->r[3]=c->r[29]+0x000001B4u; // 80203874
  c->lr=0x8020387Cu; f_80203990(c); // 80203878
  c->r[3]=c->r[29]+0x000001FCu; // 8020387C
  c->lr=0x80203884u; f_80203990(c); // 80203880
  c->r[3]=c->r[29]+0x00000208u; // 80203884
  c->lr=0x8020388Cu; f_80203990(c); // 80203888
  c->r[3]=c->r[29]+0x00000214u; // 8020388C
  c->lr=0x80203894u; f_80203990(c); // 80203890
  c->r[5]=0u+0x80380000u; // 80203894
  c->r[31]=0u+0x00000001u; // 80203898
  c->r[5]=c->r[5]+0x00002668u; // 8020389C
  c->r[0]=0u+0x80000000u; // 802038A0
  c->r[4]=0u+0x802A0000u; // 802038A4
  W32(c->r[29]+0x00000000u,c->r[31]); // 802038A8
  c->r[3]=c->r[29]+0x00000214u; // 802038AC
  W32(c->r[29]+0x00000004u,c->r[30]); // 802038B0
  c->r[4]=c->r[4]+0x00003567u; // 802038B4
  W32(c->r[29]+0x00000008u,c->r[5]); // 802038B8
  W8(c->r[29]+0x0000000Cu,c->r[30]); // 802038BC
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 802038C0
  W8(c->r[29]+0x00000050u,c->r[30]); // 802038C4
  W32(c->r[29]+0x0000005Cu,c->r[30]); // 802038C8
  W32(c->r[29]+0x00000058u,c->r[30]); // 802038CC
  W32(c->r[29]+0x00000064u,c->r[30]); // 802038D0
  W32(c->r[29]+0x00000060u,c->r[30]); // 802038D4
  W32(c->r[29]+0x000000B4u,c->r[31]); // 802038D8
  W32(c->r[29]+0x0000014Cu,c->r[30]); // 802038DC
  W32(c->r[29]+0x00000148u,c->r[30]); // 802038E0
  W32(c->r[29]+0x00000154u,c->r[30]); // 802038E4
  W32(c->r[29]+0x00000150u,c->r[30]); // 802038E8
  W32(c->r[29]+0x0000015Cu,c->r[30]); // 802038EC
  W32(c->r[29]+0x00000158u,c->r[30]); // 802038F0
  W32(c->r[29]+0x00000164u,c->r[30]); // 802038F4
  W32(c->r[29]+0x00000160u,c->r[30]); // 802038F8
  W8(c->r[29]+0x00000168u,c->r[30]); // 802038FC
  W8(c->r[29]+0x00000169u,c->r[30]); // 80203900
  W8(c->r[29]+0x0000016Au,c->r[30]); // 80203904
  W8(c->r[29]+0x0000016Bu,c->r[30]); // 80203908
  W32(c->r[29]+0x000001D4u,c->r[30]); // 8020390C
  W32(c->r[29]+0x000001D8u,c->r[30]); // 80203910
  W32(c->r[29]+0x000001DCu,c->r[30]); // 80203914
  W8(c->r[29]+0x000001F8u,c->r[30]); // 80203918
  W8(c->r[29]+0x000001F9u,c->r[30]); // 8020391C
  c->lr=0x80203924u; f_80201DF4(c); // 80203920
  W32(c->r[29]+0x00000220u,c->r[30]); // 80203924
  c->r[11]=c->r[1]+0x00000020u; // 80203928
  c->r[3]=c->r[29]|c->r[29]; // 8020392C
  W32(c->r[29]+0x00000224u,c->r[30]); // 80203930
  W32(c->r[29]+0x00000228u,c->r[30]); // 80203934
  W32(c->r[29]+0x0000022Cu,c->r[30]); // 80203938
  W8(c->r[29]+0x00000230u,c->r[30]); // 8020393C
  W8(c->r[29]+0x00000231u,c->r[30]); // 80203940
  W8(c->r[29]+0x00000233u,c->r[30]); // 80203944
  W8(c->r[29]+0x00000234u,c->r[30]); // 80203948
  W32(c->r[29]+0x0000008Cu,c->r[30]); // 8020394C
  W32(c->r[29]+0x00000090u,c->r[30]); // 80203950
  W32(c->r[29]+0x00000094u,c->r[30]); // 80203954
  W32(c->r[29]+0x00000098u,c->r[30]); // 80203958
  W32(c->r[29]+0x0000009Cu,c->r[30]); // 8020395C
  W32(c->r[29]+0x000000A0u,c->r[30]); // 80203960
  W32(c->r[29]+0x000000A4u,c->r[30]); // 80203964
  W32(c->r[29]+0x000000A8u,c->r[30]); // 80203968
  W32(c->r[29]+0x000000ACu,c->r[30]); // 8020396C
  W32(c->r[29]+0x000000B0u,c->r[30]); // 80203970
  W8(c->r[29]+0x0000016Cu,c->r[31]); // 80203974
  W8(c->r[29]+0x00000232u,c->r[30]); // 80203978
  c->lr=0x80203980u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020397C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80203980
  c->lr=c->r[0]; // 80203984
  c->r[1]=c->r[1]+0x00000020u; // 80203988
  return; // 8020398C
}

// fn_80203990
void f_80203990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203990
  c->r[0]=c->lr; // 80203994
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020399C
  c->r[31]=c->r[3]|c->r[3]; // 802039A0
  c->lr=0x802039A8u; f_802039C8(c); // 802039A4
  c->r[3]=c->r[31]|c->r[31]; // 802039A8
  c->lr=0x802039B0u; f_802039CC(c); // 802039AC
  c->r[3]=c->r[31]|c->r[31]; // 802039B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802039B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802039B8
  c->lr=c->r[0]; // 802039BC
  c->r[1]=c->r[1]+0x00000010u; // 802039C0
  return; // 802039C4
}

// fn_802039C8
void f_802039C8(Ctx* __restrict c) {
  return; // 802039C8
}

// fn_802039CC
void f_802039CC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000003u; // 802039CC
  c->r[5]=0u+0x00000000u; // 802039D0
  c->r[4]=0u+0x00000000u; // 802039D4
  c->ctr=c->r[0]; // 802039D8
L_802039DC:;
  W32(c->r[3]+c->r[4],c->r[5]); // 802039DC
  c->r[4]=c->r[4]+0x00000004u; // 802039E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802039DC; } // 802039E4
  return; // 802039E8
}

// fn_802039EC
void f_802039EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802039EC
  c->r[0]=c->lr; // 802039F0
  cmps(c,0,(int32_t)c->r[3],0); // 802039F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802039F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802039FC
  c->r[31]=c->r[3]|c->r[3]; // 80203A00
  if (crb(c,2)) { goto L_80203A14; } // 80203A04
  cmps(c,0,(int32_t)c->r[4],0); // 80203A08
  if (!crb(c,1)) { goto L_80203A14; } // 80203A0C
  c->lr=0x80203A14u; f_8009230C(c); // 80203A10
L_80203A14:;
  c->r[3]=c->r[31]|c->r[31]; // 80203A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203A1C
  c->lr=c->r[0]; // 80203A20
  c->r[1]=c->r[1]+0x00000010u; // 80203A24
  return; // 80203A28
}

// fn_80203A2C
void f_80203A2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203A2C
  c->r[0]=c->lr; // 80203A30
  cmps(c,0,(int32_t)c->r[3],0); // 80203A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203A3C
  c->r[31]=c->r[4]|c->r[4]; // 80203A40
  W32(c->r[1]+0x00000008u,c->r[30]); // 80203A44
  c->r[30]=c->r[3]|c->r[3]; // 80203A48
  if (crb(c,2)) { goto L_80203A6C; } // 80203A4C
  if (crb(c,2)) { goto L_80203A5C; } // 80203A50
  c->r[4]=0u+0x00000000u; // 80203A54
  c->lr=0x80203A5Cu; f_80206E98(c); // 80203A58
L_80203A5C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80203A5C
  if (!crb(c,1)) { goto L_80203A6C; } // 80203A60
  c->r[3]=c->r[30]|c->r[30]; // 80203A64
  c->lr=0x80203A6Cu; f_8009230C(c); // 80203A68
L_80203A6C:;
  c->r[3]=c->r[30]|c->r[30]; // 80203A6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203A70
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203A74
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203A78
  c->lr=c->r[0]; // 80203A7C
  c->r[1]=c->r[1]+0x00000010u; // 80203A80
  return; // 80203A84
}

// dtor_80203A88
void f_80203A88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203A88
  c->r[0]=c->lr; // 80203A8C
  cmps(c,0,(int32_t)c->r[3],0); // 80203A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80203A98
  c->r[31]=c->r[4]|c->r[4]; // 80203A9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80203AA0
  c->r[30]=c->r[3]|c->r[3]; // 80203AA4
  if (crb(c,2)) { goto L_80203AC4; } // 80203AA8
  c->r[4]=0u+0x00000000u; // 80203AAC
  c->lr=0x80203AB4u; f_80203A2C(c); // 80203AB0
  cmps(c,0,(int32_t)c->r[31],0); // 80203AB4
  if (!crb(c,1)) { goto L_80203AC4; } // 80203AB8
  c->r[3]=c->r[30]|c->r[30]; // 80203ABC
  c->lr=0x80203AC4u; f_8009230C(c); // 80203AC0
L_80203AC4:;
  c->r[3]=c->r[30]|c->r[30]; // 80203AC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80203AC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80203ACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203AD0
  c->lr=c->r[0]; // 80203AD4
  c->r[1]=c->r[1]+0x00000010u; // 80203AD8
  return; // 80203ADC
}

// fn_80203AE0
void f_80203AE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203AE0
  c->r[0]=c->lr; // 80203AE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80203AE8
  c->r[11]=c->r[1]+0x00000040u; // 80203AEC
  c->lr=0x80203AF4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203AF0
  c->r[31]=c->r[1]|c->r[1]; // 80203AF4
  c->r[29]=0u+0x80380000u; // 80203AF8
  c->r[30]=0u+0x802A0000u; // 80203AFC
  c->r[29]=c->r[29]+0x000025E8u; // 80203B00
  c->r[28]=c->r[3]|c->r[3]; // 80203B04
  c->r[0]=R8(c->r[29]+0x00000004u); // 80203B08
  c->r[30]=c->r[30]+0x00003408u; // 80203B0C
  cmps(c,0,(int32_t)c->r[0],0); // 80203B10
  if (crb(c,2)) { goto L_80203B20; } // 80203B14
  c->r[3]=0u+0xFFFFF039u; // 80203B18
  goto L_80203CB8; // 80203B1C
L_80203B20:;
  c->r[0]=0u+0x00000001u; // 80203B20
  c->r[3]=c->r[29]+0x00000008u; // 80203B24
  W8(c->r[29]+0x00000004u,c->r[0]); // 80203B28
  c->r[4]=0u+0x00000001u; // 80203B2C
  c->r[5]=0u+0x00000000u; // 80203B30
  c->r[6]=0u+0x00000000u; // 80203B34
  c->lr=0x80203B3Cu; f_802014E0(c); // 80203B38
  c->r[3]=c->r[29]+0x0000002Cu; // 80203B3C
  c->r[4]=0u+0x00000001u; // 80203B40
  c->r[5]=0u+0x00000000u; // 80203B44
  c->r[6]=0u+0x00000000u; // 80203B48
  c->lr=0x80203B50u; f_802014E0(c); // 80203B4C
  c->r[3]=c->r[29]+0x00000008u; // 80203B50
  c->lr=0x80203B58u; f_80201558(c); // 80203B54
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 80203B58
  c->r[3]=c->r[28]|c->r[28]; // 80203B5C
  c->lr=0x80203B64u; f_802041B0(c); // 80203B60
  c->r[5]=R32(c->r[28]+0x00000188u); // 80203B64
  c->r[4]=c->r[30]+0x00000170u; // 80203B68
  c->r[6]=R32(c->r[28]+0x0000018Cu); // 80203B6C
  c->r[3]=0u+0x00000003u; // 80203B70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203B74
  c->lr=0x80203B7Cu; f_8020B328(c); // 80203B78
  c->r[3]=c->r[28]+0x00000010u; // 80203B7C
  c->lr=0x80203B84u; f_80203778(c); // 80203B80
  c->r[5]=c->r[3]|c->r[3]; // 80203B84
  c->r[4]=c->r[30]+0x00000190u; // 80203B88
  c->r[3]=0u+0x00000004u; // 80203B8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203B90
  c->lr=0x80203B98u; f_8020B328(c); // 80203B94
  c->r[3]=c->r[28]+0x0000001Cu; // 80203B98
  c->lr=0x80203BA0u; f_80203778(c); // 80203B9C
  c->r[5]=c->r[3]|c->r[3]; // 80203BA0
  c->r[4]=c->r[30]+0x000001A3u; // 80203BA4
  c->r[3]=0u+0x00000004u; // 80203BA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203BAC
  c->lr=0x80203BB4u; f_8020B328(c); // 80203BB0
  c->r[3]=c->r[28]+0x00000028u; // 80203BB4
  c->lr=0x80203BBCu; f_80203778(c); // 80203BB8
  c->r[5]=c->r[3]|c->r[3]; // 80203BBC
  c->r[4]=c->r[30]+0x000001B6u; // 80203BC0
  c->r[3]=0u+0x00000004u; // 80203BC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203BC8
  c->lr=0x80203BD0u; f_8020B328(c); // 80203BCC
  c->r[3]=c->r[28]+0x00000034u; // 80203BD0
  c->lr=0x80203BD8u; f_80203778(c); // 80203BD4
  c->r[5]=c->r[3]|c->r[3]; // 80203BD8
  c->r[4]=c->r[30]+0x000001C9u; // 80203BDC
  c->r[3]=0u+0x00000004u; // 80203BE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203BE4
  c->lr=0x80203BECu; f_8020B328(c); // 80203BE8
  c->r[3]=c->r[28]+0x00000040u; // 80203BEC
  c->lr=0x80203BF4u; f_80203778(c); // 80203BF0
  c->r[5]=c->r[3]|c->r[3]; // 80203BF4
  c->r[4]=c->r[30]+0x000001DCu; // 80203BF8
  c->r[3]=0u+0x00000004u; // 80203BFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203C00
  c->lr=0x80203C08u; f_8020B328(c); // 80203C04
  c->r[3]=c->r[29]+0x00000050u; // 80203C08
  c->r[4]=c->r[29]+0x00000070u; // 80203C0C
  c->r[5]=0u+0x00000003u; // 80203C10
  c->lr=0x80203C18u; f_80201650(c); // 80203C14
  c->r[3]=c->r[31]+0x00000008u; // 80203C18
  c->lr=0x80203C20u; f_8021B5EC(c); // 80203C1C
  c->r[5]=0u+0x80200000u; // 80203C20
  c->r[3]=R32(c->r[28]+0x00000008u); // 80203C24
  c->r[6]=c->r[28]|c->r[28]; // 80203C28
  c->r[4]=c->r[31]+0x00000008u; // 80203C2C
  c->r[5]=c->r[5]+0x000035ECu; // 80203C30
  c->lr=0x80203C38u; f_802016EC(c); // 80203C34
  cmps(c,0,(int32_t)c->r[3],0); // 80203C38
  c->r[28]=c->r[3]|c->r[3]; // 80203C3C
  if (crb(c,2)) { goto L_80203CAC; } // 80203C40
  c->r[5]=c->r[28]|c->r[28]; // 80203C44
  c->r[4]=c->r[30]+0x000001EFu; // 80203C48
  c->r[3]=0u+0x00000001u; // 80203C4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203C50
  c->lr=0x80203C58u; f_8020B328(c); // 80203C54
  c->r[28]=0u+0xFFFFF05Fu; // 80203C58
  goto L_80203CAC; // 80203C5C
  c->r[4]=c->r[30]+0x00000058u; // 80203C60
  c->r[3]=0u+0x00000001u; // 80203C64
  c->r[5]=0u+0x000000C2u; // 80203C68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203C6C
  c->lr=0x80203C74u; f_8020B328(c); // 80203C70
  c->r[28]=0u+0xFFFFF05Bu; // 80203C74
  goto L_80203C94; // 80203C78
  c->r[4]=c->r[30]+0x000000B9u; // 80203C7C
  c->r[3]=0u+0x00000001u; // 80203C80
  c->r[5]=0u+0x000000C2u; // 80203C84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203C88
  c->lr=0x80203C90u; f_8020B328(c); // 80203C8C
  c->r[28]=0u+0xFFFFF05Fu; // 80203C90
L_80203C94:;
  c->r[3]=c->r[31]+0x00000018u; // 80203C94
  c->lr=0x80203C9Cu; f_8010BF74(c); // 80203C98
  c->r[0]=c->r[0]|0x00000000u; // 80203C9C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80203CA0
  c->r[1]=R32(c->r[31]+0x0000002Cu); // 80203CA4
  W32(c->r[1]+0x00000000u,c->r[0]); // 80203CA8
L_80203CAC:;
  c->r[3]=c->r[29]+0x00000008u; // 80203CAC
  c->lr=0x80203CB4u; f_802015D0(c); // 80203CB0
  c->r[3]=c->r[28]|c->r[28]; // 80203CB4
L_80203CB8:;
  c->r[10]=c->r[31]|c->r[31]; // 80203CB8
  c->r[11]=c->r[10]+0x00000040u; // 80203CBC
  c->lr=0x80203CC4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203CC0
  c->r[10]=R32(c->r[1]+0x00000000u); // 80203CC4
  c->r[0]=R32(c->r[10]+0x00000004u); // 80203CC8
  c->r[1]=c->r[10]|c->r[10]; // 80203CCC
  c->lr=c->r[0]; // 80203CD0
  return; // 80203CD4
}

// fn_80203CD8
void f_80203CD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203CD8
  c->r[0]=c->lr; // 80203CDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203CE0
  c->r[0]=0u+0x00000001u; // 80203CE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80203CE8
  c->r[31]=0u+0x00000000u; // 80203CEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80203CF0
  c->r[30]=c->r[3]|c->r[3]; // 80203CF4
  c->r[4]=R32(c->r[3]+0x00000004u); // 80203CF8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 80203CFC
  cmps(c,0,(int32_t)c->r[4],0); // 80203D00
  if (crb(c,2)) { goto L_80203D0C; } // 80203D04
  W32(c->r[4]+0x0000002Cu,c->r[0]); // 80203D08
L_80203D0C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80203D0C
  cmps(c,0,(int32_t)c->r[0],0); // 80203D10
  if (crb(c,2)) { goto L_80203D8C; } // 80203D14
  c->r[3]=0u+0x80380000u; // 80203D18
  c->r[4]=0u+0x00000000u; // 80203D1C
  c->r[3]=c->r[3]+0x00002638u; // 80203D20
  c->r[5]=0u+0x00000000u; // 80203D24
  c->lr=0x80203D2Cu; f_80201674(c); // 80203D28
  cmps(c,0,(int32_t)c->r[3],0); // 80203D2C
  if (crb(c,2)) { goto L_80203D50; } // 80203D30
  c->r[4]=0u+0x802A0000u; // 80203D34
  c->r[3]=0u+0x00000001u; // 80203D38
  c->r[4]=c->r[4]+0x00003628u; // 80203D3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203D40
  c->lr=0x80203D48u; f_8020B328(c); // 80203D44
  c->r[31]=0u+0xFFFFF05Fu; // 80203D48
  goto L_80203DE8; // 80203D4C
L_80203D50:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80203D50
  c->r[4]=c->r[1]+0x00000008u; // 80203D54
  c->r[5]=0u+0x00000000u; // 80203D58
  c->lr=0x80203D60u; f_80201784(c); // 80203D5C
  cmps(c,0,(int32_t)c->r[3],0); // 80203D60
  c->r[31]=c->r[3]|c->r[3]; // 80203D64
  if (crb(c,2)) { goto L_80203D8C; } // 80203D68
  c->r[4]=0u+0x802A0000u; // 80203D6C
  c->r[5]=c->r[31]|c->r[31]; // 80203D70
  c->r[4]=c->r[4]+0x00003648u; // 80203D74
  c->r[3]=0u+0x00000001u; // 80203D78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203D7C
  c->lr=0x80203D84u; f_8020B328(c); // 80203D80
  c->r[31]=0u+0xFFFFF05Fu; // 80203D84
  goto L_80203DE8; // 80203D88
L_80203D8C:;
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 80203D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80203D90
  if (crb(c,2)) { goto L_80203DA4; } // 80203D94
  c->r[0]=0u+0x00000000u; // 80203D98
  W32(c->r[30]+0x00000090u,c->r[0]); // 80203D9C
  c->lr=0x80203DA4u; f_8020EB2C(c); // 80203DA0
L_80203DA4:;
  c->r[3]=R32(c->r[30]+0x00000098u); // 80203DA4
  cmps(c,0,(int32_t)c->r[3],0); // 80203DA8
  if (crb(c,2)) { goto L_80203DBC; } // 80203DAC
  c->r[0]=0u+0x00000000u; // 80203DB0
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 80203DB4
  c->lr=0x80203DBCu; f_8020EB2C(c); // 80203DB8
L_80203DBC:;
  c->r[3]=R32(c->r[30]+0x000000A4u); // 80203DBC
  cmps(c,0,(int32_t)c->r[3],0); // 80203DC0
  if (crb(c,2)) { goto L_80203DD4; } // 80203DC4
  c->r[0]=0u+0x00000000u; // 80203DC8
  W32(c->r[30]+0x000000A8u,c->r[0]); // 80203DCC
  c->lr=0x80203DD4u; f_8020EB2C(c); // 80203DD0
L_80203DD4:;
  c->r[3]=c->r[30]|c->r[30]; // 80203DD4
  c->lr=0x80203DDCu; f_80204168(c); // 80203DD8
  c->r[0]=0u+0x00000000u; // 80203DDC
  c->r[3]=0u+0x80380000u; // 80203DE0
  W8(c->r[3]+0x000025ECu,c->r[0]); // 80203DE4
L_80203DE8:;
  c->r[3]=c->r[31]|c->r[31]; // 80203DE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80203DEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80203DF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80203DF4
  c->lr=c->r[0]; // 80203DF8
  c->r[1]=c->r[1]+0x00000020u; // 80203DFC
  return; // 80203E00
}

// fn_80203E04
void f_80203E04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203E04
  c->r[0]=c->lr; // 80203E08
  c->r[3]=0u+0x80380000u; // 80203E0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203E10
  c->r[3]=c->r[3]+0x000025F0u; // 80203E14
  c->lr=0x80203E1Cu; f_80201558(c); // 80203E18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203E1C
  c->r[3]=0u+0x00000000u; // 80203E20
  c->lr=c->r[0]; // 80203E24
  c->r[1]=c->r[1]+0x00000010u; // 80203E28
  return; // 80203E2C
}

// fn_80203E30
void f_80203E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203E30
  c->r[0]=c->lr; // 80203E34
  c->r[3]=0u+0x80380000u; // 80203E38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203E3C
  c->r[3]=c->r[3]+0x000025F0u; // 80203E40
  c->lr=0x80203E48u; f_802015D0(c); // 80203E44
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203E48
  c->r[3]=0u+0x00000000u; // 80203E4C
  c->lr=c->r[0]; // 80203E50
  c->r[1]=c->r[1]+0x00000010u; // 80203E54
  return; // 80203E58
}

// fn_80203E5C
void f_80203E5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203E5C
  c->r[0]=c->lr; // 80203E60
  c->r[3]=0u+0x80380000u; // 80203E64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203E68
  c->r[3]=c->r[3]+0x00002614u; // 80203E6C
  c->lr=0x80203E74u; f_80201558(c); // 80203E70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203E74
  c->r[3]=0u+0x00000000u; // 80203E78
  c->lr=c->r[0]; // 80203E7C
  c->r[1]=c->r[1]+0x00000010u; // 80203E80
  return; // 80203E84
}

// fn_80203E88
void f_80203E88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203E88
  c->r[0]=c->lr; // 80203E8C
  c->r[3]=0u+0x80380000u; // 80203E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203E94
  c->r[3]=c->r[3]+0x00002614u; // 80203E98
  c->lr=0x80203EA0u; f_802015D0(c); // 80203E9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80203EA0
  c->r[3]=0u+0x00000000u; // 80203EA4
  c->lr=c->r[0]; // 80203EA8
  c->r[1]=c->r[1]+0x00000010u; // 80203EAC
  return; // 80203EB0
}

// fn_80203EB4
void f_80203EB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203EB4
  c->r[0]=c->lr; // 80203EB8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80203EBC
  c->r[11]=c->r[1]+0x00000030u; // 80203EC0
  c->lr=0x80203EC8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203EC4
  c->r[31]=c->r[1]|c->r[1]; // 80203EC8
  c->r[5]=R32(c->r[3]+0x00000004u); // 80203ECC
  c->r[28]=c->r[3]|c->r[3]; // 80203ED0
  c->r[29]=c->r[4]|c->r[4]; // 80203ED4
  cmpu(c,0,c->r[5],c->r[4]); // 80203ED8
  if (crb(c,2)) { goto L_80203EE8; } // 80203EDC
  c->r[3]=0u+0xFFFFF05Au; // 80203EE0
  goto L_80203FA0; // 80203EE4
L_80203EE8:;
  c->r[0]=0u+0x00000002u; // 80203EE8
  c->r[30]=0u+0x80380000u; // 80203EEC
  W32(c->r[5]+0x00000014u,c->r[0]); // 80203EF0
  c->r[3]=c->r[30]+0x00002614u; // 80203EF4
  c->lr=0x80203EFCu; f_80201558(c); // 80203EF8
  c->r[4]=R32(c->r[28]+0x00000004u); // 80203EFC
  c->r[3]=c->r[30]+0x00002614u; // 80203F00
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80203F04
  W32(c->r[4]+0x00000028u,c->r[0]); // 80203F08
  c->r[4]=R32(c->r[28]+0x00000004u); // 80203F0C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80203F10
  W32(c->r[4]+0x00000024u,c->r[0]); // 80203F14
  c->lr=0x80203F1Cu; f_802015D0(c); // 80203F18
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80203F1C
  c->r[3]=R32(c->r[28]+0x00000004u); // 80203F20
  c->r[12]=R32(c->r[3]+0x000000C0u); // 80203F24
  c->r[12]=R32(c->r[12]+0x00000010u); // 80203F28
  c->ctr=c->r[12]; // 80203F2C
  if (true) { c->lr=0x80203F34u; dispatch(c,c->ctr); } // 80203F30
  c->r[30]=c->r[3]|c->r[3]; // 80203F34
  goto L_80203F90; // 80203F38
  c->r[4]=0u+0x802A0000u; // 80203F3C
  c->r[3]=0u+0x00000001u; // 80203F40
  c->r[4]=c->r[4]+0x00003460u; // 80203F44
  c->r[5]=0u+0x00000141u; // 80203F48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203F4C
  c->lr=0x80203F54u; f_8020B328(c); // 80203F50
  c->r[30]=0u+0xFFFFF05Bu; // 80203F54
  goto L_80203F78; // 80203F58
  c->r[4]=0u+0x802A0000u; // 80203F5C
  c->r[3]=0u+0x00000001u; // 80203F60
  c->r[4]=c->r[4]+0x000034C1u; // 80203F64
  c->r[5]=0u+0x00000141u; // 80203F68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203F6C
  c->lr=0x80203F74u; f_8020B328(c); // 80203F70
  c->r[30]=0u+0xFFFFF05Fu; // 80203F74
L_80203F78:;
  c->r[3]=c->r[31]+0x00000008u; // 80203F78
  c->lr=0x80203F80u; f_8010BF74(c); // 80203F7C
  c->r[0]=c->r[0]|0x00000000u; // 80203F80
  c->r[0]=R32(c->r[1]+0x00000000u); // 80203F84
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 80203F88
  W32(c->r[1]+0x00000000u,c->r[0]); // 80203F8C
L_80203F90:;
  c->r[3]=c->r[29]|c->r[29]; // 80203F90
  c->r[4]=c->r[30]|c->r[30]; // 80203F94
  c->lr=0x80203F9Cu; f_80206C7C(c); // 80203F98
  c->r[3]=0u+0x00000000u; // 80203F9C
L_80203FA0:;
  c->r[10]=c->r[31]|c->r[31]; // 80203FA0
  c->r[11]=c->r[10]+0x00000030u; // 80203FA4
  c->lr=0x80203FACu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203FA8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80203FAC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80203FB0
  c->r[1]=c->r[10]|c->r[10]; // 80203FB4
  c->lr=c->r[0]; // 80203FB8
  return; // 80203FBC
}

// fn_80203FC0
void f_80203FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203FC0
  c->r[0]=c->lr; // 80203FC4
  c->r[3]=0u+0x80380000u; // 80203FC8
  c->r[5]=0u+0x00000000u; // 80203FCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80203FD0
  c->r[3]=c->r[3]+0x00002638u; // 80203FD4
  c->lr=0x80203FDCu; f_80201674(c); // 80203FD8
  cmps(c,0,(int32_t)c->r[3],0); // 80203FDC
  if (crb(c,2)) { goto L_80204000; } // 80203FE0
  c->r[4]=0u+0x802A0000u; // 80203FE4
  c->r[3]=0u+0x00000001u; // 80203FE8
  c->r[4]=c->r[4]+0x00003628u; // 80203FEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203FF0
  c->lr=0x80203FF8u; f_8020B328(c); // 80203FF4
  c->r[3]=0u+0xFFFFF05Fu; // 80203FF8
  goto L_80204004; // 80203FFC
L_80204000:;
  c->r[3]=0u+0x00000000u; // 80204000
L_80204004:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204004
  c->lr=c->r[0]; // 80204008
  c->r[1]=c->r[1]+0x00000010u; // 8020400C
  return; // 80204010
}

// fn_80204014
void f_80204014(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204014
  c->r[0]=c->lr; // 80204018
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020401C
  c->r[11]=c->r[1]+0x00000030u; // 80204020
  c->lr=0x80204028u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204024
  c->r[31]=c->r[1]|c->r[1]; // 80204028
  c->r[6]=0u+0x80380000u; // 8020402C
  c->r[28]=c->r[3]|c->r[3]; // 80204030
  c->r[29]=c->r[4]|c->r[4]; // 80204034
  c->r[30]=c->r[5]|c->r[5]; // 80204038
  c->r[3]=c->r[6]+0x000025F0u; // 8020403C
  c->lr=0x80204044u; f_80201558(c); // 80204040
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80204044
  c->r[3]=R32(c->r[28]+0x00000004u); // 80204048
  cmps(c,0,(int32_t)c->r[3],0); // 8020404C
  if (crb(c,2)) { goto L_80204068; } // 80204050
  c->r[0]=R32(c->r[3]+0x00000014u); // 80204054
  cmps(c,0,(int32_t)c->r[0],3); // 80204058
  if (crb(c,2)) { goto L_80204068; } // 8020405C
  c->r[30]=0u+0xFFFFF058u; // 80204060
  goto L_80204138; // 80204064
L_80204068:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 80204068
  c->r[3]=c->r[29]|c->r[29]; // 8020406C
  c->r[5]=c->r[30]|c->r[30]; // 80204070
  c->r[0]=c->r[4]+0x00000001u; // 80204074
  W32(c->r[28]+0x00000000u,c->r[0]); // 80204078
  c->r[12]=R32(c->r[29]+0x000000C0u); // 8020407C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80204080
  c->ctr=c->r[12]; // 80204084
  if (true) { c->lr=0x8020408Cu; dispatch(c,c->ctr); } // 80204088
  cmps(c,0,(int32_t)c->r[3],0); // 8020408C
  c->r[30]=c->r[3]|c->r[3]; // 80204090
  if (crb(c,0)) { goto L_802040D8; } // 80204094
  c->r[3]=c->r[28]|c->r[28]; // 80204098
  c->lr=0x802040A0u; f_80204168(c); // 8020409C
  W32(c->r[28]+0x00000004u,c->r[29]); // 802040A0
  c->r[3]=c->r[28]|c->r[28]; // 802040A4
  c->r[4]=c->r[29]|c->r[29]; // 802040A8
  c->lr=0x802040B0u; f_80203FC0(c); // 802040AC
  cmps(c,0,(int32_t)c->r[3],0); // 802040B0
  c->r[30]=c->r[3]|c->r[3]; // 802040B4
  if (!crb(c,0)) { goto L_802040CC; } // 802040B8
  c->r[3]=c->r[29]|c->r[29]; // 802040BC
  c->r[4]=c->r[30]|c->r[30]; // 802040C0
  c->lr=0x802040C8u; f_80206C7C(c); // 802040C4
  goto L_80204138; // 802040C8
L_802040CC:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 802040CC
  c->r[30]=R32(c->r[3]+0x00000004u); // 802040D0
  goto L_80204138; // 802040D4
L_802040D8:;
  c->r[3]=c->r[28]|c->r[28]; // 802040D8
  c->lr=0x802040E0u; f_80204168(c); // 802040DC
  goto L_80204138; // 802040E0
  c->r[4]=0u+0x802A0000u; // 802040E4
  c->r[3]=0u+0x00000001u; // 802040E8
  c->r[4]=c->r[4]+0x00003460u; // 802040EC
  c->r[5]=0u+0x00000174u; // 802040F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802040F4
  c->lr=0x802040FCu; f_8020B328(c); // 802040F8
  c->r[30]=0u+0xFFFFF05Bu; // 802040FC
  goto L_80204120; // 80204100
  c->r[4]=0u+0x802A0000u; // 80204104
  c->r[3]=0u+0x00000001u; // 80204108
  c->r[4]=c->r[4]+0x000034C1u; // 8020410C
  c->r[5]=0u+0x00000174u; // 80204110
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204114
  c->lr=0x8020411Cu; f_8020B328(c); // 80204118
  c->r[30]=0u+0xFFFFF05Fu; // 8020411C
L_80204120:;
  c->r[3]=c->r[31]+0x00000008u; // 80204120
  c->lr=0x80204128u; f_8010BF74(c); // 80204124
  c->r[0]=c->r[0]|0x00000000u; // 80204128
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020412C
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 80204130
  W32(c->r[1]+0x00000000u,c->r[0]); // 80204134
L_80204138:;
  c->r[3]=0u+0x80380000u; // 80204138
  c->r[3]=c->r[3]+0x000025F0u; // 8020413C
  c->lr=0x80204144u; f_802015D0(c); // 80204140
  c->r[10]=c->r[31]|c->r[31]; // 80204144
  c->r[3]=c->r[30]|c->r[30]; // 80204148
  c->r[11]=c->r[10]+0x00000030u; // 8020414C
  c->lr=0x80204154u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204150
  c->r[10]=R32(c->r[1]+0x00000000u); // 80204154
  c->r[0]=R32(c->r[10]+0x00000004u); // 80204158
  c->r[1]=c->r[10]|c->r[10]; // 8020415C
  c->lr=c->r[0]; // 80204160
  return; // 80204164
}

// fn_80204168
void f_80204168(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204168
  c->r[0]=c->lr; // 8020416C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204174
  c->r[31]=c->r[3]|c->r[3]; // 80204178
  c->r[0]=R32(c->r[3]+0x000000B0u); // 8020417C
  cmps(c,0,(int32_t)c->r[0],0); // 80204180
  if (crb(c,2)) { goto L_80204198; } // 80204184
  c->r[3]=c->r[0]|c->r[0]; // 80204188
  c->lr=0x80204190u; f_8020EB2C(c); // 8020418C
  c->r[0]=0u+0x00000000u; // 80204190
  W32(c->r[31]+0x000000B0u,c->r[0]); // 80204194
L_80204198:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80204198
  c->r[3]=0u+0x00000000u; // 8020419C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802041A0
  c->lr=c->r[0]; // 802041A4
  c->r[1]=c->r[1]+0x00000010u; // 802041A8
  return; // 802041AC
}

// fn_802041B0
void f_802041B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802041B0
  c->r[0]=c->lr; // 802041B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802041B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802041BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802041C0
  c->r[30]=c->r[3]|c->r[3]; // 802041C4
  c->lr=0x802041CCu; f_802054B8(c); // 802041C8
  c->r[3]=c->r[1]+0x00000008u; // 802041CC
  c->lr=0x802041D4u; f_8021E990(c); // 802041D0
  cmps(c,0,(int32_t)c->r[3],0); // 802041D4
  c->r[31]=c->r[3]|c->r[3]; // 802041D8
  if (!crb(c,2)) { goto L_802042B4; } // 802041DC
  c->r[3]=c->r[30]+0x00000190u; // 802041E0
  c->lr=0x802041E8u; f_80200568(c); // 802041E4
  cmps(c,0,(int32_t)c->r[3],0); // 802041E8
  c->r[31]=c->r[3]|c->r[3]; // 802041EC
  if (!crb(c,2)) { goto L_802042B4; } // 802041F0
  c->r[0]=R32(c->r[30]+0x00000190u); // 802041F4
  c->r[4]=0u+0x00000000u; // 802041F8
  c->r[5]=R32(c->r[1]+0x00000008u); // 802041FC
  c->r[3]=c->r[1]+0x0000000Cu; // 80204200
  c->r[6]=addc(c,c->r[4],c->r[0],0); // 80204204
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 80204208
  c->lr=0x80204210u; f_80215A68(c); // 8020420C
  c->r[3]=c->r[30]+0x00000194u; // 80204210
  c->r[4]=c->r[1]+0x0000000Cu; // 80204214
  c->lr=0x8020421Cu; f_802042D0(c); // 80204218
  c->r[3]=c->r[1]+0x0000000Cu; // 8020421C
  c->r[4]=0u+0xFFFFFFFFu; // 80204220
  c->lr=0x80204228u; f_802030B0(c); // 80204224
  c->r[3]=c->r[30]+0x00000188u; // 80204228
  c->lr=0x80204230u; f_802004D0(c); // 8020422C
  cmps(c,0,(int32_t)c->r[3],0); // 80204230
  c->r[31]=c->r[3]|c->r[3]; // 80204234
  if (!crb(c,2)) { goto L_802042B4; } // 80204238
  c->r[3]=c->r[30]|c->r[30]; // 8020423C
  c->lr=0x80204244u; f_802063A0(c); // 80204240
  c->r[3]=c->r[30]|c->r[30]; // 80204244
  c->lr=0x8020424Cu; f_80206414(c); // 80204248
  c->r[3]=c->r[30]|c->r[30]; // 8020424C
  c->lr=0x80204254u; f_80206488(c); // 80204250
  c->r[3]=c->r[30]|c->r[30]; // 80204254
  c->lr=0x8020425Cu; f_80206318(c); // 80204258
  c->r[3]=c->r[30]|c->r[30]; // 8020425C
  c->lr=0x80204264u; f_802064F0(c); // 80204260
  c->r[3]=c->r[30]|c->r[30]; // 80204264
  c->lr=0x8020426Cu; f_802067AC(c); // 80204268
  c->r[3]=c->r[30]|c->r[30]; // 8020426C
  c->lr=0x80204274u; f_80206580(c); // 80204270
  c->r[3]=c->r[30]+0x000001FCu; // 80204274
  c->lr=0x8020427Cu; f_802020A8(c); // 80204278
  c->r[0]=cntlz(c->r[3]); // 8020427C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80204280
  if (crb(c,2)) { goto L_802042B4; } // 80204284
  c->r[3]=c->r[30]|c->r[30]; // 80204288
  c->lr=0x80204290u; f_80205604(c); // 8020428C
  cmps(c,0,(int32_t)c->r[3],0); // 80204290
  c->r[31]=c->r[3]|c->r[3]; // 80204294
  if (crb(c,2)) { goto L_802042B4; } // 80204298
  c->r[4]=0u+0x802A0000u; // 8020429C
  c->r[5]=c->r[31]|c->r[31]; // 802042A0
  c->r[4]=c->r[4]+0x00003672u; // 802042A4
  c->r[3]=0u+0x00000001u; // 802042A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802042AC
  c->lr=0x802042B4u; f_8020B328(c); // 802042B0
L_802042B4:;
  c->r[3]=c->r[31]|c->r[31]; // 802042B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802042B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802042BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802042C0
  c->lr=c->r[0]; // 802042C4
  c->r[1]=c->r[1]+0x00000020u; // 802042C8
  return; // 802042CC
}

// fn_802042D0
void f_802042D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802042D0
  c->r[0]=c->lr; // 802042D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802042D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802042DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802042E0
  c->r[30]=c->r[3]|c->r[3]; // 802042E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 802042E8
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 802042EC
  if (!crb(c,2)) { goto L_80204318; } // 802042F0
  c->r[6]=R32(c->r[4]+0x00000000u); // 802042F4
  c->r[0]=rotl(c->r[6],1)&0x00000001u; cr0(c,c->r[0]); // 802042F8
  if (!crb(c,2)) { goto L_80204318; } // 802042FC
  c->r[5]=R32(c->r[4]+0x00000004u); // 80204300
  c->r[0]=R32(c->r[4]+0x00000008u); // 80204304
  W32(c->r[3]+0x00000000u,c->r[6]); // 80204308
  W32(c->r[3]+0x00000004u,c->r[5]); // 8020430C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80204310
  goto L_8020436C; // 80204314
L_80204318:;
  cmps(c,0,(int32_t)c->r[5],0); // 80204318
  if (crb(c,2)) { goto L_80204328; } // 8020431C
  c->r[31]=R32(c->r[3]+0x00000004u); // 80204320
  goto L_80204330; // 80204324
L_80204328:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80204328
  c->r[31]=rotl(c->r[0],0)&0x0000007Fu; // 8020432C
L_80204330:;
  c->r[3]=c->r[4]|c->r[4]; // 80204330
  c->r[4]=c->r[1]+0x00000010u; // 80204334
  c->r[5]=c->r[1]+0x0000000Cu; // 80204338
  c->lr=0x80204340u; f_80204620(c); // 8020433C
  c->r[4]=R8(c->r[1]+0x00000008u); // 80204340
  c->r[3]=c->r[30]|c->r[30]; // 80204344
  c->r[6]=R32(c->r[1]+0x00000010u); // 80204348
  c->r[5]=c->r[31]|c->r[31]; // 8020434C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80204350
  c->r[8]=c->r[1]+0x00000009u; // 80204354
  W8(c->r[1]+0x00000009u,c->r[4]); // 80204358
  c->r[4]=0u+0x00000000u; // 8020435C
  c->r[7]=c->r[6]+c->r[0]; // 80204360
  c->lr=0x80204368u; f_80203148(c); // 80204364
  c->r[30]=c->r[3]|c->r[3]; // 80204368
L_8020436C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020436C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80204370
  c->r[30]=R32(c->r[1]+0x00000018u); // 80204374
  c->r[0]=R32(c->r[1]+0x00000024u); // 80204378
  c->lr=c->r[0]; // 8020437C
  c->r[1]=c->r[1]+0x00000020u; // 80204380
  return; // 80204384
}

// fn_80204388
void f_80204388(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80204388
  cmps(c,0,(int32_t)c->r[7],0); // 8020438C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80204390
  W32(c->r[6]+0x00000000u,c->r[0]); // 80204394
  if (crb(c,2)) { goto L_802043A0; } // 80204398
  W32(c->r[7]+0x00000000u,c->r[0]); // 8020439C
L_802043A0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802043A0
  c->r[8]=c->r[3]|c->r[3]; // 802043A4
  c->r[9]=c->r[3]+c->r[0]; // 802043A8
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 802043AC
  goto L_802043B8; // 802043B0
L_802043B4:;
  c->r[8]=c->r[8]+0x00000001u; // 802043B4
L_802043B8:;
  cmpu(c,0,c->r[8],c->r[9]); // 802043B8
  if (!crb(c,0)) { goto L_802043CC; } // 802043BC
  c->r[0]=R8(c->r[8]+0x00000000u); // 802043C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802043C4
  if (!crb(c,2)) { IRQCHK(c); goto L_802043B4; } // 802043C8
L_802043CC:;
  cmpu(c,0,c->r[8],c->r[9]); // 802043CC
  if (crb(c,2)) { goto L_802043E0; } // 802043D0
  c->r[0]=R8(c->r[8]+0x00000001u); // 802043D4
  cmps(c,0,(int32_t)c->r[0],61); // 802043D8
  if (crb(c,2)) { goto L_802043E8; } // 802043DC
L_802043E0:;
  c->r[3]=0u+0x00000000u; // 802043E0
  return; // 802043E4
L_802043E8:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 802043E8
  c->r[8]=c->r[8]+0x00000002u; // 802043EC
  c->r[3]=c->r[8]|c->r[8]; // 802043F0
  goto L_802043FC; // 802043F4
L_802043F8:;
  c->r[8]=c->r[8]+0x00000001u; // 802043F8
L_802043FC:;
  cmpu(c,0,c->r[8],c->r[9]); // 802043FC
  if (!crb(c,0)) { goto L_80204410; } // 80204400
  c->r[0]=R8(c->r[8]+0x00000000u); // 80204404
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80204408
  if (!crb(c,2)) { IRQCHK(c); goto L_802043F8; } // 8020440C
L_80204410:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 80204410
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80204414
  if (crb(c,2)) { goto L_8020442C; } // 80204418
  c->r[0]=0u+0x00000000u; // 8020441C
  c->r[3]=0u+0x00000000u; // 80204420
  W32(c->r[5]+0x00000000u,c->r[0]); // 80204424
  return; // 80204428
L_8020442C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8020442C
  W32(c->r[6]+0x00000000u,c->r[3]); // 80204430
  if (crb(c,2)) { goto L_80204444; } // 80204434
  c->r[0]=c->r[8]+0x00000001u; // 80204438
  c->r[0]=c->r[0]-c->r[3]; // 8020443C
  W32(c->r[7]+0x00000000u,c->r[0]); // 80204440
L_80204444:;
  c->r[3]=c->r[8]+0x00000001u; // 80204444
  c->r[5]=c->r[9]-c->r[3]; // 80204448
  c->r[0]=c->r[5]+0x00000001u; // 8020444C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80204450
  return; // 80204454
}

// fn_80204458
void f_80204458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204458
  c->r[0]=c->lr; // 8020445C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80204460
  c->r[11]=c->r[1]+0x00000030u; // 80204464
  c->lr=0x8020446Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204468
  c->r[30]=0u+0x802A0000u; // 8020446C
  c->r[29]=c->r[3]|c->r[3]; // 80204470
  c->r[30]=c->r[30]+0x00003408u; // 80204474
  c->r[31]=0u+0x00000000u; // 80204478
  c->r[3]=c->r[3]+0x000000C4u; // 8020447C
  c->lr=0x80204484u; f_80201DF4(c); // 80204480
  c->r[3]=c->r[29]+0x000000D0u; // 80204484
  c->lr=0x8020448Cu; f_80204658(c); // 80204488
  c->r[3]=c->r[29]+0x000000DCu; // 8020448C
  c->lr=0x80204494u; f_80204658(c); // 80204490
  c->r[3]=c->r[29]+0x000000E8u; // 80204494
  c->lr=0x8020449Cu; f_80204658(c); // 80204498
  c->r[3]=c->r[29]+0x000000C4u; // 8020449C
  c->lr=0x802044A4u; f_802020A8(c); // 802044A0
  c->r[0]=cntlz(c->r[3]); // 802044A4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802044A8
  if (!crb(c,2)) { goto L_80204550; } // 802044AC
  c->r[3]=c->r[1]+0x00000014u; // 802044B0
  c->r[4]=c->r[30]+0x0000028Eu; // 802044B4
  c->r[5]=c->r[29]+0x000000C4u; // 802044B8
  c->lr=0x802044C0u; f_8020456C(c); // 802044BC
  c->r[3]=c->r[29]+0x000000D0u; // 802044C0
  c->r[4]=c->r[1]+0x00000014u; // 802044C4
  c->lr=0x802044CCu; f_802042D0(c); // 802044C8
  c->r[3]=c->r[1]+0x00000014u; // 802044CC
  c->r[4]=0u+0xFFFFFFFFu; // 802044D0
  c->lr=0x802044D8u; f_802030B0(c); // 802044D4
  c->r[3]=c->r[29]+0x000000C4u; // 802044D8
  c->lr=0x802044E0u; f_802020A8(c); // 802044DC
  c->r[31]=c->r[3]|c->r[3]; // 802044E0
  c->r[3]=c->r[29]+0x000000C4u; // 802044E4
  c->lr=0x802044ECu; f_80203778(c); // 802044E8
  c->r[4]=c->r[31]|c->r[31]; // 802044EC
  c->r[5]=c->r[29]+0x000000DCu; // 802044F0
  c->lr=0x802044F8u; f_8021689C(c); // 802044F4
  cmps(c,0,(int32_t)c->r[3],0); // 802044F8
  c->r[31]=c->r[3]|c->r[3]; // 802044FC
  if (!crb(c,2)) { goto L_80204530; } // 80204500
  c->r[3]=c->r[1]+0x00000008u; // 80204504
  c->r[4]=c->r[30]+0x00000292u; // 80204508
  c->r[5]=c->r[29]+0x000000DCu; // 8020450C
  c->lr=0x80204514u; f_8020456C(c); // 80204510
  c->r[3]=c->r[29]+0x000000E8u; // 80204514
  c->r[4]=c->r[1]+0x00000008u; // 80204518
  c->lr=0x80204520u; f_802042D0(c); // 8020451C
  c->r[3]=c->r[1]+0x00000008u; // 80204520
  c->r[4]=0u+0xFFFFFFFFu; // 80204524
  c->lr=0x8020452Cu; f_802030B0(c); // 80204528
  goto L_80204550; // 8020452C
L_80204530:;
  c->r[4]=c->r[30]+0x00000296u; // 80204530
  c->r[31]=0u+0xFFFFF05Fu; // 80204534
  c->r[3]=0u+0x00000001u; // 80204538
  c->r[5]=0u+0xFFFFF05Fu; // 8020453C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204540
  c->lr=0x80204548u; f_8020B328(c); // 80204544
  c->r[3]=c->r[29]+0x000000DCu; // 80204548
  c->lr=0x80204550u; f_80204658(c); // 8020454C
L_80204550:;
  c->r[11]=c->r[1]+0x00000030u; // 80204550
  c->r[3]=c->r[31]|c->r[31]; // 80204554
  c->lr=0x8020455Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204558
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020455C
  c->lr=c->r[0]; // 80204560
  c->r[1]=c->r[1]+0x00000030u; // 80204564
  return; // 80204568
}

// fn_8020456C
void f_8020456C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020456C
  c->r[0]=c->lr; // 80204570
  W32(c->r[1]+0x00000034u,c->r[0]); // 80204574
  c->r[11]=c->r[1]+0x00000030u; // 80204578
  c->lr=0x80204580u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020457C
  c->r[28]=c->r[3]|c->r[3]; // 80204580
  c->r[31]=c->r[4]|c->r[4]; // 80204584
  c->r[30]=c->r[5]|c->r[5]; // 80204588
  c->lr=0x80204590u; f_80203990(c); // 8020458C
  c->r[3]=c->r[31]|c->r[31]; // 80204590
  c->lr=0x80204598u; f_80109598(c); // 80204594
  c->r[29]=c->r[3]|c->r[3]; // 80204598
  c->r[3]=c->r[30]|c->r[30]; // 8020459C
  c->r[4]=c->r[1]+0x0000000Cu; // 802045A0
  c->r[5]=c->r[1]+0x00000010u; // 802045A4
  c->lr=0x802045ACu; f_80204620(c); // 802045A8
  c->r[0]=R32(c->r[1]+0x00000010u); // 802045AC
  c->r[3]=c->r[28]|c->r[28]; // 802045B0
  c->r[4]=c->r[29]+c->r[0]; // 802045B4
  c->lr=0x802045BCu; f_80207040(c); // 802045B8
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 802045BC
  c->r[6]=c->r[31]|c->r[31]; // 802045C0
  c->r[7]=c->r[31]+c->r[29]; // 802045C4
  c->r[30]=R32(c->r[1]+0x00000010u); // 802045C8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 802045CC
  c->r[3]=c->r[28]|c->r[28]; // 802045D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802045D4
  c->r[8]=c->r[1]+0x0000000Au; // 802045D8
  c->r[4]=0u+0x00000000u; // 802045DC
  c->r[5]=0u+0x00000000u; // 802045E0
  c->lr=0x802045E8u; f_80203148(c); // 802045E4
  c->r[0]=R8(c->r[1]+0x00000009u); // 802045E8
  c->r[4]=c->r[29]|c->r[29]; // 802045EC
  c->r[6]=c->r[31]|c->r[31]; // 802045F0
  c->r[7]=c->r[31]+c->r[30]; // 802045F4
  W8(c->r[1]+0x00000008u,c->r[0]); // 802045F8
  c->r[8]=c->r[1]+0x00000008u; // 802045FC
  c->r[5]=0u+0x00000000u; // 80204600
  c->lr=0x80204608u; f_80203148(c); // 80204604
  c->r[11]=c->r[1]+0x00000030u; // 80204608
  c->lr=0x80204610u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020460C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80204610
  c->lr=c->r[0]; // 80204614
  c->r[1]=c->r[1]+0x00000030u; // 80204618
  return; // 8020461C
}

// fn_80204620
void f_80204620(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80204620
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80204624
  if (!crb(c,2)) { goto L_80204644; } // 80204628
  c->r[6]=c->r[3]+0x00000001u; // 8020462C
  c->r[0]=R8(c->r[3]+0x00000000u); // 80204630
  W32(c->r[4]+0x00000000u,c->r[6]); // 80204634
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 80204638
  W32(c->r[5]+0x00000000u,c->r[0]); // 8020463C
  return; // 80204640
L_80204644:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 80204644
  c->r[0]=R32(c->r[3]+0x00000004u); // 80204648
  W32(c->r[4]+0x00000000u,c->r[6]); // 8020464C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80204650
  return; // 80204654
}

// fn_80204658
void f_80204658(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80204658
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8020465C
  if (!crb(c,2)) { goto L_8020467C; } // 80204660
  c->r[0]=R8(c->r[3]+0x00000000u); // 80204664
  c->r[4]=0u+0x00000000u; // 80204668
  W8(c->r[3]+0x00000001u,c->r[4]); // 8020466C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF80u; // 80204670
  W8(c->r[3]+0x00000000u,c->r[0]); // 80204674
  return; // 80204678
L_8020467C:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8020467C
  c->r[0]=0u+0x00000000u; // 80204680
  W8(c->r[4]+0x00000000u,c->r[0]); // 80204684
  W32(c->r[3]+0x00000004u,c->r[0]); // 80204688
  return; // 8020468C
}

// fn_80204690
void f_80204690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204690
  c->r[0]=c->lr; // 80204694
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020469C
  c->r[31]=c->r[3]|c->r[3]; // 802046A0
  c->r[3]=c->r[4]|c->r[4]; // 802046A4
  c->lr=0x802046ACu; f_80203778(c); // 802046A8
  c->r[4]=c->r[3]|c->r[3]; // 802046AC
  c->r[3]=c->r[31]|c->r[31]; // 802046B0
  c->lr=0x802046B8u; f_80204458(c); // 802046B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802046B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802046BC
  c->lr=c->r[0]; // 802046C0
  c->r[1]=c->r[1]+0x00000010u; // 802046C4
  return; // 802046C8
}

// fn_802046CC
void f_802046CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802046CC
  c->r[0]=c->lr; // 802046D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802046D4
  c->r[11]=c->r[1]+0x00000020u; // 802046D8
  c->lr=0x802046E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802046DC
  c->r[31]=0u+0x802A0000u; // 802046E0
  c->r[28]=c->r[4]|c->r[4]; // 802046E4
  c->r[31]=c->r[31]+0x00003408u; // 802046E8
  c->r[27]=c->r[3]|c->r[3]; // 802046EC
  c->r[29]=c->r[5]|c->r[5]; // 802046F0
  c->r[3]=c->r[28]|c->r[28]; // 802046F4
  c->r[4]=c->r[31]+0x000002B8u; // 802046F8
  c->r[30]=0u+0x00000000u; // 802046FC
  c->lr=0x80204704u; f_80114288(c); // 80204700
  cmps(c,0,(int32_t)c->r[3],0); // 80204704
  if (!crb(c,2)) { goto L_8020471C; } // 80204708
  c->r[4]=c->r[29]|c->r[29]; // 8020470C
  c->r[3]=c->r[27]+0x000000B8u; // 80204710
  c->lr=0x80204718u; f_80201DF4(c); // 80204714
  goto L_802048F8; // 80204718
L_8020471C:;
  c->r[3]=c->r[28]|c->r[28]; // 8020471C
  c->r[4]=c->r[31]+0x000002C2u; // 80204720
  c->lr=0x80204728u; f_80114288(c); // 80204724
  cmps(c,0,(int32_t)c->r[3],0); // 80204728
  if (!crb(c,2)) { goto L_80204744; } // 8020472C
  c->r[3]=c->r[27]|c->r[27]; // 80204730
  c->r[4]=c->r[29]|c->r[29]; // 80204734
  c->lr=0x8020473Cu; f_80204458(c); // 80204738
  c->r[30]=c->r[3]|c->r[3]; // 8020473C
  goto L_802048F8; // 80204740
L_80204744:;
  c->r[3]=c->r[28]|c->r[28]; // 80204744
  c->r[4]=c->r[31]+0x000002CEu; // 80204748
  c->lr=0x80204750u; f_80114288(c); // 8020474C
  cmps(c,0,(int32_t)c->r[3],0); // 80204750
  if (!crb(c,2)) { goto L_80204768; } // 80204754
  c->r[4]=c->r[29]|c->r[29]; // 80204758
  c->r[3]=c->r[27]+0x00000118u; // 8020475C
  c->lr=0x80204764u; f_80201DF4(c); // 80204760
  goto L_802048F8; // 80204764
L_80204768:;
  c->r[3]=c->r[28]|c->r[28]; // 80204768
  c->r[4]=c->r[31]+0x000002D6u; // 8020476C
  c->lr=0x80204774u; f_80114288(c); // 80204770
  cmps(c,0,(int32_t)c->r[3],0); // 80204774
  if (!crb(c,2)) { goto L_8020478C; } // 80204778
  c->r[4]=c->r[29]|c->r[29]; // 8020477C
  c->r[3]=c->r[27]+0x00000124u; // 80204780
  c->lr=0x80204788u; f_80201DF4(c); // 80204784
  goto L_802048F8; // 80204788
L_8020478C:;
  c->r[3]=c->r[28]|c->r[28]; // 8020478C
  c->r[4]=c->r[31]+0x000002E5u; // 80204790
  c->lr=0x80204798u; f_80114288(c); // 80204794
  cmps(c,0,(int32_t)c->r[3],0); // 80204798
  if (!crb(c,2)) { goto L_802047B0; } // 8020479C
  c->r[4]=c->r[29]|c->r[29]; // 802047A0
  c->r[3]=c->r[27]+0x00000130u; // 802047A4
  c->lr=0x802047ACu; f_80201DF4(c); // 802047A8
  goto L_802048F8; // 802047AC
L_802047B0:;
  c->r[3]=c->r[28]|c->r[28]; // 802047B0
  c->r[4]=c->r[31]+0x000002F7u; // 802047B4
  c->lr=0x802047BCu; f_80114288(c); // 802047B8
  cmps(c,0,(int32_t)c->r[3],0); // 802047BC
  if (!crb(c,2)) { goto L_802047E0; } // 802047C0
  c->r[3]=c->r[29]|c->r[29]; // 802047C4
  c->r[4]=0u+0x00000000u; // 802047C8
  c->r[5]=0u+0x0000000Au; // 802047CC
  c->lr=0x802047D4u; f_801165C8(c); // 802047D0
  W32(c->r[27]+0x00000164u,c->r[4]); // 802047D4
  W32(c->r[27]+0x00000160u,c->r[3]); // 802047D8
  goto L_802048F8; // 802047DC
L_802047E0:;
  c->r[3]=c->r[28]|c->r[28]; // 802047E0
  c->r[4]=c->r[31]+0x0000030Au; // 802047E4
  c->lr=0x802047ECu; f_80114288(c); // 802047E8
  cmps(c,0,(int32_t)c->r[3],0); // 802047EC
  if (!crb(c,2)) { goto L_80204810; } // 802047F0
  c->r[0]=R8(c->r[29]+0x00000000u); // 802047F4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802047F8
  c->r[3]=c->r[3]+0xFFFFFFD0u; // 802047FC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80204800
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80204804
  W8(c->r[27]+0x00000168u,c->r[0]); // 80204808
  goto L_802048F8; // 8020480C
L_80204810:;
  c->r[3]=c->r[28]|c->r[28]; // 80204810
  c->r[4]=c->r[31]+0x0000031Bu; // 80204814
  c->lr=0x8020481Cu; f_80114288(c); // 80204818
  cmps(c,0,(int32_t)c->r[3],0); // 8020481C
  if (!crb(c,2)) { goto L_80204840; } // 80204820
  c->r[0]=R8(c->r[29]+0x00000000u); // 80204824
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80204828
  c->r[3]=c->r[3]+0xFFFFFFD0u; // 8020482C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80204830
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80204834
  W8(c->r[27]+0x00000169u,c->r[0]); // 80204838
  goto L_802048F8; // 8020483C
L_80204840:;
  c->r[3]=c->r[28]|c->r[28]; // 80204840
  c->r[4]=c->r[31]+0x00000335u; // 80204844
  c->lr=0x8020484Cu; f_80114288(c); // 80204848
  cmps(c,0,(int32_t)c->r[3],0); // 8020484C
  if (!crb(c,2)) { goto L_80204864; } // 80204850
  c->r[4]=c->r[29]|c->r[29]; // 80204854
  c->r[3]=c->r[27]+0x0000010Cu; // 80204858
  c->lr=0x80204860u; f_80201DF4(c); // 8020485C
  goto L_802048F8; // 80204860
L_80204864:;
  c->r[3]=c->r[28]|c->r[28]; // 80204864
  c->r[4]=c->r[31]+0x00000342u; // 80204868
  c->lr=0x80204870u; f_80114288(c); // 8020486C
  cmps(c,0,(int32_t)c->r[3],0); // 80204870
  if (!crb(c,2)) { goto L_80204894; } // 80204874
  c->r[3]=c->r[29]|c->r[29]; // 80204878
  c->r[4]=0u+0x00000000u; // 8020487C
  c->r[5]=0u+0x0000000Au; // 80204880
  c->lr=0x80204888u; f_801165C8(c); // 80204884
  W32(c->r[27]+0x0000014Cu,c->r[4]); // 80204888
  W32(c->r[27]+0x00000148u,c->r[3]); // 8020488C
  goto L_802048F8; // 80204890
L_80204894:;
  c->r[3]=c->r[28]|c->r[28]; // 80204894
  c->r[4]=c->r[31]+0x00000350u; // 80204898
  c->lr=0x802048A0u; f_80114288(c); // 8020489C
  cmps(c,0,(int32_t)c->r[3],0); // 802048A0
  if (!crb(c,2)) { goto L_802048C4; } // 802048A4
  c->r[3]=c->r[29]|c->r[29]; // 802048A8
  c->r[4]=0u+0x00000000u; // 802048AC
  c->r[5]=0u+0x0000000Au; // 802048B0
  c->lr=0x802048B8u; f_801165C8(c); // 802048B4
  W32(c->r[27]+0x00000154u,c->r[4]); // 802048B8
  W32(c->r[27]+0x00000150u,c->r[3]); // 802048BC
  goto L_802048F8; // 802048C0
L_802048C4:;
  c->r[3]=c->r[28]|c->r[28]; // 802048C4
  c->r[4]=c->r[31]+0x0000035Eu; // 802048C8
  c->lr=0x802048D0u; f_80114288(c); // 802048CC
  cmps(c,0,(int32_t)c->r[3],0); // 802048D0
  if (!crb(c,2)) { goto L_802048F4; } // 802048D4
  c->r[3]=c->r[29]|c->r[29]; // 802048D8
  c->r[4]=0u+0x00000000u; // 802048DC
  c->r[5]=0u+0x0000000Au; // 802048E0
  c->lr=0x802048E8u; f_801165C8(c); // 802048E4
  W32(c->r[27]+0x0000015Cu,c->r[4]); // 802048E8
  W32(c->r[27]+0x00000158u,c->r[3]); // 802048EC
  goto L_802048F8; // 802048F0
L_802048F4:;
  c->r[30]=0u+0xFFFFF05Au; // 802048F4
L_802048F8:;
  c->r[11]=c->r[1]+0x00000020u; // 802048F8
  c->r[3]=c->r[30]|c->r[30]; // 802048FC
  c->lr=0x80204904u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204900
  c->r[0]=R32(c->r[1]+0x00000024u); // 80204904
  c->lr=c->r[0]; // 80204908
  c->r[1]=c->r[1]+0x00000020u; // 8020490C
  return; // 80204910
}

// fn_80204914
void f_80204914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204914
  c->r[0]=c->lr; // 80204918
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8020491C
  c->r[11]=c->r[1]+0x000000E0u; // 80204920
  c->lr=0x80204928u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204924
  c->r[31]=c->r[1]|c->r[1]; // 80204928
  c->r[0]=c->r[31]+0x00000074u; // 8020492C
  c->r[30]=0u+0x802A0000u; // 80204930
  W32(c->r[31]+0x00000034u,c->r[0]); // 80204934
  c->r[27]=c->r[3]|c->r[3]; // 80204938
  c->r[3]=c->r[0]|c->r[0]; // 8020493C
  c->r[30]=c->r[30]+0x00003408u; // 80204940
  c->r[29]=c->r[31]+0x00000034u; // 80204944
  c->r[28]=0u+0x00000001u; // 80204948
  c->lr=0x80204950u; f_802053A4(c); // 8020494C
  c->r[5]=0u+0x80290000u; // 80204950
  c->r[3]=R32(c->r[31]+0x00000034u); // 80204954
  c->r[5]=c->r[5]+0x00006BC0u; // 80204958
  c->r[4]=c->r[31]+0x0000003Cu; // 8020495C
  W32(c->r[31]+0x00000038u,c->r[5]); // 80204960
  c->r[0]=c->r[5]+0x0000000Cu; // 80204964
  c->r[24]=0u+0x00000000u; // 80204968
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020496C
  c->r[3]=R32(c->r[31]+0x00000034u); // 80204970
  c->r[0]=c->r[4]-c->r[3]; // 80204974
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80204978
  c->r[23]=R32(c->r[31]+0x00000034u); // 8020497C
  c->r[3]=c->r[23]|c->r[23]; // 80204980
  c->lr=0x80204988u; f_8011B18C(c); // 80204984
  c->r[25]=0u+0x00000000u; // 80204988
  c->r[4]=c->r[23]|c->r[23]; // 8020498C
  W32(c->r[23]+0x00000034u,c->r[25]); // 80204990
  c->r[3]=c->r[31]+0x00000008u; // 80204994
  c->lr=0x8020499Cu; f_8011B6E4(c); // 80204998
  c->r[3]=c->r[31]+0x00000008u; // 8020499C
  c->lr=0x802049A4u; f_80207878(c); // 802049A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802049A4
  c->r[0]=0u+0x00000020u; // 802049A8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802049AC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802049B0
  c->ctr=c->r[12]; // 802049B4
  if (true) { c->lr=0x802049BCu; dispatch(c,c->ctr); } // 802049B8
  c->r[0]=0u+0xFFFFFFFFu; // 802049BC
  c->r[26]=c->r[3]|c->r[3]; // 802049C0
  c->r[3]=c->r[31]+0x00000008u; // 802049C4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802049C8
  c->lr=0x802049D0u; f_8011B300(c); // 802049CC
  W8(c->r[23]+0x00000038u,c->r[26]); // 802049D0
  c->r[4]=0u+0x802A0000u; // 802049D4
  c->r[4]=c->r[4]+0x00003A94u; // 802049D8
  c->r[3]=0u+0x80290000u; // 802049DC
  W32(c->r[29]+0x00000004u,c->r[4]); // 802049E0
  c->r[5]=c->r[4]+0x0000000Cu; // 802049E4
  c->r[4]=R32(c->r[29]+0x00000000u); // 802049E8
  c->r[0]=c->r[29]+0x00000040u; // 802049EC
  c->r[3]=c->r[3]+0x00006B80u; // 802049F0
  c->r[26]=c->r[29]+0x00000024u; // 802049F4
  W32(c->r[4]+0x00000000u,c->r[5]); // 802049F8
  c->r[4]=R32(c->r[29]+0x00000000u); // 802049FC
  c->r[0]=c->r[0]-c->r[4]; // 80204A00
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 80204A04
  W32(c->r[29]+0x00000008u,c->r[3]); // 80204A08
  W32(c->r[29]+0x0000000Cu,c->r[25]); // 80204A0C
  W32(c->r[29]+0x00000010u,c->r[25]); // 80204A10
  W32(c->r[29]+0x00000014u,c->r[25]); // 80204A14
  W32(c->r[29]+0x00000018u,c->r[25]); // 80204A18
  W32(c->r[29]+0x0000001Cu,c->r[25]); // 80204A1C
  W32(c->r[29]+0x00000020u,c->r[25]); // 80204A20
  c->lr=0x80204A28u; f_8011C488(c); // 80204A24
  c->r[4]=c->r[3]|c->r[3]; // 80204A28
  c->r[3]=c->r[26]|c->r[26]; // 80204A2C
  c->lr=0x80204A34u; f_80207544(c); // 80204A30
  goto L_80204A44; // 80204A34
  c->r[3]=c->r[31]+0x0000001Cu; // 80204A38
  c->lr=0x80204A40u; f_8010B734(c); // 80204A3C
L_80204A40:;
  IRQCHK(c); goto L_80204A40; // 80204A40
L_80204A44:;
  c->r[4]=0u+0x802A0000u; // 80204A44
  c->r[0]=0u+0x00000010u; // 80204A48
  c->r[4]=c->r[4]+0x00003F6Cu; // 80204A4C
  W8(c->r[29]+0x0000002Cu,c->r[0]); // 80204A50
  c->r[3]=c->r[29]+0x00000034u; // 80204A54
  W32(c->r[29]+0x00000008u,c->r[4]); // 80204A58
  c->lr=0x80204A60u; f_80203990(c); // 80204A5C
  c->r[3]=c->r[29]+0x00000034u; // 80204A60
  c->lr=0x80204A68u; f_80203778(c); // 80204A64
  c->r[0]=R8(c->r[29]+0x0000002Cu); // 80204A68
  W32(c->r[29]+0x00000030u,c->r[3]); // 80204A6C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80204A70
  if (crb(c,2)) { goto L_80204A84; } // 80204A74
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 80204A78
  W32(c->r[29]+0x00000018u,c->r[3]); // 80204A7C
  W32(c->r[29]+0x00000020u,c->r[3]); // 80204A80
L_80204A84:;
  c->r[0]=R8(c->r[29]+0x0000002Cu); // 80204A84
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80204A88
  if (crb(c,2)) { goto L_80204A9C; } // 80204A8C
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 80204A90
  W32(c->r[29]+0x00000010u,c->r[3]); // 80204A94
  W32(c->r[29]+0x00000014u,c->r[3]); // 80204A98
L_80204A9C:;
  c->r[3]=c->r[31]+0x00000034u; // 80204A9C
  c->r[4]=c->r[30]+0x00000367u; // 80204AA0
  c->lr=0x80204AA8u; f_802050F0(c); // 80204AA4
  c->r[28]=0u+0x00000000u; // 80204AA8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204AAC
  c->lr=0x80204AB4u; f_80205250(c); // 80204AB0
  c->r[4]=c->r[30]+0x00000372u; // 80204AB4
  c->lr=0x80204ABCu; f_802050F0(c); // 80204AB8
  c->r[4]=c->r[30]+0x00000374u; // 80204ABC
  c->lr=0x80204AC4u; f_802050F0(c); // 80204AC0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204AC4
  c->lr=0x80204ACCu; f_80205250(c); // 80204AC8
  c->r[4]=c->r[30]+0x000002B8u; // 80204ACC
  c->lr=0x80204AD4u; f_802050F0(c); // 80204AD0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204AD4
  c->lr=0x80204ADCu; f_80205250(c); // 80204AD8
  c->r[4]=c->r[30]+0x00000372u; // 80204ADC
  c->lr=0x80204AE4u; f_802050F0(c); // 80204AE0
  c->r[4]=c->r[27]+0x000000B8u; // 80204AE4
  c->lr=0x80204AECu; f_80204D14(c); // 80204AE8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204AEC
  c->lr=0x80204AF4u; f_80205250(c); // 80204AF0
  c->r[4]=c->r[30]+0x000002C2u; // 80204AF4
  c->lr=0x80204AFCu; f_802050F0(c); // 80204AF8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204AFC
  c->lr=0x80204B04u; f_80205250(c); // 80204B00
  c->r[4]=c->r[30]+0x00000372u; // 80204B04
  c->lr=0x80204B0Cu; f_802050F0(c); // 80204B08
  c->r[4]=c->r[27]+0x000000C4u; // 80204B0C
  c->lr=0x80204B14u; f_80204D14(c); // 80204B10
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204B14
  c->lr=0x80204B1Cu; f_80205250(c); // 80204B18
  c->r[4]=c->r[30]+0x000002CEu; // 80204B1C
  c->lr=0x80204B24u; f_802050F0(c); // 80204B20
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204B24
  c->lr=0x80204B2Cu; f_80205250(c); // 80204B28
  c->r[4]=c->r[30]+0x00000372u; // 80204B2C
  c->lr=0x80204B34u; f_802050F0(c); // 80204B30
  c->r[4]=c->r[27]+0x00000118u; // 80204B34
  c->lr=0x80204B3Cu; f_80204D14(c); // 80204B38
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204B3C
  c->lr=0x80204B44u; f_80205250(c); // 80204B40
  c->r[4]=c->r[30]+0x000002D6u; // 80204B44
  c->lr=0x80204B4Cu; f_802050F0(c); // 80204B48
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204B4C
  c->lr=0x80204B54u; f_80205250(c); // 80204B50
  c->r[4]=c->r[30]+0x00000372u; // 80204B54
  c->lr=0x80204B5Cu; f_802050F0(c); // 80204B58
  c->r[4]=c->r[27]+0x00000124u; // 80204B5C
  c->lr=0x80204B64u; f_80204D14(c); // 80204B60
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204B64
  c->lr=0x80204B6Cu; f_80205250(c); // 80204B68
  c->r[4]=c->r[30]+0x000002E5u; // 80204B6C
  c->lr=0x80204B74u; f_802050F0(c); // 80204B70
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204B74
  c->lr=0x80204B7Cu; f_80205250(c); // 80204B78
  c->r[4]=c->r[30]+0x00000372u; // 80204B7C
  c->lr=0x80204B84u; f_802050F0(c); // 80204B80
  c->r[4]=c->r[27]+0x00000130u; // 80204B84
  c->lr=0x80204B8Cu; f_80204D14(c); // 80204B88
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204B8C
  c->lr=0x80204B94u; f_80205250(c); // 80204B90
  c->r[4]=c->r[30]+0x000002F7u; // 80204B94
  c->lr=0x80204B9Cu; f_802050F0(c); // 80204B98
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204B9C
  c->lr=0x80204BA4u; f_80205250(c); // 80204BA0
  c->r[4]=c->r[30]+0x00000372u; // 80204BA4
  c->lr=0x80204BACu; f_802050F0(c); // 80204BA8
  c->r[5]=R32(c->r[27]+0x00000160u); // 80204BAC
  c->r[6]=R32(c->r[27]+0x00000164u); // 80204BB0
  c->lr=0x80204BB8u; f_8020756C(c); // 80204BB4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204BB8
  c->lr=0x80204BC0u; f_80205250(c); // 80204BBC
  c->r[4]=c->r[30]+0x0000030Au; // 80204BC0
  c->lr=0x80204BC8u; f_802050F0(c); // 80204BC4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204BC8
  c->lr=0x80204BD0u; f_80205250(c); // 80204BCC
  c->r[4]=c->r[30]+0x00000372u; // 80204BD0
  c->lr=0x80204BD8u; f_802050F0(c); // 80204BD4
  c->r[4]=R8(c->r[27]+0x00000168u); // 80204BD8
  c->lr=0x80204BE0u; f_802073C0(c); // 80204BDC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204BE0
  c->lr=0x80204BE8u; f_80205250(c); // 80204BE4
  c->r[4]=c->r[30]+0x0000031Bu; // 80204BE8
  c->lr=0x80204BF0u; f_802050F0(c); // 80204BEC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204BF0
  c->lr=0x80204BF8u; f_80205250(c); // 80204BF4
  c->r[4]=c->r[30]+0x00000372u; // 80204BF8
  c->lr=0x80204C00u; f_802050F0(c); // 80204BFC
  c->r[4]=R8(c->r[27]+0x00000169u); // 80204C00
  c->lr=0x80204C08u; f_802073C0(c); // 80204C04
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204C08
  c->lr=0x80204C10u; f_80205250(c); // 80204C0C
  c->r[4]=c->r[30]+0x00000335u; // 80204C10
  c->lr=0x80204C18u; f_802050F0(c); // 80204C14
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204C18
  c->lr=0x80204C20u; f_80205250(c); // 80204C1C
  c->r[4]=c->r[30]+0x00000372u; // 80204C20
  c->lr=0x80204C28u; f_802050F0(c); // 80204C24
  c->r[4]=c->r[27]+0x0000010Cu; // 80204C28
  c->lr=0x80204C30u; f_80204D14(c); // 80204C2C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204C30
  c->lr=0x80204C38u; f_80205250(c); // 80204C34
  c->r[4]=c->r[30]+0x00000342u; // 80204C38
  c->lr=0x80204C40u; f_802050F0(c); // 80204C3C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204C40
  c->lr=0x80204C48u; f_80205250(c); // 80204C44
  c->r[4]=c->r[30]+0x00000372u; // 80204C48
  c->lr=0x80204C50u; f_802050F0(c); // 80204C4C
  c->r[5]=R32(c->r[27]+0x00000148u); // 80204C50
  c->r[6]=R32(c->r[27]+0x0000014Cu); // 80204C54
  c->lr=0x80204C5Cu; f_8020756C(c); // 80204C58
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204C5C
  c->lr=0x80204C64u; f_80205250(c); // 80204C60
  c->r[4]=c->r[30]+0x00000350u; // 80204C64
  c->lr=0x80204C6Cu; f_802050F0(c); // 80204C68
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204C6C
  c->lr=0x80204C74u; f_80205250(c); // 80204C70
  c->r[4]=c->r[30]+0x00000372u; // 80204C74
  c->lr=0x80204C7Cu; f_802050F0(c); // 80204C78
  c->r[5]=R32(c->r[27]+0x00000150u); // 80204C7C
  c->r[6]=R32(c->r[27]+0x00000154u); // 80204C80
  c->lr=0x80204C88u; f_8020756C(c); // 80204C84
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204C88
  c->lr=0x80204C90u; f_80205250(c); // 80204C8C
  c->r[4]=c->r[30]+0x0000035Eu; // 80204C90
  c->lr=0x80204C98u; f_802050F0(c); // 80204C94
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204C98
  c->lr=0x80204CA0u; f_80205250(c); // 80204C9C
  c->r[4]=c->r[30]+0x00000372u; // 80204CA0
  c->lr=0x80204CA8u; f_802050F0(c); // 80204CA4
  c->r[5]=R32(c->r[27]+0x00000158u); // 80204CA8
  c->r[6]=R32(c->r[27]+0x0000015Cu); // 80204CAC
  c->lr=0x80204CB4u; f_8020756C(c); // 80204CB0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80204CB4
  c->lr=0x80204CBCu; f_80205250(c); // 80204CB8
  c->r[3]=c->r[31]+0x00000010u; // 80204CBC
  c->r[4]=c->r[31]+0x00000034u; // 80204CC0
  c->lr=0x80204CC8u; f_802054B0(c); // 80204CC4
  c->r[3]=c->r[31]+0x00000010u; // 80204CC8
  c->lr=0x80204CD0u; f_8021DFA0(c); // 80204CCC
  c->r[27]=0u+0xFFFFFFFFu; // 80204CD0
  c->r[23]=c->r[3]|c->r[3]; // 80204CD4
  c->r[3]=c->r[31]+0x00000010u; // 80204CD8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 80204CDC
  c->lr=0x80204CE4u; f_802030B0(c); // 80204CE0
  c->r[3]=c->r[31]+0x00000034u; // 80204CE4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 80204CE8
  c->lr=0x80204CF0u; f_80205424(c); // 80204CEC
  c->r[10]=c->r[31]|c->r[31]; // 80204CF0
  c->r[3]=c->r[23]|c->r[23]; // 80204CF4
  c->r[11]=c->r[10]+0x000000E0u; // 80204CF8
  c->lr=0x80204D00u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204CFC
  c->r[10]=R32(c->r[1]+0x00000000u); // 80204D00
  c->r[0]=R32(c->r[10]+0x00000004u); // 80204D04
  c->r[1]=c->r[10]|c->r[10]; // 80204D08
  c->lr=c->r[0]; // 80204D0C
  return; // 80204D10
}

// fn_80204D14
void f_80204D14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204D14
  c->r[0]=c->lr; // 80204D18
  W32(c->r[1]+0x00000034u,c->r[0]); // 80204D1C
  c->r[11]=c->r[1]+0x00000030u; // 80204D20
  c->lr=0x80204D28u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204D24
  c->r[28]=c->r[3]|c->r[3]; // 80204D28
  c->r[29]=c->r[4]|c->r[4]; // 80204D2C
  c->r[4]=c->r[28]|c->r[28]; // 80204D30
  c->r[3]=c->r[1]+0x00000010u; // 80204D34
  c->lr=0x80204D3Cu; f_8011B710(c); // 80204D38
  c->r[0]=R8(c->r[1]+0x00000010u); // 80204D3C
  cmps(c,0,(int32_t)c->r[0],0); // 80204D40
  if (crb(c,2)) { goto L_80204DB0; } // 80204D44
  c->r[5]=R32(c->r[28]+0x00000000u); // 80204D48
  c->r[4]=c->r[28]|c->r[28]; // 80204D4C
  c->r[3]=c->r[1]+0x00000008u; // 80204D50
  c->r[0]=R8(c->r[5]+0x00000038u); // 80204D54
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80204D58
  c->lr=0x80204D60u; f_802050E0(c); // 80204D5C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80204D60
  c->r[3]=c->r[29]|c->r[29]; // 80204D64
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80204D68
  c->lr=0x80204D70u; f_802020A8(c); // 80204D6C
  c->r[31]=c->r[3]|c->r[3]; // 80204D70
  c->r[3]=c->r[29]|c->r[29]; // 80204D74
  c->lr=0x80204D7Cu; f_80203778(c); // 80204D78
  c->r[4]=R32(c->r[28]+0x00000000u); // 80204D7C
  c->r[8]=c->r[3]|c->r[3]; // 80204D80
  c->r[5]=c->r[30]|c->r[30]; // 80204D84
  c->r[9]=c->r[31]|c->r[31]; // 80204D88
  c->r[3]=c->r[1]+0x0000000Cu; // 80204D8C
  c->r[6]=0u+0x00000000u; // 80204D90
  c->r[7]=0u+0x00000000u; // 80204D94
  c->lr=0x80204D9Cu; f_80204E60(c); // 80204D98
  cmps(c,0,(int32_t)c->r[3],0); // 80204D9C
  if (!crb(c,2)) { goto L_80204DB0; } // 80204DA0
  c->r[3]=R32(c->r[28]+0x00000000u); // 80204DA4
  c->r[4]=0u+0x00000004u; // 80204DA8
  c->lr=0x80204DB0u; f_80204DE4(c); // 80204DAC
L_80204DB0:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 80204DB0
  c->r[0]=0u+0x00000000u; // 80204DB4
  c->r[3]=c->r[1]+0x00000010u; // 80204DB8
  c->r[4]=0u+0xFFFFFFFFu; // 80204DBC
  W32(c->r[5]+0x0000002Cu,c->r[0]); // 80204DC0
  c->lr=0x80204DC8u; f_8011B888(c); // 80204DC4
  c->r[11]=c->r[1]+0x00000030u; // 80204DC8
  c->r[3]=c->r[28]|c->r[28]; // 80204DCC
  c->lr=0x80204DD4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204DD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80204DD4
  c->lr=c->r[0]; // 80204DD8
  c->r[1]=c->r[1]+0x00000030u; // 80204DDC
  return; // 80204DE0
}

// fn_80204DE4
void f_80204DE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204DE4
  c->r[0]=c->lr; // 80204DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204DF0
  c->r[31]=c->r[3]|c->r[3]; // 80204DF4
  c->r[5]=R8(c->r[3]+0x00000032u); // 80204DF8
  c->r[0]=R32(c->r[3]+0x00000024u); // 80204DFC
  c->r[4]=c->r[5]|c->r[4]; // 80204E00
  cmps(c,0,(int32_t)c->r[0],0); // 80204E04
  W8(c->r[3]+0x00000032u,c->r[4]); // 80204E08
  if (!crb(c,2)) { goto L_80204E1C; } // 80204E0C
  c->r[4]=0u+0x00000001u; // 80204E10
  c->r[3]=c->r[3]+0x00000032u; // 80204E14
  c->lr=0x80204E1Cu; f_80204E50(c); // 80204E18
L_80204E1C:;
  c->r[0]=R8(c->r[31]+0x00000033u); // 80204E1C
  c->r[3]=R8(c->r[31]+0x00000032u); // 80204E20
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80204E24
  if (crb(c,2)) { goto L_80204E3C; } // 80204E28
  c->r[4]=0u+0x80290000u; // 80204E2C
  c->r[3]=c->r[31]|c->r[31]; // 80204E30
  c->r[4]=c->r[4]+0x00006B60u; // 80204E34
  c->lr=0x80204E3Cu; f_8011AE90(c); // 80204E38
L_80204E3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204E3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80204E40
  c->lr=c->r[0]; // 80204E44
  c->r[1]=c->r[1]+0x00000010u; // 80204E48
  return; // 80204E4C
}

// fn_80204E50
void f_80204E50(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 80204E50
  c->r[0]=c->r[0]|c->r[4]; // 80204E54
  W8(c->r[3]+0x00000000u,c->r[0]); // 80204E58
  return; // 80204E5C
}

// fn_80204E60
void f_80204E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204E60
  c->r[0]=c->lr; // 80204E64
  W32(c->r[1]+0x00000054u,c->r[0]); // 80204E68
  c->r[11]=c->r[1]+0x00000050u; // 80204E6C
  c->lr=0x80204E74u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204E70
  c->r[10]=R32(c->r[4]+0x0000002Cu); // 80204E74
  c->r[0]=c->r[7]+c->r[9]; // 80204E78
  c->r[23]=c->r[3]|c->r[3]; // 80204E7C
  c->r[24]=c->r[4]|c->r[4]; // 80204E80
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 80204E84
  c->r[25]=c->r[5]|c->r[5]; // 80204E88
  c->r[26]=c->r[6]|c->r[6]; // 80204E8C
  c->r[27]=c->r[7]|c->r[7]; // 80204E90
  c->r[28]=c->r[8]|c->r[8]; // 80204E94
  c->r[29]=c->r[9]|c->r[9]; // 80204E98
  c->r[31]=0u+0x00000000u; // 80204E9C
  if (!crb(c,1)) { goto L_80204EA8; } // 80204EA0
  c->r[31]=c->r[10]-c->r[0]; // 80204EA4
L_80204EA8:;
  c->r[0]=R16(c->r[4]+0x00000030u); // 80204EA8
  c->r[30]=c->r[0]&0x000000B0u; cr0(c,c->r[30]); // 80204EAC
  cmpu(c,0,c->r[30],0x00000020u); // 80204EB0
  if (crb(c,2)) { goto L_80204EDC; } // 80204EB4
  cmpu(c,0,c->r[30],0x00000010u); // 80204EB8
  if (crb(c,2)) { goto L_80204EDC; } // 80204EBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80204EC0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80204EC4
  c->r[5]=c->r[31]|c->r[31]; // 80204EC8
  c->r[3]=c->r[1]+0x00000018u; // 80204ECC
  W32(c->r[1]+0x00000018u,c->r[0]); // 80204ED0
  c->lr=0x80204ED8u; f_80205084(c); // 80204ED4
  W32(c->r[23]+0x00000000u,c->r[3]); // 80204ED8
L_80204EDC:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 80204EDC
  c->r[4]=c->r[26]|c->r[26]; // 80204EE0
  c->r[5]=c->r[27]|c->r[27]; // 80204EE4
  c->r[3]=c->r[1]+0x00000014u; // 80204EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204EEC
  c->lr=0x80204EF4u; f_80204F78(c); // 80204EF0
  cmpu(c,0,c->r[30],0x00000010u); // 80204EF4
  W32(c->r[23]+0x00000000u,c->r[3]); // 80204EF8
  if (!crb(c,2)) { goto L_80204F18; } // 80204EFC
  W32(c->r[1]+0x00000010u,c->r[3]); // 80204F00
  c->r[5]=c->r[31]|c->r[31]; // 80204F04
  c->r[3]=c->r[1]+0x00000010u; // 80204F08
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[25]; // 80204F0C
  c->lr=0x80204F14u; f_80205084(c); // 80204F10
  W32(c->r[23]+0x00000000u,c->r[3]); // 80204F14
L_80204F18:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 80204F18
  c->r[4]=c->r[28]|c->r[28]; // 80204F1C
  c->r[5]=c->r[29]|c->r[29]; // 80204F20
  c->r[3]=c->r[1]+0x0000000Cu; // 80204F24
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80204F28
  c->lr=0x80204F30u; f_80204F78(c); // 80204F2C
  cmpu(c,0,c->r[30],0x00000020u); // 80204F30
  W32(c->r[23]+0x00000000u,c->r[3]); // 80204F34
  if (!crb(c,2)) { goto L_80204F54; } // 80204F38
  W32(c->r[1]+0x00000008u,c->r[3]); // 80204F3C
  c->r[5]=c->r[31]|c->r[31]; // 80204F40
  c->r[3]=c->r[1]+0x00000008u; // 80204F44
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[25]; // 80204F48
  c->lr=0x80204F50u; f_80205084(c); // 80204F4C
  W32(c->r[23]+0x00000000u,c->r[3]); // 80204F50
L_80204F54:;
  c->r[0]=0u+0x00000000u; // 80204F54
  c->r[11]=c->r[1]+0x00000050u; // 80204F58
  W32(c->r[24]+0x0000002Cu,c->r[0]); // 80204F5C
  c->r[3]=R32(c->r[23]+0x00000000u); // 80204F60
  c->lr=0x80204F68u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204F64
  c->r[0]=R32(c->r[1]+0x00000054u); // 80204F68
  c->lr=c->r[0]; // 80204F6C
  c->r[1]=c->r[1]+0x00000050u; // 80204F70
  return; // 80204F74
}

// fn_80204F78
void f_80204F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204F78
  c->r[0]=c->lr; // 80204F7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80204F80
  c->r[11]=c->r[1]+0x00000020u; // 80204F84
  c->lr=0x80204F8Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204F88
  c->r[28]=c->r[3]|c->r[3]; // 80204F8C
  c->r[29]=c->r[4]|c->r[4]; // 80204F90
  c->r[30]=c->r[5]|c->r[5]; // 80204F94
  c->r[31]=0u+0x00000000u; // 80204F98
  goto L_80204FB8; // 80204F9C
L_80204FA0:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 80204FA0
  c->r[3]=c->r[28]|c->r[28]; // 80204FA4
  c->r[29]=c->r[29]+0x00000001u; // 80204FA8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80204FAC
  c->lr=0x80204FB4u; f_80204FDC(c); // 80204FB0
  c->r[31]=c->r[31]+0x00000001u; // 80204FB4
L_80204FB8:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 80204FB8
  if (crb(c,0)) { IRQCHK(c); goto L_80204FA0; } // 80204FBC
  c->r[11]=c->r[1]+0x00000020u; // 80204FC0
  c->r[3]=R32(c->r[28]+0x00000000u); // 80204FC4
  c->lr=0x80204FCCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204FC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80204FCC
  c->lr=c->r[0]; // 80204FD0
  c->r[1]=c->r[1]+0x00000020u; // 80204FD4
  return; // 80204FD8
}

// fn_80204FDC
void f_80204FDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204FDC
  c->r[0]=c->lr; // 80204FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204FE8
  c->r[31]=0u+0x00000000u; // 80204FEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80204FF0
  c->r[30]=c->r[3]|c->r[3]; // 80204FF4
  c->r[0]=R32(c->r[3]+0x00000000u); // 80204FF8
  cmps(c,0,(int32_t)c->r[0],0); // 80204FFC
  if (crb(c,2)) { goto L_8020501C; } // 80205000
  c->r[3]=c->r[0]|c->r[0]; // 80205004
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80205008
  c->lr=0x80205010u; f_80205048(c); // 8020500C
  cmps(c,0,(int32_t)c->r[3],-1); // 80205010
  if (!crb(c,2)) { goto L_8020501C; } // 80205014
  c->r[31]=0u+0x00000001u; // 80205018
L_8020501C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020501C
  if (crb(c,2)) { goto L_8020502C; } // 80205020
  c->r[0]=0u+0x00000000u; // 80205024
  W32(c->r[30]+0x00000000u,c->r[0]); // 80205028
L_8020502C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020502C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80205030
  c->r[30]=R32(c->r[1]+0x00000008u); // 80205034
  c->r[0]=R32(c->r[1]+0x00000014u); // 80205038
  c->lr=c->r[0]; // 8020503C
  c->r[1]=c->r[1]+0x00000010u; // 80205040
  return; // 80205044
}

// fn_80205048
void f_80205048(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000014u); // 80205048
  c->r[0]=R32(c->r[3]+0x00000018u); // 8020504C
  cmpu(c,0,c->r[5],c->r[0]); // 80205050
  if (!crb(c,0)) { goto L_8020506C; } // 80205054
  W8(c->r[5]+0x00000000u,c->r[4]); // 80205058
  c->r[0]=c->r[5]+0x00000001u; // 8020505C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80205060
  c->r[3]=R8(c->r[5]+0x00000000u); // 80205064
  return; // 80205068
L_8020506C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020506C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 80205070
  c->r[12]=R32(c->r[12]+0x00000038u); // 80205074
  c->ctr=c->r[12]; // 80205078
  if (true) { dispatch(c,c->ctr); return; } // 8020507C
}

// fn_80205080
void f_80205080(Ctx* __restrict c) {
  return; // 80205080
}

// fn_80205084
void f_80205084(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205084
  c->r[0]=c->lr; // 80205088
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020508C
  c->r[11]=c->r[1]+0x00000020u; // 80205090
  c->lr=0x80205098u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80205094
  c->r[28]=c->r[3]|c->r[3]; // 80205098
  c->r[29]=c->r[4]|c->r[4]; // 8020509C
  c->r[30]=c->r[5]|c->r[5]; // 802050A0
  c->r[31]=0u+0x00000000u; // 802050A4
  goto L_802050BC; // 802050A8
L_802050AC:;
  c->r[3]=c->r[28]|c->r[28]; // 802050AC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 802050B0
  c->lr=0x802050B8u; f_80204FDC(c); // 802050B4
  c->r[31]=c->r[31]+0x00000001u; // 802050B8
L_802050BC:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 802050BC
  if (crb(c,0)) { IRQCHK(c); goto L_802050AC; } // 802050C0
  c->r[11]=c->r[1]+0x00000020u; // 802050C4
  c->r[3]=R32(c->r[28]+0x00000000u); // 802050C8
  c->lr=0x802050D0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802050CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802050D0
  c->lr=c->r[0]; // 802050D4
  c->r[1]=c->r[1]+0x00000020u; // 802050D8
  return; // 802050DC
}

// fn_802050E0
void f_802050E0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[4]+0x00000000u); // 802050E0
  c->r[0]=R32(c->r[4]+0x00000024u); // 802050E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 802050E8
  return; // 802050EC
}

// fn_802050F0
void f_802050F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802050F0
  c->r[0]=c->lr; // 802050F4
  W32(c->r[1]+0x00000074u,c->r[0]); // 802050F8
  c->r[11]=c->r[1]+0x00000070u; // 802050FC
  c->lr=0x80205104u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80205100
  c->r[31]=c->r[1]|c->r[1]; // 80205104
  c->r[30]=c->r[3]|c->r[3]; // 80205108
  c->r[27]=c->r[4]|c->r[4]; // 8020510C
  c->r[4]=c->r[30]|c->r[30]; // 80205110
  c->r[3]=c->r[31]+0x00000014u; // 80205114
  c->lr=0x8020511Cu; f_8011B710(c); // 80205118
  c->r[0]=R8(c->r[31]+0x00000014u); // 8020511C
  W32(c->r[31]+0x00000048u,c->r[1]); // 80205120
  cmps(c,0,(int32_t)c->r[0],0); // 80205124
  if (crb(c,2)) { goto L_8020521C; } // 80205128
  W32(c->r[31]+0x00000030u,c->r[1]); // 8020512C
  c->r[3]=c->r[27]|c->r[27]; // 80205130
  c->lr=0x80205138u; f_80109598(c); // 80205134
  c->r[5]=R32(c->r[30]+0x00000000u); // 80205138
  c->r[29]=c->r[3]|c->r[3]; // 8020513C
  c->r[4]=c->r[30]|c->r[30]; // 80205140
  c->r[3]=c->r[31]+0x00000008u; // 80205144
  c->r[0]=R8(c->r[5]+0x00000038u); // 80205148
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020514C
  c->lr=0x80205154u; f_802050E0(c); // 80205150
  c->r[0]=R32(c->r[3]+0x00000000u); // 80205154
  c->r[8]=c->r[27]|c->r[27]; // 80205158
  c->r[9]=c->r[29]|c->r[29]; // 8020515C
  c->r[3]=c->r[31]+0x0000000Cu; // 80205160
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80205164
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80205168
  c->r[6]=0u+0x00000000u; // 8020516C
  c->r[7]=0u+0x00000000u; // 80205170
  c->r[4]=R32(c->r[30]+0x00000000u); // 80205174
  c->lr=0x8020517Cu; f_80204E60(c); // 80205178
  c->r[0]=cntlz(c->r[3]); // 8020517C
  W32(c->r[31]+0x00000010u,c->r[3]); // 80205180
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 80205184
  goto L_802051D4; // 80205188
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020518C
  c->r[4]=0u+0x00000001u; // 80205190
  c->r[3]=c->r[3]+0x00000032u; // 80205194
  c->lr=0x8020519Cu; f_80204E50(c); // 80205198
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020519C
  c->r[0]=R8(c->r[3]+0x00000033u); // 802051A0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802051A4
  if (crb(c,2)) { goto L_802051BC; } // 802051A8
  c->r[3]=0u+0x00000000u; // 802051AC
  c->r[4]=0u+0x00000000u; // 802051B0
  c->r[5]=0u+0x00000000u; // 802051B4
  c->lr=0x802051BCu; f_8010BE30(c); // 802051B8
L_802051BC:;
  c->r[3]=c->r[31]+0x0000001Cu; // 802051BC
  c->lr=0x802051C4u; f_8010BF74(c); // 802051C0
  c->r[0]=c->r[0]|0x00000000u; // 802051C4
  c->r[0]=R32(c->r[1]+0x00000000u); // 802051C8
  c->r[1]=R32(c->r[31]+0x00000030u); // 802051CC
  W32(c->r[1]+0x00000000u,c->r[0]); // 802051D0
L_802051D4:;
  cmps(c,0,(int32_t)c->r[28],0); // 802051D4
  if (crb(c,2)) { goto L_8020521C; } // 802051D8
  c->r[3]=R32(c->r[30]+0x00000000u); // 802051DC
  c->r[4]=0u+0x00000005u; // 802051E0
  c->lr=0x802051E8u; f_80204DE4(c); // 802051E4
  goto L_8020521C; // 802051E8
  c->r[0]=0u+0x00000001u; // 802051EC
  c->r[3]=0u+0x00000000u; // 802051F0
  W8(c->r[31]+0x00000015u,c->r[0]); // 802051F4
  c->r[4]=0u+0x00000000u; // 802051F8
  c->r[5]=0u+0x00000000u; // 802051FC
  c->lr=0x80205204u; f_8010BE30(c); // 80205200
  c->r[3]=c->r[31]+0x00000034u; // 80205204
  c->lr=0x8020520Cu; f_8010BF74(c); // 80205208
  c->r[0]=c->r[0]|0x00000000u; // 8020520C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80205210
  c->r[1]=R32(c->r[31]+0x00000048u); // 80205214
  W32(c->r[1]+0x00000000u,c->r[0]); // 80205218
L_8020521C:;
  c->r[0]=0u+0xFFFFFFFFu; // 8020521C
  c->r[3]=c->r[31]+0x00000014u; // 80205220
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80205224
  c->lr=0x8020522Cu; f_8011B888(c); // 80205228
  c->r[10]=c->r[31]|c->r[31]; // 8020522C
  c->r[3]=c->r[30]|c->r[30]; // 80205230
  c->r[11]=c->r[10]+0x00000070u; // 80205234
  c->lr=0x8020523Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80205238
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020523C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80205240
  c->r[1]=c->r[10]|c->r[10]; // 80205244
  c->lr=c->r[0]; // 80205248
  return; // 8020524C
}

// fn_80205250
void f_80205250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205250
  c->r[0]=c->lr; // 80205254
  W32(c->r[1]+0x00000064u,c->r[0]); // 80205258
  c->r[11]=c->r[1]+0x00000060u; // 8020525C
  c->lr=0x80205264u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80205260
  c->r[31]=c->r[1]|c->r[1]; // 80205264
  c->r[29]=c->r[3]|c->r[3]; // 80205268
  W8(c->r[31]+0x00000008u,c->r[4]); // 8020526C
  c->r[4]=c->r[29]|c->r[29]; // 80205270
  c->r[3]=c->r[31]+0x00000018u; // 80205274
  c->lr=0x8020527Cu; f_8011B710(c); // 80205278
  c->r[0]=R8(c->r[31]+0x00000018u); // 8020527C
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 80205280
  cmps(c,0,(int32_t)c->r[0],0); // 80205284
  if (crb(c,2)) { goto L_80205370; } // 80205288
  W32(c->r[31]+0x00000034u,c->r[1]); // 8020528C
  c->r[4]=c->r[29]|c->r[29]; // 80205290
  c->r[3]=c->r[31]+0x0000000Cu; // 80205294
  c->r[5]=R32(c->r[29]+0x00000000u); // 80205298
  c->r[0]=R8(c->r[5]+0x00000038u); // 8020529C
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802052A0
  c->lr=0x802052A8u; f_802050E0(c); // 802052A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 802052A8
  c->r[3]=c->r[31]+0x00000010u; // 802052AC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 802052B0
  c->r[8]=c->r[31]+0x00000008u; // 802052B4
  W32(c->r[31]+0x00000010u,c->r[0]); // 802052B8
  c->r[6]=0u+0x00000000u; // 802052BC
  c->r[7]=0u+0x00000000u; // 802052C0
  c->r[9]=0u+0x00000001u; // 802052C4
  c->r[4]=R32(c->r[29]+0x00000000u); // 802052C8
  c->lr=0x802052D0u; f_80204E60(c); // 802052CC
  c->r[0]=cntlz(c->r[3]); // 802052D0
  W32(c->r[31]+0x00000014u,c->r[3]); // 802052D4
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 802052D8
  goto L_80205328; // 802052DC
  c->r[3]=R32(c->r[29]+0x00000000u); // 802052E0
  c->r[4]=0u+0x00000001u; // 802052E4
  c->r[3]=c->r[3]+0x00000032u; // 802052E8
  c->lr=0x802052F0u; f_80204E50(c); // 802052EC
  c->r[3]=R32(c->r[29]+0x00000000u); // 802052F0
  c->r[0]=R8(c->r[3]+0x00000033u); // 802052F4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802052F8
  if (crb(c,2)) { goto L_80205310; } // 802052FC
  c->r[3]=0u+0x00000000u; // 80205300
  c->r[4]=0u+0x00000000u; // 80205304
  c->r[5]=0u+0x00000000u; // 80205308
  c->lr=0x80205310u; f_8010BE30(c); // 8020530C
L_80205310:;
  c->r[3]=c->r[31]+0x00000020u; // 80205310
  c->lr=0x80205318u; f_8010BF74(c); // 80205314
  c->r[0]=c->r[0]|0x00000000u; // 80205318
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020531C
  c->r[1]=R32(c->r[31]+0x00000034u); // 80205320
  W32(c->r[1]+0x00000000u,c->r[0]); // 80205324
L_80205328:;
  cmps(c,0,(int32_t)c->r[30],0); // 80205328
  if (crb(c,2)) { goto L_80205370; } // 8020532C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80205330
  c->r[4]=0u+0x00000005u; // 80205334
  c->lr=0x8020533Cu; f_80204DE4(c); // 80205338
  goto L_80205370; // 8020533C
  c->r[0]=0u+0x00000001u; // 80205340
  c->r[3]=0u+0x00000000u; // 80205344
  W8(c->r[31]+0x00000019u,c->r[0]); // 80205348
  c->r[4]=0u+0x00000000u; // 8020534C
  c->r[5]=0u+0x00000000u; // 80205350
  c->lr=0x80205358u; f_8010BE30(c); // 80205354
  c->r[3]=c->r[31]+0x00000038u; // 80205358
  c->lr=0x80205360u; f_8010BF74(c); // 8020535C
  c->r[0]=c->r[0]|0x00000000u; // 80205360
  c->r[0]=R32(c->r[1]+0x00000000u); // 80205364
  c->r[1]=R32(c->r[31]+0x0000004Cu); // 80205368
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020536C
L_80205370:;
  c->r[0]=0u+0xFFFFFFFFu; // 80205370
  c->r[3]=c->r[31]+0x00000018u; // 80205374
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80205378
  c->lr=0x80205380u; f_8011B888(c); // 8020537C
  c->r[10]=c->r[31]|c->r[31]; // 80205380
  c->r[3]=c->r[29]|c->r[29]; // 80205384
  c->r[11]=c->r[10]+0x00000060u; // 80205388
  c->lr=0x80205390u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020538C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80205390
  c->r[0]=R32(c->r[10]+0x00000004u); // 80205394
  c->r[1]=c->r[10]|c->r[10]; // 80205398
  c->lr=c->r[0]; // 8020539C
  return; // 802053A0
}

// fn_802053A4
void f_802053A4(Ctx* __restrict c) {
  c->r[4]=0u+0x80290000u; // 802053A4
  c->r[4]=c->r[4]+0x00006BECu; // 802053A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 802053AC
  return; // 802053B0
}

// fn_802053B4
void f_802053B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802053B4
  c->r[0]=c->lr; // 802053B8
  cmps(c,0,(int32_t)c->r[3],0); // 802053BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802053C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802053C4
  c->r[31]=c->r[4]|c->r[4]; // 802053C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 802053CC
  c->r[30]=c->r[3]|c->r[3]; // 802053D0
  if (crb(c,2)) { goto L_80205408; } // 802053D4
  c->r[4]=0u+0xFFFFFFFFu; // 802053D8
  c->r[3]=c->r[3]+0x0000002Cu; // 802053DC
  c->lr=0x802053E4u; f_802030B0(c); // 802053E0
  cmps(c,0,(int32_t)c->r[30],0); // 802053E4
  if (crb(c,2)) { goto L_802053F8; } // 802053E8
  c->r[3]=c->r[30]+0x0000001Cu; // 802053EC
  c->r[4]=0u+0xFFFFFFFFu; // 802053F0
  c->lr=0x802053F8u; f_8011B000(c); // 802053F4
L_802053F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802053F8
  if (!crb(c,1)) { goto L_80205408; } // 802053FC
  c->r[3]=c->r[30]|c->r[30]; // 80205400
  c->lr=0x80205408u; f_8009230C(c); // 80205404
L_80205408:;
  c->r[3]=c->r[30]|c->r[30]; // 80205408
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020540C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80205410
  c->r[0]=R32(c->r[1]+0x00000014u); // 80205414
  c->lr=c->r[0]; // 80205418
  c->r[1]=c->r[1]+0x00000010u; // 8020541C
  return; // 80205420
}

// dtor_80205424
void f_80205424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205424
  c->r[0]=c->lr; // 80205428
  cmps(c,0,(int32_t)c->r[3],0); // 8020542C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80205430
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80205434
  c->r[31]=c->r[4]|c->r[4]; // 80205438
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020543C
  c->r[30]=c->r[3]|c->r[3]; // 80205440
  if (crb(c,2)) { goto L_80205494; } // 80205444
  c->r[5]=R32(c->r[3]+0x00000000u); // 80205448
  c->r[0]=c->r[3]+0x00000040u; // 8020544C
  c->r[4]=0u+0xFFFFFFFFu; // 80205450
  c->r[3]=c->r[3]+0x00000008u; // 80205454
  c->r[0]=c->r[0]-c->r[5]; // 80205458
  W32(c->r[5]+0x0000003Cu,c->r[0]); // 8020545C
  c->lr=0x80205464u; f_802053B4(c); // 80205460
  c->r[3]=c->r[30]|c->r[30]; // 80205464
  c->r[4]=0u+0x00000000u; // 80205468
  c->lr=0x80205470u; f_8011B4B4(c); // 8020546C
  cmps(c,0,(int32_t)c->r[31],0); // 80205470
  if (crb(c,2)) { goto L_80205484; } // 80205474
  c->r[3]=c->r[30]+0x00000040u; // 80205478
  c->r[4]=0u+0x00000000u; // 8020547C
  c->lr=0x80205484u; f_8011B52C(c); // 80205480
L_80205484:;
  cmps(c,0,(int32_t)c->r[31],0); // 80205484
  if (!crb(c,1)) { goto L_80205494; } // 80205488
  c->r[3]=c->r[30]|c->r[30]; // 8020548C
  c->lr=0x80205494u; f_8009230C(c); // 80205490
L_80205494:;
  c->r[3]=c->r[30]|c->r[30]; // 80205494
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80205498
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020549C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802054A0
  c->lr=c->r[0]; // 802054A4
  c->r[1]=c->r[1]+0x00000010u; // 802054A8
  return; // 802054AC
}

// fn_802054B0
void f_802054B0(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0x00000008u; // 802054B0
  f_80207320(c); return; // 802054B4
}

// fn_802054B8
void f_802054B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802054B8
  c->r[0]=c->lr; // 802054BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802054C0
  c->r[11]=c->r[1]+0x00000040u; // 802054C4
  c->lr=0x802054CCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802054C8
  c->r[31]=0u+0x802A0000u; // 802054CC
  c->r[29]=c->r[3]|c->r[3]; // 802054D0
  c->r[31]=c->r[31]+0x00003408u; // 802054D4
  c->r[3]=c->r[1]+0x00000018u; // 802054D8
  c->lr=0x802054E0u; f_80203990(c); // 802054DC
  c->r[3]=c->r[1]+0x00000018u; // 802054E0
  c->lr=0x802054E8u; f_8021DF90(c); // 802054E4
  cmps(c,0,(int32_t)c->r[3],0); // 802054E8
  c->r[30]=c->r[3]|c->r[3]; // 802054EC
  if (crb(c,2)) { goto L_80205520; } // 802054F0
  cmps(c,0,(int32_t)c->r[3],-4006); // 802054F4
  if (!crb(c,2)) { goto L_8020550C; } // 802054F8
  c->r[4]=c->r[31]+0x00000376u; // 802054FC
  c->r[3]=0u+0x00000003u; // 80205500
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205504
  c->lr=0x8020550Cu; f_8020B328(c); // 80205508
L_8020550C:;
  c->r[3]=c->r[1]+0x00000018u; // 8020550C
  c->r[4]=0u+0xFFFFFFFFu; // 80205510
  c->lr=0x80205518u; f_802030B0(c); // 80205514
  c->r[3]=c->r[30]|c->r[30]; // 80205518
  goto L_802055EC; // 8020551C
L_80205520:;
  c->r[3]=c->r[1]+0x00000018u; // 80205520
  c->lr=0x80205528u; f_80203778(c); // 80205524
  c->r[30]=c->r[3]|c->r[3]; // 80205528
  c->r[3]=c->r[1]+0x00000018u; // 8020552C
  c->lr=0x80205534u; f_802020A8(c); // 80205530
  W32(c->r[1]+0x00000008u,c->r[3]); // 80205534
  c->r[3]=c->r[30]|c->r[30]; // 80205538
  c->r[4]=c->r[1]+0x00000008u; // 8020553C
  c->r[5]=c->r[1]+0x00000014u; // 80205540
  c->r[6]=c->r[1]+0x00000010u; // 80205544
  c->r[7]=c->r[1]+0x0000000Cu; // 80205548
  c->lr=0x80205550u; f_80204388(c); // 8020554C
  cmps(c,0,(int32_t)c->r[3],0); // 80205550
  c->r[30]=c->r[3]|c->r[3]; // 80205554
  if (crb(c,2)) { goto L_80205590; } // 80205558
  c->r[3]=R32(c->r[1]+0x00000014u); // 8020555C
  c->r[4]=c->r[31]+0x00000367u; // 80205560
  c->lr=0x80205568u; f_80114288(c); // 80205564
  cmps(c,0,(int32_t)c->r[3],0); // 80205568
  if (!crb(c,2)) { goto L_80205590; } // 8020556C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80205570
  cmpu(c,0,c->r[5],0x00000002u); // 80205574
  if (!crb(c,2)) { goto L_80205590; } // 80205578
  c->r[3]=R32(c->r[1]+0x00000010u); // 8020557C
  c->r[4]=c->r[31]+0x00000374u; // 80205580
  c->lr=0x80205588u; f_801101A0(c); // 80205584
  cmps(c,0,(int32_t)c->r[3],0); // 80205588
  if (crb(c,2)) { goto L_802055B8; } // 8020558C
L_80205590:;
  c->r[3]=c->r[1]+0x00000018u; // 80205590
  c->r[4]=0u+0xFFFFFFFFu; // 80205594
  c->lr=0x8020559Cu; f_802030B0(c); // 80205598
  c->r[3]=0u+0xFFFFF05Fu; // 8020559C
  goto L_802055EC; // 802055A0
  goto L_802055B8; // 802055A4
L_802055A8:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 802055A8
  c->r[3]=c->r[29]|c->r[29]; // 802055AC
  c->r[5]=R32(c->r[1]+0x00000010u); // 802055B0
  c->lr=0x802055B8u; f_802046CC(c); // 802055B4
L_802055B8:;
  c->r[3]=c->r[30]|c->r[30]; // 802055B8
  c->r[4]=c->r[1]+0x00000008u; // 802055BC
  c->r[5]=c->r[1]+0x00000014u; // 802055C0
  c->r[6]=c->r[1]+0x00000010u; // 802055C4
  c->r[7]=0u+0x00000000u; // 802055C8
  c->lr=0x802055D0u; f_80204388(c); // 802055CC
  cmps(c,0,(int32_t)c->r[3],0); // 802055D0
  c->r[30]=c->r[3]|c->r[3]; // 802055D4
  if (!crb(c,2)) { IRQCHK(c); goto L_802055A8; } // 802055D8
  c->r[3]=c->r[1]+0x00000018u; // 802055DC
  c->r[4]=0u+0xFFFFFFFFu; // 802055E0
  c->lr=0x802055E8u; f_802030B0(c); // 802055E4
  c->r[3]=0u+0x00000000u; // 802055E8
L_802055EC:;
  c->r[11]=c->r[1]+0x00000040u; // 802055EC
  c->lr=0x802055F4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802055F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802055F4
  c->lr=c->r[0]; // 802055F8
  c->r[1]=c->r[1]+0x00000040u; // 802055FC
  return; // 80205600
}

// fn_80205604
void f_80205604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205604
  c->r[0]=c->lr; // 80205608
  W32(c->r[1]+0x000001F4u,c->r[0]); // 8020560C
  c->r[11]=c->r[1]+0x000001F0u; // 80205610
  c->lr=0x80205618u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80205614
  c->r[0]=c->r[1]+0x00000053u; // 80205618
  c->r[29]=c->r[3]|c->r[3]; // 8020561C
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFC0u; // 80205620
  c->r[3]=c->r[1]+0x00000008u; // 80205624
  c->lr=0x8020562Cu; f_80203990(c); // 80205628
  c->r[3]=c->r[30]|c->r[30]; // 8020562C
  c->lr=0x80205634u; f_802006CC(c); // 80205630
  cmps(c,0,(int32_t)c->r[3],0); // 80205634
  c->r[31]=c->r[3]|c->r[3]; // 80205638
  if (crb(c,2)) { goto L_8020565C; } // 8020563C
  c->r[4]=0u+0x802A0000u; // 80205640
  c->r[5]=c->r[31]|c->r[31]; // 80205644
  c->r[4]=c->r[4]+0x0000379Au; // 80205648
  c->r[3]=0u+0x00000001u; // 8020564C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205650
  c->lr=0x80205658u; f_8020B328(c); // 80205654
  goto L_80205688; // 80205658
L_8020565C:;
  c->r[4]=0u+0x802A0000u; // 8020565C
  c->r[3]=0u+0x00000004u; // 80205660
  c->r[4]=c->r[4]+0x000037B8u; // 80205664
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205668
  c->lr=0x80205670u; f_8020B328(c); // 8020566C
  c->r[3]=c->r[29]+0x000001FCu; // 80205670
  c->lr=0x80205678u; f_80204658(c); // 80205674
  c->r[3]=c->r[30]|c->r[30]; // 80205678
  c->r[5]=c->r[29]+0x000001FCu; // 8020567C
  c->r[4]=0u+0x00000180u; // 80205680
  c->lr=0x80205688u; f_80215704(c); // 80205684
L_80205688:;
  c->r[3]=c->r[1]+0x00000008u; // 80205688
  c->r[4]=0u+0xFFFFFFFFu; // 8020568C
  c->lr=0x80205694u; f_802030B0(c); // 80205690
  c->r[11]=c->r[1]+0x000001F0u; // 80205694
  c->r[3]=c->r[31]|c->r[31]; // 80205698
  c->lr=0x802056A0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020569C
  c->r[0]=R32(c->r[1]+0x000001F4u); // 802056A0
  c->lr=c->r[0]; // 802056A4
  c->r[1]=c->r[1]+0x000001F0u; // 802056A8
  return; // 802056AC
}

// fn_802056B0
void f_802056B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFCA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802056B0
  c->r[0]=c->lr; // 802056B4
  W32(c->r[1]+0x00000364u,c->r[0]); // 802056B8
  c->r[11]=c->r[1]+0x00000360u; // 802056BC
  c->lr=0x802056C4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802056C0
  c->r[31]=c->r[1]|c->r[1]; // 802056C4
  c->r[29]=0u+0x802A0000u; // 802056C8
  c->r[21]=c->r[3]|c->r[3]; // 802056CC
  c->r[20]=c->r[4]|c->r[4]; // 802056D0
  c->r[3]=c->r[31]+0x00000058u; // 802056D4
  c->r[29]=c->r[29]+0x00003408u; // 802056D8
  c->r[22]=0u+0x00000000u; // 802056DC
  c->lr=0x802056E4u; f_80203990(c); // 802056E0
  cmps(c,0,(int32_t)c->r[20],0); // 802056E4
  if (!crb(c,2)) { goto L_80205710; } // 802056E8
  c->r[0]=R8(c->r[21]+0x00000230u); // 802056EC
  cmps(c,0,(int32_t)c->r[0],0); // 802056F0
  if (crb(c,2)) { goto L_80205710; } // 802056F4
  c->r[0]=0u+0xFFFFFFFFu; // 802056F8
  c->r[3]=c->r[31]+0x00000058u; // 802056FC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80205700
  c->lr=0x80205708u; f_802030B0(c); // 80205704
  c->r[3]=0u+0x00000000u; // 80205708
  goto L_80205E5C; // 8020570C
L_80205710:;
  c->r[30]=0u+0x00000000u; // 80205710
  c->r[0]=R32(c->r[21]+0x00000000u); // 80205714
  W32(c->r[21]+0x0000022Cu,c->r[30]); // 80205718
  c->r[28]=c->r[31]+0x00000080u; // 8020571C
  c->r[27]=c->r[29]+0x000003CAu; // 80205720
  c->r[3]=c->r[31]+0x00000090u; // 80205724
  W32(c->r[21]+0x00000228u,c->r[30]); // 80205728
  c->r[4]=c->r[21]+0x00000010u; // 8020572C
  W8(c->r[21]+0x00000230u,c->r[30]); // 80205730
  W32(c->r[31]+0x00000080u,c->r[0]); // 80205734
  c->r[0]=R32(c->r[21]+0x00000004u); // 80205738
  W32(c->r[31]+0x00000084u,c->r[0]); // 8020573C
  c->r[0]=R32(c->r[21]+0x00000008u); // 80205740
  W32(c->r[31]+0x00000088u,c->r[0]); // 80205744
  c->r[0]=R8(c->r[21]+0x0000000Cu); // 80205748
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 8020574C
  c->lr=0x80205754u; f_80206FA4(c); // 80205750
  c->r[3]=c->r[31]+0x0000009Cu; // 80205754
  c->r[4]=c->r[21]+0x0000001Cu; // 80205758
  c->lr=0x80205760u; f_80206FA4(c); // 8020575C
  c->r[3]=c->r[28]+0x00000028u; // 80205760
  c->r[4]=c->r[21]+0x00000028u; // 80205764
  c->lr=0x8020576Cu; f_80206FA4(c); // 80205768
  c->r[3]=c->r[28]+0x00000034u; // 8020576C
  c->r[4]=c->r[21]+0x00000034u; // 80205770
  c->lr=0x80205778u; f_80206FA4(c); // 80205774
  c->r[3]=c->r[28]+0x00000040u; // 80205778
  c->r[4]=c->r[21]+0x00000040u; // 8020577C
  c->lr=0x80205784u; f_80206FA4(c); // 80205780
  c->r[0]=R32(c->r[21]+0x0000004Cu); // 80205784
  c->r[3]=c->r[28]+0x00000068u; // 80205788
  c->r[4]=c->r[21]+0x00000068u; // 8020578C
  W32(c->r[28]+0x0000004Cu,c->r[0]); // 80205790
  c->r[0]=R8(c->r[21]+0x00000050u); // 80205794
  W8(c->r[28]+0x00000050u,c->r[0]); // 80205798
  c->r[0]=R32(c->r[21]+0x00000058u); // 8020579C
  c->r[5]=R32(c->r[21]+0x0000005Cu); // 802057A0
  W32(c->r[28]+0x0000005Cu,c->r[5]); // 802057A4
  W32(c->r[28]+0x00000058u,c->r[0]); // 802057A8
  c->r[0]=R32(c->r[21]+0x00000060u); // 802057AC
  c->r[5]=R32(c->r[21]+0x00000064u); // 802057B0
  W32(c->r[28]+0x00000064u,c->r[5]); // 802057B4
  W32(c->r[28]+0x00000060u,c->r[0]); // 802057B8
  c->lr=0x802057C0u; f_80206FA4(c); // 802057BC
  c->r[3]=c->r[28]+0x00000074u; // 802057C0
  c->r[4]=c->r[21]+0x00000074u; // 802057C4
  c->lr=0x802057CCu; f_80206FA4(c); // 802057C8
  W32(c->r[28]+0x00000080u,c->r[30]); // 802057CC
  c->r[26]=c->r[28]+0x00000080u; // 802057D0
  W32(c->r[28]+0x00000084u,c->r[30]); // 802057D4
  W32(c->r[28]+0x00000088u,c->r[30]); // 802057D8
  c->r[0]=R32(c->r[21]+0x00000084u); // 802057DC
  c->r[23]=R32(c->r[21]+0x00000080u); // 802057E0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 802057E4
  c->r[24]=c->r[23]+c->r[0]; // 802057E8
  c->r[0]=c->r[24]-c->r[23]; // 802057EC
  c->r[0]=sraw(c,c->r[0],5); // 802057F0
  c->r[25]=addc(c,c->r[0],0,c->xer_ca); cr0(c,c->r[25]); // 802057F4
  if (crb(c,2)) { goto L_80205948; } // 802057F8
  c->r[3]=0u+0x08000000u; // 802057FC
  W8(c->r[31]+0x00000009u,c->r[30]); // 80205800
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80205804
  cmpu(c,0,c->r[25],c->r[0]); // 80205808
  if (!crb(c,1)) { goto L_80205830; } // 8020580C
  c->r[3]=c->r[31]+0x0000004Cu; // 80205810
  c->r[4]=c->r[29]+0x00000405u; // 80205814
  c->lr=0x8020581Cu; f_80206F68(c); // 80205818
  c->r[5]=0u+0x80120000u; // 8020581C
  c->r[4]=c->r[3]|c->r[3]; // 80205820
  c->r[3]=c->r[29]+0x000003CEu; // 80205824
  c->r[5]=c->r[5]+0xFFFFD5F8u; // 80205828
  c->lr=0x80205830u; f_8010BE30(c); // 8020582C
L_80205830:;
  c->r[20]=rotl(c->r[25],5)&0xFFFFFFE0u; // 80205830
  c->r[5]=c->r[25]|c->r[25]; // 80205834
  c->r[7]=c->r[20]|c->r[20]; // 80205838
  c->r[4]=c->r[29]+0x00000419u; // 8020583C
  c->r[3]=0u+0x00000006u; // 80205840
  c->r[6]=0u+0x00000020u; // 80205844
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205848
  c->lr=0x80205850u; f_8020B328(c); // 8020584C
  c->r[3]=c->r[20]|c->r[20]; // 80205850
  c->lr=0x80205858u; f_8020EAC4(c); // 80205854
  cmps(c,0,(int32_t)c->r[3],0); // 80205858
  c->r[30]=c->r[3]|c->r[3]; // 8020585C
  if (!crb(c,2)) { goto L_8020589C; } // 80205860
  c->r[5]=c->r[25]|c->r[25]; // 80205864
  c->r[7]=c->r[20]|c->r[20]; // 80205868
  c->r[4]=c->r[29]+0x00000445u; // 8020586C
  c->r[3]=0u+0x00000001u; // 80205870
  c->r[6]=0u+0x00000020u; // 80205874
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205878
  c->lr=0x80205880u; f_8020B328(c); // 8020587C
  c->r[3]=c->r[31]+0x0000000Cu; // 80205880
  c->lr=0x80205888u; f_80207934(c); // 80205884
  c->r[5]=0u+0x80110000u; // 80205888
  c->r[4]=c->r[3]|c->r[3]; // 8020588C
  c->r[3]=c->r[29]+0x0000047Eu; // 80205890
  c->r[5]=c->r[5]+0xFFFF9768u; // 80205894
  c->lr=0x8020589Cu; f_8010BE30(c); // 80205898
L_8020589C:;
  c->r[5]=c->r[30]|c->r[30]; // 8020589C
  c->r[4]=c->r[29]+0x000004A0u; // 802058A0
  c->r[3]=0u+0x00000006u; // 802058A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802058A8
  c->lr=0x802058B0u; f_8020B328(c); // 802058AC
  c->r[0]=R32(c->r[26]+0x00000004u); // 802058B0
  c->r[3]=0u+0x00000000u; // 802058B4
  W32(c->r[26]+0x00000000u,c->r[30]); // 802058B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 802058BC
  W32(c->r[26]+0x00000008u,c->r[25]); // 802058C0
  c->r[25]=c->r[30]+c->r[0]; // 802058C4
  W8(c->r[31]+0x00000008u,c->r[3]); // 802058C8
  goto L_80205940; // 802058CC
L_802058D0:;
  c->r[4]=c->r[29]+0x000004B3u; // 802058D0
  c->r[3]=0u+0x00000006u; // 802058D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802058D8
  c->lr=0x802058E0u; f_8020B328(c); // 802058DC
  cmps(c,0,(int32_t)c->r[25],0); // 802058E0
  if (crb(c,2)) { goto L_8020592C; } // 802058E4
  c->r[0]=R32(c->r[23]+0x00000000u); // 802058E8
  c->r[3]=c->r[25]+0x00000010u; // 802058EC
  c->r[5]=R32(c->r[23]+0x00000004u); // 802058F0
  c->r[4]=c->r[23]+0x00000010u; // 802058F4
  W32(c->r[31]+0x00000078u,c->r[1]); // 802058F8
  W32(c->r[25]+0x00000004u,c->r[5]); // 802058FC
  W32(c->r[25]+0x00000000u,c->r[0]); // 80205900
  c->r[0]=R32(c->r[23]+0x00000008u); // 80205904
  c->r[5]=R32(c->r[23]+0x0000000Cu); // 80205908
  W32(c->r[25]+0x0000000Cu,c->r[5]); // 8020590C
  W32(c->r[25]+0x00000008u,c->r[0]); // 80205910
  c->lr=0x80205918u; f_80206FA4(c); // 80205914
  goto L_8020592C; // 80205918
  c->r[3]=0u+0x00000000u; // 8020591C
  c->r[4]=0u+0x00000000u; // 80205920
  c->r[5]=0u+0x00000000u; // 80205924
  c->lr=0x8020592Cu; f_8010BE30(c); // 80205928
L_8020592C:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 8020592C
  c->r[23]=c->r[23]+0x00000020u; // 80205930
  c->r[25]=c->r[25]+0x00000020u; // 80205934
  c->r[0]=c->r[3]+0x00000001u; // 80205938
  W32(c->r[26]+0x00000004u,c->r[0]); // 8020593C
L_80205940:;
  cmpu(c,0,c->r[23],c->r[24]); // 80205940
  if (!crb(c,2)) { IRQCHK(c); goto L_802058D0; } // 80205944
L_80205948:;
  c->r[0]=R32(c->r[21]+0x0000008Cu); // 80205948
  c->r[3]=c->r[28]+0x000000B8u; // 8020594C
  c->r[4]=c->r[21]+0x000000B8u; // 80205950
  W32(c->r[28]+0x0000008Cu,c->r[0]); // 80205954
  c->r[0]=R32(c->r[21]+0x00000090u); // 80205958
  W32(c->r[28]+0x00000090u,c->r[0]); // 8020595C
  c->r[0]=R32(c->r[21]+0x00000094u); // 80205960
  W32(c->r[28]+0x00000094u,c->r[0]); // 80205964
  c->r[0]=R32(c->r[21]+0x00000098u); // 80205968
  W32(c->r[28]+0x00000098u,c->r[0]); // 8020596C
  c->r[0]=R32(c->r[21]+0x0000009Cu); // 80205970
  W32(c->r[28]+0x0000009Cu,c->r[0]); // 80205974
  c->r[0]=R32(c->r[21]+0x000000A0u); // 80205978
  W32(c->r[28]+0x000000A0u,c->r[0]); // 8020597C
  c->r[0]=R32(c->r[21]+0x000000A4u); // 80205980
  W32(c->r[28]+0x000000A4u,c->r[0]); // 80205984
  c->r[0]=R32(c->r[21]+0x000000A8u); // 80205988
  W32(c->r[28]+0x000000A8u,c->r[0]); // 8020598C
  c->r[0]=R32(c->r[21]+0x000000ACu); // 80205990
  W32(c->r[28]+0x000000ACu,c->r[0]); // 80205994
  c->r[0]=R32(c->r[21]+0x000000B0u); // 80205998
  W32(c->r[28]+0x000000B0u,c->r[0]); // 8020599C
  c->r[0]=R32(c->r[21]+0x000000B4u); // 802059A0
  W32(c->r[28]+0x000000B4u,c->r[0]); // 802059A4
  c->lr=0x802059ACu; f_80206FA4(c); // 802059A8
  c->r[3]=c->r[28]+0x000000C4u; // 802059AC
  c->r[4]=c->r[21]+0x000000C4u; // 802059B0
  c->lr=0x802059B8u; f_80206FA4(c); // 802059B4
  c->r[3]=c->r[28]+0x000000D0u; // 802059B8
  c->r[4]=c->r[21]+0x000000D0u; // 802059BC
  c->lr=0x802059C4u; f_80206FA4(c); // 802059C0
  c->r[3]=c->r[28]+0x000000DCu; // 802059C4
  c->r[4]=c->r[21]+0x000000DCu; // 802059C8
  c->lr=0x802059D0u; f_80206FA4(c); // 802059CC
  c->r[3]=c->r[28]+0x000000E8u; // 802059D0
  c->r[4]=c->r[21]+0x000000E8u; // 802059D4
  c->lr=0x802059DCu; f_80206FA4(c); // 802059D8
  c->r[3]=c->r[28]+0x000000F4u; // 802059DC
  c->r[4]=c->r[21]+0x000000F4u; // 802059E0
  c->lr=0x802059E8u; f_80206FA4(c); // 802059E4
  c->r[3]=c->r[28]+0x00000100u; // 802059E8
  c->r[4]=c->r[21]+0x00000100u; // 802059EC
  c->lr=0x802059F4u; f_80206FA4(c); // 802059F0
  c->r[3]=c->r[28]+0x0000010Cu; // 802059F4
  c->r[4]=c->r[21]+0x0000010Cu; // 802059F8
  c->lr=0x80205A00u; f_80206FA4(c); // 802059FC
  c->r[3]=c->r[28]+0x00000118u; // 80205A00
  c->r[4]=c->r[21]+0x00000118u; // 80205A04
  c->lr=0x80205A0Cu; f_80206FA4(c); // 80205A08
  c->r[3]=c->r[28]+0x00000124u; // 80205A0C
  c->r[4]=c->r[21]+0x00000124u; // 80205A10
  c->lr=0x80205A18u; f_80206FA4(c); // 80205A14
  c->r[3]=c->r[28]+0x00000130u; // 80205A18
  c->r[4]=c->r[21]+0x00000130u; // 80205A1C
  c->lr=0x80205A24u; f_80206FA4(c); // 80205A20
  c->r[3]=c->r[28]+0x0000013Cu; // 80205A24
  c->r[4]=c->r[21]+0x0000013Cu; // 80205A28
  c->lr=0x80205A30u; f_80206FA4(c); // 80205A2C
  c->r[0]=R32(c->r[21]+0x00000148u); // 80205A30
  c->r[3]=c->r[28]+0x00000170u; // 80205A34
  c->r[5]=R32(c->r[21]+0x0000014Cu); // 80205A38
  c->r[4]=c->r[21]+0x00000170u; // 80205A3C
  W32(c->r[28]+0x0000014Cu,c->r[5]); // 80205A40
  W32(c->r[28]+0x00000148u,c->r[0]); // 80205A44
  c->r[0]=R32(c->r[21]+0x00000150u); // 80205A48
  c->r[5]=R32(c->r[21]+0x00000154u); // 80205A4C
  W32(c->r[28]+0x00000154u,c->r[5]); // 80205A50
  W32(c->r[28]+0x00000150u,c->r[0]); // 80205A54
  c->r[0]=R32(c->r[21]+0x00000158u); // 80205A58
  c->r[5]=R32(c->r[21]+0x0000015Cu); // 80205A5C
  W32(c->r[28]+0x0000015Cu,c->r[5]); // 80205A60
  W32(c->r[28]+0x00000158u,c->r[0]); // 80205A64
  c->r[0]=R32(c->r[21]+0x00000160u); // 80205A68
  c->r[5]=R32(c->r[21]+0x00000164u); // 80205A6C
  W32(c->r[28]+0x00000164u,c->r[5]); // 80205A70
  W32(c->r[28]+0x00000160u,c->r[0]); // 80205A74
  c->r[0]=R8(c->r[21]+0x00000168u); // 80205A78
  W8(c->r[28]+0x00000168u,c->r[0]); // 80205A7C
  c->r[0]=R8(c->r[21]+0x00000169u); // 80205A80
  W8(c->r[28]+0x00000169u,c->r[0]); // 80205A84
  c->r[0]=R8(c->r[21]+0x0000016Au); // 80205A88
  W8(c->r[28]+0x0000016Au,c->r[0]); // 80205A8C
  c->r[0]=R8(c->r[21]+0x0000016Bu); // 80205A90
  W8(c->r[28]+0x0000016Bu,c->r[0]); // 80205A94
  c->r[0]=R8(c->r[21]+0x0000016Cu); // 80205A98
  W8(c->r[28]+0x0000016Cu,c->r[0]); // 80205A9C
  c->lr=0x80205AA4u; f_80206FA4(c); // 80205AA0
  c->r[3]=c->r[28]+0x0000017Cu; // 80205AA4
  c->r[4]=c->r[21]+0x0000017Cu; // 80205AA8
  c->lr=0x80205AB0u; f_80206FA4(c); // 80205AAC
  c->r[0]=R32(c->r[21]+0x00000188u); // 80205AB0
  c->r[3]=c->r[28]+0x00000194u; // 80205AB4
  c->r[5]=R32(c->r[21]+0x0000018Cu); // 80205AB8
  c->r[4]=c->r[21]+0x00000194u; // 80205ABC
  W32(c->r[28]+0x0000018Cu,c->r[5]); // 80205AC0
  W32(c->r[28]+0x00000188u,c->r[0]); // 80205AC4
  c->r[0]=R32(c->r[21]+0x00000190u); // 80205AC8
  W32(c->r[28]+0x00000190u,c->r[0]); // 80205ACC
  c->lr=0x80205AD4u; f_80206FA4(c); // 80205AD0
  c->r[3]=c->r[28]+0x000001A0u; // 80205AD4
  c->r[4]=c->r[21]+0x000001A0u; // 80205AD8
  c->lr=0x80205AE0u; f_80206FA4(c); // 80205ADC
  c->r[0]=R32(c->r[21]+0x000001ACu); // 80205AE0
  c->r[3]=c->r[28]+0x000001B4u; // 80205AE4
  c->r[4]=c->r[21]+0x000001B4u; // 80205AE8
  W32(c->r[28]+0x000001ACu,c->r[0]); // 80205AEC
  c->r[0]=R32(c->r[21]+0x000001B0u); // 80205AF0
  W32(c->r[28]+0x000001B0u,c->r[0]); // 80205AF4
  c->lr=0x80205AFCu; f_80206FA4(c); // 80205AF8
  c->r[3]=R32(c->r[21]+0x000001C0u); // 80205AFC
  c->r[0]=0u+0x00000003u; // 80205B00
  c->r[5]=c->r[28]+0x000001DCu; // 80205B04
  c->r[4]=c->r[21]+0x000001DCu; // 80205B08
  W32(c->r[28]+0x000001C0u,c->r[3]); // 80205B0C
  c->r[3]=R32(c->r[21]+0x000001C4u); // 80205B10
  W32(c->r[28]+0x000001C4u,c->r[3]); // 80205B14
  c->r[3]=R32(c->r[21]+0x000001C8u); // 80205B18
  W32(c->r[28]+0x000001C8u,c->r[3]); // 80205B1C
  c->r[3]=R32(c->r[21]+0x000001CCu); // 80205B20
  W32(c->r[28]+0x000001CCu,c->r[3]); // 80205B24
  c->r[3]=R32(c->r[21]+0x000001D0u); // 80205B28
  W32(c->r[28]+0x000001D0u,c->r[3]); // 80205B2C
  c->r[3]=R32(c->r[21]+0x000001D4u); // 80205B30
  W32(c->r[28]+0x000001D4u,c->r[3]); // 80205B34
  c->r[3]=R32(c->r[21]+0x000001D8u); // 80205B38
  W32(c->r[28]+0x000001D8u,c->r[3]); // 80205B3C
  c->r[3]=R32(c->r[21]+0x000001DCu); // 80205B40
  W32(c->r[28]+0x000001DCu,c->r[3]); // 80205B44
  c->ctr=c->r[0]; // 80205B48
L_80205B4C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80205B4C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80205B50
  W32(c->r[5]+0x00000004u,c->r[3]); // 80205B54
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80205B58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80205B4C; } // 80205B5C
  c->r[0]=R8(c->r[21]+0x000001F8u); // 80205B60
  c->r[3]=c->r[28]+0x000001FCu; // 80205B64
  c->r[4]=c->r[21]+0x000001FCu; // 80205B68
  W8(c->r[28]+0x000001F8u,c->r[0]); // 80205B6C
  c->r[0]=R8(c->r[21]+0x000001F9u); // 80205B70
  W8(c->r[28]+0x000001F9u,c->r[0]); // 80205B74
  c->lr=0x80205B7Cu; f_80206FA4(c); // 80205B78
  c->r[3]=c->r[28]+0x00000208u; // 80205B7C
  c->r[4]=c->r[21]+0x00000208u; // 80205B80
  c->lr=0x80205B88u; f_80206FA4(c); // 80205B84
  c->r[3]=c->r[28]+0x00000214u; // 80205B88
  c->r[4]=c->r[21]+0x00000214u; // 80205B8C
  c->lr=0x80205B94u; f_80206FA4(c); // 80205B90
  c->r[4]=R32(c->r[21]+0x00000220u); // 80205B94
  c->r[0]=c->r[31]+0x00000058u; // 80205B98
  c->r[23]=0u+0x00000000u; // 80205B9C
  c->r[3]=c->r[28]+0x00000244u; // 80205BA0
  W32(c->r[28]+0x00000220u,c->r[4]); // 80205BA4
  c->r[4]=c->r[21]+0x00000214u; // 80205BA8
  c->r[5]=R32(c->r[21]+0x00000224u); // 80205BAC
  W32(c->r[28]+0x00000224u,c->r[5]); // 80205BB0
  c->r[5]=R32(c->r[21]+0x00000228u); // 80205BB4
  W32(c->r[28]+0x00000228u,c->r[5]); // 80205BB8
  c->r[5]=R32(c->r[21]+0x0000022Cu); // 80205BBC
  W32(c->r[28]+0x0000022Cu,c->r[5]); // 80205BC0
  c->r[5]=R8(c->r[21]+0x00000230u); // 80205BC4
  W8(c->r[28]+0x00000230u,c->r[5]); // 80205BC8
  c->r[5]=R8(c->r[21]+0x00000231u); // 80205BCC
  W8(c->r[28]+0x00000231u,c->r[5]); // 80205BD0
  c->r[5]=R8(c->r[21]+0x00000232u); // 80205BD4
  W8(c->r[28]+0x00000232u,c->r[5]); // 80205BD8
  c->r[5]=R8(c->r[21]+0x00000233u); // 80205BDC
  W8(c->r[28]+0x00000233u,c->r[5]); // 80205BE0
  c->r[5]=R8(c->r[21]+0x00000234u); // 80205BE4
  W8(c->r[28]+0x00000234u,c->r[5]); // 80205BE8
  W32(c->r[28]+0x00000238u,c->r[0]); // 80205BEC
  W32(c->r[28]+0x0000023Cu,c->r[23]); // 80205BF0
  W32(c->r[28]+0x00000240u,c->r[23]); // 80205BF4
  c->lr=0x80205BFCu; f_80206FA4(c); // 80205BF8
  c->r[24]=c->r[28]+0x00000250u; // 80205BFC
  c->r[3]=c->r[24]|c->r[24]; // 80205C00
  c->lr=0x80205C08u; f_802039C8(c); // 80205C04
  c->r[3]=c->r[24]|c->r[24]; // 80205C08
  c->lr=0x80205C10u; f_802039CC(c); // 80205C0C
  c->r[3]=c->r[27]|c->r[27]; // 80205C10
  c->lr=0x80205C18u; f_80109598(c); // 80205C14
  c->r[25]=c->r[3]|c->r[3]; // 80205C18
  c->r[3]=c->r[24]|c->r[24]; // 80205C1C
  c->r[4]=c->r[25]|c->r[25]; // 80205C20
  c->lr=0x80205C28u; f_80207040(c); // 80205C24
  c->r[0]=R8(c->r[31]+0x0000000Au); // 80205C28
  c->r[3]=c->r[24]|c->r[24]; // 80205C2C
  c->r[6]=c->r[27]|c->r[27]; // 80205C30
  c->r[7]=c->r[27]+c->r[25]; // 80205C34
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 80205C38
  c->r[8]=c->r[31]+0x0000000Bu; // 80205C3C
  c->r[4]=0u+0x00000000u; // 80205C40
  c->r[5]=0u+0x00000000u; // 80205C44
  c->lr=0x80205C4Cu; f_80203148(c); // 80205C48
  c->r[3]=c->r[28]+0x0000025Cu; // 80205C4C
  c->lr=0x80205C54u; f_80203990(c); // 80205C50
  W32(c->r[28]+0x00000268u,c->r[23]); // 80205C54
  c->r[3]=c->r[28]+0x0000026Cu; // 80205C58
  c->lr=0x80205C60u; f_80203990(c); // 80205C5C
  c->r[3]=c->r[28]+0x00000278u; // 80205C60
  c->lr=0x80205C68u; f_80203990(c); // 80205C64
  c->r[3]=c->r[28]+0x00000284u; // 80205C68
  c->lr=0x80205C70u; f_80203990(c); // 80205C6C
  W32(c->r[28]+0x00000290u,c->r[23]); // 80205C70
  c->r[3]=c->r[31]+0x00000010u; // 80205C74
  W32(c->r[28]+0x00000298u,c->r[23]); // 80205C78
  W32(c->r[28]+0x0000029Cu,c->r[23]); // 80205C7C
  W8(c->r[28]+0x000002A0u,c->r[23]); // 80205C80
  W8(c->r[28]+0x000002A1u,c->r[23]); // 80205C84
  c->lr=0x80205C8Cu; f_80203990(c); // 80205C88
  c->r[0]=R8(c->r[27]+0x00000000u); // 80205C8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80205C90
  if (crb(c,0)) { goto L_80205CA0; } // 80205C94
  cmps(c,0,(int32_t)c->r[0],256); // 80205C98
  if (crb(c,0)) { goto L_80205CA4; } // 80205C9C
L_80205CA0:;
  c->r[23]=0u+0x00000001u; // 80205CA0
L_80205CA4:;
  cmps(c,0,(int32_t)c->r[23],0); // 80205CA4
  if (crb(c,2)) { goto L_80205CB4; } // 80205CA8
  c->r[0]=0u+0x00000000u; // 80205CAC
  goto L_80205CD0; // 80205CB0
L_80205CB4:;
  c->r[3]=0u+0x80290000u; // 80205CB4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80205CB8
  c->r[3]=c->r[3]+0x000066D8u; // 80205CBC
  c->r[3]=R32(c->r[3]+0x00000038u); // 80205CC0
  c->r[3]=R32(c->r[3]+0x00000008u); // 80205CC4
  c->r[0]=R16(c->r[3]+c->r[0]); // 80205CC8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80205CCC
L_80205CD0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80205CD0
  if (crb(c,2)) { goto L_80205CE8; } // 80205CD4
  c->r[3]=c->r[31]+0x00000010u; // 80205CD8
  c->r[4]=c->r[21]+0x00000034u; // 80205CDC
  c->lr=0x80205CE4u; f_802042D0(c); // 80205CE0
  goto L_80205CF4; // 80205CE4
L_80205CE8:;
  c->r[3]=c->r[31]+0x00000010u; // 80205CE8
  c->r[4]=c->r[21]+0x00000040u; // 80205CEC
  c->lr=0x80205CF4u; f_802042D0(c); // 80205CF0
L_80205CF4:;
  c->r[5]=0u+0x802A0000u; // 80205CF4
  c->r[3]=c->r[31]+0x0000001Cu; // 80205CF8
  c->r[4]=c->r[31]+0x00000010u; // 80205CFC
  c->r[5]=c->r[5]+0x00004125u; // 80205D00
  c->lr=0x80205D08u; f_80205F3C(c); // 80205D04
  c->r[3]=c->r[31]+0x00000028u; // 80205D08
  c->r[4]=c->r[31]+0x0000001Cu; // 80205D0C
  c->r[5]=c->r[21]+0x00000214u; // 80205D10
  c->lr=0x80205D18u; f_80205E7C(c); // 80205D14
  c->r[5]=0u+0x802A0000u; // 80205D18
  c->r[3]=c->r[31]+0x00000034u; // 80205D1C
  c->r[4]=c->r[31]+0x00000028u; // 80205D20
  c->r[5]=c->r[5]+0x00004123u; // 80205D24
  c->lr=0x80205D2Cu; f_80205F3C(c); // 80205D28
  c->r[5]=c->r[27]|c->r[27]; // 80205D2C
  c->r[3]=c->r[31]+0x00000040u; // 80205D30
  c->r[4]=c->r[31]+0x00000034u; // 80205D34
  c->lr=0x80205D3Cu; f_80205F3C(c); // 80205D38
  c->r[3]=c->r[28]+0x0000025Cu; // 80205D3C
  c->r[4]=c->r[31]+0x00000040u; // 80205D40
  c->lr=0x80205D48u; f_802042D0(c); // 80205D44
  c->r[23]=0u+0xFFFFFFFFu; // 80205D48
  c->r[3]=c->r[31]+0x00000040u; // 80205D4C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[23]; // 80205D50
  c->lr=0x80205D58u; f_802030B0(c); // 80205D54
  c->r[3]=c->r[31]+0x00000034u; // 80205D58
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[23]; // 80205D5C
  c->lr=0x80205D64u; f_802030B0(c); // 80205D60
  c->r[3]=c->r[31]+0x00000028u; // 80205D64
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[23]; // 80205D68
  c->lr=0x80205D70u; f_802030B0(c); // 80205D6C
  c->r[3]=c->r[31]+0x0000001Cu; // 80205D70
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[23]; // 80205D74
  c->lr=0x80205D7Cu; f_802030B0(c); // 80205D78
  c->r[3]=R32(c->r[28]+0x00000238u); // 80205D7C
  c->lr=0x80205D84u; f_802020A8(c); // 80205D80
  W32(c->r[28]+0x00000294u,c->r[3]); // 80205D84
  c->r[3]=c->r[31]+0x00000010u; // 80205D88
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[23]; // 80205D8C
  c->lr=0x80205D94u; f_802030B0(c); // 80205D90
  c->r[3]=c->r[31]+0x00000080u; // 80205D94
  c->lr=0x80205D9Cu; f_80218A2C(c); // 80205D98
  cmps(c,0,(int32_t)c->r[3],0); // 80205D9C
  if (crb(c,2)) { goto L_80205DC0; } // 80205DA0
  c->r[5]=R32(c->r[31]+0x000002BCu); // 80205DA4
  c->r[4]=c->r[29]+0x000004CDu; // 80205DA8
  c->r[3]=0u+0x00000002u; // 80205DAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205DB0
  c->lr=0x80205DB8u; f_8020B328(c); // 80205DB4
  c->r[22]=R32(c->r[31]+0x000002BCu); // 80205DB8
  goto L_80205E2C; // 80205DBC
L_80205DC0:;
  c->r[3]=c->r[31]+0x00000058u; // 80205DC0
  c->lr=0x80205DC8u; f_802020A8(c); // 80205DC4
  cmps(c,0,(int32_t)c->r[3],0); // 80205DC8
  if (crb(c,2)) { goto L_80205E24; } // 80205DCC
  c->r[3]=c->r[31]+0x00000058u; // 80205DD0
  c->lr=0x80205DD8u; f_802020A8(c); // 80205DD4
  c->r[4]=0u+0x00000020u; // 80205DD8
  c->lr=0x80205DE0u; f_8020EA58(c); // 80205DDC
  cmps(c,0,(int32_t)c->r[3],0); // 80205DE0
  W32(c->r[21]+0x00000228u,c->r[3]); // 80205DE4
  if (!crb(c,2)) { goto L_80205DF4; } // 80205DE8
  c->r[22]=0u+0xFFFFF05Bu; // 80205DEC
  goto L_80205E2C; // 80205DF0
L_80205DF4:;
  c->r[3]=c->r[31]+0x00000058u; // 80205DF4
  c->lr=0x80205DFCu; f_802020A8(c); // 80205DF8
  c->r[23]=c->r[3]|c->r[3]; // 80205DFC
  c->r[3]=c->r[31]+0x00000058u; // 80205E00
  c->lr=0x80205E08u; f_80203778(c); // 80205E04
  c->r[4]=c->r[3]|c->r[3]; // 80205E08
  c->r[3]=R32(c->r[21]+0x00000228u); // 80205E0C
  c->r[5]=c->r[23]|c->r[23]; // 80205E10
  c->lr=0x80205E18u; f_80004338(c); // 80205E14
  c->r[3]=c->r[31]+0x00000058u; // 80205E18
  c->lr=0x80205E20u; f_802020A8(c); // 80205E1C
  W32(c->r[21]+0x0000022Cu,c->r[3]); // 80205E20
L_80205E24:;
  c->r[0]=0u+0x00000001u; // 80205E24
  W8(c->r[21]+0x00000230u,c->r[0]); // 80205E28
L_80205E2C:;
  cmps(c,0,(int32_t)c->r[22],0); // 80205E2C
  if (crb(c,2)) { goto L_80205E3C; } // 80205E30
  c->r[3]=c->r[31]+0x00000058u; // 80205E34
  c->lr=0x80205E3Cu; f_80204658(c); // 80205E38
L_80205E3C:;
  c->r[21]=0u+0xFFFFFFFFu; // 80205E3C
  c->r[3]=c->r[31]+0x00000080u; // 80205E40
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[21]; // 80205E44
  c->lr=0x80205E4Cu; f_8020618C(c); // 80205E48
  c->r[3]=c->r[31]+0x00000058u; // 80205E4C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[21]; // 80205E50
  c->lr=0x80205E58u; f_802030B0(c); // 80205E54
  c->r[3]=c->r[22]|c->r[22]; // 80205E58
L_80205E5C:;
  c->r[10]=c->r[31]|c->r[31]; // 80205E5C
  c->r[11]=c->r[10]+0x00000360u; // 80205E60
  c->lr=0x80205E68u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80205E64
  c->r[10]=R32(c->r[1]+0x00000000u); // 80205E68
  c->r[0]=R32(c->r[10]+0x00000004u); // 80205E6C
  c->r[1]=c->r[10]|c->r[10]; // 80205E70
  c->lr=c->r[0]; // 80205E74
  return; // 80205E78
}

// fn_80205E7C
void f_80205E7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205E7C
  c->r[0]=c->lr; // 80205E80
  W32(c->r[1]+0x00000034u,c->r[0]); // 80205E84
  c->r[11]=c->r[1]+0x00000030u; // 80205E88
  c->lr=0x80205E90u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80205E8C
  c->r[28]=c->r[3]|c->r[3]; // 80205E90
  c->r[30]=c->r[4]|c->r[4]; // 80205E94
  c->r[29]=c->r[5]|c->r[5]; // 80205E98
  c->lr=0x80205EA0u; f_80203990(c); // 80205E9C
  c->r[3]=c->r[30]|c->r[30]; // 80205EA0
  c->r[4]=c->r[1]+0x00000010u; // 80205EA4
  c->r[5]=c->r[1]+0x00000018u; // 80205EA8
  c->lr=0x80205EB0u; f_80204620(c); // 80205EAC
  c->r[3]=c->r[29]|c->r[29]; // 80205EB0
  c->r[4]=c->r[1]+0x0000000Cu; // 80205EB4
  c->r[5]=c->r[1]+0x00000014u; // 80205EB8
  c->lr=0x80205EC0u; f_80204620(c); // 80205EBC
  c->r[4]=R32(c->r[1]+0x00000018u); // 80205EC0
  c->r[3]=c->r[28]|c->r[28]; // 80205EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80205EC8
  c->r[4]=c->r[4]+c->r[0]; // 80205ECC
  c->lr=0x80205ED4u; f_80207040(c); // 80205ED0
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 80205ED4
  c->r[3]=c->r[28]|c->r[28]; // 80205ED8
  c->r[6]=R32(c->r[1]+0x00000010u); // 80205EDC
  c->r[8]=c->r[1]+0x0000000Au; // 80205EE0
  c->r[29]=R32(c->r[1]+0x00000018u); // 80205EE4
  c->r[4]=0u+0x00000000u; // 80205EE8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80205EEC
  c->r[5]=0u+0x00000000u; // 80205EF0
  c->r[30]=R32(c->r[1]+0x00000014u); // 80205EF4
  c->r[7]=c->r[6]+c->r[29]; // 80205EF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80205EFC
  c->lr=0x80205F04u; f_80203148(c); // 80205F00
  c->r[0]=R8(c->r[1]+0x00000009u); // 80205F04
  c->r[4]=c->r[29]|c->r[29]; // 80205F08
  c->r[6]=c->r[31]|c->r[31]; // 80205F0C
  c->r[7]=c->r[31]+c->r[30]; // 80205F10
  W8(c->r[1]+0x00000008u,c->r[0]); // 80205F14
  c->r[8]=c->r[1]+0x00000008u; // 80205F18
  c->r[5]=0u+0x00000000u; // 80205F1C
  c->lr=0x80205F24u; f_80203148(c); // 80205F20
  c->r[11]=c->r[1]+0x00000030u; // 80205F24
  c->lr=0x80205F2Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80205F28
  c->r[0]=R32(c->r[1]+0x00000034u); // 80205F2C
  c->lr=c->r[0]; // 80205F30
  c->r[1]=c->r[1]+0x00000030u; // 80205F34
  return; // 80205F38
}

// fn_80205F3C
void f_80205F3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205F3C
  c->r[0]=c->lr; // 80205F40
  W32(c->r[1]+0x00000034u,c->r[0]); // 80205F44
  c->r[11]=c->r[1]+0x00000030u; // 80205F48
  c->lr=0x80205F50u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80205F4C
  c->r[28]=c->r[3]|c->r[3]; // 80205F50
  c->r[30]=c->r[4]|c->r[4]; // 80205F54
  c->r[29]=c->r[5]|c->r[5]; // 80205F58
  c->lr=0x80205F60u; f_80203990(c); // 80205F5C
  c->r[3]=c->r[29]|c->r[29]; // 80205F60
  c->lr=0x80205F68u; f_80109598(c); // 80205F64
  c->r[31]=c->r[3]|c->r[3]; // 80205F68
  c->r[3]=c->r[30]|c->r[30]; // 80205F6C
  c->r[4]=c->r[1]+0x0000000Cu; // 80205F70
  c->r[5]=c->r[1]+0x00000010u; // 80205F74
  c->lr=0x80205F7Cu; f_80204620(c); // 80205F78
  c->r[0]=R32(c->r[1]+0x00000010u); // 80205F7C
  c->r[3]=c->r[28]|c->r[28]; // 80205F80
  c->r[4]=c->r[0]+c->r[31]; // 80205F84
  c->lr=0x80205F8Cu; f_80207040(c); // 80205F88
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 80205F8C
  c->r[3]=c->r[28]|c->r[28]; // 80205F90
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80205F94
  c->r[8]=c->r[1]+0x0000000Au; // 80205F98
  c->r[30]=R32(c->r[1]+0x00000010u); // 80205F9C
  c->r[4]=0u+0x00000000u; // 80205FA0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80205FA4
  c->r[5]=0u+0x00000000u; // 80205FA8
  c->r[7]=c->r[6]+c->r[30]; // 80205FAC
  c->lr=0x80205FB4u; f_80203148(c); // 80205FB0
  c->r[0]=R8(c->r[1]+0x00000009u); // 80205FB4
  c->r[4]=c->r[30]|c->r[30]; // 80205FB8
  c->r[6]=c->r[29]|c->r[29]; // 80205FBC
  c->r[7]=c->r[29]+c->r[31]; // 80205FC0
  W8(c->r[1]+0x00000008u,c->r[0]); // 80205FC4
  c->r[8]=c->r[1]+0x00000008u; // 80205FC8
  c->r[5]=0u+0x00000000u; // 80205FCC
  c->lr=0x80205FD4u; f_80203148(c); // 80205FD0
  c->r[11]=c->r[1]+0x00000030u; // 80205FD4
  c->lr=0x80205FDCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80205FD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80205FDC
  c->lr=c->r[0]; // 80205FE0
  c->r[1]=c->r[1]+0x00000030u; // 80205FE4
  return; // 80205FE8
}

// dtor_80205FEC
void f_80205FEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205FEC
  c->r[0]=c->lr; // 80205FF0
  cmps(c,0,(int32_t)c->r[3],0); // 80205FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80205FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80205FFC
  c->r[31]=c->r[4]|c->r[4]; // 80206000
  W32(c->r[1]+0x00000008u,c->r[30]); // 80206004
  c->r[30]=c->r[3]|c->r[3]; // 80206008
  if (crb(c,2)) { goto L_80206170; } // 8020600C
  c->r[4]=0u+0xFFFFFFFFu; // 80206010
  c->r[3]=c->r[3]+0x00000214u; // 80206014
  c->lr=0x8020601Cu; f_802030B0(c); // 80206018
  c->r[3]=c->r[30]+0x00000208u; // 8020601C
  c->r[4]=0u+0xFFFFFFFFu; // 80206020
  c->lr=0x80206028u; f_802030B0(c); // 80206024
  c->r[3]=c->r[30]+0x000001FCu; // 80206028
  c->r[4]=0u+0xFFFFFFFFu; // 8020602C
  c->lr=0x80206034u; f_802030B0(c); // 80206030
  c->r[3]=c->r[30]+0x000001B4u; // 80206034
  c->r[4]=0u+0xFFFFFFFFu; // 80206038
  c->lr=0x80206040u; f_802030B0(c); // 8020603C
  c->r[3]=c->r[30]+0x000001A0u; // 80206040
  c->r[4]=0u+0xFFFFFFFFu; // 80206044
  c->lr=0x8020604Cu; f_802030B0(c); // 80206048
  c->r[3]=c->r[30]+0x00000194u; // 8020604C
  c->r[4]=0u+0xFFFFFFFFu; // 80206050
  c->lr=0x80206058u; f_802030B0(c); // 80206054
  c->r[3]=c->r[30]+0x0000017Cu; // 80206058
  c->r[4]=0u+0xFFFFFFFFu; // 8020605C
  c->lr=0x80206064u; f_802030B0(c); // 80206060
  c->r[3]=c->r[30]+0x00000170u; // 80206064
  c->r[4]=0u+0xFFFFFFFFu; // 80206068
  c->lr=0x80206070u; f_802030B0(c); // 8020606C
  c->r[3]=c->r[30]+0x0000013Cu; // 80206070
  c->r[4]=0u+0xFFFFFFFFu; // 80206074
  c->lr=0x8020607Cu; f_802030B0(c); // 80206078
  c->r[3]=c->r[30]+0x00000130u; // 8020607C
  c->r[4]=0u+0xFFFFFFFFu; // 80206080
  c->lr=0x80206088u; f_802030B0(c); // 80206084
  c->r[3]=c->r[30]+0x00000124u; // 80206088
  c->r[4]=0u+0xFFFFFFFFu; // 8020608C
  c->lr=0x80206094u; f_802030B0(c); // 80206090
  c->r[3]=c->r[30]+0x00000118u; // 80206094
  c->r[4]=0u+0xFFFFFFFFu; // 80206098
  c->lr=0x802060A0u; f_802030B0(c); // 8020609C
  c->r[3]=c->r[30]+0x0000010Cu; // 802060A0
  c->r[4]=0u+0xFFFFFFFFu; // 802060A4
  c->lr=0x802060ACu; f_802030B0(c); // 802060A8
  c->r[3]=c->r[30]+0x00000100u; // 802060AC
  c->r[4]=0u+0xFFFFFFFFu; // 802060B0
  c->lr=0x802060B8u; f_802030B0(c); // 802060B4
  c->r[3]=c->r[30]+0x000000F4u; // 802060B8
  c->r[4]=0u+0xFFFFFFFFu; // 802060BC
  c->lr=0x802060C4u; f_802030B0(c); // 802060C0
  c->r[3]=c->r[30]+0x000000E8u; // 802060C4
  c->r[4]=0u+0xFFFFFFFFu; // 802060C8
  c->lr=0x802060D0u; f_802030B0(c); // 802060CC
  c->r[3]=c->r[30]+0x000000DCu; // 802060D0
  c->r[4]=0u+0xFFFFFFFFu; // 802060D4
  c->lr=0x802060DCu; f_802030B0(c); // 802060D8
  c->r[3]=c->r[30]+0x000000D0u; // 802060DC
  c->r[4]=0u+0xFFFFFFFFu; // 802060E0
  c->lr=0x802060E8u; f_802030B0(c); // 802060E4
  c->r[3]=c->r[30]+0x000000C4u; // 802060E8
  c->r[4]=0u+0xFFFFFFFFu; // 802060EC
  c->lr=0x802060F4u; f_802030B0(c); // 802060F0
  c->r[3]=c->r[30]+0x000000B8u; // 802060F4
  c->r[4]=0u+0xFFFFFFFFu; // 802060F8
  c->lr=0x80206100u; f_802030B0(c); // 802060FC
  c->r[3]=c->r[30]+0x00000080u; // 80206100
  c->r[4]=0u+0xFFFFFFFFu; // 80206104
  c->lr=0x8020610Cu; f_80203A88(c); // 80206108
  c->r[3]=c->r[30]+0x00000074u; // 8020610C
  c->r[4]=0u+0xFFFFFFFFu; // 80206110
  c->lr=0x80206118u; f_802030B0(c); // 80206114
  c->r[3]=c->r[30]+0x00000068u; // 80206118
  c->r[4]=0u+0xFFFFFFFFu; // 8020611C
  c->lr=0x80206124u; f_802030B0(c); // 80206120
  c->r[3]=c->r[30]+0x00000040u; // 80206124
  c->r[4]=0u+0xFFFFFFFFu; // 80206128
  c->lr=0x80206130u; f_802030B0(c); // 8020612C
  c->r[3]=c->r[30]+0x00000034u; // 80206130
  c->r[4]=0u+0xFFFFFFFFu; // 80206134
  c->lr=0x8020613Cu; f_802030B0(c); // 80206138
  c->r[3]=c->r[30]+0x00000028u; // 8020613C
  c->r[4]=0u+0xFFFFFFFFu; // 80206140
  c->lr=0x80206148u; f_802030B0(c); // 80206144
  c->r[3]=c->r[30]+0x0000001Cu; // 80206148
  c->r[4]=0u+0xFFFFFFFFu; // 8020614C
  c->lr=0x80206154u; f_802030B0(c); // 80206150
  c->r[3]=c->r[30]+0x00000010u; // 80206154
  c->r[4]=0u+0xFFFFFFFFu; // 80206158
  c->lr=0x80206160u; f_802030B0(c); // 8020615C
  cmps(c,0,(int32_t)c->r[31],0); // 80206160
  if (!crb(c,1)) { goto L_80206170; } // 80206164
  c->r[3]=c->r[30]|c->r[30]; // 80206168
  c->lr=0x80206170u; f_8020ECE0(c); // 8020616C
L_80206170:;
  c->r[3]=c->r[30]|c->r[30]; // 80206170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206174
  c->r[30]=R32(c->r[1]+0x00000008u); // 80206178
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020617C
  c->lr=c->r[0]; // 80206180
  c->r[1]=c->r[1]+0x00000010u; // 80206184
  return; // 80206188
}

// dtor_8020618C
void f_8020618C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020618C
  c->r[0]=c->lr; // 80206190
  cmps(c,0,(int32_t)c->r[3],0); // 80206194
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020619C
  c->r[31]=c->r[4]|c->r[4]; // 802061A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802061A4
  c->r[30]=c->r[3]|c->r[3]; // 802061A8
  if (crb(c,2)) { goto L_80206214; } // 802061AC
  c->r[4]=0u+0xFFFFFFFFu; // 802061B0
  c->r[3]=c->r[3]+0x00000284u; // 802061B4
  c->lr=0x802061BCu; f_802030B0(c); // 802061B8
  c->r[3]=c->r[30]+0x00000278u; // 802061BC
  c->r[4]=0u+0xFFFFFFFFu; // 802061C0
  c->lr=0x802061C8u; f_802030B0(c); // 802061C4
  c->r[3]=c->r[30]+0x0000026Cu; // 802061C8
  c->r[4]=0u+0xFFFFFFFFu; // 802061CC
  c->lr=0x802061D4u; f_802030B0(c); // 802061D0
  c->r[3]=c->r[30]+0x0000025Cu; // 802061D4
  c->r[4]=0u+0xFFFFFFFFu; // 802061D8
  c->lr=0x802061E0u; f_802030B0(c); // 802061DC
  c->r[3]=c->r[30]+0x00000250u; // 802061E0
  c->r[4]=0u+0xFFFFFFFFu; // 802061E4
  c->lr=0x802061ECu; f_802030B0(c); // 802061E8
  c->r[3]=c->r[30]+0x00000244u; // 802061EC
  c->r[4]=0u+0xFFFFFFFFu; // 802061F0
  c->lr=0x802061F8u; f_802030B0(c); // 802061F4
  c->r[3]=c->r[30]|c->r[30]; // 802061F8
  c->r[4]=0u+0xFFFFFFFFu; // 802061FC
  c->lr=0x80206204u; f_80205FEC(c); // 80206200
  cmps(c,0,(int32_t)c->r[31],0); // 80206204
  if (!crb(c,1)) { goto L_80206214; } // 80206208
  c->r[3]=c->r[30]|c->r[30]; // 8020620C
  c->lr=0x80206214u; f_8009230C(c); // 80206210
L_80206214:;
  c->r[3]=c->r[30]|c->r[30]; // 80206214
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206218
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020621C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206220
  c->lr=c->r[0]; // 80206224
  c->r[1]=c->r[1]+0x00000010u; // 80206228
  return; // 8020622C
}

// fn_80206230
void f_80206230(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206230
  c->r[0]=c->lr; // 80206234
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206238
  c->r[11]=c->r[1]+0x00000020u; // 8020623C
  c->lr=0x80206244u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206240
  c->r[0]=0u+0x00000000u; // 80206244
  c->r[27]=c->r[3]|c->r[3]; // 80206248
  W8(c->r[3]+0x000001F9u,c->r[0]); // 8020624C
  c->r[28]=c->r[4]|c->r[4]; // 80206250
  c->r[29]=c->r[5]|c->r[5]; // 80206254
  c->lr=0x8020625Cu; f_80206318(c); // 80206258
  cmps(c,0,(int32_t)c->r[3],0); // 8020625C
  c->r[30]=c->r[3]|c->r[3]; // 80206260
  if (!crb(c,2)) { goto L_802062D0; } // 80206264
  c->r[0]=R8(c->r[27]+0x000001F8u); // 80206268
  cmps(c,0,(int32_t)c->r[0],0); // 8020626C
  if (!crb(c,2)) { goto L_8020627C; } // 80206270
  c->r[30]=0u+0xFFFFF015u; // 80206274
  goto L_802062D0; // 80206278
L_8020627C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020627C
  if (crb(c,2)) { goto L_8020629C; } // 80206280
  c->r[31]=R32(c->r[27]+0x000001F4u); // 80206284
  c->r[3]=c->r[28]|c->r[28]; // 80206288
  c->r[4]=c->r[31]+0x00000001u; // 8020628C
  c->lr=0x80206294u; f_802062EC(c); // 80206290
  cmpu(c,0,c->r[31],c->r[3]); // 80206294
  if (crb(c,2)) { goto L_802062A8; } // 80206298
L_8020629C:;
  c->r[0]=0u+0x00000000u; // 8020629C
  W32(c->r[29]+0x00000000u,c->r[0]); // 802062A0
  goto L_802062D0; // 802062A4
L_802062A8:;
  c->r[3]=c->r[28]|c->r[28]; // 802062A8
  c->r[5]=c->r[31]|c->r[31]; // 802062AC
  c->r[4]=c->r[27]+0x000001E3u; // 802062B0
  c->lr=0x802062B8u; f_801143A4(c); // 802062B4
  c->r[0]=cntlz(c->r[3]); // 802062B8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802062BC
  W32(c->r[29]+0x00000000u,c->r[0]); // 802062C0
  if (crb(c,2)) { goto L_802062D0; } // 802062C4
  c->r[0]=0u+0x00000001u; // 802062C8
  W8(c->r[27]+0x000001F9u,c->r[0]); // 802062CC
L_802062D0:;
  c->r[11]=c->r[1]+0x00000020u; // 802062D0
  c->r[3]=c->r[30]|c->r[30]; // 802062D4
  c->lr=0x802062DCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802062D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802062DC
  c->lr=c->r[0]; // 802062E0
  c->r[1]=c->r[1]+0x00000020u; // 802062E4
  return; // 802062E8
}

// fn_802062EC
void f_802062EC(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 802062EC
  c->r[4]=c->r[3]+c->r[4]; // 802062F0
  goto L_802062FC; // 802062F4
L_802062F8:;
  c->r[5]=c->r[5]+0x00000001u; // 802062F8
L_802062FC:;
  cmpu(c,0,c->r[5],c->r[4]); // 802062FC
  if (crb(c,2)) { goto L_80206310; } // 80206300
  c->r[0]=R8(c->r[5]+0x00000000u); // 80206304
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80206308
  if (!crb(c,2)) { IRQCHK(c); goto L_802062F8; } // 8020630C
L_80206310:;
  c->r[3]=c->r[5]-c->r[3]; // 80206310
  return; // 80206314
}

// fn_80206318
void f_80206318(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206318
  c->r[0]=c->lr; // 8020631C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206320
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206324
  c->r[31]=c->r[3]|c->r[3]; // 80206328
  c->r[3]=c->r[3]+0x000001E0u; // 8020632C
  c->r[4]=c->r[31]+0x000001F8u; // 80206330
  c->lr=0x80206338u; f_8021E9F0(c); // 80206334
  cmps(c,0,(int32_t)c->r[3],0); // 80206338
  if (!crb(c,2)) { goto L_8020636C; } // 8020633C
  c->r[4]=0u+0x802A0000u; // 80206340
  c->r[5]=R8(c->r[31]+0x000001F8u); // 80206344
  c->r[6]=R8(c->r[31]+0x000001E0u); // 80206348
  c->r[4]=c->r[4]+0x000038EFu; // 8020634C
  c->r[7]=R8(c->r[31]+0x000001E2u); // 80206350
  c->r[3]=0u+0x00000004u; // 80206354
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206358
  c->lr=0x80206360u; f_8020B328(c); // 8020635C
  c->r[3]=c->r[31]+0x000001DCu; // 80206360
  c->lr=0x80206368u; f_8021EAC8(c); // 80206364
  goto L_8020638C; // 80206368
L_8020636C:;
  c->r[3]=c->r[31]+0x000001E0u; // 8020636C
  c->r[4]=0u+0x00000000u; // 80206370
  c->r[5]=0u+0x00000018u; // 80206374
  c->lr=0x8020637Cu; f_8000443C(c); // 80206378
  c->r[0]=0u+0x00000000u; // 8020637C
  c->r[3]=0u+0xFFFFF05Au; // 80206380
  W8(c->r[31]+0x000001F8u,c->r[0]); // 80206384
  W32(c->r[31]+0x000001DCu,c->r[0]); // 80206388
L_8020638C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020638C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206390
  c->lr=c->r[0]; // 80206394
  c->r[1]=c->r[1]+0x00000010u; // 80206398
  return; // 8020639C
}

// fn_802063A0
void f_802063A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802063A0
  c->r[0]=c->lr; // 802063A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802063A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802063AC
  c->r[31]=0u+0x00000000u; // 802063B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802063B4
  c->r[30]=c->r[3]|c->r[3]; // 802063B8
  c->r[0]=R8(c->r[3]+0x00000233u); // 802063BC
  cmps(c,0,(int32_t)c->r[0],0); // 802063C0
  if (!crb(c,2)) { goto L_802063F8; } // 802063C4
  c->lr=0x802063CCu; f_8021E724(c); // 802063C8
  cmps(c,0,(int32_t)c->r[3],0); // 802063CC
  if (crb(c,2)) { goto L_802063E4; } // 802063D0
  c->r[4]=c->r[3]|c->r[3]; // 802063D4
  c->r[3]=c->r[30]+0x00000118u; // 802063D8
  c->lr=0x802063E0u; f_80201DF4(c); // 802063DC
  goto L_802063F8; // 802063E0
L_802063E4:;
  c->r[4]=0u+0x802A0000u; // 802063E4
  c->r[3]=c->r[30]+0x00000118u; // 802063E8
  c->r[4]=c->r[4]+0x00003925u; // 802063EC
  c->lr=0x802063F4u; f_80201DF4(c); // 802063F0
  c->r[31]=0u+0xFFFFF05Au; // 802063F4
L_802063F8:;
  c->r[3]=c->r[31]|c->r[31]; // 802063F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802063FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80206400
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206404
  c->lr=c->r[0]; // 80206408
  c->r[1]=c->r[1]+0x00000010u; // 8020640C
  return; // 80206410
}

// fn_80206414
void f_80206414(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206414
  c->r[0]=c->lr; // 80206418
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020641C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206420
  c->r[31]=0u+0x00000000u; // 80206424
  W32(c->r[1]+0x00000008u,c->r[30]); // 80206428
  c->r[30]=c->r[3]|c->r[3]; // 8020642C
  c->r[0]=R8(c->r[3]+0x00000234u); // 80206430
  cmps(c,0,(int32_t)c->r[0],0); // 80206434
  if (!crb(c,2)) { goto L_8020646C; } // 80206438
  c->lr=0x80206440u; f_8021E780(c); // 8020643C
  cmps(c,0,(int32_t)c->r[3],0); // 80206440
  if (crb(c,2)) { goto L_80206458; } // 80206444
  c->r[4]=c->r[3]|c->r[3]; // 80206448
  c->r[3]=c->r[30]+0x000001B4u; // 8020644C
  c->lr=0x80206454u; f_80201DF4(c); // 80206450
  goto L_8020646C; // 80206454
L_80206458:;
  c->r[4]=0u+0x802A0000u; // 80206458
  c->r[3]=c->r[30]+0x00000118u; // 8020645C
  c->r[4]=c->r[4]+0x00003925u; // 80206460
  c->lr=0x80206468u; f_80201DF4(c); // 80206464
  c->r[31]=0u+0xFFFFF05Au; // 80206468
L_8020646C:;
  c->r[3]=c->r[31]|c->r[31]; // 8020646C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206470
  c->r[30]=R32(c->r[1]+0x00000008u); // 80206474
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206478
  c->lr=c->r[0]; // 8020647C
  c->r[1]=c->r[1]+0x00000010u; // 80206480
  return; // 80206484
}

// fn_80206488
void f_80206488(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206488
  c->r[0]=c->lr; // 8020648C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206490
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206494
  c->r[31]=0u+0x00000000u; // 80206498
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020649C
  c->r[30]=c->r[3]|c->r[3]; // 802064A0
  c->lr=0x802064A8u; f_8021E694(c); // 802064A4
  cmps(c,0,(int32_t)c->r[3],0); // 802064A8
  if (crb(c,2)) { goto L_802064C0; } // 802064AC
  c->r[4]=c->r[3]|c->r[3]; // 802064B0
  c->r[3]=c->r[30]+0x0000013Cu; // 802064B4
  c->lr=0x802064BCu; f_80201DF4(c); // 802064B8
  goto L_802064D4; // 802064BC
L_802064C0:;
  c->r[4]=0u+0x802A0000u; // 802064C0
  c->r[3]=c->r[30]+0x0000013Cu; // 802064C4
  c->r[4]=c->r[4]+0x00003925u; // 802064C8
  c->lr=0x802064D0u; f_80201DF4(c); // 802064CC
  c->r[31]=0u+0xFFFFF05Au; // 802064D0
L_802064D4:;
  c->r[3]=c->r[31]|c->r[31]; // 802064D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802064D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802064DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802064E0
  c->lr=c->r[0]; // 802064E4
  c->r[1]=c->r[1]+0x00000010u; // 802064E8
  return; // 802064EC
}

// fn_802064F0
void f_802064F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802064F0
  c->r[0]=c->lr; // 802064F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802064F8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802064FC
  W32(c->r[1]+0x00000038u,c->r[30]); // 80206500
  c->r[30]=c->r[3]|c->r[3]; // 80206504
  c->r[3]=c->r[3]+0x00000208u; // 80206508
  c->lr=0x80206510u; f_80204658(c); // 8020650C
  c->r[3]=c->r[1]+0x00000014u; // 80206510
  c->lr=0x80206518u; f_8021E844(c); // 80206514
  cmps(c,0,(int32_t)c->r[3],0); // 80206518
  c->r[31]=c->r[3]|c->r[3]; // 8020651C
  if (crb(c,2)) { goto L_80206558; } // 80206520
  c->r[4]=0u+0x802A0000u; // 80206524
  c->r[3]=c->r[1]+0x00000008u; // 80206528
  c->r[4]=c->r[4]+0x00003926u; // 8020652C
  c->r[5]=c->r[30]+0x00000194u; // 80206530
  c->lr=0x80206538u; f_8020456C(c); // 80206534
  c->r[3]=c->r[30]+0x00000208u; // 80206538
  c->r[4]=c->r[1]+0x00000008u; // 8020653C
  c->lr=0x80206544u; f_802042D0(c); // 80206540
  c->r[3]=c->r[1]+0x00000008u; // 80206544
  c->r[4]=0u+0xFFFFFFFFu; // 80206548
  c->lr=0x80206550u; f_802030B0(c); // 8020654C
  c->r[31]=0u+0xFFFFF05Au; // 80206550
  goto L_80206564; // 80206554
L_80206558:;
  c->r[3]=c->r[30]+0x00000208u; // 80206558
  c->r[4]=c->r[1]+0x00000014u; // 8020655C
  c->lr=0x80206564u; f_80201DF4(c); // 80206560
L_80206564:;
  c->r[3]=c->r[31]|c->r[31]; // 80206564
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80206568
  c->r[30]=R32(c->r[1]+0x00000038u); // 8020656C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80206570
  c->lr=c->r[0]; // 80206574
  c->r[1]=c->r[1]+0x00000040u; // 80206578
  return; // 8020657C
}

// fn_80206580
void f_80206580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206580
  c->r[0]=c->lr; // 80206584
  W32(c->r[1]+0x00000034u,c->r[0]); // 80206588
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8020658C
  c->r[31]=c->r[3]|c->r[3]; // 80206590
  c->r[3]=c->r[1]+0x00000008u; // 80206594
  c->lr=0x8020659Cu; f_8021DFF8(c); // 80206598
  cmps(c,0,(int32_t)c->r[3],0); // 8020659C
  if (!crb(c,2)) { goto L_802065EC; } // 802065A0
  c->r[0]=R32(c->r[1]+0x00000008u); // 802065A4
  W32(c->r[31]+0x000001C0u,c->r[0]); // 802065A8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802065AC
  W32(c->r[31]+0x000001C8u,c->r[0]); // 802065B0
  c->r[0]=R32(c->r[1]+0x00000010u); // 802065B4
  W32(c->r[31]+0x000001D0u,c->r[0]); // 802065B8
  c->r[4]=R32(c->r[1]+0x00000014u); // 802065BC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802065C0
  c->r[0]=c->r[0]-c->r[4]; // 802065C4
  W32(c->r[31]+0x000001C4u,c->r[0]); // 802065C8
  c->r[4]=R32(c->r[1]+0x00000018u); // 802065CC
  c->r[0]=R32(c->r[1]+0x00000010u); // 802065D0
  c->r[0]=c->r[0]-c->r[4]; // 802065D4
  W32(c->r[31]+0x000001CCu,c->r[0]); // 802065D8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 802065DC
  W32(c->r[31]+0x000001D4u,c->r[0]); // 802065E0
  c->r[0]=R32(c->r[1]+0x00000020u); // 802065E4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 802065E8
L_802065EC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802065EC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802065F0
  c->lr=c->r[0]; // 802065F4
  c->r[1]=c->r[1]+0x00000030u; // 802065F8
  return; // 802065FC
}

// fn_80206600
void f_80206600(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x000001CCu); // 80206600
  c->r[7]=0u+0x00000000u; // 80206604
  c->r[0]=R32(c->r[3]+0x000001D0u); // 80206608
  c->r[4]=c->r[6]+c->r[4]; // 8020660C
  cmpu(c,0,c->r[4],c->r[0]); // 80206610
  if (!crb(c,1)) { goto L_80206620; } // 80206614
  c->r[7]=0u+0xFFFFF029u; // 80206618
  goto L_80206638; // 8020661C
L_80206620:;
  c->r[4]=R32(c->r[3]+0x000001C4u); // 80206620
  c->r[0]=R32(c->r[3]+0x000001C8u); // 80206624
  c->r[3]=c->r[4]+c->r[5]; // 80206628
  cmpu(c,0,c->r[3],c->r[0]); // 8020662C
  if (!crb(c,1)) { goto L_80206638; } // 80206630
  c->r[7]=0u+0xFFFFF028u; // 80206634
L_80206638:;
  c->r[3]=c->r[7]|c->r[7]; // 80206638
  return; // 8020663C
}

// fn_80206640
void f_80206640(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000001D8u); // 80206640
  c->r[6]=0u+0x00000000u; // 80206644
  cmpu(c,0,c->r[4],c->r[0]); // 80206648
  if (!crb(c,1)) { goto L_80206658; } // 8020664C
  c->r[6]=0u+0xFFFFF027u; // 80206650
  goto L_80206668; // 80206654
L_80206658:;
  c->r[0]=R32(c->r[3]+0x000001D4u); // 80206658
  cmpu(c,0,c->r[5],c->r[0]); // 8020665C
  if (!crb(c,1)) { goto L_80206668; } // 80206660
  c->r[6]=0u+0xFFFFF026u; // 80206664
L_80206668:;
  c->r[3]=c->r[6]|c->r[6]; // 80206668
  return; // 8020666C
}

// fn_80206670
void f_80206670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206670
  c->r[0]=c->lr; // 80206674
  W32(c->r[1]+0x00000034u,c->r[0]); // 80206678
  c->r[11]=c->r[1]+0x00000030u; // 8020667C
  c->lr=0x80206684u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206680
  c->r[0]=R32(c->r[3]+0x00000220u); // 80206684
  c->r[27]=c->r[3]|c->r[3]; // 80206688
  c->r[28]=c->r[4]|c->r[4]; // 8020668C
  c->r[30]=0u+0x00000000u; // 80206690
  cmps(c,0,(int32_t)c->r[0],0); // 80206694
  c->r[29]=0u+0x00000000u; // 80206698
  if (crb(c,2)) { goto L_802066A8; } // 8020669C
  c->r[29]=c->r[0]|c->r[0]; // 802066A0
  goto L_802066C8; // 802066A4
L_802066A8:;
  c->r[31]=0u+0x80380000u; // 802066A8
  c->r[3]=c->r[31]+0x00002980u; // 802066AC
  c->lr=0x802066B4u; f_8021E7F8(c); // 802066B0
  cmps(c,0,(int32_t)c->r[3],0); // 802066B4
  c->r[30]=c->r[3]|c->r[3]; // 802066B8
  if (!crb(c,2)) { goto L_802066C8; } // 802066BC
  c->r[29]=c->r[31]+0x00002980u; // 802066C0
  W32(c->r[27]+0x00000220u,c->r[29]); // 802066C4
L_802066C8:;
  cmps(c,0,(int32_t)c->r[29],0); // 802066C8
  if (crb(c,2)) { goto L_80206708; } // 802066CC
  c->r[0]=R8(c->r[29]+0x00000005u); // 802066D0
  c->r[5]=0u+0x802A0000u; // 802066D4
  c->r[3]=c->r[28]|c->r[28]; // 802066D8
  c->r[4]=0u+0x00000012u; // 802066DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802066E0
  c->r[5]=c->r[5]+0x0000392Du; // 802066E4
  c->r[6]=R8(c->r[29]+0x00000000u); // 802066E8
  c->r[7]=R8(c->r[29]+0x00000001u); // 802066EC
  c->r[8]=R8(c->r[29]+0x00000002u); // 802066F0
  c->r[9]=R8(c->r[29]+0x00000003u); // 802066F4
  c->r[10]=R8(c->r[29]+0x00000004u); // 802066F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802066FC
  c->lr=0x80206704u; f_80112920(c); // 80206700
  goto L_80206714; // 80206704
L_80206708:;
  c->r[0]=0u+0x00000000u; // 80206708
  c->r[30]=0u+0xFFFFF05Au; // 8020670C
  W8(c->r[28]+0x00000000u,c->r[0]); // 80206710
L_80206714:;
  c->r[11]=c->r[1]+0x00000030u; // 80206714
  c->r[3]=c->r[30]|c->r[30]; // 80206718
  c->lr=0x80206720u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020671C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80206720
  c->lr=c->r[0]; // 80206724
  c->r[1]=c->r[1]+0x00000030u; // 80206728
  return; // 8020672C
}

// fn_80206730
void f_80206730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206730
  c->r[0]=c->lr; // 80206734
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206738
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020673C
  c->r[31]=0u+0x00000000u; // 80206740
  c->r[10]=R32(c->r[3]+0x00000224u); // 80206744
  cmps(c,0,(int32_t)c->r[10],0); // 80206748
  if (crb(c,2)) { goto L_80206788; } // 8020674C
  c->r[0]=R8(c->r[10]+0x00000005u); // 80206750
  c->r[5]=0u+0x802A0000u; // 80206754
  c->r[3]=c->r[4]|c->r[4]; // 80206758
  c->r[4]=0u+0x00000012u; // 8020675C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80206760
  c->r[5]=c->r[5]+0x0000392Du; // 80206764
  c->r[6]=R8(c->r[10]+0x00000000u); // 80206768
  c->r[7]=R8(c->r[10]+0x00000001u); // 8020676C
  c->r[8]=R8(c->r[10]+0x00000002u); // 80206770
  c->r[9]=R8(c->r[10]+0x00000003u); // 80206774
  c->r[10]=R8(c->r[10]+0x00000004u); // 80206778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020677C
  c->lr=0x80206784u; f_80112920(c); // 80206780
  goto L_80206794; // 80206784
L_80206788:;
  c->r[0]=0u+0x00000000u; // 80206788
  c->r[31]=0u+0xFFFFF05Au; // 8020678C
  W8(c->r[4]+0x00000000u,c->r[0]); // 80206790
L_80206794:;
  c->r[3]=c->r[31]|c->r[31]; // 80206794
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80206798
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020679C
  c->lr=c->r[0]; // 802067A0
  c->r[1]=c->r[1]+0x00000020u; // 802067A4
  return; // 802067A8
}

// fn_802067AC
void f_802067AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802067AC
  c->r[0]=c->lr; // 802067B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802067B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802067B8
  c->r[31]=c->r[3]|c->r[3]; // 802067BC
  c->r[3]=c->r[3]+0x000001B0u; // 802067C0
  c->lr=0x802067C8u; f_8021E9A0(c); // 802067C4
  cmps(c,0,(int32_t)c->r[3],0); // 802067C8
  if (crb(c,2)) { goto L_802067DC; } // 802067CC
  c->r[0]=0u+0x00000000u; // 802067D0
  c->r[3]=0u+0xFFFFF05Au; // 802067D4
  W32(c->r[31]+0x000001B0u,c->r[0]); // 802067D8
L_802067DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802067DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802067E0
  c->lr=c->r[0]; // 802067E4
  c->r[1]=c->r[1]+0x00000010u; // 802067E8
  return; // 802067EC
}

// fn_802067F0
void f_802067F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802067F0
  c->r[0]=c->lr; // 802067F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802067F8
  c->r[11]=c->r[1]+0x00000020u; // 802067FC
  c->lr=0x80206804u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206800
  c->r[31]=0u+0x802A0000u; // 80206804
  cmps(c,0,(int32_t)c->r[4],0); // 80206808
  c->r[31]=c->r[31]+0x00003408u; // 8020680C
  c->r[27]=c->r[3]|c->r[3]; // 80206810
  c->r[30]=c->r[31]+0x0000051Du; // 80206814
  c->r[29]=c->r[30]|c->r[30]; // 80206818
  c->r[28]=c->r[30]|c->r[30]; // 8020681C
  if (crb(c,2)) { goto L_80206828; } // 80206820
  c->r[30]=c->r[4]|c->r[4]; // 80206824
L_80206828:;
  cmps(c,0,(int32_t)c->r[5],0); // 80206828
  if (crb(c,2)) { goto L_80206834; } // 8020682C
  c->r[29]=c->r[5]|c->r[5]; // 80206830
L_80206834:;
  cmps(c,0,(int32_t)c->r[6],0); // 80206834
  if (crb(c,2)) { goto L_80206840; } // 80206838
  c->r[28]=c->r[6]|c->r[6]; // 8020683C
L_80206840:;
  c->r[4]=c->r[30]|c->r[30]; // 80206840
  c->r[3]=c->r[3]+0x00000010u; // 80206844
  c->lr=0x8020684Cu; f_80207208(c); // 80206848
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8020684C
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 80206850
  if (crb(c,2)) { goto L_80206878; } // 80206854
  c->r[5]=c->r[30]|c->r[30]; // 80206858
  c->r[4]=c->r[31]+0x00000563u; // 8020685C
  c->r[3]=0u+0x00000003u; // 80206860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206864
  c->lr=0x8020686Cu; f_8020B328(c); // 80206868
  c->r[4]=c->r[30]|c->r[30]; // 8020686C
  c->r[3]=c->r[27]+0x00000010u; // 80206870
  c->lr=0x80206878u; f_80201DF4(c); // 80206874
L_80206878:;
  c->r[4]=c->r[29]|c->r[29]; // 80206878
  c->r[3]=c->r[27]+0x0000001Cu; // 8020687C
  c->lr=0x80206884u; f_80207208(c); // 80206880
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80206884
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 80206888
  if (crb(c,2)) { goto L_802068B0; } // 8020688C
  c->r[5]=c->r[29]|c->r[29]; // 80206890
  c->r[4]=c->r[31]+0x00000573u; // 80206894
  c->r[3]=0u+0x00000003u; // 80206898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020689C
  c->lr=0x802068A4u; f_8020B328(c); // 802068A0
  c->r[4]=c->r[29]|c->r[29]; // 802068A4
  c->r[3]=c->r[27]+0x0000001Cu; // 802068A8
  c->lr=0x802068B0u; f_80201DF4(c); // 802068AC
L_802068B0:;
  c->r[4]=c->r[28]|c->r[28]; // 802068B0
  c->r[3]=c->r[27]+0x00000028u; // 802068B4
  c->lr=0x802068BCu; f_80207208(c); // 802068B8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 802068BC
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 802068C0
  if (crb(c,2)) { goto L_802068E8; } // 802068C4
  c->r[5]=c->r[28]|c->r[28]; // 802068C8
  c->r[4]=c->r[31]+0x00000583u; // 802068CC
  c->r[3]=0u+0x00000003u; // 802068D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802068D4
  c->lr=0x802068DCu; f_8020B328(c); // 802068D8
  c->r[4]=c->r[28]|c->r[28]; // 802068DC
  c->r[3]=c->r[27]+0x00000028u; // 802068E0
  c->lr=0x802068E8u; f_80201DF4(c); // 802068E4
L_802068E8:;
  c->r[11]=c->r[1]+0x00000020u; // 802068E8
  c->r[3]=0u+0x00000000u; // 802068EC
  c->lr=0x802068F4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802068F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802068F4
  c->lr=c->r[0]; // 802068F8
  c->r[1]=c->r[1]+0x00000020u; // 802068FC
  return; // 80206900
}

// fn_80206904
void f_80206904(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206904
  c->r[0]=c->lr; // 80206908
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020690C
  c->r[11]=c->r[1]+0x00000020u; // 80206910
  c->lr=0x80206918u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206914
  c->r[31]=0u+0x802A0000u; // 80206918
  cmps(c,0,(int32_t)c->r[4],0); // 8020691C
  c->r[31]=c->r[31]+0x00003408u; // 80206920
  c->r[28]=c->r[3]|c->r[3]; // 80206924
  c->r[30]=c->r[31]+0x0000051Du; // 80206928
  c->r[29]=c->r[30]|c->r[30]; // 8020692C
  if (crb(c,2)) { goto L_80206938; } // 80206930
  c->r[30]=c->r[4]|c->r[4]; // 80206934
L_80206938:;
  cmps(c,0,(int32_t)c->r[5],0); // 80206938
  if (crb(c,2)) { goto L_80206944; } // 8020693C
  c->r[29]=c->r[5]|c->r[5]; // 80206940
L_80206944:;
  c->r[4]=c->r[30]|c->r[30]; // 80206944
  c->r[3]=c->r[3]+0x00000034u; // 80206948
  c->lr=0x80206950u; f_80207208(c); // 8020694C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80206950
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 80206954
  if (crb(c,2)) { goto L_8020697C; } // 80206958
  c->r[5]=c->r[30]|c->r[30]; // 8020695C
  c->r[4]=c->r[31]+0x00000593u; // 80206960
  c->r[3]=0u+0x00000003u; // 80206964
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206968
  c->lr=0x80206970u; f_8020B328(c); // 8020696C
  c->r[4]=c->r[30]|c->r[30]; // 80206970
  c->r[3]=c->r[28]+0x00000034u; // 80206974
  c->lr=0x8020697Cu; f_80201DF4(c); // 80206978
L_8020697C:;
  c->r[4]=c->r[29]|c->r[29]; // 8020697C
  c->r[3]=c->r[28]+0x00000040u; // 80206980
  c->lr=0x80206988u; f_80207208(c); // 80206984
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80206988
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 8020698C
  if (crb(c,2)) { goto L_802069B4; } // 80206990
  c->r[5]=c->r[29]|c->r[29]; // 80206994
  c->r[4]=c->r[31]+0x000005A3u; // 80206998
  c->r[3]=0u+0x00000003u; // 8020699C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802069A0
  c->lr=0x802069A8u; f_8020B328(c); // 802069A4
  c->r[4]=c->r[29]|c->r[29]; // 802069A8
  c->r[3]=c->r[28]+0x00000040u; // 802069AC
  c->lr=0x802069B4u; f_80201DF4(c); // 802069B0
L_802069B4:;
  c->r[11]=c->r[1]+0x00000020u; // 802069B4
  c->r[3]=0u+0x00000000u; // 802069B8
  c->lr=0x802069C0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802069BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802069C0
  c->lr=c->r[0]; // 802069C4
  c->r[1]=c->r[1]+0x00000020u; // 802069C8
  return; // 802069CC
}

// fn_802069D0
void f_802069D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802069D0
  c->r[0]=c->lr; // 802069D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802069D8
  c->r[11]=c->r[1]+0x00000030u; // 802069DC
  c->lr=0x802069E4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802069E0
  c->r[31]=c->r[1]|c->r[1]; // 802069E4
  c->r[5]=0u+0x80380000u; // 802069E8
  c->r[29]=c->r[3]|c->r[3]; // 802069EC
  c->r[30]=c->r[4]|c->r[4]; // 802069F0
  c->r[3]=c->r[5]+0x00002614u; // 802069F4
  c->lr=0x802069FCu; f_80201558(c); // 802069F8
  cmps(c,0,(int32_t)c->r[30],0); // 802069FC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80206A00
  if (crb(c,2)) { goto L_80206A30; } // 80206A04
  c->r[0]=R8(c->r[30]+0x00000000u); // 80206A08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80206A0C
  if (crb(c,2)) { goto L_80206A30; } // 80206A10
  c->r[4]=c->r[30]|c->r[30]; // 80206A14
  c->r[3]=c->r[29]+0x0000003Cu; // 80206A18
  c->r[5]=0u+0x00000080u; // 80206A1C
  c->lr=0x80206A24u; f_801141CC(c); // 80206A20
  c->r[0]=0u+0x00000000u; // 80206A24
  W8(c->r[29]+0x000000BBu,c->r[0]); // 80206A28
  goto L_80206A38; // 80206A2C
L_80206A30:;
  c->r[0]=0u+0x00000000u; // 80206A30
  W8(c->r[29]+0x0000003Cu,c->r[0]); // 80206A34
L_80206A38:;
  c->r[3]=0u+0x80380000u; // 80206A38
  c->r[3]=c->r[3]+0x00002614u; // 80206A3C
  c->lr=0x80206A44u; f_802015D0(c); // 80206A40
  c->r[10]=c->r[31]|c->r[31]; // 80206A44
  c->r[11]=c->r[10]+0x00000030u; // 80206A48
  c->lr=0x80206A50u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80206A4C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80206A50
  c->r[0]=R32(c->r[10]+0x00000004u); // 80206A54
  c->r[1]=c->r[10]|c->r[10]; // 80206A58
  c->lr=c->r[0]; // 80206A5C
  return; // 80206A60
}

// fn_80206A64
void f_80206A64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206A64
  c->r[0]=c->lr; // 80206A68
  W32(c->r[1]+0x00000034u,c->r[0]); // 80206A6C
  c->r[11]=c->r[1]+0x00000030u; // 80206A70
  c->lr=0x80206A78u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206A74
  c->r[31]=c->r[1]|c->r[1]; // 80206A78
  c->r[6]=0u+0x80380000u; // 80206A7C
  c->r[28]=c->r[3]|c->r[3]; // 80206A80
  c->r[29]=c->r[4]|c->r[4]; // 80206A84
  c->r[30]=c->r[5]|c->r[5]; // 80206A88
  c->r[3]=c->r[6]+0x00002614u; // 80206A8C
  c->lr=0x80206A94u; f_80201558(c); // 80206A90
  cmps(c,0,(int32_t)c->r[29],0); // 80206A94
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80206A98
  if (crb(c,2)) { goto L_80206AC0; } // 80206A9C
  c->r[0]=R8(c->r[29]+0x00000000u); // 80206AA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80206AA4
  if (crb(c,2)) { goto L_80206AC0; } // 80206AA8
  c->r[3]=c->r[29]|c->r[29]; // 80206AAC
  c->r[4]=0u+0x00000000u; // 80206AB0
  c->r[5]=0u+0x00000000u; // 80206AB4
  c->lr=0x80206ABCu; f_801164DC(c); // 80206AB8
  W32(c->r[28]+0x00000038u,c->r[3]); // 80206ABC
L_80206AC0:;
  cmps(c,0,(int32_t)c->r[30],0); // 80206AC0
  if (crb(c,2)) { goto L_80206AF0; } // 80206AC4
  c->r[0]=R8(c->r[30]+0x00000000u); // 80206AC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80206ACC
  if (crb(c,2)) { goto L_80206AF0; } // 80206AD0
  c->r[4]=c->r[30]|c->r[30]; // 80206AD4
  c->r[3]=c->r[28]+0x0000003Cu; // 80206AD8
  c->r[5]=0u+0x00000080u; // 80206ADC
  c->lr=0x80206AE4u; f_801141CC(c); // 80206AE0
  c->r[0]=0u+0x00000000u; // 80206AE4
  W8(c->r[28]+0x000000BBu,c->r[0]); // 80206AE8
  goto L_80206AF8; // 80206AEC
L_80206AF0:;
  c->r[0]=0u+0x00000000u; // 80206AF0
  W8(c->r[28]+0x0000003Cu,c->r[0]); // 80206AF4
L_80206AF8:;
  c->r[3]=0u+0x80380000u; // 80206AF8
  c->r[3]=c->r[3]+0x00002614u; // 80206AFC
  c->lr=0x80206B04u; f_802015D0(c); // 80206B00
  c->r[10]=c->r[31]|c->r[31]; // 80206B04
  c->r[11]=c->r[10]+0x00000030u; // 80206B08
  c->lr=0x80206B10u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80206B0C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80206B10
  c->r[0]=R32(c->r[10]+0x00000004u); // 80206B14
  c->r[1]=c->r[10]|c->r[10]; // 80206B18
  c->lr=c->r[0]; // 80206B1C
  return; // 80206B20
}

// fn_80206B24
void f_80206B24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206B24
  c->r[0]=c->lr; // 80206B28
  c->r[5]=0u+0x80380000u; // 80206B2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206B30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206B34
  c->r[31]=c->r[4]|c->r[4]; // 80206B38
  W32(c->r[1]+0x00000008u,c->r[30]); // 80206B3C
  c->r[30]=c->r[3]|c->r[3]; // 80206B40
  c->r[3]=c->r[5]+0x00002614u; // 80206B44
  c->lr=0x80206B4Cu; f_80201558(c); // 80206B48
  c->r[0]=R32(c->r[30]+0x000000BCu); // 80206B4C
  cmps(c,0,(int32_t)c->r[0],1); // 80206B50
  if (!crb(c,2)) { goto L_80206B60; } // 80206B54
  W32(c->r[30]+0x00000030u,c->r[31]); // 80206B58
  goto L_80206B88; // 80206B5C
L_80206B60:;
  cmps(c,0,(int32_t)c->r[0],2); // 80206B60
  if (!crb(c,2)) { goto L_80206B78; } // 80206B64
  c->r[0]=R32(c->r[30]+0x00000030u); // 80206B68
  c->r[0]=c->r[0]+c->r[31]; // 80206B6C
  W32(c->r[30]+0x00000030u,c->r[0]); // 80206B70
  goto L_80206B88; // 80206B74
L_80206B78:;
  cmps(c,0,(int32_t)c->r[0],0); // 80206B78
  if (!crb(c,2)) { goto L_80206B88; } // 80206B7C
  c->r[0]=0u+0x00000000u; // 80206B80
  W32(c->r[30]+0x00000030u,c->r[0]); // 80206B84
L_80206B88:;
  c->r[3]=0u+0x80380000u; // 80206B88
  c->r[3]=c->r[3]+0x00002614u; // 80206B8C
  c->lr=0x80206B94u; f_802015D0(c); // 80206B90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206B94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206B98
  c->r[30]=R32(c->r[1]+0x00000008u); // 80206B9C
  c->lr=c->r[0]; // 80206BA0
  c->r[1]=c->r[1]+0x00000010u; // 80206BA4
  return; // 80206BA8
}

// fn_80206BAC
void f_80206BAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206BAC
  c->r[0]=c->lr; // 80206BB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206BB4
  c->r[11]=c->r[1]+0x00000020u; // 80206BB8
  c->lr=0x80206BC0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206BBC
  c->r[31]=0u+0x80380000u; // 80206BC0
  c->r[29]=c->r[3]|c->r[3]; // 80206BC4
  c->r[30]=c->r[4]|c->r[4]; // 80206BC8
  c->r[3]=c->r[31]+0x00002614u; // 80206BCC
  c->lr=0x80206BD4u; f_80201558(c); // 80206BD0
  c->r[0]=R32(c->r[29]+0x00000034u); // 80206BD4
  c->r[3]=c->r[31]+0x00002614u; // 80206BD8
  c->r[0]=c->r[0]+c->r[30]; // 80206BDC
  W32(c->r[29]+0x00000034u,c->r[0]); // 80206BE0
  c->lr=0x80206BE8u; f_802015D0(c); // 80206BE4
  c->r[11]=c->r[1]+0x00000020u; // 80206BE8
  c->lr=0x80206BF0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80206BEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80206BF0
  c->lr=c->r[0]; // 80206BF4
  c->r[1]=c->r[1]+0x00000020u; // 80206BF8
  return; // 80206BFC
}

// fn_80206C00
void f_80206C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206C00
  c->r[0]=c->lr; // 80206C04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206C08
  c->r[11]=c->r[1]+0x00000020u; // 80206C0C
  c->lr=0x80206C14u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206C10
  c->r[30]=0u+0x00000001u; // 80206C14
  W32(c->r[3]+0x00000004u,c->r[4]); // 80206C18
  c->r[31]=0u+0x80380000u; // 80206C1C
  c->r[29]=c->r[3]|c->r[3]; // 80206C20
  W32(c->r[3]+0x00000014u,c->r[30]); // 80206C24
  c->r[3]=c->r[31]+0x00002614u; // 80206C28
  c->lr=0x80206C30u; f_80201558(c); // 80206C2C
  c->r[3]=c->r[29]+0x00000020u; // 80206C30
  c->r[4]=0u+0x00000000u; // 80206C34
  c->r[5]=0u+0x0000009Cu; // 80206C38
  c->lr=0x80206C40u; f_8000443C(c); // 80206C3C
  c->r[3]=0u+0xFFFFF057u; // 80206C40
  c->r[0]=0u+0x00000000u; // 80206C44
  W32(c->r[29]+0x00000020u,c->r[3]); // 80206C48
  c->r[3]=c->r[31]+0x00002614u; // 80206C4C
  W32(c->r[29]+0x00000028u,c->r[30]); // 80206C50
  W32(c->r[29]+0x000000BCu,c->r[0]); // 80206C54
  c->lr=0x80206C5Cu; f_802015D0(c); // 80206C58
  c->lr=0x80206C60u; f_8020EA54(c); // 80206C5C
  c->r[11]=c->r[1]+0x00000020u; // 80206C60
  c->r[3]=0u+0x00000000u; // 80206C64
  c->lr=0x80206C6Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80206C68
  c->r[0]=R32(c->r[1]+0x00000024u); // 80206C6C
  c->lr=c->r[0]; // 80206C70
  c->r[1]=c->r[1]+0x00000020u; // 80206C74
  return; // 80206C78
}

// fn_80206C7C
void f_80206C7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206C7C
  c->r[0]=c->lr; // 80206C80
  c->r[5]=0u+0x80380000u; // 80206C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206C8C
  c->r[31]=c->r[4]|c->r[4]; // 80206C90
  W32(c->r[1]+0x00000008u,c->r[30]); // 80206C94
  c->r[30]=c->r[3]|c->r[3]; // 80206C98
  c->r[3]=c->r[5]+0x00002614u; // 80206C9C
  c->lr=0x80206CA4u; f_80201558(c); // 80206CA0
  c->r[0]=0u+0x00000002u; // 80206CA4
  cmps(c,0,(int32_t)c->r[31],0); // 80206CA8
  W32(c->r[30]+0x00000020u,c->r[31]); // 80206CAC
  W32(c->r[30]+0x00000028u,c->r[0]); // 80206CB0
  if (!crb(c,0)) { goto L_80206D04; } // 80206CB4
  c->r[0]=R32(c->r[30]+0x00000038u); // 80206CB8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80206CBC
  if (!crb(c,2)) { goto L_80206CCC; } // 80206CC0
  c->r[0]=0u+0x00000000u; // 80206CC4
  W32(c->r[30]+0x00000038u,c->r[0]); // 80206CC8
L_80206CCC:;
  c->r[3]=c->r[30]+0x00000008u; // 80206CCC
  c->lr=0x80206CD4u; f_80203778(c); // 80206CD0
  c->r[4]=0u+0x802A0000u; // 80206CD4
  c->r[5]=c->r[3]|c->r[3]; // 80206CD8
  c->r[6]=c->r[31]|c->r[31]; // 80206CDC
  c->r[3]=0u+0x00000003u; // 80206CE0
  c->r[4]=c->r[4]+0x000039BBu; // 80206CE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206CE8
  c->lr=0x80206CF0u; f_8020B328(c); // 80206CEC
  c->r[12]=R32(c->r[30]+0x000000C0u); // 80206CF0
  c->r[3]=c->r[30]|c->r[30]; // 80206CF4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80206CF8
  c->ctr=c->r[12]; // 80206CFC
  if (true) { c->lr=0x80206D04u; dispatch(c,c->ctr); } // 80206D00
L_80206D04:;
  c->r[3]=0u+0x80380000u; // 80206D04
  c->r[3]=c->r[3]+0x00002614u; // 80206D08
  c->lr=0x80206D10u; f_802015D0(c); // 80206D0C
  c->lr=0x80206D14u; f_8020EA54(c); // 80206D10
  c->r[0]=0u+0x00000003u; // 80206D14
  W32(c->r[30]+0x00000014u,c->r[0]); // 80206D18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206D1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80206D20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206D24
  c->lr=c->r[0]; // 80206D28
  c->r[1]=c->r[1]+0x00000010u; // 80206D2C
  return; // 80206D30
}

// fn_80206D34
void f_80206D34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206D34
  c->r[0]=c->lr; // 80206D38
  W32(c->r[1]+0x00000034u,c->r[0]); // 80206D3C
  c->r[11]=c->r[1]+0x00000030u; // 80206D40
  c->lr=0x80206D48u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206D44
  c->r[4]=R32(c->r[3]+0x00000000u); // 80206D48
  c->r[26]=c->r[3]|c->r[3]; // 80206D4C
  c->r[3]=c->r[4]+0x00000040u; // 80206D50
  c->lr=0x80206D58u; f_80203778(c); // 80206D54
  c->r[4]=R32(c->r[26]+0x00000000u); // 80206D58
  c->r[31]=c->r[3]|c->r[3]; // 80206D5C
  c->r[3]=c->r[4]+0x00000034u; // 80206D60
  c->lr=0x80206D68u; f_80203778(c); // 80206D64
  c->r[4]=R32(c->r[26]+0x00000000u); // 80206D68
  c->r[30]=c->r[3]|c->r[3]; // 80206D6C
  c->r[3]=c->r[4]+0x00000028u; // 80206D70
  c->lr=0x80206D78u; f_80203778(c); // 80206D74
  c->r[4]=R32(c->r[26]+0x00000000u); // 80206D78
  c->r[29]=c->r[3]|c->r[3]; // 80206D7C
  c->r[3]=c->r[4]+0x0000001Cu; // 80206D80
  c->lr=0x80206D88u; f_80203778(c); // 80206D84
  c->r[4]=R32(c->r[26]+0x00000000u); // 80206D88
  c->r[28]=c->r[3]|c->r[3]; // 80206D8C
  c->r[3]=c->r[4]+0x00000010u; // 80206D90
  c->lr=0x80206D98u; f_80203778(c); // 80206D94
  c->r[27]=c->r[3]|c->r[3]; // 80206D98
  c->r[3]=c->r[26]+0x00000008u; // 80206D9C
  c->lr=0x80206DA4u; f_80203778(c); // 80206DA0
  c->r[4]=0u+0x802A0000u; // 80206DA4
  c->r[5]=c->r[3]|c->r[3]; // 80206DA8
  c->r[6]=c->r[27]|c->r[27]; // 80206DAC
  c->r[7]=c->r[28]|c->r[28]; // 80206DB0
  c->r[8]=c->r[29]|c->r[29]; // 80206DB4
  c->r[9]=c->r[30]|c->r[30]; // 80206DB8
  c->r[10]=c->r[31]|c->r[31]; // 80206DBC
  c->r[4]=c->r[4]+0x000039C9u; // 80206DC0
  c->r[3]=0u+0x00000003u; // 80206DC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206DC8
  c->lr=0x80206DD0u; f_8020B328(c); // 80206DCC
  c->r[6]=R32(c->r[26]+0x00000014u); // 80206DD0
  c->r[4]=0u+0x802A0000u; // 80206DD4
  c->r[3]=R32(c->r[26]+0x00000030u); // 80206DD8
  c->r[5]=c->r[26]+0x0000003Cu; // 80206DDC
  c->r[0]=c->r[6]+0xFFFFFFFDu; // 80206DE0
  c->r[4]=c->r[4]+0x00003A14u; // 80206DE4
  W32(c->r[1]+0x00000008u,c->r[3]); // 80206DE8
  c->r[0]=cntlz(c->r[0]); // 80206DEC
  c->r[9]=rotl(c->r[0],27)&0x07FFFFFFu; // 80206DF0
  c->r[3]=0u+0x00000003u; // 80206DF4
  c->r[7]=R32(c->r[26]+0x0000002Cu); // 80206DF8
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 80206DFC
  c->r[0]=R32(c->r[26]+0x00000038u); // 80206E00
  W32(c->r[1]+0x00000010u,c->r[0]); // 80206E04
  W32(c->r[1]+0x00000014u,c->r[5]); // 80206E08
  c->r[5]=R32(c->r[26]+0x00000004u); // 80206E0C
  c->r[7]=R32(c->r[26]+0x00000028u); // 80206E10
  c->r[8]=R32(c->r[26]+0x00000020u); // 80206E14
  c->r[10]=R32(c->r[26]+0x00000034u); // 80206E18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206E1C
  c->lr=0x80206E24u; f_8020B328(c); // 80206E20
  c->r[11]=c->r[1]+0x00000030u; // 80206E24
  c->lr=0x80206E2Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80206E28
  c->r[0]=R32(c->r[1]+0x00000034u); // 80206E2C
  c->lr=c->r[0]; // 80206E30
  c->r[1]=c->r[1]+0x00000030u; // 80206E34
  return; // 80206E38
}

// fn_80206E3C
void f_80206E3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206E3C
  c->r[0]=c->lr; // 80206E40
  cmps(c,0,(int32_t)c->r[3],0); // 80206E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206E4C
  c->r[31]=c->r[4]|c->r[4]; // 80206E50
  W32(c->r[1]+0x00000008u,c->r[30]); // 80206E54
  c->r[30]=c->r[3]|c->r[3]; // 80206E58
  if (crb(c,2)) { goto L_80206E7C; } // 80206E5C
  c->r[4]=0u+0xFFFFFFFFu; // 80206E60
  c->r[3]=c->r[3]+0x00000008u; // 80206E64
  c->lr=0x80206E6Cu; f_802030B0(c); // 80206E68
  cmps(c,0,(int32_t)c->r[31],0); // 80206E6C
  if (!crb(c,1)) { goto L_80206E7C; } // 80206E70
  c->r[3]=c->r[30]|c->r[30]; // 80206E74
  c->lr=0x80206E7Cu; f_8020ECE0(c); // 80206E78
L_80206E7C:;
  c->r[3]=c->r[30]|c->r[30]; // 80206E7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206E80
  c->r[30]=R32(c->r[1]+0x00000008u); // 80206E84
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206E88
  c->lr=c->r[0]; // 80206E8C
  c->r[1]=c->r[1]+0x00000010u; // 80206E90
  return; // 80206E94
}

// dtor_80206E98
void f_80206E98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206E98
  c->r[0]=c->lr; // 80206E9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206EA0
  c->r[11]=c->r[1]+0x00000020u; // 80206EA4
  c->lr=0x80206EACu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80206EA8
  cmps(c,0,(int32_t)c->r[3],0); // 80206EAC
  c->r[28]=c->r[3]|c->r[3]; // 80206EB0
  c->r[29]=c->r[4]|c->r[4]; // 80206EB4
  if (crb(c,2)) { goto L_80206F4C; } // 80206EB8
  c->r[5]=R32(c->r[3]+0x00000000u); // 80206EBC
  cmps(c,0,(int32_t)c->r[5],0); // 80206EC0
  if (crb(c,2)) { goto L_80206F30; } // 80206EC4
  c->r[30]=R32(c->r[3]+0x00000004u); // 80206EC8
  c->r[0]=c->r[30]-c->r[30]; // 80206ECC
  c->r[4]=rotl(c->r[30],5)&0xFFFFFFE0u; // 80206ED0
  W32(c->r[3]+0x00000004u,c->r[0]); // 80206ED4
  c->r[31]=c->r[5]+c->r[4]; // 80206ED8
  goto L_80206EF8; // 80206EDC
L_80206EE0:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE0u,0); cr0(c,c->r[31]); // 80206EE0
  if (crb(c,2)) { goto L_80206EF4; } // 80206EE4
  c->r[3]=c->r[31]+0x00000010u; // 80206EE8
  c->r[4]=0u+0xFFFFFFFFu; // 80206EEC
  c->lr=0x80206EF4u; f_802030B0(c); // 80206EF0
L_80206EF4:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80206EF4
L_80206EF8:;
  cmps(c,0,(int32_t)c->r[30],0); // 80206EF8
  if (!crb(c,2)) { IRQCHK(c); goto L_80206EE0; } // 80206EFC
  c->r[5]=R32(c->r[28]+0x00000008u); // 80206F00
  c->r[4]=0u+0x802A0000u; // 80206F04
  c->r[30]=R32(c->r[28]+0x00000000u); // 80206F08
  c->r[4]=c->r[4]+0x00003DA0u; // 80206F0C
  c->r[7]=rotl(c->r[5],5)&0xFFFFFFE0u; // 80206F10
  c->r[3]=0u+0x00000006u; // 80206F14
  c->r[8]=c->r[30]|c->r[30]; // 80206F18
  c->r[6]=0u+0x00000020u; // 80206F1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206F20
  c->lr=0x80206F28u; f_8020B328(c); // 80206F24
  c->r[3]=c->r[30]|c->r[30]; // 80206F28
  c->lr=0x80206F30u; f_8020EB2C(c); // 80206F2C
L_80206F30:;
  c->r[3]=c->r[28]+0x00000008u; // 80206F30
  c->r[4]=0u+0xFFFFFFFFu; // 80206F34
  c->lr=0x80206F3Cu; f_802039EC(c); // 80206F38
  cmps(c,0,(int32_t)c->r[29],0); // 80206F3C
  if (!crb(c,1)) { goto L_80206F4C; } // 80206F40
  c->r[3]=c->r[28]|c->r[28]; // 80206F44
  c->lr=0x80206F4Cu; f_8009230C(c); // 80206F48
L_80206F4C:;
  c->r[11]=c->r[1]+0x00000020u; // 80206F4C
  c->r[3]=c->r[28]|c->r[28]; // 80206F50
  c->lr=0x80206F58u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80206F54
  c->r[0]=R32(c->r[1]+0x00000024u); // 80206F58
  c->lr=c->r[0]; // 80206F5C
  c->r[1]=c->r[1]+0x00000020u; // 80206F60
  return; // 80206F64
}

// fn_80206F68
void f_80206F68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206F68
  c->r[0]=c->lr; // 80206F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206F70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206F74
  c->r[31]=c->r[3]|c->r[3]; // 80206F78
  c->lr=0x80206F80u; f_802034AC(c); // 80206F7C
  c->r[4]=0u+0x80290000u; // 80206F80
  c->r[3]=c->r[31]|c->r[31]; // 80206F84
  c->r[4]=c->r[4]+0x00006C90u; // 80206F88
  W32(c->r[31]+0x00000000u,c->r[4]); // 80206F8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206F90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206F94
  c->lr=c->r[0]; // 80206F98
  c->r[1]=c->r[1]+0x00000010u; // 80206F9C
  return; // 80206FA0
}

// fn_80206FA4
void f_80206FA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206FA4
  c->r[0]=c->lr; // 80206FA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80206FAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80206FB0
  c->r[31]=c->r[4]|c->r[4]; // 80206FB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80206FB8
  c->r[30]=c->r[3]|c->r[3]; // 80206FBC
  c->lr=0x80206FC4u; f_8020731C(c); // 80206FC0
  c->r[4]=R32(c->r[31]+0x00000000u); // 80206FC4
  c->r[0]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[0]); // 80206FC8
  if (!crb(c,2)) { goto L_80206FE8; } // 80206FCC
  c->r[3]=R32(c->r[31]+0x00000004u); // 80206FD0
  c->r[0]=R32(c->r[31]+0x00000008u); // 80206FD4
  W32(c->r[30]+0x00000000u,c->r[4]); // 80206FD8
  W32(c->r[30]+0x00000004u,c->r[3]); // 80206FDC
  W32(c->r[30]+0x00000008u,c->r[0]); // 80206FE0
  goto L_80207024; // 80206FE4
L_80206FE8:;
  c->r[3]=c->r[30]|c->r[30]; // 80206FE8
  c->lr=0x80206FF0u; f_802039CC(c); // 80206FEC
  c->r[4]=R32(c->r[31]+0x00000004u); // 80206FF0
  c->r[3]=c->r[30]|c->r[30]; // 80206FF4
  c->lr=0x80206FFCu; f_80207040(c); // 80206FF8
  c->r[5]=R8(c->r[1]+0x00000008u); // 80206FFC
  c->r[3]=c->r[30]|c->r[30]; // 80207000
  c->r[6]=R32(c->r[31]+0x00000008u); // 80207004
  c->r[8]=c->r[1]+0x00000009u; // 80207008
  c->r[0]=R32(c->r[31]+0x00000004u); // 8020700C
  c->r[4]=0u+0x00000000u; // 80207010
  W8(c->r[1]+0x00000009u,c->r[5]); // 80207014
  c->r[5]=0u+0x00000000u; // 80207018
  c->r[7]=c->r[6]+c->r[0]; // 8020701C
  c->lr=0x80207024u; f_80203148(c); // 80207020
L_80207024:;
  c->r[3]=c->r[30]|c->r[30]; // 80207024
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80207028
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020702C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207030
  c->lr=c->r[0]; // 80207034
  c->r[1]=c->r[1]+0x00000020u; // 80207038
  return; // 8020703C
}

// fn_80207040
void f_80207040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207040
  c->r[0]=c->lr; // 80207044
  W32(c->r[1]+0x00000064u,c->r[0]); // 80207048
  c->r[11]=c->r[1]+0x00000060u; // 8020704C
  c->lr=0x80207054u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207050
  c->r[31]=c->r[1]|c->r[1]; // 80207054
  c->r[5]=0u+0x80000000u; // 80207058
  c->r[27]=0u+0x802A0000u; // 8020705C
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 80207060
  c->r[30]=c->r[3]|c->r[3]; // 80207064
  cmpu(c,0,c->r[4],c->r[0]); // 80207068
  c->r[22]=c->r[4]|c->r[4]; // 8020706C
  c->r[27]=c->r[27]+0x00003408u; // 80207070
  if (!crb(c,1)) { goto L_80207098; } // 80207074
  c->r[3]=c->r[31]+0x00000008u; // 80207078
  c->r[4]=c->r[27]+0x000009CEu; // 8020707C
  c->lr=0x80207084u; f_80206F68(c); // 80207080
  c->r[5]=0u+0x80120000u; // 80207084
  c->r[4]=c->r[3]|c->r[3]; // 80207088
  c->r[3]=c->r[27]+0x000003CEu; // 8020708C
  c->r[5]=c->r[5]+0xFFFFD5F8u; // 80207090
  c->lr=0x80207098u; f_8010BE30(c); // 80207094
L_80207098:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80207098
  c->r[28]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[28]); // 8020709C
  if (!crb(c,2)) { goto L_802070B4; } // 802070A0
  c->r[0]=R8(c->r[30]+0x00000000u); // 802070A4
  c->r[25]=0u+0x0000000Bu; // 802070A8
  c->r[26]=rotl(c->r[0],0)&0x0000007Fu; // 802070AC
  goto L_802070BC; // 802070B0
L_802070B4:;
  c->r[26]=R32(c->r[30]+0x00000004u); // 802070B4
  c->r[25]=rotl(c->r[0],0)&0x7FFFFFFFu; // 802070B8
L_802070BC:;
  cmpu(c,0,c->r[22],c->r[26]); // 802070BC
  if (!crb(c,0)) { goto L_802070C8; } // 802070C0
  c->r[22]=c->r[26]|c->r[26]; // 802070C4
L_802070C8:;
  c->r[0]=c->r[22]+0x00000001u; // 802070C8
  c->r[29]=0u+0x0000000Bu; // 802070CC
  cmpu(c,0,c->r[0],0x0000000Bu); // 802070D0
  if (!crb(c,1)) { goto L_802070E0; } // 802070D4
  c->r[0]=c->r[22]+0x00000010u; // 802070D8
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFF0u; // 802070DC
L_802070E0:;
  cmpu(c,1,c->r[29],c->r[25]); // 802070E0
  if (crb(c,6)) { goto L_802071E8; } // 802070E4
  cmpu(c,0,c->r[29],0x0000000Bu); // 802070E8
  if (!crb(c,2)) { goto L_80207100; } // 802070EC
  c->r[23]=R32(c->r[30]+0x00000008u); // 802070F0
  c->r[24]=c->r[30]+0x00000001u; // 802070F4
  c->r[22]=0u+0x00000000u; // 802070F8
  goto L_8020716C; // 802070FC
L_80207100:;
  if (!crb(c,5)) { goto L_8020711C; } // 80207100
  c->r[3]=c->r[30]|c->r[30]; // 80207104
  c->r[4]=c->r[29]|c->r[29]; // 80207108
  c->r[5]=0u+0x00000000u; // 8020710C
  c->lr=0x80207114u; f_80207944(c); // 80207110
  c->r[24]=c->r[3]|c->r[3]; // 80207114
  goto L_80207154; // 80207118
L_8020711C:;
  W32(c->r[31]+0x00000028u,c->r[1]); // 8020711C
  c->r[3]=c->r[30]|c->r[30]; // 80207120
  c->r[4]=c->r[29]|c->r[29]; // 80207124
  c->r[5]=0u+0x00000000u; // 80207128
  c->lr=0x80207130u; f_80207944(c); // 8020712C
  c->r[24]=c->r[3]|c->r[3]; // 80207130
  goto L_80207154; // 80207134
  c->r[3]=c->r[31]+0x00000014u; // 80207138
  c->lr=0x80207140u; f_8010BF74(c); // 8020713C
  c->r[0]=c->r[0]|0x00000000u; // 80207140
  c->r[0]=R32(c->r[1]+0x00000000u); // 80207144
  c->r[1]=R32(c->r[31]+0x00000028u); // 80207148
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020714C
  goto L_802071E8; // 80207150
L_80207154:;
  cmps(c,0,(int32_t)c->r[28],0); // 80207154
  c->r[22]=0u+0x00000001u; // 80207158
  if (crb(c,2)) { goto L_80207168; } // 8020715C
  c->r[23]=R32(c->r[30]+0x00000008u); // 80207160
  goto L_8020716C; // 80207164
L_80207168:;
  c->r[23]=c->r[30]+0x00000001u; // 80207168
L_8020716C:;
  c->r[3]=c->r[24]|c->r[24]; // 8020716C
  c->r[4]=c->r[23]|c->r[23]; // 80207170
  c->r[5]=c->r[26]|c->r[26]; // 80207174
  c->lr=0x8020717Cu; f_8011007C(c); // 80207178
  c->r[0]=0u+0x00000000u; // 8020717C
  cmps(c,0,(int32_t)c->r[28],0); // 80207180
  W8(c->r[24]+c->r[26],c->r[0]); // 80207184
  if (crb(c,2)) { goto L_802071B4; } // 80207188
  c->r[5]=c->r[25]|c->r[25]; // 8020718C
  c->r[7]=c->r[25]|c->r[25]; // 80207190
  c->r[8]=c->r[23]|c->r[23]; // 80207194
  c->r[4]=c->r[27]+0x00000998u; // 80207198
  c->r[3]=0u+0x00000006u; // 8020719C
  c->r[6]=0u+0x00000001u; // 802071A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802071A4
  c->lr=0x802071ACu; f_8020B328(c); // 802071A8
  c->r[3]=c->r[23]|c->r[23]; // 802071AC
  c->lr=0x802071B4u; f_8020EB2C(c); // 802071B0
L_802071B4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 802071B4
  c->r[0]=(rotl(c->r[22],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 802071B8
  cmps(c,0,(int32_t)c->r[22],0); // 802071BC
  W32(c->r[30]+0x00000000u,c->r[0]); // 802071C0
  if (!crb(c,2)) { goto L_802071D8; } // 802071C4
  c->r[0]=R8(c->r[30]+0x00000000u); // 802071C8
  c->r[0]=(rotl(c->r[26],0)&0x0000007Fu)|(c->r[0]&~0x0000007Fu); // 802071CC
  W8(c->r[30]+0x00000000u,c->r[0]); // 802071D0
  goto L_802071E8; // 802071D4
L_802071D8:;
  c->r[0]=(rotl(c->r[29],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 802071D8
  W32(c->r[30]+0x00000008u,c->r[24]); // 802071DC
  W32(c->r[30]+0x00000004u,c->r[26]); // 802071E0
  W32(c->r[30]+0x00000000u,c->r[0]); // 802071E4
L_802071E8:;
  c->r[10]=c->r[31]|c->r[31]; // 802071E8
  c->r[11]=c->r[10]+0x00000060u; // 802071EC
  c->lr=0x802071F4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802071F0
  c->r[10]=R32(c->r[1]+0x00000000u); // 802071F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 802071F8
  c->r[1]=c->r[10]|c->r[10]; // 802071FC
  c->lr=c->r[0]; // 80207200
  return; // 80207204
}

// fn_80207208
void f_80207208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207208
  c->r[0]=c->lr; // 8020720C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80207210
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80207214
  c->r[31]=c->r[4]|c->r[4]; // 80207218
  W32(c->r[1]+0x00000028u,c->r[30]); // 8020721C
  c->r[30]=c->r[3]|c->r[3]; // 80207220
  c->r[3]=c->r[31]|c->r[31]; // 80207224
  c->lr=0x8020722Cu; f_80109598(c); // 80207228
  W32(c->r[1]+0x00000018u,c->r[3]); // 8020722C
  c->r[3]=c->r[30]|c->r[30]; // 80207230
  c->lr=0x80207238u; f_802020A8(c); // 80207234
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80207238
  c->r[3]=c->r[30]|c->r[30]; // 8020723C
  c->r[4]=c->r[1]+0x00000008u; // 80207240
  c->r[5]=c->r[1]+0x0000000Cu; // 80207244
  c->lr=0x8020724Cu; f_80204620(c); // 80207248
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8020724C
  c->r[4]=c->r[1]+0x00000014u; // 80207250
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80207254
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80207258
  cmpu(c,0,c->r[3],c->r[0]); // 8020725C
  W32(c->r[1]+0x00000014u,c->r[5]); // 80207260
  if (!crb(c,0)) { goto L_8020726C; } // 80207264
  c->r[4]=c->r[1]+0x0000001Cu; // 80207268
L_8020726C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8020726C
  c->r[4]=c->r[31]|c->r[31]; // 80207270
  c->r[0]=R32(c->r[1]+0x00000018u); // 80207274
  c->r[5]=c->r[1]+0x00000010u; // 80207278
  W32(c->r[1]+0x00000010u,c->r[3]); // 8020727C
  cmpu(c,0,c->r[0],c->r[3]); // 80207280
  c->r[3]=R32(c->r[1]+0x00000008u); // 80207284
  if (!crb(c,0)) { goto L_80207290; } // 80207288
  c->r[5]=c->r[1]+0x00000018u; // 8020728C
L_80207290:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 80207290
  c->lr=0x80207298u; f_801101A0(c); // 80207294
  cmps(c,0,(int32_t)c->r[3],0); // 80207298
  if (!crb(c,2)) { goto L_802072C8; } // 8020729C
  c->r[0]=R32(c->r[1]+0x00000018u); // 802072A0
  c->r[3]=R32(c->r[1]+0x00000010u); // 802072A4
  cmpu(c,0,c->r[3],c->r[0]); // 802072A8
  if (!crb(c,0)) { goto L_802072B8; } // 802072AC
  c->r[3]=0u+0xFFFFFFFFu; // 802072B0
  goto L_802072C8; // 802072B4
L_802072B8:;
  if (!crb(c,2)) { goto L_802072C4; } // 802072B8
  c->r[3]=0u+0x00000000u; // 802072BC
  goto L_802072C8; // 802072C0
L_802072C4:;
  c->r[3]=0u+0x00000001u; // 802072C4
L_802072C8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802072C8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802072CC
  c->r[30]=R32(c->r[1]+0x00000028u); // 802072D0
  c->lr=c->r[0]; // 802072D4
  c->r[1]=c->r[1]+0x00000030u; // 802072D8
  return; // 802072DC
}

// fn_802072E0
void f_802072E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802072E0
  c->r[0]=c->lr; // 802072E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802072E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802072EC
  c->r[31]=c->r[3]|c->r[3]; // 802072F0
  c->lr=0x802072F8u; f_802034AC(c); // 802072F4
  c->r[4]=0u+0x80290000u; // 802072F8
  c->r[3]=c->r[31]|c->r[31]; // 802072FC
  c->r[4]=c->r[4]+0x00006C68u; // 80207300
  W32(c->r[31]+0x00000000u,c->r[4]); // 80207304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207308
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020730C
  c->lr=c->r[0]; // 80207310
  c->r[1]=c->r[1]+0x00000010u; // 80207314
  return; // 80207318
}

// fn_8020731C
void f_8020731C(Ctx* __restrict c) {
  return; // 8020731C
}

// fn_80207320
void f_80207320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207320
  c->r[0]=c->lr; // 80207324
  W32(c->r[1]+0x00000024u,c->r[0]); // 80207328
  c->r[0]=R8(c->r[4]+0x00000024u); // 8020732C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80207330
  c->r[31]=c->r[4]|c->r[4]; // 80207334
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80207338
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020733C
  c->r[30]=c->r[3]|c->r[3]; // 80207340
  if (crb(c,2)) { goto L_80207384; } // 80207344
  c->r[3]=R32(c->r[4]+0x00000014u); // 80207348
  c->r[0]=R32(c->r[4]+0x00000028u); // 8020734C
  cmpu(c,0,c->r[0],c->r[3]); // 80207350
  if (!crb(c,0)) { goto L_8020735C; } // 80207354
  W32(c->r[4]+0x00000028u,c->r[3]); // 80207358
L_8020735C:;
  c->r[3]=c->r[1]+0x00000009u; // 8020735C
  c->r[4]=c->r[4]+0x0000002Cu; // 80207360
  c->lr=0x80207368u; f_80207930(c); // 80207364
  c->r[4]=R32(c->r[31]+0x00000010u); // 80207368
  c->r[3]=c->r[30]|c->r[30]; // 8020736C
  c->r[5]=R32(c->r[31]+0x00000028u); // 80207370
  c->r[6]=c->r[1]+0x00000009u; // 80207374
  c->r[7]=0u+0x00000000u; // 80207378
  c->lr=0x80207380u; f_80207718(c); // 8020737C
  goto L_802073A8; // 80207380
L_80207384:;
  c->r[3]=c->r[1]+0x00000008u; // 80207384
  c->r[4]=c->r[4]+0x0000002Cu; // 80207388
  c->lr=0x80207390u; f_80207930(c); // 8020738C
  c->r[4]=R32(c->r[31]+0x00000004u); // 80207390
  c->r[3]=c->r[30]|c->r[30]; // 80207394
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 80207398
  c->r[6]=c->r[1]+0x00000008u; // 8020739C
  c->r[7]=0u+0x00000000u; // 802073A0
  c->lr=0x802073A8u; f_80207718(c); // 802073A4
L_802073A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802073A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802073AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802073B0
  c->lr=c->r[0]; // 802073B4
  c->r[1]=c->r[1]+0x00000020u; // 802073B8
  return; // 802073BC
}

// fn_802073C0
void f_802073C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802073C0
  c->r[0]=c->lr; // 802073C4
  W32(c->r[1]+0x00000074u,c->r[0]); // 802073C8
  c->r[11]=c->r[1]+0x00000070u; // 802073CC
  c->lr=0x802073D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802073D0
  c->r[31]=c->r[1]|c->r[1]; // 802073D4
  c->r[30]=c->r[3]|c->r[3]; // 802073D8
  c->r[26]=c->r[4]|c->r[4]; // 802073DC
  c->r[4]=c->r[30]|c->r[30]; // 802073E0
  c->r[3]=c->r[31]+0x00000020u; // 802073E4
  c->lr=0x802073ECu; f_8011B710(c); // 802073E8
  c->r[0]=R8(c->r[31]+0x00000020u); // 802073EC
  W32(c->r[31]+0x00000054u,c->r[1]); // 802073F0
  cmps(c,0,(int32_t)c->r[0],0); // 802073F4
  if (crb(c,2)) { goto L_80207510; } // 802073F8
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 802073FC
  c->r[3]=c->r[31]+0x00000018u; // 80207400
  c->r[4]=R32(c->r[30]+0x00000000u); // 80207404
  c->lr=0x8020740Cu; f_8011B6E4(c); // 80207408
  c->r[3]=c->r[31]+0x00000018u; // 8020740C
  c->lr=0x80207414u; f_80207794(c); // 80207410
  c->r[0]=0u+0xFFFFFFFFu; // 80207414
  c->r[27]=c->r[3]|c->r[3]; // 80207418
  c->r[3]=c->r[31]+0x00000018u; // 8020741C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80207420
  c->lr=0x80207428u; f_8011B300(c); // 80207424
  c->r[28]=R32(c->r[30]+0x00000000u); // 80207428
  c->r[4]=c->r[30]|c->r[30]; // 8020742C
  c->r[3]=c->r[31]+0x00000010u; // 80207430
  c->r[0]=R8(c->r[28]+0x00000038u); // 80207434
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80207438
  c->lr=0x80207440u; f_802050E0(c); // 8020743C
  c->r[0]=R32(c->r[31]+0x00000010u); // 80207440
  c->r[3]=c->r[27]|c->r[27]; // 80207444
  c->r[5]=c->r[28]|c->r[28]; // 80207448
  c->r[7]=c->r[26]|c->r[26]; // 8020744C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80207450
  c->r[4]=c->r[31]+0x0000000Cu; // 80207454
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 80207458
  c->r[12]=R32(c->r[27]+0x00000000u); // 8020745C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80207460
  c->ctr=c->r[12]; // 80207464
  if (true) { c->lr=0x8020746Cu; dispatch(c,c->ctr); } // 80207468
  c->r[0]=cntlz(c->r[3]); // 8020746C
  W32(c->r[31]+0x00000008u,c->r[3]); // 80207470
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 80207474
  W32(c->r[31]+0x00000014u,c->r[3]); // 80207478
  goto L_802074C8; // 8020747C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80207480
  c->r[4]=0u+0x00000001u; // 80207484
  c->r[3]=c->r[3]+0x00000032u; // 80207488
  c->lr=0x80207490u; f_80204E50(c); // 8020748C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80207490
  c->r[0]=R8(c->r[3]+0x00000033u); // 80207494
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80207498
  if (crb(c,2)) { goto L_802074B0; } // 8020749C
  c->r[3]=0u+0x00000000u; // 802074A0
  c->r[4]=0u+0x00000000u; // 802074A4
  c->r[5]=0u+0x00000000u; // 802074A8
  c->lr=0x802074B0u; f_8010BE30(c); // 802074AC
L_802074B0:;
  c->r[3]=c->r[31]+0x00000028u; // 802074B0
  c->lr=0x802074B8u; f_8010BF74(c); // 802074B4
  c->r[0]=c->r[0]|0x00000000u; // 802074B8
  c->r[0]=R32(c->r[1]+0x00000000u); // 802074BC
  c->r[1]=R32(c->r[31]+0x0000003Cu); // 802074C0
  W32(c->r[1]+0x00000000u,c->r[0]); // 802074C4
L_802074C8:;
  cmps(c,0,(int32_t)c->r[28],0); // 802074C8
  if (crb(c,2)) { goto L_80207510; } // 802074CC
  c->r[3]=R32(c->r[30]+0x00000000u); // 802074D0
  c->r[4]=0u+0x00000005u; // 802074D4
  c->lr=0x802074DCu; f_80204DE4(c); // 802074D8
  goto L_80207510; // 802074DC
  c->r[0]=0u+0x00000001u; // 802074E0
  c->r[3]=0u+0x00000000u; // 802074E4
  W8(c->r[31]+0x00000021u,c->r[0]); // 802074E8
  c->r[4]=0u+0x00000000u; // 802074EC
  c->r[5]=0u+0x00000000u; // 802074F0
  c->lr=0x802074F8u; f_8010BE30(c); // 802074F4
  c->r[3]=c->r[31]+0x00000040u; // 802074F8
  c->lr=0x80207500u; f_8010BF74(c); // 802074FC
  c->r[0]=c->r[0]|0x00000000u; // 80207500
  c->r[0]=R32(c->r[1]+0x00000000u); // 80207504
  c->r[1]=R32(c->r[31]+0x00000054u); // 80207508
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020750C
L_80207510:;
  c->r[0]=0u+0xFFFFFFFFu; // 80207510
  c->r[3]=c->r[31]+0x00000020u; // 80207514
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80207518
  c->lr=0x80207520u; f_8011B888(c); // 8020751C
  c->r[10]=c->r[31]|c->r[31]; // 80207520
  c->r[3]=c->r[30]|c->r[30]; // 80207524
  c->r[11]=c->r[10]+0x00000070u; // 80207528
  c->lr=0x80207530u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020752C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80207530
  c->r[0]=R32(c->r[10]+0x00000004u); // 80207534
  c->r[1]=c->r[10]|c->r[10]; // 80207538
  c->lr=c->r[0]; // 8020753C
  return; // 80207540
}

// fn_80207544
void f_80207544(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000004u); // 80207544
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207548
  cmps(c,0,(int32_t)c->r[5],0); // 8020754C
  W32(c->r[3]+0x00000004u,c->r[5]); // 80207550
  W32(c->r[3]+0x00000000u,c->r[0]); // 80207554
  if (crb(c,2)) return; // 80207558
  c->r[4]=R32(c->r[5]+0x00000004u); // 8020755C
  c->r[0]=c->r[4]+0x00000001u; // 80207560
  W32(c->r[5]+0x00000004u,c->r[0]); // 80207564
  return; // 80207568
}

// fn_8020756C
void f_8020756C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020756C
  c->r[0]=c->lr; // 80207570
  W32(c->r[1]+0x00000084u,c->r[0]); // 80207574
  c->r[11]=c->r[1]+0x00000080u; // 80207578
  c->lr=0x80207580u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020757C
  c->r[31]=c->r[1]|c->r[1]; // 80207580
  c->r[30]=c->r[3]|c->r[3]; // 80207584
  c->r[26]=c->r[5]|c->r[5]; // 80207588
  c->r[25]=c->r[6]|c->r[6]; // 8020758C
  c->r[3]=c->r[31]+0x00000020u; // 80207590
  c->r[4]=c->r[30]|c->r[30]; // 80207594
  c->lr=0x8020759Cu; f_8011B710(c); // 80207598
  c->r[0]=R8(c->r[31]+0x00000020u); // 8020759C
  W32(c->r[31]+0x00000054u,c->r[1]); // 802075A0
  cmps(c,0,(int32_t)c->r[0],0); // 802075A4
  if (crb(c,2)) { goto L_802076C4; } // 802075A8
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 802075AC
  c->r[3]=c->r[31]+0x00000018u; // 802075B0
  c->r[4]=R32(c->r[30]+0x00000000u); // 802075B4
  c->lr=0x802075BCu; f_8011B6E4(c); // 802075B8
  c->r[3]=c->r[31]+0x00000018u; // 802075BC
  c->lr=0x802075C4u; f_80207794(c); // 802075C0
  c->r[0]=0u+0xFFFFFFFFu; // 802075C4
  c->r[27]=c->r[3]|c->r[3]; // 802075C8
  c->r[3]=c->r[31]+0x00000018u; // 802075CC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802075D0
  c->lr=0x802075D8u; f_8011B300(c); // 802075D4
  c->r[28]=R32(c->r[30]+0x00000000u); // 802075D8
  c->r[4]=c->r[30]|c->r[30]; // 802075DC
  c->r[3]=c->r[31]+0x00000010u; // 802075E0
  c->r[0]=R8(c->r[28]+0x00000038u); // 802075E4
  c->r[29]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802075E8
  c->lr=0x802075F0u; f_802050E0(c); // 802075EC
  c->r[0]=R32(c->r[31]+0x00000010u); // 802075F0
  c->r[3]=c->r[27]|c->r[27]; // 802075F4
  c->r[5]=c->r[28]|c->r[28]; // 802075F8
  c->r[8]=c->r[25]|c->r[25]; // 802075FC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80207600
  c->r[7]=c->r[26]|c->r[26]; // 80207604
  c->r[4]=c->r[31]+0x0000000Cu; // 80207608
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 8020760C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80207610
  c->r[12]=R32(c->r[12]+0x00000018u); // 80207614
  c->ctr=c->r[12]; // 80207618
  if (true) { c->lr=0x80207620u; dispatch(c,c->ctr); } // 8020761C
  c->r[0]=cntlz(c->r[3]); // 80207620
  W32(c->r[31]+0x00000008u,c->r[3]); // 80207624
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 80207628
  W32(c->r[31]+0x00000014u,c->r[3]); // 8020762C
  goto L_8020767C; // 80207630
  c->r[3]=R32(c->r[30]+0x00000000u); // 80207634
  c->r[4]=0u+0x00000001u; // 80207638
  c->r[3]=c->r[3]+0x00000032u; // 8020763C
  c->lr=0x80207644u; f_80204E50(c); // 80207640
  c->r[3]=R32(c->r[30]+0x00000000u); // 80207644
  c->r[0]=R8(c->r[3]+0x00000033u); // 80207648
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020764C
  if (crb(c,2)) { goto L_80207664; } // 80207650
  c->r[3]=0u+0x00000000u; // 80207654
  c->r[4]=0u+0x00000000u; // 80207658
  c->r[5]=0u+0x00000000u; // 8020765C
  c->lr=0x80207664u; f_8010BE30(c); // 80207660
L_80207664:;
  c->r[3]=c->r[31]+0x00000028u; // 80207664
  c->lr=0x8020766Cu; f_8010BF74(c); // 80207668
  c->r[0]=c->r[0]|0x00000000u; // 8020766C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80207670
  c->r[1]=R32(c->r[31]+0x0000003Cu); // 80207674
  W32(c->r[1]+0x00000000u,c->r[0]); // 80207678
L_8020767C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020767C
  if (crb(c,2)) { goto L_802076C4; } // 80207680
  c->r[3]=R32(c->r[30]+0x00000000u); // 80207684
  c->r[4]=0u+0x00000005u; // 80207688
  c->lr=0x80207690u; f_80204DE4(c); // 8020768C
  goto L_802076C4; // 80207690
  c->r[0]=0u+0x00000001u; // 80207694
  c->r[3]=0u+0x00000000u; // 80207698
  W8(c->r[31]+0x00000021u,c->r[0]); // 8020769C
  c->r[4]=0u+0x00000000u; // 802076A0
  c->r[5]=0u+0x00000000u; // 802076A4
  c->lr=0x802076ACu; f_8010BE30(c); // 802076A8
  c->r[3]=c->r[31]+0x00000040u; // 802076AC
  c->lr=0x802076B4u; f_8010BF74(c); // 802076B0
  c->r[0]=c->r[0]|0x00000000u; // 802076B4
  c->r[0]=R32(c->r[1]+0x00000000u); // 802076B8
  c->r[1]=R32(c->r[31]+0x00000054u); // 802076BC
  W32(c->r[1]+0x00000000u,c->r[0]); // 802076C0
L_802076C4:;
  c->r[0]=0u+0xFFFFFFFFu; // 802076C4
  c->r[3]=c->r[31]+0x00000020u; // 802076C8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802076CC
  c->lr=0x802076D4u; f_8011B888(c); // 802076D0
  c->r[10]=c->r[31]|c->r[31]; // 802076D4
  c->r[3]=c->r[30]|c->r[30]; // 802076D8
  c->r[11]=c->r[10]+0x00000080u; // 802076DC
  c->lr=0x802076E4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802076E0
  c->r[10]=R32(c->r[1]+0x00000000u); // 802076E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 802076E8
  c->r[1]=c->r[10]|c->r[10]; // 802076EC
  c->lr=c->r[0]; // 802076F0
  return; // 802076F4
}

// fn_802076F8
void f_802076F8(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 802076F8
  W32(c->r[3]+0x00000008u,c->r[5]); // 802076FC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 80207700
  return; // 80207704
}

// fn_80207708
void f_80207708(Ctx* __restrict c) {
  W32(c->r[3]+0x00000014u,c->r[4]); // 80207708
  W32(c->r[3]+0x00000010u,c->r[4]); // 8020770C
  W32(c->r[3]+0x00000018u,c->r[5]); // 80207710
  return; // 80207714
}

// fn_80207718
void f_80207718(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207718
  c->r[0]=c->lr; // 8020771C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80207720
  c->r[11]=c->r[1]+0x00000020u; // 80207724
  c->lr=0x8020772Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207728
  c->r[30]=c->r[4]|c->r[4]; // 8020772C
  c->r[29]=c->r[3]|c->r[3]; // 80207730
  c->r[31]=c->r[5]|c->r[5]; // 80207734
  c->r[4]=c->r[6]|c->r[6]; // 80207738
  c->lr=0x80207740u; f_8020731C(c); // 8020773C
  c->r[3]=c->r[29]|c->r[29]; // 80207740
  c->lr=0x80207748u; f_802039CC(c); // 80207744
  c->r[3]=c->r[29]|c->r[29]; // 80207748
  c->r[4]=c->r[31]-c->r[30]; // 8020774C
  c->lr=0x80207754u; f_80207040(c); // 80207750
  c->r[0]=R8(c->r[1]+0x00000009u); // 80207754
  c->r[3]=c->r[29]|c->r[29]; // 80207758
  c->r[6]=c->r[30]|c->r[30]; // 8020775C
  c->r[7]=c->r[31]|c->r[31]; // 80207760
  W8(c->r[1]+0x00000008u,c->r[0]); // 80207764
  c->r[8]=c->r[1]+0x00000008u; // 80207768
  c->r[4]=0u+0x00000000u; // 8020776C
  c->r[5]=0u+0x00000000u; // 80207770
  c->lr=0x80207778u; f_80203148(c); // 80207774
  c->r[11]=c->r[1]+0x00000020u; // 80207778
  c->r[3]=c->r[29]|c->r[29]; // 8020777C
  c->lr=0x80207784u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207780
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207784
  c->lr=c->r[0]; // 80207788
  c->r[1]=c->r[1]+0x00000020u; // 8020778C
  return; // 80207790
}

// fn_80207794
void f_80207794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207794
  c->r[0]=c->lr; // 80207798
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020779C
  c->r[11]=c->r[1]+0x00000020u; // 802077A0
  c->lr=0x802077A8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802077A4
  c->r[4]=0u+0x80380000u; // 802077A8
  c->r[28]=c->r[3]|c->r[3]; // 802077AC
  c->r[3]=c->r[4]+0x00002988u; // 802077B0
  c->lr=0x802077B8u; f_80207850(c); // 802077B4
  c->r[4]=R32(c->r[28]+0x00000000u); // 802077B8
  c->r[31]=c->r[3]|c->r[3]; // 802077BC
  c->r[0]=R32(c->r[4]+0x00000004u); // 802077C0
  cmpu(c,0,c->r[3],c->r[0]); // 802077C4
  if (!crb(c,0)) { goto L_802077E0; } // 802077C8
  c->r[4]=R32(c->r[4]+0x00000000u); // 802077CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802077D0
  c->r[3]=R32(c->r[4]+c->r[0]); // 802077D4
  cmps(c,0,(int32_t)c->r[3],0); // 802077D8
  if (!crb(c,2)) { goto L_80207838; } // 802077DC
L_802077E0:;
  c->r[3]=0u+0x00000008u; // 802077E0
  c->lr=0x802077E8u; f_8009228C(c); // 802077E4
  cmps(c,0,(int32_t)c->r[3],0); // 802077E8
  c->r[30]=c->r[3]|c->r[3]; // 802077EC
  if (crb(c,2)) { goto L_80207808; } // 802077F0
  c->r[0]=0u+0x00000000u; // 802077F4
  c->r[4]=0u+0x802A0000u; // 802077F8
  W32(c->r[3]+0x00000004u,c->r[0]); // 802077FC
  c->r[4]=c->r[4]+0x00003EE0u; // 80207800
  W32(c->r[3]+0x00000000u,c->r[4]); // 80207804
L_80207808:;
  c->r[3]=0u+0x80380000u; // 80207808
  c->r[29]=R32(c->r[28]+0x00000000u); // 8020780C
  c->r[3]=c->r[3]+0x00002988u; // 80207810
  c->lr=0x80207818u; f_80207850(c); // 80207814
  c->r[5]=c->r[3]|c->r[3]; // 80207818
  c->r[3]=c->r[29]|c->r[29]; // 8020781C
  c->r[4]=c->r[30]|c->r[30]; // 80207820
  c->lr=0x80207828u; f_8011BE80(c); // 80207824
  c->r[3]=R32(c->r[28]+0x00000000u); // 80207828
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8020782C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80207830
  c->r[3]=R32(c->r[3]+c->r[0]); // 80207834
L_80207838:;
  c->r[11]=c->r[1]+0x00000020u; // 80207838
  c->lr=0x80207840u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020783C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207840
  c->lr=c->r[0]; // 80207844
  c->r[1]=c->r[1]+0x00000020u; // 80207848
  return; // 8020784C
}

// fn_80207850
void f_80207850(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80207850
  cmps(c,0,(int32_t)c->r[0],0); // 80207854
  if (!crb(c,2)) { goto L_80207870; } // 80207858
  c->r[5]=0u+0x803A0000u; // 8020785C
  c->r[4]=R32(c->r[5]+0xFFFFE250u); // 80207860
  c->r[0]=c->r[4]+0x00000001u; // 80207864
  W32(c->r[5]+0xFFFFE250u,c->r[0]); // 80207868
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020786C
L_80207870:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 80207870
  return; // 80207874
}

// fn_80207878
void f_80207878(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207878
  c->r[0]=c->lr; // 8020787C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80207880
  c->r[11]=c->r[1]+0x00000020u; // 80207884
  c->lr=0x8020788Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207888
  c->r[4]=0u+0x803A0000u; // 8020788C
  c->r[28]=c->r[3]|c->r[3]; // 80207890
  c->r[3]=c->r[4]+0xFFFFE280u; // 80207894
  c->lr=0x8020789Cu; f_80207850(c); // 80207898
  c->r[4]=R32(c->r[28]+0x00000000u); // 8020789C
  c->r[31]=c->r[3]|c->r[3]; // 802078A0
  c->r[0]=R32(c->r[4]+0x00000004u); // 802078A4
  cmpu(c,0,c->r[3],c->r[0]); // 802078A8
  if (!crb(c,0)) { goto L_802078C4; } // 802078AC
  c->r[4]=R32(c->r[4]+0x00000000u); // 802078B0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802078B4
  c->r[3]=R32(c->r[4]+c->r[0]); // 802078B8
  cmps(c,0,(int32_t)c->r[3],0); // 802078BC
  if (!crb(c,2)) { goto L_80207918; } // 802078C0
L_802078C4:;
  c->r[3]=0u+0x00000018u; // 802078C4
  c->lr=0x802078CCu; f_8009228C(c); // 802078C8
  cmps(c,0,(int32_t)c->r[3],0); // 802078CC
  c->r[30]=c->r[3]|c->r[3]; // 802078D0
  if (crb(c,2)) { goto L_802078E8; } // 802078D4
  c->r[4]=0u+0x00000000u; // 802078D8
  c->r[5]=0u+0x00000000u; // 802078DC
  c->r[6]=0u+0x00000000u; // 802078E0
  c->lr=0x802078E8u; f_8011C6F0(c); // 802078E4
L_802078E8:;
  c->r[3]=0u+0x803A0000u; // 802078E8
  c->r[29]=R32(c->r[28]+0x00000000u); // 802078EC
  c->r[3]=c->r[3]+0xFFFFE280u; // 802078F0
  c->lr=0x802078F8u; f_80207850(c); // 802078F4
  c->r[5]=c->r[3]|c->r[3]; // 802078F8
  c->r[3]=c->r[29]|c->r[29]; // 802078FC
  c->r[4]=c->r[30]|c->r[30]; // 80207900
  c->lr=0x80207908u; f_8011BE80(c); // 80207904
  c->r[3]=R32(c->r[28]+0x00000000u); // 80207908
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8020790C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80207910
  c->r[3]=R32(c->r[3]+c->r[0]); // 80207914
L_80207918:;
  c->r[11]=c->r[1]+0x00000020u; // 80207918
  c->lr=0x80207920u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020791C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80207920
  c->lr=c->r[0]; // 80207924
  c->r[1]=c->r[1]+0x00000020u; // 80207928
  return; // 8020792C
}

// fn_80207930
void f_80207930(Ctx* __restrict c) {
  return; // 80207930
}

// fn_80207934
void f_80207934(Ctx* __restrict c) {
  c->r[4]=0u+0x80290000u; // 80207934
  c->r[4]=c->r[4]+0x00006158u; // 80207938
  W32(c->r[3]+0x00000000u,c->r[4]); // 8020793C
  return; // 80207940
}

// fn_80207944
void f_80207944(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207944
  c->r[0]=c->lr; // 80207948
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020794C
  c->r[11]=c->r[1]+0x00000020u; // 80207950
  c->lr=0x80207958u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207954
  c->r[31]=0u+0x802A0000u; // 80207958
  c->r[29]=c->r[4]|c->r[4]; // 8020795C
  c->r[31]=c->r[31]+0x00003408u; // 80207960
  c->r[3]=0u+0x00000006u; // 80207964
  c->r[5]=c->r[29]|c->r[29]; // 80207968
  c->r[7]=c->r[29]|c->r[29]; // 8020796C
  c->r[4]=c->r[31]+0x00000419u; // 80207970
  c->r[6]=0u+0x00000001u; // 80207974
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207978
  c->lr=0x80207980u; f_8020B328(c); // 8020797C
  c->r[3]=c->r[29]|c->r[29]; // 80207980
  c->lr=0x80207988u; f_8020EAC4(c); // 80207984
  cmps(c,0,(int32_t)c->r[3],0); // 80207988
  c->r[30]=c->r[3]|c->r[3]; // 8020798C
  if (!crb(c,2)) { goto L_802079CC; } // 80207990
  c->r[5]=c->r[29]|c->r[29]; // 80207994
  c->r[7]=c->r[29]|c->r[29]; // 80207998
  c->r[4]=c->r[31]+0x00000445u; // 8020799C
  c->r[3]=0u+0x00000001u; // 802079A0
  c->r[6]=0u+0x00000001u; // 802079A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802079A8
  c->lr=0x802079B0u; f_8020B328(c); // 802079AC
  c->r[3]=c->r[1]+0x00000008u; // 802079B0
  c->lr=0x802079B8u; f_80207934(c); // 802079B4
  c->r[5]=0u+0x80110000u; // 802079B8
  c->r[4]=c->r[3]|c->r[3]; // 802079BC
  c->r[3]=c->r[31]+0x0000047Eu; // 802079C0
  c->r[5]=c->r[5]+0xFFFF9768u; // 802079C4
  c->lr=0x802079CCu; f_8010BE30(c); // 802079C8
L_802079CC:;
  c->r[5]=c->r[30]|c->r[30]; // 802079CC
  c->r[4]=c->r[31]+0x000004A0u; // 802079D0
  c->r[3]=0u+0x00000006u; // 802079D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802079D8
  c->lr=0x802079E0u; f_8020B328(c); // 802079DC
  c->r[11]=c->r[1]+0x00000020u; // 802079E0
  c->r[3]=c->r[30]|c->r[30]; // 802079E4
  c->lr=0x802079ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802079E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802079EC
  c->lr=c->r[0]; // 802079F0
  c->r[1]=c->r[1]+0x00000020u; // 802079F4
  return; // 802079F8
}

// fn_802079FC
void f_802079FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802079FC
  c->r[0]=c->lr; // 80207A00
  cmps(c,0,(int32_t)c->r[3],0); // 80207A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207A08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207A0C
  c->r[31]=c->r[3]|c->r[3]; // 80207A10
  if (crb(c,2)) { goto L_80207A24; } // 80207A14
  cmps(c,0,(int32_t)c->r[4],0); // 80207A18
  if (!crb(c,1)) { goto L_80207A24; } // 80207A1C
  c->lr=0x80207A24u; f_8009230C(c); // 80207A20
L_80207A24:;
  c->r[3]=c->r[31]|c->r[31]; // 80207A24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207A28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207A2C
  c->lr=c->r[0]; // 80207A30
  c->r[1]=c->r[1]+0x00000010u; // 80207A34
  return; // 80207A38
}

// fn_80207A3C
void f_80207A3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207A3C
  c->r[0]=c->lr; // 80207A40
  W32(c->r[1]+0x00000064u,c->r[0]); // 80207A44
  c->r[11]=c->r[1]+0x00000060u; // 80207A48
  c->lr=0x80207A50u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207A4C
  c->r[0]=R16(c->r[5]+0x00000030u); // 80207A50
  c->r[26]=c->r[4]|c->r[4]; // 80207A54
  c->r[27]=c->r[5]|c->r[5]; // 80207A58
  c->r[28]=c->r[6]|c->r[6]; // 80207A5C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80207A60
  c->r[30]=c->r[7]|c->r[7]; // 80207A64
  if (crb(c,2)) { goto L_80207B50; } // 80207A68
  c->r[4]=c->r[27]|c->r[27]; // 80207A6C
  c->r[3]=c->r[1]+0x00000010u; // 80207A70
  c->lr=0x80207A78u; f_8011B6E4(c); // 80207A74
  c->r[3]=c->r[1]+0x00000010u; // 80207A78
  c->lr=0x80207A80u; f_8020A6C0(c); // 80207A7C
  c->r[29]=c->r[3]|c->r[3]; // 80207A80
  c->r[3]=c->r[1]+0x00000010u; // 80207A84
  c->r[4]=0u+0xFFFFFFFFu; // 80207A88
  c->lr=0x80207A90u; f_8011B300(c); // 80207A8C
  cmps(c,0,(int32_t)c->r[30],0); // 80207A90
  c->r[31]=0u+0x00000000u; // 80207A94
  c->r[30]=0u+0x00000000u; // 80207A98
  if (crb(c,2)) { goto L_80207AB8; } // 80207A9C
  c->r[4]=c->r[29]|c->r[29]; // 80207AA0
  c->r[3]=c->r[1]+0x00000024u; // 80207AA4
  c->lr=0x80207AACu; f_80208EAC(c); // 80207AA8
  c->r[4]=c->r[1]+0x00000024u; // 80207AAC
  c->r[31]=0u+0x00000001u; // 80207AB0
  goto L_80207ACC; // 80207AB4
L_80207AB8:;
  c->r[4]=c->r[29]|c->r[29]; // 80207AB8
  c->r[3]=c->r[1]+0x00000018u; // 80207ABC
  c->lr=0x80207AC4u; f_80208EBC(c); // 80207AC0
  c->r[30]=0u+0x00000001u; // 80207AC4
  c->r[4]=c->r[1]+0x00000018u; // 80207AC8
L_80207ACC:;
  c->r[3]=c->r[1]+0x00000030u; // 80207ACC
  c->lr=0x80207AD4u; f_80033A10(c); // 80207AD0
  cmps(c,0,(int32_t)c->r[30],0); // 80207AD4
  if (crb(c,2)) { goto L_80207AE8; } // 80207AD8
  c->r[3]=c->r[1]+0x00000018u; // 80207ADC
  c->r[4]=0u+0xFFFFFFFFu; // 80207AE0
  c->lr=0x80207AE8u; f_8000C978(c); // 80207AE4
L_80207AE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80207AE8
  if (crb(c,2)) { goto L_80207AFC; } // 80207AEC
  c->r[3]=c->r[1]+0x00000024u; // 80207AF0
  c->r[4]=0u+0xFFFFFFFFu; // 80207AF4
  c->lr=0x80207AFCu; f_8000C978(c); // 80207AF8
L_80207AFC:;
  c->r[3]=c->r[1]+0x00000030u; // 80207AFC
  c->lr=0x80207B04u; f_80208EDC(c); // 80207B00
  c->r[0]=R32(c->r[26]+0x00000000u); // 80207B04
  c->r[30]=c->r[3]|c->r[3]; // 80207B08
  c->r[3]=c->r[1]+0x00000030u; // 80207B0C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80207B10
  c->lr=0x80207B18u; f_80031DBC(c); // 80207B14
  c->r[9]=c->r[3]|c->r[3]; // 80207B18
  c->r[4]=c->r[27]|c->r[27]; // 80207B1C
  c->r[8]=c->r[30]|c->r[30]; // 80207B20
  c->r[3]=c->r[1]+0x0000000Cu; // 80207B24
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80207B28
  c->r[6]=0u+0x00000000u; // 80207B2C
  c->r[7]=0u+0x00000000u; // 80207B30
  c->lr=0x80207B38u; f_80204E60(c); // 80207B34
  c->r[31]=c->r[3]|c->r[3]; // 80207B38
  c->r[3]=c->r[1]+0x00000030u; // 80207B3C
  c->r[4]=0u+0xFFFFFFFFu; // 80207B40
  c->lr=0x80207B48u; f_8000C978(c); // 80207B44
  c->r[3]=c->r[31]|c->r[31]; // 80207B48
  goto L_80207B70; // 80207B4C
L_80207B50:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207B50
  c->r[4]=c->r[1]+0x00000008u; // 80207B54
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80207B58
  W32(c->r[1]+0x00000008u,c->r[0]); // 80207B5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80207B60
  c->r[12]=R32(c->r[12]+0x00000010u); // 80207B64
  c->ctr=c->r[12]; // 80207B68
  if (true) { c->lr=0x80207B70u; dispatch(c,c->ctr); } // 80207B6C
L_80207B70:;
  c->r[11]=c->r[1]+0x00000060u; // 80207B70
  c->lr=0x80207B78u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207B74
  c->r[0]=R32(c->r[1]+0x00000064u); // 80207B78
  c->lr=c->r[0]; // 80207B7C
  c->r[1]=c->r[1]+0x00000060u; // 80207B80
  return; // 80207B84
}

// fn_80207B88
void f_80207B88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207B88
  c->r[0]=c->lr; // 80207B8C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80207B90
  c->r[11]=c->r[1]+0x00000060u; // 80207B94
  c->lr=0x80207B9Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207B98
  c->r[0]=R16(c->r[5]+0x00000030u); // 80207B9C
  c->r[26]=c->r[5]|c->r[5]; // 80207BA0
  c->r[27]=c->r[6]|c->r[6]; // 80207BA4
  c->r[28]=c->r[7]|c->r[7]; // 80207BA8
  c->r[0]=c->r[0]&0x0000004Au; cr0(c,c->r[0]); // 80207BAC
  cmps(c,0,(int32_t)c->r[0],64); // 80207BB0
  if (crb(c,2)) { goto L_80207BC8; } // 80207BB4
  if (!crb(c,0)) { goto L_80207C10; } // 80207BB8
  cmps(c,0,(int32_t)c->r[0],8); // 80207BBC
  if (crb(c,2)) { goto L_80207BEC; } // 80207BC0
  goto L_80207C10; // 80207BC4
L_80207BC8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207BC8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80207BCC
  c->r[4]=c->r[26]|c->r[26]; // 80207BD0
  c->r[6]=c->r[28]|c->r[28]; // 80207BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207BD8
  c->r[3]=c->r[1]+0x00000014u; // 80207BDC
  c->r[7]=0u+0x00000000u; // 80207BE0
  c->lr=0x80207BE8u; f_8020A028(c); // 80207BE4
  goto L_80207CDC; // 80207BE8
L_80207BEC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207BEC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80207BF0
  c->r[4]=c->r[26]|c->r[26]; // 80207BF4
  c->r[6]=c->r[28]|c->r[28]; // 80207BF8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80207BFC
  c->r[3]=c->r[1]+0x00000010u; // 80207C00
  c->r[7]=0u+0x00000000u; // 80207C04
  c->lr=0x80207C0Cu; f_80209E1C(c); // 80207C08
  goto L_80207CDC; // 80207C0C
L_80207C10:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 80207C10
  c->r[4]=c->r[26]|c->r[26]; // 80207C14
  c->r[3]=c->r[1]+0x00000018u; // 80207C18
  c->lr=0x80207C20u; f_8011B6E4(c); // 80207C1C
  c->r[3]=c->r[1]+0x00000018u; // 80207C20
  c->lr=0x80207C28u; f_80207878(c); // 80207C24
  c->r[29]=c->r[3]|c->r[3]; // 80207C28
  c->r[3]=c->r[1]+0x00000018u; // 80207C2C
  c->r[4]=0u+0xFFFFFFFFu; // 80207C30
  c->lr=0x80207C38u; f_8011B300(c); // 80207C34
  cmps(c,0,(int32_t)c->r[28],0); // 80207C38
  c->r[30]=0u+0x00000000u; // 80207C3C
  if (crb(c,0)) { goto L_80207C74; } // 80207C40
  c->r[0]=R16(c->r[26]+0x00000030u); // 80207C44
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 80207C48
  if (crb(c,2)) { goto L_80207C74; } // 80207C4C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80207C50
  c->r[3]=c->r[29]|c->r[29]; // 80207C54
  c->r[4]=0u+0x0000002Bu; // 80207C58
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80207C5C
  c->ctr=c->r[12]; // 80207C60
  if (true) { c->lr=0x80207C68u; dispatch(c,c->ctr); } // 80207C64
  W8(c->r[1]+0x00000008u,c->r[3]); // 80207C68
  c->r[30]=0u+0x00000001u; // 80207C6C
  goto L_80207CA0; // 80207C70
L_80207C74:;
  cmps(c,0,(int32_t)c->r[28],0); // 80207C74
  if (!crb(c,0)) { goto L_80207CA0; } // 80207C78
  c->r[12]=R32(c->r[29]+0x00000000u); // 80207C7C
  c->r[3]=c->r[29]|c->r[29]; // 80207C80
  c->r[30]=0u+0x00000001u; // 80207C84
  c->r[4]=0u+0x0000002Du; // 80207C88
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80207C8C
  c->ctr=c->r[12]; // 80207C90
  if (true) { c->lr=0x80207C98u; dispatch(c,c->ctr); } // 80207C94
  W8(c->r[1]+0x00000008u,c->r[3]); // 80207C98
  c->r[28]=0u-c->r[28]; // 80207C9C
L_80207CA0:;
  c->r[3]=c->r[26]|c->r[26]; // 80207CA0
  c->r[4]=c->r[28]|c->r[28]; // 80207CA4
  c->r[6]=c->r[29]|c->r[29]; // 80207CA8
  c->r[5]=c->r[1]+0x00000020u; // 80207CAC
  c->r[7]=0u+0x00000000u; // 80207CB0
  c->lr=0x80207CB8u; f_8020A3B4(c); // 80207CB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207CB8
  c->r[9]=c->r[3]|c->r[3]; // 80207CBC
  c->r[4]=c->r[26]|c->r[26]; // 80207CC0
  c->r[7]=c->r[30]|c->r[30]; // 80207CC4
  c->r[3]=c->r[1]+0x0000000Cu; // 80207CC8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[27]; // 80207CCC
  c->r[6]=c->r[1]+0x00000008u; // 80207CD0
  c->r[8]=c->r[1]+0x00000020u; // 80207CD4
  c->lr=0x80207CDCu; f_80204E60(c); // 80207CD8
L_80207CDC:;
  c->r[11]=c->r[1]+0x00000060u; // 80207CDC
  c->lr=0x80207CE4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207CE0
  c->r[0]=R32(c->r[1]+0x00000064u); // 80207CE4
  c->lr=c->r[0]; // 80207CE8
  c->r[1]=c->r[1]+0x00000060u; // 80207CEC
  return; // 80207CF0
}

// fn_80207CF4
void f_80207CF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207CF4
  c->r[0]=c->lr; // 80207CF8
  W32(c->r[1]+0x00000064u,c->r[0]); // 80207CFC
  c->r[11]=c->r[1]+0x00000060u; // 80207D00
  c->lr=0x80207D08u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207D04
  c->r[0]=R16(c->r[5]+0x00000030u); // 80207D08
  c->r[27]=c->r[5]|c->r[5]; // 80207D0C
  c->r[28]=c->r[6]|c->r[6]; // 80207D10
  c->r[29]=c->r[7]|c->r[7]; // 80207D14
  c->r[0]=c->r[0]&0x0000004Au; cr0(c,c->r[0]); // 80207D18
  cmps(c,0,(int32_t)c->r[0],64); // 80207D1C
  if (crb(c,2)) { goto L_80207D34; } // 80207D20
  if (!crb(c,0)) { goto L_80207D7C; } // 80207D24
  cmps(c,0,(int32_t)c->r[0],8); // 80207D28
  if (crb(c,2)) { goto L_80207D58; } // 80207D2C
  goto L_80207D7C; // 80207D30
L_80207D34:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207D34
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80207D38
  c->r[4]=c->r[27]|c->r[27]; // 80207D3C
  c->r[6]=c->r[29]|c->r[29]; // 80207D40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207D44
  c->r[3]=c->r[1]+0x00000014u; // 80207D48
  c->r[7]=0u+0x00000000u; // 80207D4C
  c->lr=0x80207D54u; f_8020A028(c); // 80207D50
  goto L_80207DE0; // 80207D54
L_80207D58:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207D58
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80207D5C
  c->r[4]=c->r[27]|c->r[27]; // 80207D60
  c->r[6]=c->r[29]|c->r[29]; // 80207D64
  W32(c->r[1]+0x00000010u,c->r[0]); // 80207D68
  c->r[3]=c->r[1]+0x00000010u; // 80207D6C
  c->r[7]=0u+0x00000000u; // 80207D70
  c->lr=0x80207D78u; f_80209E1C(c); // 80207D74
  goto L_80207DE0; // 80207D78
L_80207D7C:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 80207D7C
  c->r[4]=c->r[27]|c->r[27]; // 80207D80
  c->r[3]=c->r[1]+0x00000018u; // 80207D84
  c->lr=0x80207D8Cu; f_8011B6E4(c); // 80207D88
  c->r[3]=c->r[1]+0x00000018u; // 80207D8C
  c->lr=0x80207D94u; f_80207878(c); // 80207D90
  c->r[30]=c->r[3]|c->r[3]; // 80207D94
  c->r[3]=c->r[1]+0x00000018u; // 80207D98
  c->r[4]=0u+0xFFFFFFFFu; // 80207D9C
  c->lr=0x80207DA4u; f_8011B300(c); // 80207DA0
  c->r[3]=c->r[27]|c->r[27]; // 80207DA4
  c->r[4]=c->r[29]|c->r[29]; // 80207DA8
  c->r[6]=c->r[30]|c->r[30]; // 80207DAC
  c->r[5]=c->r[1]+0x00000020u; // 80207DB0
  c->r[7]=0u+0x00000000u; // 80207DB4
  c->lr=0x80207DBCu; f_8020A3B4(c); // 80207DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207DBC
  c->r[9]=c->r[3]|c->r[3]; // 80207DC0
  c->r[4]=c->r[27]|c->r[27]; // 80207DC4
  c->r[3]=c->r[1]+0x0000000Cu; // 80207DC8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80207DCC
  c->r[6]=c->r[1]+0x00000008u; // 80207DD0
  c->r[8]=c->r[1]+0x00000020u; // 80207DD4
  c->r[7]=0u+0x00000000u; // 80207DD8
  c->lr=0x80207DE0u; f_80204E60(c); // 80207DDC
L_80207DE0:;
  c->r[11]=c->r[1]+0x00000060u; // 80207DE0
  c->lr=0x80207DE8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207DE4
  c->r[0]=R32(c->r[1]+0x00000064u); // 80207DE8
  c->lr=c->r[0]; // 80207DEC
  c->r[1]=c->r[1]+0x00000060u; // 80207DF0
  return; // 80207DF4
}

// fn_80207DF8
void f_80207DF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207DF8
  c->r[0]=c->lr; // 80207DFC
  W32(c->r[1]+0x00000074u,c->r[0]); // 80207E00
  c->r[11]=c->r[1]+0x00000070u; // 80207E04
  c->lr=0x80207E0Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207E08
  c->r[0]=R16(c->r[5]+0x00000030u); // 80207E0C
  c->r[30]=c->r[5]|c->r[5]; // 80207E10
  c->r[31]=c->r[6]|c->r[6]; // 80207E14
  c->r[26]=c->r[7]|c->r[7]; // 80207E18
  c->r[0]=c->r[0]&0x0000004Au; cr0(c,c->r[0]); // 80207E1C
  c->r[25]=c->r[8]|c->r[8]; // 80207E20
  cmps(c,0,(int32_t)c->r[0],64); // 80207E24
  if (crb(c,2)) { goto L_80207E3C; } // 80207E28
  if (!crb(c,0)) { goto L_80207E7C; } // 80207E2C
  cmps(c,0,(int32_t)c->r[0],8); // 80207E30
  if (crb(c,2)) { goto L_80207E5C; } // 80207E34
  goto L_80207E7C; // 80207E38
L_80207E3C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207E3C
  c->r[4]=c->r[30]|c->r[30]; // 80207E40
  c->r[3]=c->r[1]+0x00000014u; // 80207E44
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80207E48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207E4C
  c->r[9]=0u+0x00000000u; // 80207E50
  c->lr=0x80207E58u; f_80209F34(c); // 80207E54
  goto L_80207F7C; // 80207E58
L_80207E5C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207E5C
  c->r[4]=c->r[30]|c->r[30]; // 80207E60
  c->r[3]=c->r[1]+0x00000010u; // 80207E64
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80207E68
  W32(c->r[1]+0x00000010u,c->r[0]); // 80207E6C
  c->r[9]=0u+0x00000000u; // 80207E70
  c->lr=0x80207E78u; f_80209CFC(c); // 80207E74
  goto L_80207F7C; // 80207E78
L_80207E7C:;
  c->r[29]=R32(c->r[4]+0x00000000u); // 80207E7C
  c->r[4]=c->r[30]|c->r[30]; // 80207E80
  c->r[3]=c->r[1]+0x00000018u; // 80207E84
  c->lr=0x80207E8Cu; f_8011B6E4(c); // 80207E88
  c->r[3]=c->r[1]+0x00000018u; // 80207E8C
  c->lr=0x80207E94u; f_80207878(c); // 80207E90
  c->r[27]=c->r[3]|c->r[3]; // 80207E94
  c->r[3]=c->r[1]+0x00000018u; // 80207E98
  c->r[4]=0u+0xFFFFFFFFu; // 80207E9C
  c->lr=0x80207EA4u; f_8011B300(c); // 80207EA0
  c->r[28]=0u+0x00000000u; // 80207EA4
  c->r[0]=c->r[26]^0x80000000u; // 80207EA8
  c->r[4]=c->r[28]^0x80000000u; // 80207EAC
  c->r[3]=addc(c,~c->r[28],c->r[25],1); // 80207EB0
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80207EB4
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80207EB8
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80207EBC
  if (!crb(c,2)) { goto L_80207EF4; } // 80207EC0
  c->r[0]=R16(c->r[30]+0x00000030u); // 80207EC4
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 80207EC8
  if (crb(c,2)) { goto L_80207EF4; } // 80207ECC
  c->r[12]=R32(c->r[27]+0x00000000u); // 80207ED0
  c->r[3]=c->r[27]|c->r[27]; // 80207ED4
  c->r[4]=0u+0x0000002Bu; // 80207ED8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80207EDC
  c->ctr=c->r[12]; // 80207EE0
  if (true) { c->lr=0x80207EE8u; dispatch(c,c->ctr); } // 80207EE4
  W8(c->r[1]+0x00000008u,c->r[3]); // 80207EE8
  c->r[28]=0u+0x00000001u; // 80207EEC
  goto L_80207F3C; // 80207EF0
L_80207EF4:;
  c->r[3]=0u+0x00000000u; // 80207EF4
  c->r[0]=c->r[26]^0x80000000u; // 80207EF8
  c->r[4]=c->r[3]^0x80000000u; // 80207EFC
  c->r[3]=addc(c,~c->r[3],c->r[25],1); // 80207F00
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80207F04
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80207F08
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80207F0C
  if (crb(c,2)) { goto L_80207F3C; } // 80207F10
  c->r[12]=R32(c->r[27]+0x00000000u); // 80207F14
  c->r[3]=c->r[27]|c->r[27]; // 80207F18
  c->r[28]=0u+0x00000001u; // 80207F1C
  c->r[4]=0u+0x0000002Du; // 80207F20
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80207F24
  c->ctr=c->r[12]; // 80207F28
  if (true) { c->lr=0x80207F30u; dispatch(c,c->ctr); } // 80207F2C
  c->r[25]=addc(c,~c->r[25],0x00000000u,1); // 80207F30
  W8(c->r[1]+0x00000008u,c->r[3]); // 80207F34
  c->r[26]=addc(c,~c->r[26],0,c->xer_ca); // 80207F38
L_80207F3C:;
  c->r[3]=c->r[30]|c->r[30]; // 80207F3C
  c->r[6]=c->r[25]|c->r[25]; // 80207F40
  c->r[5]=c->r[26]|c->r[26]; // 80207F44
  c->r[8]=c->r[27]|c->r[27]; // 80207F48
  c->r[7]=c->r[1]+0x00000020u; // 80207F4C
  c->r[9]=0u+0x00000000u; // 80207F50
  c->lr=0x80207F58u; f_8020A114(c); // 80207F54
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80207F58
  c->r[9]=c->r[3]|c->r[3]; // 80207F5C
  c->r[4]=c->r[30]|c->r[30]; // 80207F60
  c->r[7]=c->r[28]|c->r[28]; // 80207F64
  c->r[3]=c->r[1]+0x0000000Cu; // 80207F68
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80207F6C
  c->r[6]=c->r[1]+0x00000008u; // 80207F70
  c->r[8]=c->r[1]+0x00000020u; // 80207F74
  c->lr=0x80207F7Cu; f_80204E60(c); // 80207F78
L_80207F7C:;
  c->r[11]=c->r[1]+0x00000070u; // 80207F7C
  c->lr=0x80207F84u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80207F80
  c->r[0]=R32(c->r[1]+0x00000074u); // 80207F84
  c->lr=c->r[0]; // 80207F88
  c->r[1]=c->r[1]+0x00000070u; // 80207F8C
  return; // 80207F90
}

// fn_80207F94
void f_80207F94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207F94
  c->r[0]=c->lr; // 80207F98
  W32(c->r[1]+0x00000064u,c->r[0]); // 80207F9C
  c->r[11]=c->r[1]+0x00000060u; // 80207FA0
  c->lr=0x80207FA8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207FA4
  c->r[0]=R16(c->r[5]+0x00000030u); // 80207FA8
  c->r[26]=c->r[5]|c->r[5]; // 80207FAC
  c->r[27]=c->r[6]|c->r[6]; // 80207FB0
  c->r[29]=c->r[7]|c->r[7]; // 80207FB4
  c->r[0]=c->r[0]&0x0000004Au; cr0(c,c->r[0]); // 80207FB8
  c->r[28]=c->r[8]|c->r[8]; // 80207FBC
  cmps(c,0,(int32_t)c->r[0],64); // 80207FC0
  if (crb(c,2)) { goto L_80207FD8; } // 80207FC4
  if (!crb(c,0)) { goto L_80208018; } // 80207FC8
  cmps(c,0,(int32_t)c->r[0],8); // 80207FCC
  if (crb(c,2)) { goto L_80207FF8; } // 80207FD0
  goto L_80208018; // 80207FD4
L_80207FD8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207FD8
  c->r[4]=c->r[26]|c->r[26]; // 80207FDC
  c->r[3]=c->r[1]+0x00000014u; // 80207FE0
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80207FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207FE8
  c->r[9]=0u+0x00000000u; // 80207FEC
  c->lr=0x80207FF4u; f_80209F34(c); // 80207FF0
  goto L_80208080; // 80207FF4
L_80207FF8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80207FF8
  c->r[4]=c->r[26]|c->r[26]; // 80207FFC
  c->r[3]=c->r[1]+0x00000010u; // 80208000
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80208004
  W32(c->r[1]+0x00000010u,c->r[0]); // 80208008
  c->r[9]=0u+0x00000000u; // 8020800C
  c->lr=0x80208014u; f_80209CFC(c); // 80208010
  goto L_80208080; // 80208014
L_80208018:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 80208018
  c->r[4]=c->r[26]|c->r[26]; // 8020801C
  c->r[3]=c->r[1]+0x00000018u; // 80208020
  c->lr=0x80208028u; f_8011B6E4(c); // 80208024
  c->r[3]=c->r[1]+0x00000018u; // 80208028
  c->lr=0x80208030u; f_80207878(c); // 8020802C
  c->r[30]=c->r[3]|c->r[3]; // 80208030
  c->r[3]=c->r[1]+0x00000018u; // 80208034
  c->r[4]=0u+0xFFFFFFFFu; // 80208038
  c->lr=0x80208040u; f_8011B300(c); // 8020803C
  c->r[3]=c->r[26]|c->r[26]; // 80208040
  c->r[6]=c->r[28]|c->r[28]; // 80208044
  c->r[5]=c->r[29]|c->r[29]; // 80208048
  c->r[8]=c->r[30]|c->r[30]; // 8020804C
  c->r[7]=c->r[1]+0x00000020u; // 80208050
  c->r[9]=0u+0x00000000u; // 80208054
  c->lr=0x8020805Cu; f_8020A114(c); // 80208058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020805C
  c->r[9]=c->r[3]|c->r[3]; // 80208060
  c->r[4]=c->r[26]|c->r[26]; // 80208064
  c->r[3]=c->r[1]+0x0000000Cu; // 80208068
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[27]; // 8020806C
  c->r[6]=c->r[1]+0x00000008u; // 80208070
  c->r[8]=c->r[1]+0x00000020u; // 80208074
  c->r[7]=0u+0x00000000u; // 80208078
  c->lr=0x80208080u; f_80204E60(c); // 8020807C
L_80208080:;
  c->r[11]=c->r[1]+0x00000060u; // 80208080
  c->lr=0x80208088u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80208084
  c->r[0]=R32(c->r[1]+0x00000064u); // 80208088
  c->lr=c->r[0]; // 8020808C
  c->r[1]=c->r[1]+0x00000060u; // 80208090
  return; // 80208094
}

// fn_80208098
void f_80208098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208098
  c->r[0]=c->lr; // 8020809C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 802080A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802080A4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802080A8
  c->r[4]=c->r[1]+0x00000008u; // 802080AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802080B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802080B4
  c->r[12]=R32(c->r[12]+0x00000024u); // 802080B8
  c->ctr=c->r[12]; // 802080BC
  if (true) { c->lr=0x802080C4u; dispatch(c,c->ctr); } // 802080C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802080C4
  c->lr=c->r[0]; // 802080C8
  c->r[1]=c->r[1]+0x00000010u; // 802080CC
  return; // 802080D0
}

// fn_802080D4
void f_802080D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802080D4
  c->r[0]=c->lr; // 802080D8
  W32(c->r[1]+0x00000114u,c->r[0]); // 802080DC
  c->r[11]=c->r[1]+0x00000108u; // 802080E0
  {uint32_t ea=c->r[1]+0x00000108u; WF64(ea,c->f[31]);} // 802080E4
  c->lr=0x802080ECu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802080E8
  c->f[31]=c->f[1]; // 802080EC
  c->r[25]=c->r[5]|c->r[5]; // 802080F0
  c->r[24]=c->r[4]|c->r[4]; // 802080F4
  c->r[26]=c->r[6]|c->r[6]; // 802080F8
  c->r[4]=c->r[25]|c->r[25]; // 802080FC
  c->r[3]=c->r[1]+0x00000054u; // 80208100
  c->lr=0x80208108u; f_8011B6E4(c); // 80208104
  c->r[3]=c->r[1]+0x00000054u; // 80208108
  c->lr=0x80208110u; f_80207878(c); // 8020810C
  c->r[22]=c->r[3]|c->r[3]; // 80208110
  c->r[3]=c->r[1]+0x00000054u; // 80208114
  c->r[4]=0u+0xFFFFFFFFu; // 80208118
  c->lr=0x80208120u; f_8011B300(c); // 8020811C
  c->f[1]=c->f[31]; // 80208120
  c->r[27]=0u+0x00000000u; // 80208124
  c->lr=0x8020812Cu; f_801104BC(c); // 80208128
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8020812C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[3]); // 80208130
  if (!crb(c,2)) { goto L_80208168; } // 80208134
  c->r[0]=R16(c->r[25]+0x00000030u); // 80208138
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 8020813C
  if (crb(c,2)) { goto L_80208168; } // 80208140
  c->r[12]=R32(c->r[22]+0x00000000u); // 80208144
  c->r[3]=c->r[22]|c->r[22]; // 80208148
  c->r[27]=0u+0x00000001u; // 8020814C
  c->r[4]=0u+0x0000002Bu; // 80208150
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208154
  c->ctr=c->r[12]; // 80208158
  if (true) { c->lr=0x80208160u; dispatch(c,c->ctr); } // 8020815C
  W8(c->r[1]+0x00000010u,c->r[3]); // 80208160
  goto L_80208194; // 80208164
L_80208168:;
  cmps(c,0,(int32_t)c->r[3],0); // 80208168
  if (crb(c,2)) { goto L_80208194; } // 8020816C
  c->r[12]=R32(c->r[22]+0x00000000u); // 80208170
  c->r[3]=c->r[22]|c->r[22]; // 80208174
  c->r[27]=0u+0x00000001u; // 80208178
  c->r[4]=0u+0x0000002Du; // 8020817C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208180
  c->ctr=c->r[12]; // 80208184
  if (true) { c->lr=0x8020818Cu; dispatch(c,c->ctr); } // 80208188
  W8(c->r[1]+0x00000010u,c->r[3]); // 8020818C
  c->f[31]=-c->f[31]; // 80208190
L_80208194:;
  c->r[3]=c->r[1]+0x000000D0u; // 80208194
  c->lr=0x8020819Cu; f_8000C958(c); // 80208198
  c->f[1]=c->f[31]; // 8020819C
  c->lr=0x802081A4u; f_801104D4(c); // 802081A0
  cmps(c,0,(int32_t)c->r[3],2); // 802081A4
  if (!crb(c,1)) { goto L_80208A04; } // 802081A8
  c->r[0]=R16(c->r[25]+0x00000030u); // 802081AC
  c->r[0]=c->r[0]&0x00000104u; cr0(c,c->r[0]); // 802081B0
  cmps(c,0,(int32_t)c->r[0],256); // 802081B4
  if (crb(c,2)) { goto L_802085AC; } // 802081B8
  if (!crb(c,0)) { goto L_802085C0; } // 802081BC
  cmps(c,0,(int32_t)c->r[0],4); // 802081C0
  if (crb(c,2)) { goto L_802081CC; } // 802081C4
  goto L_802085C0; // 802081C8
L_802081CC:;
  c->r[4]=c->r[25]|c->r[25]; // 802081CC
  c->r[3]=c->r[1]+0x0000004Cu; // 802081D0
  c->lr=0x802081D8u; f_8011B6E4(c); // 802081D4
  c->r[3]=c->r[1]+0x0000004Cu; // 802081D8
  c->lr=0x802081E0u; f_80207878(c); // 802081DC
  c->r[22]=c->r[3]|c->r[3]; // 802081E0
  c->r[3]=c->r[1]+0x0000004Cu; // 802081E4
  c->lr=0x802081ECu; f_8020A6C0(c); // 802081E8
  c->r[12]=R32(c->r[22]+0x00000000u); // 802081EC
  c->r[23]=c->r[3]|c->r[3]; // 802081F0
  c->r[3]=c->r[22]|c->r[22]; // 802081F4
  c->r[4]=0u+0x00000030u; // 802081F8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802081FC
  c->ctr=c->r[12]; // 80208200
  if (true) { c->lr=0x80208208u; dispatch(c,c->ctr); } // 80208204
  c->r[12]=R32(c->r[22]+0x00000000u); // 80208208
  c->r[31]=c->r[3]|c->r[3]; // 8020820C
  c->r[3]=c->r[22]|c->r[22]; // 80208210
  c->r[4]=0u+0x00000031u; // 80208214
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208218
  c->ctr=c->r[12]; // 8020821C
  if (true) { c->lr=0x80208224u; dispatch(c,c->ctr); } // 80208220
  c->r[12]=R32(c->r[23]+0x00000000u); // 80208224
  c->r[30]=c->r[3]|c->r[3]; // 80208228
  c->r[3]=c->r[23]|c->r[23]; // 8020822C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80208230
  c->ctr=c->r[12]; // 80208234
  if (true) { c->lr=0x8020823Cu; dispatch(c,c->ctr); } // 80208238
  c->r[4]=0u+0x80270000u; // 8020823C
  c->r[29]=R32(c->r[25]+0x00000028u); // 80208240
  {uint32_t ea=c->r[4]+0x00004900u; c->f[0]=RF64(ea);} // 80208244
  c->r[28]=c->r[3]|c->r[3]; // 80208248
  fcmp(c,0,c->f[0],c->f[31]); // 8020824C
  if (!crb(c,2)) { goto L_80208278; } // 80208250
  c->r[3]=c->r[25]|c->r[25]; // 80208254
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208258
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 8020825C
  c->r[6]=c->r[1]+0x000000D0u; // 80208260
  c->lr=0x80208268u; f_80209B80(c); // 80208264
  c->r[3]=c->r[1]+0x0000004Cu; // 80208268
  c->r[4]=0u+0xFFFFFFFFu; // 8020826C
  c->lr=0x80208274u; f_8011B300(c); // 80208270
  goto L_80208ADC; // 80208274
L_80208278:;
  c->f[1]=c->f[31]; // 80208278
  c->r[3]=c->r[1]+0x00000090u; // 8020827C
  c->lr=0x80208284u; f_8011C9F0(c); // 80208280
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000009Cu); // 80208284
  c->r[5]=c->r[29]+c->r[0]; // 80208288
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8020828C
  c->r[5]=addc(c,c->r[5],0x00000001u,0); cr0(c,c->r[5]); // 80208290
  if (!crb(c,0)) { goto L_802082C8; } // 80208294
  c->r[3]=c->r[25]|c->r[25]; // 80208298
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8020829C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 802082A0
  c->r[6]=c->r[1]+0x000000D0u; // 802082A4
  c->lr=0x802082ACu; f_80209B80(c); // 802082A8
  c->r[3]=c->r[1]+0x00000090u; // 802082AC
  c->r[4]=0u+0xFFFFFFFFu; // 802082B0
  c->lr=0x802082B8u; f_8000C978(c); // 802082B4
  c->r[3]=c->r[1]+0x0000004Cu; // 802082B8
  c->r[4]=0u+0xFFFFFFFFu; // 802082BC
  c->lr=0x802082C4u; f_8011B300(c); // 802082C0
  goto L_80208ADC; // 802082C4
L_802082C8:;
  if (!crb(c,2)) { goto L_802083B0; } // 802082C8
  cmps(c,0,(int32_t)c->r[0],-1); // 802082CC
  if (!crb(c,2)) { goto L_80208320; } // 802082D0
  c->r[3]=c->r[1]+0x00000090u; // 802082D4
  c->r[4]=0u+0x00000000u; // 802082D8
  c->lr=0x802082E0u; f_8011CB34(c); // 802082DC
  cmps(c,0,(int32_t)c->r[3],1); // 802082E0
  if (!crb(c,2)) { goto L_802082F8; } // 802082E4
  c->r[3]=c->r[1]+0x000000D0u; // 802082E8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 802082EC
  c->lr=0x802082F4u; f_8020AB80(c); // 802082F0
  goto L_80208304; // 802082F4
L_802082F8:;
  c->r[3]=c->r[1]+0x000000D0u; // 802082F8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 802082FC
  c->lr=0x80208304u; f_8020AB80(c); // 80208300
L_80208304:;
  c->r[0]=R16(c->r[25]+0x00000030u); // 80208304
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80208308
  if (crb(c,2)) { goto L_80208394; } // 8020830C
  c->r[3]=c->r[1]+0x000000D0u; // 80208310
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208314
  c->lr=0x8020831Cu; f_800D6358(c); // 80208318
  goto L_80208394; // 8020831C
L_80208320:;
  c->r[3]=c->r[1]+0x000000D0u; // 80208320
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208324
  c->lr=0x8020832Cu; f_8020AB80(c); // 80208328
  c->r[3]=c->r[1]+0x000000D0u; // 8020832C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208330
  c->lr=0x80208338u; f_800D6358(c); // 80208334
  c->r[22]=R32(c->r[1]+0x0000002Cu); // 80208338
  cmps(c,0,(int32_t)c->r[22],-2); // 8020833C
  if (!crb(c,0)) { goto L_80208364; } // 80208340
  c->r[3]=c->r[1]+0x000000D0u; // 80208344
  c->lr=0x8020834Cu; f_80031DBC(c); // 80208348
  c->r[4]=c->r[3]|c->r[3]; // 8020834C
  c->r[3]=c->r[1]+0x000000D0u; // 80208350
  c->r[6]=addc(c,~c->r[22],0xFFFFFFFEu,1); // 80208354
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208358
  c->r[5]=0u+0x00000000u; // 8020835C
  c->lr=0x80208364u; f_8011D1E8(c); // 80208360
L_80208364:;
  c->r[3]=c->r[1]+0x00000090u; // 80208364
  c->r[4]=0u+0x00000000u; // 80208368
  c->lr=0x80208370u; f_8011CB34(c); // 8020836C
  cmps(c,0,(int32_t)c->r[3],1); // 80208370
  if (!crb(c,2)) { goto L_80208388; } // 80208374
  c->r[3]=c->r[1]+0x000000D0u; // 80208378
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 8020837C
  c->lr=0x80208384u; f_800D6358(c); // 80208380
  goto L_80208394; // 80208384
L_80208388:;
  c->r[3]=c->r[1]+0x000000D0u; // 80208388
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8020838C
  c->lr=0x80208394u; f_800D6358(c); // 80208390
L_80208394:;
  c->r[3]=c->r[1]+0x00000090u; // 80208394
  c->r[4]=0u+0xFFFFFFFFu; // 80208398
  c->lr=0x802083A0u; f_8000C978(c); // 8020839C
  c->r[3]=c->r[1]+0x0000004Cu; // 802083A0
  c->r[4]=0u+0xFFFFFFFFu; // 802083A4
  c->lr=0x802083ACu; f_8011B300(c); // 802083A8
  goto L_80208ADC; // 802083AC
L_802083B0:;
  c->r[3]=c->r[1]+0x000000ACu; // 802083B0
  c->r[4]=c->r[1]+0x00000090u; // 802083B4
  c->r[6]=c->r[1]+0x0000002Cu; // 802083B8
  c->lr=0x802083C0u; f_8011CC24(c); // 802083BC
  c->r[4]=c->r[22]|c->r[22]; // 802083C0
  c->r[3]=c->r[1]+0x000000B8u; // 802083C4
  c->r[5]=c->r[1]+0x000000ACu; // 802083C8
  c->lr=0x802083D0u; f_80209B78(c); // 802083CC
  c->r[3]=c->r[1]+0x000000D0u; // 802083D0
  c->r[4]=c->r[1]+0x000000B8u; // 802083D4
  c->lr=0x802083DCu; f_80031DDC(c); // 802083D8
  c->r[3]=c->r[1]+0x000000B8u; // 802083DC
  c->r[4]=0u+0xFFFFFFFFu; // 802083E0
  c->lr=0x802083E8u; f_8000C978(c); // 802083E4
  c->r[3]=c->r[1]+0x000000ACu; // 802083E8
  c->r[4]=0u+0xFFFFFFFFu; // 802083EC
  c->lr=0x802083F4u; f_8000C978(c); // 802083F0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 802083F4
  cmps(c,0,(int32_t)c->r[0],0); // 802083F8
  c->r[22]=c->r[29]+c->r[0]; // 802083FC
  c->r[22]=c->r[22]+0x00000001u; // 80208400
  if (!crb(c,0)) { goto L_802084F0; } // 80208404
  c->r[3]=c->r[1]+0x000000A0u; // 80208408
  c->lr=0x80208410u; f_8000C958(c); // 8020840C
  c->r[3]=c->r[1]+0x000000A0u; // 80208410
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208414
  c->lr=0x8020841Cu; f_8020AB80(c); // 80208418
  c->r[3]=c->r[1]+0x000000A0u; // 8020841C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208420
  c->lr=0x80208428u; f_800D6358(c); // 80208424
  c->r[22]=R32(c->r[1]+0x0000002Cu); // 80208428
  cmps(c,0,(int32_t)c->r[22],-1); // 8020842C
  if (!crb(c,0)) { goto L_80208454; } // 80208430
  c->r[3]=c->r[1]+0x000000A0u; // 80208434
  c->lr=0x8020843Cu; f_80031DBC(c); // 80208438
  c->r[4]=c->r[3]|c->r[3]; // 8020843C
  c->r[3]=c->r[1]+0x000000A0u; // 80208440
  c->r[6]=addc(c,~c->r[22],0xFFFFFFFFu,1); // 80208444
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208448
  c->r[5]=0u+0x00000000u; // 8020844C
  c->lr=0x80208454u; f_8011D1E8(c); // 80208450
L_80208454:;
  c->r[3]=c->r[1]+0x000000A0u; // 80208454
  c->lr=0x8020845Cu; f_80031DBC(c); // 80208458
  c->r[28]=c->r[3]|c->r[3]; // 8020845C
  c->r[3]=c->r[1]+0x000000D0u; // 80208460
  c->r[4]=c->r[1]+0x00000034u; // 80208464
  c->r[5]=c->r[1]+0x00000030u; // 80208468
  c->lr=0x80208470u; f_80031E8C(c); // 8020846C
  c->r[5]=R8(c->r[1]+0x0000000Eu); // 80208470
  c->r[4]=c->r[28]|c->r[28]; // 80208474
  c->r[6]=R32(c->r[1]+0x00000034u); // 80208478
  c->r[3]=c->r[1]+0x000000A0u; // 8020847C
  c->r[0]=R32(c->r[1]+0x00000030u); // 80208480
  c->r[8]=c->r[1]+0x0000000Fu; // 80208484
  W8(c->r[1]+0x0000000Fu,c->r[5]); // 80208488
  c->r[5]=0u+0x00000000u; // 8020848C
  c->r[7]=c->r[6]+c->r[0]; // 80208490
  c->lr=0x80208498u; f_8000C9D4(c); // 80208494
  c->r[3]=c->r[1]+0x000000D0u; // 80208498
  c->r[4]=c->r[1]+0x000000A0u; // 8020849C
  c->lr=0x802084A4u; f_80031DDC(c); // 802084A0
  c->r[3]=c->r[1]+0x000000A0u; // 802084A4
  c->lr=0x802084ACu; f_80031DBC(c); // 802084A8
  c->r[0]=c->r[29]+0x00000002u; // 802084AC
  c->r[0]=c->r[0]-c->r[3]; // 802084B0
  cmpu(c,0,c->r[0],0x00000001u); // 802084B4
  if (!crb(c,2)) { goto L_802084C8; } // 802084B8
  c->r[3]=c->r[1]+0x000000D0u; // 802084BC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 802084C0
  c->lr=0x802084C8u; f_800D6358(c); // 802084C4
L_802084C8:;
  c->r[3]=c->r[1]+0x000000A0u; // 802084C8
  c->r[4]=0u+0xFFFFFFFFu; // 802084CC
  c->lr=0x802084D4u; f_8000C978(c); // 802084D0
  c->r[3]=c->r[1]+0x00000090u; // 802084D4
  c->r[4]=0u+0xFFFFFFFFu; // 802084D8
  c->lr=0x802084E0u; f_8000C978(c); // 802084DC
  c->r[3]=c->r[1]+0x0000004Cu; // 802084E0
  c->r[4]=0u+0xFFFFFFFFu; // 802084E4
  c->lr=0x802084ECu; f_8011B300(c); // 802084E8
  goto L_80208ADC; // 802084EC
L_802084F0:;
  c->r[3]=c->r[1]+0x000000D0u; // 802084F0
  c->lr=0x802084F8u; f_80031DBC(c); // 802084F4
  c->r[30]=c->r[22]-c->r[3]; // 802084F8
  c->r[3]=c->r[1]+0x000000D0u; // 802084FC
  c->lr=0x80208504u; f_80031DBC(c); // 80208500
  c->r[4]=c->r[3]|c->r[3]; // 80208504
  c->r[6]=c->r[30]|c->r[30]; // 80208508
  c->r[3]=c->r[1]+0x000000D0u; // 8020850C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208510
  c->r[5]=0u+0x00000000u; // 80208514
  c->lr=0x8020851Cu; f_8011D1E8(c); // 80208518
  c->r[0]=R16(c->r[25]+0x00000030u); // 8020851C
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80208520
  if (!crb(c,2)) { goto L_80208530; } // 80208524
  cmps(c,0,(int32_t)c->r[29],0); // 80208528
  if (!crb(c,1)) { goto L_8020854C; } // 8020852C
L_80208530:;
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 80208530
  c->r[3]=c->r[1]+0x000000D0u; // 80208534
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208538
  c->r[5]=0u+0x00000000u; // 8020853C
  c->r[4]=c->r[4]+0x00000001u; // 80208540
  c->r[6]=0u+0x00000001u; // 80208544
  c->lr=0x8020854Cu; f_8011D1E8(c); // 80208548
L_8020854C:;
  c->r[4]=c->r[23]|c->r[23]; // 8020854C
  c->r[3]=c->r[1]+0x000000C4u; // 80208550
  c->lr=0x80208558u; f_8020A918(c); // 80208554
  c->r[12]=R32(c->r[23]+0x00000000u); // 80208558
  c->r[3]=c->r[23]|c->r[23]; // 8020855C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80208560
  c->ctr=c->r[12]; // 80208564
  if (true) { c->lr=0x8020856Cu; dispatch(c,c->ctr); } // 80208568
  c->r[0]=c->r[3]|c->r[3]; // 8020856C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208570
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80208574
  c->r[5]=c->r[1]+0x000000C4u; // 80208578
  c->r[6]=c->r[1]+0x000000D0u; // 8020857C
  c->lr=0x80208584u; f_80209C0C(c); // 80208580
  c->r[3]=c->r[1]+0x000000C4u; // 80208584
  c->r[4]=0u+0xFFFFFFFFu; // 80208588
  c->lr=0x80208590u; f_8000C978(c); // 8020858C
  c->r[3]=c->r[1]+0x00000090u; // 80208590
  c->r[4]=0u+0xFFFFFFFFu; // 80208594
  c->lr=0x8020859Cu; f_8000C978(c); // 80208598
  c->r[3]=c->r[1]+0x0000004Cu; // 8020859C
  c->r[4]=0u+0xFFFFFFFFu; // 802085A0
  c->lr=0x802085A8u; f_8011B300(c); // 802085A4
  goto L_80208ADC; // 802085A8
L_802085AC:;
  c->f[1]=c->f[31]; // 802085AC
  c->r[3]=c->r[25]|c->r[25]; // 802085B0
  c->r[4]=c->r[1]+0x000000D0u; // 802085B4
  c->lr=0x802085BCu; f_80209728(c); // 802085B8
  goto L_80208ADC; // 802085BC
L_802085C0:;
  c->r[4]=c->r[25]|c->r[25]; // 802085C0
  c->r[3]=c->r[1]+0x00000074u; // 802085C4
  c->lr=0x802085CCu; f_80208D78(c); // 802085C8
  c->r[23]=R32(c->r[25]+0x00000028u); // 802085CC
  cmps(c,0,(int32_t)c->r[23],0); // 802085D0
  if (!crb(c,2)) { goto L_802085DC; } // 802085D4
  c->r[23]=0u+0x00000001u; // 802085D8
L_802085DC:;
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 802085DC
  c->f[1]=c->f[31]; // 802085E0
  W32(c->r[25]+0x00000028u,c->r[0]); // 802085E4
  c->r[3]=c->r[25]|c->r[25]; // 802085E8
  c->r[4]=c->r[1]+0x000000D0u; // 802085EC
  c->lr=0x802085F4u; f_80209728(c); // 802085F0
  c->r[30]=c->r[3]|c->r[3]; // 802085F4
  c->r[4]=c->r[25]|c->r[25]; // 802085F8
  c->r[3]=c->r[1]+0x00000044u; // 802085FC
  c->lr=0x80208604u; f_8011B6E4(c); // 80208600
  c->r[3]=c->r[1]+0x00000044u; // 80208604
  c->lr=0x8020860Cu; f_80207878(c); // 80208608
  c->r[22]=c->r[3]|c->r[3]; // 8020860C
  c->r[3]=c->r[1]+0x00000044u; // 80208610
  c->lr=0x80208618u; f_8020A6C0(c); // 80208614
  c->r[12]=R32(c->r[22]+0x00000000u); // 80208618
  c->r[29]=c->r[3]|c->r[3]; // 8020861C
  c->r[3]=c->r[22]|c->r[22]; // 80208620
  c->r[4]=0u+0x00000030u; // 80208624
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208628
  c->ctr=c->r[12]; // 8020862C
  if (true) { c->lr=0x80208634u; dispatch(c,c->ctr); } // 80208630
  c->r[12]=R32(c->r[29]+0x00000000u); // 80208634
  c->r[28]=c->r[3]|c->r[3]; // 80208638
  c->r[3]=c->r[29]|c->r[29]; // 8020863C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80208640
  c->ctr=c->r[12]; // 80208644
  if (true) { c->lr=0x8020864Cu; dispatch(c,c->ctr); } // 80208648
  cmps(c,0,(int32_t)c->r[30],-4); // 8020864C
  c->r[31]=c->r[3]|c->r[3]; // 80208650
  if (crb(c,0)) { goto L_802088D4; } // 80208654
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[23]); // 80208658
  if (!crb(c,0)) { goto L_802088D4; } // 8020865C
  c->r[3]=c->r[1]+0x000000D0u; // 80208660
  c->lr=0x80208668u; f_8020A8D0(c); // 80208664
  c->r[0]=R8(c->r[3]+0x00000001u); // 80208668
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8020866C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80208670
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80208674
  if (!crb(c,2)) { goto L_802086A4; } // 80208678
  c->r[0]=R8(c->r[1]+0x00000009u); // 8020867C
  c->r[3]=c->r[1]+0x000000D0u; // 80208680
  c->r[4]=c->r[23]+0x00000001u; // 80208684
  c->r[8]=c->r[1]+0x00000008u; // 80208688
  W8(c->r[1]+0x00000008u,c->r[0]); // 8020868C
  c->r[5]=0u+0xFFFFFFFFu; // 80208690
  c->r[6]=0u+0x00000000u; // 80208694
  c->r[7]=0u+0x00000000u; // 80208698
  c->lr=0x802086A0u; f_8000C9D4(c); // 8020869C
  goto L_802086C8; // 802086A0
L_802086A4:;
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 802086A4
  c->r[3]=c->r[1]+0x000000D0u; // 802086A8
  c->r[8]=c->r[1]+0x0000000Au; // 802086AC
  c->r[4]=0u+0x00000001u; // 802086B0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 802086B4
  c->r[5]=0u+0xFFFFFFFFu; // 802086B8
  c->r[6]=0u+0x00000000u; // 802086BC
  c->r[7]=0u+0x00000000u; // 802086C0
  c->lr=0x802086C8u; f_8000C9D4(c); // 802086C4
L_802086C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 802086C8
  if (!crb(c,0)) { goto L_8020873C; } // 802086CC
  c->r[3]=c->r[1]+0x000000D0u; // 802086D0
  c->lr=0x802086D8u; f_8020A8D0(c); // 802086D4
  c->r[0]=R8(c->r[3]+0x00000001u); // 802086D8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 802086DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802086E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802086E4
  if (!crb(c,2)) { goto L_80208708; } // 802086E8
  c->r[3]=c->r[1]+0x000000D0u; // 802086EC
  c->lr=0x802086F4u; f_8020A8D0(c); // 802086F0
  c->r[0]=c->r[3]+0x00000001u; // 802086F4
  c->r[3]=c->r[1]+0x000000D0u; // 802086F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802086FC
  c->r[4]=c->r[1]+0x00000014u; // 80208700
  c->lr=0x80208708u; f_8020ABC0(c); // 80208704
L_80208708:;
  c->r[3]=c->r[1]+0x000000D0u; // 80208708
  c->r[6]=0u-c->r[30]; // 8020870C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208710
  c->r[4]=0u+0x00000000u; // 80208714
  c->r[5]=0u+0x00000000u; // 80208718
  c->lr=0x80208720u; f_8011D1E8(c); // 8020871C
  c->r[3]=c->r[1]+0x000000D0u; // 80208720
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208724
  c->r[4]=0u+0x00000001u; // 80208728
  c->r[5]=0u+0x00000000u; // 8020872C
  c->r[6]=0u+0x00000001u; // 80208730
  c->lr=0x80208738u; f_8011D1E8(c); // 80208734
  goto L_8020878C; // 80208738
L_8020873C:;
  if (!crb(c,1)) { goto L_8020878C; } // 8020873C
  c->r[3]=c->r[1]+0x000000D0u; // 80208740
  c->lr=0x80208748u; f_8020A8D0(c); // 80208744
  c->r[0]=c->r[3]+0x00000001u; // 80208748
  c->r[3]=c->r[1]+0x000000D0u; // 8020874C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80208750
  c->r[4]=c->r[1]+0x00000018u; // 80208754
  c->lr=0x8020875Cu; f_8020ABC0(c); // 80208758
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 8020875C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80208760
  if (crb(c,0)) { goto L_80208774; } // 80208764
  c->r[0]=R16(c->r[25]+0x00000030u); // 80208768
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 8020876C
  if (crb(c,2)) { goto L_8020878C; } // 80208770
L_80208774:;
  c->r[3]=c->r[1]+0x000000D0u; // 80208774
  c->r[4]=c->r[30]+0x00000001u; // 80208778
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8020877C
  c->r[5]=0u+0x00000000u; // 80208780
  c->r[6]=0u+0x00000001u; // 80208784
  c->lr=0x8020878Cu; f_8011D1E8(c); // 80208788
L_8020878C:;
  c->r[0]=R16(c->r[25]+0x00000030u); // 8020878C
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80208790
  if (!crb(c,2)) { goto L_80208874; } // 80208794
  c->r[3]=c->r[1]+0x000000D0u; // 80208798
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8020879C
  c->r[5]=0u+0x00000000u; // 802087A0
  c->lr=0x802087A8u; f_8020AC94(c); // 802087A4
  c->r[0]=c->r[3]+0x00010000u; // 802087A8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802087AC
  if (crb(c,2)) { goto L_80208874; } // 802087B0
  c->r[3]=c->r[1]+0x000000D0u; // 802087B4
  c->lr=0x802087BCu; f_8020A8EC(c); // 802087B8
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 802087BC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 802087C0
  goto L_802087CC; // 802087C4
L_802087C8:;
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 802087C8
L_802087CC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 802087CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802087D0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802087D4
  if (crb(c,2)) { IRQCHK(c); goto L_802087C8; } // 802087D8
  c->r[0]=c->r[4]+0x00000001u; // 802087DC
  cmpu(c,0,c->r[0],c->r[3]); // 802087E0
  if (crb(c,2)) { goto L_80208800; } // 802087E4
  W32(c->r[1]+0x00000020u,c->r[3]); // 802087E8
  c->r[3]=c->r[1]+0x000000D0u; // 802087EC
  c->r[4]=c->r[1]+0x0000001Cu; // 802087F0
  c->r[5]=c->r[1]+0x00000020u; // 802087F4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802087F8
  c->lr=0x80208800u; f_8020AC24(c); // 802087FC
L_80208800:;
  c->r[3]=c->r[1]+0x000000D0u; // 80208800
  c->lr=0x80208808u; f_80031DBC(c); // 80208804
  c->r[22]=c->r[3]+0xFFFFFFFFu; // 80208808
  c->r[3]=c->r[1]+0x000000D0u; // 8020880C
  c->lr=0x80208814u; f_8020A8D0(c); // 80208810
  c->r[0]=R8(c->r[3]+c->r[22]); // 80208814
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208818
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020881C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80208820
  if (!crb(c,2)) { goto L_80208874; } // 80208824
  c->r[0]=R32(c->r[1]+0x000000D0u); // 80208828
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8020882C
  if (!crb(c,2)) { goto L_8020885C; } // 80208830
  c->r[4]=R8(c->r[1]+0x000000D0u); // 80208834
  c->r[3]=c->r[1]+0x000000D1u; // 80208838
  c->r[0]=0u+0x00000000u; // 8020883C
  c->r[4]=rotl(c->r[4],0)&0x0000007Fu; // 80208840
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80208844
  W8(c->r[3]+c->r[4],c->r[0]); // 80208848
  c->r[0]=R8(c->r[1]+0x000000D0u); // 8020884C
  c->r[0]=(rotl(c->r[4],0)&0x0000007Fu)|(c->r[0]&~0x0000007Fu); // 80208850
  W8(c->r[1]+0x000000D0u,c->r[0]); // 80208854
  goto L_80208874; // 80208858
L_8020885C:;
  c->r[4]=R32(c->r[1]+0x000000D4u); // 8020885C
  c->r[0]=0u+0x00000000u; // 80208860
  c->r[3]=R32(c->r[1]+0x000000D8u); // 80208864
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80208868
  W8(c->r[3]+c->r[4],c->r[0]); // 8020886C
  W32(c->r[1]+0x000000D4u,c->r[4]); // 80208870
L_80208874:;
  c->r[4]=c->r[29]|c->r[29]; // 80208874
  c->r[3]=c->r[1]+0x00000084u; // 80208878
  c->lr=0x80208880u; f_8020A918(c); // 8020887C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80208880
  c->r[3]=c->r[29]|c->r[29]; // 80208884
  c->r[12]=R32(c->r[12]+0x00000010u); // 80208888
  c->ctr=c->r[12]; // 8020888C
  if (true) { c->lr=0x80208894u; dispatch(c,c->ctr); } // 80208890
  c->r[0]=c->r[3]|c->r[3]; // 80208894
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208898
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020889C
  c->r[5]=c->r[1]+0x00000084u; // 802088A0
  c->r[6]=c->r[1]+0x000000D0u; // 802088A4
  c->lr=0x802088ACu; f_80209C0C(c); // 802088A8
  c->r[3]=c->r[1]+0x00000084u; // 802088AC
  c->r[4]=0u+0xFFFFFFFFu; // 802088B0
  c->lr=0x802088B8u; f_8000C978(c); // 802088B4
  c->r[3]=c->r[1]+0x00000044u; // 802088B8
  c->r[4]=0u+0xFFFFFFFFu; // 802088BC
  c->lr=0x802088C4u; f_8011B300(c); // 802088C0
  c->r[3]=c->r[1]+0x00000074u; // 802088C4
  c->r[4]=0u+0xFFFFFFFFu; // 802088C8
  c->lr=0x802088D0u; f_80208DA0(c); // 802088CC
  goto L_80208ADC; // 802088D0
L_802088D4:;
  c->r[0]=R16(c->r[25]+0x00000030u); // 802088D4
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802088D8
  if (!crb(c,2)) { goto L_802089E8; } // 802088DC
  c->r[3]=c->r[1]+0x000000D0u; // 802088E0
  c->lr=0x802088E8u; f_8020A8D0(c); // 802088E4
  c->r[0]=R8(c->r[3]+0x00000001u); // 802088E8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 802088EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802088F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802088F4
  if (!crb(c,2)) { goto L_802089E8; } // 802088F8
  c->r[0]=R16(c->r[25]+0x00000030u); // 802088FC
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 80208900
  if (crb(c,2)) { goto L_80208928; } // 80208904
  c->r[12]=R32(c->r[22]+0x00000000u); // 80208908
  c->r[3]=c->r[22]|c->r[22]; // 8020890C
  c->r[4]=0u+0x00000045u; // 80208910
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208914
  c->ctr=c->r[12]; // 80208918
  if (true) { c->lr=0x80208920u; dispatch(c,c->ctr); } // 8020891C
  c->r[22]=c->r[3]|c->r[3]; // 80208920
  goto L_80208944; // 80208924
L_80208928:;
  c->r[12]=R32(c->r[22]+0x00000000u); // 80208928
  c->r[3]=c->r[22]|c->r[22]; // 8020892C
  c->r[4]=0u+0x00000065u; // 80208930
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208934
  c->ctr=c->r[12]; // 80208938
  if (true) { c->lr=0x80208940u; dispatch(c,c->ctr); } // 8020893C
  c->r[22]=c->r[3]|c->r[3]; // 80208940
L_80208944:;
  c->r[3]=c->r[1]+0x000000D0u; // 80208944
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[22]; // 80208948
  c->r[5]=0u+0x00000000u; // 8020894C
  c->lr=0x80208954u; f_8020AC94(c); // 80208950
  c->r[29]=c->r[3]|c->r[3]; // 80208954
  c->r[3]=c->r[1]+0x000000D0u; // 80208958
  c->lr=0x80208960u; f_8020A8D0(c); // 8020895C
  c->r[5]=c->r[3]+c->r[29]; // 80208960
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208964
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 80208968
  goto L_80208974; // 8020896C
L_80208970:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80208970
L_80208974:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80208974
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80208978
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8020897C
  if (crb(c,2)) { IRQCHK(c); goto L_80208970; } // 80208980
  c->r[0]=c->r[3]+0x00000001u; // 80208984
  cmpu(c,0,c->r[0],c->r[5]); // 80208988
  if (crb(c,2)) { goto L_802089A8; } // 8020898C
  W32(c->r[1]+0x00000028u,c->r[5]); // 80208990
  c->r[3]=c->r[1]+0x000000D0u; // 80208994
  c->r[4]=c->r[1]+0x00000024u; // 80208998
  c->r[5]=c->r[1]+0x00000028u; // 8020899C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802089A0
  c->lr=0x802089A8u; f_8020AC24(c); // 802089A4
L_802089A8:;
  c->r[3]=c->r[1]+0x000000D0u; // 802089A8
  c->lr=0x802089B0u; f_8020A8D0(c); // 802089AC
  c->r[0]=R8(c->r[3]+0x00000002u); // 802089B0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[22]; // 802089B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802089B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802089BC
  if (!crb(c,2)) { goto L_802089E8; } // 802089C0
  c->r[0]=R8(c->r[1]+0x0000000Du); // 802089C4
  c->r[3]=c->r[1]+0x000000D0u; // 802089C8
  c->r[8]=c->r[1]+0x0000000Cu; // 802089CC
  c->r[4]=0u+0x00000001u; // 802089D0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 802089D4
  c->r[5]=0u+0x00000001u; // 802089D8
  c->r[6]=0u+0x00000000u; // 802089DC
  c->r[7]=0u+0x00000000u; // 802089E0
  c->lr=0x802089E8u; f_8000C9D4(c); // 802089E4
L_802089E8:;
  c->r[3]=c->r[1]+0x00000044u; // 802089E8
  c->r[4]=0u+0xFFFFFFFFu; // 802089EC
  c->lr=0x802089F4u; f_8011B300(c); // 802089F0
  c->r[3]=c->r[1]+0x00000074u; // 802089F4
  c->r[4]=0u+0xFFFFFFFFu; // 802089F8
  c->lr=0x80208A00u; f_80208DA0(c); // 802089FC
  goto L_80208ADC; // 80208A00
L_80208A04:;
  c->f[1]=c->f[31]; // 80208A04
  c->lr=0x80208A0Cu; f_801104D4(c); // 80208A08
  cmps(c,0,(int32_t)c->r[3],1); // 80208A0C
  if (!crb(c,2)) { goto L_80208A44; } // 80208A10
  c->r[4]=0u+0x802A0000u; // 80208A14
  c->r[3]=c->r[1]+0x0000005Cu; // 80208A18
  c->r[4]=c->r[4]+0x0000411Fu; // 80208A1C
  c->r[5]=0u+0x00000000u; // 80208A20
  c->lr=0x80208A28u; f_8020A60C(c); // 80208A24
  c->r[3]=c->r[1]+0x000000D0u; // 80208A28
  c->r[4]=c->r[1]+0x0000005Cu; // 80208A2C
  c->lr=0x80208A34u; f_80031DDC(c); // 80208A30
  c->r[3]=c->r[1]+0x0000005Cu; // 80208A34
  c->r[4]=0u+0xFFFFFFFFu; // 80208A38
  c->lr=0x80208A40u; f_8000C978(c); // 80208A3C
  goto L_80208A70; // 80208A40
L_80208A44:;
  c->r[4]=0u+0x802A0000u; // 80208A44
  c->r[3]=c->r[1]+0x00000068u; // 80208A48
  c->r[4]=c->r[4]+0x0000411Bu; // 80208A4C
  c->r[5]=0u+0x00000000u; // 80208A50
  c->lr=0x80208A58u; f_8020A60C(c); // 80208A54
  c->r[3]=c->r[1]+0x000000D0u; // 80208A58
  c->r[4]=c->r[1]+0x00000068u; // 80208A5C
  c->lr=0x80208A64u; f_80031DDC(c); // 80208A60
  c->r[3]=c->r[1]+0x00000068u; // 80208A64
  c->r[4]=0u+0xFFFFFFFFu; // 80208A68
  c->lr=0x80208A70u; f_8000C978(c); // 80208A6C
L_80208A70:;
  c->r[0]=R16(c->r[25]+0x00000030u); // 80208A70
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 80208A74
  if (crb(c,2)) { goto L_80208ADC; } // 80208A78
  c->r[4]=c->r[25]|c->r[25]; // 80208A7C
  c->r[3]=c->r[1]+0x0000003Cu; // 80208A80
  c->lr=0x80208A88u; f_8011B6E4(c); // 80208A84
  c->r[3]=c->r[1]+0x0000003Cu; // 80208A88
  c->lr=0x80208A90u; f_80207878(c); // 80208A8C
  c->r[23]=c->r[3]|c->r[3]; // 80208A90
  c->r[3]=c->r[1]+0x0000003Cu; // 80208A94
  c->r[4]=0u+0xFFFFFFFFu; // 80208A98
  c->lr=0x80208AA0u; f_8011B300(c); // 80208A9C
  c->r[3]=c->r[1]+0x000000D0u; // 80208AA0
  c->lr=0x80208AA8u; f_80208EDC(c); // 80208AA4
  c->r[28]=c->r[3]|c->r[3]; // 80208AA8
  c->r[3]=c->r[1]+0x000000D0u; // 80208AAC
  c->lr=0x80208AB4u; f_80031DBC(c); // 80208AB0
  c->r[22]=c->r[28]+c->r[3]; // 80208AB4
  c->r[3]=c->r[1]+0x000000D0u; // 80208AB8
  c->lr=0x80208AC0u; f_80208EDC(c); // 80208ABC
  c->r[12]=R32(c->r[23]+0x00000000u); // 80208AC0
  c->r[4]=c->r[3]|c->r[3]; // 80208AC4
  c->r[3]=c->r[23]|c->r[23]; // 80208AC8
  c->r[5]=c->r[22]|c->r[22]; // 80208ACC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80208AD0
  c->ctr=c->r[12]; // 80208AD4
  if (true) { c->lr=0x80208ADCu; dispatch(c,c->ctr); } // 80208AD8
L_80208ADC:;
  c->r[3]=c->r[1]+0x000000D0u; // 80208ADC
  c->lr=0x80208AE4u; f_80208EDC(c); // 80208AE0
  c->r[0]=R32(c->r[24]+0x00000000u); // 80208AE4
  c->r[22]=c->r[3]|c->r[3]; // 80208AE8
  c->r[3]=c->r[1]+0x000000D0u; // 80208AEC
  W32(c->r[1]+0x00000038u,c->r[0]); // 80208AF0
  c->lr=0x80208AF8u; f_80031DBC(c); // 80208AF4
  c->r[9]=c->r[3]|c->r[3]; // 80208AF8
  c->r[4]=c->r[25]|c->r[25]; // 80208AFC
  c->r[7]=c->r[27]|c->r[27]; // 80208B00
  c->r[8]=c->r[22]|c->r[22]; // 80208B04
  c->r[3]=c->r[1]+0x00000038u; // 80208B08
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 80208B0C
  c->r[6]=c->r[1]+0x00000010u; // 80208B10
  c->lr=0x80208B18u; f_80204E60(c); // 80208B14
  c->r[24]=c->r[3]|c->r[3]; // 80208B18
  c->r[3]=c->r[1]+0x000000D0u; // 80208B1C
  c->r[4]=0u+0xFFFFFFFFu; // 80208B20
  c->lr=0x80208B28u; f_8000C978(c); // 80208B24
  {uint32_t ea=c->r[1]+0x00000108u; c->f[31]=RF64(ea);} // 80208B28
  c->r[11]=c->r[1]+0x00000108u; // 80208B2C
  c->r[3]=c->r[24]|c->r[24]; // 80208B30
  c->lr=0x80208B38u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80208B34
  c->r[0]=R32(c->r[1]+0x00000114u); // 80208B38
  c->lr=c->r[0]; // 80208B3C
  c->r[1]=c->r[1]+0x00000110u; // 80208B40
  return; // 80208B44
}

// fn_80208B48
void f_80208B48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208B48
  c->r[0]=c->lr; // 80208B4C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80208B50
  c->r[11]=c->r[1]+0x00000080u; // 80208B54
  c->lr=0x80208B5Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80208B58
  c->r[30]=c->r[5]|c->r[5]; // 80208B5C
  c->r[29]=c->r[4]|c->r[4]; // 80208B60
  c->r[31]=c->r[6]|c->r[6]; // 80208B64
  c->r[26]=c->r[7]|c->r[7]; // 80208B68
  c->r[4]=c->r[30]|c->r[30]; // 80208B6C
  c->r[3]=c->r[1]+0x00000020u; // 80208B70
  c->lr=0x80208B78u; f_80208D78(c); // 80208B74
  c->r[3]=c->r[30]|c->r[30]; // 80208B78
  c->r[4]=0u+0x00000008u; // 80208B7C
  c->r[5]=0u+0x0000004Au; // 80208B80
  c->lr=0x80208B88u; f_80208E58(c); // 80208B84
  c->r[3]=c->r[30]+0x00000030u; // 80208B88
  c->r[4]=0u+0x00000200u; // 80208B8C
  c->lr=0x80208B94u; f_80208E9C(c); // 80208B90
  c->r[3]=c->r[30]|c->r[30]; // 80208B94
  c->r[4]=0u+0x00000010u; // 80208B98
  c->r[5]=0u+0x000000B0u; // 80208B9C
  c->lr=0x80208BA4u; f_80208E58(c); // 80208BA0
  c->r[0]=0u+0x0000000Au; // 80208BA4
  c->r[4]=c->r[30]|c->r[30]; // 80208BA8
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 80208BAC
  c->r[3]=c->r[1]+0x00000018u; // 80208BB0
  c->lr=0x80208BB8u; f_8011B6E4(c); // 80208BB4
  c->r[3]=c->r[1]+0x00000018u; // 80208BB8
  c->lr=0x80208BC0u; f_80207878(c); // 80208BBC
  c->r[24]=c->r[3]|c->r[3]; // 80208BC0
  c->r[3]=c->r[1]+0x00000018u; // 80208BC4
  c->r[4]=0u+0xFFFFFFFFu; // 80208BC8
  c->lr=0x80208BD0u; f_8011B300(c); // 80208BCC
  c->r[12]=R32(c->r[24]+0x00000000u); // 80208BD0
  c->r[3]=c->r[24]|c->r[24]; // 80208BD4
  c->r[4]=0u+0x00000030u; // 80208BD8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208BDC
  c->ctr=c->r[12]; // 80208BE0
  if (true) { c->lr=0x80208BE8u; dispatch(c,c->ctr); } // 80208BE4
  c->r[28]=c->r[3]|c->r[3]; // 80208BE8
  c->r[4]=c->r[30]|c->r[30]; // 80208BEC
  c->r[3]=c->r[1]+0x00000010u; // 80208BF0
  c->r[24]=0u+0x00000000u; // 80208BF4
  c->lr=0x80208BFCu; f_8011B6E4(c); // 80208BF8
  c->r[3]=c->r[1]+0x00000010u; // 80208BFC
  c->lr=0x80208C04u; f_80207878(c); // 80208C00
  c->r[25]=c->r[3]|c->r[3]; // 80208C04
  c->r[3]=c->r[1]+0x00000010u; // 80208C08
  c->r[4]=0u+0xFFFFFFFFu; // 80208C0C
  c->lr=0x80208C14u; f_8011B300(c); // 80208C10
  c->r[0]=R16(c->r[30]+0x00000030u); // 80208C14
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80208C18
  if (crb(c,2)) { goto L_80208C88; } // 80208C1C
  c->r[12]=R32(c->r[25]+0x00000000u); // 80208C20
  c->r[3]=c->r[25]|c->r[25]; // 80208C24
  c->r[4]=0u+0x00000030u; // 80208C28
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208C2C
  c->ctr=c->r[12]; // 80208C30
  if (true) { c->lr=0x80208C38u; dispatch(c,c->ctr); } // 80208C34
  W8(c->r[1]+0x00000008u,c->r[3]); // 80208C38
  c->r[0]=R16(c->r[30]+0x00000030u); // 80208C3C
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 80208C40
  if (crb(c,2)) { goto L_80208C68; } // 80208C44
  c->r[12]=R32(c->r[25]+0x00000000u); // 80208C48
  c->r[3]=c->r[25]|c->r[25]; // 80208C4C
  c->r[4]=0u+0x00000058u; // 80208C50
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208C54
  c->ctr=c->r[12]; // 80208C58
  if (true) { c->lr=0x80208C60u; dispatch(c,c->ctr); } // 80208C5C
  W8(c->r[1]+0x00000009u,c->r[3]); // 80208C60
  goto L_80208C84; // 80208C64
L_80208C68:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 80208C68
  c->r[3]=c->r[25]|c->r[25]; // 80208C6C
  c->r[4]=0u+0x00000078u; // 80208C70
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208C74
  c->ctr=c->r[12]; // 80208C78
  if (true) { c->lr=0x80208C80u; dispatch(c,c->ctr); } // 80208C7C
  W8(c->r[1]+0x00000009u,c->r[3]); // 80208C80
L_80208C84:;
  c->r[24]=0u+0x00000002u; // 80208C84
L_80208C88:;
  c->r[3]=c->r[30]|c->r[30]; // 80208C88
  c->r[4]=c->r[26]|c->r[26]; // 80208C8C
  c->r[6]=c->r[25]|c->r[25]; // 80208C90
  c->r[5]=c->r[1]+0x0000003Au; // 80208C94
  c->r[7]=0u+0x00000000u; // 80208C98
  c->lr=0x80208CA0u; f_8020A3B4(c); // 80208C9C
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 80208CA0
  c->r[0]=c->r[24]+c->r[3]; // 80208CA4
  c->r[25]=c->r[3]|c->r[3]; // 80208CA8
  c->r[3]=c->r[1]+0x00000030u; // 80208CAC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80208CB0
  c->r[27]=0u+0x00000000u; // 80208CB4
  if (!crb(c,1)) { goto L_80208CC0; } // 80208CB8
  c->r[27]=c->r[4]-c->r[0]; // 80208CBC
L_80208CC0:;
  c->r[0]=R16(c->r[30]+0x00000030u); // 80208CC0
  c->r[26]=c->r[0]&0x000000B0u; cr0(c,c->r[26]); // 80208CC4
  cmpu(c,0,c->r[26],0x00000020u); // 80208CC8
  if (crb(c,2)) { goto L_80208CE4; } // 80208CCC
  cmpu(c,0,c->r[26],0x00000010u); // 80208CD0
  if (crb(c,2)) { goto L_80208CE4; } // 80208CD4
  c->r[5]=c->r[27]|c->r[27]; // 80208CD8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208CDC
  c->lr=0x80208CE4u; f_8020A6A4(c); // 80208CE0
L_80208CE4:;
  c->r[5]=c->r[24]|c->r[24]; // 80208CE4
  c->r[4]=c->r[1]+0x00000008u; // 80208CE8
  c->lr=0x80208CF0u; f_8020A680(c); // 80208CEC
  cmpu(c,0,c->r[26],0x00000010u); // 80208CF0
  if (!crb(c,2)) { goto L_80208D04; } // 80208CF4
  c->r[5]=c->r[27]|c->r[27]; // 80208CF8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208CFC
  c->lr=0x80208D04u; f_8020A6A4(c); // 80208D00
L_80208D04:;
  c->r[5]=c->r[25]|c->r[25]; // 80208D04
  c->r[4]=c->r[1]+0x0000003Au; // 80208D08
  c->lr=0x80208D10u; f_8020A680(c); // 80208D0C
  cmpu(c,0,c->r[26],0x00000020u); // 80208D10
  if (!crb(c,2)) { goto L_80208D24; } // 80208D14
  c->r[5]=c->r[27]|c->r[27]; // 80208D18
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80208D1C
  c->lr=0x80208D24u; f_8020A6A4(c); // 80208D20
L_80208D24:;
  c->r[0]=0u+0x00000000u; // 80208D24
  c->r[3]=c->r[1]+0x00000020u; // 80208D28
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 80208D2C
  c->r[4]=0u+0xFFFFFFFFu; // 80208D30
  c->lr=0x80208D38u; f_80208DA0(c); // 80208D34
  c->r[0]=R32(c->r[29]+0x00000000u); // 80208D38
  c->r[4]=c->r[30]|c->r[30]; // 80208D3C
  c->r[3]=c->r[1]+0x0000000Cu; // 80208D40
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80208D44
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80208D48
  c->r[8]=c->r[1]+0x00000030u; // 80208D4C
  c->r[6]=0u+0x00000000u; // 80208D50
  c->r[7]=0u+0x00000000u; // 80208D54
  c->r[9]=0u+0x0000000Au; // 80208D58
  c->lr=0x80208D60u; f_80204E60(c); // 80208D5C
  c->r[11]=c->r[1]+0x00000080u; // 80208D60
  c->lr=0x80208D68u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80208D64
  c->r[0]=R32(c->r[1]+0x00000084u); // 80208D68
  c->lr=c->r[0]; // 80208D6C
  c->r[1]=c->r[1]+0x00000080u; // 80208D70
  return; // 80208D74
}

// fn_80208D78
void f_80208D78(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 80208D78
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 80208D7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80208D80
  c->r[0]=R32(c->r[4]+0x00000028u); // 80208D84
  W32(c->r[3]+0x00000008u,c->r[0]); // 80208D88
  c->r[0]=R16(c->r[4]+0x00000030u); // 80208D8C
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 80208D90
  c->r[0]=R8(c->r[4]+0x00000033u); // 80208D94
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80208D98
  return; // 80208D9C
}

// dtor_80208DA0
void f_80208DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208DA0
  c->r[0]=c->lr; // 80208DA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80208DA8
  c->r[11]=c->r[1]+0x00000020u; // 80208DAC
  c->lr=0x80208DB4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80208DB0
  cmps(c,0,(int32_t)c->r[3],0); // 80208DB4
  c->r[29]=c->r[3]|c->r[3]; // 80208DB8
  c->r[30]=c->r[4]|c->r[4]; // 80208DBC
  if (crb(c,2)) { goto L_80208E3C; } // 80208DC0
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 80208DC4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80208DC8
  W16(c->r[4]+0x00000030u,c->r[0]); // 80208DCC
  c->r[0]=R32(c->r[3]+0x00000004u); // 80208DD0
  c->r[4]=R32(c->r[3]+0x00000000u); // 80208DD4
  W32(c->r[4]+0x0000002Cu,c->r[0]); // 80208DD8
  c->r[0]=R32(c->r[3]+0x00000008u); // 80208DDC
  c->r[4]=R32(c->r[3]+0x00000000u); // 80208DE0
  W32(c->r[4]+0x00000028u,c->r[0]); // 80208DE4
  c->r[31]=R32(c->r[3]+0x00000000u); // 80208DE8
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 80208DEC
  W8(c->r[31]+0x00000033u,c->r[0]); // 80208DF0
  c->r[0]=R32(c->r[31]+0x00000024u); // 80208DF4
  cmps(c,0,(int32_t)c->r[0],0); // 80208DF8
  if (!crb(c,2)) { goto L_80208E0C; } // 80208DFC
  c->r[3]=c->r[31]+0x00000032u; // 80208E00
  c->r[4]=0u+0x00000001u; // 80208E04
  c->lr=0x80208E0Cu; f_80204E50(c); // 80208E08
L_80208E0C:;
  c->r[0]=R8(c->r[31]+0x00000033u); // 80208E0C
  c->r[3]=R8(c->r[31]+0x00000032u); // 80208E10
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80208E14
  if (crb(c,2)) { goto L_80208E2C; } // 80208E18
  c->r[4]=0u+0x802A0000u; // 80208E1C
  c->r[3]=c->r[31]|c->r[31]; // 80208E20
  c->r[4]=c->r[4]+0x00004127u; // 80208E24
  c->lr=0x80208E2Cu; f_8011AE90(c); // 80208E28
L_80208E2C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80208E2C
  if (!crb(c,1)) { goto L_80208E3C; } // 80208E30
  c->r[3]=c->r[29]|c->r[29]; // 80208E34
  c->lr=0x80208E3Cu; f_8009230C(c); // 80208E38
L_80208E3C:;
  c->r[11]=c->r[1]+0x00000020u; // 80208E3C
  c->r[3]=c->r[29]|c->r[29]; // 80208E40
  c->lr=0x80208E48u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80208E44
  c->r[0]=R32(c->r[1]+0x00000024u); // 80208E48
  c->lr=c->r[0]; // 80208E4C
  c->r[1]=c->r[1]+0x00000020u; // 80208E50
  return; // 80208E54
}

// fn_80208E58
void f_80208E58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208E58
  c->r[0]=c->lr; // 80208E5C
  c->r[4]=c->r[4]&c->r[5]; // 80208E60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80208E64
  c->r[0]=~(c->r[5]|c->r[5]); // 80208E68
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80208E6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80208E70
  c->r[31]=R16(c->r[3]+0x00000030u); // 80208E74
  c->r[0]=c->r[31]&c->r[0]; // 80208E78
  {uint32_t ea=c->r[3]+0x00000030u; W16(ea,c->r[0]); c->r[3]=ea;} // 80208E7C
  c->lr=0x80208E84u; f_80208E9C(c); // 80208E80
  c->r[3]=c->r[31]|c->r[31]; // 80208E84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80208E88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80208E8C
  c->lr=c->r[0]; // 80208E90
  c->r[1]=c->r[1]+0x00000010u; // 80208E94
  return; // 80208E98
}

// fn_80208E9C
void f_80208E9C(Ctx* __restrict c) {
  c->r[0]=R16(c->r[3]+0x00000000u); // 80208E9C
  c->r[0]=c->r[0]|c->r[4]; // 80208EA0
  W16(c->r[3]+0x00000000u,c->r[0]); // 80208EA4
  return; // 80208EA8
}

// fn_80208EAC
void f_80208EAC(Ctx* __restrict c) {
  c->r[12]=R32(c->r[4]+0x00000000u); // 80208EAC
  c->r[12]=R32(c->r[12]+0x00000018u); // 80208EB0
  c->ctr=c->r[12]; // 80208EB4
  if (true) { dispatch(c,c->ctr); return; } // 80208EB8
}

// fn_80208EBC
void f_80208EBC(Ctx* __restrict c) {
  c->r[12]=R32(c->r[4]+0x00000000u); // 80208EBC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80208EC0
  c->ctr=c->r[12]; // 80208EC4
  if (true) { dispatch(c,c->ctr); return; } // 80208EC8
}

// fn_80208ECC
void f_80208ECC(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0x00000018u; // 80208ECC
  f_80033A10(c); return; // 80208ED0
}

// fn_80208ED4
void f_80208ED4(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0x00000024u; // 80208ED4
  f_80033A10(c); return; // 80208ED8
}

// fn_80208EDC
void f_80208EDC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80208EDC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80208EE0
  if (!crb(c,2)) { goto L_80208EF0; } // 80208EE4
  c->r[3]=c->r[3]+0x00000001u; // 80208EE8
  return; // 80208EEC
L_80208EF0:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80208EF0
  return; // 80208EF4
}

// fn_80208EF8
void f_80208EF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208EF8
  c->r[0]=c->lr; // 80208EFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80208F00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80208F04
  c->r[31]=c->r[3]|c->r[3]; // 80208F08
  c->r[0]=R32(c->r[3]+0x00000008u); // 80208F0C
  cmps(c,0,(int32_t)c->r[0],0); // 80208F10
  if (!crb(c,2)) { goto L_80208F20; } // 80208F14
  c->r[3]=0u+0xFFFFFFFFu; // 80208F18
  goto L_80208F70; // 80208F1C
L_80208F20:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 80208F20
  c->r[0]=R32(c->r[3]+0x00000028u); // 80208F24
  cmpu(c,0,c->r[0],c->r[4]); // 80208F28
  if (!crb(c,0)) { goto L_80208F34; } // 80208F2C
  W32(c->r[3]+0x00000028u,c->r[4]); // 80208F30
L_80208F34:;
  c->r[6]=R32(c->r[3]+0x00000028u); // 80208F34
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80208F38
  cmpu(c,0,c->r[0],c->r[6]); // 80208F3C
  if (!crb(c,0)) { goto L_80208F54; } // 80208F40
  c->r[4]=R32(c->r[31]+0x00000004u); // 80208F44
  c->r[3]=c->r[31]|c->r[31]; // 80208F48
  c->r[5]=R32(c->r[31]+0x00000008u); // 80208F4C
  c->lr=0x80208F54u; f_802076F8(c); // 80208F50
L_80208F54:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80208F54
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80208F58
  cmpu(c,0,c->r[3],c->r[0]); // 80208F5C
  if (!crb(c,0)) { goto L_80208F6C; } // 80208F60
  c->r[3]=R8(c->r[3]+0x00000000u); // 80208F64
  goto L_80208F70; // 80208F68
L_80208F6C:;
  c->r[3]=0u+0xFFFFFFFFu; // 80208F6C
L_80208F70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80208F70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80208F74
  c->lr=c->r[0]; // 80208F78
  c->r[1]=c->r[1]+0x00000010u; // 80208F7C
  return; // 80208F80
}

// fn_80208F84
void f_80208F84(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000008u); // 80208F84
  c->r[0]=R32(c->r[3]+0x00000004u); // 80208F88
  cmpu(c,0,c->r[0],c->r[5]); // 80208F8C
  if (crb(c,0)) { goto L_80208F9C; } // 80208F90
  c->r[3]=0u+0xFFFFFFFFu; // 80208F94
  return; // 80208F98
L_80208F9C:;
  cmps(c,0,(int32_t)c->r[4],-1); // 80208F9C
  if (!crb(c,2)) { goto L_80208FC4; } // 80208FA0
  c->r[5]=R32(c->r[3]+0x00000008u); // 80208FA4
  c->r[0]=c->r[4]+0x00000001u; // 80208FA8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); // 80208FAC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80208FB0
  W32(c->r[3]+0x00000008u,c->r[5]); // 80208FB4
  c->r[0]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80208FB8
  c->r[3]=c->r[4]&~c->r[0]; // 80208FBC
  return; // 80208FC0
L_80208FC4:;
  c->r[0]=R8(c->r[3]+0x00000024u); // 80208FC4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80208FC8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80208FCC
  if (!crb(c,2)) { goto L_80208FEC; } // 80208FD0
  c->r[0]=R8(c->r[5]+0xFFFFFFFFu); // 80208FD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80208FD8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80208FDC
  if (crb(c,2)) { goto L_80208FEC; } // 80208FE0
  c->r[3]=0u+0xFFFFFFFFu; // 80208FE4
  return; // 80208FE8
L_80208FEC:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 80208FEC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80208FF0
  W32(c->r[3]+0x00000008u,c->r[5]); // 80208FF4
  c->r[3]=c->r[4]|c->r[4]; // 80208FF8
  W8(c->r[5]+0x00000000u,c->r[6]); // 80208FFC
  return; // 80209000
}

// fn_80209004
void f_80209004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209004
  c->r[0]=c->lr; // 80209008
  W32(c->r[1]+0x00000054u,c->r[0]); // 8020900C
  c->r[11]=c->r[1]+0x00000050u; // 80209010
  c->lr=0x80209018u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80209014
  c->r[31]=c->r[1]|c->r[1]; // 80209018
  c->r[0]=R8(c->r[3]+0x00000024u); // 8020901C
  c->r[27]=c->r[3]|c->r[3]; // 80209020
  c->r[28]=c->r[4]|c->r[4]; // 80209024
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80209028
  if (!crb(c,2)) { goto L_80209038; } // 8020902C
  c->r[3]=0u+0xFFFFFFFFu; // 80209030
  goto L_80209204; // 80209034
L_80209038:;
  cmps(c,0,(int32_t)c->r[4],-1); // 80209038
  if (!crb(c,2)) { goto L_80209058; } // 8020903C
  c->r[0]=0u+0xFFFFFFFFu; // 80209040
  c->r[0]=c->r[4]-c->r[0]; // 80209044
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); // 80209048
  c->r[0]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8020904C
  c->r[3]=c->r[4]&~c->r[0]; // 80209050
  goto L_80209204; // 80209054
L_80209058:;
  c->r[5]=R32(c->r[3]+0x00000014u); // 80209058
  c->r[0]=R32(c->r[3]+0x00000018u); // 8020905C
  cmpu(c,0,c->r[5],c->r[0]); // 80209060
  if (!crb(c,0)) { goto L_802090BC; } // 80209064
  W8(c->r[5]+0x00000000u,c->r[4]); // 80209068
  c->r[4]=R32(c->r[3]+0x00000014u); // 8020906C
  c->r[0]=R32(c->r[3]+0x00000028u); // 80209070
  c->r[4]=c->r[4]+0x00000001u; // 80209074
  cmpu(c,0,c->r[0],c->r[4]); // 80209078
  W32(c->r[3]+0x00000014u,c->r[4]); // 8020907C
  if (!crb(c,0)) { goto L_80209088; } // 80209080
  W32(c->r[3]+0x00000028u,c->r[4]); // 80209084
L_80209088:;
  c->r[0]=R8(c->r[3]+0x00000024u); // 80209088
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8020908C
  if (crb(c,2)) { goto L_802090B4; } // 80209090
  c->r[6]=R32(c->r[3]+0x00000028u); // 80209094
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80209098
  cmpu(c,0,c->r[0],c->r[6]); // 8020909C
  if (!crb(c,0)) { goto L_802090B4; } // 802090A0
  c->r[4]=R32(c->r[27]+0x00000004u); // 802090A4
  c->r[3]=c->r[27]|c->r[27]; // 802090A8
  c->r[5]=R32(c->r[27]+0x00000008u); // 802090AC
  c->lr=0x802090B4u; f_802076F8(c); // 802090B0
L_802090B4:;
  c->r[3]=c->r[28]|c->r[28]; // 802090B4
  goto L_80209204; // 802090B8
L_802090BC:;
  W32(c->r[31]+0x00000020u,c->r[1]); // 802090BC
  c->r[7]=R32(c->r[3]+0x00000010u); // 802090C0
  c->r[0]=R32(c->r[3]+0x00000028u); // 802090C4
  c->r[5]=c->r[5]-c->r[7]; // 802090C8
  c->r[6]=R32(c->r[3]+0x00000004u); // 802090CC
  c->r[29]=c->r[0]-c->r[7]; // 802090D0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802090D4
  c->r[30]=c->r[5]+0x00000001u; // 802090D8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 802090DC
  c->r[25]=c->r[0]-c->r[6]; // 802090E0
  if (!crb(c,0)) { goto L_802090EC; } // 802090E4
  c->r[29]=c->r[30]|c->r[30]; // 802090E8
L_802090EC:;
  W8(c->r[31]+0x0000000Au,c->r[4]); // 802090EC
  c->r[3]=c->r[3]+0x0000002Cu; // 802090F0
  c->lr=0x802090F8u; f_802020A8(c); // 802090F4
  c->r[0]=R8(c->r[31]+0x00000008u); // 802090F8
  c->r[4]=c->r[3]|c->r[3]; // 802090FC
  c->r[3]=c->r[27]+0x0000002Cu; // 80209100
  c->r[6]=c->r[31]+0x0000000Au; // 80209104
  W8(c->r[31]+0x00000009u,c->r[0]); // 80209108
  c->r[7]=c->r[31]+0x0000000Bu; // 8020910C
  c->r[8]=c->r[31]+0x00000009u; // 80209110
  c->r[5]=0u+0x00000000u; // 80209114
  c->lr=0x8020911Cu; f_80203148(c); // 80209118
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 8020911C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 80209120
  if (!crb(c,2)) { goto L_80209130; } // 80209124
  c->r[3]=0u+0x0000000Bu; // 80209128
  goto L_80209134; // 8020912C
L_80209130:;
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 80209130
L_80209134:;
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 80209134
  c->r[3]=c->r[27]+0x0000002Cu; // 80209138
  c->lr=0x80209140u; f_802020A8(c); // 8020913C
  cmpu(c,0,c->r[26],c->r[3]); // 80209140
  c->r[0]=c->r[3]|c->r[3]; // 80209144
  if (!crb(c,1)) { goto L_80209168; } // 80209148
  c->r[5]=0u+0x00000000u; // 8020914C
  c->r[4]=c->r[0]|c->r[0]; // 80209150
  c->r[3]=c->r[27]+0x0000002Cu; // 80209154
  c->r[6]=c->r[26]-c->r[0]; // 80209158
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8020915C
  c->lr=0x80209164u; f_8020A93C(c); // 80209160
  goto L_80209180; // 80209164
L_80209168:;
  c->r[6]=0u+0x00000000u; // 80209168
  c->r[4]=c->r[26]|c->r[26]; // 8020916C
  c->r[3]=c->r[27]+0x0000002Cu; // 80209170
  c->r[5]=c->r[0]-c->r[26]; // 80209174
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80209178
  c->lr=0x80209180u; f_8020A93C(c); // 8020917C
L_80209180:;
  c->r[3]=c->r[27]+0x0000002Cu; // 80209180
  c->lr=0x80209188u; f_80203778(c); // 80209184
  c->r[0]=R8(c->r[27]+0x00000024u); // 80209188
  c->r[26]=c->r[3]|c->r[3]; // 8020918C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80209190
  if (crb(c,2)) { goto L_802091AC; } // 80209194
  c->r[4]=c->r[3]+c->r[25]; // 80209198
  c->r[0]=c->r[3]+c->r[29]; // 8020919C
  W32(c->r[27]+0x00000004u,c->r[3]); // 802091A0
  W32(c->r[27]+0x00000008u,c->r[4]); // 802091A4
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 802091A8
L_802091AC:;
  c->r[3]=c->r[27]+0x0000002Cu; // 802091AC
  c->lr=0x802091B4u; f_802020A8(c); // 802091B0
  c->r[0]=c->r[3]|c->r[3]; // 802091B4
  c->r[3]=c->r[27]|c->r[27]; // 802091B8
  c->r[4]=c->r[26]|c->r[26]; // 802091BC
  c->r[5]=c->r[26]+c->r[0]; // 802091C0
  c->lr=0x802091C8u; f_80207708(c); // 802091C4
  c->r[4]=R32(c->r[27]+0x00000014u); // 802091C8
  c->r[3]=c->r[28]|c->r[28]; // 802091CC
  c->r[0]=R32(c->r[27]+0x00000010u); // 802091D0
  c->r[4]=c->r[4]+c->r[30]; // 802091D4
  c->r[0]=c->r[0]+c->r[29]; // 802091D8
  W32(c->r[27]+0x00000014u,c->r[4]); // 802091DC
  W32(c->r[27]+0x00000028u,c->r[0]); // 802091E0
  goto L_80209204; // 802091E4
  c->r[3]=c->r[31]+0x0000000Cu; // 802091E8
  c->lr=0x802091F0u; f_8010BF74(c); // 802091EC
  c->r[0]=c->r[0]|0x00000000u; // 802091F0
  c->r[0]=R32(c->r[1]+0x00000000u); // 802091F4
  c->r[1]=R32(c->r[31]+0x00000020u); // 802091F8
  W32(c->r[1]+0x00000000u,c->r[0]); // 802091FC
  c->r[3]=0u+0xFFFFFFFFu; // 80209200
L_80209204:;
  c->r[10]=c->r[31]|c->r[31]; // 80209204
  c->r[11]=c->r[10]+0x00000050u; // 80209208
  c->lr=0x80209210u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020920C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80209210
  c->r[0]=R32(c->r[10]+0x00000004u); // 80209214
  c->r[1]=c->r[10]|c->r[10]; // 80209218
  c->lr=c->r[0]; // 8020921C
  return; // 80209220
}

// fn_80209224
void f_80209224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209224
  c->r[0]=c->lr; // 80209228
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020922C
  c->r[11]=c->r[1]+0x00000030u; // 80209230
  c->lr=0x80209238u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80209234
  c->r[0]=rotl(c->r[8],0)&0x00000018u; // 80209238
  c->r[9]=0u+0x00000018u; // 8020923C
  cmpu(c,0,c->r[9],c->r[0]); // 80209240
  c->r[25]=c->r[3]|c->r[3]; // 80209244
  c->r[26]=c->r[4]|c->r[4]; // 80209248
  c->r[31]=c->r[5]|c->r[5]; // 8020924C
  c->r[27]=c->r[6]|c->r[6]; // 80209250
  c->r[30]=c->r[7]|c->r[7]; // 80209254
  if (!crb(c,2)) { goto L_80209264; } // 80209258
  cmpu(c,0,c->r[7],0x00000002u); // 8020925C
  if (crb(c,2)) { goto L_8020926C; } // 80209260
L_80209264:;
  cmps(c,0,(int32_t)c->r[0],0); // 80209264
  if (!crb(c,2)) { goto L_80209284; } // 80209268
L_8020926C:;
  c->r[4]=0u+0xFFFFFFFFu; // 8020926C
  c->r[0]=0u+0x00000000u; // 80209270
  W32(c->r[3]+0x00000004u,c->r[4]); // 80209274
  W32(c->r[3]+0x00000000u,c->r[4]); // 80209278
  W32(c->r[3]+0x00000008u,c->r[0]); // 8020927C
  goto L_802094EC; // 80209280
L_80209284:;
  c->r[29]=rotl(c->r[8],0)&0x00000008u; cr0(c,c->r[29]); // 80209284
  if (crb(c,2)) { goto L_80209298; } // 80209288
  c->r[0]=R8(c->r[4]+0x00000024u); // 8020928C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80209290
  if (crb(c,2)) { goto L_802092AC; } // 80209294
L_80209298:;
  c->r[28]=rotl(c->r[8],0)&0x00000010u; cr0(c,c->r[28]); // 80209298
  if (crb(c,2)) { goto L_802092C4; } // 8020929C
  c->r[0]=R8(c->r[4]+0x00000024u); // 802092A0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802092A4
  if (!crb(c,2)) { goto L_802092C4; } // 802092A8
L_802092AC:;
  c->r[4]=0u+0xFFFFFFFFu; // 802092AC
  c->r[0]=0u+0x00000000u; // 802092B0
  W32(c->r[3]+0x00000004u,c->r[4]); // 802092B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802092B8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802092BC
  goto L_802094EC; // 802092C0
L_802092C4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802092C4
  if (crb(c,2)) { goto L_802092D8; } // 802092C8
  c->r[0]=R32(c->r[4]+0x00000008u); // 802092CC
  cmps(c,0,(int32_t)c->r[0],0); // 802092D0
  if (crb(c,2)) { goto L_802092EC; } // 802092D4
L_802092D8:;
  cmps(c,0,(int32_t)c->r[28],0); // 802092D8
  if (crb(c,2)) { goto L_80209304; } // 802092DC
  c->r[0]=R32(c->r[4]+0x00000014u); // 802092E0
  cmps(c,0,(int32_t)c->r[0],0); // 802092E4
  if (!crb(c,2)) { goto L_80209304; } // 802092E8
L_802092EC:;
  c->r[4]=0u+0xFFFFFFFFu; // 802092EC
  c->r[0]=0u+0x00000000u; // 802092F0
  W32(c->r[3]+0x00000004u,c->r[4]); // 802092F4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802092F8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802092FC
  goto L_802094EC; // 80209300
L_80209304:;
  c->r[3]=R32(c->r[4]+0x00000014u); // 80209304
  c->r[0]=R32(c->r[4]+0x00000028u); // 80209308
  cmpu(c,0,c->r[0],c->r[3]); // 8020930C
  if (!crb(c,0)) { goto L_80209318; } // 80209310
  W32(c->r[4]+0x00000028u,c->r[3]); // 80209314
L_80209318:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80209318
  cmps(c,0,(int32_t)c->r[0],0); // 8020931C
  if (crb(c,2)) { goto L_80209340; } // 80209320
  c->r[6]=R32(c->r[4]+0x00000028u); // 80209324
  cmpu(c,0,c->r[0],c->r[6]); // 80209328
  if (!crb(c,0)) { goto L_80209340; } // 8020932C
  c->r[4]=R32(c->r[4]+0x00000004u); // 80209330
  c->r[3]=c->r[26]|c->r[26]; // 80209334
  c->r[5]=R32(c->r[26]+0x00000008u); // 80209338
  c->lr=0x80209340u; f_802076F8(c); // 8020933C
L_80209340:;
  cmps(c,0,(int32_t)c->r[28],0); // 80209340
  if (crb(c,2)) { goto L_80209358; } // 80209344
  c->r[3]=R32(c->r[26]+0x00000010u); // 80209348
  c->r[0]=R32(c->r[26]+0x00000028u); // 8020934C
  c->r[7]=c->r[0]-c->r[3]; // 80209350
  goto L_80209364; // 80209354
L_80209358:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 80209358
  c->r[0]=R32(c->r[26]+0x00000028u); // 8020935C
  c->r[7]=c->r[0]-c->r[3]; // 80209360
L_80209364:;
  cmps(c,0,(int32_t)c->r[30],3); // 80209364
  c->r[0]=sraw(c,c->r[7],31); // 80209368
  if (crb(c,2)) { goto L_802093F4; } // 8020936C
  if (!crb(c,0)) { goto L_80209384; } // 80209370
  cmps(c,0,(int32_t)c->r[30],1); // 80209374
  if (crb(c,2)) { goto L_80209390; } // 80209378
  if (!crb(c,0)) { goto L_8020939C; } // 8020937C
  goto L_802093F4; // 80209380
L_80209384:;
  cmps(c,0,(int32_t)c->r[30],5); // 80209384
  if (!crb(c,0)) { goto L_802093F4; } // 80209388
  goto L_802093CC; // 8020938C
L_80209390:;
  c->r[4]=0u+0x00000000u; // 80209390
  c->r[3]=0u+0x00000000u; // 80209394
  goto L_8020940C; // 80209398
L_8020939C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020939C
  if (crb(c,2)) { goto L_802093B8; } // 802093A0
  c->r[4]=R32(c->r[26]+0x00000010u); // 802093A4
  c->r[3]=R32(c->r[26]+0x00000014u); // 802093A8
  c->r[4]=c->r[3]-c->r[4]; // 802093AC
  c->r[3]=sraw(c,c->r[4],31); // 802093B0
  goto L_8020940C; // 802093B4
L_802093B8:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 802093B8
  c->r[3]=R32(c->r[26]+0x00000008u); // 802093BC
  c->r[4]=c->r[3]-c->r[4]; // 802093C0
  c->r[3]=sraw(c,c->r[4],31); // 802093C4
  goto L_8020940C; // 802093C8
L_802093CC:;
  cmps(c,0,(int32_t)c->r[28],0); // 802093CC
  if (crb(c,2)) { goto L_802093E0; } // 802093D0
  c->r[4]=c->r[7]|c->r[7]; // 802093D4
  c->r[3]=c->r[0]|c->r[0]; // 802093D8
  goto L_8020940C; // 802093DC
L_802093E0:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 802093E0
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 802093E4
  c->r[4]=c->r[3]-c->r[4]; // 802093E8
  c->r[3]=sraw(c,c->r[4],31); // 802093EC
  goto L_8020940C; // 802093F0
L_802093F4:;
  c->r[3]=0u+0xFFFFFFFFu; // 802093F4
  c->r[0]=0u+0x00000000u; // 802093F8
  W32(c->r[25]+0x00000004u,c->r[3]); // 802093FC
  W32(c->r[25]+0x00000000u,c->r[3]); // 80209400
  W32(c->r[25]+0x00000008u,c->r[0]); // 80209404
  goto L_802094EC; // 80209408
L_8020940C:;
  c->r[30]=addc(c,c->r[4],c->r[27],0); // 8020940C
  c->r[6]=0u+0x00000000u; // 80209410
  c->r[31]=addc(c,c->r[3],c->r[31],c->xer_ca); // 80209414
  c->r[5]=c->r[31]^0x80000000u; // 80209418
  c->r[4]=c->r[6]^0x80000000u; // 8020941C
  c->r[3]=addc(c,~c->r[6],c->r[30],1); // 80209420
  c->r[4]=addc(c,~c->r[4],c->r[5],c->xer_ca); // 80209424
  c->r[4]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 80209428
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8020942C
  if (!crb(c,2)) { goto L_8020944C; } // 80209430
  c->r[3]=c->r[0]^0x80000000u; // 80209434
  c->r[4]=addc(c,~c->r[30],c->r[7],1); // 80209438
  c->r[4]=addc(c,~c->r[5],c->r[3],c->xer_ca); // 8020943C
  c->r[4]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 80209440
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80209444
  if (crb(c,2)) { goto L_80209464; } // 80209448
L_8020944C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8020944C
  c->r[0]=0u+0x00000000u; // 80209450
  W32(c->r[25]+0x00000004u,c->r[3]); // 80209454
  W32(c->r[25]+0x00000000u,c->r[3]); // 80209458
  W32(c->r[25]+0x00000008u,c->r[0]); // 8020945C
  goto L_802094EC; // 80209460
L_80209464:;
  c->r[3]=R8(c->r[26]+0x00000024u); // 80209464
  c->r[3]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[3]); // 80209468
  if (crb(c,2)) { goto L_8020949C; } // 8020946C
  cmps(c,0,(int32_t)c->r[28],0); // 80209470
  if (crb(c,2)) { goto L_8020949C; } // 80209474
  c->r[3]=c->r[30]^c->r[7]; // 80209478
  c->r[0]=c->r[31]^c->r[0]; // 8020947C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80209480
  if (crb(c,2)) { goto L_8020949C; } // 80209484
  c->r[0]=0u+0xFFFFFFFFu; // 80209488
  W32(c->r[25]+0x00000008u,c->r[6]); // 8020948C
  W32(c->r[25]+0x00000004u,c->r[0]); // 80209490
  W32(c->r[25]+0x00000000u,c->r[0]); // 80209494
  goto L_802094EC; // 80209498
L_8020949C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8020949C
  if (crb(c,2)) { goto L_802094B8; } // 802094A0
  c->r[4]=R32(c->r[26]+0x00000004u); // 802094A4
  c->r[3]=c->r[26]|c->r[26]; // 802094A8
  c->r[6]=R32(c->r[26]+0x0000000Cu); // 802094AC
  c->r[5]=c->r[4]+c->r[30]; // 802094B0
  c->lr=0x802094B8u; f_802076F8(c); // 802094B4
L_802094B8:;
  cmps(c,0,(int32_t)c->r[28],0); // 802094B8
  if (crb(c,2)) { goto L_802094DC; } // 802094BC
  c->r[4]=R32(c->r[26]+0x00000010u); // 802094C0
  c->r[3]=c->r[26]|c->r[26]; // 802094C4
  c->r[5]=R32(c->r[26]+0x00000018u); // 802094C8
  c->lr=0x802094D0u; f_80207708(c); // 802094CC
  c->r[0]=R32(c->r[26]+0x00000014u); // 802094D0
  c->r[0]=c->r[0]+c->r[30]; // 802094D4
  W32(c->r[26]+0x00000014u,c->r[0]); // 802094D8
L_802094DC:;
  c->r[0]=0u+0x00000000u; // 802094DC
  W32(c->r[25]+0x00000004u,c->r[30]); // 802094E0
  W32(c->r[25]+0x00000000u,c->r[31]); // 802094E4
  W32(c->r[25]+0x00000008u,c->r[0]); // 802094E8
L_802094EC:;
  c->r[11]=c->r[1]+0x00000030u; // 802094EC
  c->lr=0x802094F4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802094F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802094F4
  c->lr=c->r[0]; // 802094F8
  c->r[1]=c->r[1]+0x00000030u; // 802094FC
  return; // 80209500
}

// fn_80209504
void f_80209504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209504
  c->r[0]=c->lr; // 80209508
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020950C
  c->r[11]=c->r[1]+0x00000020u; // 80209510
  c->lr=0x80209518u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80209514
  c->r[0]=rotl(c->r[6],0)&0x00000018u; cr0(c,c->r[0]); // 80209518
  c->r[26]=c->r[3]|c->r[3]; // 8020951C
  c->r[27]=c->r[4]|c->r[4]; // 80209520
  c->r[28]=c->r[5]|c->r[5]; // 80209524
  if (!crb(c,2)) { goto L_80209544; } // 80209528
  c->r[4]=0u+0xFFFFFFFFu; // 8020952C
  c->r[0]=0u+0x00000000u; // 80209530
  W32(c->r[3]+0x00000004u,c->r[4]); // 80209534
  W32(c->r[3]+0x00000000u,c->r[4]); // 80209538
  W32(c->r[3]+0x00000008u,c->r[0]); // 8020953C
  goto L_80209710; // 80209540
L_80209544:;
  c->r[30]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[30]); // 80209544
  if (crb(c,2)) { goto L_80209558; } // 80209548
  c->r[0]=R8(c->r[4]+0x00000024u); // 8020954C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80209550
  if (crb(c,2)) { goto L_8020956C; } // 80209554
L_80209558:;
  c->r[29]=rotl(c->r[6],0)&0x00000010u; cr0(c,c->r[29]); // 80209558
  if (crb(c,2)) { goto L_80209584; } // 8020955C
  c->r[0]=R8(c->r[4]+0x00000024u); // 80209560
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80209564
  if (!crb(c,2)) { goto L_80209584; } // 80209568
L_8020956C:;
  c->r[4]=0u+0xFFFFFFFFu; // 8020956C
  c->r[0]=0u+0x00000000u; // 80209570
  W32(c->r[3]+0x00000004u,c->r[4]); // 80209574
  W32(c->r[3]+0x00000000u,c->r[4]); // 80209578
  W32(c->r[3]+0x00000008u,c->r[0]); // 8020957C
  goto L_80209710; // 80209580
L_80209584:;
  cmps(c,0,(int32_t)c->r[30],0); // 80209584
  if (crb(c,2)) { goto L_80209598; } // 80209588
  c->r[0]=R32(c->r[4]+0x00000008u); // 8020958C
  cmps(c,0,(int32_t)c->r[0],0); // 80209590
  if (crb(c,2)) { goto L_802095AC; } // 80209594
L_80209598:;
  cmps(c,0,(int32_t)c->r[29],0); // 80209598
  if (crb(c,2)) { goto L_802095C4; } // 8020959C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802095A0
  cmps(c,0,(int32_t)c->r[0],0); // 802095A4
  if (!crb(c,2)) { goto L_802095C4; } // 802095A8
L_802095AC:;
  c->r[4]=0u+0xFFFFFFFFu; // 802095AC
  c->r[0]=0u+0x00000000u; // 802095B0
  W32(c->r[3]+0x00000004u,c->r[4]); // 802095B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802095B8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802095BC
  goto L_80209710; // 802095C0
L_802095C4:;
  c->r[3]=R32(c->r[4]+0x00000014u); // 802095C4
  c->r[0]=R32(c->r[4]+0x00000028u); // 802095C8
  cmpu(c,0,c->r[0],c->r[3]); // 802095CC
  if (!crb(c,0)) { goto L_802095D8; } // 802095D0
  W32(c->r[4]+0x00000028u,c->r[3]); // 802095D4
L_802095D8:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802095D8
  cmps(c,0,(int32_t)c->r[0],0); // 802095DC
  if (crb(c,2)) { goto L_80209600; } // 802095E0
  c->r[6]=R32(c->r[4]+0x00000028u); // 802095E4
  cmpu(c,0,c->r[0],c->r[6]); // 802095E8
  if (!crb(c,0)) { goto L_80209600; } // 802095EC
  c->r[4]=R32(c->r[4]+0x00000004u); // 802095F0
  c->r[3]=c->r[27]|c->r[27]; // 802095F4
  c->r[5]=R32(c->r[27]+0x00000008u); // 802095F8
  c->lr=0x80209600u; f_802076F8(c); // 802095FC
L_80209600:;
  cmps(c,0,(int32_t)c->r[29],0); // 80209600
  c->r[7]=R32(c->r[28]+0x00000000u); // 80209604
  c->r[31]=R32(c->r[28]+0x00000004u); // 80209608
  if (crb(c,2)) { goto L_80209620; } // 8020960C
  c->r[3]=R32(c->r[27]+0x00000010u); // 80209610
  c->r[0]=R32(c->r[27]+0x00000028u); // 80209614
  c->r[6]=c->r[0]-c->r[3]; // 80209618
  goto L_8020962C; // 8020961C
L_80209620:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 80209620
  c->r[0]=R32(c->r[27]+0x00000028u); // 80209624
  c->r[6]=c->r[0]-c->r[3]; // 80209628
L_8020962C:;
  c->r[5]=0u+0x00000000u; // 8020962C
  c->r[8]=sraw(c,c->r[6],31); // 80209630
  c->r[4]=c->r[7]^0x80000000u; // 80209634
  c->r[3]=c->r[5]^0x80000000u; // 80209638
  c->r[0]=addc(c,~c->r[5],c->r[31],1); // 8020963C
  c->r[3]=addc(c,~c->r[3],c->r[4],c->xer_ca); // 80209640
  c->r[3]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 80209644
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80209648
  if (!crb(c,2)) { goto L_80209668; } // 8020964C
  c->r[0]=c->r[8]^0x80000000u; // 80209650
  c->r[3]=addc(c,~c->r[31],c->r[6],1); // 80209654
  c->r[3]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80209658
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8020965C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80209660
  if (crb(c,2)) { goto L_80209680; } // 80209664
L_80209668:;
  c->r[3]=0u+0xFFFFFFFFu; // 80209668
  c->r[0]=0u+0x00000000u; // 8020966C
  W32(c->r[26]+0x00000004u,c->r[3]); // 80209670
  W32(c->r[26]+0x00000000u,c->r[3]); // 80209674
  W32(c->r[26]+0x00000008u,c->r[0]); // 80209678
  goto L_80209710; // 8020967C
L_80209680:;
  c->r[0]=R8(c->r[27]+0x00000024u); // 80209680
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80209684
  if (crb(c,2)) { goto L_802096B8; } // 80209688
  cmps(c,0,(int32_t)c->r[29],0); // 8020968C
  if (crb(c,2)) { goto L_802096B8; } // 80209690
  c->r[3]=c->r[31]^c->r[6]; // 80209694
  c->r[0]=c->r[7]^c->r[8]; // 80209698
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 8020969C
  if (crb(c,2)) { goto L_802096B8; } // 802096A0
  c->r[0]=0u+0xFFFFFFFFu; // 802096A4
  W32(c->r[26]+0x00000008u,c->r[5]); // 802096A8
  W32(c->r[26]+0x00000004u,c->r[0]); // 802096AC
  W32(c->r[26]+0x00000000u,c->r[0]); // 802096B0
  goto L_80209710; // 802096B4
L_802096B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 802096B8
  if (crb(c,2)) { goto L_802096D4; } // 802096BC
  c->r[4]=R32(c->r[27]+0x00000004u); // 802096C0
  c->r[3]=c->r[27]|c->r[27]; // 802096C4
  c->r[6]=R32(c->r[27]+0x0000000Cu); // 802096C8
  c->r[5]=c->r[4]+c->r[31]; // 802096CC
  c->lr=0x802096D4u; f_802076F8(c); // 802096D0
L_802096D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802096D4
  if (crb(c,2)) { goto L_802096F8; } // 802096D8
  c->r[4]=R32(c->r[27]+0x00000010u); // 802096DC
  c->r[3]=c->r[27]|c->r[27]; // 802096E0
  c->r[5]=R32(c->r[27]+0x00000018u); // 802096E4
  c->lr=0x802096ECu; f_80207708(c); // 802096E8
  c->r[0]=R32(c->r[27]+0x00000014u); // 802096EC
  c->r[0]=c->r[0]+c->r[31]; // 802096F0
  W32(c->r[27]+0x00000014u,c->r[0]); // 802096F4
L_802096F8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802096F8
  c->r[4]=R32(c->r[28]+0x00000004u); // 802096FC
  c->r[0]=R32(c->r[28]+0x00000008u); // 80209700
  W32(c->r[26]+0x00000004u,c->r[4]); // 80209704
  W32(c->r[26]+0x00000000u,c->r[3]); // 80209708
  W32(c->r[26]+0x00000008u,c->r[0]); // 8020970C
L_80209710:;
  c->r[11]=c->r[1]+0x00000020u; // 80209710
  c->lr=0x80209718u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80209714
  c->r[0]=R32(c->r[1]+0x00000024u); // 80209718
  c->lr=c->r[0]; // 8020971C
  c->r[1]=c->r[1]+0x00000020u; // 80209720
  return; // 80209724
}

// fn_80209728
void f_80209728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209728
  c->r[0]=c->lr; // 8020972C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80209730
  c->r[11]=c->r[1]+0x00000068u; // 80209734
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[31]);} // 80209738
  c->lr=0x80209740u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020973C
  c->f[31]=c->f[1]; // 80209740
  c->r[30]=c->r[3]|c->r[3]; // 80209744
  c->r[29]=c->r[4]|c->r[4]; // 80209748
  c->r[3]=c->r[1]+0x00000010u; // 8020974C
  c->r[4]=c->r[30]|c->r[30]; // 80209750
  c->lr=0x80209758u; f_8011B6E4(c); // 80209754
  c->r[3]=c->r[1]+0x00000010u; // 80209758
  c->lr=0x80209760u; f_80207878(c); // 8020975C
  c->r[31]=c->r[3]|c->r[3]; // 80209760
  c->r[3]=c->r[1]+0x00000010u; // 80209764
  c->lr=0x8020976Cu; f_8020A6C0(c); // 80209768
  c->r[12]=R32(c->r[31]+0x00000000u); // 8020976C
  c->r[25]=c->r[3]|c->r[3]; // 80209770
  c->r[3]=c->r[31]|c->r[31]; // 80209774
  c->r[4]=0u+0x00000030u; // 80209778
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020977C
  c->ctr=c->r[12]; // 80209780
  if (true) { c->lr=0x80209788u; dispatch(c,c->ctr); } // 80209784
  c->r[12]=R32(c->r[25]+0x00000000u); // 80209788
  c->r[28]=c->r[3]|c->r[3]; // 8020978C
  c->r[3]=c->r[25]|c->r[25]; // 80209790
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80209794
  c->ctr=c->r[12]; // 80209798
  if (true) { c->lr=0x802097A0u; dispatch(c,c->ctr); } // 8020979C
  c->r[0]=R16(c->r[30]+0x00000030u); // 802097A0
  c->r[27]=c->r[3]|c->r[3]; // 802097A4
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 802097A8
  if (crb(c,2)) { goto L_802097D0; } // 802097AC
  c->r[12]=R32(c->r[31]+0x00000000u); // 802097B0
  c->r[3]=c->r[31]|c->r[31]; // 802097B4
  c->r[4]=0u+0x00000045u; // 802097B8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802097BC
  c->ctr=c->r[12]; // 802097C0
  if (true) { c->lr=0x802097C8u; dispatch(c,c->ctr); } // 802097C4
  c->r[26]=c->r[3]|c->r[3]; // 802097C8
  goto L_802097EC; // 802097CC
L_802097D0:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 802097D0
  c->r[3]=c->r[31]|c->r[31]; // 802097D4
  c->r[4]=0u+0x00000065u; // 802097D8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802097DC
  c->ctr=c->r[12]; // 802097E0
  if (true) { c->lr=0x802097E8u; dispatch(c,c->ctr); } // 802097E4
  c->r[26]=c->r[3]|c->r[3]; // 802097E8
L_802097EC:;
  c->r[3]=0u+0x80270000u; // 802097EC
  c->r[25]=R32(c->r[30]+0x00000028u); // 802097F0
  {uint32_t ea=c->r[3]+0x00004900u; c->f[0]=RF64(ea);} // 802097F4
  fcmp(c,0,c->f[0],c->f[31]); // 802097F8
  if (!crb(c,2)) { goto L_802098BC; } // 802097FC
  c->r[3]=c->r[29]|c->r[29]; // 80209800
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80209804
  c->lr=0x8020980Cu; f_8020AB80(c); // 80209808
  c->r[0]=R16(c->r[30]+0x00000030u); // 8020980C
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80209810
  if (!crb(c,2)) { goto L_80209820; } // 80209814
  cmps(c,0,(int32_t)c->r[25],0); // 80209818
  if (!crb(c,1)) { goto L_8020982C; } // 8020981C
L_80209820:;
  c->r[3]=c->r[29]|c->r[29]; // 80209820
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[27]; // 80209824
  c->lr=0x8020982Cu; f_800D6358(c); // 80209828
L_8020982C:;
  cmps(c,0,(int32_t)c->r[25],0); // 8020982C
  if (!crb(c,1)) { goto L_80209854; } // 80209830
  c->r[3]=c->r[29]|c->r[29]; // 80209834
  c->lr=0x8020983Cu; f_80031DBC(c); // 80209838
  c->r[4]=c->r[3]|c->r[3]; // 8020983C
  c->r[3]=c->r[29]|c->r[29]; // 80209840
  c->r[6]=c->r[25]|c->r[25]; // 80209844
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80209848
  c->r[5]=0u+0x00000000u; // 8020984C
  c->lr=0x80209854u; f_8011D1E8(c); // 80209850
L_80209854:;
  c->r[3]=c->r[29]|c->r[29]; // 80209854
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 80209858
  c->lr=0x80209860u; f_800D6358(c); // 8020985C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80209860
  c->r[3]=c->r[31]|c->r[31]; // 80209864
  c->r[4]=0u+0x0000002Bu; // 80209868
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020986C
  c->ctr=c->r[12]; // 80209870
  if (true) { c->lr=0x80209878u; dispatch(c,c->ctr); } // 80209874
  c->r[0]=c->r[3]|c->r[3]; // 80209878
  c->r[3]=c->r[29]|c->r[29]; // 8020987C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80209880
  c->lr=0x80209888u; f_800D6358(c); // 80209884
  c->r[3]=c->r[29]|c->r[29]; // 80209888
  c->lr=0x80209890u; f_80031DBC(c); // 8020988C
  c->r[4]=c->r[3]|c->r[3]; // 80209890
  c->r[3]=c->r[29]|c->r[29]; // 80209894
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80209898
  c->r[5]=0u+0x00000000u; // 8020989C
  c->r[6]=0u+0x00000002u; // 802098A0
  c->lr=0x802098A8u; f_8011D1E8(c); // 802098A4
  c->r[3]=c->r[1]+0x00000010u; // 802098A8
  c->r[4]=0u+0xFFFFFFFFu; // 802098AC
  c->lr=0x802098B4u; f_8011B300(c); // 802098B0
  c->r[3]=0u+0x00000000u; // 802098B4
  goto L_80209B5C; // 802098B8
L_802098BC:;
  c->f[1]=c->f[31]; // 802098BC
  c->r[3]=c->r[1]+0x00000030u; // 802098C0
  c->lr=0x802098C8u; f_8011C9F0(c); // 802098C4
  c->r[3]=c->r[1]+0x00000024u; // 802098C8
  c->r[4]=c->r[1]+0x00000030u; // 802098CC
  c->r[5]=c->r[25]+0x00000001u; // 802098D0
  c->r[6]=c->r[1]+0x0000000Cu; // 802098D4
  c->lr=0x802098DCu; f_8011CC24(c); // 802098D8
  c->r[4]=c->r[31]|c->r[31]; // 802098DC
  c->r[3]=c->r[1]+0x00000018u; // 802098E0
  c->r[5]=c->r[1]+0x00000024u; // 802098E4
  c->lr=0x802098ECu; f_80209B78(c); // 802098E8
  c->r[3]=c->r[29]|c->r[29]; // 802098EC
  c->r[4]=c->r[1]+0x00000018u; // 802098F0
  c->lr=0x802098F8u; f_80031DDC(c); // 802098F4
  c->r[3]=c->r[1]+0x00000018u; // 802098F8
  c->r[4]=0u+0xFFFFFFFFu; // 802098FC
  c->lr=0x80209904u; f_8000C978(c); // 80209900
  c->r[3]=c->r[1]+0x00000024u; // 80209904
  c->r[4]=0u+0xFFFFFFFFu; // 80209908
  c->lr=0x80209910u; f_8000C978(c); // 8020990C
  c->r[0]=R16(c->r[30]+0x00000030u); // 80209910
  c->r[3]=0u+0x00000000u; // 80209914
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 80209918
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 8020991C
  if (!crb(c,2)) { goto L_8020992C; } // 80209920
  cmps(c,0,(int32_t)c->r[25],0); // 80209924
  if (!crb(c,1)) { goto L_80209978; } // 80209928
L_8020992C:;
  W8(c->r[1]+0x0000000Au,c->r[27]); // 8020992C
  c->r[3]=c->r[29]|c->r[29]; // 80209930
  c->lr=0x80209938u; f_8020A8D0(c); // 80209934
  c->r[27]=c->r[3]+0x00000001u; // 80209938
  c->r[3]=c->r[29]|c->r[29]; // 8020993C
  c->lr=0x80209944u; f_8020A8D0(c); // 80209940
  c->r[0]=R8(c->r[1]+0x00000009u); // 80209944
  c->r[4]=c->r[3]|c->r[3]; // 80209948
  c->r[3]=c->r[29]|c->r[29]; // 8020994C
  c->r[6]=c->r[1]+0x0000000Au; // 80209950
  W8(c->r[1]+0x00000008u,c->r[0]); // 80209954
  c->r[4]=c->r[27]-c->r[4]; // 80209958
  c->r[7]=c->r[1]+0x0000000Bu; // 8020995C
  c->r[8]=c->r[1]+0x00000008u; // 80209960
  c->r[5]=0u+0x00000000u; // 80209964
  c->lr=0x8020996Cu; f_8000C9D4(c); // 80209968
  c->r[3]=c->r[29]|c->r[29]; // 8020996C
  c->lr=0x80209974u; f_8020A8D0(c); // 80209970
  c->r[3]=0u+0x00000001u; // 80209974
L_80209978:;
  c->r[25]=c->r[25]+c->r[3]; // 80209978
  c->r[3]=c->r[29]|c->r[29]; // 8020997C
  c->r[25]=c->r[25]+0x00000001u; // 80209980
  c->lr=0x80209988u; f_80031DBC(c); // 80209984
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 80209988
  if (!crb(c,1)) { goto L_802099BC; } // 8020998C
  c->r[3]=c->r[29]|c->r[29]; // 80209990
  c->lr=0x80209998u; f_80031DBC(c); // 80209994
  c->r[27]=c->r[25]-c->r[3]; // 80209998
  c->r[3]=c->r[29]|c->r[29]; // 8020999C
  c->lr=0x802099A4u; f_80031DBC(c); // 802099A0
  c->r[4]=c->r[3]|c->r[3]; // 802099A4
  c->r[3]=c->r[29]|c->r[29]; // 802099A8
  c->r[6]=c->r[27]|c->r[27]; // 802099AC
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 802099B0
  c->r[5]=0u+0x00000000u; // 802099B4
  c->lr=0x802099BCu; f_8011D1E8(c); // 802099B8
L_802099BC:;
  c->r[3]=c->r[29]|c->r[29]; // 802099BC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 802099C0
  c->lr=0x802099C8u; f_800D6358(c); // 802099C4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802099C8
  cmps(c,0,(int32_t)c->r[0],0); // 802099CC
  if (!crb(c,0)) { goto L_80209A0C; } // 802099D0
  c->r[12]=R32(c->r[31]+0x00000000u); // 802099D4
  c->r[3]=c->r[31]|c->r[31]; // 802099D8
  c->r[4]=0u+0x0000002Du; // 802099DC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802099E0
  c->ctr=c->r[12]; // 802099E4
  if (true) { c->lr=0x802099ECu; dispatch(c,c->ctr); } // 802099E8
  c->r[0]=c->r[3]|c->r[3]; // 802099EC
  c->r[3]=c->r[29]|c->r[29]; // 802099F0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802099F4
  c->lr=0x802099FCu; f_800D6358(c); // 802099F8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802099FC
  c->r[0]=0u-c->r[0]; // 80209A00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80209A04
  goto L_80209A34; // 80209A08
L_80209A0C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80209A0C
  c->r[3]=c->r[31]|c->r[31]; // 80209A10
  c->r[4]=0u+0x0000002Bu; // 80209A14
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209A18
  c->ctr=c->r[12]; // 80209A1C
  if (true) { c->lr=0x80209A24u; dispatch(c,c->ctr); } // 80209A20
  c->r[0]=c->r[3]|c->r[3]; // 80209A24
  c->r[3]=c->r[29]|c->r[29]; // 80209A28
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80209A2C
  c->lr=0x80209A34u; f_800D6358(c); // 80209A30
L_80209A34:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80209A34
  cmps(c,0,(int32_t)c->r[0],10); // 80209A38
  if (!crb(c,0)) { goto L_80209A9C; } // 80209A3C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80209A40
  c->r[3]=c->r[31]|c->r[31]; // 80209A44
  c->r[4]=0u+0x00000030u; // 80209A48
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209A4C
  c->ctr=c->r[12]; // 80209A50
  if (true) { c->lr=0x80209A58u; dispatch(c,c->ctr); } // 80209A54
  c->r[0]=c->r[3]|c->r[3]; // 80209A58
  c->r[3]=c->r[29]|c->r[29]; // 80209A5C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80209A60
  c->lr=0x80209A68u; f_800D6358(c); // 80209A64
  c->r[12]=R32(c->r[31]+0x00000000u); // 80209A68
  c->r[3]=c->r[31]|c->r[31]; // 80209A6C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80209A70
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209A74
  c->r[0]=c->r[4]+0x00000030u; // 80209A78
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80209A7C
  c->ctr=c->r[12]; // 80209A80
  if (true) { c->lr=0x80209A88u; dispatch(c,c->ctr); } // 80209A84
  c->r[0]=c->r[3]|c->r[3]; // 80209A88
  c->r[3]=c->r[29]|c->r[29]; // 80209A8C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80209A90
  c->lr=0x80209A98u; f_800D6358(c); // 80209A94
  goto L_80209B40; // 80209A98
L_80209A9C:;
  c->r[3]=c->r[29]|c->r[29]; // 80209A9C
  c->lr=0x80209AA4u; f_80031DBC(c); // 80209AA0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80209AA4
  c->r[27]=c->r[3]|c->r[3]; // 80209AA8
  c->r[28]=0u+0x0000000Au; // 80209AAC
  goto L_80209AF8; // 80209AB0
L_80209AB4:;
  c->r[4]=divw((int32_t)c->r[0],(int32_t)c->r[28]); // 80209AB4
  c->r[12]=R32(c->r[31]+0x00000000u); // 80209AB8
  c->r[3]=c->r[31]|c->r[31]; // 80209ABC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209AC0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[28]); // 80209AC4
  c->r[4]=c->r[0]-c->r[4]; // 80209AC8
  c->r[0]=c->r[4]+0x00000030u; // 80209ACC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80209AD0
  c->ctr=c->r[12]; // 80209AD4
  if (true) { c->lr=0x80209ADCu; dispatch(c,c->ctr); } // 80209AD8
  c->r[0]=c->r[3]|c->r[3]; // 80209ADC
  c->r[3]=c->r[29]|c->r[29]; // 80209AE0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80209AE4
  c->lr=0x80209AECu; f_800D6358(c); // 80209AE8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80209AEC
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[28]); // 80209AF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80209AF4
L_80209AF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80209AF8
  if (crb(c,1)) { IRQCHK(c); goto L_80209AB4; } // 80209AFC
  c->r[3]=c->r[29]|c->r[29]; // 80209B00
  c->lr=0x80209B08u; f_8020A8EC(c); // 80209B04
  c->r[31]=c->r[3]|c->r[3]; // 80209B08
  c->r[3]=c->r[29]|c->r[29]; // 80209B0C
  c->lr=0x80209B14u; f_8020A8D0(c); // 80209B10
  c->r[29]=c->r[3]+c->r[27]; // 80209B14
  cmpu(c,0,c->r[29],c->r[31]); // 80209B18
  if (crb(c,2)) { goto L_80209B40; } // 80209B1C
  goto L_80209B34; // 80209B20
L_80209B24:;
  c->r[3]=c->r[29]|c->r[29]; // 80209B24
  c->r[4]=c->r[31]|c->r[31]; // 80209B28
  c->lr=0x80209B30u; f_8020A858(c); // 80209B2C
  c->r[29]=c->r[29]+0x00000001u; // 80209B30
L_80209B34:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 80209B34
  cmpu(c,0,c->r[31],c->r[29]); // 80209B38
  if (crb(c,1)) { IRQCHK(c); goto L_80209B24; } // 80209B3C
L_80209B40:;
  c->r[3]=c->r[1]+0x00000030u; // 80209B40
  c->r[4]=0u+0xFFFFFFFFu; // 80209B44
  c->lr=0x80209B4Cu; f_8000C978(c); // 80209B48
  c->r[3]=c->r[1]+0x00000010u; // 80209B4C
  c->r[4]=0u+0xFFFFFFFFu; // 80209B50
  c->lr=0x80209B58u; f_8011B300(c); // 80209B54
  c->r[3]=c->r[30]|c->r[30]; // 80209B58
L_80209B5C:;
  c->r[11]=c->r[1]+0x00000068u; // 80209B5C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[31]=RF64(ea);} // 80209B60
  c->lr=0x80209B68u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80209B64
  c->r[0]=R32(c->r[1]+0x00000074u); // 80209B68
  c->lr=c->r[0]; // 80209B6C
  c->r[1]=c->r[1]+0x00000070u; // 80209B70
  return; // 80209B74
}

// fn_80209B78
void f_80209B78(Ctx* __restrict c) {
  c->r[4]=c->r[5]|c->r[5]; // 80209B78
  f_80033A10(c); return; // 80209B7C
}

// fn_80209B80
void f_80209B80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209B80
  c->r[0]=c->lr; // 80209B84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80209B88
  c->r[11]=c->r[1]+0x00000020u; // 80209B8C
  c->lr=0x80209B94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80209B90
  c->r[30]=c->r[6]|c->r[6]; // 80209B94
  c->r[31]=R32(c->r[3]+0x00000028u); // 80209B98
  c->r[27]=c->r[3]|c->r[3]; // 80209B9C
  c->r[28]=c->r[4]|c->r[4]; // 80209BA0
  c->r[29]=c->r[5]|c->r[5]; // 80209BA4
  c->r[3]=c->r[30]|c->r[30]; // 80209BA8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80209BAC
  c->lr=0x80209BB4u; f_8020AB80(c); // 80209BB0
  c->r[0]=R16(c->r[27]+0x00000030u); // 80209BB4
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80209BB8
  if (!crb(c,2)) { goto L_80209BC8; } // 80209BBC
  cmps(c,0,(int32_t)c->r[31],0); // 80209BC0
  if (!crb(c,1)) { goto L_80209BD4; } // 80209BC4
L_80209BC8:;
  c->r[3]=c->r[30]|c->r[30]; // 80209BC8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 80209BCC
  c->lr=0x80209BD4u; f_800D6358(c); // 80209BD0
L_80209BD4:;
  c->r[3]=c->r[30]|c->r[30]; // 80209BD4
  c->lr=0x80209BDCu; f_80031DBC(c); // 80209BD8
  c->r[4]=c->r[3]|c->r[3]; // 80209BDC
  c->r[3]=c->r[30]|c->r[30]; // 80209BE0
  c->r[6]=c->r[31]|c->r[31]; // 80209BE4
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 80209BE8
  c->r[5]=0u+0x00000000u; // 80209BEC
  c->lr=0x80209BF4u; f_8011D1E8(c); // 80209BF0
  c->r[11]=c->r[1]+0x00000020u; // 80209BF4
  c->lr=0x80209BFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80209BF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80209BFC
  c->lr=c->r[0]; // 80209C00
  c->r[1]=c->r[1]+0x00000020u; // 80209C04
  return; // 80209C08
}

// fn_80209C0C
void f_80209C0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209C0C
  c->r[0]=c->lr; // 80209C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 80209C14
  c->r[11]=c->r[1]+0x00000020u; // 80209C18
  c->lr=0x80209C20u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80209C1C
  c->r[27]=c->r[5]|c->r[5]; // 80209C20
  c->r[29]=c->r[3]|c->r[3]; // 80209C24
  c->r[26]=c->r[4]|c->r[4]; // 80209C28
  c->r[28]=c->r[6]|c->r[6]; // 80209C2C
  c->r[3]=c->r[27]|c->r[27]; // 80209C30
  c->lr=0x80209C38u; f_80031DBC(c); // 80209C34
  cmps(c,0,(int32_t)c->r[3],0); // 80209C38
  if (crb(c,2)) { goto L_80209CE4; } // 80209C3C
  c->r[3]=c->r[28]|c->r[28]; // 80209C40
  c->lr=0x80209C48u; f_80031DBC(c); // 80209C44
  cmpu(c,0,c->r[3],0x00000001u); // 80209C48
  if (!crb(c,1)) { goto L_80209CE4; } // 80209C4C
  c->r[3]=c->r[28]|c->r[28]; // 80209C50
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 80209C54
  c->r[5]=0u+0x00000000u; // 80209C58
  c->lr=0x80209C60u; f_8020AC94(c); // 80209C5C
  c->r[0]=c->r[3]+0x00010000u; // 80209C60
  c->r[31]=c->r[3]|c->r[3]; // 80209C64
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80209C68
  if (!crb(c,2)) { goto L_80209C7C; } // 80209C6C
  c->r[3]=c->r[28]|c->r[28]; // 80209C70
  c->lr=0x80209C78u; f_80031DBC(c); // 80209C74
  c->r[31]=c->r[3]|c->r[3]; // 80209C78
L_80209C7C:;
  c->r[3]=c->r[27]|c->r[27]; // 80209C7C
  c->r[30]=0u+0x00000000u; // 80209C80
  c->lr=0x80209C88u; f_80208EDC(c); // 80209C84
  c->r[29]=R8(c->r[3]+0x00000000u); // 80209C88
  c->r[3]=0u+0x00000000u; // 80209C8C
  goto L_80209CDC; // 80209C90
L_80209C94:;
  c->r[3]=c->r[3]+0x00000001u; // 80209C94
  cmpu(c,0,c->r[3],c->r[29]); // 80209C98
  if (!crb(c,2)) { goto L_80209CDC; } // 80209C9C
  c->r[3]=c->r[28]|c->r[28]; // 80209CA0
  c->r[4]=c->r[31]|c->r[31]; // 80209CA4
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 80209CA8
  c->r[5]=0u+0x00000000u; // 80209CAC
  c->r[6]=0u+0x00000001u; // 80209CB0
  c->lr=0x80209CB8u; f_8011D1E8(c); // 80209CB4
  c->r[3]=c->r[27]|c->r[27]; // 80209CB8
  c->lr=0x80209CC0u; f_80031DBC(c); // 80209CBC
  c->r[30]=c->r[30]+0x00000001u; // 80209CC0
  cmpu(c,0,c->r[30],c->r[3]); // 80209CC4
  if (!crb(c,0)) { goto L_80209CD8; } // 80209CC8
  c->r[3]=c->r[27]|c->r[27]; // 80209CCC
  c->lr=0x80209CD4u; f_80208EDC(c); // 80209CD0
  c->r[29]=R8(c->r[3]+c->r[30]); // 80209CD4
L_80209CD8:;
  c->r[3]=0u+0x00000000u; // 80209CD8
L_80209CDC:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 80209CDC
  if (!crb(c,2)) { IRQCHK(c); goto L_80209C94; } // 80209CE0
L_80209CE4:;
  c->r[11]=c->r[1]+0x00000020u; // 80209CE4
  c->lr=0x80209CECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80209CE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80209CEC
  c->lr=c->r[0]; // 80209CF0
  c->r[1]=c->r[1]+0x00000020u; // 80209CF4
  return; // 80209CF8
}

// fn_80209CFC
void f_80209CFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209CFC
  c->r[0]=c->lr; // 80209D00
  W32(c->r[1]+0x00000064u,c->r[0]); // 80209D04
  c->r[11]=c->r[1]+0x00000060u; // 80209D08
  c->lr=0x80209D10u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80209D0C
  c->r[24]=c->r[3]|c->r[3]; // 80209D10
  c->r[25]=c->r[4]|c->r[4]; // 80209D14
  c->r[26]=c->r[5]|c->r[5]; // 80209D18
  c->r[28]=c->r[7]|c->r[7]; // 80209D1C
  c->r[27]=c->r[8]|c->r[8]; // 80209D20
  c->r[29]=c->r[9]|c->r[9]; // 80209D24
  c->r[3]=c->r[1]+0x00000010u; // 80209D28
  c->r[31]=0u+0x00000000u; // 80209D2C
  c->lr=0x80209D34u; f_8011B6E4(c); // 80209D30
  c->r[3]=c->r[1]+0x00000010u; // 80209D34
  c->lr=0x80209D3Cu; f_80207878(c); // 80209D38
  c->r[30]=c->r[3]|c->r[3]; // 80209D3C
  c->r[3]=c->r[1]+0x00000010u; // 80209D40
  c->r[4]=0u+0xFFFFFFFFu; // 80209D44
  c->lr=0x80209D4Cu; f_8011B300(c); // 80209D48
  c->r[0]=R16(c->r[25]+0x00000030u); // 80209D4C
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80209D50
  if (crb(c,2)) { goto L_80209DC0; } // 80209D54
  c->r[12]=R32(c->r[30]+0x00000000u); // 80209D58
  c->r[3]=c->r[30]|c->r[30]; // 80209D5C
  c->r[4]=0u+0x00000030u; // 80209D60
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209D64
  c->ctr=c->r[12]; // 80209D68
  if (true) { c->lr=0x80209D70u; dispatch(c,c->ctr); } // 80209D6C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 80209D70
  c->r[0]=R16(c->r[25]+0x00000030u); // 80209D74
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 80209D78
  if (crb(c,2)) { goto L_80209DA0; } // 80209D7C
  c->r[12]=R32(c->r[30]+0x00000000u); // 80209D80
  c->r[3]=c->r[30]|c->r[30]; // 80209D84
  c->r[4]=0u+0x00000058u; // 80209D88
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209D8C
  c->ctr=c->r[12]; // 80209D90
  if (true) { c->lr=0x80209D98u; dispatch(c,c->ctr); } // 80209D94
  W8(c->r[1]+0x0000000Du,c->r[3]); // 80209D98
  goto L_80209DBC; // 80209D9C
L_80209DA0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80209DA0
  c->r[3]=c->r[30]|c->r[30]; // 80209DA4
  c->r[4]=0u+0x00000078u; // 80209DA8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209DAC
  c->ctr=c->r[12]; // 80209DB0
  if (true) { c->lr=0x80209DB8u; dispatch(c,c->ctr); } // 80209DB4
  W8(c->r[1]+0x0000000Du,c->r[3]); // 80209DB8
L_80209DBC:;
  c->r[31]=0u+0x00000002u; // 80209DBC
L_80209DC0:;
  c->r[3]=c->r[25]|c->r[25]; // 80209DC0
  c->r[6]=c->r[27]|c->r[27]; // 80209DC4
  c->r[5]=c->r[28]|c->r[28]; // 80209DC8
  c->r[8]=c->r[30]|c->r[30]; // 80209DCC
  c->r[9]=c->r[29]|c->r[29]; // 80209DD0
  c->r[7]=c->r[1]+0x00000018u; // 80209DD4
  c->lr=0x80209DDCu; f_8020A114(c); // 80209DD8
  c->r[0]=R32(c->r[24]+0x00000000u); // 80209DDC
  c->r[9]=c->r[3]|c->r[3]; // 80209DE0
  c->r[4]=c->r[25]|c->r[25]; // 80209DE4
  c->r[7]=c->r[31]|c->r[31]; // 80209DE8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80209DEC
  c->r[3]=c->r[1]+0x00000008u; // 80209DF0
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 80209DF4
  c->r[6]=c->r[1]+0x0000000Cu; // 80209DF8
  c->r[8]=c->r[1]+0x00000018u; // 80209DFC
  c->lr=0x80209E04u; f_80204E60(c); // 80209E00
  c->r[11]=c->r[1]+0x00000060u; // 80209E04
  c->lr=0x80209E0Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80209E08
  c->r[0]=R32(c->r[1]+0x00000064u); // 80209E0C
  c->lr=c->r[0]; // 80209E10
  c->r[1]=c->r[1]+0x00000060u; // 80209E14
  return; // 80209E18
}

// fn_80209E1C
void f_80209E1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209E1C
  c->r[0]=c->lr; // 80209E20
  W32(c->r[1]+0x00000064u,c->r[0]); // 80209E24
  c->r[11]=c->r[1]+0x00000060u; // 80209E28
  c->lr=0x80209E30u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80209E2C
  c->r[25]=c->r[3]|c->r[3]; // 80209E30
  c->r[26]=c->r[4]|c->r[4]; // 80209E34
  c->r[27]=c->r[5]|c->r[5]; // 80209E38
  c->r[28]=c->r[6]|c->r[6]; // 80209E3C
  c->r[29]=c->r[7]|c->r[7]; // 80209E40
  c->r[3]=c->r[1]+0x00000010u; // 80209E44
  c->r[31]=0u+0x00000000u; // 80209E48
  c->lr=0x80209E50u; f_8011B6E4(c); // 80209E4C
  c->r[3]=c->r[1]+0x00000010u; // 80209E50
  c->lr=0x80209E58u; f_80207878(c); // 80209E54
  c->r[30]=c->r[3]|c->r[3]; // 80209E58
  c->r[3]=c->r[1]+0x00000010u; // 80209E5C
  c->r[4]=0u+0xFFFFFFFFu; // 80209E60
  c->lr=0x80209E68u; f_8011B300(c); // 80209E64
  c->r[0]=R16(c->r[26]+0x00000030u); // 80209E68
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80209E6C
  if (crb(c,2)) { goto L_80209EDC; } // 80209E70
  c->r[12]=R32(c->r[30]+0x00000000u); // 80209E74
  c->r[3]=c->r[30]|c->r[30]; // 80209E78
  c->r[4]=0u+0x00000030u; // 80209E7C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209E80
  c->ctr=c->r[12]; // 80209E84
  if (true) { c->lr=0x80209E8Cu; dispatch(c,c->ctr); } // 80209E88
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 80209E8C
  c->r[0]=R16(c->r[26]+0x00000030u); // 80209E90
  c->r[0]=rotl(c->r[0],0)&0x00004000u; cr0(c,c->r[0]); // 80209E94
  if (crb(c,2)) { goto L_80209EBC; } // 80209E98
  c->r[12]=R32(c->r[30]+0x00000000u); // 80209E9C
  c->r[3]=c->r[30]|c->r[30]; // 80209EA0
  c->r[4]=0u+0x00000058u; // 80209EA4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209EA8
  c->ctr=c->r[12]; // 80209EAC
  if (true) { c->lr=0x80209EB4u; dispatch(c,c->ctr); } // 80209EB0
  W8(c->r[1]+0x0000000Du,c->r[3]); // 80209EB4
  goto L_80209ED8; // 80209EB8
L_80209EBC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80209EBC
  c->r[3]=c->r[30]|c->r[30]; // 80209EC0
  c->r[4]=0u+0x00000078u; // 80209EC4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209EC8
  c->ctr=c->r[12]; // 80209ECC
  if (true) { c->lr=0x80209ED4u; dispatch(c,c->ctr); } // 80209ED0
  W8(c->r[1]+0x0000000Du,c->r[3]); // 80209ED4
L_80209ED8:;
  c->r[31]=0u+0x00000002u; // 80209ED8
L_80209EDC:;
  c->r[3]=c->r[26]|c->r[26]; // 80209EDC
  c->r[4]=c->r[28]|c->r[28]; // 80209EE0
  c->r[6]=c->r[30]|c->r[30]; // 80209EE4
  c->r[7]=c->r[29]|c->r[29]; // 80209EE8
  c->r[5]=c->r[1]+0x00000018u; // 80209EEC
  c->lr=0x80209EF4u; f_8020A3B4(c); // 80209EF0
  c->r[0]=R32(c->r[25]+0x00000000u); // 80209EF4
  c->r[9]=c->r[3]|c->r[3]; // 80209EF8
  c->r[4]=c->r[26]|c->r[26]; // 80209EFC
  c->r[7]=c->r[31]|c->r[31]; // 80209F00
  W32(c->r[1]+0x00000008u,c->r[0]); // 80209F04
  c->r[3]=c->r[1]+0x00000008u; // 80209F08
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[27]; // 80209F0C
  c->r[6]=c->r[1]+0x0000000Cu; // 80209F10
  c->r[8]=c->r[1]+0x00000018u; // 80209F14
  c->lr=0x80209F1Cu; f_80204E60(c); // 80209F18
  c->r[11]=c->r[1]+0x00000060u; // 80209F1C
  c->lr=0x80209F24u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80209F20
  c->r[0]=R32(c->r[1]+0x00000064u); // 80209F24
  c->lr=c->r[0]; // 80209F28
  c->r[1]=c->r[1]+0x00000060u; // 80209F2C
  return; // 80209F30
}

// fn_80209F34
void f_80209F34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80209F34
  c->r[0]=c->lr; // 80209F38
  W32(c->r[1]+0x00000074u,c->r[0]); // 80209F3C
  c->r[11]=c->r[1]+0x00000070u; // 80209F40
  c->lr=0x80209F48u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80209F44
  c->r[23]=c->r[3]|c->r[3]; // 80209F48
  c->r[24]=c->r[4]|c->r[4]; // 80209F4C
  c->r[25]=c->r[5]|c->r[5]; // 80209F50
  c->r[27]=c->r[7]|c->r[7]; // 80209F54
  c->r[26]=c->r[8]|c->r[8]; // 80209F58
  c->r[28]=c->r[9]|c->r[9]; // 80209F5C
  c->r[3]=c->r[1]+0x00000010u; // 80209F60
  c->lr=0x80209F68u; f_8011B6E4(c); // 80209F64
  c->r[3]=c->r[1]+0x00000010u; // 80209F68
  c->lr=0x80209F70u; f_80207878(c); // 80209F6C
  c->r[31]=c->r[3]|c->r[3]; // 80209F70
  c->r[3]=c->r[1]+0x00000010u; // 80209F74
  c->r[4]=0u+0xFFFFFFFFu; // 80209F78
  c->lr=0x80209F80u; f_8011B300(c); // 80209F7C
  c->r[0]=c->r[26]|c->r[27]; cr0(c,c->r[0]); // 80209F80
  c->r[30]=c->r[1]+0x00000018u; // 80209F84
  c->r[29]=0u+0x00000000u; // 80209F88
  if (crb(c,2)) { goto L_80209F9C; } // 80209F8C
  c->r[0]=R16(c->r[24]+0x00000030u); // 80209F90
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 80209F94
  if (crb(c,2)) { goto L_80209FC0; } // 80209F98
L_80209F9C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80209F9C
  c->r[3]=c->r[31]|c->r[31]; // 80209FA0
  c->r[4]=0u+0x00000030u; // 80209FA4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80209FA8
  c->ctr=c->r[12]; // 80209FAC
  if (true) { c->lr=0x80209FB4u; dispatch(c,c->ctr); } // 80209FB0
  W8(c->r[1]+0x00000018u,c->r[3]); // 80209FB4
  c->r[29]=0u+0x00000001u; // 80209FB8
  c->r[30]=c->r[30]+0x00000001u; // 80209FBC
L_80209FC0:;
  c->r[0]=c->r[26]|c->r[27]; cr0(c,c->r[0]); // 80209FC0
  if (crb(c,2)) { goto L_80209FE8; } // 80209FC4
  c->r[3]=c->r[24]|c->r[24]; // 80209FC8
  c->r[6]=c->r[26]|c->r[26]; // 80209FCC
  c->r[5]=c->r[27]|c->r[27]; // 80209FD0
  c->r[7]=c->r[30]|c->r[30]; // 80209FD4
  c->r[8]=c->r[31]|c->r[31]; // 80209FD8
  c->r[9]=c->r[28]|c->r[28]; // 80209FDC
  c->lr=0x80209FE4u; f_8020A114(c); // 80209FE0
  c->r[29]=c->r[29]+c->r[3]; // 80209FE4
L_80209FE8:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 80209FE8
  c->r[4]=c->r[24]|c->r[24]; // 80209FEC
  c->r[9]=c->r[29]|c->r[29]; // 80209FF0
  c->r[3]=c->r[1]+0x0000000Cu; // 80209FF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80209FF8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[25]; // 80209FFC
  c->r[6]=c->r[1]+0x00000008u; // 8020A000
  c->r[8]=c->r[1]+0x00000018u; // 8020A004
  c->r[7]=0u+0x00000000u; // 8020A008
  c->lr=0x8020A010u; f_80204E60(c); // 8020A00C
  c->r[11]=c->r[1]+0x00000070u; // 8020A010
  c->lr=0x8020A018u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020A014
  c->r[0]=R32(c->r[1]+0x00000074u); // 8020A018
  c->lr=c->r[0]; // 8020A01C
  c->r[1]=c->r[1]+0x00000070u; // 8020A020
  return; // 8020A024
}

// fn_8020A028
void f_8020A028(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A028
  c->r[0]=c->lr; // 8020A02C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8020A030
  c->r[11]=c->r[1]+0x00000070u; // 8020A034
  c->lr=0x8020A03Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020A038
  c->r[24]=c->r[3]|c->r[3]; // 8020A03C
  c->r[25]=c->r[4]|c->r[4]; // 8020A040
  c->r[26]=c->r[5]|c->r[5]; // 8020A044
  c->r[27]=c->r[6]|c->r[6]; // 8020A048
  c->r[28]=c->r[7]|c->r[7]; // 8020A04C
  c->r[3]=c->r[1]+0x00000010u; // 8020A050
  c->lr=0x8020A058u; f_8011B6E4(c); // 8020A054
  c->r[3]=c->r[1]+0x00000010u; // 8020A058
  c->lr=0x8020A060u; f_80207878(c); // 8020A05C
  c->r[31]=c->r[3]|c->r[3]; // 8020A060
  c->r[3]=c->r[1]+0x00000010u; // 8020A064
  c->r[4]=0u+0xFFFFFFFFu; // 8020A068
  c->lr=0x8020A070u; f_8011B300(c); // 8020A06C
  cmps(c,0,(int32_t)c->r[27],0); // 8020A070
  c->r[30]=c->r[1]+0x00000018u; // 8020A074
  c->r[29]=0u+0x00000000u; // 8020A078
  if (crb(c,2)) { goto L_8020A08C; } // 8020A07C
  c->r[0]=R16(c->r[25]+0x00000030u); // 8020A080
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 8020A084
  if (crb(c,2)) { goto L_8020A0B0; } // 8020A088
L_8020A08C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8020A08C
  c->r[3]=c->r[31]|c->r[31]; // 8020A090
  c->r[4]=0u+0x00000030u; // 8020A094
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A098
  c->ctr=c->r[12]; // 8020A09C
  if (true) { c->lr=0x8020A0A4u; dispatch(c,c->ctr); } // 8020A0A0
  W8(c->r[1]+0x00000018u,c->r[3]); // 8020A0A4
  c->r[29]=0u+0x00000001u; // 8020A0A8
  c->r[30]=c->r[30]+0x00000001u; // 8020A0AC
L_8020A0B0:;
  cmps(c,0,(int32_t)c->r[27],0); // 8020A0B0
  if (crb(c,2)) { goto L_8020A0D4; } // 8020A0B4
  c->r[3]=c->r[25]|c->r[25]; // 8020A0B8
  c->r[4]=c->r[27]|c->r[27]; // 8020A0BC
  c->r[5]=c->r[30]|c->r[30]; // 8020A0C0
  c->r[6]=c->r[31]|c->r[31]; // 8020A0C4
  c->r[7]=c->r[28]|c->r[28]; // 8020A0C8
  c->lr=0x8020A0D0u; f_8020A3B4(c); // 8020A0CC
  c->r[29]=c->r[29]+c->r[3]; // 8020A0D0
L_8020A0D4:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 8020A0D4
  c->r[4]=c->r[25]|c->r[25]; // 8020A0D8
  c->r[9]=c->r[29]|c->r[29]; // 8020A0DC
  c->r[3]=c->r[1]+0x0000000Cu; // 8020A0E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8020A0E4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 8020A0E8
  c->r[6]=c->r[1]+0x00000008u; // 8020A0EC
  c->r[8]=c->r[1]+0x00000018u; // 8020A0F0
  c->r[7]=0u+0x00000000u; // 8020A0F4
  c->lr=0x8020A0FCu; f_80204E60(c); // 8020A0F8
  c->r[11]=c->r[1]+0x00000070u; // 8020A0FC
  c->lr=0x8020A104u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020A100
  c->r[0]=R32(c->r[1]+0x00000074u); // 8020A104
  c->lr=c->r[0]; // 8020A108
  c->r[1]=c->r[1]+0x00000070u; // 8020A10C
  return; // 8020A110
}

// fn_8020A114
void f_8020A114(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A114
  c->r[0]=c->lr; // 8020A118
  W32(c->r[1]+0x00000074u,c->r[0]); // 8020A11C
  c->r[11]=c->r[1]+0x00000070u; // 8020A120
  c->lr=0x8020A128u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020A124
  c->r[26]=c->r[3]|c->r[3]; // 8020A128
  c->r[16]=c->r[5]|c->r[5]; // 8020A12C
  c->r[15]=c->r[6]|c->r[6]; // 8020A130
  c->r[17]=c->r[7]|c->r[7]; // 8020A134
  c->r[18]=c->r[8]|c->r[8]; // 8020A138
  c->r[27]=c->r[9]|c->r[9]; // 8020A13C
  c->r[4]=c->r[26]|c->r[26]; // 8020A140
  c->r[3]=c->r[1]+0x00000008u; // 8020A144
  c->lr=0x8020A14Cu; f_8011B6E4(c); // 8020A148
  c->r[0]=c->r[15]|c->r[16]; cr0(c,c->r[0]); // 8020A14C
  if (!crb(c,2)) { goto L_8020A184; } // 8020A150
  c->r[12]=R32(c->r[18]+0x00000000u); // 8020A154
  c->r[3]=c->r[18]|c->r[18]; // 8020A158
  c->r[4]=0u+0x00000030u; // 8020A15C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A160
  c->ctr=c->r[12]; // 8020A164
  if (true) { c->lr=0x8020A16Cu; dispatch(c,c->ctr); } // 8020A168
  W8(c->r[17]+0x00000000u,c->r[3]); // 8020A16C
  c->r[3]=c->r[1]+0x00000008u; // 8020A170
  c->r[4]=0u+0xFFFFFFFFu; // 8020A174
  c->lr=0x8020A17Cu; f_8011B300(c); // 8020A178
  c->r[3]=0u+0x00000001u; // 8020A17C
  goto L_8020A39C; // 8020A180
L_8020A184:;
  c->r[3]=c->r[1]+0x00000008u; // 8020A184
  c->lr=0x8020A18Cu; f_8020A6C0(c); // 8020A188
  c->r[0]=R16(c->r[26]+0x00000030u); // 8020A18C
  c->r[25]=c->r[3]|c->r[3]; // 8020A190
  c->r[24]=0u+0x0000000Au; // 8020A194
  c->r[0]=c->r[0]&0x0000004Au; cr0(c,c->r[0]); // 8020A198
  cmps(c,0,(int32_t)c->r[0],64); // 8020A19C
  if (crb(c,2)) { goto L_8020A1B4; } // 8020A1A0
  if (!crb(c,0)) { goto L_8020A1C0; } // 8020A1A4
  cmps(c,0,(int32_t)c->r[0],8); // 8020A1A8
  if (crb(c,2)) { goto L_8020A1BC; } // 8020A1AC
  goto L_8020A1C0; // 8020A1B0
L_8020A1B4:;
  c->r[24]=0u+0x00000008u; // 8020A1B4
  goto L_8020A1C0; // 8020A1B8
L_8020A1BC:;
  c->r[24]=0u+0x00000010u; // 8020A1BC
L_8020A1C0:;
  c->r[23]=c->r[17]|c->r[17]; // 8020A1C0
  c->r[4]=c->r[25]|c->r[25]; // 8020A1C4
  c->r[3]=c->r[1]+0x00000010u; // 8020A1C8
  c->lr=0x8020A1D0u; f_8020A918(c); // 8020A1CC
  c->r[3]=c->r[1]+0x00000010u; // 8020A1D0
  c->lr=0x8020A1D8u; f_80031DBC(c); // 8020A1D4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8020A1D8
  c->r[21]=0u+0x00000000u; // 8020A1DC
  c->r[22]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[22]); // 8020A1E0
  c->r[20]=0u+0x00000000u; // 8020A1E4
  c->r[19]=0u+0x00000000u; // 8020A1E8
  if (crb(c,2)) { goto L_8020A208; } // 8020A1EC
  c->r[3]=c->r[1]+0x00000010u; // 8020A1F0
  c->lr=0x8020A1F8u; f_8020A8D0(c); // 8020A1F4
  c->r[19]=R8(c->r[3]+0x00000000u); // 8020A1F8
  cmps(c,0,(int32_t)c->r[19],0); // 8020A1FC
  if (!crb(c,2)) { goto L_8020A208; } // 8020A200
  c->r[22]=0u+0x00000000u; // 8020A204
L_8020A208:;
  cmps(c,0,(int32_t)c->r[27],0); // 8020A208
  if (crb(c,2)) { goto L_8020A214; } // 8020A20C
  c->r[22]=0u+0x00000000u; // 8020A210
L_8020A214:;
  cmps(c,0,(int32_t)c->r[22],0); // 8020A214
  if (crb(c,2)) { goto L_8020A238; } // 8020A218
  c->r[12]=R32(c->r[25]+0x00000000u); // 8020A21C
  c->r[3]=c->r[25]|c->r[25]; // 8020A220
  c->r[12]=R32(c->r[12]+0x00000010u); // 8020A224
  c->ctr=c->r[12]; // 8020A228
  if (true) { c->lr=0x8020A230u; dispatch(c,c->ctr); } // 8020A22C
  c->r[25]=c->r[3]|c->r[3]; // 8020A230
  goto L_8020A23C; // 8020A234
L_8020A238:;
  c->r[25]=0u+0x00000000u; // 8020A238
L_8020A23C:;
  c->r[0]=R16(c->r[26]+0x00000030u); // 8020A23C
  c->r[29]=0u+0x00000030u; // 8020A240
  c->r[30]=0u+0x00000037u; // 8020A244
  c->r[27]=0u+0x0000000Au; // 8020A248
  c->r[3]=rotl(c->r[0],0)&0x00004000u; // 8020A24C
  c->r[28]=0u+0x00000000u; // 8020A250
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8020A254
  c->r[31]=0u+0x00000057u; // 8020A258
  c->r[26]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8020A25C
  goto L_8020A36C; // 8020A260
L_8020A264:;
  c->r[3]=c->r[16]|c->r[16]; // 8020A264
  c->r[4]=c->r[15]|c->r[15]; // 8020A268
  c->r[6]=c->r[24]|c->r[24]; // 8020A26C
  c->r[5]=0u+0x00000000u; // 8020A270
  c->lr=0x8020A278u; f_8010A1C0(c); // 8020A274
  c->r[0]=addc(c,~c->r[27],c->r[4],1); // 8020A278
  c->r[0]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 8020A27C
  c->r[0]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 8020A280
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 8020A284
  if (crb(c,2)) { goto L_8020A2AC; } // 8020A288
  c->r[12]=R32(c->r[18]+0x00000000u); // 8020A28C
  c->r[0]=addc(c,c->r[4],c->r[29],0); // 8020A290
  c->r[3]=c->r[18]|c->r[18]; // 8020A294
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A298
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020A29C
  c->ctr=c->r[12]; // 8020A2A0
  if (true) { c->lr=0x8020A2A8u; dispatch(c,c->ctr); } // 8020A2A4
  goto L_8020A2F0; // 8020A2A8
L_8020A2AC:;
  cmps(c,0,(int32_t)c->r[26],0); // 8020A2AC
  if (crb(c,2)) { goto L_8020A2D4; } // 8020A2B0
  c->r[12]=R32(c->r[18]+0x00000000u); // 8020A2B4
  c->r[0]=addc(c,c->r[4],c->r[30],0); // 8020A2B8
  c->r[3]=c->r[18]|c->r[18]; // 8020A2BC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A2C0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020A2C4
  c->ctr=c->r[12]; // 8020A2C8
  if (true) { c->lr=0x8020A2D0u; dispatch(c,c->ctr); } // 8020A2CC
  goto L_8020A2F0; // 8020A2D0
L_8020A2D4:;
  c->r[12]=R32(c->r[18]+0x00000000u); // 8020A2D4
  c->r[0]=addc(c,c->r[4],c->r[31],0); // 8020A2D8
  c->r[3]=c->r[18]|c->r[18]; // 8020A2DC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A2E0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020A2E4
  c->ctr=c->r[12]; // 8020A2E8
  if (true) { c->lr=0x8020A2F0u; dispatch(c,c->ctr); } // 8020A2EC
L_8020A2F0:;
  W8(c->r[23]+0x00000000u,c->r[3]); // 8020A2F0
  c->r[3]=c->r[16]|c->r[16]; // 8020A2F4
  c->r[4]=c->r[15]|c->r[15]; // 8020A2F8
  c->r[6]=c->r[24]|c->r[24]; // 8020A2FC
  c->r[5]=0u+0x00000000u; // 8020A300
  c->r[23]=c->r[23]+0x00000001u; // 8020A304
  c->lr=0x8020A30Cu; f_80109F9C(c); // 8020A308
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 8020A30C
  c->r[15]=c->r[4]|c->r[4]; // 8020A310
  c->r[16]=c->r[3]|c->r[3]; // 8020A314
  if (crb(c,2)) { goto L_8020A36C; } // 8020A318
  cmps(c,0,(int32_t)c->r[22],0); // 8020A31C
  if (crb(c,2)) { goto L_8020A36C; } // 8020A320
  c->r[20]=c->r[20]+0x00000001u; // 8020A324
  c->r[0]=rotl(c->r[20],0)&0x000000FFu; // 8020A328
  cmpu(c,0,c->r[0],c->r[19]); // 8020A32C
  if (!crb(c,2)) { goto L_8020A36C; } // 8020A330
  W8(c->r[23]+0x00000000u,c->r[25]); // 8020A334
  c->r[23]=c->r[23]+0x00000001u; // 8020A338
  c->r[3]=c->r[1]+0x00000010u; // 8020A33C
  c->lr=0x8020A344u; f_80031DBC(c); // 8020A340
  c->r[21]=c->r[21]+0x00000001u; // 8020A344
  cmpu(c,0,c->r[21],c->r[3]); // 8020A348
  if (!crb(c,0)) { goto L_8020A368; } // 8020A34C
  c->r[3]=c->r[1]+0x00000010u; // 8020A350
  c->lr=0x8020A358u; f_8020A8D0(c); // 8020A354
  c->r[19]=R8(c->r[3]+c->r[21]); // 8020A358
  cmps(c,0,(int32_t)c->r[19],0); // 8020A35C
  if (!crb(c,2)) { goto L_8020A368; } // 8020A360
  c->r[22]=0u+0x00000000u; // 8020A364
L_8020A368:;
  c->r[20]=0u+0x00000000u; // 8020A368
L_8020A36C:;
  c->r[0]=c->r[15]|c->r[16]; cr0(c,c->r[0]); // 8020A36C
  if (!crb(c,2)) { IRQCHK(c); goto L_8020A264; } // 8020A370
  c->r[3]=c->r[17]|c->r[17]; // 8020A374
  c->r[4]=c->r[23]|c->r[23]; // 8020A378
  c->lr=0x8020A380u; f_8020A7FC(c); // 8020A37C
  c->r[3]=c->r[1]+0x00000010u; // 8020A380
  c->r[4]=0u+0xFFFFFFFFu; // 8020A384
  c->lr=0x8020A38Cu; f_8000C978(c); // 8020A388
  c->r[3]=c->r[1]+0x00000008u; // 8020A38C
  c->r[4]=0u+0xFFFFFFFFu; // 8020A390
  c->lr=0x8020A398u; f_8011B300(c); // 8020A394
  c->r[3]=c->r[23]-c->r[17]; // 8020A398
L_8020A39C:;
  c->r[11]=c->r[1]+0x00000070u; // 8020A39C
  c->lr=0x8020A3A4u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020A3A0
  c->r[0]=R32(c->r[1]+0x00000074u); // 8020A3A4
  c->lr=c->r[0]; // 8020A3A8
  c->r[1]=c->r[1]+0x00000070u; // 8020A3AC
  return; // 8020A3B0
}

// fn_8020A3B4
void f_8020A3B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A3B4
  c->r[0]=c->lr; // 8020A3B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8020A3BC
  c->r[11]=c->r[1]+0x00000050u; // 8020A3C0
  c->lr=0x8020A3C8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020A3C4
  c->r[20]=c->r[3]|c->r[3]; // 8020A3C8
  c->r[22]=c->r[4]|c->r[4]; // 8020A3CC
  c->r[23]=c->r[5]|c->r[5]; // 8020A3D0
  c->r[24]=c->r[6]|c->r[6]; // 8020A3D4
  c->r[31]=c->r[7]|c->r[7]; // 8020A3D8
  c->r[4]=c->r[20]|c->r[20]; // 8020A3DC
  c->r[3]=c->r[1]+0x00000008u; // 8020A3E0
  c->lr=0x8020A3E8u; f_8011B6E4(c); // 8020A3E4
  cmps(c,0,(int32_t)c->r[22],0); // 8020A3E8
  if (!crb(c,2)) { goto L_8020A420; } // 8020A3EC
  c->r[12]=R32(c->r[24]+0x00000000u); // 8020A3F0
  c->r[3]=c->r[24]|c->r[24]; // 8020A3F4
  c->r[4]=0u+0x00000030u; // 8020A3F8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A3FC
  c->ctr=c->r[12]; // 8020A400
  if (true) { c->lr=0x8020A408u; dispatch(c,c->ctr); } // 8020A404
  W8(c->r[23]+0x00000000u,c->r[3]); // 8020A408
  c->r[3]=c->r[1]+0x00000008u; // 8020A40C
  c->r[4]=0u+0xFFFFFFFFu; // 8020A410
  c->lr=0x8020A418u; f_8011B300(c); // 8020A414
  c->r[3]=0u+0x00000001u; // 8020A418
  goto L_8020A5F4; // 8020A41C
L_8020A420:;
  c->r[3]=c->r[1]+0x00000008u; // 8020A420
  c->lr=0x8020A428u; f_8020A6C0(c); // 8020A424
  c->r[0]=R16(c->r[20]+0x00000030u); // 8020A428
  c->r[21]=c->r[3]|c->r[3]; // 8020A42C
  c->r[30]=0u+0x0000000Au; // 8020A430
  c->r[0]=c->r[0]&0x0000004Au; cr0(c,c->r[0]); // 8020A434
  cmps(c,0,(int32_t)c->r[0],64); // 8020A438
  if (crb(c,2)) { goto L_8020A450; } // 8020A43C
  if (!crb(c,0)) { goto L_8020A45C; } // 8020A440
  cmps(c,0,(int32_t)c->r[0],8); // 8020A444
  if (crb(c,2)) { goto L_8020A458; } // 8020A448
  goto L_8020A45C; // 8020A44C
L_8020A450:;
  c->r[30]=0u+0x00000008u; // 8020A450
  goto L_8020A45C; // 8020A454
L_8020A458:;
  c->r[30]=0u+0x00000010u; // 8020A458
L_8020A45C:;
  c->r[29]=c->r[23]|c->r[23]; // 8020A45C
  c->r[4]=c->r[21]|c->r[21]; // 8020A460
  c->r[3]=c->r[1]+0x00000010u; // 8020A464
  c->lr=0x8020A46Cu; f_8020A918(c); // 8020A468
  c->r[3]=c->r[1]+0x00000010u; // 8020A46C
  c->lr=0x8020A474u; f_80031DBC(c); // 8020A470
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8020A474
  c->r[27]=0u+0x00000000u; // 8020A478
  c->r[28]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[28]); // 8020A47C
  c->r[26]=0u+0x00000000u; // 8020A480
  c->r[25]=0u+0x00000000u; // 8020A484
  if (crb(c,2)) { goto L_8020A4A4; } // 8020A488
  c->r[3]=c->r[1]+0x00000010u; // 8020A48C
  c->lr=0x8020A494u; f_8020A8D0(c); // 8020A490
  c->r[25]=R8(c->r[3]+0x00000000u); // 8020A494
  cmps(c,0,(int32_t)c->r[25],0); // 8020A498
  if (!crb(c,2)) { goto L_8020A4A4; } // 8020A49C
  c->r[28]=0u+0x00000000u; // 8020A4A0
L_8020A4A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020A4A4
  if (crb(c,2)) { goto L_8020A4B0; } // 8020A4A8
  c->r[28]=0u+0x00000000u; // 8020A4AC
L_8020A4B0:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020A4B0
  if (crb(c,2)) { goto L_8020A4D4; } // 8020A4B4
  c->r[12]=R32(c->r[21]+0x00000000u); // 8020A4B8
  c->r[3]=c->r[21]|c->r[21]; // 8020A4BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 8020A4C0
  c->ctr=c->r[12]; // 8020A4C4
  if (true) { c->lr=0x8020A4CCu; dispatch(c,c->ctr); } // 8020A4C8
  c->r[31]=c->r[3]|c->r[3]; // 8020A4CC
  goto L_8020A4D8; // 8020A4D0
L_8020A4D4:;
  c->r[31]=0u+0x00000000u; // 8020A4D4
L_8020A4D8:;
  c->r[0]=R16(c->r[20]+0x00000030u); // 8020A4D8
  c->r[3]=rotl(c->r[0],0)&0x00004000u; // 8020A4DC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8020A4E0
  c->r[21]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8020A4E4
  goto L_8020A5C4; // 8020A4E8
L_8020A4EC:;
  c->r[0]=divwu(c->r[22],c->r[30]); // 8020A4EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[30]); // 8020A4F0
  c->r[4]=c->r[22]-c->r[0]; // 8020A4F4
  cmpu(c,0,c->r[4],0x0000000Au); // 8020A4F8
  if (!crb(c,0)) { goto L_8020A520; } // 8020A4FC
  c->r[12]=R32(c->r[24]+0x00000000u); // 8020A500
  c->r[0]=c->r[4]+0x00000030u; // 8020A504
  c->r[3]=c->r[24]|c->r[24]; // 8020A508
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A50C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020A510
  c->ctr=c->r[12]; // 8020A514
  if (true) { c->lr=0x8020A51Cu; dispatch(c,c->ctr); } // 8020A518
  goto L_8020A564; // 8020A51C
L_8020A520:;
  cmps(c,0,(int32_t)c->r[21],0); // 8020A520
  if (crb(c,2)) { goto L_8020A548; } // 8020A524
  c->r[12]=R32(c->r[24]+0x00000000u); // 8020A528
  c->r[0]=c->r[4]+0x00000037u; // 8020A52C
  c->r[3]=c->r[24]|c->r[24]; // 8020A530
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A534
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020A538
  c->ctr=c->r[12]; // 8020A53C
  if (true) { c->lr=0x8020A544u; dispatch(c,c->ctr); } // 8020A540
  goto L_8020A564; // 8020A544
L_8020A548:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 8020A548
  c->r[0]=c->r[4]+0x00000057u; // 8020A54C
  c->r[3]=c->r[24]|c->r[24]; // 8020A550
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020A554
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020A558
  c->ctr=c->r[12]; // 8020A55C
  if (true) { c->lr=0x8020A564u; dispatch(c,c->ctr); } // 8020A560
L_8020A564:;
  c->r[22]=divwu(c->r[22],c->r[30]); cr0(c,c->r[22]); // 8020A564
  W8(c->r[29]+0x00000000u,c->r[3]); // 8020A568
  c->r[29]=c->r[29]+0x00000001u; // 8020A56C
  if (crb(c,2)) { goto L_8020A5C4; } // 8020A570
  cmps(c,0,(int32_t)c->r[28],0); // 8020A574
  if (crb(c,2)) { goto L_8020A5C4; } // 8020A578
  c->r[26]=c->r[26]+0x00000001u; // 8020A57C
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 8020A580
  cmpu(c,0,c->r[0],c->r[25]); // 8020A584
  if (!crb(c,2)) { goto L_8020A5C4; } // 8020A588
  W8(c->r[29]+0x00000000u,c->r[31]); // 8020A58C
  c->r[29]=c->r[29]+0x00000001u; // 8020A590
  c->r[3]=c->r[1]+0x00000010u; // 8020A594
  c->lr=0x8020A59Cu; f_80031DBC(c); // 8020A598
  c->r[27]=c->r[27]+0x00000001u; // 8020A59C
  cmpu(c,0,c->r[27],c->r[3]); // 8020A5A0
  if (!crb(c,0)) { goto L_8020A5C0; } // 8020A5A4
  c->r[3]=c->r[1]+0x00000010u; // 8020A5A8
  c->lr=0x8020A5B0u; f_8020A8D0(c); // 8020A5AC
  c->r[25]=R8(c->r[3]+c->r[27]); // 8020A5B0
  cmps(c,0,(int32_t)c->r[25],0); // 8020A5B4
  if (!crb(c,2)) { goto L_8020A5C0; } // 8020A5B8
  c->r[28]=0u+0x00000000u; // 8020A5BC
L_8020A5C0:;
  c->r[26]=0u+0x00000000u; // 8020A5C0
L_8020A5C4:;
  cmps(c,0,(int32_t)c->r[22],0); // 8020A5C4
  if (!crb(c,2)) { IRQCHK(c); goto L_8020A4EC; } // 8020A5C8
  c->r[3]=c->r[23]|c->r[23]; // 8020A5CC
  c->r[4]=c->r[29]|c->r[29]; // 8020A5D0
  c->lr=0x8020A5D8u; f_8020A7FC(c); // 8020A5D4
  c->r[3]=c->r[1]+0x00000010u; // 8020A5D8
  c->r[4]=0u+0xFFFFFFFFu; // 8020A5DC
  c->lr=0x8020A5E4u; f_8000C978(c); // 8020A5E0
  c->r[3]=c->r[1]+0x00000008u; // 8020A5E4
  c->r[4]=0u+0xFFFFFFFFu; // 8020A5E8
  c->lr=0x8020A5F0u; f_8011B300(c); // 8020A5EC
  c->r[3]=c->r[29]-c->r[23]; // 8020A5F0
L_8020A5F4:;
  c->r[11]=c->r[1]+0x00000050u; // 8020A5F4
  c->lr=0x8020A5FCu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020A5F8
  c->r[0]=R32(c->r[1]+0x00000054u); // 8020A5FC
  c->lr=c->r[0]; // 8020A600
  c->r[1]=c->r[1]+0x00000050u; // 8020A604
  return; // 8020A608
}

// fn_8020A60C
void f_8020A60C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A60C
  c->r[0]=c->lr; // 8020A610
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020A614
  c->r[11]=c->r[1]+0x00000020u; // 8020A618
  c->lr=0x8020A620u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020A61C
  c->r[29]=c->r[3]|c->r[3]; // 8020A620
  c->r[30]=c->r[4]|c->r[4]; // 8020A624
  c->lr=0x8020A62Cu; f_8000C958(c); // 8020A628
  c->r[3]=c->r[30]|c->r[30]; // 8020A62C
  c->lr=0x8020A634u; f_80109598(c); // 8020A630
  c->r[31]=c->r[3]|c->r[3]; // 8020A634
  c->r[3]=c->r[29]|c->r[29]; // 8020A638
  c->r[4]=c->r[31]|c->r[31]; // 8020A63C
  c->lr=0x8020A644u; f_80042F14(c); // 8020A640
  c->r[0]=R8(c->r[1]+0x00000009u); // 8020A644
  c->r[3]=c->r[29]|c->r[29]; // 8020A648
  c->r[6]=c->r[30]|c->r[30]; // 8020A64C
  c->r[7]=c->r[30]+c->r[31]; // 8020A650
  W8(c->r[1]+0x00000008u,c->r[0]); // 8020A654
  c->r[8]=c->r[1]+0x00000008u; // 8020A658
  c->r[4]=0u+0x00000000u; // 8020A65C
  c->r[5]=0u+0x00000000u; // 8020A660
  c->lr=0x8020A668u; f_8000C9D4(c); // 8020A664
  c->r[11]=c->r[1]+0x00000020u; // 8020A668
  c->lr=0x8020A670u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020A66C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020A670
  c->lr=c->r[0]; // 8020A674
  c->r[1]=c->r[1]+0x00000020u; // 8020A678
  return; // 8020A67C
}

// fn_8020A680
void f_8020A680(Ctx* __restrict c) {
  c->ctr=c->r[5]; // 8020A680
  cmps(c,0,(int32_t)c->r[5],0); // 8020A684
  if (!crb(c,1)) return; // 8020A688
L_8020A68C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8020A68C
  c->r[4]=c->r[4]+0x00000001u; // 8020A690
  W8(c->r[3]+0x00000000u,c->r[0]); // 8020A694
  c->r[3]=c->r[3]+0x00000001u; // 8020A698
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020A68C; } // 8020A69C
  return; // 8020A6A0
}

// fn_8020A6A4
void f_8020A6A4(Ctx* __restrict c) {
  c->ctr=c->r[5]; // 8020A6A4
  cmps(c,0,(int32_t)c->r[5],0); // 8020A6A8
  if (!crb(c,1)) return; // 8020A6AC
L_8020A6B0:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 8020A6B0
  c->r[3]=c->r[3]+0x00000001u; // 8020A6B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020A6B0; } // 8020A6B8
  return; // 8020A6BC
}

// fn_8020A6C0
void f_8020A6C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A6C0
  c->r[0]=c->lr; // 8020A6C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020A6C8
  c->r[11]=c->r[1]+0x00000030u; // 8020A6CC
  c->lr=0x8020A6D4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020A6D0
  c->r[4]=0u+0x80380000u; // 8020A6D4
  c->r[28]=c->r[3]|c->r[3]; // 8020A6D8
  c->r[3]=c->r[4]+0x0000298Cu; // 8020A6DC
  c->lr=0x8020A6E4u; f_80207850(c); // 8020A6E0
  c->r[4]=R32(c->r[28]+0x00000000u); // 8020A6E4
  c->r[31]=c->r[3]|c->r[3]; // 8020A6E8
  c->r[0]=R32(c->r[4]+0x00000004u); // 8020A6EC
  cmpu(c,0,c->r[3],c->r[0]); // 8020A6F0
  if (!crb(c,0)) { goto L_8020A70C; } // 8020A6F4
  c->r[4]=R32(c->r[4]+0x00000000u); // 8020A6F8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020A6FC
  c->r[3]=R32(c->r[4]+c->r[0]); // 8020A700
  cmps(c,0,(int32_t)c->r[3],0); // 8020A704
  if (!crb(c,2)) { goto L_8020A7E4; } // 8020A708
L_8020A70C:;
  c->r[3]=0u+0x00000030u; // 8020A70C
  c->lr=0x8020A714u; f_8009228C(c); // 8020A710
  cmps(c,0,(int32_t)c->r[3],0); // 8020A714
  c->r[30]=c->r[3]|c->r[3]; // 8020A718
  if (crb(c,2)) { goto L_8020A7B4; } // 8020A71C
  c->r[0]=0u+0x00000000u; // 8020A720
  c->r[5]=0u+0x802A0000u; // 8020A724
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020A728
  c->r[5]=c->r[5]+0x000040C8u; // 8020A72C
  c->r[4]=0u+0x0000002Eu; // 8020A730
  c->r[0]=0u+0x0000002Cu; // 8020A734
  W32(c->r[3]+0x00000000u,c->r[5]); // 8020A738
  W8(c->r[3]+0x00000008u,c->r[4]); // 8020A73C
  W8(c->r[3]+0x00000009u,c->r[0]); // 8020A740
  c->r[3]=c->r[3]+0x0000000Cu; // 8020A744
  c->lr=0x8020A74Cu; f_8000C958(c); // 8020A748
  c->r[3]=c->r[30]+0x00000018u; // 8020A74C
  c->lr=0x8020A754u; f_8000C958(c); // 8020A750
  c->r[3]=c->r[30]+0x00000024u; // 8020A754
  c->lr=0x8020A75Cu; f_8000C958(c); // 8020A758
  c->r[4]=0u+0x802A0000u; // 8020A75C
  c->r[3]=c->r[1]+0x00000014u; // 8020A760
  c->r[4]=c->r[4]+0x00004116u; // 8020A764
  c->r[5]=0u+0x00000000u; // 8020A768
  c->lr=0x8020A770u; f_8020A60C(c); // 8020A76C
  c->r[3]=c->r[30]+0x00000018u; // 8020A770
  c->r[4]=c->r[1]+0x00000014u; // 8020A774
  c->lr=0x8020A77Cu; f_80031DDC(c); // 8020A778
  c->r[3]=c->r[1]+0x00000014u; // 8020A77C
  c->r[4]=0u+0xFFFFFFFFu; // 8020A780
  c->lr=0x8020A788u; f_8000C978(c); // 8020A784
  c->r[4]=0u+0x802A0000u; // 8020A788
  c->r[3]=c->r[1]+0x00000008u; // 8020A78C
  c->r[4]=c->r[4]+0x00004110u; // 8020A790
  c->r[5]=0u+0x00000000u; // 8020A794
  c->lr=0x8020A79Cu; f_8020A60C(c); // 8020A798
  c->r[3]=c->r[30]+0x00000024u; // 8020A79C
  c->r[4]=c->r[1]+0x00000008u; // 8020A7A0
  c->lr=0x8020A7A8u; f_80031DDC(c); // 8020A7A4
  c->r[3]=c->r[1]+0x00000008u; // 8020A7A8
  c->r[4]=0u+0xFFFFFFFFu; // 8020A7AC
  c->lr=0x8020A7B4u; f_8000C978(c); // 8020A7B0
L_8020A7B4:;
  c->r[3]=0u+0x80380000u; // 8020A7B4
  c->r[29]=R32(c->r[28]+0x00000000u); // 8020A7B8
  c->r[3]=c->r[3]+0x0000298Cu; // 8020A7BC
  c->lr=0x8020A7C4u; f_80207850(c); // 8020A7C0
  c->r[5]=c->r[3]|c->r[3]; // 8020A7C4
  c->r[3]=c->r[29]|c->r[29]; // 8020A7C8
  c->r[4]=c->r[30]|c->r[30]; // 8020A7CC
  c->lr=0x8020A7D4u; f_8011BE80(c); // 8020A7D0
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020A7D4
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8020A7D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8020A7DC
  c->r[3]=R32(c->r[3]+c->r[0]); // 8020A7E0
L_8020A7E4:;
  c->r[11]=c->r[1]+0x00000030u; // 8020A7E4
  c->lr=0x8020A7ECu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020A7E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020A7EC
  c->lr=c->r[0]; // 8020A7F0
  c->r[1]=c->r[1]+0x00000030u; // 8020A7F4
  return; // 8020A7F8
}

// fn_8020A7FC
void f_8020A7FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A7FC
  c->r[0]=c->lr; // 8020A800
  cmpu(c,0,c->r[3],c->r[4]); // 8020A804
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020A808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020A80C
  c->r[31]=c->r[3]|c->r[3]; // 8020A810
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020A814
  c->r[30]=c->r[4]|c->r[4]; // 8020A818
  if (crb(c,2)) { goto L_8020A840; } // 8020A81C
  goto L_8020A834; // 8020A820
L_8020A824:;
  c->r[3]=c->r[31]|c->r[31]; // 8020A824
  c->r[4]=c->r[30]|c->r[30]; // 8020A828
  c->lr=0x8020A830u; f_8020A858(c); // 8020A82C
  c->r[31]=c->r[31]+0x00000001u; // 8020A830
L_8020A834:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8020A834
  cmpu(c,0,c->r[31],c->r[30]); // 8020A838
  if (crb(c,0)) { IRQCHK(c); goto L_8020A824; } // 8020A83C
L_8020A840:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020A840
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020A844
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020A848
  c->lr=c->r[0]; // 8020A84C
  c->r[1]=c->r[1]+0x00000010u; // 8020A850
  return; // 8020A854
}

// fn_8020A858
void f_8020A858(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0x00000000u); // 8020A858
  c->r[0]=R8(c->r[4]+0x00000000u); // 8020A85C
  W8(c->r[3]+0x00000000u,c->r[0]); // 8020A860
  W8(c->r[4]+0x00000000u,c->r[5]); // 8020A864
  return; // 8020A868
}

// dtor_8020A86C
void f_8020A86C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A86C
  c->r[0]=c->lr; // 8020A870
  cmps(c,0,(int32_t)c->r[3],0); // 8020A874
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020A878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020A87C
  c->r[31]=c->r[4]|c->r[4]; // 8020A880
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020A884
  c->r[30]=c->r[3]|c->r[3]; // 8020A888
  if (crb(c,2)) { goto L_8020A8A8; } // 8020A88C
  c->r[4]=0u+0xFFFFFFFFu; // 8020A890
  c->lr=0x8020A898u; f_8000C978(c); // 8020A894
  cmps(c,0,(int32_t)c->r[31],0); // 8020A898
  if (!crb(c,1)) { goto L_8020A8A8; } // 8020A89C
  c->r[3]=c->r[30]|c->r[30]; // 8020A8A0
  c->lr=0x8020A8A8u; f_8009230C(c); // 8020A8A4
L_8020A8A8:;
  c->r[3]=c->r[30]|c->r[30]; // 8020A8A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020A8AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020A8B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020A8B4
  c->lr=c->r[0]; // 8020A8B8
  c->r[1]=c->r[1]+0x00000010u; // 8020A8BC
  return; // 8020A8C0
}

// fn_8020A8C4
void f_8020A8C4(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000008u); // 8020A8C4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020A8C8
  return; // 8020A8CC
}

// fn_8020A8D0
void f_8020A8D0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020A8D0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8020A8D4
  if (!crb(c,2)) { goto L_8020A8E4; } // 8020A8D8
  c->r[3]=c->r[3]+0x00000001u; // 8020A8DC
  return; // 8020A8E0
L_8020A8E4:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8020A8E4
  return; // 8020A8E8
}

// fn_8020A8EC
void f_8020A8EC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020A8EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8020A8F0
  if (!crb(c,2)) { goto L_8020A908; } // 8020A8F4
  c->r[0]=R8(c->r[3]+0x00000000u); // 8020A8F8
  c->r[4]=c->r[3]+0x00000001u; // 8020A8FC
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 8020A900
  goto L_8020A910; // 8020A904
L_8020A908:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8020A908
  c->r[0]=R32(c->r[3]+0x00000004u); // 8020A90C
L_8020A910:;
  c->r[3]=c->r[4]+c->r[0]; // 8020A910
  return; // 8020A914
}

// fn_8020A918
void f_8020A918(Ctx* __restrict c) {
  c->r[12]=R32(c->r[4]+0x00000000u); // 8020A918
  c->r[12]=R32(c->r[12]+0x00000014u); // 8020A91C
  c->ctr=c->r[12]; // 8020A920
  if (true) { dispatch(c,c->ctr); return; } // 8020A924
}

// fn_8020A928
void f_8020A928(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0x0000000Cu; // 8020A928
  f_80033A10(c); return; // 8020A92C
}

// fn_8020A930
void f_8020A930(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000009u); // 8020A930
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020A934
  return; // 8020A938
}

// fn_8020A93C
void f_8020A93C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020A93C
  c->r[0]=c->lr; // 8020A940
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020A944
  c->r[11]=c->r[1]+0x00000060u; // 8020A948
  c->lr=0x8020A950u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020A94C
  W32(c->r[1]+0x00000008u,c->r[5]); // 8020A950
  c->r[30]=0u+0x802A0000u; // 8020A954
  c->r[19]=c->r[3]|c->r[3]; // 8020A958
  c->r[20]=c->r[4]|c->r[4]; // 8020A95C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020A960
  c->r[21]=c->r[6]|c->r[6]; // 8020A964
  c->r[22]=c->r[7]|c->r[7]; // 8020A968
  c->r[30]=c->r[30]+0x00003408u; // 8020A96C
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 8020A970
  if (!crb(c,2)) { goto L_8020A98C; } // 8020A974
  c->r[0]=R8(c->r[3]+0x00000000u); // 8020A978
  c->r[29]=c->r[3]+0x00000001u; // 8020A97C
  c->r[27]=0u+0x0000000Bu; // 8020A980
  c->r[28]=rotl(c->r[0],0)&0x0000007Fu; // 8020A984
  goto L_8020A998; // 8020A988
L_8020A98C:;
  c->r[29]=R32(c->r[3]+0x00000008u); // 8020A98C
  c->r[27]=rotl(c->r[0],0)&0x7FFFFFFFu; // 8020A990
  c->r[28]=R32(c->r[3]+0x00000004u); // 8020A994
L_8020A998:;
  cmpu(c,0,c->r[4],c->r[28]); // 8020A998
  if (!crb(c,1)) { goto L_8020A9C0; } // 8020A99C
  c->r[3]=c->r[1]+0x0000001Cu; // 8020A9A0
  c->r[4]=c->r[30]+0x00000A2Au; // 8020A9A4
  c->lr=0x8020A9ACu; f_802072E0(c); // 8020A9A8
  c->r[5]=0u+0x80120000u; // 8020A9AC
  c->r[4]=c->r[3]|c->r[3]; // 8020A9B0
  c->r[3]=c->r[30]+0x000009F3u; // 8020A9B4
  c->r[5]=c->r[5]+0xFFFFD68Cu; // 8020A9B8
  c->lr=0x8020A9C0u; f_8010BE30(c); // 8020A9BC
L_8020A9C0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8020A9C0
  c->r[3]=c->r[28]-c->r[20]; // 8020A9C4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8020A9C8
  c->r[4]=c->r[1]+0x00000008u; // 8020A9CC
  cmpu(c,0,c->r[3],c->r[0]); // 8020A9D0
  if (!crb(c,0)) { goto L_8020A9DC; } // 8020A9D4
  c->r[4]=c->r[1]+0x0000000Cu; // 8020A9D8
L_8020A9DC:;
  c->r[3]=0u+0x80000000u; // 8020A9DC
  c->r[26]=R32(c->r[4]+0x00000000u); // 8020A9E0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8020A9E4
  cmpu(c,0,c->r[21],c->r[0]); // 8020A9E8
  if (crb(c,1)) { goto L_8020AA00; } // 8020A9EC
  c->r[3]=c->r[28]-c->r[26]; // 8020A9F0
  c->r[0]=c->r[0]-c->r[21]; // 8020A9F4
  cmpu(c,0,c->r[3],c->r[0]); // 8020A9F8
  if (!crb(c,1)) { goto L_8020AA20; } // 8020A9FC
L_8020AA00:;
  c->r[3]=c->r[1]+0x00000010u; // 8020AA00
  c->r[4]=c->r[30]+0x00000A45u; // 8020AA04
  c->lr=0x8020AA0Cu; f_80206F68(c); // 8020AA08
  c->r[5]=0u+0x80120000u; // 8020AA0C
  c->r[4]=c->r[3]|c->r[3]; // 8020AA10
  c->r[3]=c->r[30]+0x000003CEu; // 8020AA14
  c->r[5]=c->r[5]+0xFFFFD5F8u; // 8020AA18
  c->lr=0x8020AA20u; f_8010BE30(c); // 8020AA1C
L_8020AA20:;
  c->r[3]=c->r[28]-c->r[26]; // 8020AA20
  c->r[0]=c->r[20]+c->r[26]; // 8020AA24
  c->r[25]=c->r[21]+c->r[3]; // 8020AA28
  cmpu(c,0,c->r[25],c->r[27]); // 8020AA2C
  c->r[28]=c->r[28]-c->r[0]; // 8020AA30
  if (crb(c,0)) { goto L_8020AB14; } // 8020AA34
  c->r[3]=c->r[27]+0x0000000Fu; // 8020AA38
  c->r[0]=c->r[25]+0x00000001u; // 8020AA3C
  c->r[24]=rotl(c->r[3],0)&0xFFFFFFF0u; // 8020AA40
  goto L_8020AA54; // 8020AA44
L_8020AA48:;
  c->r[3]=rotl(c->r[24],1)&0xFFFFFFFEu; // 8020AA48
  c->r[3]=c->r[3]+0x0000000Fu; // 8020AA4C
  c->r[24]=rotl(c->r[3],0)&0xFFFFFFF0u; // 8020AA50
L_8020AA54:;
  cmpu(c,0,c->r[24],c->r[0]); // 8020AA54
  if (crb(c,0)) { IRQCHK(c); goto L_8020AA48; } // 8020AA58
  c->r[3]=c->r[19]|c->r[19]; // 8020AA5C
  c->r[4]=c->r[24]|c->r[24]; // 8020AA60
  c->r[5]=0u+0x00000000u; // 8020AA64
  c->lr=0x8020AA6Cu; f_80207944(c); // 8020AA68
  cmps(c,0,(int32_t)c->r[20],0); // 8020AA6C
  c->r[23]=c->r[3]|c->r[3]; // 8020AA70
  if (crb(c,2)) { goto L_8020AA84; } // 8020AA74
  c->r[4]=c->r[29]|c->r[29]; // 8020AA78
  c->r[5]=c->r[20]|c->r[20]; // 8020AA7C
  c->lr=0x8020AA84u; f_80004338(c); // 8020AA80
L_8020AA84:;
  c->r[18]=c->r[23]+c->r[20]; // 8020AA84
  c->r[5]=c->r[21]|c->r[21]; // 8020AA88
  c->r[3]=c->r[18]|c->r[18]; // 8020AA8C
  c->r[4]=rotl(c->r[22],0)&0x000000FFu; // 8020AA90
  c->lr=0x8020AA98u; f_8000443C(c); // 8020AA94
  cmps(c,0,(int32_t)c->r[28],0); // 8020AA98
  if (crb(c,2)) { goto L_8020AAB4; } // 8020AA9C
  c->r[0]=c->r[29]+c->r[20]; // 8020AAA0
  c->r[5]=c->r[28]|c->r[28]; // 8020AAA4
  c->r[3]=c->r[18]+c->r[21]; // 8020AAA8
  c->r[4]=c->r[26]+c->r[0]; // 8020AAAC
  c->lr=0x8020AAB4u; f_80004338(c); // 8020AAB0
L_8020AAB4:;
  c->r[0]=R8(c->r[30]+0x00000CBCu); // 8020AAB4
  cmps(c,0,(int32_t)c->r[31],0); // 8020AAB8
  W8(c->r[23]+c->r[25],c->r[0]); // 8020AABC
  if (crb(c,2)) { goto L_8020AAF0; } // 8020AAC0
  c->r[5]=c->r[27]|c->r[27]; // 8020AAC4
  c->r[7]=c->r[27]|c->r[27]; // 8020AAC8
  c->r[8]=c->r[29]|c->r[29]; // 8020AACC
  c->r[4]=c->r[30]+0x00000998u; // 8020AAD0
  c->r[3]=0u+0x00000006u; // 8020AAD4
  c->r[6]=0u+0x00000001u; // 8020AAD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020AADC
  c->lr=0x8020AAE4u; f_8020B328(c); // 8020AAE0
  c->r[3]=c->r[29]|c->r[29]; // 8020AAE4
  c->lr=0x8020AAECu; f_8020EB2C(c); // 8020AAE8
  goto L_8020AAFC; // 8020AAEC
L_8020AAF0:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 8020AAF0
  c->r[0]=c->r[0]|0x80000000u; // 8020AAF4
  W32(c->r[19]+0x00000000u,c->r[0]); // 8020AAF8
L_8020AAFC:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 8020AAFC
  c->r[0]=(rotl(c->r[24],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 8020AB00
  W32(c->r[19]+0x00000008u,c->r[23]); // 8020AB04
  W32(c->r[19]+0x00000004u,c->r[25]); // 8020AB08
  W32(c->r[19]+0x00000000u,c->r[0]); // 8020AB0C
  goto L_8020AB64; // 8020AB10
L_8020AB14:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020AB14
  if (crb(c,2)) { goto L_8020AB30; } // 8020AB18
  c->r[0]=c->r[29]+c->r[20]; // 8020AB1C
  c->r[5]=c->r[28]|c->r[28]; // 8020AB20
  c->r[3]=c->r[0]+c->r[21]; // 8020AB24
  c->r[4]=c->r[0]+c->r[26]; // 8020AB28
  c->lr=0x8020AB30u; f_8011007C(c); // 8020AB2C
L_8020AB30:;
  c->r[5]=c->r[21]|c->r[21]; // 8020AB30
  c->r[3]=c->r[29]+c->r[20]; // 8020AB34
  c->r[4]=rotl(c->r[22],0)&0x000000FFu; // 8020AB38
  c->lr=0x8020AB40u; f_8000443C(c); // 8020AB3C
  c->r[0]=R8(c->r[30]+0x00000CBDu); // 8020AB40
  cmps(c,0,(int32_t)c->r[31],0); // 8020AB44
  W8(c->r[29]+c->r[25],c->r[0]); // 8020AB48
  if (!crb(c,2)) { goto L_8020AB60; } // 8020AB4C
  c->r[0]=R8(c->r[19]+0x00000000u); // 8020AB50
  c->r[0]=(rotl(c->r[25],0)&0x0000007Fu)|(c->r[0]&~0x0000007Fu); // 8020AB54
  W8(c->r[19]+0x00000000u,c->r[0]); // 8020AB58
  goto L_8020AB64; // 8020AB5C
L_8020AB60:;
  W32(c->r[19]+0x00000004u,c->r[25]); // 8020AB60
L_8020AB64:;
  c->r[11]=c->r[1]+0x00000060u; // 8020AB64
  c->r[3]=c->r[19]|c->r[19]; // 8020AB68
  c->lr=0x8020AB70u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020AB6C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8020AB70
  c->lr=c->r[0]; // 8020AB74
  c->r[1]=c->r[1]+0x00000060u; // 8020AB78
  return; // 8020AB7C
}

// fn_8020AB80
void f_8020AB80(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020AB80
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8020AB84
  if (crb(c,2)) { goto L_8020AB9C; } // 8020AB88
  c->r[0]=0u+0x00000001u; // 8020AB8C
  c->r[5]=R32(c->r[3]+0x00000008u); // 8020AB90
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020AB94
  goto L_8020ABB0; // 8020AB98
L_8020AB9C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8020AB9C
  c->r[5]=0u+0x00000001u; // 8020ABA0
  c->r[0]=(rotl(c->r[5],0)&0x0000007Fu)|(c->r[0]&~0x0000007Fu); // 8020ABA4
  W8(c->r[3]+0x00000000u,c->r[0]); // 8020ABA8
  c->r[5]=c->r[3]+0x00000001u; // 8020ABAC
L_8020ABB0:;
  W8(c->r[5]+0x00000000u,c->r[4]); // 8020ABB0
  c->r[0]=0u+0x00000000u; // 8020ABB4
  W8(c->r[5]+0x00000001u,c->r[0]); // 8020ABB8
  return; // 8020ABBC
}

// fn_8020ABC0
void f_8020ABC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020ABC0
  c->r[0]=c->lr; // 8020ABC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020ABC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020ABCC
  c->r[31]=c->r[4]|c->r[4]; // 8020ABD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020ABD4
  c->r[30]=c->r[3]|c->r[3]; // 8020ABD8
  c->lr=0x8020ABE0u; f_8020A8D0(c); // 8020ABDC
  c->r[0]=R8(c->r[1]+0x00000009u); // 8020ABE0
  c->r[8]=c->r[1]+0x00000008u; // 8020ABE4
  c->r[4]=R32(c->r[31]+0x00000000u); // 8020ABE8
  c->r[5]=0u+0x00000001u; // 8020ABEC
  W8(c->r[1]+0x00000008u,c->r[0]); // 8020ABF0
  c->r[6]=0u+0x00000000u; // 8020ABF4
  c->r[4]=c->r[4]-c->r[3]; // 8020ABF8
  c->r[3]=c->r[30]|c->r[30]; // 8020ABFC
  c->r[7]=0u+0x00000000u; // 8020AC00
  c->lr=0x8020AC08u; f_8000C9D4(c); // 8020AC04
  c->r[3]=R32(c->r[31]+0x00000000u); // 8020AC08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020AC0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020AC10
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020AC14
  c->lr=c->r[0]; // 8020AC18
  c->r[1]=c->r[1]+0x00000020u; // 8020AC1C
  return; // 8020AC20
}

// fn_8020AC24
void f_8020AC24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020AC24
  c->r[0]=c->lr; // 8020AC28
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020AC2C
  c->r[11]=c->r[1]+0x00000020u; // 8020AC30
  c->lr=0x8020AC38u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020AC34
  c->r[6]=R32(c->r[4]+0x00000000u); // 8020AC38
  c->r[29]=c->r[3]|c->r[3]; // 8020AC3C
  c->r[0]=R32(c->r[5]+0x00000000u); // 8020AC40
  c->r[30]=c->r[4]|c->r[4]; // 8020AC44
  c->r[31]=c->r[0]-c->r[6]; // 8020AC48
  c->lr=0x8020AC50u; f_8020A8D0(c); // 8020AC4C
  c->r[0]=R8(c->r[1]+0x00000009u); // 8020AC50
  c->r[5]=c->r[31]|c->r[31]; // 8020AC54
  c->r[4]=R32(c->r[30]+0x00000000u); // 8020AC58
  c->r[8]=c->r[1]+0x00000008u; // 8020AC5C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8020AC60
  c->r[6]=0u+0x00000000u; // 8020AC64
  c->r[4]=c->r[4]-c->r[3]; // 8020AC68
  c->r[3]=c->r[29]|c->r[29]; // 8020AC6C
  c->r[7]=0u+0x00000000u; // 8020AC70
  c->lr=0x8020AC78u; f_8000C9D4(c); // 8020AC74
  c->r[11]=c->r[1]+0x00000020u; // 8020AC78
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020AC7C
  c->lr=0x8020AC84u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020AC80
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020AC84
  c->lr=c->r[0]; // 8020AC88
  c->r[1]=c->r[1]+0x00000020u; // 8020AC8C
  return; // 8020AC90
}

// fn_8020AC94
void f_8020AC94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020AC94
  c->r[0]=c->lr; // 8020AC98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020AC9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020ACA0
  c->r[31]=c->r[5]|c->r[5]; // 8020ACA4
  c->r[5]=c->r[1]+0x00000008u; // 8020ACA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8020ACAC
  c->r[30]=c->r[4]|c->r[4]; // 8020ACB0
  c->r[4]=c->r[1]+0x0000000Cu; // 8020ACB4
  c->lr=0x8020ACBCu; f_80031E8C(c); // 8020ACB8
  c->r[0]=R32(c->r[1]+0x00000008u); // 8020ACBC
  cmpu(c,0,c->r[31],c->r[0]); // 8020ACC0
  if (!crb(c,0)) { goto L_8020AD08; } // 8020ACC4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8020ACC8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 8020ACCC
  c->r[5]=c->r[4]+c->r[0]; // 8020ACD0
  c->r[6]=c->r[4]+c->r[31]; // 8020ACD4
  c->r[0]=c->r[5]-c->r[6]; // 8020ACD8
  c->ctr=c->r[0]; // 8020ACDC
  cmpu(c,0,c->r[6],c->r[5]); // 8020ACE0
  if (!crb(c,0)) { goto L_8020AD08; } // 8020ACE4
L_8020ACE8:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 8020ACE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020ACEC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8020ACF0
  if (!crb(c,2)) { goto L_8020AD00; } // 8020ACF4
  c->r[3]=c->r[6]-c->r[4]; // 8020ACF8
  goto L_8020AD0C; // 8020ACFC
L_8020AD00:;
  c->r[6]=c->r[6]+0x00000001u; // 8020AD00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020ACE8; } // 8020AD04
L_8020AD08:;
  c->r[3]=0u+0xFFFFFFFFu; // 8020AD08
L_8020AD0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020AD0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020AD10
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020AD14
  c->lr=c->r[0]; // 8020AD18
  c->r[1]=c->r[1]+0x00000020u; // 8020AD1C
  return; // 8020AD20
}

// fn_8020AD24
void f_8020AD24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020AD24
  c->r[0]=c->lr; // 8020AD28
  cmps(c,0,(int32_t)c->r[3],0); // 8020AD2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020AD30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020AD34
  c->r[31]=c->r[4]|c->r[4]; // 8020AD38
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020AD3C
  c->r[30]=c->r[3]|c->r[3]; // 8020AD40
  if (crb(c,2)) { goto L_8020AD7C; } // 8020AD44
  c->r[4]=0u+0xFFFFFFFFu; // 8020AD48
  c->r[3]=c->r[3]+0x00000024u; // 8020AD4C
  c->lr=0x8020AD54u; f_8000C978(c); // 8020AD50
  c->r[3]=c->r[30]+0x00000018u; // 8020AD54
  c->r[4]=0u+0xFFFFFFFFu; // 8020AD58
  c->lr=0x8020AD60u; f_8000C978(c); // 8020AD5C
  c->r[3]=c->r[30]+0x0000000Cu; // 8020AD60
  c->r[4]=0u+0xFFFFFFFFu; // 8020AD64
  c->lr=0x8020AD6Cu; f_8000C978(c); // 8020AD68
  cmps(c,0,(int32_t)c->r[31],0); // 8020AD6C
  if (!crb(c,1)) { goto L_8020AD7C; } // 8020AD70
  c->r[3]=c->r[30]|c->r[30]; // 8020AD74
  c->lr=0x8020AD7Cu; f_8009230C(c); // 8020AD78
L_8020AD7C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020AD7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020AD80
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020AD84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020AD88
  c->lr=c->r[0]; // 8020AD8C
  c->r[1]=c->r[1]+0x00000010u; // 8020AD90
  return; // 8020AD94
}

// fn_8020AD98
void f_8020AD98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020AD98
  c->r[0]=c->lr; // 8020AD9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020ADA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020ADA4
  c->r[31]=0u+0x80380000u; // 8020ADA8
  c->r[0]=R8(c->r[31]+0x00002990u); // 8020ADAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8020ADB0
  if (!crb(c,2)) { goto L_8020ADCC; } // 8020ADB4
  c->r[3]=0u+0x80380000u; // 8020ADB8
  c->r[3]=c->r[3]+0x00002988u; // 8020ADBC
  c->lr=0x8020ADC4u; f_8020AE04(c); // 8020ADC0
  c->r[0]=0u+0x00000001u; // 8020ADC4
  W8(c->r[31]+0x00002990u,c->r[0]); // 8020ADC8
L_8020ADCC:;
  c->r[31]=0u+0x80380000u; // 8020ADCC
  c->r[0]=R8(c->r[31]+0x00002991u); // 8020ADD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8020ADD4
  if (!crb(c,2)) { goto L_8020ADF0; } // 8020ADD8
  c->r[3]=0u+0x80380000u; // 8020ADDC
  c->r[3]=c->r[3]+0x0000298Cu; // 8020ADE0
  c->lr=0x8020ADE8u; f_8020AE04(c); // 8020ADE4
  c->r[0]=0u+0x00000001u; // 8020ADE8
  W8(c->r[31]+0x00002991u,c->r[0]); // 8020ADEC
L_8020ADF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020ADF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020ADF4
  c->lr=c->r[0]; // 8020ADF8
  c->r[1]=c->r[1]+0x00000010u; // 8020ADFC
  return; // 8020AE00
}

// fn_8020AE04
void f_8020AE04(Ctx* __restrict c) {
  return; // 8020AE04
}

// fn_8020AE08
void f_8020AE08(Ctx* __restrict c) {
  c->r[11]=0u+0x0000003Cu; // 8020AE08
  c->r[11]=R32(c->r[3]+c->r[11]); // 8020AE0C
  c->r[3]=c->r[3]+c->r[11]; // 8020AE10
  c->r[3]=c->r[3]+0xFFFFFFC0u; // 8020AE14
  f_80205424(c); return; // 8020AE18
}

// fn_8020AE1C
void f_8020AE1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020AE1C
  c->r[0]=c->lr; // 8020AE20
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8020AE24
  c->r[11]=c->r[1]+0x000000F0u; // 8020AE28
  c->lr=0x8020AE30u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020AE2C
  c->r[30]=c->r[3]|c->r[3]; // 8020AE30
  c->r[27]=c->r[4]|c->r[4]; // 8020AE34
  c->r[28]=c->r[5]|c->r[5]; // 8020AE38
  c->r[29]=c->r[6]|c->r[6]; // 8020AE3C
  c->lr=0x8020AE44u; f_80202A7C(c); // 8020AE40
  c->r[31]=c->r[3]|c->r[3]; // 8020AE44
  c->r[5]=c->r[3]+0x0000001Cu; // 8020AE48
  c->r[4]=c->r[31]|c->r[31]; // 8020AE4C
  goto L_8020AE58; // 8020AE50
L_8020AE54:;
  c->r[4]=c->r[4]+0x00000001u; // 8020AE54
L_8020AE58:;
  cmpu(c,0,c->r[4],c->r[5]); // 8020AE58
  if (crb(c,2)) { goto L_8020AE6C; } // 8020AE5C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8020AE60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8020AE64
  if (!crb(c,2)) { IRQCHK(c); goto L_8020AE54; } // 8020AE68
L_8020AE6C:;
  c->r[5]=c->r[4]-c->r[3]; // 8020AE6C
  cmpu(c,0,c->r[5],0x0000001Au); // 8020AE70
  if (!crb(c,2)) { goto L_8020AE90; } // 8020AE74
  c->r[4]=c->r[31]|c->r[31]; // 8020AE78
  c->r[3]=c->r[1]+0x00000058u; // 8020AE7C
  c->r[5]=0u+0x0000001Cu; // 8020AE80
  c->lr=0x8020AE88u; f_80004338(c); // 8020AE84
  c->r[0]=0u+0x00000001u; // 8020AE88
  goto L_8020AEF4; // 8020AE8C
L_8020AE90:;
  cmpu(c,0,c->r[5],0x00000010u); // 8020AE90
  if (crb(c,2)) { goto L_8020AEB4; } // 8020AE94
  c->r[4]=0u+0x802A0000u; // 8020AE98
  c->r[3]=0u+0x00000001u; // 8020AE9C
  c->r[4]=c->r[4]+0x000041BCu; // 8020AEA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020AEA4
  c->lr=0x8020AEACu; f_8020B328(c); // 8020AEA8
  c->r[0]=0u+0x00000000u; // 8020AEAC
  goto L_8020AEF4; // 8020AEB0
L_8020AEB4:;
  c->r[3]=c->r[1]+0x00000058u; // 8020AEB4
  c->r[4]=0u+0x00000000u; // 8020AEB8
  c->r[5]=0u+0x00000004u; // 8020AEBC
  c->lr=0x8020AEC4u; f_8000443C(c); // 8020AEC0
  c->r[3]=c->r[1]+0x00000058u; // 8020AEC4
  c->r[4]=0u+0x00000030u; // 8020AEC8
  c->r[5]=0u+0x00000012u; // 8020AECC
  c->lr=0x8020AED4u; f_8000443C(c); // 8020AED0
  c->r[3]=c->r[1]+0x0000006Au; // 8020AED4
  c->r[4]=c->r[31]+0x00000008u; // 8020AED8
  c->lr=0x8020AEE0u; f_8011410C(c); // 8020AEDC
  c->r[4]=c->r[31]|c->r[31]; // 8020AEE0
  c->r[3]=c->r[1]+0x00000060u; // 8020AEE4
  c->r[5]=0u+0x00000008u; // 8020AEE8
  c->lr=0x8020AEF0u; f_80004338(c); // 8020AEEC
  c->r[0]=0u+0x00000001u; // 8020AEF0
L_8020AEF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8020AEF4
  if (!crb(c,2)) { goto L_8020AF24; } // 8020AEF8
  c->r[3]=c->r[30]|c->r[30]; // 8020AEFC
  c->lr=0x8020AF04u; f_80202A7C(c); // 8020AF00
  c->r[4]=0u+0x802A0000u; // 8020AF04
  c->r[5]=c->r[3]|c->r[3]; // 8020AF08
  c->r[4]=c->r[4]+0x000041D2u; // 8020AF0C
  c->r[3]=0u+0x00000003u; // 8020AF10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020AF14
  c->lr=0x8020AF1Cu; f_8020B328(c); // 8020AF18
  c->r[3]=0u+0xFFFFF04Fu; // 8020AF1C
  goto L_8020B064; // 8020AF20
L_8020AF24:;
  c->r[31]=c->r[1]+0x0000004Cu; // 8020AF24
  c->r[3]=c->r[31]|c->r[31]; // 8020AF28
  c->lr=0x8020AF30u; f_802039C8(c); // 8020AF2C
  c->r[3]=c->r[31]|c->r[31]; // 8020AF30
  c->lr=0x8020AF38u; f_802039CC(c); // 8020AF34
  c->r[3]=c->r[1]+0x00000058u; // 8020AF38
  c->lr=0x8020AF40u; f_80109598(c); // 8020AF3C
  c->r[30]=c->r[3]|c->r[3]; // 8020AF40
  c->r[3]=c->r[31]|c->r[31]; // 8020AF44
  c->r[4]=c->r[30]|c->r[30]; // 8020AF48
  c->lr=0x8020AF50u; f_80207040(c); // 8020AF4C
  c->r[0]=R8(c->r[1]+0x00000009u); // 8020AF50
  c->r[6]=c->r[1]+0x00000058u; // 8020AF54
  c->r[7]=c->r[6]|c->r[6]; // 8020AF58
  c->r[3]=c->r[31]|c->r[31]; // 8020AF5C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8020AF60
  c->r[7]=c->r[7]+c->r[30]; // 8020AF64
  c->r[8]=c->r[1]+0x00000008u; // 8020AF68
  c->r[4]=0u+0x00000000u; // 8020AF6C
  c->r[5]=0u+0x00000000u; // 8020AF70
  c->lr=0x8020AF78u; f_80203148(c); // 8020AF74
  c->r[4]=c->r[31]|c->r[31]; // 8020AF78
  c->r[3]=c->r[1]+0x00000018u; // 8020AF7C
  c->r[5]=0u+0x00000000u; // 8020AF80
  c->r[6]=0u+0x00000006u; // 8020AF84
  c->lr=0x8020AF8Cu; f_8020B07C(c); // 8020AF88
  c->r[3]=c->r[27]|c->r[27]; // 8020AF8C
  c->r[4]=c->r[1]+0x00000018u; // 8020AF90
  c->lr=0x8020AF98u; f_802042D0(c); // 8020AF94
  c->r[3]=c->r[1]+0x00000018u; // 8020AF98
  c->r[4]=0u+0xFFFFFFFFu; // 8020AF9C
  c->lr=0x8020AFA4u; f_802030B0(c); // 8020AFA0
  c->r[4]=c->r[31]|c->r[31]; // 8020AFA4
  c->r[3]=c->r[1]+0x0000000Cu; // 8020AFA8
  c->r[5]=0u+0x00000006u; // 8020AFAC
  c->r[6]=0u+0x0000000Au; // 8020AFB0
  c->lr=0x8020AFB8u; f_8020B07C(c); // 8020AFB4
  c->r[3]=c->r[28]|c->r[28]; // 8020AFB8
  c->r[4]=c->r[1]+0x0000000Cu; // 8020AFBC
  c->lr=0x8020AFC4u; f_802042D0(c); // 8020AFC0
  c->r[3]=c->r[1]+0x0000000Cu; // 8020AFC4
  c->r[4]=0u+0xFFFFFFFFu; // 8020AFC8
  c->lr=0x8020AFD0u; f_802030B0(c); // 8020AFCC
  c->r[4]=c->r[31]|c->r[31]; // 8020AFD0
  c->r[3]=c->r[1]+0x00000040u; // 8020AFD4
  c->r[5]=0u+0x00000010u; // 8020AFD8
  c->r[6]=0u+0x0000000Au; // 8020AFDC
  c->lr=0x8020AFE4u; f_8020B07C(c); // 8020AFE0
  c->r[3]=c->r[1]+0x00000034u; // 8020AFE4
  c->lr=0x8020AFECu; f_802039C8(c); // 8020AFE8
  c->r[3]=c->r[1]+0x00000034u; // 8020AFEC
  c->lr=0x8020AFF4u; f_802039CC(c); // 8020AFF0
  c->r[3]=c->r[1]+0x00000074u; // 8020AFF4
  c->lr=0x8020AFFCu; f_802008F4(c); // 8020AFF8
  c->r[3]=c->r[1]+0x00000040u; // 8020AFFC
  c->lr=0x8020B004u; f_80202A7C(c); // 8020B000
  c->r[4]=c->r[3]|c->r[3]; // 8020B004
  c->r[3]=c->r[1]+0x00000074u; // 8020B008
  c->r[5]=0u+0x0000000Au; // 8020B00C
  c->lr=0x8020B014u; f_80200934(c); // 8020B010
  c->r[3]=c->r[1]+0x00000024u; // 8020B014
  c->r[4]=c->r[1]+0x00000074u; // 8020B018
  c->lr=0x8020B020u; f_80200A10(c); // 8020B01C
  c->r[3]=c->r[1]+0x00000024u; // 8020B020
  c->r[5]=c->r[1]+0x00000034u; // 8020B024
  c->r[4]=0u+0x00000010u; // 8020B028
  c->lr=0x8020B030u; f_80215C2C(c); // 8020B02C
  c->r[3]=c->r[29]|c->r[29]; // 8020B030
  c->r[4]=c->r[1]+0x00000034u; // 8020B034
  c->lr=0x8020B03Cu; f_802042D0(c); // 8020B038
  c->r[3]=c->r[1]+0x00000034u; // 8020B03C
  c->r[4]=0u+0xFFFFFFFFu; // 8020B040
  c->lr=0x8020B048u; f_802030B0(c); // 8020B044
  c->r[3]=c->r[1]+0x00000040u; // 8020B048
  c->r[4]=0u+0xFFFFFFFFu; // 8020B04C
  c->lr=0x8020B054u; f_802030B0(c); // 8020B050
  c->r[3]=c->r[31]|c->r[31]; // 8020B054
  c->r[4]=0u+0xFFFFFFFFu; // 8020B058
  c->lr=0x8020B060u; f_802030B0(c); // 8020B05C
  c->r[3]=0u+0x00000000u; // 8020B060
L_8020B064:;
  c->r[11]=c->r[1]+0x000000F0u; // 8020B064
  c->lr=0x8020B06Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020B068
  c->r[0]=R32(c->r[1]+0x000000F4u); // 8020B06C
  c->lr=c->r[0]; // 8020B070
  c->r[1]=c->r[1]+0x000000F0u; // 8020B074
  return; // 8020B078
}

// fn_8020B07C
void f_8020B07C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B07C
  c->r[0]=c->lr; // 8020B080
  W32(c->r[1]+0x00000044u,c->r[0]); // 8020B084
  c->r[11]=c->r[1]+0x00000040u; // 8020B088
  c->lr=0x8020B090u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020B08C
  W32(c->r[1]+0x00000020u,c->r[6]); // 8020B090
  c->r[31]=c->r[3]|c->r[3]; // 8020B094
  c->r[29]=c->r[4]|c->r[4]; // 8020B098
  c->r[30]=c->r[5]|c->r[5]; // 8020B09C
  c->lr=0x8020B0A4u; f_8020731C(c); // 8020B0A0
  c->r[3]=c->r[31]|c->r[31]; // 8020B0A4
  c->lr=0x8020B0ACu; f_802039CC(c); // 8020B0A8
  c->r[3]=c->r[29]|c->r[29]; // 8020B0AC
  c->lr=0x8020B0B4u; f_802020A8(c); // 8020B0B0
  cmpu(c,0,c->r[30],c->r[3]); // 8020B0B4
  if (crb(c,1)) { goto L_8020B0E0; } // 8020B0B8
  c->r[0]=R32(c->r[1]+0x00000020u); // 8020B0BC
  c->r[4]=c->r[3]-c->r[30]; // 8020B0C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8020B0C4
  c->r[3]=c->r[1]+0x00000020u; // 8020B0C8
  cmpu(c,0,c->r[4],c->r[0]); // 8020B0CC
  if (!crb(c,0)) { goto L_8020B0D8; } // 8020B0D0
  c->r[3]=c->r[1]+0x0000000Cu; // 8020B0D4
L_8020B0D8:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020B0D8
  goto L_8020B0E4; // 8020B0DC
L_8020B0E0:;
  c->r[4]=0u+0x00000000u; // 8020B0E0
L_8020B0E4:;
  c->r[3]=c->r[31]|c->r[31]; // 8020B0E4
  c->lr=0x8020B0ECu; f_80207040(c); // 8020B0E8
  c->r[0]=R32(c->r[1]+0x00000020u); // 8020B0EC
  c->r[3]=c->r[29]|c->r[29]; // 8020B0F0
  c->r[4]=c->r[1]+0x0000001Cu; // 8020B0F4
  c->r[5]=c->r[1]+0x00000018u; // 8020B0F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8020B0FC
  c->lr=0x8020B104u; f_80204620(c); // 8020B100
  c->r[0]=R32(c->r[1]+0x00000018u); // 8020B104
  cmpu(c,0,c->r[30],c->r[0]); // 8020B108
  if (!crb(c,1)) { goto L_8020B138; } // 8020B10C
  c->r[4]=0u+0x802A0000u; // 8020B110
  c->r[3]=c->r[1]+0x00000024u; // 8020B114
  c->r[4]=c->r[4]+0x0000422Au; // 8020B118
  c->lr=0x8020B120u; f_802072E0(c); // 8020B11C
  c->r[5]=0u+0x80120000u; // 8020B120
  c->r[6]=0u+0x802A0000u; // 8020B124
  c->r[4]=c->r[3]|c->r[3]; // 8020B128
  c->r[3]=c->r[6]+0x000041F3u; // 8020B12C
  c->r[5]=c->r[5]+0xFFFFD68Cu; // 8020B130
  c->lr=0x8020B138u; f_8010BE30(c); // 8020B134
L_8020B138:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 8020B138
  c->r[3]=c->r[1]+0x00000010u; // 8020B13C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8020B140
  c->r[4]=c->r[0]-c->r[30]; // 8020B144
  c->r[0]=R32(c->r[1]+0x00000010u); // 8020B148
  c->r[6]=c->r[5]+c->r[30]; // 8020B14C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8020B150
  cmpu(c,0,c->r[4],c->r[0]); // 8020B154
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 8020B158
  if (!crb(c,0)) { goto L_8020B164; } // 8020B15C
  c->r[3]=c->r[1]+0x00000014u; // 8020B160
L_8020B164:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020B164
  c->r[3]=c->r[31]|c->r[31]; // 8020B168
  c->r[0]=R8(c->r[1]+0x00000008u); // 8020B16C
  c->r[8]=c->r[1]+0x00000009u; // 8020B170
  W32(c->r[1]+0x00000010u,c->r[4]); // 8020B174
  c->r[7]=c->r[6]+c->r[4]; // 8020B178
  c->r[4]=0u+0x00000000u; // 8020B17C
  c->r[5]=0u+0x00000000u; // 8020B180
  W8(c->r[1]+0x00000009u,c->r[0]); // 8020B184
  c->lr=0x8020B18Cu; f_80203148(c); // 8020B188
  c->r[11]=c->r[1]+0x00000040u; // 8020B18C
  c->lr=0x8020B194u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020B190
  c->r[0]=R32(c->r[1]+0x00000044u); // 8020B194
  c->lr=c->r[0]; // 8020B198
  c->r[1]=c->r[1]+0x00000040u; // 8020B19C
  return; // 8020B1A0
}

// fn_8020B1A4
void f_8020B1A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B1A4
  c->r[0]=c->lr; // 8020B1A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8020B1AC
  c->r[11]=c->r[1]+0x00000040u; // 8020B1B0
  c->lr=0x8020B1B8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020B1B4
  c->r[25]=c->r[3]|c->r[3]; // 8020B1B8
  c->r[26]=c->r[4]|c->r[4]; // 8020B1BC
  c->r[27]=c->r[5]|c->r[5]; // 8020B1C0
  c->lr=0x8020B1C8u; f_802020A8(c); // 8020B1C4
  c->r[31]=c->r[3]|c->r[3]; // 8020B1C8
  c->r[4]=0u+0x00000040u; // 8020B1CC
  c->lr=0x8020B1D4u; f_8020EA58(c); // 8020B1D0
  c->r[30]=c->r[3]|c->r[3]; // 8020B1D4
  c->r[3]=0u+0x0000003Cu; // 8020B1D8
  c->r[4]=0u+0x00000020u; // 8020B1DC
  c->lr=0x8020B1E4u; f_8020EA58(c); // 8020B1E0
  c->r[29]=c->r[3]|c->r[3]; // 8020B1E4
  c->r[3]=0u+0x00000180u; // 8020B1E8
  c->r[4]=0u+0x00000040u; // 8020B1EC
  c->lr=0x8020B1F4u; f_8020EA58(c); // 8020B1F0
  cmps(c,0,(int32_t)c->r[30],0); // 8020B1F4
  c->r[28]=c->r[3]|c->r[3]; // 8020B1F8
  if (crb(c,2)) { goto L_8020B210; } // 8020B1FC
  cmps(c,0,(int32_t)c->r[29],0); // 8020B200
  if (crb(c,2)) { goto L_8020B210; } // 8020B204
  cmps(c,0,(int32_t)c->r[3],0); // 8020B208
  if (!crb(c,2)) { goto L_8020B22C; } // 8020B20C
L_8020B210:;
  c->r[4]=0u+0x802A0000u; // 8020B210
  c->r[31]=0u+0xFFFFF05Bu; // 8020B214
  c->r[4]=c->r[4]+0x00004245u; // 8020B218
  c->r[3]=0u+0x00000001u; // 8020B21C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B220
  c->lr=0x8020B228u; f_8020B328(c); // 8020B224
  goto L_8020B2DC; // 8020B228
L_8020B22C:;
  W32(c->r[1]+0x00000014u,c->r[31]); // 8020B22C
  c->r[3]=c->r[25]|c->r[25]; // 8020B230
  c->r[4]=c->r[1]+0x00000008u; // 8020B234
  c->r[5]=c->r[1]+0x0000000Cu; // 8020B238
  c->lr=0x8020B240u; f_80204620(c); // 8020B23C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8020B240
  c->r[3]=c->r[30]|c->r[30]; // 8020B244
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020B248
  c->r[5]=c->r[1]+0x00000014u; // 8020B24C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8020B250
  cmpu(c,0,c->r[4],c->r[0]); // 8020B254
  c->r[4]=R32(c->r[1]+0x00000008u); // 8020B258
  W32(c->r[1]+0x00000010u,c->r[6]); // 8020B25C
  if (!crb(c,0)) { goto L_8020B268; } // 8020B260
  c->r[5]=c->r[1]+0x00000010u; // 8020B264
L_8020B268:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8020B268
  c->lr=0x8020B270u; f_80004338(c); // 8020B26C
  c->r[3]=c->r[30]|c->r[30]; // 8020B270
  c->r[4]=c->r[31]|c->r[31]; // 8020B274
  c->r[5]=c->r[29]|c->r[29]; // 8020B278
  c->r[6]=c->r[28]|c->r[28]; // 8020B27C
  c->lr=0x8020B284u; f_8020074C(c); // 8020B280
  cmps(c,0,(int32_t)c->r[3],0); // 8020B284
  c->r[31]=c->r[3]|c->r[3]; // 8020B288
  if (crb(c,2)) { goto L_8020B2AC; } // 8020B28C
  c->r[4]=0u+0x802A0000u; // 8020B290
  c->r[5]=c->r[31]|c->r[31]; // 8020B294
  c->r[4]=c->r[4]+0x00004262u; // 8020B298
  c->r[3]=0u+0x00000001u; // 8020B29C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B2A0
  c->lr=0x8020B2A8u; f_8020B328(c); // 8020B2A4
  goto L_8020B2DC; // 8020B2A8
L_8020B2AC:;
  c->r[3]=c->r[26]|c->r[26]; // 8020B2AC
  c->lr=0x8020B2B4u; f_80204658(c); // 8020B2B0
  c->r[3]=c->r[27]|c->r[27]; // 8020B2B4
  c->lr=0x8020B2BCu; f_80204658(c); // 8020B2B8
  c->r[3]=c->r[29]|c->r[29]; // 8020B2BC
  c->r[5]=c->r[26]|c->r[26]; // 8020B2C0
  c->r[4]=0u+0x0000003Cu; // 8020B2C4
  c->lr=0x8020B2CCu; f_80215704(c); // 8020B2C8
  c->r[3]=c->r[28]|c->r[28]; // 8020B2CC
  c->r[5]=c->r[27]|c->r[27]; // 8020B2D0
  c->r[4]=0u+0x00000180u; // 8020B2D4
  c->lr=0x8020B2DCu; f_80215704(c); // 8020B2D8
L_8020B2DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020B2DC
  if (crb(c,2)) { goto L_8020B2EC; } // 8020B2E0
  c->r[3]=c->r[30]|c->r[30]; // 8020B2E4
  c->lr=0x8020B2ECu; f_8020EB2C(c); // 8020B2E8
L_8020B2EC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8020B2EC
  if (crb(c,2)) { goto L_8020B2FC; } // 8020B2F0
  c->r[3]=c->r[29]|c->r[29]; // 8020B2F4
  c->lr=0x8020B2FCu; f_8020EB2C(c); // 8020B2F8
L_8020B2FC:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020B2FC
  if (crb(c,2)) { goto L_8020B30C; } // 8020B300
  c->r[3]=c->r[28]|c->r[28]; // 8020B304
  c->lr=0x8020B30Cu; f_8020EB2C(c); // 8020B308
L_8020B30C:;
  c->r[11]=c->r[1]+0x00000040u; // 8020B30C
  c->r[3]=c->r[31]|c->r[31]; // 8020B310
  c->lr=0x8020B318u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020B314
  c->r[0]=R32(c->r[1]+0x00000044u); // 8020B318
  c->lr=c->r[0]; // 8020B31C
  c->r[1]=c->r[1]+0x00000040u; // 8020B320
  return; // 8020B324
}

// fn_8020B328
void f_8020B328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B328
  c->r[0]=c->lr; // 8020B32C
  W32(c->r[1]+0x00000194u,c->r[0]); // 8020B330
  c->r[11]=c->r[1]+0x00000190u; // 8020B334
  c->lr=0x8020B33Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020B338
  c->r[28]=c->r[3]|c->r[3]; // 8020B33C
  c->r[29]=c->r[4]|c->r[4]; // 8020B340
  if (!crb(c,6)) { goto L_8020B368; } // 8020B344
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8020B348
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8020B34C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8020B350
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8020B354
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8020B358
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8020B35C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8020B360
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8020B364
L_8020B368:;
  cmps(c,0,(int32_t)c->r[3],0); // 8020B368
  c->r[30]=0u+0x80380000u; // 8020B36C
  c->r[31]=0u+0x802A0000u; // 8020B370
  W32(c->r[1]+0x00000008u,c->r[3]); // 8020B374
  c->r[30]=c->r[30]+0x00002998u; // 8020B378
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8020B37C
  c->r[31]=c->r[31]+0x00004178u; // 8020B380
  W32(c->r[1]+0x00000010u,c->r[5]); // 8020B384
  W32(c->r[1]+0x00000014u,c->r[6]); // 8020B388
  W32(c->r[1]+0x00000018u,c->r[7]); // 8020B38C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8020B390
  W32(c->r[1]+0x00000020u,c->r[9]); // 8020B394
  W32(c->r[1]+0x00000024u,c->r[10]); // 8020B398
  if (crb(c,2)) { goto L_8020B490; } // 8020B39C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8020B3A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8020B3A4
  if (!crb(c,1)) { goto L_8020B3B8; } // 8020B3A8
  c->r[0]=R32(c->r[30]+0x00000000u); // 8020B3AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8020B3B0
  if (crb(c,1)) { goto L_8020B490; } // 8020B3B4
L_8020B3B8:;
  c->r[3]=c->r[31]+0x00000148u; // 8020B3B8
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8020B3BC
  c->r[3]=c->r[3]+c->r[0]; // 8020B3C0
  c->r[7]=c->r[29]|c->r[29]; // 8020B3C4
  c->r[6]=R32(c->r[3]+0xFFFFFFFCu); // 8020B3C8
  c->r[3]=c->r[1]+0x00000074u; // 8020B3CC
  c->r[5]=c->r[31]+0x00000160u; // 8020B3D0
  c->r[4]=0u+0x00000100u; // 8020B3D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B3D8
  c->lr=0x8020B3E0u; f_80112920(c); // 8020B3DC
  cmps(c,0,(int32_t)c->r[3],0); // 8020B3E0
  if (crb(c,0)) { goto L_8020B3F0; } // 8020B3E4
  cmpu(c,0,c->r[3],0x00000100u); // 8020B3E8
  if (!crb(c,2)) { goto L_8020B420; } // 8020B3EC
L_8020B3F0:;
  c->r[4]=c->r[29]|c->r[29]; // 8020B3F0
  c->r[3]=c->r[1]+0x00000074u; // 8020B3F4
  c->r[5]=0u+0x00000100u; // 8020B3F8
  c->lr=0x8020B400u; f_80004338(c); // 8020B3FC
  c->r[0]=0u+0x00000000u; // 8020B400
  c->r[4]=R32(c->r[31]+0x00000148u); // 8020B404
  W8(c->r[1]+0x00000173u,c->r[0]); // 8020B408
  c->r[6]=c->r[29]|c->r[29]; // 8020B40C
  c->r[3]=c->r[31]+0x00000165u; // 8020B410
  c->r[5]=0u+0x000000FFu; // 8020B414
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B418
  c->lr=0x8020B420u; f_80112618(c); // 8020B41C
L_8020B420:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8020B420
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8020B424
  if (crb(c,1)) { goto L_8020B450; } // 8020B428
  c->r[5]=c->r[1]+0x00000198u; // 8020B42C
  c->r[0]=c->r[1]+0x00000008u; // 8020B430
  c->r[3]=0u+0x02000000u; // 8020B434
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 8020B438
  c->r[4]=c->r[1]+0x00000068u; // 8020B43C
  W32(c->r[1]+0x00000068u,c->r[3]); // 8020B440
  c->r[3]=c->r[1]+0x00000074u; // 8020B444
  W32(c->r[1]+0x00000070u,c->r[0]); // 8020B448
  c->lr=0x8020B450u; f_801127A4(c); // 8020B44C
L_8020B450:;
  c->r[12]=R32(c->r[30]+0x00000008u); // 8020B450
  cmps(c,0,(int32_t)c->r[12],0); // 8020B454
  if (crb(c,2)) { goto L_8020B490; } // 8020B458
  c->r[0]=R32(c->r[30]+0x00000000u); // 8020B45C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8020B460
  if (crb(c,1)) { goto L_8020B490; } // 8020B464
  c->r[5]=c->r[1]+0x00000198u; // 8020B468
  c->r[0]=c->r[1]+0x00000008u; // 8020B46C
  c->r[3]=0u+0x02000000u; // 8020B470
  c->r[4]=c->r[1]+0x00000068u; // 8020B474
  W32(c->r[1]+0x00000068u,c->r[3]); // 8020B478
  c->r[3]=c->r[1]+0x00000074u; // 8020B47C
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 8020B480
  W32(c->r[1]+0x00000070u,c->r[0]); // 8020B484
  c->ctr=c->r[12]; // 8020B488
  if (true) { c->lr=0x8020B490u; dispatch(c,c->ctr); } // 8020B48C
L_8020B490:;
  c->r[11]=c->r[1]+0x00000190u; // 8020B490
  c->lr=0x8020B498u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020B494
  c->r[0]=R32(c->r[1]+0x00000194u); // 8020B498
  c->lr=c->r[0]; // 8020B49C
  c->r[1]=c->r[1]+0x00000190u; // 8020B4A0
  return; // 8020B4A4
}

// fn_8020B4A8
void f_8020B4A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B4A8
  c->r[0]=c->lr; // 8020B4AC
  cmps(c,0,(int32_t)c->r[3],6); // 8020B4B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020B4B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020B4B8
  c->r[31]=0u+0x00000000u; // 8020B4BC
  if (!crb(c,1)) { goto L_8020B4CC; } // 8020B4C0
  c->r[31]=0u+0xFFFFF05Cu; // 8020B4C4
  goto L_8020B4E8; // 8020B4C8
L_8020B4CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8020B4CC
  if (!crb(c,0)) { goto L_8020B4D8; } // 8020B4D0
  c->r[31]=0u+0xFFFFF05Cu; // 8020B4D4
L_8020B4D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8020B4D8
  if (crb(c,0)) { goto L_8020B4E8; } // 8020B4DC
  c->r[4]=0u+0x80380000u; // 8020B4E0
  W32(c->r[4]+0x0000299Cu,c->r[3]); // 8020B4E4
L_8020B4E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020B4E8
  if (crb(c,2)) { goto L_8020B50C; } // 8020B4EC
  c->r[4]=0u+0x802A0000u; // 8020B4F0
  c->r[5]=c->r[3]|c->r[3]; // 8020B4F4
  c->r[4]=c->r[4]+0x00004302u; // 8020B4F8
  c->r[3]=0u+0x00000001u; // 8020B4FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B500
  c->lr=0x8020B508u; f_8020B328(c); // 8020B504
  goto L_8020B52C; // 8020B508
L_8020B50C:;
  c->r[5]=0u+0x80380000u; // 8020B50C
  c->r[4]=0u+0x802A0000u; // 8020B510
  c->r[6]=R32(c->r[5]+0x0000299Cu); // 8020B514
  c->r[5]=c->r[3]|c->r[3]; // 8020B518
  c->r[4]=c->r[4]+0x00004318u; // 8020B51C
  c->r[3]=0u+0x00000003u; // 8020B520
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B524
  c->lr=0x8020B52Cu; f_8020B328(c); // 8020B528
L_8020B52C:;
  c->r[3]=c->r[31]|c->r[31]; // 8020B52C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020B530
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020B534
  c->lr=c->r[0]; // 8020B538
  c->r[1]=c->r[1]+0x00000010u; // 8020B53C
  return; // 8020B540
}

// fn_8020B544
void f_8020B544(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 8020B544
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8020B548
  c->r[3]=c->r[3]&c->r[0]; // 8020B54C
  return; // 8020B550
}

// fn_8020B554
void f_8020B554(Ctx* __restrict c) {
  c->r[0]=cntlz(c->r[4]); // 8020B554
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8020B558
  return; // 8020B55C
}

// fn_8020B560
void f_8020B560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B560
  c->r[0]=c->lr; // 8020B564
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020B568
  c->r[11]=c->r[1]+0x00000030u; // 8020B56C
  c->lr=0x8020B574u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020B570
  c->r[29]=0u+0x00000000u; // 8020B574
  c->r[31]=0u+0x802A0000u; // 8020B578
  W32(c->r[1]+0x00000008u,c->r[29]); // 8020B57C
  c->r[27]=c->r[5]|c->r[5]; // 8020B580
  c->r[28]=c->r[6]|c->r[6]; // 8020B584
  c->r[26]=c->r[3]|c->r[3]; // 8020B588
  c->r[25]=c->r[4]|c->r[4]; // 8020B58C
  c->r[31]=c->r[31]+0x00004178u; // 8020B590
  c->r[6]=c->r[1]+0x00000008u; // 8020B594
  c->r[5]=0u+0x00000000u; // 8020B598
  c->lr=0x8020B5A0u; f_801FFF64(c); // 8020B59C
  cmps(c,0,(int32_t)c->r[3],0); // 8020B5A0
  c->r[30]=c->r[3]|c->r[3]; // 8020B5A4
  if (!crb(c,2)) { goto L_8020B5B8; } // 8020B5A8
  c->r[0]=R32(c->r[1]+0x00000008u); // 8020B5AC
  cmps(c,0,(int32_t)c->r[0],0); // 8020B5B0
  if (!crb(c,2)) { goto L_8020B5DC; } // 8020B5B4
L_8020B5B8:;
  c->r[8]=R32(c->r[1]+0x00000008u); // 8020B5B8
  c->r[6]=c->r[25]|c->r[25]; // 8020B5BC
  c->r[5]=c->r[26]|c->r[26]; // 8020B5C0
  c->r[7]=c->r[30]|c->r[30]; // 8020B5C4
  c->r[4]=c->r[31]+0x000001CAu; // 8020B5C8
  c->r[3]=0u+0x00000003u; // 8020B5CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B5D0
  c->lr=0x8020B5D8u; f_8020B328(c); // 8020B5D4
  goto L_8020B654; // 8020B5D8
L_8020B5DC:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 8020B5DC
  c->r[4]=0u+0x00000020u; // 8020B5E0
  c->lr=0x8020B5E8u; f_8020EA58(c); // 8020B5E4
  cmps(c,0,(int32_t)c->r[3],0); // 8020B5E8
  c->r[29]=c->r[3]|c->r[3]; // 8020B5EC
  if (!crb(c,2)) { goto L_8020B5FC; } // 8020B5F0
  c->r[30]=0u+0xFFFFF05Bu; // 8020B5F4
  goto L_8020B654; // 8020B5F8
L_8020B5FC:;
  c->r[7]=R32(c->r[1]+0x00000008u); // 8020B5FC
  c->r[6]=c->r[25]|c->r[25]; // 8020B600
  c->r[5]=c->r[26]|c->r[26]; // 8020B604
  c->r[4]=c->r[31]+0x00000208u; // 8020B608
  c->r[3]=0u+0x00000004u; // 8020B60C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B610
  c->lr=0x8020B618u; f_8020B328(c); // 8020B614
  c->r[4]=c->r[25]|c->r[25]; // 8020B618
  c->r[3]=c->r[26]|c->r[26]; // 8020B61C
  c->r[5]=c->r[29]|c->r[29]; // 8020B620
  c->r[6]=c->r[1]+0x00000008u; // 8020B624
  c->lr=0x8020B62Cu; f_801FFF64(c); // 8020B628
  cmps(c,0,(int32_t)c->r[3],0); // 8020B62C
  c->r[30]=c->r[3]|c->r[3]; // 8020B630
  if (crb(c,2)) { goto L_8020B654; } // 8020B634
  c->r[6]=c->r[25]|c->r[25]; // 8020B638
  c->r[5]=c->r[26]|c->r[26]; // 8020B63C
  c->r[7]=c->r[30]|c->r[30]; // 8020B640
  c->r[4]=c->r[31]+0x00000245u; // 8020B644
  c->r[3]=0u+0x00000001u; // 8020B648
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B64C
  c->lr=0x8020B654u; f_8020B328(c); // 8020B650
L_8020B654:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020B654
  if (!crb(c,2)) { goto L_8020B66C; } // 8020B658
  W32(c->r[27]+0x00000000u,c->r[29]); // 8020B65C
  c->r[0]=R32(c->r[1]+0x00000008u); // 8020B660
  W32(c->r[28]+0x00000000u,c->r[0]); // 8020B664
  goto L_8020B688; // 8020B668
L_8020B66C:;
  c->r[0]=0u+0x00000000u; // 8020B66C
  cmps(c,0,(int32_t)c->r[29],0); // 8020B670
  W32(c->r[27]+0x00000000u,c->r[0]); // 8020B674
  W32(c->r[28]+0x00000000u,c->r[0]); // 8020B678
  if (crb(c,2)) { goto L_8020B688; } // 8020B67C
  c->r[3]=c->r[29]|c->r[29]; // 8020B680
  c->lr=0x8020B688u; f_8020EB2C(c); // 8020B684
L_8020B688:;
  c->r[11]=c->r[1]+0x00000030u; // 8020B688
  c->r[3]=c->r[30]|c->r[30]; // 8020B68C
  c->lr=0x8020B694u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020B690
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020B694
  c->lr=c->r[0]; // 8020B698
  c->r[1]=c->r[1]+0x00000030u; // 8020B69C
  return; // 8020B6A0
}

// fn_8020B6A4
void f_8020B6A4(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; // 8020B6A4
  cmpu(c,0,c->r[0],0x00000040u); // 8020B6A8
  if (crb(c,0)) { goto L_8020B6B8; } // 8020B6AC
  c->r[3]=0u+0x00000000u; // 8020B6B0
  return; // 8020B6B4
L_8020B6B8:;
  c->r[4]=rotl(c->r[4],0)&0x00000007u; // 8020B6B8
  c->r[5]=0u+0x00000001u; // 8020B6BC
  c->r[0]=R8(c->r[3]+c->r[0]); // 8020B6C0
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 8020B6C4
  c->r[3]=c->r[3]&c->r[0]; // 8020B6C8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8020B6CC
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8020B6D0
  return; // 8020B6D4
}

// fn_8020B6D8
void f_8020B6D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B6D8
  c->r[0]=c->lr; // 8020B6DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020B6E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020B6E4
  c->r[31]=0u+0x00000000u; // 8020B6E8
  goto L_8020B70C; // 8020B6EC
L_8020B6F0:;
  c->r[4]=R16(c->r[5]+0x00000004u); // 8020B6F0
  c->r[3]=c->r[3]+0x00000056u; // 8020B6F4
  c->lr=0x8020B6FCu; f_8020B6A4(c); // 8020B6F8
  cmps(c,0,(int32_t)c->r[3],0); // 8020B6FC
  if (crb(c,2)) { goto L_8020B714; } // 8020B700
  c->r[31]=0u+0x00000001u; // 8020B704
  goto L_8020B714; // 8020B708
L_8020B70C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8020B70C
  if (!crb(c,2)) { IRQCHK(c); goto L_8020B6F0; } // 8020B710
L_8020B714:;
  c->r[3]=c->r[31]|c->r[31]; // 8020B714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020B718
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020B71C
  c->lr=c->r[0]; // 8020B720
  c->r[1]=c->r[1]+0x00000010u; // 8020B724
  return; // 8020B728
}

// fn_8020B72C
void f_8020B72C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 8020B72C
  c->r[5]=0u+0x00000000u; // 8020B730
  if (!crb(c,2)) { goto L_8020B740; } // 8020B734
  c->r[5]=0u+0xFFFFF05Fu; // 8020B738
  goto L_8020B750; // 8020B73C
L_8020B740:;
  c->r[0]=R16(c->r[3]+0x000001DEu); // 8020B740
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 8020B744
  c->r[0]=c->r[3]+0x000001E4u; // 8020B748
  W32(c->r[4]+0x00000000u,c->r[0]); // 8020B74C
L_8020B750:;
  c->r[3]=c->r[5]|c->r[5]; // 8020B750
  return; // 8020B754
}

// fn_8020B758
void f_8020B758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B758
  c->r[0]=c->lr; // 8020B75C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020B760
  c->r[11]=c->r[1]+0x00000030u; // 8020B764
  c->lr=0x8020B76Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020B768
  c->r[29]=c->r[5]|c->r[5]; // 8020B76C
  c->r[31]=c->r[6]|c->r[6]; // 8020B770
  c->r[28]=c->r[3]|c->r[3]; // 8020B774
  c->r[27]=c->r[4]|c->r[4]; // 8020B778
  c->r[6]=c->r[1]+0x00000008u; // 8020B77C
  c->r[30]=0u+0x00000000u; // 8020B780
  c->r[5]=0u+0x00000000u; // 8020B784
  c->lr=0x8020B78Cu; f_80200210(c); // 8020B788
  cmps(c,0,(int32_t)c->r[3],0); // 8020B78C
  c->r[7]=c->r[3]|c->r[3]; // 8020B790
  if (crb(c,2)) { goto L_8020B7C8; } // 8020B794
  cmps(c,0,(int32_t)c->r[3],-106); // 8020B798
  c->r[3]=0u+0x00000001u; // 8020B79C
  if (!crb(c,2)) { goto L_8020B7A8; } // 8020B7A0
  c->r[3]=0u+0x00000003u; // 8020B7A4
L_8020B7A8:;
  c->r[4]=0u+0x802A0000u; // 8020B7A8
  c->r[6]=c->r[27]|c->r[27]; // 8020B7AC
  c->r[5]=c->r[28]|c->r[28]; // 8020B7B0
  c->r[4]=c->r[4]+0x000043EEu; // 8020B7B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B7B8
  c->lr=0x8020B7C0u; f_8020B328(c); // 8020B7BC
  c->r[31]=0u+0xFFFFF01Au; // 8020B7C0
  goto L_8020B854; // 8020B7C4
L_8020B7C8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8020B7C8
  c->r[4]=0u+0x00000020u; // 8020B7CC
  c->lr=0x8020B7D4u; f_8020EA58(c); // 8020B7D0
  cmps(c,0,(int32_t)c->r[3],0); // 8020B7D4
  c->r[30]=c->r[3]|c->r[3]; // 8020B7D8
  if (!crb(c,2)) { goto L_8020B7FC; } // 8020B7DC
  c->r[4]=0u+0x802A0000u; // 8020B7E0
  c->r[3]=0u+0x00000001u; // 8020B7E4
  c->r[4]=c->r[4]+0x0000440Fu; // 8020B7E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B7EC
  c->lr=0x8020B7F4u; f_8020B328(c); // 8020B7F0
  c->r[31]=0u+0xFFFFF05Bu; // 8020B7F4
  goto L_8020B854; // 8020B7F8
L_8020B7FC:;
  c->r[4]=c->r[27]|c->r[27]; // 8020B7FC
  c->r[3]=c->r[28]|c->r[28]; // 8020B800
  c->r[5]=c->r[30]|c->r[30]; // 8020B804
  c->r[6]=c->r[1]+0x00000008u; // 8020B808
  c->lr=0x8020B810u; f_80200210(c); // 8020B80C
  cmps(c,0,(int32_t)c->r[3],0); // 8020B810
  if (crb(c,2)) { goto L_8020B840; } // 8020B814
  c->r[4]=0u+0x802A0000u; // 8020B818
  c->r[7]=c->r[3]|c->r[3]; // 8020B81C
  c->r[6]=c->r[27]|c->r[27]; // 8020B820
  c->r[5]=c->r[28]|c->r[28]; // 8020B824
  c->r[4]=c->r[4]+0x000043EEu; // 8020B828
  c->r[3]=0u+0x00000001u; // 8020B82C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020B830
  c->lr=0x8020B838u; f_8020B328(c); // 8020B834
  c->r[31]=0u+0xFFFFF01Au; // 8020B838
  goto L_8020B854; // 8020B83C
L_8020B840:;
  c->r[3]=c->r[30]|c->r[30]; // 8020B840
  c->r[4]=c->r[29]|c->r[29]; // 8020B844
  c->r[5]=c->r[31]|c->r[31]; // 8020B848
  c->lr=0x8020B850u; f_8020B880(c); // 8020B84C
  c->r[31]=c->r[3]|c->r[3]; // 8020B850
L_8020B854:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020B854
  if (crb(c,2)) { goto L_8020B864; } // 8020B858
  c->r[3]=c->r[30]|c->r[30]; // 8020B85C
  c->lr=0x8020B864u; f_8020EB2C(c); // 8020B860
L_8020B864:;
  c->r[11]=c->r[1]+0x00000030u; // 8020B864
  c->r[3]=c->r[31]|c->r[31]; // 8020B868
  c->lr=0x8020B870u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020B86C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020B870
  c->lr=c->r[0]; // 8020B874
  c->r[1]=c->r[1]+0x00000030u; // 8020B878
  return; // 8020B87C
}

// fn_8020B880
void f_8020B880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B880
  c->r[0]=c->lr; // 8020B884
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020B888
  c->r[11]=c->r[1]+0x00000020u; // 8020B88C
  c->lr=0x8020B894u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020B890
  cmps(c,0,(int32_t)c->r[3],0); // 8020B894
  c->r[27]=c->r[3]|c->r[3]; // 8020B898
  c->r[28]=c->r[4]|c->r[4]; // 8020B89C
  c->r[29]=c->r[5]|c->r[5]; // 8020B8A0
  c->r[31]=0u+0x00000000u; // 8020B8A4
  if (!crb(c,2)) { goto L_8020B8B4; } // 8020B8A8
  c->r[31]=0u+0xFFFFF05Fu; // 8020B8AC
  goto L_8020B9A0; // 8020B8B0
L_8020B8B4:;
  c->r[0]=R16(c->r[3]+0x000001DEu); // 8020B8B4
  cmps(c,0,(int32_t)c->r[4],0); // 8020B8B8
  c->r[3]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8020B8BC
  c->r[30]=c->r[3]+0x00000060u; // 8020B8C0
  if (crb(c,2)) { goto L_8020B99C; } // 8020B8C4
  c->r[0]=R32(c->r[5]+0x00000000u); // 8020B8C8
  cmpu(c,0,c->r[30],c->r[0]); // 8020B8CC
  if (!crb(c,1)) { goto L_8020B8DC; } // 8020B8D0
  c->r[31]=0u+0xFFFFF05Fu; // 8020B8D4
  goto L_8020B9A0; // 8020B8D8
L_8020B8DC:;
  c->r[3]=c->r[28]|c->r[28]; // 8020B8DC
  c->r[5]=c->r[30]|c->r[30]; // 8020B8E0
  c->r[4]=0u+0x00000000u; // 8020B8E4
  c->lr=0x8020B8ECu; f_8000443C(c); // 8020B8E8
  c->r[0]=R8(c->r[27]+0x00000180u); // 8020B8EC
  c->r[3]=c->r[28]+0x0000001Eu; // 8020B8F0
  c->r[4]=c->r[27]+0x0000019Au; // 8020B8F4
  c->r[5]=0u+0x0000003Eu; // 8020B8F8
  W8(c->r[28]+0x00000000u,c->r[0]); // 8020B8FC
  c->r[0]=R32(c->r[27]+0x00000184u); // 8020B900
  c->r[6]=R32(c->r[27]+0x00000188u); // 8020B904
  W32(c->r[28]+0x0000000Cu,c->r[6]); // 8020B908
  W32(c->r[28]+0x00000008u,c->r[0]); // 8020B90C
  c->r[0]=R32(c->r[27]+0x0000018Cu); // 8020B910
  c->r[6]=R32(c->r[27]+0x00000190u); // 8020B914
  W32(c->r[28]+0x00000014u,c->r[6]); // 8020B918
  W32(c->r[28]+0x00000010u,c->r[0]); // 8020B91C
  c->r[0]=R32(c->r[27]+0x00000194u); // 8020B920
  W32(c->r[28]+0x00000018u,c->r[0]); // 8020B924
  c->r[0]=R16(c->r[27]+0x00000198u); // 8020B928
  W16(c->r[28]+0x0000001Cu,c->r[0]); // 8020B92C
  c->lr=0x8020B934u; f_80004338(c); // 8020B930
  c->r[0]=R16(c->r[27]+0x000001DCu); // 8020B934
  c->r[7]=0u+0x00000000u; // 8020B938
  c->r[3]=0u+0x00000000u; // 8020B93C
  c->r[4]=0u+0x00000000u; // 8020B940
  W16(c->r[28]+0x0000005Cu,c->r[0]); // 8020B944
  c->r[0]=R16(c->r[27]+0x000001DEu); // 8020B948
  W16(c->r[28]+0x0000005Eu,c->r[0]); // 8020B94C
  goto L_8020B990; // 8020B950
L_8020B954:;
  c->r[5]=c->r[27]+c->r[3]; // 8020B954
  c->r[6]=c->r[28]+c->r[4]; // 8020B958
  c->r[0]=R32(c->r[5]+0x000001E4u); // 8020B95C
  c->r[7]=c->r[7]+0x00000001u; // 8020B960
  c->r[3]=c->r[3]+0x00000024u; // 8020B964
  c->r[4]=c->r[4]+0x00000010u; // 8020B968
  W32(c->r[6]+0x00000060u,c->r[0]); // 8020B96C
  c->r[0]=R16(c->r[5]+0x000001E8u); // 8020B970
  W16(c->r[6]+0x00000064u,c->r[0]); // 8020B974
  c->r[0]=R16(c->r[5]+0x000001EAu); // 8020B978
  W16(c->r[6]+0x00000066u,c->r[0]); // 8020B97C
  c->r[0]=R32(c->r[5]+0x000001ECu); // 8020B980
  c->r[5]=R32(c->r[5]+0x000001F0u); // 8020B984
  W32(c->r[6]+0x0000006Cu,c->r[5]); // 8020B988
  W32(c->r[6]+0x00000068u,c->r[0]); // 8020B98C
L_8020B990:;
  c->r[0]=R16(c->r[28]+0x0000005Eu); // 8020B990
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8020B994
  if (crb(c,0)) { IRQCHK(c); goto L_8020B954; } // 8020B998
L_8020B99C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 8020B99C
L_8020B9A0:;
  c->r[11]=c->r[1]+0x00000020u; // 8020B9A0
  c->r[3]=c->r[31]|c->r[31]; // 8020B9A4
  c->lr=0x8020B9ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020B9A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020B9AC
  c->lr=c->r[0]; // 8020B9B0
  c->r[1]=c->r[1]+0x00000020u; // 8020B9B4
  return; // 8020B9B8
}

// fn_8020B9BC
void f_8020B9BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020B9BC
  c->r[0]=c->lr; // 8020B9C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020B9C4
  c->r[11]=c->r[1]+0x00000030u; // 8020B9C8
  c->lr=0x8020B9D0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020B9CC
  c->r[29]=0u+0x00000000u; // 8020B9D0
  c->r[31]=0u+0x802A0000u; // 8020B9D4
  W32(c->r[4]+0x00000000u,c->r[29]); // 8020B9D8
  c->r[26]=c->r[4]|c->r[4]; // 8020B9DC
  c->r[28]=R32(c->r[3]+0x0000018Cu); // 8020B9E0
  c->r[25]=c->r[3]|c->r[3]; // 8020B9E4
  c->r[27]=R32(c->r[3]+0x00000190u); // 8020B9E8
  c->r[31]=c->r[31]+0x00004178u; // 8020B9EC
  c->r[5]=c->r[1]+0x00000008u; // 8020B9F0
  c->r[4]=0u+0x00000000u; // 8020B9F4
  c->lr=0x8020B9FCu; f_8020B880(c); // 8020B9F8
  cmps(c,0,(int32_t)c->r[3],0); // 8020B9FC
  c->r[30]=c->r[3]|c->r[3]; // 8020BA00
  if (crb(c,2)) { goto L_8020BA28; } // 8020BA04
  c->r[6]=c->r[27]|c->r[27]; // 8020BA08
  c->r[5]=c->r[28]|c->r[28]; // 8020BA0C
  c->r[7]=c->r[30]|c->r[30]; // 8020BA10
  c->r[4]=c->r[31]+0x00000367u; // 8020BA14
  c->r[3]=0u+0x00000003u; // 8020BA18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020BA1C
  c->lr=0x8020BA24u; f_8020B328(c); // 8020BA20
  goto L_8020BA9C; // 8020BA24
L_8020BA28:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8020BA28
  c->r[4]=0u+0x00000020u; // 8020BA2C
  c->lr=0x8020BA34u; f_8020EA58(c); // 8020BA30
  cmps(c,0,(int32_t)c->r[3],0); // 8020BA34
  c->r[29]=c->r[3]|c->r[3]; // 8020BA38
  if (!crb(c,2)) { goto L_8020BA64; } // 8020BA3C
  c->r[6]=c->r[27]|c->r[27]; // 8020BA40
  c->r[5]=c->r[28]|c->r[28]; // 8020BA44
  c->r[4]=c->r[31]+0x000002F9u; // 8020BA48
  c->r[30]=0u+0xFFFFF05Bu; // 8020BA4C
  c->r[3]=0u+0x00000001u; // 8020BA50
  c->r[7]=0u+0xFFFFF05Bu; // 8020BA54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020BA58
  c->lr=0x8020BA60u; f_8020B328(c); // 8020BA5C
  goto L_8020BA9C; // 8020BA60
L_8020BA64:;
  c->r[3]=c->r[25]|c->r[25]; // 8020BA64
  c->r[4]=c->r[29]|c->r[29]; // 8020BA68
  c->r[5]=c->r[1]+0x00000008u; // 8020BA6C
  c->lr=0x8020BA74u; f_8020B880(c); // 8020BA70
  cmps(c,0,(int32_t)c->r[3],0); // 8020BA74
  c->r[30]=c->r[3]|c->r[3]; // 8020BA78
  if (crb(c,2)) { goto L_8020BA9C; } // 8020BA7C
  c->r[6]=c->r[27]|c->r[27]; // 8020BA80
  c->r[5]=c->r[28]|c->r[28]; // 8020BA84
  c->r[7]=c->r[30]|c->r[30]; // 8020BA88
  c->r[4]=c->r[31]+0x00000336u; // 8020BA8C
  c->r[3]=0u+0x00000001u; // 8020BA90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020BA94
  c->lr=0x8020BA9Cu; f_8020B328(c); // 8020BA98
L_8020BA9C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020BA9C
  if (!crb(c,0)) { goto L_8020BAB8; } // 8020BAA0
  cmps(c,0,(int32_t)c->r[29],0); // 8020BAA4
  if (crb(c,2)) { goto L_8020BAB8; } // 8020BAA8
  c->r[3]=c->r[29]|c->r[29]; // 8020BAAC
  c->lr=0x8020BAB4u; f_8020EB2C(c); // 8020BAB0
  c->r[29]=0u+0x00000000u; // 8020BAB4
L_8020BAB8:;
  W32(c->r[26]+0x00000000u,c->r[29]); // 8020BAB8
  c->r[11]=c->r[1]+0x00000030u; // 8020BABC
  c->r[3]=c->r[30]|c->r[30]; // 8020BAC0
  c->lr=0x8020BAC8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020BAC4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020BAC8
  c->lr=c->r[0]; // 8020BACC
  c->r[1]=c->r[1]+0x00000030u; // 8020BAD0
  return; // 8020BAD4
}

// fn_8020BAD8
void f_8020BAD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020BAD8
  c->r[0]=c->lr; // 8020BADC
  W32(c->r[1]+0x00000124u,c->r[0]); // 8020BAE0
  c->r[11]=c->r[1]+0x00000120u; // 8020BAE4
  c->lr=0x8020BAECu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020BAE8
  c->r[31]=c->r[1]|c->r[1]; // 8020BAEC
  c->r[0]=0u+0x00000000u; // 8020BAF0
  c->r[26]=0u+0x802A0000u; // 8020BAF4
  W16(c->r[31]+0x0000002Au,c->r[0]); // 8020BAF8
  c->r[28]=c->r[3]|c->r[3]; // 8020BAFC
  c->r[18]=c->r[4]|c->r[4]; // 8020BB00
  c->r[24]=c->r[5]|c->r[5]; // 8020BB04
  W32(c->r[31]+0x00000030u,c->r[0]); // 8020BB08
  c->r[26]=c->r[26]+0x00004888u; // 8020BB0C
  c->r[27]=0u+0x00000000u; // 8020BB10
  c->r[22]=0u+0x00000000u; // 8020BB14
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8020BB18
  c->r[21]=0u+0x00000000u; // 8020BB1C
  c->r[20]=0u+0x00000000u; // 8020BB20
  c->r[19]=0u+0x00000000u; // 8020BB24
  cmps(c,0,(int32_t)c->r[0],3); // 8020BB28
  c->r[23]=0u+0x00000000u; // 8020BB2C
  if (crb(c,2)) { goto L_8020BB74; } // 8020BB30
  if (!crb(c,0)) { goto L_8020BB50; } // 8020BB34
  cmps(c,0,(int32_t)c->r[0],1); // 8020BB38
  if (crb(c,2)) { goto L_8020BB80; } // 8020BB3C
  if (!crb(c,0)) { goto L_8020BB68; } // 8020BB40
  cmps(c,0,(int32_t)c->r[0],0); // 8020BB44
  if (!crb(c,0)) { goto L_8020BB5C; } // 8020BB48
  goto L_8020BBA8; // 8020BB4C
L_8020BB50:;
  cmps(c,0,(int32_t)c->r[0],16400); // 8020BB50
  if (crb(c,2)) { goto L_8020BB8C; } // 8020BB54
  goto L_8020BBA8; // 8020BB58
L_8020BB5C:;
  c->r[30]=0u+0x00000004u; // 8020BB5C
  c->r[29]=0u+0x00000000u; // 8020BB60
  goto L_8020BBB0; // 8020BB64
L_8020BB68:;
  c->r[30]=0u+0x00000004u; // 8020BB68
  c->r[29]=0u+0x00000002u; // 8020BB6C
  goto L_8020BBB0; // 8020BB70
L_8020BB74:;
  c->r[30]=0u+0x00000000u; // 8020BB74
  c->r[29]=0u+0x00000000u; // 8020BB78
  goto L_8020BBB0; // 8020BB7C
L_8020BB80:;
  c->r[30]=0u+0x00000004u; // 8020BB80
  c->r[29]=0u+0x00000003u; // 8020BB84
  goto L_8020BBB0; // 8020BB88
L_8020BB8C:;
  c->r[21]=c->r[18]|c->r[18]; // 8020BB8C
  c->r[20]=c->r[24]|c->r[24]; // 8020BB90
  c->r[30]=0u+0x00000002u; // 8020BB94
  c->r[29]=0u+0x00000002u; // 8020BB98
  c->r[19]=0u+0x00000001u; // 8020BB9C
  c->r[23]=0u+0x00000001u; // 8020BBA0
  goto L_8020BBB0; // 8020BBA4
L_8020BBA8:;
  c->r[3]=0u+0xFFFFF05Cu; // 8020BBA8
  goto L_8020C42C; // 8020BBAC
L_8020BBB0:;
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8020BBB0
  c->r[4]=R32(c->r[28]+0x000000CCu); // 8020BBB4
  c->lr=0x8020BBBCu; f_8021EB34(c); // 8020BBB8
  cmps(c,0,(int32_t)c->r[3],0); // 8020BBBC
  if (!crb(c,2)) { goto L_8020BBCC; } // 8020BBC0
  c->r[3]=0u+0xFFFFF05Cu; // 8020BBC4
  goto L_8020C42C; // 8020BBC8
L_8020BBCC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020BBCC
  c->lr=0x8020BBD4u; f_80206580(c); // 8020BBD0
  cmps(c,0,(int32_t)c->r[3],0); // 8020BBD4
  if (crb(c,2)) { goto L_8020BBE0; } // 8020BBD8
  goto L_8020C42C; // 8020BBDC
L_8020BBE0:;
  c->r[0]=0u+0x00000005u; // 8020BBE0
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020BBE4
  W32(c->r[28]+0x00000028u,c->r[0]); // 8020BBE8
  c->lr=0x8020BBF0u; f_80203E30(c); // 8020BBEC
  c->r[4]=0u+0x80380000u; // 8020BBF0
  c->r[3]=0u+0x00010000u; // 8020BBF4
  c->r[4]=c->r[4]+0x00007400u; // 8020BBF8
  W32(c->r[31]+0x00000084u,c->r[1]); // 8020BBFC
  c->r[0]=c->r[3]+0xFFFF8000u; // 8020BC00
  c->r[6]=c->r[31]+0x0000003Cu; // 8020BC04
  W32(c->r[31]+0x00000044u,c->r[4]); // 8020BC08
  c->r[5]=0u+0x00000000u; // 8020BC0C
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8020BC10
  c->r[3]=R32(c->r[28]+0x000000C8u); // 8020BC14
  c->r[4]=R32(c->r[28]+0x000000CCu); // 8020BC18
  c->lr=0x8020BC20u; f_80200210(c); // 8020BC1C
  cmps(c,0,(int32_t)c->r[3],0); // 8020BC20
  c->r[25]=c->r[3]|c->r[3]; // 8020BC24
  if (!crb(c,2)) { goto L_8020BC44; } // 8020BC28
  c->r[3]=R32(c->r[28]+0x000000C8u); // 8020BC2C
  c->r[6]=c->r[31]+0x0000003Cu; // 8020BC30
  c->r[4]=R32(c->r[28]+0x000000CCu); // 8020BC34
  c->r[5]=R32(c->r[31]+0x00000044u); // 8020BC38
  c->lr=0x8020BC40u; f_80200210(c); // 8020BC3C
  c->r[25]=c->r[3]|c->r[3]; // 8020BC40
L_8020BC44:;
  cmps(c,0,(int32_t)c->r[25],0); // 8020BC44
  if (!crb(c,2)) { goto L_8020BC58; } // 8020BC48
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8020BC4C
  cmps(c,0,(int32_t)c->r[0],0); // 8020BC50
  if (!crb(c,2)) { goto L_8020BC9C; } // 8020BC54
L_8020BC58:;
  c->r[5]=c->r[25]|c->r[25]; // 8020BC58
  c->r[4]=c->r[26]+0x00000011u; // 8020BC5C
  c->r[3]=0u+0x00000003u; // 8020BC60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020BC64
  c->lr=0x8020BC6Cu; f_8020B328(c); // 8020BC68
  cmps(c,0,(int32_t)c->r[23],0); // 8020BC6C
  if (crb(c,2)) { goto L_8020BC7C; } // 8020BC70
  c->r[25]=0u+0xFFFFF01Au; // 8020BC74
  goto L_8020C410; // 8020BC78
L_8020BC7C:;
  c->r[3]=c->r[31]+0x000000B0u; // 8020BC7C
  c->r[4]=0u+0x00000000u; // 8020BC80
  c->r[5]=0u+0x00000028u; // 8020BC84
  c->lr=0x8020BC8Cu; f_8000443C(c); // 8020BC88
  c->r[0]=0u+0x00000000u; // 8020BC8C
  W32(c->r[31]+0x00000030u,c->r[0]); // 8020BC90
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8020BC94
  goto L_8020BD9C; // 8020BC98
L_8020BC9C:;
  c->r[5]=R32(c->r[28]+0x000000C8u); // 8020BC9C
  c->r[4]=c->r[26]+0x00000033u; // 8020BCA0
  c->r[6]=R32(c->r[28]+0x000000CCu); // 8020BCA4
  c->r[3]=0u+0x00000003u; // 8020BCA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020BCAC
  c->lr=0x8020BCB4u; f_8020B328(c); // 8020BCB0
  c->r[0]=0u+0x00002060u; // 8020BCB4
  c->r[17]=0u+0x80380000u; // 8020BCB8
  W32(c->r[31]+0x00000048u,c->r[0]); // 8020BCBC
  c->r[5]=c->r[17]+0x00003340u; // 8020BCC0
  c->r[6]=c->r[31]+0x00000048u; // 8020BCC4
  c->r[3]=R32(c->r[28]+0x000000C8u); // 8020BCC8
  c->r[4]=R32(c->r[28]+0x000000CCu); // 8020BCCC
  c->lr=0x8020BCD4u; f_8020B758(c); // 8020BCD0
  cmps(c,0,(int32_t)c->r[3],0); // 8020BCD4
  c->r[25]=c->r[3]|c->r[3]; // 8020BCD8
  if (crb(c,2)) { goto L_8020BD1C; } // 8020BCDC
  c->r[5]=c->r[25]|c->r[25]; // 8020BCE0
  c->r[4]=c->r[26]+0x00000065u; // 8020BCE4
  c->r[3]=0u+0x00000001u; // 8020BCE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020BCEC
  c->lr=0x8020BCF4u; f_8020B328(c); // 8020BCF0
  cmps(c,0,(int32_t)c->r[23],0); // 8020BCF4
  if (!crb(c,2)) { goto L_8020C410; } // 8020BCF8
  c->r[3]=c->r[31]+0x000000B0u; // 8020BCFC
  c->r[4]=0u+0x00000000u; // 8020BD00
  c->r[5]=0u+0x00000028u; // 8020BD04
  c->lr=0x8020BD0Cu; f_8000443C(c); // 8020BD08
  c->r[0]=0u+0x00000000u; // 8020BD0C
  W32(c->r[31]+0x00000030u,c->r[0]); // 8020BD10
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8020BD14
  goto L_8020BD9C; // 8020BD18
L_8020BD1C:;
  c->r[4]=c->r[17]+0x00003340u; // 8020BD1C
  c->r[9]=0u+0x80380000u; // 8020BD20
  c->r[3]=R16(c->r[4]+0x0000005Cu); // 8020BD24
  c->r[6]=0u+0x80380000u; // 8020BD28
  c->r[0]=c->r[31]+0x00000029u; // 8020BD2C
  c->r[7]=c->r[31]+0x00000028u; // 8020BD30
  W16(c->r[31]+0x0000002Au,c->r[3]); // 8020BD34
  c->r[9]=c->r[9]+0x000029ACu; // 8020BD38
  c->r[11]=c->r[31]+0x00000030u; // 8020BD3C
  c->r[6]=c->r[6]+0x00002DACu; // 8020BD40
  W32(c->r[1]+0x00000008u,c->r[0]); // 8020BD44
  c->r[5]=c->r[31]+0x0000002Cu; // 8020BD48
  c->r[3]=c->r[31]+0x000000B0u; // 8020BD4C
  c->r[0]=c->r[31]+0x000000C4u; // 8020BD50
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8020BD54
  c->r[7]=c->r[30]|c->r[30]; // 8020BD58
  c->r[8]=c->r[29]|c->r[29]; // 8020BD5C
  c->r[10]=0u+0x00000000u; // 8020BD60
  W32(c->r[1]+0x00000010u,c->r[9]); // 8020BD64
  c->r[9]=0u+0x00000000u; // 8020BD68
  W32(c->r[1]+0x00000014u,c->r[11]); // 8020BD6C
  W32(c->r[1]+0x00000018u,c->r[6]); // 8020BD70
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8020BD74
  W32(c->r[1]+0x00000020u,c->r[3]); // 8020BD78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020BD7C
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020BD80
  c->r[5]=R32(c->r[31]+0x00000044u); // 8020BD84
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 8020BD88
  c->lr=0x8020BD90u; f_802176E8(c); // 8020BD8C
  cmps(c,0,(int32_t)c->r[3],0); // 8020BD90
  c->r[25]=c->r[3]|c->r[3]; // 8020BD94
  if (!crb(c,2)) { goto L_8020C410; } // 8020BD98
L_8020BD9C:;
  cmps(c,0,(int32_t)c->r[19],0); // 8020BD9C
  if (crb(c,2)) { goto L_8020BDA8; } // 8020BDA0
  c->r[27]=c->r[31]+0x0000002Au; // 8020BDA4
L_8020BDA8:;
  c->r[3]=0u+0x00010000u; // 8020BDA8
  c->r[5]=c->r[27]|c->r[27]; // 8020BDAC
  c->r[0]=c->r[3]+0xFFFF8000u; // 8020BDB0
  c->r[4]=c->r[28]+0x000000D0u; // 8020BDB4
  W32(c->r[31]+0x00000040u,c->r[0]); // 8020BDB8
  c->r[6]=c->r[31]+0x00000044u; // 8020BDBC
  c->r[7]=c->r[31]+0x00000040u; // 8020BDC0
  c->r[8]=c->r[31]+0x00000038u; // 8020BDC4
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020BDC8
  c->r[9]=c->r[31]+0x00000034u; // 8020BDCC
  c->lr=0x8020BDD4u; f_802172B0(c); // 8020BDD0
  cmps(c,0,(int32_t)c->r[3],0); // 8020BDD4
  c->r[25]=c->r[3]|c->r[3]; // 8020BDD8
  if (!crb(c,2)) { goto L_8020C410; } // 8020BDDC
  c->r[0]=0u+0x00002060u; // 8020BDE0
  c->r[19]=0u+0x80380000u; // 8020BDE4
  W32(c->r[31]+0x00000048u,c->r[0]); // 8020BDE8
  c->r[4]=c->r[19]+0x00003340u; // 8020BDEC
  c->r[3]=R32(c->r[31]+0x00000044u); // 8020BDF0
  c->r[5]=c->r[31]+0x00000048u; // 8020BDF4
  c->lr=0x8020BDFCu; f_8020B880(c); // 8020BDF8
  cmps(c,0,(int32_t)c->r[3],0); // 8020BDFC
  c->r[25]=c->r[3]|c->r[3]; // 8020BE00
  if (crb(c,2)) { goto L_8020BE20; } // 8020BE04
  c->r[5]=c->r[25]|c->r[25]; // 8020BE08
  c->r[4]=c->r[26]+0x00000088u; // 8020BE0C
  c->r[3]=0u+0x00000001u; // 8020BE10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020BE14
  c->lr=0x8020BE1Cu; f_8020B328(c); // 8020BE18
  goto L_8020C410; // 8020BE1C
L_8020BE20:;
  c->r[3]=c->r[19]+0x00003340u; // 8020BE20
  c->lr=0x8020BE28u; f_8021EC18(c); // 8020BE24
  cmps(c,0,(int32_t)c->r[3],0); // 8020BE28
  c->r[25]=c->r[3]|c->r[3]; // 8020BE2C
  if (crb(c,0)) { goto L_8020C410; } // 8020BE30
  if (!crb(c,1)) { goto L_8020BE40; } // 8020BE34
  c->r[19]=0u+0x00000001u; // 8020BE38
  goto L_8020BE44; // 8020BE3C
L_8020BE40:;
  c->r[19]=0u+0x00000000u; // 8020BE40
L_8020BE44:;
  cmps(c,0,(int32_t)c->r[19],0); // 8020BE44
  if (crb(c,2)) { goto L_8020BE64; } // 8020BE48
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020BE4C
  c->r[0]=R8(c->r[3]+0x00000232u); // 8020BE50
  cmps(c,0,(int32_t)c->r[0],0); // 8020BE54
  if (crb(c,2)) { goto L_8020BE64; } // 8020BE58
  c->r[25]=0u+0xFFFFF019u; // 8020BE5C
  goto L_8020C410; // 8020BE60
L_8020BE64:;
  c->r[0]=R32(c->r[28]+0x000000DCu); // 8020BE64
  cmps(c,0,(int32_t)c->r[0],2); // 8020BE68
  if (!crb(c,2)) { goto L_8020BE7C; } // 8020BE6C
  c->r[21]=0u+0x80380000u; // 8020BE70
  c->r[20]=R32(c->r[31]+0x00000030u); // 8020BE74
  c->r[21]=c->r[21]+0x000029ACu; // 8020BE78
L_8020BE7C:;
  cmps(c,0,(int32_t)c->r[18],0); // 8020BE7C
  if (crb(c,2)) { goto L_8020BF04; } // 8020BE80
  cmps(c,0,(int32_t)c->r[24],0); // 8020BE84
  if (crb(c,2)) { goto L_8020BF04; } // 8020BE88
  cmps(c,0,(int32_t)c->r[20],0); // 8020BE8C
  if (!crb(c,2)) { goto L_8020BEA0; } // 8020BE90
  c->r[21]=c->r[18]|c->r[18]; // 8020BE94
  c->r[20]=c->r[24]|c->r[24]; // 8020BE98
  goto L_8020BF04; // 8020BE9C
L_8020BEA0:;
  c->r[4]=0u+0x00000000u; // 8020BEA0
  goto L_8020BEFC; // 8020BEA4
L_8020BEA8:;
  c->r[5]=0u+0x00000000u; // 8020BEA8
  goto L_8020BECC; // 8020BEAC
L_8020BEB0:;
  c->r[3]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8020BEB0
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8020BEB4
  c->r[3]=R16(c->r[21]+c->r[3]); // 8020BEB8
  c->r[0]=R16(c->r[18]+c->r[0]); // 8020BEBC
  cmpu(c,0,c->r[3],c->r[0]); // 8020BEC0
  if (crb(c,2)) { goto L_8020BED4; } // 8020BEC4
  c->r[5]=c->r[5]+0x00000001u; // 8020BEC8
L_8020BECC:;
  cmpu(c,0,c->r[5],c->r[20]); // 8020BECC
  if (crb(c,0)) { IRQCHK(c); goto L_8020BEB0; } // 8020BED0
L_8020BED4:;
  cmpu(c,0,c->r[5],c->r[20]); // 8020BED4
  if (!crb(c,2)) { goto L_8020BEF8; } // 8020BED8
  cmpu(c,0,c->r[20],0x00000200u); // 8020BEDC
  if (!crb(c,0)) { goto L_8020BEF8; } // 8020BEE0
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8020BEE4
  c->r[0]=rotl(c->r[20],1)&0xFFFFFFFEu; // 8020BEE8
  c->r[3]=R16(c->r[18]+c->r[3]); // 8020BEEC
  c->r[20]=c->r[20]+0x00000001u; // 8020BEF0
  W16(c->r[21]+c->r[0],c->r[3]); // 8020BEF4
L_8020BEF8:;
  c->r[4]=c->r[4]+0x00000001u; // 8020BEF8
L_8020BEFC:;
  cmpu(c,0,c->r[4],c->r[24]); // 8020BEFC
  if (crb(c,0)) { IRQCHK(c); goto L_8020BEA8; } // 8020BF00
L_8020BF04:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020BF04
  c->r[5]=0u+0x00000000u; // 8020BF08
  c->r[4]=R32(c->r[31]+0x00000040u); // 8020BF0C
  c->r[0]=0u+0xFFFFFFFFu; // 8020BF10
  c->r[6]=R32(c->r[3]+0x000001C0u); // 8020BF14
  c->r[4]=addc(c,c->r[4],c->r[6],0); // 8020BF18
  c->r[3]=addc(c,c->r[5],0,c->xer_ca); // 8020BF1C
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 8020BF20
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 8020BF24
  c->lr=0x8020BF2Cu; f_80109F9C(c); // 8020BF28
  c->r[0]=R32(c->r[28]+0x000000DCu); // 8020BF2C
  c->r[27]=c->r[4]|c->r[4]; // 8020BF30
  cmps(c,0,(int32_t)c->r[0],3); // 8020BF34
  if (!crb(c,2)) { goto L_8020BF60; } // 8020BF38
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8020BF3C
  cmps(c,0,(int32_t)c->r[0],0); // 8020BF40
  if (crb(c,2)) { goto L_8020BF50; } // 8020BF44
  c->r[25]=0u+0x00000002u; // 8020BF48
  goto L_8020BF54; // 8020BF4C
L_8020BF50:;
  c->r[25]=0u+0x00000006u; // 8020BF50
L_8020BF54:;
  c->r[23]=0u+0x00000000u; // 8020BF54
  c->r[24]=0u+0x00000000u; // 8020BF58
  goto L_8020C07C; // 8020BF5C
L_8020BF60:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8020BF60
  cmps(c,0,(int32_t)c->r[0],0); // 8020BF64
  if (!crb(c,2)) { goto L_8020BF7C; } // 8020BF68
  c->r[25]=0u+0x00000006u; // 8020BF6C
  c->r[23]=0u+0x00000000u; // 8020BF70
  c->r[24]=0u+0x00000000u; // 8020BF74
  goto L_8020C07C; // 8020BF78
L_8020BF7C:;
  c->r[0]=c->r[31]+0x00000029u; // 8020BF7C
  c->r[6]=0u+0x80380000u; // 8020BF80
  W32(c->r[1]+0x00000008u,c->r[0]); // 8020BF84
  c->r[0]=c->r[31]+0x00000028u; // 8020BF88
  c->r[4]=0u+0x80380000u; // 8020BF8C
  c->r[9]=0u+0x00000000u; // 8020BF90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8020BF94
  c->r[6]=c->r[6]+0x00002DACu; // 8020BF98
  c->r[5]=c->r[31]+0x0000002Cu; // 8020BF9C
  c->r[3]=c->r[31]+0x00000088u; // 8020BFA0
  W32(c->r[1]+0x00000010u,c->r[9]); // 8020BFA4
  c->r[0]=c->r[31]+0x0000009Cu; // 8020BFA8
  c->r[7]=c->r[30]|c->r[30]; // 8020BFAC
  c->r[8]=c->r[29]|c->r[29]; // 8020BFB0
  W32(c->r[1]+0x00000014u,c->r[9]); // 8020BFB4
  c->r[9]=c->r[21]|c->r[21]; // 8020BFB8
  c->r[10]=c->r[20]|c->r[20]; // 8020BFBC
  c->r[4]=c->r[4]+0x00003340u; // 8020BFC0
  W32(c->r[1]+0x00000018u,c->r[6]); // 8020BFC4
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8020BFC8
  W32(c->r[1]+0x00000020u,c->r[3]); // 8020BFCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020BFD0
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020BFD4
  c->r[5]=R32(c->r[31]+0x00000044u); // 8020BFD8
  c->r[6]=R32(c->r[31]+0x00000040u); // 8020BFDC
  c->lr=0x8020BFE4u; f_802176E8(c); // 8020BFE0
  cmps(c,0,(int32_t)c->r[3],0); // 8020BFE4
  c->r[25]=c->r[3]|c->r[3]; // 8020BFE8
  if (!crb(c,2)) { goto L_8020C410; } // 8020BFEC
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 8020BFF0
  c->r[25]=0u+0x00000002u; // 8020BFF4
  c->r[4]=R32(c->r[31]+0x00000094u); // 8020BFF8
  c->r[3]=c->r[27]+c->r[0]; // 8020BFFC
  c->r[0]=R32(c->r[31]+0x000000B4u); // 8020C000
  c->r[27]=c->r[4]+c->r[3]; // 8020C004
  cmpu(c,0,c->r[27],c->r[0]); // 8020C008
  if (!crb(c,0)) { goto L_8020C018; } // 8020C00C
  c->r[27]=0u+0x00000000u; // 8020C010
  goto L_8020C01C; // 8020C014
L_8020C018:;
  c->r[27]=c->r[27]-c->r[0]; // 8020C018
L_8020C01C:;
  c->r[0]=R32(c->r[31]+0x00000090u); // 8020C01C
  c->r[4]=R32(c->r[31]+0x00000098u); // 8020C020
  c->r[3]=c->r[25]+c->r[0]; // 8020C024
  c->r[0]=R32(c->r[31]+0x000000B8u); // 8020C028
  c->r[25]=c->r[4]+c->r[3]; // 8020C02C
  cmpu(c,0,c->r[25],c->r[0]); // 8020C030
  if (!crb(c,0)) { goto L_8020C040; } // 8020C034
  c->r[25]=0u+0x00000000u; // 8020C038
  goto L_8020C044; // 8020C03C
L_8020C040:;
  c->r[25]=c->r[25]-c->r[0]; // 8020C040
L_8020C044:;
  c->r[4]=R32(c->r[31]+0x000000A0u); // 8020C044
  c->r[3]=R32(c->r[31]+0x000000A8u); // 8020C048
  c->r[0]=R32(c->r[31]+0x000000C8u); // 8020C04C
  c->r[23]=c->r[4]+c->r[3]; // 8020C050
  cmpu(c,0,c->r[23],c->r[0]); // 8020C054
  if (!crb(c,0)) { goto L_8020C064; } // 8020C058
  c->r[23]=0u+0x00000000u; // 8020C05C
  goto L_8020C068; // 8020C060
L_8020C064:;
  c->r[23]=c->r[23]-c->r[0]; // 8020C064
L_8020C068:;
  c->r[4]=R32(c->r[31]+0x000000A4u); // 8020C068
  c->r[3]=R32(c->r[31]+0x000000ACu); // 8020C06C
  c->r[0]=R32(c->r[31]+0x000000CCu); // 8020C070
  c->r[24]=c->r[4]+c->r[3]; // 8020C074
  c->r[24]=c->r[24]-c->r[0]; // 8020C078
L_8020C07C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C07C
  c->r[4]=c->r[25]|c->r[25]; // 8020C080
  c->r[5]=c->r[27]|c->r[27]; // 8020C084
  c->lr=0x8020C08Cu; f_80206600(c); // 8020C088
  cmps(c,0,(int32_t)c->r[3],0); // 8020C08C
  c->r[25]=c->r[3]|c->r[3]; // 8020C090
  if (!crb(c,2)) { goto L_8020C410; } // 8020C094
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C098
  c->r[4]=c->r[24]|c->r[24]; // 8020C09C
  c->r[5]=c->r[23]|c->r[23]; // 8020C0A0
  c->lr=0x8020C0A8u; f_80206640(c); // 8020C0A4
  cmps(c,0,(int32_t)c->r[3],0); // 8020C0A8
  c->r[25]=c->r[3]|c->r[3]; // 8020C0AC
  if (!crb(c,2)) { goto L_8020C410; } // 8020C0B0
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C0B4
  c->r[4]=R32(c->r[31]+0x00000044u); // 8020C0B8
  c->r[5]=R32(c->r[31]+0x00000040u); // 8020C0BC
  c->r[6]=R32(c->r[31]+0x00000038u); // 8020C0C0
  c->r[7]=R32(c->r[31]+0x00000034u); // 8020C0C4
  c->r[8]=R32(c->r[3]+0x00000228u); // 8020C0C8
  c->r[9]=R32(c->r[3]+0x0000022Cu); // 8020C0CC
  c->lr=0x8020C0D4u; f_80217524(c); // 8020C0D0
  cmps(c,0,(int32_t)c->r[3],0); // 8020C0D4
  c->r[25]=c->r[3]|c->r[3]; // 8020C0D8
  if (!crb(c,2)) { goto L_8020C410; } // 8020C0DC
  c->r[0]=R32(c->r[28]+0x000000DCu); // 8020C0E0
  cmps(c,0,(int32_t)c->r[0],3); // 8020C0E4
  if (crb(c,2)) { goto L_8020C410; } // 8020C0E8
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C0EC
  c->lr=0x8020C0F4u; f_80203E04(c); // 8020C0F0
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 8020C0F4
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C0F8
  c->lr=0x8020C100u; f_80206580(c); // 8020C0FC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8020C100
  c->r[25]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8020C104
  goto L_8020C158; // 8020C108
  c->r[4]=c->r[26]+0x000000B2u; // 8020C10C
  c->r[3]=0u+0x00000001u; // 8020C110
  c->r[5]=0u+0x000001B1u; // 8020C114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C118
  c->lr=0x8020C120u; f_8020B328(c); // 8020C11C
  c->r[25]=0u+0xFFFFF05Bu; // 8020C120
  goto L_8020C140; // 8020C124
  c->r[4]=c->r[26]+0x00000114u; // 8020C128
  c->r[3]=0u+0x00000001u; // 8020C12C
  c->r[5]=0u+0x000001B1u; // 8020C130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C134
  c->lr=0x8020C13Cu; f_8020B328(c); // 8020C138
  c->r[25]=0u+0xFFFFF05Fu; // 8020C13C
L_8020C140:;
  c->r[3]=c->r[31]+0x00000058u; // 8020C140
  c->lr=0x8020C148u; f_8010BF74(c); // 8020C144
  c->r[0]=c->r[0]|0x00000000u; // 8020C148
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020C14C
  c->r[1]=R32(c->r[31]+0x0000006Cu); // 8020C150
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020C154
L_8020C158:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C158
  c->lr=0x8020C160u; f_80203E30(c); // 8020C15C
  cmps(c,0,(int32_t)c->r[25],0); // 8020C160
  if (!crb(c,2)) { goto L_8020C410; } // 8020C164
  c->r[0]=c->r[31]+0x00000029u; // 8020C168
  c->r[6]=0u+0x80380000u; // 8020C16C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8020C170
  c->r[0]=c->r[31]+0x00000028u; // 8020C174
  c->r[4]=0u+0x00000000u; // 8020C178
  c->r[6]=c->r[6]+0x00002DACu; // 8020C17C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8020C180
  c->r[5]=c->r[31]+0x0000002Cu; // 8020C184
  c->r[3]=c->r[31]+0x00000088u; // 8020C188
  c->r[0]=c->r[31]+0x0000009Cu; // 8020C18C
  W32(c->r[1]+0x00000010u,c->r[4]); // 8020C190
  c->r[27]=0u+0x80380000u; // 8020C194
  c->r[7]=c->r[30]|c->r[30]; // 8020C198
  c->r[8]=c->r[29]|c->r[29]; // 8020C19C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8020C1A0
  c->r[9]=c->r[21]|c->r[21]; // 8020C1A4
  c->r[10]=c->r[20]|c->r[20]; // 8020C1A8
  c->r[4]=c->r[27]+0x00003340u; // 8020C1AC
  W32(c->r[1]+0x00000018u,c->r[6]); // 8020C1B0
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8020C1B4
  W32(c->r[1]+0x00000020u,c->r[3]); // 8020C1B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020C1BC
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C1C0
  c->r[5]=R32(c->r[31]+0x00000044u); // 8020C1C4
  c->r[6]=R32(c->r[31]+0x00000040u); // 8020C1C8
  c->lr=0x8020C1D0u; f_802176E8(c); // 8020C1CC
  cmps(c,0,(int32_t)c->r[3],0); // 8020C1D0
  c->r[25]=c->r[3]|c->r[3]; // 8020C1D4
  if (!crb(c,2)) { goto L_8020C410; } // 8020C1D8
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C1DC
  c->r[5]=0u+0x00000000u; // 8020C1E0
  c->r[0]=R32(c->r[31]+0x00000040u); // 8020C1E4
  c->r[29]=0u+0xFFFFFFFFu; // 8020C1E8
  c->r[6]=R32(c->r[3]+0x000001C0u); // 8020C1EC
  c->r[25]=0u+0x00000002u; // 8020C1F0
  c->r[3]=addc(c,c->r[0],c->r[6],0); // 8020C1F4
  c->r[0]=addc(c,c->r[5],0,c->xer_ca); // 8020C1F8
  c->r[4]=addc(c,c->r[3],c->r[29],0); // 8020C1FC
  c->r[3]=addc(c,c->r[0],c->r[29],c->xer_ca); // 8020C200
  c->lr=0x8020C208u; f_80109F9C(c); // 8020C204
  c->r[3]=R32(c->r[31]+0x00000094u); // 8020C208
  c->r[0]=R32(c->r[31]+0x00000098u); // 8020C20C
  c->r[5]=c->r[4]+c->r[3]; // 8020C210
  c->r[23]=R32(c->r[31]+0x000000A8u); // 8020C214
  c->r[24]=R32(c->r[31]+0x000000ACu); // 8020C218
  c->r[4]=c->r[25]+c->r[0]; // 8020C21C
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C220
  c->lr=0x8020C228u; f_80206600(c); // 8020C224
  cmps(c,0,(int32_t)c->r[3],0); // 8020C228
  c->r[25]=c->r[3]|c->r[3]; // 8020C22C
  if (!crb(c,2)) { goto L_8020C410; } // 8020C230
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C234
  c->r[4]=c->r[24]|c->r[24]; // 8020C238
  c->r[5]=c->r[23]|c->r[23]; // 8020C23C
  c->lr=0x8020C244u; f_80206640(c); // 8020C240
  cmps(c,0,(int32_t)c->r[3],0); // 8020C244
  c->r[25]=c->r[3]|c->r[3]; // 8020C248
  if (!crb(c,2)) { goto L_8020C410; } // 8020C24C
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C250
  c->r[0]=R8(c->r[3]+0x00000232u); // 8020C254
  cmps(c,0,(int32_t)c->r[0],0); // 8020C258
  if (!crb(c,2)) { goto L_8020C268; } // 8020C25C
  cmps(c,0,(int32_t)c->r[19],0); // 8020C260
  if (!crb(c,2)) { goto L_8020C2A0; } // 8020C264
L_8020C268:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8020C268
  cmps(c,0,(int32_t)c->r[0],0); // 8020C26C
  if (crb(c,2)) { goto L_8020C374; } // 8020C270
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C274
  c->r[0]=0u+0x00000001u; // 8020C278
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020C27C
  W32(c->r[3]+0x000000BCu,c->r[0]); // 8020C280
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C284
  c->r[4]=R32(c->r[31]+0x00000088u); // 8020C288
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 8020C28C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020C290
  c->r[4]=c->r[4]+c->r[0]; // 8020C294
  c->lr=0x8020C29Cu; f_80206B24(c); // 8020C298
  goto L_8020C374; // 8020C29C
L_8020C2A0:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 8020C2A0
  c->r[4]=0u+0x00000040u; // 8020C2A4
  c->r[0]=R32(c->r[31]+0x00000034u); // 8020C2A8
  c->r[3]=c->r[3]+c->r[0]; // 8020C2AC
  c->lr=0x8020C2B4u; f_8020EA58(c); // 8020C2B0
  cmps(c,0,(int32_t)c->r[3],0); // 8020C2B4
  c->r[22]=c->r[3]|c->r[3]; // 8020C2B8
  if (!crb(c,2)) { goto L_8020C2F8; } // 8020C2BC
  c->r[3]=c->r[31]+0x0000004Cu; // 8020C2C0
  c->r[4]=c->r[28]+0x000000D0u; // 8020C2C4
  c->lr=0x8020C2CCu; f_80206FA4(c); // 8020C2C8
  c->r[25]=0u+0xFFFFF05Bu; // 8020C2CC
  c->r[4]=c->r[26]+0x0000016Cu; // 8020C2D0
  c->r[6]=c->r[25]|c->r[25]; // 8020C2D4
  c->r[5]=c->r[31]+0x0000004Cu; // 8020C2D8
  c->r[3]=0u+0x00000001u; // 8020C2DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C2E0
  c->lr=0x8020C2E8u; f_8020B328(c); // 8020C2E4
  c->r[3]=c->r[31]+0x0000004Cu; // 8020C2E8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 8020C2EC
  c->lr=0x8020C2F4u; f_802030B0(c); // 8020C2F0
  goto L_8020C410; // 8020C2F4
L_8020C2F8:;
  c->r[4]=R32(c->r[31]+0x00000044u); // 8020C2F8
  c->r[5]=R32(c->r[31]+0x00000040u); // 8020C2FC
  c->lr=0x8020C304u; f_80004338(c); // 8020C300
  c->r[0]=R32(c->r[31]+0x00000040u); // 8020C304
  c->r[4]=R32(c->r[31]+0x00000038u); // 8020C308
  c->r[5]=R32(c->r[31]+0x00000034u); // 8020C30C
  c->r[3]=c->r[22]+c->r[0]; // 8020C310
  c->lr=0x8020C318u; f_80004338(c); // 8020C314
  c->r[6]=c->r[27]+0x00003340u; // 8020C318
  c->r[4]=R32(c->r[31]+0x00000088u); // 8020C31C
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 8020C320
  c->r[5]=R32(c->r[6]+0x00000008u); // 8020C324
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C328
  c->r[7]=c->r[4]+c->r[0]; // 8020C32C
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8020C330
  c->lr=0x8020C338u; f_80218824(c); // 8020C334
  cmps(c,0,(int32_t)c->r[3],0); // 8020C338
  c->r[25]=c->r[3]|c->r[3]; // 8020C33C
  if (!crb(c,2)) { goto L_8020C410; } // 8020C340
  c->r[3]=R32(c->r[31]+0x00000044u); // 8020C344
  c->r[4]=c->r[22]|c->r[22]; // 8020C348
  c->r[5]=R32(c->r[31]+0x00000040u); // 8020C34C
  c->lr=0x8020C354u; f_80004338(c); // 8020C350
  c->r[0]=R32(c->r[31]+0x00000040u); // 8020C354
  c->r[3]=R32(c->r[31]+0x00000038u); // 8020C358
  c->r[5]=R32(c->r[31]+0x00000034u); // 8020C35C
  c->r[4]=c->r[22]+c->r[0]; // 8020C360
  c->lr=0x8020C368u; f_80004338(c); // 8020C364
  c->r[3]=c->r[22]|c->r[22]; // 8020C368
  c->lr=0x8020C370u; f_8020EB2C(c); // 8020C36C
  c->r[22]=0u+0x00000000u; // 8020C370
L_8020C374:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8020C374
  cmps(c,0,(int32_t)c->r[0],0); // 8020C378
  if (crb(c,2)) { goto L_8020C410; } // 8020C37C
  c->r[3]=0u+0x80380000u; // 8020C380
  c->r[4]=0u+0x80380000u; // 8020C384
  c->r[3]=c->r[3]+0x00002DACu; // 8020C388
  W32(c->r[1]+0x00000008u,c->r[3]); // 8020C38C
  c->r[4]=c->r[4]+0x00003340u; // 8020C390
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8020C394
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8020C398
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C39C
  c->r[5]=R32(c->r[31]+0x00000044u); // 8020C3A0
  c->r[6]=R32(c->r[31]+0x00000040u); // 8020C3A4
  c->r[7]=R32(c->r[31]+0x00000038u); // 8020C3A8
  c->r[8]=R32(c->r[31]+0x00000034u); // 8020C3AC
  c->r[9]=R32(c->r[3]+0x00000228u); // 8020C3B0
  c->r[10]=R32(c->r[3]+0x0000022Cu); // 8020C3B4
  c->lr=0x8020C3BCu; f_80217BA8(c); // 8020C3B8
  c->r[25]=c->r[3]|c->r[3]; // 8020C3BC
  goto L_8020C410; // 8020C3C0
  c->r[4]=c->r[26]+0x000000B2u; // 8020C3C4
  c->r[3]=0u+0x00000001u; // 8020C3C8
  c->r[5]=0u+0x0000020Eu; // 8020C3CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C3D0
  c->lr=0x8020C3D8u; f_8020B328(c); // 8020C3D4
  c->r[25]=0u+0xFFFFF05Bu; // 8020C3D8
  goto L_8020C3F8; // 8020C3DC
  c->r[4]=c->r[26]+0x00000114u; // 8020C3E0
  c->r[3]=0u+0x00000001u; // 8020C3E4
  c->r[5]=0u+0x0000020Eu; // 8020C3E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C3EC
  c->lr=0x8020C3F4u; f_8020B328(c); // 8020C3F0
  c->r[25]=0u+0xFFFFF05Fu; // 8020C3F4
L_8020C3F8:;
  c->r[3]=c->r[31]+0x00000070u; // 8020C3F8
  c->lr=0x8020C400u; f_8010BF74(c); // 8020C3FC
  c->r[0]=c->r[0]|0x00000000u; // 8020C400
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020C404
  c->r[1]=R32(c->r[31]+0x00000084u); // 8020C408
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020C40C
L_8020C410:;
  cmps(c,0,(int32_t)c->r[22],0); // 8020C410
  if (crb(c,2)) { goto L_8020C420; } // 8020C414
  c->r[3]=c->r[22]|c->r[22]; // 8020C418
  c->lr=0x8020C420u; f_8020EB2C(c); // 8020C41C
L_8020C420:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C420
  c->lr=0x8020C428u; f_80203E04(c); // 8020C424
  c->r[3]=c->r[25]|c->r[25]; // 8020C428
L_8020C42C:;
  c->r[10]=c->r[31]|c->r[31]; // 8020C42C
  c->r[11]=c->r[10]+0x00000120u; // 8020C430
  c->lr=0x8020C438u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020C434
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020C438
  c->r[0]=R32(c->r[10]+0x00000004u); // 8020C43C
  c->r[1]=c->r[10]|c->r[10]; // 8020C440
  c->lr=c->r[0]; // 8020C444
  return; // 8020C448
}

// fn_8020C44C
void f_8020C44C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 8020C44C
  c->r[5]=0u+0x00000000u; // 8020C450
  f_8020BAD8(c); return; // 8020C454
}

// fn_8020C458
void f_8020C458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C458
  c->r[0]=c->lr; // 8020C45C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020C460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020C464
  c->r[31]=c->r[3]|c->r[3]; // 8020C468
  c->lr=0x8020C470u; f_80206D34(c); // 8020C46C
  c->r[0]=R32(c->r[31]+0x000000D0u); // 8020C470
  c->r[4]=0u+0x802A0000u; // 8020C474
  c->r[4]=c->r[4]+0x00004A2Fu; // 8020C478
  c->r[3]=0u+0x00000003u; // 8020C47C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8020C480
  if (!crb(c,2)) { goto L_8020C490; } // 8020C484
  c->r[5]=c->r[31]+0x000000D1u; // 8020C488
  goto L_8020C494; // 8020C48C
L_8020C490:;
  c->r[5]=R32(c->r[31]+0x000000D8u); // 8020C490
L_8020C494:;
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C494
  c->lr=0x8020C49Cu; f_8020B328(c); // 8020C498
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020C49C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020C4A0
  c->lr=c->r[0]; // 8020C4A4
  c->r[1]=c->r[1]+0x00000010u; // 8020C4A8
  return; // 8020C4AC
}

// fn_8020C4B0
void f_8020C4B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C4B0
  c->r[0]=c->lr; // 8020C4B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020C4B8
  c->r[11]=c->r[1]+0x00000030u; // 8020C4BC
  c->lr=0x8020C4C4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020C4C0
  c->r[28]=c->r[3]|c->r[3]; // 8020C4C4
  c->r[29]=c->r[5]|c->r[5]; // 8020C4C8
  c->lr=0x8020C4D0u; f_80206C00(c); // 8020C4CC
  c->r[0]=R32(c->r[28]+0x000000D0u); // 8020C4D0
  c->r[30]=c->r[3]|c->r[3]; // 8020C4D4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[4]); // 8020C4D8
  if (!crb(c,2)) { goto L_8020C504; } // 8020C4DC
  c->r[3]=R32(c->r[29]+0x00000008u); // 8020C4E0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 8020C4E4
  if (!crb(c,2)) { goto L_8020C504; } // 8020C4E8
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8020C4EC
  W32(c->r[28]+0x000000D0u,c->r[3]); // 8020C4F0
  W32(c->r[28]+0x000000D4u,c->r[0]); // 8020C4F4
  c->r[0]=R32(c->r[29]+0x00000010u); // 8020C4F8
  W32(c->r[28]+0x000000D8u,c->r[0]); // 8020C4FC
  goto L_8020C554; // 8020C500
L_8020C504:;
  cmps(c,0,(int32_t)c->r[4],0); // 8020C504
  if (crb(c,2)) { goto L_8020C514; } // 8020C508
  c->r[31]=R32(c->r[28]+0x000000D4u); // 8020C50C
  goto L_8020C51C; // 8020C510
L_8020C514:;
  c->r[0]=R8(c->r[28]+0x000000D0u); // 8020C514
  c->r[31]=rotl(c->r[0],0)&0x0000007Fu; // 8020C518
L_8020C51C:;
  c->r[3]=c->r[29]+0x00000008u; // 8020C51C
  c->r[4]=c->r[1]+0x0000000Cu; // 8020C520
  c->r[5]=c->r[1]+0x00000010u; // 8020C524
  c->lr=0x8020C52Cu; f_80204620(c); // 8020C528
  c->r[4]=R8(c->r[1]+0x00000009u); // 8020C52C
  c->r[5]=c->r[31]|c->r[31]; // 8020C530
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8020C534
  c->r[3]=c->r[28]+0x000000D0u; // 8020C538
  c->r[0]=R32(c->r[1]+0x00000010u); // 8020C53C
  c->r[8]=c->r[1]+0x00000008u; // 8020C540
  W8(c->r[1]+0x00000008u,c->r[4]); // 8020C544
  c->r[4]=0u+0x00000000u; // 8020C548
  c->r[7]=c->r[6]+c->r[0]; // 8020C54C
  c->lr=0x8020C554u; f_80203148(c); // 8020C550
L_8020C554:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8020C554
  c->r[11]=c->r[1]+0x00000030u; // 8020C558
  c->r[4]=R32(c->r[29]+0x00000004u); // 8020C55C
  c->r[3]=c->r[30]|c->r[30]; // 8020C560
  W32(c->r[28]+0x000000CCu,c->r[4]); // 8020C564
  W32(c->r[28]+0x000000C8u,c->r[0]); // 8020C568
  c->r[0]=R32(c->r[29]+0x00000014u); // 8020C56C
  W32(c->r[28]+0x000000DCu,c->r[0]); // 8020C570
  c->lr=0x8020C578u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020C574
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020C578
  c->lr=c->r[0]; // 8020C57C
  c->r[1]=c->r[1]+0x00000030u; // 8020C580
  return; // 8020C584
}

// fn_8020C588
void f_8020C588(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C588
  c->r[0]=c->lr; // 8020C58C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020C590
  c->r[11]=c->r[1]+0x00000060u; // 8020C594
  c->lr=0x8020C59Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020C598
  c->r[31]=c->r[1]|c->r[1]; // 8020C59C
  W32(c->r[31]+0x00000018u,c->r[3]); // 8020C5A0
  c->r[28]=c->r[5]|c->r[5]; // 8020C5A4
  c->r[5]=c->r[3]|c->r[3]; // 8020C5A8
  c->r[6]=c->r[4]|c->r[4]; // 8020C5AC
  W32(c->r[31]+0x00000044u,c->r[1]); // 8020C5B0
  c->r[29]=c->r[31]+0x00000018u; // 8020C5B4
  c->r[3]=c->r[31]+0x00000008u; // 8020C5B8
  c->r[7]=0u+0x00000010u; // 8020C5BC
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 8020C5C0
  c->lr=0x8020C5C8u; f_80215AD8(c); // 8020C5C4
  c->r[3]=c->r[29]+0x00000008u; // 8020C5C8
  c->r[4]=c->r[31]+0x00000008u; // 8020C5CC
  c->lr=0x8020C5D4u; f_80206FA4(c); // 8020C5D0
  c->r[30]=0u+0xFFFFFFFFu; // 8020C5D4
  c->r[3]=c->r[31]+0x00000008u; // 8020C5D8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8020C5DC
  c->lr=0x8020C5E4u; f_802030B0(c); // 8020C5E0
  c->r[3]=0u+0x80380000u; // 8020C5E4
  W32(c->r[29]+0x00000014u,c->r[28]); // 8020C5E8
  c->r[3]=R32(c->r[3]+0x000025E8u); // 8020C5EC
  cmps(c,0,(int32_t)c->r[3],0); // 8020C5F0
  if (!crb(c,2)) { goto L_8020C60C; } // 8020C5F4
  c->r[3]=c->r[31]+0x00000020u; // 8020C5F8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8020C5FC
  c->lr=0x8020C604u; f_802030B0(c); // 8020C600
  c->r[3]=0u+0xFFFFF037u; // 8020C604
  goto L_8020C714; // 8020C608
L_8020C60C:;
  c->r[0]=R8(c->r[3]+0x0000016Cu); // 8020C60C
  cmps(c,0,(int32_t)c->r[0],0); // 8020C610
  if (!crb(c,2)) { goto L_8020C62C; } // 8020C614
  c->r[3]=c->r[31]+0x00000020u; // 8020C618
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8020C61C
  c->lr=0x8020C624u; f_802030B0(c); // 8020C620
  c->r[3]=0u+0xFFFFF01Bu; // 8020C624
  goto L_8020C714; // 8020C628
L_8020C62C:;
  c->r[3]=c->r[3]+0x000000B8u; // 8020C62C
  c->lr=0x8020C634u; f_802020A8(c); // 8020C630
  c->r[0]=cntlz(c->r[3]); // 8020C634
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020C638
  if (crb(c,2)) { goto L_8020C654; } // 8020C63C
  c->r[3]=c->r[31]+0x00000020u; // 8020C640
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8020C644
  c->lr=0x8020C64Cu; f_802030B0(c); // 8020C648
  c->r[3]=0u+0xFFFFF036u; // 8020C64C
  goto L_8020C714; // 8020C650
L_8020C654:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020C654
  if (crb(c,2)) { goto L_8020C688; } // 8020C658
  cmps(c,0,(int32_t)c->r[28],1); // 8020C65C
  if (crb(c,2)) { goto L_8020C688; } // 8020C660
  cmps(c,0,(int32_t)c->r[28],2); // 8020C664
  if (crb(c,2)) { goto L_8020C688; } // 8020C668
  cmps(c,0,(int32_t)c->r[28],3); // 8020C66C
  if (crb(c,2)) { goto L_8020C688; } // 8020C670
  c->r[3]=c->r[31]+0x00000020u; // 8020C674
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8020C678
  c->lr=0x8020C680u; f_802030B0(c); // 8020C67C
  c->r[3]=0u+0xFFFFF05Cu; // 8020C680
  goto L_8020C714; // 8020C684
L_8020C688:;
  c->r[3]=0u+0x80380000u; // 8020C688
  c->r[4]=0u+0x80380000u; // 8020C68C
  c->r[3]=R32(c->r[3]+0x000025E8u); // 8020C690
  c->r[5]=c->r[31]+0x00000018u; // 8020C694
  c->r[4]=R32(c->r[4]+0x000029A8u); // 8020C698
  c->lr=0x8020C6A0u; f_80204014(c); // 8020C69C
  c->r[0]=0u+0xFFFFFFFFu; // 8020C6A0
  c->r[30]=c->r[3]|c->r[3]; // 8020C6A4
  c->r[3]=c->r[31]+0x00000020u; // 8020C6A8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020C6AC
  c->lr=0x8020C6B4u; f_802030B0(c); // 8020C6B0
  c->r[3]=c->r[30]|c->r[30]; // 8020C6B4
  goto L_8020C714; // 8020C6B8
  c->r[4]=0u+0x802A0000u; // 8020C6BC
  c->r[3]=0u+0x00000001u; // 8020C6C0
  c->r[4]=c->r[4]+0x0000493Au; // 8020C6C4
  c->r[5]=0u+0x00000257u; // 8020C6C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C6CC
  c->lr=0x8020C6D4u; f_8020B328(c); // 8020C6D0
  c->r[29]=0u+0xFFFFF05Bu; // 8020C6D4
  goto L_8020C6F8; // 8020C6D8
  c->r[4]=0u+0x802A0000u; // 8020C6DC
  c->r[3]=0u+0x00000001u; // 8020C6E0
  c->r[4]=c->r[4]+0x0000499Cu; // 8020C6E4
  c->r[5]=0u+0x00000257u; // 8020C6E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C6EC
  c->lr=0x8020C6F4u; f_8020B328(c); // 8020C6F0
  c->r[29]=0u+0xFFFFF05Fu; // 8020C6F4
L_8020C6F8:;
  c->r[3]=c->r[31]+0x00000030u; // 8020C6F8
  c->lr=0x8020C700u; f_8010BF74(c); // 8020C6FC
  c->r[0]=c->r[0]|0x00000000u; // 8020C700
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020C704
  c->r[1]=R32(c->r[31]+0x00000044u); // 8020C708
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020C70C
  c->r[3]=c->r[29]|c->r[29]; // 8020C710
L_8020C714:;
  c->r[10]=c->r[31]|c->r[31]; // 8020C714
  c->r[11]=c->r[10]+0x00000060u; // 8020C718
  c->lr=0x8020C720u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020C71C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020C720
  c->r[0]=R32(c->r[10]+0x00000004u); // 8020C724
  c->r[1]=c->r[10]|c->r[10]; // 8020C728
  c->lr=c->r[0]; // 8020C72C
  return; // 8020C730
}

// dtor_8020C734
void f_8020C734(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C734
  c->r[0]=c->lr; // 8020C738
  cmps(c,0,(int32_t)c->r[3],0); // 8020C73C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020C740
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020C744
  c->r[31]=c->r[4]|c->r[4]; // 8020C748
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020C74C
  c->r[30]=c->r[3]|c->r[3]; // 8020C750
  if (crb(c,2)) { goto L_8020C774; } // 8020C754
  c->r[4]=0u+0xFFFFFFFFu; // 8020C758
  c->r[3]=c->r[3]+0x00000008u; // 8020C75C
  c->lr=0x8020C764u; f_802030B0(c); // 8020C760
  cmps(c,0,(int32_t)c->r[31],0); // 8020C764
  if (!crb(c,1)) { goto L_8020C774; } // 8020C768
  c->r[3]=c->r[30]|c->r[30]; // 8020C76C
  c->lr=0x8020C774u; f_8009230C(c); // 8020C770
L_8020C774:;
  c->r[3]=c->r[30]|c->r[30]; // 8020C774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020C778
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020C77C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020C780
  c->lr=c->r[0]; // 8020C784
  c->r[1]=c->r[1]+0x00000010u; // 8020C788
  return; // 8020C78C
}

// fn_8020C790
void f_8020C790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C790
  c->r[0]=c->lr; // 8020C794
  cmps(c,0,(int32_t)c->r[3],0); // 8020C798
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020C79C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020C7A0
  c->r[31]=c->r[4]|c->r[4]; // 8020C7A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020C7A8
  c->r[30]=c->r[3]|c->r[3]; // 8020C7AC
  if (crb(c,2)) { goto L_8020C7E4; } // 8020C7B0
  c->r[4]=0u+0xFFFFFFFFu; // 8020C7B4
  c->r[3]=c->r[3]+0x000000D0u; // 8020C7B8
  c->lr=0x8020C7C0u; f_802030B0(c); // 8020C7BC
  cmps(c,0,(int32_t)c->r[30],0); // 8020C7C0
  if (crb(c,2)) { goto L_8020C7D4; } // 8020C7C4
  c->r[3]=c->r[30]+0x00000008u; // 8020C7C8
  c->r[4]=0u+0xFFFFFFFFu; // 8020C7CC
  c->lr=0x8020C7D4u; f_802030B0(c); // 8020C7D0
L_8020C7D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020C7D4
  if (!crb(c,1)) { goto L_8020C7E4; } // 8020C7D8
  c->r[3]=c->r[30]|c->r[30]; // 8020C7DC
  c->lr=0x8020C7E4u; f_8020ECE0(c); // 8020C7E0
L_8020C7E4:;
  c->r[3]=c->r[30]|c->r[30]; // 8020C7E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020C7E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020C7EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020C7F0
  c->lr=c->r[0]; // 8020C7F4
  c->r[1]=c->r[1]+0x00000010u; // 8020C7F8
  return; // 8020C7FC
}

// fn_8020C800
void f_8020C800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020C800
  c->r[0]=c->lr; // 8020C804
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020C808
  c->r[11]=c->r[1]+0x00000030u; // 8020C80C
  c->lr=0x8020C814u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020C810
  c->r[31]=c->r[1]|c->r[1]; // 8020C814
  c->r[12]=R32(c->r[3]+0x000000C0u); // 8020C818
  c->r[28]=c->r[3]|c->r[3]; // 8020C81C
  c->r[29]=0u+0x00000000u; // 8020C820
  c->r[12]=R32(c->r[12]+0x00000018u); // 8020C824
  c->ctr=c->r[12]; // 8020C828
  if (true) { c->lr=0x8020C830u; dispatch(c,c->ctr); } // 8020C82C
  cmps(c,0,(int32_t)c->r[3],0); // 8020C830
  if (crb(c,2)) { goto L_8020C83C; } // 8020C834
  goto L_8020CA98; // 8020C838
L_8020C83C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C83C
  c->lr=0x8020C844u; f_80206580(c); // 8020C840
  cmps(c,0,(int32_t)c->r[3],0); // 8020C844
  if (!crb(c,2)) { goto L_8020CA98; } // 8020C848
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C84C
  c->r[4]=0u+0x00000002u; // 8020C850
  c->r[5]=0u+0x00000001u; // 8020C854
  c->lr=0x8020C85Cu; f_80206600(c); // 8020C858
  cmps(c,0,(int32_t)c->r[3],0); // 8020C85C
  if (crb(c,2)) { goto L_8020C868; } // 8020C860
  goto L_8020CA98; // 8020C864
L_8020C868:;
  c->r[3]=c->r[28]+0x000000E8u; // 8020C868
  c->lr=0x8020C870u; f_80204658(c); // 8020C86C
  c->r[3]=c->r[28]+0x000000F4u; // 8020C870
  c->lr=0x8020C878u; f_80204658(c); // 8020C874
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C878
  c->r[0]=R8(c->r[3]+0x00000168u); // 8020C87C
  W8(c->r[28]+0x000000E4u,c->r[0]); // 8020C880
  c->r[0]=R8(c->r[3]+0x00000168u); // 8020C884
  cmps(c,0,(int32_t)c->r[0],0); // 8020C888
  if (!crb(c,2)) { goto L_8020C8A0; } // 8020C88C
  c->r[0]=0u+0x00000001u; // 8020C890
  W8(c->r[3]+0x00000168u,c->r[0]); // 8020C894
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C898
  c->lr=0x8020C8A0u; f_80204914(c); // 8020C89C
L_8020C8A0:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 8020C8A0
  c->r[0]=R8(c->r[4]+0x00000232u); // 8020C8A4
  cmps(c,0,(int32_t)c->r[0],0); // 8020C8A8
  if (crb(c,2)) { goto L_8020C8D8; } // 8020C8AC
  c->r[3]=R32(c->r[4]+0x00000188u); // 8020C8B0
  c->r[4]=R32(c->r[4]+0x0000018Cu); // 8020C8B4
  c->lr=0x8020C8BCu; f_8021E664(c); // 8020C8B8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8020C8BC
  W8(c->r[28]+0x000000E5u,c->r[3]); // 8020C8C0
  if (!crb(c,2)) { goto L_8020C8D8; } // 8020C8C4
  c->r[4]=R32(c->r[28]+0x00000000u); // 8020C8C8
  c->r[3]=R32(c->r[4]+0x00000188u); // 8020C8CC
  c->r[4]=R32(c->r[4]+0x0000018Cu); // 8020C8D0
  c->lr=0x8020C8D8u; f_8021E5EC(c); // 8020C8D4
L_8020C8D8:;
  c->r[12]=R32(c->r[28]+0x000000C0u); // 8020C8D8
  c->r[3]=c->r[28]|c->r[28]; // 8020C8DC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020C8E0
  c->ctr=c->r[12]; // 8020C8E4
  if (true) { c->lr=0x8020C8ECu; dispatch(c,c->ctr); } // 8020C8E8
  cmps(c,0,(int32_t)c->r[3],0); // 8020C8EC
  c->r[30]=c->r[3]|c->r[3]; // 8020C8F0
  if (!crb(c,2)) { goto L_8020CA34; } // 8020C8F4
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C8F8
  c->lr=0x8020C900u; f_80203E30(c); // 8020C8FC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8020C900
  c->r[4]=0u+0x00000000u; // 8020C904
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C908
  c->lr=0x8020C910u; f_802056B0(c); // 8020C90C
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C910
  c->r[4]=c->r[28]+0x00000104u; // 8020C914
  c->r[5]=c->r[28]+0x00000110u; // 8020C918
  c->r[6]=R32(c->r[3]+0x00000228u); // 8020C91C
  c->r[7]=R32(c->r[3]+0x0000022Cu); // 8020C920
  c->lr=0x8020C928u; f_80218624(c); // 8020C924
  c->r[30]=c->r[3]|c->r[3]; // 8020C928
  goto L_8020C984; // 8020C92C
  c->r[4]=0u+0x802A0000u; // 8020C930
  c->r[3]=0u+0x00000001u; // 8020C934
  c->r[4]=c->r[4]+0x00004EBDu; // 8020C938
  c->r[5]=0u+0x0000007Cu; // 8020C93C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C940
  c->lr=0x8020C948u; f_8020B328(c); // 8020C944
  c->r[30]=0u+0xFFFFF05Bu; // 8020C948
  goto L_8020C96C; // 8020C94C
  c->r[4]=0u+0x802A0000u; // 8020C950
  c->r[3]=0u+0x00000001u; // 8020C954
  c->r[4]=c->r[4]+0x00004F24u; // 8020C958
  c->r[5]=0u+0x0000007Cu; // 8020C95C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020C960
  c->lr=0x8020C968u; f_8020B328(c); // 8020C964
  c->r[30]=0u+0xFFFFF05Fu; // 8020C968
L_8020C96C:;
  c->r[3]=c->r[31]+0x00000008u; // 8020C96C
  c->lr=0x8020C974u; f_8010BF74(c); // 8020C970
  c->r[0]=c->r[0]|0x00000000u; // 8020C974
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020C978
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 8020C97C
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020C980
L_8020C984:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C984
  c->lr=0x8020C98Cu; f_80203E04(c); // 8020C988
  cmps(c,0,(int32_t)c->r[30],0); // 8020C98C
  if (crb(c,0)) { goto L_8020CA34; } // 8020C990
  c->r[4]=R32(c->r[28]+0x00000000u); // 8020C994
  c->r[0]=R8(c->r[4]+0x00000232u); // 8020C998
  cmps(c,0,(int32_t)c->r[0],0); // 8020C99C
  if (crb(c,2)) { goto L_8020C9BC; } // 8020C9A0
  c->r[0]=R8(c->r[28]+0x000000E5u); // 8020C9A4
  cmps(c,0,(int32_t)c->r[0],0); // 8020C9A8
  if (!crb(c,2)) { goto L_8020C9BC; } // 8020C9AC
  c->r[3]=R32(c->r[4]+0x00000188u); // 8020C9B0
  c->r[4]=R32(c->r[4]+0x0000018Cu); // 8020C9B4
  c->lr=0x8020C9BCu; f_8021E658(c); // 8020C9B8
L_8020C9BC:;
  c->r[0]=R8(c->r[28]+0x000000E4u); // 8020C9BC
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C9C0
  W8(c->r[3]+0x00000168u,c->r[0]); // 8020C9C4
  c->r[4]=R32(c->r[28]+0x00000000u); // 8020C9C8
  c->r[0]=R8(c->r[4]+0x00000168u); // 8020C9CC
  cmps(c,0,(int32_t)c->r[0],0); // 8020C9D0
  if (!crb(c,2)) { goto L_8020CA00; } // 8020C9D4
  c->r[0]=R8(c->r[4]+0x0000016Bu); // 8020C9D8
  cmps(c,0,(int32_t)c->r[0],0); // 8020C9DC
  if (crb(c,2)) { goto L_8020C9F4; } // 8020C9E0
  c->r[0]=R32(c->r[28]+0x00000120u); // 8020C9E4
  c->r[3]=R32(c->r[28]+0x00000124u); // 8020C9E8
  W32(c->r[4]+0x0000015Cu,c->r[3]); // 8020C9EC
  W32(c->r[4]+0x00000158u,c->r[0]); // 8020C9F0
L_8020C9F4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020C9F4
  c->lr=0x8020C9FCu; f_80204914(c); // 8020C9F8
  c->r[29]=0u+0x00000001u; // 8020C9FC
L_8020CA00:;
  c->r[0]=R32(c->r[28]+0x000000E0u); // 8020CA00
  cmps(c,0,(int32_t)c->r[0],0); // 8020CA04
  if (crb(c,2)) { goto L_8020CA34; } // 8020CA08
  c->r[3]=c->r[28]+0x000000E8u; // 8020CA0C
  c->lr=0x8020CA14u; f_802020A8(c); // 8020CA10
  c->r[0]=cntlz(c->r[3]); // 8020CA14
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020CA18
  if (crb(c,2)) { goto L_8020CA34; } // 8020CA1C
  c->r[3]=c->r[28]|c->r[28]; // 8020CA20
  c->r[4]=0u+0x00000000u; // 8020CA24
  c->r[5]=0u+0x00000000u; // 8020CA28
  c->lr=0x8020CA30u; f_8020BAD8(c); // 8020CA2C
  c->r[30]=c->r[3]|c->r[3]; // 8020CA30
L_8020CA34:;
  cmps(c,0,(int32_t)c->r[29],0); // 8020CA34
  if (!crb(c,2)) { goto L_8020CA50; } // 8020CA38
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020CA3C
  c->r[0]=R8(c->r[3]+0x00000168u); // 8020CA40
  cmps(c,0,(int32_t)c->r[0],0); // 8020CA44
  if (!crb(c,2)) { goto L_8020CA50; } // 8020CA48
  c->lr=0x8020CA50u; f_80204914(c); // 8020CA4C
L_8020CA50:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020CA50
  if (!crb(c,2)) { goto L_8020CA94; } // 8020CA54
  c->r[3]=c->r[28]+0x000000E8u; // 8020CA58
  c->lr=0x8020CA60u; f_802020A8(c); // 8020CA5C
  cmps(c,0,(int32_t)c->r[3],0); // 8020CA60
  if (crb(c,2)) { goto L_8020CA94; } // 8020CA64
  c->r[3]=c->r[28]+0x000000F4u; // 8020CA68
  c->r[30]=0u+0xFFFFF011u; // 8020CA6C
  c->lr=0x8020CA74u; f_80203778(c); // 8020CA70
  c->r[29]=c->r[3]|c->r[3]; // 8020CA74
  c->r[3]=c->r[28]+0x000000E8u; // 8020CA78
  c->lr=0x8020CA80u; f_80203778(c); // 8020CA7C
  c->r[6]=R32(c->r[28]+0x00000000u); // 8020CA80
  c->r[4]=c->r[3]|c->r[3]; // 8020CA84
  c->r[5]=c->r[29]|c->r[29]; // 8020CA88
  c->r[3]=R32(c->r[6]+0x00000004u); // 8020CA8C
  c->lr=0x8020CA94u; f_80206A64(c); // 8020CA90
L_8020CA94:;
  c->r[3]=c->r[30]|c->r[30]; // 8020CA94
L_8020CA98:;
  c->r[10]=c->r[31]|c->r[31]; // 8020CA98
  c->r[11]=c->r[10]+0x00000030u; // 8020CA9C
  c->lr=0x8020CAA4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020CAA0
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020CAA4
  c->r[0]=R32(c->r[10]+0x00000004u); // 8020CAA8
  c->r[1]=c->r[10]|c->r[10]; // 8020CAAC
  c->lr=c->r[0]; // 8020CAB0
  return; // 8020CAB4
}

// fn_8020CAB8
void f_8020CAB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020CAB8
  c->r[0]=c->lr; // 8020CABC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020CAC0
  c->r[11]=c->r[1]+0x00000060u; // 8020CAC4
  c->lr=0x8020CACCu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020CAC8
  W32(c->r[3]+0x00000004u,c->r[6]); // 8020CACC
  c->r[23]=c->r[7]|c->r[7]; // 8020CAD0
  c->r[27]=R32(c->r[1]+0x00000068u); // 8020CAD4
  c->r[22]=c->r[3]|c->r[3]; // 8020CAD8
  W32(c->r[3]+0x00000000u,c->r[5]); // 8020CADC
  c->r[24]=c->r[8]|c->r[8]; // 8020CAE0
  c->r[28]=R32(c->r[1]+0x0000006Cu); // 8020CAE4
  c->r[25]=c->r[9]|c->r[9]; // 8020CAE8
  c->r[29]=R32(c->r[1]+0x00000070u); // 8020CAEC
  c->r[26]=c->r[10]|c->r[10]; // 8020CAF0
  c->r[30]=R32(c->r[1]+0x00000074u); // 8020CAF4
  c->r[3]=c->r[1]+0x0000000Cu; // 8020CAF8
  c->r[31]=R32(c->r[1]+0x00000078u); // 8020CAFC
  c->r[7]=0u+0x00000010u; // 8020CB00
  c->lr=0x8020CB08u; f_80215AD8(c); // 8020CB04
  c->r[21]=c->r[22]+0x00000008u; // 8020CB08
  c->r[4]=c->r[1]+0x0000000Cu; // 8020CB0C
  c->r[3]=c->r[21]|c->r[21]; // 8020CB10
  c->lr=0x8020CB18u; f_8020731C(c); // 8020CB14
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8020CB18
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 8020CB1C
  if (!crb(c,2)) { goto L_8020CB3C; } // 8020CB20
  c->r[0]=R32(c->r[1]+0x00000010u); // 8020CB24
  W32(c->r[21]+0x00000000u,c->r[3]); // 8020CB28
  W32(c->r[21]+0x00000004u,c->r[0]); // 8020CB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020CB30
  W32(c->r[21]+0x00000008u,c->r[0]); // 8020CB34
  goto L_8020CB78; // 8020CB38
L_8020CB3C:;
  c->r[3]=c->r[21]|c->r[21]; // 8020CB3C
  c->lr=0x8020CB44u; f_802039CC(c); // 8020CB40
  c->r[4]=R32(c->r[1]+0x00000010u); // 8020CB44
  c->r[3]=c->r[21]|c->r[21]; // 8020CB48
  c->lr=0x8020CB50u; f_80207040(c); // 8020CB4C
  c->r[5]=R8(c->r[1]+0x00000009u); // 8020CB50
  c->r[3]=c->r[21]|c->r[21]; // 8020CB54
  c->r[6]=R32(c->r[1]+0x00000014u); // 8020CB58
  c->r[8]=c->r[1]+0x00000008u; // 8020CB5C
  c->r[0]=R32(c->r[1]+0x00000010u); // 8020CB60
  c->r[4]=0u+0x00000000u; // 8020CB64
  W8(c->r[1]+0x00000008u,c->r[5]); // 8020CB68
  c->r[5]=0u+0x00000000u; // 8020CB6C
  c->r[7]=c->r[6]+c->r[0]; // 8020CB70
  c->lr=0x8020CB78u; f_80203148(c); // 8020CB74
L_8020CB78:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8020CB78
  c->r[4]=0u+0xFFFFFFFFu; // 8020CB7C
  c->lr=0x8020CB84u; f_802030B0(c); // 8020CB80
  c->r[3]=0u+0x00000000u; // 8020CB84
  c->r[0]=0u+0x00000020u; // 8020CB88
  W32(c->r[22]+0x00000014u,c->r[3]); // 8020CB8C
  c->r[5]=c->r[22]+0x0000001Fu; // 8020CB90
  c->r[4]=c->r[24]+0xFFFFFFFFu; // 8020CB94
  W32(c->r[22]+0x00000018u,c->r[28]); // 8020CB98
  W32(c->r[22]+0x0000001Cu,c->r[23]); // 8020CB9C
  c->ctr=c->r[0]; // 8020CBA0
L_8020CBA4:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 8020CBA4
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 8020CBA8
  W8(c->r[5]+0x00000001u,c->r[3]); // 8020CBAC
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 8020CBB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020CBA4; } // 8020CBB4
  W32(c->r[22]+0x000000A4u,c->r[27]); // 8020CBB8
  c->r[3]=c->r[22]+0x000000F4u; // 8020CBBC
  W32(c->r[22]+0x000000E8u,c->r[29]); // 8020CBC0
  W32(c->r[22]+0x000000ECu,c->r[30]); // 8020CBC4
  W32(c->r[22]+0x000000F0u,c->r[31]); // 8020CBC8
  c->lr=0x8020CBD0u; f_80203990(c); // 8020CBCC
  c->r[3]=c->r[22]+0x00000100u; // 8020CBD0
  c->lr=0x8020CBD8u; f_80203990(c); // 8020CBD4
  c->r[3]=c->r[22]+0x0000010Cu; // 8020CBD8
  c->lr=0x8020CBE0u; f_80203990(c); // 8020CBDC
  c->r[0]=0u+0x00000000u; // 8020CBE0
  c->r[3]=c->r[22]+0x000000A8u; // 8020CBE4
  W32(c->r[22]+0x00000118u,c->r[0]); // 8020CBE8
  c->r[4]=0u+0x00000000u; // 8020CBEC
  c->r[5]=0u+0x00000040u; // 8020CBF0
  c->lr=0x8020CBF8u; f_8000443C(c); // 8020CBF4
  c->r[3]=c->r[22]+0x00000060u; // 8020CBF8
  c->r[4]=0u+0x00000000u; // 8020CBFC
  c->r[5]=0u+0x00000044u; // 8020CC00
  c->lr=0x8020CC08u; f_8000443C(c); // 8020CC04
  cmps(c,0,(int32_t)c->r[27],0); // 8020CC08
  if (crb(c,2)) { goto L_8020CC18; } // 8020CC0C
  c->r[0]=addc(c,c->r[22],0x000000A8u,0); cr0(c,c->r[0]); // 8020CC10
  if (crb(c,2)) { goto L_8020CC20; } // 8020CC14
L_8020CC18:;
  cmpu(c,0,c->r[27],0x00000008u); // 8020CC18
  if (!crb(c,1)) { goto L_8020CC2C; } // 8020CC1C
L_8020CC20:;
  c->r[0]=0u+0xFFFFF05Cu; // 8020CC20
  W32(c->r[22]+0x00000118u,c->r[0]); // 8020CC24
  goto L_8020CC78; // 8020CC28
L_8020CC2C:;
  c->r[21]=0u+0x00000000u; // 8020CC2C
  c->r[23]=0u+0x00000000u; // 8020CC30
  c->r[24]=0u+0x802A0000u; // 8020CC34
  goto L_8020CC70; // 8020CC38
L_8020CC3C:;
  c->r[3]=R32(c->r[26]+c->r[23]); // 8020CC3C
  c->r[0]=R32(c->r[24]+0x00004E84u); // 8020CC40
  cmpu(c,0,c->r[3],c->r[0]); // 8020CC44
  if (crb(c,0)) { goto L_8020CC58; } // 8020CC48
  c->r[0]=0u+0xFFFFF05Cu; // 8020CC4C
  W32(c->r[22]+0x00000118u,c->r[0]); // 8020CC50
  goto L_8020CC78; // 8020CC54
L_8020CC58:;
  c->r[3]=c->r[22]+c->r[23]; // 8020CC58
  c->r[4]=c->r[26]+c->r[23]; // 8020CC5C
  c->r[3]=c->r[3]+0x000000A8u; // 8020CC60
  c->lr=0x8020CC68u; f_8020CD70(c); // 8020CC64
  c->r[21]=c->r[21]+0x00000001u; // 8020CC68
  c->r[23]=c->r[23]+0x00000008u; // 8020CC6C
L_8020CC70:;
  cmpu(c,0,c->r[21],c->r[27]); // 8020CC70
  if (crb(c,0)) { IRQCHK(c); goto L_8020CC3C; } // 8020CC74
L_8020CC78:;
  cmps(c,0,(int32_t)c->r[25],0); // 8020CC78
  if (crb(c,2)) { goto L_8020CCEC; } // 8020CC7C
  c->r[3]=0u+0x802A0000u; // 8020CC80
  c->r[4]=R32(c->r[25]+0x00000000u); // 8020CC84
  c->r[0]=R32(c->r[3]+0x00004EA8u); // 8020CC88
  cmpu(c,0,c->r[4],c->r[0]); // 8020CC8C
  if (crb(c,0)) { goto L_8020CCA0; } // 8020CC90
  c->r[0]=0u+0xFFFFF05Cu; // 8020CC94
  W32(c->r[22]+0x00000118u,c->r[0]); // 8020CC98
  goto L_8020CCF4; // 8020CC9C
L_8020CCA0:;
  c->r[4]=c->r[25]|c->r[25]; // 8020CCA0
  c->r[3]=c->r[22]+0x00000060u; // 8020CCA4
  c->lr=0x8020CCACu; f_8020CD84(c); // 8020CCA8
  c->r[0]=R32(c->r[22]+0x00000060u); // 8020CCAC
  cmps(c,0,(int32_t)c->r[0],0); // 8020CCB0
  if (!crb(c,2)) { goto L_8020CCF4; } // 8020CCB4
  c->r[3]=c->r[1]+0x00000018u; // 8020CCB8
  c->r[4]=c->r[22]+0x00000064u; // 8020CCBC
  c->lr=0x8020CCC4u; f_8020E580(c); // 8020CCC0
  c->r[3]=c->r[1]+0x00000018u; // 8020CCC4
  c->r[4]=c->r[22]+0x000000F4u; // 8020CCC8
  c->r[5]=c->r[22]+0x00000100u; // 8020CCCC
  c->r[6]=c->r[22]+0x0000010Cu; // 8020CCD0
  c->lr=0x8020CCD8u; f_8020AE1C(c); // 8020CCD4
  W32(c->r[22]+0x00000118u,c->r[3]); // 8020CCD8
  c->r[3]=c->r[1]+0x00000018u; // 8020CCDC
  c->r[4]=0u+0xFFFFFFFFu; // 8020CCE0
  c->lr=0x8020CCE8u; f_802030B0(c); // 8020CCE4
  goto L_8020CCF4; // 8020CCE8
L_8020CCEC:;
  c->r[0]=0u+0x00000001u; // 8020CCEC
  W32(c->r[22]+0x00000060u,c->r[0]); // 8020CCF0
L_8020CCF4:;
  c->r[11]=c->r[1]+0x00000060u; // 8020CCF4
  c->r[3]=c->r[22]|c->r[22]; // 8020CCF8
  c->lr=0x8020CD00u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020CCFC
  c->r[0]=R32(c->r[1]+0x00000064u); // 8020CD00
  c->lr=c->r[0]; // 8020CD04
  c->r[1]=c->r[1]+0x00000060u; // 8020CD08
  return; // 8020CD0C
}

// dtor_8020CD10
void f_8020CD10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020CD10
  c->r[0]=c->lr; // 8020CD14
  cmps(c,0,(int32_t)c->r[3],0); // 8020CD18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020CD1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020CD20
  c->r[31]=c->r[4]|c->r[4]; // 8020CD24
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020CD28
  c->r[30]=c->r[3]|c->r[3]; // 8020CD2C
  if (crb(c,2)) { goto L_8020CD54; } // 8020CD30
  if (crb(c,2)) { goto L_8020CD44; } // 8020CD34
  c->r[4]=0u+0xFFFFFFFFu; // 8020CD38
  c->r[3]=c->r[3]+0x00000008u; // 8020CD3C
  c->lr=0x8020CD44u; f_802030B0(c); // 8020CD40
L_8020CD44:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020CD44
  if (!crb(c,1)) { goto L_8020CD54; } // 8020CD48
  c->r[3]=c->r[30]|c->r[30]; // 8020CD4C
  c->lr=0x8020CD54u; f_8009230C(c); // 8020CD50
L_8020CD54:;
  c->r[3]=c->r[30]|c->r[30]; // 8020CD54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020CD58
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020CD5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020CD60
  c->lr=c->r[0]; // 8020CD64
  c->r[1]=c->r[1]+0x00000010u; // 8020CD68
  return; // 8020CD6C
}

// fn_8020CD70
void f_8020CD70(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000000u); // 8020CD70
  c->r[0]=R32(c->r[4]+0x00000004u); // 8020CD74
  W32(c->r[3]+0x00000000u,c->r[5]); // 8020CD78
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020CD7C
  return; // 8020CD80
}

// fn_8020CD84
void f_8020CD84(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000000u); // 8020CD84
  c->r[0]=0u+0x00000020u; // 8020CD88
  c->r[6]=c->r[3]+0x00000003u; // 8020CD8C
  W32(c->r[3]+0x00000000u,c->r[5]); // 8020CD90
  c->r[5]=c->r[4]+0x00000003u; // 8020CD94
  c->ctr=c->r[0]; // 8020CD98
L_8020CD9C:;
  c->r[4]=R8(c->r[5]+0x00000001u); // 8020CD9C
  {uint32_t ea=c->r[5]+0x00000002u; c->r[0]=R8(ea); c->r[5]=ea;} // 8020CDA0
  W8(c->r[6]+0x00000001u,c->r[4]); // 8020CDA4
  {uint32_t ea=c->r[6]+0x00000002u; W8(ea,c->r[0]); c->r[6]=ea;} // 8020CDA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020CD9C; } // 8020CDAC
  return; // 8020CDB0
}

// fn_8020CDB4
void f_8020CDB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020CDB4
  c->r[0]=c->lr; // 8020CDB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020CDBC
  c->r[11]=c->r[1]+0x00000020u; // 8020CDC0
  c->lr=0x8020CDC8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020CDC4
  c->r[29]=c->r[3]|c->r[3]; // 8020CDC8
  c->r[30]=c->r[5]|c->r[5]; // 8020CDCC
  c->lr=0x8020CDD4u; f_8020C4B0(c); // 8020CDD0
  c->r[4]=R32(c->r[30]+0x00000018u); // 8020CDD4
  c->r[31]=c->r[3]|c->r[3]; // 8020CDD8
  c->r[0]=0u+0x00000010u; // 8020CDDC
  c->r[5]=c->r[29]+0x0000012Bu; // 8020CDE0
  W32(c->r[29]+0x000000E0u,c->r[4]); // 8020CDE4
  c->r[4]=c->r[30]+0x0000001Fu; // 8020CDE8
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8020CDEC
  W32(c->r[29]+0x00000128u,c->r[3]); // 8020CDF0
  c->ctr=c->r[0]; // 8020CDF4
L_8020CDF8:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 8020CDF8
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 8020CDFC
  W8(c->r[5]+0x00000001u,c->r[3]); // 8020CE00
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 8020CE04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020CDF8; } // 8020CE08
  c->r[0]=0u+0x00000010u; // 8020CE0C
  c->r[5]=c->r[29]+0x0000014Bu; // 8020CE10
  c->r[4]=c->r[30]+0x0000003Fu; // 8020CE14
  c->ctr=c->r[0]; // 8020CE18
L_8020CE1C:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 8020CE1C
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 8020CE20
  W8(c->r[5]+0x00000001u,c->r[3]); // 8020CE24
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 8020CE28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020CE1C; } // 8020CE2C
  c->r[3]=c->r[29]+0x0000016Cu; // 8020CE30
  c->r[4]=c->r[30]+0x00000060u; // 8020CE34
  c->lr=0x8020CE3Cu; f_8020CD84(c); // 8020CE38
  c->r[0]=R32(c->r[30]+0x000000A4u); // 8020CE3C
  c->r[27]=0u+0x00000000u; // 8020CE40
  c->r[28]=0u+0x00000000u; // 8020CE44
  W32(c->r[29]+0x000001F8u,c->r[0]); // 8020CE48
  goto L_8020CE6C; // 8020CE4C
L_8020CE50:;
  c->r[3]=c->r[29]+c->r[28]; // 8020CE50
  c->r[4]=c->r[30]+c->r[28]; // 8020CE54
  c->r[3]=c->r[3]+0x00000208u; // 8020CE58
  c->r[4]=c->r[4]+0x000000A8u; // 8020CE5C
  c->lr=0x8020CE64u; f_8020CD70(c); // 8020CE60
  c->r[27]=c->r[27]+0x00000001u; // 8020CE64
  c->r[28]=c->r[28]+0x00000008u; // 8020CE68
L_8020CE6C:;
  c->r[0]=R32(c->r[29]+0x000001F8u); // 8020CE6C
  cmpu(c,0,c->r[27],c->r[0]); // 8020CE70
  if (crb(c,0)) { IRQCHK(c); goto L_8020CE50; } // 8020CE74
  c->r[3]=c->r[29]+0x00000104u; // 8020CE78
  c->lr=0x8020CE80u; f_8020CF80(c); // 8020CE7C
  c->r[3]=c->r[29]+0x00000110u; // 8020CE80
  c->lr=0x8020CE88u; f_80204658(c); // 8020CE84
  c->r[0]=0u+0x00000000u; // 8020CE88
  c->r[3]=c->r[29]+0x000001D4u; // 8020CE8C
  W32(c->r[29]+0x0000011Cu,c->r[0]); // 8020CE90
  c->r[4]=c->r[30]+0x000000F4u; // 8020CE94
  W32(c->r[29]+0x00000124u,c->r[0]); // 8020CE98
  W32(c->r[29]+0x00000120u,c->r[0]); // 8020CE9C
  c->lr=0x8020CEA4u; f_802042D0(c); // 8020CEA0
  c->r[3]=c->r[29]+0x000001E0u; // 8020CEA4
  c->r[4]=c->r[30]+0x00000100u; // 8020CEA8
  c->lr=0x8020CEB0u; f_802042D0(c); // 8020CEAC
  c->r[3]=c->r[29]+0x000001ECu; // 8020CEB0
  c->r[4]=c->r[30]+0x0000010Cu; // 8020CEB4
  c->lr=0x8020CEBCu; f_802042D0(c); // 8020CEB8
  c->r[3]=c->r[29]+0x000001B0u; // 8020CEBC
  c->lr=0x8020CEC4u; f_80204658(c); // 8020CEC0
  c->r[3]=c->r[29]+0x000001BCu; // 8020CEC4
  c->lr=0x8020CECCu; f_80204658(c); // 8020CEC8
  c->r[3]=c->r[29]+0x000001C8u; // 8020CECC
  c->lr=0x8020CED4u; f_80204658(c); // 8020CED0
  c->r[4]=R32(c->r[30]+0x000000E8u); // 8020CED4
  cmps(c,0,(int32_t)c->r[4],0); // 8020CED8
  if (crb(c,2)) { goto L_8020CEE8; } // 8020CEDC
  c->r[3]=c->r[29]+0x000001B0u; // 8020CEE0
  c->lr=0x8020CEE8u; f_80201DF4(c); // 8020CEE4
L_8020CEE8:;
  c->r[4]=R32(c->r[30]+0x000000ECu); // 8020CEE8
  cmps(c,0,(int32_t)c->r[4],0); // 8020CEEC
  if (crb(c,2)) { goto L_8020CEFC; } // 8020CEF0
  c->r[3]=c->r[29]+0x000001BCu; // 8020CEF4
  c->lr=0x8020CEFCu; f_80201DF4(c); // 8020CEF8
L_8020CEFC:;
  c->r[4]=R32(c->r[30]+0x000000F0u); // 8020CEFC
  cmps(c,0,(int32_t)c->r[4],0); // 8020CF00
  if (crb(c,2)) { goto L_8020CF10; } // 8020CF04
  c->r[3]=c->r[29]+0x000001C8u; // 8020CF08
  c->lr=0x8020CF10u; f_80201DF4(c); // 8020CF0C
L_8020CF10:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020CF10
  c->r[3]=c->r[3]+0x00000074u; // 8020CF14
  c->lr=0x8020CF1Cu; f_80204658(c); // 8020CF18
  c->r[5]=R32(c->r[29]+0x00000000u); // 8020CF1C
  c->r[30]=R32(c->r[5]+0x00000084u); // 8020CF20
  c->r[4]=R32(c->r[5]+0x00000080u); // 8020CF24
  c->r[0]=c->r[30]-c->r[30]; // 8020CF28
  c->r[3]=rotl(c->r[30],5)&0xFFFFFFE0u; // 8020CF2C
  W32(c->r[5]+0x00000084u,c->r[0]); // 8020CF30
  c->r[28]=c->r[4]+c->r[3]; // 8020CF34
  goto L_8020CF54; // 8020CF38
L_8020CF3C:;
  c->r[28]=addc(c,c->r[28],0xFFFFFFE0u,0); cr0(c,c->r[28]); // 8020CF3C
  if (crb(c,2)) { goto L_8020CF50; } // 8020CF40
  c->r[3]=c->r[28]+0x00000010u; // 8020CF44
  c->r[4]=0u+0xFFFFFFFFu; // 8020CF48
  c->lr=0x8020CF50u; f_802030B0(c); // 8020CF4C
L_8020CF50:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8020CF50
L_8020CF54:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020CF54
  if (!crb(c,2)) { IRQCHK(c); goto L_8020CF3C; } // 8020CF58
  c->r[0]=0u+0x00000000u; // 8020CF5C
  c->r[11]=c->r[1]+0x00000020u; // 8020CF60
  W8(c->r[29]+0x000000E6u,c->r[0]); // 8020CF64
  c->r[3]=c->r[31]|c->r[31]; // 8020CF68
  c->lr=0x8020CF70u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020CF6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020CF70
  c->lr=c->r[0]; // 8020CF74
  c->r[1]=c->r[1]+0x00000020u; // 8020CF78
  return; // 8020CF7C
}

// fn_8020CF80
void f_8020CF80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020CF80
  c->r[0]=c->lr; // 8020CF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020CF88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020CF8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020CF90
  c->r[30]=R32(c->r[3]+0x00000004u); // 8020CF94
  c->r[5]=R32(c->r[3]+0x00000000u); // 8020CF98
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 8020CF9C
  c->r[0]=c->r[30]-c->r[30]; // 8020CFA0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020CFA4
  c->r[31]=c->r[5]+c->r[4]; // 8020CFA8
  goto L_8020CFC4; // 8020CFAC
L_8020CFB0:;
  c->r[31]=c->r[31]+0xFFFFFFF4u; // 8020CFB0
  c->r[4]=0u+0xFFFFFFFFu; // 8020CFB4
  c->r[3]=c->r[31]|c->r[31]; // 8020CFB8
  c->lr=0x8020CFC0u; f_802030B0(c); // 8020CFBC
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8020CFC0
L_8020CFC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020CFC4
  if (!crb(c,2)) { IRQCHK(c); goto L_8020CFB0; } // 8020CFC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020CFCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020CFD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020CFD4
  c->lr=c->r[0]; // 8020CFD8
  c->r[1]=c->r[1]+0x00000010u; // 8020CFDC
  return; // 8020CFE0
}

// fn_8020CFE4
void f_8020CFE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020CFE4
  c->r[0]=c->lr; // 8020CFE8
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020CFEC
  c->r[11]=c->r[1]+0x00000060u; // 8020CFF0
  c->lr=0x8020CFF8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020CFF4
  c->r[31]=0u+0x802A0000u; // 8020CFF8
  c->r[30]=c->r[4]|c->r[4]; // 8020CFFC
  c->r[29]=c->r[3]|c->r[3]; // 8020D000
  c->r[3]=c->r[30]|c->r[30]; // 8020D004
  c->r[31]=c->r[31]+0x00004E60u; // 8020D008
  c->lr=0x8020D010u; f_8020EDF0(c); // 8020D00C
  c->r[6]=R32(c->r[29]+0x00000128u); // 8020D010
  c->r[27]=c->r[31]+0x00000121u; // 8020D014
  c->r[3]=c->r[1]+0x0000002Cu; // 8020D018
  c->r[5]=sraw(c,c->r[6],31); // 8020D01C
  c->lr=0x8020D024u; f_802158B4(c); // 8020D020
  c->r[3]=c->r[1]+0x0000002Cu; // 8020D024
  c->lr=0x8020D02Cu; f_80203778(c); // 8020D028
  c->r[5]=c->r[3]|c->r[3]; // 8020D02C
  c->r[3]=c->r[30]|c->r[30]; // 8020D030
  c->r[4]=c->r[27]|c->r[27]; // 8020D034
  c->lr=0x8020D03Cu; f_8020FE80(c); // 8020D038
  c->r[3]=c->r[1]+0x0000002Cu; // 8020D03C
  c->r[4]=0u+0xFFFFFFFFu; // 8020D040
  c->lr=0x8020D048u; f_802030B0(c); // 8020D044
  c->r[3]=c->r[30]|c->r[30]; // 8020D048
  c->r[4]=c->r[31]+0x00000128u; // 8020D04C
  c->lr=0x8020D054u; f_8020FF60(c); // 8020D050
  c->r[3]=c->r[30]|c->r[30]; // 8020D054
  c->r[4]=c->r[31]+0x0000012Eu; // 8020D058
  c->r[5]=c->r[29]+0x0000012Cu; // 8020D05C
  c->lr=0x8020D064u; f_8020FE80(c); // 8020D060
  c->r[3]=c->r[30]|c->r[30]; // 8020D064
  c->r[4]=c->r[31]+0x00000135u; // 8020D068
  c->r[5]=c->r[29]+0x0000014Cu; // 8020D06C
  c->lr=0x8020D074u; f_8020FE80(c); // 8020D070
  c->r[3]=c->r[30]|c->r[30]; // 8020D074
  c->lr=0x8020D07Cu; f_80210030(c); // 8020D078
  c->r[3]=c->r[29]+0x000001C8u; // 8020D07C
  c->lr=0x8020D084u; f_802020A8(c); // 8020D080
  c->r[0]=cntlz(c->r[3]); // 8020D084
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020D088
  if (!crb(c,2)) { goto L_8020D0AC; } // 8020D08C
  c->r[27]=c->r[31]+0x0000013Eu; // 8020D090
  c->r[3]=c->r[29]+0x000001C8u; // 8020D094
  c->lr=0x8020D09Cu; f_80203778(c); // 8020D098
  c->r[5]=c->r[3]|c->r[3]; // 8020D09C
  c->r[3]=c->r[30]|c->r[30]; // 8020D0A0
  c->r[4]=c->r[27]|c->r[27]; // 8020D0A4
  c->lr=0x8020D0ACu; f_8020FE80(c); // 8020D0A8
L_8020D0AC:;
  c->r[3]=c->r[29]+0x000001B0u; // 8020D0AC
  c->lr=0x8020D0B4u; f_802020A8(c); // 8020D0B0
  c->r[0]=cntlz(c->r[3]); // 8020D0B4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020D0B8
  if (!crb(c,2)) { goto L_8020D0DC; } // 8020D0BC
  c->r[27]=c->r[31]+0x00000147u; // 8020D0C0
  c->r[3]=c->r[29]+0x000001B0u; // 8020D0C4
  c->lr=0x8020D0CCu; f_80203778(c); // 8020D0C8
  c->r[5]=c->r[3]|c->r[3]; // 8020D0CC
  c->r[3]=c->r[30]|c->r[30]; // 8020D0D0
  c->r[4]=c->r[27]|c->r[27]; // 8020D0D4
  c->lr=0x8020D0DCu; f_8020FE80(c); // 8020D0D8
L_8020D0DC:;
  c->r[3]=c->r[30]|c->r[30]; // 8020D0DC
  c->r[4]=c->r[31]+0x0000014Du; // 8020D0E0
  c->lr=0x8020D0E8u; f_8020FF60(c); // 8020D0E4
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 8020D0E8
  c->r[5]=c->r[31]+0x0000003Cu; // 8020D0EC
  c->r[3]=c->r[30]|c->r[30]; // 8020D0F0
  c->r[4]=c->r[31]+0x00000155u; // 8020D0F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8020D0F8
  c->r[5]=R32(c->r[5]+c->r[0]); // 8020D0FC
  c->lr=0x8020D104u; f_8020FE80(c); // 8020D100
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 8020D104
  cmps(c,0,(int32_t)c->r[0],1); // 8020D108
  if (!crb(c,2)) { goto L_8020D1CC; } // 8020D10C
  c->r[3]=c->r[30]|c->r[30]; // 8020D110
  c->r[4]=c->r[31]+0x00000163u; // 8020D114
  c->lr=0x8020D11Cu; f_8020FF60(c); // 8020D118
  c->r[0]=R8(c->r[29]+0x00000170u); // 8020D11C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8020D120
  if (!crb(c,2)) { goto L_8020D174; } // 8020D124
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020D128
  c->r[27]=c->r[31]+0x00000172u; // 8020D12C
  c->r[3]=c->r[3]+0x000000B8u; // 8020D130
  c->lr=0x8020D138u; f_80203778(c); // 8020D134
  c->r[5]=c->r[3]|c->r[3]; // 8020D138
  c->r[3]=c->r[30]|c->r[30]; // 8020D13C
  c->r[4]=c->r[27]|c->r[27]; // 8020D140
  c->lr=0x8020D148u; f_8020FE80(c); // 8020D144
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020D148
  c->r[27]=c->r[31]+0x00000180u; // 8020D14C
  c->r[3]=c->r[3]+0x000000C4u; // 8020D150
  c->lr=0x8020D158u; f_80203778(c); // 8020D154
  c->r[5]=c->r[3]|c->r[3]; // 8020D158
  c->r[3]=c->r[30]|c->r[30]; // 8020D15C
  c->r[4]=c->r[27]|c->r[27]; // 8020D160
  c->lr=0x8020D168u; f_8020FE80(c); // 8020D164
  c->r[0]=0u+0x00000001u; // 8020D168
  W8(c->r[29]+0x000000E6u,c->r[0]); // 8020D16C
  goto L_8020D1C0; // 8020D170
L_8020D174:;
  c->r[3]=c->r[30]|c->r[30]; // 8020D174
  c->r[4]=c->r[31]+0x00000172u; // 8020D178
  c->r[5]=c->r[29]+0x00000170u; // 8020D17C
  c->lr=0x8020D184u; f_8020FE80(c); // 8020D180
  c->r[3]=c->r[30]|c->r[30]; // 8020D184
  c->r[4]=c->r[31]+0x00000180u; // 8020D188
  c->r[5]=c->r[29]+0x00000190u; // 8020D18C
  c->lr=0x8020D194u; f_8020FE80(c); // 8020D190
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020D194
  c->r[4]=c->r[29]+0x00000170u; // 8020D198
  c->r[3]=c->r[3]+0x000000B8u; // 8020D19C
  c->lr=0x8020D1A4u; f_8020D458(c); // 8020D1A0
  cmps(c,0,(int32_t)c->r[3],0); // 8020D1A4
  if (crb(c,2)) { goto L_8020D1B8; } // 8020D1A8
  c->r[0]=0u+0x00000001u; // 8020D1AC
  W8(c->r[29]+0x000000E6u,c->r[0]); // 8020D1B0
  goto L_8020D1C0; // 8020D1B4
L_8020D1B8:;
  c->r[0]=0u+0x00000000u; // 8020D1B8
  W8(c->r[29]+0x000000E6u,c->r[0]); // 8020D1BC
L_8020D1C0:;
  c->r[3]=c->r[30]|c->r[30]; // 8020D1C0
  c->lr=0x8020D1C8u; f_80210030(c); // 8020D1C4
  goto L_8020D26C; // 8020D1C8
L_8020D1CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8020D1CC
  if (!crb(c,2)) { goto L_8020D240; } // 8020D1D0
  c->r[3]=c->r[30]|c->r[30]; // 8020D1D4
  c->r[4]=c->r[31]+0x0000018Cu; // 8020D1D8
  c->lr=0x8020D1E0u; f_8020FF60(c); // 8020D1DC
  c->r[27]=c->r[31]+0x00000199u; // 8020D1E0
  c->r[3]=c->r[29]+0x000001E0u; // 8020D1E4
  c->lr=0x8020D1ECu; f_80203778(c); // 8020D1E8
  c->r[5]=c->r[3]|c->r[3]; // 8020D1EC
  c->r[3]=c->r[30]|c->r[30]; // 8020D1F0
  c->r[4]=c->r[27]|c->r[27]; // 8020D1F4
  c->lr=0x8020D1FCu; f_8020FE80(c); // 8020D1F8
  c->r[27]=c->r[31]+0x000001A5u; // 8020D1FC
  c->r[3]=c->r[29]+0x000001D4u; // 8020D200
  c->lr=0x8020D208u; f_80203778(c); // 8020D204
  c->r[5]=c->r[3]|c->r[3]; // 8020D208
  c->r[3]=c->r[30]|c->r[30]; // 8020D20C
  c->r[4]=c->r[27]|c->r[27]; // 8020D210
  c->lr=0x8020D218u; f_8020FE80(c); // 8020D214
  c->r[27]=c->r[31]+0x000001AFu; // 8020D218
  c->r[3]=c->r[29]+0x000001ECu; // 8020D21C
  c->lr=0x8020D224u; f_80203778(c); // 8020D220
  c->r[5]=c->r[3]|c->r[3]; // 8020D224
  c->r[3]=c->r[30]|c->r[30]; // 8020D228
  c->r[4]=c->r[27]|c->r[27]; // 8020D22C
  c->lr=0x8020D234u; f_8020FE80(c); // 8020D230
  c->r[3]=c->r[30]|c->r[30]; // 8020D234
  c->lr=0x8020D23Cu; f_80210030(c); // 8020D238
  goto L_8020D26C; // 8020D23C
L_8020D240:;
  cmps(c,0,(int32_t)c->r[0],2); // 8020D240
  if (!crb(c,2)) { goto L_8020D26C; } // 8020D244
  c->r[3]=c->r[30]|c->r[30]; // 8020D248
  c->r[4]=c->r[31]+0x000001B9u; // 8020D24C
  c->lr=0x8020D254u; f_8020FF60(c); // 8020D250
  c->r[3]=c->r[30]|c->r[30]; // 8020D254
  c->r[4]=c->r[31]+0x000001CBu; // 8020D258
  c->r[5]=c->r[29]+0x00000170u; // 8020D25C
  c->lr=0x8020D264u; f_8020FE80(c); // 8020D260
  c->r[3]=c->r[30]|c->r[30]; // 8020D264
  c->lr=0x8020D26Cu; f_80210030(c); // 8020D268
L_8020D26C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020D26C
  c->lr=0x8020D274u; f_80210030(c); // 8020D270
  c->r[3]=c->r[29]+0x000001BCu; // 8020D274
  c->lr=0x8020D27Cu; f_802020A8(c); // 8020D278
  c->r[0]=cntlz(c->r[3]); // 8020D27C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020D280
  if (!crb(c,2)) { goto L_8020D2A4; } // 8020D284
  c->r[27]=c->r[31]+0x000001DCu; // 8020D288
  c->r[3]=c->r[29]+0x000001BCu; // 8020D28C
  c->lr=0x8020D294u; f_80203778(c); // 8020D290
  c->r[5]=c->r[3]|c->r[3]; // 8020D294
  c->r[3]=c->r[30]|c->r[30]; // 8020D298
  c->r[4]=c->r[27]|c->r[27]; // 8020D29C
  c->lr=0x8020D2A4u; f_8020FE80(c); // 8020D2A0
L_8020D2A4:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020D2A4
  c->r[27]=c->r[31]+0x000001E9u; // 8020D2A8
  c->r[3]=c->r[3]+0x000001FCu; // 8020D2AC
  c->lr=0x8020D2B4u; f_80203778(c); // 8020D2B0
  c->r[5]=c->r[3]|c->r[3]; // 8020D2B4
  c->r[3]=c->r[30]|c->r[30]; // 8020D2B8
  c->r[4]=c->r[27]|c->r[27]; // 8020D2BC
  c->lr=0x8020D2C4u; f_8020FE80(c); // 8020D2C0
  c->r[27]=c->r[31]+0x000001F4u; // 8020D2C4
  c->r[3]=c->r[29]+0x000000D0u; // 8020D2C8
  c->lr=0x8020D2D0u; f_80203778(c); // 8020D2CC
  c->r[5]=c->r[3]|c->r[3]; // 8020D2D0
  c->r[3]=c->r[30]|c->r[30]; // 8020D2D4
  c->r[4]=c->r[27]|c->r[27]; // 8020D2D8
  c->lr=0x8020D2E0u; f_8020FE80(c); // 8020D2DC
  c->r[0]=R32(c->r[29]+0x000001F8u); // 8020D2E0
  cmps(c,0,(int32_t)c->r[0],0); // 8020D2E4
  if (!crb(c,2)) { goto L_8020D34C; } // 8020D2E8
  c->r[3]=c->r[30]|c->r[30]; // 8020D2EC
  c->r[4]=c->r[31]+0x000001FCu; // 8020D2F0
  c->lr=0x8020D2F8u; f_8020FF60(c); // 8020D2F4
  c->r[27]=c->r[31]+0x000001FCu; // 8020D2F8
  c->r[3]=c->r[1]+0x00000020u; // 8020D2FC
  c->r[6]=0u+0x00000000u; // 8020D300
  c->r[5]=0u+0x00000000u; // 8020D304
  c->lr=0x8020D30Cu; f_802158B4(c); // 8020D308
  c->r[3]=c->r[1]+0x00000020u; // 8020D30C
  c->lr=0x8020D314u; f_80203778(c); // 8020D310
  c->r[5]=c->r[3]|c->r[3]; // 8020D314
  c->r[3]=c->r[30]|c->r[30]; // 8020D318
  c->r[4]=c->r[27]|c->r[27]; // 8020D31C
  c->lr=0x8020D324u; f_8020FE80(c); // 8020D320
  c->r[3]=c->r[1]+0x00000020u; // 8020D324
  c->r[4]=0u+0xFFFFFFFFu; // 8020D328
  c->lr=0x8020D330u; f_802030B0(c); // 8020D32C
  c->r[5]=R32(c->r[31]+0x00000010u); // 8020D330
  c->r[3]=c->r[30]|c->r[30]; // 8020D334
  c->r[4]=c->r[31]+0x00000203u; // 8020D338
  c->lr=0x8020D340u; f_8020FE80(c); // 8020D33C
  c->r[3]=c->r[30]|c->r[30]; // 8020D340
  c->lr=0x8020D348u; f_80210030(c); // 8020D344
  goto L_8020D3DC; // 8020D348
L_8020D34C:;
  c->r[24]=0u+0x00000000u; // 8020D34C
  c->r[28]=0u+0x00000000u; // 8020D350
  if (crb(c,2)) { goto L_8020D3DC; } // 8020D354
  c->r[26]=c->r[31]+0x000001FCu; // 8020D358
  c->r[27]=c->r[31]+0x00000010u; // 8020D35C
  goto L_8020D3D0; // 8020D360
L_8020D364:;
  c->r[3]=c->r[30]|c->r[30]; // 8020D364
  c->r[4]=c->r[31]+0x000001FCu; // 8020D368
  c->lr=0x8020D370u; f_8020FF60(c); // 8020D36C
  c->r[25]=c->r[29]+c->r[28]; // 8020D370
  c->r[3]=c->r[1]+0x00000014u; // 8020D374
  c->r[6]=R32(c->r[25]+0x0000020Cu); // 8020D378
  c->r[5]=0u+0x00000000u; // 8020D37C
  c->lr=0x8020D384u; f_802158B4(c); // 8020D380
  c->r[3]=c->r[1]+0x00000014u; // 8020D384
  c->lr=0x8020D38Cu; f_80203778(c); // 8020D388
  c->r[5]=c->r[3]|c->r[3]; // 8020D38C
  c->r[3]=c->r[30]|c->r[30]; // 8020D390
  c->r[4]=c->r[26]|c->r[26]; // 8020D394
  c->lr=0x8020D39Cu; f_8020FE80(c); // 8020D398
  c->r[3]=c->r[1]+0x00000014u; // 8020D39C
  c->r[4]=0u+0xFFFFFFFFu; // 8020D3A0
  c->lr=0x8020D3A8u; f_802030B0(c); // 8020D3A4
  c->r[0]=R32(c->r[25]+0x00000208u); // 8020D3A8
  c->r[3]=c->r[30]|c->r[30]; // 8020D3AC
  c->r[4]=c->r[31]+0x00000203u; // 8020D3B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8020D3B4
  c->r[5]=R32(c->r[27]+c->r[0]); // 8020D3B8
  c->lr=0x8020D3C0u; f_8020FE80(c); // 8020D3BC
  c->r[3]=c->r[30]|c->r[30]; // 8020D3C0
  c->lr=0x8020D3C8u; f_80210030(c); // 8020D3C4
  c->r[24]=c->r[24]+0x00000001u; // 8020D3C8
  c->r[28]=c->r[28]+0x00000008u; // 8020D3CC
L_8020D3D0:;
  c->r[0]=R32(c->r[29]+0x000001F8u); // 8020D3D0
  cmpu(c,0,c->r[24],c->r[0]); // 8020D3D4
  if (crb(c,0)) { IRQCHK(c); goto L_8020D364; } // 8020D3D8
L_8020D3DC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020D3DC
  c->r[0]=R8(c->r[3]+0x00000232u); // 8020D3E0
  cmps(c,0,(int32_t)c->r[0],0); // 8020D3E4
  if (crb(c,2)) { goto L_8020D43C; } // 8020D3E8
  c->r[0]=R8(c->r[3]+0x000001F8u); // 8020D3EC
  cmps(c,0,(int32_t)c->r[0],0); // 8020D3F0
  if (crb(c,2)) { goto L_8020D43C; } // 8020D3F4
  c->r[0]=R8(c->r[3]+0x000001F9u); // 8020D3F8
  cmps(c,0,(int32_t)c->r[0],0); // 8020D3FC
  if (!crb(c,2)) { goto L_8020D43C; } // 8020D400
  c->r[6]=R8(c->r[3]+0x000001E2u); // 8020D404
  c->r[26]=c->r[31]+0x0000020Du; // 8020D408
  c->r[3]=c->r[1]+0x00000008u; // 8020D40C
  c->r[5]=0u+0x00000000u; // 8020D410
  c->lr=0x8020D418u; f_802158B4(c); // 8020D414
  c->r[3]=c->r[1]+0x00000008u; // 8020D418
  c->lr=0x8020D420u; f_80203778(c); // 8020D41C
  c->r[5]=c->r[3]|c->r[3]; // 8020D420
  c->r[3]=c->r[30]|c->r[30]; // 8020D424
  c->r[4]=c->r[26]|c->r[26]; // 8020D428
  c->lr=0x8020D430u; f_8020FE80(c); // 8020D42C
  c->r[3]=c->r[1]+0x00000008u; // 8020D430
  c->r[4]=0u+0xFFFFFFFFu; // 8020D434
  c->lr=0x8020D43Cu; f_802030B0(c); // 8020D438
L_8020D43C:;
  c->r[11]=c->r[1]+0x00000060u; // 8020D43C
  c->r[3]=0u+0x00000000u; // 8020D440
  c->lr=0x8020D448u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020D444
  c->r[0]=R32(c->r[1]+0x00000064u); // 8020D448
  c->lr=c->r[0]; // 8020D44C
  c->r[1]=c->r[1]+0x00000060u; // 8020D450
  return; // 8020D454
}

// fn_8020D458
void f_8020D458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D458
  c->r[0]=c->lr; // 8020D45C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020D460
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8020D464
  c->r[31]=c->r[4]|c->r[4]; // 8020D468
  W32(c->r[1]+0x00000028u,c->r[30]); // 8020D46C
  c->r[30]=c->r[3]|c->r[3]; // 8020D470
  c->r[3]=c->r[31]|c->r[31]; // 8020D474
  c->lr=0x8020D47Cu; f_80109598(c); // 8020D478
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8020D47C
  c->r[3]=c->r[30]|c->r[30]; // 8020D480
  c->lr=0x8020D488u; f_802020A8(c); // 8020D484
  W32(c->r[1]+0x00000008u,c->r[3]); // 8020D488
  c->r[3]=c->r[30]|c->r[30]; // 8020D48C
  c->r[4]=c->r[1]+0x0000001Cu; // 8020D490
  c->r[5]=c->r[1]+0x00000018u; // 8020D494
  c->lr=0x8020D49Cu; f_80204620(c); // 8020D498
  c->r[3]=R32(c->r[1]+0x00000008u); // 8020D49C
  c->r[4]=c->r[1]+0x00000010u; // 8020D4A0
  c->r[0]=R32(c->r[1]+0x00000018u); // 8020D4A4
  c->r[5]=R32(c->r[1]+0x00000018u); // 8020D4A8
  cmpu(c,0,c->r[3],c->r[0]); // 8020D4AC
  W32(c->r[1]+0x00000010u,c->r[5]); // 8020D4B0
  if (!crb(c,0)) { goto L_8020D4BC; } // 8020D4B4
  c->r[4]=c->r[1]+0x00000008u; // 8020D4B8
L_8020D4BC:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8020D4BC
  c->r[4]=c->r[31]|c->r[31]; // 8020D4C0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8020D4C4
  c->r[5]=c->r[1]+0x00000014u; // 8020D4C8
  W32(c->r[1]+0x00000014u,c->r[3]); // 8020D4CC
  cmpu(c,0,c->r[0],c->r[3]); // 8020D4D0
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8020D4D4
  if (!crb(c,0)) { goto L_8020D4E0; } // 8020D4D8
  c->r[5]=c->r[1]+0x0000000Cu; // 8020D4DC
L_8020D4E0:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8020D4E0
  c->lr=0x8020D4E8u; f_801101A0(c); // 8020D4E4
  cmps(c,0,(int32_t)c->r[3],0); // 8020D4E8
  if (!crb(c,2)) { goto L_8020D518; } // 8020D4EC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8020D4F0
  c->r[3]=R32(c->r[1]+0x00000014u); // 8020D4F4
  cmpu(c,0,c->r[3],c->r[0]); // 8020D4F8
  if (!crb(c,0)) { goto L_8020D508; } // 8020D4FC
  c->r[3]=0u+0xFFFFFFFFu; // 8020D500
  goto L_8020D518; // 8020D504
L_8020D508:;
  if (!crb(c,2)) { goto L_8020D514; } // 8020D508
  c->r[3]=0u+0x00000000u; // 8020D50C
  goto L_8020D518; // 8020D510
L_8020D514:;
  c->r[3]=0u+0x00000001u; // 8020D514
L_8020D518:;
  c->r[0]=cntlz(c->r[3]); // 8020D518
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8020D51C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8020D520
  c->r[30]=R32(c->r[1]+0x00000028u); // 8020D524
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020D528
  c->lr=c->r[0]; // 8020D52C
  c->r[1]=c->r[1]+0x00000030u; // 8020D530
  return; // 8020D534
}

// fn_8020D538
void f_8020D538(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D538
  c->r[0]=c->lr; // 8020D53C
  W32(c->r[1]+0x00000214u,c->r[0]); // 8020D540
  c->r[11]=c->r[1]+0x00000210u; // 8020D544
  c->lr=0x8020D54Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020D548
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020D54C
  c->r[29]=0u+0x00000000u; // 8020D550
  c->r[31]=0u+0x802A0000u; // 8020D554
  c->r[30]=c->r[3]|c->r[3]; // 8020D558
  c->r[31]=c->r[31]+0x00004E60u; // 8020D55C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8020D560
  c->r[27]=c->r[31]+0x00000211u; // 8020D564
  c->r[28]=c->r[1]+0x0000002Cu; // 8020D568
  W32(c->r[1]+0x00000030u,c->r[29]); // 8020D56C
  c->r[3]=c->r[1]+0x0000003Cu; // 8020D570
  c->r[4]=0u+0x00000001u; // 8020D574
  c->r[5]=0u+0x00000010u; // 8020D578
  W32(c->r[1]+0x00000034u,c->r[29]); // 8020D57C
  W32(c->r[1]+0x00000038u,c->r[29]); // 8020D580
  c->lr=0x8020D588u; f_8020D8E8(c); // 8020D584
  c->r[3]=c->r[28]+0x00000090u; // 8020D588
  c->r[4]=0u+0x00000001u; // 8020D58C
  c->r[5]=0u+0x00000010u; // 8020D590
  c->lr=0x8020D598u; f_8020D8E8(c); // 8020D594
  c->r[3]=c->r[28]+0x00000110u; // 8020D598
  c->lr=0x8020D5A0u; f_80203990(c); // 8020D59C
  c->r[3]=c->r[28]+0x0000011Cu; // 8020D5A0
  c->lr=0x8020D5A8u; f_80203990(c); // 8020D5A4
  W32(c->r[1]+0x00000154u,c->r[29]); // 8020D5A8
  c->r[3]=c->r[28]+0x00000138u; // 8020D5AC
  W32(c->r[1]+0x00000158u,c->r[29]); // 8020D5B0
  W32(c->r[1]+0x0000015Cu,c->r[29]); // 8020D5B4
  W8(c->r[1]+0x00000160u,c->r[29]); // 8020D5B8
  W8(c->r[1]+0x00000161u,c->r[29]); // 8020D5BC
  c->lr=0x8020D5C4u; f_80203990(c); // 8020D5C0
  c->r[3]=c->r[28]+0x00000144u; // 8020D5C4
  c->lr=0x8020D5CCu; f_80203990(c); // 8020D5C8
  c->r[3]=c->r[28]+0x00000150u; // 8020D5CC
  c->lr=0x8020D5D4u; f_80203990(c); // 8020D5D0
  c->r[3]=c->r[28]+0x0000015Cu; // 8020D5D4
  c->lr=0x8020D5DCu; f_80203990(c); // 8020D5D8
  c->r[5]=0u+0x80270000u; // 8020D5DC
  c->r[4]=0u+0x802A0000u; // 8020D5E0
  c->r[5]=c->r[5]+0x00004948u; // 8020D5E4
  c->r[3]=0u+0x00000001u; // 8020D5E8
  c->r[4]=c->r[4]+0x000057BBu; // 8020D5EC
  c->r[0]=0u+0xFFFFFFFFu; // 8020D5F0
  W8(c->r[1]+0x00000194u,c->r[3]); // 8020D5F4
  c->r[3]=c->r[28]+0x00000198u; // 8020D5F8
  W32(c->r[1]+0x00000198u,c->r[27]); // 8020D5FC
  W32(c->r[1]+0x0000019Cu,c->r[5]); // 8020D600
  W32(c->r[1]+0x000001A0u,c->r[4]); // 8020D604
  W32(c->r[1]+0x000001A4u,c->r[0]); // 8020D608
  W32(c->r[1]+0x000001ACu,c->r[29]); // 8020D60C
  W32(c->r[1]+0x000001B0u,c->r[29]); // 8020D610
  W32(c->r[1]+0x000001B4u,c->r[29]); // 8020D614
  W32(c->r[1]+0x000001B8u,c->r[29]); // 8020D618
  W32(c->r[1]+0x000001BCu,c->r[29]); // 8020D61C
  W32(c->r[1]+0x000001C0u,c->r[29]); // 8020D620
  c->lr=0x8020D628u; f_80203990(c); // 8020D624
  c->r[3]=c->r[28]+0x000001A4u; // 8020D628
  c->lr=0x8020D630u; f_80203990(c); // 8020D62C
  c->r[3]=0u+0x802A0000u; // 8020D630
  c->r[0]=0u+0x00000002u; // 8020D634
  c->r[3]=c->r[3]+0x000057B8u; // 8020D638
  cmps(c,0,(int32_t)c->r[27],0); // 8020D63C
  W32(c->r[1]+0x000001DCu,c->r[3]); // 8020D640
  c->r[25]=0u+0x00000000u; // 8020D644
  c->r[26]=0u+0x00000000u; // 8020D648
  c->r[29]=0u+0x00000000u; // 8020D64C
  W32(c->r[1]+0x000001E0u,c->r[0]); // 8020D650
  if (crb(c,2)) { goto L_8020D688; } // 8020D654
  c->r[4]=c->r[27]|c->r[27]; // 8020D658
  c->r[3]=c->r[1]+0x00000008u; // 8020D65C
  c->lr=0x8020D664u; f_8020E580(c); // 8020D660
  c->r[5]=0u+0x802A0000u; // 8020D664
  c->r[3]=c->r[1]+0x00000014u; // 8020D668
  c->r[4]=c->r[1]+0x00000008u; // 8020D66C
  c->r[25]=0u+0x00000001u; // 8020D670
  c->r[5]=c->r[5]+0x000057AFu; // 8020D674
  c->lr=0x8020D67Cu; f_80205F3C(c); // 8020D678
  c->r[4]=c->r[1]+0x00000014u; // 8020D67C
  c->r[26]=0u+0x00000001u; // 8020D680
  goto L_8020D6A0; // 8020D684
L_8020D688:;
  c->r[4]=0u+0x802A0000u; // 8020D688
  c->r[3]=c->r[1]+0x00000020u; // 8020D68C
  c->r[4]=c->r[4]+0x000057AEu; // 8020D690
  c->lr=0x8020D698u; f_8020E580(c); // 8020D694
  c->r[29]=0u+0x00000001u; // 8020D698
  c->r[4]=c->r[1]+0x00000020u; // 8020D69C
L_8020D6A0:;
  c->r[3]=c->r[28]+0x00000198u; // 8020D6A0
  c->lr=0x8020D6A8u; f_802042D0(c); // 8020D6A4
  cmps(c,0,(int32_t)c->r[29],0); // 8020D6A8
  if (crb(c,2)) { goto L_8020D6BC; } // 8020D6AC
  c->r[3]=c->r[1]+0x00000020u; // 8020D6B0
  c->r[4]=0u+0xFFFFFFFFu; // 8020D6B4
  c->lr=0x8020D6BCu; f_802030B0(c); // 8020D6B8
L_8020D6BC:;
  cmps(c,0,(int32_t)c->r[26],0); // 8020D6BC
  if (crb(c,2)) { goto L_8020D6D0; } // 8020D6C0
  c->r[3]=c->r[1]+0x00000014u; // 8020D6C4
  c->r[4]=0u+0xFFFFFFFFu; // 8020D6C8
  c->lr=0x8020D6D0u; f_802030B0(c); // 8020D6CC
L_8020D6D0:;
  cmps(c,0,(int32_t)c->r[25],0); // 8020D6D0
  if (crb(c,2)) { goto L_8020D6E4; } // 8020D6D4
  c->r[3]=c->r[1]+0x00000008u; // 8020D6D8
  c->r[4]=0u+0xFFFFFFFFu; // 8020D6DC
  c->lr=0x8020D6E4u; f_802030B0(c); // 8020D6E0
L_8020D6E4:;
  c->r[3]=c->r[30]|c->r[30]; // 8020D6E4
  c->r[4]=c->r[1]+0x0000002Cu; // 8020D6E8
  c->lr=0x8020D6F0u; f_8020CFE4(c); // 8020D6EC
  c->r[3]=c->r[1]+0x0000002Cu; // 8020D6F0
  c->lr=0x8020D6F8u; f_8020FA28(c); // 8020D6F4
  c->r[4]=R32(c->r[30]+0x00000000u); // 8020D6F8
  c->r[3]=c->r[1]+0x0000002Cu; // 8020D6FC
  c->r[4]=c->r[4]+0x00000010u; // 8020D700
  c->lr=0x8020D708u; f_80210170(c); // 8020D704
  c->r[3]=R32(c->r[1]+0x00000158u); // 8020D708
  cmps(c,0,(int32_t)c->r[3],0); // 8020D70C
  if (crb(c,2)) { goto L_8020D768; } // 8020D710
  c->r[0]=R8(c->r[1]+0x00000160u); // 8020D714
  cmps(c,0,(int32_t)c->r[0],0); // 8020D718
  if (crb(c,2)) { goto L_8020D728; } // 8020D71C
  cmps(c,0,(int32_t)c->r[3],-4015); // 8020D720
  if (!crb(c,2)) { goto L_8020D75C; } // 8020D724
L_8020D728:;
  c->r[0]=R8(c->r[30]+0x000000E4u); // 8020D728
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020D72C
  W8(c->r[3]+0x00000168u,c->r[0]); // 8020D730
  c->r[4]=R32(c->r[30]+0x00000000u); // 8020D734
  c->r[0]=R8(c->r[4]+0x00000232u); // 8020D738
  cmps(c,0,(int32_t)c->r[0],0); // 8020D73C
  if (crb(c,2)) { goto L_8020D75C; } // 8020D740
  c->r[0]=R8(c->r[30]+0x000000E5u); // 8020D744
  cmps(c,0,(int32_t)c->r[0],0); // 8020D748
  if (!crb(c,2)) { goto L_8020D75C; } // 8020D74C
  c->r[3]=R32(c->r[4]+0x00000188u); // 8020D750
  c->r[4]=R32(c->r[4]+0x0000018Cu); // 8020D754
  c->lr=0x8020D75Cu; f_8021E658(c); // 8020D758
L_8020D75C:;
  c->r[0]=R32(c->r[1]+0x00000158u); // 8020D75C
  cmps(c,0,(int32_t)c->r[0],-4015); // 8020D760
  if (!crb(c,2)) { goto L_8020D7C8; } // 8020D764
L_8020D768:;
  c->r[12]=R32(c->r[30]+0x000000C0u); // 8020D768
  c->r[3]=c->r[30]|c->r[30]; // 8020D76C
  c->r[4]=c->r[1]+0x0000002Cu; // 8020D770
  c->r[12]=R32(c->r[12]+0x00000020u); // 8020D774
  c->ctr=c->r[12]; // 8020D778
  if (true) { c->lr=0x8020D780u; dispatch(c,c->ctr); } // 8020D77C
  c->r[0]=R32(c->r[1]+0x00000158u); // 8020D780
  cmps(c,0,(int32_t)c->r[0],-4015); // 8020D784
  if (!crb(c,2)) { goto L_8020D7C8; } // 8020D788
  c->r[3]=c->r[1]+0x00000170u; // 8020D78C
  c->r[4]=c->r[31]+0x0000021Fu; // 8020D790
  c->lr=0x8020D798u; f_8020D458(c); // 8020D794
  cmps(c,0,(int32_t)c->r[3],0); // 8020D798
  if (crb(c,2)) { goto L_8020D7AC; } // 8020D79C
  c->r[0]=0u+0xFFFFF013u; // 8020D7A0
  W32(c->r[1]+0x00000158u,c->r[0]); // 8020D7A4
  goto L_8020D7C8; // 8020D7A8
L_8020D7AC:;
  c->r[3]=c->r[1]+0x00000170u; // 8020D7AC
  c->r[4]=c->r[31]+0x00000223u; // 8020D7B0
  c->lr=0x8020D7B8u; f_8020D458(c); // 8020D7B4
  cmps(c,0,(int32_t)c->r[3],0); // 8020D7B8
  if (crb(c,2)) { goto L_8020D7C8; } // 8020D7BC
  c->r[0]=0u+0xFFFFF00Fu; // 8020D7C0
  W32(c->r[1]+0x00000158u,c->r[0]); // 8020D7C4
L_8020D7C8:;
  c->r[29]=R32(c->r[1]+0x00000158u); // 8020D7C8
  c->r[3]=c->r[1]+0x0000002Cu; // 8020D7CC
  c->r[4]=0u+0xFFFFFFFFu; // 8020D7D0
  c->lr=0x8020D7D8u; f_8020DD0C(c); // 8020D7D4
  c->r[11]=c->r[1]+0x00000210u; // 8020D7D8
  c->r[3]=c->r[29]|c->r[29]; // 8020D7DC
  c->lr=0x8020D7E4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020D7E0
  c->r[0]=R32(c->r[1]+0x00000214u); // 8020D7E4
  c->lr=c->r[0]; // 8020D7E8
  c->r[1]=c->r[1]+0x00000210u; // 8020D7EC
  return; // 8020D7F0
}

// fn_8020D7F4
void f_8020D7F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D7F4
  c->r[0]=c->lr; // 8020D7F8
  cmps(c,0,(int32_t)c->r[3],0); // 8020D7FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020D800
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020D804
  c->r[31]=c->r[3]|c->r[3]; // 8020D808
  if (crb(c,2)) { goto L_8020D81C; } // 8020D80C
  cmps(c,0,(int32_t)c->r[4],0); // 8020D810
  if (!crb(c,1)) { goto L_8020D81C; } // 8020D814
  c->lr=0x8020D81Cu; f_8009230C(c); // 8020D818
L_8020D81C:;
  c->r[3]=c->r[31]|c->r[31]; // 8020D81C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020D820
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020D824
  c->lr=c->r[0]; // 8020D828
  c->r[1]=c->r[1]+0x00000010u; // 8020D82C
  return; // 8020D830
}

// fn_8020D834
void f_8020D834(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D834
  c->r[0]=c->lr; // 8020D838
  cmps(c,0,(int32_t)c->r[3],0); // 8020D83C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020D840
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020D844
  c->r[31]=c->r[4]|c->r[4]; // 8020D848
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020D84C
  c->r[30]=c->r[3]|c->r[3]; // 8020D850
  if (crb(c,2)) { goto L_8020D874; } // 8020D854
  if (crb(c,2)) { goto L_8020D864; } // 8020D858
  c->r[4]=0u+0x00000000u; // 8020D85C
  c->lr=0x8020D864u; f_8020E4A4(c); // 8020D860
L_8020D864:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020D864
  if (!crb(c,1)) { goto L_8020D874; } // 8020D868
  c->r[3]=c->r[30]|c->r[30]; // 8020D86C
  c->lr=0x8020D874u; f_8009230C(c); // 8020D870
L_8020D874:;
  c->r[3]=c->r[30]|c->r[30]; // 8020D874
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020D878
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020D87C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020D880
  c->lr=c->r[0]; // 8020D884
  c->r[1]=c->r[1]+0x00000010u; // 8020D888
  return; // 8020D88C
}

// dtor_8020D890
void f_8020D890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D890
  c->r[0]=c->lr; // 8020D894
  cmps(c,0,(int32_t)c->r[3],0); // 8020D898
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020D89C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020D8A0
  c->r[31]=c->r[4]|c->r[4]; // 8020D8A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020D8A8
  c->r[30]=c->r[3]|c->r[3]; // 8020D8AC
  if (crb(c,2)) { goto L_8020D8CC; } // 8020D8B0
  c->r[4]=0u+0x00000000u; // 8020D8B4
  c->lr=0x8020D8BCu; f_8020D834(c); // 8020D8B8
  cmps(c,0,(int32_t)c->r[31],0); // 8020D8BC
  if (!crb(c,1)) { goto L_8020D8CC; } // 8020D8C0
  c->r[3]=c->r[30]|c->r[30]; // 8020D8C4
  c->lr=0x8020D8CCu; f_8009230C(c); // 8020D8C8
L_8020D8CC:;
  c->r[3]=c->r[30]|c->r[30]; // 8020D8CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020D8D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020D8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020D8D8
  c->lr=c->r[0]; // 8020D8DC
  c->r[1]=c->r[1]+0x00000010u; // 8020D8E0
  return; // 8020D8E4
}

// fn_8020D8E8
void f_8020D8E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020D8E8
  c->r[0]=c->lr; // 8020D8EC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020D8F0
  c->r[11]=c->r[1]+0x00000060u; // 8020D8F4
  c->lr=0x8020D8FCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020D8F8
  c->r[31]=c->r[1]|c->r[1]; // 8020D8FC
  cmps(c,0,(int32_t)c->r[4],0); // 8020D900
  c->r[30]=c->r[3]|c->r[3]; // 8020D904
  c->r[26]=c->r[4]|c->r[4]; // 8020D908
  c->r[27]=c->r[5]|c->r[5]; // 8020D90C
  if (crb(c,2)) { goto L_8020D924; } // 8020D910
  c->r[0]=c->r[3]+0x00000040u; // 8020D914
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020D918
  c->r[3]=c->r[0]|c->r[0]; // 8020D91C
  c->lr=0x8020D924u; f_802053A4(c); // 8020D920
L_8020D924:;
  c->r[5]=0u+0x80290000u; // 8020D924
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020D928
  c->r[5]=c->r[5]+0x00006BC0u; // 8020D92C
  c->r[4]=c->r[30]+0x00000008u; // 8020D930
  W32(c->r[30]+0x00000004u,c->r[5]); // 8020D934
  c->r[0]=c->r[5]+0x0000000Cu; // 8020D938
  c->r[29]=0u+0x00000000u; // 8020D93C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020D940
  c->r[3]=R32(c->r[30]+0x00000000u); // 8020D944
  c->r[0]=c->r[4]-c->r[3]; // 8020D948
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8020D94C
  c->r[28]=R32(c->r[30]+0x00000000u); // 8020D950
  c->r[3]=c->r[28]|c->r[28]; // 8020D954
  c->lr=0x8020D95Cu; f_8011B18C(c); // 8020D958
  c->r[25]=0u+0x00000000u; // 8020D95C
  c->r[4]=c->r[28]|c->r[28]; // 8020D960
  W32(c->r[28]+0x00000034u,c->r[25]); // 8020D964
  c->r[3]=c->r[31]+0x0000000Cu; // 8020D968
  c->lr=0x8020D970u; f_8011B6E4(c); // 8020D96C
  c->r[3]=0u+0x803A0000u; // 8020D970
  W8(c->r[31]+0x00000008u,c->r[25]); // 8020D974
  c->r[3]=c->r[3]+0xFFFFE280u; // 8020D978
  c->lr=0x8020D980u; f_80207850(c); // 8020D97C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8020D980
  c->r[25]=c->r[3]|c->r[3]; // 8020D984
  c->r[0]=R32(c->r[4]+0x00000004u); // 8020D988
  cmpu(c,0,c->r[3],c->r[0]); // 8020D98C
  if (!crb(c,0)) { goto L_8020D9A8; } // 8020D990
  c->r[4]=R32(c->r[4]+0x00000000u); // 8020D994
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8020D998
  c->r[3]=R32(c->r[4]+c->r[0]); // 8020D99C
  cmps(c,0,(int32_t)c->r[3],0); // 8020D9A0
  if (!crb(c,2)) { goto L_8020D9FC; } // 8020D9A4
L_8020D9A8:;
  c->r[3]=0u+0x00000018u; // 8020D9A8
  c->lr=0x8020D9B0u; f_8009228C(c); // 8020D9AC
  cmps(c,0,(int32_t)c->r[3],0); // 8020D9B0
  c->r[24]=c->r[3]|c->r[3]; // 8020D9B4
  if (crb(c,2)) { goto L_8020D9CC; } // 8020D9B8
  c->r[4]=0u+0x00000000u; // 8020D9BC
  c->r[6]=0u+0x00000000u; // 8020D9C0
  c->r[5]=c->r[4]|c->r[4]; // 8020D9C4
  c->lr=0x8020D9CCu; f_8011C6F0(c); // 8020D9C8
L_8020D9CC:;
  c->r[3]=0u+0x803A0000u; // 8020D9CC
  c->r[23]=R32(c->r[31]+0x0000000Cu); // 8020D9D0
  c->r[3]=c->r[3]+0xFFFFE280u; // 8020D9D4
  c->lr=0x8020D9DCu; f_80207850(c); // 8020D9D8
  c->r[5]=c->r[3]|c->r[3]; // 8020D9DC
  c->r[3]=c->r[23]|c->r[23]; // 8020D9E0
  c->r[4]=c->r[24]|c->r[24]; // 8020D9E4
  c->lr=0x8020D9ECu; f_8011BE80(c); // 8020D9E8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8020D9EC
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 8020D9F0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8020D9F4
  c->r[3]=R32(c->r[3]+c->r[0]); // 8020D9F8
L_8020D9FC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020D9FC
  c->r[0]=0u+0x00000020u; // 8020DA00
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020DA04
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020DA08
  c->ctr=c->r[12]; // 8020DA0C
  if (true) { c->lr=0x8020DA14u; dispatch(c,c->ctr); } // 8020DA10
  c->r[0]=0u+0xFFFFFFFFu; // 8020DA14
  c->r[25]=c->r[3]|c->r[3]; // 8020DA18
  c->r[3]=c->r[31]+0x0000000Cu; // 8020DA1C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020DA20
  c->lr=0x8020DA28u; f_8011B300(c); // 8020DA24
  W8(c->r[28]+0x00000038u,c->r[25]); // 8020DA28
  c->r[5]=0u+0x802A0000u; // 8020DA2C
  c->r[5]=c->r[5]+0x00003A94u; // 8020DA30
  c->r[4]=c->r[27]|0x00000010u; // 8020DA34
  W32(c->r[30]+0x00000004u,c->r[5]); // 8020DA38
  c->r[0]=c->r[5]+0x0000000Cu; // 8020DA3C
  c->r[6]=R32(c->r[30]+0x00000000u); // 8020DA40
  c->r[3]=0u+0x80290000u; // 8020DA44
  c->r[5]=c->r[30]+0x00000040u; // 8020DA48
  c->r[27]=rotl(c->r[4],0)&0x000000FFu; // 8020DA4C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8020DA50
  c->r[3]=c->r[3]+0x00006B80u; // 8020DA54
  c->r[0]=0u+0x00000000u; // 8020DA58
  c->r[24]=c->r[30]+0x00000024u; // 8020DA5C
  c->r[6]=R32(c->r[30]+0x00000000u); // 8020DA60
  c->r[4]=c->r[5]-c->r[6]; // 8020DA64
  W32(c->r[6]+0x0000003Cu,c->r[4]); // 8020DA68
  W32(c->r[30]+0x00000008u,c->r[3]); // 8020DA6C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8020DA70
  W32(c->r[30]+0x00000010u,c->r[0]); // 8020DA74
  W32(c->r[30]+0x00000014u,c->r[0]); // 8020DA78
  W32(c->r[30]+0x00000018u,c->r[0]); // 8020DA7C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8020DA80
  W32(c->r[30]+0x00000020u,c->r[0]); // 8020DA84
  c->lr=0x8020DA8Cu; f_8011C488(c); // 8020DA88
  c->r[4]=c->r[3]|c->r[3]; // 8020DA8C
  c->r[3]=c->r[24]|c->r[24]; // 8020DA90
  c->lr=0x8020DA98u; f_80207544(c); // 8020DA94
  goto L_8020DAA8; // 8020DA98
  c->r[3]=c->r[31]+0x00000014u; // 8020DA9C
  c->lr=0x8020DAA4u; f_8010B734(c); // 8020DAA0
L_8020DAA4:;
  IRQCHK(c); goto L_8020DAA4; // 8020DAA4
L_8020DAA8:;
  c->r[4]=0u+0x802A0000u; // 8020DAA8
  W8(c->r[30]+0x0000002Cu,c->r[27]); // 8020DAAC
  c->r[4]=c->r[4]+0x00003F6Cu; // 8020DAB0
  c->r[3]=c->r[30]+0x00000034u; // 8020DAB4
  W32(c->r[30]+0x00000008u,c->r[4]); // 8020DAB8
  c->lr=0x8020DAC0u; f_80203990(c); // 8020DABC
  c->r[3]=c->r[30]+0x00000034u; // 8020DAC0
  c->lr=0x8020DAC8u; f_80203778(c); // 8020DAC4
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 8020DAC8
  W32(c->r[30]+0x00000030u,c->r[3]); // 8020DACC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8020DAD0
  if (crb(c,2)) { goto L_8020DAE4; } // 8020DAD4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 8020DAD8
  W32(c->r[30]+0x00000018u,c->r[3]); // 8020DADC
  W32(c->r[30]+0x00000020u,c->r[3]); // 8020DAE0
L_8020DAE4:;
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 8020DAE4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8020DAE8
  if (crb(c,2)) { goto L_8020DAFC; } // 8020DAEC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8020DAF0
  W32(c->r[30]+0x00000010u,c->r[3]); // 8020DAF4
  W32(c->r[30]+0x00000014u,c->r[3]); // 8020DAF8
L_8020DAFC:;
  c->r[10]=c->r[31]|c->r[31]; // 8020DAFC
  c->r[3]=c->r[30]|c->r[30]; // 8020DB00
  c->r[11]=c->r[10]+0x00000060u; // 8020DB04
  c->lr=0x8020DB0Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020DB08
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020DB0C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8020DB10
  c->r[1]=c->r[10]|c->r[10]; // 8020DB14
  c->lr=c->r[0]; // 8020DB18
  return; // 8020DB1C
}

// fn_8020DB20
void f_8020DB20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DB20
  c->r[0]=c->lr; // 8020DB24
  cmps(c,0,(int32_t)c->r[3],0); // 8020DB28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DB2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DB30
  c->r[31]=c->r[3]|c->r[3]; // 8020DB34
  if (crb(c,2)) { goto L_8020DB48; } // 8020DB38
  cmps(c,0,(int32_t)c->r[4],0); // 8020DB3C
  if (!crb(c,1)) { goto L_8020DB48; } // 8020DB40
  c->lr=0x8020DB48u; f_8009230C(c); // 8020DB44
L_8020DB48:;
  c->r[3]=c->r[31]|c->r[31]; // 8020DB48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DB4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DB50
  c->lr=c->r[0]; // 8020DB54
  c->r[1]=c->r[1]+0x00000010u; // 8020DB58
  return; // 8020DB5C
}

// fn_8020DB60
void f_8020DB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DB60
  c->r[0]=c->lr; // 8020DB64
  cmps(c,0,(int32_t)c->r[3],0); // 8020DB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DB6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DB70
  c->r[31]=c->r[4]|c->r[4]; // 8020DB74
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020DB78
  c->r[30]=c->r[3]|c->r[3]; // 8020DB7C
  if (crb(c,2)) { goto L_8020DBA0; } // 8020DB80
  if (crb(c,2)) { goto L_8020DB90; } // 8020DB84
  c->r[4]=0u+0x00000000u; // 8020DB88
  c->lr=0x8020DB90u; f_8020E404(c); // 8020DB8C
L_8020DB90:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020DB90
  if (!crb(c,1)) { goto L_8020DBA0; } // 8020DB94
  c->r[3]=c->r[30]|c->r[30]; // 8020DB98
  c->lr=0x8020DBA0u; f_8009230C(c); // 8020DB9C
L_8020DBA0:;
  c->r[3]=c->r[30]|c->r[30]; // 8020DBA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DBA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020DBA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DBAC
  c->lr=c->r[0]; // 8020DBB0
  c->r[1]=c->r[1]+0x00000010u; // 8020DBB4
  return; // 8020DBB8
}

// dtor_8020DBBC
void f_8020DBBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DBBC
  c->r[0]=c->lr; // 8020DBC0
  cmps(c,0,(int32_t)c->r[3],0); // 8020DBC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DBC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DBCC
  c->r[31]=c->r[4]|c->r[4]; // 8020DBD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020DBD4
  c->r[30]=c->r[3]|c->r[3]; // 8020DBD8
  if (crb(c,2)) { goto L_8020DBFC; } // 8020DBDC
  if (crb(c,2)) { goto L_8020DBEC; } // 8020DBE0
  c->r[4]=0u+0x00000000u; // 8020DBE4
  c->lr=0x8020DBECu; f_8020DB60(c); // 8020DBE8
L_8020DBEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020DBEC
  if (!crb(c,1)) { goto L_8020DBFC; } // 8020DBF0
  c->r[3]=c->r[30]|c->r[30]; // 8020DBF4
  c->lr=0x8020DBFCu; f_8009230C(c); // 8020DBF8
L_8020DBFC:;
  c->r[3]=c->r[30]|c->r[30]; // 8020DBFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DC00
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020DC04
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DC08
  c->lr=c->r[0]; // 8020DC0C
  c->r[1]=c->r[1]+0x00000010u; // 8020DC10
  return; // 8020DC14
}

// fn_8020DC18
void f_8020DC18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DC18
  c->r[0]=c->lr; // 8020DC1C
  cmps(c,0,(int32_t)c->r[3],0); // 8020DC20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DC24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DC28
  c->r[31]=c->r[3]|c->r[3]; // 8020DC2C
  if (crb(c,2)) { goto L_8020DC40; } // 8020DC30
  cmps(c,0,(int32_t)c->r[4],0); // 8020DC34
  if (!crb(c,1)) { goto L_8020DC40; } // 8020DC38
  c->lr=0x8020DC40u; f_8009230C(c); // 8020DC3C
L_8020DC40:;
  c->r[3]=c->r[31]|c->r[31]; // 8020DC40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DC44
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DC48
  c->lr=c->r[0]; // 8020DC4C
  c->r[1]=c->r[1]+0x00000010u; // 8020DC50
  return; // 8020DC54
}

// fn_8020DC58
void f_8020DC58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DC58
  c->r[0]=c->lr; // 8020DC5C
  cmps(c,0,(int32_t)c->r[3],0); // 8020DC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DC64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DC68
  c->r[31]=c->r[4]|c->r[4]; // 8020DC6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020DC70
  c->r[30]=c->r[3]|c->r[3]; // 8020DC74
  if (crb(c,2)) { goto L_8020DC98; } // 8020DC78
  if (crb(c,2)) { goto L_8020DC88; } // 8020DC7C
  c->r[4]=0u+0x00000000u; // 8020DC80
  c->lr=0x8020DC88u; f_8020E368(c); // 8020DC84
L_8020DC88:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020DC88
  if (!crb(c,1)) { goto L_8020DC98; } // 8020DC8C
  c->r[3]=c->r[30]|c->r[30]; // 8020DC90
  c->lr=0x8020DC98u; f_8009230C(c); // 8020DC94
L_8020DC98:;
  c->r[3]=c->r[30]|c->r[30]; // 8020DC98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DC9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020DCA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DCA4
  c->lr=c->r[0]; // 8020DCA8
  c->r[1]=c->r[1]+0x00000010u; // 8020DCAC
  return; // 8020DCB0
}

// dtor_8020DCB4
void f_8020DCB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DCB4
  c->r[0]=c->lr; // 8020DCB8
  cmps(c,0,(int32_t)c->r[3],0); // 8020DCBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DCC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DCC4
  c->r[31]=c->r[4]|c->r[4]; // 8020DCC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020DCCC
  c->r[30]=c->r[3]|c->r[3]; // 8020DCD0
  if (crb(c,2)) { goto L_8020DCF0; } // 8020DCD4
  c->r[4]=0u+0x00000000u; // 8020DCD8
  c->lr=0x8020DCE0u; f_8020DC58(c); // 8020DCDC
  cmps(c,0,(int32_t)c->r[31],0); // 8020DCE0
  if (!crb(c,1)) { goto L_8020DCF0; } // 8020DCE4
  c->r[3]=c->r[30]|c->r[30]; // 8020DCE8
  c->lr=0x8020DCF0u; f_8009230C(c); // 8020DCEC
L_8020DCF0:;
  c->r[3]=c->r[30]|c->r[30]; // 8020DCF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DCF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020DCF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DCFC
  c->lr=c->r[0]; // 8020DD00
  c->r[1]=c->r[1]+0x00000010u; // 8020DD04
  return; // 8020DD08
}

// dtor_8020DD0C
void f_8020DD0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DD0C
  c->r[0]=c->lr; // 8020DD10
  cmps(c,0,(int32_t)c->r[3],0); // 8020DD14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020DD18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020DD1C
  c->r[31]=c->r[4]|c->r[4]; // 8020DD20
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020DD24
  c->r[30]=c->r[3]|c->r[3]; // 8020DD28
  if (crb(c,2)) { goto L_8020DDDC; } // 8020DD2C
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD30
  c->r[3]=c->r[3]+0x000001A4u; // 8020DD34
  c->lr=0x8020DD3Cu; f_802030B0(c); // 8020DD38
  c->r[3]=c->r[30]+0x00000198u; // 8020DD3C
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD40
  c->lr=0x8020DD48u; f_802030B0(c); // 8020DD44
  c->r[3]=c->r[30]+0x0000018Cu; // 8020DD48
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD4C
  c->lr=0x8020DD54u; f_8020DCB4(c); // 8020DD50
  c->r[3]=c->r[30]+0x00000180u; // 8020DD54
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD58
  c->lr=0x8020DD60u; f_8020DBBC(c); // 8020DD5C
  c->r[3]=c->r[30]+0x0000015Cu; // 8020DD60
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD64
  c->lr=0x8020DD6Cu; f_802030B0(c); // 8020DD68
  c->r[3]=c->r[30]+0x00000150u; // 8020DD6C
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD70
  c->lr=0x8020DD78u; f_802030B0(c); // 8020DD74
  c->r[3]=c->r[30]+0x00000144u; // 8020DD78
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD7C
  c->lr=0x8020DD84u; f_802030B0(c); // 8020DD80
  c->r[3]=c->r[30]+0x00000138u; // 8020DD84
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD88
  c->lr=0x8020DD90u; f_802030B0(c); // 8020DD8C
  c->r[3]=c->r[30]+0x0000011Cu; // 8020DD90
  c->r[4]=0u+0xFFFFFFFFu; // 8020DD94
  c->lr=0x8020DD9Cu; f_802030B0(c); // 8020DD98
  c->r[3]=c->r[30]+0x00000110u; // 8020DD9C
  c->r[4]=0u+0xFFFFFFFFu; // 8020DDA0
  c->lr=0x8020DDA8u; f_802030B0(c); // 8020DDA4
  c->r[3]=c->r[30]+0x00000090u; // 8020DDA8
  c->r[4]=0u+0xFFFFFFFFu; // 8020DDAC
  c->lr=0x8020DDB4u; f_80205424(c); // 8020DDB0
  c->r[3]=c->r[30]+0x00000010u; // 8020DDB4
  c->r[4]=0u+0xFFFFFFFFu; // 8020DDB8
  c->lr=0x8020DDC0u; f_80205424(c); // 8020DDBC
  c->r[3]=c->r[30]+0x00000004u; // 8020DDC0
  c->r[4]=0u+0xFFFFFFFFu; // 8020DDC4
  c->lr=0x8020DDCCu; f_8020D890(c); // 8020DDC8
  cmps(c,0,(int32_t)c->r[31],0); // 8020DDCC
  if (!crb(c,1)) { goto L_8020DDDC; } // 8020DDD0
  c->r[3]=c->r[30]|c->r[30]; // 8020DDD4
  c->lr=0x8020DDDCu; f_8009230C(c); // 8020DDD8
L_8020DDDC:;
  c->r[3]=c->r[30]|c->r[30]; // 8020DDDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020DDE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020DDE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020DDE8
  c->lr=c->r[0]; // 8020DDEC
  c->r[1]=c->r[1]+0x00000010u; // 8020DDF0
  return; // 8020DDF4
}

// fn_8020DDF8
void f_8020DDF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DDF8
  c->r[0]=c->lr; // 8020DDFC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020DE00
  c->r[11]=c->r[1]+0x00000030u; // 8020DE04
  c->lr=0x8020DE0Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020DE08
  c->r[31]=c->r[3]|c->r[3]; // 8020DE0C
  c->r[29]=c->r[4]|c->r[4]; // 8020DE10
  c->lr=0x8020DE18u; f_8020DE80(c); // 8020DE14
  cmps(c,0,(int32_t)c->r[3],0); // 8020DE18
  c->r[30]=c->r[3]|c->r[3]; // 8020DE1C
  if (!crb(c,2)) { goto L_8020DE64; } // 8020DE20
  c->r[4]=0u+0x802A0000u; // 8020DE24
  c->r[3]=c->r[1]+0x00000008u; // 8020DE28
  c->r[4]=c->r[4]+0x00005054u; // 8020DE2C
  c->lr=0x8020DE34u; f_8020E580(c); // 8020DE30
  c->r[3]=c->r[29]|c->r[29]; // 8020DE34
  c->r[4]=c->r[1]+0x00000008u; // 8020DE38
  c->r[5]=c->r[31]+0x000001FCu; // 8020DE3C
  c->r[6]=0u+0x00000000u; // 8020DE40
  c->lr=0x8020DE48u; f_80210B78(c); // 8020DE44
  c->r[31]=c->r[3]|c->r[3]; // 8020DE48
  c->r[3]=c->r[1]+0x00000008u; // 8020DE4C
  c->r[4]=0u+0xFFFFFFFFu; // 8020DE50
  c->lr=0x8020DE58u; f_802030B0(c); // 8020DE54
  cmps(c,0,(int32_t)c->r[31],0); // 8020DE58
  if (crb(c,2)) { goto L_8020DE64; } // 8020DE5C
  c->r[30]=R32(c->r[29]+0x0000012Cu); // 8020DE60
L_8020DE64:;
  c->r[11]=c->r[1]+0x00000030u; // 8020DE64
  c->r[3]=c->r[30]|c->r[30]; // 8020DE68
  c->lr=0x8020DE70u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020DE6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020DE70
  c->lr=c->r[0]; // 8020DE74
  c->r[1]=c->r[1]+0x00000030u; // 8020DE78
  return; // 8020DE7C
}

// fn_8020DE80
void f_8020DE80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020DE80
  c->r[0]=c->lr; // 8020DE84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020DE88
  c->r[11]=c->r[1]+0x00000020u; // 8020DE8C
  c->lr=0x8020DE94u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020DE90
  c->r[29]=c->r[4]|c->r[4]; // 8020DE94
  c->r[31]=0u+0x802A0000u; // 8020DE98
  c->r[4]=R8(c->r[3]+0x000000E6u); // 8020DE9C
  c->r[28]=c->r[3]|c->r[3]; // 8020DEA0
  c->r[30]=c->r[3]+0x00000120u; // 8020DEA4
  c->r[3]=c->r[29]|c->r[29]; // 8020DEA8
  c->r[31]=c->r[31]+0x00004E60u; // 8020DEAC
  c->lr=0x8020DEB4u; f_802133A4(c); // 8020DEB0
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 8020DEB4
  cmps(c,0,(int32_t)c->r[0],-4015); // 8020DEB8
  if (!crb(c,2)) { goto L_8020DF30; } // 8020DEBC
  c->r[3]=c->r[29]+0x00000144u; // 8020DEC0
  c->r[4]=c->r[31]+0x00000227u; // 8020DEC4
  c->lr=0x8020DECCu; f_8020D458(c); // 8020DEC8
  cmps(c,0,(int32_t)c->r[3],0); // 8020DECC
  if (!crb(c,2)) { goto L_8020DEE8; } // 8020DED0
  c->r[3]=c->r[29]+0x00000144u; // 8020DED4
  c->r[4]=c->r[31]+0x0000022Bu; // 8020DED8
  c->lr=0x8020DEE0u; f_8020D458(c); // 8020DEDC
  cmps(c,0,(int32_t)c->r[3],0); // 8020DEE0
  if (crb(c,2)) { goto L_8020DF30; } // 8020DEE4
L_8020DEE8:;
  c->r[3]=c->r[28]+0x000000E8u; // 8020DEE8
  c->r[4]=c->r[29]+0x00000144u; // 8020DEEC
  c->lr=0x8020DEF4u; f_802042D0(c); // 8020DEF0
  c->r[3]=c->r[28]+0x000000F4u; // 8020DEF4
  c->r[4]=c->r[29]+0x00000150u; // 8020DEF8
  c->lr=0x8020DF00u; f_802042D0(c); // 8020DEFC
  c->r[30]=0u+0x00000000u; // 8020DF00
  c->r[3]=c->r[29]+0x00000144u; // 8020DF04
  W32(c->r[29]+0x0000012Cu,c->r[30]); // 8020DF08
  c->lr=0x8020DF10u; f_80204658(c); // 8020DF0C
  c->r[3]=c->r[29]+0x00000150u; // 8020DF10
  c->lr=0x8020DF18u; f_80204658(c); // 8020DF14
  c->r[3]=R32(c->r[28]+0x00000000u); // 8020DF18
  c->r[4]=c->r[31]+0x0000022Fu; // 8020DF1C
  c->r[5]=0u+0x00000000u; // 8020DF20
  c->r[3]=R32(c->r[3]+0x00000004u); // 8020DF24
  c->lr=0x8020DF2Cu; f_80206A64(c); // 8020DF28
  goto L_8020DF3C; // 8020DF2C
L_8020DF30:;
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 8020DF30
  cmps(c,0,(int32_t)c->r[0],0); // 8020DF34
  if (!crb(c,2)) { goto L_8020DF64; } // 8020DF38
L_8020DF3C:;
  c->r[0]=R8(c->r[28]+0x00000100u); // 8020DF3C
  cmps(c,0,(int32_t)c->r[0],0); // 8020DF40
  if (crb(c,2)) { goto L_8020DF64; } // 8020DF44
  c->r[3]=c->r[29]|c->r[29]; // 8020DF48
  c->r[5]=c->r[30]|c->r[30]; // 8020DF4C
  c->r[6]=c->r[28]+0x00000104u; // 8020DF50
  c->r[7]=c->r[28]+0x00000110u; // 8020DF54
  c->r[8]=c->r[28]+0x0000011Cu; // 8020DF58
  c->r[4]=0u+0x00000001u; // 8020DF5C
  c->lr=0x8020DF64u; f_8021138C(c); // 8020DF60
L_8020DF64:;
  c->r[11]=c->r[1]+0x00000020u; // 8020DF64
  c->r[3]=R32(c->r[29]+0x0000012Cu); // 8020DF68
  c->lr=0x8020DF70u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020DF6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020DF70
  c->lr=c->r[0]; // 8020DF74
  c->r[1]=c->r[1]+0x00000020u; // 8020DF78
  return; // 8020DF7C
}

// fn_8020DF80
void f_8020DF80(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 8020DF80
  c->r[3]=0u+0x00000000u; // 8020DF84
  c->r[6]=0u+0x00000001u; // 8020DF88
  c->r[0]=R8(c->r[5]+0x00000232u); // 8020DF8C
  cmps(c,0,(int32_t)c->r[0],0); // 8020DF90
  if (crb(c,2)) return; // 8020DF94
  c->r[0]=R8(c->r[5]+0x000001F8u); // 8020DF98
  cmps(c,0,(int32_t)c->r[0],0); // 8020DF9C
  if (crb(c,2)) return; // 8020DFA0
  c->r[0]=R8(c->r[5]+0x000001F9u); // 8020DFA4
  cmps(c,0,(int32_t)c->r[0],0); // 8020DFA8
  if (!crb(c,2)) return; // 8020DFAC
  c->r[0]=R32(c->r[5]+0x000001DCu); // 8020DFB0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8020DFB4
  if (crb(c,2)) return; // 8020DFB8
  c->r[7]=0u+0x00000000u; // 8020DFBC
  goto L_8020DFE8; // 8020DFC0
L_8020DFC4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8020DFC4
  cmps(c,0,(int32_t)c->r[0],48); // 8020DFC8
  if (crb(c,2)) { goto L_8020DFE0; } // 8020DFCC
  cmps(c,0,(int32_t)c->r[0],46); // 8020DFD0
  if (crb(c,2)) { goto L_8020DFE0; } // 8020DFD4
  c->r[6]=0u+0x00000000u; // 8020DFD8
  goto L_8020DFFC; // 8020DFDC
L_8020DFE0:;
  c->r[7]=c->r[7]+0x00000001u; // 8020DFE0
  c->r[4]=c->r[4]+0x00000001u; // 8020DFE4
L_8020DFE8:;
  cmpu(c,0,c->r[7],0x00000020u); // 8020DFE8
  if (!crb(c,0)) { goto L_8020DFFC; } // 8020DFEC
  c->r[5]=R8(c->r[4]+0x00000000u); // 8020DFF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 8020DFF4
  if (!crb(c,2)) { IRQCHK(c); goto L_8020DFC4; } // 8020DFF8
L_8020DFFC:;
  cmps(c,0,(int32_t)c->r[6],0); // 8020DFFC
  if (!crb(c,2)) return; // 8020E000
  c->r[3]=0u+0xFFFFF012u; // 8020E004
  return; // 8020E008
}

// fn_8020E00C
void f_8020E00C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8020E00C
  return; // 8020E010
}

// fn_8020E014
void f_8020E014(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x0000012Cu; // 8020E014
  f_8020DF80(c); return; // 8020E018
}

// fn_8020E01C
void f_8020E01C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E01C
  c->r[0]=c->lr; // 8020E020
  W32(c->r[1]+0x00000204u,c->r[0]); // 8020E024
  c->r[11]=c->r[1]+0x00000200u; // 8020E028
  c->lr=0x8020E030u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020E02C
  c->r[31]=c->r[1]|c->r[1]; // 8020E030
  c->r[9]=0u+0x80270000u; // 8020E034
  c->r[30]=0u+0x802A0000u; // 8020E038
  c->r[9]=c->r[9]+0x00004908u; // 8020E03C
  c->r[0]=0u+0x00000020u; // 8020E040
  c->r[25]=c->r[4]|c->r[4]; // 8020E044
  c->r[27]=c->r[5]|c->r[5]; // 8020E048
  c->r[26]=c->r[3]|c->r[3]; // 8020E04C
  c->r[28]=c->r[7]|c->r[7]; // 8020E050
  c->r[29]=c->r[8]|c->r[8]; // 8020E054
  W32(c->r[31]+0x00000034u,c->r[1]); // 8020E058
  c->r[30]=c->r[30]+0x00004E60u; // 8020E05C
  c->r[5]=c->r[31]+0x00000077u; // 8020E060
  c->r[4]=c->r[9]+0xFFFFFFFFu; // 8020E064
  c->ctr=c->r[0]; // 8020E068
L_8020E06C:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 8020E06C
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 8020E070
  W8(c->r[5]+0x00000001u,c->r[3]); // 8020E074
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 8020E078
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020E06C; } // 8020E07C
  c->r[3]=c->r[31]+0x00000078u; // 8020E080
  c->r[5]=c->r[30]+0x00000231u; // 8020E084
  c->r[4]=0u+0x00000020u; // 8020E088
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020E08C
  c->lr=0x8020E094u; f_80112920(c); // 8020E090
  c->r[3]=0u+0x00000000u; // 8020E094
  c->r[0]=0u+0x00000020u; // 8020E098
  W8(c->r[31]+0x00000097u,c->r[3]); // 8020E09C
  c->r[5]=c->r[31]+0x00000037u; // 8020E0A0
  c->r[4]=c->r[31]+0x00000077u; // 8020E0A4
  c->ctr=c->r[0]; // 8020E0A8
L_8020E0AC:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 8020E0AC
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 8020E0B0
  W8(c->r[5]+0x00000001u,c->r[3]); // 8020E0B4
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 8020E0B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020E0AC; } // 8020E0BC
  W32(c->r[1]+0x00000008u,c->r[29]); // 8020E0C0
  c->r[0]=0u+0x00000000u; // 8020E0C4
  c->r[6]=c->r[25]|c->r[25]; // 8020E0C8
  c->r[5]=c->r[26]|c->r[26]; // 8020E0CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8020E0D0
  c->r[7]=c->r[27]|c->r[27]; // 8020E0D4
  c->r[10]=c->r[28]|c->r[28]; // 8020E0D8
  c->r[3]=c->r[31]+0x000000B8u; // 8020E0DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8020E0E0
  c->r[8]=c->r[31]+0x00000038u; // 8020E0E4
  c->r[9]=0u+0x00000000u; // 8020E0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020E0EC
  W32(c->r[1]+0x00000018u,c->r[0]); // 8020E0F0
  c->lr=0x8020E0F8u; f_8020CAB8(c); // 8020E0F4
  c->r[25]=0u+0x80380000u; // 8020E0F8
  c->r[3]=R32(c->r[25]+0x000025E8u); // 8020E0FC
  cmps(c,0,(int32_t)c->r[3],0); // 8020E100
  if (!crb(c,2)) { goto L_8020E120; } // 8020E104
  c->r[0]=0u+0xFFFFFFFFu; // 8020E108
  c->r[3]=c->r[31]+0x000000B8u; // 8020E10C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020E110
  c->lr=0x8020E118u; f_8020E234(c); // 8020E114
  c->r[3]=0u+0xFFFFF037u; // 8020E118
  goto L_8020E214; // 8020E11C
L_8020E120:;
  c->r[0]=R8(c->r[3]+0x0000016Cu); // 8020E120
  cmps(c,0,(int32_t)c->r[0],0); // 8020E124
  if (!crb(c,2)) { goto L_8020E144; } // 8020E128
  c->r[0]=0u+0xFFFFFFFFu; // 8020E12C
  c->r[3]=c->r[31]+0x000000B8u; // 8020E130
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020E134
  c->lr=0x8020E13Cu; f_8020E234(c); // 8020E138
  c->r[3]=0u+0xFFFFF01Bu; // 8020E13C
  goto L_8020E214; // 8020E140
L_8020E144:;
  c->r[3]=c->r[3]+0x000000B8u; // 8020E144
  c->lr=0x8020E14Cu; f_802020A8(c); // 8020E148
  c->r[0]=cntlz(c->r[3]); // 8020E14C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020E150
  if (crb(c,2)) { goto L_8020E170; } // 8020E154
  c->r[0]=0u+0xFFFFFFFFu; // 8020E158
  c->r[3]=c->r[31]+0x000000B8u; // 8020E15C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020E160
  c->lr=0x8020E168u; f_8020E234(c); // 8020E164
  c->r[3]=0u+0xFFFFF036u; // 8020E168
  goto L_8020E214; // 8020E16C
L_8020E170:;
  c->r[26]=R32(c->r[31]+0x000001D0u); // 8020E170
  cmps(c,0,(int32_t)c->r[26],0); // 8020E174
  if (crb(c,2)) { goto L_8020E194; } // 8020E178
  c->r[0]=0u+0xFFFFFFFFu; // 8020E17C
  c->r[3]=c->r[31]+0x000000B8u; // 8020E180
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020E184
  c->lr=0x8020E18Cu; f_8020E234(c); // 8020E188
  c->r[3]=c->r[26]|c->r[26]; // 8020E18C
  goto L_8020E214; // 8020E190
L_8020E194:;
  c->r[4]=0u+0x80380000u; // 8020E194
  c->r[3]=R32(c->r[25]+0x000025E8u); // 8020E198
  c->r[4]=R32(c->r[4]+0x000031B0u); // 8020E19C
  c->r[5]=c->r[31]+0x000000B8u; // 8020E1A0
  c->lr=0x8020E1A8u; f_80204014(c); // 8020E1A4
  c->r[0]=0u+0xFFFFFFFFu; // 8020E1A8
  c->r[25]=c->r[3]|c->r[3]; // 8020E1AC
  c->r[3]=c->r[31]+0x000000B8u; // 8020E1B0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020E1B4
  c->lr=0x8020E1BCu; f_8020E234(c); // 8020E1B8
  c->r[3]=c->r[25]|c->r[25]; // 8020E1BC
  goto L_8020E214; // 8020E1C0
  c->r[4]=c->r[30]+0x0000005Du; // 8020E1C4
  c->r[3]=0u+0x00000001u; // 8020E1C8
  c->r[5]=0u+0x0000025Cu; // 8020E1CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020E1D0
  c->lr=0x8020E1D8u; f_8020B328(c); // 8020E1D4
  c->r[25]=0u+0xFFFFF05Bu; // 8020E1D8
  goto L_8020E1F8; // 8020E1DC
  c->r[4]=c->r[30]+0x000000C4u; // 8020E1E0
  c->r[3]=0u+0x00000001u; // 8020E1E4
  c->r[5]=0u+0x0000025Cu; // 8020E1E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020E1EC
  c->lr=0x8020E1F4u; f_8020B328(c); // 8020E1F0
  c->r[25]=0u+0xFFFFF05Fu; // 8020E1F4
L_8020E1F8:;
  c->r[3]=c->r[31]+0x00000020u; // 8020E1F8
  c->lr=0x8020E200u; f_8010BF74(c); // 8020E1FC
  c->r[0]=c->r[0]|0x00000000u; // 8020E200
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020E204
  c->r[1]=R32(c->r[31]+0x00000034u); // 8020E208
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020E20C
  c->r[3]=c->r[25]|c->r[25]; // 8020E210
L_8020E214:;
  c->r[10]=c->r[31]|c->r[31]; // 8020E214
  c->r[11]=c->r[10]+0x00000200u; // 8020E218
  c->lr=0x8020E220u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020E21C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020E220
  c->r[0]=R32(c->r[10]+0x00000004u); // 8020E224
  c->r[1]=c->r[10]|c->r[10]; // 8020E228
  c->lr=c->r[0]; // 8020E22C
  return; // 8020E230
}

// dtor_8020E234
void f_8020E234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E234
  c->r[0]=c->lr; // 8020E238
  cmps(c,0,(int32_t)c->r[3],0); // 8020E23C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020E240
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020E244
  c->r[31]=c->r[4]|c->r[4]; // 8020E248
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020E24C
  c->r[30]=c->r[3]|c->r[3]; // 8020E250
  if (crb(c,2)) { goto L_8020E298; } // 8020E254
  c->r[4]=0u+0xFFFFFFFFu; // 8020E258
  c->r[3]=c->r[3]+0x0000010Cu; // 8020E25C
  c->lr=0x8020E264u; f_802030B0(c); // 8020E260
  c->r[3]=c->r[30]+0x00000100u; // 8020E264
  c->r[4]=0u+0xFFFFFFFFu; // 8020E268
  c->lr=0x8020E270u; f_802030B0(c); // 8020E26C
  c->r[3]=c->r[30]+0x000000F4u; // 8020E270
  c->r[4]=0u+0xFFFFFFFFu; // 8020E274
  c->lr=0x8020E27Cu; f_802030B0(c); // 8020E278
  c->r[3]=c->r[30]|c->r[30]; // 8020E27C
  c->r[4]=0u+0x00000000u; // 8020E280
  c->lr=0x8020E288u; f_8020CD10(c); // 8020E284
  cmps(c,0,(int32_t)c->r[31],0); // 8020E288
  if (!crb(c,1)) { goto L_8020E298; } // 8020E28C
  c->r[3]=c->r[30]|c->r[30]; // 8020E290
  c->lr=0x8020E298u; f_8009230C(c); // 8020E294
L_8020E298:;
  c->r[3]=c->r[30]|c->r[30]; // 8020E298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020E29C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020E2A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020E2A4
  c->lr=c->r[0]; // 8020E2A8
  c->r[1]=c->r[1]+0x00000010u; // 8020E2AC
  return; // 8020E2B0
}

// fn_8020E2B4
void f_8020E2B4(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 8020E2B4
  c->r[8]=0u+0x00000000u; // 8020E2B8
  f_8020E01C(c); return; // 8020E2BC
}

// fn_8020E2C0
void f_8020E2C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E2C0
  c->r[0]=c->lr; // 8020E2C4
  cmps(c,0,(int32_t)c->r[3],0); // 8020E2C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020E2CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020E2D0
  c->r[31]=c->r[4]|c->r[4]; // 8020E2D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020E2D8
  c->r[30]=c->r[3]|c->r[3]; // 8020E2DC
  if (crb(c,2)) { goto L_8020E34C; } // 8020E2E0
  c->r[4]=0u+0xFFFFFFFFu; // 8020E2E4
  c->r[3]=c->r[3]+0x00000110u; // 8020E2E8
  c->lr=0x8020E2F0u; f_802030B0(c); // 8020E2EC
  c->r[3]=c->r[30]+0x00000104u; // 8020E2F0
  c->r[4]=0u+0xFFFFFFFFu; // 8020E2F4
  c->lr=0x8020E2FCu; f_8020DCB4(c); // 8020E2F8
  c->r[3]=c->r[30]+0x000000F4u; // 8020E2FC
  c->r[4]=0u+0xFFFFFFFFu; // 8020E300
  c->lr=0x8020E308u; f_802030B0(c); // 8020E304
  c->r[3]=c->r[30]+0x000000E8u; // 8020E308
  c->r[4]=0u+0xFFFFFFFFu; // 8020E30C
  c->lr=0x8020E314u; f_802030B0(c); // 8020E310
  cmps(c,0,(int32_t)c->r[30],0); // 8020E314
  if (crb(c,2)) { goto L_8020E33C; } // 8020E318
  c->r[3]=c->r[30]+0x000000D0u; // 8020E31C
  c->r[4]=0u+0xFFFFFFFFu; // 8020E320
  c->lr=0x8020E328u; f_802030B0(c); // 8020E324
  cmps(c,0,(int32_t)c->r[30],0); // 8020E328
  if (crb(c,2)) { goto L_8020E33C; } // 8020E32C
  c->r[3]=c->r[30]+0x00000008u; // 8020E330
  c->r[4]=0u+0xFFFFFFFFu; // 8020E334
  c->lr=0x8020E33Cu; f_802030B0(c); // 8020E338
L_8020E33C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020E33C
  if (!crb(c,1)) { goto L_8020E34C; } // 8020E340
  c->r[3]=c->r[30]|c->r[30]; // 8020E344
  c->lr=0x8020E34Cu; f_8020ECE0(c); // 8020E348
L_8020E34C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020E34C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020E350
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020E354
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020E358
  c->lr=c->r[0]; // 8020E35C
  c->r[1]=c->r[1]+0x00000010u; // 8020E360
  return; // 8020E364
}

// fn_8020E368
void f_8020E368(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E368
  c->r[0]=c->lr; // 8020E36C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020E370
  c->r[11]=c->r[1]+0x00000020u; // 8020E374
  c->lr=0x8020E37Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020E378
  cmps(c,0,(int32_t)c->r[3],0); // 8020E37C
  c->r[29]=c->r[3]|c->r[3]; // 8020E380
  c->r[30]=c->r[4]|c->r[4]; // 8020E384
  if (crb(c,2)) { goto L_8020E3E8; } // 8020E388
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020E38C
  cmps(c,0,(int32_t)c->r[0],0); // 8020E390
  if (crb(c,2)) { goto L_8020E3CC; } // 8020E394
  c->lr=0x8020E39Cu; f_8020CF80(c); // 8020E398
  c->r[5]=R32(c->r[29]+0x00000008u); // 8020E39C
  c->r[4]=0u+0x802A0000u; // 8020E3A0
  c->r[31]=R32(c->r[29]+0x00000000u); // 8020E3A4
  c->r[4]=c->r[4]+0x00005444u; // 8020E3A8
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8020E3AC
  c->r[3]=0u+0x00000006u; // 8020E3B0
  c->r[8]=c->r[31]|c->r[31]; // 8020E3B4
  c->r[6]=0u+0x0000000Cu; // 8020E3B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020E3BC
  c->lr=0x8020E3C4u; f_8020B328(c); // 8020E3C0
  c->r[3]=c->r[31]|c->r[31]; // 8020E3C4
  c->lr=0x8020E3CCu; f_8020EB2C(c); // 8020E3C8
L_8020E3CC:;
  c->r[3]=c->r[29]+0x00000008u; // 8020E3CC
  c->r[4]=0u+0xFFFFFFFFu; // 8020E3D0
  c->lr=0x8020E3D8u; f_8020DC18(c); // 8020E3D4
  cmps(c,0,(int32_t)c->r[30],0); // 8020E3D8
  if (!crb(c,1)) { goto L_8020E3E8; } // 8020E3DC
  c->r[3]=c->r[29]|c->r[29]; // 8020E3E0
  c->lr=0x8020E3E8u; f_8009230C(c); // 8020E3E4
L_8020E3E8:;
  c->r[11]=c->r[1]+0x00000020u; // 8020E3E8
  c->r[3]=c->r[29]|c->r[29]; // 8020E3EC
  c->lr=0x8020E3F4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020E3F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020E3F4
  c->lr=c->r[0]; // 8020E3F8
  c->r[1]=c->r[1]+0x00000020u; // 8020E3FC
  return; // 8020E400
}

// fn_8020E404
void f_8020E404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E404
  c->r[0]=c->lr; // 8020E408
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020E40C
  c->r[11]=c->r[1]+0x00000020u; // 8020E410
  c->lr=0x8020E418u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020E414
  cmps(c,0,(int32_t)c->r[3],0); // 8020E418
  c->r[29]=c->r[3]|c->r[3]; // 8020E41C
  c->r[30]=c->r[4]|c->r[4]; // 8020E420
  if (crb(c,2)) { goto L_8020E488; } // 8020E424
  c->r[31]=R32(c->r[3]+0x00000000u); // 8020E428
  cmps(c,0,(int32_t)c->r[31],0); // 8020E42C
  if (crb(c,2)) { goto L_8020E46C; } // 8020E430
  c->r[0]=R32(c->r[3]+0x00000004u); // 8020E434
  c->r[4]=0u+0x802A0000u; // 8020E438
  c->r[5]=R32(c->r[3]+0x00000008u); // 8020E43C
  c->r[8]=c->r[31]|c->r[31]; // 8020E440
  c->r[0]=c->r[0]-c->r[0]; // 8020E444
  c->r[4]=c->r[4]+0x00005444u; // 8020E448
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020E44C
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8020E450
  c->r[3]=0u+0x00000006u; // 8020E454
  c->r[6]=0u+0x00000004u; // 8020E458
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020E45C
  c->lr=0x8020E464u; f_8020B328(c); // 8020E460
  c->r[3]=c->r[31]|c->r[31]; // 8020E464
  c->lr=0x8020E46Cu; f_8020EB2C(c); // 8020E468
L_8020E46C:;
  c->r[3]=c->r[29]+0x00000008u; // 8020E46C
  c->r[4]=0u+0xFFFFFFFFu; // 8020E470
  c->lr=0x8020E478u; f_8020DB20(c); // 8020E474
  cmps(c,0,(int32_t)c->r[30],0); // 8020E478
  if (!crb(c,1)) { goto L_8020E488; } // 8020E47C
  c->r[3]=c->r[29]|c->r[29]; // 8020E480
  c->lr=0x8020E488u; f_8009230C(c); // 8020E484
L_8020E488:;
  c->r[11]=c->r[1]+0x00000020u; // 8020E488
  c->r[3]=c->r[29]|c->r[29]; // 8020E48C
  c->lr=0x8020E494u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020E490
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020E494
  c->lr=c->r[0]; // 8020E498
  c->r[1]=c->r[1]+0x00000020u; // 8020E49C
  return; // 8020E4A0
}

// fn_8020E4A4
void f_8020E4A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E4A4
  c->r[0]=c->lr; // 8020E4A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020E4AC
  c->r[11]=c->r[1]+0x00000020u; // 8020E4B0
  c->lr=0x8020E4B8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020E4B4
  cmps(c,0,(int32_t)c->r[3],0); // 8020E4B8
  c->r[28]=c->r[3]|c->r[3]; // 8020E4BC
  c->r[29]=c->r[4]|c->r[4]; // 8020E4C0
  if (crb(c,2)) { goto L_8020E564; } // 8020E4C4
  c->r[5]=R32(c->r[3]+0x00000000u); // 8020E4C8
  cmps(c,0,(int32_t)c->r[5],0); // 8020E4CC
  if (crb(c,2)) { goto L_8020E548; } // 8020E4D0
  c->r[30]=R32(c->r[3]+0x00000004u); // 8020E4D4
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 8020E4D8
  c->r[0]=c->r[30]-c->r[30]; // 8020E4DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020E4E0
  c->r[31]=c->r[5]+c->r[4]; // 8020E4E4
  goto L_8020E510; // 8020E4E8
L_8020E4EC:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE8u,0); cr0(c,c->r[31]); // 8020E4EC
  if (crb(c,2)) { goto L_8020E50C; } // 8020E4F0
  c->r[3]=c->r[31]+0x0000000Cu; // 8020E4F4
  c->r[4]=0u+0xFFFFFFFFu; // 8020E4F8
  c->lr=0x8020E500u; f_802030B0(c); // 8020E4FC
  c->r[3]=c->r[31]|c->r[31]; // 8020E500
  c->r[4]=0u+0xFFFFFFFFu; // 8020E504
  c->lr=0x8020E50Cu; f_802030B0(c); // 8020E508
L_8020E50C:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8020E50C
L_8020E510:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020E510
  if (!crb(c,2)) { IRQCHK(c); goto L_8020E4EC; } // 8020E514
  c->r[5]=R32(c->r[28]+0x00000008u); // 8020E518
  c->r[4]=0u+0x802A0000u; // 8020E51C
  c->r[30]=R32(c->r[28]+0x00000000u); // 8020E520
  c->r[4]=c->r[4]+0x00005444u; // 8020E524
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 8020E528
  c->r[3]=0u+0x00000006u; // 8020E52C
  c->r[8]=c->r[30]|c->r[30]; // 8020E530
  c->r[6]=0u+0x00000018u; // 8020E534
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020E538
  c->lr=0x8020E540u; f_8020B328(c); // 8020E53C
  c->r[3]=c->r[30]|c->r[30]; // 8020E540
  c->lr=0x8020E548u; f_8020EB2C(c); // 8020E544
L_8020E548:;
  c->r[3]=c->r[28]+0x00000008u; // 8020E548
  c->r[4]=0u+0xFFFFFFFFu; // 8020E54C
  c->lr=0x8020E554u; f_8020D7F4(c); // 8020E550
  cmps(c,0,(int32_t)c->r[29],0); // 8020E554
  if (!crb(c,1)) { goto L_8020E564; } // 8020E558
  c->r[3]=c->r[28]|c->r[28]; // 8020E55C
  c->lr=0x8020E564u; f_8009230C(c); // 8020E560
L_8020E564:;
  c->r[11]=c->r[1]+0x00000020u; // 8020E564
  c->r[3]=c->r[28]|c->r[28]; // 8020E568
  c->lr=0x8020E570u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020E56C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020E570
  c->lr=c->r[0]; // 8020E574
  c->r[1]=c->r[1]+0x00000020u; // 8020E578
  return; // 8020E57C
}

// fn_8020E580
void f_8020E580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E580
  c->r[0]=c->lr; // 8020E584
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020E588
  c->r[11]=c->r[1]+0x00000020u; // 8020E58C
  c->lr=0x8020E594u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020E590
  c->r[29]=c->r[3]|c->r[3]; // 8020E594
  c->r[30]=c->r[4]|c->r[4]; // 8020E598
  c->lr=0x8020E5A0u; f_802039C8(c); // 8020E59C
  c->r[3]=c->r[29]|c->r[29]; // 8020E5A0
  c->lr=0x8020E5A8u; f_802039CC(c); // 8020E5A4
  c->r[3]=c->r[30]|c->r[30]; // 8020E5A8
  c->lr=0x8020E5B0u; f_80109598(c); // 8020E5AC
  c->r[31]=c->r[3]|c->r[3]; // 8020E5B0
  c->r[3]=c->r[29]|c->r[29]; // 8020E5B4
  c->r[4]=c->r[31]|c->r[31]; // 8020E5B8
  c->lr=0x8020E5C0u; f_80207040(c); // 8020E5BC
  c->r[0]=R8(c->r[1]+0x00000008u); // 8020E5C0
  c->r[3]=c->r[29]|c->r[29]; // 8020E5C4
  c->r[6]=c->r[30]|c->r[30]; // 8020E5C8
  c->r[7]=c->r[30]+c->r[31]; // 8020E5CC
  W8(c->r[1]+0x00000009u,c->r[0]); // 8020E5D0
  c->r[8]=c->r[1]+0x00000009u; // 8020E5D4
  c->r[4]=0u+0x00000000u; // 8020E5D8
  c->r[5]=0u+0x00000000u; // 8020E5DC
  c->lr=0x8020E5E4u; f_80203148(c); // 8020E5E0
  c->r[11]=c->r[1]+0x00000020u; // 8020E5E4
  c->r[3]=c->r[29]|c->r[29]; // 8020E5E8
  c->lr=0x8020E5F0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020E5EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020E5F0
  c->lr=c->r[0]; // 8020E5F4
  c->r[1]=c->r[1]+0x00000020u; // 8020E5F8
  return; // 8020E5FC
}

// fn_8020E600
void f_8020E600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E600
  c->r[0]=c->lr; // 8020E604
  cmps(c,0,(int32_t)c->r[3],0); // 8020E608
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020E60C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020E610
  c->r[31]=c->r[4]|c->r[4]; // 8020E614
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020E618
  c->r[30]=c->r[3]|c->r[3]; // 8020E61C
  if (crb(c,2)) { goto L_8020E694; } // 8020E620
  c->r[4]=0u+0xFFFFFFFFu; // 8020E624
  c->r[3]=c->r[3]+0x000001FCu; // 8020E628
  c->lr=0x8020E630u; f_802030B0(c); // 8020E62C
  c->r[3]=c->r[30]+0x000001ECu; // 8020E630
  c->r[4]=0u+0xFFFFFFFFu; // 8020E634
  c->lr=0x8020E63Cu; f_802030B0(c); // 8020E638
  c->r[3]=c->r[30]+0x000001E0u; // 8020E63C
  c->r[4]=0u+0xFFFFFFFFu; // 8020E640
  c->lr=0x8020E648u; f_802030B0(c); // 8020E644
  c->r[3]=c->r[30]+0x000001D4u; // 8020E648
  c->r[4]=0u+0xFFFFFFFFu; // 8020E64C
  c->lr=0x8020E654u; f_802030B0(c); // 8020E650
  c->r[3]=c->r[30]+0x000001C8u; // 8020E654
  c->r[4]=0u+0xFFFFFFFFu; // 8020E658
  c->lr=0x8020E660u; f_802030B0(c); // 8020E65C
  c->r[3]=c->r[30]+0x000001BCu; // 8020E660
  c->r[4]=0u+0xFFFFFFFFu; // 8020E664
  c->lr=0x8020E66Cu; f_802030B0(c); // 8020E668
  c->r[3]=c->r[30]+0x000001B0u; // 8020E66C
  c->r[4]=0u+0xFFFFFFFFu; // 8020E670
  c->lr=0x8020E678u; f_802030B0(c); // 8020E674
  c->r[3]=c->r[30]|c->r[30]; // 8020E678
  c->r[4]=0u+0x00000000u; // 8020E67C
  c->lr=0x8020E684u; f_8020E2C0(c); // 8020E680
  cmps(c,0,(int32_t)c->r[31],0); // 8020E684
  if (!crb(c,1)) { goto L_8020E694; } // 8020E688
  c->r[3]=c->r[30]|c->r[30]; // 8020E68C
  c->lr=0x8020E694u; f_8020ECE0(c); // 8020E690
L_8020E694:;
  c->r[3]=c->r[30]|c->r[30]; // 8020E694
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020E698
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020E69C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020E6A0
  c->lr=c->r[0]; // 8020E6A4
  c->r[1]=c->r[1]+0x00000010u; // 8020E6A8
  return; // 8020E6AC
}

// fn_8020E6B0
void f_8020E6B0(Ctx* __restrict c) {
  f_8020E6B8(c); return; // 8020E6B0
}

// fn_8020E6B4
void f_8020E6B4(Ctx* __restrict c) {
  f_80206C00(c); return; // 8020E6B4
}

// fn_8020E6B8
void f_8020E6B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E6B8
  c->r[0]=c->lr; // 8020E6BC
  W32(c->r[1]+0x00000204u,c->r[0]); // 8020E6C0
  c->r[11]=c->r[1]+0x00000200u; // 8020E6C4
  c->lr=0x8020E6CCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020E6C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020E6CC
  c->r[31]=0u+0x00000000u; // 8020E6D0
  c->r[29]=0u+0x802A0000u; // 8020E6D4
  c->r[26]=c->r[3]|c->r[3]; // 8020E6D8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8020E6DC
  c->r[29]=c->r[29]+0x000057D8u; // 8020E6E0
  c->r[30]=c->r[1]+0x0000002Cu; // 8020E6E4
  c->r[3]=c->r[1]+0x0000003Cu; // 8020E6E8
  W32(c->r[1]+0x00000030u,c->r[31]); // 8020E6EC
  c->r[4]=0u+0x00000001u; // 8020E6F0
  c->r[5]=0u+0x00000010u; // 8020E6F4
  W32(c->r[1]+0x00000034u,c->r[31]); // 8020E6F8
  W32(c->r[1]+0x00000038u,c->r[31]); // 8020E6FC
  c->lr=0x8020E704u; f_8020D8E8(c); // 8020E700
  c->r[3]=c->r[30]+0x00000090u; // 8020E704
  c->r[4]=0u+0x00000001u; // 8020E708
  c->r[5]=0u+0x00000010u; // 8020E70C
  c->lr=0x8020E714u; f_8020D8E8(c); // 8020E710
  c->r[3]=c->r[30]+0x00000110u; // 8020E714
  c->lr=0x8020E71Cu; f_80203990(c); // 8020E718
  c->r[3]=c->r[30]+0x0000011Cu; // 8020E71C
  c->lr=0x8020E724u; f_80203990(c); // 8020E720
  W32(c->r[1]+0x00000154u,c->r[31]); // 8020E724
  c->r[3]=c->r[30]+0x00000138u; // 8020E728
  W32(c->r[1]+0x00000158u,c->r[31]); // 8020E72C
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 8020E730
  W8(c->r[1]+0x00000160u,c->r[31]); // 8020E734
  W8(c->r[1]+0x00000161u,c->r[31]); // 8020E738
  c->lr=0x8020E740u; f_80203990(c); // 8020E73C
  c->r[3]=c->r[30]+0x00000144u; // 8020E740
  c->lr=0x8020E748u; f_80203990(c); // 8020E744
  c->r[3]=c->r[30]+0x00000150u; // 8020E748
  c->lr=0x8020E750u; f_80203990(c); // 8020E74C
  c->r[3]=c->r[30]+0x0000015Cu; // 8020E750
  c->lr=0x8020E758u; f_80203990(c); // 8020E754
  c->r[5]=0u+0x80270000u; // 8020E758
  c->r[4]=0u+0x802A0000u; // 8020E75C
  c->r[5]=c->r[5]+0x0000494Cu; // 8020E760
  c->r[0]=0u+0xFFFFFFFFu; // 8020E764
  c->r[4]=c->r[4]+0x000057BBu; // 8020E768
  W8(c->r[1]+0x00000194u,c->r[31]); // 8020E76C
  c->r[3]=c->r[30]+0x00000198u; // 8020E770
  W32(c->r[1]+0x00000198u,c->r[29]); // 8020E774
  W32(c->r[1]+0x0000019Cu,c->r[5]); // 8020E778
  W32(c->r[1]+0x000001A0u,c->r[4]); // 8020E77C
  W32(c->r[1]+0x000001A4u,c->r[0]); // 8020E780
  W32(c->r[1]+0x000001ACu,c->r[31]); // 8020E784
  W32(c->r[1]+0x000001B0u,c->r[31]); // 8020E788
  W32(c->r[1]+0x000001B4u,c->r[31]); // 8020E78C
  W32(c->r[1]+0x000001B8u,c->r[31]); // 8020E790
  W32(c->r[1]+0x000001BCu,c->r[31]); // 8020E794
  W32(c->r[1]+0x000001C0u,c->r[31]); // 8020E798
  c->lr=0x8020E7A0u; f_80203990(c); // 8020E79C
  c->r[3]=c->r[30]+0x000001A4u; // 8020E7A0
  c->lr=0x8020E7A8u; f_80203990(c); // 8020E7A4
  c->r[3]=0u+0x802A0000u; // 8020E7A8
  c->r[0]=0u+0x00000002u; // 8020E7AC
  c->r[3]=c->r[3]+0x000057B8u; // 8020E7B0
  cmps(c,0,(int32_t)c->r[29],0); // 8020E7B4
  W32(c->r[1]+0x000001DCu,c->r[3]); // 8020E7B8
  c->r[27]=0u+0x00000000u; // 8020E7BC
  c->r[28]=0u+0x00000000u; // 8020E7C0
  c->r[31]=0u+0x00000000u; // 8020E7C4
  W32(c->r[1]+0x000001E0u,c->r[0]); // 8020E7C8
  if (crb(c,2)) { goto L_8020E800; } // 8020E7CC
  c->r[4]=c->r[29]|c->r[29]; // 8020E7D0
  c->r[3]=c->r[1]+0x00000008u; // 8020E7D4
  c->lr=0x8020E7DCu; f_8020E580(c); // 8020E7D8
  c->r[5]=0u+0x802A0000u; // 8020E7DC
  c->r[3]=c->r[1]+0x00000014u; // 8020E7E0
  c->r[4]=c->r[1]+0x00000008u; // 8020E7E4
  c->r[27]=0u+0x00000001u; // 8020E7E8
  c->r[5]=c->r[5]+0x000057AFu; // 8020E7EC
  c->lr=0x8020E7F4u; f_80205F3C(c); // 8020E7F0
  c->r[4]=c->r[1]+0x00000014u; // 8020E7F4
  c->r[28]=0u+0x00000001u; // 8020E7F8
  goto L_8020E818; // 8020E7FC
L_8020E800:;
  c->r[4]=0u+0x802A0000u; // 8020E800
  c->r[3]=c->r[1]+0x00000020u; // 8020E804
  c->r[4]=c->r[4]+0x000057AEu; // 8020E808
  c->lr=0x8020E810u; f_8020E580(c); // 8020E80C
  c->r[31]=0u+0x00000001u; // 8020E810
  c->r[4]=c->r[1]+0x00000020u; // 8020E814
L_8020E818:;
  c->r[3]=c->r[30]+0x00000198u; // 8020E818
  c->lr=0x8020E820u; f_802042D0(c); // 8020E81C
  cmps(c,0,(int32_t)c->r[31],0); // 8020E820
  if (crb(c,2)) { goto L_8020E834; } // 8020E824
  c->r[3]=c->r[1]+0x00000020u; // 8020E828
  c->r[4]=0u+0xFFFFFFFFu; // 8020E82C
  c->lr=0x8020E834u; f_802030B0(c); // 8020E830
L_8020E834:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020E834
  if (crb(c,2)) { goto L_8020E848; } // 8020E838
  c->r[3]=c->r[1]+0x00000014u; // 8020E83C
  c->r[4]=0u+0xFFFFFFFFu; // 8020E840
  c->lr=0x8020E848u; f_802030B0(c); // 8020E844
L_8020E848:;
  cmps(c,0,(int32_t)c->r[27],0); // 8020E848
  if (crb(c,2)) { goto L_8020E85C; } // 8020E84C
  c->r[3]=c->r[1]+0x00000008u; // 8020E850
  c->r[4]=0u+0xFFFFFFFFu; // 8020E854
  c->lr=0x8020E85Cu; f_802030B0(c); // 8020E858
L_8020E85C:;
  c->r[3]=c->r[1]+0x0000002Cu; // 8020E85C
  c->lr=0x8020E864u; f_8020EDF0(c); // 8020E860
  c->r[3]=R32(c->r[26]+0x00000000u); // 8020E864
  c->r[27]=0u+0x802A0000u; // 8020E868
  c->r[27]=c->r[27]+0x000057EAu; // 8020E86C
  c->r[3]=c->r[3]+0x00000208u; // 8020E870
  c->lr=0x8020E878u; f_80203778(c); // 8020E874
  c->r[5]=c->r[3]|c->r[3]; // 8020E878
  c->r[4]=c->r[27]|c->r[27]; // 8020E87C
  c->r[3]=c->r[1]+0x0000002Cu; // 8020E880
  c->lr=0x8020E888u; f_8020FE80(c); // 8020E884
  c->r[3]=c->r[1]+0x0000002Cu; // 8020E888
  c->lr=0x8020E890u; f_8020FA28(c); // 8020E88C
  c->r[4]=R32(c->r[26]+0x00000000u); // 8020E890
  c->r[3]=c->r[1]+0x0000002Cu; // 8020E894
  c->r[4]=c->r[4]+0x0000001Cu; // 8020E898
  c->lr=0x8020E8A0u; f_80210170(c); // 8020E89C
  c->r[0]=R32(c->r[1]+0x00000158u); // 8020E8A0
  cmps(c,0,(int32_t)c->r[0],0); // 8020E8A4
  if (!crb(c,2)) { goto L_8020E8B8; } // 8020E8A8
  c->r[3]=c->r[26]|c->r[26]; // 8020E8AC
  c->r[4]=c->r[1]+0x0000002Cu; // 8020E8B0
  c->lr=0x8020E8B8u; f_8020E8E4(c); // 8020E8B4
L_8020E8B8:;
  c->r[31]=R32(c->r[1]+0x00000158u); // 8020E8B8
  c->r[3]=c->r[1]+0x0000002Cu; // 8020E8BC
  c->r[4]=0u+0xFFFFFFFFu; // 8020E8C0
  c->lr=0x8020E8C8u; f_8020DD0C(c); // 8020E8C4
  c->r[11]=c->r[1]+0x00000200u; // 8020E8C8
  c->r[3]=c->r[31]|c->r[31]; // 8020E8CC
  c->lr=0x8020E8D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020E8D0
  c->r[0]=R32(c->r[1]+0x00000204u); // 8020E8D4
  c->lr=c->r[0]; // 8020E8D8
  c->r[1]=c->r[1]+0x00000200u; // 8020E8DC
  return; // 8020E8E0
}

// fn_8020E8E4
void f_8020E8E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E8E4
  c->r[0]=c->lr; // 8020E8E8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8020E8EC
  c->r[11]=c->r[1]+0x00000050u; // 8020E8F0
  c->lr=0x8020E8F8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020E8F4
  c->r[29]=c->r[3]|c->r[3]; // 8020E8F8
  c->r[30]=c->r[4]|c->r[4]; // 8020E8FC
  c->r[3]=c->r[1]+0x0000002Cu; // 8020E900
  c->lr=0x8020E908u; f_80203990(c); // 8020E904
  c->r[3]=c->r[1]+0x00000020u; // 8020E908
  c->lr=0x8020E910u; f_80203990(c); // 8020E90C
  c->r[4]=0u+0x802A0000u; // 8020E910
  c->r[3]=c->r[1]+0x00000014u; // 8020E914
  c->r[4]=c->r[4]+0x000057F7u; // 8020E918
  c->lr=0x8020E920u; f_8020E580(c); // 8020E91C
  c->r[3]=c->r[30]|c->r[30]; // 8020E920
  c->r[4]=c->r[1]+0x00000014u; // 8020E924
  c->r[5]=c->r[1]+0x0000002Cu; // 8020E928
  c->r[6]=0u+0x00000000u; // 8020E92C
  c->lr=0x8020E934u; f_80210B2C(c); // 8020E930
  c->r[31]=c->r[3]|c->r[3]; // 8020E934
  c->r[3]=c->r[1]+0x00000014u; // 8020E938
  c->r[4]=0u+0xFFFFFFFFu; // 8020E93C
  c->lr=0x8020E944u; f_802030B0(c); // 8020E940
  cmps(c,0,(int32_t)c->r[31],0); // 8020E944
  if (!crb(c,2)) { goto L_8020E9BC; } // 8020E948
  c->r[4]=0u+0x802A0000u; // 8020E94C
  c->r[3]=c->r[1]+0x00000008u; // 8020E950
  c->r[4]=c->r[4]+0x0000580Cu; // 8020E954
  c->lr=0x8020E95Cu; f_8020E580(c); // 8020E958
  c->r[3]=c->r[30]|c->r[30]; // 8020E95C
  c->r[4]=c->r[1]+0x00000008u; // 8020E960
  c->r[5]=c->r[1]+0x00000020u; // 8020E964
  c->r[6]=0u+0x00000000u; // 8020E968
  c->lr=0x8020E970u; f_80210B78(c); // 8020E96C
  c->r[31]=c->r[3]|c->r[3]; // 8020E970
  c->r[3]=c->r[1]+0x00000008u; // 8020E974
  c->r[4]=0u+0xFFFFFFFFu; // 8020E978
  c->lr=0x8020E980u; f_802030B0(c); // 8020E97C
  cmps(c,0,(int32_t)c->r[31],0); // 8020E980
  if (!crb(c,2)) { goto L_8020E9BC; } // 8020E984
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020E988
  c->r[4]=c->r[1]+0x00000020u; // 8020E98C
  c->r[3]=c->r[3]+0x00000100u; // 8020E990
  c->lr=0x8020E998u; f_802042D0(c); // 8020E994
  c->r[3]=c->r[1]+0x0000002Cu; // 8020E998
  c->lr=0x8020E9A0u; f_802020A8(c); // 8020E99C
  c->r[0]=cntlz(c->r[3]); // 8020E9A0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020E9A4
  if (!crb(c,2)) { goto L_8020E9BC; } // 8020E9A8
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020E9AC
  c->r[4]=c->r[1]+0x0000002Cu; // 8020E9B0
  c->r[3]=c->r[3]+0x000000F4u; // 8020E9B4
  c->lr=0x8020E9BCu; f_802042D0(c); // 8020E9B8
L_8020E9BC:;
  c->r[31]=R32(c->r[30]+0x0000012Cu); // 8020E9BC
  c->r[3]=c->r[1]+0x00000020u; // 8020E9C0
  c->r[4]=0u+0xFFFFFFFFu; // 8020E9C4
  c->lr=0x8020E9CCu; f_802030B0(c); // 8020E9C8
  c->r[3]=c->r[1]+0x0000002Cu; // 8020E9CC
  c->r[4]=0u+0xFFFFFFFFu; // 8020E9D0
  c->lr=0x8020E9D8u; f_802030B0(c); // 8020E9D4
  c->r[11]=c->r[1]+0x00000050u; // 8020E9D8
  c->r[3]=c->r[31]|c->r[31]; // 8020E9DC
  c->lr=0x8020E9E4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020E9E0
  c->r[0]=R32(c->r[1]+0x00000054u); // 8020E9E4
  c->lr=c->r[0]; // 8020E9E8
  c->r[1]=c->r[1]+0x00000050u; // 8020E9EC
  return; // 8020E9F0
}

// fn_8020E9F4
void f_8020E9F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020E9F4
  c->r[0]=c->lr; // 8020E9F8
  cmps(c,0,(int32_t)c->r[3],0); // 8020E9FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020EA00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020EA04
  c->r[31]=c->r[4]|c->r[4]; // 8020EA08
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020EA0C
  c->r[30]=c->r[3]|c->r[3]; // 8020EA10
  if (crb(c,2)) { goto L_8020EA38; } // 8020EA14
  if (crb(c,2)) { goto L_8020EA28; } // 8020EA18
  c->r[4]=0u+0xFFFFFFFFu; // 8020EA1C
  c->r[3]=c->r[3]+0x00000008u; // 8020EA20
  c->lr=0x8020EA28u; f_802030B0(c); // 8020EA24
L_8020EA28:;
  cmps(c,0,(int32_t)c->r[31],0); // 8020EA28
  if (!crb(c,1)) { goto L_8020EA38; } // 8020EA2C
  c->r[3]=c->r[30]|c->r[30]; // 8020EA30
  c->lr=0x8020EA38u; f_8020ECE0(c); // 8020EA34
L_8020EA38:;
  c->r[3]=c->r[30]|c->r[30]; // 8020EA38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020EA3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020EA40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020EA44
  c->lr=c->r[0]; // 8020EA48
  c->r[1]=c->r[1]+0x00000010u; // 8020EA4C
  return; // 8020EA50
}

// fn_8020EA54
void f_8020EA54(Ctx* __restrict c) {
  return; // 8020EA54
}

// fn_8020EA58
void f_8020EA58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EA58
  c->r[0]=c->lr; // 8020EA5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020EA60
  c->r[11]=c->r[1]+0x00000020u; // 8020EA64
  c->lr=0x8020EA6Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020EA68
  c->r[31]=0u+0x80380000u; // 8020EA6C
  c->r[29]=c->r[3]|c->r[3]; // 8020EA70
  c->r[30]=c->r[4]|c->r[4]; // 8020EA74
  c->r[3]=c->r[31]+0x000031C8u; // 8020EA78
  c->lr=0x8020EA80u; f_80201558(c); // 8020EA7C
  c->r[3]=0u+0x80380000u; // 8020EA80
  c->r[0]=c->r[29]+0x0000001Fu; // 8020EA84
  c->r[12]=R32(c->r[3]+0x000031C0u); // 8020EA88
  c->r[4]=c->r[30]|c->r[30]; // 8020EA8C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8020EA90
  c->ctr=c->r[12]; // 8020EA94
  if (true) { c->lr=0x8020EA9Cu; dispatch(c,c->ctr); } // 8020EA98
  c->r[30]=c->r[3]|c->r[3]; // 8020EA9C
  c->r[3]=c->r[31]+0x000031C8u; // 8020EAA0
  c->lr=0x8020EAA8u; f_802015D0(c); // 8020EAA4
  c->r[11]=c->r[1]+0x00000020u; // 8020EAA8
  c->r[3]=c->r[30]|c->r[30]; // 8020EAAC
  c->lr=0x8020EAB4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020EAB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020EAB4
  c->lr=c->r[0]; // 8020EAB8
  c->r[1]=c->r[1]+0x00000020u; // 8020EABC
  return; // 8020EAC0
}

// fn_8020EAC4
void f_8020EAC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EAC4
  c->r[0]=c->lr; // 8020EAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020EACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020EAD0
  c->r[31]=0u+0x80380000u; // 8020EAD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020EAD8
  c->r[30]=c->r[3]|c->r[3]; // 8020EADC
  c->r[3]=c->r[31]+0x000031C8u; // 8020EAE0
  c->lr=0x8020EAE8u; f_80201558(c); // 8020EAE4
  c->r[3]=0u+0x80380000u; // 8020EAE8
  c->r[0]=c->r[30]+0x0000001Fu; // 8020EAEC
  c->r[12]=R32(c->r[3]+0x000031C0u); // 8020EAF0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8020EAF4
  c->r[4]=0u+0x00000020u; // 8020EAF8
  c->ctr=c->r[12]; // 8020EAFC
  if (true) { c->lr=0x8020EB04u; dispatch(c,c->ctr); } // 8020EB00
  c->r[30]=c->r[3]|c->r[3]; // 8020EB04
  c->r[3]=c->r[31]+0x000031C8u; // 8020EB08
  c->lr=0x8020EB10u; f_802015D0(c); // 8020EB0C
  c->r[3]=c->r[30]|c->r[30]; // 8020EB10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020EB14
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020EB18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020EB1C
  c->lr=c->r[0]; // 8020EB20
  c->r[1]=c->r[1]+0x00000010u; // 8020EB24
  return; // 8020EB28
}

// fn_8020EB2C
void f_8020EB2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EB2C
  c->r[0]=c->lr; // 8020EB30
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020EB34
  c->r[11]=c->r[1]+0x00000030u; // 8020EB38
  c->lr=0x8020EB40u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020EB3C
  c->r[31]=c->r[1]|c->r[1]; // 8020EB40
  cmps(c,0,(int32_t)c->r[3],0); // 8020EB44
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8020EB48
  c->r[29]=c->r[3]|c->r[3]; // 8020EB4C
  if (crb(c,2)) { goto L_8020EBCC; } // 8020EB50
  c->r[30]=0u+0x80380000u; // 8020EB54
  c->r[3]=c->r[30]+0x000031C8u; // 8020EB58
  c->lr=0x8020EB60u; f_80201558(c); // 8020EB5C
  c->r[4]=0u+0x80380000u; // 8020EB60
  c->r[3]=c->r[29]|c->r[29]; // 8020EB64
  c->r[12]=R32(c->r[4]+0x000031C4u); // 8020EB68
  c->ctr=c->r[12]; // 8020EB6C
  if (true) { c->lr=0x8020EB74u; dispatch(c,c->ctr); } // 8020EB70
  c->r[3]=c->r[30]+0x000031C8u; // 8020EB74
  c->lr=0x8020EB7Cu; f_802015D0(c); // 8020EB78
  goto L_8020EBCC; // 8020EB7C
  c->r[4]=0u+0x802A0000u; // 8020EB80
  c->r[3]=0u+0x00000001u; // 8020EB84
  c->r[4]=c->r[4]+0x00005879u; // 8020EB88
  c->r[5]=0u+0x00000056u; // 8020EB8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020EB90
  c->lr=0x8020EB98u; f_8020B328(c); // 8020EB94
  goto L_8020EBB4; // 8020EB98
  c->r[4]=0u+0x802A0000u; // 8020EB9C
  c->r[3]=0u+0x00000001u; // 8020EBA0
  c->r[4]=c->r[4]+0x000058D6u; // 8020EBA4
  c->r[5]=0u+0x00000056u; // 8020EBA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020EBAC
  c->lr=0x8020EBB4u; f_8020B328(c); // 8020EBB0
L_8020EBB4:;
  c->r[3]=c->r[31]+0x00000008u; // 8020EBB4
  c->lr=0x8020EBBCu; f_8010BF74(c); // 8020EBB8
  c->r[0]=c->r[0]|0x00000000u; // 8020EBBC
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020EBC0
  c->r[1]=R32(c->r[31]+0x0000001Cu); // 8020EBC4
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020EBC8
L_8020EBCC:;
  c->r[10]=c->r[31]|c->r[31]; // 8020EBCC
  c->r[11]=c->r[10]+0x00000030u; // 8020EBD0
  c->lr=0x8020EBD8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020EBD4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020EBD8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8020EBDC
  c->r[1]=c->r[10]|c->r[10]; // 8020EBE0
  c->lr=c->r[0]; // 8020EBE4
  return; // 8020EBE8
}

// fn_8020EBEC
void f_8020EBEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EBEC
  c->r[0]=c->lr; // 8020EBF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020EBF4
  c->r[11]=c->r[1]+0x00000020u; // 8020EBF8
  c->lr=0x8020EC00u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020EBFC
  c->r[31]=0u+0x80380000u; // 8020EC00
  c->r[30]=c->r[4]|c->r[4]; // 8020EC04
  c->r[31]=c->r[31]+0x000031C0u; // 8020EC08
  c->r[29]=c->r[3]|c->r[3]; // 8020EC0C
  c->r[3]=c->r[31]+0x00000008u; // 8020EC10
  c->r[4]=0u+0x00000001u; // 8020EC14
  c->r[5]=0u+0x00000000u; // 8020EC18
  c->r[6]=0u+0x00000000u; // 8020EC1C
  c->lr=0x8020EC24u; f_802014E0(c); // 8020EC20
  W32(c->r[31]+0x00000000u,c->r[29]); // 8020EC24
  c->r[11]=c->r[1]+0x00000020u; // 8020EC28
  c->r[3]=0u+0x00000000u; // 8020EC2C
  W32(c->r[31]+0x00000004u,c->r[30]); // 8020EC30
  c->lr=0x8020EC38u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020EC34
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020EC38
  c->lr=c->r[0]; // 8020EC3C
  c->r[1]=c->r[1]+0x00000020u; // 8020EC40
  return; // 8020EC44
}

// fn_8020EC48
void f_8020EC48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EC48
  c->r[0]=c->lr; // 8020EC4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020EC50
  c->r[11]=c->r[1]+0x00000020u; // 8020EC54
  c->lr=0x8020EC5Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020EC58
  c->r[31]=0u+0x802A0000u; // 8020EC5C
  c->r[29]=c->r[3]|c->r[3]; // 8020EC60
  c->r[31]=c->r[31]+0x00005868u; // 8020EC64
  c->lr=0x8020EC6Cu; f_8020EAC4(c); // 8020EC68
  cmps(c,0,(int32_t)c->r[3],0); // 8020EC6C
  c->r[30]=c->r[3]|c->r[3]; // 8020EC70
  if (!crb(c,2)) { goto L_8020ECAC; } // 8020EC74
  c->r[5]=c->r[29]|c->r[29]; // 8020EC78
  c->r[4]=c->r[31]+0x000000C1u; // 8020EC7C
  c->r[3]=0u+0x00000001u; // 8020EC80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020EC84
  c->lr=0x8020EC8Cu; f_8020B328(c); // 8020EC88
  c->r[4]=0u+0x80290000u; // 8020EC8C
  c->r[5]=0u+0x80110000u; // 8020EC90
  c->r[4]=c->r[4]+0x00006158u; // 8020EC94
  c->r[3]=c->r[31]+0x000000D9u; // 8020EC98
  W32(c->r[1]+0x00000008u,c->r[4]); // 8020EC9C
  c->r[4]=c->r[1]+0x00000008u; // 8020ECA0
  c->r[5]=c->r[5]+0xFFFF9768u; // 8020ECA4
  c->lr=0x8020ECACu; f_8010BE30(c); // 8020ECA8
L_8020ECAC:;
  c->r[5]=c->r[29]|c->r[29]; // 8020ECAC
  c->r[6]=c->r[30]|c->r[30]; // 8020ECB0
  c->r[4]=c->r[31]+0x000000FBu; // 8020ECB4
  c->r[3]=0u+0x00000006u; // 8020ECB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020ECBC
  c->lr=0x8020ECC4u; f_8020B328(c); // 8020ECC0
  c->r[11]=c->r[1]+0x00000020u; // 8020ECC4
  c->r[3]=c->r[30]|c->r[30]; // 8020ECC8
  c->lr=0x8020ECD0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020ECCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020ECD0
  c->lr=c->r[0]; // 8020ECD4
  c->r[1]=c->r[1]+0x00000020u; // 8020ECD8
  return; // 8020ECDC
}

// dtor_8020ECE0
void f_8020ECE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020ECE0
  c->r[0]=c->lr; // 8020ECE4
  c->r[4]=0u+0x802A0000u; // 8020ECE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020ECEC
  c->r[4]=c->r[4]+0x00005977u; // 8020ECF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020ECF4
  c->r[31]=c->r[3]|c->r[3]; // 8020ECF8
  c->r[5]=c->r[31]|c->r[31]; // 8020ECFC
  c->r[3]=0u+0x00000006u; // 8020ED00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020ED04
  c->lr=0x8020ED0Cu; f_8020B328(c); // 8020ED08
  c->r[3]=c->r[31]|c->r[31]; // 8020ED0C
  c->lr=0x8020ED14u; f_8020EB2C(c); // 8020ED10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020ED14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020ED18
  c->lr=c->r[0]; // 8020ED1C
  c->r[1]=c->r[1]+0x00000010u; // 8020ED20
  return; // 8020ED24
}

// fn_8020ED28
void f_8020ED28(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 8020ED28
  if (crb(c,2)) { goto L_8020ED38; } // 8020ED2C
  cmpu(c,0,c->r[4],0x00000040u); // 8020ED30
  if (!crb(c,0)) { goto L_8020ED40; } // 8020ED34
L_8020ED38:;
  c->r[3]=0u+0xFFFFF05Cu; // 8020ED38
  return; // 8020ED3C
L_8020ED40:;
  c->r[5]=c->r[3]+0x0000001Fu; // 8020ED40
  c->r[0]=c->r[3]+c->r[4]; // 8020ED44
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFE0u; // 8020ED48
  c->r[3]=0u+0x00000000u; // 8020ED4C
  c->r[5]=c->r[6]+0x0000002Bu; // 8020ED50
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFE0u; // 8020ED54
  c->r[0]=c->r[0]-c->r[5]; // 8020ED58
  W32(c->r[6]+0x00000000u,c->r[5]); // 8020ED5C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020ED60
  W32(c->r[6]+0x00000004u,c->r[0]); // 8020ED64
  W32(c->r[6]+0x00000008u,c->r[4]); // 8020ED68
  return; // 8020ED6C
}

// fn_8020ED70
void f_8020ED70(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 8020ED70
  if (!crb(c,2)) { goto L_8020ED80; } // 8020ED74
  c->r[3]=0u+0x00000000u; // 8020ED78
  return; // 8020ED7C
L_8020ED80:;
  c->r[0]=c->r[3]+0x0000001Fu; // 8020ED80
  c->r[3]=c->r[4]+c->r[6]; // 8020ED84
  c->r[8]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8020ED88
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 8020ED8C
  c->r[9]=R32(c->r[8]+0x00000000u); // 8020ED90
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8020ED94
  c->r[3]=c->r[6]+0xFFFFFFFFu; // 8020ED98
  c->r[0]=R32(c->r[8]+0x00000004u); // 8020ED9C
  c->r[5]=c->r[9]+c->r[5]; // 8020EDA0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8020EDA4
  c->r[4]=c->r[4]&~c->r[3]; // 8020EDA8
  c->r[3]=c->r[5]&~c->r[7]; // 8020EDAC
  c->r[5]=c->r[3]-c->r[9]; // 8020EDB0
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 8020EDB4
  c->r[5]=sraw(c,c->r[5],2); // 8020EDB8
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 8020EDBC
  c->r[4]=c->r[5]+c->r[4]; // 8020EDC0
  cmpu(c,0,c->r[4],c->r[0]); // 8020EDC4
  if (!crb(c,1)) { goto L_8020EDD4; } // 8020EDC8
  c->r[3]=0u+0x00000000u; // 8020EDCC
  return; // 8020EDD0
L_8020EDD4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8020EDD4
  c->r[0]=c->r[9]+c->r[0]; // 8020EDD8
  W32(c->r[8]+0x00000000u,c->r[0]); // 8020EDDC
  c->r[0]=R32(c->r[8]+0x00000004u); // 8020EDE0
  c->r[0]=c->r[0]-c->r[4]; // 8020EDE4
  W32(c->r[8]+0x00000004u,c->r[0]); // 8020EDE8
  return; // 8020EDEC
}

// fn_8020EDF0
void f_8020EDF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFBB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020EDF0
  c->r[0]=c->lr; // 8020EDF4
  W32(c->r[1]+0x00000454u,c->r[0]); // 8020EDF8
  c->r[11]=c->r[1]+0x00000450u; // 8020EDFC
  c->lr=0x8020EE04u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020EE00
  c->r[0]=R32(c->r[3]+0x0000016Cu); // 8020EE04
  c->r[30]=0u+0x80270000u; // 8020EE08
  c->r[31]=0u+0x802A0000u; // 8020EE0C
  c->r[29]=c->r[3]|c->r[3]; // 8020EE10
  cmps(c,0,(int32_t)c->r[0],0); // 8020EE14
  c->r[30]=c->r[30]+0x00004948u; // 8020EE18
  c->r[31]=c->r[31]+0x000059F8u; // 8020EE1C
  if (crb(c,2)) { goto L_8020EE30; } // 8020EE20
  c->r[0]=R32(c->r[3]+0x00000170u); // 8020EE24
  cmps(c,0,(int32_t)c->r[0],0); // 8020EE28
  if (!crb(c,2)) { goto L_8020EE3C; } // 8020EE2C
L_8020EE30:;
  c->r[0]=0u+0xFFFFF05Fu; // 8020EE30
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 8020EE34
  goto L_8020F49C; // 8020EE38
L_8020EE3C:;
  c->lr=0x8020EE40u; f_802017FC(c); // 8020EE3C
  c->r[0]=0u+0x00000000u; // 8020EE40
  c->r[26]=c->r[4]|c->r[4]; // 8020EE44
  W8(c->r[1]+0x00000113u,c->r[0]); // 8020EE48
  c->r[27]=c->r[3]|c->r[3]; // 8020EE4C
  c->r[25]=c->r[1]+0x00000113u; // 8020EE50
  c->r[28]=0u+0x00000030u; // 8020EE54
L_8020EE58:;
  c->r[3]=c->r[27]|c->r[27]; // 8020EE58
  c->r[4]=c->r[26]|c->r[26]; // 8020EE5C
  c->r[6]=0u+0x0000000Au; // 8020EE60
  c->r[5]=0u+0x00000000u; // 8020EE64
  c->lr=0x8020EE6Cu; f_8010A1C0(c); // 8020EE68
  c->r[0]=addc(c,c->r[4],c->r[28],0); // 8020EE6C
  c->r[3]=c->r[27]|c->r[27]; // 8020EE70
  {uint32_t ea=c->r[25]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[25]=ea;} // 8020EE74
  c->r[4]=c->r[26]|c->r[26]; // 8020EE78
  c->r[5]=0u+0x00000000u; // 8020EE7C
  c->r[6]=0u+0x0000000Au; // 8020EE80
  c->lr=0x8020EE88u; f_80109F9C(c); // 8020EE84
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 8020EE88
  c->r[26]=c->r[4]|c->r[4]; // 8020EE8C
  c->r[27]=c->r[3]|c->r[3]; // 8020EE90
  if (!crb(c,2)) { IRQCHK(c); goto L_8020EE58; } // 8020EE94
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020EE98
  c->r[3]=c->r[3]+0x00000194u; // 8020EE9C
  c->lr=0x8020EEA4u; f_80203778(c); // 8020EEA0
  c->r[4]=0u+0x802A0000u; // 8020EEA4
  c->r[28]=0u+0x80390000u; // 8020EEA8
  c->r[6]=R32(c->r[4]+0x00002ED4u); // 8020EEAC
  c->r[7]=c->r[3]|c->r[3]; // 8020EEB0
  c->r[8]=c->r[25]|c->r[25]; // 8020EEB4
  c->r[3]=c->r[28]+0xFFFFF420u; // 8020EEB8
  c->r[5]=c->r[31]+0x00000000u; // 8020EEBC
  c->r[4]=0u+0x00000080u; // 8020EEC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020EEC4
  c->lr=0x8020EECCu; f_80112920(c); // 8020EEC8
  c->r[3]=c->r[29]+0x0000015Cu; // 8020EECC
  c->r[4]=c->r[28]+0xFFFFF420u; // 8020EED0
  c->lr=0x8020EED8u; f_80201DF4(c); // 8020EED4
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020EED8
  c->r[3]=c->r[3]+0x00000194u; // 8020EEDC
  c->lr=0x8020EEE4u; f_80203778(c); // 8020EEE0
  c->r[6]=R32(c->r[29]+0x00000170u); // 8020EEE4
  c->r[0]=c->r[28]+0xFFFFF420u; // 8020EEE8
  c->r[9]=R32(c->r[29]+0x0000016Cu); // 8020EEEC
  c->r[5]=c->r[30]+0x0000000Cu; // 8020EEF0
  c->r[7]=c->r[6]|c->r[6]; // 8020EEF4
  c->r[8]=c->r[6]|c->r[6]; // 8020EEF8
  W32(c->r[1]+0x00000008u,c->r[9]); // 8020EEFC
  c->r[10]=c->r[6]|c->r[6]; // 8020EF00
  c->r[4]=0u+0x00000319u; // 8020EF04
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8020EF08
  c->r[11]=R32(c->r[29]+0x00000174u); // 8020EF0C
  W32(c->r[1]+0x00000010u,c->r[11]); // 8020EF10
  W32(c->r[1]+0x00000014u,c->r[6]); // 8020EF14
  W32(c->r[1]+0x00000018u,c->r[6]); // 8020EF18
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8020EF1C
  W32(c->r[1]+0x00000020u,c->r[6]); // 8020EF20
  W32(c->r[1]+0x00000024u,c->r[6]); // 8020EF24
  W32(c->r[1]+0x00000028u,c->r[3]); // 8020EF28
  c->r[3]=c->r[1]+0x00000114u; // 8020EF2C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 8020EF30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020EF34
  c->lr=0x8020EF3Cu; f_80112920(c); // 8020EF38
  c->r[3]=c->r[1]+0x00000078u; // 8020EF3C
  c->r[4]=c->r[31]+0x00000009u; // 8020EF40
  c->lr=0x8020EF48u; f_8020E580(c); // 8020EF44
  c->r[3]=c->r[1]+0x00000078u; // 8020EF48
  c->lr=0x8020EF50u; f_802020A8(c); // 8020EF4C
  c->r[28]=c->r[3]|c->r[3]; // 8020EF50
  c->r[3]=c->r[29]+0x000000C4u; // 8020EF54
  c->r[4]=c->r[1]+0x00000078u; // 8020EF58
  c->lr=0x8020EF60u; f_802042D0(c); // 8020EF5C
  c->r[3]=c->r[29]+0x000000C4u; // 8020EF60
  c->lr=0x8020EF68u; f_80203778(c); // 8020EF64
  c->r[4]=R8(c->r[29]+0x000000BCu); // 8020EF68
  c->r[5]=c->r[3]+c->r[28]; // 8020EF6C
  W32(c->r[29]+0x000000C0u,c->r[5]); // 8020EF70
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 8020EF74
  if (crb(c,2)) { goto L_8020EF94; } // 8020EF78
  c->r[0]=rotl(c->r[4],0)&0x00000003u; cr0(c,c->r[0]); // 8020EF7C
  W32(c->r[29]+0x000000ACu,c->r[3]); // 8020EF80
  W32(c->r[29]+0x000000A8u,c->r[3]); // 8020EF84
  W32(c->r[29]+0x000000B0u,c->r[5]); // 8020EF88
  if (crb(c,2)) { goto L_8020EF94; } // 8020EF8C
  W32(c->r[29]+0x000000ACu,c->r[5]); // 8020EF90
L_8020EF94:;
  c->r[0]=R8(c->r[29]+0x000000BCu); // 8020EF94
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8020EF98
  if (crb(c,2)) { goto L_8020EFAC; } // 8020EF9C
  W32(c->r[29]+0x0000009Cu,c->r[3]); // 8020EFA0
  W32(c->r[29]+0x000000A0u,c->r[3]); // 8020EFA4
  W32(c->r[29]+0x000000A4u,c->r[5]); // 8020EFA8
L_8020EFAC:;
  c->r[3]=c->r[1]+0x00000078u; // 8020EFAC
  c->r[4]=0u+0xFFFFFFFFu; // 8020EFB0
  c->lr=0x8020EFB8u; f_802030B0(c); // 8020EFB4
  c->r[3]=c->r[29]+0x00000090u; // 8020EFB8
  c->r[4]=c->r[1]+0x00000114u; // 8020EFBC
  c->lr=0x8020EFC4u; f_802050F0(c); // 8020EFC0
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020EFC4
  c->r[3]=c->r[3]+0x000000C4u; // 8020EFC8
  c->lr=0x8020EFD0u; f_802020A8(c); // 8020EFCC
  c->r[0]=cntlz(c->r[3]); // 8020EFD0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020EFD4
  if (!crb(c,2)) { goto L_8020F044; } // 8020EFD8
  c->r[3]=c->r[29]+0x00000090u; // 8020EFDC
  c->r[4]=c->r[31]+0x0000000Au; // 8020EFE0
  c->lr=0x8020EFE8u; f_802050F0(c); // 8020EFE4
  c->r[4]=R32(c->r[29]+0x00000170u); // 8020EFE8
  c->lr=0x8020EFF0u; f_802050F0(c); // 8020EFEC
  c->r[4]=c->r[31]+0x0000000Eu; // 8020EFF0
  c->lr=0x8020EFF8u; f_802050F0(c); // 8020EFF4
  c->r[0]=R8(c->r[29]+0x00000168u); // 8020EFF8
  cmps(c,0,(int32_t)c->r[0],0); // 8020EFFC
  if (crb(c,2)) { goto L_8020F018; } // 8020F000
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F004
  c->r[3]=c->r[29]+0x00000090u; // 8020F008
  c->r[4]=c->r[4]+0x000000D0u; // 8020F00C
  c->lr=0x8020F014u; f_80204D14(c); // 8020F010
  goto L_8020F028; // 8020F014
L_8020F018:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F018
  c->r[3]=c->r[29]+0x00000090u; // 8020F01C
  c->r[4]=c->r[4]+0x000000E8u; // 8020F020
  c->lr=0x8020F028u; f_80204D14(c); // 8020F024
L_8020F028:;
  c->r[3]=c->r[29]+0x00000090u; // 8020F028
  c->r[4]=c->r[31]+0x0000001Cu; // 8020F02C
  c->lr=0x8020F034u; f_802050F0(c); // 8020F030
  c->r[4]=R32(c->r[29]+0x00000170u); // 8020F034
  c->lr=0x8020F03Cu; f_802050F0(c); // 8020F038
  c->r[4]=c->r[31]+0x0000001Fu; // 8020F03C
  c->lr=0x8020F044u; f_802050F0(c); // 8020F040
L_8020F044:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020F044
  c->r[3]=c->r[3]+0x000000B8u; // 8020F048
  c->lr=0x8020F050u; f_802020A8(c); // 8020F04C
  c->r[0]=cntlz(c->r[3]); // 8020F050
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020F054
  if (!crb(c,2)) { goto L_8020F0A0; } // 8020F058
  c->r[25]=R32(c->r[29]+0x00000170u); // 8020F05C
  c->r[3]=c->r[29]+0x00000090u; // 8020F060
  c->r[4]=c->r[31]+0x0000000Au; // 8020F064
  c->lr=0x8020F06Cu; f_802050F0(c); // 8020F068
  c->r[4]=c->r[25]|c->r[25]; // 8020F06C
  c->lr=0x8020F074u; f_802050F0(c); // 8020F070
  c->r[4]=c->r[31]+0x0000002Eu; // 8020F074
  c->lr=0x8020F07Cu; f_802050F0(c); // 8020F078
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F07C
  c->r[4]=c->r[4]+0x000000B8u; // 8020F080
  c->lr=0x8020F088u; f_80204D14(c); // 8020F084
  c->r[4]=c->r[31]+0x0000001Cu; // 8020F088
  c->lr=0x8020F090u; f_802050F0(c); // 8020F08C
  c->r[4]=c->r[25]|c->r[25]; // 8020F090
  c->lr=0x8020F098u; f_802050F0(c); // 8020F094
  c->r[4]=c->r[31]+0x0000003Au; // 8020F098
  c->lr=0x8020F0A0u; f_802050F0(c); // 8020F09C
L_8020F0A0:;
  c->r[25]=R32(c->r[29]+0x00000170u); // 8020F0A0
  c->r[4]=c->r[30]+0x00000008u; // 8020F0A4
  c->r[3]=c->r[25]|c->r[25]; // 8020F0A8
  c->lr=0x8020F0B0u; f_80114288(c); // 8020F0AC
  cmps(c,0,(int32_t)c->r[3],0); // 8020F0B0
  if (crb(c,2)) { goto L_8020F0CC; } // 8020F0B4
  c->r[3]=c->r[25]|c->r[25]; // 8020F0B8
  c->r[4]=c->r[30]+0x00000000u; // 8020F0BC
  c->lr=0x8020F0C4u; f_80114288(c); // 8020F0C0
  cmps(c,0,(int32_t)c->r[3],0); // 8020F0C4
  if (!crb(c,2)) { goto L_8020F184; } // 8020F0C8
L_8020F0CC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020F0CC
  c->r[3]=c->r[3]+0x00000170u; // 8020F0D0
  c->lr=0x8020F0D8u; f_802020A8(c); // 8020F0D4
  c->r[0]=cntlz(c->r[3]); // 8020F0D8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020F0DC
  if (!crb(c,2)) { goto L_8020F128; } // 8020F0E0
  c->r[25]=R32(c->r[29]+0x00000170u); // 8020F0E4
  c->r[3]=c->r[29]+0x00000090u; // 8020F0E8
  c->r[4]=c->r[31]+0x0000000Au; // 8020F0EC
  c->lr=0x8020F0F4u; f_802050F0(c); // 8020F0F0
  c->r[4]=c->r[25]|c->r[25]; // 8020F0F4
  c->lr=0x8020F0FCu; f_802050F0(c); // 8020F0F8
  c->r[4]=c->r[31]+0x00000047u; // 8020F0FC
  c->lr=0x8020F104u; f_802050F0(c); // 8020F100
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F104
  c->r[4]=c->r[4]+0x00000170u; // 8020F108
  c->lr=0x8020F110u; f_80204D14(c); // 8020F10C
  c->r[4]=c->r[31]+0x0000001Cu; // 8020F110
  c->lr=0x8020F118u; f_802050F0(c); // 8020F114
  c->r[4]=c->r[25]|c->r[25]; // 8020F118
  c->lr=0x8020F120u; f_802050F0(c); // 8020F11C
  c->r[4]=c->r[31]+0x00000057u; // 8020F120
  c->lr=0x8020F128u; f_802050F0(c); // 8020F124
L_8020F128:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020F128
  c->r[3]=c->r[3]+0x0000017Cu; // 8020F12C
  c->lr=0x8020F134u; f_802020A8(c); // 8020F130
  c->r[0]=cntlz(c->r[3]); // 8020F134
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8020F138
  if (!crb(c,2)) { goto L_8020F184; } // 8020F13C
  c->r[25]=R32(c->r[29]+0x00000170u); // 8020F140
  c->r[3]=c->r[29]+0x00000090u; // 8020F144
  c->r[4]=c->r[31]+0x0000000Au; // 8020F148
  c->lr=0x8020F150u; f_802050F0(c); // 8020F14C
  c->r[4]=c->r[25]|c->r[25]; // 8020F150
  c->lr=0x8020F158u; f_802050F0(c); // 8020F154
  c->r[4]=c->r[31]+0x00000068u; // 8020F158
  c->lr=0x8020F160u; f_802050F0(c); // 8020F15C
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F160
  c->r[4]=c->r[4]+0x0000017Cu; // 8020F164
  c->lr=0x8020F16Cu; f_80204D14(c); // 8020F168
  c->r[4]=c->r[31]+0x0000001Cu; // 8020F16C
  c->lr=0x8020F174u; f_802050F0(c); // 8020F170
  c->r[4]=c->r[25]|c->r[25]; // 8020F174
  c->lr=0x8020F17Cu; f_802050F0(c); // 8020F178
  c->r[4]=c->r[31]+0x0000006Eu; // 8020F17C
  c->lr=0x8020F184u; f_802050F0(c); // 8020F180
L_8020F184:;
  c->r[25]=R32(c->r[29]+0x00000170u); // 8020F184
  c->r[3]=c->r[29]+0x00000090u; // 8020F188
  c->r[4]=c->r[31]+0x0000000Au; // 8020F18C
  c->lr=0x8020F194u; f_802050F0(c); // 8020F190
  c->r[4]=c->r[25]|c->r[25]; // 8020F194
  c->lr=0x8020F19Cu; f_802050F0(c); // 8020F198
  c->r[4]=c->r[31]+0x00000075u; // 8020F19C
  c->lr=0x8020F1A4u; f_802050F0(c); // 8020F1A0
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F1A4
  c->r[4]=c->r[4]+0x000001B4u; // 8020F1A8
  c->lr=0x8020F1B0u; f_80204D14(c); // 8020F1AC
  c->r[4]=c->r[31]+0x0000001Cu; // 8020F1B0
  c->lr=0x8020F1B8u; f_802050F0(c); // 8020F1B4
  c->r[4]=c->r[25]|c->r[25]; // 8020F1B8
  c->lr=0x8020F1C0u; f_802050F0(c); // 8020F1BC
  c->r[4]=c->r[31]+0x0000007Eu; // 8020F1C0
  c->lr=0x8020F1C8u; f_802050F0(c); // 8020F1C4
  c->r[25]=R32(c->r[29]+0x00000170u); // 8020F1C8
  c->r[3]=c->r[29]+0x00000090u; // 8020F1CC
  c->r[4]=c->r[31]+0x0000000Au; // 8020F1D0
  c->lr=0x8020F1D8u; f_802050F0(c); // 8020F1D4
  c->r[4]=c->r[25]|c->r[25]; // 8020F1D8
  c->lr=0x8020F1E0u; f_802050F0(c); // 8020F1DC
  c->r[4]=c->r[31]+0x00000088u; // 8020F1E0
  c->lr=0x8020F1E8u; f_802050F0(c); // 8020F1E4
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F1E8
  c->r[4]=c->r[4]+0x00000118u; // 8020F1EC
  c->lr=0x8020F1F4u; f_80204D14(c); // 8020F1F0
  c->r[4]=c->r[31]+0x0000001Cu; // 8020F1F4
  c->lr=0x8020F1FCu; f_802050F0(c); // 8020F1F8
  c->r[4]=c->r[25]|c->r[25]; // 8020F1FC
  c->lr=0x8020F204u; f_802050F0(c); // 8020F200
  c->r[4]=c->r[31]+0x00000092u; // 8020F204
  c->lr=0x8020F20Cu; f_802050F0(c); // 8020F208
  c->r[25]=R32(c->r[29]+0x00000170u); // 8020F20C
  c->r[3]=c->r[29]+0x00000090u; // 8020F210
  c->r[4]=c->r[31]+0x0000000Au; // 8020F214
  c->lr=0x8020F21Cu; f_802050F0(c); // 8020F218
  c->r[4]=c->r[25]|c->r[25]; // 8020F21C
  c->lr=0x8020F224u; f_802050F0(c); // 8020F220
  c->r[4]=c->r[31]+0x0000009Du; // 8020F224
  c->lr=0x8020F22Cu; f_802050F0(c); // 8020F228
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F22C
  c->r[4]=c->r[4]+0x0000013Cu; // 8020F230
  c->lr=0x8020F238u; f_80204D14(c); // 8020F234
  c->r[4]=c->r[31]+0x0000001Cu; // 8020F238
  c->lr=0x8020F240u; f_802050F0(c); // 8020F23C
  c->r[4]=c->r[25]|c->r[25]; // 8020F240
  c->lr=0x8020F248u; f_802050F0(c); // 8020F244
  c->r[4]=c->r[31]+0x000000A8u; // 8020F248
  c->lr=0x8020F250u; f_802050F0(c); // 8020F24C
  c->r[25]=R32(c->r[29]+0x00000170u); // 8020F250
  c->r[4]=c->r[30]+0x00000000u; // 8020F254
  c->r[3]=c->r[25]|c->r[25]; // 8020F258
  c->lr=0x8020F260u; f_80114288(c); // 8020F25C
  cmps(c,0,(int32_t)c->r[3],0); // 8020F260
  if (!crb(c,2)) { goto L_8020F28C; } // 8020F264
  c->r[3]=c->r[29]+0x00000090u; // 8020F268
  c->r[4]=c->r[31]+0x000000B4u; // 8020F26C
  c->lr=0x8020F274u; f_802050F0(c); // 8020F270
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020F274
  c->r[4]=c->r[4]+0x00000208u; // 8020F278
  c->lr=0x8020F280u; f_80204D14(c); // 8020F27C
  c->r[4]=c->r[31]+0x000000C5u; // 8020F280
  c->lr=0x8020F288u; f_802050F0(c); // 8020F284
  goto L_8020F2F0; // 8020F288
L_8020F28C:;
  c->r[3]=c->r[25]|c->r[25]; // 8020F28C
  c->r[4]=c->r[30]+0x00000008u; // 8020F290
  c->lr=0x8020F298u; f_80114288(c); // 8020F294
  cmps(c,0,(int32_t)c->r[3],0); // 8020F298
  if (!crb(c,2)) { goto L_8020F2F0; } // 8020F29C
  c->r[3]=R32(c->r[29]+0x00000000u); // 8020F2A0
  c->r[0]=R8(c->r[3]+0x000001F8u); // 8020F2A4
  cmps(c,0,(int32_t)c->r[0],0); // 8020F2A8
  if (crb(c,2)) { goto L_8020F2F0; } // 8020F2AC
  c->r[0]=R8(c->r[3]+0x000001F9u); // 8020F2B0
  cmps(c,0,(int32_t)c->r[0],0); // 8020F2B4
  if (!crb(c,2)) { goto L_8020F2F0; } // 8020F2B8
  c->r[6]=R8(c->r[3]+0x000001E2u); // 8020F2BC
  c->r[3]=c->r[1]+0x000000F0u; // 8020F2C0
  c->r[5]=c->r[31]+0x000000D6u; // 8020F2C4
  c->r[4]=0u+0x00000024u; // 8020F2C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020F2CC
  c->lr=0x8020F2D4u; f_80112920(c); // 8020F2D0
  c->r[3]=c->r[29]+0x00000090u; // 8020F2D4
  c->r[4]=c->r[31]+0x000000D9u; // 8020F2D8
  c->lr=0x8020F2E0u; f_802050F0(c); // 8020F2DC
  c->r[4]=c->r[1]+0x000000F0u; // 8020F2E0
  c->lr=0x8020F2E8u; f_802050F0(c); // 8020F2E4
  c->r[4]=c->r[31]+0x000000E5u; // 8020F2E8
  c->lr=0x8020F2F0u; f_802050F0(c); // 8020F2EC
L_8020F2F0:;
  c->r[3]=c->r[29]+0x0000018Cu; // 8020F2F0
  c->lr=0x8020F2F8u; f_8020F4FC(c); // 8020F2F4
  c->r[4]=R32(c->r[29]+0x0000016Cu); // 8020F2F8
  c->r[3]=c->r[1]+0x0000006Cu; // 8020F2FC
  c->lr=0x8020F304u; f_8020E580(c); // 8020F300
  c->r[3]=c->r[29]+0x0000018Cu; // 8020F304
  c->r[4]=c->r[1]+0x0000006Cu; // 8020F308
  c->lr=0x8020F310u; f_8020F560(c); // 8020F30C
  c->r[3]=c->r[1]+0x0000006Cu; // 8020F310
  c->r[4]=0u+0xFFFFFFFFu; // 8020F314
  c->lr=0x8020F31Cu; f_802030B0(c); // 8020F318
  c->r[4]=R32(c->r[29]+0x000001B0u); // 8020F31C
  c->r[3]=c->r[29]+0x000001A4u; // 8020F320
  c->lr=0x8020F328u; f_80201DF4(c); // 8020F324
  c->r[3]=c->r[1]+0x000000D8u; // 8020F328
  c->r[4]=c->r[31]+0x000000F1u; // 8020F32C
  c->r[5]=c->r[31]+0x000000F8u; // 8020F330
  c->lr=0x8020F338u; f_8020F4B4(c); // 8020F334
  c->r[3]=c->r[29]+0x00000004u; // 8020F338
  c->r[4]=c->r[1]+0x000000D8u; // 8020F33C
  c->lr=0x8020F344u; f_8020F7F8(c); // 8020F340
  c->r[3]=c->r[1]+0x000000D8u; // 8020F344
  c->r[4]=0u+0xFFFFFFFFu; // 8020F348
  c->lr=0x8020F350u; f_8020F790(c); // 8020F34C
  c->r[3]=c->r[1]+0x000000C0u; // 8020F350
  c->r[4]=c->r[31]+0x00000108u; // 8020F354
  c->r[5]=c->r[31]+0x00000117u; // 8020F358
  c->lr=0x8020F360u; f_8020F4B4(c); // 8020F35C
  c->r[3]=c->r[29]+0x00000004u; // 8020F360
  c->r[4]=c->r[1]+0x000000C0u; // 8020F364
  c->lr=0x8020F36Cu; f_8020F7F8(c); // 8020F368
  c->r[3]=c->r[1]+0x000000C0u; // 8020F36C
  c->r[4]=0u+0xFFFFFFFFu; // 8020F370
  c->lr=0x8020F378u; f_8020F790(c); // 8020F374
  c->r[3]=c->r[1]+0x000000A8u; // 8020F378
  c->r[4]=c->r[31]+0x0000011Du; // 8020F37C
  c->r[5]=c->r[31]+0x0000012Au; // 8020F380
  c->lr=0x8020F388u; f_8020F4B4(c); // 8020F384
  c->r[3]=c->r[29]+0x00000004u; // 8020F388
  c->r[4]=c->r[1]+0x000000A8u; // 8020F38C
  c->lr=0x8020F394u; f_8020F7F8(c); // 8020F390
  c->r[3]=c->r[1]+0x000000A8u; // 8020F394
  c->r[4]=0u+0xFFFFFFFFu; // 8020F398
  c->lr=0x8020F3A0u; f_8020F790(c); // 8020F39C
  c->r[3]=c->r[1]+0x00000060u; // 8020F3A0
  c->r[4]=c->r[31]+0x00000142u; // 8020F3A4
  c->lr=0x8020F3ACu; f_8020E580(c); // 8020F3A8
  c->r[5]=R32(c->r[29]+0x00000170u); // 8020F3AC
  c->r[3]=c->r[1]+0x00000054u; // 8020F3B0
  c->r[4]=c->r[1]+0x00000060u; // 8020F3B4
  c->lr=0x8020F3BCu; f_80205F3C(c); // 8020F3B8
  c->r[3]=c->r[1]+0x00000048u; // 8020F3BC
  c->r[4]=c->r[1]+0x00000054u; // 8020F3C0
  c->r[5]=c->r[31]+0x0000014Du; // 8020F3C4
  c->lr=0x8020F3CCu; f_80205F3C(c); // 8020F3C8
  c->r[5]=R32(c->r[29]+0x0000016Cu); // 8020F3CC
  c->r[3]=c->r[1]+0x00000084u; // 8020F3D0
  c->r[4]=c->r[1]+0x00000048u; // 8020F3D4
  c->lr=0x8020F3DCu; f_80205F3C(c); // 8020F3D8
  c->r[3]=c->r[1]+0x00000048u; // 8020F3DC
  c->r[4]=0u+0xFFFFFFFFu; // 8020F3E0
  c->lr=0x8020F3E8u; f_802030B0(c); // 8020F3E4
  c->r[3]=c->r[1]+0x00000054u; // 8020F3E8
  c->r[4]=0u+0xFFFFFFFFu; // 8020F3EC
  c->lr=0x8020F3F4u; f_802030B0(c); // 8020F3F0
  c->r[3]=c->r[1]+0x00000060u; // 8020F3F4
  c->r[4]=0u+0xFFFFFFFFu; // 8020F3F8
  c->lr=0x8020F400u; f_802030B0(c); // 8020F3FC
  c->r[25]=c->r[1]+0x00000090u; // 8020F400
  c->r[4]=c->r[31]+0x0000015Bu; // 8020F404
  c->r[3]=c->r[25]|c->r[25]; // 8020F408
  c->lr=0x8020F410u; f_8020E580(c); // 8020F40C
  c->r[3]=c->r[1]+0x0000009Cu; // 8020F410
  c->r[4]=c->r[1]+0x00000084u; // 8020F414
  c->lr=0x8020F41Cu; f_80206FA4(c); // 8020F418
  c->r[4]=c->r[25]|c->r[25]; // 8020F41C
  c->r[3]=c->r[29]+0x00000004u; // 8020F420
  c->lr=0x8020F428u; f_8020F7F8(c); // 8020F424
  c->r[3]=c->r[25]|c->r[25]; // 8020F428
  c->r[4]=0u+0xFFFFFFFFu; // 8020F42C
  c->lr=0x8020F434u; f_8020F790(c); // 8020F430
  c->r[3]=c->r[29]+0x00000010u; // 8020F434
  c->r[4]=c->r[31]+0x00000166u; // 8020F438
  c->lr=0x8020F440u; f_802050F0(c); // 8020F43C
  c->r[4]=c->r[1]+0x00000084u; // 8020F440
  c->lr=0x8020F448u; f_80204D14(c); // 8020F444
  c->r[4]=c->r[31]+0x00000174u; // 8020F448
  c->lr=0x8020F450u; f_802050F0(c); // 8020F44C
  c->r[4]=R32(c->r[29]+0x0000016Cu); // 8020F450
  c->r[3]=c->r[1]+0x0000003Cu; // 8020F454
  c->lr=0x8020F45Cu; f_8020E580(c); // 8020F458
  c->r[3]=c->r[1]+0x00000030u; // 8020F45C
  c->r[4]=c->r[1]+0x0000003Cu; // 8020F460
  c->r[5]=c->r[31]+0x00000178u; // 8020F464
  c->lr=0x8020F46Cu; f_80205F3C(c); // 8020F468
  c->r[3]=c->r[29]+0x00000198u; // 8020F46C
  c->r[4]=c->r[1]+0x00000030u; // 8020F470
  c->lr=0x8020F478u; f_802042D0(c); // 8020F474
  c->r[3]=c->r[1]+0x00000030u; // 8020F478
  c->r[4]=0u+0xFFFFFFFFu; // 8020F47C
  c->lr=0x8020F484u; f_802030B0(c); // 8020F480
  c->r[3]=c->r[1]+0x0000003Cu; // 8020F484
  c->r[4]=0u+0xFFFFFFFFu; // 8020F488
  c->lr=0x8020F490u; f_802030B0(c); // 8020F48C
  c->r[3]=c->r[1]+0x00000084u; // 8020F490
  c->r[4]=0u+0xFFFFFFFFu; // 8020F494
  c->lr=0x8020F49Cu; f_802030B0(c); // 8020F498
L_8020F49C:;
  c->r[11]=c->r[1]+0x00000450u; // 8020F49C
  c->lr=0x8020F4A4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020F4A0
  c->r[0]=R32(c->r[1]+0x00000454u); // 8020F4A4
  c->lr=c->r[0]; // 8020F4A8
  c->r[1]=c->r[1]+0x00000450u; // 8020F4AC
  return; // 8020F4B0
}

// fn_8020F4B4
void f_8020F4B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F4B4
  c->r[0]=c->lr; // 8020F4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020F4BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020F4C0
  c->r[31]=c->r[5]|c->r[5]; // 8020F4C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020F4C8
  c->r[30]=c->r[3]|c->r[3]; // 8020F4CC
  c->lr=0x8020F4D4u; f_8020E580(c); // 8020F4D0
  c->r[4]=c->r[31]|c->r[31]; // 8020F4D4
  c->r[3]=c->r[30]+0x0000000Cu; // 8020F4D8
  c->lr=0x8020F4E0u; f_8020E580(c); // 8020F4DC
  c->r[3]=c->r[30]|c->r[30]; // 8020F4E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020F4E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020F4E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020F4EC
  c->lr=c->r[0]; // 8020F4F0
  c->r[1]=c->r[1]+0x00000010u; // 8020F4F4
  return; // 8020F4F8
}

// fn_8020F4FC
void f_8020F4FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F4FC
  c->r[0]=c->lr; // 8020F500
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020F504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020F508
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020F50C
  c->r[30]=R32(c->r[3]+0x00000004u); // 8020F510
  c->r[5]=R32(c->r[3]+0x00000000u); // 8020F514
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 8020F518
  c->r[0]=c->r[30]-c->r[30]; // 8020F51C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8020F520
  c->r[31]=c->r[5]+c->r[4]; // 8020F524
  goto L_8020F540; // 8020F528
L_8020F52C:;
  c->r[31]=c->r[31]+0xFFFFFFF4u; // 8020F52C
  c->r[4]=0u+0xFFFFFFFFu; // 8020F530
  c->r[3]=c->r[31]|c->r[31]; // 8020F534
  c->lr=0x8020F53Cu; f_802030B0(c); // 8020F538
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8020F53C
L_8020F540:;
  cmps(c,0,(int32_t)c->r[30],0); // 8020F540
  if (!crb(c,2)) { IRQCHK(c); goto L_8020F52C; } // 8020F544
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020F548
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020F54C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020F550
  c->lr=c->r[0]; // 8020F554
  c->r[1]=c->r[1]+0x00000010u; // 8020F558
  return; // 8020F55C
}

// fn_8020F560
void f_8020F560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F560
  c->r[0]=c->lr; // 8020F564
  W32(c->r[1]+0x00000054u,c->r[0]); // 8020F568
  c->r[11]=c->r[1]+0x00000050u; // 8020F56C
  c->lr=0x8020F574u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020F570
  c->r[5]=R32(c->r[3]+0x00000004u); // 8020F574
  c->r[30]=0u+0x802A0000u; // 8020F578
  c->r[0]=R32(c->r[3]+0x00000008u); // 8020F57C
  c->r[31]=c->r[3]|c->r[3]; // 8020F580
  c->r[26]=c->r[4]|c->r[4]; // 8020F584
  c->r[30]=c->r[30]+0x000059F8u; // 8020F588
  cmpu(c,0,c->r[5],c->r[0]); // 8020F58C
  if (!crb(c,0)) { goto L_8020F5BC; } // 8020F590
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8020F594
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020F598
  c->r[5]=c->r[26]|c->r[26]; // 8020F59C
  c->r[3]=c->r[3]+0x00000008u; // 8020F5A0
  c->r[4]=c->r[4]+c->r[0]; // 8020F5A4
  c->lr=0x8020F5ACu; f_80213D5C(c); // 8020F5A8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8020F5AC
  c->r[0]=c->r[3]+0x00000001u; // 8020F5B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 8020F5B4
  goto L_8020F778; // 8020F5B8
L_8020F5BC:;
  c->r[4]=0u+0x00000001u; // 8020F5BC
  c->lr=0x8020F5C4u; f_802147BC(c); // 8020F5C0
  c->r[4]=0u+0x00000000u; // 8020F5C4
  c->r[0]=c->r[31]+0x00000008u; // 8020F5C8
  W32(c->r[1]+0x00000018u,c->r[4]); // 8020F5CC
  c->r[3]=c->r[31]|c->r[31]; // 8020F5D0
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8020F5D4
  W32(c->r[1]+0x00000020u,c->r[4]); // 8020F5D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020F5DC
  W32(c->r[1]+0x00000028u,c->r[4]); // 8020F5E0
  c->r[4]=R32(c->r[31]+0x00000004u); // 8020F5E4
  c->r[5]=R32(c->r[31]+0x00000008u); // 8020F5E8
  c->r[0]=c->r[4]+0x00000001u; // 8020F5EC
  c->r[4]=c->r[0]-c->r[5]; // 8020F5F0
  c->lr=0x8020F5F8u; f_802147BC(c); // 8020F5F4
  c->r[4]=0u+0x15550000u; // 8020F5F8
  c->r[28]=c->r[3]|c->r[3]; // 8020F5FC
  c->r[0]=c->r[4]+0x00005555u; // 8020F600
  cmpu(c,0,c->r[3],c->r[0]); // 8020F604
  if (!crb(c,1)) { goto L_8020F62C; } // 8020F608
  c->r[3]=c->r[1]+0x0000000Cu; // 8020F60C
  c->r[4]=c->r[30]+0x000001B8u; // 8020F610
  c->lr=0x8020F618u; f_80206F68(c); // 8020F614
  c->r[5]=0u+0x80120000u; // 8020F618
  c->r[4]=c->r[3]|c->r[3]; // 8020F61C
  c->r[3]=c->r[30]+0x00000181u; // 8020F620
  c->r[5]=c->r[5]+0xFFFFD5F8u; // 8020F624
  c->lr=0x8020F62Cu; f_8010BE30(c); // 8020F628
L_8020F62C:;
  c->r[27]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 8020F62C
  c->r[5]=c->r[28]|c->r[28]; // 8020F630
  c->r[4]=c->r[30]+0x000001CCu; // 8020F634
  c->r[3]=0u+0x00000006u; // 8020F638
  c->r[7]=c->r[27]|c->r[27]; // 8020F63C
  c->r[6]=0u+0x0000000Cu; // 8020F640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020F644
  c->lr=0x8020F64Cu; f_8020B328(c); // 8020F648
  c->r[3]=c->r[27]|c->r[27]; // 8020F64C
  c->lr=0x8020F654u; f_8020EAC4(c); // 8020F650
  cmps(c,0,(int32_t)c->r[3],0); // 8020F654
  c->r[29]=c->r[3]|c->r[3]; // 8020F658
  if (!crb(c,2)) { goto L_8020F698; } // 8020F65C
  c->r[5]=c->r[28]|c->r[28]; // 8020F660
  c->r[7]=c->r[27]|c->r[27]; // 8020F664
  c->r[4]=c->r[30]+0x000001F8u; // 8020F668
  c->r[3]=0u+0x00000001u; // 8020F66C
  c->r[6]=0u+0x0000000Cu; // 8020F670
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020F674
  c->lr=0x8020F67Cu; f_8020B328(c); // 8020F678
  c->r[3]=c->r[1]+0x00000008u; // 8020F67C
  c->lr=0x8020F684u; f_80207934(c); // 8020F680
  c->r[5]=0u+0x80110000u; // 8020F684
  c->r[4]=c->r[3]|c->r[3]; // 8020F688
  c->r[3]=c->r[30]+0x00000231u; // 8020F68C
  c->r[5]=c->r[5]+0xFFFF9768u; // 8020F690
  c->lr=0x8020F698u; f_8010BE30(c); // 8020F694
L_8020F698:;
  c->r[5]=c->r[29]|c->r[29]; // 8020F698
  c->r[4]=c->r[30]+0x00000253u; // 8020F69C
  c->r[3]=0u+0x00000006u; // 8020F6A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020F6A4
  c->lr=0x8020F6ACu; f_8020B328(c); // 8020F6A8
  W32(c->r[1]+0x00000018u,c->r[29]); // 8020F6AC
  c->r[5]=c->r[26]|c->r[26]; // 8020F6B0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8020F6B4
  W32(c->r[1]+0x00000020u,c->r[28]); // 8020F6B8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8020F6BC
  c->r[3]=R32(c->r[1]+0x00000024u); // 8020F6C0
  c->r[6]=R32(c->r[31]+0x00000004u); // 8020F6C4
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8020F6C8
  W32(c->r[1]+0x00000028u,c->r[6]); // 8020F6CC
  c->r[0]=c->r[29]+c->r[0]; // 8020F6D0
  c->r[4]=c->r[4]+c->r[0]; // 8020F6D4
  c->lr=0x8020F6DCu; f_80213D5C(c); // 8020F6D8
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8020F6DC
  c->r[0]=R32(c->r[1]+0x00000028u); // 8020F6E0
  c->r[4]=c->r[3]+0x00000001u; // 8020F6E4
  c->r[3]=R32(c->r[1]+0x00000018u); // 8020F6E8
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8020F6EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8020F6F0
  c->r[4]=R32(c->r[31]+0x00000004u); // 8020F6F4
  c->r[29]=c->r[3]+c->r[0]; // 8020F6F8
  c->r[27]=R32(c->r[31]+0x00000000u); // 8020F6FC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8020F700
  c->r[30]=c->r[27]+c->r[0]; // 8020F704
  goto L_8020F73C; // 8020F708
L_8020F70C:;
  c->r[30]=c->r[30]+0xFFFFFFF4u; // 8020F70C
  c->r[29]=c->r[29]+0xFFFFFFF4u; // 8020F710
  c->r[3]=R32(c->r[1]+0x00000024u); // 8020F714
  c->r[5]=c->r[30]|c->r[30]; // 8020F718
  c->r[4]=c->r[29]|c->r[29]; // 8020F71C
  c->lr=0x8020F724u; f_80213D5C(c); // 8020F720
  c->r[4]=R32(c->r[1]+0x00000028u); // 8020F724
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8020F728
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8020F72C
  c->r[0]=c->r[3]+0x00000001u; // 8020F730
  W32(c->r[1]+0x00000028u,c->r[4]); // 8020F734
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8020F738
L_8020F73C:;
  cmpu(c,0,c->r[30],c->r[27]); // 8020F73C
  if (crb(c,1)) { IRQCHK(c); goto L_8020F70C; } // 8020F740
  c->r[3]=c->r[31]+0x00000008u; // 8020F744
  c->r[4]=c->r[1]+0x00000020u; // 8020F748
  c->lr=0x8020F750u; f_80032474(c); // 8020F74C
  c->r[5]=R32(c->r[31]+0x00000000u); // 8020F750
  c->r[3]=c->r[31]+0x00000004u; // 8020F754
  c->r[0]=R32(c->r[1]+0x00000018u); // 8020F758
  c->r[4]=c->r[1]+0x0000001Cu; // 8020F75C
  W32(c->r[31]+0x00000000u,c->r[0]); // 8020F760
  W32(c->r[1]+0x00000018u,c->r[5]); // 8020F764
  c->lr=0x8020F76Cu; f_80032474(c); // 8020F768
  c->r[3]=c->r[1]+0x00000018u; // 8020F76C
  c->r[4]=0u+0xFFFFFFFFu; // 8020F770
  c->lr=0x8020F778u; f_80214C9C(c); // 8020F774
L_8020F778:;
  c->r[11]=c->r[1]+0x00000050u; // 8020F778
  c->lr=0x8020F780u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020F77C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8020F780
  c->lr=c->r[0]; // 8020F784
  c->r[1]=c->r[1]+0x00000050u; // 8020F788
  return; // 8020F78C
}

// dtor_8020F790
void f_8020F790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F790
  c->r[0]=c->lr; // 8020F794
  cmps(c,0,(int32_t)c->r[3],0); // 8020F798
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020F79C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020F7A0
  c->r[31]=c->r[4]|c->r[4]; // 8020F7A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8020F7A8
  c->r[30]=c->r[3]|c->r[3]; // 8020F7AC
  if (crb(c,2)) { goto L_8020F7DC; } // 8020F7B0
  c->r[4]=0u+0xFFFFFFFFu; // 8020F7B4
  c->r[3]=c->r[3]+0x0000000Cu; // 8020F7B8
  c->lr=0x8020F7C0u; f_802030B0(c); // 8020F7BC
  c->r[3]=c->r[30]|c->r[30]; // 8020F7C0
  c->r[4]=0u+0xFFFFFFFFu; // 8020F7C4
  c->lr=0x8020F7CCu; f_802030B0(c); // 8020F7C8
  cmps(c,0,(int32_t)c->r[31],0); // 8020F7CC
  if (!crb(c,1)) { goto L_8020F7DC; } // 8020F7D0
  c->r[3]=c->r[30]|c->r[30]; // 8020F7D4
  c->lr=0x8020F7DCu; f_8009230C(c); // 8020F7D8
L_8020F7DC:;
  c->r[3]=c->r[30]|c->r[30]; // 8020F7DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020F7E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8020F7E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020F7E8
  c->lr=c->r[0]; // 8020F7EC
  c->r[1]=c->r[1]+0x00000010u; // 8020F7F0
  return; // 8020F7F4
}

// fn_8020F7F8
void f_8020F7F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F7F8
  c->r[0]=c->lr; // 8020F7FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8020F800
  c->r[11]=c->r[1]+0x00000050u; // 8020F804
  c->lr=0x8020F80Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020F808
  c->r[5]=R32(c->r[3]+0x00000004u); // 8020F80C
  c->r[30]=0u+0x802A0000u; // 8020F810
  c->r[0]=R32(c->r[3]+0x00000008u); // 8020F814
  c->r[31]=c->r[3]|c->r[3]; // 8020F818
  c->r[26]=c->r[4]|c->r[4]; // 8020F81C
  c->r[30]=c->r[30]+0x000059F8u; // 8020F820
  cmpu(c,0,c->r[5],c->r[0]); // 8020F824
  if (!crb(c,0)) { goto L_8020F854; } // 8020F828
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 8020F82C
  c->r[4]=R32(c->r[3]+0x00000000u); // 8020F830
  c->r[5]=c->r[26]|c->r[26]; // 8020F834
  c->r[3]=c->r[3]+0x00000008u; // 8020F838
  c->r[4]=c->r[4]+c->r[0]; // 8020F83C
  c->lr=0x8020F844u; f_80213DDC(c); // 8020F840
  c->r[3]=R32(c->r[31]+0x00000004u); // 8020F844
  c->r[0]=c->r[3]+0x00000001u; // 8020F848
  W32(c->r[31]+0x00000004u,c->r[0]); // 8020F84C
  goto L_8020FA10; // 8020F850
L_8020F854:;
  c->r[4]=0u+0x00000001u; // 8020F854
  c->lr=0x8020F85Cu; f_8021499C(c); // 8020F858
  c->r[4]=0u+0x00000000u; // 8020F85C
  c->r[0]=c->r[31]+0x00000008u; // 8020F860
  W32(c->r[1]+0x00000018u,c->r[4]); // 8020F864
  c->r[3]=c->r[31]|c->r[31]; // 8020F868
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8020F86C
  W32(c->r[1]+0x00000020u,c->r[4]); // 8020F870
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020F874
  W32(c->r[1]+0x00000028u,c->r[4]); // 8020F878
  c->r[4]=R32(c->r[31]+0x00000004u); // 8020F87C
  c->r[5]=R32(c->r[31]+0x00000008u); // 8020F880
  c->r[0]=c->r[4]+0x00000001u; // 8020F884
  c->r[4]=c->r[0]-c->r[5]; // 8020F888
  c->lr=0x8020F890u; f_8021499C(c); // 8020F88C
  c->r[4]=0u+0x0AAB0000u; // 8020F890
  c->r[28]=c->r[3]|c->r[3]; // 8020F894
  c->r[0]=c->r[4]+0xFFFFAAAAu; // 8020F898
  cmpu(c,0,c->r[3],c->r[0]); // 8020F89C
  if (!crb(c,1)) { goto L_8020F8C4; } // 8020F8A0
  c->r[3]=c->r[1]+0x0000000Cu; // 8020F8A4
  c->r[4]=c->r[30]+0x000001B8u; // 8020F8A8
  c->lr=0x8020F8B0u; f_80206F68(c); // 8020F8AC
  c->r[5]=0u+0x80120000u; // 8020F8B0
  c->r[4]=c->r[3]|c->r[3]; // 8020F8B4
  c->r[3]=c->r[30]+0x00000181u; // 8020F8B8
  c->r[5]=c->r[5]+0xFFFFD5F8u; // 8020F8BC
  c->lr=0x8020F8C4u; f_8010BE30(c); // 8020F8C0
L_8020F8C4:;
  c->r[27]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8020F8C4
  c->r[5]=c->r[28]|c->r[28]; // 8020F8C8
  c->r[4]=c->r[30]+0x000001CCu; // 8020F8CC
  c->r[3]=0u+0x00000006u; // 8020F8D0
  c->r[7]=c->r[27]|c->r[27]; // 8020F8D4
  c->r[6]=0u+0x00000018u; // 8020F8D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020F8DC
  c->lr=0x8020F8E4u; f_8020B328(c); // 8020F8E0
  c->r[3]=c->r[27]|c->r[27]; // 8020F8E4
  c->lr=0x8020F8ECu; f_8020EAC4(c); // 8020F8E8
  cmps(c,0,(int32_t)c->r[3],0); // 8020F8EC
  c->r[29]=c->r[3]|c->r[3]; // 8020F8F0
  if (!crb(c,2)) { goto L_8020F930; } // 8020F8F4
  c->r[5]=c->r[28]|c->r[28]; // 8020F8F8
  c->r[7]=c->r[27]|c->r[27]; // 8020F8FC
  c->r[4]=c->r[30]+0x000001F8u; // 8020F900
  c->r[3]=0u+0x00000001u; // 8020F904
  c->r[6]=0u+0x00000018u; // 8020F908
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020F90C
  c->lr=0x8020F914u; f_8020B328(c); // 8020F910
  c->r[3]=c->r[1]+0x00000008u; // 8020F914
  c->lr=0x8020F91Cu; f_80207934(c); // 8020F918
  c->r[5]=0u+0x80110000u; // 8020F91C
  c->r[4]=c->r[3]|c->r[3]; // 8020F920
  c->r[3]=c->r[30]+0x00000231u; // 8020F924
  c->r[5]=c->r[5]+0xFFFF9768u; // 8020F928
  c->lr=0x8020F930u; f_8010BE30(c); // 8020F92C
L_8020F930:;
  c->r[5]=c->r[29]|c->r[29]; // 8020F930
  c->r[4]=c->r[30]+0x00000253u; // 8020F934
  c->r[3]=0u+0x00000006u; // 8020F938
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020F93C
  c->lr=0x8020F944u; f_8020B328(c); // 8020F940
  W32(c->r[1]+0x00000018u,c->r[29]); // 8020F944
  c->r[5]=c->r[26]|c->r[26]; // 8020F948
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8020F94C
  W32(c->r[1]+0x00000020u,c->r[28]); // 8020F950
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8020F954
  c->r[3]=R32(c->r[1]+0x00000024u); // 8020F958
  c->r[6]=R32(c->r[31]+0x00000004u); // 8020F95C
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)24); // 8020F960
  W32(c->r[1]+0x00000028u,c->r[6]); // 8020F964
  c->r[0]=c->r[29]+c->r[0]; // 8020F968
  c->r[4]=c->r[4]+c->r[0]; // 8020F96C
  c->lr=0x8020F974u; f_80213DDC(c); // 8020F970
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8020F974
  c->r[0]=R32(c->r[1]+0x00000028u); // 8020F978
  c->r[4]=c->r[3]+0x00000001u; // 8020F97C
  c->r[3]=R32(c->r[1]+0x00000018u); // 8020F980
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8020F984
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8020F988
  c->r[4]=R32(c->r[31]+0x00000004u); // 8020F98C
  c->r[29]=c->r[3]+c->r[0]; // 8020F990
  c->r[27]=R32(c->r[31]+0x00000000u); // 8020F994
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8020F998
  c->r[30]=c->r[27]+c->r[0]; // 8020F99C
  goto L_8020F9D4; // 8020F9A0
L_8020F9A4:;
  c->r[30]=c->r[30]+0xFFFFFFE8u; // 8020F9A4
  c->r[29]=c->r[29]+0xFFFFFFE8u; // 8020F9A8
  c->r[3]=R32(c->r[1]+0x00000024u); // 8020F9AC
  c->r[5]=c->r[30]|c->r[30]; // 8020F9B0
  c->r[4]=c->r[29]|c->r[29]; // 8020F9B4
  c->lr=0x8020F9BCu; f_80213DDC(c); // 8020F9B8
  c->r[4]=R32(c->r[1]+0x00000028u); // 8020F9BC
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8020F9C0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8020F9C4
  c->r[0]=c->r[3]+0x00000001u; // 8020F9C8
  W32(c->r[1]+0x00000028u,c->r[4]); // 8020F9CC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8020F9D0
L_8020F9D4:;
  cmpu(c,0,c->r[30],c->r[27]); // 8020F9D4
  if (crb(c,1)) { IRQCHK(c); goto L_8020F9A4; } // 8020F9D8
  c->r[3]=c->r[31]+0x00000008u; // 8020F9DC
  c->r[4]=c->r[1]+0x00000020u; // 8020F9E0
  c->lr=0x8020F9E8u; f_80032474(c); // 8020F9E4
  c->r[5]=R32(c->r[31]+0x00000000u); // 8020F9E8
  c->r[3]=c->r[31]+0x00000004u; // 8020F9EC
  c->r[0]=R32(c->r[1]+0x00000018u); // 8020F9F0
  c->r[4]=c->r[1]+0x0000001Cu; // 8020F9F4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8020F9F8
  W32(c->r[1]+0x00000018u,c->r[5]); // 8020F9FC
  c->lr=0x8020FA04u; f_80032474(c); // 8020FA00
  c->r[3]=c->r[1]+0x00000018u; // 8020FA04
  c->r[4]=0u+0xFFFFFFFFu; // 8020FA08
  c->lr=0x8020FA10u; f_80214D98(c); // 8020FA0C
L_8020FA10:;
  c->r[11]=c->r[1]+0x00000050u; // 8020FA10
  c->lr=0x8020FA18u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020FA14
  c->r[0]=R32(c->r[1]+0x00000054u); // 8020FA18
  c->lr=c->r[0]; // 8020FA1C
  c->r[1]=c->r[1]+0x00000050u; // 8020FA20
  return; // 8020FA24
}

// fn_8020FA28
void f_8020FA28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FA28
  c->r[0]=c->lr; // 8020FA2C
  W32(c->r[1]+0x00000134u,c->r[0]); // 8020FA30
  c->r[11]=c->r[1]+0x00000130u; // 8020FA34
  c->lr=0x8020FA3Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020FA38
  c->r[31]=c->r[1]|c->r[1]; // 8020FA3C
  c->r[0]=R32(c->r[3]+0x00000190u); // 8020FA40
  c->r[30]=0u+0x802A0000u; // 8020FA44
  c->r[26]=c->r[3]|c->r[3]; // 8020FA48
  cmpu(c,0,c->r[0],0x00000001u); // 8020FA4C
  c->r[30]=c->r[30]+0x000059F8u; // 8020FA50
  if (!crb(c,2)) { goto L_8020FAB8; } // 8020FA54
  c->r[4]=R32(c->r[3]+0x00000190u); // 8020FA58
  c->r[24]=R32(c->r[3]+0x0000016Cu); // 8020FA5C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8020FA60
  c->r[4]=R32(c->r[3]+0x0000018Cu); // 8020FA64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8020FA68
  c->r[3]=c->r[24]|c->r[24]; // 8020FA6C
  c->r[23]=c->r[4]+c->r[0]; // 8020FA70
  c->lr=0x8020FA78u; f_80109598(c); // 8020FA74
  c->r[25]=c->r[3]|c->r[3]; // 8020FA78
  c->r[3]=c->r[23]|c->r[23]; // 8020FA7C
  c->lr=0x8020FA84u; f_802020A8(c); // 8020FA80
  c->r[5]=c->r[3]|c->r[3]; // 8020FA84
  c->r[3]=c->r[23]|c->r[23]; // 8020FA88
  c->r[6]=c->r[24]|c->r[24]; // 8020FA8C
  c->r[7]=c->r[25]|c->r[25]; // 8020FA90
  c->r[4]=0u+0x00000000u; // 8020FA94
  c->lr=0x8020FA9Cu; f_80214270(c); // 8020FA98
  cmps(c,0,(int32_t)c->r[3],0); // 8020FA9C
  if (!crb(c,2)) { goto L_8020FAB8; } // 8020FAA0
  c->r[3]=c->r[26]+0x000001A4u; // 8020FAA4
  c->lr=0x8020FAACu; f_802020A8(c); // 8020FAA8
  c->r[0]=R32(c->r[26]+0x000001B4u); // 8020FAAC
  cmpu(c,0,c->r[0],c->r[3]); // 8020FAB0
  if (crb(c,2)) { goto L_8020FDE4; } // 8020FAB4
L_8020FAB8:;
  c->r[3]=c->r[31]+0x000000C4u; // 8020FAB8
  c->r[29]=c->r[31]+0x00000084u; // 8020FABC
  W32(c->r[31]+0x00000084u,c->r[3]); // 8020FAC0
  c->r[28]=0u+0x00000001u; // 8020FAC4
  c->lr=0x8020FACCu; f_802053A4(c); // 8020FAC8
  c->r[5]=0u+0x80290000u; // 8020FACC
  c->r[3]=R32(c->r[31]+0x00000084u); // 8020FAD0
  c->r[5]=c->r[5]+0x00006BC0u; // 8020FAD4
  c->r[4]=c->r[31]+0x0000008Cu; // 8020FAD8
  W32(c->r[31]+0x00000088u,c->r[5]); // 8020FADC
  c->r[0]=c->r[5]+0x0000000Cu; // 8020FAE0
  c->r[23]=0u+0x00000000u; // 8020FAE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8020FAE8
  c->r[3]=R32(c->r[31]+0x00000084u); // 8020FAEC
  c->r[0]=c->r[4]-c->r[3]; // 8020FAF0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8020FAF4
  c->r[22]=R32(c->r[31]+0x00000084u); // 8020FAF8
  c->r[3]=c->r[22]|c->r[22]; // 8020FAFC
  c->lr=0x8020FB04u; f_8011B18C(c); // 8020FB00
  c->r[24]=0u+0x00000000u; // 8020FB04
  c->r[4]=c->r[22]|c->r[22]; // 8020FB08
  W32(c->r[22]+0x00000034u,c->r[24]); // 8020FB0C
  c->r[3]=c->r[31]+0x00000028u; // 8020FB10
  c->lr=0x8020FB18u; f_8011B6E4(c); // 8020FB14
  c->r[3]=c->r[31]+0x00000028u; // 8020FB18
  c->lr=0x8020FB20u; f_80207878(c); // 8020FB1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8020FB20
  c->r[0]=0u+0x00000020u; // 8020FB24
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020FB28
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8020FB2C
  c->ctr=c->r[12]; // 8020FB30
  if (true) { c->lr=0x8020FB38u; dispatch(c,c->ctr); } // 8020FB34
  c->r[0]=0u+0xFFFFFFFFu; // 8020FB38
  c->r[25]=c->r[3]|c->r[3]; // 8020FB3C
  c->r[3]=c->r[31]+0x00000028u; // 8020FB40
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020FB44
  c->lr=0x8020FB4Cu; f_8011B300(c); // 8020FB48
  W8(c->r[22]+0x00000038u,c->r[25]); // 8020FB4C
  c->r[4]=0u+0x802A0000u; // 8020FB50
  c->r[4]=c->r[4]+0x00003A94u; // 8020FB54
  c->r[3]=0u+0x80290000u; // 8020FB58
  W32(c->r[29]+0x00000004u,c->r[4]); // 8020FB5C
  c->r[5]=c->r[4]+0x0000000Cu; // 8020FB60
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020FB64
  c->r[0]=c->r[29]+0x00000040u; // 8020FB68
  c->r[3]=c->r[3]+0x00006B80u; // 8020FB6C
  c->r[25]=c->r[29]+0x00000024u; // 8020FB70
  W32(c->r[4]+0x00000000u,c->r[5]); // 8020FB74
  c->r[4]=R32(c->r[29]+0x00000000u); // 8020FB78
  c->r[0]=c->r[0]-c->r[4]; // 8020FB7C
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 8020FB80
  W32(c->r[29]+0x00000008u,c->r[3]); // 8020FB84
  W32(c->r[29]+0x0000000Cu,c->r[24]); // 8020FB88
  W32(c->r[29]+0x00000010u,c->r[24]); // 8020FB8C
  W32(c->r[29]+0x00000014u,c->r[24]); // 8020FB90
  W32(c->r[29]+0x00000018u,c->r[24]); // 8020FB94
  W32(c->r[29]+0x0000001Cu,c->r[24]); // 8020FB98
  W32(c->r[29]+0x00000020u,c->r[24]); // 8020FB9C
  c->lr=0x8020FBA4u; f_8011C488(c); // 8020FBA0
  c->r[4]=c->r[3]|c->r[3]; // 8020FBA4
  c->r[3]=c->r[25]|c->r[25]; // 8020FBA8
  c->lr=0x8020FBB0u; f_80207544(c); // 8020FBAC
  goto L_8020FBC0; // 8020FBB0
  c->r[3]=c->r[31]+0x0000006Cu; // 8020FBB4
  c->lr=0x8020FBBCu; f_8010B734(c); // 8020FBB8
L_8020FBBC:;
  IRQCHK(c); goto L_8020FBBC; // 8020FBBC
L_8020FBC0:;
  c->r[4]=0u+0x802A0000u; // 8020FBC0
  c->r[0]=0u+0x00000010u; // 8020FBC4
  c->r[4]=c->r[4]+0x00003F6Cu; // 8020FBC8
  W8(c->r[29]+0x0000002Cu,c->r[0]); // 8020FBCC
  c->r[3]=c->r[29]+0x00000034u; // 8020FBD0
  W32(c->r[29]+0x00000008u,c->r[4]); // 8020FBD4
  c->lr=0x8020FBDCu; f_80203990(c); // 8020FBD8
  c->r[3]=c->r[29]+0x00000034u; // 8020FBDC
  c->lr=0x8020FBE4u; f_80203778(c); // 8020FBE0
  c->r[0]=R8(c->r[29]+0x0000002Cu); // 8020FBE4
  W32(c->r[29]+0x00000030u,c->r[3]); // 8020FBE8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8020FBEC
  if (crb(c,2)) { goto L_8020FC00; } // 8020FBF0
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 8020FBF4
  W32(c->r[29]+0x00000018u,c->r[3]); // 8020FBF8
  W32(c->r[29]+0x00000020u,c->r[3]); // 8020FBFC
L_8020FC00:;
  c->r[0]=R8(c->r[29]+0x0000002Cu); // 8020FC00
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8020FC04
  if (crb(c,2)) { goto L_8020FC18; } // 8020FC08
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8020FC0C
  W32(c->r[29]+0x00000010u,c->r[3]); // 8020FC10
  W32(c->r[29]+0x00000014u,c->r[3]); // 8020FC14
L_8020FC18:;
  c->r[24]=R32(c->r[26]+0x000001B4u); // 8020FC18
  c->r[3]=c->r[26]+0x000001A4u; // 8020FC1C
  c->r[23]=R32(c->r[26]+0x00000190u); // 8020FC20
  c->lr=0x8020FC28u; f_802020A8(c); // 8020FC24
  c->r[28]=c->r[3]|c->r[3]; // 8020FC28
  c->r[3]=c->r[31]+0x00000084u; // 8020FC2C
  c->r[4]=c->r[30]+0x00000266u; // 8020FC30
  c->lr=0x8020FC38u; f_802050F0(c); // 8020FC34
  c->r[4]=R32(c->r[26]+0x0000016Cu); // 8020FC38
  c->lr=0x8020FC40u; f_802050F0(c); // 8020FC3C
  c->r[4]=c->r[30]+0x00000287u; // 8020FC40
  c->lr=0x8020FC48u; f_802050F0(c); // 8020FC44
  c->r[4]=c->r[23]|c->r[23]; // 8020FC48
  c->lr=0x8020FC50u; f_80214368(c); // 8020FC4C
  c->r[4]=c->r[30]+0x0000029Bu; // 8020FC50
  c->lr=0x8020FC58u; f_802050F0(c); // 8020FC54
  c->r[4]=c->r[28]|c->r[28]; // 8020FC58
  c->lr=0x8020FC60u; f_80214368(c); // 8020FC5C
  c->r[4]=c->r[30]+0x000002ADu; // 8020FC60
  c->lr=0x8020FC68u; f_802050F0(c); // 8020FC64
  c->r[23]=c->r[3]|c->r[3]; // 8020FC68
  c->r[3]=c->r[31]+0x00000018u; // 8020FC6C
  c->r[4]=c->r[23]|c->r[23]; // 8020FC70
  c->lr=0x8020FC78u; f_8011B710(c); // 8020FC74
  c->r[0]=R8(c->r[31]+0x00000018u); // 8020FC78
  W32(c->r[31]+0x00000050u,c->r[1]); // 8020FC7C
  cmps(c,0,(int32_t)c->r[0],0); // 8020FC80
  if (crb(c,2)) { goto L_8020FD9C; } // 8020FC84
  W32(c->r[31]+0x00000068u,c->r[1]); // 8020FC88
  c->r[3]=c->r[31]+0x00000020u; // 8020FC8C
  c->r[4]=R32(c->r[23]+0x00000000u); // 8020FC90
  c->lr=0x8020FC98u; f_8011B6E4(c); // 8020FC94
  c->r[3]=c->r[31]+0x00000020u; // 8020FC98
  c->lr=0x8020FCA0u; f_80207794(c); // 8020FC9C
  c->r[0]=0u+0xFFFFFFFFu; // 8020FCA0
  c->r[28]=c->r[3]|c->r[3]; // 8020FCA4
  c->r[3]=c->r[31]+0x00000020u; // 8020FCA8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020FCAC
  c->lr=0x8020FCB4u; f_8011B300(c); // 8020FCB0
  c->r[29]=R32(c->r[23]+0x00000000u); // 8020FCB4
  c->r[4]=c->r[23]|c->r[23]; // 8020FCB8
  c->r[3]=c->r[31]+0x0000000Cu; // 8020FCBC
  c->r[0]=R8(c->r[29]+0x00000038u); // 8020FCC0
  c->r[25]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020FCC4
  c->lr=0x8020FCCCu; f_802050E0(c); // 8020FCC8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8020FCCC
  c->r[3]=c->r[28]|c->r[28]; // 8020FCD0
  c->r[5]=c->r[29]|c->r[29]; // 8020FCD4
  c->r[7]=c->r[24]|c->r[24]; // 8020FCD8
  W32(c->r[31]+0x00000010u,c->r[0]); // 8020FCDC
  c->r[4]=c->r[31]+0x00000010u; // 8020FCE0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[25]; // 8020FCE4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8020FCE8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8020FCEC
  c->ctr=c->r[12]; // 8020FCF0
  if (true) { c->lr=0x8020FCF8u; dispatch(c,c->ctr); } // 8020FCF4
  c->r[0]=cntlz(c->r[3]); // 8020FCF8
  W32(c->r[31]+0x00000014u,c->r[3]); // 8020FCFC
  c->r[27]=rotl(c->r[0],27)&0x07FFFFFFu; // 8020FD00
  W32(c->r[31]+0x00000008u,c->r[3]); // 8020FD04
  goto L_8020FD54; // 8020FD08
  c->r[3]=R32(c->r[23]+0x00000000u); // 8020FD0C
  c->r[4]=0u+0x00000001u; // 8020FD10
  c->r[3]=c->r[3]+0x00000032u; // 8020FD14
  c->lr=0x8020FD1Cu; f_80204E50(c); // 8020FD18
  c->r[3]=R32(c->r[23]+0x00000000u); // 8020FD1C
  c->r[0]=R8(c->r[3]+0x00000033u); // 8020FD20
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8020FD24
  if (crb(c,2)) { goto L_8020FD3C; } // 8020FD28
  c->r[3]=0u+0x00000000u; // 8020FD2C
  c->r[4]=0u+0x00000000u; // 8020FD30
  c->r[5]=0u+0x00000000u; // 8020FD34
  c->lr=0x8020FD3Cu; f_8010BE30(c); // 8020FD38
L_8020FD3C:;
  c->r[3]=c->r[31]+0x00000054u; // 8020FD3C
  c->lr=0x8020FD44u; f_8010BF74(c); // 8020FD40
  c->r[0]=c->r[0]|0x00000000u; // 8020FD44
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020FD48
  c->r[1]=R32(c->r[31]+0x00000068u); // 8020FD4C
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020FD50
L_8020FD54:;
  cmps(c,0,(int32_t)c->r[27],0); // 8020FD54
  if (crb(c,2)) { goto L_8020FD9C; } // 8020FD58
  c->r[3]=R32(c->r[23]+0x00000000u); // 8020FD5C
  c->r[4]=0u+0x00000005u; // 8020FD60
  c->lr=0x8020FD68u; f_80204DE4(c); // 8020FD64
  goto L_8020FD9C; // 8020FD68
  c->r[0]=0u+0x00000001u; // 8020FD6C
  c->r[3]=0u+0x00000000u; // 8020FD70
  W8(c->r[31]+0x00000019u,c->r[0]); // 8020FD74
  c->r[4]=0u+0x00000000u; // 8020FD78
  c->r[5]=0u+0x00000000u; // 8020FD7C
  c->lr=0x8020FD84u; f_8010BE30(c); // 8020FD80
  c->r[3]=c->r[31]+0x0000003Cu; // 8020FD84
  c->lr=0x8020FD8Cu; f_8010BF74(c); // 8020FD88
  c->r[0]=c->r[0]|0x00000000u; // 8020FD8C
  c->r[0]=R32(c->r[1]+0x00000000u); // 8020FD90
  c->r[1]=R32(c->r[31]+0x00000050u); // 8020FD94
  W32(c->r[1]+0x00000000u,c->r[0]); // 8020FD98
L_8020FD9C:;
  c->r[0]=0u+0xFFFFFFFFu; // 8020FD9C
  c->r[3]=c->r[31]+0x00000018u; // 8020FDA0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020FDA4
  c->lr=0x8020FDACu; f_8011B888(c); // 8020FDA8
  c->r[22]=R32(c->r[26]+0x00000190u); // 8020FDAC
L_8020FDB0:;
  c->r[3]=c->r[31]+0x00000084u; // 8020FDB0
  c->r[4]=c->r[30]+0x000002BEu; // 8020FDB4
  c->lr=0x8020FDBCu; f_802050F0(c); // 8020FDB8
  c->r[4]=c->r[22]|c->r[22]; // 8020FDBC
  c->lr=0x8020FDC4u; f_80214368(c); // 8020FDC0
  c->r[4]=c->r[30]+0x000002CAu; // 8020FDC4
  c->lr=0x8020FDCCu; f_802050F0(c); // 8020FDC8
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)12); // 8020FDCC
  c->r[4]=R32(c->r[26]+0x0000018Cu); // 8020FDD0
  c->r[4]=c->r[4]+c->r[0]; // 8020FDD4
  c->lr=0x8020FDDCu; f_80204D14(c); // 8020FDD8
  c->r[22]=c->r[22]+0xFFFFFFFFu; // 8020FDDC
  IRQCHK(c); goto L_8020FDB0; // 8020FDE0
L_8020FDE4:;
  c->r[3]=c->r[26]+0x00000090u; // 8020FDE4
  c->r[4]=c->r[30]+0x0000001Cu; // 8020FDE8
  c->lr=0x8020FDF0u; f_802050F0(c); // 8020FDEC
  c->r[4]=R32(c->r[26]+0x00000170u); // 8020FDF0
  c->lr=0x8020FDF8u; f_802050F0(c); // 8020FDF4
  c->r[0]=0u+0x0000003Au; // 8020FDF8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020FDFC
  c->lr=0x8020FE04u; f_80205250(c); // 8020FE00
  c->r[4]=R32(c->r[26]+0x0000016Cu); // 8020FE04
  c->lr=0x8020FE0Cu; f_802050F0(c); // 8020FE08
  c->r[4]=0u+0x80270000u; // 8020FE0C
  c->r[4]=c->r[4]+0x00004B6Du; // 8020FE10
  c->lr=0x8020FE18u; f_802050F0(c); // 8020FE14
  c->r[3]=c->r[31]+0x00000030u; // 8020FE18
  c->r[4]=c->r[26]+0x00000090u; // 8020FE1C
  c->lr=0x8020FE24u; f_802054B0(c); // 8020FE20
  c->r[3]=c->r[31]+0x00000030u; // 8020FE24
  c->lr=0x8020FE2Cu; f_80203778(c); // 8020FE28
  c->r[5]=c->r[3]|c->r[3]; // 8020FE2C
  c->r[4]=c->r[30]+0x000002CEu; // 8020FE30
  c->r[3]=0u+0x00000003u; // 8020FE34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020FE38
  c->lr=0x8020FE40u; f_8020B328(c); // 8020FE3C
  c->r[0]=0u+0xFFFFFFFFu; // 8020FE40
  c->r[3]=c->r[31]+0x00000030u; // 8020FE44
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8020FE48
  c->lr=0x8020FE50u; f_802030B0(c); // 8020FE4C
  c->r[3]=c->r[26]+0x0000018Cu; // 8020FE50
  c->lr=0x8020FE58u; f_8020F4FC(c); // 8020FE54
  c->r[3]=c->r[26]+0x000001A4u; // 8020FE58
  c->lr=0x8020FE60u; f_80204658(c); // 8020FE5C
  c->r[10]=c->r[31]|c->r[31]; // 8020FE60
  c->r[11]=c->r[10]+0x00000130u; // 8020FE64
  c->lr=0x8020FE6Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020FE68
  c->r[10]=R32(c->r[1]+0x00000000u); // 8020FE6C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8020FE70
  c->r[1]=c->r[10]|c->r[10]; // 8020FE74
  c->lr=c->r[0]; // 8020FE78
  return; // 8020FE7C
}

// fn_8020FE80
void f_8020FE80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FE80
  c->r[0]=c->lr; // 8020FE84
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020FE88
  c->r[11]=c->r[1]+0x00000030u; // 8020FE8C
  c->lr=0x8020FE94u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020FE90
  c->r[29]=c->r[3]|c->r[3]; // 8020FE94
  c->r[30]=c->r[4]|c->r[4]; // 8020FE98
  c->r[31]=c->r[5]|c->r[5]; // 8020FE9C
  c->r[3]=c->r[1]+0x00000014u; // 8020FEA0
  c->lr=0x8020FEA8u; f_80203990(c); // 8020FEA4
  c->r[4]=c->r[31]|c->r[31]; // 8020FEA8
  c->r[3]=c->r[1]+0x00000008u; // 8020FEAC
  c->lr=0x8020FEB4u; f_8020E580(c); // 8020FEB0
  c->r[3]=c->r[1]+0x00000008u; // 8020FEB4
  c->r[4]=c->r[1]+0x00000014u; // 8020FEB8
  c->lr=0x8020FEC0u; f_80215CCC(c); // 8020FEBC
  c->r[3]=c->r[1]+0x00000008u; // 8020FEC0
  c->r[4]=0u+0xFFFFFFFFu; // 8020FEC4
  c->lr=0x8020FECCu; f_802030B0(c); // 8020FEC8
  c->r[31]=R32(c->r[29]+0x00000170u); // 8020FECC
  c->r[3]=c->r[29]+0x00000090u; // 8020FED0
  c->r[4]=c->r[29]+0x000001A4u; // 8020FED4
  c->lr=0x8020FEDCu; f_80204D14(c); // 8020FED8
  c->r[4]=0u+0x0000003Cu; // 8020FEDC
  c->lr=0x8020FEE4u; f_80205250(c); // 8020FEE0
  c->r[4]=c->r[31]|c->r[31]; // 8020FEE4
  c->lr=0x8020FEECu; f_802050F0(c); // 8020FEE8
  c->r[4]=0u+0x0000003Au; // 8020FEEC
  c->lr=0x8020FEF4u; f_80205250(c); // 8020FEF0
  c->r[4]=c->r[30]|c->r[30]; // 8020FEF4
  c->lr=0x8020FEFCu; f_802050F0(c); // 8020FEF8
  c->r[4]=0u+0x0000003Eu; // 8020FEFC
  c->lr=0x8020FF04u; f_80205250(c); // 8020FF00
  c->r[4]=c->r[1]+0x00000014u; // 8020FF04
  c->lr=0x8020FF0Cu; f_80204D14(c); // 8020FF08
  c->r[4]=0u+0x802A0000u; // 8020FF0C
  c->r[4]=c->r[4]+0x00005A14u; // 8020FF10
  c->lr=0x8020FF18u; f_802050F0(c); // 8020FF14
  c->r[4]=c->r[31]|c->r[31]; // 8020FF18
  c->lr=0x8020FF20u; f_802050F0(c); // 8020FF1C
  c->r[4]=0u+0x0000003Au; // 8020FF20
  c->lr=0x8020FF28u; f_80205250(c); // 8020FF24
  c->r[4]=c->r[30]|c->r[30]; // 8020FF28
  c->lr=0x8020FF30u; f_802050F0(c); // 8020FF2C
  c->r[4]=0u+0x802A0000u; // 8020FF30
  c->r[4]=c->r[4]+0x00005CCBu; // 8020FF34
  c->lr=0x8020FF3Cu; f_802050F0(c); // 8020FF38
  c->r[3]=c->r[1]+0x00000014u; // 8020FF3C
  c->r[4]=0u+0xFFFFFFFFu; // 8020FF40
  c->lr=0x8020FF48u; f_802030B0(c); // 8020FF44
  c->r[11]=c->r[1]+0x00000030u; // 8020FF48
  c->lr=0x8020FF50u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020FF4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020FF50
  c->lr=c->r[0]; // 8020FF54
  c->r[1]=c->r[1]+0x00000030u; // 8020FF58
  return; // 8020FF5C
}

// fn_8020FF60
void f_8020FF60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FF60
  c->r[0]=c->lr; // 8020FF64
  W32(c->r[1]+0x00000034u,c->r[0]); // 8020FF68
  c->r[11]=c->r[1]+0x00000030u; // 8020FF6C
  c->lr=0x8020FF74u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020FF70
  c->r[29]=c->r[3]|c->r[3]; // 8020FF74
  c->r[30]=c->r[4]|c->r[4]; // 8020FF78
  c->r[3]=c->r[3]+0x00000090u; // 8020FF7C
  c->r[4]=c->r[29]+0x000001A4u; // 8020FF80
  c->lr=0x8020FF88u; f_80204D14(c); // 8020FF84
  c->r[4]=0u+0x0000003Cu; // 8020FF88
  c->lr=0x8020FF90u; f_80205250(c); // 8020FF8C
  c->r[4]=R32(c->r[29]+0x00000170u); // 8020FF90
  c->lr=0x8020FF98u; f_802050F0(c); // 8020FF94
  c->r[4]=0u+0x0000003Au; // 8020FF98
  c->lr=0x8020FFA0u; f_80205250(c); // 8020FF9C
  c->r[4]=c->r[30]|c->r[30]; // 8020FFA0
  c->lr=0x8020FFA8u; f_802050F0(c); // 8020FFA4
  c->r[4]=0u+0x802A0000u; // 8020FFA8
  c->r[4]=c->r[4]+0x00005CCBu; // 8020FFAC
  c->lr=0x8020FFB4u; f_802050F0(c); // 8020FFB0
  c->r[4]=c->r[30]|c->r[30]; // 8020FFB4
  c->r[3]=c->r[1]+0x0000000Cu; // 8020FFB8
  c->lr=0x8020FFC0u; f_8020E580(c); // 8020FFBC
  c->r[3]=c->r[29]+0x0000018Cu; // 8020FFC0
  c->r[4]=c->r[1]+0x0000000Cu; // 8020FFC4
  c->lr=0x8020FFCCu; f_8020F560(c); // 8020FFC8
  c->r[3]=c->r[1]+0x0000000Cu; // 8020FFCC
  c->r[4]=0u+0xFFFFFFFFu; // 8020FFD0
  c->lr=0x8020FFD8u; f_802030B0(c); // 8020FFD4
  c->r[31]=R32(c->r[29]+0x000001B0u); // 8020FFD8
  c->r[3]=c->r[29]+0x000001A4u; // 8020FFDC
  c->lr=0x8020FFE4u; f_802020A8(c); // 8020FFE0
  c->r[0]=R8(c->r[1]+0x00000009u); // 8020FFE4
  c->r[30]=c->r[3]|c->r[3]; // 8020FFE8
  c->r[3]=c->r[31]|c->r[31]; // 8020FFEC
  W8(c->r[1]+0x00000008u,c->r[0]); // 8020FFF0
  c->lr=0x8020FFF8u; f_80109598(c); // 8020FFF4
  c->r[0]=c->r[3]|c->r[3]; // 8020FFF8
  c->r[4]=c->r[30]|c->r[30]; // 8020FFFC
  c->r[6]=c->r[31]|c->r[31]; // 80210000
  c->r[3]=c->r[29]+0x000001A4u; // 80210004
  c->r[7]=c->r[31]+c->r[0]; // 80210008
  c->r[8]=c->r[1]+0x00000008u; // 8021000C
  c->r[5]=0u+0x00000000u; // 80210010
  c->lr=0x80210018u; f_80203148(c); // 80210014
  c->r[11]=c->r[1]+0x00000030u; // 80210018
  c->lr=0x80210020u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021001C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80210020
  c->lr=c->r[0]; // 80210024
  c->r[1]=c->r[1]+0x00000030u; // 80210028
  return; // 8021002C
}

// fn_80210030
void f_80210030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210030
  c->r[0]=c->lr; // 80210034
  W32(c->r[1]+0x00000034u,c->r[0]); // 80210038
  c->r[11]=c->r[1]+0x00000030u; // 8021003C
  c->lr=0x80210044u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80210040
  c->r[29]=c->r[3]|c->r[3]; // 80210044
  c->r[3]=c->r[1]+0x0000000Cu; // 80210048
  c->r[4]=R32(c->r[29]+0x00000190u); // 8021004C
  c->r[5]=R32(c->r[29]+0x0000018Cu); // 80210050
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80210054
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80210058
  c->r[4]=c->r[5]+c->r[0]; // 8021005C
  c->lr=0x80210064u; f_80206FA4(c); // 80210060
  c->r[3]=R32(c->r[29]+0x00000190u); // 80210064
  c->r[4]=0u+0xFFFFFFFFu; // 80210068
  c->r[5]=R32(c->r[29]+0x0000018Cu); // 8021006C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80210070
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80210074
  W32(c->r[29]+0x00000190u,c->r[3]); // 80210078
  c->r[3]=c->r[5]+c->r[0]; // 8021007C
  c->lr=0x80210084u; f_802030B0(c); // 80210080
  c->r[3]=c->r[29]+0x000001A4u; // 80210084
  c->lr=0x8021008Cu; f_802020A8(c); // 80210088
  c->r[0]=R32(c->r[29]+0x000001B4u); // 8021008C
  cmpu(c,0,c->r[3],c->r[0]); // 80210090
  if (crb(c,0)) { goto L_802100E4; } // 80210094
  c->r[3]=c->r[29]+0x000001A4u; // 80210098
  c->lr=0x802100A0u; f_80210144(c); // 8021009C
  c->r[30]=R32(c->r[29]+0x000001B4u); // 802100A0
  c->r[31]=c->r[3]|c->r[3]; // 802100A4
  c->r[3]=c->r[29]+0x000001A4u; // 802100A8
  c->lr=0x802100B0u; f_80210144(c); // 802100AC
  c->r[30]=c->r[3]-c->r[30]; // 802100B0
  c->r[3]=c->r[29]+0x000001A4u; // 802100B4
  c->lr=0x802100BCu; f_80210B10(c); // 802100B8
  c->r[0]=R8(c->r[1]+0x00000008u); // 802100BC
  c->r[4]=c->r[3]|c->r[3]; // 802100C0
  c->r[3]=c->r[29]+0x000001A4u; // 802100C4
  c->r[5]=c->r[31]-c->r[30]; // 802100C8
  W8(c->r[1]+0x00000009u,c->r[0]); // 802100CC
  c->r[4]=c->r[30]-c->r[4]; // 802100D0
  c->r[8]=c->r[1]+0x00000009u; // 802100D4
  c->r[6]=0u+0x00000000u; // 802100D8
  c->r[7]=0u+0x00000000u; // 802100DC
  c->lr=0x802100E4u; f_80203148(c); // 802100E0
L_802100E4:;
  c->r[3]=c->r[29]+0x00000090u; // 802100E4
  c->r[4]=c->r[29]+0x000001A4u; // 802100E8
  c->lr=0x802100F0u; f_80204D14(c); // 802100EC
  c->r[4]=0u+0x802A0000u; // 802100F0
  c->r[4]=c->r[4]+0x00005A14u; // 802100F4
  c->lr=0x802100FCu; f_802050F0(c); // 802100F8
  c->r[4]=R32(c->r[29]+0x00000170u); // 802100FC
  c->lr=0x80210104u; f_802050F0(c); // 80210100
  c->r[4]=0u+0x0000003Au; // 80210104
  c->lr=0x8021010Cu; f_80205250(c); // 80210108
  c->r[4]=c->r[1]+0x0000000Cu; // 8021010C
  c->lr=0x80210114u; f_80204D14(c); // 80210110
  c->r[4]=0u+0x802A0000u; // 80210114
  c->r[4]=c->r[4]+0x00005CCBu; // 80210118
  c->lr=0x80210120u; f_802050F0(c); // 8021011C
  c->r[3]=c->r[1]+0x0000000Cu; // 80210120
  c->r[4]=0u+0xFFFFFFFFu; // 80210124
  c->lr=0x8021012Cu; f_802030B0(c); // 80210128
  c->r[11]=c->r[1]+0x00000030u; // 8021012C
  c->lr=0x80210134u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80210130
  c->r[0]=R32(c->r[1]+0x00000034u); // 80210134
  c->lr=c->r[0]; // 80210138
  c->r[1]=c->r[1]+0x00000030u; // 8021013C
  return; // 80210140
}

// fn_80210144
void f_80210144(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 80210144
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80210148
  if (!crb(c,2)) { goto L_80210160; } // 8021014C
  c->r[0]=R8(c->r[3]+0x00000000u); // 80210150
  c->r[4]=c->r[3]+0x00000001u; // 80210154
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 80210158
  goto L_80210168; // 8021015C
L_80210160:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 80210160
  c->r[0]=R32(c->r[3]+0x00000004u); // 80210164
L_80210168:;
  c->r[3]=c->r[4]+c->r[0]; // 80210168
  return; // 8021016C
}

// fn_80210170
void f_80210170(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210170
  c->r[0]=c->lr; // 80210174
  W32(c->r[1]+0x00000064u,c->r[0]); // 80210178
  c->r[11]=c->r[1]+0x00000060u; // 8021017C
  c->lr=0x80210184u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80210180
  c->r[31]=c->r[1]|c->r[1]; // 80210184
  c->r[29]=0u+0x00000000u; // 80210188
  c->r[28]=0u+0x802A0000u; // 8021018C
  W32(c->r[3]+0x0000012Cu,c->r[29]); // 80210190
  c->r[30]=c->r[3]|c->r[3]; // 80210194
  c->r[24]=c->r[4]|c->r[4]; // 80210198
  c->r[28]=c->r[28]+0x000059F8u; // 8021019C
  W32(c->r[3]+0x00000128u,c->r[29]); // 802101A0
  W32(c->r[3]+0x00000130u,c->r[29]); // 802101A4
  c->r[3]=c->r[3]+0x0000011Cu; // 802101A8
  c->lr=0x802101B0u; f_80204658(c); // 802101AC
  c->r[0]=0u+0xFFFFFFFFu; // 802101B0
  W8(c->r[30]+0x00000134u,c->r[29]); // 802101B4
  c->r[3]=c->r[24]|c->r[24]; // 802101B8
  W8(c->r[30]+0x00000135u,c->r[29]); // 802101BC
  W32(c->r[30]+0x0000017Cu,c->r[0]); // 802101C0
  c->lr=0x802101C8u; f_80203778(c); // 802101C4
  c->r[5]=R32(c->r[30]+0x0000016Cu); // 802101C8
  c->r[6]=c->r[3]|c->r[3]; // 802101CC
  c->r[4]=c->r[28]+0x000002E7u; // 802101D0
  c->r[3]=0u+0x00000003u; // 802101D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802101D8
  c->lr=0x802101E0u; f_8020B328(c); // 802101DC
  c->r[3]=c->r[24]|c->r[24]; // 802101E0
  c->lr=0x802101E8u; f_802020A8(c); // 802101E4
  c->r[0]=cntlz(c->r[3]); // 802101E8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802101EC
  if (crb(c,2)) { goto L_802101FC; } // 802101F0
  c->r[3]=0u+0xFFFFF02Bu; // 802101F4
  goto L_802103AC; // 802101F8
L_802101FC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 802101FC
  c->lr=0x80210204u; f_80203E30(c); // 80210200
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 80210204
  c->r[3]=c->r[30]|c->r[30]; // 80210208
  c->r[4]=c->r[24]|c->r[24]; // 8021020C
  c->r[25]=0u+0x00000000u; // 80210210
  c->lr=0x80210218u; f_8021F48C(c); // 80210214
  W32(c->r[30]+0x0000012Cu,c->r[3]); // 80210218
  goto L_8021026C; // 8021021C
  c->r[4]=c->r[28]+0x000002EEu; // 80210220
  c->r[3]=0u+0x00000001u; // 80210224
  c->r[5]=0u+0x000000FFu; // 80210228
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021022C
  c->lr=0x80210234u; f_8020B328(c); // 80210230
  c->r[25]=0u+0xFFFFF05Bu; // 80210234
  goto L_80210254; // 80210238
  c->r[4]=c->r[28]+0x0000034Cu; // 8021023C
  c->r[3]=0u+0x00000001u; // 80210240
  c->r[5]=0u+0x000000FFu; // 80210244
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80210248
  c->lr=0x80210250u; f_8020B328(c); // 8021024C
  c->r[25]=0u+0xFFFFF05Fu; // 80210250
L_80210254:;
  c->r[3]=c->r[31]+0x00000028u; // 80210254
  c->lr=0x8021025Cu; f_8010BF74(c); // 80210258
  c->r[0]=c->r[0]|0x00000000u; // 8021025C
  c->r[0]=R32(c->r[1]+0x00000000u); // 80210260
  c->r[1]=R32(c->r[31]+0x0000003Cu); // 80210264
  W32(c->r[1]+0x00000000u,c->r[0]); // 80210268
L_8021026C:;
  cmps(c,0,(int32_t)c->r[25],0); // 8021026C
  if (crb(c,2)) { goto L_80210278; } // 80210270
  W32(c->r[30]+0x0000012Cu,c->r[25]); // 80210274
L_80210278:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80210278
  c->lr=0x80210280u; f_80203E04(c); // 8021027C
  c->r[5]=R32(c->r[30]+0x0000012Cu); // 80210280
  cmps(c,0,(int32_t)c->r[5],0); // 80210284
  if (!crb(c,0)) { goto L_802102AC; } // 80210288
  c->r[6]=R32(c->r[30]+0x0000016Cu); // 8021028C
  c->r[4]=c->r[28]+0x000003A0u; // 80210290
  c->r[7]=R32(c->r[30]+0x00000130u); // 80210294
  c->r[3]=0u+0x00000001u; // 80210298
  c->r[8]=R32(c->r[30]+0x00000128u); // 8021029C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802102A0
  c->lr=0x802102A8u; f_8020B328(c); // 802102A4
  goto L_802102C4; // 802102A8
L_802102AC:;
  c->r[0]=0u+0x00000000u; // 802102AC
  c->r[3]=c->r[30]+0x00000180u; // 802102B0
  W32(c->r[30]+0x0000017Cu,c->r[0]); // 802102B4
  c->lr=0x802102BCu; f_802103CC(c); // 802102B8
  c->r[3]=c->r[30]|c->r[30]; // 802102BC
  c->lr=0x802102C4u; f_802103DC(c); // 802102C0
L_802102C4:;
  c->r[0]=R32(c->r[30]+0x0000012Cu); // 802102C4
  cmps(c,0,(int32_t)c->r[0],0); // 802102C8
  if (crb(c,2)) { goto L_80210380; } // 802102CC
  c->r[3]=c->r[31]+0x0000001Cu; // 802102D0
  c->r[4]=c->r[30]+0x00000010u; // 802102D4
  c->lr=0x802102DCu; f_802054B0(c); // 802102D8
  c->r[3]=c->r[31]+0x00000010u; // 802102DC
  c->r[4]=c->r[30]+0x00000090u; // 802102E0
  c->lr=0x802102E8u; f_802054B0(c); // 802102E4
  c->r[3]=c->r[30]+0x00000110u; // 802102E8
  c->lr=0x802102F0u; f_80203778(c); // 802102EC
  c->r[29]=c->r[3]|c->r[3]; // 802102F0
  c->r[3]=c->r[30]+0x0000011Cu; // 802102F4
  c->lr=0x802102FCu; f_80203778(c); // 802102F8
  c->r[27]=c->r[3]|c->r[3]; // 802102FC
  c->r[3]=c->r[31]+0x00000010u; // 80210300
  c->lr=0x80210308u; f_80203778(c); // 80210304
  c->r[26]=c->r[3]|c->r[3]; // 80210308
  c->r[3]=c->r[31]+0x0000001Cu; // 8021030C
  c->lr=0x80210314u; f_80203778(c); // 80210310
  c->r[25]=c->r[3]|c->r[3]; // 80210314
  c->r[3]=c->r[24]|c->r[24]; // 80210318
  c->lr=0x80210320u; f_80203778(c); // 8021031C
  W32(c->r[1]+0x00000008u,c->r[29]); // 80210320
  c->r[7]=c->r[3]|c->r[3]; // 80210324
  c->r[8]=c->r[25]|c->r[25]; // 80210328
  c->r[9]=c->r[26]|c->r[26]; // 8021032C
  c->r[5]=R32(c->r[30]+0x0000016Cu); // 80210330
  c->r[10]=c->r[27]|c->r[27]; // 80210334
  c->r[6]=R32(c->r[30]+0x0000012Cu); // 80210338
  c->r[4]=c->r[28]+0x000003EEu; // 8021033C
  c->r[3]=0u+0x00000001u; // 80210340
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80210344
  c->lr=0x8021034Cu; f_8020B328(c); // 80210348
  c->r[29]=0u+0xFFFFFFFFu; // 8021034C
  c->r[3]=c->r[31]+0x00000010u; // 80210350
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80210354
  c->lr=0x8021035Cu; f_802030B0(c); // 80210358
  c->r[3]=c->r[31]+0x0000001Cu; // 8021035C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 80210360
  c->lr=0x80210368u; f_802030B0(c); // 80210364
  c->r[0]=R32(c->r[30]+0x0000012Cu); // 80210368
  cmps(c,0,(int32_t)c->r[0],-4015); // 8021036C
  if (!crb(c,2)) { goto L_802103A8; } // 80210370
  c->r[0]=0u+0x00000001u; // 80210374
  W8(c->r[30]+0x00000135u,c->r[0]); // 80210378
  goto L_802103A8; // 8021037C
L_80210380:;
  c->r[3]=c->r[30]+0x00000110u; // 80210380
  c->lr=0x80210388u; f_80203778(c); // 80210384
  c->r[5]=R32(c->r[30]+0x0000016Cu); // 80210388
  c->r[6]=c->r[3]|c->r[3]; // 8021038C
  c->r[4]=c->r[28]+0x00000408u; // 80210390
  c->r[3]=0u+0x00000003u; // 80210394
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80210398
  c->lr=0x802103A0u; f_8020B328(c); // 8021039C
  c->r[0]=0u+0x00000001u; // 802103A0
  W8(c->r[30]+0x00000135u,c->r[0]); // 802103A4
L_802103A8:;
  c->r[3]=R32(c->r[30]+0x0000012Cu); // 802103A8
L_802103AC:;
  c->r[10]=c->r[31]|c->r[31]; // 802103AC
  c->r[11]=c->r[10]+0x00000060u; // 802103B0
  c->lr=0x802103B8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802103B4
  c->r[10]=R32(c->r[1]+0x00000000u); // 802103B8
  c->r[0]=R32(c->r[10]+0x00000004u); // 802103BC
  c->r[1]=c->r[10]|c->r[10]; // 802103C0
  c->lr=c->r[0]; // 802103C4
  return; // 802103C8
}

// fn_802103CC
void f_802103CC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000004u); // 802103CC
  c->r[0]=c->r[0]-c->r[0]; // 802103D0
  W32(c->r[3]+0x00000004u,c->r[0]); // 802103D4
  return; // 802103D8
}


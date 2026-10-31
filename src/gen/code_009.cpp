#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800AC570
void f_800AC570(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0x00000090u; // 800AC570
  f_8003B3BC(c); return; // 800AC574
}

// fn_800AC578
void f_800AC578(Ctx* __restrict c) {
  W32(c->r[3]+0x00000250u,c->r[4]); // 800AC578
  return; // 800AC57C
}

// fn_800AC580
void f_800AC580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC580
  c->r[0]=c->lr; // 800AC584
  W32(c->r[1]+0x00000074u,c->r[0]); // 800AC588
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800AC58C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800AC590
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800AC594
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800AC598
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 800AC59C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 800AC5A0
  c->r[11]=c->r[1]+0x00000040u; // 800AC5A4
  c->lr=0x800AC5ACu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AC5A8
  {uint32_t ea=c->r[2]+0xFFFF85F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AC5AC
  c->r[29]=c->r[3]|c->r[3]; // 800AC5B0
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC5B4
  c->f[30]=c->f[2]; // 800AC5B8
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[3]); // 800AC5BC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 800AC5C0
  c->r[30]=c->r[4]|c->r[4]; // 800AC5C4
  c->r[31]=c->r[5]|c->r[5]; // 800AC5C8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800AC5CC
  c->r[3]=c->r[1]+0x00000020u; // 800AC5D0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[29]);} // 800AC5D4
  c->lr=0x800AC5DCu; f_800411B4(c); // 800AC5D8
  {uint32_t ea=c->r[2]+0xFFFF85E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800AC5DC
  fcmp(c,0,c->f[1],c->f[31]); // 800AC5E0
  if (!crb(c,1)) { goto L_800AC6C0; } // 800AC5E4
  {uint32_t ea=c->r[2]+0xFFFF8660u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC5E8
  fcmp(c,0,c->f[1],c->f[0]); // 800AC5EC
  if (!crb(c,0)) { goto L_800AC5F8; } // 800AC5F0
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800AC5F4
L_800AC5F8:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC5F8
  c->r[3]=c->r[1]+0x00000014u; // 800AC5FC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC600
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[0]); // 800AC604
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC608
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800AC60C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[29],c->f[1],c->f[2])); // 800AC610
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800AC614
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC618
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC61C
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800AC620
  c->f[0]=c->ps1[0]=S(std::fma(c->f[29],c->f[0],c->f[1])); // 800AC624
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AC628
  c->lr=0x800AC630u; f_8003B490(c); // 800AC62C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AC630
  c->r[3]=c->r[1]+0x00000008u; // 800AC634
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC638
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC63C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 800AC640
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800AC644
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800AC648
  c->lr=0x800AC650u; f_8003B490(c); // 800AC64C
  {uint32_t ea=c->r[2]+0xFFFF8668u; c->f[0]=RF64(ea);} // 800AC650
  {uint32_t ea=c->r[29]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AC654
  {uint32_t ea=c->r[29]+0x000001CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC658
  c->f[0]=c->f[0]*c->f[31]; // 800AC65C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AC660
  fcmp(c,0,c->f[1],c->f[0]); // 800AC664
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800AC668
  if (!crb(c,1)) { goto L_800AC678; } // 800AC66C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800AC670
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[0]);} // 800AC674
L_800AC678:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800AC678
  c->r[3]=c->r[29]|c->r[29]; // 800AC67C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC680
  c->r[12]=R32(c->r[12]+0x00000150u); // 800AC684
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AC688
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AC68C
  {uint32_t ea=c->r[29]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AC690
  c->ctr=c->r[12]; // 800AC694
  if (true) { c->lr=0x800AC69Cu; dispatch(c,c->ctr); } // 800AC698
  c->r[3]=c->r[29]+0x00000144u; // 800AC69C
  c->r[4]=c->r[1]+0x00000008u; // 800AC6A0
  c->lr=0x800AC6A8u; f_8003B3A0(c); // 800AC6A4
  c->r[12]=R32(c->r[29]+0x00000000u); // 800AC6A8
  c->r[3]=c->r[29]|c->r[29]; // 800AC6AC
  c->r[12]=R32(c->r[12]+0x00000278u); // 800AC6B0
  c->ctr=c->r[12]; // 800AC6B4
  if (true) { c->lr=0x800AC6BCu; dispatch(c,c->ctr); } // 800AC6B8
  goto L_800AC6D0; // 800AC6BC
L_800AC6C0:;
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC6C0
  {uint32_t ea=c->r[2]+0xFFFF8620u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC6C4
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800AC6C8
  {uint32_t ea=c->r[29]+0x000001CCu; WF32(ea,c->f[0]);} // 800AC6CC
L_800AC6D0:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800AC6D0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800AC6D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800AC6D8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800AC6DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 800AC6E0
  c->r[11]=c->r[1]+0x00000040u; // 800AC6E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 800AC6E8
  c->lr=0x800AC6F0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AC6EC
  c->r[0]=R32(c->r[1]+0x00000074u); // 800AC6F0
  c->lr=c->r[0]; // 800AC6F4
  c->r[1]=c->r[1]+0x00000070u; // 800AC6F8
  return; // 800AC6FC
}

// fn_800AC700
void f_800AC700(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC700
  c->r[0]=c->lr; // 800AC704
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AC708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AC70C
  c->r[31]=c->r[3]|c->r[3]; // 800AC710
  c->lr=0x800AC718u; f_800A8C94(c); // 800AC714
  c->r[5]=0u+0x80280000u; // 800AC718
  c->r[3]=c->r[31]|c->r[31]; // 800AC71C
  c->r[5]=c->r[5]+0xFFFFF1D0u; // 800AC720
  c->r[4]=c->r[5]+0x0000001Cu; // 800AC724
  W32(c->r[31]+0x00000000u,c->r[5]); // 800AC728
  c->r[0]=c->r[5]+0x0000022Cu; // 800AC72C
  W32(c->r[31]+0x00000004u,c->r[4]); // 800AC730
  W32(c->r[31]+0x000001C4u,c->r[0]); // 800AC734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AC738
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AC73C
  c->lr=c->r[0]; // 800AC740
  c->r[1]=c->r[1]+0x00000010u; // 800AC744
  return; // 800AC748
}

// fn_800AC74C
void f_800AC74C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC74C
  c->r[0]=c->lr; // 800AC750
  cmps(c,0,(int32_t)c->r[3],0); // 800AC754
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AC758
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AC75C
  c->r[30]=c->r[3]|c->r[3]; // 800AC760
  c->r[31]=c->r[4]|c->r[4]; // 800AC764
  if (crb(c,2)) { goto L_800AC784; } // 800AC768
  c->r[4]=0u+0x00000000u; // 800AC76C
  c->lr=0x800AC774u; f_800A8EB4(c); // 800AC770
  cmps(c,0,(int32_t)c->r[31],0); // 800AC774
  if (!crb(c,1)) { goto L_800AC784; } // 800AC778
  c->r[3]=c->r[30]|c->r[30]; // 800AC77C
  c->lr=0x800AC784u; f_8009230C(c); // 800AC780
L_800AC784:;
  c->r[3]=c->r[30]|c->r[30]; // 800AC784
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AC788
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AC78C
  c->lr=c->r[0]; // 800AC790
  c->r[1]=c->r[1]+0x00000010u; // 800AC794
  return; // 800AC798
}

// fn_800AC79C
void f_800AC79C(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0x00000144u; // 800AC79C
  f_8003B3BC(c); return; // 800AC7A0
}

// fn_800AC7A4
void f_800AC7A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC7A4
  c->r[0]=c->lr; // 800AC7A8
  cmps(c,0,(int32_t)c->r[4],6); // 800AC7AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AC7B0
  if (crb(c,2)) { goto L_800AC7DC; } // 800AC7B4
  if (!crb(c,0)) { goto L_800AC7E8; } // 800AC7B8
  cmps(c,0,(int32_t)c->r[4],3); // 800AC7BC
  if (crb(c,2)) { goto L_800AC7C8; } // 800AC7C0
  goto L_800AC7E8; // 800AC7C4
L_800AC7C8:;
  {uint32_t ea=c->r[2]+0xFFFF8630u; c->f[0]=RF64(ea);} // 800AC7C8
  fcmp(c,0,c->f[0],c->f[1]); // 800AC7CC
  if (crb(c,2)) { goto L_800AC7E8; } // 800AC7D0
  {uint32_t ea=c->r[3]+0x000001D0u; WF32(ea,c->f[1]);} // 800AC7D4
  goto L_800AC7E8; // 800AC7D8
L_800AC7DC:;
  c->r[4]=c->r[6]|c->r[6]; // 800AC7DC
  c->r[3]=c->r[3]+0x00000244u; // 800AC7E0
  c->lr=0x800AC7E8u; f_8003B3A0(c); // 800AC7E4
L_800AC7E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AC7E8
  c->r[3]=0u+0x00000000u; // 800AC7EC
  c->lr=c->r[0]; // 800AC7F0
  c->r[1]=c->r[1]+0x00000010u; // 800AC7F4
  return; // 800AC7F8
}

// fn_800AC7FC
void f_800AC7FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC7FC
  c->r[0]=c->lr; // 800AC800
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800AC804
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 800AC808
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 800AC80C
  c->r[11]=c->r[1]+0x000000E0u; // 800AC810
  c->lr=0x800AC818u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AC814
  c->r[0]=R8(c->r[3]+0x0000027Cu); // 800AC818
  c->r[25]=c->r[3]|c->r[3]; // 800AC81C
  c->r[27]=c->r[5]|c->r[5]; // 800AC820
  c->r[26]=c->r[6]|c->r[6]; // 800AC824
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 800AC828
  c->r[28]=c->r[7]|c->r[7]; // 800AC82C
  c->r[29]=c->r[8]|c->r[8]; // 800AC830
  if (!crb(c,2)) { goto L_800AC840; } // 800AC834
  c->lr=0x800AC83Cu; f_800AA09C(c); // 800AC838
  goto L_800ACCB8; // 800AC83C
L_800AC840:;
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AC840
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 800AC844
  if (crb(c,2)) { goto L_800ACCB8; } // 800AC848
  c->r[3]=c->r[27]|c->r[27]; // 800AC84C
  c->r[4]=c->r[26]|c->r[26]; // 800AC850
  c->lr=0x800AC858u; f_8010A3D4(c); // 800AC854
  c->f[31]=c->f[1]; // 800AC858
  c->r[3]=c->r[25]|c->r[25]; // 800AC85C
  c->r[6]=c->r[26]|c->r[26]; // 800AC860
  c->r[5]=c->r[27]|c->r[27]; // 800AC864
  c->r[7]=c->r[28]|c->r[28]; // 800AC868
  c->r[8]=c->r[29]|c->r[29]; // 800AC86C
  c->lr=0x800AC874u; f_800A5D74(c); // 800AC870
  c->r[3]=c->r[25]+0x000000A8u; // 800AC874
  c->lr=0x800AC87Cu; f_800411B4(c); // 800AC878
  {uint32_t ea=c->r[2]+0xFFFF8630u; c->f[2]=RF64(ea);} // 800AC87C
  {uint32_t ea=c->r[25]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC880
  fcmp(c,0,c->f[2],c->f[0]); // 800AC884
  if (!crb(c,0)) { goto L_800ACCA0; } // 800AC888
  fcmp(c,0,c->f[2],c->f[1]); // 800AC88C
  if (!crb(c,0)) { goto L_800ACCA0; } // 800AC890
  {uint32_t ea=c->r[25]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC894
  c->r[3]=c->r[1]+0x000000ACu; // 800AC898
  {uint32_t ea=c->r[25]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AC89C
  c->r[31]=0u+0x00000000u; // 800AC8A0
  {uint32_t ea=c->r[25]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AC8A4
  c->lr=0x800AC8ACu; f_8003C598(c); // 800AC8A8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC8AC
  c->r[3]=0u+0x802B0000u; // 800AC8B0
  {uint32_t ea=c->r[2]+0xFFFF8670u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC8B4
  c->r[3]=c->r[3]+0x00001B78u; // 800AC8B8
  c->r[30]=c->r[3]+0x00001730u; // 800AC8BC
  c->r[4]=c->r[25]|c->r[25]; // 800AC8C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800AC8C4
  c->r[3]=c->r[30]|c->r[30]; // 800AC8C8
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 800AC8CC
  c->lr=0x800AC8D4u; f_80035AE0(c); // 800AC8D0
  {uint32_t ea=c->r[25]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC8D4
  {uint32_t ea=c->r[2]+0xFFFF8638u; c->f[1]=RF64(ea);} // 800AC8D8
  c->f[2]=c->f[0]*c->f[31]; // 800AC8DC
  {uint32_t ea=c->r[2]+0xFFFF85E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC8E0
  c->f[31]=c->f[2]/c->f[1]; // 800AC8E4
  c->f[31]=c->ps1[31]=S(c->f[31]); // 800AC8E8
  fcmp(c,0,c->f[0],c->f[31]); // 800AC8EC
  if (!crb(c,0)) { goto L_800AC8F8; } // 800AC8F0
  c->f[31]=c->f[0]; // 800AC8F4
L_800AC8F8:;
  {uint32_t ea=c->r[25]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC8F8
  c->r[3]=c->r[1]+0x000000A0u; // 800AC8FC
  {uint32_t ea=c->r[25]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AC900
  {uint32_t ea=c->r[25]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AC904
  c->lr=0x800AC90Cu; f_8003C598(c); // 800AC908
  c->r[3]=c->r[1]+0x000000A0u; // 800AC90C
  c->r[4]=c->r[3]|c->r[3]; // 800AC910
  c->lr=0x800AC918u; f_800ECFD0(c); // 800AC914
  c->f[1]=c->f[31]; // 800AC918
  c->r[3]=c->r[1]+0x000000A0u; // 800AC91C
  c->r[4]=c->r[3]|c->r[3]; // 800AC920
  c->lr=0x800AC928u; f_8003C5E8(c); // 800AC924
  c->r[3]=c->r[25]+0x00000244u; // 800AC928
  c->lr=0x800AC930u; f_800411B4(c); // 800AC92C
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AC930
  fcmp(c,0,c->f[2],c->f[1]); // 800AC934
  if (!crb(c,0)) { goto L_800AC988; } // 800AC938
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AC93C
  c->f[1]=c->f[2]; // 800AC940
  {uint32_t ea=c->r[25]+0x00000244u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC944
  c->f[3]=c->f[2]; // 800AC948
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[5]=c->ps1[5]=RF32(ea);} // 800AC94C
  c->r[3]=c->r[1]+0x00000064u; // 800AC950
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AC954
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AC958
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800AC95C
  {uint32_t ea=c->r[25]+0x00000248u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC960
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 800AC964
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800AC968
  {uint32_t ea=c->r[25]+0x0000024Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC96C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AC970
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 800AC974
  c->lr=0x800AC97Cu; f_8003B43C(c); // 800AC978
  c->r[4]=c->r[3]|c->r[3]; // 800AC97C
  c->r[3]=c->r[25]+0x00000244u; // 800AC980
  c->lr=0x800AC988u; f_8003B3A0(c); // 800AC984
L_800AC988:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800AC988
  c->r[3]=c->r[30]|c->r[30]; // 800AC98C
  c->r[4]=c->r[1]+0x000000ACu; // 800AC990
  c->r[5]=c->r[1]+0x000000A0u; // 800AC994
  c->r[12]=R32(c->r[12]+0x00000008u); // 800AC998
  c->r[6]=c->r[1]+0x00000094u; // 800AC99C
  c->r[7]=c->r[1]+0x0000000Cu; // 800AC9A0
  c->r[8]=0u+0x00000002u; // 800AC9A4
  {uint32_t ea=c->r[2]+0xFFFF8620u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC9A8
  c->ctr=c->r[12]; // 800AC9AC
  if (true) { c->lr=0x800AC9B4u; dispatch(c,c->ctr); } // 800AC9B0
  cmps(c,0,(int32_t)c->r[3],0); // 800AC9B4
  c->r[29]=c->r[3]|c->r[3]; // 800AC9B8
  if (crb(c,2)) { goto L_800AC9E4; } // 800AC9BC
  {uint32_t ea=c->r[2]+0xFFFF8674u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC9C0
  c->r[3]=c->r[1]+0x00000058u; // 800AC9C4
  c->r[4]=c->r[1]+0x00000094u; // 800AC9C8
  c->lr=0x800AC9D0u; f_8003C5E8(c); // 800AC9CC
  c->r[3]=c->r[1]+0x000000A0u; // 800AC9D0
  c->r[5]=c->r[1]+0x00000058u; // 800AC9D4
  c->r[4]=c->r[3]|c->r[3]; // 800AC9D8
  c->lr=0x800AC9E0u; f_8003C604(c); // 800AC9DC
  c->r[31]=0u+0x00000001u; // 800AC9E0
L_800AC9E4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800AC9E4
  if (crb(c,2)) { goto L_800ACA48; } // 800AC9E8
  c->r[12]=R32(c->r[30]+0x00000000u); // 800AC9EC
  c->r[3]=c->r[30]|c->r[30]; // 800AC9F0
  c->r[4]=c->r[1]+0x000000ACu; // 800AC9F4
  c->r[5]=c->r[1]+0x000000A0u; // 800AC9F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800AC9FC
  c->r[6]=c->r[1]+0x00000094u; // 800ACA00
  c->r[7]=c->r[1]+0x0000000Cu; // 800ACA04
  c->r[8]=0u+0x00000002u; // 800ACA08
  {uint32_t ea=c->r[2]+0xFFFF8620u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACA0C
  c->ctr=c->r[12]; // 800ACA10
  if (true) { c->lr=0x800ACA18u; dispatch(c,c->ctr); } // 800ACA14
  cmps(c,0,(int32_t)c->r[3],0); // 800ACA18
  c->r[29]=c->r[3]|c->r[3]; // 800ACA1C
  if (crb(c,2)) { goto L_800ACA48; } // 800ACA20
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACA24
  c->r[3]=c->r[1]+0x0000004Cu; // 800ACA28
  c->r[31]=0u+0x00000000u; // 800ACA2C
  c->f[2]=c->f[1]; // 800ACA30
  c->f[3]=c->f[1]; // 800ACA34
  c->lr=0x800ACA3Cu; f_8003C598(c); // 800ACA38
  c->r[4]=c->r[3]|c->r[3]; // 800ACA3C
  c->r[3]=c->r[1]+0x000000A0u; // 800ACA40
  c->lr=0x800ACA48u; f_8003C5CC(c); // 800ACA44
L_800ACA48:;
  c->r[3]=c->r[1]+0x00000088u; // 800ACA48
  c->r[4]=c->r[1]+0x000000ACu; // 800ACA4C
  c->r[5]=c->r[1]+0x000000A0u; // 800ACA50
  c->lr=0x800ACA58u; f_8003C604(c); // 800ACA54
  c->r[12]=R32(c->r[30]+0x00000000u); // 800ACA58
  c->r[3]=c->r[30]|c->r[30]; // 800ACA5C
  c->r[4]=c->r[1]+0x00000088u; // 800ACA60
  c->r[5]=c->r[1]+0x00000008u; // 800ACA64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ACA68
  c->r[6]=0u+0x00000002u; // 800ACA6C
  c->ctr=c->r[12]; // 800ACA70
  if (true) { c->lr=0x800ACA78u; dispatch(c,c->ctr); } // 800ACA74
  cmps(c,0,(int32_t)c->r[3],0); // 800ACA78
  if (crb(c,2)) { goto L_800ACAEC; } // 800ACA7C
  {uint32_t ea=c->r[2]+0xFFFF8670u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACA80
  c->r[4]=c->r[1]+0x0000007Cu; // 800ACA84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACA88
  {uint32_t ea=c->r[1]+0x000000ACu; psq_load(c,3,ea,0,0);} // 800ACA8C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 800ACA90
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACA94
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 800ACA98
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,1,ea,0,0);} // 800ACA9C
  {double t0=S(c->f[1]-c->f[3]), t1=S(c->ps1[1]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 800ACAA0
  {uint32_t ea=c->r[1]+0x00000090u; psq_load(c,1,ea,1,0);} // 800ACAA4
  {uint32_t ea=c->r[1]+0x000000B4u; psq_load(c,3,ea,1,0);} // 800ACAA8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 800ACAAC
  {double t0=S(c->f[1]-c->f[3]), t1=S(c->ps1[1]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 800ACAB0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACAB4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,4,ea,1,0);} // 800ACAB8
  fcmp(c,0,c->f[0],c->f[1]); // 800ACABC
  if (crb(c,2)) { goto L_800ACAE8; } // 800ACAC0
  fcmp(c,0,c->f[1],c->f[2]); // 800ACAC4
  if (!crb(c,0)) { goto L_800ACAE8; } // 800ACAC8
  {uint32_t ea=c->r[2]+0xFFFF8678u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACACC
  fcmp(c,0,c->f[1],c->f[0]); // 800ACAD0
  if (!crb(c,1)) { goto L_800ACAE8; } // 800ACAD4
  c->r[3]=c->r[1]+0x000000A0u; // 800ACAD8
  c->r[29]=0u+0x00000001u; // 800ACADC
  c->lr=0x800ACAE4u; f_8003C5CC(c); // 800ACAE0
  goto L_800ACAEC; // 800ACAE4
L_800ACAE8:;
  c->r[29]=0u+0x00000000u; // 800ACAE8
L_800ACAEC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800ACAEC
  if (crb(c,2)) { goto L_800ACB50; } // 800ACAF0
  c->r[12]=R32(c->r[30]+0x00000000u); // 800ACAF4
  c->r[3]=c->r[30]|c->r[30]; // 800ACAF8
  c->r[4]=c->r[1]+0x000000ACu; // 800ACAFC
  c->r[5]=c->r[1]+0x000000A0u; // 800ACB00
  c->r[12]=R32(c->r[12]+0x00000008u); // 800ACB04
  c->r[6]=c->r[1]+0x00000094u; // 800ACB08
  c->r[7]=c->r[1]+0x0000000Cu; // 800ACB0C
  c->r[8]=0u+0x00000002u; // 800ACB10
  {uint32_t ea=c->r[2]+0xFFFF8620u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACB14
  c->ctr=c->r[12]; // 800ACB18
  if (true) { c->lr=0x800ACB20u; dispatch(c,c->ctr); } // 800ACB1C
  cmps(c,0,(int32_t)c->r[3],0); // 800ACB20
  c->r[29]=c->r[3]|c->r[3]; // 800ACB24
  if (crb(c,2)) { goto L_800ACB50; } // 800ACB28
  {uint32_t ea=c->r[2]+0xFFFF8674u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACB2C
  c->r[3]=c->r[1]+0x00000040u; // 800ACB30
  c->r[4]=c->r[1]+0x00000094u; // 800ACB34
  c->lr=0x800ACB3Cu; f_8003C5E8(c); // 800ACB38
  c->r[3]=c->r[1]+0x000000A0u; // 800ACB3C
  c->r[5]=c->r[1]+0x00000040u; // 800ACB40
  c->r[4]=c->r[3]|c->r[3]; // 800ACB44
  c->lr=0x800ACB4Cu; f_8003C604(c); // 800ACB48
  c->r[31]=0u+0x00000001u; // 800ACB4C
L_800ACB50:;
  cmps(c,0,(int32_t)c->r[29],0); // 800ACB50
  if (crb(c,2)) { goto L_800ACBB0; } // 800ACB54
  c->r[12]=R32(c->r[30]+0x00000000u); // 800ACB58
  c->r[3]=c->r[30]|c->r[30]; // 800ACB5C
  c->r[4]=c->r[1]+0x000000ACu; // 800ACB60
  c->r[5]=c->r[1]+0x000000A0u; // 800ACB64
  c->r[12]=R32(c->r[12]+0x00000008u); // 800ACB68
  c->r[6]=c->r[1]+0x00000094u; // 800ACB6C
  c->r[7]=c->r[1]+0x0000000Cu; // 800ACB70
  c->r[8]=0u+0x00000002u; // 800ACB74
  {uint32_t ea=c->r[2]+0xFFFF8620u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACB78
  c->ctr=c->r[12]; // 800ACB7C
  if (true) { c->lr=0x800ACB84u; dispatch(c,c->ctr); } // 800ACB80
  cmps(c,0,(int32_t)c->r[3],0); // 800ACB84
  if (crb(c,2)) { goto L_800ACBB0; } // 800ACB88
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACB8C
  c->r[3]=c->r[1]+0x000000A0u; // 800ACB90
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACB94
  c->r[4]=c->r[1]+0x00000034u; // 800ACB98
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800ACB9C
  c->r[31]=0u+0x00000000u; // 800ACBA0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800ACBA4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800ACBA8
  c->lr=0x800ACBB0u; f_8003C5CC(c); // 800ACBAC
L_800ACBB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800ACBB0
  if (!crb(c,2)) { goto L_800ACC0C; } // 800ACBB4
  c->r[12]=R32(c->r[30]+0x00000000u); // 800ACBB8
  c->r[3]=c->r[30]|c->r[30]; // 800ACBBC
  c->r[4]=c->r[1]+0x000000ACu; // 800ACBC0
  c->r[5]=c->r[1]+0x000000A0u; // 800ACBC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800ACBC8
  c->r[6]=c->r[1]+0x00000094u; // 800ACBCC
  c->r[7]=c->r[1]+0x0000000Cu; // 800ACBD0
  c->r[8]=0u+0x00000002u; // 800ACBD4
  {uint32_t ea=c->r[2]+0xFFFF8624u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACBD8
  c->ctr=c->r[12]; // 800ACBDC
  if (true) { c->lr=0x800ACBE4u; dispatch(c,c->ctr); } // 800ACBE0
  cmps(c,0,(int32_t)c->r[3],0); // 800ACBE4
  if (crb(c,2)) { goto L_800ACC0C; } // 800ACBE8
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACBEC
  c->r[3]=c->r[1]+0x000000A0u; // 800ACBF0
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACBF4
  c->r[4]=c->r[1]+0x00000028u; // 800ACBF8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800ACBFC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800ACC00
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800ACC04
  c->lr=0x800ACC0Cu; f_8003C5CC(c); // 800ACC08
L_800ACC0C:;
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACC0C
  c->r[3]=c->r[25]+0x00000090u; // 800ACC10
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACC14
  c->r[4]=c->r[1]+0x0000001Cu; // 800ACC18
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACC1C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800ACC20
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800ACC24
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800ACC28
  c->lr=0x800ACC30u; f_800A6BD4(c); // 800ACC2C
  c->r[3]=c->r[1]+0x00000070u; // 800ACC30
  c->r[4]=c->r[25]+0x000000A8u; // 800ACC34
  c->lr=0x800ACC3Cu; f_8003B3BC(c); // 800ACC38
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACC3C
  c->r[3]=c->r[1]+0x00000070u; // 800ACC40
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800ACC44
  c->lr=0x800ACC4Cu; f_800411B4(c); // 800ACC48
  fcmp(c,0,c->f[1],c->f[31]); // 800ACC4C
  if (!crb(c,0)) { goto L_800ACC60; } // 800ACC50
  c->r[3]=c->r[25]+0x0000009Cu; // 800ACC54
  c->r[4]=c->r[25]+0x00000090u; // 800ACC58
  c->lr=0x800ACC60u; f_8003B3A0(c); // 800ACC5C
L_800ACC60:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 800ACC60
  c->r[3]=c->r[25]|c->r[25]; // 800ACC64
  c->r[4]=c->r[25]+0x00000090u; // 800ACC68
  c->r[12]=R32(c->r[12]+0x00000224u); // 800ACC6C
  c->ctr=c->r[12]; // 800ACC70
  if (true) { c->lr=0x800ACC78u; dispatch(c,c->ctr); } // 800ACC74
  c->r[3]=c->r[1]+0x00000010u; // 800ACC78
  c->r[4]=c->r[25]+0x0000009Cu; // 800ACC7C
  c->r[5]=c->r[25]+0x00000090u; // 800ACC80
  c->lr=0x800ACC88u; f_8003B44C(c); // 800ACC84
  c->r[3]=c->r[25]+0x000000A8u; // 800ACC88
  c->r[4]=c->r[1]+0x00000010u; // 800ACC8C
  c->lr=0x800ACC94u; f_8003B3A0(c); // 800ACC90
  c->r[3]=c->r[30]|c->r[30]; // 800ACC94
  c->r[4]=c->r[25]|c->r[25]; // 800ACC98
  c->lr=0x800ACCA0u; f_80035B1C(c); // 800ACC9C
L_800ACCA0:;
  cmps(c,0,(int32_t)c->r[28],0); // 800ACCA0
  if (crb(c,2)) { goto L_800ACCB8; } // 800ACCA4
  c->r[3]=c->r[25]|c->r[25]; // 800ACCA8
  c->r[6]=c->r[26]|c->r[26]; // 800ACCAC
  c->r[5]=c->r[27]|c->r[27]; // 800ACCB0
  c->lr=0x800ACCB8u; f_800AA4F8(c); // 800ACCB4
L_800ACCB8:;
  c->r[0]=R8(c->r[25]+0x000001C0u); // 800ACCB8
  c->r[0]=c->r[0]|0x00000080u; // 800ACCBC
  W8(c->r[25]+0x000001C0u,c->r[0]); // 800ACCC0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800ACCC4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800ACCC8
  c->r[11]=c->r[1]+0x000000E0u; // 800ACCCC
  c->lr=0x800ACCD4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ACCD0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800ACCD4
  c->lr=c->r[0]; // 800ACCD8
  c->r[1]=c->r[1]+0x000000F0u; // 800ACCDC
  return; // 800ACCE0
}

// fn_800ACCE4
void f_800ACCE4(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000027Cu); // 800ACCE4
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 800ACCE8
  if (!crb(c,2)) return; // 800ACCEC
  f_800AA408(c); return; // 800ACCF0
  return; // 800ACCF4
}

// fn_800ACCF8
void f_800ACCF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACCF8
  c->r[0]=c->lr; // 800ACCFC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ACD00
  c->r[11]=c->r[1]+0x00000040u; // 800ACD04
  c->lr=0x800ACD0Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ACD08
  c->r[11]=0u+0x80280000u; // 800ACD0C
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACD10
  c->r[11]=c->r[11]+0xFFFFEF8Cu; // 800ACD14
  c->r[31]=0u+0x00000000u; // 800ACD18
  c->r[10]=c->r[11]+0x0000001Cu; // 800ACD1C
  W32(c->r[3]+0x00000010u,c->r[4]); // 800ACD20
  c->r[0]=c->r[11]+0x00000120u; // 800ACD24
  c->r[28]=c->r[3]|c->r[3]; // 800ACD28
  W32(c->r[3]+0x00000000u,c->r[11]); // 800ACD2C
  c->r[26]=c->r[5]|c->r[5]; // 800ACD30
  c->r[27]=c->r[7]|c->r[7]; // 800ACD34
  c->r[29]=c->r[8]|c->r[8]; // 800ACD38
  W32(c->r[3]+0x00000004u,c->r[10]); // 800ACD3C
  c->r[4]=0u+0x00000000u; // 800ACD40
  W32(c->r[3]+0x00000008u,c->r[0]); // 800ACD44
  W32(c->r[3]+0x0000000Cu,c->r[9]); // 800ACD48
  W32(c->r[3]+0x00000014u,c->r[6]); // 800ACD4C
  W32(c->r[3]+0x00000018u,c->r[8]); // 800ACD50
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800ACD54
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800ACD58
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800ACD5C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800ACD60
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800ACD64
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800ACD68
  W32(c->r[3]+0x00000034u,c->r[31]); // 800ACD6C
  c->r[3]=c->r[3]+0x0000003Cu; // 800ACD70
  c->lr=0x800ACD78u; f_800A23F8(c); // 800ACD74
  c->r[3]=c->r[28]+0x00000040u; // 800ACD78
  c->r[4]=0u+0x00000000u; // 800ACD7C
  c->lr=0x800ACD84u; f_800A7E04(c); // 800ACD80
  W32(c->r[28]+0x00000044u,c->r[31]); // 800ACD84
  c->r[3]=c->r[28]+0x00000048u; // 800ACD88
  c->lr=0x800ACD90u; f_80032504(c); // 800ACD8C
  c->r[0]=0u+0xFFFFFFFFu; // 800ACD90
  c->r[30]=0u+0x00000006u; // 800ACD94
  W32(c->r[28]+0x00000060u,c->r[0]); // 800ACD98
  c->r[3]=c->r[28]+0x00000070u; // 800ACD9C
  {uint32_t ea=c->r[2]+0xFFFF867Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACDA0
  W32(c->r[28]+0x00000064u,c->r[31]); // 800ACDA4
  {uint32_t ea=c->r[2]+0xFFFF8680u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACDA8
  W32(c->r[28]+0x00000068u,c->r[31]); // 800ACDAC
  {uint32_t ea=c->r[2]+0xFFFF8684u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ACDB0
  W32(c->r[28]+0x0000006Cu,c->r[30]); // 800ACDB4
  {uint32_t ea=c->r[2]+0xFFFF8688u; c->f[4]=c->ps1[4]=RF32(ea);} // 800ACDB8
  c->lr=0x800ACDC0u; f_800A6DC4(c); // 800ACDBC
  W32(c->r[28]+0x000000A0u,c->r[30]); // 800ACDC0
  c->r[3]=c->r[28]+0x000000A4u; // 800ACDC4
  {uint32_t ea=c->r[2]+0xFFFF867Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACDC8
  {uint32_t ea=c->r[2]+0xFFFF8680u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACDCC
  {uint32_t ea=c->r[2]+0xFFFF8684u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ACDD0
  {uint32_t ea=c->r[2]+0xFFFF8688u; c->f[4]=c->ps1[4]=RF32(ea);} // 800ACDD4
  c->lr=0x800ACDDCu; f_800A6DC4(c); // 800ACDD8
  c->r[0]=R8(c->r[28]+0x000000D4u); // 800ACDDC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 800ACDE0
  W8(c->r[28]+0x000000D4u,c->r[0]); // 800ACDE4
  c->lr=0x800ACDECu; f_8004328C(c); // 800ACDE8
  c->r[4]=R32(c->r[28]+0x00000010u); // 800ACDEC
  c->r[30]=c->r[3]|c->r[3]; // 800ACDF0
  c->lr=0x800ACDF8u; f_80044C48(c); // 800ACDF4
  W32(c->r[1]+0x00000020u,c->r[3]); // 800ACDF8
  c->r[3]=c->r[1]+0x00000020u; // 800ACDFC
  c->lr=0x800ACE04u; f_801A96B4(c); // 800ACE00
  c->r[0]=R32(c->r[1]+0x00000020u); // 800ACE04
  c->r[3]=c->r[1]+0x00000020u; // 800ACE08
  c->r[4]=c->r[1]+0x0000000Cu; // 800ACE0C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ACE10
  c->lr=0x800ACE18u; f_801A9480(c); // 800ACE14
  c->r[4]=R32(c->r[28]+0x00000014u); // 800ACE18
  c->r[3]=c->r[30]|c->r[30]; // 800ACE1C
  c->lr=0x800ACE24u; f_80044C48(c); // 800ACE20
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800ACE24
  c->r[3]=c->r[1]+0x0000001Cu; // 800ACE28
  c->lr=0x800ACE30u; f_801A96B4(c); // 800ACE2C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800ACE30
  c->r[3]=c->r[1]+0x0000001Cu; // 800ACE34
  c->r[4]=c->r[1]+0x00000008u; // 800ACE38
  W32(c->r[1]+0x00000008u,c->r[0]); // 800ACE3C
  c->lr=0x800ACE44u; f_801A9480(c); // 800ACE40
  c->r[4]=c->r[26]|c->r[26]; // 800ACE44
  c->r[3]=c->r[1]+0x00000020u; // 800ACE48
  c->lr=0x800ACE50u; f_801A8CA8(c); // 800ACE4C
  W32(c->r[28]+0x0000003Cu,c->r[3]); // 800ACE50
  c->r[4]=c->r[27]|c->r[27]; // 800ACE54
  c->r[3]=c->r[1]+0x0000001Cu; // 800ACE58
  c->lr=0x800ACE60u; f_801A8CA8(c); // 800ACE5C
  {uint32_t ea=c->r[2]+0xFFFF8608u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ACE60
  c->r[4]=0u+0x802B0000u; // 800ACE64
  {uint32_t ea=c->r[2]+0xFFFF8604u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACE68
  c->r[4]=c->r[4]+0x00001B78u; // 800ACE6C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACE70
  c->r[31]=c->r[3]|c->r[3]; // 800ACE74
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACE78
  c->r[3]=c->r[4]+0x00001734u; // 800ACE7C
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 800ACE80
  c->r[4]=c->r[1]+0x00000018u; // 800ACE84
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 800ACE88
  c->r[5]=c->r[1]+0x00000014u; // 800ACE8C
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[2]);} // 800ACE90
  c->r[6]=0u+0x00000000u; // 800ACE94
  c->r[7]=0u+0x00000001u; // 800ACE98
  {uint32_t ea=c->r[28]+0x00000030u; WF32(ea,c->f[3]);} // 800ACE9C
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[1]);} // 800ACEA0
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 800ACEA4
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[1]);} // 800ACEA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ACEAC
  c->lr=0x800ACEB4u; f_801C9F0C(c); // 800ACEB0
  c->r[12]=rotl(c->r[3],0)&0xFF000000u; // 800ACEB4
  W32(c->r[28]+0x00000034u,c->r[3]); // 800ACEB8
  c->r[0]=c->r[12]+0x80000000u; // 800ACEBC
  c->r[6]=c->r[3]|c->r[3]; // 800ACEC0
  cmpu(c,0,c->r[0],0x00000000u); // 800ACEC4
  c->r[5]=0u+0x00000001u; // 800ACEC8
  c->r[7]=0u+0x00000001u; // 800ACECC
  c->r[8]=0u+0x00000001u; // 800ACED0
  c->r[9]=0u+0x00000001u; // 800ACED4
  c->r[10]=0u+0x00000001u; // 800ACED8
  c->r[11]=0u+0x00000001u; // 800ACEDC
  if (crb(c,2)) { goto L_800ACEF8; } // 800ACEE0
  c->r[4]=rotl(c->r[3],0)&0xFF800000u; // 800ACEE4
  c->r[0]=c->r[4]+0x7F000000u; // 800ACEE8
  cmpu(c,0,c->r[0],0x00000000u); // 800ACEEC
  if (crb(c,2)) { goto L_800ACEF8; } // 800ACEF0
  c->r[11]=0u+0x00000000u; // 800ACEF4
L_800ACEF8:;
  cmps(c,0,(int32_t)c->r[11],0); // 800ACEF8
  if (!crb(c,2)) { goto L_800ACF14; } // 800ACEFC
  c->r[4]=rotl(c->r[3],0)&0xF8000000u; // 800ACF00
  c->r[0]=c->r[4]+0x70000000u; // 800ACF04
  cmpu(c,0,c->r[0],0x00000000u); // 800ACF08
  if (crb(c,2)) { goto L_800ACF14; } // 800ACF0C
  c->r[10]=0u+0x00000000u; // 800ACF10
L_800ACF14:;
  cmps(c,0,(int32_t)c->r[10],0); // 800ACF14
  if (!crb(c,2)) { goto L_800ACF2C; } // 800ACF18
  c->r[0]=c->r[12]+0x40000000u; // 800ACF1C
  cmpu(c,0,c->r[0],0x00000000u); // 800ACF20
  if (crb(c,2)) { goto L_800ACF2C; } // 800ACF24
  c->r[9]=0u+0x00000000u; // 800ACF28
L_800ACF2C:;
  cmps(c,0,(int32_t)c->r[9],0); // 800ACF2C
  if (!crb(c,2)) { goto L_800ACF48; } // 800ACF30
  c->r[4]=rotl(c->r[3],0)&0xFF800000u; // 800ACF34
  c->r[0]=c->r[4]+0x3F000000u; // 800ACF38
  cmpu(c,0,c->r[0],0x00000000u); // 800ACF3C
  if (crb(c,2)) { goto L_800ACF48; } // 800ACF40
  c->r[8]=0u+0x00000000u; // 800ACF44
L_800ACF48:;
  cmps(c,0,(int32_t)c->r[8],0); // 800ACF48
  if (!crb(c,2)) { goto L_800ACF64; } // 800ACF4C
  c->r[4]=rotl(c->r[3],0)&0xF8000000u; // 800ACF50
  c->r[0]=c->r[4]+0x30000000u; // 800ACF54
  cmpu(c,0,c->r[0],0x00000000u); // 800ACF58
  if (crb(c,2)) { goto L_800ACF64; } // 800ACF5C
  c->r[7]=0u+0x00000000u; // 800ACF60
L_800ACF64:;
  cmps(c,0,(int32_t)c->r[7],0); // 800ACF64
  if (!crb(c,2)) { goto L_800ACF80; } // 800ACF68
  c->r[3]=rotl(c->r[3],0)&0xFFFFC000u; // 800ACF6C
  c->r[0]=c->r[3]+0x20000000u; // 800ACF70
  cmpu(c,0,c->r[0],0x00000000u); // 800ACF74
  if (crb(c,2)) { goto L_800ACF80; } // 800ACF78
  c->r[5]=0u+0x00000000u; // 800ACF7C
L_800ACF80:;
  cmps(c,0,(int32_t)c->r[5],0); // 800ACF80
  if (!crb(c,2)) { goto L_800ACFA0; } // 800ACF84
  c->r[3]=0u+0x80260000u; // 800ACF88
  c->r[4]=0u+0x0000119Fu; // 800ACF8C
  c->r[3]=c->r[3]+0xFFFFD18Bu; // 800ACF90
  c->r[5]=c->r[3]+0x000000EBu; // 800ACF94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800ACF98
  c->lr=0x800ACFA0u; f_801839BC(c); // 800ACF9C
L_800ACFA0:;
  c->r[3]=0u+0x802B0000u; // 800ACFA0
  W32(c->r[1]+0x00000010u,c->r[31]); // 800ACFA4
  c->r[3]=c->r[3]+0x00001B78u; // 800ACFA8
  c->r[4]=c->r[1]+0x00000018u; // 800ACFAC
  c->r[3]=c->r[3]+0x00001734u; // 800ACFB0
  c->r[5]=c->r[1]+0x00000010u; // 800ACFB4
  c->r[6]=0u+0x00000000u; // 800ACFB8
  c->r[7]=0u+0x00000001u; // 800ACFBC
  c->lr=0x800ACFC4u; f_801C9F0C(c); // 800ACFC0
  c->r[12]=rotl(c->r[3],0)&0xFF000000u; // 800ACFC4
  W32(c->r[28]+0x00000038u,c->r[3]); // 800ACFC8
  c->r[0]=c->r[12]+0x80000000u; // 800ACFCC
  c->r[6]=c->r[3]|c->r[3]; // 800ACFD0
  cmpu(c,0,c->r[0],0x00000000u); // 800ACFD4
  c->r[5]=0u+0x00000001u; // 800ACFD8
  c->r[7]=0u+0x00000001u; // 800ACFDC
  c->r[8]=0u+0x00000001u; // 800ACFE0
  c->r[9]=0u+0x00000001u; // 800ACFE4
  c->r[10]=0u+0x00000001u; // 800ACFE8
  c->r[11]=0u+0x00000001u; // 800ACFEC
  if (crb(c,2)) { goto L_800AD008; } // 800ACFF0
  c->r[4]=rotl(c->r[3],0)&0xFF800000u; // 800ACFF4
  c->r[0]=c->r[4]+0x7F000000u; // 800ACFF8
  cmpu(c,0,c->r[0],0x00000000u); // 800ACFFC
  if (crb(c,2)) { goto L_800AD008; } // 800AD000
  c->r[11]=0u+0x00000000u; // 800AD004
L_800AD008:;
  cmps(c,0,(int32_t)c->r[11],0); // 800AD008
  if (!crb(c,2)) { goto L_800AD024; } // 800AD00C
  c->r[4]=rotl(c->r[3],0)&0xF8000000u; // 800AD010
  c->r[0]=c->r[4]+0x70000000u; // 800AD014
  cmpu(c,0,c->r[0],0x00000000u); // 800AD018
  if (crb(c,2)) { goto L_800AD024; } // 800AD01C
  c->r[10]=0u+0x00000000u; // 800AD020
L_800AD024:;
  cmps(c,0,(int32_t)c->r[10],0); // 800AD024
  if (!crb(c,2)) { goto L_800AD03C; } // 800AD028
  c->r[0]=c->r[12]+0x40000000u; // 800AD02C
  cmpu(c,0,c->r[0],0x00000000u); // 800AD030
  if (crb(c,2)) { goto L_800AD03C; } // 800AD034
  c->r[9]=0u+0x00000000u; // 800AD038
L_800AD03C:;
  cmps(c,0,(int32_t)c->r[9],0); // 800AD03C
  if (!crb(c,2)) { goto L_800AD058; } // 800AD040
  c->r[4]=rotl(c->r[3],0)&0xFF800000u; // 800AD044
  c->r[0]=c->r[4]+0x3F000000u; // 800AD048
  cmpu(c,0,c->r[0],0x00000000u); // 800AD04C
  if (crb(c,2)) { goto L_800AD058; } // 800AD050
  c->r[8]=0u+0x00000000u; // 800AD054
L_800AD058:;
  cmps(c,0,(int32_t)c->r[8],0); // 800AD058
  if (!crb(c,2)) { goto L_800AD074; } // 800AD05C
  c->r[4]=rotl(c->r[3],0)&0xF8000000u; // 800AD060
  c->r[0]=c->r[4]+0x30000000u; // 800AD064
  cmpu(c,0,c->r[0],0x00000000u); // 800AD068
  if (crb(c,2)) { goto L_800AD074; } // 800AD06C
  c->r[7]=0u+0x00000000u; // 800AD070
L_800AD074:;
  cmps(c,0,(int32_t)c->r[7],0); // 800AD074
  if (!crb(c,2)) { goto L_800AD090; } // 800AD078
  c->r[3]=rotl(c->r[3],0)&0xFFFFC000u; // 800AD07C
  c->r[0]=c->r[3]+0x20000000u; // 800AD080
  cmpu(c,0,c->r[0],0x00000000u); // 800AD084
  if (crb(c,2)) { goto L_800AD090; } // 800AD088
  c->r[5]=0u+0x00000000u; // 800AD08C
L_800AD090:;
  cmps(c,0,(int32_t)c->r[5],0); // 800AD090
  if (!crb(c,2)) { goto L_800AD0B0; } // 800AD094
  c->r[3]=0u+0x80260000u; // 800AD098
  c->r[4]=0u+0x000011AAu; // 800AD09C
  c->r[3]=c->r[3]+0xFFFFD18Bu; // 800AD0A0
  c->r[5]=c->r[3]+0x00000456u; // 800AD0A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD0A8
  c->lr=0x800AD0B0u; f_801839BC(c); // 800AD0AC
L_800AD0B0:;
  c->r[3]=c->r[1]+0x00000020u; // 800AD0B0
  c->r[4]=0u+0x00000000u; // 800AD0B4
  c->lr=0x800AD0BCu; f_801A9220(c); // 800AD0B8
  W32(c->r[28]+0x00000044u,c->r[3]); // 800AD0BC
  c->r[3]=c->r[30]|c->r[30]; // 800AD0C0
  c->r[4]=c->r[29]|c->r[29]; // 800AD0C4
  W32(c->r[28]+0x00000060u,c->r[29]); // 800AD0C8
  c->lr=0x800AD0D0u; f_80044D50(c); // 800AD0CC
  c->r[29]=c->r[3]|c->r[3]; // 800AD0D0
  c->lr=0x800AD0D8u; f_800AF134(c); // 800AD0D4
  W32(c->r[28]+0x00000064u,c->r[3]); // 800AD0D8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 800AD0DC
  c->r[4]=0u+0x00000000u; // 800AD0E0
  c->lr=0x800AD0E8u; f_80092158(c); // 800AD0E4
  W32(c->r[28]+0x00000068u,c->r[3]); // 800AD0E8
  c->r[4]=c->r[3]|c->r[3]; // 800AD0EC
  c->r[3]=c->r[29]|c->r[29]; // 800AD0F0
  c->lr=0x800AD0F8u; f_800AF1A4(c); // 800AD0F4
  c->r[30]=0u+0x00000000u; // 800AD0F8
  c->r[29]=0u+0x00000000u; // 800AD0FC
  goto L_800AD148; // 800AD100
L_800AD104:;
  c->r[0]=R32(c->r[28]+0x00000068u); // 800AD104
  c->r[3]=c->r[0]+c->r[29]; // 800AD108
  c->lr=0x800AD110u; f_8009118C(c); // 800AD10C
  cmps(c,0,(int32_t)c->r[3],0); // 800AD110
  if (crb(c,2)) { goto L_800AD12C; } // 800AD114
  c->r[0]=R32(c->r[28]+0x00000068u); // 800AD118
  c->r[4]=c->r[30]|c->r[30]; // 800AD11C
  c->r[3]=c->r[28]+0x0000006Cu; // 800AD120
  c->r[5]=c->r[0]+c->r[29]; // 800AD124
  c->lr=0x800AD12Cu; f_800A8170(c); // 800AD128
L_800AD12C:;
  c->r[0]=R32(c->r[28]+0x00000068u); // 800AD12C
  c->r[4]=c->r[30]|c->r[30]; // 800AD130
  c->r[3]=c->r[28]+0x000000A0u; // 800AD134
  c->r[5]=c->r[0]+c->r[29]; // 800AD138
  c->lr=0x800AD140u; f_800A8170(c); // 800AD13C
  c->r[30]=c->r[30]+0x00000001u; // 800AD140
  c->r[29]=c->r[29]+0x0000004Cu; // 800AD144
L_800AD148:;
  c->r[0]=R32(c->r[28]+0x00000064u); // 800AD148
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800AD14C
  if (crb(c,0)) { IRQCHK(c); goto L_800AD104; } // 800AD150
  c->r[0]=R8(c->r[28]+0x000000D4u); // 800AD154
  c->r[11]=c->r[1]+0x00000040u; // 800AD158
  c->r[3]=c->r[28]|c->r[28]; // 800AD15C
  c->r[0]=c->r[0]|0x000000C0u; // 800AD160
  W8(c->r[28]+0x000000D4u,c->r[0]); // 800AD164
  c->lr=0x800AD16Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AD168
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AD16C
  c->lr=c->r[0]; // 800AD170
  c->r[1]=c->r[1]+0x00000040u; // 800AD174
  return; // 800AD178
}

// fn_800AD17C
void f_800AD17C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD17C
  c->r[0]=c->lr; // 800AD180
  cmps(c,0,(int32_t)c->r[3],0); // 800AD184
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD188
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD18C
  c->r[30]=c->r[3]|c->r[3]; // 800AD190
  c->r[31]=c->r[4]|c->r[4]; // 800AD194
  if (crb(c,2)) { goto L_800AD214; } // 800AD198
  c->r[5]=0u+0x80280000u; // 800AD19C
  c->r[5]=c->r[5]+0xFFFFEF8Cu; // 800AD1A0
  c->r[4]=c->r[5]+0x0000001Cu; // 800AD1A4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800AD1A8
  c->r[0]=c->r[5]+0x00000120u; // 800AD1AC
  W32(c->r[3]+0x00000004u,c->r[4]); // 800AD1B0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800AD1B4
  c->r[3]=R32(c->r[3]+0x00000034u); // 800AD1B8
  c->lr=0x800AD1C0u; f_801B7B74(c); // 800AD1BC
  c->r[3]=R32(c->r[30]+0x00000034u); // 800AD1C0
  c->lr=0x800AD1C8u; f_801B7AFC(c); // 800AD1C4
  c->r[3]=R32(c->r[30]+0x00000068u); // 800AD1C8
  cmps(c,0,(int32_t)c->r[3],0); // 800AD1CC
  if (crb(c,2)) { goto L_800AD1E0; } // 800AD1D0
  c->lr=0x800AD1D8u; f_8009227C(c); // 800AD1D4
  c->r[0]=0u+0x00000000u; // 800AD1D8
  W32(c->r[30]+0x00000068u,c->r[0]); // 800AD1DC
L_800AD1E0:;
  c->r[3]=c->r[30]+0x000000A0u; // 800AD1E0
  c->r[4]=0u+0xFFFFFFFFu; // 800AD1E4
  c->lr=0x800AD1ECu; f_800A6FB0(c); // 800AD1E8
  c->r[3]=c->r[30]+0x0000006Cu; // 800AD1EC
  c->r[4]=0u+0xFFFFFFFFu; // 800AD1F0
  c->lr=0x800AD1F8u; f_800A6FB0(c); // 800AD1F4
  c->r[3]=c->r[30]+0x00000048u; // 800AD1F8
  c->r[4]=0u+0xFFFFFFFFu; // 800AD1FC
  c->lr=0x800AD204u; f_80032534(c); // 800AD200
  cmps(c,0,(int32_t)c->r[31],0); // 800AD204
  if (!crb(c,1)) { goto L_800AD214; } // 800AD208
  c->r[3]=c->r[30]|c->r[30]; // 800AD20C
  c->lr=0x800AD214u; f_8009230C(c); // 800AD210
L_800AD214:;
  c->r[3]=c->r[30]|c->r[30]; // 800AD214
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD218
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD21C
  c->lr=c->r[0]; // 800AD220
  c->r[1]=c->r[1]+0x00000010u; // 800AD224
  return; // 800AD228
}

// fn_800AD22C
void f_800AD22C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD22C
  c->f[2]=c->f[1]; // 800AD230
  c->f[3]=c->f[1]; // 800AD234
  f_8003B43C(c); return; // 800AD238
}

// fn_800AD23C
void f_800AD23C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 800AD23C
  f_80032574(c); return; // 800AD240
}

// fn_800AD244
void f_800AD244(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 800AD244
  f_80032598(c); return; // 800AD248
}

// fn_800AD24C
void f_800AD24C(Ctx* __restrict c) {
  c->r[3]=0u+0x80260000u; // 800AD24C
  c->r[3]=c->r[3]+0xFFFFD18Bu; // 800AD250
  c->r[3]=c->r[3]+0x00000494u; // 800AD254
  return; // 800AD258
}

// fn_800AD25C
void f_800AD25C(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)76); // 800AD25C
  c->r[3]=R32(c->r[3]+0x00000068u); // 800AD260
  c->r[3]=c->r[3]+c->r[0]; // 800AD264
  return; // 800AD268
}

// fn_800AD26C
void f_800AD26C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD26C
  c->r[0]=c->lr; // 800AD270
  W32(c->r[1]+0x00000044u,c->r[0]); // 800AD274
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800AD278
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800AD27C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800AD280
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800AD284
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 800AD288
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 800AD28C
  c->r[5]=0u+0x80280000u; // 800AD290
  c->r[5]=c->r[5]+0xFFFFED68u; // 800AD294
  c->f[29]=c->f[1]; // 800AD298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD29C
  c->f[30]=c->f[2]; // 800AD2A0
  c->r[0]=c->r[5]+0x0000001Cu; // 800AD2A4
  c->f[31]=c->f[3]; // 800AD2A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AD2AC
  c->r[30]=c->r[3]|c->r[3]; // 800AD2B0
  c->r[31]=c->r[4]|c->r[4]; // 800AD2B4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800AD2B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800AD2BC
  c->r[3]=c->r[3]+0x00000030u; // 800AD2C0
  c->lr=0x800AD2C8u; f_80032504(c); // 800AD2C4
  {uint32_t ea=c->r[2]+0xFFFF861Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD2C8
  c->r[3]=c->r[30]|c->r[30]; // 800AD2CC
  W32(c->r[30]+0x00000008u,c->r[31]); // 800AD2D0
  c->f[5]=c->ps1[5]=S(c->f[0]+c->f[29]); // 800AD2D4
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[30]); // 800AD2D8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[29]);} // 800AD2DC
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[31]); // 800AD2E0
  c->f[2]=c->ps1[2]=S(c->f[29]-c->f[0]); // 800AD2E4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[30]);} // 800AD2E8
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[0]); // 800AD2EC
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[0]); // 800AD2F0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[31]);} // 800AD2F4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 800AD2F8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[4]);} // 800AD2FC
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[3]);} // 800AD300
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[2]);} // 800AD304
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 800AD308
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800AD30C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800AD310
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800AD314
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800AD318
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800AD31C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 800AD320
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 800AD324
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD328
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AD32C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AD330
  c->lr=c->r[0]; // 800AD334
  c->r[1]=c->r[1]+0x00000040u; // 800AD338
  return; // 800AD33C
}

// fn_800AD340
void f_800AD340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD340
  c->r[0]=c->lr; // 800AD344
  cmps(c,0,(int32_t)c->r[3],0); // 800AD348
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD34C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD350
  c->r[30]=c->r[3]|c->r[3]; // 800AD354
  c->r[31]=c->r[4]|c->r[4]; // 800AD358
  if (crb(c,2)) { goto L_800AD37C; } // 800AD35C
  c->r[4]=0u+0xFFFFFFFFu; // 800AD360
  c->r[3]=c->r[3]+0x00000030u; // 800AD364
  c->lr=0x800AD36Cu; f_80032534(c); // 800AD368
  cmps(c,0,(int32_t)c->r[31],0); // 800AD36C
  if (!crb(c,1)) { goto L_800AD37C; } // 800AD370
  c->r[3]=c->r[30]|c->r[30]; // 800AD374
  c->lr=0x800AD37Cu; f_8009230C(c); // 800AD378
L_800AD37C:;
  c->r[3]=c->r[30]|c->r[30]; // 800AD37C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD380
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD384
  c->lr=c->r[0]; // 800AD388
  c->r[1]=c->r[1]+0x00000010u; // 800AD38C
  return; // 800AD390
}

// fn_800AD394
void f_800AD394(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800AD394
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800AD398
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 800AD39C
  return; // 800AD3A0
}

// fn_800AD3A4
void f_800AD3A4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000000Cu; // 800AD3A4
  f_8003B3A0(c); return; // 800AD3A8
}

// fn_800AD3AC
void f_800AD3AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD3AC
  return; // 800AD3B0
}

// fn_800AD3B4
void f_800AD3B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD3B4
  return; // 800AD3B8
}

// fn_800AD3BC
void f_800AD3BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD3BC
  return; // 800AD3C0
}

// fn_800AD3C4
void f_800AD3C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD3C4
  return; // 800AD3C8
}

// fn_800AD3CC
void f_800AD3CC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000030u; // 800AD3CC
  f_80032574(c); return; // 800AD3D0
}

// fn_800AD3D4
void f_800AD3D4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000030u; // 800AD3D4
  f_80032598(c); return; // 800AD3D8
}

// fn_800AD3DC
void f_800AD3DC(Ctx* __restrict c) {
  c->r[3]=0u+0x80260000u; // 800AD3DC
  c->r[3]=c->r[3]+0xFFFFD18Bu; // 800AD3E0
  c->r[3]=c->r[3]+0x00000498u; // 800AD3E4
  return; // 800AD3E8
}

// fn_800AD3EC
void f_800AD3EC(Ctx* __restrict c) {
  return; // 800AD3EC
}

// fn_800AD3F0
void f_800AD3F0(Ctx* __restrict c) {
  return; // 800AD3F0
}

// fn_800AD3F4
void f_800AD3F4(Ctx* __restrict c) {
  return; // 800AD3F4
}

// fn_800AD3F8
void f_800AD3F8(Ctx* __restrict c) {
  c->r[3]=0u+0x802D0000u; // 800AD3F8
  c->r[3]=c->r[3]+0xFFFF9554u; // 800AD3FC
  return; // 800AD400
}

// fn_800AD404
void f_800AD404(Ctx* __restrict c) {
  return; // 800AD404
}

// fn_800AD408
void f_800AD408(Ctx* __restrict c) {
  return; // 800AD408
}

// fn_800AD40C
void f_800AD40C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD40C
  return; // 800AD410
}

// fn_800AD414
void f_800AD414(Ctx* __restrict c) {
  return; // 800AD414
}

// fn_800AD418
void f_800AD418(Ctx* __restrict c) {
  return; // 800AD418
}

// fn_800AD41C
void f_800AD41C(Ctx* __restrict c) {
  return; // 800AD41C
}

// fn_800AD420
void f_800AD420(Ctx* __restrict c) {
  return; // 800AD420
}

// fn_800AD424
void f_800AD424(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD424
  return; // 800AD428
}

// fn_800AD42C
void f_800AD42C(Ctx* __restrict c) {
  return; // 800AD42C
}

// fn_800AD430
void f_800AD430(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 800AD430
  return; // 800AD434
}

// fn_800AD438
void f_800AD438(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD438
  return; // 800AD43C
}

// fn_800AD440
void f_800AD440(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD440
  return; // 800AD444
}

// fn_800AD448
void f_800AD448(Ctx* __restrict c) {
  return; // 800AD448
}

// fn_800AD44C
void f_800AD44C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD44C
  return; // 800AD450
}

// fn_800AD454
void f_800AD454(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD454
  return; // 800AD458
}

// fn_800AD45C
void f_800AD45C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD45C
  return; // 800AD460
}

// fn_800AD464
void f_800AD464(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000018u; // 800AD464
  return; // 800AD468
}

// fn_800AD46C
void f_800AD46C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000024u; // 800AD46C
  return; // 800AD470
}

// fn_800AD474
void f_800AD474(Ctx* __restrict c) {
  return; // 800AD474
}

// fn_800AD478
void f_800AD478(Ctx* __restrict c) {
  c->r[3]=0u+0xFFFFFFFFu; // 800AD478
  return; // 800AD47C
}

// fn_800AD480
void f_800AD480(Ctx* __restrict c) {
  return; // 800AD480
}

// fn_800AD484
void f_800AD484(Ctx* __restrict c) {
  return; // 800AD484
}

// fn_800AD488
void f_800AD488(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD488
  return; // 800AD48C
}

// fn_800AD490
void f_800AD490(Ctx* __restrict c) {
  return; // 800AD490
}

// fn_800AD494
void f_800AD494(Ctx* __restrict c) {
  return; // 800AD494
}

// fn_800AD498
void f_800AD498(Ctx* __restrict c) {
  return; // 800AD498
}

// fn_800AD49C
void f_800AD49C(Ctx* __restrict c) {
  return; // 800AD49C
}

// fn_800AD4A0
void f_800AD4A0(Ctx* __restrict c) {
  return; // 800AD4A0
}

// fn_800AD4A4
void f_800AD4A4(Ctx* __restrict c) {
  return; // 800AD4A4
}

// fn_800AD4A8
void f_800AD4A8(Ctx* __restrict c) {
  return; // 800AD4A8
}

// fn_800AD4AC
void f_800AD4AC(Ctx* __restrict c) {
  return; // 800AD4AC
}

// fn_800AD4B0
void f_800AD4B0(Ctx* __restrict c) {
  return; // 800AD4B0
}

// fn_800AD4B4
void f_800AD4B4(Ctx* __restrict c) {
  return; // 800AD4B4
}

// fn_800AD4B8
void f_800AD4B8(Ctx* __restrict c) {
  return; // 800AD4B8
}

// fn_800AD4BC
void f_800AD4BC(Ctx* __restrict c) {
  return; // 800AD4BC
}

// fn_800AD4C0
void f_800AD4C0(Ctx* __restrict c) {
  return; // 800AD4C0
}

// fn_800AD4C4
void f_800AD4C4(Ctx* __restrict c) {
  return; // 800AD4C4
}

// fn_800AD4C8
void f_800AD4C8(Ctx* __restrict c) {
  return; // 800AD4C8
}

// fn_800AD4CC
void f_800AD4CC(Ctx* __restrict c) {
  return; // 800AD4CC
}

// fn_800AD4D0
void f_800AD4D0(Ctx* __restrict c) {
  return; // 800AD4D0
}

// fn_800AD4D4
void f_800AD4D4(Ctx* __restrict c) {
  return; // 800AD4D4
}

// fn_800AD4D8
void f_800AD4D8(Ctx* __restrict c) {
  return; // 800AD4D8
}

// fn_800AD4DC
void f_800AD4DC(Ctx* __restrict c) {
  return; // 800AD4DC
}

// fn_800AD4E0
void f_800AD4E0(Ctx* __restrict c) {
  return; // 800AD4E0
}

// fn_800AD4E4
void f_800AD4E4(Ctx* __restrict c) {
  return; // 800AD4E4
}

// fn_800AD4E8
void f_800AD4E8(Ctx* __restrict c) {
  return; // 800AD4E8
}

// fn_800AD4EC
void f_800AD4EC(Ctx* __restrict c) {
  return; // 800AD4EC
}

// fn_800AD4F0
void f_800AD4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD4F0
  return; // 800AD4F4
}

// fn_800AD4F8
void f_800AD4F8(Ctx* __restrict c) {
  return; // 800AD4F8
}

// fn_800AD4FC
void f_800AD4FC(Ctx* __restrict c) {
  return; // 800AD4FC
}

// fn_800AD500
void f_800AD500(Ctx* __restrict c) {
  return; // 800AD500
}

// fn_800AD504
void f_800AD504(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD504
  return; // 800AD508
}

// fn_800AD50C
void f_800AD50C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD50C
  return; // 800AD510
}

// fn_800AD514
void f_800AD514(Ctx* __restrict c) {
  c->r[3]=0u+0x00000006u; // 800AD514
  return; // 800AD518
}

// fn_800AD51C
void f_800AD51C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 800AD51C
  return; // 800AD520
}

// fn_800AD524
void f_800AD524(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000006Cu; // 800AD524
  return; // 800AD528
}

// fn_800AD52C
void f_800AD52C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000A0u; // 800AD52C
  return; // 800AD530
}

// fn_800AD534
void f_800AD534(Ctx* __restrict c) {
  return; // 800AD534
}

// fn_800AD538
void f_800AD538(Ctx* __restrict c) {
  return; // 800AD538
}

// fn_800AD53C
void f_800AD53C(Ctx* __restrict c) {
  return; // 800AD53C
}

// fn_800AD540
void f_800AD540(Ctx* __restrict c) {
  return; // 800AD540
}

// fn_800AD544
void f_800AD544(Ctx* __restrict c) {
  c->r[3]=0u+0x802D0000u; // 800AD544
  c->r[3]=c->r[3]+0xFFFF9540u; // 800AD548
  return; // 800AD54C
}

// fn_800AD550
void f_800AD550(Ctx* __restrict c) {
  return; // 800AD550
}

// fn_800AD554
void f_800AD554(Ctx* __restrict c) {
  return; // 800AD554
}

// fn_800AD558
void f_800AD558(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD558
  return; // 800AD55C
}

// fn_800AD560
void f_800AD560(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D4u); // 800AD560
  c->r[0]=(rotl(c->r[4],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800AD564
  W8(c->r[3]+0x000000D4u,c->r[0]); // 800AD568
  return; // 800AD56C
}

// fn_800AD570
void f_800AD570(Ctx* __restrict c) {
  return; // 800AD570
}

// fn_800AD574
void f_800AD574(Ctx* __restrict c) {
  return; // 800AD574
}

// fn_800AD578
void f_800AD578(Ctx* __restrict c) {
  return; // 800AD578
}

// fn_800AD57C
void f_800AD57C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D4u); // 800AD57C
  c->r[3]=rotl(c->r[0],25)&0x00000001u; // 800AD580
  return; // 800AD584
}

// fn_800AD588
void f_800AD588(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D4u); // 800AD588
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800AD58C
  W8(c->r[3]+0x000000D4u,c->r[0]); // 800AD590
  return; // 800AD594
}

// fn_800AD598
void f_800AD598(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D4u); // 800AD598
  c->r[3]=rotl(c->r[0],26)&0x00000001u; // 800AD59C
  return; // 800AD5A0
}

// fn_800AD5A4
void f_800AD5A4(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D4u); // 800AD5A4
  c->r[3]=rotl(c->r[0],27)&0x00000001u; // 800AD5A8
  return; // 800AD5AC
}

// fn_800AD5B0
void f_800AD5B0(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D4u); // 800AD5B0
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 800AD5B4
  c->r[0]=cntlz(c->r[0]); // 800AD5B8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800AD5BC
  return; // 800AD5C0
}

// fn_800AD5C4
void f_800AD5C4(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D4u); // 800AD5C4
  c->r[0]=c->r[0]|0x00000010u; // 800AD5C8
  W8(c->r[3]+0x000000D4u,c->r[0]); // 800AD5CC
  return; // 800AD5D0
}

// fn_800AD5D4
void f_800AD5D4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD5D4
  return; // 800AD5D8
}

// fn_800AD5DC
void f_800AD5DC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 800AD5DC
  return; // 800AD5E0
}

// fn_800AD5E4
void f_800AD5E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD5E4
  return; // 800AD5E8
}

// fn_800AD5EC
void f_800AD5EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8698u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD5EC
  return; // 800AD5F0
}

// fn_800AD5F4
void f_800AD5F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8694u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD5F4
  return; // 800AD5F8
}

// fn_800AD5FC
void f_800AD5FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8698u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD5FC
  return; // 800AD600
}

// fn_800AD604
void f_800AD604(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000001Cu; // 800AD604
  return; // 800AD608
}

// fn_800AD60C
void f_800AD60C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000028u; // 800AD60C
  return; // 800AD610
}

// fn_800AD614
void f_800AD614(Ctx* __restrict c) {
  return; // 800AD614
}

// fn_800AD618
void f_800AD618(Ctx* __restrict c) {
  c->r[3]=0u+0xFFFFFFFFu; // 800AD618
  return; // 800AD61C
}

// fn_800AD620
void f_800AD620(Ctx* __restrict c) {
  return; // 800AD620
}

// fn_800AD624
void f_800AD624(Ctx* __restrict c) {
  return; // 800AD624
}

// fn_800AD628
void f_800AD628(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD628
  return; // 800AD62C
}

// fn_800AD630
void f_800AD630(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000000D4u); // 800AD630
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800AD634
  W8(c->r[3]+0x000000D4u,c->r[0]); // 800AD638
  return; // 800AD63C
}

// fn_800AD640
void f_800AD640(Ctx* __restrict c) {
  return; // 800AD640
}

// fn_800AD644
void f_800AD644(Ctx* __restrict c) {
  return; // 800AD644
}

// fn_800AD648
void f_800AD648(Ctx* __restrict c) {
  return; // 800AD648
}

// fn_800AD64C
void f_800AD64C(Ctx* __restrict c) {
  return; // 800AD64C
}

// fn_800AD650
void f_800AD650(Ctx* __restrict c) {
  return; // 800AD650
}

// fn_800AD654
void f_800AD654(Ctx* __restrict c) {
  return; // 800AD654
}

// fn_800AD658
void f_800AD658(Ctx* __restrict c) {
  return; // 800AD658
}

// fn_800AD65C
void f_800AD65C(Ctx* __restrict c) {
  return; // 800AD65C
}

// fn_800AD660
void f_800AD660(Ctx* __restrict c) {
  return; // 800AD660
}

// fn_800AD664
void f_800AD664(Ctx* __restrict c) {
  return; // 800AD664
}

// fn_800AD668
void f_800AD668(Ctx* __restrict c) {
  return; // 800AD668
}

// fn_800AD66C
void f_800AD66C(Ctx* __restrict c) {
  return; // 800AD66C
}

// fn_800AD670
void f_800AD670(Ctx* __restrict c) {
  return; // 800AD670
}

// fn_800AD674
void f_800AD674(Ctx* __restrict c) {
  return; // 800AD674
}

// fn_800AD678
void f_800AD678(Ctx* __restrict c) {
  return; // 800AD678
}

// fn_800AD67C
void f_800AD67C(Ctx* __restrict c) {
  return; // 800AD67C
}

// fn_800AD680
void f_800AD680(Ctx* __restrict c) {
  return; // 800AD680
}

// fn_800AD684
void f_800AD684(Ctx* __restrict c) {
  return; // 800AD684
}

// fn_800AD688
void f_800AD688(Ctx* __restrict c) {
  return; // 800AD688
}

// fn_800AD68C
void f_800AD68C(Ctx* __restrict c) {
  return; // 800AD68C
}

// fn_800AD690
void f_800AD690(Ctx* __restrict c) {
  return; // 800AD690
}

// fn_800AD694
void f_800AD694(Ctx* __restrict c) {
  return; // 800AD694
}

// fn_800AD698
void f_800AD698(Ctx* __restrict c) {
  return; // 800AD698
}

// fn_800AD69C
void f_800AD69C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF85E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD69C
  return; // 800AD6A0
}

// fn_800AD6A4
void f_800AD6A4(Ctx* __restrict c) {
  return; // 800AD6A4
}

// fn_800AD6A8
void f_800AD6A8(Ctx* __restrict c) {
  return; // 800AD6A8
}

// fn_800AD6AC
void f_800AD6AC(Ctx* __restrict c) {
  return; // 800AD6AC
}

// fn_800AD6B0
void f_800AD6B0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD6B0
  return; // 800AD6B4
}

// fn_800AD6B8
void f_800AD6B8(Ctx* __restrict c) {
  return; // 800AD6B8
}

// fn_800AD6BC
void f_800AD6BC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000005u; // 800AD6BC
  return; // 800AD6C0
}

// fn_800AD6C4
void f_800AD6C4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800AD6C4
  return; // 800AD6C8
}

// fn_800AD6CC
void f_800AD6CC(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD6CC
  c->r[3]=rotl(c->r[0],27)&0x00000001u; // 800AD6D0
  return; // 800AD6D4
}

// fn_800AD6D8
void f_800AD6D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD6D8
  {uint32_t ea=c->r[4]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD6DC
  {uint32_t ea=c->r[4]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AD6E0
  f_8003C598(c); return; // 800AD6E4
}

// fn_800AD6E8
void f_800AD6E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF869Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD6E8
  return; // 800AD6EC
}

// fn_800AD6F0
void f_800AD6F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B4u; // 800AD6F0
  return; // 800AD6F4
}

// fn_800AD6F8
void f_800AD6F8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 800AD6F8
  return; // 800AD6FC
}

// fn_800AD700
void f_800AD700(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD700
  c->r[0]=(rotl(c->r[4],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800AD704
  W8(c->r[3]+0x000001C0u,c->r[0]); // 800AD708
  return; // 800AD70C
}

// fn_800AD710
void f_800AD710(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD710
  c->r[0]=(rotl(c->r[4],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 800AD714
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 800AD718
  W8(c->r[3]+0x000001C0u,c->r[0]); // 800AD71C
  return; // 800AD720
}

// fn_800AD724
void f_800AD724(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD724
  c->r[3]=rotl(c->r[0],25)&0x00000001u; // 800AD728
  return; // 800AD72C
}

// fn_800AD730
void f_800AD730(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD730
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800AD734
  W8(c->r[3]+0x000001C0u,c->r[0]); // 800AD738
  return; // 800AD73C
}

// fn_800AD740
void f_800AD740(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD740
  c->r[3]=rotl(c->r[0],26)&0x00000001u; // 800AD744
  return; // 800AD748
}

// fn_800AD74C
void f_800AD74C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD74C
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 800AD750
  c->r[0]=cntlz(c->r[0]); // 800AD754
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800AD758
  return; // 800AD75C
}

// fn_800AD760
void f_800AD760(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD760
  c->r[0]=c->r[0]|0x00000010u; // 800AD764
  W8(c->r[3]+0x000001C0u,c->r[0]); // 800AD768
  return; // 800AD76C
}

// fn_800AD770
void f_800AD770(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 800AD770
  return; // 800AD774
}

// fn_800AD778
void f_800AD778(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 800AD778
  return; // 800AD77C
}

// fn_800AD780
void f_800AD780(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD780
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800AD784
  W8(c->r[3]+0x000001C0u,c->r[0]); // 800AD788
  return; // 800AD78C
}

// fn_800AD790
void f_800AD790(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD790
  return; // 800AD794
}

// fn_800AD798
void f_800AD798(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C1u); // 800AD798
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 800AD79C
  return; // 800AD7A0
}

// fn_800AD7A4
void f_800AD7A4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 800AD7A4
  return; // 800AD7A8
}

// fn_800AD7AC
void f_800AD7AC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000004u; // 800AD7AC
  return; // 800AD7B0
}

// fn_800AD7B4
void f_800AD7B4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000003u; // 800AD7B4
  return; // 800AD7B8
}

// fn_800AD7BC
void f_800AD7BC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000001D8u; // 800AD7BC
  return; // 800AD7C0
}

// fn_800AD7C4
void f_800AD7C4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000020Cu; // 800AD7C4
  return; // 800AD7C8
}

// fn_800AD7CC
void f_800AD7CC(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)76); // 800AD7CC
  c->r[3]=R32(c->r[3]+0x000001D0u); // 800AD7D0
  c->r[3]=c->r[3]+c->r[0]; // 800AD7D4
  return; // 800AD7D8
}

// fn_800AD7DC
void f_800AD7DC(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD7DC
  c->r[3]=rotl(c->r[0],25)&0x00000001u; // 800AD7E0
  return; // 800AD7E4
}

// fn_800AD7E8
void f_800AD7E8(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x000001C0u); // 800AD7E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800AD7EC
  W8(c->r[3]+0x000001C0u,c->r[0]); // 800AD7F0
  return; // 800AD7F4
}

// fn_800AD7F8
void f_800AD7F8(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000258u); // 800AD7F8
  c->r[3]=rotl(c->r[0],26)&0x00000001u; // 800AD7FC
  return; // 800AD800
}

// fn_800AD804
void f_800AD804(Ctx* __restrict c) {
  c->r[3]=0u+0x00000002u; // 800AD804
  return; // 800AD808
}

// fn_800AD80C
void f_800AD80C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800AD80C
  return; // 800AD810
}

// fn_800AD814
void f_800AD814(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 800AD814
  return; // 800AD818
}

// fn_800AD81C
void f_800AD81C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD81C
  c->r[0]=c->lr; // 800AD820
  cmps(c,0,(int32_t)c->r[3],0); // 800AD824
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD828
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD82C
  c->r[30]=c->r[3]|c->r[3]; // 800AD830
  c->r[31]=c->r[4]|c->r[4]; // 800AD834
  if (crb(c,2)) { goto L_800AD864; } // 800AD838
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AD83C
  cmps(c,0,(int32_t)c->r[0],0); // 800AD840
  if (crb(c,2)) { goto L_800AD854; } // 800AD844
  c->lr=0x800AD84Cu; f_800AB890(c); // 800AD848
  c->r[3]=R32(c->r[30]+0x00000000u); // 800AD84C
  c->lr=0x800AD854u; f_8009230C(c); // 800AD850
L_800AD854:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AD854
  if (!crb(c,1)) { goto L_800AD864; } // 800AD858
  c->r[3]=c->r[30]|c->r[30]; // 800AD85C
  c->lr=0x800AD864u; f_8009230C(c); // 800AD860
L_800AD864:;
  c->r[3]=c->r[30]|c->r[30]; // 800AD864
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD868
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD86C
  c->lr=c->r[0]; // 800AD870
  c->r[1]=c->r[1]+0x00000010u; // 800AD874
  return; // 800AD878
}

// fn_800AD87C
void f_800AD87C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD87C
  c->r[0]=c->lr; // 800AD880
  c->r[5]=0u+0x20000000u; // 800AD884
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AD888
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800AD88C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AD890
  W32(c->r[1]+0x00000008u,c->r[4]); // 800AD894
  c->r[31]=R32(c->r[3]+0x00000008u); // 800AD898
  c->r[0]=c->r[0]-c->r[31]; // 800AD89C
  cmpu(c,0,c->r[4],c->r[0]); // 800AD8A0
  if (!crb(c,1)) { goto L_800AD8CC; } // 800AD8A4
  c->r[4]=0u+0x80260000u; // 800AD8A8
  c->r[3]=0u+0x80290000u; // 800AD8AC
  c->r[4]=c->r[4]+0xFFFFD18Bu; // 800AD8B0
  c->r[3]=c->r[3]+0x00006280u; // 800AD8B4
  c->r[4]=c->r[4]+0x0000007Au; // 800AD8B8
  c->r[3]=c->r[3]+0x000000A0u; // 800AD8BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AD8C0
  c->lr=0x800AD8C8u; f_801126E0(c); // 800AD8C4
  c->lr=0x800AD8CCu; f_80116998(c); // 800AD8C8
L_800AD8CC:;
  c->r[3]=0u+0x0AAB0000u; // 800AD8CC
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 800AD8D0
  cmpu(c,0,c->r[31],c->r[0]); // 800AD8D4
  if (!crb(c,0)) { goto L_800AD910; } // 800AD8D8
  c->r[0]=c->r[31]+0x00000001u; // 800AD8DC
  c->r[4]=0u+0x00000005u; // 800AD8E0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800AD8E4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800AD8E8
  c->r[3]=c->r[1]+0x00000010u; // 800AD8EC
  c->r[4]=divwu(c->r[5],c->r[4]); // 800AD8F0
  cmpu(c,0,c->r[4],c->r[0]); // 800AD8F4
  W32(c->r[1]+0x00000010u,c->r[4]); // 800AD8F8
  if (!crb(c,0)) { goto L_800AD904; } // 800AD8FC
  c->r[3]=c->r[1]+0x00000008u; // 800AD900
L_800AD904:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AD904
  c->r[3]=c->r[31]+c->r[0]; // 800AD908
  goto L_800AD954; // 800AD90C
L_800AD910:;
  c->r[3]=0u+0x15550000u; // 800AD910
  c->r[0]=c->r[3]+0x00005554u; // 800AD914
  cmpu(c,0,c->r[31],c->r[0]); // 800AD918
  if (!crb(c,0)) { goto L_800AD94C; } // 800AD91C
  c->r[3]=c->r[31]+0x00000001u; // 800AD920
  c->r[0]=R32(c->r[1]+0x00000008u); // 800AD924
  c->r[4]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800AD928
  cmpu(c,0,c->r[4],c->r[0]); // 800AD92C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800AD930
  c->r[3]=c->r[1]+0x0000000Cu; // 800AD934
  if (!crb(c,0)) { goto L_800AD940; } // 800AD938
  c->r[3]=c->r[1]+0x00000008u; // 800AD93C
L_800AD940:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AD940
  c->r[3]=c->r[31]+c->r[0]; // 800AD944
  goto L_800AD954; // 800AD948
L_800AD94C:;
  c->r[3]=0u+0x20000000u; // 800AD94C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800AD950
L_800AD954:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AD954
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AD958
  c->lr=c->r[0]; // 800AD95C
  c->r[1]=c->r[1]+0x00000020u; // 800AD960
  return; // 800AD964
}

// fn_800AD968
void f_800AD968(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD968
  c->r[0]=c->lr; // 800AD96C
  cmps(c,0,(int32_t)c->r[3],0); // 800AD970
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD974
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD978
  c->r[30]=c->r[3]|c->r[3]; // 800AD97C
  c->r[31]=c->r[4]|c->r[4]; // 800AD980
  if (crb(c,2)) { goto L_800AD9A8; } // 800AD984
  c->r[0]=0u+0x00000000u; // 800AD988
  c->r[4]=0u+0x00000000u; // 800AD98C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800AD990
  c->lr=0x800AD998u; f_800AD9C0(c); // 800AD994
  cmps(c,0,(int32_t)c->r[31],0); // 800AD998
  if (!crb(c,1)) { goto L_800AD9A8; } // 800AD99C
  c->r[3]=c->r[30]|c->r[30]; // 800AD9A0
  c->lr=0x800AD9A8u; f_8009230C(c); // 800AD9A4
L_800AD9A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800AD9A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD9AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD9B0
  c->lr=c->r[0]; // 800AD9B4
  c->r[1]=c->r[1]+0x00000010u; // 800AD9B8
  return; // 800AD9BC
}

// fn_800AD9C0
void f_800AD9C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD9C0
  c->r[0]=c->lr; // 800AD9C4
  cmps(c,0,(int32_t)c->r[3],0); // 800AD9C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD9CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD9D0
  c->r[30]=c->r[3]|c->r[3]; // 800AD9D4
  c->r[31]=c->r[4]|c->r[4]; // 800AD9D8
  if (crb(c,2)) { goto L_800ADA10; } // 800AD9DC
  c->r[4]=R32(c->r[3]+0x00000000u); // 800AD9E0
  cmps(c,0,(int32_t)c->r[4],0); // 800AD9E4
  if (crb(c,2)) { goto L_800ADA00; } // 800AD9E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800AD9EC
  c->r[0]=c->r[0]-c->r[0]; // 800AD9F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800AD9F4
  c->r[3]=c->r[4]|c->r[4]; // 800AD9F8
  c->lr=0x800ADA00u; f_8009230C(c); // 800AD9FC
L_800ADA00:;
  cmps(c,0,(int32_t)c->r[31],0); // 800ADA00
  if (!crb(c,1)) { goto L_800ADA10; } // 800ADA04
  c->r[3]=c->r[30]|c->r[30]; // 800ADA08
  c->lr=0x800ADA10u; f_8009230C(c); // 800ADA0C
L_800ADA10:;
  c->r[3]=c->r[30]|c->r[30]; // 800ADA10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ADA14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADA18
  c->lr=c->r[0]; // 800ADA1C
  c->r[1]=c->r[1]+0x00000010u; // 800ADA20
  return; // 800ADA24
}

// fn_800ADA28
void f_800ADA28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA28
  f_800A2D18(c); return; // 800ADA2C
}

// fn_800ADA30
void f_800ADA30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA30
  f_800AD80C(c); return; // 800ADA34
}

// fn_800ADA38
void f_800ADA38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA38
  f_800A5D74(c); return; // 800ADA3C
}

// fn_800ADA40
void f_800ADA40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA40
  f_800A770C(c); return; // 800ADA44
}

// fn_800ADA48
void f_800ADA48(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA48
  f_800A2CC0(c); return; // 800ADA4C
}

// fn_800ADA50
void f_800ADA50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA50
  f_800A6980(c); return; // 800ADA54
}

// fn_800ADA58
void f_800ADA58(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA58
  f_8003C75C(c); return; // 800ADA5C
}

// fn_800ADA60
void f_800ADA60(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA60
  f_800AD7F8(c); return; // 800ADA64
}

// fn_800ADA68
void f_800ADA68(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA68
  f_800AD7E8(c); return; // 800ADA6C
}

// fn_800ADA70
void f_800ADA70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA70
  f_800AD7DC(c); return; // 800ADA74
}

// fn_800ADA78
void f_800ADA78(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA78
  f_800A7ABC(c); return; // 800ADA7C
}

// fn_800ADA80
void f_800ADA80(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA80
  f_800A78D8(c); return; // 800ADA84
}

// fn_800ADA88
void f_800ADA88(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA88
  f_800A64C8(c); return; // 800ADA8C
}

// fn_800ADA90
void f_800ADA90(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADA90
  f_800A78D4(c); return; // 800ADA94
}

// fn_800ADA98
void f_800ADA98(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFE3Cu; // 800ADA98
  f_800AD7CC(c); return; // 800ADA9C
}

// fn_800ADAA0
void f_800ADAA0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFE3Cu; // 800ADAA0
  f_800AD7C4(c); return; // 800ADAA4
}

// fn_800ADAA8
void f_800ADAA8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFE3Cu; // 800ADAA8
  f_800AD7BC(c); return; // 800ADAAC
}

// fn_800ADAB0
void f_800ADAB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAB0
  f_800AA408(c); return; // 800ADAB4
}

// fn_800ADAB8
void f_800ADAB8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAB8
  f_800AA09C(c); return; // 800ADABC
}

// fn_800ADAC0
void f_800ADAC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFE3Cu; // 800ADAC0
  f_800AC398(c); return; // 800ADAC4
}

// fn_800ADAC8
void f_800ADAC8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAC8
  f_800AD798(c); return; // 800ADACC
}

// fn_800ADAD0
void f_800ADAD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAD0
  f_800A2638(c); return; // 800ADAD4
}

// fn_800ADAD8
void f_800ADAD8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAD8
  f_800A2600(c); return; // 800ADADC
}

// fn_800ADAE0
void f_800ADAE0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAE0
  f_800A25F8(c); return; // 800ADAE4
}

// fn_800ADAE8
void f_800ADAE8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAE8
  f_800AD790(c); return; // 800ADAEC
}

// fn_800ADAF0
void f_800ADAF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAF0
  f_8003C7C0(c); return; // 800ADAF4
}

// fn_800ADAF8
void f_800ADAF8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADAF8
  f_800A25CC(c); return; // 800ADAFC
}

// fn_800ADB00
void f_800ADB00(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB00
  f_800A25B4(c); return; // 800ADB04
}

// fn_800ADB08
void f_800ADB08(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB08
  f_800A2538(c); return; // 800ADB0C
}

// fn_800ADB10
void f_800ADB10(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB10
  f_800A24F0(c); return; // 800ADB14
}

// fn_800ADB18
void f_800ADB18(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB18
  f_800A3F30(c); return; // 800ADB1C
}

// fn_800ADB20
void f_800ADB20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB20
  f_800A3DB8(c); return; // 800ADB24
}

// fn_800ADB28
void f_800ADB28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB28
  f_800A4118(c); return; // 800ADB2C
}

// fn_800ADB30
void f_800ADB30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB30
  f_800A4100(c); return; // 800ADB34
}

// fn_800ADB38
void f_800ADB38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB38
  f_800A9F6C(c); return; // 800ADB3C
}

// fn_800ADB40
void f_800ADB40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB40
  f_800AC1F8(c); return; // 800ADB44
}

// fn_800ADB48
void f_800ADB48(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB48
  f_800A3930(c); return; // 800ADB4C
}

// fn_800ADB50
void f_800ADB50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB50
  f_800A3648(c); return; // 800ADB54
}

// fn_800ADB58
void f_800ADB58(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB58
  f_800A3B10(c); return; // 800ADB5C
}

// fn_800ADB60
void f_800ADB60(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB60
  f_800A398C(c); return; // 800ADB64
}

// fn_800ADB68
void f_800ADB68(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB68
  f_800A3558(c); return; // 800ADB6C
}

// fn_800ADB70
void f_800ADB70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB70
  f_800A345C(c); return; // 800ADB74
}

// fn_800ADB78
void f_800ADB78(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB78
  f_800A3244(c); return; // 800ADB7C
}

// fn_800ADB80
void f_800ADB80(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB80
  f_800A3C68(c); return; // 800ADB84
}

// fn_800ADB88
void f_800ADB88(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB88
  f_800A2AA4(c); return; // 800ADB8C
}

// fn_800ADB90
void f_800ADB90(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB90
  f_800A2A08(c); return; // 800ADB94
}

// fn_800ADB98
void f_800ADB98(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADB98
  f_800A2648(c); return; // 800ADB9C
}

// fn_800ADBA0
void f_800ADBA0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBA0
  f_800A283C(c); return; // 800ADBA4
}

// fn_800ADBA8
void f_800ADBA8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBA8
  f_800AD780(c); return; // 800ADBAC
}

// fn_800ADBB0
void f_800ADBB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBB0
  f_800A69FC(c); return; // 800ADBB4
}

// fn_800ADBB8
void f_800ADBB8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBB8
  f_800A69E4(c); return; // 800ADBBC
}

// fn_800ADBC0
void f_800ADBC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBC0
  f_800A69D8(c); return; // 800ADBC4
}

// fn_800ADBC8
void f_800ADBC8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBC8
  f_800AD778(c); return; // 800ADBCC
}

// fn_800ADBD0
void f_800ADBD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBD0
  f_8003C744(c); return; // 800ADBD4
}

// fn_800ADBD8
void f_800ADBD8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBD8
  f_800A69D0(c); return; // 800ADBDC
}

// fn_800ADBE0
void f_800ADBE0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBE0
  f_800A69C8(c); return; // 800ADBE4
}

// fn_800ADBE8
void f_800ADBE8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBE8
  f_800A69B8(c); return; // 800ADBEC
}

// fn_800ADBF0
void f_800ADBF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBF0
  f_800A69A8(c); return; // 800ADBF4
}

// fn_800ADBF8
void f_800ADBF8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADBF8
  f_800A6998(c); return; // 800ADBFC
}

// fn_800ADC00
void f_800ADC00(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC00
  f_800A6988(c); return; // 800ADC04
}

// fn_800ADC08
void f_800ADC08(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC08
  f_800ABF98(c); return; // 800ADC0C
}

// fn_800ADC10
void f_800ADC10(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC10
  f_800ABF90(c); return; // 800ADC14
}

// fn_800ADC18
void f_800ADC18(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC18
  f_800A68C8(c); return; // 800ADC1C
}

// fn_800ADC20
void f_800ADC20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC20
  f_800AD770(c); return; // 800ADC24
}

// fn_800ADC28
void f_800ADC28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC28
  f_800AD760(c); return; // 800ADC2C
}

// fn_800ADC30
void f_800ADC30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC30
  f_800AD74C(c); return; // 800ADC34
}

// fn_800ADC38
void f_800ADC38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC38
  f_8003C764(c); return; // 800ADC3C
}

// fn_800ADC40
void f_800ADC40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC40
  f_800AD740(c); return; // 800ADC44
}

// fn_800ADC48
void f_800ADC48(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC48
  f_800AD730(c); return; // 800ADC4C
}

// fn_800ADC50
void f_800ADC50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC50
  f_800AD724(c); return; // 800ADC54
}

// fn_800ADC58
void f_800ADC58(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC58
  f_800A689C(c); return; // 800ADC5C
}

// fn_800ADC60
void f_800ADC60(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC60
  f_800A67DC(c); return; // 800ADC64
}

// fn_800ADC68
void f_800ADC68(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC68
  f_800AD710(c); return; // 800ADC6C
}

// fn_800ADC70
void f_800ADC70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC70
  f_800AD700(c); return; // 800ADC74
}

// fn_800ADC78
void f_800ADC78(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC78
  f_800AD6F8(c); return; // 800ADC7C
}

// fn_800ADC80
void f_800ADC80(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC80
  f_800A6718(c); return; // 800ADC84
}

// fn_800ADC88
void f_800ADC88(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC88
  f_800A6644(c); return; // 800ADC8C
}

// fn_800ADC90
void f_800ADC90(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC90
  f_800AD6F0(c); return; // 800ADC94
}

// fn_800ADC98
void f_800ADC98(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADC98
  f_800A64CC(c); return; // 800ADC9C
}

// fn_800ADCA0
void f_800ADCA0(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 800ADCA0
  f_800A663C(c); return; // 800ADCA4
}

// fn_800ADCA8
void f_800ADCA8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADCA8
  f_800A659C(c); return; // 800ADCAC
}

// fn_800ADCB0
void f_800ADCB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADCB0
  f_800ACCE4(c); return; // 800ADCB4
}

// fn_800ADCB8
void f_800ADCB8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADCB8
  f_800AC7FC(c); return; // 800ADCBC
}

// fn_800ADCC0
void f_800ADCC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFE3Cu; // 800ADCC0
  f_800AC7A4(c); return; // 800ADCC4
}

// fn_800ADCC8
void f_800ADCC8(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFE3Cu; // 800ADCC8
  f_800AC40C(c); return; // 800ADCCC
}

// fn_800ADCD0
void f_800ADCD0(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFE3Cu; // 800ADCD0
  f_800AC2A8(c); return; // 800ADCD4
}

// fn_800ADCD8
void f_800ADCD8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFE3Cu; // 800ADCD8
  f_800AD6E8(c); return; // 800ADCDC
}

// fn_800ADCE0
void f_800ADCE0(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFE3Cu; // 800ADCE0
  f_800AD6D8(c); return; // 800ADCE4
}

// fn_800ADCE8
void f_800ADCE8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFE3Cu; // 800ADCE8
  f_800AC25C(c); return; // 800ADCEC
}

// fn_800ADCF0
void f_800ADCF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFE3Cu; // 800ADCF0
  f_800AD6CC(c); return; // 800ADCF4
}

// fn_800ADCF8
void f_800ADCF8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADCF8
  f_800AD6B0(c); return; // 800ADCFC
}

// fn_800ADD00
void f_800ADD00(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD00
  f_800AD6AC(c); return; // 800ADD04
}

// fn_800ADD08
void f_800ADD08(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD08
  f_800AD6A8(c); return; // 800ADD0C
}

// fn_800ADD10
void f_800ADD10(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD10
  f_800AD6A4(c); return; // 800ADD14
}

// fn_800ADD18
void f_800ADD18(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD18
  f_800AD69C(c); return; // 800ADD1C
}

// fn_800ADD20
void f_800ADD20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD20
  f_800AD698(c); return; // 800ADD24
}

// fn_800ADD28
void f_800ADD28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD28
  f_800AD694(c); return; // 800ADD2C
}

// fn_800ADD30
void f_800ADD30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD30
  f_800AD690(c); return; // 800ADD34
}

// fn_800ADD38
void f_800ADD38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD38
  f_800AD68C(c); return; // 800ADD3C
}

// fn_800ADD40
void f_800ADD40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD40
  f_800AD688(c); return; // 800ADD44
}

// fn_800ADD48
void f_800ADD48(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD48
  f_800AD684(c); return; // 800ADD4C
}

// fn_800ADD50
void f_800ADD50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD50
  f_800AD680(c); return; // 800ADD54
}

// fn_800ADD58
void f_800ADD58(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD58
  f_800AD67C(c); return; // 800ADD5C
}

// fn_800ADD60
void f_800ADD60(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD60
  f_800AD678(c); return; // 800ADD64
}

// fn_800ADD68
void f_800ADD68(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD68
  f_800AD674(c); return; // 800ADD6C
}

// fn_800ADD70
void f_800ADD70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD70
  f_800AD670(c); return; // 800ADD74
}

// fn_800ADD78
void f_800ADD78(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD78
  f_800AD66C(c); return; // 800ADD7C
}

// fn_800ADD80
void f_800ADD80(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD80
  f_800AD668(c); return; // 800ADD84
}

// fn_800ADD88
void f_800ADD88(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD88
  f_800AD664(c); return; // 800ADD8C
}

// fn_800ADD90
void f_800ADD90(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD90
  f_800AD660(c); return; // 800ADD94
}

// fn_800ADD98
void f_800ADD98(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADD98
  f_800AD65C(c); return; // 800ADD9C
}

// fn_800ADDA0
void f_800ADDA0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADDA0
  f_800AD658(c); return; // 800ADDA4
}

// fn_800ADDA8
void f_800ADDA8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADDA8
  f_800AD654(c); return; // 800ADDAC
}

// fn_800ADDB0
void f_800ADDB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADDB0
  f_800AD650(c); return; // 800ADDB4
}

// fn_800ADDB8
void f_800ADDB8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADDB8
  f_800AD64C(c); return; // 800ADDBC
}

// fn_800ADDC0
void f_800ADDC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800ADDC0
  f_800AD648(c); return; // 800ADDC4
}


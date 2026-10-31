#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800CD4AC
void f_800CD4AC(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CD4AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800CD4B0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CD4B4
  return; // 800CD4B8
}

// fn_800CD4BC
void f_800CD4BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD4BC
  c->r[0]=c->lr; // 800CD4C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD4C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD4C8
  c->r[31]=c->r[3]|c->r[3]; // 800CD4CC
  c->lr=0x800CD4D4u; f_800CD3DC(c); // 800CD4D0
  c->r[4]=0u+0x80280000u; // 800CD4D4
  c->r[3]=c->r[31]+0x00000030u; // 800CD4D8
  c->r[4]=c->r[4]+0x00001AE4u; // 800CD4DC
  W32(c->r[31]+0x00000000u,c->r[4]); // 800CD4E0
  c->lr=0x800CD4E8u; f_800C3700(c); // 800CD4E4
  c->r[3]=c->r[31]+0x00000030u; // 800CD4E8
  c->r[4]=0u+0x00000010u; // 800CD4EC
  c->r[5]=0u+0x00000010u; // 800CD4F0
  c->lr=0x800CD4F8u; f_800C3DAC(c); // 800CD4F4
  c->r[4]=0u+0xD0D10000u; // 800CD4F8
  c->r[3]=c->r[31]+0x00000030u; // 800CD4FC
  c->r[0]=c->r[4]+0xFFFFD0FFu; // 800CD500
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CD504
  c->r[4]=c->r[1]+0x00000008u; // 800CD508
  c->lr=0x800CD510u; f_800C3C24(c); // 800CD50C
  c->r[3]=c->r[31]|c->r[31]; // 800CD510
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD514
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD518
  c->lr=c->r[0]; // 800CD51C
  c->r[1]=c->r[1]+0x00000020u; // 800CD520
  return; // 800CD524
}

// fn_800CD528
void f_800CD528(Ctx* __restrict c) {
L_800CD528:;
  c->r[0]=c->r[2]+0xFFFFA1ACu; // 800CD528
  cmpu(c,0,c->r[4],c->r[0]); // 800CD52C
  if (!crb(c,2)) { goto L_800CD540; } // 800CD530
  W32(c->r[5]+0x00000000u,c->r[3]); // 800CD534
  c->r[3]=0u+0x00000001u; // 800CD538
  return; // 800CD53C
L_800CD540:;
  IRQCHK(c); goto L_800CD528; // 800CD540
}

// fn_800CD544
void f_800CD544(Ctx* __restrict c) {
  return; // 800CD544
}

// fn_800CD548
void f_800CD548(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000030u; // 800CD548
  f_800C3E48(c); return; // 800CD54C
}

// fn_800CD550
void f_800CD550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD550
  c->r[0]=c->lr; // 800CD554
  W32(c->r[1]+0x00000084u,c->r[0]); // 800CD558
  {uint32_t ea=c->r[1]+0x00000078u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD55C
  c->r[30]=c->r[3]|c->r[3]; // 800CD560
  c->r[31]=c->r[4]|c->r[4]; // 800CD564
  if (!crb(c,6)) { goto L_800CD58C; } // 800CD568
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800CD56C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800CD570
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800CD574
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800CD578
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800CD57C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800CD580
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800CD584
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800CD588
L_800CD58C:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CD58C
  c->r[3]=c->r[3]+0x00000030u; // 800CD590
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CD594
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CD598
  W32(c->r[1]+0x00000014u,c->r[6]); // 800CD59C
  W32(c->r[1]+0x00000018u,c->r[7]); // 800CD5A0
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800CD5A4
  W32(c->r[1]+0x00000020u,c->r[9]); // 800CD5A8
  W32(c->r[1]+0x00000024u,c->r[10]); // 800CD5AC
  c->lr=0x800CD5B4u; f_800C3E48(c); // 800CD5B0
  c->r[6]=c->r[1]+0x00000088u; // 800CD5B4
  c->r[0]=c->r[1]+0x00000008u; // 800CD5B8
  c->r[3]=0u+0x02000000u; // 800CD5BC
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 800CD5C0
  c->r[5]=c->r[1]+0x00000068u; // 800CD5C4
  c->r[4]=c->r[31]|c->r[31]; // 800CD5C8
  W32(c->r[1]+0x00000068u,c->r[3]); // 800CD5CC
  c->r[3]=c->r[30]+0x00000030u; // 800CD5D0
  W32(c->r[1]+0x00000070u,c->r[0]); // 800CD5D4
  c->lr=0x800CD5DCu; f_800C3F44(c); // 800CD5D8
  c->r[3]=c->r[30]|c->r[30]; // 800CD5DC
  c->lr=0x800CD5E4u; f_800CD65C(c); // 800CD5E0
  {uint32_t ea=c->r[1]+0x00000078u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD5E4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800CD5E8
  c->lr=c->r[0]; // 800CD5EC
  c->r[1]=c->r[1]+0x00000080u; // 800CD5F0
  return; // 800CD5F4
}

// fn_800CD5F8
void f_800CD5F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD5F8
  c->r[0]=c->lr; // 800CD5FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD600
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD604
  c->r[31]=c->r[3]|c->r[3]; // 800CD608
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CD60C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800CD610
  if (crb(c,2)) { goto L_800CD648; } // 800CD614
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD618
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD61C
  c->r[3]=c->r[3]+0x00000030u; // 800CD620
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CD624
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CD628
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CD62C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800CD630
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800CD634
  c->r[5]=R32(c->r[1]+0x00000014u); // 800CD638
  c->lr=0x800CD640u; f_800C3E04(c); // 800CD63C
  c->r[3]=c->r[31]+0x00000030u; // 800CD640
  c->lr=0x800CD648u; f_800C3FA4(c); // 800CD644
L_800CD648:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD648
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD64C
  c->lr=c->r[0]; // 800CD650
  c->r[1]=c->r[1]+0x00000020u; // 800CD654
  return; // 800CD658
}

// fn_800CD65C
void f_800CD65C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD65C
  c->r[0]=0u+0x43300000u; // 800CD660
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 800CD664
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD668
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD66C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CD670
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CD674
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CD678
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CD67C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CD680
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800CD684
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CD688
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 800CD68C
  c->r[4]=c->r[0]^0x80000000u; // 800CD690
  c->r[0]=c->r[5]^0x80000000u; // 800CD694
  W32(c->r[1]+0x00000014u,c->r[4]); // 800CD698
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD69C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800CD6A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800CD6A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800CD6A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800CD6AC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 800CD6B0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800CD6B4
  c->r[1]=c->r[1]+0x00000030u; // 800CD6B8
  return; // 800CD6BC
}

// fn_800CD6C0
void f_800CD6C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD6C0
  c->r[0]=c->lr; // 800CD6C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD6C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD6CC
  c->r[30]=c->r[3]|c->r[3]; // 800CD6D0
  c->lr=0x800CD6D8u; f_800CD4BC(c); // 800CD6D4
  c->r[4]=0u+0x80280000u; // 800CD6D8
  c->r[3]=c->r[30]+0x000000D0u; // 800CD6DC
  c->r[4]=c->r[4]+0x00001ABCu; // 800CD6E0
  W32(c->r[30]+0x00000000u,c->r[4]); // 800CD6E4
  c->lr=0x800CD6ECu; f_8000C958(c); // 800CD6E8
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 800CD6EC
  c->r[31]=0u+0x80260000u; // 800CD6F0
  c->r[3]=c->r[30]+0x000000D0u; // 800CD6F4
  c->r[0]=c->r[0]|0x00000040u; // 800CD6F8
  c->r[4]=c->r[31]+0xFFFFF200u; // 800CD6FC
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 800CD700
  c->lr=0x800CD708u; f_80031D3C(c); // 800CD704
  c->r[3]=c->r[30]+0x000000D0u; // 800CD708
  c->lr=0x800CD710u; f_80031DA0(c); // 800CD70C
  c->r[4]=c->r[31]+0xFFFFF200u; // 800CD710
  c->r[5]=c->r[3]|c->r[3]; // 800CD714
  c->r[3]=c->r[30]|c->r[30]; // 800CD718
  c->r[4]=c->r[4]+0x00000007u; // 800CD71C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD720
  c->lr=0x800CD728u; f_800CD550(c); // 800CD724
  c->r[3]=c->r[30]|c->r[30]; // 800CD728
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD72C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD730
  c->lr=c->r[0]; // 800CD734
  c->r[1]=c->r[1]+0x00000010u; // 800CD738
  return; // 800CD73C
}

// fn_800CD740
void f_800CD740(Ctx* __restrict c) {
  c->r[0]=c->r[2]+0xFFFFA1B0u; // 800CD740
  cmpu(c,0,c->r[4],c->r[0]); // 800CD744
  if (!crb(c,2)) { goto L_800CD758; } // 800CD748
  W32(c->r[5]+0x00000000u,c->r[3]); // 800CD74C
  c->r[3]=0u+0x00000001u; // 800CD750
  return; // 800CD754
L_800CD758:;
  f_800CD528(c); return; // 800CD758
  return; // 800CD75C
}

// fn_800CD760
void f_800CD760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD760
  c->r[0]=c->lr; // 800CD764
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD76C
  c->r[31]=c->r[3]|c->r[3]; // 800CD770
  c->r[3]=c->r[3]+0x000000D0u; // 800CD774
  c->lr=0x800CD77Cu; f_80031D3C(c); // 800CD778
  c->r[3]=c->r[31]+0x000000D0u; // 800CD77C
  c->lr=0x800CD784u; f_80031DA0(c); // 800CD780
  c->r[4]=0u+0x80260000u; // 800CD784
  c->r[5]=c->r[3]|c->r[3]; // 800CD788
  c->r[4]=c->r[4]+0xFFFFF200u; // 800CD78C
  c->r[3]=c->r[31]|c->r[31]; // 800CD790
  c->r[4]=c->r[4]+0x00000007u; // 800CD794
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CD798
  c->lr=0x800CD7A0u; f_800CD550(c); // 800CD79C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD7A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD7A4
  c->lr=c->r[0]; // 800CD7A8
  c->r[1]=c->r[1]+0x00000010u; // 800CD7AC
  return; // 800CD7B0
}

// fn_800CD7B4
void f_800CD7B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD7B4
  c->r[0]=c->lr; // 800CD7B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD7BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD7C0
  c->r[30]=c->r[3]|c->r[3]; // 800CD7C4
  c->lr=0x800CD7CCu; f_800CD4BC(c); // 800CD7C8
  c->r[4]=0u+0x80280000u; // 800CD7CC
  c->r[3]=c->r[30]+0x000000D0u; // 800CD7D0
  c->r[4]=c->r[4]+0x00001A94u; // 800CD7D4
  W32(c->r[30]+0x00000000u,c->r[4]); // 800CD7D8
  c->lr=0x800CD7E0u; f_8000C958(c); // 800CD7DC
  c->r[3]=c->r[30]+0x000000DCu; // 800CD7E0
  c->lr=0x800CD7E8u; f_8000C958(c); // 800CD7E4
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 800CD7E8
  c->r[4]=0u+0x00000000u; // 800CD7EC
  c->r[31]=0u+0x80260000u; // 800CD7F0
  W8(c->r[30]+0x000000E8u,c->r[4]); // 800CD7F4
  c->r[0]=c->r[0]|0x00000060u; // 800CD7F8
  c->r[3]=c->r[30]+0x000000D0u; // 800CD7FC
  c->r[31]=c->r[31]+0xFFFFF200u; // 800CD800
  W32(c->r[30]+0x000000ECu,c->r[4]); // 800CD804
  c->r[4]=c->r[31]+0x0000000Cu; // 800CD808
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 800CD80C
  c->lr=0x800CD814u; f_80031D3C(c); // 800CD810
  c->r[3]=c->r[30]+0x000000DCu; // 800CD814
  c->r[4]=c->r[31]+0x00000011u; // 800CD818
  c->lr=0x800CD820u; f_80031D3C(c); // 800CD81C
  c->r[3]=c->r[30]|c->r[30]; // 800CD820
  c->lr=0x800CD828u; f_800CD9DC(c); // 800CD824
  c->r[3]=c->r[30]|c->r[30]; // 800CD828
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD82C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD830
  c->lr=c->r[0]; // 800CD834
  c->r[1]=c->r[1]+0x00000010u; // 800CD838
  return; // 800CD83C
}

// fn_800CD840
void f_800CD840(Ctx* __restrict c) {
  c->r[0]=c->r[2]+0xFFFFA1B4u; // 800CD840
  cmpu(c,0,c->r[4],c->r[0]); // 800CD844
  if (!crb(c,2)) { goto L_800CD858; } // 800CD848
  W32(c->r[5]+0x00000000u,c->r[3]); // 800CD84C
  c->r[3]=0u+0x00000001u; // 800CD850
  return; // 800CD854
L_800CD858:;
  f_800CD528(c); return; // 800CD858
  return; // 800CD85C
}

// fn_800CD860
void f_800CD860(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CD860
  c->r[4]=R32(c->r[3]+0x000000ECu); // 800CD864
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800CD868
  cmps(c,0,(int32_t)c->r[4],0); // 800CD86C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CD870
  if (crb(c,2)) return; // 800CD874
  c->r[4]=R8(c->r[4]+0x00000000u); // 800CD878
  c->r[0]=R8(c->r[3]+0x000000E8u); // 800CD87C
  cmpu(c,0,c->r[0],c->r[4]); // 800CD880
  if (crb(c,2)) return; // 800CD884
  f_800CD9C8(c); return; // 800CD888
  return; // 800CD88C
}

// fn_800CD890
void f_800CD890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD890
  c->r[0]=c->lr; // 800CD894
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD898
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD89C
  c->r[31]=c->r[4]|c->r[4]; // 800CD8A0
  c->r[30]=c->r[3]|c->r[3]; // 800CD8A4
  c->r[3]=c->r[31]|c->r[31]; // 800CD8A8
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CD8AC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CD8B0
  c->ctr=c->r[12]; // 800CD8B4
  if (true) { c->lr=0x800CD8BCu; dispatch(c,c->ctr); } // 800CD8B8
  c->r[0]=rotl(c->r[3],0)&0x00001800u; cr0(c,c->r[0]); // 800CD8BC
  if (crb(c,2)) { goto L_800CD8DC; } // 800CD8C0
  c->r[0]=R8(c->r[30]+0x000000E8u); // 800CD8C4
  c->r[3]=c->r[30]|c->r[30]; // 800CD8C8
  c->r[0]=cntlz(c->r[0]); // 800CD8CC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD8D0
  c->lr=0x800CD8D8u; f_800CD9C8(c); // 800CD8D4
  goto L_800CD944; // 800CD8D8
L_800CD8DC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CD8DC
  c->r[3]=c->r[31]|c->r[31]; // 800CD8E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CD8E4
  c->ctr=c->r[12]; // 800CD8E8
  if (true) { c->lr=0x800CD8F0u; dispatch(c,c->ctr); } // 800CD8EC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800CD8F0
  if (crb(c,2)) { goto L_800CD908; } // 800CD8F4
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CD8F8
  c->r[0]=0u+0x00000000u; // 800CD8FC
  W32(c->r[3]+0x00000120u,c->r[0]); // 800CD900
  goto L_800CD944; // 800CD904
L_800CD908:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CD908
  c->r[3]=c->r[31]|c->r[31]; // 800CD90C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CD910
  c->ctr=c->r[12]; // 800CD914
  if (true) { c->lr=0x800CD91Cu; dispatch(c,c->ctr); } // 800CD918
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800CD91C
  if (crb(c,2)) { goto L_800CD944; } // 800CD920
  c->r[12]=R32(c->r[30]+0x00000000u); // 800CD924
  c->r[3]=c->r[30]|c->r[30]; // 800CD928
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CD92C
  c->ctr=c->r[12]; // 800CD930
  if (true) { c->lr=0x800CD938u; dispatch(c,c->ctr); } // 800CD934
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CD938
  c->r[0]=0u+0x00000000u; // 800CD93C
  W32(c->r[3]+0x00000120u,c->r[0]); // 800CD940
L_800CD944:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD944
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD948
  c->lr=c->r[0]; // 800CD94C
  c->r[1]=c->r[1]+0x00000010u; // 800CD950
  return; // 800CD954
}

// fn_800CD958
void f_800CD958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD958
  c->r[0]=c->lr; // 800CD95C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD960
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD964
  c->r[31]=c->r[3]|c->r[3]; // 800CD968
  c->r[3]=c->r[3]+0x000000D0u; // 800CD96C
  c->lr=0x800CD974u; f_80031D3C(c); // 800CD970
  c->r[3]=c->r[31]|c->r[31]; // 800CD974
  c->lr=0x800CD97Cu; f_800CD9DC(c); // 800CD978
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD97C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD980
  c->lr=c->r[0]; // 800CD984
  c->r[1]=c->r[1]+0x00000010u; // 800CD988
  return; // 800CD98C
}

// fn_800CD990
void f_800CD990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD990
  c->r[0]=c->lr; // 800CD994
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD99C
  c->r[31]=c->r[3]|c->r[3]; // 800CD9A0
  c->r[3]=c->r[3]+0x000000DCu; // 800CD9A4
  c->lr=0x800CD9ACu; f_80031D3C(c); // 800CD9A8
  c->r[3]=c->r[31]|c->r[31]; // 800CD9AC
  c->lr=0x800CD9B4u; f_800CD9DC(c); // 800CD9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD9B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD9B8
  c->lr=c->r[0]; // 800CD9BC
  c->r[1]=c->r[1]+0x00000010u; // 800CD9C0
  return; // 800CD9C4
}

// fn_800CD9C8
void f_800CD9C8(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CD9C8
  W8(c->r[3]+0x000000E8u,c->r[4]); // 800CD9CC
  c->r[0]=c->r[0]|0x00000010u; // 800CD9D0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CD9D4
  f_800CD9DC(c); return; // 800CD9D8
}

// fn_800CD9DC
void f_800CD9DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD9DC
  c->r[0]=c->lr; // 800CD9E0
  c->r[4]=0u+0x80260000u; // 800CD9E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD9E8
  c->r[4]=c->r[4]+0xFFFFF200u; // 800CD9EC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD9F0
  c->r[29]=c->r[3]|c->r[3]; // 800CD9F4
  c->r[30]=c->r[4]+0x0000001Eu; // 800CD9F8
  c->r[0]=R8(c->r[3]+0x000000E8u); // 800CD9FC
  cmps(c,0,(int32_t)c->r[0],0); // 800CDA00
  if (crb(c,2)) { goto L_800CDA0C; } // 800CDA04
  c->r[30]=c->r[4]+0x00000019u; // 800CDA08
L_800CDA0C:;
  c->r[3]=c->r[3]+0x000000D0u; // 800CDA0C
  c->lr=0x800CDA14u; f_80031DA0(c); // 800CDA10
  c->r[31]=c->r[3]|c->r[3]; // 800CDA14
  c->r[3]=c->r[29]+0x000000DCu; // 800CDA18
  c->lr=0x800CDA20u; f_80031DA0(c); // 800CDA1C
  c->r[4]=c->r[3]|c->r[3]; // 800CDA20
  c->r[3]=c->r[29]|c->r[29]; // 800CDA24
  c->r[5]=c->r[31]|c->r[31]; // 800CDA28
  c->r[6]=c->r[30]|c->r[30]; // 800CDA2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDA30
  c->lr=0x800CDA38u; f_800CD550(c); // 800CDA34
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDA38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDA3C
  c->lr=c->r[0]; // 800CDA40
  c->r[1]=c->r[1]+0x00000020u; // 800CDA44
  return; // 800CDA48
}

// fn_800CDA4C
void f_800CDA4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDA4C
  c->r[0]=c->lr; // 800CDA50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDA54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CDA58
  c->r[30]=c->r[3]|c->r[3]; // 800CDA5C
  c->lr=0x800CDA64u; f_800CD4BC(c); // 800CDA60
  c->r[4]=0u+0x80280000u; // 800CDA64
  c->r[3]=c->r[30]+0x000000D0u; // 800CDA68
  c->r[4]=c->r[4]+0x00001A6Cu; // 800CDA6C
  W32(c->r[30]+0x00000000u,c->r[4]); // 800CDA70
  c->lr=0x800CDA78u; f_8000C958(c); // 800CDA74
  c->r[3]=c->r[30]+0x000000DCu; // 800CDA78
  c->lr=0x800CDA80u; f_8000C958(c); // 800CDA7C
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 800CDA80
  c->r[7]=0u+0x00000000u; // 800CDA84
  c->r[6]=0u+0x0000270Fu; // 800CDA88
  c->r[5]=0u+0x00000001u; // 800CDA8C
  c->r[0]=c->r[0]|0x00000060u; // 800CDA90
  c->r[31]=0u+0x80260000u; // 800CDA94
  c->r[31]=c->r[31]+0xFFFFF200u; // 800CDA98
  W32(c->r[30]+0x000000E8u,c->r[7]); // 800CDA9C
  c->r[3]=c->r[30]+0x000000D0u; // 800CDAA0
  W32(c->r[30]+0x000000ECu,c->r[7]); // 800CDAA4
  c->r[4]=c->r[31]+0x00000024u; // 800CDAA8
  W32(c->r[30]+0x000000F0u,c->r[7]); // 800CDAAC
  W32(c->r[30]+0x000000F4u,c->r[6]); // 800CDAB0
  W32(c->r[30]+0x000000F8u,c->r[5]); // 800CDAB4
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 800CDAB8
  c->lr=0x800CDAC0u; f_80031D3C(c); // 800CDABC
  c->r[3]=c->r[30]+0x000000DCu; // 800CDAC0
  c->r[4]=c->r[31]+0x0000002Du; // 800CDAC4
  c->lr=0x800CDACCu; f_80031D3C(c); // 800CDAC8
  c->r[3]=c->r[30]+0x000000D0u; // 800CDACC
  c->lr=0x800CDAD4u; f_80031DA0(c); // 800CDAD0
  c->r[31]=c->r[3]|c->r[3]; // 800CDAD4
  c->r[3]=c->r[30]+0x000000DCu; // 800CDAD8
  c->lr=0x800CDAE0u; f_80031DA0(c); // 800CDADC
  c->r[6]=R32(c->r[30]+0x000000E8u); // 800CDAE0
  c->r[4]=c->r[3]|c->r[3]; // 800CDAE4
  c->r[3]=c->r[30]|c->r[30]; // 800CDAE8
  c->r[5]=c->r[31]|c->r[31]; // 800CDAEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDAF0
  c->lr=0x800CDAF8u; f_800CD550(c); // 800CDAF4
  c->r[3]=c->r[30]|c->r[30]; // 800CDAF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDAFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDB00
  c->lr=c->r[0]; // 800CDB04
  c->r[1]=c->r[1]+0x00000010u; // 800CDB08
  return; // 800CDB0C
}

// fn_800CDB10
void f_800CDB10(Ctx* __restrict c) {
  c->r[0]=c->r[2]+0xFFFFA1B8u; // 800CDB10
  cmpu(c,0,c->r[4],c->r[0]); // 800CDB14
  if (!crb(c,2)) { goto L_800CDB28; } // 800CDB18
  W32(c->r[5]+0x00000000u,c->r[3]); // 800CDB1C
  c->r[3]=0u+0x00000001u; // 800CDB20
  return; // 800CDB24
L_800CDB28:;
  f_800CD528(c); return; // 800CDB28
  return; // 800CDB2C
}

// fn_800CDB30
void f_800CDB30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDB30
  c->r[0]=c->lr; // 800CDB34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDB38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CDB3C
  c->r[30]=c->r[3]|c->r[3]; // 800CDB40
  c->r[3]=c->r[3]+0x000000D0u; // 800CDB44
  c->lr=0x800CDB4Cu; f_80031D3C(c); // 800CDB48
  c->r[3]=c->r[30]+0x000000D0u; // 800CDB4C
  c->lr=0x800CDB54u; f_80031DA0(c); // 800CDB50
  c->r[31]=c->r[3]|c->r[3]; // 800CDB54
  c->r[3]=c->r[30]+0x000000DCu; // 800CDB58
  c->lr=0x800CDB60u; f_80031DA0(c); // 800CDB5C
  c->r[6]=R32(c->r[30]+0x000000E8u); // 800CDB60
  c->r[4]=c->r[3]|c->r[3]; // 800CDB64
  c->r[3]=c->r[30]|c->r[30]; // 800CDB68
  c->r[5]=c->r[31]|c->r[31]; // 800CDB6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDB70
  c->lr=0x800CDB78u; f_800CD550(c); // 800CDB74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDB78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDB7C
  c->lr=c->r[0]; // 800CDB80
  c->r[1]=c->r[1]+0x00000010u; // 800CDB84
  return; // 800CDB88
}

// fn_800CDB8C
void f_800CDB8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDB8C
  c->r[0]=c->lr; // 800CDB90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDB94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CDB98
  c->r[30]=c->r[3]|c->r[3]; // 800CDB9C
  c->r[3]=c->r[3]+0x000000DCu; // 800CDBA0
  c->lr=0x800CDBA8u; f_80031D3C(c); // 800CDBA4
  c->r[3]=c->r[30]+0x000000D0u; // 800CDBA8
  c->lr=0x800CDBB0u; f_80031DA0(c); // 800CDBAC
  c->r[31]=c->r[3]|c->r[3]; // 800CDBB0
  c->r[3]=c->r[30]+0x000000DCu; // 800CDBB4
  c->lr=0x800CDBBCu; f_80031DA0(c); // 800CDBB8
  c->r[6]=R32(c->r[30]+0x000000E8u); // 800CDBBC
  c->r[4]=c->r[3]|c->r[3]; // 800CDBC0
  c->r[3]=c->r[30]|c->r[30]; // 800CDBC4
  c->r[5]=c->r[31]|c->r[31]; // 800CDBC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDBCC
  c->lr=0x800CDBD4u; f_800CD550(c); // 800CDBD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDBD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDBD8
  c->lr=c->r[0]; // 800CDBDC
  c->r[1]=c->r[1]+0x00000010u; // 800CDBE0
  return; // 800CDBE4
}

// fn_800CDBE8
void f_800CDBE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDBE8
  c->r[0]=c->lr; // 800CDBEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDBF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CDBF4
  c->r[30]=c->r[3]|c->r[3]; // 800CDBF8
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800CDBFC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800CDC00
  if (!crb(c,0)) { goto L_800CDC0C; } // 800CDC04
  c->r[0]=c->r[4]|c->r[4]; // 800CDC08
L_800CDC0C:;
  c->r[4]=R32(c->r[3]+0x000000F0u); // 800CDC0C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CDC10
  if (!crb(c,1)) { goto L_800CDC1C; } // 800CDC14
  c->r[4]=c->r[0]|c->r[0]; // 800CDC18
L_800CDC1C:;
  W32(c->r[3]+0x000000E8u,c->r[4]); // 800CDC1C
  c->r[3]=c->r[3]+0x000000D0u; // 800CDC20
  c->lr=0x800CDC28u; f_80031DA0(c); // 800CDC24
  c->r[31]=c->r[3]|c->r[3]; // 800CDC28
  c->r[3]=c->r[30]+0x000000DCu; // 800CDC2C
  c->lr=0x800CDC34u; f_80031DA0(c); // 800CDC30
  c->r[6]=R32(c->r[30]+0x000000E8u); // 800CDC34
  c->r[4]=c->r[3]|c->r[3]; // 800CDC38
  c->r[3]=c->r[30]|c->r[30]; // 800CDC3C
  c->r[5]=c->r[31]|c->r[31]; // 800CDC40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CDC44
  c->lr=0x800CDC4Cu; f_800CD550(c); // 800CDC48
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 800CDC4C
  c->r[0]=c->r[0]|0x00000010u; // 800CDC50
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 800CDC54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDC58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDC5C
  c->lr=c->r[0]; // 800CDC60
  c->r[1]=c->r[1]+0x00000010u; // 800CDC64
  return; // 800CDC68
}

// fn_800CDC6C
void f_800CDC6C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F0u,c->r[4]); // 800CDC6C
  c->r[4]=R32(c->r[3]+0x000000E8u); // 800CDC70
  W32(c->r[3]+0x000000F4u,c->r[5]); // 800CDC74
  f_800CDBE8(c); return; // 800CDC78
}

// fn_800CDC7C
void f_800CDC7C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F8u,c->r[4]); // 800CDC7C
  return; // 800CDC80
}

// fn_800CDC84
void f_800CDC84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDC84
  c->r[0]=c->lr; // 800CDC88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDC8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDC90
  c->r[31]=c->r[4]|c->r[4]; // 800CDC94
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDC98
  c->r[30]=c->r[3]|c->r[3]; // 800CDC9C
  c->r[3]=c->r[31]|c->r[31]; // 800CDCA0
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CDCA4
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CDCA8
  c->ctr=c->r[12]; // 800CDCAC
  if (true) { c->lr=0x800CDCB4u; dispatch(c,c->ctr); } // 800CDCB0
  c->r[0]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[0]); // 800CDCB4
  if (crb(c,2)) { goto L_800CDCD4; } // 800CDCB8
  c->r[4]=R32(c->r[30]+0x000000F8u); // 800CDCBC
  c->r[3]=c->r[30]|c->r[30]; // 800CDCC0
  c->r[0]=R32(c->r[30]+0x000000E8u); // 800CDCC4
  c->r[4]=c->r[0]-c->r[4]; // 800CDCC8
  c->lr=0x800CDCD0u; f_800CDBE8(c); // 800CDCCC
  goto L_800CDDCC; // 800CDCD0
L_800CDCD4:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CDCD4
  c->r[3]=c->r[31]|c->r[31]; // 800CDCD8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CDCDC
  c->ctr=c->r[12]; // 800CDCE0
  if (true) { c->lr=0x800CDCE8u; dispatch(c,c->ctr); } // 800CDCE4
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 800CDCE8
  if (crb(c,2)) { goto L_800CDD08; } // 800CDCEC
  c->r[4]=R32(c->r[30]+0x000000F8u); // 800CDCF0
  c->r[3]=c->r[30]|c->r[30]; // 800CDCF4
  c->r[0]=R32(c->r[30]+0x000000E8u); // 800CDCF8
  c->r[4]=c->r[4]+c->r[0]; // 800CDCFC
  c->lr=0x800CDD04u; f_800CDBE8(c); // 800CDD00
  goto L_800CDDCC; // 800CDD04
L_800CDD08:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CDD08
  c->r[3]=c->r[31]|c->r[31]; // 800CDD0C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CDD10
  c->ctr=c->r[12]; // 800CDD14
  if (true) { c->lr=0x800CDD1Cu; dispatch(c,c->ctr); } // 800CDD18
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800CDD1C
  if (crb(c,2)) { goto L_800CDD34; } // 800CDD20
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CDD24
  c->r[0]=0u+0x00000000u; // 800CDD28
  W32(c->r[3]+0x00000120u,c->r[0]); // 800CDD2C
  goto L_800CDDCC; // 800CDD30
L_800CDD34:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CDD34
  c->r[3]=c->r[31]|c->r[31]; // 800CDD38
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CDD3C
  c->ctr=c->r[12]; // 800CDD40
  if (true) { c->lr=0x800CDD48u; dispatch(c,c->ctr); } // 800CDD44
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800CDD48
  if (crb(c,2)) { goto L_800CDD74; } // 800CDD4C
  c->r[12]=R32(c->r[30]+0x00000000u); // 800CDD50
  c->r[3]=c->r[30]|c->r[30]; // 800CDD54
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CDD58
  c->ctr=c->r[12]; // 800CDD5C
  if (true) { c->lr=0x800CDD64u; dispatch(c,c->ctr); } // 800CDD60
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CDD64
  c->r[0]=0u+0x00000000u; // 800CDD68
  W32(c->r[3]+0x00000120u,c->r[0]); // 800CDD6C
  goto L_800CDDCC; // 800CDD70
L_800CDD74:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CDD74
  c->r[3]=c->r[31]|c->r[31]; // 800CDD78
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800CDD7C
  c->ctr=c->r[12]; // 800CDD80
  if (true) { c->lr=0x800CDD88u; dispatch(c,c->ctr); } // 800CDD84
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDD88
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDD8C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800CDD90
  c->f[1]=std::fabs(c->f[2]); // 800CDD94
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800CDD98
  fcmp(c,0,c->f[1],c->f[0]); // 800CDD9C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CDDA0
  if (!crb(c,2)) { goto L_800CDDCC; } // 800CDDA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CDDA8
  c->r[5]=R32(c->r[30]+0x000000F8u); // 800CDDAC
  c->r[0]=R32(c->r[30]+0x000000E8u); // 800CDDB0
  c->r[3]=c->r[30]|c->r[30]; // 800CDDB4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800CDDB8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800CDDBC
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 800CDDC0
  c->r[4]=c->r[4]+c->r[0]; // 800CDDC4
  c->lr=0x800CDDCCu; f_800CDBE8(c); // 800CDDC8
L_800CDDCC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDDCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CDDD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CDDD4
  c->lr=c->r[0]; // 800CDDD8
  c->r[1]=c->r[1]+0x00000020u; // 800CDDDC
  return; // 800CDDE0
}

// fn_800CDDE4
void f_800CDDE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDDE4
  c->r[0]=c->lr; // 800CDDE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDDEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDDF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CDDF4
  c->r[30]=c->r[3]|c->r[3]; // 800CDDF8
  c->lr=0x800CDE00u; f_800CD4BC(c); // 800CDDFC
  c->r[4]=0u+0x80280000u; // 800CDE00
  c->r[3]=c->r[30]+0x000000D0u; // 800CDE04
  c->r[4]=c->r[4]+0x00001A44u; // 800CDE08
  W32(c->r[30]+0x00000000u,c->r[4]); // 800CDE0C
  c->lr=0x800CDE14u; f_8000C958(c); // 800CDE10
  c->r[3]=c->r[30]+0x000000DCu; // 800CDE14
  c->lr=0x800CDE1Cu; f_8000C958(c); // 800CDE18
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 800CDE1C
  c->r[5]=0u+0x00000000u; // 800CDE20
  {uint32_t ea=c->r[2]+0xFFFF8A30u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDE24
  c->r[31]=0u+0x80260000u; // 800CDE28
  {uint32_t ea=c->r[2]+0xFFFF8A48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDE2C
  c->r[0]=c->r[0]|0x00000060u; // 800CDE30
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDE34
  c->r[31]=c->r[31]+0xFFFFF200u; // 800CDE38
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[2]);} // 800CDE3C
  c->r[3]=c->r[30]+0x000000D0u; // 800CDE40
  c->r[4]=c->r[31]+0x00000035u; // 800CDE44
  W32(c->r[30]+0x000000ECu,c->r[5]); // 800CDE48
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[2]);} // 800CDE4C
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[1]);} // 800CDE50
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[0]);} // 800CDE54
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 800CDE58
  c->lr=0x800CDE60u; f_80031D3C(c); // 800CDE5C
  c->r[3]=c->r[30]+0x000000DCu; // 800CDE60
  c->r[4]=c->r[31]+0x0000003Bu; // 800CDE64
  c->lr=0x800CDE6Cu; f_80031D3C(c); // 800CDE68
  c->r[3]=c->r[30]|c->r[30]; // 800CDE6C
  c->lr=0x800CDE74u; f_800CE11C(c); // 800CDE70
  c->r[3]=c->r[30]|c->r[30]; // 800CDE74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDE78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CDE7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDE80
  c->lr=c->r[0]; // 800CDE84
  c->r[1]=c->r[1]+0x00000010u; // 800CDE88
  return; // 800CDE8C
}

// fn_800CDE90
void f_800CDE90(Ctx* __restrict c) {
  c->r[0]=c->r[2]+0xFFFFA1BCu; // 800CDE90
  cmpu(c,0,c->r[4],c->r[0]); // 800CDE94
  if (!crb(c,2)) { goto L_800CDEA8; } // 800CDE98
  W32(c->r[5]+0x00000000u,c->r[3]); // 800CDE9C
  c->r[3]=0u+0x00000001u; // 800CDEA0
  return; // 800CDEA4
L_800CDEA8:;
  f_800CD528(c); return; // 800CDEA8
  return; // 800CDEAC
}

// fn_800CDEB0
void f_800CDEB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDEB0
  c->r[0]=c->lr; // 800CDEB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDEB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDEBC
  c->r[31]=c->r[3]|c->r[3]; // 800CDEC0
  c->r[3]=c->r[3]+0x000000D0u; // 800CDEC4
  c->lr=0x800CDECCu; f_80031D3C(c); // 800CDEC8
  c->r[3]=c->r[31]|c->r[31]; // 800CDECC
  c->lr=0x800CDED4u; f_800CE11C(c); // 800CDED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDED8
  c->lr=c->r[0]; // 800CDEDC
  c->r[1]=c->r[1]+0x00000010u; // 800CDEE0
  return; // 800CDEE4
}

// fn_800CDEE8
void f_800CDEE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDEE8
  c->r[0]=c->lr; // 800CDEEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDEF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDEF4
  c->r[31]=c->r[3]|c->r[3]; // 800CDEF8
  c->r[3]=c->r[3]+0x000000DCu; // 800CDEFC
  c->lr=0x800CDF04u; f_80031D3C(c); // 800CDF00
  c->r[3]=c->r[31]|c->r[31]; // 800CDF04
  c->lr=0x800CDF0Cu; f_800CE11C(c); // 800CDF08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDF0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDF10
  c->lr=c->r[0]; // 800CDF14
  c->r[1]=c->r[1]+0x00000010u; // 800CDF18
  return; // 800CDF1C
}

// fn_800CDF20
void f_800CDF20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDF20
  c->r[0]=c->lr; // 800CDF24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDF28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDF2C
  c->r[31]=c->r[3]|c->r[3]; // 800CDF30
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDF34
  fcmp(c,0,c->f[1],c->f[0]); // 800CDF38
  if (!crb(c,0)) { goto L_800CDF44; } // 800CDF3C
  goto L_800CDF48; // 800CDF40
L_800CDF44:;
  c->f[1]=c->f[0]; // 800CDF44
L_800CDF48:;
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDF48
  fcmp(c,0,c->f[1],c->f[0]); // 800CDF4C
  if (!crb(c,1)) { goto L_800CDF58; } // 800CDF50
  goto L_800CDF5C; // 800CDF54
L_800CDF58:;
  c->f[1]=c->f[0]; // 800CDF58
L_800CDF5C:;
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[1]);} // 800CDF5C
  c->r[3]=c->r[31]|c->r[31]; // 800CDF60
  c->lr=0x800CDF68u; f_800CE11C(c); // 800CDF64
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800CDF68
  c->r[0]=c->r[0]|0x00000010u; // 800CDF6C
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800CDF70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDF74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDF78
  c->lr=c->r[0]; // 800CDF7C
  c->r[1]=c->r[1]+0x00000010u; // 800CDF80
  return; // 800CDF84
}

// fn_800CDF88
void f_800CDF88(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDF88
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[1]);} // 800CDF8C
  c->f[1]=c->f[0]; // 800CDF90
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[2]);} // 800CDF94
  f_800CDF20(c); return; // 800CDF98
}

// fn_800CDF9C
void f_800CDF9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[1]);} // 800CDF9C
  return; // 800CDFA0
}

// fn_800CDFA4
void f_800CDFA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDFA4
  c->r[0]=c->lr; // 800CDFA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDFAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDFB0
  c->r[31]=c->r[4]|c->r[4]; // 800CDFB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDFB8
  c->r[30]=c->r[3]|c->r[3]; // 800CDFBC
  c->r[3]=c->r[31]|c->r[31]; // 800CDFC0
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CDFC4
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CDFC8
  c->ctr=c->r[12]; // 800CDFCC
  if (true) { c->lr=0x800CDFD4u; dispatch(c,c->ctr); } // 800CDFD0
  c->r[0]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[0]); // 800CDFD4
  if (crb(c,2)) { goto L_800CDFF4; } // 800CDFD8
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDFDC
  c->r[3]=c->r[30]|c->r[30]; // 800CDFE0
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDFE4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800CDFE8
  c->lr=0x800CDFF0u; f_800CDF20(c); // 800CDFEC
  goto L_800CE104; // 800CDFF0
L_800CDFF4:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CDFF4
  c->r[3]=c->r[31]|c->r[31]; // 800CDFF8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CDFFC
  c->ctr=c->r[12]; // 800CE000
  if (true) { c->lr=0x800CE008u; dispatch(c,c->ctr); } // 800CE004
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 800CE008
  if (crb(c,2)) { goto L_800CE028; } // 800CE00C
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE010
  c->r[3]=c->r[30]|c->r[30]; // 800CE014
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE018
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800CE01C
  c->lr=0x800CE024u; f_800CDF20(c); // 800CE020
  goto L_800CE104; // 800CE024
L_800CE028:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CE028
  c->r[3]=c->r[31]|c->r[31]; // 800CE02C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CE030
  c->ctr=c->r[12]; // 800CE034
  if (true) { c->lr=0x800CE03Cu; dispatch(c,c->ctr); } // 800CE038
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800CE03C
  if (crb(c,2)) { goto L_800CE054; } // 800CE040
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CE044
  c->r[0]=0u+0x00000000u; // 800CE048
  W32(c->r[3]+0x00000120u,c->r[0]); // 800CE04C
  goto L_800CE104; // 800CE050
L_800CE054:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CE054
  c->r[3]=c->r[31]|c->r[31]; // 800CE058
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CE05C
  c->ctr=c->r[12]; // 800CE060
  if (true) { c->lr=0x800CE068u; dispatch(c,c->ctr); } // 800CE064
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800CE068
  if (crb(c,2)) { goto L_800CE094; } // 800CE06C
  c->r[12]=R32(c->r[30]+0x00000000u); // 800CE070
  c->r[3]=c->r[30]|c->r[30]; // 800CE074
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CE078
  c->ctr=c->r[12]; // 800CE07C
  if (true) { c->lr=0x800CE084u; dispatch(c,c->ctr); } // 800CE080
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CE084
  c->r[0]=0u+0x00000000u; // 800CE088
  W32(c->r[3]+0x00000120u,c->r[0]); // 800CE08C
  goto L_800CE104; // 800CE090
L_800CE094:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CE094
  c->r[3]=c->r[31]|c->r[31]; // 800CE098
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800CE09C
  c->ctr=c->r[12]; // 800CE0A0
  if (true) { c->lr=0x800CE0A8u; dispatch(c,c->ctr); } // 800CE0A4
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE0A8
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE0AC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800CE0B0
  c->f[1]=std::fabs(c->f[2]); // 800CE0B4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800CE0B8
  fcmp(c,0,c->f[1],c->f[0]); // 800CE0BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CE0C0
  if (!crb(c,2)) { goto L_800CE104; } // 800CE0C4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CE0C8
  c->r[0]=0u+0x43300000u; // 800CE0CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CE0D0
  c->r[3]=c->r[30]|c->r[30]; // 800CE0D4
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 800CE0D8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800CE0DC
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CE0E0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CE0E4
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE0E8
  c->r[0]=c->r[0]^0x80000000u; // 800CE0EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE0F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800CE0F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800CE0F8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[1],c->f[3])); // 800CE0FC
  c->lr=0x800CE104u; f_800CDF20(c); // 800CE100
L_800CE104:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE104
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE108
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE10C
  c->lr=c->r[0]; // 800CE110
  c->r[1]=c->r[1]+0x00000020u; // 800CE114
  return; // 800CE118
}

// fn_800CE11C
void f_800CE11C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE11C
  c->r[0]=c->lr; // 800CE120
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE124
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE128
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CE12C
  c->r[30]=c->r[3]|c->r[3]; // 800CE130
  c->r[3]=c->r[3]+0x000000D0u; // 800CE134
  c->lr=0x800CE13Cu; f_80031DA0(c); // 800CE138
  c->r[31]=c->r[3]|c->r[3]; // 800CE13C
  c->r[3]=c->r[30]+0x000000DCu; // 800CE140
  c->lr=0x800CE148u; f_80031DA0(c); // 800CE144
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE148
  c->r[4]=c->r[3]|c->r[3]; // 800CE14C
  c->r[3]=c->r[30]|c->r[30]; // 800CE150
  c->r[5]=c->r[31]|c->r[31]; // 800CE154
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 800CE158
  c->lr=0x800CE160u; f_800CD550(c); // 800CE15C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE164
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CE168
  c->lr=c->r[0]; // 800CE16C
  c->r[1]=c->r[1]+0x00000010u; // 800CE170
  return; // 800CE174
}

// fn_800CE178
void f_800CE178(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE178
  c->r[0]=c->lr; // 800CE17C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE180
  c->r[11]=c->r[1]+0x00000020u; // 800CE184
  c->lr=0x800CE18Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE188
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CE18C
  c->r[4]=0u+0xFFFFFFFFu; // 800CE190
  c->r[5]=0u+0x80280000u; // 800CE194
  c->r[31]=0u+0x00000000u; // 800CE198
  c->r[0]=c->r[0]|0x00000080u; // 800CE19C
  W32(c->r[3]+0x00000004u,c->r[31]); // 800CE1A0
  c->r[5]=c->r[5]+0x00001A1Cu; // 800CE1A4
  c->r[29]=c->r[3]|c->r[3]; // 800CE1A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 800CE1AC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800CE1B0
  W32(c->r[3]+0x00000008u,c->r[4]); // 800CE1B4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CE1B8
  W32(c->r[3]+0x00000010u,c->r[4]); // 800CE1BC
  W32(c->r[3]+0x00000014u,c->r[4]); // 800CE1C0
  c->r[3]=c->r[3]+0x00000018u; // 800CE1C4
  c->lr=0x800CE1CCu; f_8003B79C(c); // 800CE1C8
  {uint32_t ea=c->r[2]+0xFFFF8A30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE1CC
  c->r[3]=c->r[29]+0x00000050u; // 800CE1D0
  W32(c->r[29]+0x00000024u,c->r[31]); // 800CE1D4
  W32(c->r[29]+0x00000028u,c->r[31]); // 800CE1D8
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 800CE1DC
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 800CE1E0
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800CE1E4
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 800CE1E8
  c->lr=0x800CE1F0u; f_800CD4BC(c); // 800CE1EC
  W32(c->r[29]+0x00000120u,c->r[31]); // 800CE1F0
  c->r[31]=0u+0x80260000u; // 800CE1F4
  c->r[31]=c->r[31]+0xFFFFF200u; // 800CE1F8
  c->r[3]=c->r[29]+0x00000080u; // 800CE1FC
  c->r[4]=R32(c->r[13]+0xFFFF94F8u); // 800CE200
  c->r[30]=c->r[31]+0x00000045u; // 800CE204
  c->r[5]=R32(c->r[4]+0x00000004u); // 800CE208
  c->r[0]=c->r[5]+0x00000001u; // 800CE20C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800CE210
  W32(c->r[29]+0x00000008u,c->r[5]); // 800CE214
  c->lr=0x800CE21Cu; f_800C3E48(c); // 800CE218
  c->r[5]=c->r[30]|c->r[30]; // 800CE21C
  c->r[3]=c->r[29]+0x00000050u; // 800CE220
  c->r[4]=c->r[31]+0x0000004Du; // 800CE224
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE228
  c->lr=0x800CE230u; f_800CD550(c); // 800CE22C
  {uint32_t ea=c->r[2]+0xFFFF8A4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE230
  c->r[3]=0u+0xFF800000u; // 800CE234
  c->r[0]=c->r[3]+0x000000FFu; // 800CE238
  {uint32_t ea=c->r[2]+0xFFFF8A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE23C
  c->r[4]=0u+0x000000D0u; // 800CE240
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[1]);} // 800CE244
  c->r[3]=c->r[29]+0x00000018u; // 800CE248
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 800CE24C
  W32(c->r[29]+0x00000010u,c->r[4]); // 800CE250
  W32(c->r[29]+0x00000014u,c->r[0]); // 800CE254
  c->lr=0x800CE25Cu; f_8003BB20(c); // 800CE258
  c->r[11]=c->r[1]+0x00000020u; // 800CE25C
  c->r[3]=c->r[29]|c->r[29]; // 800CE260
  c->lr=0x800CE268u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE264
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE268
  c->lr=c->r[0]; // 800CE26C
  c->r[1]=c->r[1]+0x00000020u; // 800CE270
  return; // 800CE274
}

// fn_800CE278
void f_800CE278(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE278
  c->r[0]=c->lr; // 800CE27C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE280
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE284
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE288
  c->r[30]=c->r[3]|c->r[3]; // 800CE28C
  c->r[31]=c->r[4]|c->r[4]; // 800CE290
  if (crb(c,2)) { goto L_800CE2D4; } // 800CE294
  c->r[4]=0u+0x80280000u; // 800CE298
  c->r[4]=c->r[4]+0x00001A1Cu; // 800CE29C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CE2A0
  c->r[3]=c->r[3]+0x00000018u; // 800CE2A4
  c->lr=0x800CE2ACu; f_8003BB20(c); // 800CE2A8
  c->r[3]=c->r[30]+0x00000050u; // 800CE2AC
  c->r[4]=0u+0xFFFFFFFFu; // 800CE2B0
  c->lr=0x800CE2B8u; f_8008CC58(c); // 800CE2B4
  c->r[3]=c->r[30]+0x00000018u; // 800CE2B8
  c->r[4]=0u+0xFFFFFFFFu; // 800CE2BC
  c->lr=0x800CE2C4u; f_800CF9F8(c); // 800CE2C0
  cmps(c,0,(int32_t)c->r[31],0); // 800CE2C4
  if (!crb(c,1)) { goto L_800CE2D4; } // 800CE2C8
  c->r[3]=c->r[30]|c->r[30]; // 800CE2CC
  c->lr=0x800CE2D4u; f_8009230C(c); // 800CE2D0
L_800CE2D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800CE2D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE2D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE2DC
  c->lr=c->r[0]; // 800CE2E0
  c->r[1]=c->r[1]+0x00000010u; // 800CE2E4
  return; // 800CE2E8
}

// fn_800CE2EC
void f_800CE2EC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000008u,c->r[4]); // 800CE2EC
  return; // 800CE2F0
}

// fn_800CE2F4
void f_800CE2F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE2F4
  c->r[0]=c->lr; // 800CE2F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE2FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE300
  c->r[30]=c->r[3]|c->r[3]; // 800CE304
  c->r[31]=c->r[4]|c->r[4]; // 800CE308
  c->r[3]=c->r[3]+0x00000080u; // 800CE30C
  c->lr=0x800CE314u; f_800C3E48(c); // 800CE310
  c->r[4]=0u+0x80260000u; // 800CE314
  c->r[5]=c->r[31]|c->r[31]; // 800CE318
  c->r[4]=c->r[4]+0xFFFFF200u; // 800CE31C
  c->r[3]=c->r[30]+0x00000050u; // 800CE320
  c->r[4]=c->r[4]+0x0000004Du; // 800CE324
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE328
  c->lr=0x800CE330u; f_800CD550(c); // 800CE32C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE330
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE334
  c->lr=c->r[0]; // 800CE338
  c->r[1]=c->r[1]+0x00000010u; // 800CE33C
  return; // 800CE340
}

// fn_800CE344
void f_800CE344(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CE344
  c->r[0]=(rotl(c->r[4],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 800CE348
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CE34C
  return; // 800CE350
}

// fn_800CE354
void f_800CE354(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CE354
  c->r[3]=rotl(c->r[0],25)&0x00000001u; // 800CE358
  return; // 800CE35C
}

// fn_800CE360
void f_800CE360(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 800CE360
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 800CE364
  return; // 800CE368
}

// fn_800CE36C
void f_800CE36C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE36C
  c->r[0]=c->lr; // 800CE370
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE374
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE378
  c->r[31]=c->r[3]|c->r[3]; // 800CE37C
  c->lr=0x800CE384u; f_800CE798(c); // 800CE380
  c->r[3]=0u+0x802B0000u; // 800CE384
  c->r[3]=c->r[3]+0x00001B78u; // 800CE388
  {uint32_t ea=c->r[3]+0x00001630u; c->r[12]=R32(ea); c->r[3]=ea;} // 800CE38C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CE390
  c->ctr=c->r[12]; // 800CE394
  if (true) { c->lr=0x800CE39Cu; dispatch(c,c->ctr); } // 800CE398
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800CE39C
  if (crb(c,2)) { goto L_800CE3BC; } // 800CE3A0
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800CE3A4
  c->r[3]=c->r[31]|c->r[31]; // 800CE3A8
  c->r[0]=c->r[0]|0x00000040u; // 800CE3AC
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800CE3B0
  c->lr=0x800CE3B8u; f_800CE9D8(c); // 800CE3B4
  goto L_800CE3D0; // 800CE3B8
L_800CE3BC:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800CE3BC
  c->r[3]=c->r[31]|c->r[31]; // 800CE3C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 800CE3C4
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800CE3C8
  c->lr=0x800CE3D0u; f_800CE7F8(c); // 800CE3CC
L_800CE3D0:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CE3D0
  c->r[3]=c->r[31]|c->r[31]; // 800CE3D4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CE3D8
  c->ctr=c->r[12]; // 800CE3DC
  if (true) { c->lr=0x800CE3E4u; dispatch(c,c->ctr); } // 800CE3E0
  c->r[3]=c->r[31]|c->r[31]; // 800CE3E4
  c->lr=0x800CE3ECu; f_800CE978(c); // 800CE3E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE3EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE3F0
  c->lr=c->r[0]; // 800CE3F4
  c->r[1]=c->r[1]+0x00000010u; // 800CE3F8
  return; // 800CE3FC
}

// fn_800CE400
void f_800CE400(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800CE400
  c->r[12]=c->r[1]|c->r[1]; // 800CE404
  c->r[11]=addc(c,~c->r[11],0xFFFFFF70u,1); // 800CE408
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE40C
  c->r[0]=c->lr; // 800CE410
  W32(c->r[12]+0x00000004u,c->r[0]); // 800CE414
  {uint32_t ea=c->r[12]+0xFFFFFFF0u; WF64(ea,c->f[31]);} // 800CE418
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; psq_store(c,31,ea,0,0);} // 800CE41C
  {uint32_t ea=c->r[12]+0xFFFFFFE0u; WF64(ea,c->f[30]);} // 800CE420
  {uint32_t ea=c->r[12]+0xFFFFFFE8u; psq_store(c,30,ea,0,0);} // 800CE424
  {uint32_t ea=c->r[12]+0xFFFFFFD0u; WF64(ea,c->f[29]);} // 800CE428
  {uint32_t ea=c->r[12]+0xFFFFFFD8u; psq_store(c,29,ea,0,0);} // 800CE42C
  c->r[11]=c->r[12]+0xFFFFFFD0u; // 800CE430
  c->lr=0x800CE438u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE434
  c->r[4]=R8(c->r[3]+0x0000000Cu); // 800CE438
  c->r[5]=0u+0x43300000u; // 800CE43C
  W32(c->r[1]+0x00000020u,c->r[5]); // 800CE440
  c->r[28]=c->r[3]|c->r[3]; // 800CE444
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 800CE448
  W32(c->r[1]+0x00000028u,c->r[5]); // 800CE44C
  if (crb(c,2)) { goto L_800CE728; } // 800CE450
  {uint32_t ea=c->r[2]+0xFFFF8A30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE454
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFCFu; // 800CE458
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CE45C
  c->r[4]=c->r[28]+0x00000030u; // 800CE460
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 800CE464
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800CE468
  c->r[3]=c->r[1]+0x00000010u; // 800CE46C
  c->lr=0x800CE474u; f_800CF93C(c); // 800CE470
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE474
  c->r[3]=c->r[28]+0x00000050u; // 800CE478
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE47C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE480
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800CE484
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800CE488
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800CE48C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800CE490
  c->lr=0x800CE498u; f_800CD494(c); // 800CE494
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE498
  {uint32_t ea=c->r[2]+0xFFFF8A54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE49C
  {uint32_t ea=c->r[2]+0xFFFF8A58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE4A0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800CE4A4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800CE4A8
  {uint32_t ea=c->r[28]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE4AC
  {uint32_t ea=c->r[28]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE4B0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800CE4B4
  fcmp(c,0,c->f[2],c->f[0]); // 800CE4B8
  if (!crb(c,1)) { goto L_800CE4C4; } // 800CE4BC
  goto L_800CE4C8; // 800CE4C0
L_800CE4C4:;
  c->f[2]=c->f[0]; // 800CE4C4
L_800CE4C8:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 800CE4C8
  c->r[30]=0u+0x00000000u; // 800CE4CC
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[2]);} // 800CE4D0
  c->r[29]=0u+0x00000000u; // 800CE4D4
  c->r[0]=c->r[0]^0x80000000u; // 800CE4D8
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[31]=RF64(ea);} // 800CE4DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE4E0
  c->r[27]=0u+0x00000000u; // 800CE4E4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE4E8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800CE4EC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CE4F0
  {uint32_t ea=c->r[2]+0xFFFF8A5Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800CE4F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800CE4F8
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[29]=c->ps1[29]=RF32(ea);} // 800CE4FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[1]);} // 800CE500
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800CE504
  c->r[31]=R32(c->r[1]+0x00000034u); // 800CE508
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CE50C
  goto L_800CE618; // 800CE510
L_800CE514:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 800CE514
  c->r[3]=R32(c->r[3]+c->r[27]); // 800CE518
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CE51C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800CE520
  if (crb(c,2)) { goto L_800CE610; } // 800CE524
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE528
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE52C
  c->lr=0x800CE534u; f_800CD494(c); // 800CE530
  c->r[0]=c->r[31]^0x80000000u; // 800CE534
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE538
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CE53C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800CE540
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800CE544
  fcmp(c,0,c->f[1],c->f[0]); // 800CE548
  if (!crb(c,1)) { goto L_800CE55C; } // 800CE54C
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 800CE550
  c->r[0]=c->r[0]|0x00000020u; // 800CE554
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 800CE558
L_800CE55C:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 800CE55C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE560
  c->r[3]=R32(c->r[3]+c->r[27]); // 800CE564
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE568
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE56C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CE570
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CE574
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[1]);} // 800CE578
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800CE57C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800CE580
  c->r[0]=c->r[0]^0x80000000u; // 800CE584
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE588
  c->r[3]=R32(c->r[1]+0x00000034u); // 800CE58C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 800CE590
  c->r[0]=c->r[3]+0x00000008u; // 800CE594
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800CE598
  c->r[0]=c->r[0]^0x80000000u; // 800CE59C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CE5A0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800CE5A4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800CE5A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800CE5AC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800CE5B0
  {uint32_t ea=c->r[28]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE5B4
  fcmp(c,0,c->f[1],c->f[0]); // 800CE5B8
  if (!crb(c,1)) { goto L_800CE5C4; } // 800CE5BC
  goto L_800CE5D0; // 800CE5C0
L_800CE5C4:;
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE5C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800CE5C8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800CE5CC
L_800CE5D0:;
  c->r[3]=R8(c->r[28]+0x0000000Cu); // 800CE5D0
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[1]);} // 800CE5D4
  c->r[0]=rotl(c->r[3],28)&0x00000001u; cr0(c,c->r[0]); // 800CE5D8
  if (!crb(c,2)) { goto L_800CE610; } // 800CE5DC
  {uint32_t ea=c->r[28]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE5E0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE5E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 800CE5E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 800CE5EC
  fcmp(c,0,c->f[1],c->f[0]); // 800CE5F0
  if (!crb(c,1)) { goto L_800CE610; } // 800CE5F4
  c->r[0]=c->r[3]|0x00000010u; // 800CE5F8
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 800CE5FC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE600
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CE604
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 800CE608
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 800CE60C
L_800CE610:;
  c->r[29]=c->r[29]+0x00000001u; // 800CE610
  c->r[27]=c->r[27]+0x00000004u; // 800CE614
L_800CE618:;
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 800CE618
  cmpu(c,0,c->r[29],c->r[0]); // 800CE61C
  if (crb(c,0)) { IRQCHK(c); goto L_800CE514; } // 800CE620
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 800CE624
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 800CE628
  if (!crb(c,2)) { goto L_800CE640; } // 800CE62C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE630
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CE634
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 800CE638
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 800CE63C
L_800CE640:;
  c->r[0]=c->r[30]^0x80000000u; // 800CE640
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[3]=RF64(ea);} // 800CE644
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CE648
  c->r[3]=c->r[28]|c->r[28]; // 800CE64C
  {uint32_t ea=c->r[28]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE650
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 800CE654
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE658
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800CE65C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800CE660
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800CE664
  {uint32_t ea=c->r[28]+0x00000044u; WF32(ea,c->f[0]);} // 800CE668
  c->lr=0x800CE670u; f_800CEAF8(c); // 800CE66C
  c->r[12]=R32(c->r[28]+0x00000050u); // 800CE670
  c->r[3]=c->r[28]+0x00000050u; // 800CE674
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800CE678
  c->ctr=c->r[12]; // 800CE67C
  if (true) { c->lr=0x800CE684u; dispatch(c,c->ctr); } // 800CE680
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 800CE684
  c->r[29]=0u+0x00000000u; // 800CE688
  {uint32_t ea=c->r[2]+0xFFFF8A5Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800CE68C
  c->r[30]=0u+0x00000000u; // 800CE690
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800CE694
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CE698
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 800CE69C
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[29]=RF64(ea);} // 800CE6A0
  goto L_800CE714; // 800CE6A4
L_800CE6A8:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 800CE6A8
  c->r[3]=R32(c->r[3]+c->r[30]); // 800CE6AC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CE6B0
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 800CE6B4
  if (crb(c,2)) { goto L_800CE70C; } // 800CE6B8
  c->r[0]=c->r[31]^0x80000000u; // 800CE6BC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE6C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE6C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800CE6C8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800CE6CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 800CE6D0
  fcmp(c,0,c->f[1],c->f[0]); // 800CE6D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CE6D8
  if (!crb(c,2)) { goto L_800CE70C; } // 800CE6DC
  {uint32_t ea=c->r[28]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE6E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800CE6E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800CE6E8
  fcmp(c,0,c->f[0],c->f[1]); // 800CE6EC
  if (crb(c,1)) { goto L_800CE70C; } // 800CE6F0
  c->r[3]=R32(c->r[28]+0x00000018u); // 800CE6F4
  c->r[3]=R32(c->r[3]+c->r[30]); // 800CE6F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CE6FC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800CE700
  c->ctr=c->r[12]; // 800CE704
  if (true) { c->lr=0x800CE70Cu; dispatch(c,c->ctr); } // 800CE708
L_800CE70C:;
  c->r[29]=c->r[29]+0x00000001u; // 800CE70C
  c->r[30]=c->r[30]+0x00000004u; // 800CE710
L_800CE714:;
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 800CE714
  cmpu(c,0,c->r[29],c->r[0]); // 800CE718
  if (crb(c,0)) { IRQCHK(c); goto L_800CE6A8; } // 800CE71C
  c->r[3]=c->r[28]|c->r[28]; // 800CE720
  c->lr=0x800CE728u; f_800CEB88(c); // 800CE724
L_800CE728:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CE728
  c->r[0]=0u+0xFFFFFFF8u; // 800CE72C
  {uint32_t ea=c->r[10]+c->r[0]; psq_load(c,31,ea,0,0);} // 800CE730
  {uint32_t ea=c->r[10]+0xFFFFFFF0u; c->f[31]=RF64(ea);} // 800CE734
  c->r[0]=0u+0xFFFFFFE8u; // 800CE738
  {uint32_t ea=c->r[10]+c->r[0]; psq_load(c,30,ea,0,0);} // 800CE73C
  {uint32_t ea=c->r[10]+0xFFFFFFE0u; c->f[30]=RF64(ea);} // 800CE740
  c->r[0]=0u+0xFFFFFFD8u; // 800CE744
  {uint32_t ea=c->r[10]+c->r[0]; psq_load(c,29,ea,0,0);} // 800CE748
  c->r[11]=c->r[10]+0xFFFFFFD0u; // 800CE74C
  {uint32_t ea=c->r[10]+0xFFFFFFD0u; c->f[29]=RF64(ea);} // 800CE750
  c->lr=0x800CE758u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE754
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CE758
  c->lr=c->r[0]; // 800CE75C
  c->r[1]=c->r[10]|c->r[10]; // 800CE760
  return; // 800CE764
}

// fn_800CE768
void f_800CE768(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE768
  c->r[0]=c->lr; // 800CE76C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE770
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CE774
  W32(c->r[4]+0x00000004u,c->r[3]); // 800CE778
  c->r[3]=c->r[3]+0x00000018u; // 800CE77C
  c->r[4]=c->r[1]+0x00000008u; // 800CE780
  c->lr=0x800CE788u; f_8003BB30(c); // 800CE784
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE788
  c->lr=c->r[0]; // 800CE78C
  c->r[1]=c->r[1]+0x00000010u; // 800CE790
  return; // 800CE794
}

// fn_800CE798
void f_800CE798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE798
  c->r[0]=c->lr; // 800CE79C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE7A0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE7A4
  c->r[29]=c->r[3]|c->r[3]; // 800CE7A8
  c->r[30]=0u+0x00000000u; // 800CE7AC
  c->r[31]=0u+0x00000000u; // 800CE7B0
  goto L_800CE7D8; // 800CE7B4
L_800CE7B8:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 800CE7B8
  c->r[3]=R32(c->r[3]+c->r[31]); // 800CE7BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CE7C0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800CE7C4
  c->ctr=c->r[12]; // 800CE7C8
  if (true) { c->lr=0x800CE7D0u; dispatch(c,c->ctr); } // 800CE7CC
  c->r[30]=c->r[30]+0x00000001u; // 800CE7D0
  c->r[31]=c->r[31]+0x00000004u; // 800CE7D4
L_800CE7D8:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800CE7D8
  cmpu(c,0,c->r[30],c->r[0]); // 800CE7DC
  if (crb(c,0)) { IRQCHK(c); goto L_800CE7B8; } // 800CE7E0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE7E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE7E8
  c->lr=c->r[0]; // 800CE7EC
  c->r[1]=c->r[1]+0x00000020u; // 800CE7F0
  return; // 800CE7F4
}

// fn_800CE7F8
void f_800CE7F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE7F8
  c->r[0]=c->lr; // 800CE7FC
  c->r[4]=0u+0x802B0000u; // 800CE800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE804
  c->r[4]=c->r[4]+0x00001B78u; // 800CE808
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE80C
  c->r[30]=c->r[3]|c->r[3]; // 800CE810
  c->r[31]=c->r[4]+0x00001630u; // 800CE814
  c->r[0]=R32(c->r[3]+0x00000120u); // 800CE818
  cmps(c,0,(int32_t)c->r[0],1); // 800CE81C
  if (crb(c,2)) { goto L_800CE964; } // 800CE820
  if (!crb(c,0)) { goto L_800CE964; } // 800CE824
  cmps(c,0,(int32_t)c->r[0],0); // 800CE828
  if (!crb(c,0)) { goto L_800CE834; } // 800CE82C
  goto L_800CE964; // 800CE830
L_800CE834:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 800CE834
  cmps(c,0,(int32_t)c->r[0],0); // 800CE838
  if (!crb(c,2)) { goto L_800CE84C; } // 800CE83C
  c->r[4]=0u+0x00000000u; // 800CE840
  c->lr=0x800CE848u; f_800CEE8C(c); // 800CE844
  W32(c->r[30]+0x00000024u,c->r[3]); // 800CE848
L_800CE84C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CE84C
  c->r[3]=c->r[31]|c->r[31]; // 800CE850
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CE854
  c->ctr=c->r[12]; // 800CE858
  if (true) { c->lr=0x800CE860u; dispatch(c,c->ctr); } // 800CE85C
  c->r[0]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[0]); // 800CE860
  if (crb(c,2)) { goto L_800CE888; } // 800CE864
  c->r[4]=R32(c->r[30]+0x00000024u); // 800CE868
  c->r[3]=c->r[30]|c->r[30]; // 800CE86C
  c->lr=0x800CE874u; f_800CEDF0(c); // 800CE870
  W32(c->r[30]+0x00000024u,c->r[3]); // 800CE874
  c->r[4]=c->r[3]|c->r[3]; // 800CE878
  c->r[3]=c->r[30]|c->r[30]; // 800CE87C
  c->lr=0x800CE884u; f_800CEF34(c); // 800CE880
  goto L_800CE964; // 800CE884
L_800CE888:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CE888
  c->r[3]=c->r[31]|c->r[31]; // 800CE88C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CE890
  c->ctr=c->r[12]; // 800CE894
  if (true) { c->lr=0x800CE89Cu; dispatch(c,c->ctr); } // 800CE898
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800CE89C
  if (crb(c,2)) { goto L_800CE8C4; } // 800CE8A0
  c->r[4]=R32(c->r[30]+0x00000024u); // 800CE8A4
  c->r[3]=c->r[30]|c->r[30]; // 800CE8A8
  c->lr=0x800CE8B0u; f_800CEE8C(c); // 800CE8AC
  W32(c->r[30]+0x00000024u,c->r[3]); // 800CE8B0
  c->r[4]=c->r[3]|c->r[3]; // 800CE8B4
  c->r[3]=c->r[30]|c->r[30]; // 800CE8B8
  c->lr=0x800CE8C0u; f_800CEF34(c); // 800CE8BC
  goto L_800CE964; // 800CE8C0
L_800CE8C4:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CE8C4
  c->r[3]=c->r[31]|c->r[31]; // 800CE8C8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CE8CC
  c->ctr=c->r[12]; // 800CE8D0
  if (true) { c->lr=0x800CE8D8u; dispatch(c,c->ctr); } // 800CE8D4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800CE8D8
  if (crb(c,2)) { goto L_800CE90C; } // 800CE8DC
  c->r[3]=R32(c->r[30]+0x00000024u); // 800CE8E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CE8E4
  if (crb(c,2)) { goto L_800CE964; } // 800CE8E8
  c->lr=0x800CE8F0u; f_800CF950(c); // 800CE8EC
  cmps(c,0,(int32_t)c->r[3],0); // 800CE8F0
  if (!crb(c,2)) { goto L_800CE964; } // 800CE8F4
  c->r[3]=R32(c->r[30]+0x00000024u); // 800CE8F8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CE8FC
  c->r[0]=c->r[0]|0x00000010u; // 800CE900
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CE904
  goto L_800CE964; // 800CE908
L_800CE90C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CE90C
  c->r[3]=c->r[31]|c->r[31]; // 800CE910
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CE914
  c->ctr=c->r[12]; // 800CE918
  if (true) { c->lr=0x800CE920u; dispatch(c,c->ctr); } // 800CE91C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800CE920
  if (crb(c,2)) { goto L_800CE934; } // 800CE924
  c->r[3]=R32(c->r[30]+0x00000004u); // 800CE928
  c->lr=0x800CE930u; f_800CF1F8(c); // 800CE92C
  goto L_800CE964; // 800CE930
L_800CE934:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 800CE934
  cmps(c,0,(int32_t)c->r[3],0); // 800CE938
  if (crb(c,2)) { goto L_800CE964; } // 800CE93C
  c->lr=0x800CE944u; f_800CF950(c); // 800CE940
  cmps(c,0,(int32_t)c->r[3],0); // 800CE944
  if (crb(c,2)) { goto L_800CE964; } // 800CE948
  c->r[3]=R32(c->r[30]+0x00000024u); // 800CE94C
  c->r[4]=c->r[31]|c->r[31]; // 800CE950
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CE954
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CE958
  c->ctr=c->r[12]; // 800CE95C
  if (true) { c->lr=0x800CE964u; dispatch(c,c->ctr); } // 800CE960
L_800CE964:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE964
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE968
  c->lr=c->r[0]; // 800CE96C
  c->r[1]=c->r[1]+0x00000010u; // 800CE970
  return; // 800CE974
}

// fn_800CE978
void f_800CE978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE978
  c->r[0]=c->lr; // 800CE97C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE980
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE984
  c->r[29]=c->r[3]|c->r[3]; // 800CE988
  c->r[30]=0u+0x00000000u; // 800CE98C
  c->r[31]=0u+0x00000000u; // 800CE990
  goto L_800CE9B8; // 800CE994
L_800CE998:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 800CE998
  c->r[3]=R32(c->r[3]+c->r[31]); // 800CE99C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CE9A0
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CE9A4
  c->ctr=c->r[12]; // 800CE9A8
  if (true) { c->lr=0x800CE9B0u; dispatch(c,c->ctr); } // 800CE9AC
  c->r[30]=c->r[30]+0x00000001u; // 800CE9B0
  c->r[31]=c->r[31]+0x00000004u; // 800CE9B4
L_800CE9B8:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800CE9B8
  cmpu(c,0,c->r[30],c->r[0]); // 800CE9BC
  if (crb(c,0)) { IRQCHK(c); goto L_800CE998; } // 800CE9C0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE9C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE9C8
  c->lr=c->r[0]; // 800CE9CC
  c->r[1]=c->r[1]+0x00000020u; // 800CE9D0
  return; // 800CE9D4
}

// fn_800CE9D8
void f_800CE9D8(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800CE9D8
  c->r[12]=c->r[1]|c->r[1]; // 800CE9DC
  c->r[11]=addc(c,~c->r[11],0xFFFFFFD0u,1); // 800CE9E0
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE9E4
  c->r[0]=c->lr; // 800CE9E8
  c->r[4]=0u+0x802B0000u; // 800CE9EC
  W32(c->r[12]+0x00000004u,c->r[0]); // 800CE9F0
  c->r[4]=c->r[4]+0x00001B78u; // 800CE9F4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800CE9F8
  c->r[31]=c->r[4]+0x00001630u; // 800CE9FC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800CEA00
  c->r[30]=c->r[3]|c->r[3]; // 800CEA04
  c->r[3]=c->r[1]+0x00000010u; // 800CEA08
  c->r[4]=c->r[30]+0x00000030u; // 800CEA0C
  c->lr=0x800CEA14u; f_800CF93C(c); // 800CEA10
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CEA14
  c->r[3]=c->r[31]|c->r[31]; // 800CEA18
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CEA1C
  c->ctr=c->r[12]; // 800CEA20
  if (true) { c->lr=0x800CEA28u; dispatch(c,c->ctr); } // 800CEA24
  c->r[0]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[0]); // 800CEA28
  if (crb(c,2)) { goto L_800CEA44; } // 800CEA2C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEA30
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEA34
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CEA38
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CEA3C
  goto L_800CEA70; // 800CEA40
L_800CEA44:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CEA44
  c->r[3]=c->r[31]|c->r[31]; // 800CEA48
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CEA4C
  c->ctr=c->r[12]; // 800CEA50
  if (true) { c->lr=0x800CEA58u; dispatch(c,c->ctr); } // 800CEA54
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800CEA58
  if (crb(c,2)) { goto L_800CEA70; } // 800CEA5C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEA60
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEA64
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800CEA68
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CEA6C
L_800CEA70:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CEA70
  c->r[3]=c->r[31]|c->r[31]; // 800CEA74
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CEA78
  c->ctr=c->r[12]; // 800CEA7C
  if (true) { c->lr=0x800CEA84u; dispatch(c,c->ctr); } // 800CEA80
  c->r[0]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[0]); // 800CEA84
  if (crb(c,2)) { goto L_800CEAA0; } // 800CEA88
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEA8C
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEA90
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800CEA94
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800CEA98
  goto L_800CEACC; // 800CEA9C
L_800CEAA0:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800CEAA0
  c->r[3]=c->r[31]|c->r[31]; // 800CEAA4
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CEAA8
  c->ctr=c->r[12]; // 800CEAAC
  if (true) { c->lr=0x800CEAB4u; dispatch(c,c->ctr); } // 800CEAB0
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 800CEAB4
  if (crb(c,2)) { goto L_800CEACC; } // 800CEAB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEABC
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEAC0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CEAC4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800CEAC8
L_800CEACC:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEACC
  c->r[3]=c->r[30]|c->r[30]; // 800CEAD0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CEAD4
  c->lr=0x800CEADCu; f_800CE360(c); // 800CEAD8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CEADC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CEAE0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800CEAE4
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800CEAE8
  c->lr=c->r[0]; // 800CEAEC
  c->r[1]=c->r[10]|c->r[10]; // 800CEAF0
  return; // 800CEAF4
}

// fn_800CEAF8
void f_800CEAF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEAF8
  c->r[0]=c->lr; // 800CEAFC
  c->r[4]=0u+0x802B0000u; // 800CEB00
  c->r[6]=c->r[3]|c->r[3]; // 800CEB04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEB08
  c->r[4]=c->r[4]+0x00001B78u; // 800CEB0C
  c->r[5]=c->r[4]+0x000000ACu; // 800CEB10
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CEB14
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 800CEB18
  if (crb(c,2)) { goto L_800CEB34; } // 800CEB1C
  c->r[4]=c->r[4]+0x00010000u; // 800CEB20
  c->r[0]=R32(c->r[4]+0xFFFF9098u); // 800CEB24
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800CEB28
  cmpu(c,0,c->r[0],0x00000003u); // 800CEB2C
  if (crb(c,0)) { goto L_800CEB78; } // 800CEB30
L_800CEB34:;
  c->r[0]=R8(c->r[3]+0x00000010u); // 800CEB34
  c->r[4]=c->r[1]+0x00000008u; // 800CEB38
  W8(c->r[1]+0x00000008u,c->r[0]); // 800CEB3C
  c->r[0]=R8(c->r[3]+0x00000011u); // 800CEB40
  W8(c->r[1]+0x00000009u,c->r[0]); // 800CEB44
  c->r[0]=R8(c->r[3]+0x00000012u); // 800CEB48
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CEB4C
  c->r[0]=R8(c->r[3]+0x00000013u); // 800CEB50
  c->r[3]=c->r[5]|c->r[5]; // 800CEB54
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CEB58
  {uint32_t ea=c->r[6]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEB5C
  {uint32_t ea=c->r[6]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CEB60
  {uint32_t ea=c->r[6]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CEB64
  {uint32_t ea=c->r[6]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEB68
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[3]); // 800CEB6C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[0]); // 800CEB70
  c->lr=0x800CEB78u; f_800C3074(c); // 800CEB74
L_800CEB78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEB78
  c->lr=c->r[0]; // 800CEB7C
  c->r[1]=c->r[1]+0x00000010u; // 800CEB80
  return; // 800CEB84
}

// fn_800CEB88
void f_800CEB88(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800CEB88
  c->r[12]=c->r[1]|c->r[1]; // 800CEB8C
  c->r[11]=addc(c,~c->r[11],0xFFFFFF90u,1); // 800CEB90
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEB94
  c->r[0]=c->lr; // 800CEB98
  c->r[11]=c->r[12]|c->r[12]; // 800CEB9C
  W32(c->r[12]+0x00000004u,c->r[0]); // 800CEBA0
  c->lr=0x800CEBA8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CEBA4
  c->r[0]=R32(c->r[3]+0x00000024u); // 800CEBA8
  c->r[4]=0u+0x43300000u; // 800CEBAC
  W32(c->r[1]+0x00000040u,c->r[4]); // 800CEBB0
  c->r[30]=c->r[3]|c->r[3]; // 800CEBB4
  cmps(c,0,(int32_t)c->r[0],0); // 800CEBB8
  W32(c->r[1]+0x00000048u,c->r[4]); // 800CEBBC
  if (crb(c,2)) { goto L_800CEDD4; } // 800CEBC0
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CEBC4
  c->r[5]=0u+0x802B0000u; // 800CEBC8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEBCC
  c->r[5]=c->r[5]+0x00001B78u; // 800CEBD0
  c->r[4]=c->r[5]+0x00010000u; // 800CEBD4
  {uint32_t ea=c->r[2]+0xFFFF8A60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEBD8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CEBDC
  c->r[0]=R32(c->r[4]+0xFFFF9098u); // 800CEBE0
  c->r[31]=c->r[5]+0x000000ACu; // 800CEBE4
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800CEBE8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800CEBEC
  cmpu(c,0,c->r[0],0x00000003u); // 800CEBF0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CEBF4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800CEBF8
  c->r[29]=R32(c->r[1]+0x00000054u); // 800CEBFC
  if (!crb(c,0)) { goto L_800CED28; } // 800CEC00
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CEC04
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 800CEC08
  if (crb(c,2)) { goto L_800CEC94; } // 800CEC0C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC10
  c->r[0]=c->r[29]^0x80000000u; // 800CEC14
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CEC18
  c->r[0]=c->r[29]+0x00000020u; // 800CEC1C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800CEC20
  {uint32_t ea=c->r[2]+0xFFFF8A54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEC24
  c->r[3]=0u+0xFF800000u; // 800CEC28
  {uint32_t ea=c->r[2]+0xFFFF8A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEC2C
  c->r[5]=c->r[3]+0x000000FFu; // 800CEC30
  c->r[0]=c->r[0]^0x80000000u; // 800CEC34
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800CEC38
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 800CEC3C
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[4]=RF64(ea);} // 800CEC40
  c->r[4]=c->r[1]+0x00000018u; // 800CEC44
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CEC48
  c->r[3]=c->r[31]|c->r[31]; // 800CEC4C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 800CEC50
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 800CEC54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 800CEC58
  W32(c->r[1]+0x00000018u,c->r[5]); // 800CEC5C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 800CEC60
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CEC64
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CEC68
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800CEC6C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CEC70
  c->r[0]=c->r[0]^0x80000000u; // 800CEC74
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800CEC78
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800CEC7C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800CEC80
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 800CEC84
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800CEC88
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 800CEC8C
  c->lr=0x800CEC94u; f_800C31A0(c); // 800CEC90
L_800CEC94:;
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 800CEC94
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 800CEC98
  if (crb(c,2)) { goto L_800CED28; } // 800CEC9C
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CECA0
  c->r[3]=c->r[29]^0x80000000u; // 800CECA4
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CECA8
  c->r[0]=c->r[29]+0x00000020u; // 800CECAC
  W32(c->r[1]+0x00000044u,c->r[3]); // 800CECB0
  c->r[3]=0u+0xFF800000u; // 800CECB4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800CECB8
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CECBC
  c->r[5]=c->r[3]+0x000000FFu; // 800CECC0
  {uint32_t ea=c->r[2]+0xFFFF8A64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CECC4
  c->r[0]=c->r[0]^0x80000000u; // 800CECC8
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[4]=RF64(ea);} // 800CECCC
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 800CECD0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 800CECD4
  W32(c->r[1]+0x00000014u,c->r[5]); // 800CECD8
  c->r[4]=c->r[1]+0x00000014u; // 800CECDC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 800CECE0
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CECE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CECE8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800CECEC
  c->r[3]=c->r[31]|c->r[31]; // 800CECF0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 800CECF4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 800CECF8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CECFC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800CED00
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CED04
  c->r[0]=c->r[0]^0x80000000u; // 800CED08
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800CED0C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800CED10
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800CED14
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 800CED18
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800CED1C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 800CED20
  c->lr=0x800CED28u; f_800C31A0(c); // 800CED24
L_800CED28:;
  {uint32_t ea=c->r[2]+0xFFFF8A30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED28
  c->r[3]=R32(c->r[30]+0x00000024u); // 800CED2C
  c->r[0]=R32(c->r[30]+0x00000120u); // 800CED30
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800CED34
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CED38
  cmps(c,0,(int32_t)c->r[0],1); // 800CED3C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800CED40
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CED44
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800CED48
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CED4C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800CED50
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED54
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800CED58
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 800CED5C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 800CED60
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800CED64
  if (!crb(c,2)) { goto L_800CED88; } // 800CED68
  c->r[3]=0u+0x802B0000u; // 800CED6C
  c->r[3]=c->r[3]+0x00001B78u; // 800CED70
  c->r[3]=c->r[3]+0x00010000u; // 800CED74
  c->r[0]=R32(c->r[3]+0xFFFF9098u); // 800CED78
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800CED7C
  cmpu(c,0,c->r[0],0x00000003u); // 800CED80
  if (crb(c,0)) { goto L_800CEDD4; } // 800CED84
L_800CED88:;
  c->r[0]=R8(c->r[30]+0x00000014u); // 800CED88
  c->r[4]=c->r[1]+0x00000010u; // 800CED8C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CED90
  c->r[3]=c->r[31]|c->r[31]; // 800CED94
  W8(c->r[1]+0x00000010u,c->r[0]); // 800CED98
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED9C
  c->r[0]=R8(c->r[30]+0x00000015u); // 800CEDA0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800CEDA4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEDA8
  W8(c->r[1]+0x00000011u,c->r[0]); // 800CEDAC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDB0
  c->r[0]=R8(c->r[30]+0x00000016u); // 800CEDB4
  c->f[4]=c->f[2]; // 800CEDB8
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 800CEDBC
  {uint32_t ea=c->r[2]+0xFFFF8A44u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CEDC0
  W8(c->r[1]+0x00000012u,c->r[0]); // 800CEDC4
  c->r[0]=R8(c->r[30]+0x00000017u); // 800CEDC8
  W8(c->r[1]+0x00000013u,c->r[0]); // 800CEDCC
  c->lr=0x800CEDD4u; f_800C31A0(c); // 800CEDD0
L_800CEDD4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CEDD4
  c->r[11]=c->r[10]|c->r[10]; // 800CEDD8
  c->lr=0x800CEDE0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CEDDC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CEDE0
  c->lr=c->r[0]; // 800CEDE4
  c->r[1]=c->r[10]|c->r[10]; // 800CEDE8
  return; // 800CEDEC
}

// fn_800CEDF0
void f_800CEDF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEDF0
  c->r[0]=c->lr; // 800CEDF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CEDF8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CEDFC
  c->r[27]=c->r[3]|c->r[3]; // 800CEE00
  c->r[28]=c->r[4]|c->r[4]; // 800CEE04
  c->r[30]=0u+0x00000000u; // 800CEE08
  c->r[29]=0u+0x00000000u; // 800CEE0C
  c->r[31]=0u+0x00000000u; // 800CEE10
  goto L_800CEE68; // 800CEE14
L_800CEE18:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800CEE18
  c->r[3]=R32(c->r[3]+c->r[31]); // 800CEE1C
  c->lr=0x800CEE24u; f_80061910(c); // 800CEE20
  cmps(c,0,(int32_t)c->r[3],0); // 800CEE24
  if (crb(c,2)) { goto L_800CEE60; } // 800CEE28
  cmps(c,0,(int32_t)c->r[28],0); // 800CEE2C
  if (crb(c,2)) { goto L_800CEE54; } // 800CEE30
  c->r[3]=R32(c->r[27]+0x00000018u); // 800CEE34
  c->r[0]=R32(c->r[3]+c->r[31]); // 800CEE38
  cmpu(c,0,c->r[0],c->r[28]); // 800CEE3C
  if (crb(c,2)) { goto L_800CEE4C; } // 800CEE40
  c->r[30]=c->r[0]|c->r[0]; // 800CEE44
  goto L_800CEE60; // 800CEE48
L_800CEE4C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CEE4C
  goto L_800CEE78; // 800CEE50
L_800CEE54:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800CEE54
  c->r[3]=R32(c->r[3]+c->r[31]); // 800CEE58
  goto L_800CEE78; // 800CEE5C
L_800CEE60:;
  c->r[29]=c->r[29]+0x00000001u; // 800CEE60
  c->r[31]=c->r[31]+0x00000004u; // 800CEE64
L_800CEE68:;
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 800CEE68
  cmpu(c,0,c->r[29],c->r[0]); // 800CEE6C
  if (crb(c,0)) { IRQCHK(c); goto L_800CEE18; } // 800CEE70
  c->r[3]=c->r[28]|c->r[28]; // 800CEE74
L_800CEE78:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CEE78
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CEE7C
  c->lr=c->r[0]; // 800CEE80
  c->r[1]=c->r[1]+0x00000020u; // 800CEE84
  return; // 800CEE88
}

// fn_800CEE8C
void f_800CEE8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEE8C
  c->r[0]=c->lr; // 800CEE90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CEE94
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CEE98
  c->r[27]=c->r[3]|c->r[3]; // 800CEE9C
  c->r[28]=c->r[4]|c->r[4]; // 800CEEA0
  c->r[30]=0u+0x00000000u; // 800CEEA4
  c->r[29]=0u+0x00000000u; // 800CEEA8
  c->r[31]=0u+0x00000000u; // 800CEEAC
  goto L_800CEF10; // 800CEEB0
L_800CEEB4:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800CEEB4
  c->r[3]=R32(c->r[3]+c->r[31]); // 800CEEB8
  c->lr=0x800CEEC0u; f_80061910(c); // 800CEEBC
  cmps(c,0,(int32_t)c->r[3],0); // 800CEEC0
  if (crb(c,2)) { goto L_800CEF08; } // 800CEEC4
  cmps(c,0,(int32_t)c->r[30],0); // 800CEEC8
  if (crb(c,2)) { goto L_800CEEDC; } // 800CEECC
  c->r[3]=R32(c->r[27]+0x00000018u); // 800CEED0
  c->r[3]=R32(c->r[3]+c->r[31]); // 800CEED4
  goto L_800CEF20; // 800CEED8
L_800CEEDC:;
  cmps(c,0,(int32_t)c->r[28],0); // 800CEEDC
  if (crb(c,2)) { goto L_800CEEFC; } // 800CEEE0
  c->r[3]=R32(c->r[27]+0x00000018u); // 800CEEE4
  c->r[0]=R32(c->r[3]+c->r[31]); // 800CEEE8
  cmpu(c,0,c->r[0],c->r[28]); // 800CEEEC
  if (!crb(c,2)) { goto L_800CEF08; } // 800CEEF0
  c->r[30]=0u+0x00000001u; // 800CEEF4
  goto L_800CEF08; // 800CEEF8
L_800CEEFC:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800CEEFC
  c->r[3]=R32(c->r[3]+c->r[31]); // 800CEF00
  goto L_800CEF20; // 800CEF04
L_800CEF08:;
  c->r[29]=c->r[29]+0x00000001u; // 800CEF08
  c->r[31]=c->r[31]+0x00000004u; // 800CEF0C
L_800CEF10:;
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 800CEF10
  cmpu(c,0,c->r[29],c->r[0]); // 800CEF14
  if (crb(c,0)) { IRQCHK(c); goto L_800CEEB4; } // 800CEF18
  c->r[3]=c->r[28]|c->r[28]; // 800CEF1C
L_800CEF20:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CEF20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CEF24
  c->lr=c->r[0]; // 800CEF28
  c->r[1]=c->r[1]+0x00000020u; // 800CEF2C
  return; // 800CEF30
}

// fn_800CEF34
void f_800CEF34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEF34
  c->r[0]=0u+0x43300000u; // 800CEF38
  cmps(c,0,(int32_t)c->r[4],0); // 800CEF3C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CEF40
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CEF44
  if (crb(c,2)) { goto L_800CF018; } // 800CEF48
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CEF4C
  {uint32_t ea=c->r[2]+0xFFFF8A40u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CEF50
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEF54
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[4]); // 800CEF58
  {uint32_t ea=c->r[2]+0xFFFF8A54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEF5C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800CEF60
  {uint32_t ea=c->r[2]+0xFFFF8A38u; c->f[2]=RF64(ea);} // 800CEF64
  {uint32_t ea=c->r[4]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CEF68
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 800CEF6C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800CEF70
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CEF74
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CEF78
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800CEF7C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800CEF80
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800CEF84
  c->r[0]=c->r[0]^0x80000000u; // 800CEF88
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CEF8C
  c->r[5]=R32(c->r[1]+0x00000024u); // 800CEF90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800CEF94
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800CEF98
  fcmp(c,0,c->f[0],c->f[5]); // 800CEF9C
  if (!crb(c,0)) { goto L_800CEFD0; } // 800CEFA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEFA4
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CEFA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800CEFAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800CEFB0
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 800CEFB4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CEFB8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800CEFBC
  c->r[4]=R32(c->r[1]+0x00000024u); // 800CEFC0
  c->r[0]=c->r[0]-c->r[4]; // 800CEFC4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CEFC8
  goto L_800CF018; // 800CEFCC
L_800CEFD0:;
  c->r[0]=c->r[5]^0x80000000u; // 800CEFD0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEFD4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CEFD8
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[0]); // 800CEFDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800CEFE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800CEFE4
  fcmp(c,0,c->f[0],c->f[1]); // 800CEFE8
  if (!crb(c,1)) { goto L_800CF018; } // 800CEFEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEFF0
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CEFF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800CEFF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800CEFFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800CF000
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CF004
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800CF008
  c->r[4]=R32(c->r[1]+0x00000024u); // 800CF00C
  c->r[0]=c->r[0]+c->r[4]; // 800CF010
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF014
L_800CF018:;
  c->r[1]=c->r[1]+0x00000030u; // 800CF018
  return; // 800CF01C
}

// fn_800CF020
void f_800CF020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF020
  c->r[0]=c->lr; // 800CF024
  c->r[4]=0u+0x80280000u; // 800CF028
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF02C
  c->r[0]=0u+0x00000000u; // 800CF030
  c->r[4]=c->r[4]+0x00001A10u; // 800CF034
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF038
  c->r[31]=c->r[3]|c->r[3]; // 800CF03C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CF040
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CF044
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CF048
  c->r[3]=c->r[3]+0x0000000Cu; // 800CF04C
  c->lr=0x800CF054u; f_8003B79C(c); // 800CF050
  c->r[3]=c->r[31]+0x00000018u; // 800CF054
  c->lr=0x800CF05Cu; f_80094BD8(c); // 800CF058
  c->r[3]=c->r[31]+0x00000024u; // 800CF05C
  c->lr=0x800CF064u; f_80094BD8(c); // 800CF060
  W32(c->r[13]+0xFFFF94F8u,c->r[31]); // 800CF064
  c->r[3]=c->r[31]|c->r[31]; // 800CF068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF06C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF070
  c->lr=c->r[0]; // 800CF074
  c->r[1]=c->r[1]+0x00000010u; // 800CF078
  return; // 800CF07C
}

// fn_800CF080
void f_800CF080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF080
  c->r[0]=c->lr; // 800CF084
  cmps(c,0,(int32_t)c->r[3],0); // 800CF088
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF08C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF090
  c->r[30]=c->r[3]|c->r[3]; // 800CF094
  c->r[31]=c->r[4]|c->r[4]; // 800CF098
  if (crb(c,2)) { goto L_800CF0BC; } // 800CF09C
  if (crb(c,2)) { goto L_800CF0AC; } // 800CF0A0
  c->r[4]=0u+0x00000000u; // 800CF0A4
  c->lr=0x800CF0ACu; f_8003C254(c); // 800CF0A8
L_800CF0AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CF0AC
  if (!crb(c,1)) { goto L_800CF0BC; } // 800CF0B0
  c->r[3]=c->r[30]|c->r[30]; // 800CF0B4
  c->lr=0x800CF0BCu; f_8009230C(c); // 800CF0B8
L_800CF0BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF0BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF0C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF0C4
  c->lr=c->r[0]; // 800CF0C8
  c->r[1]=c->r[1]+0x00000010u; // 800CF0CC
  return; // 800CF0D0
}

// fn_800CF0D4
void f_800CF0D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF0D4
  c->r[0]=c->lr; // 800CF0D8
  cmps(c,0,(int32_t)c->r[3],0); // 800CF0DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF0E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF0E4
  c->r[30]=c->r[3]|c->r[3]; // 800CF0E8
  c->r[31]=c->r[4]|c->r[4]; // 800CF0EC
  if (crb(c,2)) { goto L_800CF10C; } // 800CF0F0
  c->r[4]=0u+0x00000000u; // 800CF0F4
  c->lr=0x800CF0FCu; f_800CF080(c); // 800CF0F8
  cmps(c,0,(int32_t)c->r[31],0); // 800CF0FC
  if (!crb(c,1)) { goto L_800CF10C; } // 800CF100
  c->r[3]=c->r[30]|c->r[30]; // 800CF104
  c->lr=0x800CF10Cu; f_8009230C(c); // 800CF108
L_800CF10C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF10C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF110
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF114
  c->lr=c->r[0]; // 800CF118
  c->r[1]=c->r[1]+0x00000010u; // 800CF11C
  return; // 800CF120
}

// fn_800CF124
void f_800CF124(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF124
  c->r[0]=c->lr; // 800CF128
  cmps(c,0,(int32_t)c->r[3],0); // 800CF12C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF130
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF134
  c->r[30]=c->r[3]|c->r[3]; // 800CF138
  c->r[31]=c->r[4]|c->r[4]; // 800CF13C
  if (crb(c,2)) { goto L_800CF18C; } // 800CF140
  c->r[0]=R32(c->r[13]+0xFFFF94F8u); // 800CF144
  cmpu(c,0,c->r[0],c->r[3]); // 800CF148
  if (!crb(c,2)) { goto L_800CF158; } // 800CF14C
  c->r[0]=0u+0x00000000u; // 800CF150
  W32(c->r[13]+0xFFFF94F8u,c->r[0]); // 800CF154
L_800CF158:;
  c->r[4]=0u+0xFFFFFFFFu; // 800CF158
  c->r[3]=c->r[3]+0x00000024u; // 800CF15C
  c->lr=0x800CF164u; f_800CFA9C(c); // 800CF160
  c->r[3]=c->r[30]+0x00000018u; // 800CF164
  c->r[4]=0u+0xFFFFFFFFu; // 800CF168
  c->lr=0x800CF170u; f_800CFA48(c); // 800CF16C
  c->r[3]=c->r[30]+0x0000000Cu; // 800CF170
  c->r[4]=0u+0xFFFFFFFFu; // 800CF174
  c->lr=0x800CF17Cu; f_800CF0D4(c); // 800CF178
  cmps(c,0,(int32_t)c->r[31],0); // 800CF17C
  if (!crb(c,1)) { goto L_800CF18C; } // 800CF180
  c->r[3]=c->r[30]|c->r[30]; // 800CF184
  c->lr=0x800CF18Cu; f_8009230C(c); // 800CF188
L_800CF18C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF18C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF190
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF194
  c->lr=c->r[0]; // 800CF198
  c->r[1]=c->r[1]+0x00000010u; // 800CF19C
  return; // 800CF1A0
}

// fn_800CF1A4
void f_800CF1A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF1A4
  c->r[0]=c->lr; // 800CF1A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF1AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF1B0
  c->r[31]=c->r[3]|c->r[3]; // 800CF1B4
  c->r[3]=c->r[4]|c->r[4]; // 800CF1B8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CF1BC
  c->r[12]=R32(c->r[4]+0x00000000u); // 800CF1C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CF1C4
  c->ctr=c->r[12]; // 800CF1C8
  if (true) { c->lr=0x800CF1D0u; dispatch(c,c->ctr); } // 800CF1CC
  c->r[5]=R32(c->r[1]+0x00000008u); // 800CF1D0
  c->r[3]=c->r[31]+0x0000000Cu; // 800CF1D4
  c->r[4]=c->r[1]+0x00000008u; // 800CF1D8
  W32(c->r[5]+0x00000004u,c->r[31]); // 800CF1DC
  c->lr=0x800CF1E4u; f_8003BB30(c); // 800CF1E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF1E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF1E8
  c->lr=c->r[0]; // 800CF1EC
  c->r[1]=c->r[1]+0x00000020u; // 800CF1F0
  return; // 800CF1F4
}

// fn_800CF1F8
void f_800CF1F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF1F8
  c->r[0]=c->lr; // 800CF1FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CF200
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF204
  c->r[28]=c->r[3]|c->r[3]; // 800CF208
  c->r[29]=0u+0x00000000u; // 800CF20C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800CF210
  cmps(c,0,(int32_t)c->r[0],0); // 800CF214
  if (crb(c,2)) { goto L_800CF388; } // 800CF218
  c->r[4]=R32(c->r[3]+0x00000010u); // 800CF21C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CF220
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800CF224
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CF228
  c->r[29]=R32(c->r[3]+c->r[0]); // 800CF22C
  c->r[12]=R32(c->r[29]+0x00000000u); // 800CF230
  c->r[3]=c->r[29]|c->r[29]; // 800CF234
  c->r[12]=R32(c->r[12]+0x00000010u); // 800CF238
  c->ctr=c->r[12]; // 800CF23C
  if (true) { c->lr=0x800CF244u; dispatch(c,c->ctr); } // 800CF240
  c->r[3]=R32(c->r[28]+0x00000010u); // 800CF244
  c->r[4]=R32(c->r[28]+0x00000010u); // 800CF248
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CF24C
  cmpu(c,0,c->r[0],c->r[4]); // 800CF250
  if (!crb(c,1)) { goto L_800CF378; } // 800CF254
  c->r[5]=R32(c->r[28]+0x00000014u); // 800CF258
  c->r[30]=c->r[0]-c->r[4]; // 800CF25C
  cmpu(c,0,c->r[30],c->r[5]); // 800CF260
  if (crb(c,1)) { goto L_800CF274; } // 800CF264
  c->r[0]=c->r[5]-c->r[30]; // 800CF268
  cmpu(c,0,c->r[4],c->r[0]); // 800CF26C
  if (!crb(c,1)) { goto L_800CF290; } // 800CF270
L_800CF274:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 800CF274
  c->r[3]=c->r[28]+0x0000000Cu; // 800CF278
  c->r[31]=0u+0x00000000u; // 800CF27C
  c->r[0]=c->r[0]+c->r[30]; // 800CF280
  c->r[4]=c->r[0]-c->r[5]; // 800CF284
  c->lr=0x800CF28Cu; f_8003C32C(c); // 800CF288
  goto L_800CF2B8; // 800CF28C
L_800CF290:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800CF290
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800CF294
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800CF298
  c->r[4]=0u+0x00000000u; // 800CF29C
  c->r[3]=c->r[3]+c->r[0]; // 800CF2A0
  c->lr=0x800CF2A8u; f_8000443C(c); // 800CF2A4
  c->r[0]=R32(c->r[28]+0x00000010u); // 800CF2A8
  c->r[0]=c->r[0]+c->r[30]; // 800CF2AC
  W32(c->r[28]+0x00000010u,c->r[0]); // 800CF2B0
  goto L_800CF388; // 800CF2B4
L_800CF2B8:;
  c->r[3]=c->r[1]+0x00000008u; // 800CF2B8
  c->r[4]=c->r[28]+0x00000014u; // 800CF2BC
  c->lr=0x800CF2C4u; f_800CA0F0(c); // 800CF2C0
  c->r[0]=R32(c->r[28]+0x00000010u); // 800CF2C4
  c->r[3]=c->r[28]+0x0000000Cu; // 800CF2C8
  c->r[4]=R32(c->r[28]+0x00000014u); // 800CF2CC
  c->r[0]=c->r[0]+c->r[30]; // 800CF2D0
  c->r[4]=c->r[0]-c->r[4]; // 800CF2D4
  c->lr=0x800CF2DCu; f_8003C32C(c); // 800CF2D8
  c->r[0]=R32(c->r[28]+0x00000010u); // 800CF2DC
  c->r[5]=c->r[3]|c->r[3]; // 800CF2E0
  c->r[3]=c->r[1]+0x00000008u; // 800CF2E4
  c->r[4]=c->r[0]+c->r[30]; // 800CF2E8
  c->lr=0x800CF2F0u; f_800CA184(c); // 800CF2EC
  c->r[3]=R32(c->r[28]+0x00000010u); // 800CF2F0
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800CF2F4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CF2F8
  c->r[6]=R32(c->r[1]+0x00000008u); // 800CF2FC
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800CF300
  W32(c->r[1]+0x00000018u,c->r[3]); // 800CF304
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CF308
  c->r[0]=c->r[6]+c->r[4]; // 800CF30C
  c->r[4]=0u+0x00000000u; // 800CF310
  c->r[3]=c->r[3]+c->r[0]; // 800CF314
  c->lr=0x800CF31Cu; f_8000443C(c); // 800CF318
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CF31C
  c->r[3]=c->r[1]+0x00000008u; // 800CF320
  c->r[0]=c->r[0]+c->r[30]; // 800CF324
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CF328
  c->r[0]=R32(c->r[28]+0x00000010u); // 800CF32C
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 800CF330
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CF334
  c->r[5]=c->r[4]+c->r[0]; // 800CF338
  c->lr=0x800CF340u; f_800CA10C(c); // 800CF33C
  W32(c->r[28]+0x00000010u,c->r[31]); // 800CF340
  c->r[3]=c->r[28]+0x00000014u; // 800CF344
  c->r[4]=c->r[1]+0x00000010u; // 800CF348
  c->lr=0x800CF350u; f_80032474(c); // 800CF34C
  c->r[3]=c->r[28]+0x0000000Cu; // 800CF350
  c->r[4]=c->r[1]+0x00000008u; // 800CF354
  c->lr=0x800CF35Cu; f_80090574(c); // 800CF358
  c->r[3]=c->r[28]+0x00000010u; // 800CF35C
  c->r[4]=c->r[1]+0x0000000Cu; // 800CF360
  c->lr=0x800CF368u; f_80032474(c); // 800CF364
  c->r[3]=c->r[1]+0x00000008u; // 800CF368
  c->r[4]=0u+0xFFFFFFFFu; // 800CF36C
  c->lr=0x800CF374u; f_8003C470(c); // 800CF370
  goto L_800CF388; // 800CF374
L_800CF378:;
  if (!crb(c,0)) { goto L_800CF388; } // 800CF378
  c->r[0]=c->r[4]-c->r[0]; // 800CF37C
  c->r[0]=c->r[4]-c->r[0]; // 800CF380
  W32(c->r[28]+0x00000010u,c->r[0]); // 800CF384
L_800CF388:;
  c->r[3]=c->r[29]|c->r[29]; // 800CF388
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF38C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CF390
  c->lr=c->r[0]; // 800CF394
  c->r[1]=c->r[1]+0x00000030u; // 800CF398
  return; // 800CF39C
}

// fn_800CF3A0
void f_800CF3A0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000010u); // 800CF3A0
  cmps(c,0,(int32_t)c->r[0],0); // 800CF3A4
  if (crb(c,2)) return; // 800CF3A8
  c->r[4]=R32(c->r[3]+0x00000010u); // 800CF3AC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CF3B0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800CF3B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CF3B8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CF3BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CF3C0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800CF3C4
  c->ctr=c->r[12]; // 800CF3C8
  if (true) { dispatch(c,c->ctr); return; } // 800CF3CC
  return; // 800CF3D0
}

// fn_800CF3D4
void f_800CF3D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF3D4
  c->r[0]=c->lr; // 800CF3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF3DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF3E0
  c->r[31]=0u+0x802B0000u; // 800CF3E4
  c->r[31]=c->r[31]+0x00001B78u; // 800CF3E8
  c->r[30]=c->r[3]|c->r[3]; // 800CF3EC
  c->r[3]=c->r[31]+0x000000ACu; // 800CF3F0
  c->lr=0x800CF3F8u; f_800C33F8(c); // 800CF3F4
  c->r[3]=c->r[31]+0x000000ACu; // 800CF3F8
  c->lr=0x800CF400u; f_800C35B8(c); // 800CF3FC
  c->r[0]=R32(c->r[30]+0x00000010u); // 800CF400
  cmps(c,0,(int32_t)c->r[0],0); // 800CF404
  if (crb(c,2)) { goto L_800CF430; } // 800CF408
  c->r[3]=R32(c->r[30]+0x00000010u); // 800CF40C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 800CF410
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CF414
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CF418
  c->r[3]=R32(c->r[4]+c->r[0]); // 800CF41C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CF420
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CF424
  c->ctr=c->r[12]; // 800CF428
  if (true) { c->lr=0x800CF430u; dispatch(c,c->ctr); } // 800CF42C
L_800CF430:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF430
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF434
  c->lr=c->r[0]; // 800CF438
  c->r[1]=c->r[1]+0x00000010u; // 800CF43C
  return; // 800CF440
}

// fn_800CF444
void f_800CF444(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF444
  c->r[0]=c->lr; // 800CF448
  cmps(c,0,(int32_t)c->r[4],0); // 800CF44C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF450
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF454
  c->r[31]=c->r[3]|c->r[3]; // 800CF458
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CF45C
  if (!crb(c,0)) { goto L_800CF46C; } // 800CF460
  c->r[3]=0u+0x00000000u; // 800CF464
  goto L_800CF4A4; // 800CF468
L_800CF46C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800CF46C
  c->r[4]=c->r[31]+0x00000024u; // 800CF470
  c->r[5]=c->r[1]+0x00000008u; // 800CF474
  c->lr=0x800CF47Cu; f_8009D21C(c); // 800CF478
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CF47C
  c->r[0]=c->r[31]+0x00000028u; // 800CF480
  cmpu(c,0,c->r[3],c->r[0]); // 800CF484
  if (!crb(c,2)) { goto L_800CF494; } // 800CF488
  c->r[3]=0u+0x00000000u; // 800CF48C
  goto L_800CF4A4; // 800CF490
L_800CF494:;
  c->r[3]=c->r[31]+0x00000024u; // 800CF494
  c->r[4]=c->r[1]+0x00000008u; // 800CF498
  c->lr=0x800CF4A0u; f_8009673C(c); // 800CF49C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800CF4A0
L_800CF4A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF4A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF4A8
  c->lr=c->r[0]; // 800CF4AC
  c->r[1]=c->r[1]+0x00000020u; // 800CF4B0
  return; // 800CF4B4
}

// fn_800CF4B8
void f_800CF4B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF4B8
  c->r[0]=c->lr; // 800CF4BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF4C0
  c->lr=0x800CF4C8u; f_800CF444(c); // 800CF4C4
  c->r[0]=0u+0x00000000u; // 800CF4C8
  c->r[5]=c->r[1]+0x00000008u; // 800CF4CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF4D0
  c->r[4]=c->r[2]+0xFFFFA1ACu; // 800CF4D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CF4D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CF4DC
  c->ctr=c->r[12]; // 800CF4E0
  if (true) { c->lr=0x800CF4E8u; dispatch(c,c->ctr); } // 800CF4E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF4E8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF4EC
  c->lr=c->r[0]; // 800CF4F0
  c->r[1]=c->r[1]+0x00000010u; // 800CF4F4
  return; // 800CF4F8
}

// fn_800CF4FC
void f_800CF4FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF4FC
  c->r[0]=c->lr; // 800CF500
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF504
  c->lr=0x800CF50Cu; f_800CF444(c); // 800CF508
  c->r[0]=0u+0x00000000u; // 800CF50C
  c->r[5]=c->r[1]+0x00000008u; // 800CF510
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF514
  c->r[4]=c->r[2]+0xFFFFA1B0u; // 800CF518
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CF51C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CF520
  c->ctr=c->r[12]; // 800CF524
  if (true) { c->lr=0x800CF52Cu; dispatch(c,c->ctr); } // 800CF528
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF52C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF530
  c->lr=c->r[0]; // 800CF534
  c->r[1]=c->r[1]+0x00000010u; // 800CF538
  return; // 800CF53C
}

// fn_800CF540
void f_800CF540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF540
  c->r[0]=c->lr; // 800CF544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF548
  c->lr=0x800CF550u; f_800CF444(c); // 800CF54C
  c->r[0]=0u+0x00000000u; // 800CF550
  c->r[5]=c->r[1]+0x00000008u; // 800CF554
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF558
  c->r[4]=c->r[2]+0xFFFFA1B4u; // 800CF55C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CF560
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CF564
  c->ctr=c->r[12]; // 800CF568
  if (true) { c->lr=0x800CF570u; dispatch(c,c->ctr); } // 800CF56C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF570
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF574
  c->lr=c->r[0]; // 800CF578
  c->r[1]=c->r[1]+0x00000010u; // 800CF57C
  return; // 800CF580
}

// fn_800CF584
void f_800CF584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF584
  c->r[0]=c->lr; // 800CF588
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF58C
  c->lr=0x800CF594u; f_800CF444(c); // 800CF590
  c->r[0]=0u+0x00000000u; // 800CF594
  c->r[5]=c->r[1]+0x00000008u; // 800CF598
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF59C
  c->r[4]=c->r[2]+0xFFFFA1B8u; // 800CF5A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CF5A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CF5A8
  c->ctr=c->r[12]; // 800CF5AC
  if (true) { c->lr=0x800CF5B4u; dispatch(c,c->ctr); } // 800CF5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF5B4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF5B8
  c->lr=c->r[0]; // 800CF5BC
  c->r[1]=c->r[1]+0x00000010u; // 800CF5C0
  return; // 800CF5C4
}

// fn_800CF5C8
void f_800CF5C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF5C8
  c->r[0]=c->lr; // 800CF5CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF5D0
  c->lr=0x800CF5D8u; f_800CF444(c); // 800CF5D4
  c->r[0]=0u+0x00000000u; // 800CF5D8
  c->r[5]=c->r[1]+0x00000008u; // 800CF5DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF5E0
  c->r[4]=c->r[2]+0xFFFFA1BCu; // 800CF5E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CF5E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CF5EC
  c->ctr=c->r[12]; // 800CF5F0
  if (true) { c->lr=0x800CF5F8u; dispatch(c,c->ctr); } // 800CF5F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF5F8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF5FC
  c->lr=c->r[0]; // 800CF600
  c->r[1]=c->r[1]+0x00000010u; // 800CF604
  return; // 800CF608
}

// fn_800CF60C
void f_800CF60C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF60C
  c->r[0]=c->lr; // 800CF610
  cmps(c,0,(int32_t)c->r[4],0); // 800CF614
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF61C
  c->r[31]=c->r[3]|c->r[3]; // 800CF620
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CF624
  if (!crb(c,0)) { goto L_800CF634; } // 800CF628
  c->r[3]=0u+0x00000000u; // 800CF62C
  goto L_800CF66C; // 800CF630
L_800CF634:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800CF634
  c->r[4]=c->r[31]+0x00000018u; // 800CF638
  c->r[5]=c->r[1]+0x00000008u; // 800CF63C
  c->lr=0x800CF644u; f_8009D21C(c); // 800CF640
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CF644
  c->r[0]=c->r[31]+0x0000001Cu; // 800CF648
  cmpu(c,0,c->r[3],c->r[0]); // 800CF64C
  if (!crb(c,2)) { goto L_800CF65C; } // 800CF650
  c->r[3]=0u+0x00000000u; // 800CF654
  goto L_800CF66C; // 800CF658
L_800CF65C:;
  c->r[3]=c->r[31]+0x00000018u; // 800CF65C
  c->r[4]=c->r[1]+0x00000008u; // 800CF660
  c->lr=0x800CF668u; f_8009673C(c); // 800CF664
  c->r[3]=R32(c->r[3]+0x00000004u); // 800CF668
L_800CF66C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF66C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF670
  c->lr=c->r[0]; // 800CF674
  c->r[1]=c->r[1]+0x00000020u; // 800CF678
  return; // 800CF67C
}

// fn_800CF680
void f_800CF680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF680
  c->r[0]=c->lr; // 800CF684
  c->r[4]=0u+0x00000001u; // 800CF688
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF68C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF690
  c->r[30]=c->r[3]|c->r[3]; // 800CF694
  c->r[3]=0u+0x000000D0u; // 800CF698
  c->lr=0x800CF6A0u; f_800922B4(c); // 800CF69C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF6A0
  c->r[31]=c->r[3]|c->r[3]; // 800CF6A4
  if (crb(c,2)) { goto L_800CF6B4; } // 800CF6A8
  c->lr=0x800CF6B0u; f_800CD4BC(c); // 800CF6AC
  c->r[31]=c->r[3]|c->r[3]; // 800CF6B0
L_800CF6B4:;
  c->r[5]=R32(c->r[30]+0x00000008u); // 800CF6B4
  c->r[3]=c->r[30]+0x00000024u; // 800CF6B8
  c->r[4]=c->r[1]+0x00000008u; // 800CF6BC
  c->r[0]=c->r[5]+0x00000001u; // 800CF6C0
  W32(c->r[30]+0x00000008u,c->r[0]); // 800CF6C4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CF6C8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CF6CC
  c->lr=0x800CF6D4u; f_8009673C(c); // 800CF6D0
  W32(c->r[3]+0x00000004u,c->r[31]); // 800CF6D4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF6D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF6DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF6E0
  c->lr=c->r[0]; // 800CF6E4
  c->r[1]=c->r[1]+0x00000020u; // 800CF6E8
  return; // 800CF6EC
}

// fn_800CF6F0
void f_800CF6F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF6F0
  c->r[0]=c->lr; // 800CF6F4
  c->r[4]=0u+0x00000001u; // 800CF6F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF6FC
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF700
  c->r[30]=c->r[3]|c->r[3]; // 800CF704
  c->r[3]=0u+0x000000E0u; // 800CF708
  c->lr=0x800CF710u; f_800922B4(c); // 800CF70C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF710
  c->r[31]=c->r[3]|c->r[3]; // 800CF714
  if (crb(c,2)) { goto L_800CF724; } // 800CF718
  c->lr=0x800CF720u; f_800CD6C0(c); // 800CF71C
  c->r[31]=c->r[3]|c->r[3]; // 800CF720
L_800CF724:;
  c->r[5]=R32(c->r[30]+0x00000008u); // 800CF724
  c->r[3]=c->r[30]+0x00000024u; // 800CF728
  c->r[4]=c->r[1]+0x00000008u; // 800CF72C
  c->r[0]=c->r[5]+0x00000001u; // 800CF730
  W32(c->r[30]+0x00000008u,c->r[0]); // 800CF734
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CF738
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CF73C
  c->lr=0x800CF744u; f_8009673C(c); // 800CF740
  W32(c->r[3]+0x00000004u,c->r[31]); // 800CF744
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF748
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF74C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF750
  c->lr=c->r[0]; // 800CF754
  c->r[1]=c->r[1]+0x00000020u; // 800CF758
  return; // 800CF75C
}

// fn_800CF760
void f_800CF760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF760
  c->r[0]=c->lr; // 800CF764
  c->r[4]=0u+0x00000001u; // 800CF768
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF76C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF770
  c->r[30]=c->r[3]|c->r[3]; // 800CF774
  c->r[3]=0u+0x000000F0u; // 800CF778
  c->lr=0x800CF780u; f_800922B4(c); // 800CF77C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF780
  c->r[31]=c->r[3]|c->r[3]; // 800CF784
  if (crb(c,2)) { goto L_800CF794; } // 800CF788
  c->lr=0x800CF790u; f_800CD7B4(c); // 800CF78C
  c->r[31]=c->r[3]|c->r[3]; // 800CF790
L_800CF794:;
  c->r[5]=R32(c->r[30]+0x00000008u); // 800CF794
  c->r[3]=c->r[30]+0x00000024u; // 800CF798
  c->r[4]=c->r[1]+0x00000008u; // 800CF79C
  c->r[0]=c->r[5]+0x00000001u; // 800CF7A0
  W32(c->r[30]+0x00000008u,c->r[0]); // 800CF7A4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CF7A8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CF7AC
  c->lr=0x800CF7B4u; f_8009673C(c); // 800CF7B0
  W32(c->r[3]+0x00000004u,c->r[31]); // 800CF7B4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF7B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF7BC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF7C0
  c->lr=c->r[0]; // 800CF7C4
  c->r[1]=c->r[1]+0x00000020u; // 800CF7C8
  return; // 800CF7CC
}

// fn_800CF7D0
void f_800CF7D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF7D0
  c->r[0]=c->lr; // 800CF7D4
  c->r[4]=0u+0x00000001u; // 800CF7D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF7DC
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF7E0
  c->r[30]=c->r[3]|c->r[3]; // 800CF7E4
  c->r[3]=0u+0x00000100u; // 800CF7E8
  c->lr=0x800CF7F0u; f_800922B4(c); // 800CF7EC
  cmps(c,0,(int32_t)c->r[3],0); // 800CF7F0
  c->r[31]=c->r[3]|c->r[3]; // 800CF7F4
  if (crb(c,2)) { goto L_800CF804; } // 800CF7F8
  c->lr=0x800CF800u; f_800CDA4C(c); // 800CF7FC
  c->r[31]=c->r[3]|c->r[3]; // 800CF800
L_800CF804:;
  c->r[5]=R32(c->r[30]+0x00000008u); // 800CF804
  c->r[3]=c->r[30]+0x00000024u; // 800CF808
  c->r[4]=c->r[1]+0x00000008u; // 800CF80C
  c->r[0]=c->r[5]+0x00000001u; // 800CF810
  W32(c->r[30]+0x00000008u,c->r[0]); // 800CF814
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CF818
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CF81C
  c->lr=0x800CF824u; f_8009673C(c); // 800CF820
  W32(c->r[3]+0x00000004u,c->r[31]); // 800CF824
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF828
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF82C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF830
  c->lr=c->r[0]; // 800CF834
  c->r[1]=c->r[1]+0x00000020u; // 800CF838
  return; // 800CF83C
}

// fn_800CF840
void f_800CF840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF840
  c->r[0]=c->lr; // 800CF844
  c->r[4]=0u+0x00000001u; // 800CF848
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF84C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF850
  c->r[30]=c->r[3]|c->r[3]; // 800CF854
  c->r[3]=0u+0x00000100u; // 800CF858
  c->lr=0x800CF860u; f_800922B4(c); // 800CF85C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF860
  c->r[31]=c->r[3]|c->r[3]; // 800CF864
  if (crb(c,2)) { goto L_800CF874; } // 800CF868
  c->lr=0x800CF870u; f_800CDDE4(c); // 800CF86C
  c->r[31]=c->r[3]|c->r[3]; // 800CF870
L_800CF874:;
  c->r[5]=R32(c->r[30]+0x00000008u); // 800CF874
  c->r[3]=c->r[30]+0x00000024u; // 800CF878
  c->r[4]=c->r[1]+0x00000008u; // 800CF87C
  c->r[0]=c->r[5]+0x00000001u; // 800CF880
  W32(c->r[30]+0x00000008u,c->r[0]); // 800CF884
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CF888
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CF88C
  c->lr=0x800CF894u; f_8009673C(c); // 800CF890
  W32(c->r[3]+0x00000004u,c->r[31]); // 800CF894
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF898
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF89C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF8A0
  c->lr=c->r[0]; // 800CF8A4
  c->r[1]=c->r[1]+0x00000020u; // 800CF8A8
  return; // 800CF8AC
}

// fn_800CF8B0
void f_800CF8B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF8B0
  c->r[0]=c->lr; // 800CF8B4
  c->r[4]=0u+0x00000001u; // 800CF8B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF8BC
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF8C0
  c->r[30]=c->r[3]|c->r[3]; // 800CF8C4
  c->r[3]=0u+0x00000130u; // 800CF8C8
  c->lr=0x800CF8D0u; f_800922B4(c); // 800CF8CC
  cmps(c,0,(int32_t)c->r[3],0); // 800CF8D0
  c->r[31]=c->r[3]|c->r[3]; // 800CF8D4
  if (crb(c,2)) { goto L_800CF8E4; } // 800CF8D8
  c->lr=0x800CF8E0u; f_800CE178(c); // 800CF8DC
  c->r[31]=c->r[3]|c->r[3]; // 800CF8E0
L_800CF8E4:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 800CF8E4
  c->r[3]=c->r[30]+0x00000018u; // 800CF8E8
  c->r[4]=c->r[1]+0x00000008u; // 800CF8EC
  c->r[0]=c->r[5]+0x00000001u; // 800CF8F0
  W32(c->r[30]+0x00000004u,c->r[0]); // 800CF8F4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CF8F8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CF8FC
  c->lr=0x800CF904u; f_8009673C(c); // 800CF900
  W32(c->r[3]+0x00000004u,c->r[31]); // 800CF904
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF908
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF90C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CF910
  c->lr=c->r[0]; // 800CF914
  c->r[1]=c->r[1]+0x00000020u; // 800CF918
  return; // 800CF91C
}

// fn_800CF920
void f_800CF920(Ctx* __restrict c) {
  c->r[3]=0u+0x802B0000u; // 800CF920
  c->r[3]=c->r[3]+0x00001B78u; // 800CF924
  c->r[3]=c->r[3]+0x00001630u; // 800CF928
  return; // 800CF92C
}

// fn_800CF930
void f_800CF930(Ctx* __restrict c) {
  return; // 800CF930
}

// fn_800CF934
void f_800CF934(Ctx* __restrict c) {
  return; // 800CF934
}

// fn_800CF938
void f_800CF938(Ctx* __restrict c) {
  return; // 800CF938
}

// fn_800CF93C
void f_800CF93C(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF93C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF940
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800CF944
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800CF948
  return; // 800CF94C
}

// fn_800CF950
void f_800CF950(Ctx* __restrict c) {
  c->r[4]=R8(c->r[3]+0x0000000Cu); // 800CF950
  c->r[3]=0u+0x00000000u; // 800CF954
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 800CF958
  if (crb(c,2)) return; // 800CF95C
  c->r[0]=rotl(c->r[4],27)&0x00000001u; cr0(c,c->r[0]); // 800CF960
  if (crb(c,2)) return; // 800CF964
  c->r[3]=0u+0x00000001u; // 800CF968
  return; // 800CF96C
}

// fn_800CF970
void f_800CF970(Ctx* __restrict c) {
  return; // 800CF970
}

// fn_800CF974
void f_800CF974(Ctx* __restrict c) {
  return; // 800CF974
}

// fn_800CF978
void f_800CF978(Ctx* __restrict c) {
  return; // 800CF978
}

// fn_800CF97C
void f_800CF97C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CF97C
  c->r[0]=c->r[0]|0x00000080u; // 800CF980
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CF984
  return; // 800CF988
}

// fn_800CF98C
void f_800CF98C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800CF98C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800CF990
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800CF994
  return; // 800CF998
}

// fn_800CF99C
void f_800CF99C(Ctx* __restrict c) {
  return; // 800CF99C
}

// fn_800CF9A0
void f_800CF9A0(Ctx* __restrict c) {
  return; // 800CF9A0
}

// fn_800CF9A4
void f_800CF9A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF9A4
  c->r[0]=c->lr; // 800CF9A8
  cmps(c,0,(int32_t)c->r[3],0); // 800CF9AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF9B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF9B4
  c->r[30]=c->r[3]|c->r[3]; // 800CF9B8
  c->r[31]=c->r[4]|c->r[4]; // 800CF9BC
  if (crb(c,2)) { goto L_800CF9E0; } // 800CF9C0
  if (crb(c,2)) { goto L_800CF9D0; } // 800CF9C4
  c->r[4]=0u+0x00000000u; // 800CF9C8
  c->lr=0x800CF9D0u; f_8003C254(c); // 800CF9CC
L_800CF9D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CF9D0
  if (!crb(c,1)) { goto L_800CF9E0; } // 800CF9D4
  c->r[3]=c->r[30]|c->r[30]; // 800CF9D8
  c->lr=0x800CF9E0u; f_8009230C(c); // 800CF9DC
L_800CF9E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF9E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF9E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF9E8
  c->lr=c->r[0]; // 800CF9EC
  c->r[1]=c->r[1]+0x00000010u; // 800CF9F0
  return; // 800CF9F4
}

// fn_800CF9F8
void f_800CF9F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF9F8
  c->r[0]=c->lr; // 800CF9FC
  cmps(c,0,(int32_t)c->r[3],0); // 800CFA00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFA04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFA08
  c->r[30]=c->r[3]|c->r[3]; // 800CFA0C
  c->r[31]=c->r[4]|c->r[4]; // 800CFA10
  if (crb(c,2)) { goto L_800CFA30; } // 800CFA14
  c->r[4]=0u+0x00000000u; // 800CFA18
  c->lr=0x800CFA20u; f_800CF9A4(c); // 800CFA1C
  cmps(c,0,(int32_t)c->r[31],0); // 800CFA20
  if (!crb(c,1)) { goto L_800CFA30; } // 800CFA24
  c->r[3]=c->r[30]|c->r[30]; // 800CFA28
  c->lr=0x800CFA30u; f_8009230C(c); // 800CFA2C
L_800CFA30:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFA30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFA34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFA38
  c->lr=c->r[0]; // 800CFA3C
  c->r[1]=c->r[1]+0x00000010u; // 800CFA40
  return; // 800CFA44
}

// fn_800CFA48
void f_800CFA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFA48
  c->r[0]=c->lr; // 800CFA4C
  cmps(c,0,(int32_t)c->r[3],0); // 800CFA50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFA54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFA58
  c->r[30]=c->r[3]|c->r[3]; // 800CFA5C
  c->r[31]=c->r[4]|c->r[4]; // 800CFA60
  if (crb(c,2)) { goto L_800CFA84; } // 800CFA64
  if (crb(c,2)) { goto L_800CFA74; } // 800CFA68
  c->r[4]=0u+0xFFFFFFFFu; // 800CFA6C
  c->lr=0x800CFA74u; f_80094BF0(c); // 800CFA70
L_800CFA74:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CFA74
  if (!crb(c,1)) { goto L_800CFA84; } // 800CFA78
  c->r[3]=c->r[30]|c->r[30]; // 800CFA7C
  c->lr=0x800CFA84u; f_8009230C(c); // 800CFA80
L_800CFA84:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFA84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFA88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFA8C
  c->lr=c->r[0]; // 800CFA90
  c->r[1]=c->r[1]+0x00000010u; // 800CFA94
  return; // 800CFA98
}

// fn_800CFA9C
void f_800CFA9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFA9C
  c->r[0]=c->lr; // 800CFAA0
  cmps(c,0,(int32_t)c->r[3],0); // 800CFAA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFAA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFAAC
  c->r[30]=c->r[3]|c->r[3]; // 800CFAB0
  c->r[31]=c->r[4]|c->r[4]; // 800CFAB4
  if (crb(c,2)) { goto L_800CFAD8; } // 800CFAB8
  if (crb(c,2)) { goto L_800CFAC8; } // 800CFABC
  c->r[4]=0u+0xFFFFFFFFu; // 800CFAC0
  c->lr=0x800CFAC8u; f_80094BF0(c); // 800CFAC4
L_800CFAC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CFAC8
  if (!crb(c,1)) { goto L_800CFAD8; } // 800CFACC
  c->r[3]=c->r[30]|c->r[30]; // 800CFAD0
  c->lr=0x800CFAD8u; f_8009230C(c); // 800CFAD4
L_800CFAD8:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFAD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFADC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFAE0
  c->lr=c->r[0]; // 800CFAE4
  c->r[1]=c->r[1]+0x00000010u; // 800CFAE8
  return; // 800CFAEC
}

// fn_800CFAF0
void f_800CFAF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFAF0
  c->r[0]=c->lr; // 800CFAF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFAF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFAFC
  c->r[31]=R32(c->r[13]+0xFFFF9500u); // 800CFB00
  cmps(c,0,(int32_t)c->r[31],0); // 800CFB04
  if (crb(c,2)) { goto L_800CFB54; } // 800CFB08
  c->r[3]=0u+0x802B0000u; // 800CFB0C
  c->r[3]=c->r[3]+0x00001B78u; // 800CFB10
  c->r[30]=c->r[3]+0x00000130u; // 800CFB14
  c->r[3]=c->r[30]|c->r[30]; // 800CFB18
  c->lr=0x800CFB20u; f_800619E0(c); // 800CFB1C
  c->r[4]=c->r[31]+0x00020000u; // 800CFB20
  c->r[0]=c->r[4]+0x00005860u; // 800CFB24
  cmpu(c,0,c->r[3],c->r[0]); // 800CFB28
  if (crb(c,2)) { goto L_800CFB44; } // 800CFB2C
  c->r[4]=R32(c->r[13]+0xFFFF9500u); // 800CFB30
  c->r[3]=c->r[30]|c->r[30]; // 800CFB34
  c->r[4]=c->r[4]+0x00020000u; // 800CFB38
  c->r[4]=c->r[4]+0x00005860u; // 800CFB3C
  c->lr=0x800CFB44u; f_800CF1A4(c); // 800CFB40
L_800CFB44:;
  c->r[3]=R32(c->r[13]+0xFFFF9500u); // 800CFB44
  c->r[3]=c->r[3]+0x00020000u; // 800CFB48
  c->r[3]=c->r[3]+0x00005990u; // 800CFB4C
  goto L_800CFB58; // 800CFB50
L_800CFB54:;
  c->r[3]=0u+0x00000000u; // 800CFB54
L_800CFB58:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFB58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFB5C
  c->lr=c->r[0]; // 800CFB60
  c->r[1]=c->r[1]+0x00000010u; // 800CFB64
  return; // 800CFB68
}

// fn_800CFB6C
void f_800CFB6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFB6C
  c->r[0]=c->lr; // 800CFB70
  c->r[3]=0u+0x802B0000u; // 800CFB74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFB78
  c->r[3]=c->r[3]+0x00001B78u; // 800CFB7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFB80
  c->r[31]=c->r[3]+0x00000130u; // 800CFB84
  c->r[3]=c->r[31]|c->r[31]; // 800CFB88
  c->lr=0x800CFB90u; f_800619E0(c); // 800CFB8C
  cmps(c,0,(int32_t)c->r[3],0); // 800CFB90
  if (!crb(c,2)) { goto L_800CFBA0; } // 800CFB94
  c->r[3]=0u+0xFFFFFFFFu; // 800CFB98
  goto L_800CFBBC; // 800CFB9C
L_800CFBA0:;
  c->r[4]=R32(c->r[13]+0xFFFF9500u); // 800CFBA0
  c->r[3]=c->r[31]|c->r[31]; // 800CFBA4
  c->r[4]=c->r[4]+0x00005FB0u; // 800CFBA8
  c->lr=0x800CFBB0u; f_800CF1A4(c); // 800CFBAC
  c->r[3]=c->r[31]|c->r[31]; // 800CFBB0
  c->lr=0x800CFBB8u; f_800619E0(c); // 800CFBB4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CFBB8
L_800CFBBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFBBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFBC0
  c->lr=c->r[0]; // 800CFBC4
  c->r[1]=c->r[1]+0x00000010u; // 800CFBC8
  return; // 800CFBCC
}

// fn_800CFBD0
void f_800CFBD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFBD0
  c->r[0]=c->lr; // 800CFBD4
  c->r[3]=0u+0x802B0000u; // 800CFBD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFBDC
  c->r[3]=c->r[3]+0x00001B78u; // 800CFBE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFBE4
  c->r[31]=c->r[3]+0x00000130u; // 800CFBE8
  c->r[3]=c->r[31]|c->r[31]; // 800CFBEC
  c->lr=0x800CFBF4u; f_800619E0(c); // 800CFBF0
  cmps(c,0,(int32_t)c->r[3],0); // 800CFBF4
  if (!crb(c,2)) { goto L_800CFC04; } // 800CFBF8
  c->r[3]=0u+0xFFFFFFFFu; // 800CFBFC
  goto L_800CFC1C; // 800CFC00
L_800CFC04:;
  c->r[4]=R32(c->r[13]+0xFFFF9500u); // 800CFC04
  c->r[3]=c->r[31]|c->r[31]; // 800CFC08
  c->lr=0x800CFC10u; f_800CF1A4(c); // 800CFC0C
  c->r[3]=c->r[31]|c->r[31]; // 800CFC10
  c->lr=0x800CFC18u; f_800619E0(c); // 800CFC14
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CFC18
L_800CFC1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFC1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFC20
  c->lr=c->r[0]; // 800CFC24
  c->r[1]=c->r[1]+0x00000010u; // 800CFC28
  return; // 800CFC2C
}

// fn_800CFC30
void f_800CFC30(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 800CFC30
  if (crb(c,2)) { goto L_800CFC40; } // 800CFC34
  c->r[3]=0u+0x00000000u; // 800CFC38
  return; // 800CFC3C
L_800CFC40:;
  c->ctr=c->r[4]; // 800CFC40
  cmps(c,0,(int32_t)c->r[4],0); // 800CFC44
  if (!crb(c,1)) { goto L_800CFC70; } // 800CFC48
L_800CFC4C:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 800CFC4C
  c->r[0]=R8(c->r[5]+0x00000000u); // 800CFC50
  cmpu(c,0,c->r[4],c->r[0]); // 800CFC54
  if (crb(c,2)) { goto L_800CFC64; } // 800CFC58
  c->r[3]=0u+0x00000000u; // 800CFC5C
  return; // 800CFC60
L_800CFC64:;
  c->r[3]=c->r[3]+0x00000001u; // 800CFC64
  c->r[5]=c->r[5]+0x00000001u; // 800CFC68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CFC4C; } // 800CFC6C
L_800CFC70:;
  c->r[3]=0u+0x00000001u; // 800CFC70
  return; // 800CFC74
}

// fn_800CFC78
void f_800CFC78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFC78
  c->r[0]=c->lr; // 800CFC7C
  c->r[4]=0u+0x80260000u; // 800CFC80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFC84
  c->r[0]=0u+0x00000000u; // 800CFC88
  c->r[4]=c->r[4]+0xFFFFF2E0u; // 800CFC8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFC90
  c->r[31]=c->r[3]|c->r[3]; // 800CFC94
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CFC98
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CFC9C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CFCA0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800CFCA4
  W32(c->r[3]+0x00000010u,c->r[4]); // 800CFCA8
  c->lr=0x800CFCB0u; f_800CFDD4(c); // 800CFCAC
  c->r[3]=c->r[31]|c->r[31]; // 800CFCB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFCB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFCB8
  c->lr=c->r[0]; // 800CFCBC
  c->r[1]=c->r[1]+0x00000010u; // 800CFCC0
  return; // 800CFCC4
}

// fn_800CFCC8
void f_800CFCC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFCC8
  c->r[0]=c->lr; // 800CFCCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CFCD0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFCD4
  c->r[25]=c->r[3]|c->r[3]; // 800CFCD8
  c->r[26]=c->r[4]|c->r[4]; // 800CFCDC
  c->r[27]=c->r[5]|c->r[5]; // 800CFCE0
  c->r[28]=c->r[6]|c->r[6]; // 800CFCE4
  c->r[29]=c->r[7]|c->r[7]; // 800CFCE8
  c->r[30]=c->r[8]|c->r[8]; // 800CFCEC
  c->r[31]=c->r[9]|c->r[9]; // 800CFCF0
  c->lr=0x800CFCF8u; f_800CFDD4(c); // 800CFCF4
  c->r[3]=0u+0x00000318u; // 800CFCF8
  c->r[4]=0u+0x00000001u; // 800CFCFC
  c->lr=0x800CFD04u; f_800922B4(c); // 800CFD00
  cmps(c,0,(int32_t)c->r[28],0); // 800CFD04
  W32(c->r[25]+0x00000000u,c->r[3]); // 800CFD08
  W32(c->r[25]+0x00000004u,c->r[27]); // 800CFD0C
  if (!crb(c,2)) { goto L_800CFD2C; } // 800CFD10
  c->r[3]=c->r[29]|c->r[29]; // 800CFD14
  c->r[4]=0u+0x00000020u; // 800CFD18
  c->r[5]=0u+0x00000001u; // 800CFD1C
  c->lr=0x800CFD24u; f_8009210C(c); // 800CFD20
  c->r[28]=c->r[3]|c->r[3]; // 800CFD24
  W32(c->r[25]+0x00000008u,c->r[3]); // 800CFD28
L_800CFD2C:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 800CFD2C
  c->r[4]=c->r[26]|c->r[26]; // 800CFD30
  c->r[5]=c->r[25]|c->r[25]; // 800CFD34
  c->r[7]=c->r[29]|c->r[29]; // 800CFD38
  c->r[8]=c->r[30]|c->r[30]; // 800CFD3C
  c->r[6]=c->r[28]+c->r[29]; // 800CFD40
  c->r[9]=0u+0x00000001u; // 800CFD44
  c->lr=0x800CFD4Cu; f_800E8164(c); // 800CFD48
  c->r[0]=R32(c->r[25]+0x00000000u); // 800CFD4C
  c->r[3]=0u+0x00000001u; // 800CFD50
  W32(c->r[25]+0x00000010u,c->r[31]); // 800CFD54
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 800CFD58
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFD5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CFD60
  c->lr=c->r[0]; // 800CFD64
  c->r[1]=c->r[1]+0x00000030u; // 800CFD68
  return; // 800CFD6C
}

// fn_800CFD70
void f_800CFD70(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CFD70
  cmps(c,0,(int32_t)c->r[3],0); // 800CFD74
  if (crb(c,2)) return; // 800CFD78
  f_800E87CC(c); return; // 800CFD7C
  return; // 800CFD80
}

// fn_800CFD84
void f_800CFD84(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CFD84
  cmps(c,0,(int32_t)c->r[3],0); // 800CFD88
  if (crb(c,2)) return; // 800CFD8C
  f_800E84B4(c); return; // 800CFD90
  return; // 800CFD94
}

// fn_800CFD98
void f_800CFD98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFD98
  c->r[0]=c->lr; // 800CFD9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFDA0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CFDA4
  cmps(c,0,(int32_t)c->r[3],0); // 800CFDA8
  if (!crb(c,2)) { goto L_800CFDB8; } // 800CFDAC
  c->r[3]=0u+0x00000000u; // 800CFDB0
  goto L_800CFDC4; // 800CFDB4
L_800CFDB8:;
  c->lr=0x800CFDBCu; f_800E7B9C(c); // 800CFDB8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800CFDBC
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800CFDC0
L_800CFDC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFDC4
  c->lr=c->r[0]; // 800CFDC8
  c->r[1]=c->r[1]+0x00000010u; // 800CFDCC
  return; // 800CFDD0
}

// fn_800CFDD4
void f_800CFDD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFDD4
  c->r[0]=c->lr; // 800CFDD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFDDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFDE0
  c->r[31]=c->r[3]|c->r[3]; // 800CFDE4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CFDE8
  cmps(c,0,(int32_t)c->r[0],0); // 800CFDEC
  if (crb(c,2)) { goto L_800CFE14; } // 800CFDF0
  c->r[3]=c->r[0]|c->r[0]; // 800CFDF4
  c->lr=0x800CFDFCu; f_800E84B4(c); // 800CFDF8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800CFDFC
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE00
  if (crb(c,2)) { goto L_800CFE14; } // 800CFE04
  c->lr=0x800CFE0Cu; f_8009230C(c); // 800CFE08
  c->r[0]=0u+0x00000000u; // 800CFE0C
  W32(c->r[31]+0x00000000u,c->r[0]); // 800CFE10
L_800CFE14:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800CFE14
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE18
  if (crb(c,2)) { goto L_800CFE2C; } // 800CFE1C
  c->lr=0x800CFE24u; f_8009227C(c); // 800CFE20
  c->r[0]=0u+0x00000000u; // 800CFE24
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CFE28
L_800CFE2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFE2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFE30
  c->lr=c->r[0]; // 800CFE34
  c->r[1]=c->r[1]+0x00000010u; // 800CFE38
  return; // 800CFE3C
}

// fn_800CFE40
void f_800CFE40(Ctx* __restrict c) {
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800CFE40
  W32(c->r[3]+0x00000010u,c->r[5]); // 800CFE44
  return; // 800CFE48
}

// fn_800CFE4C
void f_800CFE4C(Ctx* __restrict c) {
  c->r[4]=0u+0x80280000u; // 800CFE4C
  c->r[0]=0u+0x00000000u; // 800CFE50
  c->r[4]=c->r[4]+0x00001B38u; // 800CFE54
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CFE58
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CFE5C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CFE60
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800CFE64
  return; // 800CFE68
}

// fn_800CFE6C
void f_800CFE6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFE6C
  c->r[0]=c->lr; // 800CFE70
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFE78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFE7C
  c->r[30]=c->r[3]|c->r[3]; // 800CFE80
  c->r[31]=c->r[4]|c->r[4]; // 800CFE84
  if (crb(c,2)) { goto L_800CFEA8; } // 800CFE88
  if (crb(c,2)) { goto L_800CFE98; } // 800CFE8C
  c->r[4]=0u+0x00000000u; // 800CFE90
  c->lr=0x800CFE98u; f_800D027C(c); // 800CFE94
L_800CFE98:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CFE98
  if (!crb(c,1)) { goto L_800CFEA8; } // 800CFE9C
  c->r[3]=c->r[30]|c->r[30]; // 800CFEA0
  c->lr=0x800CFEA8u; f_8009230C(c); // 800CFEA4
L_800CFEA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFEA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFEAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFEB0
  c->lr=c->r[0]; // 800CFEB4
  c->r[1]=c->r[1]+0x00000010u; // 800CFEB8
  return; // 800CFEBC
}

// fn_800CFEC0
void f_800CFEC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFEC0
  c->r[0]=c->lr; // 800CFEC4
  cmps(c,0,(int32_t)c->r[3],0); // 800CFEC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFECC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFED0
  c->r[30]=c->r[3]|c->r[3]; // 800CFED4
  c->r[31]=c->r[4]|c->r[4]; // 800CFED8
  if (crb(c,2)) { goto L_800CFF0C; } // 800CFEDC
  c->r[4]=0u+0x80280000u; // 800CFEE0
  c->r[4]=c->r[4]+0x00001B38u; // 800CFEE4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CFEE8
  c->lr=0x800CFEF0u; f_800D015C(c); // 800CFEEC
  c->r[3]=c->r[30]+0x00000004u; // 800CFEF0
  c->r[4]=0u+0xFFFFFFFFu; // 800CFEF4
  c->lr=0x800CFEFCu; f_800CFE6C(c); // 800CFEF8
  cmps(c,0,(int32_t)c->r[31],0); // 800CFEFC
  if (!crb(c,1)) { goto L_800CFF0C; } // 800CFF00
  c->r[3]=c->r[30]|c->r[30]; // 800CFF04
  c->lr=0x800CFF0Cu; f_8009230C(c); // 800CFF08
L_800CFF0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFF0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFF10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFF14
  c->lr=c->r[0]; // 800CFF18
  c->r[1]=c->r[1]+0x00000010u; // 800CFF1C
  return; // 800CFF20
}

// fn_800CFF24
void f_800CFF24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFF24
  c->r[0]=c->lr; // 800CFF28
  c->r[4]=0u+0x80290000u; // 800CFF2C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CFF30
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFF34
  c->r[25]=0u+0x00000000u; // 800CFF38
  c->r[24]=c->r[3]|c->r[3]; // 800CFF3C
  c->r[26]=0u+0x00000000u; // 800CFF40
  c->r[30]=c->r[4]+0x00006280u; // 800CFF44
  c->r[27]=0u+0xFFFFFFEEu; // 800CFF48
  c->r[29]=0u+0x80260000u; // 800CFF4C
  c->r[28]=0u+0x20000000u; // 800CFF50
  c->r[31]=0u+0x80280000u; // 800CFF54
L_800CFF58:;
  W8(c->r[1]+0x00000008u,c->r[26]); // 800CFF58
  c->r[3]=0u+0x00001001u; // 800CFF5C
  c->r[4]=0u+0x00000000u; // 800CFF60
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 800CFF64
  c->lr=0x800CFF6Cu; f_800920C4(c); // 800CFF68
  cmps(c,0,(int32_t)c->r[3],0); // 800CFF6C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800CFF70
  if (!crb(c,2)) { goto L_800CFF80; } // 800CFF74
  c->r[3]=0u+0x00000000u; // 800CFF78
  goto L_800D0134; // 800CFF7C
L_800CFF80:;
  W8(c->r[3]+0x00001000u,c->r[27]); // 800CFF80
  c->r[3]=R32(c->r[24]+0x00000008u); // 800CFF84
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 800CFF88
  cmpu(c,0,c->r[3],c->r[0]); // 800CFF8C
  if (!crb(c,0)) { goto L_800CFFB8; } // 800CFF90
  c->r[4]=c->r[3]+0x00000001u; // 800CFF94
  c->r[3]=R32(c->r[24]+0x00000004u); // 800CFF98
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800CFF9C
  W32(c->r[24]+0x00000008u,c->r[4]); // 800CFFA0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800CFFA4
  c->r[4]=c->r[1]+0x00000008u; // 800CFFA8
  c->r[3]=c->r[3]+c->r[0]; // 800CFFAC
  c->lr=0x800CFFB4u; f_800D0148(c); // 800CFFB0
  goto L_800D0124; // 800CFFB4
L_800CFFB8:;
  c->r[3]=c->r[24]+0x00000004u; // 800CFFB8
  c->r[4]=0u+0x00000001u; // 800CFFBC
  c->lr=0x800CFFC4u; f_800D02DC(c); // 800CFFC0
  c->r[0]=c->r[24]+0x0000000Cu; // 800CFFC4
  W32(c->r[1]+0x00000010u,c->r[26]); // 800CFFC8
  c->r[3]=c->r[24]+0x00000004u; // 800CFFCC
  W32(c->r[1]+0x00000014u,c->r[26]); // 800CFFD0
  W32(c->r[1]+0x00000018u,c->r[26]); // 800CFFD4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CFFD8
  W32(c->r[1]+0x00000020u,c->r[26]); // 800CFFDC
  c->r[4]=R32(c->r[24]+0x00000008u); // 800CFFE0
  c->r[5]=R32(c->r[24]+0x0000000Cu); // 800CFFE4
  c->r[0]=c->r[4]+0x00000001u; // 800CFFE8
  c->r[4]=c->r[0]-c->r[5]; // 800CFFEC
  c->lr=0x800CFFF4u; f_800D02DC(c); // 800CFFF0
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800CFFF4
  c->r[23]=c->r[3]|c->r[3]; // 800CFFF8
  cmpu(c,0,c->r[3],c->r[0]); // 800CFFFC
  if (!crb(c,1)) { goto L_800D0018; } // 800D0000
  c->r[4]=c->r[29]+0xFFFFF2F0u; // 800D0004
  c->r[3]=c->r[30]+0x000000A0u; // 800D0008
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D000C
  c->lr=0x800D0014u; f_801126E0(c); // 800D0010
  c->lr=0x800D0018u; f_80116998(c); // 800D0014
L_800D0018:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D0018
  c->lr=0x800D0020u; f_8009228C(c); // 800D001C
  cmps(c,0,(int32_t)c->r[3],0); // 800D0020
  c->r[22]=c->r[3]|c->r[3]; // 800D0024
  if (!crb(c,2)) { goto L_800D0040; } // 800D0028
  c->r[3]=c->r[30]+0x000000A0u; // 800D002C
  c->r[4]=c->r[31]+0x00001B44u; // 800D0030
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0034
  c->lr=0x800D003Cu; f_801126E0(c); // 800D0038
  c->lr=0x800D0040u; f_80116998(c); // 800D003C
L_800D0040:;
  W32(c->r[1]+0x00000010u,c->r[22]); // 800D0040
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0044
  W32(c->r[1]+0x00000018u,c->r[23]); // 800D0048
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D004C
  c->r[0]=R8(c->r[1]+0x00000008u); // 800D0050
  c->r[5]=R32(c->r[24]+0x00000008u); // 800D0054
  c->r[3]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D0058
  W32(c->r[1]+0x00000020u,c->r[5]); // 800D005C
  c->r[3]=c->r[22]+c->r[3]; // 800D0060
  {uint32_t ea=c->r[3]+c->r[4]; W8(ea,c->r[0]); c->r[3]=ea;} // 800D0064
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D0068
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D006C
  c->r[3]=R32(c->r[1]+0x00000014u); // 800D0070
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D0074
  c->r[4]=c->r[3]+0x00000001u; // 800D0078
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D007C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D0080
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D0084
  c->r[5]=c->r[3]+c->r[0]; // 800D0088
  c->r[0]=R32(c->r[24]+0x00000008u); // 800D008C
  c->r[3]=R32(c->r[24]+0x00000004u); // 800D0090
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D0094
  c->r[6]=c->r[3]+c->r[0]; // 800D0098
  c->r[0]=c->r[6]+0x00000007u; // 800D009C
  c->r[0]=c->r[0]-c->r[3]; // 800D00A0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D00A4
  c->ctr=c->r[0]; // 800D00A8
  cmpu(c,0,c->r[6],c->r[3]); // 800D00AC
  if (!crb(c,1)) { goto L_800D00EC; } // 800D00B0
L_800D00B4:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFF8u,0); cr0(c,c->r[5]); // 800D00B4
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 800D00B8
  if (crb(c,2)) { goto L_800D00D0; } // 800D00BC
  c->r[0]=R8(c->r[6]+0x00000000u); // 800D00C0
  W8(c->r[5]+0x00000000u,c->r[0]); // 800D00C4
  c->r[0]=R32(c->r[6]+0x00000004u); // 800D00C8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800D00CC
L_800D00D0:;
  c->r[4]=R32(c->r[1]+0x00000020u); // 800D00D0
  c->r[3]=R32(c->r[1]+0x00000014u); // 800D00D4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800D00D8
  c->r[0]=c->r[3]+0x00000001u; // 800D00DC
  W32(c->r[1]+0x00000020u,c->r[4]); // 800D00E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D00E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D00B4; } // 800D00E8
L_800D00EC:;
  W32(c->r[24]+0x00000008u,c->r[26]); // 800D00EC
  c->r[3]=c->r[24]+0x0000000Cu; // 800D00F0
  c->r[4]=c->r[1]+0x00000018u; // 800D00F4
  c->lr=0x800D00FCu; f_80032474(c); // 800D00F8
  c->r[5]=R32(c->r[24]+0x00000004u); // 800D00FC
  c->r[3]=c->r[24]+0x00000008u; // 800D0100
  c->r[0]=R32(c->r[1]+0x00000010u); // 800D0104
  c->r[4]=c->r[1]+0x00000014u; // 800D0108
  W32(c->r[24]+0x00000004u,c->r[0]); // 800D010C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D0110
  c->lr=0x800D0118u; f_80032474(c); // 800D0114
  c->r[3]=c->r[1]+0x00000010u; // 800D0118
  c->r[4]=0u+0xFFFFFFFFu; // 800D011C
  c->lr=0x800D0124u; f_800D03C4(c); // 800D0120
L_800D0124:;
  c->r[25]=c->r[25]+0x00000001u; // 800D0124
  cmpu(c,0,c->r[25],0x00000005u); // 800D0128
  if (crb(c,0)) { IRQCHK(c); goto L_800CFF58; } // 800D012C
  c->r[3]=0u+0x00000001u; // 800D0130
L_800D0134:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0134
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D0138
  c->lr=c->r[0]; // 800D013C
  c->r[1]=c->r[1]+0x00000050u; // 800D0140
  return; // 800D0144
}

// fn_800D0148
void f_800D0148(Ctx* __restrict c) {
  c->r[5]=R8(c->r[4]+0x00000000u); // 800D0148
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D014C
  W8(c->r[3]+0x00000000u,c->r[5]); // 800D0150
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D0154
  return; // 800D0158
}

// fn_800D015C
void f_800D015C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D015C
  c->r[0]=c->lr; // 800D0160
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0164
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0168
  c->r[28]=0u+0x00000000u; // 800D016C
  c->r[27]=c->r[3]|c->r[3]; // 800D0170
  c->r[31]=0u+0x00000000u; // 800D0174
  c->r[30]=c->r[28]|c->r[28]; // 800D0178
  goto L_800D01A4; // 800D017C
L_800D0180:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800D0180
  c->r[29]=c->r[0]+c->r[31]; // 800D0184
  c->r[3]=R32(c->r[29]+0x00000004u); // 800D0188
  cmps(c,0,(int32_t)c->r[3],0); // 800D018C
  if (crb(c,2)) { goto L_800D019C; } // 800D0190
  c->lr=0x800D0198u; f_8009227C(c); // 800D0194
  W32(c->r[29]+0x00000004u,c->r[30]); // 800D0198
L_800D019C:;
  c->r[28]=c->r[28]+0x00000001u; // 800D019C
  c->r[31]=c->r[31]+0x00000008u; // 800D01A0
L_800D01A4:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800D01A4
  cmpu(c,0,c->r[28],c->r[0]); // 800D01A8
  if (crb(c,0)) { IRQCHK(c); goto L_800D0180; } // 800D01AC
  c->r[3]=c->r[27]+0x00000004u; // 800D01B0
  c->lr=0x800D01B8u; f_800D026C(c); // 800D01B4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D01B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D01BC
  c->lr=c->r[0]; // 800D01C0
  c->r[1]=c->r[1]+0x00000020u; // 800D01C4
  return; // 800D01C8
}

// fn_800D01CC
void f_800D01CC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D01CC
  c->r[4]=0u+0x00000000u; // 800D01D0
  c->ctr=c->r[0]; // 800D01D4
  cmpu(c,0,c->r[0],0x00000000u); // 800D01D8
  if (!crb(c,1)) { goto L_800D020C; } // 800D01DC
L_800D01E0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D01E0
  c->r[5]=c->r[0]+c->r[4]; // 800D01E4
  c->r[0]=R8(c->r[4]+c->r[0]); // 800D01E8
  cmps(c,0,(int32_t)c->r[0],0); // 800D01EC
  if (!crb(c,2)) { goto L_800D0204; } // 800D01F0
  c->r[0]=0u+0x00000001u; // 800D01F4
  W8(c->r[5]+0x00000000u,c->r[0]); // 800D01F8
  c->r[3]=R32(c->r[5]+0x00000004u); // 800D01FC
  return; // 800D0200
L_800D0204:;
  c->r[4]=c->r[4]+0x00000008u; // 800D0204
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D01E0; } // 800D0208
L_800D020C:;
  c->r[3]=0u+0x00001001u; // 800D020C
  c->r[4]=0u+0x00000000u; // 800D0210
  f_800920C4(c); return; // 800D0214
  return; // 800D0218
}

// fn_800D021C
void f_800D021C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D021C
  c->r[5]=0u+0x00000000u; // 800D0220
  c->ctr=c->r[0]; // 800D0224
  cmpu(c,0,c->r[0],0x00000000u); // 800D0228
  if (!crb(c,1)) { goto L_800D0258; } // 800D022C
L_800D0230:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D0230
  c->r[6]=c->r[0]+c->r[5]; // 800D0234
  c->r[0]=R32(c->r[6]+0x00000004u); // 800D0238
  cmpu(c,0,c->r[0],c->r[4]); // 800D023C
  if (!crb(c,2)) { goto L_800D0250; } // 800D0240
  c->r[0]=0u+0x00000000u; // 800D0244
  W8(c->r[6]+0x00000000u,c->r[0]); // 800D0248
  return; // 800D024C
L_800D0250:;
  c->r[5]=c->r[5]+0x00000008u; // 800D0250
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0230; } // 800D0254
L_800D0258:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0258
  if (crb(c,2)) return; // 800D025C
  c->r[3]=c->r[4]|c->r[4]; // 800D0260
  f_8009227C(c); return; // 800D0264
  return; // 800D0268
}

// fn_800D026C
void f_800D026C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D026C
  c->r[0]=c->r[0]-c->r[0]; // 800D0270
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D0274
  return; // 800D0278
}

// fn_800D027C
void f_800D027C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D027C
  c->r[0]=c->lr; // 800D0280
  cmps(c,0,(int32_t)c->r[3],0); // 800D0284
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0288
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D028C
  c->r[30]=c->r[3]|c->r[3]; // 800D0290
  c->r[31]=c->r[4]|c->r[4]; // 800D0294
  if (crb(c,2)) { goto L_800D02C4; } // 800D0298
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D029C
  cmps(c,0,(int32_t)c->r[0],0); // 800D02A0
  if (crb(c,2)) { goto L_800D02B4; } // 800D02A4
  c->lr=0x800D02ACu; f_800D026C(c); // 800D02A8
  c->r[3]=R32(c->r[30]+0x00000000u); // 800D02AC
  c->lr=0x800D02B4u; f_8009230C(c); // 800D02B0
L_800D02B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D02B4
  if (!crb(c,1)) { goto L_800D02C4; } // 800D02B8
  c->r[3]=c->r[30]|c->r[30]; // 800D02BC
  c->lr=0x800D02C4u; f_8009230C(c); // 800D02C0
L_800D02C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D02C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D02C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D02CC
  c->lr=c->r[0]; // 800D02D0
  c->r[1]=c->r[1]+0x00000010u; // 800D02D4
  return; // 800D02D8
}

// fn_800D02DC
void f_800D02DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D02DC
  c->r[0]=c->lr; // 800D02E0
  c->r[5]=0u+0x20000000u; // 800D02E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D02E8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800D02EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D02F0
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D02F4
  c->r[31]=R32(c->r[3]+0x00000008u); // 800D02F8
  c->r[0]=c->r[0]-c->r[31]; // 800D02FC
  cmpu(c,0,c->r[4],c->r[0]); // 800D0300
  if (!crb(c,1)) { goto L_800D0328; } // 800D0304
  c->r[3]=0u+0x80290000u; // 800D0308
  c->r[4]=0u+0x80260000u; // 800D030C
  c->r[3]=c->r[3]+0x00006280u; // 800D0310
  c->r[4]=c->r[4]+0xFFFFF2F0u; // 800D0314
  c->r[3]=c->r[3]+0x000000A0u; // 800D0318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D031C
  c->lr=0x800D0324u; f_801126E0(c); // 800D0320
  c->lr=0x800D0328u; f_80116998(c); // 800D0324
L_800D0328:;
  c->r[3]=0u+0x0AAB0000u; // 800D0328
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 800D032C
  cmpu(c,0,c->r[31],c->r[0]); // 800D0330
  if (!crb(c,0)) { goto L_800D036C; } // 800D0334
  c->r[0]=c->r[31]+0x00000001u; // 800D0338
  c->r[4]=0u+0x00000005u; // 800D033C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800D0340
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D0344
  c->r[3]=c->r[1]+0x00000010u; // 800D0348
  c->r[4]=divwu(c->r[5],c->r[4]); // 800D034C
  cmpu(c,0,c->r[4],c->r[0]); // 800D0350
  W32(c->r[1]+0x00000010u,c->r[4]); // 800D0354
  if (!crb(c,0)) { goto L_800D0360; } // 800D0358
  c->r[3]=c->r[1]+0x00000008u; // 800D035C
L_800D0360:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D0360
  c->r[3]=c->r[31]+c->r[0]; // 800D0364
  goto L_800D03B0; // 800D0368
L_800D036C:;
  c->r[3]=0u+0x15550000u; // 800D036C
  c->r[0]=c->r[3]+0x00005554u; // 800D0370
  cmpu(c,0,c->r[31],c->r[0]); // 800D0374
  if (!crb(c,0)) { goto L_800D03A8; } // 800D0378
  c->r[3]=c->r[31]+0x00000001u; // 800D037C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D0380
  c->r[4]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800D0384
  cmpu(c,0,c->r[4],c->r[0]); // 800D0388
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D038C
  c->r[3]=c->r[1]+0x0000000Cu; // 800D0390
  if (!crb(c,0)) { goto L_800D039C; } // 800D0394
  c->r[3]=c->r[1]+0x00000008u; // 800D0398
L_800D039C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D039C
  c->r[3]=c->r[31]+c->r[0]; // 800D03A0
  goto L_800D03B0; // 800D03A4
L_800D03A8:;
  c->r[3]=0u+0x20000000u; // 800D03A8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D03AC
L_800D03B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D03B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D03B4
  c->lr=c->r[0]; // 800D03B8
  c->r[1]=c->r[1]+0x00000020u; // 800D03BC
  return; // 800D03C0
}

// fn_800D03C4
void f_800D03C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D03C4
  c->r[0]=c->lr; // 800D03C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D03CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D03D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D03D4
  c->r[30]=c->r[3]|c->r[3]; // 800D03D8
  c->r[31]=c->r[4]|c->r[4]; // 800D03DC
  if (crb(c,2)) { goto L_800D0404; } // 800D03E0
  c->r[0]=0u+0x00000000u; // 800D03E4
  c->r[4]=0u+0x00000000u; // 800D03E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D03EC
  c->lr=0x800D03F4u; f_800D041C(c); // 800D03F0
  cmps(c,0,(int32_t)c->r[31],0); // 800D03F4
  if (!crb(c,1)) { goto L_800D0404; } // 800D03F8
  c->r[3]=c->r[30]|c->r[30]; // 800D03FC
  c->lr=0x800D0404u; f_8009230C(c); // 800D0400
L_800D0404:;
  c->r[3]=c->r[30]|c->r[30]; // 800D0404
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0408
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D040C
  c->lr=c->r[0]; // 800D0410
  c->r[1]=c->r[1]+0x00000010u; // 800D0414
  return; // 800D0418
}

// fn_800D041C
void f_800D041C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D041C
  c->r[0]=c->lr; // 800D0420
  cmps(c,0,(int32_t)c->r[3],0); // 800D0424
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0428
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D042C
  c->r[30]=c->r[3]|c->r[3]; // 800D0430
  c->r[31]=c->r[4]|c->r[4]; // 800D0434
  if (crb(c,2)) { goto L_800D046C; } // 800D0438
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D043C
  cmps(c,0,(int32_t)c->r[4],0); // 800D0440
  if (crb(c,2)) { goto L_800D045C; } // 800D0444
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D0448
  c->r[0]=c->r[0]-c->r[0]; // 800D044C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D0450
  c->r[3]=c->r[4]|c->r[4]; // 800D0454
  c->lr=0x800D045Cu; f_8009230C(c); // 800D0458
L_800D045C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D045C
  if (!crb(c,1)) { goto L_800D046C; } // 800D0460
  c->r[3]=c->r[30]|c->r[30]; // 800D0464
  c->lr=0x800D046Cu; f_8009230C(c); // 800D0468
L_800D046C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D046C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0470
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0474
  c->lr=c->r[0]; // 800D0478
  c->r[1]=c->r[1]+0x00000010u; // 800D047C
  return; // 800D0480
}

// fn_800D0484
void f_800D0484(Ctx* __restrict c) {
  c->r[5]=0u+0x80280000u; // 800D0484
  c->r[4]=0u+0x00000000u; // 800D0488
  c->r[5]=c->r[5]+0x00001B60u; // 800D048C
  c->r[0]=0u+0x00000002u; // 800D0490
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D0494
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D0498
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D049C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800D04A0
  W32(c->r[3]+0x00000010u,c->r[4]); // 800D04A4
  W32(c->r[3]+0x00000014u,c->r[4]); // 800D04A8
  W32(c->r[3]+0x00000018u,c->r[4]); // 800D04AC
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800D04B0
  W32(c->r[3]+0x00000020u,c->r[4]); // 800D04B4
  return; // 800D04B8
}

// fn_800D04BC
void f_800D04BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D04BC
  c->r[0]=c->lr; // 800D04C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D04C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D04C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D04CC
  c->r[30]=c->r[3]|c->r[3]; // 800D04D0
  c->r[31]=c->r[4]|c->r[4]; // 800D04D4
  if (crb(c,2)) { goto L_800D0508; } // 800D04D8
  c->r[4]=0u+0x80280000u; // 800D04DC
  c->r[4]=c->r[4]+0x00001B60u; // 800D04E0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D04E4
  c->lr=0x800D04ECu; f_800D0C2C(c); // 800D04E8
  c->r[3]=c->r[30]+0x00000014u; // 800D04EC
  c->r[4]=0u+0xFFFFFFFFu; // 800D04F0
  c->lr=0x800D04F8u; f_800431B0(c); // 800D04F4
  cmps(c,0,(int32_t)c->r[31],0); // 800D04F8
  if (!crb(c,1)) { goto L_800D0508; } // 800D04FC
  c->r[3]=c->r[30]|c->r[30]; // 800D0500
  c->lr=0x800D0508u; f_8009230C(c); // 800D0504
L_800D0508:;
  c->r[3]=c->r[30]|c->r[30]; // 800D0508
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D050C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0510
  c->lr=c->r[0]; // 800D0514
  c->r[1]=c->r[1]+0x00000010u; // 800D0518
  return; // 800D051C
}

// fn_800D0520
void f_800D0520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0520
  c->r[0]=c->lr; // 800D0524
  c->r[6]=c->r[4]|c->r[4]; // 800D0528
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D052C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0530
  c->r[29]=c->r[3]|c->r[3]; // 800D0534
  c->r[30]=c->r[5]|c->r[5]; // 800D0538
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D053C
  c->r[4]=c->r[29]+0x00000024u; // 800D0540
  W32(c->r[3]+0x00000010u,c->r[5]); // 800D0544
  c->r[3]=c->r[30]|c->r[30]; // 800D0548
  c->r[5]=c->r[6]+0x00000004u; // 800D054C
  c->lr=0x800D0554u; f_801FEFE8(c); // 800D0550
  c->r[31]=c->r[3]|c->r[3]; // 800D0554
  c->r[3]=R32(c->r[29]+0x00000004u); // 800D0558
  c->r[4]=c->r[31]|c->r[31]; // 800D055C
  c->r[5]=c->r[30]|c->r[30]; // 800D0560
  c->r[6]=0u+0x00000000u; // 800D0564
  c->lr=0x800D056Cu; f_80045120(c); // 800D0568
  cmps(c,0,(int32_t)c->r[3],0); // 800D056C
  if (!crb(c,2)) { goto L_800D0580; } // 800D0570
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 800D0574
  c->r[3]=0u+0x00000000u; // 800D0578
  goto L_800D0584; // 800D057C
L_800D0580:;
  c->r[3]=0u+0x00000001u; // 800D0580
L_800D0584:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0584
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0588
  c->lr=c->r[0]; // 800D058C
  c->r[1]=c->r[1]+0x00000020u; // 800D0590
  return; // 800D0594
}

// fn_800D0598
void f_800D0598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0598
  c->r[0]=c->lr; // 800D059C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800D05A0
  {uint32_t ea=c->r[1]+0x000000C8u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D05A4
  c->r[26]=c->r[4]|c->r[4]; // 800D05A8
  c->r[29]=c->r[3]|c->r[3]; // 800D05AC
  c->r[30]=c->r[5]|c->r[5]; // 800D05B0
  c->r[31]=c->r[6]|c->r[6]; // 800D05B4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D05B8
  c->r[3]=c->r[1]+0x00000034u; // 800D05BC
  c->r[4]=c->r[4]+0x00000014u; // 800D05C0
  c->lr=0x800D05C8u; f_80033A10(c); // 800D05C4
  c->r[3]=c->r[1]+0x00000034u; // 800D05C8
  c->lr=0x800D05D0u; f_80031DBC(c); // 800D05CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D05D0
  if (crb(c,2)) { goto L_800D061C; } // 800D05D4
  c->r[28]=0u+0x80260000u; // 800D05D8
  c->r[3]=c->r[1]+0x00000034u; // 800D05DC
  c->r[28]=c->r[28]+0xFFFFF308u; // 800D05E0
  c->lr=0x800D05E8u; f_80031DBC(c); // 800D05E4
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 800D05E8
  c->r[27]=c->r[3]|c->r[3]; // 800D05EC
  c->r[3]=c->r[28]|c->r[28]; // 800D05F0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800D05F4
  c->lr=0x800D05FCu; f_80109598(c); // 800D05F8
  c->r[0]=c->r[3]|c->r[3]; // 800D05FC
  c->r[4]=c->r[27]|c->r[27]; // 800D0600
  c->r[6]=c->r[28]|c->r[28]; // 800D0604
  c->r[3]=c->r[1]+0x00000034u; // 800D0608
  c->r[7]=c->r[28]+c->r[0]; // 800D060C
  c->r[8]=c->r[1]+0x0000000Au; // 800D0610
  c->r[5]=0u+0x00000000u; // 800D0614
  c->lr=0x800D061Cu; f_8000C9D4(c); // 800D0618
L_800D061C:;
  c->r[3]=c->r[1]+0x00000034u; // 800D061C
  c->lr=0x800D0624u; f_80031DBC(c); // 800D0620
  c->r[27]=c->r[3]|c->r[3]; // 800D0624
  c->r[3]=c->r[26]|c->r[26]; // 800D0628
  c->r[4]=c->r[1]+0x00000014u; // 800D062C
  c->r[5]=c->r[1]+0x00000018u; // 800D0630
  c->lr=0x800D0638u; f_80031E8C(c); // 800D0634
  c->r[5]=R8(c->r[1]+0x00000009u); // 800D0638
  c->r[4]=c->r[27]|c->r[27]; // 800D063C
  c->r[6]=R32(c->r[1]+0x00000014u); // 800D0640
  c->r[3]=c->r[1]+0x00000034u; // 800D0644
  c->r[0]=R32(c->r[1]+0x00000018u); // 800D0648
  c->r[8]=c->r[1]+0x00000008u; // 800D064C
  W8(c->r[1]+0x00000008u,c->r[5]); // 800D0650
  c->r[5]=0u+0x00000000u; // 800D0654
  c->r[7]=c->r[6]+c->r[0]; // 800D0658
  c->lr=0x800D0660u; f_8000C9D4(c); // 800D065C
  c->r[3]=c->r[1]+0x00000054u; // 800D0660
  c->lr=0x800D0668u; f_8000C958(c); // 800D0664
  c->r[3]=c->r[1]+0x00000060u; // 800D0668
  c->lr=0x800D0670u; f_8000C958(c); // 800D066C
  c->r[28]=0u+0xFFFFFFFFu; // 800D0670
  c->r[0]=0u+0x00000000u; // 800D0674
  W32(c->r[1]+0x0000006Cu,c->r[28]); // 800D0678
  c->r[3]=c->r[1]+0x00000034u; // 800D067C
  c->r[4]=c->r[1]+0x0000000Cu; // 800D0680
  c->r[5]=c->r[1]+0x00000010u; // 800D0684
  W32(c->r[1]+0x00000070u,c->r[0]); // 800D0688
  c->r[27]=0u+0xFFFFFFFFu; // 800D068C
  c->lr=0x800D0694u; f_80031E8C(c); // 800D0690
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D0694
  cmps(c,0,(int32_t)c->r[3],0); // 800D0698
  if (crb(c,2)) { goto L_800D06DC; } // 800D069C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D06A0
  cmpu(c,0,c->r[0],c->r[28]); // 800D06A4
  if (!crb(c,0)) { goto L_800D06B0; } // 800D06A8
  c->r[27]=c->r[0]|c->r[0]; // 800D06AC
L_800D06B0:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D06B0
  c->r[3]=c->r[4]+c->r[27]; // 800D06B4
L_800D06B8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D06B8
  cmps(c,0,(int32_t)c->r[0],47); // 800D06BC
  if (!crb(c,2)) { goto L_800D06CC; } // 800D06C0
  c->r[5]=c->r[3]-c->r[4]; // 800D06C4
  goto L_800D06E0; // 800D06C8
L_800D06CC:;
  cmpu(c,0,c->r[3],c->r[4]); // 800D06CC
  if (!crb(c,1)) { goto L_800D06DC; } // 800D06D0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D06D4
  IRQCHK(c); goto L_800D06B8; // 800D06D8
L_800D06DC:;
  c->r[5]=0u+0xFFFFFFFFu; // 800D06DC
L_800D06E0:;
  c->r[0]=c->r[5]+0x00010000u; // 800D06E0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D06E4
  if (!crb(c,2)) { goto L_800D06FC; } // 800D06E8
  c->r[3]=c->r[1]+0x00000054u; // 800D06EC
  c->r[4]=c->r[1]+0x00000034u; // 800D06F0
  c->lr=0x800D06F8u; f_80031DDC(c); // 800D06F4
  goto L_800D0728; // 800D06F8
L_800D06FC:;
  c->r[3]=c->r[1]+0x00000028u; // 800D06FC
  c->r[4]=c->r[1]+0x00000034u; // 800D0700
  c->r[5]=c->r[5]+0x00000001u; // 800D0704
  c->r[6]=0u+0xFFFFFFFFu; // 800D0708
  c->lr=0x800D0710u; f_80043B58(c); // 800D070C
  c->r[3]=c->r[1]+0x00000054u; // 800D0710
  c->r[4]=c->r[1]+0x00000028u; // 800D0714
  c->lr=0x800D071Cu; f_80031DDC(c); // 800D0718
  c->r[3]=c->r[1]+0x00000028u; // 800D071C
  c->r[4]=0u+0xFFFFFFFFu; // 800D0720
  c->lr=0x800D0728u; f_8000C978(c); // 800D0724
L_800D0728:;
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0728
  c->r[4]=c->r[1]+0x00000054u; // 800D072C
  c->lr=0x800D0734u; f_80033A10(c); // 800D0730
  c->r[3]=c->r[29]|c->r[29]; // 800D0734
  c->r[4]=c->r[1]+0x0000001Cu; // 800D0738
  c->lr=0x800D0740u; f_800D0CD4(c); // 800D073C
  c->r[28]=c->r[3]|c->r[3]; // 800D0740
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0744
  c->r[4]=0u+0xFFFFFFFFu; // 800D0748
  c->lr=0x800D0750u; f_8000C978(c); // 800D074C
  cmps(c,0,(int32_t)c->r[28],0); // 800D0750
  if (crb(c,2)) { goto L_800D0790; } // 800D0754
  cmps(c,0,(int32_t)c->r[31],0); // 800D0758
  if (!crb(c,2)) { goto L_800D0784; } // 800D075C
  c->r[28]=R32(c->r[28]+0x00000018u); // 800D0760
  c->r[3]=c->r[1]+0x00000054u; // 800D0764
  c->r[4]=0u+0xFFFFFFFFu; // 800D0768
  c->lr=0x800D0770u; f_800443A4(c); // 800D076C
  c->r[3]=c->r[1]+0x00000034u; // 800D0770
  c->r[4]=0u+0xFFFFFFFFu; // 800D0774
  c->lr=0x800D077Cu; f_8000C978(c); // 800D0778
  c->r[3]=c->r[28]|c->r[28]; // 800D077C
  goto L_800D0B0C; // 800D0780
L_800D0784:;
  c->r[4]=R32(c->r[28]+0x00000018u); // 800D0784
  c->r[3]=c->r[29]|c->r[29]; // 800D0788
  c->lr=0x800D0790u; f_800D0B20(c); // 800D078C
L_800D0790:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D0790
  cmps(c,0,(int32_t)c->r[0],2); // 800D0794
  if (!crb(c,2)) { goto L_800D0AEC; } // 800D0798
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D079C
  c->r[3]=c->r[29]+0x00000024u; // 800D07A0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800D07A4
  if (!crb(c,2)) { goto L_800D07B4; } // 800D07A8
  c->r[4]=c->r[1]+0x00000035u; // 800D07AC
  goto L_800D07B8; // 800D07B0
L_800D07B4:;
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 800D07B4
L_800D07B8:;
  c->r[5]=c->r[1]+0x0000007Cu; // 800D07B8
  c->lr=0x800D07C0u; f_801FF060(c); // 800D07BC
  c->r[27]=c->r[3]|c->r[3]; // 800D07C0
  c->r[3]=R32(c->r[29]+0x00000004u); // 800D07C4
  c->r[5]=R32(c->r[29]+0x00000010u); // 800D07C8
  c->r[4]=c->r[27]|c->r[27]; // 800D07CC
  c->r[6]=0u+0x00000000u; // 800D07D0
  c->lr=0x800D07D8u; f_80045120(c); // 800D07D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D07D8
  if (!crb(c,2)) { goto L_800D0804; } // 800D07DC
  W32(c->r[29]+0x0000000Cu,c->r[27]); // 800D07E0
  c->r[3]=c->r[1]+0x00000054u; // 800D07E4
  c->r[4]=0u+0xFFFFFFFFu; // 800D07E8
  c->lr=0x800D07F0u; f_800443A4(c); // 800D07EC
  c->r[3]=c->r[1]+0x00000034u; // 800D07F0
  c->r[4]=0u+0xFFFFFFFFu; // 800D07F4
  c->lr=0x800D07FCu; f_8000C978(c); // 800D07F8
  c->r[3]=0u+0xFFFFFFFFu; // 800D07FC
  goto L_800D0B0C; // 800D0800
L_800D0804:;
  c->r[3]=c->r[1]+0x0000007Cu; // 800D0804
  c->lr=0x800D080Cu; f_801FF24C(c); // 800D0808
  c->r[0]=c->r[3]+0x0000001Fu; // 800D080C
  c->r[5]=c->r[30]|c->r[30]; // 800D0810
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D0814
  c->r[4]=0u+0x00000020u; // 800D0818
  c->r[3]=c->r[27]|c->r[27]; // 800D081C
  c->lr=0x800D0824u; f_800921A0(c); // 800D0820
  cmps(c,0,(int32_t)c->r[3],0); // 800D0824
  c->r[28]=c->r[3]|c->r[3]; // 800D0828
  if (!crb(c,2)) { goto L_800D084C; } // 800D082C
  c->r[5]=0u+0x80260000u; // 800D0830
  c->r[4]=0u+0x0000006Bu; // 800D0834
  c->r[5]=c->r[5]+0xFFFFF308u; // 800D0838
  c->r[3]=c->r[5]+0x00000002u; // 800D083C
  c->r[5]=c->r[5]+0x00000017u; // 800D0840
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0844
  c->lr=0x800D084Cu; f_801839BC(c); // 800D0848
L_800D084C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D084C
  c->r[5]=c->r[27]|c->r[27]; // 800D0850
  c->r[4]=0u+0x00000000u; // 800D0854
  c->lr=0x800D085Cu; f_8000443C(c); // 800D0858
  c->r[4]=c->r[28]|c->r[28]; // 800D085C
  c->r[5]=c->r[27]|c->r[27]; // 800D0860
  c->r[3]=c->r[1]+0x0000007Cu; // 800D0864
  c->r[6]=0u+0x00000000u; // 800D0868
  c->lr=0x800D0870u; f_801FF158(c); // 800D086C
  cmps(c,0,(int32_t)c->r[3],0); // 800D0870
  c->r[27]=c->r[3]|c->r[3]; // 800D0874
  if (crb(c,1)) { goto L_800D0898; } // 800D0878
  c->r[5]=0u+0x80260000u; // 800D087C
  c->r[4]=0u+0x00000070u; // 800D0880
  c->r[5]=c->r[5]+0xFFFFF308u; // 800D0884
  c->r[3]=c->r[5]+0x00000002u; // 800D0888
  c->r[5]=c->r[5]+0x0000003Fu; // 800D088C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0890
  c->lr=0x800D0898u; f_801839BC(c); // 800D0894
L_800D0898:;
  cmps(c,0,(int32_t)c->r[27],0); // 800D0898
  if (!crb(c,0)) { goto L_800D08E0; } // 800D089C
  W32(c->r[29]+0x0000000Cu,c->r[27]); // 800D08A0
  c->r[4]=c->r[27]|c->r[27]; // 800D08A4
  c->r[3]=R32(c->r[29]+0x00000004u); // 800D08A8
  c->r[6]=0u+0x00000000u; // 800D08AC
  c->r[5]=R32(c->r[29]+0x00000010u); // 800D08B0
  c->lr=0x800D08B8u; f_80045120(c); // 800D08B4
  c->r[3]=c->r[1]+0x0000007Cu; // 800D08B8
  c->lr=0x800D08C0u; f_801FF280(c); // 800D08BC
  c->r[3]=c->r[1]+0x00000054u; // 800D08C0
  c->r[4]=0u+0xFFFFFFFFu; // 800D08C4
  c->lr=0x800D08CCu; f_800443A4(c); // 800D08C8
  c->r[3]=c->r[1]+0x00000034u; // 800D08CC
  c->r[4]=0u+0xFFFFFFFFu; // 800D08D0
  c->lr=0x800D08D8u; f_8000C978(c); // 800D08D4
  c->r[3]=0u+0xFFFFFFFFu; // 800D08D8
  goto L_800D0B0C; // 800D08DC
L_800D08E0:;
  c->r[3]=c->r[1]+0x0000007Cu; // 800D08E0
  c->lr=0x800D08E8u; f_801FF280(c); // 800D08E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D08E8
  if (crb(c,2)) { goto L_800D090C; } // 800D08EC
  c->r[5]=0u+0x80260000u; // 800D08F0
  c->r[4]=0u+0x0000007Au; // 800D08F4
  c->r[5]=c->r[5]+0xFFFFF308u; // 800D08F8
  c->r[3]=c->r[5]+0x00000002u; // 800D08FC
  c->r[5]=c->r[5]+0x00000063u; // 800D0900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0904
  c->lr=0x800D090Cu; f_801839BC(c); // 800D0908
L_800D090C:;
  W32(c->r[1]+0x00000070u,c->r[28]); // 800D090C
  c->r[3]=c->r[1]+0x0000007Cu; // 800D0910
  c->lr=0x800D0918u; f_801FF24C(c); // 800D0914
  W32(c->r[1]+0x00000074u,c->r[3]); // 800D0918
  c->r[3]=c->r[1]+0x00000060u; // 800D091C
  c->r[4]=c->r[1]+0x00000034u; // 800D0920
  c->lr=0x800D0928u; f_80031DDC(c); // 800D0924
  c->r[3]=c->r[29]|c->r[29]; // 800D0928
  c->lr=0x800D0930u; f_800D0E70(c); // 800D092C
  c->r[0]=0u+0x00000001u; // 800D0930
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 800D0934
  c->r[30]=0u+0x00000000u; // 800D0938
  W32(c->r[1]+0x00000078u,c->r[0]); // 800D093C
  c->r[3]=R32(c->r[29]+0x00000018u); // 800D0940
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D0944
  cmpu(c,0,c->r[3],c->r[0]); // 800D0948
  if (!crb(c,0)) { goto L_800D0978; } // 800D094C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)40); // 800D0950
  c->r[3]=R32(c->r[29]+0x00000014u); // 800D0954
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800D0958
  if (crb(c,2)) { goto L_800D0968; } // 800D095C
  c->r[4]=c->r[1]+0x00000054u; // 800D0960
  c->lr=0x800D0968u; f_80043088(c); // 800D0964
L_800D0968:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 800D0968
  c->r[0]=c->r[3]+0x00000001u; // 800D096C
  W32(c->r[29]+0x00000018u,c->r[0]); // 800D0970
  goto L_800D0AEC; // 800D0974
L_800D0978:;
  c->r[3]=c->r[29]+0x00000014u; // 800D0978
  c->r[4]=0u+0x00000001u; // 800D097C
  c->lr=0x800D0984u; f_800452B8(c); // 800D0980
  c->r[0]=c->r[29]+0x0000001Cu; // 800D0984
  W32(c->r[1]+0x00000040u,c->r[30]); // 800D0988
  c->r[3]=c->r[29]+0x00000014u; // 800D098C
  W32(c->r[1]+0x00000044u,c->r[30]); // 800D0990
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D0994
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800D0998
  W32(c->r[1]+0x00000050u,c->r[30]); // 800D099C
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D09A0
  c->r[5]=R32(c->r[29]+0x0000001Cu); // 800D09A4
  c->r[0]=c->r[4]+0x00000001u; // 800D09A8
  c->r[4]=c->r[0]-c->r[5]; // 800D09AC
  c->lr=0x800D09B4u; f_800452B8(c); // 800D09B0
  c->r[4]=0u+0x06660000u; // 800D09B4
  c->r[30]=c->r[3]|c->r[3]; // 800D09B8
  c->r[0]=c->r[4]+0x00006666u; // 800D09BC
  cmpu(c,0,c->r[3],c->r[0]); // 800D09C0
  if (!crb(c,1)) { goto L_800D09EC; } // 800D09C4
  c->r[4]=0u+0x80260000u; // 800D09C8
  c->r[3]=0u+0x80290000u; // 800D09CC
  c->r[4]=c->r[4]+0xFFFFF308u; // 800D09D0
  c->r[3]=c->r[3]+0x00006280u; // 800D09D4
  c->r[4]=c->r[4]+0x00000092u; // 800D09D8
  c->r[3]=c->r[3]+0x000000A0u; // 800D09DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D09E0
  c->lr=0x800D09E8u; f_801126E0(c); // 800D09E4
  c->lr=0x800D09ECu; f_80116998(c); // 800D09E8
L_800D09EC:;
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)40); // 800D09EC
  c->lr=0x800D09F4u; f_8009228C(c); // 800D09F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D09F4
  c->r[27]=c->r[3]|c->r[3]; // 800D09F8
  if (!crb(c,2)) { goto L_800D0A20; } // 800D09FC
  c->r[3]=0u+0x80290000u; // 800D0A00
  c->r[4]=0u+0x80270000u; // 800D0A04
  c->r[3]=c->r[3]+0x00006280u; // 800D0A08
  c->r[3]=c->r[3]+0x000000A0u; // 800D0A0C
  c->r[4]=c->r[4]+0x00006EECu; // 800D0A10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0A14
  c->lr=0x800D0A1Cu; f_801126E0(c); // 800D0A18
  c->lr=0x800D0A20u; f_80116998(c); // 800D0A1C
L_800D0A20:;
  W32(c->r[1]+0x00000040u,c->r[27]); // 800D0A20
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0A24
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D0A28
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 800D0A2C
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D0A30
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)40); // 800D0A34
  W32(c->r[1]+0x00000050u,c->r[4]); // 800D0A38
  c->r[0]=c->r[27]+c->r[0]; // 800D0A3C
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 800D0A40
  if (crb(c,2)) { goto L_800D0A50; } // 800D0A44
  c->r[4]=c->r[1]+0x00000054u; // 800D0A48
  c->lr=0x800D0A50u; f_80043088(c); // 800D0A4C
L_800D0A50:;
  c->r[3]=R32(c->r[1]+0x00000044u); // 800D0A50
  c->r[0]=R32(c->r[1]+0x00000050u); // 800D0A54
  c->r[4]=c->r[3]+0x00000001u; // 800D0A58
  c->r[3]=R32(c->r[1]+0x00000040u); // 800D0A5C
  W32(c->r[1]+0x00000044u,c->r[4]); // 800D0A60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 800D0A64
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D0A68
  c->r[27]=c->r[3]+c->r[0]; // 800D0A6C
  c->r[30]=R32(c->r[29]+0x00000014u); // 800D0A70
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)40); // 800D0A74
  c->r[28]=c->r[30]+c->r[0]; // 800D0A78
  goto L_800D0AB0; // 800D0A7C
L_800D0A80:;
  c->r[27]=addc(c,c->r[27],0xFFFFFFD8u,0); cr0(c,c->r[27]); // 800D0A80
  c->r[28]=c->r[28]+0xFFFFFFD8u; // 800D0A84
  if (crb(c,2)) { goto L_800D0A98; } // 800D0A88
  c->r[3]=c->r[27]|c->r[27]; // 800D0A8C
  c->r[4]=c->r[28]|c->r[28]; // 800D0A90
  c->lr=0x800D0A98u; f_80043088(c); // 800D0A94
L_800D0A98:;
  c->r[4]=R32(c->r[1]+0x00000050u); // 800D0A98
  c->r[3]=R32(c->r[1]+0x00000044u); // 800D0A9C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800D0AA0
  c->r[0]=c->r[3]+0x00000001u; // 800D0AA4
  W32(c->r[1]+0x00000050u,c->r[4]); // 800D0AA8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D0AAC
L_800D0AB0:;
  cmpu(c,0,c->r[28],c->r[30]); // 800D0AB0
  if (crb(c,1)) { IRQCHK(c); goto L_800D0A80; } // 800D0AB4
  c->r[3]=c->r[29]+0x0000001Cu; // 800D0AB8
  c->r[4]=c->r[1]+0x00000048u; // 800D0ABC
  c->lr=0x800D0AC4u; f_80032474(c); // 800D0AC0
  c->r[5]=R32(c->r[29]+0x00000014u); // 800D0AC4
  c->r[3]=c->r[29]+0x00000018u; // 800D0AC8
  c->r[0]=R32(c->r[1]+0x00000040u); // 800D0ACC
  c->r[4]=c->r[1]+0x00000044u; // 800D0AD0
  W32(c->r[29]+0x00000014u,c->r[0]); // 800D0AD4
  W32(c->r[1]+0x00000040u,c->r[5]); // 800D0AD8
  c->lr=0x800D0AE0u; f_80032474(c); // 800D0ADC
  c->r[3]=c->r[1]+0x00000040u; // 800D0AE0
  c->r[4]=0u+0xFFFFFFFFu; // 800D0AE4
  c->lr=0x800D0AECu; f_80045430(c); // 800D0AE8
L_800D0AEC:;
  c->r[28]=R32(c->r[1]+0x0000006Cu); // 800D0AEC
  c->r[3]=c->r[1]+0x00000054u; // 800D0AF0
  c->r[4]=0u+0xFFFFFFFFu; // 800D0AF4
  c->lr=0x800D0AFCu; f_800443A4(c); // 800D0AF8
  c->r[3]=c->r[1]+0x00000034u; // 800D0AFC
  c->r[4]=0u+0xFFFFFFFFu; // 800D0B00
  c->lr=0x800D0B08u; f_8000C978(c); // 800D0B04
  c->r[3]=c->r[28]|c->r[28]; // 800D0B08
L_800D0B0C:;
  {uint32_t ea=c->r[1]+0x000000C8u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0B0C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800D0B10
  c->lr=c->r[0]; // 800D0B14
  c->r[1]=c->r[1]+0x000000E0u; // 800D0B18
  return; // 800D0B1C
}

// fn_800D0B20
void f_800D0B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0B20
  c->r[0]=c->lr; // 800D0B24
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D0B28
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0B2C
  c->r[31]=c->r[3]|c->r[3]; // 800D0B30
  c->r[28]=c->r[4]|c->r[4]; // 800D0B34
  c->r[29]=R32(c->r[3]+0x00000014u); // 800D0B38
  goto L_800D0C08; // 800D0B3C
L_800D0B40:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 800D0B40
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800D0B44
  if (!crb(c,2)) { goto L_800D0C04; } // 800D0B48
  c->r[4]=c->r[29]|c->r[29]; // 800D0B4C
  c->r[3]=c->r[1]+0x00000008u; // 800D0B50
  c->lr=0x800D0B58u; f_80043088(c); // 800D0B54
  c->r[3]=R32(c->r[1]+0x00000024u); // 800D0B58
  c->lr=0x800D0B60u; f_8009227C(c); // 800D0B5C
  c->r[3]=R32(c->r[31]+0x00000018u); // 800D0B60
  c->r[0]=0u+0x00000028u; // 800D0B64
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D0B68
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)40); // 800D0B6C
  c->r[28]=c->r[4]+c->r[3]; // 800D0B70
  c->r[3]=c->r[28]-c->r[29]; // 800D0B74
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[0]); // 800D0B78
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800D0B7C
  if (crb(c,2)) { goto L_800D0BD4; } // 800D0B80
  c->r[30]=c->r[29]+0x00000028u; // 800D0B84
  goto L_800D0BCC; // 800D0B88
L_800D0B8C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D0B8C
  c->r[4]=c->r[30]|c->r[30]; // 800D0B90
  c->lr=0x800D0B98u; f_80031DDC(c); // 800D0B94
  c->r[3]=c->r[29]+0x0000000Cu; // 800D0B98
  c->r[4]=c->r[30]+0x0000000Cu; // 800D0B9C
  c->lr=0x800D0BA4u; f_80031DDC(c); // 800D0BA0
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D0BA4
  W32(c->r[29]+0x00000018u,c->r[0]); // 800D0BA8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800D0BAC
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800D0BB0
  c->r[0]=R32(c->r[30]+0x00000020u); // 800D0BB4
  W32(c->r[29]+0x00000020u,c->r[0]); // 800D0BB8
  c->r[0]=R32(c->r[30]+0x00000024u); // 800D0BBC
  c->r[30]=c->r[30]+0x00000028u; // 800D0BC0
  W32(c->r[29]+0x00000024u,c->r[0]); // 800D0BC4
  c->r[29]=c->r[29]+0x00000028u; // 800D0BC8
L_800D0BCC:;
  cmpu(c,0,c->r[30],c->r[28]); // 800D0BCC
  if (crb(c,0)) { IRQCHK(c); goto L_800D0B8C; } // 800D0BD0
L_800D0BD4:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800D0BD4
  c->r[4]=0u+0xFFFFFFFFu; // 800D0BD8
  c->r[5]=R32(c->r[31]+0x00000014u); // 800D0BDC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D0BE0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)40); // 800D0BE4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800D0BE8
  c->r[3]=c->r[5]+c->r[0]; // 800D0BEC
  c->lr=0x800D0BF4u; f_800443A4(c); // 800D0BF0
  c->r[3]=c->r[1]+0x00000008u; // 800D0BF4
  c->r[4]=0u+0xFFFFFFFFu; // 800D0BF8
  c->lr=0x800D0C00u; f_800443A4(c); // 800D0BFC
  goto L_800D0C18; // 800D0C00
L_800D0C04:;
  c->r[29]=c->r[29]+0x00000028u; // 800D0C04
L_800D0C08:;
  c->r[3]=c->r[31]+0x00000014u; // 800D0C08
  c->lr=0x800D0C10u; f_80044B08(c); // 800D0C0C
  cmpu(c,0,c->r[29],c->r[3]); // 800D0C10
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0B40; } // 800D0C14
L_800D0C18:;
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0C18
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0C1C
  c->lr=c->r[0]; // 800D0C20
  c->r[1]=c->r[1]+0x00000040u; // 800D0C24
  return; // 800D0C28
}

// fn_800D0C2C
void f_800D0C2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0C2C
  c->r[0]=c->lr; // 800D0C30
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D0C34
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0C38
  c->r[30]=c->r[3]|c->r[3]; // 800D0C3C
  c->r[31]=R32(c->r[3]+0x00000014u); // 800D0C40
  goto L_800D0C6C; // 800D0C44
L_800D0C48:;
  c->r[4]=c->r[31]|c->r[31]; // 800D0C48
  c->r[3]=c->r[1]+0x00000008u; // 800D0C4C
  c->lr=0x800D0C54u; f_80043088(c); // 800D0C50
  c->r[3]=R32(c->r[1]+0x00000024u); // 800D0C54
  c->lr=0x800D0C5Cu; f_8009227C(c); // 800D0C58
  c->r[3]=c->r[1]+0x00000008u; // 800D0C5C
  c->r[4]=0u+0xFFFFFFFFu; // 800D0C60
  c->lr=0x800D0C68u; f_800443A4(c); // 800D0C64
  c->r[31]=c->r[31]+0x00000028u; // 800D0C68
L_800D0C6C:;
  c->r[3]=c->r[30]+0x00000014u; // 800D0C6C
  c->lr=0x800D0C74u; f_80044B08(c); // 800D0C70
  cmpu(c,0,c->r[31],c->r[3]); // 800D0C74
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0C48; } // 800D0C78
  c->r[3]=c->r[30]+0x00000014u; // 800D0C7C
  c->lr=0x800D0C84u; f_80044BEC(c); // 800D0C80
  c->r[0]=0u+0x00000000u; // 800D0C84
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D0C88
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0C8C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0C90
  c->lr=c->r[0]; // 800D0C94
  c->r[1]=c->r[1]+0x00000040u; // 800D0C98
  return; // 800D0C9C
}

// fn_800D0CA0
void f_800D0CA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0CA0
  c->r[0]=c->lr; // 800D0CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0CA8
  c->lr=0x800D0CB0u; f_800D0E10(c); // 800D0CAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D0CB0
  if (crb(c,2)) { goto L_800D0CC0; } // 800D0CB4
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800D0CB8
  goto L_800D0CC4; // 800D0CBC
L_800D0CC0:;
  c->r[3]=0u+0x00000000u; // 800D0CC0
L_800D0CC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0CC4
  c->lr=c->r[0]; // 800D0CC8
  c->r[1]=c->r[1]+0x00000010u; // 800D0CCC
  return; // 800D0CD0
}

// fn_800D0CD4
void f_800D0CD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0CD4
  c->r[0]=c->lr; // 800D0CD8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D0CDC
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0CE0
  c->r[30]=c->r[3]|c->r[3]; // 800D0CE4
  c->r[31]=c->r[4]|c->r[4]; // 800D0CE8
  c->r[28]=R32(c->r[3]+0x00000014u); // 800D0CEC
  goto L_800D0DE8; // 800D0CF0
L_800D0CF4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D0CF4
  c->lr=0x800D0CFCu; f_80031DBC(c); // 800D0CF8
  c->r[29]=c->r[3]|c->r[3]; // 800D0CFC
  c->r[3]=c->r[28]|c->r[28]; // 800D0D00
  c->lr=0x800D0D08u; f_80031DBC(c); // 800D0D04
  c->r[0]=c->r[29]-c->r[3]; // 800D0D08
  c->r[0]=cntlz(c->r[0]); // 800D0D0C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800D0D10
  if (crb(c,2)) { goto L_800D0DD4; } // 800D0D14
  c->r[3]=c->r[31]|c->r[31]; // 800D0D18
  c->r[4]=c->r[1]+0x00000024u; // 800D0D1C
  c->r[5]=c->r[1]+0x00000020u; // 800D0D20
  c->lr=0x800D0D28u; f_80031E8C(c); // 800D0D24
  c->r[0]=R32(c->r[1]+0x00000020u); // 800D0D28
  c->r[3]=c->r[28]|c->r[28]; // 800D0D2C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D0D30
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D0D34
  c->lr=0x800D0D3Cu; f_80031DBC(c); // 800D0D38
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800D0D3C
  c->r[3]=c->r[28]|c->r[28]; // 800D0D40
  c->r[4]=c->r[1]+0x00000008u; // 800D0D44
  c->r[5]=c->r[1]+0x0000000Cu; // 800D0D48
  c->lr=0x800D0D50u; f_80031E8C(c); // 800D0D4C
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800D0D50
  c->r[4]=c->r[1]+0x00000014u; // 800D0D54
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D0D58
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D0D5C
  cmpu(c,0,c->r[3],c->r[0]); // 800D0D60
  W32(c->r[1]+0x00000014u,c->r[5]); // 800D0D64
  if (!crb(c,0)) { goto L_800D0D70; } // 800D0D68
  c->r[4]=c->r[1]+0x0000001Cu; // 800D0D6C
L_800D0D70:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D0D70
  c->r[4]=c->r[29]|c->r[29]; // 800D0D74
  c->r[0]=R32(c->r[1]+0x00000018u); // 800D0D78
  c->r[5]=c->r[1]+0x00000010u; // 800D0D7C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D0D80
  cmpu(c,0,c->r[0],c->r[3]); // 800D0D84
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D0D88
  if (!crb(c,0)) { goto L_800D0D94; } // 800D0D8C
  c->r[5]=c->r[1]+0x00000018u; // 800D0D90
L_800D0D94:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800D0D94
  c->lr=0x800D0D9Cu; f_801101A0(c); // 800D0D98
  cmps(c,0,(int32_t)c->r[3],0); // 800D0D9C
  if (!crb(c,2)) { goto L_800D0DCC; } // 800D0DA0
  c->r[0]=R32(c->r[1]+0x00000018u); // 800D0DA4
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D0DA8
  cmpu(c,0,c->r[3],c->r[0]); // 800D0DAC
  if (!crb(c,0)) { goto L_800D0DBC; } // 800D0DB0
  c->r[3]=0u+0xFFFFFFFFu; // 800D0DB4
  goto L_800D0DCC; // 800D0DB8
L_800D0DBC:;
  if (!crb(c,2)) { goto L_800D0DC8; } // 800D0DBC
  c->r[3]=0u+0x00000000u; // 800D0DC0
  goto L_800D0DCC; // 800D0DC4
L_800D0DC8:;
  c->r[3]=0u+0x00000001u; // 800D0DC8
L_800D0DCC:;
  c->r[0]=cntlz(c->r[3]); // 800D0DCC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D0DD0
L_800D0DD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0DD4
  if (crb(c,2)) { goto L_800D0DE4; } // 800D0DD8
  c->r[3]=c->r[28]|c->r[28]; // 800D0DDC
  goto L_800D0DFC; // 800D0DE0
L_800D0DE4:;
  c->r[28]=c->r[28]+0x00000028u; // 800D0DE4
L_800D0DE8:;
  c->r[3]=c->r[30]+0x00000014u; // 800D0DE8
  c->lr=0x800D0DF0u; f_80044B08(c); // 800D0DEC
  cmpu(c,0,c->r[28],c->r[3]); // 800D0DF0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0CF4; } // 800D0DF4
  c->r[3]=0u+0x00000000u; // 800D0DF8
L_800D0DFC:;
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0DFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0E00
  c->lr=c->r[0]; // 800D0E04
  c->r[1]=c->r[1]+0x00000040u; // 800D0E08
  return; // 800D0E0C
}

// fn_800D0E10
void f_800D0E10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0E10
  c->r[0]=c->lr; // 800D0E14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0E18
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0E1C
  c->r[29]=c->r[3]|c->r[3]; // 800D0E20
  c->r[30]=c->r[4]|c->r[4]; // 800D0E24
  c->r[31]=R32(c->r[3]+0x00000014u); // 800D0E28
  goto L_800D0E48; // 800D0E2C
L_800D0E30:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 800D0E30
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800D0E34
  if (!crb(c,2)) { goto L_800D0E44; } // 800D0E38
  c->r[3]=c->r[31]|c->r[31]; // 800D0E3C
  goto L_800D0E5C; // 800D0E40
L_800D0E44:;
  c->r[31]=c->r[31]+0x00000028u; // 800D0E44
L_800D0E48:;
  c->r[3]=c->r[29]+0x00000014u; // 800D0E48
  c->lr=0x800D0E50u; f_80044B08(c); // 800D0E4C
  cmpu(c,0,c->r[31],c->r[3]); // 800D0E50
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0E30; } // 800D0E54
  c->r[3]=0u+0x00000000u; // 800D0E58
L_800D0E5C:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0E5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0E60
  c->lr=c->r[0]; // 800D0E64
  c->r[1]=c->r[1]+0x00000020u; // 800D0E68
  return; // 800D0E6C
}

// fn_800D0E70
void f_800D0E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0E70
  c->r[0]=c->lr; // 800D0E74
  c->r[4]=0u+0x000F0000u; // 800D0E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0E7C
  c->r[0]=c->r[4]+0x00004240u; // 800D0E80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0E84
  c->r[31]=R32(c->r[3]+0x00000020u); // 800D0E88
  c->r[4]=c->r[31]+0x00000001u; // 800D0E8C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D0E90
  W32(c->r[3]+0x00000020u,c->r[4]); // 800D0E94
  if (crb(c,0)) { goto L_800D0EB8; } // 800D0E98
  c->r[5]=0u+0x80260000u; // 800D0E9C
  c->r[4]=0u+0x000000DDu; // 800D0EA0
  c->r[5]=c->r[5]+0xFFFFF308u; // 800D0EA4
  c->r[3]=c->r[5]+0x00000002u; // 800D0EA8
  c->r[5]=c->r[5]+0x000000C1u; // 800D0EAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D0EB0
  c->lr=0x800D0EB8u; f_801839BC(c); // 800D0EB4
L_800D0EB8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D0EB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0EBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0EC0
  c->lr=c->r[0]; // 800D0EC4
  c->r[1]=c->r[1]+0x00000010u; // 800D0EC8
  return; // 800D0ECC
}

// fn_800D0ED0
void f_800D0ED0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D0ED0
  W8(c->r[13]+0xFFFF9508u,c->r[0]); // 800D0ED4
  return; // 800D0ED8
}

// fn_800D0EDC
void f_800D0EDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0EDC
  c->r[0]=c->lr; // 800D0EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0EE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0EE8
  c->r[0]=R8(c->r[13]+0xFFFF8A28u); // 800D0EEC
  c->r[0]=cntlz(c->r[0]); // 800D0EF0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[31]); // 800D0EF4
  if (crb(c,2)) { goto L_800D0F18; } // 800D0EF8
  c->r[3]=0u+0x80000000u; // 800D0EFC
  c->r[0]=0u+0x000003E8u; // 800D0F00
  c->r[4]=R32(c->r[3]+0x000000F8u); // 800D0F04
  c->r[3]=0u+0x00000000u; // 800D0F08
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 800D0F0C
  c->r[4]=divwu(c->r[4],c->r[0]); // 800D0F10
  c->lr=0x800D0F18u; f_800E8EE8(c); // 800D0F14
L_800D0F18:;
  c->r[3]=c->r[31]|c->r[31]; // 800D0F18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0F1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0F20
  c->lr=c->r[0]; // 800D0F24
  c->r[1]=c->r[1]+0x00000010u; // 800D0F28
  return; // 800D0F2C
}

// fn_800D0F30
void f_800D0F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0F30
  c->r[0]=c->lr; // 800D0F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0F3C
  c->r[31]=0u+0x802E0000u; // 800D0F40
  c->r[0]=R32(c->r[31]+0xFFFF8810u); // 800D0F44
  cmps(c,0,(int32_t)c->r[0],0); // 800D0F48
  if (!crb(c,2)) { goto L_800D0F94; } // 800D0F4C
  c->r[3]=0u+0x00000001u; // 800D0F50
  c->r[0]=0u+0x00000000u; // 800D0F54
  W8(c->r[13]+0xFFFF9508u,c->r[3]); // 800D0F58
  c->r[9]=0u+0x80260000u; // 800D0F5C
  c->r[4]=0u+0x800D0000u; // 800D0F60
  c->r[5]=0u+0x00000000u; // 800D0F64
  W8(c->r[13]+0xFFFF9509u,c->r[3]); // 800D0F68
  c->r[9]=c->r[9]+0xFFFFF438u; // 800D0F6C
  c->r[3]=c->r[31]+0xFFFF8810u; // 800D0F70
  c->r[4]=c->r[4]+0x00000FA8u; // 800D0F74
  W8(c->r[13]+0xFFFF8A28u,c->r[0]); // 800D0F78
  c->r[6]=0u+0x00000000u; // 800D0F7C
  c->r[7]=0u+0x00010000u; // 800D0F80
  c->r[8]=0u+0x00000001u; // 800D0F84
  c->lr=0x800D0F8Cu; f_800CFCC8(c); // 800D0F88
  c->r[3]=c->r[31]+0xFFFF8810u; // 800D0F8C
  c->lr=0x800D0F94u; f_800CFD70(c); // 800D0F90
L_800D0F94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0F94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0F98
  c->lr=c->r[0]; // 800D0F9C
  c->r[1]=c->r[1]+0x00000010u; // 800D0FA0
  return; // 800D0FA4
}

// fn_800D0FA8
void f_800D0FA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0FA8
  c->r[0]=c->lr; // 800D0FAC
  c->r[3]=0u+0x00000004u; // 800D0FB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D0FB4
  c->r[3]=c->r[3]|0x00040000u; // 800D0FB8
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0FBC
  mtspr(c,914,c->r[3]); // 800D0FC0
  c->r[3]=0u+0x00000005u; // 800D0FC4
  c->r[3]=c->r[3]|0x00050000u; // 800D0FC8
  mtspr(c,915,c->r[3]); // 800D0FCC
  c->r[3]=0u+0x00000006u; // 800D0FD0
  c->r[3]=c->r[3]|0x00060000u; // 800D0FD4
  mtspr(c,916,c->r[3]); // 800D0FD8
  c->r[3]=0u+0x00000007u; // 800D0FDC
  c->r[3]=c->r[3]|0x00070000u; // 800D0FE0
  mtspr(c,917,c->r[3]); // 800D0FE4
  c->r[28]=0u+0x802B0000u; // 800D0FE8
  c->r[28]=c->r[28]+0x00001B78u; // 800D0FEC
  c->r[3]=c->r[28]+0x00006B7Cu; // 800D0FF0
  c->lr=0x800D0FF8u; f_800CA32C(c); // 800D0FF4
  c->r[3]=c->r[28]+0x00006B98u; // 800D0FF8
  c->lr=0x800D1000u; f_800CA32C(c); // 800D0FFC
  c->r[31]=0u+0x80260000u; // 800D1000
  c->r[29]=0u+0x80000000u; // 800D1004
  c->r[31]=c->r[31]+0xFFFFF438u; // 800D1008
  c->r[30]=0u+0x000003E8u; // 800D100C
  goto L_800D1028; // 800D1010
L_800D1014:;
  c->r[0]=R32(c->r[29]+0x000000F8u); // 800D1014
  c->r[3]=0u+0x00000000u; // 800D1018
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D101C
  c->r[4]=divwu(c->r[0],c->r[30]); // 800D1020
  c->lr=0x800D1028u; f_800E8EE8(c); // 800D1024
L_800D1028:;
  c->r[3]=c->r[28]+0x00000EF4u; // 800D1028
  c->r[4]=c->r[31]+0x0000000Du; // 800D102C
  c->lr=0x800D1034u; f_8009D0D0(c); // 800D1030
  cmps(c,0,(int32_t)c->r[3],0); // 800D1034
  if (crb(c,2)) { IRQCHK(c); goto L_800D1014; } // 800D1038
  c->r[3]=c->r[1]+0x00000008u; // 800D103C
  c->lr=0x800D1044u; f_800D10AC(c); // 800D1040
  c->r[3]=c->r[1]+0x00000008u; // 800D1044
  c->lr=0x800D104Cu; f_800D1128(c); // 800D1048
  goto L_800D1070; // 800D104C
L_800D1050:;
  c->r[3]=c->r[28]|c->r[28]; // 800D1050
  c->lr=0x800D1058u; f_80033260(c); // 800D1054
  c->r[3]=c->r[1]+0x00000008u; // 800D1058
  c->lr=0x800D1060u; f_800D125C(c); // 800D105C
  c->r[3]=c->r[28]|c->r[28]; // 800D1060
  c->lr=0x800D1068u; f_80032DE8(c); // 800D1064
  c->r[3]=c->r[28]|c->r[28]; // 800D1068
  c->lr=0x800D1070u; f_800332C4(c); // 800D106C
L_800D1070:;
  c->r[0]=R8(c->r[13]+0xFFFF9509u); // 800D1070
  cmps(c,0,(int32_t)c->r[0],0); // 800D1074
  if (!crb(c,2)) { IRQCHK(c); goto L_800D1050; } // 800D1078
  c->r[4]=0u+0x802B0000u; // 800D107C
  c->r[4]=c->r[4]+0x00001B78u; // 800D1080
  c->r[3]=c->r[4]+0x00000EF4u; // 800D1084
  c->lr=0x800D108Cu; f_80095D48(c); // 800D1088
  c->r[0]=0u+0x00000001u; // 800D108C
  c->r[3]=0u+0x00000000u; // 800D1090
  W8(c->r[13]+0xFFFF8A28u,c->r[0]); // 800D1094
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1098
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D109C
  c->lr=c->r[0]; // 800D10A0
  c->r[1]=c->r[1]+0x00000040u; // 800D10A4
  return; // 800D10A8
}

// fn_800D10AC
void f_800D10AC(Ctx* __restrict c) {
  c->r[5]=0u+0x80280000u; // 800D10AC
  c->r[0]=0u+0x00000000u; // 800D10B0
  c->r[5]=c->r[5]+0x00001C8Cu; // 800D10B4
  c->r[4]=0u+0x0000000Fu; // 800D10B8
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D10BC
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D10C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D10C4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D10C8
  W8(c->r[3]+0x00000010u,c->r[0]); // 800D10CC
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D10D0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D10D4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D10D8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D10DC
  W32(c->r[3]+0x00000024u,c->r[0]); // 800D10E0
  return; // 800D10E4
}

// fn_800D10E8
void f_800D10E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D10E8
  c->r[0]=c->lr; // 800D10EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D10F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D10F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D10F8
  c->r[31]=c->r[3]|c->r[3]; // 800D10FC
  if (crb(c,2)) { goto L_800D1110; } // 800D1100
  cmps(c,0,(int32_t)c->r[4],0); // 800D1104
  if (!crb(c,1)) { goto L_800D1110; } // 800D1108
  c->lr=0x800D1110u; f_8009230C(c); // 800D110C
L_800D1110:;
  c->r[3]=c->r[31]|c->r[31]; // 800D1110
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1114
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1118
  c->lr=c->r[0]; // 800D111C
  c->r[1]=c->r[1]+0x00000010u; // 800D1120
  return; // 800D1124
}

// fn_800D1128
void f_800D1128(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1128
  c->r[0]=c->lr; // 800D112C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1130
  c->r[3]=c->r[1]+0x00000008u; // 800D1134
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D1138
  c->r[31]=0u+0x802B0000u; // 800D113C
  c->r[31]=c->r[31]+0x00001B78u; // 800D1140
  c->lr=0x800D1148u; f_8000C958(c); // 800D1144
  c->lr=0x800D114Cu; f_8013041C(c); // 800D1148
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800D114C
  cmpu(c,0,c->r[0],0x00000006u); // 800D1150
  if (crb(c,1)) { goto L_800D1188; } // 800D1154
  c->r[3]=0u+0x80280000u; // 800D1158
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D115C
  c->r[3]=c->r[3]+0x00001B70u; // 800D1160
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D1164
  c->ctr=c->r[3]; // 800D1168
  if (true) { switch (c->ctr) { case 0x800D1170u: goto L_800D1170; case 0x800D1188u: goto L_800D1188; case 0x800D11A0u: goto L_800D11A0; case 0x800D11B8u: goto L_800D11B8; case 0x800D11D0u: goto L_800D11D0; case 0x800D11E8u: goto L_800D11E8; case 0x800D1200u: goto L_800D1200; default: break; } dispatch(c,c->ctr); return; } // 800D116C
L_800D1170:;
  c->r[4]=0u+0x80260000u; // 800D1170
  c->r[3]=c->r[1]+0x00000008u; // 800D1174
  c->r[4]=c->r[4]+0xFFFFF438u; // 800D1178
  c->r[4]=c->r[4]+0x00000011u; // 800D117C
  c->lr=0x800D1184u; f_80031D3C(c); // 800D1180
  goto L_800D1214; // 800D1184
L_800D1188:;
  c->r[4]=0u+0x80260000u; // 800D1188
  c->r[3]=c->r[1]+0x00000008u; // 800D118C
  c->r[4]=c->r[4]+0xFFFFF438u; // 800D1190
  c->r[4]=c->r[4]+0x00000026u; // 800D1194
  c->lr=0x800D119Cu; f_80031D3C(c); // 800D1198
  goto L_800D1214; // 800D119C
L_800D11A0:;
  c->r[4]=0u+0x80260000u; // 800D11A0
  c->r[3]=c->r[1]+0x00000008u; // 800D11A4
  c->r[4]=c->r[4]+0xFFFFF438u; // 800D11A8
  c->r[4]=c->r[4]+0x0000003Bu; // 800D11AC
  c->lr=0x800D11B4u; f_80031D3C(c); // 800D11B0
  goto L_800D1214; // 800D11B4
L_800D11B8:;
  c->r[4]=0u+0x80260000u; // 800D11B8
  c->r[3]=c->r[1]+0x00000008u; // 800D11BC
  c->r[4]=c->r[4]+0xFFFFF438u; // 800D11C0
  c->r[4]=c->r[4]+0x00000050u; // 800D11C4
  c->lr=0x800D11CCu; f_80031D3C(c); // 800D11C8
  goto L_800D1214; // 800D11CC
L_800D11D0:;
  c->r[4]=0u+0x80260000u; // 800D11D0
  c->r[3]=c->r[1]+0x00000008u; // 800D11D4
  c->r[4]=c->r[4]+0xFFFFF438u; // 800D11D8
  c->r[4]=c->r[4]+0x00000065u; // 800D11DC
  c->lr=0x800D11E4u; f_80031D3C(c); // 800D11E0
  goto L_800D1214; // 800D11E4
L_800D11E8:;
  c->r[4]=0u+0x80260000u; // 800D11E8
  c->r[3]=c->r[1]+0x00000008u; // 800D11EC
  c->r[4]=c->r[4]+0xFFFFF438u; // 800D11F0
  c->r[4]=c->r[4]+0x0000007Au; // 800D11F4
  c->lr=0x800D11FCu; f_80031D3C(c); // 800D11F8
  goto L_800D1214; // 800D11FC
L_800D1200:;
  c->r[4]=0u+0x80260000u; // 800D1200
  c->r[3]=c->r[1]+0x00000008u; // 800D1204
  c->r[4]=c->r[4]+0xFFFFF438u; // 800D1208
  c->r[4]=c->r[4]+0x0000008Fu; // 800D120C
  c->lr=0x800D1214u; f_80031D3C(c); // 800D1210
L_800D1214:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D1214
  c->r[3]=c->r[31]+0x00000EF4u; // 800D1218
  c->r[4]=0u+0x00000008u; // 800D121C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800D1220
  if (!crb(c,2)) { goto L_800D1230; } // 800D1224
  c->r[5]=c->r[1]+0x00000009u; // 800D1228
  goto L_800D1234; // 800D122C
L_800D1230:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 800D1230
L_800D1234:;
  c->lr=0x800D1238u; f_80095A94(c); // 800D1234
  c->r[3]=c->r[1]+0x00000008u; // 800D1238
  c->r[4]=0u+0xFFFFFFFFu; // 800D123C
  c->lr=0x800D1244u; f_8000C978(c); // 800D1240
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D1244
  c->r[3]=0u+0x00000001u; // 800D1248
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D124C
  c->lr=c->r[0]; // 800D1250
  c->r[1]=c->r[1]+0x00000020u; // 800D1254
  return; // 800D1258
}

// fn_800D125C
void f_800D125C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D125C
  c->r[0]=c->lr; // 800D1260
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1264
  c->r[11]=c->r[1]+0x00000020u; // 800D1268
  c->lr=0x800D1270u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D126C
  c->r[4]=0u+0x80000000u; // 800D1270
  c->r[31]=0u+0x802B0000u; // 800D1274
  c->r[0]=R32(c->r[4]+0x000000F8u); // 800D1278
  c->r[4]=0u+0x000003E8u; // 800D127C
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D1280
  c->r[29]=0u+0x00000000u; // 800D1284
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D1288
  c->r[30]=c->r[3]|c->r[3]; // 800D128C
  c->r[5]=divwu(c->r[5],c->r[4]); // 800D1290
  c->r[0]=sraw(c,c->r[6],31); // 800D1294
  c->r[31]=c->r[31]+0x00001B78u; // 800D1298
  c->r[3]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[6])>>32); // 800D129C
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[6]); // 800D12A0
  c->r[3]=c->r[3]+c->r[4]; // 800D12A4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 800D12A8
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800D12AC
  c->r[3]=c->r[3]+c->r[0]; // 800D12B0
  c->lr=0x800D12B8u; f_800E8EE8(c); // 800D12B4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D12B8
  cmpu(c,0,c->r[0],0x0000003Fu); // 800D12BC
  if (crb(c,1)) { goto L_800D1694; } // 800D12C0
  c->r[3]=0u+0x80280000u; // 800D12C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D12C8
  c->r[3]=c->r[3]+0x00001B8Cu; // 800D12CC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D12D0
  c->ctr=c->r[3]; // 800D12D4
  if (true) { switch (c->ctr) { case 0x800D12DCu: goto L_800D12DC; case 0x800D12E8u: goto L_800D12E8; case 0x800D1318u: goto L_800D1318; case 0x800D1380u: goto L_800D1380; case 0x800D140Cu: goto L_800D140C; case 0x800D1464u: goto L_800D1464; case 0x800D14C4u: goto L_800D14C4; case 0x800D14E0u: goto L_800D14E0; case 0x800D150Cu: goto L_800D150C; case 0x800D1578u: goto L_800D1578; case 0x800D15B4u: goto L_800D15B4; case 0x800D15E4u: goto L_800D15E4; case 0x800D1614u: goto L_800D1614; case 0x800D163Cu: goto L_800D163C; case 0x800D166Cu: goto L_800D166C; case 0x800D1694u: goto L_800D1694; default: break; } dispatch(c,c->ctr); return; } // 800D12D8
L_800D12DC:;
  c->r[0]=0u+0x0000000Au; // 800D12DC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D12E0
  goto L_800D1694; // 800D12E4
L_800D12E8:;
  c->r[0]=0u+0x0000000Fu; // 800D12E8
  c->r[3]=c->r[31]+0x00000EF4u; // 800D12EC
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D12F0
  c->r[4]=0u+0x00000001u; // 800D12F4
  c->r[5]=0u+0x00000000u; // 800D12F8
  c->lr=0x800D1300u; f_8009C560(c); // 800D12FC
  {uint32_t ea=c->r[2]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1300
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D1304
  c->lr=0x800D130Cu; f_800CA3A0(c); // 800D1308
  c->r[0]=0u+0x00000014u; // 800D130C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1310
  goto L_800D1694; // 800D1314
L_800D1318:;
  c->r[3]=c->r[30]|c->r[30]; // 800D1318
  c->lr=0x800D1320u; f_800D16AC(c); // 800D131C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1320
  if (crb(c,2)) { goto L_800D1334; } // 800D1324
  c->r[0]=0u+0x00000028u; // 800D1328
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D132C
  goto L_800D1694; // 800D1330
L_800D1334:;
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D1334
  c->lr=0x800D133Cu; f_800CA420(c); // 800D1338
  cmps(c,0,(int32_t)c->r[3],0); // 800D133C
  if (!crb(c,2)) { goto L_800D1694; } // 800D1340
  c->r[3]=c->r[31]+0x00000EF4u; // 800D1344
  c->r[4]=0u+0x00000001u; // 800D1348
  c->r[5]=0u+0x00000000u; // 800D134C
  c->lr=0x800D1354u; f_8009C560(c); // 800D1350
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1354
  {uint32_t ea=c->r[2]+0xFFFF8A6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D1358
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D135C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D1360
  c->r[0]=c->r[3]+0x00000001u; // 800D1364
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1368
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D136C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800D1370
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D1374
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D1378
  goto L_800D1694; // 800D137C
L_800D1380:;
  c->r[3]=c->r[30]|c->r[30]; // 800D1380
  c->lr=0x800D1388u; f_800D16AC(c); // 800D1384
  cmps(c,0,(int32_t)c->r[3],0); // 800D1388
  if (crb(c,2)) { goto L_800D139C; } // 800D138C
  c->r[0]=0u+0x00000028u; // 800D1390
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1394
  goto L_800D1694; // 800D1398
L_800D139C:;
  c->r[0]=R8(c->r[30]+0x00000010u); // 800D139C
  cmps(c,0,(int32_t)c->r[0],0); // 800D13A0
  if (!crb(c,2)) { goto L_800D13E8; } // 800D13A4
  c->r[3]=R32(c->r[30]+0x00000008u); // 800D13A8
  c->r[0]=0u+0x43300000u; // 800D13AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D13B0
  c->r[0]=c->r[3]^0x80000000u; // 800D13B4
  {uint32_t ea=c->r[2]+0xFFFF8A80u; c->f[2]=RF64(ea);} // 800D13B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D13BC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D13C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D13C4
  {uint32_t ea=c->r[2]+0xFFFF8A6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D13C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D13CC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[3],-c->f[1])); // 800D13D0
  fcmp(c,0,c->f[3],c->f[0]); // 800D13D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D13D8
  if (!crb(c,2)) { goto L_800D13E8; } // 800D13DC
  c->r[0]=0u+0x00000001u; // 800D13E0
  W8(c->r[30]+0x00000010u,c->r[0]); // 800D13E4
L_800D13E8:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800D13E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D13EC
  if (!crb(c,1)) { goto L_800D1400; } // 800D13F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D13F4
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D13F8
  goto L_800D1694; // 800D13FC
L_800D1400:;
  c->r[0]=0u+0x0000001Eu; // 800D1400
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1404
  goto L_800D1694; // 800D1408
L_800D140C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D140C
  c->lr=0x800D1414u; f_800D16AC(c); // 800D1410
  cmps(c,0,(int32_t)c->r[3],0); // 800D1414
  if (crb(c,2)) { goto L_800D1428; } // 800D1418
  c->r[0]=0u+0x00000028u; // 800D141C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1420
  goto L_800D1694; // 800D1424
L_800D1428:;
  c->r[3]=c->r[31]+0x00000EF4u; // 800D1428
  c->r[4]=0u+0x00000001u; // 800D142C
  c->r[5]=0u+0x00000001u; // 800D1430
  c->lr=0x800D1438u; f_8009C560(c); // 800D1434
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1438
  {uint32_t ea=c->r[2]+0xFFFF8A6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D143C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D1440
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D1444
  c->r[0]=c->r[3]+0x00000001u; // 800D1448
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D144C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D1450
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800D1454
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D1458
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D145C
  goto L_800D1694; // 800D1460
L_800D1464:;
  c->r[3]=c->r[30]|c->r[30]; // 800D1464
  c->lr=0x800D146Cu; f_800D16AC(c); // 800D1468
  cmps(c,0,(int32_t)c->r[3],0); // 800D146C
  if (crb(c,2)) { goto L_800D1480; } // 800D1470
  c->r[0]=0u+0x00000028u; // 800D1474
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1478
  goto L_800D1694; // 800D147C
L_800D1480:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800D1480
  cmps(c,0,(int32_t)c->r[3],0); // 800D1484
  if (!crb(c,1)) { goto L_800D1498; } // 800D1488
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D148C
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D1490
  goto L_800D1694; // 800D1494
L_800D1498:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800D1498
  c->r[0]=c->r[3]+0x00000001u; // 800D149C
  cmps(c,0,(int32_t)c->r[0],2); // 800D14A0
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D14A4
  if (crb(c,0)) { goto L_800D14B8; } // 800D14A8
  c->r[0]=0u+0x00000028u; // 800D14AC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D14B0
  goto L_800D1694; // 800D14B4
L_800D14B8:;
  c->r[0]=0u+0x00000014u; // 800D14B8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D14BC
  goto L_800D1694; // 800D14C0
L_800D14C4:;
  {uint32_t ea=c->r[2]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D14C4
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D14C8
  c->lr=0x800D14D0u; f_800CA36C(c); // 800D14CC
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D14D0
  c->r[0]=c->r[3]+0x00000001u; // 800D14D4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D14D8
  goto L_800D1694; // 800D14DC
L_800D14E0:;
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D14E0
  c->lr=0x800D14E8u; f_800CA420(c); // 800D14E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D14E8
  if (!crb(c,2)) { goto L_800D1694; } // 800D14EC
  c->r[3]=c->r[31]+0x00000EF4u; // 800D14F0
  c->r[4]=0u+0x00000000u; // 800D14F4
  c->r[5]=0u+0x00000000u; // 800D14F8
  c->lr=0x800D1500u; f_8009C560(c); // 800D14FC
  c->r[0]=0u+0x00000032u; // 800D1500
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1504
  goto L_800D1694; // 800D1508
L_800D150C:;
  c->r[0]=0u+0x0000000Fu; // 800D150C
  c->r[4]=0u+0x80260000u; // 800D1510
  c->r[4]=c->r[4]+0xFFFFF438u; // 800D1514
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D1518
  c->r[3]=c->r[31]+0x00000EF4u; // 800D151C
  c->r[4]=c->r[4]+0x000000A4u; // 800D1520
  c->lr=0x800D1528u; f_80098278(c); // 800D1524
  W32(c->r[30]+0x00000024u,c->r[3]); // 800D1528
  c->r[4]=c->r[3]|c->r[3]; // 800D152C
  c->r[3]=c->r[31]+0x00000EF4u; // 800D1530
  c->r[5]=0u+0x000000FFu; // 800D1534
  c->lr=0x800D153Cu; f_80098B5C(c); // 800D1538
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D153C
  c->r[3]=c->r[31]+0x00000EF4u; // 800D1540
  {uint32_t ea=c->r[2]+0xFFFF8A70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1544
  c->lr=0x800D154Cu; f_80098944(c); // 800D1548
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D154C
  c->r[3]=c->r[31]+0x00000EF4u; // 800D1550
  {uint32_t ea=c->r[2]+0xFFFF8A74u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1554
  c->lr=0x800D155Cu; f_80098980(c); // 800D1558
  {uint32_t ea=c->r[2]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D155C
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D1560
  c->lr=0x800D1568u; f_800CA3A0(c); // 800D1564
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D1568
  c->r[0]=c->r[3]+0x00000001u; // 800D156C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1570
  goto L_800D1694; // 800D1574
L_800D1578:;
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D1578
  c->lr=0x800D1580u; f_800CA420(c); // 800D157C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1580
  if (!crb(c,2)) { goto L_800D1694; } // 800D1584
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1588
  {uint32_t ea=c->r[2]+0xFFFF8A78u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D158C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D1590
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D1594
  c->r[0]=c->r[3]+0x00000001u; // 800D1598
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D159C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D15A0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800D15A4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D15A8
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D15AC
  goto L_800D1694; // 800D15B0
L_800D15B4:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800D15B4
  cmps(c,0,(int32_t)c->r[3],0); // 800D15B8
  if (!crb(c,1)) { goto L_800D15CC; } // 800D15BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D15C0
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D15C4
  goto L_800D1694; // 800D15C8
L_800D15CC:;
  {uint32_t ea=c->r[2]+0xFFFF8A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D15CC
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D15D0
  c->lr=0x800D15D8u; f_800CA36C(c); // 800D15D4
  c->r[0]=0u+0x0000003Cu; // 800D15D8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D15DC
  goto L_800D1694; // 800D15E0
L_800D15E4:;
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D15E4
  c->lr=0x800D15ECu; f_800CA420(c); // 800D15E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D15EC
  if (!crb(c,2)) { goto L_800D1694; } // 800D15F0
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D15F4
  c->r[3]=c->r[31]+0x00000EF4u; // 800D15F8
  c->lr=0x800D1600u; f_800972E8(c); // 800D15FC
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D1600
  W32(c->r[30]+0x00000024u,c->r[29]); // 800D1604
  c->r[0]=c->r[3]+0x00000001u; // 800D1608
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D160C
  goto L_800D1694; // 800D1610
L_800D1614:;
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D1614
  c->lr=0x800D161Cu; f_800CA420(c); // 800D1618
  cmps(c,0,(int32_t)c->r[3],0); // 800D161C
  if (!crb(c,2)) { goto L_800D1694; } // 800D1620
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D1624
  c->r[0]=0u+0x00000258u; // 800D1628
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D162C
  c->r[0]=c->r[3]+0x00000001u; // 800D1630
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1634
  goto L_800D1694; // 800D1638
L_800D163C:;
  c->r[0]=R8(c->r[13]+0xFFFF9508u); // 800D163C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1640
  if (!crb(c,2)) { goto L_800D1694; } // 800D1644
  c->r[0]=0u+0x0000000Fu; // 800D1648
  {uint32_t ea=c->r[2]+0xFFFF8A7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D164C
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D1650
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D1654
  c->lr=0x800D165Cu; f_800CA36C(c); // 800D1658
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D165C
  c->r[0]=c->r[3]+0x00000001u; // 800D1660
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1664
  goto L_800D1694; // 800D1668
L_800D166C:;
  c->r[3]=c->r[31]+0x00006B7Cu; // 800D166C
  c->lr=0x800D1674u; f_800CA420(c); // 800D1670
  cmps(c,0,(int32_t)c->r[3],0); // 800D1674
  if (!crb(c,2)) { goto L_800D1694; } // 800D1678
  c->r[3]=c->r[31]+0x00006B98u; // 800D167C
  c->lr=0x800D1684u; f_800CA344(c); // 800D1680
  W8(c->r[13]+0xFFFF9509u,c->r[29]); // 800D1684
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D1688
  c->r[0]=c->r[3]+0x00000001u; // 800D168C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D1690
L_800D1694:;
  c->r[11]=c->r[1]+0x00000020u; // 800D1694
  c->lr=0x800D169Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D1698
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D169C
  c->lr=c->r[0]; // 800D16A0
  c->r[1]=c->r[1]+0x00000020u; // 800D16A4
  return; // 800D16A8
}

// fn_800D16AC
void f_800D16AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D16AC
  c->r[0]=c->lr; // 800D16B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D16B4
  c->r[0]=R8(c->r[3]+0x00000010u); // 800D16B8
  cmps(c,0,(int32_t)c->r[0],0); // 800D16BC
  if (crb(c,2)) { goto L_800D16EC; } // 800D16C0
  c->r[3]=0u+0x802B0000u; // 800D16C4
  c->r[3]=c->r[3]+0x00001B78u; // 800D16C8
  {uint32_t ea=c->r[3]+0x000013FCu; c->r[12]=R32(ea); c->r[3]=ea;} // 800D16CC
  c->r[12]=R32(c->r[12]+0x00000024u); // 800D16D0
  c->ctr=c->r[12]; // 800D16D4
  if (true) { c->lr=0x800D16DCu; dispatch(c,c->ctr); } // 800D16D8
  c->r[0]=rotl(c->r[3],0)&0xFFFBFFFFu; cr0(c,c->r[0]); // 800D16DC
  if (crb(c,2)) { goto L_800D16EC; } // 800D16E0
  c->r[3]=0u+0x00000001u; // 800D16E4
  goto L_800D16F0; // 800D16E8
L_800D16EC:;
  c->r[3]=0u+0x00000000u; // 800D16EC
L_800D16F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D16F0
  c->lr=c->r[0]; // 800D16F4
  c->r[1]=c->r[1]+0x00000010u; // 800D16F8
  return; // 800D16FC
}

// fn_800D1700
void f_800D1700(Ctx* __restrict c) {
  c->r[3]=0u+0x802E0000u; // 800D1700
  c->r[3]=c->r[3]+0xFFFF8810u; // 800D1704
  f_800CFC78(c); return; // 800D1708
}

// fn_800D170C
void f_800D170C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800D170C
  return; // 800D1710
}

// fn_800D1714
void f_800D1714(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1714
  c->r[0]=c->lr; // 800D1718
  cmps(c,0,(int32_t)c->r[3],0); // 800D171C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1720
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1724
  c->r[31]=c->r[3]|c->r[3]; // 800D1728
  if (crb(c,2)) { goto L_800D173C; } // 800D172C
  cmps(c,0,(int32_t)c->r[4],0); // 800D1730
  if (!crb(c,1)) { goto L_800D173C; } // 800D1734
  c->lr=0x800D173Cu; f_8009230C(c); // 800D1738
L_800D173C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D173C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1740
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1744
  c->lr=c->r[0]; // 800D1748
  c->r[1]=c->r[1]+0x00000010u; // 800D174C
  return; // 800D1750
}

// fn_800D1754
void f_800D1754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFE3B0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1754
  c->r[0]=c->lr; // 800D1758
  c->r[4]=0u+0x802E0000u; // 800D175C
  W32(c->r[1]+0x00001C54u,c->r[0]); // 800D1760
  c->r[4]=c->r[4]+0xFFFF877Cu; // 800D1764
  {uint32_t ea=c->r[1]+0x00001C20u; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1768
  c->r[26]=c->r[3]|c->r[3]; // 800D176C
  c->r[27]=c->r[5]|c->r[5]; // 800D1770
  c->r[24]=0u+0x80260000u; // 800D1774
  c->r[28]=c->r[6]|c->r[6]; // 800D1778
  c->r[5]=0u+0x00000020u; // 800D177C
  c->r[6]=c->r[24]+0xFFFFF52Cu; // 800D1780
  c->r[3]=c->r[3]+0x00000004u; // 800D1784
  c->lr=0x800D178Cu; f_800917C4(c); // 800D1788
  c->lr=0x800D1790u; f_8004328C(c); // 800D178C
  c->r[29]=c->r[3]|c->r[3]; // 800D1790
  c->r[4]=c->r[26]+0x000000A0u; // 800D1794
  c->r[5]=c->r[26]+0x00000004u; // 800D1798
  c->r[3]=0u+0x00000004u; // 800D179C
  c->lr=0x800D17A4u; f_801FEFE8(c); // 800D17A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D17A4
  c->r[4]=c->r[3]|c->r[3]; // 800D17A8
  if (crb(c,2)) { goto L_800D17E8; } // 800D17AC
  c->r[3]=c->r[29]|c->r[29]; // 800D17B0
  c->r[5]=0u+0x00000004u; // 800D17B4
  c->r[6]=0u+0x00000000u; // 800D17B8
  c->lr=0x800D17C0u; f_80045120(c); // 800D17BC
  c->r[5]=c->r[24]+0xFFFFF52Cu; // 800D17C0
  c->r[4]=0u+0x0000011Au; // 800D17C4
  c->r[3]=c->r[5]+0x00000001u; // 800D17C8
  c->r[5]=c->r[5]+0x00000016u; // 800D17CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D17D0
  c->lr=0x800D17D8u; f_800E1288(c); // 800D17D4
  c->r[3]=c->r[26]|c->r[26]; // 800D17D8
  c->lr=0x800D17E0u; f_800D1BDC(c); // 800D17DC
  c->r[3]=0u+0x00000000u; // 800D17E0
  goto L_800D1BC8; // 800D17E4
L_800D17E8:;
  c->r[4]=c->r[26]+0x000000C8u; // 800D17E8
  c->r[5]=c->r[26]+0x00000004u; // 800D17EC
  c->r[3]=0u+0x00000007u; // 800D17F0
  c->lr=0x800D17F8u; f_801FEFE8(c); // 800D17F4
  cmps(c,0,(int32_t)c->r[3],0); // 800D17F8
  c->r[4]=c->r[3]|c->r[3]; // 800D17FC
  if (crb(c,2)) { goto L_800D183C; } // 800D1800
  c->r[3]=c->r[29]|c->r[29]; // 800D1804
  c->r[5]=0u+0x00000007u; // 800D1808
  c->r[6]=0u+0x00000000u; // 800D180C
  c->lr=0x800D1814u; f_80045120(c); // 800D1810
  c->r[5]=c->r[24]+0xFFFFF52Cu; // 800D1814
  c->r[4]=0u+0x00000125u; // 800D1818
  c->r[3]=c->r[5]+0x00000001u; // 800D181C
  c->r[5]=c->r[5]+0x0000003Du; // 800D1820
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1824
  c->lr=0x800D182Cu; f_800E1288(c); // 800D1828
  c->r[3]=c->r[26]|c->r[26]; // 800D182C
  c->lr=0x800D1834u; f_800D1BDC(c); // 800D1830
  c->r[3]=0u+0x00000000u; // 800D1834
  goto L_800D1BC8; // 800D1838
L_800D183C:;
  c->r[4]=c->r[26]+0x00000078u; // 800D183C
  c->r[5]=c->r[26]+0x00000004u; // 800D1840
  c->r[3]=0u+0x00000005u; // 800D1844
  c->lr=0x800D184Cu; f_801FEFE8(c); // 800D1848
  cmps(c,0,(int32_t)c->r[3],0); // 800D184C
  c->r[4]=c->r[3]|c->r[3]; // 800D1850
  if (crb(c,2)) { goto L_800D1890; } // 800D1854
  c->r[3]=c->r[29]|c->r[29]; // 800D1858
  c->r[5]=0u+0x00000005u; // 800D185C
  c->r[6]=0u+0x00000000u; // 800D1860
  c->lr=0x800D1868u; f_80045120(c); // 800D1864
  c->r[5]=c->r[24]+0xFFFFF52Cu; // 800D1868
  c->r[4]=0u+0x00000130u; // 800D186C
  c->r[3]=c->r[5]+0x00000001u; // 800D1870
  c->r[5]=c->r[5]+0x00000068u; // 800D1874
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1878
  c->lr=0x800D1880u; f_800E1288(c); // 800D187C
  c->r[3]=c->r[26]|c->r[26]; // 800D1880
  c->lr=0x800D1888u; f_800D1BDC(c); // 800D1884
  c->r[3]=0u+0x00000000u; // 800D1888
  goto L_800D1BC8; // 800D188C
L_800D1890:;
  c->r[4]=c->r[26]+0x000000F0u; // 800D1890
  c->r[5]=c->r[26]+0x00000004u; // 800D1894
  c->r[3]=0u+0x00000006u; // 800D1898
  c->lr=0x800D18A0u; f_801FEFE8(c); // 800D189C
  cmps(c,0,(int32_t)c->r[3],0); // 800D18A0
  c->r[4]=c->r[3]|c->r[3]; // 800D18A4
  if (crb(c,2)) { goto L_800D18E4; } // 800D18A8
  c->r[3]=c->r[29]|c->r[29]; // 800D18AC
  c->r[5]=0u+0x00000006u; // 800D18B0
  c->r[6]=0u+0x00000000u; // 800D18B4
  c->lr=0x800D18BCu; f_80045120(c); // 800D18B8
  c->r[5]=c->r[24]+0xFFFFF52Cu; // 800D18BC
  c->r[4]=0u+0x0000013Bu; // 800D18C0
  c->r[3]=c->r[5]+0x00000001u; // 800D18C4
  c->r[5]=c->r[5]+0x00000095u; // 800D18C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D18CC
  c->lr=0x800D18D4u; f_800E1288(c); // 800D18D0
  c->r[3]=c->r[26]|c->r[26]; // 800D18D4
  c->lr=0x800D18DCu; f_800D1BDC(c); // 800D18D8
  c->r[3]=0u+0x00000000u; // 800D18DC
  goto L_800D1BC8; // 800D18E0
L_800D18E4:;
  c->r[3]=c->r[26]|c->r[26]; // 800D18E4
  c->r[4]=c->r[26]+0x00000038u; // 800D18E8
  c->lr=0x800D18F0u; f_800D29DC(c); // 800D18EC
  c->r[3]=0u+0x00000040u; // 800D18F0
  c->r[4]=0u+0x00000001u; // 800D18F4
  c->lr=0x800D18FCu; f_800922B4(c); // 800D18F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D18FC
  W32(c->r[26]+0x00000014u,c->r[3]); // 800D1900
  if (!crb(c,2)) { goto L_800D1918; } // 800D1904
  c->r[3]=c->r[26]|c->r[26]; // 800D1908
  c->lr=0x800D1910u; f_800D1BDC(c); // 800D190C
  c->r[3]=0u+0x00000000u; // 800D1910
  goto L_800D1BC8; // 800D1914
L_800D1918:;
  c->r[4]=0u+0x00000000u; // 800D1918
  c->r[5]=0u+0x00000040u; // 800D191C
  c->lr=0x800D1924u; f_8000443C(c); // 800D1920
  c->r[24]=c->r[24]+0xFFFFF52Cu; // 800D1924
  c->r[3]=c->r[1]+0x00000010u; // 800D1928
  c->r[31]=c->r[24]+0x000000C3u; // 800D192C
  c->lr=0x800D1934u; f_8000C958(c); // 800D1930
  c->r[3]=c->r[31]|c->r[31]; // 800D1934
  c->lr=0x800D193Cu; f_80109598(c); // 800D1938
  c->r[4]=0u+0x80000000u; // 800D193C
  c->r[30]=c->r[3]|c->r[3]; // 800D1940
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800D1944
  cmpu(c,0,c->r[3],c->r[0]); // 800D1948
  c->r[20]=c->r[30]|c->r[30]; // 800D194C
  if (!crb(c,1)) { goto L_800D1970; } // 800D1950
  c->r[3]=0u+0x80290000u; // 800D1954
  c->r[4]=c->r[24]+0x000000CEu; // 800D1958
  c->r[3]=c->r[3]+0x00006280u; // 800D195C
  c->r[3]=c->r[3]+0x000000A0u; // 800D1960
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D1964
  c->lr=0x800D196Cu; f_801126E0(c); // 800D1968
  c->lr=0x800D1970u; f_80116998(c); // 800D196C
L_800D1970:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 800D1970
  c->r[24]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[24]); // 800D1974
  if (!crb(c,2)) { goto L_800D198C; } // 800D1978
  c->r[0]=R8(c->r[1]+0x00000010u); // 800D197C
  c->r[3]=0u+0x0000000Bu; // 800D1980
  c->r[23]=rotl(c->r[0],0)&0x0000007Fu; // 800D1984
  goto L_800D1994; // 800D1988
L_800D198C:;
  c->r[23]=R32(c->r[1]+0x00000014u); // 800D198C
  c->r[3]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D1990
L_800D1994:;
  cmpu(c,0,c->r[30],c->r[23]); // 800D1994
  if (!crb(c,0)) { goto L_800D19A0; } // 800D1998
  c->r[20]=c->r[23]|c->r[23]; // 800D199C
L_800D19A0:;
  c->r[0]=c->r[20]+0x00000001u; // 800D19A0
  c->r[25]=0u+0x0000000Bu; // 800D19A4
  cmpu(c,0,c->r[0],0x0000000Bu); // 800D19A8
  if (!crb(c,1)) { goto L_800D19B8; } // 800D19AC
  c->r[0]=c->r[20]+0x00000010u; // 800D19B0
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFF0u; // 800D19B4
L_800D19B8:;
  cmpu(c,1,c->r[25],c->r[3]); // 800D19B8
  if (crb(c,6)) { goto L_800D1A84; } // 800D19BC
  cmpu(c,0,c->r[25],0x0000000Bu); // 800D19C0
  if (!crb(c,2)) { goto L_800D19D8; } // 800D19C4
  c->r[21]=R32(c->r[1]+0x00000018u); // 800D19C8
  c->r[22]=c->r[1]+0x00000011u; // 800D19CC
  c->r[20]=0u+0x00000000u; // 800D19D0
  goto L_800D1A28; // 800D19D4
L_800D19D8:;
  if (!crb(c,5)) { goto L_800D19F4; } // 800D19D8
  c->r[4]=c->r[25]|c->r[25]; // 800D19DC
  c->r[3]=c->r[1]+0x00000010u; // 800D19E0
  c->r[5]=0u+0x00000000u; // 800D19E4
  c->lr=0x800D19ECu; f_8000CC7C(c); // 800D19E8
  c->r[22]=c->r[3]|c->r[3]; // 800D19EC
  goto L_800D1A10; // 800D19F0
L_800D19F4:;
  c->r[4]=c->r[25]|c->r[25]; // 800D19F4
  c->r[3]=c->r[1]+0x00000010u; // 800D19F8
  c->r[5]=0u+0x00000000u; // 800D19FC
  c->lr=0x800D1A04u; f_8000CC7C(c); // 800D1A00
  cmps(c,0,(int32_t)c->r[3],0); // 800D1A04
  c->r[22]=c->r[3]|c->r[3]; // 800D1A08
  if (crb(c,2)) { goto L_800D1A84; } // 800D1A0C
L_800D1A10:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D1A10
  c->r[20]=0u+0x00000001u; // 800D1A14
  if (crb(c,2)) { goto L_800D1A24; } // 800D1A18
  c->r[21]=R32(c->r[1]+0x00000018u); // 800D1A1C
  goto L_800D1A28; // 800D1A20
L_800D1A24:;
  c->r[21]=c->r[1]+0x00000011u; // 800D1A24
L_800D1A28:;
  c->r[3]=c->r[22]|c->r[22]; // 800D1A28
  c->r[4]=c->r[21]|c->r[21]; // 800D1A2C
  c->r[5]=c->r[23]|c->r[23]; // 800D1A30
  c->lr=0x800D1A38u; f_8011007C(c); // 800D1A34
  c->r[0]=0u+0x00000000u; // 800D1A38
  cmps(c,0,(int32_t)c->r[24],0); // 800D1A3C
  W8(c->r[22]+c->r[23],c->r[0]); // 800D1A40
  if (crb(c,2)) { goto L_800D1A50; } // 800D1A44
  c->r[3]=c->r[21]|c->r[21]; // 800D1A48
  c->lr=0x800D1A50u; f_8009230C(c); // 800D1A4C
L_800D1A50:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 800D1A50
  c->r[0]=(rotl(c->r[20],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800D1A54
  cmps(c,0,(int32_t)c->r[20],0); // 800D1A58
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D1A5C
  if (!crb(c,2)) { goto L_800D1A74; } // 800D1A60
  c->r[0]=R8(c->r[1]+0x00000010u); // 800D1A64
  c->r[0]=(rotl(c->r[23],0)&0x0000007Fu)|(c->r[0]&~0x0000007Fu); // 800D1A68
  W8(c->r[1]+0x00000010u,c->r[0]); // 800D1A6C
  goto L_800D1A84; // 800D1A70
L_800D1A74:;
  c->r[0]=(rotl(c->r[25],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 800D1A74
  W32(c->r[1]+0x00000018u,c->r[22]); // 800D1A78
  W32(c->r[1]+0x00000014u,c->r[23]); // 800D1A7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D1A80
L_800D1A84:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 800D1A84
  c->r[6]=c->r[31]|c->r[31]; // 800D1A88
  c->r[3]=c->r[1]+0x00000010u; // 800D1A8C
  c->r[7]=c->r[31]+c->r[30]; // 800D1A90
  W8(c->r[1]+0x00000008u,c->r[0]); // 800D1A94
  c->r[8]=c->r[1]+0x00000008u; // 800D1A98
  c->r[4]=0u+0x00000000u; // 800D1A9C
  c->r[5]=0u+0x00000000u; // 800D1AA0
  c->lr=0x800D1AA8u; f_8000C9D4(c); // 800D1AA4
  c->r[3]=c->r[29]|c->r[29]; // 800D1AA8
  c->r[4]=c->r[1]+0x00000010u; // 800D1AAC
  c->r[5]=0u+0x00000001u; // 800D1AB0
  c->r[6]=0u+0x00000000u; // 800D1AB4
  c->lr=0x800D1ABCu; f_800439C0(c); // 800D1AB8
  c->r[20]=c->r[3]|c->r[3]; // 800D1ABC
  c->r[3]=c->r[1]+0x00000010u; // 800D1AC0
  c->r[4]=0u+0xFFFFFFFFu; // 800D1AC4
  c->lr=0x800D1ACCu; f_8000C978(c); // 800D1AC8
  c->r[0]=0u+0x00000000u; // 800D1ACC
  c->r[3]=c->r[29]|c->r[29]; // 800D1AD0
  W32(c->r[26]+0x00000020u,c->r[0]); // 800D1AD4
  c->r[4]=c->r[20]|c->r[20]; // 800D1AD8
  W32(c->r[26]+0x00000024u,c->r[0]); // 800D1ADC
  c->lr=0x800D1AE4u; f_80044D50(c); // 800D1AE0
  c->r[21]=c->r[3]|c->r[3]; // 800D1AE4
  c->r[3]=c->r[29]|c->r[29]; // 800D1AE8
  c->r[4]=c->r[20]|c->r[20]; // 800D1AEC
  c->lr=0x800D1AF4u; f_80044F14(c); // 800D1AF0
  c->r[22]=c->r[3]|c->r[3]; // 800D1AF4
  c->r[7]=c->r[21]|c->r[21]; // 800D1AF8
  c->r[8]=c->r[22]|c->r[22]; // 800D1AFC
  c->r[3]=c->r[1]+0x0000001Cu; // 800D1B00
  c->r[4]=c->r[1]+0x0000000Cu; // 800D1B04
  c->r[5]=c->r[26]+0x00000030u; // 800D1B08
  c->r[6]=c->r[26]+0x00000032u; // 800D1B0C
  c->r[9]=0u+0x00000004u; // 800D1B10
  c->lr=0x800D1B18u; f_80230358(c); // 800D1B14
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D1B18
  c->r[4]=0u+0x00000020u; // 800D1B1C
  c->r[5]=0u+0x00000001u; // 800D1B20
  c->lr=0x800D1B28u; f_8009210C(c); // 800D1B24
  W32(c->r[26]+0x00000028u,c->r[3]); // 800D1B28
  c->r[4]=c->r[3]|c->r[3]; // 800D1B2C
  c->r[6]=c->r[21]|c->r[21]; // 800D1B30
  c->r[7]=c->r[22]|c->r[22]; // 800D1B34
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D1B38
  c->r[3]=c->r[1]+0x0000001Cu; // 800D1B3C
  c->r[8]=0u+0x00000004u; // 800D1B40
  c->lr=0x800D1B48u; f_8023035C(c); // 800D1B44
  c->r[3]=c->r[29]|c->r[29]; // 800D1B48
  c->r[4]=c->r[20]|c->r[20]; // 800D1B4C
  c->lr=0x800D1B54u; f_80044994(c); // 800D1B50
  c->r[0]=0u+0x00000004u; // 800D1B54
  c->r[4]=R32(c->r[26]+0x00000014u); // 800D1B58
  W32(c->r[26]+0x00000034u,c->r[0]); // 800D1B5C
  c->r[3]=c->r[26]|c->r[26]; // 800D1B60
  c->r[5]=c->r[26]+0x00000020u; // 800D1B64
  c->lr=0x800D1B6Cu; f_800D227C(c); // 800D1B68
  cmps(c,0,(int32_t)c->r[3],0); // 800D1B6C
  if (!crb(c,2)) { goto L_800D1B84; } // 800D1B70
  c->r[3]=c->r[26]|c->r[26]; // 800D1B74
  c->lr=0x800D1B7Cu; f_800D1BDC(c); // 800D1B78
  c->r[3]=0u+0x00000000u; // 800D1B7C
  goto L_800D1BC8; // 800D1B80
L_800D1B84:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 800D1B84
  c->r[3]=c->r[26]|c->r[26]; // 800D1B88
  c->r[5]=c->r[27]|c->r[27]; // 800D1B8C
  c->r[6]=c->r[28]|c->r[28]; // 800D1B90
  c->lr=0x800D1B98u; f_800D2A68(c); // 800D1B94
  c->r[3]=R32(c->r[26]+0x00000014u); // 800D1B98
  c->lr=0x800D1BA0u; f_80230004(c); // 800D1B9C
  c->r[3]=c->r[26]+0x00000020u; // 800D1BA0
  c->lr=0x800D1BA8u; f_80230324(c); // 800D1BA4
  c->lr=0x800D1BACu; f_8023019C(c); // 800D1BA8
  c->r[3]=0u+0x00000001u; // 800D1BAC
  c->lr=0x800D1BB4u; f_80230250(c); // 800D1BB0
  c->r[3]=c->r[26]|c->r[26]; // 800D1BB4
  c->lr=0x800D1BBCu; f_800D2930(c); // 800D1BB8
  c->r[0]=0u+0x00000001u; // 800D1BBC
  c->r[3]=0u+0x00000001u; // 800D1BC0
  W8(c->r[26]+0x00000000u,c->r[0]); // 800D1BC4
L_800D1BC8:;
  {uint32_t ea=c->r[1]+0x00001C20u; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1BC8
  c->r[0]=R32(c->r[1]+0x00001C54u); // 800D1BCC
  c->lr=c->r[0]; // 800D1BD0
  c->r[1]=c->r[1]+0x00001C50u; // 800D1BD4
  return; // 800D1BD8
}

// fn_800D1BDC
void f_800D1BDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1BDC
  c->r[0]=c->lr; // 800D1BE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1BE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1BE8
  c->r[31]=c->r[3]|c->r[3]; // 800D1BEC
  c->lr=0x800D1BF4u; f_8023012C(c); // 800D1BF0
  c->lr=0x800D1BF8u; f_802302FC(c); // 800D1BF4
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 800D1BF8
  cmps(c,0,(int32_t)c->r[3],0); // 800D1BFC
  if (crb(c,2)) { goto L_800D1C10; } // 800D1C00
  c->lr=0x800D1C08u; f_8009227C(c); // 800D1C04
  c->r[0]=0u+0x00000000u; // 800D1C08
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D1C0C
L_800D1C10:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 800D1C10
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C14
  if (crb(c,2)) { goto L_800D1C28; } // 800D1C18
  c->lr=0x800D1C20u; f_8009227C(c); // 800D1C1C
  c->r[0]=0u+0x00000000u; // 800D1C20
  W32(c->r[31]+0x00000028u,c->r[0]); // 800D1C24
L_800D1C28:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 800D1C28
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C2C
  if (crb(c,2)) { goto L_800D1C40; } // 800D1C30
  c->lr=0x800D1C38u; f_8009227C(c); // 800D1C34
  c->r[0]=0u+0x00000000u; // 800D1C38
  W32(c->r[31]+0x00000020u,c->r[0]); // 800D1C3C
L_800D1C40:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 800D1C40
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C44
  if (crb(c,2)) { goto L_800D1C58; } // 800D1C48
  c->lr=0x800D1C50u; f_8009227C(c); // 800D1C4C
  c->r[0]=0u+0x00000000u; // 800D1C50
  W32(c->r[31]+0x00000024u,c->r[0]); // 800D1C54
L_800D1C58:;
  c->r[3]=R32(c->r[31]+0x00000118u); // 800D1C58
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C5C
  if (crb(c,2)) { goto L_800D1C70; } // 800D1C60
  c->lr=0x800D1C68u; f_8009227C(c); // 800D1C64
  c->r[0]=0u+0x00000000u; // 800D1C68
  W32(c->r[31]+0x00000118u,c->r[0]); // 800D1C6C
L_800D1C70:;
  c->r[30]=0u+0x00000000u; // 800D1C70
  c->r[3]=c->r[31]+0x000000A0u; // 800D1C74
  W8(c->r[31]+0x00000000u,c->r[30]); // 800D1C78
  c->lr=0x800D1C80u; f_801FEFF4(c); // 800D1C7C
  c->r[3]=c->r[31]+0x000000C8u; // 800D1C80
  c->lr=0x800D1C88u; f_801FEFF4(c); // 800D1C84
  c->r[3]=c->r[31]+0x00000078u; // 800D1C88
  c->lr=0x800D1C90u; f_801FEFF4(c); // 800D1C8C
  c->r[3]=c->r[31]+0x000000F0u; // 800D1C90
  c->lr=0x800D1C98u; f_801FEFF4(c); // 800D1C94
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1C98
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C9C
  if (crb(c,2)) { goto L_800D1D3C; } // 800D1CA0
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D1CA4
  cmps(c,0,(int32_t)c->r[3],0); // 800D1CA8
  if (crb(c,2)) { goto L_800D1CBC; } // 800D1CAC
  c->lr=0x800D1CB4u; f_8009227C(c); // 800D1CB0
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1CB4
  W32(c->r[3]+0x00000010u,c->r[30]); // 800D1CB8
L_800D1CBC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1CBC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D1CC0
  cmps(c,0,(int32_t)c->r[3],0); // 800D1CC4
  if (crb(c,2)) { goto L_800D1CDC; } // 800D1CC8
  c->lr=0x800D1CD0u; f_8009227C(c); // 800D1CCC
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1CD0
  c->r[0]=0u+0x00000000u; // 800D1CD4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D1CD8
L_800D1CDC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1CDC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D1CE0
  cmps(c,0,(int32_t)c->r[3],0); // 800D1CE4
  if (crb(c,2)) { goto L_800D1CFC; } // 800D1CE8
  c->lr=0x800D1CF0u; f_8009227C(c); // 800D1CEC
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1CF0
  c->r[0]=0u+0x00000000u; // 800D1CF4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1CF8
L_800D1CFC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1CFC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800D1D00
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D04
  if (crb(c,2)) { goto L_800D1D1C; } // 800D1D08
  c->lr=0x800D1D10u; f_8009227C(c); // 800D1D0C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1D10
  c->r[0]=0u+0x00000000u; // 800D1D14
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D1D18
L_800D1D1C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1D1C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800D1D20
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D24
  if (crb(c,2)) { goto L_800D1D3C; } // 800D1D28
  c->lr=0x800D1D30u; f_8009227C(c); // 800D1D2C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1D30
  c->r[0]=0u+0x00000000u; // 800D1D34
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D1D38
L_800D1D3C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D1D3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1D40
  if (crb(c,2)) { goto L_800D1D54; } // 800D1D44
  c->lr=0x800D1D4Cu; f_8009230C(c); // 800D1D48
  c->r[0]=0u+0x00000000u; // 800D1D4C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D1D50
L_800D1D54:;
  c->r[30]=0u+0x00000000u; // 800D1D54
L_800D1D58:;
  c->r[3]=c->r[30]|c->r[30]; // 800D1D58
  c->lr=0x800D1D60u; f_801750C8(c); // 800D1D5C
  c->r[30]=c->r[30]+0x00000001u; // 800D1D60
  cmps(c,0,(int32_t)c->r[30],4); // 800D1D64
  if (crb(c,0)) { IRQCHK(c); goto L_800D1D58; } // 800D1D68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1D6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1D70
  c->lr=c->r[0]; // 800D1D74
  c->r[1]=c->r[1]+0x00000010u; // 800D1D78
  return; // 800D1D7C
}

// fn_800D1D80
void f_800D1D80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1D80
  c->r[0]=c->lr; // 800D1D84
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D1D88
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D1D8C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1D90
  if (crb(c,2)) { goto L_800D1DF4; } // 800D1D94
  cmps(c,0,(int32_t)c->r[4],0); // 800D1D98
  if (!crb(c,2)) { goto L_800D1DC4; } // 800D1D9C
  {uint32_t ea=c->r[2]+0xFFFF8A88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1DA0
  c->r[3]=c->r[1]+0x00000008u; // 800D1DA4
  {uint32_t ea=c->r[2]+0xFFFF8A8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1DA8
  {uint32_t ea=c->r[2]+0xFFFF8A90u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D1DAC
  {uint32_t ea=c->r[2]+0xFFFF8A94u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D1DB0
  {uint32_t ea=c->r[2]+0xFFFF8A98u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D1DB4
  {uint32_t ea=c->r[2]+0xFFFF8A9Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800D1DB8
  c->lr=0x800D1DC0u; f_800ECF14(c); // 800D1DBC
  goto L_800D1DE4; // 800D1DC0
L_800D1DC4:;
  {uint32_t ea=c->r[2]+0xFFFF8A88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1DC4
  c->r[3]=c->r[1]+0x00000008u; // 800D1DC8
  {uint32_t ea=c->r[2]+0xFFFF8A8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1DCC
  {uint32_t ea=c->r[2]+0xFFFF8AA0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D1DD0
  {uint32_t ea=c->r[2]+0xFFFF8AA4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D1DD4
  {uint32_t ea=c->r[2]+0xFFFF8A98u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D1DD8
  {uint32_t ea=c->r[2]+0xFFFF8A9Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800D1DDC
  c->lr=0x800D1DE4u; f_800ECF14(c); // 800D1DE0
L_800D1DE4:;
  c->r[3]=c->r[1]+0x00000008u; // 800D1DE4
  c->r[4]=0u+0x00000001u; // 800D1DE8
  c->lr=0x800D1DF0u; f_80108844(c); // 800D1DEC
  c->lr=0x800D1DF4u; f_80230208(c); // 800D1DF0
L_800D1DF4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D1DF4
  c->lr=c->r[0]; // 800D1DF8
  c->r[1]=c->r[1]+0x00000050u; // 800D1DFC
  return; // 800D1E00
}

// fn_800D1E04
void f_800D1E04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1E04
  c->r[0]=c->lr; // 800D1E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1E0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1E10
  c->r[31]=c->r[3]|c->r[3]; // 800D1E14
  c->lr=0x800D1E1Cu; f_800D1EB4(c); // 800D1E18
  c->lr=0x800D1E20u; f_80230300(c); // 800D1E1C
  c->r[3]=c->r[31]+0x00000038u; // 800D1E20
  c->lr=0x800D1E28u; f_802301CC(c); // 800D1E24
  cmps(c,0,(int32_t)c->r[3],0); // 800D1E28
  if (crb(c,0)) { goto L_800D1E9C; } // 800D1E2C
  c->lr=0x800D1E34u; f_8023022C(c); // 800D1E30
  cmps(c,0,(int32_t)c->r[3],2); // 800D1E34
  if (crb(c,2)) { goto L_800D1E68; } // 800D1E38
  if (!crb(c,0)) { goto L_800D1E50; } // 800D1E3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1E40
  if (crb(c,2)) { goto L_800D1E8C; } // 800D1E44
  if (!crb(c,0)) { goto L_800D1E60; } // 800D1E48
  goto L_800D1E8C; // 800D1E4C
L_800D1E50:;
  cmps(c,0,(int32_t)c->r[3],4); // 800D1E50
  if (crb(c,2)) { goto L_800D1E80; } // 800D1E54
  if (!crb(c,0)) { goto L_800D1E8C; } // 800D1E58
  goto L_800D1E74; // 800D1E5C
L_800D1E60:;
  c->lr=0x800D1E64u; f_800E6BA8(c); // 800D1E60
  goto L_800D1E8C; // 800D1E64
L_800D1E68:;
  c->r[3]=0u+0x00000000u; // 800D1E68
  c->lr=0x800D1E70u; f_800E69D4(c); // 800D1E6C
  goto L_800D1E8C; // 800D1E70
L_800D1E74:;
  c->r[3]=0u+0x00000000u; // 800D1E74
  c->lr=0x800D1E7Cu; f_800E69D4(c); // 800D1E78
  goto L_800D1E8C; // 800D1E7C
L_800D1E80:;
  c->r[3]=0u+0x80260000u; // 800D1E80
  c->r[3]=c->r[3]+0xFFFFF52Cu; // 800D1E84
  c->lr=0x800D1E8Cu; f_800EBF1C(c); // 800D1E88
L_800D1E8C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D1E8C
  c->lr=0x800D1E94u; f_800D1BDC(c); // 800D1E90
  c->r[3]=0u+0x00000001u; // 800D1E94
  goto L_800D1EA0; // 800D1E98
L_800D1E9C:;
  c->r[3]=0u+0x00000000u; // 800D1E9C
L_800D1EA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1EA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1EA4
  c->lr=c->r[0]; // 800D1EA8
  c->r[1]=c->r[1]+0x00000010u; // 800D1EAC
  return; // 800D1EB0
}

// fn_800D1EB4
void f_800D1EB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1EB4
  c->r[0]=c->lr; // 800D1EB8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800D1EBC
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 800D1EC0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 800D1EC4
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 800D1EC8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 800D1ECC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 800D1ED0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 800D1ED4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 800D1ED8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 800D1EDC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 800D1EE0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 800D1EE4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[26]);} // 800D1EE8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,26,ea,0,0);} // 800D1EEC
  c->r[11]=c->r[1]+0x00000070u; // 800D1EF0
  c->lr=0x800D1EF8u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D1EF4
  c->r[28]=0u+0x00000000u; // 800D1EF8
  {uint32_t ea=c->r[2]+0xFFFF8AB0u; c->f[27]=c->ps1[27]=RF32(ea);} // 800D1EFC
  {uint32_t ea=c->r[2]+0xFFFF8AB4u; c->f[28]=c->ps1[28]=RF32(ea);} // 800D1F00
  c->r[27]=c->r[3]|c->r[3]; // 800D1F04
  {uint32_t ea=c->r[2]+0xFFFF8AACu; c->f[26]=c->ps1[26]=RF32(ea);} // 800D1F08
  c->r[23]=c->r[28]|c->r[28]; // 800D1F0C
  {uint32_t ea=c->r[2]+0xFFFF8AA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D1F10
  c->r[30]=c->r[1]+0x00000028u; // 800D1F14
  {uint32_t ea=c->r[2]+0xFFFF8AB8u; c->f[29]=c->ps1[29]=RF32(ea);} // 800D1F18
  c->r[31]=c->r[1]+0x00000008u; // 800D1F1C
  {uint32_t ea=c->r[2]+0xFFFF8A98u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D1F20
  c->r[26]=0u+0x00000000u; // 800D1F24
  c->r[25]=0u+0x00000000u; // 800D1F28
  c->r[24]=0u+0x00000000u; // 800D1F2C
  c->r[22]=0u+0x00010000u; // 800D1F30
L_800D1F34:;
  c->r[29]=c->r[1]+0x00000018u; // 800D1F34
  c->r[3]=c->r[28]|c->r[28]; // 800D1F38
  c->r[29]=c->r[29]+c->r[24]; // 800D1F3C
  c->r[4]=c->r[29]|c->r[29]; // 800D1F40
  c->lr=0x800D1F48u; f_801626A4(c); // 800D1F44
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D1F48
  c->r[29]=c->r[27]+c->r[25]; // 800D1F4C
  c->r[4]=c->r[27]+c->r[26]; // 800D1F50
  W32(c->r[30]+c->r[24],c->r[3]); // 800D1F54
  c->r[21]=c->r[4]+0x00000120u; // 800D1F58
  c->r[3]=c->r[28]|c->r[28]; // 800D1F5C
  W32(c->r[29]+0x00000044u,c->r[0]); // 800D1F60
  c->r[4]=c->r[21]|c->r[21]; // 800D1F64
  c->r[5]=0u+0x00000010u; // 800D1F68
  c->lr=0x800D1F70u; f_801746A8(c); // 800D1F6C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1F70
  W32(c->r[31]+c->r[24],c->r[3]); // 800D1F74
  if (!crb(c,2)) { goto L_800D1F8C; } // 800D1F78
  c->r[3]=c->r[21]|c->r[21]; // 800D1F7C
  c->r[4]=0u+0x00000000u; // 800D1F80
  c->r[5]=0u+0x00000084u; // 800D1F84
  c->lr=0x800D1F8Cu; f_8000443C(c); // 800D1F88
L_800D1F8C:;
  c->r[0]=R32(c->r[30]+c->r[24]); // 800D1F8C
  cmps(c,0,(int32_t)c->r[0],-1); // 800D1F90
  if (crb(c,2)) { goto L_800D2218; } // 800D1F94
  if (!crb(c,0)) { goto L_800D1FB4; } // 800D1F98
  cmps(c,0,(int32_t)c->r[0],-7); // 800D1F9C
  if (crb(c,2)) { goto L_800D1FBC; } // 800D1FA0
  if (crb(c,0)) { goto L_800D2218; } // 800D1FA4
  cmps(c,0,(int32_t)c->r[0],-4); // 800D1FA8
  if (!crb(c,0)) { goto L_800D1FBC; } // 800D1FAC
  goto L_800D2218; // 800D1FB0
L_800D1FB4:;
  cmps(c,0,(int32_t)c->r[0],1); // 800D1FB4
  if (!crb(c,0)) { goto L_800D2218; } // 800D1FB8
L_800D1FBC:;
  W32(c->r[29]+0x00000038u,c->r[21]); // 800D1FBC
  c->r[0]=R32(c->r[21]+0x00000060u); // 800D1FC0
  c->r[3]=c->r[0]&0x0000C003u; cr0(c,c->r[3]); // 800D1FC4
  cmps(c,0,(int32_t)c->r[3],16386); // 800D1FC8
  if (crb(c,2)) { goto L_800D20A4; } // 800D1FCC
  if (!crb(c,0)) { goto L_800D1FFC; } // 800D1FD0
  cmps(c,0,(int32_t)c->r[3],3); // 800D1FD4
  if (crb(c,2)) { goto L_800D206C; } // 800D1FD8
  if (!crb(c,0)) { goto L_800D1FF0; } // 800D1FDC
  cmps(c,0,(int32_t)c->r[3],1); // 800D1FE0
  if (crb(c,2)) { goto L_800D202C; } // 800D1FE4
  if (!crb(c,0)) { goto L_800D203C; } // 800D1FE8
  goto L_800D20DC; // 800D1FEC
L_800D1FF0:;
  cmps(c,0,(int32_t)c->r[3],16384); // 800D1FF0
  if (crb(c,2)) { goto L_800D204C; } // 800D1FF4
  goto L_800D20DC; // 800D1FF8
L_800D1FFC:;
  c->r[0]=c->r[22]+0xFFFF8001u; // 800D1FFC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D2000
  if (crb(c,2)) { goto L_800D2088; } // 800D2004
  if (!crb(c,0)) { goto L_800D201C; } // 800D2008
  c->r[0]=c->r[22]+0xFFFF8000u; // 800D200C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D2010
  if (!crb(c,0)) { goto L_800D205C; } // 800D2014
  goto L_800D20DC; // 800D2018
L_800D201C:;
  c->r[0]=c->r[22]+0xFFFFC000u; // 800D201C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D2020
  if (crb(c,2)) { goto L_800D20C0; } // 800D2024
  goto L_800D20DC; // 800D2028
L_800D202C:;
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D202C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800D2030
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D2034
  goto L_800D20E4; // 800D2038
L_800D203C:;
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D203C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800D2040
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D2044
  goto L_800D20E4; // 800D2048
L_800D204C:;
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D204C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800D2050
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D2054
  goto L_800D20E4; // 800D2058
L_800D205C:;
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D205C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800D2060
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D2064
  goto L_800D20E4; // 800D2068
L_800D206C:;
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D206C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 800D2070
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D2074
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2078
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 800D207C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D2080
  goto L_800D20E4; // 800D2084
L_800D2088:;
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2088
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 800D208C
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D2090
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2094
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[26]); // 800D2098
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D209C
  goto L_800D20E4; // 800D20A0
L_800D20A4:;
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20A4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[26]); // 800D20A8
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D20AC
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 800D20B4
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D20B8
  goto L_800D20E4; // 800D20BC
L_800D20C0:;
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20C0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[26]); // 800D20C4
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D20C8
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20CC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[26]); // 800D20D0
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D20D4
  goto L_800D20E4; // 800D20D8
L_800D20DC:;
  c->r[0]=0u+0x00000000u; // 800D20DC
  goto L_800D2130; // 800D20E0
L_800D20E4:;
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D20E4
  fcmp(c,0,c->f[0],c->f[27]); // 800D20E8
  if (!crb(c,1)) { goto L_800D20F8; } // 800D20EC
  c->f[0]=c->f[27]; // 800D20F0
  goto L_800D2104; // 800D20F4
L_800D20F8:;
  fcmp(c,0,c->f[0],c->f[28]); // 800D20F8
  if (!crb(c,0)) { goto L_800D2104; } // 800D20FC
  c->f[0]=c->f[28]; // 800D2100
L_800D2104:;
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D2104
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2108
  fcmp(c,0,c->f[0],c->f[27]); // 800D210C
  if (!crb(c,1)) { goto L_800D211C; } // 800D2110
  c->f[0]=c->f[27]; // 800D2114
  goto L_800D2128; // 800D2118
L_800D211C:;
  fcmp(c,0,c->f[0],c->f[28]); // 800D211C
  if (!crb(c,0)) { goto L_800D2128; } // 800D2120
  c->f[0]=c->f[28]; // 800D2124
L_800D2128:;
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D2128
  c->r[0]=0u+0x00000001u; // 800D212C
L_800D2130:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800D2130
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2134
  {uint32_t ea=c->r[3]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2138
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[29]); // 800D213C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[29]); // 800D2140
  fcmp(c,0,c->f[2],c->f[27]); // 800D2144
  if (!crb(c,1)) { goto L_800D2154; } // 800D2148
  c->f[2]=c->f[27]; // 800D214C
  goto L_800D2160; // 800D2150
L_800D2154:;
  fcmp(c,0,c->f[2],c->f[28]); // 800D2154
  if (!crb(c,0)) { goto L_800D2160; } // 800D2158
  c->f[2]=c->f[28]; // 800D215C
L_800D2160:;
  fcmp(c,0,c->f[1],c->f[27]); // 800D2160
  if (!crb(c,1)) { goto L_800D2170; } // 800D2164
  c->f[1]=c->f[27]; // 800D2168
  goto L_800D217C; // 800D216C
L_800D2170:;
  fcmp(c,0,c->f[1],c->f[28]); // 800D2170
  if (!crb(c,0)) { goto L_800D217C; } // 800D2174
  c->f[1]=c->f[28]; // 800D2178
L_800D217C:;
  fcmp(c,0,c->f[30],c->f[2]); // 800D217C
  if (!crb(c,2)) { goto L_800D2194; } // 800D2180
  fcmp(c,0,c->f[30],c->f[1]); // 800D2184
  if (!crb(c,2)) { goto L_800D2194; } // 800D2188
  c->r[3]=0u+0x00000000u; // 800D218C
  goto L_800D21E8; // 800D2190
L_800D2194:;
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2194
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800D2198
  fcmp(c,0,c->f[0],c->f[27]); // 800D219C
  if (!crb(c,1)) { goto L_800D21AC; } // 800D21A0
  c->f[0]=c->f[27]; // 800D21A4
  goto L_800D21B8; // 800D21A8
L_800D21AC:;
  fcmp(c,0,c->f[0],c->f[28]); // 800D21AC
  if (!crb(c,0)) { goto L_800D21B8; } // 800D21B0
  c->f[0]=c->f[28]; // 800D21B4
L_800D21B8:;
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D21B8
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D21BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800D21C0
  fcmp(c,0,c->f[0],c->f[27]); // 800D21C4
  if (!crb(c,1)) { goto L_800D21D4; } // 800D21C8
  c->f[0]=c->f[27]; // 800D21CC
  goto L_800D21E0; // 800D21D0
L_800D21D4:;
  fcmp(c,0,c->f[0],c->f[28]); // 800D21D4
  if (!crb(c,0)) { goto L_800D21E0; } // 800D21D8
  c->f[0]=c->f[28]; // 800D21DC
L_800D21E0:;
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D21E0
  c->r[3]=0u+0x00000001u; // 800D21E4
L_800D21E8:;
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 800D21E8
  if (!crb(c,2)) { goto L_800D221C; } // 800D21EC
  c->r[3]=R32(c->r[29]+0x00000038u); // 800D21F0
  c->r[0]=R8(c->r[3]+0x0000005Eu); // 800D21F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D21F8
  if (!crb(c,1)) { goto L_800D221C; } // 800D21FC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2200
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D2204
  c->r[3]=R32(c->r[29]+0x00000038u); // 800D2208
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D220C
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800D2210
  goto L_800D221C; // 800D2214
L_800D2218:;
  W32(c->r[29]+0x00000038u,c->r[23]); // 800D2218
L_800D221C:;
  c->r[28]=c->r[28]+0x00000001u; // 800D221C
  c->r[25]=c->r[25]+0x00000010u; // 800D2220
  cmps(c,0,(int32_t)c->r[28],4); // 800D2224
  c->r[24]=c->r[24]+0x00000004u; // 800D2228
  c->r[26]=c->r[26]+0x00000840u; // 800D222C
  if (crb(c,0)) { IRQCHK(c); goto L_800D1F34; } // 800D2230
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 800D2234
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 800D2238
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 800D223C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 800D2240
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 800D2244
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 800D2248
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 800D224C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 800D2250
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 800D2254
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 800D2258
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,26,ea,0,0);} // 800D225C
  c->r[11]=c->r[1]+0x00000070u; // 800D2260
  {uint32_t ea=c->r[1]+0x00000070u; c->f[26]=RF64(ea);} // 800D2264
  c->lr=0x800D226Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2268
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800D226C
  c->lr=c->r[0]; // 800D2270
  c->r[1]=c->r[1]+0x000000D0u; // 800D2274
  return; // 800D2278
}

// fn_800D227C
void f_800D227C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D227C
  c->r[0]=c->lr; // 800D2280
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800D2284
  c->r[11]=c->r[1]+0x000000C0u; // 800D2288
  c->lr=0x800D2290u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D228C
  c->r[25]=0u+0x80260000u; // 800D2290
  {uint32_t ea=c->r[25]+0xFFFFF520u; c->r[26]=R8(ea); c->r[25]=ea;} // 800D2294
  c->r[31]=c->r[5]|c->r[5]; // 800D2298
  c->r[29]=c->r[3]|c->r[3]; // 800D229C
  c->r[27]=R8(c->r[25]+0x00000001u); // 800D22A0
  c->r[30]=c->r[4]|c->r[4]; // 800D22A4
  c->r[28]=R8(c->r[25]+0x00000002u); // 800D22A8
  c->r[3]=c->r[1]+0x00000054u; // 800D22AC
  c->r[12]=R8(c->r[25]+0x00000003u); // 800D22B0
  c->r[4]=c->r[1]+0x00000008u; // 800D22B4
  c->r[11]=R8(c->r[25]+0x00000004u); // 800D22B8
  c->r[10]=R8(c->r[25]+0x00000005u); // 800D22BC
  c->r[9]=R8(c->r[25]+0x00000006u); // 800D22C0
  c->r[8]=R8(c->r[25]+0x00000007u); // 800D22C4
  c->r[7]=R8(c->r[25]+0x00000008u); // 800D22C8
  c->r[6]=R8(c->r[25]+0x00000009u); // 800D22CC
  c->r[5]=R8(c->r[25]+0x0000000Au); // 800D22D0
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 800D22D4
  W8(c->r[1]+0x00000008u,c->r[26]); // 800D22D8
  W8(c->r[1]+0x00000009u,c->r[27]); // 800D22DC
  W8(c->r[1]+0x0000000Au,c->r[28]); // 800D22E0
  W8(c->r[1]+0x0000000Bu,c->r[12]); // 800D22E4
  W8(c->r[1]+0x0000000Cu,c->r[11]); // 800D22E8
  W8(c->r[1]+0x0000000Du,c->r[10]); // 800D22EC
  W8(c->r[1]+0x0000000Eu,c->r[9]); // 800D22F0
  W8(c->r[1]+0x0000000Fu,c->r[8]); // 800D22F4
  W8(c->r[1]+0x00000010u,c->r[7]); // 800D22F8
  W8(c->r[1]+0x00000011u,c->r[6]); // 800D22FC
  W8(c->r[1]+0x00000012u,c->r[5]); // 800D2300
  W8(c->r[1]+0x00000013u,c->r[0]); // 800D2304
  c->lr=0x800D230Cu; f_8011410C(c); // 800D2308
  c->r[3]=c->r[1]+0x00000014u; // 800D230C
  c->r[4]=c->r[1]+0x00000008u; // 800D2310
  c->lr=0x800D2318u; f_8011410C(c); // 800D2314
  c->lr=0x800D231Cu; f_8013041C(c); // 800D2318
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800D231C
  cmpu(c,0,c->r[0],0x00000006u); // 800D2320
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800D2324
  if (crb(c,1)) { goto L_800D23EC; } // 800D2328
  c->r[3]=0u+0x80280000u; // 800D232C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D2330
  c->r[3]=c->r[3]+0x00001CB4u; // 800D2334
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D2338
  c->ctr=c->r[3]; // 800D233C
  if (true) { switch (c->ctr) { case 0x800D2344u: goto L_800D2344; case 0x800D235Cu: goto L_800D235C; case 0x800D2374u: goto L_800D2374; case 0x800D238Cu: goto L_800D238C; case 0x800D23A4u: goto L_800D23A4; case 0x800D23BCu: goto L_800D23BC; case 0x800D23D4u: goto L_800D23D4; case 0x800D247Cu: goto L_800D247C; case 0x800D248Cu: goto L_800D248C; case 0x800D249Cu: goto L_800D249C; case 0x800D24ACu: goto L_800D24AC; case 0x800D24BCu: goto L_800D24BC; case 0x800D24CCu: goto L_800D24CC; case 0x800D24DCu: goto L_800D24DC; default: break; } dispatch(c,c->ctr); return; } // 800D2340
L_800D2344:;
  c->r[4]=0u+0x80260000u; // 800D2344
  c->r[3]=c->r[1]+0x00000054u; // 800D2348
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D234C
  c->r[4]=c->r[4]+0x000000F1u; // 800D2350
  c->lr=0x800D2358u; f_80114210(c); // 800D2354
  goto L_800D2408; // 800D2358
L_800D235C:;
  c->r[4]=0u+0x80260000u; // 800D235C
  c->r[3]=c->r[1]+0x00000054u; // 800D2360
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D2364
  c->r[4]=c->r[4]+0x00000103u; // 800D2368
  c->lr=0x800D2370u; f_80114210(c); // 800D236C
  goto L_800D2408; // 800D2370
L_800D2374:;
  c->r[4]=0u+0x80260000u; // 800D2374
  c->r[3]=c->r[1]+0x00000054u; // 800D2378
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D237C
  c->r[4]=c->r[4]+0x00000119u; // 800D2380
  c->lr=0x800D2388u; f_80114210(c); // 800D2384
  goto L_800D2408; // 800D2388
L_800D238C:;
  c->r[4]=0u+0x80260000u; // 800D238C
  c->r[3]=c->r[1]+0x00000054u; // 800D2390
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D2394
  c->r[4]=c->r[4]+0x0000012Fu; // 800D2398
  c->lr=0x800D23A0u; f_80114210(c); // 800D239C
  goto L_800D2408; // 800D23A0
L_800D23A4:;
  c->r[4]=0u+0x80260000u; // 800D23A4
  c->r[3]=c->r[1]+0x00000054u; // 800D23A8
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D23AC
  c->r[4]=c->r[4]+0x00000145u; // 800D23B0
  c->lr=0x800D23B8u; f_80114210(c); // 800D23B4
  goto L_800D2408; // 800D23B8
L_800D23BC:;
  c->r[4]=0u+0x80260000u; // 800D23BC
  c->r[3]=c->r[1]+0x00000054u; // 800D23C0
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D23C4
  c->r[4]=c->r[4]+0x0000015Bu; // 800D23C8
  c->lr=0x800D23D0u; f_80114210(c); // 800D23CC
  goto L_800D2408; // 800D23D0
L_800D23D4:;
  c->r[4]=0u+0x80260000u; // 800D23D4
  c->r[3]=c->r[1]+0x00000054u; // 800D23D8
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D23DC
  c->r[4]=c->r[4]+0x00000171u; // 800D23E0
  c->lr=0x800D23E8u; f_80114210(c); // 800D23E4
  goto L_800D2408; // 800D23E8
L_800D23EC:;
  c->r[0]=0u+0x00000000u; // 800D23EC
  c->r[4]=0u+0x80260000u; // 800D23F0
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D23F4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800D23F8
  c->r[3]=c->r[1]+0x00000054u; // 800D23FC
  c->r[4]=c->r[4]+0x000000F1u; // 800D2400
  c->lr=0x800D2408u; f_80114210(c); // 800D2404
L_800D2408:;
  c->r[3]=c->r[1]+0x00000054u; // 800D2408
  c->r[4]=c->r[29]+0x000000A0u; // 800D240C
  c->r[5]=0u+0x00000000u; // 800D2410
  c->r[6]=0u+0x00000004u; // 800D2414
  c->lr=0x800D241Cu; f_800D265C(c); // 800D2418
  W32(c->r[30]+0x00000000u,c->r[3]); // 800D241C
  c->r[3]=c->r[1]+0x00000054u; // 800D2420
  c->r[4]=c->r[1]+0x00000008u; // 800D2424
  c->lr=0x800D242Cu; f_8011410C(c); // 800D2428
  c->r[28]=0u+0x80260000u; // 800D242C
  c->r[3]=c->r[1]+0x00000054u; // 800D2430
  c->r[28]=c->r[28]+0xFFFFF52Cu; // 800D2434
  c->r[4]=c->r[28]+0x00000187u; // 800D2438
  c->lr=0x800D2440u; f_80114210(c); // 800D243C
  c->r[3]=c->r[1]+0x00000054u; // 800D2440
  c->r[4]=c->r[29]+0x000000A0u; // 800D2444
  c->r[5]=0u+0x00000000u; // 800D2448
  c->r[6]=0u+0x00000004u; // 800D244C
  c->lr=0x800D2454u; f_800D285C(c); // 800D2450
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800D2454
  W32(c->r[30]+0x00000004u,c->r[3]); // 800D2458
  cmpu(c,0,c->r[0],0x00000006u); // 800D245C
  if (crb(c,1)) { goto L_800D24EC; } // 800D2460
  c->r[3]=0u+0x80280000u; // 800D2464
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D2468
  c->r[3]=c->r[3]+0x00001C98u; // 800D246C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D2470
  c->ctr=c->r[3]; // 800D2474
  if (true) { switch (c->ctr) { case 0x800D2344u: goto L_800D2344; case 0x800D235Cu: goto L_800D235C; case 0x800D2374u: goto L_800D2374; case 0x800D238Cu: goto L_800D238C; case 0x800D23A4u: goto L_800D23A4; case 0x800D23BCu: goto L_800D23BC; case 0x800D23D4u: goto L_800D23D4; case 0x800D247Cu: goto L_800D247C; case 0x800D248Cu: goto L_800D248C; case 0x800D249Cu: goto L_800D249C; case 0x800D24ACu: goto L_800D24AC; case 0x800D24BCu: goto L_800D24BC; case 0x800D24CCu: goto L_800D24CC; case 0x800D24DCu: goto L_800D24DC; default: break; } dispatch(c,c->ctr); return; } // 800D2478
L_800D247C:;
  c->r[3]=c->r[1]+0x00000014u; // 800D247C
  c->r[4]=c->r[28]+0x0000019Bu; // 800D2480
  c->lr=0x800D2488u; f_80114210(c); // 800D2484
  goto L_800D2508; // 800D2488
L_800D248C:;
  c->r[3]=c->r[1]+0x00000014u; // 800D248C
  c->r[4]=c->r[28]+0x000001B5u; // 800D2490
  c->lr=0x800D2498u; f_80114210(c); // 800D2494
  goto L_800D2508; // 800D2498
L_800D249C:;
  c->r[3]=c->r[1]+0x00000014u; // 800D249C
  c->r[4]=c->r[28]+0x000001CFu; // 800D24A0
  c->lr=0x800D24A8u; f_80114210(c); // 800D24A4
  goto L_800D2508; // 800D24A8
L_800D24AC:;
  c->r[3]=c->r[1]+0x00000014u; // 800D24AC
  c->r[4]=c->r[28]+0x000001E9u; // 800D24B0
  c->lr=0x800D24B8u; f_80114210(c); // 800D24B4
  goto L_800D2508; // 800D24B8
L_800D24BC:;
  c->r[3]=c->r[1]+0x00000014u; // 800D24BC
  c->r[4]=c->r[28]+0x00000203u; // 800D24C0
  c->lr=0x800D24C8u; f_80114210(c); // 800D24C4
  goto L_800D2508; // 800D24C8
L_800D24CC:;
  c->r[3]=c->r[1]+0x00000014u; // 800D24CC
  c->r[4]=c->r[28]+0x0000021Du; // 800D24D0
  c->lr=0x800D24D8u; f_80114210(c); // 800D24D4
  goto L_800D2508; // 800D24D8
L_800D24DC:;
  c->r[3]=c->r[1]+0x00000014u; // 800D24DC
  c->r[4]=c->r[28]+0x00000237u; // 800D24E0
  c->lr=0x800D24E8u; f_80114210(c); // 800D24E4
  goto L_800D2508; // 800D24E8
L_800D24EC:;
  c->r[0]=0u+0x00000000u; // 800D24EC
  c->r[4]=0u+0x80260000u; // 800D24F0
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D24F4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800D24F8
  c->r[3]=c->r[1]+0x00000014u; // 800D24FC
  c->r[4]=c->r[4]+0x0000019Bu; // 800D2500
  c->lr=0x800D2508u; f_80114210(c); // 800D2504
L_800D2508:;
  c->r[3]=c->r[1]+0x00000014u; // 800D2508
  c->r[4]=c->r[29]+0x000000C8u; // 800D250C
  c->r[5]=0u+0x00000000u; // 800D2510
  c->r[6]=0u+0x00000007u; // 800D2514
  c->lr=0x800D251Cu; f_800D265C(c); // 800D2518
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D251C
  c->r[3]=c->r[1]+0x00000054u; // 800D2520
  c->r[4]=c->r[1]+0x00000008u; // 800D2524
  c->lr=0x800D252Cu; f_8011410C(c); // 800D2528
  c->r[28]=0u+0x80260000u; // 800D252C
  c->r[3]=c->r[1]+0x00000054u; // 800D2530
  c->r[28]=c->r[28]+0xFFFFF52Cu; // 800D2534
  c->r[4]=c->r[28]+0x00000251u; // 800D2538
  c->lr=0x800D2540u; f_80114210(c); // 800D253C
  c->r[3]=c->r[1]+0x00000054u; // 800D2540
  c->r[4]=c->r[29]+0x000000F0u; // 800D2544
  c->r[5]=0u+0x00000000u; // 800D2548
  c->r[6]=0u+0x00000006u; // 800D254C
  c->lr=0x800D2554u; f_800D2730(c); // 800D2550
  cmps(c,0,(int32_t)c->r[3],0); // 800D2554
  W32(c->r[30]+0x00000008u,c->r[3]); // 800D2558
  if (!crb(c,2)) { goto L_800D2568; } // 800D255C
  c->r[3]=0u+0x00000000u; // 800D2560
  goto L_800D2644; // 800D2564
L_800D2568:;
  c->r[3]=c->r[28]+0x0000025Bu; // 800D2568
  c->r[4]=c->r[29]+0x000000F0u; // 800D256C
  c->r[5]=0u+0x00000000u; // 800D2570
  c->r[6]=0u+0x00000006u; // 800D2574
  c->lr=0x800D257Cu; f_800D2730(c); // 800D2578
  cmps(c,0,(int32_t)c->r[3],0); // 800D257C
  W32(c->r[31]+0x00000004u,c->r[3]); // 800D2580
  if (!crb(c,2)) { goto L_800D2590; } // 800D2584
  c->r[3]=0u+0x00000000u; // 800D2588
  goto L_800D2644; // 800D258C
L_800D2590:;
  c->r[3]=c->r[1]+0x00000054u; // 800D2590
  c->r[4]=c->r[1]+0x00000008u; // 800D2594
  c->lr=0x800D259Cu; f_8011410C(c); // 800D2598
  c->r[3]=c->r[1]+0x00000054u; // 800D259C
  c->r[4]=c->r[28]+0x00000273u; // 800D25A0
  c->lr=0x800D25A8u; f_80114210(c); // 800D25A4
  c->r[3]=c->r[1]+0x00000054u; // 800D25A8
  c->r[4]=c->r[29]+0x000000A0u; // 800D25AC
  c->r[5]=c->r[30]+0x00000028u; // 800D25B0
  c->r[6]=0u+0x00000004u; // 800D25B4
  c->lr=0x800D25BCu; f_800D2730(c); // 800D25B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D25BC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D25C0
  if (!crb(c,2)) { goto L_800D25D0; } // 800D25C4
  c->r[3]=0u+0x00000000u; // 800D25C8
  goto L_800D2644; // 800D25CC
L_800D25D0:;
  {uint32_t ea=c->r[2]+0xFFFF8ABCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D25D0
  c->r[3]=0u+0x800D0000u; // 800D25D4
  c->r[29]=0u+0x00000000u; // 800D25D8
  {uint32_t ea=c->r[2]+0xFFFF8AB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D25DC
  {uint32_t ea=c->r[2]+0xFFFF8AC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D25E0
  c->r[3]=c->r[3]+0x0000170Cu; // 800D25E4
  W32(c->r[30]+0x00000014u,c->r[3]); // 800D25E8
  c->r[3]=0u+0x00080000u; // 800D25EC
  c->r[4]=0u+0x00000020u; // 800D25F0
  c->r[5]=0u+0x00000001u; // 800D25F4
  W32(c->r[30]+0x00000018u,c->r[29]); // 800D25F8
  W32(c->r[30]+0x00000020u,c->r[29]); // 800D25FC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[2]);} // 800D2600
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800D2604
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800D2608
  c->lr=0x800D2610u; f_8009210C(c); // 800D260C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2610
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D2614
  if (!crb(c,2)) { goto L_800D2624; } // 800D2618
  c->r[3]=0u+0x00000000u; // 800D261C
  goto L_800D2644; // 800D2620
L_800D2624:;
  c->r[4]=0u+0x00000000u; // 800D2624
  c->r[5]=0u+0x00080000u; // 800D2628
  c->lr=0x800D2630u; f_8000443C(c); // 800D262C
  c->r[0]=0u+0x00080000u; // 800D2630
  W32(c->r[30]+0x0000003Cu,c->r[29]); // 800D2634
  c->r[3]=0u+0x00000001u; // 800D2638
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800D263C
  W32(c->r[30]+0x00000024u,c->r[29]); // 800D2640
L_800D2644:;
  c->r[11]=c->r[1]+0x000000C0u; // 800D2644
  c->lr=0x800D264Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2648
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800D264C
  c->lr=c->r[0]; // 800D2650
  c->r[1]=c->r[1]+0x000000C0u; // 800D2654
  return; // 800D2658
}

// fn_800D265C
void f_800D265C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D265C
  c->r[0]=c->lr; // 800D2660
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2664
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2668
  c->r[28]=c->r[5]|c->r[5]; // 800D266C
  c->lr=0x800D2674u; f_800D2730(c); // 800D2670
  cmps(c,0,(int32_t)c->r[3],0); // 800D2674
  c->r[31]=c->r[3]|c->r[3]; // 800D2678
  if (!crb(c,2)) { goto L_800D2688; } // 800D267C
  c->r[3]=0u+0x00000000u; // 800D2680
  goto L_800D271C; // 800D2684
L_800D2688:;
  c->lr=0x800D268Cu; f_801FDCB4(c); // 800D2688
  cmps(c,0,(int32_t)c->r[28],0); // 800D268C
  c->r[29]=c->r[3]|c->r[3]; // 800D2690
  if (crb(c,2)) { goto L_800D269C; } // 800D2694
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D2698
L_800D269C:;
  c->r[0]=c->r[3]+0x0000001Fu; // 800D269C
  c->r[4]=0u+0x00000020u; // 800D26A0
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D26A4
  c->r[5]=0u+0x00000001u; // 800D26A8
  c->r[3]=c->r[28]|c->r[28]; // 800D26AC
  c->lr=0x800D26B4u; f_8009210C(c); // 800D26B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D26B4
  c->r[30]=c->r[3]|c->r[3]; // 800D26B8
  if (!crb(c,2)) { goto L_800D26D8; } // 800D26BC
  cmps(c,0,(int32_t)c->r[31],0); // 800D26C0
  if (crb(c,2)) { goto L_800D26D0; } // 800D26C4
  c->r[3]=c->r[31]|c->r[31]; // 800D26C8
  c->lr=0x800D26D0u; f_8009227C(c); // 800D26CC
L_800D26D0:;
  c->r[3]=0u+0x00000000u; // 800D26D0
  goto L_800D271C; // 800D26D4
L_800D26D8:;
  c->r[5]=c->r[28]|c->r[28]; // 800D26D8
  c->r[4]=0u+0x00000000u; // 800D26DC
  c->lr=0x800D26E4u; f_8000443C(c); // 800D26E0
  c->r[3]=c->r[30]|c->r[30]; // 800D26E4
  c->r[4]=c->r[29]|c->r[29]; // 800D26E8
  c->lr=0x800D26F0u; f_800E0354(c); // 800D26EC
  c->r[3]=c->r[31]|c->r[31]; // 800D26F0
  c->r[4]=c->r[30]|c->r[30]; // 800D26F4
  c->lr=0x800D26FCu; f_801FDCF4(c); // 800D26F8
  c->r[3]=c->r[30]|c->r[30]; // 800D26FC
  c->r[4]=c->r[29]|c->r[29]; // 800D2700
  c->lr=0x800D2708u; f_800E0380(c); // 800D2704
  cmps(c,0,(int32_t)c->r[31],0); // 800D2708
  if (crb(c,2)) { goto L_800D2718; } // 800D270C
  c->r[3]=c->r[31]|c->r[31]; // 800D2710
  c->lr=0x800D2718u; f_8009227C(c); // 800D2714
L_800D2718:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2718
L_800D271C:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D271C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2720
  c->lr=c->r[0]; // 800D2724
  c->r[1]=c->r[1]+0x00000020u; // 800D2728
  return; // 800D272C
}

// fn_800D2730
void f_800D2730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2730
  c->r[0]=c->lr; // 800D2734
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D2738
  c->r[0]=c->r[3]|c->r[3]; // 800D273C
  c->r[3]=c->r[4]|c->r[4]; // 800D2740
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2744
  c->r[29]=c->r[5]|c->r[5]; // 800D2748
  c->r[28]=c->r[6]|c->r[6]; // 800D274C
  c->r[4]=c->r[0]|c->r[0]; // 800D2750
  c->r[5]=c->r[1]+0x00000008u; // 800D2754
  c->lr=0x800D275Cu; f_801FF060(c); // 800D2758
  cmps(c,0,(int32_t)c->r[3],0); // 800D275C
  c->r[30]=c->r[3]|c->r[3]; // 800D2760
  if (crb(c,2)) { goto L_800D2784; } // 800D2764
  c->lr=0x800D276Cu; f_8004328C(c); // 800D2768
  c->r[4]=c->r[30]|c->r[30]; // 800D276C
  c->r[5]=c->r[28]|c->r[28]; // 800D2770
  c->r[6]=0u+0x00000000u; // 800D2774
  c->lr=0x800D277Cu; f_80045120(c); // 800D2778
  c->r[3]=0u+0x00000000u; // 800D277C
  goto L_800D2848; // 800D2780
L_800D2784:;
  c->r[3]=c->r[1]+0x00000008u; // 800D2784
  c->lr=0x800D278Cu; f_801FF24C(c); // 800D2788
  cmps(c,0,(int32_t)c->r[29],0); // 800D278C
  c->r[31]=c->r[3]|c->r[3]; // 800D2790
  if (crb(c,2)) { goto L_800D279C; } // 800D2794
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D2798
L_800D279C:;
  c->r[0]=c->r[3]+0x0000001Fu; // 800D279C
  c->r[4]=0u+0x00000020u; // 800D27A0
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D27A4
  c->r[5]=0u+0x00000001u; // 800D27A8
  c->r[3]=c->r[29]|c->r[29]; // 800D27AC
  c->lr=0x800D27B4u; f_8009210C(c); // 800D27B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D27B4
  c->r[30]=c->r[3]|c->r[3]; // 800D27B8
  if (!crb(c,2)) { goto L_800D27D0; } // 800D27BC
  c->r[3]=c->r[1]+0x00000008u; // 800D27C0
  c->lr=0x800D27C8u; f_801FF280(c); // 800D27C4
  c->r[3]=0u+0x00000000u; // 800D27C8
  goto L_800D2848; // 800D27CC
L_800D27D0:;
  c->r[5]=c->r[29]|c->r[29]; // 800D27D0
  c->r[4]=0u+0x00000000u; // 800D27D4
  c->lr=0x800D27DCu; f_8000443C(c); // 800D27D8
  c->r[3]=c->r[30]|c->r[30]; // 800D27DC
  c->r[4]=c->r[31]|c->r[31]; // 800D27E0
  c->lr=0x800D27E8u; f_800E0354(c); // 800D27E4
  c->r[4]=c->r[30]|c->r[30]; // 800D27E8
  c->r[5]=c->r[29]|c->r[29]; // 800D27EC
  c->r[3]=c->r[1]+0x00000008u; // 800D27F0
  c->r[6]=0u+0x00000000u; // 800D27F4
  c->lr=0x800D27FCu; f_801FF158(c); // 800D27F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D27FC
  c->r[31]=c->r[3]|c->r[3]; // 800D2800
  if (!crb(c,0)) { goto L_800D283C; } // 800D2804
  c->lr=0x800D280Cu; f_8004328C(c); // 800D2808
  c->r[4]=c->r[31]|c->r[31]; // 800D280C
  c->r[5]=c->r[28]|c->r[28]; // 800D2810
  c->r[6]=0u+0x00000000u; // 800D2814
  c->lr=0x800D281Cu; f_80045120(c); // 800D2818
  c->r[3]=c->r[1]+0x00000008u; // 800D281C
  c->lr=0x800D2824u; f_801FF280(c); // 800D2820
  cmps(c,0,(int32_t)c->r[30],0); // 800D2824
  if (crb(c,2)) { goto L_800D2834; } // 800D2828
  c->r[3]=c->r[30]|c->r[30]; // 800D282C
  c->lr=0x800D2834u; f_8009227C(c); // 800D2830
L_800D2834:;
  c->r[3]=0u+0x00000000u; // 800D2834
  goto L_800D2848; // 800D2838
L_800D283C:;
  c->r[3]=c->r[1]+0x00000008u; // 800D283C
  c->lr=0x800D2844u; f_801FF280(c); // 800D2840
  c->r[3]=c->r[30]|c->r[30]; // 800D2844
L_800D2848:;
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2848
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D284C
  c->lr=c->r[0]; // 800D2850
  c->r[1]=c->r[1]+0x00000060u; // 800D2854
  return; // 800D2858
}

// fn_800D285C
void f_800D285C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D285C
  c->r[0]=c->lr; // 800D2860
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2864
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2868
  c->r[28]=c->r[5]|c->r[5]; // 800D286C
  c->lr=0x800D2874u; f_800D2730(c); // 800D2870
  cmps(c,0,(int32_t)c->r[3],0); // 800D2874
  c->r[31]=c->r[3]|c->r[3]; // 800D2878
  if (!crb(c,2)) { goto L_800D2888; } // 800D287C
  c->r[3]=0u+0x00000000u; // 800D2880
  goto L_800D291C; // 800D2884
L_800D2888:;
  c->lr=0x800D288Cu; f_801FDCB4(c); // 800D2888
  cmps(c,0,(int32_t)c->r[28],0); // 800D288C
  c->r[29]=c->r[3]|c->r[3]; // 800D2890
  if (crb(c,2)) { goto L_800D289C; } // 800D2894
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D2898
L_800D289C:;
  c->r[0]=c->r[3]+0x0000001Fu; // 800D289C
  c->r[4]=0u+0x00000020u; // 800D28A0
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D28A4
  c->r[5]=0u+0x00000001u; // 800D28A8
  c->r[3]=c->r[28]|c->r[28]; // 800D28AC
  c->lr=0x800D28B4u; f_8009210C(c); // 800D28B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D28B4
  c->r[30]=c->r[3]|c->r[3]; // 800D28B8
  if (!crb(c,2)) { goto L_800D28D8; } // 800D28BC
  cmps(c,0,(int32_t)c->r[31],0); // 800D28C0
  if (crb(c,2)) { goto L_800D28D0; } // 800D28C4
  c->r[3]=c->r[31]|c->r[31]; // 800D28C8
  c->lr=0x800D28D0u; f_8009227C(c); // 800D28CC
L_800D28D0:;
  c->r[3]=0u+0x00000000u; // 800D28D0
  goto L_800D291C; // 800D28D4
L_800D28D8:;
  c->r[5]=c->r[28]|c->r[28]; // 800D28D8
  c->r[4]=0u+0x00000000u; // 800D28DC
  c->lr=0x800D28E4u; f_8000443C(c); // 800D28E0
  c->r[3]=c->r[30]|c->r[30]; // 800D28E4
  c->r[4]=c->r[29]|c->r[29]; // 800D28E8
  c->lr=0x800D28F0u; f_800E0354(c); // 800D28EC
  c->r[3]=c->r[31]|c->r[31]; // 800D28F0
  c->r[4]=c->r[30]|c->r[30]; // 800D28F4
  c->lr=0x800D28FCu; f_801FDE34(c); // 800D28F8
  c->r[3]=c->r[30]|c->r[30]; // 800D28FC
  c->r[4]=c->r[29]|c->r[29]; // 800D2900
  c->lr=0x800D2908u; f_800E0380(c); // 800D2904
  cmps(c,0,(int32_t)c->r[31],0); // 800D2908
  if (crb(c,2)) { goto L_800D2918; } // 800D290C
  c->r[3]=c->r[31]|c->r[31]; // 800D2910
  c->lr=0x800D2918u; f_8009227C(c); // 800D2914
L_800D2918:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2918
L_800D291C:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D291C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2920
  c->lr=c->r[0]; // 800D2924
  c->r[1]=c->r[1]+0x00000020u; // 800D2928
  return; // 800D292C
}

// fn_800D2930
void f_800D2930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2930
  c->r[0]=c->lr; // 800D2934
  c->r[4]=0u+0x80260000u; // 800D2938
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D293C
  c->r[4]=c->r[4]+0xFFFFF52Cu; // 800D2940
  c->r[4]=c->r[4]+0x0000027Fu; // 800D2944
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2948
  c->r[30]=c->r[3]|c->r[3]; // 800D294C
  c->r[3]=c->r[1]+0x00000008u; // 800D2950
  c->lr=0x800D2958u; f_8011410C(c); // 800D2954
  c->r[3]=c->r[1]+0x00000008u; // 800D2958
  c->r[4]=c->r[30]+0x00000078u; // 800D295C
  c->r[5]=0u+0x00000000u; // 800D2960
  c->r[6]=0u+0x00000005u; // 800D2964
  c->lr=0x800D296Cu; f_800D285C(c); // 800D2968
  cmps(c,0,(int32_t)c->r[3],0); // 800D296C
  W32(c->r[30]+0x00000118u,c->r[3]); // 800D2970
  if (!crb(c,2)) { goto L_800D2980; } // 800D2974
  c->r[3]=0u+0x00000000u; // 800D2978
  goto L_800D29C8; // 800D297C
L_800D2980:;
  c->r[31]=0u+0x00020000u; // 800D2980
  c->r[4]=0u+0x00000020u; // 800D2984
  c->r[3]=c->r[31]+0xFFFF8700u; // 800D2988
  c->r[5]=0u+0x00000001u; // 800D298C
  c->lr=0x800D2994u; f_8009210C(c); // 800D2990
  cmps(c,0,(int32_t)c->r[3],0); // 800D2994
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D2998
  if (!crb(c,2)) { goto L_800D29A8; } // 800D299C
  c->r[3]=0u+0x00000000u; // 800D29A0
  goto L_800D29C8; // 800D29A4
L_800D29A8:;
  c->r[4]=0u+0x00000000u; // 800D29A8
  c->r[5]=0u+0x00000004u; // 800D29AC
  c->lr=0x800D29B4u; f_8000443C(c); // 800D29B0
  c->r[3]=R32(c->r[30]+0x00000118u); // 800D29B4
  c->r[5]=c->r[31]+0xFFFF8700u; // 800D29B8
  c->r[4]=R32(c->r[30]+0x0000011Cu); // 800D29BC
  c->lr=0x800D29C4u; f_802302A8(c); // 800D29C0
  c->r[3]=0u+0x00000001u; // 800D29C4
L_800D29C8:;
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D29C8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D29CC
  c->lr=c->r[0]; // 800D29D0
  c->r[1]=c->r[1]+0x00000050u; // 800D29D4
  return; // 800D29D8
}

// fn_800D29DC
void f_800D29DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D29DC
  c->r[0]=c->lr; // 800D29E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D29E4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800D29E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800D29EC
  c->r[11]=c->r[1]+0x00000020u; // 800D29F0
  c->lr=0x800D29F8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D29F4
  {uint32_t ea=c->r[2]+0xFFFF8A98u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D29F8
  c->r[29]=c->r[4]|c->r[4]; // 800D29FC
  c->r[30]=0u+0x00000000u; // 800D2A00
  c->r[31]=0u+0x00000000u; // 800D2A04
L_800D2A08:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2A08
  c->r[4]=c->r[1]+0x00000008u; // 800D2A0C
  c->lr=0x800D2A14u; f_801626A4(c); // 800D2A10
  cmps(c,0,(int32_t)c->r[3],0); // 800D2A14
  if (!crb(c,2)) { goto L_800D2A38; } // 800D2A18
  c->r[3]=c->r[30]|c->r[30]; // 800D2A1C
  c->lr=0x800D2A24u; f_801750E4(c); // 800D2A20
  c->r[3]=c->r[29]+c->r[31]; // 800D2A24
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 800D2A28
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[31]);} // 800D2A2C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D2A30
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D2A34
L_800D2A38:;
  c->r[30]=c->r[30]+0x00000001u; // 800D2A38
  c->r[31]=c->r[31]+0x00000010u; // 800D2A3C
  cmps(c,0,(int32_t)c->r[30],4); // 800D2A40
  if (crb(c,0)) { IRQCHK(c); goto L_800D2A08; } // 800D2A44
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800D2A48
  c->r[11]=c->r[1]+0x00000020u; // 800D2A4C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800D2A50
  c->lr=0x800D2A58u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2A54
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D2A58
  c->lr=c->r[0]; // 800D2A5C
  c->r[1]=c->r[1]+0x00000030u; // 800D2A60
  return; // 800D2A64
}

// fn_800D2A68
void f_800D2A68(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 800D2A68
  if (!crb(c,2)) { goto L_800D2A80; } // 800D2A6C
  {uint32_t ea=c->r[2]+0xFFFF8AB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2A70
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800D2A74
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 800D2A78
  goto L_800D2A90; // 800D2A7C
L_800D2A80:;
  {uint32_t ea=c->r[2]+0xFFFF8ABCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2A80
  {uint32_t ea=c->r[2]+0xFFFF8AB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2A84
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[1]);} // 800D2A88
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 800D2A8C
L_800D2A90:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D2A90
  if (crb(c,2)) { goto L_800D2AA4; } // 800D2A94
  {uint32_t ea=c->r[2]+0xFFFF8AC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2A98
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800D2A9C
  return; // 800D2AA0
L_800D2AA4:;
  {uint32_t ea=c->r[2]+0xFFFF8AC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2AA4
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800D2AA8
  return; // 800D2AAC
}

// fn_800D2AB0
void f_800D2AB0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D2AB0
  W8(c->r[3]+0x00000000u,c->r[0]); // 800D2AB4
  return; // 800D2AB8
}

// fn_800D2ABC
void f_800D2ABC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D2ABC
  W32(c->r[13]+0xFFFF9510u,c->r[0]); // 800D2AC0
  return; // 800D2AC4
}

// fn_800D2AC8
void f_800D2AC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2AC8
  c->r[0]=c->lr; // 800D2ACC
  c->r[5]=0u+0x00000001u; // 800D2AD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2AD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2AD8
  c->r[30]=c->r[3]|c->r[3]; // 800D2ADC
  c->lr=0x800D2AE4u; f_8009210C(c); // 800D2AE0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2AE4
  c->r[31]=c->r[3]|c->r[3]; // 800D2AE8
  if (crb(c,2)) { goto L_800D2AFC; } // 800D2AEC
  c->r[5]=c->r[30]|c->r[30]; // 800D2AF0
  c->r[4]=0u+0x00000000u; // 800D2AF4
  c->lr=0x800D2AFCu; f_8000443C(c); // 800D2AF8
L_800D2AFC:;
  c->r[4]=R32(c->r[13]+0xFFFF9514u); // 800D2AFC
  c->r[3]=c->r[31]|c->r[31]; // 800D2B00
  c->r[0]=c->r[4]+0x00000001u; // 800D2B04
  W32(c->r[13]+0xFFFF9514u,c->r[0]); // 800D2B08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2B0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2B10
  c->lr=c->r[0]; // 800D2B14
  c->r[1]=c->r[1]+0x00000010u; // 800D2B18
  return; // 800D2B1C
}

// fn_800D2B20
void f_800D2B20(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800D2B20
  if (crb(c,2)) { goto L_800D2B34; } // 800D2B24
  c->r[4]=R32(c->r[13]+0xFFFF9514u); // 800D2B28
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800D2B2C
  W32(c->r[13]+0xFFFF9514u,c->r[0]); // 800D2B30
L_800D2B34:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2B34
  if (crb(c,2)) return; // 800D2B38
  f_8009227C(c); return; // 800D2B3C
  return; // 800D2B40
}

// fn_800D2B44
void f_800D2B44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2B44
  c->r[0]=c->lr; // 800D2B48
  c->r[5]=0u+0x00000001u; // 800D2B4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2B50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2B54
  c->r[30]=c->r[4]|c->r[4]; // 800D2B58
  c->r[4]=0u+0x00000020u; // 800D2B5C
  c->r[3]=c->r[30]|c->r[30]; // 800D2B60
  c->lr=0x800D2B68u; f_8009210C(c); // 800D2B64
  cmps(c,0,(int32_t)c->r[3],0); // 800D2B68
  c->r[31]=c->r[3]|c->r[3]; // 800D2B6C
  if (crb(c,2)) { goto L_800D2B80; } // 800D2B70
  c->r[5]=c->r[30]|c->r[30]; // 800D2B74
  c->r[4]=0u+0x00000000u; // 800D2B78
  c->lr=0x800D2B80u; f_8000443C(c); // 800D2B7C
L_800D2B80:;
  c->r[4]=R32(c->r[13]+0xFFFF9518u); // 800D2B80
  c->r[3]=c->r[31]|c->r[31]; // 800D2B84
  c->r[0]=c->r[4]+0x00000001u; // 800D2B88
  W32(c->r[13]+0xFFFF9518u,c->r[0]); // 800D2B8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2B90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2B94
  c->lr=c->r[0]; // 800D2B98
  c->r[1]=c->r[1]+0x00000010u; // 800D2B9C
  return; // 800D2BA0
}

// fn_800D2BA4
void f_800D2BA4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D2BA4
  if (crb(c,2)) { goto L_800D2BB8; } // 800D2BA8
  c->r[3]=R32(c->r[13]+0xFFFF9518u); // 800D2BAC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D2BB0
  W32(c->r[13]+0xFFFF9518u,c->r[0]); // 800D2BB4
L_800D2BB8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D2BB8
  if (crb(c,2)) return; // 800D2BBC
  c->r[3]=c->r[4]|c->r[4]; // 800D2BC0
  f_8009227C(c); return; // 800D2BC4
  return; // 800D2BC8
}

// fn_800D2BCC
void f_800D2BCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2BCC
  c->r[0]=c->lr; // 800D2BD0
  c->r[5]=0u+0x00000001u; // 800D2BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2BD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2BDC
  c->r[30]=c->r[3]|c->r[3]; // 800D2BE0
  c->lr=0x800D2BE8u; f_8009210C(c); // 800D2BE4
  cmps(c,0,(int32_t)c->r[3],0); // 800D2BE8
  c->r[31]=c->r[3]|c->r[3]; // 800D2BEC
  if (crb(c,2)) { goto L_800D2C00; } // 800D2BF0
  c->r[5]=c->r[30]|c->r[30]; // 800D2BF4
  c->r[4]=0u+0x00000000u; // 800D2BF8
  c->lr=0x800D2C00u; f_8000443C(c); // 800D2BFC
L_800D2C00:;
  c->r[4]=R32(c->r[13]+0xFFFF951Cu); // 800D2C00
  c->r[3]=c->r[31]|c->r[31]; // 800D2C04
  c->r[0]=c->r[4]+0x00000001u; // 800D2C08
  W32(c->r[13]+0xFFFF951Cu,c->r[0]); // 800D2C0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2C14
  c->lr=c->r[0]; // 800D2C18
  c->r[1]=c->r[1]+0x00000010u; // 800D2C1C
  return; // 800D2C20
}

// fn_800D2C24
void f_800D2C24(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800D2C24
  if (crb(c,2)) { goto L_800D2C38; } // 800D2C28
  c->r[4]=R32(c->r[13]+0xFFFF951Cu); // 800D2C2C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800D2C30
  W32(c->r[13]+0xFFFF951Cu,c->r[0]); // 800D2C34
L_800D2C38:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2C38
  if (crb(c,2)) return; // 800D2C3C
  f_8009227C(c); return; // 800D2C40
  return; // 800D2C44
}

// fn_800D2C48
void f_800D2C48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2C48
  c->r[0]=c->lr; // 800D2C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2C50
  c->r[0]=R32(c->r[13]+0xFFFF9510u); // 800D2C54
  cmps(c,0,(int32_t)c->r[0],0); // 800D2C58
  if (crb(c,2)) { goto L_800D2C78; } // 800D2C5C
  c->r[3]=0u+0x800D0000u; // 800D2C60
  c->r[3]=c->r[3]+0x00002ABCu; // 800D2C64
  c->lr=0x800D2C6Cu; f_80226D08(c); // 800D2C68
L_800D2C6C:;
  c->r[0]=R32(c->r[13]+0xFFFF9510u); // 800D2C6C
  cmps(c,0,(int32_t)c->r[0],0); // 800D2C70
  if (!crb(c,2)) { IRQCHK(c); goto L_800D2C6C; } // 800D2C74
L_800D2C78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2C78
  c->lr=c->r[0]; // 800D2C7C
  c->r[1]=c->r[1]+0x00000010u; // 800D2C80
  return; // 800D2C84
}

// fn_800D2C88
void f_800D2C88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2C88
  c->r[0]=c->lr; // 800D2C8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2C90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D2C94
  c->r[31]=c->r[5]|c->r[5]; // 800D2C98
  c->r[5]=c->r[1]+0x00000008u; // 800D2C9C
  c->lr=0x800D2CA4u; f_8012E10C(c); // 800D2CA0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2CA4
  if (!crb(c,2)) { goto L_800D2CB8; } // 800D2CA8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D2CAC
  c->r[0]=c->r[0]&c->r[31]; cr0(c,c->r[0]); // 800D2CB0
  if (crb(c,2)) { goto L_800D2CC0; } // 800D2CB4
L_800D2CB8:;
  c->r[3]=0u+0x00000000u; // 800D2CB8
  goto L_800D2CC4; // 800D2CBC
L_800D2CC0:;
  c->r[3]=0u+0x00000001u; // 800D2CC0
L_800D2CC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2CC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D2CC8
  c->lr=c->r[0]; // 800D2CCC
  c->r[1]=c->r[1]+0x00000020u; // 800D2CD0
  return; // 800D2CD4
}

// fn_800D2CD8
void f_800D2CD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2CD8
  c->r[0]=c->lr; // 800D2CDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2CE0
  c->r[11]=c->r[1]+0x00000020u; // 800D2CE4
  c->lr=0x800D2CECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D2CE8
  c->r[4]=0u+0x80280000u; // 800D2CEC
  c->r[30]=0u+0x00000000u; // 800D2CF0
  c->r[4]=c->r[4]+0x00001DB4u; // 800D2CF4
  W8(c->r[3]+0x00000004u,c->r[30]); // 800D2CF8
  c->r[29]=c->r[3]|c->r[3]; // 800D2CFC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D2D00
  c->r[3]=c->r[3]+0x00000008u; // 800D2D04
  c->lr=0x800D2D0Cu; f_80032504(c); // 800D2D08
  W32(c->r[29]+0x00000020u,c->r[30]); // 800D2D0C
  c->r[3]=c->r[29]+0x00000024u; // 800D2D10
  c->lr=0x800D2D18u; f_800CFC78(c); // 800D2D14
  c->r[31]=0u+0xFFFFFFFFu; // 800D2D18
  c->r[3]=c->r[29]+0x00000040u; // 800D2D1C
  W32(c->r[29]+0x0000003Cu,c->r[31]); // 800D2D20
  W32(c->r[29]+0x00000038u,c->r[31]); // 800D2D24
  c->lr=0x800D2D2Cu; f_8000C958(c); // 800D2D28
  c->r[3]=c->r[29]+0x0000004Cu; // 800D2D2C
  c->lr=0x800D2D34u; f_8000C958(c); // 800D2D30
  c->r[3]=c->r[29]+0x00000058u; // 800D2D34
  c->lr=0x800D2D3Cu; f_8000C958(c); // 800D2D38
  c->r[3]=c->r[29]+0x00000064u; // 800D2D3C
  c->lr=0x800D2D44u; f_8000C958(c); // 800D2D40
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D2D44
  c->r[11]=c->r[1]+0x00000020u; // 800D2D48
  W32(c->r[29]+0x00000070u,c->r[30]); // 800D2D4C
  c->r[3]=c->r[29]|c->r[29]; // 800D2D50
  W32(c->r[29]+0x00000074u,c->r[30]); // 800D2D54
  W32(c->r[29]+0x00000078u,c->r[31]); // 800D2D58
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[0]);} // 800D2D5C
  W32(c->r[29]+0x0000011Cu,c->r[30]); // 800D2D60
  W32(c->r[29]+0x00000120u,c->r[30]); // 800D2D64
  W32(c->r[29]+0x00000124u,c->r[30]); // 800D2D68
  W32(c->r[29]+0x00000128u,c->r[30]); // 800D2D6C
  W32(c->r[29]+0x0000012Cu,c->r[30]); // 800D2D70
  W32(c->r[29]+0x00000130u,c->r[30]); // 800D2D74
  W32(c->r[29]+0x00000134u,c->r[30]); // 800D2D78
  W32(c->r[29]+0x00000138u,c->r[30]); // 800D2D7C
  W32(c->r[29]+0x0000013Cu,c->r[30]); // 800D2D80
  W32(c->r[29]+0x00000140u,c->r[30]); // 800D2D84
  W32(c->r[29]+0x00000144u,c->r[30]); // 800D2D88
  W32(c->r[29]+0x00000148u,c->r[30]); // 800D2D8C
  W32(c->r[29]+0x0000014Cu,c->r[30]); // 800D2D90
  W32(c->r[29]+0x00000150u,c->r[30]); // 800D2D94
  W32(c->r[29]+0x00000154u,c->r[30]); // 800D2D98
  W32(c->r[29]+0x00000160u,c->r[30]); // 800D2D9C
  W32(c->r[29]+0x00000164u,c->r[30]); // 800D2DA0
  W32(c->r[29]+0x00000168u,c->r[30]); // 800D2DA4
  W32(c->r[29]+0x0000016Cu,c->r[30]); // 800D2DA8
  W32(c->r[29]+0x00000170u,c->r[30]); // 800D2DAC
  W32(c->r[29]+0x00000174u,c->r[30]); // 800D2DB0
  W32(c->r[29]+0x00000178u,c->r[31]); // 800D2DB4
  c->lr=0x800D2DBCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D2DB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2DBC
  c->lr=c->r[0]; // 800D2DC0
  c->r[1]=c->r[1]+0x00000020u; // 800D2DC4
  return; // 800D2DC8
}

// fn_800D2DCC
void f_800D2DCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2DCC
  c->r[0]=c->lr; // 800D2DD0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2DD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2DD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2DDC
  c->r[30]=c->r[3]|c->r[3]; // 800D2DE0
  c->r[31]=c->r[4]|c->r[4]; // 800D2DE4
  if (crb(c,2)) { goto L_800D2E48; } // 800D2DE8
  c->r[4]=0u+0x80280000u; // 800D2DEC
  c->r[4]=c->r[4]+0x00001DB4u; // 800D2DF0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D2DF4
  c->lr=0x800D2DFCu; f_800D2FA0(c); // 800D2DF8
  c->r[3]=c->r[30]+0x00000064u; // 800D2DFC
  c->r[4]=0u+0xFFFFFFFFu; // 800D2E00
  c->lr=0x800D2E08u; f_8000C978(c); // 800D2E04
  c->r[3]=c->r[30]+0x00000058u; // 800D2E08
  c->r[4]=0u+0xFFFFFFFFu; // 800D2E0C
  c->lr=0x800D2E14u; f_8000C978(c); // 800D2E10
  c->r[3]=c->r[30]+0x0000004Cu; // 800D2E14
  c->r[4]=0u+0xFFFFFFFFu; // 800D2E18
  c->lr=0x800D2E20u; f_8000C978(c); // 800D2E1C
  c->r[3]=c->r[30]+0x00000040u; // 800D2E20
  c->r[4]=0u+0xFFFFFFFFu; // 800D2E24
  c->lr=0x800D2E2Cu; f_8000C978(c); // 800D2E28
  c->r[3]=c->r[30]+0x00000008u; // 800D2E2C
  c->r[4]=0u+0xFFFFFFFFu; // 800D2E30
  c->lr=0x800D2E38u; f_80032534(c); // 800D2E34
  cmps(c,0,(int32_t)c->r[31],0); // 800D2E38
  if (!crb(c,1)) { goto L_800D2E48; } // 800D2E3C
  c->r[3]=c->r[30]|c->r[30]; // 800D2E40
  c->lr=0x800D2E48u; f_8009230C(c); // 800D2E44
L_800D2E48:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2E48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2E4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2E50
  c->lr=c->r[0]; // 800D2E54
  c->r[1]=c->r[1]+0x00000010u; // 800D2E58
  return; // 800D2E5C
}

// fn_800D2E60
void f_800D2E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2E60
  c->r[0]=c->lr; // 800D2E64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2E68
  c->r[0]=0u+0x00000000u; // 800D2E6C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2E70
  c->r[30]=c->r[3]|c->r[3]; // 800D2E74
  c->r[31]=c->r[4]|c->r[4]; // 800D2E78
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800D2E7C
  c->r[3]=0u+0x00000000u; // 800D2E80
  c->lr=0x800D2E88u; f_8021A87C(c); // 800D2E84
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D2E88
  c->r[3]=c->r[30]|c->r[30]; // 800D2E8C
  c->lr=0x800D2E94u; f_800D2FA0(c); // 800D2E90
  W32(c->r[30]+0x00000128u,c->r[31]); // 800D2E94
  c->r[3]=c->r[30]|c->r[30]; // 800D2E98
  c->r[4]=c->r[31]|c->r[31]; // 800D2E9C
  c->lr=0x800D2EA4u; f_800D5BCC(c); // 800D2EA0
  c->r[6]=0u+0x80260000u; // 800D2EA4
  {uint32_t ea=c->r[6]+0xFFFFF8E0u; c->r[5]=R32(ea); c->r[6]=ea;} // 800D2EA8
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D2EAC
  c->r[3]=R32(c->r[6]+0x00000008u); // 800D2EB0
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800D2EB4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D2EB8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D2EBC
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D2EC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2EC4
  c->lr=0x800D2ECCu; f_800E8F9C(c); // 800D2EC8
  c->r[3]=c->r[30]|c->r[30]; // 800D2ECC
  c->lr=0x800D2ED4u; f_800D6188(c); // 800D2ED0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2ED4
  if (!crb(c,2)) { goto L_800D2EEC; } // 800D2ED8
  c->r[0]=0u+0xFFFFF05Fu; // 800D2EDC
  c->r[3]=0u+0x00000000u; // 800D2EE0
  W32(c->r[30]+0x0000011Cu,c->r[0]); // 800D2EE4
  goto L_800D2F8C; // 800D2EE8
L_800D2EEC:;
  c->lr=0x800D2EF0u; f_800E8F9C(c); // 800D2EEC
  c->r[3]=0u+0x800D0000u; // 800D2EF0
  c->r[4]=0u+0x800D0000u; // 800D2EF4
  c->r[3]=c->r[3]+0x00002BCCu; // 800D2EF8
  c->r[5]=0u+0x00000010u; // 800D2EFC
  c->r[4]=c->r[4]+0x00002C24u; // 800D2F00
  c->lr=0x800D2F08u; f_80226C7C(c); // 800D2F04
  cmps(c,0,(int32_t)c->r[3],0); // 800D2F08
  if (crb(c,2)) { goto L_800D2F28; } // 800D2F0C
  c->lr=0x800D2F14u; f_80226D3C(c); // 800D2F10
  c->r[4]=c->r[3]+0x00030000u; // 800D2F14
  c->r[3]=0u+0x00000000u; // 800D2F18
  c->r[0]=c->r[4]+0x00002C1Cu; // 800D2F1C
  W32(c->r[30]+0x00000120u,c->r[0]); // 800D2F20
  goto L_800D2F8C; // 800D2F24
L_800D2F28:;
  c->r[31]=0u+0x00000001u; // 800D2F28
  W32(c->r[13]+0xFFFF9510u,c->r[31]); // 800D2F2C
  c->lr=0x800D2F34u; f_800E8F9C(c); // 800D2F30
  c->r[3]=c->r[1]+0x00000008u; // 800D2F34
  c->r[4]=0u+0x00000002u; // 800D2F38
  c->lr=0x800D2F40u; f_8020181C(c); // 800D2F3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2F40
  if (crb(c,2)) { goto L_800D2F5C; } // 800D2F44
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D2F48
  c->lr=0x800D2F50u; f_8021A87C(c); // 800D2F4C
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D2F50
  c->r[3]=0u+0x00000000u; // 800D2F54
  goto L_800D2F8C; // 800D2F58
L_800D2F5C:;
  W8(c->r[30]+0x00000004u,c->r[31]); // 800D2F5C
  c->lr=0x800D2F64u; f_800E8F9C(c); // 800D2F60
  c->lr=0x800D2F68u; f_80203060(c); // 800D2F64
  cmps(c,0,(int32_t)c->r[3],0); // 800D2F68
  if (crb(c,2)) { goto L_800D2F84; } // 800D2F6C
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D2F70
  c->lr=0x800D2F78u; f_8021A87C(c); // 800D2F74
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D2F78
  c->r[3]=0u+0x00000000u; // 800D2F7C
  goto L_800D2F8C; // 800D2F80
L_800D2F84:;
  c->lr=0x800D2F88u; f_800E8F9C(c); // 800D2F84
  c->r[3]=0u+0x00000001u; // 800D2F88
L_800D2F8C:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2F8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2F90
  c->lr=c->r[0]; // 800D2F94
  c->r[1]=c->r[1]+0x00000020u; // 800D2F98
  return; // 800D2F9C
}

// fn_800D2FA0
void f_800D2FA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2FA0
  c->r[0]=c->lr; // 800D2FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2FA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2FAC
  c->r[30]=c->r[3]|c->r[3]; // 800D2FB0
  c->r[0]=R8(c->r[3]+0x00000004u); // 800D2FB4
  cmps(c,0,(int32_t)c->r[0],0); // 800D2FB8
  if (crb(c,2)) { goto L_800D2FCC; } // 800D2FBC
  c->lr=0x800D2FC4u; f_80201918(c); // 800D2FC0
  c->r[0]=0u+0x00000000u; // 800D2FC4
  W8(c->r[30]+0x00000004u,c->r[0]); // 800D2FC8
L_800D2FCC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2FCC
  c->lr=0x800D2FD4u; f_800D5D6C(c); // 800D2FD0
  c->lr=0x800D2FD8u; f_800D2C48(c); // 800D2FD4
  c->lr=0x800D2FDCu; f_800D6224(c); // 800D2FD8
  c->r[0]=0u+0x00000000u; // 800D2FDC
  c->r[31]=0u+0x80260000u; // 800D2FE0
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800D2FE4
  c->r[3]=c->r[30]+0x00000040u; // 800D2FE8
  c->r[4]=c->r[31]+0xFFFFF900u; // 800D2FEC
  W32(c->r[30]+0x00000038u,c->r[0]); // 800D2FF0
  c->lr=0x800D2FF8u; f_80031D3C(c); // 800D2FF4
  c->r[3]=c->r[30]+0x0000004Cu; // 800D2FF8
  c->r[4]=c->r[31]+0xFFFFF900u; // 800D2FFC
  c->lr=0x800D3004u; f_80031D3C(c); // 800D3000
  c->r[3]=c->r[30]+0x00000058u; // 800D3004
  c->r[4]=c->r[31]+0xFFFFF900u; // 800D3008
  c->lr=0x800D3010u; f_80031D3C(c); // 800D300C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3010
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3014
  c->lr=c->r[0]; // 800D3018
  c->r[1]=c->r[1]+0x00000010u; // 800D301C
  return; // 800D3020
}

// fn_800D3024
void f_800D3024(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3024
  c->r[0]=c->lr; // 800D3028
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D302C
  c->r[11]=c->r[1]+0x00000020u; // 800D3030
  c->lr=0x800D3038u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3034
  c->r[31]=0u+0x00000000u; // 800D3038
  c->r[29]=c->r[3]|c->r[3]; // 800D303C
  W32(c->r[3]+0x0000011Cu,c->r[31]); // 800D3040
  c->r[30]=c->r[4]|c->r[4]; // 800D3044
  c->r[3]=0u+0x00000000u; // 800D3048
  c->lr=0x800D3050u; f_8021A87C(c); // 800D304C
  c->r[4]=0u+0x00000001u; // 800D3050
  c->r[0]=0u+0xFFFFF058u; // 800D3054
  W32(c->r[29]+0x00000120u,c->r[3]); // 800D3058
  c->r[3]=0u+0xFFFFF058u; // 800D305C
  W32(c->r[29]+0x00000128u,c->r[30]); // 800D3060
  W32(c->r[29]+0x00000070u,c->r[4]); // 800D3064
  W32(c->r[29]+0x00000074u,c->r[31]); // 800D3068
  W32(c->r[29]+0x0000011Cu,c->r[0]); // 800D306C
  c->lr=0x800D3074u; f_8021A87C(c); // 800D3070
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3074
  c->r[11]=c->r[1]+0x00000020u; // 800D3078
  W32(c->r[29]+0x00000120u,c->r[3]); // 800D307C
  c->r[3]=0u+0x00000001u; // 800D3080
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[0]);} // 800D3084
  c->lr=0x800D308Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3088
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D308C
  c->lr=c->r[0]; // 800D3090
  c->r[1]=c->r[1]+0x00000020u; // 800D3094
  return; // 800D3098
}

// fn_800D309C
void f_800D309C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D309C
  c->r[0]=c->lr; // 800D30A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D30A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D30A8
  c->r[31]=c->r[3]|c->r[3]; // 800D30AC
  c->lr=0x800D30B4u; f_800D34FC(c); // 800D30B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D30B4
  if (crb(c,2)) { goto L_800D30C4; } // 800D30B8
  c->r[3]=0u+0x00000000u; // 800D30BC
  goto L_800D30F4; // 800D30C0
L_800D30C4:;
  c->r[3]=0u+0x00000002u; // 800D30C4
  c->r[4]=0u+0x00000000u; // 800D30C8
  c->r[0]=0u+0xFFFFF058u; // 800D30CC
  W32(c->r[31]+0x00000070u,c->r[3]); // 800D30D0
  c->r[3]=0u+0xFFFFF058u; // 800D30D4
  W32(c->r[31]+0x00000074u,c->r[4]); // 800D30D8
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D30DC
  c->lr=0x800D30E4u; f_8021A87C(c); // 800D30E0
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D30E4
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D30E8
  c->r[3]=0u+0x00000001u; // 800D30EC
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D30F0
L_800D30F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D30F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D30F8
  c->lr=c->r[0]; // 800D30FC
  c->r[1]=c->r[1]+0x00000010u; // 800D3100
  return; // 800D3104
}

// fn_800D3108
void f_800D3108(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3108
  c->r[0]=c->lr; // 800D310C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3110
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3114
  c->r[31]=c->r[3]|c->r[3]; // 800D3118
  c->r[3]=c->r[4]|c->r[4]; // 800D311C
  c->lr=0x800D3124u; f_8010EB84(c); // 800D3120
  W32(c->r[31]+0x00000124u,c->r[3]); // 800D3124
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3128
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D312C
  c->lr=c->r[0]; // 800D3130
  c->r[1]=c->r[1]+0x00000010u; // 800D3134
  return; // 800D3138
}

// fn_800D313C
void f_800D313C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000070u); // 800D313C
  cmpu(c,0,c->r[0],0x00000008u); // 800D3140
  if (crb(c,1)) return; // 800D3144
  c->r[4]=0u+0x80280000u; // 800D3148
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D314C
  c->r[4]=c->r[4]+0x00001D20u; // 800D3150
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D3154
  c->ctr=c->r[4]; // 800D3158
  if (true) { switch (c->ctr) { case 0x800D3160u: goto L_800D3160; case 0x800D3164u: goto L_800D3164; case 0x800D3168u: goto L_800D3168; case 0x800D316Cu: goto L_800D316C; case 0x800D3170u: goto L_800D3170; case 0x800D3174u: goto L_800D3174; case 0x800D3178u: goto L_800D3178; case 0x800D317Cu: goto L_800D317C; case 0x800D3180u: goto L_800D3180; default: break; } dispatch(c,c->ctr); return; } // 800D315C
L_800D3160:;
  f_800D4D74(c); return; // 800D3160
L_800D3164:;
  f_800D4F78(c); return; // 800D3164
L_800D3168:;
  f_800D5050(c); return; // 800D3168
L_800D316C:;
  f_800D51C0(c); return; // 800D316C
L_800D3170:;
  f_800D54D0(c); return; // 800D3170
L_800D3174:;
  f_800D56EC(c); return; // 800D3174
L_800D3178:;
  f_800D59C0(c); return; // 800D3178
L_800D317C:;
  f_800D5AC8(c); return; // 800D317C
L_800D3180:;
  return; // 800D3180
}

// fn_800D3184
void f_800D3184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3184
  c->r[0]=c->lr; // 800D3188
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D318C
  c->r[0]=0u+0x00000000u; // 800D3190
  c->r[3]=c->r[1]+0x00000008u; // 800D3194
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D3198
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D319C
  c->lr=0x800D31A4u; f_80202E74(c); // 800D31A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D31A4
  if (!crb(c,2)) { goto L_800D31B4; } // 800D31A8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D31AC
  goto L_800D31B8; // 800D31B0
L_800D31B4:;
  c->r[3]=0u+0x00000000u; // 800D31B4
L_800D31B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D31B8
  c->lr=c->r[0]; // 800D31BC
  c->r[1]=c->r[1]+0x00000010u; // 800D31C0
  return; // 800D31C4
}

// fn_800D31C8
void f_800D31C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D31C8
  c->r[0]=c->lr; // 800D31CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D31D0
  c->r[4]=c->r[1]+0x00000008u; // 800D31D4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D31D8
  c->r[31]=0u+0x00000000u; // 800D31DC
  c->r[30]=c->r[3]|c->r[3]; // 800D31E0
  c->r[3]=0u+0x00000000u; // 800D31E4
  W32(c->r[1]+0x00000008u,c->r[31]); // 800D31E8
  c->lr=0x800D31F0u; f_802022B4(c); // 800D31EC
  c->r[3]=R32(c->r[30]+0x00000144u); // 800D31F0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D31F4
  cmpu(c,0,c->r[3],c->r[0]); // 800D31F8
  if (!crb(c,0)) { goto L_800D325C; } // 800D31FC
  c->r[3]=R32(c->r[30]+0x0000014Cu); // 800D3200
  cmps(c,0,(int32_t)c->r[3],0); // 800D3204
  if (crb(c,2)) { goto L_800D3214; } // 800D3208
  c->lr=0x800D3210u; f_8009227C(c); // 800D320C
  W32(c->r[30]+0x0000014Cu,c->r[31]); // 800D3210
L_800D3214:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D3214
  c->r[4]=0u+0x00000020u; // 800D3218
  c->r[5]=0u+0x00000001u; // 800D321C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800D3220
  c->r[0]=c->r[3]+0x0000001Fu; // 800D3224
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D3228
  c->r[3]=c->r[31]|c->r[31]; // 800D322C
  c->lr=0x800D3234u; f_8009210C(c); // 800D3230
  cmps(c,0,(int32_t)c->r[3],0); // 800D3234
  W32(c->r[30]+0x0000014Cu,c->r[3]); // 800D3238
  if (!crb(c,2)) { goto L_800D3248; } // 800D323C
  c->r[3]=0u+0x00000000u; // 800D3240
  goto L_800D32AC; // 800D3244
L_800D3248:;
  c->r[5]=c->r[31]|c->r[31]; // 800D3248
  c->r[4]=0u+0x00000000u; // 800D324C
  c->lr=0x800D3254u; f_8000443C(c); // 800D3250
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D3254
  W32(c->r[30]+0x00000144u,c->r[0]); // 800D3258
L_800D325C:;
  c->r[0]=R32(c->r[30]+0x00000144u); // 800D325C
  c->r[4]=c->r[30]+0x00000148u; // 800D3260
  c->r[3]=R32(c->r[30]+0x0000014Cu); // 800D3264
  W32(c->r[30]+0x00000148u,c->r[0]); // 800D3268
  c->lr=0x800D3270u; f_802022B4(c); // 800D326C
  cmps(c,0,(int32_t)c->r[3],-4070); // 800D3270
  if (crb(c,2)) { goto L_800D3280; } // 800D3274
  cmps(c,0,(int32_t)c->r[3],-4050); // 800D3278
  if (!crb(c,2)) { goto L_800D328C; } // 800D327C
L_800D3280:;
  c->r[0]=0u+0x00000000u; // 800D3280
  W32(c->r[30]+0x00000148u,c->r[0]); // 800D3284
  goto L_800D32A8; // 800D3288
L_800D328C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D328C
  if (crb(c,2)) { goto L_800D32A8; } // 800D3290
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D3294
  c->lr=0x800D329Cu; f_8021A87C(c); // 800D3298
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D329C
  c->r[3]=0u+0x00000000u; // 800D32A0
  goto L_800D32AC; // 800D32A4
L_800D32A8:;
  c->r[3]=0u+0x00000001u; // 800D32A8
L_800D32AC:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D32AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D32B0
  c->lr=c->r[0]; // 800D32B4
  c->r[1]=c->r[1]+0x00000020u; // 800D32B8
  return; // 800D32BC
}

// fn_800D32C0
void f_800D32C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D32C0
  c->r[0]=c->lr; // 800D32C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D32C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D32CC
  c->r[31]=c->r[3]|c->r[3]; // 800D32D0
  c->r[6]=c->r[31]+0x00000150u; // 800D32D4
  c->r[0]=R32(c->r[3]+0x00000128u); // 800D32D8
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 800D32DC
  W32(c->r[3]+0x00000150u,c->r[0]); // 800D32E0
  c->r[3]=R32(c->r[3]+0x00000038u); // 800D32E4
  c->r[5]=R32(c->r[31]+0x00000154u); // 800D32E8
  c->lr=0x800D32F0u; f_80202A98(c); // 800D32EC
  cmps(c,0,(int32_t)c->r[3],-4070); // 800D32F0
  if (crb(c,2)) { goto L_800D3300; } // 800D32F4
  cmps(c,0,(int32_t)c->r[3],-4050); // 800D32F8
  if (!crb(c,2)) { goto L_800D330C; } // 800D32FC
L_800D3300:;
  c->r[0]=0u+0x00000000u; // 800D3300
  W32(c->r[31]+0x00000150u,c->r[0]); // 800D3304
  goto L_800D3328; // 800D3308
L_800D330C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D330C
  if (crb(c,2)) { goto L_800D3328; } // 800D3310
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D3314
  c->lr=0x800D331Cu; f_8021A87C(c); // 800D3318
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D331C
  c->r[3]=0u+0x00000000u; // 800D3320
  goto L_800D332C; // 800D3324
L_800D3328:;
  c->r[3]=0u+0x00000001u; // 800D3328
L_800D332C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D332C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3330
  c->lr=c->r[0]; // 800D3334
  c->r[1]=c->r[1]+0x00000010u; // 800D3338
  return; // 800D333C
}

// fn_800D3340
void f_800D3340(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000150u); // 800D3340
  return; // 800D3344
}

// fn_800D3348
void f_800D3348(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000154u); // 800D3348
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 800D334C
  c->r[3]=c->r[3]+c->r[0]; // 800D3350
  c->r[3]=R16(c->r[3]+0x00000004u); // 800D3354
  return; // 800D3358
}

// fn_800D335C
void f_800D335C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000148u); // 800D335C
  c->r[4]=0u+0x00000000u; // 800D3360
  c->ctr=c->r[0]; // 800D3364
  cmpu(c,0,c->r[0],0x00000000u); // 800D3368
  if (!crb(c,1)) { goto L_800D33B4; } // 800D336C
L_800D3370:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 800D3370
  c->r[6]=R32(c->r[3]+0x00000038u); // 800D3374
  c->r[8]=c->r[0]+c->r[4]; // 800D3378
  c->r[0]=R32(c->r[4]+c->r[0]); // 800D337C
  c->r[7]=R32(c->r[3]+0x0000003Cu); // 800D3380
  c->r[5]=R32(c->r[8]+0x00000004u); // 800D3384
  c->r[0]=c->r[6]^c->r[0]; // 800D3388
  c->r[5]=c->r[7]^c->r[5]; // 800D338C
  c->r[0]=c->r[5]|c->r[0]; cr0(c,c->r[0]); // 800D3390
  if (!crb(c,2)) { goto L_800D33AC; } // 800D3394
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800D3398
  cmps(c,0,(int32_t)c->r[0],0); // 800D339C
  if (crb(c,2)) { goto L_800D33AC; } // 800D33A0
  c->r[3]=0u+0x00000001u; // 800D33A4
  return; // 800D33A8
L_800D33AC:;
  c->r[4]=c->r[4]+0x00000018u; // 800D33AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3370; } // 800D33B0
L_800D33B4:;
  c->r[3]=0u+0x00000000u; // 800D33B4
  return; // 800D33B8
}

// fn_800D33BC
void f_800D33BC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000150u); // 800D33BC
  c->r[5]=0u+0x00000000u; // 800D33C0
  c->ctr=c->r[0]; // 800D33C4
  cmpu(c,0,c->r[0],0x00000000u); // 800D33C8
  if (!crb(c,1)) { goto L_800D3400; } // 800D33CC
L_800D33D0:;
  c->r[0]=R32(c->r[3]+0x00000154u); // 800D33D0
  c->r[6]=c->r[0]+c->r[5]; // 800D33D4
  c->r[0]=R16(c->r[6]+0x00000004u); // 800D33D8
  cmpu(c,0,c->r[4],c->r[0]); // 800D33DC
  if (!crb(c,2)) { goto L_800D33F8; } // 800D33E0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D33E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D33E8
  if (crb(c,2)) { goto L_800D33F8; } // 800D33EC
  c->r[3]=0u+0x00000001u; // 800D33F0
  return; // 800D33F4
L_800D33F8:;
  c->r[5]=c->r[5]+0x00000010u; // 800D33F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D33D0; } // 800D33FC
L_800D3400:;
  c->r[3]=0u+0x00000000u; // 800D3400
  return; // 800D3404
}

// fn_800D3408
void f_800D3408(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3408
  c->r[0]=c->lr; // 800D340C
  c->r[4]=c->r[3]|c->r[3]; // 800D3410
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3414
  c->r[3]=R32(c->r[3]+0x00000038u); // 800D3418
  c->r[4]=R32(c->r[4]+0x0000003Cu); // 800D341C
  c->lr=0x800D3424u; f_802020C8(c); // 800D3420
  c->r[0]=cntlz(c->r[3]); // 800D3424
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D3428
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D342C
  c->lr=c->r[0]; // 800D3430
  c->r[1]=c->r[1]+0x00000010u; // 800D3434
  return; // 800D3438
}

// fn_800D343C
void f_800D343C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D343C
  c->r[0]=c->lr; // 800D3440
  c->r[6]=0u+0x00000001u; // 800D3444
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3448
  c->r[5]=c->r[1]+0x00000008u; // 800D344C
  W16(c->r[1]+0x00000008u,c->r[4]); // 800D3450
  c->r[4]=c->r[3]|c->r[3]; // 800D3454
  c->r[3]=R32(c->r[3]+0x00000038u); // 800D3458
  c->r[4]=R32(c->r[4]+0x0000003Cu); // 800D345C
  c->lr=0x800D3464u; f_8021C2C8(c); // 800D3460
  c->r[0]=cntlz(c->r[3]); // 800D3464
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D3468
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D346C
  c->lr=c->r[0]; // 800D3470
  c->r[1]=c->r[1]+0x00000010u; // 800D3474
  return; // 800D3478
}

// fn_800D347C
void f_800D347C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D347C
  c->r[0]=c->lr; // 800D3480
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3484
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3488
  c->r[29]=c->r[3]|c->r[3]; // 800D348C
  c->lr=0x800D3494u; f_800D32C0(c); // 800D3490
  c->r[30]=0u+0x00000000u; // 800D3494
  c->r[31]=0u+0x00000000u; // 800D3498
  goto L_800D34D0; // 800D349C
L_800D34A0:;
  c->r[0]=R32(c->r[29]+0x00000154u); // 800D34A0
  c->r[4]=R32(c->r[31]+c->r[0]); // 800D34A4
  c->r[3]=c->r[0]+c->r[31]; // 800D34A8
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 800D34AC
  if (!crb(c,2)) { goto L_800D34C8; } // 800D34B0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800D34B4
  if (crb(c,2)) { goto L_800D34C8; } // 800D34B8
  c->r[4]=R16(c->r[3]+0x00000004u); // 800D34BC
  c->r[3]=c->r[29]|c->r[29]; // 800D34C0
  c->lr=0x800D34C8u; f_800D343C(c); // 800D34C4
L_800D34C8:;
  c->r[30]=c->r[30]+0x00000001u; // 800D34C8
  c->r[31]=c->r[31]+0x00000010u; // 800D34CC
L_800D34D0:;
  c->r[0]=R32(c->r[29]+0x00000150u); // 800D34D0
  cmpu(c,0,c->r[30],c->r[0]); // 800D34D4
  if (crb(c,0)) { IRQCHK(c); goto L_800D34A0; } // 800D34D8
  c->r[3]=c->r[29]|c->r[29]; // 800D34DC
  c->lr=0x800D34E4u; f_800D32C0(c); // 800D34E0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D34E4
  c->r[3]=0u+0x00000001u; // 800D34E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D34EC
  c->lr=c->r[0]; // 800D34F0
  c->r[1]=c->r[1]+0x00000020u; // 800D34F4
  return; // 800D34F8
}

// fn_800D34FC
void f_800D34FC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000070u); // 800D34FC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D3500
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D3504
  return; // 800D3508
}

// fn_800D350C
void f_800D350C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D350C
  return; // 800D3510
}

// fn_800D3514
void f_800D3514(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3514
  c->r[0]=c->lr; // 800D3518
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D351C
  c->r[0]=0u+0x00000000u; // 800D3520
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3524
  c->r[31]=c->r[3]|c->r[3]; // 800D3528
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800D352C
  c->r[3]=0u+0x00000000u; // 800D3530
  c->lr=0x800D3538u; f_8021A87C(c); // 800D3534
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D3538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D353C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3540
  c->lr=c->r[0]; // 800D3544
  c->r[1]=c->r[1]+0x00000010u; // 800D3548
  return; // 800D354C
}

// fn_800D3550
void f_800D3550(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000124u); // 800D3550
  cmps(c,0,(int32_t)c->r[0],0); // 800D3554
  if (crb(c,2)) { goto L_800D3564; } // 800D3558
  c->r[3]=0u+0xFFFFF05Fu; // 800D355C
  return; // 800D3560
L_800D3564:;
  c->r[3]=R32(c->r[3]+0x0000011Cu); // 800D3564
  return; // 800D3568
}

// fn_800D356C
void f_800D356C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000098u); // 800D356C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800D3570
  if (crb(c,2)) { goto L_800D3580; } // 800D3574
  c->r[3]=c->r[3]+0x00000098u; // 800D3578
  return; // 800D357C
L_800D3580:;
  c->r[3]=0u+0x00000000u; // 800D3580
  return; // 800D3584
}

// fn_800D3588
void f_800D3588(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000124u); // 800D3588
  cmps(c,0,(int32_t)c->r[0],0); // 800D358C
  if (crb(c,2)) { goto L_800D359C; } // 800D3590
  c->r[3]=c->r[0]|c->r[0]; // 800D3594
  return; // 800D3598
L_800D359C:;
  c->r[3]=R32(c->r[3]+0x00000120u); // 800D359C
  return; // 800D35A0
}

// fn_800D35A4
void f_800D35A4(Ctx* __restrict c) {
  c->r[4]=0u+0x802B0000u; // 800D35A4
  c->r[4]=c->r[4]+0x00001B78u; // 800D35A8
  c->r[0]=R32(c->r[4]+0x00000020u); // 800D35AC
  cmps(c,0,(int32_t)c->r[0],0); // 800D35B0
  if (!crb(c,2)) { goto L_800D35D4; } // 800D35B4
  c->r[5]=0u+0x77460000u; // 800D35B8
  c->r[4]=0u+0x00010000u; // 800D35BC
  c->r[5]=c->r[5]+0x0000434Au; // 800D35C0
  c->r[0]=c->r[4]+0x00000005u; // 800D35C4
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 800D35C8
  W32(c->r[3]+0x00000038u,c->r[0]); // 800D35CC
  return; // 800D35D0
L_800D35D4:;
  cmps(c,0,(int32_t)c->r[0],2); // 800D35D4
  if (!crb(c,2)) { goto L_800D35F8; } // 800D35D8
  c->r[5]=0u+0x77460000u; // 800D35DC
  c->r[4]=0u+0x00010000u; // 800D35E0
  c->r[5]=c->r[5]+0x00004350u; // 800D35E4
  c->r[0]=c->r[4]+0x00000005u; // 800D35E8
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 800D35EC
  W32(c->r[3]+0x00000038u,c->r[0]); // 800D35F0
  return; // 800D35F4
L_800D35F8:;
  c->r[5]=0u+0x77460000u; // 800D35F8
  c->r[4]=0u+0x00010000u; // 800D35FC
  c->r[5]=c->r[5]+0x00004345u; // 800D3600
  c->r[0]=c->r[4]+0x00000005u; // 800D3604
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 800D3608
  W32(c->r[3]+0x00000038u,c->r[0]); // 800D360C
  return; // 800D3610
}

// fn_800D3614
void f_800D3614(Ctx* __restrict c) {
  c->r[4]=0u+0x802B0000u; // 800D3614
  c->r[4]=c->r[4]+0x00001B78u; // 800D3618
  c->r[0]=R32(c->r[4]+0x00000020u); // 800D361C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3620
  if (!crb(c,2)) { goto L_800D363C; } // 800D3624
  c->r[5]=0u+0x80260000u; // 800D3628
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D362C
  c->r[4]=c->r[5]+0x00000001u; // 800D3630
  c->r[5]=c->r[5]+0x00000012u; // 800D3634
  f_800D366C(c); return; // 800D3638
L_800D363C:;
  cmps(c,0,(int32_t)c->r[0],2); // 800D363C
  if (!crb(c,2)) { goto L_800D3658; } // 800D3640
  c->r[5]=0u+0x80260000u; // 800D3644
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D3648
  c->r[4]=c->r[5]+0x0000001Du; // 800D364C
  c->r[5]=c->r[5]+0x0000002Eu; // 800D3650
  f_800D366C(c); return; // 800D3654
L_800D3658:;
  c->r[5]=0u+0x80260000u; // 800D3658
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D365C
  c->r[4]=c->r[5]+0x00000038u; // 800D3660
  c->r[5]=c->r[5]+0x00000049u; // 800D3664
  f_800D366C(c); return; // 800D3668
}

// fn_800D366C
void f_800D366C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D366C
  c->r[0]=c->lr; // 800D3670
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3674
  c->r[11]=c->r[1]+0x00000020u; // 800D3678
  c->lr=0x800D3680u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D367C
  c->r[29]=c->r[3]|c->r[3]; // 800D3680
  c->r[30]=c->r[4]|c->r[4]; // 800D3684
  c->r[31]=c->r[5]|c->r[5]; // 800D3688
  c->lr=0x800D3690u; f_800D34FC(c); // 800D368C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3690
  if (crb(c,2)) { goto L_800D36A0; } // 800D3694
  c->r[3]=0u+0x00000000u; // 800D3698
  goto L_800D36EC; // 800D369C
L_800D36A0:;
  c->r[4]=c->r[30]|c->r[30]; // 800D36A0
  c->r[3]=c->r[29]+0x00000040u; // 800D36A4
  c->lr=0x800D36ACu; f_80031D3C(c); // 800D36A8
  c->r[4]=c->r[31]|c->r[31]; // 800D36AC
  c->r[3]=c->r[29]+0x0000004Cu; // 800D36B0
  c->lr=0x800D36B8u; f_80031D3C(c); // 800D36B4
  c->r[5]=0u+0x00000000u; // 800D36B8
  c->r[4]=0u+0x00000003u; // 800D36BC
  c->r[0]=0u+0xFFFFF058u; // 800D36C0
  W8(c->r[29]+0x00000005u,c->r[5]); // 800D36C4
  c->r[3]=0u+0xFFFFF058u; // 800D36C8
  W32(c->r[29]+0x00000070u,c->r[4]); // 800D36CC
  W32(c->r[29]+0x00000074u,c->r[5]); // 800D36D0
  W32(c->r[29]+0x0000011Cu,c->r[0]); // 800D36D4
  c->lr=0x800D36DCu; f_8021A87C(c); // 800D36D8
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D36DC
  W32(c->r[29]+0x00000120u,c->r[3]); // 800D36E0
  c->r[3]=0u+0x00000001u; // 800D36E4
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[0]);} // 800D36E8
L_800D36EC:;
  c->r[11]=c->r[1]+0x00000020u; // 800D36EC
  c->lr=0x800D36F4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D36F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D36F4
  c->lr=c->r[0]; // 800D36F8
  c->r[1]=c->r[1]+0x00000020u; // 800D36FC
  return; // 800D3700
}

// fn_800D3704
void f_800D3704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3704
  c->r[0]=c->lr; // 800D3708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D370C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3710
  c->r[31]=c->r[3]|c->r[3]; // 800D3714
  c->lr=0x800D371Cu; f_800D34FC(c); // 800D3718
  cmps(c,0,(int32_t)c->r[3],0); // 800D371C
  if (crb(c,2)) { goto L_800D372C; } // 800D3720
  c->r[3]=0u+0x00000000u; // 800D3724
  goto L_800D3760; // 800D3728
L_800D372C:;
  c->r[5]=0u+0x00000000u; // 800D372C
  c->r[4]=0u+0x00000004u; // 800D3730
  c->r[0]=0u+0xFFFFF058u; // 800D3734
  W8(c->r[31]+0x00000005u,c->r[5]); // 800D3738
  c->r[3]=0u+0xFFFFF058u; // 800D373C
  W32(c->r[31]+0x00000070u,c->r[4]); // 800D3740
  W32(c->r[31]+0x00000074u,c->r[5]); // 800D3744
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D3748
  c->lr=0x800D3750u; f_8021A87C(c); // 800D374C
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D3750
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D3754
  c->r[3]=0u+0x00000001u; // 800D3758
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D375C
L_800D3760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3764
  c->lr=c->r[0]; // 800D3768
  c->r[1]=c->r[1]+0x00000010u; // 800D376C
  return; // 800D3770
}

// fn_800D3774
void f_800D3774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3774
  c->r[0]=c->lr; // 800D3778
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D377C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3780
  c->r[30]=c->r[3]|c->r[3]; // 800D3784
  c->r[31]=0u+0x00000000u; // 800D3788
  c->r[5]=R32(c->r[3]+0x00000038u); // 800D378C
  c->r[6]=R32(c->r[3]+0x0000003Cu); // 800D3790
  c->lr=0x800D3798u; f_800D3DA8(c); // 800D3794
  cmps(c,0,(int32_t)c->r[3],0); // 800D3798
  if (crb(c,2)) { goto L_800D37AC; } // 800D379C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D37A0
  cmps(c,0,(int32_t)c->r[0],0); // 800D37A4
  if (!crb(c,2)) { goto L_800D37FC; } // 800D37A8
L_800D37AC:;
  c->r[5]=R32(c->r[30]+0x00000038u); // 800D37AC
  c->r[3]=c->r[30]|c->r[30]; // 800D37B0
  c->r[6]=R32(c->r[30]+0x0000003Cu); // 800D37B4
  c->lr=0x800D37BCu; f_800D3E34(c); // 800D37B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D37BC
  c->r[8]=c->r[3]|c->r[3]; // 800D37C0
  if (crb(c,2)) { goto L_800D37FC; } // 800D37C4
  c->r[0]=0u+0x00000000u; // 800D37C8
  c->r[5]=0u+0x80260000u; // 800D37CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D37D0
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D37D4
  c->r[6]=c->r[5]+0x00000054u; // 800D37D8
  c->r[3]=c->r[30]|c->r[30]; // 800D37DC
  c->r[4]=R32(c->r[8]+0x00000018u); // 800D37E0
  c->r[7]=c->r[1]+0x00000010u; // 800D37E4
  c->r[5]=R32(c->r[8]+0x0000001Cu); // 800D37E8
  c->lr=0x800D37F0u; f_800D4C64(c); // 800D37EC
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D37F0
  c->r[0]=c->r[3]+0x00003FFFu; // 800D37F4
  c->r[31]=rotl(c->r[0],18)&0x0003FFFFu; // 800D37F8
L_800D37FC:;
  c->r[10]=R32(c->r[30]+0x00000150u); // 800D37FC
  c->r[3]=0u+0x00000000u; // 800D3800
  c->r[4]=0u+0x00000000u; // 800D3804
  c->r[9]=0u+0x00003FFFu; // 800D3808
  c->r[8]=0u+0x00000000u; // 800D380C
  goto L_800D38A0; // 800D3810
L_800D3814:;
  c->r[0]=R32(c->r[30]+0x00000154u); // 800D3814
  c->r[7]=c->r[0]+c->r[4]; // 800D3818
  c->r[0]=R32(c->r[4]+c->r[0]); // 800D381C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D3820
  if (crb(c,2)) { goto L_800D3898; } // 800D3824
  c->r[0]=R32(c->r[30]+0x00000158u); // 800D3828
  c->r[5]=0u+0x00000000u; // 800D382C
  c->ctr=c->r[0]; // 800D3830
  cmpu(c,0,c->r[0],0x00000000u); // 800D3834
  if (!crb(c,1)) { goto L_800D3898; } // 800D3838
L_800D383C:;
  c->r[0]=R32(c->r[30]+0x0000015Cu); // 800D383C
  c->r[6]=R16(c->r[7]+0x00000004u); // 800D3840
  c->r[11]=c->r[0]+c->r[5]; // 800D3844
  c->r[0]=R16(c->r[11]+0x00000004u); // 800D3848
  cmpu(c,0,c->r[6],c->r[0]); // 800D384C
  if (!crb(c,2)) { goto L_800D3890; } // 800D3850
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800D3854
  c->r[5]=R32(c->r[7]+0x00000008u); // 800D3858
  c->r[6]=addc(c,c->r[0],c->r[9],0); // 800D385C
  c->r[0]=R32(c->r[11]+0x0000000Cu); // 800D3860
  c->r[7]=addc(c,c->r[5],c->r[8],c->xer_ca); // 800D3864
  c->r[5]=R32(c->r[11]+0x00000008u); // 800D3868
  c->r[0]=addc(c,c->r[0],c->r[9],0); // 800D386C
  c->r[6]=rotl(c->r[6],18)&0xFFFFFFFFu; // 800D3870
  c->r[5]=addc(c,c->r[5],c->r[8],c->xer_ca); // 800D3874
  c->r[0]=rotl(c->r[0],18)&0xFFFFFFFFu; // 800D3878
  c->r[6]=(rotl(c->r[7],18)&0xFFFC0000u)|(c->r[6]&~0xFFFC0000u); // 800D387C
  c->r[0]=(rotl(c->r[5],18)&0xFFFC0000u)|(c->r[0]&~0xFFFC0000u); // 800D3880
  c->r[0]=c->r[0]-c->r[6]; // 800D3884
  c->r[31]=c->r[31]+c->r[0]; // 800D3888
  goto L_800D3898; // 800D388C
L_800D3890:;
  c->r[5]=c->r[5]+0x00000010u; // 800D3890
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D383C; } // 800D3894
L_800D3898:;
  c->r[3]=c->r[3]+0x00000001u; // 800D3898
  c->r[4]=c->r[4]+0x00000010u; // 800D389C
L_800D38A0:;
  cmpu(c,0,c->r[3],c->r[10]); // 800D38A0
  if (crb(c,0)) { IRQCHK(c); goto L_800D3814; } // 800D38A4
  c->r[0]=0u+0x00000000u; // 800D38A8
  c->r[4]=c->r[1]+0x0000000Cu; // 800D38AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D38B0
  c->r[5]=c->r[1]+0x00000008u; // 800D38B4
  c->r[3]=0u+0x00000000u; // 800D38B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D38BC
  c->lr=0x800D38C4u; f_80202FC4(c); // 800D38C0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D38C4
  c->r[31]=c->r[31]+c->r[0]; // 800D38C8
  c->r[0]=sraw(c,c->r[31],31); // 800D38CC
  c->r[3]=c->r[31]&~c->r[0]; // 800D38D0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D38D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D38D8
  c->lr=c->r[0]; // 800D38DC
  c->r[1]=c->r[1]+0x00000020u; // 800D38E0
  return; // 800D38E4
}

// fn_800D38E8
void f_800D38E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D38E8
  c->r[0]=c->lr; // 800D38EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D38F0
  c->lr=0x800D38F8u; f_800D3774(c); // 800D38F4
  c->r[3]=rotl(c->r[3],14)&0xFFFFC000u; // 800D38F8
  c->r[3]=c->r[3]+0x00020000u; // 800D38FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D3900
  c->r[3]=rotl(c->r[0],15)&0x00007FFFu; // 800D3904
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3908
  c->lr=c->r[0]; // 800D390C
  c->r[1]=c->r[1]+0x00000010u; // 800D3910
  return; // 800D3914
}

// fn_800D3918
void f_800D3918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3918
  c->r[0]=c->lr; // 800D391C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D3920
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3924
  c->r[29]=c->r[3]|c->r[3]; // 800D3928
  c->r[31]=0u+0x00000000u; // 800D392C
  c->r[30]=0u+0x00000000u; // 800D3930
  c->r[5]=R32(c->r[3]+0x00000038u); // 800D3934
  c->r[6]=R32(c->r[3]+0x0000003Cu); // 800D3938
  c->lr=0x800D3940u; f_800D3DA8(c); // 800D393C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3940
  if (crb(c,2)) { goto L_800D3954; } // 800D3944
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D3948
  cmps(c,0,(int32_t)c->r[0],0); // 800D394C
  if (!crb(c,2)) { goto L_800D399C; } // 800D3950
L_800D3954:;
  c->r[5]=R32(c->r[29]+0x00000038u); // 800D3954
  c->r[3]=c->r[29]|c->r[29]; // 800D3958
  c->r[6]=R32(c->r[29]+0x0000003Cu); // 800D395C
  c->lr=0x800D3964u; f_800D3E34(c); // 800D3960
  cmps(c,0,(int32_t)c->r[3],0); // 800D3964
  c->r[8]=c->r[3]|c->r[3]; // 800D3968
  if (crb(c,2)) { goto L_800D399C; } // 800D396C
  c->r[0]=0u+0x00000000u; // 800D3970
  c->r[5]=0u+0x80260000u; // 800D3974
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D3978
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D397C
  c->r[6]=c->r[5]+0x00000064u; // 800D3980
  c->r[3]=c->r[29]|c->r[29]; // 800D3984
  c->r[4]=R32(c->r[8]+0x00000018u); // 800D3988
  c->r[7]=c->r[1]+0x00000010u; // 800D398C
  c->r[5]=R32(c->r[8]+0x0000001Cu); // 800D3990
  c->lr=0x800D3998u; f_800D4C64(c); // 800D3994
  c->r[30]=R32(c->r[1]+0x00000010u); // 800D3998
L_800D399C:;
  c->r[8]=R32(c->r[29]+0x00000150u); // 800D399C
  c->r[9]=0u+0x00000000u; // 800D39A0
  c->r[3]=0u+0x00000000u; // 800D39A4
  goto L_800D3A04; // 800D39A8
L_800D39AC:;
  c->r[4]=R32(c->r[29]+0x00000154u); // 800D39AC
  c->r[0]=R32(c->r[4]+c->r[3]); // 800D39B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D39B4
  if (crb(c,2)) { goto L_800D39FC; } // 800D39B8
  c->r[0]=R32(c->r[29]+0x00000158u); // 800D39BC
  c->r[7]=c->r[4]+c->r[3]; // 800D39C0
  c->r[4]=0u+0x00000000u; // 800D39C4
  c->ctr=c->r[0]; // 800D39C8
  cmpu(c,0,c->r[0],0x00000000u); // 800D39CC
  if (!crb(c,1)) { goto L_800D39FC; } // 800D39D0
L_800D39D4:;
  c->r[0]=R32(c->r[29]+0x0000015Cu); // 800D39D4
  c->r[6]=R16(c->r[7]+0x00000004u); // 800D39D8
  c->r[5]=c->r[0]+c->r[4]; // 800D39DC
  c->r[0]=R16(c->r[5]+0x00000004u); // 800D39E0
  cmpu(c,0,c->r[6],c->r[0]); // 800D39E4
  if (!crb(c,2)) { goto L_800D39F4; } // 800D39E8
  c->r[31]=c->r[31]+0x00000001u; // 800D39EC
  goto L_800D39FC; // 800D39F0
L_800D39F4:;
  c->r[4]=c->r[4]+0x00000010u; // 800D39F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D39D4; } // 800D39F8
L_800D39FC:;
  c->r[9]=c->r[9]+0x00000001u; // 800D39FC
  c->r[3]=c->r[3]+0x00000010u; // 800D3A00
L_800D3A04:;
  cmpu(c,0,c->r[9],c->r[8]); // 800D3A04
  if (crb(c,0)) { IRQCHK(c); goto L_800D39AC; } // 800D3A08
  c->r[0]=0u+0x00000000u; // 800D3A0C
  c->r[4]=c->r[1]+0x0000000Cu; // 800D3A10
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D3A14
  c->r[5]=c->r[1]+0x00000008u; // 800D3A18
  c->r[3]=0u+0x00000000u; // 800D3A1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D3A20
  c->lr=0x800D3A28u; f_80202FC4(c); // 800D3A24
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D3A28
  c->r[30]=c->r[30]+c->r[0]; // 800D3A2C
  c->r[31]=c->r[31]+c->r[30]; // 800D3A30
  c->r[0]=sraw(c,c->r[31],31); // 800D3A34
  c->r[3]=c->r[31]&~c->r[0]; // 800D3A38
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3A3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D3A40
  c->lr=c->r[0]; // 800D3A44
  c->r[1]=c->r[1]+0x00000030u; // 800D3A48
  return; // 800D3A4C
}

// fn_800D3A50
void f_800D3A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3A50
  c->r[0]=c->lr; // 800D3A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3A5C
  c->r[31]=c->r[3]|c->r[3]; // 800D3A60
  c->r[3]=c->r[3]+0x00000058u; // 800D3A64
  c->lr=0x800D3A6Cu; f_80031D3C(c); // 800D3A68
  c->r[3]=c->r[31]|c->r[31]; // 800D3A6C
  c->lr=0x800D3A74u; f_800D3A88(c); // 800D3A70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3A74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3A78
  c->lr=c->r[0]; // 800D3A7C
  c->r[1]=c->r[1]+0x00000010u; // 800D3A80
  return; // 800D3A84
}

// fn_800D3A88
void f_800D3A88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3A88
  c->r[0]=c->lr; // 800D3A8C
  c->r[3]=c->r[3]+0x00000058u; // 800D3A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3A94
  c->lr=0x800D3A9Cu; f_80031DA0(c); // 800D3A98
  c->r[5]=0u+0x80260000u; // 800D3A9C
  c->r[4]=c->r[3]|c->r[3]; // 800D3AA0
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D3AA4
  c->r[3]=c->r[5]+0x00000072u; // 800D3AA8
  c->lr=0x800D3AB0u; f_80201BF0(c); // 800D3AAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3AB0
  if (!crb(c,2)) { goto L_800D3AC0; } // 800D3AB4
  c->r[3]=0u+0x00000001u; // 800D3AB8
  goto L_800D3AE4; // 800D3ABC
L_800D3AC0:;
  cmps(c,0,(int32_t)c->r[3],-4074); // 800D3AC0
  if (!crb(c,2)) { goto L_800D3AD0; } // 800D3AC4
  c->r[3]=0u+0x00000000u; // 800D3AC8
  goto L_800D3AE4; // 800D3ACC
L_800D3AD0:;
  cmps(c,0,(int32_t)c->r[3],-4075); // 800D3AD0
  if (!crb(c,2)) { goto L_800D3AE0; } // 800D3AD4
  c->r[3]=0u+0x00000001u; // 800D3AD8
  goto L_800D3AE4; // 800D3ADC
L_800D3AE0:;
  c->r[3]=0u+0x00000000u; // 800D3AE0
L_800D3AE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3AE4
  c->lr=c->r[0]; // 800D3AE8
  c->r[1]=c->r[1]+0x00000010u; // 800D3AEC
  return; // 800D3AF0
}

// fn_800D3AF4
void f_800D3AF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3AF4
  c->r[0]=c->lr; // 800D3AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3AFC
  c->r[0]=0u+0x00000000u; // 800D3B00
  c->r[3]=c->r[1]+0x00000008u; // 800D3B04
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D3B08
  c->lr=0x800D3B10u; f_80201FEC(c); // 800D3B0C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3B10
  if (!crb(c,2)) { goto L_800D3B20; } // 800D3B14
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D3B18
  goto L_800D3B24; // 800D3B1C
L_800D3B20:;
  c->r[3]=0u+0x00000000u; // 800D3B20
L_800D3B24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3B24
  c->lr=c->r[0]; // 800D3B28
  c->r[1]=c->r[1]+0x00000010u; // 800D3B2C
  return; // 800D3B30
}

// fn_800D3B34
void f_800D3B34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3B34
  c->r[0]=c->lr; // 800D3B38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3B3C
  c->r[0]=0u+0x00000000u; // 800D3B40
  c->r[3]=c->r[1]+0x0000000Cu; // 800D3B44
  c->r[4]=c->r[1]+0x00000008u; // 800D3B48
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D3B4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D3B50
  c->lr=0x800D3B58u; f_8012E214(c); // 800D3B54
  cmps(c,0,(int32_t)c->r[3],0); // 800D3B58
  if (!crb(c,2)) { goto L_800D3B68; } // 800D3B5C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D3B60
  goto L_800D3B6C; // 800D3B64
L_800D3B68:;
  c->r[3]=0u+0x00000000u; // 800D3B68
L_800D3B6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3B6C
  c->lr=c->r[0]; // 800D3B70
  c->r[1]=c->r[1]+0x00000010u; // 800D3B74
  return; // 800D3B78
}

// fn_800D3B7C
void f_800D3B7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3B7C
  c->r[0]=c->lr; // 800D3B80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3B84
  c->lr=0x800D3B8Cu; f_800D3B34(c); // 800D3B88
  c->r[0]=rotl(c->r[3],14)&0xFFFFC000u; // 800D3B8C
  c->r[0]=sraw(c,c->r[0],17); // 800D3B90
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 800D3B94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3B98
  c->lr=c->r[0]; // 800D3B9C
  c->r[1]=c->r[1]+0x00000010u; // 800D3BA0
  return; // 800D3BA4
}

// fn_800D3BA8
void f_800D3BA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3BA8
  c->r[0]=c->lr; // 800D3BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3BB0
  c->r[0]=0u+0x00000000u; // 800D3BB4
  c->r[3]=c->r[1]+0x0000000Cu; // 800D3BB8
  c->r[4]=c->r[1]+0x00000008u; // 800D3BBC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D3BC0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D3BC4
  c->lr=0x800D3BCCu; f_8012E214(c); // 800D3BC8
  cmps(c,0,(int32_t)c->r[3],0); // 800D3BCC
  if (!crb(c,2)) { goto L_800D3BDC; } // 800D3BD0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D3BD4
  goto L_800D3BE0; // 800D3BD8
L_800D3BDC:;
  c->r[3]=0u+0x00000000u; // 800D3BDC
L_800D3BE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3BE0
  c->lr=c->r[0]; // 800D3BE4
  c->r[1]=c->r[1]+0x00000010u; // 800D3BE8
  return; // 800D3BEC
}

// fn_800D3BF0
void f_800D3BF0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000168u); // 800D3BF0
  return; // 800D3BF4
}

// fn_800D3BF8
void f_800D3BF8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D3BF8
  if (crb(c,0)) { goto L_800D3C30; } // 800D3BFC
  c->r[0]=R32(c->r[3]+0x00000168u); // 800D3C00
  cmpu(c,0,c->r[4],c->r[0]); // 800D3C04
  if (!crb(c,0)) { goto L_800D3C30; } // 800D3C08
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 800D3C0C
  c->r[3]=R32(c->r[3]+0x0000016Cu); // 800D3C10
  c->r[3]=c->r[3]+c->r[0]; // 800D3C14
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D3C18
  cmps(c,0,(int32_t)c->r[0],0); // 800D3C1C
  if (crb(c,2)) { goto L_800D3C30; } // 800D3C20
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D3C24
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D3C28
  return; // 800D3C2C
L_800D3C30:;
  c->r[3]=0u+0xFFFFFFFFu; // 800D3C30
  return; // 800D3C34
}

// fn_800D3C38
void f_800D3C38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3C38
  c->r[0]=c->lr; // 800D3C3C
  c->r[4]=0u+0x80280000u; // 800D3C40
  c->r[5]=c->r[3]+0x00000160u; // 800D3C44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3C48
  c->r[0]=0u+0x00000001u; // 800D3C4C
  c->r[4]=c->r[4]+0x00001CD0u; // 800D3C50
  c->r[6]=0u+0x00000000u; // 800D3C54
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3C58
  c->r[31]=0u+0x00000000u; // 800D3C5C
  c->r[30]=c->r[3]|c->r[3]; // 800D3C60
  c->r[8]=c->r[13]+0xFFFF9520u; // 800D3C64
  c->r[9]=0u+0x00000001u; // 800D3C68
  W32(c->r[3]+0x00000160u,c->r[0]); // 800D3C6C
  c->r[0]=c->r[3]+0x00000130u; // 800D3C70
  c->r[10]=R32(c->r[3]+0x00000038u); // 800D3C74
  W32(c->r[3]+0x00000130u,c->r[31]); // 800D3C78
  c->r[7]=R32(c->r[3]+0x0000003Cu); // 800D3C7C
  W32(c->r[13]+0xFFFF9524u,c->r[7]); // 800D3C80
  c->r[7]=0u+0x00000000u; // 800D3C84
  W32(c->r[13]+0xFFFF9520u,c->r[10]); // 800D3C88
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D3C8C
  c->r[5]=R32(c->r[3]+0x00000134u); // 800D3C90
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D3C94
  c->r[5]=R32(c->r[3]+0x00000138u); // 800D3C98
  c->r[3]=0u+0x00000000u; // 800D3C9C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D3CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3CA4
  c->r[5]=R32(c->r[13]+0xFFFF8A30u); // 800D3CA8
  c->r[10]=R32(c->r[30]+0x00000164u); // 800D3CAC
  c->lr=0x800D3CB4u; f_8021D564(c); // 800D3CB0
  cmps(c,0,(int32_t)c->r[3],0); // 800D3CB4
  W32(c->r[30]+0x00000078u,c->r[3]); // 800D3CB8
  if (!crb(c,0)) { goto L_800D3CD8; } // 800D3CBC
  W32(c->r[30]+0x00000160u,c->r[31]); // 800D3CC0
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D3CC4
  c->lr=0x800D3CCCu; f_8021A87C(c); // 800D3CC8
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D3CCC
  c->r[3]=0u+0x00000000u; // 800D3CD0
  goto L_800D3CDC; // 800D3CD4
L_800D3CD8:;
  c->r[3]=0u+0x00000001u; // 800D3CD8
L_800D3CDC:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3CDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3CE0
  c->lr=c->r[0]; // 800D3CE4
  c->r[1]=c->r[1]+0x00000020u; // 800D3CE8
  return; // 800D3CEC
}

// fn_800D3CF0
void f_800D3CF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3CF0
  c->r[0]=c->lr; // 800D3CF4
  c->r[4]=0u+0x80280000u; // 800D3CF8
  c->r[5]=c->r[3]+0x00000168u; // 800D3CFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3D00
  c->r[4]=c->r[4]+0x00001CDCu; // 800D3D04
  c->r[6]=c->r[2]+0xFFFF8AD0u; // 800D3D08
  c->r[9]=0u+0x00000001u; // 800D3D0C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3D10
  c->r[31]=0u+0x00000000u; // 800D3D14
  c->r[30]=c->r[3]|c->r[3]; // 800D3D18
  c->r[0]=R32(c->r[3]+0x00000128u); // 800D3D1C
  W32(c->r[3]+0x00000130u,c->r[31]); // 800D3D20
  c->r[7]=R32(c->r[3]+0x00000038u); // 800D3D24
  W32(c->r[3]+0x00000168u,c->r[0]); // 800D3D28
  c->r[0]=c->r[3]+0x00000130u; // 800D3D2C
  c->r[8]=R32(c->r[3]+0x0000003Cu); // 800D3D30
  W32(c->r[13]+0xFFFF952Cu,c->r[8]); // 800D3D34
  c->r[8]=c->r[13]+0xFFFF9528u; // 800D3D38
  W32(c->r[13]+0xFFFF9528u,c->r[7]); // 800D3D3C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D3D40
  c->r[5]=R32(c->r[3]+0x0000013Cu); // 800D3D44
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D3D48
  c->r[5]=R32(c->r[3]+0x00000140u); // 800D3D4C
  c->r[3]=0u+0x00000000u; // 800D3D50
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D3D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3D58
  c->r[5]=R32(c->r[13]+0xFFFF8A38u); // 800D3D5C
  c->r[7]=R32(c->r[13]+0xFFFF8A34u); // 800D3D60
  c->r[10]=R32(c->r[30]+0x0000016Cu); // 800D3D64
  c->lr=0x800D3D6Cu; f_8021D880(c); // 800D3D68
  cmps(c,0,(int32_t)c->r[3],0); // 800D3D6C
  W32(c->r[30]+0x00000078u,c->r[3]); // 800D3D70
  if (!crb(c,0)) { goto L_800D3D90; } // 800D3D74
  W32(c->r[30]+0x00000168u,c->r[31]); // 800D3D78
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D3D7C
  c->lr=0x800D3D84u; f_8021A87C(c); // 800D3D80
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D3D84
  c->r[3]=0u+0x00000000u; // 800D3D88
  goto L_800D3D94; // 800D3D8C
L_800D3D90:;
  c->r[3]=0u+0x00000001u; // 800D3D90
L_800D3D94:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3D94
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3D98
  c->lr=c->r[0]; // 800D3D9C
  c->r[1]=c->r[1]+0x00000020u; // 800D3DA0
  return; // 800D3DA4
}

// fn_800D3DA8
void f_800D3DA8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000148u); // 800D3DA8
  c->r[4]=0u+0x00000000u; // 800D3DAC
  c->ctr=c->r[0]; // 800D3DB0
  cmpu(c,0,c->r[0],0x00000000u); // 800D3DB4
  if (!crb(c,1)) { goto L_800D3DEC; } // 800D3DB8
L_800D3DBC:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 800D3DBC
  c->r[8]=c->r[0]+c->r[4]; // 800D3DC0
  c->r[0]=R32(c->r[4]+c->r[0]); // 800D3DC4
  c->r[7]=R32(c->r[8]+0x00000004u); // 800D3DC8
  c->r[0]=c->r[5]^c->r[0]; // 800D3DCC
  c->r[7]=c->r[6]^c->r[7]; // 800D3DD0
  c->r[0]=c->r[7]|c->r[0]; cr0(c,c->r[0]); // 800D3DD4
  if (!crb(c,2)) { goto L_800D3DE4; } // 800D3DD8
  c->r[3]=c->r[8]|c->r[8]; // 800D3DDC
  return; // 800D3DE0
L_800D3DE4:;
  c->r[4]=c->r[4]+0x00000018u; // 800D3DE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3DBC; } // 800D3DE8
L_800D3DEC:;
  c->r[3]=0u+0x00000000u; // 800D3DEC
  return; // 800D3DF0
}

// fn_800D3DF4
void f_800D3DF4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000158u); // 800D3DF4
  c->r[5]=0u+0x00000000u; // 800D3DF8
  c->ctr=c->r[0]; // 800D3DFC
  cmpu(c,0,c->r[0],0x00000000u); // 800D3E00
  if (!crb(c,1)) { goto L_800D3E2C; } // 800D3E04
L_800D3E08:;
  c->r[0]=R32(c->r[3]+0x0000015Cu); // 800D3E08
  c->r[6]=c->r[0]+c->r[5]; // 800D3E0C
  c->r[0]=R16(c->r[6]+0x00000004u); // 800D3E10
  cmpu(c,0,c->r[4],c->r[0]); // 800D3E14
  if (!crb(c,2)) { goto L_800D3E24; } // 800D3E18
  c->r[3]=c->r[6]|c->r[6]; // 800D3E1C
  return; // 800D3E20
L_800D3E24:;
  c->r[5]=c->r[5]+0x00000010u; // 800D3E24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3E08; } // 800D3E28
L_800D3E2C:;
  c->r[3]=0u+0x00000000u; // 800D3E2C
  return; // 800D3E30
}

// fn_800D3E34
void f_800D3E34(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000160u); // 800D3E34
  c->r[4]=0u+0x00000000u; // 800D3E38
  c->ctr=c->r[0]; // 800D3E3C
  cmpu(c,0,c->r[0],0x00000000u); // 800D3E40
  if (!crb(c,1)) { goto L_800D3E78; } // 800D3E44
L_800D3E48:;
  c->r[0]=R32(c->r[3]+0x00000164u); // 800D3E48
  c->r[8]=c->r[0]+c->r[4]; // 800D3E4C
  c->r[0]=R32(c->r[4]+c->r[0]); // 800D3E50
  c->r[7]=R32(c->r[8]+0x00000004u); // 800D3E54
  c->r[0]=c->r[5]^c->r[0]; // 800D3E58
  c->r[7]=c->r[6]^c->r[7]; // 800D3E5C
  c->r[0]=c->r[7]|c->r[0]; cr0(c,c->r[0]); // 800D3E60
  if (!crb(c,2)) { goto L_800D3E70; } // 800D3E64
  c->r[3]=c->r[8]|c->r[8]; // 800D3E68
  return; // 800D3E6C
L_800D3E70:;
  c->r[4]=c->r[4]+0x00000020u; // 800D3E70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3E48; } // 800D3E74
L_800D3E78:;
  c->r[3]=0u+0x00000000u; // 800D3E78
  return; // 800D3E7C
}

// fn_800D3E80
void f_800D3E80(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D3E80
  if (crb(c,0)) { goto L_800D3EA4; } // 800D3E84
  c->r[0]=R32(c->r[3]+0x00000168u); // 800D3E88
  cmpu(c,0,c->r[4],c->r[0]); // 800D3E8C
  if (!crb(c,0)) { goto L_800D3EA4; } // 800D3E90
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 800D3E94
  c->r[3]=R32(c->r[3]+0x0000016Cu); // 800D3E98
  c->r[3]=c->r[3]+c->r[0]; // 800D3E9C
  return; // 800D3EA0
L_800D3EA4:;
  c->r[3]=0u+0x00000000u; // 800D3EA4
  return; // 800D3EA8
}

// fn_800D3EAC
void f_800D3EAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3EAC
  c->r[0]=c->lr; // 800D3EB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3EB4
  c->lr=0x800D3EBCu; f_800D3E80(c); // 800D3EB8
  cmps(c,0,(int32_t)c->r[3],0); // 800D3EBC
  c->r[4]=0u+0x00000000u; // 800D3EC0
  if (crb(c,2)) { goto L_800D3EEC; } // 800D3EC4
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D3EC8
  cmps(c,0,(int32_t)c->r[0],0); // 800D3ECC
  if (crb(c,2)) { goto L_800D3EEC; } // 800D3ED0
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D3ED4
  c->r[4]=0u+0x00000000u; // 800D3ED8
  c->r[5]=0u+0x0000000Au; // 800D3EDC
  c->r[3]=c->r[3]+0x00000004u; // 800D3EE0
  c->lr=0x800D3EE8u; f_801164DC(c); // 800D3EE4
  c->r[4]=c->r[3]|c->r[3]; // 800D3EE8
L_800D3EEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3EEC
  c->r[3]=c->r[4]|c->r[4]; // 800D3EF0
  c->lr=c->r[0]; // 800D3EF4
  c->r[1]=c->r[1]+0x00000010u; // 800D3EF8
  return; // 800D3EFC
}

// fn_800D3F00
void f_800D3F00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3F00
  c->r[0]=c->lr; // 800D3F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3F08
  c->lr=0x800D3F10u; f_800D3E80(c); // 800D3F0C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3F10
  c->r[4]=0u+0x00000000u; // 800D3F14
  if (crb(c,2)) { goto L_800D3F40; } // 800D3F18
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D3F1C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3F20
  if (crb(c,2)) { goto L_800D3F40; } // 800D3F24
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D3F28
  c->r[4]=0u+0x00000000u; // 800D3F2C
  c->r[5]=0u+0x0000000Au; // 800D3F30
  c->r[3]=c->r[3]+0x00000004u; // 800D3F34
  c->lr=0x800D3F3Cu; f_801164DC(c); // 800D3F38
  c->r[4]=c->r[3]|c->r[3]; // 800D3F3C
L_800D3F40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3F40
  c->r[3]=c->r[4]|c->r[4]; // 800D3F44
  c->lr=c->r[0]; // 800D3F48
  c->r[1]=c->r[1]+0x00000010u; // 800D3F4C
  return; // 800D3F50
}

// fn_800D3F54
void f_800D3F54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3F54
  c->r[0]=c->lr; // 800D3F58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3F5C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3F60
  c->r[30]=c->r[3]|c->r[3]; // 800D3F64
  c->lr=0x800D3F6Cu; f_800D3E80(c); // 800D3F68
  cmps(c,0,(int32_t)c->r[3],0); // 800D3F6C
  c->r[8]=c->r[3]|c->r[3]; // 800D3F70
  if (!crb(c,2)) { goto L_800D3F80; } // 800D3F74
  c->r[3]=0u+0x00000000u; // 800D3F78
  goto L_800D3FD4; // 800D3F7C
L_800D3F80:;
  c->r[31]=0u+0x00000000u; // 800D3F80
  c->r[5]=0u+0x80260000u; // 800D3F84
  W32(c->r[1]+0x00000010u,c->r[31]); // 800D3F88
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D3F8C
  c->r[6]=c->r[5]+0x00000077u; // 800D3F90
  c->r[3]=c->r[30]|c->r[30]; // 800D3F94
  c->r[4]=R32(c->r[8]+0x00000018u); // 800D3F98
  c->r[7]=c->r[1]+0x00000010u; // 800D3F9C
  c->r[5]=R32(c->r[8]+0x0000001Cu); // 800D3FA0
  c->lr=0x800D3FA8u; f_800D4C64(c); // 800D3FA4
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D3FA8
  c->r[4]=c->r[1]+0x0000000Cu; // 800D3FAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3FB0
  c->r[5]=c->r[1]+0x00000008u; // 800D3FB4
  c->r[0]=c->r[3]+0x00003FFFu; // 800D3FB8
  c->r[3]=0u+0x00000001u; // 800D3FBC
  W32(c->r[1]+0x00000008u,c->r[31]); // 800D3FC0
  c->r[31]=rotl(c->r[0],18)&0x0003FFFFu; // 800D3FC4
  c->lr=0x800D3FCCu; f_80202FC4(c); // 800D3FC8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D3FCC
  c->r[3]=c->r[31]+c->r[0]; // 800D3FD0
L_800D3FD4:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3FD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3FD8
  c->lr=c->r[0]; // 800D3FDC
  c->r[1]=c->r[1]+0x00000020u; // 800D3FE0
  return; // 800D3FE4
}

// fn_800D3FE8
void f_800D3FE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3FE8
  c->r[0]=c->lr; // 800D3FEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3FF0
  c->lr=0x800D3FF8u; f_800D3F54(c); // 800D3FF4
  c->r[3]=rotl(c->r[3],14)&0xFFFFC000u; // 800D3FF8
  c->r[3]=c->r[3]+0x00020000u; // 800D3FFC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D4000
  c->r[3]=rotl(c->r[0],15)&0x00007FFFu; // 800D4004
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4008
  c->lr=c->r[0]; // 800D400C
  c->r[1]=c->r[1]+0x00000010u; // 800D4010
  return; // 800D4014
}

// fn_800D4018
void f_800D4018(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4018
  c->r[0]=c->lr; // 800D401C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4020
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4024
  c->r[31]=c->r[3]|c->r[3]; // 800D4028
  c->lr=0x800D4030u; f_800D3E80(c); // 800D402C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4030
  c->r[8]=c->r[3]|c->r[3]; // 800D4034
  if (!crb(c,2)) { goto L_800D4044; } // 800D4038
  c->r[3]=0u+0x00000000u; // 800D403C
  goto L_800D4090; // 800D4040
L_800D4044:;
  c->r[30]=0u+0x00000000u; // 800D4044
  c->r[5]=0u+0x80260000u; // 800D4048
  W32(c->r[1]+0x00000010u,c->r[30]); // 800D404C
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D4050
  c->r[6]=c->r[5]+0x00000087u; // 800D4054
  c->r[3]=c->r[31]|c->r[31]; // 800D4058
  c->r[4]=R32(c->r[8]+0x00000018u); // 800D405C
  c->r[7]=c->r[1]+0x00000010u; // 800D4060
  c->r[5]=R32(c->r[8]+0x0000001Cu); // 800D4064
  c->lr=0x800D406Cu; f_800D4C64(c); // 800D4068
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800D406C
  c->r[4]=c->r[1]+0x0000000Cu; // 800D4070
  c->r[31]=R32(c->r[1]+0x00000010u); // 800D4074
  c->r[5]=c->r[1]+0x00000008u; // 800D4078
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D407C
  c->r[3]=0u+0x00000001u; // 800D4080
  c->lr=0x800D4088u; f_80202FC4(c); // 800D4084
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D4088
  c->r[3]=c->r[31]+c->r[0]; // 800D408C
L_800D4090:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4090
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4094
  c->lr=c->r[0]; // 800D4098
  c->r[1]=c->r[1]+0x00000020u; // 800D409C
  return; // 800D40A0
}

// fn_800D40A4
void f_800D40A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D40A4
  c->r[0]=c->lr; // 800D40A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D40AC
  c->lr=0x800D40B4u; f_800D3F54(c); // 800D40B0
  c->r[4]=0u+0x00000000u; // 800D40B4
  c->r[5]=0u+0x00000004u; // 800D40B8
  c->lr=0x800D40C0u; f_800D2C88(c); // 800D40BC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D40C0
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D40C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D40C8
  c->lr=c->r[0]; // 800D40CC
  c->r[1]=c->r[1]+0x00000010u; // 800D40D0
  return; // 800D40D4
}

// fn_800D40D8
void f_800D40D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D40D8
  c->r[0]=c->lr; // 800D40DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D40E0
  c->lr=0x800D40E8u; f_800D4018(c); // 800D40E4
  c->r[4]=c->r[3]|c->r[3]; // 800D40E8
  c->r[3]=0u+0x00000000u; // 800D40EC
  c->r[5]=0u+0x00000008u; // 800D40F0
  c->lr=0x800D40F8u; f_800D2C88(c); // 800D40F4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D40F8
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D40FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4100
  c->lr=c->r[0]; // 800D4104
  c->r[1]=c->r[1]+0x00000010u; // 800D4108
  return; // 800D410C
}

// fn_800D4110
void f_800D4110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4110
  c->r[0]=c->lr; // 800D4114
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4118
  c->lr=0x800D4120u; f_800D3774(c); // 800D411C
  c->r[4]=0u+0x00000000u; // 800D4120
  c->r[5]=0u+0x00000004u; // 800D4124
  c->lr=0x800D412Cu; f_800D2C88(c); // 800D4128
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D412C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D4130
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4134
  c->lr=c->r[0]; // 800D4138
  c->r[1]=c->r[1]+0x00000010u; // 800D413C
  return; // 800D4140
}

// fn_800D4144
void f_800D4144(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4144
  c->r[0]=c->lr; // 800D4148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D414C
  c->lr=0x800D4154u; f_800D3918(c); // 800D4150
  c->r[4]=c->r[3]|c->r[3]; // 800D4154
  c->r[3]=0u+0x00000000u; // 800D4158
  c->r[5]=0u+0x00000008u; // 800D415C
  c->lr=0x800D4164u; f_800D2C88(c); // 800D4160
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D4164
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D4168
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D416C
  c->lr=c->r[0]; // 800D4170
  c->r[1]=c->r[1]+0x00000010u; // 800D4174
  return; // 800D4178
}

// fn_800D417C
void f_800D417C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D417C
  c->r[0]=c->lr; // 800D4180
  c->r[3]=c->r[4]|c->r[4]; // 800D4184
  c->r[4]=0u+0x00000000u; // 800D4188
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D418C
  c->r[5]=0u+0x00000004u; // 800D4190
  c->lr=0x800D4198u; f_800D2C88(c); // 800D4194
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D4198
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D419C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D41A0
  c->lr=c->r[0]; // 800D41A4
  c->r[1]=c->r[1]+0x00000010u; // 800D41A8
  return; // 800D41AC
}

// fn_800D41B0
void f_800D41B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D41B0
  c->r[0]=c->lr; // 800D41B4
  c->r[3]=0u+0x00000000u; // 800D41B8
  c->r[5]=0u+0x00000008u; // 800D41BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D41C0
  c->lr=0x800D41C8u; f_800D2C88(c); // 800D41C4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D41C8
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D41CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D41D0
  c->lr=c->r[0]; // 800D41D4
  c->r[1]=c->r[1]+0x00000010u; // 800D41D8
  return; // 800D41DC
}

// fn_800D41E0
void f_800D41E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D41E0
  c->r[0]=c->lr; // 800D41E4
  c->r[3]=0u+0x00000000u; // 800D41E8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D41EC
  c->r[0]=0u+0x00000020u; // 800D41F0
  c->r[4]=c->r[1]+0x00000008u; // 800D41F4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D41F8
  c->ctr=c->r[0]; // 800D41FC
L_800D4200:;
  W8(c->r[4]+0x00000001u,c->r[3]); // 800D4200
  {uint32_t ea=c->r[4]+0x00000002u; W8(ea,c->r[3]); c->r[4]=ea;} // 800D4204
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D4200; } // 800D4208
  c->r[3]=c->r[1]+0x00000009u; // 800D420C
  c->lr=0x800D4214u; f_8012D918(c); // 800D4210
  cmps(c,0,(int32_t)c->r[3],0); // 800D4214
  if (crb(c,2)) { goto L_800D4224; } // 800D4218
  c->r[3]=0u+0x00000000u; // 800D421C
  goto L_800D4278; // 800D4220
L_800D4224:;
  c->r[31]=0u+0x80260000u; // 800D4224
  c->r[3]=c->r[1]+0x00000009u; // 800D4228
  c->r[31]=c->r[31]+0xFFFFF900u; // 800D422C
  c->r[4]=c->r[31]+0x00000095u; // 800D4230
  c->lr=0x800D4238u; f_80114210(c); // 800D4234
  c->r[3]=c->r[1]+0x00000009u; // 800D4238
  c->r[4]=c->r[31]+0x00000097u; // 800D423C
  c->lr=0x800D4244u; f_80114210(c); // 800D4240
  c->r[0]=0u+0x00000000u; // 800D4244
  c->r[3]=c->r[1]+0x00000009u; // 800D4248
  W8(c->r[1]+0x00000008u,c->r[0]); // 800D424C
  c->r[4]=c->r[1]+0x00000008u; // 800D4250
  c->lr=0x800D4258u; f_8012DC7C(c); // 800D4254
  cmps(c,0,(int32_t)c->r[3],0); // 800D4258
  if (!crb(c,2)) { goto L_800D4274; } // 800D425C
  c->r[0]=R8(c->r[1]+0x00000008u); // 800D4260
  cmpu(c,0,c->r[0],0x00000001u); // 800D4264
  if (!crb(c,2)) { goto L_800D4274; } // 800D4268
  c->r[3]=0u+0x00000001u; // 800D426C
  goto L_800D4278; // 800D4270
L_800D4274:;
  c->r[3]=0u+0x00000000u; // 800D4274
L_800D4278:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D4278
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D427C
  c->lr=c->r[0]; // 800D4280
  c->r[1]=c->r[1]+0x00000060u; // 800D4284
  return; // 800D4288
}

// fn_800D428C
void f_800D428C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D428C
  c->r[0]=c->lr; // 800D4290
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4294
  c->lr=0x800D429Cu; f_800D3E80(c); // 800D4298
  cmps(c,0,(int32_t)c->r[3],0); // 800D429C
  if (crb(c,2)) { goto L_800D42B8; } // 800D42A0
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D42A4
  cmps(c,0,(int32_t)c->r[0],0); // 800D42A8
  if (!crb(c,2)) { goto L_800D42B8; } // 800D42AC
  c->r[3]=0u+0x00000001u; // 800D42B0
  goto L_800D42BC; // 800D42B4
L_800D42B8:;
  c->r[3]=0u+0x00000000u; // 800D42B8
L_800D42BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D42BC
  c->lr=c->r[0]; // 800D42C0
  c->r[1]=c->r[1]+0x00000010u; // 800D42C4
  return; // 800D42C8
}

// fn_800D42CC
void f_800D42CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D42CC
  c->r[0]=c->lr; // 800D42D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D42D4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D42D8
  c->r[27]=c->r[3]|c->r[3]; // 800D42DC
  c->r[29]=0u+0x00000000u; // 800D42E0
  c->lr=0x800D42E8u; f_800D3E80(c); // 800D42E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D42E8
  c->r[30]=c->r[3]|c->r[3]; // 800D42EC
  if (crb(c,2)) { goto L_800D433C; } // 800D42F0
  c->r[28]=0u+0x00000000u; // 800D42F4
  c->r[31]=0u+0x00000000u; // 800D42F8
  goto L_800D4330; // 800D42FC
L_800D4300:;
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D4300
  c->r[3]=c->r[27]|c->r[27]; // 800D4304
  c->r[4]=R16(c->r[4]+c->r[31]); // 800D4308
  c->lr=0x800D4310u; f_800D3DF4(c); // 800D430C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4310
  if (crb(c,2)) { goto L_800D4328; } // 800D4314
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4318
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800D431C
  if (crb(c,2)) { goto L_800D4328; } // 800D4320
  c->r[29]=c->r[29]+0x00000001u; // 800D4324
L_800D4328:;
  c->r[28]=c->r[28]+0x00000001u; // 800D4328
  c->r[31]=c->r[31]+0x00000002u; // 800D432C
L_800D4330:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D4330
  cmpu(c,0,c->r[28],c->r[0]); // 800D4334
  if (crb(c,0)) { IRQCHK(c); goto L_800D4300; } // 800D4338
L_800D433C:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D433C
  cmpu(c,0,c->r[0],c->r[29]); // 800D4340
  if (!crb(c,2)) { goto L_800D4350; } // 800D4344
  c->r[3]=0u+0x00000001u; // 800D4348
  goto L_800D4354; // 800D434C
L_800D4350:;
  c->r[3]=0u+0x00000000u; // 800D4350
L_800D4354:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4354
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4358
  c->lr=c->r[0]; // 800D435C
  c->r[1]=c->r[1]+0x00000020u; // 800D4360
  return; // 800D4364
}

// fn_800D4368
void f_800D4368(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4368
  c->r[0]=c->lr; // 800D436C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4370
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4374
  c->r[27]=c->r[3]|c->r[3]; // 800D4378
  c->lr=0x800D4380u; f_800D3E80(c); // 800D437C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4380
  c->r[30]=c->r[3]|c->r[3]; // 800D4384
  if (!crb(c,2)) { goto L_800D4394; } // 800D4388
  c->r[3]=0u+0x00000000u; // 800D438C
  goto L_800D43F4; // 800D4390
L_800D4394:;
  c->r[29]=0u+0x00000000u; // 800D4394
  c->r[28]=0u+0x00000000u; // 800D4398
  c->r[31]=0u+0x00000000u; // 800D439C
  goto L_800D43DC; // 800D43A0
L_800D43A4:;
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D43A4
  c->r[3]=c->r[27]|c->r[27]; // 800D43A8
  c->r[4]=R16(c->r[4]+c->r[31]); // 800D43AC
  c->lr=0x800D43B4u; f_800D3DF4(c); // 800D43B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D43B4
  if (crb(c,2)) { goto L_800D43D4; } // 800D43B8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D43BC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800D43C0
  if (crb(c,2)) { goto L_800D43D4; } // 800D43C4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800D43C8
  if (crb(c,2)) { goto L_800D43D4; } // 800D43CC
  c->r[29]=c->r[29]+0x00000001u; // 800D43D0
L_800D43D4:;
  c->r[28]=c->r[28]+0x00000001u; // 800D43D4
  c->r[31]=c->r[31]+0x00000002u; // 800D43D8
L_800D43DC:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D43DC
  cmpu(c,0,c->r[28],c->r[0]); // 800D43E0
  if (crb(c,0)) { IRQCHK(c); goto L_800D43A4; } // 800D43E4
  c->r[0]=c->r[0]-c->r[29]; // 800D43E8
  c->r[0]=cntlz(c->r[0]); // 800D43EC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D43F0
L_800D43F4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D43F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D43F8
  c->lr=c->r[0]; // 800D43FC
  c->r[1]=c->r[1]+0x00000020u; // 800D4400
  return; // 800D4404
}

// fn_800D4408
void f_800D4408(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4408
  c->r[0]=c->lr; // 800D440C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4410
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4414
  c->r[27]=c->r[3]|c->r[3]; // 800D4418
  c->lr=0x800D4420u; f_800D3E80(c); // 800D441C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4420
  c->r[30]=c->r[3]|c->r[3]; // 800D4424
  if (!crb(c,2)) { goto L_800D4434; } // 800D4428
  c->r[3]=0u+0x00000000u; // 800D442C
  goto L_800D449C; // 800D4430
L_800D4434:;
  c->r[29]=0u+0x00000000u; // 800D4434
  c->r[28]=0u+0x00000000u; // 800D4438
  c->r[31]=0u+0x00000000u; // 800D443C
  goto L_800D4474; // 800D4440
L_800D4444:;
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D4444
  c->r[3]=c->r[27]|c->r[27]; // 800D4448
  c->r[4]=R16(c->r[4]+c->r[31]); // 800D444C
  c->lr=0x800D4454u; f_800D3DF4(c); // 800D4450
  cmps(c,0,(int32_t)c->r[3],0); // 800D4454
  if (crb(c,2)) { goto L_800D446C; } // 800D4458
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D445C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800D4460
  if (crb(c,2)) { goto L_800D446C; } // 800D4464
  c->r[29]=c->r[29]+0x00000001u; // 800D4468
L_800D446C:;
  c->r[28]=c->r[28]+0x00000001u; // 800D446C
  c->r[31]=c->r[31]+0x00000002u; // 800D4470
L_800D4474:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D4474
  cmpu(c,0,c->r[28],c->r[0]); // 800D4478
  if (crb(c,0)) { IRQCHK(c); goto L_800D4444; } // 800D447C
  cmps(c,0,(int32_t)c->r[29],0); // 800D4480
  if (!crb(c,1)) { goto L_800D4498; } // 800D4484
  cmpu(c,0,c->r[29],c->r[0]); // 800D4488
  if (!crb(c,0)) { goto L_800D4498; } // 800D448C
  c->r[3]=0u+0x00000001u; // 800D4490
  goto L_800D449C; // 800D4494
L_800D4498:;
  c->r[3]=0u+0x00000000u; // 800D4498
L_800D449C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D449C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D44A0
  c->lr=c->r[0]; // 800D44A4
  c->r[1]=c->r[1]+0x00000020u; // 800D44A8
  return; // 800D44AC
}

// fn_800D44B0
void f_800D44B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D44B0
  c->r[0]=c->lr; // 800D44B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D44B8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D44BC
  c->r[27]=c->r[3]|c->r[3]; // 800D44C0
  c->lr=0x800D44C8u; f_800D3E80(c); // 800D44C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D44C8
  c->r[30]=c->r[3]|c->r[3]; // 800D44CC
  if (!crb(c,2)) { goto L_800D44DC; } // 800D44D0
  c->r[3]=0u+0x00000000u; // 800D44D4
  goto L_800D456C; // 800D44D8
L_800D44DC:;
  c->r[31]=0u+0x00000000u; // 800D44DC
  c->r[5]=0u+0x80260000u; // 800D44E0
  W32(c->r[1]+0x00000008u,c->r[31]); // 800D44E4
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D44E8
  c->r[6]=c->r[5]+0x0000009Eu; // 800D44EC
  c->r[3]=c->r[27]|c->r[27]; // 800D44F0
  c->r[4]=R32(c->r[30]+0x00000018u); // 800D44F4
  c->r[7]=c->r[1]+0x00000008u; // 800D44F8
  c->r[5]=R32(c->r[30]+0x0000001Cu); // 800D44FC
  c->lr=0x800D4504u; f_800D4C64(c); // 800D4500
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D4504
  cmps(c,0,(int32_t)c->r[0],0); // 800D4508
  if (!crb(c,2)) { goto L_800D4518; } // 800D450C
  c->r[3]=0u+0x00000000u; // 800D4510
  goto L_800D456C; // 800D4514
L_800D4518:;
  c->r[29]=0u+0x00000000u; // 800D4518
  c->r[28]=0u+0x00000000u; // 800D451C
  goto L_800D4554; // 800D4520
L_800D4524:;
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D4524
  c->r[3]=c->r[27]|c->r[27]; // 800D4528
  c->r[4]=R16(c->r[4]+c->r[31]); // 800D452C
  c->lr=0x800D4534u; f_800D3DF4(c); // 800D4530
  cmps(c,0,(int32_t)c->r[3],0); // 800D4534
  if (crb(c,2)) { goto L_800D454C; } // 800D4538
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D453C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800D4540
  if (crb(c,2)) { goto L_800D454C; } // 800D4544
  c->r[29]=c->r[29]+0x00000001u; // 800D4548
L_800D454C:;
  c->r[28]=c->r[28]+0x00000001u; // 800D454C
  c->r[31]=c->r[31]+0x00000002u; // 800D4550
L_800D4554:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D4554
  cmpu(c,0,c->r[28],c->r[0]); // 800D4558
  if (crb(c,0)) { IRQCHK(c); goto L_800D4524; } // 800D455C
  c->r[0]=0u-c->r[29]; // 800D4560
  c->r[0]=c->r[0]&~c->r[29]; // 800D4564
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D4568
L_800D456C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D456C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D4570
  c->lr=c->r[0]; // 800D4574
  c->r[1]=c->r[1]+0x00000030u; // 800D4578
  return; // 800D457C
}

// fn_800D4580
void f_800D4580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4580
  c->r[0]=c->lr; // 800D4584
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4588
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D458C
  c->r[27]=c->r[5]|c->r[5]; // 800D4590
  c->lr=0x800D4598u; f_800D3E80(c); // 800D4594
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 800D4598
  c->r[30]=c->r[3]|c->r[3]; // 800D459C
  c->r[28]=0u+0x00000000u; // 800D45A0
  c->r[31]=0u+0x00000000u; // 800D45A4
  goto L_800D45D8; // 800D45A8
L_800D45AC:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 800D45AC
  c->r[4]=c->r[27]|c->r[27]; // 800D45B0
  c->r[3]=R32(c->r[3]+c->r[31]); // 800D45B4
  c->lr=0x800D45BCu; f_80114288(c); // 800D45B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D45BC
  if (!crb(c,2)) { goto L_800D45D0; } // 800D45C0
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D45C4
  c->r[3]=c->r[0]+c->r[31]; // 800D45C8
  goto L_800D45E4; // 800D45CC
L_800D45D0:;
  c->r[28]=c->r[28]+0x00000001u; // 800D45D0
  c->r[31]=c->r[31]+0x00000008u; // 800D45D4
L_800D45D8:;
  cmpu(c,0,c->r[28],c->r[29]); // 800D45D8
  if (crb(c,0)) { IRQCHK(c); goto L_800D45AC; } // 800D45DC
  c->r[3]=0u+0x00000000u; // 800D45E0
L_800D45E4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D45E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D45E8
  c->lr=c->r[0]; // 800D45EC
  c->r[1]=c->r[1]+0x00000020u; // 800D45F0
  return; // 800D45F4
}

// fn_800D45F8
void f_800D45F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D45F8
  c->r[0]=c->lr; // 800D45FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4600
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4604
  c->r[31]=c->r[3]|c->r[3]; // 800D4608
  c->lr=0x800D4610u; f_800D4580(c); // 800D460C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4610
  if (!crb(c,2)) { goto L_800D4620; } // 800D4614
  c->r[3]=0u+0x00000000u; // 800D4618
  goto L_800D4634; // 800D461C
L_800D4620:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D4620
  c->r[3]=c->r[31]+0x00000064u; // 800D4624
  c->lr=0x800D462Cu; f_80031D3C(c); // 800D4628
  c->r[3]=c->r[31]+0x00000064u; // 800D462C
  c->lr=0x800D4634u; f_80031DA0(c); // 800D4630
L_800D4634:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4638
  c->lr=c->r[0]; // 800D463C
  c->r[1]=c->r[1]+0x00000010u; // 800D4640
  return; // 800D4644
}

// fn_800D4648
void f_800D4648(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4648
  c->r[0]=c->lr; // 800D464C
  c->r[6]=0u+0x80260000u; // 800D4650
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4654
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4658
  c->r[28]=c->r[3]|c->r[3]; // 800D465C
  c->r[30]=c->r[4]|c->r[4]; // 800D4660
  c->r[29]=c->r[5]|c->r[5]; // 800D4664
  c->r[4]=c->r[6]+0xFFFFF900u; // 800D4668
  c->r[3]=c->r[3]+0x00000064u; // 800D466C
  c->lr=0x800D4674u; f_80031D3C(c); // 800D4670
  c->r[3]=c->r[28]|c->r[28]; // 800D4674
  c->r[4]=c->r[30]|c->r[30]; // 800D4678
  c->r[5]=c->r[29]|c->r[29]; // 800D467C
  c->lr=0x800D4684u; f_800D4580(c); // 800D4680
  cmps(c,0,(int32_t)c->r[3],0); // 800D4684
  c->r[31]=c->r[3]|c->r[3]; // 800D4688
  if (!crb(c,2)) { goto L_800D469C; } // 800D468C
  c->r[3]=c->r[28]+0x00000064u; // 800D4690
  c->lr=0x800D4698u; f_80031DA0(c); // 800D4694
  goto L_800D46E4; // 800D4698
L_800D469C:;
  c->r[29]=0u+0x00000000u; // 800D469C
  goto L_800D46C8; // 800D46A0
L_800D46A4:;
  c->r[0]=R8(c->r[30]+c->r[29]); // 800D46A4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D46A8
  cmps(c,0,(int32_t)c->r[4],10); // 800D46AC
  if (crb(c,2)) { goto L_800D46C4; } // 800D46B0
  cmps(c,0,(int32_t)c->r[4],13); // 800D46B4
  if (crb(c,2)) { goto L_800D46C4; } // 800D46B8
  c->r[3]=c->r[28]+0x00000064u; // 800D46BC
  c->lr=0x800D46C4u; f_800D6358(c); // 800D46C0
L_800D46C4:;
  c->r[29]=c->r[29]+0x00000001u; // 800D46C4
L_800D46C8:;
  c->r[30]=R32(c->r[31]+0x00000004u); // 800D46C8
  c->r[3]=c->r[30]|c->r[30]; // 800D46CC
  c->lr=0x800D46D4u; f_80109598(c); // 800D46D0
  cmpu(c,0,c->r[29],c->r[3]); // 800D46D4
  if (crb(c,0)) { IRQCHK(c); goto L_800D46A4; } // 800D46D8
  c->r[3]=c->r[28]+0x00000064u; // 800D46DC
  c->lr=0x800D46E4u; f_80031DA0(c); // 800D46E0
L_800D46E4:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D46E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D46E8
  c->lr=c->r[0]; // 800D46EC
  c->r[1]=c->r[1]+0x00000020u; // 800D46F0
  return; // 800D46F4
}

// fn_800D46F8
void f_800D46F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D46F8
  c->r[0]=c->lr; // 800D46FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4700
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4704
  c->r[31]=c->r[3]|c->r[3]; // 800D4708
  c->lr=0x800D4710u; f_800D3E80(c); // 800D470C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4710
  c->r[8]=c->r[3]|c->r[3]; // 800D4714
  if (!crb(c,2)) { goto L_800D4724; } // 800D4718
  c->r[3]=0u+0x00000000u; // 800D471C
  goto L_800D4760; // 800D4720
L_800D4724:;
  c->r[0]=0u+0x00000000u; // 800D4724
  c->r[5]=0u+0x80260000u; // 800D4728
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D472C
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D4730
  c->r[6]=c->r[5]+0x000000A6u; // 800D4734
  c->r[3]=c->r[31]|c->r[31]; // 800D4738
  c->r[4]=R32(c->r[8]+0x00000018u); // 800D473C
  c->r[7]=c->r[1]+0x00000008u; // 800D4740
  c->r[5]=R32(c->r[8]+0x0000001Cu); // 800D4744
  c->lr=0x800D474Cu; f_800D4CEC(c); // 800D4748
  cmps(c,0,(int32_t)c->r[3],0); // 800D474C
  if (crb(c,2)) { goto L_800D475C; } // 800D4750
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4754
  goto L_800D4760; // 800D4758
L_800D475C:;
  c->r[3]=0u+0x00000000u; // 800D475C
L_800D4760:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4760
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4764
  c->lr=c->r[0]; // 800D4768
  c->r[1]=c->r[1]+0x00000020u; // 800D476C
  return; // 800D4770
}

// fn_800D4774
void f_800D4774(Ctx* __restrict c) {
  c->r[5]=0u+0x80260000u; // 800D4774
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D4778
  c->r[5]=c->r[5]+0x000000B0u; // 800D477C
  f_800D4648(c); return; // 800D4780
}

// fn_800D4784
void f_800D4784(Ctx* __restrict c) {
  c->r[5]=0u+0x80260000u; // 800D4784
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D4788
  c->r[5]=c->r[5]+0x000000BAu; // 800D478C
  f_800D4648(c); return; // 800D4790
}

// fn_800D4794
void f_800D4794(Ctx* __restrict c) {
  c->r[5]=0u+0x80260000u; // 800D4794
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D4798
  c->r[5]=c->r[5]+0x000000C6u; // 800D479C
  f_800D4648(c); return; // 800D47A0
}

// fn_800D47A4
void f_800D47A4(Ctx* __restrict c) {
  c->r[5]=0u+0x80260000u; // 800D47A4
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D47A8
  c->r[5]=c->r[5]+0x000000D3u; // 800D47AC
  f_800D4648(c); return; // 800D47B0
}

// fn_800D47B4
void f_800D47B4(Ctx* __restrict c) {
  c->r[5]=0u+0x80260000u; // 800D47B4
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D47B8
  c->r[5]=c->r[5]+0x000000E0u; // 800D47BC
  f_800D4648(c); return; // 800D47C0
}

// fn_800D47C4
void f_800D47C4(Ctx* __restrict c) {
  c->r[5]=0u+0x80260000u; // 800D47C4
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D47C8
  c->r[5]=c->r[5]+0x000000EDu; // 800D47CC
  f_800D4648(c); return; // 800D47D0
}

// fn_800D47D4
void f_800D47D4(Ctx* __restrict c) {
  c->r[5]=0u+0x80260000u; // 800D47D4
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D47D8
  c->r[5]=c->r[5]+0x000000FAu; // 800D47DC
  f_800D4648(c); return; // 800D47E0
}

// fn_800D47E4
void f_800D47E4(Ctx* __restrict c) {
  c->r[5]=0u+0x80260000u; // 800D47E4
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D47E8
  c->r[5]=c->r[5]+0x00000107u; // 800D47EC
  f_800D46F8(c); return; // 800D47F0
}

// fn_800D47F4
void f_800D47F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D47F4
  c->r[0]=c->lr; // 800D47F8
  c->r[5]=0u+0x80260000u; // 800D47FC
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D4800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4804
  c->r[5]=c->r[5]+0x000000A6u; // 800D4808
  c->lr=0x800D4810u; f_800D46F8(c); // 800D480C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D4810
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D4814
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4818
  c->lr=c->r[0]; // 800D481C
  c->r[1]=c->r[1]+0x00000010u; // 800D4820
  return; // 800D4824
}

// fn_800D4828
void f_800D4828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4828
  c->r[0]=c->lr; // 800D482C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4830
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4834
  c->r[31]=c->r[3]|c->r[3]; // 800D4838
  c->lr=0x800D4840u; f_800D3E80(c); // 800D483C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4840
  c->r[8]=c->r[3]|c->r[3]; // 800D4844
  if (!crb(c,2)) { goto L_800D4854; } // 800D4848
  c->r[3]=0u+0x00000000u; // 800D484C
  goto L_800D4890; // 800D4850
L_800D4854:;
  c->r[0]=0u+0x00000000u; // 800D4854
  c->r[5]=0u+0x80260000u; // 800D4858
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D485C
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D4860
  c->r[6]=c->r[5]+0x00000113u; // 800D4864
  c->r[3]=c->r[31]|c->r[31]; // 800D4868
  c->r[4]=R32(c->r[8]+0x00000018u); // 800D486C
  c->r[7]=c->r[1]+0x00000008u; // 800D4870
  c->r[5]=R32(c->r[8]+0x0000001Cu); // 800D4874
  c->lr=0x800D487Cu; f_800D4C64(c); // 800D4878
  cmps(c,0,(int32_t)c->r[3],0); // 800D487C
  if (crb(c,2)) { goto L_800D488C; } // 800D4880
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4884
  goto L_800D4890; // 800D4888
L_800D488C:;
  c->r[3]=0u+0x00000000u; // 800D488C
L_800D4890:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4890
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4894
  c->lr=c->r[0]; // 800D4898
  c->r[1]=c->r[1]+0x00000020u; // 800D489C
  return; // 800D48A0
}

// fn_800D48A4
void f_800D48A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D48A4
  c->r[0]=c->lr; // 800D48A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D48AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D48B0
  c->r[31]=c->r[3]|c->r[3]; // 800D48B4
  c->lr=0x800D48BCu; f_800D3E80(c); // 800D48B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D48BC
  c->r[8]=c->r[3]|c->r[3]; // 800D48C0
  if (!crb(c,2)) { goto L_800D48D0; } // 800D48C4
  c->r[3]=0u+0x00000000u; // 800D48C8
  goto L_800D490C; // 800D48CC
L_800D48D0:;
  c->r[0]=0u+0x00000000u; // 800D48D0
  c->r[5]=0u+0x80260000u; // 800D48D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D48D8
  c->r[5]=c->r[5]+0xFFFFF900u; // 800D48DC
  c->r[6]=c->r[5]+0x0000011Fu; // 800D48E0
  c->r[3]=c->r[31]|c->r[31]; // 800D48E4
  c->r[4]=R32(c->r[8]+0x00000018u); // 800D48E8
  c->r[7]=c->r[1]+0x00000008u; // 800D48EC
  c->r[5]=R32(c->r[8]+0x0000001Cu); // 800D48F0
  c->lr=0x800D48F8u; f_800D4C64(c); // 800D48F4
  cmps(c,0,(int32_t)c->r[3],0); // 800D48F8
  if (crb(c,2)) { goto L_800D4908; } // 800D48FC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4900
  goto L_800D490C; // 800D4904
L_800D4908:;
  c->r[3]=0u+0x00000000u; // 800D4908
L_800D490C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D490C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4910
  c->lr=c->r[0]; // 800D4914
  c->r[1]=c->r[1]+0x00000020u; // 800D4918
  return; // 800D491C
}

// fn_800D4920
void f_800D4920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4920
  c->r[0]=c->lr; // 800D4924
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4928
  c->lr=0x800D4930u; f_800D3E80(c); // 800D492C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4930
  if (!crb(c,2)) { goto L_800D4940; } // 800D4934
  c->r[3]=0u+0x00000000u; // 800D4938
  goto L_800D4944; // 800D493C
L_800D4940:;
  c->r[3]=R32(c->r[3]+0x00000028u); // 800D4940
L_800D4944:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4944
  c->lr=c->r[0]; // 800D4948
  c->r[1]=c->r[1]+0x00000010u; // 800D494C
  return; // 800D4950
}

// fn_800D4954
void f_800D4954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4954
  c->r[0]=c->lr; // 800D4958
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D495C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4960
  c->r[31]=c->r[5]|c->r[5]; // 800D4964
  c->lr=0x800D496Cu; f_800D3E80(c); // 800D4968
  cmps(c,0,(int32_t)c->r[3],0); // 800D496C
  if (!crb(c,2)) { goto L_800D497C; } // 800D4970
  c->r[3]=0u+0x00000000u; // 800D4974
  goto L_800D4988; // 800D4978
L_800D497C:;
  c->r[3]=R32(c->r[3]+0x00000024u); // 800D497C
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800D4980
  c->r[3]=R16(c->r[3]+c->r[0]); // 800D4984
L_800D4988:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4988
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D498C
  c->lr=c->r[0]; // 800D4990
  c->r[1]=c->r[1]+0x00000010u; // 800D4994
  return; // 800D4998
}

// fn_800D499C
void f_800D499C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D499C
  c->r[0]=c->lr; // 800D49A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D49A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D49A8
  c->r[31]=c->r[4]|c->r[4]; // 800D49AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D49B0
  c->r[30]=c->r[3]|c->r[3]; // 800D49B4
  c->lr=0x800D49BCu; f_800D34FC(c); // 800D49B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D49BC
  if (crb(c,2)) { goto L_800D49CC; } // 800D49C0
  c->r[3]=0u+0x00000000u; // 800D49C4
  goto L_800D4A00; // 800D49C8
L_800D49CC:;
  c->r[3]=0u+0x00000005u; // 800D49CC
  c->r[4]=0u+0x00000000u; // 800D49D0
  c->r[0]=0u+0xFFFFF058u; // 800D49D4
  W32(c->r[30]+0x00000070u,c->r[3]); // 800D49D8
  c->r[3]=0u+0xFFFFF058u; // 800D49DC
  W32(c->r[30]+0x00000074u,c->r[4]); // 800D49E0
  W32(c->r[30]+0x0000011Cu,c->r[0]); // 800D49E4
  c->lr=0x800D49ECu; f_8021A87C(c); // 800D49E8
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D49EC
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D49F0
  c->r[3]=0u+0x00000001u; // 800D49F4
  W32(c->r[30]+0x0000012Cu,c->r[31]); // 800D49F8
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[0]);} // 800D49FC
L_800D4A00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4A00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4A04
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4A08
  c->lr=c->r[0]; // 800D4A0C
  c->r[1]=c->r[1]+0x00000010u; // 800D4A10
  return; // 800D4A14
}

// fn_800D4A18
void f_800D4A18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4A18
  c->r[0]=c->lr; // 800D4A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4A20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4A24
  c->r[31]=c->r[4]|c->r[4]; // 800D4A28
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4A2C
  c->r[30]=c->r[3]|c->r[3]; // 800D4A30
  c->lr=0x800D4A38u; f_800D34FC(c); // 800D4A34
  cmps(c,0,(int32_t)c->r[3],0); // 800D4A38
  if (crb(c,2)) { goto L_800D4A48; } // 800D4A3C
  c->r[3]=0u+0x00000000u; // 800D4A40
  goto L_800D4A7C; // 800D4A44
L_800D4A48:;
  c->r[3]=0u+0x00000006u; // 800D4A48
  c->r[4]=0u+0x00000000u; // 800D4A4C
  c->r[0]=0u+0xFFFFF058u; // 800D4A50
  W32(c->r[30]+0x00000070u,c->r[3]); // 800D4A54
  c->r[3]=0u+0xFFFFF058u; // 800D4A58
  W32(c->r[30]+0x00000074u,c->r[4]); // 800D4A5C
  W32(c->r[30]+0x0000011Cu,c->r[0]); // 800D4A60
  c->lr=0x800D4A68u; f_8021A87C(c); // 800D4A64
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4A68
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D4A6C
  c->r[3]=0u+0x00000001u; // 800D4A70
  W32(c->r[30]+0x0000012Cu,c->r[31]); // 800D4A74
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[0]);} // 800D4A78
L_800D4A7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4A7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4A80
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4A84
  c->lr=c->r[0]; // 800D4A88
  c->r[1]=c->r[1]+0x00000010u; // 800D4A8C
  return; // 800D4A90
}

// fn_800D4A94
void f_800D4A94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4A94
  c->r[0]=c->lr; // 800D4A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4AA0
  c->r[31]=c->r[3]|c->r[3]; // 800D4AA4
  c->lr=0x800D4AACu; f_800D34FC(c); // 800D4AA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D4AAC
  if (crb(c,2)) { goto L_800D4ABC; } // 800D4AB0
  c->r[3]=0u+0x00000000u; // 800D4AB4
  goto L_800D4AEC; // 800D4AB8
L_800D4ABC:;
  c->r[3]=0u+0x00000007u; // 800D4ABC
  c->r[4]=0u+0x00000000u; // 800D4AC0
  c->r[0]=0u+0xFFFFF058u; // 800D4AC4
  W32(c->r[31]+0x00000070u,c->r[3]); // 800D4AC8
  c->r[3]=0u+0xFFFFF058u; // 800D4ACC
  W32(c->r[31]+0x00000074u,c->r[4]); // 800D4AD0
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D4AD4
  c->lr=0x800D4ADCu; f_8021A87C(c); // 800D4AD8
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4ADC
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D4AE0
  c->r[3]=0u+0x00000001u; // 800D4AE4
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D4AE8
L_800D4AEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4AEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4AF0
  c->lr=c->r[0]; // 800D4AF4
  c->r[1]=c->r[1]+0x00000010u; // 800D4AF8
  return; // 800D4AFC
}

// fn_800D4B00
void f_800D4B00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4B00
  c->r[0]=c->lr; // 800D4B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4B08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4B0C
  c->r[31]=c->r[3]|c->r[3]; // 800D4B10
  c->lr=0x800D4B18u; f_800D34FC(c); // 800D4B14
  cmps(c,0,(int32_t)c->r[3],0); // 800D4B18
  if (crb(c,2)) { goto L_800D4B28; } // 800D4B1C
  c->r[3]=0u+0x00000000u; // 800D4B20
  goto L_800D4B58; // 800D4B24
L_800D4B28:;
  c->r[3]=0u+0x00000008u; // 800D4B28
  c->r[4]=0u+0x00000000u; // 800D4B2C
  c->r[0]=0u+0xFFFFF058u; // 800D4B30
  W32(c->r[31]+0x00000070u,c->r[3]); // 800D4B34
  c->r[3]=0u+0xFFFFF058u; // 800D4B38
  W32(c->r[31]+0x00000074u,c->r[4]); // 800D4B3C
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D4B40
  c->lr=0x800D4B48u; f_8021A87C(c); // 800D4B44
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4B48
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D4B4C
  c->r[3]=0u+0x00000001u; // 800D4B50
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D4B54
L_800D4B58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4B58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4B5C
  c->lr=c->r[0]; // 800D4B60
  c->r[1]=c->r[1]+0x00000010u; // 800D4B64
  return; // 800D4B68
}

// fn_800D4B6C
void f_800D4B6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4B6C
  c->r[0]=c->lr; // 800D4B70
  c->r[6]=0u+0x802B0000u; // 800D4B74
  c->r[5]=0u+0x00000000u; // 800D4B78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4B7C
  c->r[6]=c->r[6]+0x00001B78u; // 800D4B80
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4B84
  c->r[28]=c->r[3]|c->r[3]; // 800D4B88
  c->r[3]=c->r[6]+0x00000CD8u; // 800D4B8C
  c->lr=0x800D4B94u; f_800B53FC(c); // 800D4B90
  c->r[4]=0u+0x80260000u; // 800D4B94
  c->r[30]=c->r[3]|c->r[3]; // 800D4B98
  c->r[3]=c->r[28]+0x00000064u; // 800D4B9C
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D4BA0
  c->lr=0x800D4BA8u; f_80031D3C(c); // 800D4BA4
  c->r[31]=c->r[30]|c->r[30]; // 800D4BA8
  c->r[29]=0u+0x00000000u; // 800D4BAC
  goto L_800D4BDC; // 800D4BB0
L_800D4BB4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 800D4BB4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D4BB8
  cmps(c,0,(int32_t)c->r[4],10); // 800D4BBC
  if (crb(c,2)) { goto L_800D4BD4; } // 800D4BC0
  cmps(c,0,(int32_t)c->r[4],13); // 800D4BC4
  if (crb(c,2)) { goto L_800D4BD4; } // 800D4BC8
  c->r[3]=c->r[28]+0x00000064u; // 800D4BCC
  c->lr=0x800D4BD4u; f_800D6358(c); // 800D4BD0
L_800D4BD4:;
  c->r[29]=c->r[29]+0x00000001u; // 800D4BD4
  c->r[31]=c->r[31]+0x00000001u; // 800D4BD8
L_800D4BDC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4BDC
  c->lr=0x800D4BE4u; f_80109598(c); // 800D4BE0
  cmpu(c,0,c->r[29],c->r[3]); // 800D4BE4
  if (crb(c,0)) { IRQCHK(c); goto L_800D4BB4; } // 800D4BE8
  c->r[3]=c->r[28]+0x00000064u; // 800D4BEC
  c->lr=0x800D4BF4u; f_80031DA0(c); // 800D4BF0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4BF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4BF8
  c->lr=c->r[0]; // 800D4BFC
  c->r[1]=c->r[1]+0x00000020u; // 800D4C00
  return; // 800D4C04
}

// fn_800D4C08
void f_800D4C08(Ctx* __restrict c) {
  W32(c->r[3]+0x00000178u,c->r[4]); // 800D4C08
  return; // 800D4C0C
}

// fn_800D4C10
void f_800D4C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4C10
  c->r[0]=c->lr; // 800D4C14
  c->r[4]=0u+0x80260000u; // 800D4C18
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D4C1C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D4C20
  c->r[4]=c->r[4]+0x00000128u; // 800D4C24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D4C28
  c->lr=0x800D4C30u; f_800D5ED0(c); // 800D4C2C
  c->r[0]=0u+0x00000020u; // 800D4C30
  c->r[4]=c->r[1]+0x00000007u; // 800D4C34
  c->r[3]=0u+0x00000000u; // 800D4C38
  c->ctr=c->r[0]; // 800D4C3C
L_800D4C40:;
  W8(c->r[4]+0x00000001u,c->r[3]); // 800D4C40
  {uint32_t ea=c->r[4]+0x00000002u; W8(ea,c->r[3]); c->r[4]=ea;} // 800D4C44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D4C40; } // 800D4C48
  c->r[3]=c->r[1]+0x00000008u; // 800D4C4C
  c->lr=0x800D4C54u; f_8012D918(c); // 800D4C50
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D4C54
  c->lr=c->r[0]; // 800D4C58
  c->r[1]=c->r[1]+0x00000050u; // 800D4C5C
  return; // 800D4C60
}

// fn_800D4C64
void f_800D4C64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4C64
  c->r[0]=c->lr; // 800D4C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4C6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4C70
  c->r[26]=c->r[4]|c->r[4]; // 800D4C74
  c->r[27]=c->r[5]|c->r[5]; // 800D4C78
  c->r[28]=c->r[6]|c->r[6]; // 800D4C7C
  c->r[29]=c->r[7]|c->r[7]; // 800D4C80
  c->r[30]=0u+0x00000000u; // 800D4C84
  c->r[31]=0u+0x00000000u; // 800D4C88
  goto L_800D4CCC; // 800D4C8C
L_800D4C90:;
  c->r[3]=R32(c->r[26]+c->r[31]); // 800D4C90
  c->r[4]=c->r[28]|c->r[28]; // 800D4C94
  c->lr=0x800D4C9Cu; f_80114288(c); // 800D4C98
  cmps(c,0,(int32_t)c->r[3],0); // 800D4C9C
  if (!crb(c,2)) { goto L_800D4CC4; } // 800D4CA0
  c->r[3]=c->r[26]+c->r[31]; // 800D4CA4
  c->r[4]=0u+0x00000000u; // 800D4CA8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D4CAC
  c->r[5]=0u+0x0000000Au; // 800D4CB0
  c->lr=0x800D4CB8u; f_80116384(c); // 800D4CB4
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D4CB8
  c->r[3]=0u+0x00000001u; // 800D4CBC
  goto L_800D4CD8; // 800D4CC0
L_800D4CC4:;
  c->r[30]=c->r[30]+0x00000001u; // 800D4CC4
  c->r[31]=c->r[31]+0x00000008u; // 800D4CC8
L_800D4CCC:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[27]); // 800D4CCC
  if (crb(c,0)) { IRQCHK(c); goto L_800D4C90; } // 800D4CD0
  c->r[3]=0u+0x00000000u; // 800D4CD4
L_800D4CD8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4CD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4CDC
  c->lr=c->r[0]; // 800D4CE0
  c->r[1]=c->r[1]+0x00000020u; // 800D4CE4
  return; // 800D4CE8
}

// fn_800D4CEC
void f_800D4CEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4CEC
  c->r[0]=c->lr; // 800D4CF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4CF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4CF8
  c->r[26]=c->r[4]|c->r[4]; // 800D4CFC
  c->r[27]=c->r[5]|c->r[5]; // 800D4D00
  c->r[28]=c->r[6]|c->r[6]; // 800D4D04
  c->r[29]=c->r[7]|c->r[7]; // 800D4D08
  c->r[30]=0u+0x00000000u; // 800D4D0C
  c->r[31]=0u+0x00000000u; // 800D4D10
  goto L_800D4D54; // 800D4D14
L_800D4D18:;
  c->r[3]=R32(c->r[26]+c->r[31]); // 800D4D18
  c->r[4]=c->r[28]|c->r[28]; // 800D4D1C
  c->lr=0x800D4D24u; f_80114288(c); // 800D4D20
  cmps(c,0,(int32_t)c->r[3],0); // 800D4D24
  if (!crb(c,2)) { goto L_800D4D4C; } // 800D4D28
  c->r[3]=c->r[26]+c->r[31]; // 800D4D2C
  c->r[4]=0u+0x00000000u; // 800D4D30
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D4D34
  c->r[5]=0u+0x0000000Au; // 800D4D38
  c->lr=0x800D4D40u; f_801164DC(c); // 800D4D3C
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D4D40
  c->r[3]=0u+0x00000001u; // 800D4D44
  goto L_800D4D60; // 800D4D48
L_800D4D4C:;
  c->r[30]=c->r[30]+0x00000001u; // 800D4D4C
  c->r[31]=c->r[31]+0x00000008u; // 800D4D50
L_800D4D54:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[27]); // 800D4D54
  if (crb(c,0)) { IRQCHK(c); goto L_800D4D18; } // 800D4D58
  c->r[3]=0u+0x00000000u; // 800D4D5C
L_800D4D60:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4D60
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4D64
  c->lr=c->r[0]; // 800D4D68
  c->r[1]=c->r[1]+0x00000020u; // 800D4D6C
  return; // 800D4D70
}

// fn_800D4D74
void f_800D4D74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4D74
  c->r[0]=c->lr; // 800D4D78
  c->r[6]=0u+0x80260000u; // 800D4D7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4D80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4D84
  c->r[31]=c->r[3]|c->r[3]; // 800D4D88
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4D8C
  {uint32_t ea=c->r[6]+0xFFFFF8F0u; c->r[5]=R32(ea); c->r[6]=ea;} // 800D4D90
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D4D94
  c->r[3]=R32(c->r[6]+0x00000008u); // 800D4D98
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800D4D9C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D4DA0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D4DA4
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D4DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4DAC
  c->lr=0x800D4DB4u; f_800E8F9C(c); // 800D4DB0
  c->r[0]=R32(c->r[31]+0x00000074u); // 800D4DB4
  cmps(c,0,(int32_t)c->r[0],20); // 800D4DB8
  if (crb(c,2)) { goto L_800D4E54; } // 800D4DBC
  if (!crb(c,0)) { goto L_800D4DDC; } // 800D4DC0
  cmps(c,0,(int32_t)c->r[0],10); // 800D4DC4
  if (crb(c,2)) { goto L_800D4E3C; } // 800D4DC8
  if (!crb(c,0)) { goto L_800D4F60; } // 800D4DCC
  cmps(c,0,(int32_t)c->r[0],0); // 800D4DD0
  if (crb(c,2)) { goto L_800D4DF4; } // 800D4DD4
  goto L_800D4F60; // 800D4DD8
L_800D4DDC:;
  cmps(c,0,(int32_t)c->r[0],30); // 800D4DDC
  if (crb(c,2)) { goto L_800D4F40; } // 800D4DE0
  if (!crb(c,0)) { goto L_800D4F60; } // 800D4DE4
  cmps(c,0,(int32_t)c->r[0],22); // 800D4DE8
  if (!crb(c,0)) { goto L_800D4F60; } // 800D4DEC
  goto L_800D4E94; // 800D4DF0
L_800D4DF4:;
  c->r[4]=R32(c->r[31]+0x00000128u); // 800D4DF4
  c->r[3]=c->r[31]|c->r[31]; // 800D4DF8
  c->lr=0x800D4E00u; f_800D5BCC(c); // 800D4DFC
  c->r[4]=0u+0x800D0000u; // 800D4E00
  c->r[9]=0u+0x80260000u; // 800D4E04
  c->r[5]=c->r[31]|c->r[31]; // 800D4E08
  c->r[3]=c->r[31]+0x00000024u; // 800D4E0C
  c->r[4]=c->r[4]+0x000060F4u; // 800D4E10
  c->r[9]=c->r[9]+0xFFFFF900u; // 800D4E14
  c->r[6]=0u+0x00000000u; // 800D4E18
  c->r[7]=0u+0x00001000u; // 800D4E1C
  c->r[8]=0u+0x00000010u; // 800D4E20
  c->lr=0x800D4E28u; f_800CFCC8(c); // 800D4E24
  c->r[3]=c->r[31]+0x00000024u; // 800D4E28
  c->lr=0x800D4E30u; f_800CFD70(c); // 800D4E2C
  c->r[0]=0u+0x0000000Au; // 800D4E30
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D4E34
  goto L_800D4F60; // 800D4E38
L_800D4E3C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D4E3C
  c->r[4]=0u+0x00000001u; // 800D4E40
  c->lr=0x800D4E48u; f_800D6064(c); // 800D4E44
  c->r[0]=0u+0x00000014u; // 800D4E48
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D4E4C
  goto L_800D4F60; // 800D4E50
L_800D4E54:;
  c->r[3]=c->r[31]|c->r[31]; // 800D4E54
  c->lr=0x800D4E5Cu; f_800D60AC(c); // 800D4E58
  cmps(c,0,(int32_t)c->r[3],0); // 800D4E5C
  if (crb(c,2)) { goto L_800D4E88; } // 800D4E60
  c->r[3]=c->r[31]|c->r[31]; // 800D4E64
  c->lr=0x800D4E6Cu; f_800D60AC(c); // 800D4E68
  cmps(c,0,(int32_t)c->r[3],3); // 800D4E6C
  if (!crb(c,2)) { goto L_800D4F60; } // 800D4E70
  c->r[3]=0u+0xFFFFF05Fu; // 800D4E74
  c->r[0]=0u+0x00000000u; // 800D4E78
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D4E7C
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D4E80
  goto L_800D4F60; // 800D4E84
L_800D4E88:;
  c->r[0]=0u+0x00000015u; // 800D4E88
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D4E8C
  goto L_800D4F60; // 800D4E90
L_800D4E94:;
  c->r[3]=0u+0x800D0000u; // 800D4E94
  c->r[4]=0u+0x800D0000u; // 800D4E98
  c->r[3]=c->r[3]+0x00002BCCu; // 800D4E9C
  c->r[5]=0u+0x00000010u; // 800D4EA0
  c->r[4]=c->r[4]+0x00002C24u; // 800D4EA4
  c->lr=0x800D4EACu; f_80226C7C(c); // 800D4EA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D4EAC
  if (crb(c,2)) { goto L_800D4ED8; } // 800D4EB0
  c->lr=0x800D4EB8u; f_80226D3C(c); // 800D4EB4
  c->r[4]=c->r[3]+0x00030000u; // 800D4EB8
  c->r[3]=0u+0xFFFFF05Fu; // 800D4EBC
  c->r[4]=c->r[4]+0x00002C1Cu; // 800D4EC0
  c->r[0]=0u+0x00000000u; // 800D4EC4
  W32(c->r[31]+0x00000120u,c->r[4]); // 800D4EC8
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D4ECC
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D4ED0
  goto L_800D4F60; // 800D4ED4
L_800D4ED8:;
  c->r[30]=0u+0x00000001u; // 800D4ED8
  c->r[3]=c->r[1]+0x00000008u; // 800D4EDC
  W32(c->r[13]+0xFFFF9510u,c->r[30]); // 800D4EE0
  c->r[4]=0u+0x00000002u; // 800D4EE4
  c->lr=0x800D4EECu; f_8020181C(c); // 800D4EE8
  cmps(c,0,(int32_t)c->r[3],0); // 800D4EEC
  if (crb(c,2)) { goto L_800D4F0C; } // 800D4EF0
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D4EF4
  c->lr=0x800D4EFCu; f_8021A87C(c); // 800D4EF8
  c->r[0]=0u+0x00000000u; // 800D4EFC
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D4F00
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D4F04
  goto L_800D4F60; // 800D4F08
L_800D4F0C:;
  W8(c->r[31]+0x00000004u,c->r[30]); // 800D4F0C
  c->lr=0x800D4F14u; f_80203060(c); // 800D4F10
  cmps(c,0,(int32_t)c->r[3],0); // 800D4F14
  if (crb(c,2)) { goto L_800D4F34; } // 800D4F18
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D4F1C
  c->lr=0x800D4F24u; f_8021A87C(c); // 800D4F20
  c->r[0]=0u+0x00000000u; // 800D4F24
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D4F28
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D4F2C
  goto L_800D4F60; // 800D4F30
L_800D4F34:;
  c->r[0]=0u+0x0000001Eu; // 800D4F34
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D4F38
  goto L_800D4F60; // 800D4F3C
L_800D4F40:;
  {uint32_t ea=c->r[2]+0xFFFF8AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4F40
  c->r[0]=0u+0x00000000u; // 800D4F44
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D4F48
  c->r[3]=0u+0x00000000u; // 800D4F4C
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D4F50
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D4F54
  c->lr=0x800D4F5Cu; f_8021A87C(c); // 800D4F58
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D4F5C
L_800D4F60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4F60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4F64
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4F68
  c->lr=c->r[0]; // 800D4F6C
  c->r[1]=c->r[1]+0x00000020u; // 800D4F70
  return; // 800D4F74
}

// fn_800D4F78
void f_800D4F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4F78
  c->r[0]=c->lr; // 800D4F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4F84
  c->r[31]=c->r[3]|c->r[3]; // 800D4F88
  c->r[0]=R32(c->r[3]+0x00000074u); // 800D4F8C
  cmps(c,0,(int32_t)c->r[0],20); // 800D4F90
  if (crb(c,2)) { goto L_800D4FFC; } // 800D4F94
  if (!crb(c,0)) { goto L_800D4FB4; } // 800D4F98
  cmps(c,0,(int32_t)c->r[0],10); // 800D4F9C
  if (crb(c,2)) { goto L_800D4FE8; } // 800D4FA0
  if (!crb(c,0)) { goto L_800D503C; } // 800D4FA4
  cmps(c,0,(int32_t)c->r[0],0); // 800D4FA8
  if (crb(c,2)) { goto L_800D4FC0; } // 800D4FAC
  goto L_800D503C; // 800D4FB0
L_800D4FB4:;
  cmps(c,0,(int32_t)c->r[0],30); // 800D4FB4
  if (crb(c,2)) { goto L_800D501C; } // 800D4FB8
  goto L_800D503C; // 800D4FBC
L_800D4FC0:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 800D4FC0
  cmps(c,0,(int32_t)c->r[0],0); // 800D4FC4
  if (crb(c,2)) { goto L_800D4FD8; } // 800D4FC8
  c->lr=0x800D4FD0u; f_80201918(c); // 800D4FCC
  c->r[0]=0u+0x00000000u; // 800D4FD0
  W8(c->r[31]+0x00000004u,c->r[0]); // 800D4FD4
L_800D4FD8:;
  c->lr=0x800D4FDCu; f_800D2C48(c); // 800D4FD8
  c->r[0]=0u+0x0000000Au; // 800D4FDC
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D4FE0
  goto L_800D503C; // 800D4FE4
L_800D4FE8:;
  c->r[4]=0u+0x00000002u; // 800D4FE8
  c->lr=0x800D4FF0u; f_800D6064(c); // 800D4FEC
  c->r[0]=0u+0x00000014u; // 800D4FF0
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D4FF4
  goto L_800D503C; // 800D4FF8
L_800D4FFC:;
  c->lr=0x800D5000u; f_800D60AC(c); // 800D4FFC
  cmps(c,0,(int32_t)c->r[3],0); // 800D5000
  if (!crb(c,2)) { goto L_800D503C; } // 800D5004
  c->r[3]=c->r[31]|c->r[31]; // 800D5008
  c->lr=0x800D5010u; f_800D5D6C(c); // 800D500C
  c->r[0]=0u+0x0000001Eu; // 800D5010
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5014
  goto L_800D503C; // 800D5018
L_800D501C:;
  {uint32_t ea=c->r[2]+0xFFFF8AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D501C
  c->r[0]=0u+0x00000000u; // 800D5020
  W32(c->r[3]+0x00000070u,c->r[0]); // 800D5024
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 800D5028
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800D502C
  c->r[3]=0u+0x00000000u; // 800D5030
  c->lr=0x800D5038u; f_8021A87C(c); // 800D5034
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5038
L_800D503C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D503C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5040
  c->lr=c->r[0]; // 800D5044
  c->r[1]=c->r[1]+0x00000010u; // 800D5048
  return; // 800D504C
}

// fn_800D5050
void f_800D5050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5050
  c->r[0]=c->lr; // 800D5054
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D505C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D5060
  c->r[30]=c->r[3]|c->r[3]; // 800D5064
  c->r[0]=R32(c->r[3]+0x00000074u); // 800D5068
  cmps(c,0,(int32_t)c->r[0],2); // 800D506C
  if (crb(c,2)) { goto L_800D510C; } // 800D5070
  if (!crb(c,0)) { goto L_800D5088; } // 800D5074
  cmps(c,0,(int32_t)c->r[0],0); // 800D5078
  if (crb(c,2)) { goto L_800D5094; } // 800D507C
  if (!crb(c,0)) { goto L_800D50CC; } // 800D5080
  goto L_800D51A8; // 800D5084
L_800D5088:;
  cmps(c,0,(int32_t)c->r[0],30); // 800D5088
  if (crb(c,2)) { goto L_800D5188; } // 800D508C
  goto L_800D51A8; // 800D5090
L_800D5094:;
  c->lr=0x800D5098u; f_8021BC10(c); // 800D5094
  cmps(c,0,(int32_t)c->r[3],0); // 800D5098
  W32(c->r[30]+0x00000078u,c->r[3]); // 800D509C
  if (!crb(c,0)) { goto L_800D50BC; } // 800D50A0
  c->r[0]=0u+0x00000000u; // 800D50A4
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D50A8
  W32(c->r[30]+0x00000070u,c->r[0]); // 800D50AC
  c->lr=0x800D50B4u; f_8021A87C(c); // 800D50B0
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D50B4
  goto L_800D51A8; // 800D50B8
L_800D50BC:;
  c->r[3]=R32(c->r[30]+0x00000074u); // 800D50BC
  c->r[0]=c->r[3]+0x00000001u; // 800D50C0
  W32(c->r[30]+0x00000074u,c->r[0]); // 800D50C4
  goto L_800D51A8; // 800D50C8
L_800D50CC:;
  c->r[4]=0u+0x80260000u; // 800D50CC
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D50D0
  c->r[4]=c->r[4]+0x00000144u; // 800D50D4
  c->lr=0x800D50DCu; f_800D5E5C(c); // 800D50D8
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D50DC
  if (crb(c,2)) { goto L_800D51A8; } // 800D50E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D50E4
  if (!crb(c,0)) { goto L_800D50FC; } // 800D50E8
  c->r[0]=0u+0x00000000u; // 800D50EC
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D50F0
  W32(c->r[30]+0x00000070u,c->r[0]); // 800D50F4
  goto L_800D51A8; // 800D50F8
L_800D50FC:;
  c->r[3]=R32(c->r[30]+0x00000074u); // 800D50FC
  c->r[0]=c->r[3]+0x00000001u; // 800D5100
  W32(c->r[30]+0x00000074u,c->r[0]); // 800D5104
  goto L_800D51A8; // 800D5108
L_800D510C:;
  c->r[3]=c->r[3]+0x00000040u; // 800D510C
  c->lr=0x800D5114u; f_80031DA0(c); // 800D5110
  c->r[31]=0u+0x80260000u; // 800D5114
  c->r[4]=c->r[3]|c->r[3]; // 800D5118
  c->r[31]=c->r[31]+0xFFFFF900u; // 800D511C
  c->r[3]=c->r[31]+0x0000014Fu; // 800D5120
  c->lr=0x800D5128u; f_80201BF0(c); // 800D5124
  cmps(c,0,(int32_t)c->r[3],0); // 800D5128
  if (crb(c,2)) { goto L_800D5148; } // 800D512C
  c->r[0]=0u+0x00000000u; // 800D5130
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D5134
  W32(c->r[30]+0x00000070u,c->r[0]); // 800D5138
  c->lr=0x800D5140u; f_8021A87C(c); // 800D513C
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D5140
  goto L_800D51A8; // 800D5144
L_800D5148:;
  c->r[3]=c->r[30]+0x0000004Cu; // 800D5148
  c->lr=0x800D5150u; f_80031DA0(c); // 800D514C
  c->r[4]=c->r[3]|c->r[3]; // 800D5150
  c->r[3]=c->r[31]+0x00000155u; // 800D5154
  c->lr=0x800D515Cu; f_80201BF0(c); // 800D5158
  cmps(c,0,(int32_t)c->r[3],0); // 800D515C
  if (crb(c,2)) { goto L_800D517C; } // 800D5160
  c->r[0]=0u+0x00000000u; // 800D5164
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800D5168
  W32(c->r[30]+0x00000070u,c->r[0]); // 800D516C
  c->lr=0x800D5174u; f_8021A87C(c); // 800D5170
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D5174
  goto L_800D51A8; // 800D5178
L_800D517C:;
  c->r[0]=0u+0x0000001Eu; // 800D517C
  W32(c->r[30]+0x00000074u,c->r[0]); // 800D5180
  goto L_800D51A8; // 800D5184
L_800D5188:;
  {uint32_t ea=c->r[2]+0xFFFF8AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5188
  c->r[0]=0u+0x00000000u; // 800D518C
  W32(c->r[3]+0x00000070u,c->r[0]); // 800D5190
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 800D5194
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800D5198
  c->r[3]=0u+0x00000000u; // 800D519C
  c->lr=0x800D51A4u; f_8021A87C(c); // 800D51A0
  W32(c->r[30]+0x00000120u,c->r[3]); // 800D51A4
L_800D51A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D51A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D51AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D51B0
  c->lr=c->r[0]; // 800D51B4
  c->r[1]=c->r[1]+0x00000010u; // 800D51B8
  return; // 800D51BC
}

// fn_800D51C0
void f_800D51C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D51C0
  c->r[0]=c->lr; // 800D51C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D51C8
  c->r[11]=c->r[1]+0x00000020u; // 800D51CC
  c->lr=0x800D51D4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D51D0
  c->r[0]=R32(c->r[3]+0x00000074u); // 800D51D4
  c->r[31]=c->r[3]|c->r[3]; // 800D51D8
  cmpu(c,0,c->r[0],0x00000014u); // 800D51DC
  if (crb(c,1)) { goto L_800D54B8; } // 800D51E0
  c->r[4]=0u+0x80280000u; // 800D51E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D51E8
  c->r[4]=c->r[4]+0x00001D44u; // 800D51EC
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D51F0
  c->ctr=c->r[4]; // 800D51F4
  if (true) { switch (c->ctr) { case 0x800D51FCu: goto L_800D51FC; case 0x800D5234u: goto L_800D5234; case 0x800D525Cu: goto L_800D525C; case 0x800D5348u: goto L_800D5348; case 0x800D539Cu: goto L_800D539C; case 0x800D5414u: goto L_800D5414; case 0x800D543Cu: goto L_800D543C; case 0x800D5498u: goto L_800D5498; case 0x800D54B8u: goto L_800D54B8; default: break; } dispatch(c,c->ctr); return; } // 800D51F8
L_800D51FC:;
  c->lr=0x800D5200u; f_800D31C8(c); // 800D51FC
  c->r[3]=c->r[31]|c->r[31]; // 800D5200
  c->lr=0x800D5208u; f_800D32C0(c); // 800D5204
  c->r[3]=c->r[31]|c->r[31]; // 800D5208
  c->lr=0x800D5210u; f_800D335C(c); // 800D520C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5210
  if (crb(c,2)) { goto L_800D5228; } // 800D5214
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D5218
  c->r[0]=c->r[3]+0x00000001u; // 800D521C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5220
  goto L_800D54B8; // 800D5224
L_800D5228:;
  c->r[0]=0u+0x0000000Au; // 800D5228
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D522C
  goto L_800D54B8; // 800D5230
L_800D5234:;
  c->lr=0x800D5238u; f_800D3C38(c); // 800D5234
  cmps(c,0,(int32_t)c->r[3],0); // 800D5238
  if (!crb(c,2)) { goto L_800D524C; } // 800D523C
  c->r[0]=0u+0x00000000u; // 800D5240
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5244
  goto L_800D54B8; // 800D5248
L_800D524C:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D524C
  c->r[0]=c->r[3]+0x00000001u; // 800D5250
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5254
  goto L_800D54B8; // 800D5258
L_800D525C:;
  c->r[28]=0u+0x80260000u; // 800D525C
  c->r[28]=c->r[28]+0xFFFFF900u; // 800D5260
  c->r[4]=c->r[28]+0x00000159u; // 800D5264
  c->lr=0x800D526Cu; f_800D5E5C(c); // 800D5268
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D526C
  if (!crb(c,2)) { goto L_800D528C; } // 800D5270
  c->r[3]=c->r[31]|c->r[31]; // 800D5274
  c->lr=0x800D527Cu; f_800D5FD4(c); // 800D5278
  {uint32_t ea=c->r[2]+0xFFFF8AFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D527C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D5280
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D5284
  goto L_800D54B8; // 800D5288
L_800D528C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D528C
  if (!crb(c,0)) { goto L_800D52A8; } // 800D5290
  c->r[0]=0u+0x00000000u; // 800D5294
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5298
  W32(c->r[31]+0x00000160u,c->r[0]); // 800D529C
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D52A0
  goto L_800D54B8; // 800D52A4
L_800D52A8:;
  c->r[5]=R32(c->r[31]+0x00000038u); // 800D52A8
  c->r[3]=c->r[31]|c->r[31]; // 800D52AC
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 800D52B0
  c->lr=0x800D52B8u; f_800D3DA8(c); // 800D52B4
  c->r[5]=R32(c->r[31]+0x00000038u); // 800D52B8
  c->r[29]=c->r[3]|c->r[3]; // 800D52BC
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 800D52C0
  c->r[3]=c->r[31]|c->r[31]; // 800D52C4
  c->lr=0x800D52CCu; f_800D3E34(c); // 800D52C8
  cmps(c,0,(int32_t)c->r[29],0); // 800D52CC
  c->r[5]=c->r[3]|c->r[3]; // 800D52D0
  if (crb(c,2)) { goto L_800D533C; } // 800D52D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D52D8
  if (crb(c,2)) { goto L_800D533C; } // 800D52DC
  c->r[30]=0u+0x00000000u; // 800D52E0
  c->r[3]=c->r[31]|c->r[31]; // 800D52E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D52E8
  c->r[6]=c->r[28]+0x00000174u; // 800D52EC
  c->r[7]=c->r[1]+0x00000008u; // 800D52F0
  c->r[4]=R32(c->r[5]+0x00000018u); // 800D52F4
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 800D52F8
  c->lr=0x800D5300u; f_800D4C64(c); // 800D52FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D5300
  if (!crb(c,2)) { goto L_800D5324; } // 800D5304
  c->r[0]=0u+0xFFFFF05Fu; // 800D5308
  W32(c->r[31]+0x00000070u,c->r[30]); // 800D530C
  c->r[3]=0u+0xFFFFF05Fu; // 800D5310
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D5314
  c->lr=0x800D531Cu; f_8021A87C(c); // 800D5318
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D531C
  goto L_800D54B8; // 800D5320
L_800D5324:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 800D5324
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D5328
  cmpu(c,0,c->r[3],c->r[0]); // 800D532C
  if (crb(c,2)) { goto L_800D533C; } // 800D5330
  c->r[0]=0u+0x00000001u; // 800D5334
  W8(c->r[31]+0x00000005u,c->r[0]); // 800D5338
L_800D533C:;
  c->r[0]=0u+0x0000000Au; // 800D533C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5340
  goto L_800D54B8; // 800D5344
L_800D5348:;
  c->r[0]=R32(c->r[3]+0x00000128u); // 800D5348
  c->r[6]=c->r[31]+0x00000158u; // 800D534C
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800D5350
  W32(c->r[3]+0x00000158u,c->r[0]); // 800D5354
  c->r[3]=R32(c->r[3]+0x00000038u); // 800D5358
  c->r[5]=R32(c->r[31]+0x0000015Cu); // 800D535C
  c->lr=0x800D5364u; f_8021CC84(c); // 800D5360
  cmps(c,0,(int32_t)c->r[3],0); // 800D5364
  if (!crb(c,0)) { goto L_800D5388; } // 800D5368
  c->r[0]=0u+0x00000000u; // 800D536C
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5370
  W32(c->r[31]+0x00000158u,c->r[0]); // 800D5374
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5378
  c->lr=0x800D5380u; f_8021A87C(c); // 800D537C
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5380
  goto L_800D54B8; // 800D5384
L_800D5388:;
  c->r[4]=R32(c->r[31]+0x00000074u); // 800D5388
  W32(c->r[31]+0x00000078u,c->r[3]); // 800D538C
  c->r[0]=c->r[4]+0x00000001u; // 800D5390
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5394
  goto L_800D54B8; // 800D5398
L_800D539C:;
  c->r[4]=0u+0x80260000u; // 800D539C
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D53A0
  c->r[4]=c->r[4]+0x0000017Cu; // 800D53A4
  c->lr=0x800D53ACu; f_800D5E5C(c); // 800D53A8
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D53AC
  if (!crb(c,2)) { goto L_800D53D0; } // 800D53B0
  c->r[3]=c->r[31]|c->r[31]; // 800D53B4
  c->lr=0x800D53BCu; f_800D5FD4(c); // 800D53B8
  {uint32_t ea=c->r[2]+0xFFFF8B00u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D53BC
  {uint32_t ea=c->r[2]+0xFFFF8AFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D53C0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800D53C4
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D53C8
  goto L_800D54B8; // 800D53CC
L_800D53D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D53D0
  if (!crb(c,0)) { goto L_800D53EC; } // 800D53D4
  c->r[0]=0u+0x00000000u; // 800D53D8
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D53DC
  W32(c->r[31]+0x00000158u,c->r[0]); // 800D53E0
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D53E4
  goto L_800D54B8; // 800D53E8
L_800D53EC:;
  c->r[0]=R8(c->r[31]+0x00000005u); // 800D53EC
  cmps(c,0,(int32_t)c->r[0],0); // 800D53F0
  if (crb(c,2)) { goto L_800D5404; } // 800D53F4
  c->r[0]=0u+0x00000014u; // 800D53F8
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D53FC
  goto L_800D54B8; // 800D5400
L_800D5404:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D5404
  c->r[0]=c->r[3]+0x00000001u; // 800D5408
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D540C
  goto L_800D54B8; // 800D5410
L_800D5414:;
  c->lr=0x800D5418u; f_800D3CF0(c); // 800D5414
  cmps(c,0,(int32_t)c->r[3],0); // 800D5418
  if (!crb(c,2)) { goto L_800D542C; } // 800D541C
  c->r[0]=0u+0x00000000u; // 800D5420
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5424
  goto L_800D54B8; // 800D5428
L_800D542C:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D542C
  c->r[0]=c->r[3]+0x00000001u; // 800D5430
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5434
  goto L_800D54B8; // 800D5438
L_800D543C:;
  c->r[4]=0u+0x80260000u; // 800D543C
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D5440
  c->r[4]=c->r[4]+0x00000191u; // 800D5444
  c->lr=0x800D544Cu; f_800D5E5C(c); // 800D5448
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D544C
  if (!crb(c,2)) { goto L_800D5470; } // 800D5450
  c->r[3]=c->r[31]|c->r[31]; // 800D5454
  c->lr=0x800D545Cu; f_800D5FD4(c); // 800D5458
  {uint32_t ea=c->r[2]+0xFFFF8AFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D545C
  {uint32_t ea=c->r[2]+0xFFFF8B04u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5460
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800D5464
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D5468
  goto L_800D54B8; // 800D546C
L_800D5470:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5470
  if (!crb(c,0)) { goto L_800D548C; } // 800D5474
  c->r[0]=0u+0x00000000u; // 800D5478
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D547C
  W32(c->r[31]+0x00000168u,c->r[0]); // 800D5480
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5484
  goto L_800D54B8; // 800D5488
L_800D548C:;
  c->r[0]=0u+0x00000014u; // 800D548C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5490
  goto L_800D54B8; // 800D5494
L_800D5498:;
  {uint32_t ea=c->r[2]+0xFFFF8AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5498
  c->r[0]=0u+0x00000000u; // 800D549C
  W32(c->r[3]+0x00000070u,c->r[0]); // 800D54A0
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 800D54A4
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800D54A8
  c->r[3]=0u+0x00000000u; // 800D54AC
  c->lr=0x800D54B4u; f_8021A87C(c); // 800D54B0
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D54B4
L_800D54B8:;
  c->r[11]=c->r[1]+0x00000020u; // 800D54B8
  c->lr=0x800D54C0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D54BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D54C0
  c->lr=c->r[0]; // 800D54C4
  c->r[1]=c->r[1]+0x00000020u; // 800D54C8
  return; // 800D54CC
}

// fn_800D54D0
void f_800D54D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D54D0
  c->r[0]=c->lr; // 800D54D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D54D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D54DC
  c->r[31]=c->r[3]|c->r[3]; // 800D54E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D54E4
  c->r[4]=R32(c->r[3]+0x0000012Cu); // 800D54E8
  c->lr=0x800D54F0u; f_800D3E80(c); // 800D54EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D54F0
  c->r[30]=c->r[3]|c->r[3]; // 800D54F4
  if (!crb(c,2)) { goto L_800D551C; } // 800D54F8
  c->r[0]=0u+0xFFFFF05Fu; // 800D54FC
  c->r[3]=0u+0xFFFFF05Fu; // 800D5500
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D5504
  c->lr=0x800D550Cu; f_8021A87C(c); // 800D5508
  c->r[0]=0u+0x00000000u; // 800D550C
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5510
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5514
  goto L_800D56D4; // 800D5518
L_800D551C:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 800D551C
  cmps(c,0,(int32_t)c->r[0],2); // 800D5520
  if (crb(c,2)) { goto L_800D5600; } // 800D5524
  if (!crb(c,0)) { goto L_800D553C; } // 800D5528
  cmps(c,0,(int32_t)c->r[0],0); // 800D552C
  if (crb(c,2)) { goto L_800D554C; } // 800D5530
  if (!crb(c,0)) { goto L_800D55A4; } // 800D5534
  goto L_800D56D4; // 800D5538
L_800D553C:;
  cmps(c,0,(int32_t)c->r[0],4); // 800D553C
  if (crb(c,2)) { goto L_800D56B4; } // 800D5540
  if (!crb(c,0)) { goto L_800D56D4; } // 800D5544
  goto L_800D5654; // 800D5548
L_800D554C:;
  c->r[4]=R32(c->r[31]+0x0000012Cu); // 800D554C
  c->r[3]=c->r[31]|c->r[31]; // 800D5550
  c->lr=0x800D5558u; f_800D3F00(c); // 800D5554
  c->r[5]=R32(c->r[30]+0x00000010u); // 800D5558
  c->r[6]=c->r[3]|c->r[3]; // 800D555C
  c->r[3]=R32(c->r[30]+0x00000000u); // 800D5560
  c->r[4]=R32(c->r[30]+0x00000004u); // 800D5564
  c->r[5]=R32(c->r[5]+0x00000000u); // 800D5568
  c->lr=0x800D5570u; f_8020E2B4(c); // 800D556C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5570
  W32(c->r[31]+0x00000078u,c->r[3]); // 800D5574
  if (!crb(c,0)) { goto L_800D5594; } // 800D5578
  c->r[0]=0u+0x00000000u; // 800D557C
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5580
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5584
  c->lr=0x800D558Cu; f_8021A87C(c); // 800D5588
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D558C
  goto L_800D56D4; // 800D5590
L_800D5594:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D5594
  c->r[0]=c->r[3]+0x00000001u; // 800D5598
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D559C
  goto L_800D56D4; // 800D55A0
L_800D55A4:;
  c->r[4]=0u+0x80260000u; // 800D55A4
  c->r[3]=c->r[31]|c->r[31]; // 800D55A8
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D55AC
  c->r[4]=c->r[4]+0x000001ACu; // 800D55B0
  c->lr=0x800D55B8u; f_800D5E5C(c); // 800D55B4
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D55B8
  if (!crb(c,2)) { goto L_800D55D8; } // 800D55BC
  c->r[3]=c->r[31]|c->r[31]; // 800D55C0
  c->lr=0x800D55C8u; f_800D5FD4(c); // 800D55C4
  {uint32_t ea=c->r[2]+0xFFFF8B08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D55C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D55CC
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D55D0
  goto L_800D56D4; // 800D55D4
L_800D55D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D55D8
  if (!crb(c,0)) { goto L_800D55F0; } // 800D55DC
  c->r[0]=0u+0x00000000u; // 800D55E0
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D55E4
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D55E8
  goto L_800D56D4; // 800D55EC
L_800D55F0:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D55F0
  c->r[0]=c->r[3]+0x00000001u; // 800D55F4
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D55F8
  goto L_800D56D4; // 800D55FC
L_800D5600:;
  c->r[0]=R32(c->r[31]+0x00000128u); // 800D5600
  c->r[6]=c->r[31]+0x00000158u; // 800D5604
  c->r[3]=R32(c->r[31]+0x00000038u); // 800D5608
  W32(c->r[31]+0x00000158u,c->r[0]); // 800D560C
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800D5610
  c->r[5]=R32(c->r[31]+0x0000015Cu); // 800D5614
  c->lr=0x800D561Cu; f_8021CC84(c); // 800D5618
  cmps(c,0,(int32_t)c->r[3],0); // 800D561C
  if (!crb(c,0)) { goto L_800D5640; } // 800D5620
  c->r[0]=0u+0x00000000u; // 800D5624
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5628
  W32(c->r[31]+0x00000158u,c->r[0]); // 800D562C
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5630
  c->lr=0x800D5638u; f_8021A87C(c); // 800D5634
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5638
  goto L_800D56D4; // 800D563C
L_800D5640:;
  c->r[4]=R32(c->r[31]+0x00000074u); // 800D5640
  W32(c->r[31]+0x00000078u,c->r[3]); // 800D5644
  c->r[0]=c->r[4]+0x00000001u; // 800D5648
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D564C
  goto L_800D56D4; // 800D5650
L_800D5654:;
  c->r[4]=0u+0x80260000u; // 800D5654
  c->r[3]=c->r[31]|c->r[31]; // 800D5658
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D565C
  c->r[4]=c->r[4]+0x0000017Cu; // 800D5660
  c->lr=0x800D5668u; f_800D5E5C(c); // 800D5664
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D5668
  if (!crb(c,2)) { goto L_800D5688; } // 800D566C
  c->r[3]=c->r[31]|c->r[31]; // 800D5670
  c->lr=0x800D5678u; f_800D5FD4(c); // 800D5674
  {uint32_t ea=c->r[2]+0xFFFF8B08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5678
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 800D567C
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D5680
  goto L_800D56D4; // 800D5684
L_800D5688:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5688
  if (!crb(c,0)) { goto L_800D56A4; } // 800D568C
  c->r[0]=0u+0x00000000u; // 800D5690
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5694
  W32(c->r[31]+0x00000158u,c->r[0]); // 800D5698
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D569C
  goto L_800D56D4; // 800D56A0
L_800D56A4:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D56A4
  c->r[0]=c->r[3]+0x00000001u; // 800D56A8
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D56AC
  goto L_800D56D4; // 800D56B0
L_800D56B4:;
  {uint32_t ea=c->r[2]+0xFFFF8AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D56B4
  c->r[0]=0u+0x00000000u; // 800D56B8
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D56BC
  c->r[3]=0u+0x00000000u; // 800D56C0
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D56C4
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D56C8
  c->lr=0x800D56D0u; f_8021A87C(c); // 800D56CC
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D56D0
L_800D56D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D56D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D56D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D56DC
  c->lr=c->r[0]; // 800D56E0
  c->r[1]=c->r[1]+0x00000010u; // 800D56E4
  return; // 800D56E8
}

// fn_800D56EC
void f_800D56EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D56EC
  c->r[0]=c->lr; // 800D56F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D56F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D56F8
  c->r[31]=c->r[3]|c->r[3]; // 800D56FC
  c->r[4]=R32(c->r[3]+0x0000012Cu); // 800D5700
  c->lr=0x800D5708u; f_800D3E80(c); // 800D5704
  cmps(c,0,(int32_t)c->r[3],0); // 800D5708
  c->r[7]=c->r[3]|c->r[3]; // 800D570C
  if (!crb(c,2)) { goto L_800D5734; } // 800D5710
  c->r[0]=0u+0xFFFFF05Fu; // 800D5714
  c->r[3]=0u+0xFFFFF05Fu; // 800D5718
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D571C
  c->lr=0x800D5724u; f_8021A87C(c); // 800D5720
  c->r[0]=0u+0x00000000u; // 800D5724
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5728
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D572C
  goto L_800D59AC; // 800D5730
L_800D5734:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 800D5734
  cmpu(c,0,c->r[0],0x00000006u); // 800D5738
  if (crb(c,1)) { goto L_800D59AC; } // 800D573C
  c->r[4]=0u+0x80280000u; // 800D5740
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5744
  c->r[4]=c->r[4]+0x00001D98u; // 800D5748
  c->r[4]=R32(c->r[4]+c->r[0]); // 800D574C
  c->ctr=c->r[4]; // 800D5750
  if (true) { switch (c->ctr) { case 0x800D5758u: goto L_800D5758; case 0x800D579Cu: goto L_800D579C; case 0x800D57F8u: goto L_800D57F8; case 0x800D586Cu: goto L_800D586C; case 0x800D58CCu: goto L_800D58CC; case 0x800D591Cu: goto L_800D591C; case 0x800D597Cu: goto L_800D597C; default: break; } dispatch(c,c->ctr); return; } // 800D5754
L_800D5758:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D5758
  c->r[5]=0u+0x00000000u; // 800D575C
  c->r[4]=R32(c->r[7]+0x00000004u); // 800D5760
  c->lr=0x800D5768u; f_8020C588(c); // 800D5764
  cmps(c,0,(int32_t)c->r[3],0); // 800D5768
  W32(c->r[31]+0x00000078u,c->r[3]); // 800D576C
  if (!crb(c,0)) { goto L_800D578C; } // 800D5770
  c->r[0]=0u+0x00000000u; // 800D5774
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5778
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D577C
  c->lr=0x800D5784u; f_8021A87C(c); // 800D5780
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5784
  goto L_800D59AC; // 800D5788
L_800D578C:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D578C
  c->r[0]=c->r[3]+0x00000001u; // 800D5790
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5794
  goto L_800D59AC; // 800D5798
L_800D579C:;
  c->r[4]=0u+0x80260000u; // 800D579C
  c->r[3]=c->r[31]|c->r[31]; // 800D57A0
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D57A4
  c->r[4]=c->r[4]+0x000001BDu; // 800D57A8
  c->lr=0x800D57B0u; f_800D5E5C(c); // 800D57AC
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D57B0
  if (!crb(c,2)) { goto L_800D57D0; } // 800D57B4
  c->r[3]=c->r[31]|c->r[31]; // 800D57B8
  c->lr=0x800D57C0u; f_800D5FD4(c); // 800D57BC
  {uint32_t ea=c->r[2]+0xFFFF8B08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D57C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800D57C4
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D57C8
  goto L_800D59AC; // 800D57CC
L_800D57D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D57D0
  if (!crb(c,0)) { goto L_800D57E8; } // 800D57D4
  c->r[0]=0u+0x00000000u; // 800D57D8
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D57DC
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D57E0
  goto L_800D59AC; // 800D57E4
L_800D57E8:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D57E8
  c->r[0]=c->r[3]+0x00000001u; // 800D57EC
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D57F0
  goto L_800D59AC; // 800D57F4
L_800D57F8:;
  c->r[8]=0u+0x00000000u; // 800D57F8
  c->r[4]=0u+0x00000000u; // 800D57FC
  goto L_800D581C; // 800D5800
L_800D5804:;
  c->r[6]=R32(c->r[3]+0x00000024u); // 800D5804
  c->r[8]=c->r[8]+0x00000001u; // 800D5808
  c->r[5]=R32(c->r[31]+0x00000174u); // 800D580C
  c->r[0]=R16(c->r[6]+c->r[4]); // 800D5810
  W16(c->r[5]+c->r[4],c->r[0]); // 800D5814
  c->r[4]=c->r[4]+0x00000002u; // 800D5818
L_800D581C:;
  c->r[6]=R32(c->r[3]+0x00000028u); // 800D581C
  cmpu(c,0,c->r[8],c->r[6]); // 800D5820
  if (crb(c,0)) { IRQCHK(c); goto L_800D5804; } // 800D5824
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D5828
  c->r[4]=R32(c->r[7]+0x00000004u); // 800D582C
  c->r[5]=R32(c->r[31]+0x00000174u); // 800D5830
  c->lr=0x800D5838u; f_8021C0F0(c); // 800D5834
  cmps(c,0,(int32_t)c->r[3],0); // 800D5838
  W32(c->r[31]+0x00000078u,c->r[3]); // 800D583C
  if (!crb(c,0)) { goto L_800D585C; } // 800D5840
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5844
  c->lr=0x800D584Cu; f_8021A87C(c); // 800D5848
  c->r[0]=0u+0x00000000u; // 800D584C
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5850
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5854
  goto L_800D59AC; // 800D5858
L_800D585C:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D585C
  c->r[0]=c->r[3]+0x00000001u; // 800D5860
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5864
  goto L_800D59AC; // 800D5868
L_800D586C:;
  c->r[4]=0u+0x80260000u; // 800D586C
  c->r[3]=c->r[31]|c->r[31]; // 800D5870
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D5874
  c->r[4]=c->r[4]+0x000001CEu; // 800D5878
  c->lr=0x800D5880u; f_800D5E5C(c); // 800D587C
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D5880
  if (!crb(c,2)) { goto L_800D58A4; } // 800D5884
  c->r[3]=c->r[31]|c->r[31]; // 800D5888
  c->lr=0x800D5890u; f_800D5FD4(c); // 800D588C
  {uint32_t ea=c->r[2]+0xFFFF8AFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D5890
  {uint32_t ea=c->r[2]+0xFFFF8B08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5894
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800D5898
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D589C
  goto L_800D59AC; // 800D58A0
L_800D58A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D58A4
  if (!crb(c,0)) { goto L_800D58BC; } // 800D58A8
  c->r[0]=0u+0x00000000u; // 800D58AC
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D58B0
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D58B4
  goto L_800D59AC; // 800D58B8
L_800D58BC:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D58BC
  c->r[0]=c->r[3]+0x00000001u; // 800D58C0
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D58C4
  goto L_800D59AC; // 800D58C8
L_800D58CC:;
  c->r[0]=R32(c->r[31]+0x00000128u); // 800D58CC
  c->r[6]=c->r[31]+0x00000158u; // 800D58D0
  c->r[3]=R32(c->r[31]+0x00000038u); // 800D58D4
  W32(c->r[31]+0x00000158u,c->r[0]); // 800D58D8
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800D58DC
  c->r[5]=R32(c->r[31]+0x0000015Cu); // 800D58E0
  c->lr=0x800D58E8u; f_8021CC84(c); // 800D58E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D58E8
  if (!crb(c,0)) { goto L_800D5908; } // 800D58EC
  c->r[0]=0u+0x00000000u; // 800D58F0
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D58F4
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D58F8
  c->lr=0x800D5900u; f_8021A87C(c); // 800D58FC
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5900
  goto L_800D59AC; // 800D5904
L_800D5908:;
  c->r[4]=R32(c->r[31]+0x00000074u); // 800D5908
  W32(c->r[31]+0x00000078u,c->r[3]); // 800D590C
  c->r[0]=c->r[4]+0x00000001u; // 800D5910
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5914
  goto L_800D59AC; // 800D5918
L_800D591C:;
  c->r[4]=0u+0x80260000u; // 800D591C
  c->r[3]=c->r[31]|c->r[31]; // 800D5920
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D5924
  c->r[4]=c->r[4]+0x0000017Cu; // 800D5928
  c->lr=0x800D5930u; f_800D5E5C(c); // 800D592C
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D5930
  if (!crb(c,2)) { goto L_800D5954; } // 800D5934
  c->r[3]=c->r[31]|c->r[31]; // 800D5938
  c->lr=0x800D5940u; f_800D5FD4(c); // 800D593C
  {uint32_t ea=c->r[2]+0xFFFF8B10u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D5940
  {uint32_t ea=c->r[2]+0xFFFF8B0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5944
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 800D5948
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D594C
  goto L_800D59AC; // 800D5950
L_800D5954:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5954
  if (!crb(c,0)) { goto L_800D596C; } // 800D5958
  c->r[0]=0u+0x00000000u; // 800D595C
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5960
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5964
  goto L_800D59AC; // 800D5968
L_800D596C:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D596C
  c->r[0]=c->r[3]+0x00000001u; // 800D5970
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5974
  goto L_800D59AC; // 800D5978
L_800D597C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D597C
  c->lr=0x800D5984u; f_800D31C8(c); // 800D5980
  c->r[3]=c->r[31]|c->r[31]; // 800D5984
  c->lr=0x800D598Cu; f_800D32C0(c); // 800D5988
  {uint32_t ea=c->r[2]+0xFFFF8AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D598C
  c->r[0]=0u+0x00000000u; // 800D5990
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5994
  c->r[3]=0u+0x00000000u; // 800D5998
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D599C
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800D59A0
  c->lr=0x800D59A8u; f_8021A87C(c); // 800D59A4
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D59A8
L_800D59AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D59AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D59B0
  c->lr=c->r[0]; // 800D59B4
  c->r[1]=c->r[1]+0x00000010u; // 800D59B8
  return; // 800D59BC
}

// fn_800D59C0
void f_800D59C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D59C0
  c->r[0]=c->lr; // 800D59C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D59C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D59CC
  c->r[31]=c->r[3]|c->r[3]; // 800D59D0
  c->r[0]=R32(c->r[3]+0x00000074u); // 800D59D4
  cmps(c,0,(int32_t)c->r[0],1); // 800D59D8
  if (crb(c,2)) { goto L_800D5A40; } // 800D59DC
  if (!crb(c,0)) { goto L_800D59F0; } // 800D59E0
  cmps(c,0,(int32_t)c->r[0],0); // 800D59E4
  if (!crb(c,0)) { goto L_800D59FC; } // 800D59E8
  goto L_800D5AB4; // 800D59EC
L_800D59F0:;
  cmps(c,0,(int32_t)c->r[0],3); // 800D59F0
  if (!crb(c,0)) { goto L_800D5AB4; } // 800D59F4
  goto L_800D5A90; // 800D59F8
L_800D59FC:;
  c->r[3]=R32(c->r[3]+0x00000038u); // 800D59FC
  c->r[5]=0u+0x00000002u; // 800D5A00
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800D5A04
  c->lr=0x800D5A0Cu; f_8020C588(c); // 800D5A08
  cmps(c,0,(int32_t)c->r[3],0); // 800D5A0C
  if (!crb(c,0)) { goto L_800D5A2C; } // 800D5A10
  c->r[0]=0u+0x00000000u; // 800D5A14
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5A18
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5A1C
  c->lr=0x800D5A24u; f_8021A87C(c); // 800D5A20
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5A24
  goto L_800D5AB4; // 800D5A28
L_800D5A2C:;
  c->r[4]=R32(c->r[31]+0x00000074u); // 800D5A2C
  W32(c->r[31]+0x00000078u,c->r[3]); // 800D5A30
  c->r[0]=c->r[4]+0x00000001u; // 800D5A34
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5A38
  goto L_800D5AB4; // 800D5A3C
L_800D5A40:;
  c->r[4]=0u+0x80260000u; // 800D5A40
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D5A44
  c->r[4]=c->r[4]+0x000001BDu; // 800D5A48
  c->lr=0x800D5A50u; f_800D5E5C(c); // 800D5A4C
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D5A50
  if (!crb(c,2)) { goto L_800D5A68; } // 800D5A54
  c->r[3]=c->r[31]|c->r[31]; // 800D5A58
  c->lr=0x800D5A60u; f_800D5FD4(c); // 800D5A5C
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[1]);} // 800D5A60
  goto L_800D5AB4; // 800D5A64
L_800D5A68:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5A68
  if (!crb(c,0)) { goto L_800D5A80; } // 800D5A6C
  c->r[0]=0u+0x00000000u; // 800D5A70
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5A74
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5A78
  goto L_800D5AB4; // 800D5A7C
L_800D5A80:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D5A80
  c->r[0]=c->r[3]+0x00000001u; // 800D5A84
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5A88
  goto L_800D5AB4; // 800D5A8C
L_800D5A90:;
  {uint32_t ea=c->r[2]+0xFFFF8AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5A90
  c->r[0]=0u+0x00000000u; // 800D5A94
  W8(c->r[3]+0x00000005u,c->r[0]); // 800D5A98
  W32(c->r[3]+0x00000070u,c->r[0]); // 800D5A9C
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 800D5AA0
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800D5AA4
  c->r[3]=0u+0x00000000u; // 800D5AA8
  c->lr=0x800D5AB0u; f_8021A87C(c); // 800D5AAC
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5AB0
L_800D5AB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5AB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5AB8
  c->lr=c->r[0]; // 800D5ABC
  c->r[1]=c->r[1]+0x00000010u; // 800D5AC0
  return; // 800D5AC4
}

// fn_800D5AC8
void f_800D5AC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5AC8
  c->r[0]=c->lr; // 800D5ACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5AD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5AD4
  c->r[31]=c->r[3]|c->r[3]; // 800D5AD8
  c->r[0]=R32(c->r[3]+0x00000074u); // 800D5ADC
  cmps(c,0,(int32_t)c->r[0],1); // 800D5AE0
  if (crb(c,2)) { goto L_800D5B48; } // 800D5AE4
  if (!crb(c,0)) { goto L_800D5AF8; } // 800D5AE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D5AEC
  if (!crb(c,0)) { goto L_800D5B04; } // 800D5AF0
  goto L_800D5BB8; // 800D5AF4
L_800D5AF8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800D5AF8
  if (!crb(c,0)) { goto L_800D5BB8; } // 800D5AFC
  goto L_800D5B98; // 800D5B00
L_800D5B04:;
  c->r[3]=R32(c->r[3]+0x00000038u); // 800D5B04
  c->r[5]=0u+0x00000001u; // 800D5B08
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800D5B0C
  c->lr=0x800D5B14u; f_8020C588(c); // 800D5B10
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B14
  if (!crb(c,0)) { goto L_800D5B34; } // 800D5B18
  c->r[0]=0u+0x00000000u; // 800D5B1C
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5B20
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5B24
  c->lr=0x800D5B2Cu; f_8021A87C(c); // 800D5B28
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5B2C
  goto L_800D5BB8; // 800D5B30
L_800D5B34:;
  c->r[4]=R32(c->r[31]+0x00000074u); // 800D5B34
  W32(c->r[31]+0x00000078u,c->r[3]); // 800D5B38
  c->r[0]=c->r[4]+0x00000001u; // 800D5B3C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5B40
  goto L_800D5BB8; // 800D5B44
L_800D5B48:;
  c->r[4]=0u+0x80260000u; // 800D5B48
  c->r[4]=c->r[4]+0xFFFFF900u; // 800D5B4C
  c->r[4]=c->r[4]+0x000001BDu; // 800D5B50
  c->lr=0x800D5B58u; f_800D5E5C(c); // 800D5B54
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D5B58
  if (!crb(c,2)) { goto L_800D5B70; } // 800D5B5C
  c->r[3]=c->r[31]|c->r[31]; // 800D5B60
  c->lr=0x800D5B68u; f_800D5FD4(c); // 800D5B64
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[1]);} // 800D5B68
  goto L_800D5BB8; // 800D5B6C
L_800D5B70:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B70
  if (!crb(c,0)) { goto L_800D5B88; } // 800D5B74
  c->r[0]=0u+0x00000000u; // 800D5B78
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5B7C
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5B80
  goto L_800D5BB8; // 800D5B84
L_800D5B88:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800D5B88
  c->r[0]=c->r[3]+0x00000001u; // 800D5B8C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D5B90
  goto L_800D5BB8; // 800D5B94
L_800D5B98:;
  {uint32_t ea=c->r[2]+0xFFFF8AF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5B98
  c->r[0]=0u+0x00000000u; // 800D5B9C
  W32(c->r[3]+0x00000070u,c->r[0]); // 800D5BA0
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 800D5BA4
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 800D5BA8
  c->r[3]=0u+0x00000000u; // 800D5BAC
  c->lr=0x800D5BB4u; f_8021A87C(c); // 800D5BB0
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5BB4
L_800D5BB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5BB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5BBC
  c->lr=c->r[0]; // 800D5BC0
  c->r[1]=c->r[1]+0x00000010u; // 800D5BC4
  return; // 800D5BC8
}

// fn_800D5BCC
void f_800D5BCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5BCC
  c->r[0]=c->lr; // 800D5BD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5BD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5BD8
  c->r[31]=c->r[3]|c->r[3]; // 800D5BDC
  c->r[30]=c->r[4]|c->r[4]; // 800D5BE0
  c->lr=0x800D5BE8u; f_800D5D6C(c); // 800D5BE4
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 800D5BE8
  W32(c->r[31]+0x00000128u,c->r[30]); // 800D5BEC
  c->r[4]=0u+0x00000020u; // 800D5BF0
  W32(c->r[31]+0x00000144u,c->r[30]); // 800D5BF4
  c->r[5]=0u+0x00000001u; // 800D5BF8
  c->r[0]=c->r[3]+0x0000001Fu; // 800D5BFC
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D5C00
  c->r[3]=c->r[30]|c->r[30]; // 800D5C04
  c->lr=0x800D5C0Cu; f_8009210C(c); // 800D5C08
  W32(c->r[31]+0x0000014Cu,c->r[3]); // 800D5C0C
  c->r[5]=c->r[30]|c->r[30]; // 800D5C10
  c->r[4]=0u+0x00000000u; // 800D5C14
  c->lr=0x800D5C1Cu; f_8000443C(c); // 800D5C18
  c->r[0]=R32(c->r[31]+0x00000128u); // 800D5C1C
  c->r[4]=0u+0x00000020u; // 800D5C20
  c->r[5]=0u+0x00000001u; // 800D5C24
  c->r[3]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D5C28
  c->r[0]=c->r[3]+0x0000001Fu; // 800D5C2C
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D5C30
  c->r[3]=c->r[30]|c->r[30]; // 800D5C34
  c->lr=0x800D5C3Cu; f_8009210C(c); // 800D5C38
  W32(c->r[31]+0x00000154u,c->r[3]); // 800D5C3C
  c->r[5]=c->r[30]|c->r[30]; // 800D5C40
  c->r[4]=0u+0x00000000u; // 800D5C44
  c->lr=0x800D5C4Cu; f_8000443C(c); // 800D5C48
  c->r[30]=0u+0x00020000u; // 800D5C4C
  c->r[4]=0u+0x00000020u; // 800D5C50
  W32(c->r[31]+0x00000138u,c->r[30]); // 800D5C54
  c->r[3]=c->r[30]|c->r[30]; // 800D5C58
  c->r[5]=0u+0x00000001u; // 800D5C5C
  c->lr=0x800D5C64u; f_8009210C(c); // 800D5C60
  W32(c->r[31]+0x00000134u,c->r[3]); // 800D5C64
  c->r[4]=0u+0x00000000u; // 800D5C68
  c->r[5]=R32(c->r[31]+0x00000138u); // 800D5C6C
  c->lr=0x800D5C74u; f_8000443C(c); // 800D5C70
  W32(c->r[31]+0x00000140u,c->r[30]); // 800D5C74
  c->r[3]=c->r[30]|c->r[30]; // 800D5C78
  c->r[4]=0u+0x00000020u; // 800D5C7C
  c->r[5]=0u+0x00000001u; // 800D5C80
  c->lr=0x800D5C88u; f_8009210C(c); // 800D5C84
  W32(c->r[31]+0x0000013Cu,c->r[3]); // 800D5C88
  c->r[4]=0u+0x00000000u; // 800D5C8C
  c->r[5]=R32(c->r[31]+0x00000140u); // 800D5C90
  c->lr=0x800D5C98u; f_8000443C(c); // 800D5C94
  c->r[0]=R32(c->r[31]+0x00000128u); // 800D5C98
  c->r[4]=0u+0x00000020u; // 800D5C9C
  c->r[5]=0u+0x00000001u; // 800D5CA0
  c->r[3]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D5CA4
  c->r[0]=c->r[3]+0x0000001Fu; // 800D5CA8
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D5CAC
  c->r[3]=c->r[30]|c->r[30]; // 800D5CB0
  c->lr=0x800D5CB8u; f_8009210C(c); // 800D5CB4
  W32(c->r[31]+0x0000015Cu,c->r[3]); // 800D5CB8
  c->r[5]=c->r[30]|c->r[30]; // 800D5CBC
  c->r[4]=0u+0x00000000u; // 800D5CC0
  c->lr=0x800D5CC8u; f_8000443C(c); // 800D5CC4
  c->r[0]=R32(c->r[31]+0x00000128u); // 800D5CC8
  c->r[4]=0u+0x00000020u; // 800D5CCC
  c->r[5]=0u+0x00000001u; // 800D5CD0
  c->r[3]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800D5CD4
  c->r[0]=c->r[3]+0x0000001Fu; // 800D5CD8
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D5CDC
  c->r[3]=c->r[30]|c->r[30]; // 800D5CE0
  c->lr=0x800D5CE8u; f_8009210C(c); // 800D5CE4
  W32(c->r[31]+0x00000164u,c->r[3]); // 800D5CE8
  c->r[5]=c->r[30]|c->r[30]; // 800D5CEC
  c->r[4]=0u+0x00000000u; // 800D5CF0
  c->lr=0x800D5CF8u; f_8000443C(c); // 800D5CF4
  c->r[0]=R32(c->r[31]+0x00000128u); // 800D5CF8
  c->r[4]=0u+0x00000020u; // 800D5CFC
  c->r[5]=0u+0x00000001u; // 800D5D00
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800D5D04
  c->r[0]=c->r[3]+0x0000001Fu; // 800D5D08
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800D5D0C
  c->r[3]=c->r[30]|c->r[30]; // 800D5D10
  c->lr=0x800D5D18u; f_8009210C(c); // 800D5D14
  W32(c->r[31]+0x0000016Cu,c->r[3]); // 800D5D18
  c->r[5]=c->r[30]|c->r[30]; // 800D5D1C
  c->r[4]=0u+0x00000000u; // 800D5D20
  c->lr=0x800D5D28u; f_8000443C(c); // 800D5D24
  c->r[0]=R32(c->r[31]+0x00000128u); // 800D5D28
  c->r[4]=0u+0x00000020u; // 800D5D2C
  c->r[5]=0u+0x00000001u; // 800D5D30
  W32(c->r[31]+0x00000170u,c->r[0]); // 800D5D34
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800D5D38
  c->lr=0x800D5D40u; f_8009210C(c); // 800D5D3C
  c->r[0]=R32(c->r[31]+0x00000128u); // 800D5D40
  c->r[4]=0u+0x00000000u; // 800D5D44
  W32(c->r[31]+0x00000174u,c->r[3]); // 800D5D48
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800D5D4C
  c->lr=0x800D5D54u; f_8000443C(c); // 800D5D50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5D54
  c->r[3]=0u+0x00000001u; // 800D5D58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5D5C
  c->lr=c->r[0]; // 800D5D60
  c->r[1]=c->r[1]+0x00000010u; // 800D5D64
  return; // 800D5D68
}

// fn_800D5D6C
void f_800D5D6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5D6C
  c->r[0]=c->lr; // 800D5D70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5D74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5D78
  c->r[31]=0u+0x00000000u; // 800D5D7C
  c->r[30]=c->r[3]|c->r[3]; // 800D5D80
  c->r[0]=R32(c->r[3]+0x00000134u); // 800D5D84
  W32(c->r[3]+0x00000138u,c->r[31]); // 800D5D88
  cmps(c,0,(int32_t)c->r[0],0); // 800D5D8C
  if (crb(c,2)) { goto L_800D5DA0; } // 800D5D90
  c->r[3]=c->r[0]|c->r[0]; // 800D5D94
  c->lr=0x800D5D9Cu; f_8009227C(c); // 800D5D98
  W32(c->r[30]+0x00000134u,c->r[31]); // 800D5D9C
L_800D5DA0:;
  c->r[3]=R32(c->r[30]+0x0000013Cu); // 800D5DA0
  c->r[31]=0u+0x00000000u; // 800D5DA4
  W32(c->r[30]+0x00000140u,c->r[31]); // 800D5DA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D5DAC
  if (crb(c,2)) { goto L_800D5DBC; } // 800D5DB0
  c->lr=0x800D5DB8u; f_8009227C(c); // 800D5DB4
  W32(c->r[30]+0x0000013Cu,c->r[31]); // 800D5DB8
L_800D5DBC:;
  c->r[3]=R32(c->r[30]+0x0000014Cu); // 800D5DBC
  c->r[31]=0u+0x00000000u; // 800D5DC0
  W32(c->r[30]+0x00000148u,c->r[31]); // 800D5DC4
  cmps(c,0,(int32_t)c->r[3],0); // 800D5DC8
  if (crb(c,2)) { goto L_800D5DD8; } // 800D5DCC
  c->lr=0x800D5DD4u; f_8009227C(c); // 800D5DD0
  W32(c->r[30]+0x0000014Cu,c->r[31]); // 800D5DD4
L_800D5DD8:;
  c->r[3]=R32(c->r[30]+0x00000154u); // 800D5DD8
  c->r[31]=0u+0x00000000u; // 800D5DDC
  W32(c->r[30]+0x00000150u,c->r[31]); // 800D5DE0
  cmps(c,0,(int32_t)c->r[3],0); // 800D5DE4
  if (crb(c,2)) { goto L_800D5DF4; } // 800D5DE8
  c->lr=0x800D5DF0u; f_8009227C(c); // 800D5DEC
  W32(c->r[30]+0x00000154u,c->r[31]); // 800D5DF0
L_800D5DF4:;
  c->r[3]=R32(c->r[30]+0x00000164u); // 800D5DF4
  c->r[31]=0u+0x00000000u; // 800D5DF8
  W32(c->r[30]+0x00000160u,c->r[31]); // 800D5DFC
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E00
  if (crb(c,2)) { goto L_800D5E10; } // 800D5E04
  c->lr=0x800D5E0Cu; f_8009227C(c); // 800D5E08
  W32(c->r[30]+0x00000164u,c->r[31]); // 800D5E0C
L_800D5E10:;
  c->r[3]=R32(c->r[30]+0x0000016Cu); // 800D5E10
  c->r[31]=0u+0x00000000u; // 800D5E14
  W32(c->r[30]+0x00000168u,c->r[31]); // 800D5E18
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E1C
  if (crb(c,2)) { goto L_800D5E2C; } // 800D5E20
  c->lr=0x800D5E28u; f_8009227C(c); // 800D5E24
  W32(c->r[30]+0x0000016Cu,c->r[31]); // 800D5E28
L_800D5E2C:;
  c->r[3]=R32(c->r[30]+0x00000174u); // 800D5E2C
  c->r[31]=0u+0x00000000u; // 800D5E30
  W32(c->r[30]+0x00000170u,c->r[31]); // 800D5E34
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E38
  if (crb(c,2)) { goto L_800D5E48; } // 800D5E3C
  c->lr=0x800D5E44u; f_8009227C(c); // 800D5E40
  W32(c->r[30]+0x00000174u,c->r[31]); // 800D5E44
L_800D5E48:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5E4C
  c->lr=c->r[0]; // 800D5E50
  c->r[1]=c->r[1]+0x00000010u; // 800D5E54
  return; // 800D5E58
}

// fn_800D5E5C
void f_800D5E5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5E5C
  c->r[0]=c->lr; // 800D5E60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5E64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D5E68
  c->r[31]=c->r[3]|c->r[3]; // 800D5E6C
  c->r[4]=c->r[31]+0x0000007Cu; // 800D5E70
  c->r[3]=R32(c->r[3]+0x00000078u); // 800D5E74
  c->lr=0x800D5E7Cu; f_80201E60(c); // 800D5E78
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D5E7C
  if (!crb(c,2)) { goto L_800D5E90; } // 800D5E80
  c->lr=0x800D5E88u; f_800E8128(c); // 800D5E84
  c->r[3]=0u+0xFFFFF057u; // 800D5E88
  goto L_800D5EBC; // 800D5E8C
L_800D5E90:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5E90
  if (!crb(c,0)) { goto L_800D5EB8; } // 800D5E94
  c->r[0]=0u+0x00000000u; // 800D5E98
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 800D5E9C
  c->r[3]=R32(c->r[31]+0x00000094u); // 800D5EA0
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D5EA4
  c->lr=0x800D5EACu; f_8021A87C(c); // 800D5EA8
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D5EAC
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 800D5EB0
  goto L_800D5EBC; // 800D5EB4
L_800D5EB8:;
  c->r[3]=0u+0x00000000u; // 800D5EB8
L_800D5EBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5EBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D5EC0
  c->lr=c->r[0]; // 800D5EC4
  c->r[1]=c->r[1]+0x00000010u; // 800D5EC8
  return; // 800D5ECC
}

// fn_800D5ED0
void f_800D5ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5ED0
  c->r[0]=c->lr; // 800D5ED4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D5ED8
  {uint32_t ea=c->r[1]+0x00000084u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5EDC
  c->r[25]=c->r[3]|c->r[3]; // 800D5EE0
  c->r[26]=c->r[4]|c->r[4]; // 800D5EE4
  if (!crb(c,6)) { goto L_800D5F0C; } // 800D5EE8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800D5EEC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800D5EF0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800D5EF4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800D5EF8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800D5EFC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800D5F00
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800D5F04
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800D5F08
L_800D5F0C:;
  c->r[29]=c->r[1]+0x000000A8u; // 800D5F0C
  c->r[30]=c->r[1]+0x00000008u; // 800D5F10
  c->r[28]=0u+0x02000000u; // 800D5F14
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D5F18
  c->r[27]=c->r[1]+0x00000068u; // 800D5F1C
  c->r[3]=c->r[26]|c->r[26]; // 800D5F20
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D5F24
  c->r[4]=c->r[27]|c->r[27]; // 800D5F28
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D5F2C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D5F30
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D5F34
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800D5F38
  W32(c->r[1]+0x00000020u,c->r[9]); // 800D5F3C
  W32(c->r[1]+0x00000024u,c->r[10]); // 800D5F40
  W32(c->r[1]+0x00000068u,c->r[28]); // 800D5F44
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 800D5F48
  W32(c->r[1]+0x00000070u,c->r[30]); // 800D5F4C
  c->lr=0x800D5F54u; f_800E1284(c); // 800D5F50
  c->r[0]=R32(c->r[25]+0x00000178u); // 800D5F54
  cmps(c,0,(int32_t)c->r[0],0); // 800D5F58
  if (crb(c,0)) { goto L_800D5FC0; } // 800D5F5C
  c->r[31]=0u+0x802B0000u; // 800D5F60
  c->r[31]=c->r[31]+0x00001B78u; // 800D5F64
  c->r[3]=c->r[31]+0x00000B30u; // 800D5F68
  c->lr=0x800D5F70u; f_800D01CC(c); // 800D5F6C
  W32(c->r[1]+0x00000068u,c->r[28]); // 800D5F70
  c->r[28]=c->r[3]|c->r[3]; // 800D5F74
  c->r[5]=c->r[26]|c->r[26]; // 800D5F78
  c->r[6]=c->r[27]|c->r[27]; // 800D5F7C
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 800D5F80
  c->r[4]=0u+0x00000FFFu; // 800D5F84
  W32(c->r[1]+0x00000070u,c->r[30]); // 800D5F88
  c->lr=0x800D5F90u; f_8011281C(c); // 800D5F8C
  c->r[4]=R32(c->r[25]+0x00000178u); // 800D5F90
  c->r[3]=c->r[31]+0x00000EF4u; // 800D5F94
  c->lr=0x800D5F9Cu; f_8009D4D8(c); // 800D5F98
  cmps(c,0,(int32_t)c->r[3],0); // 800D5F9C
  if (crb(c,2)) { goto L_800D5FAC; } // 800D5FA0
  c->r[4]=c->r[28]|c->r[28]; // 800D5FA4
  c->lr=0x800D5FACu; f_800C6E3C(c); // 800D5FA8
L_800D5FAC:;
  c->r[3]=0u+0x802B0000u; // 800D5FAC
  c->r[4]=c->r[28]|c->r[28]; // 800D5FB0
  c->r[3]=c->r[3]+0x00001B78u; // 800D5FB4
  c->r[3]=c->r[3]+0x00000B30u; // 800D5FB8
  c->lr=0x800D5FC0u; f_800D021C(c); // 800D5FBC
L_800D5FC0:;
  {uint32_t ea=c->r[1]+0x00000084u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5FC0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800D5FC4
  c->lr=c->r[0]; // 800D5FC8
  c->r[1]=c->r[1]+0x000000A0u; // 800D5FCC
  return; // 800D5FD0
}

// fn_800D5FD4
void f_800D5FD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5FD4
  c->r[0]=c->lr; // 800D5FD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5FDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D5FE0
  c->r[31]=c->r[3]|c->r[3]; // 800D5FE4
  c->r[0]=R32(c->r[3]+0x00000078u); // 800D5FE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D5FEC
  if (!crb(c,0)) { goto L_800D5FFC; } // 800D5FF0
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D5FF4
  goto L_800D6050; // 800D5FF8
L_800D5FFC:;
  c->r[3]=c->r[0]|c->r[0]; // 800D5FFC
  c->r[4]=c->r[31]+0x0000007Cu; // 800D6000
  c->lr=0x800D6008u; f_80201E60(c); // 800D6004
  cmps(c,0,(int32_t)c->r[3],-4009); // 800D6008
  {uint32_t ea=c->r[2]+0xFFFF8AE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D600C
  if (!crb(c,2)) { goto L_800D6050; } // 800D6010
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 800D6014
  cmps(c,0,(int32_t)c->r[4],0); // 800D6018
  if (crb(c,2)) { goto L_800D6050; } // 800D601C
  c->r[3]=R32(c->r[31]+0x00000090u); // 800D6020
  c->r[0]=0u+0x43300000u; // 800D6024
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D6028
  {uint32_t ea=c->r[2]+0xFFFF8B18u; c->f[2]=RF64(ea);} // 800D602C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D6030
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D6034
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D6038
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800D603C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D6040
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800D6044
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800D6048
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800D604C
L_800D6050:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6050
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6054
  c->lr=c->r[0]; // 800D6058
  c->r[1]=c->r[1]+0x00000020u; // 800D605C
  return; // 800D6060
}

// fn_800D6064
void f_800D6064(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6064
  c->r[0]=c->lr; // 800D6068
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D606C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6070
  c->r[30]=c->r[3]|c->r[3]; // 800D6074
  c->r[31]=c->r[4]|c->r[4]; // 800D6078
  c->r[3]=c->r[1]+0x00000008u; // 800D607C
  c->r[4]=c->r[30]+0x00000008u; // 800D6080
  c->lr=0x800D6088u; f_800325BC(c); // 800D6084
  W32(c->r[30]+0x00000020u,c->r[31]); // 800D6088
  c->r[3]=c->r[1]+0x00000008u; // 800D608C
  c->r[4]=0u+0xFFFFFFFFu; // 800D6090
  c->lr=0x800D6098u; f_800325FC(c); // 800D6094
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6098
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D609C
  c->lr=c->r[0]; // 800D60A0
  c->r[1]=c->r[1]+0x00000020u; // 800D60A4
  return; // 800D60A8
}

// fn_800D60AC
void f_800D60AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D60AC
  c->r[0]=c->lr; // 800D60B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D60B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D60B8
  c->r[31]=c->r[3]|c->r[3]; // 800D60BC
  c->r[3]=c->r[1]+0x00000008u; // 800D60C0
  c->r[4]=c->r[31]+0x00000008u; // 800D60C4
  c->lr=0x800D60CCu; f_800325BC(c); // 800D60C8
  c->r[31]=R32(c->r[31]+0x00000020u); // 800D60CC
  c->r[3]=c->r[1]+0x00000008u; // 800D60D0
  c->r[4]=0u+0xFFFFFFFFu; // 800D60D4
  c->lr=0x800D60DCu; f_800325FC(c); // 800D60D8
  c->r[3]=c->r[31]|c->r[31]; // 800D60DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D60E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D60E4
  c->lr=c->r[0]; // 800D60E8
  c->r[1]=c->r[1]+0x00000020u; // 800D60EC
  return; // 800D60F0
}

// fn_800D60F4
void f_800D60F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D60F4
  c->r[0]=c->lr; // 800D60F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D60FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6100
  c->r[31]=R32(c->r[3]+0x00000004u); // 800D6104
L_800D6108:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6108
  c->lr=0x800D6110u; f_800D60AC(c); // 800D610C
  cmps(c,0,(int32_t)c->r[3],2); // 800D6110
  if (crb(c,2)) { goto L_800D615C; } // 800D6114
  if (!crb(c,0)) { goto L_800D6124; } // 800D6118
  cmps(c,0,(int32_t)c->r[3],1); // 800D611C
  if (!crb(c,0)) { goto L_800D612C; } // 800D6120
L_800D6124:;
  c->lr=0x800D6128u; f_800E8128(c); // 800D6124
  IRQCHK(c); goto L_800D6108; // 800D6128
L_800D612C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D612C
  c->lr=0x800D6134u; f_800D6188(c); // 800D6130
  cmps(c,0,(int32_t)c->r[3],0); // 800D6134
  if (crb(c,2)) { goto L_800D614C; } // 800D6138
  c->r[3]=c->r[31]|c->r[31]; // 800D613C
  c->r[4]=0u+0x00000000u; // 800D6140
  c->lr=0x800D6148u; f_800D6064(c); // 800D6144
  IRQCHK(c); goto L_800D6108; // 800D6148
L_800D614C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D614C
  c->r[4]=0u+0x00000003u; // 800D6150
  c->lr=0x800D6158u; f_800D6064(c); // 800D6154
  IRQCHK(c); goto L_800D6108; // 800D6158
L_800D615C:;
  c->lr=0x800D6160u; f_800D6224(c); // 800D615C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6160
  if (crb(c,2)) { goto L_800D6178; } // 800D6164
  c->r[3]=c->r[31]|c->r[31]; // 800D6168
  c->r[4]=0u+0x00000000u; // 800D616C
  c->lr=0x800D6174u; f_800D6064(c); // 800D6170
  IRQCHK(c); goto L_800D6108; // 800D6174
L_800D6178:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6178
  c->r[4]=0u+0x00000003u; // 800D617C
  c->lr=0x800D6184u; f_800D6064(c); // 800D6180
  IRQCHK(c); goto L_800D6108; // 800D6184
}

// fn_800D6188
void f_800D6188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6188
  c->r[0]=c->lr; // 800D618C
  c->r[4]=0u+0x00000000u; // 800D6190
  c->r[5]=0u+0x00000008u; // 800D6194
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D619C
  c->r[31]=c->r[3]|c->r[3]; // 800D61A0
  c->r[3]=c->r[1]+0x00000008u; // 800D61A4
  c->lr=0x800D61ACu; f_8000443C(c); // 800D61A8
  c->r[5]=0u+0x800D0000u; // 800D61AC
  c->r[4]=0u+0x800D0000u; // 800D61B0
  c->r[5]=c->r[5]+0x00002B44u; // 800D61B4
  c->r[3]=c->r[1]+0x00000008u; // 800D61B8
  c->r[4]=c->r[4]+0x00002BA4u; // 800D61BC
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D61C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D61C4
  c->lr=0x800D61CCu; f_80228050(c); // 800D61C8
  cmps(c,0,(int32_t)c->r[3],-7); // 800D61CC
  if (crb(c,2)) { goto L_800D61E4; } // 800D61D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D61D4
  if (!crb(c,0)) { goto L_800D61E4; } // 800D61D8
  c->r[3]=0u+0x00000000u; // 800D61DC
  goto L_800D6210; // 800D61E0
L_800D61E4:;
  c->lr=0x800D61E8u; f_80228314(c); // 800D61E4
  cmps(c,0,(int32_t)c->r[3],-7); // 800D61E8
  if (crb(c,2)) { goto L_800D620C; } // 800D61EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D61F0
  if (!crb(c,0)) { goto L_800D620C; } // 800D61F4
  c->lr=0x800D61FCu; f_8022C054(c); // 800D61F8
  c->lr=0x800D6200u; f_8010EB94(c); // 800D61FC
  W32(c->r[31]+0x00000120u,c->r[3]); // 800D6200
  c->r[3]=0u+0x00000000u; // 800D6204
  goto L_800D6210; // 800D6208
L_800D620C:;
  c->r[3]=0u+0x00000001u; // 800D620C
L_800D6210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6214
  c->lr=c->r[0]; // 800D6218
  c->r[1]=c->r[1]+0x00000020u; // 800D621C
  return; // 800D6220
}

// fn_800D6224
void f_800D6224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6224
  c->r[0]=c->lr; // 800D6228
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D622C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6230
  c->r[31]=0u+0x00000001u; // 800D6234
  c->r[30]=0u+0x00000000u; // 800D6238
  c->r[25]=0u+0x80000000u; // 800D623C
  c->r[26]=0u+0x000003E8u; // 800D6240
  c->r[27]=0u+0x00000000u; // 800D6244
  c->r[28]=0u+0x000001F4u; // 800D6248
L_800D624C:;
  c->lr=0x800D6250u; f_80228748(c); // 800D624C
  cmps(c,0,(int32_t)c->r[3],-7); // 800D6250
  if (crb(c,2)) { goto L_800D62A0; } // 800D6254
  cmps(c,0,(int32_t)c->r[3],-10); // 800D6258
  if (!crb(c,2)) { goto L_800D6294; } // 800D625C
  c->r[0]=R32(c->r[25]+0x000000F8u); // 800D6260
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[28]); // 800D6264
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D6268
  c->r[4]=divwu(c->r[0],c->r[26]); // 800D626C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[28])>>32); // 800D6270
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)500); // 800D6274
  c->r[3]=c->r[0]+c->r[3]; // 800D6278
  c->lr=0x800D6280u; f_800E8EE8(c); // 800D627C
  c->r[30]=c->r[30]+0x00000001u; // 800D6280
  cmps(c,0,(int32_t)c->r[30],120); // 800D6284
  if (crb(c,0)) { IRQCHK(c); goto L_800D624C; } // 800D6288
  c->r[31]=0u+0x00000000u; // 800D628C
  goto L_800D62A0; // 800D6290
L_800D6294:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D6294
  if (!crb(c,0)) { goto L_800D62A0; } // 800D6298
  c->r[31]=0u+0x00000000u; // 800D629C
L_800D62A0:;
  c->r[29]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[28]); // 800D62A0
L_800D62A4:;
  c->lr=0x800D62A8u; f_80228218(c); // 800D62A4
  cmps(c,0,(int32_t)c->r[3],-7); // 800D62A8
  c->r[24]=c->r[3]|c->r[3]; // 800D62AC
  if (crb(c,2)) { goto L_800D62F0; } // 800D62B0
  cmps(c,0,(int32_t)c->r[3],-10); // 800D62B4
  if (crb(c,2)) { goto L_800D62C4; } // 800D62B8
  cmps(c,0,(int32_t)c->r[3],-6); // 800D62BC
  if (!crb(c,2)) { goto L_800D62F0; } // 800D62C0
L_800D62C4:;
  c->r[0]=R32(c->r[25]+0x000000F8u); // 800D62C4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D62C8
  c->r[3]=divwu(c->r[0],c->r[26]); // 800D62CC
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[28])>>32); // 800D62D0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)500); // 800D62D4
  c->r[3]=c->r[0]+c->r[29]; // 800D62D8
  c->lr=0x800D62E0u; f_800E8EE8(c); // 800D62DC
  c->r[30]=c->r[30]+0x00000001u; // 800D62E0
  cmps(c,0,(int32_t)c->r[30],120); // 800D62E4
  if (crb(c,0)) { IRQCHK(c); goto L_800D62A4; } // 800D62E8
  c->r[31]=0u+0x00000000u; // 800D62EC
L_800D62F0:;
  cmps(c,0,(int32_t)c->r[24],-26); // 800D62F0
  if (!crb(c,2)) { goto L_800D632C; } // 800D62F4
  c->r[0]=R32(c->r[25]+0x000000F8u); // 800D62F8
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[28]); // 800D62FC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D6300
  c->r[4]=divwu(c->r[0],c->r[26]); // 800D6304
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[28])>>32); // 800D6308
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)500); // 800D630C
  c->r[3]=c->r[0]+c->r[3]; // 800D6310
  c->lr=0x800D6318u; f_800E8EE8(c); // 800D6314
  c->r[30]=c->r[30]+0x00000001u; // 800D6318
  cmps(c,0,(int32_t)c->r[30],120); // 800D631C
  if (crb(c,0)) { IRQCHK(c); goto L_800D624C; } // 800D6320
  c->r[31]=0u+0x00000000u; // 800D6324
  goto L_800D6340; // 800D6328
L_800D632C:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D632C
  if (!crb(c,0)) { goto L_800D6340; } // 800D6330
  c->r[0]=addc(c,c->r[24],0xFFFFFFFFu,0); // 800D6334
  c->r[3]=addc(c,~c->r[0],c->r[24],c->xer_ca); // 800D6338
  goto L_800D6344; // 800D633C
L_800D6340:;
  c->r[3]=c->r[31]|c->r[31]; // 800D6340
L_800D6344:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6344
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D6348
  c->lr=c->r[0]; // 800D634C
  c->r[1]=c->r[1]+0x00000030u; // 800D6350
  return; // 800D6354
}

// fn_800D6358
void f_800D6358(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6358
  c->r[0]=c->lr; // 800D635C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6360
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6364
  c->r[31]=c->r[3]|c->r[3]; // 800D6368
  W8(c->r[1]+0x00000008u,c->r[4]); // 800D636C
  c->lr=0x800D6374u; f_80031DBC(c); // 800D6370
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800D6374
  c->r[4]=c->r[3]|c->r[3]; // 800D6378
  c->r[3]=c->r[31]|c->r[31]; // 800D637C
  c->r[6]=c->r[1]+0x00000008u; // 800D6380
  W8(c->r[1]+0x00000009u,c->r[0]); // 800D6384
  c->r[7]=c->r[1]+0x00000009u; // 800D6388
  c->r[8]=c->r[1]+0x00000009u; // 800D638C
  c->r[5]=0u+0x00000000u; // 800D6390
  c->lr=0x800D6398u; f_8000C9D4(c); // 800D6394
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6398
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D639C
  c->lr=c->r[0]; // 800D63A0
  c->r[1]=c->r[1]+0x00000020u; // 800D63A4
  return; // 800D63A8
}

// fn_800D63AC
void f_800D63AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D63AC
  c->r[0]=c->lr; // 800D63B0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D63B4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800D63B8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800D63BC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800D63C0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800D63C4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 800D63C8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 800D63CC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 800D63D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 800D63D4
  c->r[11]=c->r[1]+0x00000040u; // 800D63D8
  c->lr=0x800D63E0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D63DC
  c->r[29]=c->r[3]|c->r[3]; // 800D63E0
  c->r[30]=c->r[5]|c->r[5]; // 800D63E4
  c->r[31]=c->r[6]|c->r[6]; // 800D63E8
  c->r[3]=c->r[1]+0x00000020u; // 800D63EC
  c->r[5]=c->r[29]|c->r[29]; // 800D63F0
  c->lr=0x800D63F8u; f_80091318(c); // 800D63F4
  c->r[4]=c->r[30]|c->r[30]; // 800D63F8
  c->r[5]=c->r[29]|c->r[29]; // 800D63FC
  c->r[3]=c->r[1]+0x00000014u; // 800D6400
  c->lr=0x800D6408u; f_80091318(c); // 800D6404
  c->r[4]=c->r[31]|c->r[31]; // 800D6408
  c->r[5]=c->r[29]|c->r[29]; // 800D640C
  c->r[3]=c->r[1]+0x00000008u; // 800D6410
  c->lr=0x800D6418u; f_80091318(c); // 800D6414
  c->r[3]=c->r[1]+0x00000020u; // 800D6418
  c->r[4]=c->r[3]|c->r[3]; // 800D641C
  c->lr=0x800D6424u; f_8003B41C(c); // 800D6420
  c->f[28]=c->f[1]; // 800D6424
  c->r[3]=c->r[1]+0x00000020u; // 800D6428
  c->r[4]=c->r[1]+0x00000014u; // 800D642C
  c->lr=0x800D6434u; f_8003B41C(c); // 800D6430
  c->f[29]=c->f[1]; // 800D6434
  c->r[3]=c->r[1]+0x00000014u; // 800D6438
  c->r[4]=c->r[3]|c->r[3]; // 800D643C
  c->lr=0x800D6444u; f_8003B41C(c); // 800D6440
  c->f[30]=c->f[1]; // 800D6444
  c->r[3]=c->r[1]+0x00000008u; // 800D6448
  c->r[4]=c->r[1]+0x00000020u; // 800D644C
  c->lr=0x800D6454u; f_8003B41C(c); // 800D6450
  c->f[31]=c->f[1]; // 800D6454
  c->r[3]=c->r[1]+0x00000008u; // 800D6458
  c->r[4]=c->r[1]+0x00000014u; // 800D645C
  c->lr=0x800D6464u; f_8003B41C(c); // 800D6460
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[30]); // 800D6464
  {uint32_t ea=c->r[2]+0xFFFF8B20u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D6468
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[31]); // 800D646C
  {uint32_t ea=c->r[2]+0xFFFF8B24u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6470
  c->f[4]=c->ps1[4]=S(std::fma(c->f[29],c->f[29],-c->f[4])); // 800D6474
  c->f[0]=c->ps1[0]=S(std::fma(c->f[29],c->f[1],-c->f[0])); // 800D6478
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 800D647C
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[0]); // 800D6480
  fcmp(c,0,c->f[5],c->f[2]); // 800D6484
  if (crb(c,0)) { goto L_800D6494; } // 800D6488
  fcmp(c,0,c->f[5],c->f[3]); // 800D648C
  if (!crb(c,1)) { goto L_800D649C; } // 800D6490
L_800D6494:;
  c->r[3]=0u+0x00000000u; // 800D6494
  goto L_800D64C8; // 800D6498
L_800D649C:;
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[1]); // 800D649C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[29],c->f[31],-c->f[0])); // 800D64A0
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800D64A4
  fcmp(c,0,c->f[0],c->f[2]); // 800D64A8
  if (crb(c,0)) { goto L_800D64BC; } // 800D64AC
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 800D64B0
  fcmp(c,0,c->f[0],c->f[3]); // 800D64B4
  if (!crb(c,1)) { goto L_800D64C4; } // 800D64B8
L_800D64BC:;
  c->r[3]=0u+0x00000000u; // 800D64BC
  goto L_800D64C8; // 800D64C0
L_800D64C4:;
  c->r[3]=0u+0x00000001u; // 800D64C4
L_800D64C8:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800D64C8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800D64CC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800D64D0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800D64D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 800D64D8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 800D64DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 800D64E0
  c->r[11]=c->r[1]+0x00000040u; // 800D64E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 800D64E8
  c->lr=0x800D64F0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D64EC
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D64F0
  c->lr=c->r[0]; // 800D64F4
  c->r[1]=c->r[1]+0x00000080u; // 800D64F8
  return; // 800D64FC
}

// fn_800D6500
void f_800D6500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6500
  c->r[0]=c->lr; // 800D6504
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6508
  c->r[11]=c->r[1]+0x00000040u; // 800D650C
  c->lr=0x800D6514u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6510
  c->r[28]=c->r[3]|c->r[3]; // 800D6514
  c->r[3]=c->r[4]|c->r[4]; // 800D6518
  c->r[29]=c->r[5]|c->r[5]; // 800D651C
  c->r[30]=c->r[6]|c->r[6]; // 800D6520
  c->r[31]=c->r[7]|c->r[7]; // 800D6524
  c->r[4]=c->r[28]|c->r[28]; // 800D6528
  c->lr=0x800D6530u; f_800D65D4(c); // 800D652C
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D6530
  W32(c->r[1]+0x00000024u,c->r[4]); // 800D6534
  c->r[4]=c->r[30]|c->r[30]; // 800D6538
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D653C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800D6540
  c->r[3]=c->r[29]|c->r[29]; // 800D6544
  c->lr=0x800D654Cu; f_800D65D4(c); // 800D6548
  W32(c->r[1]+0x00000018u,c->r[3]); // 800D654C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6550
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D6554
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800D6558
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[0]); // 800D655C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6560
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D6564
  {uint32_t ea=c->r[2]+0xFFFF8B28u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6568
  c->f[5]=c->ps1[5]=S(std::fma(c->f[3],c->f[1],-c->f[2])); // 800D656C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D6570
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D6574
  fcmp(c,0,c->f[5],c->f[0]); // 800D6578
  if (!crb(c,2)) { goto L_800D6588; } // 800D657C
  c->r[3]=0u+0x00000000u; // 800D6580
  goto L_800D65BC; // 800D6584
L_800D6588:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D6588
  if (crb(c,2)) { goto L_800D65B8; } // 800D658C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6590
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6594
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6598
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D659C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D65A0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D65A4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800D65A8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[1],-c->f[0])); // 800D65AC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[5]); // 800D65B0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800D65B4
L_800D65B8:;
  c->r[3]=0u+0x00000001u; // 800D65B8
L_800D65BC:;
  c->r[11]=c->r[1]+0x00000040u; // 800D65BC
  c->lr=0x800D65C4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D65C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D65C4
  c->lr=c->r[0]; // 800D65C8
  c->r[1]=c->r[1]+0x00000040u; // 800D65CC
  return; // 800D65D0
}

// fn_800D65D4
void f_800D65D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D65D4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D65D8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D65DC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D65E0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800D65E4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D65E8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800D65EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 800D65F0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800D65F4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D65F8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D65FC
  c->r[1]=c->r[1]+0x00000010u; // 800D6600
  return; // 800D6604
}

// fn_800D6608
void f_800D6608(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6608
  c->r[0]=c->lr; // 800D660C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D6610
  c->r[11]=c->r[1]+0x00000050u; // 800D6614
  c->lr=0x800D661Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6618
  c->r[29]=c->r[4]|c->r[4]; // 800D661C
  c->r[30]=c->r[5]|c->r[5]; // 800D6620
  c->r[4]=c->r[3]|c->r[3]; // 800D6624
  c->r[31]=c->r[6]|c->r[6]; // 800D6628
  c->r[5]=c->r[29]|c->r[29]; // 800D662C
  c->r[3]=c->r[1]+0x0000002Cu; // 800D6630
  c->lr=0x800D6638u; f_8003C5A8(c); // 800D6634
  c->r[4]=c->r[30]|c->r[30]; // 800D6638
  c->r[5]=c->r[29]|c->r[29]; // 800D663C
  c->r[3]=c->r[1]+0x00000020u; // 800D6640
  c->lr=0x800D6648u; f_8003C5A8(c); // 800D6644
  c->r[3]=c->r[1]+0x00000020u; // 800D6648
  c->lr=0x800D6650u; f_800D671C(c); // 800D664C
  {uint32_t ea=c->r[1]+0x00000030u; psq_load(c,0,ea,0,0);} // 800D6650
  cmps(c,0,(int32_t)c->r[31],0); // 800D6654
  {uint32_t ea=c->r[1]+0x00000024u; psq_load(c,2,ea,0,0);} // 800D6658
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,3,ea,1,0);} // 800D665C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6660
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,1,0);} // 800D6664
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,4,ea,0,0);} // 800D6668
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[2]=t0; c->ps1[2]=t1;} // 800D666C
  {double t0=S(c->f[2]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6670
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 800D6674
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6678
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,4,ea,1,0);} // 800D667C
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,0,ea,0,0);} // 800D6680
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6684
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,0,ea,1,0);} // 800D6688
  if (crb(c,2)) { goto L_800D66C4; } // 800D668C
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,1,ea,0,0);} // 800D6690
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,2,ea,0,0);} // 800D6694
  {double t0=S(c->f[1]+c->f[2]), t1=S(c->ps1[1]+c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 800D6698
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,1,ea,1,0);} // 800D669C
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,3,ea,0,0);} // 800D66A0
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 800D66A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D66A8
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,3,ea,1,0);} // 800D66AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D66B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D66B4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 800D66B8
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 800D66BC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 800D66C0
L_800D66C4:;
  c->r[3]=c->r[1]+0x0000002Cu; // 800D66C4
  c->r[5]=c->r[1]+0x00000014u; // 800D66C8
  c->r[4]=c->r[3]|c->r[3]; // 800D66CC
  c->lr=0x800D66D4u; f_8003C5A8(c); // 800D66D0
  c->r[3]=c->r[1]+0x0000002Cu; // 800D66D4
  c->lr=0x800D66DCu; f_800D671C(c); // 800D66D8
  c->r[11]=c->r[1]+0x00000050u; // 800D66DC
  c->lr=0x800D66E4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D66E0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D66E4
  c->lr=c->r[0]; // 800D66E8
  c->r[1]=c->r[1]+0x00000050u; // 800D66EC
  return; // 800D66F0
}

// fn_800D66F4
void f_800D66F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D66F4
  c->r[0]=c->lr; // 800D66F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D66FC
  c->lr=0x800D6704u; f_800D6608(c); // 800D6700
  c->lr=0x800D6708u; f_8011AE8C(c); // 800D6704
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6708
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800D670C
  c->lr=c->r[0]; // 800D6710
  c->r[1]=c->r[1]+0x00000010u; // 800D6714
  return; // 800D6718
}

// fn_800D671C
void f_800D671C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D671C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6720
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 800D6724
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6728
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[1],c->f[2])); // 800D672C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 800D6730
  return; // 800D6734
}

// fn_800D6738
void f_800D6738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6738
  c->r[0]=c->lr; // 800D673C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6740
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800D6744
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800D6748
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800D674C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800D6750
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 800D6754
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 800D6758
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D675C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 800D6760
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 800D6764
  {uint32_t ea=c->r[3]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 800D6768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D676C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 800D6770
  {uint32_t ea=c->r[4]+0x00000000u; c->f[13]=c->ps1[13]=RF32(ea);} // 800D6774
  c->f[6]=c->ps1[6]=S(c->f[11]-c->f[2]); // 800D6778
  c->f[0]=c->ps1[0]=S(std::fma(c->f[7],c->f[7],c->f[0])); // 800D677C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 800D6780
  c->f[4]=c->ps1[4]=S(std::fma(c->f[7],c->f[13],c->f[1])); // 800D6784
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D6788
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D678C
  c->f[7]=c->ps1[7]=S(c->f[13]-c->f[7]); // 800D6790
  c->f[10]=c->ps1[10]=S(c->f[3]-c->f[11]); // 800D6794
  {uint32_t ea=c->r[4]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D6798
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[8],c->f[0])); // 800D679C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 800D67A0
  c->f[12]=c->ps1[12]=S(c->f[2]-c->f[13]); // 800D67A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D67A8
  c->f[3]=c->ps1[3]=S(std::fma(c->f[13],c->f[13],c->f[0])); // 800D67AC
  {uint32_t ea=c->r[2]+0xFFFF8B30u; c->f[5]=c->ps1[5]=RF32(ea);} // 800D67B0
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[10]); // 800D67B4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D67B8
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 800D67BC
  {uint32_t ea=c->r[2]+0xFFFF8B34u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D67C0
  c->f[3]=c->ps1[3]=S(std::fma(c->f[11],c->f[11],c->f[3])); // 800D67C4
  {uint32_t ea=c->r[2]+0xFFFF8B38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D67C8
  c->f[4]=c->ps1[4]=S(std::fma(c->f[8],c->f[30],c->f[4])); // 800D67CC
  c->r[30]=c->r[7]|c->r[7]; // 800D67D0
  c->f[29]=c->ps1[29]=S(c->f[29]-c->f[30]); // 800D67D4
  c->r[31]=c->r[8]|c->r[8]; // 800D67D8
  c->f[9]=c->ps1[9]=S(std::fma(c->f[12],c->f[12],c->f[9])); // 800D67DC
  c->f[3]=c->ps1[3]=S(std::fma(c->f[30],c->f[30],c->f[3])); // 800D67E0
  c->f[8]=c->ps1[8]=S(c->f[30]-c->f[8]); // 800D67E4
  c->f[31]=c->ps1[31]=S(std::fma(c->f[29],c->f[29],c->f[9])); // 800D67E8
  c->f[6]=c->ps1[6]=S(std::fma(c->f[12],c->f[7],c->f[6])); // 800D67EC
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[5],c->f[4],-c->f[3])); // 800D67F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 800D67F4
  c->f[4]=c->ps1[4]=S(std::fma(c->f[29],c->f[8],c->f[6])); // 800D67F8
  c->f[29]=c->ps1[29]=S(-std::fma(c->f[2],c->f[2],-c->f[3])); // 800D67FC
  c->f[30]=c->ps1[30]=S(c->f[5]*c->f[4]); // 800D6800
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 800D6804
  c->f[1]=c->ps1[1]=S(std::fma(c->f[30],c->f[30],-c->f[1])); // 800D6808
  fcmp(c,0,c->f[1],c->f[0]); // 800D680C
  if (!crb(c,0)) { goto L_800D681C; } // 800D6810
  c->r[3]=0u+0x00000000u; // 800D6814
  goto L_800D68D8; // 800D6818
L_800D681C:;
  fcmp(c,0,c->f[0],c->f[1]); // 800D681C
  if (!crb(c,2)) { goto L_800D6854; } // 800D6820
  cmps(c,0,(int32_t)c->r[6],0); // 800D6824
  if (crb(c,2)) { goto L_800D6834; } // 800D6828
  c->r[0]=0u+0x00000001u; // 800D682C
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D6830
L_800D6834:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D6834
  if (crb(c,2)) { goto L_800D68D4; } // 800D6838
  {uint32_t ea=c->r[2]+0xFFFF8B30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D683C
  c->f[1]=-c->f[30]; // 800D6840
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800D6844
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D6848
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 800D684C
  goto L_800D68D4; // 800D6850
L_800D6854:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D6854
  if (crb(c,2)) { goto L_800D6864; } // 800D6858
  c->r[0]=0u+0x00000002u; // 800D685C
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D6860
L_800D6864:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D6864
  if (crb(c,2)) { goto L_800D689C; } // 800D6868
  {uint32_t ea=c->r[2]+0xFFFF8B34u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D686C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800D6870
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 800D6874
  c->f[1]=c->ps1[1]=S(std::fma(c->f[30],c->f[30],-c->f[0])); // 800D6878
  c->lr=0x800D6880u; f_8011AE8C(c); // 800D687C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800D6880
  {uint32_t ea=c->r[2]+0xFFFF8B30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6884
  c->f[1]=-c->f[30]; // 800D6888
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800D688C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800D6890
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D6894
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 800D6898
L_800D689C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D689C
  if (crb(c,2)) { goto L_800D68D4; } // 800D68A0
  {uint32_t ea=c->r[2]+0xFFFF8B34u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D68A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800D68A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 800D68AC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[30],c->f[30],-c->f[0])); // 800D68B0
  c->lr=0x800D68B8u; f_8011AE8C(c); // 800D68B4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800D68B8
  {uint32_t ea=c->r[2]+0xFFFF8B30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D68BC
  c->f[1]=-c->f[30]; // 800D68C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800D68C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800D68C8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800D68CC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800D68D0
L_800D68D4:;
  c->r[3]=0u+0x00000001u; // 800D68D4
L_800D68D8:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800D68D8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800D68DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800D68E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800D68E4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 800D68E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 800D68EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D68F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D68F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D68F8
  c->lr=c->r[0]; // 800D68FC
  c->r[1]=c->r[1]+0x00000040u; // 800D6900
  return; // 800D6904
}

// fn_800D6908
void f_800D6908(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6908
  c->r[0]=c->lr; // 800D690C
  W32(c->r[1]+0x00000084u,c->r[0]); // 800D6910
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800D6914
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800D6918
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800D691C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800D6920
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 800D6924
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 800D6928
  c->r[11]=c->r[1]+0x00000050u; // 800D692C
  c->lr=0x800D6934u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6930
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 800D6934
  c->r[31]=c->r[1]+0x00000020u; // 800D6938
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 800D693C
  c->r[28]=c->r[5]|c->r[5]; // 800D6940
  c->r[26]=c->r[3]|c->r[3]; // 800D6944
  c->r[27]=c->r[4]|c->r[4]; // 800D6948
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800D694C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 800D6950
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 800D6954
  c->r[29]=c->r[6]|c->r[6]; // 800D6958
  c->r[30]=c->r[7]|c->r[7]; // 800D695C
  c->r[3]=c->r[31]|c->r[31]; // 800D6960
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,2,ea,0,0);} // 800D6964
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800D6968
  c->r[4]=c->r[28]|c->r[28]; // 800D696C
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,2,ea,1,0);} // 800D6970
  c->lr=0x800D6978u; f_8003B41C(c); // 800D6974
  c->f[30]=c->f[1]; // 800D6978
  c->r[3]=c->r[31]|c->r[31]; // 800D697C
  c->r[4]=c->r[31]|c->r[31]; // 800D6980
  c->lr=0x800D6988u; f_8003B41C(c); // 800D6984
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6988
  c->f[31]=c->f[1]; // 800D698C
  {uint32_t ea=c->r[2]+0xFFFF8B38u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6990
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[2]); // 800D6994
  fcmp(c,0,c->f[0],c->f[30]); // 800D6998
  if (!crb(c,1)) { goto L_800D69B0; } // 800D699C
  fcmp(c,0,c->f[1],c->f[29]); // 800D69A0
  if (!crb(c,1)) { goto L_800D69B0; } // 800D69A4
  c->r[3]=0u+0x00000000u; // 800D69A8
  goto L_800D6A3C; // 800D69AC
L_800D69B0:;
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[30],-c->f[1])); // 800D69B0
  fcmp(c,0,c->f[0],c->f[29]); // 800D69B4
  if (!crb(c,1)) { goto L_800D69C4; } // 800D69B8
  c->r[3]=0u+0x00000000u; // 800D69BC
  goto L_800D6A3C; // 800D69C0
L_800D69C4:;
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[0]); // 800D69C4
  c->lr=0x800D69CCu; f_8011AE8C(c); // 800D69C8
  fcmp(c,0,c->f[31],c->f[29]); // 800D69CC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D69D0
  if (!crb(c,1)) { goto L_800D69E4; } // 800D69D4
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 800D69D8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800D69DC
  goto L_800D69EC; // 800D69E0
L_800D69E4:;
  c->r[3]=0u+0x00000000u; // 800D69E4
  goto L_800D6A3C; // 800D69E8
L_800D69EC:;
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,1,ea,0,0);} // 800D69EC
  c->r[3]=0u+0x00000001u; // 800D69F0
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,3,ea,0,0);} // 800D69F4
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 800D69F8
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,1,ea,1,0);} // 800D69FC
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,2,ea,0,0);} // 800D6A00
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 800D6A04
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,0,0);} // 800D6A08
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,2,ea,1,0);} // 800D6A0C
  {double t0=S(c->f[3]+c->f[0]), t1=S(c->ps1[3]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6A10
  {uint32_t ea=c->r[27]+0x00000008u; psq_load(c,3,ea,1,0);} // 800D6A14
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,0,ea,0,0);} // 800D6A18
  {double t0=S(c->f[3]+c->f[2]), t1=S(c->ps1[3]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 800D6A1C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6A20
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,0,ea,1,0);} // 800D6A24
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6A28
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6A2C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 800D6A30
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 800D6A34
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 800D6A38
L_800D6A3C:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800D6A3C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800D6A40
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 800D6A44
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 800D6A48
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 800D6A4C
  c->r[11]=c->r[1]+0x00000050u; // 800D6A50
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 800D6A54
  c->lr=0x800D6A5Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6A58
  c->r[0]=R32(c->r[1]+0x00000084u); // 800D6A5C
  c->lr=c->r[0]; // 800D6A60
  c->r[1]=c->r[1]+0x00000080u; // 800D6A64
  return; // 800D6A68
}

// fn_800D6A6C
void f_800D6A6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6A6C
  c->r[0]=c->lr; // 800D6A70
  W32(c->r[1]+0x00000204u,c->r[0]); // 800D6A74
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 800D6A78
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 800D6A7C
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 800D6A80
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 800D6A84
  c->r[11]=c->r[1]+0x000001E0u; // 800D6A88
  c->lr=0x800D6A90u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6A8C
  c->r[10]=R32(c->r[6]+0x00000000u); // 800D6A90
  c->r[26]=c->r[3]|c->r[3]; // 800D6A94
  c->r[9]=R32(c->r[6]+0x00000004u); // 800D6A98
  c->r[3]=c->r[1]+0x000001A0u; // 800D6A9C
  c->r[0]=R32(c->r[6]+0x00000008u); // 800D6AA0
  c->r[22]=c->r[4]|c->r[4]; // 800D6AA4
  W32(c->r[1]+0x000001A0u,c->r[10]); // 800D6AA8
  c->r[27]=c->r[5]|c->r[5]; // 800D6AAC
  c->r[28]=c->r[7]|c->r[7]; // 800D6AB0
  c->r[29]=c->r[8]|c->r[8]; // 800D6AB4
  W32(c->r[1]+0x000001A4u,c->r[9]); // 800D6AB8
  c->r[4]=c->r[3]|c->r[3]; // 800D6ABC
  W32(c->r[1]+0x000001A8u,c->r[0]); // 800D6AC0
  c->lr=0x800D6AC8u; f_800ECFD0(c); // 800D6AC4
  c->r[3]=c->r[22]|c->r[22]; // 800D6AC8
  c->r[4]=c->r[1]+0x000001A0u; // 800D6ACC
  c->lr=0x800D6AD4u; f_8003B41C(c); // 800D6AD0
  {uint32_t ea=c->r[2]+0xFFFF8B40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6AD4
  fcmp(c,0,c->f[1],c->f[0]); // 800D6AD8
  if (!crb(c,1)) { goto L_800D6AE8; } // 800D6ADC
  c->r[3]=0u+0x00000000u; // 800D6AE0
  goto L_800D7028; // 800D6AE4
L_800D6AE8:;
  {uint32_t ea=c->r[2]+0xFFFF8B44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6AE8
  c->r[5]=c->r[22]|c->r[22]; // 800D6AEC
  c->r[3]=c->r[1]+0x00000190u; // 800D6AF0
  c->r[30]=0u+0xFFFFFFFFu; // 800D6AF4
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 800D6AF8
  c->r[4]=R32(c->r[26]+0x00000000u); // 800D6AFC
  c->lr=0x800D6B04u; f_800D716C(c); // 800D6B00
  c->r[4]=c->r[27]|c->r[27]; // 800D6B04
  c->r[3]=c->r[1]+0x00000190u; // 800D6B08
  c->lr=0x800D6B10u; f_800D7050(c); // 800D6B0C
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6B10
  c->f[0]=-c->f[2]; // 800D6B14
  fcmp(c,0,c->f[1],c->f[0]); // 800D6B18
  if (!crb(c,0)) { goto L_800D6B28; } // 800D6B1C
  c->r[3]=0u+0x00000000u; // 800D6B20
  goto L_800D7028; // 800D6B24
L_800D6B28:;
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[2]); // 800D6B28
  c->r[3]=c->r[22]|c->r[22]; // 800D6B2C
  c->r[4]=c->r[1]+0x000001A0u; // 800D6B30
  c->lr=0x800D6B38u; f_8003B41C(c); // 800D6B34
  {uint32_t ea=c->r[2]+0xFFFF8B48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6B38
  fcmp(c,0,c->f[0],c->f[1]); // 800D6B3C
  if (crb(c,2)) { goto L_800D6BB0; } // 800D6B40
  c->f[0]=-c->f[30]; // 800D6B44
  c->r[3]=c->r[1]+0x000000C0u; // 800D6B48
  c->r[4]=c->r[1]+0x000001A0u; // 800D6B4C
  c->f[30]=c->ps1[30]=S(c->f[0]/c->f[1]); // 800D6B50
  c->f[1]=c->f[30]; // 800D6B54
  c->lr=0x800D6B5Cu; f_800D7080(c); // 800D6B58
  c->r[4]=c->r[27]|c->r[27]; // 800D6B5C
  c->r[3]=c->r[1]+0x00000184u; // 800D6B60
  c->r[5]=c->r[1]+0x000000C0u; // 800D6B64
  c->lr=0x800D6B6Cu; f_8009EB48(c); // 800D6B68
  c->r[3]=R32(c->r[26]+0x00000000u); // 800D6B6C
  c->r[6]=c->r[1]+0x00000184u; // 800D6B70
  c->r[4]=R32(c->r[26]+0x00000004u); // 800D6B74
  c->r[5]=R32(c->r[26]+0x00000008u); // 800D6B78
  c->lr=0x800D6B80u; f_800D63AC(c); // 800D6B7C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6B80
  if (crb(c,2)) { goto L_800D6BB0; } // 800D6B84
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6B88
  fcmp(c,0,c->f[30],c->f[0]); // 800D6B8C
  if (!crb(c,0)) { goto L_800D6BB0; } // 800D6B90
  cmps(c,0,(int32_t)c->r[29],0); // 800D6B94
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[30]);} // 800D6B98
  if (crb(c,2)) { goto L_800D6BAC; } // 800D6B9C
  c->r[3]=c->r[29]|c->r[29]; // 800D6BA0
  c->r[4]=c->r[22]|c->r[22]; // 800D6BA4
  c->lr=0x800D6BACu; f_8003C5CC(c); // 800D6BA8
L_800D6BAC:;
  c->r[30]=0u+0x00000000u; // 800D6BAC
L_800D6BB0:;
  {uint32_t ea=c->r[2]+0xFFFF8B44u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D6BB0
  c->r[22]=0u+0x00000000u; // 800D6BB4
  {uint32_t ea=c->r[2]+0xFFFF8B48u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D6BB8
  c->r[25]=0u+0x00000000u; // 800D6BBC
L_800D6BC0:;
  c->r[7]=R32(c->r[26]+c->r[25]); // 800D6BC0
  c->r[3]=c->r[1]+0x0000016Cu; // 800D6BC4
  c->r[4]=c->r[1]+0x00000178u; // 800D6BC8
  c->r[5]=c->r[1]+0x000001A0u; // 800D6BCC
  c->r[6]=R32(c->r[7]+0x00000000u); // 800D6BD0
  c->r[0]=R32(c->r[7]+0x00000004u); // 800D6BD4
  W32(c->r[1]+0x00000178u,c->r[6]); // 800D6BD8
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 800D6BDC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D6BE0
  W32(c->r[1]+0x00000180u,c->r[0]); // 800D6BE4
  c->lr=0x800D6BECu; f_80091318(c); // 800D6BE8
  c->r[3]=c->r[1]+0x00000160u; // 800D6BEC
  c->r[4]=c->r[1]+0x0000016Cu; // 800D6BF0
  c->r[5]=c->r[1]+0x00000178u; // 800D6BF4
  c->lr=0x800D6BFCu; f_80091318(c); // 800D6BF8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[30]);} // 800D6BFC
  c->r[3]=c->r[27]|c->r[27]; // 800D6C00
  c->r[4]=c->r[1]+0x00000178u; // 800D6C04
  c->r[5]=c->r[1]+0x0000016Cu; // 800D6C08
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[30]);} // 800D6C0C
  c->r[6]=c->r[1]+0x0000000Cu; // 800D6C10
  c->r[7]=c->r[1]+0x00000014u; // 800D6C14
  c->r[8]=c->r[1]+0x00000010u; // 800D6C18
  c->lr=0x800D6C20u; f_800D6738(c); // 800D6C1C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6C20
  if (crb(c,2)) { goto L_800D6C98; } // 800D6C24
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6C28
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C2C
  fcmp(c,0,c->f[0],c->f[1]); // 800D6C30
  if (!crb(c,0)) { goto L_800D6C3C; } // 800D6C34
  c->f[1]=c->f[0]; // 800D6C38
L_800D6C3C:;
  fcmp(c,0,c->f[1],c->f[31]); // 800D6C3C
  if (crb(c,0)) { goto L_800D6C98; } // 800D6C40
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6C44
  fcmp(c,0,c->f[1],c->f[0]); // 800D6C48
  if (!crb(c,0)) { goto L_800D6C98; } // 800D6C4C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 800D6C50
  c->r[3]=c->r[1]+0x000000B4u; // 800D6C54
  c->r[4]=c->r[1]+0x00000160u; // 800D6C58
  c->lr=0x800D6C60u; f_800D7080(c); // 800D6C5C
  c->r[3]=c->r[1]+0x00000154u; // 800D6C60
  c->r[4]=c->r[1]+0x00000178u; // 800D6C64
  c->r[5]=c->r[1]+0x000000B4u; // 800D6C68
  c->lr=0x800D6C70u; f_8009EB48(c); // 800D6C6C
  cmps(c,0,(int32_t)c->r[29],0); // 800D6C70
  if (crb(c,2)) { goto L_800D6C94; } // 800D6C74
  c->r[4]=c->r[27]|c->r[27]; // 800D6C78
  c->r[3]=c->r[1]+0x000000A8u; // 800D6C7C
  c->r[5]=c->r[1]+0x00000154u; // 800D6C80
  c->lr=0x800D6C88u; f_80091318(c); // 800D6C84
  c->r[3]=c->r[29]|c->r[29]; // 800D6C88
  c->r[4]=c->r[1]+0x000000A8u; // 800D6C8C
  c->lr=0x800D6C94u; f_8003C5CC(c); // 800D6C90
L_800D6C94:;
  c->r[30]=0u+0x00000001u; // 800D6C94
L_800D6C98:;
  c->r[22]=c->r[22]+0x00000001u; // 800D6C98
  c->r[25]=c->r[25]+0x00000004u; // 800D6C9C
  cmps(c,0,(int32_t)c->r[22],3); // 800D6CA0
  if (crb(c,0)) { IRQCHK(c); goto L_800D6BC0; } // 800D6CA4
  {uint32_t ea=c->r[2]+0xFFFF8B48u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D6CA8
  c->r[31]=0u+0x00000000u; // 800D6CAC
  c->r[25]=0u+0x00000000u; // 800D6CB0
L_800D6CB4:;
  c->r[4]=R32(c->r[26]+c->r[25]); // 800D6CB4
  c->r[5]=c->r[31]+0x00000001u; // 800D6CB8
  cmps(c,0,(int32_t)c->r[5],3); // 800D6CBC
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D6CC0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D6CC4
  W32(c->r[1]+0x00000148u,c->r[3]); // 800D6CC8
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 800D6CCC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D6CD0
  W32(c->r[1]+0x00000150u,c->r[0]); // 800D6CD4
  if (!crb(c,2)) { goto L_800D6CE0; } // 800D6CD8
  c->r[5]=0u+0x00000000u; // 800D6CDC
L_800D6CE0:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D6CE0
  c->r[3]=c->r[1]+0x0000009Cu; // 800D6CE4
  c->r[7]=R32(c->r[26]+c->r[0]); // 800D6CE8
  c->r[4]=c->r[1]+0x0000013Cu; // 800D6CEC
  c->r[5]=c->r[1]+0x000001A0u; // 800D6CF0
  c->r[6]=R32(c->r[7]+0x00000000u); // 800D6CF4
  c->r[0]=R32(c->r[7]+0x00000004u); // 800D6CF8
  W32(c->r[1]+0x0000013Cu,c->r[6]); // 800D6CFC
  W32(c->r[1]+0x00000140u,c->r[0]); // 800D6D00
  c->r[0]=R32(c->r[7]+0x00000008u); // 800D6D04
  W32(c->r[1]+0x00000144u,c->r[0]); // 800D6D08
  c->lr=0x800D6D10u; f_80091318(c); // 800D6D0C
  c->r[3]=c->r[1]+0x0000012Cu; // 800D6D10
  c->r[4]=c->r[1]+0x00000148u; // 800D6D14
  c->r[5]=c->r[1]+0x0000013Cu; // 800D6D18
  c->r[6]=c->r[1]+0x0000009Cu; // 800D6D1C
  c->lr=0x800D6D24u; f_800D709C(c); // 800D6D20
  c->r[4]=c->r[27]|c->r[27]; // 800D6D24
  c->r[3]=c->r[1]+0x0000012Cu; // 800D6D28
  c->lr=0x800D6D30u; f_800D7050(c); // 800D6D2C
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6D30
  fcmp(c,0,c->f[1],c->f[2]); // 800D6D34
  if (crb(c,1)) { goto L_800D6FF0; } // 800D6D38
  c->f[0]=-c->f[2]; // 800D6D3C
  fcmp(c,0,c->f[1],c->f[0]); // 800D6D40
  if (crb(c,0)) { goto L_800D6FF0; } // 800D6D44
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 800D6D48
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[1],-c->f[0])); // 800D6D4C
  c->lr=0x800D6D54u; f_8011AE8C(c); // 800D6D50
  c->f[30]=c->ps1[30]=S(c->f[1]); // 800D6D54
  c->r[4]=c->r[27]|c->r[27]; // 800D6D58
  c->r[3]=c->r[1]+0x0000012Cu; // 800D6D5C
  c->lr=0x800D6D64u; f_800D7050(c); // 800D6D60
  {uint32_t ea=c->r[1]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6D64
  c->r[3]=c->r[1]+0x00000120u; // 800D6D68
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6D6C
  c->r[4]=c->r[1]+0x00000148u; // 800D6D70
  {uint32_t ea=c->r[1]+0x00000130u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D6D74
  c->r[5]=c->r[1]+0x0000013Cu; // 800D6D78
  c->f[5]=c->ps1[5]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 800D6D7C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D6D80
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6D84
  c->r[6]=c->r[1]+0x00000114u; // 800D6D88
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6D8C
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[4],c->f[1],-c->f[3])); // 800D6D90
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 800D6D94
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[5]);} // 800D6D98
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[3]);} // 800D6D9C
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[0]);} // 800D6DA0
  c->lr=0x800D6DA8u; f_800D66F4(c); // 800D6DA4
  c->r[3]=c->r[1]+0x00000108u; // 800D6DA8
  c->r[4]=c->r[1]+0x00000114u; // 800D6DAC
  c->r[5]=c->r[1]+0x00000120u; // 800D6DB0
  c->lr=0x800D6DB8u; f_80091318(c); // 800D6DB4
  c->r[3]=c->r[1]+0x00000108u; // 800D6DB8
  c->r[4]=c->r[3]|c->r[3]; // 800D6DBC
  c->lr=0x800D6DC4u; f_800ECFD0(c); // 800D6DC0
  c->f[1]=c->f[30]; // 800D6DC4
  c->r[3]=c->r[1]+0x00000090u; // 800D6DC8
  c->r[4]=c->r[1]+0x00000108u; // 800D6DCC
  c->lr=0x800D6DD4u; f_800D7080(c); // 800D6DD0
  c->r[3]=c->r[1]+0x000000FCu; // 800D6DD4
  c->r[4]=c->r[1]+0x00000090u; // 800D6DD8
  c->r[5]=c->r[1]+0x00000120u; // 800D6DDC
  c->lr=0x800D6DE4u; f_8009EB48(c); // 800D6DE0
  c->r[3]=c->r[1]+0x000000F0u; // 800D6DE4
  c->r[4]=c->r[1]+0x000000FCu; // 800D6DE8
  c->r[5]=c->r[1]+0x000001A0u; // 800D6DEC
  c->lr=0x800D6DF4u; f_8009EB48(c); // 800D6DF0
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6DF4
  {uint32_t ea=c->r[1]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6DF8
  c->f[2]=std::fabs(c->f[0]); // 800D6DFC
  {uint32_t ea=c->r[1]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6E00
  c->f[1]=std::fabs(c->f[1]); // 800D6E04
  c->f[3]=std::fabs(c->f[0]); // 800D6E08
  c->f[0]=c->ps1[0]=S(c->f[2]); // 800D6E0C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800D6E10
  c->f[2]=c->ps1[2]=S(c->f[3]); // 800D6E14
  fcmp(c,0,c->f[0],c->f[1]); // 800D6E18
  if (!crb(c,1)) { goto L_800D6E8C; } // 800D6E1C
  fcmp(c,0,c->f[0],c->f[2]); // 800D6E20
  if (!crb(c,1)) { goto L_800D6E8C; } // 800D6E24
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6E28
  c->r[3]=c->r[1]+0x00000058u; // 800D6E2C
  {uint32_t ea=c->r[1]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6E30
  c->lr=0x800D6E38u; f_800C4A00(c); // 800D6E34
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6E38
  c->r[22]=c->r[3]|c->r[3]; // 800D6E3C
  {uint32_t ea=c->r[1]+0x00000150u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6E40
  c->r[3]=c->r[1]+0x00000060u; // 800D6E44
  c->lr=0x800D6E4Cu; f_800C4A00(c); // 800D6E48
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6E4C
  c->r[24]=c->r[3]|c->r[3]; // 800D6E50
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6E54
  c->r[3]=c->r[1]+0x00000068u; // 800D6E58
  c->lr=0x800D6E60u; f_800C4A00(c); // 800D6E5C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6E60
  c->r[23]=c->r[3]|c->r[3]; // 800D6E64
  {uint32_t ea=c->r[1]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6E68
  c->r[3]=c->r[1]+0x00000070u; // 800D6E6C
  c->lr=0x800D6E74u; f_800C4A00(c); // 800D6E70
  c->r[4]=c->r[23]|c->r[23]; // 800D6E74
  c->r[5]=c->r[24]|c->r[24]; // 800D6E78
  c->r[6]=c->r[22]|c->r[22]; // 800D6E7C
  c->r[7]=c->r[1]+0x00000008u; // 800D6E80
  c->lr=0x800D6E88u; f_800D6500(c); // 800D6E84
  goto L_800D6F50; // 800D6E88
L_800D6E8C:;
  fcmp(c,0,c->f[1],c->f[2]); // 800D6E8C
  if (!crb(c,1)) { goto L_800D6EF4; } // 800D6E90
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6E94
  c->r[3]=c->r[1]+0x00000038u; // 800D6E98
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6E9C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 800D6EA0
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6EA4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800D6EA8
  {uint32_t ea=c->r[1]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6EAC
  c->lr=0x800D6EB4u; f_800C4A00(c); // 800D6EB0
  {uint32_t ea=c->r[1]+0x00000148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6EB4
  c->r[24]=c->r[3]|c->r[3]; // 800D6EB8
  {uint32_t ea=c->r[1]+0x00000150u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6EBC
  c->r[3]=c->r[1]+0x00000040u; // 800D6EC0
  c->lr=0x800D6EC8u; f_800C4A00(c); // 800D6EC4
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6EC8
  c->r[23]=c->r[3]|c->r[3]; // 800D6ECC
  {uint32_t ea=c->r[1]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6ED0
  c->r[3]=c->r[1]+0x00000050u; // 800D6ED4
  c->lr=0x800D6EDCu; f_800C4A00(c); // 800D6ED8
  c->r[5]=c->r[23]|c->r[23]; // 800D6EDC
  c->r[6]=c->r[24]|c->r[24]; // 800D6EE0
  c->r[4]=c->r[1]+0x00000048u; // 800D6EE4
  c->r[7]=c->r[1]+0x00000008u; // 800D6EE8
  c->lr=0x800D6EF0u; f_800D6500(c); // 800D6EEC
  goto L_800D6F50; // 800D6EF0
L_800D6EF4:;
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6EF4
  c->r[3]=c->r[1]+0x00000018u; // 800D6EF8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6EFC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800D6F00
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6F04
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800D6F08
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6F0C
  c->lr=0x800D6F14u; f_800C4A00(c); // 800D6F10
  {uint32_t ea=c->r[1]+0x00000148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6F14
  c->r[23]=c->r[3]|c->r[3]; // 800D6F18
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6F1C
  c->r[3]=c->r[1]+0x00000020u; // 800D6F20
  c->lr=0x800D6F28u; f_800C4A00(c); // 800D6F24
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6F28
  c->r[24]=c->r[3]|c->r[3]; // 800D6F2C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D6F30
  c->r[3]=c->r[1]+0x00000030u; // 800D6F34
  c->lr=0x800D6F3Cu; f_800C4A00(c); // 800D6F38
  c->r[5]=c->r[24]|c->r[24]; // 800D6F3C
  c->r[6]=c->r[23]|c->r[23]; // 800D6F40
  c->r[4]=c->r[1]+0x00000028u; // 800D6F44
  c->r[7]=c->r[1]+0x00000008u; // 800D6F48
  c->lr=0x800D6F50u; f_800D6500(c); // 800D6F4C
L_800D6F50:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D6F50
  if (crb(c,2)) { goto L_800D6FF0; } // 800D6F54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6F58
  fcmp(c,0,c->f[1],c->f[31]); // 800D6F5C
  if (crb(c,0)) { goto L_800D6FF0; } // 800D6F60
  c->r[3]=c->r[1]+0x00000084u; // 800D6F64
  c->r[4]=c->r[1]+0x000001A0u; // 800D6F68
  c->lr=0x800D6F70u; f_800D7080(c); // 800D6F6C
  c->r[3]=c->r[1]+0x000000E4u; // 800D6F70
  c->r[4]=c->r[1]+0x000000FCu; // 800D6F74
  c->r[5]=c->r[1]+0x00000084u; // 800D6F78
  c->lr=0x800D6F80u; f_8009EB48(c); // 800D6F7C
  c->r[3]=c->r[1]+0x000000D8u; // 800D6F80
  c->r[4]=c->r[1]+0x00000148u; // 800D6F84
  c->r[5]=c->r[1]+0x000000E4u; // 800D6F88
  c->lr=0x800D6F90u; f_80091318(c); // 800D6F8C
  c->r[3]=c->r[1]+0x000000CCu; // 800D6F90
  c->r[4]=c->r[1]+0x0000013Cu; // 800D6F94
  c->r[5]=c->r[1]+0x000000E4u; // 800D6F98
  c->lr=0x800D6FA0u; f_80091318(c); // 800D6F9C
  c->r[3]=c->r[1]+0x000000D8u; // 800D6FA0
  c->r[4]=c->r[1]+0x000000CCu; // 800D6FA4
  c->lr=0x800D6FACu; f_8003B41C(c); // 800D6FA8
  fcmp(c,0,c->f[1],c->f[31]); // 800D6FAC
  if (crb(c,1)) { goto L_800D6FF0; } // 800D6FB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D6FB4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6FB8
  fcmp(c,0,c->f[1],c->f[0]); // 800D6FBC
  if (crb(c,1)) { goto L_800D6FF0; } // 800D6FC0
  cmps(c,0,(int32_t)c->r[29],0); // 800D6FC4
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 800D6FC8
  if (crb(c,2)) { goto L_800D6FEC; } // 800D6FCC
  c->r[4]=c->r[27]|c->r[27]; // 800D6FD0
  c->r[3]=c->r[1]+0x00000078u; // 800D6FD4
  c->r[5]=c->r[1]+0x000000FCu; // 800D6FD8
  c->lr=0x800D6FE0u; f_80091318(c); // 800D6FDC
  c->r[3]=c->r[29]|c->r[29]; // 800D6FE0
  c->r[4]=c->r[1]+0x00000078u; // 800D6FE4
  c->lr=0x800D6FECu; f_8003C5CC(c); // 800D6FE8
L_800D6FEC:;
  c->r[30]=0u+0x00000002u; // 800D6FEC
L_800D6FF0:;
  c->r[31]=c->r[31]+0x00000001u; // 800D6FF0
  c->r[25]=c->r[25]+0x00000004u; // 800D6FF4
  cmps(c,0,(int32_t)c->r[31],3); // 800D6FF8
  if (crb(c,0)) { IRQCHK(c); goto L_800D6CB4; } // 800D6FFC
  cmps(c,0,(int32_t)c->r[29],0); // 800D7000
  if (crb(c,2)) { goto L_800D701C; } // 800D7004
  cmps(c,0,(int32_t)c->r[30],-1); // 800D7008
  if (crb(c,2)) { goto L_800D701C; } // 800D700C
  c->r[3]=c->r[29]|c->r[29]; // 800D7010
  c->r[4]=c->r[29]|c->r[29]; // 800D7014
  c->lr=0x800D701Cu; f_800ECFD0(c); // 800D7018
L_800D701C:;
  c->r[3]=c->r[30]+0x00000001u; // 800D701C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D7020
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D7024
L_800D7028:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 800D7028
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 800D702C
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 800D7030
  c->r[11]=c->r[1]+0x000001E0u; // 800D7034
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 800D7038
  c->lr=0x800D7040u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D703C
  c->r[0]=R32(c->r[1]+0x00000204u); // 800D7040
  c->lr=c->r[0]; // 800D7044
  c->r[1]=c->r[1]+0x00000200u; // 800D7048
  return; // 800D704C
}

// fn_800D7050
void f_800D7050(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7050
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7054
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7058
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 800D705C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7060
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7064
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7068
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[0],c->f[4])); // 800D706C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7070
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[1],c->f[3])); // 800D7074
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800D7078
  return; // 800D707C
}

// fn_800D7080
void f_800D7080(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 800D7080
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800D7084
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 800D7088
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 800D708C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800D7090
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 800D7094
  return; // 800D7098
}

// fn_800D709C
void f_800D709C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D709C
  c->r[0]=c->lr; // 800D70A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D70A4
  c->r[11]=c->r[1]+0x00000040u; // 800D70A8
  c->lr=0x800D70B0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D70AC
  c->r[28]=c->r[3]|c->r[3]; // 800D70B0
  c->r[29]=c->r[4]|c->r[4]; // 800D70B4
  c->r[30]=c->r[5]|c->r[5]; // 800D70B8
  c->r[31]=c->r[6]|c->r[6]; // 800D70BC
  c->r[3]=c->r[1]+0x00000020u; // 800D70C0
  c->lr=0x800D70C8u; f_80091318(c); // 800D70C4
  c->r[4]=c->r[31]|c->r[31]; // 800D70C8
  c->r[5]=c->r[30]|c->r[30]; // 800D70CC
  c->r[3]=c->r[1]+0x00000014u; // 800D70D0
  c->lr=0x800D70D8u; f_80091318(c); // 800D70D4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[7]=c->ps1[7]=RF32(ea);} // 800D70D8
  c->r[3]=c->r[1]+0x00000008u; // 800D70DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800D70E0
  c->r[4]=c->r[3]|c->r[3]; // 800D70E4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D70E8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D70EC
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[6]); // 800D70F0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D70F4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[3]); // 800D70F8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D70FC
  c->f[4]=c->ps1[4]=S(std::fma(c->f[4],c->f[0],-c->f[5])); // 800D7100
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D7104
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[6],-c->f[2])); // 800D7108
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 800D710C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[7],c->f[3],-c->f[0])); // 800D7110
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800D7114
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800D7118
  c->lr=0x800D7120u; f_800ECFD0(c); // 800D711C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D7120
  c->r[11]=c->r[1]+0x00000040u; // 800D7124
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7128
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[4]);} // 800D712C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7130
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7134
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7138
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800D713C
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[3]);} // 800D7140
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7144
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[4],c->f[2])); // 800D7148
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 800D714C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[0],c->f[3],c->f[1])); // 800D7150
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D7154
  c->lr=0x800D715Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D7158
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D715C
  c->lr=c->r[0]; // 800D7160
  c->r[1]=c->r[1]+0x00000040u; // 800D7164
  return; // 800D7168
}

// fn_800D716C
void f_800D716C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D716C
  c->r[0]=c->lr; // 800D7170
  c->r[7]=R32(c->r[5]+0x00000000u); // 800D7174
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7178
  c->r[6]=R32(c->r[5]+0x00000004u); // 800D717C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7180
  c->r[31]=c->r[4]|c->r[4]; // 800D7184
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D7188
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D718C
  c->r[30]=c->r[3]|c->r[3]; // 800D7190
  c->r[3]=c->r[1]+0x00000008u; // 800D7194
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D7198
  c->r[4]=c->r[3]|c->r[3]; // 800D719C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D71A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D71A4
  c->lr=0x800D71ACu; f_800ECFD0(c); // 800D71A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D71AC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D71B0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[4]);} // 800D71B4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D71B8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D71BC
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D71C0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800D71C4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[3]);} // 800D71C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D71CC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[4],c->f[2])); // 800D71D0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 800D71D4
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[0],c->f[3],c->f[1])); // 800D71D8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D71DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D71E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D71E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D71E8
  c->lr=c->r[0]; // 800D71EC
  c->r[1]=c->r[1]+0x00000020u; // 800D71F0
  return; // 800D71F4
}

// fn_800D71F8
void f_800D71F8(Ctx* __restrict c) {
  return; // 800D71F8
}

// fn_800D71FC
void f_800D71FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D71FC
  c->r[0]=c->lr; // 800D7200
  cmps(c,0,(int32_t)c->r[3],0); // 800D7204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D720C
  c->r[31]=c->r[3]|c->r[3]; // 800D7210
  if (crb(c,2)) { goto L_800D7224; } // 800D7214
  cmps(c,0,(int32_t)c->r[4],0); // 800D7218
  if (!crb(c,1)) { goto L_800D7224; } // 800D721C
  c->lr=0x800D7224u; f_8009230C(c); // 800D7220
L_800D7224:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7228
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D722C
  c->lr=c->r[0]; // 800D7230
  c->r[1]=c->r[1]+0x00000010u; // 800D7234
  return; // 800D7238
}

// fn_800D723C
void f_800D723C(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000000Fu; // 800D723C
  c->r[12]=c->r[1]|c->r[1]; // 800D7240
  c->r[11]=addc(c,~c->r[11],0xFFFFFF30u,1); // 800D7244
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7248
  c->r[0]=c->lr; // 800D724C
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D7250
  {uint32_t ea=c->r[12]+0xFFFFFFF4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7254
  c->r[29]=c->r[3]|c->r[3]; // 800D7258
  c->r[30]=c->r[4]|c->r[4]; // 800D725C
  c->lr=0x800D7264u; f_800E7B90(c); // 800D7260
  c->r[4]=0u+0x00000000u; // 800D7264
  c->lr=0x800D726Cu; f_800E8DD8(c); // 800D7268
  c->r[31]=0u+0x802E0000u; // 800D726C
  c->r[3]=c->r[31]+0xFFFF8810u; // 800D7270
  c->lr=0x800D7278u; f_800CFD98(c); // 800D7274
  cmps(c,0,(int32_t)c->r[3],0); // 800D7278
  if (!crb(c,2)) { goto L_800D7288; } // 800D727C
  c->r[3]=c->r[31]+0xFFFF8810u; // 800D7280
  c->lr=0x800D7288u; f_800CFD84(c); // 800D7284
L_800D7288:;
  c->r[3]=0u+0x802B0000u; // 800D7288
  W32(c->r[29]+0x00000000u,c->r[30]); // 800D728C
  c->r[3]=c->r[3]+0x00001B78u; // 800D7290
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D7294
  cmps(c,0,(int32_t)c->r[0],0); // 800D7298
  if (!crb(c,2)) { goto L_800D72B4; } // 800D729C
  c->r[3]=0u+0x80280000u; // 800D72A0
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800D72A4
  c->r[3]=c->r[3]+0x00001DC0u; // 800D72A8
  c->r[30]=R32(c->r[3]+c->r[0]); // 800D72AC
  goto L_800D72C4; // 800D72B0
L_800D72B4:;
  c->r[3]=0u+0x80280000u; // 800D72B4
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800D72B8
  c->r[3]=c->r[3]+0x00001DDCu; // 800D72BC
  c->r[30]=R32(c->r[3]+c->r[0]); // 800D72C0
L_800D72C4:;
  c->lr=0x800D72C8u; f_800C3678(c); // 800D72C4
  c->r[31]=0u+0x802B0000u; // 800D72C8
  c->r[31]=c->r[31]+0x00001B78u; // 800D72CC
  c->r[3]=c->r[31]+0x000000ACu; // 800D72D0
  c->lr=0x800D72D8u; f_800C33F8(c); // 800D72D4
  c->r[0]=0u+0x000000FFu; // 800D72D8
  c->r[3]=c->r[31]+0x000000ACu; // 800D72DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D72E0
  c->r[4]=c->r[1]+0x00000014u; // 800D72E4
  c->lr=0x800D72ECu; f_800C2B88(c); // 800D72E8
  c->r[3]=c->r[31]+0x000000ACu; // 800D72EC
  c->r[4]=0u+0x00000001u; // 800D72F0
  c->r[5]=0u+0x00000001u; // 800D72F4
  c->r[6]=0u+0x00000001u; // 800D72F8
  c->lr=0x800D7300u; f_800C2E78(c); // 800D72FC
  c->r[3]=c->r[31]+0x000000ACu; // 800D7300
  c->lr=0x800D7308u; f_800C35B8(c); // 800D7304
  c->r[3]=c->r[1]+0x00000020u; // 800D7308
  c->lr=0x800D7310u; f_800C3700(c); // 800D730C
  c->r[3]=c->r[1]+0x00000020u; // 800D7310
  c->r[4]=0u+0xFFFFFEE0u; // 800D7314
  c->r[5]=0u+0x00000078u; // 800D7318
  c->lr=0x800D7320u; f_800C3E04(c); // 800D731C
  c->r[3]=c->r[1]+0x00000020u; // 800D7320
  c->r[4]=0u+0x00000018u; // 800D7324
  c->r[5]=0u+0x00000018u; // 800D7328
  c->lr=0x800D7330u; f_800C3DAC(c); // 800D732C
  c->r[3]=c->r[1]+0x00000020u; // 800D7330
  c->r[4]=0u+0x00000001u; // 800D7334
  c->lr=0x800D733Cu; f_800C3C1C(c); // 800D7338
  c->r[0]=0u+0xFFFFFFFFu; // 800D733C
  c->r[3]=c->r[1]+0x00000020u; // 800D7340
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D7344
  c->r[4]=c->r[1]+0x00000010u; // 800D7348
  c->lr=0x800D7350u; f_800C3C24(c); // 800D734C
  c->r[4]=c->r[30]|c->r[30]; // 800D7350
  c->r[3]=c->r[1]+0x00000020u; // 800D7354
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D7358
  c->lr=0x800D7360u; f_800C3E80(c); // 800D735C
  c->r[3]=c->r[1]+0x00000020u; // 800D7360
  c->lr=0x800D7368u; f_800C3FA4(c); // 800D7364
  c->lr=0x800D736Cu; f_801042E4(c); // 800D7368
  c->lr=0x800D7370u; f_801047A4(c); // 800D736C
  c->lr=0x800D7374u; f_80091F80(c); // 800D7370
  c->lr=0x800D7378u; f_80092018(c); // 800D7374
  c->lr=0x800D737Cu; f_800FC8CC(c); // 800D7378
L_800D737C:;
  IRQCHK(c); goto L_800D737C; // 800D737C
}

// fn_800D7380
void f_800D7380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7380
  c->r[0]=c->lr; // 800D7384
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7388
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D738C
  c->r[29]=c->r[3]|c->r[3]; // 800D7390
  c->r[30]=c->r[4]|c->r[4]; // 800D7394
  c->r[31]=c->r[5]|c->r[5]; // 800D7398
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D739C
  cmps(c,0,(int32_t)c->r[0],0); // 800D73A0
  if (crb(c,2)) { goto L_800D7438; } // 800D73A4
  c->r[4]=R32(c->r[3]+0x00000014u); // 800D73A8
  c->r[6]=R32(c->r[3]+0x00000008u); // 800D73AC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D73B0
  c->r[5]=c->r[6]+c->r[5]; // 800D73B4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800D73B8
  if (!crb(c,1)) { goto L_800D749C; } // 800D73BC
  c->r[0]=0u+0x00000000u; // 800D73C0
  cmps(c,0,(int32_t)c->r[5],0); // 800D73C4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D73C8
  c->r[28]=R32(c->r[3]+0x00000010u); // 800D73CC
  if (!crb(c,2)) { goto L_800D73DC; } // 800D73D0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D73D4
  goto L_800D73FC; // 800D73D8
L_800D73DC:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D73DC
  c->r[4]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 800D73E0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 800D73E4
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800D73E8
  if (!crb(c,2)) { goto L_800D73F4; } // 800D73EC
  goto L_800D73FC; // 800D73F0
L_800D73F4:;
  c->r[0]=c->r[4]+0x00000001u; // 800D73F4
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D73F8
L_800D73FC:;
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D73FC
  c->r[3]=c->r[5]|c->r[5]; // 800D7400
  c->lr=0x800D7408u; f_800DDACC(c); // 800D7404
  cmps(c,0,(int32_t)c->r[3],0); // 800D7408
  W32(c->r[29]+0x00000010u,c->r[3]); // 800D740C
  if (!crb(c,2)) { goto L_800D741C; } // 800D7410
  c->r[3]=0u+0x00000000u; // 800D7414
  goto L_800D74E8; // 800D7418
L_800D741C:;
  c->r[5]=R32(c->r[29]+0x00000008u); // 800D741C
  c->r[4]=c->r[28]|c->r[28]; // 800D7420
  c->lr=0x800D7428u; f_80004338(c); // 800D7424
  c->r[3]=R32(c->r[29]+0x00000014u); // 800D7428
  c->r[4]=c->r[28]|c->r[28]; // 800D742C
  c->lr=0x800D7434u; f_800DDC78(c); // 800D7430
  goto L_800D749C; // 800D7434
L_800D7438:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 800D7438
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D743C
  c->r[4]=c->r[4]+c->r[5]; // 800D7440
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D7444
  if (!crb(c,1)) { goto L_800D749C; } // 800D7448
  cmps(c,0,(int32_t)c->r[4],0); // 800D744C
  if (!crb(c,2)) { goto L_800D745C; } // 800D7450
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7454
  goto L_800D747C; // 800D7458
L_800D745C:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D745C
  c->r[5]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 800D7460
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800D7464
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800D7468
  if (!crb(c,2)) { goto L_800D7474; } // 800D746C
  goto L_800D747C; // 800D7470
L_800D7474:;
  c->r[0]=c->r[5]+0x00000001u; // 800D7474
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D7478
L_800D747C:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D747C
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7480
  c->lr=0x800D7488u; f_800DDAD4(c); // 800D7484
  cmps(c,0,(int32_t)c->r[3],0); // 800D7488
  W32(c->r[29]+0x00000010u,c->r[3]); // 800D748C
  if (!crb(c,2)) { goto L_800D749C; } // 800D7490
  c->r[3]=0u+0x00000000u; // 800D7494
  goto L_800D74E8; // 800D7498
L_800D749C:;
  cmps(c,0,(int32_t)c->r[31],1); // 800D749C
  if (!crb(c,2)) { goto L_800D74C0; } // 800D74A0
  c->r[3]=R32(c->r[29]+0x00000008u); // 800D74A4
  c->r[5]=R8(c->r[30]+0x00000000u); // 800D74A8
  c->r[4]=R32(c->r[29]+0x00000010u); // 800D74AC
  c->r[0]=c->r[3]+0x00000001u; // 800D74B0
  W8(c->r[4]+c->r[3],c->r[5]); // 800D74B4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D74B8
  goto L_800D74E4; // 800D74BC
L_800D74C0:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 800D74C0
  c->r[4]=c->r[30]|c->r[30]; // 800D74C4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D74C8
  c->r[5]=c->r[31]|c->r[31]; // 800D74CC
  c->r[3]=c->r[3]+c->r[0]; // 800D74D0
  c->lr=0x800D74D8u; f_80004338(c); // 800D74D4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D74D8
  c->r[0]=c->r[0]+c->r[31]; // 800D74DC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D74E0
L_800D74E4:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 800D74E4
L_800D74E8:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D74E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D74EC
  c->lr=c->r[0]; // 800D74F0
  c->r[1]=c->r[1]+0x00000020u; // 800D74F4
  return; // 800D74F8
}

// fn_800D74FC
void f_800D74FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D74FC
  c->r[0]=c->lr; // 800D7500
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7504
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7508
  c->r[30]=c->r[3]|c->r[3]; // 800D750C
  c->r[31]=c->r[4]|c->r[4]; // 800D7510
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D7514
  cmps(c,0,(int32_t)c->r[0],0); // 800D7518
  if (crb(c,2)) { goto L_800D75B0; } // 800D751C
  c->r[4]=R32(c->r[3]+0x00000014u); // 800D7520
  c->r[5]=R32(c->r[3]+0x00000008u); // 800D7524
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D7528
  c->r[5]=c->r[5]+0x00000001u; // 800D752C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800D7530
  if (!crb(c,1)) { goto L_800D7614; } // 800D7534
  c->r[0]=0u+0x00000000u; // 800D7538
  cmps(c,0,(int32_t)c->r[5],0); // 800D753C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D7540
  c->r[29]=R32(c->r[3]+0x00000010u); // 800D7544
  if (!crb(c,2)) { goto L_800D7554; } // 800D7548
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D754C
  goto L_800D7574; // 800D7550
L_800D7554:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D7554
  c->r[4]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 800D7558
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 800D755C
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800D7560
  if (!crb(c,2)) { goto L_800D756C; } // 800D7564
  goto L_800D7574; // 800D7568
L_800D756C:;
  c->r[0]=c->r[4]+0x00000001u; // 800D756C
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D7570
L_800D7574:;
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D7574
  c->r[3]=c->r[5]|c->r[5]; // 800D7578
  c->lr=0x800D7580u; f_800DDACC(c); // 800D757C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7580
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D7584
  if (!crb(c,2)) { goto L_800D7594; } // 800D7588
  c->r[3]=0u+0x00000000u; // 800D758C
  goto L_800D7630; // 800D7590
L_800D7594:;
  c->r[5]=R32(c->r[30]+0x00000008u); // 800D7594
  c->r[4]=c->r[29]|c->r[29]; // 800D7598
  c->lr=0x800D75A0u; f_80004338(c); // 800D759C
  c->r[3]=R32(c->r[30]+0x00000014u); // 800D75A0
  c->r[4]=c->r[29]|c->r[29]; // 800D75A4
  c->lr=0x800D75ACu; f_800DDC78(c); // 800D75A8
  goto L_800D7614; // 800D75AC
L_800D75B0:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 800D75B0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D75B4
  c->r[4]=c->r[4]+0x00000001u; // 800D75B8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D75BC
  if (!crb(c,1)) { goto L_800D7614; } // 800D75C0
  cmps(c,0,(int32_t)c->r[4],0); // 800D75C4
  if (!crb(c,2)) { goto L_800D75D4; } // 800D75C8
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D75CC
  goto L_800D75F4; // 800D75D0
L_800D75D4:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D75D4
  c->r[5]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 800D75D8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800D75DC
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800D75E0
  if (!crb(c,2)) { goto L_800D75EC; } // 800D75E4
  goto L_800D75F4; // 800D75E8
L_800D75EC:;
  c->r[0]=c->r[5]+0x00000001u; // 800D75EC
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D75F0
L_800D75F4:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D75F4
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D75F8
  c->lr=0x800D7600u; f_800DDAD4(c); // 800D75FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D7600
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D7604
  if (!crb(c,2)) { goto L_800D7614; } // 800D7608
  c->r[3]=0u+0x00000000u; // 800D760C
  goto L_800D7630; // 800D7610
L_800D7614:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 800D7614
  c->r[0]=R32(c->r[30]+0x00000008u); // 800D7618
  W8(c->r[3]+c->r[0],c->r[31]); // 800D761C
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D7620
  c->r[3]=R32(c->r[30]+0x00000010u); // 800D7624
  c->r[0]=c->r[4]+0x00000001u; // 800D7628
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D762C
L_800D7630:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7630
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7634
  c->lr=c->r[0]; // 800D7638
  c->r[1]=c->r[1]+0x00000020u; // 800D763C
  return; // 800D7640
}

// fn_800D7644
void f_800D7644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7644
  c->r[0]=c->lr; // 800D7648
  cmps(c,0,(int32_t)c->r[5],0); // 800D764C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7650
  c->r[0]=0u+0x00000000u; // 800D7654
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7658
  c->r[31]=c->r[3]|c->r[3]; // 800D765C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D7660
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D7664
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D7668
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D766C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D7670
  if (crb(c,2)) { goto L_800D7684; } // 800D7674
  c->r[3]=c->r[5]|c->r[5]; // 800D7678
  c->lr=0x800D7680u; f_800DDACC(c); // 800D767C
  goto L_800D7688; // 800D7680
L_800D7684:;
  c->r[3]=c->r[0]|c->r[0]; // 800D7684
L_800D7688:;
  W32(c->r[31]+0x00000010u,c->r[3]); // 800D7688
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D768C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7690
  c->lr=c->r[0]; // 800D7694
  c->r[1]=c->r[1]+0x00000010u; // 800D7698
  return; // 800D769C
}

// fn_800D76A0
void f_800D76A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D76A0
  c->r[0]=c->lr; // 800D76A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D76A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D76AC
  c->r[31]=c->r[3]|c->r[3]; // 800D76B0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D76B4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800D76B8
  if (!crb(c,1)) { goto L_800D76C8; } // 800D76BC
  c->lr=0x800D76C4u; f_800D7644(c); // 800D76C0
  goto L_800D76F0; // 800D76C4
L_800D76C8:;
  c->r[0]=0u+0x00000000u; // 800D76C8
  c->r[5]=0u+0x00000001u; // 800D76CC
  W32(c->r[3]+0x00000014u,c->r[6]); // 800D76D0
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 800D76D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D76D8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D76DC
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D76E0
  c->r[3]=c->r[6]|c->r[6]; // 800D76E4
  c->lr=0x800D76ECu; f_800DDBB4(c); // 800D76E8
  W32(c->r[31]+0x00000010u,c->r[3]); // 800D76EC
L_800D76F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D76F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D76F4
  c->lr=c->r[0]; // 800D76F8
  c->r[1]=c->r[1]+0x00000010u; // 800D76FC
  return; // 800D7700
}

// fn_800D7704
void f_800D7704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7704
  c->r[0]=c->lr; // 800D7708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D770C
  c->r[0]=0u+0x00000000u; // 800D7710
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7714
  c->r[31]=c->r[3]|c->r[3]; // 800D7718
  c->r[4]=R32(c->r[3]+0x00000010u); // 800D771C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D7720
  cmps(c,1,(int32_t)c->r[4],0); // 800D7724
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D7728
  if (crb(c,6)) { goto L_800D775C; } // 800D772C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D7730
  cmps(c,0,(int32_t)c->r[0],0); // 800D7734
  if (crb(c,2)) { goto L_800D7748; } // 800D7738
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D773C
  c->lr=0x800D7744u; f_800DDC78(c); // 800D7740
  goto L_800D7754; // 800D7744
L_800D7748:;
  if (crb(c,6)) { goto L_800D7754; } // 800D7748
  c->r[3]=c->r[4]|c->r[4]; // 800D774C
  c->lr=0x800D7754u; f_800DDADC(c); // 800D7750
L_800D7754:;
  c->r[0]=0u+0x00000000u; // 800D7754
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D7758
L_800D775C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D775C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7760
  c->lr=c->r[0]; // 800D7764
  c->r[1]=c->r[1]+0x00000010u; // 800D7768
  return; // 800D776C
}

// fn_800D7770
void f_800D7770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7770
  c->r[0]=c->lr; // 800D7774
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D777C
  c->r[31]=c->r[3]|c->r[3]; // 800D7780
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D7784
  cmps(c,0,(int32_t)c->r[0],0); // 800D7788
  if (crb(c,2)) { goto L_800D77B0; } // 800D778C
  c->r[5]=R32(c->r[3]+0x00000014u); // 800D7790
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D7794
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D7798
  if (!crb(c,1)) { goto L_800D77A8; } // 800D779C
  c->r[3]=0u+0x00000000u; // 800D77A0
  goto L_800D7838; // 800D77A4
L_800D77A8:;
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D77A8
  goto L_800D7834; // 800D77AC
L_800D77B0:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D77B0
  cmps(c,0,(int32_t)c->r[0],0); // 800D77B4
  if (crb(c,2)) { goto L_800D7834; } // 800D77B8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D77BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D77C0
  if (crb(c,2)) { goto L_800D7834; } // 800D77C4
  cmps(c,0,(int32_t)c->r[4],0); // 800D77C8
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D77CC
  if (crb(c,2)) { goto L_800D7804; } // 800D77D0
  if (!crb(c,2)) { goto L_800D77E0; } // 800D77D4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D77D8
  goto L_800D7808; // 800D77DC
L_800D77E0:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D77E0
  c->r[5]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 800D77E4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800D77E8
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800D77EC
  if (!crb(c,2)) { goto L_800D77F8; } // 800D77F0
  goto L_800D7808; // 800D77F4
L_800D77F8:;
  c->r[0]=c->r[5]+0x00000001u; // 800D77F8
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D77FC
  goto L_800D7808; // 800D7800
L_800D7804:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7804
L_800D7808:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7808
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D780C
  if (crb(c,2)) { goto L_800D7834; } // 800D7810
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D7814
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7818
  c->lr=0x800D7820u; f_800DDAD4(c); // 800D781C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D7820
  W32(c->r[31]+0x00000010u,c->r[3]); // 800D7824
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D7828
  c->r[3]=0u-c->r[0]; // 800D782C
  goto L_800D7838; // 800D7830
L_800D7834:;
  c->r[3]=0u+0xFFFFFFFFu; // 800D7834
L_800D7838:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D783C
  c->lr=c->r[0]; // 800D7840
  c->r[1]=c->r[1]+0x00000010u; // 800D7844
  return; // 800D7848
}

// fn_800D784C
void f_800D784C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D784C
  c->r[0]=c->lr; // 800D7850
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7854
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7858
  c->r[31]=c->r[3]|c->r[3]; // 800D785C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D7860
  cmps(c,0,(int32_t)c->r[0],0); // 800D7864
  if (crb(c,2)) { goto L_800D78FC; } // 800D7868
  c->r[4]=R32(c->r[3]+0x00000014u); // 800D786C
  c->r[5]=R32(c->r[3]+0x00000008u); // 800D7870
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D7874
  c->r[5]=c->r[5]+0x00000001u; // 800D7878
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800D787C
  if (!crb(c,1)) { goto L_800D7960; } // 800D7880
  c->r[0]=0u+0x00000000u; // 800D7884
  cmps(c,0,(int32_t)c->r[5],0); // 800D7888
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D788C
  c->r[30]=R32(c->r[3]+0x00000010u); // 800D7890
  if (!crb(c,2)) { goto L_800D78A0; } // 800D7894
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D7898
  goto L_800D78C0; // 800D789C
L_800D78A0:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D78A0
  c->r[4]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 800D78A4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 800D78A8
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800D78AC
  if (!crb(c,2)) { goto L_800D78B8; } // 800D78B0
  goto L_800D78C0; // 800D78B4
L_800D78B8:;
  c->r[0]=c->r[4]+0x00000001u; // 800D78B8
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D78BC
L_800D78C0:;
  W32(c->r[3]+0x00000000u,c->r[5]); // 800D78C0
  c->r[3]=c->r[5]|c->r[5]; // 800D78C4
  c->lr=0x800D78CCu; f_800DDACC(c); // 800D78C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D78CC
  W32(c->r[31]+0x00000010u,c->r[3]); // 800D78D0
  if (!crb(c,2)) { goto L_800D78E0; } // 800D78D4
  c->r[3]=0u+0x00000000u; // 800D78D8
  goto L_800D7980; // 800D78DC
L_800D78E0:;
  c->r[5]=R32(c->r[31]+0x00000008u); // 800D78E0
  c->r[4]=c->r[30]|c->r[30]; // 800D78E4
  c->lr=0x800D78ECu; f_80004338(c); // 800D78E8
  c->r[3]=R32(c->r[31]+0x00000014u); // 800D78EC
  c->r[4]=c->r[30]|c->r[30]; // 800D78F0
  c->lr=0x800D78F8u; f_800DDC78(c); // 800D78F4
  goto L_800D7960; // 800D78F8
L_800D78FC:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 800D78FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7900
  c->r[4]=c->r[4]+0x00000001u; // 800D7904
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D7908
  if (!crb(c,1)) { goto L_800D7960; } // 800D790C
  cmps(c,0,(int32_t)c->r[4],0); // 800D7910
  if (!crb(c,2)) { goto L_800D7920; } // 800D7914
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7918
  goto L_800D7940; // 800D791C
L_800D7920:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D7920
  c->r[5]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 800D7924
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800D7928
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800D792C
  if (!crb(c,2)) { goto L_800D7938; } // 800D7930
  goto L_800D7940; // 800D7934
L_800D7938:;
  c->r[0]=c->r[5]+0x00000001u; // 800D7938
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D793C
L_800D7940:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D7940
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7944
  c->lr=0x800D794Cu; f_800DDAD4(c); // 800D7948
  cmps(c,0,(int32_t)c->r[3],0); // 800D794C
  W32(c->r[31]+0x00000010u,c->r[3]); // 800D7950
  if (!crb(c,2)) { goto L_800D7960; } // 800D7954
  c->r[3]=0u+0x00000000u; // 800D7958
  goto L_800D7980; // 800D795C
L_800D7960:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 800D7960
  c->r[3]=R32(c->r[31]+0x00000008u); // 800D7964
  c->r[0]=R8(c->r[4]+c->r[3]); // 800D7968
  cmps(c,0,(int32_t)c->r[0],0); // 800D796C
  if (crb(c,2)) { goto L_800D797C; } // 800D7970
  c->r[0]=0u+0x00000000u; // 800D7974
  W8(c->r[4]+c->r[3],c->r[0]); // 800D7978
L_800D797C:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 800D797C
L_800D7980:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7980
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7984
  c->lr=c->r[0]; // 800D7988
  c->r[1]=c->r[1]+0x00000010u; // 800D798C
  return; // 800D7990
}

// fn_800D7994
void f_800D7994(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7994
  c->r[0]=c->lr; // 800D7998
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D799C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D79A0
  c->r[29]=c->r[3]|c->r[3]; // 800D79A4
  c->r[30]=c->r[4]|c->r[4]; // 800D79A8
  c->r[31]=c->r[5]|c->r[5]; // 800D79AC
  c->r[3]=0u+0x00000014u; // 800D79B0
  c->lr=0x800D79B8u; f_800DDACC(c); // 800D79B4
  cmps(c,0,(int32_t)c->r[3],0); // 800D79B8
  W32(c->r[29]+0x00000000u,c->r[3]); // 800D79BC
  if (!crb(c,2)) { goto L_800D79CC; } // 800D79C0
  c->r[3]=0u+0x00000000u; // 800D79C4
  goto L_800D7A54; // 800D79C8
L_800D79CC:;
  c->r[4]=0u+0x00000000u; // 800D79CC
  c->r[0]=0u+0x00000006u; // 800D79D0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D79D4
  cmps(c,0,(int32_t)c->r[30],0); // 800D79D8
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D79DC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D79E0
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D79E4
  W32(c->r[3]+0x00000010u,c->r[4]); // 800D79E8
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D79EC
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 800D79F0
  if (crb(c,2)) { goto L_800D7A00; } // 800D79F4
  c->r[4]=c->r[30]|c->r[30]; // 800D79F8
  goto L_800D7A08; // 800D79FC
L_800D7A00:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D7A00
  c->r[4]=R32(c->r[3]+0x00000008u); // 800D7A04
L_800D7A08:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D7A08
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D7A0C
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7A10
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800D7A14
  c->lr=0x800D7A1Cu; f_800DDAD4(c); // 800D7A18
  c->r[4]=R32(c->r[29]+0x00000000u); // 800D7A1C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7A20
  W32(c->r[4]+0x00000010u,c->r[3]); // 800D7A24
  if (!crb(c,2)) { goto L_800D7A34; } // 800D7A28
  c->r[3]=0u+0x00000000u; // 800D7A2C
  goto L_800D7A54; // 800D7A30
L_800D7A34:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D7A34
  if (crb(c,2)) { goto L_800D7A40; } // 800D7A38
  goto L_800D7A48; // 800D7A3C
L_800D7A40:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D7A40
  c->r[30]=R32(c->r[3]+0x00000008u); // 800D7A44
L_800D7A48:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D7A48
  W32(c->r[3]+0x00000004u,c->r[30]); // 800D7A4C
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D7A50
L_800D7A54:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7A54
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7A58
  c->lr=c->r[0]; // 800D7A5C
  c->r[1]=c->r[1]+0x00000020u; // 800D7A60
  return; // 800D7A64
}

// fn_800D7A68
void f_800D7A68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7A68
  c->r[0]=c->lr; // 800D7A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7A70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7A74
  c->r[31]=c->r[3]|c->r[3]; // 800D7A78
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D7A7C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7A80
  if (crb(c,2)) { goto L_800D7A90; } // 800D7A84
  c->r[3]=c->r[0]|c->r[0]; // 800D7A88
  c->lr=0x800D7A90u; f_800DDADC(c); // 800D7A8C
L_800D7A90:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7A90
  c->lr=0x800D7A98u; f_800DDADC(c); // 800D7A94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7A9C
  c->lr=c->r[0]; // 800D7AA0
  c->r[1]=c->r[1]+0x00000010u; // 800D7AA4
  return; // 800D7AA8
}

// fn_800D7AAC
void f_800D7AAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7AAC
  c->r[0]=c->lr; // 800D7AB0
  cmps(c,0,(int32_t)c->r[4],0); // 800D7AB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7AB8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7ABC
  c->r[29]=c->r[3]|c->r[3]; // 800D7AC0
  c->r[30]=c->r[4]|c->r[4]; // 800D7AC4
  if (!crb(c,2)) { goto L_800D7B28; } // 800D7AC8
  c->r[4]=R32(c->r[3]+0x00000008u); // 800D7ACC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7AD0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800D7AD4
  if (!crb(c,1)) { goto L_800D7B18; } // 800D7AD8
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D7ADC
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7AE0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D7AE4
  c->lr=0x800D7AECu; f_800DDAD4(c); // 800D7AE8
  cmps(c,0,(int32_t)c->r[3],0); // 800D7AEC
  W32(c->r[29]+0x00000010u,c->r[3]); // 800D7AF0
  if (!crb(c,2)) { goto L_800D7B00; } // 800D7AF4
  c->r[29]=0u+0x00000000u; // 800D7AF8
  goto L_800D7B08; // 800D7AFC
L_800D7B00:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D7B00
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D7B04
L_800D7B08:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D7B08
  if (!crb(c,2)) { goto L_800D7B18; } // 800D7B0C
  c->r[3]=0u+0x00000000u; // 800D7B10
  goto L_800D7BB0; // 800D7B14
L_800D7B18:;
  c->r[0]=0u+0x00000000u; // 800D7B18
  c->r[3]=0u+0x00000001u; // 800D7B1C
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D7B20
  goto L_800D7BB0; // 800D7B24
L_800D7B28:;
  if (!crb(c,2)) { goto L_800D7B34; } // 800D7B28
  c->r[31]=R32(c->r[3]+0x00000008u); // 800D7B2C
  goto L_800D7B58; // 800D7B30
L_800D7B34:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 800D7B34
  c->r[5]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 800D7B38
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800D7B3C
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800D7B40
  if (!crb(c,2)) { goto L_800D7B50; } // 800D7B44
  c->r[31]=c->r[30]|c->r[30]; // 800D7B48
  goto L_800D7B58; // 800D7B4C
L_800D7B50:;
  c->r[0]=c->r[5]+0x00000001u; // 800D7B50
  c->r[31]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D7B54
L_800D7B58:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7B58
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800D7B5C
  if (crb(c,2)) { goto L_800D7B9C; } // 800D7B60
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D7B64
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7B68
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 800D7B6C
  c->lr=0x800D7B74u; f_800DDAD4(c); // 800D7B70
  cmps(c,0,(int32_t)c->r[3],0); // 800D7B74
  W32(c->r[29]+0x00000010u,c->r[3]); // 800D7B78
  if (!crb(c,2)) { goto L_800D7B88; } // 800D7B7C
  c->r[29]=0u+0x00000000u; // 800D7B80
  goto L_800D7B8C; // 800D7B84
L_800D7B88:;
  W32(c->r[29]+0x00000004u,c->r[31]); // 800D7B88
L_800D7B8C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D7B8C
  if (!crb(c,2)) { goto L_800D7B9C; } // 800D7B90
  c->r[3]=0u+0x00000000u; // 800D7B94
  goto L_800D7BB0; // 800D7B98
L_800D7B9C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D7B9C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 800D7BA0
  if (!crb(c,1)) { goto L_800D7BAC; } // 800D7BA4
  W32(c->r[29]+0x00000000u,c->r[30]); // 800D7BA8
L_800D7BAC:;
  c->r[3]=0u+0x00000001u; // 800D7BAC
L_800D7BB0:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7BB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7BB4
  c->lr=c->r[0]; // 800D7BB8
  c->r[1]=c->r[1]+0x00000020u; // 800D7BBC
  return; // 800D7BC0
}

// fn_800D7BC4
void f_800D7BC4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800D7BC4
  c->r[6]=0u+0x00000000u; // 800D7BC8
  if (crb(c,0)) { goto L_800D7BE0; } // 800D7BCC
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D7BD0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800D7BD4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D7BD8
  if (!crb(c,1)) { goto L_800D7BE4; } // 800D7BDC
L_800D7BE0:;
  c->r[6]=0u+0x00000001u; // 800D7BE0
L_800D7BE4:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D7BE4
  if (crb(c,2)) { goto L_800D7BF4; } // 800D7BE8
  c->r[3]=0u+0x00000000u; // 800D7BEC
  return; // 800D7BF0
L_800D7BF4:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D7BF4
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7BF8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D7BFC
  c->r[3]=c->r[3]+c->r[0]; // 800D7C00
  return; // 800D7C04
}

// fn_800D7C08
void f_800D7C08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7C08
  c->r[0]=c->lr; // 800D7C0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7C10
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7C14
  c->r[29]=c->r[3]|c->r[3]; // 800D7C18
  c->r[30]=c->r[4]|c->r[4]; // 800D7C1C
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D7C20
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7C24
  c->r[5]=c->r[5]+0x00000001u; // 800D7C28
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800D7C2C
  if (!crb(c,1)) { goto L_800D7C98; } // 800D7C30
  cmps(c,0,(int32_t)c->r[5],0); // 800D7C34
  if (!crb(c,2)) { goto L_800D7C44; } // 800D7C38
  c->r[5]=R32(c->r[3]+0x00000008u); // 800D7C3C
  goto L_800D7C64; // 800D7C40
L_800D7C44:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 800D7C44
  c->r[4]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 800D7C48
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 800D7C4C
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800D7C50
  if (!crb(c,2)) { goto L_800D7C5C; } // 800D7C54
  goto L_800D7C64; // 800D7C58
L_800D7C5C:;
  c->r[0]=c->r[4]+0x00000001u; // 800D7C5C
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D7C60
L_800D7C64:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D7C64
  W32(c->r[3]+0x00000004u,c->r[5]); // 800D7C68
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 800D7C6C
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7C70
  c->lr=0x800D7C78u; f_800DDAD4(c); // 800D7C74
  cmps(c,0,(int32_t)c->r[3],0); // 800D7C78
  W32(c->r[29]+0x00000010u,c->r[3]); // 800D7C7C
  if (!crb(c,2)) { goto L_800D7C88; } // 800D7C80
  c->r[29]=0u+0x00000000u; // 800D7C84
L_800D7C88:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D7C88
  if (!crb(c,2)) { goto L_800D7C98; } // 800D7C8C
  c->r[3]=0u+0x00000000u; // 800D7C90
  goto L_800D7CD0; // 800D7C94
L_800D7C98:;
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 800D7C98
  cmps(c,0,(int32_t)c->r[30],0); // 800D7C9C
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D7CA0
  c->r[3]=R32(c->r[29]+0x00000010u); // 800D7CA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800D7CA8
  c->r[31]=c->r[3]+c->r[0]; // 800D7CAC
  if (crb(c,2)) { goto L_800D7CC0; } // 800D7CB0
  c->r[3]=c->r[31]|c->r[31]; // 800D7CB4
  c->r[4]=c->r[30]|c->r[30]; // 800D7CB8
  c->lr=0x800D7CC0u; f_80004338(c); // 800D7CBC
L_800D7CC0:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800D7CC0
  c->r[3]=c->r[31]|c->r[31]; // 800D7CC4
  c->r[0]=c->r[4]+0x00000001u; // 800D7CC8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D7CCC
L_800D7CD0:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7CD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7CD4
  c->lr=c->r[0]; // 800D7CD8
  c->r[1]=c->r[1]+0x00000020u; // 800D7CDC
  return; // 800D7CE0
}

// fn_800D7CE4
void f_800D7CE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7CE4
  c->r[0]=c->lr; // 800D7CE8
  cmps(c,0,(int32_t)c->r[4],0); // 800D7CEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7CF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7CF4
  c->r[31]=c->r[3]|c->r[3]; // 800D7CF8
  if (crb(c,0)) { goto L_800D7D10; } // 800D7CFC
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D7D00
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800D7D04
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D7D08
  if (!crb(c,1)) { goto L_800D7D18; } // 800D7D0C
L_800D7D10:;
  c->r[3]=0u+0x00000000u; // 800D7D10
  goto L_800D7DC0; // 800D7D14
L_800D7D18:;
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D7D18
  if (crb(c,2)) { goto L_800D7D48; } // 800D7D1C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800D7D20
  c->r[5]=c->r[4]+0x00000001u; // 800D7D24
  c->r[7]=R32(c->r[3]+0x00000010u); // 800D7D28
  c->r[0]=c->r[0]-c->r[4]; // 800D7D2C
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 800D7D30
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800D7D34
  c->r[3]=c->r[7]+c->r[3]; // 800D7D38
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 800D7D3C
  c->r[4]=c->r[7]+c->r[4]; // 800D7D40
  c->lr=0x800D7D48u; f_8011007C(c); // 800D7D44
L_800D7D48:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D7D48
  cmps(c,0,(int32_t)c->r[4],0); // 800D7D4C
  if (!crb(c,2)) { goto L_800D7D5C; } // 800D7D50
  c->r[4]=R32(c->r[31]+0x00000008u); // 800D7D54
  goto L_800D7D7C; // 800D7D58
L_800D7D5C:;
  c->r[5]=R32(c->r[31]+0x00000008u); // 800D7D5C
  c->r[3]=divw((int32_t)c->r[4],(int32_t)c->r[5]); // 800D7D60
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[5]); // 800D7D64
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800D7D68
  if (!crb(c,2)) { goto L_800D7D74; } // 800D7D6C
  goto L_800D7D7C; // 800D7D70
L_800D7D74:;
  c->r[0]=c->r[3]+0x00000001u; // 800D7D74
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 800D7D78
L_800D7D7C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D7D7C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D7D80
  if (crb(c,2)) { goto L_800D7DBC; } // 800D7D84
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D7D88
  W32(c->r[31]+0x00000004u,c->r[4]); // 800D7D8C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800D7D90
  c->r[3]=R32(c->r[31]+0x00000010u); // 800D7D94
  c->lr=0x800D7D9Cu; f_800DDAD4(c); // 800D7D98
  cmps(c,0,(int32_t)c->r[3],0); // 800D7D9C
  W32(c->r[31]+0x00000010u,c->r[3]); // 800D7DA0
  if (!crb(c,2)) { goto L_800D7DAC; } // 800D7DA4
  c->r[31]=0u+0x00000000u; // 800D7DA8
L_800D7DAC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D7DAC
  if (!crb(c,2)) { goto L_800D7DBC; } // 800D7DB0
  c->r[3]=0u+0x00000000u; // 800D7DB4
  goto L_800D7DC0; // 800D7DB8
L_800D7DBC:;
  c->r[3]=0u+0x00000001u; // 800D7DBC
L_800D7DC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7DC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7DC4
  c->lr=c->r[0]; // 800D7DC8
  c->r[1]=c->r[1]+0x00000010u; // 800D7DCC
  return; // 800D7DD0
}

// fn_800D7DD4
void f_800D7DD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7DD4
  c->r[0]=c->lr; // 800D7DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7DDC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7DE0
  c->r[30]=c->r[3]|c->r[3]; // 800D7DE4
  c->r[31]=R32(c->r[3]+0x00000014u); // 800D7DE8
  cmps(c,0,(int32_t)c->r[31],0); // 800D7DEC
  if (!crb(c,2)) { goto L_800D7DFC; } // 800D7DF0
  c->r[3]=0u+0x00000000u; // 800D7DF4
  goto L_800D7EC4; // 800D7DF8
L_800D7DFC:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 800D7DFC
  cmps(c,0,(int32_t)c->r[0],0); // 800D7E00
  if (crb(c,2)) { goto L_800D7EC0; } // 800D7E04
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7E08
  c->r[4]=0u+0x00000000u; // 800D7E0C
  W32(c->r[3]+0x00000014u,c->r[4]); // 800D7E10
  cmps(c,0,(int32_t)c->r[0],0); // 800D7E14
  if (crb(c,2)) { goto L_800D7E24; } // 800D7E18
  c->r[3]=0u+0xFFFFFFDBu; // 800D7E1C
  goto L_800D7EC4; // 800D7E20
L_800D7E24:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D7E24
  c->r[3]=c->r[31]|c->r[31]; // 800D7E28
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800D7E2C
  if (!crb(c,0)) { goto L_800D7E38; } // 800D7E30
  c->r[3]=c->r[0]|c->r[0]; // 800D7E34
L_800D7E38:;
  c->r[3]=c->r[3]+0x00000010u; // 800D7E38
  c->lr=0x800D7E40u; f_800DDACC(c); // 800D7E3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7E40
  W32(c->r[30]+0x00000004u,c->r[3]); // 800D7E44
  if (!crb(c,2)) { goto L_800D7E54; } // 800D7E48
  c->r[3]=0u+0xFFFFFFD8u; // 800D7E4C
  goto L_800D7EC4; // 800D7E50
L_800D7E54:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 800D7E54
  c->r[5]=c->r[31]|c->r[31]; // 800D7E58
  c->r[3]=c->r[3]+0x00000010u; // 800D7E5C
  c->lr=0x800D7E64u; f_80004338(c); // 800D7E60
  c->r[3]=c->r[30]|c->r[30]; // 800D7E64
  c->r[4]=c->r[31]|c->r[31]; // 800D7E68
  c->lr=0x800D7E70u; f_800D8418(c); // 800D7E6C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7E70
  if (!crb(c,0)) { goto L_800D7E80; } // 800D7E74
  W32(c->r[30]+0x00000020u,c->r[3]); // 800D7E78
  goto L_800D7EC4; // 800D7E7C
L_800D7E80:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 800D7E80
  c->r[4]=R32(c->r[30]+0x00000010u); // 800D7E84
  c->r[0]=c->r[0]+c->r[3]; // 800D7E88
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[4]); // 800D7E8C
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D7E90
  if (!crb(c,1)) { goto L_800D7EB8; } // 800D7E94
  c->r[3]=R32(c->r[30]+0x00000004u); // 800D7E98
  c->r[4]=c->r[4]+0x00000010u; // 800D7E9C
  c->lr=0x800D7EA4u; f_800DDAD4(c); // 800D7EA0
  cmps(c,0,(int32_t)c->r[3],0); // 800D7EA4
  W32(c->r[30]+0x00000004u,c->r[3]); // 800D7EA8
  if (!crb(c,2)) { goto L_800D7EB8; } // 800D7EAC
  c->r[3]=0u+0xFFFFFFD8u; // 800D7EB0
  goto L_800D7EC4; // 800D7EB4
L_800D7EB8:;
  c->r[3]=0u+0x00000000u; // 800D7EB8
  goto L_800D7EC4; // 800D7EBC
L_800D7EC0:;
  c->r[3]=0u+0xFFFFFFDBu; // 800D7EC0
L_800D7EC4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7EC8
  c->lr=c->r[0]; // 800D7ECC
  c->r[1]=c->r[1]+0x00000010u; // 800D7ED0
  return; // 800D7ED4
}

// fn_800D7ED8
void f_800D7ED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7ED8
  c->r[0]=c->lr; // 800D7EDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7EE0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7EE4
  c->r[28]=c->r[3]|c->r[3]; // 800D7EE8
  c->r[29]=c->r[4]|c->r[4]; // 800D7EEC
  c->r[30]=c->r[5]|c->r[5]; // 800D7EF0
  c->r[0]=R32(c->r[3]+0x00000018u); // 800D7EF4
  cmps(c,0,(int32_t)c->r[0],0); // 800D7EF8
  if (!crb(c,0)) { goto L_800D7F08; } // 800D7EFC
  c->r[3]=c->r[0]|c->r[0]; // 800D7F00
  goto L_800D8184; // 800D7F04
L_800D7F08:;
  c->r[31]=c->r[0]+c->r[6]; cr0(c,c->r[31]); // 800D7F08
  if (!crb(c,0)) { goto L_800D7F20; } // 800D7F0C
  c->r[0]=0u+0xFFFFFFDAu; // 800D7F10
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D7F14
  c->r[3]=0u+0xFFFFFFDAu; // 800D7F18
  goto L_800D8184; // 800D7F1C
L_800D7F20:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D7F20
  cmps(c,0,(int32_t)c->r[6],0); // 800D7F24
  if (crb(c,2)) { goto L_800D7F3C; } // 800D7F28
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D7F2C
  c->r[4]=c->r[31]+c->r[5]; // 800D7F30
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D7F34
  if (!crb(c,1)) { goto L_800D8130; } // 800D7F38
L_800D7F3C:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D7F3C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7F40
  if (crb(c,2)) { goto L_800D7F50; } // 800D7F44
  c->r[3]=0u+0xFFFFFFFFu; // 800D7F48
  goto L_800D8184; // 800D7F4C
L_800D7F50:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 800D7F50
  cmps(c,0,(int32_t)c->r[0],0); // 800D7F54
  if (crb(c,2)) { goto L_800D7FE0; } // 800D7F58
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D7F5C
  cmps(c,0,(int32_t)c->r[4],0); // 800D7F60
  if (!crb(c,2)) { goto L_800D7F8C; } // 800D7F64
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D7F68
  c->r[3]=c->r[3]+0x00000010u; // 800D7F6C
  c->lr=0x800D7F74u; f_800DDACC(c); // 800D7F70
  cmps(c,0,(int32_t)c->r[3],0); // 800D7F74
  W32(c->r[28]+0x00000004u,c->r[3]); // 800D7F78
  c->r[4]=c->r[3]|c->r[3]; // 800D7F7C
  if (!crb(c,2)) { goto L_800D7F8C; } // 800D7F80
  c->r[3]=0u+0xFFFFFFD8u; // 800D7F84
  goto L_800D8184; // 800D7F88
L_800D7F8C:;
  c->r[12]=R32(c->r[28]+0x00000034u); // 800D7F8C
  c->r[3]=c->r[4]+0x00000010u; // 800D7F90
  c->r[5]=c->r[1]+0x00000008u; // 800D7F94
  c->r[4]=R32(c->r[28]+0x00000010u); // 800D7F98
  c->r[6]=R32(c->r[28]+0x00000030u); // 800D7F9C
  c->ctr=c->r[12]; // 800D7FA0
  if (true) { c->lr=0x800D7FA8u; dispatch(c,c->ctr); } // 800D7FA4
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 800D7FA8
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D7FAC
  cmps(c,0,(int32_t)c->r[4],0); // 800D7FB0
  if (crb(c,2)) { goto L_800D80D4; } // 800D7FB4
  c->r[3]=c->r[28]|c->r[28]; // 800D7FB8
  c->lr=0x800D7FC0u; f_800D8418(c); // 800D7FBC
  cmps(c,0,(int32_t)c->r[3],0); // 800D7FC0
  if (!crb(c,0)) { goto L_800D7FD0; } // 800D7FC4
  W32(c->r[28]+0x00000020u,c->r[3]); // 800D7FC8
  goto L_800D8184; // 800D7FCC
L_800D7FD0:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 800D7FD0
  c->r[0]=c->r[0]+c->r[3]; // 800D7FD4
  W32(c->r[28]+0x00000014u,c->r[0]); // 800D7FD8
  goto L_800D80D4; // 800D7FDC
L_800D7FE0:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D7FE0
  if (!crb(c,2)) { goto L_800D801C; } // 800D7FE4
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D7FE8
  c->r[27]=0u+0x00000000u; // 800D7FEC
  W32(c->r[3]+0x00000014u,c->r[27]); // 800D7FF0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800D7FF4
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D7FF8
  c->r[3]=c->r[0]|c->r[0]; // 800D7FFC
  c->lr=0x800D8004u; f_800DDACC(c); // 800D8000
  cmps(c,0,(int32_t)c->r[3],0); // 800D8004
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D8008
  if (!crb(c,2)) { goto L_800D809C; } // 800D800C
  W32(c->r[28]+0x00000008u,c->r[27]); // 800D8010
  c->r[3]=0u+0xFFFFFFD8u; // 800D8014
  goto L_800D8184; // 800D8018
L_800D801C:;
  c->r[27]=R32(c->r[3]+0x00000010u); // 800D801C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D8020
  c->r[5]=c->r[0]+c->r[27]; cr0(c,c->r[5]); // 800D8024
  if (!crb(c,2)) { goto L_800D8030; } // 800D8028
  goto L_800D8050; // 800D802C
L_800D8030:;
  c->r[4]=divw((int32_t)c->r[5],(int32_t)c->r[27]); // 800D8030
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[27]); // 800D8034
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800D8038
  if (!crb(c,2)) { goto L_800D8048; } // 800D803C
  c->r[27]=c->r[5]|c->r[5]; // 800D8040
  goto L_800D8050; // 800D8044
L_800D8048:;
  c->r[0]=c->r[4]+0x00000001u; // 800D8048
  c->r[27]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[0]); // 800D804C
L_800D8050:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D8050
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 800D8054
  if (crb(c,2)) { goto L_800D809C; } // 800D8058
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D805C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800D8060
  if (!crb(c,1)) { goto L_800D8070; } // 800D8064
  c->r[3]=0u+0xFFFFFFD9u; // 800D8068
  goto L_800D8184; // 800D806C
L_800D8070:;
  c->r[3]=c->r[6]|c->r[6]; // 800D8070
  c->r[4]=c->r[27]|c->r[27]; // 800D8074
  c->lr=0x800D807Cu; f_800DDAD4(c); // 800D8078
  cmps(c,0,(int32_t)c->r[3],0); // 800D807C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D8080
  if (!crb(c,2)) { goto L_800D8098; } // 800D8084
  c->r[0]=0u+0x00000000u; // 800D8088
  c->r[3]=0u+0xFFFFFFD8u; // 800D808C
  W32(c->r[28]+0x00000014u,c->r[0]); // 800D8090
  goto L_800D8184; // 800D8094
L_800D8098:;
  W32(c->r[28]+0x00000008u,c->r[27]); // 800D8098
L_800D809C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800D809C
  c->r[5]=c->r[1]+0x00000008u; // 800D80A0
  c->r[0]=R32(c->r[28]+0x00000014u); // 800D80A4
  c->r[12]=R32(c->r[28]+0x00000034u); // 800D80A8
  c->r[3]=c->r[3]+c->r[0]; // 800D80AC
  c->r[4]=R32(c->r[28]+0x00000010u); // 800D80B0
  c->r[6]=R32(c->r[28]+0x00000030u); // 800D80B4
  c->ctr=c->r[12]; // 800D80B8
  if (true) { c->lr=0x800D80C0u; dispatch(c,c->ctr); } // 800D80BC
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 800D80C0
  c->r[3]=R32(c->r[28]+0x00000014u); // 800D80C4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D80C8
  c->r[0]=c->r[3]+c->r[0]; // 800D80CC
  W32(c->r[28]+0x00000014u,c->r[0]); // 800D80D0
L_800D80D4:;
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800D80D4
  cmps(c,0,(int32_t)c->r[4],-36); // 800D80D8
  if (!crb(c,2)) { goto L_800D80F0; } // 800D80DC
  c->r[0]=0u+0xFFFFFFDCu; // 800D80E0
  c->r[3]=0u+0xFFFFFFDCu; // 800D80E4
  W32(c->r[28]+0x00000020u,c->r[0]); // 800D80E8
  goto L_800D8184; // 800D80EC
L_800D80F0:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 800D80F0
  c->r[3]=c->r[31]+c->r[30]; // 800D80F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D80F8
  if (!crb(c,1)) { goto L_800D8130; } // 800D80FC
  cmps(c,0,(int32_t)c->r[4],0); // 800D8100
  if (crb(c,2)) { goto L_800D8128; } // 800D8104
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D8108
  cmps(c,0,(int32_t)c->r[0],0); // 800D810C
  if (!crb(c,2)) { goto L_800D8128; } // 800D8110
  c->r[0]=R32(c->r[28]+0x00000028u); // 800D8114
  cmps(c,0,(int32_t)c->r[0],0); // 800D8118
  if (crb(c,2)) { goto L_800D8128; } // 800D811C
  c->r[3]=0u+0xFFFFFFDBu; // 800D8120
  goto L_800D8184; // 800D8124
L_800D8128:;
  c->r[3]=0u+0xFFFFFFFFu; // 800D8128
  goto L_800D8184; // 800D812C
L_800D8130:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D8130
  if (crb(c,2)) { goto L_800D8180; } // 800D8134
  cmps(c,0,(int32_t)c->r[30],1); // 800D8138
  if (!crb(c,2)) { goto L_800D815C; } // 800D813C
  c->r[3]=R32(c->r[28]+0x00000000u); // 800D8140
  c->r[4]=R8(c->r[29]+0x00000000u); // 800D8144
  c->r[0]=R8(c->r[3]+c->r[31]); // 800D8148
  c->r[3]=c->r[0]-c->r[4]; // 800D814C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D8150
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D8154
  goto L_800D8170; // 800D8158
L_800D815C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800D815C
  c->r[4]=c->r[29]|c->r[29]; // 800D8160
  c->r[5]=c->r[30]|c->r[30]; // 800D8164
  c->r[3]=c->r[0]+c->r[31]; // 800D8168
  c->lr=0x800D8170u; f_801101A0(c); // 800D816C
L_800D8170:;
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D8170
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D8174
  c->r[3]=0u-c->r[0]; // 800D8178
  goto L_800D8184; // 800D817C
L_800D8180:;
  c->r[3]=0u+0x00000000u; // 800D8180
L_800D8184:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8184
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D8188
  c->lr=c->r[0]; // 800D818C
  c->r[1]=c->r[1]+0x00000030u; // 800D8190
  return; // 800D8194
}

// fn_800D8198
void f_800D8198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8198
  c->r[0]=c->lr; // 800D819C
  cmps(c,0,(int32_t)c->r[4],0); // 800D81A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D81A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D81A8
  c->r[31]=c->r[3]|c->r[3]; // 800D81AC
  if (!crb(c,2)) { goto L_800D81BC; } // 800D81B0
  c->r[3]=0u+0x00000000u; // 800D81B4
  goto L_800D8360; // 800D81B8
L_800D81BC:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D81BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D81C0
  if (!crb(c,1)) { goto L_800D81D0; } // 800D81C4
  c->r[3]=0u+0xFFFFFFDAu; // 800D81C8
  goto L_800D8360; // 800D81CC
L_800D81D0:;
  c->r[5]=c->r[0]-c->r[4]; cr0(c,c->r[5]); // 800D81D0
  c->r[0]=0u+0x00000000u; // 800D81D4
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D81D8
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D81DC
  if (crb(c,2)) { goto L_800D81F0; } // 800D81E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D81E4
  c->r[4]=c->r[3]+c->r[4]; // 800D81E8
  c->lr=0x800D81F0u; f_8011007C(c); // 800D81EC
L_800D81F0:;
  c->r[30]=R32(c->r[31]+0x00000010u); // 800D81F0
  c->r[5]=R32(c->r[31]+0x00000014u); // 800D81F4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 800D81F8
  if (crb(c,1)) { goto L_800D82B0; } // 800D81FC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D8200
  cmps(c,0,(int32_t)c->r[3],0); // 800D8204
  if (!crb(c,2)) { goto L_800D8238; } // 800D8208
  c->r[3]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800D820C
  c->r[30]=0u+0x00000000u; // 800D8210
  W32(c->r[31]+0x00000014u,c->r[30]); // 800D8214
  W32(c->r[31]+0x00000008u,c->r[3]); // 800D8218
  c->lr=0x800D8220u; f_800DDACC(c); // 800D821C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8220
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D8224
  if (!crb(c,2)) { goto L_800D835C; } // 800D8228
  W32(c->r[31]+0x00000008u,c->r[30]); // 800D822C
  c->r[3]=0u+0xFFFFFFD8u; // 800D8230
  goto L_800D8360; // 800D8234
L_800D8238:;
  c->r[5]=rotl(c->r[30],1)&0xFFFFFFFEu; cr0(c,c->r[5]); // 800D8238
  if (!crb(c,2)) { goto L_800D8244; } // 800D823C
  goto L_800D8264; // 800D8240
L_800D8244:;
  c->r[4]=divw((int32_t)c->r[5],(int32_t)c->r[30]); // 800D8244
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[30]); // 800D8248
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800D824C
  if (!crb(c,2)) { goto L_800D825C; } // 800D8250
  c->r[30]=c->r[5]|c->r[5]; // 800D8254
  goto L_800D8264; // 800D8258
L_800D825C:;
  c->r[0]=c->r[4]+0x00000001u; // 800D825C
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 800D8260
L_800D8264:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D8264
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 800D8268
  if (crb(c,2)) { goto L_800D835C; } // 800D826C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D8270
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800D8274
  if (!crb(c,1)) { goto L_800D8284; } // 800D8278
  c->r[3]=0u+0xFFFFFFD9u; // 800D827C
  goto L_800D8360; // 800D8280
L_800D8284:;
  c->r[4]=c->r[30]|c->r[30]; // 800D8284
  c->lr=0x800D828Cu; f_800DDAD4(c); // 800D8288
  cmps(c,0,(int32_t)c->r[3],0); // 800D828C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D8290
  if (!crb(c,2)) { goto L_800D82A8; } // 800D8294
  c->r[0]=0u+0x00000000u; // 800D8298
  c->r[3]=0u+0xFFFFFFD8u; // 800D829C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D82A0
  goto L_800D8360; // 800D82A4
L_800D82A8:;
  W32(c->r[31]+0x00000008u,c->r[30]); // 800D82A8
  goto L_800D835C; // 800D82AC
L_800D82B0:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800D82B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D82B4
  if (!crb(c,2)) { goto L_800D82E8; } // 800D82B8
  c->r[3]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800D82BC
  c->r[30]=0u+0x00000000u; // 800D82C0
  W32(c->r[31]+0x00000014u,c->r[30]); // 800D82C4
  W32(c->r[31]+0x00000008u,c->r[3]); // 800D82C8
  c->lr=0x800D82D0u; f_800DDACC(c); // 800D82CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D82D0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D82D4
  if (!crb(c,2)) { goto L_800D835C; } // 800D82D8
  W32(c->r[31]+0x00000008u,c->r[30]); // 800D82DC
  c->r[3]=0u+0xFFFFFFD8u; // 800D82E0
  goto L_800D8360; // 800D82E4
L_800D82E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D82E8
  if (!crb(c,2)) { goto L_800D82F4; } // 800D82EC
  goto L_800D8314; // 800D82F0
L_800D82F4:;
  c->r[4]=divw((int32_t)c->r[5],(int32_t)c->r[30]); // 800D82F4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[30]); // 800D82F8
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800D82FC
  if (!crb(c,2)) { goto L_800D830C; } // 800D8300
  c->r[30]=c->r[5]|c->r[5]; // 800D8304
  goto L_800D8314; // 800D8308
L_800D830C:;
  c->r[0]=c->r[4]+0x00000001u; // 800D830C
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 800D8310
L_800D8314:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D8314
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 800D8318
  if (crb(c,2)) { goto L_800D835C; } // 800D831C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D8320
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800D8324
  if (!crb(c,1)) { goto L_800D8334; } // 800D8328
  c->r[3]=0u+0xFFFFFFD9u; // 800D832C
  goto L_800D8360; // 800D8330
L_800D8334:;
  c->r[4]=c->r[30]|c->r[30]; // 800D8334
  c->lr=0x800D833Cu; f_800DDAD4(c); // 800D8338
  cmps(c,0,(int32_t)c->r[3],0); // 800D833C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D8340
  if (!crb(c,2)) { goto L_800D8358; } // 800D8344
  c->r[0]=0u+0x00000000u; // 800D8348
  c->r[3]=0u+0xFFFFFFD8u; // 800D834C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800D8350
  goto L_800D8360; // 800D8354
L_800D8358:;
  W32(c->r[31]+0x00000008u,c->r[30]); // 800D8358
L_800D835C:;
  c->r[3]=0u+0x00000000u; // 800D835C
L_800D8360:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8360
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8364
  c->lr=c->r[0]; // 800D8368
  c->r[1]=c->r[1]+0x00000010u; // 800D836C
  return; // 800D8370
}


#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// CalcWorldMtx__Q34nw4r3g3d7ScnLeafFPCQ34nw4r4math5MTX34PUl
void f_801C5028(Ctx* __restrict c) {
  trace_call(0x801C5028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5028
  c->r[0]=c->lr; // 801C502C
  cmps(c,0,(int32_t)c->r[5],0); // 801C5030
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5034
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5038
  c->r[31]=c->r[3]|c->r[3]; // 801C503C
  if (crb(c,2)) { goto L_801C505C; } // 801C5040
  c->r[6]=R32(c->r[5]+0x00000000u); // 801C5044
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 801C5048
  if (crb(c,2)) { goto L_801C505C; } // 801C504C
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 801C5050
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C5054
  goto L_801C5108; // 801C5058
L_801C505C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C505C
  if (crb(c,2)) { goto L_801C507C; } // 801C5060
  c->r[6]=R32(c->r[5]+0x00000000u); // 801C5064
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 801C5068
  if (crb(c,2)) { goto L_801C507C; } // 801C506C
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 801C5070
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C5074
  goto L_801C50DC; // 801C5078
L_801C507C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C507C
  if (crb(c,2)) { goto L_801C50B4; } // 801C5080
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C5084
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801C5088
  if (crb(c,2)) { goto L_801C50A0; } // 801C508C
  c->r[3]=c->r[4]|c->r[4]; // 801C5090
  c->r[4]=c->r[31]+0x0000003Cu; // 801C5094
  c->lr=0x801C509Cu; f_800EC0C0(c); // 801C5098
  goto L_801C50C0; // 801C509C
L_801C50A0:;
  c->r[3]=c->r[4]|c->r[4]; // 801C50A0
  c->r[4]=c->r[31]+0x0000000Cu; // 801C50A4
  c->r[5]=c->r[31]+0x0000003Cu; // 801C50A8
  c->lr=0x801C50B0u; f_800EC0F4(c); // 801C50AC
  goto L_801C50C0; // 801C50B0
L_801C50B4:;
  c->r[3]=c->r[3]+0x0000000Cu; // 801C50B4
  c->r[4]=c->r[31]+0x0000003Cu; // 801C50B8
  c->lr=0x801C50C0u; f_800EC0C0(c); // 801C50BC
L_801C50C0:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 801C50C0
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 801C50C4
  if (crb(c,2)) { goto L_801C50DC; } // 801C50C8
  c->r[3]=c->r[31]+0x000000B4u; // 801C50CC
  c->r[4]=c->r[31]+0x0000009Cu; // 801C50D0
  c->r[5]=c->r[31]+0x0000003Cu; // 801C50D4
  c->lr=0x801C50DCu; f_801DBF00(c); // 801C50D8
L_801C50DC:;
  c->r[3]=c->r[31]+0x0000003Cu; // 801C50DC
  c->r[5]=c->r[31]+0x000000DCu; // 801C50E0
  c->r[4]=c->r[3]|c->r[3]; // 801C50E4
  c->lr=0x801C50ECu; f_801DB8C0(c); // 801C50E8
  c->r[0]=R32(c->r[31]+0x000000CCu); // 801C50EC
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 801C50F0
  if (crb(c,2)) { goto L_801C5108; } // 801C50F4
  c->r[3]=c->r[31]+0x000000B4u; // 801C50F8
  c->r[4]=c->r[31]+0x0000009Cu; // 801C50FC
  c->r[5]=c->r[31]+0x0000003Cu; // 801C5100
  c->lr=0x801C5108u; f_801DBF00(c); // 801C5104
L_801C5108:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5108
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C510C
  c->lr=c->r[0]; // 801C5110
  c->r[1]=c->r[1]+0x00000010u; // 801C5114
  return; // 801C5118
}

// GetScaleProperty__Q34nw4r3g3d7ScnLeafCFv
void f_801C511C(Ctx* __restrict c) {
  trace_call(0x801C511Cu);
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C511C
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5120
  fcmp(c,0,c->f[2],c->f[1]); // 801C5124
  if (!crb(c,2)) { goto L_801C5154; } // 801C5128
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C512C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5130
  if (!crb(c,2)) { goto L_801C5154; } // 801C5134
  {uint32_t ea=c->r[2]+0xFFFF9CC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5138
  fcmp(c,0,c->f[0],c->f[2]); // 801C513C
  if (!crb(c,2)) { goto L_801C514C; } // 801C5140
  c->r[3]=0u+0x00000000u; // 801C5144
  return; // 801C5148
L_801C514C:;
  c->r[3]=0u+0x00000001u; // 801C514C
  return; // 801C5150
L_801C5154:;
  c->r[3]=0u+0x00000002u; // 801C5154
  return; // 801C5158
}

// DefG3dProcScnLeaf__Q34nw4r3g3d7ScnLeafFUlUlPv
void f_801C515C(Ctx* __restrict c) {
  trace_call(0x801C515Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C515C
  c->r[0]=c->lr; // 801C5160
  cmps(c,0,(int32_t)c->r[4],9); // 801C5164
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5168
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C516C
  c->r[31]=c->r[6]|c->r[6]; // 801C5170
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5174
  c->r[30]=c->r[3]|c->r[3]; // 801C5178
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C517C
  if (!crb(c,0)) { goto L_801C51AC; } // 801C5180
  cmps(c,0,(int32_t)c->r[4],3); // 801C5184
  if (crb(c,2)) { goto L_801C544C; } // 801C5188
  if (!crb(c,0)) { goto L_801C51A0; } // 801C518C
  cmps(c,0,(int32_t)c->r[4],1); // 801C5190
  if (crb(c,2)) { goto L_801C51D8; } // 801C5194
  if (!crb(c,0)) { goto L_801C52C8; } // 801C5198
  goto L_801C544C; // 801C519C
L_801C51A0:;
  cmps(c,0,(int32_t)c->r[4],5); // 801C51A0
  if (!crb(c,0)) { goto L_801C544C; } // 801C51A4
  goto L_801C5358; // 801C51A8
L_801C51AC:;
  c->r[5]=0u+0x00010000u; // 801C51AC
  c->r[0]=c->r[5]+0x00000003u; // 801C51B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C51B4
  if (crb(c,2)) { goto L_801C543C; } // 801C51B8
  if (!crb(c,0)) { goto L_801C544C; } // 801C51BC
  c->r[0]=c->r[5]+0x00000001u; // 801C51C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C51C4
  if (crb(c,2)) { goto L_801C544C; } // 801C51C8
  if (!crb(c,0)) { goto L_801C5448; } // 801C51CC
  goto L_801C544C; // 801C51D0
  goto L_801C544C; // 801C51D4
L_801C51D8:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C51D8
  c->r[6]=c->r[5]|c->r[5]; // 801C51DC
  cmps(c,0,(int32_t)c->r[4],0); // 801C51E0
  if (crb(c,2)) { goto L_801C5220; } // 801C51E4
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C51E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C51EC
  if (crb(c,2)) { goto L_801C5220; } // 801C51F0
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C51F4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C51F8
  if (crb(c,2)) { goto L_801C5220; } // 801C51FC
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C5200
  c->r[3]=c->r[4]|c->r[4]; // 801C5204
  c->r[5]=c->r[30]|c->r[30]; // 801C5208
  c->r[7]=c->r[31]|c->r[31]; // 801C520C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5210
  c->r[4]=0u+0x00000001u; // 801C5214
  c->ctr=c->r[12]; // 801C5218
  if (true) { c->lr=0x801C5220u; dispatch(c,c->ctr); } // 801C521C
L_801C5220:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C5220
  c->r[3]=c->r[30]|c->r[30]; // 801C5224
  c->r[4]=c->r[31]|c->r[31]; // 801C5228
  c->r[5]=c->r[1]+0x00000008u; // 801C522C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801C5230
  c->ctr=c->r[12]; // 801C5234
  if (true) { c->lr=0x801C523Cu; dispatch(c,c->ctr); } // 801C5238
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801C523C
  c->r[6]=R32(c->r[1]+0x00000008u); // 801C5240
  cmps(c,0,(int32_t)c->r[3],0); // 801C5244
  if (crb(c,2)) { goto L_801C5280; } // 801C5248
  c->r[0]=R16(c->r[30]+0x000000DAu); // 801C524C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C5250
  if (crb(c,2)) { goto L_801C5280; } // 801C5254
  c->r[0]=R8(c->r[30]+0x000000D8u); // 801C5258
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C525C
  if (crb(c,2)) { goto L_801C5280; } // 801C5260
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5264
  c->r[5]=c->r[30]|c->r[30]; // 801C5268
  c->r[7]=c->r[31]|c->r[31]; // 801C526C
  c->r[4]=0u+0x00000002u; // 801C5270
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5274
  c->ctr=c->r[12]; // 801C5278
  if (true) { c->lr=0x801C5280u; dispatch(c,c->ctr); } // 801C527C
L_801C5280:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801C5280
  c->r[6]=R32(c->r[1]+0x00000008u); // 801C5284
  cmps(c,0,(int32_t)c->r[3],0); // 801C5288
  if (crb(c,2)) { goto L_801C544C; } // 801C528C
  c->r[0]=R16(c->r[30]+0x000000DAu); // 801C5290
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C5294
  if (crb(c,2)) { goto L_801C544C; } // 801C5298
  c->r[0]=R8(c->r[30]+0x000000D8u); // 801C529C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C52A0
  if (crb(c,2)) { goto L_801C544C; } // 801C52A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C52A8
  c->r[5]=c->r[30]|c->r[30]; // 801C52AC
  c->r[7]=c->r[31]|c->r[31]; // 801C52B0
  c->r[4]=0u+0x00000004u; // 801C52B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C52B8
  c->ctr=c->r[12]; // 801C52BC
  if (true) { c->lr=0x801C52C4u; dispatch(c,c->ctr); } // 801C52C0
  goto L_801C544C; // 801C52C4
L_801C52C8:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C52C8
  c->r[6]=c->r[5]|c->r[5]; // 801C52CC
  cmps(c,0,(int32_t)c->r[4],0); // 801C52D0
  if (crb(c,2)) { goto L_801C5310; } // 801C52D4
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C52D8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C52DC
  if (crb(c,2)) { goto L_801C5310; } // 801C52E0
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C52E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C52E8
  if (crb(c,2)) { goto L_801C5310; } // 801C52EC
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C52F0
  c->r[3]=c->r[4]|c->r[4]; // 801C52F4
  c->r[5]=c->r[30]|c->r[30]; // 801C52F8
  c->r[7]=c->r[31]|c->r[31]; // 801C52FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C5300
  c->r[4]=0u+0x00000001u; // 801C5304
  c->ctr=c->r[12]; // 801C5308
  if (true) { c->lr=0x801C5310u; dispatch(c,c->ctr); } // 801C530C
L_801C5310:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801C5310
  c->r[6]=R32(c->r[1]+0x00000008u); // 801C5314
  cmps(c,0,(int32_t)c->r[3],0); // 801C5318
  if (crb(c,2)) { goto L_801C544C; } // 801C531C
  c->r[0]=R16(c->r[30]+0x000000DAu); // 801C5320
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C5324
  if (crb(c,2)) { goto L_801C544C; } // 801C5328
  c->r[0]=R8(c->r[30]+0x000000D8u); // 801C532C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5330
  if (crb(c,2)) { goto L_801C544C; } // 801C5334
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5338
  c->r[5]=c->r[30]|c->r[30]; // 801C533C
  c->r[7]=c->r[31]|c->r[31]; // 801C5340
  c->r[4]=0u+0x00000004u; // 801C5344
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C5348
  c->ctr=c->r[12]; // 801C534C
  if (true) { c->lr=0x801C5354u; dispatch(c,c->ctr); } // 801C5350
  goto L_801C544C; // 801C5354
L_801C5358:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C5358
  c->r[6]=c->r[5]|c->r[5]; // 801C535C
  cmps(c,0,(int32_t)c->r[4],0); // 801C5360
  if (crb(c,2)) { goto L_801C53A0; } // 801C5364
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C5368
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C536C
  if (crb(c,2)) { goto L_801C53A0; } // 801C5370
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C5374
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C5378
  if (crb(c,2)) { goto L_801C53A0; } // 801C537C
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C5380
  c->r[3]=c->r[4]|c->r[4]; // 801C5384
  c->r[5]=c->r[30]|c->r[30]; // 801C5388
  c->r[7]=c->r[31]|c->r[31]; // 801C538C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C5390
  c->r[4]=0u+0x00000001u; // 801C5394
  c->ctr=c->r[12]; // 801C5398
  if (true) { c->lr=0x801C53A0u; dispatch(c,c->ctr); } // 801C539C
L_801C53A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C53A0
  c->r[4]=c->r[30]+0x0000003Cu; // 801C53A4
  c->r[5]=c->r[30]+0x0000006Cu; // 801C53A8
  c->lr=0x801C53B0u; f_800EC0F4(c); // 801C53AC
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801C53B0
  c->r[6]=R32(c->r[1]+0x00000008u); // 801C53B4
  cmps(c,0,(int32_t)c->r[3],0); // 801C53B8
  if (crb(c,2)) { goto L_801C53F4; } // 801C53BC
  c->r[0]=R16(c->r[30]+0x000000DAu); // 801C53C0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C53C4
  if (crb(c,2)) { goto L_801C53F4; } // 801C53C8
  c->r[0]=R8(c->r[30]+0x000000D8u); // 801C53CC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C53D0
  if (crb(c,2)) { goto L_801C53F4; } // 801C53D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C53D8
  c->r[5]=c->r[30]|c->r[30]; // 801C53DC
  c->r[7]=c->r[31]|c->r[31]; // 801C53E0
  c->r[4]=0u+0x00000002u; // 801C53E4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C53E8
  c->ctr=c->r[12]; // 801C53EC
  if (true) { c->lr=0x801C53F4u; dispatch(c,c->ctr); } // 801C53F0
L_801C53F4:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801C53F4
  c->r[6]=R32(c->r[1]+0x00000008u); // 801C53F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C53FC
  if (crb(c,2)) { goto L_801C544C; } // 801C5400
  c->r[0]=R16(c->r[30]+0x000000DAu); // 801C5404
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5408
  if (crb(c,2)) { goto L_801C544C; } // 801C540C
  c->r[0]=R8(c->r[30]+0x000000D8u); // 801C5410
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5414
  if (crb(c,2)) { goto L_801C544C; } // 801C5418
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C541C
  c->r[5]=c->r[30]|c->r[30]; // 801C5420
  c->r[7]=c->r[31]|c->r[31]; // 801C5424
  c->r[4]=0u+0x00000004u; // 801C5428
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C542C
  c->ctr=c->r[12]; // 801C5430
  if (true) { c->lr=0x801C5438u; dispatch(c,c->ctr); } // 801C5434
  goto L_801C544C; // 801C5438
L_801C543C:;
  c->r[0]=0u+0x00000000u; // 801C543C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C5440
  goto L_801C544C; // 801C5444
L_801C5448:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 801C5448
L_801C544C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C544C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5450
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5454
  c->lr=c->r[0]; // 801C5458
  c->r[1]=c->r[1]+0x00000020u; // 801C545C
  return; // 801C5460
}

// Construct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPUlUl
void f_801C5464(Ctx* __restrict c) {
  trace_call(0x801C5464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5464
  c->r[0]=c->lr; // 801C5468
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C546C
  cmps(c,0,(int32_t)c->r[4],0); // 801C5470
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5474
  c->r[0]=c->r[6]+0x000000EBu; // 801C5478
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801C547C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5480
  c->r[31]=0u+0x00000000u; // 801C5484
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5488
  c->r[30]=c->r[5]|c->r[5]; // 801C548C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C5490
  c->r[29]=c->r[3]|c->r[3]; // 801C5494
  if (crb(c,2)) { goto L_801C54A0; } // 801C5498
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C549C
L_801C54A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C54A0
  if (crb(c,2)) { goto L_801C5500; } // 801C54A4
  c->r[3]=c->r[29]|c->r[29]; // 801C54A8
  c->r[4]=c->r[0]|c->r[0]; // 801C54AC
  c->lr=0x801C54B4u; f_80128068(c); // 801C54B0
  cmps(c,0,(int32_t)c->r[3],0); // 801C54B4
  c->r[31]=c->r[3]|c->r[3]; // 801C54B8
  if (!crb(c,2)) { goto L_801C54C8; } // 801C54BC
  c->r[3]=0u+0x00000000u; // 801C54C0
  goto L_801C5504; // 801C54C4
L_801C54C8:;
  if (crb(c,2)) { goto L_801C5500; } // 801C54C8
  c->r[4]=c->r[29]|c->r[29]; // 801C54CC
  c->lr=0x801C54D4u; f_801C49B4(c); // 801C54D0
  c->r[4]=0u+0x802A0000u; // 801C54D4
  c->r[3]=c->r[31]+0x000000E8u; // 801C54D8
  c->r[4]=c->r[4]+0x00001490u; // 801C54DC
  c->r[0]=0u+0x00000000u; // 801C54E0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801C54E4
  W32(c->r[31]+0x000000DCu,c->r[3]); // 801C54E8
  W32(c->r[31]+0x000000E0u,c->r[30]); // 801C54EC
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801C54F0
  c->r[0]=R32(c->r[31]+0x000000CCu); // 801C54F4
  c->r[0]=c->r[0]|0x60000000u; // 801C54F8
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801C54FC
L_801C5500:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5500
L_801C5504:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5504
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5508
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C550C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5510
  c->lr=c->r[0]; // 801C5514
  c->r[1]=c->r[1]+0x00000020u; // 801C5518
  return; // 801C551C
}

// ForEach__Q34nw4r3g3d8ScnGroupFPFPQ34nw4r3g3d6ScnObjPv_Q44nw4r3g3d6ScnObj13ForEachResultPvb
void f_801C5520(Ctx* __restrict c) {
  trace_call(0x801C5520u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5520
  c->r[0]=c->lr; // 801C5524
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5528
  c->r[11]=c->r[1]+0x00000020u; // 801C552C
  c->lr=0x801C5534u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C5530
  cmps(c,0,(int32_t)c->r[6],0); // 801C5534
  c->r[27]=c->r[3]|c->r[3]; // 801C5538
  c->r[28]=c->r[4]|c->r[4]; // 801C553C
  c->r[29]=c->r[5]|c->r[5]; // 801C5540
  if (crb(c,2)) { goto L_801C55C0; } // 801C5544
  c->r[30]=0u+0x00000000u; // 801C5548
  c->r[31]=0u+0x00000000u; // 801C554C
  goto L_801C5590; // 801C5550
L_801C5554:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 801C5554
  c->r[4]=c->r[28]|c->r[28]; // 801C5558
  c->r[5]=c->r[29]|c->r[29]; // 801C555C
  c->r[6]=0u+0x00000000u; // 801C5560
  c->r[3]=R32(c->r[3]+c->r[31]); // 801C5564
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5568
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801C556C
  c->ctr=c->r[12]; // 801C5570
  if (true) { c->lr=0x801C5578u; dispatch(c,c->ctr); } // 801C5574
  cmps(c,0,(int32_t)c->r[3],1); // 801C5578
  if (!crb(c,2)) { goto L_801C5588; } // 801C557C
  c->r[3]=0u+0x00000001u; // 801C5580
  goto L_801C5640; // 801C5584
L_801C5588:;
  c->r[31]=c->r[31]+0x00000004u; // 801C5588
  c->r[30]=c->r[30]+0x00000001u; // 801C558C
L_801C5590:;
  c->r[0]=R32(c->r[27]+0x000000E4u); // 801C5590
  cmpu(c,0,c->r[30],c->r[0]); // 801C5594
  if (crb(c,0)) { IRQCHK(c); goto L_801C5554; } // 801C5598
  c->r[12]=c->r[28]|c->r[28]; // 801C559C
  c->r[3]=c->r[27]|c->r[27]; // 801C55A0
  c->r[4]=c->r[29]|c->r[29]; // 801C55A4
  c->ctr=c->r[12]; // 801C55A8
  if (true) { c->lr=0x801C55B0u; dispatch(c,c->ctr); } // 801C55AC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C55B0
  c->r[0]=cntlz(c->r[0]); // 801C55B4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C55B8
  goto L_801C5640; // 801C55BC
L_801C55C0:;
  c->r[12]=c->r[28]|c->r[28]; // 801C55C0
  c->r[4]=c->r[29]|c->r[29]; // 801C55C4
  c->ctr=c->r[12]; // 801C55C8
  if (true) { c->lr=0x801C55D0u; dispatch(c,c->ctr); } // 801C55CC
  cmps(c,0,(int32_t)c->r[3],0); // 801C55D0
  if (!crb(c,2)) { goto L_801C5634; } // 801C55D4
  c->r[30]=0u+0x00000000u; // 801C55D8
  c->r[31]=0u+0x00000000u; // 801C55DC
  goto L_801C5620; // 801C55E0
L_801C55E4:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 801C55E4
  c->r[4]=c->r[28]|c->r[28]; // 801C55E8
  c->r[5]=c->r[29]|c->r[29]; // 801C55EC
  c->r[6]=0u+0x00000000u; // 801C55F0
  c->r[3]=R32(c->r[3]+c->r[31]); // 801C55F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C55F8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801C55FC
  c->ctr=c->r[12]; // 801C5600
  if (true) { c->lr=0x801C5608u; dispatch(c,c->ctr); } // 801C5604
  cmps(c,0,(int32_t)c->r[3],1); // 801C5608
  if (!crb(c,2)) { goto L_801C5618; } // 801C560C
  c->r[3]=0u+0x00000001u; // 801C5610
  goto L_801C5640; // 801C5614
L_801C5618:;
  c->r[31]=c->r[31]+0x00000004u; // 801C5618
  c->r[30]=c->r[30]+0x00000001u; // 801C561C
L_801C5620:;
  c->r[0]=R32(c->r[27]+0x000000E4u); // 801C5620
  cmpu(c,0,c->r[30],c->r[0]); // 801C5624
  if (crb(c,0)) { IRQCHK(c); goto L_801C55E4; } // 801C5628
  c->r[3]=0u+0x00000000u; // 801C562C
  goto L_801C5640; // 801C5630
L_801C5634:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C5634
  c->r[0]=cntlz(c->r[0]); // 801C5638
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C563C
L_801C5640:;
  c->r[11]=c->r[1]+0x00000020u; // 801C5640
  c->lr=0x801C5648u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C5644
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5648
  c->lr=c->r[0]; // 801C564C
  c->r[1]=c->r[1]+0x00000020u; // 801C5650
  return; // 801C5654
}

// ScnGroup_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d8ScnGroupFUlPQ34nw4r3g3d13IScnObjGather
void f_801C5658(Ctx* __restrict c) {
  trace_call(0x801C5658u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5658
  c->r[0]=c->lr; // 801C565C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5660
  c->r[11]=c->r[1]+0x00000020u; // 801C5664
  c->lr=0x801C566Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C5668
  c->r[31]=c->r[5]|c->r[5]; // 801C566C
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C5670
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C5674
  c->r[30]=c->r[4]|c->r[4]; // 801C5678
  c->r[4]=rotl(c->r[0],0)&0x20000000u; // 801C567C
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 801C5680
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5684
  c->r[29]=c->r[3]|c->r[3]; // 801C5688
  c->r[5]=cntlz(c->r[4]); // 801C568C
  c->r[0]=cntlz(c->r[0]); // 801C5690
  c->r[3]=c->r[31]|c->r[31]; // 801C5694
  c->r[4]=c->r[29]|c->r[29]; // 801C5698
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 801C569C
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C56A0
  c->ctr=c->r[12]; // 801C56A4
  if (true) { c->lr=0x801C56ACu; dispatch(c,c->ctr); } // 801C56A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C56AC
  if (!crb(c,2)) { goto L_801C56FC; } // 801C56B0
  c->r[27]=0u+0x00000000u; // 801C56B4
  c->r[28]=0u+0x00000000u; // 801C56B8
  goto L_801C56EC; // 801C56BC
L_801C56C0:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801C56C0
  c->r[5]=c->r[30]|c->r[30]; // 801C56C4
  c->r[6]=c->r[31]|c->r[31]; // 801C56C8
  c->r[4]=0u+0x00000005u; // 801C56CC
  c->r[3]=R32(c->r[3]+c->r[28]); // 801C56D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C56D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C56D8
  c->ctr=c->r[12]; // 801C56DC
  if (true) { c->lr=0x801C56E4u; dispatch(c,c->ctr); } // 801C56E0
  c->r[28]=c->r[28]+0x00000004u; // 801C56E4
  c->r[27]=c->r[27]+0x00000001u; // 801C56E8
L_801C56EC:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 801C56EC
  cmpu(c,0,c->r[27],c->r[0]); // 801C56F0
  if (crb(c,0)) { IRQCHK(c); goto L_801C56C0; } // 801C56F4
  goto L_801C5758; // 801C56F8
L_801C56FC:;
  cmps(c,0,(int32_t)c->r[3],1); // 801C56FC
  if (!crb(c,2)) { goto L_801C5758; } // 801C5700
  c->r[27]=R32(c->r[13]+0xFFFF9D68u); // 801C5704
  c->r[0]=0u+0x00000000u; // 801C5708
  c->r[26]=0u+0x00000000u; // 801C570C
  c->r[28]=0u+0x00000000u; // 801C5710
  W32(c->r[13]+0xFFFF9D68u,c->r[0]); // 801C5714
  goto L_801C5748; // 801C5718
L_801C571C:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801C571C
  c->r[5]=c->r[30]|c->r[30]; // 801C5720
  c->r[6]=c->r[31]|c->r[31]; // 801C5724
  c->r[4]=0u+0x00000005u; // 801C5728
  c->r[3]=R32(c->r[3]+c->r[28]); // 801C572C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5730
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5734
  c->ctr=c->r[12]; // 801C5738
  if (true) { c->lr=0x801C5740u; dispatch(c,c->ctr); } // 801C573C
  c->r[28]=c->r[28]+0x00000004u; // 801C5740
  c->r[26]=c->r[26]+0x00000001u; // 801C5744
L_801C5748:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 801C5748
  cmpu(c,0,c->r[26],c->r[0]); // 801C574C
  if (crb(c,0)) { IRQCHK(c); goto L_801C571C; } // 801C5750
  W32(c->r[13]+0xFFFF9D68u,c->r[27]); // 801C5754
L_801C5758:;
  c->r[11]=c->r[1]+0x00000020u; // 801C5758
  c->lr=0x801C5760u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C575C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5760
  c->lr=c->r[0]; // 801C5764
  c->r[1]=c->r[1]+0x00000020u; // 801C5768
  return; // 801C576C
}

// G3dProc__Q34nw4r3g3d8ScnGroupFUlUlPv
void f_801C5770(Ctx* __restrict c) {
  trace_call(0x801C5770u);
  cmpu(c,0,c->r[4],0x00000009u); // 801C5770
  if (!crb(c,0)) { goto L_801C5798; } // 801C5774
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801C5778
  c->r[8]=0u+0x00000001u; // 801C577C
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C5780
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 801C5784
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 801C5788
  if (crb(c,2)) { goto L_801C5798; } // 801C578C
  c->r[0]=0u+0x00000001u; // 801C5790
  goto L_801C579C; // 801C5794
L_801C5798:;
  c->r[0]=0u+0x00000000u; // 801C5798
L_801C579C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C579C
  if (!crb(c,2)) return; // 801C57A0
  f_801C57AC(c); return; // 801C57A4
  return; // 801C57A8
}

// DefG3dProcScnGroup__Q34nw4r3g3d8ScnGroupFUlUlPv
void f_801C57AC(Ctx* __restrict c) {
  trace_call(0x801C57ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C57AC
  c->r[0]=c->lr; // 801C57B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C57B4
  c->r[11]=c->r[1]+0x00000030u; // 801C57B8
  c->lr=0x801C57C0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C57BC
  cmps(c,0,(int32_t)c->r[4],8); // 801C57C0
  c->r[29]=c->r[3]|c->r[3]; // 801C57C4
  c->r[26]=c->r[4]|c->r[4]; // 801C57C8
  c->r[30]=c->r[5]|c->r[5]; // 801C57CC
  c->r[31]=c->r[6]|c->r[6]; // 801C57D0
  if (crb(c,2)) { goto L_801C5BAC; } // 801C57D4
  if (!crb(c,0)) { goto L_801C5808; } // 801C57D8
  cmps(c,0,(int32_t)c->r[4],3); // 801C57DC
  if (crb(c,2)) { goto L_801C5BAC; } // 801C57E0
  if (!crb(c,0)) { goto L_801C57F8; } // 801C57E4
  cmps(c,0,(int32_t)c->r[4],1); // 801C57E8
  if (crb(c,2)) { goto L_801C5844; } // 801C57EC
  if (!crb(c,0)) { goto L_801C5980; } // 801C57F0
  goto L_801C5BAC; // 801C57F4
L_801C57F8:;
  cmps(c,0,(int32_t)c->r[4],5); // 801C57F8
  if (crb(c,2)) { goto L_801C5834; } // 801C57FC
  if (!crb(c,0)) { goto L_801C5BF0; } // 801C5800
  goto L_801C5A54; // 801C5804
L_801C5808:;
  c->r[5]=0u+0x00010000u; // 801C5808
  c->r[0]=c->r[5]+0x00000003u; // 801C580C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C5810
  if (crb(c,2)) { goto L_801C5B98; } // 801C5814
  if (!crb(c,0)) { goto L_801C5BAC; } // 801C5818
  c->r[0]=c->r[5]+0x00000001u; // 801C581C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C5820
  if (crb(c,2)) { goto L_801C5B80; } // 801C5824
  if (!crb(c,0)) { goto L_801C5BA4; } // 801C5828
  goto L_801C5BAC; // 801C582C
  goto L_801C5BAC; // 801C5830
L_801C5834:;
  c->r[4]=c->r[30]|c->r[30]; // 801C5834
  c->r[5]=c->r[31]|c->r[31]; // 801C5838
  c->lr=0x801C5840u; f_801C5658(c); // 801C583C
  goto L_801C5BF0; // 801C5840
L_801C5844:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C5844
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C5848
  cmps(c,0,(int32_t)c->r[4],0); // 801C584C
  if (crb(c,2)) { goto L_801C5890; } // 801C5850
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C5854
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C5858
  if (crb(c,2)) { goto L_801C5890; } // 801C585C
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C5860
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C5864
  if (crb(c,2)) { goto L_801C5890; } // 801C5868
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C586C
  c->r[3]=c->r[4]|c->r[4]; // 801C5870
  c->r[5]=c->r[29]|c->r[29]; // 801C5874
  c->r[6]=c->r[30]|c->r[30]; // 801C5878
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C587C
  c->r[7]=c->r[31]|c->r[31]; // 801C5880
  c->r[4]=0u+0x00000001u; // 801C5884
  c->ctr=c->r[12]; // 801C5888
  if (true) { c->lr=0x801C5890u; dispatch(c,c->ctr); } // 801C588C
L_801C5890:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C5890
  c->r[3]=c->r[29]|c->r[29]; // 801C5894
  c->r[4]=c->r[31]|c->r[31]; // 801C5898
  c->r[5]=c->r[1]+0x00000008u; // 801C589C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801C58A0
  c->ctr=c->r[12]; // 801C58A4
  if (true) { c->lr=0x801C58ACu; dispatch(c,c->ctr); } // 801C58A8
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C58AC
  c->r[6]=R32(c->r[1]+0x00000008u); // 801C58B0
  cmps(c,0,(int32_t)c->r[3],0); // 801C58B4
  if (crb(c,2)) { goto L_801C58F0; } // 801C58B8
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C58BC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C58C0
  if (crb(c,2)) { goto L_801C58F0; } // 801C58C4
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C58C8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C58CC
  if (crb(c,2)) { goto L_801C58F0; } // 801C58D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C58D4
  c->r[5]=c->r[29]|c->r[29]; // 801C58D8
  c->r[7]=c->r[31]|c->r[31]; // 801C58DC
  c->r[4]=0u+0x00000002u; // 801C58E0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C58E4
  c->ctr=c->r[12]; // 801C58E8
  if (true) { c->lr=0x801C58F0u; dispatch(c,c->ctr); } // 801C58EC
L_801C58F0:;
  c->r[28]=c->r[29]+0x0000003Cu; // 801C58F0
  c->r[30]=0u+0x00000000u; // 801C58F4
  c->r[27]=0u+0x00000000u; // 801C58F8
  goto L_801C592C; // 801C58FC
L_801C5900:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801C5900
  c->r[6]=c->r[28]|c->r[28]; // 801C5904
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C5908
  c->r[4]=0u+0x00000001u; // 801C590C
  c->r[3]=R32(c->r[3]+c->r[27]); // 801C5910
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5914
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5918
  c->ctr=c->r[12]; // 801C591C
  if (true) { c->lr=0x801C5924u; dispatch(c,c->ctr); } // 801C5920
  c->r[27]=c->r[27]+0x00000004u; // 801C5924
  c->r[30]=c->r[30]+0x00000001u; // 801C5928
L_801C592C:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 801C592C
  cmpu(c,0,c->r[30],c->r[0]); // 801C5930
  if (crb(c,0)) { IRQCHK(c); goto L_801C5900; } // 801C5934
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C5938
  c->r[6]=R32(c->r[1]+0x00000008u); // 801C593C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5940
  if (crb(c,2)) { goto L_801C5BF0; } // 801C5944
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C5948
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C594C
  if (crb(c,2)) { goto L_801C5BF0; } // 801C5950
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C5954
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5958
  if (crb(c,2)) { goto L_801C5BF0; } // 801C595C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5960
  c->r[5]=c->r[29]|c->r[29]; // 801C5964
  c->r[7]=c->r[31]|c->r[31]; // 801C5968
  c->r[4]=0u+0x00000004u; // 801C596C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5970
  c->ctr=c->r[12]; // 801C5974
  if (true) { c->lr=0x801C597Cu; dispatch(c,c->ctr); } // 801C5978
  goto L_801C5BF0; // 801C597C
L_801C5980:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C5980
  cmps(c,0,(int32_t)c->r[4],0); // 801C5984
  if (crb(c,2)) { goto L_801C59C8; } // 801C5988
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C598C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C5990
  if (crb(c,2)) { goto L_801C59C8; } // 801C5994
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C5998
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C599C
  if (crb(c,2)) { goto L_801C59C8; } // 801C59A0
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C59A4
  c->r[3]=c->r[4]|c->r[4]; // 801C59A8
  c->r[5]=c->r[29]|c->r[29]; // 801C59AC
  c->r[6]=c->r[30]|c->r[30]; // 801C59B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C59B4
  c->r[7]=c->r[31]|c->r[31]; // 801C59B8
  c->r[4]=0u+0x00000001u; // 801C59BC
  c->ctr=c->r[12]; // 801C59C0
  if (true) { c->lr=0x801C59C8u; dispatch(c,c->ctr); } // 801C59C4
L_801C59C8:;
  c->r[28]=0u+0x00000000u; // 801C59C8
  c->r[27]=0u+0x00000000u; // 801C59CC
  goto L_801C5A00; // 801C59D0
L_801C59D4:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801C59D4
  c->r[5]=c->r[30]|c->r[30]; // 801C59D8
  c->r[6]=c->r[31]|c->r[31]; // 801C59DC
  c->r[4]=0u+0x00000002u; // 801C59E0
  c->r[3]=R32(c->r[3]+c->r[27]); // 801C59E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C59E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C59EC
  c->ctr=c->r[12]; // 801C59F0
  if (true) { c->lr=0x801C59F8u; dispatch(c,c->ctr); } // 801C59F4
  c->r[27]=c->r[27]+0x00000004u; // 801C59F8
  c->r[28]=c->r[28]+0x00000001u; // 801C59FC
L_801C5A00:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 801C5A00
  cmpu(c,0,c->r[28],c->r[0]); // 801C5A04
  if (crb(c,0)) { IRQCHK(c); goto L_801C59D4; } // 801C5A08
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C5A0C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5A10
  if (crb(c,2)) { goto L_801C5BF0; } // 801C5A14
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C5A18
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C5A1C
  if (crb(c,2)) { goto L_801C5BF0; } // 801C5A20
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C5A24
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5A28
  if (crb(c,2)) { goto L_801C5BF0; } // 801C5A2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5A30
  c->r[5]=c->r[29]|c->r[29]; // 801C5A34
  c->r[6]=c->r[30]|c->r[30]; // 801C5A38
  c->r[7]=c->r[31]|c->r[31]; // 801C5A3C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C5A40
  c->r[4]=0u+0x00000004u; // 801C5A44
  c->ctr=c->r[12]; // 801C5A48
  if (true) { c->lr=0x801C5A50u; dispatch(c,c->ctr); } // 801C5A4C
  goto L_801C5BF0; // 801C5A50
L_801C5A54:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C5A54
  cmps(c,0,(int32_t)c->r[4],0); // 801C5A58
  if (crb(c,2)) { goto L_801C5A9C; } // 801C5A5C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C5A60
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5A64
  if (crb(c,2)) { goto L_801C5A9C; } // 801C5A68
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C5A6C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C5A70
  if (crb(c,2)) { goto L_801C5A9C; } // 801C5A74
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C5A78
  c->r[3]=c->r[4]|c->r[4]; // 801C5A7C
  c->r[5]=c->r[29]|c->r[29]; // 801C5A80
  c->r[6]=c->r[30]|c->r[30]; // 801C5A84
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C5A88
  c->r[7]=c->r[31]|c->r[31]; // 801C5A8C
  c->r[4]=0u+0x00000001u; // 801C5A90
  c->ctr=c->r[12]; // 801C5A94
  if (true) { c->lr=0x801C5A9Cu; dispatch(c,c->ctr); } // 801C5A98
L_801C5A9C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5A9C
  c->r[4]=c->r[29]+0x0000003Cu; // 801C5AA0
  c->r[5]=c->r[29]+0x0000006Cu; // 801C5AA4
  c->lr=0x801C5AACu; f_800EC0F4(c); // 801C5AA8
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C5AAC
  cmps(c,0,(int32_t)c->r[3],0); // 801C5AB0
  if (crb(c,2)) { goto L_801C5AF0; } // 801C5AB4
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C5AB8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5ABC
  if (crb(c,2)) { goto L_801C5AF0; } // 801C5AC0
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C5AC4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C5AC8
  if (crb(c,2)) { goto L_801C5AF0; } // 801C5ACC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5AD0
  c->r[5]=c->r[29]|c->r[29]; // 801C5AD4
  c->r[6]=c->r[30]|c->r[30]; // 801C5AD8
  c->r[7]=c->r[31]|c->r[31]; // 801C5ADC
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C5AE0
  c->r[4]=0u+0x00000002u; // 801C5AE4
  c->ctr=c->r[12]; // 801C5AE8
  if (true) { c->lr=0x801C5AF0u; dispatch(c,c->ctr); } // 801C5AEC
L_801C5AF0:;
  c->r[28]=0u+0x00000000u; // 801C5AF0
  c->r[27]=0u+0x00000000u; // 801C5AF4
  goto L_801C5B28; // 801C5AF8
L_801C5AFC:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801C5AFC
  c->r[5]=c->r[30]|c->r[30]; // 801C5B00
  c->r[6]=c->r[31]|c->r[31]; // 801C5B04
  c->r[4]=0u+0x00000004u; // 801C5B08
  c->r[3]=R32(c->r[3]+c->r[27]); // 801C5B0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5B10
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5B14
  c->ctr=c->r[12]; // 801C5B18
  if (true) { c->lr=0x801C5B20u; dispatch(c,c->ctr); } // 801C5B1C
  c->r[27]=c->r[27]+0x00000004u; // 801C5B20
  c->r[28]=c->r[28]+0x00000001u; // 801C5B24
L_801C5B28:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 801C5B28
  cmpu(c,0,c->r[28],c->r[0]); // 801C5B2C
  if (crb(c,0)) { IRQCHK(c); goto L_801C5AFC; } // 801C5B30
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C5B34
  cmps(c,0,(int32_t)c->r[3],0); // 801C5B38
  if (crb(c,2)) { goto L_801C5BF0; } // 801C5B3C
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C5B40
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5B44
  if (crb(c,2)) { goto L_801C5BF0; } // 801C5B48
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C5B4C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C5B50
  if (crb(c,2)) { goto L_801C5BF0; } // 801C5B54
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5B58
  c->r[5]=c->r[29]|c->r[29]; // 801C5B5C
  c->r[6]=c->r[30]|c->r[30]; // 801C5B60
  c->r[7]=c->r[31]|c->r[31]; // 801C5B64
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C5B68
  c->r[4]=0u+0x00000004u; // 801C5B6C
  c->ctr=c->r[12]; // 801C5B70
  if (true) { c->lr=0x801C5B78u; dispatch(c,c->ctr); } // 801C5B74
  goto L_801C5BF0; // 801C5B78
  goto L_801C5BF0; // 801C5B7C
L_801C5B80:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5B80
  c->r[4]=c->r[31]|c->r[31]; // 801C5B84
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C5B88
  c->ctr=c->r[12]; // 801C5B8C
  if (true) { c->lr=0x801C5B94u; dispatch(c,c->ctr); } // 801C5B90
  goto L_801C5BF0; // 801C5B94
L_801C5B98:;
  c->r[0]=0u+0x00000000u; // 801C5B98
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C5B9C
  goto L_801C5BF0; // 801C5BA0
L_801C5BA4:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 801C5BA4
  goto L_801C5BF0; // 801C5BA8
L_801C5BAC:;
  c->r[27]=0u+0x00000000u; // 801C5BAC
  c->r[28]=0u+0x00000000u; // 801C5BB0
  goto L_801C5BE4; // 801C5BB4
L_801C5BB8:;
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801C5BB8
  c->r[4]=c->r[26]|c->r[26]; // 801C5BBC
  c->r[5]=c->r[30]|c->r[30]; // 801C5BC0
  c->r[6]=c->r[31]|c->r[31]; // 801C5BC4
  c->r[3]=R32(c->r[3]+c->r[28]); // 801C5BC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5BCC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5BD0
  c->ctr=c->r[12]; // 801C5BD4
  if (true) { c->lr=0x801C5BDCu; dispatch(c,c->ctr); } // 801C5BD8
  c->r[28]=c->r[28]+0x00000004u; // 801C5BDC
  c->r[27]=c->r[27]+0x00000001u; // 801C5BE0
L_801C5BE4:;
  c->r[0]=R32(c->r[29]+0x000000E4u); // 801C5BE4
  cmpu(c,0,c->r[27],c->r[0]); // 801C5BE8
  if (crb(c,0)) { IRQCHK(c); goto L_801C5BB8; } // 801C5BEC
L_801C5BF0:;
  c->r[11]=c->r[1]+0x00000030u; // 801C5BF0
  c->lr=0x801C5BF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C5BF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C5BF8
  c->lr=c->r[0]; // 801C5BFC
  c->r[1]=c->r[1]+0x00000030u; // 801C5C00
  return; // 801C5C04
}

// Insert__Q34nw4r3g3d8ScnGroupFUlPQ34nw4r3g3d6ScnObj
void f_801C5C08(Ctx* __restrict c) {
  trace_call(0x801C5C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5C08
  c->r[0]=c->lr; // 801C5C0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5C10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5C14
  c->r[31]=c->r[3]|c->r[3]; // 801C5C18
  c->r[6]=R32(c->r[3]+0x000000E4u); // 801C5C1C
  cmpu(c,0,c->r[4],c->r[6]); // 801C5C20
  if (crb(c,1)) { goto L_801C5D7C; } // 801C5C24
  c->r[0]=R32(c->r[3]+0x000000E0u); // 801C5C28
  cmpu(c,0,c->r[6],c->r[0]); // 801C5C2C
  if (!crb(c,0)) { goto L_801C5D7C; } // 801C5C30
  cmps(c,0,(int32_t)c->r[5],0); // 801C5C34
  if (crb(c,2)) { goto L_801C5D7C; } // 801C5C38
  c->r[0]=R32(c->r[5]+0x00000004u); // 801C5C3C
  cmps(c,0,(int32_t)c->r[0],0); // 801C5C40
  if (!crb(c,2)) { goto L_801C5D7C; } // 801C5C44
  cmpu(c,1,c->r[6],c->r[4]); // 801C5C48
  if (!crb(c,5)) { goto L_801C5D38; } // 801C5C4C
  c->r[0]=c->r[6]-c->r[4]; // 801C5C50
  c->r[7]=c->r[4]+0x00000008u; // 801C5C54
  cmpu(c,0,c->r[0],0x00000008u); // 801C5C58
  if (!crb(c,1)) { goto L_801C5D0C; } // 801C5C5C
  if (crb(c,4)) { goto L_801C5D0C; } // 801C5C60
  c->r[0]=c->r[6]+0x00000007u; // 801C5C64
  c->r[8]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801C5C68
  c->r[0]=c->r[0]-c->r[7]; // 801C5C6C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801C5C70
  c->ctr=c->r[0]; // 801C5C74
  cmpu(c,0,c->r[6],c->r[7]); // 801C5C78
  if (!crb(c,1)) { goto L_801C5D0C; } // 801C5C7C
L_801C5C80:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5C80
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 801C5C84
  c->r[7]=c->r[0]+c->r[8]; // 801C5C88
  c->r[0]=R32(c->r[7]+0xFFFFFFFCu); // 801C5C8C
  W32(c->r[7]+0x00000000u,c->r[0]); // 801C5C90
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5C94
  c->r[7]=c->r[0]+c->r[8]; // 801C5C98
  c->r[0]=R32(c->r[7]+0xFFFFFFF8u); // 801C5C9C
  W32(c->r[7]+0xFFFFFFFCu,c->r[0]); // 801C5CA0
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5CA4
  c->r[7]=c->r[0]+c->r[8]; // 801C5CA8
  c->r[0]=R32(c->r[7]+0xFFFFFFF4u); // 801C5CAC
  W32(c->r[7]+0xFFFFFFF8u,c->r[0]); // 801C5CB0
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5CB4
  c->r[7]=c->r[0]+c->r[8]; // 801C5CB8
  c->r[0]=R32(c->r[7]+0xFFFFFFF0u); // 801C5CBC
  W32(c->r[7]+0xFFFFFFF4u,c->r[0]); // 801C5CC0
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5CC4
  c->r[7]=c->r[0]+c->r[8]; // 801C5CC8
  c->r[0]=R32(c->r[7]+0xFFFFFFECu); // 801C5CCC
  W32(c->r[7]+0xFFFFFFF0u,c->r[0]); // 801C5CD0
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5CD4
  c->r[7]=c->r[0]+c->r[8]; // 801C5CD8
  c->r[0]=R32(c->r[7]+0xFFFFFFE8u); // 801C5CDC
  W32(c->r[7]+0xFFFFFFECu,c->r[0]); // 801C5CE0
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5CE4
  c->r[7]=c->r[0]+c->r[8]; // 801C5CE8
  c->r[0]=R32(c->r[7]+0xFFFFFFE4u); // 801C5CEC
  W32(c->r[7]+0xFFFFFFE8u,c->r[0]); // 801C5CF0
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5CF4
  c->r[7]=c->r[0]+c->r[8]; // 801C5CF8
  c->r[8]=c->r[8]+0xFFFFFFE0u; // 801C5CFC
  c->r[0]=R32(c->r[7]+0xFFFFFFE0u); // 801C5D00
  W32(c->r[7]+0xFFFFFFE4u,c->r[0]); // 801C5D04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5C80; } // 801C5D08
L_801C5D0C:;
  c->r[0]=c->r[6]-c->r[4]; // 801C5D0C
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801C5D10
  c->ctr=c->r[0]; // 801C5D14
  cmpu(c,0,c->r[6],c->r[4]); // 801C5D18
  if (!crb(c,1)) { goto L_801C5D38; } // 801C5D1C
L_801C5D20:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 801C5D20
  c->r[6]=c->r[0]+c->r[7]; // 801C5D24
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 801C5D28
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 801C5D2C
  W32(c->r[6]+0x00000000u,c->r[0]); // 801C5D30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5D20; } // 801C5D34
L_801C5D38:;
  c->r[6]=R32(c->r[3]+0x000000DCu); // 801C5D38
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C5D3C
  c->r[4]=0u+0x00010000u; // 801C5D40
  c->r[3]=c->r[5]|c->r[5]; // 801C5D44
  W32(c->r[6]+c->r[0],c->r[5]); // 801C5D48
  c->r[6]=c->r[31]|c->r[31]; // 801C5D4C
  c->r[4]=c->r[4]+0x00000002u; // 801C5D50
  c->r[5]=0u+0x00000000u; // 801C5D54
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5D58
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5D5C
  c->ctr=c->r[12]; // 801C5D60
  if (true) { c->lr=0x801C5D68u; dispatch(c,c->ctr); } // 801C5D64
  c->r[4]=R32(c->r[31]+0x000000E4u); // 801C5D68
  c->r[3]=0u+0x00000001u; // 801C5D6C
  c->r[0]=c->r[4]+0x00000001u; // 801C5D70
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801C5D74
  goto L_801C5D80; // 801C5D78
L_801C5D7C:;
  c->r[3]=0u+0x00000000u; // 801C5D7C
L_801C5D80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5D80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5D84
  c->lr=c->r[0]; // 801C5D88
  c->r[1]=c->r[1]+0x00000010u; // 801C5D8C
  return; // 801C5D90
}

// Remove__Q34nw4r3g3d8ScnGroupFUl
void f_801C5D94(Ctx* __restrict c) {
  trace_call(0x801C5D94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5D94
  c->r[0]=c->lr; // 801C5D98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5D9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5DA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5DA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C5DA8
  c->r[29]=c->r[4]|c->r[4]; // 801C5DAC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C5DB0
  c->r[28]=c->r[3]|c->r[3]; // 801C5DB4
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801C5DB8
  cmpu(c,0,c->r[4],c->r[0]); // 801C5DBC
  if (!crb(c,0)) { goto L_801C5E2C; } // 801C5DC0
  c->r[5]=R32(c->r[3]+0x000000DCu); // 801C5DC4
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C5DC8
  c->r[3]=0u+0x00010000u; // 801C5DCC
  c->r[6]=c->r[28]|c->r[28]; // 801C5DD0
  c->r[30]=R32(c->r[5]+c->r[31]); // 801C5DD4
  c->r[4]=c->r[3]+0x00000003u; // 801C5DD8
  c->r[5]=0u+0x00000000u; // 801C5DDC
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C5DE0
  c->r[3]=c->r[30]|c->r[30]; // 801C5DE4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5DE8
  c->ctr=c->r[12]; // 801C5DEC
  if (true) { c->lr=0x801C5DF4u; dispatch(c,c->ctr); } // 801C5DF0
  goto L_801C5E10; // 801C5DF4
L_801C5DF8:;
  c->r[0]=R32(c->r[28]+0x000000DCu); // 801C5DF8
  c->r[29]=c->r[29]+0x00000001u; // 801C5DFC
  c->r[3]=c->r[0]+c->r[31]; // 801C5E00
  c->r[31]=c->r[31]+0x00000004u; // 801C5E04
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C5E08
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C5E0C
L_801C5E10:;
  c->r[3]=R32(c->r[28]+0x000000E4u); // 801C5E10
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C5E14
  cmpu(c,0,c->r[29],c->r[0]); // 801C5E18
  if (crb(c,0)) { IRQCHK(c); goto L_801C5DF8; } // 801C5E1C
  W32(c->r[28]+0x000000E4u,c->r[0]); // 801C5E20
  c->r[3]=c->r[30]|c->r[30]; // 801C5E24
  goto L_801C5E30; // 801C5E28
L_801C5E2C:;
  c->r[3]=0u+0x00000000u; // 801C5E2C
L_801C5E30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5E30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5E34
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5E38
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5E3C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C5E40
  c->lr=c->r[0]; // 801C5E44
  c->r[1]=c->r[1]+0x00000020u; // 801C5E48
  return; // 801C5E4C
}

// Remove__Q34nw4r3g3d8ScnGroupFPQ34nw4r3g3d6ScnObj
void f_801C5E50(Ctx* __restrict c) {
  trace_call(0x801C5E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5E50
  c->r[0]=c->lr; // 801C5E54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5E58
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801C5E5C
  c->r[6]=R32(c->r[3]+0x000000DCu); // 801C5E60
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C5E64
  c->r[5]=c->r[6]|c->r[6]; // 801C5E68
  c->r[7]=c->r[6]+c->r[0]; // 801C5E6C
  goto L_801C5E78; // 801C5E70
L_801C5E74:;
  c->r[5]=c->r[5]+0x00000004u; // 801C5E74
L_801C5E78:;
  cmpu(c,0,c->r[5],c->r[7]); // 801C5E78
  if (crb(c,2)) { goto L_801C5E8C; } // 801C5E7C
  c->r[0]=R32(c->r[5]+0x00000000u); // 801C5E80
  cmpu(c,0,c->r[0],c->r[4]); // 801C5E84
  if (!crb(c,2)) { IRQCHK(c); goto L_801C5E74; } // 801C5E88
L_801C5E8C:;
  cmpu(c,0,c->r[5],c->r[7]); // 801C5E8C
  if (crb(c,2)) { goto L_801C5EC0; } // 801C5E90
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5E94
  c->r[0]=c->r[5]-c->r[6]; // 801C5E98
  c->r[0]=sraw(c,c->r[0],2); // 801C5E9C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C5EA0
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 801C5EA4
  c->ctr=c->r[12]; // 801C5EA8
  if (true) { c->lr=0x801C5EB0u; dispatch(c,c->ctr); } // 801C5EAC
  c->r[0]=0u-c->r[3]; // 801C5EB0
  c->r[0]=c->r[0]|c->r[3]; // 801C5EB4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C5EB8
  goto L_801C5EC4; // 801C5EBC
L_801C5EC0:;
  c->r[3]=0u+0x00000000u; // 801C5EC0
L_801C5EC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5EC4
  c->lr=c->r[0]; // 801C5EC8
  c->r[1]=c->r[1]+0x00000010u; // 801C5ECC
  return; // 801C5ED0
}

// __ct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPPQ34nw4r3g3d6ScnObjUl
void f_801C5ED4(Ctx* __restrict c) {
  trace_call(0x801C5ED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5ED4
  c->r[0]=c->lr; // 801C5ED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5EDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5EE0
  c->r[31]=c->r[6]|c->r[6]; // 801C5EE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5EE8
  c->r[30]=c->r[5]|c->r[5]; // 801C5EEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C5EF0
  c->r[29]=c->r[3]|c->r[3]; // 801C5EF4
  c->lr=0x801C5EFCu; f_801C49B4(c); // 801C5EF8
  c->r[0]=R32(c->r[29]+0x000000CCu); // 801C5EFC
  c->r[3]=0u+0x802A0000u; // 801C5F00
  c->r[3]=c->r[3]+0x00001490u; // 801C5F04
  c->r[4]=0u+0x00000000u; // 801C5F08
  c->r[0]=c->r[0]|0x60000000u; // 801C5F0C
  W32(c->r[29]+0x00000000u,c->r[3]); // 801C5F10
  c->r[3]=c->r[29]|c->r[29]; // 801C5F14
  W32(c->r[29]+0x000000DCu,c->r[30]); // 801C5F18
  W32(c->r[29]+0x000000E0u,c->r[31]); // 801C5F1C
  W32(c->r[29]+0x000000E4u,c->r[4]); // 801C5F20
  W32(c->r[29]+0x000000CCu,c->r[0]); // 801C5F24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5F28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5F2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5F30
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5F34
  c->lr=c->r[0]; // 801C5F38
  c->r[1]=c->r[1]+0x00000020u; // 801C5F3C
  return; // 801C5F40
}

// __dt__Q34nw4r3g3d8ScnGroupFv
void f_801C5F44(Ctx* __restrict c) {
  trace_call(0x801C5F44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5F44
  c->r[0]=c->lr; // 801C5F48
  cmps(c,0,(int32_t)c->r[3],0); // 801C5F4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5F50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5F54
  c->r[31]=c->r[3]|c->r[3]; // 801C5F58
  if (crb(c,2)) { goto L_801C5FF0; } // 801C5F5C
  c->r[4]=0u+0x802A0000u; // 801C5F60
  c->r[4]=c->r[4]+0x00001490u; // 801C5F64
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C5F68
  goto L_801C5F90; // 801C5F6C
L_801C5F70:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C5F70
  if (crb(c,2)) { goto L_801C5F90; } // 801C5F74
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C5F78
  c->r[3]=c->r[31]|c->r[31]; // 801C5F7C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801C5F80
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C5F84
  c->ctr=c->r[12]; // 801C5F88
  if (true) { c->lr=0x801C5F90u; dispatch(c,c->ctr); } // 801C5F8C
L_801C5F90:;
  c->r[4]=R32(c->r[31]+0x000000E4u); // 801C5F90
  cmps(c,0,(int32_t)c->r[4],0); // 801C5F94
  if (!crb(c,2)) { IRQCHK(c); goto L_801C5F70; } // 801C5F98
  cmps(c,0,(int32_t)c->r[31],0); // 801C5F9C
  if (crb(c,2)) { goto L_801C5FF0; } // 801C5FA0
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801C5FA4
  c->r[4]=0u+0x802A0000u; // 801C5FA8
  c->r[4]=c->r[4]+0x000014D0u; // 801C5FAC
  cmps(c,1,(int32_t)c->r[3],0); // 801C5FB0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801C5FB4
  if (crb(c,6)) { goto L_801C5FE4; } // 801C5FB8
  c->r[0]=R8(c->r[31]+0x000000D9u); // 801C5FBC
  cmps(c,0,(int32_t)c->r[0],1); // 801C5FC0
  if (crb(c,2)) { goto L_801C5FCC; } // 801C5FC4
  goto L_801C5FE4; // 801C5FC8
L_801C5FCC:;
  if (crb(c,6)) { goto L_801C5FE4; } // 801C5FCC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C5FD0
  c->r[4]=0u+0x00000001u; // 801C5FD4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C5FD8
  c->ctr=c->r[12]; // 801C5FDC
  if (true) { c->lr=0x801C5FE4u; dispatch(c,c->ctr); } // 801C5FE0
L_801C5FE4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5FE4
  c->r[4]=0u+0x00000000u; // 801C5FE8
  c->lr=0x801C5FF0u; f_801B7AB0(c); // 801C5FEC
L_801C5FF0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5FF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5FF8
  c->lr=c->r[0]; // 801C5FFC
  c->r[1]=c->r[1]+0x00000010u; // 801C6000
  return; // 801C6004
}

// IsDerivedFrom__Q34nw4r3g3d8ScnGroupCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801C6008(Ctx* __restrict c) {
  trace_call(0x801C6008u);
  c->r[3]=0u+0x80270000u; // 801C6008
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C600C
  c->r[3]=c->r[3]+0x00000E18u; // 801C6010
  cmpu(c,0,c->r[0],c->r[3]); // 801C6014
  if (!crb(c,2)) { goto L_801C6024; } // 801C6018
  c->r[3]=0u+0x00000001u; // 801C601C
  return; // 801C6020
L_801C6024:;
  c->r[3]=0u+0x80270000u; // 801C6024
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C6028
  c->r[3]=c->r[3]+0x00000DF8u; // 801C602C
  cmpu(c,0,c->r[0],c->r[3]); // 801C6030
  if (!crb(c,2)) { goto L_801C6040; } // 801C6034
  c->r[3]=0u+0x00000001u; // 801C6038
  return; // 801C603C
L_801C6040:;
  c->r[3]=0u+0x80270000u; // 801C6040
  c->r[3]=c->r[3]+0x00000CD0u; // 801C6044
  c->r[0]=c->r[3]-c->r[0]; // 801C6048
  c->r[0]=cntlz(c->r[0]); // 801C604C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C6050
  return; // 801C6054
}

// IsDerivedFrom__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801C6058(Ctx* __restrict c) {
  trace_call(0x801C6058u);
  c->r[3]=0u+0x80270000u; // 801C6058
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C605C
  c->r[3]=c->r[3]+0x00000DF8u; // 801C6060
  cmpu(c,0,c->r[0],c->r[3]); // 801C6064
  if (!crb(c,2)) { goto L_801C6074; } // 801C6068
  c->r[3]=0u+0x00000001u; // 801C606C
  return; // 801C6070
L_801C6074:;
  c->r[3]=0u+0x80270000u; // 801C6074
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C6078
  c->r[3]=c->r[3]+0x00000CD0u; // 801C607C
  c->r[0]=c->r[3]-c->r[0]; // 801C6080
  c->r[0]=cntlz(c->r[0]); // 801C6084
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C6088
  return; // 801C608C
}

// GetTypeName__Q34nw4r3g3d8ScnGroupCFv
void f_801C6090(Ctx* __restrict c) {
  trace_call(0x801C6090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6090
  c->r[0]=c->lr; // 801C6094
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6098
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C609C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C60A0
  c->ctr=c->r[12]; // 801C60A4
  if (true) { c->lr=0x801C60ACu; dispatch(c,c->ctr); } // 801C60A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C60AC
  c->r[3]=c->r[3]+0x00000004u; // 801C60B0
  c->lr=c->r[0]; // 801C60B4
  c->r[1]=c->r[1]+0x00000010u; // 801C60B8
  return; // 801C60BC
}

// GetTypeObj__Q34nw4r3g3d8ScnGroupCFv
void f_801C60C0(Ctx* __restrict c) {
  trace_call(0x801C60C0u);
  c->r[3]=0u+0x80270000u; // 801C60C0
  c->r[3]=c->r[3]+0x00000E18u; // 801C60C4
  return; // 801C60C8
}

// GetTypeName__Q34nw4r3g3d6ScnObjCFv
void f_801C60CC(Ctx* __restrict c) {
  trace_call(0x801C60CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C60CC
  c->r[0]=c->lr; // 801C60D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C60D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C60D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C60DC
  c->ctr=c->r[12]; // 801C60E0
  if (true) { c->lr=0x801C60E8u; dispatch(c,c->ctr); } // 801C60E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C60E8
  c->r[3]=c->r[3]+0x00000004u; // 801C60EC
  c->lr=c->r[0]; // 801C60F0
  c->r[1]=c->r[1]+0x00000010u; // 801C60F4
  return; // 801C60F8
}

// GetTypeObj__Q34nw4r3g3d6ScnObjCFv
void f_801C60FC(Ctx* __restrict c) {
  trace_call(0x801C60FCu);
  c->r[3]=0u+0x80270000u; // 801C60FC
  c->r[3]=c->r[3]+0x00000DF8u; // 801C6100
  return; // 801C6104
}

// Construct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPUlUlUlUlUl
void f_801C6108(Ctx* __restrict c) {
  trace_call(0x801C6108u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6108
  c->r[0]=c->lr; // 801C610C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C6110
  c->r[11]=c->r[1]+0x00000040u; // 801C6114
  c->lr=0x801C611Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6118
  c->r[10]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C611C
  c->r[24]=c->r[5]|c->r[5]; // 801C6120
  c->r[10]=c->r[10]+0x000028A7u; // 801C6124
  c->r[9]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801C6128
  c->r[31]=rotl(c->r[10],0)&0xFFFFFFFCu; // 801C612C
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801C6130
  c->r[9]=c->r[31]+c->r[9]; // 801C6134
  cmps(c,0,(int32_t)c->r[4],0); // 801C6138
  c->r[9]=c->r[9]+0x00000003u; // 801C613C
  c->r[23]=c->r[3]|c->r[3]; // 801C6140
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)68); // 801C6144
  c->r[25]=c->r[6]|c->r[6]; // 801C6148
  c->r[30]=rotl(c->r[9],0)&0xFFFFFFFCu; // 801C614C
  c->r[28]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801C6150
  c->r[5]=c->r[30]+c->r[5]; // 801C6154
  c->r[26]=c->r[7]|c->r[7]; // 801C6158
  c->r[5]=c->r[5]+0x00000003u; // 801C615C
  c->r[27]=c->r[8]|c->r[8]; // 801C6160
  c->r[29]=rotl(c->r[5],0)&0xFFFFFFFCu; // 801C6164
  c->r[6]=0u+0x00000000u; // 801C6168
  c->r[5]=c->r[29]+c->r[0]; // 801C616C
  c->r[5]=c->r[5]+0x00000003u; // 801C6170
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 801C6174
  c->r[22]=rotl(c->r[5],0)&0xFFFFFFFCu; // 801C6178
  c->r[5]=c->r[22]+c->r[0]; // 801C617C
  c->r[0]=c->r[5]+0x00000003u; // 801C6180
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801C6184
  if (crb(c,2)) { goto L_801C6190; } // 801C6188
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C618C
L_801C6190:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C6190
  if (crb(c,2)) { goto L_801C6224; } // 801C6194
  c->r[3]=c->r[23]|c->r[23]; // 801C6198
  c->r[4]=c->r[0]|c->r[0]; // 801C619C
  c->lr=0x801C61A4u; f_80128068(c); // 801C61A0
  cmps(c,0,(int32_t)c->r[3],0); // 801C61A4
  if (!crb(c,2)) { goto L_801C61B4; } // 801C61A8
  c->r[3]=0u+0x00000000u; // 801C61AC
  goto L_801C6228; // 801C61B0
L_801C61B4:;
  c->r[5]=addc(c,c->r[3],0x0000288Cu,0); cr0(c,c->r[5]); // 801C61B4
  c->r[7]=c->r[3]+c->r[31]; // 801C61B8
  if (crb(c,2)) { goto L_801C61E8; } // 801C61BC
  c->r[6]=0u+0x802A0000u; // 801C61C0
  c->r[4]=c->r[7]+c->r[28]; // 801C61C4
  c->r[6]=c->r[6]+0x00001508u; // 801C61C8
  c->r[0]=0u+0x00000000u; // 801C61CC
  W32(c->r[5]+0x00000000u,c->r[6]); // 801C61D0
  W32(c->r[5]+0x00000004u,c->r[7]); // 801C61D4
  W32(c->r[5]+0x00000008u,c->r[4]); // 801C61D8
  W32(c->r[5]+0x0000000Cu,c->r[25]); // 801C61DC
  W32(c->r[5]+0x00000010u,c->r[0]); // 801C61E0
  W32(c->r[5]+0x00000014u,c->r[0]); // 801C61E4
L_801C61E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C61E8
  c->r[6]=c->r[3]|c->r[3]; // 801C61EC
  c->r[10]=c->r[3]+c->r[30]; // 801C61F0
  c->r[0]=c->r[3]+c->r[29]; // 801C61F4
  c->r[7]=c->r[3]+c->r[22]; // 801C61F8
  if (crb(c,2)) { goto L_801C6224; } // 801C61FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C6200
  c->r[4]=c->r[23]|c->r[23]; // 801C6204
  c->r[8]=c->r[26]|c->r[26]; // 801C6208
  c->r[9]=c->r[27]|c->r[27]; // 801C620C
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801C6210
  c->r[7]=c->r[24]|c->r[24]; // 801C6214
  c->r[6]=c->r[3]+0x000028A4u; // 801C6218
  c->lr=0x801C6220u; f_801C6CE4(c); // 801C621C
  c->r[6]=c->r[3]|c->r[3]; // 801C6220
L_801C6224:;
  c->r[3]=c->r[6]|c->r[6]; // 801C6224
L_801C6228:;
  c->r[11]=c->r[1]+0x00000040u; // 801C6228
  c->lr=0x801C6230u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C622C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C6230
  c->lr=c->r[0]; // 801C6234
  c->r[1]=c->r[1]+0x00000040u; // 801C6238
  return; // 801C623C
}

// G3dProc__Q34nw4r3g3d7ScnRootFUlUlPv
void f_801C6240(Ctx* __restrict c) {
  trace_call(0x801C6240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6240
  c->r[0]=c->lr; // 801C6244
  cmpu(c,0,c->r[4],0x00000009u); // 801C6248
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C624C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6250
  c->r[31]=c->r[3]|c->r[3]; // 801C6254
  if (!crb(c,0)) { goto L_801C627C; } // 801C6258
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801C625C
  c->r[8]=0u+0x00000001u; // 801C6260
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C6264
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 801C6268
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 801C626C
  if (crb(c,2)) { goto L_801C627C; } // 801C6270
  c->r[0]=0u+0x00000001u; // 801C6274
  goto L_801C6280; // 801C6278
L_801C627C:;
  c->r[0]=0u+0x00000000u; // 801C627C
L_801C6280:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C6280
  if (!crb(c,2)) { goto L_801C62D8; } // 801C6284
  c->r[7]=0u+0x00010000u; // 801C6288
  c->r[0]=c->r[7]+0x00000001u; // 801C628C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C6290
  if (crb(c,2)) { goto L_801C629C; } // 801C6294
  goto L_801C62D0; // 801C6298
L_801C629C:;
  c->r[3]=R32(c->r[3]+0x00002888u); // 801C629C
  cmpu(c,0,c->r[3],c->r[6]); // 801C62A0
  if (!crb(c,2)) { goto L_801C62D0; } // 801C62A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C62A8
  c->r[6]=c->r[31]|c->r[31]; // 801C62AC
  c->r[4]=c->r[7]+0x00000003u; // 801C62B0
  c->r[5]=0u+0x00000000u; // 801C62B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C62B8
  c->ctr=c->r[12]; // 801C62BC
  if (true) { c->lr=0x801C62C4u; dispatch(c,c->ctr); } // 801C62C0
  c->r[0]=0u+0x00000000u; // 801C62C4
  W32(c->r[31]+0x00002888u,c->r[0]); // 801C62C8
  goto L_801C62D8; // 801C62CC
L_801C62D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C62D0
  c->lr=0x801C62D8u; f_801C57AC(c); // 801C62D4
L_801C62D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C62D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C62DC
  c->lr=c->r[0]; // 801C62E0
  c->r[1]=c->r[1]+0x00000010u; // 801C62E4
  return; // 801C62E8
}

// GetCamera__Q34nw4r3g3d7ScnRootFi
void f_801C62EC(Ctx* __restrict c) {
  trace_call(0x801C62ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C62EC
  c->r[0]=c->lr; // 801C62F0
  cmps(c,0,(int32_t)c->r[4],0); // 801C62F4
  c->r[5]=c->r[3]|c->r[3]; // 801C62F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C62FC
  if (crb(c,0)) { goto L_801C6328; } // 801C6300
  cmps(c,0,(int32_t)c->r[4],32); // 801C6304
  if (!crb(c,0)) { goto L_801C6328; } // 801C6308
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)268); // 801C630C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C6310
  c->r[4]=c->r[5]+c->r[0]; // 801C6314
  c->r[4]=c->r[4]+0x000000F8u; // 801C6318
  c->lr=0x801C6320u; f_801C11E0(c); // 801C631C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C6320
  goto L_801C6338; // 801C6324
L_801C6328:;
  c->r[3]=c->r[1]+0x00000008u; // 801C6328
  c->r[4]=0u+0x00000000u; // 801C632C
  c->lr=0x801C6334u; f_801C11E0(c); // 801C6330
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C6334
L_801C6338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6338
  c->lr=c->r[0]; // 801C633C
  c->r[1]=c->r[1]+0x00000010u; // 801C6340
  return; // 801C6344
}

// GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
void f_801C6348(Ctx* __restrict c) {
  trace_call(0x801C6348u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6348
  c->r[0]=c->lr; // 801C634C
  c->r[4]=c->r[3]|c->r[3]; // 801C6350
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6354
  c->r[3]=c->r[1]+0x00000008u; // 801C6358
  c->r[0]=R8(c->r[4]+0x000000F4u); // 801C635C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 801C6360
  c->r[4]=c->r[4]+c->r[0]; // 801C6364
  c->r[4]=c->r[4]+0x000000F8u; // 801C6368
  c->lr=0x801C6370u; f_801C11E0(c); // 801C636C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6370
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C6374
  c->lr=c->r[0]; // 801C6378
  c->r[1]=c->r[1]+0x00000010u; // 801C637C
  return; // 801C6380
}

// SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
void f_801C6384(Ctx* __restrict c) {
  trace_call(0x801C6384u);
  W8(c->r[3]+0x000000F4u,c->r[4]); // 801C6384
  return; // 801C6388
}

// GetFog__Q34nw4r3g3d7ScnRootFi
void f_801C638C(Ctx* __restrict c) {
  trace_call(0x801C638Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C638C
  c->r[0]=c->lr; // 801C6390
  cmps(c,0,(int32_t)c->r[4],0); // 801C6394
  c->r[5]=c->r[3]|c->r[3]; // 801C6398
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C639C
  if (crb(c,0)) { goto L_801C63C8; } // 801C63A0
  cmps(c,0,(int32_t)c->r[4],32); // 801C63A4
  if (!crb(c,0)) { goto L_801C63C8; } // 801C63A8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801C63AC
  c->r[3]=c->r[1]+0x0000000Cu; // 801C63B0
  c->r[4]=c->r[5]+c->r[0]; // 801C63B4
  c->r[4]=c->r[4]+0x00002278u; // 801C63B8
  c->lr=0x801C63C0u; f_801CDBA8(c); // 801C63BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C63C0
  goto L_801C63D8; // 801C63C4
L_801C63C8:;
  c->r[3]=c->r[1]+0x00000008u; // 801C63C8
  c->r[4]=0u+0x00000000u; // 801C63CC
  c->lr=0x801C63D4u; f_801CDBA8(c); // 801C63D0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C63D4
L_801C63D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C63D8
  c->lr=c->r[0]; // 801C63DC
  c->r[1]=c->r[1]+0x00000010u; // 801C63E0
  return; // 801C63E4
}

// SetAnmScn__Q34nw4r3g3d7ScnRootFPQ34nw4r3g3d6AnmScn
void f_801C63E8(Ctx* __restrict c) {
  trace_call(0x801C63E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C63E8
  c->r[0]=c->lr; // 801C63EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C63F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C63F4
  c->r[31]=c->r[4]|c->r[4]; // 801C63F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C63FC
  c->r[30]=c->r[3]|c->r[3]; // 801C6400
  c->r[0]=R32(c->r[3]+0x00002888u); // 801C6404
  cmps(c,0,(int32_t)c->r[0],0); // 801C6408
  if (crb(c,2)) { goto L_801C6440; } // 801C640C
  if (crb(c,2)) { goto L_801C6440; } // 801C6410
  c->r[3]=c->r[0]|c->r[0]; // 801C6414
  c->r[4]=0u+0x00010000u; // 801C6418
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C641C
  c->r[6]=c->r[30]|c->r[30]; // 801C6420
  c->r[4]=c->r[4]+0x00000003u; // 801C6424
  c->r[5]=0u+0x00000000u; // 801C6428
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C642C
  c->ctr=c->r[12]; // 801C6430
  if (true) { c->lr=0x801C6438u; dispatch(c,c->ctr); } // 801C6434
  c->r[0]=0u+0x00000000u; // 801C6438
  W32(c->r[30]+0x00002888u,c->r[0]); // 801C643C
L_801C6440:;
  W32(c->r[30]+0x00002888u,c->r[31]); // 801C6440
  c->r[4]=0u+0x00010000u; // 801C6444
  c->r[3]=c->r[31]|c->r[31]; // 801C6448
  c->r[6]=c->r[30]|c->r[30]; // 801C644C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C6450
  c->r[4]=c->r[4]+0x00000002u; // 801C6454
  c->r[5]=0u+0x00000000u; // 801C6458
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C645C
  c->ctr=c->r[12]; // 801C6460
  if (true) { c->lr=0x801C6468u; dispatch(c,c->ctr); } // 801C6464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6468
  c->r[3]=0u+0x00000001u; // 801C646C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C6470
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6474
  c->lr=c->r[0]; // 801C6478
  c->r[1]=c->r[1]+0x00000010u; // 801C647C
  return; // 801C6480
}

// RemoveAnmScn__Q34nw4r3g3d7ScnRootFv
void f_801C6484(Ctx* __restrict c) {
  trace_call(0x801C6484u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6484
  c->r[0]=c->lr; // 801C6488
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C648C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6490
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6494
  c->r[30]=c->r[3]|c->r[3]; // 801C6498
  c->r[31]=R32(c->r[3]+0x00002888u); // 801C649C
  cmps(c,0,(int32_t)c->r[31],0); // 801C64A0
  if (crb(c,2)) { goto L_801C64D4; } // 801C64A4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C64A8
  c->r[4]=0u+0x00010000u; // 801C64AC
  c->r[3]=c->r[31]|c->r[31]; // 801C64B0
  c->r[6]=c->r[30]|c->r[30]; // 801C64B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C64B8
  c->r[4]=c->r[4]+0x00000003u; // 801C64BC
  c->r[5]=0u+0x00000000u; // 801C64C0
  c->ctr=c->r[12]; // 801C64C4
  if (true) { c->lr=0x801C64CCu; dispatch(c,c->ctr); } // 801C64C8
  c->r[0]=0u+0x00000000u; // 801C64CC
  W32(c->r[30]+0x00002888u,c->r[0]); // 801C64D0
L_801C64D4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C64D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C64D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C64DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C64E0
  c->lr=c->r[0]; // 801C64E4
  c->r[1]=c->r[1]+0x00000010u; // 801C64E8
  return; // 801C64EC
}

// UpdateFrame__Q34nw4r3g3d7ScnRootFv
void f_801C64F0(Ctx* __restrict c) {
  trace_call(0x801C64F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C64F0
  c->r[0]=c->lr; // 801C64F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C64F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C64FC
  c->r[31]=c->r[3]|c->r[3]; // 801C6500
  c->r[0]=R32(c->r[3]+0x00002888u); // 801C6504
  cmps(c,0,(int32_t)c->r[0],0); // 801C6508
  if (crb(c,2)) { goto L_801C6524; } // 801C650C
  c->r[3]=c->r[0]|c->r[0]; // 801C6510
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6514
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801C6518
  c->ctr=c->r[12]; // 801C651C
  if (true) { c->lr=0x801C6524u; dispatch(c,c->ctr); } // 801C6520
L_801C6524:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C6524
  c->r[3]=c->r[31]|c->r[31]; // 801C6528
  c->r[4]=0u+0x00000008u; // 801C652C
  c->r[5]=0u+0x00000000u; // 801C6530
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6534
  c->r[6]=0u+0x00000000u; // 801C6538
  c->ctr=c->r[12]; // 801C653C
  if (true) { c->lr=0x801C6544u; dispatch(c,c->ctr); } // 801C6540
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6544
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6548
  c->lr=c->r[0]; // 801C654C
  c->r[1]=c->r[1]+0x00000010u; // 801C6550
  return; // 801C6554
}

// SetGlbSettings__Q34nw4r3g3d7ScnRootFv
void f_801C6558(Ctx* __restrict c) {
  trace_call(0x801C6558u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6558
  c->r[0]=c->lr; // 801C655C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801C6560
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 801C6564
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 801C6568
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 801C656C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 801C6570
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 801C6574
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 801C6578
  c->r[11]=c->r[1]+0x00000090u; // 801C657C
  c->lr=0x801C6584u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6580
  c->r[28]=c->r[3]|c->r[3]; // 801C6584
  c->r[3]=c->r[1]+0x00000010u; // 801C6588
  c->r[0]=R8(c->r[28]+0x000000F4u); // 801C658C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 801C6590
  c->r[4]=c->r[28]+c->r[0]; // 801C6594
  c->r[4]=c->r[4]+0x000000F8u; // 801C6598
  c->lr=0x801C65A0u; f_801C11E0(c); // 801C659C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C65A0
  c->r[3]=c->r[1]+0x00000028u; // 801C65A4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C65A8
  c->lr=0x801C65B0u; f_801C1D74(c); // 801C65AC
  c->r[3]=c->r[1]+0x00000028u; // 801C65B0
  c->lr=0x801C65B8u; f_801C1DF8(c); // 801C65B4
  c->r[3]=c->r[1]+0x00000028u; // 801C65B8
  c->lr=0x801C65C0u; f_801C1EC0(c); // 801C65BC
  c->r[3]=c->r[1]+0x00000028u; // 801C65C0
  c->lr=0x801C65C8u; f_801C1EE4(c); // 801C65C4
  c->r[27]=c->r[28]+0x000000F8u; // 801C65C8
  c->r[26]=0u+0x00000000u; // 801C65CC
L_801C65D0:;
  c->r[4]=c->r[27]|c->r[27]; // 801C65D0
  c->r[3]=c->r[1]+0x00000018u; // 801C65D4
  c->lr=0x801C65DCu; f_801C11E0(c); // 801C65D8
  c->r[0]=R8(c->r[28]+0x000000F4u); // 801C65DC
  c->r[4]=c->r[26]|c->r[26]; // 801C65E0
  c->r[0]=c->r[0]-c->r[26]; // 801C65E4
  c->r[0]=cntlz(c->r[0]); // 801C65E8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C65EC
  c->lr=0x801C65F4u; f_801BB2B0(c); // 801C65F0
  c->r[26]=c->r[26]+0x00000001u; // 801C65F4
  c->r[27]=c->r[27]+0x0000010Cu; // 801C65F8
  cmps(c,0,(int32_t)c->r[26],32); // 801C65FC
  if (crb(c,0)) { IRQCHK(c); goto L_801C65D0; } // 801C6600
  c->r[5]=R32(c->r[1]+0x00000028u); // 801C6604
  c->r[0]=0u+0x00000008u; // 801C6608
  {uint32_t ea=c->r[2]+0xFFFF9CC8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C660C
  c->r[27]=c->r[28]+0x00002278u; // 801C6610
  c->r[3]=R32(c->r[5]+0x000000A8u); // 801C6614
  c->r[31]=0u+0x00000000u; // 801C6618
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801C661C
  c->r[30]=0u+0x00000000u; // 801C6620
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801C6624
  c->r[3]=addc(c,~c->r[3],0x00000001u,1); // 801C6628
  c->r[3]=c->r[4]|c->r[3]; // 801C662C
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[29]=c->ps1[29]=RF32(ea);} // 801C6630
  c->r[3]=sraw(c,c->r[3],31); // 801C6634
  c->r[29]=0u+0x00000000u; // 801C6638
  c->r[25]=c->r[0]&~c->r[3]; // 801C663C
  c->r[26]=0u+0x00000000u; // 801C6640
L_801C6644:;
  c->r[4]=c->r[27]|c->r[27]; // 801C6644
  c->r[3]=c->r[1]+0x00000024u; // 801C6648
  c->lr=0x801C6650u; f_801CDBA8(c); // 801C664C
  c->r[4]=R32(c->r[1]+0x00000024u); // 801C6650
  cmps(c,0,(int32_t)c->r[4],0); // 801C6654
  if (crb(c,2)) { goto L_801C6668; } // 801C6658
  c->r[3]=R32(c->r[1]+0x00000024u); // 801C665C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 801C6660
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[29]);} // 801C6664
L_801C6668:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 801C6668
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C666C
  cmps(c,0,(int32_t)c->r[0],0); // 801C6670
  if (crb(c,2)) { goto L_801C6684; } // 801C6674
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801C6678
  c->r[0]=c->r[25]|c->r[0]; // 801C667C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C6680
L_801C6684:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 801C6684
  c->r[3]=0u+0x00000000u; // 801C6688
  cmps(c,0,(int32_t)c->r[4],0); // 801C668C
  if (crb(c,2)) { goto L_801C66A4; } // 801C6690
  c->r[0]=R8(c->r[4]+0x00000018u); // 801C6694
  cmpu(c,0,c->r[0],0x00000001u); // 801C6698
  if (!crb(c,2)) { goto L_801C66A4; } // 801C669C
  c->r[3]=0u+0x00000001u; // 801C66A0
L_801C66A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C66A4
  if (crb(c,2)) { goto L_801C671C; } // 801C66A8
  cmps(c,0,(int32_t)c->r[29],0); // 801C66AC
  if (!crb(c,2)) { goto L_801C6708; } // 801C66B0
  c->r[3]=c->r[1]+0x00000028u; // 801C66B4
  c->r[4]=c->r[1]+0x00000030u; // 801C66B8
  c->lr=0x801C66C0u; f_801C1B48(c); // 801C66BC
  c->r[3]=c->r[1]+0x00000028u; // 801C66C0
  c->r[4]=c->r[1]+0x0000001Cu; // 801C66C4
  c->r[6]=c->r[1]+0x00000020u; // 801C66C8
  c->r[5]=0u+0x00000000u; // 801C66CC
  c->r[7]=0u+0x00000000u; // 801C66D0
  c->r[8]=0u+0x00000000u; // 801C66D4
  c->r[9]=0u+0x00000000u; // 801C66D8
  c->lr=0x801C66E0u; f_801C189C(c); // 801C66DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C66E0
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 801C66E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C66E8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C66EC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801C66F0
  c->r[31]=R16(c->r[1]+0x0000000Cu); // 801C66F4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C66F8
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,3);} // 801C66FC
  c->r[29]=0u+0x00000001u; // 801C6700
  c->r[30]=R16(c->r[1]+0x00000008u); // 801C6704
L_801C6708:;
  c->r[4]=c->r[31]|c->r[31]; // 801C6708
  c->r[5]=c->r[30]|c->r[30]; // 801C670C
  c->r[3]=c->r[1]+0x00000024u; // 801C6710
  c->r[6]=c->r[1]+0x00000030u; // 801C6714
  c->lr=0x801C671Cu; f_801CDC74(c); // 801C6718
L_801C671C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C671C
  c->r[4]=c->r[26]|c->r[26]; // 801C6720
  c->r[3]=c->r[1]+0x00000014u; // 801C6724
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6728
  c->lr=0x801C6730u; f_801BB0B0(c); // 801C672C
  c->r[26]=c->r[26]+0x00000001u; // 801C6730
  c->r[27]=c->r[27]+0x00000030u; // 801C6734
  cmps(c,0,(int32_t)c->r[26],32); // 801C6738
  if (crb(c,0)) { IRQCHK(c); goto L_801C6644; } // 801C673C
  c->r[3]=c->r[28]+0x00002878u; // 801C6740
  c->lr=0x801C6748u; f_801BB214(c); // 801C6744
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 801C6748
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 801C674C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 801C6750
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 801C6754
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 801C6758
  c->r[11]=c->r[1]+0x00000090u; // 801C675C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 801C6760
  c->lr=0x801C6768u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6764
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801C6768
  c->lr=c->r[0]; // 801C676C
  c->r[1]=c->r[1]+0x000000C0u; // 801C6770
  return; // 801C6774
}

// CalcAnmScn__Q34nw4r3g3d7ScnRootFv
void f_801C6778(Ctx* __restrict c) {
  trace_call(0x801C6778u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6778
  c->r[0]=c->lr; // 801C677C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C6780
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C6784
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C6788
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C678C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801C6790
  c->r[28]=c->r[3]|c->r[3]; // 801C6794
  c->r[0]=R32(c->r[3]+0x00002888u); // 801C6798
  cmps(c,0,(int32_t)c->r[0],0); // 801C679C
  if (crb(c,2)) { goto L_801C68E0; } // 801C67A0
  c->r[3]=c->r[0]|c->r[0]; // 801C67A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C67A8
  c->r[12]=R32(c->r[12]+0x00000050u); // 801C67AC
  c->ctr=c->r[12]; // 801C67B0
  if (true) { c->lr=0x801C67B8u; dispatch(c,c->ctr); } // 801C67B4
  c->r[31]=c->r[3]|c->r[3]; // 801C67B8
  c->r[3]=R32(c->r[28]+0x00002888u); // 801C67BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C67C0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801C67C4
  c->ctr=c->r[12]; // 801C67C8
  if (true) { c->lr=0x801C67D0u; dispatch(c,c->ctr); } // 801C67CC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801C67D0
  c->r[3]=R32(c->r[28]+0x00002888u); // 801C67D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C67D8
  c->r[12]=R32(c->r[12]+0x00000060u); // 801C67DC
  c->ctr=c->r[12]; // 801C67E0
  if (true) { c->lr=0x801C67E8u; dispatch(c,c->ctr); } // 801C67E4
  cmps(c,0,(int32_t)c->r[31],0); // 801C67E8
  W32(c->r[1]+0x00000018u,c->r[3]); // 801C67EC
  if (crb(c,2)) { goto L_801C6800; } // 801C67F0
  c->r[3]=R32(c->r[28]+0x00002888u); // 801C67F4
  c->r[4]=c->r[28]+0x00002878u; // 801C67F8
  c->lr=0x801C6800u; f_801B6840(c); // 801C67FC
L_801C6800:;
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801C6800
  cmps(c,0,(int32_t)c->r[4],0); // 801C6804
  if (crb(c,2)) { goto L_801C6870; } // 801C6808
  c->r[0]=R32(c->r[13]+0xFFFF9098u); // 801C680C
  c->r[3]=c->r[13]+0xFFFF9098u; // 801C6810
  cmpu(c,0,c->r[4],c->r[0]); // 801C6814
  if (!crb(c,0)) { goto L_801C6820; } // 801C6818
  c->r[3]=c->r[1]+0x0000001Cu; // 801C681C
L_801C6820:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 801C6820
  c->r[31]=c->r[28]+0x00002278u; // 801C6824
  c->r[29]=0u+0x00000000u; // 801C6828
  goto L_801C6868; // 801C682C
L_801C6830:;
  c->r[4]=c->r[31]|c->r[31]; // 801C6830
  c->r[3]=c->r[1]+0x00000014u; // 801C6834
  c->lr=0x801C683Cu; f_801CDBA8(c); // 801C6838
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C683C
  c->r[5]=c->r[29]|c->r[29]; // 801C6840
  c->r[4]=c->r[1]+0x0000000Cu; // 801C6844
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C6848
  c->r[3]=R32(c->r[28]+0x00002888u); // 801C684C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6850
  c->r[12]=R32(c->r[12]+0x00000070u); // 801C6854
  c->ctr=c->r[12]; // 801C6858
  if (true) { c->lr=0x801C6860u; dispatch(c,c->ctr); } // 801C685C
  c->r[31]=c->r[31]+0x00000030u; // 801C6860
  c->r[29]=c->r[29]+0x00000001u; // 801C6864
L_801C6868:;
  cmpu(c,0,c->r[29],c->r[30]); // 801C6868
  if (crb(c,0)) { IRQCHK(c); goto L_801C6830; } // 801C686C
L_801C6870:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 801C6870
  cmps(c,0,(int32_t)c->r[4],0); // 801C6874
  if (crb(c,2)) { goto L_801C68E0; } // 801C6878
  c->r[0]=R32(c->r[13]+0xFFFF909Cu); // 801C687C
  c->r[3]=c->r[13]+0xFFFF909Cu; // 801C6880
  cmpu(c,0,c->r[4],c->r[0]); // 801C6884
  if (!crb(c,0)) { goto L_801C6890; } // 801C6888
  c->r[3]=c->r[1]+0x00000018u; // 801C688C
L_801C6890:;
  c->r[29]=R32(c->r[3]+0x00000000u); // 801C6890
  c->r[31]=c->r[28]+0x000000F8u; // 801C6894
  c->r[30]=0u+0x00000000u; // 801C6898
  goto L_801C68D8; // 801C689C
L_801C68A0:;
  c->r[4]=c->r[31]|c->r[31]; // 801C68A0
  c->r[3]=c->r[1]+0x00000010u; // 801C68A4
  c->lr=0x801C68ACu; f_801C11E0(c); // 801C68A8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801C68AC
  c->r[5]=c->r[30]|c->r[30]; // 801C68B0
  c->r[4]=c->r[1]+0x00000008u; // 801C68B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C68B8
  c->r[3]=R32(c->r[28]+0x00002888u); // 801C68BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C68C0
  c->r[12]=R32(c->r[12]+0x00000074u); // 801C68C4
  c->ctr=c->r[12]; // 801C68C8
  if (true) { c->lr=0x801C68D0u; dispatch(c,c->ctr); } // 801C68CC
  c->r[31]=c->r[31]+0x0000010Cu; // 801C68D0
  c->r[30]=c->r[30]+0x00000001u; // 801C68D4
L_801C68D8:;
  cmpu(c,0,c->r[30],c->r[29]); // 801C68D8
  if (crb(c,0)) { IRQCHK(c); goto L_801C68A0; } // 801C68DC
L_801C68E0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C68E0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C68E4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C68E8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C68EC
  c->r[28]=R32(c->r[1]+0x00000020u); // 801C68F0
  c->lr=c->r[0]; // 801C68F4
  c->r[1]=c->r[1]+0x00000030u; // 801C68F8
  return; // 801C68FC
}

// CalcWorld__Q34nw4r3g3d7ScnRootFv
void f_801C6900(Ctx* __restrict c) {
  trace_call(0x801C6900u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6900
  c->r[0]=c->lr; // 801C6904
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C690C
  c->r[31]=c->r[3]|c->r[3]; // 801C6910
  c->lr=0x801C6918u; f_801C6778(c); // 801C6914
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C6918
  c->r[3]=c->r[31]|c->r[31]; // 801C691C
  c->r[4]=0u+0x00000001u; // 801C6920
  c->r[5]=0u+0x00000000u; // 801C6924
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6928
  c->r[6]=0u+0x00000000u; // 801C692C
  c->ctr=c->r[12]; // 801C6930
  if (true) { c->lr=0x801C6938u; dispatch(c,c->ctr); } // 801C6934
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6938
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C693C
  c->lr=c->r[0]; // 801C6940
  c->r[1]=c->r[1]+0x00000010u; // 801C6944
  return; // 801C6948
}

// CalcMaterial__Q34nw4r3g3d7ScnRootFv
void f_801C694C(Ctx* __restrict c) {
  trace_call(0x801C694Cu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C694C
  c->r[4]=0u+0x00000002u; // 801C6950
  c->r[5]=0u+0x00000000u; // 801C6954
  c->r[6]=0u+0x00000000u; // 801C6958
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C695C
  c->ctr=c->r[12]; // 801C6960
  if (true) { dispatch(c,c->ctr); return; } // 801C6964
}

// fn_801C6968
void f_801C6968(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6968
  c->r[4]=0u+0x00000003u; // 801C696C
  c->r[5]=0u+0x00000000u; // 801C6970
  c->r[6]=0u+0x00000000u; // 801C6974
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6978
  c->ctr=c->r[12]; // 801C697C
  if (true) { dispatch(c,c->ctr); return; } // 801C6980
}

// CalcView__Q34nw4r3g3d7ScnRootFv
void f_801C6984(Ctx* __restrict c) {
  trace_call(0x801C6984u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6984
  c->r[0]=c->lr; // 801C6988
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C698C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801C6990
  c->r[31]=c->r[3]|c->r[3]; // 801C6994
  c->lr=0x801C699Cu; f_80103FFC(c); // 801C6998
  c->r[0]=R8(c->r[31]+0x000000F4u); // 801C699C
  c->r[3]=c->r[1]+0x00000008u; // 801C69A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 801C69A4
  c->r[4]=c->r[31]+c->r[0]; // 801C69A8
  c->r[4]=c->r[4]+0x000000F8u; // 801C69AC
  c->lr=0x801C69B4u; f_801C11E0(c); // 801C69B0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C69B4
  c->r[3]=c->r[1]+0x0000000Cu; // 801C69B8
  c->r[4]=c->r[1]+0x00000010u; // 801C69BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C69C0
  c->lr=0x801C69C8u; f_801C1AE8(c); // 801C69C4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C69C8
  c->r[3]=c->r[31]|c->r[31]; // 801C69CC
  c->r[6]=c->r[1]+0x00000010u; // 801C69D0
  c->r[4]=0u+0x00000004u; // 801C69D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C69D8
  c->r[5]=0u+0x00000000u; // 801C69DC
  c->ctr=c->r[12]; // 801C69E0
  if (true) { c->lr=0x801C69E8u; dispatch(c,c->ctr); } // 801C69E4
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C69E8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801C69EC
  c->lr=c->r[0]; // 801C69F0
  c->r[1]=c->r[1]+0x00000050u; // 801C69F4
  return; // 801C69F8
}

// GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
void f_801C69FC(Ctx* __restrict c) {
  trace_call(0x801C69FCu);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C69FC
  c->r[0]=c->lr; // 801C6A00
  W32(c->r[1]+0x00000144u,c->r[0]); // 801C6A04
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 801C6A08
  c->r[31]=c->r[3]|c->r[3]; // 801C6A0C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C6A10
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6A14
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C6A18
  c->ctr=c->r[12]; // 801C6A1C
  if (true) { c->lr=0x801C6A24u; dispatch(c,c->ctr); } // 801C6A20
  c->r[0]=R8(c->r[31]+0x000000F4u); // 801C6A24
  c->r[3]=c->r[1]+0x00000008u; // 801C6A28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)268); // 801C6A2C
  c->r[4]=c->r[31]+c->r[0]; // 801C6A30
  c->r[4]=c->r[4]+0x000000F8u; // 801C6A34
  c->lr=0x801C6A3Cu; f_801C11E0(c); // 801C6A38
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C6A3C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C6A40
  c->r[4]=c->r[1]+0x00000010u; // 801C6A44
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C6A48
  c->lr=0x801C6A50u; f_801C1AE8(c); // 801C6A4C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801C6A50
  c->r[0]=R32(c->r[5]+0x00000070u); // 801C6A54
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801C6A58
  if (crb(c,2)) { goto L_801C6A80; } // 801C6A5C
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6A60
  c->r[3]=c->r[1]+0x00000040u; // 801C6A64
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6A68
  c->r[4]=c->r[1]+0x00000010u; // 801C6A6C
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C6A70
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C6A74
  c->lr=0x801C6A7Cu; f_801DC0D8(c); // 801C6A78
  goto L_801C6AA4; // 801C6A7C
L_801C6A80:;
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6A80
  c->r[3]=c->r[1]+0x00000040u; // 801C6A84
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6A88
  c->r[4]=c->r[1]+0x00000010u; // 801C6A8C
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C6A90
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C6A94
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C6A98
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C6A9C
  c->lr=0x801C6AA4u; f_801DC18C(c); // 801C6AA0
L_801C6AA4:;
  c->r[0]=c->r[1]+0x00000040u; // 801C6AA4
  c->r[3]=c->r[31]|c->r[31]; // 801C6AA8
  W32(c->r[13]+0xFFFF9D68u,c->r[0]); // 801C6AAC
  c->r[4]=0u+0x00000005u; // 801C6AB0
  c->r[5]=0u+0x00000000u; // 801C6AB4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C6AB8
  c->r[6]=R32(c->r[31]+0x000000E8u); // 801C6ABC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6AC0
  c->ctr=c->r[12]; // 801C6AC4
  if (true) { c->lr=0x801C6ACCu; dispatch(c,c->ctr); } // 801C6AC8
  c->r[0]=0u+0x00000000u; // 801C6ACC
  W32(c->r[13]+0xFFFF9D68u,c->r[0]); // 801C6AD0
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 801C6AD4
  c->r[0]=R32(c->r[1]+0x00000144u); // 801C6AD8
  c->lr=c->r[0]; // 801C6ADC
  c->r[1]=c->r[1]+0x00000140u; // 801C6AE0
  return; // 801C6AE4
}

// ZSort__Q34nw4r3g3d7ScnRootFv
void f_801C6AE8(Ctx* __restrict c) {
  trace_call(0x801C6AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6AE8
  c->r[0]=c->lr; // 801C6AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6AF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6AF4
  c->r[31]=c->r[3]|c->r[3]; // 801C6AF8
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C6AFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6B00
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C6B04
  c->ctr=c->r[12]; // 801C6B08
  if (true) { c->lr=0x801C6B10u; dispatch(c,c->ctr); } // 801C6B0C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C6B10
  c->r[4]=0u+0x00010000u; // 801C6B14
  c->r[3]=c->r[31]|c->r[31]; // 801C6B18
  c->r[6]=R32(c->r[31]+0x000000E8u); // 801C6B1C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6B20
  c->r[4]=c->r[4]+0x00000004u; // 801C6B24
  c->r[5]=0u+0x00000000u; // 801C6B28
  c->ctr=c->r[12]; // 801C6B2C
  if (true) { c->lr=0x801C6B34u; dispatch(c,c->ctr); } // 801C6B30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6B34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6B38
  c->lr=c->r[0]; // 801C6B3C
  c->r[1]=c->r[1]+0x00000010u; // 801C6B40
  return; // 801C6B44
}

// fn_801C6B48
void f_801C6B48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6B48
  c->r[0]=c->lr; // 801C6B4C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C6B50
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C6B54
  c->r[31]=c->r[5]|c->r[5]; // 801C6B58
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C6B5C
  c->r[30]=c->r[4]|c->r[4]; // 801C6B60
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C6B64
  c->r[29]=c->r[3]|c->r[3]; // 801C6B68
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801C6B6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6B70
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801C6B74
  c->ctr=c->r[12]; // 801C6B78
  if (true) { c->lr=0x801C6B80u; dispatch(c,c->ctr); } // 801C6B7C
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C6B80
  c->r[4]=0u+0x00010000u; // 801C6B84
  c->r[3]=c->r[29]|c->r[29]; // 801C6B88
  c->r[6]=c->r[1]+0x00000008u; // 801C6B8C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C6B90
  c->r[4]=c->r[4]+0x00000004u; // 801C6B94
  c->r[5]=0u+0x00000002u; // 801C6B98
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801C6B9C
  W32(c->r[1]+0x00000010u,c->r[31]); // 801C6BA0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C6BA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6BA8
  c->ctr=c->r[12]; // 801C6BAC
  if (true) { c->lr=0x801C6BB4u; dispatch(c,c->ctr); } // 801C6BB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C6BB4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C6BB8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C6BBC
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C6BC0
  c->lr=c->r[0]; // 801C6BC4
  c->r[1]=c->r[1]+0x00000030u; // 801C6BC8
  return; // 801C6BCC
}

// fn_801C6BD0
void f_801C6BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6BD0
  c->r[0]=c->lr; // 801C6BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6BD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6BDC
  c->r[31]=c->r[3]|c->r[3]; // 801C6BE0
  c->lr=0x801C6BE8u; f_801C6558(c); // 801C6BE4
  c->r[0]=R32(c->r[31]+0x000000F0u); // 801C6BE8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C6BEC
  if (crb(c,2)) { goto L_801C6C10; } // 801C6BF0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6BF4
  c->r[4]=c->r[31]+0x000000ECu; // 801C6BF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6BFC
  c->r[12]=R32(c->r[12]+0x00000020u); // 801C6C00
  c->ctr=c->r[12]; // 801C6C04
  if (true) { c->lr=0x801C6C0Cu; dispatch(c,c->ctr); } // 801C6C08
  goto L_801C6C28; // 801C6C0C
L_801C6C10:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6C10
  c->r[4]=0u+0x00000000u; // 801C6C14
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6C18
  c->r[12]=R32(c->r[12]+0x00000020u); // 801C6C1C
  c->ctr=c->r[12]; // 801C6C20
  if (true) { c->lr=0x801C6C28u; dispatch(c,c->ctr); } // 801C6C24
L_801C6C28:;
  c->r[3]=0u+0x00000004u; // 801C6C28
  c->lr=0x801C6C30u; f_801BB67C(c); // 801C6C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6C34
  c->lr=c->r[0]; // 801C6C38
  c->r[1]=c->r[1]+0x00000010u; // 801C6C3C
  return; // 801C6C40
}

// fn_801C6C44
void f_801C6C44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6C44
  c->r[0]=c->lr; // 801C6C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6C50
  c->r[31]=c->r[3]|c->r[3]; // 801C6C54
  c->lr=0x801C6C5Cu; f_801C6558(c); // 801C6C58
  c->r[0]=R32(c->r[31]+0x000000F0u); // 801C6C5C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C6C60
  if (crb(c,2)) { goto L_801C6C84; } // 801C6C64
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6C68
  c->r[4]=c->r[31]+0x000000ECu; // 801C6C6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6C70
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C6C74
  c->ctr=c->r[12]; // 801C6C78
  if (true) { c->lr=0x801C6C80u; dispatch(c,c->ctr); } // 801C6C7C
  goto L_801C6C9C; // 801C6C80
L_801C6C84:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801C6C84
  c->r[4]=0u+0x00000000u; // 801C6C88
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6C8C
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C6C90
  c->ctr=c->r[12]; // 801C6C94
  if (true) { c->lr=0x801C6C9Cu; dispatch(c,c->ctr); } // 801C6C98
L_801C6C9C:;
  c->r[3]=0u+0x00000004u; // 801C6C9C
  c->lr=0x801C6CA4u; f_801BB67C(c); // 801C6CA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6CA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6CA8
  c->lr=c->r[0]; // 801C6CAC
  c->r[1]=c->r[1]+0x00000010u; // 801C6CB0
  return; // 801C6CB4
}

// fn_801C6CB8
void f_801C6CB8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801C6CB8
  if (crb(c,2)) { goto L_801C6CD4; } // 801C6CBC
  c->r[0]=R32(c->r[3]+0x000000F0u); // 801C6CC0
  W32(c->r[3]+0x000000ECu,c->r[5]); // 801C6CC4
  c->r[0]=c->r[0]|0x00000001u; // 801C6CC8
  W32(c->r[3]+0x000000F0u,c->r[0]); // 801C6CCC
  return; // 801C6CD0
L_801C6CD4:;
  c->r[0]=R32(c->r[3]+0x000000F0u); // 801C6CD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801C6CD8
  W32(c->r[3]+0x000000F0u,c->r[0]); // 801C6CDC
  return; // 801C6CE0
}

// __ct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPQ34nw4r3g3d13IScnObjGatherPPQ34nw4r3g3d6ScnObjUlUlUlPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjPQ34nw4r3g3d12LightSetData
void f_801C6CE4(Ctx* __restrict c) {
  trace_call(0x801C6CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6CE4
  c->r[0]=c->lr; // 801C6CE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C6CEC
  c->r[11]=c->r[1]+0x00000030u; // 801C6CF0
  c->lr=0x801C6CF8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6CF4
  c->r[29]=R32(c->r[1]+0x00000038u); // 801C6CF8
  c->r[25]=c->r[5]|c->r[5]; // 801C6CFC
  c->r[5]=c->r[6]|c->r[6]; // 801C6D00
  c->r[30]=R32(c->r[1]+0x0000003Cu); // 801C6D04
  c->r[24]=c->r[3]|c->r[3]; // 801C6D08
  c->r[6]=c->r[7]|c->r[7]; // 801C6D0C
  c->r[26]=c->r[8]|c->r[8]; // 801C6D10
  c->r[27]=c->r[9]|c->r[9]; // 801C6D14
  c->r[28]=c->r[10]|c->r[10]; // 801C6D18
  c->lr=0x801C6D20u; f_801C5ED4(c); // 801C6D1C
  c->r[3]=0u+0x802A0000u; // 801C6D20
  c->r[31]=0u+0x00000000u; // 801C6D24
  c->r[3]=c->r[3]+0x00001538u; // 801C6D28
  c->r[0]=0u+0x00000002u; // 801C6D2C
  W32(c->r[24]+0x00000000u,c->r[3]); // 801C6D30
  c->r[4]=c->r[28]|c->r[28]; // 801C6D34
  c->r[5]=c->r[29]|c->r[29]; // 801C6D38
  c->r[6]=c->r[26]|c->r[26]; // 801C6D3C
  W32(c->r[24]+0x000000E8u,c->r[25]); // 801C6D40
  c->r[7]=c->r[30]|c->r[30]; // 801C6D44
  c->r[8]=c->r[27]|c->r[27]; // 801C6D48
  c->r[3]=c->r[24]+0x00002878u; // 801C6D4C
  W32(c->r[24]+0x000000ECu,c->r[0]); // 801C6D50
  W32(c->r[24]+0x000000F0u,c->r[31]); // 801C6D54
  W8(c->r[24]+0x000000F4u,c->r[31]); // 801C6D58
  c->lr=0x801C6D60u; f_801CDFCC(c); // 801C6D5C
  W32(c->r[24]+0x00002888u,c->r[31]); // 801C6D60
  c->r[30]=0u+0x00000000u; // 801C6D64
  c->r[31]=0u+0x00000000u; // 801C6D68
L_801C6D6C:;
  c->r[4]=c->r[24]+c->r[31]; // 801C6D6C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C6D70
  c->r[4]=c->r[4]+0x000000F8u; // 801C6D74
  c->lr=0x801C6D7Cu; f_801C11E0(c); // 801C6D78
  c->r[3]=c->r[1]+0x0000000Cu; // 801C6D7C
  c->lr=0x801C6D84u; f_801C11E8(c); // 801C6D80
  c->r[30]=c->r[30]+0x00000001u; // 801C6D84
  c->r[31]=c->r[31]+0x0000010Cu; // 801C6D88
  cmpu(c,0,c->r[30],0x00000020u); // 801C6D8C
  if (crb(c,0)) { IRQCHK(c); goto L_801C6D6C; } // 801C6D90
  c->r[30]=0u+0x00000000u; // 801C6D94
  c->r[31]=0u+0x00000000u; // 801C6D98
L_801C6D9C:;
  c->r[4]=c->r[24]+c->r[31]; // 801C6D9C
  c->r[3]=c->r[1]+0x00000008u; // 801C6DA0
  c->r[4]=c->r[4]+0x00002278u; // 801C6DA4
  c->lr=0x801C6DACu; f_801CDBA8(c); // 801C6DA8
  c->r[3]=c->r[1]+0x00000008u; // 801C6DAC
  c->lr=0x801C6DB4u; f_801CDBB0(c); // 801C6DB0
  c->r[30]=c->r[30]+0x00000001u; // 801C6DB4
  c->r[31]=c->r[31]+0x00000030u; // 801C6DB8
  cmpu(c,0,c->r[30],0x00000020u); // 801C6DBC
  if (crb(c,0)) { IRQCHK(c); goto L_801C6D9C; } // 801C6DC0
  c->r[11]=c->r[1]+0x00000030u; // 801C6DC4
  c->r[3]=c->r[24]|c->r[24]; // 801C6DC8
  c->lr=0x801C6DD0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6DCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C6DD0
  c->lr=c->r[0]; // 801C6DD4
  c->r[1]=c->r[1]+0x00000030u; // 801C6DD8
  return; // 801C6DDC
}

// __dt__Q34nw4r3g3d7ScnRootFv
void f_801C6DE0(Ctx* __restrict c) {
  trace_call(0x801C6DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6DE0
  c->r[0]=c->lr; // 801C6DE4
  cmps(c,0,(int32_t)c->r[3],0); // 801C6DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6DF0
  c->r[31]=c->r[3]|c->r[3]; // 801C6DF4
  if (crb(c,2)) { goto L_801C6E44; } // 801C6DF8
  c->r[0]=R32(c->r[3]+0x00002888u); // 801C6DFC
  c->r[4]=0u+0x802A0000u; // 801C6E00
  c->r[4]=c->r[4]+0x00001538u; // 801C6E04
  cmps(c,0,(int32_t)c->r[0],0); // 801C6E08
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C6E0C
  if (crb(c,2)) { goto L_801C6E38; } // 801C6E10
  c->r[3]=c->r[0]|c->r[0]; // 801C6E14
  c->r[4]=0u+0x00010000u; // 801C6E18
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6E1C
  c->r[6]=c->r[31]|c->r[31]; // 801C6E20
  c->r[4]=c->r[4]+0x00000003u; // 801C6E24
  c->r[5]=0u+0x00000000u; // 801C6E28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6E2C
  c->ctr=c->r[12]; // 801C6E30
  if (true) { c->lr=0x801C6E38u; dispatch(c,c->ctr); } // 801C6E34
L_801C6E38:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6E38
  c->r[4]=0u+0x00000000u; // 801C6E3C
  c->lr=0x801C6E44u; f_801C5F44(c); // 801C6E40
L_801C6E44:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6E44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6E4C
  c->lr=c->r[0]; // 801C6E50
  c->r[1]=c->r[1]+0x00000010u; // 801C6E54
  return; // 801C6E58
}

// Add__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObjbb
void f_801C6E5C(Ctx* __restrict c) {
  trace_call(0x801C6E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6E5C
  c->r[0]=c->lr; // 801C6E60
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C6E64
  c->r[11]=c->r[1]+0x00000040u; // 801C6E68
  c->lr=0x801C6E70u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6E6C
  c->r[0]=R32(c->r[13]+0xFFFF9D68u); // 801C6E70
  c->r[27]=c->r[3]|c->r[3]; // 801C6E74
  c->r[28]=c->r[4]|c->r[4]; // 801C6E78
  c->r[29]=c->r[5]|c->r[5]; // 801C6E7C
  cmps(c,0,(int32_t)c->r[0],0); // 801C6E80
  c->r[30]=c->r[6]|c->r[6]; // 801C6E84
  c->r[31]=0u+0x00000000u; // 801C6E88
  if (crb(c,2)) { goto L_801C6EF0; } // 801C6E8C
  c->r[12]=R32(c->r[28]+0x00000000u); // 801C6E90
  c->r[3]=c->r[28]|c->r[28]; // 801C6E94
  c->r[5]=c->r[1]+0x00000008u; // 801C6E98
  c->r[4]=0u+0x00000009u; // 801C6E9C
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C6EA0
  c->ctr=c->r[12]; // 801C6EA4
  if (true) { c->lr=0x801C6EACu; dispatch(c,c->ctr); } // 801C6EA8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C6EAC
  cmps(c,0,(int32_t)c->r[0],0); // 801C6EB0
  if (crb(c,2)) { goto L_801C6EF0; } // 801C6EB4
  c->r[3]=c->r[28]|c->r[28]; // 801C6EB8
  c->r[5]=c->r[1]+0x00000010u; // 801C6EBC
  c->r[4]=0u+0x00000001u; // 801C6EC0
  c->lr=0x801C6EC8u; f_801C4EFC(c); // 801C6EC4
  c->r[3]=R32(c->r[13]+0xFFFF9D68u); // 801C6EC8
  c->r[4]=c->r[1]+0x00000010u; // 801C6ECC
  c->lr=0x801C6ED4u; f_801DC834(c); // 801C6ED0
  cmps(c,0,(int32_t)c->r[3],0); // 801C6ED4
  if (!crb(c,2)) { goto L_801C6EE4; } // 801C6ED8
  c->r[3]=0u+0x00000002u; // 801C6EDC
  goto L_801C6F64; // 801C6EE0
L_801C6EE4:;
  cmps(c,0,(int32_t)c->r[3],1); // 801C6EE4
  if (!crb(c,2)) { goto L_801C6EF0; } // 801C6EE8
  c->r[31]=0u+0x00000001u; // 801C6EEC
L_801C6EF0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C6EF0
  if (crb(c,2)) { goto L_801C6F28; } // 801C6EF4
  c->r[3]=R32(c->r[27]+0x00000010u); // 801C6EF8
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801C6EFC
  cmpu(c,0,c->r[3],c->r[0]); // 801C6F00
  if (!crb(c,0)) { goto L_801C6F20; } // 801C6F04
  c->r[4]=R32(c->r[27]+0x00000004u); // 801C6F08
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801C6F0C
  c->r[3]=c->r[3]+0x00000001u; // 801C6F10
  W32(c->r[4]+c->r[0],c->r[28]); // 801C6F14
  W32(c->r[27]+0x00000010u,c->r[3]); // 801C6F18
  goto L_801C6F28; // 801C6F1C
L_801C6F20:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6F20
  goto L_801C6F64; // 801C6F24
L_801C6F28:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C6F28
  if (crb(c,2)) { goto L_801C6F60; } // 801C6F2C
  c->r[3]=R32(c->r[27]+0x00000014u); // 801C6F30
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801C6F34
  cmpu(c,0,c->r[3],c->r[0]); // 801C6F38
  if (!crb(c,0)) { goto L_801C6F58; } // 801C6F3C
  c->r[4]=R32(c->r[27]+0x00000008u); // 801C6F40
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801C6F44
  c->r[3]=c->r[3]+0x00000001u; // 801C6F48
  W32(c->r[4]+c->r[0],c->r[28]); // 801C6F4C
  W32(c->r[27]+0x00000014u,c->r[3]); // 801C6F50
  goto L_801C6F60; // 801C6F54
L_801C6F58:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6F58
  goto L_801C6F64; // 801C6F5C
L_801C6F60:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6F60
L_801C6F64:;
  c->r[11]=c->r[1]+0x00000040u; // 801C6F64
  c->lr=0x801C6F6Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6F68
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C6F6C
  c->lr=c->r[0]; // 801C6F70
  c->r[1]=c->r[1]+0x00000040u; // 801C6F74
  return; // 801C6F78
}

// ZSort__Q34nw4r3g3d12ScnObjGatherFv
void f_801C6F7C(Ctx* __restrict c) {
  trace_call(0x801C6F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6F7C
  c->r[0]=c->lr; // 801C6F80
  c->r[5]=0u+0x801C0000u; // 801C6F84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6F88
  c->r[5]=c->r[5]+0x00006FDCu; // 801C6F8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6F90
  c->r[31]=c->r[3]|c->r[3]; // 801C6F94
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C6F98
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C6F9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C6FA0
  c->r[4]=c->r[3]+c->r[0]; // 801C6FA4
  c->lr=0x801C6FACu; f_801C705C(c); // 801C6FA8
  c->r[0]=R32(c->r[31]+0x00000014u); // 801C6FAC
  c->r[5]=0u+0x801C0000u; // 801C6FB0
  c->r[3]=R32(c->r[31]+0x00000008u); // 801C6FB4
  c->r[5]=c->r[5]+0x0000701Cu; // 801C6FB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C6FBC
  c->r[4]=c->r[3]+c->r[0]; // 801C6FC0
  c->lr=0x801C6FC8u; f_801C705C(c); // 801C6FC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6FC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6FCC
  c->lr=c->r[0]; // 801C6FD0
  c->r[1]=c->r[1]+0x00000010u; // 801C6FD4
  return; // 801C6FD8
}

// LessZSortOpa__Q34nw4r3g3d25@unnamed@g3d_scnroot_cpp@FPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj
void f_801C6FDC(Ctx* __restrict c) {
  trace_call(0x801C6FDCu);
  c->r[0]=R8(c->r[3]+0x000000D0u); // 801C6FDC
  c->r[5]=R8(c->r[4]+0x000000D0u); // 801C6FE0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C6FE4
  if (!crb(c,2)) { goto L_801C7004; } // 801C6FE8
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6FEC
  {uint32_t ea=c->r[4]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6FF0
  fcmp(c,0,c->f[1],c->f[0]); // 801C6FF4
  c->r[3]=c->cr; // 801C6FF8
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 801C6FFC
  return; // 801C7000
L_801C7004:;
  c->r[0]=c->r[5]^c->r[0]; // 801C7004
  c->r[3]=sraw(c,c->r[0],1); // 801C7008
  c->r[0]=c->r[0]&c->r[5]; // 801C700C
  c->r[0]=c->r[3]-c->r[0]; // 801C7010
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C7014
  return; // 801C7018
}

// LessZSortXlu__Q34nw4r3g3d25@unnamed@g3d_scnroot_cpp@FPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj
void f_801C701C(Ctx* __restrict c) {
  trace_call(0x801C701Cu);
  c->r[0]=R8(c->r[3]+0x000000D1u); // 801C701C
  c->r[5]=R8(c->r[4]+0x000000D1u); // 801C7020
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C7024
  if (!crb(c,2)) { goto L_801C7044; } // 801C7028
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C702C
  {uint32_t ea=c->r[4]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7030
  fcmp(c,0,c->f[1],c->f[0]); // 801C7034
  c->r[3]=c->cr; // 801C7038
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 801C703C
  return; // 801C7040
L_801C7044:;
  c->r[0]=c->r[5]^c->r[0]; // 801C7044
  c->r[3]=sraw(c,c->r[0],1); // 801C7048
  c->r[0]=c->r[0]&c->r[5]; // 801C704C
  c->r[0]=c->r[3]-c->r[0]; // 801C7050
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C7054
  return; // 801C7058
}

// sort<PPQ34nw4r3g3d6ScnObj,PFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_801C705C(Ctx* __restrict c) {
  trace_call(0x801C705Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C705C
  c->r[0]=c->lr; // 801C7060
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7064
  c->r[11]=c->r[1]+0x00000030u; // 801C7068
  c->lr=0x801C7070u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C706C
  c->r[6]=0u+0x66660000u; // 801C7070
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C7074
  c->r[28]=c->r[3]|c->r[3]; // 801C7078
  c->r[29]=c->r[4]|c->r[4]; // 801C707C
  c->r[31]=c->r[6]+0x00006667u; // 801C7080
L_801C7084:;
  c->r[0]=c->r[29]-c->r[28]; // 801C7084
  c->r[0]=sraw(c,c->r[0],2); // 801C7088
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 801C708C
  cmps(c,0,(int32_t)c->r[7],1); // 801C7090
  if (!crb(c,1)) { goto L_801C73C4; } // 801C7094
  cmps(c,0,(int32_t)c->r[7],20); // 801C7098
  if (crb(c,1)) { goto L_801C7118; } // 801C709C
  cmpu(c,0,c->r[28],c->r[29]); // 801C70A0
  if (crb(c,2)) { goto L_801C73C4; } // 801C70A4
  c->r[30]=c->r[29]+0xFFFFFFFCu; // 801C70A8
  goto L_801C710C; // 801C70AC
L_801C70B0:;
  cmpu(c,0,c->r[28],c->r[29]); // 801C70B0
  c->r[31]=c->r[28]|c->r[28]; // 801C70B4
  if (crb(c,2)) { goto L_801C70F0; } // 801C70B8
  c->r[27]=c->r[28]+0x00000004u; // 801C70BC
  goto L_801C70E8; // 801C70C0
L_801C70C4:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C70C4
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C70C8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801C70CC
  c->ctr=c->r[12]; // 801C70D0
  if (true) { c->lr=0x801C70D8u; dispatch(c,c->ctr); } // 801C70D4
  cmps(c,0,(int32_t)c->r[3],0); // 801C70D8
  if (crb(c,2)) { goto L_801C70E4; } // 801C70DC
  c->r[31]=c->r[27]|c->r[27]; // 801C70E0
L_801C70E4:;
  c->r[27]=c->r[27]+0x00000004u; // 801C70E4
L_801C70E8:;
  cmpu(c,0,c->r[27],c->r[29]); // 801C70E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C70C4; } // 801C70EC
L_801C70F0:;
  cmpu(c,0,c->r[31],c->r[28]); // 801C70F0
  if (crb(c,2)) { goto L_801C7108; } // 801C70F4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C70F8
  c->r[0]=R32(c->r[28]+0x00000000u); // 801C70FC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801C7100
  W32(c->r[28]+0x00000000u,c->r[3]); // 801C7104
L_801C7108:;
  c->r[28]=c->r[28]+0x00000004u; // 801C7108
L_801C710C:;
  cmpu(c,0,c->r[28],c->r[30]); // 801C710C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C70B0; } // 801C7110
  goto L_801C73C4; // 801C7114
L_801C7118:;
  c->r[4]=R32(c->r[13]+0xFFFF90A0u); // 801C7118
  c->r[0]=sraw(c,c->r[7],2); // 801C711C
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 801C7120
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 801C7124
  c->r[6]=c->r[4]+0x00000001u; // 801C7128
  cmps(c,0,(int32_t)c->r[6],5); // 801C712C
  c->r[0]=sraw(c,c->r[0],1); // 801C7130
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C7134
  c->r[0]=c->r[0]+c->r[3]; // 801C7138
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801C713C
  c->r[0]=c->r[4]-c->r[0]; // 801C7140
  c->r[0]=c->r[5]+c->r[0]; // 801C7144
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C7148
  c->r[3]=c->r[28]+c->r[0]; // 801C714C
  if (crb(c,0)) { goto L_801C7158; } // 801C7150
  c->r[6]=0u+0xFFFFFFFCu; // 801C7154
L_801C7158:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 801C7158
  c->r[0]=c->r[6]+0x00000001u; // 801C715C
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801C7160
  W32(c->r[13]+0xFFFF90A0u,c->r[0]); // 801C7164
  cmps(c,0,(int32_t)c->r[0],5); // 801C7168
  c->r[0]=c->r[5]-c->r[7]; // 801C716C
  c->r[0]=sraw(c,c->r[0],2); // 801C7170
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 801C7174
  c->r[0]=sraw(c,c->r[4],1); // 801C7178
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801C717C
  c->r[0]=c->r[0]+c->r[4]; // 801C7180
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801C7184
  c->r[0]=c->r[6]-c->r[0]; // 801C7188
  c->r[0]=c->r[5]+c->r[0]; // 801C718C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C7190
  c->r[4]=c->r[28]+c->r[0]; // 801C7194
  if (crb(c,0)) { goto L_801C71A4; } // 801C7198
  c->r[6]=0u+0xFFFFFFFCu; // 801C719C
  W32(c->r[13]+0xFFFF90A0u,c->r[6]); // 801C71A0
L_801C71A4:;
  c->r[26]=c->r[29]+0xFFFFFFFCu; // 801C71A4
  c->r[6]=c->r[1]+0x00000008u; // 801C71A8
  c->r[5]=c->r[26]|c->r[26]; // 801C71AC
  c->lr=0x801C71B4u; f_801C775C(c); // 801C71B0
  c->r[30]=c->r[28]|c->r[28]; // 801C71B4
  c->r[27]=c->r[26]|c->r[26]; // 801C71B8
  goto L_801C71C4; // 801C71BC
L_801C71C0:;
  c->r[30]=c->r[30]+0x00000004u; // 801C71C0
L_801C71C4:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C71C4
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C71C8
  c->r[4]=R32(c->r[26]+0x00000000u); // 801C71CC
  c->ctr=c->r[12]; // 801C71D0
  if (true) { c->lr=0x801C71D8u; dispatch(c,c->ctr); } // 801C71D4
  cmps(c,0,(int32_t)c->r[3],0); // 801C71D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C71C0; } // 801C71DC
L_801C71E0:;
  c->r[27]=c->r[27]+0xFFFFFFFCu; // 801C71E0
  cmpu(c,0,c->r[30],c->r[27]); // 801C71E4
  if (crb(c,2)) { goto L_801C7208; } // 801C71E8
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C71EC
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C71F0
  c->r[4]=R32(c->r[26]+0x00000000u); // 801C71F4
  c->ctr=c->r[12]; // 801C71F8
  if (true) { c->lr=0x801C7200u; dispatch(c,c->ctr); } // 801C71FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C7200
  if (crb(c,2)) { IRQCHK(c); goto L_801C71E0; } // 801C7204
L_801C7208:;
  cmpu(c,0,c->r[30],c->r[27]); // 801C7208
  if (!crb(c,0)) { goto L_801C7284; } // 801C720C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C7210
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C7214
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C7218
  c->r[30]=c->r[30]+0x00000004u; // 801C721C
  W32(c->r[27]+0x00000000u,c->r[3]); // 801C7220
  goto L_801C722C; // 801C7224
L_801C7228:;
  c->r[30]=c->r[30]+0x00000004u; // 801C7228
L_801C722C:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C722C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C7230
  c->r[4]=R32(c->r[26]+0x00000000u); // 801C7234
  c->ctr=c->r[12]; // 801C7238
  if (true) { c->lr=0x801C7240u; dispatch(c,c->ctr); } // 801C723C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7240
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7228; } // 801C7244
L_801C7248:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C7248
  {uint32_t ea=c->r[27]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[27]=ea;} // 801C724C
  c->r[4]=R32(c->r[26]+0x00000000u); // 801C7250
  c->ctr=c->r[12]; // 801C7254
  if (true) { c->lr=0x801C725Cu; dispatch(c,c->ctr); } // 801C7258
  cmps(c,0,(int32_t)c->r[3],0); // 801C725C
  if (crb(c,2)) { IRQCHK(c); goto L_801C7248; } // 801C7260
  cmpu(c,0,c->r[30],c->r[27]); // 801C7264
  if (!crb(c,0)) { goto L_801C7284; } // 801C7268
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C726C
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C7270
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C7274
  c->r[30]=c->r[30]+0x00000004u; // 801C7278
  W32(c->r[27]+0x00000000u,c->r[3]); // 801C727C
  IRQCHK(c); goto L_801C722C; // 801C7280
L_801C7284:;
  cmpu(c,0,c->r[30],c->r[28]); // 801C7284
  if (!crb(c,2)) { goto L_801C7374; } // 801C7288
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C728C
  c->r[0]=R32(c->r[26]+0x00000000u); // 801C7290
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C7294
  W32(c->r[26]+0x00000000u,c->r[3]); // 801C7298
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C729C
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C72A0
  c->r[4]=R32(c->r[29]+0xFFFFFFFCu); // 801C72A4
  c->ctr=c->r[12]; // 801C72A8
  c->r[30]=c->r[30]+0x00000004u; // 801C72AC
  c->r[27]=c->r[29]+0xFFFFFFFCu; // 801C72B0
  if (true) { c->lr=0x801C72B8u; dispatch(c,c->ctr); } // 801C72B4
  cmps(c,0,(int32_t)c->r[3],0); // 801C72B8
  if (!crb(c,2)) { goto L_801C7304; } // 801C72BC
  goto L_801C72C8; // 801C72C0
L_801C72C4:;
  c->r[30]=c->r[30]+0x00000004u; // 801C72C4
L_801C72C8:;
  cmpu(c,0,c->r[30],c->r[29]); // 801C72C8
  if (crb(c,2)) { goto L_801C72EC; } // 801C72CC
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C72D0
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C72D4
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C72D8
  c->ctr=c->r[12]; // 801C72DC
  if (true) { c->lr=0x801C72E4u; dispatch(c,c->ctr); } // 801C72E0
  cmps(c,0,(int32_t)c->r[3],0); // 801C72E4
  if (crb(c,2)) { IRQCHK(c); goto L_801C72C4; } // 801C72E8
L_801C72EC:;
  cmpu(c,0,c->r[30],c->r[27]); // 801C72EC
  if (!crb(c,0)) { goto L_801C7304; } // 801C72F0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C72F4
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C72F8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C72FC
  W32(c->r[27]+0x00000000u,c->r[3]); // 801C7300
L_801C7304:;
  cmpu(c,0,c->r[30],c->r[27]); // 801C7304
  if (!crb(c,0)) { goto L_801C736C; } // 801C7308
  goto L_801C7314; // 801C730C
L_801C7310:;
  c->r[30]=c->r[30]+0x00000004u; // 801C7310
L_801C7314:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C7314
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C7318
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C731C
  c->ctr=c->r[12]; // 801C7320
  if (true) { c->lr=0x801C7328u; dispatch(c,c->ctr); } // 801C7324
  cmps(c,0,(int32_t)c->r[3],0); // 801C7328
  if (crb(c,2)) { IRQCHK(c); goto L_801C7310; } // 801C732C
L_801C7330:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C7330
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C7334
  {uint32_t ea=c->r[27]+0xFFFFFFFCu; c->r[4]=R32(ea); c->r[27]=ea;} // 801C7338
  c->ctr=c->r[12]; // 801C733C
  if (true) { c->lr=0x801C7344u; dispatch(c,c->ctr); } // 801C7340
  cmps(c,0,(int32_t)c->r[3],0); // 801C7344
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7330; } // 801C7348
  cmpu(c,0,c->r[30],c->r[27]); // 801C734C
  if (!crb(c,0)) { goto L_801C736C; } // 801C7350
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C7354
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C7358
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C735C
  c->r[30]=c->r[30]+0x00000004u; // 801C7360
  W32(c->r[27]+0x00000000u,c->r[3]); // 801C7364
  IRQCHK(c); goto L_801C7314; // 801C7368
L_801C736C:;
  c->r[28]=c->r[30]|c->r[30]; // 801C736C
  IRQCHK(c); goto L_801C7084; // 801C7370
L_801C7374:;
  c->r[3]=c->r[30]-c->r[28]; // 801C7374
  c->r[0]=c->r[29]-c->r[30]; // 801C7378
  c->r[3]=sraw(c,c->r[3],2); // 801C737C
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801C7380
  c->r[0]=sraw(c,c->r[0],2); // 801C7384
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801C7388
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C738C
  if (!crb(c,0)) { goto L_801C73AC; } // 801C7390
  c->r[3]=c->r[28]|c->r[28]; // 801C7394
  c->r[4]=c->r[30]|c->r[30]; // 801C7398
  c->r[5]=c->r[1]+0x00000008u; // 801C739C
  c->lr=0x801C73A4u; f_801C73DC(c); // 801C73A0
  c->r[28]=c->r[30]|c->r[30]; // 801C73A4
  IRQCHK(c); goto L_801C7084; // 801C73A8
L_801C73AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801C73AC
  c->r[4]=c->r[29]|c->r[29]; // 801C73B0
  c->r[5]=c->r[1]+0x00000008u; // 801C73B4
  c->lr=0x801C73BCu; f_801C73DC(c); // 801C73B8
  c->r[29]=c->r[30]|c->r[30]; // 801C73BC
  IRQCHK(c); goto L_801C7084; // 801C73C0
L_801C73C4:;
  c->r[11]=c->r[1]+0x00000030u; // 801C73C4
  c->lr=0x801C73CCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C73C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C73CC
  c->lr=c->r[0]; // 801C73D0
  c->r[1]=c->r[1]+0x00000030u; // 801C73D4
  return; // 801C73D8
}

// sort<PPQ34nw4r3g3d6ScnObj,RPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjRPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_801C73DC(Ctx* __restrict c) {
  trace_call(0x801C73DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C73DC
  c->r[0]=c->lr; // 801C73E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C73E4
  c->r[11]=c->r[1]+0x00000030u; // 801C73E8
  c->lr=0x801C73F0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C73EC
  c->r[6]=0u+0x66660000u; // 801C73F0
  c->r[27]=c->r[3]|c->r[3]; // 801C73F4
  c->r[28]=c->r[4]|c->r[4]; // 801C73F8
  c->r[29]=c->r[5]|c->r[5]; // 801C73FC
  c->r[31]=c->r[6]+0x00006667u; // 801C7400
L_801C7404:;
  c->r[0]=c->r[28]-c->r[27]; // 801C7404
  c->r[0]=sraw(c,c->r[0],2); // 801C7408
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 801C740C
  cmps(c,0,(int32_t)c->r[7],1); // 801C7410
  if (!crb(c,1)) { goto L_801C7744; } // 801C7414
  cmps(c,0,(int32_t)c->r[7],20); // 801C7418
  if (crb(c,1)) { goto L_801C7498; } // 801C741C
  cmpu(c,0,c->r[27],c->r[28]); // 801C7420
  if (crb(c,2)) { goto L_801C7744; } // 801C7424
  c->r[30]=c->r[28]+0xFFFFFFFCu; // 801C7428
  goto L_801C748C; // 801C742C
L_801C7430:;
  cmpu(c,0,c->r[27],c->r[28]); // 801C7430
  c->r[31]=c->r[27]|c->r[27]; // 801C7434
  if (crb(c,2)) { goto L_801C7470; } // 801C7438
  c->r[26]=c->r[27]+0x00000004u; // 801C743C
  goto L_801C7468; // 801C7440
L_801C7444:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C7444
  c->r[3]=R32(c->r[26]+0x00000000u); // 801C7448
  c->r[4]=R32(c->r[31]+0x00000000u); // 801C744C
  c->ctr=c->r[12]; // 801C7450
  if (true) { c->lr=0x801C7458u; dispatch(c,c->ctr); } // 801C7454
  cmps(c,0,(int32_t)c->r[3],0); // 801C7458
  if (crb(c,2)) { goto L_801C7464; } // 801C745C
  c->r[31]=c->r[26]|c->r[26]; // 801C7460
L_801C7464:;
  c->r[26]=c->r[26]+0x00000004u; // 801C7464
L_801C7468:;
  cmpu(c,0,c->r[26],c->r[28]); // 801C7468
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7444; } // 801C746C
L_801C7470:;
  cmpu(c,0,c->r[31],c->r[27]); // 801C7470
  if (crb(c,2)) { goto L_801C7488; } // 801C7474
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C7478
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C747C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801C7480
  W32(c->r[27]+0x00000000u,c->r[3]); // 801C7484
L_801C7488:;
  c->r[27]=c->r[27]+0x00000004u; // 801C7488
L_801C748C:;
  cmpu(c,0,c->r[27],c->r[30]); // 801C748C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7430; } // 801C7490
  goto L_801C7744; // 801C7494
L_801C7498:;
  c->r[4]=R32(c->r[13]+0xFFFF90A4u); // 801C7498
  c->r[0]=sraw(c,c->r[7],2); // 801C749C
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 801C74A0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 801C74A4
  c->r[6]=c->r[4]+0x00000001u; // 801C74A8
  cmps(c,0,(int32_t)c->r[6],5); // 801C74AC
  c->r[0]=sraw(c,c->r[0],1); // 801C74B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C74B4
  c->r[0]=c->r[0]+c->r[3]; // 801C74B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801C74BC
  c->r[0]=c->r[4]-c->r[0]; // 801C74C0
  c->r[0]=c->r[5]+c->r[0]; // 801C74C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C74C8
  c->r[3]=c->r[27]+c->r[0]; // 801C74CC
  if (crb(c,0)) { goto L_801C74D8; } // 801C74D0
  c->r[6]=0u+0xFFFFFFFCu; // 801C74D4
L_801C74D8:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 801C74D8
  c->r[0]=c->r[6]+0x00000001u; // 801C74DC
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801C74E0
  W32(c->r[13]+0xFFFF90A4u,c->r[0]); // 801C74E4
  cmps(c,0,(int32_t)c->r[0],5); // 801C74E8
  c->r[0]=c->r[5]-c->r[7]; // 801C74EC
  c->r[0]=sraw(c,c->r[0],2); // 801C74F0
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 801C74F4
  c->r[0]=sraw(c,c->r[4],1); // 801C74F8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801C74FC
  c->r[0]=c->r[0]+c->r[4]; // 801C7500
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801C7504
  c->r[0]=c->r[6]-c->r[0]; // 801C7508
  c->r[0]=c->r[5]+c->r[0]; // 801C750C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C7510
  c->r[4]=c->r[27]+c->r[0]; // 801C7514
  if (crb(c,0)) { goto L_801C7524; } // 801C7518
  c->r[6]=0u+0xFFFFFFFCu; // 801C751C
  W32(c->r[13]+0xFFFF90A4u,c->r[6]); // 801C7520
L_801C7524:;
  c->r[25]=c->r[28]+0xFFFFFFFCu; // 801C7524
  c->r[6]=c->r[29]|c->r[29]; // 801C7528
  c->r[5]=c->r[25]|c->r[25]; // 801C752C
  c->lr=0x801C7534u; f_801C775C(c); // 801C7530
  c->r[30]=c->r[27]|c->r[27]; // 801C7534
  c->r[26]=c->r[25]|c->r[25]; // 801C7538
  goto L_801C7544; // 801C753C
L_801C7540:;
  c->r[30]=c->r[30]+0x00000004u; // 801C7540
L_801C7544:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C7544
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C7548
  c->r[4]=R32(c->r[25]+0x00000000u); // 801C754C
  c->ctr=c->r[12]; // 801C7550
  if (true) { c->lr=0x801C7558u; dispatch(c,c->ctr); } // 801C7554
  cmps(c,0,(int32_t)c->r[3],0); // 801C7558
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7540; } // 801C755C
L_801C7560:;
  c->r[26]=c->r[26]+0xFFFFFFFCu; // 801C7560
  cmpu(c,0,c->r[30],c->r[26]); // 801C7564
  if (crb(c,2)) { goto L_801C7588; } // 801C7568
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C756C
  c->r[3]=R32(c->r[26]+0x00000000u); // 801C7570
  c->r[4]=R32(c->r[25]+0x00000000u); // 801C7574
  c->ctr=c->r[12]; // 801C7578
  if (true) { c->lr=0x801C7580u; dispatch(c,c->ctr); } // 801C757C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7580
  if (crb(c,2)) { IRQCHK(c); goto L_801C7560; } // 801C7584
L_801C7588:;
  cmpu(c,0,c->r[30],c->r[26]); // 801C7588
  if (!crb(c,0)) { goto L_801C7604; } // 801C758C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C7590
  c->r[0]=R32(c->r[26]+0x00000000u); // 801C7594
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C7598
  c->r[30]=c->r[30]+0x00000004u; // 801C759C
  W32(c->r[26]+0x00000000u,c->r[3]); // 801C75A0
  goto L_801C75AC; // 801C75A4
L_801C75A8:;
  c->r[30]=c->r[30]+0x00000004u; // 801C75A8
L_801C75AC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C75AC
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C75B0
  c->r[4]=R32(c->r[25]+0x00000000u); // 801C75B4
  c->ctr=c->r[12]; // 801C75B8
  if (true) { c->lr=0x801C75C0u; dispatch(c,c->ctr); } // 801C75BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C75C0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C75A8; } // 801C75C4
L_801C75C8:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C75C8
  {uint32_t ea=c->r[26]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[26]=ea;} // 801C75CC
  c->r[4]=R32(c->r[25]+0x00000000u); // 801C75D0
  c->ctr=c->r[12]; // 801C75D4
  if (true) { c->lr=0x801C75DCu; dispatch(c,c->ctr); } // 801C75D8
  cmps(c,0,(int32_t)c->r[3],0); // 801C75DC
  if (crb(c,2)) { IRQCHK(c); goto L_801C75C8; } // 801C75E0
  cmpu(c,0,c->r[30],c->r[26]); // 801C75E4
  if (!crb(c,0)) { goto L_801C7604; } // 801C75E8
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C75EC
  c->r[0]=R32(c->r[26]+0x00000000u); // 801C75F0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C75F4
  c->r[30]=c->r[30]+0x00000004u; // 801C75F8
  W32(c->r[26]+0x00000000u,c->r[3]); // 801C75FC
  IRQCHK(c); goto L_801C75AC; // 801C7600
L_801C7604:;
  cmpu(c,0,c->r[30],c->r[27]); // 801C7604
  if (!crb(c,2)) { goto L_801C76F4; } // 801C7608
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C760C
  c->r[0]=R32(c->r[25]+0x00000000u); // 801C7610
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C7614
  W32(c->r[25]+0x00000000u,c->r[3]); // 801C7618
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C761C
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C7620
  c->r[4]=R32(c->r[28]+0xFFFFFFFCu); // 801C7624
  c->ctr=c->r[12]; // 801C7628
  c->r[30]=c->r[30]+0x00000004u; // 801C762C
  c->r[26]=c->r[28]+0xFFFFFFFCu; // 801C7630
  if (true) { c->lr=0x801C7638u; dispatch(c,c->ctr); } // 801C7634
  cmps(c,0,(int32_t)c->r[3],0); // 801C7638
  if (!crb(c,2)) { goto L_801C7684; } // 801C763C
  goto L_801C7648; // 801C7640
L_801C7644:;
  c->r[30]=c->r[30]+0x00000004u; // 801C7644
L_801C7648:;
  cmpu(c,0,c->r[30],c->r[28]); // 801C7648
  if (crb(c,2)) { goto L_801C766C; } // 801C764C
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C7650
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C7654
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C7658
  c->ctr=c->r[12]; // 801C765C
  if (true) { c->lr=0x801C7664u; dispatch(c,c->ctr); } // 801C7660
  cmps(c,0,(int32_t)c->r[3],0); // 801C7664
  if (crb(c,2)) { IRQCHK(c); goto L_801C7644; } // 801C7668
L_801C766C:;
  cmpu(c,0,c->r[30],c->r[26]); // 801C766C
  if (!crb(c,0)) { goto L_801C7684; } // 801C7670
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C7674
  c->r[0]=R32(c->r[26]+0x00000000u); // 801C7678
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C767C
  W32(c->r[26]+0x00000000u,c->r[3]); // 801C7680
L_801C7684:;
  cmpu(c,0,c->r[30],c->r[26]); // 801C7684
  if (!crb(c,0)) { goto L_801C76EC; } // 801C7688
  goto L_801C7694; // 801C768C
L_801C7690:;
  c->r[30]=c->r[30]+0x00000004u; // 801C7690
L_801C7694:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C7694
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C7698
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C769C
  c->ctr=c->r[12]; // 801C76A0
  if (true) { c->lr=0x801C76A8u; dispatch(c,c->ctr); } // 801C76A4
  cmps(c,0,(int32_t)c->r[3],0); // 801C76A8
  if (crb(c,2)) { IRQCHK(c); goto L_801C7690; } // 801C76AC
L_801C76B0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C76B0
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C76B4
  {uint32_t ea=c->r[26]+0xFFFFFFFCu; c->r[4]=R32(ea); c->r[26]=ea;} // 801C76B8
  c->ctr=c->r[12]; // 801C76BC
  if (true) { c->lr=0x801C76C4u; dispatch(c,c->ctr); } // 801C76C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C76C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801C76B0; } // 801C76C8
  cmpu(c,0,c->r[30],c->r[26]); // 801C76CC
  if (!crb(c,0)) { goto L_801C76EC; } // 801C76D0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C76D4
  c->r[0]=R32(c->r[26]+0x00000000u); // 801C76D8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C76DC
  c->r[30]=c->r[30]+0x00000004u; // 801C76E0
  W32(c->r[26]+0x00000000u,c->r[3]); // 801C76E4
  IRQCHK(c); goto L_801C7694; // 801C76E8
L_801C76EC:;
  c->r[27]=c->r[30]|c->r[30]; // 801C76EC
  IRQCHK(c); goto L_801C7404; // 801C76F0
L_801C76F4:;
  c->r[3]=c->r[30]-c->r[27]; // 801C76F4
  c->r[0]=c->r[28]-c->r[30]; // 801C76F8
  c->r[3]=sraw(c,c->r[3],2); // 801C76FC
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801C7700
  c->r[0]=sraw(c,c->r[0],2); // 801C7704
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801C7708
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C770C
  if (!crb(c,0)) { goto L_801C772C; } // 801C7710
  c->r[3]=c->r[27]|c->r[27]; // 801C7714
  c->r[4]=c->r[30]|c->r[30]; // 801C7718
  c->r[5]=c->r[29]|c->r[29]; // 801C771C
  c->lr=0x801C7724u; f_801C73DC(c); // 801C7720
  c->r[27]=c->r[30]|c->r[30]; // 801C7724
  IRQCHK(c); goto L_801C7404; // 801C7728
L_801C772C:;
  c->r[3]=c->r[30]|c->r[30]; // 801C772C
  c->r[4]=c->r[28]|c->r[28]; // 801C7730
  c->r[5]=c->r[29]|c->r[29]; // 801C7734
  c->lr=0x801C773Cu; f_801C73DC(c); // 801C7738
  c->r[28]=c->r[30]|c->r[30]; // 801C773C
  IRQCHK(c); goto L_801C7404; // 801C7740
L_801C7744:;
  c->r[11]=c->r[1]+0x00000030u; // 801C7744
  c->lr=0x801C774Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7748
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C774C
  c->lr=c->r[0]; // 801C7750
  c->r[1]=c->r[1]+0x00000030u; // 801C7754
  return; // 801C7758
}

// __sort132<RPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b,PPQ34nw4r3g3d6ScnObj>__3stdFPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjPPQ34nw4r3g3d6ScnObjRPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b_v
void f_801C775C(Ctx* __restrict c) {
  trace_call(0x801C775Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C775C
  c->r[0]=c->lr; // 801C7760
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7764
  c->r[11]=c->r[1]+0x00000020u; // 801C7768
  c->lr=0x801C7770u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C776C
  c->r[12]=R32(c->r[6]+0x00000000u); // 801C7770
  c->r[27]=c->r[3]|c->r[3]; // 801C7774
  c->r[28]=c->r[4]|c->r[4]; // 801C7778
  c->r[29]=c->r[5]|c->r[5]; // 801C777C
  c->r[30]=c->r[6]|c->r[6]; // 801C7780
  c->r[3]=R32(c->r[5]+0x00000000u); // 801C7784
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C7788
  c->ctr=c->r[12]; // 801C778C
  if (true) { c->lr=0x801C7794u; dispatch(c,c->ctr); } // 801C7790
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C7794
  c->r[0]=cntlz(c->r[3]); // 801C7798
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C779C
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C77A0
  c->r[4]=R32(c->r[29]+0x00000000u); // 801C77A4
  c->ctr=c->r[12]; // 801C77A8
  if (true) { c->lr=0x801C77B0u; dispatch(c,c->ctr); } // 801C77AC
  cmps(c,0,(int32_t)c->r[31],0); // 801C77B0
  c->r[0]=cntlz(c->r[3]); // 801C77B4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C77B8
  if (crb(c,2)) { goto L_801C77C8; } // 801C77BC
  cmps(c,0,(int32_t)c->r[0],0); // 801C77C0
  if (!crb(c,2)) { goto L_801C7844; } // 801C77C4
L_801C77C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C77C8
  if (!crb(c,2)) { goto L_801C77EC; } // 801C77CC
  cmps(c,0,(int32_t)c->r[0],0); // 801C77D0
  if (!crb(c,2)) { goto L_801C77EC; } // 801C77D4
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C77D8
  c->r[0]=R32(c->r[28]+0x00000000u); // 801C77DC
  W32(c->r[27]+0x00000000u,c->r[0]); // 801C77E0
  W32(c->r[28]+0x00000000u,c->r[3]); // 801C77E4
  goto L_801C7844; // 801C77E8
L_801C77EC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C77EC
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C77F0
  c->r[4]=R32(c->r[27]+0x00000000u); // 801C77F4
  c->ctr=c->r[12]; // 801C77F8
  if (true) { c->lr=0x801C7800u; dispatch(c,c->ctr); } // 801C77FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C7800
  if (crb(c,2)) { goto L_801C7818; } // 801C7804
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C7808
  c->r[0]=R32(c->r[28]+0x00000000u); // 801C780C
  W32(c->r[27]+0x00000000u,c->r[0]); // 801C7810
  W32(c->r[28]+0x00000000u,c->r[3]); // 801C7814
L_801C7818:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C7818
  if (crb(c,2)) { goto L_801C7834; } // 801C781C
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C7820
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C7824
  W32(c->r[28]+0x00000000u,c->r[0]); // 801C7828
  W32(c->r[29]+0x00000000u,c->r[3]); // 801C782C
  goto L_801C7844; // 801C7830
L_801C7834:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C7834
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C7838
  W32(c->r[27]+0x00000000u,c->r[0]); // 801C783C
  W32(c->r[29]+0x00000000u,c->r[3]); // 801C7840
L_801C7844:;
  c->r[11]=c->r[1]+0x00000020u; // 801C7844
  c->lr=0x801C784Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7848
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C784C
  c->lr=c->r[0]; // 801C7850
  c->r[1]=c->r[1]+0x00000020u; // 801C7854
  return; // 801C7858
}

// Sort__Q34nw4r3g3d12ScnObjGatherFv
void f_801C785C(Ctx* __restrict c) {
  trace_call(0x801C785Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C785C
  c->r[0]=c->lr; // 801C7860
  c->r[5]=0u+0x801C0000u; // 801C7864
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7868
  c->r[5]=c->r[5]+0x000078BCu; // 801C786C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7870
  c->r[31]=c->r[3]|c->r[3]; // 801C7874
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C7878
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C787C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C7880
  c->r[4]=c->r[3]+c->r[0]; // 801C7884
  c->lr=0x801C788Cu; f_801C705C(c); // 801C7888
  c->r[0]=R32(c->r[31]+0x00000014u); // 801C788C
  c->r[5]=0u+0x801C0000u; // 801C7890
  c->r[3]=R32(c->r[31]+0x00000008u); // 801C7894
  c->r[5]=c->r[5]+0x0000794Cu; // 801C7898
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C789C
  c->r[4]=c->r[3]+c->r[0]; // 801C78A0
  c->lr=0x801C78A8u; f_801C705C(c); // 801C78A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C78A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C78AC
  c->lr=c->r[0]; // 801C78B0
  c->r[1]=c->r[1]+0x00000010u; // 801C78B4
  return; // 801C78B8
}

// LessByGetValueForSortOpa__Q34nw4r3g3d25@unnamed@g3d_scnroot_cpp@FPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj
void f_801C78BC(Ctx* __restrict c) {
  trace_call(0x801C78BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C78BC
  c->r[0]=c->lr; // 801C78C0
  c->r[5]=R8(c->r[4]+0x000000D0u); // 801C78C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C78C8
  c->r[0]=R8(c->r[3]+0x000000D0u); // 801C78CC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801C78D0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C78D4
  W32(c->r[1]+0x00000014u,c->r[31]); // 801C78D8
  c->r[31]=c->r[3]|c->r[3]; // 801C78DC
  if (!crb(c,2)) { goto L_801C7920; } // 801C78E0
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C78E4
  c->r[3]=c->r[4]|c->r[4]; // 801C78E8
  c->r[12]=R32(c->r[12]+0x00000028u); // 801C78EC
  c->ctr=c->r[12]; // 801C78F0
  if (true) { c->lr=0x801C78F8u; dispatch(c,c->ctr); } // 801C78F4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C78F8
  c->f[31]=c->f[1]; // 801C78FC
  c->r[3]=c->r[31]|c->r[31]; // 801C7900
  c->r[12]=R32(c->r[12]+0x00000028u); // 801C7904
  c->ctr=c->r[12]; // 801C7908
  if (true) { c->lr=0x801C7910u; dispatch(c,c->ctr); } // 801C790C
  fcmp(c,0,c->f[1],c->f[31]); // 801C7910
  c->r[3]=c->cr; // 801C7914
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 801C7918
  goto L_801C7934; // 801C791C
L_801C7920:;
  c->r[0]=c->r[5]^c->r[0]; // 801C7920
  c->r[3]=sraw(c,c->r[0],1); // 801C7924
  c->r[0]=c->r[0]&c->r[5]; // 801C7928
  c->r[0]=c->r[3]-c->r[0]; // 801C792C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C7930
L_801C7934:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7934
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801C7938
  c->r[31]=R32(c->r[1]+0x00000014u); // 801C793C
  c->lr=c->r[0]; // 801C7940
  c->r[1]=c->r[1]+0x00000020u; // 801C7944
  return; // 801C7948
}

// LessByGetValueForSortXlu__Q34nw4r3g3d25@unnamed@g3d_scnroot_cpp@FPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj
void f_801C794C(Ctx* __restrict c) {
  trace_call(0x801C794Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C794C
  c->r[0]=c->lr; // 801C7950
  c->r[5]=R8(c->r[4]+0x000000D1u); // 801C7954
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7958
  c->r[0]=R8(c->r[3]+0x000000D1u); // 801C795C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801C7960
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C7964
  W32(c->r[1]+0x00000014u,c->r[31]); // 801C7968
  c->r[31]=c->r[3]|c->r[3]; // 801C796C
  if (!crb(c,2)) { goto L_801C79B0; } // 801C7970
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C7974
  c->r[3]=c->r[4]|c->r[4]; // 801C7978
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801C797C
  c->ctr=c->r[12]; // 801C7980
  if (true) { c->lr=0x801C7988u; dispatch(c,c->ctr); } // 801C7984
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C7988
  c->f[31]=c->f[1]; // 801C798C
  c->r[3]=c->r[31]|c->r[31]; // 801C7990
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801C7994
  c->ctr=c->r[12]; // 801C7998
  if (true) { c->lr=0x801C79A0u; dispatch(c,c->ctr); } // 801C799C
  fcmp(c,0,c->f[1],c->f[31]); // 801C79A0
  c->r[3]=c->cr; // 801C79A4
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 801C79A8
  goto L_801C79C4; // 801C79AC
L_801C79B0:;
  c->r[0]=c->r[5]^c->r[0]; // 801C79B0
  c->r[3]=sraw(c,c->r[0],1); // 801C79B4
  c->r[0]=c->r[0]&c->r[5]; // 801C79B8
  c->r[0]=c->r[3]-c->r[0]; // 801C79BC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C79C0
L_801C79C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C79C4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801C79C8
  c->r[31]=R32(c->r[1]+0x00000014u); // 801C79CC
  c->lr=c->r[0]; // 801C79D0
  c->r[1]=c->r[1]+0x00000020u; // 801C79D4
  return; // 801C79D8
}

// Sort__Q34nw4r3g3d12ScnObjGatherFPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_bPFPCQ34nw4r3g3d6ScnObjPCQ34nw4r3g3d6ScnObj_b
void f_801C79DC(Ctx* __restrict c) {
  trace_call(0x801C79DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C79DC
  c->r[0]=c->lr; // 801C79E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C79E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C79E8
  c->r[31]=c->r[5]|c->r[5]; // 801C79EC
  c->r[5]=c->r[4]|c->r[4]; // 801C79F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C79F4
  c->r[30]=c->r[3]|c->r[3]; // 801C79F8
  c->r[0]=R32(c->r[30]+0x00000010u); // 801C79FC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C7A00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C7A04
  c->r[4]=c->r[3]+c->r[0]; // 801C7A08
  c->lr=0x801C7A10u; f_801C705C(c); // 801C7A0C
  c->r[0]=R32(c->r[30]+0x00000014u); // 801C7A10
  c->r[5]=c->r[31]|c->r[31]; // 801C7A14
  c->r[3]=R32(c->r[30]+0x00000008u); // 801C7A18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C7A1C
  c->r[4]=c->r[3]+c->r[0]; // 801C7A20
  c->lr=0x801C7A28u; f_801C705C(c); // 801C7A24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7A28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7A2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7A30
  c->lr=c->r[0]; // 801C7A34
  c->r[1]=c->r[1]+0x00000010u; // 801C7A38
  return; // 801C7A3C
}

// DrawOpa__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d14ResMdlDrawMode
void f_801C7A40(Ctx* __restrict c) {
  trace_call(0x801C7A40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7A40
  c->r[0]=c->lr; // 801C7A44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7A48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7A4C
  c->r[31]=0u+0x00000000u; // 801C7A50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7A54
  c->r[30]=0u+0x00000000u; // 801C7A58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7A5C
  c->r[29]=c->r[4]|c->r[4]; // 801C7A60
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C7A64
  c->r[28]=c->r[3]|c->r[3]; // 801C7A68
  goto L_801C7A9C; // 801C7A6C
L_801C7A70:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801C7A70
  c->r[6]=c->r[29]|c->r[29]; // 801C7A74
  c->r[4]=0u+0x00000006u; // 801C7A78
  c->r[5]=0u+0x00000000u; // 801C7A7C
  c->r[3]=R32(c->r[3]+c->r[31]); // 801C7A80
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C7A84
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C7A88
  c->ctr=c->r[12]; // 801C7A8C
  c->r[30]=c->r[30]+0x00000001u; // 801C7A90
  c->r[31]=c->r[31]+0x00000004u; // 801C7A94
  if (true) { c->lr=0x801C7A9Cu; dispatch(c,c->ctr); } // 801C7A98
L_801C7A9C:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801C7A9C
  cmpu(c,0,c->r[30],c->r[0]); // 801C7AA0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7A70; } // 801C7AA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7AA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7AAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7AB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7AB4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C7AB8
  c->lr=c->r[0]; // 801C7ABC
  c->r[1]=c->r[1]+0x00000020u; // 801C7AC0
  return; // 801C7AC4
}

// DrawXlu__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d14ResMdlDrawMode
void f_801C7AC8(Ctx* __restrict c) {
  trace_call(0x801C7AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7AC8
  c->r[0]=c->lr; // 801C7ACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7AD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7AD4
  c->r[31]=0u+0x00000000u; // 801C7AD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7ADC
  c->r[30]=0u+0x00000000u; // 801C7AE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7AE4
  c->r[29]=c->r[4]|c->r[4]; // 801C7AE8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C7AEC
  c->r[28]=c->r[3]|c->r[3]; // 801C7AF0
  goto L_801C7B24; // 801C7AF4
L_801C7AF8:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 801C7AF8
  c->r[6]=c->r[29]|c->r[29]; // 801C7AFC
  c->r[4]=0u+0x00000007u; // 801C7B00
  c->r[5]=0u+0x00000000u; // 801C7B04
  c->r[3]=R32(c->r[3]+c->r[31]); // 801C7B08
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C7B0C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C7B10
  c->ctr=c->r[12]; // 801C7B14
  c->r[30]=c->r[30]+0x00000001u; // 801C7B18
  c->r[31]=c->r[31]+0x00000004u; // 801C7B1C
  if (true) { c->lr=0x801C7B24u; dispatch(c,c->ctr); } // 801C7B20
L_801C7B24:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801C7B24
  cmpu(c,0,c->r[30],c->r[0]); // 801C7B28
  if (!crb(c,2)) { IRQCHK(c); goto L_801C7AF8; } // 801C7B2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7B30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7B34
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7B38
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7B3C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C7B40
  c->lr=c->r[0]; // 801C7B44
  c->r[1]=c->r[1]+0x00000020u; // 801C7B48
  return; // 801C7B4C
}

// CheckScnObj__Q34nw4r3g3d12ScnObjGatherFPQ34nw4r3g3d6ScnObj
void f_801C7B50(Ctx* __restrict c) {
  trace_call(0x801C7B50u);
  c->r[3]=0u+0x00000000u; // 801C7B50
  return; // 801C7B54
}

// fn_801C7B58
void f_801C7B58(Ctx* __restrict c) {
  c->r[7]=0u+0x802A0000u; // 801C7B58
  c->r[0]=0u+0x00000000u; // 801C7B5C
  c->r[7]=c->r[7]+0x00001508u; // 801C7B60
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C7B64
  W32(c->r[3]+0x00000000u,c->r[7]); // 801C7B68
  W32(c->r[3]+0x00000008u,c->r[5]); // 801C7B6C
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 801C7B70
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C7B74
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C7B78
  return; // 801C7B7C
}

// Clear__Q34nw4r3g3d12ScnObjGatherFv
void f_801C7B80(Ctx* __restrict c) {
  trace_call(0x801C7B80u);
  c->r[0]=0u+0x00000000u; // 801C7B80
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C7B84
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C7B88
  return; // 801C7B8C
}

// __dt__Q34nw4r3g3d12ScnObjGatherFv
void f_801C7B90(Ctx* __restrict c) {
  trace_call(0x801C7B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7B90
  c->r[0]=c->lr; // 801C7B94
  cmps(c,0,(int32_t)c->r[3],0); // 801C7B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7B9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7BA0
  c->r[31]=c->r[3]|c->r[3]; // 801C7BA4
  if (crb(c,2)) { goto L_801C7BB8; } // 801C7BA8
  cmps(c,0,(int32_t)c->r[4],0); // 801C7BAC
  if (!crb(c,1)) { goto L_801C7BB8; } // 801C7BB0
  c->lr=0x801C7BB8u; f_8009230C(c); // 801C7BB4
L_801C7BB8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7BB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7BBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7BC0
  c->lr=c->r[0]; // 801C7BC4
  c->r[1]=c->r[1]+0x00000010u; // 801C7BC8
  return; // 801C7BCC
}

// IsDerivedFrom__Q34nw4r3g3d7ScnRootCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801C7BD0(Ctx* __restrict c) {
  trace_call(0x801C7BD0u);
  c->r[3]=0u+0x80270000u; // 801C7BD0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C7BD4
  c->r[3]=c->r[3]+0x00000E28u; // 801C7BD8
  cmpu(c,0,c->r[0],c->r[3]); // 801C7BDC
  if (!crb(c,2)) { goto L_801C7BEC; } // 801C7BE0
  c->r[3]=0u+0x00000001u; // 801C7BE4
  return; // 801C7BE8
L_801C7BEC:;
  c->r[3]=0u+0x80270000u; // 801C7BEC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C7BF0
  c->r[3]=c->r[3]+0x00000E18u; // 801C7BF4
  cmpu(c,0,c->r[0],c->r[3]); // 801C7BF8
  if (!crb(c,2)) { goto L_801C7C08; } // 801C7BFC
  c->r[3]=0u+0x00000001u; // 801C7C00
  return; // 801C7C04
L_801C7C08:;
  c->r[3]=0u+0x80270000u; // 801C7C08
  c->r[3]=c->r[3]+0x00000DF8u; // 801C7C0C
  cmpu(c,0,c->r[0],c->r[3]); // 801C7C10
  if (!crb(c,2)) { goto L_801C7C20; } // 801C7C14
  c->r[3]=0u+0x00000001u; // 801C7C18
  return; // 801C7C1C
L_801C7C20:;
  c->r[3]=0u+0x80270000u; // 801C7C20
  c->r[3]=c->r[3]+0x00000CD0u; // 801C7C24
  c->r[0]=c->r[3]-c->r[0]; // 801C7C28
  c->r[0]=cntlz(c->r[0]); // 801C7C2C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C7C30
  return; // 801C7C34
}

// GetTypeName__Q34nw4r3g3d7ScnRootCFv
void f_801C7C38(Ctx* __restrict c) {
  trace_call(0x801C7C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7C38
  c->r[0]=c->lr; // 801C7C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7C40
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C7C44
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C7C48
  c->ctr=c->r[12]; // 801C7C4C
  if (true) { c->lr=0x801C7C54u; dispatch(c,c->ctr); } // 801C7C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7C54
  c->r[3]=c->r[3]+0x00000004u; // 801C7C58
  c->lr=c->r[0]; // 801C7C5C
  c->r[1]=c->r[1]+0x00000010u; // 801C7C60
  return; // 801C7C64
}

// GetTypeObj__Q34nw4r3g3d7ScnRootCFv
void f_801C7C68(Ctx* __restrict c) {
  trace_call(0x801C7C68u);
  c->r[3]=0u+0x80270000u; // 801C7C68
  c->r[3]=c->r[3]+0x00000E28u; // 801C7C6C
  return; // 801C7C70
}

// ScnMdlSmpl_CalcPosture__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
void f_801C7C74(Ctx* __restrict c) {
  trace_call(0x801C7C74u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7C74
  c->r[0]=c->lr; // 801C7C78
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C7C7C
  c->r[11]=c->r[1]+0x00000040u; // 801C7C80
  c->lr=0x801C7C88u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7C84
  W32(c->r[1]+0x00000008u,c->r[4]); // 801C7C88
  c->r[26]=c->r[5]|c->r[5]; // 801C7C8C
  c->r[30]=c->r[3]|c->r[3]; // 801C7C90
  c->r[5]=R32(c->r[3]+0x000000D4u); // 801C7C94
  cmps(c,0,(int32_t)c->r[5],0); // 801C7C98
  if (crb(c,2)) { goto L_801C7CDC; } // 801C7C9C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C7CA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C7CA4
  if (crb(c,2)) { goto L_801C7CDC; } // 801C7CA8
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C7CAC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C7CB0
  if (crb(c,2)) { goto L_801C7CDC; } // 801C7CB4
  c->r[3]=c->r[5]|c->r[5]; // 801C7CB8
  c->r[6]=c->r[4]|c->r[4]; // 801C7CBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C7CC0
  c->r[5]=c->r[30]|c->r[30]; // 801C7CC4
  c->r[7]=c->r[26]|c->r[26]; // 801C7CC8
  c->r[4]=0u+0x00000001u; // 801C7CCC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C7CD0
  c->ctr=c->r[12]; // 801C7CD4
  if (true) { c->lr=0x801C7CDCu; dispatch(c,c->ctr); } // 801C7CD8
L_801C7CDC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C7CDC
  c->r[3]=c->r[30]|c->r[30]; // 801C7CE0
  c->r[4]=c->r[26]|c->r[26]; // 801C7CE4
  c->r[5]=c->r[1]+0x00000008u; // 801C7CE8
  c->r[12]=R32(c->r[12]+0x00000030u); // 801C7CEC
  c->ctr=c->r[12]; // 801C7CF0
  if (true) { c->lr=0x801C7CF8u; dispatch(c,c->ctr); } // 801C7CF4
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801C7CF8
  c->r[6]=R32(c->r[1]+0x00000008u); // 801C7CFC
  cmps(c,0,(int32_t)c->r[3],0); // 801C7D00
  if (crb(c,2)) { goto L_801C7D3C; } // 801C7D04
  c->r[0]=R16(c->r[30]+0x000000DAu); // 801C7D08
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C7D0C
  if (crb(c,2)) { goto L_801C7D3C; } // 801C7D10
  c->r[0]=R8(c->r[30]+0x000000D8u); // 801C7D14
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C7D18
  if (crb(c,2)) { goto L_801C7D3C; } // 801C7D1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C7D20
  c->r[5]=c->r[30]|c->r[30]; // 801C7D24
  c->r[7]=c->r[26]|c->r[26]; // 801C7D28
  c->r[4]=0u+0x00000002u; // 801C7D2C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C7D30
  c->ctr=c->r[12]; // 801C7D34
  if (true) { c->lr=0x801C7D3Cu; dispatch(c,c->ctr); } // 801C7D38
L_801C7D3C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801C7D3C
  c->r[31]=0u+0x00000000u; // 801C7D40
  c->r[3]=c->r[3]+0x0000004Cu; // 801C7D44
  c->r[0]=R32(c->r[3]+0x00000024u); // 801C7D48
  c->r[28]=R32(c->r[3]+c->r[0]); // 801C7D4C
  cmpu(c,0,c->r[28],0x00000008u); // 801C7D50
  if (!crb(c,1)) { goto L_801C7D90; } // 801C7D54
  cmpu(c,0,c->r[28],0x00000156u); // 801C7D58
  if (!crb(c,0)) { goto L_801C7D90; } // 801C7D5C
  c->lr=0x801C7D64u; f_8017B15C(c); // 801C7D60
  cmpu(c,0,c->r[3],0x00000001u); // 801C7D64
  c->r[31]=c->r[3]|c->r[3]; // 801C7D68
  if (!crb(c,2)) { goto L_801C7D90; } // 801C7D6C
  c->r[0]=R32(c->r[30]+0x00000104u); // 801C7D70
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 801C7D74
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C7D78
  c->r[0]=c->r[0]|0x00000001u; // 801C7D7C
  W32(c->r[30]+0x00000104u,c->r[0]); // 801C7D80
  c->lr=0x801C7D88u; f_800E0354(c); // 801C7D84
  c->r[27]=0u+0xE0000000u; // 801C7D88
  goto L_801C7DA0; // 801C7D8C
L_801C7D90:;
  c->r[0]=R32(c->r[30]+0x00000104u); // 801C7D90
  c->r[27]=R32(c->r[30]+0x000000ECu); // 801C7D94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801C7D98
  W32(c->r[30]+0x00000104u,c->r[0]); // 801C7D9C
L_801C7DA0:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7DA0
  c->lr=0x801C7DA8u; f_801C511C(c); // 801C7DA4
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C7DA8
  c->r[4]=0u+0x00020000u; // 801C7DAC
  c->r[29]=c->r[3]|c->r[3]; // 801C7DB0
  c->r[3]=c->r[30]|c->r[30]; // 801C7DB4
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C7DB8
  c->r[4]=c->r[4]+0x00000001u; // 801C7DBC
  c->r[5]=c->r[1]+0x00000018u; // 801C7DC0
  c->r[26]=0u+0xF0000000u; // 801C7DC4
  c->ctr=c->r[12]; // 801C7DC8
  if (true) { c->lr=0x801C7DD0u; dispatch(c,c->ctr); } // 801C7DCC
  cmps(c,0,(int32_t)c->r[29],1); // 801C7DD0
  if (!crb(c,2)) { goto L_801C7DE0; } // 801C7DD4
  c->r[26]=0u+0x30000000u; // 801C7DD8
  goto L_801C7DEC; // 801C7DDC
L_801C7DE0:;
  cmps(c,0,(int32_t)c->r[29],2); // 801C7DE0
  if (!crb(c,2)) { goto L_801C7DEC; } // 801C7DE4
  c->r[26]=0u+0x00000000u; // 801C7DE8
L_801C7DEC:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801C7DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801C7DF0
  if (crb(c,2)) { goto L_801C7DFC; } // 801C7DF4
  c->r[26]=c->r[26]|0x08000000u; // 801C7DF8
L_801C7DFC:;
  c->r[5]=R32(c->r[30]+0x0000011Cu); // 801C7DFC
  cmps(c,0,(int32_t)c->r[5],0); // 801C7E00
  if (crb(c,2)) { goto L_801C7E4C; } // 801C7E04
  c->r[4]=R16(c->r[30]+0x00000122u); // 801C7E08
  c->r[3]=c->r[27]|c->r[27]; // 801C7E0C
  c->r[0]=R8(c->r[30]+0x00000120u); // 801C7E10
  c->r[10]=c->r[26]|c->r[26]; // 801C7E14
  c->r[6]=c->r[30]+0x0000003Cu; // 801C7E18
  c->r[7]=c->r[1]+0x00000014u; // 801C7E1C
  W32(c->r[1]+0x00000020u,c->r[5]); // 801C7E20
  c->r[9]=c->r[1]+0x00000020u; // 801C7E24
  W8(c->r[1]+0x00000024u,c->r[0]); // 801C7E28
  W16(c->r[1]+0x00000026u,c->r[4]); // 801C7E2C
  c->r[8]=R32(c->r[30]+0x00000124u); // 801C7E30
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801C7E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7E38
  c->r[4]=R32(c->r[30]+0x000000F0u); // 801C7E3C
  c->r[5]=R32(c->r[30]+0x00000108u); // 801C7E40
  c->lr=0x801C7E48u; f_801BEB10(c); // 801C7E44
  goto L_801C7E78; // 801C7E48
L_801C7E4C:;
  c->r[8]=R32(c->r[30]+0x00000124u); // 801C7E4C
  c->r[3]=c->r[27]|c->r[27]; // 801C7E50
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801C7E54
  c->r[10]=c->r[26]|c->r[26]; // 801C7E58
  c->r[6]=c->r[30]+0x0000003Cu; // 801C7E5C
  c->r[7]=c->r[1]+0x00000010u; // 801C7E60
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C7E64
  c->r[9]=0u+0x00000000u; // 801C7E68
  c->r[4]=R32(c->r[30]+0x000000F0u); // 801C7E6C
  c->r[5]=R32(c->r[30]+0x00000108u); // 801C7E70
  c->lr=0x801C7E78u; f_801BEB10(c); // 801C7E74
L_801C7E78:;
  c->r[6]=R32(c->r[30]+0x0000010Cu); // 801C7E78
  cmps(c,0,(int32_t)c->r[6],0); // 801C7E7C
  if (crb(c,2)) { goto L_801C7E9C; } // 801C7E80
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801C7E84
  c->r[3]=c->r[27]|c->r[27]; // 801C7E88
  c->r[5]=c->r[1]+0x0000000Cu; // 801C7E8C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C7E90
  c->r[4]=R32(c->r[30]+0x000000F0u); // 801C7E94
  c->lr=0x801C7E9Cu; f_801BF0D4(c); // 801C7E98
L_801C7E9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C7E9C
  if (crb(c,2)) { goto L_801C7EB8; } // 801C7EA0
  c->r[5]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 801C7EA4
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801C7EA8
  c->r[4]=0u+0xE0000000u; // 801C7EAC
  c->lr=0x801C7EB4u; f_8017B214(c); // 801C7EB0
  c->lr=0x801C7EB8u; f_8017B1CC(c); // 801C7EB4
L_801C7EB8:;
  c->r[11]=c->r[1]+0x00000040u; // 801C7EB8
  c->lr=0x801C7EC0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7EBC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C7EC0
  c->lr=c->r[0]; // 801C7EC4
  c->r[1]=c->r[1]+0x00000040u; // 801C7EC8
  return; // 801C7ECC
}

// ScnMdlSmpl_G3DPROC_GATHER_SCNOBJ__Q34nw4r3g3d12ScnMdlSimpleFUlPQ34nw4r3g3d13IScnObjGather
void f_801C7ED0(Ctx* __restrict c) {
  trace_call(0x801C7ED0u);
  c->r[4]=c->r[3]|c->r[3]; // 801C7ED0
  c->r[12]=R32(c->r[5]+0x00000000u); // 801C7ED4
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801C7ED8
  c->r[3]=c->r[5]|c->r[5]; // 801C7EDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C7EE0
  c->r[5]=rotl(c->r[0],0)&0x20000000u; // 801C7EE4
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 801C7EE8
  c->r[5]=cntlz(c->r[5]); // 801C7EEC
  c->r[0]=cntlz(c->r[0]); // 801C7EF0
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 801C7EF4
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C7EF8
  c->ctr=c->r[12]; // 801C7EFC
  if (true) { dispatch(c,c->ctr); return; } // 801C7F00
}

// ScnMdlSmpl_G3DPROC_CALC_VIEW__Q34nw4r3g3d12ScnMdlSimpleFUlPCQ34nw4r4math5MTX34
void f_801C7F04(Ctx* __restrict c) {
  trace_call(0x801C7F04u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7F04
  c->r[0]=c->lr; // 801C7F08
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7F0C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C7F10
  c->r[31]=c->r[5]|c->r[5]; // 801C7F14
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C7F18
  c->r[30]=c->r[4]|c->r[4]; // 801C7F1C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C7F20
  c->r[29]=c->r[3]|c->r[3]; // 801C7F24
  c->r[7]=R8(c->r[3]+0x00000101u); // 801C7F28
  c->r[6]=R8(c->r[3]+0x00000100u); // 801C7F2C
  c->r[4]=c->r[7]+0x00000001u; // 801C7F30
  c->r[7]=R32(c->r[3]+0x000000D4u); // 801C7F34
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 801C7F38
  cmps(c,0,(int32_t)c->r[7],0); // 801C7F3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 801C7F40
  c->r[0]=c->r[4]-c->r[0]; // 801C7F44
  W8(c->r[3]+0x00000101u,c->r[0]); // 801C7F48
  if (crb(c,2)) { goto L_801C7F8C; } // 801C7F4C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C7F50
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C7F54
  if (crb(c,2)) { goto L_801C7F8C; } // 801C7F58
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C7F5C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C7F60
  if (crb(c,2)) { goto L_801C7F8C; } // 801C7F64
  c->r[12]=R32(c->r[7]+0x00000000u); // 801C7F68
  c->r[3]=c->r[7]|c->r[7]; // 801C7F6C
  c->r[5]=c->r[29]|c->r[29]; // 801C7F70
  c->r[6]=c->r[30]|c->r[30]; // 801C7F74
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C7F78
  c->r[7]=c->r[31]|c->r[31]; // 801C7F7C
  c->r[4]=0u+0x00000001u; // 801C7F80
  c->ctr=c->r[12]; // 801C7F84
  if (true) { c->lr=0x801C7F8Cu; dispatch(c,c->ctr); } // 801C7F88
L_801C7F8C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C7F8C
  c->r[4]=c->r[31]|c->r[31]; // 801C7F90
  c->lr=0x801C7F98u; f_801C49A0(c); // 801C7F94
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C7F98
  cmps(c,0,(int32_t)c->r[3],0); // 801C7F9C
  if (crb(c,2)) { goto L_801C7FDC; } // 801C7FA0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C7FA4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C7FA8
  if (crb(c,2)) { goto L_801C7FDC; } // 801C7FAC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C7FB0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C7FB4
  if (crb(c,2)) { goto L_801C7FDC; } // 801C7FB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C7FBC
  c->r[5]=c->r[29]|c->r[29]; // 801C7FC0
  c->r[6]=c->r[30]|c->r[30]; // 801C7FC4
  c->r[7]=c->r[31]|c->r[31]; // 801C7FC8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C7FCC
  c->r[4]=0u+0x00000002u; // 801C7FD0
  c->ctr=c->r[12]; // 801C7FD4
  if (true) { c->lr=0x801C7FDCu; dispatch(c,c->ctr); } // 801C7FD8
L_801C7FDC:;
  c->lr=0x801C7FE0u; f_8017B15C(c); // 801C7FDC
  cmps(c,0,(int32_t)c->r[3],0); // 801C7FE0
  if (crb(c,2)) { goto L_801C8150; } // 801C7FE4
  c->r[0]=R32(c->r[29]+0x00000104u); // 801C7FE8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C7FEC
  if (crb(c,2)) { goto L_801C80A8; } // 801C7FF0
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C7FF4
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C7FF8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C7FFC
  c->lr=0x801C8004u; f_800E03B0(c); // 801C8000
  c->r[5]=R32(c->r[29]+0x000000F8u); // 801C8004
  cmps(c,0,(int32_t)c->r[5],0); // 801C8008
  if (crb(c,2)) { goto L_801C8030; } // 801C800C
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8010
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C8014
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8018
  c->r[0]=c->r[3]+0x0000001Fu; // 801C801C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8020
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8024
  c->r[4]=c->r[5]+c->r[0]; // 801C8028
  goto L_801C8034; // 801C802C
L_801C8030:;
  c->r[4]=0u+0x00000000u; // 801C8030
L_801C8034:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 801C8034
  cmps(c,0,(int32_t)c->r[6],0); // 801C8038
  if (crb(c,2)) { goto L_801C8060; } // 801C803C
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8040
  c->r[5]=R8(c->r[29]+0x00000101u); // 801C8044
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8048
  c->r[0]=c->r[3]+0x0000001Fu; // 801C804C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8050
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801C8054
  c->r[10]=c->r[6]+c->r[0]; // 801C8058
  goto L_801C8064; // 801C805C
L_801C8060:;
  c->r[10]=0u+0x00000000u; // 801C8060
L_801C8064:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C8064
  c->r[8]=c->r[31]|c->r[31]; // 801C8068
  c->r[9]=c->r[1]+0x00000010u; // 801C806C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C8070
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8074
  c->r[11]=R8(c->r[29]+0x00000101u); // 801C8078
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C807C
  c->r[12]=R32(c->r[29]+0x000000F4u); // 801C8080
  c->r[5]=R32(c->r[29]+0x000000ECu); // 801C8084
  c->r[6]=R32(c->r[29]+0x000000F0u); // 801C8088
  c->r[0]=c->r[3]+0x0000001Fu; // 801C808C
  c->r[7]=R16(c->r[29]+0x00000102u); // 801C8090
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8094
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 801C8098
  c->r[3]=c->r[12]+c->r[0]; // 801C809C
  c->lr=0x801C80A4u; f_801BE498(c); // 801C80A0
  goto L_801C8148; // 801C80A4
L_801C80A8:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 801C80A8
  cmps(c,0,(int32_t)c->r[5],0); // 801C80AC
  if (crb(c,2)) { goto L_801C80D4; } // 801C80B0
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C80B4
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C80B8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C80BC
  c->r[0]=c->r[3]+0x0000001Fu; // 801C80C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C80C4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C80C8
  c->r[4]=c->r[5]+c->r[0]; // 801C80CC
  goto L_801C80D8; // 801C80D0
L_801C80D4:;
  c->r[4]=0u+0x00000000u; // 801C80D4
L_801C80D8:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 801C80D8
  cmps(c,0,(int32_t)c->r[6],0); // 801C80DC
  if (crb(c,2)) { goto L_801C8104; } // 801C80E0
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C80E4
  c->r[5]=R8(c->r[29]+0x00000101u); // 801C80E8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C80EC
  c->r[0]=c->r[3]+0x0000001Fu; // 801C80F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C80F4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801C80F8
  c->r[10]=c->r[6]+c->r[0]; // 801C80FC
  goto L_801C8108; // 801C8100
L_801C8104:;
  c->r[10]=0u+0x00000000u; // 801C8104
L_801C8108:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C8108
  c->r[8]=c->r[31]|c->r[31]; // 801C810C
  c->r[9]=c->r[1]+0x0000000Cu; // 801C8110
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C8114
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8118
  c->r[11]=R8(c->r[29]+0x00000101u); // 801C811C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8120
  c->r[12]=R32(c->r[29]+0x000000F4u); // 801C8124
  c->r[5]=R32(c->r[29]+0x000000ECu); // 801C8128
  c->r[6]=R32(c->r[29]+0x000000F0u); // 801C812C
  c->r[0]=c->r[3]+0x0000001Fu; // 801C8130
  c->r[7]=R16(c->r[29]+0x00000102u); // 801C8134
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8138
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 801C813C
  c->r[3]=c->r[12]+c->r[0]; // 801C8140
  c->lr=0x801C8148u; f_801BDFFC(c); // 801C8144
L_801C8148:;
  c->lr=0x801C814Cu; f_8017B1CC(c); // 801C8148
  goto L_801C81F0; // 801C814C
L_801C8150:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 801C8150
  cmps(c,0,(int32_t)c->r[5],0); // 801C8154
  if (crb(c,2)) { goto L_801C817C; } // 801C8158
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C815C
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C8160
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8164
  c->r[0]=c->r[3]+0x0000001Fu; // 801C8168
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C816C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8170
  c->r[4]=c->r[5]+c->r[0]; // 801C8174
  goto L_801C8180; // 801C8178
L_801C817C:;
  c->r[4]=0u+0x00000000u; // 801C817C
L_801C8180:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 801C8180
  cmps(c,0,(int32_t)c->r[6],0); // 801C8184
  if (crb(c,2)) { goto L_801C81AC; } // 801C8188
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C818C
  c->r[5]=R8(c->r[29]+0x00000101u); // 801C8190
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8194
  c->r[0]=c->r[3]+0x0000001Fu; // 801C8198
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C819C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801C81A0
  c->r[10]=c->r[6]+c->r[0]; // 801C81A4
  goto L_801C81B0; // 801C81A8
L_801C81AC:;
  c->r[10]=0u+0x00000000u; // 801C81AC
L_801C81B0:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C81B0
  c->r[8]=c->r[31]|c->r[31]; // 801C81B4
  c->r[9]=c->r[1]+0x00000008u; // 801C81B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C81BC
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C81C0
  c->r[11]=R8(c->r[29]+0x00000101u); // 801C81C4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C81C8
  c->r[12]=R32(c->r[29]+0x000000F4u); // 801C81CC
  c->r[5]=R32(c->r[29]+0x000000ECu); // 801C81D0
  c->r[6]=R32(c->r[29]+0x000000F0u); // 801C81D4
  c->r[0]=c->r[3]+0x0000001Fu; // 801C81D8
  c->r[7]=R16(c->r[29]+0x00000102u); // 801C81DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C81E0
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 801C81E4
  c->r[3]=c->r[12]+c->r[0]; // 801C81E8
  c->lr=0x801C81F0u; f_801BDCD8(c); // 801C81EC
L_801C81F0:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C81F0
  cmps(c,0,(int32_t)c->r[3],0); // 801C81F4
  if (crb(c,2)) { goto L_801C8234; } // 801C81F8
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C81FC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C8200
  if (crb(c,2)) { goto L_801C8234; } // 801C8204
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C8208
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C820C
  if (crb(c,2)) { goto L_801C8234; } // 801C8210
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8214
  c->r[5]=c->r[29]|c->r[29]; // 801C8218
  c->r[6]=c->r[30]|c->r[30]; // 801C821C
  c->r[7]=c->r[31]|c->r[31]; // 801C8220
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C8224
  c->r[4]=0u+0x00000004u; // 801C8228
  c->ctr=c->r[12]; // 801C822C
  if (true) { c->lr=0x801C8234u; dispatch(c,c->ctr); } // 801C8230
L_801C8234:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C8234
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C8238
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C823C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C8240
  c->lr=c->r[0]; // 801C8244
  c->r[1]=c->r[1]+0x00000030u; // 801C8248
  return; // 801C824C
}

// G3dProc__Q34nw4r3g3d12ScnMdlSimpleFUlUlPv
void f_801C8250(Ctx* __restrict c) {
  trace_call(0x801C8250u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8250
  c->r[0]=c->lr; // 801C8254
  cmpu(c,0,c->r[4],0x00000009u); // 801C8258
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C825C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C8260
  c->r[31]=c->r[6]|c->r[6]; // 801C8264
  W32(c->r[1]+0x00000038u,c->r[30]); // 801C8268
  c->r[30]=c->r[5]|c->r[5]; // 801C826C
  W32(c->r[1]+0x00000034u,c->r[29]); // 801C8270
  c->r[29]=c->r[3]|c->r[3]; // 801C8274
  if (!crb(c,0)) { goto L_801C829C; } // 801C8278
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801C827C
  c->r[6]=0u+0x00000001u; // 801C8280
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C8284
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 801C8288
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 801C828C
  if (crb(c,2)) { goto L_801C829C; } // 801C8290
  c->r[0]=0u+0x00000001u; // 801C8294
  goto L_801C82A0; // 801C8298
L_801C829C:;
  c->r[0]=0u+0x00000000u; // 801C829C
L_801C82A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C82A0
  if (!crb(c,2)) { goto L_801C8AC4; } // 801C82A4
  cmps(c,0,(int32_t)c->r[4],6); // 801C82A8
  if (crb(c,2)) { goto L_801C8788; } // 801C82AC
  if (!crb(c,0)) { goto L_801C82DC; } // 801C82B0
  cmps(c,0,(int32_t)c->r[4],3); // 801C82B4
  if (crb(c,2)) { goto L_801C8AB4; } // 801C82B8
  if (!crb(c,0)) { goto L_801C82D0; } // 801C82BC
  cmps(c,0,(int32_t)c->r[4],1); // 801C82C0
  if (crb(c,2)) { goto L_801C8338; } // 801C82C4
  if (!crb(c,0)) { goto L_801C83AC; } // 801C82C8
  goto L_801C8AB4; // 801C82CC
L_801C82D0:;
  cmps(c,0,(int32_t)c->r[4],5); // 801C82D0
  if (!crb(c,0)) { goto L_801C8300; } // 801C82D4
  goto L_801C8478; // 801C82D8
L_801C82DC:;
  c->r[5]=0u+0x00010000u; // 801C82DC
  c->r[0]=c->r[5]+0x00000001u; // 801C82E0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C82E4
  if (crb(c,2)) { goto L_801C8A98; } // 801C82E8
  if (!crb(c,0)) { goto L_801C8AB4; } // 801C82EC
  cmps(c,0,(int32_t)c->r[4],8); // 801C82F0
  if (crb(c,2)) { goto L_801C8A08; } // 801C82F4
  if (!crb(c,0)) { goto L_801C8AB4; } // 801C82F8
  goto L_801C88C8; // 801C82FC
L_801C8300:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C8300
  c->r[3]=c->r[31]|c->r[31]; // 801C8304
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8308
  c->r[4]=c->r[29]|c->r[29]; // 801C830C
  c->r[5]=rotl(c->r[0],0)&0x20000000u; // 801C8310
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 801C8314
  c->r[5]=cntlz(c->r[5]); // 801C8318
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C831C
  c->r[0]=cntlz(c->r[0]); // 801C8320
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 801C8324
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C8328
  c->ctr=c->r[12]; // 801C832C
  if (true) { c->lr=0x801C8334u; dispatch(c,c->ctr); } // 801C8330
  goto L_801C8AC4; // 801C8334
L_801C8338:;
  c->r[3]=c->r[29]|c->r[29]; // 801C8338
  c->r[4]=c->r[30]|c->r[30]; // 801C833C
  c->r[5]=c->r[31]|c->r[31]; // 801C8340
  c->lr=0x801C8348u; f_801C7C74(c); // 801C8344
  c->r[4]=R32(c->r[29]+0x00000128u); // 801C8348
  cmps(c,0,(int32_t)c->r[4],0); // 801C834C
  if (crb(c,2)) { goto L_801C8364; } // 801C8350
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C8354
  c->r[3]=c->r[1]+0x00000020u; // 801C8358
  W32(c->r[1]+0x00000020u,c->r[0]); // 801C835C
  c->lr=0x801C8364u; f_801B1884(c); // 801C8360
L_801C8364:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C8364
  cmps(c,0,(int32_t)c->r[3],0); // 801C8368
  if (crb(c,2)) { goto L_801C8AC4; } // 801C836C
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C8370
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C8374
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8378
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C837C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C8380
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8384
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8388
  c->r[5]=c->r[29]|c->r[29]; // 801C838C
  c->r[6]=c->r[30]|c->r[30]; // 801C8390
  c->r[7]=c->r[31]|c->r[31]; // 801C8394
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C8398
  c->r[4]=0u+0x00000004u; // 801C839C
  c->ctr=c->r[12]; // 801C83A0
  if (true) { c->lr=0x801C83A8u; dispatch(c,c->ctr); } // 801C83A4
  goto L_801C8AC4; // 801C83A8
L_801C83AC:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C83AC
  cmps(c,0,(int32_t)c->r[4],0); // 801C83B0
  if (crb(c,2)) { goto L_801C83F4; } // 801C83B4
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C83B8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C83BC
  if (crb(c,2)) { goto L_801C83F4; } // 801C83C0
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C83C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C83C8
  if (crb(c,2)) { goto L_801C83F4; } // 801C83CC
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C83D0
  c->r[3]=c->r[4]|c->r[4]; // 801C83D4
  c->r[5]=c->r[29]|c->r[29]; // 801C83D8
  c->r[6]=c->r[30]|c->r[30]; // 801C83DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C83E0
  c->r[7]=c->r[31]|c->r[31]; // 801C83E4
  c->r[4]=0u+0x00000001u; // 801C83E8
  c->ctr=c->r[12]; // 801C83EC
  if (true) { c->lr=0x801C83F4u; dispatch(c,c->ctr); } // 801C83F0
L_801C83F4:;
  c->r[4]=R32(c->r[29]+0x00000130u); // 801C83F4
  cmps(c,0,(int32_t)c->r[4],0); // 801C83F8
  if (!crb(c,2)) { goto L_801C8418; } // 801C83FC
  c->r[0]=R32(c->r[29]+0x00000134u); // 801C8400
  cmps(c,0,(int32_t)c->r[0],0); // 801C8404
  if (!crb(c,2)) { goto L_801C8418; } // 801C8408
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 801C840C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8410
  if (crb(c,2)) { goto L_801C8430; } // 801C8414
L_801C8418:;
  c->r[6]=R32(c->r[29]+0x0000012Cu); // 801C8418
  c->r[3]=c->r[1]+0x0000001Cu; // 801C841C
  c->r[5]=R32(c->r[29]+0x00000134u); // 801C8420
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C8424
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C8428
  c->lr=0x801C8430u; f_801CD69C(c); // 801C842C
L_801C8430:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C8430
  cmps(c,0,(int32_t)c->r[3],0); // 801C8434
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8438
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C843C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C8440
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8444
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C8448
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C844C
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8450
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8454
  c->r[5]=c->r[29]|c->r[29]; // 801C8458
  c->r[6]=c->r[30]|c->r[30]; // 801C845C
  c->r[7]=c->r[31]|c->r[31]; // 801C8460
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C8464
  c->r[4]=0u+0x00000004u; // 801C8468
  c->ctr=c->r[12]; // 801C846C
  if (true) { c->lr=0x801C8474u; dispatch(c,c->ctr); } // 801C8470
  goto L_801C8AC4; // 801C8474
L_801C8478:;
  c->r[5]=R8(c->r[3]+0x00000101u); // 801C8478
  c->r[4]=R8(c->r[3]+0x00000100u); // 801C847C
  c->r[5]=c->r[5]+0x00000001u; // 801C8480
  c->r[6]=R32(c->r[3]+0x000000D4u); // 801C8484
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[4]); // 801C8488
  cmps(c,0,(int32_t)c->r[6],0); // 801C848C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801C8490
  c->r[0]=c->r[5]-c->r[0]; // 801C8494
  W8(c->r[3]+0x00000101u,c->r[0]); // 801C8498
  if (crb(c,2)) { goto L_801C84DC; } // 801C849C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C84A0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C84A4
  if (crb(c,2)) { goto L_801C84DC; } // 801C84A8
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C84AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C84B0
  if (crb(c,2)) { goto L_801C84DC; } // 801C84B4
  c->r[12]=R32(c->r[6]+0x00000000u); // 801C84B8
  c->r[3]=c->r[6]|c->r[6]; // 801C84BC
  c->r[5]=c->r[29]|c->r[29]; // 801C84C0
  c->r[6]=c->r[30]|c->r[30]; // 801C84C4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C84C8
  c->r[7]=c->r[31]|c->r[31]; // 801C84CC
  c->r[4]=0u+0x00000001u; // 801C84D0
  c->ctr=c->r[12]; // 801C84D4
  if (true) { c->lr=0x801C84DCu; dispatch(c,c->ctr); } // 801C84D8
L_801C84DC:;
  c->r[3]=c->r[29]|c->r[29]; // 801C84DC
  c->r[4]=c->r[31]|c->r[31]; // 801C84E0
  c->lr=0x801C84E8u; f_801C49A0(c); // 801C84E4
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C84E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C84EC
  if (crb(c,2)) { goto L_801C852C; } // 801C84F0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C84F4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C84F8
  if (crb(c,2)) { goto L_801C852C; } // 801C84FC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C8500
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C8504
  if (crb(c,2)) { goto L_801C852C; } // 801C8508
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C850C
  c->r[5]=c->r[29]|c->r[29]; // 801C8510
  c->r[6]=c->r[30]|c->r[30]; // 801C8514
  c->r[7]=c->r[31]|c->r[31]; // 801C8518
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C851C
  c->r[4]=0u+0x00000002u; // 801C8520
  c->ctr=c->r[12]; // 801C8524
  if (true) { c->lr=0x801C852Cu; dispatch(c,c->ctr); } // 801C8528
L_801C852C:;
  c->lr=0x801C8530u; f_8017B15C(c); // 801C852C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8530
  if (crb(c,2)) { goto L_801C86A0; } // 801C8534
  c->r[0]=R32(c->r[29]+0x00000104u); // 801C8538
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C853C
  if (crb(c,2)) { goto L_801C85F8; } // 801C8540
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8544
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801C8548
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C854C
  c->lr=0x801C8554u; f_800E03B0(c); // 801C8550
  c->r[5]=R32(c->r[29]+0x000000F8u); // 801C8554
  cmps(c,0,(int32_t)c->r[5],0); // 801C8558
  if (crb(c,2)) { goto L_801C8580; } // 801C855C
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8560
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C8564
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8568
  c->r[0]=c->r[3]+0x0000001Fu; // 801C856C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8570
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8574
  c->r[4]=c->r[5]+c->r[0]; // 801C8578
  goto L_801C8584; // 801C857C
L_801C8580:;
  c->r[4]=0u+0x00000000u; // 801C8580
L_801C8584:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 801C8584
  cmps(c,0,(int32_t)c->r[6],0); // 801C8588
  if (crb(c,2)) { goto L_801C85B0; } // 801C858C
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8590
  c->r[5]=R8(c->r[29]+0x00000101u); // 801C8594
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8598
  c->r[0]=c->r[3]+0x0000001Fu; // 801C859C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C85A0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801C85A4
  c->r[10]=c->r[6]+c->r[0]; // 801C85A8
  goto L_801C85B4; // 801C85AC
L_801C85B0:;
  c->r[10]=0u+0x00000000u; // 801C85B0
L_801C85B4:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C85B4
  c->r[8]=c->r[31]|c->r[31]; // 801C85B8
  c->r[9]=c->r[1]+0x00000010u; // 801C85BC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C85C0
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C85C4
  c->r[11]=R8(c->r[29]+0x00000101u); // 801C85C8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C85CC
  c->r[12]=R32(c->r[29]+0x000000F4u); // 801C85D0
  c->r[5]=R32(c->r[29]+0x000000ECu); // 801C85D4
  c->r[6]=R32(c->r[29]+0x000000F0u); // 801C85D8
  c->r[0]=c->r[3]+0x0000001Fu; // 801C85DC
  c->r[7]=R16(c->r[29]+0x00000102u); // 801C85E0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C85E4
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 801C85E8
  c->r[3]=c->r[12]+c->r[0]; // 801C85EC
  c->lr=0x801C85F4u; f_801BE498(c); // 801C85F0
  goto L_801C8698; // 801C85F4
L_801C85F8:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 801C85F8
  cmps(c,0,(int32_t)c->r[5],0); // 801C85FC
  if (crb(c,2)) { goto L_801C8624; } // 801C8600
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8604
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C8608
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C860C
  c->r[0]=c->r[3]+0x0000001Fu; // 801C8610
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8614
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8618
  c->r[4]=c->r[5]+c->r[0]; // 801C861C
  goto L_801C8628; // 801C8620
L_801C8624:;
  c->r[4]=0u+0x00000000u; // 801C8624
L_801C8628:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 801C8628
  cmps(c,0,(int32_t)c->r[6],0); // 801C862C
  if (crb(c,2)) { goto L_801C8654; } // 801C8630
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8634
  c->r[5]=R8(c->r[29]+0x00000101u); // 801C8638
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C863C
  c->r[0]=c->r[3]+0x0000001Fu; // 801C8640
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8644
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801C8648
  c->r[10]=c->r[6]+c->r[0]; // 801C864C
  goto L_801C8658; // 801C8650
L_801C8654:;
  c->r[10]=0u+0x00000000u; // 801C8654
L_801C8658:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C8658
  c->r[8]=c->r[31]|c->r[31]; // 801C865C
  c->r[9]=c->r[1]+0x00000014u; // 801C8660
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8664
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8668
  c->r[11]=R8(c->r[29]+0x00000101u); // 801C866C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8670
  c->r[12]=R32(c->r[29]+0x000000F4u); // 801C8674
  c->r[5]=R32(c->r[29]+0x000000ECu); // 801C8678
  c->r[6]=R32(c->r[29]+0x000000F0u); // 801C867C
  c->r[0]=c->r[3]+0x0000001Fu; // 801C8680
  c->r[7]=R16(c->r[29]+0x00000102u); // 801C8684
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8688
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 801C868C
  c->r[3]=c->r[12]+c->r[0]; // 801C8690
  c->lr=0x801C8698u; f_801BDFFC(c); // 801C8694
L_801C8698:;
  c->lr=0x801C869Cu; f_8017B1CC(c); // 801C8698
  goto L_801C8740; // 801C869C
L_801C86A0:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 801C86A0
  cmps(c,0,(int32_t)c->r[5],0); // 801C86A4
  if (crb(c,2)) { goto L_801C86CC; } // 801C86A8
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C86AC
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C86B0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C86B4
  c->r[0]=c->r[3]+0x0000001Fu; // 801C86B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C86BC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C86C0
  c->r[4]=c->r[5]+c->r[0]; // 801C86C4
  goto L_801C86D0; // 801C86C8
L_801C86CC:;
  c->r[4]=0u+0x00000000u; // 801C86CC
L_801C86D0:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 801C86D0
  cmps(c,0,(int32_t)c->r[6],0); // 801C86D4
  if (crb(c,2)) { goto L_801C86FC; } // 801C86D8
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C86DC
  c->r[5]=R8(c->r[29]+0x00000101u); // 801C86E0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C86E4
  c->r[0]=c->r[3]+0x0000001Fu; // 801C86E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C86EC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801C86F0
  c->r[10]=c->r[6]+c->r[0]; // 801C86F4
  goto L_801C8700; // 801C86F8
L_801C86FC:;
  c->r[10]=0u+0x00000000u; // 801C86FC
L_801C8700:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C8700
  c->r[8]=c->r[31]|c->r[31]; // 801C8704
  c->r[9]=c->r[1]+0x00000018u; // 801C8708
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C870C
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8710
  c->r[11]=R8(c->r[29]+0x00000101u); // 801C8714
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8718
  c->r[12]=R32(c->r[29]+0x000000F4u); // 801C871C
  c->r[5]=R32(c->r[29]+0x000000ECu); // 801C8720
  c->r[6]=R32(c->r[29]+0x000000F0u); // 801C8724
  c->r[0]=c->r[3]+0x0000001Fu; // 801C8728
  c->r[7]=R16(c->r[29]+0x00000102u); // 801C872C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8730
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 801C8734
  c->r[3]=c->r[12]+c->r[0]; // 801C8738
  c->lr=0x801C8740u; f_801BDCD8(c); // 801C873C
L_801C8740:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C8740
  cmps(c,0,(int32_t)c->r[3],0); // 801C8744
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8748
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C874C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C8750
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8754
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C8758
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C875C
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8760
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8764
  c->r[5]=c->r[29]|c->r[29]; // 801C8768
  c->r[6]=c->r[30]|c->r[30]; // 801C876C
  c->r[7]=c->r[31]|c->r[31]; // 801C8770
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C8774
  c->r[4]=0u+0x00000004u; // 801C8778
  c->ctr=c->r[12]; // 801C877C
  if (true) { c->lr=0x801C8784u; dispatch(c,c->ctr); } // 801C8780
  goto L_801C8AC4; // 801C8784
L_801C8788:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C8788
  cmps(c,0,(int32_t)c->r[4],0); // 801C878C
  if (crb(c,2)) { goto L_801C87D0; } // 801C8790
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C8794
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801C8798
  if (crb(c,2)) { goto L_801C87D0; } // 801C879C
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C87A0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C87A4
  if (crb(c,2)) { goto L_801C87D0; } // 801C87A8
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C87AC
  c->r[3]=c->r[4]|c->r[4]; // 801C87B0
  c->r[5]=c->r[29]|c->r[29]; // 801C87B4
  c->r[6]=c->r[30]|c->r[30]; // 801C87B8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801C87BC
  c->r[7]=c->r[31]|c->r[31]; // 801C87C0
  c->r[4]=0u+0x00000001u; // 801C87C4
  c->ctr=c->r[12]; // 801C87C8
  if (true) { c->lr=0x801C87D0u; dispatch(c,c->ctr); } // 801C87CC
L_801C87D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C87D0
  if (crb(c,2)) { goto L_801C87E0; } // 801C87D4
  c->r[10]=R32(c->r[31]+0x00000000u); // 801C87D8
  goto L_801C87E4; // 801C87DC
L_801C87E0:;
  c->r[10]=R32(c->r[29]+0x00000118u); // 801C87E0
L_801C87E4:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 801C87E4
  cmps(c,0,(int32_t)c->r[5],0); // 801C87E8
  if (crb(c,2)) { goto L_801C8810; } // 801C87EC
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C87F0
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C87F4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C87F8
  c->r[0]=c->r[3]+0x0000001Fu; // 801C87FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8800
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8804
  c->r[5]=c->r[5]+c->r[0]; // 801C8808
  goto L_801C8814; // 801C880C
L_801C8810:;
  c->r[5]=0u+0x00000000u; // 801C8810
L_801C8814:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 801C8814
  cmps(c,0,(int32_t)c->r[6],0); // 801C8818
  if (crb(c,2)) { goto L_801C8840; } // 801C881C
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8820
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C8824
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8828
  c->r[0]=c->r[3]+0x0000001Fu; // 801C882C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8830
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8834
  c->r[6]=c->r[6]+c->r[0]; // 801C8838
  goto L_801C8844; // 801C883C
L_801C8840:;
  c->r[6]=0u+0x00000000u; // 801C8840
L_801C8844:;
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8844
  c->r[3]=c->r[1]+0x0000000Cu; // 801C8848
  c->r[9]=R8(c->r[29]+0x00000101u); // 801C884C
  c->r[8]=0u+0x00000000u; // 801C8850
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8854
  c->r[7]=R32(c->r[29]+0x00000110u); // 801C8858
  c->r[11]=R32(c->r[29]+0x000000F4u); // 801C885C
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C8860
  c->r[4]=c->r[4]+0x0000001Fu; // 801C8864
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C8868
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801C886C
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 801C8870
  c->r[9]=0u+0x00000000u; // 801C8874
  c->r[4]=c->r[11]+c->r[0]; // 801C8878
  c->lr=0x801C8880u; f_801C0140(c); // 801C887C
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C8880
  cmps(c,0,(int32_t)c->r[3],0); // 801C8884
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8888
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C888C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801C8890
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8894
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C8898
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C889C
  if (crb(c,2)) { goto L_801C8AC4; } // 801C88A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C88A4
  c->r[5]=c->r[29]|c->r[29]; // 801C88A8
  c->r[6]=c->r[30]|c->r[30]; // 801C88AC
  c->r[7]=c->r[31]|c->r[31]; // 801C88B0
  c->r[12]=R32(c->r[12]+0x00000018u); // 801C88B4
  c->r[4]=0u+0x00000004u; // 801C88B8
  c->ctr=c->r[12]; // 801C88BC
  if (true) { c->lr=0x801C88C4u; dispatch(c,c->ctr); } // 801C88C0
  goto L_801C8AC4; // 801C88C4
L_801C88C8:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801C88C8
  cmps(c,0,(int32_t)c->r[4],0); // 801C88CC
  if (crb(c,2)) { goto L_801C8910; } // 801C88D0
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801C88D4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801C88D8
  if (crb(c,2)) { goto L_801C8910; } // 801C88DC
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801C88E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C88E4
  if (crb(c,2)) { goto L_801C8910; } // 801C88E8
  c->r[12]=R32(c->r[4]+0x00000000u); // 801C88EC
  c->r[3]=c->r[4]|c->r[4]; // 801C88F0
  c->r[5]=c->r[29]|c->r[29]; // 801C88F4
  c->r[6]=c->r[30]|c->r[30]; // 801C88F8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801C88FC
  c->r[7]=c->r[31]|c->r[31]; // 801C8900
  c->r[4]=0u+0x00000001u; // 801C8904
  c->ctr=c->r[12]; // 801C8908
  if (true) { c->lr=0x801C8910u; dispatch(c,c->ctr); } // 801C890C
L_801C8910:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C8910
  if (crb(c,2)) { goto L_801C8920; } // 801C8914
  c->r[10]=R32(c->r[31]+0x00000000u); // 801C8918
  goto L_801C8924; // 801C891C
L_801C8920:;
  c->r[10]=R32(c->r[29]+0x00000118u); // 801C8920
L_801C8924:;
  c->r[5]=R32(c->r[29]+0x000000F8u); // 801C8924
  cmps(c,0,(int32_t)c->r[5],0); // 801C8928
  if (crb(c,2)) { goto L_801C8950; } // 801C892C
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8930
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C8934
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8938
  c->r[0]=c->r[3]+0x0000001Fu; // 801C893C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8940
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8944
  c->r[5]=c->r[5]+c->r[0]; // 801C8948
  goto L_801C8954; // 801C894C
L_801C8950:;
  c->r[5]=0u+0x00000000u; // 801C8950
L_801C8954:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 801C8954
  cmps(c,0,(int32_t)c->r[6],0); // 801C8958
  if (crb(c,2)) { goto L_801C8980; } // 801C895C
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8960
  c->r[4]=R8(c->r[29]+0x00000101u); // 801C8964
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8968
  c->r[0]=c->r[3]+0x0000001Fu; // 801C896C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8970
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8974
  c->r[6]=c->r[6]+c->r[0]; // 801C8978
  goto L_801C8984; // 801C897C
L_801C8980:;
  c->r[6]=0u+0x00000000u; // 801C8980
L_801C8984:;
  c->r[0]=R16(c->r[29]+0x00000102u); // 801C8984
  c->r[3]=c->r[1]+0x00000008u; // 801C8988
  c->r[9]=R8(c->r[29]+0x00000101u); // 801C898C
  c->r[7]=0u+0x00000000u; // 801C8990
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C8994
  c->r[8]=R32(c->r[29]+0x00000114u); // 801C8998
  c->r[11]=R32(c->r[29]+0x000000F4u); // 801C899C
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801C89A0
  c->r[4]=c->r[4]+0x0000001Fu; // 801C89A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C89A8
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801C89AC
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 801C89B0
  c->r[9]=0u+0x00000000u; // 801C89B4
  c->r[4]=c->r[11]+c->r[0]; // 801C89B8
  c->lr=0x801C89C0u; f_801C0140(c); // 801C89BC
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801C89C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C89C4
  if (crb(c,2)) { goto L_801C8AC4; } // 801C89C8
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801C89CC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801C89D0
  if (crb(c,2)) { goto L_801C8AC4; } // 801C89D4
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801C89D8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C89DC
  if (crb(c,2)) { goto L_801C8AC4; } // 801C89E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C89E4
  c->r[5]=c->r[29]|c->r[29]; // 801C89E8
  c->r[6]=c->r[30]|c->r[30]; // 801C89EC
  c->r[7]=c->r[31]|c->r[31]; // 801C89F0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801C89F4
  c->r[4]=0u+0x00000004u; // 801C89F8
  c->ctr=c->r[12]; // 801C89FC
  if (true) { c->lr=0x801C8A04u; dispatch(c,c->ctr); } // 801C8A00
  goto L_801C8AC4; // 801C8A04
L_801C8A08:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 801C8A08
  cmps(c,0,(int32_t)c->r[3],0); // 801C8A0C
  if (crb(c,2)) { goto L_801C8A24; } // 801C8A10
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8A14
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C8A18
  c->ctr=c->r[12]; // 801C8A1C
  if (true) { c->lr=0x801C8A24u; dispatch(c,c->ctr); } // 801C8A20
L_801C8A24:;
  c->r[3]=R32(c->r[29]+0x00000128u); // 801C8A24
  cmps(c,0,(int32_t)c->r[3],0); // 801C8A28
  if (crb(c,2)) { goto L_801C8A40; } // 801C8A2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8A30
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C8A34
  c->ctr=c->r[12]; // 801C8A38
  if (true) { c->lr=0x801C8A40u; dispatch(c,c->ctr); } // 801C8A3C
L_801C8A40:;
  c->r[3]=R32(c->r[29]+0x0000012Cu); // 801C8A40
  cmps(c,0,(int32_t)c->r[3],0); // 801C8A44
  if (crb(c,2)) { goto L_801C8A5C; } // 801C8A48
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8A4C
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C8A50
  c->ctr=c->r[12]; // 801C8A54
  if (true) { c->lr=0x801C8A5Cu; dispatch(c,c->ctr); } // 801C8A58
L_801C8A5C:;
  c->r[3]=R32(c->r[29]+0x00000130u); // 801C8A5C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8A60
  if (crb(c,2)) { goto L_801C8A78; } // 801C8A64
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8A68
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C8A6C
  c->ctr=c->r[12]; // 801C8A70
  if (true) { c->lr=0x801C8A78u; dispatch(c,c->ctr); } // 801C8A74
L_801C8A78:;
  c->r[3]=R32(c->r[29]+0x00000134u); // 801C8A78
  cmps(c,0,(int32_t)c->r[3],0); // 801C8A7C
  if (crb(c,2)) { goto L_801C8AC4; } // 801C8A80
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8A84
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C8A88
  c->ctr=c->r[12]; // 801C8A8C
  if (true) { c->lr=0x801C8A94u; dispatch(c,c->ctr); } // 801C8A90
  goto L_801C8AC4; // 801C8A94
L_801C8A98:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C8A98
  c->r[3]=c->r[29]|c->r[29]; // 801C8A9C
  c->r[4]=c->r[31]|c->r[31]; // 801C8AA0
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C8AA4
  c->ctr=c->r[12]; // 801C8AA8
  if (true) { c->lr=0x801C8AB0u; dispatch(c,c->ctr); } // 801C8AAC
  goto L_801C8AC4; // 801C8AB0
L_801C8AB4:;
  c->r[3]=c->r[29]|c->r[29]; // 801C8AB4
  c->r[5]=c->r[30]|c->r[30]; // 801C8AB8
  c->r[6]=c->r[31]|c->r[31]; // 801C8ABC
  c->lr=0x801C8AC4u; f_801C515C(c); // 801C8AC0
L_801C8AC4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C8AC4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C8AC8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801C8ACC
  c->r[29]=R32(c->r[1]+0x00000034u); // 801C8AD0
  c->lr=c->r[0]; // 801C8AD4
  c->r[1]=c->r[1]+0x00000040u; // 801C8AD8
  return; // 801C8ADC
}

// SetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleFUlUl
void f_801C8AE0(Ctx* __restrict c) {
  trace_call(0x801C8AE0u);
  c->r[6]=0u+0x00020000u; // 801C8AE0
  c->r[0]=c->r[6]+0x00000001u; // 801C8AE4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C8AE8
  if (crb(c,2)) { goto L_801C8AF4; } // 801C8AEC
  goto L_801C8B1C; // 801C8AF0
L_801C8AF4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C8AF4
  if (crb(c,2)) { goto L_801C8B0C; } // 801C8AF8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C8AFC
  c->r[0]=c->r[0]|0x00000100u; // 801C8B00
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C8B04
  goto L_801C8B20; // 801C8B08
L_801C8B0C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C8B0C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 801C8B10
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C8B14
  goto L_801C8B20; // 801C8B18
L_801C8B1C:;
  f_801C4F94(c); return; // 801C8B1C
L_801C8B20:;
  c->r[3]=0u+0x00000001u; // 801C8B20
  return; // 801C8B24
}

// GetScnObjOption__Q34nw4r3g3d12ScnMdlSimpleCFUlPUl
void f_801C8B28(Ctx* __restrict c) {
  trace_call(0x801C8B28u);
  cmps(c,0,(int32_t)c->r[5],0); // 801C8B28
  if (!crb(c,2)) { goto L_801C8B38; } // 801C8B2C
  c->r[3]=0u+0x00000000u; // 801C8B30
  return; // 801C8B34
L_801C8B38:;
  c->r[6]=0u+0x00020000u; // 801C8B38
  c->r[0]=c->r[6]+0x00000001u; // 801C8B3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C8B40
  if (crb(c,2)) { goto L_801C8B4C; } // 801C8B44
  goto L_801C8B5C; // 801C8B48
L_801C8B4C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C8B4C
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 801C8B50
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C8B54
  goto L_801C8B60; // 801C8B58
L_801C8B5C:;
  f_801C4FDC(c); return; // 801C8B5C
L_801C8B60:;
  c->r[3]=0u+0x00000001u; // 801C8B60
  return; // 801C8B64
}

// SetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_801C8B68(Ctx* __restrict c) {
  trace_call(0x801C8B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8B68
  c->r[0]=c->lr; // 801C8B6C
  cmps(c,1,(int32_t)c->r[4],0); // 801C8B70
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C8B74
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C8B78
  c->r[31]=c->r[4]|c->r[4]; // 801C8B7C
  W32(c->r[1]+0x00000038u,c->r[30]); // 801C8B80
  c->r[30]=c->r[3]|c->r[3]; // 801C8B84
  W32(c->r[1]+0x00000034u,c->r[29]); // 801C8B88
  if (crb(c,6)) { goto L_801C8B9C; } // 801C8B8C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801C8B90
  cmps(c,0,(int32_t)c->r[0],0); // 801C8B94
  if (crb(c,2)) { goto L_801C8BA4; } // 801C8B98
L_801C8B9C:;
  c->r[3]=0u+0x00000000u; // 801C8B9C
  goto L_801C9148; // 801C8BA0
L_801C8BA4:;
  cmpu(c,0,c->r[5],0x00000006u); // 801C8BA4
  if (crb(c,1)) { goto L_801C8F28; } // 801C8BA8
  c->r[3]=0u+0x802A0000u; // 801C8BAC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C8BB0
  c->r[3]=c->r[3]+0x00001578u; // 801C8BB4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C8BB8
  c->ctr=c->r[3]; // 801C8BBC
  if (true) { switch (c->ctr) { case 0x801C8BC4u: goto L_801C8BC4; case 0x801C8C1Cu: goto L_801C8C1C; case 0x801C8C74u: goto L_801C8C74; case 0x801C8CCCu: goto L_801C8CCC; case 0x801C8D24u: goto L_801C8D24; case 0x801C8D78u: goto L_801C8D78; case 0x801C8F28u: goto L_801C8F28; default: break; } dispatch(c,c->ctr); return; } // 801C8BC0
L_801C8BC4:;
  c->r[29]=0u+0x00000000u; // 801C8BC4
  if (crb(c,6)) { goto L_801C8BFC; } // 801C8BC8
  c->r[5]=0u+0x80270000u; // 801C8BCC
  c->r[3]=c->r[31]|c->r[31]; // 801C8BD0
  c->r[5]=c->r[5]+0x00000C38u; // 801C8BD4
  c->r[4]=c->r[1]+0x0000002Cu; // 801C8BD8
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801C8BDC
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8BE0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8BE4
  c->ctr=c->r[12]; // 801C8BE8
  if (true) { c->lr=0x801C8BF0u; dispatch(c,c->ctr); } // 801C8BEC
  cmps(c,0,(int32_t)c->r[3],0); // 801C8BF0
  if (crb(c,2)) { goto L_801C8BFC; } // 801C8BF4
  c->r[29]=0u+0x00000001u; // 801C8BF8
L_801C8BFC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8BFC
  if (crb(c,2)) { goto L_801C8C0C; } // 801C8C00
  c->r[29]=c->r[31]|c->r[31]; // 801C8C04
  goto L_801C8C10; // 801C8C08
L_801C8C0C:;
  c->r[29]=0u+0x00000000u; // 801C8C0C
L_801C8C10:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8C10
  if (!crb(c,2)) { goto L_801C8F30; } // 801C8C14
  goto L_801C8F28; // 801C8C18
L_801C8C1C:;
  c->r[29]=0u+0x00000000u; // 801C8C1C
  if (crb(c,6)) { goto L_801C8C54; } // 801C8C20
  c->r[5]=0u+0x80270000u; // 801C8C24
  c->r[3]=c->r[31]|c->r[31]; // 801C8C28
  c->r[5]=c->r[5]+0x00000B80u; // 801C8C2C
  c->r[4]=c->r[1]+0x00000028u; // 801C8C30
  W32(c->r[1]+0x00000028u,c->r[5]); // 801C8C34
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8C38
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8C3C
  c->ctr=c->r[12]; // 801C8C40
  if (true) { c->lr=0x801C8C48u; dispatch(c,c->ctr); } // 801C8C44
  cmps(c,0,(int32_t)c->r[3],0); // 801C8C48
  if (crb(c,2)) { goto L_801C8C54; } // 801C8C4C
  c->r[29]=0u+0x00000001u; // 801C8C50
L_801C8C54:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8C54
  if (crb(c,2)) { goto L_801C8C64; } // 801C8C58
  c->r[29]=c->r[31]|c->r[31]; // 801C8C5C
  goto L_801C8C68; // 801C8C60
L_801C8C64:;
  c->r[29]=0u+0x00000000u; // 801C8C64
L_801C8C68:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8C68
  if (!crb(c,2)) { goto L_801C8F9C; } // 801C8C6C
  goto L_801C8F28; // 801C8C70
L_801C8C74:;
  c->r[29]=0u+0x00000000u; // 801C8C74
  if (crb(c,6)) { goto L_801C8CAC; } // 801C8C78
  c->r[5]=0u+0x80270000u; // 801C8C7C
  c->r[3]=c->r[31]|c->r[31]; // 801C8C80
  c->r[5]=c->r[5]+0x00000BA8u; // 801C8C84
  c->r[4]=c->r[1]+0x00000024u; // 801C8C88
  W32(c->r[1]+0x00000024u,c->r[5]); // 801C8C8C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8C90
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8C94
  c->ctr=c->r[12]; // 801C8C98
  if (true) { c->lr=0x801C8CA0u; dispatch(c,c->ctr); } // 801C8C9C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8CA0
  if (crb(c,2)) { goto L_801C8CAC; } // 801C8CA4
  c->r[29]=0u+0x00000001u; // 801C8CA8
L_801C8CAC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8CAC
  if (crb(c,2)) { goto L_801C8CBC; } // 801C8CB0
  c->r[29]=c->r[31]|c->r[31]; // 801C8CB4
  goto L_801C8CC0; // 801C8CB8
L_801C8CBC:;
  c->r[29]=0u+0x00000000u; // 801C8CBC
L_801C8CC0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8CC0
  if (!crb(c,2)) { goto L_801C9008; } // 801C8CC4
  goto L_801C8F28; // 801C8CC8
L_801C8CCC:;
  c->r[29]=0u+0x00000000u; // 801C8CCC
  if (crb(c,6)) { goto L_801C8D04; } // 801C8CD0
  c->r[5]=0u+0x80270000u; // 801C8CD4
  c->r[3]=c->r[31]|c->r[31]; // 801C8CD8
  c->r[5]=c->r[5]+0x00000BD8u; // 801C8CDC
  c->r[4]=c->r[1]+0x00000020u; // 801C8CE0
  W32(c->r[1]+0x00000020u,c->r[5]); // 801C8CE4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8CE8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8CEC
  c->ctr=c->r[12]; // 801C8CF0
  if (true) { c->lr=0x801C8CF8u; dispatch(c,c->ctr); } // 801C8CF4
  cmps(c,0,(int32_t)c->r[3],0); // 801C8CF8
  if (crb(c,2)) { goto L_801C8D04; } // 801C8CFC
  c->r[29]=0u+0x00000001u; // 801C8D00
L_801C8D04:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8D04
  if (crb(c,2)) { goto L_801C8D14; } // 801C8D08
  c->r[29]=c->r[31]|c->r[31]; // 801C8D0C
  goto L_801C8D18; // 801C8D10
L_801C8D14:;
  c->r[29]=0u+0x00000000u; // 801C8D14
L_801C8D18:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8D18
  if (!crb(c,2)) { goto L_801C9074; } // 801C8D1C
  goto L_801C8F28; // 801C8D20
L_801C8D24:;
  c->r[29]=0u+0x00000000u; // 801C8D24
  if (crb(c,6)) { goto L_801C8D5C; } // 801C8D28
  c->r[5]=0u+0x80270000u; // 801C8D2C
  c->r[3]=c->r[31]|c->r[31]; // 801C8D30
  c->r[5]=c->r[5]+0x00000C08u; // 801C8D34
  c->r[4]=c->r[1]+0x0000001Cu; // 801C8D38
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801C8D3C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8D40
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8D44
  c->ctr=c->r[12]; // 801C8D48
  if (true) { c->lr=0x801C8D50u; dispatch(c,c->ctr); } // 801C8D4C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8D50
  if (crb(c,2)) { goto L_801C8D5C; } // 801C8D54
  c->r[29]=0u+0x00000001u; // 801C8D58
L_801C8D5C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8D5C
  if (crb(c,2)) { goto L_801C8D68; } // 801C8D60
  goto L_801C8D6C; // 801C8D64
L_801C8D68:;
  c->r[31]=0u+0x00000000u; // 801C8D68
L_801C8D6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C8D6C
  if (!crb(c,2)) { goto L_801C90E0; } // 801C8D70
  goto L_801C8F28; // 801C8D74
L_801C8D78:;
  c->r[29]=0u+0x00000000u; // 801C8D78
  if (crb(c,6)) { goto L_801C8DB0; } // 801C8D7C
  c->r[5]=0u+0x80270000u; // 801C8D80
  c->r[3]=c->r[31]|c->r[31]; // 801C8D84
  c->r[5]=c->r[5]+0x00000C38u; // 801C8D88
  c->r[4]=c->r[1]+0x00000018u; // 801C8D8C
  W32(c->r[1]+0x00000018u,c->r[5]); // 801C8D90
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8D94
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8D98
  c->ctr=c->r[12]; // 801C8D9C
  if (true) { c->lr=0x801C8DA4u; dispatch(c,c->ctr); } // 801C8DA0
  cmps(c,0,(int32_t)c->r[3],0); // 801C8DA4
  if (crb(c,2)) { goto L_801C8DB0; } // 801C8DA8
  c->r[29]=0u+0x00000001u; // 801C8DAC
L_801C8DB0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8DB0
  if (crb(c,2)) { goto L_801C8DC0; } // 801C8DB4
  c->r[29]=c->r[31]|c->r[31]; // 801C8DB8
  goto L_801C8DC4; // 801C8DBC
L_801C8DC0:;
  c->r[29]=0u+0x00000000u; // 801C8DC0
L_801C8DC4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8DC4
  if (!crb(c,2)) { goto L_801C8F30; } // 801C8DC8
  cmps(c,0,(int32_t)c->r[31],0); // 801C8DCC
  c->r[29]=0u+0x00000000u; // 801C8DD0
  if (crb(c,2)) { goto L_801C8E08; } // 801C8DD4
  c->r[5]=0u+0x80270000u; // 801C8DD8
  c->r[3]=c->r[31]|c->r[31]; // 801C8DDC
  c->r[5]=c->r[5]+0x00000B80u; // 801C8DE0
  c->r[4]=c->r[1]+0x00000014u; // 801C8DE4
  W32(c->r[1]+0x00000014u,c->r[5]); // 801C8DE8
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8DEC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8DF0
  c->ctr=c->r[12]; // 801C8DF4
  if (true) { c->lr=0x801C8DFCu; dispatch(c,c->ctr); } // 801C8DF8
  cmps(c,0,(int32_t)c->r[3],0); // 801C8DFC
  if (crb(c,2)) { goto L_801C8E08; } // 801C8E00
  c->r[29]=0u+0x00000001u; // 801C8E04
L_801C8E08:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8E08
  if (crb(c,2)) { goto L_801C8E18; } // 801C8E0C
  c->r[29]=c->r[31]|c->r[31]; // 801C8E10
  goto L_801C8E1C; // 801C8E14
L_801C8E18:;
  c->r[29]=0u+0x00000000u; // 801C8E18
L_801C8E1C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8E1C
  if (!crb(c,2)) { goto L_801C8F9C; } // 801C8E20
  cmps(c,0,(int32_t)c->r[31],0); // 801C8E24
  c->r[29]=0u+0x00000000u; // 801C8E28
  if (crb(c,2)) { goto L_801C8E60; } // 801C8E2C
  c->r[5]=0u+0x80270000u; // 801C8E30
  c->r[3]=c->r[31]|c->r[31]; // 801C8E34
  c->r[5]=c->r[5]+0x00000BA8u; // 801C8E38
  c->r[4]=c->r[1]+0x00000010u; // 801C8E3C
  W32(c->r[1]+0x00000010u,c->r[5]); // 801C8E40
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8E44
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8E48
  c->ctr=c->r[12]; // 801C8E4C
  if (true) { c->lr=0x801C8E54u; dispatch(c,c->ctr); } // 801C8E50
  cmps(c,0,(int32_t)c->r[3],0); // 801C8E54
  if (crb(c,2)) { goto L_801C8E60; } // 801C8E58
  c->r[29]=0u+0x00000001u; // 801C8E5C
L_801C8E60:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8E60
  if (crb(c,2)) { goto L_801C8E70; } // 801C8E64
  c->r[29]=c->r[31]|c->r[31]; // 801C8E68
  goto L_801C8E74; // 801C8E6C
L_801C8E70:;
  c->r[29]=0u+0x00000000u; // 801C8E70
L_801C8E74:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8E74
  if (!crb(c,2)) { goto L_801C9008; } // 801C8E78
  cmps(c,0,(int32_t)c->r[31],0); // 801C8E7C
  c->r[29]=0u+0x00000000u; // 801C8E80
  if (crb(c,2)) { goto L_801C8EB8; } // 801C8E84
  c->r[5]=0u+0x80270000u; // 801C8E88
  c->r[3]=c->r[31]|c->r[31]; // 801C8E8C
  c->r[5]=c->r[5]+0x00000BD8u; // 801C8E90
  c->r[4]=c->r[1]+0x0000000Cu; // 801C8E94
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C8E98
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8E9C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8EA0
  c->ctr=c->r[12]; // 801C8EA4
  if (true) { c->lr=0x801C8EACu; dispatch(c,c->ctr); } // 801C8EA8
  cmps(c,0,(int32_t)c->r[3],0); // 801C8EAC
  if (crb(c,2)) { goto L_801C8EB8; } // 801C8EB0
  c->r[29]=0u+0x00000001u; // 801C8EB4
L_801C8EB8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8EB8
  if (crb(c,2)) { goto L_801C8EC8; } // 801C8EBC
  c->r[29]=c->r[31]|c->r[31]; // 801C8EC0
  goto L_801C8ECC; // 801C8EC4
L_801C8EC8:;
  c->r[29]=0u+0x00000000u; // 801C8EC8
L_801C8ECC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8ECC
  if (!crb(c,2)) { goto L_801C9074; } // 801C8ED0
  cmps(c,0,(int32_t)c->r[31],0); // 801C8ED4
  c->r[29]=0u+0x00000000u; // 801C8ED8
  if (crb(c,2)) { goto L_801C8F10; } // 801C8EDC
  c->r[5]=0u+0x80270000u; // 801C8EE0
  c->r[3]=c->r[31]|c->r[31]; // 801C8EE4
  c->r[5]=c->r[5]+0x00000C08u; // 801C8EE8
  c->r[4]=c->r[1]+0x00000008u; // 801C8EEC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C8EF0
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8EF4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C8EF8
  c->ctr=c->r[12]; // 801C8EFC
  if (true) { c->lr=0x801C8F04u; dispatch(c,c->ctr); } // 801C8F00
  cmps(c,0,(int32_t)c->r[3],0); // 801C8F04
  if (crb(c,2)) { goto L_801C8F10; } // 801C8F08
  c->r[29]=0u+0x00000001u; // 801C8F0C
L_801C8F10:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C8F10
  if (crb(c,2)) { goto L_801C8F1C; } // 801C8F14
  goto L_801C8F20; // 801C8F18
L_801C8F1C:;
  c->r[31]=0u+0x00000000u; // 801C8F1C
L_801C8F20:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C8F20
  if (!crb(c,2)) { goto L_801C90E0; } // 801C8F24
L_801C8F28:;
  c->r[3]=0u+0x00000000u; // 801C8F28
  goto L_801C9148; // 801C8F2C
L_801C8F30:;
  c->r[3]=c->r[29]|c->r[29]; // 801C8F30
  c->r[4]=0u+0x00000004u; // 801C8F34
  c->lr=0x801C8F3Cu; f_801B7CA8(c); // 801C8F38
  cmps(c,0,(int32_t)c->r[3],0); // 801C8F3C
  if (!crb(c,2)) { goto L_801C8F4C; } // 801C8F40
  c->r[3]=0u+0x00000000u; // 801C8F44
  goto L_801C9148; // 801C8F48
L_801C8F4C:;
  c->r[4]=R32(c->r[30]+0x00000124u); // 801C8F4C
  cmps(c,0,(int32_t)c->r[4],0); // 801C8F50
  if (crb(c,2)) { goto L_801C8F6C; } // 801C8F54
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C8F58
  c->r[3]=c->r[30]|c->r[30]; // 801C8F5C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C8F60
  c->ctr=c->r[12]; // 801C8F64
  if (true) { c->lr=0x801C8F6Cu; dispatch(c,c->ctr); } // 801C8F68
L_801C8F6C:;
  W32(c->r[30]+0x00000124u,c->r[29]); // 801C8F6C
  c->r[4]=0u+0x00010000u; // 801C8F70
  c->r[3]=c->r[29]|c->r[29]; // 801C8F74
  c->r[6]=c->r[30]|c->r[30]; // 801C8F78
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C8F7C
  c->r[4]=c->r[4]+0x00000002u; // 801C8F80
  c->r[5]=0u+0x00000000u; // 801C8F84
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C8F88
  c->ctr=c->r[12]; // 801C8F8C
  if (true) { c->lr=0x801C8F94u; dispatch(c,c->ctr); } // 801C8F90
  c->r[3]=0u+0x00000001u; // 801C8F94
  goto L_801C9148; // 801C8F98
L_801C8F9C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C8F9C
  c->r[4]=0u+0x00000004u; // 801C8FA0
  c->lr=0x801C8FA8u; f_801B7CA8(c); // 801C8FA4
  cmps(c,0,(int32_t)c->r[3],0); // 801C8FA8
  if (!crb(c,2)) { goto L_801C8FB8; } // 801C8FAC
  c->r[3]=0u+0x00000000u; // 801C8FB0
  goto L_801C9148; // 801C8FB4
L_801C8FB8:;
  c->r[4]=R32(c->r[30]+0x00000128u); // 801C8FB8
  cmps(c,0,(int32_t)c->r[4],0); // 801C8FBC
  if (crb(c,2)) { goto L_801C8FD8; } // 801C8FC0
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C8FC4
  c->r[3]=c->r[30]|c->r[30]; // 801C8FC8
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C8FCC
  c->ctr=c->r[12]; // 801C8FD0
  if (true) { c->lr=0x801C8FD8u; dispatch(c,c->ctr); } // 801C8FD4
L_801C8FD8:;
  W32(c->r[30]+0x00000128u,c->r[29]); // 801C8FD8
  c->r[4]=0u+0x00010000u; // 801C8FDC
  c->r[3]=c->r[29]|c->r[29]; // 801C8FE0
  c->r[6]=c->r[30]|c->r[30]; // 801C8FE4
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C8FE8
  c->r[4]=c->r[4]+0x00000002u; // 801C8FEC
  c->r[5]=0u+0x00000000u; // 801C8FF0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C8FF4
  c->ctr=c->r[12]; // 801C8FF8
  if (true) { c->lr=0x801C9000u; dispatch(c,c->ctr); } // 801C8FFC
  c->r[3]=0u+0x00000001u; // 801C9000
  goto L_801C9148; // 801C9004
L_801C9008:;
  c->r[3]=c->r[29]|c->r[29]; // 801C9008
  c->r[4]=0u+0x00000004u; // 801C900C
  c->lr=0x801C9014u; f_801B7CA8(c); // 801C9010
  cmps(c,0,(int32_t)c->r[3],0); // 801C9014
  if (!crb(c,2)) { goto L_801C9024; } // 801C9018
  c->r[3]=0u+0x00000000u; // 801C901C
  goto L_801C9148; // 801C9020
L_801C9024:;
  c->r[4]=R32(c->r[30]+0x0000012Cu); // 801C9024
  cmps(c,0,(int32_t)c->r[4],0); // 801C9028
  if (crb(c,2)) { goto L_801C9044; } // 801C902C
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C9030
  c->r[3]=c->r[30]|c->r[30]; // 801C9034
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C9038
  c->ctr=c->r[12]; // 801C903C
  if (true) { c->lr=0x801C9044u; dispatch(c,c->ctr); } // 801C9040
L_801C9044:;
  W32(c->r[30]+0x0000012Cu,c->r[29]); // 801C9044
  c->r[4]=0u+0x00010000u; // 801C9048
  c->r[3]=c->r[29]|c->r[29]; // 801C904C
  c->r[6]=c->r[30]|c->r[30]; // 801C9050
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C9054
  c->r[4]=c->r[4]+0x00000002u; // 801C9058
  c->r[5]=0u+0x00000000u; // 801C905C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C9060
  c->ctr=c->r[12]; // 801C9064
  if (true) { c->lr=0x801C906Cu; dispatch(c,c->ctr); } // 801C9068
  c->r[3]=0u+0x00000001u; // 801C906C
  goto L_801C9148; // 801C9070
L_801C9074:;
  c->r[3]=c->r[29]|c->r[29]; // 801C9074
  c->r[4]=0u+0x00000004u; // 801C9078
  c->lr=0x801C9080u; f_801B7CA8(c); // 801C907C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9080
  if (!crb(c,2)) { goto L_801C9090; } // 801C9084
  c->r[3]=0u+0x00000000u; // 801C9088
  goto L_801C9148; // 801C908C
L_801C9090:;
  c->r[4]=R32(c->r[30]+0x00000130u); // 801C9090
  cmps(c,0,(int32_t)c->r[4],0); // 801C9094
  if (crb(c,2)) { goto L_801C90B0; } // 801C9098
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C909C
  c->r[3]=c->r[30]|c->r[30]; // 801C90A0
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C90A4
  c->ctr=c->r[12]; // 801C90A8
  if (true) { c->lr=0x801C90B0u; dispatch(c,c->ctr); } // 801C90AC
L_801C90B0:;
  W32(c->r[30]+0x00000130u,c->r[29]); // 801C90B0
  c->r[4]=0u+0x00010000u; // 801C90B4
  c->r[3]=c->r[29]|c->r[29]; // 801C90B8
  c->r[6]=c->r[30]|c->r[30]; // 801C90BC
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C90C0
  c->r[4]=c->r[4]+0x00000002u; // 801C90C4
  c->r[5]=0u+0x00000000u; // 801C90C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C90CC
  c->ctr=c->r[12]; // 801C90D0
  if (true) { c->lr=0x801C90D8u; dispatch(c,c->ctr); } // 801C90D4
  c->r[3]=0u+0x00000001u; // 801C90D8
  goto L_801C9148; // 801C90DC
L_801C90E0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C90E0
  c->r[4]=0u+0x00000004u; // 801C90E4
  c->lr=0x801C90ECu; f_801B7CA8(c); // 801C90E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C90EC
  if (!crb(c,2)) { goto L_801C90FC; } // 801C90F0
  c->r[3]=0u+0x00000000u; // 801C90F4
  goto L_801C9148; // 801C90F8
L_801C90FC:;
  c->r[4]=R32(c->r[30]+0x00000134u); // 801C90FC
  cmps(c,0,(int32_t)c->r[4],0); // 801C9100
  if (crb(c,2)) { goto L_801C911C; } // 801C9104
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C9108
  c->r[3]=c->r[30]|c->r[30]; // 801C910C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C9110
  c->ctr=c->r[12]; // 801C9114
  if (true) { c->lr=0x801C911Cu; dispatch(c,c->ctr); } // 801C9118
L_801C911C:;
  W32(c->r[30]+0x00000134u,c->r[31]); // 801C911C
  c->r[4]=0u+0x00010000u; // 801C9120
  c->r[3]=c->r[31]|c->r[31]; // 801C9124
  c->r[6]=c->r[30]|c->r[30]; // 801C9128
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C912C
  c->r[4]=c->r[4]+0x00000002u; // 801C9130
  c->r[5]=0u+0x00000000u; // 801C9134
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C9138
  c->ctr=c->r[12]; // 801C913C
  if (true) { c->lr=0x801C9144u; dispatch(c,c->ctr); } // 801C9140
  c->r[3]=0u+0x00000001u; // 801C9144
L_801C9148:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C9148
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C914C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801C9150
  c->r[29]=R32(c->r[1]+0x00000034u); // 801C9154
  c->lr=c->r[0]; // 801C9158
  c->r[1]=c->r[1]+0x00000040u; // 801C915C
  return; // 801C9160
}

// RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFPQ34nw4r3g3d6AnmObj
void f_801C9164(Ctx* __restrict c) {
  trace_call(0x801C9164u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9164
  c->r[0]=c->lr; // 801C9168
  cmps(c,0,(int32_t)c->r[4],0); // 801C916C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9174
  c->r[31]=c->r[3]|c->r[3]; // 801C9178
  if (!crb(c,2)) { goto L_801C9188; } // 801C917C
  c->r[3]=0u+0x00000000u; // 801C9180
  goto L_801C92C8; // 801C9184
L_801C9188:;
  c->r[0]=R32(c->r[3]+0x00000124u); // 801C9188
  cmpu(c,0,c->r[4],c->r[0]); // 801C918C
  if (!crb(c,2)) { goto L_801C91C8; } // 801C9190
  c->r[3]=c->r[0]|c->r[0]; // 801C9194
  c->r[4]=0u+0x00010000u; // 801C9198
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C919C
  c->r[6]=c->r[31]|c->r[31]; // 801C91A0
  c->r[4]=c->r[4]+0x00000003u; // 801C91A4
  c->r[5]=0u+0x00000000u; // 801C91A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C91AC
  c->ctr=c->r[12]; // 801C91B0
  if (true) { c->lr=0x801C91B8u; dispatch(c,c->ctr); } // 801C91B4
  c->r[0]=0u+0x00000000u; // 801C91B8
  c->r[3]=0u+0x00000001u; // 801C91BC
  W32(c->r[31]+0x00000124u,c->r[0]); // 801C91C0
  goto L_801C92C8; // 801C91C4
L_801C91C8:;
  c->r[0]=R32(c->r[3]+0x00000128u); // 801C91C8
  cmpu(c,0,c->r[4],c->r[0]); // 801C91CC
  if (!crb(c,2)) { goto L_801C9208; } // 801C91D0
  c->r[3]=c->r[0]|c->r[0]; // 801C91D4
  c->r[4]=0u+0x00010000u; // 801C91D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C91DC
  c->r[6]=c->r[31]|c->r[31]; // 801C91E0
  c->r[4]=c->r[4]+0x00000003u; // 801C91E4
  c->r[5]=0u+0x00000000u; // 801C91E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C91EC
  c->ctr=c->r[12]; // 801C91F0
  if (true) { c->lr=0x801C91F8u; dispatch(c,c->ctr); } // 801C91F4
  c->r[0]=0u+0x00000000u; // 801C91F8
  c->r[3]=0u+0x00000001u; // 801C91FC
  W32(c->r[31]+0x00000128u,c->r[0]); // 801C9200
  goto L_801C92C8; // 801C9204
L_801C9208:;
  c->r[0]=R32(c->r[3]+0x0000012Cu); // 801C9208
  cmpu(c,0,c->r[4],c->r[0]); // 801C920C
  if (!crb(c,2)) { goto L_801C9248; } // 801C9210
  c->r[3]=c->r[0]|c->r[0]; // 801C9214
  c->r[4]=0u+0x00010000u; // 801C9218
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C921C
  c->r[6]=c->r[31]|c->r[31]; // 801C9220
  c->r[4]=c->r[4]+0x00000003u; // 801C9224
  c->r[5]=0u+0x00000000u; // 801C9228
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C922C
  c->ctr=c->r[12]; // 801C9230
  if (true) { c->lr=0x801C9238u; dispatch(c,c->ctr); } // 801C9234
  c->r[0]=0u+0x00000000u; // 801C9238
  c->r[3]=0u+0x00000001u; // 801C923C
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 801C9240
  goto L_801C92C8; // 801C9244
L_801C9248:;
  c->r[0]=R32(c->r[3]+0x00000130u); // 801C9248
  cmpu(c,0,c->r[4],c->r[0]); // 801C924C
  if (!crb(c,2)) { goto L_801C9288; } // 801C9250
  c->r[3]=c->r[0]|c->r[0]; // 801C9254
  c->r[4]=0u+0x00010000u; // 801C9258
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C925C
  c->r[6]=c->r[31]|c->r[31]; // 801C9260
  c->r[4]=c->r[4]+0x00000003u; // 801C9264
  c->r[5]=0u+0x00000000u; // 801C9268
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C926C
  c->ctr=c->r[12]; // 801C9270
  if (true) { c->lr=0x801C9278u; dispatch(c,c->ctr); } // 801C9274
  c->r[0]=0u+0x00000000u; // 801C9278
  c->r[3]=0u+0x00000001u; // 801C927C
  W32(c->r[31]+0x00000130u,c->r[0]); // 801C9280
  goto L_801C92C8; // 801C9284
L_801C9288:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 801C9288
  cmpu(c,0,c->r[4],c->r[3]); // 801C928C
  if (!crb(c,2)) { goto L_801C92C4; } // 801C9290
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9294
  c->r[4]=0u+0x00010000u; // 801C9298
  c->r[6]=c->r[31]|c->r[31]; // 801C929C
  c->r[5]=0u+0x00000000u; // 801C92A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C92A4
  c->r[4]=c->r[4]+0x00000003u; // 801C92A8
  c->ctr=c->r[12]; // 801C92AC
  if (true) { c->lr=0x801C92B4u; dispatch(c,c->ctr); } // 801C92B0
  c->r[0]=0u+0x00000000u; // 801C92B4
  c->r[3]=0u+0x00000001u; // 801C92B8
  W32(c->r[31]+0x00000134u,c->r[0]); // 801C92BC
  goto L_801C92C8; // 801C92C0
L_801C92C4:;
  c->r[3]=0u+0x00000000u; // 801C92C4
L_801C92C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C92C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C92CC
  c->lr=c->r[0]; // 801C92D0
  c->r[1]=c->r[1]+0x00000010u; // 801C92D4
  return; // 801C92D8
}

// RemoveAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_801C92DC(Ctx* __restrict c) {
  trace_call(0x801C92DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C92DC
  c->r[0]=c->lr; // 801C92E0
  cmps(c,0,(int32_t)c->r[4],3); // 801C92E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C92E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C92EC
  c->r[31]=0u+0x00000000u; // 801C92F0
  if (crb(c,2)) { goto L_801C937C; } // 801C92F4
  if (!crb(c,0)) { goto L_801C9314; } // 801C92F8
  cmps(c,0,(int32_t)c->r[4],1); // 801C92FC
  if (crb(c,2)) { goto L_801C9344; } // 801C9300
  if (!crb(c,0)) { goto L_801C9360; } // 801C9304
  cmps(c,0,(int32_t)c->r[4],0); // 801C9308
  if (!crb(c,0)) { goto L_801C9328; } // 801C930C
  goto L_801C93B0; // 801C9310
L_801C9314:;
  cmps(c,0,(int32_t)c->r[4],7); // 801C9314
  if (!crb(c,0)) { goto L_801C93B0; } // 801C9318
  cmps(c,0,(int32_t)c->r[4],5); // 801C931C
  if (!crb(c,0)) { goto L_801C93B0; } // 801C9320
  goto L_801C9398; // 801C9324
L_801C9328:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9328
  c->r[31]=R32(c->r[3]+0x00000124u); // 801C932C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C9330
  c->r[4]=c->r[31]|c->r[31]; // 801C9334
  c->ctr=c->r[12]; // 801C9338
  if (true) { c->lr=0x801C9340u; dispatch(c,c->ctr); } // 801C933C
  goto L_801C93B0; // 801C9340
L_801C9344:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9344
  c->r[31]=R32(c->r[3]+0x00000128u); // 801C9348
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C934C
  c->r[4]=c->r[31]|c->r[31]; // 801C9350
  c->ctr=c->r[12]; // 801C9354
  if (true) { c->lr=0x801C935Cu; dispatch(c,c->ctr); } // 801C9358
  goto L_801C93B0; // 801C935C
L_801C9360:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9360
  c->r[31]=R32(c->r[3]+0x0000012Cu); // 801C9364
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C9368
  c->r[4]=c->r[31]|c->r[31]; // 801C936C
  c->ctr=c->r[12]; // 801C9370
  if (true) { c->lr=0x801C9378u; dispatch(c,c->ctr); } // 801C9374
  goto L_801C93B0; // 801C9378
L_801C937C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C937C
  c->r[31]=R32(c->r[3]+0x00000130u); // 801C9380
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C9384
  c->r[4]=c->r[31]|c->r[31]; // 801C9388
  c->ctr=c->r[12]; // 801C938C
  if (true) { c->lr=0x801C9394u; dispatch(c,c->ctr); } // 801C9390
  goto L_801C93B0; // 801C9394
L_801C9398:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9398
  c->r[31]=R32(c->r[3]+0x00000134u); // 801C939C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C93A0
  c->r[4]=c->r[31]|c->r[31]; // 801C93A4
  c->ctr=c->r[12]; // 801C93A8
  if (true) { c->lr=0x801C93B0u; dispatch(c,c->ctr); } // 801C93AC
L_801C93B0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C93B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C93B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C93B8
  c->lr=c->r[0]; // 801C93BC
  c->r[1]=c->r[1]+0x00000010u; // 801C93C0
  return; // 801C93C4
}

// GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_801C93C8(Ctx* __restrict c) {
  trace_call(0x801C93C8u);
  cmps(c,0,(int32_t)c->r[4],3); // 801C93C8
  if (crb(c,2)) { goto L_801C9418; } // 801C93CC
  if (!crb(c,0)) { goto L_801C93EC; } // 801C93D0
  cmps(c,0,(int32_t)c->r[4],1); // 801C93D4
  if (crb(c,2)) { goto L_801C9408; } // 801C93D8
  if (!crb(c,0)) { goto L_801C9410; } // 801C93DC
  cmps(c,0,(int32_t)c->r[4],0); // 801C93E0
  if (!crb(c,0)) { goto L_801C9400; } // 801C93E4
  goto L_801C9428; // 801C93E8
L_801C93EC:;
  cmps(c,0,(int32_t)c->r[4],7); // 801C93EC
  if (!crb(c,0)) { goto L_801C9428; } // 801C93F0
  cmps(c,0,(int32_t)c->r[4],5); // 801C93F4
  if (!crb(c,0)) { goto L_801C9428; } // 801C93F8
  goto L_801C9420; // 801C93FC
L_801C9400:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 801C9400
  return; // 801C9404
L_801C9408:;
  c->r[3]=R32(c->r[3]+0x00000128u); // 801C9408
  return; // 801C940C
L_801C9410:;
  c->r[3]=R32(c->r[3]+0x0000012Cu); // 801C9410
  return; // 801C9414
L_801C9418:;
  c->r[3]=R32(c->r[3]+0x00000130u); // 801C9418
  return; // 801C941C
L_801C9420:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 801C9420
  return; // 801C9424
L_801C9428:;
  c->r[3]=0u+0x00000000u; // 801C9428
  return; // 801C942C
}

// GetAnmObj__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_801C9430(Ctx* __restrict c) {
  trace_call(0x801C9430u);
  cmps(c,0,(int32_t)c->r[4],3); // 801C9430
  if (crb(c,2)) { goto L_801C9480; } // 801C9434
  if (!crb(c,0)) { goto L_801C9454; } // 801C9438
  cmps(c,0,(int32_t)c->r[4],1); // 801C943C
  if (crb(c,2)) { goto L_801C9470; } // 801C9440
  if (!crb(c,0)) { goto L_801C9478; } // 801C9444
  cmps(c,0,(int32_t)c->r[4],0); // 801C9448
  if (!crb(c,0)) { goto L_801C9468; } // 801C944C
  goto L_801C9490; // 801C9450
L_801C9454:;
  cmps(c,0,(int32_t)c->r[4],7); // 801C9454
  if (!crb(c,0)) { goto L_801C9490; } // 801C9458
  cmps(c,0,(int32_t)c->r[4],5); // 801C945C
  if (!crb(c,0)) { goto L_801C9490; } // 801C9460
  goto L_801C9488; // 801C9464
L_801C9468:;
  c->r[3]=R32(c->r[3]+0x00000124u); // 801C9468
  return; // 801C946C
L_801C9470:;
  c->r[3]=R32(c->r[3]+0x00000128u); // 801C9470
  return; // 801C9474
L_801C9478:;
  c->r[3]=R32(c->r[3]+0x0000012Cu); // 801C9478
  return; // 801C947C
L_801C9480:;
  c->r[3]=R32(c->r[3]+0x00000130u); // 801C9480
  return; // 801C9484
L_801C9488:;
  c->r[3]=R32(c->r[3]+0x00000134u); // 801C9488
  return; // 801C948C
L_801C9490:;
  c->r[3]=0u+0x00000000u; // 801C9490
  return; // 801C9494
}

// UpdateFrame__Q34nw4r3g3d12ScnMdlSimpleFv
void f_801C9498(Ctx* __restrict c) {
  trace_call(0x801C9498u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9498
  c->r[0]=c->lr; // 801C949C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C94A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C94A4
  c->r[31]=c->r[3]|c->r[3]; // 801C94A8
  c->r[0]=R32(c->r[3]+0x00000124u); // 801C94AC
  cmps(c,0,(int32_t)c->r[0],0); // 801C94B0
  if (crb(c,2)) { goto L_801C94CC; } // 801C94B4
  c->r[3]=c->r[0]|c->r[0]; // 801C94B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C94BC
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C94C0
  c->ctr=c->r[12]; // 801C94C4
  if (true) { c->lr=0x801C94CCu; dispatch(c,c->ctr); } // 801C94C8
L_801C94CC:;
  c->r[3]=R32(c->r[31]+0x00000128u); // 801C94CC
  cmps(c,0,(int32_t)c->r[3],0); // 801C94D0
  if (crb(c,2)) { goto L_801C94E8; } // 801C94D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C94D8
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C94DC
  c->ctr=c->r[12]; // 801C94E0
  if (true) { c->lr=0x801C94E8u; dispatch(c,c->ctr); } // 801C94E4
L_801C94E8:;
  c->r[3]=R32(c->r[31]+0x0000012Cu); // 801C94E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C94EC
  if (crb(c,2)) { goto L_801C9504; } // 801C94F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C94F4
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C94F8
  c->ctr=c->r[12]; // 801C94FC
  if (true) { c->lr=0x801C9504u; dispatch(c,c->ctr); } // 801C9500
L_801C9504:;
  c->r[3]=R32(c->r[31]+0x00000130u); // 801C9504
  cmps(c,0,(int32_t)c->r[3],0); // 801C9508
  if (crb(c,2)) { goto L_801C9520; } // 801C950C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9510
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C9514
  c->ctr=c->r[12]; // 801C9518
  if (true) { c->lr=0x801C9520u; dispatch(c,c->ctr); } // 801C951C
L_801C9520:;
  c->r[3]=R32(c->r[31]+0x00000134u); // 801C9520
  cmps(c,0,(int32_t)c->r[3],0); // 801C9524
  if (crb(c,2)) { goto L_801C953C; } // 801C9528
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C952C
  c->r[12]=R32(c->r[12]+0x00000024u); // 801C9530
  c->ctr=c->r[12]; // 801C9534
  if (true) { c->lr=0x801C953Cu; dispatch(c,c->ctr); } // 801C9538
L_801C953C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C953C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9540
  c->lr=c->r[0]; // 801C9544
  c->r[1]=c->r[1]+0x00000010u; // 801C9548
  return; // 801C954C
}

// GetViewPosMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_801C9550(Ctx* __restrict c) {
  trace_call(0x801C9550u);
  c->r[0]=R16(c->r[3]+0x00000102u); // 801C9550
  c->r[5]=R8(c->r[3]+0x00000101u); // 801C9554
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C9558
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801C955C
  c->r[0]=c->r[4]+0x0000001Fu; // 801C9560
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C9564
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801C9568
  c->r[3]=c->r[3]+c->r[0]; // 801C956C
  return; // 801C9570
}

// GetViewNrmMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_801C9574(Ctx* __restrict c) {
  trace_call(0x801C9574u);
  c->r[5]=R32(c->r[3]+0x000000F8u); // 801C9574
  cmps(c,0,(int32_t)c->r[5],0); // 801C9578
  if (crb(c,2)) { goto L_801C95A0; } // 801C957C
  c->r[0]=R16(c->r[3]+0x00000102u); // 801C9580
  c->r[4]=R8(c->r[3]+0x00000101u); // 801C9584
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C9588
  c->r[0]=c->r[3]+0x0000001Fu; // 801C958C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C9590
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C9594
  c->r[3]=c->r[5]+c->r[0]; // 801C9598
  return; // 801C959C
L_801C95A0:;
  c->r[3]=0u+0x00000000u; // 801C95A0
  return; // 801C95A4
}

// GetViewTexMtxArray__Q34nw4r3g3d12ScnMdlSimpleFv
void f_801C95A8(Ctx* __restrict c) {
  trace_call(0x801C95A8u);
  c->r[5]=R32(c->r[3]+0x000000FCu); // 801C95A8
  cmps(c,0,(int32_t)c->r[5],0); // 801C95AC
  if (crb(c,2)) { goto L_801C95D4; } // 801C95B0
  c->r[0]=R16(c->r[3]+0x00000102u); // 801C95B4
  c->r[4]=R8(c->r[3]+0x00000101u); // 801C95B8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C95BC
  c->r[0]=c->r[3]+0x0000001Fu; // 801C95C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C95C4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C95C8
  c->r[3]=c->r[5]+c->r[0]; // 801C95CC
  return; // 801C95D0
L_801C95D4:;
  c->r[3]=0u+0x00000000u; // 801C95D4
  return; // 801C95D8
}

// __ct__Q34nw4r3g3d12ScnMdlSimpleFP12MEMAllocatorQ34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34PUlPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PQ34nw4r4math5MTX34ii
void f_801C95DC(Ctx* __restrict c) {
  trace_call(0x801C95DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C95DC
  c->r[0]=c->lr; // 801C95E0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C95E4
  c->r[11]=c->r[1]+0x00000050u; // 801C95E8
  c->lr=0x801C95F0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C95EC
  c->r[30]=R32(c->r[1]+0x00000058u); // 801C95F0
  c->r[28]=c->r[3]|c->r[3]; // 801C95F4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801C95F8
  c->r[29]=c->r[5]|c->r[5]; // 801C95FC
  c->r[22]=c->r[6]|c->r[6]; // 801C9600
  c->r[23]=c->r[7]|c->r[7]; // 801C9604
  c->r[24]=c->r[8]|c->r[8]; // 801C9608
  c->r[25]=c->r[9]|c->r[9]; // 801C960C
  c->r[26]=c->r[10]|c->r[10]; // 801C9610
  c->lr=0x801C9618u; f_801C49B4(c); // 801C9614
  {uint32_t ea=c->r[2]+0xFFFF9CD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9618
  c->r[5]=0u+0x802A0000u; // 801C961C
  c->r[5]=c->r[5]+0x000015A0u; // 801C9620
  c->r[4]=0u+0x802A0000u; // 801C9624
  {uint32_t ea=c->r[28]+0x000000DCu; WF32(ea,c->f[0]);} // 801C9628
  c->r[27]=0u+0x00000000u; // 801C962C
  c->r[3]=c->r[29]|c->r[29]; // 801C9630
  c->r[4]=c->r[4]+0x00001594u; // 801C9634
  {uint32_t ea=c->r[28]+0x000000E0u; WF32(ea,c->f[0]);} // 801C9638
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 801C963C
  W32(c->r[28]+0x00000000u,c->r[5]); // 801C9640
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C9644
  W32(c->r[28]+0x000000E8u,c->r[0]); // 801C9648
  W32(c->r[28]+0x000000ECu,c->r[22]); // 801C964C
  W32(c->r[28]+0x000000F0u,c->r[23]); // 801C9650
  W32(c->r[28]+0x000000F4u,c->r[24]); // 801C9654
  W32(c->r[28]+0x000000F8u,c->r[25]); // 801C9658
  W32(c->r[28]+0x000000FCu,c->r[26]); // 801C965C
  W8(c->r[28]+0x00000100u,c->r[30]); // 801C9660
  W8(c->r[28]+0x00000101u,c->r[27]); // 801C9664
  W16(c->r[28]+0x00000102u,c->r[31]); // 801C9668
  W32(c->r[28]+0x00000104u,c->r[27]); // 801C966C
  c->lr=0x801C9674u; f_801A9978(c); // 801C9670
  W32(c->r[28]+0x00000108u,c->r[3]); // 801C9674
  c->r[3]=c->r[29]|c->r[29]; // 801C9678
  c->r[4]=c->r[13]+0xFFFF90A8u; // 801C967C
  c->lr=0x801C9684u; f_801A9978(c); // 801C9680
  W32(c->r[28]+0x0000010Cu,c->r[3]); // 801C9684
  c->r[3]=c->r[29]|c->r[29]; // 801C9688
  c->r[4]=c->r[13]+0xFFFF90B0u; // 801C968C
  c->lr=0x801C9694u; f_801A9978(c); // 801C9690
  W32(c->r[28]+0x00000110u,c->r[3]); // 801C9694
  c->r[3]=c->r[29]|c->r[29]; // 801C9698
  c->r[4]=c->r[13]+0xFFFF90B8u; // 801C969C
  c->lr=0x801C96A4u; f_801A9978(c); // 801C96A0
  c->r[0]=R32(c->r[28]+0x00000110u); // 801C96A4
  c->r[4]=0u+0x00000002u; // 801C96A8
  W32(c->r[28]+0x00000114u,c->r[3]); // 801C96AC
  cmps(c,0,(int32_t)c->r[0],0); // 801C96B0
  W32(c->r[28]+0x00000118u,c->r[4]); // 801C96B4
  W32(c->r[28]+0x0000011Cu,c->r[27]); // 801C96B8
  W8(c->r[28]+0x00000120u,c->r[27]); // 801C96BC
  W8(c->r[28]+0x00000121u,c->r[27]); // 801C96C0
  W16(c->r[28]+0x00000122u,c->r[27]); // 801C96C4
  W32(c->r[28]+0x00000124u,c->r[27]); // 801C96C8
  W32(c->r[28]+0x00000128u,c->r[27]); // 801C96CC
  W32(c->r[28]+0x0000012Cu,c->r[27]); // 801C96D0
  W32(c->r[28]+0x00000130u,c->r[27]); // 801C96D4
  W32(c->r[28]+0x00000134u,c->r[27]); // 801C96D8
  if (crb(c,2)) { goto L_801C96F0; } // 801C96DC
  c->r[0]=R32(c->r[28]+0x000000CCu); // 801C96E0
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 801C96E4
  W32(c->r[28]+0x000000CCu,c->r[0]); // 801C96E8
  goto L_801C96FC; // 801C96EC
L_801C96F0:;
  c->r[0]=R32(c->r[28]+0x000000CCu); // 801C96F0
  c->r[0]=c->r[0]|0x20000000u; // 801C96F4
  W32(c->r[28]+0x000000CCu,c->r[0]); // 801C96F8
L_801C96FC:;
  c->r[0]=R32(c->r[28]+0x00000114u); // 801C96FC
  cmps(c,0,(int32_t)c->r[0],0); // 801C9700
  if (crb(c,2)) { goto L_801C9718; } // 801C9704
  c->r[0]=R32(c->r[28]+0x000000CCu); // 801C9708
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 801C970C
  W32(c->r[28]+0x000000CCu,c->r[0]); // 801C9710
  goto L_801C9724; // 801C9714
L_801C9718:;
  c->r[0]=R32(c->r[28]+0x000000CCu); // 801C9718
  c->r[0]=c->r[0]|0x40000000u; // 801C971C
  W32(c->r[28]+0x000000CCu,c->r[0]); // 801C9720
L_801C9724:;
  c->r[3]=R32(c->r[28]+0x000000F4u); // 801C9724
  cmps(c,0,(int32_t)c->r[3],0); // 801C9728
  if (crb(c,2)) { goto L_801C9744; } // 801C972C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 801C9730
  c->r[0]=c->r[4]+0x0000001Fu; // 801C9734
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C9738
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 801C973C
  c->lr=0x801C9744u; f_800E0354(c); // 801C9740
L_801C9744:;
  c->r[3]=R32(c->r[28]+0x000000F8u); // 801C9744
  cmps(c,0,(int32_t)c->r[3],0); // 801C9748
  if (crb(c,2)) { goto L_801C9764; } // 801C974C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)36); // 801C9750
  c->r[0]=c->r[4]+0x0000001Fu; // 801C9754
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C9758
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 801C975C
  c->lr=0x801C9764u; f_800E0354(c); // 801C9760
L_801C9764:;
  c->r[3]=R32(c->r[28]+0x000000FCu); // 801C9764
  cmps(c,0,(int32_t)c->r[3],0); // 801C9768
  if (crb(c,2)) { goto L_801C9784; } // 801C976C
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 801C9770
  c->r[0]=c->r[4]+0x0000001Fu; // 801C9774
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C9778
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 801C977C
  c->lr=0x801C9784u; f_800E0354(c); // 801C9780
L_801C9784:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C9784
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801C9788
  c->r[6]=c->r[3]+0x0000004Cu; // 801C978C
  cmps(c,0,(int32_t)c->r[0],0); // 801C9790
  if (crb(c,2)) { goto L_801C97D8; } // 801C9794
  {uint32_t ea=c->r[6]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9798
  c->r[3]=c->r[28]|c->r[28]; // 801C979C
  c->r[5]=c->r[1]+0x00000008u; // 801C97A0
  c->r[4]=0u+0x00000000u; // 801C97A4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C97A8
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C97AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C97B0
  {uint32_t ea=c->r[6]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C97B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801C97B8
  {uint32_t ea=c->r[6]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C97BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801C97C0
  {uint32_t ea=c->r[6]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C97C4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801C97C8
  {uint32_t ea=c->r[6]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C97CC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C97D0
  c->lr=0x801C97D8u; f_801C4E78(c); // 801C97D4
L_801C97D8:;
  c->r[11]=c->r[1]+0x00000050u; // 801C97D8
  c->r[3]=c->r[28]|c->r[28]; // 801C97DC
  c->lr=0x801C97E4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C97E0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C97E4
  c->lr=c->r[0]; // 801C97E8
  c->r[1]=c->r[1]+0x00000050u; // 801C97EC
  return; // 801C97F0
}

// __dt__Q34nw4r3g3d12ScnMdlSimpleFv
void f_801C97F4(Ctx* __restrict c) {
  trace_call(0x801C97F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C97F4
  c->r[0]=c->lr; // 801C97F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C97FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9800
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9804
  c->r[31]=c->r[3]|c->r[3]; // 801C9808
  if (crb(c,2)) { goto L_801C9900; } // 801C980C
  c->r[0]=R8(c->r[3]+0x00000121u); // 801C9810
  c->r[4]=0u+0x802A0000u; // 801C9814
  c->r[4]=c->r[4]+0x000015A0u; // 801C9818
  cmps(c,0,(int32_t)c->r[0],1); // 801C981C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C9820
  if (crb(c,2)) { goto L_801C982C; } // 801C9824
  goto L_801C984C; // 801C9828
L_801C982C:;
  c->r[3]=R32(c->r[3]+0x0000011Cu); // 801C982C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9830
  if (crb(c,2)) { goto L_801C984C; } // 801C9834
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9838
  c->r[4]=0u+0x00000001u; // 801C983C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C9840
  c->ctr=c->r[12]; // 801C9844
  if (true) { c->lr=0x801C984Cu; dispatch(c,c->ctr); } // 801C9848
L_801C984C:;
  c->r[4]=R32(c->r[31]+0x00000124u); // 801C984C
  cmps(c,0,(int32_t)c->r[4],0); // 801C9850
  if (crb(c,2)) { goto L_801C986C; } // 801C9854
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C9858
  c->r[3]=c->r[31]|c->r[31]; // 801C985C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C9860
  c->ctr=c->r[12]; // 801C9864
  if (true) { c->lr=0x801C986Cu; dispatch(c,c->ctr); } // 801C9868
L_801C986C:;
  c->r[4]=R32(c->r[31]+0x00000128u); // 801C986C
  cmps(c,0,(int32_t)c->r[4],0); // 801C9870
  if (crb(c,2)) { goto L_801C988C; } // 801C9874
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C9878
  c->r[3]=c->r[31]|c->r[31]; // 801C987C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C9880
  c->ctr=c->r[12]; // 801C9884
  if (true) { c->lr=0x801C988Cu; dispatch(c,c->ctr); } // 801C9888
L_801C988C:;
  c->r[4]=R32(c->r[31]+0x0000012Cu); // 801C988C
  cmps(c,0,(int32_t)c->r[4],0); // 801C9890
  if (crb(c,2)) { goto L_801C98AC; } // 801C9894
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C9898
  c->r[3]=c->r[31]|c->r[31]; // 801C989C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C98A0
  c->ctr=c->r[12]; // 801C98A4
  if (true) { c->lr=0x801C98ACu; dispatch(c,c->ctr); } // 801C98A8
L_801C98AC:;
  c->r[4]=R32(c->r[31]+0x00000130u); // 801C98AC
  cmps(c,0,(int32_t)c->r[4],0); // 801C98B0
  if (crb(c,2)) { goto L_801C98CC; } // 801C98B4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C98B8
  c->r[3]=c->r[31]|c->r[31]; // 801C98BC
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C98C0
  c->ctr=c->r[12]; // 801C98C4
  if (true) { c->lr=0x801C98CCu; dispatch(c,c->ctr); } // 801C98C8
L_801C98CC:;
  c->r[4]=R32(c->r[31]+0x00000134u); // 801C98CC
  cmps(c,0,(int32_t)c->r[4],0); // 801C98D0
  if (crb(c,2)) { goto L_801C98EC; } // 801C98D4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C98D8
  c->r[3]=c->r[31]|c->r[31]; // 801C98DC
  c->r[12]=R32(c->r[12]+0x00000038u); // 801C98E0
  c->ctr=c->r[12]; // 801C98E4
  if (true) { c->lr=0x801C98ECu; dispatch(c,c->ctr); } // 801C98E8
L_801C98EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C98EC
  if (crb(c,2)) { goto L_801C9900; } // 801C98F0
  c->r[3]=c->r[31]|c->r[31]; // 801C98F4
  c->r[4]=0u+0x00000000u; // 801C98F8
  c->lr=0x801C9900u; f_801C4AA0(c); // 801C98FC
L_801C9900:;
  c->r[3]=c->r[31]|c->r[31]; // 801C9900
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9904
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9908
  c->lr=c->r[0]; // 801C990C
  c->r[1]=c->r[1]+0x00000010u; // 801C9910
  return; // 801C9914
}

// IsDerivedFrom__Q34nw4r3g3d12ScnMdlSimpleCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801C9918(Ctx* __restrict c) {
  trace_call(0x801C9918u);
  c->r[3]=0u+0x80270000u; // 801C9918
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C991C
  c->r[3]=c->r[3]+0x00000E38u; // 801C9920
  cmpu(c,0,c->r[0],c->r[3]); // 801C9924
  if (!crb(c,2)) { goto L_801C9934; } // 801C9928
  c->r[3]=0u+0x00000001u; // 801C992C
  return; // 801C9930
L_801C9934:;
  c->r[3]=0u+0x80270000u; // 801C9934
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C9938
  c->r[3]=c->r[3]+0x00000E08u; // 801C993C
  cmpu(c,0,c->r[0],c->r[3]); // 801C9940
  if (!crb(c,2)) { goto L_801C9950; } // 801C9944
  c->r[3]=0u+0x00000001u; // 801C9948
  return; // 801C994C
L_801C9950:;
  c->r[3]=0u+0x80270000u; // 801C9950
  c->r[3]=c->r[3]+0x00000DF8u; // 801C9954
  cmpu(c,0,c->r[0],c->r[3]); // 801C9958
  if (!crb(c,2)) { goto L_801C9968; } // 801C995C
  c->r[3]=0u+0x00000001u; // 801C9960
  return; // 801C9964
L_801C9968:;
  c->r[3]=0u+0x80270000u; // 801C9968
  c->r[3]=c->r[3]+0x00000CD0u; // 801C996C
  c->r[0]=c->r[3]-c->r[0]; // 801C9970
  c->r[0]=cntlz(c->r[0]); // 801C9974
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C9978
  return; // 801C997C
}

// GetTypeName__Q34nw4r3g3d12ScnMdlSimpleCFv
void f_801C9980(Ctx* __restrict c) {
  trace_call(0x801C9980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9980
  c->r[0]=c->lr; // 801C9984
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9988
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C998C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C9990
  c->ctr=c->r[12]; // 801C9994
  if (true) { c->lr=0x801C999Cu; dispatch(c,c->ctr); } // 801C9998
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C999C
  c->r[3]=c->r[3]+0x00000004u; // 801C99A0
  c->lr=c->r[0]; // 801C99A4
  c->r[1]=c->r[1]+0x00000010u; // 801C99A8
  return; // 801C99AC
}

// GetTypeObj__Q34nw4r3g3d12ScnMdlSimpleCFv
void f_801C99B0(Ctx* __restrict c) {
  trace_call(0x801C99B0u);
  c->r[3]=0u+0x80270000u; // 801C99B0
  c->r[3]=c->r[3]+0x00000E38u; // 801C99B4
  return; // 801C99B8
}

// GetResTexObj__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb
void f_801C99BC(Ctx* __restrict c) {
  trace_call(0x801C99BCu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C99BC
  cmps(c,0,(int32_t)c->r[5],0); // 801C99C0
  if (crb(c,2)) { goto L_801C99FC; } // 801C99C4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801C99C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C99CC
  if (crb(c,2)) { goto L_801C99FC; } // 801C99D0
  cmps(c,0,(int32_t)c->r[4],0); // 801C99D4
  if (crb(c,2)) { goto L_801C99F4; } // 801C99D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C99DC
  c->r[5]=R32(c->r[5]+0x00000140u); // 801C99E0
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C99E4
  c->r[0]=R32(c->r[5]+c->r[4]); // 801C99E8
  c->r[0]=c->r[0]|0x00000008u; // 801C99EC
  W32(c->r[5]+c->r[4],c->r[0]); // 801C99F0
L_801C99F4:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 801C99F4
  return; // 801C99F8
L_801C99FC:;
  c->r[3]=0u+0x00000000u; // 801C99FC
  return; // 801C9A00
}

// GetResTexSrt__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb
void f_801C9A04(Ctx* __restrict c) {
  trace_call(0x801C9A04u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C9A04
  cmps(c,0,(int32_t)c->r[5],0); // 801C9A08
  if (crb(c,2)) { goto L_801C9A44; } // 801C9A0C
  c->r[0]=R32(c->r[3]+0x00000020u); // 801C9A10
  cmps(c,0,(int32_t)c->r[0],0); // 801C9A14
  if (crb(c,2)) { goto L_801C9A44; } // 801C9A18
  cmps(c,0,(int32_t)c->r[4],0); // 801C9A1C
  if (crb(c,2)) { goto L_801C9A3C; } // 801C9A20
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C9A24
  c->r[5]=R32(c->r[5]+0x00000140u); // 801C9A28
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9A2C
  c->r[0]=R32(c->r[5]+c->r[4]); // 801C9A30
  c->r[0]=c->r[0]|0x00000080u; // 801C9A34
  W32(c->r[5]+c->r[4],c->r[0]); // 801C9A38
L_801C9A3C:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C9A3C
  return; // 801C9A40
L_801C9A44:;
  c->r[3]=0u+0x00000000u; // 801C9A44
  return; // 801C9A48
}

// GetResMatChan__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb
void f_801C9A4C(Ctx* __restrict c) {
  trace_call(0x801C9A4Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C9A4C
  cmps(c,0,(int32_t)c->r[5],0); // 801C9A50
  if (crb(c,2)) { goto L_801C9A8C; } // 801C9A54
  c->r[0]=R32(c->r[3]+0x00000030u); // 801C9A58
  cmps(c,0,(int32_t)c->r[0],0); // 801C9A5C
  if (crb(c,2)) { goto L_801C9A8C; } // 801C9A60
  cmps(c,0,(int32_t)c->r[4],0); // 801C9A64
  if (crb(c,2)) { goto L_801C9A84; } // 801C9A68
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C9A6C
  c->r[5]=R32(c->r[5]+0x00000140u); // 801C9A70
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9A74
  c->r[0]=R32(c->r[5]+c->r[4]); // 801C9A78
  c->r[0]=c->r[0]|0x00000800u; // 801C9A7C
  W32(c->r[5]+c->r[4],c->r[0]); // 801C9A80
L_801C9A84:;
  c->r[3]=R32(c->r[3]+0x00000030u); // 801C9A84
  return; // 801C9A88
L_801C9A8C:;
  c->r[3]=0u+0x00000000u; // 801C9A8C
  return; // 801C9A90
}

// fn_801C9A94
void f_801C9A94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9A94
  c->r[0]=c->lr; // 801C9A98
  cmps(c,0,(int32_t)c->r[4],0); // 801C9A9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9AA0
  c->r[0]=0u+0x00000000u; // 801C9AA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9AA8
  c->r[31]=c->r[5]|c->r[5]; // 801C9AAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9AB0
  c->r[30]=c->r[4]|c->r[4]; // 801C9AB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9AB8
  c->r[29]=c->r[3]|c->r[3]; // 801C9ABC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C9AC0
  c->r[28]=0u+0x00000000u; // 801C9AC4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C9AC8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9ACC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C9AD0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C9AD4
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C9AD8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801C9ADC
  W32(c->r[3]+0x00000020u,c->r[0]); // 801C9AE0
  W32(c->r[3]+0x00000024u,c->r[0]); // 801C9AE4
  W32(c->r[3]+0x00000028u,c->r[0]); // 801C9AE8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801C9AEC
  W32(c->r[3]+0x00000030u,c->r[0]); // 801C9AF0
  if (crb(c,2)) { goto L_801C9B18; } // 801C9AF4
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801C9AF8
  c->r[4]=c->r[31]|c->r[31]; // 801C9AFC
  c->r[3]=c->r[1]+0x00000008u; // 801C9B00
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C9B04
  c->lr=0x801C9B0Cu; f_801A9FFC(c); // 801C9B08
  cmps(c,0,(int32_t)c->r[3],0); // 801C9B0C
  if (crb(c,2)) { goto L_801C9B18; } // 801C9B10
  c->r[28]=0u+0x00000001u; // 801C9B14
L_801C9B18:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C9B18
  if (crb(c,2)) { goto L_801C9CB8; } // 801C9B1C
  W32(c->r[29]+0x00000000u,c->r[30]); // 801C9B20
  W32(c->r[29]+0x00000004u,c->r[31]); // 801C9B24
  c->r[3]=R32(c->r[30]+0x0000014Cu); // 801C9B28
  cmps(c,0,(int32_t)c->r[3],0); // 801C9B2C
  if (crb(c,2)) { goto L_801C9B44; } // 801C9B30
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)260); // 801C9B34
  c->r[0]=c->r[3]+c->r[0]; // 801C9B38
  W32(c->r[29]+0x00000008u,c->r[0]); // 801C9B3C
  goto L_801C9B4C; // 801C9B40
L_801C9B44:;
  c->r[0]=0u+0x00000000u; // 801C9B44
  W32(c->r[29]+0x00000008u,c->r[0]); // 801C9B48
L_801C9B4C:;
  c->r[3]=R32(c->r[30]+0x00000150u); // 801C9B4C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9B50
  if (crb(c,2)) { goto L_801C9B68; } // 801C9B54
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)100); // 801C9B58
  c->r[0]=c->r[3]+c->r[0]; // 801C9B5C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801C9B60
  goto L_801C9B70; // 801C9B64
L_801C9B68:;
  c->r[0]=0u+0x00000000u; // 801C9B68
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801C9B6C
L_801C9B70:;
  c->r[3]=R32(c->r[30]+0x00000154u); // 801C9B70
  cmps(c,0,(int32_t)c->r[3],0); // 801C9B74
  if (crb(c,2)) { goto L_801C9B8C; } // 801C9B78
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)584); // 801C9B7C
  c->r[0]=c->r[3]+c->r[0]; // 801C9B80
  W32(c->r[29]+0x00000010u,c->r[0]); // 801C9B84
  goto L_801C9B94; // 801C9B88
L_801C9B8C:;
  c->r[0]=0u+0x00000000u; // 801C9B8C
  W32(c->r[29]+0x00000010u,c->r[0]); // 801C9B90
L_801C9B94:;
  c->r[3]=R32(c->r[30]+0x00000158u); // 801C9B94
  cmps(c,0,(int32_t)c->r[3],0); // 801C9B98
  if (crb(c,2)) { goto L_801C9BB0; } // 801C9B9C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)40); // 801C9BA0
  c->r[0]=c->r[3]+c->r[0]; // 801C9BA4
  W32(c->r[29]+0x00000014u,c->r[0]); // 801C9BA8
  goto L_801C9BB8; // 801C9BAC
L_801C9BB0:;
  c->r[0]=0u+0x00000000u; // 801C9BB0
  W32(c->r[29]+0x00000014u,c->r[0]); // 801C9BB4
L_801C9BB8:;
  c->r[3]=R32(c->r[30]+0x0000015Cu); // 801C9BB8
  cmps(c,0,(int32_t)c->r[3],0); // 801C9BBC
  if (crb(c,2)) { goto L_801C9BD4; } // 801C9BC0
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801C9BC4
  c->r[0]=c->r[3]+c->r[0]; // 801C9BC8
  W32(c->r[29]+0x00000018u,c->r[0]); // 801C9BCC
  goto L_801C9BDC; // 801C9BD0
L_801C9BD4:;
  c->r[0]=0u+0x00000000u; // 801C9BD4
  W32(c->r[29]+0x00000018u,c->r[0]); // 801C9BD8
L_801C9BDC:;
  c->r[3]=R32(c->r[30]+0x00000160u); // 801C9BDC
  cmps(c,0,(int32_t)c->r[3],0); // 801C9BE0
  if (crb(c,2)) { goto L_801C9BF8; } // 801C9BE4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801C9BE8
  c->r[0]=c->r[3]+c->r[0]; // 801C9BEC
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C9BF0
  goto L_801C9C00; // 801C9BF4
L_801C9BF8:;
  c->r[0]=0u+0x00000000u; // 801C9BF8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C9BFC
L_801C9C00:;
  c->r[3]=R32(c->r[30]+0x00000164u); // 801C9C00
  cmps(c,0,(int32_t)c->r[3],0); // 801C9C04
  if (crb(c,2)) { goto L_801C9C1C; } // 801C9C08
  c->r[0]=rotl(c->r[31],5)&0xFFFFFFE0u; // 801C9C0C
  c->r[0]=c->r[3]+c->r[0]; // 801C9C10
  W32(c->r[29]+0x00000020u,c->r[0]); // 801C9C14
  goto L_801C9C24; // 801C9C18
L_801C9C1C:;
  c->r[0]=0u+0x00000000u; // 801C9C1C
  W32(c->r[29]+0x00000020u,c->r[0]); // 801C9C20
L_801C9C24:;
  c->r[3]=R32(c->r[30]+0x00000168u); // 801C9C24
  cmps(c,0,(int32_t)c->r[3],0); // 801C9C28
  if (crb(c,2)) { goto L_801C9C40; } // 801C9C2C
  c->r[0]=rotl(c->r[31],7)&0xFFFFFF80u; // 801C9C30
  c->r[0]=c->r[3]+c->r[0]; // 801C9C34
  W32(c->r[29]+0x00000024u,c->r[0]); // 801C9C38
  goto L_801C9C48; // 801C9C3C
L_801C9C40:;
  c->r[0]=0u+0x00000000u; // 801C9C40
  W32(c->r[29]+0x00000024u,c->r[0]); // 801C9C44
L_801C9C48:;
  c->r[3]=R32(c->r[30]+0x0000016Cu); // 801C9C48
  cmps(c,0,(int32_t)c->r[3],0); // 801C9C4C
  if (crb(c,2)) { goto L_801C9C64; } // 801C9C50
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 801C9C54
  c->r[0]=c->r[3]+c->r[0]; // 801C9C58
  W32(c->r[29]+0x00000028u,c->r[0]); // 801C9C5C
  goto L_801C9C6C; // 801C9C60
L_801C9C64:;
  c->r[0]=0u+0x00000000u; // 801C9C64
  W32(c->r[29]+0x00000028u,c->r[0]); // 801C9C68
L_801C9C6C:;
  c->r[3]=R32(c->r[30]+0x00000170u); // 801C9C6C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9C70
  if (crb(c,2)) { goto L_801C9C88; } // 801C9C74
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)160); // 801C9C78
  c->r[0]=c->r[3]+c->r[0]; // 801C9C7C
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 801C9C80
  goto L_801C9C90; // 801C9C84
L_801C9C88:;
  c->r[0]=0u+0x00000000u; // 801C9C88
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 801C9C8C
L_801C9C90:;
  c->r[3]=R32(c->r[30]+0x00000174u); // 801C9C90
  cmps(c,0,(int32_t)c->r[3],0); // 801C9C94
  if (crb(c,2)) { goto L_801C9CAC; } // 801C9C98
  c->r[0]=rotl(c->r[31],9)&0xFFFFFE00u; // 801C9C9C
  c->r[0]=c->r[3]+c->r[0]; // 801C9CA0
  W32(c->r[29]+0x00000030u,c->r[0]); // 801C9CA4
  goto L_801C9CF0; // 801C9CA8
L_801C9CAC:;
  c->r[0]=0u+0x00000000u; // 801C9CAC
  W32(c->r[29]+0x00000030u,c->r[0]); // 801C9CB0
  goto L_801C9CF0; // 801C9CB4
L_801C9CB8:;
  c->r[0]=0u+0x00000000u; // 801C9CB8
  W32(c->r[29]+0x00000004u,c->r[31]); // 801C9CBC
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C9CC0
  W32(c->r[29]+0x00000008u,c->r[0]); // 801C9CC4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801C9CC8
  W32(c->r[29]+0x00000010u,c->r[0]); // 801C9CCC
  W32(c->r[29]+0x00000014u,c->r[0]); // 801C9CD0
  W32(c->r[29]+0x00000018u,c->r[0]); // 801C9CD4
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C9CD8
  W32(c->r[29]+0x00000020u,c->r[0]); // 801C9CDC
  W32(c->r[29]+0x00000024u,c->r[0]); // 801C9CE0
  W32(c->r[29]+0x00000028u,c->r[0]); // 801C9CE4
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 801C9CE8
  W32(c->r[29]+0x00000030u,c->r[0]); // 801C9CEC
L_801C9CF0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9CF0
  c->r[3]=c->r[29]|c->r[29]; // 801C9CF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9CF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9CFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C9D00
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9D04
  c->lr=c->r[0]; // 801C9D08
  c->r[1]=c->r[1]+0x00000020u; // 801C9D0C
  return; // 801C9D10
}

// fn_801C9D14
void f_801C9D14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9D14
  c->r[0]=c->lr; // 801C9D18
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C9D1C
  c->r[5]=c->r[3]|c->r[3]; // 801C9D20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9D24
  cmps(c,0,(int32_t)c->r[4],0); // 801C9D28
  if (crb(c,2)) { goto L_801C9D80; } // 801C9D2C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C9D30
  cmps(c,0,(int32_t)c->r[3],0); // 801C9D34
  if (crb(c,2)) { goto L_801C9D50; } // 801C9D38
  c->r[3]=R8(c->r[3]+0x00000000u); // 801C9D3C
  c->r[0]=0u-c->r[3]; // 801C9D40
  c->r[0]=c->r[0]|c->r[3]; // 801C9D44
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C9D48
  goto L_801C9D84; // 801C9D4C
L_801C9D50:;
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801C9D50
  c->r[3]=c->r[1]+0x00000008u; // 801C9D54
  c->r[4]=R32(c->r[5]+0x00000004u); // 801C9D58
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C9D5C
  c->lr=0x801C9D64u; f_801A9AA4(c); // 801C9D60
  cmps(c,0,(int32_t)c->r[3],0); // 801C9D64
  if (crb(c,2)) { goto L_801C9D78; } // 801C9D68
  c->r[0]=R32(c->r[3]+0x00000014u); // 801C9D6C
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 801C9D70
  goto L_801C9D84; // 801C9D74
L_801C9D78:;
  c->r[3]=0u+0x00000000u; // 801C9D78
  goto L_801C9D84; // 801C9D7C
L_801C9D80:;
  c->r[3]=0u+0x00000000u; // 801C9D80
L_801C9D84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9D84
  c->lr=c->r[0]; // 801C9D88
  c->r[1]=c->r[1]+0x00000010u; // 801C9D8C
  return; // 801C9D90
}

// fn_801C9D94
void f_801C9D94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9D94
  c->r[0]=c->lr; // 801C9D98
  cmps(c,0,(int32_t)c->r[4],0); // 801C9D9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9DA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9DA4
  c->r[31]=0u+0x00000000u; // 801C9DA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9DAC
  c->r[30]=c->r[5]|c->r[5]; // 801C9DB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9DB4
  c->r[29]=c->r[4]|c->r[4]; // 801C9DB8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C9DBC
  c->r[28]=c->r[3]|c->r[3]; // 801C9DC0
  if (crb(c,2)) { goto L_801C9DE8; } // 801C9DC4
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801C9DC8
  c->r[4]=c->r[30]|c->r[30]; // 801C9DCC
  c->r[3]=c->r[1]+0x00000008u; // 801C9DD0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C9DD4
  c->lr=0x801C9DDCu; f_801A9AA4(c); // 801C9DD8
  cmps(c,0,(int32_t)c->r[3],0); // 801C9DDC
  if (crb(c,2)) { goto L_801C9DE8; } // 801C9DE0
  c->r[31]=0u+0x00000001u; // 801C9DE4
L_801C9DE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C9DE8
  if (crb(c,2)) { goto L_801C9E1C; } // 801C9DEC
  W32(c->r[28]+0x00000000u,c->r[29]); // 801C9DF0
  W32(c->r[28]+0x00000004u,c->r[30]); // 801C9DF4
  c->r[0]=R32(c->r[29]+0x00000148u); // 801C9DF8
  cmps(c,0,(int32_t)c->r[0],0); // 801C9DFC
  if (crb(c,2)) { goto L_801C9E10; } // 801C9E00
  c->r[0]=c->r[0]+c->r[30]; // 801C9E04
  W32(c->r[28]+0x00000008u,c->r[0]); // 801C9E08
  goto L_801C9E2C; // 801C9E0C
L_801C9E10:;
  c->r[0]=0u+0x00000000u; // 801C9E10
  W32(c->r[28]+0x00000008u,c->r[0]); // 801C9E14
  goto L_801C9E2C; // 801C9E18
L_801C9E1C:;
  c->r[0]=0u+0x00000000u; // 801C9E1C
  W32(c->r[28]+0x00000004u,c->r[30]); // 801C9E20
  W32(c->r[28]+0x00000000u,c->r[0]); // 801C9E24
  W32(c->r[28]+0x00000008u,c->r[0]); // 801C9E28
L_801C9E2C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9E2C
  c->r[3]=c->r[28]|c->r[28]; // 801C9E30
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9E34
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9E38
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C9E3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9E40
  c->lr=c->r[0]; // 801C9E44
  c->r[1]=c->r[1]+0x00000020u; // 801C9E48
  return; // 801C9E4C
}

// __ct__Q44nw4r3g3d6ScnMdl15CopiedVisAccessFPQ34nw4r3g3d6ScnMdlUl
void f_801C9E50(Ctx* __restrict c) {
  trace_call(0x801C9E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9E50
  c->r[0]=c->lr; // 801C9E54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9E58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9E5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9E60
  c->r[30]=c->r[3]|c->r[3]; // 801C9E64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9E68
  c->r[29]=c->r[4]|c->r[4]; // 801C9E6C
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C9E70
  cmps(c,0,(int32_t)c->r[5],0); // 801C9E74
  if (crb(c,2)) { goto L_801C9EA8; } // 801C9E78
  c->r[0]=R32(c->r[5]+0x000000E8u); // 801C9E7C
  c->r[3]=c->r[1]+0x00000008u; // 801C9E80
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C9E84
  c->lr=0x801C9E8Cu; f_801A9E7C(c); // 801C9E88
  cmpu(c,0,c->r[29],c->r[3]); // 801C9E8C
  if (!crb(c,0)) { goto L_801C9EA8; } // 801C9E90
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C9E94
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801C9E98
  c->r[3]=R32(c->r[3]+0x00000180u); // 801C9E9C
  c->r[31]=R32(c->r[3]+c->r[0]); // 801C9EA0
  goto L_801C9EAC; // 801C9EA4
L_801C9EA8:;
  c->r[31]=0u+0x00000000u; // 801C9EA8
L_801C9EAC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C9EAC
  c->r[30]=0u+0x00000000u; // 801C9EB0
  cmps(c,0,(int32_t)c->r[3],0); // 801C9EB4
  if (crb(c,2)) { goto L_801C9EDC; } // 801C9EB8
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801C9EBC
  c->r[4]=c->r[29]|c->r[29]; // 801C9EC0
  c->r[3]=c->r[1]+0x0000000Cu; // 801C9EC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C9EC8
  c->lr=0x801C9ED0u; f_801A9E28(c); // 801C9ECC
  cmpu(c,0,c->r[31],c->r[3]); // 801C9ED0
  if (!crb(c,2)) { goto L_801C9EDC; } // 801C9ED4
  c->r[30]=0u+0x00000001u; // 801C9ED8
L_801C9EDC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C9EDC
  if (crb(c,2)) { goto L_801C9EEC; } // 801C9EE0
  c->r[3]=0u+0x00000000u; // 801C9EE4
  goto L_801C9EF0; // 801C9EE8
L_801C9EEC:;
  c->r[3]=c->r[31]|c->r[31]; // 801C9EEC
L_801C9EF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9EF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9EF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9EF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9EFC
  c->lr=c->r[0]; // 801C9F00
  c->r[1]=c->r[1]+0x00000020u; // 801C9F04
  return; // 801C9F08
}

// Construct__Q34nw4r3g3d6ScnMdlFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdlUli
void f_801C9F0C(Ctx* __restrict c) {
  trace_call(0x801C9F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9F0C
  c->r[0]=c->lr; // 801C9F10
  W32(c->r[1]+0x00000154u,c->r[0]); // 801C9F14
  c->r[11]=c->r[1]+0x00000150u; // 801C9F18
  c->lr=0x801C9F20u; f_80109F04(c); // 801C9F1C
  c->r[8]=R32(c->r[5]+0x00000000u); // 801C9F20
  c->r[28]=c->r[3]|c->r[3]; // 801C9F24
  W32(c->r[1]+0x00000010u,c->r[4]); // 801C9F28
  c->r[29]=c->r[5]|c->r[5]; // 801C9F2C
  cmps(c,0,(int32_t)c->r[8],0); // 801C9F30
  c->r[30]=c->r[6]|c->r[6]; // 801C9F34
  c->r[31]=c->r[7]|c->r[7]; // 801C9F38
  if (!crb(c,2)) { goto L_801C9F48; } // 801C9F3C
  c->r[3]=0u+0x00000000u; // 801C9F40
  goto L_801CAA7C; // 801C9F44
L_801C9F48:;
  cmps(c,0,(int32_t)c->r[7],0); // 801C9F48
  if (!crb(c,2)) { goto L_801C9F58; } // 801C9F4C
  c->r[31]=0u+0x00000001u; // 801C9F50
  goto L_801C9F64; // 801C9F54
L_801C9F58:;
  cmps(c,0,(int32_t)c->r[7],16); // 801C9F58
  if (!crb(c,1)) { goto L_801C9F64; } // 801C9F5C
  c->r[31]=0u+0x00000010u; // 801C9F60
L_801C9F64:;
  c->r[0]=R32(c->r[8]+0x00000070u); // 801C9F64
  c->r[4]=c->r[8]+0x0000004Cu; // 801C9F68
  c->r[27]=R32(c->r[8]+0x00000068u); // 801C9F6C
  c->r[3]=c->r[29]|c->r[29]; // 801C9F70
  c->r[15]=R32(c->r[4]+c->r[0]); // 801C9F74
  c->r[16]=0u+0x00000000u; // 801C9F78
  c->lr=0x801C9F80u; f_801AA050(c); // 801C9F7C
  c->r[14]=c->r[3]|c->r[3]; // 801C9F80
  c->r[3]=c->r[29]|c->r[29]; // 801C9F84
  c->lr=0x801C9F8Cu; f_801A9AF8(c); // 801C9F88
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 801C9F8C
  c->r[6]=R32(c->r[29]+0x00000000u); // 801C9F90
  c->r[26]=rotl(c->r[15],2)&0xFFFFFFFCu; // 801C9F94
  c->r[0]=R8(c->r[6]+0x0000006Cu); // 801C9F98
  c->r[5]=c->r[5]+0x0000001Fu; // 801C9F9C
  c->r[4]=rotl(c->r[5],0)&0xFFFFFFE0u; // 801C9FA0
  cmps(c,0,(int32_t)c->r[0],0); // 801C9FA4
  c->r[23]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[4]); // 801C9FA8
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 801C9FAC
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)36); // 801C9FB0
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801C9FB4
  if (crb(c,2)) { goto L_801C9FD0; } // 801C9FB8
  c->r[0]=c->r[4]+0x0000001Fu; // 801C9FBC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C9FC0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801C9FC4
  W32(c->r[1]+0x000000F8u,c->r[0]); // 801C9FC8
  goto L_801C9FD8; // 801C9FCC
L_801C9FD0:;
  c->r[0]=0u+0x00000000u; // 801C9FD0
  W32(c->r[1]+0x000000F8u,c->r[0]); // 801C9FD4
L_801C9FD8:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801C9FD8
  c->r[4]=R8(c->r[6]+0x0000006Du); // 801C9FDC
  c->r[0]=rotl(c->r[14],2)&0xFFFFFFFCu; // 801C9FE0
  W32(c->r[1]+0x00000088u,c->r[0]); // 801C9FE4
  c->r[0]=0u-c->r[4]; // 801C9FE8
  c->r[0]=c->r[0]|c->r[4]; // 801C9FEC
  c->r[0]=sraw(c,c->r[0],31); // 801C9FF0
  c->r[0]=c->r[23]&c->r[0]; // 801C9FF4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801C9FF8
  if (crb(c,2)) { goto L_801CA00C; } // 801C9FFC
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)260); // 801CA000
  W32(c->r[1]+0x000000F0u,c->r[0]); // 801CA004
  goto L_801CA014; // 801CA008
L_801CA00C:;
  c->r[0]=0u+0x00000000u; // 801CA00C
  W32(c->r[1]+0x000000F0u,c->r[0]); // 801CA010
L_801CA014:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 801CA014
  if (crb(c,2)) { goto L_801CA028; } // 801CA018
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)100); // 801CA01C
  W32(c->r[1]+0x000000ECu,c->r[0]); // 801CA020
  goto L_801CA030; // 801CA024
L_801CA028:;
  c->r[0]=0u+0x00000000u; // 801CA028
  W32(c->r[1]+0x000000ECu,c->r[0]); // 801CA02C
L_801CA030:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 801CA030
  if (crb(c,2)) { goto L_801CA044; } // 801CA034
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)584); // 801CA038
  W32(c->r[1]+0x000000E8u,c->r[0]); // 801CA03C
  goto L_801CA04C; // 801CA040
L_801CA044:;
  c->r[0]=0u+0x00000000u; // 801CA044
  W32(c->r[1]+0x000000E8u,c->r[0]); // 801CA048
L_801CA04C:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 801CA04C
  if (crb(c,2)) { goto L_801CA060; } // 801CA050
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)40); // 801CA054
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801CA058
  goto L_801CA068; // 801CA05C
L_801CA060:;
  c->r[0]=0u+0x00000000u; // 801CA060
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801CA064
L_801CA068:;
  c->r[0]=rotl(c->r[30],0)&0x00000020u; cr0(c,c->r[0]); // 801CA068
  c->r[4]=rotl(c->r[30],28)&0x00000001u; // 801CA06C
  c->r[0]=rotl(c->r[14],3)&0xFFFFFFF8u; // 801CA070
  c->r[4]=0u-c->r[4]; // 801CA074
  c->r[0]=c->r[0]&c->r[4]; // 801CA078
  W32(c->r[1]+0x000000E0u,c->r[0]); // 801CA07C
  if (crb(c,2)) { goto L_801CA090; } // 801CA080
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)12); // 801CA084
  W32(c->r[1]+0x000000DCu,c->r[0]); // 801CA088
  goto L_801CA098; // 801CA08C
L_801CA090:;
  c->r[0]=0u+0x00000000u; // 801CA090
  W32(c->r[1]+0x000000DCu,c->r[0]); // 801CA094
L_801CA098:;
  c->r[0]=rotl(c->r[30],0)&0x00000400u; cr0(c,c->r[0]); // 801CA098
  c->r[6]=rotl(c->r[30],26)&0x00000001u; // 801CA09C
  c->r[5]=rotl(c->r[30],25)&0x00000001u; // 801CA0A0
  c->r[4]=rotl(c->r[30],24)&0x00000001u; // 801CA0A4
  c->r[10]=0u-c->r[6]; // 801CA0A8
  c->r[0]=rotl(c->r[30],23)&0x00000001u; // 801CA0AC
  c->r[9]=0u-c->r[5]; // 801CA0B0
  c->r[8]=rotl(c->r[14],5)&0xFFFFFFE0u; // 801CA0B4
  c->r[5]=0u-c->r[0]; // 801CA0B8
  c->r[0]=c->r[3]&c->r[10]; // 801CA0BC
  c->r[7]=0u-c->r[4]; // 801CA0C0
  W32(c->r[1]+0x000000D8u,c->r[0]); // 801CA0C4
  c->r[0]=c->r[8]&c->r[9]; // 801CA0C8
  c->r[6]=rotl(c->r[14],7)&0xFFFFFF80u; // 801CA0CC
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801CA0D0
  c->r[0]=c->r[6]&c->r[7]; // 801CA0D4
  c->r[4]=rotl(c->r[14],6)&0xFFFFFFC0u; // 801CA0D8
  W32(c->r[1]+0x000000D0u,c->r[0]); // 801CA0DC
  c->r[0]=c->r[4]&c->r[5]; // 801CA0E0
  W32(c->r[1]+0x000000CCu,c->r[0]); // 801CA0E4
  if (crb(c,2)) { goto L_801CA0F8; } // 801CA0E8
  c->r[0]=(uint32_t)((int32_t)c->r[14]*(int32_t)160); // 801CA0EC
  W32(c->r[1]+0x000000C8u,c->r[0]); // 801CA0F0
  goto L_801CA100; // 801CA0F4
L_801CA0F8:;
  c->r[0]=0u+0x00000000u; // 801CA0F8
  W32(c->r[1]+0x000000C8u,c->r[0]); // 801CA0FC
L_801CA100:;
  c->r[0]=rotl(c->r[30],0)&0x00001000u; cr0(c,c->r[0]); // 801CA100
  c->r[3]=rotl(c->r[14],9)&0xFFFFFE00u; // 801CA104
  c->r[0]=rotl(c->r[30],21)&0x00000001u; // 801CA108
  c->r[22]=0u+0x00000000u; // 801CA10C
  c->r[4]=0u-c->r[0]; // 801CA110
  c->r[0]=0u+0x00000000u; // 801CA114
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CA118
  c->r[0]=c->r[3]&c->r[4]; // 801CA11C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801CA120
  if (crb(c,2)) { goto L_801CA1B8; } // 801CA124
  c->r[3]=c->r[29]|c->r[29]; // 801CA128
  c->lr=0x801CA130u; f_801A9C24(c); // 801CA12C
  c->r[17]=c->r[3]|c->r[3]; // 801CA130
  c->r[3]=c->r[29]|c->r[29]; // 801CA134
  c->lr=0x801CA13Cu; f_801AA12C(c); // 801CA138
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 801CA13C
  c->r[15]=c->r[3]|c->r[3]; // 801CA140
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CA144
  c->r[18]=0u+0x00000000u; // 801CA148
  goto L_801CA1B0; // 801CA14C
L_801CA150:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA150
  c->r[4]=c->r[18]|c->r[18]; // 801CA154
  c->lr=0x801CA15Cu; f_801A9BD0(c); // 801CA158
  c->r[14]=c->r[3]|c->r[3]; // 801CA15C
  c->r[19]=0u+0x00000000u; // 801CA160
  goto L_801CA18C; // 801CA164
L_801CA168:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA168
  c->r[4]=c->r[19]|c->r[19]; // 801CA16C
  c->lr=0x801CA174u; f_801AA0D8(c); // 801CA170
  W32(c->r[1]+0x00000038u,c->r[3]); // 801CA174
  c->r[3]=c->r[1]+0x00000038u; // 801CA178
  c->lr=0x801CA180u; f_801AA804(c); // 801CA17C
  cmpu(c,0,c->r[14],c->r[3]); // 801CA180
  if (crb(c,2)) { goto L_801CA194; } // 801CA184
  c->r[19]=c->r[19]+0x00000001u; // 801CA188
L_801CA18C:;
  cmpu(c,0,c->r[19],c->r[15]); // 801CA18C
  if (crb(c,0)) { IRQCHK(c); goto L_801CA168; } // 801CA190
L_801CA194:;
  cmpu(c,0,c->r[19],c->r[15]); // 801CA194
  if (crb(c,2)) { goto L_801CA1AC; } // 801CA198
  c->r[3]=R32(c->r[14]+0x00000000u); // 801CA19C
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA1A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA1A4
  c->r[22]=c->r[22]+c->r[0]; // 801CA1A8
L_801CA1AC:;
  c->r[18]=c->r[18]+0x00000001u; // 801CA1AC
L_801CA1B0:;
  cmpu(c,0,c->r[18],c->r[17]); // 801CA1B0
  if (crb(c,0)) { IRQCHK(c); goto L_801CA150; } // 801CA1B4
L_801CA1B8:;
  c->r[0]=rotl(c->r[30],0)&0x00002000u; cr0(c,c->r[0]); // 801CA1B8
  c->r[21]=0u+0x00000000u; // 801CA1BC
  c->r[0]=0u+0x00000000u; // 801CA1C0
  W32(c->r[1]+0x00000080u,c->r[0]); // 801CA1C4
  if (crb(c,2)) { goto L_801CA25C; } // 801CA1C8
  c->r[3]=c->r[29]|c->r[29]; // 801CA1CC
  c->lr=0x801CA1D4u; f_801A9D50(c); // 801CA1D0
  c->r[17]=c->r[3]|c->r[3]; // 801CA1D4
  c->r[3]=c->r[29]|c->r[29]; // 801CA1D8
  c->lr=0x801CA1E0u; f_801AA12C(c); // 801CA1DC
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 801CA1E0
  c->r[15]=c->r[3]|c->r[3]; // 801CA1E4
  W32(c->r[1]+0x00000080u,c->r[0]); // 801CA1E8
  c->r[18]=0u+0x00000000u; // 801CA1EC
  goto L_801CA254; // 801CA1F0
L_801CA1F4:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA1F4
  c->r[4]=c->r[18]|c->r[18]; // 801CA1F8
  c->lr=0x801CA200u; f_801A9CFC(c); // 801CA1FC
  c->r[14]=c->r[3]|c->r[3]; // 801CA200
  c->r[19]=0u+0x00000000u; // 801CA204
  goto L_801CA230; // 801CA208
L_801CA20C:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA20C
  c->r[4]=c->r[19]|c->r[19]; // 801CA210
  c->lr=0x801CA218u; f_801AA0D8(c); // 801CA214
  W32(c->r[1]+0x00000034u,c->r[3]); // 801CA218
  c->r[3]=c->r[1]+0x00000034u; // 801CA21C
  c->lr=0x801CA224u; f_801AA84C(c); // 801CA220
  cmpu(c,0,c->r[14],c->r[3]); // 801CA224
  if (crb(c,2)) { goto L_801CA238; } // 801CA228
  c->r[19]=c->r[19]+0x00000001u; // 801CA22C
L_801CA230:;
  cmpu(c,0,c->r[19],c->r[15]); // 801CA230
  if (crb(c,0)) { IRQCHK(c); goto L_801CA20C; } // 801CA234
L_801CA238:;
  cmpu(c,0,c->r[19],c->r[15]); // 801CA238
  if (crb(c,2)) { goto L_801CA250; } // 801CA23C
  c->r[3]=R32(c->r[14]+0x00000000u); // 801CA240
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA244
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA248
  c->r[21]=c->r[21]+c->r[0]; // 801CA24C
L_801CA250:;
  c->r[18]=c->r[18]+0x00000001u; // 801CA250
L_801CA254:;
  cmpu(c,0,c->r[18],c->r[17]); // 801CA254
  if (crb(c,0)) { IRQCHK(c); goto L_801CA1F4; } // 801CA258
L_801CA25C:;
  c->r[0]=rotl(c->r[30],0)&0x00004000u; cr0(c,c->r[0]); // 801CA25C
  c->r[20]=0u+0x00000000u; // 801CA260
  c->r[19]=0u+0x00000000u; // 801CA264
  if (crb(c,2)) { goto L_801CA320; } // 801CA268
  c->r[3]=c->r[29]|c->r[29]; // 801CA26C
  c->lr=0x801CA274u; f_801A9E7C(c); // 801CA270
  c->r[17]=c->r[3]|c->r[3]; // 801CA274
  c->r[3]=c->r[29]|c->r[29]; // 801CA278
  c->lr=0x801CA280u; f_801AA12C(c); // 801CA27C
  c->r[15]=c->r[3]|c->r[3]; // 801CA280
  c->r[20]=rotl(c->r[17],2)&0xFFFFFFFCu; // 801CA284
  c->r[24]=0u+0x00000000u; // 801CA288
  goto L_801CA318; // 801CA28C
L_801CA290:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA290
  c->r[4]=c->r[24]|c->r[24]; // 801CA294
  c->lr=0x801CA29Cu; f_801A9E28(c); // 801CA298
  c->r[14]=c->r[3]|c->r[3]; // 801CA29C
  c->r[25]=0u+0x00000000u; // 801CA2A0
  goto L_801CA2F4; // 801CA2A4
L_801CA2A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA2A8
  c->r[4]=c->r[25]|c->r[25]; // 801CA2AC
  c->lr=0x801CA2B4u; f_801AA0D8(c); // 801CA2B0
  W32(c->r[1]+0x00000030u,c->r[3]); // 801CA2B4
  c->r[3]=c->r[1]+0x00000030u; // 801CA2B8
  c->r[18]=0u+0x00000001u; // 801CA2BC
  c->r[4]=0u+0x00000000u; // 801CA2C0
  c->lr=0x801CA2C8u; f_801AA8A8(c); // 801CA2C4
  cmpu(c,0,c->r[14],c->r[3]); // 801CA2C8
  if (crb(c,2)) { goto L_801CA2E8; } // 801CA2CC
  c->r[3]=c->r[1]+0x00000030u; // 801CA2D0
  c->r[4]=0u+0x00000001u; // 801CA2D4
  c->lr=0x801CA2DCu; f_801AA8A8(c); // 801CA2D8
  cmpu(c,0,c->r[14],c->r[3]); // 801CA2DC
  if (crb(c,2)) { goto L_801CA2E8; } // 801CA2E0
  c->r[18]=0u+0x00000000u; // 801CA2E4
L_801CA2E8:;
  cmps(c,0,(int32_t)c->r[18],0); // 801CA2E8
  if (!crb(c,2)) { goto L_801CA2FC; } // 801CA2EC
  c->r[25]=c->r[25]+0x00000001u; // 801CA2F0
L_801CA2F4:;
  cmpu(c,0,c->r[25],c->r[15]); // 801CA2F4
  if (crb(c,0)) { IRQCHK(c); goto L_801CA2A8; } // 801CA2F8
L_801CA2FC:;
  cmpu(c,0,c->r[25],c->r[15]); // 801CA2FC
  if (crb(c,2)) { goto L_801CA314; } // 801CA300
  c->r[3]=R32(c->r[14]+0x00000000u); // 801CA304
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA308
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA30C
  c->r[19]=c->r[19]+c->r[0]; // 801CA310
L_801CA314:;
  c->r[24]=c->r[24]+0x00000001u; // 801CA314
L_801CA318:;
  cmpu(c,0,c->r[24],c->r[17]); // 801CA318
  if (crb(c,0)) { IRQCHK(c); goto L_801CA290; } // 801CA31C
L_801CA320:;
  c->r[3]=R32(c->r[1]+0x0000008Cu); // 801CA320
  c->r[0]=R32(c->r[1]+0x00000010u); // 801CA324
  c->r[3]=c->r[3]+0x000001BFu; // 801CA328
  cmps(c,0,(int32_t)c->r[0],0); // 801CA32C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFE0u; // 801CA330
  c->r[3]=c->r[0]+c->r[26]; // 801CA334
  W32(c->r[1]+0x000000C0u,c->r[0]); // 801CA338
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA33C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA340
  c->r[3]=c->r[0]+c->r[23]; // 801CA344
  W32(c->r[1]+0x000000BCu,c->r[0]); // 801CA348
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA34C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA350
  W32(c->r[1]+0x000000B8u,c->r[0]); // 801CA354
  c->r[3]=c->r[0]|c->r[0]; // 801CA358
  c->r[0]=R32(c->r[1]+0x000000F8u); // 801CA35C
  c->r[3]=c->r[3]+c->r[0]; // 801CA360
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA364
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA368
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801CA36C
  c->r[3]=c->r[0]|c->r[0]; // 801CA370
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801CA374
  c->r[3]=c->r[3]+c->r[0]; // 801CA378
  c->r[0]=c->r[3]+0x00000003u; // 801CA37C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CA380
  W32(c->r[1]+0x000000B0u,c->r[0]); // 801CA384
  c->r[3]=c->r[0]|c->r[0]; // 801CA388
  c->r[0]=R32(c->r[1]+0x00000088u); // 801CA38C
  c->r[3]=c->r[3]+c->r[0]; // 801CA390
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA394
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA398
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801CA39C
  c->r[3]=c->r[0]|c->r[0]; // 801CA3A0
  c->r[0]=R32(c->r[1]+0x000000F0u); // 801CA3A4
  c->r[3]=c->r[3]+c->r[0]; // 801CA3A8
  c->r[0]=c->r[3]+0x00000003u; // 801CA3AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CA3B0
  W32(c->r[1]+0x000000A8u,c->r[0]); // 801CA3B4
  c->r[3]=c->r[0]|c->r[0]; // 801CA3B8
  c->r[0]=R32(c->r[1]+0x000000ECu); // 801CA3BC
  c->r[3]=c->r[3]+c->r[0]; // 801CA3C0
  c->r[0]=c->r[3]+0x00000003u; // 801CA3C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CA3C8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801CA3CC
  c->r[3]=c->r[0]|c->r[0]; // 801CA3D0
  c->r[0]=R32(c->r[1]+0x000000E8u); // 801CA3D4
  c->r[3]=c->r[3]+c->r[0]; // 801CA3D8
  c->r[0]=c->r[3]+0x00000003u; // 801CA3DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CA3E0
  W32(c->r[1]+0x000000A0u,c->r[0]); // 801CA3E4
  c->r[3]=c->r[0]|c->r[0]; // 801CA3E8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801CA3EC
  c->r[3]=c->r[3]+c->r[0]; // 801CA3F0
  c->r[0]=c->r[3]+0x00000003u; // 801CA3F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CA3F8
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 801CA3FC
  c->r[3]=c->r[0]|c->r[0]; // 801CA400
  c->r[0]=R32(c->r[1]+0x000000E0u); // 801CA404
  c->r[3]=c->r[3]+c->r[0]; // 801CA408
  c->r[0]=c->r[3]+0x00000003u; // 801CA40C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CA410
  W32(c->r[1]+0x00000098u,c->r[0]); // 801CA414
  c->r[3]=c->r[0]|c->r[0]; // 801CA418
  c->r[0]=R32(c->r[1]+0x000000DCu); // 801CA41C
  c->r[3]=c->r[3]+c->r[0]; // 801CA420
  c->r[0]=c->r[3]+0x00000003u; // 801CA424
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CA428
  W32(c->r[1]+0x00000094u,c->r[0]); // 801CA42C
  c->r[3]=c->r[0]|c->r[0]; // 801CA430
  c->r[0]=R32(c->r[1]+0x000000D8u); // 801CA434
  c->r[3]=c->r[3]+c->r[0]; // 801CA438
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA43C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA440
  W32(c->r[1]+0x00000090u,c->r[0]); // 801CA444
  c->r[3]=c->r[0]|c->r[0]; // 801CA448
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801CA44C
  c->r[3]=c->r[3]+c->r[0]; // 801CA450
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA454
  c->r[14]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA458
  c->r[0]=R32(c->r[1]+0x000000D0u); // 801CA45C
  c->r[3]=c->r[14]+c->r[0]; // 801CA460
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA464
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA468
  c->r[0]=R32(c->r[1]+0x000000CCu); // 801CA46C
  c->r[3]=c->r[26]+c->r[0]; // 801CA470
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA474
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA478
  c->r[0]=R32(c->r[1]+0x000000C8u); // 801CA47C
  c->r[3]=c->r[25]+c->r[0]; // 801CA480
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA484
  c->r[24]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA488
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801CA48C
  c->r[3]=c->r[24]+c->r[0]; // 801CA490
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA494
  c->r[23]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA498
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CA49C
  c->r[18]=c->r[23]+c->r[0]; // 801CA4A0
  c->r[0]=R32(c->r[1]+0x00000080u); // 801CA4A4
  c->r[17]=c->r[18]+c->r[0]; // 801CA4A8
  c->r[3]=c->r[17]+c->r[20]; // 801CA4AC
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA4B0
  c->r[15]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA4B4
  c->r[3]=c->r[15]+c->r[22]; // 801CA4B8
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA4BC
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA4C0
  c->r[3]=c->r[22]+c->r[21]; // 801CA4C4
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA4C8
  c->r[21]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA4CC
  c->r[3]=c->r[21]+c->r[19]; // 801CA4D0
  c->r[0]=c->r[3]+0x0000001Fu; // 801CA4D4
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA4D8
  if (crb(c,2)) { goto L_801CA4E8; } // 801CA4DC
  c->r[3]=R32(c->r[1]+0x00000010u); // 801CA4E0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CA4E4
L_801CA4E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CA4E8
  if (crb(c,2)) { goto L_801CAA78; } // 801CA4EC
  c->r[3]=c->r[28]|c->r[28]; // 801CA4F0
  c->lr=0x801CA4F8u; f_80128068(c); // 801CA4F4
  cmps(c,0,(int32_t)c->r[3],0); // 801CA4F8
  c->r[16]=c->r[3]|c->r[3]; // 801CA4FC
  if (!crb(c,2)) { goto L_801CA50C; } // 801CA500
  c->r[3]=0u+0x00000000u; // 801CA504
  goto L_801CAA7C; // 801CA508
L_801CA50C:;
  c->r[0]=0u+0x00000000u; // 801CA50C
  c->r[19]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[19]); // 801CA510
  W32(c->r[1]+0x00000040u,c->r[0]); // 801CA514
  if (!crb(c,2)) { goto L_801CA524; } // 801CA518
  c->r[0]=c->r[0]|0x00000001u; // 801CA51C
  W32(c->r[1]+0x00000040u,c->r[0]); // 801CA520
L_801CA524:;
  c->r[0]=R32(c->r[1]+0x000000D8u); // 801CA524
  cmps(c,0,(int32_t)c->r[0],0); // 801CA528
  if (crb(c,2)) { goto L_801CA53C; } // 801CA52C
  c->r[0]=R32(c->r[1]+0x00000094u); // 801CA530
  c->r[4]=c->r[3]+c->r[0]; // 801CA534
  goto L_801CA540; // 801CA538
L_801CA53C:;
  c->r[4]=0u+0x00000000u; // 801CA53C
L_801CA540:;
  c->r[0]=R32(c->r[1]+0x000000F0u); // 801CA540
  W32(c->r[1]+0x00000044u,c->r[4]); // 801CA544
  cmps(c,0,(int32_t)c->r[0],0); // 801CA548
  if (crb(c,2)) { goto L_801CA55C; } // 801CA54C
  c->r[0]=R32(c->r[1]+0x000000ACu); // 801CA550
  c->r[4]=c->r[3]+c->r[0]; // 801CA554
  goto L_801CA560; // 801CA558
L_801CA55C:;
  c->r[4]=0u+0x00000000u; // 801CA55C
L_801CA560:;
  c->r[0]=R32(c->r[1]+0x000000ECu); // 801CA560
  W32(c->r[1]+0x00000048u,c->r[4]); // 801CA564
  cmps(c,0,(int32_t)c->r[0],0); // 801CA568
  if (crb(c,2)) { goto L_801CA57C; } // 801CA56C
  c->r[0]=R32(c->r[1]+0x000000A8u); // 801CA570
  c->r[4]=c->r[3]+c->r[0]; // 801CA574
  goto L_801CA580; // 801CA578
L_801CA57C:;
  c->r[4]=0u+0x00000000u; // 801CA57C
L_801CA580:;
  c->r[0]=R32(c->r[1]+0x000000E8u); // 801CA580
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 801CA584
  cmps(c,0,(int32_t)c->r[0],0); // 801CA588
  if (crb(c,2)) { goto L_801CA59C; } // 801CA58C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801CA590
  c->r[4]=c->r[3]+c->r[0]; // 801CA594
  goto L_801CA5A0; // 801CA598
L_801CA59C:;
  c->r[4]=0u+0x00000000u; // 801CA59C
L_801CA5A0:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801CA5A0
  W32(c->r[1]+0x00000050u,c->r[4]); // 801CA5A4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA5A8
  if (crb(c,2)) { goto L_801CA5BC; } // 801CA5AC
  c->r[0]=R32(c->r[1]+0x000000A0u); // 801CA5B0
  c->r[4]=c->r[3]+c->r[0]; // 801CA5B4
  goto L_801CA5C0; // 801CA5B8
L_801CA5BC:;
  c->r[4]=0u+0x00000000u; // 801CA5BC
L_801CA5C0:;
  c->r[0]=R32(c->r[1]+0x000000E0u); // 801CA5C0
  W32(c->r[1]+0x00000054u,c->r[4]); // 801CA5C4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA5C8
  if (crb(c,2)) { goto L_801CA5DC; } // 801CA5CC
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 801CA5D0
  c->r[4]=c->r[3]+c->r[0]; // 801CA5D4
  goto L_801CA5E0; // 801CA5D8
L_801CA5DC:;
  c->r[4]=0u+0x00000000u; // 801CA5DC
L_801CA5E0:;
  c->r[0]=R32(c->r[1]+0x000000DCu); // 801CA5E0
  W32(c->r[1]+0x00000058u,c->r[4]); // 801CA5E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA5E8
  if (crb(c,2)) { goto L_801CA5FC; } // 801CA5EC
  c->r[0]=R32(c->r[1]+0x00000098u); // 801CA5F0
  c->r[4]=c->r[3]+c->r[0]; // 801CA5F4
  goto L_801CA600; // 801CA5F8
L_801CA5FC:;
  c->r[4]=0u+0x00000000u; // 801CA5FC
L_801CA600:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801CA600
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 801CA604
  cmps(c,0,(int32_t)c->r[0],0); // 801CA608
  if (crb(c,2)) { goto L_801CA61C; } // 801CA60C
  c->r[0]=R32(c->r[1]+0x00000090u); // 801CA610
  c->r[4]=c->r[3]+c->r[0]; // 801CA614
  goto L_801CA620; // 801CA618
L_801CA61C:;
  c->r[4]=0u+0x00000000u; // 801CA61C
L_801CA620:;
  c->r[0]=R32(c->r[1]+0x000000D0u); // 801CA620
  W32(c->r[1]+0x00000060u,c->r[4]); // 801CA624
  cmps(c,0,(int32_t)c->r[0],0); // 801CA628
  if (crb(c,2)) { goto L_801CA638; } // 801CA62C
  c->r[4]=c->r[3]+c->r[14]; // 801CA630
  goto L_801CA63C; // 801CA634
L_801CA638:;
  c->r[4]=0u+0x00000000u; // 801CA638
L_801CA63C:;
  c->r[0]=R32(c->r[1]+0x000000CCu); // 801CA63C
  W32(c->r[1]+0x00000064u,c->r[4]); // 801CA640
  cmps(c,0,(int32_t)c->r[0],0); // 801CA644
  if (crb(c,2)) { goto L_801CA654; } // 801CA648
  c->r[4]=c->r[3]+c->r[26]; // 801CA64C
  goto L_801CA658; // 801CA650
L_801CA654:;
  c->r[4]=0u+0x00000000u; // 801CA654
L_801CA658:;
  c->r[0]=R32(c->r[1]+0x000000C8u); // 801CA658
  W32(c->r[1]+0x00000068u,c->r[4]); // 801CA65C
  cmps(c,0,(int32_t)c->r[0],0); // 801CA660
  if (crb(c,2)) { goto L_801CA670; } // 801CA664
  c->r[4]=c->r[3]+c->r[25]; // 801CA668
  goto L_801CA674; // 801CA66C
L_801CA670:;
  c->r[4]=0u+0x00000000u; // 801CA670
L_801CA674:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801CA674
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 801CA678
  cmps(c,0,(int32_t)c->r[0],0); // 801CA67C
  if (crb(c,2)) { goto L_801CA68C; } // 801CA680
  c->r[4]=c->r[3]+c->r[24]; // 801CA684
  goto L_801CA690; // 801CA688
L_801CA68C:;
  c->r[4]=0u+0x00000000u; // 801CA68C
L_801CA690:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CA690
  W32(c->r[1]+0x00000070u,c->r[4]); // 801CA694
  cmps(c,0,(int32_t)c->r[0],0); // 801CA698
  if (crb(c,2)) { goto L_801CA6A8; } // 801CA69C
  c->r[4]=c->r[3]+c->r[23]; // 801CA6A0
  goto L_801CA6AC; // 801CA6A4
L_801CA6A8:;
  c->r[4]=0u+0x00000000u; // 801CA6A8
L_801CA6AC:;
  c->r[0]=R32(c->r[1]+0x00000080u); // 801CA6AC
  W32(c->r[1]+0x00000074u,c->r[4]); // 801CA6B0
  cmps(c,0,(int32_t)c->r[0],0); // 801CA6B4
  if (crb(c,2)) { goto L_801CA6C4; } // 801CA6B8
  c->r[0]=c->r[3]+c->r[18]; // 801CA6BC
  goto L_801CA6C8; // 801CA6C0
L_801CA6C4:;
  c->r[0]=0u+0x00000000u; // 801CA6C4
L_801CA6C8:;
  cmps(c,0,(int32_t)c->r[20],0); // 801CA6C8
  W32(c->r[1]+0x00000078u,c->r[0]); // 801CA6CC
  if (crb(c,2)) { goto L_801CA6DC; } // 801CA6D0
  c->r[0]=c->r[3]+c->r[17]; // 801CA6D4
  goto L_801CA6E0; // 801CA6D8
L_801CA6DC:;
  c->r[0]=0u+0x00000000u; // 801CA6DC
L_801CA6E0:;
  c->r[18]=R32(c->r[1]+0x00000074u); // 801CA6E0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801CA6E4
  cmps(c,0,(int32_t)c->r[18],0); // 801CA6E8
  if (crb(c,2)) { goto L_801CA7A0; } // 801CA6EC
  c->r[3]=c->r[29]|c->r[29]; // 801CA6F0
  c->lr=0x801CA6F8u; f_801A9C24(c); // 801CA6F4
  c->r[17]=c->r[3]|c->r[3]; // 801CA6F8
  c->r[3]=c->r[29]|c->r[29]; // 801CA6FC
  c->lr=0x801CA704u; f_801AA12C(c); // 801CA700
  c->r[14]=c->r[3]|c->r[3]; // 801CA704
  c->r[20]=0u+0x00000000u; // 801CA708
  goto L_801CA798; // 801CA70C
L_801CA710:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA710
  c->r[4]=c->r[20]|c->r[20]; // 801CA714
  c->lr=0x801CA71Cu; f_801A9BD0(c); // 801CA718
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 801CA71C
  c->r[23]=0u+0x00000000u; // 801CA720
  goto L_801CA750; // 801CA724
L_801CA728:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA728
  c->r[4]=c->r[23]|c->r[23]; // 801CA72C
  c->lr=0x801CA734u; f_801AA0D8(c); // 801CA730
  W32(c->r[1]+0x00000028u,c->r[3]); // 801CA734
  c->r[3]=c->r[1]+0x00000028u; // 801CA738
  c->lr=0x801CA740u; f_801AA804(c); // 801CA73C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801CA740
  cmpu(c,0,c->r[0],c->r[3]); // 801CA744
  if (crb(c,2)) { goto L_801CA758; } // 801CA748
  c->r[23]=c->r[23]+0x00000001u; // 801CA74C
L_801CA750:;
  cmpu(c,0,c->r[23],c->r[14]); // 801CA750
  if (crb(c,0)) { IRQCHK(c); goto L_801CA728; } // 801CA754
L_801CA758:;
  cmpu(c,0,c->r[23],c->r[14]); // 801CA758
  if (crb(c,2)) { goto L_801CA788; } // 801CA75C
  c->r[4]=c->r[16]+c->r[15]; // 801CA760
  c->r[3]=c->r[1]+0x0000002Cu; // 801CA764
  W32(c->r[18]+0x00000000u,c->r[4]); // 801CA768
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 801CA76C
  c->r[5]=R32(c->r[5]+0x00000000u); // 801CA770
  c->r[0]=c->r[5]+0x0000001Fu; // 801CA774
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA778
  c->r[15]=c->r[15]+c->r[0]; // 801CA77C
  c->lr=0x801CA784u; f_801AD164(c); // 801CA780
  goto L_801CA790; // 801CA784
L_801CA788:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801CA788
  W32(c->r[18]+0x00000000u,c->r[0]); // 801CA78C
L_801CA790:;
  c->r[18]=c->r[18]+0x00000004u; // 801CA790
  c->r[20]=c->r[20]+0x00000001u; // 801CA794
L_801CA798:;
  cmpu(c,0,c->r[20],c->r[17]); // 801CA798
  if (crb(c,0)) { IRQCHK(c); goto L_801CA710; } // 801CA79C
L_801CA7A0:;
  c->r[17]=R32(c->r[1]+0x00000078u); // 801CA7A0
  cmps(c,0,(int32_t)c->r[17],0); // 801CA7A4
  if (crb(c,2)) { goto L_801CA85C; } // 801CA7A8
  c->r[3]=c->r[29]|c->r[29]; // 801CA7AC
  c->lr=0x801CA7B4u; f_801A9D50(c); // 801CA7B0
  c->r[15]=c->r[3]|c->r[3]; // 801CA7B4
  c->r[3]=c->r[29]|c->r[29]; // 801CA7B8
  c->lr=0x801CA7C0u; f_801AA12C(c); // 801CA7BC
  c->r[14]=c->r[3]|c->r[3]; // 801CA7C0
  c->r[18]=0u+0x00000000u; // 801CA7C4
  goto L_801CA854; // 801CA7C8
L_801CA7CC:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA7CC
  c->r[4]=c->r[18]|c->r[18]; // 801CA7D0
  c->lr=0x801CA7D8u; f_801A9CFC(c); // 801CA7D4
  W32(c->r[1]+0x00000024u,c->r[3]); // 801CA7D8
  c->r[20]=0u+0x00000000u; // 801CA7DC
  goto L_801CA80C; // 801CA7E0
L_801CA7E4:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA7E4
  c->r[4]=c->r[20]|c->r[20]; // 801CA7E8
  c->lr=0x801CA7F0u; f_801AA0D8(c); // 801CA7EC
  W32(c->r[1]+0x00000020u,c->r[3]); // 801CA7F0
  c->r[3]=c->r[1]+0x00000020u; // 801CA7F4
  c->lr=0x801CA7FCu; f_801AA84C(c); // 801CA7F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA7FC
  cmpu(c,0,c->r[0],c->r[3]); // 801CA800
  if (crb(c,2)) { goto L_801CA814; } // 801CA804
  c->r[20]=c->r[20]+0x00000001u; // 801CA808
L_801CA80C:;
  cmpu(c,0,c->r[20],c->r[14]); // 801CA80C
  if (crb(c,0)) { IRQCHK(c); goto L_801CA7E4; } // 801CA810
L_801CA814:;
  cmpu(c,0,c->r[20],c->r[14]); // 801CA814
  if (crb(c,2)) { goto L_801CA844; } // 801CA818
  c->r[4]=c->r[16]+c->r[22]; // 801CA81C
  c->r[3]=c->r[1]+0x00000024u; // 801CA820
  W32(c->r[17]+0x00000000u,c->r[4]); // 801CA824
  c->r[5]=R32(c->r[1]+0x00000024u); // 801CA828
  c->r[5]=R32(c->r[5]+0x00000000u); // 801CA82C
  c->r[0]=c->r[5]+0x0000001Fu; // 801CA830
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA834
  c->r[22]=c->r[22]+c->r[0]; // 801CA838
  c->lr=0x801CA840u; f_801AD234(c); // 801CA83C
  goto L_801CA84C; // 801CA840
L_801CA844:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA844
  W32(c->r[17]+0x00000000u,c->r[0]); // 801CA848
L_801CA84C:;
  c->r[17]=c->r[17]+0x00000004u; // 801CA84C
  c->r[18]=c->r[18]+0x00000001u; // 801CA850
L_801CA854:;
  cmpu(c,0,c->r[18],c->r[15]); // 801CA854
  if (crb(c,0)) { IRQCHK(c); goto L_801CA7CC; } // 801CA858
L_801CA85C:;
  c->r[17]=R32(c->r[1]+0x0000007Cu); // 801CA85C
  cmps(c,0,(int32_t)c->r[17],0); // 801CA860
  if (crb(c,2)) { goto L_801CA944; } // 801CA864
  c->r[3]=c->r[29]|c->r[29]; // 801CA868
  c->lr=0x801CA870u; f_801A9E7C(c); // 801CA86C
  c->r[15]=c->r[3]|c->r[3]; // 801CA870
  c->r[3]=c->r[29]|c->r[29]; // 801CA874
  c->lr=0x801CA87Cu; f_801AA12C(c); // 801CA878
  c->r[14]=c->r[3]|c->r[3]; // 801CA87C
  c->r[18]=0u+0x00000000u; // 801CA880
  goto L_801CA93C; // 801CA884
L_801CA888:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA888
  c->r[4]=c->r[18]|c->r[18]; // 801CA88C
  c->lr=0x801CA894u; f_801A9E28(c); // 801CA890
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801CA894
  c->r[22]=0u+0x00000000u; // 801CA898
  goto L_801CA8F4; // 801CA89C
L_801CA8A0:;
  c->r[3]=c->r[29]|c->r[29]; // 801CA8A0
  c->r[4]=c->r[22]|c->r[22]; // 801CA8A4
  c->lr=0x801CA8ACu; f_801AA0D8(c); // 801CA8A8
  W32(c->r[1]+0x00000018u,c->r[3]); // 801CA8AC
  c->r[3]=c->r[1]+0x00000018u; // 801CA8B0
  c->r[20]=0u+0x00000001u; // 801CA8B4
  c->r[4]=0u+0x00000000u; // 801CA8B8
  c->lr=0x801CA8C0u; f_801AA8A8(c); // 801CA8BC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CA8C0
  cmpu(c,0,c->r[0],c->r[3]); // 801CA8C4
  if (crb(c,2)) { goto L_801CA8E8; } // 801CA8C8
  c->r[3]=c->r[1]+0x00000018u; // 801CA8CC
  c->r[4]=0u+0x00000001u; // 801CA8D0
  c->lr=0x801CA8D8u; f_801AA8A8(c); // 801CA8D4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CA8D8
  cmpu(c,0,c->r[0],c->r[3]); // 801CA8DC
  if (crb(c,2)) { goto L_801CA8E8; } // 801CA8E0
  c->r[20]=0u+0x00000000u; // 801CA8E4
L_801CA8E8:;
  cmps(c,0,(int32_t)c->r[20],0); // 801CA8E8
  if (!crb(c,2)) { goto L_801CA8FC; } // 801CA8EC
  c->r[22]=c->r[22]+0x00000001u; // 801CA8F0
L_801CA8F4:;
  cmpu(c,0,c->r[22],c->r[14]); // 801CA8F4
  if (crb(c,0)) { IRQCHK(c); goto L_801CA8A0; } // 801CA8F8
L_801CA8FC:;
  cmpu(c,0,c->r[22],c->r[14]); // 801CA8FC
  if (crb(c,2)) { goto L_801CA92C; } // 801CA900
  c->r[4]=c->r[16]+c->r[21]; // 801CA904
  c->r[3]=c->r[1]+0x0000001Cu; // 801CA908
  W32(c->r[17]+0x00000000u,c->r[4]); // 801CA90C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801CA910
  c->r[5]=R32(c->r[5]+0x00000000u); // 801CA914
  c->r[0]=c->r[5]+0x0000001Fu; // 801CA918
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CA91C
  c->r[21]=c->r[21]+c->r[0]; // 801CA920
  c->lr=0x801CA928u; f_801AD338(c); // 801CA924
  goto L_801CA934; // 801CA928
L_801CA92C:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CA92C
  W32(c->r[17]+0x00000000u,c->r[0]); // 801CA930
L_801CA934:;
  c->r[17]=c->r[17]+0x00000004u; // 801CA934
  c->r[18]=c->r[18]+0x00000001u; // 801CA938
L_801CA93C:;
  cmpu(c,0,c->r[18],c->r[15]); // 801CA93C
  if (crb(c,0)) { IRQCHK(c); goto L_801CA888; } // 801CA940
L_801CA944:;
  cmps(c,0,(int32_t)c->r[19],0); // 801CA944
  c->r[14]=0u+0x00000000u; // 801CA948
  if (crb(c,2)) { goto L_801CA954; } // 801CA94C
  c->r[14]=c->r[14]|0x00000001u; // 801CA950
L_801CA954:;
  cmps(c,0,(int32_t)c->r[16],0); // 801CA954
  if (crb(c,2)) { goto L_801CAA70; } // 801CA958
  c->r[0]=R32(c->r[1]+0x000000F8u); // 801CA95C
  c->r[3]=R32(c->r[29]+0x00000000u); // 801CA960
  cmps(c,0,(int32_t)c->r[0],0); // 801CA964
  if (crb(c,2)) { goto L_801CA978; } // 801CA968
  c->r[0]=R32(c->r[1]+0x000000B8u); // 801CA96C
  c->r[9]=c->r[16]+c->r[0]; // 801CA970
  goto L_801CA97C; // 801CA974
L_801CA978:;
  c->r[9]=0u+0x00000000u; // 801CA978
L_801CA97C:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801CA97C
  cmps(c,0,(int32_t)c->r[0],0); // 801CA980
  if (crb(c,2)) { goto L_801CA994; } // 801CA984
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801CA988
  c->r[10]=c->r[16]+c->r[0]; // 801CA98C
  goto L_801CA998; // 801CA990
L_801CA994:;
  c->r[10]=0u+0x00000000u; // 801CA994
L_801CA998:;
  W32(c->r[1]+0x00000014u,c->r[3]); // 801CA998
  c->r[3]=c->r[16]|c->r[16]; // 801CA99C
  c->r[0]=R32(c->r[1]+0x000000C0u); // 801CA9A0
  c->r[4]=c->r[28]|c->r[28]; // 801CA9A4
  W32(c->r[1]+0x00000008u,c->r[31]); // 801CA9A8
  c->r[5]=c->r[1]+0x00000014u; // 801CA9AC
  c->r[7]=c->r[16]+c->r[0]; // 801CA9B0
  c->r[0]=R32(c->r[1]+0x000000BCu); // 801CA9B4
  W32(c->r[1]+0x0000000Cu,c->r[27]); // 801CA9B8
  c->r[6]=c->r[16]+0x000001A0u; // 801CA9BC
  c->r[8]=c->r[16]+c->r[0]; // 801CA9C0
  c->lr=0x801CA9C8u; f_801C95DC(c); // 801CA9C4
  c->r[4]=0u+0x802A0000u; // 801CA9C8
  c->r[0]=R32(c->r[1]+0x000000B0u); // 801CA9CC
  c->r[4]=c->r[4]+0x000015E8u; // 801CA9D0
  c->r[3]=0u+0x00000000u; // 801CA9D4
  W32(c->r[16]+0x00000000u,c->r[4]); // 801CA9D8
  c->r[0]=c->r[16]+c->r[0]; // 801CA9DC
  c->r[5]=R32(c->r[1]+0x00000040u); // 801CA9E0
  W32(c->r[16]+0x00000138u,c->r[3]); // 801CA9E4
  c->r[4]=R32(c->r[1]+0x00000044u); // 801CA9E8
  W32(c->r[16]+0x0000013Cu,c->r[3]); // 801CA9EC
  c->r[3]=R32(c->r[1]+0x00000048u); // 801CA9F0
  W32(c->r[16]+0x00000140u,c->r[0]); // 801CA9F4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 801CA9F8
  W32(c->r[16]+0x00000144u,c->r[5]); // 801CA9FC
  c->r[5]=R32(c->r[1]+0x00000050u); // 801CAA00
  W32(c->r[16]+0x00000148u,c->r[4]); // 801CAA04
  c->r[4]=R32(c->r[1]+0x00000054u); // 801CAA08
  W32(c->r[16]+0x0000014Cu,c->r[3]); // 801CAA0C
  c->r[3]=R32(c->r[1]+0x00000058u); // 801CAA10
  W32(c->r[16]+0x00000150u,c->r[0]); // 801CAA14
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 801CAA18
  W32(c->r[16]+0x00000154u,c->r[5]); // 801CAA1C
  c->r[5]=R32(c->r[1]+0x00000060u); // 801CAA20
  W32(c->r[16]+0x00000158u,c->r[4]); // 801CAA24
  c->r[4]=R32(c->r[1]+0x00000064u); // 801CAA28
  W32(c->r[16]+0x0000015Cu,c->r[3]); // 801CAA2C
  c->r[3]=R32(c->r[1]+0x00000068u); // 801CAA30
  W32(c->r[16]+0x00000160u,c->r[0]); // 801CAA34
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 801CAA38
  W32(c->r[16]+0x00000164u,c->r[5]); // 801CAA3C
  c->r[5]=R32(c->r[1]+0x00000070u); // 801CAA40
  W32(c->r[16]+0x00000168u,c->r[4]); // 801CAA44
  c->r[4]=R32(c->r[1]+0x00000074u); // 801CAA48
  W32(c->r[16]+0x0000016Cu,c->r[3]); // 801CAA4C
  c->r[3]=R32(c->r[1]+0x00000078u); // 801CAA50
  W32(c->r[16]+0x00000170u,c->r[0]); // 801CAA54
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801CAA58
  W32(c->r[16]+0x00000174u,c->r[5]); // 801CAA5C
  W32(c->r[16]+0x00000178u,c->r[4]); // 801CAA60
  W32(c->r[16]+0x0000017Cu,c->r[3]); // 801CAA64
  W32(c->r[16]+0x00000180u,c->r[0]); // 801CAA68
  W32(c->r[16]+0x00000184u,c->r[14]); // 801CAA6C
L_801CAA70:;
  c->r[3]=c->r[16]|c->r[16]; // 801CAA70
  c->lr=0x801CAA78u; f_801CB748(c); // 801CAA74
L_801CAA78:;
  c->r[3]=c->r[16]|c->r[16]; // 801CAA78
L_801CAA7C:;
  c->r[11]=c->r[1]+0x00000150u; // 801CAA7C
  c->lr=0x801CAA84u; f_80109F50(c); // 801CAA80
  c->r[0]=R32(c->r[1]+0x00000154u); // 801CAA84
  c->lr=c->r[0]; // 801CAA88
  c->r[1]=c->r[1]+0x00000150u; // 801CAA8C
  return; // 801CAA90
}

// ScnMdl_G3DPROC_CALC_MAT__Q34nw4r3g3d6ScnMdlFUlPv
void f_801CAA94(Ctx* __restrict c) {
  trace_call(0x801CAA94u);
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAA94
  c->r[0]=c->lr; // 801CAA98
  W32(c->r[1]+0x00000254u,c->r[0]); // 801CAA9C
  c->r[11]=c->r[1]+0x00000250u; // 801CAAA0
  c->lr=0x801CAAA8u; f_80109F04(c); // 801CAAA4
  c->r[6]=R32(c->r[3]+0x000000D4u); // 801CAAA8
  c->r[16]=c->r[3]|c->r[3]; // 801CAAAC
  W32(c->r[1]+0x00000008u,c->r[4]); // 801CAAB0
  cmps(c,0,(int32_t)c->r[6],0); // 801CAAB4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801CAAB8
  if (crb(c,2)) { goto L_801CAAFC; } // 801CAABC
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801CAAC0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801CAAC4
  if (crb(c,2)) { goto L_801CAAFC; } // 801CAAC8
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801CAACC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CAAD0
  if (crb(c,2)) { goto L_801CAAFC; } // 801CAAD4
  c->r[12]=R32(c->r[6]+0x00000000u); // 801CAAD8
  c->r[3]=c->r[6]|c->r[6]; // 801CAADC
  c->r[6]=c->r[4]|c->r[4]; // 801CAAE0
  c->r[5]=c->r[16]|c->r[16]; // 801CAAE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CAAE8
  c->r[4]=0u+0x00000001u; // 801CAAEC
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 801CAAF0
  c->ctr=c->r[12]; // 801CAAF4
  if (true) { c->lr=0x801CAAFCu; dispatch(c,c->ctr); } // 801CAAF8
L_801CAAFC:;
  c->r[0]=R32(c->r[16]+0x000000E8u); // 801CAAFC
  c->r[3]=c->r[1]+0x00000060u; // 801CAB00
  W32(c->r[1]+0x00000060u,c->r[0]); // 801CAB04
  c->lr=0x801CAB0Cu; f_801AA050(c); // 801CAB08
  c->r[29]=c->r[1]+0x000000E4u; // 801CAB0C
  c->r[0]=c->r[1]+0x000000C8u; // 801CAB10
  c->r[4]=c->r[29]-c->r[0]; // 801CAB14
  c->r[30]=c->r[1]+0x00000104u; // 801CAB18
  c->r[5]=c->r[4]+0x00000003u; // 801CAB1C
  c->r[0]=c->r[1]+0x000000E8u; // 801CAB20
  W32(c->r[1]+0x00000204u,c->r[3]); // 801CAB24
  c->r[3]=sraw(c,c->r[5],2); // 801CAB28
  c->r[6]=c->r[30]-c->r[0]; // 801CAB2C
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 801CAB30
  c->r[4]=addc(c,c->r[3],0,c->xer_ca); // 801CAB34
  W32(c->r[1]+0x00000200u,c->r[0]); // 801CAB38
  c->r[0]=rotl(c->r[5],0)&0x80000000u; // 801CAB3C
  c->r[7]=c->r[6]+0x00000003u; // 801CAB40
  c->r[3]=sraw(c,c->r[7],2); // 801CAB44
  c->r[21]=c->r[4]+0x00000001u; // 801CAB48
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801CAB4C
  W32(c->r[1]+0x000001FCu,c->r[0]); // 801CAB50
  c->r[0]=rotl(c->r[21],0)&0x80000000u; // 801CAB54
  c->r[20]=rotl(c->r[4],0)&0x80000000u; // 801CAB58
  W32(c->r[1]+0x000001F8u,c->r[0]); // 801CAB5C
  c->r[0]=rotl(c->r[6],0)&0x80000000u; // 801CAB60
  c->r[19]=c->r[3]+0x00000001u; // 801CAB64
  c->r[18]=rotl(c->r[3],0)&0x80000000u; // 801CAB68
  W32(c->r[1]+0x000001F4u,c->r[0]); // 801CAB6C
  c->r[0]=rotl(c->r[7],0)&0x80000000u; // 801CAB70
  c->r[14]=rotl(c->r[19],0)&0x80000000u; // 801CAB74
  c->r[17]=0u+0x00000000u; // 801CAB78
  W32(c->r[1]+0x000001F0u,c->r[0]); // 801CAB7C
  c->r[28]=0u+0x00000000u; // 801CAB80
  c->r[27]=0u+0x00000000u; // 801CAB84
  c->r[26]=0u+0x00000000u; // 801CAB88
  c->r[25]=0u+0x00000000u; // 801CAB8C
  c->r[24]=0u+0x00000000u; // 801CAB90
  c->r[23]=0u+0x00000000u; // 801CAB94
  c->r[22]=0u+0x00000000u; // 801CAB98
  c->r[31]=0u+0x00000000u; // 801CAB9C
  goto L_801CB19C; // 801CABA0
L_801CABA4:;
  c->r[4]=c->r[17]|c->r[17]; // 801CABA4
  c->r[3]=c->r[1]+0x00000060u; // 801CABA8
  c->lr=0x801CABB0u; f_801A9FFC(c); // 801CABAC
  c->r[4]=R32(c->r[16]+0x00000140u); // 801CABB0
  c->r[15]=c->r[3]|c->r[3]; // 801CABB4
  c->r[0]=R32(c->r[4]+c->r[28]); // 801CABB8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CABBC
  if (crb(c,2)) { goto L_801CABD4; } // 801CABC0
  c->r[3]=c->r[16]|c->r[16]; // 801CABC4
  c->r[4]=c->r[17]|c->r[17]; // 801CABC8
  c->r[5]=0u+0x00000001u; // 801CABCC
  c->lr=0x801CABD4u; f_801CBAFC(c); // 801CABD0
L_801CABD4:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CABD4
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CABD8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801CABDC
  if (crb(c,2)) { goto L_801CABF4; } // 801CABE0
  c->r[3]=c->r[16]|c->r[16]; // 801CABE4
  c->r[4]=c->r[17]|c->r[17]; // 801CABE8
  c->r[5]=0u+0x00000002u; // 801CABEC
  c->lr=0x801CABF4u; f_801CBAFC(c); // 801CABF0
L_801CABF4:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CABF4
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CABF8
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 801CABFC
  if (crb(c,2)) { goto L_801CAC14; } // 801CAC00
  c->r[3]=c->r[16]|c->r[16]; // 801CAC04
  c->r[4]=c->r[17]|c->r[17]; // 801CAC08
  c->r[5]=0u+0x00000200u; // 801CAC0C
  c->lr=0x801CAC14u; f_801CBAFC(c); // 801CAC10
L_801CAC14:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CAC14
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CAC18
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CAC1C
  if (crb(c,2)) { goto L_801CAC34; } // 801CAC20
  c->r[3]=c->r[16]|c->r[16]; // 801CAC24
  c->r[4]=c->r[17]|c->r[17]; // 801CAC28
  c->r[5]=0u+0x00000004u; // 801CAC2C
  c->lr=0x801CAC34u; f_801CBAFC(c); // 801CAC30
L_801CAC34:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CAC34
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CAC38
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801CAC3C
  if (crb(c,2)) { goto L_801CAC54; } // 801CAC40
  c->r[3]=c->r[16]|c->r[16]; // 801CAC44
  c->r[4]=c->r[17]|c->r[17]; // 801CAC48
  c->r[5]=0u+0x00000008u; // 801CAC4C
  c->lr=0x801CAC54u; f_801CBAFC(c); // 801CAC50
L_801CAC54:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CAC54
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CAC58
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 801CAC5C
  if (crb(c,2)) { goto L_801CAC74; } // 801CAC60
  c->r[3]=c->r[16]|c->r[16]; // 801CAC64
  c->r[4]=c->r[17]|c->r[17]; // 801CAC68
  c->r[5]=0u+0x00000100u; // 801CAC6C
  c->lr=0x801CAC74u; f_801CBAFC(c); // 801CAC70
L_801CAC74:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CAC74
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CAC78
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801CAC7C
  if (crb(c,2)) { goto L_801CAC94; } // 801CAC80
  c->r[3]=c->r[16]|c->r[16]; // 801CAC84
  c->r[4]=c->r[17]|c->r[17]; // 801CAC88
  c->r[5]=0u+0x00000010u; // 801CAC8C
  c->lr=0x801CAC94u; f_801CBAFC(c); // 801CAC90
L_801CAC94:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CAC94
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CAC98
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801CAC9C
  if (crb(c,2)) { goto L_801CACB4; } // 801CACA0
  c->r[3]=c->r[16]|c->r[16]; // 801CACA4
  c->r[4]=c->r[17]|c->r[17]; // 801CACA8
  c->r[5]=0u+0x00000020u; // 801CACAC
  c->lr=0x801CACB4u; f_801CBAFC(c); // 801CACB0
L_801CACB4:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CACB4
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CACB8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801CACBC
  if (crb(c,2)) { goto L_801CACD4; } // 801CACC0
  c->r[3]=c->r[16]|c->r[16]; // 801CACC4
  c->r[4]=c->r[17]|c->r[17]; // 801CACC8
  c->r[5]=0u+0x00000080u; // 801CACCC
  c->lr=0x801CACD4u; f_801CBAFC(c); // 801CACD0
L_801CACD4:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CACD4
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CACD8
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801CACDC
  if (crb(c,2)) { goto L_801CACF4; } // 801CACE0
  c->r[3]=c->r[16]|c->r[16]; // 801CACE4
  c->r[4]=c->r[17]|c->r[17]; // 801CACE8
  c->r[5]=0u+0x00000400u; // 801CACEC
  c->lr=0x801CACF4u; f_801CBAFC(c); // 801CACF0
L_801CACF4:;
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CACF4
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CACF8
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 801CACFC
  if (crb(c,2)) { goto L_801CAD14; } // 801CAD00
  c->r[3]=c->r[16]|c->r[16]; // 801CAD04
  c->r[4]=c->r[17]|c->r[17]; // 801CAD08
  c->r[5]=0u+0x00000800u; // 801CAD0C
  c->lr=0x801CAD14u; f_801CBAFC(c); // 801CAD10
L_801CAD14:;
  c->r[3]=R32(c->r[16]+0x00000130u); // 801CAD14
  cmps(c,0,(int32_t)c->r[3],0); // 801CAD18
  if (crb(c,2)) { goto L_801CAFB8; } // 801CAD1C
  c->r[4]=c->r[17]|c->r[17]; // 801CAD20
  c->lr=0x801CAD28u; f_801B28C4(c); // 801CAD24
  cmps(c,0,(int32_t)c->r[3],0); // 801CAD28
  if (crb(c,2)) { goto L_801CAFB8; } // 801CAD2C
  c->r[4]=c->r[1]+0x000000C8u; // 801CAD30
  W32(c->r[1]+0x000000C4u,c->r[31]); // 801CAD34
  cmpu(c,0,c->r[4],c->r[29]); // 801CAD38
  if (!crb(c,0)) { goto L_801CAE2C; } // 801CAD3C
  cmps(c,0,(int32_t)c->r[21],8); // 801CAD40
  if (!crb(c,1)) { goto L_801CAE08; } // 801CAD44
  c->r[0]=c->r[4]|c->r[4]; // 801CAD48
  c->r[3]=0u+0x00000000u; // 801CAD4C
  cmpu(c,0,c->r[0],c->r[29]); // 801CAD50
  c->r[5]=0u+0x00000000u; // 801CAD54
  if (crb(c,1)) { goto L_801CAD88; } // 801CAD58
  c->r[0]=R32(c->r[1]+0x00000200u); // 801CAD5C
  c->r[6]=0u+0x00000001u; // 801CAD60
  cmps(c,0,(int32_t)c->r[0],0); // 801CAD64
  if (!crb(c,2)) { goto L_801CAD7C; } // 801CAD68
  c->r[0]=R32(c->r[1]+0x000001FCu); // 801CAD6C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAD70
  if (crb(c,2)) { goto L_801CAD7C; } // 801CAD74
  c->r[6]=0u+0x00000000u; // 801CAD78
L_801CAD7C:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CAD7C
  if (crb(c,2)) { goto L_801CAD88; } // 801CAD80
  c->r[5]=0u+0x00000001u; // 801CAD84
L_801CAD88:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CAD88
  if (crb(c,2)) { goto L_801CADB8; } // 801CAD8C
  cmps(c,0,(int32_t)c->r[20],0); // 801CAD90
  c->r[5]=0u+0x00000001u; // 801CAD94
  if (!crb(c,2)) { goto L_801CADAC; } // 801CAD98
  c->r[0]=R32(c->r[1]+0x000001F8u); // 801CAD9C
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[0]); // 801CADA0
  if (crb(c,2)) { goto L_801CADAC; } // 801CADA4
  c->r[5]=0u+0x00000000u; // 801CADA8
L_801CADAC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CADAC
  if (crb(c,2)) { goto L_801CADB8; } // 801CADB0
  c->r[3]=0u+0x00000001u; // 801CADB4
L_801CADB8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CADB8
  if (crb(c,2)) { goto L_801CAE08; } // 801CADBC
  c->r[3]=c->r[1]+0x000000C4u; // 801CADC0
  c->r[0]=c->r[3]+0x0000001Fu; // 801CADC4
  c->r[0]=c->r[0]-c->r[4]; // 801CADC8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CADCC
  c->ctr=c->r[0]; // 801CADD0
  c->r[0]=c->r[3]|c->r[3]; // 801CADD4
  cmpu(c,0,c->r[4],c->r[0]); // 801CADD8
  if (!crb(c,0)) { goto L_801CAE08; } // 801CADDC
L_801CADE0:;
  W32(c->r[4]+0x00000000u,c->r[31]); // 801CADE0
  W32(c->r[4]+0x00000004u,c->r[31]); // 801CADE4
  W32(c->r[4]+0x00000008u,c->r[31]); // 801CADE8
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 801CADEC
  W32(c->r[4]+0x00000010u,c->r[31]); // 801CADF0
  W32(c->r[4]+0x00000014u,c->r[31]); // 801CADF4
  W32(c->r[4]+0x00000018u,c->r[31]); // 801CADF8
  W32(c->r[4]+0x0000001Cu,c->r[31]); // 801CADFC
  c->r[4]=c->r[4]+0x00000020u; // 801CAE00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CADE0; } // 801CAE04
L_801CAE08:;
  c->r[0]=c->r[29]+0x00000003u; // 801CAE08
  c->r[0]=c->r[0]-c->r[4]; // 801CAE0C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801CAE10
  c->ctr=c->r[0]; // 801CAE14
  cmpu(c,0,c->r[4],c->r[29]); // 801CAE18
  if (!crb(c,0)) { goto L_801CAE2C; } // 801CAE1C
L_801CAE20:;
  W32(c->r[4]+0x00000000u,c->r[31]); // 801CAE20
  c->r[4]=c->r[4]+0x00000004u; // 801CAE24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CAE20; } // 801CAE28
L_801CAE2C:;
  c->r[3]=c->r[1]+0x000000E8u; // 801CAE2C
  W32(c->r[1]+0x000000E4u,c->r[31]); // 801CAE30
  cmpu(c,0,c->r[3],c->r[30]); // 801CAE34
  if (!crb(c,0)) { goto L_801CAF1C; } // 801CAE38
  cmps(c,0,(int32_t)c->r[19],8); // 801CAE3C
  if (!crb(c,1)) { goto L_801CAEF8; } // 801CAE40
  c->r[0]=c->r[3]|c->r[3]; // 801CAE44
  c->r[4]=0u+0x00000000u; // 801CAE48
  cmpu(c,0,c->r[0],c->r[30]); // 801CAE4C
  c->r[5]=0u+0x00000000u; // 801CAE50
  if (crb(c,1)) { goto L_801CAE84; } // 801CAE54
  c->r[0]=R32(c->r[1]+0x000001F4u); // 801CAE58
  c->r[6]=0u+0x00000001u; // 801CAE5C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAE60
  if (!crb(c,2)) { goto L_801CAE78; } // 801CAE64
  c->r[0]=R32(c->r[1]+0x000001F0u); // 801CAE68
  cmps(c,0,(int32_t)c->r[0],0); // 801CAE6C
  if (crb(c,2)) { goto L_801CAE78; } // 801CAE70
  c->r[6]=0u+0x00000000u; // 801CAE74
L_801CAE78:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CAE78
  if (crb(c,2)) { goto L_801CAE84; } // 801CAE7C
  c->r[5]=0u+0x00000001u; // 801CAE80
L_801CAE84:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CAE84
  if (crb(c,2)) { goto L_801CAEB0; } // 801CAE88
  cmps(c,0,(int32_t)c->r[18],0); // 801CAE8C
  c->r[0]=0u+0x00000001u; // 801CAE90
  if (!crb(c,2)) { goto L_801CAEA4; } // 801CAE94
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[14]); // 801CAE98
  if (crb(c,2)) { goto L_801CAEA4; } // 801CAE9C
  c->r[0]=0u+0x00000000u; // 801CAEA0
L_801CAEA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CAEA4
  if (crb(c,2)) { goto L_801CAEB0; } // 801CAEA8
  c->r[4]=0u+0x00000001u; // 801CAEAC
L_801CAEB0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CAEB0
  if (crb(c,2)) { goto L_801CAEF8; } // 801CAEB4
  c->r[0]=c->r[29]+0x0000001Fu; // 801CAEB8
  c->r[0]=c->r[0]-c->r[3]; // 801CAEBC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CAEC0
  c->ctr=c->r[0]; // 801CAEC4
  cmpu(c,0,c->r[3],c->r[29]); // 801CAEC8
  if (!crb(c,0)) { goto L_801CAEF8; } // 801CAECC
L_801CAED0:;
  W32(c->r[3]+0x00000000u,c->r[31]); // 801CAED0
  W32(c->r[3]+0x00000004u,c->r[31]); // 801CAED4
  W32(c->r[3]+0x00000008u,c->r[31]); // 801CAED8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801CAEDC
  W32(c->r[3]+0x00000010u,c->r[31]); // 801CAEE0
  W32(c->r[3]+0x00000014u,c->r[31]); // 801CAEE4
  W32(c->r[3]+0x00000018u,c->r[31]); // 801CAEE8
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801CAEEC
  c->r[3]=c->r[3]+0x00000020u; // 801CAEF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CAED0; } // 801CAEF4
L_801CAEF8:;
  c->r[0]=c->r[30]+0x00000003u; // 801CAEF8
  c->r[0]=c->r[0]-c->r[3]; // 801CAEFC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801CAF00
  c->ctr=c->r[0]; // 801CAF04
  cmpu(c,0,c->r[3],c->r[30]); // 801CAF08
  if (!crb(c,0)) { goto L_801CAF1C; } // 801CAF0C
L_801CAF10:;
  W32(c->r[3]+0x00000000u,c->r[31]); // 801CAF10
  c->r[3]=c->r[3]+0x00000004u; // 801CAF14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CAF10; } // 801CAF18
L_801CAF1C:;
  c->r[3]=R32(c->r[16]+0x00000130u); // 801CAF1C
  c->r[5]=c->r[17]|c->r[17]; // 801CAF20
  c->r[4]=c->r[1]+0x000000C0u; // 801CAF24
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CAF28
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CAF2C
  c->ctr=c->r[12]; // 801CAF30
  if (true) { c->lr=0x801CAF38u; dispatch(c,c->ctr); } // 801CAF34
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 801CAF38
  cmps(c,0,(int32_t)c->r[0],0); // 801CAF3C
  if (crb(c,2)) { goto L_801CAF54; } // 801CAF40
  c->r[0]=c->r[0]+c->r[27]; // 801CAF44
  c->r[4]=c->r[1]+0x00000054u; // 801CAF48
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CAF4C
  goto L_801CAF60; // 801CAF50
L_801CAF54:;
  c->r[0]=c->r[15]+0x00000040u; // 801CAF54
  c->r[4]=c->r[1]+0x00000050u; // 801CAF58
  W32(c->r[1]+0x00000050u,c->r[0]); // 801CAF5C
L_801CAF60:;
  c->r[5]=R32(c->r[16]+0x00000150u); // 801CAF60
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CAF64
  cmps(c,0,(int32_t)c->r[5],0); // 801CAF68
  if (crb(c,2)) { goto L_801CAF80; } // 801CAF6C
  c->r[4]=c->r[5]+c->r[26]; // 801CAF70
  c->r[5]=c->r[1]+0x0000004Cu; // 801CAF74
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 801CAF78
  goto L_801CAF8C; // 801CAF7C
L_801CAF80:;
  c->r[4]=c->r[15]+0x00000144u; // 801CAF80
  c->r[5]=c->r[1]+0x00000048u; // 801CAF84
  W32(c->r[1]+0x00000048u,c->r[4]); // 801CAF88
L_801CAF8C:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 801CAF8C
  c->r[5]=c->r[3]|c->r[3]; // 801CAF90
  c->r[3]=c->r[1]+0x00000044u; // 801CAF94
  c->r[4]=c->r[1]+0x00000040u; // 801CAF98
  W32(c->r[1]+0x00000040u,c->r[6]); // 801CAF9C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CAFA0
  c->lr=0x801CAFA8u; f_801B2F88(c); // 801CAFA4
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CAFA8
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CAFAC
  c->r[0]=c->r[0]|0x00000003u; // 801CAFB0
  W32(c->r[3]+c->r[28],c->r[0]); // 801CAFB4
L_801CAFB8:;
  c->r[3]=R32(c->r[16]+0x00000134u); // 801CAFB8
  cmps(c,0,(int32_t)c->r[3],0); // 801CAFBC
  if (crb(c,2)) { goto L_801CB098; } // 801CAFC0
  c->r[4]=c->r[17]|c->r[17]; // 801CAFC4
  c->lr=0x801CAFCCu; f_801B32F0(c); // 801CAFC8
  cmps(c,0,(int32_t)c->r[3],0); // 801CAFCC
  if (crb(c,2)) { goto L_801CB098; } // 801CAFD0
  c->r[3]=R32(c->r[16]+0x00000134u); // 801CAFD4
  c->r[5]=c->r[17]|c->r[17]; // 801CAFD8
  c->r[4]=c->r[1]+0x00000108u; // 801CAFDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CAFE0
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CAFE4
  c->ctr=c->r[12]; // 801CAFE8
  if (true) { c->lr=0x801CAFF0u; dispatch(c,c->ctr); } // 801CAFEC
  c->r[0]=R32(c->r[16]+0x00000154u); // 801CAFF0
  cmps(c,0,(int32_t)c->r[0],0); // 801CAFF4
  if (crb(c,2)) { goto L_801CB00C; } // 801CAFF8
  c->r[0]=c->r[0]+c->r[25]; // 801CAFFC
  c->r[4]=c->r[1]+0x0000003Cu; // 801CB000
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801CB004
  goto L_801CB018; // 801CB008
L_801CB00C:;
  c->r[0]=c->r[15]+0x000001A8u; // 801CB00C
  c->r[4]=c->r[1]+0x00000038u; // 801CB010
  W32(c->r[1]+0x00000038u,c->r[0]); // 801CB014
L_801CB018:;
  c->r[5]=R32(c->r[16]+0x0000016Cu); // 801CB018
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CB01C
  cmps(c,0,(int32_t)c->r[5],0); // 801CB020
  if (crb(c,2)) { goto L_801CB038; } // 801CB024
  c->r[4]=c->r[5]+c->r[24]; // 801CB028
  c->r[5]=c->r[1]+0x00000034u; // 801CB02C
  W32(c->r[1]+0x00000034u,c->r[4]); // 801CB030
  goto L_801CB05C; // 801CB034
L_801CB038:;
  c->r[4]=R32(c->r[15]+0x0000003Cu); // 801CB038
  cmps(c,0,(int32_t)c->r[4],0); // 801CB03C
  if (crb(c,2)) { goto L_801CB04C; } // 801CB040
  c->r[4]=c->r[15]+c->r[4]; // 801CB044
  goto L_801CB050; // 801CB048
L_801CB04C:;
  c->r[4]=0u+0x00000000u; // 801CB04C
L_801CB050:;
  c->r[4]=c->r[4]+0x000000A0u; // 801CB050
  c->r[5]=c->r[1]+0x00000030u; // 801CB054
  W32(c->r[1]+0x00000030u,c->r[4]); // 801CB058
L_801CB05C:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 801CB05C
  c->r[5]=c->r[3]|c->r[3]; // 801CB060
  c->r[3]=c->r[1]+0x0000002Cu; // 801CB064
  c->r[4]=c->r[1]+0x00000028u; // 801CB068
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 801CB06C
  W32(c->r[1]+0x00000028u,c->r[6]); // 801CB070
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801CB074
  c->lr=0x801CB07Cu; f_801B3A4C(c); // 801CB078
  c->r[3]=c->r[1]+0x0000005Cu; // 801CB07C
  c->r[4]=0u+0x00000000u; // 801CB080
  c->lr=0x801CB088u; f_801AB5D8(c); // 801CB084
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CB088
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CB08C
  c->r[0]=c->r[0]|0x00000204u; // 801CB090
  W32(c->r[3]+c->r[28],c->r[0]); // 801CB094
L_801CB098:;
  c->r[3]=R32(c->r[16]+0x0000012Cu); // 801CB098
  cmps(c,0,(int32_t)c->r[3],0); // 801CB09C
  if (crb(c,2)) { goto L_801CB17C; } // 801CB0A0
  c->r[4]=c->r[17]|c->r[17]; // 801CB0A4
  c->lr=0x801CB0ACu; f_801B1B40(c); // 801CB0A8
  cmps(c,0,(int32_t)c->r[3],0); // 801CB0AC
  if (crb(c,2)) { goto L_801CB17C; } // 801CB0B0
  c->r[0]=R32(c->r[16]+0x00000168u); // 801CB0B4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB0B8
  if (crb(c,2)) { goto L_801CB0D0; } // 801CB0BC
  c->r[0]=c->r[0]+c->r[23]; // 801CB0C0
  c->r[3]=c->r[1]+0x00000024u; // 801CB0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB0C8
  goto L_801CB0F4; // 801CB0CC
L_801CB0D0:;
  c->r[0]=R32(c->r[15]+0x0000003Cu); // 801CB0D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CB0D4
  if (crb(c,2)) { goto L_801CB0E4; } // 801CB0D8
  c->r[3]=c->r[15]+c->r[0]; // 801CB0DC
  goto L_801CB0E8; // 801CB0E0
L_801CB0E4:;
  c->r[3]=0u+0x00000000u; // 801CB0E4
L_801CB0E8:;
  c->r[0]=c->r[3]+0x00000020u; // 801CB0E8
  c->r[3]=c->r[1]+0x00000020u; // 801CB0EC
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CB0F0
L_801CB0F4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CB0F4
  W32(c->r[1]+0x00000058u,c->r[0]); // 801CB0F8
  c->r[0]=R32(c->r[16]+0x00000158u); // 801CB0FC
  cmps(c,0,(int32_t)c->r[0],0); // 801CB100
  if (crb(c,2)) { goto L_801CB118; } // 801CB104
  c->r[0]=c->r[0]+c->r[22]; // 801CB108
  c->r[6]=c->r[1]+0x0000001Cu; // 801CB10C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CB110
  goto L_801CB124; // 801CB114
L_801CB118:;
  c->r[0]=c->r[15]+0x000003F0u; // 801CB118
  c->r[6]=c->r[1]+0x00000018u; // 801CB11C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CB120
L_801CB124:;
  c->r[3]=R32(c->r[16]+0x0000012Cu); // 801CB124
  c->r[5]=c->r[17]|c->r[17]; // 801CB128
  c->r[4]=c->r[1]+0x00000064u; // 801CB12C
  c->r[15]=R32(c->r[6]+0x00000000u); // 801CB130
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB134
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CB138
  c->ctr=c->r[12]; // 801CB13C
  if (true) { c->lr=0x801CB144u; dispatch(c,c->ctr); } // 801CB140
  c->r[0]=R32(c->r[1]+0x00000058u); // 801CB144
  c->r[5]=c->r[3]|c->r[3]; // 801CB148
  W32(c->r[1]+0x00000014u,c->r[15]); // 801CB14C
  c->r[3]=c->r[1]+0x00000014u; // 801CB150
  c->r[4]=c->r[1]+0x00000010u; // 801CB154
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CB158
  c->lr=0x801CB160u; f_801B2200(c); // 801CB15C
  c->r[3]=c->r[1]+0x00000058u; // 801CB160
  c->r[4]=0u+0x00000000u; // 801CB164
  c->lr=0x801CB16Cu; f_801AB5BC(c); // 801CB168
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CB16C
  c->r[0]=R32(c->r[3]+c->r[28]); // 801CB170
  c->r[0]=c->r[0]|0x00000108u; // 801CB174
  W32(c->r[3]+c->r[28],c->r[0]); // 801CB178
L_801CB17C:;
  c->r[28]=c->r[28]+0x00000004u; // 801CB17C
  c->r[27]=c->r[27]+0x00000104u; // 801CB180
  c->r[26]=c->r[26]+0x00000064u; // 801CB184
  c->r[25]=c->r[25]+0x00000248u; // 801CB188
  c->r[24]=c->r[24]+0x00000040u; // 801CB18C
  c->r[23]=c->r[23]+0x00000080u; // 801CB190
  c->r[22]=c->r[22]+0x00000028u; // 801CB194
  c->r[17]=c->r[17]+0x00000001u; // 801CB198
L_801CB19C:;
  c->r[0]=R32(c->r[1]+0x00000204u); // 801CB19C
  cmpu(c,0,c->r[17],c->r[0]); // 801CB1A0
  if (crb(c,0)) { IRQCHK(c); goto L_801CABA4; } // 801CB1A4
  c->r[3]=R32(c->r[16]+0x000000D4u); // 801CB1A8
  cmps(c,0,(int32_t)c->r[3],0); // 801CB1AC
  if (crb(c,2)) { goto L_801CB1EC; } // 801CB1B0
  c->r[0]=R16(c->r[16]+0x000000DAu); // 801CB1B4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801CB1B8
  if (crb(c,2)) { goto L_801CB1EC; } // 801CB1BC
  c->r[0]=R8(c->r[16]+0x000000D8u); // 801CB1C0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CB1C4
  if (crb(c,2)) { goto L_801CB1EC; } // 801CB1C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB1CC
  c->r[5]=c->r[16]|c->r[16]; // 801CB1D0
  c->r[6]=R32(c->r[1]+0x00000008u); // 801CB1D4
  c->r[4]=0u+0x00000004u; // 801CB1D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CB1DC
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 801CB1E0
  c->ctr=c->r[12]; // 801CB1E4
  if (true) { c->lr=0x801CB1ECu; dispatch(c,c->ctr); } // 801CB1E8
L_801CB1EC:;
  c->r[11]=c->r[1]+0x00000250u; // 801CB1EC
  c->lr=0x801CB1F4u; f_80109F50(c); // 801CB1F0
  c->r[0]=R32(c->r[1]+0x00000254u); // 801CB1F4
  c->lr=c->r[0]; // 801CB1F8
  c->r[1]=c->r[1]+0x00000250u; // 801CB1FC
  return; // 801CB200
}

// G3dProc__Q34nw4r3g3d6ScnMdlFUlUlPv
void f_801CB204(Ctx* __restrict c) {
  trace_call(0x801CB204u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB204
  c->r[0]=c->lr; // 801CB208
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CB20C
  c->r[11]=c->r[1]+0x00000040u; // 801CB210
  c->lr=0x801CB218u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB214
  cmpu(c,0,c->r[4],0x00000009u); // 801CB218
  c->r[29]=c->r[3]|c->r[3]; // 801CB21C
  c->r[30]=c->r[5]|c->r[5]; // 801CB220
  c->r[31]=c->r[6]|c->r[6]; // 801CB224
  if (!crb(c,0)) { goto L_801CB24C; } // 801CB228
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801CB22C
  c->r[6]=0u+0x00000001u; // 801CB230
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801CB234
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 801CB238
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 801CB23C
  if (crb(c,2)) { goto L_801CB24C; } // 801CB240
  c->r[0]=0u+0x00000001u; // 801CB244
  goto L_801CB250; // 801CB248
L_801CB24C:;
  c->r[0]=0u+0x00000000u; // 801CB24C
L_801CB250:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CB250
  if (!crb(c,2)) { goto L_801CB6A0; } // 801CB254
  cmps(c,0,(int32_t)c->r[4],6); // 801CB258
  if (crb(c,2)) { goto L_801CB438; } // 801CB25C
  if (!crb(c,0)) { goto L_801CB28C; } // 801CB260
  cmps(c,0,(int32_t)c->r[4],3); // 801CB264
  if (crb(c,2)) { goto L_801CB664; } // 801CB268
  if (!crb(c,0)) { goto L_801CB280; } // 801CB26C
  cmps(c,0,(int32_t)c->r[4],1); // 801CB270
  if (crb(c,2)) { goto L_801CB2C4; } // 801CB274
  if (!crb(c,0)) { goto L_801CB410; } // 801CB278
  goto L_801CB690; // 801CB27C
L_801CB280:;
  cmps(c,0,(int32_t)c->r[4],5); // 801CB280
  if (!crb(c,0)) { goto L_801CB2B0; } // 801CB284
  goto L_801CB424; // 801CB288
L_801CB28C:;
  c->r[5]=0u+0x00010000u; // 801CB28C
  c->r[0]=c->r[5]+0x00000001u; // 801CB290
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801CB294
  if (crb(c,2)) { goto L_801CB648; } // 801CB298
  if (!crb(c,0)) { goto L_801CB690; } // 801CB29C
  cmps(c,0,(int32_t)c->r[4],8); // 801CB2A0
  if (crb(c,2)) { goto L_801CB620; } // 801CB2A4
  if (!crb(c,0)) { goto L_801CB690; } // 801CB2A8
  goto L_801CB52C; // 801CB2AC
L_801CB2B0:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB2B0
  c->r[4]=c->r[30]|c->r[30]; // 801CB2B4
  c->r[5]=c->r[31]|c->r[31]; // 801CB2B8
  c->lr=0x801CB2C0u; f_801C7ED0(c); // 801CB2BC
  goto L_801CB6A0; // 801CB2C0
L_801CB2C4:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB2C4
  c->r[4]=c->r[30]|c->r[30]; // 801CB2C8
  c->r[5]=c->r[31]|c->r[31]; // 801CB2CC
  c->lr=0x801CB2D4u; f_801C7C74(c); // 801CB2D0
  c->r[3]=R32(c->r[29]+0x0000013Cu); // 801CB2D4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801CB2D8
  if (!crb(c,2)) { goto L_801CB378; } // 801CB2DC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CB2E0
  if (crb(c,2)) { goto L_801CB378; } // 801CB2E4
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801CB2E8
  c->r[3]=c->r[1]+0x0000001Cu; // 801CB2EC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CB2F0
  c->lr=0x801CB2F8u; f_801A9AF8(c); // 801CB2F4
  c->r[0]=R32(c->r[29]+0x00000148u); // 801CB2F8
  c->r[26]=c->r[3]|c->r[3]; // 801CB2FC
  cmps(c,0,(int32_t)c->r[0],0); // 801CB300
  if (crb(c,2)) { goto L_801CB36C; } // 801CB304
  cmps(c,0,(int32_t)c->r[3],0); // 801CB308
  c->r[25]=0u+0x00000000u; // 801CB30C
  if (crb(c,2)) { goto L_801CB36C; } // 801CB310
  c->r[27]=0u+0x00000000u; // 801CB314
  c->r[28]=0u+0x00000001u; // 801CB318
  goto L_801CB364; // 801CB31C
L_801CB320:;
  c->r[4]=c->r[25]|c->r[25]; // 801CB320
  c->r[3]=c->r[1]+0x0000001Cu; // 801CB324
  c->lr=0x801CB32Cu; f_801A9AA4(c); // 801CB328
  cmps(c,0,(int32_t)c->r[3],0); // 801CB32C
  if (crb(c,2)) { goto L_801CB340; } // 801CB330
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CB334
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 801CB338
  goto L_801CB344; // 801CB33C
L_801CB340:;
  c->r[0]=0u+0x00000000u; // 801CB340
L_801CB344:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CB344
  if (crb(c,2)) { goto L_801CB358; } // 801CB348
  c->r[3]=R32(c->r[29]+0x00000148u); // 801CB34C
  W8(c->r[3]+c->r[25],c->r[28]); // 801CB350
  goto L_801CB360; // 801CB354
L_801CB358:;
  c->r[3]=R32(c->r[29]+0x00000148u); // 801CB358
  W8(c->r[3]+c->r[25],c->r[27]); // 801CB35C
L_801CB360:;
  c->r[25]=c->r[25]+0x00000001u; // 801CB360
L_801CB364:;
  cmpu(c,0,c->r[25],c->r[26]); // 801CB364
  if (crb(c,0)) { IRQCHK(c); goto L_801CB320; } // 801CB368
L_801CB36C:;
  c->r[0]=R32(c->r[29]+0x0000013Cu); // 801CB36C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CB370
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 801CB374
L_801CB378:;
  c->r[5]=R32(c->r[29]+0x00000128u); // 801CB378
  cmps(c,0,(int32_t)c->r[5],0); // 801CB37C
  if (crb(c,2)) { goto L_801CB3C8; } // 801CB380
  c->r[0]=R32(c->r[29]+0x00000148u); // 801CB384
  cmps(c,0,(int32_t)c->r[0],0); // 801CB388
  if (crb(c,2)) { goto L_801CB3B4; } // 801CB38C
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801CB390
  c->r[4]=c->r[1]+0x00000014u; // 801CB394
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB398
  c->r[3]=R32(c->r[29]+0x00000148u); // 801CB39C
  c->lr=0x801CB3A4u; f_801B1940(c); // 801CB3A0
  c->r[0]=R32(c->r[29]+0x0000013Cu); // 801CB3A4
  c->r[0]=c->r[0]|0x00000001u; // 801CB3A8
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 801CB3AC
  goto L_801CB3C8; // 801CB3B0
L_801CB3B4:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801CB3B4
  c->r[4]=c->r[5]|c->r[5]; // 801CB3B8
  c->r[3]=c->r[1]+0x00000018u; // 801CB3BC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CB3C0
  c->lr=0x801CB3C8u; f_801B1884(c); // 801CB3C4
L_801CB3C8:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CB3C8
  cmps(c,0,(int32_t)c->r[3],0); // 801CB3CC
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB3D0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801CB3D4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CB3D8
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB3DC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801CB3E0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CB3E4
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB3E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB3EC
  c->r[5]=c->r[29]|c->r[29]; // 801CB3F0
  c->r[6]=c->r[30]|c->r[30]; // 801CB3F4
  c->r[7]=c->r[31]|c->r[31]; // 801CB3F8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CB3FC
  c->r[4]=0u+0x00000004u; // 801CB400
  c->ctr=c->r[12]; // 801CB404
  if (true) { c->lr=0x801CB40Cu; dispatch(c,c->ctr); } // 801CB408
  goto L_801CB6A0; // 801CB40C
L_801CB410:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB410
  c->r[4]=c->r[30]|c->r[30]; // 801CB414
  c->r[5]=c->r[31]|c->r[31]; // 801CB418
  c->lr=0x801CB420u; f_801CAA94(c); // 801CB41C
  goto L_801CB6A0; // 801CB420
L_801CB424:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB424
  c->r[4]=c->r[30]|c->r[30]; // 801CB428
  c->r[5]=c->r[31]|c->r[31]; // 801CB42C
  c->lr=0x801CB434u; f_801C7F04(c); // 801CB430
  goto L_801CB6A0; // 801CB434
L_801CB438:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801CB438
  cmps(c,0,(int32_t)c->r[4],0); // 801CB43C
  if (crb(c,2)) { goto L_801CB480; } // 801CB440
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801CB444
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801CB448
  if (crb(c,2)) { goto L_801CB480; } // 801CB44C
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801CB450
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CB454
  if (crb(c,2)) { goto L_801CB480; } // 801CB458
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CB45C
  c->r[3]=c->r[4]|c->r[4]; // 801CB460
  c->r[5]=c->r[29]|c->r[29]; // 801CB464
  c->r[6]=c->r[30]|c->r[30]; // 801CB468
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CB46C
  c->r[7]=c->r[31]|c->r[31]; // 801CB470
  c->r[4]=0u+0x00000001u; // 801CB474
  c->ctr=c->r[12]; // 801CB478
  if (true) { c->lr=0x801CB480u; dispatch(c,c->ctr); } // 801CB47C
L_801CB480:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CB480
  if (crb(c,2)) { goto L_801CB490; } // 801CB484
  c->r[25]=R32(c->r[31]+0x00000000u); // 801CB488
  goto L_801CB494; // 801CB48C
L_801CB490:;
  c->r[25]=R32(c->r[29]+0x00000118u); // 801CB490
L_801CB494:;
  c->r[26]=R32(c->r[29]+0x00000110u); // 801CB494
  c->r[3]=c->r[29]|c->r[29]; // 801CB498
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801CB49C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CB4A0
  c->lr=0x801CB4A8u; f_801C95A8(c); // 801CB4A4
  c->r[28]=c->r[3]|c->r[3]; // 801CB4A8
  c->r[3]=c->r[29]|c->r[29]; // 801CB4AC
  c->lr=0x801CB4B4u; f_801C9574(c); // 801CB4B0
  c->r[27]=c->r[3]|c->r[3]; // 801CB4B4
  c->r[3]=c->r[29]|c->r[29]; // 801CB4B8
  c->lr=0x801CB4C0u; f_801C9550(c); // 801CB4BC
  c->r[4]=c->r[3]|c->r[3]; // 801CB4C0
  c->r[5]=c->r[27]|c->r[27]; // 801CB4C4
  c->r[6]=c->r[28]|c->r[28]; // 801CB4C8
  c->r[7]=c->r[26]|c->r[26]; // 801CB4CC
  c->r[10]=c->r[25]|c->r[25]; // 801CB4D0
  c->r[3]=c->r[1]+0x00000010u; // 801CB4D4
  c->r[9]=c->r[29]+0x00000144u; // 801CB4D8
  c->r[8]=0u+0x00000000u; // 801CB4DC
  c->lr=0x801CB4E4u; f_801C0140(c); // 801CB4E0
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CB4E4
  cmps(c,0,(int32_t)c->r[3],0); // 801CB4E8
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB4EC
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801CB4F0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801CB4F4
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB4F8
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801CB4FC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CB500
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB504
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB508
  c->r[5]=c->r[29]|c->r[29]; // 801CB50C
  c->r[6]=c->r[30]|c->r[30]; // 801CB510
  c->r[7]=c->r[31]|c->r[31]; // 801CB514
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CB518
  c->r[4]=0u+0x00000004u; // 801CB51C
  c->ctr=c->r[12]; // 801CB520
  if (true) { c->lr=0x801CB528u; dispatch(c,c->ctr); } // 801CB524
  goto L_801CB6A0; // 801CB528
L_801CB52C:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801CB52C
  cmps(c,0,(int32_t)c->r[4],0); // 801CB530
  if (crb(c,2)) { goto L_801CB574; } // 801CB534
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801CB538
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801CB53C
  if (crb(c,2)) { goto L_801CB574; } // 801CB540
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801CB544
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CB548
  if (crb(c,2)) { goto L_801CB574; } // 801CB54C
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CB550
  c->r[3]=c->r[4]|c->r[4]; // 801CB554
  c->r[5]=c->r[29]|c->r[29]; // 801CB558
  c->r[6]=c->r[30]|c->r[30]; // 801CB55C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CB560
  c->r[7]=c->r[31]|c->r[31]; // 801CB564
  c->r[4]=0u+0x00000001u; // 801CB568
  c->ctr=c->r[12]; // 801CB56C
  if (true) { c->lr=0x801CB574u; dispatch(c,c->ctr); } // 801CB570
L_801CB574:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CB574
  if (crb(c,2)) { goto L_801CB584; } // 801CB578
  c->r[25]=R32(c->r[31]+0x00000000u); // 801CB57C
  goto L_801CB588; // 801CB580
L_801CB584:;
  c->r[25]=R32(c->r[29]+0x00000118u); // 801CB584
L_801CB588:;
  c->r[26]=R32(c->r[29]+0x00000114u); // 801CB588
  c->r[3]=c->r[29]|c->r[29]; // 801CB58C
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801CB590
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CB594
  c->lr=0x801CB59Cu; f_801C95A8(c); // 801CB598
  c->r[27]=c->r[3]|c->r[3]; // 801CB59C
  c->r[3]=c->r[29]|c->r[29]; // 801CB5A0
  c->lr=0x801CB5A8u; f_801C9574(c); // 801CB5A4
  c->r[28]=c->r[3]|c->r[3]; // 801CB5A8
  c->r[3]=c->r[29]|c->r[29]; // 801CB5AC
  c->lr=0x801CB5B4u; f_801C9550(c); // 801CB5B0
  c->r[4]=c->r[3]|c->r[3]; // 801CB5B4
  c->r[5]=c->r[28]|c->r[28]; // 801CB5B8
  c->r[6]=c->r[27]|c->r[27]; // 801CB5BC
  c->r[8]=c->r[26]|c->r[26]; // 801CB5C0
  c->r[10]=c->r[25]|c->r[25]; // 801CB5C4
  c->r[3]=c->r[1]+0x0000000Cu; // 801CB5C8
  c->r[9]=c->r[29]+0x00000144u; // 801CB5CC
  c->r[7]=0u+0x00000000u; // 801CB5D0
  c->lr=0x801CB5D8u; f_801C0140(c); // 801CB5D4
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CB5D8
  cmps(c,0,(int32_t)c->r[3],0); // 801CB5DC
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB5E0
  c->r[0]=R16(c->r[29]+0x000000DAu); // 801CB5E4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801CB5E8
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB5EC
  c->r[0]=R8(c->r[29]+0x000000D8u); // 801CB5F0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CB5F4
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB5F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB5FC
  c->r[5]=c->r[29]|c->r[29]; // 801CB600
  c->r[6]=c->r[30]|c->r[30]; // 801CB604
  c->r[7]=c->r[31]|c->r[31]; // 801CB608
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CB60C
  c->r[4]=0u+0x00000004u; // 801CB610
  c->ctr=c->r[12]; // 801CB614
  if (true) { c->lr=0x801CB61Cu; dispatch(c,c->ctr); } // 801CB618
  goto L_801CB6A0; // 801CB61C
L_801CB620:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB620
  c->lr=0x801CB628u; f_801C9498(c); // 801CB624
  c->r[3]=R32(c->r[29]+0x00000138u); // 801CB628
  cmps(c,0,(int32_t)c->r[3],0); // 801CB62C
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB630
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB634
  c->r[12]=R32(c->r[12]+0x00000024u); // 801CB638
  c->ctr=c->r[12]; // 801CB63C
  if (true) { c->lr=0x801CB644u; dispatch(c,c->ctr); } // 801CB640
  goto L_801CB6A0; // 801CB644
L_801CB648:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801CB648
  c->r[3]=c->r[29]|c->r[29]; // 801CB64C
  c->r[4]=c->r[31]|c->r[31]; // 801CB650
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CB654
  c->ctr=c->r[12]; // 801CB658
  if (true) { c->lr=0x801CB660u; dispatch(c,c->ctr); } // 801CB65C
  goto L_801CB6A0; // 801CB660
L_801CB664:;
  c->r[4]=R32(c->r[3]+0x00000138u); // 801CB664
  cmps(c,0,(int32_t)c->r[4],0); // 801CB668
  if (crb(c,2)) { goto L_801CB6A0; } // 801CB66C
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801CB670
  c->r[3]=c->r[1]+0x00000008u; // 801CB674
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CB678
  c->r[5]=R32(c->r[29]+0x00000178u); // 801CB67C
  c->r[6]=R32(c->r[29]+0x0000017Cu); // 801CB680
  c->r[7]=R32(c->r[29]+0x00000180u); // 801CB684
  c->lr=0x801CB68Cu; f_801CE7E0(c); // 801CB688
  goto L_801CB6A0; // 801CB68C
L_801CB690:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB690
  c->r[5]=c->r[30]|c->r[30]; // 801CB694
  c->r[6]=c->r[31]|c->r[31]; // 801CB698
  c->lr=0x801CB6A0u; f_801C515C(c); // 801CB69C
L_801CB6A0:;
  c->r[11]=c->r[1]+0x00000040u; // 801CB6A0
  c->lr=0x801CB6A8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB6A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CB6A8
  c->lr=c->r[0]; // 801CB6AC
  c->r[1]=c->r[1]+0x00000040u; // 801CB6B0
  return; // 801CB6B4
}

// SetScnObjOption__Q34nw4r3g3d6ScnMdlFUlUl
void f_801CB6B8(Ctx* __restrict c) {
  trace_call(0x801CB6B8u);
  c->r[6]=0u+0x00030000u; // 801CB6B8
  c->r[0]=c->r[6]+0x00000001u; // 801CB6BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801CB6C0
  if (crb(c,2)) { goto L_801CB6CC; } // 801CB6C4
  goto L_801CB6F4; // 801CB6C8
L_801CB6CC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CB6CC
  if (crb(c,2)) { goto L_801CB6E4; } // 801CB6D0
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 801CB6D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CB6D8
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 801CB6DC
  goto L_801CB6F8; // 801CB6E0
L_801CB6E4:;
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 801CB6E4
  c->r[0]=c->r[0]|0x00000002u; // 801CB6E8
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 801CB6EC
  goto L_801CB6F8; // 801CB6F0
L_801CB6F4:;
  f_801C8AE0(c); return; // 801CB6F4
L_801CB6F8:;
  c->r[3]=0u+0x00000001u; // 801CB6F8
  return; // 801CB6FC
}

// GetScnObjOption__Q34nw4r3g3d6ScnMdlCFUlPUl
void f_801CB700(Ctx* __restrict c) {
  trace_call(0x801CB700u);
  cmps(c,0,(int32_t)c->r[5],0); // 801CB700
  if (!crb(c,2)) { goto L_801CB710; } // 801CB704
  c->r[3]=0u+0x00000000u; // 801CB708
  return; // 801CB70C
L_801CB710:;
  c->r[6]=0u+0x00030000u; // 801CB710
  c->r[0]=c->r[6]+0x00000001u; // 801CB714
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801CB718
  if (crb(c,2)) { goto L_801CB724; } // 801CB71C
  goto L_801CB73C; // 801CB720
L_801CB724:;
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 801CB724
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801CB728
  c->r[0]=cntlz(c->r[0]); // 801CB72C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CB730
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CB734
  goto L_801CB740; // 801CB738
L_801CB73C:;
  f_801C8B28(c); return; // 801CB73C
L_801CB740:;
  c->r[3]=0u+0x00000001u; // 801CB740
  return; // 801CB744
}

// InitBuffer__Q34nw4r3g3d6ScnMdlFv
void f_801CB748(Ctx* __restrict c) {
  trace_call(0x801CB748u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB748
  c->r[0]=c->lr; // 801CB74C
  W32(c->r[1]+0x00000094u,c->r[0]); // 801CB750
  c->r[11]=c->r[1]+0x00000090u; // 801CB754
  c->lr=0x801CB75Cu; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB758
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801CB75C
  c->r[16]=c->r[3]|c->r[3]; // 801CB760
  c->r[3]=c->r[1]+0x0000004Cu; // 801CB764
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801CB768
  c->lr=0x801CB770u; f_801AA050(c); // 801CB76C
  c->r[30]=c->r[3]|c->r[3]; // 801CB770
  c->r[3]=c->r[1]+0x0000004Cu; // 801CB774
  c->lr=0x801CB77Cu; f_801A9AF8(c); // 801CB778
  c->r[0]=R32(c->r[16]+0x00000148u); // 801CB77C
  c->r[19]=c->r[3]|c->r[3]; // 801CB780
  cmps(c,0,(int32_t)c->r[0],0); // 801CB784
  if (crb(c,2)) { goto L_801CB7F0; } // 801CB788
  cmps(c,0,(int32_t)c->r[3],0); // 801CB78C
  c->r[20]=0u+0x00000000u; // 801CB790
  if (crb(c,2)) { goto L_801CB7F0; } // 801CB794
  c->r[17]=0u+0x00000000u; // 801CB798
  c->r[18]=0u+0x00000001u; // 801CB79C
  goto L_801CB7E8; // 801CB7A0
L_801CB7A4:;
  c->r[4]=c->r[20]|c->r[20]; // 801CB7A4
  c->r[3]=c->r[1]+0x0000004Cu; // 801CB7A8
  c->lr=0x801CB7B0u; f_801A9AA4(c); // 801CB7AC
  cmps(c,0,(int32_t)c->r[3],0); // 801CB7B0
  if (crb(c,2)) { goto L_801CB7C4; } // 801CB7B4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CB7B8
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 801CB7BC
  goto L_801CB7C8; // 801CB7C0
L_801CB7C4:;
  c->r[0]=0u+0x00000000u; // 801CB7C4
L_801CB7C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CB7C8
  if (crb(c,2)) { goto L_801CB7DC; } // 801CB7CC
  c->r[3]=R32(c->r[16]+0x00000148u); // 801CB7D0
  W8(c->r[3]+c->r[20],c->r[18]); // 801CB7D4
  goto L_801CB7E4; // 801CB7D8
L_801CB7DC:;
  c->r[3]=R32(c->r[16]+0x00000148u); // 801CB7DC
  W8(c->r[3]+c->r[20],c->r[17]); // 801CB7E0
L_801CB7E4:;
  c->r[20]=c->r[20]+0x00000001u; // 801CB7E4
L_801CB7E8:;
  cmpu(c,0,c->r[20],c->r[19]); // 801CB7E8
  if (crb(c,0)) { IRQCHK(c); goto L_801CB7A4; } // 801CB7EC
L_801CB7F0:;
  c->r[17]=0u+0x00000000u; // 801CB7F0
  c->r[29]=0u+0x00000000u; // 801CB7F4
  c->r[28]=0u+0x00000000u; // 801CB7F8
  c->r[27]=0u+0x00000000u; // 801CB7FC
  c->r[26]=0u+0x00000000u; // 801CB800
  c->r[25]=0u+0x00000000u; // 801CB804
  c->r[24]=0u+0x00000000u; // 801CB808
  c->r[23]=0u+0x00000000u; // 801CB80C
  c->r[22]=0u+0x00000000u; // 801CB810
  c->r[21]=0u+0x00000000u; // 801CB814
  c->r[20]=0u+0x00000000u; // 801CB818
  c->r[19]=0u+0x00000000u; // 801CB81C
  c->r[18]=0u+0x00000000u; // 801CB820
  c->r[31]=0u+0x00000000u; // 801CB824
  goto L_801CBADC; // 801CB828
L_801CB82C:;
  c->r[4]=c->r[17]|c->r[17]; // 801CB82C
  c->r[3]=c->r[1]+0x0000004Cu; // 801CB830
  c->lr=0x801CB838u; f_801A9FFC(c); // 801CB834
  W32(c->r[1]+0x00000048u,c->r[3]); // 801CB838
  c->r[3]=R32(c->r[16]+0x00000140u); // 801CB83C
  W32(c->r[3]+c->r[29],c->r[31]); // 801CB840
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 801CB844
  cmps(c,0,(int32_t)c->r[0],0); // 801CB848
  if (crb(c,2)) { goto L_801CB86C; } // 801CB84C
  c->r[4]=R32(c->r[1]+0x00000048u); // 801CB850
  c->r[3]=c->r[1]+0x00000044u; // 801CB854
  c->r[0]=c->r[4]+0x00000040u; // 801CB858
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CB85C
  c->r[0]=R32(c->r[16]+0x0000014Cu); // 801CB860
  c->r[4]=c->r[0]+c->r[28]; // 801CB864
  c->lr=0x801CB86Cu; f_801AB840(c); // 801CB868
L_801CB86C:;
  c->r[0]=R32(c->r[16]+0x00000150u); // 801CB86C
  cmps(c,0,(int32_t)c->r[0],0); // 801CB870
  if (crb(c,2)) { goto L_801CB894; } // 801CB874
  c->r[4]=R32(c->r[1]+0x00000048u); // 801CB878
  c->r[3]=c->r[1]+0x00000040u; // 801CB87C
  c->r[0]=c->r[4]+0x00000144u; // 801CB880
  W32(c->r[1]+0x00000040u,c->r[0]); // 801CB884
  c->r[0]=R32(c->r[16]+0x00000150u); // 801CB888
  c->r[4]=c->r[0]+c->r[27]; // 801CB88C
  c->lr=0x801CB894u; f_801AB974(c); // 801CB890
L_801CB894:;
  c->r[0]=R32(c->r[16]+0x00000154u); // 801CB894
  cmps(c,0,(int32_t)c->r[0],0); // 801CB898
  if (crb(c,2)) { goto L_801CB8BC; } // 801CB89C
  c->r[4]=R32(c->r[1]+0x00000048u); // 801CB8A0
  c->r[3]=c->r[1]+0x0000003Cu; // 801CB8A4
  c->r[0]=c->r[4]+0x000001A8u; // 801CB8A8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801CB8AC
  c->r[0]=R32(c->r[16]+0x00000154u); // 801CB8B0
  c->r[4]=c->r[0]+c->r[26]; // 801CB8B4
  c->lr=0x801CB8BCu; f_801AB9FC(c); // 801CB8B8
L_801CB8BC:;
  c->r[0]=R32(c->r[16]+0x00000158u); // 801CB8BC
  cmps(c,0,(int32_t)c->r[0],0); // 801CB8C0
  if (crb(c,2)) { goto L_801CB8E4; } // 801CB8C4
  c->r[4]=R32(c->r[1]+0x00000048u); // 801CB8C8
  c->r[3]=c->r[1]+0x00000038u; // 801CB8CC
  c->r[0]=c->r[4]+0x000003F0u; // 801CB8D0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801CB8D4
  c->r[0]=R32(c->r[16]+0x00000158u); // 801CB8D8
  c->r[4]=c->r[0]+c->r[25]; // 801CB8DC
  c->lr=0x801CB8E4u; f_801AC9C4(c); // 801CB8E0
L_801CB8E4:;
  c->r[0]=R32(c->r[16]+0x0000015Cu); // 801CB8E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB8E8
  if (crb(c,2)) { goto L_801CB90C; } // 801CB8EC
  c->r[4]=R32(c->r[1]+0x00000048u); // 801CB8F0
  c->r[3]=c->r[1]+0x00000034u; // 801CB8F4
  c->r[0]=c->r[4]+0x00000014u; // 801CB8F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CB8FC
  c->r[0]=R32(c->r[16]+0x0000015Cu); // 801CB900
  c->r[4]=c->r[0]+c->r[24]; // 801CB904
  c->lr=0x801CB90Cu; f_801ABBFC(c); // 801CB908
L_801CB90C:;
  c->r[0]=R32(c->r[16]+0x00000160u); // 801CB90C
  cmps(c,0,(int32_t)c->r[0],0); // 801CB910
  if (crb(c,2)) { goto L_801CB934; } // 801CB914
  c->r[4]=R32(c->r[1]+0x00000048u); // 801CB918
  c->r[3]=c->r[1]+0x00000030u; // 801CB91C
  c->r[0]=c->r[4]+0x0000001Cu; // 801CB920
  W32(c->r[1]+0x00000030u,c->r[0]); // 801CB924
  c->r[0]=R32(c->r[16]+0x00000160u); // 801CB928
  c->r[4]=c->r[0]+c->r[23]; // 801CB92C
  c->lr=0x801CB934u; f_801ABD04(c); // 801CB930
L_801CB934:;
  c->r[0]=R32(c->r[16]+0x00000164u); // 801CB934
  cmps(c,0,(int32_t)c->r[0],0); // 801CB938
  if (crb(c,2)) { goto L_801CB980; } // 801CB93C
  c->r[3]=R32(c->r[1]+0x00000048u); // 801CB940
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801CB944
  cmps(c,0,(int32_t)c->r[0],0); // 801CB948
  if (crb(c,2)) { goto L_801CB958; } // 801CB94C
  c->r[0]=c->r[3]+c->r[0]; // 801CB950
  goto L_801CB95C; // 801CB954
L_801CB958:;
  c->r[0]=0u+0x00000000u; // 801CB958
L_801CB95C:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 801CB95C
  c->r[3]=c->r[1]+0x00000028u; // 801CB960
  c->r[0]=R32(c->r[16]+0x00000164u); // 801CB964
  c->r[4]=c->r[0]+c->r[22]; // 801CB968
  c->lr=0x801CB970u; f_801AB670(c); // 801CB96C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 801CB970
  c->r[3]=c->r[1]+0x0000002Cu; // 801CB974
  c->r[4]=0u+0x00000000u; // 801CB978
  c->lr=0x801CB980u; f_801AB5A0(c); // 801CB97C
L_801CB980:;
  c->r[0]=R32(c->r[16]+0x00000168u); // 801CB980
  cmps(c,0,(int32_t)c->r[0],0); // 801CB984
  if (crb(c,2)) { goto L_801CB9D0; } // 801CB988
  c->r[3]=R32(c->r[1]+0x00000048u); // 801CB98C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801CB990
  cmps(c,0,(int32_t)c->r[0],0); // 801CB994
  if (crb(c,2)) { goto L_801CB9A4; } // 801CB998
  c->r[3]=c->r[3]+c->r[0]; // 801CB99C
  goto L_801CB9A8; // 801CB9A0
L_801CB9A4:;
  c->r[3]=0u+0x00000000u; // 801CB9A4
L_801CB9A8:;
  c->r[0]=c->r[3]+0x00000020u; // 801CB9A8
  c->r[3]=c->r[1]+0x00000020u; // 801CB9AC
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CB9B0
  c->r[0]=R32(c->r[16]+0x00000168u); // 801CB9B4
  c->r[4]=c->r[0]+c->r[21]; // 801CB9B8
  c->lr=0x801CB9C0u; f_801AB6AC(c); // 801CB9BC
  W32(c->r[1]+0x00000024u,c->r[3]); // 801CB9C0
  c->r[3]=c->r[1]+0x00000024u; // 801CB9C4
  c->r[4]=0u+0x00000000u; // 801CB9C8
  c->lr=0x801CB9D0u; f_801AB5BC(c); // 801CB9CC
L_801CB9D0:;
  c->r[0]=R32(c->r[16]+0x0000016Cu); // 801CB9D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CB9D4
  if (crb(c,2)) { goto L_801CBA20; } // 801CB9D8
  c->r[3]=R32(c->r[1]+0x00000048u); // 801CB9DC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801CB9E0
  cmps(c,0,(int32_t)c->r[0],0); // 801CB9E4
  if (crb(c,2)) { goto L_801CB9F4; } // 801CB9E8
  c->r[3]=c->r[3]+c->r[0]; // 801CB9EC
  goto L_801CB9F8; // 801CB9F0
L_801CB9F4:;
  c->r[3]=0u+0x00000000u; // 801CB9F4
L_801CB9F8:;
  c->r[0]=c->r[3]+0x000000A0u; // 801CB9F8
  c->r[3]=c->r[1]+0x00000018u; // 801CB9FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CBA00
  c->r[0]=R32(c->r[16]+0x0000016Cu); // 801CBA04
  c->r[4]=c->r[0]+c->r[20]; // 801CBA08
  c->lr=0x801CBA10u; f_801AB6E8(c); // 801CBA0C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801CBA10
  c->r[3]=c->r[1]+0x0000001Cu; // 801CBA14
  c->r[4]=0u+0x00000000u; // 801CBA18
  c->lr=0x801CBA20u; f_801AB5D8(c); // 801CBA1C
L_801CBA20:;
  c->r[0]=R32(c->r[16]+0x00000170u); // 801CBA20
  cmps(c,0,(int32_t)c->r[0],0); // 801CBA24
  if (crb(c,2)) { goto L_801CBA70; } // 801CBA28
  c->r[3]=R32(c->r[1]+0x00000048u); // 801CBA2C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801CBA30
  cmps(c,0,(int32_t)c->r[0],0); // 801CBA34
  if (crb(c,2)) { goto L_801CBA44; } // 801CBA38
  c->r[3]=c->r[3]+c->r[0]; // 801CBA3C
  goto L_801CBA48; // 801CBA40
L_801CBA44:;
  c->r[3]=0u+0x00000000u; // 801CBA44
L_801CBA48:;
  c->r[0]=c->r[3]+0x000000E0u; // 801CBA48
  c->r[3]=c->r[1]+0x00000010u; // 801CBA4C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CBA50
  c->r[0]=R32(c->r[16]+0x00000170u); // 801CBA54
  c->r[4]=c->r[0]+c->r[19]; // 801CBA58
  c->lr=0x801CBA60u; f_801AB724(c); // 801CBA5C
  W32(c->r[1]+0x00000014u,c->r[3]); // 801CBA60
  c->r[3]=c->r[1]+0x00000014u; // 801CBA64
  c->r[4]=0u+0x00000000u; // 801CBA68
  c->lr=0x801CBA70u; f_801AB5F4(c); // 801CBA6C
L_801CBA70:;
  c->r[0]=R32(c->r[16]+0x00000174u); // 801CBA70
  cmps(c,0,(int32_t)c->r[0],0); // 801CBA74
  if (crb(c,2)) { goto L_801CBAA8; } // 801CBA78
  c->r[3]=c->r[1]+0x00000048u; // 801CBA7C
  c->lr=0x801CBA84u; f_801ACDD4(c); // 801CBA80
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CBA84
  c->r[3]=c->r[1]+0x00000008u; // 801CBA88
  c->r[0]=R32(c->r[16]+0x00000174u); // 801CBA8C
  c->r[4]=c->r[0]+c->r[18]; // 801CBA90
  c->lr=0x801CBA98u; f_801AB504(c); // 801CBA94
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CBA98
  c->r[3]=c->r[1]+0x0000000Cu; // 801CBA9C
  c->r[4]=0u+0x00000000u; // 801CBAA0
  c->lr=0x801CBAA8u; f_801AB568(c); // 801CBAA4
L_801CBAA8:;
  c->r[29]=c->r[29]+0x00000004u; // 801CBAA8
  c->r[28]=c->r[28]+0x00000104u; // 801CBAAC
  c->r[27]=c->r[27]+0x00000064u; // 801CBAB0
  c->r[26]=c->r[26]+0x00000248u; // 801CBAB4
  c->r[25]=c->r[25]+0x00000028u; // 801CBAB8
  c->r[24]=c->r[24]+0x00000008u; // 801CBABC
  c->r[23]=c->r[23]+0x0000000Cu; // 801CBAC0
  c->r[22]=c->r[22]+0x00000020u; // 801CBAC4
  c->r[21]=c->r[21]+0x00000080u; // 801CBAC8
  c->r[20]=c->r[20]+0x00000040u; // 801CBACC
  c->r[19]=c->r[19]+0x000000A0u; // 801CBAD0
  c->r[18]=c->r[18]+0x00000200u; // 801CBAD4
  c->r[17]=c->r[17]+0x00000001u; // 801CBAD8
L_801CBADC:;
  cmpu(c,0,c->r[17],c->r[30]); // 801CBADC
  if (crb(c,0)) { IRQCHK(c); goto L_801CB82C; } // 801CBAE0
  c->r[11]=c->r[1]+0x00000090u; // 801CBAE4
  c->lr=0x801CBAECu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CBAE8
  c->r[0]=R32(c->r[1]+0x00000094u); // 801CBAEC
  c->lr=c->r[0]; // 801CBAF0
  c->r[1]=c->r[1]+0x00000090u; // 801CBAF4
  return; // 801CBAF8
}

// CleanMatBuffer__Q34nw4r3g3d6ScnMdlFUlUl
void f_801CBAFC(Ctx* __restrict c) {
  trace_call(0x801CBAFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBAFC
  c->r[0]=c->lr; // 801CBB00
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CBB04
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801CBB08
  c->r[31]=c->r[5]|c->r[5]; // 801CBB0C
  W32(c->r[1]+0x00000058u,c->r[30]); // 801CBB10
  c->r[30]=c->r[4]|c->r[4]; // 801CBB14
  W32(c->r[1]+0x00000054u,c->r[29]); // 801CBB18
  c->r[29]=c->r[3]|c->r[3]; // 801CBB1C
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801CBB20
  c->r[3]=c->r[1]+0x00000048u; // 801CBB24
  W32(c->r[1]+0x00000048u,c->r[0]); // 801CBB28
  c->lr=0x801CBB30u; f_801A9FFC(c); // 801CBB2C
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801CBB30
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801CBB34
  if (crb(c,2)) { goto L_801CBB64; } // 801CBB38
  c->r[0]=R32(c->r[29]+0x0000014Cu); // 801CBB3C
  cmps(c,0,(int32_t)c->r[0],0); // 801CBB40
  if (crb(c,2)) { goto L_801CBB64; } // 801CBB44
  c->r[0]=c->r[3]+0x00000040u; // 801CBB48
  c->r[3]=c->r[1]+0x00000044u; // 801CBB4C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CBB50
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)260); // 801CBB54
  c->r[4]=R32(c->r[29]+0x0000014Cu); // 801CBB58
  c->r[4]=c->r[4]+c->r[0]; // 801CBB5C
  c->lr=0x801CBB64u; f_801AB840(c); // 801CBB60
L_801CBB64:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801CBB64
  if (crb(c,2)) { goto L_801CBB98; } // 801CBB68
  c->r[0]=R32(c->r[29]+0x00000150u); // 801CBB6C
  cmps(c,0,(int32_t)c->r[0],0); // 801CBB70
  if (crb(c,2)) { goto L_801CBB98; } // 801CBB74
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 801CBB78
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)100); // 801CBB7C
  c->r[3]=c->r[1]+0x00000040u; // 801CBB80
  c->r[4]=c->r[4]+0x00000144u; // 801CBB84
  W32(c->r[1]+0x00000040u,c->r[4]); // 801CBB88
  c->r[4]=R32(c->r[29]+0x00000150u); // 801CBB8C
  c->r[4]=c->r[4]+c->r[0]; // 801CBB90
  c->lr=0x801CBB98u; f_801AB974(c); // 801CBB94
L_801CBB98:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 801CBB98
  if (crb(c,2)) { goto L_801CBBCC; } // 801CBB9C
  c->r[0]=R32(c->r[29]+0x00000154u); // 801CBBA0
  cmps(c,0,(int32_t)c->r[0],0); // 801CBBA4
  if (crb(c,2)) { goto L_801CBBCC; } // 801CBBA8
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 801CBBAC
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)584); // 801CBBB0
  c->r[3]=c->r[1]+0x0000003Cu; // 801CBBB4
  c->r[4]=c->r[4]+0x000001A8u; // 801CBBB8
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 801CBBBC
  c->r[4]=R32(c->r[29]+0x00000154u); // 801CBBC0
  c->r[4]=c->r[4]+c->r[0]; // 801CBBC4
  c->lr=0x801CBBCCu; f_801AB9FC(c); // 801CBBC8
L_801CBBCC:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 801CBBCC
  if (crb(c,2)) { goto L_801CBC00; } // 801CBBD0
  c->r[0]=R32(c->r[29]+0x00000158u); // 801CBBD4
  cmps(c,0,(int32_t)c->r[0],0); // 801CBBD8
  if (crb(c,2)) { goto L_801CBC00; } // 801CBBDC
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 801CBBE0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)40); // 801CBBE4
  c->r[3]=c->r[1]+0x00000038u; // 801CBBE8
  c->r[4]=c->r[4]+0x000003F0u; // 801CBBEC
  W32(c->r[1]+0x00000038u,c->r[4]); // 801CBBF0
  c->r[4]=R32(c->r[29]+0x00000158u); // 801CBBF4
  c->r[4]=c->r[4]+c->r[0]; // 801CBBF8
  c->lr=0x801CBC00u; f_801AC9C4(c); // 801CBBFC
L_801CBC00:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 801CBC00
  if (crb(c,2)) { goto L_801CBC34; } // 801CBC04
  c->r[0]=R32(c->r[29]+0x0000015Cu); // 801CBC08
  cmps(c,0,(int32_t)c->r[0],0); // 801CBC0C
  if (crb(c,2)) { goto L_801CBC34; } // 801CBC10
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 801CBC14
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801CBC18
  c->r[3]=c->r[1]+0x00000034u; // 801CBC1C
  c->r[4]=c->r[4]+0x00000014u; // 801CBC20
  W32(c->r[1]+0x00000034u,c->r[4]); // 801CBC24
  c->r[4]=R32(c->r[29]+0x0000015Cu); // 801CBC28
  c->r[4]=c->r[4]+c->r[0]; // 801CBC2C
  c->lr=0x801CBC34u; f_801ABBFC(c); // 801CBC30
L_801CBC34:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 801CBC34
  if (crb(c,2)) { goto L_801CBC68; } // 801CBC38
  c->r[0]=R32(c->r[29]+0x00000160u); // 801CBC3C
  cmps(c,0,(int32_t)c->r[0],0); // 801CBC40
  if (crb(c,2)) { goto L_801CBC68; } // 801CBC44
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 801CBC48
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801CBC4C
  c->r[3]=c->r[1]+0x00000030u; // 801CBC50
  c->r[4]=c->r[4]+0x0000001Cu; // 801CBC54
  W32(c->r[1]+0x00000030u,c->r[4]); // 801CBC58
  c->r[4]=R32(c->r[29]+0x00000160u); // 801CBC5C
  c->r[4]=c->r[4]+c->r[0]; // 801CBC60
  c->lr=0x801CBC68u; f_801ABD04(c); // 801CBC64
L_801CBC68:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 801CBC68
  if (crb(c,2)) { goto L_801CBCC0; } // 801CBC6C
  c->r[0]=R32(c->r[29]+0x00000164u); // 801CBC70
  cmps(c,0,(int32_t)c->r[0],0); // 801CBC74
  if (crb(c,2)) { goto L_801CBCC0; } // 801CBC78
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 801CBC7C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801CBC80
  cmps(c,0,(int32_t)c->r[0],0); // 801CBC84
  if (crb(c,2)) { goto L_801CBC94; } // 801CBC88
  c->r[0]=c->r[3]+c->r[0]; // 801CBC8C
  goto L_801CBC98; // 801CBC90
L_801CBC94:;
  c->r[0]=0u+0x00000000u; // 801CBC94
L_801CBC98:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 801CBC98
  c->r[0]=rotl(c->r[30],5)&0xFFFFFFE0u; // 801CBC9C
  c->r[3]=c->r[1]+0x00000028u; // 801CBCA0
  c->r[4]=R32(c->r[29]+0x00000164u); // 801CBCA4
  c->r[4]=c->r[4]+c->r[0]; // 801CBCA8
  c->lr=0x801CBCB0u; f_801AB670(c); // 801CBCAC
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 801CBCB0
  c->r[3]=c->r[1]+0x0000002Cu; // 801CBCB4
  c->r[4]=0u+0x00000000u; // 801CBCB8
  c->lr=0x801CBCC0u; f_801AB5A0(c); // 801CBCBC
L_801CBCC0:;
  c->r[0]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[0]); // 801CBCC0
  if (crb(c,2)) { goto L_801CBD1C; } // 801CBCC4
  c->r[0]=R32(c->r[29]+0x00000168u); // 801CBCC8
  cmps(c,0,(int32_t)c->r[0],0); // 801CBCCC
  if (crb(c,2)) { goto L_801CBD1C; } // 801CBCD0
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 801CBCD4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801CBCD8
  cmps(c,0,(int32_t)c->r[0],0); // 801CBCDC
  if (crb(c,2)) { goto L_801CBCEC; } // 801CBCE0
  c->r[3]=c->r[3]+c->r[0]; // 801CBCE4
  goto L_801CBCF0; // 801CBCE8
L_801CBCEC:;
  c->r[3]=0u+0x00000000u; // 801CBCEC
L_801CBCF0:;
  c->r[3]=c->r[3]+0x00000020u; // 801CBCF0
  c->r[0]=rotl(c->r[30],7)&0xFFFFFF80u; // 801CBCF4
  W32(c->r[1]+0x00000020u,c->r[3]); // 801CBCF8
  c->r[3]=c->r[1]+0x00000020u; // 801CBCFC
  c->r[4]=R32(c->r[29]+0x00000168u); // 801CBD00
  c->r[4]=c->r[4]+c->r[0]; // 801CBD04
  c->lr=0x801CBD0Cu; f_801AB6AC(c); // 801CBD08
  W32(c->r[1]+0x00000024u,c->r[3]); // 801CBD0C
  c->r[3]=c->r[1]+0x00000024u; // 801CBD10
  c->r[4]=0u+0x00000000u; // 801CBD14
  c->lr=0x801CBD1Cu; f_801AB5BC(c); // 801CBD18
L_801CBD1C:;
  c->r[0]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[0]); // 801CBD1C
  if (crb(c,2)) { goto L_801CBD78; } // 801CBD20
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 801CBD24
  cmps(c,0,(int32_t)c->r[0],0); // 801CBD28
  if (crb(c,2)) { goto L_801CBD78; } // 801CBD2C
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 801CBD30
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801CBD34
  cmps(c,0,(int32_t)c->r[0],0); // 801CBD38
  if (crb(c,2)) { goto L_801CBD48; } // 801CBD3C
  c->r[3]=c->r[3]+c->r[0]; // 801CBD40
  goto L_801CBD4C; // 801CBD44
L_801CBD48:;
  c->r[3]=0u+0x00000000u; // 801CBD48
L_801CBD4C:;
  c->r[3]=c->r[3]+0x000000A0u; // 801CBD4C
  c->r[0]=rotl(c->r[30],6)&0xFFFFFFC0u; // 801CBD50
  W32(c->r[1]+0x00000018u,c->r[3]); // 801CBD54
  c->r[3]=c->r[1]+0x00000018u; // 801CBD58
  c->r[4]=R32(c->r[29]+0x0000016Cu); // 801CBD5C
  c->r[4]=c->r[4]+c->r[0]; // 801CBD60
  c->lr=0x801CBD68u; f_801AB6E8(c); // 801CBD64
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801CBD68
  c->r[3]=c->r[1]+0x0000001Cu; // 801CBD6C
  c->r[4]=0u+0x00000000u; // 801CBD70
  c->lr=0x801CBD78u; f_801AB5D8(c); // 801CBD74
L_801CBD78:;
  c->r[0]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[0]); // 801CBD78
  if (crb(c,2)) { goto L_801CBDD4; } // 801CBD7C
  c->r[0]=R32(c->r[29]+0x00000170u); // 801CBD80
  cmps(c,0,(int32_t)c->r[0],0); // 801CBD84
  if (crb(c,2)) { goto L_801CBDD4; } // 801CBD88
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 801CBD8C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801CBD90
  cmps(c,0,(int32_t)c->r[0],0); // 801CBD94
  if (crb(c,2)) { goto L_801CBDA4; } // 801CBD98
  c->r[3]=c->r[3]+c->r[0]; // 801CBD9C
  goto L_801CBDA8; // 801CBDA0
L_801CBDA4:;
  c->r[3]=0u+0x00000000u; // 801CBDA4
L_801CBDA8:;
  c->r[0]=c->r[3]+0x000000E0u; // 801CBDA8
  c->r[3]=c->r[1]+0x00000010u; // 801CBDAC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CBDB0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)160); // 801CBDB4
  c->r[4]=R32(c->r[29]+0x00000170u); // 801CBDB8
  c->r[4]=c->r[4]+c->r[0]; // 801CBDBC
  c->lr=0x801CBDC4u; f_801AB724(c); // 801CBDC0
  W32(c->r[1]+0x00000014u,c->r[3]); // 801CBDC4
  c->r[3]=c->r[1]+0x00000014u; // 801CBDC8
  c->r[4]=0u+0x00000000u; // 801CBDCC
  c->lr=0x801CBDD4u; f_801AB5F4(c); // 801CBDD0
L_801CBDD4:;
  c->r[0]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[0]); // 801CBDD4
  if (crb(c,2)) { goto L_801CBE18; } // 801CBDD8
  c->r[0]=R32(c->r[29]+0x00000174u); // 801CBDDC
  cmps(c,0,(int32_t)c->r[0],0); // 801CBDE0
  if (crb(c,2)) { goto L_801CBE18; } // 801CBDE4
  c->r[3]=c->r[1]+0x0000004Cu; // 801CBDE8
  c->lr=0x801CBDF0u; f_801ACDD4(c); // 801CBDEC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CBDF0
  c->r[0]=rotl(c->r[30],9)&0xFFFFFE00u; // 801CBDF4
  c->r[3]=c->r[1]+0x00000008u; // 801CBDF8
  c->r[4]=R32(c->r[29]+0x00000174u); // 801CBDFC
  c->r[4]=c->r[4]+c->r[0]; // 801CBE00
  c->lr=0x801CBE08u; f_801AB504(c); // 801CBE04
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CBE08
  c->r[3]=c->r[1]+0x0000000Cu; // 801CBE0C
  c->r[4]=0u+0x00000000u; // 801CBE10
  c->lr=0x801CBE18u; f_801AB568(c); // 801CBE14
L_801CBE18:;
  c->r[4]=R32(c->r[29]+0x00000140u); // 801CBE18
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801CBE1C
  c->r[0]=R32(c->r[4]+c->r[3]); // 801CBE20
  c->r[0]=c->r[0]&~c->r[31]; // 801CBE24
  W32(c->r[4]+c->r[3],c->r[0]); // 801CBE28
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801CBE2C
  c->r[30]=R32(c->r[1]+0x00000058u); // 801CBE30
  c->r[29]=R32(c->r[1]+0x00000054u); // 801CBE34
  c->r[0]=R32(c->r[1]+0x00000064u); // 801CBE38
  c->lr=c->r[0]; // 801CBE3C
  c->r[1]=c->r[1]+0x00000060u; // 801CBE40
  return; // 801CBE44
}

// SetAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObjQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_801CBE48(Ctx* __restrict c) {
  trace_call(0x801CBE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBE48
  c->r[0]=c->lr; // 801CBE4C
  cmps(c,1,(int32_t)c->r[4],0); // 801CBE50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBE54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBE58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBE5C
  c->r[30]=c->r[5]|c->r[5]; // 801CBE60
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBE64
  c->r[29]=c->r[4]|c->r[4]; // 801CBE68
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CBE6C
  c->r[28]=c->r[3]|c->r[3]; // 801CBE70
  if (crb(c,6)) { goto L_801CBF88; } // 801CBE74
  c->r[0]=R32(c->r[4]+0x00000004u); // 801CBE78
  cmps(c,0,(int32_t)c->r[0],0); // 801CBE7C
  if (!crb(c,2)) { goto L_801CBF88; } // 801CBE80
  c->r[0]=c->r[5]+0xFFFFFFFBu; // 801CBE84
  cmpu(c,0,c->r[0],0x00000001u); // 801CBE88
  if (crb(c,1)) { goto L_801CBF80; } // 801CBE8C
  c->r[31]=0u+0x00000000u; // 801CBE90
  if (crb(c,6)) { goto L_801CBEC8; } // 801CBE94
  c->r[5]=0u+0x80270000u; // 801CBE98
  c->r[3]=c->r[29]|c->r[29]; // 801CBE9C
  c->r[5]=c->r[5]+0x00000C88u; // 801CBEA0
  c->r[4]=c->r[1]+0x00000008u; // 801CBEA4
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CBEA8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801CBEAC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CBEB0
  c->ctr=c->r[12]; // 801CBEB4
  if (true) { c->lr=0x801CBEBCu; dispatch(c,c->ctr); } // 801CBEB8
  cmps(c,0,(int32_t)c->r[3],0); // 801CBEBC
  if (crb(c,2)) { goto L_801CBEC8; } // 801CBEC0
  c->r[31]=0u+0x00000001u; // 801CBEC4
L_801CBEC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CBEC8
  if (crb(c,2)) { goto L_801CBED8; } // 801CBECC
  c->r[31]=c->r[29]|c->r[29]; // 801CBED0
  goto L_801CBEDC; // 801CBED4
L_801CBED8:;
  c->r[31]=0u+0x00000000u; // 801CBED8
L_801CBEDC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CBEDC
  if (crb(c,2)) { goto L_801CBF5C; } // 801CBEE0
  c->r[3]=c->r[31]|c->r[31]; // 801CBEE4
  c->r[4]=0u+0x00000004u; // 801CBEE8
  c->lr=0x801CBEF0u; f_801B7CA8(c); // 801CBEEC
  cmps(c,0,(int32_t)c->r[3],0); // 801CBEF0
  if (!crb(c,2)) { goto L_801CBF00; } // 801CBEF4
  c->r[3]=0u+0x00000000u; // 801CBEF8
  goto L_801CBF8C; // 801CBEFC
L_801CBF00:;
  c->r[4]=R32(c->r[28]+0x00000138u); // 801CBF00
  cmps(c,0,(int32_t)c->r[4],0); // 801CBF04
  if (crb(c,2)) { goto L_801CBF20; } // 801CBF08
  c->r[12]=R32(c->r[28]+0x00000000u); // 801CBF0C
  c->r[3]=c->r[28]|c->r[28]; // 801CBF10
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CBF14
  c->ctr=c->r[12]; // 801CBF18
  if (true) { c->lr=0x801CBF20u; dispatch(c,c->ctr); } // 801CBF1C
L_801CBF20:;
  W32(c->r[28]+0x00000138u,c->r[31]); // 801CBF20
  c->r[4]=0u+0x00010000u; // 801CBF24
  c->r[3]=c->r[31]|c->r[31]; // 801CBF28
  c->r[6]=c->r[28]|c->r[28]; // 801CBF2C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801CBF30
  c->r[4]=c->r[4]+0x00000002u; // 801CBF34
  c->r[5]=0u+0x00000000u; // 801CBF38
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CBF3C
  c->ctr=c->r[12]; // 801CBF40
  if (true) { c->lr=0x801CBF48u; dispatch(c,c->ctr); } // 801CBF44
  c->r[0]=R32(c->r[28]+0x00000144u); // 801CBF48
  c->r[3]=0u+0x00000001u; // 801CBF4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CBF50
  W32(c->r[28]+0x00000144u,c->r[0]); // 801CBF54
  goto L_801CBF8C; // 801CBF58
L_801CBF5C:;
  cmps(c,0,(int32_t)c->r[30],6); // 801CBF5C
  if (!crb(c,2)) { goto L_801CBF78; } // 801CBF60
  c->r[3]=c->r[28]|c->r[28]; // 801CBF64
  c->r[4]=c->r[29]|c->r[29]; // 801CBF68
  c->r[5]=c->r[30]|c->r[30]; // 801CBF6C
  c->lr=0x801CBF74u; f_801C8B68(c); // 801CBF70
  goto L_801CBF8C; // 801CBF74
L_801CBF78:;
  c->r[3]=0u+0x00000000u; // 801CBF78
  goto L_801CBF8C; // 801CBF7C
L_801CBF80:;
  c->lr=0x801CBF84u; f_801C8B68(c); // 801CBF80
  goto L_801CBF8C; // 801CBF84
L_801CBF88:;
  c->r[3]=0u+0x00000000u; // 801CBF88
L_801CBF8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBF8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBF90
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CBF94
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CBF98
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CBF9C
  c->lr=c->r[0]; // 801CBFA0
  c->r[1]=c->r[1]+0x00000020u; // 801CBFA4
  return; // 801CBFA8
}

// RemoveAnmObj__Q34nw4r3g3d6ScnMdlFPQ34nw4r3g3d6AnmObj
void f_801CBFAC(Ctx* __restrict c) {
  trace_call(0x801CBFACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBFAC
  c->r[0]=c->lr; // 801CBFB0
  cmps(c,0,(int32_t)c->r[4],0); // 801CBFB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CBFB8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801CBFBC
  c->r[31]=c->r[3]|c->r[3]; // 801CBFC0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801CBFC4
  W32(c->r[1]+0x00000034u,c->r[29]); // 801CBFC8
  W32(c->r[1]+0x00000030u,c->r[28]); // 801CBFCC
  if (!crb(c,2)) { goto L_801CBFDC; } // 801CBFD0
  c->r[3]=0u+0x00000000u; // 801CBFD4
  goto L_801CC184; // 801CBFD8
L_801CBFDC:;
  c->r[0]=R32(c->r[3]+0x00000138u); // 801CBFDC
  cmpu(c,0,c->r[4],c->r[0]); // 801CBFE0
  if (!crb(c,2)) { goto L_801CC180; } // 801CBFE4
  c->r[3]=c->r[0]|c->r[0]; // 801CBFE8
  c->r[4]=0u+0x00010000u; // 801CBFEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CBFF0
  c->r[6]=c->r[31]|c->r[31]; // 801CBFF4
  c->r[4]=c->r[4]+0x00000003u; // 801CBFF8
  c->r[5]=0u+0x00000000u; // 801CBFFC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CC000
  c->ctr=c->r[12]; // 801CC004
  if (true) { c->lr=0x801CC00Cu; dispatch(c,c->ctr); } // 801CC008
  c->r[0]=R32(c->r[31]+0x00000184u); // 801CC00C
  c->r[3]=0u+0x00000000u; // 801CC010
  W32(c->r[31]+0x00000138u,c->r[3]); // 801CC014
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CC018
  if (!crb(c,2)) { goto L_801CC034; } // 801CC01C
  c->r[0]=R32(c->r[31]+0x00000144u); // 801CC020
  c->r[3]=0u+0x00000001u; // 801CC024
  c->r[0]=c->r[0]|0x00000001u; // 801CC028
  W32(c->r[31]+0x00000144u,c->r[0]); // 801CC02C
  goto L_801CC184; // 801CC030
L_801CC034:;
  c->r[0]=R32(c->r[31]+0x00000178u); // 801CC034
  cmps(c,0,(int32_t)c->r[0],0); // 801CC038
  if (crb(c,2)) { goto L_801CC0A0; } // 801CC03C
  c->r[0]=R32(c->r[31]+0x000000E8u); // 801CC040
  c->r[3]=c->r[1]+0x0000001Cu; // 801CC044
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CC048
  c->lr=0x801CC050u; f_801A9C24(c); // 801CC04C
  c->r[30]=c->r[3]|c->r[3]; // 801CC050
  c->r[28]=0u+0x00000000u; // 801CC054
  c->r[29]=0u+0x00000000u; // 801CC058
  goto L_801CC098; // 801CC05C
L_801CC060:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 801CC060
  c->r[4]=c->r[28]|c->r[28]; // 801CC064
  c->r[3]=c->r[1]+0x00000018u; // 801CC068
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CC06C
  c->lr=0x801CC074u; f_801A9BD0(c); // 801CC070
  W32(c->r[1]+0x00000028u,c->r[3]); // 801CC074
  c->r[4]=R32(c->r[31]+0x00000178u); // 801CC078
  c->r[4]=R32(c->r[4]+c->r[29]); // 801CC07C
  cmpu(c,0,c->r[3],c->r[4]); // 801CC080
  if (crb(c,2)) { goto L_801CC090; } // 801CC084
  c->r[3]=c->r[1]+0x00000028u; // 801CC088
  c->lr=0x801CC090u; f_801AD164(c); // 801CC08C
L_801CC090:;
  c->r[29]=c->r[29]+0x00000004u; // 801CC090
  c->r[28]=c->r[28]+0x00000001u; // 801CC094
L_801CC098:;
  cmpu(c,0,c->r[28],c->r[30]); // 801CC098
  if (crb(c,0)) { IRQCHK(c); goto L_801CC060; } // 801CC09C
L_801CC0A0:;
  c->r[0]=R32(c->r[31]+0x0000017Cu); // 801CC0A0
  cmps(c,0,(int32_t)c->r[0],0); // 801CC0A4
  if (crb(c,2)) { goto L_801CC10C; } // 801CC0A8
  c->r[0]=R32(c->r[31]+0x000000E8u); // 801CC0AC
  c->r[3]=c->r[1]+0x00000014u; // 801CC0B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC0B4
  c->lr=0x801CC0BCu; f_801A9D50(c); // 801CC0B8
  c->r[30]=c->r[3]|c->r[3]; // 801CC0BC
  c->r[28]=0u+0x00000000u; // 801CC0C0
  c->r[29]=0u+0x00000000u; // 801CC0C4
  goto L_801CC104; // 801CC0C8
L_801CC0CC:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 801CC0CC
  c->r[4]=c->r[28]|c->r[28]; // 801CC0D0
  c->r[3]=c->r[1]+0x00000010u; // 801CC0D4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CC0D8
  c->lr=0x801CC0E0u; f_801A9CFC(c); // 801CC0DC
  W32(c->r[1]+0x00000024u,c->r[3]); // 801CC0E0
  c->r[4]=R32(c->r[31]+0x0000017Cu); // 801CC0E4
  c->r[4]=R32(c->r[4]+c->r[29]); // 801CC0E8
  cmpu(c,0,c->r[3],c->r[4]); // 801CC0EC
  if (crb(c,2)) { goto L_801CC0FC; } // 801CC0F0
  c->r[3]=c->r[1]+0x00000024u; // 801CC0F4
  c->lr=0x801CC0FCu; f_801AD234(c); // 801CC0F8
L_801CC0FC:;
  c->r[29]=c->r[29]+0x00000004u; // 801CC0FC
  c->r[28]=c->r[28]+0x00000001u; // 801CC100
L_801CC104:;
  cmpu(c,0,c->r[28],c->r[30]); // 801CC104
  if (crb(c,0)) { IRQCHK(c); goto L_801CC0CC; } // 801CC108
L_801CC10C:;
  c->r[0]=R32(c->r[31]+0x00000180u); // 801CC10C
  cmps(c,0,(int32_t)c->r[0],0); // 801CC110
  if (crb(c,2)) { goto L_801CC178; } // 801CC114
  c->r[0]=R32(c->r[31]+0x000000E8u); // 801CC118
  c->r[3]=c->r[1]+0x0000000Cu; // 801CC11C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CC120
  c->lr=0x801CC128u; f_801A9E7C(c); // 801CC124
  c->r[30]=c->r[3]|c->r[3]; // 801CC128
  c->r[28]=0u+0x00000000u; // 801CC12C
  c->r[29]=0u+0x00000000u; // 801CC130
  goto L_801CC170; // 801CC134
L_801CC138:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 801CC138
  c->r[4]=c->r[28]|c->r[28]; // 801CC13C
  c->r[3]=c->r[1]+0x00000008u; // 801CC140
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CC144
  c->lr=0x801CC14Cu; f_801A9E28(c); // 801CC148
  W32(c->r[1]+0x00000020u,c->r[3]); // 801CC14C
  c->r[4]=R32(c->r[31]+0x00000180u); // 801CC150
  c->r[4]=R32(c->r[4]+c->r[29]); // 801CC154
  cmpu(c,0,c->r[3],c->r[4]); // 801CC158
  if (crb(c,2)) { goto L_801CC168; } // 801CC15C
  c->r[3]=c->r[1]+0x00000020u; // 801CC160
  c->lr=0x801CC168u; f_801AD338(c); // 801CC164
L_801CC168:;
  c->r[29]=c->r[29]+0x00000004u; // 801CC168
  c->r[28]=c->r[28]+0x00000001u; // 801CC16C
L_801CC170:;
  cmpu(c,0,c->r[28],c->r[30]); // 801CC170
  if (crb(c,0)) { IRQCHK(c); goto L_801CC138; } // 801CC174
L_801CC178:;
  c->r[3]=0u+0x00000001u; // 801CC178
  goto L_801CC184; // 801CC17C
L_801CC180:;
  c->lr=0x801CC184u; f_801C9164(c); // 801CC180
L_801CC184:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CC184
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801CC188
  c->r[30]=R32(c->r[1]+0x00000038u); // 801CC18C
  c->r[29]=R32(c->r[1]+0x00000034u); // 801CC190
  c->r[28]=R32(c->r[1]+0x00000030u); // 801CC194
  c->lr=c->r[0]; // 801CC198
  c->r[1]=c->r[1]+0x00000040u; // 801CC19C
  return; // 801CC1A0
}

// RemoveAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_801CC1A4(Ctx* __restrict c) {
  trace_call(0x801CC1A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC1A4
  c->r[0]=c->lr; // 801CC1A8
  cmps(c,0,(int32_t)c->r[4],5); // 801CC1AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC1B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC1B4
  if (!crb(c,2)) { goto L_801CC1DC; } // 801CC1B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC1BC
  c->r[31]=R32(c->r[3]+0x00000138u); // 801CC1C0
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CC1C4
  c->r[4]=c->r[31]|c->r[31]; // 801CC1C8
  c->ctr=c->r[12]; // 801CC1CC
  if (true) { c->lr=0x801CC1D4u; dispatch(c,c->ctr); } // 801CC1D0
  c->r[3]=c->r[31]|c->r[31]; // 801CC1D4
  goto L_801CC1E0; // 801CC1D8
L_801CC1DC:;
  c->lr=0x801CC1E0u; f_801C92DC(c); // 801CC1DC
L_801CC1E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC1E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC1E4
  c->lr=c->r[0]; // 801CC1E8
  c->r[1]=c->r[1]+0x00000010u; // 801CC1EC
  return; // 801CC1F0
}

// GetAnmObj__Q34nw4r3g3d6ScnMdlFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_801CC1F4(Ctx* __restrict c) {
  trace_call(0x801CC1F4u);
  cmps(c,0,(int32_t)c->r[4],5); // 801CC1F4
  if (!crb(c,2)) { goto L_801CC204; } // 801CC1F8
  c->r[3]=R32(c->r[3]+0x00000138u); // 801CC1FC
  return; // 801CC200
L_801CC204:;
  f_801C93C8(c); return; // 801CC204
  return; // 801CC208
}

// GetAnmObj__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d12ScnMdlSimple10AnmObjType
void f_801CC20C(Ctx* __restrict c) {
  trace_call(0x801CC20Cu);
  cmps(c,0,(int32_t)c->r[4],5); // 801CC20C
  if (!crb(c,2)) { goto L_801CC21C; } // 801CC210
  c->r[3]=R32(c->r[3]+0x00000138u); // 801CC214
  return; // 801CC218
L_801CC21C:;
  f_801C9430(c); return; // 801CC21C
  return; // 801CC220
}

// __dt__Q34nw4r3g3d6ScnMdlFv
void f_801CC224(Ctx* __restrict c) {
  trace_call(0x801CC224u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC224
  c->r[0]=c->lr; // 801CC228
  cmps(c,0,(int32_t)c->r[3],0); // 801CC22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC234
  c->r[31]=c->r[3]|c->r[3]; // 801CC238
  if (crb(c,2)) { goto L_801CC274; } // 801CC23C
  c->r[4]=R32(c->r[3]+0x00000138u); // 801CC240
  c->r[5]=0u+0x802A0000u; // 801CC244
  c->r[5]=c->r[5]+0x000015E8u; // 801CC248
  cmps(c,0,(int32_t)c->r[4],0); // 801CC24C
  W32(c->r[3]+0x00000000u,c->r[5]); // 801CC250
  if (crb(c,2)) { goto L_801CC268; } // 801CC254
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC258
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CC25C
  c->ctr=c->r[12]; // 801CC260
  if (true) { c->lr=0x801CC268u; dispatch(c,c->ctr); } // 801CC264
L_801CC268:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC268
  c->r[4]=0u+0x00000000u; // 801CC26C
  c->lr=0x801CC274u; f_801C97F4(c); // 801CC270
L_801CC274:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC278
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC27C
  c->lr=c->r[0]; // 801CC280
  c->r[1]=c->r[1]+0x00000010u; // 801CC284
  return; // 801CC288
}

// IsDerivedFrom__Q34nw4r3g3d6ScnMdlCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801CC28C(Ctx* __restrict c) {
  trace_call(0x801CC28Cu);
  c->r[3]=0u+0x80270000u; // 801CC28C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CC290
  c->r[3]=c->r[3]+0x00000E50u; // 801CC294
  cmpu(c,0,c->r[0],c->r[3]); // 801CC298
  if (!crb(c,2)) { goto L_801CC2A8; } // 801CC29C
  c->r[3]=0u+0x00000001u; // 801CC2A0
  return; // 801CC2A4
L_801CC2A8:;
  c->r[3]=0u+0x80270000u; // 801CC2A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CC2AC
  c->r[3]=c->r[3]+0x00000E38u; // 801CC2B0
  cmpu(c,0,c->r[0],c->r[3]); // 801CC2B4
  if (!crb(c,2)) { goto L_801CC2C4; } // 801CC2B8
  c->r[3]=0u+0x00000001u; // 801CC2BC
  return; // 801CC2C0
L_801CC2C4:;
  c->r[3]=0u+0x80270000u; // 801CC2C4
  c->r[3]=c->r[3]+0x00000E08u; // 801CC2C8
  cmpu(c,0,c->r[0],c->r[3]); // 801CC2CC
  if (!crb(c,2)) { goto L_801CC2DC; } // 801CC2D0
  c->r[3]=0u+0x00000001u; // 801CC2D4
  return; // 801CC2D8
L_801CC2DC:;
  c->r[3]=0u+0x80270000u; // 801CC2DC
  c->r[3]=c->r[3]+0x00000DF8u; // 801CC2E0
  cmpu(c,0,c->r[0],c->r[3]); // 801CC2E4
  if (!crb(c,2)) { goto L_801CC2F4; } // 801CC2E8
  c->r[3]=0u+0x00000001u; // 801CC2EC
  return; // 801CC2F0
L_801CC2F4:;
  c->r[3]=0u+0x80270000u; // 801CC2F4
  c->r[3]=c->r[3]+0x00000CD0u; // 801CC2F8
  c->r[0]=c->r[3]-c->r[0]; // 801CC2FC
  c->r[0]=cntlz(c->r[0]); // 801CC300
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CC304
  return; // 801CC308
}

// GetTypeName__Q34nw4r3g3d6ScnMdlCFv
void f_801CC30C(Ctx* __restrict c) {
  trace_call(0x801CC30Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC30C
  c->r[0]=c->lr; // 801CC310
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC314
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC318
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CC31C
  c->ctr=c->r[12]; // 801CC320
  if (true) { c->lr=0x801CC328u; dispatch(c,c->ctr); } // 801CC324
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC328
  c->r[3]=c->r[3]+0x00000004u; // 801CC32C
  c->lr=c->r[0]; // 801CC330
  c->r[1]=c->r[1]+0x00000010u; // 801CC334
  return; // 801CC338
}

// GetTypeObj__Q34nw4r3g3d6ScnMdlCFv
void f_801CC33C(Ctx* __restrict c) {
  trace_call(0x801CC33Cu);
  c->r[3]=0u+0x80270000u; // 801CC33C
  c->r[3]=c->r[3]+0x00000E50u; // 801CC340
  return; // 801CC344
}

// fn_801CC348
void f_801CC348(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC348
  c->r[0]=c->lr; // 801CC34C
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801CC350
  cmps(c,0,(int32_t)c->r[4],0); // 801CC354
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC358
  c->r[0]=c->r[7]+0x000000F7u; // 801CC35C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CC360
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC364
  c->r[31]=0u+0x00000000u; // 801CC368
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC36C
  c->r[30]=c->r[6]|c->r[6]; // 801CC370
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC374
  c->r[29]=c->r[5]|c->r[5]; // 801CC378
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CC37C
  c->r[28]=c->r[3]|c->r[3]; // 801CC380
  if (crb(c,2)) { goto L_801CC38C; } // 801CC384
  W32(c->r[4]+0x00000000u,c->r[0]); // 801CC388
L_801CC38C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CC38C
  if (crb(c,2)) { goto L_801CC3E4; } // 801CC390
  c->r[3]=c->r[28]|c->r[28]; // 801CC394
  c->r[4]=c->r[0]|c->r[0]; // 801CC398
  c->lr=0x801CC3A0u; f_80128068(c); // 801CC39C
  cmps(c,0,(int32_t)c->r[3],0); // 801CC3A0
  c->r[31]=c->r[3]|c->r[3]; // 801CC3A4
  if (!crb(c,2)) { goto L_801CC3B4; } // 801CC3A8
  c->r[3]=0u+0x00000000u; // 801CC3AC
  goto L_801CC3E8; // 801CC3B0
L_801CC3B4:;
  if (crb(c,2)) { goto L_801CC3E4; } // 801CC3B4
  c->r[4]=c->r[28]|c->r[28]; // 801CC3B8
  c->r[6]=c->r[29]|c->r[29]; // 801CC3BC
  c->r[5]=c->r[3]+0x000000F4u; // 801CC3C0
  c->lr=0x801CC3C8u; f_801C5ED4(c); // 801CC3C4
  c->r[3]=0u+0x802A0000u; // 801CC3C8
  c->r[0]=0u+0x00000000u; // 801CC3CC
  c->r[3]=c->r[3]+0x00001630u; // 801CC3D0
  W32(c->r[31]+0x00000000u,c->r[3]); // 801CC3D4
  W32(c->r[31]+0x000000E8u,c->r[30]); // 801CC3D8
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CC3DC
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801CC3E0
L_801CC3E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC3E4
L_801CC3E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC3E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC3EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC3F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC3F4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CC3F8
  c->lr=c->r[0]; // 801CC3FC
  c->r[1]=c->r[1]+0x00000020u; // 801CC400
  return; // 801CC404
}

// fn_801CC408
void f_801CC408(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E8u,c->r[4]); // 801CC408
  return; // 801CC40C
}

// fn_801CC410
void f_801CC410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC410
  c->r[0]=c->lr; // 801CC414
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC41C
  c->r[31]=c->r[4]|c->r[4]; // 801CC420
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC424
  c->r[30]=c->r[3]|c->r[3]; // 801CC428
  c->r[0]=R32(c->r[3]+0x000000F0u); // 801CC42C
  cmps(c,0,(int32_t)c->r[0],0); // 801CC430
  if (crb(c,2)) { goto L_801CC440; } // 801CC434
  cmpu(c,0,c->r[0],c->r[4]); // 801CC438
  if (!crb(c,2)) { goto L_801CC4A4; } // 801CC43C
L_801CC440:;
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801CC440
  cmps(c,0,(int32_t)c->r[0],0); // 801CC444
  if (!crb(c,1)) { goto L_801CC494; } // 801CC448
  c->r[12]=R32(c->r[3]+0x000000E8u); // 801CC44C
  cmps(c,0,(int32_t)c->r[12],0); // 801CC450
  if (crb(c,2)) { goto L_801CC468; } // 801CC454
  c->r[3]=c->r[30]|c->r[30]; // 801CC458
  c->ctr=c->r[12]; // 801CC45C
  if (true) { c->lr=0x801CC464u; dispatch(c,c->ctr); } // 801CC460
  goto L_801CC46C; // 801CC464
L_801CC468:;
  c->r[3]=0u+0x00000000u; // 801CC468
L_801CC46C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CC46C
  if (crb(c,0)) { goto L_801CC488; } // 801CC470
  c->r[4]=R32(c->r[30]+0x000000DCu); // 801CC474
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801CC478
  c->r[0]=R32(c->r[4]+c->r[0]); // 801CC47C
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801CC480
  goto L_801CC49C; // 801CC484
L_801CC488:;
  c->r[0]=0u+0x00000000u; // 801CC488
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801CC48C
  goto L_801CC49C; // 801CC490
L_801CC494:;
  c->r[0]=0u+0x00000000u; // 801CC494
  W32(c->r[3]+0x000000ECu,c->r[0]); // 801CC498
L_801CC49C:;
  W32(c->r[30]+0x000000F0u,c->r[31]); // 801CC49C
  goto L_801CC4AC; // 801CC4A0
L_801CC4A4:;
  c->r[0]=0u+0x00000000u; // 801CC4A4
  W32(c->r[3]+0x000000F0u,c->r[0]); // 801CC4A8
L_801CC4AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC4AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC4B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC4B4
  c->lr=c->r[0]; // 801CC4B8
  c->r[1]=c->r[1]+0x00000010u; // 801CC4BC
  return; // 801CC4C0
}

// fn_801CC4C4
void f_801CC4C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC4C4
  c->r[0]=c->lr; // 801CC4C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC4CC
  c->r[11]=c->r[1]+0x00000020u; // 801CC4D0
  c->lr=0x801CC4D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CC4D4
  cmpu(c,0,c->r[4],0x00000009u); // 801CC4D8
  c->r[28]=c->r[3]|c->r[3]; // 801CC4DC
  c->r[29]=c->r[4]|c->r[4]; // 801CC4E0
  c->r[30]=c->r[5]|c->r[5]; // 801CC4E4
  c->r[31]=c->r[6]|c->r[6]; // 801CC4E8
  if (!crb(c,0)) { goto L_801CC510; } // 801CC4EC
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801CC4F0
  c->r[6]=0u+0x00000001u; // 801CC4F4
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801CC4F8
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 801CC4FC
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 801CC500
  if (crb(c,2)) { goto L_801CC510; } // 801CC504
  c->r[0]=0u+0x00000001u; // 801CC508
  goto L_801CC514; // 801CC50C
L_801CC510:;
  c->r[0]=0u+0x00000000u; // 801CC510
L_801CC514:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CC514
  if (!crb(c,2)) { goto L_801CC718; } // 801CC518
  cmps(c,0,(int32_t)c->r[4],5); // 801CC51C
  if (crb(c,2)) { goto L_801CC550; } // 801CC520
  if (!crb(c,0)) { goto L_801CC538; } // 801CC524
  cmps(c,0,(int32_t)c->r[4],3); // 801CC528
  if (crb(c,2)) { goto L_801CC704; } // 801CC52C
  if (!crb(c,0)) { goto L_801CC5F0; } // 801CC530
  goto L_801CC704; // 801CC534
L_801CC538:;
  c->r[3]=0u+0x00010000u; // 801CC538
  c->r[0]=c->r[3]+0x00000001u; // 801CC53C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801CC540
  if (!crb(c,0)) { goto L_801CC704; } // 801CC544
  goto L_801CC704; // 801CC548
  goto L_801CC704; // 801CC54C
L_801CC550:;
  c->r[3]=c->r[28]|c->r[28]; // 801CC550
  c->r[4]=0u+0x00000002u; // 801CC554
  c->lr=0x801CC55Cu; f_801CC410(c); // 801CC558
  c->r[0]=R32(c->r[28]+0x000000ECu); // 801CC55C
  cmps(c,0,(int32_t)c->r[0],0); // 801CC560
  if (crb(c,2)) { goto L_801CC718; } // 801CC564
  c->r[12]=R32(c->r[31]+0x00000000u); // 801CC568
  c->r[3]=c->r[31]|c->r[31]; // 801CC56C
  c->r[4]=c->r[28]|c->r[28]; // 801CC570
  c->r[5]=0u+0x00000000u; // 801CC574
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CC578
  c->r[6]=0u+0x00000000u; // 801CC57C
  c->ctr=c->r[12]; // 801CC580
  if (true) { c->lr=0x801CC588u; dispatch(c,c->ctr); } // 801CC584
  cmps(c,0,(int32_t)c->r[3],0); // 801CC588
  if (!crb(c,2)) { goto L_801CC5B4; } // 801CC58C
  c->r[3]=R32(c->r[28]+0x000000ECu); // 801CC590
  c->r[4]=c->r[29]|c->r[29]; // 801CC594
  c->r[5]=c->r[30]|c->r[30]; // 801CC598
  c->r[6]=c->r[31]|c->r[31]; // 801CC59C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC5A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CC5A4
  c->ctr=c->r[12]; // 801CC5A8
  if (true) { c->lr=0x801CC5B0u; dispatch(c,c->ctr); } // 801CC5AC
  goto L_801CC718; // 801CC5B0
L_801CC5B4:;
  cmps(c,0,(int32_t)c->r[3],1); // 801CC5B4
  if (!crb(c,2)) { goto L_801CC718; } // 801CC5B8
  c->r[27]=R32(c->r[13]+0xFFFF9D68u); // 801CC5BC
  c->r[0]=0u+0x00000000u; // 801CC5C0
  c->r[4]=c->r[29]|c->r[29]; // 801CC5C4
  c->r[5]=c->r[30]|c->r[30]; // 801CC5C8
  W32(c->r[13]+0xFFFF9D68u,c->r[0]); // 801CC5CC
  c->r[6]=c->r[31]|c->r[31]; // 801CC5D0
  c->r[3]=R32(c->r[28]+0x000000ECu); // 801CC5D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC5D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CC5DC
  c->ctr=c->r[12]; // 801CC5E0
  if (true) { c->lr=0x801CC5E8u; dispatch(c,c->ctr); } // 801CC5E4
  W32(c->r[13]+0xFFFF9D68u,c->r[27]); // 801CC5E8
  goto L_801CC718; // 801CC5EC
L_801CC5F0:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801CC5F0
  cmps(c,0,(int32_t)c->r[4],0); // 801CC5F4
  if (crb(c,2)) { goto L_801CC638; } // 801CC5F8
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801CC5FC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CC600
  if (crb(c,2)) { goto L_801CC638; } // 801CC604
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801CC608
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CC60C
  if (crb(c,2)) { goto L_801CC638; } // 801CC610
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CC614
  c->r[3]=c->r[4]|c->r[4]; // 801CC618
  c->r[5]=c->r[28]|c->r[28]; // 801CC61C
  c->r[6]=c->r[30]|c->r[30]; // 801CC620
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CC624
  c->r[7]=c->r[31]|c->r[31]; // 801CC628
  c->r[4]=0u+0x00000001u; // 801CC62C
  c->ctr=c->r[12]; // 801CC630
  if (true) { c->lr=0x801CC638u; dispatch(c,c->ctr); } // 801CC634
L_801CC638:;
  c->r[3]=c->r[28]|c->r[28]; // 801CC638
  c->r[4]=c->r[31]|c->r[31]; // 801CC63C
  c->lr=0x801CC644u; f_801C49A0(c); // 801CC640
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CC644
  cmps(c,0,(int32_t)c->r[3],0); // 801CC648
  if (crb(c,2)) { goto L_801CC688; } // 801CC64C
  c->r[0]=R16(c->r[28]+0x000000DAu); // 801CC650
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CC654
  if (crb(c,2)) { goto L_801CC688; } // 801CC658
  c->r[0]=R8(c->r[28]+0x000000D8u); // 801CC65C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801CC660
  if (crb(c,2)) { goto L_801CC688; } // 801CC664
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC668
  c->r[5]=c->r[28]|c->r[28]; // 801CC66C
  c->r[6]=c->r[30]|c->r[30]; // 801CC670
  c->r[7]=c->r[31]|c->r[31]; // 801CC674
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CC678
  c->r[4]=0u+0x00000002u; // 801CC67C
  c->ctr=c->r[12]; // 801CC680
  if (true) { c->lr=0x801CC688u; dispatch(c,c->ctr); } // 801CC684
L_801CC688:;
  c->r[3]=c->r[28]|c->r[28]; // 801CC688
  c->r[4]=0u+0x00000001u; // 801CC68C
  c->lr=0x801CC694u; f_801CC410(c); // 801CC690
  c->r[3]=R32(c->r[28]+0x000000ECu); // 801CC694
  cmps(c,0,(int32_t)c->r[3],0); // 801CC698
  if (crb(c,2)) { goto L_801CC6BC; } // 801CC69C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC6A0
  c->r[4]=c->r[29]|c->r[29]; // 801CC6A4
  c->r[5]=c->r[30]|c->r[30]; // 801CC6A8
  c->r[6]=c->r[31]|c->r[31]; // 801CC6AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CC6B0
  c->ctr=c->r[12]; // 801CC6B4
  if (true) { c->lr=0x801CC6BCu; dispatch(c,c->ctr); } // 801CC6B8
L_801CC6BC:;
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CC6BC
  cmps(c,0,(int32_t)c->r[3],0); // 801CC6C0
  if (crb(c,2)) { goto L_801CC718; } // 801CC6C4
  c->r[0]=R16(c->r[28]+0x000000DAu); // 801CC6C8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CC6CC
  if (crb(c,2)) { goto L_801CC718; } // 801CC6D0
  c->r[0]=R8(c->r[28]+0x000000D8u); // 801CC6D4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CC6D8
  if (crb(c,2)) { goto L_801CC718; } // 801CC6DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC6E0
  c->r[5]=c->r[28]|c->r[28]; // 801CC6E4
  c->r[6]=c->r[30]|c->r[30]; // 801CC6E8
  c->r[7]=c->r[31]|c->r[31]; // 801CC6EC
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CC6F0
  c->r[4]=0u+0x00000004u; // 801CC6F4
  c->ctr=c->r[12]; // 801CC6F8
  if (true) { c->lr=0x801CC700u; dispatch(c,c->ctr); } // 801CC6FC
  goto L_801CC718; // 801CC700
L_801CC704:;
  c->r[3]=c->r[28]|c->r[28]; // 801CC704
  c->r[4]=c->r[29]|c->r[29]; // 801CC708
  c->r[5]=c->r[30]|c->r[30]; // 801CC70C
  c->r[6]=c->r[31]|c->r[31]; // 801CC710
  c->lr=0x801CC718u; f_801C57AC(c); // 801CC714
L_801CC718:;
  c->r[11]=c->r[1]+0x00000020u; // 801CC718
  c->lr=0x801CC720u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CC71C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC720
  c->lr=c->r[0]; // 801CC724
  c->r[1]=c->r[1]+0x00000020u; // 801CC728
  return; // 801CC72C
}

// fn_801CC730
void f_801CC730(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801CC730
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CC734
  c->r[3]=c->r[3]+0x00000E60u; // 801CC738
  cmpu(c,0,c->r[0],c->r[3]); // 801CC73C
  if (!crb(c,2)) { goto L_801CC74C; } // 801CC740
  c->r[3]=0u+0x00000001u; // 801CC744
  return; // 801CC748
L_801CC74C:;
  c->r[3]=0u+0x80270000u; // 801CC74C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CC750
  c->r[3]=c->r[3]+0x00000E18u; // 801CC754
  cmpu(c,0,c->r[0],c->r[3]); // 801CC758
  if (!crb(c,2)) { goto L_801CC768; } // 801CC75C
  c->r[3]=0u+0x00000001u; // 801CC760
  return; // 801CC764
L_801CC768:;
  c->r[3]=0u+0x80270000u; // 801CC768
  c->r[3]=c->r[3]+0x00000DF8u; // 801CC76C
  cmpu(c,0,c->r[0],c->r[3]); // 801CC770
  if (!crb(c,2)) { goto L_801CC780; } // 801CC774
  c->r[3]=0u+0x00000001u; // 801CC778
  return; // 801CC77C
L_801CC780:;
  c->r[3]=0u+0x80270000u; // 801CC780
  c->r[3]=c->r[3]+0x00000CD0u; // 801CC784
  c->r[0]=c->r[3]-c->r[0]; // 801CC788
  c->r[0]=cntlz(c->r[0]); // 801CC78C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CC790
  return; // 801CC794
}

// fn_801CC798
void f_801CC798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC798
  c->r[0]=c->lr; // 801CC79C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC7A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC7A4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CC7A8
  c->ctr=c->r[12]; // 801CC7AC
  if (true) { c->lr=0x801CC7B4u; dispatch(c,c->ctr); } // 801CC7B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC7B4
  c->r[3]=c->r[3]+0x00000004u; // 801CC7B8
  c->lr=c->r[0]; // 801CC7BC
  c->r[1]=c->r[1]+0x00000010u; // 801CC7C0
  return; // 801CC7C4
}

// fn_801CC7C8
void f_801CC7C8(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801CC7C8
  c->r[3]=c->r[3]+0x00000E60u; // 801CC7CC
  return; // 801CC7D0
}

// fn_801CC7D4
void f_801CC7D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC7D4
  c->r[0]=c->lr; // 801CC7D8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC7DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC7E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC7E4
  c->r[31]=c->r[3]|c->r[3]; // 801CC7E8
  if (crb(c,2)) { goto L_801CC7F8; } // 801CC7EC
  c->r[4]=0u+0x00000000u; // 801CC7F0
  c->lr=0x801CC7F8u; f_801C5F44(c); // 801CC7F4
L_801CC7F8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC7F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC7FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC800
  c->lr=c->r[0]; // 801CC804
  c->r[1]=c->r[1]+0x00000010u; // 801CC808
  return; // 801CC80C
}

// fn_801CC810
void f_801CC810(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801CC810
  return; // 801CC814
}

// fn_801CC818
void f_801CC818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC818
  c->r[0]=c->lr; // 801CC81C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CC820
  c->r[11]=c->r[1]+0x00000030u; // 801CC824
  c->lr=0x801CC82Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CC828
  c->r[26]=c->r[3]|c->r[3]; // 801CC82C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801CC830
  c->r[27]=c->r[4]|c->r[4]; // 801CC834
  c->r[28]=c->r[5]|c->r[5]; // 801CC838
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC83C
  c->r[29]=c->r[6]|c->r[6]; // 801CC840
  c->r[12]=R32(c->r[12]+0x00000028u); // 801CC844
  c->ctr=c->r[12]; // 801CC848
  if (true) { c->lr=0x801CC850u; dispatch(c,c->ctr); } // 801CC84C
  cmps(c,0,(int32_t)c->r[3],0); // 801CC850
  if (!crb(c,2)) { goto L_801CC87C; } // 801CC854
  c->r[3]=R32(c->r[26]+0x00000008u); // 801CC858
  c->r[4]=c->r[27]|c->r[27]; // 801CC85C
  c->r[5]=c->r[28]|c->r[28]; // 801CC860
  c->r[6]=c->r[29]|c->r[29]; // 801CC864
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC868
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CC86C
  c->ctr=c->r[12]; // 801CC870
  if (true) { c->lr=0x801CC878u; dispatch(c,c->ctr); } // 801CC874
  goto L_801CC930; // 801CC878
L_801CC87C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CC87C
  c->r[30]=R32(c->r[26]+0x00000008u); // 801CC880
  c->r[31]=0u+0x00000000u; // 801CC884
  if (crb(c,2)) { goto L_801CC8BC; } // 801CC888
  c->r[5]=0u+0x80270000u; // 801CC88C
  c->r[3]=c->r[27]|c->r[27]; // 801CC890
  c->r[5]=c->r[5]+0x00000E70u; // 801CC894
  c->r[4]=c->r[1]+0x00000008u; // 801CC898
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CC89C
  c->r[12]=R32(c->r[27]+0x00000000u); // 801CC8A0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CC8A4
  c->ctr=c->r[12]; // 801CC8A8
  if (true) { c->lr=0x801CC8B0u; dispatch(c,c->ctr); } // 801CC8AC
  cmps(c,0,(int32_t)c->r[3],0); // 801CC8B0
  if (crb(c,2)) { goto L_801CC8BC; } // 801CC8B4
  c->r[31]=0u+0x00000001u; // 801CC8B8
L_801CC8BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC8BC
  if (crb(c,2)) { goto L_801CC8CC; } // 801CC8C0
  c->r[4]=c->r[27]|c->r[27]; // 801CC8C4
  goto L_801CC8D0; // 801CC8C8
L_801CC8CC:;
  c->r[4]=0u+0x00000000u; // 801CC8CC
L_801CC8D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CC8D0
  c->r[31]=0u+0x00000000u; // 801CC8D4
  if (crb(c,2)) { goto L_801CC900; } // 801CC8D8
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CC8DC
  c->r[3]=c->r[30]|c->r[30]; // 801CC8E0
  c->r[4]=R32(c->r[4]+0x000000E8u); // 801CC8E4
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CC8E8
  c->ctr=c->r[12]; // 801CC8EC
  if (true) { c->lr=0x801CC8F4u; dispatch(c,c->ctr); } // 801CC8F0
  cmps(c,0,(int32_t)c->r[3],0); // 801CC8F4
  if (crb(c,2)) { goto L_801CC900; } // 801CC8F8
  c->r[31]=0u+0x00000001u; // 801CC8FC
L_801CC900:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC900
  if (crb(c,2)) { goto L_801CC910; } // 801CC904
  c->r[3]=0u+0x00000000u; // 801CC908
  goto L_801CC930; // 801CC90C
L_801CC910:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 801CC910
  c->r[4]=c->r[27]|c->r[27]; // 801CC914
  c->r[5]=c->r[28]|c->r[28]; // 801CC918
  c->r[6]=c->r[29]|c->r[29]; // 801CC91C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC920
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CC924
  c->ctr=c->r[12]; // 801CC928
  if (true) { c->lr=0x801CC930u; dispatch(c,c->ctr); } // 801CC92C
L_801CC930:;
  c->r[11]=c->r[1]+0x00000030u; // 801CC930
  c->lr=0x801CC938u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CC934
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CC938
  c->lr=c->r[0]; // 801CC93C
  c->r[1]=c->r[1]+0x00000030u; // 801CC940
  return; // 801CC944
}

// fn_801CC948
void f_801CC948(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801CC948
  c->r[7]=c->r[4]|c->r[4]; // 801CC94C
  cmps(c,0,(int32_t)c->r[0],0); // 801CC950
  if (crb(c,2)) return; // 801CC954
  c->r[5]=R32(c->r[3]+0x00000010u); // 801CC958
  c->r[4]=c->r[0]|c->r[0]; // 801CC95C
  c->r[6]=R32(c->r[3]+0x00000004u); // 801CC960
  c->r[8]=0u+0x00000001u; // 801CC964
  f_801CCB18(c); return; // 801CC968
  return; // 801CC96C
}

// fn_801CC970
void f_801CC970(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000020u); // 801CC970
  c->r[7]=c->r[4]|c->r[4]; // 801CC974
  cmps(c,0,(int32_t)c->r[0],0); // 801CC978
  if (crb(c,2)) return; // 801CC97C
  c->r[5]=R32(c->r[3]+0x00000014u); // 801CC980
  c->r[4]=c->r[0]|c->r[0]; // 801CC984
  c->r[6]=R32(c->r[3]+0x00000008u); // 801CC988
  c->r[8]=0u+0x00000000u; // 801CC98C
  f_801CCB18(c); return; // 801CC990
  return; // 801CC994
}

// fn_801CC998
void f_801CC998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC998
  c->r[0]=c->lr; // 801CC99C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CC9A0
  c->r[11]=c->r[1]+0x00000030u; // 801CC9A4
  c->lr=0x801CC9ACu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CC9A8
  cmps(c,0,(int32_t)c->r[4],0); // 801CC9AC
  c->r[25]=c->r[3]|c->r[3]; // 801CC9B0
  c->r[26]=c->r[4]|c->r[4]; // 801CC9B4
  c->r[31]=0u+0x00000000u; // 801CC9B8
  if (crb(c,2)) { goto L_801CC9F0; } // 801CC9BC
  c->r[5]=0u+0x80270000u; // 801CC9C0
  c->r[3]=c->r[26]|c->r[26]; // 801CC9C4
  c->r[5]=c->r[5]+0x00000E38u; // 801CC9C8
  c->r[4]=c->r[1]+0x00000008u; // 801CC9CC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CC9D0
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CC9D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CC9D8
  c->ctr=c->r[12]; // 801CC9DC
  if (true) { c->lr=0x801CC9E4u; dispatch(c,c->ctr); } // 801CC9E0
  cmps(c,0,(int32_t)c->r[3],0); // 801CC9E4
  if (crb(c,2)) { goto L_801CC9F0; } // 801CC9E8
  c->r[31]=0u+0x00000001u; // 801CC9EC
L_801CC9F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC9F0
  if (crb(c,2)) { goto L_801CC9FC; } // 801CC9F4
  goto L_801CCA00; // 801CC9F8
L_801CC9FC:;
  c->r[26]=0u+0x00000000u; // 801CC9FC
L_801CCA00:;
  cmps(c,0,(int32_t)c->r[26],0); // 801CCA00
  c->r[31]=0u+0x00000000u; // 801CCA04
  c->r[30]=0u+0x00000000u; // 801CCA08
  c->r[29]=0u+0x00000000u; // 801CCA0C
  c->r[28]=0u+0x00000000u; // 801CCA10
  c->r[27]=0u+0x00000000u; // 801CCA14
  if (crb(c,2)) { goto L_801CCA40; } // 801CCA18
  c->r[12]=R32(c->r[25]+0x00000000u); // 801CCA1C
  c->r[3]=c->r[25]|c->r[25]; // 801CCA20
  c->r[12]=R32(c->r[12]+0x00000030u); // 801CCA24
  c->ctr=c->r[12]; // 801CCA28
  if (true) { c->lr=0x801CCA30u; dispatch(c,c->ctr); } // 801CCA2C
  c->r[0]=R32(c->r[26]+0x000000E8u); // 801CCA30
  cmpu(c,0,c->r[0],c->r[3]); // 801CCA34
  if (!crb(c,2)) { goto L_801CCA40; } // 801CCA38
  c->r[27]=0u+0x00000001u; // 801CCA3C
L_801CCA40:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CCA40
  if (crb(c,2)) { goto L_801CCA6C; } // 801CCA44
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CCA48
  c->r[3]=c->r[26]|c->r[26]; // 801CCA4C
  c->r[4]=0u+0x00000002u; // 801CCA50
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CCA54
  c->ctr=c->r[12]; // 801CCA58
  if (true) { c->lr=0x801CCA60u; dispatch(c,c->ctr); } // 801CCA5C
  cmps(c,0,(int32_t)c->r[3],0); // 801CCA60
  if (!crb(c,2)) { goto L_801CCA6C; } // 801CCA64
  c->r[28]=0u+0x00000001u; // 801CCA68
L_801CCA6C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CCA6C
  if (crb(c,2)) { goto L_801CCA98; } // 801CCA70
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CCA74
  c->r[3]=c->r[26]|c->r[26]; // 801CCA78
  c->r[4]=0u+0x00000003u; // 801CCA7C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CCA80
  c->ctr=c->r[12]; // 801CCA84
  if (true) { c->lr=0x801CCA8Cu; dispatch(c,c->ctr); } // 801CCA88
  cmps(c,0,(int32_t)c->r[3],0); // 801CCA8C
  if (!crb(c,2)) { goto L_801CCA98; } // 801CCA90
  c->r[29]=0u+0x00000001u; // 801CCA94
L_801CCA98:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CCA98
  if (crb(c,2)) { goto L_801CCAC4; } // 801CCA9C
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CCAA0
  c->r[3]=c->r[26]|c->r[26]; // 801CCAA4
  c->r[4]=0u+0x00000004u; // 801CCAA8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CCAAC
  c->ctr=c->r[12]; // 801CCAB0
  if (true) { c->lr=0x801CCAB8u; dispatch(c,c->ctr); } // 801CCAB4
  cmps(c,0,(int32_t)c->r[3],0); // 801CCAB8
  if (!crb(c,2)) { goto L_801CCAC4; } // 801CCABC
  c->r[30]=0u+0x00000001u; // 801CCAC0
L_801CCAC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CCAC4
  if (crb(c,2)) { goto L_801CCAF0; } // 801CCAC8
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CCACC
  c->r[3]=c->r[26]|c->r[26]; // 801CCAD0
  c->r[4]=0u+0x00000005u; // 801CCAD4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CCAD8
  c->ctr=c->r[12]; // 801CCADC
  if (true) { c->lr=0x801CCAE4u; dispatch(c,c->ctr); } // 801CCAE0
  cmps(c,0,(int32_t)c->r[3],0); // 801CCAE4
  if (!crb(c,2)) { goto L_801CCAF0; } // 801CCAE8
  c->r[31]=0u+0x00000001u; // 801CCAEC
L_801CCAF0:;
  c->r[0]=cntlz(c->r[31]); // 801CCAF0
  c->r[11]=c->r[1]+0x00000030u; // 801CCAF4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CCAF8
  c->lr=0x801CCB00u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CCAFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CCB00
  c->lr=c->r[0]; // 801CCB04
  c->r[1]=c->r[1]+0x00000030u; // 801CCB08
  return; // 801CCB0C
}

// fn_801CCB10
void f_801CCB10(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 801CCB10
  return; // 801CCB14
}

// fn_801CCB18
void f_801CCB18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCB18
  c->r[0]=c->lr; // 801CCB1C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801CCB20
  c->r[11]=c->r[1]+0x000000B0u; // 801CCB24
  c->lr=0x801CCB2Cu; f_80109F04(c); // 801CCB28
  cmps(c,0,(int32_t)c->r[7],0); // 801CCB2C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CCB30
  c->r[19]=c->r[4]|c->r[4]; // 801CCB34
  c->r[20]=c->r[5]|c->r[5]; // 801CCB38
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801CCB3C
  c->r[21]=c->r[7]|c->r[7]; // 801CCB40
  c->r[14]=c->r[8]|c->r[8]; // 801CCB44
  c->r[25]=0u+0x00000000u; // 801CCB48
  c->r[27]=0u+0x00000000u; // 801CCB4C
  if (crb(c,2)) { goto L_801CCB64; } // 801CCB50
  c->r[0]=R32(c->r[7]+0x00000000u); // 801CCB54
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CCB58
  if (crb(c,2)) { goto L_801CCB64; } // 801CCB5C
  c->r[27]=0u+0x00000001u; // 801CCB60
L_801CCB64:;
  c->r[31]=0u+0x80270000u; // 801CCB64
  c->r[16]=0u+0x80270000u; // 801CCB68
  c->r[31]=c->r[31]+0x00000E50u; // 801CCB6C
  c->r[16]=c->r[16]+0x00000E38u; // 801CCB70
  goto L_801CCEE4; // 801CCB74
L_801CCB78:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801CCB78
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CCB7C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801CCB80
  c->ctr=c->r[12]; // 801CCB84
  if (true) { c->lr=0x801CCB8Cu; dispatch(c,c->ctr); } // 801CCB88
  c->r[0]=R8(c->r[19]+0x00000001u); // 801CCB8C
  W32(c->r[1]+0x00000048u,c->r[3]); // 801CCB90
  c->r[3]=c->r[1]+0x00000048u; // 801CCB94
  c->r[4]=R8(c->r[19]+0x00000002u); // 801CCB98
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801CCB9C
  c->lr=0x801CCBA4u; f_801A9FA8(c); // 801CCBA0
  c->r[28]=c->r[3]|c->r[3]; // 801CCBA4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801CCBA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CCBAC
  c->r[12]=R32(c->r[12]+0x00000030u); // 801CCBB0
  c->ctr=c->r[12]; // 801CCBB4
  if (true) { c->lr=0x801CCBBCu; dispatch(c,c->ctr); } // 801CCBB8
  c->r[0]=R8(c->r[19]+0x00000003u); // 801CCBBC
  W32(c->r[1]+0x00000044u,c->r[3]); // 801CCBC0
  c->r[3]=c->r[1]+0x00000044u; // 801CCBC4
  c->r[4]=R8(c->r[19]+0x00000004u); // 801CCBC8
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801CCBCC
  c->lr=0x801CCBD4u; f_801AA084(c); // 801CCBD0
  c->r[29]=c->r[3]|c->r[3]; // 801CCBD4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801CCBD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CCBDC
  c->r[12]=R32(c->r[12]+0x00000030u); // 801CCBE0
  c->ctr=c->r[12]; // 801CCBE4
  if (true) { c->lr=0x801CCBECu; dispatch(c,c->ctr); } // 801CCBE8
  c->r[0]=R8(c->r[19]+0x00000005u); // 801CCBEC
  W32(c->r[1]+0x00000040u,c->r[3]); // 801CCBF0
  c->r[3]=c->r[1]+0x00000040u; // 801CCBF4
  c->r[4]=R8(c->r[19]+0x00000006u); // 801CCBF8
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801CCBFC
  c->lr=0x801CCC04u; f_801A9A50(c); // 801CCC00
  c->r[26]=R32(c->r[1]+0x0000000Cu); // 801CCC04
  c->r[30]=c->r[3]|c->r[3]; // 801CCC08
  c->r[24]=0u+0x00000001u; // 801CCC0C
  c->r[23]=0u+0x00000000u; // 801CCC10
  goto L_801CCED4; // 801CCC14
L_801CCC18:;
  cmps(c,0,(int32_t)c->r[14],0); // 801CCC18
  c->r[3]=R32(c->r[26]+0x00000000u); // 801CCC1C
  c->r[4]=0u+0x00000007u; // 801CCC20
  if (crb(c,2)) { goto L_801CCC2C; } // 801CCC24
  c->r[4]=0u+0x00000006u; // 801CCC28
L_801CCC2C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CCC2C
  c->r[5]=c->r[1]+0x0000004Cu; // 801CCC30
  c->r[12]=R32(c->r[12]+0x00000024u); // 801CCC34
  c->ctr=c->r[12]; // 801CCC38
  if (true) { c->lr=0x801CCC40u; dispatch(c,c->ctr); } // 801CCC3C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 801CCC40
  cmps(c,0,(int32_t)c->r[0],0); // 801CCC44
  if (!crb(c,2)) { goto L_801CCECC; } // 801CCC48
  cmps(c,0,(int32_t)c->r[21],0); // 801CCC4C
  c->r[22]=0u+0x00000001u; // 801CCC50
  if (crb(c,2)) { goto L_801CCC68; } // 801CCC54
  c->r[0]=R32(c->r[21]+0x00000000u); // 801CCC58
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801CCC5C
  if (crb(c,2)) { goto L_801CCC68; } // 801CCC60
  c->r[22]=c->r[22]|0x00000008u; // 801CCC64
L_801CCC68:;
  c->r[15]=R32(c->r[26]+0x00000000u); // 801CCC68
  c->r[17]=0u+0x00000000u; // 801CCC6C
  cmps(c,0,(int32_t)c->r[15],0); // 801CCC70
  if (crb(c,2)) { goto L_801CCCA0; } // 801CCC74
  W32(c->r[1]+0x00000014u,c->r[31]); // 801CCC78
  c->r[3]=c->r[15]|c->r[15]; // 801CCC7C
  c->r[4]=c->r[1]+0x00000014u; // 801CCC80
  c->r[12]=R32(c->r[15]+0x00000000u); // 801CCC84
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CCC88
  c->ctr=c->r[12]; // 801CCC8C
  if (true) { c->lr=0x801CCC94u; dispatch(c,c->ctr); } // 801CCC90
  cmps(c,0,(int32_t)c->r[3],0); // 801CCC94
  if (crb(c,2)) { goto L_801CCCA0; } // 801CCC98
  c->r[17]=0u+0x00000001u; // 801CCC9C
L_801CCCA0:;
  cmps(c,0,(int32_t)c->r[17],0); // 801CCCA0
  if (crb(c,2)) { goto L_801CCCAC; } // 801CCCA4
  goto L_801CCCB0; // 801CCCA8
L_801CCCAC:;
  c->r[15]=0u+0x00000000u; // 801CCCAC
L_801CCCB0:;
  cmps(c,0,(int32_t)c->r[15],0); // 801CCCB0
  if (crb(c,2)) { goto L_801CCDA4; } // 801CCCB4
  cmps(c,0,(int32_t)c->r[30],0); // 801CCCB8
  c->r[4]=c->r[15]|c->r[15]; // 801CCCBC
  c->r[3]=c->r[1]+0x00000050u; // 801CCCC0
  if (crb(c,2)) { goto L_801CCCD0; } // 801CCCC4
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801CCCC8
  goto L_801CCCD4; // 801CCCCC
L_801CCCD0:;
  c->r[5]=0u+0x00000000u; // 801CCCD0
L_801CCCD4:;
  c->lr=0x801CCCD8u; f_801C9D94(c); // 801CCCD4
  c->lr=0x801CCCDCu; f_801C9D14(c); // 801CCCD8
  cmps(c,0,(int32_t)c->r[3],0); // 801CCCDC
  if (crb(c,2)) { goto L_801CCEC8; } // 801CCCE0
  c->r[3]=c->r[15]|c->r[15]; // 801CCCE4
  c->lr=0x801CCCECu; f_801C95A8(c); // 801CCCE8
  c->r[18]=c->r[3]|c->r[3]; // 801CCCEC
  c->r[3]=c->r[15]|c->r[15]; // 801CCCF0
  c->lr=0x801CCCF8u; f_801C9574(c); // 801CCCF4
  c->r[17]=c->r[3]|c->r[3]; // 801CCCF8
  c->r[3]=c->r[15]|c->r[15]; // 801CCCFC
  c->lr=0x801CCD04u; f_801C9550(c); // 801CCD00
  c->r[4]=c->r[17]|c->r[17]; // 801CCD04
  c->r[5]=c->r[18]|c->r[18]; // 801CCD08
  c->lr=0x801CCD10u; f_801BAEF4(c); // 801CCD0C
  cmps(c,0,(int32_t)c->r[21],0); // 801CCD10
  if (!crb(c,2)) { goto L_801CCD28; } // 801CCD14
  c->r[0]=R32(c->r[15]+0x00000118u); // 801CCD18
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801CCD1C
  if (crb(c,2)) { goto L_801CCD28; } // 801CCD20
  c->r[22]=c->r[22]|0x00000008u; // 801CCD24
L_801CCD28:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CCD28
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 801CCD2C
  c->r[0]=0u+0x00000000u; // 801CCD30
  W32(c->r[1]+0x00000030u,c->r[30]); // 801CCD34
  W32(c->r[1]+0x00000034u,c->r[28]); // 801CCD38
  W32(c->r[1]+0x00000038u,c->r[29]); // 801CCD3C
  if (!crb(c,2)) { goto L_801CCD54; } // 801CCD40
  cmps(c,0,(int32_t)c->r[24],0); // 801CCD44
  if (crb(c,2)) { goto L_801CCD54; } // 801CCD48
  cmpu(c,0,c->r[28],c->r[25]); // 801CCD4C
  if (!crb(c,2)) { goto L_801CCD58; } // 801CCD50
L_801CCD54:;
  c->r[0]=0u+0x00000001u; // 801CCD54
L_801CCD58:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CCD58
  if (crb(c,2)) { goto L_801CCD68; } // 801CCD5C
  c->r[0]=0u+0x00000000u; // 801CCD60
  goto L_801CCD6C; // 801CCD64
L_801CCD68:;
  c->r[0]=c->r[28]|c->r[28]; // 801CCD68
L_801CCD6C:;
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801CCD6C
  c->r[3]=c->r[1]+0x00000034u; // 801CCD70
  c->r[4]=c->r[1]+0x00000030u; // 801CCD74
  c->r[5]=c->r[1]+0x0000002Cu; // 801CCD78
  c->lr=0x801CCD80u; f_801BF3B0(c); // 801CCD7C
  c->r[9]=c->r[3]|c->r[3]; // 801CCD80
  c->r[4]=c->r[1]+0x00000038u; // 801CCD84
  c->r[7]=c->r[22]|c->r[22]; // 801CCD88
  c->r[3]=c->r[1]+0x0000003Cu; // 801CCD8C
  c->r[5]=0u+0x00000000u; // 801CCD90
  c->r[6]=0u+0x00000000u; // 801CCD94
  c->r[8]=0u+0x00000000u; // 801CCD98
  c->lr=0x801CCDA0u; f_801BC2B4(c); // 801CCD9C
  goto L_801CCEC8; // 801CCDA0
L_801CCDA4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CCDA4
  if (crb(c,2)) { goto L_801CCDB8; } // 801CCDA8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801CCDAC
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 801CCDB0
  goto L_801CCDBC; // 801CCDB4
L_801CCDB8:;
  c->r[0]=0u+0x00000000u; // 801CCDB8
L_801CCDBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CCDBC
  if (crb(c,2)) { goto L_801CCEC8; } // 801CCDC0
  c->r[15]=R32(c->r[26]+0x00000000u); // 801CCDC4
  c->r[17]=0u+0x00000000u; // 801CCDC8
  cmps(c,0,(int32_t)c->r[15],0); // 801CCDCC
  if (crb(c,2)) { goto L_801CCDFC; } // 801CCDD0
  W32(c->r[1]+0x00000010u,c->r[16]); // 801CCDD4
  c->r[3]=c->r[15]|c->r[15]; // 801CCDD8
  c->r[4]=c->r[1]+0x00000010u; // 801CCDDC
  c->r[12]=R32(c->r[15]+0x00000000u); // 801CCDE0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CCDE4
  c->ctr=c->r[12]; // 801CCDE8
  if (true) { c->lr=0x801CCDF0u; dispatch(c,c->ctr); } // 801CCDEC
  cmps(c,0,(int32_t)c->r[3],0); // 801CCDF0
  if (crb(c,2)) { goto L_801CCDFC; } // 801CCDF4
  c->r[17]=0u+0x00000001u; // 801CCDF8
L_801CCDFC:;
  cmps(c,0,(int32_t)c->r[17],0); // 801CCDFC
  if (crb(c,2)) { goto L_801CCE08; } // 801CCE00
  goto L_801CCE0C; // 801CCE04
L_801CCE08:;
  c->r[15]=0u+0x00000000u; // 801CCE08
L_801CCE0C:;
  c->r[3]=c->r[15]|c->r[15]; // 801CCE0C
  c->lr=0x801CCE14u; f_801C95A8(c); // 801CCE10
  c->r[17]=c->r[3]|c->r[3]; // 801CCE14
  c->r[3]=c->r[15]|c->r[15]; // 801CCE18
  c->lr=0x801CCE20u; f_801C9574(c); // 801CCE1C
  c->r[18]=c->r[3]|c->r[3]; // 801CCE20
  c->r[3]=c->r[15]|c->r[15]; // 801CCE24
  c->lr=0x801CCE2Cu; f_801C9550(c); // 801CCE28
  c->r[4]=c->r[18]|c->r[18]; // 801CCE2C
  c->r[5]=c->r[17]|c->r[17]; // 801CCE30
  c->lr=0x801CCE38u; f_801BAEF4(c); // 801CCE34
  cmps(c,0,(int32_t)c->r[21],0); // 801CCE38
  if (!crb(c,2)) { goto L_801CCE50; } // 801CCE3C
  c->r[0]=R32(c->r[15]+0x00000118u); // 801CCE40
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801CCE44
  if (crb(c,2)) { goto L_801CCE50; } // 801CCE48
  c->r[22]=c->r[22]|0x00000008u; // 801CCE4C
L_801CCE50:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CCE50
  W32(c->r[1]+0x00000018u,c->r[29]); // 801CCE54
  c->r[0]=0u+0x00000000u; // 801CCE58
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 801CCE5C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CCE60
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CCE64
  if (!crb(c,2)) { goto L_801CCE7C; } // 801CCE68
  cmps(c,0,(int32_t)c->r[24],0); // 801CCE6C
  if (crb(c,2)) { goto L_801CCE7C; } // 801CCE70
  cmpu(c,0,c->r[28],c->r[25]); // 801CCE74
  if (!crb(c,2)) { goto L_801CCE80; } // 801CCE78
L_801CCE7C:;
  c->r[0]=0u+0x00000001u; // 801CCE7C
L_801CCE80:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CCE80
  if (crb(c,2)) { goto L_801CCE90; } // 801CCE84
  c->r[0]=0u+0x00000000u; // 801CCE88
  goto L_801CCE94; // 801CCE8C
L_801CCE90:;
  c->r[0]=c->r[28]|c->r[28]; // 801CCE90
L_801CCE94:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 801CCE94
  c->r[3]=c->r[1]+0x00000020u; // 801CCE98
  c->r[4]=c->r[1]+0x0000001Cu; // 801CCE9C
  c->r[5]=c->r[1]+0x00000018u; // 801CCEA0
  c->lr=0x801CCEA8u; f_801BF3B0(c); // 801CCEA4
  c->r[9]=c->r[3]|c->r[3]; // 801CCEA8
  c->r[4]=c->r[1]+0x00000024u; // 801CCEAC
  c->r[7]=c->r[22]|c->r[22]; // 801CCEB0
  c->r[3]=c->r[1]+0x00000028u; // 801CCEB4
  c->r[5]=0u+0x00000000u; // 801CCEB8
  c->r[6]=0u+0x00000000u; // 801CCEBC
  c->r[8]=0u+0x00000000u; // 801CCEC0
  c->lr=0x801CCEC8u; f_801BC2B4(c); // 801CCEC4
L_801CCEC8:;
  c->r[24]=0u+0x00000000u; // 801CCEC8
L_801CCECC:;
  c->r[26]=c->r[26]+0x00000004u; // 801CCECC
  c->r[23]=c->r[23]+0x00000001u; // 801CCED0
L_801CCED4:;
  cmpu(c,0,c->r[23],c->r[20]); // 801CCED4
  if (crb(c,0)) { IRQCHK(c); goto L_801CCC18; } // 801CCED8
  c->r[25]=c->r[28]|c->r[28]; // 801CCEDC
  c->r[19]=c->r[19]+0x00000008u; // 801CCEE0
L_801CCEE4:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 801CCEE4
  cmpu(c,0,c->r[0],0x00000001u); // 801CCEE8
  if (!crb(c,2)) { IRQCHK(c); goto L_801CCB78; } // 801CCEEC
  c->r[11]=c->r[1]+0x000000B0u; // 801CCEF0
  c->lr=0x801CCEF8u; f_80109F50(c); // 801CCEF4
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801CCEF8
  c->lr=c->r[0]; // 801CCEFC
  c->r[1]=c->r[1]+0x000000B0u; // 801CCF00
  return; // 801CCF04
}

// fn_801CCF08
void f_801CCF08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCF08
  c->r[0]=c->lr; // 801CCF0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCF10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CCF14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CCF18
  c->r[30]=c->r[4]|c->r[4]; // 801CCF1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CCF20
  c->r[29]=c->r[3]|c->r[3]; // 801CCF24
  c->r[3]=c->r[30]|c->r[30]; // 801CCF28
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CCF2C
  c->r[12]=R32(c->r[12]+0x00000034u); // 801CCF30
  c->ctr=c->r[12]; // 801CCF34
  if (true) { c->lr=0x801CCF3Cu; dispatch(c,c->ctr); } // 801CCF38
  c->r[12]=R32(c->r[29]+0x00000000u); // 801CCF3C
  c->r[31]=c->r[3]|c->r[3]; // 801CCF40
  c->r[3]=c->r[29]|c->r[29]; // 801CCF44
  c->r[12]=R32(c->r[12]+0x00000034u); // 801CCF48
  c->ctr=c->r[12]; // 801CCF4C
  if (true) { c->lr=0x801CCF54u; dispatch(c,c->ctr); } // 801CCF50
  cmpu(c,0,c->r[3],c->r[31]); // 801CCF54
  if (!crb(c,2)) { goto L_801CCF74; } // 801CCF58
  c->r[3]=R32(c->r[30]+0x00000018u); // 801CCF5C
  c->r[0]=R32(c->r[29]+0x00000018u); // 801CCF60
  cmpu(c,0,c->r[3],c->r[0]); // 801CCF64
  if (!crb(c,2)) { goto L_801CCF74; } // 801CCF68
  c->r[3]=0u+0x00000001u; // 801CCF6C
  goto L_801CCF78; // 801CCF70
L_801CCF74:;
  c->r[3]=0u+0x00000000u; // 801CCF74
L_801CCF78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CCF78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CCF7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CCF80
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CCF84
  c->lr=c->r[0]; // 801CCF88
  c->r[1]=c->r[1]+0x00000020u; // 801CCF8C
  return; // 801CCF90
}

// fn_801CCF94
void f_801CCF94(Ctx* __restrict c) {
  c->r[3]=0u+0x53470000u; // 801CCF94
  c->r[3]=c->r[3]+0x00004558u; // 801CCF98
  return; // 801CCF9C
}

// fn_801CCFA0
void f_801CCFA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCFA0
  c->r[0]=c->lr; // 801CCFA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CCFA8
  c->r[11]=c->r[1]+0x00000030u; // 801CCFAC
  c->lr=0x801CCFB4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CCFB0
  c->r[8]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801CCFB4
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801CCFB8
  c->r[8]=c->r[8]+0x000000EFu; // 801CCFBC
  cmps(c,0,(int32_t)c->r[4],0); // 801CCFC0
  c->r[28]=rotl(c->r[8],0)&0xFFFFFFFCu; // 801CCFC4
  c->r[30]=c->r[3]|c->r[3]; // 801CCFC8
  c->r[8]=c->r[28]+c->r[0]; // 801CCFCC
  c->r[31]=c->r[5]|c->r[5]; // 801CCFD0
  c->r[0]=c->r[8]+0x00000003u; // 801CCFD4
  c->r[24]=c->r[6]|c->r[6]; // 801CCFD8
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CCFDC
  c->r[25]=c->r[7]|c->r[7]; // 801CCFE0
  c->r[0]=c->r[29]+0x00000027u; // 801CCFE4
  c->r[27]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801CCFE8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CCFEC
  c->r[26]=0u+0x00000000u; // 801CCFF0
  if (crb(c,2)) { goto L_801CCFFC; } // 801CCFF4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801CCFF8
L_801CCFFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CCFFC
  if (crb(c,2)) { goto L_801CD0DC; } // 801CD000
  c->r[3]=c->r[30]|c->r[30]; // 801CD004
  c->r[4]=c->r[0]|c->r[0]; // 801CD008
  c->lr=0x801CD010u; f_80128068(c); // 801CD00C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD010
  c->r[26]=c->r[3]|c->r[3]; // 801CD014
  if (!crb(c,2)) { goto L_801CD024; } // 801CD018
  c->r[3]=0u+0x00000000u; // 801CD01C
  goto L_801CD0E0; // 801CD020
L_801CD024:;
  c->r[29]=c->r[3]+c->r[29]; cr0(c,c->r[29]); // 801CD024
  c->r[4]=c->r[3]+c->r[28]; // 801CD028
  if (crb(c,2)) { goto L_801CD0A4; } // 801CD02C
  c->r[0]=R32(c->r[25]+0x00000000u); // 801CD030
  c->r[3]=c->r[29]|c->r[29]; // 801CD034
  c->r[6]=c->r[24]|c->r[24]; // 801CD038
  c->r[5]=c->r[4]+c->r[27]; // 801CD03C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CD040
  c->lr=0x801CD048u; f_801C7B58(c); // 801CD044
  c->r[3]=0u+0x802A0000u; // 801CD048
  c->r[3]=c->r[3]+0x00001670u; // 801CD04C
  W32(c->r[29]+0x00000000u,c->r[3]); // 801CD050
  c->r[0]=R32(c->r[1]+0x00000008u); // 801CD054
  W32(c->r[29]+0x00000018u,c->r[0]); // 801CD058
  c->r[0]=R32(c->r[1]+0x00000008u); // 801CD05C
  cmps(c,0,(int32_t)c->r[0],0); // 801CD060
  if (crb(c,2)) { goto L_801CD078; } // 801CD064
  c->r[3]=c->r[1]+0x00000008u; // 801CD068
  c->r[4]=c->r[13]+0xFFFF90C0u; // 801CD06C
  c->lr=0x801CD074u; f_801A9978(c); // 801CD070
  goto L_801CD07C; // 801CD074
L_801CD078:;
  c->r[3]=0u+0x00000000u; // 801CD078
L_801CD07C:;
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 801CD07C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801CD080
  cmps(c,0,(int32_t)c->r[0],0); // 801CD084
  if (crb(c,2)) { goto L_801CD09C; } // 801CD088
  c->r[3]=c->r[1]+0x00000008u; // 801CD08C
  c->r[4]=c->r[13]+0xFFFF90C8u; // 801CD090
  c->lr=0x801CD098u; f_801A9978(c); // 801CD094
  goto L_801CD0A0; // 801CD098
L_801CD09C:;
  c->r[3]=0u+0x00000000u; // 801CD09C
L_801CD0A0:;
  W32(c->r[29]+0x00000020u,c->r[3]); // 801CD0A0
L_801CD0A4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801CD0A4
  if (crb(c,2)) { goto L_801CD0DC; } // 801CD0A8
  c->r[3]=c->r[26]|c->r[26]; // 801CD0AC
  c->r[4]=c->r[30]|c->r[30]; // 801CD0B0
  c->r[6]=c->r[31]|c->r[31]; // 801CD0B4
  c->r[5]=c->r[26]+0x000000ECu; // 801CD0B8
  c->lr=0x801CD0C0u; f_801C5ED4(c); // 801CD0BC
  c->r[3]=0u+0x802A0000u; // 801CD0C0
  c->r[3]=c->r[3]+0x000016D8u; // 801CD0C4
  W32(c->r[26]+0x00000000u,c->r[3]); // 801CD0C8
  W32(c->r[26]+0x000000E8u,c->r[29]); // 801CD0CC
  c->r[0]=R32(c->r[26]+0x000000CCu); // 801CD0D0
  c->r[0]=rotl(c->r[0],0)&0x9FFFFFFFu; // 801CD0D4
  W32(c->r[26]+0x000000CCu,c->r[0]); // 801CD0D8
L_801CD0DC:;
  c->r[3]=c->r[26]|c->r[26]; // 801CD0DC
L_801CD0E0:;
  c->r[11]=c->r[1]+0x00000030u; // 801CD0E0
  c->lr=0x801CD0E8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CD0E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CD0E8
  c->lr=c->r[0]; // 801CD0EC
  c->r[1]=c->r[1]+0x00000030u; // 801CD0F0
  return; // 801CD0F4
}

// fn_801CD0F8
void f_801CD0F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD0F8
  c->r[0]=c->lr; // 801CD0FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD100
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CD104
  c->r[4]=c->r[1]+0x00000008u; // 801CD108
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CD10C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CD110
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD114
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801CD118
  c->ctr=c->r[12]; // 801CD11C
  if (true) { c->lr=0x801CD124u; dispatch(c,c->ctr); } // 801CD120
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD124
  c->lr=c->r[0]; // 801CD128
  c->r[1]=c->r[1]+0x00000010u; // 801CD12C
  return; // 801CD130
}

// fn_801CD134
void f_801CD134(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CD134
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD138
  c->r[12]=R32(c->r[12]+0x00000030u); // 801CD13C
  c->ctr=c->r[12]; // 801CD140
  if (true) { dispatch(c,c->ctr); return; } // 801CD144
}

// fn_801CD148
void f_801CD148(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD148
  c->r[0]=c->lr; // 801CD14C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CD150
  c->r[11]=c->r[1]+0x00000030u; // 801CD154
  c->lr=0x801CD15Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD158
  cmpu(c,0,c->r[4],0x00000009u); // 801CD15C
  c->r[28]=c->r[3]|c->r[3]; // 801CD160
  c->r[29]=c->r[4]|c->r[4]; // 801CD164
  c->r[30]=c->r[5]|c->r[5]; // 801CD168
  c->r[31]=c->r[6]|c->r[6]; // 801CD16C
  if (!crb(c,0)) { goto L_801CD194; } // 801CD170
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801CD174
  c->r[8]=0u+0x00000001u; // 801CD178
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801CD17C
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[8]<<((c->r[7])&31)); // 801CD180
  c->r[0]=c->r[7]&c->r[0]; cr0(c,c->r[0]); // 801CD184
  if (crb(c,2)) { goto L_801CD194; } // 801CD188
  c->r[0]=0u+0x00000001u; // 801CD18C
  goto L_801CD198; // 801CD190
L_801CD194:;
  c->r[0]=0u+0x00000000u; // 801CD194
L_801CD198:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CD198
  if (!crb(c,2)) { goto L_801CD468; } // 801CD19C
  cmps(c,0,(int32_t)c->r[4],7); // 801CD1A0
  if (crb(c,2)) { goto L_801CD3AC; } // 801CD1A4
  if (!crb(c,0)) { goto L_801CD1BC; } // 801CD1A8
  cmps(c,0,(int32_t)c->r[4],5); // 801CD1AC
  if (crb(c,2)) { goto L_801CD1D0; } // 801CD1B0
  if (!crb(c,0)) { goto L_801CD304; } // 801CD1B4
  goto L_801CD454; // 801CD1B8
L_801CD1BC:;
  c->r[7]=0u+0x00010000u; // 801CD1BC
  c->r[0]=c->r[7]+0x00000004u; // 801CD1C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801CD1C4
  if (crb(c,2)) { goto L_801CD278; } // 801CD1C8
  goto L_801CD454; // 801CD1CC
L_801CD1D0:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801CD1D0
  c->r[3]=c->r[31]|c->r[31]; // 801CD1D4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801CD1D8
  c->r[4]=c->r[28]|c->r[28]; // 801CD1DC
  c->r[5]=rotl(c->r[0],0)&0x20000000u; // 801CD1E0
  c->r[0]=rotl(c->r[0],0)&0x40000000u; // 801CD1E4
  c->r[5]=cntlz(c->r[5]); // 801CD1E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CD1EC
  c->r[0]=cntlz(c->r[0]); // 801CD1F0
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 801CD1F4
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CD1F8
  c->ctr=c->r[12]; // 801CD1FC
  if (true) { c->lr=0x801CD204u; dispatch(c,c->ctr); } // 801CD200
  c->r[3]=R32(c->r[28]+0x000000E8u); // 801CD204
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD208
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CD20C
  c->ctr=c->r[12]; // 801CD210
  if (true) { c->lr=0x801CD218u; dispatch(c,c->ctr); } // 801CD214
  c->r[0]=R32(c->r[28]+0x000000E8u); // 801CD218
  c->r[3]=0u+0x802A0000u; // 801CD21C
  c->r[3]=c->r[3]+0x000016ACu; // 801CD220
  c->r[26]=0u+0x00000000u; // 801CD224
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CD228
  c->r[27]=0u+0x00000000u; // 801CD22C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD230
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CD234
  goto L_801CD268; // 801CD238
L_801CD23C:;
  c->r[3]=R32(c->r[28]+0x000000DCu); // 801CD23C
  c->r[4]=c->r[29]|c->r[29]; // 801CD240
  c->r[5]=c->r[30]|c->r[30]; // 801CD244
  c->r[6]=c->r[1]+0x00000008u; // 801CD248
  c->r[3]=R32(c->r[3]+c->r[27]); // 801CD24C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD250
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CD254
  c->ctr=c->r[12]; // 801CD258
  if (true) { c->lr=0x801CD260u; dispatch(c,c->ctr); } // 801CD25C
  c->r[27]=c->r[27]+0x00000004u; // 801CD260
  c->r[26]=c->r[26]+0x00000001u; // 801CD264
L_801CD268:;
  c->r[0]=R32(c->r[28]+0x000000E4u); // 801CD268
  cmpu(c,0,c->r[26],c->r[0]); // 801CD26C
  if (crb(c,0)) { IRQCHK(c); goto L_801CD23C; } // 801CD270
  goto L_801CD468; // 801CD274
L_801CD278:;
  cmps(c,0,(int32_t)c->r[5],1); // 801CD278
  if (crb(c,2)) { goto L_801CD2B4; } // 801CD27C
  if (!crb(c,0)) { goto L_801CD290; } // 801CD280
  cmps(c,0,(int32_t)c->r[5],0); // 801CD284
  if (!crb(c,0)) { goto L_801CD29C; } // 801CD288
  goto L_801CD2EC; // 801CD28C
L_801CD290:;
  cmps(c,0,(int32_t)c->r[5],3); // 801CD290
  if (!crb(c,0)) { goto L_801CD2EC; } // 801CD294
  goto L_801CD2CC; // 801CD298
L_801CD29C:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CD29C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD2A0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CD2A4
  c->ctr=c->r[12]; // 801CD2A8
  if (true) { c->lr=0x801CD2B0u; dispatch(c,c->ctr); } // 801CD2AC
  goto L_801CD2EC; // 801CD2B0
L_801CD2B4:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CD2B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD2B8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CD2BC
  c->ctr=c->r[12]; // 801CD2C0
  if (true) { c->lr=0x801CD2C8u; dispatch(c,c->ctr); } // 801CD2C4
  goto L_801CD2EC; // 801CD2C8
L_801CD2CC:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CD2CC
  c->r[5]=R32(c->r[6]+0x00000004u); // 801CD2D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD2D4
  c->r[4]=R32(c->r[5]+0x00000000u); // 801CD2D8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CD2DC
  c->r[5]=R32(c->r[5]+0x00000004u); // 801CD2E0
  c->ctr=c->r[12]; // 801CD2E4
  if (true) { c->lr=0x801CD2ECu; dispatch(c,c->ctr); } // 801CD2E8
L_801CD2EC:;
  c->r[3]=c->r[28]|c->r[28]; // 801CD2EC
  c->r[4]=c->r[29]|c->r[29]; // 801CD2F0
  c->r[5]=c->r[30]|c->r[30]; // 801CD2F4
  c->r[6]=c->r[31]|c->r[31]; // 801CD2F8
  c->lr=0x801CD300u; f_801C57AC(c); // 801CD2FC
  goto L_801CD468; // 801CD300
L_801CD304:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801CD304
  cmps(c,0,(int32_t)c->r[4],0); // 801CD308
  if (crb(c,2)) { goto L_801CD34C; } // 801CD30C
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801CD310
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801CD314
  if (crb(c,2)) { goto L_801CD34C; } // 801CD318
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801CD31C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CD320
  if (crb(c,2)) { goto L_801CD34C; } // 801CD324
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CD328
  c->r[3]=c->r[4]|c->r[4]; // 801CD32C
  c->r[5]=c->r[28]|c->r[28]; // 801CD330
  c->r[6]=c->r[30]|c->r[30]; // 801CD334
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CD338
  c->r[7]=c->r[31]|c->r[31]; // 801CD33C
  c->r[4]=0u+0x00000001u; // 801CD340
  c->ctr=c->r[12]; // 801CD344
  if (true) { c->lr=0x801CD34Cu; dispatch(c,c->ctr); } // 801CD348
L_801CD34C:;
  c->r[3]=R32(c->r[28]+0x000000E8u); // 801CD34C
  c->r[4]=c->r[31]|c->r[31]; // 801CD350
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD354
  c->r[12]=R32(c->r[12]+0x00000020u); // 801CD358
  c->ctr=c->r[12]; // 801CD35C
  if (true) { c->lr=0x801CD364u; dispatch(c,c->ctr); } // 801CD360
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD364
  cmps(c,0,(int32_t)c->r[3],0); // 801CD368
  if (crb(c,2)) { goto L_801CD468; } // 801CD36C
  c->r[0]=R16(c->r[28]+0x000000DAu); // 801CD370
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801CD374
  if (crb(c,2)) { goto L_801CD468; } // 801CD378
  c->r[0]=R8(c->r[28]+0x000000D8u); // 801CD37C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CD380
  if (crb(c,2)) { goto L_801CD468; } // 801CD384
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD388
  c->r[5]=c->r[28]|c->r[28]; // 801CD38C
  c->r[6]=c->r[30]|c->r[30]; // 801CD390
  c->r[7]=c->r[31]|c->r[31]; // 801CD394
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CD398
  c->r[4]=0u+0x00000004u; // 801CD39C
  c->ctr=c->r[12]; // 801CD3A0
  if (true) { c->lr=0x801CD3A8u; dispatch(c,c->ctr); } // 801CD3A4
  goto L_801CD468; // 801CD3A8
L_801CD3AC:;
  c->r[4]=R32(c->r[3]+0x000000D4u); // 801CD3AC
  cmps(c,0,(int32_t)c->r[4],0); // 801CD3B0
  if (crb(c,2)) { goto L_801CD3F4; } // 801CD3B4
  c->r[0]=R16(c->r[3]+0x000000DAu); // 801CD3B8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801CD3BC
  if (crb(c,2)) { goto L_801CD3F4; } // 801CD3C0
  c->r[0]=R8(c->r[3]+0x000000D8u); // 801CD3C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CD3C8
  if (crb(c,2)) { goto L_801CD3F4; } // 801CD3CC
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CD3D0
  c->r[3]=c->r[4]|c->r[4]; // 801CD3D4
  c->r[5]=c->r[28]|c->r[28]; // 801CD3D8
  c->r[6]=c->r[30]|c->r[30]; // 801CD3DC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CD3E0
  c->r[7]=c->r[31]|c->r[31]; // 801CD3E4
  c->r[4]=0u+0x00000001u; // 801CD3E8
  c->ctr=c->r[12]; // 801CD3EC
  if (true) { c->lr=0x801CD3F4u; dispatch(c,c->ctr); } // 801CD3F0
L_801CD3F4:;
  c->r[3]=R32(c->r[28]+0x000000E8u); // 801CD3F4
  c->r[4]=c->r[31]|c->r[31]; // 801CD3F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD3FC
  c->r[12]=R32(c->r[12]+0x00000024u); // 801CD400
  c->ctr=c->r[12]; // 801CD404
  if (true) { c->lr=0x801CD40Cu; dispatch(c,c->ctr); } // 801CD408
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD40C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD410
  if (crb(c,2)) { goto L_801CD468; } // 801CD414
  c->r[0]=R16(c->r[28]+0x000000DAu); // 801CD418
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801CD41C
  if (crb(c,2)) { goto L_801CD468; } // 801CD420
  c->r[0]=R8(c->r[28]+0x000000D8u); // 801CD424
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CD428
  if (crb(c,2)) { goto L_801CD468; } // 801CD42C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD430
  c->r[5]=c->r[28]|c->r[28]; // 801CD434
  c->r[6]=c->r[30]|c->r[30]; // 801CD438
  c->r[7]=c->r[31]|c->r[31]; // 801CD43C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CD440
  c->r[4]=0u+0x00000004u; // 801CD444
  c->ctr=c->r[12]; // 801CD448
  if (true) { c->lr=0x801CD450u; dispatch(c,c->ctr); } // 801CD44C
  goto L_801CD468; // 801CD450
L_801CD454:;
  c->r[3]=c->r[28]|c->r[28]; // 801CD454
  c->r[4]=c->r[29]|c->r[29]; // 801CD458
  c->r[5]=c->r[30]|c->r[30]; // 801CD45C
  c->r[6]=c->r[31]|c->r[31]; // 801CD460
  c->lr=0x801CD468u; f_801C57AC(c); // 801CD464
L_801CD468:;
  c->r[11]=c->r[1]+0x00000030u; // 801CD468
  c->lr=0x801CD470u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CD46C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CD470
  c->lr=c->r[0]; // 801CD474
  c->r[1]=c->r[1]+0x00000030u; // 801CD478
  return; // 801CD47C
}

// fn_801CD480
void f_801CD480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD480
  c->r[0]=c->lr; // 801CD484
  cmps(c,0,(int32_t)c->r[3],0); // 801CD488
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD48C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD490
  c->r[31]=c->r[3]|c->r[3]; // 801CD494
  if (crb(c,2)) { goto L_801CD4A8; } // 801CD498
  cmps(c,0,(int32_t)c->r[4],0); // 801CD49C
  if (!crb(c,1)) { goto L_801CD4A8; } // 801CD4A0
  c->lr=0x801CD4A8u; f_8009230C(c); // 801CD4A4
L_801CD4A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD4A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD4AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD4B0
  c->lr=c->r[0]; // 801CD4B4
  c->r[1]=c->r[1]+0x00000010u; // 801CD4B8
  return; // 801CD4BC
}

// fn_801CD4C0
void f_801CD4C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD4C0
  c->r[0]=c->lr; // 801CD4C4
  cmps(c,0,(int32_t)c->r[3],0); // 801CD4C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD4CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD4D0
  c->r[31]=c->r[3]|c->r[3]; // 801CD4D4
  if (crb(c,2)) { goto L_801CD4E4; } // 801CD4D8
  c->r[4]=0u+0x00000000u; // 801CD4DC
  c->lr=0x801CD4E4u; f_801C5F44(c); // 801CD4E0
L_801CD4E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD4E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD4E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD4EC
  c->lr=c->r[0]; // 801CD4F0
  c->r[1]=c->r[1]+0x00000010u; // 801CD4F4
  return; // 801CD4F8
}

// fn_801CD4FC
void f_801CD4FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD4FC
  c->r[0]=c->lr; // 801CD500
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD508
  c->r[31]=c->r[4]|c->r[4]; // 801CD50C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD510
  c->r[30]=c->r[3]|c->r[3]; // 801CD514
  c->r[5]=R32(c->r[4]+0x00000000u); // 801CD518
  c->r[0]=R32(c->r[3]+0x00000018u); // 801CD51C
  cmpu(c,0,c->r[5],c->r[0]); // 801CD520
  if (crb(c,2)) { goto L_801CD588; } // 801CD524
  cmps(c,0,(int32_t)c->r[5],0); // 801CD528
  if (crb(c,2)) { goto L_801CD540; } // 801CD52C
  c->r[3]=c->r[31]|c->r[31]; // 801CD530
  c->r[4]=c->r[13]+0xFFFF90D8u; // 801CD534
  c->lr=0x801CD53Cu; f_801A9978(c); // 801CD538
  goto L_801CD544; // 801CD53C
L_801CD540:;
  c->r[3]=0u+0x00000000u; // 801CD540
L_801CD544:;
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 801CD544
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CD548
  cmps(c,0,(int32_t)c->r[0],0); // 801CD54C
  if (crb(c,2)) { goto L_801CD564; } // 801CD550
  c->r[3]=c->r[31]|c->r[31]; // 801CD554
  c->r[4]=c->r[13]+0xFFFF90D0u; // 801CD558
  c->lr=0x801CD560u; f_801A9978(c); // 801CD55C
  goto L_801CD568; // 801CD560
L_801CD564:;
  c->r[3]=0u+0x00000000u; // 801CD564
L_801CD568:;
  W32(c->r[30]+0x00000020u,c->r[3]); // 801CD568
  c->r[3]=c->r[30]|c->r[30]; // 801CD56C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CD570
  W32(c->r[30]+0x00000018u,c->r[0]); // 801CD574
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CD578
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CD57C
  c->ctr=c->r[12]; // 801CD580
  if (true) { c->lr=0x801CD588u; dispatch(c,c->ctr); } // 801CD584
L_801CD588:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD588
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD58C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD590
  c->lr=c->r[0]; // 801CD594
  c->r[1]=c->r[1]+0x00000010u; // 801CD598
  return; // 801CD59C
}

// fn_801CD5A0
void f_801CD5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD5A0
  c->r[0]=c->lr; // 801CD5A4
  cmps(c,0,(int32_t)c->r[3],0); // 801CD5A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD5AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD5B0
  c->r[31]=c->r[3]|c->r[3]; // 801CD5B4
  if (crb(c,2)) { goto L_801CD5C8; } // 801CD5B8
  cmps(c,0,(int32_t)c->r[4],0); // 801CD5BC
  if (!crb(c,1)) { goto L_801CD5C8; } // 801CD5C0
  c->lr=0x801CD5C8u; f_8009230C(c); // 801CD5C4
L_801CD5C8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD5C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD5CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD5D0
  c->lr=c->r[0]; // 801CD5D4
  c->r[1]=c->r[1]+0x00000010u; // 801CD5D8
  return; // 801CD5DC
}

// fn_801CD5E0
void f_801CD5E0(Ctx* __restrict c) {
  return; // 801CD5E0
}

// fn_801CD5E4
void f_801CD5E4(Ctx* __restrict c) {
  return; // 801CD5E4
}

// fn_801CD5E8
void f_801CD5E8(Ctx* __restrict c) {
  return; // 801CD5E8
}

// fn_801CD5EC
void f_801CD5EC(Ctx* __restrict c) {
  return; // 801CD5EC
}

// fn_801CD5F0
void f_801CD5F0(Ctx* __restrict c) {
  return; // 801CD5F0
}

// fn_801CD5F4
void f_801CD5F4(Ctx* __restrict c) {
  return; // 801CD5F4
}

// fn_801CD5F8
void f_801CD5F8(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801CD5F8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CD5FC
  c->r[3]=c->r[3]+0x00000E70u; // 801CD600
  cmpu(c,0,c->r[0],c->r[3]); // 801CD604
  if (!crb(c,2)) { goto L_801CD614; } // 801CD608
  c->r[3]=0u+0x00000001u; // 801CD60C
  return; // 801CD610
L_801CD614:;
  c->r[3]=0u+0x80270000u; // 801CD614
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CD618
  c->r[3]=c->r[3]+0x00000E18u; // 801CD61C
  cmpu(c,0,c->r[0],c->r[3]); // 801CD620
  if (!crb(c,2)) { goto L_801CD630; } // 801CD624
  c->r[3]=0u+0x00000001u; // 801CD628
  return; // 801CD62C
L_801CD630:;
  c->r[3]=0u+0x80270000u; // 801CD630
  c->r[3]=c->r[3]+0x00000DF8u; // 801CD634
  cmpu(c,0,c->r[0],c->r[3]); // 801CD638
  if (!crb(c,2)) { goto L_801CD648; } // 801CD63C
  c->r[3]=0u+0x00000001u; // 801CD640
  return; // 801CD644
L_801CD648:;
  c->r[3]=0u+0x80270000u; // 801CD648
  c->r[3]=c->r[3]+0x00000CD0u; // 801CD64C
  c->r[0]=c->r[3]-c->r[0]; // 801CD650
  c->r[0]=cntlz(c->r[0]); // 801CD654
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CD658
  return; // 801CD65C
}

// fn_801CD660
void f_801CD660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD660
  c->r[0]=c->lr; // 801CD664
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD668
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD66C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CD670
  c->ctr=c->r[12]; // 801CD674
  if (true) { c->lr=0x801CD67Cu; dispatch(c,c->ctr); } // 801CD678
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD67C
  c->r[3]=c->r[3]+0x00000004u; // 801CD680
  c->lr=c->r[0]; // 801CD684
  c->r[1]=c->r[1]+0x00000010u; // 801CD688
  return; // 801CD68C
}

// fn_801CD690
void f_801CD690(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801CD690
  c->r[3]=c->r[3]+0x00000E70u; // 801CD694
  return; // 801CD698
}

// CalcMaterialDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d12AnmObjTexPatPQ34nw4r3g3d12AnmObjTexSrtPQ34nw4r3g3d12AnmObjMatClr
void f_801CD69C(Ctx* __restrict c) {
  trace_call(0x801CD69Cu);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD69C
  c->r[0]=c->lr; // 801CD6A0
  W32(c->r[1]+0x00000214u,c->r[0]); // 801CD6A4
  c->r[11]=c->r[1]+0x00000210u; // 801CD6A8
  c->lr=0x801CD6B0u; f_80109F04(c); // 801CD6AC
  c->r[15]=c->r[3]|c->r[3]; // 801CD6B0
  c->r[16]=c->r[4]|c->r[4]; // 801CD6B4
  c->r[17]=c->r[5]|c->r[5]; // 801CD6B8
  c->r[18]=c->r[6]|c->r[6]; // 801CD6BC
  c->lr=0x801CD6C4u; f_801AA050(c); // 801CD6C0
  c->r[27]=c->r[1]+0x000000A8u; // 801CD6C4
  c->r[0]=c->r[1]+0x0000008Cu; // 801CD6C8
  c->r[4]=c->r[27]-c->r[0]; // 801CD6CC
  c->r[28]=c->r[1]+0x000000C8u; // 801CD6D0
  c->r[0]=c->r[1]+0x000000ACu; // 801CD6D4
  W32(c->r[1]+0x000001B8u,c->r[3]); // 801CD6D8
  c->r[6]=c->r[28]-c->r[0]; // 801CD6DC
  c->r[5]=c->r[4]+0x00000003u; // 801CD6E0
  c->r[0]=rotl(c->r[4],0)&0x80000000u; // 801CD6E4
  c->r[19]=0u+0x00000000u; // 801CD6E8
  c->r[3]=sraw(c,c->r[5],2); // 801CD6EC
  c->r[7]=c->r[6]+0x00000003u; // 801CD6F0
  c->r[4]=addc(c,c->r[3],0,c->xer_ca); // 801CD6F4
  W32(c->r[1]+0x000001B4u,c->r[0]); // 801CD6F8
  c->r[3]=sraw(c,c->r[7],2); // 801CD6FC
  c->r[0]=rotl(c->r[5],0)&0x80000000u; // 801CD700
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801CD704
  c->r[26]=c->r[4]+0x00000001u; // 801CD708
  c->r[24]=c->r[3]+0x00000001u; // 801CD70C
  W32(c->r[1]+0x000001B0u,c->r[0]); // 801CD710
  c->r[25]=rotl(c->r[4],0)&0x80000000u; // 801CD714
  c->r[14]=rotl(c->r[26],0)&0x80000000u; // 801CD718
  c->r[23]=rotl(c->r[6],0)&0x80000000u; // 801CD71C
  c->r[22]=rotl(c->r[7],0)&0x80000000u; // 801CD720
  c->r[21]=rotl(c->r[3],0)&0x80000000u; // 801CD724
  c->r[20]=rotl(c->r[24],0)&0x80000000u; // 801CD728
  c->r[29]=0u+0x00000000u; // 801CD72C
  goto L_801CDA88; // 801CD730
L_801CD734:;
  c->r[3]=c->r[15]|c->r[15]; // 801CD734
  c->r[4]=c->r[19]|c->r[19]; // 801CD738
  c->lr=0x801CD740u; f_801A9FFC(c); // 801CD73C
  cmps(c,0,(int32_t)c->r[16],0); // 801CD740
  c->r[31]=c->r[3]|c->r[3]; // 801CD744
  if (crb(c,2)) { goto L_801CD97C; } // 801CD748
  c->r[3]=c->r[16]|c->r[16]; // 801CD74C
  c->r[4]=c->r[19]|c->r[19]; // 801CD750
  c->lr=0x801CD758u; f_801B28C4(c); // 801CD754
  cmps(c,0,(int32_t)c->r[3],0); // 801CD758
  if (crb(c,2)) { goto L_801CD97C; } // 801CD75C
  c->r[4]=c->r[1]+0x0000008Cu; // 801CD760
  W32(c->r[1]+0x00000088u,c->r[29]); // 801CD764
  cmpu(c,0,c->r[4],c->r[27]); // 801CD768
  if (!crb(c,0)) { goto L_801CD858; } // 801CD76C
  cmps(c,0,(int32_t)c->r[26],8); // 801CD770
  if (!crb(c,1)) { goto L_801CD834; } // 801CD774
  c->r[0]=c->r[4]|c->r[4]; // 801CD778
  c->r[3]=0u+0x00000000u; // 801CD77C
  cmpu(c,0,c->r[0],c->r[27]); // 801CD780
  c->r[5]=0u+0x00000000u; // 801CD784
  if (crb(c,1)) { goto L_801CD7B8; } // 801CD788
  c->r[0]=R32(c->r[1]+0x000001B4u); // 801CD78C
  c->r[6]=0u+0x00000001u; // 801CD790
  cmps(c,0,(int32_t)c->r[0],0); // 801CD794
  if (!crb(c,2)) { goto L_801CD7AC; } // 801CD798
  c->r[0]=R32(c->r[1]+0x000001B0u); // 801CD79C
  cmps(c,0,(int32_t)c->r[0],0); // 801CD7A0
  if (crb(c,2)) { goto L_801CD7AC; } // 801CD7A4
  c->r[6]=0u+0x00000000u; // 801CD7A8
L_801CD7AC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CD7AC
  if (crb(c,2)) { goto L_801CD7B8; } // 801CD7B0
  c->r[5]=0u+0x00000001u; // 801CD7B4
L_801CD7B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CD7B8
  if (crb(c,2)) { goto L_801CD7E4; } // 801CD7BC
  cmps(c,0,(int32_t)c->r[25],0); // 801CD7C0
  c->r[0]=0u+0x00000001u; // 801CD7C4
  if (!crb(c,2)) { goto L_801CD7D8; } // 801CD7C8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[14]); // 801CD7CC
  if (crb(c,2)) { goto L_801CD7D8; } // 801CD7D0
  c->r[0]=0u+0x00000000u; // 801CD7D4
L_801CD7D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CD7D8
  if (crb(c,2)) { goto L_801CD7E4; } // 801CD7DC
  c->r[3]=0u+0x00000001u; // 801CD7E0
L_801CD7E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CD7E4
  if (crb(c,2)) { goto L_801CD834; } // 801CD7E8
  c->r[3]=c->r[1]+0x00000088u; // 801CD7EC
  c->r[0]=c->r[3]+0x0000001Fu; // 801CD7F0
  c->r[0]=c->r[0]-c->r[4]; // 801CD7F4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CD7F8
  c->ctr=c->r[0]; // 801CD7FC
  c->r[0]=c->r[3]|c->r[3]; // 801CD800
  cmpu(c,0,c->r[4],c->r[0]); // 801CD804
  if (!crb(c,0)) { goto L_801CD834; } // 801CD808
L_801CD80C:;
  W32(c->r[4]+0x00000000u,c->r[29]); // 801CD80C
  W32(c->r[4]+0x00000004u,c->r[29]); // 801CD810
  W32(c->r[4]+0x00000008u,c->r[29]); // 801CD814
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 801CD818
  W32(c->r[4]+0x00000010u,c->r[29]); // 801CD81C
  W32(c->r[4]+0x00000014u,c->r[29]); // 801CD820
  W32(c->r[4]+0x00000018u,c->r[29]); // 801CD824
  W32(c->r[4]+0x0000001Cu,c->r[29]); // 801CD828
  c->r[4]=c->r[4]+0x00000020u; // 801CD82C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CD80C; } // 801CD830
L_801CD834:;
  c->r[0]=c->r[27]+0x00000003u; // 801CD834
  c->r[0]=c->r[0]-c->r[4]; // 801CD838
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801CD83C
  c->ctr=c->r[0]; // 801CD840
  cmpu(c,0,c->r[4],c->r[27]); // 801CD844
  if (!crb(c,0)) { goto L_801CD858; } // 801CD848
L_801CD84C:;
  W32(c->r[4]+0x00000000u,c->r[29]); // 801CD84C
  c->r[4]=c->r[4]+0x00000004u; // 801CD850
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CD84C; } // 801CD854
L_801CD858:;
  c->r[3]=c->r[1]+0x000000ACu; // 801CD858
  W32(c->r[1]+0x000000A8u,c->r[29]); // 801CD85C
  cmpu(c,0,c->r[3],c->r[28]); // 801CD860
  if (!crb(c,0)) { goto L_801CD940; } // 801CD864
  cmps(c,0,(int32_t)c->r[24],8); // 801CD868
  if (!crb(c,1)) { goto L_801CD91C; } // 801CD86C
  c->r[0]=c->r[3]|c->r[3]; // 801CD870
  c->r[4]=0u+0x00000000u; // 801CD874
  cmpu(c,0,c->r[0],c->r[28]); // 801CD878
  c->r[0]=0u+0x00000000u; // 801CD87C
  if (crb(c,1)) { goto L_801CD8A8; } // 801CD880
  cmps(c,0,(int32_t)c->r[23],0); // 801CD884
  c->r[5]=0u+0x00000001u; // 801CD888
  if (!crb(c,2)) { goto L_801CD89C; } // 801CD88C
  cmps(c,0,(int32_t)c->r[22],0); // 801CD890
  if (crb(c,2)) { goto L_801CD89C; } // 801CD894
  c->r[5]=0u+0x00000000u; // 801CD898
L_801CD89C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CD89C
  if (crb(c,2)) { goto L_801CD8A8; } // 801CD8A0
  c->r[4]=0u+0x00000001u; // 801CD8A4
L_801CD8A8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CD8A8
  if (crb(c,2)) { goto L_801CD8D4; } // 801CD8AC
  cmps(c,0,(int32_t)c->r[21],0); // 801CD8B0
  c->r[4]=0u+0x00000001u; // 801CD8B4
  if (!crb(c,2)) { goto L_801CD8C8; } // 801CD8B8
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[20]); // 801CD8BC
  if (crb(c,2)) { goto L_801CD8C8; } // 801CD8C0
  c->r[4]=0u+0x00000000u; // 801CD8C4
L_801CD8C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CD8C8
  if (crb(c,2)) { goto L_801CD8D4; } // 801CD8CC
  c->r[0]=0u+0x00000001u; // 801CD8D0
L_801CD8D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CD8D4
  if (crb(c,2)) { goto L_801CD91C; } // 801CD8D8
  c->r[0]=c->r[27]+0x0000001Fu; // 801CD8DC
  c->r[0]=c->r[0]-c->r[3]; // 801CD8E0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CD8E4
  c->ctr=c->r[0]; // 801CD8E8
  cmpu(c,0,c->r[3],c->r[27]); // 801CD8EC
  if (!crb(c,0)) { goto L_801CD91C; } // 801CD8F0
L_801CD8F4:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 801CD8F4
  W32(c->r[3]+0x00000004u,c->r[29]); // 801CD8F8
  W32(c->r[3]+0x00000008u,c->r[29]); // 801CD8FC
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 801CD900
  W32(c->r[3]+0x00000010u,c->r[29]); // 801CD904
  W32(c->r[3]+0x00000014u,c->r[29]); // 801CD908
  W32(c->r[3]+0x00000018u,c->r[29]); // 801CD90C
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 801CD910
  c->r[3]=c->r[3]+0x00000020u; // 801CD914
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CD8F4; } // 801CD918
L_801CD91C:;
  c->r[0]=c->r[28]+0x00000003u; // 801CD91C
  c->r[0]=c->r[0]-c->r[3]; // 801CD920
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801CD924
  c->ctr=c->r[0]; // 801CD928
  cmpu(c,0,c->r[3],c->r[28]); // 801CD92C
  if (!crb(c,0)) { goto L_801CD940; } // 801CD930
L_801CD934:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 801CD934
  c->r[3]=c->r[3]+0x00000004u; // 801CD938
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CD934; } // 801CD93C
L_801CD940:;
  c->r[12]=R32(c->r[16]+0x00000000u); // 801CD940
  c->r[3]=c->r[16]|c->r[16]; // 801CD944
  c->r[5]=c->r[19]|c->r[19]; // 801CD948
  c->r[4]=c->r[1]+0x00000084u; // 801CD94C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CD950
  c->ctr=c->r[12]; // 801CD954
  if (true) { c->lr=0x801CD95Cu; dispatch(c,c->ctr); } // 801CD958
  c->r[4]=c->r[31]+0x00000144u; // 801CD95C
  c->r[0]=c->r[31]+0x00000040u; // 801CD960
  W32(c->r[1]+0x00000018u,c->r[4]); // 801CD964
  c->r[5]=c->r[3]|c->r[3]; // 801CD968
  c->r[3]=c->r[1]+0x0000001Cu; // 801CD96C
  c->r[4]=c->r[1]+0x00000018u; // 801CD970
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CD974
  c->lr=0x801CD97Cu; f_801B2F88(c); // 801CD978
L_801CD97C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801CD97C
  if (crb(c,2)) { goto L_801CDA00; } // 801CD980
  c->r[3]=c->r[17]|c->r[17]; // 801CD984
  c->r[4]=c->r[19]|c->r[19]; // 801CD988
  c->lr=0x801CD990u; f_801B32F0(c); // 801CD98C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD990
  if (crb(c,2)) { goto L_801CDA00; } // 801CD994
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801CD998
  c->r[30]=c->r[31]+0x000001A8u; // 801CD99C
  cmps(c,0,(int32_t)c->r[0],0); // 801CD9A0
  if (crb(c,2)) { goto L_801CD9B0; } // 801CD9A4
  c->r[3]=c->r[31]+c->r[0]; // 801CD9A8
  goto L_801CD9B4; // 801CD9AC
L_801CD9B0:;
  c->r[3]=0u+0x00000000u; // 801CD9B0
L_801CD9B4:;
  c->r[0]=c->r[3]+0x000000A0u; // 801CD9B4
  c->r[3]=c->r[17]|c->r[17]; // 801CD9B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD9BC
  c->r[5]=c->r[19]|c->r[19]; // 801CD9C0
  c->r[4]=c->r[1]+0x000000C8u; // 801CD9C4
  c->r[12]=R32(c->r[17]+0x00000000u); // 801CD9C8
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CD9CC
  c->ctr=c->r[12]; // 801CD9D0
  if (true) { c->lr=0x801CD9D8u; dispatch(c,c->ctr); } // 801CD9D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD9D8
  c->r[5]=c->r[3]|c->r[3]; // 801CD9DC
  W32(c->r[1]+0x00000014u,c->r[30]); // 801CD9E0
  c->r[3]=c->r[1]+0x00000014u; // 801CD9E4
  c->r[4]=c->r[1]+0x00000010u; // 801CD9E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CD9EC
  c->lr=0x801CD9F4u; f_801B3A4C(c); // 801CD9F0
  c->r[3]=c->r[1]+0x00000024u; // 801CD9F4
  c->r[4]=0u+0x00000000u; // 801CD9F8
  c->lr=0x801CDA00u; f_801AB5D8(c); // 801CD9FC
L_801CDA00:;
  cmps(c,0,(int32_t)c->r[18],0); // 801CDA00
  if (crb(c,2)) { goto L_801CDA84; } // 801CDA04
  c->r[3]=c->r[18]|c->r[18]; // 801CDA08
  c->r[4]=c->r[19]|c->r[19]; // 801CDA0C
  c->lr=0x801CDA14u; f_801B1B40(c); // 801CDA10
  cmps(c,0,(int32_t)c->r[3],0); // 801CDA14
  if (crb(c,2)) { goto L_801CDA84; } // 801CDA18
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801CDA1C
  cmps(c,0,(int32_t)c->r[0],0); // 801CDA20
  if (crb(c,2)) { goto L_801CDA30; } // 801CDA24
  c->r[3]=c->r[31]+c->r[0]; // 801CDA28
  goto L_801CDA34; // 801CDA2C
L_801CDA30:;
  c->r[3]=0u+0x00000000u; // 801CDA30
L_801CDA34:;
  c->r[0]=c->r[3]+0x00000020u; // 801CDA34
  c->r[3]=c->r[18]|c->r[18]; // 801CDA38
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CDA3C
  c->r[5]=c->r[19]|c->r[19]; // 801CDA40
  c->r[30]=c->r[31]+0x000003F0u; // 801CDA44
  c->r[4]=c->r[1]+0x00000028u; // 801CDA48
  c->r[12]=R32(c->r[18]+0x00000000u); // 801CDA4C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CDA50
  c->ctr=c->r[12]; // 801CDA54
  if (true) { c->lr=0x801CDA5Cu; dispatch(c,c->ctr); } // 801CDA58
  c->r[0]=R32(c->r[1]+0x00000020u); // 801CDA5C
  c->r[5]=c->r[3]|c->r[3]; // 801CDA60
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801CDA64
  c->r[3]=c->r[1]+0x0000000Cu; // 801CDA68
  c->r[4]=c->r[1]+0x00000008u; // 801CDA6C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CDA70
  c->lr=0x801CDA78u; f_801B2200(c); // 801CDA74
  c->r[3]=c->r[1]+0x00000020u; // 801CDA78
  c->r[4]=0u+0x00000000u; // 801CDA7C
  c->lr=0x801CDA84u; f_801AB5BC(c); // 801CDA80
L_801CDA84:;
  c->r[19]=c->r[19]+0x00000001u; // 801CDA84
L_801CDA88:;
  c->r[0]=R32(c->r[1]+0x000001B8u); // 801CDA88
  cmpu(c,0,c->r[19],c->r[0]); // 801CDA8C
  if (crb(c,0)) { IRQCHK(c); goto L_801CD734; } // 801CDA90
  c->r[11]=c->r[1]+0x00000210u; // 801CDA94
  c->lr=0x801CDA9Cu; f_80109F50(c); // 801CDA98
  c->r[0]=R32(c->r[1]+0x00000214u); // 801CDA9C
  c->lr=c->r[0]; // 801CDAA0
  c->r[1]=c->r[1]+0x00000210u; // 801CDAA4
  return; // 801CDAA8
}

// G3dInit__Q24nw4r3g3dFb
void f_801CDAAC(Ctx* __restrict c) {
  trace_call(0x801CDAACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDAAC
  c->r[0]=c->lr; // 801CDAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDAB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDAB8
  c->r[31]=c->r[3]|c->r[3]; // 801CDABC
  c->r[3]=R32(c->r[13]+0xFFFF90E0u); // 801CDAC0
  c->lr=0x801CDAC8u; f_800DF258(c); // 801CDAC4
  cmps(c,0,(int32_t)c->r[31],0); // 801CDAC8
  if (crb(c,2)) { goto L_801CDAD8; } // 801CDACC
  c->lr=0x801CDAD4u; f_8017B084(c); // 801CDAD0
  goto L_801CDADC; // 801CDAD4
L_801CDAD8:;
  c->lr=0x801CDADCu; f_8017B0E4(c); // 801CDAD8
L_801CDADC:;
  c->r[3]=0u+0x00000004u; // 801CDADC
  c->r[3]=c->r[3]|0x00040000u; // 801CDAE0
  mtspr(c,914,c->r[3]); // 801CDAE4
  c->r[3]=0u+0x00000005u; // 801CDAE8
  c->r[3]=c->r[3]|0x00050000u; // 801CDAEC
  mtspr(c,915,c->r[3]); // 801CDAF0
  c->r[3]=0u+0x00000006u; // 801CDAF4
  c->r[3]=c->r[3]|0x00060000u; // 801CDAF8
  mtspr(c,916,c->r[3]); // 801CDAFC
  c->r[3]=0u+0x00000007u; // 801CDB00
  c->r[3]=c->r[3]|0x00070000u; // 801CDB04
  mtspr(c,917,c->r[3]); // 801CDB08
  c->r[4]=0u+0x05070000u; // 801CDB0C
  c->r[0]=c->r[4]+0x00000507u; // 801CDB10
  mtspr(c,918,c->r[0]); // 801CDB14
  c->r[4]=0u+0x08070000u; // 801CDB18
  c->r[0]=c->r[4]+0x00000807u; // 801CDB1C
  mtspr(c,919,c->r[0]); // 801CDB20
  c->lr=0x801CDB28u; f_800F8364(c); // 801CDB24
  cmps(c,0,(int32_t)c->r[3],2); // 801CDB28
  if (crb(c,2)) { goto L_801CDB74; } // 801CDB2C
  if (!crb(c,0)) { goto L_801CDB44; } // 801CDB30
  cmps(c,0,(int32_t)c->r[3],0); // 801CDB34
  if (crb(c,2)) { goto L_801CDB50; } // 801CDB38
  if (!crb(c,0)) { goto L_801CDB5C; } // 801CDB3C
  goto L_801CDB80; // 801CDB40
L_801CDB44:;
  cmps(c,0,(int32_t)c->r[3],5); // 801CDB44
  if (crb(c,2)) { goto L_801CDB68; } // 801CDB48
  goto L_801CDB80; // 801CDB4C
L_801CDB50:;
  c->r[3]=0u+0x80290000u; // 801CDB50
  c->r[3]=c->r[3]+0x00005BE0u; // 801CDB54
  goto L_801CDB88; // 801CDB58
L_801CDB5C:;
  c->r[3]=0u+0x80290000u; // 801CDB5C
  c->r[3]=c->r[3]+0x00005CD0u; // 801CDB60
  goto L_801CDB88; // 801CDB64
L_801CDB68:;
  c->r[3]=0u+0x80290000u; // 801CDB68
  c->r[3]=c->r[3]+0x00005D0Cu; // 801CDB6C
  goto L_801CDB88; // 801CDB70
L_801CDB74:;
  c->r[3]=0u+0x80290000u; // 801CDB74
  c->r[3]=c->r[3]+0x00005C58u; // 801CDB78
  goto L_801CDB88; // 801CDB7C
L_801CDB80:;
  c->r[3]=0u+0x80290000u; // 801CDB80
  c->r[3]=c->r[3]+0x00005BE0u; // 801CDB84
L_801CDB88:;
  c->lr=0x801CDB8Cu; f_801BB470(c); // 801CDB88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDB8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDB90
  c->lr=c->r[0]; // 801CDB94
  c->r[1]=c->r[1]+0x00000010u; // 801CDB98
  return; // 801CDB9C
}

// G3dReset__Q24nw4r3g3dFv
void f_801CDBA0(Ctx* __restrict c) {
  trace_call(0x801CDBA0u);
  c->r[3]=0u+0x000007FFu; // 801CDBA0
  f_801BB67C(c); return; // 801CDBA4
}

// __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
void f_801CDBA8(Ctx* __restrict c) {
  trace_call(0x801CDBA8u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CDBA8
  return; // 801CDBAC
}

// Init__Q34nw4r3g3d3FogFv
void f_801CDBB0(Ctx* __restrict c) {
  trace_call(0x801CDBB0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CDBB0
  cmps(c,0,(int32_t)c->r[3],0); // 801CDBB4
  if (crb(c,2)) return; // 801CDBB8
  c->r[0]=0u+0x00000000u; // 801CDBBC
  {uint32_t ea=c->r[2]+0xFFFF9CD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDBC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CDBC4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801CDBC8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801CDBCC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CDBD0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801CDBD4
  W8(c->r[3]+0x00000017u,c->r[0]); // 801CDBD8
  W8(c->r[3]+0x00000016u,c->r[0]); // 801CDBDC
  W8(c->r[3]+0x00000015u,c->r[0]); // 801CDBE0
  W8(c->r[3]+0x00000014u,c->r[0]); // 801CDBE4
  W8(c->r[3]+0x00000018u,c->r[0]); // 801CDBE8
  W8(c->r[3]+0x00000019u,c->r[0]); // 801CDBEC
  W16(c->r[3]+0x0000001Au,c->r[0]); // 801CDBF0
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 801CDBF4
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 801CDBF8
  W16(c->r[3]+0x00000020u,c->r[0]); // 801CDBFC
  W16(c->r[3]+0x00000022u,c->r[0]); // 801CDC00
  W16(c->r[3]+0x00000024u,c->r[0]); // 801CDC04
  W16(c->r[3]+0x00000026u,c->r[0]); // 801CDC08
  W16(c->r[3]+0x00000028u,c->r[0]); // 801CDC0C
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801CDC10
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 801CDC14
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 801CDC18
  return; // 801CDC1C
}

// CopyTo__Q34nw4r3g3d3FogCFPv
void f_801CDC20(Ctx* __restrict c) {
  trace_call(0x801CDC20u);
  cmps(c,0,(int32_t)c->r[4],0); // 801CDC20
  if (crb(c,2)) { goto L_801CDC6C; } // 801CDC24
  c->r[5]=R32(c->r[3]+0x00000000u); // 801CDC28
  cmps(c,0,(int32_t)c->r[5],0); // 801CDC2C
  if (crb(c,2)) { goto L_801CDC6C; } // 801CDC30
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=RF64(ea);} // 801CDC34
  c->r[3]=c->r[4]|c->r[4]; // 801CDC38
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 801CDC3C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=RF64(ea);} // 801CDC40
  {uint32_t ea=c->r[4]+0x00000008u; WF64(ea,c->f[0]);} // 801CDC44
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=RF64(ea);} // 801CDC48
  {uint32_t ea=c->r[4]+0x00000010u; WF64(ea,c->f[0]);} // 801CDC4C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=RF64(ea);} // 801CDC50
  {uint32_t ea=c->r[4]+0x00000018u; WF64(ea,c->f[0]);} // 801CDC54
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=RF64(ea);} // 801CDC58
  {uint32_t ea=c->r[4]+0x00000020u; WF64(ea,c->f[0]);} // 801CDC5C
  {uint32_t ea=c->r[5]+0x00000028u; c->f[0]=RF64(ea);} // 801CDC60
  {uint32_t ea=c->r[4]+0x00000028u; WF64(ea,c->f[0]);} // 801CDC64
  return; // 801CDC68
L_801CDC6C:;
  c->r[3]=0u+0x00000000u; // 801CDC6C
  return; // 801CDC70
}

// SetFogRangeAdjParam__Q34nw4r3g3d3FogFUsUsRCQ34nw4r4math5MTX44
void f_801CDC74(Ctx* __restrict c) {
  trace_call(0x801CDC74u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CDC74
  cmps(c,0,(int32_t)c->r[3],0); // 801CDC78
  if (crb(c,2)) return; // 801CDC7C
  W16(c->r[3]+0x0000001Au,c->r[5]); // 801CDC80
  c->r[5]=c->r[6]|c->r[6]; // 801CDC84
  c->r[3]=c->r[3]+0x0000001Cu; // 801CDC88
  f_801080CC(c); return; // 801CDC8C
  return; // 801CDC90
}

// SetGP__Q34nw4r3g3d3FogCFv
void f_801CDC94(Ctx* __restrict c) {
  trace_call(0x801CDC94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDC94
  c->r[0]=c->lr; // 801CDC98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CDC9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CDCA0
  c->r[31]=R32(c->r[3]+0x00000000u); // 801CDCA4
  cmps(c,0,(int32_t)c->r[31],0); // 801CDCA8
  if (crb(c,2)) { goto L_801CDD08; } // 801CDCAC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDCB0
  cmps(c,0,(int32_t)c->r[0],0); // 801CDCB4
  if (crb(c,2)) { goto L_801CDCCC; } // 801CDCB8
  c->r[3]=R8(c->r[31]+0x00000018u); // 801CDCBC
  c->r[5]=c->r[31]+0x0000001Cu; // 801CDCC0
  c->r[4]=R16(c->r[31]+0x0000001Au); // 801CDCC4
  c->lr=0x801CDCCCu; f_8010822C(c); // 801CDCC8
L_801CDCCC:;
  c->r[0]=R8(c->r[31]+0x00000014u); // 801CDCCC
  c->r[4]=c->r[1]+0x00000008u; // 801CDCD0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801CDCD4
  c->r[0]=R8(c->r[31]+0x00000015u); // 801CDCD8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801CDCDC
  c->r[0]=R8(c->r[31]+0x00000016u); // 801CDCE0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801CDCE4
  c->r[0]=R8(c->r[31]+0x00000017u); // 801CDCE8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801CDCEC
  c->r[3]=R32(c->r[31]+0x00000000u); // 801CDCF0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDCF4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDCF8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CDCFC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDD00
  c->lr=0x801CDD08u; f_80107EA0(c); // 801CDD04
L_801CDD08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CDD08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CDD0C
  c->lr=c->r[0]; // 801CDD10
  c->r[1]=c->r[1]+0x00000020u; // 801CDD14
  return; // 801CDD18
}

// Clear__Q34nw4r3g3d8LightObjFv
void f_801CDD1C(Ctx* __restrict c) {
  trace_call(0x801CDD1Cu);
  c->r[0]=0u+0x00000000u; // 801CDD1C
  c->r[4]=0u+0x00000040u; // 801CDD20
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CDD24
  c->r[3]=c->r[3]+0x00000004u; // 801CDD28
  f_801B82AC(c); return; // 801CDD2C
}

// InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor
void f_801CDD30(Ctx* __restrict c) {
  trace_call(0x801CDD30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDD30
  c->r[0]=c->lr; // 801CDD34
  c->r[7]=R8(c->r[4]+0x00000000u); // 801CDD38
  c->r[3]=c->r[3]+0x00000004u; // 801CDD3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDD40
  c->r[6]=R8(c->r[4]+0x00000001u); // 801CDD44
  c->r[5]=R8(c->r[4]+0x00000002u); // 801CDD48
  c->r[0]=R8(c->r[4]+0x00000003u); // 801CDD4C
  c->r[4]=c->r[1]+0x00000008u; // 801CDD50
  W8(c->r[1]+0x00000008u,c->r[7]); // 801CDD54
  W8(c->r[1]+0x00000009u,c->r[6]); // 801CDD58
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801CDD5C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801CDD60
  c->lr=0x801CDD68u; f_80106100(c); // 801CDD64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDD68
  c->lr=c->r[0]; // 801CDD6C
  c->r[1]=c->r[1]+0x00000010u; // 801CDD70
  return; // 801CDD74
}

// InitLightPos__Q34nw4r3g3d8LightObjFfff
void f_801CDD78(Ctx* __restrict c) {
  trace_call(0x801CDD78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDD78
  c->r[0]=c->lr; // 801CDD7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDD80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDD84
  c->r[31]=c->r[3]|c->r[3]; // 801CDD88
  c->r[3]=c->r[3]+0x00000004u; // 801CDD8C
  c->lr=0x801CDD94u; f_80105F84(c); // 801CDD90
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDD94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CDD98
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CDD9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDDA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDDA4
  c->lr=c->r[0]; // 801CDDA8
  c->r[1]=c->r[1]+0x00000010u; // 801CDDAC
  return; // 801CDDB0
}

// InitLightDir__Q34nw4r3g3d8LightObjFfff
void f_801CDDB4(Ctx* __restrict c) {
  trace_call(0x801CDDB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDDB4
  c->r[0]=c->lr; // 801CDDB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDDBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDDC0
  c->r[31]=c->r[3]|c->r[3]; // 801CDDC4
  c->r[3]=c->r[3]+0x00000004u; // 801CDDC8
  c->lr=0x801CDDD0u; f_80105FB0(c); // 801CDDCC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDDD0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CDDD4
  c->r[0]=c->r[0]|0x00000001u; // 801CDDD8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CDDDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDDE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDDE4
  c->lr=c->r[0]; // 801CDDE8
  c->r[1]=c->r[1]+0x00000010u; // 801CDDEC
  return; // 801CDDF0
}

// InitLightSpot__Q34nw4r3g3d8LightObjFf9_GXSpotFn
void f_801CDDF4(Ctx* __restrict c) {
  trace_call(0x801CDDF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDDF4
  c->r[0]=c->lr; // 801CDDF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDDFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDE00
  c->r[31]=c->r[3]|c->r[3]; // 801CDE04
  c->r[3]=c->r[3]+0x00000004u; // 801CDE08
  c->lr=0x801CDE10u; f_80105D2C(c); // 801CDE0C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDE10
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CDE14
  c->r[0]=c->r[0]|0x00000001u; // 801CDE18
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CDE1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDE20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDE24
  c->lr=c->r[0]; // 801CDE28
  c->r[1]=c->r[1]+0x00000010u; // 801CDE2C
  return; // 801CDE30
}

// InitLightAttnA__Q34nw4r3g3d8LightObjFfff
void f_801CDE34(Ctx* __restrict c) {
  trace_call(0x801CDE34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDE34
  c->r[0]=c->lr; // 801CDE38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDE3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDE40
  c->r[31]=c->r[3]|c->r[3]; // 801CDE44
  c->r[3]=c->r[3]+0x00000004u; // 801CDE48
  c->lr=0x801CDE50u; f_80105D0C(c); // 801CDE4C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDE50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CDE54
  c->r[0]=c->r[0]|0x00000001u; // 801CDE58
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CDE5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDE60
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDE64
  c->lr=c->r[0]; // 801CDE68
  c->r[1]=c->r[1]+0x00000010u; // 801CDE6C
  return; // 801CDE70
}

// InitLightDistAttn__Q34nw4r3g3d8LightObjFff13_GXDistAttnFn
void f_801CDE74(Ctx* __restrict c) {
  trace_call(0x801CDE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDE74
  c->r[0]=c->lr; // 801CDE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDE7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDE80
  c->r[31]=c->r[3]|c->r[3]; // 801CDE84
  c->r[3]=c->r[3]+0x00000004u; // 801CDE88
  c->lr=0x801CDE90u; f_80105EB4(c); // 801CDE8C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDE90
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CDE94
  c->r[0]=c->r[0]|0x00000001u; // 801CDE98
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CDE9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDEA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDEA4
  c->lr=c->r[0]; // 801CDEA8
  c->r[1]=c->r[1]+0x00000010u; // 801CDEAC
  return; // 801CDEB0
}

// InitLightAttnK__Q34nw4r3g3d8LightObjFfff
void f_801CDEB4(Ctx* __restrict c) {
  trace_call(0x801CDEB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDEB4
  c->r[0]=c->lr; // 801CDEB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDEBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDEC0
  c->r[31]=c->r[3]|c->r[3]; // 801CDEC4
  c->r[3]=c->r[3]+0x00000004u; // 801CDEC8
  c->lr=0x801CDED0u; f_80105D1C(c); // 801CDECC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDED0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CDED4
  c->r[0]=c->r[0]|0x00000001u; // 801CDED8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CDEDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDEE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDEE4
  c->lr=c->r[0]; // 801CDEE8
  c->r[1]=c->r[1]+0x00000010u; // 801CDEEC
  return; // 801CDEF0
}

// InitLightAttnK__Q34nw4r3g3d8LightObjFfff_801CDEF4
void f_801CDEF4(Ctx* __restrict c) {
  trace_call(0x801CDEF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDEF4
  c->r[0]=c->lr; // 801CDEF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDEFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDF00
  c->r[31]=c->r[3]|c->r[3]; // 801CDF04
  c->r[3]=c->r[3]+0x00000004u; // 801CDF08
  c->lr=0x801CDF10u; f_80105FB0(c); // 801CDF0C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDF10
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CDF14
  c->r[0]=c->r[0]|0x0000000Au; // 801CDF18
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CDF1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDF20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDF24
  c->lr=c->r[0]; // 801CDF28
  c->r[1]=c->r[1]+0x00000010u; // 801CDF2C
  return; // 801CDF30
}

// InitLightShininess__Q34nw4r3g3d8LightObjFf
void f_801CDF34(Ctx* __restrict c) {
  trace_call(0x801CDF34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDF34
  c->r[0]=c->lr; // 801CDF38
  c->f[4]=c->f[1]; // 801CDF3C
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDF40
  {uint32_t ea=c->r[2]+0xFFFF9CE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDF48
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801CDF4C
  {uint32_t ea=c->r[2]+0xFFFF9CE4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CDF50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDF54
  c->r[31]=c->r[3]|c->r[3]; // 801CDF58
  c->f[2]=c->f[1]; // 801CDF5C
  c->r[3]=c->r[3]+0x00000004u; // 801CDF60
  c->f[5]=c->f[1]; // 801CDF64
  c->f[6]=c->ps1[6]=S(c->f[3]-c->f[4]); // 801CDF68
  c->lr=0x801CDF70u; f_80105CF0(c); // 801CDF6C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CDF70
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CDF74
  c->r[0]=c->r[0]|0x00000002u; // 801CDF78
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CDF7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDF80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDF84
  c->lr=c->r[0]; // 801CDF88
  c->r[1]=c->r[1]+0x00000010u; // 801CDF8C
  return; // 801CDF90
}

// GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
void f_801CDF94(Ctx* __restrict c) {
  trace_call(0x801CDF94u);
  cmps(c,0,(int32_t)c->r[4],0); // 801CDF94
  if (crb(c,2)) return; // 801CDF98
  c->r[3]=c->r[3]+0x00000004u; // 801CDF9C
  c->r[5]=c->r[4]+0x00000004u; // 801CDFA0
  c->r[6]=c->r[4]+0x00000008u; // 801CDFA4
  f_80105F94(c); return; // 801CDFA8
  return; // 801CDFAC
}

// GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
void f_801CDFB0(Ctx* __restrict c) {
  trace_call(0x801CDFB0u);
  cmps(c,0,(int32_t)c->r[4],0); // 801CDFB0
  if (crb(c,2)) return; // 801CDFB4
  c->r[3]=c->r[3]+0x00000004u; // 801CDFB8
  c->r[5]=c->r[4]+0x00000004u; // 801CDFBC
  c->r[6]=c->r[4]+0x00000008u; // 801CDFC0
  f_80105FCC(c); return; // 801CDFC4
  return; // 801CDFC8
}

// __ct__Q34nw4r3g3d12LightSettingFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjUlPQ34nw4r3g3d12LightSetDataUl
void f_801CDFCC(Ctx* __restrict c) {
  trace_call(0x801CDFCCu);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDFCC
  c->r[0]=c->lr; // 801CDFD0
  W32(c->r[1]+0x00000164u,c->r[0]); // 801CDFD4
  c->r[11]=c->r[1]+0x00000160u; // 801CDFD8
  c->lr=0x801CDFE0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CDFDC
  W16(c->r[3]+0x00000000u,c->r[6]); // 801CDFE0
  c->r[31]=c->r[3]|c->r[3]; // 801CDFE4
  c->r[10]=0u+0x00000000u; // 801CDFE8
  c->r[9]=0u+0x00000000u; // 801CDFEC
  W16(c->r[3]+0x00000002u,c->r[8]); // 801CDFF0
  c->r[6]=0u+0xFFFFFFFFu; // 801CDFF4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801CDFF8
  W32(c->r[3]+0x00000008u,c->r[5]); // 801CDFFC
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801CE000
  goto L_801CE03C; // 801CE004
L_801CE008:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801CE008
  c->r[10]=c->r[10]+0x00000001u; // 801CE00C
  c->r[4]=c->r[0]+c->r[9]; // 801CE010
  W8(c->r[4]+0x00000008u,c->r[6]); // 801CE014
  W8(c->r[9]+c->r[0],c->r[6]); // 801CE018
  c->r[9]=c->r[9]+0x0000000Cu; // 801CE01C
  W8(c->r[4]+0x00000001u,c->r[6]); // 801CE020
  W8(c->r[4]+0x00000002u,c->r[6]); // 801CE024
  W8(c->r[4]+0x00000003u,c->r[6]); // 801CE028
  W8(c->r[4]+0x00000004u,c->r[6]); // 801CE02C
  W8(c->r[4]+0x00000005u,c->r[6]); // 801CE030
  W8(c->r[4]+0x00000006u,c->r[6]); // 801CE034
  W8(c->r[4]+0x00000007u,c->r[6]); // 801CE038
L_801CE03C:;
  c->r[0]=R16(c->r[3]+0x00000002u); // 801CE03C
  cmpu(c,0,c->r[10],c->r[0]); // 801CE040
  if (crb(c,0)) { IRQCHK(c); goto L_801CE008; } // 801CE044
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801CE048
  c->r[29]=0u+0x00000000u; // 801CE04C
  c->r[6]=0u+0x00000002u; // 801CE050
  c->r[0]=0u+0xFFFFFFFFu; // 801CE054
  W8(c->r[4]+0x00000000u,c->r[29]); // 801CE058
  c->r[4]=0u+0x00000040u; // 801CE05C
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801CE060
  W8(c->r[5]+0x00000001u,c->r[6]); // 801CE064
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801CE068
  c->r[3]=c->r[1]+0x000000ECu; // 801CE06C
  W8(c->r[5]+0x00000008u,c->r[0]); // 801CE070
  c->r[11]=R8(c->r[2]+0xFFFF9CECu); // 801CE074
  c->r[10]=R8(c->r[2]+0xFFFF9CEDu); // 801CE078
  c->r[9]=R8(c->r[2]+0xFFFF9CEEu); // 801CE07C
  c->r[8]=R8(c->r[2]+0xFFFF9CEFu); // 801CE080
  c->r[7]=R8(c->r[2]+0xFFFF9CF0u); // 801CE084
  c->r[6]=R8(c->r[2]+0xFFFF9CF1u); // 801CE088
  c->r[5]=R8(c->r[2]+0xFFFF9CF2u); // 801CE08C
  c->r[0]=R8(c->r[2]+0xFFFF9CF3u); // 801CE090
  W8(c->r[1]+0x00000018u,c->r[11]); // 801CE094
  W8(c->r[1]+0x00000019u,c->r[10]); // 801CE098
  W8(c->r[1]+0x0000001Au,c->r[9]); // 801CE09C
  W8(c->r[1]+0x0000001Bu,c->r[8]); // 801CE0A0
  W8(c->r[1]+0x00000014u,c->r[7]); // 801CE0A4
  W8(c->r[1]+0x00000015u,c->r[6]); // 801CE0A8
  W8(c->r[1]+0x00000016u,c->r[5]); // 801CE0AC
  W8(c->r[1]+0x00000017u,c->r[0]); // 801CE0B0
  W32(c->r[1]+0x000000A4u,c->r[29]); // 801CE0B4
  W32(c->r[1]+0x00000060u,c->r[29]); // 801CE0B8
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 801CE0BC
  W32(c->r[1]+0x000000E8u,c->r[29]); // 801CE0C0
  c->lr=0x801CE0C8u; f_801B82AC(c); // 801CE0C4
  W32(c->r[1]+0x000000A4u,c->r[29]); // 801CE0C8
  c->r[3]=c->r[1]+0x000000A8u; // 801CE0CC
  c->r[4]=0u+0x00000040u; // 801CE0D0
  c->lr=0x801CE0D8u; f_801B82AC(c); // 801CE0D4
  W32(c->r[1]+0x00000060u,c->r[29]); // 801CE0D8
  c->r[3]=c->r[1]+0x00000064u; // 801CE0DC
  c->r[4]=0u+0x00000040u; // 801CE0E0
  c->lr=0x801CE0E8u; f_801B82AC(c); // 801CE0E4
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 801CE0E8
  c->r[3]=c->r[1]+0x00000020u; // 801CE0EC
  c->r[4]=0u+0x00000040u; // 801CE0F0
  c->lr=0x801CE0F8u; f_801B82AC(c); // 801CE0F4
  c->r[0]=R32(c->r[1]+0x00000018u); // 801CE0F8
  c->r[3]=c->r[1]+0x000000ECu; // 801CE0FC
  c->r[4]=c->r[1]+0x00000010u; // 801CE100
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CE104
  c->lr=0x801CE10Cu; f_80106100(c); // 801CE108
  {uint32_t ea=c->r[2]+0xFFFF9CF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE10C
  c->r[3]=c->r[1]+0x000000ECu; // 801CE110
  c->f[2]=c->f[1]; // 801CE114
  c->f[3]=c->f[1]; // 801CE118
  c->lr=0x801CE120u; f_80105F84(c); // 801CE11C
  c->r[0]=R32(c->r[1]+0x000000E8u); // 801CE120
  c->r[3]=c->r[1]+0x000000ECu; // 801CE124
  {uint32_t ea=c->r[2]+0xFFFF9CE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE128
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CE12C
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE130
  c->f[3]=c->f[1]; // 801CE134
  W32(c->r[1]+0x000000E8u,c->r[0]); // 801CE138
  c->lr=0x801CE140u; f_80105FB0(c); // 801CE13C
  c->r[0]=R32(c->r[1]+0x000000E8u); // 801CE140
  c->r[3]=c->r[1]+0x000000ECu; // 801CE144
  {uint32_t ea=c->r[2]+0xFFFF9CFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE148
  c->r[4]=0u+0x00000000u; // 801CE14C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CE150
  c->r[0]=c->r[0]|0x00000001u; // 801CE154
  W32(c->r[1]+0x000000E8u,c->r[0]); // 801CE158
  c->lr=0x801CE160u; f_80105D2C(c); // 801CE15C
  c->r[0]=R32(c->r[1]+0x000000E8u); // 801CE160
  c->r[3]=c->r[1]+0x000000ECu; // 801CE164
  {uint32_t ea=c->r[2]+0xFFFF9D00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE168
  c->r[4]=0u+0x00000000u; // 801CE16C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CE170
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE174
  c->r[0]=c->r[0]|0x00000001u; // 801CE178
  W32(c->r[1]+0x000000E8u,c->r[0]); // 801CE17C
  c->lr=0x801CE184u; f_80105EB4(c); // 801CE180
  c->r[5]=R32(c->r[1]+0x000000E8u); // 801CE184
  c->r[3]=c->r[1]+0x000000A8u; // 801CE188
  c->r[0]=R32(c->r[1]+0x00000018u); // 801CE18C
  c->r[4]=c->r[1]+0x0000000Cu; // 801CE190
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 801CE194
  c->r[5]=c->r[5]|0x00000005u; // 801CE198
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CE19C
  W32(c->r[1]+0x000000E8u,c->r[5]); // 801CE1A0
  c->lr=0x801CE1A8u; f_80106100(c); // 801CE1A4
  {uint32_t ea=c->r[2]+0xFFFF9CF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE1A8
  c->r[3]=c->r[1]+0x000000A8u; // 801CE1AC
  c->f[2]=c->f[1]; // 801CE1B0
  c->f[3]=c->f[1]; // 801CE1B4
  c->lr=0x801CE1BCu; f_80105F84(c); // 801CE1B8
  c->r[5]=R32(c->r[1]+0x000000A4u); // 801CE1BC
  c->r[3]=c->r[1]+0x00000064u; // 801CE1C0
  c->r[0]=R32(c->r[1]+0x00000018u); // 801CE1C4
  c->r[4]=c->r[1]+0x00000008u; // 801CE1C8
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 801CE1CC
  c->r[5]=c->r[5]|0x00000004u; // 801CE1D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CE1D4
  W32(c->r[1]+0x000000A4u,c->r[5]); // 801CE1D8
  c->lr=0x801CE1E0u; f_80106100(c); // 801CE1DC
  {uint32_t ea=c->r[2]+0xFFFF9CF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE1E0
  c->r[3]=c->r[1]+0x00000064u; // 801CE1E4
  c->f[2]=c->f[1]; // 801CE1E8
  c->f[3]=c->f[1]; // 801CE1EC
  c->lr=0x801CE1F4u; f_80105F84(c); // 801CE1F0
  c->r[0]=R32(c->r[1]+0x00000060u); // 801CE1F4
  c->r[3]=c->r[1]+0x00000064u; // 801CE1F8
  {uint32_t ea=c->r[2]+0xFFFF9CE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE1FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801CE200
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE204
  c->f[3]=c->f[1]; // 801CE208
  W32(c->r[1]+0x00000060u,c->r[0]); // 801CE20C
  c->lr=0x801CE214u; f_80105FB0(c); // 801CE210
  c->r[0]=R32(c->r[1]+0x00000060u); // 801CE214
  c->r[3]=c->r[1]+0x00000064u; // 801CE218
  {uint32_t ea=c->r[2]+0xFFFF9CE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE21C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CE220
  {uint32_t ea=c->r[2]+0xFFFF9CE4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE224
  c->r[0]=c->r[0]|0x0000000Au; // 801CE228
  c->f[2]=c->f[1]; // 801CE22C
  c->f[5]=c->f[1]; // 801CE230
  W32(c->r[1]+0x00000060u,c->r[0]); // 801CE234
  {uint32_t ea=c->r[2]+0xFFFF9D04u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CE238
  {uint32_t ea=c->r[2]+0xFFFF9D08u; c->f[6]=c->ps1[6]=RF32(ea);} // 801CE23C
  c->lr=0x801CE244u; f_80105CF0(c); // 801CE240
  c->r[3]=R32(c->r[1]+0x00000060u); // 801CE244
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CE248
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFEu; // 801CE24C
  c->r[3]=c->r[3]|0x00000006u; // 801CE250
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801CE254
  W32(c->r[1]+0x00000060u,c->r[3]); // 801CE258
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CE25C
  c->r[0]=R16(c->r[31]+0x00000000u); // 801CE260
  cmps(c,0,(int32_t)c->r[0],0); // 801CE264
  if (crb(c,2)) { goto L_801CE2B8; } // 801CE268
  c->r[6]=R32(c->r[31]+0x00000004u); // 801CE26C
  c->r[0]=c->r[1]+0x000000E8u; // 801CE270
  cmpu(c,0,c->r[6],c->r[0]); // 801CE274
  if (crb(c,2)) { goto L_801CE294; } // 801CE278
  c->r[0]=R32(c->r[1]+0x000000E8u); // 801CE27C
  c->r[3]=c->r[6]+0x00000004u; // 801CE280
  c->r[4]=c->r[1]+0x000000ECu; // 801CE284
  c->r[5]=0u+0x00000040u; // 801CE288
  W32(c->r[6]+0x00000000u,c->r[0]); // 801CE28C
  c->lr=0x801CE294u; f_801B81D0(c); // 801CE290
L_801CE294:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801CE294
  c->r[3]=R8(c->r[1]+0x00000014u); // 801CE298
  c->r[0]=R8(c->r[1]+0x00000015u); // 801CE29C
  W8(c->r[4]+0x00000000u,c->r[3]); // 801CE2A0
  c->r[3]=R8(c->r[1]+0x00000016u); // 801CE2A4
  W8(c->r[4]+0x00000001u,c->r[0]); // 801CE2A8
  c->r[0]=R8(c->r[1]+0x00000017u); // 801CE2AC
  W8(c->r[4]+0x00000002u,c->r[3]); // 801CE2B0
  W8(c->r[4]+0x00000003u,c->r[0]); // 801CE2B4
L_801CE2B8:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 801CE2B8
  cmpu(c,0,c->r[0],0x00000001u); // 801CE2BC
  if (!crb(c,1)) { goto L_801CE314; } // 801CE2C0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801CE2C4
  c->r[0]=c->r[1]+0x000000A4u; // 801CE2C8
  c->r[6]=c->r[3]+0x00000044u; // 801CE2CC
  cmpu(c,0,c->r[6],c->r[0]); // 801CE2D0
  if (crb(c,2)) { goto L_801CE2F0; } // 801CE2D4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801CE2D8
  c->r[3]=c->r[6]+0x00000004u; // 801CE2DC
  c->r[4]=c->r[1]+0x000000A8u; // 801CE2E0
  c->r[5]=0u+0x00000040u; // 801CE2E4
  W32(c->r[6]+0x00000000u,c->r[0]); // 801CE2E8
  c->lr=0x801CE2F0u; f_801B81D0(c); // 801CE2EC
L_801CE2F0:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801CE2F0
  c->r[3]=R8(c->r[1]+0x00000014u); // 801CE2F4
  c->r[0]=R8(c->r[1]+0x00000015u); // 801CE2F8
  W8(c->r[4]+0x00000004u,c->r[3]); // 801CE2FC
  c->r[3]=R8(c->r[1]+0x00000016u); // 801CE300
  W8(c->r[4]+0x00000005u,c->r[0]); // 801CE304
  c->r[0]=R8(c->r[1]+0x00000017u); // 801CE308
  W8(c->r[4]+0x00000006u,c->r[3]); // 801CE30C
  W8(c->r[4]+0x00000007u,c->r[0]); // 801CE310
L_801CE314:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 801CE314
  cmpu(c,0,c->r[0],0x00000002u); // 801CE318
  if (!crb(c,1)) { goto L_801CE370; } // 801CE31C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801CE320
  c->r[0]=c->r[1]+0x00000060u; // 801CE324
  c->r[6]=c->r[3]+0x00000088u; // 801CE328
  cmpu(c,0,c->r[6],c->r[0]); // 801CE32C
  if (crb(c,2)) { goto L_801CE34C; } // 801CE330
  c->r[0]=R32(c->r[1]+0x00000060u); // 801CE334
  c->r[3]=c->r[6]+0x00000004u; // 801CE338
  c->r[4]=c->r[1]+0x00000064u; // 801CE33C
  c->r[5]=0u+0x00000040u; // 801CE340
  W32(c->r[6]+0x00000000u,c->r[0]); // 801CE344
  c->lr=0x801CE34Cu; f_801B81D0(c); // 801CE348
L_801CE34C:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801CE34C
  c->r[3]=R8(c->r[1]+0x00000014u); // 801CE350
  c->r[0]=R8(c->r[1]+0x00000015u); // 801CE354
  W8(c->r[4]+0x00000008u,c->r[3]); // 801CE358
  c->r[3]=R8(c->r[1]+0x00000016u); // 801CE35C
  W8(c->r[4]+0x00000009u,c->r[0]); // 801CE360
  c->r[0]=R8(c->r[1]+0x00000017u); // 801CE364
  W8(c->r[4]+0x0000000Au,c->r[3]); // 801CE368
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 801CE36C
L_801CE370:;
  c->r[26]=R8(c->r[1]+0x00000015u); // 801CE370
  c->r[29]=c->r[1]+0x0000001Cu; // 801CE374
  c->r[25]=R8(c->r[1]+0x00000016u); // 801CE378
  c->r[23]=0u+0x00000003u; // 801CE37C
  c->r[24]=R8(c->r[1]+0x00000017u); // 801CE380
  c->r[28]=0u+0x000000CCu; // 801CE384
  c->r[30]=R8(c->r[1]+0x00000014u); // 801CE388
  c->r[27]=0u+0x0000000Cu; // 801CE38C
  goto L_801CE3E0; // 801CE390
L_801CE394:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801CE394
  c->r[6]=c->r[0]+c->r[28]; // 801CE398
  cmpu(c,0,c->r[6],c->r[29]); // 801CE39C
  if (crb(c,2)) { goto L_801CE3BC; } // 801CE3A0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CE3A4
  c->r[3]=c->r[6]+0x00000004u; // 801CE3A8
  c->r[4]=c->r[1]+0x00000020u; // 801CE3AC
  c->r[5]=0u+0x00000040u; // 801CE3B0
  W32(c->r[6]+0x00000000u,c->r[0]); // 801CE3B4
  c->lr=0x801CE3BCu; f_801B81D0(c); // 801CE3B8
L_801CE3BC:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801CE3BC
  c->r[28]=c->r[28]+0x00000044u; // 801CE3C0
  c->r[23]=c->r[23]+0x00000001u; // 801CE3C4
  W8(c->r[27]+c->r[0],c->r[30]); // 801CE3C8
  c->r[3]=c->r[0]+c->r[27]; // 801CE3CC
  c->r[27]=c->r[27]+0x00000004u; // 801CE3D0
  W8(c->r[3]+0x00000001u,c->r[26]); // 801CE3D4
  W8(c->r[3]+0x00000002u,c->r[25]); // 801CE3D8
  W8(c->r[3]+0x00000003u,c->r[24]); // 801CE3DC
L_801CE3E0:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 801CE3E0
  cmpu(c,0,c->r[23],c->r[0]); // 801CE3E4
  if (crb(c,0)) { IRQCHK(c); goto L_801CE394; } // 801CE3E8
  c->r[11]=c->r[1]+0x00000160u; // 801CE3EC
  c->r[3]=c->r[31]|c->r[31]; // 801CE3F0
  c->lr=0x801CE3F8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE3F4
  c->r[0]=R32(c->r[1]+0x00000164u); // 801CE3F8
  c->lr=c->r[0]; // 801CE3FC
  c->r[1]=c->r[1]+0x00000160u; // 801CE400
  return; // 801CE404
}

// Import__Q34nw4r3g3d12LightSettingFRCQ34nw4r3g3d12LightSetting
void f_801CE408(Ctx* __restrict c) {
  trace_call(0x801CE408u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE408
  c->r[0]=c->lr; // 801CE40C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE410
  c->r[11]=c->r[1]+0x00000020u; // 801CE414
  c->lr=0x801CE41Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CE418
  c->r[5]=R16(c->r[3]+0x00000000u); // 801CE41C
  c->r[27]=c->r[3]|c->r[3]; // 801CE420
  c->r[0]=R16(c->r[4]+0x00000000u); // 801CE424
  c->r[28]=c->r[4]|c->r[4]; // 801CE428
  cmpu(c,0,c->r[5],c->r[0]); // 801CE42C
  if (crb(c,0)) { goto L_801CE444; } // 801CE430
  c->r[3]=R16(c->r[3]+0x00000002u); // 801CE434
  c->r[0]=R16(c->r[4]+0x00000002u); // 801CE438
  cmpu(c,0,c->r[3],c->r[0]); // 801CE43C
  if (!crb(c,0)) { goto L_801CE44C; } // 801CE440
L_801CE444:;
  c->r[3]=0u+0x00000000u; // 801CE444
  goto L_801CE580; // 801CE448
L_801CE44C:;
  c->r[29]=0u+0x00000000u; // 801CE44C
  c->r[31]=0u+0x00000000u; // 801CE450
  c->r[30]=0u+0x00000000u; // 801CE454
  goto L_801CE4E0; // 801CE458
L_801CE45C:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 801CE45C
  c->r[3]=R32(c->r[31]+c->r[0]); // 801CE460
  c->r[5]=c->r[0]+c->r[31]; // 801CE464
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801CE468
  if (crb(c,2)) { goto L_801CE498; } // 801CE46C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801CE470
  c->r[4]=c->r[0]+c->r[31]; // 801CE474
  cmpu(c,0,c->r[4],c->r[5]); // 801CE478
  if (crb(c,2)) { goto L_801CE4A8; } // 801CE47C
  W32(c->r[4]+0x00000000u,c->r[3]); // 801CE480
  c->r[3]=c->r[4]+0x00000004u; // 801CE484
  c->r[4]=c->r[5]+0x00000004u; // 801CE488
  c->r[5]=0u+0x00000040u; // 801CE48C
  c->lr=0x801CE494u; f_801B81D0(c); // 801CE490
  goto L_801CE4A8; // 801CE494
L_801CE498:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 801CE498
  c->r[0]=R32(c->r[3]+c->r[31]); // 801CE49C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801CE4A0
  W32(c->r[3]+c->r[31],c->r[0]); // 801CE4A4
L_801CE4A8:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801CE4A8
  c->r[31]=c->r[31]+0x00000044u; // 801CE4AC
  c->r[3]=R32(c->r[27]+0x00000008u); // 801CE4B0
  c->r[29]=c->r[29]+0x00000001u; // 801CE4B4
  c->r[4]=c->r[0]+c->r[30]; // 801CE4B8
  c->r[0]=R8(c->r[30]+c->r[0]); // 801CE4BC
  {uint32_t ea=c->r[3]+c->r[30]; W8(ea,c->r[0]); c->r[3]=ea;} // 801CE4C0
  c->r[30]=c->r[30]+0x00000004u; // 801CE4C4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801CE4C8
  W8(c->r[3]+0x00000001u,c->r[0]); // 801CE4CC
  c->r[0]=R8(c->r[4]+0x00000002u); // 801CE4D0
  W8(c->r[3]+0x00000002u,c->r[0]); // 801CE4D4
  c->r[0]=R8(c->r[4]+0x00000003u); // 801CE4D8
  W8(c->r[3]+0x00000003u,c->r[0]); // 801CE4DC
L_801CE4E0:;
  c->r[0]=R16(c->r[28]+0x00000000u); // 801CE4E0
  cmpu(c,0,c->r[29],c->r[0]); // 801CE4E4
  if (crb(c,0)) { IRQCHK(c); goto L_801CE45C; } // 801CE4E8
  c->r[7]=0u+0x00000000u; // 801CE4EC
  c->r[6]=0u+0x00000000u; // 801CE4F0
  goto L_801CE570; // 801CE4F4
L_801CE4F8:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 801CE4F8
  c->r[7]=c->r[7]+0x00000001u; // 801CE4FC
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801CE500
  c->r[5]=c->r[3]+c->r[6]; // 801CE504
  c->r[3]=R8(c->r[3]+c->r[6]); // 801CE508
  c->r[4]=c->r[0]+c->r[6]; // 801CE50C
  c->r[0]=R8(c->r[5]+0x00000001u); // 801CE510
  c->r[6]=c->r[6]+0x0000000Cu; // 801CE514
  W8(c->r[4]+0x00000000u,c->r[3]); // 801CE518
  W8(c->r[4]+0x00000001u,c->r[0]); // 801CE51C
  c->r[3]=R8(c->r[5]+0x00000002u); // 801CE520
  c->r[0]=R8(c->r[5]+0x00000003u); // 801CE524
  W8(c->r[4]+0x00000002u,c->r[3]); // 801CE528
  W8(c->r[4]+0x00000003u,c->r[0]); // 801CE52C
  c->r[3]=R8(c->r[5]+0x00000004u); // 801CE530
  c->r[0]=R8(c->r[5]+0x00000005u); // 801CE534
  W8(c->r[4]+0x00000004u,c->r[3]); // 801CE538
  W8(c->r[4]+0x00000005u,c->r[0]); // 801CE53C
  c->r[3]=R8(c->r[5]+0x00000006u); // 801CE540
  c->r[0]=R8(c->r[5]+0x00000007u); // 801CE544
  W8(c->r[4]+0x00000006u,c->r[3]); // 801CE548
  W8(c->r[4]+0x00000007u,c->r[0]); // 801CE54C
  c->r[0]=R8(c->r[5]+0x00000008u); // 801CE550
  W8(c->r[4]+0x00000008u,c->r[0]); // 801CE554
  c->r[0]=R8(c->r[5]+0x00000009u); // 801CE558
  W8(c->r[4]+0x00000009u,c->r[0]); // 801CE55C
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801CE560
  W8(c->r[4]+0x0000000Au,c->r[0]); // 801CE564
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 801CE568
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 801CE56C
L_801CE570:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 801CE570
  cmpu(c,0,c->r[7],c->r[0]); // 801CE574
  if (crb(c,0)) { IRQCHK(c); goto L_801CE4F8; } // 801CE578
  c->r[3]=0u+0x00000001u; // 801CE57C
L_801CE580:;
  c->r[11]=c->r[1]+0x00000020u; // 801CE580
  c->lr=0x801CE588u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE584
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE588
  c->lr=c->r[0]; // 801CE58C
  c->r[1]=c->r[1]+0x00000020u; // 801CE590
  return; // 801CE594
}

// ApplyViewMtx__Q34nw4r3g3d12LightSettingFRCQ34nw4r4math5MTX34Ul
void f_801CE598(Ctx* __restrict c) {
  trace_call(0x801CE598u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE598
  c->r[0]=c->lr; // 801CE59C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CE5A0
  c->r[11]=c->r[1]+0x00000040u; // 801CE5A4
  c->lr=0x801CE5ACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CE5A8
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CE5AC
  c->r[28]=c->r[4]|c->r[4]; // 801CE5B0
  c->r[27]=c->r[3]|c->r[3]; // 801CE5B4
  c->r[4]=c->r[1]+0x00000008u; // 801CE5B8
  c->r[0]=R16(c->r[3]+0x00000000u); // 801CE5BC
  cmpu(c,0,c->r[5],c->r[0]); // 801CE5C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CE5C4
  if (!crb(c,0)) { goto L_801CE5D0; } // 801CE5C8
  c->r[4]=c->r[1]+0x0000000Cu; // 801CE5CC
L_801CE5D0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CE5D0
  c->r[29]=0u+0x00000000u; // 801CE5D4
  c->r[31]=0u+0x00000000u; // 801CE5D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CE5DC
  goto L_801CE694; // 801CE5E0
L_801CE5E4:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801CE5E4
  c->r[30]=c->r[0]+c->r[31]; // 801CE5E8
  c->r[0]=R32(c->r[31]+c->r[0]); // 801CE5EC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CE5F0
  if (crb(c,2)) { goto L_801CE68C; } // 801CE5F4
  c->r[3]=c->r[30]+0x00000004u; // 801CE5F8
  c->r[4]=c->r[1]+0x00000010u; // 801CE5FC
  c->r[5]=c->r[1]+0x00000014u; // 801CE600
  c->r[6]=c->r[1]+0x00000018u; // 801CE604
  c->lr=0x801CE60Cu; f_80105FCC(c); // 801CE608
  c->r[3]=c->r[1]+0x00000010u; // 801CE60C
  c->r[4]=c->r[28]|c->r[28]; // 801CE610
  c->r[5]=c->r[3]|c->r[3]; // 801CE614
  c->lr=0x801CE61Cu; f_801DBB18(c); // 801CE618
  c->r[0]=R32(c->r[30]+0x00000000u); // 801CE61C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801CE620
  if (crb(c,2)) { goto L_801CE640; } // 801CE624
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE628
  c->r[3]=c->r[30]+0x00000004u; // 801CE62C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE630
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE634
  c->lr=0x801CE63Cu; f_80105FF4(c); // 801CE638
  goto L_801CE68C; // 801CE63C
L_801CE640:;
  c->r[3]=c->r[30]+0x00000004u; // 801CE640
  c->r[4]=c->r[1]+0x0000001Cu; // 801CE644
  c->r[5]=c->r[1]+0x00000020u; // 801CE648
  c->r[6]=c->r[1]+0x00000024u; // 801CE64C
  c->lr=0x801CE654u; f_80105F94(c); // 801CE650
  c->r[4]=c->r[1]+0x0000001Cu; // 801CE654
  c->r[3]=c->r[28]|c->r[28]; // 801CE658
  c->r[5]=c->r[4]|c->r[4]; // 801CE65C
  c->lr=0x801CE664u; f_800ECCAC(c); // 801CE660
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE664
  c->r[3]=c->r[30]+0x00000004u; // 801CE668
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE66C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE670
  c->lr=0x801CE678u; f_80105F84(c); // 801CE674
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE678
  c->r[3]=c->r[30]+0x00000004u; // 801CE67C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE680
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE684
  c->lr=0x801CE68Cu; f_80105FB0(c); // 801CE688
L_801CE68C:;
  c->r[31]=c->r[31]+0x00000044u; // 801CE68C
  c->r[29]=c->r[29]+0x00000001u; // 801CE690
L_801CE694:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801CE694
  cmpu(c,0,c->r[29],c->r[0]); // 801CE698
  if (crb(c,0)) { IRQCHK(c); goto L_801CE5E4; } // 801CE69C
  c->r[11]=c->r[1]+0x00000040u; // 801CE6A0
  c->lr=0x801CE6A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE6A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CE6A8
  c->lr=c->r[0]; // 801CE6AC
  c->r[1]=c->r[1]+0x00000040u; // 801CE6B0
  return; // 801CE6B4
}

// GetAmbLightObj__Q34nw4r3g3d8LightSetFv
void f_801CE6B8(Ctx* __restrict c) {
  trace_call(0x801CE6B8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801CE6B8
  c->r[4]=0u+0x00000000u; // 801CE6BC
  cmps(c,0,(int32_t)c->r[5],0); // 801CE6C0
  if (crb(c,2)) { goto L_801CE6D8; } // 801CE6C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CE6C8
  cmps(c,0,(int32_t)c->r[0],0); // 801CE6CC
  if (crb(c,2)) { goto L_801CE6D8; } // 801CE6D0
  c->r[4]=0u+0x00000001u; // 801CE6D4
L_801CE6D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CE6D8
  if (crb(c,2)) { goto L_801CE700; } // 801CE6DC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CE6E0
  c->r[0]=R8(c->r[3]+0x00000008u); // 801CE6E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CE6E8
  if (crb(c,0)) { goto L_801CE700; } // 801CE6EC
  c->r[3]=R32(c->r[5]+0x00000008u); // 801CE6F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CE6F4
  c->r[3]=c->r[3]+c->r[0]; // 801CE6F8
  return; // 801CE6FC
L_801CE700:;
  c->r[3]=0u+0x00000000u; // 801CE700
  return; // 801CE704
}

// SelectLightObj__Q34nw4r3g3d8LightSetFUli
void f_801CE708(Ctx* __restrict c) {
  trace_call(0x801CE708u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 801CE708
  c->r[6]=0u+0x00000000u; // 801CE70C
  cmps(c,0,(int32_t)c->r[7],0); // 801CE710
  if (crb(c,2)) { goto L_801CE728; } // 801CE714
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CE718
  cmps(c,0,(int32_t)c->r[0],0); // 801CE71C
  if (crb(c,2)) { goto L_801CE728; } // 801CE720
  c->r[6]=0u+0x00000001u; // 801CE724
L_801CE728:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CE728
  if (crb(c,2)) { goto L_801CE770; } // 801CE72C
  cmpu(c,0,c->r[4],0x00000008u); // 801CE730
  if (!crb(c,0)) { goto L_801CE770; } // 801CE734
  cmps(c,0,(int32_t)c->r[5],0); // 801CE738
  if (!crb(c,0)) { goto L_801CE754; } // 801CE73C
  c->r[5]=R32(c->r[3]+0x00000004u); // 801CE740
  c->r[0]=0u+0xFFFFFFFFu; // 801CE744
  c->r[3]=0u+0x00000001u; // 801CE748
  W8(c->r[5]+c->r[4],c->r[0]); // 801CE74C
  return; // 801CE750
L_801CE754:;
  c->r[0]=R16(c->r[7]+0x00000000u); // 801CE754
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801CE758
  if (!crb(c,0)) { goto L_801CE770; } // 801CE75C
  c->r[6]=R32(c->r[3]+0x00000004u); // 801CE760
  c->r[3]=0u+0x00000001u; // 801CE764
  W8(c->r[6]+c->r[4],c->r[5]); // 801CE768
  return; // 801CE76C
L_801CE770:;
  c->r[3]=0u+0x00000000u; // 801CE770
  return; // 801CE774
}

// SelectAmbLightObj__Q34nw4r3g3d8LightSetFi
void f_801CE778(Ctx* __restrict c) {
  trace_call(0x801CE778u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 801CE778
  c->r[5]=0u+0x00000000u; // 801CE77C
  cmps(c,0,(int32_t)c->r[6],0); // 801CE780
  if (crb(c,2)) { goto L_801CE798; } // 801CE784
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CE788
  cmps(c,0,(int32_t)c->r[0],0); // 801CE78C
  if (crb(c,2)) { goto L_801CE798; } // 801CE790
  c->r[5]=0u+0x00000001u; // 801CE794
L_801CE798:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CE798
  if (crb(c,2)) { goto L_801CE7D8; } // 801CE79C
  cmps(c,0,(int32_t)c->r[4],0); // 801CE7A0
  if (!crb(c,0)) { goto L_801CE7BC; } // 801CE7A4
  c->r[4]=R32(c->r[3]+0x00000004u); // 801CE7A8
  c->r[0]=0u+0xFFFFFFFFu; // 801CE7AC
  c->r[3]=0u+0x00000001u; // 801CE7B0
  W8(c->r[4]+0x00000008u,c->r[0]); // 801CE7B4
  return; // 801CE7B8
L_801CE7BC:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 801CE7BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801CE7C0
  if (!crb(c,0)) { goto L_801CE7D8; } // 801CE7C4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801CE7C8
  c->r[3]=0u+0x00000001u; // 801CE7CC
  W8(c->r[5]+0x00000008u,c->r[4]); // 801CE7D0
  return; // 801CE7D4
L_801CE7D8:;
  c->r[3]=0u+0x00000000u; // 801CE7D8
  return; // 801CE7DC
}

// CalcVtx__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjShpPPQ34nw4r3g3d13ResVtxPosDataPPQ34nw4r3g3d13ResVtxNrmDataPPQ34nw4r3g3d13ResVtxClrData
void f_801CE7E0(Ctx* __restrict c) {
  trace_call(0x801CE7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFA50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE7E0
  c->r[0]=c->lr; // 801CE7E4
  W32(c->r[1]+0x000005B4u,c->r[0]); // 801CE7E8
  {uint32_t ea=c->r[1]+0x000005A0u; WF64(ea,c->f[31]);} // 801CE7EC
  {uint32_t ea=c->r[1]+0x000005A8u; psq_store(c,31,ea,0,0);} // 801CE7F0
  c->r[11]=c->r[1]+0x000005A0u; // 801CE7F4
  c->lr=0x801CE7FCu; f_80109F04(c); // 801CE7F8
  c->r[26]=c->r[4]|c->r[4]; // 801CE7FC
  c->r[27]=c->r[5]|c->r[5]; // 801CE800
  c->r[28]=c->r[6]|c->r[6]; // 801CE804
  c->r[29]=c->r[7]|c->r[7]; // 801CE808
  c->lr=0x801CE810u; f_801A9C24(c); // 801CE80C
  c->r[14]=c->r[1]+0x00000368u; // 801CE810
  c->r[24]=c->r[1]+0x00000558u; // 801CE814
  c->r[4]=c->r[24]-c->r[14]; // 801CE818
  c->r[23]=c->r[3]|c->r[3]; // 801CE81C
  c->r[5]=c->r[4]+0x0000000Fu; // 801CE820
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE824
  c->r[0]=sraw(c,c->r[5],4); // 801CE828
  c->r[20]=rotl(c->r[4],0)&0x80000000u; // 801CE82C
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 801CE830
  c->r[19]=rotl(c->r[5],0)&0x80000000u; // 801CE834
  c->r[21]=c->r[3]+0x00000001u; // 801CE838
  c->r[22]=c->r[1]+0x000004D8u; // 801CE83C
  c->r[18]=rotl(c->r[3],0)&0x80000000u; // 801CE840
  c->r[31]=0u+0x00000000u; // 801CE844
  c->r[17]=rotl(c->r[21],0)&0x80000000u; // 801CE848
  c->r[25]=0u+0x00000000u; // 801CE84C
  goto L_801CEFB0; // 801CE850
L_801CE854:;
  c->r[3]=c->r[26]|c->r[26]; // 801CE854
  c->r[4]=c->r[31]|c->r[31]; // 801CE858
  c->lr=0x801CE860u; f_801B5C64(c); // 801CE85C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE860
  if (crb(c,2)) { goto L_801CEFA8; } // 801CE864
  c->r[3]=c->r[1]+0x00000368u; // 801CE868
  W32(c->r[1]+0x00000348u,c->r[25]); // 801CE86C
  cmpu(c,0,c->r[3],c->r[24]); // 801CE870
  W32(c->r[1]+0x0000034Cu,c->r[25]); // 801CE874
  W32(c->r[1]+0x00000350u,c->r[25]); // 801CE878
  W32(c->r[1]+0x00000358u,c->r[25]); // 801CE87C
  W32(c->r[1]+0x0000035Cu,c->r[25]); // 801CE880
  W32(c->r[1]+0x00000360u,c->r[25]); // 801CE884
  if (!crb(c,0)) { goto L_801CE9A8; } // 801CE888
  cmps(c,0,(int32_t)c->r[21],8); // 801CE88C
  if (!crb(c,1)) { goto L_801CE97C; } // 801CE890
  cmpu(c,0,c->r[14],c->r[24]); // 801CE894
  c->r[0]=0u+0x00000000u; // 801CE898
  c->r[4]=0u+0x00000000u; // 801CE89C
  if (crb(c,1)) { goto L_801CE8C8; } // 801CE8A0
  cmps(c,0,(int32_t)c->r[20],0); // 801CE8A4
  c->r[5]=0u+0x00000001u; // 801CE8A8
  if (!crb(c,2)) { goto L_801CE8BC; } // 801CE8AC
  cmps(c,0,(int32_t)c->r[19],0); // 801CE8B0
  if (crb(c,2)) { goto L_801CE8BC; } // 801CE8B4
  c->r[5]=0u+0x00000000u; // 801CE8B8
L_801CE8BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CE8BC
  if (crb(c,2)) { goto L_801CE8C8; } // 801CE8C0
  c->r[4]=0u+0x00000001u; // 801CE8C4
L_801CE8C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CE8C8
  if (crb(c,2)) { goto L_801CE8F4; } // 801CE8CC
  cmps(c,0,(int32_t)c->r[18],0); // 801CE8D0
  c->r[4]=0u+0x00000001u; // 801CE8D4
  if (!crb(c,2)) { goto L_801CE8E8; } // 801CE8D8
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[17]); // 801CE8DC
  if (crb(c,2)) { goto L_801CE8E8; } // 801CE8E0
  c->r[4]=0u+0x00000000u; // 801CE8E4
L_801CE8E8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CE8E8
  if (crb(c,2)) { goto L_801CE8F4; } // 801CE8EC
  c->r[0]=0u+0x00000001u; // 801CE8F0
L_801CE8F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CE8F4
  if (crb(c,2)) { goto L_801CE97C; } // 801CE8F8
  c->r[0]=c->r[22]+0x0000007Fu; // 801CE8FC
  c->r[0]=c->r[0]-c->r[3]; // 801CE900
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 801CE904
  c->ctr=c->r[0]; // 801CE908
  cmpu(c,0,c->r[3],c->r[22]); // 801CE90C
  if (!crb(c,0)) { goto L_801CE97C; } // 801CE910
L_801CE914:;
  W32(c->r[3]+0x00000000u,c->r[25]); // 801CE914
  W32(c->r[3]+0x00000004u,c->r[25]); // 801CE918
  W32(c->r[3]+0x00000008u,c->r[25]); // 801CE91C
  W32(c->r[3]+0x00000010u,c->r[25]); // 801CE920
  W32(c->r[3]+0x00000014u,c->r[25]); // 801CE924
  W32(c->r[3]+0x00000018u,c->r[25]); // 801CE928
  W32(c->r[3]+0x00000020u,c->r[25]); // 801CE92C
  W32(c->r[3]+0x00000024u,c->r[25]); // 801CE930
  W32(c->r[3]+0x00000028u,c->r[25]); // 801CE934
  W32(c->r[3]+0x00000030u,c->r[25]); // 801CE938
  W32(c->r[3]+0x00000034u,c->r[25]); // 801CE93C
  W32(c->r[3]+0x00000038u,c->r[25]); // 801CE940
  W32(c->r[3]+0x00000040u,c->r[25]); // 801CE944
  W32(c->r[3]+0x00000044u,c->r[25]); // 801CE948
  W32(c->r[3]+0x00000048u,c->r[25]); // 801CE94C
  W32(c->r[3]+0x00000050u,c->r[25]); // 801CE950
  W32(c->r[3]+0x00000054u,c->r[25]); // 801CE954
  W32(c->r[3]+0x00000058u,c->r[25]); // 801CE958
  W32(c->r[3]+0x00000060u,c->r[25]); // 801CE95C
  W32(c->r[3]+0x00000064u,c->r[25]); // 801CE960
  W32(c->r[3]+0x00000068u,c->r[25]); // 801CE964
  W32(c->r[3]+0x00000070u,c->r[25]); // 801CE968
  W32(c->r[3]+0x00000074u,c->r[25]); // 801CE96C
  W32(c->r[3]+0x00000078u,c->r[25]); // 801CE970
  c->r[3]=c->r[3]+0x00000080u; // 801CE974
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CE914; } // 801CE978
L_801CE97C:;
  c->r[0]=c->r[24]+0x0000000Fu; // 801CE97C
  c->r[0]=c->r[0]-c->r[3]; // 801CE980
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801CE984
  c->ctr=c->r[0]; // 801CE988
  cmpu(c,0,c->r[3],c->r[24]); // 801CE98C
  if (!crb(c,0)) { goto L_801CE9A8; } // 801CE990
L_801CE994:;
  W32(c->r[3]+0x00000000u,c->r[25]); // 801CE994
  W32(c->r[3]+0x00000004u,c->r[25]); // 801CE998
  W32(c->r[3]+0x00000008u,c->r[25]); // 801CE99C
  c->r[3]=c->r[3]+0x00000010u; // 801CE9A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CE994; } // 801CE9A4
L_801CE9A8:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CE9A8
  c->r[3]=c->r[26]|c->r[26]; // 801CE9AC
  c->r[5]=c->r[31]|c->r[31]; // 801CE9B0
  c->r[4]=c->r[1]+0x00000340u; // 801CE9B4
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CE9B8
  c->ctr=c->r[12]; // 801CE9BC
  if (true) { c->lr=0x801CE9C4u; dispatch(c,c->ctr); } // 801CE9C0
  c->r[4]=R32(c->r[3]+0x00000000u); // 801CE9C4
  c->r[30]=c->r[3]|c->r[3]; // 801CE9C8
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801CE9CC
  if (crb(c,2)) { goto L_801CEFA8; } // 801CE9D0
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801CE9D4
  if (crb(c,2)) { goto L_801CEBEC; } // 801CE9D8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CE9DC
  c->r[4]=0u+0x00000000u; // 801CE9E0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CE9E4
  c->r[16]=R32(c->r[27]+0x00000000u); // 801CE9E8
  c->r[0]=R32(c->r[16]+0x00000008u); // 801CE9EC
  cmps(c,0,(int32_t)c->r[0],0); // 801CE9F0
  if (crb(c,2)) { goto L_801CEA00; } // 801CE9F4
  c->r[15]=c->r[16]+c->r[0]; // 801CE9F8
  goto L_801CEA04; // 801CE9FC
L_801CEA00:;
  c->r[15]=0u+0x00000000u; // 801CEA00
L_801CEA04:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA04
  fcmp(c,0,c->f[31],c->f[0]); // 801CEA08
  if (crb(c,2)) { goto L_801CEA34; } // 801CEA0C
  c->r[3]=c->r[1]+0x00000020u; // 801CEA10
  c->r[4]=c->r[1]+0x0000001Cu; // 801CEA14
  c->r[5]=c->r[1]+0x0000000Au; // 801CEA18
  c->lr=0x801CEA20u; f_801AD124(c); // 801CEA1C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CEA20
  c->r[4]=0u+0x00000001u; // 801CEA24
  W32(c->r[1]+0x00000238u,c->r[0]); // 801CEA28
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA2C
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[0]);} // 801CEA30
L_801CEA34:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801CEA34
  c->r[5]=c->r[1]+0x00000238u; // 801CEA38
  c->r[3]=c->r[30]|c->r[30]; // 801CEA3C
  c->r[7]=0u+0x00000000u; // 801CEA40
  c->r[5]=c->r[5]+c->r[0]; // 801CEA44
  goto L_801CEA90; // 801CEA48
L_801CEA4C:;
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA4C
  fcmp(c,0,c->f[31],c->f[0]); // 801CEA50
  if (crb(c,2)) { goto L_801CEA88; } // 801CEA54
  c->r[6]=R32(c->r[3]+0x00000018u); // 801CEA58
  c->r[0]=R32(c->r[6]+0x00000008u); // 801CEA5C
  cmps(c,0,(int32_t)c->r[0],0); // 801CEA60
  if (crb(c,2)) { goto L_801CEA70; } // 801CEA64
  c->r[0]=c->r[6]+c->r[0]; // 801CEA68
  goto L_801CEA74; // 801CEA6C
L_801CEA70:;
  c->r[0]=0u+0x00000000u; // 801CEA70
L_801CEA74:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CEA74
  c->r[4]=c->r[4]+0x00000001u; // 801CEA78
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA7C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 801CEA80
  c->r[5]=c->r[5]+0x00000008u; // 801CEA84
L_801CEA88:;
  c->r[3]=c->r[3]+0x00000010u; // 801CEA88
  c->r[7]=c->r[7]+0x00000001u; // 801CEA8C
L_801CEA90:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CEA90
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801CEA94
  if (crb(c,0)) { IRQCHK(c); goto L_801CEA4C; } // 801CEA98
  c->r[5]=R32(c->r[1]+0x00000020u); // 801CEA9C
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801CEAA0
  c->r[3]=c->r[1]+0x00000238u; // 801CEAA4
  c->r[4]=R16(c->r[5]+0x0000001Eu); // 801CEAA8
  c->r[3]=c->r[3]+c->r[0]; // 801CEAAC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801CEAB0
  c->r[8]=c->r[15]+c->r[4]; // 801CEAB4
  goto L_801CEBC8; // 801CEAB8
L_801CEABC:;
  c->r[7]=R32(c->r[1]+0x00000238u); // 801CEABC
  c->r[5]=c->r[1]+0x00000240u; // 801CEAC0
  c->r[6]=c->r[3]+0x00000007u; // 801CEAC4
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEAC8
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 801CEACC
  c->r[6]=c->r[6]-c->r[5]; // 801CEAD0
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,1,0);} // 801CEAD4
  c->r[0]=c->r[7]+0x0000000Cu; // 801CEAD8
  cmpu(c,0,c->r[5],c->r[3]); // 801CEADC
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801CEAE0
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 801CEAE4
  W32(c->r[1]+0x00000238u,c->r[0]); // 801CEAE8
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801CEAEC
  if (!crb(c,0)) { goto L_801CEBBC; } // 801CEAF0
  c->r[0]=rotl(c->r[6],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801CEAF4
  c->ctr=c->r[0]; // 801CEAF8
  if (crb(c,2)) { goto L_801CEB90; } // 801CEAFC
L_801CEB00:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 801CEB00
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEB04
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CEB08
  c->r[0]=c->r[7]+0x0000000Cu; // 801CEB0C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CEB10
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CEB14
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CEB18
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CEB1C
  c->r[7]=R32(c->r[5]+0x00000008u); // 801CEB20
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEB24
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CEB28
  c->r[0]=c->r[7]+0x0000000Cu; // 801CEB2C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CEB30
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CEB34
  W32(c->r[5]+0x00000008u,c->r[0]); // 801CEB38
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CEB3C
  c->r[7]=R32(c->r[5]+0x00000010u); // 801CEB40
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEB44
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CEB48
  c->r[0]=c->r[7]+0x0000000Cu; // 801CEB4C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CEB50
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CEB54
  W32(c->r[5]+0x00000010u,c->r[0]); // 801CEB58
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CEB5C
  c->r[7]=R32(c->r[5]+0x00000018u); // 801CEB60
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEB64
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CEB68
  c->r[0]=c->r[7]+0x0000000Cu; // 801CEB6C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CEB70
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CEB74
  W32(c->r[5]+0x00000018u,c->r[0]); // 801CEB78
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CEB7C
  c->r[5]=c->r[5]+0x00000020u; // 801CEB80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CEB00; } // 801CEB84
  c->r[6]=c->r[6]&0x00000003u; cr0(c,c->r[6]); // 801CEB88
  if (crb(c,2)) { goto L_801CEBBC; } // 801CEB8C
L_801CEB90:;
  c->ctr=c->r[6]; // 801CEB90
L_801CEB94:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 801CEB94
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEB98
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CEB9C
  c->r[0]=c->r[7]+0x0000000Cu; // 801CEBA0
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CEBA4
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CEBA8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CEBAC
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CEBB0
  c->r[5]=c->r[5]+0x00000008u; // 801CEBB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CEB94; } // 801CEBB8
L_801CEBBC:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,0);} // 801CEBBC
  {uint32_t ea=c->r[15]+0x00000008u; psq_store(c,1,ea,1,0);} // 801CEBC0
  c->r[15]=c->r[15]+0x0000000Cu; // 801CEBC4
L_801CEBC8:;
  cmpu(c,0,c->r[15],c->r[8]); // 801CEBC8
  if (crb(c,0)) { IRQCHK(c); goto L_801CEABC; } // 801CEBCC
  c->r[0]=R32(c->r[16]+0x00000008u); // 801CEBD0
  cmps(c,0,(int32_t)c->r[0],0); // 801CEBD4
  if (crb(c,2)) { goto L_801CEBE4; } // 801CEBD8
  c->r[3]=c->r[16]+c->r[0]; // 801CEBDC
  goto L_801CEBE8; // 801CEBE0
L_801CEBE4:;
  c->r[3]=0u+0x00000000u; // 801CEBE4
L_801CEBE8:;
  c->lr=0x801CEBECu; f_800E03B0(c); // 801CEBE8
L_801CEBEC:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801CEBEC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CEBF0
  if (crb(c,2)) { goto L_801CEE18; } // 801CEBF4
  cmps(c,0,(int32_t)c->r[28],0); // 801CEBF8
  if (crb(c,2)) { goto L_801CEE18; } // 801CEBFC
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801CEC00
  c->r[3]=0u+0x00000000u; // 801CEC04
  W32(c->r[1]+0x00000018u,c->r[4]); // 801CEC08
  c->r[0]=R32(c->r[4]+0x00000010u); // 801CEC0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CEC10
  c->r[16]=R32(c->r[28]+c->r[0]); // 801CEC14
  c->r[0]=R32(c->r[16]+0x00000008u); // 801CEC18
  cmps(c,0,(int32_t)c->r[0],0); // 801CEC1C
  if (crb(c,2)) { goto L_801CEC2C; } // 801CEC20
  c->r[15]=c->r[16]+c->r[0]; // 801CEC24
  goto L_801CEC30; // 801CEC28
L_801CEC2C:;
  c->r[15]=0u+0x00000000u; // 801CEC2C
L_801CEC30:;
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEC30
  fcmp(c,0,c->f[31],c->f[0]); // 801CEC34
  if (crb(c,2)) { goto L_801CEC60; } // 801CEC38
  c->r[3]=c->r[1]+0x00000018u; // 801CEC3C
  c->r[4]=c->r[1]+0x00000014u; // 801CEC40
  c->r[5]=c->r[1]+0x00000009u; // 801CEC44
  c->lr=0x801CEC4Cu; f_801AD1F4(c); // 801CEC48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEC4C
  c->r[3]=0u+0x00000001u; // 801CEC50
  W32(c->r[1]+0x00000130u,c->r[0]); // 801CEC54
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEC58
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 801CEC5C
L_801CEC60:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801CEC60
  c->r[5]=c->r[1]+0x00000130u; // 801CEC64
  c->r[4]=c->r[30]|c->r[30]; // 801CEC68
  c->r[7]=0u+0x00000000u; // 801CEC6C
  c->r[5]=c->r[5]+c->r[0]; // 801CEC70
  goto L_801CECBC; // 801CEC74
L_801CEC78:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEC78
  fcmp(c,0,c->f[31],c->f[0]); // 801CEC7C
  if (crb(c,2)) { goto L_801CECB4; } // 801CEC80
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 801CEC84
  c->r[0]=R32(c->r[6]+0x00000008u); // 801CEC88
  cmps(c,0,(int32_t)c->r[0],0); // 801CEC8C
  if (crb(c,2)) { goto L_801CEC9C; } // 801CEC90
  c->r[0]=c->r[6]+c->r[0]; // 801CEC94
  goto L_801CECA0; // 801CEC98
L_801CEC9C:;
  c->r[0]=0u+0x00000000u; // 801CEC9C
L_801CECA0:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CECA0
  c->r[3]=c->r[3]+0x00000001u; // 801CECA4
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CECA8
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 801CECAC
  c->r[5]=c->r[5]+0x00000008u; // 801CECB0
L_801CECB4:;
  c->r[4]=c->r[4]+0x00000010u; // 801CECB4
  c->r[7]=c->r[7]+0x00000001u; // 801CECB8
L_801CECBC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CECBC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801CECC0
  if (crb(c,0)) { IRQCHK(c); goto L_801CEC78; } // 801CECC4
  c->r[4]=R32(c->r[1]+0x00000018u); // 801CECC8
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801CECCC
  c->r[3]=c->r[1]+0x00000130u; // 801CECD0
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 801CECD4
  c->r[3]=c->r[3]+c->r[0]; // 801CECD8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801CECDC
  c->r[8]=c->r[15]+c->r[4]; // 801CECE0
  goto L_801CEDF4; // 801CECE4
L_801CECE8:;
  c->r[7]=R32(c->r[1]+0x00000130u); // 801CECE8
  c->r[5]=c->r[1]+0x00000138u; // 801CECEC
  c->r[6]=c->r[3]+0x00000007u; // 801CECF0
  {uint32_t ea=c->r[1]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CECF4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 801CECF8
  c->r[6]=c->r[6]-c->r[5]; // 801CECFC
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,1,ea,1,0);} // 801CED00
  c->r[0]=c->r[7]+0x0000000Cu; // 801CED04
  cmpu(c,0,c->r[5],c->r[3]); // 801CED08
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801CED0C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 801CED10
  W32(c->r[1]+0x00000130u,c->r[0]); // 801CED14
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801CED18
  if (!crb(c,0)) { goto L_801CEDE8; } // 801CED1C
  c->r[0]=rotl(c->r[6],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801CED20
  c->ctr=c->r[0]; // 801CED24
  if (crb(c,2)) { goto L_801CEDBC; } // 801CED28
L_801CED2C:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 801CED2C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CED30
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CED34
  c->r[0]=c->r[7]+0x0000000Cu; // 801CED38
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CED3C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CED40
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CED44
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CED48
  c->r[7]=R32(c->r[5]+0x00000008u); // 801CED4C
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CED50
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CED54
  c->r[0]=c->r[7]+0x0000000Cu; // 801CED58
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CED5C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CED60
  W32(c->r[5]+0x00000008u,c->r[0]); // 801CED64
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CED68
  c->r[7]=R32(c->r[5]+0x00000010u); // 801CED6C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CED70
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CED74
  c->r[0]=c->r[7]+0x0000000Cu; // 801CED78
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CED7C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CED80
  W32(c->r[5]+0x00000010u,c->r[0]); // 801CED84
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CED88
  c->r[7]=R32(c->r[5]+0x00000018u); // 801CED8C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CED90
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CED94
  c->r[0]=c->r[7]+0x0000000Cu; // 801CED98
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CED9C
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CEDA0
  W32(c->r[5]+0x00000018u,c->r[0]); // 801CEDA4
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CEDA8
  c->r[5]=c->r[5]+0x00000020u; // 801CEDAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CED2C; } // 801CEDB0
  c->r[6]=c->r[6]&0x00000003u; cr0(c,c->r[6]); // 801CEDB4
  if (crb(c,2)) { goto L_801CEDE8; } // 801CEDB8
L_801CEDBC:;
  c->ctr=c->r[6]; // 801CEDBC
L_801CEDC0:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 801CEDC0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEDC4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 801CEDC8
  c->r[0]=c->r[7]+0x0000000Cu; // 801CEDCC
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,1,0);} // 801CEDD0
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CEDD4
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CEDD8
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CEDDC
  c->r[5]=c->r[5]+0x00000008u; // 801CEDE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CEDC0; } // 801CEDE4
L_801CEDE8:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,0);} // 801CEDE8
  {uint32_t ea=c->r[15]+0x00000008u; psq_store(c,1,ea,1,0);} // 801CEDEC
  c->r[15]=c->r[15]+0x0000000Cu; // 801CEDF0
L_801CEDF4:;
  cmpu(c,0,c->r[15],c->r[8]); // 801CEDF4
  if (crb(c,0)) { IRQCHK(c); goto L_801CECE8; } // 801CEDF8
  c->r[0]=R32(c->r[16]+0x00000008u); // 801CEDFC
  cmps(c,0,(int32_t)c->r[0],0); // 801CEE00
  if (crb(c,2)) { goto L_801CEE10; } // 801CEE04
  c->r[3]=c->r[16]+c->r[0]; // 801CEE08
  goto L_801CEE14; // 801CEE0C
L_801CEE10:;
  c->r[3]=0u+0x00000000u; // 801CEE10
L_801CEE14:;
  c->lr=0x801CEE18u; f_800E03B0(c); // 801CEE14
L_801CEE18:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801CEE18
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801CEE1C
  if (crb(c,2)) { goto L_801CEFA8; } // 801CEE20
  cmps(c,0,(int32_t)c->r[29],0); // 801CEE24
  if (crb(c,2)) { goto L_801CEFA8; } // 801CEE28
  c->r[4]=R32(c->r[30]+0x00000010u); // 801CEE2C
  c->r[3]=0u+0x00000000u; // 801CEE30
  W32(c->r[1]+0x00000010u,c->r[4]); // 801CEE34
  c->r[0]=R32(c->r[4]+0x00000010u); // 801CEE38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CEE3C
  c->r[16]=R32(c->r[29]+c->r[0]); // 801CEE40
  c->r[0]=R32(c->r[16]+0x00000008u); // 801CEE44
  cmps(c,0,(int32_t)c->r[0],0); // 801CEE48
  if (crb(c,2)) { goto L_801CEE58; } // 801CEE4C
  c->r[15]=c->r[16]+c->r[0]; // 801CEE50
  goto L_801CEE5C; // 801CEE54
L_801CEE58:;
  c->r[15]=0u+0x00000000u; // 801CEE58
L_801CEE5C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEE5C
  fcmp(c,0,c->f[31],c->f[0]); // 801CEE60
  if (crb(c,2)) { goto L_801CEE8C; } // 801CEE64
  c->r[3]=c->r[1]+0x00000010u; // 801CEE68
  c->r[4]=c->r[1]+0x0000000Cu; // 801CEE6C
  c->r[5]=c->r[1]+0x00000008u; // 801CEE70
  c->lr=0x801CEE78u; f_801AD2F8(c); // 801CEE74
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801CEE78
  c->r[3]=0u+0x00000001u; // 801CEE7C
  W32(c->r[1]+0x00000028u,c->r[0]); // 801CEE80
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEE84
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801CEE88
L_801CEE8C:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801CEE8C
  c->r[5]=c->r[1]+0x00000028u; // 801CEE90
  c->r[4]=c->r[30]|c->r[30]; // 801CEE94
  c->r[7]=0u+0x00000000u; // 801CEE98
  c->r[5]=c->r[5]+c->r[0]; // 801CEE9C
  goto L_801CEEE8; // 801CEEA0
L_801CEEA4:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEEA4
  fcmp(c,0,c->f[31],c->f[0]); // 801CEEA8
  if (crb(c,2)) { goto L_801CEEE0; } // 801CEEAC
  c->r[6]=R32(c->r[4]+0x00000020u); // 801CEEB0
  c->r[0]=R32(c->r[6]+0x00000008u); // 801CEEB4
  cmps(c,0,(int32_t)c->r[0],0); // 801CEEB8
  if (crb(c,2)) { goto L_801CEEC8; } // 801CEEBC
  c->r[0]=c->r[6]+c->r[0]; // 801CEEC0
  goto L_801CEECC; // 801CEEC4
L_801CEEC8:;
  c->r[0]=0u+0x00000000u; // 801CEEC8
L_801CEECC:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CEECC
  c->r[3]=c->r[3]+0x00000001u; // 801CEED0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEED4
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 801CEED8
  c->r[5]=c->r[5]+0x00000008u; // 801CEEDC
L_801CEEE0:;
  c->r[4]=c->r[4]+0x00000010u; // 801CEEE0
  c->r[7]=c->r[7]+0x00000001u; // 801CEEE4
L_801CEEE8:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CEEE8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801CEEEC
  if (crb(c,0)) { IRQCHK(c); goto L_801CEEA4; } // 801CEEF0
  c->r[4]=R32(c->r[1]+0x00000010u); // 801CEEF4
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801CEEF8
  c->r[3]=c->r[1]+0x00000028u; // 801CEEFC
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 801CEF00
  c->r[3]=c->r[3]+c->r[0]; // 801CEF04
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CEF08
  c->r[6]=c->r[15]+c->r[4]; // 801CEF0C
  goto L_801CEF84; // 801CEF10
L_801CEF14:;
  c->r[5]=R32(c->r[1]+0x00000028u); // 801CEF14
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEF18
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,2);} // 801CEF1C
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,1,ea,0,2);} // 801CEF20
  c->r[7]=c->r[1]+0x00000030u; // 801CEF24
  c->r[0]=c->r[3]+0x00000007u; // 801CEF28
  c->r[5]=c->r[5]+0x00000004u; // 801CEF2C
  c->r[0]=c->r[0]-c->r[7]; // 801CEF30
  W32(c->r[1]+0x00000028u,c->r[5]); // 801CEF34
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801CEF38
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801CEF3C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 801CEF40
  c->ctr=c->r[0]; // 801CEF44
  cmpu(c,0,c->r[7],c->r[3]); // 801CEF48
  if (!crb(c,0)) { goto L_801CEF78; } // 801CEF4C
L_801CEF50:;
  c->r[5]=R32(c->r[7]+0x00000000u); // 801CEF50
  {uint32_t ea=c->r[7]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEF54
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,2);} // 801CEF58
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,4,ea,0,2);} // 801CEF5C
  c->r[0]=c->r[5]+0x00000004u; // 801CEF60
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801CEF64
  W32(c->r[7]+0x00000000u,c->r[0]); // 801CEF68
  {double t0=S(std::fma(c->f[4],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[2],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801CEF6C
  c->r[7]=c->r[7]+0x00000008u; // 801CEF70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CEF50; } // 801CEF74
L_801CEF78:;
  {uint32_t ea=c->r[15]+0x00000000u; psq_store(c,0,ea,0,2);} // 801CEF78
  {uint32_t ea=c->r[15]+0x00000002u; psq_store(c,1,ea,0,2);} // 801CEF7C
  c->r[15]=c->r[15]+0x00000004u; // 801CEF80
L_801CEF84:;
  cmpu(c,0,c->r[15],c->r[6]); // 801CEF84
  if (crb(c,0)) { IRQCHK(c); goto L_801CEF14; } // 801CEF88
  c->r[0]=R32(c->r[16]+0x00000008u); // 801CEF8C
  cmps(c,0,(int32_t)c->r[0],0); // 801CEF90
  if (crb(c,2)) { goto L_801CEFA0; } // 801CEF94
  c->r[3]=c->r[16]+c->r[0]; // 801CEF98
  goto L_801CEFA4; // 801CEF9C
L_801CEFA0:;
  c->r[3]=0u+0x00000000u; // 801CEFA0
L_801CEFA4:;
  c->lr=0x801CEFA8u; f_800E03B0(c); // 801CEFA4
L_801CEFA8:;
  c->r[27]=c->r[27]+0x00000004u; // 801CEFA8
  c->r[31]=c->r[31]+0x00000001u; // 801CEFAC
L_801CEFB0:;
  cmpu(c,0,c->r[31],c->r[23]); // 801CEFB0
  if (crb(c,0)) { IRQCHK(c); goto L_801CE854; } // 801CEFB4
  {uint32_t ea=c->r[1]+0x000005A8u; psq_load(c,31,ea,0,0);} // 801CEFB8
  c->r[11]=c->r[1]+0x000005A0u; // 801CEFBC
  {uint32_t ea=c->r[1]+0x000005A0u; c->f[31]=RF64(ea);} // 801CEFC0
  c->lr=0x801CEFC8u; f_80109F50(c); // 801CEFC4
  c->r[0]=R32(c->r[1]+0x000005B4u); // 801CEFC8
  c->lr=c->r[0]; // 801CEFCC
  c->r[1]=c->r[1]+0x000005B0u; // 801CEFD0
  return; // 801CEFD4
}

// LytInit__Q24nw4r3lytFv
void f_801CEFD8(Ctx* __restrict c) {
  trace_call(0x801CEFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEFD8
  c->r[0]=c->lr; // 801CEFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEFE0
  c->r[3]=R32(c->r[13]+0xFFFF90E8u); // 801CEFE4
  c->lr=0x801CEFECu; f_800DF258(c); // 801CEFE8
  c->r[3]=0u+0x00000004u; // 801CEFEC
  c->r[3]=c->r[3]|0x00040000u; // 801CEFF0
  mtspr(c,914,c->r[3]); // 801CEFF4
  c->r[3]=0u+0x00000005u; // 801CEFF8
  c->r[3]=c->r[3]|0x00050000u; // 801CEFFC
  mtspr(c,915,c->r[3]); // 801CF000
  c->r[3]=0u+0x00000006u; // 801CF004
  c->r[3]=c->r[3]|0x00060000u; // 801CF008
  mtspr(c,916,c->r[3]); // 801CF00C
  c->r[3]=0u+0x00000007u; // 801CF010
  c->r[3]=c->r[3]|0x00070000u; // 801CF014
  mtspr(c,917,c->r[3]); // 801CF018
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF01C
  c->lr=c->r[0]; // 801CF020
  c->r[1]=c->r[1]+0x00000010u; // 801CF024
  return; // 801CF028
}

// __ct__Q34nw4r3lyt4PaneFv
void f_801CF02C(Ctx* __restrict c) {
  trace_call(0x801CF02Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF02C
  c->r[0]=c->lr; // 801CF030
  c->r[6]=0u+0x802A0000u; // 801CF034
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF038
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CF03C
  c->r[7]=c->r[3]+0x00000014u; // 801CF040
  c->r[8]=c->r[3]+0x00000020u; // 801CF044
  c->r[6]=c->r[6]+0x000017A8u; // 801CF048
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801CF04C
  c->r[31]=0u+0x00000000u; // 801CF050
  c->r[0]=0u+0x00000004u; // 801CF054
  c->r[4]=0u+0x00000000u; // 801CF058
  W32(c->r[1]+0x00000038u,c->r[30]); // 801CF05C
  c->r[30]=c->r[3]|c->r[3]; // 801CF060
  c->r[5]=0u+0x00000011u; // 801CF064
  W32(c->r[3]+0x00000014u,c->r[31]); // 801CF068
  W32(c->r[3]+0x00000018u,c->r[31]); // 801CF06C
  W32(c->r[3]+0x00000020u,c->r[31]); // 801CF070
  W32(c->r[3]+0x00000024u,c->r[31]); // 801CF074
  W32(c->r[3]+0x00000004u,c->r[31]); // 801CF078
  W32(c->r[3]+0x00000008u,c->r[31]); // 801CF07C
  W32(c->r[3]+0x00000000u,c->r[6]); // 801CF080
  W32(c->r[3]+0x00000010u,c->r[31]); // 801CF084
  W32(c->r[3]+0x00000014u,c->r[7]); // 801CF088
  W32(c->r[3]+0x00000018u,c->r[7]); // 801CF08C
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801CF090
  W32(c->r[3]+0x00000020u,c->r[8]); // 801CF094
  W32(c->r[3]+0x00000024u,c->r[8]); // 801CF098
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801CF09C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 801CF0A0
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801CF0A4
  W32(c->r[3]+0x00000028u,c->r[31]); // 801CF0A8
  W8(c->r[3]+0x000000D6u,c->r[31]); // 801CF0AC
  W32(c->r[3]+0x000000B4u,c->r[31]); // 801CF0B0
  W8(c->r[3]+0x000000BAu,c->r[0]); // 801CF0B4
  c->r[3]=c->r[3]+0x000000BCu; // 801CF0B8
  c->lr=0x801CF0C0u; f_8000443C(c); // 801CF0BC
  c->r[3]=c->r[30]+0x000000CDu; // 801CF0C0
  c->r[4]=0u+0x00000000u; // 801CF0C4
  c->r[5]=0u+0x00000009u; // 801CF0C8
  c->lr=0x801CF0D0u; f_8000443C(c); // 801CF0CC
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF0D0
  c->r[4]=0u+0x000000FFu; // 801CF0D4
  {uint32_t ea=c->r[2]+0xFFFF9D1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF0D8
  c->r[0]=c->r[31]|0x00000001u; // 801CF0DC
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[1]);} // 801CF0E0
  c->r[3]=c->r[30]|c->r[30]; // 801CF0E4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 801CF0E8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 801CF0EC
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 801CF0F0
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 801CF0F4
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 801CF0F8
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 801CF0FC
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 801CF100
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 801CF104
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 801CF108
  W8(c->r[30]+0x000000B8u,c->r[4]); // 801CF10C
  W8(c->r[30]+0x000000B9u,c->r[4]); // 801CF110
  W8(c->r[30]+0x000000BBu,c->r[0]); // 801CF114
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801CF118
  c->r[30]=R32(c->r[1]+0x00000038u); // 801CF11C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CF120
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801CF124
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801CF128
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801CF12C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801CF130
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801CF134
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801CF138
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801CF13C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801CF140
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CF144
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801CF148
  c->lr=c->r[0]; // 801CF14C
  c->r[1]=c->r[1]+0x00000040u; // 801CF150
  return; // 801CF154
}

// __ct__Q34nw4r3lyt4PaneFPCQ44nw4r3lyt3res4Pane
void f_801CF158(Ctx* __restrict c) {
  trace_call(0x801CF158u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF158
  c->r[0]=c->lr; // 801CF15C
  c->r[6]=0u+0x802A0000u; // 801CF160
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF164
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF168
  c->r[7]=c->r[3]+0x00000014u; // 801CF16C
  c->r[0]=R8(c->r[4]+0x00000009u); // 801CF170
  c->r[8]=c->r[3]+0x00000020u; // 801CF174
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF178
  c->r[31]=0u+0x00000000u; // 801CF17C
  c->r[6]=c->r[6]+0x000017A8u; // 801CF180
  c->r[5]=0u+0x00000010u; // 801CF184
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF188
  c->r[30]=c->r[4]|c->r[4]; // 801CF18C
  c->r[4]=c->r[4]+0x0000000Cu; // 801CF190
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF194
  c->r[29]=c->r[3]|c->r[3]; // 801CF198
  W32(c->r[3]+0x00000014u,c->r[31]); // 801CF19C
  W32(c->r[3]+0x00000018u,c->r[31]); // 801CF1A0
  W32(c->r[3]+0x00000020u,c->r[31]); // 801CF1A4
  W32(c->r[3]+0x00000024u,c->r[31]); // 801CF1A8
  W32(c->r[3]+0x00000004u,c->r[31]); // 801CF1AC
  W32(c->r[3]+0x00000008u,c->r[31]); // 801CF1B0
  W32(c->r[3]+0x00000000u,c->r[6]); // 801CF1B4
  W32(c->r[3]+0x00000010u,c->r[31]); // 801CF1B8
  W32(c->r[3]+0x00000014u,c->r[7]); // 801CF1BC
  W32(c->r[3]+0x00000018u,c->r[7]); // 801CF1C0
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801CF1C4
  W32(c->r[3]+0x00000020u,c->r[8]); // 801CF1C8
  W32(c->r[3]+0x00000024u,c->r[8]); // 801CF1CC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801CF1D0
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 801CF1D4
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801CF1D8
  W32(c->r[3]+0x00000028u,c->r[31]); // 801CF1DC
  W8(c->r[3]+0x000000D6u,c->r[31]); // 801CF1E0
  W32(c->r[3]+0x000000B4u,c->r[31]); // 801CF1E4
  W8(c->r[3]+0x000000BAu,c->r[0]); // 801CF1E8
  c->r[3]=c->r[3]+0x000000BCu; // 801CF1EC
  c->lr=0x801CF1F4u; f_801141CC(c); // 801CF1F0
  W8(c->r[29]+0x000000CCu,c->r[31]); // 801CF1F4
  c->r[3]=c->r[29]+0x000000CDu; // 801CF1F8
  c->r[4]=c->r[30]+0x0000001Cu; // 801CF1FC
  c->r[5]=0u+0x00000008u; // 801CF200
  c->lr=0x801CF208u; f_801141CC(c); // 801CF204
  c->r[4]=R8(c->r[30]+0x0000000Au); // 801CF208
  c->r[3]=c->r[29]|c->r[29]; // 801CF20C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 801CF210
  {uint32_t ea=c->r[30]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 801CF214
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801CF218
  {uint32_t ea=c->r[30]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 801CF21C
  {uint32_t ea=c->r[30]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 801CF220
  {uint32_t ea=c->r[30]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CF224
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF228
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF22C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF230
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF234
  c->r[0]=R8(c->r[30]+0x00000008u); // 801CF238
  W8(c->r[29]+0x000000D5u,c->r[31]); // 801CF23C
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[9]);} // 801CF240
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[8]);} // 801CF244
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[7]);} // 801CF248
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[6]);} // 801CF24C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[5]);} // 801CF250
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[4]);} // 801CF254
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[3]);} // 801CF258
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[2]);} // 801CF25C
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[1]);} // 801CF260
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 801CF264
  W8(c->r[29]+0x000000B8u,c->r[4]); // 801CF268
  W8(c->r[29]+0x000000B9u,c->r[4]); // 801CF26C
  W8(c->r[29]+0x000000BBu,c->r[0]); // 801CF270
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF274
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF278
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CF27C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF280
  c->lr=c->r[0]; // 801CF284
  c->r[1]=c->r[1]+0x00000020u; // 801CF288
  return; // 801CF28C
}

// __dt__Q34nw4r3lyt4PaneFv
void f_801CF290(Ctx* __restrict c) {
  trace_call(0x801CF290u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF290
  c->r[0]=c->lr; // 801CF294
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CF298
  c->r[11]=c->r[1]+0x00000030u; // 801CF29C
  c->lr=0x801CF2A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CF2A0
  cmps(c,0,(int32_t)c->r[3],0); // 801CF2A4
  c->r[27]=c->r[3]|c->r[3]; // 801CF2A8
  c->r[28]=c->r[4]|c->r[4]; // 801CF2AC
  if (crb(c,2)) { goto L_801CF3AC; } // 801CF2B0
  c->r[4]=0u+0x802A0000u; // 801CF2B4
  c->r[31]=R32(c->r[3]+0x00000014u); // 801CF2B8
  c->r[4]=c->r[4]+0x000017A8u; // 801CF2BC
  c->r[30]=c->r[3]+0x00000014u; // 801CF2C0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CF2C4
  goto L_801CF31C; // 801CF2C8
L_801CF2CC:;
  c->r[29]=c->r[31]|c->r[31]; // 801CF2CC
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CF2D0
  c->r[3]=c->r[27]+0x00000010u; // 801CF2D4
  c->r[4]=c->r[1]+0x00000008u; // 801CF2D8
  W32(c->r[1]+0x00000008u,c->r[29]); // 801CF2DC
  c->lr=0x801CF2E4u; f_8017A6D8(c); // 801CF2E0
  c->r[0]=R8(c->r[29]+0x000000D2u); // 801CF2E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CF2E8
  if (!crb(c,2)) { goto L_801CF31C; } // 801CF2EC
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801CF2F0
  if (crb(c,2)) { goto L_801CF31C; } // 801CF2F4
  c->r[12]=R32(c->r[29]+0x00000000u); // 801CF2F8
  c->r[3]=c->r[29]|c->r[29]; // 801CF2FC
  c->r[4]=0u+0xFFFFFFFFu; // 801CF300
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CF304
  c->ctr=c->r[12]; // 801CF308
  if (true) { c->lr=0x801CF310u; dispatch(c,c->ctr); } // 801CF30C
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801CF310
  c->r[4]=c->r[29]|c->r[29]; // 801CF314
  c->lr=0x801CF31Cu; f_80128078(c); // 801CF318
L_801CF31C:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CF31C
  if (!crb(c,2)) { IRQCHK(c); goto L_801CF2CC; } // 801CF320
  c->r[12]=R32(c->r[27]+0x00000000u); // 801CF324
  c->r[3]=c->r[27]|c->r[27]; // 801CF328
  c->r[4]=0u+0x00000000u; // 801CF32C
  c->r[12]=R32(c->r[12]+0x00000050u); // 801CF330
  c->ctr=c->r[12]; // 801CF334
  if (true) { c->lr=0x801CF33Cu; dispatch(c,c->ctr); } // 801CF338
  c->r[29]=R32(c->r[27]+0x00000028u); // 801CF33C
  cmps(c,1,(int32_t)c->r[29],0); // 801CF340
  if (crb(c,6)) { goto L_801CF37C; } // 801CF344
  c->r[0]=R8(c->r[29]+0x00000059u); // 801CF348
  cmps(c,0,(int32_t)c->r[0],0); // 801CF34C
  if (!crb(c,2)) { goto L_801CF37C; } // 801CF350
  if (crb(c,6)) { goto L_801CF37C; } // 801CF354
  c->r[12]=R32(c->r[29]+0x00000000u); // 801CF358
  c->r[3]=c->r[29]|c->r[29]; // 801CF35C
  c->r[4]=0u+0xFFFFFFFFu; // 801CF360
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CF364
  c->ctr=c->r[12]; // 801CF368
  if (true) { c->lr=0x801CF370u; dispatch(c,c->ctr); } // 801CF36C
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801CF370
  c->r[4]=c->r[29]|c->r[29]; // 801CF374
  c->lr=0x801CF37Cu; f_80128078(c); // 801CF378
L_801CF37C:;
  c->r[3]=addc(c,c->r[27],0x0000001Cu,0); cr0(c,c->r[3]); // 801CF37C
  if (crb(c,2)) { goto L_801CF38C; } // 801CF380
  c->r[4]=0u+0x00000000u; // 801CF384
  c->lr=0x801CF38Cu; f_8017A654(c); // 801CF388
L_801CF38C:;
  c->r[3]=addc(c,c->r[27],0x00000010u,0); cr0(c,c->r[3]); // 801CF38C
  if (crb(c,2)) { goto L_801CF39C; } // 801CF390
  c->r[4]=0u+0x00000000u; // 801CF394
  c->lr=0x801CF39Cu; f_8017A654(c); // 801CF398
L_801CF39C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CF39C
  if (!crb(c,1)) { goto L_801CF3AC; } // 801CF3A0
  c->r[3]=c->r[27]|c->r[27]; // 801CF3A4
  c->lr=0x801CF3ACu; f_8009230C(c); // 801CF3A8
L_801CF3AC:;
  c->r[11]=c->r[1]+0x00000030u; // 801CF3AC
  c->r[3]=c->r[27]|c->r[27]; // 801CF3B0
  c->lr=0x801CF3B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF3B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CF3B8
  c->lr=c->r[0]; // 801CF3BC
  c->r[1]=c->r[1]+0x00000030u; // 801CF3C0
  return; // 801CF3C4
}

// SetName__Q34nw4r3lyt4PaneFPCc
void f_801CF3C8(Ctx* __restrict c) {
  trace_call(0x801CF3C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF3C8
  c->r[0]=c->lr; // 801CF3CC
  c->r[5]=0u+0x00000010u; // 801CF3D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF3D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF3D8
  c->r[31]=c->r[3]|c->r[3]; // 801CF3DC
  c->r[3]=c->r[3]+0x000000BCu; // 801CF3E0
  c->lr=0x801CF3E8u; f_801141CC(c); // 801CF3E4
  c->r[0]=0u+0x00000000u; // 801CF3E8
  W8(c->r[31]+0x000000CCu,c->r[0]); // 801CF3EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF3F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF3F4
  c->lr=c->r[0]; // 801CF3F8
  c->r[1]=c->r[1]+0x00000010u; // 801CF3FC
  return; // 801CF400
}

// AppendChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane
void f_801CF404(Ctx* __restrict c) {
  trace_call(0x801CF404u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF404
  c->r[0]=c->lr; // 801CF408
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF40C
  c->r[0]=c->r[3]+0x00000014u; // 801CF410
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF414
  c->r[31]=c->r[4]|c->r[4]; // 801CF418
  c->r[4]=c->r[1]+0x00000008u; // 801CF41C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF420
  c->r[30]=c->r[3]|c->r[3]; // 801CF424
  c->r[3]=c->r[3]+0x00000010u; // 801CF428
  c->r[5]=c->r[31]+0x00000004u; // 801CF42C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CF430
  c->lr=0x801CF438u; f_8017A764(c); // 801CF434
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 801CF438
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF43C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF440
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF444
  c->lr=c->r[0]; // 801CF448
  c->r[1]=c->r[1]+0x00000020u; // 801CF44C
  return; // 801CF450
}

// PrependChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane
void f_801CF454(Ctx* __restrict c) {
  trace_call(0x801CF454u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF454
  c->r[0]=c->lr; // 801CF458
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF45C
  c->r[0]=c->r[4]+0x00000004u; // 801CF460
  c->r[4]=c->r[1]+0x00000008u; // 801CF464
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF468
  c->r[31]=c->r[5]|c->r[5]; // 801CF46C
  c->r[5]=c->r[5]+0x00000004u; // 801CF470
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF474
  c->r[30]=c->r[3]|c->r[3]; // 801CF478
  c->r[3]=c->r[3]+0x00000010u; // 801CF47C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CF480
  c->lr=0x801CF488u; f_8017A764(c); // 801CF484
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 801CF488
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF48C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF490
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF494
  c->lr=c->r[0]; // 801CF498
  c->r[1]=c->r[1]+0x00000020u; // 801CF49C
  return; // 801CF4A0
}

// RemoveChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane
void f_801CF4A4(Ctx* __restrict c) {
  trace_call(0x801CF4A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF4A4
  c->r[0]=c->lr; // 801CF4A8
  c->r[3]=c->r[3]+0x00000010u; // 801CF4AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF4B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF4B4
  c->r[31]=c->r[4]|c->r[4]; // 801CF4B8
  c->r[4]=c->r[4]+0x00000004u; // 801CF4BC
  c->lr=0x801CF4C4u; f_8017A790(c); // 801CF4C0
  c->r[0]=0u+0x00000000u; // 801CF4C4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801CF4C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF4CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF4D0
  c->lr=c->r[0]; // 801CF4D4
  c->r[1]=c->r[1]+0x00000010u; // 801CF4D8
  return; // 801CF4DC
}

// GetVtxColor__Q34nw4r3lyt4PaneCFUl
void f_801CF4E0(Ctx* __restrict c) {
  trace_call(0x801CF4E0u);
  c->r[0]=0u+0xFFFFFFFFu; // 801CF4E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CF4E4
  return; // 801CF4E8
}

// SetVtxColor__Q34nw4r3lyt4PaneFUlQ34nw4r2ut5Color
void f_801CF4EC(Ctx* __restrict c) {
  trace_call(0x801CF4ECu);
  return; // 801CF4EC
}

// fn_801CF4F0
void f_801CF4F0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],16); // 801CF4F0
  if (crb(c,2)) { goto L_801CF4FC; } // 801CF4F4
  goto L_801CF504; // 801CF4F8
L_801CF4FC:;
  c->r[3]=R8(c->r[3]+0x000000B8u); // 801CF4FC
  return; // 801CF500
L_801CF504:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CF504
  c->r[12]=R32(c->r[12]+0x00000034u); // 801CF508
  c->ctr=c->r[12]; // 801CF50C
  if (true) { dispatch(c,c->ctr); return; } // 801CF510
}

// fn_801CF514
void f_801CF514(Ctx* __restrict c) {
  return; // 801CF514
}

// fn_801CF518
void f_801CF518(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],16); // 801CF518
  if (crb(c,2)) { goto L_801CF524; } // 801CF51C
  goto L_801CF52C; // 801CF520
L_801CF524:;
  W8(c->r[3]+0x000000B8u,c->r[5]); // 801CF524
  return; // 801CF528
L_801CF52C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CF52C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CF530
  c->ctr=c->r[12]; // 801CF534
  if (true) { dispatch(c,c->ctr); return; } // 801CF538
}

// fn_801CF53C
void f_801CF53C(Ctx* __restrict c) {
  return; // 801CF53C
}

// GetVtxColorElement__Q34nw4r3lyt4PaneCFUl
void f_801CF540(Ctx* __restrict c) {
  trace_call(0x801CF540u);
  c->r[3]=0u+0x000000FFu; // 801CF540
  return; // 801CF544
}

// SetVtxColorElement__Q34nw4r3lyt4PaneFUlUc
void f_801CF548(Ctx* __restrict c) {
  trace_call(0x801CF548u);
  return; // 801CF548
}

// FindPaneByName__Q34nw4r3lyt4PaneFPCcb
void f_801CF54C(Ctx* __restrict c) {
  trace_call(0x801CF54Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF54C
  c->r[0]=c->lr; // 801CF550
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF554
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF558
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF55C
  c->r[30]=c->r[3]|c->r[3]; // 801CF560
  c->r[3]=c->r[3]+0x000000BCu; // 801CF564
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF568
  c->r[29]=c->r[5]|c->r[5]; // 801CF56C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CF570
  c->r[28]=c->r[4]|c->r[4]; // 801CF574
  c->lr=0x801CF57Cu; f_801DA810(c); // 801CF578
  cmps(c,0,(int32_t)c->r[3],0); // 801CF57C
  if (crb(c,2)) { goto L_801CF58C; } // 801CF580
  c->r[3]=c->r[30]|c->r[30]; // 801CF584
  goto L_801CF5D4; // 801CF588
L_801CF58C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CF58C
  if (crb(c,2)) { goto L_801CF5D0; } // 801CF590
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 801CF594
  goto L_801CF5C8; // 801CF598
L_801CF59C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 801CF59C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 801CF5A0
  c->r[4]=c->r[28]|c->r[28]; // 801CF5A4
  c->r[5]=c->r[29]|c->r[29]; // 801CF5A8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CF5AC
  c->ctr=c->r[12]; // 801CF5B0
  if (true) { c->lr=0x801CF5B8u; dispatch(c,c->ctr); } // 801CF5B4
  cmps(c,0,(int32_t)c->r[3],0); // 801CF5B8
  if (crb(c,2)) { goto L_801CF5C4; } // 801CF5BC
  goto L_801CF5D4; // 801CF5C0
L_801CF5C4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CF5C4
L_801CF5C8:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CF5C8
  if (!crb(c,2)) { IRQCHK(c); goto L_801CF59C; } // 801CF5CC
L_801CF5D0:;
  c->r[3]=0u+0x00000000u; // 801CF5D0
L_801CF5D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF5D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF5D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF5DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CF5E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CF5E4
  c->lr=c->r[0]; // 801CF5E8
  c->r[1]=c->r[1]+0x00000020u; // 801CF5EC
  return; // 801CF5F0
}

// FindMaterialByName__Q34nw4r3lyt4PaneFPCcb
void f_801CF5F4(Ctx* __restrict c) {
  trace_call(0x801CF5F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF5F4
  c->r[0]=c->lr; // 801CF5F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF5FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF600
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF604
  c->r[30]=c->r[3]|c->r[3]; // 801CF608
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF60C
  c->r[29]=c->r[5]|c->r[5]; // 801CF610
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CF614
  c->r[28]=c->r[4]|c->r[4]; // 801CF618
  c->r[6]=R32(c->r[3]+0x00000028u); // 801CF61C
  cmps(c,0,(int32_t)c->r[6],0); // 801CF620
  if (crb(c,2)) { goto L_801CF640; } // 801CF624
  c->r[3]=c->r[6]+0x00000044u; // 801CF628
  c->lr=0x801CF630u; f_801DA83C(c); // 801CF62C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF630
  if (crb(c,2)) { goto L_801CF640; } // 801CF634
  c->r[3]=R32(c->r[30]+0x00000028u); // 801CF638
  goto L_801CF688; // 801CF63C
L_801CF640:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CF640
  if (crb(c,2)) { goto L_801CF684; } // 801CF644
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 801CF648
  goto L_801CF67C; // 801CF64C
L_801CF650:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 801CF650
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 801CF654
  c->r[4]=c->r[28]|c->r[28]; // 801CF658
  c->r[5]=c->r[29]|c->r[29]; // 801CF65C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CF660
  c->ctr=c->r[12]; // 801CF664
  if (true) { c->lr=0x801CF66Cu; dispatch(c,c->ctr); } // 801CF668
  cmps(c,0,(int32_t)c->r[3],0); // 801CF66C
  if (crb(c,2)) { goto L_801CF678; } // 801CF670
  goto L_801CF688; // 801CF674
L_801CF678:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CF678
L_801CF67C:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CF67C
  if (!crb(c,2)) { IRQCHK(c); goto L_801CF650; } // 801CF680
L_801CF684:;
  c->r[3]=0u+0x00000000u; // 801CF684
L_801CF688:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF688
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF68C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF690
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CF694
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CF698
  c->lr=c->r[0]; // 801CF69C
  c->r[1]=c->r[1]+0x00000020u; // 801CF6A0
  return; // 801CF6A4
}

// CalculateMtx__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_801CF6A8(Ctx* __restrict c) {
  trace_call(0x801CF6A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF6A8
  c->r[0]=c->lr; // 801CF6AC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801CF6B0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 801CF6B4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 801CF6B8
  c->r[11]=c->r[1]+0x000000D0u; // 801CF6BC
  c->lr=0x801CF6C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CF6C0
  c->r[6]=R8(c->r[3]+0x000000BBu); // 801CF6C4
  c->r[30]=c->r[3]|c->r[3]; // 801CF6C8
  c->r[31]=c->r[4]|c->r[4]; // 801CF6CC
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 801CF6D0
  if (!crb(c,2)) { goto L_801CF6E4; } // 801CF6D4
  c->r[0]=R8(c->r[4]+0x00000050u); // 801CF6D8
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801CF6DC
  if (crb(c,2)) { goto L_801CF980; } // 801CF6E0
L_801CF6E4:;
  c->r[0]=R8(c->r[4]+0x00000050u); // 801CF6E4
  c->r[5]=R32(c->r[3]+0x00000044u); // 801CF6E8
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 801CF6EC
  c->r[0]=R32(c->r[3]+0x00000048u); // 801CF6F0
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CF6F4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CF6F8
  if (crb(c,2)) { goto L_801CF728; } // 801CF6FC
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 801CF700
  if (crb(c,2)) { goto L_801CF728; } // 801CF704
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF708
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF70C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF710
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF714
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801CF718
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801CF71C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801CF720
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CF724
L_801CF728:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF728
  c->r[3]=c->r[1]+0x00000040u; // 801CF72C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF730
  {uint32_t ea=c->r[2]+0xFFFF9D1Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF734
  c->lr=0x801CF73Cu; f_800EC7F0(c); // 801CF738
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF73C
  c->r[3]=c->r[1]+0x00000010u; // 801CF740
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF744
  c->r[4]=0u+0x00000078u; // 801CF748
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801CF74C
  c->lr=0x801CF754u; f_800EC518(c); // 801CF750
  c->r[3]=c->r[1]+0x00000010u; // 801CF754
  c->r[4]=c->r[1]+0x00000040u; // 801CF758
  c->r[5]=c->r[1]+0x00000070u; // 801CF75C
  c->lr=0x801CF764u; f_800EC0F4(c); // 801CF760
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF764
  c->r[3]=c->r[1]+0x00000010u; // 801CF768
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF76C
  c->r[4]=0u+0x00000079u; // 801CF770
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801CF774
  c->lr=0x801CF77Cu; f_800EC518(c); // 801CF778
  c->r[3]=c->r[1]+0x00000010u; // 801CF77C
  c->r[4]=c->r[1]+0x00000070u; // 801CF780
  c->r[5]=c->r[1]+0x00000040u; // 801CF784
  c->lr=0x801CF78Cu; f_800EC0F4(c); // 801CF788
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF78C
  c->r[3]=c->r[1]+0x00000010u; // 801CF790
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF794
  c->r[4]=0u+0x0000007Au; // 801CF798
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801CF79C
  c->lr=0x801CF7A4u; f_800EC518(c); // 801CF7A0
  c->r[3]=c->r[1]+0x00000010u; // 801CF7A4
  c->r[4]=c->r[1]+0x00000040u; // 801CF7A8
  c->r[5]=c->r[1]+0x00000070u; // 801CF7AC
  c->lr=0x801CF7B4u; f_800EC0F4(c); // 801CF7B0
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF7B4
  c->r[3]=c->r[1]+0x00000070u; // 801CF7B8
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF7BC
  c->r[4]=c->r[30]+0x00000054u; // 801CF7C0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF7C4
  c->lr=0x801CF7CCu; f_800EC7A4(c); // 801CF7C8
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801CF7CC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF7D0
  if (crb(c,2)) { goto L_801CF7EC; } // 801CF7D4
  c->r[3]=c->r[3]+0x00000084u; // 801CF7D8
  c->r[4]=c->r[30]+0x00000054u; // 801CF7DC
  c->r[5]=c->r[30]+0x00000084u; // 801CF7E0
  c->lr=0x801CF7E8u; f_800EC0F4(c); // 801CF7E4
  goto L_801CF86C; // 801CF7E8
L_801CF7EC:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 801CF7EC
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801CF7F0
  if (crb(c,2)) { goto L_801CF85C; } // 801CF7F4
  c->r[27]=R32(c->r[30]+0x00000054u); // 801CF7F8
  c->r[12]=R32(c->r[30]+0x00000058u); // 801CF7FC
  c->r[11]=R32(c->r[30]+0x0000005Cu); // 801CF800
  c->r[10]=R32(c->r[30]+0x00000060u); // 801CF804
  c->r[9]=R32(c->r[30]+0x00000064u); // 801CF808
  c->r[8]=R32(c->r[30]+0x00000068u); // 801CF80C
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 801CF810
  c->r[6]=R32(c->r[30]+0x00000070u); // 801CF814
  c->r[5]=R32(c->r[30]+0x00000074u); // 801CF818
  c->r[4]=R32(c->r[30]+0x00000078u); // 801CF81C
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 801CF820
  c->r[0]=R32(c->r[30]+0x00000080u); // 801CF824
  W32(c->r[30]+0x00000084u,c->r[27]); // 801CF828
  W32(c->r[30]+0x00000088u,c->r[12]); // 801CF82C
  W32(c->r[30]+0x0000008Cu,c->r[11]); // 801CF830
  W32(c->r[30]+0x00000090u,c->r[10]); // 801CF834
  W32(c->r[30]+0x00000094u,c->r[9]); // 801CF838
  W32(c->r[30]+0x00000098u,c->r[8]); // 801CF83C
  W32(c->r[30]+0x0000009Cu,c->r[7]); // 801CF840
  W32(c->r[30]+0x000000A0u,c->r[6]); // 801CF844
  W32(c->r[30]+0x000000A4u,c->r[5]); // 801CF848
  W32(c->r[30]+0x000000A8u,c->r[4]); // 801CF84C
  W32(c->r[30]+0x000000ACu,c->r[3]); // 801CF850
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801CF854
  goto L_801CF86C; // 801CF858
L_801CF85C:;
  c->r[3]=c->r[31]+0x00000004u; // 801CF85C
  c->r[4]=c->r[30]+0x00000054u; // 801CF860
  c->r[5]=c->r[30]+0x00000084u; // 801CF864
  c->lr=0x801CF86Cu; f_800EC0F4(c); // 801CF868
L_801CF86C:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 801CF86C
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 801CF870
  if (crb(c,2)) { goto L_801CF8BC; } // 801CF874
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801CF878
  cmps(c,0,(int32_t)c->r[0],0); // 801CF87C
  if (crb(c,2)) { goto L_801CF8BC; } // 801CF880
  c->r[3]=R8(c->r[30]+0x000000B8u); // 801CF884
  c->r[0]=0u+0x43300000u; // 801CF888
  W32(c->r[1]+0x000000A0u,c->r[0]); // 801CF88C
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[1]=RF64(ea);} // 801CF890
  W32(c->r[1]+0x000000A4u,c->r[3]); // 801CF894
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF898
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 801CF89C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CF8A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801CF8A4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801CF8A8
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 801CF8AC
  c->r[0]=R32(c->r[1]+0x000000ACu); // 801CF8B0
  W8(c->r[30]+0x000000B9u,c->r[0]); // 801CF8B4
  goto L_801CF8C4; // 801CF8B8
L_801CF8BC:;
  c->r[0]=R8(c->r[30]+0x000000B8u); // 801CF8BC
  W8(c->r[30]+0x000000B9u,c->r[0]); // 801CF8C0
L_801CF8C4:;
  c->r[0]=R8(c->r[30]+0x000000BBu); // 801CF8C4
  c->r[28]=0u+0x00000000u; // 801CF8C8
  c->r[3]=R8(c->r[31]+0x00000050u); // 801CF8CC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801CF8D0
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801CF8D4
  c->r[3]=rotl(c->r[3],26)&0x00000001u; // 801CF8D8
  c->r[0]=0u-c->r[3]; // 801CF8DC
  c->r[0]=c->r[0]|c->r[3]; // 801CF8E0
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 801CF8E4
  if (crb(c,2)) { goto L_801CF8FC; } // 801CF8E8
  c->r[0]=R8(c->r[30]+0x000000B8u); // 801CF8EC
  cmpu(c,0,c->r[0],0x000000FFu); // 801CF8F0
  if (crb(c,2)) { goto L_801CF8FC; } // 801CF8F4
  c->r[28]=0u+0x00000001u; // 801CF8F8
L_801CF8FC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CF8FC
  if (crb(c,2)) { goto L_801CF93C; } // 801CF900
  c->r[4]=R8(c->r[30]+0x000000B8u); // 801CF904
  c->r[3]=0u+0x43300000u; // 801CF908
  c->r[0]=R8(c->r[31]+0x00000050u); // 801CF90C
  W32(c->r[1]+0x000000ACu,c->r[4]); // 801CF910
  c->r[0]=c->r[0]|0x00000040u; // 801CF914
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[2]=RF64(ea);} // 801CF918
  W32(c->r[1]+0x000000A8u,c->r[3]); // 801CF91C
  {uint32_t ea=c->r[2]+0xFFFF9D24u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF920
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 801CF924
  W8(c->r[31]+0x00000050u,c->r[0]); // 801CF928
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CF92C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801CF930
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801CF934
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 801CF938
L_801CF93C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[29]=R32(ea); c->r[30]=ea;} // 801CF93C
  goto L_801CF960; // 801CF940
L_801CF944:;
  c->r[12]=R32(c->r[29]+0xFFFFFFFCu); // 801CF944
  c->r[3]=c->r[29]+0xFFFFFFFCu; // 801CF948
  c->r[4]=c->r[31]|c->r[31]; // 801CF94C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CF950
  c->ctr=c->r[12]; // 801CF954
  if (true) { c->lr=0x801CF95Cu; dispatch(c,c->ctr); } // 801CF958
  c->r[29]=R32(c->r[29]+0x00000000u); // 801CF95C
L_801CF960:;
  cmpu(c,0,c->r[29],c->r[30]); // 801CF960
  if (!crb(c,2)) { IRQCHK(c); goto L_801CF944; } // 801CF964
  cmps(c,0,(int32_t)c->r[28],0); // 801CF968
  if (crb(c,2)) { goto L_801CF980; } // 801CF96C
  c->r[0]=R8(c->r[31]+0x00000050u); // 801CF970
  c->r[0]=(rotl(c->r[27],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 801CF974
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[31]);} // 801CF978
  W8(c->r[31]+0x00000050u,c->r[0]); // 801CF97C
L_801CF980:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 801CF980
  c->r[11]=c->r[1]+0x000000D0u; // 801CF984
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 801CF988
  c->lr=0x801CF990u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF98C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801CF990
  c->lr=c->r[0]; // 801CF994
  c->r[1]=c->r[1]+0x000000E0u; // 801CF998
  return; // 801CF99C
}

// Draw__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_801CF9A0(Ctx* __restrict c) {
  trace_call(0x801CF9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF9A0
  c->r[0]=c->lr; // 801CF9A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF9A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF9AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF9B0
  c->r[30]=c->r[3]|c->r[3]; // 801CF9B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF9B8
  c->r[29]=c->r[4]|c->r[4]; // 801CF9BC
  c->r[0]=R8(c->r[3]+0x000000BBu); // 801CF9C0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CF9C4
  if (crb(c,2)) { goto L_801CFA08; } // 801CF9C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CF9CC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CF9D0
  c->ctr=c->r[12]; // 801CF9D4
  if (true) { c->lr=0x801CF9DCu; dispatch(c,c->ctr); } // 801CF9D8
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 801CF9DC
  goto L_801CFA00; // 801CF9E0
L_801CF9E4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 801CF9E4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 801CF9E8
  c->r[4]=c->r[29]|c->r[29]; // 801CF9EC
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CF9F0
  c->ctr=c->r[12]; // 801CF9F4
  if (true) { c->lr=0x801CF9FCu; dispatch(c,c->ctr); } // 801CF9F8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CF9FC
L_801CFA00:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CFA00
  if (!crb(c,2)) { IRQCHK(c); goto L_801CF9E4; } // 801CFA04
L_801CFA08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFA08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFA0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFA10
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFA14
  c->lr=c->r[0]; // 801CFA18
  c->r[1]=c->r[1]+0x00000020u; // 801CFA1C
  return; // 801CFA20
}

// DrawSelf__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_801CFA24(Ctx* __restrict c) {
  trace_call(0x801CFA24u);
  return; // 801CFA24
}

// Animate__Q34nw4r3lyt4PaneFUl
void f_801CFA28(Ctx* __restrict c) {
  trace_call(0x801CFA28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFA28
  c->r[0]=c->lr; // 801CFA2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFA30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFA34
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFA38
  c->r[30]=c->r[3]|c->r[3]; // 801CFA3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFA40
  c->r[29]=c->r[4]|c->r[4]; // 801CFA44
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFA48
  c->r[12]=R32(c->r[12]+0x00000020u); // 801CFA4C
  c->ctr=c->r[12]; // 801CFA50
  if (true) { c->lr=0x801CFA58u; dispatch(c,c->ctr); } // 801CFA54
  c->r[0]=R8(c->r[30]+0x000000BBu); // 801CFA58
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CFA5C
  if (!crb(c,2)) { goto L_801CFA6C; } // 801CFA60
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801CFA64
  if (!crb(c,2)) { goto L_801CFA98; } // 801CFA68
L_801CFA6C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 801CFA6C
  goto L_801CFA90; // 801CFA70
L_801CFA74:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 801CFA74
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 801CFA78
  c->r[4]=c->r[29]|c->r[29]; // 801CFA7C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CFA80
  c->ctr=c->r[12]; // 801CFA84
  if (true) { c->lr=0x801CFA8Cu; dispatch(c,c->ctr); } // 801CFA88
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CFA8C
L_801CFA90:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CFA90
  if (!crb(c,2)) { IRQCHK(c); goto L_801CFA74; } // 801CFA94
L_801CFA98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFA98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFA9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFAA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFAA4
  c->lr=c->r[0]; // 801CFAA8
  c->r[1]=c->r[1]+0x00000020u; // 801CFAAC
  return; // 801CFAB0
}

// AnimateSelf__Q34nw4r3lyt4PaneFUl
void f_801CFAB4(Ctx* __restrict c) {
  trace_call(0x801CFAB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFAB4
  c->r[0]=c->lr; // 801CFAB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFABC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFAC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFAC4
  c->r[30]=c->r[3]+0x00000020u; // 801CFAC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFACC
  c->r[29]=c->r[4]|c->r[4]; // 801CFAD0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CFAD4
  c->r[28]=c->r[3]|c->r[3]; // 801CFAD8
  c->r[31]=R32(c->r[3]+0x00000020u); // 801CFADC
  goto L_801CFB10; // 801CFAE0
L_801CFAE4:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801CFAE4
  cmps(c,0,(int32_t)c->r[0],0); // 801CFAE8
  if (!crb(c,2)) { goto L_801CFB0C; } // 801CFAEC
  c->r[3]=R32(c->r[31]+0x00000008u); // 801CFAF0
  c->r[5]=c->r[28]|c->r[28]; // 801CFAF4
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 801CFAF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFAFC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CFB00
  c->ctr=c->r[12]; // 801CFB04
  if (true) { c->lr=0x801CFB0Cu; dispatch(c,c->ctr); } // 801CFB08
L_801CFB0C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CFB0C
L_801CFB10:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CFB10
  if (!crb(c,2)) { IRQCHK(c); goto L_801CFAE4; } // 801CFB14
  c->r[0]=R8(c->r[28]+0x000000BBu); // 801CFB18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CFB1C
  if (!crb(c,2)) { goto L_801CFB2C; } // 801CFB20
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801CFB24
  if (!crb(c,2)) { goto L_801CFB48; } // 801CFB28
L_801CFB2C:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 801CFB2C
  cmps(c,0,(int32_t)c->r[3],0); // 801CFB30
  if (crb(c,2)) { goto L_801CFB48; } // 801CFB34
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFB38
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CFB3C
  c->ctr=c->r[12]; // 801CFB40
  if (true) { c->lr=0x801CFB48u; dispatch(c,c->ctr); } // 801CFB44
L_801CFB48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFB48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFB4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFB50
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFB54
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CFB58
  c->lr=c->r[0]; // 801CFB5C
  c->r[1]=c->r[1]+0x00000020u; // 801CFB60
  return; // 801CFB64
}

// BindAnimation__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransformbb
void f_801CFB68(Ctx* __restrict c) {
  trace_call(0x801CFB68u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CFB68
  c->r[0]=c->r[3]|c->r[3]; // 801CFB6C
  c->r[3]=c->r[4]|c->r[4]; // 801CFB70
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CFB74
  c->r[4]=c->r[0]|c->r[0]; // 801CFB78
  c->ctr=c->r[12]; // 801CFB7C
  if (true) { dispatch(c,c->ctr); return; } // 801CFB80
}

// UnbindAnimation__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransformb
void f_801CFB84(Ctx* __restrict c) {
  trace_call(0x801CFB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB84
  c->r[0]=c->lr; // 801CFB88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFB8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFB90
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFB94
  c->r[30]=c->r[3]|c->r[3]; // 801CFB98
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFB9C
  c->r[29]=c->r[5]|c->r[5]; // 801CFBA0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CFBA4
  c->r[28]=c->r[4]|c->r[4]; // 801CFBA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFBAC
  c->r[12]=R32(c->r[12]+0x00000050u); // 801CFBB0
  c->ctr=c->r[12]; // 801CFBB4
  if (true) { c->lr=0x801CFBBCu; dispatch(c,c->ctr); } // 801CFBB8
  cmps(c,0,(int32_t)c->r[29],0); // 801CFBBC
  if (crb(c,2)) { goto L_801CFBF4; } // 801CFBC0
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 801CFBC4
  goto L_801CFBEC; // 801CFBC8
L_801CFBCC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 801CFBCC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 801CFBD0
  c->r[4]=c->r[28]|c->r[28]; // 801CFBD4
  c->r[5]=c->r[29]|c->r[29]; // 801CFBD8
  c->r[12]=R32(c->r[12]+0x00000048u); // 801CFBDC
  c->ctr=c->r[12]; // 801CFBE0
  if (true) { c->lr=0x801CFBE8u; dispatch(c,c->ctr); } // 801CFBE4
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CFBE8
L_801CFBEC:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CFBEC
  if (!crb(c,2)) { IRQCHK(c); goto L_801CFBCC; } // 801CFBF0
L_801CFBF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFBF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFBF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFBFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFC00
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CFC04
  c->lr=c->r[0]; // 801CFC08
  c->r[1]=c->r[1]+0x00000020u; // 801CFC0C
  return; // 801CFC10
}

// UnbindAllAnimation__Q34nw4r3lyt4PaneFb
void f_801CFC14(Ctx* __restrict c) {
  trace_call(0x801CFC14u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFC14
  c->r[5]=c->r[4]|c->r[4]; // 801CFC18
  c->r[4]=0u+0x00000000u; // 801CFC1C
  c->r[12]=R32(c->r[12]+0x00000048u); // 801CFC20
  c->ctr=c->r[12]; // 801CFC24
  if (true) { dispatch(c,c->ctr); return; } // 801CFC28
}

// UnbindAnimationSelf__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransform
void f_801CFC2C(Ctx* __restrict c) {
  trace_call(0x801CFC2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC2C
  c->r[0]=c->lr; // 801CFC30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFC34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFC38
  c->r[31]=c->r[4]|c->r[4]; // 801CFC3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFC40
  c->r[30]=c->r[3]|c->r[3]; // 801CFC44
  c->r[0]=R32(c->r[3]+0x00000028u); // 801CFC48
  cmps(c,0,(int32_t)c->r[0],0); // 801CFC4C
  if (crb(c,2)) { goto L_801CFC68; } // 801CFC50
  c->r[3]=c->r[0]|c->r[0]; // 801CFC54
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFC58
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CFC5C
  c->ctr=c->r[12]; // 801CFC60
  if (true) { c->lr=0x801CFC68u; dispatch(c,c->ctr); } // 801CFC64
L_801CFC68:;
  c->r[4]=c->r[31]|c->r[31]; // 801CFC68
  c->r[3]=c->r[30]+0x0000001Cu; // 801CFC6C
  c->lr=0x801CFC74u; f_801DA210(c); // 801CFC70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFC74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFC78
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFC7C
  c->lr=c->r[0]; // 801CFC80
  c->r[1]=c->r[1]+0x00000010u; // 801CFC84
  return; // 801CFC88
}

// AddAnimationLink__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimationLink
void f_801CFC8C(Ctx* __restrict c) {
  trace_call(0x801CFC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC8C
  c->r[0]=c->lr; // 801CFC90
  c->r[5]=c->r[4]|c->r[4]; // 801CFC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFC98
  c->r[0]=c->r[3]+0x00000020u; // 801CFC9C
  c->r[3]=c->r[3]+0x0000001Cu; // 801CFCA0
  c->r[4]=c->r[1]+0x00000008u; // 801CFCA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CFCA8
  c->lr=0x801CFCB0u; f_8017A764(c); // 801CFCAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFCB0
  c->lr=c->r[0]; // 801CFCB4
  c->r[1]=c->r[1]+0x00000010u; // 801CFCB8
  return; // 801CFCBC
}

// FindAnimationLinkSelf__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransform
void f_801CFCC0(Ctx* __restrict c) {
  trace_call(0x801CFCC0u);
  c->r[3]=c->r[3]+0x0000001Cu; // 801CFCC0
  f_801DA1A0(c); return; // 801CFCC4
}

// FindAnimationLinkSelf__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt12AnimResource
void f_801CFCC8(Ctx* __restrict c) {
  trace_call(0x801CFCC8u);
  c->r[3]=c->r[3]+0x0000001Cu; // 801CFCC8
  f_801DA1D4(c); return; // 801CFCCC
}

// SetAnimationEnable__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimTransformbb
void f_801CFCD0(Ctx* __restrict c) {
  trace_call(0x801CFCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFCD0
  c->r[0]=c->lr; // 801CFCD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFCD8
  c->r[11]=c->r[1]+0x00000020u; // 801CFCDC
  c->lr=0x801CFCE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFCE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFCE4
  c->r[26]=c->r[3]|c->r[3]; // 801CFCE8
  c->r[27]=c->r[4]|c->r[4]; // 801CFCEC
  c->r[28]=c->r[5]|c->r[5]; // 801CFCF0
  c->r[12]=R32(c->r[12]+0x00000054u); // 801CFCF4
  c->r[29]=c->r[6]|c->r[6]; // 801CFCF8
  c->ctr=c->r[12]; // 801CFCFC
  if (true) { c->lr=0x801CFD04u; dispatch(c,c->ctr); } // 801CFD00
  cmps(c,0,(int32_t)c->r[3],0); // 801CFD04
  if (crb(c,2)) { goto L_801CFD18; } // 801CFD08
  c->r[0]=cntlz(c->r[28]); // 801CFD0C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CFD10
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801CFD14
L_801CFD18:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CFD18
  c->r[3]=c->r[26]|c->r[26]; // 801CFD1C
  c->r[12]=R32(c->r[12]+0x00000064u); // 801CFD20
  c->ctr=c->r[12]; // 801CFD24
  if (true) { c->lr=0x801CFD2Cu; dispatch(c,c->ctr); } // 801CFD28
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 801CFD2C
  c->r[31]=0u+0x00000000u; // 801CFD30
  goto L_801CFD6C; // 801CFD34
L_801CFD38:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CFD38
  c->r[3]=c->r[26]|c->r[26]; // 801CFD3C
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801CFD40
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801CFD44
  c->ctr=c->r[12]; // 801CFD48
  if (true) { c->lr=0x801CFD50u; dispatch(c,c->ctr); } // 801CFD4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFD50
  c->r[4]=c->r[27]|c->r[27]; // 801CFD54
  c->r[5]=c->r[28]|c->r[28]; // 801CFD58
  c->r[12]=R32(c->r[12]+0x00000028u); // 801CFD5C
  c->ctr=c->r[12]; // 801CFD60
  if (true) { c->lr=0x801CFD68u; dispatch(c,c->ctr); } // 801CFD64
  c->r[31]=c->r[31]+0x00000001u; // 801CFD68
L_801CFD6C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801CFD6C
  cmpu(c,0,c->r[0],c->r[30]); // 801CFD70
  if (crb(c,0)) { IRQCHK(c); goto L_801CFD38; } // 801CFD74
  cmps(c,0,(int32_t)c->r[29],0); // 801CFD78
  if (crb(c,2)) { goto L_801CFDB8; } // 801CFD7C
  c->r[31]=R32(c->r[26]+0x00000014u); // 801CFD80
  c->r[30]=c->r[26]+0x00000014u; // 801CFD84
  goto L_801CFDB0; // 801CFD88
L_801CFD8C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 801CFD8C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 801CFD90
  c->r[4]=c->r[27]|c->r[27]; // 801CFD94
  c->r[5]=c->r[28]|c->r[28]; // 801CFD98
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801CFD9C
  c->r[6]=c->r[29]|c->r[29]; // 801CFDA0
  c->ctr=c->r[12]; // 801CFDA4
  if (true) { c->lr=0x801CFDACu; dispatch(c,c->ctr); } // 801CFDA8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CFDAC
L_801CFDB0:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CFDB0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CFD8C; } // 801CFDB4
L_801CFDB8:;
  c->r[11]=c->r[1]+0x00000020u; // 801CFDB8
  c->lr=0x801CFDC0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFDBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFDC0
  c->lr=c->r[0]; // 801CFDC4
  c->r[1]=c->r[1]+0x00000020u; // 801CFDC8
  return; // 801CFDCC
}

// SetAnimationEnable__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt12AnimResourcebb
void f_801CFDD0(Ctx* __restrict c) {
  trace_call(0x801CFDD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFDD0
  c->r[0]=c->lr; // 801CFDD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFDD8
  c->r[11]=c->r[1]+0x00000020u; // 801CFDDC
  c->lr=0x801CFDE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFDE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFDE4
  c->r[26]=c->r[3]|c->r[3]; // 801CFDE8
  c->r[27]=c->r[4]|c->r[4]; // 801CFDEC
  c->r[28]=c->r[5]|c->r[5]; // 801CFDF0
  c->r[12]=R32(c->r[12]+0x00000058u); // 801CFDF4
  c->r[29]=c->r[6]|c->r[6]; // 801CFDF8
  c->ctr=c->r[12]; // 801CFDFC
  if (true) { c->lr=0x801CFE04u; dispatch(c,c->ctr); } // 801CFE00
  cmps(c,0,(int32_t)c->r[3],0); // 801CFE04
  if (crb(c,2)) { goto L_801CFE18; } // 801CFE08
  c->r[0]=cntlz(c->r[28]); // 801CFE0C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CFE10
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801CFE14
L_801CFE18:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CFE18
  c->r[3]=c->r[26]|c->r[26]; // 801CFE1C
  c->r[12]=R32(c->r[12]+0x00000064u); // 801CFE20
  c->ctr=c->r[12]; // 801CFE24
  if (true) { c->lr=0x801CFE2Cu; dispatch(c,c->ctr); } // 801CFE28
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; // 801CFE2C
  c->r[31]=0u+0x00000000u; // 801CFE30
  goto L_801CFE6C; // 801CFE34
L_801CFE38:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CFE38
  c->r[3]=c->r[26]|c->r[26]; // 801CFE3C
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801CFE40
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801CFE44
  c->ctr=c->r[12]; // 801CFE48
  if (true) { c->lr=0x801CFE50u; dispatch(c,c->ctr); } // 801CFE4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFE50
  c->r[4]=c->r[27]|c->r[27]; // 801CFE54
  c->r[5]=c->r[28]|c->r[28]; // 801CFE58
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801CFE5C
  c->ctr=c->r[12]; // 801CFE60
  if (true) { c->lr=0x801CFE68u; dispatch(c,c->ctr); } // 801CFE64
  c->r[31]=c->r[31]+0x00000001u; // 801CFE68
L_801CFE6C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801CFE6C
  cmpu(c,0,c->r[0],c->r[30]); // 801CFE70
  if (crb(c,0)) { IRQCHK(c); goto L_801CFE38; } // 801CFE74
  cmps(c,0,(int32_t)c->r[29],0); // 801CFE78
  if (crb(c,2)) { goto L_801CFEB8; } // 801CFE7C
  c->r[31]=R32(c->r[26]+0x00000014u); // 801CFE80
  c->r[30]=c->r[26]+0x00000014u; // 801CFE84
  goto L_801CFEB0; // 801CFE88
L_801CFE8C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 801CFE8C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 801CFE90
  c->r[4]=c->r[27]|c->r[27]; // 801CFE94
  c->r[5]=c->r[28]|c->r[28]; // 801CFE98
  c->r[12]=R32(c->r[12]+0x00000060u); // 801CFE9C
  c->r[6]=c->r[29]|c->r[29]; // 801CFEA0
  c->ctr=c->r[12]; // 801CFEA4
  if (true) { c->lr=0x801CFEACu; dispatch(c,c->ctr); } // 801CFEA8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CFEAC
L_801CFEB0:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CFEB0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CFE8C; } // 801CFEB4
L_801CFEB8:;
  c->r[11]=c->r[1]+0x00000020u; // 801CFEB8
  c->lr=0x801CFEC0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFEBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFEC0
  c->lr=c->r[0]; // 801CFEC4
  c->r[1]=c->r[1]+0x00000020u; // 801CFEC8
  return; // 801CFECC
}

// LoadMtx__Q34nw4r3lyt4PaneFRCQ34nw4r3lyt8DrawInfo
void f_801CFED0(Ctx* __restrict c) {
  trace_call(0x801CFED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFED0
  c->r[0]=c->lr; // 801CFED4
  c->r[5]=c->r[3]|c->r[3]; // 801CFED8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CFEDC
  c->r[0]=R8(c->r[4]+0x00000050u); // 801CFEE0
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801CFEE4
  if (crb(c,2)) { goto L_801CFF04; } // 801CFEE8
  c->r[3]=c->r[4]+0x00000004u; // 801CFEEC
  c->r[4]=c->r[5]+0x00000084u; // 801CFEF0
  c->r[5]=c->r[1]+0x00000008u; // 801CFEF4
  c->lr=0x801CFEFCu; f_800EC0F4(c); // 801CFEF8
  c->r[3]=c->r[1]+0x00000008u; // 801CFEFC
  goto L_801CFF08; // 801CFF00
L_801CFF04:;
  c->r[3]=c->r[3]+0x00000084u; // 801CFF04
L_801CFF08:;
  c->r[4]=0u+0x00000000u; // 801CFF08
  c->lr=0x801CFF10u; f_80108934(c); // 801CFF0C
  c->r[3]=0u+0x00000000u; // 801CFF10
  c->lr=0x801CFF18u; f_80108A3C(c); // 801CFF14
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CFF18
  c->lr=c->r[0]; // 801CFF1C
  c->r[1]=c->r[1]+0x00000040u; // 801CFF20
  return; // 801CFF24
}

// GetVtxPos__Q34nw4r3lyt4PaneCFv
void f_801CFF28(Ctx* __restrict c) {
  trace_call(0x801CFF28u);
  c->r[4]=0u+0x55550000u; // 801CFF28
  c->r[5]=R8(c->r[3]+0x000000BAu); // 801CFF2C
  c->r[0]=c->r[4]+0x00005556u; // 801CFF30
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFF34
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801CFF38
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFF3C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801CFF40
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CFF44
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801CFF48
  c->r[0]=c->r[4]+c->r[0]; // 801CFF4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801CFF50
  c->r[0]=c->r[5]-c->r[0]; // 801CFF54
  cmps(c,0,(int32_t)c->r[0],1); // 801CFF58
  if (crb(c,2)) { goto L_801CFF80; } // 801CFF5C
  if (!crb(c,0)) { goto L_801CFF68; } // 801CFF60
  goto L_801CFF74; // 801CFF64
L_801CFF68:;
  cmps(c,0,(int32_t)c->r[0],3); // 801CFF68
  if (!crb(c,0)) { goto L_801CFF74; } // 801CFF6C
  goto L_801CFF98; // 801CFF70
L_801CFF74:;
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFF74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801CFF78
  goto L_801CFFA4; // 801CFF7C
L_801CFF80:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFF80
  {uint32_t ea=c->r[2]+0xFFFF9D30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFF84
  c->f[1]=-c->f[1]; // 801CFF88
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801CFF8C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801CFF90
  goto L_801CFFA4; // 801CFF94
L_801CFF98:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFF98
  c->f[0]=-c->f[0]; // 801CFF9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801CFFA0
L_801CFFA4:;
  c->r[4]=0u+0x55550000u; // 801CFFA4
  c->r[0]=c->r[4]+0x00005556u; // 801CFFA8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801CFFAC
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801CFFB0
  c->r[0]=c->r[4]+c->r[0]; // 801CFFB4
  cmps(c,0,(int32_t)c->r[0],1); // 801CFFB8
  if (crb(c,2)) { goto L_801CFFE0; } // 801CFFBC
  if (!crb(c,0)) { goto L_801CFFC8; } // 801CFFC0
  goto L_801CFFD4; // 801CFFC4
L_801CFFC8:;
  cmps(c,0,(int32_t)c->r[0],3); // 801CFFC8
  if (!crb(c,0)) { goto L_801CFFD4; } // 801CFFCC
  goto L_801CFFF4; // 801CFFD0
L_801CFFD4:;
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFFD4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CFFD8
  goto L_801CFFFC; // 801CFFDC
L_801CFFE0:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFFE0
  {uint32_t ea=c->r[2]+0xFFFF9D30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFFE4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801CFFE8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CFFEC
  goto L_801CFFFC; // 801CFFF0
L_801CFFF4:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFFF4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CFFF8
L_801CFFFC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801CFFFC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801D0000
  c->r[1]=c->r[1]+0x00000010u; // 801D0004
  return; // 801D0008
}

// GetMaterialNum__Q34nw4r3lyt4PaneCFv
void f_801D000C(Ctx* __restrict c) {
  trace_call(0x801D000Cu);
  c->r[3]=R32(c->r[3]+0x00000028u); // 801D000C
  c->r[0]=0u-c->r[3]; // 801D0010
  c->r[0]=c->r[0]|c->r[3]; // 801D0014
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D0018
  return; // 801D001C
}

// GetMaterial__Q34nw4r3lyt4PaneCFv
void f_801D0020(Ctx* __restrict c) {
  trace_call(0x801D0020u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 801D0020
  return; // 801D0024
}

// GetMaterial__Q34nw4r3lyt4PaneCFUl
void f_801D0028(Ctx* __restrict c) {
  trace_call(0x801D0028u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D0028
  if (!crb(c,2)) { goto L_801D0040; } // 801D002C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0030
  c->r[12]=R32(c->r[12]+0x00000068u); // 801D0034
  c->ctr=c->r[12]; // 801D0038
  if (true) { dispatch(c,c->ctr); return; } // 801D003C
L_801D0040:;
  c->r[3]=0u+0x00000000u; // 801D0040
  return; // 801D0044
}

// fn_801D0048
void f_801D0048(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801D0048
  W32(c->r[13]+0xFFFF9D70u,c->r[0]); // 801D004C
  return; // 801D0050
}

// __ct__Q34nw4r3lyt5GroupFPCQ44nw4r3lyt3res5GroupPQ34nw4r3lyt4Pane
void f_801D0054(Ctx* __restrict c) {
  trace_call(0x801D0054u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0054
  c->r[0]=c->lr; // 801D0058
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D005C
  c->r[11]=c->r[1]+0x00000030u; // 801D0060
  c->lr=0x801D0068u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0064
  c->r[30]=0u+0x00000000u; // 801D0068
  c->r[6]=0u+0x802A0000u; // 801D006C
  W32(c->r[3]+0x00000010u,c->r[30]); // 801D0070
  c->r[7]=c->r[3]+0x00000010u; // 801D0074
  c->r[6]=c->r[6]+0x00001820u; // 801D0078
  c->r[25]=c->r[4]|c->r[4]; // 801D007C
  W32(c->r[3]+0x00000014u,c->r[30]); // 801D0080
  c->r[26]=c->r[5]|c->r[5]; // 801D0084
  c->r[24]=c->r[3]|c->r[3]; // 801D0088
  c->r[5]=0u+0x00000010u; // 801D008C
  W32(c->r[3]+0x00000000u,c->r[6]); // 801D0090
  c->r[4]=c->r[4]+0x00000008u; // 801D0094
  W32(c->r[3]+0x00000004u,c->r[30]); // 801D0098
  W32(c->r[3]+0x00000008u,c->r[30]); // 801D009C
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 801D00A0
  W32(c->r[3]+0x00000010u,c->r[7]); // 801D00A4
  W32(c->r[3]+0x00000014u,c->r[7]); // 801D00A8
  W8(c->r[3]+0x00000029u,c->r[30]); // 801D00AC
  c->r[3]=c->r[3]+0x00000018u; // 801D00B0
  c->lr=0x801D00B8u; f_801141CC(c); // 801D00B4
  W8(c->r[24]+0x00000028u,c->r[30]); // 801D00B8
  c->r[28]=c->r[25]+0x0000001Cu; // 801D00BC
  c->r[27]=0u+0x00000000u; // 801D00C0
  c->r[29]=0u+0x00000000u; // 801D00C4
  goto L_801D0148; // 801D00C8
L_801D00CC:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801D00CC
  c->r[3]=c->r[26]|c->r[26]; // 801D00D0
  c->r[4]=c->r[28]+c->r[29]; // 801D00D4
  c->r[5]=0u+0x00000001u; // 801D00D8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D00DC
  c->ctr=c->r[12]; // 801D00E0
  if (true) { c->lr=0x801D00E8u; dispatch(c,c->ctr); } // 801D00E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D00E8
  c->r[31]=c->r[3]|c->r[3]; // 801D00EC
  if (crb(c,2)) { goto L_801D0140; } // 801D00F0
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D00F4
  c->r[4]=0u+0x0000000Cu; // 801D00F8
  c->lr=0x801D0100u; f_80128068(c); // 801D00FC
  cmps(c,0,(int32_t)c->r[3],0); // 801D0100
  if (crb(c,2)) { goto L_801D011C; } // 801D0104
  c->r[5]=c->r[3]|c->r[3]; // 801D0108
  if (crb(c,2)) { goto L_801D0120; } // 801D010C
  W32(c->r[3]+0x00000000u,c->r[30]); // 801D0110
  W32(c->r[3]+0x00000004u,c->r[30]); // 801D0114
  goto L_801D0120; // 801D0118
L_801D011C:;
  c->r[5]=0u+0x00000000u; // 801D011C
L_801D0120:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D0120
  if (crb(c,2)) { goto L_801D0140; } // 801D0124
  W32(c->r[5]+0x00000008u,c->r[31]); // 801D0128
  c->r[0]=c->r[24]+0x00000010u; // 801D012C
  c->r[3]=c->r[24]+0x0000000Cu; // 801D0130
  c->r[4]=c->r[1]+0x00000008u; // 801D0134
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D0138
  c->lr=0x801D0140u; f_8017A764(c); // 801D013C
L_801D0140:;
  c->r[29]=c->r[29]+0x00000010u; // 801D0140
  c->r[27]=c->r[27]+0x00000001u; // 801D0144
L_801D0148:;
  c->r[0]=R16(c->r[25]+0x00000018u); // 801D0148
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D014C
  if (crb(c,0)) { IRQCHK(c); goto L_801D00CC; } // 801D0150
  c->r[11]=c->r[1]+0x00000030u; // 801D0154
  c->r[3]=c->r[24]|c->r[24]; // 801D0158
  c->lr=0x801D0160u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D015C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0160
  c->lr=c->r[0]; // 801D0164
  c->r[1]=c->r[1]+0x00000030u; // 801D0168
  return; // 801D016C
}

// __dt__Q34nw4r3lyt5GroupFv
void f_801D0170(Ctx* __restrict c) {
  trace_call(0x801D0170u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0170
  c->r[0]=c->lr; // 801D0174
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0178
  c->r[11]=c->r[1]+0x00000030u; // 801D017C
  c->lr=0x801D0184u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0180
  cmps(c,0,(int32_t)c->r[3],0); // 801D0184
  c->r[27]=c->r[3]|c->r[3]; // 801D0188
  c->r[28]=c->r[4]|c->r[4]; // 801D018C
  if (crb(c,2)) { goto L_801D0200; } // 801D0190
  c->r[4]=0u+0x802A0000u; // 801D0194
  c->r[31]=R32(c->r[3]+0x00000010u); // 801D0198
  c->r[4]=c->r[4]+0x00001820u; // 801D019C
  c->r[30]=c->r[3]+0x00000010u; // 801D01A0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D01A4
  goto L_801D01D8; // 801D01A8
L_801D01AC:;
  c->r[29]=c->r[31]|c->r[31]; // 801D01AC
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D01B0
  c->r[3]=c->r[27]+0x0000000Cu; // 801D01B4
  c->r[4]=c->r[1]+0x00000008u; // 801D01B8
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D01BC
  c->lr=0x801D01C4u; f_8017A6D8(c); // 801D01C0
  cmps(c,0,(int32_t)c->r[29],0); // 801D01C4
  if (crb(c,2)) { goto L_801D01D8; } // 801D01C8
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D01CC
  c->r[4]=c->r[29]|c->r[29]; // 801D01D0
  c->lr=0x801D01D8u; f_80128078(c); // 801D01D4
L_801D01D8:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D01D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D01AC; } // 801D01DC
  c->r[3]=addc(c,c->r[27],0x0000000Cu,0); cr0(c,c->r[3]); // 801D01E0
  if (crb(c,2)) { goto L_801D01F0; } // 801D01E4
  c->r[4]=0u+0x00000000u; // 801D01E8
  c->lr=0x801D01F0u; f_8017A654(c); // 801D01EC
L_801D01F0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D01F0
  if (!crb(c,1)) { goto L_801D0200; } // 801D01F4
  c->r[3]=c->r[27]|c->r[27]; // 801D01F8
  c->lr=0x801D0200u; f_8009230C(c); // 801D01FC
L_801D0200:;
  c->r[11]=c->r[1]+0x00000030u; // 801D0200
  c->r[3]=c->r[27]|c->r[27]; // 801D0204
  c->lr=0x801D020Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0208
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D020C
  c->lr=c->r[0]; // 801D0210
  c->r[1]=c->r[1]+0x00000030u; // 801D0214
  return; // 801D0218
}

// __dt__Q34nw4r3lyt14GroupContainerFv
void f_801D021C(Ctx* __restrict c) {
  trace_call(0x801D021Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D021C
  c->r[0]=c->lr; // 801D0220
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0224
  c->r[11]=c->r[1]+0x00000030u; // 801D0228
  c->lr=0x801D0230u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D022C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0230
  c->r[27]=c->r[3]|c->r[3]; // 801D0234
  c->r[28]=c->r[4]|c->r[4]; // 801D0238
  if (crb(c,2)) { goto L_801D02C8; } // 801D023C
  c->r[31]=R32(c->r[3]+0x00000004u); // 801D0240
  c->r[30]=c->r[3]+0x00000004u; // 801D0244
  goto L_801D029C; // 801D0248
L_801D024C:;
  c->r[29]=c->r[31]|c->r[31]; // 801D024C
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D0250
  c->r[3]=c->r[27]|c->r[27]; // 801D0254
  c->r[4]=c->r[1]+0x00000008u; // 801D0258
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D025C
  c->lr=0x801D0264u; f_8017A6D8(c); // 801D0260
  c->r[0]=R8(c->r[29]+0x00000025u); // 801D0264
  cmps(c,0,(int32_t)c->r[0],0); // 801D0268
  if (!crb(c,2)) { goto L_801D029C; } // 801D026C
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801D0270
  if (crb(c,2)) { goto L_801D029C; } // 801D0274
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D0278
  c->r[3]=c->r[29]|c->r[29]; // 801D027C
  c->r[4]=0u+0xFFFFFFFFu; // 801D0280
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D0284
  c->ctr=c->r[12]; // 801D0288
  if (true) { c->lr=0x801D0290u; dispatch(c,c->ctr); } // 801D028C
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D0290
  c->r[4]=c->r[29]|c->r[29]; // 801D0294
  c->lr=0x801D029Cu; f_80128078(c); // 801D0298
L_801D029C:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D029C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D024C; } // 801D02A0
  cmps(c,0,(int32_t)c->r[27],0); // 801D02A4
  if (crb(c,2)) { goto L_801D02B8; } // 801D02A8
  c->r[3]=c->r[27]|c->r[27]; // 801D02AC
  c->r[4]=0u+0x00000000u; // 801D02B0
  c->lr=0x801D02B8u; f_8017A654(c); // 801D02B4
L_801D02B8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D02B8
  if (!crb(c,1)) { goto L_801D02C8; } // 801D02BC
  c->r[3]=c->r[27]|c->r[27]; // 801D02C0
  c->lr=0x801D02C8u; f_8009230C(c); // 801D02C4
L_801D02C8:;
  c->r[11]=c->r[1]+0x00000030u; // 801D02C8
  c->r[3]=c->r[27]|c->r[27]; // 801D02CC
  c->lr=0x801D02D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D02D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D02D4
  c->lr=c->r[0]; // 801D02D8
  c->r[1]=c->r[1]+0x00000030u; // 801D02DC
  return; // 801D02E0
}

// AppendGroup__Q34nw4r3lyt14GroupContainerFPQ34nw4r3lyt5Group
void f_801D02E4(Ctx* __restrict c) {
  trace_call(0x801D02E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D02E4
  c->r[0]=c->lr; // 801D02E8
  c->r[5]=c->r[4]|c->r[4]; // 801D02EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D02F0
  c->r[0]=c->r[3]+0x00000004u; // 801D02F4
  c->r[4]=c->r[1]+0x00000008u; // 801D02F8
  c->r[5]=c->r[5]+0x00000004u; // 801D02FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D0300
  c->lr=0x801D0308u; f_8017A764(c); // 801D0304
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0308
  c->lr=c->r[0]; // 801D030C
  c->r[1]=c->r[1]+0x00000010u; // 801D0310
  return; // 801D0314
}

// FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc
void f_801D0318(Ctx* __restrict c) {
  trace_call(0x801D0318u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0318
  c->r[0]=c->lr; // 801D031C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0320
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0324
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0328
  c->r[30]=c->r[3]+0x00000004u; // 801D032C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0330
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D0334
  c->r[28]=c->r[4]|c->r[4]; // 801D0338
  c->r[31]=R32(c->r[3]+0x00000004u); // 801D033C
  goto L_801D0368; // 801D0340
L_801D0344:;
  c->r[29]=c->r[31]+0xFFFFFFFCu; // 801D0344
  c->r[4]=c->r[28]|c->r[28]; // 801D0348
  c->r[3]=c->r[29]+0x00000018u; // 801D034C
  c->lr=0x801D0354u; f_801DA810(c); // 801D0350
  cmps(c,0,(int32_t)c->r[3],0); // 801D0354
  if (crb(c,2)) { goto L_801D0364; } // 801D0358
  c->r[3]=c->r[29]|c->r[29]; // 801D035C
  goto L_801D0374; // 801D0360
L_801D0364:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D0364
L_801D0368:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D0368
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0344; } // 801D036C
  c->r[3]=0u+0x00000000u; // 801D0370
L_801D0374:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0374
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0378
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D037C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0380
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D0384
  c->lr=c->r[0]; // 801D0388
  c->r[1]=c->r[1]+0x00000020u; // 801D038C
  return; // 801D0390
}

// SetTagProcessorImpl__Q34nw4r3lyt24@unnamed@lyt_layout_cpp@FPQ34nw4r3lyt4PanePQ34nw4r2ut19TagProcessorBase<w>
void f_801D0394(Ctx* __restrict c) {
  trace_call(0x801D0394u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0394
  c->r[0]=c->lr; // 801D0398
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D039C
  c->r[11]=c->r[1]+0x00000030u; // 801D03A0
  c->lr=0x801D03A8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D03A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D03A8
  c->r[23]=c->r[3]|c->r[3]; // 801D03AC
  c->r[31]=c->r[4]|c->r[4]; // 801D03B0
  c->r[25]=c->r[13]+0xFFFF9D88u; // 801D03B4
  if (crb(c,2)) { goto L_801D0400; } // 801D03B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D03BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D03C0
  c->ctr=c->r[12]; // 801D03C4
  if (true) { c->lr=0x801D03CCu; dispatch(c,c->ctr); } // 801D03C8
  goto L_801D03E4; // 801D03CC
L_801D03D0:;
  cmpu(c,0,c->r[3],c->r[25]); // 801D03D0
  if (!crb(c,2)) { goto L_801D03E0; } // 801D03D4
  c->r[0]=0u+0x00000001u; // 801D03D8
  goto L_801D03F0; // 801D03DC
L_801D03E0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D03E0
L_801D03E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D03E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D03D0; } // 801D03E8
  c->r[0]=0u+0x00000000u; // 801D03EC
L_801D03F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D03F0
  if (crb(c,2)) { goto L_801D0400; } // 801D03F4
  c->r[3]=c->r[23]|c->r[23]; // 801D03F8
  goto L_801D0404; // 801D03FC
L_801D0400:;
  c->r[3]=0u+0x00000000u; // 801D0400
L_801D0404:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0404
  if (crb(c,2)) { goto L_801D0410; } // 801D0408
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801D040C
L_801D0410:;
  c->r[30]=R32(c->r[23]+0x00000014u); // 801D0410
  c->r[27]=c->r[23]+0x00000014u; // 801D0414
  c->r[23]=c->r[13]+0xFFFF9D88u; // 801D0418
  c->r[24]=c->r[13]+0xFFFF9D88u; // 801D041C
  goto L_801D0520; // 801D0420
L_801D0424:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 801D0424
  if (crb(c,2)) { goto L_801D0474; } // 801D0428
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D042C
  c->r[3]=c->r[25]|c->r[25]; // 801D0430
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D0434
  c->ctr=c->r[12]; // 801D0438
  if (true) { c->lr=0x801D0440u; dispatch(c,c->ctr); } // 801D043C
  goto L_801D0458; // 801D0440
L_801D0444:;
  cmpu(c,0,c->r[3],c->r[24]); // 801D0444
  if (!crb(c,2)) { goto L_801D0454; } // 801D0448
  c->r[0]=0u+0x00000001u; // 801D044C
  goto L_801D0464; // 801D0450
L_801D0454:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D0454
L_801D0458:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0458
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0444; } // 801D045C
  c->r[0]=0u+0x00000000u; // 801D0460
L_801D0464:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D0464
  if (crb(c,2)) { goto L_801D0474; } // 801D0468
  c->r[3]=c->r[25]|c->r[25]; // 801D046C
  goto L_801D0478; // 801D0470
L_801D0474:;
  c->r[3]=0u+0x00000000u; // 801D0474
L_801D0478:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0478
  if (crb(c,2)) { goto L_801D0484; } // 801D047C
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801D0480
L_801D0484:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 801D0484
  c->r[26]=c->r[25]+0x00000014u; // 801D0488
  goto L_801D0514; // 801D048C
L_801D0490:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 801D0490
  if (crb(c,2)) { goto L_801D04E0; } // 801D0494
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D0498
  c->r[3]=c->r[25]|c->r[25]; // 801D049C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D04A0
  c->ctr=c->r[12]; // 801D04A4
  if (true) { c->lr=0x801D04ACu; dispatch(c,c->ctr); } // 801D04A8
  goto L_801D04C4; // 801D04AC
L_801D04B0:;
  cmpu(c,0,c->r[3],c->r[23]); // 801D04B0
  if (!crb(c,2)) { goto L_801D04C0; } // 801D04B4
  c->r[0]=0u+0x00000001u; // 801D04B8
  goto L_801D04D0; // 801D04BC
L_801D04C0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D04C0
L_801D04C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D04C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D04B0; } // 801D04C8
  c->r[0]=0u+0x00000000u; // 801D04CC
L_801D04D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D04D0
  if (crb(c,2)) { goto L_801D04E0; } // 801D04D4
  c->r[3]=c->r[25]|c->r[25]; // 801D04D8
  goto L_801D04E4; // 801D04DC
L_801D04E0:;
  c->r[3]=0u+0x00000000u; // 801D04E0
L_801D04E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D04E4
  if (crb(c,2)) { goto L_801D04F0; } // 801D04E8
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801D04EC
L_801D04F0:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 801D04F0
  goto L_801D0508; // 801D04F4
L_801D04F8:;
  c->r[4]=c->r[31]|c->r[31]; // 801D04F8
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 801D04FC
  c->lr=0x801D0504u; f_801D0394(c); // 801D0500
  c->r[28]=R32(c->r[28]+0x00000000u); // 801D0504
L_801D0508:;
  cmpu(c,0,c->r[28],c->r[25]); // 801D0508
  if (!crb(c,2)) { IRQCHK(c); goto L_801D04F8; } // 801D050C
  c->r[29]=R32(c->r[29]+0x00000000u); // 801D0510
L_801D0514:;
  cmpu(c,0,c->r[29],c->r[26]); // 801D0514
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0490; } // 801D0518
  c->r[30]=R32(c->r[30]+0x00000000u); // 801D051C
L_801D0520:;
  cmpu(c,0,c->r[30],c->r[27]); // 801D0520
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0424; } // 801D0524
  c->r[11]=c->r[1]+0x00000030u; // 801D0528
  c->lr=0x801D0530u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D052C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0530
  c->lr=c->r[0]; // 801D0534
  c->r[1]=c->r[1]+0x00000030u; // 801D0538
  return; // 801D053C
}

// IsIncludeAnimationGroupRef__Q34nw4r3lyt24@unnamed@lyt_layout_cpp@FPQ34nw4r3lyt14GroupContainerPCQ34nw4r3lyt17AnimationGroupRefUsbPQ34nw4r3lyt4Pane
void f_801D0540(Ctx* __restrict c) {
  trace_call(0x801D0540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0540
  c->r[0]=c->lr; // 801D0544
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0548
  c->r[11]=c->r[1]+0x00000020u; // 801D054C
  c->lr=0x801D0554u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0550
  c->r[26]=c->r[3]|c->r[3]; // 801D0554
  c->r[27]=c->r[4]|c->r[4]; // 801D0558
  c->r[28]=c->r[5]|c->r[5]; // 801D055C
  c->r[29]=c->r[6]|c->r[6]; // 801D0560
  c->r[30]=c->r[7]|c->r[7]; // 801D0564
  c->r[31]=0u+0x00000000u; // 801D0568
  goto L_801D05E0; // 801D056C
L_801D0570:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 801D0570
  c->r[3]=c->r[26]|c->r[26]; // 801D0574
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D0578
  c->r[4]=c->r[27]+c->r[0]; // 801D057C
  c->lr=0x801D0584u; f_801D0318(c); // 801D0580
  c->r[4]=R32(c->r[3]+0x00000010u); // 801D0584
  c->r[0]=c->r[3]+0x00000010u; // 801D0588
  goto L_801D05D4; // 801D058C
L_801D0590:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 801D0590
  cmpu(c,0,c->r[3],c->r[30]); // 801D0594
  if (!crb(c,2)) { goto L_801D05A4; } // 801D0598
  c->r[3]=0u+0x00000001u; // 801D059C
  goto L_801D05F0; // 801D05A0
L_801D05A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D05A4
  if (crb(c,2)) { goto L_801D05D0; } // 801D05A8
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801D05AC
  goto L_801D05C8; // 801D05B0
L_801D05B4:;
  cmpu(c,0,c->r[3],c->r[5]); // 801D05B4
  if (!crb(c,2)) { goto L_801D05C4; } // 801D05B8
  c->r[3]=0u+0x00000001u; // 801D05BC
  goto L_801D05F0; // 801D05C0
L_801D05C4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801D05C4
L_801D05C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D05C8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D05B4; } // 801D05CC
L_801D05D0:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801D05D0
L_801D05D4:;
  cmpu(c,0,c->r[4],c->r[0]); // 801D05D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0590; } // 801D05D8
  c->r[31]=c->r[31]+0x00000001u; // 801D05DC
L_801D05E0:;
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 801D05E0
  cmpu(c,0,c->r[0],c->r[28]); // 801D05E4
  if (crb(c,0)) { IRQCHK(c); goto L_801D0570; } // 801D05E8
  c->r[3]=0u+0x00000000u; // 801D05EC
L_801D05F0:;
  c->r[11]=c->r[1]+0x00000020u; // 801D05F0
  c->lr=0x801D05F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D05F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D05F8
  c->lr=c->r[0]; // 801D05FC
  c->r[1]=c->r[1]+0x00000020u; // 801D0600
  return; // 801D0604
}

// __ct__Q34nw4r3lyt6LayoutFv
void f_801D0608(Ctx* __restrict c) {
  trace_call(0x801D0608u);
  c->r[0]=0u+0x00000000u; // 801D0608
  {uint32_t ea=c->r[2]+0xFFFF9D38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D060C
  c->r[4]=0u+0x802A0000u; // 801D0610
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D0614
  c->r[5]=c->r[3]+0x00000008u; // 801D0618
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D061C
  c->r[4]=c->r[4]+0x00001830u; // 801D0620
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D0624
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D0628
  W32(c->r[3]+0x00000008u,c->r[5]); // 801D062C
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801D0630
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D0634
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D0638
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801D063C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D0640
  return; // 801D0644
}

// __dt__Q34nw4r3lyt6LayoutFv
void f_801D0648(Ctx* __restrict c) {
  trace_call(0x801D0648u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0648
  c->r[0]=c->lr; // 801D064C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0650
  c->r[11]=c->r[1]+0x00000030u; // 801D0654
  c->lr=0x801D065Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0658
  cmps(c,0,(int32_t)c->r[3],0); // 801D065C
  c->r[27]=c->r[3]|c->r[3]; // 801D0660
  c->r[28]=c->r[4]|c->r[4]; // 801D0664
  if (crb(c,2)) { goto L_801D0754; } // 801D0668
  c->r[29]=R32(c->r[3]+0x00000014u); // 801D066C
  c->r[4]=0u+0x802A0000u; // 801D0670
  c->r[4]=c->r[4]+0x00001830u; // 801D0674
  cmps(c,0,(int32_t)c->r[29],0); // 801D0678
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D067C
  if (crb(c,2)) { goto L_801D069C; } // 801D0680
  c->r[3]=c->r[29]|c->r[29]; // 801D0684
  c->r[4]=0u+0xFFFFFFFFu; // 801D0688
  c->lr=0x801D0690u; f_801D021C(c); // 801D068C
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D0690
  c->r[4]=c->r[29]|c->r[29]; // 801D0694
  c->lr=0x801D069Cu; f_80128078(c); // 801D0698
L_801D069C:;
  c->r[29]=R32(c->r[27]+0x00000010u); // 801D069C
  cmps(c,1,(int32_t)c->r[29],0); // 801D06A0
  if (crb(c,6)) { goto L_801D06DC; } // 801D06A4
  c->r[0]=R8(c->r[29]+0x000000D6u); // 801D06A8
  cmps(c,0,(int32_t)c->r[0],0); // 801D06AC
  if (!crb(c,2)) { goto L_801D06DC; } // 801D06B0
  if (crb(c,6)) { goto L_801D06DC; } // 801D06B4
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D06B8
  c->r[3]=c->r[29]|c->r[29]; // 801D06BC
  c->r[4]=0u+0xFFFFFFFFu; // 801D06C0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D06C4
  c->ctr=c->r[12]; // 801D06C8
  if (true) { c->lr=0x801D06D0u; dispatch(c,c->ctr); } // 801D06CC
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D06D0
  c->r[4]=c->r[29]|c->r[29]; // 801D06D4
  c->lr=0x801D06DCu; f_80128078(c); // 801D06D8
L_801D06DC:;
  c->r[31]=R32(c->r[27]+0x00000008u); // 801D06DC
  c->r[30]=c->r[27]+0x00000008u; // 801D06E0
  goto L_801D072C; // 801D06E4
L_801D06E8:;
  c->r[29]=c->r[31]|c->r[31]; // 801D06E8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D06EC
  c->r[3]=c->r[27]+0x00000004u; // 801D06F0
  c->r[4]=c->r[1]+0x00000008u; // 801D06F4
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D06F8
  c->lr=0x801D0700u; f_8017A6D8(c); // 801D06FC
  c->r[29]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[29]); // 801D0700
  if (crb(c,2)) { goto L_801D072C; } // 801D0704
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D0708
  c->r[3]=c->r[29]|c->r[29]; // 801D070C
  c->r[4]=0u+0xFFFFFFFFu; // 801D0710
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D0714
  c->ctr=c->r[12]; // 801D0718
  if (true) { c->lr=0x801D0720u; dispatch(c,c->ctr); } // 801D071C
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D0720
  c->r[4]=c->r[29]|c->r[29]; // 801D0724
  c->lr=0x801D072Cu; f_80128078(c); // 801D0728
L_801D072C:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D072C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D06E8; } // 801D0730
  c->r[3]=addc(c,c->r[27],0x00000004u,0); cr0(c,c->r[3]); // 801D0734
  if (crb(c,2)) { goto L_801D0744; } // 801D0738
  c->r[4]=0u+0x00000000u; // 801D073C
  c->lr=0x801D0744u; f_8017A654(c); // 801D0740
L_801D0744:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D0744
  if (!crb(c,1)) { goto L_801D0754; } // 801D0748
  c->r[3]=c->r[27]|c->r[27]; // 801D074C
  c->lr=0x801D0754u; f_8009230C(c); // 801D0750
L_801D0754:;
  c->r[11]=c->r[1]+0x00000030u; // 801D0754
  c->r[3]=c->r[27]|c->r[27]; // 801D0758
  c->lr=0x801D0760u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D075C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0760
  c->lr=c->r[0]; // 801D0764
  c->r[1]=c->r[1]+0x00000030u; // 801D0768
  return; // 801D076C
}

// Build__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
void f_801D0770(Ctx* __restrict c) {
  trace_call(0x801D0770u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0770
  c->r[0]=c->lr; // 801D0774
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D0778
  c->r[11]=c->r[1]+0x00000060u; // 801D077C
  c->lr=0x801D0784u; f_80109F04(c); // 801D0780
  c->r[31]=c->r[4]|c->r[4]; // 801D0784
  c->r[4]=0u+0x524C0000u; // 801D0788
  c->r[30]=c->r[3]|c->r[3]; // 801D078C
  c->r[14]=c->r[5]|c->r[5]; // 801D0790
  c->r[4]=c->r[4]+0x00005954u; // 801D0794
  c->r[3]=c->r[31]|c->r[31]; // 801D0798
  c->lr=0x801D07A0u; f_801DA868(c); // 801D079C
  cmps(c,0,(int32_t)c->r[3],0); // 801D07A0
  if (!crb(c,2)) { goto L_801D07B0; } // 801D07A4
  c->r[3]=0u+0x00000000u; // 801D07A8
  goto L_801D0A98; // 801D07AC
L_801D07B0:;
  c->r[4]=R16(c->r[31]+0x00000006u); // 801D07B0
  c->r[3]=0u+0x00000000u; // 801D07B4
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; cr0(c,c->r[0]); // 801D07B8
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801D07BC
  if (!crb(c,2)) { goto L_801D07D8; } // 801D07C0
  cmpu(c,0,c->r[0],0x00000008u); // 801D07C4
  if (crb(c,0)) { goto L_801D07D8; } // 801D07C8
  cmpu(c,0,c->r[0],0x0000000Au); // 801D07CC
  if (crb(c,1)) { goto L_801D07D8; } // 801D07D0
  c->r[3]=0u+0x00000001u; // 801D07D4
L_801D07D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D07D8
  if (!crb(c,2)) { goto L_801D07E8; } // 801D07DC
  c->r[3]=0u+0x00000000u; // 801D07E0
  goto L_801D0A98; // 801D07E4
L_801D07E8:;
  c->r[22]=0u+0x00000000u; // 801D07E8
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 801D07EC
  c->r[28]=0u+0x70610000u; // 801D07F0
  W32(c->r[1]+0x00000014u,c->r[14]); // 801D07F4
  c->r[16]=c->r[31]+c->r[0]; // 801D07F8
  c->r[20]=0u+0x00000000u; // 801D07FC
  W32(c->r[1]+0x00000008u,c->r[22]); // 801D0800
  c->r[23]=c->r[28]+0x00006531u; // 801D0804
  c->r[19]=0u+0x00000000u; // 801D0808
  c->r[18]=0u+0x00000000u; // 801D080C
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 801D0810
  c->r[17]=0u+0x00000000u; // 801D0814
  c->r[15]=0u+0x00000000u; // 801D0818
  c->r[14]=0u+0x6D610000u; // 801D081C
  W32(c->r[1]+0x00000010u,c->r[22]); // 801D0820
  c->r[29]=0u+0x74780000u; // 801D0824
  c->r[25]=0u+0x626E0000u; // 801D0828
  c->r[26]=0u+0x6C790000u; // 801D082C
  c->r[27]=0u+0x67720000u; // 801D0830
  c->r[24]=0u+0x666E0000u; // 801D0834
  goto L_801D0A88; // 801D0838
L_801D083C:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 801D083C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 801D0840
  if (crb(c,2)) { goto L_801D09B8; } // 801D0844
  if (!crb(c,0)) { goto L_801D08BC; } // 801D0848
  c->r[0]=c->r[27]+0x00007031u; // 801D084C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0850
  if (crb(c,2)) { goto L_801D09C4; } // 801D0854
  if (!crb(c,0)) { goto L_801D088C; } // 801D0858
  c->r[0]=c->r[24]+0x00006C31u; // 801D085C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0860
  if (crb(c,2)) { goto L_801D0954; } // 801D0864
  if (!crb(c,0)) { goto L_801D087C; } // 801D0868
  c->r[0]=c->r[25]+0x00006431u; // 801D086C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0870
  if (crb(c,2)) { goto L_801D0964; } // 801D0874
  goto L_801D0A7C; // 801D0878
L_801D087C:;
  c->r[0]=c->r[27]+0x00006531u; // 801D087C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0880
  if (crb(c,2)) { goto L_801D0A78; } // 801D0884
  goto L_801D0A7C; // 801D0888
L_801D088C:;
  c->r[0]=c->r[26]+0x00007431u; // 801D088C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0890
  if (crb(c,2)) { goto L_801D0938; } // 801D0894
  if (!crb(c,0)) { goto L_801D08AC; } // 801D0898
  c->r[0]=c->r[27]+0x00007331u; // 801D089C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D08A0
  if (crb(c,2)) { goto L_801D0A70; } // 801D08A4
  goto L_801D0A7C; // 801D08A8
L_801D08AC:;
  c->r[0]=c->r[14]+0x00007431u; // 801D08AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D08B0
  if (crb(c,2)) { goto L_801D095C; } // 801D08B4
  goto L_801D0A7C; // 801D08B8
L_801D08BC:;
  c->r[0]=c->r[29]+0x00006C31u; // 801D08BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D08C0
  if (crb(c,2)) { goto L_801D094C; } // 801D08C4
  if (!crb(c,0)) { goto L_801D0900; } // 801D08C8
  c->r[0]=c->r[28]+0x00007331u; // 801D08CC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D08D0
  if (crb(c,2)) { goto L_801D09B0; } // 801D08D4
  if (!crb(c,0)) { goto L_801D08EC; } // 801D08D8
  c->r[0]=c->r[28]+0x00006E31u; // 801D08DC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D08E0
  if (crb(c,2)) { goto L_801D0964; } // 801D08E4
  goto L_801D0A7C; // 801D08E8
L_801D08EC:;
  c->r[4]=0u+0x70690000u; // 801D08EC
  c->r[0]=c->r[4]+0x00006331u; // 801D08F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D08F4
  if (crb(c,2)) { goto L_801D0964; } // 801D08F8
  goto L_801D0A7C; // 801D08FC
L_801D0900:;
  c->r[4]=0u+0x75730000u; // 801D0900
  c->r[0]=c->r[4]+0x00006431u; // 801D0904
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0908
  if (crb(c,2)) { goto L_801D09A8; } // 801D090C
  if (!crb(c,0)) { goto L_801D0924; } // 801D0910
  c->r[0]=c->r[29]+0x00007431u; // 801D0914
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0918
  if (crb(c,2)) { goto L_801D0964; } // 801D091C
  goto L_801D0A7C; // 801D0920
L_801D0924:;
  c->r[4]=0u+0x776E0000u; // 801D0924
  c->r[0]=c->r[4]+0x00006431u; // 801D0928
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D092C
  if (crb(c,2)) { goto L_801D0964; } // 801D0930
  goto L_801D0A7C; // 801D0934
L_801D0938:;
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0938
  {uint32_t ea=c->r[16]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D093C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 801D0940
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D0944
  goto L_801D0A7C; // 801D0948
L_801D094C:;
  W32(c->r[1]+0x00000008u,c->r[16]); // 801D094C
  goto L_801D0A7C; // 801D0950
L_801D0954:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 801D0954
  goto L_801D0A7C; // 801D0958
L_801D095C:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 801D095C
  goto L_801D0A7C; // 801D0960
L_801D0964:;
  c->r[4]=c->r[16]|c->r[16]; // 801D0964
  c->r[5]=c->r[1]+0x00000008u; // 801D0968
  c->lr=0x801D0970u; f_801D1168(c); // 801D096C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0970
  c->r[21]=c->r[3]|c->r[3]; // 801D0974
  if (crb(c,2)) { goto L_801D0A7C; } // 801D0978
  c->r[0]=R32(c->r[30]+0x00000010u); // 801D097C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0980
  if (!crb(c,2)) { goto L_801D098C; } // 801D0984
  W32(c->r[30]+0x00000010u,c->r[3]); // 801D0988
L_801D098C:;
  cmps(c,0,(int32_t)c->r[20],0); // 801D098C
  if (crb(c,2)) { goto L_801D09A0; } // 801D0990
  c->r[3]=c->r[20]|c->r[20]; // 801D0994
  c->r[4]=c->r[21]|c->r[21]; // 801D0998
  c->lr=0x801D09A0u; f_801CF404(c); // 801D099C
L_801D09A0:;
  c->r[19]=c->r[21]|c->r[21]; // 801D09A0
  goto L_801D0A7C; // 801D09A4
L_801D09A8:;
  W32(c->r[19]+0x000000B4u,c->r[16]); // 801D09A8
  goto L_801D0A7C; // 801D09AC
L_801D09B0:;
  c->r[20]=c->r[19]|c->r[19]; // 801D09B0
  goto L_801D0A7C; // 801D09B4
L_801D09B8:;
  c->r[19]=c->r[20]|c->r[20]; // 801D09B8
  c->r[20]=R32(c->r[20]+0x0000000Cu); // 801D09BC
  goto L_801D0A7C; // 801D09C0
L_801D09C4:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D09C4
  if (!crb(c,2)) { goto L_801D0A10; } // 801D09C8
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D09CC
  c->r[18]=0u+0x00000001u; // 801D09D0
  c->r[4]=0u+0x0000000Cu; // 801D09D4
  c->lr=0x801D09DCu; f_80128068(c); // 801D09D8
  cmps(c,0,(int32_t)c->r[3],0); // 801D09DC
  if (crb(c,2)) { goto L_801D0A04; } // 801D09E0
  if (crb(c,2)) { goto L_801D0A08; } // 801D09E4
  W32(c->r[3]+0x00000004u,c->r[22]); // 801D09E8
  c->r[4]=c->r[3]+0x00000004u; // 801D09EC
  W32(c->r[3]+0x00000008u,c->r[22]); // 801D09F0
  W32(c->r[3]+0x00000000u,c->r[22]); // 801D09F4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D09F8
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D09FC
  goto L_801D0A08; // 801D0A00
L_801D0A04:;
  c->r[3]=0u+0x00000000u; // 801D0A04
L_801D0A08:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 801D0A08
  goto L_801D0A7C; // 801D0A0C
L_801D0A10:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 801D0A10
  cmps(c,0,(int32_t)c->r[0],0); // 801D0A14
  if (crb(c,2)) { goto L_801D0A7C; } // 801D0A18
  cmps(c,0,(int32_t)c->r[17],1); // 801D0A1C
  if (!crb(c,2)) { goto L_801D0A7C; } // 801D0A20
  c->r[21]=R32(c->r[30]+0x00000010u); // 801D0A24
  c->r[4]=0u+0x0000002Cu; // 801D0A28
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D0A2C
  c->lr=0x801D0A34u; f_80128068(c); // 801D0A30
  cmps(c,0,(int32_t)c->r[3],0); // 801D0A34
  if (crb(c,2)) { goto L_801D0A58; } // 801D0A38
  c->r[4]=c->r[3]|c->r[3]; // 801D0A3C
  if (crb(c,2)) { goto L_801D0A5C; } // 801D0A40
  c->r[4]=c->r[16]|c->r[16]; // 801D0A44
  c->r[5]=c->r[21]|c->r[21]; // 801D0A48
  c->lr=0x801D0A50u; f_801D0054(c); // 801D0A4C
  c->r[4]=c->r[3]|c->r[3]; // 801D0A50
  goto L_801D0A5C; // 801D0A54
L_801D0A58:;
  c->r[4]=0u+0x00000000u; // 801D0A58
L_801D0A5C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D0A5C
  if (crb(c,2)) { goto L_801D0A7C; } // 801D0A60
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D0A64
  c->lr=0x801D0A6Cu; f_801D02E4(c); // 801D0A68
  goto L_801D0A7C; // 801D0A6C
L_801D0A70:;
  c->r[17]=c->r[17]+0x00000001u; // 801D0A70
  goto L_801D0A7C; // 801D0A74
L_801D0A78:;
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 801D0A78
L_801D0A7C:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 801D0A7C
  c->r[15]=c->r[15]+0x00000001u; // 801D0A80
  c->r[16]=c->r[16]+c->r[0]; // 801D0A84
L_801D0A88:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 801D0A88
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 801D0A8C
  if (crb(c,0)) { IRQCHK(c); goto L_801D083C; } // 801D0A90
  c->r[3]=0u+0x00000001u; // 801D0A94
L_801D0A98:;
  c->r[11]=c->r[1]+0x00000060u; // 801D0A98
  c->lr=0x801D0AA0u; f_80109F50(c); // 801D0A9C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D0AA0
  c->lr=c->r[0]; // 801D0AA4
  c->r[1]=c->r[1]+0x00000060u; // 801D0AA8
  return; // 801D0AAC
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFv
void f_801D0AB0(Ctx* __restrict c) {
  trace_call(0x801D0AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0AB0
  c->r[0]=c->lr; // 801D0AB4
  c->r[4]=0u+0x00000020u; // 801D0AB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0ABC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0AC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0AC4
  c->r[30]=c->r[3]|c->r[3]; // 801D0AC8
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D0ACC
  c->lr=0x801D0AD4u; f_80128068(c); // 801D0AD0
  cmps(c,0,(int32_t)c->r[3],0); // 801D0AD4
  if (crb(c,2)) { goto L_801D0AF0; } // 801D0AD8
  c->r[31]=c->r[3]|c->r[3]; // 801D0ADC
  if (crb(c,2)) { goto L_801D0AF4; } // 801D0AE0
  c->lr=0x801D0AE8u; f_801D9008(c); // 801D0AE4
  c->r[31]=c->r[3]|c->r[3]; // 801D0AE8
  goto L_801D0AF4; // 801D0AEC
L_801D0AF0:;
  c->r[31]=0u+0x00000000u; // 801D0AF0
L_801D0AF4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D0AF4
  if (crb(c,2)) { goto L_801D0B14; } // 801D0AF8
  c->r[0]=c->r[30]+0x00000008u; // 801D0AFC
  c->r[3]=c->r[30]+0x00000004u; // 801D0B00
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D0B04
  c->r[4]=c->r[1]+0x00000008u; // 801D0B08
  c->r[5]=c->r[31]+0x00000004u; // 801D0B0C
  c->lr=0x801D0B14u; f_8017A764(c); // 801D0B10
L_801D0B14:;
  c->r[3]=c->r[31]|c->r[31]; // 801D0B14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0B18
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0B1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0B20
  c->lr=c->r[0]; // 801D0B24
  c->r[1]=c->r[1]+0x00000020u; // 801D0B28
  return; // 801D0B2C
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
void f_801D0B30(Ctx* __restrict c) {
  trace_call(0x801D0B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0B30
  c->r[0]=c->lr; // 801D0B34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0B38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0B3C
  c->r[31]=c->r[5]|c->r[5]; // 801D0B40
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0B44
  c->r[30]=c->r[3]|c->r[3]; // 801D0B48
  c->r[3]=c->r[1]+0x00000008u; // 801D0B4C
  c->lr=0x801D0B54u; f_801D9A6C(c); // 801D0B50
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D0B54
  c->r[3]=c->r[30]|c->r[30]; // 801D0B58
  c->r[5]=c->r[31]|c->r[31]; // 801D0B5C
  c->r[4]=c->r[1]+0x00000008u; // 801D0B60
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D0B64
  c->ctr=c->r[12]; // 801D0B68
  if (true) { c->lr=0x801D0B70u; dispatch(c,c->ctr); } // 801D0B6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0B70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0B74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0B78
  c->lr=c->r[0]; // 801D0B7C
  c->r[1]=c->r[1]+0x00000020u; // 801D0B80
  return; // 801D0B84
}

// CreateAnimTransform__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor
void f_801D0B88(Ctx* __restrict c) {
  trace_call(0x801D0B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0B88
  c->r[0]=c->lr; // 801D0B8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0B90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0B94
  c->r[31]=R32(c->r[4]+0x00000004u); // 801D0B98
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0B9C
  cmps(c,0,(int32_t)c->r[31],0); // 801D0BA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0BA4
  c->r[29]=c->r[5]|c->r[5]; // 801D0BA8
  if (!crb(c,2)) { goto L_801D0BB8; } // 801D0BAC
  c->r[3]=0u+0x00000000u; // 801D0BB0
  goto L_801D0BF0; // 801D0BB4
L_801D0BB8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0BB8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D0BBC
  c->ctr=c->r[12]; // 801D0BC0
  if (true) { c->lr=0x801D0BC8u; dispatch(c,c->ctr); } // 801D0BC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D0BC8
  c->r[30]=c->r[3]|c->r[3]; // 801D0BCC
  if (crb(c,2)) { goto L_801D0BEC; } // 801D0BD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0BD4
  c->r[4]=c->r[31]|c->r[31]; // 801D0BD8
  c->r[5]=c->r[29]|c->r[29]; // 801D0BDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D0BE0
  c->ctr=c->r[12]; // 801D0BE4
  if (true) { c->lr=0x801D0BECu; dispatch(c,c->ctr); } // 801D0BE8
L_801D0BEC:;
  c->r[3]=c->r[30]|c->r[30]; // 801D0BEC
L_801D0BF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0BF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0BF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0BF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0BFC
  c->lr=c->r[0]; // 801D0C00
  c->r[1]=c->r[1]+0x00000020u; // 801D0C04
  return; // 801D0C08
}

// BindAnimation__Q34nw4r3lyt6LayoutFPQ34nw4r3lyt13AnimTransform
void f_801D0C0C(Ctx* __restrict c) {
  trace_call(0x801D0C0Cu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D0C0C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0C10
  if (crb(c,2)) return; // 801D0C14
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0C18
  c->r[5]=0u+0x00000001u; // 801D0C1C
  c->r[6]=0u+0x00000000u; // 801D0C20
  c->r[12]=R32(c->r[12]+0x00000044u); // 801D0C24
  c->ctr=c->r[12]; // 801D0C28
  if (true) { dispatch(c,c->ctr); return; } // 801D0C2C
  return; // 801D0C30
}

// UnbindAnimation__Q34nw4r3lyt6LayoutFPQ34nw4r3lyt13AnimTransform
void f_801D0C34(Ctx* __restrict c) {
  trace_call(0x801D0C34u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D0C34
  cmps(c,0,(int32_t)c->r[3],0); // 801D0C38
  if (crb(c,2)) return; // 801D0C3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0C40
  c->r[5]=0u+0x00000001u; // 801D0C44
  c->r[12]=R32(c->r[12]+0x00000048u); // 801D0C48
  c->ctr=c->r[12]; // 801D0C4C
  if (true) { dispatch(c,c->ctr); return; } // 801D0C50
  return; // 801D0C54
}

// UnbindAllAnimation__Q34nw4r3lyt6LayoutFv
void f_801D0C58(Ctx* __restrict c) {
  trace_call(0x801D0C58u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0C58
  c->r[4]=0u+0x00000000u; // 801D0C5C
  c->r[12]=R32(c->r[12]+0x00000020u); // 801D0C60
  c->ctr=c->r[12]; // 801D0C64
  if (true) { dispatch(c,c->ctr); return; } // 801D0C68
}

// BindAnimationAuto__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor
void f_801D0C6C(Ctx* __restrict c) {
  trace_call(0x801D0C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0C6C
  c->r[0]=c->lr; // 801D0C70
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D0C74
  c->r[11]=c->r[1]+0x00000060u; // 801D0C78
  c->lr=0x801D0C80u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0C7C
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D0C80
  c->r[29]=c->r[3]|c->r[3]; // 801D0C84
  c->r[30]=c->r[4]|c->r[4]; // 801D0C88
  c->r[31]=c->r[5]|c->r[5]; // 801D0C8C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C90
  if (!crb(c,2)) { goto L_801D0CA0; } // 801D0C94
  c->r[3]=0u+0x00000000u; // 801D0C98
  goto L_801D0EE4; // 801D0C9C
L_801D0CA0:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801D0CA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D0CA4
  if (!crb(c,2)) { goto L_801D0CB4; } // 801D0CA8
  c->r[3]=0u+0x00000000u; // 801D0CAC
  goto L_801D0EE4; // 801D0CB0
L_801D0CB4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0CB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D0CB8
  c->ctr=c->r[12]; // 801D0CBC
  if (true) { c->lr=0x801D0CC4u; dispatch(c,c->ctr); } // 801D0CC0
  c->r[22]=c->r[3]|c->r[3]; // 801D0CC4
  c->r[3]=c->r[30]|c->r[30]; // 801D0CC8
  c->lr=0x801D0CD0u; f_801D9B7C(c); // 801D0CCC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D0CD0
  c->r[24]=c->r[3]|c->r[3]; // 801D0CD4
  c->r[26]=0u+0x00000000u; // 801D0CD8
  if (!crb(c,2)) { goto L_801D0D24; } // 801D0CDC
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D0CE0
  c->r[3]=c->r[22]|c->r[22]; // 801D0CE4
  c->r[4]=R32(c->r[30]+0x00000004u); // 801D0CE8
  c->r[5]=c->r[31]|c->r[31]; // 801D0CEC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D0CF0
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 801D0CF4
  c->ctr=c->r[12]; // 801D0CF8
  if (true) { c->lr=0x801D0D00u; dispatch(c,c->ctr); } // 801D0CFC
  c->r[3]=R32(c->r[29]+0x00000010u); // 801D0D00
  c->r[4]=c->r[22]|c->r[22]; // 801D0D04
  c->r[5]=0u+0x00000001u; // 801D0D08
  c->r[6]=0u+0x00000001u; // 801D0D0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0D10
  c->r[12]=R32(c->r[12]+0x00000044u); // 801D0D14
  c->ctr=c->r[12]; // 801D0D18
  if (true) { c->lr=0x801D0D20u; dispatch(c,c->ctr); } // 801D0D1C
  goto L_801D0DE4; // 801D0D20
L_801D0D24:;
  c->r[3]=c->r[30]|c->r[30]; // 801D0D24
  c->lr=0x801D0D2Cu; f_801D9B98(c); // 801D0D28
  c->r[27]=c->r[3]|c->r[3]; // 801D0D2C
  c->r[25]=rotl(c->r[24],0)&0x0000FFFFu; // 801D0D30
  c->r[23]=c->r[27]|c->r[27]; // 801D0D34
  c->r[28]=0u+0x00000000u; // 801D0D38
  goto L_801D0D74; // 801D0D3C
L_801D0D40:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801D0D40
  c->r[4]=c->r[23]|c->r[23]; // 801D0D44
  c->lr=0x801D0D4Cu; f_801D0318(c); // 801D0D48
  c->r[21]=c->r[3]|c->r[3]; // 801D0D4C
  c->r[3]=c->r[30]|c->r[30]; // 801D0D50
  c->lr=0x801D0D58u; f_801D9BB8(c); // 801D0D54
  c->r[5]=c->r[3]|c->r[3]; // 801D0D58
  c->r[3]=c->r[30]|c->r[30]; // 801D0D5C
  c->r[4]=c->r[21]|c->r[21]; // 801D0D60
  c->lr=0x801D0D68u; f_801D9CEC(c); // 801D0D64
  c->r[26]=c->r[26]+c->r[3]; // 801D0D68
  c->r[23]=c->r[23]+0x00000014u; // 801D0D6C
  c->r[28]=c->r[28]+0x00000001u; // 801D0D70
L_801D0D74:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[25]); // 801D0D74
  if (crb(c,0)) { IRQCHK(c); goto L_801D0D40; } // 801D0D78
  c->r[12]=R32(c->r[22]+0x00000000u); // 801D0D7C
  c->r[3]=c->r[22]|c->r[22]; // 801D0D80
  c->r[5]=c->r[31]|c->r[31]; // 801D0D84
  c->r[6]=rotl(c->r[26],0)&0x0000FFFFu; // 801D0D88
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D0D8C
  c->r[4]=R32(c->r[30]+0x00000004u); // 801D0D90
  c->ctr=c->r[12]; // 801D0D94
  if (true) { c->lr=0x801D0D9Cu; dispatch(c,c->ctr); } // 801D0D98
  c->r[25]=rotl(c->r[24],0)&0x0000FFFFu; // 801D0D9C
  c->r[21]=0u+0x00000000u; // 801D0DA0
  goto L_801D0DDC; // 801D0DA4
L_801D0DA8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801D0DA8
  c->r[4]=c->r[27]|c->r[27]; // 801D0DAC
  c->lr=0x801D0DB4u; f_801D0318(c); // 801D0DB0
  c->r[23]=c->r[3]|c->r[3]; // 801D0DB4
  c->r[3]=c->r[30]|c->r[30]; // 801D0DB8
  c->lr=0x801D0DC0u; f_801D9BB8(c); // 801D0DBC
  c->r[5]=c->r[3]|c->r[3]; // 801D0DC0
  c->r[3]=c->r[23]|c->r[23]; // 801D0DC4
  c->r[4]=c->r[22]|c->r[22]; // 801D0DC8
  c->r[6]=0u+0x00000001u; // 801D0DCC
  c->lr=0x801D0DD4u; f_801DB300(c); // 801D0DD0
  c->r[27]=c->r[27]+0x00000014u; // 801D0DD4
  c->r[21]=c->r[21]+0x00000001u; // 801D0DD8
L_801D0DDC:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[25]); // 801D0DDC
  if (crb(c,0)) { IRQCHK(c); goto L_801D0DA8; } // 801D0DE0
L_801D0DE4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D0DE4
  c->lr=0x801D0DECu; f_801D9BD8(c); // 801D0DE8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D0DEC
  c->r[25]=c->r[3]|c->r[3]; // 801D0DF0
  if (crb(c,2)) { goto L_801D0EE0; } // 801D0DF4
  c->r[3]=c->r[30]|c->r[30]; // 801D0DF8
  c->lr=0x801D0E00u; f_801D9BF4(c); // 801D0DFC
  c->r[23]=c->r[3]|c->r[3]; // 801D0E00
  c->r[26]=rotl(c->r[25],0)&0x0000FFFFu; // 801D0E04
  c->r[21]=0u+0x00000000u; // 801D0E08
  goto L_801D0ED8; // 801D0E0C
L_801D0E10:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801D0E10
  c->r[4]=c->r[23]|c->r[23]; // 801D0E14
  c->r[5]=0u+0x00000001u; // 801D0E18
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0E1C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D0E20
  c->ctr=c->r[12]; // 801D0E24
  if (true) { c->lr=0x801D0E2Cu; dispatch(c,c->ctr); } // 801D0E28
  c->r[20]=c->r[3]|c->r[3]; // 801D0E2C
  c->r[3]=c->r[1]+0x00000008u; // 801D0E30
  c->lr=0x801D0E38u; f_801D9A54(c); // 801D0E34
  c->r[3]=c->r[1]+0x00000008u; // 801D0E38
  c->lr=0x801D0E40u; f_801D9D54(c); // 801D0E3C
  c->r[4]=c->r[20]|c->r[20]; // 801D0E40
  c->r[5]=c->r[30]|c->r[30]; // 801D0E44
  c->r[3]=c->r[1]+0x00000008u; // 801D0E48
  c->lr=0x801D0E50u; f_801D9D8C(c); // 801D0E4C
  c->r[3]=R32(c->r[29]+0x00000014u); // 801D0E50
  c->r[4]=c->r[23]+0x00000011u; // 801D0E54
  c->lr=0x801D0E5Cu; f_801D0318(c); // 801D0E58
  c->r[28]=R32(c->r[3]+0x00000010u); // 801D0E5C
  c->r[27]=c->r[3]+0x00000010u; // 801D0E60
  goto L_801D0EC8; // 801D0E64
L_801D0E68:;
  c->r[22]=R32(c->r[28]+0x00000008u); // 801D0E68
  cmpu(c,0,c->r[22],c->r[20]); // 801D0E6C
  if (crb(c,2)) { goto L_801D0EC4; } // 801D0E70
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D0E74
  if (crb(c,2)) { goto L_801D0EB0; } // 801D0E78
  c->r[3]=c->r[30]|c->r[30]; // 801D0E7C
  c->lr=0x801D0E84u; f_801D9BB8(c); // 801D0E80
  c->r[25]=c->r[3]|c->r[3]; // 801D0E84
  c->r[3]=c->r[30]|c->r[30]; // 801D0E88
  c->lr=0x801D0E90u; f_801D9B98(c); // 801D0E8C
  c->r[4]=c->r[3]|c->r[3]; // 801D0E90
  c->r[3]=R32(c->r[29]+0x00000014u); // 801D0E94
  c->r[6]=c->r[25]|c->r[25]; // 801D0E98
  c->r[7]=c->r[22]|c->r[22]; // 801D0E9C
  c->r[5]=rotl(c->r[24],0)&0x0000FFFFu; // 801D0EA0
  c->lr=0x801D0EA8u; f_801D0540(c); // 801D0EA4
  cmps(c,0,(int32_t)c->r[3],0); // 801D0EA8
  if (crb(c,2)) { goto L_801D0EC4; } // 801D0EAC
L_801D0EB0:;
  c->r[5]=R32(c->r[28]+0x00000008u); // 801D0EB0
  c->r[4]=c->r[29]|c->r[29]; // 801D0EB4
  c->r[6]=c->r[31]|c->r[31]; // 801D0EB8
  c->r[3]=c->r[1]+0x00000008u; // 801D0EBC
  c->lr=0x801D0EC4u; f_801D9FEC(c); // 801D0EC0
L_801D0EC4:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 801D0EC4
L_801D0EC8:;
  cmpu(c,0,c->r[28],c->r[27]); // 801D0EC8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0E68; } // 801D0ECC
  c->r[23]=c->r[23]+0x00000024u; // 801D0ED0
  c->r[21]=c->r[21]+0x00000001u; // 801D0ED4
L_801D0ED8:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[26]); // 801D0ED8
  if (crb(c,0)) { IRQCHK(c); goto L_801D0E10; } // 801D0EDC
L_801D0EE0:;
  c->r[3]=0u+0x00000001u; // 801D0EE0
L_801D0EE4:;
  c->r[11]=c->r[1]+0x00000060u; // 801D0EE4
  c->lr=0x801D0EECu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0EE8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D0EEC
  c->lr=c->r[0]; // 801D0EF0
  c->r[1]=c->r[1]+0x00000060u; // 801D0EF4
  return; // 801D0EF8
}

// SetAnimationEnable__Q34nw4r3lyt6LayoutFPQ34nw4r3lyt13AnimTransformb
void f_801D0EFC(Ctx* __restrict c) {
  trace_call(0x801D0EFCu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D0EFC
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F00
  if (crb(c,2)) return; // 801D0F04
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0F08
  c->r[6]=0u+0x00000001u; // 801D0F0C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801D0F10
  c->ctr=c->r[12]; // 801D0F14
  if (true) { dispatch(c,c->ctr); return; } // 801D0F18
  return; // 801D0F1C
}

// CalculateMtx__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt8DrawInfo
void f_801D0F20(Ctx* __restrict c) {
  trace_call(0x801D0F20u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D0F20
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F24
  if (crb(c,2)) return; // 801D0F28
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0F2C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D0F30
  c->ctr=c->r[12]; // 801D0F34
  if (true) { dispatch(c,c->ctr); return; } // 801D0F38
  return; // 801D0F3C
}

// Draw__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt8DrawInfo
void f_801D0F40(Ctx* __restrict c) {
  trace_call(0x801D0F40u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D0F40
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F44
  if (crb(c,2)) return; // 801D0F48
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0F4C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D0F50
  c->ctr=c->r[12]; // 801D0F54
  if (true) { dispatch(c,c->ctr); return; } // 801D0F58
  return; // 801D0F5C
}

// Animate__Q34nw4r3lyt6LayoutFUl
void f_801D0F60(Ctx* __restrict c) {
  trace_call(0x801D0F60u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D0F60
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F64
  if (crb(c,2)) return; // 801D0F68
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0F6C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D0F70
  c->ctr=c->r[12]; // 801D0F74
  if (true) { dispatch(c,c->ctr); return; } // 801D0F78
  return; // 801D0F7C
}

// GetLayoutRect__Q34nw4r3lyt6LayoutCFv
void f_801D0F80(Ctx* __restrict c) {
  trace_call(0x801D0F80u);
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801D0F80
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0F84
  c->f[3]=-c->f[4]; // 801D0F88
  {uint32_t ea=c->r[2]+0xFFFF9D3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0F8C
  c->f[0]=-c->f[1]; // 801D0F90
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 801D0F94
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 801D0F98
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 801D0F9C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801D0FA0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 801D0FA4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801D0FA8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801D0FAC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 801D0FB0
  return; // 801D0FB4
}

// SetTagProcessor__Q34nw4r3lyt6LayoutFPQ34nw4r2ut19TagProcessorBase<w>
void f_801D0FB8(Ctx* __restrict c) {
  trace_call(0x801D0FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0FB8
  c->r[0]=c->lr; // 801D0FBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0FC0
  c->r[11]=c->r[1]+0x00000030u; // 801D0FC4
  c->lr=0x801D0FCCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0FC8
  c->r[25]=R32(c->r[3]+0x00000010u); // 801D0FCC
  c->r[31]=c->r[4]|c->r[4]; // 801D0FD0
  c->r[23]=c->r[13]+0xFFFF9D88u; // 801D0FD4
  cmps(c,0,(int32_t)c->r[25],0); // 801D0FD8
  if (crb(c,2)) { goto L_801D1028; } // 801D0FDC
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D0FE0
  c->r[3]=c->r[25]|c->r[25]; // 801D0FE4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D0FE8
  c->ctr=c->r[12]; // 801D0FEC
  if (true) { c->lr=0x801D0FF4u; dispatch(c,c->ctr); } // 801D0FF0
  goto L_801D100C; // 801D0FF4
L_801D0FF8:;
  cmpu(c,0,c->r[3],c->r[23]); // 801D0FF8
  if (!crb(c,2)) { goto L_801D1008; } // 801D0FFC
  c->r[0]=0u+0x00000001u; // 801D1000
  goto L_801D1018; // 801D1004
L_801D1008:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1008
L_801D100C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D100C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0FF8; } // 801D1010
  c->r[0]=0u+0x00000000u; // 801D1014
L_801D1018:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D1018
  if (crb(c,2)) { goto L_801D1028; } // 801D101C
  c->r[3]=c->r[25]|c->r[25]; // 801D1020
  goto L_801D102C; // 801D1024
L_801D1028:;
  c->r[3]=0u+0x00000000u; // 801D1028
L_801D102C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D102C
  if (crb(c,2)) { goto L_801D1038; } // 801D1030
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801D1034
L_801D1038:;
  c->r[30]=R32(c->r[25]+0x00000014u); // 801D1038
  c->r[27]=c->r[25]+0x00000014u; // 801D103C
  c->r[24]=c->r[13]+0xFFFF9D88u; // 801D1040
  c->r[23]=c->r[13]+0xFFFF9D88u; // 801D1044
  goto L_801D1148; // 801D1048
L_801D104C:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 801D104C
  if (crb(c,2)) { goto L_801D109C; } // 801D1050
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D1054
  c->r[3]=c->r[25]|c->r[25]; // 801D1058
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D105C
  c->ctr=c->r[12]; // 801D1060
  if (true) { c->lr=0x801D1068u; dispatch(c,c->ctr); } // 801D1064
  goto L_801D1080; // 801D1068
L_801D106C:;
  cmpu(c,0,c->r[3],c->r[23]); // 801D106C
  if (!crb(c,2)) { goto L_801D107C; } // 801D1070
  c->r[0]=0u+0x00000001u; // 801D1074
  goto L_801D108C; // 801D1078
L_801D107C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D107C
L_801D1080:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D1080
  if (!crb(c,2)) { IRQCHK(c); goto L_801D106C; } // 801D1084
  c->r[0]=0u+0x00000000u; // 801D1088
L_801D108C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D108C
  if (crb(c,2)) { goto L_801D109C; } // 801D1090
  c->r[3]=c->r[25]|c->r[25]; // 801D1094
  goto L_801D10A0; // 801D1098
L_801D109C:;
  c->r[3]=0u+0x00000000u; // 801D109C
L_801D10A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D10A0
  if (crb(c,2)) { goto L_801D10AC; } // 801D10A4
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801D10A8
L_801D10AC:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 801D10AC
  c->r[26]=c->r[25]+0x00000014u; // 801D10B0
  goto L_801D113C; // 801D10B4
L_801D10B8:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 801D10B8
  if (crb(c,2)) { goto L_801D1108; } // 801D10BC
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D10C0
  c->r[3]=c->r[25]|c->r[25]; // 801D10C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D10C8
  c->ctr=c->r[12]; // 801D10CC
  if (true) { c->lr=0x801D10D4u; dispatch(c,c->ctr); } // 801D10D0
  goto L_801D10EC; // 801D10D4
L_801D10D8:;
  cmpu(c,0,c->r[3],c->r[24]); // 801D10D8
  if (!crb(c,2)) { goto L_801D10E8; } // 801D10DC
  c->r[0]=0u+0x00000001u; // 801D10E0
  goto L_801D10F8; // 801D10E4
L_801D10E8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D10E8
L_801D10EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D10EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D10D8; } // 801D10F0
  c->r[0]=0u+0x00000000u; // 801D10F4
L_801D10F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D10F8
  if (crb(c,2)) { goto L_801D1108; } // 801D10FC
  c->r[3]=c->r[25]|c->r[25]; // 801D1100
  goto L_801D110C; // 801D1104
L_801D1108:;
  c->r[3]=0u+0x00000000u; // 801D1108
L_801D110C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D110C
  if (crb(c,2)) { goto L_801D1118; } // 801D1110
  W32(c->r[3]+0x000000F8u,c->r[31]); // 801D1114
L_801D1118:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 801D1118
  goto L_801D1130; // 801D111C
L_801D1120:;
  c->r[4]=c->r[31]|c->r[31]; // 801D1120
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 801D1124
  c->lr=0x801D112Cu; f_801D0394(c); // 801D1128
  c->r[28]=R32(c->r[28]+0x00000000u); // 801D112C
L_801D1130:;
  cmpu(c,0,c->r[28],c->r[25]); // 801D1130
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1120; } // 801D1134
  c->r[29]=R32(c->r[29]+0x00000000u); // 801D1138
L_801D113C:;
  cmpu(c,0,c->r[29],c->r[26]); // 801D113C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D10B8; } // 801D1140
  c->r[30]=R32(c->r[30]+0x00000000u); // 801D1144
L_801D1148:;
  cmpu(c,0,c->r[30],c->r[27]); // 801D1148
  if (!crb(c,2)) { IRQCHK(c); goto L_801D104C; } // 801D114C
  c->r[11]=c->r[1]+0x00000030u; // 801D1150
  c->lr=0x801D1158u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1154
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D1158
  c->lr=c->r[0]; // 801D115C
  c->r[1]=c->r[1]+0x00000030u; // 801D1160
  return; // 801D1164
}

// BuildPaneObj__Q34nw4r3lyt6LayoutFlPCvRCQ34nw4r3lyt11ResBlockSet
void f_801D1168(Ctx* __restrict c) {
  trace_call(0x801D1168u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1168
  c->r[0]=c->lr; // 801D116C
  c->r[6]=0u+0x70690000u; // 801D1170
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D1174
  c->r[0]=c->r[6]+0x00006331u; // 801D1178
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D117C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801D1180
  if (crb(c,2)) { goto L_801D120C; } // 801D1184
  if (!crb(c,0)) { goto L_801D11B4; } // 801D1188
  c->r[6]=0u+0x70610000u; // 801D118C
  c->r[0]=c->r[6]+0x00006E31u; // 801D1190
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D1194
  if (crb(c,2)) { goto L_801D11DC; } // 801D1198
  if (!crb(c,0)) { goto L_801D135C; } // 801D119C
  c->r[6]=0u+0x626E0000u; // 801D11A0
  c->r[0]=c->r[6]+0x00006431u; // 801D11A4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D11A8
  if (crb(c,2)) { goto L_801D1308; } // 801D11AC
  goto L_801D135C; // 801D11B0
L_801D11B4:;
  c->r[6]=0u+0x776E0000u; // 801D11B4
  c->r[0]=c->r[6]+0x00006431u; // 801D11B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D11BC
  if (crb(c,2)) { goto L_801D12B4; } // 801D11C0
  if (!crb(c,0)) { goto L_801D135C; } // 801D11C4
  c->r[6]=0u+0x74780000u; // 801D11C8
  c->r[0]=c->r[6]+0x00007431u; // 801D11CC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D11D0
  if (crb(c,2)) { goto L_801D1260; } // 801D11D4
  goto L_801D135C; // 801D11D8
L_801D11DC:;
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D11DC
  c->r[31]=c->r[4]|c->r[4]; // 801D11E0
  c->r[4]=0u+0x000000D8u; // 801D11E4
  c->lr=0x801D11ECu; f_80128068(c); // 801D11E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D11EC
  if (crb(c,2)) { goto L_801D1204; } // 801D11F0
  if (crb(c,2)) { goto L_801D1360; } // 801D11F4
  c->r[4]=c->r[31]|c->r[31]; // 801D11F8
  c->lr=0x801D1200u; f_801CF158(c); // 801D11FC
  goto L_801D1360; // 801D1200
L_801D1204:;
  c->r[3]=0u+0x00000000u; // 801D1204
  goto L_801D1360; // 801D1208
L_801D120C:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D120C
  c->r[31]=c->r[4]|c->r[4]; // 801D1210
  c->r[7]=R32(c->r[5]+0x00000004u); // 801D1214
  c->r[4]=0u+0x000000F0u; // 801D1218
  c->r[6]=R32(c->r[5]+0x00000008u); // 801D121C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D1220
  W32(c->r[1]+0x00000038u,c->r[3]); // 801D1224
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D1228
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 801D122C
  W32(c->r[1]+0x00000040u,c->r[6]); // 801D1230
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D1234
  c->lr=0x801D123Cu; f_80128068(c); // 801D1238
  cmps(c,0,(int32_t)c->r[3],0); // 801D123C
  if (crb(c,2)) { goto L_801D1258; } // 801D1240
  if (crb(c,2)) { goto L_801D1360; } // 801D1244
  c->r[4]=c->r[31]|c->r[31]; // 801D1248
  c->r[5]=c->r[1]+0x00000038u; // 801D124C
  c->lr=0x801D1254u; f_801D146C(c); // 801D1250
  goto L_801D1360; // 801D1254
L_801D1258:;
  c->r[3]=0u+0x00000000u; // 801D1258
  goto L_801D1360; // 801D125C
L_801D1260:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D1260
  c->r[31]=c->r[4]|c->r[4]; // 801D1264
  c->r[7]=R32(c->r[5]+0x00000004u); // 801D1268
  c->r[4]=0u+0x00000104u; // 801D126C
  c->r[6]=R32(c->r[5]+0x00000008u); // 801D1270
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D1274
  W32(c->r[1]+0x00000028u,c->r[3]); // 801D1278
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D127C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 801D1280
  W32(c->r[1]+0x00000030u,c->r[6]); // 801D1284
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D1288
  c->lr=0x801D1290u; f_80128068(c); // 801D128C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1290
  if (crb(c,2)) { goto L_801D12AC; } // 801D1294
  if (crb(c,2)) { goto L_801D1360; } // 801D1298
  c->r[4]=c->r[31]|c->r[31]; // 801D129C
  c->r[5]=c->r[1]+0x00000028u; // 801D12A0
  c->lr=0x801D12A8u; f_801D1BF4(c); // 801D12A4
  goto L_801D1360; // 801D12A8
L_801D12AC:;
  c->r[3]=0u+0x00000000u; // 801D12AC
  goto L_801D1360; // 801D12B0
L_801D12B4:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D12B4
  c->r[31]=c->r[4]|c->r[4]; // 801D12B8
  c->r[7]=R32(c->r[5]+0x00000004u); // 801D12BC
  c->r[4]=0u+0x00000108u; // 801D12C0
  c->r[6]=R32(c->r[5]+0x00000008u); // 801D12C4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D12C8
  W32(c->r[1]+0x00000018u,c->r[3]); // 801D12CC
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D12D0
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 801D12D4
  W32(c->r[1]+0x00000020u,c->r[6]); // 801D12D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D12DC
  c->lr=0x801D12E4u; f_80128068(c); // 801D12E0
  cmps(c,0,(int32_t)c->r[3],0); // 801D12E4
  if (crb(c,2)) { goto L_801D1300; } // 801D12E8
  if (crb(c,2)) { goto L_801D1360; } // 801D12EC
  c->r[4]=c->r[31]|c->r[31]; // 801D12F0
  c->r[5]=c->r[1]+0x00000018u; // 801D12F4
  c->lr=0x801D12FCu; f_801D345C(c); // 801D12F8
  goto L_801D1360; // 801D12FC
L_801D1300:;
  c->r[3]=0u+0x00000000u; // 801D1300
  goto L_801D1360; // 801D1304
L_801D1308:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D1308
  c->r[31]=c->r[4]|c->r[4]; // 801D130C
  c->r[7]=R32(c->r[5]+0x00000004u); // 801D1310
  c->r[4]=0u+0x000000D8u; // 801D1314
  c->r[6]=R32(c->r[5]+0x00000008u); // 801D1318
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D131C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D1320
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D1324
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801D1328
  W32(c->r[1]+0x00000010u,c->r[6]); // 801D132C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1330
  c->lr=0x801D1338u; f_80128068(c); // 801D1334
  cmps(c,0,(int32_t)c->r[3],0); // 801D1338
  if (crb(c,2)) { goto L_801D1354; } // 801D133C
  if (crb(c,2)) { goto L_801D1360; } // 801D1340
  c->r[4]=c->r[31]|c->r[31]; // 801D1344
  c->r[5]=c->r[1]+0x00000008u; // 801D1348
  c->lr=0x801D1350u; f_801D5A10(c); // 801D134C
  goto L_801D1360; // 801D1350
L_801D1354:;
  c->r[3]=0u+0x00000000u; // 801D1354
  goto L_801D1360; // 801D1358
L_801D135C:;
  c->r[3]=0u+0x00000000u; // 801D135C
L_801D1360:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D1360
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801D1364
  c->lr=c->r[0]; // 801D1368
  c->r[1]=c->r[1]+0x00000050u; // 801D136C
  return; // 801D1370
}

// fn_801D1374
void f_801D1374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1374
  c->r[0]=c->lr; // 801D1378
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D137C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1380
  c->r[31]=c->r[4]|c->r[4]; // 801D1384
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1388
  c->r[30]=c->r[3]|c->r[3]; // 801D138C
  c->lr=0x801D1394u; f_801CF02C(c); // 801D1390
  c->r[3]=0u+0x802A0000u; // 801D1394
  c->r[4]=0u+0x80090000u; // 801D1398
  c->r[3]=c->r[3]+0x00001870u; // 801D139C
  c->r[5]=0u+0x80040000u; // 801D13A0
  W32(c->r[30]+0x00000000u,c->r[3]); // 801D13A4
  c->r[3]=c->r[30]+0x000000D8u; // 801D13A8
  c->r[4]=c->r[4]+0x00003CA4u; // 801D13AC
  c->r[5]=c->r[5]+0xFFFFB540u; // 801D13B0
  c->r[6]=0u+0x00000004u; // 801D13B4
  c->r[7]=0u+0x00000004u; // 801D13B8
  c->lr=0x801D13C0u; f_80109BD0(c); // 801D13BC
  c->r[3]=c->r[30]+0x000000E8u; // 801D13C0
  c->lr=0x801D13C8u; f_801DA890(c); // 801D13C4
  c->r[3]=c->r[30]+0x000000E8u; // 801D13C8
  c->r[4]=0u+0x00000001u; // 801D13CC
  c->lr=0x801D13D4u; f_801DA8F4(c); // 801D13D0
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D13D4
  c->r[4]=0u+0x0000005Cu; // 801D13D8
  c->lr=0x801D13E0u; f_80128068(c); // 801D13DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D13E0
  if (crb(c,2)) { goto L_801D13F4; } // 801D13E4
  if (crb(c,2)) { goto L_801D13F8; } // 801D13E8
  c->lr=0x801D13F0u; f_801D5DC0(c); // 801D13EC
  goto L_801D13F8; // 801D13F0
L_801D13F4:;
  c->r[3]=0u+0x00000000u; // 801D13F4
L_801D13F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D13F8
  W32(c->r[30]+0x00000028u,c->r[3]); // 801D13FC
  if (crb(c,2)) { goto L_801D1450; } // 801D1400
  c->r[0]=0u+0x00000000u; // 801D1404
  c->r[4]=0u+0x00000001u; // 801D1408
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D140C
  c->r[5]=0u+0x00000001u; // 801D1410
  c->r[6]=0u+0x00000001u; // 801D1414
  c->r[7]=0u+0x00000000u; // 801D1418
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D141C
  c->r[8]=0u+0x00000000u; // 801D1420
  c->r[9]=0u+0x00000000u; // 801D1424
  c->r[10]=0u+0x00000000u; // 801D1428
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D142C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1430
  c->lr=0x801D1438u; f_801D6978(c); // 801D1434
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D1438
  c->r[3]=c->r[30]|c->r[30]; // 801D143C
  c->r[4]=c->r[31]|c->r[31]; // 801D1440
  c->r[12]=R32(c->r[12]+0x00000074u); // 801D1444
  c->ctr=c->r[12]; // 801D1448
  if (true) { c->lr=0x801D1450u; dispatch(c,c->ctr); } // 801D144C
L_801D1450:;
  c->r[3]=c->r[30]|c->r[30]; // 801D1450
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1454
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1458
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D145C
  c->lr=c->r[0]; // 801D1460
  c->r[1]=c->r[1]+0x00000020u; // 801D1464
  return; // 801D1468
}

// fn_801D146C
void f_801D146C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D146C
  c->r[0]=c->lr; // 801D1470
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D1474
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D1478
  c->r[31]=c->r[3]|c->r[3]; // 801D147C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D1480
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D1484
  c->r[29]=c->r[5]|c->r[5]; // 801D1488
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D148C
  c->r[28]=c->r[4]|c->r[4]; // 801D1490
  c->lr=0x801D1498u; f_801CF158(c); // 801D1494
  c->r[3]=0u+0x802A0000u; // 801D1498
  c->r[4]=0u+0x80090000u; // 801D149C
  c->r[3]=c->r[3]+0x00001870u; // 801D14A0
  c->r[5]=0u+0x80040000u; // 801D14A4
  W32(c->r[31]+0x00000000u,c->r[3]); // 801D14A8
  c->r[3]=c->r[31]+0x000000D8u; // 801D14AC
  c->r[4]=c->r[4]+0x00003CA4u; // 801D14B0
  c->r[5]=c->r[5]+0xFFFFB540u; // 801D14B4
  c->r[6]=0u+0x00000004u; // 801D14B8
  c->r[7]=0u+0x00000004u; // 801D14BC
  c->lr=0x801D14C4u; f_80109BD0(c); // 801D14C0
  c->r[3]=c->r[31]+0x000000E8u; // 801D14C4
  c->lr=0x801D14CCu; f_801DA890(c); // 801D14C8
  c->r[0]=R8(c->r[28]+0x0000005Eu); // 801D14CC
  c->r[30]=0u+0x00000008u; // 801D14D0
  cmpu(c,0,c->r[0],0x00000008u); // 801D14D4
  if (crb(c,1)) { goto L_801D14E0; } // 801D14D8
  c->r[30]=c->r[0]|c->r[0]; // 801D14DC
L_801D14E0:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 801D14E0
  if (crb(c,2)) { goto L_801D14F0; } // 801D14E4
  c->r[3]=c->r[31]+0x000000E8u; // 801D14E8
  c->lr=0x801D14F0u; f_801DA8F4(c); // 801D14EC
L_801D14F0:;
  c->r[6]=R32(c->r[28]+0x0000004Cu); // 801D14F0
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[5]); // 801D14F4
  c->r[4]=R32(c->r[28]+0x00000050u); // 801D14F8
  c->r[3]=R32(c->r[28]+0x00000054u); // 801D14FC
  c->r[0]=R32(c->r[28]+0x00000058u); // 801D1500
  W32(c->r[31]+0x000000D8u,c->r[6]); // 801D1504
  W32(c->r[31]+0x000000DCu,c->r[4]); // 801D1508
  W32(c->r[31]+0x000000E0u,c->r[3]); // 801D150C
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801D1510
  if (crb(c,2)) { goto L_801D1530; } // 801D1514
  c->r[0]=R8(c->r[31]+0x000000E8u); // 801D1518
  cmps(c,0,(int32_t)c->r[0],0); // 801D151C
  if (crb(c,2)) { goto L_801D1530; } // 801D1520
  c->r[3]=c->r[31]+0x000000E8u; // 801D1524
  c->r[4]=c->r[28]+0x00000060u; // 801D1528
  c->lr=0x801D1530u; f_801DAA74(c); // 801D152C
L_801D1530:;
  c->r[0]=R16(c->r[28]+0x0000005Cu); // 801D1530
  c->r[4]=0u+0x0000005Cu; // 801D1534
  c->r[7]=R32(c->r[29]+0x00000008u); // 801D1538
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D153C
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D1540
  c->r[6]=c->r[7]+c->r[0]; // 801D1544
  c->r[5]=R32(c->r[29]+0x00000004u); // 801D1548
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 801D154C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801D1550
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D1554
  c->r[30]=c->r[7]+c->r[6]; // 801D1558
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D155C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801D1560
  W32(c->r[1]+0x00000010u,c->r[7]); // 801D1564
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1568
  c->lr=0x801D1570u; f_80128068(c); // 801D156C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1570
  if (crb(c,2)) { goto L_801D158C; } // 801D1574
  if (crb(c,2)) { goto L_801D1590; } // 801D1578
  c->r[4]=c->r[30]|c->r[30]; // 801D157C
  c->r[5]=c->r[1]+0x00000008u; // 801D1580
  c->lr=0x801D1588u; f_801D5ED4(c); // 801D1584
  goto L_801D1590; // 801D1588
L_801D158C:;
  c->r[3]=0u+0x00000000u; // 801D158C
L_801D1590:;
  W32(c->r[31]+0x00000028u,c->r[3]); // 801D1590
  c->r[3]=c->r[31]|c->r[31]; // 801D1594
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D1598
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D159C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D15A0
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D15A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D15A8
  c->lr=c->r[0]; // 801D15AC
  c->r[1]=c->r[1]+0x00000030u; // 801D15B0
  return; // 801D15B4
}

// fn_801D15B8
void f_801D15B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D15B8
  c->r[0]=c->lr; // 801D15BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D15C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D15C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D15C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D15CC
  c->r[30]=c->r[4]|c->r[4]; // 801D15D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D15D4
  c->r[29]=c->r[3]|c->r[3]; // 801D15D8
  if (crb(c,2)) { goto L_801D1670; } // 801D15DC
  c->r[31]=R32(c->r[3]+0x00000028u); // 801D15E0
  c->r[4]=0u+0x802A0000u; // 801D15E4
  c->r[4]=c->r[4]+0x00001870u; // 801D15E8
  cmps(c,1,(int32_t)c->r[31],0); // 801D15EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D15F0
  if (crb(c,6)) { goto L_801D1634; } // 801D15F4
  c->r[0]=R8(c->r[31]+0x00000059u); // 801D15F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D15FC
  if (!crb(c,2)) { goto L_801D1634; } // 801D1600
  if (crb(c,6)) { goto L_801D162C; } // 801D1604
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D1608
  c->r[3]=c->r[31]|c->r[31]; // 801D160C
  c->r[4]=0u+0xFFFFFFFFu; // 801D1610
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D1614
  c->ctr=c->r[12]; // 801D1618
  if (true) { c->lr=0x801D1620u; dispatch(c,c->ctr); } // 801D161C
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D1620
  c->r[4]=c->r[31]|c->r[31]; // 801D1624
  c->lr=0x801D162Cu; f_80128078(c); // 801D1628
L_801D162C:;
  c->r[0]=0u+0x00000000u; // 801D162C
  W32(c->r[29]+0x00000028u,c->r[0]); // 801D1630
L_801D1634:;
  c->r[3]=c->r[29]+0x000000E8u; // 801D1634
  c->lr=0x801D163Cu; f_801DA8A4(c); // 801D1638
  c->r[4]=0u+0x80040000u; // 801D163C
  c->r[3]=c->r[29]+0x000000D8u; // 801D1640
  c->r[4]=c->r[4]+0xFFFFB540u; // 801D1644
  c->r[5]=0u+0x00000004u; // 801D1648
  c->r[6]=0u+0x00000004u; // 801D164C
  c->lr=0x801D1654u; f_80109CC8(c); // 801D1650
  c->r[3]=c->r[29]|c->r[29]; // 801D1654
  c->r[4]=0u+0x00000000u; // 801D1658
  c->lr=0x801D1660u; f_801CF290(c); // 801D165C
  cmps(c,0,(int32_t)c->r[30],0); // 801D1660
  if (!crb(c,1)) { goto L_801D1670; } // 801D1664
  c->r[3]=c->r[29]|c->r[29]; // 801D1668
  c->lr=0x801D1670u; f_8009230C(c); // 801D166C
L_801D1670:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1670
  c->r[3]=c->r[29]|c->r[29]; // 801D1674
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1678
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D167C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1680
  c->lr=c->r[0]; // 801D1684
  c->r[1]=c->r[1]+0x00000020u; // 801D1688
  return; // 801D168C
}

// fn_801D1690
void f_801D1690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1690
  c->r[0]=c->lr; // 801D1694
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D1698
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D169C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D16A0
  c->r[30]=c->r[3]|c->r[3]; // 801D16A4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D16A8
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D16AC
  c->r[28]=c->r[4]|c->r[4]; // 801D16B0
  c->r[5]=R32(c->r[3]+0x00000028u); // 801D16B4
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 801D16B8
  c->r[3]=R32(c->r[5]+0x00000038u); // 801D16BC
  c->r[31]=rotl(c->r[0],4)&0x0000000Fu; // 801D16C0
  c->r[0]=rotl(c->r[3],4)&0x0000000Fu; // 801D16C4
  cmpu(c,0,c->r[31],c->r[0]); // 801D16C8
  if (!crb(c,0)) { goto L_801D1824; } // 801D16CC
  c->r[0]=rotl(c->r[3],12)&0x0000000Fu; // 801D16D0
  cmpu(c,0,c->r[31],c->r[0]); // 801D16D4
  if (crb(c,0)) { goto L_801D16E0; } // 801D16D8
  goto L_801D1824; // 801D16DC
L_801D16E0:;
  c->r[0]=c->r[31]+0x00000001u; // 801D16E0
  c->r[3]=c->r[5]|c->r[5]; // 801D16E4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D16E8
  c->lr=0x801D16F0u; f_801D73A4(c); // 801D16EC
  c->r[3]=R32(c->r[30]+0x00000028u); // 801D16F0
  c->lr=0x801D16F8u; f_801D70E4(c); // 801D16F4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)28); // 801D16F8
  c->r[6]=R32(c->r[28]+0x00000000u); // 801D16FC
  c->r[5]=R32(c->r[28]+0x00000004u); // 801D1700
  c->r[4]=R16(c->r[28]+0x00000008u); // 801D1704
  c->r[7]=c->r[3]+c->r[0]; // 801D1708
  c->r[0]=R16(c->r[28]+0x0000000Au); // 801D170C
  W32(c->r[7]+0x00000000u,c->r[6]); // 801D1710
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1714
  W32(c->r[7]+0x00000004u,c->r[5]); // 801D1718
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D171C
  W16(c->r[7]+0x00000008u,c->r[4]); // 801D1720
  c->r[4]=R16(c->r[28]+0x00000014u); // 801D1724
  W16(c->r[7]+0x0000000Au,c->r[0]); // 801D1728
  c->r[3]=R16(c->r[28]+0x00000016u); // 801D172C
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D1730
  c->r[0]=R32(c->r[28]+0x00000018u); // 801D1734
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 801D1738
  W16(c->r[7]+0x00000014u,c->r[4]); // 801D173C
  W16(c->r[7]+0x00000016u,c->r[3]); // 801D1740
  W32(c->r[7]+0x00000018u,c->r[0]); // 801D1744
  c->r[3]=R32(c->r[30]+0x00000028u); // 801D1748
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D174C
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 801D1750
  c->lr=0x801D1758u; f_801D7434(c); // 801D1754
  c->r[28]=0u+0x00000000u; // 801D1758
  c->r[29]=0u+0x00000001u; // 801D175C
  c->r[4]=0u+0x00000004u; // 801D1760
  c->r[0]=0u+0x0000003Cu; // 801D1764
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 801D1768
  c->r[3]=R32(c->r[30]+0x00000028u); // 801D176C
  W8(c->r[1]+0x00000008u,c->r[29]); // 801D1770
  W8(c->r[1]+0x00000009u,c->r[4]); // 801D1774
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D1778
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D177C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D1780
  c->lr=0x801D1788u; f_801D7104(c); // 801D1784
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801D1788
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 801D178C
  c->r[5]=c->r[3]+c->r[0]; // 801D1790
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801D1794
  W8(c->r[5]+0x00000000u,c->r[4]); // 801D1798
  c->r[3]=c->r[30]+0x000000E8u; // 801D179C
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 801D17A0
  W8(c->r[5]+0x00000001u,c->r[0]); // 801D17A4
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801D17A8
  W8(c->r[5]+0x00000002u,c->r[4]); // 801D17AC
  W8(c->r[5]+0x00000003u,c->r[0]); // 801D17B0
  c->r[4]=R32(c->r[30]+0x00000028u); // 801D17B4
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801D17B8
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 801D17BC
  c->lr=0x801D17C4u; f_801DA988(c); // 801D17C0
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D17C4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D17C8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D17CC
  fcmp(c,0,c->f[0],c->f[1]); // 801D17D0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D17D4
  if (!crb(c,2)) { goto L_801D17EC; } // 801D17D8
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D17DC
  fcmp(c,0,c->f[0],c->f[1]); // 801D17E0
  if (!crb(c,2)) { goto L_801D17EC; } // 801D17E4
  c->r[28]=c->r[29]|c->r[29]; // 801D17E8
L_801D17EC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D17EC
  if (crb(c,2)) { goto L_801D1824; } // 801D17F0
  c->r[4]=R32(c->r[30]+0x00000028u); // 801D17F4
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801D17F8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D17FC
  cmpu(c,0,c->r[0],0x00000001u); // 801D1800
  if (!crb(c,2)) { goto L_801D1824; } // 801D1804
  c->r[3]=c->r[1]+0x00000010u; // 801D1808
  c->r[5]=0u+0x00000000u; // 801D180C
  c->lr=0x801D1814u; f_801D88B0(c); // 801D1810
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1814
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 801D1818
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D181C
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 801D1820
L_801D1824:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D1824
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D1828
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D182C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D1830
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D1834
  c->lr=c->r[0]; // 801D1838
  c->r[1]=c->r[1]+0x00000030u; // 801D183C
  return; // 801D1840
}

// GetVtxColor__Q34nw4r3lyt7PictureCFUl
void f_801D1844(Ctx* __restrict c) {
  trace_call(0x801D1844u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D1844
  c->r[7]=c->r[4]+c->r[0]; // 801D1848
  c->r[6]=R8(c->r[7]+0x000000D8u); // 801D184C
  c->r[5]=R8(c->r[7]+0x000000D9u); // 801D1850
  c->r[4]=R8(c->r[7]+0x000000DAu); // 801D1854
  c->r[0]=R8(c->r[7]+0x000000DBu); // 801D1858
  W8(c->r[3]+0x00000000u,c->r[6]); // 801D185C
  W8(c->r[3]+0x00000001u,c->r[5]); // 801D1860
  W8(c->r[3]+0x00000002u,c->r[4]); // 801D1864
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D1868
  return; // 801D186C
}

// SetVtxColor__Q34nw4r3lyt7PictureFUlQ34nw4r2ut5Color
void f_801D1870(Ctx* __restrict c) {
  trace_call(0x801D1870u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D1870
  c->r[6]=R8(c->r[5]+0x00000000u); // 801D1874
  c->r[4]=c->r[3]+c->r[0]; // 801D1878
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D187C
  W8(c->r[4]+0x000000D8u,c->r[6]); // 801D1880
  c->r[3]=R8(c->r[5]+0x00000002u); // 801D1884
  W8(c->r[4]+0x000000D9u,c->r[0]); // 801D1888
  c->r[0]=R8(c->r[5]+0x00000003u); // 801D188C
  W8(c->r[4]+0x000000DAu,c->r[3]); // 801D1890
  W8(c->r[4]+0x000000DBu,c->r[0]); // 801D1894
  return; // 801D1898
}

// GetVtxColorElement__Q34nw4r3lyt7PictureCFUl
void f_801D189C(Ctx* __restrict c) {
  trace_call(0x801D189Cu);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801D189C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801D18A0
  c->r[3]=c->r[3]+c->r[5]; // 801D18A4
  c->r[3]=c->r[3]+c->r[0]; // 801D18A8
  c->r[3]=R8(c->r[3]+0x000000D8u); // 801D18AC
  return; // 801D18B0
}

// SetVtxColorElement__Q34nw4r3lyt7PictureFUlUc
void f_801D18B4(Ctx* __restrict c) {
  trace_call(0x801D18B4u);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801D18B4
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801D18B8
  c->r[3]=c->r[3]+c->r[6]; // 801D18BC
  c->r[3]=c->r[3]+c->r[0]; // 801D18C0
  W8(c->r[3]+0x000000D8u,c->r[5]); // 801D18C4
  return; // 801D18C8
}

// DrawSelf__Q34nw4r3lyt7PictureFRCQ34nw4r3lyt8DrawInfo
void f_801D18CC(Ctx* __restrict c) {
  trace_call(0x801D18CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D18CC
  c->r[0]=c->lr; // 801D18D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D18D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D18D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D18DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D18E0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D18E4
  c->r[28]=c->r[3]|c->r[3]; // 801D18E8
  c->r[0]=R32(c->r[3]+0x00000028u); // 801D18EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D18F0
  if (crb(c,2)) { goto L_801D1988; } // 801D18F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D18F8
  c->r[12]=R32(c->r[12]+0x00000070u); // 801D18FC
  c->ctr=c->r[12]; // 801D1900
  if (true) { c->lr=0x801D1908u; dispatch(c,c->ctr); } // 801D1904
  c->r[29]=R8(c->r[28]+0x000000B9u); // 801D1908
  c->r[3]=c->r[28]+0x000000D8u; // 801D190C
  c->r[4]=c->r[29]|c->r[29]; // 801D1910
  c->lr=0x801D1918u; f_801DAB08(c); // 801D1914
  c->r[4]=c->r[3]|c->r[3]; // 801D1918
  c->r[3]=R32(c->r[28]+0x00000028u); // 801D191C
  c->r[5]=c->r[29]|c->r[29]; // 801D1920
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D1924
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D1928
  c->ctr=c->r[12]; // 801D192C
  if (true) { c->lr=0x801D1934u; dispatch(c,c->ctr); } // 801D1930
  c->r[4]=R8(c->r[28]+0x000000E9u); // 801D1934
  c->r[29]=c->r[3]|c->r[3]; // 801D1938
  c->lr=0x801D1940u; f_801DABC4(c); // 801D193C
  cmps(c,0,(int32_t)c->r[29],0); // 801D1940
  if (crb(c,2)) { goto L_801D1950; } // 801D1944
  c->r[30]=c->r[28]+0x000000D8u; // 801D1948
  goto L_801D1954; // 801D194C
L_801D1950:;
  c->r[30]=0u+0x00000000u; // 801D1950
L_801D1954:;
  c->r[29]=R32(c->r[28]+0x000000ECu); // 801D1954
  c->r[3]=c->r[28]|c->r[28]; // 801D1958
  c->r[31]=R8(c->r[28]+0x000000E9u); // 801D195C
  c->lr=0x801D1964u; f_801CFF28(c); // 801D1960
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D1964
  c->r[5]=c->r[31]|c->r[31]; // 801D1968
  c->r[6]=c->r[29]|c->r[29]; // 801D196C
  c->r[7]=c->r[30]|c->r[30]; // 801D1970
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D1974
  c->r[3]=c->r[1]+0x00000008u; // 801D1978
  c->r[4]=c->r[28]+0x0000004Cu; // 801D197C
  c->r[8]=R8(c->r[28]+0x000000B9u); // 801D1980
  c->lr=0x801D1988u; f_801DB208(c); // 801D1984
L_801D1988:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1988
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D198C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1990
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D1994
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D1998
  c->lr=c->r[0]; // 801D199C
  c->r[1]=c->r[1]+0x00000020u; // 801D19A0
  return; // 801D19A4
}

// GetRuntimeTypeInfo__Q34nw4r3lyt7PictureCFv
void f_801D19A8(Ctx* __restrict c) {
  trace_call(0x801D19A8u);
  c->r[3]=c->r[13]+0xFFFF9D80u; // 801D19A8
  return; // 801D19AC
}

// fn_801D19B0
void f_801D19B0(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFF9D70u; // 801D19B0
  W32(c->r[13]+0xFFFF9D80u,c->r[0]); // 801D19B4
  return; // 801D19B8
}

// GetColor__Q34nw4r3lyt25@unnamed@lyt_textBox_cpp@FRC11_GXColorS10
void f_801D19BC(Ctx* __restrict c) {
  trace_call(0x801D19BCu);
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 801D19BC
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D19C0
  cmps(c,0,(int32_t)c->r[5],0); // 801D19C4
  if (!crb(c,0)) { goto L_801D19D4; } // 801D19C8
  c->r[0]=0u+0x00000000u; // 801D19CC
  goto L_801D19E4; // 801D19D0
L_801D19D4:;
  cmps(c,0,(int32_t)c->r[5],255); // 801D19D4
  c->r[0]=0u+0x000000FFu; // 801D19D8
  if (crb(c,1)) { goto L_801D19E4; } // 801D19DC
  c->r[0]=c->r[5]|c->r[5]; // 801D19E0
L_801D19E4:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801D19E4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D19E8
  cmps(c,0,(int32_t)c->r[5],0); // 801D19EC
  if (!crb(c,0)) { goto L_801D19FC; } // 801D19F0
  c->r[0]=0u+0x00000000u; // 801D19F4
  goto L_801D1A0C; // 801D19F8
L_801D19FC:;
  cmps(c,0,(int32_t)c->r[5],255); // 801D19FC
  c->r[0]=0u+0x000000FFu; // 801D1A00
  if (crb(c,1)) { goto L_801D1A0C; } // 801D1A04
  c->r[0]=c->r[5]|c->r[5]; // 801D1A08
L_801D1A0C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 801D1A0C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D1A10
  cmps(c,0,(int32_t)c->r[5],0); // 801D1A14
  if (!crb(c,0)) { goto L_801D1A24; } // 801D1A18
  c->r[0]=0u+0x00000000u; // 801D1A1C
  goto L_801D1A34; // 801D1A20
L_801D1A24:;
  cmps(c,0,(int32_t)c->r[5],255); // 801D1A24
  c->r[0]=0u+0x000000FFu; // 801D1A28
  if (crb(c,1)) { goto L_801D1A34; } // 801D1A2C
  c->r[0]=c->r[5]|c->r[5]; // 801D1A30
L_801D1A34:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 801D1A34
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D1A38
  cmps(c,0,(int32_t)c->r[4],0); // 801D1A3C
  if (!crb(c,0)) { goto L_801D1A4C; } // 801D1A40
  c->r[0]=0u+0x00000000u; // 801D1A44
  goto L_801D1A5C; // 801D1A48
L_801D1A4C:;
  cmps(c,0,(int32_t)c->r[4],255); // 801D1A4C
  c->r[0]=0u+0x000000FFu; // 801D1A50
  if (crb(c,1)) { goto L_801D1A5C; } // 801D1A54
  c->r[0]=c->r[4]|c->r[4]; // 801D1A58
L_801D1A5C:;
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801D1A5C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D1A60
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D1A64
  c->r[1]=c->r[1]+0x00000010u; // 801D1A68
  return; // 801D1A6C
}

// __ct__Q34nw4r3lyt7TextBoxFUs
void f_801D1A70(Ctx* __restrict c) {
  trace_call(0x801D1A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1A70
  c->r[0]=c->lr; // 801D1A74
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D1A78
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D1A7C
  c->r[31]=c->r[4]|c->r[4]; // 801D1A80
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D1A84
  c->r[30]=c->r[3]|c->r[3]; // 801D1A88
  c->lr=0x801D1A90u; f_801CF02C(c); // 801D1A8C
  c->r[3]=0u+0x802A0000u; // 801D1A90
  c->r[4]=0u+0x80090000u; // 801D1A94
  c->r[3]=c->r[3]+0x000018E8u; // 801D1A98
  c->r[5]=0u+0x80040000u; // 801D1A9C
  W32(c->r[30]+0x00000000u,c->r[3]); // 801D1AA0
  c->r[3]=c->r[30]+0x000000DCu; // 801D1AA4
  c->r[4]=c->r[4]+0x00003CA4u; // 801D1AA8
  c->r[5]=c->r[5]+0xFFFFB540u; // 801D1AAC
  c->r[6]=0u+0x00000004u; // 801D1AB0
  c->r[7]=0u+0x00000002u; // 801D1AB4
  c->lr=0x801D1ABCu; f_80109BD0(c); // 801D1AB8
  c->r[3]=0u+0x55550000u; // 801D1ABC
  c->r[0]=R8(c->r[30]+0x00000100u); // 801D1AC0
  c->r[8]=c->r[3]+0x00005556u; // 801D1AC4
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1AC8
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801D1ACC
  c->r[9]=0u+0x00000000u; // 801D1AD0
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 801D1AD4
  c->r[3]=c->r[30]+0x00000101u; // 801D1AD8
  c->r[4]=0u+0x00000000u; // 801D1ADC
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 801D1AE0
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801D1AE4
  W32(c->r[30]+0x000000D8u,c->r[9]); // 801D1AE8
  c->r[0]=c->r[5]+c->r[0]; // 801D1AEC
  c->r[5]=0u+0x00000001u; // 801D1AF0
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801D1AF4
  W16(c->r[30]+0x000000FCu,c->r[9]); // 801D1AF8
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801D1AFC
  c->r[6]=c->r[0]-c->r[6]; // 801D1B00
  W16(c->r[30]+0x000000FEu,c->r[9]); // 801D1B04
  c->r[0]=c->r[6]+0x00000001u; // 801D1B08
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801D1B0C
  W32(c->r[30]+0x000000E4u,c->r[9]); // 801D1B10
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 801D1B14
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D1B18
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D1B1C
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 801D1B20
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 801D1B24
  c->r[0]=c->r[6]+c->r[0]; // 801D1B28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801D1B2C
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 801D1B30
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[0]);} // 801D1B34
  c->r[0]=c->r[7]-c->r[0]; // 801D1B38
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801D1B3C
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[0]);} // 801D1B40
  c->r[0]=c->r[6]+0x00000003u; // 801D1B44
  W8(c->r[30]+0x00000100u,c->r[0]); // 801D1B48
  W32(c->r[30]+0x000000F8u,c->r[9]); // 801D1B4C
  c->lr=0x801D1B54u; f_8000443C(c); // 801D1B50
  cmps(c,0,(int32_t)c->r[31],0); // 801D1B54
  if (crb(c,2)) { goto L_801D1B74; } // 801D1B58
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D1B5C
  c->r[3]=c->r[30]|c->r[30]; // 801D1B60
  c->r[4]=c->r[31]|c->r[31]; // 801D1B64
  c->r[12]=R32(c->r[12]+0x00000074u); // 801D1B68
  c->ctr=c->r[12]; // 801D1B6C
  if (true) { c->lr=0x801D1B74u; dispatch(c,c->ctr); } // 801D1B70
L_801D1B74:;
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D1B74
  c->r[4]=0u+0x0000005Cu; // 801D1B78
  c->lr=0x801D1B80u; f_80128068(c); // 801D1B7C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1B80
  if (crb(c,2)) { goto L_801D1B94; } // 801D1B84
  if (crb(c,2)) { goto L_801D1B98; } // 801D1B88
  c->lr=0x801D1B90u; f_801D5DC0(c); // 801D1B8C
  goto L_801D1B98; // 801D1B90
L_801D1B94:;
  c->r[3]=0u+0x00000000u; // 801D1B94
L_801D1B98:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D1B98
  W32(c->r[30]+0x00000028u,c->r[3]); // 801D1B9C
  if (crb(c,2)) { goto L_801D1BD8; } // 801D1BA0
  c->r[0]=0u+0x00000000u; // 801D1BA4
  c->r[4]=0u+0x00000000u; // 801D1BA8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D1BAC
  c->r[5]=0u+0x00000000u; // 801D1BB0
  c->r[6]=0u+0x00000000u; // 801D1BB4
  c->r[7]=0u+0x00000000u; // 801D1BB8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D1BBC
  c->r[8]=0u+0x00000000u; // 801D1BC0
  c->r[9]=0u+0x00000000u; // 801D1BC4
  c->r[10]=0u+0x00000000u; // 801D1BC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D1BCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1BD0
  c->lr=0x801D1BD8u; f_801D6978(c); // 801D1BD4
L_801D1BD8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D1BD8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D1BDC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D1BE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D1BE4
  c->lr=c->r[0]; // 801D1BE8
  c->r[1]=c->r[1]+0x00000030u; // 801D1BEC
  return; // 801D1BF0
}

// __ct__Q34nw4r3lyt7TextBoxFPCQ44nw4r3lyt3res7TextBoxRCQ34nw4r3lyt11ResBlockSet
void f_801D1BF4(Ctx* __restrict c) {
  trace_call(0x801D1BF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1BF4
  c->r[0]=c->lr; // 801D1BF8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D1BFC
  c->r[11]=c->r[1]+0x00000040u; // 801D1C00
  c->lr=0x801D1C08u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1C04
  c->r[28]=c->r[3]|c->r[3]; // 801D1C08
  c->r[29]=c->r[4]|c->r[4]; // 801D1C0C
  c->r[30]=c->r[5]|c->r[5]; // 801D1C10
  c->lr=0x801D1C18u; f_801CF158(c); // 801D1C14
  c->r[3]=0u+0x802A0000u; // 801D1C18
  c->r[4]=0u+0x80090000u; // 801D1C1C
  c->r[3]=c->r[3]+0x000018E8u; // 801D1C20
  c->r[5]=0u+0x80040000u; // 801D1C24
  W32(c->r[28]+0x00000000u,c->r[3]); // 801D1C28
  c->r[3]=c->r[28]+0x000000DCu; // 801D1C2C
  c->r[4]=c->r[4]+0x00003CA4u; // 801D1C30
  c->r[5]=c->r[5]+0xFFFFB540u; // 801D1C34
  c->r[6]=0u+0x00000004u; // 801D1C38
  c->r[7]=0u+0x00000002u; // 801D1C3C
  c->lr=0x801D1C44u; f_80109BD0(c); // 801D1C40
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 801D1C44
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1C48
  c->r[31]=rotl(c->r[0],31)&0x0000FFFFu; cr0(c,c->r[31]); // 801D1C4C
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 801D1C50
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 801D1C54
  if (crb(c,2)) { goto L_801D1C64; } // 801D1C58
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801D1C5C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D1C60
L_801D1C64:;
  c->r[3]=0u+0x55550000u; // 801D1C64
  c->r[0]=R8(c->r[28]+0x00000100u); // 801D1C68
  c->r[8]=c->r[3]+0x00005556u; // 801D1C6C
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1C70
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801D1C74
  c->r[9]=0u+0x00000000u; // 801D1C78
  W32(c->r[28]+0x000000D8u,c->r[9]); // 801D1C7C
  c->r[3]=c->r[28]+0x00000101u; // 801D1C80
  c->r[4]=0u+0x00000000u; // 801D1C84
  W16(c->r[28]+0x000000FCu,c->r[9]); // 801D1C88
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801D1C8C
  W16(c->r[28]+0x000000FEu,c->r[9]); // 801D1C90
  c->r[0]=c->r[5]+c->r[0]; // 801D1C94
  c->r[5]=0u+0x00000001u; // 801D1C98
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801D1C9C
  W32(c->r[28]+0x000000E4u,c->r[9]); // 801D1CA0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801D1CA4
  c->r[6]=c->r[0]-c->r[6]; // 801D1CA8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801D1CAC
  c->r[0]=c->r[6]+0x00000001u; // 801D1CB0
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801D1CB4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D1CB8
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 801D1CBC
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 801D1CC0
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 801D1CC4
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 801D1CC8
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 801D1CCC
  c->r[0]=c->r[6]+c->r[0]; // 801D1CD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801D1CD4
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[0]);} // 801D1CD8
  W32(c->r[28]+0x000000F8u,c->r[9]); // 801D1CDC
  c->r[0]=c->r[7]-c->r[0]; // 801D1CE0
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801D1CE4
  c->r[0]=c->r[6]+0x00000003u; // 801D1CE8
  W8(c->r[28]+0x00000100u,c->r[0]); // 801D1CEC
  c->lr=0x801D1CF4u; f_8000443C(c); // 801D1CF0
  cmps(c,0,(int32_t)c->r[31],0); // 801D1CF4
  if (crb(c,2)) { goto L_801D1D14; } // 801D1CF8
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D1CFC
  c->r[3]=c->r[28]|c->r[28]; // 801D1D00
  c->r[4]=c->r[31]|c->r[31]; // 801D1D04
  c->r[12]=R32(c->r[12]+0x00000074u); // 801D1D08
  c->ctr=c->r[12]; // 801D1D0C
  if (true) { c->lr=0x801D1D14u; dispatch(c,c->ctr); } // 801D1D10
L_801D1D14:;
  c->r[4]=R16(c->r[29]+0x0000004Eu); // 801D1D14
  cmpu(c,0,c->r[4],0x00000002u); // 801D1D18
  if (crb(c,0)) { goto L_801D1D58; } // 801D1D1C
  c->r[0]=R32(c->r[28]+0x000000D8u); // 801D1D20
  cmps(c,0,(int32_t)c->r[0],0); // 801D1D24
  if (crb(c,2)) { goto L_801D1D58; } // 801D1D28
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D1D2C
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 801D1D30
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D1D34
  c->r[4]=R32(c->r[29]+0x00000058u); // 801D1D38
  c->r[12]=R32(c->r[12]+0x00000080u); // 801D1D3C
  c->r[3]=c->r[28]|c->r[28]; // 801D1D40
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801D1D44
  c->r[5]=0u+0x00000000u; // 801D1D48
  c->r[4]=c->r[29]+c->r[4]; // 801D1D4C
  c->ctr=c->r[12]; // 801D1D50
  if (true) { c->lr=0x801D1D58u; dispatch(c,c->ctr); } // 801D1D54
L_801D1D58:;
  c->r[0]=R8(c->r[29]+0x00000055u); // 801D1D58
  c->r[7]=R32(c->r[29]+0x0000005Cu); // 801D1D5C
  c->r[6]=R32(c->r[29]+0x00000060u); // 801D1D60
  {uint32_t ea=c->r[29]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D1D64
  {uint32_t ea=c->r[29]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1D68
  c->r[5]=R8(c->r[29]+0x00000054u); // 801D1D6C
  c->r[4]=R8(c->r[28]+0x00000101u); // 801D1D70
  c->r[4]=(rotl(c->r[0],5)&0x00000060u)|(c->r[4]&~0x00000060u); // 801D1D74
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1D78
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1D7C
  c->r[0]=R16(c->r[29]+0x00000052u); // 801D1D80
  c->r[3]=R32(c->r[30]+0x00000004u); // 801D1D84
  W32(c->r[28]+0x000000DCu,c->r[7]); // 801D1D88
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D1D8C
  c->r[7]=c->r[3]+0x0000000Cu; // 801D1D90
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801D1D94
  W32(c->r[28]+0x000000E0u,c->r[6]); // 801D1D98
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[3]);} // 801D1D9C
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[2]);} // 801D1DA0
  W8(c->r[28]+0x00000100u,c->r[5]); // 801D1DA4
  W8(c->r[28]+0x00000101u,c->r[4]); // 801D1DA8
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[1]);} // 801D1DAC
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 801D1DB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D1DB4
  c->r[0]=R32(c->r[7]+c->r[0]); // 801D1DB8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D1DBC
  c->r[31]=c->r[7]+c->r[0]; // 801D1DC0
  c->r[4]=c->r[31]|c->r[31]; // 801D1DC4
  c->ctr=c->r[12]; // 801D1DC8
  if (true) { c->lr=0x801D1DD0u; dispatch(c,c->ctr); } // 801D1DCC
  cmps(c,0,(int32_t)c->r[3],0); // 801D1DD0
  if (crb(c,2)) { goto L_801D1DE0; } // 801D1DD4
  W32(c->r[28]+0x000000E4u,c->r[3]); // 801D1DD8
  goto L_801D1E60; // 801D1DDC
L_801D1DE0:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801D1DE0
  c->r[4]=0u+0x666F0000u; // 801D1DE4
  c->r[5]=c->r[31]|c->r[31]; // 801D1DE8
  c->r[6]=0u+0x00000000u; // 801D1DEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D1DF0
  c->r[4]=c->r[4]+0x00006E74u; // 801D1DF4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D1DF8
  c->ctr=c->r[12]; // 801D1DFC
  if (true) { c->lr=0x801D1E04u; dispatch(c,c->ctr); } // 801D1E00
  cmps(c,0,(int32_t)c->r[3],0); // 801D1E04
  c->r[27]=c->r[3]|c->r[3]; // 801D1E08
  if (crb(c,2)) { goto L_801D1E60; } // 801D1E0C
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D1E10
  c->r[4]=0u+0x0000001Cu; // 801D1E14
  c->lr=0x801D1E1Cu; f_80128068(c); // 801D1E18
  cmps(c,0,(int32_t)c->r[3],0); // 801D1E1C
  if (crb(c,2)) { goto L_801D1E38; } // 801D1E20
  c->r[31]=c->r[3]|c->r[3]; // 801D1E24
  if (crb(c,2)) { goto L_801D1E3C; } // 801D1E28
  c->lr=0x801D1E30u; f_8017C200(c); // 801D1E2C
  c->r[31]=c->r[3]|c->r[3]; // 801D1E30
  goto L_801D1E3C; // 801D1E34
L_801D1E38:;
  c->r[31]=0u+0x00000000u; // 801D1E38
L_801D1E3C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D1E3C
  if (crb(c,2)) { goto L_801D1E60; } // 801D1E40
  c->r[3]=c->r[31]|c->r[31]; // 801D1E44
  c->r[4]=c->r[27]|c->r[27]; // 801D1E48
  c->lr=0x801D1E50u; f_8017C294(c); // 801D1E4C
  c->r[0]=R8(c->r[28]+0x00000101u); // 801D1E50
  W32(c->r[28]+0x000000E4u,c->r[31]); // 801D1E54
  c->r[0]=c->r[0]|0x00000080u; // 801D1E58
  W8(c->r[28]+0x00000101u,c->r[0]); // 801D1E5C
L_801D1E60:;
  c->r[0]=R16(c->r[29]+0x00000050u); // 801D1E60
  c->r[4]=0u+0x0000005Cu; // 801D1E64
  c->r[7]=R32(c->r[30]+0x00000008u); // 801D1E68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D1E6C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D1E70
  c->r[6]=c->r[7]+c->r[0]; // 801D1E74
  c->r[5]=R32(c->r[30]+0x00000004u); // 801D1E78
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 801D1E7C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801D1E80
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D1E84
  c->r[27]=c->r[7]+c->r[6]; // 801D1E88
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D1E8C
  W32(c->r[1]+0x00000014u,c->r[5]); // 801D1E90
  W32(c->r[1]+0x00000018u,c->r[7]); // 801D1E94
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D1E98
  c->lr=0x801D1EA0u; f_80128068(c); // 801D1E9C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1EA0
  if (crb(c,2)) { goto L_801D1EBC; } // 801D1EA4
  if (crb(c,2)) { goto L_801D1EC0; } // 801D1EA8
  c->r[4]=c->r[27]|c->r[27]; // 801D1EAC
  c->r[5]=c->r[1]+0x00000010u; // 801D1EB0
  c->lr=0x801D1EB8u; f_801D5ED4(c); // 801D1EB4
  goto L_801D1EC0; // 801D1EB8
L_801D1EBC:;
  c->r[3]=0u+0x00000000u; // 801D1EBC
L_801D1EC0:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 801D1EC0
  c->r[11]=c->r[1]+0x00000040u; // 801D1EC4
  c->r[3]=c->r[28]|c->r[28]; // 801D1EC8
  c->lr=0x801D1ED0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1ECC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D1ED0
  c->lr=c->r[0]; // 801D1ED4
  c->r[1]=c->r[1]+0x00000040u; // 801D1ED8
  return; // 801D1EDC
}

// __dt__Q34nw4r3lyt7TextBoxFv
void f_801D1EE0(Ctx* __restrict c) {
  trace_call(0x801D1EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1EE0
  c->r[0]=c->lr; // 801D1EE4
  cmps(c,0,(int32_t)c->r[3],0); // 801D1EE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D1EEC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D1EF0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801D1EF4
  c->r[30]=c->r[4]|c->r[4]; // 801D1EF8
  W32(c->r[1]+0x00000034u,c->r[29]); // 801D1EFC
  c->r[29]=c->r[3]|c->r[3]; // 801D1F00
  if (crb(c,2)) { goto L_801D2060; } // 801D1F04
  c->r[0]=R8(c->r[3]+0x00000101u); // 801D1F08
  c->r[4]=0u+0x802A0000u; // 801D1F0C
  c->r[4]=c->r[4]+0x000018E8u; // 801D1F10
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801D1F14
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D1F18
  if (crb(c,2)) { goto L_801D1F5C; } // 801D1F1C
  c->r[31]=R32(c->r[3]+0x000000E4u); // 801D1F20
  cmps(c,0,(int32_t)c->r[31],0); // 801D1F24
  if (crb(c,2)) { goto L_801D1F50; } // 801D1F28
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D1F2C
  c->r[3]=c->r[31]|c->r[31]; // 801D1F30
  c->r[4]=0u+0xFFFFFFFFu; // 801D1F34
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D1F38
  c->ctr=c->r[12]; // 801D1F3C
  if (true) { c->lr=0x801D1F44u; dispatch(c,c->ctr); } // 801D1F40
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D1F44
  c->r[4]=c->r[31]|c->r[31]; // 801D1F48
  c->lr=0x801D1F50u; f_80128078(c); // 801D1F4C
L_801D1F50:;
  c->r[0]=R8(c->r[29]+0x00000101u); // 801D1F50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 801D1F54
  W8(c->r[29]+0x00000101u,c->r[0]); // 801D1F58
L_801D1F5C:;
  c->r[0]=0u+0x00000000u; // 801D1F5C
  W32(c->r[29]+0x000000E4u,c->r[0]); // 801D1F60
  goto L_801D1FBC; // 801D1F64
  if (true) { c->lr=0x801D1F6Cu; dispatch(c,c->ctr); } // 801D1F68
  c->r[0]=c->r[3]^0x80000000u; // 801D1F6C
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801D1F70
  c->r[4]=0u+0x43300000u; // 801D1F74
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D1F78
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D1F7C
  W32(c->r[1]+0x00000018u,c->r[4]); // 801D1F80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D1F84
  c->ctr=c->r[12]; // 801D1F88
  if (true) { c->lr=0x801D1F90u; dispatch(c,c->ctr); } // 801D1F8C
  c->r[0]=c->r[3]^0x80000000u; // 801D1F90
  W32(c->r[1]+0x00000020u,c->r[4]); // 801D1F94
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=RF64(ea);} // 801D1F98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1F9C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801D1FA0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D1FA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D1FA8
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[2]);} // 801D1FAC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801D1FB0
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 801D1FB4
  goto L_801D1FD0; // 801D1FB8
L_801D1FBC:;
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1FBC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D1FC0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D1FC4
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 801D1FC8
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 801D1FCC
L_801D1FD0:;
  c->r[31]=R32(c->r[29]+0x00000028u); // 801D1FD0
  cmps(c,1,(int32_t)c->r[31],0); // 801D1FD4
  if (crb(c,6)) { goto L_801D2018; } // 801D1FD8
  c->r[0]=R8(c->r[31]+0x00000059u); // 801D1FDC
  cmps(c,0,(int32_t)c->r[0],0); // 801D1FE0
  if (!crb(c,2)) { goto L_801D2018; } // 801D1FE4
  if (crb(c,6)) { goto L_801D2010; } // 801D1FE8
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D1FEC
  c->r[3]=c->r[31]|c->r[31]; // 801D1FF0
  c->r[4]=0u+0xFFFFFFFFu; // 801D1FF4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D1FF8
  c->ctr=c->r[12]; // 801D1FFC
  if (true) { c->lr=0x801D2004u; dispatch(c,c->ctr); } // 801D2000
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D2004
  c->r[4]=c->r[31]|c->r[31]; // 801D2008
  c->lr=0x801D2010u; f_80128078(c); // 801D200C
L_801D2010:;
  c->r[0]=0u+0x00000000u; // 801D2010
  W32(c->r[29]+0x00000028u,c->r[0]); // 801D2014
L_801D2018:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D2018
  c->r[3]=c->r[29]|c->r[29]; // 801D201C
  c->r[12]=R32(c->r[12]+0x00000078u); // 801D2020
  c->ctr=c->r[12]; // 801D2024
  if (true) { c->lr=0x801D202Cu; dispatch(c,c->ctr); } // 801D2028
  c->r[4]=0u+0x80040000u; // 801D202C
  c->r[3]=c->r[29]+0x000000DCu; // 801D2030
  c->r[4]=c->r[4]+0xFFFFB540u; // 801D2034
  c->r[5]=0u+0x00000004u; // 801D2038
  c->r[6]=0u+0x00000002u; // 801D203C
  c->lr=0x801D2044u; f_80109CC8(c); // 801D2040
  c->r[3]=c->r[29]|c->r[29]; // 801D2044
  c->r[4]=0u+0x00000000u; // 801D2048
  c->lr=0x801D2050u; f_801CF290(c); // 801D204C
  cmps(c,0,(int32_t)c->r[30],0); // 801D2050
  if (!crb(c,1)) { goto L_801D2060; } // 801D2054
  c->r[3]=c->r[29]|c->r[29]; // 801D2058
  c->lr=0x801D2060u; f_8009230C(c); // 801D205C
L_801D2060:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D2060
  c->r[3]=c->r[29]|c->r[29]; // 801D2064
  c->r[30]=R32(c->r[1]+0x00000038u); // 801D2068
  c->r[29]=R32(c->r[1]+0x00000034u); // 801D206C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D2070
  c->lr=c->r[0]; // 801D2074
  c->r[1]=c->r[1]+0x00000040u; // 801D2078
  return; // 801D207C
}

// fn_801D2080
void f_801D2080(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801D2080
  f_800BFF30(c); return; // 801D2084
}

// fn_801D2088
void f_801D2088(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2088
  c->r[0]=c->lr; // 801D208C
  c->r[8]=R8(c->r[5]+0x00000000u); // 801D2090
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801D2094
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2098
  c->r[7]=R8(c->r[5]+0x00000001u); // 801D209C
  c->r[6]=R8(c->r[5]+0x00000002u); // 801D20A0
  c->r[0]=R8(c->r[5]+0x00000003u); // 801D20A4
  c->r[5]=c->r[1]+0x00000008u; // 801D20A8
  W8(c->r[1]+0x00000008u,c->r[8]); // 801D20AC
  W8(c->r[1]+0x00000009u,c->r[7]); // 801D20B0
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801D20B4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801D20B8
  c->lr=0x801D20C0u; f_800BF0DC(c); // 801D20BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D20C0
  c->lr=c->r[0]; // 801D20C4
  c->r[1]=c->r[1]+0x00000010u; // 801D20C8
  return; // 801D20CC
}

// fn_801D20D0
void f_801D20D0(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[4],31)&0x7FFFFFFCu; // 801D20D0
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801D20D4
  c->r[3]=c->r[3]+c->r[5]; // 801D20D8
  c->r[3]=c->r[3]+c->r[0]; // 801D20DC
  c->r[3]=R8(c->r[3]+0x000000DCu); // 801D20E0
  return; // 801D20E4
}

// fn_801D20E8
void f_801D20E8(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],31)&0x7FFFFFFCu; // 801D20E8
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801D20EC
  c->r[3]=c->r[3]+c->r[6]; // 801D20F0
  c->r[3]=c->r[3]+c->r[0]; // 801D20F4
  W8(c->r[3]+0x000000DCu,c->r[5]); // 801D20F8
  return; // 801D20FC
}

// fn_801D2100
void f_801D2100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2100
  c->r[0]=c->lr; // 801D2104
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D2108
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801D210C
  c->r[31]=c->r[4]|c->r[4]; // 801D2110
  W32(c->r[1]+0x00000078u,c->r[30]); // 801D2114
  c->r[30]=c->r[3]|c->r[3]; // 801D2118
  c->r[3]=c->r[1]+0x00000008u; // 801D211C
  c->lr=0x801D2124u; f_80181904(c); // 801D2120
  c->r[3]=c->r[30]|c->r[30]; // 801D2124
  c->r[4]=c->r[31]|c->r[31]; // 801D2128
  c->r[5]=c->r[1]+0x00000008u; // 801D212C
  c->lr=0x801D2134u; f_801D2F6C(c); // 801D2130
  c->r[3]=c->r[1]+0x00000008u; // 801D2134
  c->r[4]=0u+0xFFFFFFFFu; // 801D2138
  c->lr=0x801D2140u; f_80181960(c); // 801D213C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D2140
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801D2144
  c->r[30]=R32(c->r[1]+0x00000078u); // 801D2148
  c->lr=c->r[0]; // 801D214C
  c->r[1]=c->r[1]+0x00000080u; // 801D2150
  return; // 801D2154
}

// fn_801D2158
void f_801D2158(Ctx* __restrict c) {
  f_801D2100(c); return; // 801D2158
}

// DrawSelf__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
void f_801D215C(Ctx* __restrict c) {
  trace_call(0x801D215Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D215C
  c->r[0]=c->lr; // 801D2160
  W32(c->r[1]+0x00000204u,c->r[0]); // 801D2164
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 801D2168
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 801D216C
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 801D2170
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 801D2174
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[29]);} // 801D2178
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,29,ea,0,0);} // 801D217C
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[28]);} // 801D2180
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,28,ea,0,0);} // 801D2184
  c->r[11]=c->r[1]+0x000001C0u; // 801D2188
  c->lr=0x801D2190u; f_80109F04(c); // 801D218C
  c->r[0]=R32(c->r[3]+0x000000D8u); // 801D2190
  c->r[29]=c->r[3]|c->r[3]; // 801D2194
  cmps(c,0,(int32_t)c->r[0],0); // 801D2198
  if (crb(c,2)) { goto L_801D268C; } // 801D219C
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801D21A0
  cmps(c,0,(int32_t)c->r[0],0); // 801D21A4
  if (crb(c,2)) { goto L_801D268C; } // 801D21A8
  c->r[0]=R32(c->r[3]+0x00000028u); // 801D21AC
  cmps(c,0,(int32_t)c->r[0],0); // 801D21B0
  if (!crb(c,2)) { goto L_801D21BC; } // 801D21B4
  goto L_801D268C; // 801D21B8
L_801D21BC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D21BC
  c->r[12]=R32(c->r[12]+0x00000070u); // 801D21C0
  c->ctr=c->r[12]; // 801D21C4
  if (true) { c->lr=0x801D21CCu; dispatch(c,c->ctr); } // 801D21C8
  c->r[3]=c->r[1]+0x000000CCu; // 801D21CC
  c->lr=0x801D21D4u; f_80181904(c); // 801D21D0
  c->r[4]=c->r[29]|c->r[29]; // 801D21D4
  c->r[3]=c->r[1]+0x00000058u; // 801D21D8
  c->r[5]=c->r[1]+0x000000CCu; // 801D21DC
  c->lr=0x801D21E4u; f_801D2F6C(c); // 801D21E0
  c->r[0]=R8(c->r[29]+0x000000DCu); // 801D21E4
  c->r[3]=c->r[1]+0x00000030u; // 801D21E8
  c->r[4]=c->r[1]+0x00000020u; // 801D21EC
  W8(c->r[1]+0x00000020u,c->r[0]); // 801D21F0
  c->r[0]=R8(c->r[29]+0x000000DDu); // 801D21F4
  W8(c->r[1]+0x00000021u,c->r[0]); // 801D21F8
  c->r[0]=R8(c->r[29]+0x000000DEu); // 801D21FC
  W8(c->r[1]+0x00000022u,c->r[0]); // 801D2200
  c->r[0]=R8(c->r[29]+0x000000DFu); // 801D2204
  W8(c->r[1]+0x00000023u,c->r[0]); // 801D2208
  c->r[5]=R8(c->r[29]+0x000000B9u); // 801D220C
  c->lr=0x801D2214u; f_801DAB70(c); // 801D2210
  c->r[0]=R8(c->r[29]+0x000000E0u); // 801D2214
  c->r[3]=c->r[1]+0x0000002Cu; // 801D2218
  c->r[4]=c->r[1]+0x0000001Cu; // 801D221C
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801D2220
  c->r[0]=R8(c->r[29]+0x000000E1u); // 801D2224
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801D2228
  c->r[0]=R8(c->r[29]+0x000000E2u); // 801D222C
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801D2230
  c->r[0]=R8(c->r[29]+0x000000E3u); // 801D2234
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 801D2238
  c->r[5]=R8(c->r[29]+0x000000B9u); // 801D223C
  c->lr=0x801D2244u; f_801DAB70(c); // 801D2240
  c->r[3]=R32(c->r[1]+0x00000030u); // 801D2244
  c->r[4]=0u+0x00000000u; // 801D2248
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801D224C
  cmpu(c,0,c->r[3],c->r[0]); // 801D2250
  if (crb(c,2)) { goto L_801D225C; } // 801D2254
  c->r[4]=0u+0x00000002u; // 801D2258
L_801D225C:;
  W32(c->r[1]+0x000000ECu,c->r[4]); // 801D225C
  c->r[3]=c->r[1]+0x000000CCu; // 801D2260
  c->lr=0x801D2268u; f_8017F568(c); // 801D2264
  c->r[5]=R32(c->r[1]+0x00000030u); // 801D2268
  c->r[3]=c->r[1]+0x000000CCu; // 801D226C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801D2270
  c->r[4]=c->r[1]+0x00000018u; // 801D2274
  W32(c->r[1]+0x00000018u,c->r[5]); // 801D2278
  c->r[5]=c->r[1]+0x00000014u; // 801D227C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2280
  c->lr=0x801D2288u; f_801D26C4(c); // 801D2284
  c->r[6]=R32(c->r[29]+0x00000028u); // 801D2288
  c->r[3]=c->r[1]+0x00000028u; // 801D228C
  c->r[4]=c->r[1]+0x00000040u; // 801D2290
  c->r[5]=R16(c->r[6]+0x00000010u); // 801D2294
  c->r[0]=R16(c->r[6]+0x00000012u); // 801D2298
  W16(c->r[1]+0x00000040u,c->r[5]); // 801D229C
  W16(c->r[1]+0x00000042u,c->r[0]); // 801D22A0
  c->r[5]=R16(c->r[6]+0x00000014u); // 801D22A4
  c->r[0]=R16(c->r[6]+0x00000016u); // 801D22A8
  W16(c->r[1]+0x00000044u,c->r[5]); // 801D22AC
  W16(c->r[1]+0x00000046u,c->r[0]); // 801D22B0
  c->lr=0x801D22B8u; f_801D19BC(c); // 801D22B4
  c->r[6]=R32(c->r[29]+0x00000028u); // 801D22B8
  c->r[3]=c->r[1]+0x00000024u; // 801D22BC
  c->r[4]=c->r[1]+0x00000038u; // 801D22C0
  c->r[5]=R16(c->r[6]+0x00000018u); // 801D22C4
  c->r[0]=R16(c->r[6]+0x0000001Au); // 801D22C8
  W16(c->r[1]+0x00000038u,c->r[5]); // 801D22CC
  W16(c->r[1]+0x0000003Au,c->r[0]); // 801D22D0
  c->r[5]=R16(c->r[6]+0x0000001Cu); // 801D22D4
  c->r[0]=R16(c->r[6]+0x0000001Eu); // 801D22D8
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 801D22DC
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 801D22E0
  c->lr=0x801D22E8u; f_801D19BC(c); // 801D22E4
  c->r[5]=R32(c->r[1]+0x00000028u); // 801D22E8
  c->r[3]=c->r[1]+0x000000CCu; // 801D22EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D22F0
  c->r[4]=c->r[1]+0x00000010u; // 801D22F4
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D22F8
  c->r[5]=c->r[1]+0x0000000Cu; // 801D22FC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D2300
  c->lr=0x801D2308u; f_8017E4D8(c); // 801D2304
  c->r[3]=c->r[1]+0x000000CCu; // 801D2308
  c->lr=0x801D2310u; f_8017E55C(c); // 801D230C
  c->r[3]=0u+0x00000007u; // 801D2310
  c->r[4]=0u+0x00000000u; // 801D2314
  c->r[5]=0u+0x00000000u; // 801D2318
  c->r[6]=0u+0x00000007u; // 801D231C
  c->r[7]=0u+0x00000000u; // 801D2320
  c->lr=0x801D2328u; f_80107C5C(c); // 801D2324
  c->r[0]=R8(c->r[29]+0x00000101u); // 801D2328
  c->r[0]=rotl(c->r[0],27)&0x00000003u; // 801D232C
  cmps(c,0,(int32_t)c->r[0],2); // 801D2330
  if (crb(c,2)) { goto L_801D23B8; } // 801D2334
  if (!crb(c,0)) { goto L_801D234C; } // 801D2338
  cmps(c,0,(int32_t)c->r[0],0); // 801D233C
  if (crb(c,2)) { goto L_801D2358; } // 801D2340
  if (!crb(c,0)) { goto L_801D23B0; } // 801D2344
  goto L_801D2358; // 801D2348
L_801D234C:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D234C
  if (!crb(c,0)) { goto L_801D2358; } // 801D2350
  goto L_801D23C0; // 801D2354
L_801D2358:;
  c->r[3]=0u+0x55550000u; // 801D2358
  c->r[4]=R8(c->r[29]+0x00000100u); // 801D235C
  c->r[0]=c->r[3]+0x00005556u; // 801D2360
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 801D2364
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801D2368
  c->r[0]=c->r[3]+c->r[0]; // 801D236C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801D2370
  c->r[0]=c->r[4]-c->r[0]; // 801D2374
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D2378
  cmps(c,0,(int32_t)c->r[0],1); // 801D237C
  if (crb(c,2)) { goto L_801D23A0; } // 801D2380
  if (!crb(c,0)) { goto L_801D238C; } // 801D2384
  goto L_801D2398; // 801D2388
L_801D238C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801D238C
  if (!crb(c,0)) { goto L_801D2398; } // 801D2390
  goto L_801D23A8; // 801D2394
L_801D2398:;
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D2398
  goto L_801D23C4; // 801D239C
L_801D23A0:;
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D23A0
  goto L_801D23C4; // 801D23A4
L_801D23A8:;
  {uint32_t ea=c->r[2]+0xFFFF9D5Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801D23A8
  goto L_801D23C4; // 801D23AC
L_801D23B0:;
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D23B0
  goto L_801D23C4; // 801D23B4
L_801D23B8:;
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D23B8
  goto L_801D23C4; // 801D23BC
L_801D23C0:;
  {uint32_t ea=c->r[2]+0xFFFF9D5Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801D23C0
L_801D23C4:;
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D23C4
  c->r[31]=R32(c->r[29]+0x000000D8u); // 801D23C8
  c->f[3]=-c->f[0]; // 801D23CC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D23D0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D23D4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D23D8
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[2]);} // 801D23DC
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[0]); // 801D23E0
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[3]);} // 801D23E4
  c->r[30]=R16(c->r[29]+0x000000FEu); // 801D23E8
  cmps(c,0,(int32_t)c->r[30],0); // 801D23EC
  if (!crb(c,1)) { goto L_801D2680; } // 801D23F0
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D23F4
  goto L_801D2678; // 801D23F8
L_801D23FC:;
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D23FC
  c->r[0]=R32(c->r[1]+0x000000F8u); // 801D2400
  c->r[15]=R8(c->r[1]+0x000000EBu); // 801D2404
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D2408
  c->r[0]=R8(c->r[1]+0x000000E9u); // 801D240C
  W32(c->r[1]+0x00000168u,c->r[15]); // 801D2410
  c->r[15]=R32(c->r[1]+0x000000ECu); // 801D2414
  W8(c->r[1]+0x00000085u,c->r[0]); // 801D2418
  c->r[0]=R32(c->r[1]+0x00000168u); // 801D241C
  W32(c->r[1]+0x00000130u,c->r[15]); // 801D2420
  c->r[15]=R32(c->r[1]+0x000000F0u); // 801D2424
  W8(c->r[1]+0x00000087u,c->r[0]); // 801D2428
  c->r[0]=R32(c->r[1]+0x00000130u); // 801D242C
  W32(c->r[1]+0x00000134u,c->r[15]); // 801D2430
  c->r[15]=R32(c->r[1]+0x000000F4u); // 801D2434
  W32(c->r[1]+0x00000088u,c->r[0]); // 801D2438
  c->r[0]=R32(c->r[1]+0x00000134u); // 801D243C
  W32(c->r[1]+0x00000138u,c->r[15]); // 801D2440
  c->r[15]=R32(c->r[1]+0x000000FCu); // 801D2444
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801D2448
  c->r[0]=R32(c->r[1]+0x00000138u); // 801D244C
  W32(c->r[1]+0x0000013Cu,c->r[15]); // 801D2450
  c->r[15]=R32(c->r[1]+0x00000100u); // 801D2454
  W32(c->r[1]+0x00000090u,c->r[0]); // 801D2458
  c->r[0]=R32(c->r[1]+0x0000013Cu); // 801D245C
  W32(c->r[1]+0x00000140u,c->r[15]); // 801D2460
  c->r[15]=R32(c->r[1]+0x00000104u); // 801D2464
  W32(c->r[1]+0x00000098u,c->r[0]); // 801D2468
  c->r[0]=R32(c->r[1]+0x00000140u); // 801D246C
  W32(c->r[1]+0x00000144u,c->r[15]); // 801D2470
  c->r[15]=R32(c->r[1]+0x00000108u); // 801D2474
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 801D2478
  c->r[0]=R32(c->r[1]+0x00000144u); // 801D247C
  W32(c->r[1]+0x00000148u,c->r[15]); // 801D2480
  c->r[15]=R16(c->r[1]+0x0000010Cu); // 801D2484
  W32(c->r[1]+0x000000A0u,c->r[0]); // 801D2488
  c->r[0]=R32(c->r[1]+0x00000148u); // 801D248C
  W32(c->r[1]+0x0000014Cu,c->r[15]); // 801D2490
  c->r[15]=R8(c->r[1]+0x0000010Eu); // 801D2494
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801D2498
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 801D249C
  W32(c->r[1]+0x00000150u,c->r[15]); // 801D24A0
  c->r[15]=R8(c->r[1]+0x0000010Fu); // 801D24A4
  W16(c->r[1]+0x000000A8u,c->r[0]); // 801D24A8
  c->r[0]=R32(c->r[1]+0x00000150u); // 801D24AC
  W32(c->r[1]+0x00000154u,c->r[15]); // 801D24B0
  c->r[15]=R32(c->r[1]+0x00000114u); // 801D24B4
  W8(c->r[1]+0x000000AAu,c->r[0]); // 801D24B8
  c->r[0]=R32(c->r[1]+0x00000154u); // 801D24BC
  W32(c->r[1]+0x00000158u,c->r[15]); // 801D24C0
  c->r[15]=R32(c->r[1]+0x00000124u); // 801D24C4
  W8(c->r[1]+0x000000ABu,c->r[0]); // 801D24C8
  c->r[0]=R32(c->r[1]+0x00000158u); // 801D24CC
  W32(c->r[1]+0x0000015Cu,c->r[15]); // 801D24D0
  c->r[15]=R32(c->r[1]+0x00000128u); // 801D24D4
  W32(c->r[1]+0x000000B0u,c->r[0]); // 801D24D8
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 801D24DC
  W32(c->r[1]+0x00000160u,c->r[15]); // 801D24E0
  c->r[15]=R32(c->r[1]+0x0000012Cu); // 801D24E4
  W32(c->r[1]+0x000000C0u,c->r[0]); // 801D24E8
  c->r[0]=R32(c->r[1]+0x00000160u); // 801D24EC
  c->r[16]=R32(c->r[1]+0x000000CCu); // 801D24F0
  c->r[17]=R32(c->r[1]+0x000000D0u); // 801D24F4
  c->r[18]=R8(c->r[1]+0x000000D4u); // 801D24F8
  c->r[19]=R8(c->r[1]+0x000000D5u); // 801D24FC
  c->r[20]=R8(c->r[1]+0x000000D6u); // 801D2500
  c->r[21]=R8(c->r[1]+0x000000D7u); // 801D2504
  c->r[22]=R8(c->r[1]+0x000000D8u); // 801D2508
  c->r[23]=R8(c->r[1]+0x000000D9u); // 801D250C
  c->r[24]=R8(c->r[1]+0x000000DAu); // 801D2510
  c->r[25]=R8(c->r[1]+0x000000DBu); // 801D2514
  c->r[26]=R8(c->r[1]+0x000000DCu); // 801D2518
  c->r[27]=R8(c->r[1]+0x000000DDu); // 801D251C
  c->r[28]=R8(c->r[1]+0x000000DEu); // 801D2520
  c->r[12]=R8(c->r[1]+0x000000DFu); // 801D2524
  c->r[11]=R8(c->r[1]+0x000000E0u); // 801D2528
  c->r[10]=R8(c->r[1]+0x000000E1u); // 801D252C
  c->r[9]=R8(c->r[1]+0x000000E2u); // 801D2530
  c->r[8]=R8(c->r[1]+0x000000E3u); // 801D2534
  c->r[7]=R8(c->r[1]+0x000000E4u); // 801D2538
  c->r[6]=R8(c->r[1]+0x000000E5u); // 801D253C
  c->r[5]=R8(c->r[1]+0x000000E6u); // 801D2540
  c->r[4]=R8(c->r[1]+0x000000E7u); // 801D2544
  c->r[3]=R8(c->r[1]+0x000000E8u); // 801D2548
  c->r[14]=R8(c->r[1]+0x000000EAu); // 801D254C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D2550
  {uint32_t ea=c->r[1]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D2554
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2558
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D255C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801D2560
  c->r[0]=c->r[15]|c->r[15]; // 801D2564
  W32(c->r[1]+0x00000164u,c->r[15]); // 801D2568
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 801D256C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[31]);} // 801D2570
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[31]);} // 801D2574
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[31]);} // 801D2578
  W32(c->r[1]+0x00000068u,c->r[16]); // 801D257C
  W32(c->r[1]+0x0000006Cu,c->r[17]); // 801D2580
  W8(c->r[1]+0x00000070u,c->r[18]); // 801D2584
  W8(c->r[1]+0x00000071u,c->r[19]); // 801D2588
  W8(c->r[1]+0x00000072u,c->r[20]); // 801D258C
  W8(c->r[1]+0x00000073u,c->r[21]); // 801D2590
  W8(c->r[1]+0x00000074u,c->r[22]); // 801D2594
  W8(c->r[1]+0x00000075u,c->r[23]); // 801D2598
  W8(c->r[1]+0x00000076u,c->r[24]); // 801D259C
  W8(c->r[1]+0x00000077u,c->r[25]); // 801D25A0
  W8(c->r[1]+0x00000078u,c->r[26]); // 801D25A4
  W8(c->r[1]+0x00000079u,c->r[27]); // 801D25A8
  W8(c->r[1]+0x0000007Au,c->r[28]); // 801D25AC
  W8(c->r[1]+0x0000007Bu,c->r[12]); // 801D25B0
  W8(c->r[1]+0x0000007Cu,c->r[11]); // 801D25B4
  W8(c->r[1]+0x0000007Du,c->r[10]); // 801D25B8
  W8(c->r[1]+0x0000007Eu,c->r[9]); // 801D25BC
  W8(c->r[1]+0x0000007Fu,c->r[8]); // 801D25C0
  W8(c->r[1]+0x00000080u,c->r[7]); // 801D25C4
  W8(c->r[1]+0x00000081u,c->r[6]); // 801D25C8
  W8(c->r[1]+0x00000082u,c->r[5]); // 801D25CC
  W8(c->r[1]+0x00000083u,c->r[4]); // 801D25D0
  W8(c->r[1]+0x00000084u,c->r[3]); // 801D25D4
  W8(c->r[1]+0x00000086u,c->r[14]); // 801D25D8
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[4]);} // 801D25DC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 801D25E0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 801D25E4
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 801D25E8
  W32(c->r[1]+0x000000C8u,c->r[0]); // 801D25EC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 801D25F0
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[31]);} // 801D25F4
  c->r[5]=c->r[31]|c->r[31]; // 801D25F8
  c->r[6]=c->r[30]|c->r[30]; // 801D25FC
  c->r[3]=c->r[1]+0x00000048u; // 801D2600
  c->r[4]=c->r[1]+0x00000068u; // 801D2604
  c->r[7]=c->r[1]+0x00000008u; // 801D2608
  c->lr=0x801D2610u; f_801D2708(c); // 801D260C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2610
  c->r[14]=c->r[3]|c->r[3]; // 801D2614
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2618
  c->r[3]=c->r[1]+0x00000068u; // 801D261C
  c->r[4]=0u+0xFFFFFFFFu; // 801D2620
  c->f[28]=c->ps1[28]=S(c->f[1]-c->f[0]); // 801D2624
  c->lr=0x801D262Cu; f_80181960(c); // 801D2628
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[28]); // 801D262C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2630
  c->r[4]=c->r[31]|c->r[31]; // 801D2634
  c->r[5]=c->r[14]|c->r[14]; // 801D2638
  c->r[3]=c->r[1]+0x000000CCu; // 801D263C
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 801D2640
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801D2644
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 801D2648
  c->lr=0x801D2650u; f_80181CD8(c); // 801D264C
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D2650
  cmps(c,0,(int32_t)c->r[0],0); // 801D2654
  if (crb(c,2)) { goto L_801D266C; } // 801D2658
  c->r[3]=c->r[1]+0x000000CCu; // 801D265C
  c->r[4]=c->r[13]+0xFFFF90F0u; // 801D2660
  c->r[5]=0u+0x00000001u; // 801D2664
  c->lr=0x801D266Cu; f_80181CD8(c); // 801D2668
L_801D266C:;
  c->r[0]=rotl(c->r[14],1)&0xFFFFFFFEu; // 801D266C
  c->r[30]=c->r[30]-c->r[14]; // 801D2670
  c->r[31]=c->r[31]+c->r[0]; // 801D2674
L_801D2678:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D2678
  if (crb(c,1)) { IRQCHK(c); goto L_801D23FC; } // 801D267C
L_801D2680:;
  c->r[3]=c->r[1]+0x000000CCu; // 801D2680
  c->r[4]=0u+0xFFFFFFFFu; // 801D2684
  c->lr=0x801D268Cu; f_80181960(c); // 801D2688
L_801D268C:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 801D268C
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 801D2690
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 801D2694
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 801D2698
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,29,ea,0,0);} // 801D269C
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[29]=RF64(ea);} // 801D26A0
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,28,ea,0,0);} // 801D26A4
  c->r[11]=c->r[1]+0x000001C0u; // 801D26A8
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[28]=RF64(ea);} // 801D26AC
  c->lr=0x801D26B4u; f_80109F50(c); // 801D26B0
  c->r[0]=R32(c->r[1]+0x00000204u); // 801D26B4
  c->lr=c->r[0]; // 801D26B8
  c->r[1]=c->r[1]+0x00000200u; // 801D26BC
  return; // 801D26C0
}

// SetColorMapping__Q34nw4r2ut10CharWriterFQ34nw4r2ut5ColorQ34nw4r2ut5Color
void f_801D26C4(Ctx* __restrict c) {
  trace_call(0x801D26C4u);
  c->r[11]=R8(c->r[4]+0x00000000u); // 801D26C4
  c->r[10]=R8(c->r[4]+0x00000001u); // 801D26C8
  c->r[9]=R8(c->r[4]+0x00000002u); // 801D26CC
  c->r[8]=R8(c->r[4]+0x00000003u); // 801D26D0
  c->r[7]=R8(c->r[5]+0x00000000u); // 801D26D4
  c->r[6]=R8(c->r[5]+0x00000001u); // 801D26D8
  c->r[4]=R8(c->r[5]+0x00000002u); // 801D26DC
  c->r[0]=R8(c->r[5]+0x00000003u); // 801D26E0
  W8(c->r[3]+0x00000018u,c->r[11]); // 801D26E4
  W8(c->r[3]+0x00000019u,c->r[10]); // 801D26E8
  W8(c->r[3]+0x0000001Au,c->r[9]); // 801D26EC
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 801D26F0
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 801D26F4
  W8(c->r[3]+0x0000001Du,c->r[6]); // 801D26F8
  W8(c->r[3]+0x0000001Eu,c->r[4]); // 801D26FC
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801D2700
  f_8017F568(c); return; // 801D2704
}

// CalcLineRectImpl<w>__Q34nw4r3lyt25@unnamed@lyt_textBox_cpp@FPQ34nw4r2ut4RectPQ34nw4r2ut17TextWriterBase<w>PCwifPb_i
void f_801D2708(Ctx* __restrict c) {
  trace_call(0x801D2708u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2708
  c->r[0]=c->lr; // 801D270C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801D2710
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801D2714
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801D2718
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 801D271C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 801D2720
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 801D2724
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 801D2728
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 801D272C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 801D2730
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 801D2734
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 801D2738
  c->r[11]=c->r[1]+0x00000080u; // 801D273C
  c->lr=0x801D2744u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2740
  c->r[0]=0u+0x00000000u; // 801D2744
  c->r[25]=c->r[3]|c->r[3]; // 801D2748
  W32(c->r[1]+0x00000040u,c->r[0]); // 801D274C
  c->f[30]=c->f[1]; // 801D2750
  c->r[26]=c->r[4]|c->r[4]; // 801D2754
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D2758
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D275C
  c->r[27]=c->r[5]|c->r[5]; // 801D2760
  c->r[28]=c->r[6]|c->r[6]; // 801D2764
  W32(c->r[1]+0x00000048u,c->r[0]); // 801D2768
  c->r[29]=c->r[7]|c->r[7]; // 801D276C
  c->r[3]=c->r[1]+0x00000028u; // 801D2770
  c->r[31]=0u+0x00000000u; // 801D2774
  W32(c->r[1]+0x00000038u,c->r[4]); // 801D2778
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 801D277C
  c->r[4]=R32(c->r[4]+0x00000048u); // 801D2780
  c->lr=0x801D2788u; f_80180648(c); // 801D2784
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D2788
  c->r[3]=c->r[26]|c->r[26]; // 801D278C
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2790
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 801D2794
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[0]);} // 801D2798
  c->lr=0x801D27A0u; f_801819B8(c); // 801D279C
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D27A0
  fcmp(c,0,c->f[0],c->f[1]); // 801D27A4
  if (!crb(c,1)) { goto L_801D27B0; } // 801D27A8
  goto L_801D27B4; // 801D27AC
L_801D27B0:;
  c->f[1]=c->f[0]; // 801D27B0
L_801D27B4:;
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 801D27B4
  c->r[3]=c->r[26]|c->r[26]; // 801D27B8
  c->lr=0x801D27C0u; f_801819B8(c); // 801D27BC
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D27C0
  fcmp(c,0,c->f[0],c->f[1]); // 801D27C4
  if (!crb(c,0)) { goto L_801D27D0; } // 801D27C8
  goto L_801D27D4; // 801D27CC
L_801D27D0:;
  c->f[1]=c->f[0]; // 801D27D0
L_801D27D4:;
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D27D4
  c->r[0]=0u+0x00000000u; // 801D27D8
  c->r[3]=c->r[1]+0x00000028u; // 801D27DC
  c->r[12]=c->r[1]+0x0000002Cu; // 801D27E0
  W8(c->r[29]+0x00000000u,c->r[0]); // 801D27E4
  W32(c->r[1]+0x00000028u,c->r[27]); // 801D27E8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D27EC
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D27F0
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D27F4
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D27F8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 801D27FC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801D2800
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801D2804
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D2808
  c->lr=0x801D2810u; f_80109DC0(c); // 801D280C
  c->r[0]=c->r[0]|0x00000000u; // 801D2810
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[28]=c->ps1[28]=RF32(ea);} // 801D2814
  c->r[4]=c->r[3]|c->r[3]; // 801D2818
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[29]=RF64(ea);} // 801D281C
  c->r[24]=0u+0x43300000u; // 801D2820
  goto L_801D2A30; // 801D2824
L_801D2828:;
  c->r[5]=rotl(c->r[4],0)&0x0000FFFFu; // 801D2828
  cmps(c,0,(int32_t)c->r[5],32); // 801D282C
  if (!crb(c,0)) { goto L_801D294C; } // 801D2830
  c->r[0]=cntlz(c->r[31]); // 801D2834
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 801D2838
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801D283C
  c->r[4]=c->r[1]+0x00000008u; // 801D2840
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[28]);} // 801D2844
  c->r[6]=c->r[1]+0x00000038u; // 801D2848
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[28]);} // 801D284C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[28]);} // 801D2850
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 801D2854
  W32(c->r[1]+0x00000048u,c->r[0]); // 801D2858
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[31]);} // 801D285C
  c->r[3]=R32(c->r[26]+0x00000060u); // 801D2860
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2864
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2868
  c->ctr=c->r[12]; // 801D286C
  if (true) { c->lr=0x801D2874u; dispatch(c,c->ctr); } // 801D2870
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 801D2874
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2878
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D287C
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2880
  fcmp(c,0,c->f[0],c->f[1]); // 801D2884
  if (!crb(c,1)) { goto L_801D2890; } // 801D2888
  goto L_801D2894; // 801D288C
L_801D2890:;
  c->f[1]=c->f[0]; // 801D2890
L_801D2894:;
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[1]);} // 801D2894
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2898
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D289C
  fcmp(c,0,c->f[0],c->f[1]); // 801D28A0
  if (!crb(c,1)) { goto L_801D28AC; } // 801D28A4
  goto L_801D28B0; // 801D28A8
L_801D28AC:;
  c->f[1]=c->f[0]; // 801D28AC
L_801D28B0:;
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 801D28B0
  {uint32_t ea=c->r[25]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D28B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D28B8
  fcmp(c,0,c->f[0],c->f[1]); // 801D28BC
  if (!crb(c,0)) { goto L_801D28C8; } // 801D28C0
  goto L_801D28CC; // 801D28C4
L_801D28C8:;
  c->f[1]=c->f[0]; // 801D28C8
L_801D28CC:;
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 801D28CC
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D28D0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D28D4
  fcmp(c,0,c->f[0],c->f[2]); // 801D28D8
  if (!crb(c,0)) { goto L_801D28E4; } // 801D28DC
  goto L_801D28E8; // 801D28E0
L_801D28E4:;
  c->f[2]=c->f[0]; // 801D28E4
L_801D28E8:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D28E8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D28EC
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D28F0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D28F4
  {uint32_t ea=c->r[26]+0x0000002Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801D28F8
  fcmp(c,0,c->f[0],c->f[30]); // 801D28FC
  if (!crb(c,1)) { goto L_801D2910; } // 801D2900
  c->r[0]=0u+0x00000001u; // 801D2904
  W8(c->r[29]+0x00000000u,c->r[0]); // 801D2908
  goto L_801D2A4C; // 801D290C
L_801D2910:;
  cmps(c,0,(int32_t)c->r[3],4); // 801D2910
  if (!crb(c,2)) { goto L_801D2920; } // 801D2914
  c->r[3]=c->r[28]|c->r[28]; // 801D2918
  goto L_801D2AA8; // 801D291C
L_801D2920:;
  cmps(c,0,(int32_t)c->r[3],1); // 801D2920
  if (!crb(c,2)) { goto L_801D2930; } // 801D2924
  c->r[31]=0u+0x00000000u; // 801D2928
  goto L_801D29F8; // 801D292C
L_801D2930:;
  cmps(c,0,(int32_t)c->r[3],2); // 801D2930
  if (!crb(c,2)) { goto L_801D2940; } // 801D2934
  c->r[31]=0u+0x00000001u; // 801D2938
  goto L_801D29F8; // 801D293C
L_801D2940:;
  cmps(c,0,(int32_t)c->r[3],3); // 801D2940
  if (crb(c,2)) { goto L_801D2A4C; } // 801D2944
  goto L_801D29F8; // 801D2948
L_801D294C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D294C
  if (crb(c,2)) { goto L_801D295C; } // 801D2950
  {uint32_t ea=c->r[26]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2954
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801D2958
L_801D295C:;
  c->r[0]=R8(c->r[26]+0x00000043u); // 801D295C
  c->r[31]=0u+0x00000001u; // 801D2960
  cmps(c,0,(int32_t)c->r[0],0); // 801D2964
  if (crb(c,2)) { goto L_801D2978; } // 801D2968
  {uint32_t ea=c->r[26]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D296C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801D2970
  goto L_801D29B0; // 801D2974
L_801D2978:;
  c->r[3]=R32(c->r[26]+0x00000048u); // 801D2978
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801D297C
  {uint32_t ea=c->r[26]+0x00000024u; c->f[27]=c->ps1[27]=RF32(ea);} // 801D2980
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2984
  c->r[12]=R32(c->r[12]+0x00000048u); // 801D2988
  c->ctr=c->r[12]; // 801D298C
  if (true) { c->lr=0x801D2994u; dispatch(c,c->ctr); } // 801D2990
  c->r[0]=c->r[3]^0x80000000u; // 801D2994
  W32(c->r[1]+0x00000050u,c->r[24]); // 801D2998
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D299C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801D29A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801D29A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 801D29A8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801D29AC
L_801D29B0:;
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D29B0
  fcmp(c,0,c->f[0],c->f[31]); // 801D29B4
  if (!crb(c,1)) { goto L_801D29C0; } // 801D29B8
  c->f[0]=c->f[31]; // 801D29BC
L_801D29C0:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D29C0
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 801D29C4
  fcmp(c,0,c->f[2],c->f[31]); // 801D29C8
  if (!crb(c,0)) { goto L_801D29D4; } // 801D29CC
  c->f[2]=c->f[31]; // 801D29D0
L_801D29D4:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801D29D4
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D29D8
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[2]);} // 801D29DC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D29E0
  fcmp(c,0,c->f[0],c->f[30]); // 801D29E4
  if (!crb(c,1)) { goto L_801D29F8; } // 801D29E8
  c->r[0]=0u+0x00000001u; // 801D29EC
  W8(c->r[29]+0x00000000u,c->r[0]); // 801D29F0
  goto L_801D2A4C; // 801D29F4
L_801D29F8:;
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D29F8
  c->r[3]=c->r[1]+0x00000028u; // 801D29FC
  c->r[12]=c->r[1]+0x0000002Cu; // 801D2A00
  c->lr=0x801D2A08u; f_80109DC0(c); // 801D2A04
  c->r[0]=c->r[0]|0x00000000u; // 801D2A08
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D2A0C
  c->r[4]=c->r[3]|c->r[3]; // 801D2A10
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2A14
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2A18
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2A1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 801D2A20
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801D2A24
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801D2A28
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D2A2C
L_801D2A30:;
  c->r[7]=R32(c->r[1]+0x00000028u); // 801D2A30
  c->r[3]=c->r[7]-c->r[27]; // 801D2A34
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801D2A38
  c->r[0]=c->r[0]+c->r[3]; // 801D2A3C
  c->r[0]=sraw(c,c->r[0],1); // 801D2A40
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801D2A44
  if (!crb(c,1)) { IRQCHK(c); goto L_801D2828; } // 801D2A48
L_801D2A4C:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801D2A4C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2A50
  if (crb(c,2)) { goto L_801D2A94; } // 801D2A54
  cmps(c,0,(int32_t)c->r[30],0); // 801D2A58
  if (crb(c,2)) { goto L_801D2A94; } // 801D2A5C
  c->r[3]=c->r[30]-c->r[27]; // 801D2A60
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D2A64
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2A68
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801D2A6C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2A70
  c->r[0]=c->r[0]+c->r[3]; // 801D2A74
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2A78
  c->r[3]=sraw(c,c->r[0],1); // 801D2A7C
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[3]);} // 801D2A80
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 801D2A84
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 801D2A88
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D2A8C
  goto L_801D2AA8; // 801D2A90
L_801D2A94:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 801D2A94
  c->r[3]=c->r[0]-c->r[27]; // 801D2A98
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801D2A9C
  c->r[0]=c->r[0]+c->r[3]; // 801D2AA0
  c->r[3]=sraw(c,c->r[0],1); // 801D2AA4
L_801D2AA8:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801D2AA8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801D2AAC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 801D2AB0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 801D2AB4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 801D2AB8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 801D2ABC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 801D2AC0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 801D2AC4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 801D2AC8
  c->r[11]=c->r[1]+0x00000080u; // 801D2ACC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 801D2AD0
  c->lr=0x801D2AD8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2AD4
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801D2AD8
  c->lr=c->r[0]; // 801D2ADC
  c->r[1]=c->r[1]+0x000000D0u; // 801D2AE0
  return; // 801D2AE4
}

// fn_801D2AE8
void f_801D2AE8(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x000000FCu); // 801D2AE8
  c->r[0]=cntlz(c->r[3]); // 801D2AEC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801D2AF0
  c->r[4]=rotl(c->r[0],27)&0x00000001u; // 801D2AF4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D2AF8
  c->r[3]=0u-c->r[4]; // 801D2AFC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2B00
  c->r[3]=c->r[0]&~c->r[3]; // 801D2B04
  return; // 801D2B08
}

// fn_801D2B0C
void f_801D2B0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2B0C
  c->r[0]=c->lr; // 801D2B10
  cmps(c,0,(int32_t)c->r[4],0); // 801D2B14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2B18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2B1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2B20
  c->r[30]=c->r[4]|c->r[4]; // 801D2B24
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2B28
  c->r[29]=c->r[3]|c->r[3]; // 801D2B2C
  if (crb(c,2)) { goto L_801D2BB4; } // 801D2B30
  c->r[4]=c->r[4]+0x00000001u; // 801D2B34
  c->r[0]=R16(c->r[3]+0x000000FCu); // 801D2B38
  c->r[31]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801D2B3C
  cmpu(c,0,c->r[31],c->r[0]); // 801D2B40
  if (!crb(c,1)) { goto L_801D2BB4; } // 801D2B44
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2B48
  c->r[12]=R32(c->r[12]+0x00000078u); // 801D2B4C
  c->ctr=c->r[12]; // 801D2B50
  if (true) { c->lr=0x801D2B58u; dispatch(c,c->ctr); } // 801D2B54
  c->r[0]=c->r[30]+0x00000001u; // 801D2B58
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D2B5C
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D2B60
  c->lr=0x801D2B68u; f_80128068(c); // 801D2B64
  cmps(c,0,(int32_t)c->r[3],0); // 801D2B68
  if (!crb(c,2)) { goto L_801D2B78; } // 801D2B6C
  c->r[3]=0u+0x00000000u; // 801D2B70
  goto L_801D2BA4; // 801D2B74
L_801D2B78:;
  c->r[0]=c->r[30]+0x00000001u; // 801D2B78
  c->r[5]=c->r[3]|c->r[3]; // 801D2B7C
  c->r[4]=0u+0x00000000u; // 801D2B80
  c->ctr=c->r[0]; // 801D2B84
  cmpu(c,0,c->r[0],0x00000000u); // 801D2B88
  if (!crb(c,1)) { goto L_801D2BA4; } // 801D2B8C
L_801D2B90:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D2B90
  if (crb(c,2)) { goto L_801D2B9C; } // 801D2B94
  W16(c->r[5]+0x00000000u,c->r[4]); // 801D2B98
L_801D2B9C:;
  c->r[5]=c->r[5]+0x00000002u; // 801D2B9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2B90; } // 801D2BA0
L_801D2BA4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D2BA4
  W32(c->r[29]+0x000000D8u,c->r[3]); // 801D2BA8
  if (crb(c,2)) { goto L_801D2BB4; } // 801D2BAC
  W16(c->r[29]+0x000000FCu,c->r[31]); // 801D2BB0
L_801D2BB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2BB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2BB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2BBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2BC0
  c->lr=c->r[0]; // 801D2BC4
  c->r[1]=c->r[1]+0x00000020u; // 801D2BC8
  return; // 801D2BCC
}

// fn_801D2BD0
void f_801D2BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2BD0
  c->r[0]=c->lr; // 801D2BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2BD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2BDC
  c->r[31]=c->r[3]|c->r[3]; // 801D2BE0
  c->r[4]=R32(c->r[3]+0x000000D8u); // 801D2BE4
  cmps(c,0,(int32_t)c->r[4],0); // 801D2BE8
  if (crb(c,2)) { goto L_801D2C08; } // 801D2BEC
  if (crb(c,2)) { goto L_801D2BFC; } // 801D2BF0
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D2BF4
  c->lr=0x801D2BFCu; f_80128078(c); // 801D2BF8
L_801D2BFC:;
  c->r[0]=0u+0x00000000u; // 801D2BFC
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801D2C00
  W16(c->r[31]+0x000000FCu,c->r[0]); // 801D2C04
L_801D2C08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2C08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2C0C
  c->lr=c->r[0]; // 801D2C10
  c->r[1]=c->r[1]+0x00000010u; // 801D2C14
  return; // 801D2C18
}

// fn_801D2C1C
void f_801D2C1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2C1C
  c->r[0]=c->lr; // 801D2C20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2C24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2C28
  c->r[31]=c->r[3]|c->r[3]; // 801D2C2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2C30
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2C34
  c->r[29]=c->r[5]|c->r[5]; // 801D2C38
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D2C3C
  c->r[28]=c->r[4]|c->r[4]; // 801D2C40
  c->r[3]=c->r[28]|c->r[28]; // 801D2C44
  c->lr=0x801D2C4Cu; f_801167A4(c); // 801D2C48
  c->r[6]=R32(c->r[31]+0x000000D8u); // 801D2C4C
  cmps(c,0,(int32_t)c->r[6],0); // 801D2C50
  if (!crb(c,2)) { goto L_801D2C60; } // 801D2C54
  c->r[3]=0u+0x00000000u; // 801D2C58
  goto L_801D2CD8; // 801D2C5C
L_801D2C60:;
  c->r[4]=R16(c->r[31]+0x000000FCu); // 801D2C60
  c->r[0]=cntlz(c->r[4]); // 801D2C64
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801D2C68
  c->r[5]=rotl(c->r[0],27)&0x00000001u; // 801D2C6C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D2C70
  c->r[4]=0u-c->r[5]; // 801D2C74
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2C78
  c->r[0]=c->r[0]&~c->r[4]; // 801D2C7C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2C80
  cmpu(c,0,c->r[29],c->r[0]); // 801D2C84
  if (crb(c,0)) { goto L_801D2C94; } // 801D2C88
  c->r[3]=0u+0x00000000u; // 801D2C8C
  goto L_801D2CD8; // 801D2C90
L_801D2C94:;
  c->r[0]=c->r[0]-c->r[29]; // 801D2C94
  c->r[30]=c->r[3]|c->r[3]; // 801D2C98
  cmpu(c,0,c->r[3],c->r[0]); // 801D2C9C
  if (!crb(c,1)) { goto L_801D2CA8; } // 801D2CA0
  c->r[30]=c->r[0]|c->r[0]; // 801D2CA4
L_801D2CA8:;
  c->r[0]=rotl(c->r[29],1)&0x0001FFFEu; // 801D2CA8
  c->r[4]=c->r[28]|c->r[28]; // 801D2CAC
  c->r[3]=c->r[6]+c->r[0]; // 801D2CB0
  c->r[5]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801D2CB4
  c->lr=0x801D2CBCu; f_80004338(c); // 801D2CB8
  c->r[0]=c->r[29]+c->r[30]; // 801D2CBC
  c->r[4]=R32(c->r[31]+0x000000D8u); // 801D2CC0
  W16(c->r[31]+0x000000FEu,c->r[0]); // 801D2CC4
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 801D2CC8
  c->r[5]=0u+0x00000000u; // 801D2CCC
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801D2CD0
  W16(c->r[4]+c->r[0],c->r[5]); // 801D2CD4
L_801D2CD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2CD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2CDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2CE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2CE4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D2CE8
  c->lr=c->r[0]; // 801D2CEC
  c->r[1]=c->r[1]+0x00000020u; // 801D2CF0
  return; // 801D2CF4
}

// fn_801D2CF8
void f_801D2CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2CF8
  c->r[0]=c->lr; // 801D2CFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2D00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2D04
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2D08
  c->r[30]=c->r[5]|c->r[5]; // 801D2D0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2D10
  c->r[29]=c->r[3]|c->r[3]; // 801D2D14
  c->r[8]=R32(c->r[3]+0x000000D8u); // 801D2D18
  cmps(c,0,(int32_t)c->r[8],0); // 801D2D1C
  if (!crb(c,2)) { goto L_801D2D2C; } // 801D2D20
  c->r[3]=0u+0x00000000u; // 801D2D24
  goto L_801D2DA0; // 801D2D28
L_801D2D2C:;
  c->r[3]=R16(c->r[3]+0x000000FCu); // 801D2D2C
  c->r[0]=cntlz(c->r[3]); // 801D2D30
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801D2D34
  c->r[7]=rotl(c->r[0],27)&0x00000001u; // 801D2D38
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D2D3C
  c->r[3]=0u-c->r[7]; // 801D2D40
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2D44
  c->r[0]=c->r[0]&~c->r[3]; // 801D2D48
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D2D4C
  cmpu(c,0,c->r[5],c->r[0]); // 801D2D50
  if (crb(c,0)) { goto L_801D2D60; } // 801D2D54
  c->r[3]=0u+0x00000000u; // 801D2D58
  goto L_801D2DA0; // 801D2D5C
L_801D2D60:;
  c->r[0]=c->r[0]-c->r[5]; // 801D2D60
  c->r[31]=c->r[6]|c->r[6]; // 801D2D64
  cmpu(c,0,c->r[6],c->r[0]); // 801D2D68
  if (!crb(c,1)) { goto L_801D2D74; } // 801D2D6C
  c->r[31]=c->r[0]|c->r[0]; // 801D2D70
L_801D2D74:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 801D2D74
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801D2D78
  c->r[3]=c->r[8]+c->r[0]; // 801D2D7C
  c->lr=0x801D2D84u; f_80004338(c); // 801D2D80
  c->r[0]=c->r[30]+c->r[31]; // 801D2D84
  c->r[4]=R32(c->r[29]+0x000000D8u); // 801D2D88
  W16(c->r[29]+0x000000FEu,c->r[0]); // 801D2D8C
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 801D2D90
  c->r[5]=0u+0x00000000u; // 801D2D94
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 801D2D98
  W16(c->r[4]+c->r[0],c->r[5]); // 801D2D9C
L_801D2DA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2DA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2DA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2DA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2DAC
  c->lr=c->r[0]; // 801D2DB0
  c->r[1]=c->r[1]+0x00000020u; // 801D2DB4
  return; // 801D2DB8
}

// fn_801D2DBC
void f_801D2DBC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801D2DBC
  return; // 801D2DC0
}

// fn_801D2DC4
void f_801D2DC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2DC4
  c->r[0]=c->lr; // 801D2DC8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D2DCC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801D2DD0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801D2DD4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D2DD8
  W32(c->r[1]+0x00000038u,c->r[30]); // 801D2DDC
  c->r[30]=c->r[4]|c->r[4]; // 801D2DE0
  W32(c->r[1]+0x00000034u,c->r[29]); // 801D2DE4
  c->r[29]=c->r[3]|c->r[3]; // 801D2DE8
  c->r[0]=R8(c->r[3]+0x00000101u); // 801D2DEC
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801D2DF0
  if (crb(c,2)) { goto L_801D2E34; } // 801D2DF4
  c->r[31]=R32(c->r[3]+0x000000E4u); // 801D2DF8
  cmps(c,0,(int32_t)c->r[31],0); // 801D2DFC
  if (crb(c,2)) { goto L_801D2E28; } // 801D2E00
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D2E04
  c->r[3]=c->r[31]|c->r[31]; // 801D2E08
  c->r[4]=0u+0xFFFFFFFFu; // 801D2E0C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D2E10
  c->ctr=c->r[12]; // 801D2E14
  if (true) { c->lr=0x801D2E1Cu; dispatch(c,c->ctr); } // 801D2E18
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D2E1C
  c->r[4]=c->r[31]|c->r[31]; // 801D2E20
  c->lr=0x801D2E28u; f_80128078(c); // 801D2E24
L_801D2E28:;
  c->r[0]=R8(c->r[29]+0x00000101u); // 801D2E28
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 801D2E2C
  W8(c->r[29]+0x00000101u,c->r[0]); // 801D2E30
L_801D2E34:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D2E34
  W32(c->r[29]+0x000000E4u,c->r[30]); // 801D2E38
  if (crb(c,2)) { goto L_801D2EB0; } // 801D2E3C
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D2E40
  c->r[3]=c->r[30]|c->r[30]; // 801D2E44
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2E48
  c->ctr=c->r[12]; // 801D2E4C
  if (true) { c->lr=0x801D2E54u; dispatch(c,c->ctr); } // 801D2E50
  c->r[0]=c->r[3]^0x80000000u; // 801D2E54
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801D2E58
  c->r[31]=0u+0x43300000u; // 801D2E5C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D2E60
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2E64
  W32(c->r[1]+0x00000018u,c->r[31]); // 801D2E68
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=RF64(ea);} // 801D2E6C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801D2E70
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D2E74
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 801D2E78
  c->ctr=c->r[12]; // 801D2E7C
  if (true) { c->lr=0x801D2E84u; dispatch(c,c->ctr); } // 801D2E80
  c->r[0]=c->r[3]^0x80000000u; // 801D2E84
  W32(c->r[1]+0x00000020u,c->r[31]); // 801D2E88
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[1]=RF64(ea);} // 801D2E8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2E90
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801D2E94
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 801D2E98
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D2E9C
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[31]);} // 801D2EA0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D2EA4
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 801D2EA8
  goto L_801D2EC4; // 801D2EAC
L_801D2EB0:;
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2EB0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801D2EB4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D2EB8
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 801D2EBC
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 801D2EC0
L_801D2EC4:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801D2EC4
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D2EC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801D2ECC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D2ED0
  c->r[30]=R32(c->r[1]+0x00000038u); // 801D2ED4
  c->r[29]=R32(c->r[1]+0x00000034u); // 801D2ED8
  c->lr=c->r[0]; // 801D2EDC
  c->r[1]=c->r[1]+0x00000050u; // 801D2EE0
  return; // 801D2EE4
}

// LoadMtx__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
void f_801D2EE8(Ctx* __restrict c) {
  trace_call(0x801D2EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2EE8
  c->r[0]=c->lr; // 801D2EEC
  c->r[5]=c->r[3]|c->r[3]; // 801D2EF0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D2EF4
  c->r[0]=R8(c->r[4]+0x00000050u); // 801D2EF8
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801D2EFC
  if (crb(c,2)) { goto L_801D2F18; } // 801D2F00
  c->r[3]=c->r[4]+0x00000004u; // 801D2F04
  c->r[4]=c->r[5]+0x00000084u; // 801D2F08
  c->r[5]=c->r[1]+0x00000008u; // 801D2F0C
  c->lr=0x801D2F14u; f_800EC0F4(c); // 801D2F10
  goto L_801D2F24; // 801D2F14
L_801D2F18:;
  c->r[3]=c->r[3]+0x00000084u; // 801D2F18
  c->r[4]=c->r[1]+0x00000008u; // 801D2F1C
  c->lr=0x801D2F24u; f_800EC0C0(c); // 801D2F20
L_801D2F24:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2F24
  c->r[3]=c->r[1]+0x00000008u; // 801D2F28
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2F2C
  c->r[4]=0u+0x00000000u; // 801D2F30
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2F34
  c->f[2]=-c->f[2]; // 801D2F38
  c->f[1]=-c->f[1]; // 801D2F3C
  c->f[0]=-c->f[0]; // 801D2F40
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D2F44
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D2F48
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801D2F4C
  c->lr=0x801D2F54u; f_80108934(c); // 801D2F50
  c->r[3]=0u+0x00000000u; // 801D2F54
  c->lr=0x801D2F5Cu; f_80108A3C(c); // 801D2F58
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D2F5C
  c->lr=c->r[0]; // 801D2F60
  c->r[1]=c->r[1]+0x00000040u; // 801D2F64
  return; // 801D2F68
}

// GetTextDrawRect__Q34nw4r3lyt7TextBoxCFPQ34nw4r2ut17TextWriterBase<w>
void f_801D2F6C(Ctx* __restrict c) {
  trace_call(0x801D2F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2F6C
  c->r[0]=c->lr; // 801D2F70
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2F74
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801D2F78
  c->r[0]=R32(c->r[4]+0x000000E4u); // 801D2F7C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801D2F80
  c->r[31]=c->r[5]|c->r[5]; // 801D2F84
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2F88
  W32(c->r[1]+0x00000098u,c->r[30]); // 801D2F8C
  c->r[30]=c->r[4]|c->r[4]; // 801D2F90
  {uint32_t ea=c->r[4]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2F94
  W32(c->r[1]+0x00000094u,c->r[29]); // 801D2F98
  c->r[29]=c->r[3]|c->r[3]; // 801D2F9C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801D2FA0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D2FA4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801D2FA8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D2FAC
  c->r[3]=c->r[31]|c->r[31]; // 801D2FB0
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 801D2FB4
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[0]);} // 801D2FB8
  W32(c->r[5]+0x00000048u,c->r[0]); // 801D2FBC
  c->lr=0x801D2FC4u; f_8017EFB4(c); // 801D2FC0
  c->r[0]=R32(c->r[30]+0x000000F8u); // 801D2FC4
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2FC8
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2FCC
  cmps(c,0,(int32_t)c->r[0],0); // 801D2FD0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801D2FD4
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 801D2FD8
  if (crb(c,2)) { goto L_801D2FE4; } // 801D2FDC
  W32(c->r[31]+0x00000060u,c->r[0]); // 801D2FE0
L_801D2FE4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801D2FE4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2FE8
  W8(c->r[1]+0x00000020u,c->r[0]); // 801D2FEC
  c->r[6]=R16(c->r[30]+0x000000FEu); // 801D2FF0
  c->r[0]=R8(c->r[31]+0x00000001u); // 801D2FF4
  c->r[5]=R32(c->r[30]+0x000000D8u); // 801D2FF8
  W8(c->r[1]+0x00000021u,c->r[0]); // 801D2FFC
  c->r[0]=R8(c->r[31]+0x00000002u); // 801D3000
  W8(c->r[1]+0x00000022u,c->r[0]); // 801D3004
  c->r[0]=R8(c->r[31]+0x00000003u); // 801D3008
  W8(c->r[1]+0x00000023u,c->r[0]); // 801D300C
  c->r[0]=R8(c->r[31]+0x00000004u); // 801D3010
  W8(c->r[1]+0x00000024u,c->r[0]); // 801D3014
  c->r[0]=R8(c->r[31]+0x00000005u); // 801D3018
  W8(c->r[1]+0x00000025u,c->r[0]); // 801D301C
  c->r[0]=R8(c->r[31]+0x00000006u); // 801D3020
  W8(c->r[1]+0x00000026u,c->r[0]); // 801D3024
  c->r[0]=R8(c->r[31]+0x00000007u); // 801D3028
  W8(c->r[1]+0x00000027u,c->r[0]); // 801D302C
  c->r[0]=R8(c->r[31]+0x00000008u); // 801D3030
  W8(c->r[1]+0x00000028u,c->r[0]); // 801D3034
  c->r[0]=R8(c->r[31]+0x00000009u); // 801D3038
  W8(c->r[1]+0x00000029u,c->r[0]); // 801D303C
  c->r[0]=R8(c->r[31]+0x0000000Au); // 801D3040
  W8(c->r[1]+0x0000002Au,c->r[0]); // 801D3044
  c->r[0]=R8(c->r[31]+0x0000000Bu); // 801D3048
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 801D304C
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801D3050
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801D3054
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801D3058
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801D305C
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801D3060
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801D3064
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801D3068
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 801D306C
  c->r[0]=R8(c->r[31]+0x00000010u); // 801D3070
  W8(c->r[1]+0x00000030u,c->r[0]); // 801D3074
  c->r[0]=R8(c->r[31]+0x00000011u); // 801D3078
  W8(c->r[1]+0x00000031u,c->r[0]); // 801D307C
  c->r[0]=R8(c->r[31]+0x00000012u); // 801D3080
  W8(c->r[1]+0x00000032u,c->r[0]); // 801D3084
  c->r[0]=R8(c->r[31]+0x00000013u); // 801D3088
  W8(c->r[1]+0x00000033u,c->r[0]); // 801D308C
  c->r[0]=R8(c->r[31]+0x00000014u); // 801D3090
  W8(c->r[1]+0x00000034u,c->r[0]); // 801D3094
  c->r[0]=R8(c->r[31]+0x00000015u); // 801D3098
  W8(c->r[1]+0x00000035u,c->r[0]); // 801D309C
  c->r[0]=R8(c->r[31]+0x00000016u); // 801D30A0
  W8(c->r[1]+0x00000036u,c->r[0]); // 801D30A4
  c->r[0]=R8(c->r[31]+0x00000017u); // 801D30A8
  W8(c->r[1]+0x00000037u,c->r[0]); // 801D30AC
  c->r[0]=R8(c->r[31]+0x00000018u); // 801D30B0
  W8(c->r[1]+0x00000038u,c->r[0]); // 801D30B4
  c->r[0]=R8(c->r[31]+0x00000019u); // 801D30B8
  W8(c->r[1]+0x00000039u,c->r[0]); // 801D30BC
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801D30C0
  W8(c->r[1]+0x0000003Au,c->r[0]); // 801D30C4
  c->r[0]=R8(c->r[31]+0x0000001Bu); // 801D30C8
  W8(c->r[1]+0x0000003Bu,c->r[0]); // 801D30CC
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 801D30D0
  W8(c->r[1]+0x0000003Cu,c->r[0]); // 801D30D4
  c->r[0]=R8(c->r[31]+0x0000001Du); // 801D30D8
  W8(c->r[1]+0x0000003Du,c->r[0]); // 801D30DC
  c->r[0]=R8(c->r[31]+0x0000001Eu); // 801D30E0
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 801D30E4
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 801D30E8
  W8(c->r[1]+0x0000003Fu,c->r[0]); // 801D30EC
  c->r[0]=R32(c->r[31]+0x00000020u); // 801D30F0
  W32(c->r[1]+0x00000040u,c->r[0]); // 801D30F4
  c->r[3]=R32(c->r[31]+0x00000024u); // 801D30F8
  c->r[0]=R32(c->r[31]+0x00000028u); // 801D30FC
  W32(c->r[1]+0x00000044u,c->r[3]); // 801D3100
  W32(c->r[1]+0x00000048u,c->r[0]); // 801D3104
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801D3108
  c->r[0]=R32(c->r[31]+0x00000030u); // 801D310C
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801D3110
  W32(c->r[1]+0x00000050u,c->r[0]); // 801D3114
  c->r[0]=R32(c->r[31]+0x00000034u); // 801D3118
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D311C
  c->r[3]=R32(c->r[31]+0x00000038u); // 801D3120
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801D3124
  W32(c->r[1]+0x00000058u,c->r[3]); // 801D3128
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801D312C
  c->r[0]=R8(c->r[31]+0x00000040u); // 801D3130
  W8(c->r[1]+0x00000060u,c->r[0]); // 801D3134
  c->r[0]=R8(c->r[31]+0x00000041u); // 801D3138
  W8(c->r[1]+0x00000061u,c->r[0]); // 801D313C
  c->r[0]=R8(c->r[31]+0x00000042u); // 801D3140
  W8(c->r[1]+0x00000062u,c->r[0]); // 801D3144
  c->r[0]=R8(c->r[31]+0x00000043u); // 801D3148
  W8(c->r[1]+0x00000063u,c->r[0]); // 801D314C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3150
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801D3154
  c->r[0]=R32(c->r[31]+0x00000048u); // 801D3158
  W32(c->r[1]+0x00000068u,c->r[0]); // 801D315C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3160
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 801D3164
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3168
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 801D316C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3170
  c->r[3]=c->r[29]|c->r[29]; // 801D3174
  c->r[4]=c->r[1]+0x00000020u; // 801D3178
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 801D317C
  c->r[0]=R32(c->r[31]+0x00000058u); // 801D3180
  W32(c->r[1]+0x00000078u,c->r[0]); // 801D3184
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 801D3188
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801D318C
  c->r[0]=R32(c->r[31]+0x00000060u); // 801D3190
  W32(c->r[1]+0x00000080u,c->r[0]); // 801D3194
  c->lr=0x801D319Cu; f_801D32F0(c); // 801D3198
  c->r[3]=c->r[1]+0x00000020u; // 801D319C
  c->r[4]=0u+0xFFFFFFFFu; // 801D31A0
  c->lr=0x801D31A8u; f_80181960(c); // 801D31A4
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D31A8
  c->r[3]=c->r[30]|c->r[30]; // 801D31AC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D31B0
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D31B4
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D31B8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801D31BC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D31C0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801D31C4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D31C8
  c->lr=0x801D31D0u; f_801CFF28(c); // 801D31CC
  c->r[5]=0u+0x55550000u; // 801D31D0
  c->r[6]=R8(c->r[30]+0x00000100u); // 801D31D4
  c->r[0]=c->r[5]+0x00005556u; // 801D31D8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D31DC
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 801D31E0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D31E4
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D31E8
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801D31EC
  W32(c->r[1]+0x00000014u,c->r[4]); // 801D31F0
  c->r[0]=c->r[5]+c->r[0]; // 801D31F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801D31F8
  c->r[0]=c->r[6]-c->r[0]; // 801D31FC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D3200
  cmps(c,0,(int32_t)c->r[0],1); // 801D3204
  if (crb(c,2)) { goto L_801D3228; } // 801D3208
  if (!crb(c,0)) { goto L_801D3214; } // 801D320C
  goto L_801D3220; // 801D3210
L_801D3214:;
  cmps(c,0,(int32_t)c->r[0],3); // 801D3214
  if (!crb(c,0)) { goto L_801D3220; } // 801D3218
  goto L_801D3230; // 801D321C
L_801D3220:;
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D3220
  goto L_801D3234; // 801D3224
L_801D3228:;
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D3228
  goto L_801D3234; // 801D322C
L_801D3230:;
  {uint32_t ea=c->r[2]+0xFFFF9D5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D3230
L_801D3234:;
  c->r[3]=0u+0x55550000u; // 801D3234
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3238
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D323C
  c->r[0]=c->r[3]+0x00005556u; // 801D3240
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 801D3244
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3248
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801D324C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 801D3250
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801D3254
  c->r[0]=c->r[3]+c->r[0]; // 801D3258
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801D325C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D3260
  cmps(c,0,(int32_t)c->r[0],1); // 801D3264
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D3268
  if (crb(c,2)) { goto L_801D328C; } // 801D326C
  if (!crb(c,0)) { goto L_801D3278; } // 801D3270
  goto L_801D3284; // 801D3274
L_801D3278:;
  cmps(c,0,(int32_t)c->r[0],3); // 801D3278
  if (!crb(c,0)) { goto L_801D3284; } // 801D327C
  goto L_801D3294; // 801D3280
L_801D3284:;
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D3284
  goto L_801D3298; // 801D3288
L_801D328C:;
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D328C
  goto L_801D3298; // 801D3290
L_801D3294:;
  {uint32_t ea=c->r[2]+0xFFFF9D5Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801D3294
L_801D3298:;
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3298
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801D329C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D32A0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801D32A4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D32A8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 801D32AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D32B0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D32B4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[5]); // 801D32B8
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 801D32BC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801D32C0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 801D32C4
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 801D32C8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801D32CC
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D32D0
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801D32D4
  c->r[30]=R32(c->r[1]+0x00000098u); // 801D32D8
  c->r[29]=R32(c->r[1]+0x00000094u); // 801D32DC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801D32E0
  c->lr=c->r[0]; // 801D32E4
  c->r[1]=c->r[1]+0x000000A0u; // 801D32E8
  return; // 801D32EC
}

// fn_801D32F0
void f_801D32F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D32F0
  c->r[0]=c->lr; // 801D32F4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D32F8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801D32FC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801D3300
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801D3304
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801D3308
  c->r[11]=c->r[1]+0x00000040u; // 801D330C
  c->lr=0x801D3314u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3310
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D3314
  c->f[30]=c->f[1]; // 801D3318
  c->r[27]=c->r[3]|c->r[3]; // 801D331C
  c->r[28]=c->r[4]|c->r[4]; // 801D3320
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[31]);} // 801D3324
  c->r[29]=c->r[5]|c->r[5]; // 801D3328
  c->r[30]=c->r[6]|c->r[6]; // 801D332C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[31]);} // 801D3330
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 801D3334
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 801D3338
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[31]);} // 801D333C
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[31]);} // 801D3340
L_801D3344:;
  c->f[1]=c->f[30]; // 801D3344
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 801D3348
  c->r[4]=c->r[28]|c->r[28]; // 801D334C
  c->r[5]=c->r[29]|c->r[29]; // 801D3350
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 801D3354
  c->r[6]=c->r[30]|c->r[30]; // 801D3358
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 801D335C
  c->r[3]=c->r[1]+0x00000010u; // 801D3360
  c->r[7]=c->r[1]+0x00000008u; // 801D3364
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 801D3368
  c->lr=0x801D3370u; f_801D2708(c); // 801D336C
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D3370
  c->r[31]=c->r[3]|c->r[3]; // 801D3374
  cmps(c,0,(int32_t)c->r[0],0); // 801D3378
  if (crb(c,2)) { goto L_801D339C; } // 801D337C
  c->f[1]=c->f[30]; // 801D3380
  c->r[4]=c->r[28]|c->r[28]; // 801D3384
  c->r[3]=c->r[1]+0x00000010u; // 801D3388
  c->r[7]=c->r[1]+0x00000008u; // 801D338C
  c->r[5]=c->r[13]+0xFFFF90F0u; // 801D3390
  c->r[6]=0u+0x00000001u; // 801D3394
  c->lr=0x801D339Cu; f_801D2708(c); // 801D3398
L_801D339C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D339C
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801D33A0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D33A4
  c->r[29]=c->r[29]+c->r[0]; // 801D33A8
  c->r[30]=c->r[30]-c->r[31]; // 801D33AC
  fcmp(c,0,c->f[0],c->f[1]); // 801D33B0
  if (!crb(c,1)) { goto L_801D33BC; } // 801D33B4
  goto L_801D33C0; // 801D33B8
L_801D33BC:;
  c->f[1]=c->f[0]; // 801D33BC
L_801D33C0:;
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 801D33C0
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D33C4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D33C8
  fcmp(c,0,c->f[0],c->f[1]); // 801D33CC
  if (!crb(c,1)) { goto L_801D33D8; } // 801D33D0
  goto L_801D33DC; // 801D33D4
L_801D33D8:;
  c->f[1]=c->f[0]; // 801D33D8
L_801D33DC:;
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 801D33DC
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D33E0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D33E4
  fcmp(c,0,c->f[0],c->f[1]); // 801D33E8
  if (!crb(c,0)) { goto L_801D33F4; } // 801D33EC
  goto L_801D33F8; // 801D33F0
L_801D33F4:;
  c->f[1]=c->f[0]; // 801D33F4
L_801D33F8:;
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 801D33F8
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D33FC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3400
  fcmp(c,0,c->f[0],c->f[1]); // 801D3404
  if (!crb(c,0)) { goto L_801D3410; } // 801D3408
  goto L_801D3414; // 801D340C
L_801D3410:;
  c->f[1]=c->f[0]; // 801D3410
L_801D3414:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D3414
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D3418
  if (crb(c,1)) { IRQCHK(c); goto L_801D3344; } // 801D341C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801D3420
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801D3424
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801D3428
  c->r[11]=c->r[1]+0x00000040u; // 801D342C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801D3430
  c->lr=0x801D3438u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3434
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D3438
  c->lr=c->r[0]; // 801D343C
  c->r[1]=c->r[1]+0x00000060u; // 801D3440
  return; // 801D3444
}

// GetRuntimeTypeInfo__Q34nw4r3lyt7TextBoxCFv
void f_801D3448(Ctx* __restrict c) {
  trace_call(0x801D3448u);
  c->r[3]=c->r[13]+0xFFFF9D88u; // 801D3448
  return; // 801D344C
}

// fn_801D3450
void f_801D3450(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFF9D70u; // 801D3450
  W32(c->r[13]+0xFFFF9D88u,c->r[0]); // 801D3454
  return; // 801D3458
}

// __ct__Q34nw4r3lyt6WindowFPCQ44nw4r3lyt3res6WindowRCQ34nw4r3lyt11ResBlockSet
void f_801D345C(Ctx* __restrict c) {
  trace_call(0x801D345Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D345C
  c->r[0]=c->lr; // 801D3460
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D3464
  c->r[11]=c->r[1]+0x00000050u; // 801D3468
  c->lr=0x801D3470u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D346C
  c->r[25]=c->r[3]|c->r[3]; // 801D3470
  c->r[26]=c->r[4]|c->r[4]; // 801D3474
  c->r[27]=c->r[5]|c->r[5]; // 801D3478
  c->lr=0x801D3480u; f_801CF158(c); // 801D347C
  c->r[3]=0u+0x802A0000u; // 801D3480
  c->r[4]=0u+0x80090000u; // 801D3484
  c->r[3]=c->r[3]+0x000019ACu; // 801D3488
  c->r[5]=0u+0x80040000u; // 801D348C
  c->r[28]=c->r[25]+0x000000E8u; // 801D3490
  W32(c->r[25]+0x00000000u,c->r[3]); // 801D3494
  c->r[3]=c->r[28]|c->r[28]; // 801D3498
  c->r[4]=c->r[4]+0x00003CA4u; // 801D349C
  c->r[5]=c->r[5]+0xFFFFB540u; // 801D34A0
  c->r[6]=0u+0x00000004u; // 801D34A4
  c->r[7]=0u+0x00000004u; // 801D34A8
  c->lr=0x801D34B0u; f_80109BD0(c); // 801D34AC
  c->r[3]=c->r[28]+0x00000010u; // 801D34B0
  c->lr=0x801D34B8u; f_801DA890(c); // 801D34B4
  c->r[0]=R32(c->r[26]+0x00000060u); // 801D34B8
  c->r[28]=0u+0x00000008u; // 801D34BC
  c->r[30]=c->r[26]+c->r[0]; // 801D34C0
  c->r[0]=R8(c->r[30]+0x00000012u); // 801D34C4
  cmpu(c,0,c->r[0],0x00000008u); // 801D34C8
  if (crb(c,1)) { goto L_801D34D4; } // 801D34CC
  c->r[28]=c->r[0]|c->r[0]; // 801D34D0
L_801D34D4:;
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[4]); // 801D34D4
  if (crb(c,2)) { goto L_801D34E4; } // 801D34D8
  c->r[3]=c->r[25]+0x000000F8u; // 801D34DC
  c->lr=0x801D34E4u; f_801DA8F4(c); // 801D34E0
L_801D34E4:;
  {uint32_t ea=c->r[26]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D34E4
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[5]); // 801D34E8
  {uint32_t ea=c->r[26]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D34EC
  {uint32_t ea=c->r[26]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D34F0
  {uint32_t ea=c->r[26]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D34F4
  c->r[6]=R32(c->r[30]+0x00000000u); // 801D34F8
  c->r[4]=R32(c->r[30]+0x00000004u); // 801D34FC
  c->r[3]=R32(c->r[30]+0x00000008u); // 801D3500
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801D3504
  c->r[7]=R32(c->r[27]+0x00000008u); // 801D3508
  {uint32_t ea=c->r[25]+0x000000D8u; WF32(ea,c->f[3]);} // 801D350C
  c->r[29]=c->r[7]+0x0000000Cu; // 801D3510
  {uint32_t ea=c->r[25]+0x000000DCu; WF32(ea,c->f[2]);} // 801D3514
  {uint32_t ea=c->r[25]+0x000000E0u; WF32(ea,c->f[1]);} // 801D3518
  {uint32_t ea=c->r[25]+0x000000E4u; WF32(ea,c->f[0]);} // 801D351C
  W32(c->r[25]+0x000000E8u,c->r[6]); // 801D3520
  W32(c->r[25]+0x000000ECu,c->r[4]); // 801D3524
  W32(c->r[25]+0x000000F0u,c->r[3]); // 801D3528
  W32(c->r[25]+0x000000F4u,c->r[0]); // 801D352C
  if (crb(c,2)) { goto L_801D354C; } // 801D3530
  c->r[0]=R8(c->r[25]+0x000000F8u); // 801D3534
  cmps(c,0,(int32_t)c->r[0],0); // 801D3538
  if (crb(c,2)) { goto L_801D354C; } // 801D353C
  c->r[3]=c->r[25]+0x000000F8u; // 801D3540
  c->r[4]=c->r[30]+0x00000014u; // 801D3544
  c->lr=0x801D354Cu; f_801DAA74(c); // 801D3548
L_801D354C:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 801D354C
  c->r[4]=0u+0x0000005Cu; // 801D3550
  c->r[7]=R32(c->r[27]+0x00000008u); // 801D3554
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D3558
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D355C
  c->r[6]=R32(c->r[29]+c->r[0]); // 801D3560
  c->r[5]=R32(c->r[27]+0x00000004u); // 801D3564
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801D3568
  c->r[28]=c->r[7]+c->r[6]; // 801D356C
  W32(c->r[1]+0x00000018u,c->r[3]); // 801D3570
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D3574
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801D3578
  W32(c->r[1]+0x00000020u,c->r[7]); // 801D357C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3580
  c->lr=0x801D3588u; f_80128068(c); // 801D3584
  cmps(c,0,(int32_t)c->r[3],0); // 801D3588
  if (crb(c,2)) { goto L_801D35A4; } // 801D358C
  if (crb(c,2)) { goto L_801D35A8; } // 801D3590
  c->r[4]=c->r[28]|c->r[28]; // 801D3594
  c->r[5]=c->r[1]+0x00000018u; // 801D3598
  c->lr=0x801D35A0u; f_801D5ED4(c); // 801D359C
  goto L_801D35A8; // 801D35A0
L_801D35A4:;
  c->r[3]=0u+0x00000000u; // 801D35A4
L_801D35A8:;
  c->r[30]=R8(c->r[26]+0x0000005Cu); // 801D35A8
  c->r[28]=0u+0x00000000u; // 801D35AC
  W32(c->r[25]+0x00000028u,c->r[3]); // 801D35B0
  cmps(c,0,(int32_t)c->r[30],0); // 801D35B4
  W8(c->r[25]+0x00000104u,c->r[28]); // 801D35B8
  W32(c->r[25]+0x00000100u,c->r[28]); // 801D35BC
  if (crb(c,2)) { goto L_801D36C4; } // 801D35C0
  W8(c->r[25]+0x00000104u,c->r[28]); // 801D35C4
  c->r[4]=rotl(c->r[30],3)&0x000007F8u; // 801D35C8
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D35CC
  c->lr=0x801D35D4u; f_80128068(c); // 801D35D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D35D4
  if (!crb(c,2)) { goto L_801D35E4; } // 801D35D8
  c->r[3]=0u+0x00000000u; // 801D35DC
  goto L_801D360C; // 801D35E0
L_801D35E4:;
  c->r[4]=c->r[3]|c->r[3]; // 801D35E4
  c->ctr=c->r[30]; // 801D35E8
  cmpu(c,0,c->r[30],0x00000000u); // 801D35EC
  if (!crb(c,1)) { goto L_801D360C; } // 801D35F0
L_801D35F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D35F4
  if (crb(c,2)) { goto L_801D3604; } // 801D35F8
  W8(c->r[4]+0x00000000u,c->r[28]); // 801D35FC
  W32(c->r[4]+0x00000004u,c->r[28]); // 801D3600
L_801D3604:;
  c->r[4]=c->r[4]+0x00000008u; // 801D3604
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D35F4; } // 801D3608
L_801D360C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D360C
  W32(c->r[25]+0x00000100u,c->r[3]); // 801D3610
  if (crb(c,2)) { goto L_801D361C; } // 801D3614
  W8(c->r[25]+0x00000104u,c->r[30]); // 801D3618
L_801D361C:;
  c->r[0]=R32(c->r[26]+0x00000064u); // 801D361C
  c->r[28]=0u+0x00000000u; // 801D3620
  c->r[30]=0u+0x00000000u; // 801D3624
  c->r[31]=c->r[26]+c->r[0]; // 801D3628
  goto L_801D36B8; // 801D362C
L_801D3630:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D3630
  c->r[4]=0u+0x0000005Cu; // 801D3634
  c->r[3]=R32(c->r[25]+0x00000100u); // 801D3638
  c->r[6]=c->r[26]+c->r[0]; // 801D363C
  c->r[0]=R16(c->r[26]+c->r[0]); // 801D3640
  c->r[5]=R8(c->r[6]+0x00000002u); // 801D3644
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D3648
  c->r[7]=R32(c->r[27]+0x00000008u); // 801D364C
  W8(c->r[3]+c->r[30],c->r[5]); // 801D3650
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D3654
  c->r[6]=R32(c->r[29]+c->r[0]); // 801D3658
  c->r[5]=R32(c->r[27]+0x00000004u); // 801D365C
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801D3660
  c->r[24]=c->r[7]+c->r[6]; // 801D3664
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D3668
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D366C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801D3670
  W32(c->r[1]+0x00000010u,c->r[7]); // 801D3674
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3678
  c->lr=0x801D3680u; f_80128068(c); // 801D367C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3680
  if (crb(c,2)) { goto L_801D369C; } // 801D3684
  if (crb(c,2)) { goto L_801D36A0; } // 801D3688
  c->r[4]=c->r[24]|c->r[24]; // 801D368C
  c->r[5]=c->r[1]+0x00000008u; // 801D3690
  c->lr=0x801D3698u; f_801D5ED4(c); // 801D3694
  goto L_801D36A0; // 801D3698
L_801D369C:;
  c->r[3]=0u+0x00000000u; // 801D369C
L_801D36A0:;
  c->r[0]=R32(c->r[25]+0x00000100u); // 801D36A0
  c->r[31]=c->r[31]+0x00000004u; // 801D36A4
  c->r[28]=c->r[28]+0x00000001u; // 801D36A8
  c->r[4]=c->r[0]+c->r[30]; // 801D36AC
  c->r[30]=c->r[30]+0x00000008u; // 801D36B0
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D36B4
L_801D36B8:;
  c->r[0]=R8(c->r[25]+0x00000104u); // 801D36B8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D36BC
  if (crb(c,0)) { IRQCHK(c); goto L_801D3630; } // 801D36C0
L_801D36C4:;
  c->r[11]=c->r[1]+0x00000050u; // 801D36C4
  c->r[3]=c->r[25]|c->r[25]; // 801D36C8
  c->lr=0x801D36D0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D36CC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D36D0
  c->lr=c->r[0]; // 801D36D4
  c->r[1]=c->r[1]+0x00000050u; // 801D36D8
  return; // 801D36DC
}

// __dt__Q34nw4r3lyt6WindowFv
void f_801D36E0(Ctx* __restrict c) {
  trace_call(0x801D36E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D36E0
  c->r[0]=c->lr; // 801D36E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D36E8
  c->r[11]=c->r[1]+0x00000030u; // 801D36EC
  c->lr=0x801D36F4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D36F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D36F4
  c->r[25]=c->r[3]|c->r[3]; // 801D36F8
  c->r[26]=c->r[4]|c->r[4]; // 801D36FC
  if (crb(c,2)) { goto L_801D3808; } // 801D3700
  c->r[31]=R32(c->r[3]+0x00000100u); // 801D3704
  c->r[4]=0u+0x802A0000u; // 801D3708
  c->r[4]=c->r[4]+0x000019ACu; // 801D370C
  c->r[30]=R8(c->r[3]+0x00000104u); // 801D3710
  cmps(c,0,(int32_t)c->r[31],0); // 801D3714
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D3718
  if (crb(c,2)) { goto L_801D3780; } // 801D371C
  c->r[27]=c->r[31]|c->r[31]; // 801D3720
  c->r[28]=0u+0x00000000u; // 801D3724
  goto L_801D376C; // 801D3728
L_801D372C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D372C
  if (crb(c,2)) { goto L_801D3764; } // 801D3730
  c->r[29]=R32(c->r[27]+0x00000004u); // 801D3734
  cmps(c,0,(int32_t)c->r[29],0); // 801D3738
  if (crb(c,2)) { goto L_801D3764; } // 801D373C
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D3740
  c->r[3]=c->r[29]|c->r[29]; // 801D3744
  c->r[4]=0u+0xFFFFFFFFu; // 801D3748
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D374C
  c->ctr=c->r[12]; // 801D3750
  if (true) { c->lr=0x801D3758u; dispatch(c,c->ctr); } // 801D3754
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D3758
  c->r[4]=c->r[29]|c->r[29]; // 801D375C
  c->lr=0x801D3764u; f_80128078(c); // 801D3760
L_801D3764:;
  c->r[27]=c->r[27]+0x00000008u; // 801D3764
  c->r[28]=c->r[28]+0x00000001u; // 801D3768
L_801D376C:;
  cmpu(c,0,c->r[28],c->r[30]); // 801D376C
  if (crb(c,0)) { IRQCHK(c); goto L_801D372C; } // 801D3770
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D3774
  c->r[4]=c->r[31]|c->r[31]; // 801D3778
  c->lr=0x801D3780u; f_80128078(c); // 801D377C
L_801D3780:;
  c->r[27]=R32(c->r[25]+0x00000028u); // 801D3780
  cmps(c,1,(int32_t)c->r[27],0); // 801D3784
  if (crb(c,6)) { goto L_801D37C8; } // 801D3788
  c->r[0]=R8(c->r[27]+0x00000059u); // 801D378C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3790
  if (!crb(c,2)) { goto L_801D37C8; } // 801D3794
  if (crb(c,6)) { goto L_801D37C0; } // 801D3798
  c->r[12]=R32(c->r[27]+0x00000000u); // 801D379C
  c->r[3]=c->r[27]|c->r[27]; // 801D37A0
  c->r[4]=0u+0xFFFFFFFFu; // 801D37A4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D37A8
  c->ctr=c->r[12]; // 801D37AC
  if (true) { c->lr=0x801D37B4u; dispatch(c,c->ctr); } // 801D37B0
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D37B4
  c->r[4]=c->r[27]|c->r[27]; // 801D37B8
  c->lr=0x801D37C0u; f_80128078(c); // 801D37BC
L_801D37C0:;
  c->r[0]=0u+0x00000000u; // 801D37C0
  W32(c->r[25]+0x00000028u,c->r[0]); // 801D37C4
L_801D37C8:;
  c->r[3]=c->r[25]+0x000000F8u; // 801D37C8
  c->lr=0x801D37D0u; f_801DA8A4(c); // 801D37CC
  c->r[3]=addc(c,c->r[25],0x000000E8u,0); cr0(c,c->r[3]); // 801D37D0
  if (crb(c,2)) { goto L_801D37EC; } // 801D37D4
  c->r[4]=0u+0x80040000u; // 801D37D8
  c->r[5]=0u+0x00000004u; // 801D37DC
  c->r[4]=c->r[4]+0xFFFFB540u; // 801D37E0
  c->r[6]=0u+0x00000004u; // 801D37E4
  c->lr=0x801D37ECu; f_80109CC8(c); // 801D37E8
L_801D37EC:;
  c->r[3]=c->r[25]|c->r[25]; // 801D37EC
  c->r[4]=0u+0x00000000u; // 801D37F0
  c->lr=0x801D37F8u; f_801CF290(c); // 801D37F4
  cmps(c,0,(int32_t)c->r[26],0); // 801D37F8
  if (!crb(c,1)) { goto L_801D3808; } // 801D37FC
  c->r[3]=c->r[25]|c->r[25]; // 801D3800
  c->lr=0x801D3808u; f_8009230C(c); // 801D3804
L_801D3808:;
  c->r[11]=c->r[1]+0x00000030u; // 801D3808
  c->r[3]=c->r[25]|c->r[25]; // 801D380C
  c->lr=0x801D3814u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3810
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3814
  c->lr=c->r[0]; // 801D3818
  c->r[1]=c->r[1]+0x00000030u; // 801D381C
  return; // 801D3820
}

// FindMaterialByName__Q34nw4r3lyt6WindowFPCcb
void f_801D3824(Ctx* __restrict c) {
  trace_call(0x801D3824u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3824
  c->r[0]=c->lr; // 801D3828
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D382C
  c->r[11]=c->r[1]+0x00000020u; // 801D3830
  c->lr=0x801D3838u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3834
  c->r[6]=R32(c->r[3]+0x00000028u); // 801D3838
  c->r[27]=c->r[3]|c->r[3]; // 801D383C
  c->r[28]=c->r[4]|c->r[4]; // 801D3840
  c->r[29]=c->r[5]|c->r[5]; // 801D3844
  cmps(c,0,(int32_t)c->r[6],0); // 801D3848
  if (crb(c,2)) { goto L_801D3868; } // 801D384C
  c->r[3]=c->r[6]+0x00000044u; // 801D3850
  c->lr=0x801D3858u; f_801DA83C(c); // 801D3854
  cmps(c,0,(int32_t)c->r[3],0); // 801D3858
  if (crb(c,2)) { goto L_801D3868; } // 801D385C
  c->r[3]=R32(c->r[27]+0x00000028u); // 801D3860
  goto L_801D3908; // 801D3864
L_801D3868:;
  c->r[31]=0u+0x00000000u; // 801D3868
  c->r[30]=0u+0x00000000u; // 801D386C
  goto L_801D38B0; // 801D3870
L_801D3874:;
  c->r[0]=R32(c->r[27]+0x00000100u); // 801D3874
  c->r[4]=c->r[28]|c->r[28]; // 801D3878
  c->r[3]=c->r[0]+c->r[30]; // 801D387C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D3880
  c->r[3]=c->r[3]+0x00000044u; // 801D3884
  c->lr=0x801D388Cu; f_801DA83C(c); // 801D3888
  cmps(c,0,(int32_t)c->r[3],0); // 801D388C
  if (crb(c,2)) { goto L_801D38A8; } // 801D3890
  c->r[3]=R32(c->r[27]+0x00000100u); // 801D3894
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801D3898
  c->r[3]=c->r[3]+c->r[0]; // 801D389C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D38A0
  goto L_801D3908; // 801D38A4
L_801D38A8:;
  c->r[30]=c->r[30]+0x00000008u; // 801D38A8
  c->r[31]=c->r[31]+0x00000001u; // 801D38AC
L_801D38B0:;
  c->r[0]=R8(c->r[27]+0x00000104u); // 801D38B0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801D38B4
  if (crb(c,0)) { IRQCHK(c); goto L_801D3874; } // 801D38B8
  cmps(c,0,(int32_t)c->r[29],0); // 801D38BC
  if (crb(c,2)) { goto L_801D3904; } // 801D38C0
  c->r[31]=R32(c->r[27]+0x00000014u); // 801D38C4
  c->r[30]=c->r[27]+0x00000014u; // 801D38C8
  goto L_801D38FC; // 801D38CC
L_801D38D0:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 801D38D0
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 801D38D4
  c->r[4]=c->r[28]|c->r[28]; // 801D38D8
  c->r[5]=c->r[29]|c->r[29]; // 801D38DC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D38E0
  c->ctr=c->r[12]; // 801D38E4
  if (true) { c->lr=0x801D38ECu; dispatch(c,c->ctr); } // 801D38E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D38EC
  if (crb(c,2)) { goto L_801D38F8; } // 801D38F0
  goto L_801D3908; // 801D38F4
L_801D38F8:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D38F8
L_801D38FC:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D38FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D38D0; } // 801D3900
L_801D3904:;
  c->r[3]=0u+0x00000000u; // 801D3904
L_801D3908:;
  c->r[11]=c->r[1]+0x00000020u; // 801D3908
  c->lr=0x801D3910u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D390C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3910
  c->lr=c->r[0]; // 801D3914
  c->r[1]=c->r[1]+0x00000020u; // 801D3918
  return; // 801D391C
}

// GetVtxColor__Q34nw4r3lyt6WindowCFUl
void f_801D3920(Ctx* __restrict c) {
  trace_call(0x801D3920u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D3920
  c->r[7]=c->r[4]+c->r[0]; // 801D3924
  c->r[6]=R8(c->r[7]+0x000000E8u); // 801D3928
  c->r[5]=R8(c->r[7]+0x000000E9u); // 801D392C
  c->r[4]=R8(c->r[7]+0x000000EAu); // 801D3930
  c->r[0]=R8(c->r[7]+0x000000EBu); // 801D3934
  W8(c->r[3]+0x00000000u,c->r[6]); // 801D3938
  W8(c->r[3]+0x00000001u,c->r[5]); // 801D393C
  W8(c->r[3]+0x00000002u,c->r[4]); // 801D3940
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D3944
  return; // 801D3948
}

// SetVtxColor__Q34nw4r3lyt6WindowFUlQ34nw4r2ut5Color
void f_801D394C(Ctx* __restrict c) {
  trace_call(0x801D394Cu);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D394C
  c->r[6]=R8(c->r[5]+0x00000000u); // 801D3950
  c->r[4]=c->r[3]+c->r[0]; // 801D3954
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D3958
  W8(c->r[4]+0x000000E8u,c->r[6]); // 801D395C
  c->r[3]=R8(c->r[5]+0x00000002u); // 801D3960
  W8(c->r[4]+0x000000E9u,c->r[0]); // 801D3964
  c->r[0]=R8(c->r[5]+0x00000003u); // 801D3968
  W8(c->r[4]+0x000000EAu,c->r[3]); // 801D396C
  W8(c->r[4]+0x000000EBu,c->r[0]); // 801D3970
  return; // 801D3974
}

// GetVtxColorElement__Q34nw4r3lyt6WindowCFUl
void f_801D3978(Ctx* __restrict c) {
  trace_call(0x801D3978u);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801D3978
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801D397C
  c->r[3]=c->r[3]+c->r[5]; // 801D3980
  c->r[3]=c->r[3]+c->r[0]; // 801D3984
  c->r[3]=R8(c->r[3]+0x000000E8u); // 801D3988
  return; // 801D398C
}

// SetVtxColorElement__Q34nw4r3lyt6WindowFUlUc
void f_801D3990(Ctx* __restrict c) {
  trace_call(0x801D3990u);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801D3990
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801D3994
  c->r[3]=c->r[3]+c->r[6]; // 801D3998
  c->r[3]=c->r[3]+c->r[0]; // 801D399C
  W8(c->r[3]+0x000000E8u,c->r[5]); // 801D39A0
  return; // 801D39A4
}

// DrawSelf__Q34nw4r3lyt6WindowFRCQ34nw4r3lyt8DrawInfo
void f_801D39A8(Ctx* __restrict c) {
  trace_call(0x801D39A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D39A8
  c->r[0]=c->lr; // 801D39AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D39B0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D39B4
  c->r[31]=c->r[3]|c->r[3]; // 801D39B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D39BC
  c->r[12]=R32(c->r[12]+0x00000070u); // 801D39C0
  c->ctr=c->r[12]; // 801D39C4
  if (true) { c->lr=0x801D39CCu; dispatch(c,c->ctr); } // 801D39C8
  c->r[5]=R8(c->r[31]+0x00000104u); // 801D39CC
  c->r[4]=c->r[31]|c->r[31]; // 801D39D0
  c->r[6]=R32(c->r[31]+0x00000100u); // 801D39D4
  c->r[3]=c->r[1]+0x00000018u; // 801D39D8
  c->lr=0x801D39E0u; f_801D5888(c); // 801D39DC
  c->r[6]=R32(c->r[1]+0x00000018u); // 801D39E0
  c->r[3]=c->r[31]|c->r[31]; // 801D39E4
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801D39E8
  c->r[4]=R32(c->r[1]+0x00000020u); // 801D39EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D39F0
  W32(c->r[1]+0x00000028u,c->r[6]); // 801D39F4
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801D39F8
  W32(c->r[1]+0x00000030u,c->r[4]); // 801D39FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3A00
  c->lr=0x801D3A08u; f_801CFF28(c); // 801D3A04
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D3A08
  c->r[5]=c->r[1]+0x00000028u; // 801D3A0C
  W32(c->r[1]+0x00000014u,c->r[4]); // 801D3A10
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3A14
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D3A18
  c->r[3]=c->r[31]|c->r[31]; // 801D3A1C
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 801D3A20
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D3A24
  c->r[4]=c->r[1]+0x00000010u; // 801D3A28
  c->r[6]=R8(c->r[31]+0x000000B9u); // 801D3A2C
  c->ctr=c->r[12]; // 801D3A30
  if (true) { c->lr=0x801D3A38u; dispatch(c,c->ctr); } // 801D3A34
  c->r[0]=R8(c->r[31]+0x00000104u); // 801D3A38
  cmps(c,0,(int32_t)c->r[0],4); // 801D3A3C
  if (crb(c,2)) { goto L_801D3A88; } // 801D3A40
  if (!crb(c,0)) { goto L_801D3A54; } // 801D3A44
  cmps(c,0,(int32_t)c->r[0],1); // 801D3A48
  if (crb(c,2)) { goto L_801D3A60; } // 801D3A4C
  goto L_801D3AD4; // 801D3A50
L_801D3A54:;
  cmps(c,0,(int32_t)c->r[0],8); // 801D3A54
  if (crb(c,2)) { goto L_801D3AB0; } // 801D3A58
  goto L_801D3AD4; // 801D3A5C
L_801D3A60:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3A60
  c->r[3]=c->r[31]|c->r[31]; // 801D3A64
  c->r[4]=c->r[1]+0x00000010u; // 801D3A68
  c->r[6]=c->r[1]+0x00000028u; // 801D3A6C
  c->r[12]=R32(c->r[12]+0x00000080u); // 801D3A70
  c->r[5]=R32(c->r[31]+0x00000100u); // 801D3A74
  c->r[7]=R8(c->r[31]+0x000000B9u); // 801D3A78
  c->ctr=c->r[12]; // 801D3A7C
  if (true) { c->lr=0x801D3A84u; dispatch(c,c->ctr); } // 801D3A80
  goto L_801D3AD4; // 801D3A84
L_801D3A88:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3A88
  c->r[3]=c->r[31]|c->r[31]; // 801D3A8C
  c->r[4]=c->r[1]+0x00000010u; // 801D3A90
  c->r[6]=c->r[1]+0x00000028u; // 801D3A94
  c->r[12]=R32(c->r[12]+0x00000084u); // 801D3A98
  c->r[5]=R32(c->r[31]+0x00000100u); // 801D3A9C
  c->r[7]=R8(c->r[31]+0x000000B9u); // 801D3AA0
  c->ctr=c->r[12]; // 801D3AA4
  if (true) { c->lr=0x801D3AACu; dispatch(c,c->ctr); } // 801D3AA8
  goto L_801D3AD4; // 801D3AAC
L_801D3AB0:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D3AB0
  c->r[3]=c->r[31]|c->r[31]; // 801D3AB4
  c->r[4]=c->r[1]+0x00000010u; // 801D3AB8
  c->r[6]=c->r[1]+0x00000028u; // 801D3ABC
  c->r[12]=R32(c->r[12]+0x00000088u); // 801D3AC0
  c->r[5]=R32(c->r[31]+0x00000100u); // 801D3AC4
  c->r[7]=R8(c->r[31]+0x000000B9u); // 801D3AC8
  c->ctr=c->r[12]; // 801D3ACC
  if (true) { c->lr=0x801D3AD4u; dispatch(c,c->ctr); } // 801D3AD0
L_801D3AD4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D3AD4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D3AD8
  c->lr=c->r[0]; // 801D3ADC
  c->r[1]=c->r[1]+0x00000040u; // 801D3AE0
  return; // 801D3AE4
}

// AnimateSelf__Q34nw4r3lyt6WindowFUl
void f_801D3AE8(Ctx* __restrict c) {
  trace_call(0x801D3AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3AE8
  c->r[0]=c->lr; // 801D3AEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3AF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3AF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3AF8
  c->r[30]=c->r[4]|c->r[4]; // 801D3AFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3B00
  c->r[29]=c->r[3]|c->r[3]; // 801D3B04
  c->lr=0x801D3B0Cu; f_801CFAB4(c); // 801D3B08
  c->r[0]=R8(c->r[29]+0x000000BBu); // 801D3B0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D3B10
  if (!crb(c,2)) { goto L_801D3B20; } // 801D3B14
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801D3B18
  if (!crb(c,2)) { goto L_801D3B5C; } // 801D3B1C
L_801D3B20:;
  c->r[30]=0u+0x00000000u; // 801D3B20
  c->r[31]=0u+0x00000000u; // 801D3B24
  goto L_801D3B50; // 801D3B28
L_801D3B2C:;
  c->r[0]=R32(c->r[29]+0x00000100u); // 801D3B2C
  c->r[3]=c->r[0]+c->r[31]; // 801D3B30
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D3B34
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3B38
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D3B3C
  c->ctr=c->r[12]; // 801D3B40
  if (true) { c->lr=0x801D3B48u; dispatch(c,c->ctr); } // 801D3B44
  c->r[31]=c->r[31]+0x00000008u; // 801D3B48
  c->r[30]=c->r[30]+0x00000001u; // 801D3B4C
L_801D3B50:;
  c->r[0]=R8(c->r[29]+0x00000104u); // 801D3B50
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D3B54
  if (crb(c,0)) { IRQCHK(c); goto L_801D3B2C; } // 801D3B58
L_801D3B5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3B5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3B60
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3B64
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3B68
  c->lr=c->r[0]; // 801D3B6C
  c->r[1]=c->r[1]+0x00000020u; // 801D3B70
  return; // 801D3B74
}

// UnbindAnimationSelf__Q34nw4r3lyt6WindowFPQ34nw4r3lyt13AnimTransform
void f_801D3B78(Ctx* __restrict c) {
  trace_call(0x801D3B78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3B78
  c->r[0]=c->lr; // 801D3B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3B80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3B84
  c->r[31]=0u+0x00000000u; // 801D3B88
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3B8C
  c->r[30]=0u+0x00000000u; // 801D3B90
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3B94
  c->r[29]=c->r[4]|c->r[4]; // 801D3B98
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D3B9C
  c->r[28]=c->r[3]|c->r[3]; // 801D3BA0
  goto L_801D3BD0; // 801D3BA4
L_801D3BA8:;
  c->r[0]=R32(c->r[28]+0x00000100u); // 801D3BA8
  c->r[4]=c->r[29]|c->r[29]; // 801D3BAC
  c->r[3]=c->r[0]+c->r[31]; // 801D3BB0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D3BB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3BB8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D3BBC
  c->ctr=c->r[12]; // 801D3BC0
  if (true) { c->lr=0x801D3BC8u; dispatch(c,c->ctr); } // 801D3BC4
  c->r[31]=c->r[31]+0x00000008u; // 801D3BC8
  c->r[30]=c->r[30]+0x00000001u; // 801D3BCC
L_801D3BD0:;
  c->r[0]=R8(c->r[28]+0x00000104u); // 801D3BD0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D3BD4
  if (crb(c,0)) { IRQCHK(c); goto L_801D3BA8; } // 801D3BD8
  c->r[3]=c->r[28]|c->r[28]; // 801D3BDC
  c->r[4]=c->r[29]|c->r[29]; // 801D3BE0
  c->lr=0x801D3BE8u; f_801CFC2C(c); // 801D3BE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3BE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3BEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3BF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3BF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D3BF8
  c->lr=c->r[0]; // 801D3BFC
  c->r[1]=c->r[1]+0x00000020u; // 801D3C00
  return; // 801D3C04
}

// DrawContent__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt15WindowFrameSizeUc
void f_801D3C08(Ctx* __restrict c) {
  trace_call(0x801D3C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3C08
  c->r[0]=c->lr; // 801D3C0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3C10
  c->r[11]=c->r[1]+0x00000030u; // 801D3C14
  c->lr=0x801D3C1Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3C18
  c->r[30]=c->r[6]|c->r[6]; // 801D3C1C
  c->r[27]=c->r[3]|c->r[3]; // 801D3C20
  c->r[28]=c->r[4]|c->r[4]; // 801D3C24
  c->r[29]=c->r[5]|c->r[5]; // 801D3C28
  c->r[4]=c->r[30]|c->r[30]; // 801D3C2C
  c->r[3]=c->r[3]+0x000000E8u; // 801D3C30
  c->lr=0x801D3C38u; f_801DAB08(c); // 801D3C34
  c->r[4]=c->r[3]|c->r[3]; // 801D3C38
  c->r[3]=R32(c->r[27]+0x00000028u); // 801D3C3C
  c->r[5]=c->r[30]|c->r[30]; // 801D3C40
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3C44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D3C48
  c->ctr=c->r[12]; // 801D3C4C
  if (true) { c->lr=0x801D3C54u; dispatch(c,c->ctr); } // 801D3C50
  c->r[4]=R8(c->r[27]+0x000000F9u); // 801D3C54
  c->r[31]=c->r[3]|c->r[3]; // 801D3C58
  c->lr=0x801D3C60u; f_801DABC4(c); // 801D3C5C
  cmps(c,0,(int32_t)c->r[31],0); // 801D3C60
  if (crb(c,2)) { goto L_801D3C70; } // 801D3C64
  c->r[7]=c->r[27]+0x000000E8u; // 801D3C68
  goto L_801D3C74; // 801D3C6C
L_801D3C70:;
  c->r[7]=0u+0x00000000u; // 801D3C70
L_801D3C74:;
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3C74
  c->r[8]=c->r[30]|c->r[30]; // 801D3C78
  {uint32_t ea=c->r[29]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801D3C7C
  c->r[3]=c->r[1]+0x00000010u; // 801D3C80
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3C84
  c->r[4]=c->r[1]+0x00000008u; // 801D3C88
  {uint32_t ea=c->r[29]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D3C8C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 801D3C90
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3C94
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 801D3C98
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3C9C
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[3]); // 801D3CA0
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D3CA4
  c->r[6]=R32(c->r[27]+0x000000FCu); // 801D3CA8
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801D3CAC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3CB0
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[3]); // 801D3CB4
  {uint32_t ea=c->r[27]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D3CB8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801D3CBC
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3CC0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 801D3CC4
  c->r[5]=R8(c->r[27]+0x000000F9u); // 801D3CC8
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801D3CCC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3CD0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801D3CD4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3CD8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 801D3CDC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801D3CE0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 801D3CE4
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3CE8
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3CEC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 801D3CF0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D3CF4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801D3CF8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D3CFC
  c->lr=0x801D3D04u; f_801DB208(c); // 801D3D00
  c->r[11]=c->r[1]+0x00000030u; // 801D3D04
  c->lr=0x801D3D0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3D08
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3D0C
  c->lr=c->r[0]; // 801D3D10
  c->r[1]=c->r[1]+0x00000030u; // 801D3D14
  return; // 801D3D18
}

// DrawFrame__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_801D3D1C(Ctx* __restrict c) {
  trace_call(0x801D3D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3D1C
  c->r[0]=c->lr; // 801D3D20
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801D3D24
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 801D3D28
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 801D3D2C
  c->r[11]=c->r[1]+0x000000D0u; // 801D3D30
  c->lr=0x801D3D38u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3D34
  c->r[8]=R32(c->r[5]+0x00000004u); // 801D3D38
  c->r[9]=0u+0x43300000u; // 801D3D3C
  W32(c->r[1]+0x00000088u,c->r[9]); // 801D3D40
  c->r[27]=c->r[3]|c->r[3]; // 801D3D44
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801D3D48
  c->r[28]=c->r[4]|c->r[4]; // 801D3D4C
  W32(c->r[1]+0x00000090u,c->r[9]); // 801D3D50
  c->r[20]=c->r[5]|c->r[5]; // 801D3D54
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D3D58
  c->r[29]=c->r[6]|c->r[6]; // 801D3D5C
  c->r[30]=c->r[7]|c->r[7]; // 801D3D60
  if (crb(c,2)) { goto L_801D42DC; } // 801D3D64
  c->r[4]=c->r[30]|c->r[30]; // 801D3D68
  c->r[3]=0u+0x00000000u; // 801D3D6C
  c->lr=0x801D3D74u; f_801DAB08(c); // 801D3D70
  c->r[4]=c->r[3]|c->r[3]; // 801D3D74
  c->r[3]=R32(c->r[20]+0x00000004u); // 801D3D78
  c->r[5]=c->r[30]|c->r[30]; // 801D3D7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3D80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D3D84
  c->ctr=c->r[12]; // 801D3D88
  if (true) { c->lr=0x801D3D90u; dispatch(c,c->ctr); } // 801D3D8C
  c->r[31]=c->r[3]|c->r[3]; // 801D3D90
  c->r[4]=0u+0x00000001u; // 801D3D94
  c->lr=0x801D3D9Cu; f_801DABC4(c); // 801D3D98
  c->r[4]=R32(c->r[20]+0x00000004u); // 801D3D9C
  c->r[3]=c->r[1]+0x00000050u; // 801D3DA0
  c->r[5]=0u+0x00000000u; // 801D3DA4
  c->lr=0x801D3DACu; f_801D88B0(c); // 801D3DA8
  c->r[21]=0u+0x802A0000u; // 801D3DAC
  c->r[0]=0u+0xFFFFFFFFu; // 801D3DB0
  c->r[21]=c->r[21]+0x00001970u; // 801D3DB4
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[12]=c->ps1[12]=RF32(ea);} // 801D3DB8
  c->r[6]=R8(c->r[21]+0x00000009u); // 801D3DBC
  c->r[3]=0u-c->r[31]; // 801D3DC0
  c->r[7]=R8(c->r[21]+0x00000008u); // 801D3DC4
  c->r[9]=c->r[1]+0x00000038u; // 801D3DC8
  c->r[12]=R8(c->r[21]+c->r[6]); // 801D3DCC
  c->r[4]=c->r[21]+c->r[6]; // 801D3DD0
  c->r[5]=c->r[21]+c->r[7]; // 801D3DD4
  c->r[11]=R8(c->r[21]+c->r[7]); // 801D3DD8
  W32(c->r[1]+0x00000094u,c->r[12]); // 801D3DDC
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801D3DE0
  c->r[5]=R8(c->r[5]+0x00000002u); // 801D3DE4
  c->r[20]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D3DE8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 801D3DEC
  c->r[23]=c->r[1]+0x00000068u; // 801D3DF0
  c->r[5]=c->r[5]-c->r[11]; // 801D3DF4
  c->r[4]=R8(c->r[4]+0x00000004u); // 801D3DF8
  c->r[5]=c->r[5]^0x80000000u; // 801D3DFC
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[3]=RF64(ea);} // 801D3E00
  W32(c->r[1]+0x00000094u,c->r[5]); // 801D3E04
  c->r[4]=c->r[4]-c->r[12]; // 801D3E08
  {uint32_t ea=c->r[28]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 801D3E0C
  c->r[3]=c->r[3]|c->r[31]; // 801D3E10
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801D3E14
  c->r[4]=c->r[4]^0x80000000u; // 801D3E18
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[1]=RF64(ea);} // 801D3E1C
  c->r[5]=sraw(c,c->r[3],31); // 801D3E20
  W32(c->r[1]+0x00000094u,c->r[4]); // 801D3E24
  c->r[26]=c->r[1]+0x00000058u; // 801D3E28
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801D3E2C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 801D3E30
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801D3E34
  c->r[7]=c->r[26]&c->r[5]; // 801D3E38
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 801D3E3C
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[3]); // 801D3E40
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801D3E44
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 801D3E48
  {uint32_t ea=c->r[1]+0x00000054u; c->f[13]=c->ps1[13]=RF32(ea);} // 801D3E4C
  c->r[22]=c->r[1]+0x00000078u; // 801D3E50
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 801D3E54
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[3]); // 801D3E58
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 801D3E5C
  c->r[24]=c->r[1]+0x00000070u; // 801D3E60
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D3E64
  c->r[25]=c->r[1]+0x00000080u; // 801D3E68
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 801D3E6C
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[3]); // 801D3E70
  {uint32_t ea=c->r[29]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 801D3E74
  c->r[6]=c->r[23]|c->r[23]; // 801D3E78
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 801D3E7C
  c->r[8]=c->r[30]|c->r[30]; // 801D3E80
  W32(c->r[1]+0x00000058u,c->r[0]); // 801D3E84
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801D3E88
  {uint32_t ea=c->r[29]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 801D3E8C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801D3E90
  c->r[3]=c->r[1]+0x00000048u; // 801D3E94
  c->r[4]=c->r[1]+0x00000040u; // 801D3E98
  c->r[5]=0u+0x00000001u; // 801D3E9C
  W32(c->r[1]+0x00000060u,c->r[0]); // 801D3EA0
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D3EA4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[12]);} // 801D3EA8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[12]);} // 801D3EAC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 801D3EB0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 801D3EB4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3EB8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 801D3EBC
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[9]); // 801D3EC0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[13]);} // 801D3EC4
  {uint32_t ea=c->r[9]+c->r[10]; c->f[3]=c->ps1[3]=RF32(ea);} // 801D3EC8
  {uint32_t ea=c->r[9]+c->r[20]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3ECC
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[7]);} // 801D3ED0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801D3ED4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D3ED8
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[7]);} // 801D3EDC
  c->f[1]=c->ps1[1]=S(c->f[9]/c->f[3]); // 801D3EE0
  {uint32_t ea=c->r[24]+c->r[20]; WF32(ea,c->f[6]);} // 801D3EE4
  {uint32_t ea=c->r[23]+c->r[20]; WF32(ea,c->f[6]);} // 801D3EE8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 801D3EEC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 801D3EF0
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 801D3EF4
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 801D3EF8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D3EFC
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[1]);} // 801D3F00
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[1]);} // 801D3F04
  {uint32_t ea=c->r[22]+c->r[20]; WF32(ea,c->f[0]);} // 801D3F08
  {uint32_t ea=c->r[25]+c->r[20]; WF32(ea,c->f[0]);} // 801D3F0C
  c->lr=0x801D3F14u; f_801DB208(c); // 801D3F10
  c->r[6]=R8(c->r[21]+0x00000013u); // 801D3F14
  c->r[8]=c->r[21]+0x0000000Au; // 801D3F18
  c->r[7]=R8(c->r[21]+0x00000012u); // 801D3F1C
  c->r[0]=0u-c->r[31]; // 801D3F20
  c->r[4]=c->r[8]+c->r[6]; // 801D3F24
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D3F28
  c->r[3]=c->r[0]|c->r[31]; // 801D3F2C
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D3F30
  c->r[5]=c->r[8]+c->r[7]; // 801D3F34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D3F38
  c->r[9]=R8(c->r[5]+0x00000002u); // 801D3F3C
  c->r[5]=sraw(c,c->r[3],31); // 801D3F40
  c->r[3]=R8(c->r[8]+c->r[7]); // 801D3F44
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801D3F48
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D3F4C
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D3F50
  c->r[3]=c->r[3]-c->r[9]; // 801D3F54
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D3F58
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3F5C
  c->r[3]=c->r[3]^0x80000000u; // 801D3F60
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=RF64(ea);} // 801D3F64
  c->r[7]=c->r[26]&c->r[5]; // 801D3F68
  {uint32_t ea=c->r[29]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801D3F6C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D3F70
  W32(c->r[1]+0x00000094u,c->r[3]); // 801D3F74
  c->r[20]=c->r[1]+0x00000028u; // 801D3F78
  c->r[3]=R8(c->r[4]+0x00000006u); // 801D3F7C
  c->r[6]=c->r[23]|c->r[23]; // 801D3F80
  c->f[10]=c->ps1[10]=S(c->f[0]-c->f[8]); // 801D3F84
  {uint32_t ea=c->r[28]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 801D3F88
  c->r[3]=c->r[3]-c->r[0]; // 801D3F8C
  c->r[12]=c->r[3]^0x80000000u; // 801D3F90
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801D3F94
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[3]=RF64(ea);} // 801D3F98
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 801D3F9C
  c->r[8]=c->r[30]|c->r[30]; // 801D3FA0
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[6]=RF64(ea);} // 801D3FA4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801D3FA8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 801D3FAC
  c->r[3]=c->r[1]+0x00000048u; // 801D3FB0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[6]); // 801D3FB4
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801D3FB8
  W32(c->r[1]+0x00000094u,c->r[12]); // 801D3FBC
  {uint32_t ea=c->r[20]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3FC0
  c->r[4]=c->r[1]+0x00000040u; // 801D3FC4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801D3FC8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 801D3FCC
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 801D3FD0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 801D3FD4
  {uint32_t ea=c->r[20]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D3FD8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[5]=RF64(ea);} // 801D3FDC
  c->r[5]=0u+0x00000001u; // 801D3FE0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 801D3FE4
  c->f[2]=c->ps1[2]=S(c->f[8]/c->f[2]); // 801D3FE8
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 801D3FEC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 801D3FF0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 801D3FF4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 801D3FF8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[8]=c->ps1[8]=RF32(ea);} // 801D3FFC
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 801D4000
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801D4004
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D4008
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[6]); // 801D400C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 801D4010
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 801D4014
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 801D4018
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[10]);} // 801D401C
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[5]);} // 801D4020
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[5]);} // 801D4024
  {uint32_t ea=c->r[23]+c->r[11]; WF32(ea,c->f[4]);} // 801D4028
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[4]);} // 801D402C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801D4030
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[9]);} // 801D4034
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801D4038
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 801D403C
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[2]);} // 801D4040
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D4044
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[2]);} // 801D4048
  {uint32_t ea=c->r[25]+c->r[11]; WF32(ea,c->f[0]);} // 801D404C
  {uint32_t ea=c->r[22]+c->r[11]; WF32(ea,c->f[0]);} // 801D4050
  c->lr=0x801D4058u; f_801DB208(c); // 801D4054
  c->r[6]=R8(c->r[21]+0x00000031u); // 801D4058
  c->r[4]=c->r[21]+0x00000028u; // 801D405C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4060
  c->r[0]=0u-c->r[31]; // 801D4064
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4068
  c->r[7]=c->r[4]+c->r[6]; // 801D406C
  c->r[8]=R8(c->r[21]+0x00000030u); // 801D4070
  c->r[3]=c->r[0]|c->r[31]; // 801D4074
  c->r[0]=R8(c->r[7]+0x00000006u); // 801D4078
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D407C
  c->r[4]=c->r[4]+c->r[8]; // 801D4080
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 801D4084
  c->r[5]=sraw(c,c->r[3],31); // 801D4088
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D408C
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[0]); // 801D4090
  c->r[9]=R8(c->r[4]+0x00000006u); // 801D4094
  c->r[10]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801D4098
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D409C
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D40A0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D40A4
  c->r[4]=c->r[3]-c->r[9]; // 801D40A8
  c->r[3]=R8(c->r[7]+0x00000002u); // 801D40AC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D40B0
  c->r[4]=c->r[4]^0x80000000u; // 801D40B4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 801D40B8
  c->r[3]=c->r[3]-c->r[0]; // 801D40BC
  c->f[10]=c->ps1[10]=S(c->f[0]+c->f[5]); // 801D40C0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[11]=c->ps1[11]=RF32(ea);} // 801D40C4
  W32(c->r[1]+0x00000094u,c->r[4]); // 801D40C8
  c->r[12]=c->r[3]^0x80000000u; // 801D40CC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[12]=c->ps1[12]=RF32(ea);} // 801D40D0
  c->r[20]=c->r[1]+0x00000018u; // 801D40D4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801D40D8
  c->r[7]=c->r[26]&c->r[5]; // 801D40DC
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[1]=RF64(ea);} // 801D40E0
  c->r[6]=c->r[23]|c->r[23]; // 801D40E4
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[6]=RF64(ea);} // 801D40E8
  c->r[8]=c->r[30]|c->r[30]; // 801D40EC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 801D40F0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801D40F4
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 801D40F8
  c->r[3]=c->r[1]+0x00000048u; // 801D40FC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 801D4100
  c->r[4]=c->r[1]+0x00000040u; // 801D4104
  c->r[5]=0u+0x00000001u; // 801D4108
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D410C
  W32(c->r[1]+0x00000094u,c->r[12]); // 801D4110
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[5]); // 801D4114
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801D4118
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 801D411C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801D4120
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[11]);} // 801D4124
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 801D4128
  {uint32_t ea=c->r[20]+c->r[10]; c->f[2]=c->ps1[2]=RF32(ea);} // 801D412C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 801D4130
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801D4134
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[10]);} // 801D4138
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 801D413C
  {uint32_t ea=c->r[20]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4140
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 801D4144
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D4148
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 801D414C
  c->f[2]=c->ps1[2]=S(c->f[7]/c->f[2]); // 801D4150
  {uint32_t ea=c->r[24]+c->r[10]; WF32(ea,c->f[5]);} // 801D4154
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[5]);} // 801D4158
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801D415C
  {uint32_t ea=c->r[22]+c->r[11]; WF32(ea,c->f[4]);} // 801D4160
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 801D4164
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 801D4168
  {uint32_t ea=c->r[25]+c->r[11]; WF32(ea,c->f[4]);} // 801D416C
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 801D4170
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[9]);} // 801D4174
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[7]);} // 801D4178
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 801D417C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801D4180
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801D4184
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[2]);} // 801D4188
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D418C
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[2]);} // 801D4190
  {uint32_t ea=c->r[24]+c->r[11]; WF32(ea,c->f[0]);} // 801D4194
  {uint32_t ea=c->r[23]+c->r[11]; WF32(ea,c->f[0]);} // 801D4198
  c->lr=0x801D41A0u; f_801DB208(c); // 801D419C
  c->r[6]=R8(c->r[21]+0x0000001Du); // 801D41A0
  c->r[7]=c->r[21]+0x00000014u; // 801D41A4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 801D41A8
  c->r[0]=0u-c->r[31]; // 801D41AC
  c->r[3]=c->r[7]+c->r[6]; // 801D41B0
  c->r[4]=R8(c->r[21]+0x0000001Cu); // 801D41B4
  c->r[11]=R8(c->r[3]+0x00000004u); // 801D41B8
  c->r[0]=c->r[0]|c->r[31]; // 801D41BC
  c->r[3]=c->r[7]+c->r[4]; // 801D41C0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D41C4
  c->r[12]=R8(c->r[3]+0x00000004u); // 801D41C8
  c->r[5]=sraw(c,c->r[0],31); // 801D41CC
  W32(c->r[1]+0x00000094u,c->r[11]); // 801D41D0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D41D4
  c->r[3]=R8(c->r[3]+0x00000006u); // 801D41D8
  c->r[10]=c->r[1]+0x00000008u; // 801D41DC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 801D41E0
  c->r[9]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D41E4
  c->r[4]=c->r[3]-c->r[12]; // 801D41E8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D41EC
  c->r[3]=R8(c->r[7]+c->r[6]); // 801D41F0
  c->r[4]=c->r[4]^0x80000000u; // 801D41F4
  W32(c->r[1]+0x00000094u,c->r[4]); // 801D41F8
  c->r[7]=c->r[26]&c->r[5]; // 801D41FC
  {uint32_t ea=c->r[29]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D4200
  c->r[3]=c->r[3]-c->r[11]; // 801D4204
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 801D4208
  c->r[3]=c->r[3]^0x80000000u; // 801D420C
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[7]); // 801D4210
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801D4214
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[1]=RF64(ea);} // 801D4218
  c->r[6]=c->r[23]|c->r[23]; // 801D421C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 801D4220
  c->r[8]=c->r[30]|c->r[30]; // 801D4224
  W32(c->r[1]+0x00000094u,c->r[3]); // 801D4228
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801D422C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D4230
  c->r[3]=c->r[1]+0x00000048u; // 801D4234
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 801D4238
  c->r[4]=c->r[1]+0x00000040u; // 801D423C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[6]=RF64(ea);} // 801D4240
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801D4244
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801D4248
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 801D424C
  c->r[5]=0u+0x00000001u; // 801D4250
  {uint32_t ea=c->r[10]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4254
  {uint32_t ea=c->r[10]+c->r[9]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4258
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801D425C
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 801D4260
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D4264
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 801D4268
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 801D426C
  c->f[2]=c->ps1[2]=S(c->f[5]/c->f[2]); // 801D4270
  W32(c->r[1]+0x0000008Cu,c->r[12]); // 801D4274
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 801D4278
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[8]);} // 801D427C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 801D4280
  {uint32_t ea=c->r[27]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D4284
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 801D4288
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 801D428C
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[6]); // 801D4290
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 801D4294
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 801D4298
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 801D429C
  {uint32_t ea=c->r[23]+c->r[0]; WF32(ea,c->f[5]);} // 801D42A0
  {uint32_t ea=c->r[22]+c->r[0]; WF32(ea,c->f[5]);} // 801D42A4
  {uint32_t ea=c->r[25]+c->r[9]; WF32(ea,c->f[4]);} // 801D42A8
  {uint32_t ea=c->r[22]+c->r[9]; WF32(ea,c->f[4]);} // 801D42AC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 801D42B0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801D42B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 801D42B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801D42BC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 801D42C0
  {uint32_t ea=c->r[25]+c->r[0]; WF32(ea,c->f[2]);} // 801D42C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D42C8
  {uint32_t ea=c->r[24]+c->r[0]; WF32(ea,c->f[2]);} // 801D42CC
  {uint32_t ea=c->r[23]+c->r[9]; WF32(ea,c->f[0]);} // 801D42D0
  {uint32_t ea=c->r[24]+c->r[9]; WF32(ea,c->f[0]);} // 801D42D4
  c->lr=0x801D42DCu; f_801DB208(c); // 801D42D8
L_801D42DC:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 801D42DC
  c->r[11]=c->r[1]+0x000000D0u; // 801D42E0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 801D42E4
  c->lr=0x801D42ECu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D42E8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801D42EC
  c->lr=c->r[0]; // 801D42F0
  c->r[1]=c->r[1]+0x000000E0u; // 801D42F4
  return; // 801D42F8
}

// DrawFrame4__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2PCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_801D42FC(Ctx* __restrict c) {
  trace_call(0x801D42FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D42FC
  c->r[0]=c->lr; // 801D4300
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801D4304
  c->r[11]=c->r[1]+0x000000E0u; // 801D4308
  c->lr=0x801D4310u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D430C
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4310
  c->r[0]=0u+0xFFFFFFFFu; // 801D4314
  c->r[8]=0u+0x43300000u; // 801D4318
  c->r[24]=c->r[3]|c->r[3]; // 801D431C
  c->r[28]=c->r[7]|c->r[7]; // 801D4320
  W32(c->r[1]+0x000000A0u,c->r[8]); // 801D4324
  c->r[25]=c->r[4]|c->r[4]; // 801D4328
  c->r[26]=c->r[5]|c->r[5]; // 801D432C
  W32(c->r[1]+0x000000A8u,c->r[8]); // 801D4330
  c->r[27]=c->r[6]|c->r[6]; // 801D4334
  c->r[4]=c->r[28]|c->r[28]; // 801D4338
  c->r[3]=0u+0x00000000u; // 801D433C
  W32(c->r[1]+0x00000070u,c->r[0]); // 801D4340
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D4344
  W32(c->r[1]+0x00000078u,c->r[0]); // 801D4348
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801D434C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801D4350
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801D4354
  c->lr=0x801D435Cu; f_801DAB08(c); // 801D4358
  c->r[4]=R32(c->r[26]+0x00000004u); // 801D435C
  c->r[30]=c->r[3]|c->r[3]; // 801D4360
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801D4364
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D4368
  if (crb(c,2)) { goto L_801D4504; } // 801D436C
  c->r[3]=c->r[4]|c->r[4]; // 801D4370
  c->r[4]=c->r[30]|c->r[30]; // 801D4374
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4378
  c->r[5]=c->r[28]|c->r[28]; // 801D437C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D4380
  c->ctr=c->r[12]; // 801D4384
  if (true) { c->lr=0x801D438Cu; dispatch(c,c->ctr); } // 801D4388
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D438C
  c->r[29]=c->r[3]|c->r[3]; // 801D4390
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4394
  c->r[3]=c->r[1]+0x00000058u; // 801D4398
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 801D439C
  c->r[5]=0u+0x00000000u; // 801D43A0
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D43A4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 801D43A8
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D43AC
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D43B0
  c->r[31]=R8(c->r[26]+0x00000000u); // 801D43B4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801D43B8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801D43BC
  c->r[4]=R32(c->r[26]+0x00000004u); // 801D43C0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801D43C4
  c->lr=0x801D43CCu; f_801D88B0(c); // 801D43C8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 801D43CC
  c->r[3]=0u+0x802A0000u; // 801D43D0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D43D4
  c->r[6]=c->r[1]+0x00000038u; // 801D43D8
  c->r[3]=c->r[3]+0x00001970u; // 801D43DC
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D43E0
  c->r[4]=c->r[3]+c->r[0]; // 801D43E4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801D43E8
  c->r[0]=R8(c->r[4]+0x00000009u); // 801D43EC
  c->r[9]=c->r[1]+0x00000090u; // 801D43F0
  c->r[3]=R8(c->r[4]+0x00000008u); // 801D43F4
  c->r[31]=c->r[1]+0x00000080u; // 801D43F8
  c->r[8]=R8(c->r[4]+c->r[0]); // 801D43FC
  c->r[23]=c->r[4]+c->r[0]; // 801D4400
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 801D4404
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D4408
  W32(c->r[1]+0x000000ACu,c->r[8]); // 801D440C
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801D4410
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D4414
  c->r[7]=c->r[1]+0x00000088u; // 801D4418
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D441C
  c->r[5]=c->r[1]+0x00000098u; // 801D4420
  c->r[3]=c->r[0]-c->r[10]; // 801D4424
  c->r[0]=R8(c->r[23]+0x00000004u); // 801D4428
  c->r[3]=c->r[3]^0x80000000u; // 801D442C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D4430
  W32(c->r[1]+0x000000ACu,c->r[3]); // 801D4434
  c->r[0]=c->r[0]-c->r[8]; // 801D4438
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D443C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D4440
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D4444
  c->r[0]=c->r[0]^0x80000000u; // 801D4448
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801D444C
  c->r[3]=c->r[29]|c->r[29]; // 801D4450
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4454
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801D4458
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D445C
  c->r[4]=0u+0x00000001u; // 801D4460
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D4464
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D4468
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D446C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4470
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4474
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D4478
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D447C
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801D4480
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 801D4484
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801D4488
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 801D448C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D4490
  W32(c->r[1]+0x000000A4u,c->r[8]); // 801D4494
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D4498
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D449C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 801D44A0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D44A4
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D44A8
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 801D44AC
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 801D44B0
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[6]);} // 801D44B4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D44B8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D44BC
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 801D44C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D44C4
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 801D44C8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 801D44CC
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 801D44D0
  c->lr=0x801D44D8u; f_801DABC4(c); // 801D44D4
  c->r[3]=0u-c->r[29]; // 801D44D8
  c->r[0]=c->r[1]+0x00000070u; // 801D44DC
  c->r[3]=c->r[3]|c->r[29]; // 801D44E0
  c->r[6]=c->r[31]|c->r[31]; // 801D44E4
  c->r[5]=sraw(c,c->r[3],31); // 801D44E8
  c->r[8]=c->r[28]|c->r[28]; // 801D44EC
  c->r[7]=c->r[0]&c->r[5]; // 801D44F0
  c->r[3]=c->r[1]+0x00000068u; // 801D44F4
  c->r[4]=c->r[1]+0x00000060u; // 801D44F8
  c->r[5]=0u+0x00000001u; // 801D44FC
  c->lr=0x801D4504u; f_801DB208(c); // 801D4500
L_801D4504:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 801D4504
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D4508
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D450C
  if (crb(c,2)) { goto L_801D46BC; } // 801D4510
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4514
  c->r[4]=c->r[30]|c->r[30]; // 801D4518
  c->r[5]=c->r[28]|c->r[28]; // 801D451C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D4520
  c->ctr=c->r[12]; // 801D4524
  if (true) { c->lr=0x801D452Cu; dispatch(c,c->ctr); } // 801D4528
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D452C
  c->r[29]=c->r[3]|c->r[3]; // 801D4530
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4534
  c->r[3]=c->r[1]+0x00000050u; // 801D4538
  {uint32_t ea=c->r[25]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D453C
  c->r[5]=0u+0x00000000u; // 801D4540
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801D4544
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4548
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 801D454C
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4550
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 801D4554
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801D4558
  c->r[31]=R8(c->r[26]+0x00000008u); // 801D455C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 801D4560
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801D4564
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 801D4568
  {uint32_t ea=c->r[24]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D456C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 801D4570
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D4574
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801D4578
  c->lr=0x801D4580u; f_801D88B0(c); // 801D457C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 801D4580
  c->r[3]=0u+0x802A0000u; // 801D4584
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4588
  c->r[6]=c->r[1]+0x00000028u; // 801D458C
  c->r[3]=c->r[3]+0x00001970u; // 801D4590
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4594
  c->r[11]=c->r[3]+c->r[0]; // 801D4598
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801D459C
  c->r[0]=R8(c->r[11]+0x00000009u); // 801D45A0
  c->r[9]=c->r[1]+0x00000098u; // 801D45A4
  c->r[5]=R8(c->r[11]+0x00000008u); // 801D45A8
  c->r[8]=c->r[1]+0x00000088u; // 801D45AC
  c->r[4]=c->r[11]+c->r[0]; // 801D45B0
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D45B4
  c->r[7]=R8(c->r[4]+0x00000002u); // 801D45B8
  c->r[3]=c->r[11]+c->r[5]; // 801D45BC
  c->r[10]=R8(c->r[3]+0x00000002u); // 801D45C0
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D45C4
  c->r[0]=R8(c->r[11]+c->r[5]); // 801D45C8
  c->r[31]=c->r[1]+0x00000080u; // 801D45CC
  W32(c->r[1]+0x000000ACu,c->r[7]); // 801D45D0
  c->r[5]=c->r[1]+0x00000090u; // 801D45D4
  c->r[3]=c->r[0]-c->r[10]; // 801D45D8
  c->r[0]=R8(c->r[4]+0x00000006u); // 801D45DC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D45E0
  c->r[3]=c->r[3]^0x80000000u; // 801D45E4
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D45E8
  c->r[0]=c->r[0]-c->r[7]; // 801D45EC
  W32(c->r[1]+0x000000ACu,c->r[3]); // 801D45F0
  c->r[0]=c->r[0]^0x80000000u; // 801D45F4
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D45F8
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D45FC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D4600
  c->r[3]=c->r[29]|c->r[29]; // 801D4604
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801D4608
  c->r[4]=0u+0x00000001u; // 801D460C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4610
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801D4614
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4618
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D461C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D4620
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D4624
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4628
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D462C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4630
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D4634
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801D4638
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 801D463C
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801D4640
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 801D4644
  W32(c->r[1]+0x000000A4u,c->r[7]); // 801D4648
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D464C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 801D4650
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D4654
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D4658
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D465C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 801D4660
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 801D4664
  {uint32_t ea=c->r[31]+c->r[23]; WF32(ea,c->f[6]);} // 801D4668
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 801D466C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D4670
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D4674
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[2]);} // 801D4678
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D467C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 801D4680
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 801D4684
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 801D4688
  c->lr=0x801D4690u; f_801DABC4(c); // 801D468C
  c->r[3]=0u-c->r[29]; // 801D4690
  c->r[0]=c->r[1]+0x00000070u; // 801D4694
  c->r[3]=c->r[3]|c->r[29]; // 801D4698
  c->r[6]=c->r[31]|c->r[31]; // 801D469C
  c->r[5]=sraw(c,c->r[3],31); // 801D46A0
  c->r[8]=c->r[28]|c->r[28]; // 801D46A4
  c->r[7]=c->r[0]&c->r[5]; // 801D46A8
  c->r[3]=c->r[1]+0x00000068u; // 801D46AC
  c->r[4]=c->r[1]+0x00000060u; // 801D46B0
  c->r[5]=0u+0x00000001u; // 801D46B4
  c->lr=0x801D46BCu; f_801DB208(c); // 801D46B8
L_801D46BC:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 801D46BC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D46C0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D46C4
  if (crb(c,2)) { goto L_801D4878; } // 801D46C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D46CC
  c->r[4]=c->r[30]|c->r[30]; // 801D46D0
  c->r[5]=c->r[28]|c->r[28]; // 801D46D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D46D8
  c->ctr=c->r[12]; // 801D46DC
  if (true) { c->lr=0x801D46E4u; dispatch(c,c->ctr); } // 801D46E0
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D46E4
  c->r[29]=c->r[3]|c->r[3]; // 801D46E8
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D46EC
  c->r[3]=c->r[1]+0x00000048u; // 801D46F0
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D46F4
  c->r[5]=0u+0x00000000u; // 801D46F8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801D46FC
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4700
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4704
  c->r[31]=R8(c->r[26]+0x00000018u); // 801D4708
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 801D470C
  c->r[4]=R32(c->r[26]+0x0000001Cu); // 801D4710
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 801D4714
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 801D4718
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 801D471C
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4720
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 801D4724
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D4728
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 801D472C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801D4730
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 801D4734
  c->lr=0x801D473Cu; f_801D88B0(c); // 801D4738
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)10); // 801D473C
  c->r[3]=0u+0x802A0000u; // 801D4740
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4744
  c->r[5]=c->r[1]+0x00000018u; // 801D4748
  c->r[3]=c->r[3]+0x00001970u; // 801D474C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4750
  c->r[3]=c->r[3]+c->r[0]; // 801D4754
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D4758
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D475C
  c->r[9]=c->r[1]+0x00000088u; // 801D4760
  c->r[6]=R8(c->r[3]+0x00000008u); // 801D4764
  c->r[8]=c->r[1]+0x00000098u; // 801D4768
  c->r[4]=c->r[3]+c->r[0]; // 801D476C
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D4770
  c->r[3]=c->r[3]+c->r[6]; // 801D4774
  c->r[7]=R8(c->r[4]+0x00000006u); // 801D4778
  c->r[10]=R8(c->r[3]+0x00000006u); // 801D477C
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D4780
  W32(c->r[1]+0x000000ACu,c->r[7]); // 801D4784
  c->r[6]=c->r[1]+0x00000090u; // 801D4788
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D478C
  c->r[31]=c->r[1]+0x00000080u; // 801D4790
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D4794
  c->r[3]=c->r[0]-c->r[10]; // 801D4798
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D479C
  c->r[3]=c->r[3]^0x80000000u; // 801D47A0
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D47A4
  W32(c->r[1]+0x000000ACu,c->r[3]); // 801D47A8
  c->r[0]=c->r[0]-c->r[7]; // 801D47AC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D47B0
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D47B4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D47B8
  c->r[0]=c->r[0]^0x80000000u; // 801D47BC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D47C0
  c->r[3]=c->r[29]|c->r[29]; // 801D47C4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D47C8
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801D47CC
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D47D0
  c->r[4]=0u+0x00000001u; // 801D47D4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D47D8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D47DC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D47E0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D47E4
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D47E8
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D47EC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D47F0
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801D47F4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 801D47F8
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801D47FC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=RF64(ea);} // 801D4800
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D4804
  W32(c->r[1]+0x000000A4u,c->r[7]); // 801D4808
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D480C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D4810
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=RF64(ea);} // 801D4814
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D4818
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D481C
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 801D4820
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 801D4824
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 801D4828
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D482C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D4830
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 801D4834
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D4838
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[2]);} // 801D483C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 801D4840
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[0]);} // 801D4844
  c->lr=0x801D484Cu; f_801DABC4(c); // 801D4848
  c->r[3]=0u-c->r[29]; // 801D484C
  c->r[0]=c->r[1]+0x00000070u; // 801D4850
  c->r[3]=c->r[3]|c->r[29]; // 801D4854
  c->r[6]=c->r[31]|c->r[31]; // 801D4858
  c->r[5]=sraw(c,c->r[3],31); // 801D485C
  c->r[8]=c->r[28]|c->r[28]; // 801D4860
  c->r[7]=c->r[0]&c->r[5]; // 801D4864
  c->r[3]=c->r[1]+0x00000068u; // 801D4868
  c->r[4]=c->r[1]+0x00000060u; // 801D486C
  c->r[5]=0u+0x00000001u; // 801D4870
  c->lr=0x801D4878u; f_801DB208(c); // 801D4874
L_801D4878:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 801D4878
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D487C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D4880
  if (crb(c,2)) { goto L_801D4A28; } // 801D4884
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4888
  c->r[4]=c->r[30]|c->r[30]; // 801D488C
  c->r[5]=c->r[28]|c->r[28]; // 801D4890
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D4894
  c->ctr=c->r[12]; // 801D4898
  if (true) { c->lr=0x801D48A0u; dispatch(c,c->ctr); } // 801D489C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D48A0
  c->r[29]=c->r[3]|c->r[3]; // 801D48A4
  {uint32_t ea=c->r[27]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D48A8
  c->r[3]=c->r[1]+0x00000040u; // 801D48AC
  {uint32_t ea=c->r[25]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D48B0
  c->r[5]=0u+0x00000000u; // 801D48B4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 801D48B8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D48BC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 801D48C0
  c->r[25]=R8(c->r[26]+0x00000010u); // 801D48C4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 801D48C8
  c->r[4]=R32(c->r[26]+0x00000014u); // 801D48CC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801D48D0
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D48D4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 801D48D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D48DC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801D48E0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801D48E4
  c->lr=0x801D48ECu; f_801D88B0(c); // 801D48E8
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 801D48EC
  c->r[3]=0u+0x802A0000u; // 801D48F0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D48F4
  c->r[6]=c->r[1]+0x00000008u; // 801D48F8
  c->r[3]=c->r[3]+0x00001970u; // 801D48FC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4900
  c->r[7]=c->r[3]+c->r[0]; // 801D4904
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801D4908
  c->r[4]=R8(c->r[7]+0x00000009u); // 801D490C
  c->r[31]=c->r[1]+0x00000080u; // 801D4910
  c->r[5]=R8(c->r[7]+0x00000008u); // 801D4914
  c->r[9]=c->r[1]+0x00000090u; // 801D4918
  c->r[3]=c->r[7]+c->r[4]; // 801D491C
  c->r[0]=R8(c->r[7]+c->r[4]); // 801D4920
  c->r[8]=R8(c->r[3]+0x00000004u); // 801D4924
  c->r[3]=c->r[7]+c->r[5]; // 801D4928
  c->r[10]=R8(c->r[3]+0x00000004u); // 801D492C
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D4930
  W32(c->r[1]+0x000000ACu,c->r[8]); // 801D4934
  c->r[0]=c->r[0]-c->r[8]; // 801D4938
  c->r[3]=R8(c->r[3]+0x00000006u); // 801D493C
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D4940
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D4944
  c->r[0]=c->r[0]^0x80000000u; // 801D4948
  c->r[3]=c->r[3]-c->r[10]; // 801D494C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D4950
  c->r[3]=c->r[3]^0x80000000u; // 801D4954
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801D4958
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D495C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D4960
  W32(c->r[1]+0x000000ACu,c->r[3]); // 801D4964
  c->r[7]=c->r[1]+0x00000098u; // 801D4968
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 801D496C
  c->r[5]=c->r[1]+0x00000088u; // 801D4970
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D4974
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801D4978
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 801D497C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4980
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D4984
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801D4988
  c->r[3]=c->r[29]|c->r[29]; // 801D498C
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4990
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801D4994
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D4998
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D499C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D49A0
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D49A4
  {uint32_t ea=c->r[31]+c->r[11]; WF32(ea,c->f[7]);} // 801D49A8
  c->r[4]=0u+0x00000001u; // 801D49AC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D49B0
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D49B4
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 801D49B8
  W32(c->r[1]+0x000000A4u,c->r[10]); // 801D49BC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 801D49C0
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 801D49C4
  W32(c->r[1]+0x000000A4u,c->r[8]); // 801D49C8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 801D49CC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D49D0
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 801D49D4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 801D49D8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 801D49DC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 801D49E0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D49E4
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 801D49E8
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 801D49EC
  {uint32_t ea=c->r[31]+c->r[12]; WF32(ea,c->f[0]);} // 801D49F0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 801D49F4
  c->lr=0x801D49FCu; f_801DABC4(c); // 801D49F8
  c->r[3]=0u-c->r[29]; // 801D49FC
  c->r[0]=c->r[1]+0x00000070u; // 801D4A00
  c->r[3]=c->r[3]|c->r[29]; // 801D4A04
  c->r[6]=c->r[31]|c->r[31]; // 801D4A08
  c->r[5]=sraw(c,c->r[3],31); // 801D4A0C
  c->r[8]=c->r[28]|c->r[28]; // 801D4A10
  c->r[7]=c->r[0]&c->r[5]; // 801D4A14
  c->r[3]=c->r[1]+0x00000068u; // 801D4A18
  c->r[4]=c->r[1]+0x00000060u; // 801D4A1C
  c->r[5]=0u+0x00000001u; // 801D4A20
  c->lr=0x801D4A28u; f_801DB208(c); // 801D4A24
L_801D4A28:;
  c->r[11]=c->r[1]+0x000000E0u; // 801D4A28
  c->lr=0x801D4A30u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D4A2C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801D4A30
  c->lr=c->r[0]; // 801D4A34
  c->r[1]=c->r[1]+0x000000E0u; // 801D4A38
  return; // 801D4A3C
}

// DrawFrame8__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2PCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
void f_801D4A40(Ctx* __restrict c) {
  trace_call(0x801D4A40u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4A40
  c->r[0]=c->lr; // 801D4A44
  W32(c->r[1]+0x00000174u,c->r[0]); // 801D4A48
  c->r[11]=c->r[1]+0x00000170u; // 801D4A4C
  c->lr=0x801D4A54u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D4A50
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4A54
  c->r[0]=0u+0xFFFFFFFFu; // 801D4A58
  c->r[8]=0u+0x43300000u; // 801D4A5C
  c->r[27]=c->r[3]|c->r[3]; // 801D4A60
  c->r[31]=c->r[7]|c->r[7]; // 801D4A64
  W32(c->r[1]+0x00000138u,c->r[8]); // 801D4A68
  c->r[28]=c->r[4]|c->r[4]; // 801D4A6C
  c->r[29]=c->r[5]|c->r[5]; // 801D4A70
  W32(c->r[1]+0x00000140u,c->r[8]); // 801D4A74
  c->r[30]=c->r[6]|c->r[6]; // 801D4A78
  c->r[4]=c->r[31]|c->r[31]; // 801D4A7C
  c->r[3]=0u+0x00000000u; // 801D4A80
  W32(c->r[1]+0x00000108u,c->r[0]); // 801D4A84
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 801D4A88
  W32(c->r[1]+0x00000110u,c->r[0]); // 801D4A8C
  W32(c->r[1]+0x00000114u,c->r[0]); // 801D4A90
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801D4A94
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 801D4A98
  c->lr=0x801D4AA0u; f_801DAB08(c); // 801D4A9C
  c->r[4]=R32(c->r[29]+0x00000004u); // 801D4AA0
  c->r[25]=c->r[3]|c->r[3]; // 801D4AA4
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801D4AA8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D4AAC
  if (crb(c,2)) { goto L_801D4C38; } // 801D4AB0
  c->r[3]=c->r[4]|c->r[4]; // 801D4AB4
  c->r[4]=c->r[25]|c->r[25]; // 801D4AB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4ABC
  c->r[5]=c->r[31]|c->r[31]; // 801D4AC0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D4AC4
  c->ctr=c->r[12]; // 801D4AC8
  if (true) { c->lr=0x801D4AD0u; dispatch(c,c->ctr); } // 801D4ACC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4AD0
  c->r[24]=c->r[3]|c->r[3]; // 801D4AD4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4AD8
  c->r[3]=c->r[1]+0x000000F0u; // 801D4ADC
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 801D4AE0
  c->r[5]=0u+0x00000000u; // 801D4AE4
  c->r[26]=R8(c->r[29]+0x00000000u); // 801D4AE8
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 801D4AEC
  c->r[4]=R32(c->r[29]+0x00000004u); // 801D4AF0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801D4AF4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 801D4AF8
  c->lr=0x801D4B00u; f_801D88B0(c); // 801D4AFC
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 801D4B00
  c->r[3]=0u+0x802A0000u; // 801D4B04
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4B08
  c->r[6]=c->r[1]+0x00000040u; // 801D4B0C
  c->r[3]=c->r[3]+0x00001970u; // 801D4B10
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4B14
  c->r[4]=c->r[3]+c->r[0]; // 801D4B18
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801D4B1C
  c->r[0]=R8(c->r[4]+0x00000009u); // 801D4B20
  c->r[9]=c->r[1]+0x00000128u; // 801D4B24
  c->r[3]=R8(c->r[4]+0x00000008u); // 801D4B28
  c->r[26]=c->r[1]+0x00000118u; // 801D4B2C
  c->r[8]=R8(c->r[4]+c->r[0]); // 801D4B30
  c->r[23]=c->r[4]+c->r[0]; // 801D4B34
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 801D4B38
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D4B3C
  W32(c->r[1]+0x00000144u,c->r[8]); // 801D4B40
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801D4B44
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D4B48
  c->r[7]=c->r[1]+0x00000120u; // 801D4B4C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4B50
  c->r[5]=c->r[1]+0x00000130u; // 801D4B54
  c->r[3]=c->r[0]-c->r[10]; // 801D4B58
  c->r[0]=R8(c->r[23]+0x00000004u); // 801D4B5C
  c->r[3]=c->r[3]^0x80000000u; // 801D4B60
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D4B64
  W32(c->r[1]+0x00000144u,c->r[3]); // 801D4B68
  c->r[0]=c->r[0]-c->r[8]; // 801D4B6C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D4B70
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D4B74
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4B78
  c->r[0]=c->r[0]^0x80000000u; // 801D4B7C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 801D4B80
  c->r[3]=c->r[24]|c->r[24]; // 801D4B84
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4B88
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D4B8C
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4B90
  c->r[4]=0u+0x00000001u; // 801D4B94
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4B98
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D4B9C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D4BA0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4BA4
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4BA8
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D4BAC
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4BB0
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D4BB4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 801D4BB8
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D4BBC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 801D4BC0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D4BC4
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 801D4BC8
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D4BCC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D4BD0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 801D4BD4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D4BD8
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D4BDC
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 801D4BE0
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 801D4BE4
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[6]);} // 801D4BE8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D4BEC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D4BF0
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 801D4BF4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D4BF8
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 801D4BFC
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 801D4C00
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 801D4C04
  c->lr=0x801D4C0Cu; f_801DABC4(c); // 801D4C08
  c->r[3]=0u-c->r[24]; // 801D4C0C
  c->r[0]=c->r[1]+0x00000108u; // 801D4C10
  c->r[4]=c->r[3]|c->r[24]; // 801D4C14
  c->r[6]=c->r[26]|c->r[26]; // 801D4C18
  c->r[5]=sraw(c,c->r[4],31); // 801D4C1C
  c->r[3]=c->r[28]|c->r[28]; // 801D4C20
  c->r[7]=c->r[0]&c->r[5]; // 801D4C24
  c->r[8]=c->r[31]|c->r[31]; // 801D4C28
  c->r[4]=c->r[1]+0x00000100u; // 801D4C2C
  c->r[5]=0u+0x00000001u; // 801D4C30
  c->lr=0x801D4C38u; f_801DB208(c); // 801D4C34
L_801D4C38:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 801D4C38
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D4C3C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D4C40
  if (crb(c,2)) { goto L_801D4DF0; } // 801D4C44
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4C48
  c->r[4]=c->r[25]|c->r[25]; // 801D4C4C
  c->r[5]=c->r[31]|c->r[31]; // 801D4C50
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D4C54
  c->ctr=c->r[12]; // 801D4C58
  if (true) { c->lr=0x801D4C60u; dispatch(c,c->ctr); } // 801D4C5C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4C60
  c->r[24]=c->r[3]|c->r[3]; // 801D4C64
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4C68
  c->r[3]=c->r[1]+0x000000E0u; // 801D4C6C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4C70
  c->r[5]=0u+0x00000000u; // 801D4C74
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801D4C78
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4C7C
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[2]);} // 801D4C80
  c->r[26]=R8(c->r[29]+0x00000030u); // 801D4C84
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D4C88
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 801D4C8C
  c->r[4]=R32(c->r[29]+0x00000034u); // 801D4C90
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 801D4C94
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801D4C98
  c->lr=0x801D4CA0u; f_801D88B0(c); // 801D4C9C
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 801D4CA0
  c->r[3]=0u+0x802A0000u; // 801D4CA4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4CA8
  c->r[6]=c->r[1]+0x00000038u; // 801D4CAC
  c->r[3]=c->r[3]+0x00001970u; // 801D4CB0
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4CB4
  c->r[4]=c->r[3]+c->r[0]; // 801D4CB8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801D4CBC
  c->r[0]=R8(c->r[4]+0x00000009u); // 801D4CC0
  c->r[9]=c->r[1]+0x00000128u; // 801D4CC4
  c->r[3]=R8(c->r[4]+0x00000008u); // 801D4CC8
  c->r[26]=c->r[1]+0x00000118u; // 801D4CCC
  c->r[8]=R8(c->r[4]+c->r[0]); // 801D4CD0
  c->r[23]=c->r[4]+c->r[0]; // 801D4CD4
  {uint32_t ea=c->r[4]+c->r[3]; c->r[10]=R8(ea); c->r[4]=ea;} // 801D4CD8
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D4CDC
  W32(c->r[1]+0x00000144u,c->r[8]); // 801D4CE0
  c->r[11]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801D4CE4
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D4CE8
  c->r[7]=c->r[1]+0x00000120u; // 801D4CEC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4CF0
  c->r[5]=c->r[1]+0x00000130u; // 801D4CF4
  c->r[3]=c->r[0]-c->r[10]; // 801D4CF8
  c->r[0]=R8(c->r[23]+0x00000004u); // 801D4CFC
  c->r[3]=c->r[3]^0x80000000u; // 801D4D00
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D4D04
  W32(c->r[1]+0x00000144u,c->r[3]); // 801D4D08
  c->r[0]=c->r[0]-c->r[8]; // 801D4D0C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D4D10
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D4D14
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4D18
  c->r[0]=c->r[0]^0x80000000u; // 801D4D1C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801D4D20
  c->r[3]=c->r[24]|c->r[24]; // 801D4D24
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4D28
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D4D2C
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4D30
  c->r[4]=0u+0x00000001u; // 801D4D34
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4D38
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D4D3C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D4D40
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4D44
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4D48
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D4D4C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4D50
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D4D54
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 801D4D58
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D4D5C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 801D4D60
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D4D64
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 801D4D68
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D4D6C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D4D70
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 801D4D74
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D4D78
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D4D7C
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 801D4D80
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 801D4D84
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[6]);} // 801D4D88
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D4D8C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D4D90
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[2]);} // 801D4D94
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D4D98
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[2]);} // 801D4D9C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 801D4DA0
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 801D4DA4
  c->lr=0x801D4DACu; f_801DABC4(c); // 801D4DA8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4DAC
  c->r[0]=0u-c->r[24]; // 801D4DB0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4DB4
  c->r[0]=c->r[0]|c->r[24]; // 801D4DB8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4DBC
  c->r[3]=sraw(c,c->r[0],31); // 801D4DC0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D4DC4
  c->r[0]=c->r[1]+0x00000108u; // 801D4DC8
  c->r[7]=c->r[0]&c->r[3]; // 801D4DCC
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[2]);} // 801D4DD0
  c->r[6]=c->r[26]|c->r[26]; // 801D4DD4
  c->r[8]=c->r[31]|c->r[31]; // 801D4DD8
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 801D4DDC
  c->r[3]=c->r[1]+0x000000D8u; // 801D4DE0
  c->r[4]=c->r[1]+0x00000100u; // 801D4DE4
  c->r[5]=0u+0x00000001u; // 801D4DE8
  c->lr=0x801D4DF0u; f_801DB208(c); // 801D4DEC
L_801D4DF0:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801D4DF0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D4DF4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D4DF8
  if (crb(c,2)) { goto L_801D4FA4; } // 801D4DFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4E00
  c->r[4]=c->r[25]|c->r[25]; // 801D4E04
  c->r[5]=c->r[31]|c->r[31]; // 801D4E08
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D4E0C
  c->ctr=c->r[12]; // 801D4E10
  if (true) { c->lr=0x801D4E18u; dispatch(c,c->ctr); } // 801D4E14
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4E18
  c->r[24]=c->r[3]|c->r[3]; // 801D4E1C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4E20
  c->r[3]=c->r[1]+0x000000C8u; // 801D4E24
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 801D4E28
  c->r[5]=0u+0x00000000u; // 801D4E2C
  c->r[26]=R8(c->r[29]+0x00000008u); // 801D4E30
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 801D4E34
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801D4E38
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801D4E3C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 801D4E40
  c->lr=0x801D4E48u; f_801D88B0(c); // 801D4E44
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 801D4E48
  c->r[3]=0u+0x802A0000u; // 801D4E4C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4E50
  c->r[6]=c->r[1]+0x00000030u; // 801D4E54
  c->r[3]=c->r[3]+0x00001970u; // 801D4E58
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4E5C
  c->r[11]=c->r[3]+c->r[0]; // 801D4E60
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801D4E64
  c->r[0]=R8(c->r[11]+0x00000009u); // 801D4E68
  c->r[9]=c->r[1]+0x00000130u; // 801D4E6C
  c->r[5]=R8(c->r[11]+0x00000008u); // 801D4E70
  c->r[8]=c->r[1]+0x00000120u; // 801D4E74
  c->r[4]=c->r[11]+c->r[0]; // 801D4E78
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D4E7C
  c->r[7]=R8(c->r[4]+0x00000002u); // 801D4E80
  c->r[3]=c->r[11]+c->r[5]; // 801D4E84
  c->r[10]=R8(c->r[3]+0x00000002u); // 801D4E88
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D4E8C
  c->r[0]=R8(c->r[11]+c->r[5]); // 801D4E90
  c->r[26]=c->r[1]+0x00000118u; // 801D4E94
  W32(c->r[1]+0x00000144u,c->r[7]); // 801D4E98
  c->r[5]=c->r[1]+0x00000128u; // 801D4E9C
  c->r[3]=c->r[0]-c->r[10]; // 801D4EA0
  c->r[0]=R8(c->r[4]+0x00000006u); // 801D4EA4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4EA8
  c->r[3]=c->r[3]^0x80000000u; // 801D4EAC
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D4EB0
  c->r[0]=c->r[0]-c->r[7]; // 801D4EB4
  W32(c->r[1]+0x00000144u,c->r[3]); // 801D4EB8
  c->r[0]=c->r[0]^0x80000000u; // 801D4EBC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D4EC0
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D4EC4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4EC8
  c->r[3]=c->r[24]|c->r[24]; // 801D4ECC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801D4ED0
  c->r[4]=0u+0x00000001u; // 801D4ED4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4ED8
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D4EDC
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4EE0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D4EE4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D4EE8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D4EEC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D4EF0
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4EF4
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4EF8
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D4EFC
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D4F00
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 801D4F04
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D4F08
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 801D4F0C
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 801D4F10
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D4F14
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 801D4F18
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D4F1C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D4F20
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D4F24
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 801D4F28
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 801D4F2C
  {uint32_t ea=c->r[26]+c->r[23]; WF32(ea,c->f[6]);} // 801D4F30
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 801D4F34
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D4F38
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D4F3C
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[2]);} // 801D4F40
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D4F44
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 801D4F48
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 801D4F4C
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 801D4F50
  c->lr=0x801D4F58u; f_801DABC4(c); // 801D4F54
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4F58
  c->r[0]=0u-c->r[24]; // 801D4F5C
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4F60
  c->r[0]=c->r[0]|c->r[24]; // 801D4F64
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4F68
  c->r[3]=sraw(c,c->r[0],31); // 801D4F6C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801D4F70
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4F74
  c->r[0]=c->r[1]+0x00000108u; // 801D4F78
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 801D4F7C
  c->r[7]=c->r[0]&c->r[3]; // 801D4F80
  c->r[6]=c->r[26]|c->r[26]; // 801D4F84
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D4F88
  c->r[8]=c->r[31]|c->r[31]; // 801D4F8C
  c->r[3]=c->r[1]+0x000000C0u; // 801D4F90
  c->r[4]=c->r[1]+0x00000100u; // 801D4F94
  c->r[5]=0u+0x00000001u; // 801D4F98
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 801D4F9C
  c->lr=0x801D4FA4u; f_801DB208(c); // 801D4FA0
L_801D4FA4:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 801D4FA4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D4FA8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D4FAC
  if (crb(c,2)) { goto L_801D5170; } // 801D4FB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4FB4
  c->r[4]=c->r[25]|c->r[25]; // 801D4FB8
  c->r[5]=c->r[31]|c->r[31]; // 801D4FBC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D4FC0
  c->ctr=c->r[12]; // 801D4FC4
  if (true) { c->lr=0x801D4FCCu; dispatch(c,c->ctr); } // 801D4FC8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4FCC
  c->r[24]=c->r[3]|c->r[3]; // 801D4FD0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4FD4
  c->r[3]=c->r[1]+0x000000B0u; // 801D4FD8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4FDC
  c->r[5]=0u+0x00000000u; // 801D4FE0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801D4FE4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4FE8
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 801D4FEC
  c->r[26]=R8(c->r[29]+0x00000028u); // 801D4FF0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D4FF4
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 801D4FF8
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 801D4FFC
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 801D5000
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 801D5004
  c->lr=0x801D500Cu; f_801D88B0(c); // 801D5008
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 801D500C
  c->r[3]=0u+0x802A0000u; // 801D5010
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5014
  c->r[6]=c->r[1]+0x00000028u; // 801D5018
  c->r[3]=c->r[3]+0x00001970u; // 801D501C
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5020
  c->r[11]=c->r[3]+c->r[0]; // 801D5024
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801D5028
  c->r[0]=R8(c->r[11]+0x00000009u); // 801D502C
  c->r[9]=c->r[1]+0x00000130u; // 801D5030
  c->r[5]=R8(c->r[11]+0x00000008u); // 801D5034
  c->r[8]=c->r[1]+0x00000120u; // 801D5038
  c->r[4]=c->r[11]+c->r[0]; // 801D503C
  c->r[23]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D5040
  c->r[7]=R8(c->r[4]+0x00000002u); // 801D5044
  c->r[3]=c->r[11]+c->r[5]; // 801D5048
  c->r[10]=R8(c->r[3]+0x00000002u); // 801D504C
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D5050
  c->r[0]=R8(c->r[11]+c->r[5]); // 801D5054
  c->r[26]=c->r[1]+0x00000118u; // 801D5058
  W32(c->r[1]+0x00000144u,c->r[7]); // 801D505C
  c->r[5]=c->r[1]+0x00000128u; // 801D5060
  c->r[3]=c->r[0]-c->r[10]; // 801D5064
  c->r[0]=R8(c->r[4]+0x00000006u); // 801D5068
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D506C
  c->r[3]=c->r[3]^0x80000000u; // 801D5070
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D5074
  c->r[0]=c->r[0]-c->r[7]; // 801D5078
  W32(c->r[1]+0x00000144u,c->r[3]); // 801D507C
  c->r[0]=c->r[0]^0x80000000u; // 801D5080
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D5084
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D5088
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D508C
  c->r[3]=c->r[24]|c->r[24]; // 801D5090
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801D5094
  c->r[4]=0u+0x00000001u; // 801D5098
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D509C
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D50A0
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D50A4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D50A8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D50AC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D50B0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D50B4
  {uint32_t ea=c->r[6]+c->r[23]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D50B8
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D50BC
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D50C0
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D50C4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 801D50C8
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D50CC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 801D50D0
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 801D50D4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D50D8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 801D50DC
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D50E0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D50E4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D50E8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[7]);} // 801D50EC
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[7]);} // 801D50F0
  {uint32_t ea=c->r[26]+c->r[23]; WF32(ea,c->f[6]);} // 801D50F4
  {uint32_t ea=c->r[8]+c->r[23]; WF32(ea,c->f[6]);} // 801D50F8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D50FC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D5100
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[2]);} // 801D5104
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D5108
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[2]);} // 801D510C
  {uint32_t ea=c->r[9]+c->r[23]; WF32(ea,c->f[0]);} // 801D5110
  {uint32_t ea=c->r[5]+c->r[23]; WF32(ea,c->f[0]);} // 801D5114
  c->lr=0x801D511Cu; f_801DABC4(c); // 801D5118
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D511C
  c->r[0]=0u-c->r[24]; // 801D5120
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5124
  c->r[0]=c->r[0]|c->r[24]; // 801D5128
  c->r[3]=sraw(c,c->r[0],31); // 801D512C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D5130
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801D5134
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5138
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D513C
  c->r[0]=c->r[1]+0x00000108u; // 801D5140
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801D5144
  c->r[7]=c->r[0]&c->r[3]; // 801D5148
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D514C
  c->r[6]=c->r[26]|c->r[26]; // 801D5150
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 801D5154
  c->r[8]=c->r[31]|c->r[31]; // 801D5158
  c->r[3]=c->r[1]+0x000000A8u; // 801D515C
  c->r[4]=c->r[1]+0x00000100u; // 801D5160
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 801D5164
  c->r[5]=0u+0x00000001u; // 801D5168
  c->lr=0x801D5170u; f_801DB208(c); // 801D516C
L_801D5170:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801D5170
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D5174
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D5178
  if (crb(c,2)) { goto L_801D5334; } // 801D517C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D5180
  c->r[4]=c->r[25]|c->r[25]; // 801D5184
  c->r[5]=c->r[31]|c->r[31]; // 801D5188
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D518C
  c->ctr=c->r[12]; // 801D5190
  if (true) { c->lr=0x801D5198u; dispatch(c,c->ctr); } // 801D5194
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5198
  c->r[24]=c->r[3]|c->r[3]; // 801D519C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D51A0
  c->r[3]=c->r[1]+0x00000098u; // 801D51A4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 801D51A8
  c->r[5]=0u+0x00000000u; // 801D51AC
  c->r[26]=R8(c->r[29]+0x00000018u); // 801D51B0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 801D51B4
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 801D51B8
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801D51BC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 801D51C0
  c->lr=0x801D51C8u; f_801D88B0(c); // 801D51C4
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 801D51C8
  c->r[3]=0u+0x802A0000u; // 801D51CC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D51D0
  c->r[5]=c->r[1]+0x00000020u; // 801D51D4
  c->r[3]=c->r[3]+0x00001970u; // 801D51D8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D51DC
  c->r[3]=c->r[3]+c->r[0]; // 801D51E0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D51E4
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D51E8
  c->r[9]=c->r[1]+0x00000120u; // 801D51EC
  c->r[6]=R8(c->r[3]+0x00000008u); // 801D51F0
  c->r[8]=c->r[1]+0x00000130u; // 801D51F4
  c->r[4]=c->r[3]+c->r[0]; // 801D51F8
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D51FC
  c->r[3]=c->r[3]+c->r[6]; // 801D5200
  c->r[7]=R8(c->r[4]+0x00000006u); // 801D5204
  c->r[10]=R8(c->r[3]+0x00000006u); // 801D5208
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D520C
  W32(c->r[1]+0x00000144u,c->r[7]); // 801D5210
  c->r[6]=c->r[1]+0x00000128u; // 801D5214
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D5218
  c->r[26]=c->r[1]+0x00000118u; // 801D521C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D5220
  c->r[3]=c->r[0]-c->r[10]; // 801D5224
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D5228
  c->r[3]=c->r[3]^0x80000000u; // 801D522C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D5230
  W32(c->r[1]+0x00000144u,c->r[3]); // 801D5234
  c->r[0]=c->r[0]-c->r[7]; // 801D5238
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D523C
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D5240
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D5244
  c->r[0]=c->r[0]^0x80000000u; // 801D5248
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801D524C
  c->r[3]=c->r[24]|c->r[24]; // 801D5250
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D5254
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D5258
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D525C
  c->r[4]=0u+0x00000001u; // 801D5260
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D5264
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D5268
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D526C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D5270
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5274
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D5278
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D527C
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D5280
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 801D5284
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D5288
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 801D528C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D5290
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 801D5294
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D5298
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D529C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 801D52A0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D52A4
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D52A8
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 801D52AC
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 801D52B0
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 801D52B4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D52B8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D52BC
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 801D52C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D52C4
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 801D52C8
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 801D52CC
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 801D52D0
  c->lr=0x801D52D8u; f_801DABC4(c); // 801D52D4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D52D8
  c->r[0]=0u-c->r[24]; // 801D52DC
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D52E0
  c->r[0]=c->r[0]|c->r[24]; // 801D52E4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D52E8
  c->r[3]=sraw(c,c->r[0],31); // 801D52EC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D52F0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 801D52F4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D52F8
  c->r[0]=c->r[1]+0x00000108u; // 801D52FC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801D5300
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5304
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 801D5308
  c->r[7]=c->r[0]&c->r[3]; // 801D530C
  c->r[6]=c->r[26]|c->r[26]; // 801D5310
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D5314
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 801D5318
  c->r[8]=c->r[31]|c->r[31]; // 801D531C
  c->r[3]=c->r[1]+0x00000090u; // 801D5320
  c->r[4]=c->r[1]+0x00000100u; // 801D5324
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 801D5328
  c->r[5]=0u+0x00000001u; // 801D532C
  c->lr=0x801D5334u; f_801DB208(c); // 801D5330
L_801D5334:;
  c->r[3]=R32(c->r[29]+0x0000003Cu); // 801D5334
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D5338
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D533C
  if (crb(c,2)) { goto L_801D5500; } // 801D5340
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D5344
  c->r[4]=c->r[25]|c->r[25]; // 801D5348
  c->r[5]=c->r[31]|c->r[31]; // 801D534C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D5350
  c->ctr=c->r[12]; // 801D5354
  if (true) { c->lr=0x801D535Cu; dispatch(c,c->ctr); } // 801D5358
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D535C
  c->r[24]=c->r[3]|c->r[3]; // 801D5360
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5364
  c->r[3]=c->r[1]+0x00000080u; // 801D5368
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D536C
  c->r[5]=0u+0x00000000u; // 801D5370
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801D5374
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5378
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 801D537C
  c->r[26]=R8(c->r[29]+0x00000038u); // 801D5380
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D5384
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 801D5388
  c->r[4]=R32(c->r[29]+0x0000003Cu); // 801D538C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 801D5390
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801D5394
  c->lr=0x801D539Cu; f_801D88B0(c); // 801D5398
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 801D539C
  c->r[3]=0u+0x802A0000u; // 801D53A0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D53A4
  c->r[5]=c->r[1]+0x00000018u; // 801D53A8
  c->r[3]=c->r[3]+0x00001970u; // 801D53AC
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D53B0
  c->r[3]=c->r[3]+c->r[0]; // 801D53B4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D53B8
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D53BC
  c->r[9]=c->r[1]+0x00000120u; // 801D53C0
  c->r[6]=R8(c->r[3]+0x00000008u); // 801D53C4
  c->r[8]=c->r[1]+0x00000130u; // 801D53C8
  c->r[4]=c->r[3]+c->r[0]; // 801D53CC
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D53D0
  c->r[3]=c->r[3]+c->r[6]; // 801D53D4
  c->r[7]=R8(c->r[4]+0x00000006u); // 801D53D8
  c->r[10]=R8(c->r[3]+0x00000006u); // 801D53DC
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D53E0
  W32(c->r[1]+0x00000144u,c->r[7]); // 801D53E4
  c->r[6]=c->r[1]+0x00000128u; // 801D53E8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D53EC
  c->r[26]=c->r[1]+0x00000118u; // 801D53F0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D53F4
  c->r[3]=c->r[0]-c->r[10]; // 801D53F8
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D53FC
  c->r[3]=c->r[3]^0x80000000u; // 801D5400
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D5404
  W32(c->r[1]+0x00000144u,c->r[3]); // 801D5408
  c->r[0]=c->r[0]-c->r[7]; // 801D540C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D5410
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D5414
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D5418
  c->r[0]=c->r[0]^0x80000000u; // 801D541C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D5420
  c->r[3]=c->r[24]|c->r[24]; // 801D5424
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D5428
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D542C
  {uint32_t ea=c->r[5]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5430
  c->r[4]=0u+0x00000001u; // 801D5434
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D5438
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D543C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D5440
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D5444
  {uint32_t ea=c->r[5]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5448
  c->f[4]=c->ps1[4]=S(c->f[3]/c->f[4]); // 801D544C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5450
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D5454
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 801D5458
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D545C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[5]=RF64(ea);} // 801D5460
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D5464
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 801D5468
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 801D546C
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[8]); // 801D5470
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=RF64(ea);} // 801D5474
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D5478
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D547C
  {uint32_t ea=c->r[8]+c->r[11]; WF32(ea,c->f[7]);} // 801D5480
  {uint32_t ea=c->r[6]+c->r[12]; WF32(ea,c->f[6]);} // 801D5484
  {uint32_t ea=c->r[8]+c->r[12]; WF32(ea,c->f[6]);} // 801D5488
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801D548C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[8]); // 801D5490
  {uint32_t ea=c->r[6]+c->r[11]; WF32(ea,c->f[2]);} // 801D5494
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D5498
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 801D549C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[0]);} // 801D54A0
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 801D54A4
  c->lr=0x801D54ACu; f_801DABC4(c); // 801D54A8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D54AC
  c->r[0]=0u-c->r[24]; // 801D54B0
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D54B4
  c->r[0]=c->r[0]|c->r[24]; // 801D54B8
  c->r[3]=sraw(c,c->r[0],31); // 801D54BC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D54C0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801D54C4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D54C8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D54CC
  c->r[0]=c->r[1]+0x00000108u; // 801D54D0
  c->r[7]=c->r[0]&c->r[3]; // 801D54D4
  c->r[6]=c->r[26]|c->r[26]; // 801D54D8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 801D54DC
  c->r[8]=c->r[31]|c->r[31]; // 801D54E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D54E4
  c->r[3]=c->r[1]+0x00000078u; // 801D54E8
  c->r[4]=c->r[1]+0x00000100u; // 801D54EC
  c->r[5]=0u+0x00000001u; // 801D54F0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 801D54F4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 801D54F8
  c->lr=0x801D5500u; f_801DB208(c); // 801D54FC
L_801D5500:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801D5500
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D5504
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D5508
  if (crb(c,2)) { goto L_801D56B4; } // 801D550C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D5510
  c->r[4]=c->r[25]|c->r[25]; // 801D5514
  c->r[5]=c->r[31]|c->r[31]; // 801D5518
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D551C
  c->ctr=c->r[12]; // 801D5520
  if (true) { c->lr=0x801D5528u; dispatch(c,c->ctr); } // 801D5524
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5528
  c->r[24]=c->r[3]|c->r[3]; // 801D552C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5530
  c->r[3]=c->r[1]+0x00000068u; // 801D5534
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 801D5538
  c->r[5]=0u+0x00000000u; // 801D553C
  c->r[26]=R8(c->r[29]+0x00000010u); // 801D5540
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 801D5544
  c->r[4]=R32(c->r[29]+0x00000014u); // 801D5548
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801D554C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 801D5550
  c->lr=0x801D5558u; f_801D88B0(c); // 801D5554
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)10); // 801D5558
  c->r[3]=0u+0x802A0000u; // 801D555C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D5560
  c->r[6]=c->r[1]+0x00000010u; // 801D5564
  c->r[3]=c->r[3]+0x00001970u; // 801D5568
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D556C
  c->r[7]=c->r[3]+c->r[0]; // 801D5570
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 801D5574
  c->r[4]=R8(c->r[7]+0x00000009u); // 801D5578
  c->r[26]=c->r[1]+0x00000118u; // 801D557C
  c->r[5]=R8(c->r[7]+0x00000008u); // 801D5580
  c->r[9]=c->r[1]+0x00000128u; // 801D5584
  c->r[3]=c->r[7]+c->r[4]; // 801D5588
  c->r[0]=R8(c->r[7]+c->r[4]); // 801D558C
  c->r[8]=R8(c->r[3]+0x00000004u); // 801D5590
  c->r[3]=c->r[7]+c->r[5]; // 801D5594
  c->r[10]=R8(c->r[3]+0x00000004u); // 801D5598
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D559C
  W32(c->r[1]+0x00000144u,c->r[8]); // 801D55A0
  c->r[0]=c->r[0]-c->r[8]; // 801D55A4
  c->r[3]=R8(c->r[3]+0x00000006u); // 801D55A8
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D55AC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D55B0
  c->r[0]=c->r[0]^0x80000000u; // 801D55B4
  c->r[3]=c->r[3]-c->r[10]; // 801D55B8
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D55BC
  c->r[3]=c->r[3]^0x80000000u; // 801D55C0
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D55C4
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D55C8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D55CC
  W32(c->r[1]+0x00000144u,c->r[3]); // 801D55D0
  c->r[7]=c->r[1]+0x00000130u; // 801D55D4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 801D55D8
  c->r[5]=c->r[1]+0x00000120u; // 801D55DC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D55E0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801D55E4
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 801D55E8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D55EC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D55F0
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D55F4
  c->r[3]=c->r[24]|c->r[24]; // 801D55F8
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D55FC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D5600
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D5604
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5608
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D560C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5610
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[7]);} // 801D5614
  c->r[4]=0u+0x00000001u; // 801D5618
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D561C
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D5620
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 801D5624
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D5628
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 801D562C
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 801D5630
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 801D5634
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 801D5638
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D563C
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 801D5640
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 801D5644
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 801D5648
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 801D564C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D5650
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 801D5654
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 801D5658
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 801D565C
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 801D5660
  c->lr=0x801D5668u; f_801DABC4(c); // 801D5664
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5668
  c->r[0]=0u-c->r[24]; // 801D566C
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5670
  c->r[0]=c->r[0]|c->r[24]; // 801D5674
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5678
  c->r[3]=sraw(c,c->r[0],31); // 801D567C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801D5680
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5684
  c->r[0]=c->r[1]+0x00000108u; // 801D5688
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 801D568C
  c->r[7]=c->r[0]&c->r[3]; // 801D5690
  c->r[6]=c->r[26]|c->r[26]; // 801D5694
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801D5698
  c->r[8]=c->r[31]|c->r[31]; // 801D569C
  c->r[3]=c->r[1]+0x00000060u; // 801D56A0
  c->r[4]=c->r[1]+0x00000100u; // 801D56A4
  c->r[5]=0u+0x00000001u; // 801D56A8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801D56AC
  c->lr=0x801D56B4u; f_801DB208(c); // 801D56B0
L_801D56B4:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 801D56B4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D56B8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D56BC
  if (crb(c,2)) { goto L_801D5870; } // 801D56C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D56C4
  c->r[4]=c->r[25]|c->r[25]; // 801D56C8
  c->r[5]=c->r[31]|c->r[31]; // 801D56CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D56D0
  c->ctr=c->r[12]; // 801D56D4
  if (true) { c->lr=0x801D56DCu; dispatch(c,c->ctr); } // 801D56D8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D56DC
  c->r[24]=c->r[3]|c->r[3]; // 801D56E0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D56E4
  c->r[3]=c->r[1]+0x00000050u; // 801D56E8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D56EC
  c->r[5]=0u+0x00000000u; // 801D56F0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801D56F4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D56F8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 801D56FC
  c->r[25]=R8(c->r[29]+0x00000020u); // 801D5700
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D5704
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 801D5708
  c->r[4]=R32(c->r[29]+0x00000024u); // 801D570C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D5710
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 801D5714
  c->lr=0x801D571Cu; f_801D88B0(c); // 801D5718
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 801D571C
  c->r[3]=0u+0x802A0000u; // 801D5720
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D5724
  c->r[6]=c->r[1]+0x00000008u; // 801D5728
  c->r[3]=c->r[3]+0x00001970u; // 801D572C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5730
  c->r[7]=c->r[3]+c->r[0]; // 801D5734
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801D5738
  c->r[4]=R8(c->r[7]+0x00000009u); // 801D573C
  c->r[27]=c->r[1]+0x00000118u; // 801D5740
  c->r[5]=R8(c->r[7]+0x00000008u); // 801D5744
  c->r[9]=c->r[1]+0x00000128u; // 801D5748
  c->r[3]=c->r[7]+c->r[4]; // 801D574C
  c->r[0]=R8(c->r[7]+c->r[4]); // 801D5750
  c->r[8]=R8(c->r[3]+0x00000004u); // 801D5754
  c->r[3]=c->r[7]+c->r[5]; // 801D5758
  c->r[10]=R8(c->r[3]+0x00000004u); // 801D575C
  c->r[11]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D5760
  W32(c->r[1]+0x00000144u,c->r[8]); // 801D5764
  c->r[0]=c->r[0]-c->r[8]; // 801D5768
  c->r[3]=R8(c->r[3]+0x00000006u); // 801D576C
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D5770
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D5774
  c->r[0]=c->r[0]^0x80000000u; // 801D5778
  c->r[3]=c->r[3]-c->r[10]; // 801D577C
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[8]=RF64(ea);} // 801D5780
  c->r[3]=c->r[3]^0x80000000u; // 801D5784
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D5788
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[5]=RF64(ea);} // 801D578C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 801D5790
  W32(c->r[1]+0x00000144u,c->r[3]); // 801D5794
  c->r[7]=c->r[1]+0x00000130u; // 801D5798
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 801D579C
  c->r[5]=c->r[1]+0x00000120u; // 801D57A0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D57A4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801D57A8
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 801D57AC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D57B0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D57B4
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D57B8
  c->r[3]=c->r[24]|c->r[24]; // 801D57BC
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D57C0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801D57C4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801D57C8
  {uint32_t ea=c->r[6]+c->r[12]; c->f[1]=c->ps1[1]=RF32(ea);} // 801D57CC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801D57D0
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D57D4
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[7]);} // 801D57D8
  c->r[4]=0u+0x00000001u; // 801D57DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801D57E0
  {uint32_t ea=c->r[9]+c->r[11]; WF32(ea,c->f[7]);} // 801D57E4
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 801D57E8
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 801D57EC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 801D57F0
  {uint32_t ea=c->r[7]+c->r[12]; WF32(ea,c->f[6]);} // 801D57F4
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 801D57F8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 801D57FC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801D5800
  {uint32_t ea=c->r[9]+c->r[12]; WF32(ea,c->f[6]);} // 801D5804
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 801D5808
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 801D580C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 801D5810
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D5814
  {uint32_t ea=c->r[7]+c->r[11]; WF32(ea,c->f[1]);} // 801D5818
  {uint32_t ea=c->r[5]+c->r[11]; WF32(ea,c->f[1]);} // 801D581C
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[0]);} // 801D5820
  {uint32_t ea=c->r[5]+c->r[12]; WF32(ea,c->f[0]);} // 801D5824
  c->lr=0x801D582Cu; f_801DABC4(c); // 801D5828
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D582C
  c->r[0]=0u-c->r[24]; // 801D5830
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5834
  c->r[0]=c->r[0]|c->r[24]; // 801D5838
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D583C
  c->r[3]=sraw(c,c->r[0],31); // 801D5840
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D5844
  c->r[0]=c->r[1]+0x00000108u; // 801D5848
  c->r[7]=c->r[0]&c->r[3]; // 801D584C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 801D5850
  c->r[6]=c->r[27]|c->r[27]; // 801D5854
  c->r[8]=c->r[31]|c->r[31]; // 801D5858
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801D585C
  c->r[3]=c->r[1]+0x00000048u; // 801D5860
  c->r[4]=c->r[1]+0x00000100u; // 801D5864
  c->r[5]=0u+0x00000001u; // 801D5868
  c->lr=0x801D5870u; f_801DB208(c); // 801D586C
L_801D5870:;
  c->r[11]=c->r[1]+0x00000170u; // 801D5870
  c->lr=0x801D5878u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5874
  c->r[0]=R32(c->r[1]+0x00000174u); // 801D5878
  c->lr=c->r[0]; // 801D587C
  c->r[1]=c->r[1]+0x00000170u; // 801D5880
  return; // 801D5884
}

// GetFrameSize__Q34nw4r3lyt6WindowFUcPCQ44nw4r3lyt6Window5Frame
void f_801D5888(Ctx* __restrict c) {
  trace_call(0x801D5888u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5888
  c->r[0]=c->lr; // 801D588C
  cmps(c,0,(int32_t)c->r[5],4); // 801D5890
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D5894
  c->r[0]=0u+0x00000000u; // 801D5898
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D589C
  c->r[31]=c->r[6]|c->r[6]; // 801D58A0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801D58A4
  c->r[30]=c->r[3]|c->r[3]; // 801D58A8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801D58AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D58B0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D58B4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D58B8
  if (crb(c,2)) { goto L_801D5908; } // 801D58BC
  if (!crb(c,0)) { goto L_801D58D0; } // 801D58C0
  cmps(c,0,(int32_t)c->r[5],1); // 801D58C4
  if (crb(c,2)) { goto L_801D58DC; } // 801D58C8
  goto L_801D5950; // 801D58CC
L_801D58D0:;
  cmps(c,0,(int32_t)c->r[5],8); // 801D58D0
  if (crb(c,2)) { goto L_801D5908; } // 801D58D4
  goto L_801D5950; // 801D58D8
L_801D58DC:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 801D58DC
  c->r[3]=c->r[1]+0x00000018u; // 801D58E0
  c->r[5]=0u+0x00000000u; // 801D58E4
  c->lr=0x801D58ECu; f_801D88B0(c); // 801D58E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D58EC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D58F0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801D58F4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801D58F8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801D58FC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801D5900
  goto L_801D5950; // 801D5904
L_801D5908:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 801D5908
  c->r[3]=c->r[1]+0x00000010u; // 801D590C
  c->r[5]=0u+0x00000000u; // 801D5910
  c->lr=0x801D5918u; f_801D88B0(c); // 801D5914
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5918
  c->r[3]=c->r[1]+0x00000008u; // 801D591C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5920
  c->r[5]=0u+0x00000000u; // 801D5924
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801D5928
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801D592C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801D5930
  c->lr=0x801D5938u; f_801D88B0(c); // 801D5934
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5938
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D593C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801D5940
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D5944
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801D5948
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801D594C
L_801D5950:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 801D5950
  c->r[4]=R32(c->r[1]+0x00000024u); // 801D5954
  c->r[3]=R32(c->r[1]+0x00000028u); // 801D5958
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801D595C
  W32(c->r[30]+0x00000000u,c->r[5]); // 801D5960
  W32(c->r[30]+0x00000004u,c->r[4]); // 801D5964
  W32(c->r[30]+0x00000008u,c->r[3]); // 801D5968
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D596C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D5970
  c->r[30]=R32(c->r[1]+0x00000038u); // 801D5974
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D5978
  c->lr=c->r[0]; // 801D597C
  c->r[1]=c->r[1]+0x00000040u; // 801D5980
  return; // 801D5984
}

// GetMaterialNum__Q34nw4r3lyt6WindowCFv
void f_801D5988(Ctx* __restrict c) {
  trace_call(0x801D5988u);
  c->r[3]=R8(c->r[3]+0x00000104u); // 801D5988
  c->r[0]=c->r[3]+0x00000001u; // 801D598C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801D5990
  return; // 801D5994
}

// GetMaterial__Q34nw4r3lyt6WindowCFUl
void f_801D5998(Ctx* __restrict c) {
  trace_call(0x801D5998u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D5998
  if (!crb(c,2)) { goto L_801D59B0; } // 801D599C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D59A0
  c->r[12]=R32(c->r[12]+0x00000074u); // 801D59A4
  c->ctr=c->r[12]; // 801D59A8
  if (true) { dispatch(c,c->ctr); return; } // 801D59AC
L_801D59B0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D59B0
  c->r[12]=R32(c->r[12]+0x00000078u); // 801D59B4
  c->ctr=c->r[12]; // 801D59B8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801D59BC
  if (true) { dispatch(c,c->ctr); return; } // 801D59C0
}

// GetFrameMaterial__Q34nw4r3lyt6WindowCFUl
void f_801D59C4(Ctx* __restrict c) {
  trace_call(0x801D59C4u);
  c->r[0]=R8(c->r[3]+0x00000104u); // 801D59C4
  cmpu(c,0,c->r[4],c->r[0]); // 801D59C8
  if (crb(c,0)) { goto L_801D59D8; } // 801D59CC
  c->r[3]=0u+0x00000000u; // 801D59D0
  return; // 801D59D4
L_801D59D8:;
  c->r[3]=R32(c->r[3]+0x00000100u); // 801D59D8
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801D59DC
  c->r[3]=c->r[3]+c->r[0]; // 801D59E0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D59E4
  return; // 801D59E8
}

// GetContentMaterial__Q34nw4r3lyt6WindowCFv
void f_801D59EC(Ctx* __restrict c) {
  trace_call(0x801D59ECu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D59EC
  c->r[12]=R32(c->r[12]+0x00000068u); // 801D59F0
  c->ctr=c->r[12]; // 801D59F4
  if (true) { dispatch(c,c->ctr); return; } // 801D59F8
}

// GetRuntimeTypeInfo__Q34nw4r3lyt6WindowCFv
void f_801D59FC(Ctx* __restrict c) {
  trace_call(0x801D59FCu);
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801D59FC
  return; // 801D5A00
}

// fn_801D5A04
void f_801D5A04(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFF9D70u; // 801D5A04
  W32(c->r[13]+0xFFFF9D90u,c->r[0]); // 801D5A08
  return; // 801D5A0C
}

// __ct__Q34nw4r3lyt8BoundingFPCQ44nw4r3lyt3res8BoundingRCQ34nw4r3lyt11ResBlockSet
void f_801D5A10(Ctx* __restrict c) {
  trace_call(0x801D5A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5A10
  c->r[0]=c->lr; // 801D5A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5A18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5A1C
  c->r[31]=c->r[3]|c->r[3]; // 801D5A20
  c->lr=0x801D5A28u; f_801CF158(c); // 801D5A24
  c->r[4]=0u+0x802A0000u; // 801D5A28
  c->r[3]=c->r[31]|c->r[31]; // 801D5A2C
  c->r[4]=c->r[4]+0x00001A38u; // 801D5A30
  W32(c->r[31]+0x00000000u,c->r[4]); // 801D5A34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5A38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5A3C
  c->lr=c->r[0]; // 801D5A40
  c->r[1]=c->r[1]+0x00000010u; // 801D5A44
  return; // 801D5A48
}

// __dt__Q34nw4r3lyt8BoundingFv
void f_801D5A4C(Ctx* __restrict c) {
  trace_call(0x801D5A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5A4C
  c->r[0]=c->lr; // 801D5A50
  cmps(c,0,(int32_t)c->r[3],0); // 801D5A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5A5C
  c->r[31]=c->r[4]|c->r[4]; // 801D5A60
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5A64
  c->r[30]=c->r[3]|c->r[3]; // 801D5A68
  if (crb(c,2)) { goto L_801D5A88; } // 801D5A6C
  c->r[4]=0u+0x00000000u; // 801D5A70
  c->lr=0x801D5A78u; f_801CF290(c); // 801D5A74
  cmps(c,0,(int32_t)c->r[31],0); // 801D5A78
  if (!crb(c,1)) { goto L_801D5A88; } // 801D5A7C
  c->r[3]=c->r[30]|c->r[30]; // 801D5A80
  c->lr=0x801D5A88u; f_8009230C(c); // 801D5A84
L_801D5A88:;
  c->r[3]=c->r[30]|c->r[30]; // 801D5A88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5A8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5A90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5A94
  c->lr=c->r[0]; // 801D5A98
  c->r[1]=c->r[1]+0x00000010u; // 801D5A9C
  return; // 801D5AA0
}

// DrawSelf__Q34nw4r3lyt8BoundingFRCQ34nw4r3lyt8DrawInfo
void f_801D5AA4(Ctx* __restrict c) {
  trace_call(0x801D5AA4u);
  return; // 801D5AA4
}

// GetRuntimeTypeInfo__Q34nw4r3lyt8BoundingCFv
void f_801D5AA8(Ctx* __restrict c) {
  trace_call(0x801D5AA8u);
  c->r[3]=c->r[13]+0xFFFF9D98u; // 801D5AA8
  return; // 801D5AAC
}

// fn_801D5AB0
void f_801D5AB0(Ctx* __restrict c) {
  c->r[0]=c->r[13]+0xFFFF9D70u; // 801D5AB0
  W32(c->r[13]+0xFFFF9D98u,c->r[0]); // 801D5AB4
  return; // 801D5AB8
}

// CalcTextureMtx__Q34nw4r3lyt26@unnamed@lyt_material_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3lyt6TexSRT
void f_801D5ABC(Ctx* __restrict c) {
  trace_call(0x801D5ABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5ABC
  c->r[0]=c->lr; // 801D5AC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D5AC4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D5AC8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D5ACC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5AD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5AD4
  c->r[31]=c->r[4]|c->r[4]; // 801D5AD8
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5ADC
  {uint32_t ea=c->r[2]+0xFFFF9D7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5AE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5AE4
  c->r[30]=c->r[3]|c->r[3]; // 801D5AE8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801D5AEC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801D5AF0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D5AF4
  c->lr=0x801D5AFCu; f_801DB56C(c); // 801D5AF8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5AFC
  c->f[31]=c->f[1]; // 801D5B00
  {uint32_t ea=c->r[2]+0xFFFF9D7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5B04
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 801D5B08
  c->lr=0x801D5B10u; f_801DB504(c); // 801D5B0C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D5B10
  c->f[5]=-c->f[1]; // 801D5B14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5B18
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[3]); // 801D5B1C
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[8]=c->ps1[8]=RF32(ea);} // 801D5B20
  c->f[11]=c->ps1[11]=S(c->f[31]*c->f[3]); // 801D5B24
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5B28
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801D5B2C
  c->f[4]=-c->f[2]; // 801D5B30
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[0]); // 801D5B34
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D5B38
  c->f[10]=c->ps1[10]=S(c->f[31]*c->f[0]); // 801D5B3C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5B40
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 801D5B44
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5B48
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[6]); // 801D5B4C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[11]);} // 801D5B50
  c->f[7]=-c->f[6]; // 801D5B54
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 801D5B58
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[12]);} // 801D5B5C
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[4]); // 801D5B60
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[7]); // 801D5B64
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[8]);} // 801D5B68
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801D5B6C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 801D5B70
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[9]);} // 801D5B74
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 801D5B78
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[10]);} // 801D5B7C
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 801D5B80
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801D5B84
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[8]);} // 801D5B88
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801D5B8C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D5B90
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[8]);} // 801D5B94
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[8]);} // 801D5B98
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 801D5B9C
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[8]);} // 801D5BA0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801D5BA4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D5BA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5BAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5BB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D5BB4
  c->lr=c->r[0]; // 801D5BB8
  c->r[1]=c->r[1]+0x00000030u; // 801D5BBC
  return; // 801D5BC0
}

// SetIndTexMtx__Q34nw4r3lyt26@unnamed@lyt_material_cpp@F14_GXIndTexMtxIDPA3_Cf
void f_801D5BC4(Ctx* __restrict c) {
  trace_call(0x801D5BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5BC4
  c->r[0]=c->lr; // 801D5BC8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5BCC
  c->r[5]=0u+0x00000000u; // 801D5BD0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D5BD4
  c->f[8]=std::fabs(c->f[2]); // 801D5BD8
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5BDC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D5BE0
  c->f[9]=std::fabs(c->f[3]); // 801D5BE4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801D5BE8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 801D5BEC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D5BF0
  fcmp(c,0,c->f[8],c->f[0]); // 801D5BF4
  c->f[10]=std::fabs(c->f[4]); // 801D5BF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5BFC
  c->f[11]=std::fabs(c->f[5]); // 801D5C00
  c->f[12]=std::fabs(c->f[6]); // 801D5C04
  c->f[13]=std::fabs(c->f[7]); // 801D5C08
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5C0C
  if (crb(c,2)) { goto L_801D5C50; } // 801D5C10
  fcmp(c,0,c->f[9],c->f[0]); // 801D5C14
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5C18
  if (crb(c,2)) { goto L_801D5C50; } // 801D5C1C
  fcmp(c,0,c->f[10],c->f[0]); // 801D5C20
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5C24
  if (crb(c,2)) { goto L_801D5C50; } // 801D5C28
  fcmp(c,0,c->f[11],c->f[0]); // 801D5C2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5C30
  if (crb(c,2)) { goto L_801D5C50; } // 801D5C34
  fcmp(c,0,c->f[12],c->f[0]); // 801D5C38
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5C3C
  if (crb(c,2)) { goto L_801D5C50; } // 801D5C40
  fcmp(c,0,c->f[13],c->f[0]); // 801D5C44
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5C48
  if (!crb(c,2)) { goto L_801D5CE4; } // 801D5C4C
L_801D5C50:;
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5C50
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5C54
L_801D5C58:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D5C58
  cmps(c,0,(int32_t)c->r[0],46); // 801D5C5C
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5C60
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 801D5C64
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 801D5C68
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 801D5C6C
  fcmp(c,0,c->f[8],c->f[0]); // 801D5C70
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 801D5C74
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 801D5C78
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 801D5C7C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 801D5C80
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 801D5C84
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 801D5C88
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 801D5C8C
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 801D5C90
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 801D5C94
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5C98
  c->r[5]=c->r[5]+0x00000001u; // 801D5C9C
  if (crb(c,2)) { IRQCHK(c); goto L_801D5C58; } // 801D5CA0
  fcmp(c,0,c->f[9],c->f[0]); // 801D5CA4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5CA8
  if (crb(c,2)) { IRQCHK(c); goto L_801D5C58; } // 801D5CAC
  fcmp(c,0,c->f[10],c->f[0]); // 801D5CB0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5CB4
  if (crb(c,2)) { IRQCHK(c); goto L_801D5C58; } // 801D5CB8
  fcmp(c,0,c->f[11],c->f[0]); // 801D5CBC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5CC0
  if (crb(c,2)) { IRQCHK(c); goto L_801D5C58; } // 801D5CC4
  fcmp(c,0,c->f[12],c->f[0]); // 801D5CC8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5CCC
  if (crb(c,2)) { IRQCHK(c); goto L_801D5C58; } // 801D5CD0
  fcmp(c,0,c->f[13],c->f[0]); // 801D5CD4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D5CD8
  if (crb(c,2)) { IRQCHK(c); goto L_801D5C58; } // 801D5CDC
  goto L_801D5D8C; // 801D5CE0
L_801D5CE4:;
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5CE4
  fcmp(c,0,c->f[8],c->f[1]); // 801D5CE8
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5CEC
  fcmp(c,0,c->f[9],c->f[1]); // 801D5CF0
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5CF4
  fcmp(c,0,c->f[10],c->f[1]); // 801D5CF8
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5CFC
  fcmp(c,0,c->f[11],c->f[1]); // 801D5D00
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D04
  fcmp(c,0,c->f[12],c->f[1]); // 801D5D08
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D0C
  fcmp(c,0,c->f[13],c->f[1]); // 801D5D10
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D14
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5D18
L_801D5D1C:;
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 801D5D1C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D5D20
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801D5D24
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801D5D28
  fcmp(c,0,c->f[8],c->f[1]); // 801D5D2C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801D5D30
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 801D5D34
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 801D5D38
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 801D5D3C
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 801D5D40
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 801D5D44
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 801D5D48
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 801D5D4C
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 801D5D50
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D54
  fcmp(c,0,c->f[9],c->f[1]); // 801D5D58
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D5C
  fcmp(c,0,c->f[10],c->f[1]); // 801D5D60
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D64
  fcmp(c,0,c->f[11],c->f[1]); // 801D5D68
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D6C
  fcmp(c,0,c->f[12],c->f[1]); // 801D5D70
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D74
  fcmp(c,0,c->f[13],c->f[1]); // 801D5D78
  if (!crb(c,0)) { goto L_801D5D8C; } // 801D5D7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D5D80
  cmps(c,0,(int32_t)c->r[0],-17); // 801D5D84
  if (crb(c,1)) { IRQCHK(c); goto L_801D5D1C; } // 801D5D88
L_801D5D8C:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801D5D8C
  c->r[4]=c->r[1]+0x00000008u; // 801D5D90
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D5D94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801D5D98
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 801D5D9C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 801D5DA0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 801D5DA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 801D5DA8
  c->lr=0x801D5DB0u; f_8010743C(c); // 801D5DAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5DB0
  c->lr=c->r[0]; // 801D5DB4
  c->r[1]=c->r[1]+0x00000020u; // 801D5DB8
  return; // 801D5DBC
}

// __as__Q34nw4r4math4VEC2FRCQ34nw4r4math4VEC2_801D5DC0
void f_801D5DC0(Ctx* __restrict c) {
  trace_call(0x801D5DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5DC0
  c->r[0]=c->lr; // 801D5DC4
  c->r[6]=0u+0x802A0000u; // 801D5DC8
  c->r[4]=0u+0x80090000u; // 801D5DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5DD0
  c->r[5]=0u+0x80040000u; // 801D5DD4
  c->r[8]=c->r[3]+0x00000008u; // 801D5DD8
  c->r[6]=c->r[6]+0x00001AF0u; // 801D5DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5DE0
  c->r[31]=0u+0x00000000u; // 801D5DE4
  c->r[4]=c->r[4]+0x00003CA4u; // 801D5DE8
  c->r[5]=c->r[5]+0xFFFFB540u; // 801D5DEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5DF0
  c->r[30]=c->r[3]|c->r[3]; // 801D5DF4
  c->r[7]=0u+0x00000004u; // 801D5DF8
  W32(c->r[3]+0x00000008u,c->r[31]); // 801D5DFC
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801D5E00
  W32(c->r[3]+0x00000000u,c->r[6]); // 801D5E04
  c->r[6]=0u+0x00000004u; // 801D5E08
  W32(c->r[3]+0x00000004u,c->r[31]); // 801D5E0C
  W32(c->r[3]+0x00000008u,c->r[8]); // 801D5E10
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 801D5E14
  c->r[3]=c->r[3]+0x00000028u; // 801D5E18
  c->lr=0x801D5E20u; f_80109BD0(c); // 801D5E1C
  c->r[5]=c->r[2]+0xFFFFA1D0u; // 801D5E20
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 801D5E24
  c->r[3]=R32(c->r[30]+0x00000038u); // 801D5E28
  c->r[7]=0u+0x000000FFu; // 801D5E2C
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFA1D0u); // 801D5E30
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801D5E34
  c->r[6]=rotl(c->r[3],0)&0x0000001Fu; // 801D5E38
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 801D5E3C
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 801D5E40
  c->r[3]=c->r[30]+0x00000044u; // 801D5E44
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 801D5E48
  c->r[5]=0u+0x00000015u; // 801D5E4C
  W16(c->r[30]+0x00000012u,c->r[4]); // 801D5E50
  c->r[4]=0u+0x00000000u; // 801D5E54
  W16(c->r[30]+0x00000010u,c->r[10]); // 801D5E58
  W16(c->r[30]+0x00000014u,c->r[9]); // 801D5E5C
  W16(c->r[30]+0x00000016u,c->r[8]); // 801D5E60
  W16(c->r[30]+0x00000018u,c->r[7]); // 801D5E64
  W16(c->r[30]+0x0000001Au,c->r[7]); // 801D5E68
  W16(c->r[30]+0x0000001Cu,c->r[7]); // 801D5E6C
  W16(c->r[30]+0x0000001Eu,c->r[7]); // 801D5E70
  W16(c->r[30]+0x00000020u,c->r[7]); // 801D5E74
  W16(c->r[30]+0x00000022u,c->r[7]); // 801D5E78
  W16(c->r[30]+0x00000024u,c->r[7]); // 801D5E7C
  W16(c->r[30]+0x00000026u,c->r[7]); // 801D5E80
  W32(c->r[30]+0x00000038u,c->r[6]); // 801D5E84
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801D5E88
  W8(c->r[30]+0x00000059u,c->r[31]); // 801D5E8C
  W32(c->r[30]+0x00000040u,c->r[31]); // 801D5E90
  c->lr=0x801D5E98u; f_8000443C(c); // 801D5E94
  c->r[3]=c->r[30]|c->r[30]; // 801D5E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5E9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5EA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5EA4
  c->lr=c->r[0]; // 801D5EA8
  c->r[1]=c->r[1]+0x00000010u; // 801D5EAC
  return; // 801D5EB0
}

// fn_801D5EB4
void f_801D5EB4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801D5EB4
  c->r[4]=c->r[3]+0x00000004u; // 801D5EB8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D5EBC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D5EC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D5EC4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D5EC8
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D5ECC
  return; // 801D5ED0
}

// __ct__Q34nw4r3lyt8MaterialFPCQ44nw4r3lyt3res8MaterialRCQ34nw4r3lyt11ResBlockSet
void f_801D5ED4(Ctx* __restrict c) {
  trace_call(0x801D5ED4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5ED4
  c->r[0]=c->lr; // 801D5ED8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D5EDC
  c->r[11]=c->r[1]+0x00000080u; // 801D5EE0
  c->lr=0x801D5EE8u; f_80109F04(c); // 801D5EE4
  c->r[6]=0u+0x802A0000u; // 801D5EE8
  c->r[17]=c->r[3]|c->r[3]; // 801D5EEC
  c->r[6]=c->r[6]+0x00001AF0u; // 801D5EF0
  c->r[18]=c->r[4]|c->r[4]; // 801D5EF4
  W32(c->r[3]+0x00000000u,c->r[6]); // 801D5EF8
  c->r[19]=c->r[5]|c->r[5]; // 801D5EFC
  c->r[3]=c->r[3]+0x00000004u; // 801D5F00
  c->lr=0x801D5F08u; f_801D5EB4(c); // 801D5F04
  c->r[4]=0u+0x80090000u; // 801D5F08
  c->r[5]=0u+0x80040000u; // 801D5F0C
  c->r[3]=c->r[17]+0x00000028u; // 801D5F10
  c->r[6]=0u+0x00000004u; // 801D5F14
  c->r[4]=c->r[4]+0x00003CA4u; // 801D5F18
  c->r[5]=c->r[5]+0xFFFFB540u; // 801D5F1C
  c->r[7]=0u+0x00000004u; // 801D5F20
  c->lr=0x801D5F28u; f_80109BD0(c); // 801D5F24
  c->r[3]=c->r[17]|c->r[17]; // 801D5F28
  c->lr=0x801D5F30u; f_801D685C(c); // 801D5F2C
  c->r[3]=c->r[17]|c->r[17]; // 801D5F30
  c->r[4]=c->r[18]|c->r[18]; // 801D5F34
  c->lr=0x801D5F3Cu; f_801D7368(c); // 801D5F38
  c->r[14]=c->r[18]+0x00000014u; // 801D5F3C
  c->r[15]=c->r[17]+0x00000010u; // 801D5F40
  c->r[16]=0u+0x00000000u; // 801D5F44
L_801D5F48:;
  c->r[3]=c->r[15]|c->r[15]; // 801D5F48
  c->r[4]=c->r[14]|c->r[14]; // 801D5F4C
  c->lr=0x801D5F54u; f_801D6538(c); // 801D5F50
  c->r[16]=c->r[16]+0x00000001u; // 801D5F54
  c->r[15]=c->r[15]+0x00000008u; // 801D5F58
  cmps(c,0,(int32_t)c->r[16],3); // 801D5F5C
  c->r[14]=c->r[14]+0x00000008u; // 801D5F60
  if (crb(c,0)) { IRQCHK(c); goto L_801D5F48; } // 801D5F64
  c->r[14]=c->r[18]+0x0000002Cu; // 801D5F68
  c->r[15]=c->r[17]+0x00000028u; // 801D5F6C
  c->r[16]=0u+0x00000000u; // 801D5F70
L_801D5F74:;
  c->r[3]=c->r[15]|c->r[15]; // 801D5F74
  c->r[4]=c->r[14]|c->r[14]; // 801D5F78
  c->lr=0x801D5F80u; f_801D655C(c); // 801D5F7C
  c->r[16]=c->r[16]+0x00000001u; // 801D5F80
  c->r[15]=c->r[15]+0x00000004u; // 801D5F84
  cmps(c,0,(int32_t)c->r[16],4); // 801D5F88
  c->r[14]=c->r[14]+0x00000004u; // 801D5F8C
  if (crb(c,0)) { IRQCHK(c); goto L_801D5F74; } // 801D5F90
  c->r[3]=c->r[18]|c->r[18]; // 801D5F94
  c->r[4]=0u+0x00000040u; // 801D5F98
  c->lr=0x801D5FA0u; f_801D6854(c); // 801D5F9C
  c->r[28]=c->r[3]|c->r[3]; // 801D5FA0
  c->r[3]=c->r[18]+0x0000003Cu; // 801D5FA4
  c->lr=0x801D5FACu; f_801D6568(c); // 801D5FA8
  c->r[4]=rotl(c->r[3],2)&0x000003FCu; // 801D5FAC
  c->r[3]=c->r[18]|c->r[18]; // 801D5FB0
  c->r[25]=c->r[4]+0x00000040u; // 801D5FB4
  c->r[4]=c->r[25]|c->r[25]; // 801D5FB8
  c->lr=0x801D5FC0u; f_801D684C(c); // 801D5FBC
  c->r[24]=c->r[3]|c->r[3]; // 801D5FC0
  c->r[3]=c->r[18]+0x0000003Cu; // 801D5FC4
  c->lr=0x801D5FCCu; f_801D6574(c); // 801D5FC8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D5FCC
  c->r[3]=c->r[18]|c->r[18]; // 801D5FD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D5FD4
  c->r[25]=c->r[25]+c->r[0]; // 801D5FD8
  c->r[4]=c->r[25]|c->r[25]; // 801D5FDC
  c->lr=0x801D5FE4u; f_801D6844(c); // 801D5FE0
  c->r[23]=c->r[3]|c->r[3]; // 801D5FE4
  c->r[3]=c->r[18]+0x0000003Cu; // 801D5FE8
  c->lr=0x801D5FF0u; f_801D6580(c); // 801D5FEC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801D5FF0
  c->r[3]=c->r[18]+0x0000003Cu; // 801D5FF4
  c->r[25]=c->r[25]+c->r[0]; // 801D5FF8
  c->lr=0x801D6000u; f_801D6568(c); // 801D5FFC
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D6000
  c->r[4]=0u+0x00000008u; // 801D6004
  c->lr=0x801D600Cu; f_801D6834(c); // 801D6008
  c->r[15]=c->r[3]|c->r[3]; // 801D600C
  c->r[3]=c->r[18]+0x0000003Cu; // 801D6010
  c->lr=0x801D6018u; f_801D6574(c); // 801D6014
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D6018
  c->r[4]=0u+0x0000000Au; // 801D601C
  c->lr=0x801D6024u; f_801D6834(c); // 801D6020
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801D6024
  c->r[3]=c->r[18]+0x0000003Cu; // 801D6028
  c->lr=0x801D6030u; f_801D6580(c); // 801D602C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D6030
  c->r[4]=0u+0x00000008u; // 801D6034
  c->lr=0x801D603Cu; f_801D6834(c); // 801D6038
  W32(c->r[1]+0x00000020u,c->r[3]); // 801D603C
  c->r[3]=c->r[18]+0x0000003Cu; // 801D6040
  c->lr=0x801D6048u; f_801D658C(c); // 801D6044
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801D6048
  c->r[3]=c->r[18]+0x0000003Cu; // 801D604C
  c->r[0]=0u-c->r[4]; // 801D6050
  c->r[0]=c->r[0]|c->r[4]; // 801D6054
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D6058
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801D605C
  c->lr=0x801D6064u; f_801D6598(c); // 801D6060
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801D6064
  c->r[3]=c->r[18]+0x0000003Cu; // 801D6068
  c->r[0]=0u-c->r[4]; // 801D606C
  c->r[0]=c->r[0]|c->r[4]; // 801D6070
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D6074
  W8(c->r[1]+0x00000019u,c->r[0]); // 801D6078
  c->lr=0x801D6080u; f_801D65A4(c); // 801D607C
  W8(c->r[1]+0x00000018u,c->r[3]); // 801D6080
  c->r[3]=c->r[18]+0x0000003Cu; // 801D6084
  c->lr=0x801D608Cu; f_801D65B0(c); // 801D6088
  W32(c->r[1]+0x00000024u,c->r[3]); // 801D608C
  c->r[3]=c->r[18]+0x0000003Cu; // 801D6090
  c->lr=0x801D6098u; f_801D65BC(c); // 801D6094
  W32(c->r[1]+0x00000028u,c->r[3]); // 801D6098
  c->r[3]=c->r[18]+0x0000003Cu; // 801D609C
  c->lr=0x801D60A4u; f_801D65C8(c); // 801D60A0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D60A4
  c->r[4]=0u+0x00000003u; // 801D60A8
  c->lr=0x801D60B0u; f_801D6834(c); // 801D60AC
  c->r[29]=c->r[3]|c->r[3]; // 801D60B0
  c->r[3]=c->r[18]+0x0000003Cu; // 801D60B4
  c->lr=0x801D60BCu; f_801D65D4(c); // 801D60B8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D60BC
  c->r[4]=0u+0x00000004u; // 801D60C0
  c->lr=0x801D60C8u; f_801D6834(c); // 801D60C4
  c->r[30]=c->r[3]|c->r[3]; // 801D60C8
  c->r[3]=c->r[18]+0x0000003Cu; // 801D60CC
  c->lr=0x801D60D4u; f_801D65E0(c); // 801D60D0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D60D4
  c->r[4]=0u+0x00000010u; // 801D60D8
  c->lr=0x801D60E0u; f_801D6834(c); // 801D60DC
  c->r[0]=R8(c->r[1]+0x0000001Au); // 801D60E0
  c->r[14]=c->r[3]|c->r[3]; // 801D60E4
  c->r[8]=R8(c->r[1]+0x00000018u); // 801D60E8
  c->r[3]=c->r[17]|c->r[17]; // 801D60EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D60F0
  c->r[4]=rotl(c->r[15],0)&0x000000FFu; // 801D60F4
  c->r[0]=R8(c->r[1]+0x00000019u); // 801D60F8
  c->r[7]=rotl(c->r[14],0)&0x000000FFu; // 801D60FC
  c->r[9]=rotl(c->r[30],0)&0x000000FFu; // 801D6100
  c->r[10]=rotl(c->r[29],0)&0x000000FFu; // 801D6104
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D6108
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801D610C
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801D6110
  c->r[0]=R32(c->r[1]+0x00000020u); // 801D6114
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801D6118
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D611C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D6120
  c->r[0]=R32(c->r[1]+0x00000028u); // 801D6124
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6128
  c->lr=0x801D6130u; f_801D6978(c); // 801D612C
  c->r[0]=R32(c->r[17]+0x00000040u); // 801D6130
  cmps(c,0,(int32_t)c->r[0],0); // 801D6134
  if (crb(c,2)) { goto L_801D651C; } // 801D6138
  c->r[3]=c->r[17]|c->r[17]; // 801D613C
  c->r[4]=rotl(c->r[15],0)&0x000000FFu; // 801D6140
  c->lr=0x801D6148u; f_801D73A4(c); // 801D6144
  c->r[0]=rotl(c->r[15],0)&0x000000FFu; cr0(c,c->r[0]); // 801D6148
  if (crb(c,2)) { goto L_801D6240; } // 801D614C
  c->r[3]=R32(c->r[19]+0x00000000u); // 801D6150
  c->r[4]=0u+0x0000000Cu; // 801D6154
  c->lr=0x801D615Cu; f_801D682C(c); // 801D6158
  c->r[22]=c->r[3]|c->r[3]; // 801D615C
  c->r[3]=c->r[17]|c->r[17]; // 801D6160
  c->lr=0x801D6168u; f_801D70E4(c); // 801D6164
  c->r[31]=c->r[3]|c->r[3]; // 801D6168
  c->r[16]=rotl(c->r[15],0)&0x000000FFu; // 801D616C
  c->r[21]=0u+0x00000000u; // 801D6170
  c->r[20]=0u+0x00000000u; // 801D6174
  goto L_801D6228; // 801D6178
L_801D617C:;
  c->r[15]=rotl(c->r[20],2)&0x000003FCu; // 801D617C
  c->r[3]=c->r[22]|c->r[22]; // 801D6180
  c->r[0]=R16(c->r[28]+c->r[15]); // 801D6184
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D6188
  c->r[4]=R32(c->r[22]+c->r[0]); // 801D618C
  c->lr=0x801D6194u; f_801D6824(c); // 801D6190
  c->r[5]=c->r[3]|c->r[3]; // 801D6194
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 801D6198
  c->r[4]=0u+0x74690000u; // 801D619C
  c->r[6]=0u+0x00000000u; // 801D61A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D61A4
  c->r[4]=c->r[4]+0x00006D67u; // 801D61A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D61AC
  c->ctr=c->r[12]; // 801D61B0
  if (true) { c->lr=0x801D61B8u; dispatch(c,c->ctr); } // 801D61B4
  c->r[0]=rotl(c->r[21],0)&0x000000FFu; // 801D61B8
  c->r[4]=c->r[3]|c->r[3]; // 801D61BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D61C0
  c->r[5]=0u+0x00000000u; // 801D61C4
  c->r[26]=c->r[31]+c->r[0]; // 801D61C8
  c->r[3]=c->r[26]|c->r[26]; // 801D61CC
  c->lr=0x801D61D4u; f_801D8BBC(c); // 801D61D0
  c->r[27]=c->r[28]+c->r[15]; // 801D61D4
  c->r[3]=c->r[27]|c->r[27]; // 801D61D8
  c->lr=0x801D61E0u; f_801D660C(c); // 801D61DC
  c->r[15]=c->r[3]|c->r[3]; // 801D61E0
  c->r[3]=c->r[27]|c->r[27]; // 801D61E4
  c->lr=0x801D61ECu; f_801D6600(c); // 801D61E8
  c->r[4]=c->r[3]|c->r[3]; // 801D61EC
  c->r[3]=c->r[26]|c->r[26]; // 801D61F0
  c->r[5]=c->r[15]|c->r[15]; // 801D61F4
  c->lr=0x801D61FCu; f_801D65EC(c); // 801D61F8
  c->r[3]=c->r[27]|c->r[27]; // 801D61FC
  c->lr=0x801D6204u; f_801D6640(c); // 801D6200
  c->r[15]=c->r[3]|c->r[3]; // 801D6204
  c->r[3]=c->r[27]|c->r[27]; // 801D6208
  c->lr=0x801D6210u; f_801D662C(c); // 801D620C
  c->r[4]=c->r[3]|c->r[3]; // 801D6210
  c->r[3]=c->r[26]|c->r[26]; // 801D6214
  c->r[5]=c->r[15]|c->r[15]; // 801D6218
  c->lr=0x801D6220u; f_801D6618(c); // 801D621C
  c->r[21]=c->r[21]+0x00000001u; // 801D6220
  c->r[20]=c->r[20]+0x00000001u; // 801D6224
L_801D6228:;
  c->r[0]=rotl(c->r[20],0)&0x000000FFu; // 801D6228
  cmpu(c,0,c->r[0],c->r[16]); // 801D622C
  if (crb(c,0)) { IRQCHK(c); goto L_801D617C; } // 801D6230
  c->r[3]=c->r[17]|c->r[17]; // 801D6234
  c->r[4]=rotl(c->r[21],0)&0x000000FFu; // 801D6238
  c->lr=0x801D6240u; f_801D73A4(c); // 801D623C
L_801D6240:;
  c->r[3]=c->r[17]|c->r[17]; // 801D6240
  c->lr=0x801D6248u; f_801D70EC(c); // 801D6244
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801D6248
  c->r[16]=c->r[3]|c->r[3]; // 801D624C
  c->r[19]=c->r[24]|c->r[24]; // 801D6250
  c->r[20]=0u+0x00000000u; // 801D6254
  c->r[15]=rotl(c->r[0],0)&0x000000FFu; // 801D6258
  goto L_801D6290; // 801D625C
L_801D6260:;
  c->r[3]=c->r[16]|c->r[16]; // 801D6260
  c->r[4]=c->r[24]|c->r[24]; // 801D6264
  c->lr=0x801D626Cu; f_80092F00(c); // 801D6268
  {uint32_t ea=c->r[19]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D626C
  c->r[3]=c->r[16]+0x0000000Cu; // 801D6270
  c->r[4]=c->r[24]+0x0000000Cu; // 801D6274
  {uint32_t ea=c->r[16]+0x00000008u; WF32(ea,c->f[0]);} // 801D6278
  c->lr=0x801D6280u; f_80092F00(c); // 801D627C
  c->r[24]=c->r[24]+0x00000014u; // 801D6280
  c->r[16]=c->r[16]+0x00000014u; // 801D6284
  c->r[19]=c->r[19]+0x00000014u; // 801D6288
  c->r[20]=c->r[20]+0x00000001u; // 801D628C
L_801D6290:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 801D6290
  if (crb(c,0)) { IRQCHK(c); goto L_801D6260; } // 801D6294
  c->r[3]=c->r[17]|c->r[17]; // 801D6298
  c->lr=0x801D62A0u; f_801D7104(c); // 801D629C
  c->r[0]=R32(c->r[1]+0x00000020u); // 801D62A0
  c->r[15]=c->r[3]|c->r[3]; // 801D62A4
  c->r[3]=c->r[17]|c->r[17]; // 801D62A8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D62AC
  c->lr=0x801D62B4u; f_801D7434(c); // 801D62B0
  c->r[16]=0u+0x00000000u; // 801D62B4
  goto L_801D62D4; // 801D62B8
L_801D62BC:;
  c->r[3]=c->r[15]|c->r[15]; // 801D62BC
  c->r[4]=c->r[23]|c->r[23]; // 801D62C0
  c->lr=0x801D62C8u; f_801D6654(c); // 801D62C4
  c->r[23]=c->r[23]+0x00000004u; // 801D62C8
  c->r[15]=c->r[15]+0x00000004u; // 801D62CC
  c->r[16]=c->r[16]+0x00000001u; // 801D62D0
L_801D62D4:;
  c->r[0]=R32(c->r[17]+0x0000003Cu); // 801D62D4
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 801D62D8
  cmpu(c,0,c->r[16],c->r[0]); // 801D62DC
  if (crb(c,0)) { IRQCHK(c); goto L_801D62BC; } // 801D62E0
  c->r[0]=R8(c->r[1]+0x0000001Au); // 801D62E4
  cmps(c,0,(int32_t)c->r[0],0); // 801D62E8
  if (crb(c,2)) { goto L_801D6314; } // 801D62EC
  c->r[3]=c->r[18]|c->r[18]; // 801D62F0
  c->r[4]=c->r[25]|c->r[25]; // 801D62F4
  c->lr=0x801D62FCu; f_801D681C(c); // 801D62F8
  c->r[15]=c->r[3]|c->r[3]; // 801D62FC
  c->r[3]=c->r[17]|c->r[17]; // 801D6300
  c->lr=0x801D6308u; f_801D7128(c); // 801D6304
  c->r[4]=c->r[15]|c->r[15]; // 801D6308
  c->lr=0x801D6310u; f_801D6678(c); // 801D630C
  c->r[25]=c->r[25]+0x00000004u; // 801D6310
L_801D6314:;
  c->r[0]=R8(c->r[1]+0x00000019u); // 801D6314
  cmps(c,0,(int32_t)c->r[0],0); // 801D6318
  if (crb(c,2)) { goto L_801D6344; } // 801D631C
  c->r[3]=c->r[18]|c->r[18]; // 801D6320
  c->r[4]=c->r[25]|c->r[25]; // 801D6324
  c->lr=0x801D632Cu; f_801D6814(c); // 801D6328
  c->r[15]=c->r[3]|c->r[3]; // 801D632C
  c->r[3]=c->r[17]|c->r[17]; // 801D6330
  c->lr=0x801D6338u; f_801D7154(c); // 801D6334
  c->r[4]=c->r[15]|c->r[15]; // 801D6338
  c->lr=0x801D6340u; f_80047B74(c); // 801D633C
  c->r[25]=c->r[25]+0x00000004u; // 801D6340
L_801D6344:;
  c->r[0]=R8(c->r[1]+0x00000018u); // 801D6344
  cmps(c,0,(int32_t)c->r[0],0); // 801D6348
  if (crb(c,2)) { goto L_801D638C; } // 801D634C
  c->r[3]=c->r[18]|c->r[18]; // 801D6350
  c->r[4]=c->r[25]|c->r[25]; // 801D6354
  c->lr=0x801D635Cu; f_801D680C(c); // 801D6358
  c->r[16]=c->r[3]|c->r[3]; // 801D635C
  c->r[3]=c->r[17]|c->r[17]; // 801D6360
  c->lr=0x801D6368u; f_801D7188(c); // 801D6364
  c->r[15]=c->r[3]|c->r[3]; // 801D6368
  c->r[19]=0u+0x00000000u; // 801D636C
L_801D6370:;
  c->r[3]=c->r[15]+c->r[19]; // 801D6370
  c->r[4]=c->r[16]+c->r[19]; // 801D6374
  c->lr=0x801D637Cu; f_801D669C(c); // 801D6378
  c->r[19]=c->r[19]+0x00000001u; // 801D637C
  cmps(c,0,(int32_t)c->r[19],4); // 801D6380
  if (crb(c,0)) { IRQCHK(c); goto L_801D6370; } // 801D6384
  c->r[25]=c->r[25]+0x00000004u; // 801D6388
L_801D638C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 801D638C
  if (crb(c,2)) { goto L_801D63DC; } // 801D6390
  c->r[3]=c->r[17]|c->r[17]; // 801D6394
  c->lr=0x801D639Cu; f_801D72A8(c); // 801D6398
  c->r[19]=c->r[3]|c->r[3]; // 801D639C
  c->r[3]=c->r[18]|c->r[18]; // 801D63A0
  c->r[4]=c->r[25]|c->r[25]; // 801D63A4
  c->lr=0x801D63ACu; f_801D684C(c); // 801D63A8
  c->r[16]=c->r[3]|c->r[3]; // 801D63AC
  c->r[15]=rotl(c->r[29],0)&0x000000FFu; // 801D63B0
  c->r[20]=0u+0x00000000u; // 801D63B4
  goto L_801D63D4; // 801D63B8
L_801D63BC:;
  c->r[3]=c->r[19]|c->r[19]; // 801D63BC
  c->r[4]=c->r[16]|c->r[16]; // 801D63C0
  c->lr=0x801D63C8u; f_801D66A8(c); // 801D63C4
  c->r[16]=c->r[16]+0x00000014u; // 801D63C8
  c->r[19]=c->r[19]+0x00000014u; // 801D63CC
  c->r[20]=c->r[20]+0x00000001u; // 801D63D0
L_801D63D4:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 801D63D4
  if (crb(c,0)) { IRQCHK(c); goto L_801D63BC; } // 801D63D8
L_801D63DC:;
  c->r[3]=c->r[18]+0x0000003Cu; // 801D63DC
  c->lr=0x801D63E4u; f_801D65C8(c); // 801D63E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D63E4
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 801D63E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D63EC
  c->r[25]=c->r[25]+c->r[0]; // 801D63F0
  if (crb(c,2)) { goto L_801D6448; } // 801D63F4
  c->r[3]=c->r[17]|c->r[17]; // 801D63F8
  c->lr=0x801D6400u; f_801D75DC(c); // 801D63FC
  c->r[3]=c->r[17]|c->r[17]; // 801D6400
  c->lr=0x801D6408u; f_801D7254(c); // 801D6404
  c->r[19]=c->r[3]|c->r[3]; // 801D6408
  c->r[3]=c->r[18]|c->r[18]; // 801D640C
  c->r[4]=c->r[25]|c->r[25]; // 801D6410
  c->lr=0x801D6418u; f_801D6804(c); // 801D6414
  c->r[16]=c->r[3]|c->r[3]; // 801D6418
  c->r[15]=rotl(c->r[30],0)&0x000000FFu; // 801D641C
  c->r[20]=0u+0x00000000u; // 801D6420
  goto L_801D6440; // 801D6424
L_801D6428:;
  c->r[3]=c->r[19]|c->r[19]; // 801D6428
  c->r[4]=c->r[16]|c->r[16]; // 801D642C
  c->lr=0x801D6434u; f_801D66D4(c); // 801D6430
  c->r[16]=c->r[16]+0x00000004u; // 801D6434
  c->r[19]=c->r[19]+0x00000004u; // 801D6438
  c->r[20]=c->r[20]+0x00000001u; // 801D643C
L_801D6440:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[15]); // 801D6440
  if (crb(c,0)) { IRQCHK(c); goto L_801D6428; } // 801D6444
L_801D6448:;
  c->r[3]=c->r[18]+0x0000003Cu; // 801D6448
  c->lr=0x801D6450u; f_801D65D4(c); // 801D644C
  c->r[4]=rotl(c->r[14],0)&0x000000FFu; cr0(c,c->r[4]); // 801D6450
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801D6454
  c->r[25]=c->r[25]+c->r[0]; // 801D6458
  if (crb(c,2)) { goto L_801D64B0; } // 801D645C
  c->r[3]=c->r[17]|c->r[17]; // 801D6460
  c->lr=0x801D6468u; f_801D74BC(c); // 801D6464
  c->r[3]=c->r[17]|c->r[17]; // 801D6468
  c->lr=0x801D6470u; f_801D7304(c); // 801D646C
  c->r[16]=c->r[3]|c->r[3]; // 801D6470
  c->r[3]=c->r[18]|c->r[18]; // 801D6474
  c->r[4]=c->r[25]|c->r[25]; // 801D6478
  c->lr=0x801D6480u; f_801D67FC(c); // 801D647C
  c->r[15]=c->r[3]|c->r[3]; // 801D6480
  c->r[14]=rotl(c->r[14],0)&0x000000FFu; // 801D6484
  c->r[19]=0u+0x00000000u; // 801D6488
  goto L_801D64A8; // 801D648C
L_801D6490:;
  c->r[3]=c->r[16]|c->r[16]; // 801D6490
  c->r[4]=c->r[15]|c->r[15]; // 801D6494
  c->lr=0x801D649Cu; f_801D66F8(c); // 801D6498
  c->r[15]=c->r[15]+0x00000010u; // 801D649C
  c->r[16]=c->r[16]+0x00000010u; // 801D64A0
  c->r[19]=c->r[19]+0x00000001u; // 801D64A4
L_801D64A8:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[14]); // 801D64A8
  if (crb(c,0)) { IRQCHK(c); goto L_801D6490; } // 801D64AC
L_801D64B0:;
  c->r[3]=c->r[18]+0x0000003Cu; // 801D64B0
  c->lr=0x801D64B8u; f_801D65E0(c); // 801D64B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D64B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D64BC
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 801D64C0
  c->r[25]=c->r[25]+c->r[0]; // 801D64C4
  if (crb(c,2)) { goto L_801D64F0; } // 801D64C8
  c->r[3]=c->r[18]|c->r[18]; // 801D64CC
  c->r[4]=c->r[25]|c->r[25]; // 801D64D0
  c->lr=0x801D64D8u; f_801D67F4(c); // 801D64D4
  c->r[14]=c->r[3]|c->r[3]; // 801D64D8
  c->r[3]=c->r[17]|c->r[17]; // 801D64DC
  c->lr=0x801D64E4u; f_801D71C4(c); // 801D64E0
  c->r[4]=c->r[14]|c->r[14]; // 801D64E4
  c->lr=0x801D64ECu; f_801D67A4(c); // 801D64E8
  c->r[25]=c->r[25]+0x00000004u; // 801D64EC
L_801D64F0:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 801D64F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D64F4
  if (crb(c,2)) { goto L_801D651C; } // 801D64F8
  c->r[3]=c->r[18]|c->r[18]; // 801D64FC
  c->r[4]=c->r[25]|c->r[25]; // 801D6500
  c->lr=0x801D6508u; f_801D67EC(c); // 801D6504
  c->r[14]=c->r[3]|c->r[3]; // 801D6508
  c->r[3]=c->r[17]|c->r[17]; // 801D650C
  c->lr=0x801D6514u; f_801D7208(c); // 801D6510
  c->r[4]=c->r[14]|c->r[14]; // 801D6514
  c->lr=0x801D651Cu; f_801D67C8(c); // 801D6518
L_801D651C:;
  c->r[11]=c->r[1]+0x00000080u; // 801D651C
  c->r[3]=c->r[17]|c->r[17]; // 801D6520
  c->lr=0x801D6528u; f_80109F50(c); // 801D6524
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D6528
  c->lr=c->r[0]; // 801D652C
  c->r[1]=c->r[1]+0x00000080u; // 801D6530
  return; // 801D6534
}

// __as__11_GXColorS10FRC11_GXColorS10
void f_801D6538(Ctx* __restrict c) {
  trace_call(0x801D6538u);
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 801D6538
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801D653C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 801D6540
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 801D6544
  W16(c->r[3]+0x00000000u,c->r[7]); // 801D6548
  W16(c->r[3]+0x00000002u,c->r[6]); // 801D654C
  W16(c->r[3]+0x00000004u,c->r[5]); // 801D6550
  W16(c->r[3]+0x00000006u,c->r[0]); // 801D6554
  return; // 801D6558
}

// __as__Q34nw4r2ut5ColorFRC8_GXColor
void f_801D655C(Ctx* __restrict c) {
  trace_call(0x801D655Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 801D655C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D6560
  return; // 801D6564
}

// GetTexMapNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D6568(Ctx* __restrict c) {
  trace_call(0x801D6568u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D6568
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 801D656C
  return; // 801D6570
}

// GetTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D6574(Ctx* __restrict c) {
  trace_call(0x801D6574u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D6574
  c->r[3]=rotl(c->r[0],28)&0x0000000Fu; // 801D6578
  return; // 801D657C
}

// GetTexCoordGenNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D6580(Ctx* __restrict c) {
  trace_call(0x801D6580u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D6580
  c->r[3]=rotl(c->r[0],24)&0x0000000Fu; // 801D6584
  return; // 801D6588
}


#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// Detach__Q34nw4r3g3d13AnmObjChrNodeFi
void f_801B3F58(Ctx* __restrict c) {
  trace_call(0x801B3F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3F58
  c->r[0]=c->lr; // 801B3F5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3F60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3F64
  c->r[31]=c->r[3]|c->r[3]; // 801B3F68
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3F6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3F70
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B3F74
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B3F78
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 801B3F7C
  c->r[28]=R32(c->r[5]+c->r[29]); // 801B3F80
  cmps(c,0,(int32_t)c->r[28],0); // 801B3F84
  if (crb(c,2)) { goto L_801B404C; } // 801B3F88
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B3F8C
  c->r[30]=0u+0x00010000u; // 801B3F90
  c->r[3]=c->r[28]|c->r[28]; // 801B3F94
  c->r[6]=c->r[31]|c->r[31]; // 801B3F98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B3F9C
  c->r[4]=c->r[30]+0x00000003u; // 801B3FA0
  c->r[5]=0u+0x00000000u; // 801B3FA4
  c->ctr=c->r[12]; // 801B3FA8
  if (true) { c->lr=0x801B3FB0u; dispatch(c,c->ctr); } // 801B3FAC
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801B3FB0
  c->r[0]=0u+0x00000000u; // 801B3FB4
  c->r[6]=0u+0x00000000u; // 801B3FB8
  c->r[7]=0u+0x00000000u; // 801B3FBC
  W32(c->r[3]+c->r[29],c->r[0]); // 801B3FC0
  c->r[4]=0u+0x00000000u; // 801B3FC4
  goto L_801B4028; // 801B3FC8
L_801B3FCC:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801B3FCC
  c->r[8]=c->r[30]+0xFFFF8000u; // 801B3FD0
  c->r[5]=0u+0x00000000u; // 801B3FD4
  c->ctr=c->r[0]; // 801B3FD8
  cmps(c,0,(int32_t)c->r[0],0); // 801B3FDC
  if (!crb(c,1)) { goto L_801B4018; } // 801B3FE0
L_801B3FE4:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801B3FE4
  c->r[3]=R32(c->r[3]+c->r[5]); // 801B3FE8
  cmps(c,0,(int32_t)c->r[3],0); // 801B3FEC
  if (crb(c,2)) { goto L_801B4010; } // 801B3FF0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801B3FF4
  c->r[0]=R16(c->r[4]+c->r[0]); // 801B3FF8
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 801B3FFC
  if (!crb(c,2)) { goto L_801B4010; } // 801B4000
  c->r[6]=0u+0x00000001u; // 801B4004
  c->r[8]=0u+0x00000000u; // 801B4008
  goto L_801B4018; // 801B400C
L_801B4010:;
  c->r[5]=c->r[5]+0x00000004u; // 801B4010
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3FE4; } // 801B4014
L_801B4018:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801B4018
  c->r[7]=c->r[7]+0x00000001u; // 801B401C
  W16(c->r[3]+c->r[4],c->r[8]); // 801B4020
  c->r[4]=c->r[4]+0x00000002u; // 801B4024
L_801B4028:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801B4028
  cmpu(c,0,c->r[7],c->r[0]); // 801B402C
  if (crb(c,0)) { IRQCHK(c); goto L_801B3FCC; } // 801B4030
  cmps(c,0,(int32_t)c->r[6],0); // 801B4034
  if (!crb(c,2)) { goto L_801B404C; } // 801B4038
  c->r[3]=c->r[31]|c->r[31]; // 801B403C
  c->r[4]=0u+0x00000004u; // 801B4040
  c->r[5]=0u+0x00000000u; // 801B4044
  c->lr=0x801B404Cu; f_801B7C80(c); // 801B4048
L_801B404C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B404C
  c->r[3]=c->r[28]|c->r[28]; // 801B4050
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4054
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4058
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B405C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4060
  c->lr=c->r[0]; // 801B4064
  c->r[1]=c->r[1]+0x00000020u; // 801B4068
  return; // 801B406C
}

// DetachAll__Q34nw4r3g3d13AnmObjChrNodeFv
void f_801B4070(Ctx* __restrict c) {
  trace_call(0x801B4070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4070
  c->r[0]=c->lr; // 801B4074
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B407C
  c->r[31]=0u+0x00000000u; // 801B4080
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4084
  c->r[30]=c->r[3]|c->r[3]; // 801B4088
  goto L_801B40AC; // 801B408C
L_801B4090:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801B4090
  c->r[3]=c->r[30]|c->r[30]; // 801B4094
  c->r[4]=c->r[31]|c->r[31]; // 801B4098
  c->r[12]=R32(c->r[12]+0x00000040u); // 801B409C
  c->ctr=c->r[12]; // 801B40A0
  if (true) { c->lr=0x801B40A8u; dispatch(c,c->ctr); } // 801B40A4
  c->r[31]=c->r[31]+0x00000001u; // 801B40A8
L_801B40AC:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 801B40AC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801B40B0
  if (crb(c,0)) { IRQCHK(c); goto L_801B4090; } // 801B40B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B40B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B40BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B40C0
  c->lr=c->r[0]; // 801B40C4
  c->r[1]=c->r[1]+0x00000010u; // 801B40C8
  return; // 801B40CC
}

// UpdateFrame__Q34nw4r3g3d13AnmObjChrNodeFv
void f_801B40D0(Ctx* __restrict c) {
  trace_call(0x801B40D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B40D0
  c->r[0]=c->lr; // 801B40D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B40D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B40DC
  c->r[31]=0u+0x00000000u; // 801B40E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B40E4
  c->r[30]=0u+0x00000000u; // 801B40E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B40EC
  c->r[29]=c->r[3]|c->r[3]; // 801B40F0
  goto L_801B4120; // 801B40F4
L_801B40F8:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801B40F8
  c->r[3]=R32(c->r[3]+c->r[31]); // 801B40FC
  cmps(c,0,(int32_t)c->r[3],0); // 801B4100
  if (crb(c,2)) { goto L_801B4118; } // 801B4104
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4108
  c->r[12]=R32(c->r[12]+0x00000024u); // 801B410C
  c->ctr=c->r[12]; // 801B4110
  if (true) { c->lr=0x801B4118u; dispatch(c,c->ctr); } // 801B4114
L_801B4118:;
  c->r[31]=c->r[31]+0x00000004u; // 801B4118
  c->r[30]=c->r[30]+0x00000001u; // 801B411C
L_801B4120:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801B4120
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801B4124
  if (crb(c,0)) { IRQCHK(c); goto L_801B40F8; } // 801B4128
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B412C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4130
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4134
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4138
  c->lr=c->r[0]; // 801B413C
  c->r[1]=c->r[1]+0x00000020u; // 801B4140
  return; // 801B4144
}

// SetFrame__Q34nw4r3g3d13AnmObjChrNodeFf
void f_801B4148(Ctx* __restrict c) {
  trace_call(0x801B4148u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4148
  c->r[0]=c->lr; // 801B414C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4150
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801B4154
  c->f[31]=c->f[1]; // 801B4158
  W32(c->r[1]+0x00000014u,c->r[31]); // 801B415C
  c->r[31]=0u+0x00000000u; // 801B4160
  W32(c->r[1]+0x00000010u,c->r[30]); // 801B4164
  c->r[30]=0u+0x00000000u; // 801B4168
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 801B416C
  c->r[29]=c->r[3]|c->r[3]; // 801B4170
  goto L_801B41A4; // 801B4174
L_801B4178:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801B4178
  c->r[3]=R32(c->r[3]+c->r[31]); // 801B417C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4180
  if (crb(c,2)) { goto L_801B419C; } // 801B4184
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4188
  c->f[1]=c->f[31]; // 801B418C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801B4190
  c->ctr=c->r[12]; // 801B4194
  if (true) { c->lr=0x801B419Cu; dispatch(c,c->ctr); } // 801B4198
L_801B419C:;
  c->r[31]=c->r[31]+0x00000004u; // 801B419C
  c->r[30]=c->r[30]+0x00000001u; // 801B41A0
L_801B41A4:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801B41A4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801B41A8
  if (crb(c,0)) { IRQCHK(c); goto L_801B4178; } // 801B41AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B41B0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801B41B4
  c->r[31]=R32(c->r[1]+0x00000014u); // 801B41B8
  c->r[30]=R32(c->r[1]+0x00000010u); // 801B41BC
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 801B41C0
  c->lr=c->r[0]; // 801B41C4
  c->r[1]=c->r[1]+0x00000020u; // 801B41C8
  return; // 801B41CC
}

// GetFrame__Q34nw4r3g3d13AnmObjChrNodeCFv
void f_801B41D0(Ctx* __restrict c) {
  trace_call(0x801B41D0u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B41D0
  c->r[6]=0u+0x00000000u; // 801B41D4
  c->r[5]=0u+0x00000000u; // 801B41D8
  c->ctr=c->r[0]; // 801B41DC
  cmps(c,0,(int32_t)c->r[0],0); // 801B41E0
  if (!crb(c,1)) { goto L_801B421C; } // 801B41E4
L_801B41E8:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801B41E8
  c->r[0]=R32(c->r[4]+c->r[5]); // 801B41EC
  cmps(c,0,(int32_t)c->r[0],0); // 801B41F0
  if (crb(c,2)) { goto L_801B4210; } // 801B41F4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801B41F8
  c->r[3]=R32(c->r[4]+c->r[0]); // 801B41FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4200
  c->r[12]=R32(c->r[12]+0x00000020u); // 801B4204
  c->ctr=c->r[12]; // 801B4208
  if (true) { dispatch(c,c->ctr); return; } // 801B420C
L_801B4210:;
  c->r[5]=c->r[5]+0x00000004u; // 801B4210
  c->r[6]=c->r[6]+0x00000001u; // 801B4214
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B41E8; } // 801B4218
L_801B421C:;
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B421C
  return; // 801B4220
}

// SetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeFf
void f_801B4224(Ctx* __restrict c) {
  trace_call(0x801B4224u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4224
  c->r[0]=c->lr; // 801B4228
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B422C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801B4230
  c->f[31]=c->f[1]; // 801B4234
  W32(c->r[1]+0x00000014u,c->r[31]); // 801B4238
  c->r[31]=0u+0x00000000u; // 801B423C
  W32(c->r[1]+0x00000010u,c->r[30]); // 801B4240
  c->r[30]=0u+0x00000000u; // 801B4244
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 801B4248
  c->r[29]=c->r[3]|c->r[3]; // 801B424C
  goto L_801B4280; // 801B4250
L_801B4254:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801B4254
  c->r[3]=R32(c->r[3]+c->r[31]); // 801B4258
  cmps(c,0,(int32_t)c->r[3],0); // 801B425C
  if (crb(c,2)) { goto L_801B4278; } // 801B4260
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4264
  c->f[1]=c->f[31]; // 801B4268
  c->r[12]=R32(c->r[12]+0x00000028u); // 801B426C
  c->ctr=c->r[12]; // 801B4270
  if (true) { c->lr=0x801B4278u; dispatch(c,c->ctr); } // 801B4274
L_801B4278:;
  c->r[31]=c->r[31]+0x00000004u; // 801B4278
  c->r[30]=c->r[30]+0x00000001u; // 801B427C
L_801B4280:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801B4280
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801B4284
  if (crb(c,0)) { IRQCHK(c); goto L_801B4254; } // 801B4288
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B428C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801B4290
  c->r[31]=R32(c->r[1]+0x00000014u); // 801B4294
  c->r[30]=R32(c->r[1]+0x00000010u); // 801B4298
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 801B429C
  c->lr=c->r[0]; // 801B42A0
  c->r[1]=c->r[1]+0x00000020u; // 801B42A4
  return; // 801B42A8
}

// GetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeCFv
void f_801B42AC(Ctx* __restrict c) {
  trace_call(0x801B42ACu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B42AC
  c->r[6]=0u+0x00000000u; // 801B42B0
  c->r[5]=0u+0x00000000u; // 801B42B4
  c->ctr=c->r[0]; // 801B42B8
  cmps(c,0,(int32_t)c->r[0],0); // 801B42BC
  if (!crb(c,1)) { goto L_801B42F8; } // 801B42C0
L_801B42C4:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801B42C4
  c->r[0]=R32(c->r[4]+c->r[5]); // 801B42C8
  cmps(c,0,(int32_t)c->r[0],0); // 801B42CC
  if (crb(c,2)) { goto L_801B42EC; } // 801B42D0
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801B42D4
  c->r[3]=R32(c->r[4]+c->r[0]); // 801B42D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B42DC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801B42E0
  c->ctr=c->r[12]; // 801B42E4
  if (true) { dispatch(c,c->ctr); return; } // 801B42E8
L_801B42EC:;
  c->r[5]=c->r[5]+0x00000004u; // 801B42EC
  c->r[6]=c->r[6]+0x00000001u; // 801B42F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B42C4; } // 801B42F4
L_801B42F8:;
  {uint32_t ea=c->r[2]+0xFFFF9B64u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B42F8
  return; // 801B42FC
}

// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdl
void f_801B4300(Ctx* __restrict c) {
  trace_call(0x801B4300u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4300
  c->r[0]=c->lr; // 801B4304
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B4308
  c->r[11]=c->r[1]+0x00000030u; // 801B430C
  c->lr=0x801B4314u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4310
  c->r[25]=c->r[3]|c->r[3]; // 801B4314
  c->r[26]=c->r[4]|c->r[4]; // 801B4318
  c->r[29]=0u+0x00000000u; // 801B431C
  c->r[28]=0u+0x00000000u; // 801B4320
  c->r[30]=0u+0x00000000u; // 801B4324
  c->r[31]=0u+0x00000000u; // 801B4328
  goto L_801B43B8; // 801B432C
L_801B4330:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 801B4330
  c->r[27]=R32(c->r[3]+c->r[30]); // 801B4334
  cmps(c,0,(int32_t)c->r[27],0); // 801B4338
  if (crb(c,2)) { goto L_801B43B0; } // 801B433C
  c->r[0]=R32(c->r[26]+0x00000000u); // 801B4340
  c->r[3]=c->r[27]|c->r[27]; // 801B4344
  c->r[4]=c->r[1]+0x00000008u; // 801B4348
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B434C
  c->r[12]=R32(c->r[27]+0x00000000u); // 801B4350
  c->r[12]=R32(c->r[12]+0x00000030u); // 801B4354
  c->ctr=c->r[12]; // 801B4358
  if (true) { c->lr=0x801B4360u; dispatch(c,c->ctr); } // 801B435C
  cmps(c,0,(int32_t)c->r[29],0); // 801B4360
  c->r[29]=0u+0x00000000u; // 801B4364
  if (!crb(c,2)) { goto L_801B4374; } // 801B4368
  cmps(c,0,(int32_t)c->r[3],0); // 801B436C
  if (crb(c,2)) { goto L_801B4378; } // 801B4370
L_801B4374:;
  c->r[29]=0u+0x00000001u; // 801B4374
L_801B4378:;
  c->r[5]=0u+0x00000000u; // 801B4378
  c->r[4]=0u+0x00000000u; // 801B437C
  goto L_801B43A4; // 801B4380
L_801B4384:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 801B4384
  c->r[0]=R16(c->r[3]+c->r[4]); // 801B4388
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 801B438C
  if (!crb(c,2)) { goto L_801B439C; } // 801B4390
  c->r[3]=R32(c->r[25]+0x00000014u); // 801B4394
  W16(c->r[3]+c->r[4],c->r[31]); // 801B4398
L_801B439C:;
  c->r[4]=c->r[4]+0x00000002u; // 801B439C
  c->r[5]=c->r[5]+0x00000001u; // 801B43A0
L_801B43A4:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 801B43A4
  cmpu(c,0,c->r[5],c->r[0]); // 801B43A8
  if (crb(c,0)) { IRQCHK(c); goto L_801B4384; } // 801B43AC
L_801B43B0:;
  c->r[30]=c->r[30]+0x00000004u; // 801B43B0
  c->r[28]=c->r[28]+0x00000001u; // 801B43B4
L_801B43B8:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 801B43B8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801B43BC
  if (crb(c,0)) { IRQCHK(c); goto L_801B4330; } // 801B43C0
  c->r[3]=c->r[25]|c->r[25]; // 801B43C4
  c->r[4]=0u+0x00000004u; // 801B43C8
  c->r[5]=0u+0x00000001u; // 801B43CC
  c->lr=0x801B43D4u; f_801B7C80(c); // 801B43D0
  c->r[11]=c->r[1]+0x00000030u; // 801B43D4
  c->r[3]=c->r[29]|c->r[29]; // 801B43D8
  c->lr=0x801B43E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B43DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B43E0
  c->lr=c->r[0]; // 801B43E4
  c->r[1]=c->r[1]+0x00000030u; // 801B43E8
  return; // 801B43EC
}

// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_801B43F0(Ctx* __restrict c) {
  trace_call(0x801B43F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B43F0
  c->r[0]=c->lr; // 801B43F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B43F8
  c->r[11]=c->r[1]+0x00000040u; // 801B43FC
  c->lr=0x801B4404u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4400
  c->r[28]=c->r[3]|c->r[3]; // 801B4404
  c->r[29]=c->r[4]|c->r[4]; // 801B4408
  c->r[30]=c->r[5]|c->r[5]; // 801B440C
  c->r[31]=c->r[6]|c->r[6]; // 801B4410
  c->r[25]=0u+0x00000000u; // 801B4414
  c->r[24]=0u+0x00000000u; // 801B4418
  c->r[26]=0u+0x00000000u; // 801B441C
  c->r[27]=0u+0x00000000u; // 801B4420
  goto L_801B44B8; // 801B4424
L_801B4428:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801B4428
  c->r[23]=R32(c->r[3]+c->r[26]); // 801B442C
  cmps(c,0,(int32_t)c->r[23],0); // 801B4430
  if (crb(c,2)) { goto L_801B44B0; } // 801B4434
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B4438
  c->r[3]=c->r[23]|c->r[23]; // 801B443C
  c->r[5]=c->r[30]|c->r[30]; // 801B4440
  c->r[6]=c->r[31]|c->r[31]; // 801B4444
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B4448
  c->r[4]=c->r[1]+0x00000008u; // 801B444C
  c->r[12]=R32(c->r[23]+0x00000000u); // 801B4450
  c->r[12]=R32(c->r[12]+0x00000050u); // 801B4454
  c->ctr=c->r[12]; // 801B4458
  if (true) { c->lr=0x801B4460u; dispatch(c,c->ctr); } // 801B445C
  cmps(c,0,(int32_t)c->r[25],0); // 801B4460
  c->r[25]=0u+0x00000000u; // 801B4464
  if (!crb(c,2)) { goto L_801B4474; } // 801B4468
  cmps(c,0,(int32_t)c->r[3],0); // 801B446C
  if (crb(c,2)) { goto L_801B4478; } // 801B4470
L_801B4474:;
  c->r[25]=0u+0x00000001u; // 801B4474
L_801B4478:;
  c->r[5]=0u+0x00000000u; // 801B4478
  c->r[4]=0u+0x00000000u; // 801B447C
  goto L_801B44A4; // 801B4480
L_801B4484:;
  c->r[3]=R32(c->r[23]+0x00000014u); // 801B4484
  c->r[0]=R16(c->r[3]+c->r[4]); // 801B4488
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 801B448C
  if (!crb(c,2)) { goto L_801B449C; } // 801B4490
  c->r[3]=R32(c->r[28]+0x00000014u); // 801B4494
  W16(c->r[3]+c->r[4],c->r[27]); // 801B4498
L_801B449C:;
  c->r[4]=c->r[4]+0x00000002u; // 801B449C
  c->r[5]=c->r[5]+0x00000001u; // 801B44A0
L_801B44A4:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801B44A4
  cmpu(c,0,c->r[5],c->r[0]); // 801B44A8
  if (crb(c,0)) { IRQCHK(c); goto L_801B4484; } // 801B44AC
L_801B44B0:;
  c->r[26]=c->r[26]+0x00000004u; // 801B44B0
  c->r[24]=c->r[24]+0x00000001u; // 801B44B4
L_801B44B8:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 801B44B8
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801B44BC
  if (crb(c,0)) { IRQCHK(c); goto L_801B4428; } // 801B44C0
  c->r[3]=c->r[28]|c->r[28]; // 801B44C4
  c->r[4]=0u+0x00000004u; // 801B44C8
  c->r[5]=0u+0x00000001u; // 801B44CC
  c->lr=0x801B44D4u; f_801B7C80(c); // 801B44D0
  c->r[11]=c->r[1]+0x00000040u; // 801B44D4
  c->r[3]=c->r[25]|c->r[25]; // 801B44D8
  c->lr=0x801B44E0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B44DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B44E0
  c->lr=c->r[0]; // 801B44E4
  c->r[1]=c->r[1]+0x00000040u; // 801B44E8
  return; // 801B44EC
}

// Release__Q34nw4r3g3d13AnmObjChrNodeFv
void f_801B44F0(Ctx* __restrict c) {
  trace_call(0x801B44F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B44F0
  c->r[0]=c->lr; // 801B44F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B44F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B44FC
  c->r[31]=0u+0x00000000u; // 801B4500
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4504
  c->r[30]=0u+0x00000000u; // 801B4508
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B450C
  c->r[29]=c->r[3]|c->r[3]; // 801B4510
  goto L_801B4540; // 801B4514
L_801B4518:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801B4518
  c->r[3]=R32(c->r[3]+c->r[31]); // 801B451C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4520
  if (crb(c,2)) { goto L_801B4538; } // 801B4524
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4528
  c->r[12]=R32(c->r[12]+0x00000034u); // 801B452C
  c->ctr=c->r[12]; // 801B4530
  if (true) { c->lr=0x801B4538u; dispatch(c,c->ctr); } // 801B4534
L_801B4538:;
  c->r[31]=c->r[31]+0x00000004u; // 801B4538
  c->r[30]=c->r[30]+0x00000001u; // 801B453C
L_801B4540:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801B4540
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801B4544
  if (crb(c,0)) { IRQCHK(c); goto L_801B4518; } // 801B4548
  c->r[3]=0u+0x00010000u; // 801B454C
  c->r[5]=0u+0x00000000u; // 801B4550
  c->r[4]=c->r[3]+0xFFFF8000u; // 801B4554
  c->r[6]=0u+0x00000000u; // 801B4558
  goto L_801B4570; // 801B455C
L_801B4560:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801B4560
  c->r[5]=c->r[5]+0x00000001u; // 801B4564
  W16(c->r[3]+c->r[6],c->r[4]); // 801B4568
  c->r[6]=c->r[6]+0x00000002u; // 801B456C
L_801B4570:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B4570
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801B4574
  if (crb(c,0)) { IRQCHK(c); goto L_801B4560; } // 801B4578
  c->r[3]=c->r[29]|c->r[29]; // 801B457C
  c->r[4]=0u+0x00000004u; // 801B4580
  c->r[5]=0u+0x00000000u; // 801B4584
  c->lr=0x801B458Cu; f_801B7C80(c); // 801B4588
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B458C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4590
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4594
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4598
  c->lr=c->r[0]; // 801B459C
  c->r[1]=c->r[1]+0x00000020u; // 801B45A0
  return; // 801B45A4
}

// Release__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_801B45A8(Ctx* __restrict c) {
  trace_call(0x801B45A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B45A8
  c->r[0]=c->lr; // 801B45AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B45B0
  c->r[11]=c->r[1]+0x00000030u; // 801B45B4
  c->lr=0x801B45BCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B45B8
  c->r[31]=c->r[3]|c->r[3]; // 801B45BC
  c->r[26]=c->r[4]|c->r[4]; // 801B45C0
  c->r[27]=c->r[5]|c->r[5]; // 801B45C4
  c->r[28]=c->r[6]|c->r[6]; // 801B45C8
  c->r[29]=0u+0x00000000u; // 801B45CC
  c->r[30]=0u+0x00000000u; // 801B45D0
  goto L_801B4614; // 801B45D4
L_801B45D8:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801B45D8
  c->r[3]=R32(c->r[3]+c->r[30]); // 801B45DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B45E0
  if (crb(c,2)) { goto L_801B460C; } // 801B45E4
  c->r[0]=R32(c->r[26]+0x00000000u); // 801B45E8
  c->r[5]=c->r[27]|c->r[27]; // 801B45EC
  c->r[6]=c->r[28]|c->r[28]; // 801B45F0
  c->r[4]=c->r[1]+0x00000008u; // 801B45F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B45F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B45FC
  c->r[12]=R32(c->r[12]+0x00000054u); // 801B4600
  c->ctr=c->r[12]; // 801B4604
  if (true) { c->lr=0x801B460Cu; dispatch(c,c->ctr); } // 801B4608
L_801B460C:;
  c->r[30]=c->r[30]+0x00000004u; // 801B460C
  c->r[29]=c->r[29]+0x00000001u; // 801B4610
L_801B4614:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801B4614
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801B4618
  if (crb(c,0)) { IRQCHK(c); goto L_801B45D8; } // 801B461C
  c->r[3]=0u+0x00010000u; // 801B4620
  c->r[5]=0u+0x00000000u; // 801B4624
  c->r[4]=c->r[3]+0xFFFF8000u; // 801B4628
  c->r[6]=0u+0x00000000u; // 801B462C
  goto L_801B4644; // 801B4630
L_801B4634:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801B4634
  c->r[5]=c->r[5]+0x00000001u; // 801B4638
  W16(c->r[3]+c->r[6],c->r[4]); // 801B463C
  c->r[6]=c->r[6]+0x00000002u; // 801B4640
L_801B4644:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801B4644
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801B4648
  if (crb(c,0)) { IRQCHK(c); goto L_801B4634; } // 801B464C
  c->r[3]=c->r[31]|c->r[31]; // 801B4650
  c->r[4]=0u+0x00000004u; // 801B4654
  c->r[5]=0u+0x00000000u; // 801B4658
  c->lr=0x801B4660u; f_801B7C80(c); // 801B465C
  c->r[7]=0u+0x00000000u; // 801B4660
  c->r[5]=0u+0x00000000u; // 801B4664
  c->r[4]=0u+0x00000000u; // 801B4668
  goto L_801B46C0; // 801B466C
L_801B4670:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801B4670
  c->r[8]=R32(c->r[3]+c->r[5]); // 801B4674
  cmps(c,0,(int32_t)c->r[8],0); // 801B4678
  if (crb(c,2)) { goto L_801B46B8; } // 801B467C
  c->r[9]=0u+0x00000000u; // 801B4680
  c->r[6]=0u+0x00000000u; // 801B4684
  goto L_801B46AC; // 801B4688
L_801B468C:;
  c->r[3]=R32(c->r[8]+0x00000014u); // 801B468C
  c->r[0]=R16(c->r[3]+c->r[6]); // 801B4690
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 801B4694
  if (!crb(c,2)) { goto L_801B46A4; } // 801B4698
  c->r[3]=R32(c->r[31]+0x00000014u); // 801B469C
  W16(c->r[3]+c->r[6],c->r[4]); // 801B46A0
L_801B46A4:;
  c->r[6]=c->r[6]+0x00000002u; // 801B46A4
  c->r[9]=c->r[9]+0x00000001u; // 801B46A8
L_801B46AC:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801B46AC
  cmpu(c,0,c->r[9],c->r[0]); // 801B46B0
  if (crb(c,0)) { IRQCHK(c); goto L_801B468C; } // 801B46B4
L_801B46B8:;
  c->r[5]=c->r[5]+0x00000004u; // 801B46B8
  c->r[7]=c->r[7]+0x00000001u; // 801B46BC
L_801B46C0:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801B46C0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801B46C4
  if (crb(c,0)) { IRQCHK(c); goto L_801B4670; } // 801B46C8
  c->r[11]=c->r[1]+0x00000030u; // 801B46CC
  c->lr=0x801B46D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B46D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B46D4
  c->lr=c->r[0]; // 801B46D8
  c->r[1]=c->r[1]+0x00000030u; // 801B46DC
  return; // 801B46E0
}

// G3dProc__Q34nw4r3g3d13AnmObjChrNodeFUlUlPv
void f_801B46E4(Ctx* __restrict c) {
  trace_call(0x801B46E4u);
  c->r[5]=0u+0x00010000u; // 801B46E4
  c->r[0]=c->r[5]+0x00000002u; // 801B46E8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B46EC
  if (crb(c,2)) { goto L_801B476C; } // 801B46F0
  if (!crb(c,0)) { goto L_801B4708; } // 801B46F4
  c->r[0]=c->r[5]+0x00000001u; // 801B46F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B46FC
  if (!crb(c,0)) { goto L_801B4718; } // 801B4700
  return; // 801B4704
L_801B4708:;
  c->r[0]=c->r[5]+0x00000004u; // 801B4708
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B470C
  if (!crb(c,0)) return; // 801B4710
  goto L_801B4760; // 801B4714
L_801B4718:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B4718
  c->r[4]=0u+0x00000000u; // 801B471C
  c->r[7]=0u+0x00000000u; // 801B4720
  c->ctr=c->r[0]; // 801B4724
  cmps(c,0,(int32_t)c->r[0],0); // 801B4728
  if (!crb(c,1)) return; // 801B472C
L_801B4730:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 801B4730
  c->r[0]=R32(c->r[5]+c->r[7]); // 801B4734
  cmpu(c,0,c->r[0],c->r[6]); // 801B4738
  if (!crb(c,2)) { goto L_801B4750; } // 801B473C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4740
  c->r[12]=R32(c->r[12]+0x00000040u); // 801B4744
  c->ctr=c->r[12]; // 801B4748
  if (true) { dispatch(c,c->ctr); return; } // 801B474C
L_801B4750:;
  c->r[7]=c->r[7]+0x00000004u; // 801B4750
  c->r[4]=c->r[4]+0x00000001u; // 801B4754
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B4730; } // 801B4758
  return; // 801B475C
L_801B4760:;
  c->r[0]=0u+0x00000000u; // 801B4760
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B4764
  return; // 801B4768
L_801B476C:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 801B476C
  return; // 801B4770
}

// Construct__Q34nw4r3g3d14AnmObjChrBlendFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdli
void f_801B4774(Ctx* __restrict c) {
  trace_call(0x801B4774u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4774
  c->r[0]=c->lr; // 801B4778
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B477C
  c->r[11]=c->r[1]+0x00000030u; // 801B4780
  c->lr=0x801B4788u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4784
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B4788
  c->r[25]=c->r[3]|c->r[3]; // 801B478C
  c->r[29]=c->r[4]|c->r[4]; // 801B4790
  c->r[30]=c->r[6]|c->r[6]; // 801B4794
  cmps(c,0,(int32_t)c->r[0],0); // 801B4798
  if (!crb(c,2)) { goto L_801B47A8; } // 801B479C
  c->r[3]=0u+0x00000000u; // 801B47A0
  goto L_801B48D0; // 801B47A4
L_801B47A8:;
  c->r[3]=c->r[5]|c->r[5]; // 801B47A8
  c->lr=0x801B47B0u; f_801A9AF8(c); // 801B47AC
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B47B0
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801B47B4
  c->r[0]=c->r[4]+0x00000027u; // 801B47B8
  c->r[28]=c->r[3]|c->r[3]; // 801B47BC
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B47C0
  cmps(c,0,(int32_t)c->r[29],0); // 801B47C4
  c->r[3]=c->r[27]+c->r[5]; // 801B47C8
  c->r[0]=c->r[3]+0x00000003u; // 801B47CC
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B47D0
  c->r[3]=c->r[26]+c->r[5]; // 801B47D4
  c->r[0]=c->r[3]+0x00000003u; // 801B47D8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B47DC
  if (crb(c,2)) { goto L_801B47E8; } // 801B47E0
  W32(c->r[29]+0x00000000u,c->r[4]); // 801B47E4
L_801B47E8:;
  cmps(c,0,(int32_t)c->r[25],0); // 801B47E8
  if (!crb(c,2)) { goto L_801B47F8; } // 801B47EC
  c->r[3]=0u+0x00000000u; // 801B47F0
  goto L_801B48D0; // 801B47F4
L_801B47F8:;
  c->r[3]=c->r[25]|c->r[25]; // 801B47F8
  c->lr=0x801B4800u; f_80128068(c); // 801B47FC
  cmps(c,0,(int32_t)c->r[3],0); // 801B4800
  c->r[31]=c->r[3]|c->r[3]; // 801B4804
  if (!crb(c,2)) { goto L_801B4814; } // 801B4808
  c->r[3]=0u+0x00000000u; // 801B480C
  goto L_801B48D0; // 801B4810
L_801B4814:;
  if (crb(c,2)) { goto L_801B48CC; } // 801B4814
  c->r[29]=0u+0x00000000u; // 801B4818
  c->r[12]=0u+0x802A0000u; // 801B481C
  W32(c->r[3]+0x00000004u,c->r[29]); // 801B4820
  c->r[12]=c->r[12]+0x000011E0u; // 801B4824
  c->r[0]=c->r[3]+0x00000024u; // 801B4828
  W32(c->r[3]+0x00000008u,c->r[25]); // 801B482C
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 801B4830
  W32(c->r[3]+0x00000000u,c->r[12]); // 801B4834
  W32(c->r[3]+0x00000010u,c->r[28]); // 801B4838
  W32(c->r[3]+0x00000014u,c->r[0]); // 801B483C
  c->r[12]=R32(c->r[12]+0x00000034u); // 801B4840
  c->ctr=c->r[12]; // 801B4844
  if (true) { c->lr=0x801B484Cu; dispatch(c,c->ctr); } // 801B4848
  c->r[3]=0u+0x802A0000u; // 801B484C
  c->r[0]=c->r[31]+c->r[27]; // 801B4850
  c->r[3]=c->r[3]+0x00001188u; // 801B4854
  c->r[4]=0u+0x00000000u; // 801B4858
  W32(c->r[31]+0x00000000u,c->r[3]); // 801B485C
  c->r[5]=0u+0x00000000u; // 801B4860
  W32(c->r[31]+0x00000018u,c->r[30]); // 801B4864
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801B4868
  goto L_801B4880; // 801B486C
L_801B4870:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801B4870
  c->r[4]=c->r[4]+0x00000001u; // 801B4874
  W32(c->r[3]+c->r[5],c->r[29]); // 801B4878
  c->r[5]=c->r[5]+0x00000004u; // 801B487C
L_801B4880:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801B4880
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B4884
  if (crb(c,0)) { IRQCHK(c); goto L_801B4870; } // 801B4888
  c->r[3]=0u+0x802A0000u; // 801B488C
  c->r[0]=c->r[31]+c->r[26]; // 801B4890
  c->r[3]=c->r[3]+0x00001130u; // 801B4894
  {uint32_t ea=c->r[2]+0xFFFF9B64u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4898
  W32(c->r[31]+0x00000000u,c->r[3]); // 801B489C
  c->r[4]=0u+0x00000000u; // 801B48A0
  c->r[5]=0u+0x00000000u; // 801B48A4
  W32(c->r[31]+0x00000020u,c->r[0]); // 801B48A8
  goto L_801B48C0; // 801B48AC
L_801B48B0:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 801B48B0
  c->r[4]=c->r[4]+0x00000001u; // 801B48B4
  {uint32_t ea=c->r[3]+c->r[5]; WF32(ea,c->f[0]);} // 801B48B8
  c->r[5]=c->r[5]+0x00000004u; // 801B48BC
L_801B48C0:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801B48C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B48C4
  if (crb(c,0)) { IRQCHK(c); goto L_801B48B0; } // 801B48C8
L_801B48CC:;
  c->r[3]=c->r[31]|c->r[31]; // 801B48CC
L_801B48D0:;
  c->r[11]=c->r[1]+0x00000030u; // 801B48D0
  c->lr=0x801B48D8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B48D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B48D8
  c->lr=c->r[0]; // 801B48DC
  c->r[1]=c->r[1]+0x00000030u; // 801B48E0
  return; // 801B48E4
}

// GetResult__Q34nw4r3g3d14AnmObjChrBlendFPQ34nw4r3g3d12ChrAnmResultUl
void f_801B48E8(Ctx* __restrict c) {
  trace_call(0x801B48E8u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B48E8
  c->r[0]=c->lr; // 801B48EC
  W32(c->r[1]+0x00000164u,c->r[0]); // 801B48F0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 801B48F4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 801B48F8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 801B48FC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 801B4900
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 801B4904
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 801B4908
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 801B490C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 801B4910
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 801B4914
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 801B4918
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 801B491C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 801B4920
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 801B4924
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 801B4928
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 801B492C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 801B4930
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 801B4934
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 801B4938
  c->r[11]=c->r[1]+0x000000D0u; // 801B493C
  c->lr=0x801B4944u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4940
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[23]=c->ps1[23]=RF32(ea);} // 801B4944
  c->r[24]=c->r[3]|c->r[3]; // 801B4948
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B494C
  c->r[25]=c->r[4]|c->r[4]; // 801B4950
  c->r[26]=c->r[5]|c->r[5]; // 801B4954
  c->f[0]=c->f[23]; // 801B4958
  c->r[28]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801B495C
  c->r[8]=0u+0x00000000u; // 801B4960
  c->r[9]=0u+0x00000000u; // 801B4964
  c->r[7]=0u+0x00000000u; // 801B4968
  c->ctr=c->r[0]; // 801B496C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4970
  if (!crb(c,1)) { goto L_801B49C4; } // 801B4974
L_801B4978:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 801B4978
  c->r[6]=R32(c->r[3]+0x00000020u); // 801B497C
  c->r[5]=R32(c->r[5]+c->r[7]); // 801B4980
  {uint32_t ea=c->r[6]+c->r[7]; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4984
  cmps(c,0,(int32_t)c->r[5],0); // 801B4988
  if (crb(c,2)) { goto L_801B49BC; } // 801B498C
  fcmp(c,0,c->f[0],c->f[1]); // 801B4990
  if (crb(c,2)) { goto L_801B49BC; } // 801B4994
  c->r[0]=R32(c->r[5]+0x00000014u); // 801B4998
  c->r[0]=R16(c->r[28]+c->r[0]); // 801B499C
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 801B49A0
  if (!crb(c,2)) { goto L_801B49BC; } // 801B49A4
  cmps(c,0,(int32_t)c->r[8],0); // 801B49A8
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[1]); // 801B49AC
  c->r[9]=c->r[9]+0x00000001u; // 801B49B0
  if (!crb(c,2)) { goto L_801B49BC; } // 801B49B4
  c->r[8]=c->r[5]|c->r[5]; // 801B49B8
L_801B49BC:;
  c->r[7]=c->r[7]+0x00000004u; // 801B49BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B4978; } // 801B49C0
L_801B49C4:;
  cmps(c,0,(int32_t)c->r[9],0); // 801B49C4
  if (!crb(c,2)) { goto L_801B49DC; } // 801B49C8
  c->r[0]=0u+0x00000000u; // 801B49CC
  c->r[3]=c->r[25]|c->r[25]; // 801B49D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B49D4
  goto L_801B4EC8; // 801B49D8
L_801B49DC:;
  cmps(c,0,(int32_t)c->r[9],1); // 801B49DC
  if (!crb(c,2)) { goto L_801B4A04; } // 801B49E0
  c->r[12]=R32(c->r[8]+0x00000000u); // 801B49E4
  c->r[3]=c->r[8]|c->r[8]; // 801B49E8
  c->r[4]=c->r[25]|c->r[25]; // 801B49EC
  c->r[5]=c->r[26]|c->r[26]; // 801B49F0
  c->r[12]=R32(c->r[12]+0x00000038u); // 801B49F4
  c->ctr=c->r[12]; // 801B49F8
  if (true) { c->lr=0x801B4A00u; dispatch(c,c->ctr); } // 801B49FC
  goto L_801B4EC8; // 801B4A00
L_801B4A04:;
  c->r[3]=c->r[24]|c->r[24]; // 801B4A04
  c->r[4]=0u+0x00000008u; // 801B4A08
  c->lr=0x801B4A10u; f_801B7CA8(c); // 801B4A0C
  c->r[30]=c->r[3]|c->r[3]; // 801B4A10
  c->r[3]=c->r[24]|c->r[24]; // 801B4A14
  c->r[4]=0u+0x00000010u; // 801B4A18
  c->lr=0x801B4A20u; f_801B7CA8(c); // 801B4A1C
  c->f[29]=c->ps1[29]=fres(c->f[23]); // 801B4A20
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[28]=c->ps1[28]=RF32(ea);} // 801B4A24
  {uint32_t ea=c->r[2]+0xFFFF9B64u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4A28
  c->r[31]=c->r[3]|c->r[3]; // 801B4A2C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[28]);} // 801B4A30
  c->r[0]=0u+0xFFFFFFFFu; // 801B4A34
  {double t0=S(c->f[29]+c->f[29]), t1=S(c->ps1[29]+c->ps1[29]); c->f[2]=t0; c->ps1[2]=t1;} // 801B4A38
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[28]);} // 801B4A3C
  {double t0=S(c->f[29]*c->f[29]), t1=S(c->ps1[29]*c->ps1[29]); c->f[1]=t0; c->ps1[1]=t1;} // 801B4A40
  c->r[3]=c->r[25]+0x0000001Cu; // 801B4A44
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[28]);} // 801B4A48
  c->f[27]=c->f[28]; // 801B4A4C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801B4A50
  c->f[26]=c->f[28]; // 801B4A54
  c->f[25]=c->f[28]; // 801B4A58
  {double t0=S(-std::fma(c->f[23],c->f[1],-c->f[2])), t1=S(-std::fma(c->ps1[23],c->ps1[1],-c->ps1[2])); c->f[29]=t0; c->ps1[29]=t1;} // 801B4A5C
  W32(c->r[25]+0x00000000u,c->r[0]); // 801B4A60
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[28]);} // 801B4A64
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[28]);} // 801B4A68
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[28]);} // 801B4A6C
  c->lr=0x801B4A74u; f_801DB8A0(c); // 801B4A70
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[30]=c->ps1[30]=RF32(ea);} // 801B4A74
  c->r[27]=0u+0x00000000u; // 801B4A78
  {uint32_t ea=c->r[2]+0xFFFF9B64u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B4A7C
  c->r[29]=0u+0x00000000u; // 801B4A80
  goto L_801B4D6C; // 801B4A84
L_801B4A88:;
  c->r[3]=R32(c->r[24]+0x0000001Cu); // 801B4A88
  c->r[4]=R32(c->r[24]+0x00000020u); // 801B4A8C
  c->r[3]=R32(c->r[3]+c->r[29]); // 801B4A90
  {uint32_t ea=c->r[4]+c->r[29]; c->f[24]=c->ps1[24]=RF32(ea);} // 801B4A94
  cmps(c,0,(int32_t)c->r[3],0); // 801B4A98
  if (crb(c,2)) { goto L_801B4D64; } // 801B4A9C
  fcmp(c,0,c->f[30],c->f[24]); // 801B4AA0
  if (crb(c,2)) { goto L_801B4D64; } // 801B4AA4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801B4AA8
  c->r[0]=R16(c->r[28]+c->r[0]); // 801B4AAC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 801B4AB0
  if (!crb(c,2)) { goto L_801B4D64; } // 801B4AB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4AB8
  c->r[5]=c->r[26]|c->r[26]; // 801B4ABC
  c->r[4]=c->r[1]+0x0000005Cu; // 801B4AC0
  c->r[12]=R32(c->r[12]+0x00000038u); // 801B4AC4
  c->ctr=c->r[12]; // 801B4AC8
  if (true) { c->lr=0x801B4AD0u; dispatch(c,c->ctr); } // 801B4ACC
  cmps(c,0,(int32_t)c->r[31],0); // 801B4AD0
  c->f[23]=c->ps1[23]=S(c->f[24]*c->f[29]); // 801B4AD4
  c->r[22]=R32(c->r[3]+0x00000000u); // 801B4AD8
  c->r[23]=c->r[3]|c->r[3]; // 801B4ADC
  if (crb(c,2)) { goto L_801B4B50; } // 801B4AE0
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 801B4AE4
  if (!crb(c,2)) { goto L_801B4BBC; } // 801B4AE8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4AEC
  fcmp(c,0,c->f[1],c->f[30]); // 801B4AF0
  if (!crb(c,1)) { goto L_801B4B00; } // 801B4AF4
  c->lr=0x801B4AFCu; f_801DB3FC(c); // 801B4AF8
  goto L_801B4B04; // 801B4AFC
L_801B4B00:;
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4B00
L_801B4B04:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 801B4B04
  {uint32_t ea=c->r[23]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4B08
  fcmp(c,0,c->f[1],c->f[30]); // 801B4B0C
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 801B4B10
  if (!crb(c,1)) { goto L_801B4B20; } // 801B4B14
  c->lr=0x801B4B1Cu; f_801DB3FC(c); // 801B4B18
  goto L_801B4B24; // 801B4B1C
L_801B4B20:;
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4B20
L_801B4B24:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 801B4B24
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4B28
  fcmp(c,0,c->f[1],c->f[30]); // 801B4B2C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801B4B30
  if (!crb(c,1)) { goto L_801B4B40; } // 801B4B34
  c->lr=0x801B4B3Cu; f_801DB3FC(c); // 801B4B38
  goto L_801B4B44; // 801B4B3C
L_801B4B40:;
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4B40
L_801B4B44:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 801B4B44
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 801B4B48
  goto L_801B4BBC; // 801B4B4C
L_801B4B50:;
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 801B4B50
  if (!crb(c,2)) { goto L_801B4B98; } // 801B4B54
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4B58
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4B5C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 801B4B60
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4B64
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4B68
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 801B4B6C
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 801B4B70
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4B74
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 801B4B78
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801B4B7C
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 801B4B80
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4B84
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 801B4B88
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801B4B8C
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 801B4B90
  goto L_801B4BBC; // 801B4B94
L_801B4B98:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4B98
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4B9C
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4BA0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[23]); // 801B4BA4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 801B4BA8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 801B4BAC
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 801B4BB0
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 801B4BB4
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 801B4BB8
L_801B4BBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B4BBC
  if (crb(c,2)) { goto L_801B4C18; } // 801B4BC0
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 801B4BC4
  if (!crb(c,2)) { goto L_801B4BDC; } // 801B4BC8
  c->r[3]=c->r[1]+0x00000018u; // 801B4BCC
  c->r[4]=c->r[23]+0x0000001Cu; // 801B4BD0
  c->lr=0x801B4BD8u; f_800ED1B4(c); // 801B4BD4
  goto L_801B4BEC; // 801B4BD8
L_801B4BDC:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[30]);} // 801B4BDC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[30]);} // 801B4BE0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[30]);} // 801B4BE4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 801B4BE8
L_801B4BEC:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[24]); // 801B4BEC
  c->r[3]=c->r[1]+0x00000028u; // 801B4BF0
  c->r[5]=c->r[3]|c->r[3]; // 801B4BF4
  c->r[4]=c->r[1]+0x00000018u; // 801B4BF8
  c->f[0]=c->ps1[0]=fres(c->f[25]); // 801B4BFC
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801B4C00
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801B4C04
  {double t0=S(-std::fma(c->f[25],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[25],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 801B4C08
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 801B4C0C
  c->lr=0x801B4C14u; f_800ED380(c); // 801B4C10
  goto L_801B4D14; // 801B4C14
L_801B4C18:;
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 801B4C18
  if (!crb(c,2)) { goto L_801B4CEC; } // 801B4C1C
  cmps(c,0,(int32_t)c->r[27],0); // 801B4C20
  if (!crb(c,2)) { goto L_801B4C70; } // 801B4C24
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C28
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801B4C2C
  {uint32_t ea=c->r[23]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C30
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801B4C34
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C38
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801B4C3C
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C40
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801B4C44
  {uint32_t ea=c->r[23]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C48
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801B4C4C
  {uint32_t ea=c->r[23]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C50
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801B4C54
  {uint32_t ea=c->r[23]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C58
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 801B4C5C
  {uint32_t ea=c->r[23]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C60
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801B4C64
  {uint32_t ea=c->r[23]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C68
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 801B4C6C
L_801B4C70:;
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4C70
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C74
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 801B4C78
  {uint32_t ea=c->r[25]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B4C7C
  {uint32_t ea=c->r[25]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B4C80
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4C84
  c->f[5]=c->ps1[5]=S(c->f[0]+c->f[1]); // 801B4C88
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4C8C
  {uint32_t ea=c->r[25]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4C90
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[5]);} // 801B4C94
  {uint32_t ea=c->r[23]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B4C98
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[23]); // 801B4C9C
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 801B4CA0
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[4]);} // 801B4CA4
  {uint32_t ea=c->r[23]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B4CA8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[23]); // 801B4CAC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 801B4CB0
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[3]);} // 801B4CB4
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801B4CB8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[23]); // 801B4CBC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 801B4CC0
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[2]);} // 801B4CC4
  {uint32_t ea=c->r[23]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4CC8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 801B4CCC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801B4CD0
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[1]);} // 801B4CD4
  {uint32_t ea=c->r[23]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4CD8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 801B4CDC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801B4CE0
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 801B4CE4
  goto L_801B4D14; // 801B4CE8
L_801B4CEC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B4CEC
  if (!crb(c,2)) { goto L_801B4CFC; } // 801B4CF0
  c->r[3]=c->r[1]+0x00000038u; // 801B4CF4
  c->lr=0x801B4CFCu; f_801DB780(c); // 801B4CF8
L_801B4CFC:;
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4CFC
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4D00
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 801B4D04
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 801B4D08
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B4D0C
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 801B4D10
L_801B4D14:;
  c->r[0]=rotl(c->r[22],0)&0x00000040u; cr0(c,c->r[0]); // 801B4D14
  if (!crb(c,2)) { goto L_801B4D58; } // 801B4D18
  {uint32_t ea=c->r[23]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4D1C
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4D20
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 801B4D24
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4D28
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4D2C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 801B4D30
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 801B4D34
  {uint32_t ea=c->r[23]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4D38
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 801B4D3C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801B4D40
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 801B4D44
  {uint32_t ea=c->r[23]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4D48
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 801B4D4C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801B4D50
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 801B4D54
L_801B4D58:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 801B4D58
  c->r[0]=c->r[0]&c->r[22]; // 801B4D5C
  W32(c->r[25]+0x00000000u,c->r[0]); // 801B4D60
L_801B4D64:;
  c->r[29]=c->r[29]+0x00000004u; // 801B4D64
  c->r[27]=c->r[27]+0x00000001u; // 801B4D68
L_801B4D6C:;
  c->r[0]=R32(c->r[24]+0x00000018u); // 801B4D6C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801B4D70
  if (crb(c,0)) { IRQCHK(c); goto L_801B4A88; } // 801B4D74
  cmps(c,0,(int32_t)c->r[31],0); // 801B4D78
  if (crb(c,2)) { goto L_801B4DA4; } // 801B4D7C
  c->f[1]=c->f[28]; // 801B4D80
  c->lr=0x801B4D88u; f_801DB370(c); // 801B4D84
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 801B4D88
  c->f[1]=c->f[27]; // 801B4D8C
  c->lr=0x801B4D94u; f_801DB370(c); // 801B4D90
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 801B4D94
  c->f[1]=c->f[26]; // 801B4D98
  c->lr=0x801B4DA0u; f_801DB370(c); // 801B4D9C
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B4DA0
L_801B4DA4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B4DA4
  if (crb(c,2)) { goto L_801B4DEC; } // 801B4DA8
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4DAC
  c->r[3]=c->r[25]+0x0000001Cu; // 801B4DB0
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4DB4
  c->r[4]=c->r[1]+0x00000028u; // 801B4DB8
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4DBC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801B4DC0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B4DC4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801B4DC8
  c->lr=0x801B4DD0u; f_800EC870(c); // 801B4DCC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4DD0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4DD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4DD8
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 801B4DDC
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 801B4DE0
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 801B4DE4
  goto L_801B4EB8; // 801B4DE8
L_801B4DEC:;
  c->r[22]=c->r[25]+0x0000001Cu; // 801B4DEC
  c->r[23]=c->r[25]+0x0000002Cu; // 801B4DF0
  c->r[24]=c->r[25]+0x0000003Cu; // 801B4DF4
  c->r[3]=c->r[22]|c->r[22]; // 801B4DF8
  c->r[4]=c->r[23]|c->r[23]; // 801B4DFC
  c->r[5]=c->r[24]|c->r[24]; // 801B4E00
  c->lr=0x801B4E08u; f_800ED078(c); // 801B4E04
  {uint32_t ea=c->r[22]+0x00000000u; psq_load(c,2,ea,0,0);} // 801B4E08
  {uint32_t ea=c->r[22]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4E0C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801B4E10
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E14
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 801B4E18
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 801B4E1C
  fcmp(c,0,c->f[0],c->f[1]); // 801B4E20
  if (crb(c,2)) { goto L_801B4E44; } // 801B4E24
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,2,ea,0,0);} // 801B4E28
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4E2C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801B4E30
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 801B4E34
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 801B4E38
  fcmp(c,0,c->f[0],c->f[1]); // 801B4E3C
  if (!crb(c,2)) { goto L_801B4E90; } // 801B4E40
L_801B4E44:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E44
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B4E48
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E4C
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[0]);} // 801B4E50
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E54
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[0]);} // 801B4E58
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E5C
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[0]);} // 801B4E60
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E64
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 801B4E68
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E6C
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 801B4E70
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E74
  {uint32_t ea=c->r[25]+0x0000003Cu; WF32(ea,c->f[0]);} // 801B4E78
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E7C
  {uint32_t ea=c->r[25]+0x00000040u; WF32(ea,c->f[0]);} // 801B4E80
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E84
  {uint32_t ea=c->r[25]+0x00000044u; WF32(ea,c->f[0]);} // 801B4E88
  goto L_801B4EB8; // 801B4E8C
L_801B4E90:;
  c->r[3]=c->r[22]|c->r[22]; // 801B4E90
  c->r[4]=c->r[22]|c->r[22]; // 801B4E94
  c->lr=0x801B4E9Cu; f_800ECFD0(c); // 801B4E98
  c->r[3]=c->r[24]|c->r[24]; // 801B4E9C
  c->r[4]=c->r[24]|c->r[24]; // 801B4EA0
  c->lr=0x801B4EA8u; f_800ECFD0(c); // 801B4EA4
  c->r[3]=c->r[24]|c->r[24]; // 801B4EA8
  c->r[4]=c->r[22]|c->r[22]; // 801B4EAC
  c->r[5]=c->r[23]|c->r[23]; // 801B4EB0
  c->lr=0x801B4EB8u; f_800ED078(c); // 801B4EB4
L_801B4EB8:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 801B4EB8
  c->r[3]=c->r[25]|c->r[25]; // 801B4EBC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801B4EC0
  W32(c->r[25]+0x00000000u,c->r[0]); // 801B4EC4
L_801B4EC8:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 801B4EC8
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 801B4ECC
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 801B4ED0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 801B4ED4
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 801B4ED8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 801B4EDC
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 801B4EE0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 801B4EE4
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 801B4EE8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 801B4EEC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 801B4EF0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 801B4EF4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 801B4EF8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 801B4EFC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 801B4F00
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 801B4F04
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 801B4F08
  c->r[11]=c->r[1]+0x000000D0u; // 801B4F0C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 801B4F10
  c->lr=0x801B4F18u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4F14
  c->r[0]=R32(c->r[1]+0x00000164u); // 801B4F18
  c->lr=c->r[0]; // 801B4F1C
  c->r[1]=c->r[1]+0x00000160u; // 801B4F20
  return; // 801B4F24
}

// SetWeight__Q34nw4r3g3d14AnmObjChrBlendFif
void f_801B4F28(Ctx* __restrict c) {
  trace_call(0x801B4F28u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 801B4F28
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B4F2C
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 801B4F30
  return; // 801B4F34
}

// GetWeight__Q34nw4r3g3d14AnmObjChrBlendCFi
void f_801B4F38(Ctx* __restrict c) {
  trace_call(0x801B4F38u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 801B4F38
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B4F3C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4F40
  return; // 801B4F44
}

// Construct__Q34nw4r3g3d12AnmObjChrResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmChrQ34nw4r3g3d6ResMdlb
void f_801B4F48(Ctx* __restrict c) {
  trace_call(0x801B4F48u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4F48
  c->r[0]=c->lr; // 801B4F4C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B4F50
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801B4F54
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801B4F58
  c->r[11]=c->r[1]+0x00000030u; // 801B4F5C
  c->lr=0x801B4F64u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4F60
  c->r[8]=R32(c->r[5]+0x00000000u); // 801B4F64
  c->r[29]=c->r[3]|c->r[3]; // 801B4F68
  c->r[25]=c->r[4]|c->r[4]; // 801B4F6C
  c->r[30]=c->r[5]|c->r[5]; // 801B4F70
  cmps(c,0,(int32_t)c->r[8],0); // 801B4F74
  c->r[27]=c->r[7]|c->r[7]; // 801B4F78
  if (crb(c,2)) { goto L_801B4F8C; } // 801B4F7C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B4F80
  cmps(c,0,(int32_t)c->r[0],0); // 801B4F84
  if (!crb(c,2)) { goto L_801B4F94; } // 801B4F88
L_801B4F8C:;
  c->r[3]=0u+0x00000000u; // 801B4F8C
  goto L_801B5118; // 801B4F90
L_801B4F94:;
  c->r[31]=R16(c->r[8]+0x00000022u); // 801B4F94
  c->r[3]=c->r[6]|c->r[6]; // 801B4F98
  c->lr=0x801B4FA0u; f_801A9AF8(c); // 801B4F9C
  c->r[0]=0u-c->r[27]; // 801B4FA0
  c->r[28]=c->r[3]|c->r[3]; // 801B4FA4
  c->r[4]=c->r[0]|c->r[27]; // 801B4FA8
  cmps(c,0,(int32_t)c->r[25],0); // 801B4FAC
  c->r[4]=sraw(c,c->r[4],31); // 801B4FB0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B4FB4
  c->r[3]=c->r[31]&c->r[4]; // 801B4FB8
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 801B4FBC
  c->r[3]=c->r[26]+c->r[0]; // 801B4FC0
  c->r[4]=c->r[3]+0x00000034u; // 801B4FC4
  if (crb(c,2)) { goto L_801B4FD0; } // 801B4FC8
  W32(c->r[25]+0x00000000u,c->r[4]); // 801B4FCC
L_801B4FD0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B4FD0
  if (!crb(c,2)) { goto L_801B4FE0; } // 801B4FD4
  c->r[3]=0u+0x00000000u; // 801B4FD8
  goto L_801B5118; // 801B4FDC
L_801B4FE0:;
  c->r[3]=c->r[29]|c->r[29]; // 801B4FE0
  c->lr=0x801B4FE8u; f_80128068(c); // 801B4FE4
  cmps(c,0,(int32_t)c->r[3],0); // 801B4FE8
  c->r[31]=c->r[3]|c->r[3]; // 801B4FEC
  if (!crb(c,2)) { goto L_801B4FFC; } // 801B4FF0
  c->r[3]=0u+0x00000000u; // 801B4FF4
  goto L_801B5118; // 801B4FF8
L_801B4FFC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B4FFC
  if (crb(c,2)) { goto L_801B500C; } // 801B5000
  c->r[27]=c->r[3]+0x00000034u; // 801B5004
  goto L_801B5010; // 801B5008
L_801B500C:;
  c->r[27]=0u+0x00000000u; // 801B500C
L_801B5010:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B5010
  c->r[4]=c->r[3]+c->r[26]; // 801B5014
  c->r[5]=c->r[4]+0x00000034u; // 801B5018
  if (crb(c,2)) { goto L_801B5114; } // 801B501C
  c->r[0]=0u+0x00000000u; // 801B5020
  c->r[4]=0u+0x802A0000u; // 801B5024
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B5028
  c->r[4]=c->r[4]+0x000011E0u; // 801B502C
  c->r[30]=R32(c->r[30]+0x00000000u); // 801B5030
  W32(c->r[3]+0x00000008u,c->r[29]); // 801B5034
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B5038
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B503C
  W32(c->r[3]+0x00000010u,c->r[28]); // 801B5040
  W32(c->r[3]+0x00000014u,c->r[5]); // 801B5044
  c->r[3]=c->r[31]|c->r[31]; // 801B5048
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B504C
  c->r[12]=R32(c->r[12]+0x00000034u); // 801B5050
  c->ctr=c->r[12]; // 801B5054
  if (true) { c->lr=0x801B505Cu; dispatch(c,c->ctr); } // 801B5058
  c->r[4]=R16(c->r[30]+0x00000020u); // 801B505C
  c->r[0]=0u+0x43300000u; // 801B5060
  c->r[5]=R32(c->r[30]+0x00000024u); // 801B5064
  c->r[3]=0u+0x802A0000u; // 801B5068
  c->r[4]=c->r[4]^0x80000000u; // 801B506C
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5070
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B5074
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801B5078
  {uint32_t ea=c->r[2]+0xFFFF9B64u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B507C
  c->r[4]=c->r[13]+0xFFFF89ACu; // 801B5080
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B5084
  c->r[3]=c->r[3]+0x000010D8u; // 801B5088
  {uint32_t ea=c->r[2]+0xFFFF9B70u; c->f[3]=RF64(ea);} // 801B508C
  cmps(c,0,(int32_t)c->r[27],0); // 801B5090
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 801B5094
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801B5098
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B509C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 801B50A0
  c->r[0]=R32(c->r[4]+c->r[5]); // 801B50A4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 801B50A8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 801B50AC
  W32(c->r[31]+0x00000028u,c->r[0]); // 801B50B0
  W32(c->r[31]+0x00000000u,c->r[3]); // 801B50B4
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 801B50B8
  W32(c->r[31]+0x00000030u,c->r[27]); // 801B50BC
  if (crb(c,2)) { goto L_801B5114; } // 801B50C0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B50C4
  c->r[28]=0u+0x00000000u; // 801B50C8
  c->r[27]=0u+0x00000000u; // 801B50CC
  goto L_801B5108; // 801B50D0
L_801B50D4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801B50D4
  c->r[3]=R16(c->r[3]+c->r[27]); // 801B50D8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801B50DC
  if (!crb(c,2)) { goto L_801B5100; } // 801B50E0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 801B50E4
  c->f[1]=c->f[31]; // 801B50E8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 801B50EC
  c->r[4]=R32(c->r[31]+0x00000030u); // 801B50F0
  c->r[3]=c->r[31]+0x0000002Cu; // 801B50F4
  c->r[4]=c->r[4]+c->r[0]; // 801B50F8
  c->lr=0x801B5100u; f_801AFDA4(c); // 801B50FC
L_801B5100:;
  c->r[27]=c->r[27]+0x00000002u; // 801B5100
  c->r[28]=c->r[28]+0x00000001u; // 801B5104
L_801B5108:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801B5108
  cmpu(c,0,c->r[28],c->r[0]); // 801B510C
  if (crb(c,0)) { IRQCHK(c); goto L_801B50D4; } // 801B5110
L_801B5114:;
  c->r[3]=c->r[31]|c->r[31]; // 801B5114
L_801B5118:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801B5118
  c->r[11]=c->r[1]+0x00000030u; // 801B511C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801B5120
  c->lr=0x801B5128u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5124
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B5128
  c->lr=c->r[0]; // 801B512C
  c->r[1]=c->r[1]+0x00000040u; // 801B5130
  return; // 801B5134
}

// SetFrame__Q34nw4r3g3d12AnmObjChrResFf
void f_801B5138(Ctx* __restrict c) {
  trace_call(0x801B5138u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5138
  c->r[0]=c->lr; // 801B513C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B5140
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B5144
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B5148
  c->f[3]=c->f[1]; // 801B514C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5150
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5154
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5158
  c->r[29]=c->r[3]|c->r[3]; // 801B515C
  c->r[12]=R32(c->r[3]+0x00000028u); // 801B5160
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5164
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5168
  c->ctr=c->r[12]; // 801B516C
  if (true) { c->lr=0x801B5174u; dispatch(c,c->ctr); } // 801B5170
  c->r[0]=R32(c->r[29]+0x00000030u); // 801B5174
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 801B5178
  cmps(c,0,(int32_t)c->r[0],0); // 801B517C
  if (crb(c,2)) { goto L_801B51D4; } // 801B5180
  c->f[31]=c->ps1[31]=S(c->f[1]); // 801B5184
  c->r[31]=0u+0x00000000u; // 801B5188
  c->r[30]=0u+0x00000000u; // 801B518C
  goto L_801B51C8; // 801B5190
L_801B5194:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801B5194
  c->r[3]=R16(c->r[3]+c->r[30]); // 801B5198
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801B519C
  if (!crb(c,2)) { goto L_801B51C0; } // 801B51A0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 801B51A4
  c->f[1]=c->f[31]; // 801B51A8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 801B51AC
  c->r[4]=R32(c->r[29]+0x00000030u); // 801B51B0
  c->r[3]=c->r[29]+0x0000002Cu; // 801B51B4
  c->r[4]=c->r[4]+c->r[0]; // 801B51B8
  c->lr=0x801B51C0u; f_801AFDA4(c); // 801B51BC
L_801B51C0:;
  c->r[30]=c->r[30]+0x00000002u; // 801B51C0
  c->r[31]=c->r[31]+0x00000001u; // 801B51C4
L_801B51C8:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B51C8
  cmpu(c,0,c->r[31],c->r[0]); // 801B51CC
  if (crb(c,0)) { IRQCHK(c); goto L_801B5194; } // 801B51D0
L_801B51D4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B51D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B51D8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B51DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B51E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B51E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B51E8
  c->lr=c->r[0]; // 801B51EC
  c->r[1]=c->r[1]+0x00000030u; // 801B51F0
  return; // 801B51F4
}

// GetFrame__Q34nw4r3g3d12AnmObjChrResCFv
void f_801B51F8(Ctx* __restrict c) {
  trace_call(0x801B51F8u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B51F8
  return; // 801B51FC
}

// SetUpdateRate__Q34nw4r3g3d12AnmObjChrResFf
void f_801B5200(Ctx* __restrict c) {
  trace_call(0x801B5200u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5200
  c->r[0]=c->lr; // 801B5204
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B5208
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B520C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B5210
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5214
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5218
  fcmp(c,0,c->f[0],c->f[1]); // 801B521C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5220
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5224
  c->r[29]=c->r[3]|c->r[3]; // 801B5228
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B522C
  if (!crb(c,2)) { goto L_801B5290; } // 801B5230
  c->r[0]=R32(c->r[3]+0x00000030u); // 801B5234
  cmps(c,0,(int32_t)c->r[0],0); // 801B5238
  if (crb(c,2)) { goto L_801B5290; } // 801B523C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B5240
  c->r[31]=0u+0x00000000u; // 801B5244
  c->r[30]=0u+0x00000000u; // 801B5248
  goto L_801B5284; // 801B524C
L_801B5250:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801B5250
  c->r[3]=R16(c->r[3]+c->r[30]); // 801B5254
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801B5258
  if (!crb(c,2)) { goto L_801B527C; } // 801B525C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 801B5260
  c->f[1]=c->f[31]; // 801B5264
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 801B5268
  c->r[4]=R32(c->r[29]+0x00000030u); // 801B526C
  c->r[3]=c->r[29]+0x0000002Cu; // 801B5270
  c->r[4]=c->r[4]+c->r[0]; // 801B5274
  c->lr=0x801B527Cu; f_801AFDA4(c); // 801B5278
L_801B527C:;
  c->r[30]=c->r[30]+0x00000002u; // 801B527C
  c->r[31]=c->r[31]+0x00000001u; // 801B5280
L_801B5284:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B5284
  cmpu(c,0,c->r[31],c->r[0]); // 801B5288
  if (crb(c,0)) { IRQCHK(c); goto L_801B5250; } // 801B528C
L_801B5290:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B5290
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B5294
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B5298
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B529C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B52A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B52A4
  c->lr=c->r[0]; // 801B52A8
  c->r[1]=c->r[1]+0x00000030u; // 801B52AC
  return; // 801B52B0
}

// GetUpdateRate__Q34nw4r3g3d12AnmObjChrResCFv
void f_801B52B4(Ctx* __restrict c) {
  trace_call(0x801B52B4u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B52B4
  return; // 801B52B8
}

// UpdateFrame__Q34nw4r3g3d12AnmObjChrResFv
void f_801B52BC(Ctx* __restrict c) {
  trace_call(0x801B52BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B52BC
  c->r[0]=c->lr; // 801B52C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B52C4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B52C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B52CC
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B52D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B52D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B52D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B52DC
  c->r[29]=c->r[3]|c->r[3]; // 801B52E0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B52E4
  fcmp(c,0,c->f[0],c->f[1]); // 801B52E8
  if (crb(c,2)) { goto L_801B5378; } // 801B52EC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B52F0
  {uint32_t ea=c->r[13]+0xFFFF9078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B52F4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B52F8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 801B52FC
  c->r[12]=R32(c->r[3]+0x00000028u); // 801B5300
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5304
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5308
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 801B530C
  c->ctr=c->r[12]; // 801B5310
  if (true) { c->lr=0x801B5318u; dispatch(c,c->ctr); } // 801B5314
  c->r[0]=R32(c->r[29]+0x00000030u); // 801B5318
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 801B531C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5320
  if (crb(c,2)) { goto L_801B5378; } // 801B5324
  c->f[31]=c->ps1[31]=S(c->f[1]); // 801B5328
  c->r[31]=0u+0x00000000u; // 801B532C
  c->r[30]=0u+0x00000000u; // 801B5330
  goto L_801B536C; // 801B5334
L_801B5338:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801B5338
  c->r[3]=R16(c->r[3]+c->r[30]); // 801B533C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801B5340
  if (!crb(c,2)) { goto L_801B5364; } // 801B5344
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 801B5348
  c->f[1]=c->f[31]; // 801B534C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 801B5350
  c->r[4]=R32(c->r[29]+0x00000030u); // 801B5354
  c->r[3]=c->r[29]+0x0000002Cu; // 801B5358
  c->r[4]=c->r[4]+c->r[0]; // 801B535C
  c->lr=0x801B5364u; f_801AFDA4(c); // 801B5360
L_801B5364:;
  c->r[30]=c->r[30]+0x00000002u; // 801B5364
  c->r[31]=c->r[31]+0x00000001u; // 801B5368
L_801B536C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B536C
  cmpu(c,0,c->r[31],c->r[0]); // 801B5370
  if (crb(c,0)) { IRQCHK(c); goto L_801B5338; } // 801B5374
L_801B5378:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B5378
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B537C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B5380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B5384
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B5388
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B538C
  c->lr=c->r[0]; // 801B5390
  c->r[1]=c->r[1]+0x00000030u; // 801B5394
  return; // 801B5398
}

// Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdl
void f_801B539C(Ctx* __restrict c) {
  trace_call(0x801B539Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B539C
  c->r[0]=c->lr; // 801B53A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B53A4
  c->r[11]=c->r[1]+0x00000030u; // 801B53A8
  c->lr=0x801B53B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B53AC
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 801B53B0
  c->r[27]=c->r[3]|c->r[3]; // 801B53B4
  c->r[28]=c->r[4]|c->r[4]; // 801B53B8
  c->r[30]=0u+0x00000000u; // 801B53BC
  c->r[31]=R16(c->r[5]+0x00000022u); // 801B53C0
  c->r[29]=0u+0x00000000u; // 801B53C4
  cmps(c,0,(int32_t)c->r[31],0); // 801B53C8
  if (!crb(c,1)) { goto L_801B5474; } // 801B53CC
  goto L_801B5468; // 801B53D0
L_801B53D4:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 801B53D4
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B53D8
  cmps(c,0,(int32_t)c->r[0],0); // 801B53DC
  if (crb(c,2)) { goto L_801B53EC; } // 801B53E0
  c->r[0]=c->r[3]+c->r[0]; // 801B53E4
  goto L_801B53F0; // 801B53E8
L_801B53EC:;
  c->r[0]=0u+0x00000000u; // 801B53EC
L_801B53F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B53F0
  if (crb(c,2)) { goto L_801B541C; } // 801B53F4
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 801B53F8
  c->r[3]=c->r[0]+c->r[3]; // 801B53FC
  c->r[3]=R32(c->r[3]+0x00000024u); // 801B5400
  cmps(c,0,(int32_t)c->r[3],0); // 801B5404
  if (crb(c,2)) { goto L_801B5414; } // 801B5408
  c->r[5]=c->r[0]+c->r[3]; // 801B540C
  goto L_801B5420; // 801B5410
L_801B5414:;
  c->r[5]=0u+0x00000000u; // 801B5414
  goto L_801B5420; // 801B5418
L_801B541C:;
  c->r[5]=0u+0x00000000u; // 801B541C
L_801B5420:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B5420
  c->r[3]=c->r[28]|c->r[28]; // 801B5424
  c->r[4]=c->r[1]+0x00000008u; // 801B5428
  c->r[5]=c->r[0]+c->r[5]; // 801B542C
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 801B5430
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B5434
  c->lr=0x801B543Cu; f_801A9A00(c); // 801B5438
  cmps(c,0,(int32_t)c->r[3],0); // 801B543C
  if (crb(c,2)) { goto L_801B5464; } // 801B5440
  c->r[4]=R32(c->r[27]+0x00000014u); // 801B5444
  if (crb(c,2)) { goto L_801B5454; } // 801B5448
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B544C
  goto L_801B5458; // 801B5450
L_801B5454:;
  c->r[0]=0u+0x00000000u; // 801B5454
L_801B5458:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801B5458
  c->r[30]=0u+0x00000001u; // 801B545C
  W16(c->r[4]+c->r[0],c->r[29]); // 801B5460
L_801B5464:;
  c->r[29]=c->r[29]+0x00000001u; // 801B5464
L_801B5468:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 801B5468
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801B546C
  if (crb(c,0)) { IRQCHK(c); goto L_801B53D4; } // 801B5470
L_801B5474:;
  c->r[3]=c->r[27]|c->r[27]; // 801B5474
  c->r[4]=0u+0x00000004u; // 801B5478
  c->r[5]=0u+0x00000001u; // 801B547C
  c->lr=0x801B5484u; f_801B7C80(c); // 801B5480
  c->r[11]=c->r[1]+0x00000030u; // 801B5484
  c->r[3]=c->r[30]|c->r[30]; // 801B5488
  c->lr=0x801B5490u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B548C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B5490
  c->lr=c->r[0]; // 801B5494
  c->r[1]=c->r[1]+0x00000030u; // 801B5498
  return; // 801B549C
}

// Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_801B54A0(Ctx* __restrict c) {
  trace_call(0x801B54A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B54A0
  c->r[0]=c->lr; // 801B54A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B54A8
  c->r[11]=c->r[1]+0x00000040u; // 801B54AC
  c->lr=0x801B54B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B54B0
  cmps(c,0,(int32_t)c->r[6],1); // 801B54B4
  c->r[28]=c->r[3]|c->r[3]; // 801B54B8
  c->r[29]=c->r[4]|c->r[4]; // 801B54BC
  c->r[30]=c->r[5]|c->r[5]; // 801B54C0
  c->r[31]=0u+0x00000000u; // 801B54C4
  if (crb(c,2)) { goto L_801B54DC; } // 801B54C8
  if (!crb(c,0)) { goto L_801B566C; } // 801B54CC
  cmps(c,0,(int32_t)c->r[6],0); // 801B54D0
  if (!crb(c,0)) { goto L_801B55FC; } // 801B54D4
  goto L_801B566C; // 801B54D8
L_801B54DC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B54DC
  c->r[4]=c->r[30]|c->r[30]; // 801B54E0
  c->r[3]=c->r[1]+0x00000018u; // 801B54E4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B54E8
  c->lr=0x801B54F0u; f_801A9AA4(c); // 801B54EC
  c->r[0]=R32(c->r[3]+0x00000064u); // 801B54F0
  cmps(c,0,(int32_t)c->r[0],0); // 801B54F4
  if (crb(c,2)) { goto L_801B5504; } // 801B54F8
  c->r[4]=c->r[3]+c->r[0]; // 801B54FC
  goto L_801B5544; // 801B5500
L_801B5504:;
  c->r[4]=0u+0x00000000u; // 801B5504
  goto L_801B5544; // 801B5508
L_801B550C:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801B550C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5510
  if (crb(c,2)) { goto L_801B5520; } // 801B5514
  c->r[3]=c->r[3]+c->r[0]; // 801B5518
  goto L_801B5524; // 801B551C
L_801B5520:;
  c->r[3]=0u+0x00000000u; // 801B5520
L_801B5524:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B5524
  if (crb(c,2)) { goto L_801B554C; } // 801B5528
  c->r[0]=R32(c->r[3]+0x00000064u); // 801B552C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5530
  if (crb(c,2)) { goto L_801B5540; } // 801B5534
  c->r[4]=c->r[3]+c->r[0]; // 801B5538
  goto L_801B5544; // 801B553C
L_801B5540:;
  c->r[4]=0u+0x00000000u; // 801B5540
L_801B5544:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B5544
  if (crb(c,2)) { IRQCHK(c); goto L_801B550C; } // 801B5548
L_801B554C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B554C
  if (crb(c,2)) { goto L_801B5568; } // 801B5550
  if (crb(c,2)) { goto L_801B5560; } // 801B5554
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 801B5558
  goto L_801B5574; // 801B555C
L_801B5560:;
  c->r[27]=0u+0x00000000u; // 801B5560
  goto L_801B5574; // 801B5564
L_801B5568:;
  c->r[3]=c->r[1]+0x00000018u; // 801B5568
  c->lr=0x801B5570u; f_801A9AF8(c); // 801B556C
  c->r[27]=c->r[3]|c->r[3]; // 801B5570
L_801B5574:;
  c->r[26]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801B5574
  goto L_801B55F0; // 801B5578
L_801B557C:;
  c->r[3]=c->r[29]|c->r[29]; // 801B557C
  c->r[4]=c->r[30]|c->r[30]; // 801B5580
  c->lr=0x801B5588u; f_801A9AA4(c); // 801B5584
  c->r[0]=R32(c->r[3]+0x00000008u); // 801B5588
  cmps(c,0,(int32_t)c->r[0],0); // 801B558C
  if (crb(c,2)) { goto L_801B55A0; } // 801B5590
  c->r[3]=c->r[3]+c->r[0]; // 801B5594
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801B5598
  goto L_801B55A4; // 801B559C
L_801B55A0:;
  c->r[0]=0u+0x00000000u; // 801B55A0
L_801B55A4:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 801B55A4
  c->r[3]=R32(c->r[4]+0x00000010u); // 801B55A8
  cmps(c,0,(int32_t)c->r[3],0); // 801B55AC
  if (crb(c,2)) { goto L_801B55BC; } // 801B55B0
  c->r[5]=c->r[4]+c->r[3]; // 801B55B4
  goto L_801B55C0; // 801B55B8
L_801B55BC:;
  c->r[5]=0u+0x00000000u; // 801B55BC
L_801B55C0:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B55C0
  c->r[3]=c->r[1]+0x00000010u; // 801B55C4
  c->r[4]=c->r[1]+0x00000014u; // 801B55C8
  W32(c->r[1]+0x00000010u,c->r[5]); // 801B55CC
  c->lr=0x801B55D4u; f_801A8C38(c); // 801B55D0
  cmps(c,0,(int32_t)c->r[3],-1); // 801B55D4
  if (crb(c,2)) { goto L_801B55E8; } // 801B55D8
  c->r[4]=R32(c->r[28]+0x00000014u); // 801B55DC
  c->r[31]=0u+0x00000001u; // 801B55E0
  W16(c->r[4]+c->r[26],c->r[3]); // 801B55E4
L_801B55E8:;
  c->r[26]=c->r[26]+0x00000002u; // 801B55E8
  c->r[30]=c->r[30]+0x00000001u; // 801B55EC
L_801B55F0:;
  cmpu(c,0,c->r[30],c->r[27]); // 801B55F0
  if (crb(c,0)) { IRQCHK(c); goto L_801B557C; } // 801B55F4
  goto L_801B566C; // 801B55F8
L_801B55FC:;
  c->r[3]=c->r[29]|c->r[29]; // 801B55FC
  c->r[4]=c->r[30]|c->r[30]; // 801B5600
  c->lr=0x801B5608u; f_801A9AA4(c); // 801B5604
  c->r[0]=R32(c->r[3]+0x00000008u); // 801B5608
  cmps(c,0,(int32_t)c->r[0],0); // 801B560C
  if (crb(c,2)) { goto L_801B5620; } // 801B5610
  c->r[3]=c->r[3]+c->r[0]; // 801B5614
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801B5618
  goto L_801B5624; // 801B561C
L_801B5620:;
  c->r[0]=0u+0x00000000u; // 801B5620
L_801B5624:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 801B5624
  c->r[3]=R32(c->r[4]+0x00000010u); // 801B5628
  cmps(c,0,(int32_t)c->r[3],0); // 801B562C
  if (crb(c,2)) { goto L_801B563C; } // 801B5630
  c->r[5]=c->r[4]+c->r[3]; // 801B5634
  goto L_801B5640; // 801B5638
L_801B563C:;
  c->r[5]=0u+0x00000000u; // 801B563C
L_801B5640:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B5640
  c->r[3]=c->r[1]+0x00000008u; // 801B5644
  c->r[4]=c->r[1]+0x0000000Cu; // 801B5648
  W32(c->r[1]+0x00000008u,c->r[5]); // 801B564C
  c->lr=0x801B5654u; f_801A8C38(c); // 801B5650
  cmps(c,0,(int32_t)c->r[3],-1); // 801B5654
  if (crb(c,2)) { goto L_801B566C; } // 801B5658
  c->r[4]=R32(c->r[28]+0x00000014u); // 801B565C
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801B5660
  c->r[31]=0u+0x00000001u; // 801B5664
  W16(c->r[4]+c->r[0],c->r[3]); // 801B5668
L_801B566C:;
  c->r[3]=c->r[28]|c->r[28]; // 801B566C
  c->r[4]=0u+0x00000004u; // 801B5670
  c->r[5]=0u+0x00000001u; // 801B5674
  c->lr=0x801B567Cu; f_801B7C80(c); // 801B5678
  c->r[11]=c->r[1]+0x00000040u; // 801B567C
  c->r[3]=c->r[31]|c->r[31]; // 801B5680
  c->lr=0x801B5688u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5684
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B5688
  c->lr=c->r[0]; // 801B568C
  c->r[1]=c->r[1]+0x00000040u; // 801B5690
  return; // 801B5694
}

// Release__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_801B5698(Ctx* __restrict c) {
  trace_call(0x801B5698u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5698
  c->r[0]=c->lr; // 801B569C
  cmps(c,0,(int32_t)c->r[6],1); // 801B56A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B56A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B56A8
  c->r[31]=c->r[5]|c->r[5]; // 801B56AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B56B0
  c->r[30]=c->r[3]|c->r[3]; // 801B56B4
  if (crb(c,2)) { goto L_801B56CC; } // 801B56B8
  if (!crb(c,0)) { goto L_801B584C; } // 801B56BC
  cmps(c,0,(int32_t)c->r[6],0); // 801B56C0
  if (!crb(c,0)) { goto L_801B5838; } // 801B56C4
  goto L_801B584C; // 801B56C8
L_801B56CC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B56CC
  c->r[4]=c->r[31]|c->r[31]; // 801B56D0
  c->r[3]=c->r[1]+0x00000008u; // 801B56D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B56D8
  c->lr=0x801B56E0u; f_801A9AA4(c); // 801B56DC
  c->r[0]=R32(c->r[3]+0x00000064u); // 801B56E0
  cmps(c,0,(int32_t)c->r[0],0); // 801B56E4
  if (crb(c,2)) { goto L_801B56F4; } // 801B56E8
  c->r[4]=c->r[3]+c->r[0]; // 801B56EC
  goto L_801B5734; // 801B56F0
L_801B56F4:;
  c->r[4]=0u+0x00000000u; // 801B56F4
  goto L_801B5734; // 801B56F8
L_801B56FC:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801B56FC
  cmps(c,0,(int32_t)c->r[0],0); // 801B5700
  if (crb(c,2)) { goto L_801B5710; } // 801B5704
  c->r[3]=c->r[3]+c->r[0]; // 801B5708
  goto L_801B5714; // 801B570C
L_801B5710:;
  c->r[3]=0u+0x00000000u; // 801B5710
L_801B5714:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B5714
  if (crb(c,2)) { goto L_801B573C; } // 801B5718
  c->r[0]=R32(c->r[3]+0x00000064u); // 801B571C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5720
  if (crb(c,2)) { goto L_801B5730; } // 801B5724
  c->r[4]=c->r[3]+c->r[0]; // 801B5728
  goto L_801B5734; // 801B572C
L_801B5730:;
  c->r[4]=0u+0x00000000u; // 801B5730
L_801B5734:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B5734
  if (crb(c,2)) { IRQCHK(c); goto L_801B56FC; } // 801B5738
L_801B573C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B573C
  if (crb(c,2)) { goto L_801B5758; } // 801B5740
  if (crb(c,2)) { goto L_801B5750; } // 801B5744
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801B5748
  goto L_801B5760; // 801B574C
L_801B5750:;
  c->r[3]=0u+0x00000000u; // 801B5750
  goto L_801B5760; // 801B5754
L_801B5758:;
  c->r[3]=c->r[1]+0x00000008u; // 801B5758
  c->lr=0x801B5760u; f_801A9AF8(c); // 801B575C
L_801B5760:;
  cmpu(c,1,c->r[31],c->r[3]); // 801B5760
  if (!crb(c,4)) { goto L_801B584C; } // 801B5764
  c->r[0]=c->r[3]-c->r[31]; // 801B5768
  c->r[6]=c->r[3]+0xFFFFFFF8u; // 801B576C
  cmpu(c,0,c->r[0],0x00000008u); // 801B5770
  if (!crb(c,1)) { goto L_801B5808; } // 801B5774
  if (crb(c,5)) { goto L_801B5808; } // 801B5778
  c->r[0]=c->r[6]+0x00000007u; // 801B577C
  c->r[4]=0u+0x00010000u; // 801B5780
  c->r[0]=c->r[0]-c->r[31]; // 801B5784
  c->r[7]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801B5788
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801B578C
  c->r[5]=c->r[4]+0xFFFF8000u; // 801B5790
  c->ctr=c->r[0]; // 801B5794
  cmpu(c,0,c->r[31],c->r[6]); // 801B5798
  if (!crb(c,0)) { goto L_801B5808; } // 801B579C
L_801B57A0:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 801B57A0
  c->r[31]=c->r[31]+0x00000008u; // 801B57A4
  W16(c->r[4]+c->r[7],c->r[5]); // 801B57A8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B57AC
  c->r[4]=c->r[0]+c->r[7]; // 801B57B0
  W16(c->r[4]+0x00000002u,c->r[5]); // 801B57B4
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B57B8
  c->r[4]=c->r[0]+c->r[7]; // 801B57BC
  W16(c->r[4]+0x00000004u,c->r[5]); // 801B57C0
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B57C4
  c->r[4]=c->r[0]+c->r[7]; // 801B57C8
  W16(c->r[4]+0x00000006u,c->r[5]); // 801B57CC
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B57D0
  c->r[4]=c->r[0]+c->r[7]; // 801B57D4
  W16(c->r[4]+0x00000008u,c->r[5]); // 801B57D8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B57DC
  c->r[4]=c->r[0]+c->r[7]; // 801B57E0
  W16(c->r[4]+0x0000000Au,c->r[5]); // 801B57E4
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B57E8
  c->r[4]=c->r[0]+c->r[7]; // 801B57EC
  W16(c->r[4]+0x0000000Cu,c->r[5]); // 801B57F0
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B57F4
  c->r[4]=c->r[0]+c->r[7]; // 801B57F8
  c->r[7]=c->r[7]+0x00000010u; // 801B57FC
  W16(c->r[4]+0x0000000Eu,c->r[5]); // 801B5800
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B57A0; } // 801B5804
L_801B5808:;
  c->r[4]=0u+0x00010000u; // 801B5808
  c->r[0]=c->r[3]-c->r[31]; // 801B580C
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801B5810
  c->r[4]=c->r[4]+0xFFFF8000u; // 801B5814
  c->ctr=c->r[0]; // 801B5818
  cmpu(c,0,c->r[31],c->r[3]); // 801B581C
  if (!crb(c,0)) { goto L_801B584C; } // 801B5820
L_801B5824:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801B5824
  W16(c->r[3]+c->r[5],c->r[4]); // 801B5828
  c->r[5]=c->r[5]+0x00000002u; // 801B582C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B5824; } // 801B5830
  goto L_801B584C; // 801B5834
L_801B5838:;
  c->r[4]=0u+0x00010000u; // 801B5838
  c->r[3]=R32(c->r[3]+0x00000014u); // 801B583C
  c->r[4]=c->r[4]+0xFFFF8000u; // 801B5840
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801B5844
  W16(c->r[3]+c->r[0],c->r[4]); // 801B5848
L_801B584C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B584C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B5850
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B5854
  c->lr=c->r[0]; // 801B5858
  c->r[1]=c->r[1]+0x00000020u; // 801B585C
  return; // 801B5860
}

// GetResult__Q34nw4r3g3d12AnmObjChrResFPQ34nw4r3g3d12ChrAnmResultUl
void f_801B5864(Ctx* __restrict c) {
  trace_call(0x801B5864u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5864
  c->r[0]=c->lr; // 801B5868
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B586C
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801B5870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5874
  c->r[31]=c->r[4]|c->r[4]; // 801B5878
  c->r[6]=R32(c->r[3]+0x00000014u); // 801B587C
  c->r[5]=R16(c->r[6]+c->r[0]); // 801B5880
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 801B5884
  if (crb(c,2)) { goto L_801B589C; } // 801B5888
  c->r[0]=0u+0x00000000u; // 801B588C
  c->r[3]=c->r[31]|c->r[31]; // 801B5890
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B5894
  goto L_801B58C4; // 801B5898
L_801B589C:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 801B589C
  cmps(c,0,(int32_t)c->r[6],0); // 801B58A0
  if (crb(c,2)) { goto L_801B58B4; } // 801B58A4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 801B58A8
  c->r[3]=c->r[6]+c->r[0]; // 801B58AC
  goto L_801B58C4; // 801B58B0
L_801B58B4:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B58B4
  c->r[3]=c->r[3]+0x0000002Cu; // 801B58B8
  c->lr=0x801B58C0u; f_801AFDA4(c); // 801B58BC
  c->r[3]=c->r[31]|c->r[31]; // 801B58C0
L_801B58C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B58C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B58C8
  c->lr=c->r[0]; // 801B58CC
  c->r[1]=c->r[1]+0x00000010u; // 801B58D0
  return; // 801B58D4
}

// G3dProc__Q34nw4r3g3d12AnmObjChrResFUlUlPv
void f_801B58D8(Ctx* __restrict c) {
  trace_call(0x801B58D8u);
  c->r[5]=0u+0x00010000u; // 801B58D8
  c->r[0]=c->r[5]+0x00000002u; // 801B58DC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B58E0
  if (crb(c,2)) { goto L_801B5924; } // 801B58E4
  if (!crb(c,0)) { goto L_801B58F8; } // 801B58E8
  cmps(c,0,(int32_t)c->r[4],8); // 801B58EC
  if (crb(c,2)) { goto L_801B5908; } // 801B58F0
  return; // 801B58F4
L_801B58F8:;
  c->r[0]=c->r[5]+0x00000004u; // 801B58F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B58FC
  if (!crb(c,0)) return; // 801B5900
  goto L_801B5918; // 801B5904
L_801B5908:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B5908
  c->r[12]=R32(c->r[12]+0x00000024u); // 801B590C
  c->ctr=c->r[12]; // 801B5910
  if (true) { dispatch(c,c->ctr); return; } // 801B5914
L_801B5918:;
  c->r[0]=0u+0x00000000u; // 801B5918
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B591C
  return; // 801B5920
L_801B5924:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 801B5924
  return; // 801B5928
}

// IsDerivedFrom__Q34nw4r3g3d12AnmObjChrResCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801B592C(Ctx* __restrict c) {
  trace_call(0x801B592Cu);
  c->r[3]=0u+0x80270000u; // 801B592C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B5930
  c->r[3]=c->r[3]+0x00000C70u; // 801B5934
  cmpu(c,0,c->r[0],c->r[3]); // 801B5938
  if (!crb(c,2)) { goto L_801B5948; } // 801B593C
  c->r[3]=0u+0x00000001u; // 801B5940
  return; // 801B5944
L_801B5948:;
  c->r[3]=0u+0x80270000u; // 801B5948
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B594C
  c->r[3]=c->r[3]+0x00000C38u; // 801B5950
  cmpu(c,0,c->r[0],c->r[3]); // 801B5954
  if (!crb(c,2)) { goto L_801B5964; } // 801B5958
  c->r[3]=0u+0x00000001u; // 801B595C
  return; // 801B5960
L_801B5964:;
  c->r[3]=0u+0x80270000u; // 801B5964
  c->r[3]=c->r[3]+0x00000CE0u; // 801B5968
  cmpu(c,0,c->r[0],c->r[3]); // 801B596C
  if (!crb(c,2)) { goto L_801B597C; } // 801B5970
  c->r[3]=0u+0x00000001u; // 801B5974
  return; // 801B5978
L_801B597C:;
  c->r[3]=0u+0x80270000u; // 801B597C
  c->r[3]=c->r[3]+0x00000CD0u; // 801B5980
  c->r[0]=c->r[3]-c->r[0]; // 801B5984
  c->r[0]=cntlz(c->r[0]); // 801B5988
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B598C
  return; // 801B5990
}

// IsDerivedFrom__Q34nw4r3g3d9AnmObjChrCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801B5994(Ctx* __restrict c) {
  trace_call(0x801B5994u);
  c->r[3]=0u+0x80270000u; // 801B5994
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B5998
  c->r[3]=c->r[3]+0x00000C38u; // 801B599C
  cmpu(c,0,c->r[0],c->r[3]); // 801B59A0
  if (!crb(c,2)) { goto L_801B59B0; } // 801B59A4
  c->r[3]=0u+0x00000001u; // 801B59A8
  return; // 801B59AC
L_801B59B0:;
  c->r[3]=0u+0x80270000u; // 801B59B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B59B4
  c->r[3]=c->r[3]+0x00000CE0u; // 801B59B8
  cmpu(c,0,c->r[0],c->r[3]); // 801B59BC
  if (!crb(c,2)) { goto L_801B59CC; } // 801B59C0
  c->r[3]=0u+0x00000001u; // 801B59C4
  return; // 801B59C8
L_801B59CC:;
  c->r[3]=0u+0x80270000u; // 801B59CC
  c->r[3]=c->r[3]+0x00000CD0u; // 801B59D0
  c->r[0]=c->r[3]-c->r[0]; // 801B59D4
  c->r[0]=cntlz(c->r[0]); // 801B59D8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B59DC
  return; // 801B59E0
}

// GetTypeName__Q34nw4r3g3d12AnmObjChrResCFv
void f_801B59E4(Ctx* __restrict c) {
  trace_call(0x801B59E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B59E4
  c->r[0]=c->lr; // 801B59E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B59EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B59F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B59F4
  c->ctr=c->r[12]; // 801B59F8
  if (true) { c->lr=0x801B5A00u; dispatch(c,c->ctr); } // 801B59FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5A00
  c->r[3]=c->r[3]+0x00000004u; // 801B5A04
  c->lr=c->r[0]; // 801B5A08
  c->r[1]=c->r[1]+0x00000010u; // 801B5A0C
  return; // 801B5A10
}

// GetTypeObj__Q34nw4r3g3d12AnmObjChrResCFv
void f_801B5A14(Ctx* __restrict c) {
  trace_call(0x801B5A14u);
  c->r[3]=0u+0x80270000u; // 801B5A14
  c->r[3]=c->r[3]+0x00000C70u; // 801B5A18
  return; // 801B5A1C
}

// __dt__Q34nw4r3g3d12AnmObjChrResFv
void f_801B5A20(Ctx* __restrict c) {
  trace_call(0x801B5A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5A20
  c->r[0]=c->lr; // 801B5A24
  cmps(c,0,(int32_t)c->r[3],0); // 801B5A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5A2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5A30
  c->r[31]=c->r[3]|c->r[3]; // 801B5A34
  if (crb(c,2)) { goto L_801B5A4C; } // 801B5A38
  if (crb(c,2)) { goto L_801B5A4C; } // 801B5A3C
  if (crb(c,2)) { goto L_801B5A4C; } // 801B5A40
  c->r[4]=0u+0x00000000u; // 801B5A44
  c->lr=0x801B5A4Cu; f_801B7AB0(c); // 801B5A48
L_801B5A4C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B5A4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5A54
  c->lr=c->r[0]; // 801B5A58
  c->r[1]=c->r[1]+0x00000010u; // 801B5A5C
  return; // 801B5A60
}

// IsDerivedFrom__Q34nw4r3g3d14AnmObjChrBlendCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801B5A64(Ctx* __restrict c) {
  trace_call(0x801B5A64u);
  c->r[5]=0u+0x80270000u; // 801B5A64
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B5A68
  c->r[5]=c->r[5]+0x00000C38u; // 801B5A6C
  c->r[3]=c->r[5]+0x00000024u; // 801B5A70
  cmpu(c,0,c->r[0],c->r[3]); // 801B5A74
  if (!crb(c,2)) { goto L_801B5A84; } // 801B5A78
  c->r[3]=0u+0x00000001u; // 801B5A7C
  return; // 801B5A80
L_801B5A84:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801B5A84
  c->r[0]=c->r[5]+0x00000010u; // 801B5A88
  cmpu(c,0,c->r[4],c->r[0]); // 801B5A8C
  if (!crb(c,2)) { goto L_801B5A9C; } // 801B5A90
  c->r[3]=0u+0x00000001u; // 801B5A94
  return; // 801B5A98
L_801B5A9C:;
  c->r[0]=c->r[5]+0x00000000u; // 801B5A9C
  cmpu(c,0,c->r[4],c->r[0]); // 801B5AA0
  if (!crb(c,2)) { goto L_801B5AB0; } // 801B5AA4
  c->r[3]=0u+0x00000001u; // 801B5AA8
  return; // 801B5AAC
L_801B5AB0:;
  c->r[3]=0u+0x80270000u; // 801B5AB0
  c->r[3]=c->r[3]+0x00000CE0u; // 801B5AB4
  cmpu(c,0,c->r[4],c->r[3]); // 801B5AB8
  if (!crb(c,2)) { goto L_801B5AC8; } // 801B5ABC
  c->r[3]=0u+0x00000001u; // 801B5AC0
  return; // 801B5AC4
L_801B5AC8:;
  c->r[3]=0u+0x80270000u; // 801B5AC8
  c->r[3]=c->r[3]+0x00000CD0u; // 801B5ACC
  c->r[0]=c->r[3]-c->r[4]; // 801B5AD0
  c->r[0]=cntlz(c->r[0]); // 801B5AD4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B5AD8
  return; // 801B5ADC
}

// IsDerivedFrom__Q34nw4r3g3d13AnmObjChrNodeCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801B5AE0(Ctx* __restrict c) {
  trace_call(0x801B5AE0u);
  c->r[3]=0u+0x80270000u; // 801B5AE0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B5AE4
  c->r[3]=c->r[3]+0x00000C48u; // 801B5AE8
  cmpu(c,0,c->r[0],c->r[3]); // 801B5AEC
  if (!crb(c,2)) { goto L_801B5AFC; } // 801B5AF0
  c->r[3]=0u+0x00000001u; // 801B5AF4
  return; // 801B5AF8
L_801B5AFC:;
  c->r[3]=0u+0x80270000u; // 801B5AFC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B5B00
  c->r[3]=c->r[3]+0x00000C38u; // 801B5B04
  cmpu(c,0,c->r[0],c->r[3]); // 801B5B08
  if (!crb(c,2)) { goto L_801B5B18; } // 801B5B0C
  c->r[3]=0u+0x00000001u; // 801B5B10
  return; // 801B5B14
L_801B5B18:;
  c->r[3]=0u+0x80270000u; // 801B5B18
  c->r[3]=c->r[3]+0x00000CE0u; // 801B5B1C
  cmpu(c,0,c->r[0],c->r[3]); // 801B5B20
  if (!crb(c,2)) { goto L_801B5B30; } // 801B5B24
  c->r[3]=0u+0x00000001u; // 801B5B28
  return; // 801B5B2C
L_801B5B30:;
  c->r[3]=0u+0x80270000u; // 801B5B30
  c->r[3]=c->r[3]+0x00000CD0u; // 801B5B34
  c->r[0]=c->r[3]-c->r[0]; // 801B5B38
  c->r[0]=cntlz(c->r[0]); // 801B5B3C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B5B40
  return; // 801B5B44
}

// GetTypeName__Q34nw4r3g3d14AnmObjChrBlendCFv
void f_801B5B48(Ctx* __restrict c) {
  trace_call(0x801B5B48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5B48
  c->r[0]=c->lr; // 801B5B4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5B50
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B5B54
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B5B58
  c->ctr=c->r[12]; // 801B5B5C
  if (true) { c->lr=0x801B5B64u; dispatch(c,c->ctr); } // 801B5B60
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5B64
  c->r[3]=c->r[3]+0x00000004u; // 801B5B68
  c->lr=c->r[0]; // 801B5B6C
  c->r[1]=c->r[1]+0x00000010u; // 801B5B70
  return; // 801B5B74
}

// GetTypeObj__Q34nw4r3g3d14AnmObjChrBlendCFv
void f_801B5B78(Ctx* __restrict c) {
  trace_call(0x801B5B78u);
  c->r[3]=0u+0x80270000u; // 801B5B78
  c->r[3]=c->r[3]+0x00000C5Cu; // 801B5B7C
  return; // 801B5B80
}

// __dt__Q34nw4r3g3d14AnmObjChrBlendFv
void f_801B5B84(Ctx* __restrict c) {
  trace_call(0x801B5B84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5B84
  c->r[0]=c->lr; // 801B5B88
  cmps(c,0,(int32_t)c->r[3],0); // 801B5B8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5B90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5B94
  c->r[31]=c->r[3]|c->r[3]; // 801B5B98
  if (crb(c,2)) { goto L_801B5BD4; } // 801B5B9C
  if (crb(c,2)) { goto L_801B5BD4; } // 801B5BA0
  c->r[12]=0u+0x802A0000u; // 801B5BA4
  c->r[12]=c->r[12]+0x00001188u; // 801B5BA8
  W32(c->r[3]+0x00000000u,c->r[12]); // 801B5BAC
  c->r[12]=R32(c->r[12]+0x00000044u); // 801B5BB0
  c->ctr=c->r[12]; // 801B5BB4
  if (true) { c->lr=0x801B5BBCu; dispatch(c,c->ctr); } // 801B5BB8
  cmps(c,0,(int32_t)c->r[31],0); // 801B5BBC
  if (crb(c,2)) { goto L_801B5BD4; } // 801B5BC0
  if (crb(c,2)) { goto L_801B5BD4; } // 801B5BC4
  c->r[3]=c->r[31]|c->r[31]; // 801B5BC8
  c->r[4]=0u+0x00000000u; // 801B5BCC
  c->lr=0x801B5BD4u; f_801B7AB0(c); // 801B5BD0
L_801B5BD4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B5BD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5BD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5BDC
  c->lr=c->r[0]; // 801B5BE0
  c->r[1]=c->r[1]+0x00000010u; // 801B5BE4
  return; // 801B5BE8
}

// GetTypeName__Q34nw4r3g3d13AnmObjChrNodeCFv
void f_801B5BEC(Ctx* __restrict c) {
  trace_call(0x801B5BECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5BEC
  c->r[0]=c->lr; // 801B5BF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5BF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B5BF8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B5BFC
  c->ctr=c->r[12]; // 801B5C00
  if (true) { c->lr=0x801B5C08u; dispatch(c,c->ctr); } // 801B5C04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5C08
  c->r[3]=c->r[3]+0x00000004u; // 801B5C0C
  c->lr=c->r[0]; // 801B5C10
  c->r[1]=c->r[1]+0x00000010u; // 801B5C14
  return; // 801B5C18
}

// GetTypeObj__Q34nw4r3g3d13AnmObjChrNodeCFv
void f_801B5C1C(Ctx* __restrict c) {
  trace_call(0x801B5C1Cu);
  c->r[3]=0u+0x80270000u; // 801B5C1C
  c->r[3]=c->r[3]+0x00000C48u; // 801B5C20
  return; // 801B5C24
}

// GetTypeName__Q34nw4r3g3d9AnmObjChrCFv
void f_801B5C28(Ctx* __restrict c) {
  trace_call(0x801B5C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5C28
  c->r[0]=c->lr; // 801B5C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5C30
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B5C34
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B5C38
  c->ctr=c->r[12]; // 801B5C3C
  if (true) { c->lr=0x801B5C44u; dispatch(c,c->ctr); } // 801B5C40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5C44
  c->r[3]=c->r[3]+0x00000004u; // 801B5C48
  c->lr=c->r[0]; // 801B5C4C
  c->r[1]=c->r[1]+0x00000010u; // 801B5C50
  return; // 801B5C54
}

// GetTypeObj__Q34nw4r3g3d9AnmObjChrCFv
void f_801B5C58(Ctx* __restrict c) {
  trace_call(0x801B5C58u);
  c->r[3]=0u+0x80270000u; // 801B5C58
  c->r[3]=c->r[3]+0x00000C38u; // 801B5C5C
  return; // 801B5C60
}

// TestExistence__Q34nw4r3g3d9AnmObjShpCFUl
void f_801B5C64(Ctx* __restrict c) {
  trace_call(0x801B5C64u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 801B5C64
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801B5C68
  c->r[0]=R16(c->r[3]+c->r[0]); // 801B5C6C
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 801B5C70
  c->r[0]=cntlz(c->r[0]); // 801B5C74
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B5C78
  return; // 801B5C7C
}

// Release__Q34nw4r3g3d9AnmObjShpFv
void f_801B5C80(Ctx* __restrict c) {
  trace_call(0x801B5C80u);
  c->r[4]=0u+0x00010000u; // 801B5C80
  c->r[7]=0u+0x00000000u; // 801B5C84
  c->r[5]=c->r[4]+0xFFFF8000u; // 801B5C88
  c->r[6]=0u+0x00000000u; // 801B5C8C
  goto L_801B5CA4; // 801B5C90
L_801B5C94:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 801B5C94
  c->r[7]=c->r[7]+0x00000001u; // 801B5C98
  W16(c->r[4]+c->r[6],c->r[5]); // 801B5C9C
  c->r[6]=c->r[6]+0x00000002u; // 801B5CA0
L_801B5CA4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B5CA4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801B5CA8
  if (crb(c,0)) { IRQCHK(c); goto L_801B5C94; } // 801B5CAC
  c->r[4]=0u+0x00000004u; // 801B5CB0
  c->r[5]=0u+0x00000000u; // 801B5CB4
  f_801B7C80(c); return; // 801B5CB8
}

// Attach__Q34nw4r3g3d9AnmObjShpFiPQ34nw4r3g3d12AnmObjShpRes
void f_801B5CBC(Ctx* __restrict c) {
  trace_call(0x801B5CBCu);
  c->r[3]=0u+0x00000000u; // 801B5CBC
  return; // 801B5CC0
}

// Detach__Q34nw4r3g3d9AnmObjShpFi
void f_801B5CC4(Ctx* __restrict c) {
  trace_call(0x801B5CC4u);
  c->r[3]=0u+0x00000000u; // 801B5CC4
  return; // 801B5CC8
}

// SetWeight__Q34nw4r3g3d9AnmObjShpFif
void f_801B5CCC(Ctx* __restrict c) {
  trace_call(0x801B5CCCu);
  return; // 801B5CCC
}

// GetWeight__Q34nw4r3g3d9AnmObjShpCFi
void f_801B5CD0(Ctx* __restrict c) {
  trace_call(0x801B5CD0u);
  {uint32_t ea=c->r[2]+0xFFFF9B78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5CD0
  return; // 801B5CD4
}

// DetachAll__Q34nw4r3g3d9AnmObjShpFv
void f_801B5CD8(Ctx* __restrict c) {
  trace_call(0x801B5CD8u);
  return; // 801B5CD8
}

// __dt__Q34nw4r3g3d9AnmObjShpFv
void f_801B5CDC(Ctx* __restrict c) {
  trace_call(0x801B5CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5CDC
  c->r[0]=c->lr; // 801B5CE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B5CE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5CE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5CEC
  c->r[31]=c->r[3]|c->r[3]; // 801B5CF0
  if (crb(c,2)) { goto L_801B5D04; } // 801B5CF4
  if (crb(c,2)) { goto L_801B5D04; } // 801B5CF8
  c->r[4]=0u+0x00000000u; // 801B5CFC
  c->lr=0x801B5D04u; f_801B7AB0(c); // 801B5D00
L_801B5D04:;
  c->r[3]=c->r[31]|c->r[31]; // 801B5D04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5D08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5D0C
  c->lr=c->r[0]; // 801B5D10
  c->r[1]=c->r[1]+0x00000010u; // 801B5D14
  return; // 801B5D18
}

// Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb
void f_801B5D1C(Ctx* __restrict c) {
  trace_call(0x801B5D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5D1C
  c->r[0]=c->lr; // 801B5D20
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B5D24
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801B5D28
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801B5D2C
  c->r[11]=c->r[1]+0x00000030u; // 801B5D30
  c->lr=0x801B5D38u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5D34
  c->r[8]=R32(c->r[5]+0x00000000u); // 801B5D38
  c->r[27]=c->r[3]|c->r[3]; // 801B5D3C
  c->r[29]=c->r[4]|c->r[4]; // 801B5D40
  c->r[28]=c->r[5]|c->r[5]; // 801B5D44
  cmps(c,0,(int32_t)c->r[8],0); // 801B5D48
  c->r[24]=c->r[7]|c->r[7]; // 801B5D4C
  if (crb(c,2)) { goto L_801B5D60; } // 801B5D50
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B5D54
  cmps(c,0,(int32_t)c->r[0],0); // 801B5D58
  if (!crb(c,2)) { goto L_801B5D68; } // 801B5D5C
L_801B5D60:;
  c->r[3]=0u+0x00000000u; // 801B5D60
  goto L_801B5F3C; // 801B5D64
L_801B5D68:;
  c->r[0]=R32(c->r[8]+0x00000010u); // 801B5D68
  cmps(c,0,(int32_t)c->r[0],0); // 801B5D6C
  if (crb(c,2)) { goto L_801B5D7C; } // 801B5D70
  c->r[3]=c->r[8]+c->r[0]; // 801B5D74
  goto L_801B5D80; // 801B5D78
L_801B5D7C:;
  c->r[3]=0u+0x00000000u; // 801B5D7C
L_801B5D80:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B5D80
  if (crb(c,2)) { goto L_801B5D90; } // 801B5D84
  c->r[25]=R32(c->r[3]+0x00000004u); // 801B5D88
  goto L_801B5D94; // 801B5D8C
L_801B5D90:;
  c->r[25]=0u+0x00000000u; // 801B5D90
L_801B5D94:;
  c->r[3]=c->r[6]|c->r[6]; // 801B5D94
  c->lr=0x801B5D9Cu; f_801A9C24(c); // 801B5D98
  c->r[5]=R32(c->r[28]+0x00000000u); // 801B5D9C
  c->r[0]=0u-c->r[24]; // 801B5DA0
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B5DA4
  c->r[26]=c->r[3]|c->r[3]; // 801B5DA8
  c->r[6]=R16(c->r[5]+0x00000026u); // 801B5DAC
  c->r[0]=c->r[0]|c->r[24]; // 801B5DB0
  c->r[5]=sraw(c,c->r[0],31); // 801B5DB4
  c->r[4]=c->r[4]+0x0000003Bu; // 801B5DB8
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801B5DBC
  cmps(c,0,(int32_t)c->r[29],0); // 801B5DC0
  c->r[5]=c->r[25]&c->r[5]; // 801B5DC4
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801B5DC8
  c->r[3]=c->r[30]+c->r[0]; // 801B5DCC
  c->r[0]=c->r[3]+0x00000003u; // 801B5DD0
  c->r[24]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 801B5DD4
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B5DD8
  c->r[3]=c->r[25]+c->r[24]; // 801B5DDC
  c->r[0]=c->r[3]+0x00000003u; // 801B5DE0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B5DE4
  if (crb(c,2)) { goto L_801B5DF0; } // 801B5DE8
  W32(c->r[29]+0x00000000u,c->r[4]); // 801B5DEC
L_801B5DF0:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B5DF0
  if (!crb(c,2)) { goto L_801B5E00; } // 801B5DF4
  c->r[3]=0u+0x00000000u; // 801B5DF8
  goto L_801B5F3C; // 801B5DFC
L_801B5E00:;
  c->r[3]=c->r[27]|c->r[27]; // 801B5E00
  c->lr=0x801B5E08u; f_80128068(c); // 801B5E04
  cmps(c,0,(int32_t)c->r[3],0); // 801B5E08
  c->r[31]=c->r[3]|c->r[3]; // 801B5E0C
  if (!crb(c,2)) { goto L_801B5E1C; } // 801B5E10
  c->r[3]=0u+0x00000000u; // 801B5E14
  goto L_801B5F3C; // 801B5E18
L_801B5E1C:;
  c->r[5]=c->r[3]+0x00000038u; // 801B5E1C
  c->r[30]=c->r[3]+c->r[30]; // 801B5E20
  c->r[29]=c->r[3]+c->r[25]; // 801B5E24
  if (crb(c,2)) { goto L_801B5F38; } // 801B5E28
  cmps(c,0,(int32_t)c->r[24],0); // 801B5E2C
  c->r[28]=R32(c->r[28]+0x00000000u); // 801B5E30
  if (crb(c,2)) { goto L_801B5E3C; } // 801B5E34
  goto L_801B5E40; // 801B5E38
L_801B5E3C:;
  c->r[29]=0u+0x00000000u; // 801B5E3C
L_801B5E40:;
  c->r[0]=0u+0x00000000u; // 801B5E40
  c->r[4]=0u+0x802A0000u; // 801B5E44
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B5E48
  c->r[4]=c->r[4]+0x00001288u; // 801B5E4C
  W32(c->r[3]+0x00000008u,c->r[27]); // 801B5E50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B5E54
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B5E58
  W32(c->r[3]+0x00000010u,c->r[26]); // 801B5E5C
  W32(c->r[3]+0x00000014u,c->r[5]); // 801B5E60
  c->r[3]=c->r[31]|c->r[31]; // 801B5E64
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B5E68
  c->r[12]=R32(c->r[12]+0x00000034u); // 801B5E6C
  c->ctr=c->r[12]; // 801B5E70
  if (true) { c->lr=0x801B5E78u; dispatch(c,c->ctr); } // 801B5E74
  c->r[4]=R16(c->r[28]+0x00000024u); // 801B5E78
  c->r[0]=0u+0x43300000u; // 801B5E7C
  c->r[5]=R32(c->r[28]+0x00000028u); // 801B5E80
  c->r[3]=0u+0x802A0000u; // 801B5E84
  c->r[4]=c->r[4]^0x80000000u; // 801B5E88
  {uint32_t ea=c->r[2]+0xFFFF9B78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5E8C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B5E90
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801B5E94
  {uint32_t ea=c->r[2]+0xFFFF9B7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5E98
  c->r[4]=c->r[13]+0xFFFF89ACu; // 801B5E9C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B5EA0
  c->r[3]=c->r[3]+0x00001238u; // 801B5EA4
  {uint32_t ea=c->r[2]+0xFFFF9B80u; c->f[3]=RF64(ea);} // 801B5EA8
  cmps(c,0,(int32_t)c->r[29],0); // 801B5EAC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 801B5EB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801B5EB4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B5EB8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 801B5EBC
  c->r[0]=R32(c->r[4]+c->r[5]); // 801B5EC0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 801B5EC4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 801B5EC8
  W32(c->r[31]+0x00000028u,c->r[0]); // 801B5ECC
  W32(c->r[31]+0x00000000u,c->r[3]); // 801B5ED0
  W32(c->r[31]+0x0000002Cu,c->r[28]); // 801B5ED4
  W32(c->r[31]+0x00000030u,c->r[30]); // 801B5ED8
  W32(c->r[31]+0x00000034u,c->r[29]); // 801B5EDC
  if (crb(c,2)) { goto L_801B5F38; } // 801B5EE0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B5EE4
  c->r[26]=0u+0x00000000u; // 801B5EE8
  c->r[25]=0u+0x00000000u; // 801B5EEC
  goto L_801B5F2C; // 801B5EF0
L_801B5EF4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801B5EF4
  c->r[3]=R16(c->r[3]+c->r[25]); // 801B5EF8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801B5EFC
  if (!crb(c,2)) { goto L_801B5F24; } // 801B5F00
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 801B5F04
  c->f[1]=c->f[31]; // 801B5F08
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 801B5F0C
  c->r[4]=R32(c->r[31]+0x00000034u); // 801B5F10
  c->r[6]=R32(c->r[31]+0x00000030u); // 801B5F14
  c->r[3]=c->r[31]+0x0000002Cu; // 801B5F18
  c->r[4]=c->r[4]+c->r[0]; // 801B5F1C
  c->lr=0x801B5F24u; f_801B12B8(c); // 801B5F20
L_801B5F24:;
  c->r[25]=c->r[25]+0x00000002u; // 801B5F24
  c->r[26]=c->r[26]+0x00000001u; // 801B5F28
L_801B5F2C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801B5F2C
  cmpu(c,0,c->r[26],c->r[0]); // 801B5F30
  if (crb(c,0)) { IRQCHK(c); goto L_801B5EF4; } // 801B5F34
L_801B5F38:;
  c->r[3]=c->r[31]|c->r[31]; // 801B5F38
L_801B5F3C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801B5F3C
  c->r[11]=c->r[1]+0x00000030u; // 801B5F40
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801B5F44
  c->lr=0x801B5F4Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5F48
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B5F4C
  c->lr=c->r[0]; // 801B5F50
  c->r[1]=c->r[1]+0x00000040u; // 801B5F54
  return; // 801B5F58
}

// SetFrame__Q34nw4r3g3d12AnmObjShpResFf
void f_801B5F5C(Ctx* __restrict c) {
  trace_call(0x801B5F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5F5C
  c->r[0]=c->lr; // 801B5F60
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B5F64
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B5F68
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B5F6C
  c->f[3]=c->f[1]; // 801B5F70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5F74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5F78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5F7C
  c->r[29]=c->r[3]|c->r[3]; // 801B5F80
  c->r[12]=R32(c->r[3]+0x00000028u); // 801B5F84
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5F88
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5F8C
  c->ctr=c->r[12]; // 801B5F90
  if (true) { c->lr=0x801B5F98u; dispatch(c,c->ctr); } // 801B5F94
  c->r[0]=R32(c->r[29]+0x00000034u); // 801B5F98
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 801B5F9C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5FA0
  if (crb(c,2)) { goto L_801B5FFC; } // 801B5FA4
  c->f[31]=c->ps1[31]=S(c->f[1]); // 801B5FA8
  c->r[31]=0u+0x00000000u; // 801B5FAC
  c->r[30]=0u+0x00000000u; // 801B5FB0
  goto L_801B5FF0; // 801B5FB4
L_801B5FB8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801B5FB8
  c->r[3]=R16(c->r[3]+c->r[30]); // 801B5FBC
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801B5FC0
  if (!crb(c,2)) { goto L_801B5FE8; } // 801B5FC4
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 801B5FC8
  c->f[1]=c->f[31]; // 801B5FCC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 801B5FD0
  c->r[4]=R32(c->r[29]+0x00000034u); // 801B5FD4
  c->r[6]=R32(c->r[29]+0x00000030u); // 801B5FD8
  c->r[3]=c->r[29]+0x0000002Cu; // 801B5FDC
  c->r[4]=c->r[4]+c->r[0]; // 801B5FE0
  c->lr=0x801B5FE8u; f_801B12B8(c); // 801B5FE4
L_801B5FE8:;
  c->r[30]=c->r[30]+0x00000002u; // 801B5FE8
  c->r[31]=c->r[31]+0x00000001u; // 801B5FEC
L_801B5FF0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B5FF0
  cmpu(c,0,c->r[31],c->r[0]); // 801B5FF4
  if (crb(c,0)) { IRQCHK(c); goto L_801B5FB8; } // 801B5FF8
L_801B5FFC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B5FFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B6000
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B6004
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6008
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B600C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6010
  c->lr=c->r[0]; // 801B6014
  c->r[1]=c->r[1]+0x00000030u; // 801B6018
  return; // 801B601C
}

// GetFrame__Q34nw4r3g3d12AnmObjShpResCFv
void f_801B6020(Ctx* __restrict c) {
  trace_call(0x801B6020u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6020
  return; // 801B6024
}

// SetUpdateRate__Q34nw4r3g3d12AnmObjShpResFf
void f_801B6028(Ctx* __restrict c) {
  trace_call(0x801B6028u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6028
  c->r[0]=c->lr; // 801B602C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B6030
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B6034
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B6038
  {uint32_t ea=c->r[2]+0xFFFF9B78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B603C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B6040
  fcmp(c,0,c->f[0],c->f[1]); // 801B6044
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6048
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B604C
  c->r[29]=c->r[3]|c->r[3]; // 801B6050
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B6054
  if (!crb(c,2)) { goto L_801B60BC; } // 801B6058
  c->r[0]=R32(c->r[3]+0x00000034u); // 801B605C
  cmps(c,0,(int32_t)c->r[0],0); // 801B6060
  if (crb(c,2)) { goto L_801B60BC; } // 801B6064
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B6068
  c->r[31]=0u+0x00000000u; // 801B606C
  c->r[30]=0u+0x00000000u; // 801B6070
  goto L_801B60B0; // 801B6074
L_801B6078:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801B6078
  c->r[3]=R16(c->r[3]+c->r[30]); // 801B607C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801B6080
  if (!crb(c,2)) { goto L_801B60A8; } // 801B6084
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 801B6088
  c->f[1]=c->f[31]; // 801B608C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 801B6090
  c->r[4]=R32(c->r[29]+0x00000034u); // 801B6094
  c->r[6]=R32(c->r[29]+0x00000030u); // 801B6098
  c->r[3]=c->r[29]+0x0000002Cu; // 801B609C
  c->r[4]=c->r[4]+c->r[0]; // 801B60A0
  c->lr=0x801B60A8u; f_801B12B8(c); // 801B60A4
L_801B60A8:;
  c->r[30]=c->r[30]+0x00000002u; // 801B60A8
  c->r[31]=c->r[31]+0x00000001u; // 801B60AC
L_801B60B0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B60B0
  cmpu(c,0,c->r[31],c->r[0]); // 801B60B4
  if (crb(c,0)) { IRQCHK(c); goto L_801B6078; } // 801B60B8
L_801B60BC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B60BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B60C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B60C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B60C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B60CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B60D0
  c->lr=c->r[0]; // 801B60D4
  c->r[1]=c->r[1]+0x00000030u; // 801B60D8
  return; // 801B60DC
}

// GetUpdateRate__Q34nw4r3g3d12AnmObjShpResCFv
void f_801B60E0(Ctx* __restrict c) {
  trace_call(0x801B60E0u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B60E0
  return; // 801B60E4
}

// UpdateFrame__Q34nw4r3g3d12AnmObjShpResFv
void f_801B60E8(Ctx* __restrict c) {
  trace_call(0x801B60E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B60E8
  c->r[0]=c->lr; // 801B60EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B60F0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B60F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B60F8
  {uint32_t ea=c->r[2]+0xFFFF9B78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B60FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B6100
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6104
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B6108
  c->r[29]=c->r[3]|c->r[3]; // 801B610C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6110
  fcmp(c,0,c->f[0],c->f[1]); // 801B6114
  if (crb(c,2)) { goto L_801B61A8; } // 801B6118
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B611C
  {uint32_t ea=c->r[13]+0xFFFF9078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6120
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6124
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 801B6128
  c->r[12]=R32(c->r[3]+0x00000028u); // 801B612C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6130
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6134
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 801B6138
  c->ctr=c->r[12]; // 801B613C
  if (true) { c->lr=0x801B6144u; dispatch(c,c->ctr); } // 801B6140
  c->r[0]=R32(c->r[29]+0x00000034u); // 801B6144
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 801B6148
  cmps(c,0,(int32_t)c->r[0],0); // 801B614C
  if (crb(c,2)) { goto L_801B61A8; } // 801B6150
  c->f[31]=c->ps1[31]=S(c->f[1]); // 801B6154
  c->r[31]=0u+0x00000000u; // 801B6158
  c->r[30]=0u+0x00000000u; // 801B615C
  goto L_801B619C; // 801B6160
L_801B6164:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801B6164
  c->r[3]=R16(c->r[3]+c->r[30]); // 801B6168
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801B616C
  if (!crb(c,2)) { goto L_801B6194; } // 801B6170
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 801B6174
  c->f[1]=c->f[31]; // 801B6178
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 801B617C
  c->r[4]=R32(c->r[29]+0x00000034u); // 801B6180
  c->r[6]=R32(c->r[29]+0x00000030u); // 801B6184
  c->r[3]=c->r[29]+0x0000002Cu; // 801B6188
  c->r[4]=c->r[4]+c->r[0]; // 801B618C
  c->lr=0x801B6194u; f_801B12B8(c); // 801B6190
L_801B6194:;
  c->r[30]=c->r[30]+0x00000002u; // 801B6194
  c->r[31]=c->r[31]+0x00000001u; // 801B6198
L_801B619C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B619C
  cmpu(c,0,c->r[31],c->r[0]); // 801B61A0
  if (crb(c,0)) { IRQCHK(c); goto L_801B6164; } // 801B61A4
L_801B61A8:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B61A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B61AC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B61B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B61B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B61B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B61BC
  c->lr=c->r[0]; // 801B61C0
  c->r[1]=c->r[1]+0x00000030u; // 801B61C4
  return; // 801B61C8
}

// Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl
void f_801B61CC(Ctx* __restrict c) {
  trace_call(0x801B61CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B61CC
  c->r[0]=c->lr; // 801B61D0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B61D4
  c->r[11]=c->r[1]+0x00000040u; // 801B61D8
  c->lr=0x801B61E0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B61DC
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 801B61E0
  c->r[28]=c->r[3]|c->r[3]; // 801B61E4
  c->r[29]=c->r[4]|c->r[4]; // 801B61E8
  c->r[31]=0u+0x00000000u; // 801B61EC
  c->r[0]=R32(c->r[5]+0x00000010u); // 801B61F0
  cmps(c,0,(int32_t)c->r[0],0); // 801B61F4
  if (crb(c,2)) { goto L_801B6204; } // 801B61F8
  c->r[3]=c->r[5]+c->r[0]; // 801B61FC
  goto L_801B6208; // 801B6200
L_801B6204:;
  c->r[3]=0u+0x00000000u; // 801B6204
L_801B6208:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B6208
  if (crb(c,2)) { goto L_801B6218; } // 801B620C
  c->r[27]=R32(c->r[3]+0x00000004u); // 801B6210
  goto L_801B621C; // 801B6214
L_801B6218:;
  c->r[27]=0u+0x00000000u; // 801B6218
L_801B621C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B621C
  c->r[30]=0u+0x00000000u; // 801B6220
  if (crb(c,2)) { goto L_801B62C0; } // 801B6224
  goto L_801B62B4; // 801B6228
L_801B622C:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 801B622C
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B6230
  cmps(c,0,(int32_t)c->r[0],0); // 801B6234
  if (crb(c,2)) { goto L_801B6244; } // 801B6238
  c->r[0]=c->r[3]+c->r[0]; // 801B623C
  goto L_801B6248; // 801B6240
L_801B6244:;
  c->r[0]=0u+0x00000000u; // 801B6244
L_801B6248:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B6248
  if (crb(c,2)) { goto L_801B6274; } // 801B624C
  c->r[3]=rotl(c->r[30],4)&0x000FFFF0u; // 801B6250
  c->r[3]=c->r[0]+c->r[3]; // 801B6254
  c->r[3]=R32(c->r[3]+0x00000024u); // 801B6258
  cmps(c,0,(int32_t)c->r[3],0); // 801B625C
  if (crb(c,2)) { goto L_801B626C; } // 801B6260
  c->r[5]=c->r[0]+c->r[3]; // 801B6264
  goto L_801B6278; // 801B6268
L_801B626C:;
  c->r[5]=0u+0x00000000u; // 801B626C
  goto L_801B6278; // 801B6270
L_801B6274:;
  c->r[5]=0u+0x00000000u; // 801B6274
L_801B6278:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B6278
  c->r[3]=c->r[29]|c->r[29]; // 801B627C
  c->r[4]=c->r[1]+0x00000014u; // 801B6280
  c->r[5]=c->r[0]+c->r[5]; // 801B6284
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 801B6288
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B628C
  c->lr=0x801B6294u; f_801A9B2C(c); // 801B6290
  cmps(c,0,(int32_t)c->r[3],0); // 801B6294
  if (crb(c,2)) { goto L_801B62B0; } // 801B6298
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B629C
  c->r[31]=0u+0x00000001u; // 801B62A0
  c->r[3]=R32(c->r[28]+0x00000014u); // 801B62A4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801B62A8
  W16(c->r[3]+c->r[0],c->r[30]); // 801B62AC
L_801B62B0:;
  c->r[30]=c->r[30]+0x00000001u; // 801B62B0
L_801B62B4:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 801B62B4
  cmpu(c,0,c->r[0],c->r[27]); // 801B62B8
  if (crb(c,0)) { IRQCHK(c); goto L_801B622C; } // 801B62BC
L_801B62C0:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 801B62C0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801B62C4
  c->r[24]=R16(c->r[3]+0x00000026u); // 801B62C8
  cmps(c,0,(int32_t)c->r[0],0); // 801B62CC
  if (crb(c,2)) { goto L_801B62DC; } // 801B62D0
  c->r[27]=c->r[3]+c->r[0]; // 801B62D4
  goto L_801B62E0; // 801B62D8
L_801B62DC:;
  c->r[27]=0u+0x00000000u; // 801B62DC
L_801B62E0:;
  c->r[25]=c->r[27]|c->r[27]; // 801B62E0
  c->r[23]=0u+0x00000000u; // 801B62E4
  c->r[26]=0u+0x00000000u; // 801B62E8
  goto L_801B634C; // 801B62EC
L_801B62F0:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 801B62F0
  c->r[3]=c->r[29]|c->r[29]; // 801B62F4
  c->r[6]=R32(c->r[28]+0x00000030u); // 801B62F8
  c->r[4]=c->r[1]+0x00000010u; // 801B62FC
  c->r[5]=c->r[27]+c->r[0]; // 801B6300
  c->r[30]=c->r[5]+0xFFFFFFFCu; // 801B6304
  c->r[22]=c->r[6]+c->r[26]; // 801B6308
  W32(c->r[1]+0x00000010u,c->r[30]); // 801B630C
  c->lr=0x801B6314u; f_801A9B2C(c); // 801B6310
  W32(c->r[22]+0x00000000u,c->r[3]); // 801B6314
  c->r[3]=c->r[29]|c->r[29]; // 801B6318
  c->r[4]=c->r[1]+0x0000000Cu; // 801B631C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801B6320
  c->lr=0x801B6328u; f_801A9C58(c); // 801B6324
  W32(c->r[22]+0x00000004u,c->r[3]); // 801B6328
  c->r[3]=c->r[29]|c->r[29]; // 801B632C
  c->r[4]=c->r[1]+0x00000008u; // 801B6330
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B6334
  c->lr=0x801B633Cu; f_801A9D84(c); // 801B6338
  W32(c->r[22]+0x00000008u,c->r[3]); // 801B633C
  c->r[26]=c->r[26]+0x0000000Cu; // 801B6340
  c->r[25]=c->r[25]+0x00000004u; // 801B6344
  c->r[23]=c->r[23]+0x00000001u; // 801B6348
L_801B634C:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[24]); // 801B634C
  if (crb(c,0)) { IRQCHK(c); goto L_801B62F0; } // 801B6350
  c->r[3]=c->r[28]|c->r[28]; // 801B6354
  c->r[4]=0u+0x00000004u; // 801B6358
  c->r[5]=0u+0x00000001u; // 801B635C
  c->lr=0x801B6364u; f_801B7C80(c); // 801B6360
  c->r[11]=c->r[1]+0x00000040u; // 801B6364
  c->r[3]=c->r[31]|c->r[31]; // 801B6368
  c->lr=0x801B6370u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B636C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B6370
  c->lr=c->r[0]; // 801B6374
  c->r[1]=c->r[1]+0x00000040u; // 801B6378
  return; // 801B637C
}

// GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl
void f_801B6380(Ctx* __restrict c) {
  trace_call(0x801B6380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6380
  c->r[0]=c->lr; // 801B6384
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6388
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801B638C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6390
  c->r[31]=c->r[4]|c->r[4]; // 801B6394
  c->r[6]=R32(c->r[3]+0x00000014u); // 801B6398
  c->r[5]=R16(c->r[6]+c->r[0]); // 801B639C
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 801B63A0
  if (crb(c,2)) { goto L_801B63B8; } // 801B63A4
  c->r[0]=0u+0x00000000u; // 801B63A8
  c->r[3]=c->r[31]|c->r[31]; // 801B63AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B63B0
  goto L_801B63E4; // 801B63B4
L_801B63B8:;
  c->r[6]=R32(c->r[3]+0x00000034u); // 801B63B8
  cmps(c,0,(int32_t)c->r[6],0); // 801B63BC
  if (crb(c,2)) { goto L_801B63D0; } // 801B63C0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 801B63C4
  c->r[3]=c->r[6]+c->r[0]; // 801B63C8
  goto L_801B63E4; // 801B63CC
L_801B63D0:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B63D0
  c->r[6]=R32(c->r[3]+0x00000030u); // 801B63D4
  c->r[3]=c->r[3]+0x0000002Cu; // 801B63D8
  c->lr=0x801B63E0u; f_801B12B8(c); // 801B63DC
  c->r[3]=c->r[31]|c->r[31]; // 801B63E0
L_801B63E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B63E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B63E8
  c->lr=c->r[0]; // 801B63EC
  c->r[1]=c->r[1]+0x00000010u; // 801B63F0
  return; // 801B63F4
}

// fn_801B63F8
void f_801B63F8(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 801B63F8
  c->r[0]=c->r[5]+0x00000002u; // 801B63FC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B6400
  if (crb(c,2)) { goto L_801B6444; } // 801B6404
  if (!crb(c,0)) { goto L_801B6418; } // 801B6408
  cmps(c,0,(int32_t)c->r[4],8); // 801B640C
  if (crb(c,2)) { goto L_801B6428; } // 801B6410
  return; // 801B6414
L_801B6418:;
  c->r[0]=c->r[5]+0x00000004u; // 801B6418
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B641C
  if (!crb(c,0)) return; // 801B6420
  goto L_801B6438; // 801B6424
L_801B6428:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B6428
  c->r[12]=R32(c->r[12]+0x00000024u); // 801B642C
  c->ctr=c->r[12]; // 801B6430
  if (true) { dispatch(c,c->ctr); return; } // 801B6434
L_801B6438:;
  c->r[0]=0u+0x00000000u; // 801B6438
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B643C
  return; // 801B6440
L_801B6444:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 801B6444
  return; // 801B6448
}

// fn_801B644C
void f_801B644C(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801B644C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B6450
  c->r[3]=c->r[3]+0x00000C98u; // 801B6454
  cmpu(c,0,c->r[0],c->r[3]); // 801B6458
  if (!crb(c,2)) { goto L_801B6468; } // 801B645C
  c->r[3]=0u+0x00000001u; // 801B6460
  return; // 801B6464
L_801B6468:;
  c->r[3]=0u+0x80270000u; // 801B6468
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B646C
  c->r[3]=c->r[3]+0x00000C88u; // 801B6470
  cmpu(c,0,c->r[0],c->r[3]); // 801B6474
  if (!crb(c,2)) { goto L_801B6484; } // 801B6478
  c->r[3]=0u+0x00000001u; // 801B647C
  return; // 801B6480
L_801B6484:;
  c->r[3]=0u+0x80270000u; // 801B6484
  c->r[3]=c->r[3]+0x00000CE0u; // 801B6488
  cmpu(c,0,c->r[0],c->r[3]); // 801B648C
  if (!crb(c,2)) { goto L_801B649C; } // 801B6490
  c->r[3]=0u+0x00000001u; // 801B6494
  return; // 801B6498
L_801B649C:;
  c->r[3]=0u+0x80270000u; // 801B649C
  c->r[3]=c->r[3]+0x00000CD0u; // 801B64A0
  c->r[0]=c->r[3]-c->r[0]; // 801B64A4
  c->r[0]=cntlz(c->r[0]); // 801B64A8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B64AC
  return; // 801B64B0
}

// fn_801B64B4
void f_801B64B4(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801B64B4
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B64B8
  c->r[3]=c->r[3]+0x00000C88u; // 801B64BC
  cmpu(c,0,c->r[0],c->r[3]); // 801B64C0
  if (!crb(c,2)) { goto L_801B64D0; } // 801B64C4
  c->r[3]=0u+0x00000001u; // 801B64C8
  return; // 801B64CC
L_801B64D0:;
  c->r[3]=0u+0x80270000u; // 801B64D0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B64D4
  c->r[3]=c->r[3]+0x00000CE0u; // 801B64D8
  cmpu(c,0,c->r[0],c->r[3]); // 801B64DC
  if (!crb(c,2)) { goto L_801B64EC; } // 801B64E0
  c->r[3]=0u+0x00000001u; // 801B64E4
  return; // 801B64E8
L_801B64EC:;
  c->r[3]=0u+0x80270000u; // 801B64EC
  c->r[3]=c->r[3]+0x00000CD0u; // 801B64F0
  c->r[0]=c->r[3]-c->r[0]; // 801B64F4
  c->r[0]=cntlz(c->r[0]); // 801B64F8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B64FC
  return; // 801B6500
}

// fn_801B6504
void f_801B6504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6504
  c->r[0]=c->lr; // 801B6508
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B650C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B6510
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B6514
  c->ctr=c->r[12]; // 801B6518
  if (true) { c->lr=0x801B6520u; dispatch(c,c->ctr); } // 801B651C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6520
  c->r[3]=c->r[3]+0x00000004u; // 801B6524
  c->lr=c->r[0]; // 801B6528
  c->r[1]=c->r[1]+0x00000010u; // 801B652C
  return; // 801B6530
}

// fn_801B6534
void f_801B6534(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801B6534
  c->r[3]=c->r[3]+0x00000C98u; // 801B6538
  return; // 801B653C
}

// fn_801B6540
void f_801B6540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6540
  c->r[0]=c->lr; // 801B6544
  cmps(c,0,(int32_t)c->r[3],0); // 801B6548
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B654C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6550
  c->r[31]=c->r[3]|c->r[3]; // 801B6554
  if (crb(c,2)) { goto L_801B656C; } // 801B6558
  if (crb(c,2)) { goto L_801B656C; } // 801B655C
  if (crb(c,2)) { goto L_801B656C; } // 801B6560
  c->r[4]=0u+0x00000000u; // 801B6564
  c->lr=0x801B656Cu; f_801B7AB0(c); // 801B6568
L_801B656C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B656C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6570
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6574
  c->lr=c->r[0]; // 801B6578
  c->r[1]=c->r[1]+0x00000010u; // 801B657C
  return; // 801B6580
}

// fn_801B6584
void f_801B6584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6584
  c->r[0]=c->lr; // 801B6588
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B658C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B6590
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B6594
  c->ctr=c->r[12]; // 801B6598
  if (true) { c->lr=0x801B65A0u; dispatch(c,c->ctr); } // 801B659C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B65A0
  c->r[3]=c->r[3]+0x00000004u; // 801B65A4
  c->lr=c->r[0]; // 801B65A8
  c->r[1]=c->r[1]+0x00000010u; // 801B65AC
  return; // 801B65B0
}

// fn_801B65B4
void f_801B65B4(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801B65B4
  c->r[3]=c->r[3]+0x00000C88u; // 801B65B8
  return; // 801B65BC
}

// MakeDiffuseLightObj__Q34nw4r3g3d24@unnamed@g3d_anmscn_cpp@FPQ34nw4r3g3d8LightObjPCQ34nw4r3g3d14LightAnmResult
void f_801B65C0(Ctx* __restrict c) {
  trace_call(0x801B65C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B65C0
  c->r[0]=c->lr; // 801B65C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B65C8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B65CC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B65D0
  c->r[31]=c->r[4]|c->r[4]; // 801B65D4
  W32(c->r[1]+0x00000048u,c->r[30]); // 801B65D8
  c->r[30]=c->r[3]|c->r[3]; // 801B65DC
  W32(c->r[1]+0x00000044u,c->r[29]); // 801B65E0
  c->r[29]=rotl(c->r[0],0)&0x00000003u; // 801B65E4
  c->lr=0x801B65ECu; f_801CDD1C(c); // 801B65E8
  cmps(c,0,(int32_t)c->r[29],1); // 801B65EC
  if (crb(c,2)) { goto L_801B668C; } // 801B65F0
  if (!crb(c,0)) { goto L_801B6604; } // 801B65F4
  cmps(c,0,(int32_t)c->r[29],0); // 801B65F8
  if (!crb(c,0)) { goto L_801B6610; } // 801B65FC
  goto L_801B67E8; // 801B6600
L_801B6604:;
  cmps(c,0,(int32_t)c->r[29],3); // 801B6604
  if (!crb(c,0)) { goto L_801B67E8; } // 801B6608
  goto L_801B6744; // 801B660C
L_801B6610:;
  c->r[7]=R8(c->r[31]+0x00000020u); // 801B6610
  c->r[4]=c->r[1]+0x00000010u; // 801B6614
  c->r[6]=R8(c->r[31]+0x00000021u); // 801B6618
  c->r[3]=c->r[30]|c->r[30]; // 801B661C
  c->r[5]=R8(c->r[31]+0x00000022u); // 801B6620
  c->r[0]=R8(c->r[31]+0x00000023u); // 801B6624
  W8(c->r[1]+0x00000010u,c->r[7]); // 801B6628
  W8(c->r[1]+0x00000011u,c->r[6]); // 801B662C
  W8(c->r[1]+0x00000012u,c->r[5]); // 801B6630
  W8(c->r[1]+0x00000013u,c->r[0]); // 801B6634
  c->lr=0x801B663Cu; f_801CDD30(c); // 801B6638
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B663C
  c->r[3]=c->r[30]|c->r[30]; // 801B6640
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6644
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B6648
  c->lr=0x801B6650u; f_801CDD78(c); // 801B664C
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6650
  c->r[3]=c->r[30]|c->r[30]; // 801B6654
  c->r[4]=0u+0x00000000u; // 801B6658
  c->lr=0x801B6660u; f_801CDDF4(c); // 801B665C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6660
  c->r[3]=c->r[30]|c->r[30]; // 801B6664
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6668
  c->r[4]=R32(c->r[31]+0x00000024u); // 801B666C
  c->lr=0x801B6674u; f_801CDE74(c); // 801B6670
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6674
  c->r[3]=c->r[30]|c->r[30]; // 801B6678
  c->f[2]=c->f[1]; // 801B667C
  c->f[3]=c->f[1]; // 801B6680
  c->lr=0x801B6688u; f_801CDDB4(c); // 801B6684
  goto L_801B67E8; // 801B6688
L_801B668C:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 801B668C
  c->r[4]=c->r[1]+0x0000000Cu; // 801B6690
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 801B6694
  c->r[3]=c->r[30]|c->r[30]; // 801B6698
  c->r[7]=R8(c->r[31]+0x00000020u); // 801B669C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801B66A0
  c->r[6]=R8(c->r[31]+0x00000021u); // 801B66A4
  c->r[5]=R8(c->r[31]+0x00000022u); // 801B66A8
  c->r[0]=R8(c->r[31]+0x00000023u); // 801B66AC
  {double t0=c->f[2], t1=c->ps1[2]; c->f[4]=t0; c->ps1[4]=t1;} // 801B66B0
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 801B66B4
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 801B66B8
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,2,ea,0,0);} // 801B66BC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801B66C0
  {uint32_t ea=c->r[2]+0xFFFF9B8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801B66C4
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 801B66C8
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 801B66CC
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,2,ea,1,0);} // 801B66D0
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 801B66D4
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 801B66D8
  W8(c->r[1]+0x0000000Du,c->r[6]); // 801B66DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 801B66E0
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 801B66E4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B66E8
  c->lr=0x801B66F0u; f_801CDD30(c); // 801B66EC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B66F0
  c->r[3]=c->r[30]|c->r[30]; // 801B66F4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B66F8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B66FC
  c->lr=0x801B6704u; f_801CDD78(c); // 801B6700
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6704
  c->r[3]=c->r[30]|c->r[30]; // 801B6708
  {uint32_t ea=c->r[2]+0xFFFF9B90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B670C
  c->f[3]=c->f[2]; // 801B6710
  c->lr=0x801B6718u; f_801CDE34(c); // 801B6714
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6718
  c->r[3]=c->r[30]|c->r[30]; // 801B671C
  {uint32_t ea=c->r[2]+0xFFFF9B90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6720
  c->f[3]=c->f[2]; // 801B6724
  c->lr=0x801B672Cu; f_801CDEB4(c); // 801B6728
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B672C
  c->r[3]=c->r[30]|c->r[30]; // 801B6730
  c->f[2]=c->f[1]; // 801B6734
  c->f[3]=c->f[1]; // 801B6738
  c->lr=0x801B6740u; f_801CDDB4(c); // 801B673C
  goto L_801B67E8; // 801B6740
L_801B6744:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 801B6744
  c->r[3]=c->r[1]+0x00000014u; // 801B6748
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 801B674C
  c->r[4]=c->r[3]|c->r[3]; // 801B6750
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801B6754
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 801B6758
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 801B675C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 801B6760
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801B6764
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,1,0);} // 801B6768
  c->lr=0x801B6770u; f_800ECFD0(c); // 801B676C
  c->r[7]=R8(c->r[31]+0x00000020u); // 801B6770
  c->r[4]=c->r[1]+0x00000008u; // 801B6774
  c->r[6]=R8(c->r[31]+0x00000021u); // 801B6778
  c->r[3]=c->r[30]|c->r[30]; // 801B677C
  c->r[5]=R8(c->r[31]+0x00000022u); // 801B6780
  c->r[0]=R8(c->r[31]+0x00000023u); // 801B6784
  W8(c->r[1]+0x00000008u,c->r[7]); // 801B6788
  W8(c->r[1]+0x00000009u,c->r[6]); // 801B678C
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801B6790
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801B6794
  c->lr=0x801B679Cu; f_801CDD30(c); // 801B6798
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B679C
  c->r[3]=c->r[30]|c->r[30]; // 801B67A0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B67A4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B67A8
  c->lr=0x801B67B0u; f_801CDD78(c); // 801B67AC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B67B0
  c->r[3]=c->r[30]|c->r[30]; // 801B67B4
  c->r[4]=R32(c->r[31]+0x00000030u); // 801B67B8
  c->lr=0x801B67C0u; f_801CDDF4(c); // 801B67BC
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B67C0
  c->r[3]=c->r[30]|c->r[30]; // 801B67C4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B67C8
  c->r[4]=R32(c->r[31]+0x00000024u); // 801B67CC
  c->lr=0x801B67D4u; f_801CDE74(c); // 801B67D0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B67D4
  c->r[3]=c->r[30]|c->r[30]; // 801B67D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B67DC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801B67E0
  c->lr=0x801B67E8u; f_801CDDB4(c); // 801B67E4
L_801B67E8:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B67E8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B67EC
  if (!crb(c,2)) { goto L_801B6800; } // 801B67F0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B67F4
  c->r[0]=c->r[0]|0x00000010u; // 801B67F8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801B67FC
L_801B6800:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B6800
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B6804
  if (!crb(c,2)) { goto L_801B6818; } // 801B6808
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B680C
  c->r[0]=c->r[0]|0x00000020u; // 801B6810
  W32(c->r[30]+0x00000000u,c->r[0]); // 801B6814
L_801B6818:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B6818
  c->r[0]=c->r[0]|0x00000004u; // 801B681C
  W32(c->r[30]+0x00000000u,c->r[0]); // 801B6820
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B6824
  c->r[30]=R32(c->r[1]+0x00000048u); // 801B6828
  c->r[29]=R32(c->r[1]+0x00000044u); // 801B682C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B6830
  c->lr=c->r[0]; // 801B6834
  c->r[1]=c->r[1]+0x00000050u; // 801B6838
  return; // 801B683C
}

// GetLightSetting__Q34nw4r3g3d6AnmScnFPQ34nw4r3g3d12LightSetting
void f_801B6840(Ctx* __restrict c) {
  trace_call(0x801B6840u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6840
  c->r[0]=c->lr; // 801B6844
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B6848
  c->r[11]=c->r[1]+0x00000060u; // 801B684C
  c->lr=0x801B6854u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6850
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B6854
  c->r[28]=c->r[3]|c->r[3]; // 801B6858
  c->r[29]=c->r[4]|c->r[4]; // 801B685C
  c->r[12]=R32(c->r[12]+0x00000050u); // 801B6860
  c->ctr=c->r[12]; // 801B6864
  if (true) { c->lr=0x801B686Cu; dispatch(c,c->ctr); } // 801B6868
  W32(c->r[1]+0x00000024u,c->r[3]); // 801B686C
  c->r[3]=c->r[28]|c->r[28]; // 801B6870
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B6874
  c->r[12]=R32(c->r[12]+0x00000054u); // 801B6878
  c->ctr=c->r[12]; // 801B687C
  if (true) { c->lr=0x801B6884u; dispatch(c,c->ctr); } // 801B6880
  W32(c->r[1]+0x00000020u,c->r[3]); // 801B6884
  c->r[3]=c->r[28]|c->r[28]; // 801B6888
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B688C
  c->r[12]=R32(c->r[12]+0x00000058u); // 801B6890
  c->ctr=c->r[12]; // 801B6894
  if (true) { c->lr=0x801B689Cu; dispatch(c,c->ctr); } // 801B6898
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B689C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801B68A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B68A4
  if (crb(c,2)) { goto L_801B6918; } // 801B68A8
  c->r[4]=R16(c->r[29]+0x00000002u); // 801B68AC
  c->r[3]=c->r[1]+0x00000024u; // 801B68B0
  cmpu(c,0,c->r[4],c->r[0]); // 801B68B4
  W32(c->r[1]+0x00000018u,c->r[4]); // 801B68B8
  if (!crb(c,0)) { goto L_801B68C4; } // 801B68BC
  c->r[3]=c->r[1]+0x00000018u; // 801B68C0
L_801B68C4:;
  c->r[27]=R32(c->r[3]+0x00000000u); // 801B68C4
  c->r[30]=0u+0x00000000u; // 801B68C8
  goto L_801B6910; // 801B68CC
L_801B68D0:;
  c->r[4]=c->r[29]|c->r[29]; // 801B68D0
  c->r[5]=c->r[30]|c->r[30]; // 801B68D4
  c->r[3]=c->r[1]+0x00000030u; // 801B68D8
  c->lr=0x801B68E0u; f_8003B580(c); // 801B68DC
  c->r[4]=R32(c->r[1]+0x00000030u); // 801B68E0
  c->r[3]=c->r[28]|c->r[28]; // 801B68E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B68E8
  c->r[5]=c->r[30]|c->r[30]; // 801B68EC
  W32(c->r[1]+0x00000028u,c->r[4]); // 801B68F0
  c->r[4]=c->r[1]+0x00000028u; // 801B68F4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B68F8
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B68FC
  c->r[12]=R32(c->r[12]+0x00000064u); // 801B6900
  c->ctr=c->r[12]; // 801B6904
  if (true) { c->lr=0x801B690Cu; dispatch(c,c->ctr); } // 801B6908
  c->r[30]=c->r[30]+0x00000001u; // 801B690C
L_801B6910:;
  cmpu(c,0,c->r[30],c->r[27]); // 801B6910
  if (crb(c,0)) { IRQCHK(c); goto L_801B68D0; } // 801B6914
L_801B6918:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 801B6918
  cmps(c,0,(int32_t)c->r[0],0); // 801B691C
  if (crb(c,2)) { goto L_801B6980; } // 801B6920
  c->r[4]=R16(c->r[29]+0x00000000u); // 801B6924
  c->r[3]=c->r[1]+0x00000020u; // 801B6928
  c->r[27]=R32(c->r[29]+0x00000008u); // 801B692C
  cmpu(c,0,c->r[4],c->r[0]); // 801B6930
  W32(c->r[1]+0x00000014u,c->r[4]); // 801B6934
  if (!crb(c,0)) { goto L_801B6940; } // 801B6938
  c->r[3]=c->r[1]+0x00000014u; // 801B693C
L_801B6940:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 801B6940
  c->r[31]=0u+0x00000000u; // 801B6944
  goto L_801B6978; // 801B6948
L_801B694C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B694C
  c->r[4]=c->r[28]|c->r[28]; // 801B6950
  c->r[5]=c->r[31]|c->r[31]; // 801B6954
  c->r[3]=c->r[1]+0x00000008u; // 801B6958
  c->r[12]=R32(c->r[12]+0x00000068u); // 801B695C
  c->ctr=c->r[12]; // 801B6960
  if (true) { c->lr=0x801B6968u; dispatch(c,c->ctr); } // 801B6964
  c->r[0]=R32(c->r[1]+0x00000008u); // 801B6968
  c->r[31]=c->r[31]+0x00000001u; // 801B696C
  W32(c->r[27]+0x00000000u,c->r[0]); // 801B6970
  c->r[27]=c->r[27]+0x00000004u; // 801B6974
L_801B6978:;
  cmpu(c,0,c->r[31],c->r[30]); // 801B6978
  if (crb(c,0)) { IRQCHK(c); goto L_801B694C; } // 801B697C
L_801B6980:;
  c->r[27]=R32(c->r[1]+0x0000001Cu); // 801B6980
  cmps(c,0,(int32_t)c->r[27],0); // 801B6984
  if (crb(c,2)) { goto L_801B6B3C; } // 801B6988
  c->r[31]=R32(c->r[29]+0x00000004u); // 801B698C
  c->r[3]=c->r[28]|c->r[28]; // 801B6990
  c->r[29]=R16(c->r[29]+0x00000000u); // 801B6994
  W32(c->r[1]+0x00000010u,c->r[29]); // 801B6998
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B699C
  c->r[12]=R32(c->r[12]+0x00000044u); // 801B69A0
  c->ctr=c->r[12]; // 801B69A4
  if (true) { c->lr=0x801B69ACu; dispatch(c,c->ctr); } // 801B69A8
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801B69AC
  c->r[0]=c->r[27]+c->r[3]; // 801B69B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B69B4
  c->r[3]=c->r[1]+0x0000001Cu; // 801B69B8
  cmpu(c,0,c->r[29],c->r[4]); // 801B69BC
  if (!crb(c,0)) { goto L_801B69C8; } // 801B69C0
  c->r[3]=c->r[1]+0x00000010u; // 801B69C4
L_801B69C8:;
  cmpu(c,0,c->r[29],c->r[0]); // 801B69C8
  c->r[30]=R32(c->r[3]+0x00000000u); // 801B69CC
  c->r[3]=c->r[1]+0x0000000Cu; // 801B69D0
  if (!crb(c,0)) { goto L_801B69DC; } // 801B69D4
  c->r[3]=c->r[1]+0x00000010u; // 801B69D8
L_801B69DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B69DC
  c->r[29]=R32(c->r[3]+0x00000000u); // 801B69E0
  c->r[5]=0u+0x00000000u; // 801B69E4
  if (crb(c,2)) { goto L_801B6AA8; } // 801B69E8
  cmpu(c,0,c->r[30],0x00000008u); // 801B69EC
  c->r[3]=c->r[30]+0xFFFFFFF8u; // 801B69F0
  if (!crb(c,1)) { goto L_801B6A7C; } // 801B69F4
  c->r[0]=c->r[3]+0x00000007u; // 801B69F8
  c->r[4]=c->r[31]|c->r[31]; // 801B69FC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801B6A00
  c->ctr=c->r[0]; // 801B6A04
  cmpu(c,0,c->r[3],0x00000000u); // 801B6A08
  if (!crb(c,1)) { goto L_801B6A7C; } // 801B6A0C
L_801B6A10:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B6A10
  c->r[5]=c->r[5]+0x00000008u; // 801B6A14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A18
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B6A1C
  c->r[0]=R32(c->r[4]+0x00000044u); // 801B6A20
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A24
  W32(c->r[4]+0x00000044u,c->r[0]); // 801B6A28
  c->r[0]=R32(c->r[4]+0x00000088u); // 801B6A2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A30
  W32(c->r[4]+0x00000088u,c->r[0]); // 801B6A34
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801B6A38
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A3C
  W32(c->r[4]+0x000000CCu,c->r[0]); // 801B6A40
  c->r[0]=R32(c->r[4]+0x00000110u); // 801B6A44
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A48
  W32(c->r[4]+0x00000110u,c->r[0]); // 801B6A4C
  c->r[0]=R32(c->r[4]+0x00000154u); // 801B6A50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A54
  W32(c->r[4]+0x00000154u,c->r[0]); // 801B6A58
  c->r[0]=R32(c->r[4]+0x00000198u); // 801B6A5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A60
  W32(c->r[4]+0x00000198u,c->r[0]); // 801B6A64
  c->r[0]=R32(c->r[4]+0x000001DCu); // 801B6A68
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A6C
  W32(c->r[4]+0x000001DCu,c->r[0]); // 801B6A70
  c->r[4]=c->r[4]+0x00000220u; // 801B6A74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B6A10; } // 801B6A78
L_801B6A7C:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 801B6A7C
  c->r[0]=c->r[30]-c->r[5]; // 801B6A80
  c->r[3]=c->r[31]+c->r[3]; // 801B6A84
  c->ctr=c->r[0]; // 801B6A88
  cmpu(c,0,c->r[5],c->r[30]); // 801B6A8C
  if (!crb(c,0)) { goto L_801B6AA8; } // 801B6A90
L_801B6A94:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B6A94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B6A98
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B6A9C
  c->r[3]=c->r[3]+0x00000044u; // 801B6AA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B6A94; } // 801B6AA4
L_801B6AA8:;
  c->r[27]=c->r[31]|c->r[31]; // 801B6AA8
  c->r[26]=0u+0x00000000u; // 801B6AAC
  goto L_801B6B34; // 801B6AB0
L_801B6AB4:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801B6AB4
  c->r[25]=0u+0x00000000u; // 801B6AB8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B6ABC
  if (!crb(c,2)) { goto L_801B6B2C; } // 801B6AC0
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B6AC4
  c->r[3]=c->r[28]|c->r[28]; // 801B6AC8
  c->r[4]=c->r[26]|c->r[26]; // 801B6ACC
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 801B6AD0
  c->ctr=c->r[12]; // 801B6AD4
  if (true) { c->lr=0x801B6ADCu; dispatch(c,c->ctr); } // 801B6AD8
  cmps(c,0,(int32_t)c->r[3],0); // 801B6ADC
  if (crb(c,2)) { goto L_801B6B0C; } // 801B6AE0
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B6AE4
  c->r[3]=c->r[28]|c->r[28]; // 801B6AE8
  c->r[4]=c->r[26]|c->r[26]; // 801B6AEC
  c->r[12]=R32(c->r[12]+0x00000078u); // 801B6AF0
  c->ctr=c->r[12]; // 801B6AF4
  if (true) { c->lr=0x801B6AFCu; dispatch(c,c->ctr); } // 801B6AF8
  cmpu(c,0,c->r[3],c->r[29]); // 801B6AFC
  if (!crb(c,0)) { goto L_801B6B0C; } // 801B6B00
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 801B6B04
  c->r[25]=c->r[31]+c->r[0]; // 801B6B08
L_801B6B0C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B6B0C
  c->r[3]=c->r[28]|c->r[28]; // 801B6B10
  c->r[4]=c->r[27]|c->r[27]; // 801B6B14
  c->r[5]=c->r[25]|c->r[25]; // 801B6B18
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801B6B1C
  c->r[6]=c->r[26]|c->r[26]; // 801B6B20
  c->ctr=c->r[12]; // 801B6B24
  if (true) { c->lr=0x801B6B2Cu; dispatch(c,c->ctr); } // 801B6B28
L_801B6B2C:;
  c->r[27]=c->r[27]+0x00000044u; // 801B6B2C
  c->r[26]=c->r[26]+0x00000001u; // 801B6B30
L_801B6B34:;
  cmpu(c,0,c->r[26],c->r[30]); // 801B6B34
  if (crb(c,0)) { IRQCHK(c); goto L_801B6AB4; } // 801B6B38
L_801B6B3C:;
  c->r[11]=c->r[1]+0x00000060u; // 801B6B3C
  c->lr=0x801B6B44u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6B40
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B6B44
  c->lr=c->r[0]; // 801B6B48
  c->r[1]=c->r[1]+0x00000060u; // 801B6B4C
  return; // 801B6B50
}

// Attach__Q34nw4r3g3d6AnmScnFiPQ34nw4r3g3d9AnmScnRes
void f_801B6B54(Ctx* __restrict c) {
  trace_call(0x801B6B54u);
  c->r[3]=0u+0x00000000u; // 801B6B54
  return; // 801B6B58
}

// Detach__Q34nw4r3g3d6AnmScnFi
void f_801B6B5C(Ctx* __restrict c) {
  trace_call(0x801B6B5Cu);
  c->r[3]=0u+0x00000000u; // 801B6B5C
  return; // 801B6B60
}

// __dt__Q34nw4r3g3d6AnmScnFv
void f_801B6B64(Ctx* __restrict c) {
  trace_call(0x801B6B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6B64
  c->r[0]=c->lr; // 801B6B68
  cmps(c,0,(int32_t)c->r[3],0); // 801B6B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6B70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6B74
  c->r[31]=c->r[3]|c->r[3]; // 801B6B78
  if (crb(c,2)) { goto L_801B6B88; } // 801B6B7C
  c->r[4]=0u+0x00000000u; // 801B6B80
  c->lr=0x801B6B88u; f_801B7AB0(c); // 801B6B84
L_801B6B88:;
  c->r[3]=c->r[31]|c->r[31]; // 801B6B88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6B90
  c->lr=c->r[0]; // 801B6B94
  c->r[1]=c->r[1]+0x00000010u; // 801B6B98
  return; // 801B6B9C
}

// GetNumLightSet__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BA0(Ctx* __restrict c) {
  trace_call(0x801B6BA0u);
  c->r[3]=c->r[3]+0x00000020u; // 801B6BA0
  f_801B0990(c); return; // 801B6BA4
}

// GetNumAmbLight__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BA8(Ctx* __restrict c) {
  trace_call(0x801B6BA8u);
  c->r[3]=c->r[3]+0x00000020u; // 801B6BA8
  f_801B0B44(c); return; // 801B6BAC
}

// GetNumDiffuseLight__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BB0(Ctx* __restrict c) {
  trace_call(0x801B6BB0u);
  c->r[3]=c->r[3]+0x00000020u; // 801B6BB0
  f_801B0CF8(c); return; // 801B6BB4
}

// GetNumSpecularLight__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BB8(Ctx* __restrict c) {
  trace_call(0x801B6BB8u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 801B6BB8
  c->r[3]=R16(c->r[3]+0x00000036u); // 801B6BBC
  return; // 801B6BC0
}

// GetNumFog__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BC4(Ctx* __restrict c) {
  trace_call(0x801B6BC4u);
  c->r[3]=c->r[3]+0x00000020u; // 801B6BC4
  f_801B0E24(c); return; // 801B6BC8
}

// GetNumCamera__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BCC(Ctx* __restrict c) {
  trace_call(0x801B6BCCu);
  c->r[3]=c->r[3]+0x00000020u; // 801B6BCC
  f_801B0F50(c); return; // 801B6BD0
}

// GetLightSetMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BD4(Ctx* __restrict c) {
  trace_call(0x801B6BD4u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 801B6BD4
  c->r[3]=R16(c->r[3]+0x0000003Cu); // 801B6BD8
  return; // 801B6BDC
}

// GetAmbLightMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BE0(Ctx* __restrict c) {
  trace_call(0x801B6BE0u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 801B6BE0
  c->r[3]=R16(c->r[3]+0x0000003Eu); // 801B6BE4
  return; // 801B6BE8
}

// GetDiffuseLightMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BEC(Ctx* __restrict c) {
  trace_call(0x801B6BECu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 801B6BEC
  c->r[3]=R16(c->r[3]+0x00000040u); // 801B6BF0
  return; // 801B6BF4
}

// GetFogMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
void f_801B6BF8(Ctx* __restrict c) {
  trace_call(0x801B6BF8u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 801B6BF8
  c->r[3]=R16(c->r[3]+0x00000042u); // 801B6BFC
  return; // 801B6C00
}

// GetCameraMaxRefNumber__Q34nw4r3g3d9AnmScnResCFv
void f_801B6C04(Ctx* __restrict c) {
  trace_call(0x801B6C04u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 801B6C04
  c->r[3]=R16(c->r[3]+0x00000044u); // 801B6C08
  return; // 801B6C0C
}

// Construct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmScnb
void f_801B6C10(Ctx* __restrict c) {
  trace_call(0x801B6C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6C10
  c->r[0]=c->lr; // 801B6C14
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B6C18
  c->r[11]=c->r[1]+0x00000040u; // 801B6C1C
  c->lr=0x801B6C24u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6C20
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B6C24
  c->r[29]=c->r[3]|c->r[3]; // 801B6C28
  c->r[30]=c->r[4]|c->r[4]; // 801B6C2C
  c->r[31]=c->r[5]|c->r[5]; // 801B6C30
  cmps(c,0,(int32_t)c->r[0],0); // 801B6C34
  c->r[22]=c->r[6]|c->r[6]; // 801B6C38
  if (!crb(c,2)) { goto L_801B6C48; } // 801B6C3C
  c->r[3]=0u+0x00000000u; // 801B6C40
  goto L_801B6D8C; // 801B6C44
L_801B6C48:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B6C48
  if (crb(c,2)) { goto L_801B6C60; } // 801B6C4C
  c->r[3]=c->r[31]|c->r[31]; // 801B6C50
  c->lr=0x801B6C58u; f_801B0B44(c); // 801B6C54
  c->r[26]=c->r[3]|c->r[3]; // 801B6C58
  goto L_801B6C64; // 801B6C5C
L_801B6C60:;
  c->r[26]=0u+0x00000000u; // 801B6C60
L_801B6C64:;
  cmps(c,0,(int32_t)c->r[22],0); // 801B6C64
  if (crb(c,2)) { goto L_801B6C7C; } // 801B6C68
  c->r[3]=c->r[31]|c->r[31]; // 801B6C6C
  c->lr=0x801B6C74u; f_801B0CF8(c); // 801B6C70
  c->r[27]=c->r[3]|c->r[3]; // 801B6C74
  goto L_801B6C80; // 801B6C78
L_801B6C7C:;
  c->r[27]=0u+0x00000000u; // 801B6C7C
L_801B6C80:;
  cmps(c,0,(int32_t)c->r[22],0); // 801B6C80
  if (crb(c,2)) { goto L_801B6C98; } // 801B6C84
  c->r[3]=c->r[31]|c->r[31]; // 801B6C88
  c->lr=0x801B6C90u; f_801B0E24(c); // 801B6C8C
  c->r[28]=c->r[3]|c->r[3]; // 801B6C90
  goto L_801B6C9C; // 801B6C94
L_801B6C98:;
  c->r[28]=0u+0x00000000u; // 801B6C98
L_801B6C9C:;
  cmps(c,0,(int32_t)c->r[22],0); // 801B6C9C
  if (crb(c,2)) { goto L_801B6CB0; } // 801B6CA0
  c->r[3]=c->r[31]|c->r[31]; // 801B6CA4
  c->lr=0x801B6CACu; f_801B0F50(c); // 801B6CA8
  goto L_801B6CB4; // 801B6CAC
L_801B6CB0:;
  c->r[3]=0u+0x00000000u; // 801B6CB0
L_801B6CB4:;
  c->r[25]=rotl(c->r[26],3)&0xFFFFFFF8u; // 801B6CB4
  c->r[24]=rotl(c->r[27],6)&0xFFFFFFC0u; // 801B6CB8
  c->r[0]=c->r[25]+0x0000003Bu; // 801B6CBC
  c->r[23]=rotl(c->r[28],4)&0xFFFFFFF0u; // 801B6CC0
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B6CC4
  cmps(c,0,(int32_t)c->r[30],0); // 801B6CC8
  c->r[4]=c->r[26]+c->r[24]; // 801B6CCC
  c->r[0]=c->r[4]+0x00000003u; // 801B6CD0
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B6CD4
  c->r[4]=c->r[27]+c->r[23]; // 801B6CD8
  c->r[0]=c->r[4]+0x00000003u; // 801B6CDC
  c->r[22]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801B6CE0
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B6CE4
  c->r[3]=c->r[28]+c->r[22]; // 801B6CE8
  c->r[0]=c->r[3]+0x00000003u; // 801B6CEC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B6CF0
  if (crb(c,2)) { goto L_801B6CFC; } // 801B6CF4
  W32(c->r[30]+0x00000000u,c->r[4]); // 801B6CF8
L_801B6CFC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B6CFC
  if (!crb(c,2)) { goto L_801B6D0C; } // 801B6D00
  c->r[3]=0u+0x00000000u; // 801B6D04
  goto L_801B6D8C; // 801B6D08
L_801B6D0C:;
  c->r[3]=c->r[29]|c->r[29]; // 801B6D0C
  c->lr=0x801B6D14u; f_80128068(c); // 801B6D10
  cmps(c,0,(int32_t)c->r[3],0); // 801B6D14
  if (!crb(c,2)) { goto L_801B6D24; } // 801B6D18
  c->r[3]=0u+0x00000000u; // 801B6D1C
  goto L_801B6D8C; // 801B6D20
L_801B6D24:;
  if (crb(c,2)) { goto L_801B6D8C; } // 801B6D24
  cmps(c,0,(int32_t)c->r[22],0); // 801B6D28
  if (crb(c,2)) { goto L_801B6D38; } // 801B6D2C
  c->r[9]=c->r[3]+c->r[28]; // 801B6D30
  goto L_801B6D3C; // 801B6D34
L_801B6D38:;
  c->r[9]=0u+0x00000000u; // 801B6D38
L_801B6D3C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801B6D3C
  if (crb(c,2)) { goto L_801B6D4C; } // 801B6D40
  c->r[8]=c->r[3]+c->r[27]; // 801B6D44
  goto L_801B6D50; // 801B6D48
L_801B6D4C:;
  c->r[8]=0u+0x00000000u; // 801B6D4C
L_801B6D50:;
  cmps(c,0,(int32_t)c->r[24],0); // 801B6D50
  if (crb(c,2)) { goto L_801B6D60; } // 801B6D54
  c->r[7]=c->r[3]+c->r[26]; // 801B6D58
  goto L_801B6D64; // 801B6D5C
L_801B6D60:;
  c->r[7]=0u+0x00000000u; // 801B6D60
L_801B6D64:;
  cmps(c,0,(int32_t)c->r[25],0); // 801B6D64
  if (crb(c,2)) { goto L_801B6D74; } // 801B6D68
  c->r[6]=c->r[3]+0x00000038u; // 801B6D6C
  goto L_801B6D78; // 801B6D70
L_801B6D74:;
  c->r[6]=0u+0x00000000u; // 801B6D74
L_801B6D78:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B6D78
  c->r[4]=c->r[29]|c->r[29]; // 801B6D7C
  c->r[5]=c->r[1]+0x00000008u; // 801B6D80
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B6D84
  c->lr=0x801B6D8Cu; f_801B6DA4(c); // 801B6D88
L_801B6D8C:;
  c->r[11]=c->r[1]+0x00000040u; // 801B6D8C
  c->lr=0x801B6D94u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6D90
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B6D94
  c->lr=c->r[0]; // 801B6D98
  c->r[1]=c->r[1]+0x00000040u; // 801B6D9C
  return; // 801B6DA0
}

// __ct__Q34nw4r3g3d9AnmScnResFP12MEMAllocatorQ34nw4r3g3d9ResAnmScnPQ34nw4r3g3d17AmbLightAnmResultPQ34nw4r3g3d14LightAnmResultPQ34nw4r3g3d12FogAnmResultPQ34nw4r3g3d15CameraAnmResult
void f_801B6DA4(Ctx* __restrict c) {
  trace_call(0x801B6DA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6DA4
  c->r[0]=c->lr; // 801B6DA8
  c->r[12]=0u+0x802A0000u; // 801B6DAC
  c->r[10]=0u+0x802A0000u; // 801B6DB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6DB4
  c->r[0]=0u+0x43300000u; // 801B6DB8
  c->r[12]=c->r[12]+0x00001368u; // 801B6DBC
  {uint32_t ea=c->r[2]+0xFFFF9B98u; c->f[3]=RF64(ea);} // 801B6DC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B6DC4
  c->r[31]=0u+0x00000000u; // 801B6DC8
  c->r[11]=c->r[13]+0xFFFF89ACu; // 801B6DCC
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6DD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6DD4
  cmps(c,0,(int32_t)c->r[6],0); // 801B6DD8
  c->r[30]=R32(c->r[5]+0x00000000u); // 801B6DDC
  c->r[10]=c->r[10]+0x000012D8u; // 801B6DE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B6DE4
  c->r[29]=c->r[3]|c->r[3]; // 801B6DE8
  {uint32_t ea=c->r[2]+0xFFFF9B90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6DEC
  W32(c->r[3]+0x00000004u,c->r[31]); // 801B6DF0
  W32(c->r[3]+0x00000008u,c->r[4]); // 801B6DF4
  W32(c->r[3]+0x00000000u,c->r[12]); // 801B6DF8
  c->r[4]=R16(c->r[30]+0x00000034u); // 801B6DFC
  c->r[12]=R32(c->r[30]+0x00000038u); // 801B6E00
  c->r[4]=c->r[4]^0x80000000u; // 801B6E04
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B6E08
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 801B6E0C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B6E10
  c->r[4]=R32(c->r[11]+c->r[0]); // 801B6E14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801B6E18
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B6E1C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801B6E20
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B6E24
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801B6E28
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801B6E2C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801B6E30
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 801B6E34
  W32(c->r[3]+0x00000000u,c->r[10]); // 801B6E38
  W32(c->r[3]+0x00000020u,c->r[0]); // 801B6E3C
  W32(c->r[3]+0x00000024u,c->r[31]); // 801B6E40
  W32(c->r[3]+0x00000028u,c->r[6]); // 801B6E44
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 801B6E48
  W32(c->r[3]+0x00000030u,c->r[8]); // 801B6E4C
  W32(c->r[3]+0x00000034u,c->r[9]); // 801B6E50
  if (!crb(c,2)) { goto L_801B6E70; } // 801B6E54
  cmps(c,0,(int32_t)c->r[7],0); // 801B6E58
  if (!crb(c,2)) { goto L_801B6E70; } // 801B6E5C
  cmps(c,0,(int32_t)c->r[8],0); // 801B6E60
  if (!crb(c,2)) { goto L_801B6E70; } // 801B6E64
  cmps(c,0,(int32_t)c->r[9],0); // 801B6E68
  if (crb(c,2)) { goto L_801B6E7C; } // 801B6E6C
L_801B6E70:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 801B6E70
  c->r[0]=c->r[0]|0x00000001u; // 801B6E74
  W32(c->r[3]+0x00000024u,c->r[0]); // 801B6E78
L_801B6E7C:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 801B6E7C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B6E80
  if (crb(c,2)) { goto L_801B6E90; } // 801B6E84
  c->r[3]=c->r[29]|c->r[29]; // 801B6E88
  c->lr=0x801B6E90u; f_801B783C(c); // 801B6E8C
L_801B6E90:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6E90
  c->r[3]=c->r[29]|c->r[29]; // 801B6E94
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B6E98
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6E9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6EA0
  c->lr=c->r[0]; // 801B6EA4
  c->r[1]=c->r[1]+0x00000020u; // 801B6EA8
  return; // 801B6EAC
}

// __dt__Q34nw4r3g3d9AnmScnResFv
void f_801B6EB0(Ctx* __restrict c) {
  trace_call(0x801B6EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6EB0
  c->r[0]=c->lr; // 801B6EB4
  cmps(c,0,(int32_t)c->r[3],0); // 801B6EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6EBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6EC0
  c->r[31]=c->r[3]|c->r[3]; // 801B6EC4
  if (crb(c,2)) { goto L_801B6ED8; } // 801B6EC8
  if (crb(c,2)) { goto L_801B6ED8; } // 801B6ECC
  c->r[4]=0u+0x00000000u; // 801B6ED0
  c->lr=0x801B6ED8u; f_801B7AB0(c); // 801B6ED4
L_801B6ED8:;
  c->r[3]=c->r[31]|c->r[31]; // 801B6ED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6EDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6EE0
  c->lr=c->r[0]; // 801B6EE4
  c->r[1]=c->r[1]+0x00000010u; // 801B6EE8
  return; // 801B6EEC
}

// SetFrame__Q34nw4r3g3d9AnmScnResFf
void f_801B6EF0(Ctx* __restrict c) {
  trace_call(0x801B6EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6EF0
  c->r[0]=c->lr; // 801B6EF4
  c->f[3]=c->f[1]; // 801B6EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6EFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6F00
  c->r[31]=c->r[3]|c->r[3]; // 801B6F04
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801B6F08
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6F0C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6F10
  c->ctr=c->r[12]; // 801B6F14
  if (true) { c->lr=0x801B6F1Cu; dispatch(c,c->ctr); } // 801B6F18
  c->r[0]=R32(c->r[31]+0x00000024u); // 801B6F1C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B6F20
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B6F24
  if (crb(c,2)) { goto L_801B6F34; } // 801B6F28
  c->r[3]=c->r[31]|c->r[31]; // 801B6F2C
  c->lr=0x801B6F34u; f_801B783C(c); // 801B6F30
L_801B6F34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6F34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6F38
  c->lr=c->r[0]; // 801B6F3C
  c->r[1]=c->r[1]+0x00000010u; // 801B6F40
  return; // 801B6F44
}

// GetFrame__Q34nw4r3g3d9AnmScnResCFv
void f_801B6F48(Ctx* __restrict c) {
  trace_call(0x801B6F48u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6F48
  return; // 801B6F4C
}

// SetUpdateRate__Q34nw4r3g3d9AnmScnResFf
void f_801B6F50(Ctx* __restrict c) {
  trace_call(0x801B6F50u);
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6F50
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801B6F54
  fcmp(c,0,c->f[0],c->f[1]); // 801B6F58
  if (!crb(c,2)) return; // 801B6F5C
  c->r[0]=R32(c->r[3]+0x00000024u); // 801B6F60
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B6F64
  if (crb(c,2)) return; // 801B6F68
  f_801B783C(c); return; // 801B6F6C
  return; // 801B6F70
}

// GetUpdateRate__Q34nw4r3g3d9AnmScnResCFv
void f_801B6F74(Ctx* __restrict c) {
  trace_call(0x801B6F74u);
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6F74
  return; // 801B6F78
}

// UpdateFrame__Q34nw4r3g3d9AnmScnResFv
void f_801B6F7C(Ctx* __restrict c) {
  trace_call(0x801B6F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6F7C
  c->r[0]=c->lr; // 801B6F80
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6F84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6F88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6F8C
  c->r[31]=c->r[3]|c->r[3]; // 801B6F90
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6F94
  fcmp(c,0,c->f[0],c->f[1]); // 801B6F98
  if (crb(c,2)) { goto L_801B6FE0; } // 801B6F9C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6FA0
  {uint32_t ea=c->r[13]+0xFFFF9078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6FA4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6FA8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 801B6FAC
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801B6FB0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6FB4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6FB8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 801B6FBC
  c->ctr=c->r[12]; // 801B6FC0
  if (true) { c->lr=0x801B6FC8u; dispatch(c,c->ctr); } // 801B6FC4
  c->r[0]=R32(c->r[31]+0x00000024u); // 801B6FC8
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B6FCC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B6FD0
  if (crb(c,2)) { goto L_801B6FE0; } // 801B6FD4
  c->r[3]=c->r[31]|c->r[31]; // 801B6FD8
  c->lr=0x801B6FE0u; f_801B783C(c); // 801B6FDC
L_801B6FE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6FE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6FE4
  c->lr=c->r[0]; // 801B6FE8
  c->r[1]=c->r[1]+0x00000010u; // 801B6FEC
  return; // 801B6FF0
}

// G3dProc__Q34nw4r3g3d9AnmScnResFUlUlPv
void f_801B6FF4(Ctx* __restrict c) {
  trace_call(0x801B6FF4u);
  c->r[5]=0u+0x00010000u; // 801B6FF4
  c->r[0]=c->r[5]+0x00000002u; // 801B6FF8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B6FFC
  if (crb(c,2)) { goto L_801B7040; } // 801B7000
  if (!crb(c,0)) { goto L_801B7014; } // 801B7004
  cmps(c,0,(int32_t)c->r[4],8); // 801B7008
  if (crb(c,2)) { goto L_801B7024; } // 801B700C
  return; // 801B7010
L_801B7014:;
  c->r[0]=c->r[5]+0x00000004u; // 801B7014
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B7018
  if (!crb(c,0)) return; // 801B701C
  goto L_801B7034; // 801B7020
L_801B7024:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B7024
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801B7028
  c->ctr=c->r[12]; // 801B702C
  if (true) { dispatch(c,c->ctr); return; } // 801B7030
L_801B7034:;
  c->r[0]=0u+0x00000000u; // 801B7034
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B7038
  return; // 801B703C
L_801B7040:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 801B7040
  return; // 801B7044
}

// GetLightSet__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d8LightSetUl
void f_801B7048(Ctx* __restrict c) {
  trace_call(0x801B7048u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7048
  c->r[0]=c->lr; // 801B704C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B7050
  c->r[11]=c->r[1]+0x00000030u; // 801B7054
  c->lr=0x801B705Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7058
  c->r[24]=c->r[3]|c->r[3]; // 801B705C
  c->r[25]=c->r[4]|c->r[4]; // 801B7060
  c->r[4]=c->r[5]|c->r[5]; // 801B7064
  c->r[3]=c->r[3]+0x00000020u; // 801B7068
  c->lr=0x801B7070u; f_801B0FD0(c); // 801B706C
  cmps(c,0,(int32_t)c->r[3],0); // 801B7070
  c->r[30]=c->r[3]|c->r[3]; // 801B7074
  if (!crb(c,2)) { goto L_801B7084; } // 801B7078
  c->r[3]=0u+0x00000000u; // 801B707C
  goto L_801B7168; // 801B7080
L_801B7084:;
  c->r[26]=R8(c->r[3]+0x0000001Au); // 801B7084
  c->r[28]=0u+0x00000007u; // 801B7088
  c->r[27]=0u+0x00000000u; // 801B708C
  cmps(c,0,(int32_t)c->r[26],0); // 801B7090
  if (crb(c,2)) { goto L_801B7124; } // 801B7094
  c->r[29]=c->r[30]|c->r[30]; // 801B7098
  goto L_801B7104; // 801B709C
L_801B70A0:;
  c->r[4]=R16(c->r[29]+0x0000003Cu); // 801B70A0
  cmpu(c,0,c->r[4],0x0000FFFFu); // 801B70A4
  if (crb(c,2)) { goto L_801B70EC; } // 801B70A8
  c->r[3]=c->r[24]+0x00000020u; // 801B70AC
  c->lr=0x801B70B4u; f_801B0C4C(c); // 801B70B0
  c->r[31]=c->r[3]|c->r[3]; // 801B70B4
  c->r[3]=c->r[25]|c->r[25]; // 801B70B8
  c->r[5]=R32(c->r[31]+0x00000010u); // 801B70BC
  c->r[4]=c->r[27]|c->r[27]; // 801B70C0
  c->lr=0x801B70C8u; f_801CE708(c); // 801B70C4
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801B70C8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801B70CC
  if (crb(c,2)) { goto L_801B70FC; } // 801B70D0
  c->r[5]=R32(c->r[31]+0x00000014u); // 801B70D4
  c->r[4]=c->r[28]|c->r[28]; // 801B70D8
  c->r[3]=c->r[25]|c->r[25]; // 801B70DC
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 801B70E0
  c->lr=0x801B70E8u; f_801CE708(c); // 801B70E4
  goto L_801B70FC; // 801B70E8
L_801B70EC:;
  c->r[3]=c->r[25]|c->r[25]; // 801B70EC
  c->r[4]=c->r[27]|c->r[27]; // 801B70F0
  c->r[5]=0u+0xFFFFFFFFu; // 801B70F4
  c->lr=0x801B70FCu; f_801CE708(c); // 801B70F8
L_801B70FC:;
  c->r[29]=c->r[29]+0x00000002u; // 801B70FC
  c->r[27]=c->r[27]+0x00000001u; // 801B7100
L_801B7104:;
  cmpu(c,0,c->r[27],c->r[26]); // 801B7104
  if (crb(c,0)) { IRQCHK(c); goto L_801B70A0; } // 801B7108
  goto L_801B7124; // 801B710C
L_801B7110:;
  c->r[3]=c->r[25]|c->r[25]; // 801B7110
  c->r[4]=c->r[26]|c->r[26]; // 801B7114
  c->r[5]=0u+0xFFFFFFFFu; // 801B7118
  c->lr=0x801B7120u; f_801CE708(c); // 801B711C
  c->r[26]=c->r[26]+0x00000001u; // 801B7120
L_801B7124:;
  cmpu(c,0,c->r[26],c->r[28]); // 801B7124
  if (!crb(c,1)) { IRQCHK(c); goto L_801B7110; } // 801B7128
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B712C
  cmps(c,0,(int32_t)c->r[0],0); // 801B7130
  if (crb(c,2)) { goto L_801B7158; } // 801B7134
  c->r[4]=R16(c->r[30]+0x00000018u); // 801B7138
  c->r[3]=c->r[24]+0x00000020u; // 801B713C
  c->lr=0x801B7144u; f_801B0A98(c); // 801B7140
  c->r[4]=c->r[3]|c->r[3]; // 801B7144
  c->r[3]=c->r[25]|c->r[25]; // 801B7148
  c->r[4]=R32(c->r[4]+0x00000010u); // 801B714C
  c->lr=0x801B7154u; f_801CE778(c); // 801B7150
  goto L_801B7164; // 801B7154
L_801B7158:;
  c->r[3]=c->r[25]|c->r[25]; // 801B7158
  c->r[4]=0u+0xFFFFFFFFu; // 801B715C
  c->lr=0x801B7164u; f_801CE778(c); // 801B7160
L_801B7164:;
  c->r[3]=0u+0x00000001u; // 801B7164
L_801B7168:;
  c->r[11]=c->r[1]+0x00000030u; // 801B7168
  c->lr=0x801B7170u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B716C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B7170
  c->lr=c->r[0]; // 801B7174
  c->r[1]=c->r[1]+0x00000030u; // 801B7178
  return; // 801B717C
}

// GetAmbLightColor__Q34nw4r3g3d9AnmScnResFUl
void f_801B7180(Ctx* __restrict c) {
  trace_call(0x801B7180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7180
  c->r[0]=c->lr; // 801B7184
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7188
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B718C
  c->r[31]=c->r[3]|c->r[3]; // 801B7190
  c->r[3]=c->r[4]|c->r[4]; // 801B7194
  c->r[12]=R32(c->r[4]+0x00000000u); // 801B7198
  c->r[4]=c->r[1]+0x00000008u; // 801B719C
  c->r[12]=R32(c->r[12]+0x00000080u); // 801B71A0
  c->ctr=c->r[12]; // 801B71A4
  if (true) { c->lr=0x801B71ACu; dispatch(c,c->ctr); } // 801B71A8
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B71AC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B71B0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801B71B4
  if (!crb(c,2)) { goto L_801B71C4; } // 801B71B8
  c->r[0]=0u+0xFFFFFF00u; // 801B71BC
  c->r[3]=c->r[3]|c->r[0]; // 801B71C0
L_801B71C4:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801B71C4
  if (!crb(c,2)) { goto L_801B71D0; } // 801B71C8
  c->r[3]=c->r[3]|0x000000FFu; // 801B71CC
L_801B71D0:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 801B71D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B71D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B71D8
  c->lr=c->r[0]; // 801B71DC
  c->r[1]=c->r[1]+0x00000020u; // 801B71E0
  return; // 801B71E4
}

// GetLight__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d8LightObjUl
void f_801B71E8(Ctx* __restrict c) {
  trace_call(0x801B71E8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B71E8
  c->r[0]=c->lr; // 801B71EC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B71F0
  c->r[0]=0u+0xFFFFFFFFu; // 801B71F4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801B71F8
  c->r[31]=c->r[5]|c->r[5]; // 801B71FC
  c->r[5]=c->r[6]|c->r[6]; // 801B7200
  W32(c->r[1]+0x00000068u,c->r[30]); // 801B7204
  W32(c->r[1]+0x00000064u,c->r[29]); // 801B7208
  c->r[29]=c->r[4]|c->r[4]; // 801B720C
  c->r[4]=c->r[1]+0x00000018u; // 801B7210
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B7214
  W32(c->r[1]+0x00000050u,c->r[0]); // 801B7218
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B721C
  c->r[12]=R32(c->r[12]+0x00000084u); // 801B7220
  c->ctr=c->r[12]; // 801B7224
  if (true) { c->lr=0x801B722Cu; dispatch(c,c->ctr); } // 801B7228
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B722C
  c->r[30]=c->r[3]|c->r[3]; // 801B7230
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B7234
  if (crb(c,2)) { goto L_801B7334; } // 801B7238
  cmps(c,0,(int32_t)c->r[29],0); // 801B723C
  if (crb(c,2)) { goto L_801B7250; } // 801B7240
  c->r[3]=c->r[29]|c->r[29]; // 801B7244
  c->r[4]=c->r[30]|c->r[30]; // 801B7248
  c->lr=0x801B7250u; f_801B65C0(c); // 801B724C
L_801B7250:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B7250
  if (crb(c,2)) { goto L_801B735C; } // 801B7254
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B7258
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801B725C
  if (crb(c,2)) { goto L_801B7324; } // 801B7260
  {uint32_t ea=c->r[30]+0x00000014u; psq_load(c,1,ea,0,0);} // 801B7264
  c->r[3]=c->r[1]+0x0000000Cu; // 801B7268
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 801B726C
  c->r[4]=c->r[3]|c->r[3]; // 801B7270
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801B7274
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801B7278
  {uint32_t ea=c->r[30]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 801B727C
  {uint32_t ea=c->r[30]+0x00000010u; psq_load(c,0,ea,1,0);} // 801B7280
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801B7284
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 801B7288
  c->lr=0x801B7290u; f_800ECFD0(c); // 801B728C
  c->r[3]=c->r[31]|c->r[31]; // 801B7290
  c->lr=0x801B7298u; f_801CDD1C(c); // 801B7294
  c->r[0]=R8(c->r[30]+0x00000038u); // 801B7298
  c->r[4]=c->r[1]+0x00000008u; // 801B729C
  c->r[3]=c->r[31]|c->r[31]; // 801B72A0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B72A4
  c->r[0]=R8(c->r[30]+0x00000039u); // 801B72A8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B72AC
  c->r[0]=R8(c->r[30]+0x0000003Au); // 801B72B0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801B72B4
  c->r[0]=R8(c->r[30]+0x0000003Bu); // 801B72B8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801B72BC
  c->lr=0x801B72C4u; f_801CDD30(c); // 801B72C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B72C4
  c->r[3]=c->r[31]|c->r[31]; // 801B72C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B72CC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B72D0
  c->lr=0x801B72D8u; f_801CDEF4(c); // 801B72D4
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B72D8
  c->r[3]=c->r[31]|c->r[31]; // 801B72DC
  c->lr=0x801B72E4u; f_801CDF34(c); // 801B72E0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B72E4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B72E8
  if (!crb(c,2)) { goto L_801B72FC; } // 801B72EC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B72F0
  c->r[0]=c->r[0]|0x00000010u; // 801B72F4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B72F8
L_801B72FC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B72FC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B7300
  if (!crb(c,2)) { goto L_801B7314; } // 801B7304
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B7308
  c->r[0]=c->r[0]|0x00000020u; // 801B730C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B7310
L_801B7314:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B7314
  c->r[0]=c->r[0]|0x00000004u; // 801B7318
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B731C
  goto L_801B735C; // 801B7320
L_801B7324:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B7324
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B7328
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B732C
  goto L_801B735C; // 801B7330
L_801B7334:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B7334
  if (crb(c,2)) { goto L_801B7348; } // 801B7338
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B733C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B7340
  W32(c->r[29]+0x00000000u,c->r[0]); // 801B7344
L_801B7348:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B7348
  if (crb(c,2)) { goto L_801B735C; } // 801B734C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B7350
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B7354
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B7358
L_801B735C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B735C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801B7360
  c->r[30]=R32(c->r[1]+0x00000068u); // 801B7364
  c->r[29]=R32(c->r[1]+0x00000064u); // 801B7368
  c->lr=c->r[0]; // 801B736C
  c->r[1]=c->r[1]+0x00000070u; // 801B7370
  return; // 801B7374
}

// GetFog__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d3FogUl
void f_801B7378(Ctx* __restrict c) {
  trace_call(0x801B7378u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7378
  c->r[0]=c->lr; // 801B737C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B7380
  c->r[0]=0u+0xFFFFFFFFu; // 801B7384
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B7388
  c->r[31]=c->r[4]|c->r[4]; // 801B738C
  c->r[4]=c->r[1]+0x00000010u; // 801B7390
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B7394
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B7398
  c->r[12]=R32(c->r[12]+0x00000088u); // 801B739C
  c->ctr=c->r[12]; // 801B73A0
  if (true) { c->lr=0x801B73A8u; dispatch(c,c->ctr); } // 801B73A4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B73A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B73AC
  cmps(c,0,(int32_t)c->r[4],0); // 801B73B0
  if (crb(c,2)) { goto L_801B73BC; } // 801B73B4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B73B8
L_801B73BC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B73BC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B73C0
  cmps(c,0,(int32_t)c->r[4],0); // 801B73C4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B73C8
  if (crb(c,2)) { goto L_801B73D8; } // 801B73CC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 801B73D0
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 801B73D4
L_801B73D8:;
  c->r[7]=R32(c->r[31]+0x00000000u); // 801B73D8
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 801B73DC
  c->r[5]=R8(c->r[3]+0x0000000Du); // 801B73E0
  cmps(c,0,(int32_t)c->r[7],0); // 801B73E4
  c->r[4]=R8(c->r[3]+0x0000000Eu); // 801B73E8
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801B73EC
  W8(c->r[1]+0x00000008u,c->r[6]); // 801B73F0
  W8(c->r[1]+0x00000009u,c->r[5]); // 801B73F4
  W8(c->r[1]+0x0000000Au,c->r[4]); // 801B73F8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801B73FC
  if (crb(c,2)) { goto L_801B7414; } // 801B7400
  W8(c->r[7]+0x00000014u,c->r[6]); // 801B7404
  W8(c->r[7]+0x00000015u,c->r[5]); // 801B7408
  W8(c->r[7]+0x00000016u,c->r[4]); // 801B740C
  W8(c->r[7]+0x00000017u,c->r[0]); // 801B7410
L_801B7414:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B7414
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B7418
  c->lr=c->r[0]; // 801B741C
  c->r[1]=c->r[1]+0x00000030u; // 801B7420
  return; // 801B7424
}

// GetCamera__Q34nw4r3g3d9AnmScnResFQ34nw4r3g3d6CameraUl
void f_801B7428(Ctx* __restrict c) {
  trace_call(0x801B7428u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7428
  c->r[0]=c->lr; // 801B742C
  W32(c->r[1]+0x00000094u,c->r[0]); // 801B7430
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801B7434
  W32(c->r[1]+0x00000088u,c->r[30]); // 801B7438
  c->r[30]=c->r[4]|c->r[4]; // 801B743C
  c->r[4]=c->r[1]+0x0000004Cu; // 801B7440
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B7444
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 801B7448
  c->ctr=c->r[12]; // 801B744C
  if (true) { c->lr=0x801B7454u; dispatch(c,c->ctr); } // 801B7450
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B7454
  c->r[31]=c->r[3]|c->r[3]; // 801B7458
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B745C
  if (!crb(c,2)) { goto L_801B746C; } // 801B7460
  c->r[3]=0u+0x00000000u; // 801B7464
  goto L_801B7570; // 801B7468
L_801B746C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B746C
  cmps(c,0,(int32_t)c->r[0],1); // 801B7470
  if (crb(c,2)) { goto L_801B74A4; } // 801B7474
  if (!crb(c,0)) { goto L_801B74D0; } // 801B7478
  cmps(c,0,(int32_t)c->r[0],0); // 801B747C
  if (!crb(c,0)) { goto L_801B7488; } // 801B7480
  goto L_801B74D0; // 801B7484
L_801B7488:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B7488
  c->r[3]=c->r[30]|c->r[30]; // 801B748C
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B7490
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B7494
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801B7498
  c->lr=0x801B74A0u; f_801C16FC(c); // 801B749C
  goto L_801B74D0; // 801B74A0
L_801B74A4:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B74A4
  {uint32_t ea=c->r[2]+0xFFFF9BA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B74A8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B74AC
  c->r[3]=c->r[30]|c->r[30]; // 801B74B0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801B74B4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B74B8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801B74BC
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 801B74C0
  c->f[2]=-c->f[1]; // 801B74C4
  c->f[3]=-c->f[4]; // 801B74C8
  c->lr=0x801B74D0u; f_801C1774(c); // 801B74CC
L_801B74D0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B74D0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801B74D4
  cmps(c,0,(int32_t)c->r[0],1); // 801B74D8
  if (crb(c,2)) { goto L_801B7520; } // 801B74DC
  if (!crb(c,0)) { goto L_801B7554; } // 801B74E0
  cmps(c,0,(int32_t)c->r[0],0); // 801B74E4
  if (!crb(c,0)) { goto L_801B74F0; } // 801B74E8
  goto L_801B7554; // 801B74EC
L_801B74F0:;
  c->r[0]=0u+0x00000001u; // 801B74F0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B74F4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B74F8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B74FC
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7500
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801B7504
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B7508
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B750C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 801B7510
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B7514
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801B7518
  goto L_801B7554; // 801B751C
L_801B7520:;
  c->r[0]=0u+0x00000002u; // 801B7520
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B7524
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7528
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B752C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B7530
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801B7534
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801B7538
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 801B753C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 801B7540
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7544
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801B7548
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B754C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801B7550
L_801B7554:;
  c->r[3]=c->r[30]|c->r[30]; // 801B7554
  c->r[4]=c->r[31]+0x00000008u; // 801B7558
  c->lr=0x801B7560u; f_801C137C(c); // 801B755C
  c->r[3]=c->r[30]|c->r[30]; // 801B7560
  c->r[4]=c->r[1]+0x00000020u; // 801B7564
  c->lr=0x801B756Cu; f_801C13E0(c); // 801B7568
  c->r[3]=0u+0x00000001u; // 801B756C
L_801B7570:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801B7570
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801B7574
  c->r[30]=R32(c->r[1]+0x00000088u); // 801B7578
  c->lr=c->r[0]; // 801B757C
  c->r[1]=c->r[1]+0x00000090u; // 801B7580
  return; // 801B7584
}

// GetAmbLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d17AmbLightAnmResultUl
void f_801B7588(Ctx* __restrict c) {
  trace_call(0x801B7588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7588
  c->r[0]=c->lr; // 801B758C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7590
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7594
  c->r[31]=c->r[4]|c->r[4]; // 801B7598
  c->r[4]=c->r[5]|c->r[5]; // 801B759C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B75A0
  c->r[30]=c->r[3]|c->r[3]; // 801B75A4
  c->r[3]=c->r[3]+0x00000020u; // 801B75A8
  c->lr=0x801B75B0u; f_801B101C(c); // 801B75AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B75B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B75B4
  if (!crb(c,2)) { goto L_801B75D4; } // 801B75B8
  c->r[3]=0u+0x00000000u; // 801B75BC
  c->r[0]=0u+0xFFFFFFFFu; // 801B75C0
  W32(c->r[31]+0x00000000u,c->r[3]); // 801B75C4
  c->r[3]=c->r[31]|c->r[31]; // 801B75C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B75CC
  goto L_801B7604; // 801B75D0
L_801B75D4:;
  c->r[4]=R32(c->r[30]+0x00000028u); // 801B75D4
  cmps(c,0,(int32_t)c->r[4],0); // 801B75D8
  if (crb(c,2)) { goto L_801B75F0; } // 801B75DC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B75E0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B75E4
  c->r[3]=c->r[4]+c->r[0]; // 801B75E8
  goto L_801B7604; // 801B75EC
L_801B75F0:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B75F0
  c->r[4]=c->r[31]|c->r[31]; // 801B75F4
  c->r[3]=c->r[1]+0x00000008u; // 801B75F8
  c->lr=0x801B7600u; f_801AFF90(c); // 801B75FC
  c->r[3]=c->r[31]|c->r[31]; // 801B7600
L_801B7604:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7604
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B7608
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B760C
  c->lr=c->r[0]; // 801B7610
  c->r[1]=c->r[1]+0x00000020u; // 801B7614
  return; // 801B7618
}

// GetLightResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d14LightAnmResultUl
void f_801B761C(Ctx* __restrict c) {
  trace_call(0x801B761Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B761C
  c->r[0]=c->lr; // 801B7620
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7624
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7628
  c->r[31]=c->r[4]|c->r[4]; // 801B762C
  c->r[4]=c->r[5]|c->r[5]; // 801B7630
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B7634
  c->r[30]=c->r[3]|c->r[3]; // 801B7638
  c->r[3]=c->r[3]+0x00000020u; // 801B763C
  c->lr=0x801B7644u; f_801B1068(c); // 801B7640
  cmps(c,0,(int32_t)c->r[3],0); // 801B7644
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B7648
  if (!crb(c,2)) { goto L_801B7660; } // 801B764C
  c->r[0]=0u+0x00000000u; // 801B7650
  c->r[3]=c->r[31]|c->r[31]; // 801B7654
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B7658
  goto L_801B7690; // 801B765C
L_801B7660:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801B7660
  cmps(c,0,(int32_t)c->r[4],0); // 801B7664
  if (crb(c,2)) { goto L_801B767C; } // 801B7668
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B766C
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 801B7670
  c->r[3]=c->r[4]+c->r[0]; // 801B7674
  goto L_801B7690; // 801B7678
L_801B767C:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B767C
  c->r[4]=c->r[31]|c->r[31]; // 801B7680
  c->r[3]=c->r[1]+0x00000008u; // 801B7684
  c->lr=0x801B768Cu; f_801B0060(c); // 801B7688
  c->r[3]=c->r[31]|c->r[31]; // 801B768C
L_801B7690:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7690
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B7694
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B7698
  c->lr=c->r[0]; // 801B769C
  c->r[1]=c->r[1]+0x00000020u; // 801B76A0
  return; // 801B76A4
}

// GetFogResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d12FogAnmResultUl
void f_801B76A8(Ctx* __restrict c) {
  trace_call(0x801B76A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B76A8
  c->r[0]=c->lr; // 801B76AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B76B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B76B4
  c->r[31]=c->r[4]|c->r[4]; // 801B76B8
  c->r[4]=c->r[5]|c->r[5]; // 801B76BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B76C0
  c->r[30]=c->r[3]|c->r[3]; // 801B76C4
  c->r[3]=c->r[3]+0x00000020u; // 801B76C8
  c->lr=0x801B76D0u; f_801B10B4(c); // 801B76CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B76D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B76D4
  if (!crb(c,2)) { goto L_801B76EC; } // 801B76D8
  c->r[0]=0u+0x00000000u; // 801B76DC
  c->r[3]=c->r[31]|c->r[31]; // 801B76E0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B76E4
  goto L_801B771C; // 801B76E8
L_801B76EC:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 801B76EC
  cmps(c,0,(int32_t)c->r[4],0); // 801B76F0
  if (crb(c,2)) { goto L_801B7708; } // 801B76F4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B76F8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801B76FC
  c->r[3]=c->r[4]+c->r[0]; // 801B7700
  goto L_801B771C; // 801B7704
L_801B7708:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B7708
  c->r[4]=c->r[31]|c->r[31]; // 801B770C
  c->r[3]=c->r[1]+0x00000008u; // 801B7710
  c->lr=0x801B7718u; f_801B0458(c); // 801B7714
  c->r[3]=c->r[31]|c->r[31]; // 801B7718
L_801B771C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B771C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B7720
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B7724
  c->lr=c->r[0]; // 801B7728
  c->r[1]=c->r[1]+0x00000020u; // 801B772C
  return; // 801B7730
}

// GetCameraResult__Q34nw4r3g3d9AnmScnResFPQ34nw4r3g3d15CameraAnmResultUl
void f_801B7734(Ctx* __restrict c) {
  trace_call(0x801B7734u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7734
  c->r[0]=c->lr; // 801B7738
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B773C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7740
  c->r[31]=c->r[4]|c->r[4]; // 801B7744
  c->r[4]=c->r[5]|c->r[5]; // 801B7748
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B774C
  c->r[30]=c->r[3]|c->r[3]; // 801B7750
  c->r[3]=c->r[3]+0x00000020u; // 801B7754
  c->lr=0x801B775Cu; f_801B1100(c); // 801B7758
  cmps(c,0,(int32_t)c->r[3],0); // 801B775C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B7760
  if (!crb(c,2)) { goto L_801B7778; } // 801B7764
  c->r[0]=0u+0x00000000u; // 801B7768
  c->r[3]=c->r[31]|c->r[31]; // 801B776C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B7770
  goto L_801B77A8; // 801B7774
L_801B7778:;
  c->r[4]=R32(c->r[30]+0x00000034u); // 801B7778
  cmps(c,0,(int32_t)c->r[4],0); // 801B777C
  if (crb(c,2)) { goto L_801B7794; } // 801B7780
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B7784
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801B7788
  c->r[3]=c->r[4]+c->r[0]; // 801B778C
  goto L_801B77A8; // 801B7790
L_801B7794:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B7794
  c->r[4]=c->r[31]|c->r[31]; // 801B7798
  c->r[3]=c->r[1]+0x00000008u; // 801B779C
  c->lr=0x801B77A4u; f_801B05B8(c); // 801B77A0
  c->r[3]=c->r[31]|c->r[31]; // 801B77A4
L_801B77A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B77A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B77AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B77B0
  c->lr=c->r[0]; // 801B77B4
  c->r[1]=c->r[1]+0x00000020u; // 801B77B8
  return; // 801B77BC
}

// GetSpecularLightID__Q34nw4r3g3d9AnmScnResCFUl
void f_801B77C0(Ctx* __restrict c) {
  trace_call(0x801B77C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B77C0
  c->r[0]=c->lr; // 801B77C4
  c->r[3]=c->r[3]+0x00000020u; // 801B77C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B77CC
  c->lr=0x801B77D4u; f_801B1068(c); // 801B77D0
  cmps(c,0,(int32_t)c->r[3],0); // 801B77D4
  if (crb(c,2)) { goto L_801B77E4; } // 801B77D8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801B77DC
  goto L_801B77E8; // 801B77E0
L_801B77E4:;
  c->r[3]=0u+0xFFFFFFFFu; // 801B77E4
L_801B77E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B77E8
  c->lr=c->r[0]; // 801B77EC
  c->r[1]=c->r[1]+0x00000010u; // 801B77F0
  return; // 801B77F4
}

// HasSpecularLight__Q34nw4r3g3d9AnmScnResCFUl
void f_801B77F8(Ctx* __restrict c) {
  trace_call(0x801B77F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B77F8
  c->r[0]=c->lr; // 801B77FC
  c->r[3]=c->r[3]+0x00000020u; // 801B7800
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7804
  c->lr=0x801B780Cu; f_801B1068(c); // 801B7808
  cmps(c,0,(int32_t)c->r[3],0); // 801B780C
  c->r[4]=0u+0x00000000u; // 801B7810
  if (crb(c,2)) { goto L_801B7828; } // 801B7814
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B7818
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801B781C
  if (crb(c,2)) { goto L_801B7828; } // 801B7820
  c->r[4]=0u+0x00000001u; // 801B7824
L_801B7828:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7828
  c->r[3]=c->r[4]|c->r[4]; // 801B782C
  c->lr=c->r[0]; // 801B7830
  c->r[1]=c->r[1]+0x00000010u; // 801B7834
  return; // 801B7838
}

// UpdateCache__Q34nw4r3g3d9AnmScnResFv
void f_801B783C(Ctx* __restrict c) {
  trace_call(0x801B783Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B783C
  c->r[0]=c->lr; // 801B7840
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B7844
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801B7848
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801B784C
  c->r[11]=c->r[1]+0x00000040u; // 801B7850
  c->lr=0x801B7858u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7854
  c->r[25]=c->r[3]|c->r[3]; // 801B7858
  c->r[3]=c->r[3]+0x00000020u; // 801B785C
  c->lr=0x801B7864u; f_801B0B44(c); // 801B7860
  c->r[28]=c->r[3]|c->r[3]; // 801B7864
  c->r[3]=c->r[25]+0x00000020u; // 801B7868
  c->lr=0x801B7870u; f_801B0CF8(c); // 801B786C
  c->r[29]=c->r[3]|c->r[3]; // 801B7870
  c->r[3]=c->r[25]+0x00000020u; // 801B7874
  c->lr=0x801B787Cu; f_801B0E24(c); // 801B7878
  c->r[30]=c->r[3]|c->r[3]; // 801B787C
  c->r[3]=c->r[25]+0x00000020u; // 801B7880
  c->lr=0x801B7888u; f_801B0F50(c); // 801B7884
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801B7888
  c->r[31]=c->r[3]|c->r[3]; // 801B788C
  c->r[26]=0u+0x00000000u; // 801B7890
  c->r[27]=0u+0x00000000u; // 801B7894
  goto L_801B78C8; // 801B7898
L_801B789C:;
  c->r[4]=c->r[26]|c->r[26]; // 801B789C
  c->r[3]=c->r[25]+0x00000020u; // 801B78A0
  c->lr=0x801B78A8u; f_801B0A98(c); // 801B78A4
  W32(c->r[1]+0x00000014u,c->r[3]); // 801B78A8
  c->f[1]=c->f[31]; // 801B78AC
  c->r[3]=c->r[1]+0x00000014u; // 801B78B0
  c->r[0]=R32(c->r[25]+0x00000028u); // 801B78B4
  c->r[4]=c->r[0]+c->r[27]; // 801B78B8
  c->lr=0x801B78C0u; f_801AFF90(c); // 801B78BC
  c->r[27]=c->r[27]+0x00000008u; // 801B78C0
  c->r[26]=c->r[26]+0x00000001u; // 801B78C4
L_801B78C8:;
  cmpu(c,0,c->r[26],c->r[28]); // 801B78C8
  if (crb(c,0)) { IRQCHK(c); goto L_801B789C; } // 801B78CC
  c->r[26]=0u+0x00000000u; // 801B78D0
  c->r[28]=0u+0x00000000u; // 801B78D4
  goto L_801B7908; // 801B78D8
L_801B78DC:;
  c->r[4]=c->r[26]|c->r[26]; // 801B78DC
  c->r[3]=c->r[25]+0x00000020u; // 801B78E0
  c->lr=0x801B78E8u; f_801B0C4C(c); // 801B78E4
  W32(c->r[1]+0x00000010u,c->r[3]); // 801B78E8
  c->f[1]=c->f[31]; // 801B78EC
  c->r[3]=c->r[1]+0x00000010u; // 801B78F0
  c->r[0]=R32(c->r[25]+0x0000002Cu); // 801B78F4
  c->r[4]=c->r[0]+c->r[28]; // 801B78F8
  c->lr=0x801B7900u; f_801B0060(c); // 801B78FC
  c->r[28]=c->r[28]+0x00000040u; // 801B7900
  c->r[26]=c->r[26]+0x00000001u; // 801B7904
L_801B7908:;
  cmpu(c,0,c->r[26],c->r[29]); // 801B7908
  if (crb(c,0)) { IRQCHK(c); goto L_801B78DC; } // 801B790C
  c->r[26]=0u+0x00000000u; // 801B7910
  c->r[28]=0u+0x00000000u; // 801B7914
  goto L_801B7948; // 801B7918
L_801B791C:;
  c->r[4]=c->r[26]|c->r[26]; // 801B791C
  c->r[3]=c->r[25]+0x00000020u; // 801B7920
  c->lr=0x801B7928u; f_801B0D78(c); // 801B7924
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801B7928
  c->f[1]=c->f[31]; // 801B792C
  c->r[3]=c->r[1]+0x0000000Cu; // 801B7930
  c->r[0]=R32(c->r[25]+0x00000030u); // 801B7934
  c->r[4]=c->r[0]+c->r[28]; // 801B7938
  c->lr=0x801B7940u; f_801B0458(c); // 801B793C
  c->r[28]=c->r[28]+0x00000010u; // 801B7940
  c->r[26]=c->r[26]+0x00000001u; // 801B7944
L_801B7948:;
  cmpu(c,0,c->r[26],c->r[30]); // 801B7948
  if (crb(c,0)) { IRQCHK(c); goto L_801B791C; } // 801B794C
  c->r[26]=0u+0x00000000u; // 801B7950
  c->r[28]=0u+0x00000000u; // 801B7954
  goto L_801B7988; // 801B7958
L_801B795C:;
  c->r[4]=c->r[26]|c->r[26]; // 801B795C
  c->r[3]=c->r[25]+0x00000020u; // 801B7960
  c->lr=0x801B7968u; f_801B0EA4(c); // 801B7964
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B7968
  c->f[1]=c->f[31]; // 801B796C
  c->r[3]=c->r[1]+0x00000008u; // 801B7970
  c->r[0]=R32(c->r[25]+0x00000034u); // 801B7974
  c->r[4]=c->r[0]+c->r[28]; // 801B7978
  c->lr=0x801B7980u; f_801B05B8(c); // 801B797C
  c->r[28]=c->r[28]+0x00000034u; // 801B7980
  c->r[26]=c->r[26]+0x00000001u; // 801B7984
L_801B7988:;
  cmpu(c,0,c->r[26],c->r[31]); // 801B7988
  if (crb(c,0)) { IRQCHK(c); goto L_801B795C; } // 801B798C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801B7990
  c->r[11]=c->r[1]+0x00000040u; // 801B7994
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801B7998
  c->lr=0x801B79A0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B799C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B79A0
  c->lr=c->r[0]; // 801B79A4
  c->r[1]=c->r[1]+0x00000050u; // 801B79A8
  return; // 801B79AC
}

// IsDerivedFrom__Q34nw4r3g3d9AnmScnResCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801B79B0(Ctx* __restrict c) {
  trace_call(0x801B79B0u);
  c->r[3]=0u+0x80270000u; // 801B79B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B79B4
  c->r[3]=c->r[3]+0x00000CC0u; // 801B79B8
  cmpu(c,0,c->r[0],c->r[3]); // 801B79BC
  if (!crb(c,2)) { goto L_801B79CC; } // 801B79C0
  c->r[3]=0u+0x00000001u; // 801B79C4
  return; // 801B79C8
L_801B79CC:;
  c->r[3]=0u+0x80270000u; // 801B79CC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B79D0
  c->r[3]=c->r[3]+0x00000CB0u; // 801B79D4
  cmpu(c,0,c->r[0],c->r[3]); // 801B79D8
  if (!crb(c,2)) { goto L_801B79E8; } // 801B79DC
  c->r[3]=0u+0x00000001u; // 801B79E0
  return; // 801B79E4
L_801B79E8:;
  c->r[3]=0u+0x80270000u; // 801B79E8
  c->r[3]=c->r[3]+0x00000CD0u; // 801B79EC
  c->r[0]=c->r[3]-c->r[0]; // 801B79F0
  c->r[0]=cntlz(c->r[0]); // 801B79F4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B79F8
  return; // 801B79FC
}

// IsDerivedFrom__Q34nw4r3g3d6AnmScnCFQ44nw4r3g3d6G3dObj7TypeObj
void f_801B7A00(Ctx* __restrict c) {
  trace_call(0x801B7A00u);
  c->r[3]=0u+0x80270000u; // 801B7A00
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B7A04
  c->r[3]=c->r[3]+0x00000CB0u; // 801B7A08
  cmpu(c,0,c->r[0],c->r[3]); // 801B7A0C
  if (!crb(c,2)) { goto L_801B7A1C; } // 801B7A10
  c->r[3]=0u+0x00000001u; // 801B7A14
  return; // 801B7A18
L_801B7A1C:;
  c->r[3]=0u+0x80270000u; // 801B7A1C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B7A20
  c->r[3]=c->r[3]+0x00000CD0u; // 801B7A24
  c->r[0]=c->r[3]-c->r[0]; // 801B7A28
  c->r[0]=cntlz(c->r[0]); // 801B7A2C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B7A30
  return; // 801B7A34
}

// GetTypeName__Q34nw4r3g3d9AnmScnResCFv
void f_801B7A38(Ctx* __restrict c) {
  trace_call(0x801B7A38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7A38
  c->r[0]=c->lr; // 801B7A3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7A40
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B7A44
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B7A48
  c->ctr=c->r[12]; // 801B7A4C
  if (true) { c->lr=0x801B7A54u; dispatch(c,c->ctr); } // 801B7A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7A54
  c->r[3]=c->r[3]+0x00000004u; // 801B7A58
  c->lr=c->r[0]; // 801B7A5C
  c->r[1]=c->r[1]+0x00000010u; // 801B7A60
  return; // 801B7A64
}

// GetTypeObj__Q34nw4r3g3d9AnmScnResCFv
void f_801B7A68(Ctx* __restrict c) {
  trace_call(0x801B7A68u);
  c->r[3]=0u+0x80270000u; // 801B7A68
  c->r[3]=c->r[3]+0x00000CC0u; // 801B7A6C
  return; // 801B7A70
}

// GetTypeName__Q34nw4r3g3d6AnmScnCFv
void f_801B7A74(Ctx* __restrict c) {
  trace_call(0x801B7A74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7A74
  c->r[0]=c->lr; // 801B7A78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7A7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B7A80
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B7A84
  c->ctr=c->r[12]; // 801B7A88
  if (true) { c->lr=0x801B7A90u; dispatch(c,c->ctr); } // 801B7A8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7A90
  c->r[3]=c->r[3]+0x00000004u; // 801B7A94
  c->lr=c->r[0]; // 801B7A98
  c->r[1]=c->r[1]+0x00000010u; // 801B7A9C
  return; // 801B7AA0
}

// GetTypeObj__Q34nw4r3g3d6AnmScnCFv
void f_801B7AA4(Ctx* __restrict c) {
  trace_call(0x801B7AA4u);
  c->r[3]=0u+0x80270000u; // 801B7AA4
  c->r[3]=c->r[3]+0x00000CB0u; // 801B7AA8
  return; // 801B7AAC
}

// __dt__Q34nw4r3g3d6G3dObjFv
void f_801B7AB0(Ctx* __restrict c) {
  trace_call(0x801B7AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7AB0
  c->r[0]=c->lr; // 801B7AB4
  cmps(c,0,(int32_t)c->r[3],0); // 801B7AB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7ABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B7AC0
  c->r[31]=c->r[3]|c->r[3]; // 801B7AC4
  if (crb(c,2)) { goto L_801B7AE4; } // 801B7AC8
  c->r[5]=0u+0x802A0000u; // 801B7ACC
  c->r[4]=c->r[31]|c->r[31]; // 801B7AD0
  c->r[5]=c->r[5]+0x000013F8u; // 801B7AD4
  W32(c->r[3]+0x00000000u,c->r[5]); // 801B7AD8
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B7ADC
  c->lr=0x801B7AE4u; f_80128078(c); // 801B7AE0
L_801B7AE4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B7AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7AE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7AEC
  c->lr=c->r[0]; // 801B7AF0
  c->r[1]=c->r[1]+0x00000010u; // 801B7AF4
  return; // 801B7AF8
}

// Destroy__Q34nw4r3g3d6G3dObjFv
void f_801B7AFC(Ctx* __restrict c) {
  trace_call(0x801B7AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7AFC
  c->r[0]=c->lr; // 801B7B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7B04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B7B08
  c->r[31]=c->r[3]|c->r[3]; // 801B7B0C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B7B10
  cmps(c,0,(int32_t)c->r[0],0); // 801B7B14
  if (crb(c,2)) { goto L_801B7B40; } // 801B7B18
  c->r[3]=c->r[0]|c->r[0]; // 801B7B1C
  c->r[4]=0u+0x00010000u; // 801B7B20
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B7B24
  c->r[6]=c->r[31]|c->r[31]; // 801B7B28
  c->r[4]=c->r[4]+0x00000001u; // 801B7B2C
  c->r[5]=0u+0x00000000u; // 801B7B30
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B7B34
  c->ctr=c->r[12]; // 801B7B38
  if (true) { c->lr=0x801B7B40u; dispatch(c,c->ctr); } // 801B7B3C
L_801B7B40:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B7B40
  if (crb(c,2)) { goto L_801B7B60; } // 801B7B44
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B7B48
  c->r[3]=c->r[31]|c->r[31]; // 801B7B4C
  c->r[4]=0u+0x00000001u; // 801B7B50
  c->r[12]=R32(c->r[12]+0x00000010u); // 801B7B54
  c->ctr=c->r[12]; // 801B7B58
  if (true) { c->lr=0x801B7B60u; dispatch(c,c->ctr); } // 801B7B5C
L_801B7B60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7B60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7B64
  c->lr=c->r[0]; // 801B7B68
  c->r[1]=c->r[1]+0x00000010u; // 801B7B6C
  return; // 801B7B70
}

// fn_801B7B74
void f_801B7B74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7B74
  c->r[0]=c->lr; // 801B7B78
  c->r[6]=c->r[3]|c->r[3]; // 801B7B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7B80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B7B84
  c->r[31]=R32(c->r[3]+0x00000004u); // 801B7B88
  cmps(c,0,(int32_t)c->r[31],0); // 801B7B8C
  if (crb(c,2)) { goto L_801B7BB4; } // 801B7B90
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B7B94
  c->r[4]=0u+0x00010000u; // 801B7B98
  c->r[3]=c->r[31]|c->r[31]; // 801B7B9C
  c->r[5]=0u+0x00000000u; // 801B7BA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B7BA4
  c->r[4]=c->r[4]+0x00000001u; // 801B7BA8
  c->ctr=c->r[12]; // 801B7BAC
  if (true) { c->lr=0x801B7BB4u; dispatch(c,c->ctr); } // 801B7BB0
L_801B7BB4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B7BB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7BB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7BBC
  c->lr=c->r[0]; // 801B7BC0
  c->r[1]=c->r[1]+0x00000010u; // 801B7BC4
  return; // 801B7BC8
}

// fn_801B7BCC
void f_801B7BCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7BCC
  c->r[0]=c->lr; // 801B7BD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7BD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B7BD8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B7BDC
  c->ctr=c->r[12]; // 801B7BE0
  if (true) { c->lr=0x801B7BE8u; dispatch(c,c->ctr); } // 801B7BE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7BE8
  c->r[3]=c->r[3]+0x00000004u; // 801B7BEC
  c->lr=c->r[0]; // 801B7BF0
  c->r[1]=c->r[1]+0x00000010u; // 801B7BF4
  return; // 801B7BF8
}

// fn_801B7BFC
void f_801B7BFC(Ctx* __restrict c) {
  c->r[3]=0u+0x80270000u; // 801B7BFC
  c->r[3]=c->r[3]+0x00000CD0u; // 801B7C00
  return; // 801B7C04
}

// PlayPolicy_Onetime__Q24nw4r3g3dFfff
void f_801B7C08(Ctx* __restrict c) {
  trace_call(0x801B7C08u);
  c->f[1]=c->f[3]; // 801B7C08
  return; // 801B7C0C
}

// PlayPolicy_Loop__Q24nw4r3g3dFfff
void f_801B7C10(Ctx* __restrict c) {
  trace_call(0x801B7C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7C10
  c->r[0]=c->lr; // 801B7C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7C18
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801B7C1C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801B7C20
  {uint32_t ea=c->r[2]+0xFFFF9BA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7C24
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[1]); // 801B7C28
  fcmp(c,0,c->f[3],c->f[0]); // 801B7C2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7C30
  if (!crb(c,2)) { goto L_801B7C4C; } // 801B7C34
  c->f[1]=c->f[3]; // 801B7C38
  c->f[2]=c->f[31]; // 801B7C3C
  c->lr=0x801B7C44u; f_8011AC30(c); // 801B7C40
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801B7C44
  goto L_801B7C68; // 801B7C48
L_801B7C4C:;
  c->f[2]=c->f[31]; // 801B7C4C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[31]); // 801B7C50
  c->lr=0x801B7C58u; f_8011AC30(c); // 801B7C54
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801B7C58
  {uint32_t ea=c->r[2]+0xFFFF9BA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7C5C
  c->f[0]=(c->f[1]>=0.0)?c->f[0]:c->f[31]; // 801B7C60
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801B7C64
L_801B7C68:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801B7C68
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7C6C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801B7C70
  c->lr=c->r[0]; // 801B7C74
  c->r[1]=c->r[1]+0x00000020u; // 801B7C78
  return; // 801B7C7C
}

// SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
void f_801B7C80(Ctx* __restrict c) {
  trace_call(0x801B7C80u);
  cmps(c,0,(int32_t)c->r[5],0); // 801B7C80
  if (crb(c,2)) { goto L_801B7C98; } // 801B7C84
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B7C88
  c->r[0]=c->r[0]|c->r[4]; // 801B7C8C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B7C90
  return; // 801B7C94
L_801B7C98:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B7C98
  c->r[0]=c->r[0]&~c->r[4]; // 801B7C9C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B7CA0
  return; // 801B7CA4
}

// TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
void f_801B7CA8(Ctx* __restrict c) {
  trace_call(0x801B7CA8u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B7CA8
  c->r[3]=c->r[0]&c->r[4]; // 801B7CAC
  c->r[0]=0u-c->r[3]; // 801B7CB0
  c->r[0]=c->r[0]|c->r[3]; // 801B7CB4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B7CB8
  return; // 801B7CBC
}

// GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
void f_801B7CC0(Ctx* __restrict c) {
  trace_call(0x801B7CC0u);
  c->r[10]=0u+0xCC010000u; // 801B7CC0
  c->r[11]=0u+0x00000061u; // 801B7CC4
  c->r[9]=0u+0xFE080000u; // 801B7CC8
  c->r[8]=c->r[2]+0xFFFF9BB0u; // 801B7CCC
  c->r[7]=R8(c->r[8]+c->r[7]); // 801B7CD0
  c->r[9]=c->r[9]+0xFFFFFC3Fu; // 801B7CD4
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 801B7CD8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B7CDC
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 801B7CE0
  c->r[8]=rotl(c->r[6],16)&0x00FF0000u; // 801B7CE4
  c->r[6]=rotl(c->r[7],14)&0xFFFFC000u; // 801B7CE8
  W32(c->r[10]+0xFFFF8000u,c->r[9]); // 801B7CEC
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 801B7CF0
  c->r[0]=c->r[3]|c->r[0]; // 801B7CF4
  c->r[0]=c->r[5]|c->r[0]; // 801B7CF8
  c->r[6]=c->r[8]|c->r[6]; // 801B7CFC
  c->r[0]=c->r[6]|c->r[0]; // 801B7D00
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 801B7D04
  c->r[7]=0u+0x00000010u; // 801B7D08
  c->r[6]=0u+0x00000000u; // 801B7D0C
  W32(c->r[10]+0xFFFF8000u,c->r[0]); // 801B7D10
  c->r[5]=0u+0x00001009u; // 801B7D14
  c->r[0]=0u+0x0000103Fu; // 801B7D18
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 801B7D1C
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 801B7D20
  W16(c->r[10]+0xFFFF8000u,c->r[5]); // 801B7D24
  W32(c->r[10]+0xFFFF8000u,c->r[4]); // 801B7D28
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 801B7D2C
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 801B7D30
  W16(c->r[10]+0xFFFF8000u,c->r[0]); // 801B7D34
  W32(c->r[10]+0xFFFF8000u,c->r[3]); // 801B7D38
  return; // 801B7D3C
}

// GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
void f_801B7D40(Ctx* __restrict c) {
  trace_call(0x801B7D40u);
  c->r[5]=0u+0xCC010000u; // 801B7D40
  c->r[6]=0u+0x00000061u; // 801B7D44
  c->r[4]=0u+0xFE010000u; // 801B7D48
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801B7D4C
  c->r[0]=c->r[4]+0xFFFFC000u; // 801B7D50
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801B7D54
  c->r[4]=c->r[2]+0xFFFF9BB0u; // 801B7D58
  c->r[0]=R8(c->r[4]+c->r[3]); // 801B7D5C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801B7D60
  c->r[0]=rotl(c->r[0],14)&0xFFFFC000u; // 801B7D64
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801B7D68
  return; // 801B7D6C
}

// GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
void f_801B7D70(Ctx* __restrict c) {
  trace_call(0x801B7D70u);
  c->r[11]=0u+0xCC010000u; // 801B7D70
  c->r[12]=0u+0x00000061u; // 801B7D74
  c->r[10]=0u+0xFE040000u; // 801B7D78
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 801B7D7C
  c->r[0]=c->r[10]+0xFFFFFFFFu; // 801B7D80
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B7D84
  c->r[10]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B7D88
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 801B7D8C
  c->r[3]=rotl(c->r[5],16)&0x00FF0000u; // 801B7D90
  c->r[5]=rotl(c->r[6],17)&0x01FE0000u; // 801B7D94
  c->r[3]=c->r[4]|c->r[3]; // 801B7D98
  c->r[0]=c->r[10]+0x00000030u; // 801B7D9C
  c->r[3]=c->r[5]|c->r[3]; // 801B7DA0
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 801B7DA4
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 801B7DA8
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 801B7DAC
  c->r[0]=c->r[3]|c->r[0]; // 801B7DB0
  c->r[3]=rotl(c->r[8],16)&0x00FF0000u; // 801B7DB4
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 801B7DB8
  c->r[0]=c->r[10]+0x00000031u; // 801B7DBC
  c->r[5]=rotl(c->r[9],17)&0x01FE0000u; // 801B7DC0
  c->r[3]=c->r[4]|c->r[3]; // 801B7DC4
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 801B7DC8
  c->r[3]=c->r[5]|c->r[3]; // 801B7DCC
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 801B7DD0
  c->r[0]=c->r[3]|c->r[0]; // 801B7DD4
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 801B7DD8
  return; // 801B7DDC
}

// GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
void f_801B7DE0(Ctx* __restrict c) {
  trace_call(0x801B7DE0u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B7DE0
  c->r[5]=0u+0x00000000u; // 801B7DE4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B7DE8
  c->f[5]=std::fabs(c->f[2]); // 801B7DEC
  {uint32_t ea=c->r[2]+0xFFFF9BB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7DF0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B7DF4
  c->f[9]=std::fabs(c->f[3]); // 801B7DF8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B7DFC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B7E00
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 801B7E04
  fcmp(c,0,c->f[5],c->f[0]); // 801B7E08
  c->f[10]=std::fabs(c->f[6]); // 801B7E0C
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7E10
  c->f[11]=std::fabs(c->f[4]); // 801B7E14
  c->f[12]=std::fabs(c->f[7]); // 801B7E18
  c->f[13]=std::fabs(c->f[8]); // 801B7E1C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7E20
  if (crb(c,2)) { goto L_801B7E64; } // 801B7E24
  fcmp(c,0,c->f[9],c->f[0]); // 801B7E28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7E2C
  if (crb(c,2)) { goto L_801B7E64; } // 801B7E30
  fcmp(c,0,c->f[10],c->f[0]); // 801B7E34
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7E38
  if (crb(c,2)) { goto L_801B7E64; } // 801B7E3C
  fcmp(c,0,c->f[11],c->f[0]); // 801B7E40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7E44
  if (crb(c,2)) { goto L_801B7E64; } // 801B7E48
  fcmp(c,0,c->f[12],c->f[0]); // 801B7E4C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7E50
  if (crb(c,2)) { goto L_801B7E64; } // 801B7E54
  fcmp(c,0,c->f[13],c->f[0]); // 801B7E58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7E5C
  if (!crb(c,2)) { goto L_801B7EF8; } // 801B7E60
L_801B7E64:;
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B7E64
  {uint32_t ea=c->r[2]+0xFFFF9BB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7E68
L_801B7E6C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801B7E6C
  cmps(c,0,(int32_t)c->r[0],46); // 801B7E70
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7E74
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 801B7E78
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 801B7E7C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 801B7E80
  fcmp(c,0,c->f[5],c->f[0]); // 801B7E84
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 801B7E88
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 801B7E8C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 801B7E90
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 801B7E94
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 801B7E98
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 801B7E9C
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 801B7EA0
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 801B7EA4
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 801B7EA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7EAC
  c->r[5]=c->r[5]+0x00000001u; // 801B7EB0
  if (crb(c,2)) { IRQCHK(c); goto L_801B7E6C; } // 801B7EB4
  fcmp(c,0,c->f[9],c->f[0]); // 801B7EB8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7EBC
  if (crb(c,2)) { IRQCHK(c); goto L_801B7E6C; } // 801B7EC0
  fcmp(c,0,c->f[10],c->f[0]); // 801B7EC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7EC8
  if (crb(c,2)) { IRQCHK(c); goto L_801B7E6C; } // 801B7ECC
  fcmp(c,0,c->f[11],c->f[0]); // 801B7ED0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7ED4
  if (crb(c,2)) { IRQCHK(c); goto L_801B7E6C; } // 801B7ED8
  fcmp(c,0,c->f[12],c->f[0]); // 801B7EDC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7EE0
  if (crb(c,2)) { IRQCHK(c); goto L_801B7E6C; } // 801B7EE4
  fcmp(c,0,c->f[13],c->f[0]); // 801B7EE8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B7EEC
  if (crb(c,2)) { IRQCHK(c); goto L_801B7E6C; } // 801B7EF0
  goto L_801B7FA0; // 801B7EF4
L_801B7EF8:;
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B7EF8
  fcmp(c,0,c->f[5],c->f[1]); // 801B7EFC
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F00
  fcmp(c,0,c->f[9],c->f[1]); // 801B7F04
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F08
  fcmp(c,0,c->f[10],c->f[1]); // 801B7F0C
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F10
  fcmp(c,0,c->f[11],c->f[1]); // 801B7F14
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F18
  fcmp(c,0,c->f[12],c->f[1]); // 801B7F1C
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F20
  fcmp(c,0,c->f[13],c->f[1]); // 801B7F24
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F28
  {uint32_t ea=c->r[2]+0xFFFF9BBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7F2C
L_801B7F30:;
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 801B7F30
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B7F34
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801B7F38
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801B7F3C
  fcmp(c,0,c->f[5],c->f[1]); // 801B7F40
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 801B7F44
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801B7F48
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 801B7F4C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 801B7F50
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 801B7F54
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 801B7F58
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 801B7F5C
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 801B7F60
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 801B7F64
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F68
  fcmp(c,0,c->f[9],c->f[1]); // 801B7F6C
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F70
  fcmp(c,0,c->f[10],c->f[1]); // 801B7F74
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F78
  fcmp(c,0,c->f[11],c->f[1]); // 801B7F7C
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F80
  fcmp(c,0,c->f[12],c->f[1]); // 801B7F84
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F88
  fcmp(c,0,c->f[13],c->f[1]); // 801B7F8C
  if (!crb(c,0)) { goto L_801B7FA0; } // 801B7F90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801B7F94
  cmps(c,0,(int32_t)c->r[0],-17); // 801B7F98
  if (crb(c,1)) { IRQCHK(c); goto L_801B7F30; } // 801B7F9C
L_801B7FA0:;
  {uint32_t ea=c->r[2]+0xFFFF9BC0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B7FA0
  c->r[9]=c->r[5]+0x00000011u; // 801B7FA4
  c->r[0]=c->r[3]+0x00000006u; // 801B7FA8
  c->r[7]=0u+0xCC010000u; // 801B7FAC
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 801B7FB0
  c->r[5]=rotl(c->r[9],22)&0x00C00000u; // 801B7FB4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 801B7FB8
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801B7FBC
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[3]); // 801B7FC0
  c->r[8]=0u+0x00000061u; // 801B7FC4
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B7FC8
  c->r[0]=c->r[3]+0x00000007u; // 801B7FCC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801B7FD0
  c->r[6]=rotl(c->r[9],20)&0x00C00000u; // 801B7FD4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[7]); // 801B7FD8
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801B7FDC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 801B7FE0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801B7FE4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B7FE8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 801B7FEC
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 801B7FF0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[8]); // 801B7FF4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801B7FF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7FFC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801B8000
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801B8004
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 801B8008
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 801B800C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B8010
  c->r[0]=c->r[5]|c->r[0]; // 801B8014
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801B8018
  c->r[0]=c->r[3]+0x00000008u; // 801B801C
  c->r[4]=rotl(c->r[9],18)&0x00C00000u; // 801B8020
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 801B8024
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801B8028
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 801B802C
  c->r[3]=R32(c->r[1]+0x00000024u); // 801B8030
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801B8034
  c->r[5]=rotl(c->r[3],11)&0x003FF800u; // 801B8038
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801B803C
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 801B8040
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801B8044
  c->r[5]=c->r[6]|c->r[5]; // 801B8048
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 801B804C
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801B8050
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B8054
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 801B8058
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 801B805C
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 801B8060
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801B8064
  c->r[0]=c->r[4]|c->r[0]; // 801B8068
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801B806C
  c->r[1]=c->r[1]+0x00000040u; // 801B8070
  return; // 801B8074
}

// GDResetCurrentMtx__Q34nw4r3g3d4fifoFv
void f_801B8078(Ctx* __restrict c) {
  trace_call(0x801B8078u);
  c->r[8]=0u+0xCC010000u; // 801B8078
  c->r[9]=0u+0x00000008u; // 801B807C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801B8080
  c->r[0]=0u+0x00000030u; // 801B8084
  c->r[4]=0u+0x3CF40000u; // 801B8088
  c->r[3]=0u+0x00F40000u; // 801B808C
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 801B8090
  c->r[7]=c->r[4]+0xFFFFCF00u; // 801B8094
  c->r[5]=c->r[3]+0xFFFFCF3Cu; // 801B8098
  c->r[6]=0u+0x00000040u; // 801B809C
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 801B80A0
  c->r[4]=0u+0x00000010u; // 801B80A4
  c->r[3]=0u+0x00000001u; // 801B80A8
  c->r[0]=0u+0x00001018u; // 801B80AC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801B80B0
  W8(c->r[8]+0xFFFF8000u,c->r[6]); // 801B80B4
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 801B80B8
  W8(c->r[8]+0xFFFF8000u,c->r[4]); // 801B80BC
  W16(c->r[8]+0xFFFF8000u,c->r[3]); // 801B80C0
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 801B80C4
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 801B80C8
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 801B80CC
  return; // 801B80D0
}

// GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl
void f_801B80D4(Ctx* __restrict c) {
  trace_call(0x801B80D4u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 801B80D4
  c->r[5]=0u+0xCC010000u; // 801B80D8
  c->r[0]=0u+0x00000010u; // 801B80DC
  c->r[6]=R32(c->r[3]+0x00000004u); // 801B80E0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801B80E4
  c->r[4]=0u+0x00000001u; // 801B80E8
  c->r[8]=R32(c->r[3]+0x00000008u); // 801B80EC
  c->r[7]=rotl(c->r[7],6)&0xFFFFFFC0u; // 801B80F0
  c->r[6]=rotl(c->r[6],12)&0xFFFFF000u; // 801B80F4
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 801B80F8
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801B80FC
  c->r[6]=c->r[7]|c->r[6]; // 801B8100
  c->r[0]=0u+0x00001018u; // 801B8104
  c->r[8]=rotl(c->r[8],18)&0xFFFC0000u; // 801B8108
  c->r[10]=rotl(c->r[9],24)&0xFF000000u; // 801B810C
  c->r[4]=R32(c->r[3]+0x00000014u); // 801B8110
  c->r[9]=c->r[8]|c->r[6]; // 801B8114
  c->r[7]=R32(c->r[3]+0x00000018u); // 801B8118
  c->r[6]=R32(c->r[3]+0x00000010u); // 801B811C
  c->r[9]=c->r[10]|c->r[9]; // 801B8120
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 801B8124
  c->r[3]=rotl(c->r[4],6)&0xFFFFFFC0u; // 801B8128
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801B812C
  c->r[0]=c->r[6]|c->r[3]; // 801B8130
  c->r[4]=rotl(c->r[7],12)&0xFFFFF000u; // 801B8134
  c->r[3]=rotl(c->r[8],18)&0xFFFC0000u; // 801B8138
  c->r[0]=c->r[4]|c->r[0]; // 801B813C
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 801B8140
  c->r[0]=c->r[3]|c->r[0]; // 801B8144
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801B8148
  return; // 801B814C
}

// GDLoadTexMtxImm3x3__Q34nw4r3g3d4fifoFRCQ34nw4r4math5MTX33Ul
void f_801B8150(Ctx* __restrict c) {
  trace_call(0x801B8150u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8150
  c->r[0]=c->lr; // 801B8154
  {uint32_t ea=c->r[2]+0xFFFF9BC4u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B8158
  c->r[5]=0u+0x00000000u; // 801B815C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B8160
  {uint32_t ea=c->r[3]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 801B8164
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801B8168
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B816C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801B8170
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B8174
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B8178
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B817C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8180
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8184
  c->r[3]=c->r[1]+0x00000008u; // 801B8188
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 801B818C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 801B8190
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 801B8194
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 801B8198
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 801B819C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 801B81A0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 801B81A4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 801B81A8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 801B81AC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B81B0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801B81B4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 801B81B8
  c->lr=0x801B81C0u; f_80108A5C(c); // 801B81BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B81C0
  c->lr=c->r[0]; // 801B81C4
  c->r[1]=c->r[1]+0x00000040u; // 801B81C8
  return; // 801B81CC
}

// Copy32ByteBlocks__Q34nw4r3g3d6detailFPvPCvUl
void f_801B81D0(Ctx* __restrict c) {
  trace_call(0x801B81D0u);
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[5]); // 801B81D0
  if (crb(c,2)) return; // 801B81D4
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801B81D8
  c->ctr=c->r[0]; // 801B81DC
  if (crb(c,2)) { goto L_801B8278; } // 801B81E0
L_801B81E4:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801B81E4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 801B81E8
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801B81EC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 801B81F0
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 801B81F4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 801B81F8
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 801B81FC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=RF64(ea);} // 801B8200
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 801B8204
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=RF64(ea);} // 801B8208
  {uint32_t ea=c->r[3]+0x00000020u; WF64(ea,c->f[0]);} // 801B820C
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=RF64(ea);} // 801B8210
  {uint32_t ea=c->r[3]+0x00000028u; WF64(ea,c->f[1]);} // 801B8214
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=RF64(ea);} // 801B8218
  {uint32_t ea=c->r[3]+0x00000030u; WF64(ea,c->f[0]);} // 801B821C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=RF64(ea);} // 801B8220
  {uint32_t ea=c->r[3]+0x00000038u; WF64(ea,c->f[1]);} // 801B8224
  {uint32_t ea=c->r[4]+0x00000048u; c->f[1]=RF64(ea);} // 801B8228
  {uint32_t ea=c->r[3]+0x00000040u; WF64(ea,c->f[0]);} // 801B822C
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=RF64(ea);} // 801B8230
  {uint32_t ea=c->r[3]+0x00000048u; WF64(ea,c->f[1]);} // 801B8234
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=RF64(ea);} // 801B8238
  {uint32_t ea=c->r[3]+0x00000050u; WF64(ea,c->f[0]);} // 801B823C
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=RF64(ea);} // 801B8240
  {uint32_t ea=c->r[3]+0x00000058u; WF64(ea,c->f[1]);} // 801B8244
  {uint32_t ea=c->r[4]+0x00000068u; c->f[1]=RF64(ea);} // 801B8248
  {uint32_t ea=c->r[3]+0x00000060u; WF64(ea,c->f[0]);} // 801B824C
  {uint32_t ea=c->r[4]+0x00000070u; c->f[0]=RF64(ea);} // 801B8250
  {uint32_t ea=c->r[3]+0x00000068u; WF64(ea,c->f[1]);} // 801B8254
  {uint32_t ea=c->r[4]+0x00000078u; c->f[1]=RF64(ea);} // 801B8258
  c->r[4]=c->r[4]+0x00000080u; // 801B825C
  {uint32_t ea=c->r[3]+0x00000070u; WF64(ea,c->f[0]);} // 801B8260
  {uint32_t ea=c->r[3]+0x00000078u; WF64(ea,c->f[1]);} // 801B8264
  c->r[3]=c->r[3]+0x00000080u; // 801B8268
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B81E4; } // 801B826C
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 801B8270
  if (crb(c,2)) return; // 801B8274
L_801B8278:;
  c->ctr=c->r[5]; // 801B8278
L_801B827C:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801B827C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 801B8280
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801B8284
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 801B8288
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 801B828C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 801B8290
  c->r[4]=c->r[4]+0x00000020u; // 801B8294
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 801B8298
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 801B829C
  c->r[3]=c->r[3]+0x00000020u; // 801B82A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B827C; } // 801B82A4
  return; // 801B82A8
}

// ZeroMemory32ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_801B82AC(Ctx* __restrict c) {
  trace_call(0x801B82ACu);
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 801B82AC
  {uint32_t ea=c->r[2]+0xFFFF9BC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B82B0
  if (crb(c,2)) return; // 801B82B4
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801B82B8
  c->ctr=c->r[0]; // 801B82BC
  if (crb(c,2)) { goto L_801B8354; } // 801B82C0
L_801B82C4:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801B82C4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801B82C8
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 801B82CC
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801B82D0
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 801B82D4
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 801B82D8
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 801B82DC
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 801B82E0
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 801B82E4
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 801B82E8
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 801B82EC
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 801B82F0
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 801B82F4
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 801B82F8
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 801B82FC
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 801B8300
  {uint32_t ea=c->r[3]+0x00000080u; psq_store(c,0,ea,0,0);} // 801B8304
  {uint32_t ea=c->r[3]+0x00000088u; psq_store(c,0,ea,0,0);} // 801B8308
  {uint32_t ea=c->r[3]+0x00000090u; psq_store(c,0,ea,0,0);} // 801B830C
  {uint32_t ea=c->r[3]+0x00000098u; psq_store(c,0,ea,0,0);} // 801B8310
  {uint32_t ea=c->r[3]+0x000000A0u; psq_store(c,0,ea,0,0);} // 801B8314
  {uint32_t ea=c->r[3]+0x000000A8u; psq_store(c,0,ea,0,0);} // 801B8318
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,0,ea,0,0);} // 801B831C
  {uint32_t ea=c->r[3]+0x000000B8u; psq_store(c,0,ea,0,0);} // 801B8320
  {uint32_t ea=c->r[3]+0x000000C0u; psq_store(c,0,ea,0,0);} // 801B8324
  {uint32_t ea=c->r[3]+0x000000C8u; psq_store(c,0,ea,0,0);} // 801B8328
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,0,ea,0,0);} // 801B832C
  {uint32_t ea=c->r[3]+0x000000D8u; psq_store(c,0,ea,0,0);} // 801B8330
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 801B8334
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 801B8338
  {uint32_t ea=c->r[3]+0x000000F0u; psq_store(c,0,ea,0,0);} // 801B833C
  {uint32_t ea=c->r[3]+0x000000F8u; psq_store(c,0,ea,0,0);} // 801B8340
  c->r[3]=c->r[3]+0x00000100u; // 801B8344
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B82C4; } // 801B8348
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 801B834C
  if (crb(c,2)) return; // 801B8350
L_801B8354:;
  c->ctr=c->r[4]; // 801B8354
L_801B8358:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801B8358
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801B835C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 801B8360
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801B8364
  c->r[3]=c->r[3]+0x00000020u; // 801B8368
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B8358; } // 801B836C
  return; // 801B8370
}

// ZeroMemory16ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_801B8374(Ctx* __restrict c) {
  trace_call(0x801B8374u);
  c->r[4]=rotl(c->r[4],28)&0x0FFFFFFFu; cr0(c,c->r[4]); // 801B8374
  {uint32_t ea=c->r[2]+0xFFFF9BC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8378
  if (crb(c,2)) return; // 801B837C
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801B8380
  c->ctr=c->r[0]; // 801B8384
  if (crb(c,2)) { goto L_801B83DC; } // 801B8388
L_801B838C:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801B838C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801B8390
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 801B8394
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801B8398
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 801B839C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 801B83A0
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 801B83A4
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 801B83A8
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 801B83AC
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 801B83B0
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 801B83B4
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 801B83B8
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 801B83BC
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 801B83C0
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 801B83C4
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 801B83C8
  c->r[3]=c->r[3]+0x00000080u; // 801B83CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B838C; } // 801B83D0
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 801B83D4
  if (crb(c,2)) return; // 801B83D8
L_801B83DC:;
  c->ctr=c->r[4]; // 801B83DC
L_801B83E0:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801B83E0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801B83E4
  c->r[3]=c->r[3]+0x00000010u; // 801B83E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B83E0; } // 801B83EC
  return; // 801B83F0
}

// EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_801B83F4(Ctx* __restrict c) {
  trace_call(0x801B83F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B83F4
  c->r[0]=c->lr; // 801B83F8
  cmps(c,0,(int32_t)c->r[3],0); // 801B83FC
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B8400
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801B8404
  c->r[31]=c->r[3]|c->r[3]; // 801B8408
  W32(c->r[1]+0x00000058u,c->r[30]); // 801B840C
  W32(c->r[1]+0x00000054u,c->r[29]); // 801B8410
  if (crb(c,2)) { goto L_801B87BC; } // 801B8414
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801B8418
  cmps(c,1,(int32_t)c->r[0],0); // 801B841C
  if (crb(c,4)) { goto L_801B84D0; } // 801B8420
  cmps(c,0,(int32_t)c->r[0],32); // 801B8424
  if (!crb(c,0)) { goto L_801B84D0; } // 801B8428
  if (!crb(c,0)) { goto L_801B844C; } // 801B842C
  if (crb(c,4)) { goto L_801B844C; } // 801B8430
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B8434
  c->r[3]=0u+0x80350000u; // 801B8438
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B843C
  c->r[3]=c->r[3]+c->r[0]; // 801B8440
  c->r[29]=c->r[3]+0x00000034u; // 801B8444
  goto L_801B8450; // 801B8448
L_801B844C:;
  c->r[29]=0u+0x00000000u; // 801B844C
L_801B8450:;
  c->r[30]=0u+0x80350000u; // 801B8450
  c->r[0]=R16(c->r[30]+0xFFFFCD60u); // 801B8454
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B8458
  if (!crb(c,2)) { goto L_801B8488; } // 801B845C
  c->r[3]=c->r[30]+0xFFFFCD60u; // 801B8460
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B8464
  c->r[4]=c->r[3]+0x00000004u; // 801B8468
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B846C
  c->r[3]=c->r[3]+c->r[0]; // 801B8470
  c->r[3]=c->r[3]+0x00000034u; // 801B8474
  c->lr=0x801B847Cu; f_800EC358(c); // 801B8478
  c->r[0]=R16(c->r[30]+0xFFFFCD60u); // 801B847C
  c->r[0]=c->r[0]|0x00000001u; // 801B8480
  W16(c->r[30]+0xFFFFCD60u,c->r[0]); // 801B8484
L_801B8488:;
  c->r[30]=0u+0x80350000u; // 801B8488
  c->r[3]=c->r[29]|c->r[29]; // 801B848C
  c->r[30]=c->r[30]+0xFFFFCD60u; // 801B8490
  c->r[5]=c->r[31]|c->r[31]; // 801B8494
  c->r[4]=c->r[30]+0x00000004u; // 801B8498
  c->lr=0x801B84A0u; f_800EC0F4(c); // 801B849C
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B84A0
  c->r[4]=c->r[31]|c->r[31]; // 801B84A4
  c->r[5]=c->r[31]|c->r[31]; // 801B84A8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801B84AC
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B84B0
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801B84B4
  c->r[0]=R16(c->r[30]+0x00000002u); // 801B84B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B84BC
  c->r[3]=c->r[30]+c->r[0]; // 801B84C0
  c->r[3]=c->r[3]+0x00001434u; // 801B84C4
  c->lr=0x801B84CCu; f_800EC0F4(c); // 801B84C8
  goto L_801B87BC; // 801B84CC
L_801B84D0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801B84D0
  cmps(c,1,(int32_t)c->r[0],0); // 801B84D4
  if (crb(c,4)) { goto L_801B879C; } // 801B84D8
  cmps(c,0,(int32_t)c->r[0],128); // 801B84DC
  if (!crb(c,0)) { goto L_801B879C; } // 801B84E0
  if (crb(c,4)) { goto L_801B8504; } // 801B84E4
  if (!crb(c,0)) { goto L_801B8504; } // 801B84E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801B84EC
  c->r[3]=0u+0x80350000u; // 801B84F0
  c->r[3]=c->r[3]+0xFFFFA334u; // 801B84F4
  c->r[3]=c->r[3]+c->r[0]; // 801B84F8
  c->r[3]=c->r[3]+0x0000002Cu; // 801B84FC
  goto L_801B8508; // 801B8500
L_801B8504:;
  c->r[3]=0u+0x00000000u; // 801B8504
L_801B8508:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B8508
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B850C
  if (crb(c,2)) { goto L_801B879C; } // 801B8510
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 801B8514
  if (crb(c,0)) { goto L_801B853C; } // 801B8518
  cmps(c,0,(int32_t)c->r[0],128); // 801B851C
  if (!crb(c,0)) { goto L_801B853C; } // 801B8520
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801B8524
  c->r[3]=0u+0x80350000u; // 801B8528
  c->r[3]=c->r[3]+0xFFFFA334u; // 801B852C
  c->r[3]=c->r[3]+c->r[0]; // 801B8530
  c->r[29]=c->r[3]+0x0000002Cu; // 801B8534
  goto L_801B8540; // 801B8538
L_801B853C:;
  c->r[29]=0u+0x00000000u; // 801B853C
L_801B8540:;
  c->r[3]=c->r[29]|c->r[29]; // 801B8540
  c->r[4]=c->r[1]+0x00000038u; // 801B8544
  c->lr=0x801B854Cu; f_801CDFB0(c); // 801B8548
  c->r[30]=0u+0x80350000u; // 801B854C
  c->r[0]=R16(c->r[30]+0xFFFFCD60u); // 801B8550
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B8554
  if (!crb(c,2)) { goto L_801B8584; } // 801B8558
  c->r[3]=c->r[30]+0xFFFFCD60u; // 801B855C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B8560
  c->r[4]=c->r[3]+0x00000004u; // 801B8564
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B8568
  c->r[3]=c->r[3]+c->r[0]; // 801B856C
  c->r[3]=c->r[3]+0x00000034u; // 801B8570
  c->lr=0x801B8578u; f_800EC358(c); // 801B8574
  c->r[0]=R16(c->r[30]+0xFFFFCD60u); // 801B8578
  c->r[0]=c->r[0]|0x00000001u; // 801B857C
  W16(c->r[30]+0xFFFFCD60u,c->r[0]); // 801B8580
L_801B8584:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 801B8584
  c->r[3]=0u+0x80350000u; // 801B8588
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B858C
  c->r[4]=0u+0x00000000u; // 801B8590
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801B8594
  c->r[30]=c->r[3]+0x00000004u; // 801B8598
  if (!crb(c,2)) { goto L_801B85AC; } // 801B859C
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801B85A0
  if (!crb(c,2)) { goto L_801B85AC; } // 801B85A4
  c->r[4]=0u+0x00000001u; // 801B85A8
L_801B85AC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B85AC
  if (!crb(c,2)) { goto L_801B85DC; } // 801B85B0
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B85B4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B85B8
  fcmp(c,0,c->f[1],c->f[0]); // 801B85BC
  if (!crb(c,2)) { goto L_801B865C; } // 801B85C0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B85C4
  fcmp(c,0,c->f[1],c->f[0]); // 801B85C8
  if (!crb(c,2)) { goto L_801B865C; } // 801B85CC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B85D0
  fcmp(c,0,c->f[1],c->f[0]); // 801B85D4
  if (!crb(c,2)) { goto L_801B865C; } // 801B85D8
L_801B85DC:;
  c->r[3]=c->r[29]|c->r[29]; // 801B85DC
  c->r[4]=c->r[1]+0x00000038u; // 801B85E0
  c->lr=0x801B85E8u; f_801CDF94(c); // 801B85E4
  c->r[3]=c->r[1]+0x00000038u; // 801B85E8
  c->r[4]=c->r[30]|c->r[30]; // 801B85EC
  c->r[5]=c->r[3]|c->r[3]; // 801B85F0
  c->lr=0x801B85F8u; f_801DBB18(c); // 801B85F4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B85F8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B85FC
  c->f[6]=-c->f[0]; // 801B8600
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8604
  c->f[4]=-c->f[2]; // 801B8608
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B860C
  c->f[5]=-c->f[1]; // 801B8610
  c->f[3]=c->ps1[3]=S(c->f[6]); // 801B8614
  c->f[1]=c->ps1[1]=S(c->f[4]); // 801B8618
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 801B861C
  c->f[2]=c->ps1[2]=S(c->f[5]); // 801B8620
  fcmp(c,0,c->f[0],c->f[3]); // 801B8624
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 801B8628
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 801B862C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 801B8630
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 801B8634
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B8638
  if (!crb(c,2)) { goto L_801B866C; } // 801B863C
  fcmp(c,0,c->f[0],c->f[2]); // 801B8640
  if (!crb(c,2)) { goto L_801B866C; } // 801B8644
  fcmp(c,0,c->f[0],c->f[1]); // 801B8648
  if (!crb(c,2)) { goto L_801B866C; } // 801B864C
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8650
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801B8654
  goto L_801B866C; // 801B8658
L_801B865C:;
  c->r[3]=c->r[1]+0x00000038u; // 801B865C
  c->r[4]=c->r[30]|c->r[30]; // 801B8660
  c->r[5]=c->r[3]|c->r[3]; // 801B8664
  c->lr=0x801B866Cu; f_801DBB18(c); // 801B8668
L_801B866C:;
  c->r[3]=c->r[1]+0x00000038u; // 801B866C
  c->r[4]=c->r[3]|c->r[3]; // 801B8670
  c->lr=0x801B8678u; f_800ECFD0(c); // 801B8674
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8678
  {uint32_t ea=c->r[2]+0xFFFF9BDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B867C
  c->f[1]=std::fabs(c->f[1]); // 801B8680
  fcmp(c,0,c->f[1],c->f[0]); // 801B8684
  if (!crb(c,0)) { goto L_801B86D0; } // 801B8688
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B868C
  c->f[1]=std::fabs(c->f[1]); // 801B8690
  fcmp(c,0,c->f[1],c->f[0]); // 801B8694
  if (!crb(c,0)) { goto L_801B86D0; } // 801B8698
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B869C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B86A0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B86A4
  fcmp(c,0,c->f[0],c->f[1]); // 801B86A8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B86AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801B86B0
  if (!crb(c,2)) { goto L_801B86C4; } // 801B86B4
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B86B8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801B86BC
  goto L_801B86E4; // 801B86C0
L_801B86C4:;
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B86C4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801B86C8
  goto L_801B86E4; // 801B86CC
L_801B86D0:;
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B86D0
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B86D4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801B86D8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B86DC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801B86E0
L_801B86E4:;
  c->r[3]=c->r[1]+0x00000038u; // 801B86E4
  c->r[4]=c->r[1]+0x0000002Cu; // 801B86E8
  c->r[5]=c->r[1]+0x00000020u; // 801B86EC
  c->lr=0x801B86F4u; f_800ED078(c); // 801B86F0
  c->r[3]=c->r[1]+0x00000020u; // 801B86F4
  c->r[4]=c->r[3]|c->r[3]; // 801B86F8
  c->lr=0x801B8700u; f_800ECFD0(c); // 801B86FC
  c->r[3]=c->r[1]+0x00000020u; // 801B8700
  c->r[4]=c->r[1]+0x00000038u; // 801B8704
  c->r[5]=c->r[1]+0x00000014u; // 801B8708
  c->lr=0x801B8710u; f_800ED078(c); // 801B870C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8710
  c->r[3]=c->r[31]|c->r[31]; // 801B8714
  c->r[4]=c->r[30]|c->r[30]; // 801B8718
  c->r[5]=c->r[31]|c->r[31]; // 801B871C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801B8720
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8724
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801B8728
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B872C
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 801B8730
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8734
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 801B8738
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B873C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 801B8740
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8744
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801B8748
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B874C
  c->f[0]=-c->f[0]; // 801B8750
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 801B8754
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8758
  c->f[0]=-c->f[0]; // 801B875C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 801B8760
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8764
  c->f[0]=-c->f[0]; // 801B8768
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 801B876C
  c->lr=0x801B8774u; f_800EC0F4(c); // 801B8770
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8774
  c->r[3]=0u+0x80270000u; // 801B8778
  c->r[4]=c->r[31]|c->r[31]; // 801B877C
  c->r[5]=c->r[31]|c->r[31]; // 801B8780
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801B8784
  c->r[3]=c->r[3]+0x00000CF0u; // 801B8788
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B878C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801B8790
  c->lr=0x801B8798u; f_800EC0F4(c); // 801B8794
  goto L_801B87BC; // 801B8798
L_801B879C:;
  c->r[3]=0u+0x80350000u; // 801B879C
  c->r[4]=c->r[31]|c->r[31]; // 801B87A0
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B87A4
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B87A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B87AC
  c->r[3]=c->r[3]+c->r[0]; // 801B87B0
  c->r[3]=c->r[3]+0x00001434u; // 801B87B4
  c->lr=0x801B87BCu; f_800EC0C0(c); // 801B87B8
L_801B87BC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B87BC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801B87C0
  c->r[30]=R32(c->r[1]+0x00000058u); // 801B87C4
  c->r[29]=R32(c->r[1]+0x00000054u); // 801B87C8
  c->lr=c->r[0]; // 801B87CC
  c->r[1]=c->r[1]+0x00000060u; // 801B87D0
  return; // 801B87D4
}

// ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_801B87D8(Ctx* __restrict c) {
  trace_call(0x801B87D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B87D8
  c->r[0]=c->lr; // 801B87DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B87E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B87E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B87E8
  c->r[31]=c->r[3]|c->r[3]; // 801B87EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B87F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B87F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B87F8
  c->r[28]=c->r[4]|c->r[4]; // 801B87FC
  if (crb(c,2)) { goto L_801B88E4; } // 801B8800
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801B8804
  cmps(c,1,(int32_t)c->r[0],0); // 801B8808
  if (crb(c,4)) { goto L_801B88C4; } // 801B880C
  cmps(c,0,(int32_t)c->r[0],32); // 801B8810
  if (!crb(c,0)) { goto L_801B88C4; } // 801B8814
  if (!crb(c,0)) { goto L_801B8838; } // 801B8818
  if (crb(c,4)) { goto L_801B8838; } // 801B881C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B8820
  c->r[3]=0u+0x80350000u; // 801B8824
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B8828
  c->r[3]=c->r[3]+c->r[0]; // 801B882C
  c->r[29]=c->r[3]+0x00000034u; // 801B8830
  goto L_801B883C; // 801B8834
L_801B8838:;
  c->r[29]=0u+0x00000000u; // 801B8838
L_801B883C:;
  c->r[30]=0u+0x80350000u; // 801B883C
  c->r[0]=R16(c->r[30]+0xFFFFCD60u); // 801B8840
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B8844
  if (!crb(c,2)) { goto L_801B8874; } // 801B8848
  c->r[3]=c->r[30]+0xFFFFCD60u; // 801B884C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B8850
  c->r[4]=c->r[3]+0x00000004u; // 801B8854
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B8858
  c->r[3]=c->r[3]+c->r[0]; // 801B885C
  c->r[3]=c->r[3]+0x00000034u; // 801B8860
  c->lr=0x801B8868u; f_800EC358(c); // 801B8864
  c->r[0]=R16(c->r[30]+0xFFFFCD60u); // 801B8868
  c->r[0]=c->r[0]|0x00000001u; // 801B886C
  W16(c->r[30]+0xFFFFCD60u,c->r[0]); // 801B8870
L_801B8874:;
  c->r[30]=0u+0x80350000u; // 801B8874
  c->r[3]=c->r[29]|c->r[29]; // 801B8878
  c->r[30]=c->r[30]+0xFFFFCD60u; // 801B887C
  c->r[5]=c->r[31]|c->r[31]; // 801B8880
  c->r[4]=c->r[30]+0x00000004u; // 801B8884
  c->lr=0x801B888Cu; f_800EC0F4(c); // 801B8888
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 801B888C
  cmps(c,0,(int32_t)c->r[0],32); // 801B8890
  if (!crb(c,0)) { goto L_801B88B0; } // 801B8894
  cmps(c,0,(int32_t)c->r[0],0); // 801B8898
  if (crb(c,0)) { goto L_801B88B0; } // 801B889C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B88A0
  c->r[3]=c->r[30]+c->r[0]; // 801B88A4
  c->r[3]=c->r[3]+0x00000E34u; // 801B88A8
  goto L_801B88B4; // 801B88AC
L_801B88B0:;
  c->r[3]=0u+0x00000000u; // 801B88B0
L_801B88B4:;
  c->r[4]=c->r[31]|c->r[31]; // 801B88B4
  c->r[5]=c->r[31]|c->r[31]; // 801B88B8
  c->lr=0x801B88C0u; f_800EC0F4(c); // 801B88BC
  goto L_801B88E4; // 801B88C0
L_801B88C4:;
  c->r[3]=0u+0x80350000u; // 801B88C4
  c->r[4]=c->r[31]|c->r[31]; // 801B88C8
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B88CC
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B88D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B88D4
  c->r[3]=c->r[3]+c->r[0]; // 801B88D8
  c->r[3]=c->r[3]+0x00000E34u; // 801B88DC
  c->lr=0x801B88E4u; f_800EC0C0(c); // 801B88E0
L_801B88E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B88E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B88E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B88EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B88F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B88F4
  c->lr=c->r[0]; // 801B88F8
  c->r[1]=c->r[1]+0x00000020u; // 801B88FC
  return; // 801B8900
}

// EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_801B8904(Ctx* __restrict c) {
  trace_call(0x801B8904u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8904
  c->r[0]=c->lr; // 801B8908
  cmps(c,0,(int32_t)c->r[3],0); // 801B890C
  W32(c->r[1]+0x00000094u,c->r[0]); // 801B8910
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801B8914
  W32(c->r[1]+0x00000088u,c->r[30]); // 801B8918
  c->r[30]=c->r[5]|c->r[5]; // 801B891C
  W32(c->r[1]+0x00000084u,c->r[29]); // 801B8920
  c->r[29]=c->r[4]|c->r[4]; // 801B8924
  W32(c->r[1]+0x00000080u,c->r[28]); // 801B8928
  c->r[28]=c->r[3]|c->r[3]; // 801B892C
  if (crb(c,2)) { goto L_801B8D30; } // 801B8930
  c->r[31]=0u+0x80350000u; // 801B8934
  c->r[4]=c->r[31]+0xFFFFCD60u; // 801B8938
  c->r[0]=R16(c->r[31]+0xFFFFCD60u); // 801B893C
  c->r[3]=R16(c->r[4]+0x00000002u); // 801B8940
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B8944
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801B8948
  c->r[3]=c->r[4]+c->r[0]; // 801B894C
  c->r[3]=c->r[3]+0x00000034u; // 801B8950
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B8954
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8958
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B895C
  c->f[2]=-c->f[2]; // 801B8960
  c->f[1]=-c->f[1]; // 801B8964
  c->f[0]=-c->f[0]; // 801B8968
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 801B896C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 801B8970
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 801B8974
  if (!crb(c,2)) { goto L_801B8990; } // 801B8978
  c->r[4]=c->r[4]+0x00000004u; // 801B897C
  c->lr=0x801B8984u; f_800EC358(c); // 801B8980
  c->r[0]=R16(c->r[31]+0xFFFFCD60u); // 801B8984
  c->r[0]=c->r[0]|0x00000001u; // 801B8988
  W16(c->r[31]+0xFFFFCD60u,c->r[0]); // 801B898C
L_801B8990:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 801B8990
  c->r[3]=0u+0x80350000u; // 801B8994
  cmps(c,1,(int32_t)c->r[0],0); // 801B8998
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B899C
  c->r[31]=c->r[3]+0x00000004u; // 801B89A0
  if (crb(c,4)) { goto L_801B8BC0; } // 801B89A4
  cmps(c,0,(int32_t)c->r[0],128); // 801B89A8
  if (!crb(c,0)) { goto L_801B8BC0; } // 801B89AC
  if (crb(c,4)) { goto L_801B89D0; } // 801B89B0
  if (!crb(c,0)) { goto L_801B89D0; } // 801B89B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801B89B8
  c->r[3]=0u+0x80350000u; // 801B89BC
  c->r[3]=c->r[3]+0xFFFFA334u; // 801B89C0
  c->r[3]=c->r[3]+c->r[0]; // 801B89C4
  c->r[3]=c->r[3]+0x0000002Cu; // 801B89C8
  goto L_801B89D4; // 801B89CC
L_801B89D0:;
  c->r[3]=0u+0x00000000u; // 801B89D0
L_801B89D4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B89D4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B89D8
  if (crb(c,2)) { goto L_801B8BC0; } // 801B89DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; cr0(c,c->r[0]); // 801B89E0
  if (crb(c,0)) { goto L_801B8A08; } // 801B89E4
  cmps(c,0,(int32_t)c->r[0],128); // 801B89E8
  if (!crb(c,0)) { goto L_801B8A08; } // 801B89EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801B89F0
  c->r[3]=0u+0x80350000u; // 801B89F4
  c->r[3]=c->r[3]+0xFFFFA334u; // 801B89F8
  c->r[3]=c->r[3]+c->r[0]; // 801B89FC
  c->r[29]=c->r[3]+0x0000002Cu; // 801B8A00
  goto L_801B8A0C; // 801B8A04
L_801B8A08:;
  c->r[29]=0u+0x00000000u; // 801B8A08
L_801B8A0C:;
  c->r[3]=c->r[29]|c->r[29]; // 801B8A0C
  c->r[4]=c->r[1]+0x00000044u; // 801B8A10
  c->lr=0x801B8A18u; f_801CDFB0(c); // 801B8A14
  c->r[4]=R32(c->r[29]+0x00000000u); // 801B8A18
  c->r[3]=0u+0x00000000u; // 801B8A1C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801B8A20
  if (!crb(c,2)) { goto L_801B8A34; } // 801B8A24
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801B8A28
  if (!crb(c,2)) { goto L_801B8A34; } // 801B8A2C
  c->r[3]=0u+0x00000001u; // 801B8A30
L_801B8A34:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B8A34
  if (!crb(c,2)) { goto L_801B8A64; } // 801B8A38
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8A3C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8A40
  fcmp(c,0,c->f[1],c->f[0]); // 801B8A44
  if (!crb(c,2)) { goto L_801B8AE4; } // 801B8A48
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8A4C
  fcmp(c,0,c->f[1],c->f[0]); // 801B8A50
  if (!crb(c,2)) { goto L_801B8AE4; } // 801B8A54
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8A58
  fcmp(c,0,c->f[1],c->f[0]); // 801B8A5C
  if (!crb(c,2)) { goto L_801B8AE4; } // 801B8A60
L_801B8A64:;
  c->r[3]=c->r[29]|c->r[29]; // 801B8A64
  c->r[4]=c->r[1]+0x00000044u; // 801B8A68
  c->lr=0x801B8A70u; f_801CDF94(c); // 801B8A6C
  c->r[3]=c->r[1]+0x00000044u; // 801B8A70
  c->r[4]=c->r[31]|c->r[31]; // 801B8A74
  c->r[5]=c->r[3]|c->r[3]; // 801B8A78
  c->lr=0x801B8A80u; f_801DBB18(c); // 801B8A7C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8A80
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B8A84
  c->f[6]=-c->f[0]; // 801B8A88
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8A8C
  c->f[4]=-c->f[2]; // 801B8A90
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8A94
  c->f[5]=-c->f[1]; // 801B8A98
  c->f[3]=c->ps1[3]=S(c->f[6]); // 801B8A9C
  c->f[1]=c->ps1[1]=S(c->f[4]); // 801B8AA0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 801B8AA4
  c->f[2]=c->ps1[2]=S(c->f[5]); // 801B8AA8
  fcmp(c,0,c->f[0],c->f[3]); // 801B8AAC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 801B8AB0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 801B8AB4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 801B8AB8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 801B8ABC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 801B8AC0
  if (!crb(c,2)) { goto L_801B8AF4; } // 801B8AC4
  fcmp(c,0,c->f[0],c->f[2]); // 801B8AC8
  if (!crb(c,2)) { goto L_801B8AF4; } // 801B8ACC
  fcmp(c,0,c->f[0],c->f[1]); // 801B8AD0
  if (!crb(c,2)) { goto L_801B8AF4; } // 801B8AD4
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8AD8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801B8ADC
  goto L_801B8AF4; // 801B8AE0
L_801B8AE4:;
  c->r[3]=c->r[1]+0x00000044u; // 801B8AE4
  c->r[4]=c->r[31]|c->r[31]; // 801B8AE8
  c->r[5]=c->r[3]|c->r[3]; // 801B8AEC
  c->lr=0x801B8AF4u; f_801DBB18(c); // 801B8AF0
L_801B8AF4:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B8AF4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B8AF8
  if (!crb(c,2)) { goto L_801B8B14; } // 801B8AFC
  c->r[3]=c->r[1]+0x00000050u; // 801B8B00
  c->r[4]=c->r[1]+0x00000044u; // 801B8B04
  c->r[5]=c->r[1]+0x00000068u; // 801B8B08
  c->lr=0x801B8B10u; f_800ED0B4(c); // 801B8B0C
  goto L_801B8B50; // 801B8B10
L_801B8B14:;
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8B14
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8B18
  c->f[2]=-c->f[0]; // 801B8B1C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8B20
  c->f[3]=-c->f[1]; // 801B8B24
  c->f[4]=-c->f[0]; // 801B8B28
  c->f[0]=c->ps1[0]=S(c->f[2]); // 801B8B2C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801B8B30
  c->f[1]=c->ps1[1]=S(c->f[3]); // 801B8B34
  c->f[2]=c->ps1[2]=S(c->f[4]); // 801B8B38
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 801B8B3C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801B8B40
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 801B8B44
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 801B8B48
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 801B8B4C
L_801B8B50:;
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8B50
  {uint32_t ea=c->r[2]+0xFFFF9BDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8B54
  c->f[1]=std::fabs(c->f[1]); // 801B8B58
  fcmp(c,0,c->f[1],c->f[0]); // 801B8B5C
  if (!crb(c,0)) { goto L_801B8BA8; } // 801B8B60
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8B64
  c->f[1]=std::fabs(c->f[1]); // 801B8B68
  fcmp(c,0,c->f[1],c->f[0]); // 801B8B6C
  if (!crb(c,0)) { goto L_801B8BA8; } // 801B8B70
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8B74
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8B78
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801B8B7C
  fcmp(c,0,c->f[0],c->f[1]); // 801B8B80
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 801B8B84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801B8B88
  if (!crb(c,2)) { goto L_801B8B9C; } // 801B8B8C
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8B90
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801B8B94
  goto L_801B8C6C; // 801B8B98
L_801B8B9C:;
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8B9C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801B8BA0
  goto L_801B8C6C; // 801B8BA4
L_801B8BA8:;
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8BA8
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8BAC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 801B8BB0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 801B8BB4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801B8BB8
  goto L_801B8C6C; // 801B8BBC
L_801B8BC0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 801B8BC0
  cmps(c,1,(int32_t)c->r[0],0); // 801B8BC4
  if (crb(c,4)) { goto L_801B8C48; } // 801B8BC8
  cmps(c,0,(int32_t)c->r[0],32); // 801B8BCC
  if (!crb(c,0)) { goto L_801B8C48; } // 801B8BD0
  if (!crb(c,0)) { goto L_801B8BF4; } // 801B8BD4
  if (crb(c,4)) { goto L_801B8BF4; } // 801B8BD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B8BDC
  c->r[3]=0u+0x80350000u; // 801B8BE0
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B8BE4
  c->r[3]=c->r[3]+c->r[0]; // 801B8BE8
  c->r[6]=c->r[3]+0x00000034u; // 801B8BEC
  goto L_801B8BF8; // 801B8BF0
L_801B8BF4:;
  c->r[6]=0u+0x00000000u; // 801B8BF4
L_801B8BF8:;
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8BF8
  c->r[3]=c->r[1]+0x00000050u; // 801B8BFC
  c->r[4]=c->r[1]+0x00000038u; // 801B8C00
  c->r[5]=c->r[1]+0x00000068u; // 801B8C04
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 801B8C08
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8C0C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801B8C10
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8C14
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801B8C18
  {uint32_t ea=c->r[6]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B8C1C
  {uint32_t ea=c->r[6]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8C20
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8C24
  c->f[2]=-c->f[2]; // 801B8C28
  c->f[1]=-c->f[1]; // 801B8C2C
  c->f[0]=-c->f[0]; // 801B8C30
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 801B8C34
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801B8C38
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B8C3C
  c->lr=0x801B8C44u; f_800ED0B4(c); // 801B8C40
  goto L_801B8C6C; // 801B8C44
L_801B8C48:;
  c->r[3]=0u+0x80350000u; // 801B8C48
  c->r[4]=c->r[28]|c->r[28]; // 801B8C4C
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B8C50
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B8C54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B8C58
  c->r[3]=c->r[3]+c->r[0]; // 801B8C5C
  c->r[3]=c->r[3]+0x00001434u; // 801B8C60
  c->lr=0x801B8C68u; f_800EC0C0(c); // 801B8C64
  goto L_801B8D30; // 801B8C68
L_801B8C6C:;
  c->r[3]=c->r[1]+0x00000068u; // 801B8C6C
  c->r[4]=c->r[3]|c->r[3]; // 801B8C70
  c->lr=0x801B8C78u; f_800ECFD0(c); // 801B8C74
  c->r[3]=c->r[1]+0x0000005Cu; // 801B8C78
  c->r[4]=c->r[1]+0x00000068u; // 801B8C7C
  c->r[5]=c->r[1]+0x0000002Cu; // 801B8C80
  c->lr=0x801B8C88u; f_800ED078(c); // 801B8C84
  c->r[3]=c->r[1]+0x0000002Cu; // 801B8C88
  c->r[4]=c->r[3]|c->r[3]; // 801B8C8C
  c->lr=0x801B8C94u; f_800ECFD0(c); // 801B8C90
  c->r[3]=c->r[1]+0x00000068u; // 801B8C94
  c->r[4]=c->r[1]+0x0000002Cu; // 801B8C98
  c->r[5]=c->r[1]+0x00000020u; // 801B8C9C
  c->lr=0x801B8CA4u; f_800ED078(c); // 801B8CA0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CA4
  c->r[3]=c->r[28]|c->r[28]; // 801B8CA8
  c->r[4]=c->r[31]|c->r[31]; // 801B8CAC
  c->r[5]=c->r[28]|c->r[28]; // 801B8CB0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801B8CB4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CB8
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 801B8CBC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CC0
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 801B8CC4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CC8
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[0]);} // 801B8CCC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CD0
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[0]);} // 801B8CD4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CD8
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 801B8CDC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CE0
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 801B8CE4
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CE8
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[0]);} // 801B8CEC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CF0
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 801B8CF4
  c->lr=0x801B8CFCu; f_800EC0F4(c); // 801B8CF8
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8CFC
  c->r[3]=0u+0x80350000u; // 801B8D00
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801B8D04
  c->r[4]=c->r[28]|c->r[28]; // 801B8D08
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 801B8D0C
  c->r[5]=c->r[28]|c->r[28]; // 801B8D10
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B8D14
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 801B8D18
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B8D1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B8D20
  c->r[3]=c->r[3]+c->r[0]; // 801B8D24
  c->r[3]=c->r[3]+0x00001434u; // 801B8D28
  c->lr=0x801B8D30u; f_800EC0F4(c); // 801B8D2C
L_801B8D30:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801B8D30
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801B8D34
  c->r[30]=R32(c->r[1]+0x00000088u); // 801B8D38
  c->r[29]=R32(c->r[1]+0x00000084u); // 801B8D3C
  c->r[28]=R32(c->r[1]+0x00000080u); // 801B8D40
  c->lr=c->r[0]; // 801B8D44
  c->r[1]=c->r[1]+0x00000090u; // 801B8D48
  return; // 801B8D4C
}

// DefaultMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_801B8D50(Ctx* __restrict c) {
  trace_call(0x801B8D50u);
  cmps(c,0,(int32_t)c->r[3],0); // 801B8D50
  if (crb(c,2)) return; // 801B8D54
  f_800EC094(c); return; // 801B8D58
  return; // 801B8D5C
}

// FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv
void f_801B8D60(Ctx* __restrict c) {
  trace_call(0x801B8D60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8D60
  c->r[0]=c->lr; // 801B8D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8D68
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B8D6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B8D70
  c->r[31]=c->r[3]|c->r[3]; // 801B8D74
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B8D78
  if (crb(c,2)) { goto L_801B8D8C; } // 801B8D7C
  c->r[4]=c->r[31]+0x00000004u; // 801B8D80
  c->r[3]=0u+0x00000000u; // 801B8D84
  c->lr=0x801B8D8Cu; f_801B7DE0(c); // 801B8D88
L_801B8D8C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B8D8C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B8D90
  if (crb(c,2)) { goto L_801B8DA4; } // 801B8D94
  c->r[4]=c->r[31]+0x00000034u; // 801B8D98
  c->r[3]=0u+0x00000003u; // 801B8D9C
  c->lr=0x801B8DA4u; f_801B7DE0(c); // 801B8DA0
L_801B8DA4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B8DA4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B8DA8
  if (crb(c,2)) { goto L_801B8DBC; } // 801B8DAC
  c->r[4]=c->r[31]+0x00000064u; // 801B8DB0
  c->r[3]=0u+0x00000006u; // 801B8DB4
  c->lr=0x801B8DBCu; f_801B7DE0(c); // 801B8DB8
L_801B8DBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B8DBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B8DC0
  c->lr=c->r[0]; // 801B8DC4
  c->r[1]=c->r[1]+0x00000010u; // 801B8DC8
  return; // 801B8DCC
}

// __ct__Q34nw4r3g3d8LightObjFv
void f_801B8DD0(Ctx* __restrict c) {
  trace_call(0x801B8DD0u);
  c->r[0]=0u+0x00000000u; // 801B8DD0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B8DD4
  return; // 801B8DD8
}

// __dt__Q34nw4r3g3d8LightObjFv
void f_801B8DDC(Ctx* __restrict c) {
  trace_call(0x801B8DDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8DDC
  c->r[0]=c->lr; // 801B8DE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B8DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8DE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B8DEC
  c->r[31]=c->r[3]|c->r[3]; // 801B8DF0
  if (crb(c,2)) { goto L_801B8E04; } // 801B8DF4
  cmps(c,0,(int32_t)c->r[4],0); // 801B8DF8
  if (!crb(c,1)) { goto L_801B8E04; } // 801B8DFC
  c->lr=0x801B8E04u; f_8009230C(c); // 801B8E00
L_801B8E04:;
  c->r[3]=c->r[31]|c->r[31]; // 801B8E04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B8E08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B8E0C
  c->lr=c->r[0]; // 801B8E10
  c->r[1]=c->r[1]+0x00000010u; // 801B8E14
  return; // 801B8E18
}

// SetLightSetting__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFRCQ34nw4r3g3d12LightSetting
void f_801B8E1C(Ctx* __restrict c) {
  trace_call(0x801B8E1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8E1C
  c->r[0]=c->lr; // 801B8E20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B8E24
  c->r[11]=c->r[1]+0x00000020u; // 801B8E28
  c->lr=0x801B8E30u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8E2C
  c->r[31]=c->r[3]|c->r[3]; // 801B8E30
  c->r[26]=c->r[4]|c->r[4]; // 801B8E34
  c->lr=0x801B8E3Cu; f_801CE408(c); // 801B8E38
  c->r[4]=0u+0x80350000u; // 801B8E3C
  c->r[5]=R16(c->r[26]+0x00000000u); // 801B8E40
  c->r[4]=c->r[4]+0xFFFFCD60u; // 801B8E44
  c->r[3]=c->r[31]|c->r[31]; // 801B8E48
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B8E4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B8E50
  c->r[4]=c->r[4]+c->r[0]; // 801B8E54
  c->r[4]=c->r[4]+0x00000034u; // 801B8E58
  c->lr=0x801B8E60u; f_801CE598(c); // 801B8E5C
  c->r[3]=0u+0xFFFFFFFFu; // 801B8E60
  c->r[0]=0u+0x00000000u; // 801B8E64
  W32(c->r[31]+0x00000010u,c->r[3]); // 801B8E68
  c->r[27]=0u+0x00000000u; // 801B8E6C
  c->r[28]=R16(c->r[31]+0x00000000u); // 801B8E70
  c->r[26]=0u+0x00000000u; // 801B8E74
  W32(c->r[31]+0x00000014u,c->r[0]); // 801B8E78
  c->r[29]=0u+0x00000000u; // 801B8E7C
  c->r[30]=0u+0x00000001u; // 801B8E80
  W32(c->r[31]+0x00000018u,c->r[0]); // 801B8E84
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801B8E88
  W32(c->r[31]+0x00000020u,c->r[0]); // 801B8E8C
  W8(c->r[31]+0x0000002Bu,c->r[3]); // 801B8E90
  W8(c->r[31]+0x0000002Au,c->r[3]); // 801B8E94
  W8(c->r[31]+0x00000029u,c->r[3]); // 801B8E98
  W8(c->r[31]+0x00000028u,c->r[3]); // 801B8E9C
  W8(c->r[31]+0x00000027u,c->r[3]); // 801B8EA0
  W8(c->r[31]+0x00000026u,c->r[3]); // 801B8EA4
  W8(c->r[31]+0x00000025u,c->r[3]); // 801B8EA8
  W8(c->r[31]+0x00000024u,c->r[3]); // 801B8EAC
  goto L_801B8EE8; // 801B8EB0
L_801B8EB4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B8EB4
  c->r[3]=c->r[0]+c->r[29]; // 801B8EB8
  c->r[0]=R32(c->r[29]+c->r[0]); // 801B8EBC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B8EC0
  if (crb(c,2)) { goto L_801B8EE0; } // 801B8EC4
  c->r[4]=c->r[31]+c->r[27]; // 801B8EC8
  c->r[3]=c->r[3]+0x00000004u; // 801B8ECC
  W8(c->r[4]+0x00000024u,c->r[26]); // 801B8ED0
  c->r[4]=((c->r[27])&0x20)?0u:(c->r[30]<<((c->r[27])&31)); // 801B8ED4
  c->lr=0x801B8EDCu; f_8010610C(c); // 801B8ED8
  c->r[27]=c->r[27]+0x00000001u; // 801B8EDC
L_801B8EE0:;
  c->r[29]=c->r[29]+0x00000044u; // 801B8EE0
  c->r[26]=c->r[26]+0x00000001u; // 801B8EE4
L_801B8EE8:;
  cmpu(c,0,c->r[27],0x00000008u); // 801B8EE8
  if (!crb(c,0)) { goto L_801B8EF8; } // 801B8EEC
  cmpu(c,0,c->r[26],c->r[28]); // 801B8EF0
  if (crb(c,0)) { IRQCHK(c); goto L_801B8EB4; } // 801B8EF4
L_801B8EF8:;
  c->r[11]=c->r[1]+0x00000020u; // 801B8EF8
  c->lr=0x801B8F00u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8EFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B8F00
  c->lr=c->r[0]; // 801B8F04
  c->r[1]=c->r[1]+0x00000020u; // 801B8F08
  return; // 801B8F0C
}

// LoadLightSet__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFiPUlPUlPUlPUlPQ34nw4r3g3d11AmbLightObj
void f_801B8F10(Ctx* __restrict c) {
  trace_call(0x801B8F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8F10
  c->r[0]=c->lr; // 801B8F14
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B8F18
  c->r[11]=c->r[1]+0x00000040u; // 801B8F1C
  c->lr=0x801B8F24u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8F20
  cmps(c,0,(int32_t)c->r[4],0); // 801B8F24
  c->r[20]=c->r[3]|c->r[3]; // 801B8F28
  c->r[21]=c->r[5]|c->r[5]; // 801B8F2C
  c->r[22]=c->r[6]|c->r[6]; // 801B8F30
  c->r[23]=c->r[7]|c->r[7]; // 801B8F34
  c->r[24]=c->r[8]|c->r[8]; // 801B8F38
  if (crb(c,0)) { goto L_801B8F48; } // 801B8F3C
  cmps(c,0,(int32_t)c->r[4],128); // 801B8F40
  if (crb(c,0)) { goto L_801B8FA8; } // 801B8F44
L_801B8F48:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B8F48
  if (crb(c,2)) { goto L_801B8F58; } // 801B8F4C
  c->r[0]=0u+0x00000000u; // 801B8F50
  W32(c->r[5]+0x00000000u,c->r[0]); // 801B8F54
L_801B8F58:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B8F58
  if (crb(c,2)) { goto L_801B8F68; } // 801B8F5C
  c->r[0]=0u+0x00000000u; // 801B8F60
  W32(c->r[6]+0x00000000u,c->r[0]); // 801B8F64
L_801B8F68:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B8F68
  if (crb(c,2)) { goto L_801B8F78; } // 801B8F6C
  c->r[0]=0u+0x00000000u; // 801B8F70
  W32(c->r[7]+0x00000000u,c->r[0]); // 801B8F74
L_801B8F78:;
  cmps(c,0,(int32_t)c->r[8],0); // 801B8F78
  if (crb(c,2)) { goto L_801B8F88; } // 801B8F7C
  c->r[0]=0u+0x00000000u; // 801B8F80
  W32(c->r[8]+0x00000000u,c->r[0]); // 801B8F84
L_801B8F88:;
  cmps(c,0,(int32_t)c->r[9],0); // 801B8F88
  if (crb(c,2)) { goto L_801B9310; } // 801B8F8C
  c->r[0]=0u+0x000000FFu; // 801B8F90
  W8(c->r[9]+0x00000003u,c->r[0]); // 801B8F94
  W8(c->r[9]+0x00000002u,c->r[0]); // 801B8F98
  W8(c->r[9]+0x00000001u,c->r[0]); // 801B8F9C
  W8(c->r[9]+0x00000000u,c->r[0]); // 801B8FA0
  goto L_801B9310; // 801B8FA4
L_801B8FA8:;
  cmps(c,0,(int32_t)c->r[9],0); // 801B8FA8
  if (crb(c,2)) { goto L_801B9004; } // 801B8FAC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B8FB0
  c->r[10]=c->r[3]+c->r[0]; // 801B8FB4
  c->r[0]=R8(c->r[10]+0x00002434u); // 801B8FB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B8FBC
  if (!crb(c,0)) { goto L_801B8FDC; } // 801B8FC0
  c->r[0]=0u+0x000000FFu; // 801B8FC4
  W8(c->r[9]+0x00000003u,c->r[0]); // 801B8FC8
  W8(c->r[9]+0x00000002u,c->r[0]); // 801B8FCC
  W8(c->r[9]+0x00000001u,c->r[0]); // 801B8FD0
  W8(c->r[9]+0x00000000u,c->r[0]); // 801B8FD4
  goto L_801B9004; // 801B8FD8
L_801B8FDC:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B8FDC
  c->r[10]=c->r[3]+c->r[0]; // 801B8FE0
  c->r[0]=R8(c->r[10]+0x0000222Cu); // 801B8FE4
  W8(c->r[9]+0x00000000u,c->r[0]); // 801B8FE8
  c->r[0]=R8(c->r[10]+0x0000222Du); // 801B8FEC
  W8(c->r[9]+0x00000001u,c->r[0]); // 801B8FF0
  c->r[0]=R8(c->r[10]+0x0000222Eu); // 801B8FF4
  W8(c->r[9]+0x00000002u,c->r[0]); // 801B8FF8
  c->r[0]=R8(c->r[10]+0x0000222Fu); // 801B8FFC
  W8(c->r[9]+0x00000003u,c->r[0]); // 801B9000
L_801B9004:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B9004
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B9008
  if (!crb(c,2)) { goto L_801B9054; } // 801B900C
  cmps(c,0,(int32_t)c->r[5],0); // 801B9010
  if (crb(c,2)) { goto L_801B9020; } // 801B9014
  c->r[0]=R32(c->r[3]+0x00000014u); // 801B9018
  W32(c->r[5]+0x00000000u,c->r[0]); // 801B901C
L_801B9020:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B9020
  if (crb(c,2)) { goto L_801B9030; } // 801B9024
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B9028
  W32(c->r[6]+0x00000000u,c->r[0]); // 801B902C
L_801B9030:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B9030
  if (crb(c,2)) { goto L_801B9040; } // 801B9034
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B9038
  W32(c->r[7]+0x00000000u,c->r[0]); // 801B903C
L_801B9040:;
  cmps(c,0,(int32_t)c->r[8],0); // 801B9040
  if (crb(c,2)) { goto L_801B9310; } // 801B9044
  c->r[0]=R32(c->r[3]+0x00000020u); // 801B9048
  W32(c->r[8]+0x00000000u,c->r[0]); // 801B904C
  goto L_801B9310; // 801B9050
L_801B9054:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B9054
  c->r[0]=0u+0x00000000u; // 801B9058
  W32(c->r[3]+0x00000014u,c->r[0]); // 801B905C
  c->r[27]=0u+0x00000000u; // 801B9060
  c->r[31]=0u+0x00000001u; // 801B9064
  c->r[5]=c->r[3]+c->r[5]; // 801B9068
  c->r[28]=c->r[5]+0x0000242Cu; // 801B906C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801B9070
  c->r[18]=c->r[28]|c->r[28]; // 801B9074
  c->r[19]=0u+0x00000002u; // 801B9078
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801B907C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801B9080
  W32(c->r[3]+0x00000010u,c->r[4]); // 801B9084
L_801B9088:;
  c->r[26]=R8(c->r[18]+0x00000000u); // 801B9088
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[26]; cr0(c,c->r[4]); // 801B908C
  if (crb(c,0)) { goto L_801B92C0; } // 801B9090
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 801B9094
  c->r[29]=c->r[20]+c->r[0]; // 801B9098
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 801B909C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B90A0
  if (crb(c,2)) { goto L_801B92C0; } // 801B90A4
  c->r[5]=c->r[20]+0x00000024u; // 801B90A8
  c->r[3]=c->r[20]+0x0000002Cu; // 801B90AC
  goto L_801B90B8; // 801B90B0
L_801B90B4:;
  c->r[5]=c->r[5]+0x00000001u; // 801B90B4
L_801B90B8:;
  cmpu(c,0,c->r[5],c->r[3]); // 801B90B8
  if (crb(c,2)) { goto L_801B90D0; } // 801B90BC
  c->r[0]=R8(c->r[5]+0x00000000u); // 801B90C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B90C4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B90C8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B90B4; } // 801B90CC
L_801B90D0:;
  c->r[3]=c->r[20]+0x0000002Cu; // 801B90D0
  cmpu(c,0,c->r[5],c->r[3]); // 801B90D4
  if (!crb(c,2)) { goto L_801B924C; } // 801B90D8
  c->r[4]=R32(c->r[13]+0xFFFF9080u); // 801B90DC
  c->r[30]=c->r[20]+0x00000024u; // 801B90E0
  goto L_801B90EC; // 801B90E4
L_801B90E8:;
  c->r[30]=c->r[30]+0x00000001u; // 801B90E8
L_801B90EC:;
  cmpu(c,0,c->r[30],c->r[3]); // 801B90EC
  if (crb(c,2)) { goto L_801B9104; } // 801B90F0
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B90F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B90F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B90FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B90E8; } // 801B9100
L_801B9104:;
  c->r[0]=c->r[20]+0x0000002Cu; // 801B9104
  cmpu(c,0,c->r[30],c->r[0]); // 801B9108
  if (crb(c,2)) { goto L_801B9130; } // 801B910C
  c->r[0]=c->r[20]+0x00000024u; // 801B9110
  c->r[3]=c->r[29]+0x00000030u; // 801B9114
  c->r[0]=c->r[30]-c->r[0]; // 801B9118
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 801B911C
  c->r[4]=c->r[25]|c->r[25]; // 801B9120
  c->lr=0x801B9128u; f_8010610C(c); // 801B9124
  W8(c->r[30]+0x00000000u,c->r[26]); // 801B9128
  goto L_801B9258; // 801B912C
L_801B9130:;
  c->r[4]=c->r[28]+0x00000008u; // 801B9130
  c->r[30]=0u+0x00000000u; // 801B9134
  c->ctr=c->r[19]; // 801B9138
L_801B913C:;
  c->r[5]=c->r[28]|c->r[28]; // 801B913C
  c->r[6]=c->r[20]+c->r[30]; // 801B9140
  goto L_801B914C; // 801B9144
L_801B9148:;
  c->r[5]=c->r[5]+0x00000001u; // 801B9148
L_801B914C:;
  cmpu(c,0,c->r[5],c->r[4]); // 801B914C
  if (crb(c,2)) { goto L_801B916C; } // 801B9150
  c->r[3]=R8(c->r[5]+0x00000000u); // 801B9154
  c->r[0]=R8(c->r[6]+0x00000024u); // 801B9158
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801B915C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B9160
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B9164
  if (!crb(c,2)) { IRQCHK(c); goto L_801B9148; } // 801B9168
L_801B916C:;
  cmpu(c,0,c->r[5],c->r[4]); // 801B916C
  if (crb(c,2)) { goto L_801B9230; } // 801B9170
  c->r[30]=c->r[30]+0x00000001u; // 801B9174
  c->r[5]=c->r[28]|c->r[28]; // 801B9178
  c->r[6]=c->r[20]+c->r[30]; // 801B917C
  goto L_801B9188; // 801B9180
L_801B9184:;
  c->r[5]=c->r[5]+0x00000001u; // 801B9184
L_801B9188:;
  cmpu(c,0,c->r[5],c->r[4]); // 801B9188
  if (crb(c,2)) { goto L_801B91A8; } // 801B918C
  c->r[3]=R8(c->r[5]+0x00000000u); // 801B9190
  c->r[0]=R8(c->r[6]+0x00000024u); // 801B9194
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801B9198
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B919C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B91A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B9184; } // 801B91A4
L_801B91A8:;
  cmpu(c,0,c->r[5],c->r[4]); // 801B91A8
  if (crb(c,2)) { goto L_801B9230; } // 801B91AC
  c->r[30]=c->r[30]+0x00000001u; // 801B91B0
  c->r[5]=c->r[28]|c->r[28]; // 801B91B4
  c->r[6]=c->r[20]+c->r[30]; // 801B91B8
  goto L_801B91C4; // 801B91BC
L_801B91C0:;
  c->r[5]=c->r[5]+0x00000001u; // 801B91C0
L_801B91C4:;
  cmpu(c,0,c->r[5],c->r[4]); // 801B91C4
  if (crb(c,2)) { goto L_801B91E4; } // 801B91C8
  c->r[3]=R8(c->r[5]+0x00000000u); // 801B91CC
  c->r[0]=R8(c->r[6]+0x00000024u); // 801B91D0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801B91D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B91D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B91DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B91C0; } // 801B91E0
L_801B91E4:;
  cmpu(c,0,c->r[5],c->r[4]); // 801B91E4
  if (crb(c,2)) { goto L_801B9230; } // 801B91E8
  c->r[30]=c->r[30]+0x00000001u; // 801B91EC
  c->r[5]=c->r[28]|c->r[28]; // 801B91F0
  c->r[6]=c->r[20]+c->r[30]; // 801B91F4
  goto L_801B9200; // 801B91F8
L_801B91FC:;
  c->r[5]=c->r[5]+0x00000001u; // 801B91FC
L_801B9200:;
  cmpu(c,0,c->r[5],c->r[4]); // 801B9200
  if (crb(c,2)) { goto L_801B9220; } // 801B9204
  c->r[3]=R8(c->r[5]+0x00000000u); // 801B9208
  c->r[0]=R8(c->r[6]+0x00000024u); // 801B920C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801B9210
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B9214
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B9218
  if (!crb(c,2)) { IRQCHK(c); goto L_801B91FC; } // 801B921C
L_801B9220:;
  cmpu(c,0,c->r[5],c->r[4]); // 801B9220
  if (crb(c,2)) { goto L_801B9230; } // 801B9224
  c->r[30]=c->r[30]+0x00000001u; // 801B9228
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B913C; } // 801B922C
L_801B9230:;
  c->r[25]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 801B9230
  c->r[3]=c->r[29]+0x00000030u; // 801B9234
  c->r[4]=c->r[25]|c->r[25]; // 801B9238
  c->lr=0x801B9240u; f_8010610C(c); // 801B923C
  c->r[3]=c->r[20]+c->r[30]; // 801B9240
  W8(c->r[3]+0x00000024u,c->r[26]); // 801B9244
  goto L_801B9258; // 801B9248
L_801B924C:;
  c->r[0]=c->r[20]+0x00000024u; // 801B924C
  c->r[0]=c->r[5]-c->r[0]; // 801B9250
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 801B9254
L_801B9258:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 801B9258
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801B925C
  if (crb(c,2)) { goto L_801B9294; } // 801B9260
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801B9264
  if (!crb(c,2)) { goto L_801B9278; } // 801B9268
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 801B926C
  c->r[0]=c->r[0]|c->r[25]; // 801B9270
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 801B9274
L_801B9278:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 801B9278
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B927C
  if (!crb(c,2)) { goto L_801B92C0; } // 801B9280
  c->r[0]=R32(c->r[20]+0x00000020u); // 801B9284
  c->r[0]=c->r[0]|c->r[25]; // 801B9288
  W32(c->r[20]+0x00000020u,c->r[0]); // 801B928C
  goto L_801B92C0; // 801B9290
L_801B9294:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801B9294
  if (!crb(c,2)) { goto L_801B92A8; } // 801B9298
  c->r[0]=R32(c->r[20]+0x00000014u); // 801B929C
  c->r[0]=c->r[0]|c->r[25]; // 801B92A0
  W32(c->r[20]+0x00000014u,c->r[0]); // 801B92A4
L_801B92A8:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 801B92A8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B92AC
  if (!crb(c,2)) { goto L_801B92C0; } // 801B92B0
  c->r[0]=R32(c->r[20]+0x00000018u); // 801B92B4
  c->r[0]=c->r[0]|c->r[25]; // 801B92B8
  W32(c->r[20]+0x00000018u,c->r[0]); // 801B92BC
L_801B92C0:;
  c->r[27]=c->r[27]+0x00000001u; // 801B92C0
  c->r[18]=c->r[18]+0x00000001u; // 801B92C4
  cmpu(c,0,c->r[27],0x00000008u); // 801B92C8
  if (crb(c,0)) { IRQCHK(c); goto L_801B9088; } // 801B92CC
  cmps(c,0,(int32_t)c->r[21],0); // 801B92D0
  if (crb(c,2)) { goto L_801B92E0; } // 801B92D4
  c->r[0]=R32(c->r[20]+0x00000014u); // 801B92D8
  W32(c->r[21]+0x00000000u,c->r[0]); // 801B92DC
L_801B92E0:;
  cmps(c,0,(int32_t)c->r[22],0); // 801B92E0
  if (crb(c,2)) { goto L_801B92F0; } // 801B92E4
  c->r[0]=R32(c->r[20]+0x00000018u); // 801B92E8
  W32(c->r[22]+0x00000000u,c->r[0]); // 801B92EC
L_801B92F0:;
  cmps(c,0,(int32_t)c->r[23],0); // 801B92F0
  if (crb(c,2)) { goto L_801B9300; } // 801B92F4
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 801B92F8
  W32(c->r[23]+0x00000000u,c->r[0]); // 801B92FC
L_801B9300:;
  cmps(c,0,(int32_t)c->r[24],0); // 801B9300
  if (crb(c,2)) { goto L_801B9310; } // 801B9304
  c->r[0]=R32(c->r[20]+0x00000020u); // 801B9308
  W32(c->r[24]+0x00000000u,c->r[0]); // 801B930C
L_801B9310:;
  c->r[11]=c->r[1]+0x00000040u; // 801B9310
  c->lr=0x801B9318u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9314
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B9318
  c->lr=c->r[0]; // 801B931C
  c->r[1]=c->r[1]+0x00000040u; // 801B9320
  return; // 801B9324
}

// __ct__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@14CameraMtxStateFv
void f_801B9328(Ctx* __restrict c) {
  trace_call(0x801B9328u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9328
  c->r[0]=c->lr; // 801B932C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9330
  c->r[11]=c->r[1]+0x00000020u; // 801B9334
  c->lr=0x801B933Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9338
  c->r[0]=0u+0x00000000u; // 801B933C
  c->r[26]=c->r[3]|c->r[3]; // 801B9340
  W16(c->r[3]+0x00000000u,c->r[0]); // 801B9344
  W16(c->r[3]+0x00000002u,c->r[0]); // 801B9348
  c->r[3]=c->r[3]+0x00000004u; // 801B934C
  c->lr=0x801B9354u; f_800EC094(c); // 801B9350
  c->r[31]=c->r[26]+0x00000034u; // 801B9354
  c->r[30]=c->r[26]+0x00000634u; // 801B9358
  c->r[29]=c->r[26]+0x00000E34u; // 801B935C
  c->r[28]=c->r[26]+0x00001434u; // 801B9360
  c->r[27]=0u+0x00000000u; // 801B9364
L_801B9368:;
  c->r[3]=c->r[31]|c->r[31]; // 801B9368
  c->lr=0x801B9370u; f_800EC094(c); // 801B936C
  c->r[3]=c->r[30]|c->r[30]; // 801B9370
  c->lr=0x801B9378u; f_801DBBA8(c); // 801B9374
  c->r[3]=c->r[29]|c->r[29]; // 801B9378
  c->lr=0x801B9380u; f_800EC094(c); // 801B937C
  c->r[3]=c->r[28]|c->r[28]; // 801B9380
  c->lr=0x801B9388u; f_800EC094(c); // 801B9384
  c->r[27]=c->r[27]+0x00000001u; // 801B9388
  c->r[30]=c->r[30]+0x00000040u; // 801B938C
  cmpu(c,0,c->r[27],0x00000020u); // 801B9390
  c->r[29]=c->r[29]+0x00000030u; // 801B9394
  c->r[28]=c->r[28]+0x00000030u; // 801B9398
  c->r[31]=c->r[31]+0x00000030u; // 801B939C
  if (crb(c,0)) { IRQCHK(c); goto L_801B9368; } // 801B93A0
  c->r[11]=c->r[1]+0x00000020u; // 801B93A4
  c->r[3]=c->r[26]|c->r[26]; // 801B93A8
  c->lr=0x801B93B0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B93AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B93B0
  c->lr=c->r[0]; // 801B93B4
  c->r[1]=c->r[1]+0x00000020u; // 801B93B8
  return; // 801B93BC
}

// LoadResMatMisc__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatMisc
void f_801B93C0(Ctx* __restrict c) {
  trace_call(0x801B93C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B93C0
  c->r[0]=c->lr; // 801B93C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B93C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B93CC
  cmps(c,0,(int32_t)c->r[0],0); // 801B93D0
  if (crb(c,2)) { goto L_801B9420; } // 801B93D4
  c->lr=0x801B93DCu; f_801ABC30(c); // 801B93D8
  c->r[0]=R32(c->r[13]+0xFFFF9D60u); // 801B93DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B93E0
  if (crb(c,2)) { goto L_801B93FC; } // 801B93E4
  c->r[4]=c->r[13]+0xFFFF9D60u; // 801B93E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B93EC
  c->r[4]=R8(c->r[4]+0x00000004u); // 801B93F0
  cmpu(c,0,c->r[4],c->r[0]); // 801B93F4
  if (crb(c,2)) { goto L_801B9420; } // 801B93F8
L_801B93FC:;
  c->r[0]=R32(c->r[13]+0xFFFF9D60u); // 801B93FC
  c->r[4]=c->r[13]+0xFFFF9D60u; // 801B9400
  W8(c->r[4]+0x00000004u,c->r[3]); // 801B9404
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801B9408
  c->r[0]=c->r[0]|0x00000001u; // 801B940C
  W32(c->r[13]+0xFFFF9D60u,c->r[0]); // 801B9410
  c->lr=0x801B9418u; f_8010842C(c); // 801B9414
  c->r[0]=0u+0x00000001u; // 801B9418
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801B941C
L_801B9420:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9420
  c->lr=c->r[0]; // 801B9424
  c->r[1]=c->r[1]+0x00000010u; // 801B9428
  return; // 801B942C
}

// LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj
void f_801B9430(Ctx* __restrict c) {
  trace_call(0x801B9430u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9430
  c->r[0]=c->lr; // 801B9434
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B9438
  c->r[11]=c->r[1]+0x00000030u; // 801B943C
  c->lr=0x801B9444u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9440
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B9444
  c->r[0]=0u-c->r[4]; // 801B9448
  c->r[0]=c->r[0]|c->r[4]; // 801B944C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801B9450
  if (crb(c,2)) { goto L_801B9680; } // 801B9454
  c->r[3]=0u+0x80350000u; // 801B9458
  c->r[25]=0u+0x80350000u; // 801B945C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801B9460
  c->r[31]=c->r[3]+0xFFFF9360u; // 801B9464
  c->r[26]=c->r[25]+0xFFFF92ECu; // 801B9468
  c->r[28]=0u+0x00000000u; // 801B946C
  c->r[27]=0u+0x00000000u; // 801B9470
  c->r[30]=0u+0x00000001u; // 801B9474
L_801B9478:;
  c->r[4]=c->r[28]|c->r[28]; // 801B9478
  c->r[3]=c->r[1]+0x00000008u; // 801B947C
  c->lr=0x801B9484u; f_801AB7C8(c); // 801B9480
  cmps(c,0,(int32_t)c->r[3],0); // 801B9484
  if (crb(c,2)) { goto L_801B9668; } // 801B9488
  c->r[4]=c->r[28]|c->r[28]; // 801B948C
  c->r[3]=c->r[1]+0x00000008u; // 801B9490
  c->lr=0x801B9498u; f_801AB760(c); // 801B9494
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[30]<<((c->r[28])&31)); // 801B9498
  c->r[4]=R8(c->r[31]+0x00000100u); // 801B949C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B94A0
  c->r[29]=c->r[3]|c->r[3]; // 801B94A4
  c->r[4]=c->r[4]&c->r[0]; cr0(c,c->r[4]); // 801B94A8
  if (crb(c,2)) { goto L_801B95D4; } // 801B94AC
  c->r[9]=R32(c->r[3]+0x00000000u); // 801B94B0
  c->r[4]=0u+0x00000000u; // 801B94B4
  c->r[8]=R32(c->r[31]+c->r[27]); // 801B94B8
  c->r[5]=0u+0x00000000u; // 801B94BC
  c->r[6]=0u+0x00000000u; // 801B94C0
  c->r[7]=0u+0x00000000u; // 801B94C4
  cmpu(c,0,c->r[9],c->r[8]); // 801B94C8
  c->r[10]=0u+0x00000000u; // 801B94CC
  c->r[11]=0u+0x00000000u; // 801B94D0
  c->r[12]=0u+0x00000000u; // 801B94D4
  if (!crb(c,2)) { goto L_801B94F4; } // 801B94D8
  c->r[8]=c->r[31]+c->r[27]; // 801B94DC
  c->r[9]=R32(c->r[3]+0x00000004u); // 801B94E0
  c->r[8]=R32(c->r[8]+0x00000004u); // 801B94E4
  cmpu(c,0,c->r[9],c->r[8]); // 801B94E8
  if (!crb(c,2)) { goto L_801B94F4; } // 801B94EC
  c->r[12]=0u+0x00000001u; // 801B94F0
L_801B94F4:;
  cmps(c,0,(int32_t)c->r[12],0); // 801B94F4
  if (crb(c,2)) { goto L_801B9518; } // 801B94F8
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801B94FC
  c->r[9]=R32(c->r[3]+0x00000008u); // 801B9500
  c->r[8]=c->r[31]+c->r[8]; // 801B9504
  c->r[8]=R32(c->r[8]+0x00000008u); // 801B9508
  cmpu(c,0,c->r[9],c->r[8]); // 801B950C
  if (!crb(c,2)) { goto L_801B9518; } // 801B9510
  c->r[11]=0u+0x00000001u; // 801B9514
L_801B9518:;
  cmps(c,0,(int32_t)c->r[11],0); // 801B9518
  if (crb(c,2)) { goto L_801B953C; } // 801B951C
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801B9520
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 801B9524
  c->r[8]=c->r[31]+c->r[8]; // 801B9528
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 801B952C
  cmpu(c,0,c->r[9],c->r[8]); // 801B9530
  if (!crb(c,2)) { goto L_801B953C; } // 801B9534
  c->r[10]=0u+0x00000001u; // 801B9538
L_801B953C:;
  cmps(c,0,(int32_t)c->r[10],0); // 801B953C
  if (crb(c,2)) { goto L_801B9560; } // 801B9540
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801B9544
  c->r[9]=R32(c->r[3]+0x00000010u); // 801B9548
  c->r[8]=c->r[31]+c->r[8]; // 801B954C
  c->r[8]=R32(c->r[8]+0x00000010u); // 801B9550
  cmpu(c,0,c->r[9],c->r[8]); // 801B9554
  if (!crb(c,2)) { goto L_801B9560; } // 801B9558
  c->r[7]=0u+0x00000001u; // 801B955C
L_801B9560:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B9560
  if (crb(c,2)) { goto L_801B9584; } // 801B9564
  c->r[7]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801B9568
  c->r[8]=R32(c->r[3]+0x00000014u); // 801B956C
  c->r[7]=c->r[31]+c->r[7]; // 801B9570
  c->r[7]=R32(c->r[7]+0x00000014u); // 801B9574
  cmpu(c,0,c->r[8],c->r[7]); // 801B9578
  if (!crb(c,2)) { goto L_801B9584; } // 801B957C
  c->r[6]=0u+0x00000001u; // 801B9580
L_801B9584:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B9584
  if (crb(c,2)) { goto L_801B95A8; } // 801B9588
  c->r[6]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801B958C
  c->r[7]=R32(c->r[3]+0x00000018u); // 801B9590
  c->r[6]=c->r[31]+c->r[6]; // 801B9594
  c->r[6]=R32(c->r[6]+0x00000018u); // 801B9598
  cmpu(c,0,c->r[7],c->r[6]); // 801B959C
  if (!crb(c,2)) { goto L_801B95A8; } // 801B95A0
  c->r[5]=0u+0x00000001u; // 801B95A4
L_801B95A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B95A8
  if (crb(c,2)) { goto L_801B95CC; } // 801B95AC
  c->r[5]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801B95B0
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 801B95B4
  c->r[5]=c->r[31]+c->r[5]; // 801B95B8
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 801B95BC
  cmpu(c,0,c->r[6],c->r[5]); // 801B95C0
  if (!crb(c,2)) { goto L_801B95CC; } // 801B95C4
  c->r[4]=0u+0x00000001u; // 801B95C8
L_801B95CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B95CC
  if (!crb(c,2)) { goto L_801B9668; } // 801B95D0
L_801B95D4:;
  c->r[5]=R8(c->r[31]+0x00000100u); // 801B95D4
  c->r[4]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801B95D8
  c->r[6]=c->r[31]+c->r[4]; // 801B95DC
  c->r[0]=c->r[5]|c->r[0]; // 801B95E0
  c->r[4]=c->r[28]|c->r[28]; // 801B95E4
  W8(c->r[31]+0x00000100u,c->r[0]); // 801B95E8
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B95EC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B95F0
  W32(c->r[6]+0x00000000u,c->r[5]); // 801B95F4
  W32(c->r[6]+0x00000004u,c->r[0]); // 801B95F8
  c->r[5]=R32(c->r[3]+0x00000008u); // 801B95FC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B9600
  W32(c->r[6]+0x00000008u,c->r[5]); // 801B9604
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801B9608
  c->r[5]=R32(c->r[3]+0x00000010u); // 801B960C
  c->r[0]=R32(c->r[3]+0x00000014u); // 801B9610
  W32(c->r[6]+0x00000010u,c->r[5]); // 801B9614
  W32(c->r[6]+0x00000014u,c->r[0]); // 801B9618
  c->r[5]=R32(c->r[3]+0x00000018u); // 801B961C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801B9620
  c->r[3]=c->r[29]|c->r[29]; // 801B9624
  W32(c->r[6]+0x00000018u,c->r[5]); // 801B9628
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 801B962C
  c->lr=0x801B9634u; f_80106C34(c); // 801B9630
  c->r[3]=c->r[29]|c->r[29]; // 801B9634
  c->lr=0x801B963Cu; f_801069A4(c); // 801B9638
  c->r[24]=c->r[3]|c->r[3]; // 801B963C
  c->r[3]=c->r[29]|c->r[29]; // 801B9640
  c->lr=0x801B9648u; f_80106990(c); // 801B9644
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801B9648
  c->r[4]=c->r[26]+c->r[0]; // 801B964C
  W16(c->r[4]+0x00000004u,c->r[3]); // 801B9650
  W16(c->r[4]+0x00000006u,c->r[24]); // 801B9654
  c->r[0]=R32(c->r[25]+0xFFFF92ECu); // 801B9658
  c->r[0]=c->r[0]|0x00000002u; // 801B965C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801B9660
  W32(c->r[25]+0xFFFF92ECu,c->r[0]); // 801B9664
L_801B9668:;
  c->r[28]=c->r[28]+0x00000001u; // 801B9668
  c->r[27]=c->r[27]+0x00000020u; // 801B966C
  cmpu(c,0,c->r[28],0x00000008u); // 801B9670
  if (crb(c,0)) { IRQCHK(c); goto L_801B9478; } // 801B9674
  c->r[0]=0u+0x00000001u; // 801B9678
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801B967C
L_801B9680:;
  c->r[11]=c->r[1]+0x00000030u; // 801B9680
  c->lr=0x801B9688u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9684
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B9688
  c->lr=c->r[0]; // 801B968C
  c->r[1]=c->r[1]+0x00000030u; // 801B9690
  return; // 801B9694
}

// LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj
void f_801B9698(Ctx* __restrict c) {
  trace_call(0x801B9698u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9698
  c->r[0]=c->lr; // 801B969C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B96A0
  c->r[11]=c->r[1]+0x00000030u; // 801B96A4
  c->lr=0x801B96ACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B96A8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B96AC
  c->r[0]=0u-c->r[3]; // 801B96B0
  c->r[0]=c->r[0]|c->r[3]; // 801B96B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801B96B8
  if (crb(c,2)) { goto L_801B97CC; } // 801B96BC
  c->r[27]=0u+0x80350000u; // 801B96C0
  c->r[28]=0u+0x80350000u; // 801B96C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B96C8
  c->r[27]=c->r[27]+0xFFFF9480u; // 801B96CC
  c->r[28]=c->r[28]+0xFFFF9360u; // 801B96D0
  c->r[30]=0u+0x00000000u; // 801B96D4
  c->r[29]=0u+0x00000000u; // 801B96D8
  c->r[31]=0u+0x00000001u; // 801B96DC
L_801B96E0:;
  c->r[4]=c->r[30]|c->r[30]; // 801B96E0
  c->r[3]=c->r[1]+0x00000008u; // 801B96E4
  c->lr=0x801B96ECu; f_801AB930(c); // 801B96E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B96EC
  if (crb(c,2)) { goto L_801B97B4; } // 801B96F0
  c->r[4]=c->r[30]|c->r[30]; // 801B96F4
  c->r[3]=c->r[1]+0x00000008u; // 801B96F8
  c->lr=0x801B9700u; f_801AB8C8(c); // 801B96FC
  c->r[4]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 801B9700
  c->r[0]=R16(c->r[27]+0x00000060u); // 801B9704
  c->r[6]=rotl(c->r[4],0)&0x0000FFFFu; // 801B9708
  c->r[0]=c->r[0]&c->r[6]; cr0(c,c->r[0]); // 801B970C
  if (crb(c,2)) { goto L_801B9770; } // 801B9710
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B9714
  c->r[7]=0u+0x00000000u; // 801B9718
  c->r[0]=R32(c->r[27]+c->r[29]); // 801B971C
  c->r[8]=0u+0x00000000u; // 801B9720
  cmpu(c,0,c->r[4],c->r[0]); // 801B9724
  if (!crb(c,2)) { goto L_801B9744; } // 801B9728
  c->r[4]=c->r[27]+c->r[29]; // 801B972C
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B9730
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B9734
  cmpu(c,0,c->r[5],c->r[0]); // 801B9738
  if (!crb(c,2)) { goto L_801B9744; } // 801B973C
  c->r[8]=0u+0x00000001u; // 801B9740
L_801B9744:;
  cmps(c,0,(int32_t)c->r[8],0); // 801B9744
  if (crb(c,2)) { goto L_801B9768; } // 801B9748
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801B974C
  c->r[5]=R32(c->r[3]+0x00000008u); // 801B9750
  c->r[4]=c->r[27]+c->r[0]; // 801B9754
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B9758
  cmpu(c,0,c->r[5],c->r[0]); // 801B975C
  if (!crb(c,2)) { goto L_801B9768; } // 801B9760
  c->r[7]=0u+0x00000001u; // 801B9764
L_801B9768:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B9768
  if (!crb(c,2)) { goto L_801B97B4; } // 801B976C
L_801B9770:;
  c->r[5]=R16(c->r[27]+0x00000060u); // 801B9770
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801B9774
  c->r[4]=c->r[30]|c->r[30]; // 801B9778
  c->r[5]=c->r[5]|c->r[6]; // 801B977C
  W16(c->r[27]+0x00000060u,c->r[5]); // 801B9780
  c->r[6]=c->r[27]+c->r[0]; // 801B9784
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B9788
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B978C
  W32(c->r[6]+0x00000000u,c->r[5]); // 801B9790
  W32(c->r[6]+0x00000004u,c->r[0]); // 801B9794
  c->r[0]=R32(c->r[3]+0x00000008u); // 801B9798
  W32(c->r[6]+0x00000008u,c->r[0]); // 801B979C
  c->lr=0x801B97A4u; f_80106CB0(c); // 801B97A0
  c->r[3]=R8(c->r[28]+0x00000100u); // 801B97A4
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 801B97A8
  c->r[0]=c->r[3]&~c->r[0]; // 801B97AC
  W8(c->r[28]+0x00000100u,c->r[0]); // 801B97B0
L_801B97B4:;
  c->r[30]=c->r[30]+0x00000001u; // 801B97B4
  c->r[29]=c->r[29]+0x0000000Cu; // 801B97B8
  cmpu(c,0,c->r[30],0x00000008u); // 801B97BC
  if (crb(c,0)) { IRQCHK(c); goto L_801B96E0; } // 801B97C0
  c->r[0]=0u+0x00000001u; // 801B97C4
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801B97C8
L_801B97CC:;
  c->r[11]=c->r[1]+0x00000030u; // 801B97CC
  c->lr=0x801B97D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B97D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B97D4
  c->lr=c->r[0]; // 801B97D8
  c->r[1]=c->r[1]+0x00000030u; // 801B97DC
  return; // 801B97E0
}

// LoadResGenMode__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResGenMode
void f_801B97E4(Ctx* __restrict c) {
  trace_call(0x801B97E4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B97E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B97E8
  if (crb(c,2)) return; // 801B97EC
  c->r[4]=0u+0x80350000u; // 801B97F0
  c->r[4]=R8(c->r[4]+0xFFFF92E0u); // 801B97F4
  if (crb(c,2)) { goto L_801B9804; } // 801B97F8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B97FC
  goto L_801B9808; // 801B9800
L_801B9804:;
  c->r[0]=0u+0x00000000u; // 801B9804
L_801B9808:;
  cmpu(c,0,c->r[4],c->r[0]); // 801B9808
  if (crb(c,2)) { goto L_801B983C; } // 801B980C
  cmps(c,0,(int32_t)c->r[3],0); // 801B9810
  if (crb(c,2)) { goto L_801B9820; } // 801B9814
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B9818
  goto L_801B9824; // 801B981C
L_801B9820:;
  c->r[0]=0u+0x00000000u; // 801B9820
L_801B9824:;
  c->r[5]=0u+0x80350000u; // 801B9824
  c->r[4]=c->r[5]+0xFFFF92E0u; // 801B9828
  W8(c->r[5]+0xFFFF92E0u,c->r[0]); // 801B982C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B9830
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B9834
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B9838
L_801B983C:;
  c->r[4]=0u+0x80350000u; // 801B983C
  cmps(c,0,(int32_t)c->r[3],0); // 801B9840
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B9844
  c->r[4]=R8(c->r[4]+0x00000001u); // 801B9848
  if (crb(c,2)) { goto L_801B9858; } // 801B984C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B9850
  goto L_801B985C; // 801B9854
L_801B9858:;
  c->r[0]=0u+0x00000000u; // 801B9858
L_801B985C:;
  cmpu(c,0,c->r[4],c->r[0]); // 801B985C
  if (crb(c,2)) { goto L_801B9890; } // 801B9860
  cmps(c,0,(int32_t)c->r[3],0); // 801B9864
  if (crb(c,2)) { goto L_801B9874; } // 801B9868
  c->r[5]=R8(c->r[3]+0x00000001u); // 801B986C
  goto L_801B9878; // 801B9870
L_801B9874:;
  c->r[5]=0u+0x00000000u; // 801B9874
L_801B9878:;
  c->r[4]=0u+0x80350000u; // 801B9878
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B987C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B9880
  W8(c->r[4]+0x00000001u,c->r[5]); // 801B9884
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801B9888
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B988C
L_801B9890:;
  c->r[4]=0u+0x80350000u; // 801B9890
  cmps(c,0,(int32_t)c->r[3],0); // 801B9894
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B9898
  c->r[4]=R8(c->r[4]+0x00000002u); // 801B989C
  if (crb(c,2)) { goto L_801B98AC; } // 801B98A0
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B98A4
  goto L_801B98B0; // 801B98A8
L_801B98AC:;
  c->r[0]=0u+0x00000000u; // 801B98AC
L_801B98B0:;
  cmpu(c,0,c->r[4],c->r[0]); // 801B98B0
  if (crb(c,2)) { goto L_801B98E4; } // 801B98B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B98B8
  if (crb(c,2)) { goto L_801B98C8; } // 801B98BC
  c->r[5]=R8(c->r[3]+0x00000002u); // 801B98C0
  goto L_801B98CC; // 801B98C4
L_801B98C8:;
  c->r[5]=0u+0x00000000u; // 801B98C8
L_801B98CC:;
  c->r[4]=0u+0x80350000u; // 801B98CC
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B98D0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B98D4
  W8(c->r[4]+0x00000002u,c->r[5]); // 801B98D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801B98DC
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B98E0
L_801B98E4:;
  c->r[4]=0u+0x80350000u; // 801B98E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B98E8
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B98EC
  c->r[4]=R8(c->r[4]+0x00000003u); // 801B98F0
  if (crb(c,2)) { goto L_801B9900; } // 801B98F4
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B98F8
  goto L_801B9904; // 801B98FC
L_801B9900:;
  c->r[0]=0u+0x00000000u; // 801B9900
L_801B9904:;
  cmpu(c,0,c->r[4],c->r[0]); // 801B9904
  if (crb(c,2)) { goto L_801B9938; } // 801B9908
  cmps(c,0,(int32_t)c->r[3],0); // 801B990C
  if (crb(c,2)) { goto L_801B991C; } // 801B9910
  c->r[5]=R8(c->r[3]+0x00000003u); // 801B9914
  goto L_801B9920; // 801B9918
L_801B991C:;
  c->r[5]=0u+0x00000000u; // 801B991C
L_801B9920:;
  c->r[4]=0u+0x80350000u; // 801B9920
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B9924
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B9928
  W8(c->r[4]+0x00000003u,c->r[5]); // 801B992C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801B9930
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B9934
L_801B9938:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B9938
  if (crb(c,2)) { goto L_801B9948; } // 801B993C
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B9940
  goto L_801B994C; // 801B9944
L_801B9948:;
  c->r[5]=0u+0x00000003u; // 801B9948
L_801B994C:;
  c->r[4]=0u+0x80350000u; // 801B994C
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B9950
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B9954
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801B9958
  if (crb(c,2)) { goto L_801B998C; } // 801B995C
  cmps(c,0,(int32_t)c->r[3],0); // 801B9960
  if (crb(c,2)) { goto L_801B9970; } // 801B9964
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B9968
  goto L_801B9974; // 801B996C
L_801B9970:;
  c->r[4]=0u+0x00000003u; // 801B9970
L_801B9974:;
  c->r[3]=0u+0x80350000u; // 801B9974
  c->r[3]=c->r[3]+0xFFFF92E0u; // 801B9978
  c->r[0]=R32(c->r[3]+0x00000008u); // 801B997C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801B9980
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801B9984
  W32(c->r[3]+0x00000008u,c->r[0]); // 801B9988
L_801B998C:;
  c->r[4]=0u+0x80350000u; // 801B998C
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B9990
  c->r[3]=R32(c->r[4]+0x00000008u); // 801B9994
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B9998
  if (!crb(c,2)) return; // 801B999C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFCu; // 801B99A0
  c->r[0]=c->r[0]|0x00000004u; // 801B99A4
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B99A8
  return; // 801B99AC
}

// LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev
void f_801B99B0(Ctx* __restrict c) {
  trace_call(0x801B99B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B99B0
  c->r[0]=c->lr; // 801B99B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B99B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B99BC
  c->r[31]=c->r[3]|c->r[3]; // 801B99C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B99C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B99C8
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B99CC
  cmps(c,0,(int32_t)c->r[4],0); // 801B99D0
  if (crb(c,2)) { goto L_801B9BA4; } // 801B99D4
  c->r[0]=R32(c->r[13]+0xFFFF9D54u); // 801B99D8
  cmpu(c,0,c->r[4],c->r[0]); // 801B99DC
  if (!crb(c,2)) { goto L_801B99EC; } // 801B99E0
  c->r[0]=0u+0x00000001u; // 801B99E4
  goto L_801B99F4; // 801B99E8
L_801B99EC:;
  W32(c->r[13]+0xFFFF9D54u,c->r[4]); // 801B99EC
  c->r[0]=0u+0x00000000u; // 801B99F0
L_801B99F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B99F4
  if (!crb(c,2)) { goto L_801B9BA4; } // 801B99F8
  c->r[9]=0u+0x80350000u; // 801B99FC
  c->r[8]=c->r[9]+0xFFFF92E0u; // 801B9A00
  c->r[3]=R32(c->r[8]+0x00000008u); // 801B9A04
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B9A08
  if (crb(c,2)) { goto L_801B9A88; } // 801B9A0C
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 801B9A10
  cmpu(c,0,c->r[0],0x00000002u); // 801B9A14
  if (!crb(c,2)) { goto L_801B9A88; } // 801B9A18
  c->r[5]=R32(c->r[8]+0x00000004u); // 801B9A1C
  c->r[3]=0u+0xFE080000u; // 801B9A20
  c->r[7]=0u+0xCC010000u; // 801B9A24
  c->r[4]=0u+0x00000061u; // 801B9A28
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801B9A2C
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 801B9A30
  c->r[3]=c->r[2]+0xFFFF9BD0u; // 801B9A34
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801B9A38
  c->r[0]=R8(c->r[3]+c->r[5]); // 801B9A3C
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801B9A40
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 801B9A44
  c->r[3]=R8(c->r[8]+0x00000002u); // 801B9A48
  c->r[0]=R8(c->r[8]+0x00000001u); // 801B9A4C
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801B9A50
  c->r[6]=R8(c->r[8]+0x00000003u); // 801B9A54
  c->r[3]=R8(c->r[9]+0xFFFF92E0u); // 801B9A58
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801B9A5C
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 801B9A60
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 801B9A64
  c->r[0]=c->r[3]|c->r[0]; // 801B9A68
  c->r[3]=c->r[6]|c->r[5]; // 801B9A6C
  c->r[0]=c->r[4]|c->r[0]; // 801B9A70
  c->r[0]=c->r[3]|c->r[0]; // 801B9A74
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801B9A78
  c->r[0]=R32(c->r[8]+0x00000008u); // 801B9A7C
  c->r[0]=c->r[0]|0x00000001u; // 801B9A80
  W32(c->r[8]+0x00000008u,c->r[0]); // 801B9A84
L_801B9A88:;
  c->r[4]=R8(c->r[13]+0xFFFF9D48u); // 801B9A88
  c->r[0]=0u+0x00000000u; // 801B9A8C
  c->r[3]=c->r[31]|c->r[31]; // 801B9A90
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801B9A94
  c->lr=0x801B9A9Cu; f_801AB4AC(c); // 801B9A98
  c->r[3]=0u+0x80350000u; // 801B9A9C
  c->r[6]=R32(c->r[31]+0x00000000u); // 801B9AA0
  c->r[0]=R32(c->r[3]+0xFFFF92ECu); // 801B9AA4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B9AA8
  if (crb(c,2)) { goto L_801B9AD4; } // 801B9AAC
  c->r[4]=c->r[3]+0xFFFF92ECu; // 801B9AB0
  c->r[3]=R32(c->r[6]+0x00000010u); // 801B9AB4
  c->r[0]=R32(c->r[4]+0x00000064u); // 801B9AB8
  cmpu(c,0,c->r[3],c->r[0]); // 801B9ABC
  if (!crb(c,2)) { goto L_801B9AD4; } // 801B9AC0
  c->r[3]=R32(c->r[6]+0x00000014u); // 801B9AC4
  c->r[0]=R32(c->r[4]+0x00000068u); // 801B9AC8
  cmpu(c,0,c->r[3],c->r[0]); // 801B9ACC
  if (crb(c,2)) { goto L_801B9AFC; } // 801B9AD0
L_801B9AD4:;
  c->r[5]=0u+0x80350000u; // 801B9AD4
  c->r[3]=R32(c->r[6]+0x00000010u); // 801B9AD8
  c->r[4]=c->r[5]+0xFFFF92ECu; // 801B9ADC
  c->r[0]=R32(c->r[5]+0xFFFF92ECu); // 801B9AE0
  W32(c->r[4]+0x00000064u,c->r[3]); // 801B9AE4
  c->r[0]=c->r[0]|0x00000002u; // 801B9AE8
  c->r[3]=R32(c->r[6]+0x00000014u); // 801B9AEC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801B9AF0
  W32(c->r[4]+0x00000068u,c->r[3]); // 801B9AF4
  W32(c->r[5]+0xFFFF92ECu,c->r[0]); // 801B9AF8
L_801B9AFC:;
  c->r[3]=0u+0x80350000u; // 801B9AFC
  c->r[4]=0u+0x80350000u; // 801B9B00
  c->r[5]=R32(c->r[3]+0xFFFF92ECu); // 801B9B04
  c->r[29]=R8(c->r[4]+0xFFFF92E0u); // 801B9B08
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801B9B0C
  if (crb(c,2)) { goto L_801B9BA4; } // 801B9B10
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801B9B14
  if (!crb(c,2)) { goto L_801B9BA4; } // 801B9B18
  cmps(c,0,(int32_t)c->r[29],0); // 801B9B1C
  if (crb(c,2)) { goto L_801B9BA4; } // 801B9B20
  c->r[31]=c->r[3]+0xFFFF92ECu; // 801B9B24
  c->r[30]=0u+0x00000000u; // 801B9B28
  goto L_801B9B88; // 801B9B2C
L_801B9B30:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801B9B30
  c->r[7]=c->r[31]+c->r[3]; // 801B9B34
  c->r[0]=R8(c->r[7]+0x00000064u); // 801B9B38
  cmpu(c,0,c->r[0],0x000000FFu); // 801B9B3C
  if (crb(c,2)) { goto L_801B9B84; } // 801B9B40
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801B9B44
  c->r[5]=rotl(c->r[30],3)&0x000007F8u; // 801B9B48
  c->r[4]=c->r[31]+c->r[0]; // 801B9B4C
  c->r[6]=0u+0x00000000u; // 801B9B50
  c->r[4]=R16(c->r[4]+0x00000004u); // 801B9B54
  c->r[10]=c->r[31]+c->r[5]; // 801B9B58
  c->r[5]=0u+0x00000000u; // 801B9B5C
  c->r[8]=0u+0x00000000u; // 801B9B60
  W16(c->r[10]+0x00000024u,c->r[4]); // 801B9B64
  c->r[9]=0u+0x00000000u; // 801B9B68
  c->r[0]=R8(c->r[7]+0x00000064u); // 801B9B6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B9B70
  c->r[7]=c->r[31]+c->r[0]; // 801B9B74
  c->r[7]=R16(c->r[7]+0x00000006u); // 801B9B78
  W16(c->r[10]+0x00000026u,c->r[7]); // 801B9B7C
  c->lr=0x801B9B84u; f_801B7D70(c); // 801B9B80
L_801B9B84:;
  c->r[30]=c->r[30]+0x00000001u; // 801B9B84
L_801B9B88:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801B9B88
  cmpu(c,0,c->r[0],c->r[29]); // 801B9B8C
  if (crb(c,0)) { IRQCHK(c); goto L_801B9B30; } // 801B9B90
  c->r[3]=0u+0x80350000u; // 801B9B94
  c->r[0]=R32(c->r[3]+0xFFFF92ECu); // 801B9B98
  c->r[0]=c->r[0]|0x00000001u; // 801B9B9C
  W32(c->r[3]+0xFFFF92ECu,c->r[0]); // 801B9BA0
L_801B9BA4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9BA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B9BA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B9BAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B9BB0
  c->lr=c->r[0]; // 801B9BB4
  c->r[1]=c->r[1]+0x00000020u; // 801B9BB8
  return; // 801B9BBC
}

// LoadResMatPix__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResMatPix
void f_801B9BC0(Ctx* __restrict c) {
  trace_call(0x801B9BC0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B9BC0
  cmps(c,0,(int32_t)c->r[0],0); // 801B9BC4
  if (crb(c,2)) return; // 801B9BC8
  c->r[10]=0u+0x80350000u; // 801B9BCC
  c->r[9]=c->r[10]+0xFFFF92E0u; // 801B9BD0
  c->r[4]=R32(c->r[9]+0x00000008u); // 801B9BD4
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801B9BD8
  if (crb(c,2)) { goto L_801B9C58; } // 801B9BDC
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801B9BE0
  cmpu(c,0,c->r[0],0x00000002u); // 801B9BE4
  if (!crb(c,2)) { goto L_801B9C58; } // 801B9BE8
  c->r[6]=R32(c->r[9]+0x00000004u); // 801B9BEC
  c->r[4]=0u+0xFE080000u; // 801B9BF0
  c->r[8]=0u+0xCC010000u; // 801B9BF4
  c->r[5]=0u+0x00000061u; // 801B9BF8
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 801B9BFC
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 801B9C00
  c->r[4]=c->r[2]+0xFFFF9BD0u; // 801B9C04
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801B9C08
  c->r[0]=R8(c->r[4]+c->r[6]); // 801B9C0C
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 801B9C10
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 801B9C14
  c->r[4]=R8(c->r[9]+0x00000002u); // 801B9C18
  c->r[0]=R8(c->r[9]+0x00000001u); // 801B9C1C
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801B9C20
  c->r[7]=R8(c->r[9]+0x00000003u); // 801B9C24
  c->r[4]=R8(c->r[10]+0xFFFF92E0u); // 801B9C28
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801B9C2C
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 801B9C30
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 801B9C34
  c->r[0]=c->r[4]|c->r[0]; // 801B9C38
  c->r[4]=c->r[7]|c->r[6]; // 801B9C3C
  c->r[0]=c->r[5]|c->r[0]; // 801B9C40
  c->r[0]=c->r[4]|c->r[0]; // 801B9C44
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801B9C48
  c->r[0]=R32(c->r[9]+0x00000008u); // 801B9C4C
  c->r[0]=c->r[0]|0x00000001u; // 801B9C50
  W32(c->r[9]+0x00000008u,c->r[0]); // 801B9C54
L_801B9C58:;
  c->r[4]=R8(c->r[13]+0xFFFF9D48u); // 801B9C58
  c->r[0]=0u+0x00000000u; // 801B9C5C
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801B9C60
  f_801AB610(c); return; // 801B9C64
  return; // 801B9C68
}

// LoadResMatTevColor__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d14ResMatTevColor
void f_801B9C6C(Ctx* __restrict c) {
  trace_call(0x801B9C6Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B9C6C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9C70
  if (crb(c,2)) return; // 801B9C74
  c->r[10]=0u+0x80350000u; // 801B9C78
  c->r[9]=c->r[10]+0xFFFF92E0u; // 801B9C7C
  c->r[4]=R32(c->r[9]+0x00000008u); // 801B9C80
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801B9C84
  if (crb(c,2)) { goto L_801B9D04; } // 801B9C88
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801B9C8C
  cmpu(c,0,c->r[0],0x00000002u); // 801B9C90
  if (!crb(c,2)) { goto L_801B9D04; } // 801B9C94
  c->r[6]=R32(c->r[9]+0x00000004u); // 801B9C98
  c->r[4]=0u+0xFE080000u; // 801B9C9C
  c->r[8]=0u+0xCC010000u; // 801B9CA0
  c->r[5]=0u+0x00000061u; // 801B9CA4
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 801B9CA8
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 801B9CAC
  c->r[4]=c->r[2]+0xFFFF9BD0u; // 801B9CB0
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801B9CB4
  c->r[0]=R8(c->r[4]+c->r[6]); // 801B9CB8
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 801B9CBC
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 801B9CC0
  c->r[4]=R8(c->r[9]+0x00000002u); // 801B9CC4
  c->r[0]=R8(c->r[9]+0x00000001u); // 801B9CC8
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801B9CCC
  c->r[7]=R8(c->r[9]+0x00000003u); // 801B9CD0
  c->r[4]=R8(c->r[10]+0xFFFF92E0u); // 801B9CD4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801B9CD8
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 801B9CDC
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 801B9CE0
  c->r[0]=c->r[4]|c->r[0]; // 801B9CE4
  c->r[4]=c->r[7]|c->r[6]; // 801B9CE8
  c->r[0]=c->r[5]|c->r[0]; // 801B9CEC
  c->r[0]=c->r[4]|c->r[0]; // 801B9CF0
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801B9CF4
  c->r[0]=R32(c->r[9]+0x00000008u); // 801B9CF8
  c->r[0]=c->r[0]|0x00000001u; // 801B9CFC
  W32(c->r[9]+0x00000008u,c->r[0]); // 801B9D00
L_801B9D04:;
  c->r[4]=R8(c->r[13]+0xFFFF9D48u); // 801B9D04
  c->r[0]=0u+0x00000000u; // 801B9D08
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801B9D0C
  f_801AB640(c); return; // 801B9D10
  return; // 801B9D14
}

// LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScale
void f_801B9D18(Ctx* __restrict c) {
  trace_call(0x801B9D18u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B9D18
  cmps(c,0,(int32_t)c->r[0],0); // 801B9D1C
  if (crb(c,2)) return; // 801B9D20
  c->r[10]=0u+0x80350000u; // 801B9D24
  c->r[9]=c->r[10]+0xFFFF92E0u; // 801B9D28
  c->r[4]=R32(c->r[9]+0x00000008u); // 801B9D2C
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801B9D30
  if (crb(c,2)) { goto L_801B9DB0; } // 801B9D34
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801B9D38
  cmpu(c,0,c->r[0],0x00000002u); // 801B9D3C
  if (!crb(c,2)) { goto L_801B9DB0; } // 801B9D40
  c->r[6]=R32(c->r[9]+0x00000004u); // 801B9D44
  c->r[4]=0u+0xFE080000u; // 801B9D48
  c->r[8]=0u+0xCC010000u; // 801B9D4C
  c->r[5]=0u+0x00000061u; // 801B9D50
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 801B9D54
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 801B9D58
  c->r[4]=c->r[2]+0xFFFF9BD0u; // 801B9D5C
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801B9D60
  c->r[0]=R8(c->r[4]+c->r[6]); // 801B9D64
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 801B9D68
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 801B9D6C
  c->r[4]=R8(c->r[9]+0x00000002u); // 801B9D70
  c->r[0]=R8(c->r[9]+0x00000001u); // 801B9D74
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801B9D78
  c->r[7]=R8(c->r[9]+0x00000003u); // 801B9D7C
  c->r[4]=R8(c->r[10]+0xFFFF92E0u); // 801B9D80
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801B9D84
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 801B9D88
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 801B9D8C
  c->r[0]=c->r[4]|c->r[0]; // 801B9D90
  c->r[4]=c->r[7]|c->r[6]; // 801B9D94
  c->r[0]=c->r[5]|c->r[0]; // 801B9D98
  c->r[0]=c->r[4]|c->r[0]; // 801B9D9C
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801B9DA0
  c->r[0]=R32(c->r[9]+0x00000008u); // 801B9DA4
  c->r[0]=c->r[0]|0x00000001u; // 801B9DA8
  W32(c->r[9]+0x00000008u,c->r[0]); // 801B9DAC
L_801B9DB0:;
  c->r[4]=0u+0x80350000u; // 801B9DB0
  c->r[5]=R8(c->r[13]+0xFFFF9D48u); // 801B9DB4
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B9DB8
  c->r[0]=0u+0x00000000u; // 801B9DBC
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801B9DC0
  c->r[4]=R8(c->r[4]+0x00000003u); // 801B9DC4
  f_801AC220(c); return; // 801B9DC8
  return; // 801B9DCC
}

// LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp
void f_801B9DD0(Ctx* __restrict c) {
  trace_call(0x801B9DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9DD0
  c->r[0]=c->lr; // 801B9DD4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801B9DD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B9DDC
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801B9DE0
  c->r[31]=c->r[4]|c->r[4]; // 801B9DE4
  cmps(c,0,(int32_t)c->r[0],0); // 801B9DE8
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801B9DEC
  c->r[30]=c->r[3]|c->r[3]; // 801B9DF0
  if (crb(c,2)) { goto L_801B9F88; } // 801B9DF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B9DF8
  if (crb(c,2)) { goto L_801B9EAC; } // 801B9DFC
  c->r[9]=0u+0x80350000u; // 801B9E00
  c->r[8]=c->r[9]+0xFFFF92E0u; // 801B9E04
  c->r[3]=R32(c->r[8]+0x00000008u); // 801B9E08
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B9E0C
  if (crb(c,2)) { goto L_801B9E8C; } // 801B9E10
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 801B9E14
  cmpu(c,0,c->r[0],0x00000002u); // 801B9E18
  if (!crb(c,2)) { goto L_801B9E8C; } // 801B9E1C
  c->r[5]=R32(c->r[8]+0x00000004u); // 801B9E20
  c->r[3]=0u+0xFE080000u; // 801B9E24
  c->r[7]=0u+0xCC010000u; // 801B9E28
  c->r[4]=0u+0x00000061u; // 801B9E2C
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801B9E30
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 801B9E34
  c->r[3]=c->r[2]+0xFFFF9BD0u; // 801B9E38
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801B9E3C
  c->r[0]=R8(c->r[3]+c->r[5]); // 801B9E40
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801B9E44
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 801B9E48
  c->r[3]=R8(c->r[8]+0x00000002u); // 801B9E4C
  c->r[0]=R8(c->r[8]+0x00000001u); // 801B9E50
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801B9E54
  c->r[6]=R8(c->r[8]+0x00000003u); // 801B9E58
  c->r[3]=R8(c->r[9]+0xFFFF92E0u); // 801B9E5C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801B9E60
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 801B9E64
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 801B9E68
  c->r[0]=c->r[3]|c->r[0]; // 801B9E6C
  c->r[3]=c->r[6]|c->r[5]; // 801B9E70
  c->r[0]=c->r[4]|c->r[0]; // 801B9E74
  c->r[0]=c->r[3]|c->r[0]; // 801B9E78
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801B9E7C
  c->r[0]=R32(c->r[8]+0x00000008u); // 801B9E80
  c->r[0]=c->r[0]|0x00000001u; // 801B9E84
  W32(c->r[8]+0x00000008u,c->r[0]); // 801B9E88
L_801B9E8C:;
  c->r[4]=0u+0x80350000u; // 801B9E8C
  c->r[5]=R8(c->r[13]+0xFFFF9D48u); // 801B9E90
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801B9E94
  c->r[0]=0u+0x00000000u; // 801B9E98
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801B9E9C
  c->r[3]=c->r[1]+0x0000000Cu; // 801B9EA0
  c->r[4]=R8(c->r[4]+0x00000003u); // 801B9EA4
  c->lr=0x801B9EACu; f_801AC220(c); // 801B9EA8
L_801B9EAC:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 801B9EAC
  c->r[0]=0u+0x00000000u; // 801B9EB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B9EB4
  c->r[3]=c->r[1]+0x00000008u; // 801B9EB8
  c->r[5]=c->r[1]+0x00000014u; // 801B9EBC
  c->r[4]=0u+0x00000001u; // 801B9EC0
  W32(c->r[1]+0x00000008u,c->r[6]); // 801B9EC4
  c->lr=0x801B9ECCu; f_801AC254(c); // 801B9EC8
  cmps(c,0,(int32_t)c->r[3],0); // 801B9ECC
  if (crb(c,2)) { goto L_801B9EE0; } // 801B9ED0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801B9ED4
  c->r[0]=c->r[0]|0x00000001u; // 801B9ED8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B9EDC
L_801B9EE0:;
  c->r[3]=c->r[1]+0x00000008u; // 801B9EE0
  c->r[5]=c->r[1]+0x00000044u; // 801B9EE4
  c->r[4]=0u+0x00000002u; // 801B9EE8
  c->lr=0x801B9EF0u; f_801AC254(c); // 801B9EEC
  cmps(c,0,(int32_t)c->r[3],0); // 801B9EF0
  if (crb(c,2)) { goto L_801B9F04; } // 801B9EF4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801B9EF8
  c->r[0]=c->r[0]|0x00000002u; // 801B9EFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B9F00
L_801B9F04:;
  c->r[3]=c->r[1]+0x00000008u; // 801B9F04
  c->r[5]=c->r[1]+0x00000074u; // 801B9F08
  c->r[4]=0u+0x00000003u; // 801B9F0C
  c->lr=0x801B9F14u; f_801AC254(c); // 801B9F10
  cmps(c,0,(int32_t)c->r[3],0); // 801B9F14
  if (crb(c,2)) { goto L_801B9F28; } // 801B9F18
  c->r[0]=R32(c->r[1]+0x00000010u); // 801B9F1C
  c->r[0]=c->r[0]|0x00000004u; // 801B9F20
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B9F24
L_801B9F28:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B9F28
  c->r[3]=c->r[31]|c->r[31]; // 801B9F2C
  c->r[4]=c->r[1]+0x00000010u; // 801B9F30
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B9F34
  c->ctr=c->r[12]; // 801B9F38
  if (true) { c->lr=0x801B9F40u; dispatch(c,c->ctr); } // 801B9F3C
  c->r[0]=R32(c->r[1]+0x00000010u); // 801B9F40
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B9F44
  if (crb(c,2)) { goto L_801B9F58; } // 801B9F48
  c->r[4]=c->r[1]+0x00000014u; // 801B9F4C
  c->r[3]=0u+0x00000000u; // 801B9F50
  c->lr=0x801B9F58u; f_801B7DE0(c); // 801B9F54
L_801B9F58:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801B9F58
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B9F5C
  if (crb(c,2)) { goto L_801B9F70; } // 801B9F60
  c->r[4]=c->r[1]+0x00000044u; // 801B9F64
  c->r[3]=0u+0x00000003u; // 801B9F68
  c->lr=0x801B9F70u; f_801B7DE0(c); // 801B9F6C
L_801B9F70:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801B9F70
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B9F74
  if (crb(c,2)) { goto L_801B9F88; } // 801B9F78
  c->r[4]=c->r[1]+0x00000074u; // 801B9F7C
  c->r[3]=0u+0x00000006u; // 801B9F80
  c->lr=0x801B9F88u; f_801B7DE0(c); // 801B9F84
L_801B9F88:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801B9F88
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801B9F8C
  c->r[30]=R32(c->r[1]+0x000000A8u); // 801B9F90
  c->lr=c->r[0]; // 801B9F94
  c->r[1]=c->r[1]+0x000000B0u; // 801B9F98
  return; // 801B9F9C
}

// LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb
void f_801B9FA0(Ctx* __restrict c) {
  trace_call(0x801B9FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9FA0
  c->r[0]=c->lr; // 801B9FA4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801B9FA8
  c->r[11]=c->r[1]+0x00000080u; // 801B9FAC
  c->lr=0x801B9FB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9FB0
  c->r[10]=R32(c->r[3]+0x00000000u); // 801B9FB4
  c->r[0]=0u+0x43300000u; // 801B9FB8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B9FBC
  cmps(c,0,(int32_t)c->r[10],0); // 801B9FC0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B9FC4
  if (crb(c,2)) { goto L_801BA6B4; } // 801B9FC8
  c->r[11]=R32(c->r[10]+0x00000000u); // 801B9FCC
  c->r[0]=rotl(c->r[11],0)&0x00000001u; cr0(c,c->r[0]); // 801B9FD0
  if (crb(c,2)) { goto L_801BA070; } // 801B9FD4
  c->r[0]=rotl(c->r[11],0)&0x00000002u; cr0(c,c->r[0]); // 801B9FD8
  if (crb(c,2)) { goto L_801BA028; } // 801B9FDC
  c->r[31]=R8(c->r[10]+0x00000004u); // 801B9FE0
  c->r[12]=0u+0xCC010000u; // 801B9FE4
  c->r[30]=R8(c->r[10]+0x00000005u); // 801B9FE8
  c->r[27]=0u+0x00000010u; // 801B9FEC
  c->r[29]=R8(c->r[10]+0x00000006u); // 801B9FF0
  c->r[11]=0u+0x00000000u; // 801B9FF4
  c->r[28]=R8(c->r[10]+0x00000007u); // 801B9FF8
  c->r[0]=0u+0x0000100Cu; // 801B9FFC
  W8(c->r[1]+0x00000028u,c->r[31]); // 801BA000
  W8(c->r[12]+0xFFFF8000u,c->r[27]); // 801BA004
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 801BA008
  W8(c->r[1]+0x00000029u,c->r[30]); // 801BA00C
  W8(c->r[1]+0x0000002Au,c->r[29]); // 801BA010
  W8(c->r[1]+0x0000002Bu,c->r[28]); // 801BA014
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 801BA018
  c->r[0]=R32(c->r[1]+0x00000028u); // 801BA01C
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 801BA020
  goto L_801BA0BC; // 801BA024
L_801BA028:;
  c->r[31]=R8(c->r[10]+0x00000004u); // 801BA028
  c->r[12]=0u+0xCC010000u; // 801BA02C
  c->r[30]=R8(c->r[10]+0x00000005u); // 801BA030
  c->r[27]=0u+0x00000010u; // 801BA034
  c->r[29]=R8(c->r[10]+0x00000006u); // 801BA038
  c->r[11]=0u+0x00000000u; // 801BA03C
  c->r[28]=R8(c->r[10]+0x00000007u); // 801BA040
  c->r[0]=0u+0x0000100Cu; // 801BA044
  W8(c->r[1]+0x00000024u,c->r[31]); // 801BA048
  W8(c->r[12]+0xFFFF8000u,c->r[27]); // 801BA04C
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 801BA050
  W8(c->r[1]+0x00000025u,c->r[30]); // 801BA054
  W8(c->r[1]+0x00000026u,c->r[29]); // 801BA058
  W8(c->r[1]+0x00000027u,c->r[28]); // 801BA05C
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 801BA060
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA064
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 801BA068
  goto L_801BA0BC; // 801BA06C
L_801BA070:;
  c->r[0]=rotl(c->r[11],0)&0x00000002u; cr0(c,c->r[0]); // 801BA070
  if (crb(c,2)) { goto L_801BA0BC; } // 801BA074
  c->r[27]=R8(c->r[10]+0x00000004u); // 801BA078
  c->r[12]=0u+0xCC010000u; // 801BA07C
  c->r[28]=R8(c->r[10]+0x00000005u); // 801BA080
  c->r[29]=0u+0x00000010u; // 801BA084
  c->r[31]=R8(c->r[10]+0x00000006u); // 801BA088
  c->r[11]=0u+0x00000000u; // 801BA08C
  c->r[30]=R8(c->r[10]+0x00000007u); // 801BA090
  c->r[0]=0u+0x0000100Cu; // 801BA094
  W8(c->r[1]+0x00000020u,c->r[27]); // 801BA098
  W8(c->r[12]+0xFFFF8000u,c->r[29]); // 801BA09C
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 801BA0A0
  W8(c->r[1]+0x00000021u,c->r[28]); // 801BA0A4
  W8(c->r[1]+0x00000022u,c->r[31]); // 801BA0A8
  W8(c->r[1]+0x00000023u,c->r[30]); // 801BA0AC
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 801BA0B0
  c->r[0]=R32(c->r[1]+0x00000020u); // 801BA0B4
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 801BA0B8
L_801BA0BC:;
  c->r[12]=R8(c->r[8]+0x00000000u); // 801BA0BC
  c->r[11]=R8(c->r[10]+0x00000008u); // 801BA0C0
  c->r[30]=R8(c->r[8]+0x00000001u); // 801BA0C4
  c->r[29]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 801BA0C8
  c->r[0]=R8(c->r[10]+0x00000009u); // 801BA0CC
  c->r[27]=R32(c->r[10]+0x00000000u); // 801BA0D0
  c->r[31]=R8(c->r[8]+0x00000002u); // 801BA0D4
  c->r[12]=R8(c->r[10]+0x0000000Au); // 801BA0D8
  c->r[11]=R8(c->r[8]+0x00000003u); // 801BA0DC
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 801BA0E0
  c->r[0]=c->r[29]^0x80000000u; // 801BA0E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BA0E8
  c->r[0]=rotl(c->r[27],0)&0x00000004u; cr0(c,c->r[0]); // 801BA0EC
  c->r[8]=R8(c->r[10]+0x0000000Bu); // 801BA0F0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 801BA0F4
  c->r[0]=c->r[30]^0x80000000u; // 801BA0F8
  {uint32_t ea=c->r[2]+0xFFFF9BF0u; c->f[6]=RF64(ea);} // 801BA0FC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801BA100
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[8]); // 801BA104
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801BA108
  {uint32_t ea=c->r[2]+0xFFFF9BE8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BA10C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 801BA110
  {uint32_t ea=c->r[2]+0xFFFF9BE4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BA114
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 801BA118
  c->r[12]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[12]); // 801BA11C
  c->r[0]=c->r[0]^0x80000000u; // 801BA120
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[1]); // 801BA124
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801BA128
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 801BA12C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801BA130
  c->r[8]=c->r[12]^0x80000000u; // 801BA134
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801BA138
  W32(c->r[1]+0x00000034u,c->r[8]); // 801BA13C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801BA140
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801BA144
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801BA148
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 801BA14C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[6]); // 801BA150
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 801BA154
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801BA158
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 801BA15C
  c->r[12]=R32(c->r[1]+0x00000044u); // 801BA160
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 801BA164
  c->r[11]=R32(c->r[1]+0x0000004Cu); // 801BA168
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801BA16C
  W8(c->r[1]+0x0000002Cu,c->r[12]); // 801BA170
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 801BA174
  W8(c->r[1]+0x0000002Du,c->r[11]); // 801BA178
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801BA17C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801BA180
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BA184
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 801BA188
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 801BA18C
  c->r[8]=R32(c->r[1]+0x00000054u); // 801BA190
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 801BA194
  W8(c->r[1]+0x0000002Eu,c->r[8]); // 801BA198
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 801BA19C
  if (crb(c,2)) { goto L_801BA1FC; } // 801BA1A0
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 801BA1A4
  if (crb(c,2)) { goto L_801BA1D4; } // 801BA1A8
  c->r[11]=0u+0xCC010000u; // 801BA1AC
  c->r[0]=0u+0x00000010u; // 801BA1B0
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA1B4
  c->r[8]=0u+0x00000000u; // 801BA1B8
  c->r[0]=0u+0x0000100Au; // 801BA1BC
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 801BA1C0
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 801BA1C4
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA1C8
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 801BA1CC
  goto L_801BA228; // 801BA1D0
L_801BA1D4:;
  c->r[11]=0u+0xCC010000u; // 801BA1D4
  c->r[0]=0u+0x00000010u; // 801BA1D8
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA1DC
  c->r[8]=0u+0x00000000u; // 801BA1E0
  c->r[0]=0u+0x0000100Au; // 801BA1E4
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 801BA1E8
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 801BA1EC
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA1F0
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 801BA1F4
  goto L_801BA228; // 801BA1F8
L_801BA1FC:;
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 801BA1FC
  if (crb(c,2)) { goto L_801BA228; } // 801BA200
  c->r[11]=0u+0xCC010000u; // 801BA204
  c->r[0]=0u+0x00000010u; // 801BA208
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA20C
  c->r[8]=0u+0x00000000u; // 801BA210
  c->r[0]=0u+0x0000100Au; // 801BA214
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 801BA218
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 801BA21C
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA220
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 801BA224
L_801BA228:;
  cmps(c,0,(int32_t)c->r[9],0); // 801BA228
  if (crb(c,2)) { goto L_801BA2B4; } // 801BA22C
  c->r[0]=R32(c->r[10]+0x00000000u); // 801BA230
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BA234
  if (crb(c,2)) { goto L_801BA270; } // 801BA238
  c->r[27]=R32(c->r[10]+0x0000000Cu); // 801BA23C
  c->r[12]=0u+0xFFFF87C1u; // 801BA240
  c->r[11]=0u+0xCC010000u; // 801BA244
  c->r[0]=0u+0x00000010u; // 801BA248
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA24C
  c->r[8]=0u+0x00000000u; // 801BA250
  c->r[27]=c->r[27]&c->r[12]; // 801BA254
  c->r[0]=0u+0x0000100Eu; // 801BA258
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 801BA25C
  c->r[27]=(rotl(c->r[4],2)&0x0000003Cu)|(c->r[27]&~0x0000003Cu); // 801BA260
  c->r[27]=(rotl(c->r[4],7)&0x00007800u)|(c->r[27]&~0x00007800u); // 801BA264
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA268
  W32(c->r[11]+0xFFFF8000u,c->r[27]); // 801BA26C
L_801BA270:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 801BA270
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801BA274
  if (crb(c,2)) { goto L_801BA334; } // 801BA278
  c->r[11]=R32(c->r[10]+0x00000010u); // 801BA27C
  c->r[10]=0u+0xFFFF87C1u; // 801BA280
  c->r[8]=0u+0xCC010000u; // 801BA284
  c->r[0]=0u+0x00000010u; // 801BA288
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 801BA28C
  c->r[4]=0u+0x00000000u; // 801BA290
  c->r[11]=c->r[11]&c->r[10]; // 801BA294
  c->r[0]=0u+0x00001010u; // 801BA298
  W16(c->r[8]+0xFFFF8000u,c->r[4]); // 801BA29C
  c->r[11]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[11]&~0x0000003Cu); // 801BA2A0
  c->r[11]=(rotl(c->r[5],7)&0x00007800u)|(c->r[11]&~0x00007800u); // 801BA2A4
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 801BA2A8
  W32(c->r[8]+0xFFFF8000u,c->r[11]); // 801BA2AC
  goto L_801BA334; // 801BA2B0
L_801BA2B4:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 801BA2B4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BA2B8
  if (crb(c,2)) { goto L_801BA2F4; } // 801BA2BC
  c->r[27]=R32(c->r[10]+0x0000000Cu); // 801BA2C0
  c->r[12]=0u+0xFFFF87C3u; // 801BA2C4
  c->r[11]=0u+0xCC010000u; // 801BA2C8
  c->r[0]=0u+0x00000010u; // 801BA2CC
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA2D0
  c->r[8]=0u+0x00000000u; // 801BA2D4
  c->r[27]=c->r[27]&c->r[12]; // 801BA2D8
  c->r[0]=0u+0x0000100Eu; // 801BA2DC
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 801BA2E0
  c->r[27]=(rotl(c->r[4],2)&0x0000003Cu)|(c->r[27]&~0x0000003Cu); // 801BA2E4
  c->r[27]=(rotl(c->r[4],7)&0x00007800u)|(c->r[27]&~0x00007800u); // 801BA2E8
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 801BA2EC
  W32(c->r[11]+0xFFFF8000u,c->r[27]); // 801BA2F0
L_801BA2F4:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 801BA2F4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801BA2F8
  if (crb(c,2)) { goto L_801BA334; } // 801BA2FC
  c->r[11]=R32(c->r[10]+0x00000010u); // 801BA300
  c->r[10]=0u+0xFFFF87C3u; // 801BA304
  c->r[8]=0u+0xCC010000u; // 801BA308
  c->r[0]=0u+0x00000010u; // 801BA30C
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 801BA310
  c->r[4]=0u+0x00000000u; // 801BA314
  c->r[11]=c->r[11]&c->r[10]; // 801BA318
  c->r[0]=0u+0x00001010u; // 801BA31C
  W16(c->r[8]+0xFFFF8000u,c->r[4]); // 801BA320
  c->r[11]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[11]&~0x0000003Cu); // 801BA324
  c->r[11]=(rotl(c->r[5],7)&0x00007800u)|(c->r[11]&~0x00007800u); // 801BA328
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 801BA32C
  W32(c->r[8]+0xFFFF8000u,c->r[11]); // 801BA330
L_801BA334:;
  c->r[4]=0u+0x80350000u; // 801BA334
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801BA338
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BA33C
  cmpu(c,0,c->r[0],0x00000002u); // 801BA340
  if (!crb(c,2)) { goto L_801BA63C; } // 801BA344
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BA348
  c->r[4]=R32(c->r[3]+0x00000014u); // 801BA34C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801BA350
  if (crb(c,2)) { goto L_801BA3F0; } // 801BA354
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801BA358
  if (crb(c,2)) { goto L_801BA3A8; } // 801BA35C
  c->r[31]=R8(c->r[3]+0x00000018u); // 801BA360
  c->r[5]=0u+0xCC010000u; // 801BA364
  c->r[12]=R8(c->r[3]+0x00000019u); // 801BA368
  c->r[8]=0u+0x00000010u; // 801BA36C
  c->r[11]=R8(c->r[3]+0x0000001Au); // 801BA370
  c->r[4]=0u+0x00000000u; // 801BA374
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 801BA378
  c->r[0]=0u+0x0000100Du; // 801BA37C
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 801BA380
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 801BA384
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA388
  W8(c->r[1]+0x0000001Du,c->r[12]); // 801BA38C
  W8(c->r[1]+0x0000001Eu,c->r[11]); // 801BA390
  W8(c->r[1]+0x0000001Fu,c->r[10]); // 801BA394
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA398
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801BA39C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA3A0
  goto L_801BA43C; // 801BA3A4
L_801BA3A8:;
  c->r[31]=R8(c->r[3]+0x00000018u); // 801BA3A8
  c->r[5]=0u+0xCC010000u; // 801BA3AC
  c->r[12]=R8(c->r[3]+0x00000019u); // 801BA3B0
  c->r[8]=0u+0x00000010u; // 801BA3B4
  c->r[11]=R8(c->r[3]+0x0000001Au); // 801BA3B8
  c->r[4]=0u+0x00000000u; // 801BA3BC
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 801BA3C0
  c->r[0]=0u+0x0000100Du; // 801BA3C4
  W8(c->r[1]+0x00000018u,c->r[31]); // 801BA3C8
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 801BA3CC
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA3D0
  W8(c->r[1]+0x00000019u,c->r[12]); // 801BA3D4
  W8(c->r[1]+0x0000001Au,c->r[11]); // 801BA3D8
  W8(c->r[1]+0x0000001Bu,c->r[10]); // 801BA3DC
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA3E0
  c->r[0]=R32(c->r[1]+0x00000018u); // 801BA3E4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA3E8
  goto L_801BA43C; // 801BA3EC
L_801BA3F0:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801BA3F0
  if (crb(c,2)) { goto L_801BA43C; } // 801BA3F4
  c->r[31]=R8(c->r[3]+0x00000018u); // 801BA3F8
  c->r[5]=0u+0xCC010000u; // 801BA3FC
  c->r[12]=R8(c->r[3]+0x00000019u); // 801BA400
  c->r[8]=0u+0x00000010u; // 801BA404
  c->r[11]=R8(c->r[3]+0x0000001Au); // 801BA408
  c->r[4]=0u+0x00000000u; // 801BA40C
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 801BA410
  c->r[0]=0u+0x0000100Du; // 801BA414
  W8(c->r[1]+0x00000014u,c->r[31]); // 801BA418
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 801BA41C
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA420
  W8(c->r[1]+0x00000015u,c->r[12]); // 801BA424
  W8(c->r[1]+0x00000016u,c->r[11]); // 801BA428
  W8(c->r[1]+0x00000017u,c->r[10]); // 801BA42C
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA430
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA434
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA438
L_801BA43C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 801BA43C
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801BA440
  if (crb(c,2)) { goto L_801BA4E0; } // 801BA444
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801BA448
  if (crb(c,2)) { goto L_801BA498; } // 801BA44C
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 801BA450
  c->r[5]=0u+0xCC010000u; // 801BA454
  c->r[12]=R8(c->r[3]+0x0000001Du); // 801BA458
  c->r[8]=0u+0x00000010u; // 801BA45C
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 801BA460
  c->r[4]=0u+0x00000000u; // 801BA464
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 801BA468
  c->r[0]=0u+0x0000100Bu; // 801BA46C
  W8(c->r[1]+0x00000010u,c->r[31]); // 801BA470
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 801BA474
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA478
  W8(c->r[1]+0x00000011u,c->r[12]); // 801BA47C
  W8(c->r[1]+0x00000012u,c->r[11]); // 801BA480
  W8(c->r[1]+0x00000013u,c->r[10]); // 801BA484
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA488
  c->r[0]=R32(c->r[1]+0x00000010u); // 801BA48C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA490
  goto L_801BA52C; // 801BA494
L_801BA498:;
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 801BA498
  c->r[5]=0u+0xCC010000u; // 801BA49C
  c->r[12]=R8(c->r[3]+0x0000001Du); // 801BA4A0
  c->r[8]=0u+0x00000010u; // 801BA4A4
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 801BA4A8
  c->r[4]=0u+0x00000000u; // 801BA4AC
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 801BA4B0
  c->r[0]=0u+0x0000100Bu; // 801BA4B4
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 801BA4B8
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 801BA4BC
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA4C0
  W8(c->r[1]+0x0000000Du,c->r[12]); // 801BA4C4
  W8(c->r[1]+0x0000000Eu,c->r[11]); // 801BA4C8
  W8(c->r[1]+0x0000000Fu,c->r[10]); // 801BA4CC
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA4D0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BA4D4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA4D8
  goto L_801BA52C; // 801BA4DC
L_801BA4E0:;
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801BA4E0
  if (crb(c,2)) { goto L_801BA52C; } // 801BA4E4
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 801BA4E8
  c->r[5]=0u+0xCC010000u; // 801BA4EC
  c->r[12]=R8(c->r[3]+0x0000001Du); // 801BA4F0
  c->r[8]=0u+0x00000010u; // 801BA4F4
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 801BA4F8
  c->r[4]=0u+0x00000000u; // 801BA4FC
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 801BA500
  c->r[0]=0u+0x0000100Bu; // 801BA504
  W8(c->r[1]+0x00000008u,c->r[31]); // 801BA508
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 801BA50C
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA510
  W8(c->r[1]+0x00000009u,c->r[12]); // 801BA514
  W8(c->r[1]+0x0000000Au,c->r[11]); // 801BA518
  W8(c->r[1]+0x0000000Bu,c->r[10]); // 801BA51C
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA520
  c->r[0]=R32(c->r[1]+0x00000008u); // 801BA524
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA528
L_801BA52C:;
  cmps(c,0,(int32_t)c->r[9],0); // 801BA52C
  if (crb(c,2)) { goto L_801BA5B8; } // 801BA530
  c->r[0]=R32(c->r[3]+0x00000014u); // 801BA534
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BA538
  if (crb(c,2)) { goto L_801BA574; } // 801BA53C
  c->r[9]=R32(c->r[3]+0x00000020u); // 801BA540
  c->r[8]=0u+0xFFFF87C1u; // 801BA544
  c->r[5]=0u+0xCC010000u; // 801BA548
  c->r[0]=0u+0x00000010u; // 801BA54C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA550
  c->r[4]=0u+0x00000000u; // 801BA554
  c->r[9]=c->r[9]&c->r[8]; // 801BA558
  c->r[0]=0u+0x0000100Fu; // 801BA55C
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA560
  c->r[9]=(rotl(c->r[6],2)&0x0000003Cu)|(c->r[9]&~0x0000003Cu); // 801BA564
  c->r[9]=(rotl(c->r[6],7)&0x00007800u)|(c->r[9]&~0x00007800u); // 801BA568
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA56C
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 801BA570
L_801BA574:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801BA574
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801BA578
  if (crb(c,2)) { goto L_801BA670; } // 801BA57C
  c->r[6]=R32(c->r[3]+0x00000024u); // 801BA580
  c->r[5]=0u+0xFFFF87C1u; // 801BA584
  c->r[4]=0u+0xCC010000u; // 801BA588
  c->r[0]=0u+0x00000010u; // 801BA58C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801BA590
  c->r[3]=0u+0x00000000u; // 801BA594
  c->r[6]=c->r[6]&c->r[5]; // 801BA598
  c->r[0]=0u+0x00001011u; // 801BA59C
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 801BA5A0
  c->r[6]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 801BA5A4
  c->r[6]=(rotl(c->r[7],7)&0x00007800u)|(c->r[6]&~0x00007800u); // 801BA5A8
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 801BA5AC
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801BA5B0
  goto L_801BA670; // 801BA5B4
L_801BA5B8:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801BA5B8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BA5BC
  if (crb(c,2)) { goto L_801BA5F8; } // 801BA5C0
  c->r[9]=R32(c->r[3]+0x00000020u); // 801BA5C4
  c->r[8]=0u+0xFFFF87C3u; // 801BA5C8
  c->r[5]=0u+0xCC010000u; // 801BA5CC
  c->r[0]=0u+0x00000010u; // 801BA5D0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA5D4
  c->r[4]=0u+0x00000000u; // 801BA5D8
  c->r[9]=c->r[9]&c->r[8]; // 801BA5DC
  c->r[0]=0u+0x0000100Fu; // 801BA5E0
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA5E4
  c->r[9]=(rotl(c->r[6],2)&0x0000003Cu)|(c->r[9]&~0x0000003Cu); // 801BA5E8
  c->r[9]=(rotl(c->r[6],7)&0x00007800u)|(c->r[9]&~0x00007800u); // 801BA5EC
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA5F0
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 801BA5F4
L_801BA5F8:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801BA5F8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801BA5FC
  if (crb(c,2)) { goto L_801BA670; } // 801BA600
  c->r[6]=R32(c->r[3]+0x00000024u); // 801BA604
  c->r[5]=0u+0xFFFF87C3u; // 801BA608
  c->r[4]=0u+0xCC010000u; // 801BA60C
  c->r[0]=0u+0x00000010u; // 801BA610
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801BA614
  c->r[3]=0u+0x00000000u; // 801BA618
  c->r[6]=c->r[6]&c->r[5]; // 801BA61C
  c->r[0]=0u+0x00001011u; // 801BA620
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 801BA624
  c->r[6]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 801BA628
  c->r[6]=(rotl(c->r[7],7)&0x00007800u)|(c->r[6]&~0x00007800u); // 801BA62C
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 801BA630
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801BA634
  goto L_801BA670; // 801BA638
L_801BA63C:;
  c->r[5]=0u+0xCC010000u; // 801BA63C
  c->r[6]=0u+0x00000010u; // 801BA640
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801BA644
  c->r[4]=0u+0x00000000u; // 801BA648
  c->r[3]=0u+0x0000100Fu; // 801BA64C
  c->r[0]=0u+0x00001011u; // 801BA650
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA654
  W16(c->r[5]+0xFFFF8000u,c->r[3]); // 801BA658
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA65C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801BA660
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA664
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 801BA668
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801BA66C
L_801BA670:;
  c->r[3]=0u+0x80350000u; // 801BA670
  c->r[31]=c->r[3]+0xFFFF92E0u; // 801BA674
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BA678
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801BA67C
  if (crb(c,2)) { goto L_801BA6B4; } // 801BA680
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801BA684
  cmpu(c,0,c->r[0],0x00000003u); // 801BA688
  if (crb(c,2)) { goto L_801BA6B4; } // 801BA68C
  c->r[3]=R8(c->r[3]+0xFFFF92E0u); // 801BA690
  c->r[4]=R8(c->r[31]+0x00000001u); // 801BA694
  c->r[5]=R8(c->r[31]+0x00000002u); // 801BA698
  c->r[6]=R8(c->r[31]+0x00000003u); // 801BA69C
  c->r[7]=R32(c->r[31]+0x00000004u); // 801BA6A0
  c->lr=0x801BA6A8u; f_801B7CC0(c); // 801BA6A4
  c->r[0]=R32(c->r[31]+0x00000008u); // 801BA6A8
  c->r[0]=c->r[0]|0x00000003u; // 801BA6AC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801BA6B0
L_801BA6B4:;
  c->r[11]=c->r[1]+0x00000080u; // 801BA6B4
  c->lr=0x801BA6BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA6B8
  c->r[0]=R32(c->r[1]+0x00000084u); // 801BA6BC
  c->lr=c->r[0]; // 801BA6C0
  c->r[1]=c->r[1]+0x00000080u; // 801BA6C4
  return; // 801BA6C8
}

// LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen
void f_801BA6CC(Ctx* __restrict c) {
  trace_call(0x801BA6CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA6CC
  c->r[0]=c->lr; // 801BA6D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA6D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA6D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BA6DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BA6E0
  cmps(c,0,(int32_t)c->r[0],0); // 801BA6E4
  if (crb(c,2)) { goto L_801BA744; } // 801BA6E8
  c->r[5]=R8(c->r[13]+0xFFFF9D48u); // 801BA6EC
  c->r[0]=0u+0x00000000u; // 801BA6F0
  c->r[30]=0u+0x80350000u; // 801BA6F4
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801BA6F8
  c->r[4]=R8(c->r[30]+0xFFFF92E0u); // 801BA6FC
  c->lr=0x801BA704u; f_801ACA20(c); // 801BA700
  c->r[31]=c->r[30]+0xFFFF92E0u; // 801BA704
  c->r[3]=R32(c->r[31]+0x00000008u); // 801BA708
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801BA70C
  if (crb(c,2)) { goto L_801BA744; } // 801BA710
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 801BA714
  cmpu(c,0,c->r[0],0x00000003u); // 801BA718
  if (crb(c,2)) { goto L_801BA744; } // 801BA71C
  c->r[3]=R8(c->r[30]+0xFFFF92E0u); // 801BA720
  c->r[4]=R8(c->r[31]+0x00000001u); // 801BA724
  c->r[5]=R8(c->r[31]+0x00000002u); // 801BA728
  c->r[6]=R8(c->r[31]+0x00000003u); // 801BA72C
  c->r[7]=R32(c->r[31]+0x00000004u); // 801BA730
  c->lr=0x801BA738u; f_801B7CC0(c); // 801BA734
  c->r[0]=R32(c->r[31]+0x00000008u); // 801BA738
  c->r[0]=c->r[0]|0x00000003u; // 801BA73C
  W32(c->r[31]+0x00000008u,c->r[0]); // 801BA740
L_801BA744:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA744
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA748
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BA74C
  c->lr=c->r[0]; // 801BA750
  c->r[1]=c->r[1]+0x00000010u; // 801BA754
  return; // 801BA758
}

// LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt
void f_801BA75C(Ctx* __restrict c) {
  trace_call(0x801BA75Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA75C
  c->r[0]=c->lr; // 801BA760
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801BA764
  c->r[11]=c->r[1]+0x000000D0u; // 801BA768
  c->lr=0x801BA770u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA76C
  c->r[30]=0u+0x80350000u; // 801BA770
  c->r[26]=0u+0x80350000u; // 801BA774
  c->r[21]=c->r[3]|c->r[3]; // 801BA778
  c->r[23]=0u+0x00000000u; // 801BA77C
  c->r[26]=c->r[26]+0xFFFF94F0u; // 801BA780
  c->r[30]=c->r[30]+0xFFFF9520u; // 801BA784
  c->r[28]=0u+0x00000000u; // 801BA788
  c->r[27]=0u+0x00000000u; // 801BA78C
  c->r[25]=0u+0x00000000u; // 801BA790
  c->r[24]=0u+0x00000040u; // 801BA794
  c->r[31]=0u+0x00000000u; // 801BA798
  c->r[20]=0u+0x00000001u; // 801BA79C
L_801BA7A0:;
  c->r[4]=R32(c->r[21]+0x00000000u); // 801BA7A0
  cmps(c,0,(int32_t)c->r[4],0); // 801BA7A4
  if (crb(c,2)) { goto L_801BA7C8; } // 801BA7A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BA7AC
  c->r[3]=((c->r[28])&0x20)?0u:(c->r[20]<<((c->r[28])&31)); // 801BA7B0
  c->r[3]=c->r[3]&c->r[0]; // 801BA7B4
  c->r[0]=0u-c->r[3]; // 801BA7B8
  c->r[0]=c->r[0]|c->r[3]; // 801BA7BC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801BA7C0
  goto L_801BA7CC; // 801BA7C4
L_801BA7C8:;
  c->r[0]=0u+0x00000000u; // 801BA7C8
L_801BA7CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BA7CC
  if (crb(c,2)) { goto L_801BA9CC; } // 801BA7D0
  c->r[29]=c->r[4]+c->r[27]; // 801BA7D4
  c->r[3]=c->r[1]+0x00000068u; // 801BA7D8
  c->r[22]=0u+0x00000001u; // 801BA7DC
  c->lr=0x801BA7E4u; f_800EC094(c); // 801BA7E0
  c->r[6]=R8(c->r[29]+0x000000AAu); // 801BA7E4
  cmps(c,0,(int32_t)c->r[6],0); // 801BA7E8
  if (crb(c,2)) { goto L_801BA860; } // 801BA7EC
  c->r[3]=R8(c->r[29]+0x000000A9u); // 801BA7F0
  cmpu(c,0,c->r[6],0x00000100u); // 801BA7F4
  c->r[0]=R8(c->r[29]+0x000000A8u); // 801BA7F8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801BA7FC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801BA800
  if (crb(c,0)) { goto L_801BA80C; } // 801BA804
  c->r[6]=0u+0x00000000u; // 801BA808
L_801BA80C:;
  cmps(c,0,(int32_t)c->r[4],32); // 801BA80C
  if (crb(c,0)) { goto L_801BA818; } // 801BA810
  c->r[4]=0u+0xFFFFFFFFu; // 801BA814
L_801BA818:;
  cmps(c,0,(int32_t)c->r[5],128); // 801BA818
  if (crb(c,0)) { goto L_801BA824; } // 801BA81C
  c->r[5]=0u+0xFFFFFFFFu; // 801BA820
L_801BA824:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801BA824
  c->r[3]=c->r[1]+0x00000068u; // 801BA828
  c->r[12]=R32(c->r[30]+c->r[0]); // 801BA82C
  c->ctr=c->r[12]; // 801BA830
  if (true) { c->lr=0x801BA838u; dispatch(c,c->ctr); } // 801BA834
  c->r[0]=R8(c->r[29]+0x000000AAu); // 801BA838
  cmpu(c,0,c->r[0],0x00000100u); // 801BA83C
  if (crb(c,0)) { goto L_801BA848; } // 801BA840
  c->r[0]=0u+0x00000000u; // 801BA844
L_801BA848:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801BA848
  c->r[22]=0u+0x00000000u; // 801BA84C
  c->r[3]=c->r[30]+c->r[0]; // 801BA850
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BA854
  W32(c->r[26]+0x00000000u,c->r[0]); // 801BA858
  goto L_801BA864; // 801BA85C
L_801BA860:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 801BA860
L_801BA864:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 801BA864
  c->r[4]=0u+0x00000000u; // 801BA868
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BA86C
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 801BA870
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 801BA874
  cmpu(c,0,c->r[0],0x0000000Fu); // 801BA878
  if (!crb(c,2)) { goto L_801BA894; } // 801BA87C
  c->r[3]=c->r[3]+c->r[27]; // 801BA880
  c->r[0]=R8(c->r[3]+0x000000ABu); // 801BA884
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BA888
  if (crb(c,2)) { goto L_801BA894; } // 801BA88C
  c->r[4]=0u+0x00000001u; // 801BA890
L_801BA894:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BA894
  if (!crb(c,2)) { goto L_801BA968; } // 801BA898
  cmps(c,0,(int32_t)c->r[22],0); // 801BA89C
  if (crb(c,2)) { goto L_801BA8C4; } // 801BA8A0
  c->r[0]=R8(c->r[29]+0x000000ABu); // 801BA8A4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BA8A8
  if (!crb(c,2)) { goto L_801BA8D4; } // 801BA8AC
  c->r[3]=c->r[29]+0x000000ACu; // 801BA8B0
  c->r[4]=c->r[1]+0x00000068u; // 801BA8B4
  c->r[22]=0u+0x00000000u; // 801BA8B8
  c->lr=0x801BA8C0u; f_800EC0C0(c); // 801BA8BC
  goto L_801BA8D4; // 801BA8C0
L_801BA8C4:;
  c->r[4]=c->r[1]+0x00000068u; // 801BA8C4
  c->r[3]=c->r[29]+0x000000ACu; // 801BA8C8
  c->r[5]=c->r[4]|c->r[4]; // 801BA8CC
  c->lr=0x801BA8D4u; f_800EC0F4(c); // 801BA8D0
L_801BA8D4:;
  c->r[0]=R8(c->r[29]+0x000000AAu); // 801BA8D4
  cmps(c,0,(int32_t)c->r[0],0); // 801BA8D8
  if (!crb(c,2)) { goto L_801BA90C; } // 801BA8DC
  c->r[6]=R32(c->r[21]+0x00000000u); // 801BA8E0
  c->r[4]=c->r[22]|c->r[22]; // 801BA8E4
  c->r[3]=c->r[1]+0x00000068u; // 801BA8E8
  c->r[0]=R32(c->r[6]+0x00000000u); // 801BA8EC
  c->r[5]=c->r[6]+c->r[25]; // 801BA8F0
  c->r[7]=R32(c->r[6]+0x00000004u); // 801BA8F4
  c->r[5]=c->r[5]+0x00000008u; // 801BA8F8
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 801BA8FC
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 801BA900
  c->lr=0x801BA908u; f_801BE9F4(c); // 801BA904
  goto L_801BA964; // 801BA908
L_801BA90C:;
  c->r[6]=R32(c->r[21]+0x00000000u); // 801BA90C
  c->r[3]=c->r[1]+0x00000038u; // 801BA910
  c->r[4]=0u+0x00000001u; // 801BA914
  c->r[0]=R32(c->r[6]+0x00000000u); // 801BA918
  c->r[5]=c->r[6]+c->r[25]; // 801BA91C
  c->r[7]=R32(c->r[6]+0x00000004u); // 801BA920
  c->r[5]=c->r[5]+0x00000008u; // 801BA924
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 801BA928
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 801BA92C
  c->lr=0x801BA934u; f_801BE9F4(c); // 801BA930
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BA934
  c->r[4]=c->r[1]+0x00000068u; // 801BA938
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BA93C
  c->r[5]=c->r[4]|c->r[4]; // 801BA940
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BA944
  c->r[3]=c->r[1]+0x00000038u; // 801BA948
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA94C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801BA950
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 801BA954
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 801BA958
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[3]);} // 801BA95C
  c->lr=0x801BA964u; f_800EC0F4(c); // 801BA960
L_801BA964:;
  c->r[22]=0u+0x00000000u; // 801BA964
L_801BA968:;
  cmps(c,0,(int32_t)c->r[22],0); // 801BA968
  if (crb(c,2)) { goto L_801BA9A8; } // 801BA96C
  c->r[0]=R32(c->r[13]+0xFFFF9D50u); // 801BA970
  c->r[4]=((c->r[23])&0x20)?0u:(c->r[20]<<((c->r[23])&31)); // 801BA974
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 801BA978
  if (!crb(c,2)) { goto L_801BA9D0; } // 801BA97C
  c->r[0]=R32(c->r[13]+0xFFFF9D50u); // 801BA980
  c->r[3]=c->r[1]+0x00000008u; // 801BA984
  c->r[0]=c->r[0]|c->r[4]; // 801BA988
  W32(c->r[13]+0xFFFF9D50u,c->r[0]); // 801BA98C
  c->lr=0x801BA994u; f_800EC094(c); // 801BA990
  c->r[4]=c->r[24]|c->r[24]; // 801BA994
  c->r[3]=c->r[1]+0x00000008u; // 801BA998
  c->r[5]=0u+0x00000000u; // 801BA99C
  c->lr=0x801BA9A4u; f_80108A5C(c); // 801BA9A0
  goto L_801BA9D0; // 801BA9A4
L_801BA9A8:;
  c->r[5]=R32(c->r[13]+0xFFFF9D50u); // 801BA9A8
  c->r[0]=((c->r[23])&0x20)?0u:(c->r[20]<<((c->r[23])&31)); // 801BA9AC
  c->r[4]=c->r[24]|c->r[24]; // 801BA9B0
  c->r[3]=c->r[1]+0x00000068u; // 801BA9B4
  c->r[0]=c->r[5]&~c->r[0]; // 801BA9B8
  c->r[5]=0u+0x00000000u; // 801BA9BC
  W32(c->r[13]+0xFFFF9D50u,c->r[0]); // 801BA9C0
  c->lr=0x801BA9C8u; f_80108A5C(c); // 801BA9C4
  goto L_801BA9D0; // 801BA9C8
L_801BA9CC:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 801BA9CC
L_801BA9D0:;
  c->r[23]=c->r[23]+0x00000001u; // 801BA9D0
  c->r[27]=c->r[27]+0x00000034u; // 801BA9D4
  cmpu(c,0,c->r[23],0x00000008u); // 801BA9D8
  c->r[26]=c->r[26]+0x00000004u; // 801BA9DC
  c->r[25]=c->r[25]+0x00000014u; // 801BA9E0
  c->r[24]=c->r[24]+0x00000003u; // 801BA9E4
  c->r[28]=c->r[28]+0x00000004u; // 801BA9E8
  if (crb(c,0)) { IRQCHK(c); goto L_801BA7A0; } // 801BA9EC
  c->r[11]=c->r[1]+0x000000D0u; // 801BA9F0
  c->lr=0x801BA9F8u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA9F4
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801BA9F8
  c->lr=c->r[0]; // 801BA9FC
  c->r[1]=c->r[1]+0x000000D0u; // 801BAA00
  return; // 801BAA04
}

// LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp
void f_801BAA08(Ctx* __restrict c) {
  trace_call(0x801BAA08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAA08
  c->r[0]=c->lr; // 801BAA0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BAA10
  c->r[11]=c->r[1]+0x00000020u; // 801BAA14
  c->lr=0x801BAA1Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BAA18
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BAA1C
  c->r[31]=0u+0x80350000u; // 801BAA20
  c->r[30]=c->r[3]|c->r[3]; // 801BAA24
  cmps(c,0,(int32_t)c->r[0],0); // 801BAA28
  c->r[31]=c->r[31]+0xFFFF92E0u; // 801BAA2C
  if (crb(c,2)) { goto L_801BAB94; } // 801BAA30
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801BAA34
  c->r[27]=R8(c->r[31]+0x00000000u); // 801BAA38
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801BAA3C
  if (crb(c,2)) { goto L_801BAAD0; } // 801BAA40
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801BAA44
  if (!crb(c,2)) { goto L_801BAAD0; } // 801BAA48
  cmps(c,0,(int32_t)c->r[27],0); // 801BAA4C
  if (crb(c,2)) { goto L_801BAAD0; } // 801BAA50
  c->r[29]=c->r[31]+0x0000000Cu; // 801BAA54
  c->r[28]=0u+0x00000000u; // 801BAA58
  goto L_801BAAB8; // 801BAA5C
L_801BAA60:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801BAA60
  c->r[7]=c->r[29]+c->r[3]; // 801BAA64
  c->r[0]=R8(c->r[7]+0x00000064u); // 801BAA68
  cmpu(c,0,c->r[0],0x000000FFu); // 801BAA6C
  if (crb(c,2)) { goto L_801BAAB4; } // 801BAA70
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801BAA74
  c->r[5]=rotl(c->r[28],3)&0x000007F8u; // 801BAA78
  c->r[4]=c->r[29]+c->r[0]; // 801BAA7C
  c->r[6]=0u+0x00000000u; // 801BAA80
  c->r[4]=R16(c->r[4]+0x00000004u); // 801BAA84
  c->r[10]=c->r[29]+c->r[5]; // 801BAA88
  c->r[5]=0u+0x00000000u; // 801BAA8C
  c->r[8]=0u+0x00000000u; // 801BAA90
  W16(c->r[10]+0x00000024u,c->r[4]); // 801BAA94
  c->r[9]=0u+0x00000000u; // 801BAA98
  c->r[0]=R8(c->r[7]+0x00000064u); // 801BAA9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BAAA0
  c->r[7]=c->r[29]+c->r[0]; // 801BAAA4
  c->r[7]=R16(c->r[7]+0x00000006u); // 801BAAA8
  W16(c->r[10]+0x00000026u,c->r[7]); // 801BAAAC
  c->lr=0x801BAAB4u; f_801B7D70(c); // 801BAAB0
L_801BAAB4:;
  c->r[28]=c->r[28]+0x00000001u; // 801BAAB4
L_801BAAB8:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 801BAAB8
  cmpu(c,0,c->r[0],c->r[27]); // 801BAABC
  if (crb(c,0)) { IRQCHK(c); goto L_801BAA60; } // 801BAAC0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801BAAC4
  c->r[0]=c->r[0]|0x00000001u; // 801BAAC8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801BAACC
L_801BAAD0:;
  c->r[29]=c->r[31]+0x00000000u; // 801BAAD0
  c->r[3]=R32(c->r[29]+0x00000008u); // 801BAAD4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801BAAD8
  if (crb(c,2)) { goto L_801BAB10; } // 801BAADC
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 801BAAE0
  cmpu(c,0,c->r[0],0x00000003u); // 801BAAE4
  if (crb(c,2)) { goto L_801BAB10; } // 801BAAE8
  c->r[3]=R8(c->r[31]+0x00000000u); // 801BAAEC
  c->r[4]=R8(c->r[29]+0x00000001u); // 801BAAF0
  c->r[5]=R8(c->r[29]+0x00000002u); // 801BAAF4
  c->r[6]=R8(c->r[29]+0x00000003u); // 801BAAF8
  c->r[7]=R32(c->r[29]+0x00000004u); // 801BAAFC
  c->lr=0x801BAB04u; f_801B7CC0(c); // 801BAB00
  c->r[0]=R32(c->r[29]+0x00000008u); // 801BAB04
  c->r[0]=c->r[0]|0x00000003u; // 801BAB08
  W32(c->r[29]+0x00000008u,c->r[0]); // 801BAB0C
L_801BAB10:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 801BAB10
  c->r[5]=0u+0x00000000u; // 801BAB14
  c->r[0]=R32(c->r[31]+0x00000204u); // 801BAB18
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 801BAB1C
  cmpu(c,0,c->r[3],c->r[0]); // 801BAB20
  if (!crb(c,2)) { goto L_801BAB50; } // 801BAB24
  c->r[4]=c->r[31]+0x00000204u; // 801BAB28
  c->r[3]=R32(c->r[6]+0x00000010u); // 801BAB2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801BAB30
  cmpu(c,0,c->r[3],c->r[0]); // 801BAB34
  if (!crb(c,2)) { goto L_801BAB50; } // 801BAB38
  c->r[3]=R32(c->r[6]+0x00000014u); // 801BAB3C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801BAB40
  cmpu(c,0,c->r[3],c->r[0]); // 801BAB44
  if (!crb(c,2)) { goto L_801BAB50; } // 801BAB48
  c->r[5]=0u+0x00000001u; // 801BAB4C
L_801BAB50:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BAB50
  if (crb(c,2)) { goto L_801BAB60; } // 801BAB54
  c->r[5]=0u+0x00000001u; // 801BAB58
  goto L_801BAB80; // 801BAB5C
L_801BAB60:;
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801BAB60
  c->r[3]=c->r[31]+0x00000204u; // 801BAB64
  c->r[0]=R32(c->r[6]+0x00000010u); // 801BAB68
  c->r[5]=0u+0x00000000u; // 801BAB6C
  W32(c->r[31]+0x00000204u,c->r[4]); // 801BAB70
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BAB74
  c->r[0]=R32(c->r[6]+0x00000014u); // 801BAB78
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BAB7C
L_801BAB80:;
  c->r[4]=R8(c->r[13]+0xFFFF9D48u); // 801BAB80
  c->r[0]=0u+0x00000000u; // 801BAB84
  c->r[3]=c->r[30]|c->r[30]; // 801BAB88
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801BAB8C
  c->lr=0x801BAB94u; f_801AACF4(c); // 801BAB90
L_801BAB94:;
  c->r[11]=c->r[1]+0x00000020u; // 801BAB94
  c->lr=0x801BAB9Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BAB98
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAB9C
  c->lr=c->r[0]; // 801BABA0
  c->r[1]=c->r[1]+0x00000020u; // 801BABA4
  return; // 801BABA8
}

// LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_801BABAC(Ctx* __restrict c) {
  trace_call(0x801BABACu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BABAC
  c->r[0]=c->lr; // 801BABB0
  W32(c->r[1]+0x00000094u,c->r[0]); // 801BABB4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801BABB8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801BABBC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 801BABC0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 801BABC4
  c->r[11]=c->r[1]+0x00000070u; // 801BABC8
  c->lr=0x801BABD0u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BABCC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BABD0
  c->r[31]=0u+0x80350000u; // 801BABD4
  c->r[24]=c->r[3]|c->r[3]; // 801BABD8
  c->r[27]=c->r[4]|c->r[4]; // 801BABDC
  cmps(c,0,(int32_t)c->r[0],0); // 801BABE0
  c->r[26]=c->r[5]|c->r[5]; // 801BABE4
  c->r[31]=c->r[31]+0xFFFF92E0u; // 801BABE8
  if (crb(c,2)) { goto L_801BAECC; } // 801BABEC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801BABF0
  c->r[17]=R8(c->r[31]+0x00000000u); // 801BABF4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801BABF8
  if (crb(c,2)) { goto L_801BAC8C; } // 801BABFC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801BAC00
  if (!crb(c,2)) { goto L_801BAC8C; } // 801BAC04
  cmps(c,0,(int32_t)c->r[17],0); // 801BAC08
  if (crb(c,2)) { goto L_801BAC8C; } // 801BAC0C
  c->r[18]=c->r[31]+0x0000000Cu; // 801BAC10
  c->r[19]=0u+0x00000000u; // 801BAC14
  goto L_801BAC74; // 801BAC18
L_801BAC1C:;
  c->r[3]=rotl(c->r[19],0)&0x000000FFu; // 801BAC1C
  c->r[7]=c->r[18]+c->r[3]; // 801BAC20
  c->r[0]=R8(c->r[7]+0x00000064u); // 801BAC24
  cmpu(c,0,c->r[0],0x000000FFu); // 801BAC28
  if (crb(c,2)) { goto L_801BAC70; } // 801BAC2C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801BAC30
  c->r[5]=rotl(c->r[19],3)&0x000007F8u; // 801BAC34
  c->r[4]=c->r[18]+c->r[0]; // 801BAC38
  c->r[6]=0u+0x00000000u; // 801BAC3C
  c->r[4]=R16(c->r[4]+0x00000004u); // 801BAC40
  c->r[10]=c->r[18]+c->r[5]; // 801BAC44
  c->r[5]=0u+0x00000000u; // 801BAC48
  c->r[8]=0u+0x00000000u; // 801BAC4C
  W16(c->r[10]+0x00000024u,c->r[4]); // 801BAC50
  c->r[9]=0u+0x00000000u; // 801BAC54
  c->r[0]=R8(c->r[7]+0x00000064u); // 801BAC58
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BAC5C
  c->r[7]=c->r[18]+c->r[0]; // 801BAC60
  c->r[7]=R16(c->r[7]+0x00000006u); // 801BAC64
  W16(c->r[10]+0x00000026u,c->r[7]); // 801BAC68
  c->lr=0x801BAC70u; f_801B7D70(c); // 801BAC6C
L_801BAC70:;
  c->r[19]=c->r[19]+0x00000001u; // 801BAC70
L_801BAC74:;
  c->r[0]=rotl(c->r[19],0)&0x000000FFu; // 801BAC74
  cmpu(c,0,c->r[0],c->r[17]); // 801BAC78
  if (crb(c,0)) { IRQCHK(c); goto L_801BAC1C; } // 801BAC7C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801BAC80
  c->r[0]=c->r[0]|0x00000001u; // 801BAC84
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801BAC88
L_801BAC8C:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 801BAC8C
  c->r[17]=R32(c->r[3]+0x00000008u); // 801BAC90
  c->r[25]=rotl(c->r[17],1)&0x00000001u; cr0(c,c->r[25]); // 801BAC94
  if (!crb(c,2)) { goto L_801BAE54; } // 801BAC98
  cmps(c,0,(int32_t)c->r[27],0); // 801BAC9C
  if (crb(c,2)) { goto L_801BACE8; } // 801BACA0
  c->r[3]=c->r[27]|c->r[27]; // 801BACA4
  c->r[4]=0u+0x00000000u; // 801BACA8
  c->lr=0x801BACB0u; f_80108934(c); // 801BACAC
  c->r[3]=R32(c->r[24]+0x00000000u); // 801BACB0
  c->r[0]=R32(c->r[3]+0x00000030u); // 801BACB4
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801BACB8
  if (crb(c,2)) { goto L_801BAD10; } // 801BACBC
  cmps(c,0,(int32_t)c->r[26],0); // 801BACC0
  if (crb(c,2)) { goto L_801BACD8; } // 801BACC4
  c->r[3]=c->r[26]|c->r[26]; // 801BACC8
  c->r[4]=0u+0x00000000u; // 801BACCC
  c->lr=0x801BACD4u; f_801089B0(c); // 801BACD0
  goto L_801BAD10; // 801BACD4
L_801BACD8:;
  c->r[3]=c->r[27]|c->r[27]; // 801BACD8
  c->r[4]=0u+0x00000000u; // 801BACDC
  c->lr=0x801BACE4u; f_801089B0(c); // 801BACE0
  goto L_801BAD10; // 801BACE4
L_801BACE8:;
  c->r[3]=rotl(c->r[17],0)&0x0000FFFFu; // 801BACE8
  c->r[4]=0u+0x00000000u; // 801BACEC
  c->lr=0x801BACF4u; f_80108984(c); // 801BACF0
  c->r[3]=R32(c->r[24]+0x00000000u); // 801BACF4
  c->r[0]=R32(c->r[3]+0x00000030u); // 801BACF8
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801BACFC
  if (crb(c,2)) { goto L_801BAD10; } // 801BAD00
  c->r[3]=rotl(c->r[17],0)&0x0000FFFFu; // 801BAD04
  c->r[4]=0u+0x00000000u; // 801BAD08
  c->lr=0x801BAD10u; f_80108A08(c); // 801BAD0C
L_801BAD10:;
  cmps(c,0,(int32_t)c->r[17],0); // 801BAD10
  c->r[3]=0u+0x00000001u; // 801BAD14
  if (crb(c,0)) { goto L_801BAE6C; } // 801BAD18
  c->r[0]=rotl(c->r[17],0)&0x0000FFFFu; // 801BAD1C
  c->r[20]=0u+0x80350000u; // 801BAD20
  c->r[27]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801BAD24
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BAD28
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BAD2C
  c->r[30]=c->r[31]+0x00000210u; // 801BAD30
  c->r[28]=c->r[1]+0x00000008u; // 801BAD34
  c->r[26]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BAD38
  c->r[18]=c->r[31]+0x00000230u; // 801BAD3C
  c->r[21]=c->r[20]+0xFFFFE878u; // 801BAD40
  c->r[17]=0u+0x00000000u; // 801BAD44
  c->r[29]=0u+0x0000001Eu; // 801BAD48
  c->r[19]=0u+0x00000001u; // 801BAD4C
  c->r[23]=0u+0x0000003Cu; // 801BAD50
  c->r[22]=0u+0x00000000u; // 801BAD54
L_801BAD58:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801BAD58
  cmps(c,0,(int32_t)c->r[0],1); // 801BAD5C
  if (!crb(c,2)) { goto L_801BADEC; } // 801BAD60
  c->r[0]=R32(c->r[18]+0x00000004u); // 801BAD64
  W32(c->r[28]+0x00000000u,c->r[29]); // 801BAD68
  cmps(c,0,(int32_t)c->r[0],0); // 801BAD6C
  if (crb(c,2)) { goto L_801BAD7C; } // 801BAD70
  c->r[3]=c->r[0]+c->r[27]; // 801BAD74
  goto L_801BADDC; // 801BAD78
L_801BAD7C:;
  c->r[0]=R8(c->r[13]+0xFFFF9D58u); // 801BAD7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BAD80
  if (!crb(c,2)) { goto L_801BAD8C; } // 801BAD84
  W8(c->r[13]+0xFFFF9D58u,c->r[19]); // 801BAD88
L_801BAD8C:;
  c->r[0]=R32(c->r[31]+0x00000230u); // 801BAD8C
  c->r[3]=c->r[20]+0xFFFFE878u; // 801BAD90
  cmps(c,0,(int32_t)c->r[0],0); // 801BAD94
  if (crb(c,2)) { goto L_801BADA4; } // 801BAD98
  c->r[4]=c->r[0]+c->r[26]; // 801BAD9C
  goto L_801BADA8; // 801BADA0
L_801BADA4:;
  c->r[4]=0u+0x00000000u; // 801BADA4
L_801BADA8:;
  c->lr=0x801BADACu; f_801DB7D8(c); // 801BADA8
  cmps(c,0,(int32_t)c->r[3],0); // 801BADAC
  if (!crb(c,2)) { goto L_801BADD8; } // 801BADB0
  {uint32_t ea=c->r[21]+0x00000020u; WF32(ea,c->f[30]);} // 801BADB4
  {uint32_t ea=c->r[21]+0x00000010u; WF32(ea,c->f[30]);} // 801BADB8
  {uint32_t ea=c->r[20]+0xFFFFE878u; WF32(ea,c->f[30]);} // 801BADBC
  {uint32_t ea=c->r[21]+0x0000001Cu; WF32(ea,c->f[31]);} // 801BADC0
  {uint32_t ea=c->r[21]+0x00000018u; WF32(ea,c->f[31]);} // 801BADC4
  {uint32_t ea=c->r[21]+0x00000014u; WF32(ea,c->f[31]);} // 801BADC8
  {uint32_t ea=c->r[21]+0x0000000Cu; WF32(ea,c->f[31]);} // 801BADCC
  {uint32_t ea=c->r[21]+0x00000008u; WF32(ea,c->f[31]);} // 801BADD0
  {uint32_t ea=c->r[21]+0x00000004u; WF32(ea,c->f[31]);} // 801BADD4
L_801BADD8:;
  c->r[3]=c->r[20]+0xFFFFE878u; // 801BADD8
L_801BADDC:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 801BADDC
  c->lr=0x801BADE4u; f_801B8150(c); // 801BADE0
  c->r[3]=0u+0x00000000u; // 801BADE4
  goto L_801BAE04; // 801BADE8
L_801BADEC:;
  cmps(c,0,(int32_t)c->r[0],2); // 801BADEC
  if (!crb(c,2)) { goto L_801BAE00; } // 801BADF0
  W32(c->r[28]+0x00000000u,c->r[22]); // 801BADF4
  c->r[3]=0u+0x00000000u; // 801BADF8
  goto L_801BAE04; // 801BADFC
L_801BAE00:;
  W32(c->r[28]+0x00000000u,c->r[23]); // 801BAE00
L_801BAE04:;
  c->r[17]=c->r[17]+0x00000001u; // 801BAE04
  c->r[29]=c->r[29]+0x00000003u; // 801BAE08
  cmpu(c,0,c->r[17],0x00000008u); // 801BAE0C
  c->r[28]=c->r[28]+0x00000004u; // 801BAE10
  c->r[30]=c->r[30]+0x00000004u; // 801BAE14
  if (crb(c,0)) { IRQCHK(c); goto L_801BAD58; } // 801BAE18
  cmps(c,0,(int32_t)c->r[3],0); // 801BAE1C
  if (crb(c,2)) { goto L_801BAE40; } // 801BAE20
  c->r[0]=R8(c->r[13]+0xFFFF9D4Cu); // 801BAE24
  cmps(c,0,(int32_t)c->r[0],0); // 801BAE28
  if (!crb(c,2)) { goto L_801BAE6C; } // 801BAE2C
  c->lr=0x801BAE34u; f_801B8078(c); // 801BAE30
  c->r[0]=0u+0x00000001u; // 801BAE34
  W8(c->r[13]+0xFFFF9D4Cu,c->r[0]); // 801BAE38
  goto L_801BAE6C; // 801BAE3C
L_801BAE40:;
  c->r[3]=c->r[1]+0x00000008u; // 801BAE40
  c->lr=0x801BAE48u; f_801B80D4(c); // 801BAE44
  c->r[0]=0u+0x00000000u; // 801BAE48
  W8(c->r[13]+0xFFFF9D4Cu,c->r[0]); // 801BAE4C
  goto L_801BAE6C; // 801BAE50
L_801BAE54:;
  c->r[0]=R8(c->r[13]+0xFFFF9D4Cu); // 801BAE54
  cmps(c,0,(int32_t)c->r[0],0); // 801BAE58
  if (!crb(c,2)) { goto L_801BAE6C; } // 801BAE5C
  c->lr=0x801BAE64u; f_801B8078(c); // 801BAE60
  c->r[0]=0u+0x00000001u; // 801BAE64
  W8(c->r[13]+0xFFFF9D4Cu,c->r[0]); // 801BAE68
L_801BAE6C:;
  c->r[26]=c->r[31]+0x00000000u; // 801BAE6C
  c->r[3]=R32(c->r[26]+0x00000008u); // 801BAE70
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801BAE74
  if (crb(c,2)) { goto L_801BAEAC; } // 801BAE78
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 801BAE7C
  cmpu(c,0,c->r[0],0x00000003u); // 801BAE80
  if (crb(c,2)) { goto L_801BAEAC; } // 801BAE84
  c->r[3]=R8(c->r[31]+0x00000000u); // 801BAE88
  c->r[4]=R8(c->r[26]+0x00000001u); // 801BAE8C
  c->r[5]=R8(c->r[26]+0x00000002u); // 801BAE90
  c->r[6]=R8(c->r[26]+0x00000003u); // 801BAE94
  c->r[7]=R32(c->r[26]+0x00000004u); // 801BAE98
  c->lr=0x801BAEA0u; f_801B7CC0(c); // 801BAE9C
  c->r[0]=R32(c->r[26]+0x00000008u); // 801BAEA0
  c->r[0]=c->r[0]|0x00000003u; // 801BAEA4
  W32(c->r[26]+0x00000008u,c->r[0]); // 801BAEA8
L_801BAEAC:;
  c->r[4]=R8(c->r[13]+0xFFFF9D48u); // 801BAEAC
  c->r[26]=0u+0x00000000u; // 801BAEB0
  c->r[3]=c->r[24]|c->r[24]; // 801BAEB4
  W8(c->r[13]+0xFFFF9D48u,c->r[26]); // 801BAEB8
  c->lr=0x801BAEC0u; f_801AADCC(c); // 801BAEBC
  cmps(c,0,(int32_t)c->r[25],0); // 801BAEC0
  if (crb(c,2)) { goto L_801BAECC; } // 801BAEC4
  W8(c->r[13]+0xFFFF9D4Cu,c->r[26]); // 801BAEC8
L_801BAECC:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801BAECC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801BAED0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 801BAED4
  c->r[11]=c->r[1]+0x00000070u; // 801BAED8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 801BAEDC
  c->lr=0x801BAEE4u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BAEE0
  c->r[0]=R32(c->r[1]+0x00000094u); // 801BAEE4
  c->lr=c->r[0]; // 801BAEE8
  c->r[1]=c->r[1]+0x00000090u; // 801BAEEC
  return; // 801BAEF0
}

// SetViewPosNrmMtxArray__Q34nw4r3g3d8G3DStateFPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_801BAEF4(Ctx* __restrict c) {
  trace_call(0x801BAEF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAEF4
  c->r[0]=c->lr; // 801BAEF8
  c->r[7]=0u+0x80350000u; // 801BAEFC
  cmps(c,0,(int32_t)c->r[3],0); // 801BAF00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BAF04
  c->r[6]=c->r[7]+0xFFFF9510u; // 801BAF08
  W32(c->r[7]+0xFFFF9510u,c->r[3]); // 801BAF0C
  W32(c->r[6]+0x00000004u,c->r[4]); // 801BAF10
  W32(c->r[6]+0x00000008u,c->r[5]); // 801BAF14
  if (crb(c,2)) { goto L_801BAF2C; } // 801BAF18
  c->r[4]=c->r[3]|c->r[3]; // 801BAF1C
  c->r[3]=0u+0x00000015u; // 801BAF20
  c->r[5]=0u+0x00000030u; // 801BAF24
  c->lr=0x801BAF2Cu; f_80103FBC(c); // 801BAF28
L_801BAF2C:;
  c->r[3]=0u+0x80350000u; // 801BAF2C
  c->r[3]=c->r[3]+0xFFFF9510u; // 801BAF30
  c->r[4]=R32(c->r[3]+0x00000004u); // 801BAF34
  cmps(c,0,(int32_t)c->r[4],0); // 801BAF38
  if (crb(c,2)) { goto L_801BAF4C; } // 801BAF3C
  c->r[3]=0u+0x00000016u; // 801BAF40
  c->r[5]=0u+0x00000024u; // 801BAF44
  c->lr=0x801BAF4Cu; f_80103FBC(c); // 801BAF48
L_801BAF4C:;
  c->r[3]=0u+0x80350000u; // 801BAF4C
  c->r[3]=c->r[3]+0xFFFF9510u; // 801BAF50
  c->r[4]=R32(c->r[3]+0x00000008u); // 801BAF54
  cmps(c,0,(int32_t)c->r[4],0); // 801BAF58
  if (crb(c,2)) { goto L_801BAF6C; } // 801BAF5C
  c->r[3]=0u+0x00000017u; // 801BAF60
  c->r[5]=0u+0x00000030u; // 801BAF64
  c->lr=0x801BAF6Cu; f_80103FBC(c); // 801BAF68
L_801BAF6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BAF6C
  c->lr=c->r[0]; // 801BAF70
  c->r[1]=c->r[1]+0x00000010u; // 801BAF74
  return; // 801BAF78
}

// GetViewNrmMtxPtr__Q34nw4r3g3d8G3DStateFUl
void f_801BAF7C(Ctx* __restrict c) {
  trace_call(0x801BAF7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAF7C
  c->r[0]=c->lr; // 801BAF80
  c->r[4]=0u+0x80350000u; // 801BAF84
  c->r[5]=c->r[3]|c->r[3]; // 801BAF88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BAF8C
  c->r[4]=c->r[4]+0xFFFF9510u; // 801BAF90
  c->r[4]=R32(c->r[4]+0x00000004u); // 801BAF94
  cmps(c,0,(int32_t)c->r[4],0); // 801BAF98
  if (crb(c,2)) { goto L_801BAFAC; } // 801BAF9C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)36); // 801BAFA0
  c->r[3]=c->r[4]+c->r[0]; // 801BAFA4
  goto L_801BB030; // 801BAFA8
L_801BAFAC:;
  c->r[0]=R8(c->r[13]+0xFFFF9D58u); // 801BAFAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BAFB0
  if (!crb(c,2)) { goto L_801BAFC0; } // 801BAFB4
  c->r[0]=0u+0x00000001u; // 801BAFB8
  W8(c->r[13]+0xFFFF9D58u,c->r[0]); // 801BAFBC
L_801BAFC0:;
  c->r[4]=0u+0x80350000u; // 801BAFC0
  c->r[3]=0u+0x80350000u; // 801BAFC4
  c->r[4]=R32(c->r[4]+0xFFFF9510u); // 801BAFC8
  c->r[3]=c->r[3]+0xFFFFE878u; // 801BAFCC
  cmps(c,0,(int32_t)c->r[4],0); // 801BAFD0
  if (crb(c,2)) { goto L_801BAFE4; } // 801BAFD4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 801BAFD8
  c->r[4]=c->r[4]+c->r[0]; // 801BAFDC
  goto L_801BAFE8; // 801BAFE0
L_801BAFE4:;
  c->r[4]=0u+0x00000000u; // 801BAFE4
L_801BAFE8:;
  c->lr=0x801BAFECu; f_801DB7D8(c); // 801BAFE8
  cmps(c,0,(int32_t)c->r[3],0); // 801BAFEC
  if (!crb(c,2)) { goto L_801BB028; } // 801BAFF0
  c->r[4]=0u+0x80350000u; // 801BAFF4
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BAFF8
  c->r[3]=c->r[4]+0xFFFFE878u; // 801BAFFC
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB000
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801BB004
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801BB008
  {uint32_t ea=c->r[4]+0xFFFFE878u; WF32(ea,c->f[1]);} // 801BB00C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801BB010
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801BB014
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801BB018
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801BB01C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801BB020
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801BB024
L_801BB028:;
  c->r[3]=0u+0x80350000u; // 801BB028
  c->r[3]=c->r[3]+0xFFFFE878u; // 801BB02C
L_801BB030:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB030
  c->lr=c->r[0]; // 801BB034
  c->r[1]=c->r[1]+0x00000010u; // 801BB038
  return; // 801BB03C
}

// SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType
void f_801BB040(Ctx* __restrict c) {
  trace_call(0x801BB040u);
  cmpu(c,0,c->r[3],0x00000004u); // 801BB040
  if (!crb(c,1)) return; // 801BB044
  cmpu(c,0,c->r[3],0x00000100u); // 801BB048
  if (!crb(c,0)) return; // 801BB04C
  cmps(c,0,(int32_t)c->r[4],0); // 801BB050
  if (crb(c,2)) { goto L_801BB080; } // 801BB054
  cmps(c,0,(int32_t)c->r[5],4); // 801BB058
  if (crb(c,0)) { goto L_801BB064; } // 801BB05C
  c->r[5]=0u+0x00000000u; // 801BB060
L_801BB064:;
  c->r[6]=0u+0x80350000u; // 801BB064
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801BB068
  c->r[6]=c->r[6]+0xFFFF9520u; // 801BB06C
  W32(c->r[6]+c->r[0],c->r[4]); // 801BB070
  c->r[3]=c->r[6]+c->r[0]; // 801BB074
  W32(c->r[3]+0x00000004u,c->r[5]); // 801BB078
  return; // 801BB07C
L_801BB080:;
  c->r[5]=0u+0x801C0000u; // 801BB080
  c->r[4]=0u+0x80350000u; // 801BB084
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801BB088
  c->r[0]=0u+0x00000000u; // 801BB08C
  c->r[4]=c->r[4]+0xFFFF9520u; // 801BB090
  c->r[5]=c->r[5]+0xFFFF8D50u; // 801BB094
  W32(c->r[4]+c->r[3],c->r[5]); // 801BB098
  c->r[3]=c->r[4]+c->r[3]; // 801BB09C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BB0A0
  return; // 801BB0A4
}

// GetIndMtxOp__Q34nw4r3g3d8G3DStateFv
void f_801BB0A8(Ctx* __restrict c) {
  trace_call(0x801BB0A8u);
  c->r[3]=R32(c->r[13]+0xFFFF9084u); // 801BB0A8
  return; // 801BB0AC
}

// SetFog__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d3Fogi
void f_801BB0B0(Ctx* __restrict c) {
  trace_call(0x801BB0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB0B0
  c->r[0]=c->lr; // 801BB0B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BB0B8
  cmps(c,0,(int32_t)c->r[4],0); // 801BB0BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB0C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BB0C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BB0C8
  c->r[30]=c->r[4]|c->r[4]; // 801BB0CC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BB0D0
  if (crb(c,0)) { goto L_801BB13C; } // 801BB0D4
  cmps(c,0,(int32_t)c->r[4],32); // 801BB0D8
  if (!crb(c,0)) { goto L_801BB13C; } // 801BB0DC
  cmps(c,0,(int32_t)c->r[3],0); // 801BB0E0
  if (crb(c,2)) { goto L_801BB13C; } // 801BB0E4
  c->r[31]=0u+0x80350000u; // 801BB0E8
  c->r[6]=c->r[31]+0xFFFF9D20u; // 801BB0EC
  c->r[0]=R32(c->r[6]+0x00000004u); // 801BB0F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801BB0F4
  if (!crb(c,2)) { goto L_801BB120; } // 801BB0F8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801BB0FC
  c->r[5]=0u+0x00000030u; // 801BB100
  c->r[4]=c->r[6]+c->r[0]; // 801BB104
  c->r[4]=c->r[4]+0x00000008u; // 801BB108
  c->lr=0x801BB110u; f_801101A0(c); // 801BB10C
  cmps(c,0,(int32_t)c->r[3],0); // 801BB110
  if (crb(c,2)) { goto L_801BB13C; } // 801BB114
  c->r[0]=0u+0x00000000u; // 801BB118
  W32(c->r[31]+0xFFFF9D20u,c->r[0]); // 801BB11C
L_801BB120:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)48); // 801BB120
  c->r[4]=0u+0x80350000u; // 801BB124
  c->r[3]=c->r[1]+0x00000008u; // 801BB128
  c->r[4]=c->r[4]+0xFFFF9D20u; // 801BB12C
  c->r[4]=c->r[4]+c->r[0]; // 801BB130
  c->r[4]=c->r[4]+0x00000008u; // 801BB134
  c->lr=0x801BB13Cu; f_801CDC20(c); // 801BB138
L_801BB13C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB13C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BB140
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BB144
  c->lr=c->r[0]; // 801BB148
  c->r[1]=c->r[1]+0x00000020u; // 801BB14C
  return; // 801BB150
}

// LoadFog__Q34nw4r3g3d8G3DStateFi
void f_801BB154(Ctx* __restrict c) {
  trace_call(0x801BB154u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB154
  c->r[0]=c->lr; // 801BB158
  c->r[4]=0u+0x80350000u; // 801BB15C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB160
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BB164
  c->r[31]=c->r[3]|c->r[3]; // 801BB168
  c->r[5]=R32(c->r[4]+0xFFFF9D20u); // 801BB16C
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801BB170
  if (crb(c,2)) { goto L_801BB190; } // 801BB174
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801BB178
  if (crb(c,2)) { goto L_801BB190; } // 801BB17C
  c->r[4]=c->r[4]+0xFFFF9D20u; // 801BB180
  c->r[0]=R32(c->r[4]+0x00000004u); // 801BB184
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801BB188
  if (crb(c,2)) { goto L_801BB200; } // 801BB18C
L_801BB190:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BB190
  if (crb(c,0)) { goto L_801BB1A0; } // 801BB194
  cmps(c,0,(int32_t)c->r[3],32); // 801BB198
  if (crb(c,0)) { goto L_801BB1C8; } // 801BB19C
L_801BB1A0:;
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB1A0
  c->r[0]=0u+0x00000000u; // 801BB1A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BB1A8
  c->r[4]=c->r[1]+0x00000008u; // 801BB1AC
  c->f[2]=c->f[1]; // 801BB1B0
  c->r[3]=0u+0x00000000u; // 801BB1B4
  c->f[3]=c->f[1]; // 801BB1B8
  c->f[4]=c->f[1]; // 801BB1BC
  c->lr=0x801BB1C4u; f_80107EA0(c); // 801BB1C0
  goto L_801BB1E8; // 801BB1C4
L_801BB1C8:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 801BB1C8
  c->r[4]=0u+0x80350000u; // 801BB1CC
  c->r[3]=c->r[1]+0x0000000Cu; // 801BB1D0
  c->r[4]=c->r[4]+0xFFFF9D20u; // 801BB1D4
  c->r[4]=c->r[4]+c->r[0]; // 801BB1D8
  c->r[4]=c->r[4]+0x00000008u; // 801BB1DC
  c->lr=0x801BB1E4u; f_801CDBA8(c); // 801BB1E0
  c->lr=0x801BB1E8u; f_801CDC94(c); // 801BB1E4
L_801BB1E8:;
  c->r[4]=0u+0x80350000u; // 801BB1E8
  c->r[0]=R32(c->r[4]+0xFFFF9D20u); // 801BB1EC
  c->r[3]=c->r[4]+0xFFFF9D20u; // 801BB1F0
  W32(c->r[3]+0x00000004u,c->r[31]); // 801BB1F4
  c->r[0]=c->r[0]|0x00000003u; // 801BB1F8
  W32(c->r[4]+0xFFFF9D20u,c->r[0]); // 801BB1FC
L_801BB200:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB200
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BB204
  c->lr=c->r[0]; // 801BB208
  c->r[1]=c->r[1]+0x00000020u; // 801BB20C
  return; // 801BB210
}

// SetLightSetting__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d12LightSetting
void f_801BB214(Ctx* __restrict c) {
  trace_call(0x801BB214u);
  c->r[5]=0u+0x80350000u; // 801BB214
  c->r[4]=c->r[3]|c->r[3]; // 801BB218
  c->r[3]=c->r[5]+0xFFFFA334u; // 801BB21C
  f_801B8E1C(c); return; // 801BB220
}

// fn_801BB224
void f_801BB224(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 801BB224
  if (crb(c,0)) { goto L_801BB24C; } // 801BB228
  cmps(c,0,(int32_t)c->r[3],128); // 801BB22C
  if (!crb(c,0)) { goto L_801BB24C; } // 801BB230
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 801BB234
  c->r[3]=0u+0x80350000u; // 801BB238
  c->r[3]=c->r[3]+0xFFFFA334u; // 801BB23C
  c->r[3]=c->r[3]+c->r[0]; // 801BB240
  c->r[3]=c->r[3]+0x0000002Cu; // 801BB244
  return; // 801BB248
L_801BB24C:;
  c->r[3]=0u+0x00000000u; // 801BB24C
  return; // 801BB250
}

// fn_801BB254
void f_801BB254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB254
  c->r[0]=c->lr; // 801BB258
  c->r[12]=c->r[4]|c->r[4]; // 801BB25C
  c->r[11]=c->r[5]|c->r[5]; // 801BB260
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB264
  c->r[10]=c->r[6]|c->r[6]; // 801BB268
  c->r[0]=c->r[7]|c->r[7]; // 801BB26C
  c->r[9]=c->r[8]|c->r[8]; // 801BB270
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB274
  c->r[31]=c->r[3]|c->r[3]; // 801BB278
  c->r[3]=0u+0x80350000u; // 801BB27C
  c->r[5]=c->r[12]|c->r[12]; // 801BB280
  c->r[4]=c->r[31]|c->r[31]; // 801BB284
  c->r[6]=c->r[11]|c->r[11]; // 801BB288
  c->r[7]=c->r[10]|c->r[10]; // 801BB28C
  c->r[8]=c->r[0]|c->r[0]; // 801BB290
  c->r[3]=c->r[3]+0xFFFFA334u; // 801BB294
  c->lr=0x801BB29Cu; f_801B8F10(c); // 801BB298
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB29C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB2A0
  c->lr=c->r[0]; // 801BB2A4
  c->r[1]=c->r[1]+0x00000010u; // 801BB2A8
  return; // 801BB2AC
}

// fn_801BB2B0
void f_801BB2B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB2B0
  c->r[0]=c->lr; // 801BB2B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB2B8
  c->r[11]=c->r[1]+0x00000020u; // 801BB2BC
  c->lr=0x801BB2C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BB2C0
  cmps(c,0,(int32_t)c->r[4],32); // 801BB2C4
  c->r[26]=c->r[3]|c->r[3]; // 801BB2C8
  c->r[27]=c->r[4]|c->r[4]; // 801BB2CC
  c->r[28]=c->r[5]|c->r[5]; // 801BB2D0
  if (!crb(c,0)) { goto L_801BB344; } // 801BB2D4
  cmps(c,0,(int32_t)c->r[4],0); // 801BB2D8
  if (crb(c,0)) { goto L_801BB344; } // 801BB2DC
  c->r[29]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801BB2E0
  c->r[30]=0u+0x80350000u; // 801BB2E4
  c->r[31]=c->r[30]+0xFFFFCD60u; // 801BB2E8
  c->r[4]=c->r[31]+c->r[29]; // 801BB2EC
  c->r[4]=c->r[4]+0x00000034u; // 801BB2F0
  c->lr=0x801BB2F8u; f_801C1AE8(c); // 801BB2F4
  c->r[0]=rotl(c->r[27],6)&0xFFFFFFC0u; // 801BB2F8
  c->r[3]=c->r[26]|c->r[26]; // 801BB2FC
  c->r[4]=c->r[31]+c->r[0]; // 801BB300
  c->r[4]=c->r[4]+0x00000634u; // 801BB304
  c->lr=0x801BB30Cu; f_801C1B48(c); // 801BB308
  c->r[4]=c->r[31]+c->r[29]; // 801BB30C
  c->r[3]=c->r[26]|c->r[26]; // 801BB310
  c->r[4]=c->r[4]+0x00000E34u; // 801BB314
  c->lr=0x801BB31Cu; f_801C1C24(c); // 801BB318
  c->r[4]=c->r[31]+c->r[29]; // 801BB31C
  c->r[3]=c->r[26]|c->r[26]; // 801BB320
  c->r[4]=c->r[4]+0x00001434u; // 801BB324
  c->lr=0x801BB32Cu; f_801C1CF4(c); // 801BB328
  cmps(c,0,(int32_t)c->r[28],0); // 801BB32C
  if (crb(c,2)) { goto L_801BB344; } // 801BB330
  c->r[0]=R16(c->r[30]+0xFFFFCD60u); // 801BB334
  W16(c->r[31]+0x00000002u,c->r[27]); // 801BB338
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 801BB33C
  W16(c->r[30]+0xFFFFCD60u,c->r[0]); // 801BB340
L_801BB344:;
  c->r[11]=c->r[1]+0x00000020u; // 801BB344
  c->lr=0x801BB34Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BB348
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB34C
  c->lr=c->r[0]; // 801BB350
  c->r[1]=c->r[1]+0x00000020u; // 801BB354
  return; // 801BB358
}

// fn_801BB35C
void f_801BB35C(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 801BB35C
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801BB360
  c->r[0]=R16(c->r[3]+0x00000002u); // 801BB364
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BB368
  c->r[3]=c->r[3]+c->r[0]; // 801BB36C
  c->r[3]=c->r[3]+0x00000034u; // 801BB370
  return; // 801BB374
}

// fn_801BB378
void f_801BB378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB378
  c->r[0]=c->lr; // 801BB37C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB384
  c->r[31]=0u+0x80350000u; // 801BB388
  c->r[0]=R16(c->r[31]+0xFFFFCD60u); // 801BB38C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BB390
  if (!crb(c,2)) { goto L_801BB3C0; } // 801BB394
  c->r[3]=c->r[31]+0xFFFFCD60u; // 801BB398
  c->r[0]=R16(c->r[3]+0x00000002u); // 801BB39C
  c->r[4]=c->r[3]+0x00000004u; // 801BB3A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BB3A4
  c->r[3]=c->r[3]+c->r[0]; // 801BB3A8
  c->r[3]=c->r[3]+0x00000034u; // 801BB3AC
  c->lr=0x801BB3B4u; f_800EC358(c); // 801BB3B0
  c->r[0]=R16(c->r[31]+0xFFFFCD60u); // 801BB3B4
  c->r[0]=c->r[0]|0x00000001u; // 801BB3B8
  W16(c->r[31]+0xFFFFCD60u,c->r[0]); // 801BB3BC
L_801BB3C0:;
  c->r[3]=0u+0x80350000u; // 801BB3C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB3C4
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801BB3C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB3CC
  c->r[3]=c->r[3]+0x00000004u; // 801BB3D0
  c->lr=c->r[0]; // 801BB3D4
  c->r[1]=c->r[1]+0x00000010u; // 801BB3D8
  return; // 801BB3DC
}

// fn_801BB3E0
void f_801BB3E0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],32); // 801BB3E0
  if (!crb(c,0)) { goto L_801BB408; } // 801BB3E4
  cmps(c,0,(int32_t)c->r[3],0); // 801BB3E8
  if (crb(c,0)) { goto L_801BB408; } // 801BB3EC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801BB3F0
  c->r[3]=0u+0x80350000u; // 801BB3F4
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801BB3F8
  c->r[3]=c->r[3]+c->r[0]; // 801BB3FC
  c->r[3]=c->r[3]+0x00000034u; // 801BB400
  return; // 801BB404
L_801BB408:;
  c->r[3]=0u+0x00000000u; // 801BB408
  return; // 801BB40C
}

// fn_801BB410
void f_801BB410(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],32); // 801BB410
  if (!crb(c,0)) { goto L_801BB438; } // 801BB414
  cmps(c,0,(int32_t)c->r[3],0); // 801BB418
  if (crb(c,0)) { goto L_801BB438; } // 801BB41C
  c->r[4]=0u+0x80350000u; // 801BB420
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801BB424
  c->r[4]=c->r[4]+0xFFFFCD60u; // 801BB428
  c->r[3]=c->r[4]+c->r[0]; // 801BB42C
  c->r[3]=c->r[3]+0x00000634u; // 801BB430
  return; // 801BB434
L_801BB438:;
  c->r[3]=0u+0x00000000u; // 801BB438
  return; // 801BB43C
}

// fn_801BB440
void f_801BB440(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],32); // 801BB440
  if (!crb(c,0)) { goto L_801BB468; } // 801BB444
  cmps(c,0,(int32_t)c->r[3],0); // 801BB448
  if (crb(c,0)) { goto L_801BB468; } // 801BB44C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801BB450
  c->r[3]=0u+0x80350000u; // 801BB454
  c->r[3]=c->r[3]+0xFFFFCD60u; // 801BB458
  c->r[3]=c->r[3]+c->r[0]; // 801BB45C
  c->r[3]=c->r[3]+0x00000E34u; // 801BB460
  return; // 801BB464
L_801BB468:;
  c->r[3]=0u+0x00000000u; // 801BB468
  return; // 801BB46C
}

// fn_801BB470
void f_801BB470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB470
  c->r[0]=c->lr; // 801BB474
  W32(c->r[1]+0x00000094u,c->r[0]); // 801BB478
  c->r[11]=c->r[1]+0x00000090u; // 801BB47C
  c->lr=0x801BB484u; f_80109F04(c); // 801BB480
  c->r[15]=R8(c->r[3]+0x00000029u); // 801BB484
  c->r[4]=0u+0x80350000u; // 801BB488
  c->r[18]=c->r[4]+0xFFFFE794u; // 801BB48C
  c->r[0]=R8(c->r[3]+0x00000027u); // 801BB490
  W32(c->r[1]+0x00000040u,c->r[15]); // 801BB494
  c->r[15]=R8(c->r[3]+0x0000002Au); // 801BB498
  W8(c->r[18]+0x00000027u,c->r[0]); // 801BB49C
  c->r[0]=R32(c->r[1]+0x00000040u); // 801BB4A0
  W32(c->r[1]+0x00000008u,c->r[15]); // 801BB4A4
  c->r[15]=R8(c->r[3]+0x0000002Bu); // 801BB4A8
  W8(c->r[18]+0x00000029u,c->r[0]); // 801BB4AC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801BB4B0
  W32(c->r[1]+0x0000000Cu,c->r[15]); // 801BB4B4
  c->r[15]=R8(c->r[3]+0x0000002Cu); // 801BB4B8
  W8(c->r[18]+0x0000002Au,c->r[0]); // 801BB4BC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BB4C0
  W32(c->r[1]+0x00000010u,c->r[15]); // 801BB4C4
  c->r[15]=R8(c->r[3]+0x0000002Du); // 801BB4C8
  W8(c->r[18]+0x0000002Bu,c->r[0]); // 801BB4CC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801BB4D0
  W32(c->r[1]+0x00000014u,c->r[15]); // 801BB4D4
  c->r[15]=R8(c->r[3]+0x0000002Eu); // 801BB4D8
  W8(c->r[18]+0x0000002Cu,c->r[0]); // 801BB4DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB4E0
  W32(c->r[1]+0x00000018u,c->r[15]); // 801BB4E4
  c->r[15]=R8(c->r[3]+0x0000002Fu); // 801BB4E8
  W8(c->r[18]+0x0000002Du,c->r[0]); // 801BB4EC
  c->r[0]=R32(c->r[1]+0x00000018u); // 801BB4F0
  W32(c->r[1]+0x0000001Cu,c->r[15]); // 801BB4F4
  c->r[15]=R8(c->r[3]+0x00000030u); // 801BB4F8
  W8(c->r[18]+0x0000002Eu,c->r[0]); // 801BB4FC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801BB500
  W32(c->r[1]+0x00000020u,c->r[15]); // 801BB504
  c->r[15]=R8(c->r[3]+0x00000031u); // 801BB508
  W8(c->r[18]+0x0000002Fu,c->r[0]); // 801BB50C
  c->r[0]=R32(c->r[1]+0x00000020u); // 801BB510
  W32(c->r[1]+0x00000024u,c->r[15]); // 801BB514
  c->r[15]=R8(c->r[3]+0x00000032u); // 801BB518
  W8(c->r[18]+0x00000030u,c->r[0]); // 801BB51C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB520
  W32(c->r[1]+0x00000028u,c->r[15]); // 801BB524
  c->r[15]=R8(c->r[3]+0x00000033u); // 801BB528
  W8(c->r[18]+0x00000031u,c->r[0]); // 801BB52C
  c->r[0]=R32(c->r[1]+0x00000028u); // 801BB530
  W32(c->r[1]+0x0000002Cu,c->r[15]); // 801BB534
  c->r[15]=R8(c->r[3]+0x00000034u); // 801BB538
  W8(c->r[18]+0x00000032u,c->r[0]); // 801BB53C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801BB540
  W32(c->r[1]+0x00000030u,c->r[15]); // 801BB544
  c->r[15]=R8(c->r[3]+0x00000035u); // 801BB548
  W8(c->r[18]+0x00000033u,c->r[0]); // 801BB54C
  c->r[0]=R32(c->r[1]+0x00000030u); // 801BB550
  W32(c->r[1]+0x00000034u,c->r[15]); // 801BB554
  c->r[15]=R8(c->r[3]+0x00000036u); // 801BB558
  W8(c->r[18]+0x00000034u,c->r[0]); // 801BB55C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BB560
  W32(c->r[1]+0x00000038u,c->r[15]); // 801BB564
  c->r[15]=R8(c->r[3]+0x00000037u); // 801BB568
  W8(c->r[18]+0x00000035u,c->r[0]); // 801BB56C
  c->r[0]=R32(c->r[1]+0x00000038u); // 801BB570
  W32(c->r[1]+0x0000003Cu,c->r[15]); // 801BB574
  c->r[17]=R16(c->r[3]+0x00000004u); // 801BB578
  c->r[19]=R16(c->r[3]+0x00000006u); // 801BB57C
  c->r[20]=R16(c->r[3]+0x00000008u); // 801BB580
  c->r[21]=R16(c->r[3]+0x0000000Au); // 801BB584
  c->r[22]=R16(c->r[3]+0x0000000Cu); // 801BB588
  c->r[23]=R16(c->r[3]+0x0000000Eu); // 801BB58C
  c->r[24]=R16(c->r[3]+0x00000010u); // 801BB590
  c->r[25]=R32(c->r[3]+0x00000014u); // 801BB594
  c->r[26]=R8(c->r[3]+0x00000018u); // 801BB598
  c->r[27]=R8(c->r[3]+0x00000019u); // 801BB59C
  c->r[28]=R8(c->r[3]+0x0000001Au); // 801BB5A0
  c->r[29]=R8(c->r[3]+0x0000001Bu); // 801BB5A4
  c->r[30]=R8(c->r[3]+0x0000001Cu); // 801BB5A8
  c->r[31]=R8(c->r[3]+0x0000001Du); // 801BB5AC
  c->r[12]=R8(c->r[3]+0x0000001Eu); // 801BB5B0
  c->r[11]=R8(c->r[3]+0x0000001Fu); // 801BB5B4
  c->r[10]=R8(c->r[3]+0x00000020u); // 801BB5B8
  c->r[9]=R8(c->r[3]+0x00000021u); // 801BB5BC
  c->r[8]=R8(c->r[3]+0x00000022u); // 801BB5C0
  c->r[7]=R8(c->r[3]+0x00000023u); // 801BB5C4
  c->r[6]=R8(c->r[3]+0x00000024u); // 801BB5C8
  c->r[5]=R8(c->r[3]+0x00000025u); // 801BB5CC
  c->r[4]=R8(c->r[3]+0x00000026u); // 801BB5D0
  c->r[14]=R8(c->r[3]+0x00000028u); // 801BB5D4
  c->r[15]=R8(c->r[3]+0x00000038u); // 801BB5D8
  c->r[16]=R32(c->r[3]+0x00000000u); // 801BB5DC
  c->r[3]=0u+0x80350000u; // 801BB5E0
  W8(c->r[18]+0x00000036u,c->r[0]); // 801BB5E4
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 801BB5E8
  W32(c->r[3]+0xFFFFE794u,c->r[16]); // 801BB5EC
  W16(c->r[18]+0x00000004u,c->r[17]); // 801BB5F0
  W16(c->r[18]+0x00000006u,c->r[19]); // 801BB5F4
  W16(c->r[18]+0x00000008u,c->r[20]); // 801BB5F8
  W16(c->r[18]+0x0000000Au,c->r[21]); // 801BB5FC
  W16(c->r[18]+0x0000000Cu,c->r[22]); // 801BB600
  W16(c->r[18]+0x0000000Eu,c->r[23]); // 801BB604
  W16(c->r[18]+0x00000010u,c->r[24]); // 801BB608
  W32(c->r[18]+0x00000014u,c->r[25]); // 801BB60C
  W8(c->r[18]+0x00000018u,c->r[26]); // 801BB610
  W8(c->r[18]+0x00000019u,c->r[27]); // 801BB614
  W8(c->r[18]+0x0000001Au,c->r[28]); // 801BB618
  W8(c->r[18]+0x0000001Bu,c->r[29]); // 801BB61C
  W8(c->r[18]+0x0000001Cu,c->r[30]); // 801BB620
  W8(c->r[18]+0x0000001Du,c->r[31]); // 801BB624
  W8(c->r[18]+0x0000001Eu,c->r[12]); // 801BB628
  W8(c->r[18]+0x0000001Fu,c->r[11]); // 801BB62C
  W8(c->r[18]+0x00000020u,c->r[10]); // 801BB630
  W8(c->r[18]+0x00000021u,c->r[9]); // 801BB634
  W8(c->r[18]+0x00000022u,c->r[8]); // 801BB638
  W8(c->r[18]+0x00000023u,c->r[7]); // 801BB63C
  W8(c->r[18]+0x00000024u,c->r[6]); // 801BB640
  W8(c->r[18]+0x00000025u,c->r[5]); // 801BB644
  W8(c->r[18]+0x00000026u,c->r[4]); // 801BB648
  W8(c->r[18]+0x00000028u,c->r[14]); // 801BB64C
  W8(c->r[18]+0x00000037u,c->r[0]); // 801BB650
  W8(c->r[18]+0x00000038u,c->r[15]); // 801BB654
  c->r[11]=c->r[1]+0x00000090u; // 801BB658
  c->lr=0x801BB660u; f_80109F50(c); // 801BB65C
  c->r[0]=R32(c->r[1]+0x00000094u); // 801BB660
  c->lr=c->r[0]; // 801BB664
  c->r[1]=c->r[1]+0x00000090u; // 801BB668
  return; // 801BB66C
}

// fn_801BB670
void f_801BB670(Ctx* __restrict c) {
  c->r[3]=0u+0x80350000u; // 801BB670
  c->r[3]=c->r[3]+0xFFFFE794u; // 801BB674
  return; // 801BB678
}

// fn_801BB67C
void f_801BB67C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801BB67C
  c->r[4]=0u+0x80350000u; // 801BB680
  c->r[4]=c->r[4]+0xFFFF92E0u; // 801BB684
  if (crb(c,2)) { goto L_801BB69C; } // 801BB688
  c->r[0]=0u+0x00000000u; // 801BB68C
  c->r[5]=c->r[4]+0x00000080u; // 801BB690
  W8(c->r[5]+0x00000100u,c->r[0]); // 801BB694
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801BB698
L_801BB69C:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801BB69C
  if (crb(c,2)) { goto L_801BB6B0; } // 801BB6A0
  c->r[5]=c->r[4]+0x000001A0u; // 801BB6A4
  c->r[0]=0u+0x00000000u; // 801BB6A8
  W16(c->r[5]+0x00000060u,c->r[0]); // 801BB6AC
L_801BB6B0:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801BB6B0
  if (crb(c,2)) { goto L_801BB6C4; } // 801BB6B4
  c->r[0]=0u+0x00000000u; // 801BB6B8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801BB6BC
  W32(c->r[13]+0xFFFF9D54u,c->r[0]); // 801BB6C0
L_801BB6C4:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801BB6C4
  if (crb(c,2)) { goto L_801BB6F4; } // 801BB6C8
  c->r[7]=0u+0x00000001u; // 801BB6CC
  c->r[5]=c->r[4]+0x00000000u; // 801BB6D0
  c->r[6]=0u+0x00000000u; // 801BB6D4
  c->r[0]=0u+0x00000002u; // 801BB6D8
  W8(c->r[4]+0x00000000u,c->r[7]); // 801BB6DC
  W8(c->r[5]+0x00000001u,c->r[6]); // 801BB6E0
  W8(c->r[5]+0x00000002u,c->r[7]); // 801BB6E4
  W8(c->r[5]+0x00000003u,c->r[6]); // 801BB6E8
  W32(c->r[5]+0x00000004u,c->r[0]); // 801BB6EC
  W32(c->r[5]+0x00000008u,c->r[6]); // 801BB6F0
L_801BB6F4:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801BB6F4
  if (crb(c,2)) { goto L_801BB710; } // 801BB6F8
  c->r[0]=0u+0x00000000u; // 801BB6FC
  c->r[5]=c->r[4]+0x00000204u; // 801BB700
  W32(c->r[5]+0x00000008u,c->r[0]); // 801BB704
  W32(c->r[5]+0x00000004u,c->r[0]); // 801BB708
  W32(c->r[4]+0x00000204u,c->r[0]); // 801BB70C
L_801BB710:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 801BB710
  if (crb(c,2)) { goto L_801BB720; } // 801BB714
  c->r[0]=0u+0x00000000u; // 801BB718
  W8(c->r[13]+0xFFFF9D4Cu,c->r[0]); // 801BB71C
L_801BB720:;
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801BB720
  if (crb(c,2)) { goto L_801BB730; } // 801BB724
  c->r[0]=0u+0x00000000u; // 801BB728
  W32(c->r[13]+0xFFFF9D50u,c->r[0]); // 801BB72C
L_801BB730:;
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801BB730
  if (crb(c,2)) { goto L_801BB744; } // 801BB734
  c->r[0]=R32(c->r[13]+0xFFFF9D60u); // 801BB738
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801BB73C
  W32(c->r[13]+0xFFFF9D60u,c->r[0]); // 801BB740
L_801BB744:;
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 801BB744
  if (crb(c,2)) { goto L_801BB754; } // 801BB748
  c->r[0]=0u+0x00000000u; // 801BB74C
  W32(c->r[4]+0x00000A40u,c->r[0]); // 801BB750
L_801BB754:;
  c->r[0]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[0]); // 801BB754
  if (crb(c,2)) { goto L_801BB79C; } // 801BB758
  c->r[5]=c->r[4]+0x00001054u; // 801BB75C
  c->r[6]=0u+0xFFFFFFFFu; // 801BB760
  c->r[0]=0u+0x00000000u; // 801BB764
  W32(c->r[5]+0x00000010u,c->r[6]); // 801BB768
  W32(c->r[5]+0x00000014u,c->r[0]); // 801BB76C
  W32(c->r[5]+0x00000018u,c->r[0]); // 801BB770
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801BB774
  W32(c->r[5]+0x00000020u,c->r[0]); // 801BB778
  W8(c->r[5]+0x0000002Bu,c->r[6]); // 801BB77C
  W8(c->r[5]+0x0000002Au,c->r[6]); // 801BB780
  W8(c->r[5]+0x00000029u,c->r[6]); // 801BB784
  W8(c->r[5]+0x00000028u,c->r[6]); // 801BB788
  W8(c->r[5]+0x00000027u,c->r[6]); // 801BB78C
  W8(c->r[5]+0x00000026u,c->r[6]); // 801BB790
  W8(c->r[5]+0x00000025u,c->r[6]); // 801BB794
  W8(c->r[5]+0x00000024u,c->r[6]); // 801BB798
L_801BB79C:;
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 801BB79C
  if (crb(c,2)) { goto L_801BB7B8; } // 801BB7A0
  c->r[0]=0u+0x00000000u; // 801BB7A4
  c->r[3]=c->r[4]+0x00000230u; // 801BB7A8
  W32(c->r[4]+0x00000230u,c->r[0]); // 801BB7AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BB7B0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BB7B4
L_801BB7B8:;
  c->r[0]=0u+0x00000001u; // 801BB7B8
  W8(c->r[13]+0xFFFF9D48u,c->r[0]); // 801BB7BC
  return; // 801BB7C0
}

// SetNrmMapMtx__Q44nw4r3g3d8G3DState11IndMtxOpStdF14_GXIndTexMtxIDPCQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34Q44nw4r3g3d14ResMatMiscData14IndirectMethod
void f_801BB7C4(Ctx* __restrict c) {
  trace_call(0x801BB7C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB7C4
  c->r[0]=c->lr; // 801BB7C8
  cmps(c,0,(int32_t)c->r[4],1); // 801BB7CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BB7D0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BB7D4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BB7D8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801BB7DC
  c->r[29]=c->r[6]|c->r[6]; // 801BB7E0
  W32(c->r[1]+0x00000020u,c->r[28]); // 801BB7E4
  c->r[28]=c->r[3]|c->r[3]; // 801BB7E8
  if (crb(c,0)) { goto L_801BB908; } // 801BB7EC
  cmps(c,0,(int32_t)c->r[4],3); // 801BB7F0
  if (crb(c,1)) { goto L_801BB908; } // 801BB7F4
  cmps(c,0,(int32_t)c->r[7],0); // 801BB7F8
  if (crb(c,2)) { goto L_801BB908; } // 801BB7FC
  cmps(c,0,(int32_t)c->r[7],3); // 801BB800
  if (crb(c,2)) { goto L_801BB908; } // 801BB804
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 801BB808
  cmps(c,0,(int32_t)c->r[5],0); // 801BB80C
  c->r[4]=c->r[3]+c->r[6]; // 801BB810
  c->r[0]=0u+0x00000001u; // 801BB814
  W8(c->r[4]+0x00000004u,c->r[0]); // 801BB818
  if (crb(c,2)) { goto L_801BB8F8; } // 801BB81C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB820
  c->r[30]=(uint32_t)((int32_t)c->r[6]*(int32_t)48); // 801BB824
  {uint32_t ea=c->r[2]+0xFFFF9BE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB828
  cmps(c,0,(int32_t)c->r[7],2); // 801BB82C
  c->f[0]=-c->f[0]; // 801BB830
  c->r[3]=c->r[3]+c->r[30]; // 801BB834
  c->r[31]=c->r[3]+0x00000008u; // 801BB838
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BB83C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801BB840
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB844
  c->f[0]=-c->f[0]; // 801BB848
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BB84C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801BB850
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB854
  c->f[0]=-c->f[0]; // 801BB858
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BB85C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801BB860
  if (!crb(c,2)) { goto L_801BB8D0; } // 801BB864
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB868
  c->r[3]=c->r[1]+0x00000008u; // 801BB86C
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB870
  c->r[4]=c->r[3]|c->r[3]; // 801BB874
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BB878
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BB87C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801BB880
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801BB884
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801BB888
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801BB88C
  c->lr=0x801BB894u; f_800ECFD0(c); // 801BB890
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB894
  c->r[3]=c->r[28]+c->r[30]; // 801BB898
  {uint32_t ea=c->r[2]+0xFFFF9BE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB89C
  c->f[0]=-c->f[0]; // 801BB8A0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BB8A4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801BB8A8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB8AC
  c->f[0]=-c->f[0]; // 801BB8B0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BB8B4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801BB8B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB8BC
  c->f[0]=-c->f[0]; // 801BB8C0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BB8C4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801BB8C8
  goto L_801BB8E0; // 801BB8CC
L_801BB8D0:;
  {uint32_t ea=c->r[2]+0xFFFF9BD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB8D0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801BB8D4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801BB8D8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801BB8DC
L_801BB8E0:;
  c->r[3]=c->r[28]+c->r[30]; // 801BB8E0
  c->r[4]=c->r[29]|c->r[29]; // 801BB8E4
  c->r[5]=c->r[31]|c->r[31]; // 801BB8E8
  c->r[3]=c->r[3]+0x00000008u; // 801BB8EC
  c->lr=0x801BB8F4u; f_800EC0F4(c); // 801BB8F0
  goto L_801BB908; // 801BB8F4
L_801BB8F8:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)48); // 801BB8F8
  c->r[3]=c->r[3]+c->r[0]; // 801BB8FC
  c->r[3]=c->r[3]+0x00000008u; // 801BB900
  c->lr=0x801BB908u; f_801DB8A0(c); // 801BB904
L_801BB908:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BB908
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BB90C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BB910
  c->r[29]=R32(c->r[1]+0x00000024u); // 801BB914
  c->r[28]=R32(c->r[1]+0x00000020u); // 801BB918
  c->lr=c->r[0]; // 801BB91C
  c->r[1]=c->r[1]+0x00000030u; // 801BB920
  return; // 801BB924
}

// Reset__Q44nw4r3g3d8G3DState11IndMtxOpStdFv
void f_801BB928(Ctx* __restrict c) {
  trace_call(0x801BB928u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB928
  c->r[0]=c->lr; // 801BB92C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB934
  c->r[31]=c->r[3]|c->r[3]; // 801BB938
  c->r[3]=c->r[3]+0x00000008u; // 801BB93C
  c->lr=0x801BB944u; f_800EC094(c); // 801BB940
  c->r[3]=c->r[31]+0x00000038u; // 801BB944
  c->lr=0x801BB94Cu; f_800EC094(c); // 801BB948
  c->r[3]=c->r[31]+0x00000068u; // 801BB94C
  c->lr=0x801BB954u; f_800EC094(c); // 801BB950
  c->r[0]=0u+0x00000000u; // 801BB954
  W8(c->r[31]+0x00000006u,c->r[0]); // 801BB958
  W8(c->r[31]+0x00000005u,c->r[0]); // 801BB95C
  W8(c->r[31]+0x00000004u,c->r[0]); // 801BB960
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB964
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB968
  c->lr=c->r[0]; // 801BB96C
  c->r[1]=c->r[1]+0x00000010u; // 801BB970
  return; // 801BB974
}

// __cl__Q44nw4r3g3d8G3DState11IndMtxOpStdFPQ44nw4r3g3d8G3DState13IndTexMtxInfo
void f_801BB978(Ctx* __restrict c) {
  trace_call(0x801BB978u);
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BB978
  cmps(c,0,(int32_t)c->r[0],0); // 801BB97C
  if (crb(c,2)) { goto L_801BB9F0; } // 801BB980
  c->r[6]=R32(c->r[3]+0x00000008u); // 801BB984
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801BB988
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BB98C
  W32(c->r[4]+0x00000004u,c->r[6]); // 801BB990
  c->r[0]=c->r[0]|0x00000001u; // 801BB994
  W32(c->r[4]+0x00000008u,c->r[5]); // 801BB998
  c->r[6]=R32(c->r[3]+0x00000010u); // 801BB99C
  c->r[5]=R32(c->r[3]+0x00000014u); // 801BB9A0
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 801BB9A4
  W32(c->r[4]+0x00000010u,c->r[5]); // 801BB9A8
  c->r[6]=R32(c->r[3]+0x00000018u); // 801BB9AC
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 801BB9B0
  W32(c->r[4]+0x00000014u,c->r[6]); // 801BB9B4
  W32(c->r[4]+0x00000018u,c->r[5]); // 801BB9B8
  c->r[6]=R32(c->r[3]+0x00000020u); // 801BB9BC
  c->r[5]=R32(c->r[3]+0x00000024u); // 801BB9C0
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 801BB9C4
  W32(c->r[4]+0x00000020u,c->r[5]); // 801BB9C8
  c->r[6]=R32(c->r[3]+0x00000028u); // 801BB9CC
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 801BB9D0
  W32(c->r[4]+0x00000024u,c->r[6]); // 801BB9D4
  W32(c->r[4]+0x00000028u,c->r[5]); // 801BB9D8
  c->r[6]=R32(c->r[3]+0x00000030u); // 801BB9DC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801BB9E0
  W32(c->r[4]+0x0000002Cu,c->r[6]); // 801BB9E4
  W32(c->r[4]+0x00000030u,c->r[5]); // 801BB9E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801BB9EC
L_801BB9F0:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BB9F0
  cmps(c,0,(int32_t)c->r[0],0); // 801BB9F4
  if (crb(c,2)) { goto L_801BBA68; } // 801BB9F8
  c->r[6]=R32(c->r[3]+0x00000038u); // 801BB9FC
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 801BBA00
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BBA04
  W32(c->r[4]+0x00000034u,c->r[6]); // 801BBA08
  c->r[0]=c->r[0]|0x00000002u; // 801BBA0C
  W32(c->r[4]+0x00000038u,c->r[5]); // 801BBA10
  c->r[6]=R32(c->r[3]+0x00000040u); // 801BBA14
  c->r[5]=R32(c->r[3]+0x00000044u); // 801BBA18
  W32(c->r[4]+0x0000003Cu,c->r[6]); // 801BBA1C
  W32(c->r[4]+0x00000040u,c->r[5]); // 801BBA20
  c->r[6]=R32(c->r[3]+0x00000048u); // 801BBA24
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 801BBA28
  W32(c->r[4]+0x00000044u,c->r[6]); // 801BBA2C
  W32(c->r[4]+0x00000048u,c->r[5]); // 801BBA30
  c->r[6]=R32(c->r[3]+0x00000050u); // 801BBA34
  c->r[5]=R32(c->r[3]+0x00000054u); // 801BBA38
  W32(c->r[4]+0x0000004Cu,c->r[6]); // 801BBA3C
  W32(c->r[4]+0x00000050u,c->r[5]); // 801BBA40
  c->r[6]=R32(c->r[3]+0x00000058u); // 801BBA44
  c->r[5]=R32(c->r[3]+0x0000005Cu); // 801BBA48
  W32(c->r[4]+0x00000054u,c->r[6]); // 801BBA4C
  W32(c->r[4]+0x00000058u,c->r[5]); // 801BBA50
  c->r[6]=R32(c->r[3]+0x00000060u); // 801BBA54
  c->r[5]=R32(c->r[3]+0x00000064u); // 801BBA58
  W32(c->r[4]+0x0000005Cu,c->r[6]); // 801BBA5C
  W32(c->r[4]+0x00000060u,c->r[5]); // 801BBA60
  W32(c->r[4]+0x00000000u,c->r[0]); // 801BBA64
L_801BBA68:;
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BBA68
  cmps(c,0,(int32_t)c->r[0],0); // 801BBA6C
  if (crb(c,2)) return; // 801BBA70
  c->r[6]=R32(c->r[3]+0x00000068u); // 801BBA74
  c->r[5]=R32(c->r[3]+0x0000006Cu); // 801BBA78
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BBA7C
  W32(c->r[4]+0x00000064u,c->r[6]); // 801BBA80
  c->r[0]=c->r[0]|0x00000004u; // 801BBA84
  W32(c->r[4]+0x00000068u,c->r[5]); // 801BBA88
  c->r[6]=R32(c->r[3]+0x00000070u); // 801BBA8C
  c->r[5]=R32(c->r[3]+0x00000074u); // 801BBA90
  W32(c->r[4]+0x0000006Cu,c->r[6]); // 801BBA94
  W32(c->r[4]+0x00000070u,c->r[5]); // 801BBA98
  c->r[6]=R32(c->r[3]+0x00000078u); // 801BBA9C
  c->r[5]=R32(c->r[3]+0x0000007Cu); // 801BBAA0
  W32(c->r[4]+0x00000074u,c->r[6]); // 801BBAA4
  W32(c->r[4]+0x00000078u,c->r[5]); // 801BBAA8
  c->r[6]=R32(c->r[3]+0x00000080u); // 801BBAAC
  c->r[5]=R32(c->r[3]+0x00000084u); // 801BBAB0
  W32(c->r[4]+0x0000007Cu,c->r[6]); // 801BBAB4
  W32(c->r[4]+0x00000080u,c->r[5]); // 801BBAB8
  c->r[6]=R32(c->r[3]+0x00000088u); // 801BBABC
  c->r[5]=R32(c->r[3]+0x0000008Cu); // 801BBAC0
  W32(c->r[4]+0x00000084u,c->r[6]); // 801BBAC4
  W32(c->r[4]+0x00000088u,c->r[5]); // 801BBAC8
  c->r[5]=R32(c->r[3]+0x00000090u); // 801BBACC
  c->r[3]=R32(c->r[3]+0x00000094u); // 801BBAD0
  W32(c->r[4]+0x0000008Cu,c->r[5]); // 801BBAD4
  W32(c->r[4]+0x00000090u,c->r[3]); // 801BBAD8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801BBADC
  return; // 801BBAE0
}

// __dt__Q44nw4r3g3d8G3DState11IndMtxOpStdFv
void f_801BBAE4(Ctx* __restrict c) {
  trace_call(0x801BBAE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBAE4
  c->r[0]=c->lr; // 801BBAE8
  cmps(c,0,(int32_t)c->r[3],0); // 801BBAEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBAF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BBAF4
  c->r[31]=c->r[3]|c->r[3]; // 801BBAF8
  if (crb(c,2)) { goto L_801BBB0C; } // 801BBAFC
  cmps(c,0,(int32_t)c->r[4],0); // 801BBB00
  if (!crb(c,1)) { goto L_801BBB0C; } // 801BBB04
  c->lr=0x801BBB0Cu; f_8009230C(c); // 801BBB08
L_801BBB0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801BBB0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BBB10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BBB14
  c->lr=c->r[0]; // 801BBB18
  c->r[1]=c->r[1]+0x00000010u; // 801BBB1C
  return; // 801BBB20
}

// fn_801BBB24
void f_801BBB24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBB24
  c->r[0]=c->lr; // 801BBB28
  c->r[4]=0u+0x00000000u; // 801BBB2C
  c->r[5]=0u+0x0000006Cu; // 801BBB30
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BBB34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BBB38
  c->r[31]=0u+0x80350000u; // 801BBB3C
  c->r[31]=c->r[31]+0xFFFF92E0u; // 801BBB40
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BBB44
  c->r[30]=0u+0x00000000u; // 801BBB48
  c->r[6]=c->r[31]+0x00000000u; // 801BBB4C
  c->r[3]=c->r[31]+0x0000000Cu; // 801BBB50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BBB54
  c->r[29]=0u+0x00000002u; // 801BBB58
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BBB5C
  c->r[28]=0u+0x00000001u; // 801BBB60
  W8(c->r[13]+0xFFFF9D48u,c->r[28]); // 801BBB64
  W8(c->r[31]+0x00000000u,c->r[28]); // 801BBB68
  W8(c->r[6]+0x00000001u,c->r[30]); // 801BBB6C
  W8(c->r[6]+0x00000002u,c->r[28]); // 801BBB70
  W8(c->r[6]+0x00000003u,c->r[30]); // 801BBB74
  W32(c->r[6]+0x00000004u,c->r[29]); // 801BBB78
  W32(c->r[6]+0x00000008u,c->r[30]); // 801BBB7C
  c->lr=0x801BBB84u; f_8000443C(c); // 801BBB80
  c->r[8]=0u+0x801C0000u; // 801BBB84
  c->r[6]=0u+0x801C0000u; // 801BBB88
  c->r[10]=c->r[31]+0x00000210u; // 801BBB8C
  c->r[7]=c->r[31]+0x00000240u; // 801BBB90
  c->r[11]=c->r[31]+0x00000204u; // 801BBB94
  c->r[9]=c->r[31]+0x00000230u; // 801BBB98
  c->r[6]=c->r[6]+0xFFFF83F4u; // 801BBB9C
  c->r[5]=0u+0x801C0000u; // 801BBBA0
  c->r[4]=0u+0x801C0000u; // 801BBBA4
  c->r[3]=c->r[31]+0x00000080u; // 801BBBA8
  c->r[12]=c->r[31]+0x000001A0u; // 801BBBAC
  c->r[8]=c->r[8]+0xFFFF8D50u; // 801BBBB0
  c->r[5]=c->r[5]+0xFFFF87D8u; // 801BBBB4
  c->r[4]=c->r[4]+0xFFFF8904u; // 801BBBB8
  W8(c->r[3]+0x00000100u,c->r[30]); // 801BBBBC
  c->r[0]=0u+0x000000FBu; // 801BBBC0
  c->r[3]=0u+0x00000028u; // 801BBBC4
  W16(c->r[12]+0x00000060u,c->r[30]); // 801BBBC8
  W32(c->r[11]+0x00000008u,c->r[30]); // 801BBBCC
  W32(c->r[11]+0x00000004u,c->r[30]); // 801BBBD0
  W32(c->r[31]+0x00000204u,c->r[30]); // 801BBBD4
  W8(c->r[13]+0xFFFF9D4Cu,c->r[30]); // 801BBBD8
  W32(c->r[13]+0xFFFF9D50u,c->r[30]); // 801BBBDC
  W32(c->r[10]+0x0000001Cu,c->r[30]); // 801BBBE0
  W32(c->r[10]+0x00000018u,c->r[30]); // 801BBBE4
  W32(c->r[10]+0x00000014u,c->r[30]); // 801BBBE8
  W32(c->r[10]+0x00000010u,c->r[30]); // 801BBBEC
  W32(c->r[10]+0x0000000Cu,c->r[30]); // 801BBBF0
  W32(c->r[10]+0x00000008u,c->r[30]); // 801BBBF4
  W32(c->r[10]+0x00000004u,c->r[30]); // 801BBBF8
  W32(c->r[31]+0x00000210u,c->r[30]); // 801BBBFC
  W32(c->r[13]+0xFFFF9D54u,c->r[30]); // 801BBC00
  W32(c->r[31]+0x00000230u,c->r[30]); // 801BBC04
  W32(c->r[9]+0x00000004u,c->r[30]); // 801BBC08
  W32(c->r[9]+0x00000008u,c->r[30]); // 801BBC0C
  W32(c->r[31]+0x00000240u,c->r[8]); // 801BBC10
  W32(c->r[7]+0x00000004u,c->r[30]); // 801BBC14
  W32(c->r[7]+0x00000008u,c->r[6]); // 801BBC18
  W32(c->r[7]+0x0000000Cu,c->r[28]); // 801BBC1C
  W32(c->r[7]+0x00000010u,c->r[5]); // 801BBC20
  W32(c->r[7]+0x00000014u,c->r[29]); // 801BBC24
  W32(c->r[7]+0x00000018u,c->r[6]); // 801BBC28
  W32(c->r[7]+0x0000001Cu,c->r[28]); // 801BBC2C
  W32(c->r[7]+0x00000020u,c->r[4]); // 801BBC30
  W32(c->r[7]+0x00000024u,c->r[28]); // 801BBC34
  c->ctr=c->r[0]; // 801BBC38
L_801BBC3C:;
  W32(c->r[7]+c->r[3],c->r[8]); // 801BBC3C
  c->r[4]=c->r[7]+c->r[3]; // 801BBC40
  c->r[3]=c->r[3]+0x00000008u; // 801BBC44
  W32(c->r[4]+0x00000004u,c->r[30]); // 801BBC48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BBC3C; } // 801BBC4C
  c->r[3]=0u+0x00000000u; // 801BBC50
  c->r[29]=c->r[31]+0x00000A40u; // 801BBC54
  c->r[0]=0u+0xFFFFFFFFu; // 801BBC58
  W32(c->r[31]+0x00000A40u,c->r[3]); // 801BBC5C
  c->r[28]=0u+0x00000000u; // 801BBC60
  c->r[30]=0u+0x00000000u; // 801BBC64
  W32(c->r[29]+0x00000004u,c->r[0]); // 801BBC68
L_801BBC6C:;
  c->r[4]=c->r[29]+c->r[30]; // 801BBC6C
  c->r[3]=c->r[1]+0x00000008u; // 801BBC70
  c->r[4]=c->r[4]+0x00000008u; // 801BBC74
  c->lr=0x801BBC7Cu; f_801CDBA8(c); // 801BBC78
  c->lr=0x801BBC80u; f_801CDBB0(c); // 801BBC7C
  c->r[28]=c->r[28]+0x00000001u; // 801BBC80
  c->r[30]=c->r[30]+0x00000030u; // 801BBC84
  cmpu(c,0,c->r[28],0x00000020u); // 801BBC88
  if (crb(c,0)) { IRQCHK(c); goto L_801BBC6C; } // 801BBC8C
  c->r[28]=c->r[31]+0x00001054u; // 801BBC90
  c->r[6]=0u+0x00000080u; // 801BBC94
  c->r[3]=c->r[28]|c->r[28]; // 801BBC98
  c->r[8]=0u+0x00000080u; // 801BBC9C
  c->r[4]=c->r[28]+0x0000002Cu; // 801BBCA0
  c->r[5]=c->r[28]+0x0000222Cu; // 801BBCA4
  c->r[7]=c->r[28]+0x0000242Cu; // 801BBCA8
  c->lr=0x801BBCB0u; f_801CDFCC(c); // 801BBCAC
  c->r[4]=0u+0x801C0000u; // 801BBCB0
  c->r[5]=0u+0x801C0000u; // 801BBCB4
  c->r[3]=c->r[28]+0x0000002Cu; // 801BBCB8
  c->r[6]=0u+0x00000044u; // 801BBCBC
  c->r[4]=c->r[4]+0xFFFF8DD0u; // 801BBCC0
  c->r[5]=c->r[5]+0xFFFF8DDCu; // 801BBCC4
  c->r[7]=0u+0x00000080u; // 801BBCC8
  c->lr=0x801BBCD0u; f_80109BD0(c); // 801BBCCC
  c->r[0]=0u+0xFFFFFFFFu; // 801BBCD0
  c->r[30]=0u+0x00000000u; // 801BBCD4
  c->r[4]=0u+0x801C0000u; // 801BBCD8
  W32(c->r[28]+0x00000010u,c->r[0]); // 801BBCDC
  c->r[3]=c->r[28]|c->r[28]; // 801BBCE0
  c->r[5]=c->r[31]+0x00001048u; // 801BBCE4
  W32(c->r[28]+0x00000014u,c->r[30]); // 801BBCE8
  c->r[4]=c->r[4]+0xFFFFBDB8u; // 801BBCEC
  W32(c->r[28]+0x00000018u,c->r[30]); // 801BBCF0
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 801BBCF4
  W32(c->r[28]+0x00000020u,c->r[30]); // 801BBCF8
  W8(c->r[28]+0x0000002Bu,c->r[0]); // 801BBCFC
  W8(c->r[28]+0x0000002Au,c->r[0]); // 801BBD00
  W8(c->r[28]+0x00000029u,c->r[0]); // 801BBD04
  W8(c->r[28]+0x00000028u,c->r[0]); // 801BBD08
  W8(c->r[28]+0x00000027u,c->r[0]); // 801BBD0C
  W8(c->r[28]+0x00000026u,c->r[0]); // 801BBD10
  W8(c->r[28]+0x00000025u,c->r[0]); // 801BBD14
  W8(c->r[28]+0x00000024u,c->r[0]); // 801BBD18
  c->lr=0x801BBD20u; f_8010967C(c); // 801BBD1C
  c->r[3]=c->r[31]+0x00003A80u; // 801BBD20
  c->lr=0x801BBD28u; f_801B9328(c); // 801BBD24
  c->r[3]=0u+0x802A0000u; // 801BBD28
  c->r[28]=c->r[31]+0x00005500u; // 801BBD2C
  c->r[3]=c->r[3]+0x00001418u; // 801BBD30
  c->r[4]=c->r[13]+0xFFFF9D60u; // 801BBD34
  W32(c->r[13]+0xFFFF9D60u,c->r[30]); // 801BBD38
  c->r[5]=c->r[28]+0x00000008u; // 801BBD3C
  c->r[0]=c->r[28]+0x00000098u; // 801BBD40
  W8(c->r[4]+0x00000004u,c->r[30]); // 801BBD44
  W32(c->r[28]+0x00000000u,c->r[3]); // 801BBD48
L_801BBD4C:;
  c->r[5]=c->r[5]+0x00000030u; // 801BBD4C
  cmpu(c,0,c->r[5],c->r[0]); // 801BBD50
  if (crb(c,0)) { IRQCHK(c); goto L_801BBD4C; } // 801BBD54
  c->r[3]=c->r[28]+0x00000008u; // 801BBD58
  c->lr=0x801BBD60u; f_800EC094(c); // 801BBD5C
  c->r[3]=c->r[28]+0x00000038u; // 801BBD60
  c->lr=0x801BBD68u; f_800EC094(c); // 801BBD64
  c->r[3]=c->r[28]+0x00000068u; // 801BBD68
  c->lr=0x801BBD70u; f_800EC094(c); // 801BBD6C
  c->r[0]=0u+0x00000000u; // 801BBD70
  c->r[4]=0u+0x801C0000u; // 801BBD74
  W8(c->r[28]+0x00000006u,c->r[0]); // 801BBD78
  c->r[3]=c->r[31]+0x00005500u; // 801BBD7C
  c->r[4]=c->r[4]+0xFFFFBAE4u; // 801BBD80
  c->r[5]=c->r[31]+0x000054F0u; // 801BBD84
  W8(c->r[28]+0x00000005u,c->r[0]); // 801BBD88
  W8(c->r[28]+0x00000004u,c->r[0]); // 801BBD8C
  W8(c->r[28]+0x00000007u,c->r[0]); // 801BBD90
  c->lr=0x801BBD98u; f_8010967C(c); // 801BBD94
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBD98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BBD9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BBDA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BBDA4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BBDA8
  c->lr=c->r[0]; // 801BBDAC
  c->r[1]=c->r[1]+0x00000020u; // 801BBDB0
  return; // 801BBDB4
}

// __dt__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFv
void f_801BBDB8(Ctx* __restrict c) {
  trace_call(0x801BBDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBDB8
  c->r[0]=c->lr; // 801BBDBC
  cmps(c,0,(int32_t)c->r[3],0); // 801BBDC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBDC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BBDC8
  c->r[31]=c->r[4]|c->r[4]; // 801BBDCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BBDD0
  c->r[30]=c->r[3]|c->r[3]; // 801BBDD4
  if (crb(c,2)) { goto L_801BBE04; } // 801BBDD8
  c->r[4]=0u+0x801C0000u; // 801BBDDC
  c->r[5]=0u+0x00000044u; // 801BBDE0
  c->r[4]=c->r[4]+0xFFFF8DDCu; // 801BBDE4
  c->r[6]=0u+0x00000080u; // 801BBDE8
  c->r[3]=c->r[3]+0x0000002Cu; // 801BBDEC
  c->lr=0x801BBDF4u; f_80109CC8(c); // 801BBDF0
  cmps(c,0,(int32_t)c->r[31],0); // 801BBDF4
  if (!crb(c,1)) { goto L_801BBE04; } // 801BBDF8
  c->r[3]=c->r[30]|c->r[30]; // 801BBDFC
  c->lr=0x801BBE04u; f_8009230C(c); // 801BBE00
L_801BBE04:;
  c->r[3]=c->r[30]|c->r[30]; // 801BBE04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BBE08
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BBE0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BBE10
  c->lr=c->r[0]; // 801BBE14
  c->r[1]=c->r[1]+0x00000010u; // 801BBE18
  return; // 801BBE1C
}

// LoadMaterial__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatUlPQ34nw4r3g3d16Draw1Mat1ShpSwapPQ44nw4r3g3d8G3DState8IndMtxOpb
void f_801BBE20(Ctx* __restrict c) {
  trace_call(0x801BBE20u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBE20
  c->r[0]=c->lr; // 801BBE24
  cmps(c,0,(int32_t)c->r[7],0); // 801BBE28
  W32(c->r[1]+0x00000134u,c->r[0]); // 801BBE2C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801BBE30
  c->r[31]=c->r[6]|c->r[6]; // 801BBE34
  W32(c->r[1]+0x00000128u,c->r[30]); // 801BBE38
  c->r[30]=c->r[5]|c->r[5]; // 801BBE3C
  W32(c->r[1]+0x00000124u,c->r[29]); // 801BBE40
  c->r[29]=c->r[4]|c->r[4]; // 801BBE44
  W32(c->r[1]+0x00000120u,c->r[28]); // 801BBE48
  c->r[28]=c->r[3]|c->r[3]; // 801BBE4C
  if (!crb(c,2)) { goto L_801BC238; } // 801BBE50
  c->r[0]=0u+0x00000000u; // 801BBE54
  cmps(c,0,(int32_t)c->r[5],0); // 801BBE58
  W32(c->r[1]+0x00000088u,c->r[0]); // 801BBE5C
  if (crb(c,2)) { goto L_801BBE70; } // 801BBE60
  c->r[0]=R32(c->r[5]+0x00000024u); // 801BBE64
  cmps(c,0,(int32_t)c->r[0],0); // 801BBE68
  if (!crb(c,2)) { goto L_801BBE80; } // 801BBE6C
L_801BBE70:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BBE70
  c->r[0]=c->r[3]+0x0000001Cu; // 801BBE74
  W32(c->r[1]+0x00000088u,c->r[0]); // 801BBE78
  goto L_801BBE88; // 801BBE7C
L_801BBE80:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 801BBE80
  W32(c->r[1]+0x00000088u,c->r[0]); // 801BBE84
L_801BBE88:;
  c->r[3]=c->r[1]+0x00000088u; // 801BBE88
  c->lr=0x801BBE90u; f_801ABC9C(c); // 801BBE8C
  c->lr=0x801BBE94u; f_801BB154(c); // 801BBE90
  c->r[0]=R32(c->r[1]+0x00000088u); // 801BBE94
  c->r[3]=c->r[1]+0x0000006Cu; // 801BBE98
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BBE9C
  c->lr=0x801BBEA4u; f_801B93C0(c); // 801BBEA0
  cmps(c,0,(int32_t)c->r[30],0); // 801BBEA4
  if (crb(c,2)) { goto L_801BBEB8; } // 801BBEA8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801BBEAC
  cmps(c,0,(int32_t)c->r[0],0); // 801BBEB0
  if (!crb(c,2)) { goto L_801BBED0; } // 801BBEB4
L_801BBEB8:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 801BBEB8
  c->r[3]=c->r[1]+0x00000068u; // 801BBEBC
  c->r[0]=c->r[4]+0x00000144u; // 801BBEC0
  W32(c->r[1]+0x00000068u,c->r[0]); // 801BBEC4
  c->lr=0x801BBECCu; f_801B9698(c); // 801BBEC8
  goto L_801BBEE0; // 801BBECC
L_801BBED0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801BBED0
  c->r[3]=c->r[1]+0x00000064u; // 801BBED4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BBED8
  c->lr=0x801BBEE0u; f_801B9698(c); // 801BBEDC
L_801BBEE0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BBEE0
  if (crb(c,2)) { goto L_801BBEF4; } // 801BBEE4
  c->r[0]=R32(c->r[30]+0x00000000u); // 801BBEE8
  cmps(c,0,(int32_t)c->r[0],0); // 801BBEEC
  if (!crb(c,2)) { goto L_801BBF0C; } // 801BBEF0
L_801BBEF4:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 801BBEF4
  c->r[3]=c->r[1]+0x00000060u; // 801BBEF8
  c->r[0]=c->r[4]+0x00000040u; // 801BBEFC
  W32(c->r[1]+0x00000060u,c->r[0]); // 801BBF00
  c->lr=0x801BBF08u; f_801B9430(c); // 801BBF04
  goto L_801BBF1C; // 801BBF08
L_801BBF0C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801BBF0C
  c->r[3]=c->r[1]+0x0000005Cu; // 801BBF10
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801BBF14
  c->lr=0x801BBF1Cu; f_801B9430(c); // 801BBF18
L_801BBF1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BBF1C
  if (crb(c,2)) { goto L_801BBF30; } // 801BBF20
  c->r[0]=R32(c->r[30]+0x00000008u); // 801BBF24
  cmps(c,0,(int32_t)c->r[0],0); // 801BBF28
  if (!crb(c,2)) { goto L_801BBF48; } // 801BBF2C
L_801BBF30:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 801BBF30
  c->r[3]=c->r[1]+0x00000058u; // 801BBF34
  c->r[0]=c->r[4]+0x00000014u; // 801BBF38
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BBF3C
  c->lr=0x801BBF44u; f_801B97E4(c); // 801BBF40
  goto L_801BBF58; // 801BBF44
L_801BBF48:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801BBF48
  c->r[3]=c->r[1]+0x00000054u; // 801BBF4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BBF50
  c->lr=0x801BBF58u; f_801B97E4(c); // 801BBF54
L_801BBF58:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BBF58
  if (crb(c,2)) { goto L_801BBF6C; } // 801BBF5C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801BBF60
  cmps(c,0,(int32_t)c->r[0],0); // 801BBF64
  if (!crb(c,2)) { goto L_801BBF84; } // 801BBF68
L_801BBF6C:;
  c->r[3]=c->r[28]|c->r[28]; // 801BBF6C
  c->lr=0x801BBF74u; f_801ACDD4(c); // 801BBF70
  W32(c->r[1]+0x00000050u,c->r[3]); // 801BBF74
  c->r[3]=c->r[1]+0x00000050u; // 801BBF78
  c->lr=0x801BBF80u; f_801B99B0(c); // 801BBF7C
  goto L_801BBF94; // 801BBF80
L_801BBF84:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801BBF84
  c->r[3]=c->r[1]+0x0000004Cu; // 801BBF88
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801BBF8C
  c->lr=0x801BBF94u; f_801B99B0(c); // 801BBF90
L_801BBF94:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BBF94
  if (crb(c,2)) { goto L_801BBFA8; } // 801BBF98
  c->r[0]=R32(c->r[30]+0x00000010u); // 801BBF9C
  cmps(c,0,(int32_t)c->r[0],0); // 801BBFA0
  if (!crb(c,2)) { goto L_801BBFD4; } // 801BBFA4
L_801BBFA8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801BBFA8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801BBFAC
  cmps(c,0,(int32_t)c->r[0],0); // 801BBFB0
  if (crb(c,2)) { goto L_801BBFC0; } // 801BBFB4
  c->r[0]=c->r[3]+c->r[0]; // 801BBFB8
  goto L_801BBFC4; // 801BBFBC
L_801BBFC0:;
  c->r[0]=0u+0x00000000u; // 801BBFC0
L_801BBFC4:;
  W32(c->r[1]+0x00000048u,c->r[0]); // 801BBFC4
  c->r[3]=c->r[1]+0x00000048u; // 801BBFC8
  c->lr=0x801BBFD0u; f_801B9BC0(c); // 801BBFCC
  goto L_801BBFE4; // 801BBFD0
L_801BBFD4:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801BBFD4
  c->r[3]=c->r[1]+0x00000044u; // 801BBFD8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BBFDC
  c->lr=0x801BBFE4u; f_801B9BC0(c); // 801BBFE0
L_801BBFE4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BBFE4
  if (crb(c,2)) { goto L_801BBFF8; } // 801BBFE8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801BBFEC
  cmps(c,0,(int32_t)c->r[0],0); // 801BBFF0
  if (!crb(c,2)) { goto L_801BC028; } // 801BBFF4
L_801BBFF8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801BBFF8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801BBFFC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC000
  if (crb(c,2)) { goto L_801BC010; } // 801BC004
  c->r[3]=c->r[3]+c->r[0]; // 801BC008
  goto L_801BC014; // 801BC00C
L_801BC010:;
  c->r[3]=0u+0x00000000u; // 801BC010
L_801BC014:;
  c->r[0]=c->r[3]+0x00000020u; // 801BC014
  c->r[3]=c->r[1]+0x00000040u; // 801BC018
  W32(c->r[1]+0x00000040u,c->r[0]); // 801BC01C
  c->lr=0x801BC024u; f_801B9C6C(c); // 801BC020
  goto L_801BC038; // 801BC024
L_801BC028:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 801BC028
  c->r[3]=c->r[1]+0x0000003Cu; // 801BC02C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801BC030
  c->lr=0x801BC038u; f_801B9C6C(c); // 801BC034
L_801BC038:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BC038
  if (crb(c,2)) { goto L_801BC04C; } // 801BC03C
  c->r[0]=R32(c->r[30]+0x00000018u); // 801BC040
  cmps(c,0,(int32_t)c->r[0],0); // 801BC044
  if (!crb(c,2)) { goto L_801BC0B8; } // 801BC048
L_801BC04C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC04C
  if (crb(c,2)) { goto L_801BC088; } // 801BC050
  c->r[3]=R32(c->r[28]+0x00000000u); // 801BC054
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801BC058
  cmps(c,0,(int32_t)c->r[0],0); // 801BC05C
  if (crb(c,2)) { goto L_801BC06C; } // 801BC060
  c->r[3]=c->r[3]+c->r[0]; // 801BC064
  goto L_801BC070; // 801BC068
L_801BC06C:;
  c->r[3]=0u+0x00000000u; // 801BC06C
L_801BC070:;
  c->r[0]=c->r[3]+0x000000A0u; // 801BC070
  c->r[4]=c->r[31]|c->r[31]; // 801BC074
  W32(c->r[1]+0x00000038u,c->r[0]); // 801BC078
  c->r[3]=c->r[1]+0x00000038u; // 801BC07C
  c->lr=0x801BC084u; f_801B9DD0(c); // 801BC080
  goto L_801BC0E8; // 801BC084
L_801BC088:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801BC088
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801BC08C
  cmps(c,0,(int32_t)c->r[0],0); // 801BC090
  if (crb(c,2)) { goto L_801BC0A0; } // 801BC094
  c->r[3]=c->r[3]+c->r[0]; // 801BC098
  goto L_801BC0A4; // 801BC09C
L_801BC0A0:;
  c->r[3]=0u+0x00000000u; // 801BC0A0
L_801BC0A4:;
  c->r[0]=c->r[3]+0x000000A0u; // 801BC0A4
  c->r[3]=c->r[1]+0x00000034u; // 801BC0A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC0AC
  c->lr=0x801BC0B4u; f_801B9D18(c); // 801BC0B0
  goto L_801BC0E8; // 801BC0B4
L_801BC0B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC0B8
  if (crb(c,2)) { goto L_801BC0D8; } // 801BC0BC
  c->r[0]=R32(c->r[30]+0x00000018u); // 801BC0C0
  c->r[4]=c->r[31]|c->r[31]; // 801BC0C4
  c->r[3]=c->r[1]+0x00000030u; // 801BC0C8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801BC0CC
  c->lr=0x801BC0D4u; f_801B9DD0(c); // 801BC0D0
  goto L_801BC0E8; // 801BC0D4
L_801BC0D8:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 801BC0D8
  c->r[3]=c->r[1]+0x0000002Cu; // 801BC0DC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BC0E0
  c->lr=0x801BC0E8u; f_801B9D18(c); // 801BC0E4
L_801BC0E8:;
  c->r[3]=c->r[1]+0x00000088u; // 801BC0E8
  c->lr=0x801BC0F0u; f_801ABC7C(c); // 801BC0EC
  c->r[4]=c->r[1]+0x00000084u; // 801BC0F0
  c->r[5]=c->r[1]+0x00000080u; // 801BC0F4
  c->r[6]=c->r[1]+0x0000007Cu; // 801BC0F8
  c->r[7]=c->r[1]+0x00000078u; // 801BC0FC
  c->r[8]=c->r[1]+0x00000070u; // 801BC100
  c->lr=0x801BC108u; f_801BB254(c); // 801BC104
  c->r[5]=R8(c->r[1]+0x00000070u); // 801BC108
  cmps(c,0,(int32_t)c->r[30],0); // 801BC10C
  c->r[4]=R8(c->r[1]+0x00000071u); // 801BC110
  c->r[3]=R8(c->r[1]+0x00000072u); // 801BC114
  c->r[0]=R8(c->r[1]+0x00000073u); // 801BC118
  W8(c->r[1]+0x00000074u,c->r[5]); // 801BC11C
  W8(c->r[1]+0x00000075u,c->r[4]); // 801BC120
  W8(c->r[1]+0x00000076u,c->r[3]); // 801BC124
  W8(c->r[1]+0x00000077u,c->r[0]); // 801BC128
  if (crb(c,2)) { goto L_801BC13C; } // 801BC12C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801BC130
  cmps(c,0,(int32_t)c->r[0],0); // 801BC134
  if (!crb(c,2)) { goto L_801BC174; } // 801BC138
L_801BC13C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801BC13C
  c->r[9]=rotl(c->r[29],29)&0x00000001u; // 801BC140
  c->r[4]=R32(c->r[1]+0x00000084u); // 801BC144
  c->r[3]=c->r[1]+0x00000028u; // 801BC148
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC14C
  c->r[8]=c->r[1]+0x00000024u; // 801BC150
  c->r[5]=R32(c->r[1]+0x00000080u); // 801BC154
  c->r[7]=R32(c->r[28]+0x00000000u); // 801BC158
  c->r[6]=R32(c->r[1]+0x0000007Cu); // 801BC15C
  c->r[0]=c->r[7]+0x000003F0u; // 801BC160
  c->r[7]=R32(c->r[1]+0x00000078u); // 801BC164
  W32(c->r[1]+0x00000028u,c->r[0]); // 801BC168
  c->lr=0x801BC170u; f_801B9FA0(c); // 801BC16C
  goto L_801BC1A4; // 801BC170
L_801BC174:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801BC174
  c->r[9]=rotl(c->r[29],29)&0x00000001u; // 801BC178
  c->r[4]=R32(c->r[1]+0x00000084u); // 801BC17C
  c->r[3]=c->r[1]+0x00000020u; // 801BC180
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BC184
  c->r[8]=c->r[1]+0x0000001Cu; // 801BC188
  c->r[5]=R32(c->r[1]+0x00000080u); // 801BC18C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801BC190
  c->r[6]=R32(c->r[1]+0x0000007Cu); // 801BC194
  W32(c->r[1]+0x00000020u,c->r[0]); // 801BC198
  c->r[7]=R32(c->r[1]+0x00000078u); // 801BC19C
  c->lr=0x801BC1A4u; f_801B9FA0(c); // 801BC1A0
L_801BC1A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BC1A4
  if (crb(c,2)) { goto L_801BC1B8; } // 801BC1A8
  c->r[0]=R32(c->r[30]+0x00000020u); // 801BC1AC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC1B0
  if (!crb(c,2)) { goto L_801BC1E8; } // 801BC1B4
L_801BC1B8:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801BC1B8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801BC1BC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC1C0
  if (crb(c,2)) { goto L_801BC1D0; } // 801BC1C4
  c->r[3]=c->r[3]+c->r[0]; // 801BC1C8
  goto L_801BC1D4; // 801BC1CC
L_801BC1D0:;
  c->r[3]=0u+0x00000000u; // 801BC1D0
L_801BC1D4:;
  c->r[0]=c->r[3]+0x000000E0u; // 801BC1D4
  c->r[3]=c->r[1]+0x00000018u; // 801BC1D8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801BC1DC
  c->lr=0x801BC1E4u; f_801BA6CC(c); // 801BC1E0
  goto L_801BC1F8; // 801BC1E4
L_801BC1E8:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 801BC1E8
  c->r[3]=c->r[1]+0x00000014u; // 801BC1EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC1F0
  c->lr=0x801BC1F8u; f_801BA6CC(c); // 801BC1F4
L_801BC1F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BC1F8
  if (crb(c,2)) { goto L_801BC20C; } // 801BC1FC
  c->r[0]=R32(c->r[30]+0x00000028u); // 801BC200
  cmps(c,0,(int32_t)c->r[0],0); // 801BC204
  if (!crb(c,2)) { goto L_801BC224; } // 801BC208
L_801BC20C:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 801BC20C
  c->r[3]=c->r[1]+0x00000010u; // 801BC210
  c->r[0]=c->r[4]+0x000001A8u; // 801BC214
  W32(c->r[1]+0x00000010u,c->r[0]); // 801BC218
  c->lr=0x801BC220u; f_801BA75C(c); // 801BC21C
  goto L_801BC294; // 801BC220
L_801BC224:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 801BC224
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC228
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BC22C
  c->lr=0x801BC234u; f_801BA75C(c); // 801BC230
  goto L_801BC294; // 801BC234
L_801BC238:;
  cmps(c,0,(int32_t)c->r[6],0); // 801BC238
  if (crb(c,2)) { goto L_801BC294; } // 801BC23C
  cmps(c,0,(int32_t)c->r[5],0); // 801BC240
  if (crb(c,2)) { goto L_801BC254; } // 801BC244
  c->r[0]=R32(c->r[5]+0x00000018u); // 801BC248
  cmps(c,0,(int32_t)c->r[0],0); // 801BC24C
  if (!crb(c,2)) { goto L_801BC280; } // 801BC250
L_801BC254:;
  c->r[0]=0u+0x00000000u; // 801BC254
  c->r[3]=c->r[31]|c->r[31]; // 801BC258
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801BC25C
  c->r[4]=c->r[1]+0x0000008Cu; // 801BC260
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BC264
  c->r[12]=R32(c->r[12]+0x00000008u); // 801BC268
  c->ctr=c->r[12]; // 801BC26C
  if (true) { c->lr=0x801BC274u; dispatch(c,c->ctr); } // 801BC270
  c->r[3]=c->r[1]+0x0000008Cu; // 801BC274
  c->lr=0x801BC27Cu; f_801B8D60(c); // 801BC278
  goto L_801BC294; // 801BC27C
L_801BC280:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 801BC280
  c->r[4]=c->r[31]|c->r[31]; // 801BC284
  c->r[3]=c->r[1]+0x00000008u; // 801BC288
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BC28C
  c->lr=0x801BC294u; f_801B9DD0(c); // 801BC290
L_801BC294:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801BC294
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801BC298
  c->r[30]=R32(c->r[1]+0x00000128u); // 801BC29C
  c->r[29]=R32(c->r[1]+0x00000124u); // 801BC2A0
  c->r[28]=R32(c->r[1]+0x00000120u); // 801BC2A4
  c->lr=c->r[0]; // 801BC2A8
  c->r[1]=c->r[1]+0x00000130u; // 801BC2AC
  return; // 801BC2B0
}

// Draw1Mat1ShpDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMatQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34UlPQ34nw4r3g3d16Draw1Mat1ShpSwapPQ44nw4r3g3d8G3DState8IndMtxOp
void f_801BC2B4(Ctx* __restrict c) {
  trace_call(0x801BC2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFDA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC2B4
  c->r[0]=c->lr; // 801BC2B8
  W32(c->r[1]+0x00000264u,c->r[0]); // 801BC2BC
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[31]);} // 801BC2C0
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,31,ea,0,0);} // 801BC2C4
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[30]);} // 801BC2C8
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,30,ea,0,0);} // 801BC2CC
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[29]);} // 801BC2D0
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,29,ea,0,0);} // 801BC2D4
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[28]);} // 801BC2D8
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,28,ea,0,0);} // 801BC2DC
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[27]);} // 801BC2E0
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,27,ea,0,0);} // 801BC2E4
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[26]);} // 801BC2E8
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,26,ea,0,0);} // 801BC2EC
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[25]);} // 801BC2F0
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,25,ea,0,0);} // 801BC2F4
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[24]);} // 801BC2F8
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,24,ea,0,0);} // 801BC2FC
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[23]);} // 801BC300
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,23,ea,0,0);} // 801BC304
  c->r[11]=c->r[1]+0x000001D0u; // 801BC308
  c->lr=0x801BC310u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC30C
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 801BC310
  c->r[18]=c->r[3]|c->r[3]; // 801BC314
  c->r[0]=0u+0x43300000u; // 801BC318
  c->r[26]=c->r[4]|c->r[4]; // 801BC31C
  c->r[27]=c->r[5]|c->r[5]; // 801BC320
  c->r[28]=c->r[6]|c->r[6]; // 801BC324
  W32(c->r[1]+0x00000158u,c->r[0]); // 801BC328
  c->r[17]=c->r[7]|c->r[7]; // 801BC32C
  c->r[15]=c->r[8]|c->r[8]; // 801BC330
  c->r[20]=c->r[9]|c->r[9]; // 801BC334
  W32(c->r[1]+0x00000160u,c->r[0]); // 801BC338
  if (!crb(c,2)) { goto L_801BC34C; } // 801BC33C
  c->r[3]=0u+0x00000000u; // 801BC340
  c->lr=0x801BC348u; f_800E06DC(c); // 801BC344
  c->lr=0x801BC34Cu; f_800DDCE8(c); // 801BC348
L_801BC34C:;
  c->r[16]=0u+0x00000000u; // 801BC34C
  c->r[19]=0u+0x00000000u; // 801BC350
  W32(c->r[1]+0x00000074u,c->r[16]); // 801BC354
  c->r[0]=R32(c->r[18]+0x00000000u); // 801BC358
  cmps(c,0,(int32_t)c->r[0],0); // 801BC35C
  if (crb(c,2)) { goto L_801BC38C; } // 801BC360
  c->r[0]=rotl(c->r[17],0)&0x00000010u; cr0(c,c->r[0]); // 801BC364
  if (crb(c,2)) { goto L_801BC370; } // 801BC368
  c->r[16]=0u+0x00000001u; // 801BC36C
L_801BC370:;
  c->r[3]=c->r[18]|c->r[18]; // 801BC370
  c->lr=0x801BC378u; f_801ACDF4(c); // 801BC374
  cmps(c,0,(int32_t)c->r[3],0); // 801BC378
  W32(c->r[1]+0x00000074u,c->r[3]); // 801BC37C
  if (crb(c,2)) { goto L_801BC390; } // 801BC380
  c->r[19]=0u+0x00000001u; // 801BC384
  goto L_801BC390; // 801BC388
L_801BC38C:;
  c->r[16]=0u+0x00000001u; // 801BC38C
L_801BC390:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801BC390
  c->r[4]=c->r[17]|c->r[17]; // 801BC394
  c->r[5]=c->r[15]|c->r[15]; // 801BC398
  c->r[6]=c->r[20]|c->r[20]; // 801BC39C
  W32(c->r[1]+0x00000040u,c->r[0]); // 801BC3A0
  c->r[7]=c->r[16]|c->r[16]; // 801BC3A4
  c->r[3]=c->r[1]+0x00000040u; // 801BC3A8
  c->lr=0x801BC3B0u; f_801BBE20(c); // 801BC3AC
  c->r[3]=R32(c->r[26]+0x00000000u); // 801BC3B0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC3B4
  if (crb(c,2)) { goto L_801BCAF4; } // 801BC3B8
  c->r[0]=R32(c->r[3]+0x00000034u); // 801BC3BC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BC3C0
  if (!crb(c,2)) { goto L_801BCAF4; } // 801BC3C4
  cmps(c,0,(int32_t)c->r[19],0); // 801BC3C8
  if (crb(c,2)) { goto L_801BC9EC; } // 801BC3CC
  c->r[6]=0u+0x80270000u; // 801BC3D0
  {uint32_t ea=c->r[6]+0x00000D20u; c->r[5]=R32(ea); c->r[6]=ea;} // 801BC3D4
  c->r[0]=cntlz(c->r[15]); // 801BC3D8
  c->r[8]=R32(c->r[1]+0x00000074u); // 801BC3DC
  c->r[16]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[16]); // 801BC3E0
  c->r[4]=R32(c->r[6]+0x00000004u); // 801BC3E4
  c->r[3]=R32(c->r[6]+0x00000008u); // 801BC3E8
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801BC3EC
  W32(c->r[1]+0x00000080u,c->r[5]); // 801BC3F0
  c->r[7]=c->r[16]|c->r[16]; // 801BC3F4
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 801BC3F8
  W32(c->r[1]+0x00000084u,c->r[4]); // 801BC3FC
  {uint32_t ea=c->r[8]+0x00000010u; c->f[25]=c->ps1[25]=RF32(ea);} // 801BC400
  W32(c->r[1]+0x00000088u,c->r[3]); // 801BC404
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801BC408
  if (!crb(c,2)) { goto L_801BC41C; } // 801BC40C
  c->r[0]=R32(c->r[15]+0x00000014u); // 801BC410
  c->r[0]=cntlz(c->r[0]); // 801BC414
  c->r[7]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BC418
L_801BC41C:;
  cmps(c,0,(int32_t)c->r[7],0); // 801BC41C
  if (crb(c,2)) { goto L_801BC450; } // 801BC420
  c->r[3]=R32(c->r[18]+0x00000000u); // 801BC424
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801BC428
  cmps(c,0,(int32_t)c->r[0],0); // 801BC42C
  if (crb(c,2)) { goto L_801BC43C; } // 801BC430
  c->r[3]=c->r[3]+c->r[0]; // 801BC434
  goto L_801BC440; // 801BC438
L_801BC43C:;
  c->r[3]=0u+0x00000000u; // 801BC43C
L_801BC440:;
  c->r[0]=c->r[3]+0x00000020u; // 801BC440
  c->r[3]=c->r[1]+0x0000003Cu; // 801BC444
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801BC448
  goto L_801BC454; // 801BC44C
L_801BC450:;
  c->r[3]=c->r[15]+0x00000014u; // 801BC450
L_801BC454:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BC454
  c->r[3]=c->r[1]+0x0000005Cu; // 801BC458
  c->r[5]=c->r[1]+0x00000070u; // 801BC45C
  c->r[4]=0u+0x00000000u; // 801BC460
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801BC464
  c->lr=0x801BC46Cu; f_801AC0E4(c); // 801BC468
  c->r[3]=c->r[1]+0x0000005Cu; // 801BC46C
  c->r[5]=c->r[1]+0x0000006Cu; // 801BC470
  c->r[4]=0u+0x00000001u; // 801BC474
  c->lr=0x801BC47Cu; f_801AC0E4(c); // 801BC478
  c->r[3]=c->r[1]+0x0000005Cu; // 801BC47C
  c->r[5]=c->r[1]+0x00000068u; // 801BC480
  c->r[4]=0u+0x00000002u; // 801BC484
  c->lr=0x801BC48Cu; f_801AC0E4(c); // 801BC488
  cmps(c,0,(int32_t)c->r[16],0); // 801BC48C
  c->r[31]=R8(c->r[1]+0x00000069u); // 801BC490
  c->r[3]=0u+0x00000000u; // 801BC494
  if (!crb(c,2)) { goto L_801BC4A8; } // 801BC498
  c->r[0]=R32(c->r[15]+0x0000001Cu); // 801BC49C
  cmps(c,0,(int32_t)c->r[0],0); // 801BC4A0
  if (!crb(c,2)) { goto L_801BC4AC; } // 801BC4A4
L_801BC4A8:;
  c->r[3]=0u+0x00000001u; // 801BC4A8
L_801BC4AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BC4AC
  if (crb(c,2)) { goto L_801BC4C8; } // 801BC4B0
  c->r[3]=R32(c->r[18]+0x00000000u); // 801BC4B4
  c->r[4]=c->r[1]+0x00000038u; // 801BC4B8
  c->r[0]=c->r[3]+0x000003F0u; // 801BC4BC
  W32(c->r[1]+0x00000038u,c->r[0]); // 801BC4C0
  goto L_801BC4CC; // 801BC4C4
L_801BC4C8:;
  c->r[4]=c->r[15]+0x0000001Cu; // 801BC4C8
L_801BC4CC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BC4CC
  c->r[3]=c->r[1]+0x00000058u; // 801BC4D0
  c->r[5]=c->r[1]+0x00000078u; // 801BC4D4
  c->r[4]=0u+0x00000000u; // 801BC4D8
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BC4DC
  c->lr=0x801BC4E4u; f_801AC8CC(c); // 801BC4E0
  c->r[3]=c->r[1]+0x00000058u; // 801BC4E4
  c->r[5]=c->r[1]+0x0000007Cu; // 801BC4E8
  c->r[4]=0u+0x00000001u; // 801BC4EC
  c->lr=0x801BC4F4u; f_801AC8CC(c); // 801BC4F0
  c->r[19]=c->r[1]+0x00000080u; // 801BC4F4
  c->r[20]=0u+0x00000000u; // 801BC4F8
L_801BC4FC:;
  c->r[0]=rotl(c->r[20],2)&0x000003FCu; // 801BC4FC
  c->r[7]=c->r[1]+0x000000A0u; // 801BC500
  c->r[10]=c->r[1]+0x00000090u; // 801BC504
  c->r[4]=R32(c->r[19]+c->r[0]); // 801BC508
  c->r[3]=c->r[1]+0x00000058u; // 801BC50C
  c->r[7]=c->r[7]+c->r[0]; // 801BC510
  c->r[10]=c->r[10]+c->r[0]; // 801BC514
  c->r[5]=0u+0x00000000u; // 801BC518
  c->r[6]=0u+0x00000000u; // 801BC51C
  c->r[8]=0u+0x00000000u; // 801BC520
  c->r[9]=0u+0x00000000u; // 801BC524
  c->lr=0x801BC52Cu; f_801AC904(c); // 801BC528
  c->r[20]=c->r[20]+0x00000001u; // 801BC52C
  cmpu(c,0,c->r[20],0x00000004u); // 801BC530
  if (crb(c,0)) { IRQCHK(c); goto L_801BC4FC; } // 801BC534
  cmps(c,0,(int32_t)c->r[16],0); // 801BC538
  c->r[3]=0u+0x00000000u; // 801BC53C
  if (!crb(c,2)) { goto L_801BC550; } // 801BC540
  c->r[0]=R32(c->r[15]+0x00000024u); // 801BC544
  cmps(c,0,(int32_t)c->r[0],0); // 801BC548
  if (!crb(c,2)) { goto L_801BC554; } // 801BC54C
L_801BC550:;
  c->r[3]=0u+0x00000001u; // 801BC550
L_801BC554:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BC554
  if (crb(c,2)) { goto L_801BC570; } // 801BC558
  c->r[3]=R32(c->r[18]+0x00000000u); // 801BC55C
  c->r[4]=c->r[1]+0x00000034u; // 801BC560
  c->r[0]=c->r[3]+0x0000001Cu; // 801BC564
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC568
  goto L_801BC574; // 801BC56C
L_801BC570:;
  c->r[4]=c->r[15]+0x00000024u; // 801BC570
L_801BC574:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BC574
  cmps(c,0,(int32_t)c->r[16],0); // 801BC578
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BC57C
  if (!crb(c,2)) { goto L_801BC590; } // 801BC580
  c->r[0]=R32(c->r[15]+0x00000018u); // 801BC584
  c->r[0]=cntlz(c->r[0]); // 801BC588
  c->r[16]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BC58C
L_801BC590:;
  cmps(c,0,(int32_t)c->r[16],0); // 801BC590
  if (crb(c,2)) { goto L_801BC5C4; } // 801BC594
  c->r[3]=R32(c->r[18]+0x00000000u); // 801BC598
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801BC59C
  cmps(c,0,(int32_t)c->r[0],0); // 801BC5A0
  if (crb(c,2)) { goto L_801BC5B0; } // 801BC5A4
  c->r[3]=c->r[3]+c->r[0]; // 801BC5A8
  goto L_801BC5B4; // 801BC5AC
L_801BC5B0:;
  c->r[3]=0u+0x00000000u; // 801BC5B0
L_801BC5B4:;
  c->r[0]=c->r[3]+0x000000A0u; // 801BC5B4
  c->r[3]=c->r[1]+0x00000030u; // 801BC5B8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801BC5BC
  goto L_801BC5C8; // 801BC5C0
L_801BC5C4:;
  c->r[3]=c->r[15]+0x00000018u; // 801BC5C4
L_801BC5C8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BC5C8
  c->r[18]=c->r[1]+0x00000064u; // 801BC5CC
  c->r[19]=c->r[1]+0x00000060u; // 801BC5D0
  c->r[20]=c->r[1]+0x000000C8u; // 801BC5D4
  W32(c->r[1]+0x00000050u,c->r[0]); // 801BC5D8
  c->r[21]=0u+0x00000000u; // 801BC5DC
  c->r[16]=0u+0x00000001u; // 801BC5E0
  c->r[15]=0u+0x00000000u; // 801BC5E4
L_801BC5E8:;
  c->r[22]=c->r[21]+0x00000001u; // 801BC5E8
  c->r[3]=c->r[1]+0x00000054u; // 801BC5EC
  c->r[4]=c->r[22]|c->r[22]; // 801BC5F0
  c->r[5]=c->r[1]+0x0000004Cu; // 801BC5F4
  c->r[6]=c->r[1]+0x00000008u; // 801BC5F8
  c->lr=0x801BC600u; f_801ABCBC(c); // 801BC5FC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 801BC600
  cmps(c,0,(int32_t)c->r[0],3); // 801BC604
  if (!crb(c,2)) { goto L_801BC628; } // 801BC608
  W8(c->r[18]+0x00000000u,c->r[16]); // 801BC60C
  c->r[4]=c->r[22]|c->r[22]; // 801BC610
  c->r[5]=c->r[20]|c->r[20]; // 801BC614
  c->r[6]=c->r[19]|c->r[19]; // 801BC618
  c->r[3]=c->r[1]+0x00000050u; // 801BC61C
  c->lr=0x801BC624u; f_801AC514(c); // 801BC620
  goto L_801BC62C; // 801BC624
L_801BC628:;
  W8(c->r[18]+0x00000000u,c->r[15]); // 801BC628
L_801BC62C:;
  c->r[21]=c->r[21]+0x00000001u; // 801BC62C
  c->r[19]=c->r[19]+0x00000001u; // 801BC630
  cmpu(c,0,c->r[21],0x00000003u); // 801BC634
  c->r[20]=c->r[20]+0x00000030u; // 801BC638
  c->r[18]=c->r[18]+0x00000001u; // 801BC63C
  if (crb(c,0)) { IRQCHK(c); goto L_801BC5E8; } // 801BC640
  c->r[0]=R32(c->r[26]+0x00000000u); // 801BC644
  c->r[3]=c->r[1]+0x0000002Cu; // 801BC648
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BC64C
  c->lr=0x801BC654u; f_801BAA08(c); // 801BC650
  c->r[0]=rotl(c->r[17],0)&0x00000004u; cr0(c,c->r[0]); // 801BC654
  if (crb(c,2)) { goto L_801BC66C; } // 801BC658
  c->r[3]=0u+0x00000001u; // 801BC65C
  c->lr=0x801BC664u; f_801B7D40(c); // 801BC660
  c->r[3]=0u+0x00000010u; // 801BC664
  c->lr=0x801BC66Cu; f_801BB67C(c); // 801BC668
L_801BC66C:;
  c->r[3]=c->r[26]|c->r[26]; // 801BC66C
  c->lr=0x801BC674u; f_801AA90C(c); // 801BC670
  W32(c->r[1]+0x00000048u,c->r[3]); // 801BC674
  c->r[18]=c->r[1]+0x000000A0u; // 801BC678
  {uint32_t ea=c->r[2]+0xFFFF9C10u; c->f[31]=RF64(ea);} // 801BC67C
  c->r[19]=c->r[1]+0x00000090u; // 801BC680
  c->r[30]=R32(c->r[3]+0x00000020u); // 801BC684
  c->r[20]=c->r[1]+0x00000078u; // 801BC688
  {uint32_t ea=c->r[2]+0xFFFF9BF8u; c->f[29]=c->ps1[29]=RF32(ea);} // 801BC68C
  c->r[21]=c->r[1]+0x00000080u; // 801BC690
  {uint32_t ea=c->r[2]+0xFFFF9C08u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BC694
  c->r[17]=c->r[1]+0x00000060u; // 801BC698
  c->r[16]=c->r[1]+0x00000064u; // 801BC69C
  c->r[29]=0u+0x00000000u; // 801BC6A0
  c->r[22]=0u+0x00000010u; // 801BC6A4
  c->r[23]=0u+0xCC010000u; // 801BC6A8
  c->r[24]=0u+0x00000000u; // 801BC6AC
  c->r[25]=0u+0x00000002u; // 801BC6B0
  goto L_801BC9DC; // 801BC6B4
L_801BC6B8:;
  c->r[3]=c->r[1]+0x00000074u; // 801BC6B8
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 801BC6BC
  c->lr=0x801BC6C4u; f_801ABD70(c); // 801BC6C0
  c->f[24]=c->f[1]; // 801BC6C4
  c->f[2]=c->f[26]; // 801BC6C8
  c->f[23]=c->ps1[23]=S(c->f[29]-c->f[1]); // 801BC6CC
  c->lr=0x801BC6D4u; f_8011AC3C(c); // 801BC6D0
  c->f[28]=c->ps1[28]=S(c->f[1]); // 801BC6D4
  c->f[1]=c->f[24]; // 801BC6D8
  c->f[2]=c->f[25]; // 801BC6DC
  c->lr=0x801BC6E4u; f_8011AC3C(c); // 801BC6E0
  c->f[27]=c->ps1[27]=S(c->f[1]); // 801BC6E4
  {uint32_t ea=c->r[2]+0xFFFF9C00u; c->f[2]=RF64(ea);} // 801BC6E8
  c->f[1]=c->f[24]; // 801BC6EC
  c->lr=0x801BC6F4u; f_8011AC3C(c); // 801BC6F0
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 801BC6F4
  c->f[3]=c->ps1[3]=S(c->f[1]); // 801BC6F8
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[24]); // 801BC6FC
  c->r[4]=c->r[1]+0x00000028u; // 801BC700
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 801BC704
  c->r[3]=0u+0x00000002u; // 801BC708
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801BC70C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801BC710
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 801BC714
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[1]);} // 801BC718
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BC71C
  c->r[0]=R32(c->r[1]+0x0000016Cu); // 801BC720
  W8(c->r[1]+0x00000068u,c->r[0]); // 801BC724
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[0]);} // 801BC728
  c->r[0]=R32(c->r[1]+0x00000174u); // 801BC72C
  W8(c->r[1]+0x00000069u,c->r[0]); // 801BC730
  c->r[0]=R32(c->r[1]+0x00000068u); // 801BC734
  W32(c->r[1]+0x00000028u,c->r[0]); // 801BC738
  c->lr=0x801BC740u; f_80107AA8(c); // 801BC73C
  c->r[15]=0u+0x00000000u; // 801BC740
L_801BC744:;
  c->r[3]=rotl(c->r[15],0)&0x000000FFu; // 801BC744
  c->r[0]=R8(c->r[16]+c->r[3]); // 801BC748
  cmps(c,0,(int32_t)c->r[0],0); // 801BC74C
  if (crb(c,2)) { goto L_801BC7B0; } // 801BC750
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801BC754
  c->r[6]=c->r[1]+0x000000C8u; // 801BC758
  c->r[0]=R8(c->r[17]+c->r[3]); // 801BC75C
  c->r[3]=c->r[3]+0x00000001u; // 801BC760
  c->r[4]=c->r[1]+0x000000B0u; // 801BC764
  {uint32_t ea=c->r[6]+c->r[5]; c->f[0]=c->ps1[0]=RF32(ea); c->r[6]=ea;} // 801BC768
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801BC76C
  c->f[5]=c->ps1[5]=S(c->f[24]*c->f[0]); // 801BC770
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC774
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC778
  c->f[4]=c->ps1[4]=S(c->f[24]*c->f[2]); // 801BC77C
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC780
  c->f[2]=c->ps1[2]=S(c->f[24]*c->f[1]); // 801BC784
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 801BC788
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BC78C
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC790
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[5]);} // 801BC794
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[4]);} // 801BC798
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[3]);} // 801BC79C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 801BC7A0
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 801BC7A4
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 801BC7A8
  c->lr=0x801BC7B0u; f_8010743C(c); // 801BC7AC
L_801BC7B0:;
  c->r[15]=c->r[15]+0x00000001u; // 801BC7B0
  cmpu(c,0,c->r[15],0x00000003u); // 801BC7B4
  if (crb(c,0)) { IRQCHK(c); goto L_801BC744; } // 801BC7B8
  c->r[3]=R8(c->r[1]+0x00000070u); // 801BC7BC
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[28]); // 801BC7C0
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 801BC7C4
  c->r[7]=0u+0x00000000u; // 801BC7C8
  W32(c->r[1]+0x00000164u,c->r[3]); // 801BC7CC
  c->r[3]=R8(c->r[1]+0x00000071u); // 801BC7D0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 801BC7D4
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 801BC7D8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801BC7DC
  c->r[0]=R8(c->r[1]+0x0000006Du); // 801BC7E0
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 801BC7E4
  W32(c->r[1]+0x00000164u,c->r[3]); // 801BC7E8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 801BC7EC
  c->r[3]=R8(c->r[1]+0x00000072u); // 801BC7F0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 801BC7F4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[23]); // 801BC7F8
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 801BC7FC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801BC800
  W32(c->r[1]+0x00000164u,c->r[3]); // 801BC804
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[24]); // 801BC808
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 801BC80C
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 801BC810
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[23]); // 801BC814
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 801BC818
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 801BC81C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 801BC820
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 801BC824
  c->r[3]=R8(c->r[1]+0x00000073u); // 801BC828
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801BC82C
  c->f[7]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 801BC830
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 801BC834
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[24]); // 801BC838
  c->r[0]=R8(c->r[1]+0x0000006Fu); // 801BC83C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 801BC840
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 801BC844
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[23]); // 801BC848
  W32(c->r[1]+0x00000164u,c->r[3]); // 801BC84C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[24]); // 801BC850
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 801BC854
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 801BC858
  {uint32_t ea=c->r[1]+0x00000160u; c->f[2]=RF64(ea);} // 801BC85C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801BC860
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[7]);} // 801BC864
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 801BC868
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 801BC86C
  c->r[0]=R32(c->r[1]+0x00000174u); // 801BC870
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 801BC874
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801BC878
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[5]);} // 801BC87C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 801BC880
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BC884
  c->r[3]=R32(c->r[1]+0x0000016Cu); // 801BC888
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801BC88C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BC890
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[1]);} // 801BC894
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[0]);} // 801BC898
  c->r[4]=R32(c->r[1]+0x0000017Cu); // 801BC89C
  c->r[5]=R32(c->r[1]+0x00000184u); // 801BC8A0
  c->ctr=c->r[25]; // 801BC8A4
L_801BC8A8:;
  c->r[6]=rotl(c->r[7],3)&0x000003F8u; // 801BC8A8
  c->r[8]=rotl(c->r[7],1)&0x000000FEu; // 801BC8AC
  c->r[9]=R32(c->r[18]+c->r[6]); // 801BC8B0
  cmps(c,0,(int32_t)c->r[9],0); // 801BC8B4
  if (crb(c,2)) { goto L_801BC8D0; } // 801BC8B8
  c->r[9]=rotl(c->r[8],2)&0x000003FCu; // 801BC8BC
  c->r[9]=c->r[18]+c->r[9]; // 801BC8C0
  c->r[9]=R32(c->r[9]+0x00000004u); // 801BC8C4
  cmps(c,0,(int32_t)c->r[9],0); // 801BC8C8
  if (!crb(c,2)) { goto L_801BC9AC; } // 801BC8CC
L_801BC8D0:;
  c->r[9]=R32(c->r[19]+c->r[6]); // 801BC8D0
  cmps(c,0,(int32_t)c->r[9],0); // 801BC8D4
  if (!crb(c,2)) { goto L_801BC954; } // 801BC8D8
  c->r[9]=rotl(c->r[7],2)&0x000003FCu; // 801BC8DC
  c->r[11]=c->r[1]+0x00000078u; // 801BC8E0
  {uint32_t ea=c->r[11]+c->r[9]; c->r[9]=R8(ea); c->r[11]=ea;} // 801BC8E4
  W32(c->r[1]+0x00000164u,c->r[9]); // 801BC8E8
  c->r[10]=R8(c->r[11]+0x00000001u); // 801BC8EC
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 801BC8F0
  c->r[9]=R8(c->r[11]+0x00000002u); // 801BC8F4
  W32(c->r[1]+0x0000015Cu,c->r[10]); // 801BC8F8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801BC8FC
  W32(c->r[1]+0x00000164u,c->r[9]); // 801BC900
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=RF64(ea);} // 801BC904
  c->f[2]=c->ps1[2]=S(c->f[27]*c->f[2]); // 801BC908
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 801BC90C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801BC910
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801BC914
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801BC918
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[1]); // 801BC91C
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 801BC920
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[2]);} // 801BC924
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801BC928
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BC92C
  c->r[11]=R32(c->r[1]+0x00000184u); // 801BC930
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[1]);} // 801BC934
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[0]);} // 801BC938
  c->r[10]=R32(c->r[1]+0x0000017Cu); // 801BC93C
  c->r[9]=R32(c->r[1]+0x00000174u); // 801BC940
  W8(c->r[1]+0x00000044u,c->r[11]); // 801BC944
  W8(c->r[1]+0x00000045u,c->r[10]); // 801BC948
  W8(c->r[1]+0x00000046u,c->r[9]); // 801BC94C
  goto L_801BC960; // 801BC950
L_801BC954:;
  W8(c->r[1]+0x00000044u,c->r[0]); // 801BC954
  W8(c->r[1]+0x00000045u,c->r[3]); // 801BC958
  W8(c->r[1]+0x00000046u,c->r[4]); // 801BC95C
L_801BC960:;
  c->r[8]=rotl(c->r[8],2)&0x000003FCu; // 801BC960
  c->r[8]=c->r[19]+c->r[8]; // 801BC964
  c->r[8]=R32(c->r[8]+0x00000004u); // 801BC968
  cmps(c,0,(int32_t)c->r[8],0); // 801BC96C
  if (!crb(c,2)) { goto L_801BC984; } // 801BC970
  c->r[8]=rotl(c->r[7],2)&0x000003FCu; // 801BC974
  c->r[8]=c->r[20]+c->r[8]; // 801BC978
  c->r[8]=R8(c->r[8]+0x00000003u); // 801BC97C
  goto L_801BC988; // 801BC980
L_801BC984:;
  c->r[8]=c->r[5]|c->r[5]; // 801BC984
L_801BC988:;
  W8(c->r[23]+0xFFFF8000u,c->r[22]); // 801BC988
  c->r[6]=R32(c->r[21]+c->r[6]); // 801BC98C
  W8(c->r[1]+0x00000047u,c->r[8]); // 801BC990
  c->r[6]=rotl(c->r[6],0)&0x00000001u; // 801BC994
  W16(c->r[23]+0xFFFF8000u,c->r[24]); // 801BC998
  c->r[6]=c->r[6]+0x0000100Cu; // 801BC99C
  c->r[8]=R32(c->r[1]+0x00000044u); // 801BC9A0
  W16(c->r[23]+0xFFFF8000u,c->r[6]); // 801BC9A4
  W32(c->r[23]+0xFFFF8000u,c->r[8]); // 801BC9A8
L_801BC9AC:;
  c->r[7]=c->r[7]+0x00000001u; // 801BC9AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC8A8; } // 801BC9B0
  c->r[3]=c->r[1]+0x00000048u; // 801BC9B4
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 801BC9B8
  c->lr=0x801BC9C0u; f_801AD3D4(c); // 801BC9BC
  c->r[0]=R32(c->r[26]+0x00000000u); // 801BC9C0
  c->r[4]=c->r[27]|c->r[27]; // 801BC9C4
  c->r[5]=c->r[28]|c->r[28]; // 801BC9C8
  c->r[3]=c->r[1]+0x00000024u; // 801BC9CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC9D0
  c->lr=0x801BC9D8u; f_801BABAC(c); // 801BC9D4
  c->r[29]=c->r[29]+0x00000001u; // 801BC9D8
L_801BC9DC:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 801BC9DC
  cmpu(c,0,c->r[0],c->r[30]); // 801BC9E0
  if (crb(c,0)) { IRQCHK(c); goto L_801BC6B8; } // 801BC9E4
  goto L_801BCAF4; // 801BC9E8
L_801BC9EC:;
  c->r[0]=rotl(c->r[17],0)&0x00000002u; cr0(c,c->r[0]); // 801BC9EC
  if (!crb(c,2)) { goto L_801BCAC4; } // 801BC9F0
  c->r[0]=R32(c->r[26]+0x00000000u); // 801BC9F4
  c->r[3]=c->r[1]+0x00000020u; // 801BC9F8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801BC9FC
  c->lr=0x801BCA04u; f_801BAA08(c); // 801BCA00
  cmps(c,0,(int32_t)c->r[15],0); // 801BCA04
  if (crb(c,2)) { goto L_801BCAC4; } // 801BCA08
  c->r[5]=R32(c->r[15]+0x0000002Cu); // 801BCA0C
  cmps(c,0,(int32_t)c->r[5],0); // 801BCA10
  if (crb(c,2)) { goto L_801BCA34; } // 801BCA14
  c->r[4]=R32(c->r[26]+0x00000000u); // 801BCA18
  c->r[3]=c->r[1]+0x0000001Cu; // 801BCA1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000048u); // 801BCA20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BCA24
  c->r[0]=R32(c->r[5]+c->r[0]); // 801BCA28
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BCA2C
  c->lr=0x801BCA34u; f_801AD0F0(c); // 801BCA30
L_801BCA34:;
  c->r[4]=R32(c->r[15]+0x00000030u); // 801BCA34
  cmps(c,0,(int32_t)c->r[4],0); // 801BCA38
  if (crb(c,2)) { goto L_801BCA64; } // 801BCA3C
  c->r[3]=R32(c->r[26]+0x00000000u); // 801BCA40
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Au); // 801BCA44
  cmps(c,0,(int32_t)c->r[0],0); // 801BCA48
  if (crb(c,0)) { goto L_801BCA64; } // 801BCA4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BCA50
  c->r[3]=c->r[1]+0x00000018u; // 801BCA54
  c->r[0]=R32(c->r[4]+c->r[0]); // 801BCA58
  W32(c->r[1]+0x00000018u,c->r[0]); // 801BCA5C
  c->lr=0x801BCA64u; f_801AD1C0(c); // 801BCA60
L_801BCA64:;
  c->r[4]=R32(c->r[15]+0x00000034u); // 801BCA64
  cmps(c,0,(int32_t)c->r[4],0); // 801BCA68
  if (crb(c,2)) { goto L_801BCAC4; } // 801BCA6C
  c->r[3]=R32(c->r[26]+0x00000000u); // 801BCA70
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Cu); // 801BCA74
  cmps(c,0,(int32_t)c->r[0],0); // 801BCA78
  if (crb(c,0)) { goto L_801BCA98; } // 801BCA7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BCA80
  c->r[3]=c->r[1]+0x00000014u; // 801BCA84
  c->r[0]=R32(c->r[4]+c->r[0]); // 801BCA88
  c->r[4]=0u+0x0000000Bu; // 801BCA8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BCA90
  c->lr=0x801BCA98u; f_801AD2B8(c); // 801BCA94
L_801BCA98:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 801BCA98
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Eu); // 801BCA9C
  cmps(c,0,(int32_t)c->r[0],0); // 801BCAA0
  if (crb(c,0)) { goto L_801BCAC4; } // 801BCAA4
  c->r[5]=R32(c->r[15]+0x00000034u); // 801BCAA8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BCAAC
  c->r[3]=c->r[1]+0x00000010u; // 801BCAB0
  c->r[4]=0u+0x0000000Cu; // 801BCAB4
  c->r[0]=R32(c->r[5]+c->r[0]); // 801BCAB8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801BCABC
  c->lr=0x801BCAC4u; f_801AD2B8(c); // 801BCAC0
L_801BCAC4:;
  c->r[0]=rotl(c->r[17],0)&0x00000004u; cr0(c,c->r[0]); // 801BCAC4
  if (crb(c,2)) { goto L_801BCADC; } // 801BCAC8
  c->r[3]=0u+0x00000001u; // 801BCACC
  c->lr=0x801BCAD4u; f_801B7D40(c); // 801BCAD0
  c->r[3]=0u+0x00000010u; // 801BCAD4
  c->lr=0x801BCADCu; f_801BB67C(c); // 801BCAD8
L_801BCADC:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 801BCADC
  c->r[4]=c->r[27]|c->r[27]; // 801BCAE0
  c->r[5]=c->r[28]|c->r[28]; // 801BCAE4
  c->r[3]=c->r[1]+0x0000000Cu; // 801BCAE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BCAEC
  c->lr=0x801BCAF4u; f_801BABAC(c); // 801BCAF0
L_801BCAF4:;
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,31,ea,0,0);} // 801BCAF4
  {uint32_t ea=c->r[1]+0x00000250u; c->f[31]=RF64(ea);} // 801BCAF8
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,30,ea,0,0);} // 801BCAFC
  {uint32_t ea=c->r[1]+0x00000240u; c->f[30]=RF64(ea);} // 801BCB00
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,29,ea,0,0);} // 801BCB04
  {uint32_t ea=c->r[1]+0x00000230u; c->f[29]=RF64(ea);} // 801BCB08
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,28,ea,0,0);} // 801BCB0C
  {uint32_t ea=c->r[1]+0x00000220u; c->f[28]=RF64(ea);} // 801BCB10
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,27,ea,0,0);} // 801BCB14
  {uint32_t ea=c->r[1]+0x00000210u; c->f[27]=RF64(ea);} // 801BCB18
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,26,ea,0,0);} // 801BCB1C
  {uint32_t ea=c->r[1]+0x00000200u; c->f[26]=RF64(ea);} // 801BCB20
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,25,ea,0,0);} // 801BCB24
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[25]=RF64(ea);} // 801BCB28
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,24,ea,0,0);} // 801BCB2C
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[24]=RF64(ea);} // 801BCB30
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,23,ea,0,0);} // 801BCB34
  c->r[11]=c->r[1]+0x000001D0u; // 801BCB38
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[23]=RF64(ea);} // 801BCB3C
  c->lr=0x801BCB44u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BCB40
  c->r[0]=R32(c->r[1]+0x00000264u); // 801BCB44
  c->lr=c->r[0]; // 801BCB48
  c->r[1]=c->r[1]+0x00000260u; // 801BCB4C
  return; // 801BCB50
}

// GetModelLocalAxisY2__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_801BCB54(Ctx* __restrict c) {
  trace_call(0x801BCB54u);
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,1,0);} // 801BCB54
  {uint32_t ea=c->r[5]+0x00000014u; psq_load(c,3,ea,0,0);} // 801BCB58
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,0);} // 801BCB5C
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 801BCB60
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 801BCB64
  {uint32_t ea=c->r[5]+0x00000024u; psq_load(c,5,ea,0,0);} // 801BCB68
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,4,ea,1,0);} // 801BCB6C
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801BCB70
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[12]=t0; c->ps1[12]=t1;} // 801BCB74
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 801BCB78
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[10]=t0; c->ps1[10]=t1;} // 801BCB7C
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 801BCB80
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[11]=t0; c->ps1[11]=t1;} // 801BCB84
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[12])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 801BCB88
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[10])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 801BCB8C
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[11])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 801BCB90
  {double t0=S(c->f[0]*c->f[12]), t1=S(c->ps1[0]*c->ps1[12]); c->f[7]=t0; c->ps1[7]=t1;} // 801BCB94
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 801BCB98
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 801BCB9C
  {double t0=S(std::fma(c->f[2],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801BCBA0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 801BCBA4
  {double t0=S(std::fma(c->f[4],c->f[10],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[10],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801BCBA8
  fcmp(c,0,c->f[7],c->f[6]); // 801BCBAC
  if (!crb(c,2)) { goto L_801BCBBC; } // 801BCBB0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,6,ea,0,0);} // 801BCBB4
  return; // 801BCBB8
L_801BCBBC:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 801BCBBC
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 801BCBC0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 801BCBC4
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,1,0);} // 801BCBC8
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801BCBCC
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 801BCBD0
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 801BCBD4
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[6]=t0; c->ps1[6]=t1;} // 801BCBD8
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 801BCBDC
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 801BCBE0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 801BCBE4
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 801BCBE8
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 801BCBEC
  {double t0=S(c->f[4]*c->f[11]), t1=S(c->ps1[4]*c->f[11]); c->f[0]=t0; c->ps1[0]=t1;} // 801BCBF0
  {double t0=S(std::fma(c->f[5],c->ps1[11],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[11],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801BCBF4
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[0])), t1=S(std::fma(c->ps1[6],c->f[9],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801BCBF8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801BCBFC
  return; // 801BCC00
}

// GetModelLocalAxisY3__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_801BCC04(Ctx* __restrict c) {
  trace_call(0x801BCC04u);
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,1,0);} // 801BCC04
  {uint32_t ea=c->r[5]+0x00000014u; psq_load(c,3,ea,0,0);} // 801BCC08
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,0);} // 801BCC0C
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 801BCC10
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 801BCC14
  {uint32_t ea=c->r[5]+0x00000024u; psq_load(c,5,ea,0,0);} // 801BCC18
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,4,ea,1,0);} // 801BCC1C
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801BCC20
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[12]=t0; c->ps1[12]=t1;} // 801BCC24
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 801BCC28
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[10]=t0; c->ps1[10]=t1;} // 801BCC2C
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 801BCC30
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[11]=t0; c->ps1[11]=t1;} // 801BCC34
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[12])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 801BCC38
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[10])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 801BCC3C
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[11])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 801BCC40
  {double t0=S(c->f[0]*c->f[12]), t1=S(c->ps1[0]*c->ps1[12]); c->f[7]=t0; c->ps1[7]=t1;} // 801BCC44
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 801BCC48
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 801BCC4C
  {double t0=S(std::fma(c->f[2],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801BCC50
  {double t0=S(std::fma(c->f[4],c->f[10],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[10],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801BCC54
  fcmp(c,0,c->f[7],c->f[6]); // 801BCC58
  if (!crb(c,2)) { goto L_801BCC6C; } // 801BCC5C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,6,ea,0,0);} // 801BCC60
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 801BCC64
  return; // 801BCC68
L_801BCC6C:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 801BCC6C
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 801BCC70
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 801BCC74
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,1,0);} // 801BCC78
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801BCC7C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 801BCC80
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 801BCC84
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[6]=t0; c->ps1[6]=t1;} // 801BCC88
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,2,ea,1,0);} // 801BCC8C
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 801BCC90
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 801BCC94
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 801BCC98
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 801BCC9C
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 801BCCA0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,1,ea,0,0);} // 801BCCA4
  {double t0=S(c->f[4]*c->f[11]), t1=S(c->ps1[4]*c->f[11]); c->f[0]=t0; c->ps1[0]=t1;} // 801BCCA8
  {double t0=S(c->f[1]*c->f[9]), t1=S(c->ps1[1]*c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 801BCCAC
  {double t0=S(std::fma(c->f[5],c->ps1[11],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[11],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801BCCB0
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801BCCB4
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[0])), t1=S(std::fma(c->ps1[6],c->f[9],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801BCCB8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[9],c->f[1])); // 801BCCBC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801BCCC0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 801BCCC4
  return; // 801BCCC8
}

// Calc_BILLBOARD_STD__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_801BCCCC(Ctx* __restrict c) {
  trace_call(0x801BCCCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCCCC
  c->r[0]=c->lr; // 801BCCD0
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BCCD4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801BCCD8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801BCCDC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801BCCE0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801BCCE4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801BCCE8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801BCCEC
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCCF0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BCCF4
  c->r[31]=c->r[8]|c->r[8]; // 801BCCF8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BCCFC
  c->r[30]=c->r[5]|c->r[5]; // 801BCD00
  W32(c->r[1]+0x00000024u,c->r[29]); // 801BCD04
  c->r[29]=c->r[4]|c->r[4]; // 801BCD08
  W32(c->r[1]+0x00000020u,c->r[28]); // 801BCD0C
  c->r[28]=c->r[3]|c->r[3]; // 801BCD10
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCD14
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCD18
  c->r[3]=c->r[1]+0x00000008u; // 801BCD1C
  c->r[4]=c->r[3]|c->r[3]; // 801BCD20
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801BCD24
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801BCD28
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801BCD2C
  c->lr=0x801BCD34u; f_800ECFD0(c); // 801BCD30
  cmps(c,0,(int32_t)c->r[30],0); // 801BCD34
  if (crb(c,2)) { goto L_801BCDB8; } // 801BCD38
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 801BCD3C
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCD40
  c->r[3]=c->r[29]+c->r[0]; // 801BCD44
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCD48
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCD4C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BCD50
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BCD54
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BCD58
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BCD5C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BCD60
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 801BCD64
  fcmp(c,0,c->f[30],c->f[0]); // 801BCD68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BCD6C
  if (!crb(c,2)) { goto L_801BCD78; } // 801BCD70
  goto L_801BCD84; // 801BCD74
L_801BCD78:;
  c->f[1]=c->f[30]; // 801BCD78
  c->lr=0x801BCD80u; f_801DB488(c); // 801BCD7C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 801BCD80
L_801BCD84:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 801BCD84
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCD88
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801BCD8C
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 801BCD90
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 801BCD94
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801BCD98
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 801BCD9C
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,0,ea,0,0);} // 801BCDA0
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 801BCDA4
  {uint32_t ea=c->r[28]+0x00000020u; psq_store(c,1,ea,0,0);} // 801BCDA8
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801BCDAC
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,0,ea,0,0);} // 801BCDB0
  goto L_801BCEC0; // 801BCDB4
L_801BCDB8:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 801BCDB8
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BCDBC
  c->r[3]=c->r[29]+c->r[31]; // 801BCDC0
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCDC4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCDC8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCDCC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BCDD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BCDD4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BCDD8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BCDDC
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 801BCDE0
  fcmp(c,0,c->f[31],c->f[30]); // 801BCDE4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BCDE8
  if (!crb(c,2)) { goto L_801BCDF4; } // 801BCDEC
  goto L_801BCE00; // 801BCDF0
L_801BCDF4:;
  c->f[1]=c->f[31]; // 801BCDF4
  c->lr=0x801BCDFCu; f_801DB488(c); // 801BCDF8
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 801BCDFC
L_801BCE00:;
  c->r[3]=c->r[29]+c->r[31]; // 801BCE00
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BCE04
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCE08
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCE0C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BCE10
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCE14
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BCE18
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BCE1C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BCE20
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 801BCE24
  fcmp(c,0,c->f[29],c->f[31]); // 801BCE28
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BCE2C
  if (!crb(c,2)) { goto L_801BCE38; } // 801BCE30
  goto L_801BCE44; // 801BCE34
L_801BCE38:;
  c->f[1]=c->f[29]; // 801BCE38
  c->lr=0x801BCE40u; f_801DB488(c); // 801BCE3C
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 801BCE40
L_801BCE44:;
  c->r[3]=c->r[29]+c->r[31]; // 801BCE44
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCE48
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCE4C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCE50
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BCE54
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BCE58
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BCE5C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BCE60
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BCE64
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 801BCE68
  fcmp(c,0,c->f[29],c->f[0]); // 801BCE6C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BCE70
  if (!crb(c,2)) { goto L_801BCE7C; } // 801BCE74
  goto L_801BCE88; // 801BCE78
L_801BCE7C:;
  c->f[1]=c->f[29]; // 801BCE7C
  c->lr=0x801BCE84u; f_801DB488(c); // 801BCE80
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 801BCE84
L_801BCE88:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 801BCE88
  {double t0=S(c->f[30]), t1=S(c->f[31]); c->f[4]=t0; c->ps1[4]=t1;} // 801BCE8C
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCE90
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 801BCE94
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 801BCE98
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 801BCE9C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 801BCEA0
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 801BCEA4
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 801BCEA8
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 801BCEAC
  {double t0=S(c->f[0]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 801BCEB0
  {uint32_t ea=c->r[28]+0x00000020u; psq_store(c,1,ea,0,0);} // 801BCEB4
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 801BCEB8
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,2,ea,0,0);} // 801BCEBC
L_801BCEC0:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801BCEC0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801BCEC4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801BCEC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801BCECC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801BCED0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801BCED4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BCED8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BCEDC
  c->r[29]=R32(c->r[1]+0x00000024u); // 801BCEE0
  c->r[0]=R32(c->r[1]+0x00000064u); // 801BCEE4
  c->r[28]=R32(c->r[1]+0x00000020u); // 801BCEE8
  c->lr=c->r[0]; // 801BCEEC
  c->r[1]=c->r[1]+0x00000060u; // 801BCEF0
  return; // 801BCEF4
}

// Calc_BILLBOARD_PERSP_STD__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_801BCEF8(Ctx* __restrict c) {
  trace_call(0x801BCEF8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCEF8
  c->r[0]=c->lr; // 801BCEFC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801BCF00
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801BCF04
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801BCF08
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801BCF0C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801BCF10
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801BCF14
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801BCF18
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801BCF1C
  c->r[31]=c->r[8]|c->r[8]; // 801BCF20
  W32(c->r[1]+0x00000038u,c->r[30]); // 801BCF24
  c->r[30]=c->r[5]|c->r[5]; // 801BCF28
  W32(c->r[1]+0x00000034u,c->r[29]); // 801BCF2C
  c->r[29]=c->r[4]|c->r[4]; // 801BCF30
  W32(c->r[1]+0x00000030u,c->r[28]); // 801BCF34
  c->r[28]=c->r[3]|c->r[3]; // 801BCF38
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCF3C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCF40
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCF44
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801BCF48
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801BCF4C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801BCF50
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCF54
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCF58
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCF5C
  c->f[2]=-c->f[2]; // 801BCF60
  c->f[1]=-c->f[1]; // 801BCF64
  c->r[3]=c->r[1]+0x00000008u; // 801BCF68
  c->f[0]=-c->f[0]; // 801BCF6C
  c->r[4]=c->r[3]|c->r[3]; // 801BCF70
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801BCF74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801BCF78
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801BCF7C
  c->lr=0x801BCF84u; f_800ECFD0(c); // 801BCF80
  c->r[3]=c->r[1]+0x00000014u; // 801BCF84
  c->r[4]=c->r[1]+0x00000008u; // 801BCF88
  c->r[5]=c->r[1]+0x00000020u; // 801BCF8C
  c->lr=0x801BCF94u; f_800ED078(c); // 801BCF90
  c->r[3]=c->r[1]+0x00000020u; // 801BCF94
  c->r[4]=c->r[3]|c->r[3]; // 801BCF98
  c->lr=0x801BCFA0u; f_800ECFD0(c); // 801BCF9C
  c->r[3]=c->r[1]+0x00000008u; // 801BCFA0
  c->r[4]=c->r[1]+0x00000020u; // 801BCFA4
  c->r[5]=c->r[1]+0x00000014u; // 801BCFA8
  c->lr=0x801BCFB0u; f_800ED078(c); // 801BCFAC
  cmps(c,0,(int32_t)c->r[30],0); // 801BCFB0
  if (crb(c,2)) { goto L_801BD05C; } // 801BCFB4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 801BCFB8
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCFBC
  c->r[3]=c->r[29]+c->r[0]; // 801BCFC0
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCFC4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCFC8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BCFCC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BCFD0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BCFD4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BCFD8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BCFDC
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 801BCFE0
  fcmp(c,0,c->f[30],c->f[0]); // 801BCFE4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BCFE8
  if (!crb(c,2)) { goto L_801BCFF4; } // 801BCFEC
  goto L_801BD000; // 801BCFF0
L_801BCFF4:;
  c->f[1]=c->f[30]; // 801BCFF4
  c->lr=0x801BCFFCu; f_801DB488(c); // 801BCFF8
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 801BCFFC
L_801BD000:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 801BD000
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801BD004
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD008
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD00C
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD010
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD014
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 801BD018
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 801BD01C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 801BD020
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD024
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 801BD028
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD02C
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 801BD030
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD034
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BD038
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 801BD03C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD040
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BD044
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 801BD048
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD04C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BD050
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 801BD054
  goto L_801BD184; // 801BD058
L_801BD05C:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 801BD05C
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BD060
  c->r[3]=c->r[29]+c->r[31]; // 801BD064
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD068
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD06C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD070
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD074
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BD078
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD07C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BD080
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 801BD084
  fcmp(c,0,c->f[31],c->f[30]); // 801BD088
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD08C
  if (!crb(c,2)) { goto L_801BD098; } // 801BD090
  goto L_801BD0A4; // 801BD094
L_801BD098:;
  c->f[1]=c->f[31]; // 801BD098
  c->lr=0x801BD0A0u; f_801DB488(c); // 801BD09C
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 801BD0A0
L_801BD0A4:;
  c->r[3]=c->r[29]+c->r[31]; // 801BD0A4
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BD0A8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD0AC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD0B0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD0B4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD0B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BD0BC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD0C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BD0C4
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 801BD0C8
  fcmp(c,0,c->f[29],c->f[31]); // 801BD0CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD0D0
  if (!crb(c,2)) { goto L_801BD0DC; } // 801BD0D4
  goto L_801BD0E8; // 801BD0D8
L_801BD0DC:;
  c->f[1]=c->f[29]; // 801BD0DC
  c->lr=0x801BD0E4u; f_801DB488(c); // 801BD0E0
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 801BD0E4
L_801BD0E8:;
  c->r[3]=c->r[29]+c->r[31]; // 801BD0E8
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD0EC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD0F0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD0F4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD0F8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD0FC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD100
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BD104
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BD108
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 801BD10C
  fcmp(c,0,c->f[29],c->f[0]); // 801BD110
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD114
  if (!crb(c,2)) { goto L_801BD120; } // 801BD118
  goto L_801BD12C; // 801BD11C
L_801BD120:;
  c->f[1]=c->f[29]; // 801BD120
  c->lr=0x801BD128u; f_801DB488(c); // 801BD124
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 801BD128
L_801BD12C:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 801BD12C
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801BD130
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD134
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD138
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD13C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD140
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 801BD144
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 801BD148
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 801BD14C
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD150
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 801BD154
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD158
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 801BD15C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD160
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 801BD164
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 801BD168
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD16C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 801BD170
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 801BD174
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD178
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BD17C
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 801BD180
L_801BD184:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801BD184
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801BD188
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801BD18C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801BD190
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801BD194
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801BD198
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801BD19C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801BD1A0
  c->r[29]=R32(c->r[1]+0x00000034u); // 801BD1A4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801BD1A8
  c->r[28]=R32(c->r[1]+0x00000030u); // 801BD1AC
  c->lr=c->r[0]; // 801BD1B0
  c->r[1]=c->r[1]+0x00000070u; // 801BD1B4
  return; // 801BD1B8
}

// Calc_BILLBOARD_ROT__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_801BD1BC(Ctx* __restrict c) {
  trace_call(0x801BD1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD1BC
  c->r[0]=c->lr; // 801BD1C0
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BD1C4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801BD1C8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801BD1CC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801BD1D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801BD1D4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801BD1D8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801BD1DC
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801BD1E0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BD1E4
  c->r[31]=c->r[4]|c->r[4]; // 801BD1E8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BD1EC
  c->r[30]=c->r[3]|c->r[3]; // 801BD1F0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801BD1F4
  c->r[29]=c->r[8]|c->r[8]; // 801BD1F8
  W32(c->r[1]+0x00000020u,c->r[28]); // 801BD1FC
  c->r[28]=c->r[5]|c->r[5]; // 801BD200
  c->r[6]=R32(c->r[7]+0x00000000u); // 801BD204
  c->r[6]=c->r[6]+0x0000004Cu; // 801BD208
  c->r[3]=R32(c->r[6]+0x00000024u); // 801BD20C
  c->r[3]=c->r[6]+c->r[3]; // 801BD210
  c->r[3]=c->r[3]+c->r[0]; // 801BD214
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BD218
  cmps(c,0,(int32_t)c->r[0],0); // 801BD21C
  if (crb(c,0)) { goto L_801BD2A0; } // 801BD220
  c->r[3]=c->r[7]|c->r[7]; // 801BD224
  c->r[4]=c->r[0]|c->r[0]; // 801BD228
  c->lr=0x801BD230u; f_801A9A50(c); // 801BD22C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801BD230
  cmps(c,0,(int32_t)c->r[0],0); // 801BD234
  if (crb(c,2)) { goto L_801BD244; } // 801BD238
  c->r[3]=c->r[3]+c->r[0]; // 801BD23C
  goto L_801BD248; // 801BD240
L_801BD244:;
  c->r[3]=0u+0x00000000u; // 801BD244
L_801BD248:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BD248
  if (crb(c,2)) { goto L_801BD27C; } // 801BD24C
  if (crb(c,2)) { goto L_801BD25C; } // 801BD250
  c->r[0]=R32(c->r[3]+0x00000010u); // 801BD254
  goto L_801BD260; // 801BD258
L_801BD25C:;
  c->r[0]=0u+0x00000000u; // 801BD25C
L_801BD260:;
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 801BD260
  c->r[3]=c->r[1]+0x00000008u; // 801BD264
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BD268
  c->r[4]=c->r[31]+c->r[29]; // 801BD26C
  c->r[5]=c->r[31]+c->r[0]; // 801BD270
  c->lr=0x801BD278u; f_801BCB54(c); // 801BD274
  goto L_801BD2C0; // 801BD278
L_801BD27C:;
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 801BD27C
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD280
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801BD284
  c->r[3]=c->r[31]+c->r[29]; // 801BD288
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD28C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD290
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801BD294
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801BD298
  goto L_801BD2C0; // 801BD29C
L_801BD2A0:;
  c->r[29]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 801BD2A0
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD2A4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801BD2A8
  c->r[3]=c->r[4]+c->r[29]; // 801BD2AC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD2B0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD2B4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801BD2B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801BD2BC
L_801BD2C0:;
  c->r[3]=c->r[1]+0x00000008u; // 801BD2C0
  c->r[4]=c->r[3]|c->r[3]; // 801BD2C4
  c->lr=0x801BD2CCu; f_800ECFD0(c); // 801BD2C8
  cmps(c,0,(int32_t)c->r[28],0); // 801BD2CC
  if (crb(c,2)) { goto L_801BD34C; } // 801BD2D0
  c->r[3]=c->r[31]+c->r[29]; // 801BD2D4
  {uint32_t ea=c->r[31]+c->r[29]; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD2D8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD2DC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD2E0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD2E4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD2E8
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD2EC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BD2F0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BD2F4
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 801BD2F8
  fcmp(c,0,c->f[30],c->f[0]); // 801BD2FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD300
  if (!crb(c,2)) { goto L_801BD30C; } // 801BD304
  goto L_801BD318; // 801BD308
L_801BD30C:;
  c->f[1]=c->f[30]; // 801BD30C
  c->lr=0x801BD314u; f_801DB488(c); // 801BD310
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 801BD314
L_801BD318:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 801BD318
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD31C
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD320
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 801BD324
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 801BD328
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801BD32C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 801BD330
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 801BD334
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 801BD338
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,1,ea,0,0);} // 801BD33C
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801BD340
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,0,ea,0,0);} // 801BD344
  goto L_801BD450; // 801BD348
L_801BD34C:;
  c->r[3]=c->r[31]+c->r[29]; // 801BD34C
  {uint32_t ea=c->r[31]+c->r[29]; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD350
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD354
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD358
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD35C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BD360
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BD364
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD368
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BD36C
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 801BD370
  fcmp(c,0,c->f[31],c->f[30]); // 801BD374
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD378
  if (!crb(c,2)) { goto L_801BD384; } // 801BD37C
  goto L_801BD390; // 801BD380
L_801BD384:;
  c->f[1]=c->f[31]; // 801BD384
  c->lr=0x801BD38Cu; f_801DB488(c); // 801BD388
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 801BD38C
L_801BD390:;
  c->r[3]=c->r[31]+c->r[29]; // 801BD390
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BD394
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD398
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD39C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD3A0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD3A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BD3A8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD3AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BD3B0
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 801BD3B4
  fcmp(c,0,c->f[29],c->f[31]); // 801BD3B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD3BC
  if (!crb(c,2)) { goto L_801BD3C8; } // 801BD3C0
  goto L_801BD3D4; // 801BD3C4
L_801BD3C8:;
  c->f[1]=c->f[29]; // 801BD3C8
  c->lr=0x801BD3D0u; f_801DB488(c); // 801BD3CC
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 801BD3D0
L_801BD3D4:;
  c->r[3]=c->r[31]+c->r[29]; // 801BD3D4
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD3D8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD3DC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD3E0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD3E4
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD3E8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD3EC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BD3F0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BD3F4
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 801BD3F8
  fcmp(c,0,c->f[29],c->f[0]); // 801BD3FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD400
  if (!crb(c,2)) { goto L_801BD40C; } // 801BD404
  goto L_801BD418; // 801BD408
L_801BD40C:;
  c->f[1]=c->f[29]; // 801BD40C
  c->lr=0x801BD414u; f_801DB488(c); // 801BD410
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 801BD414
L_801BD418:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 801BD418
  {double t0=S(c->f[30]), t1=S(c->f[31]); c->f[4]=t0; c->ps1[4]=t1;} // 801BD41C
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD420
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD424
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 801BD428
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 801BD42C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 801BD430
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD434
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 801BD438
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,2,ea,0,0);} // 801BD43C
  {double t0=S(c->f[0]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD440
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,1,ea,0,0);} // 801BD444
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD448
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,2,ea,0,0);} // 801BD44C
L_801BD450:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801BD450
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801BD454
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801BD458
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801BD45C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801BD460
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801BD464
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BD468
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BD46C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801BD470
  c->r[0]=R32(c->r[1]+0x00000064u); // 801BD474
  c->r[28]=R32(c->r[1]+0x00000020u); // 801BD478
  c->lr=c->r[0]; // 801BD47C
  c->r[1]=c->r[1]+0x00000060u; // 801BD480
  return; // 801BD484
}

// Calc_BILLBOARD_PERSP_ROT__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_801BD488(Ctx* __restrict c) {
  trace_call(0x801BD488u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD488
  c->r[0]=c->lr; // 801BD48C
  W32(c->r[1]+0x00000074u,c->r[0]); // 801BD490
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801BD494
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801BD498
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801BD49C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801BD4A0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801BD4A4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801BD4A8
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801BD4AC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801BD4B0
  c->r[31]=c->r[5]|c->r[5]; // 801BD4B4
  W32(c->r[1]+0x00000038u,c->r[30]); // 801BD4B8
  c->r[30]=c->r[4]|c->r[4]; // 801BD4BC
  W32(c->r[1]+0x00000034u,c->r[29]); // 801BD4C0
  c->r[29]=c->r[3]|c->r[3]; // 801BD4C4
  W32(c->r[1]+0x00000030u,c->r[28]); // 801BD4C8
  c->r[28]=c->r[8]|c->r[8]; // 801BD4CC
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD4D0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD4D4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD4D8
  c->f[2]=-c->f[2]; // 801BD4DC
  c->f[1]=-c->f[1]; // 801BD4E0
  c->f[0]=-c->f[0]; // 801BD4E4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801BD4E8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801BD4EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801BD4F0
  c->r[3]=R32(c->r[7]+0x00000000u); // 801BD4F4
  c->r[5]=c->r[3]+0x0000004Cu; // 801BD4F8
  c->r[3]=R32(c->r[3]+0x00000070u); // 801BD4FC
  c->r[3]=c->r[5]+c->r[3]; // 801BD500
  c->r[3]=c->r[3]+c->r[0]; // 801BD504
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BD508
  cmps(c,0,(int32_t)c->r[0],0); // 801BD50C
  if (crb(c,0)) { goto L_801BD590; } // 801BD510
  c->r[3]=c->r[7]|c->r[7]; // 801BD514
  c->r[4]=c->r[0]|c->r[0]; // 801BD518
  c->lr=0x801BD520u; f_801A9A50(c); // 801BD51C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801BD520
  cmps(c,0,(int32_t)c->r[0],0); // 801BD524
  if (crb(c,2)) { goto L_801BD534; } // 801BD528
  c->r[3]=c->r[3]+c->r[0]; // 801BD52C
  goto L_801BD538; // 801BD530
L_801BD534:;
  c->r[3]=0u+0x00000000u; // 801BD534
L_801BD538:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BD538
  if (crb(c,2)) { goto L_801BD56C; } // 801BD53C
  if (crb(c,2)) { goto L_801BD54C; } // 801BD540
  c->r[0]=R32(c->r[3]+0x00000010u); // 801BD544
  goto L_801BD550; // 801BD548
L_801BD54C:;
  c->r[0]=0u+0x00000000u; // 801BD54C
L_801BD550:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 801BD550
  c->r[3]=c->r[1]+0x00000014u; // 801BD554
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BD558
  c->r[4]=c->r[30]+c->r[28]; // 801BD55C
  c->r[5]=c->r[30]+c->r[0]; // 801BD560
  c->lr=0x801BD568u; f_801BCC04(c); // 801BD564
  goto L_801BD5B0; // 801BD568
L_801BD56C:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 801BD56C
  c->r[3]=c->r[30]+c->r[28]; // 801BD570
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD574
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD578
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD57C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801BD580
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801BD584
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801BD588
  goto L_801BD5B0; // 801BD58C
L_801BD590:;
  c->r[28]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 801BD590
  c->r[3]=c->r[4]+c->r[28]; // 801BD594
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD598
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD59C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD5A0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801BD5A4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801BD5A8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801BD5AC
L_801BD5B0:;
  c->r[3]=c->r[1]+0x00000008u; // 801BD5B0
  c->r[4]=c->r[3]|c->r[3]; // 801BD5B4
  c->lr=0x801BD5BCu; f_800ECFD0(c); // 801BD5B8
  c->r[3]=c->r[1]+0x00000014u; // 801BD5BC
  c->r[4]=c->r[1]+0x00000008u; // 801BD5C0
  c->r[5]=c->r[1]+0x00000020u; // 801BD5C4
  c->lr=0x801BD5CCu; f_800ED078(c); // 801BD5C8
  c->r[3]=c->r[1]+0x00000020u; // 801BD5CC
  c->r[4]=c->r[3]|c->r[3]; // 801BD5D0
  c->lr=0x801BD5D8u; f_800ECFD0(c); // 801BD5D4
  c->r[3]=c->r[1]+0x00000008u; // 801BD5D8
  c->r[4]=c->r[1]+0x00000020u; // 801BD5DC
  c->r[5]=c->r[1]+0x00000014u; // 801BD5E0
  c->lr=0x801BD5E8u; f_800ED078(c); // 801BD5E4
  cmps(c,0,(int32_t)c->r[31],0); // 801BD5E8
  if (crb(c,2)) { goto L_801BD690; } // 801BD5EC
  c->r[3]=c->r[30]+c->r[28]; // 801BD5F0
  {uint32_t ea=c->r[30]+c->r[28]; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD5F4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD5F8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD5FC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD600
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD604
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD608
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BD60C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BD610
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 801BD614
  fcmp(c,0,c->f[30],c->f[0]); // 801BD618
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD61C
  if (!crb(c,2)) { goto L_801BD628; } // 801BD620
  goto L_801BD634; // 801BD624
L_801BD628:;
  c->f[1]=c->f[30]; // 801BD628
  c->lr=0x801BD630u; f_801DB488(c); // 801BD62C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 801BD630
L_801BD634:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 801BD634
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801BD638
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD63C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD640
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD644
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD648
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,2,ea,0,0);} // 801BD64C
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,1,ea,0,0);} // 801BD650
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 801BD654
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD658
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 801BD65C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD660
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 801BD664
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD668
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BD66C
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 801BD670
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD674
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BD678
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 801BD67C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD680
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BD684
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 801BD688
  goto L_801BD7B4; // 801BD68C
L_801BD690:;
  c->r[3]=c->r[30]+c->r[28]; // 801BD690
  {uint32_t ea=c->r[30]+c->r[28]; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD694
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD698
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD69C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD6A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BD6A4
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BD6A8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD6AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BD6B0
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 801BD6B4
  fcmp(c,0,c->f[31],c->f[30]); // 801BD6B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD6BC
  if (!crb(c,2)) { goto L_801BD6C8; } // 801BD6C0
  goto L_801BD6D4; // 801BD6C4
L_801BD6C8:;
  c->f[1]=c->f[31]; // 801BD6C8
  c->lr=0x801BD6D0u; f_801DB488(c); // 801BD6CC
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 801BD6D0
L_801BD6D4:;
  c->r[3]=c->r[30]+c->r[28]; // 801BD6D4
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BD6D8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD6DC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD6E0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD6E4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD6E8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BD6EC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD6F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BD6F4
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 801BD6F8
  fcmp(c,0,c->f[29],c->f[31]); // 801BD6FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD700
  if (!crb(c,2)) { goto L_801BD70C; } // 801BD704
  goto L_801BD718; // 801BD708
L_801BD70C:;
  c->f[1]=c->f[29]; // 801BD70C
  c->lr=0x801BD714u; f_801DB488(c); // 801BD710
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 801BD714
L_801BD718:;
  c->r[3]=c->r[30]+c->r[28]; // 801BD718
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD71C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD720
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD724
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD728
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD72C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD730
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BD734
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BD738
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 801BD73C
  fcmp(c,0,c->f[29],c->f[0]); // 801BD740
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD744
  if (!crb(c,2)) { goto L_801BD750; } // 801BD748
  goto L_801BD75C; // 801BD74C
L_801BD750:;
  c->f[1]=c->f[29]; // 801BD750
  c->lr=0x801BD758u; f_801DB488(c); // 801BD754
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 801BD758
L_801BD75C:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 801BD75C
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801BD760
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD764
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD768
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD76C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD770
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,2,ea,0,0);} // 801BD774
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,1,ea,0,0);} // 801BD778
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 801BD77C
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD780
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 801BD784
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD788
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 801BD78C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD790
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 801BD794
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 801BD798
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD79C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 801BD7A0
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 801BD7A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD7A8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BD7AC
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 801BD7B0
L_801BD7B4:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801BD7B4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801BD7B8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801BD7BC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801BD7C0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801BD7C4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801BD7C8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801BD7CC
  c->r[30]=R32(c->r[1]+0x00000038u); // 801BD7D0
  c->r[29]=R32(c->r[1]+0x00000034u); // 801BD7D4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801BD7D8
  c->r[28]=R32(c->r[1]+0x00000030u); // 801BD7DC
  c->lr=c->r[0]; // 801BD7E0
  c->r[1]=c->r[1]+0x00000070u; // 801BD7E4
  return; // 801BD7E8
}

// Calc_BILLBOARD_Y__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_801BD7EC(Ctx* __restrict c) {
  trace_call(0x801BD7ECu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD7EC
  c->r[0]=c->lr; // 801BD7F0
  W32(c->r[1]+0x00000084u,c->r[0]); // 801BD7F4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801BD7F8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801BD7FC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801BD800
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801BD804
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801BD808
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801BD80C
  c->r[11]=c->r[1]+0x00000050u; // 801BD810
  c->lr=0x801BD818u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BD814
  c->r[30]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 801BD818
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD81C
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BD820
  c->r[27]=c->r[3]|c->r[3]; // 801BD824
  c->f[6]=-c->f[3]; // 801BD828
  {uint32_t ea=c->r[3]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BD82C
  c->r[6]=c->r[4]+c->r[30]; // 801BD830
  {uint32_t ea=c->r[3]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BD834
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD838
  c->r[28]=c->r[4]|c->r[4]; // 801BD83C
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD840
  c->r[29]=c->r[5]|c->r[5]; // 801BD844
  {uint32_t ea=c->r[6]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD848
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD84C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BD850
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 801BD854
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD858
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 801BD85C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BD860
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[5]);} // 801BD864
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 801BD868
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 801BD86C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[6]);} // 801BD870
  fcmp(c,0,c->f[30],c->f[31]); // 801BD874
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 801BD878
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD87C
  if (!crb(c,2)) { goto L_801BD888; } // 801BD880
  goto L_801BD894; // 801BD884
L_801BD888:;
  c->f[1]=c->f[30]; // 801BD888
  c->lr=0x801BD890u; f_801DB488(c); // 801BD88C
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[1]); // 801BD890
L_801BD894:;
  c->f[0]=c->ps1[0]=fres(c->f[31]); // 801BD894
  c->r[31]=c->r[1]+0x00000014u; // 801BD898
  c->r[3]=c->r[1]+0x00000008u; // 801BD89C
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,0,0);} // 801BD8A0
  c->r[4]=c->r[3]|c->r[3]; // 801BD8A4
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD8A8
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801BD8AC
  {double t0=S(-std::fma(c->f[31],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[31],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 801BD8B0
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD8B4
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,2,ea,1,0);} // 801BD8B8
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,1,ea,0,0);} // 801BD8BC
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD8C0
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,1,ea,1,0);} // 801BD8C4
  c->lr=0x801BD8CCu; f_800ECFD0(c); // 801BD8C8
  c->r[4]=c->r[31]|c->r[31]; // 801BD8CC
  c->r[3]=c->r[1]+0x00000008u; // 801BD8D0
  c->r[5]=c->r[1]+0x00000020u; // 801BD8D4
  c->lr=0x801BD8DCu; f_800ED078(c); // 801BD8D8
  cmps(c,0,(int32_t)c->r[29],0); // 801BD8DC
  if (crb(c,2)) { goto L_801BD940; } // 801BD8E0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 801BD8E4
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,0,ea,0,0);} // 801BD8E8
  {double t0=S(c->f[2]*c->f[31]), t1=S(c->ps1[2]*c->f[31]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD8EC
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 801BD8F0
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD8F4
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801BD8F8
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,1,ea,0,0);} // 801BD8FC
  {uint32_t ea=c->r[27]+0x00000010u; psq_store(c,0,ea,0,0);} // 801BD900
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 801BD904
  {double t0=S(c->f[2]*c->f[31]), t1=S(c->ps1[2]*c->f[31]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD908
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[2]);} // 801BD90C
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD910
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[2]);} // 801BD914
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD918
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 801BD91C
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[2]);} // 801BD920
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD924
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 801BD928
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[2]);} // 801BD92C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD930
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 801BD934
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[2]);} // 801BD938
  goto L_801BDA20; // 801BD93C
L_801BD940:;
  c->r[3]=c->r[28]+c->r[30]; // 801BD940
  {uint32_t ea=c->r[28]+c->r[30]; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD944
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD948
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD94C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD950
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BD954
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BD958
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD95C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BD960
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 801BD964
  fcmp(c,0,c->f[29],c->f[30]); // 801BD968
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD96C
  if (!crb(c,2)) { goto L_801BD978; } // 801BD970
  goto L_801BD984; // 801BD974
L_801BD978:;
  c->f[1]=c->f[29]; // 801BD978
  c->lr=0x801BD980u; f_801DB488(c); // 801BD97C
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 801BD980
L_801BD984:;
  c->r[3]=c->r[28]+c->r[30]; // 801BD984
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD988
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD98C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD990
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BD994
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD998
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BD99C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BD9A0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BD9A4
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 801BD9A8
  fcmp(c,0,c->f[29],c->f[0]); // 801BD9AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD9B0
  if (!crb(c,2)) { goto L_801BD9BC; } // 801BD9B4
  goto L_801BD9C8; // 801BD9B8
L_801BD9BC:;
  c->f[1]=c->f[29]; // 801BD9BC
  c->lr=0x801BD9C4u; f_801DB488(c); // 801BD9C0
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 801BD9C4
L_801BD9C8:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 801BD9C8
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801BD9CC
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD9D0
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD9D4
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801BD9D8
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801BD9DC
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,2,ea,0,0);} // 801BD9E0
  {uint32_t ea=c->r[27]+0x00000010u; psq_store(c,1,ea,0,0);} // 801BD9E4
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 801BD9E8
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD9EC
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 801BD9F0
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 801BD9F4
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[3]);} // 801BD9F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD9FC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 801BDA00
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[3]);} // 801BDA04
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BDA08
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 801BDA0C
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[3]);} // 801BDA10
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BDA14
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BDA18
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[3]);} // 801BDA1C
L_801BDA20:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801BDA20
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801BDA24
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801BDA28
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801BDA2C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801BDA30
  c->r[11]=c->r[1]+0x00000050u; // 801BDA34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801BDA38
  c->lr=0x801BDA40u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BDA3C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801BDA40
  c->lr=c->r[0]; // 801BDA44
  c->r[1]=c->r[1]+0x00000080u; // 801BDA48
  return; // 801BDA4C
}

// Calc_BILLBOARD_PERSP_Y__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_801BDA50(Ctx* __restrict c) {
  trace_call(0x801BDA50u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDA50
  c->r[0]=c->lr; // 801BDA54
  W32(c->r[1]+0x00000084u,c->r[0]); // 801BDA58
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801BDA5C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801BDA60
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801BDA64
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801BDA68
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801BDA6C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801BDA70
  c->r[11]=c->r[1]+0x00000050u; // 801BDA74
  c->lr=0x801BDA7Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BDA78
  c->r[30]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 801BDA7C
  c->r[28]=c->r[4]|c->r[4]; // 801BDA80
  {uint32_t ea=c->r[3]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BDA84
  c->r[27]=c->r[3]|c->r[3]; // 801BDA88
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BDA8C
  c->r[29]=c->r[5]|c->r[5]; // 801BDA90
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDA94
  c->r[4]=c->r[4]+c->r[30]; // 801BDA98
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BDA9C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801BDAA0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDAA4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BDAA8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BDAAC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BDAB0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 801BDAB4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BDAB8
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BDABC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 801BDAC0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BDAC4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BDAC8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BDACC
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 801BDAD0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDAD4
  c->f[2]=-c->f[3]; // 801BDAD8
  c->f[1]=-c->f[1]; // 801BDADC
  c->f[0]=-c->f[0]; // 801BDAE0
  fcmp(c,0,c->f[31],c->f[30]); // 801BDAE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801BDAE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801BDAEC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801BDAF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BDAF4
  if (!crb(c,2)) { goto L_801BDB00; } // 801BDAF8
  goto L_801BDB0C; // 801BDAFC
L_801BDB00:;
  c->f[1]=c->f[31]; // 801BDB00
  c->lr=0x801BDB08u; f_801DB488(c); // 801BDB04
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 801BDB08
L_801BDB0C:;
  c->f[0]=c->ps1[0]=fres(c->f[30]); // 801BDB0C
  c->r[31]=c->r[1]+0x00000014u; // 801BDB10
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,0,0);} // 801BDB14
  c->r[3]=c->r[31]|c->r[31]; // 801BDB18
  c->r[4]=c->r[1]+0x00000008u; // 801BDB1C
  c->r[5]=c->r[1]+0x00000020u; // 801BDB20
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BDB24
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801BDB28
  {double t0=S(-std::fma(c->f[30],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[30],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 801BDB2C
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BDB30
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,2,ea,1,0);} // 801BDB34
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,1,ea,0,0);} // 801BDB38
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BDB3C
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,1,ea,1,0);} // 801BDB40
  c->lr=0x801BDB48u; f_800ED078(c); // 801BDB44
  c->r[3]=c->r[1]+0x00000020u; // 801BDB48
  c->r[4]=c->r[3]|c->r[3]; // 801BDB4C
  c->lr=0x801BDB54u; f_800ECFD0(c); // 801BDB50
  c->r[4]=c->r[31]|c->r[31]; // 801BDB54
  c->r[3]=c->r[1]+0x00000020u; // 801BDB58
  c->r[5]=c->r[1]+0x00000008u; // 801BDB5C
  c->lr=0x801BDB64u; f_800ED078(c); // 801BDB60
  cmps(c,0,(int32_t)c->r[29],0); // 801BDB64
  if (crb(c,2)) { goto L_801BDBC8; } // 801BDB68
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 801BDB6C
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,0,ea,0,0);} // 801BDB70
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 801BDB74
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 801BDB78
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BDB7C
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801BDB80
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,1,ea,0,0);} // 801BDB84
  {uint32_t ea=c->r[27]+0x00000010u; psq_store(c,0,ea,0,0);} // 801BDB88
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 801BDB8C
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 801BDB90
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[2]);} // 801BDB94
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801BDB98
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[2]);} // 801BDB9C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BDBA0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 801BDBA4
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[2]);} // 801BDBA8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BDBAC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 801BDBB0
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[2]);} // 801BDBB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BDBB8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 801BDBBC
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[2]);} // 801BDBC0
  goto L_801BDCA8; // 801BDBC4
L_801BDBC8:;
  c->r[3]=c->r[28]+c->r[30]; // 801BDBC8
  {uint32_t ea=c->r[28]+c->r[30]; c->f[1]=c->ps1[1]=RF32(ea);} // 801BDBCC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDBD0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BDBD4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BDBD8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801BDBDC
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BDBE0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BDBE4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801BDBE8
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 801BDBEC
  fcmp(c,0,c->f[29],c->f[31]); // 801BDBF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BDBF4
  if (!crb(c,2)) { goto L_801BDC00; } // 801BDBF8
  goto L_801BDC0C; // 801BDBFC
L_801BDC00:;
  c->f[1]=c->f[29]; // 801BDC00
  c->lr=0x801BDC08u; f_801DB488(c); // 801BDC04
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 801BDC08
L_801BDC0C:;
  c->r[3]=c->r[28]+c->r[30]; // 801BDC0C
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDC10
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BDC14
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BDC18
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801BDC1C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BDC20
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801BDC24
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BDC28
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801BDC2C
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 801BDC30
  fcmp(c,0,c->f[29],c->f[0]); // 801BDC34
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BDC38
  if (!crb(c,2)) { goto L_801BDC44; } // 801BDC3C
  goto L_801BDC50; // 801BDC40
L_801BDC44:;
  c->f[1]=c->f[29]; // 801BDC44
  c->lr=0x801BDC4Cu; f_801DB488(c); // 801BDC48
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 801BDC4C
L_801BDC50:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 801BDC50
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801BDC54
  {double t0=S(c->f[3]*c->f[31]), t1=S(c->ps1[3]*c->f[31]); c->f[3]=t0; c->ps1[3]=t1;} // 801BDC58
  {double t0=S(c->f[1]*c->f[30]), t1=S(c->ps1[1]*c->f[30]); c->f[1]=t0; c->ps1[1]=t1;} // 801BDC5C
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801BDC60
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801BDC64
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,2,ea,0,0);} // 801BDC68
  {uint32_t ea=c->r[27]+0x00000010u; psq_store(c,1,ea,0,0);} // 801BDC6C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 801BDC70
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BDC74
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 801BDC78
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 801BDC7C
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[3]);} // 801BDC80
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BDC84
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 801BDC88
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[3]);} // 801BDC8C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BDC90
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 801BDC94
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[3]);} // 801BDC98
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BDC9C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BDCA0
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[3]);} // 801BDCA4
L_801BDCA8:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801BDCA8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801BDCAC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801BDCB0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801BDCB4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801BDCB8
  c->r[11]=c->r[1]+0x00000050u; // 801BDCBC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801BDCC0
  c->lr=0x801BDCC8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BDCC4
  c->r[0]=R32(c->r[1]+0x00000084u); // 801BDCC8
  c->lr=c->r[0]; // 801BDCCC
  c->r[1]=c->r[1]+0x00000080u; // 801BDCD0
  return; // 801BDCD4
}

// CalcView__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
void f_801BDCD8(Ctx* __restrict c) {
  trace_call(0x801BDCD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDCD8
  c->r[0]=c->lr; // 801BDCDC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801BDCE0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801BDCE4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801BDCE8
  c->r[11]=c->r[1]+0x00000090u; // 801BDCEC
  c->lr=0x801BDCF4u; f_80109F04(c); // 801BDCF0
  cmps(c,0,(int32_t)c->r[7],0); // 801BDCF4
  c->r[15]=c->r[3]|c->r[3]; // 801BDCF8
  c->r[16]=c->r[4]|c->r[4]; // 801BDCFC
  c->r[17]=c->r[5]|c->r[5]; // 801BDD00
  c->r[18]=c->r[6]|c->r[6]; // 801BDD04
  c->r[19]=c->r[7]|c->r[7]; // 801BDD08
  c->r[20]=c->r[8]|c->r[8]; // 801BDD0C
  c->r[21]=c->r[9]|c->r[9]; // 801BDD10
  c->r[22]=c->r[10]|c->r[10]; // 801BDD14
  if (crb(c,2)) { goto L_801BDFDC; } // 801BDD18
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)36); // 801BDD1C
  cmpu(c,0,c->r[7],0x00000001u); // 801BDD20
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 801BDD24
  c->r[0]=c->r[3]+0x0000001Fu; // 801BDD28
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BDD2C
  c->r[4]=c->r[4]+0x0000001Fu; // 801BDD30
  W32(c->r[1]+0x00000040u,c->r[0]); // 801BDD34
  c->r[14]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801BDD38
  if (!crb(c,1)) { goto L_801BDD58; } // 801BDD3C
  c->r[3]=c->r[20]|c->r[20]; // 801BDD40
  c->r[4]=c->r[17]|c->r[17]; // 801BDD44
  c->r[5]=c->r[15]|c->r[15]; // 801BDD48
  c->r[6]=c->r[19]|c->r[19]; // 801BDD4C
  c->lr=0x801BDD54u; f_800EC1C0(c); // 801BDD50
  goto L_801BDD68; // 801BDD54
L_801BDD58:;
  c->r[3]=c->r[20]|c->r[20]; // 801BDD58
  c->r[4]=c->r[17]|c->r[17]; // 801BDD5C
  c->r[5]=c->r[15]|c->r[15]; // 801BDD60
  c->lr=0x801BDD68u; f_800EC0F4(c); // 801BDD64
L_801BDD68:;
  c->lr=0x801BDD6Cu; f_801BEB04(c); // 801BDD68
  c->r[24]=c->r[3]|c->r[3]; // 801BDD6C
  c->r[31]=0u+0x80270000u; // 801BDD70
  c->r[30]=c->r[18]|c->r[18]; // 801BDD74
  c->r[29]=c->r[15]|c->r[15]; // 801BDD78
  c->r[27]=c->r[17]|c->r[17]; // 801BDD7C
  c->r[26]=c->r[24]|c->r[24]; // 801BDD80
  c->r[25]=c->r[15]|c->r[15]; // 801BDD84
  c->r[31]=c->r[31]+0x00000D30u; // 801BDD88
  c->r[23]=0u+0x00000000u; // 801BDD8C
  c->r[28]=0u+0x00000000u; // 801BDD90
  goto L_801BDEF0; // 801BDD94
L_801BDD98:;
  c->r[9]=R32(c->r[30]+0x00000000u); // 801BDD98
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; cr0(c,c->r[0]); // 801BDD9C
  if (crb(c,2)) { goto L_801BDE64; } // 801BDDA0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BDDA4
  c->r[5]=R32(c->r[21]+0x00000000u); // 801BDDA8
  c->r[12]=R32(c->r[31]+c->r[0]); // 801BDDAC
  c->r[3]=c->r[29]|c->r[29]; // 801BDDB0
  W32(c->r[1]+0x00000008u,c->r[5]); // 801BDDB4
  c->r[4]=c->r[17]|c->r[17]; // 801BDDB8
  c->r[6]=c->r[20]|c->r[20]; // 801BDDBC
  c->r[8]=c->r[23]|c->r[23]; // 801BDDC0
  c->r[7]=c->r[1]+0x00000008u; // 801BDDC4
  c->r[5]=rotl(c->r[9],3)&0x00000001u; // 801BDDC8
  c->ctr=c->r[12]; // 801BDDCC
  if (true) { c->lr=0x801BDDD4u; dispatch(c,c->ctr); } // 801BDDD0
  c->r[4]=R32(c->r[21]+0x00000000u); // 801BDDD4
  c->r[3]=c->r[21]|c->r[21]; // 801BDDD8
  c->r[4]=c->r[4]+0x0000004Cu; // 801BDDDC
  c->r[0]=R32(c->r[4]+0x00000024u); // 801BDDE0
  c->r[0]=c->r[4]+c->r[0]; // 801BDDE4
  c->r[4]=c->r[0]+c->r[28]; // 801BDDE8
  c->r[4]=R32(c->r[4]+0x00000004u); // 801BDDEC
  c->lr=0x801BDDF4u; f_801A9AA4(c); // 801BDDF0
  c->r[0]=0u-c->r[3]; // 801BDDF4
  c->r[0]=c->r[0]|c->r[3]; // 801BDDF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801BDDFC
  if (crb(c,2)) { goto L_801BDE28; } // 801BDE00
  c->r[0]=R32(c->r[3]+0x00000060u); // 801BDE04
  cmps(c,0,(int32_t)c->r[0],0); // 801BDE08
  if (crb(c,2)) { goto L_801BDE18; } // 801BDE0C
  c->r[0]=c->r[3]+c->r[0]; // 801BDE10
  goto L_801BDE1C; // 801BDE14
L_801BDE18:;
  c->r[0]=0u+0x00000000u; // 801BDE18
L_801BDE1C:;
  c->r[3]=0u-c->r[0]; // 801BDE1C
  c->r[0]=c->r[3]|c->r[0]; // 801BDE20
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801BDE24
L_801BDE28:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BDE28
  if (crb(c,2)) { goto L_801BDED4; } // 801BDE2C
  c->r[3]=c->r[27]|c->r[27]; // 801BDE30
  c->r[4]=c->r[1]+0x00000010u; // 801BDE34
  c->lr=0x801BDE3Cu; f_800EC358(c); // 801BDE38
  cmpu(c,0,c->r[3],0x00000001u); // 801BDE3C
  if (!crb(c,2)) { goto L_801BDE58; } // 801BDE40
  c->r[3]=c->r[25]|c->r[25]; // 801BDE44
  c->r[5]=c->r[26]|c->r[26]; // 801BDE48
  c->r[4]=c->r[1]+0x00000010u; // 801BDE4C
  c->lr=0x801BDE54u; f_800EC0F4(c); // 801BDE50
  goto L_801BDED4; // 801BDE54
L_801BDE58:;
  c->r[3]=c->r[26]|c->r[26]; // 801BDE58
  c->lr=0x801BDE60u; f_800EC094(c); // 801BDE5C
  goto L_801BDED4; // 801BDE60
L_801BDE64:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 801BDE64
  c->r[3]=c->r[3]+0x0000004Cu; // 801BDE68
  c->r[0]=R32(c->r[3]+0x00000024u); // 801BDE6C
  c->r[0]=c->r[3]+c->r[0]; // 801BDE70
  c->r[3]=c->r[0]+c->r[28]; // 801BDE74
  c->r[4]=R32(c->r[3]+0x00000004u); // 801BDE78
  cmps(c,0,(int32_t)c->r[4],0); // 801BDE7C
  if (crb(c,0)) { goto L_801BDED4; } // 801BDE80
  c->r[3]=c->r[21]|c->r[21]; // 801BDE84
  c->lr=0x801BDE8Cu; f_801A9AA4(c); // 801BDE88
  cmps(c,0,(int32_t)c->r[3],0); // 801BDE8C
  if (crb(c,2)) { goto L_801BDED4; } // 801BDE90
  c->r[0]=R32(c->r[3]+0x00000014u); // 801BDE94
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801BDE98
  if (crb(c,2)) { goto L_801BDED4; } // 801BDE9C
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801BDEA0
  c->r[3]=c->r[21]|c->r[21]; // 801BDEA4
  c->lr=0x801BDEACu; f_801A9AA4(c); // 801BDEA8
  cmps(c,0,(int32_t)c->r[3],0); // 801BDEAC
  if (crb(c,2)) { goto L_801BDEBC; } // 801BDEB0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801BDEB4
  goto L_801BDEC0; // 801BDEB8
L_801BDEBC:;
  c->r[0]=0u+0x00000000u; // 801BDEBC
L_801BDEC0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BDEC0
  c->r[4]=c->r[27]|c->r[27]; // 801BDEC4
  c->r[5]=c->r[29]|c->r[29]; // 801BDEC8
  c->r[3]=c->r[24]+c->r[0]; // 801BDECC
  c->lr=0x801BDED4u; f_800EC0F4(c); // 801BDED0
L_801BDED4:;
  c->r[30]=c->r[30]+0x00000004u; // 801BDED4
  c->r[29]=c->r[29]+0x00000030u; // 801BDED8
  c->r[28]=c->r[28]+0x00000004u; // 801BDEDC
  c->r[27]=c->r[27]+0x00000030u; // 801BDEE0
  c->r[26]=c->r[26]+0x00000030u; // 801BDEE4
  c->r[25]=c->r[25]+0x00000030u; // 801BDEE8
  c->r[23]=c->r[23]+0x00000001u; // 801BDEEC
L_801BDEF0:;
  cmpu(c,0,c->r[23],c->r[19]); // 801BDEF0
  if (crb(c,0)) { IRQCHK(c); goto L_801BDD98; } // 801BDEF4
  cmps(c,0,(int32_t)c->r[16],0); // 801BDEF8
  if (crb(c,2)) { goto L_801BDFA8; } // 801BDEFC
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BDF00
  c->r[17]=c->r[15]|c->r[15]; // 801BDF04
  c->r[20]=c->r[16]|c->r[16]; // 801BDF08
  c->r[21]=c->r[22]|c->r[22]; // 801BDF0C
  c->r[23]=c->r[22]|c->r[22]; // 801BDF10
  c->r[24]=0u+0x00000000u; // 801BDF14
  goto L_801BDFA0; // 801BDF18
L_801BDF1C:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801BDF1C
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 801BDF20
  if (crb(c,2)) { goto L_801BDF58; } // 801BDF24
  cmps(c,0,(int32_t)c->r[22],0); // 801BDF28
  if (crb(c,2)) { goto L_801BDF48; } // 801BDF2C
  c->r[3]=c->r[17]|c->r[17]; // 801BDF30
  c->r[4]=c->r[21]|c->r[21]; // 801BDF34
  c->lr=0x801BDF3Cu; f_800EC0C0(c); // 801BDF38
  {uint32_t ea=c->r[21]+0x0000002Cu; WF32(ea,c->f[31]);} // 801BDF3C
  {uint32_t ea=c->r[21]+0x0000001Cu; WF32(ea,c->f[31]);} // 801BDF40
  {uint32_t ea=c->r[21]+0x0000000Cu; WF32(ea,c->f[31]);} // 801BDF44
L_801BDF48:;
  c->r[3]=c->r[20]|c->r[20]; // 801BDF48
  c->r[4]=c->r[17]|c->r[17]; // 801BDF4C
  c->lr=0x801BDF54u; f_801DB7A4(c); // 801BDF50
  goto L_801BDF88; // 801BDF54
L_801BDF58:;
  cmps(c,0,(int32_t)c->r[22],0); // 801BDF58
  if (crb(c,2)) { goto L_801BDF7C; } // 801BDF5C
  c->r[3]=c->r[17]|c->r[17]; // 801BDF60
  c->r[4]=c->r[21]|c->r[21]; // 801BDF64
  c->lr=0x801BDF6Cu; f_800EC450(c); // 801BDF68
  c->r[3]=c->r[20]|c->r[20]; // 801BDF6C
  c->r[4]=c->r[23]|c->r[23]; // 801BDF70
  c->lr=0x801BDF78u; f_801DB7A4(c); // 801BDF74
  goto L_801BDF88; // 801BDF78
L_801BDF7C:;
  c->r[3]=c->r[20]|c->r[20]; // 801BDF7C
  c->r[4]=c->r[17]|c->r[17]; // 801BDF80
  c->lr=0x801BDF88u; f_801DB7D8(c); // 801BDF84
L_801BDF88:;
  c->r[17]=c->r[17]+0x00000030u; // 801BDF88
  c->r[20]=c->r[20]+0x00000024u; // 801BDF8C
  c->r[18]=c->r[18]+0x00000004u; // 801BDF90
  c->r[21]=c->r[21]+0x00000030u; // 801BDF94
  c->r[23]=c->r[23]+0x00000030u; // 801BDF98
  c->r[24]=c->r[24]+0x00000001u; // 801BDF9C
L_801BDFA0:;
  cmpu(c,0,c->r[24],c->r[19]); // 801BDFA0
  if (crb(c,0)) { IRQCHK(c); goto L_801BDF1C; } // 801BDFA4
L_801BDFA8:;
  c->r[3]=c->r[15]|c->r[15]; // 801BDFA8
  c->r[4]=c->r[14]|c->r[14]; // 801BDFAC
  c->lr=0x801BDFB4u; f_800E03E0(c); // 801BDFB0
  cmps(c,0,(int32_t)c->r[16],0); // 801BDFB4
  if (crb(c,2)) { goto L_801BDFDC; } // 801BDFB8
  c->r[4]=R32(c->r[1]+0x00000040u); // 801BDFBC
  c->r[3]=c->r[16]|c->r[16]; // 801BDFC0
  c->lr=0x801BDFC8u; f_800E03E0(c); // 801BDFC4
  cmps(c,0,(int32_t)c->r[22],0); // 801BDFC8
  if (crb(c,2)) { goto L_801BDFDC; } // 801BDFCC
  c->r[3]=c->r[22]|c->r[22]; // 801BDFD0
  c->r[4]=c->r[14]|c->r[14]; // 801BDFD4
  c->lr=0x801BDFDCu; f_800E03E0(c); // 801BDFD8
L_801BDFDC:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801BDFDC
  c->r[11]=c->r[1]+0x00000090u; // 801BDFE0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801BDFE4
  c->lr=0x801BDFECu; f_80109F50(c); // 801BDFE8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801BDFEC
  c->lr=c->r[0]; // 801BDFF0
  c->r[1]=c->r[1]+0x000000A0u; // 801BDFF4
  return; // 801BDFF8
}

// CalcView_LC__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
void f_801BDFFC(Ctx* __restrict c) {
  trace_call(0x801BDFFCu);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDFFC
  c->r[0]=c->lr; // 801BE000
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801BE004
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801BE008
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801BE00C
  c->r[11]=c->r[1]+0x000000C0u; // 801BE010
  c->lr=0x801BE018u; f_80109F04(c); // 801BE014
  cmps(c,0,(int32_t)c->r[7],0); // 801BE018
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BE01C
  c->r[15]=c->r[5]|c->r[5]; // 801BE020
  c->r[16]=c->r[8]|c->r[8]; // 801BE024
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801BE028
  c->r[17]=c->r[9]|c->r[9]; // 801BE02C
  c->r[18]=c->r[10]|c->r[10]; // 801BE030
  W32(c->r[1]+0x00000010u,c->r[6]); // 801BE034
  W32(c->r[1]+0x00000014u,c->r[7]); // 801BE038
  if (crb(c,2)) { goto L_801BE478; } // 801BE03C
  c->r[5]=0u+0xE0000000u; // 801BE040
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 801BE044
  c->r[0]=c->r[5]+0x00001000u; // 801BE048
  W32(c->r[1]+0x00000068u,c->r[0]); // 801BE04C
  c->r[22]=c->r[5]+0x00000800u; // 801BE050
  c->r[0]=c->r[5]+0x00002800u; // 801BE054
  c->r[14]=c->r[5]+0x00001800u; // 801BE058
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BE05C
  c->r[0]=c->r[5]+0x00003000u; // 801BE060
  c->r[4]=c->r[4]+0x0000001Fu; // 801BE064
  W32(c->r[1]+0x00000060u,c->r[0]); // 801BE068
  c->r[0]=c->r[5]+0x00003800u; // 801BE06C
  c->r[19]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801BE070
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801BE074
  c->r[4]=c->r[19]|c->r[19]; // 801BE078
  c->lr=0x801BE080u; f_800E0354(c); // 801BE07C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BE080
  cmps(c,0,(int32_t)c->r[0],0); // 801BE084
  c->r[0]=0u+0x00000001u; // 801BE088
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BE08C
  if (crb(c,2)) { goto L_801BE0D0; } // 801BE090
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE094
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801BE098
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801BE09C
  c->r[0]=0u+0x00000002u; // 801BE0A0
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BE0A4
  c->r[0]=c->r[4]+0x0000001Fu; // 801BE0A8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BE0AC
  c->lr=0x801BE0B4u; f_800E0354(c); // 801BE0B0
  cmps(c,0,(int32_t)c->r[18],0); // 801BE0B4
  if (crb(c,2)) { goto L_801BE0D0; } // 801BE0B8
  c->r[0]=0u+0x00000003u; // 801BE0BC
  c->r[3]=c->r[18]|c->r[18]; // 801BE0C0
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BE0C4
  c->r[4]=c->r[19]|c->r[19]; // 801BE0C8
  c->lr=0x801BE0D0u; f_800E0354(c); // 801BE0CC
L_801BE0D0:;
  c->lr=0x801BE0D4u; f_801BEB04(c); // 801BE0D0
  c->r[29]=c->r[3]|c->r[3]; // 801BE0D4
  c->r[3]=0u+0x00000000u; // 801BE0D8
  c->lr=0x801BE0E0u; f_800E06DC(c); // 801BE0DC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BE0E0
  c->r[30]=0u+0x80270000u; // 801BE0E4
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BE0E8
  c->r[30]=c->r[30]+0x00000D30u; // 801BE0EC
  W32(c->r[1]+0x00000074u,c->r[15]); // 801BE0F0
  c->r[21]=0u+0x00000000u; // 801BE0F4
  c->r[31]=0u+0x00000000u; // 801BE0F8
  W32(c->r[1]+0x00000070u,c->r[0]); // 801BE0FC
  W32(c->r[1]+0x0000006Cu,c->r[18]); // 801BE100
  goto L_801BE46C; // 801BE104
L_801BE108:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE108
  c->r[20]=c->r[0]-c->r[21]; // 801BE10C
  cmpu(c,0,c->r[20],0x00000028u); // 801BE110
  if (!crb(c,1)) { goto L_801BE130; } // 801BE114
  c->r[0]=0u+0x0000003Cu; // 801BE118
  c->r[20]=0u+0x00000028u; // 801BE11C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BE120
  c->r[0]=0u+0x0000002Du; // 801BE124
  W32(c->r[1]+0x00000050u,c->r[0]); // 801BE128
  goto L_801BE150; // 801BE12C
L_801BE130:;
  c->r[4]=(uint32_t)((int32_t)c->r[20]*(int32_t)48); // 801BE130
  c->r[3]=(uint32_t)((int32_t)c->r[20]*(int32_t)36); // 801BE134
  c->r[0]=c->r[4]+0x0000001Fu; // 801BE138
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BE13C
  c->r[3]=c->r[3]+0x0000001Fu; // 801BE140
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BE144
  c->r[0]=rotl(c->r[3],27)&0x07FFFFFFu; // 801BE148
  W32(c->r[1]+0x00000050u,c->r[0]); // 801BE14C
L_801BE150:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 801BE150
  c->lr=0x801BE158u; f_800E06DC(c); // 801BE154
  cmpu(c,0,c->r[20],0x00000001u); // 801BE158
  if (!crb(c,1)) { goto L_801BE178; } // 801BE15C
  c->r[4]=R32(c->r[1]+0x00000074u); // 801BE160
  c->r[3]=c->r[16]|c->r[16]; // 801BE164
  c->r[5]=c->r[22]|c->r[22]; // 801BE168
  c->r[6]=c->r[20]|c->r[20]; // 801BE16C
  c->lr=0x801BE174u; f_800EC1C0(c); // 801BE170
  goto L_801BE188; // 801BE174
L_801BE178:;
  c->r[4]=R32(c->r[1]+0x00000074u); // 801BE178
  c->r[3]=c->r[16]|c->r[16]; // 801BE17C
  c->r[5]=c->r[22]|c->r[22]; // 801BE180
  c->lr=0x801BE188u; f_800EC0F4(c); // 801BE184
L_801BE188:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801BE188
  c->r[27]=c->r[22]|c->r[22]; // 801BE18C
  c->r[25]=c->r[22]|c->r[22]; // 801BE190
  c->r[19]=0u+0x00000000u; // 801BE194
  c->r[23]=c->r[0]+c->r[31]; // 801BE198
  c->r[26]=0u+0x00000000u; // 801BE19C
  c->r[28]=c->r[23]|c->r[23]; // 801BE1A0
  goto L_801BE310; // 801BE1A4
L_801BE1A8:;
  c->r[8]=R32(c->r[28]+0x00000000u); // 801BE1A8
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; cr0(c,c->r[0]); // 801BE1AC
  if (crb(c,2)) { goto L_801BE280; } // 801BE1B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE1B4
  c->r[5]=R32(c->r[17]+0x00000000u); // 801BE1B8
  c->r[12]=R32(c->r[30]+c->r[0]); // 801BE1BC
  c->r[3]=c->r[27]|c->r[27]; // 801BE1C0
  W32(c->r[1]+0x00000018u,c->r[5]); // 801BE1C4
  c->r[5]=rotl(c->r[8],3)&0x00000001u; // 801BE1C8
  c->r[4]=c->r[15]|c->r[15]; // 801BE1CC
  c->r[6]=c->r[16]|c->r[16]; // 801BE1D0
  c->r[7]=c->r[1]+0x00000018u; // 801BE1D4
  c->r[8]=c->r[21]+c->r[19]; // 801BE1D8
  c->ctr=c->r[12]; // 801BE1DC
  if (true) { c->lr=0x801BE1E4u; dispatch(c,c->ctr); } // 801BE1E0
  c->r[4]=R32(c->r[17]+0x00000000u); // 801BE1E4
  c->r[3]=c->r[17]|c->r[17]; // 801BE1E8
  c->r[4]=c->r[4]+0x0000004Cu; // 801BE1EC
  c->r[0]=R32(c->r[4]+0x00000024u); // 801BE1F0
  c->r[0]=c->r[4]+c->r[0]; // 801BE1F4
  c->r[0]=c->r[0]+c->r[31]; // 801BE1F8
  c->r[4]=c->r[0]+c->r[26]; // 801BE1FC
  c->r[4]=R32(c->r[4]+0x00000004u); // 801BE200
  c->lr=0x801BE208u; f_801A9AA4(c); // 801BE204
  c->r[0]=0u-c->r[3]; // 801BE208
  c->r[0]=c->r[0]|c->r[3]; // 801BE20C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801BE210
  if (crb(c,2)) { goto L_801BE23C; } // 801BE214
  c->r[0]=R32(c->r[3]+0x00000060u); // 801BE218
  cmps(c,0,(int32_t)c->r[0],0); // 801BE21C
  if (crb(c,2)) { goto L_801BE22C; } // 801BE220
  c->r[0]=c->r[3]+c->r[0]; // 801BE224
  goto L_801BE230; // 801BE228
L_801BE22C:;
  c->r[0]=0u+0x00000000u; // 801BE22C
L_801BE230:;
  c->r[3]=0u-c->r[0]; // 801BE230
  c->r[0]=c->r[3]|c->r[0]; // 801BE234
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801BE238
L_801BE23C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BE23C
  if (crb(c,2)) { goto L_801BE2FC; } // 801BE240
  c->r[0]=c->r[21]+c->r[19]; // 801BE244
  c->r[4]=c->r[1]+0x00000020u; // 801BE248
  c->r[24]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BE24C
  c->r[3]=c->r[15]+c->r[24]; // 801BE250
  c->lr=0x801BE258u; f_800EC358(c); // 801BE254
  cmpu(c,0,c->r[3],0x00000001u); // 801BE258
  if (!crb(c,2)) { goto L_801BE274; } // 801BE25C
  c->r[3]=c->r[25]|c->r[25]; // 801BE260
  c->r[4]=c->r[1]+0x00000020u; // 801BE264
  c->r[5]=c->r[29]+c->r[24]; // 801BE268
  c->lr=0x801BE270u; f_800EC0F4(c); // 801BE26C
  goto L_801BE2FC; // 801BE270
L_801BE274:;
  c->r[3]=c->r[29]+c->r[24]; // 801BE274
  c->lr=0x801BE27Cu; f_800EC094(c); // 801BE278
  goto L_801BE2FC; // 801BE27C
L_801BE280:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 801BE280
  c->r[3]=c->r[3]+0x0000004Cu; // 801BE284
  c->r[0]=R32(c->r[3]+0x00000024u); // 801BE288
  c->r[0]=c->r[3]+c->r[0]; // 801BE28C
  c->r[0]=c->r[0]+c->r[31]; // 801BE290
  c->r[3]=c->r[0]+c->r[26]; // 801BE294
  c->r[4]=R32(c->r[3]+0x00000004u); // 801BE298
  cmps(c,0,(int32_t)c->r[4],0); // 801BE29C
  if (crb(c,0)) { goto L_801BE2FC; } // 801BE2A0
  c->r[3]=c->r[17]|c->r[17]; // 801BE2A4
  c->lr=0x801BE2ACu; f_801A9AA4(c); // 801BE2A8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE2AC
  if (crb(c,2)) { goto L_801BE2FC; } // 801BE2B0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801BE2B4
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801BE2B8
  if (crb(c,2)) { goto L_801BE2FC; } // 801BE2BC
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801BE2C0
  c->r[3]=c->r[17]|c->r[17]; // 801BE2C4
  c->lr=0x801BE2CCu; f_801A9AA4(c); // 801BE2C8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE2CC
  if (crb(c,2)) { goto L_801BE2DC; } // 801BE2D0
  c->r[3]=R32(c->r[3]+0x00000010u); // 801BE2D4
  goto L_801BE2E0; // 801BE2D8
L_801BE2DC:;
  c->r[3]=0u+0x00000000u; // 801BE2DC
L_801BE2E0:;
  c->r[0]=c->r[21]+c->r[19]; // 801BE2E0
  c->r[5]=c->r[27]|c->r[27]; // 801BE2E4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801BE2E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BE2EC
  c->r[3]=c->r[29]+c->r[3]; // 801BE2F0
  c->r[4]=c->r[15]+c->r[0]; // 801BE2F4
  c->lr=0x801BE2FCu; f_800EC0F4(c); // 801BE2F8
L_801BE2FC:;
  c->r[28]=c->r[28]+0x00000004u; // 801BE2FC
  c->r[27]=c->r[27]+0x00000030u; // 801BE300
  c->r[26]=c->r[26]+0x00000004u; // 801BE304
  c->r[25]=c->r[25]+0x00000030u; // 801BE308
  c->r[19]=c->r[19]+0x00000001u; // 801BE30C
L_801BE310:;
  cmpu(c,0,c->r[19],c->r[20]); // 801BE310
  if (crb(c,0)) { IRQCHK(c); goto L_801BE1A8; } // 801BE314
  c->r[3]=R32(c->r[1]+0x00000008u); // 801BE318
  c->r[4]=c->r[22]|c->r[22]; // 801BE31C
  c->r[5]=R32(c->r[1]+0x00000054u); // 801BE320
  c->lr=0x801BE328u; f_8017B210(c); // 801BE324
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BE328
  cmps(c,0,(int32_t)c->r[0],0); // 801BE32C
  if (crb(c,2)) { goto L_801BE3D8; } // 801BE330
  c->r[24]=R32(c->r[1]+0x00000068u); // 801BE334
  c->r[19]=c->r[22]|c->r[22]; // 801BE338
  c->r[25]=c->r[14]|c->r[14]; // 801BE33C
  c->r[26]=c->r[14]|c->r[14]; // 801BE340
  c->r[27]=0u+0x00000000u; // 801BE344
  goto L_801BE3D0; // 801BE348
L_801BE34C:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 801BE34C
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 801BE350
  if (crb(c,2)) { goto L_801BE388; } // 801BE354
  cmps(c,0,(int32_t)c->r[18],0); // 801BE358
  if (crb(c,2)) { goto L_801BE378; } // 801BE35C
  c->r[3]=c->r[19]|c->r[19]; // 801BE360
  c->r[4]=c->r[25]|c->r[25]; // 801BE364
  c->lr=0x801BE36Cu; f_800EC0C0(c); // 801BE368
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[31]);} // 801BE36C
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[31]);} // 801BE370
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[31]);} // 801BE374
L_801BE378:;
  c->r[3]=c->r[24]|c->r[24]; // 801BE378
  c->r[4]=c->r[19]|c->r[19]; // 801BE37C
  c->lr=0x801BE384u; f_801DB7A4(c); // 801BE380
  goto L_801BE3B8; // 801BE384
L_801BE388:;
  cmps(c,0,(int32_t)c->r[18],0); // 801BE388
  if (crb(c,2)) { goto L_801BE3AC; } // 801BE38C
  c->r[3]=c->r[19]|c->r[19]; // 801BE390
  c->r[4]=c->r[25]|c->r[25]; // 801BE394
  c->lr=0x801BE39Cu; f_800EC450(c); // 801BE398
  c->r[3]=c->r[24]|c->r[24]; // 801BE39C
  c->r[4]=c->r[26]|c->r[26]; // 801BE3A0
  c->lr=0x801BE3A8u; f_801DB7A4(c); // 801BE3A4
  goto L_801BE3B8; // 801BE3A8
L_801BE3AC:;
  c->r[3]=c->r[24]|c->r[24]; // 801BE3AC
  c->r[4]=c->r[19]|c->r[19]; // 801BE3B0
  c->lr=0x801BE3B8u; f_801DB7D8(c); // 801BE3B4
L_801BE3B8:;
  c->r[19]=c->r[19]+0x00000030u; // 801BE3B8
  c->r[24]=c->r[24]+0x00000024u; // 801BE3BC
  c->r[23]=c->r[23]+0x00000004u; // 801BE3C0
  c->r[25]=c->r[25]+0x00000030u; // 801BE3C4
  c->r[26]=c->r[26]+0x00000030u; // 801BE3C8
  c->r[27]=c->r[27]+0x00000001u; // 801BE3CC
L_801BE3D0:;
  cmpu(c,0,c->r[27],c->r[20]); // 801BE3D0
  if (crb(c,0)) { IRQCHK(c); goto L_801BE34C; } // 801BE3D4
L_801BE3D8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BE3D8
  cmps(c,0,(int32_t)c->r[0],0); // 801BE3DC
  if (crb(c,2)) { goto L_801BE40C; } // 801BE3E0
  c->r[3]=R32(c->r[1]+0x00000070u); // 801BE3E4
  c->r[4]=R32(c->r[1]+0x00000068u); // 801BE3E8
  c->r[5]=R32(c->r[1]+0x00000050u); // 801BE3EC
  c->lr=0x801BE3F4u; f_8017B210(c); // 801BE3F0
  cmps(c,0,(int32_t)c->r[18],0); // 801BE3F4
  if (crb(c,2)) { goto L_801BE40C; } // 801BE3F8
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 801BE3FC
  c->r[4]=c->r[14]|c->r[14]; // 801BE400
  c->r[5]=R32(c->r[1]+0x00000054u); // 801BE404
  c->lr=0x801BE40Cu; f_8017B210(c); // 801BE408
L_801BE40C:;
  c->r[3]=c->r[22]|c->r[22]; // 801BE40C
  c->r[22]=R32(c->r[1]+0x00000064u); // 801BE410
  c->r[5]=c->r[14]|c->r[14]; // 801BE414
  c->r[14]=R32(c->r[1]+0x0000005Cu); // 801BE418
  W32(c->r[1]+0x00000064u,c->r[3]); // 801BE41C
  c->r[21]=c->r[21]+0x00000028u; // 801BE420
  c->r[3]=R32(c->r[1]+0x00000074u); // 801BE424
  c->r[31]=c->r[31]+0x000000A0u; // 801BE428
  c->r[4]=R32(c->r[1]+0x00000068u); // 801BE42C
  c->r[3]=c->r[3]+0x00000780u; // 801BE430
  c->r[0]=R32(c->r[1]+0x00000060u); // 801BE434
  W32(c->r[1]+0x00000074u,c->r[3]); // 801BE438
  c->r[3]=R32(c->r[1]+0x00000008u); // 801BE43C
  W32(c->r[1]+0x00000068u,c->r[0]); // 801BE440
  c->r[3]=c->r[3]+0x00000780u; // 801BE444
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BE448
  c->r[3]=R32(c->r[1]+0x00000070u); // 801BE44C
  W32(c->r[1]+0x00000060u,c->r[4]); // 801BE450
  c->r[3]=c->r[3]+0x000005A0u; // 801BE454
  W32(c->r[1]+0x00000070u,c->r[3]); // 801BE458
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 801BE45C
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 801BE460
  c->r[3]=c->r[3]+0x00000780u; // 801BE464
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 801BE468
L_801BE46C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE46C
  cmpu(c,0,c->r[21],c->r[0]); // 801BE470
  if (crb(c,0)) { IRQCHK(c); goto L_801BE108; } // 801BE474
L_801BE478:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801BE478
  c->r[11]=c->r[1]+0x000000C0u; // 801BE47C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801BE480
  c->lr=0x801BE488u; f_80109F50(c); // 801BE484
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801BE488
  c->lr=c->r[0]; // 801BE48C
  c->r[1]=c->r[1]+0x000000D0u; // 801BE490
  return; // 801BE494
}

// CalcView_LC_DMA_ModelMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
void f_801BE498(Ctx* __restrict c) {
  trace_call(0x801BE498u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE498
  c->r[0]=c->lr; // 801BE49C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801BE4A0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 801BE4A4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 801BE4A8
  c->r[11]=c->r[1]+0x000000D0u; // 801BE4AC
  c->lr=0x801BE4B4u; f_80109F04(c); // 801BE4B0
  cmps(c,0,(int32_t)c->r[7],0); // 801BE4B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BE4B8
  c->r[15]=c->r[5]|c->r[5]; // 801BE4BC
  c->r[16]=c->r[8]|c->r[8]; // 801BE4C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801BE4C4
  c->r[17]=c->r[9]|c->r[9]; // 801BE4C8
  c->r[18]=c->r[10]|c->r[10]; // 801BE4CC
  W32(c->r[1]+0x00000010u,c->r[6]); // 801BE4D0
  W32(c->r[1]+0x00000014u,c->r[7]); // 801BE4D4
  if (crb(c,2)) { goto L_801BE9D4; } // 801BE4D8
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 801BE4DC
  c->r[0]=0u+0xE0000000u; // 801BE4E0
  W32(c->r[1]+0x00000070u,c->r[0]); // 801BE4E4
  c->r[4]=c->r[0]|c->r[0]; // 801BE4E8
  c->r[5]=c->r[5]+0x0000001Fu; // 801BE4EC
  c->r[19]=rotl(c->r[5],0)&0xFFFFFFE0u; // 801BE4F0
  c->r[5]=R32(c->r[1]+0x00000070u); // 801BE4F4
  c->r[0]=c->r[4]+0x00001000u; // 801BE4F8
  c->r[22]=c->r[4]+0x00000800u; // 801BE4FC
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BE500
  c->r[0]=c->r[5]+0x00002000u; // 801BE504
  c->r[4]=R32(c->r[1]+0x00000070u); // 801BE508
  W32(c->r[1]+0x00000068u,c->r[0]); // 801BE50C
  c->r[0]=c->r[5]+0x00002800u; // 801BE510
  c->r[14]=c->r[4]+0x00001800u; // 801BE514
  c->r[4]=c->r[19]|c->r[19]; // 801BE518
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BE51C
  c->r[0]=c->r[5]+0x00003000u; // 801BE520
  W32(c->r[1]+0x00000060u,c->r[0]); // 801BE524
  c->r[0]=c->r[5]+0x00003800u; // 801BE528
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801BE52C
  c->lr=0x801BE534u; f_800E0354(c); // 801BE530
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BE534
  cmps(c,0,(int32_t)c->r[0],0); // 801BE538
  c->r[0]=0u+0x00000001u; // 801BE53C
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BE540
  if (crb(c,2)) { goto L_801BE584; } // 801BE544
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE548
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801BE54C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801BE550
  c->r[0]=0u+0x00000002u; // 801BE554
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BE558
  c->r[0]=c->r[4]+0x0000001Fu; // 801BE55C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BE560
  c->lr=0x801BE568u; f_800E0354(c); // 801BE564
  cmps(c,0,(int32_t)c->r[18],0); // 801BE568
  if (crb(c,2)) { goto L_801BE584; } // 801BE56C
  c->r[0]=0u+0x00000003u; // 801BE570
  c->r[3]=c->r[18]|c->r[18]; // 801BE574
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BE578
  c->r[4]=c->r[19]|c->r[19]; // 801BE57C
  c->lr=0x801BE584u; f_800E0354(c); // 801BE580
L_801BE584:;
  c->lr=0x801BE588u; f_801BEB04(c); // 801BE584
  c->r[29]=c->r[3]|c->r[3]; // 801BE588
  c->r[3]=0u+0x00000000u; // 801BE58C
  c->lr=0x801BE594u; f_800E06DC(c); // 801BE590
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE594
  c->r[4]=c->r[15]|c->r[15]; // 801BE598
  c->r[3]=0u+0xE0000000u; // 801BE59C
  c->r[5]=0u+0x0000003Cu; // 801BE5A0
  cmpu(c,0,c->r[0],0x00000028u); // 801BE5A4
  if (crb(c,1)) { goto L_801BE5B0; } // 801BE5A8
  c->r[5]=rotl(c->r[19],27)&0x07FFFFFFu; // 801BE5AC
L_801BE5B0:;
  c->lr=0x801BE5B4u; f_8017B20C(c); // 801BE5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE5B4
  cmpu(c,0,c->r[0],0x00000014u); // 801BE5B8
  if (!crb(c,1)) { goto L_801BE5D8; } // 801BE5BC
  goto L_801BE5C8; // 801BE5C0
L_801BE5C4:;
  c->lr=0x801BE5C8u; f_800E8128(c); // 801BE5C4
L_801BE5C8:;
  c->lr=0x801BE5CCu; f_800E06D0(c); // 801BE5C8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE5CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801BE5C4; } // 801BE5D0
  goto L_801BE5E0; // 801BE5D4
L_801BE5D8:;
  c->r[3]=0u+0x00000000u; // 801BE5D8
  c->lr=0x801BE5E0u; f_800E06DC(c); // 801BE5DC
L_801BE5E0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BE5E0
  c->r[30]=0u+0x80270000u; // 801BE5E4
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BE5E8
  c->r[30]=c->r[30]+0x00000D30u; // 801BE5EC
  W32(c->r[1]+0x00000078u,c->r[0]); // 801BE5F0
  c->r[0]=0u+0x00000000u; // 801BE5F4
  c->r[21]=0u+0x00000000u; // 801BE5F8
  c->r[31]=0u+0x00000000u; // 801BE5FC
  W32(c->r[1]+0x00000074u,c->r[18]); // 801BE600
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801BE604
  goto L_801BE9C8; // 801BE608
L_801BE60C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE60C
  c->r[19]=c->r[0]-c->r[21]; // 801BE610
  cmpu(c,0,c->r[19],0x00000028u); // 801BE614
  c->r[20]=c->r[19]|c->r[19]; // 801BE618
  if (!crb(c,1)) { goto L_801BE638; } // 801BE61C
  c->r[0]=0u+0x0000003Cu; // 801BE620
  c->r[20]=0u+0x00000028u; // 801BE624
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BE628
  c->r[0]=0u+0x0000002Du; // 801BE62C
  W32(c->r[1]+0x00000050u,c->r[0]); // 801BE630
  goto L_801BE658; // 801BE634
L_801BE638:;
  c->r[4]=(uint32_t)((int32_t)c->r[19]*(int32_t)48); // 801BE638
  c->r[3]=(uint32_t)((int32_t)c->r[19]*(int32_t)36); // 801BE63C
  c->r[0]=c->r[4]+0x0000001Fu; // 801BE640
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BE644
  c->r[3]=c->r[3]+0x0000001Fu; // 801BE648
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BE64C
  c->r[0]=rotl(c->r[3],27)&0x07FFFFFFu; // 801BE650
  W32(c->r[1]+0x00000050u,c->r[0]); // 801BE654
L_801BE658:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 801BE658
  c->lr=0x801BE660u; f_800E06DC(c); // 801BE65C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE660
  c->r[3]=c->r[21]+0x00000028u; // 801BE664
  cmpu(c,0,c->r[3],c->r[0]); // 801BE668
  if (!crb(c,0)) { goto L_801BE6A4; } // 801BE66C
  c->r[5]=c->r[19]+0xFFFFFFD8u; // 801BE670
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801BE674
  cmpu(c,0,c->r[5],0x00000028u); // 801BE678
  c->r[3]=R32(c->r[1]+0x00000068u); // 801BE67C
  c->r[4]=c->r[0]+c->r[15]; // 801BE680
  c->r[4]=c->r[4]+0x00000780u; // 801BE684
  if (!crb(c,1)) { goto L_801BE694; } // 801BE688
  c->r[5]=0u+0x0000003Cu; // 801BE68C
  goto L_801BE6A0; // 801BE690
L_801BE694:;
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 801BE694
  c->r[0]=c->r[5]+0x0000001Fu; // 801BE698
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BE69C
L_801BE6A0:;
  c->lr=0x801BE6A4u; f_8017B20C(c); // 801BE6A0
L_801BE6A4:;
  cmpu(c,0,c->r[20],0x00000001u); // 801BE6A4
  if (!crb(c,1)) { goto L_801BE6C4; } // 801BE6A8
  c->r[4]=R32(c->r[1]+0x00000070u); // 801BE6AC
  c->r[3]=c->r[16]|c->r[16]; // 801BE6B0
  c->r[5]=c->r[22]|c->r[22]; // 801BE6B4
  c->r[6]=c->r[20]|c->r[20]; // 801BE6B8
  c->lr=0x801BE6C0u; f_800EC1C0(c); // 801BE6BC
  goto L_801BE6D4; // 801BE6C0
L_801BE6C4:;
  c->r[4]=R32(c->r[1]+0x00000070u); // 801BE6C4
  c->r[3]=c->r[16]|c->r[16]; // 801BE6C8
  c->r[5]=c->r[22]|c->r[22]; // 801BE6CC
  c->lr=0x801BE6D4u; f_800EC0F4(c); // 801BE6D0
L_801BE6D4:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801BE6D4
  c->r[27]=c->r[22]|c->r[22]; // 801BE6D8
  c->r[25]=c->r[22]|c->r[22]; // 801BE6DC
  c->r[19]=0u+0x00000000u; // 801BE6E0
  c->r[23]=c->r[0]+c->r[31]; // 801BE6E4
  c->r[26]=0u+0x00000000u; // 801BE6E8
  c->r[28]=c->r[23]|c->r[23]; // 801BE6EC
  goto L_801BE85C; // 801BE6F0
L_801BE6F4:;
  c->r[8]=R32(c->r[28]+0x00000000u); // 801BE6F4
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; cr0(c,c->r[0]); // 801BE6F8
  if (crb(c,2)) { goto L_801BE7CC; } // 801BE6FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE700
  c->r[5]=R32(c->r[17]+0x00000000u); // 801BE704
  c->r[12]=R32(c->r[30]+c->r[0]); // 801BE708
  c->r[3]=c->r[27]|c->r[27]; // 801BE70C
  W32(c->r[1]+0x00000018u,c->r[5]); // 801BE710
  c->r[5]=rotl(c->r[8],3)&0x00000001u; // 801BE714
  c->r[4]=c->r[15]|c->r[15]; // 801BE718
  c->r[6]=c->r[16]|c->r[16]; // 801BE71C
  c->r[7]=c->r[1]+0x00000018u; // 801BE720
  c->r[8]=c->r[21]+c->r[19]; // 801BE724
  c->ctr=c->r[12]; // 801BE728
  if (true) { c->lr=0x801BE730u; dispatch(c,c->ctr); } // 801BE72C
  c->r[4]=R32(c->r[17]+0x00000000u); // 801BE730
  c->r[3]=c->r[17]|c->r[17]; // 801BE734
  c->r[4]=c->r[4]+0x0000004Cu; // 801BE738
  c->r[0]=R32(c->r[4]+0x00000024u); // 801BE73C
  c->r[0]=c->r[4]+c->r[0]; // 801BE740
  c->r[0]=c->r[0]+c->r[31]; // 801BE744
  c->r[4]=c->r[0]+c->r[26]; // 801BE748
  c->r[4]=R32(c->r[4]+0x00000004u); // 801BE74C
  c->lr=0x801BE754u; f_801A9AA4(c); // 801BE750
  c->r[0]=0u-c->r[3]; // 801BE754
  c->r[0]=c->r[0]|c->r[3]; // 801BE758
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801BE75C
  if (crb(c,2)) { goto L_801BE788; } // 801BE760
  c->r[0]=R32(c->r[3]+0x00000060u); // 801BE764
  cmps(c,0,(int32_t)c->r[0],0); // 801BE768
  if (crb(c,2)) { goto L_801BE778; } // 801BE76C
  c->r[0]=c->r[3]+c->r[0]; // 801BE770
  goto L_801BE77C; // 801BE774
L_801BE778:;
  c->r[0]=0u+0x00000000u; // 801BE778
L_801BE77C:;
  c->r[3]=0u-c->r[0]; // 801BE77C
  c->r[0]=c->r[3]|c->r[0]; // 801BE780
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801BE784
L_801BE788:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BE788
  if (crb(c,2)) { goto L_801BE848; } // 801BE78C
  c->r[0]=c->r[21]+c->r[19]; // 801BE790
  c->r[4]=c->r[1]+0x00000020u; // 801BE794
  c->r[24]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BE798
  c->r[3]=c->r[15]+c->r[24]; // 801BE79C
  c->lr=0x801BE7A4u; f_800EC358(c); // 801BE7A0
  cmpu(c,0,c->r[3],0x00000001u); // 801BE7A4
  if (!crb(c,2)) { goto L_801BE7C0; } // 801BE7A8
  c->r[3]=c->r[25]|c->r[25]; // 801BE7AC
  c->r[4]=c->r[1]+0x00000020u; // 801BE7B0
  c->r[5]=c->r[29]+c->r[24]; // 801BE7B4
  c->lr=0x801BE7BCu; f_800EC0F4(c); // 801BE7B8
  goto L_801BE848; // 801BE7BC
L_801BE7C0:;
  c->r[3]=c->r[29]+c->r[24]; // 801BE7C0
  c->lr=0x801BE7C8u; f_800EC094(c); // 801BE7C4
  goto L_801BE848; // 801BE7C8
L_801BE7CC:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 801BE7CC
  c->r[3]=c->r[3]+0x0000004Cu; // 801BE7D0
  c->r[0]=R32(c->r[3]+0x00000024u); // 801BE7D4
  c->r[0]=c->r[3]+c->r[0]; // 801BE7D8
  c->r[0]=c->r[0]+c->r[31]; // 801BE7DC
  c->r[3]=c->r[0]+c->r[26]; // 801BE7E0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801BE7E4
  cmps(c,0,(int32_t)c->r[4],0); // 801BE7E8
  if (crb(c,0)) { goto L_801BE848; } // 801BE7EC
  c->r[3]=c->r[17]|c->r[17]; // 801BE7F0
  c->lr=0x801BE7F8u; f_801A9AA4(c); // 801BE7F4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE7F8
  if (crb(c,2)) { goto L_801BE848; } // 801BE7FC
  c->r[0]=R32(c->r[3]+0x00000014u); // 801BE800
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801BE804
  if (crb(c,2)) { goto L_801BE848; } // 801BE808
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801BE80C
  c->r[3]=c->r[17]|c->r[17]; // 801BE810
  c->lr=0x801BE818u; f_801A9AA4(c); // 801BE814
  cmps(c,0,(int32_t)c->r[3],0); // 801BE818
  if (crb(c,2)) { goto L_801BE828; } // 801BE81C
  c->r[3]=R32(c->r[3]+0x00000010u); // 801BE820
  goto L_801BE82C; // 801BE824
L_801BE828:;
  c->r[3]=0u+0x00000000u; // 801BE828
L_801BE82C:;
  c->r[0]=c->r[21]+c->r[19]; // 801BE82C
  c->r[5]=c->r[27]|c->r[27]; // 801BE830
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801BE834
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BE838
  c->r[3]=c->r[29]+c->r[3]; // 801BE83C
  c->r[4]=c->r[15]+c->r[0]; // 801BE840
  c->lr=0x801BE848u; f_800EC0F4(c); // 801BE844
L_801BE848:;
  c->r[28]=c->r[28]+0x00000004u; // 801BE848
  c->r[27]=c->r[27]+0x00000030u; // 801BE84C
  c->r[26]=c->r[26]+0x00000004u; // 801BE850
  c->r[25]=c->r[25]+0x00000030u; // 801BE854
  c->r[19]=c->r[19]+0x00000001u; // 801BE858
L_801BE85C:;
  cmpu(c,0,c->r[19],c->r[20]); // 801BE85C
  if (crb(c,0)) { IRQCHK(c); goto L_801BE6F4; } // 801BE860
  c->r[3]=R32(c->r[1]+0x00000008u); // 801BE864
  c->r[4]=c->r[22]|c->r[22]; // 801BE868
  c->r[5]=R32(c->r[1]+0x00000054u); // 801BE86C
  c->lr=0x801BE874u; f_8017B210(c); // 801BE870
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BE874
  cmps(c,0,(int32_t)c->r[0],0); // 801BE878
  if (crb(c,2)) { goto L_801BE924; } // 801BE87C
  c->r[24]=R32(c->r[1]+0x0000006Cu); // 801BE880
  c->r[19]=c->r[22]|c->r[22]; // 801BE884
  c->r[25]=c->r[14]|c->r[14]; // 801BE888
  c->r[26]=c->r[14]|c->r[14]; // 801BE88C
  c->r[27]=0u+0x00000000u; // 801BE890
  goto L_801BE91C; // 801BE894
L_801BE898:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 801BE898
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 801BE89C
  if (crb(c,2)) { goto L_801BE8D4; } // 801BE8A0
  cmps(c,0,(int32_t)c->r[18],0); // 801BE8A4
  if (crb(c,2)) { goto L_801BE8C4; } // 801BE8A8
  c->r[3]=c->r[19]|c->r[19]; // 801BE8AC
  c->r[4]=c->r[25]|c->r[25]; // 801BE8B0
  c->lr=0x801BE8B8u; f_800EC0C0(c); // 801BE8B4
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[31]);} // 801BE8B8
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[31]);} // 801BE8BC
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[31]);} // 801BE8C0
L_801BE8C4:;
  c->r[3]=c->r[24]|c->r[24]; // 801BE8C4
  c->r[4]=c->r[19]|c->r[19]; // 801BE8C8
  c->lr=0x801BE8D0u; f_801DB7A4(c); // 801BE8CC
  goto L_801BE904; // 801BE8D0
L_801BE8D4:;
  cmps(c,0,(int32_t)c->r[18],0); // 801BE8D4
  if (crb(c,2)) { goto L_801BE8F8; } // 801BE8D8
  c->r[3]=c->r[19]|c->r[19]; // 801BE8DC
  c->r[4]=c->r[25]|c->r[25]; // 801BE8E0
  c->lr=0x801BE8E8u; f_800EC450(c); // 801BE8E4
  c->r[3]=c->r[24]|c->r[24]; // 801BE8E8
  c->r[4]=c->r[26]|c->r[26]; // 801BE8EC
  c->lr=0x801BE8F4u; f_801DB7A4(c); // 801BE8F0
  goto L_801BE904; // 801BE8F4
L_801BE8F8:;
  c->r[3]=c->r[24]|c->r[24]; // 801BE8F8
  c->r[4]=c->r[19]|c->r[19]; // 801BE8FC
  c->lr=0x801BE904u; f_801DB7D8(c); // 801BE900
L_801BE904:;
  c->r[19]=c->r[19]+0x00000030u; // 801BE904
  c->r[24]=c->r[24]+0x00000024u; // 801BE908
  c->r[23]=c->r[23]+0x00000004u; // 801BE90C
  c->r[25]=c->r[25]+0x00000030u; // 801BE910
  c->r[26]=c->r[26]+0x00000030u; // 801BE914
  c->r[27]=c->r[27]+0x00000001u; // 801BE918
L_801BE91C:;
  cmpu(c,0,c->r[27],c->r[20]); // 801BE91C
  if (crb(c,0)) { IRQCHK(c); goto L_801BE898; } // 801BE920
L_801BE924:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BE924
  cmps(c,0,(int32_t)c->r[0],0); // 801BE928
  if (crb(c,2)) { goto L_801BE958; } // 801BE92C
  c->r[3]=R32(c->r[1]+0x00000078u); // 801BE930
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 801BE934
  c->r[5]=R32(c->r[1]+0x00000050u); // 801BE938
  c->lr=0x801BE940u; f_8017B210(c); // 801BE93C
  cmps(c,0,(int32_t)c->r[18],0); // 801BE940
  if (crb(c,2)) { goto L_801BE958; } // 801BE944
  c->r[3]=R32(c->r[1]+0x00000074u); // 801BE948
  c->r[4]=c->r[14]|c->r[14]; // 801BE94C
  c->r[5]=R32(c->r[1]+0x00000054u); // 801BE950
  c->lr=0x801BE958u; f_8017B210(c); // 801BE954
L_801BE958:;
  c->r[3]=R32(c->r[1]+0x00000070u); // 801BE958
  c->r[4]=c->r[22]|c->r[22]; // 801BE95C
  c->r[0]=R32(c->r[1]+0x00000068u); // 801BE960
  c->r[6]=c->r[14]|c->r[14]; // 801BE964
  c->r[22]=R32(c->r[1]+0x00000064u); // 801BE968
  c->r[21]=c->r[21]+0x00000028u; // 801BE96C
  W32(c->r[1]+0x00000068u,c->r[3]); // 801BE970
  c->r[31]=c->r[31]+0x000000A0u; // 801BE974
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 801BE978
  W32(c->r[1]+0x00000070u,c->r[0]); // 801BE97C
  c->r[3]=c->r[3]+0x00000780u; // 801BE980
  c->r[14]=R32(c->r[1]+0x0000005Cu); // 801BE984
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 801BE988
  c->r[3]=R32(c->r[1]+0x00000008u); // 801BE98C
  c->r[5]=R32(c->r[1]+0x0000006Cu); // 801BE990
  c->r[3]=c->r[3]+0x00000780u; // 801BE994
  c->r[0]=R32(c->r[1]+0x00000060u); // 801BE998
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BE99C
  c->r[3]=R32(c->r[1]+0x00000078u); // 801BE9A0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BE9A4
  c->r[3]=c->r[3]+0x000005A0u; // 801BE9A8
  W32(c->r[1]+0x00000078u,c->r[3]); // 801BE9AC
  c->r[3]=R32(c->r[1]+0x00000074u); // 801BE9B0
  W32(c->r[1]+0x00000064u,c->r[4]); // 801BE9B4
  c->r[3]=c->r[3]+0x00000780u; // 801BE9B8
  W32(c->r[1]+0x00000060u,c->r[5]); // 801BE9BC
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 801BE9C0
  W32(c->r[1]+0x00000074u,c->r[3]); // 801BE9C4
L_801BE9C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE9C8
  cmpu(c,0,c->r[21],c->r[0]); // 801BE9CC
  if (crb(c,0)) { IRQCHK(c); goto L_801BE60C; } // 801BE9D0
L_801BE9D4:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 801BE9D4
  c->r[11]=c->r[1]+0x000000D0u; // 801BE9D8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 801BE9DC
  c->lr=0x801BE9E4u; f_80109F50(c); // 801BE9E0
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801BE9E4
  c->lr=c->r[0]; // 801BE9E8
  c->r[1]=c->r[1]+0x000000E0u; // 801BE9EC
  return; // 801BE9F0
}

// CalcTexMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4FlagQ44nw4r3g3d13TexSrtTypedef13TexMatrixMode
void f_801BE9F4(Ctx* __restrict c) {
  trace_call(0x801BE9F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE9F4
  c->r[0]=c->lr; // 801BE9F8
  cmps(c,0,(int32_t)c->r[7],0); // 801BE9FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEA00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEA04
  c->r[31]=c->r[4]|c->r[4]; // 801BEA08
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BEA0C
  c->r[30]=c->r[3]|c->r[3]; // 801BEA10
  if (!crb(c,2)) { goto L_801BEA28; } // 801BEA14
  c->lr=0x801BEA1Cu; f_801C3058(c); // 801BEA18
  c->r[0]=cntlz(c->r[3]); // 801BEA1C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BEA20
  goto L_801BEA4C; // 801BEA24
L_801BEA28:;
  cmps(c,0,(int32_t)c->r[7],1); // 801BEA28
  if (!crb(c,2)) { goto L_801BEA40; } // 801BEA2C
  c->lr=0x801BEA34u; f_801C3BF8(c); // 801BEA30
  c->r[0]=cntlz(c->r[3]); // 801BEA34
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BEA38
  goto L_801BEA4C; // 801BEA3C
L_801BEA40:;
  c->lr=0x801BEA44u; f_801C485C(c); // 801BEA40
  c->r[0]=cntlz(c->r[3]); // 801BEA44
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BEA48
L_801BEA4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BEA4C
  if (crb(c,2)) { goto L_801BEA64; } // 801BEA50
  cmps(c,0,(int32_t)c->r[31],0); // 801BEA54
  if (crb(c,2)) { goto L_801BEA64; } // 801BEA58
  c->r[3]=c->r[30]|c->r[30]; // 801BEA5C
  c->lr=0x801BEA64u; f_800EC094(c); // 801BEA60
L_801BEA64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEA64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEA68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEA6C
  c->lr=c->r[0]; // 801BEA70
  c->r[1]=c->r[1]+0x00000010u; // 801BEA74
  return; // 801BEA78
}

// CalcTexMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_801BEA7C(Ctx* __restrict c) {
  trace_call(0x801BEA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEA7C
  c->r[0]=c->lr; // 801BEA80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEA84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEA88
  c->r[31]=c->r[4]|c->r[4]; // 801BEA8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BEA90
  c->r[30]=c->r[3]|c->r[3]; // 801BEA94
  c->lr=0x801BEA9Cu; f_801C2304(c); // 801BEA98
  c->r[0]=cntlz(c->r[3]); // 801BEA9C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801BEAA0
  if (crb(c,2)) { goto L_801BEAB8; } // 801BEAA4
  cmps(c,0,(int32_t)c->r[31],0); // 801BEAA8
  if (crb(c,2)) { goto L_801BEAB8; } // 801BEAAC
  c->r[3]=c->r[30]|c->r[30]; // 801BEAB0
  c->lr=0x801BEAB8u; f_800EC094(c); // 801BEAB4
L_801BEAB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEAB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEABC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEAC0
  c->lr=c->r[0]; // 801BEAC4
  c->r[1]=c->r[1]+0x00000010u; // 801BEAC8
  return; // 801BEACC
}

// GetScaleTemporary__Q44nw4r3g3d6detail7workmemFv
void f_801BEAD0(Ctx* __restrict c) {
  trace_call(0x801BEAD0u);
  c->r[3]=0u+0x80350000u; // 801BEAD0
  c->r[3]=c->r[3]+0xFFFFE900u; // 801BEAD4
  return; // 801BEAD8
}

// GetMtxIDTemporary__Q44nw4r3g3d6detail7workmemFv
void f_801BEADC(Ctx* __restrict c) {
  trace_call(0x801BEADCu);
  c->r[3]=0u+0x80350000u; // 801BEADC
  c->r[3]=c->r[3]+0xFFFFE900u; // 801BEAE0
  c->r[3]=c->r[3]+0x00006000u; // 801BEAE4
  return; // 801BEAE8
}

// GetMdlZTemporary__Q44nw4r3g3d6detail7workmemFv
void f_801BEAEC(Ctx* __restrict c) {
  trace_call(0x801BEAECu);
  c->r[3]=0u+0x80350000u; // 801BEAEC
  c->r[3]=c->r[3]+0xFFFFE900u; // 801BEAF0
  return; // 801BEAF4
}

// GetSkinningMtxTemporary__Q44nw4r3g3d6detail7workmemFv
void f_801BEAF8(Ctx* __restrict c) {
  trace_call(0x801BEAF8u);
  c->r[3]=0u+0x80350000u; // 801BEAF8
  c->r[3]=c->r[3]+0xFFFFE900u; // 801BEAFC
  return; // 801BEB00
}

// GetBillboardMtxTemporary__Q44nw4r3g3d6detail7workmemFv
void f_801BEB04(Ctx* __restrict c) {
  trace_call(0x801BEB04u);
  c->r[3]=0u+0x80350000u; // 801BEB04
  c->r[3]=c->r[3]+0xFFFFE900u; // 801BEB08
  return; // 801BEB0C
}

// CalcWorld__Q24nw4r3g3dFPQ34nw4r4math5MTX34PUlPCUcPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjChrPQ34nw4r3g3d16FuncObjCalcWorldUl
void f_801BEB10(Ctx* __restrict c) {
  trace_call(0x801BEB10u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEB10
  c->r[0]=c->lr; // 801BEB14
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801BEB18
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801BEB1C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801BEB20
  c->r[11]=c->r[1]+0x000000C0u; // 801BEB24
  c->lr=0x801BEB2Cu; f_80109F04(c); // 801BEB28
  cmps(c,0,(int32_t)c->r[5],0); // 801BEB2C
  c->r[18]=c->r[3]|c->r[3]; // 801BEB30
  c->r[19]=c->r[4]|c->r[4]; // 801BEB34
  c->r[20]=c->r[5]|c->r[5]; // 801BEB38
  c->r[17]=c->r[6]|c->r[6]; // 801BEB3C
  c->r[21]=c->r[7]|c->r[7]; // 801BEB40
  c->r[14]=c->r[8]|c->r[8]; // 801BEB44
  c->r[22]=c->r[9]|c->r[9]; // 801BEB48
  c->r[15]=c->r[10]|c->r[10]; // 801BEB4C
  c->r[31]=0u+0x00000000u; // 801BEB50
  if (!crb(c,2)) { goto L_801BEB74; } // 801BEB54
  c->r[4]=0u+0x802A0000u; // 801BEB58
  c->r[3]=c->r[21]|c->r[21]; // 801BEB5C
  c->r[4]=c->r[4]+0x00001430u; // 801BEB60
  c->lr=0x801BEB68u; f_801A9978(c); // 801BEB64
  cmps(c,0,(int32_t)c->r[3],0); // 801BEB68
  c->r[20]=c->r[3]|c->r[3]; // 801BEB6C
  if (crb(c,2)) { goto L_801BF0B4; } // 801BEB70
L_801BEB74:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 801BEB74
  c->r[0]=rotl(c->r[15],5)&0x00000001u; // 801BEB78
  W32(c->r[1]+0x00000074u,c->r[0]); // 801BEB7C
  c->r[3]=c->r[3]+0x0000004Cu; // 801BEB80
  c->r[3]=R32(c->r[3]+0x00000008u); // 801BEB84
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801BEB88
  c->r[0]=cntlz(c->r[0]); // 801BEB8C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BEB90
  W8(c->r[1]+0x00000070u,c->r[0]); // 801BEB94
  c->lr=0x801BEB9Cu; f_801BEAD0(c); // 801BEB98
  {uint32_t ea=c->r[2]+0xFFFF9C20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BEB9C
  c->r[16]=c->r[3]|c->r[3]; // 801BEBA0
  c->r[4]=c->r[18]|c->r[18]; // 801BEBA4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801BEBA8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801BEBAC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801BEBB0
  c->r[3]=c->r[17]|c->r[17]; // 801BEBB4
  c->lr=0x801BEBBCu; f_800EC0C0(c); // 801BEBB8
  c->lr=0x801BEBC0u; f_801BEADC(c); // 801BEBBC
  W32(c->r[19]+0x00000000u,c->r[15]); // 801BEBC0
  c->r[30]=c->r[3]|c->r[3]; // 801BEBC4
  c->r[29]=0u+0x00000000u; // 801BEBC8
  c->r[17]=0u+0x00000000u; // 801BEBCC
  goto L_801BF00C; // 801BEBD0
L_801BEBD4:;
  cmpu(c,0,c->r[0],0x00000002u); // 801BEBD4
  if (!crb(c,2)) { goto L_801BEF94; } // 801BEBD8
  c->r[0]=R8(c->r[20]+0x00000001u); // 801BEBDC
  c->r[3]=c->r[21]|c->r[21]; // 801BEBE0
  c->r[4]=R8(c->r[20]+0x00000003u); // 801BEBE4
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BEBE8
  c->r[6]=R8(c->r[20]+0x00000002u); // 801BEBEC
  c->r[0]=R8(c->r[20]+0x00000004u); // 801BEBF0
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 801BEBF4
  c->r[28]=c->r[7]+c->r[6]; // 801BEBF8
  c->r[4]=c->r[28]|c->r[28]; // 801BEBFC
  c->r[24]=c->r[5]+c->r[0]; // 801BEC00
  c->lr=0x801BEC08u; f_801A9AA4(c); // 801BEC04
  cmps(c,0,(int32_t)c->r[3],0); // 801BEC08
  W32(c->r[1]+0x00000014u,c->r[3]); // 801BEC0C
  if (crb(c,2)) { goto L_801BEC1C; } // 801BEC10
  c->r[15]=R32(c->r[3]+0x00000010u); // 801BEC14
  goto L_801BEC20; // 801BEC18
L_801BEC1C:;
  c->r[15]=0u+0x00000000u; // 801BEC1C
L_801BEC20:;
  W32(c->r[30]+c->r[17],c->r[15]); // 801BEC20
  c->r[0]=rotl(c->r[24],2)&0xFFFFFFFCu; // 801BEC24
  c->r[3]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 801BEC28
  cmps(c,0,(int32_t)c->r[14],0); // 801BEC2C
  c->r[23]=R32(c->r[19]+c->r[0]); // 801BEC30
  c->r[29]=c->r[29]+0x00000001u; // 801BEC34
  c->r[17]=c->r[17]+0x00000004u; // 801BEC38
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)12); // 801BEC3C
  c->r[27]=c->r[18]+c->r[3]; // 801BEC40
  c->r[3]=(uint32_t)((int32_t)c->r[24]*(int32_t)48); // 801BEC44
  c->r[26]=c->r[16]+c->r[0]; // 801BEC48
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)12); // 801BEC4C
  c->r[25]=c->r[18]+c->r[3]; // 801BEC50
  c->r[24]=c->r[16]+c->r[0]; // 801BEC54
  if (crb(c,2)) { goto L_801BEC90; } // 801BEC58
  c->r[5]=R32(c->r[1]+0x00000014u); // 801BEC5C
  c->r[3]=c->r[14]|c->r[14]; // 801BEC60
  c->r[4]=c->r[1]+0x00000024u; // 801BEC64
  cmps(c,0,(int32_t)c->r[5],0); // 801BEC68
  if (crb(c,2)) { goto L_801BEC78; } // 801BEC6C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801BEC70
  goto L_801BEC7C; // 801BEC74
L_801BEC78:;
  c->r[5]=0u+0x00000000u; // 801BEC78
L_801BEC7C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BEC7C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801BEC80
  c->ctr=c->r[12]; // 801BEC84
  if (true) { c->lr=0x801BEC8Cu; dispatch(c,c->ctr); } // 801BEC88
  c->r[31]=c->r[3]|c->r[3]; // 801BEC8C
L_801BEC90:;
  cmps(c,0,(int32_t)c->r[14],0); // 801BEC90
  if (crb(c,2)) { goto L_801BECA4; } // 801BEC94
  c->r[0]=R32(c->r[31]+0x00000000u); // 801BEC98
  cmps(c,0,(int32_t)c->r[0],0); // 801BEC9C
  if (!crb(c,2)) { goto L_801BECB4; } // 801BECA0
L_801BECA4:;
  c->r[3]=c->r[1]+0x00000014u; // 801BECA4
  c->r[4]=c->r[1]+0x00000024u; // 801BECA8
  c->lr=0x801BECB0u; f_801AD810(c); // 801BECAC
  c->r[31]=c->r[1]+0x00000024u; // 801BECB0
L_801BECB4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BECB4
  if (crb(c,2)) { goto L_801BED88; } // 801BECB8
  c->r[0]=R32(c->r[1]+0x00000074u); // 801BECBC
  cmps(c,0,(int32_t)c->r[0],0); // 801BECC0
  if (crb(c,2)) { goto L_801BED88; } // 801BECC4
  c->r[0]=c->r[1]+0x00000024u; // 801BECC8
  cmpu(c,0,c->r[31],c->r[0]); // 801BECCC
  if (crb(c,2)) { goto L_801BED70; } // 801BECD0
  c->r[0]=R32(c->r[31]+0x00000000u); // 801BECD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BECD8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801BECDC
  c->r[0]=R32(c->r[31]+0x00000008u); // 801BECE0
  W32(c->r[1]+0x00000028u,c->r[3]); // 801BECE4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BECE8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801BECEC
  W32(c->r[1]+0x00000030u,c->r[0]); // 801BECF0
  c->r[3]=R32(c->r[31]+0x00000010u); // 801BECF4
  c->r[0]=R32(c->r[31]+0x00000014u); // 801BECF8
  W32(c->r[1]+0x00000034u,c->r[3]); // 801BECFC
  W32(c->r[1]+0x00000038u,c->r[0]); // 801BED00
  c->r[0]=R32(c->r[31]+0x00000018u); // 801BED04
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801BED08
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801BED0C
  c->r[0]=R32(c->r[31]+0x00000020u); // 801BED10
  W32(c->r[1]+0x00000040u,c->r[3]); // 801BED14
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BED18
  c->r[3]=R32(c->r[31]+0x00000024u); // 801BED1C
  c->r[0]=R32(c->r[31]+0x00000028u); // 801BED20
  W32(c->r[1]+0x00000048u,c->r[3]); // 801BED24
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801BED28
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801BED2C
  c->r[0]=R32(c->r[31]+0x00000030u); // 801BED30
  W32(c->r[1]+0x00000050u,c->r[3]); // 801BED34
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BED38
  c->r[3]=R32(c->r[31]+0x00000034u); // 801BED3C
  c->r[0]=R32(c->r[31]+0x00000038u); // 801BED40
  W32(c->r[1]+0x00000058u,c->r[3]); // 801BED44
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801BED48
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 801BED4C
  c->r[0]=R32(c->r[31]+0x00000040u); // 801BED50
  W32(c->r[1]+0x00000060u,c->r[3]); // 801BED54
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BED58
  c->r[3]=R32(c->r[31]+0x00000044u); // 801BED5C
  c->r[0]=R32(c->r[31]+0x00000048u); // 801BED60
  c->r[31]=c->r[1]+0x00000024u; // 801BED64
  W32(c->r[1]+0x00000068u,c->r[3]); // 801BED68
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BED6C
L_801BED70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BED70
  c->r[3]=c->r[1]+0x00000014u; // 801BED74
  c->r[4]=c->r[1]+0x00000024u; // 801BED78
  c->r[0]=c->r[0]|0x00000200u; // 801BED7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BED80
  c->lr=0x801BED88u; f_801AD674(c); // 801BED84
L_801BED88:;
  cmps(c,0,(int32_t)c->r[22],0); // 801BED88
  if (crb(c,2)) { goto L_801BEE78; } // 801BED8C
  c->r[0]=c->r[1]+0x00000024u; // 801BED90
  cmpu(c,0,c->r[31],c->r[0]); // 801BED94
  if (crb(c,2)) { goto L_801BEE38; } // 801BED98
  c->r[0]=R32(c->r[31]+0x00000000u); // 801BED9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEDA0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801BEDA4
  c->r[0]=R32(c->r[31]+0x00000008u); // 801BEDA8
  W32(c->r[1]+0x00000028u,c->r[3]); // 801BEDAC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BEDB0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801BEDB4
  W32(c->r[1]+0x00000030u,c->r[0]); // 801BEDB8
  c->r[3]=R32(c->r[31]+0x00000010u); // 801BEDBC
  c->r[0]=R32(c->r[31]+0x00000014u); // 801BEDC0
  W32(c->r[1]+0x00000034u,c->r[3]); // 801BEDC4
  W32(c->r[1]+0x00000038u,c->r[0]); // 801BEDC8
  c->r[0]=R32(c->r[31]+0x00000018u); // 801BEDCC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801BEDD0
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801BEDD4
  c->r[0]=R32(c->r[31]+0x00000020u); // 801BEDD8
  W32(c->r[1]+0x00000040u,c->r[3]); // 801BEDDC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BEDE0
  c->r[3]=R32(c->r[31]+0x00000024u); // 801BEDE4
  c->r[0]=R32(c->r[31]+0x00000028u); // 801BEDE8
  W32(c->r[1]+0x00000048u,c->r[3]); // 801BEDEC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801BEDF0
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801BEDF4
  c->r[0]=R32(c->r[31]+0x00000030u); // 801BEDF8
  W32(c->r[1]+0x00000050u,c->r[3]); // 801BEDFC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BEE00
  c->r[3]=R32(c->r[31]+0x00000034u); // 801BEE04
  c->r[0]=R32(c->r[31]+0x00000038u); // 801BEE08
  W32(c->r[1]+0x00000058u,c->r[3]); // 801BEE0C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801BEE10
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 801BEE14
  c->r[0]=R32(c->r[31]+0x00000040u); // 801BEE18
  W32(c->r[1]+0x00000060u,c->r[3]); // 801BEE1C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BEE20
  c->r[3]=R32(c->r[31]+0x00000044u); // 801BEE24
  c->r[0]=R32(c->r[31]+0x00000048u); // 801BEE28
  c->r[31]=c->r[1]+0x00000024u; // 801BEE2C
  W32(c->r[1]+0x00000068u,c->r[3]); // 801BEE30
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BEE34
L_801BEE38:;
  c->r[0]=R16(c->r[22]+0x00000006u); // 801BEE38
  c->r[3]=R32(c->r[21]+0x00000000u); // 801BEE3C
  cmpu(c,0,c->r[28],c->r[0]); // 801BEE40
  if (!crb(c,2)) { goto L_801BEE78; } // 801BEE44
  c->r[0]=R8(c->r[22]+0x00000004u); // 801BEE48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BEE4C
  if (crb(c,2)) { goto L_801BEE78; } // 801BEE50
  W32(c->r[1]+0x00000010u,c->r[3]); // 801BEE54
  c->r[6]=c->r[22]|c->r[22]; // 801BEE58
  c->r[4]=c->r[1]+0x00000024u; // 801BEE5C
  c->r[5]=c->r[1]+0x00000010u; // 801BEE60
  c->r[3]=R32(c->r[22]+0x00000000u); // 801BEE64
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BEE68
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BEE6C
  c->ctr=c->r[12]; // 801BEE70
  if (true) { c->lr=0x801BEE78u; dispatch(c,c->ctr); } // 801BEE74
L_801BEE78:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 801BEE78
  cmps(c,0,(int32_t)c->r[0],0); // 801BEE7C
  if (crb(c,2)) { goto L_801BEEB0; } // 801BEE80
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 801BEE84
  c->r[3]=c->r[27]|c->r[27]; // 801BEE88
  c->r[15]=c->r[19]+c->r[0]; // 801BEE8C
  c->r[4]=c->r[26]|c->r[26]; // 801BEE90
  c->r[5]=c->r[25]|c->r[25]; // 801BEE94
  c->r[6]=c->r[24]|c->r[24]; // 801BEE98
  c->r[7]=c->r[23]|c->r[23]; // 801BEE9C
  c->r[8]=c->r[31]|c->r[31]; // 801BEEA0
  c->lr=0x801BEEA8u; f_801C3C94(c); // 801BEEA4
  W32(c->r[15]+0x00000000u,c->r[3]); // 801BEEA8
  goto L_801BEF10; // 801BEEAC
L_801BEEB0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801BEEB0
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801BEEB4
  if (crb(c,2)) { goto L_801BEEE8; } // 801BEEB8
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 801BEEBC
  c->r[3]=c->r[27]|c->r[27]; // 801BEEC0
  c->r[15]=c->r[19]+c->r[0]; // 801BEEC4
  c->r[4]=c->r[26]|c->r[26]; // 801BEEC8
  c->r[5]=c->r[25]|c->r[25]; // 801BEECC
  c->r[6]=c->r[24]|c->r[24]; // 801BEED0
  c->r[7]=c->r[23]|c->r[23]; // 801BEED4
  c->r[8]=c->r[31]|c->r[31]; // 801BEED8
  c->lr=0x801BEEE0u; f_801C30F4(c); // 801BEEDC
  W32(c->r[15]+0x00000000u,c->r[3]); // 801BEEE0
  goto L_801BEF10; // 801BEEE4
L_801BEEE8:;
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 801BEEE8
  c->r[3]=c->r[27]|c->r[27]; // 801BEEEC
  c->r[15]=c->r[19]+c->r[0]; // 801BEEF0
  c->r[4]=c->r[26]|c->r[26]; // 801BEEF4
  c->r[5]=c->r[25]|c->r[25]; // 801BEEF8
  c->r[6]=c->r[24]|c->r[24]; // 801BEEFC
  c->r[7]=c->r[23]|c->r[23]; // 801BEF00
  c->r[8]=c->r[31]|c->r[31]; // 801BEF04
  c->lr=0x801BEF0Cu; f_801C2460(c); // 801BEF08
  W32(c->r[15]+0x00000000u,c->r[3]); // 801BEF0C
L_801BEF10:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 801BEF10
  cmps(c,0,(int32_t)c->r[3],0); // 801BEF14
  if (crb(c,2)) { goto L_801BEF24; } // 801BEF18
  c->r[3]=R32(c->r[3]+0x00000018u); // 801BEF1C
  goto L_801BEF28; // 801BEF20
L_801BEF24:;
  c->r[3]=0u+0x00000000u; // 801BEF24
L_801BEF28:;
  c->r[0]=R32(c->r[15]+0x00000000u); // 801BEF28
  cmps(c,0,(int32_t)c->r[22],0); // 801BEF2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 801BEF30
  c->r[0]=c->r[0]|c->r[3]; // 801BEF34
  W32(c->r[15]+0x00000000u,c->r[0]); // 801BEF38
  if (crb(c,2)) { goto L_801BEF8C; } // 801BEF3C
  c->r[0]=R16(c->r[22]+0x00000006u); // 801BEF40
  c->r[3]=R32(c->r[21]+0x00000000u); // 801BEF44
  cmpu(c,0,c->r[28],c->r[0]); // 801BEF48
  if (!crb(c,2)) { goto L_801BEF8C; } // 801BEF4C
  c->r[0]=R8(c->r[22]+0x00000004u); // 801BEF50
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BEF54
  if (crb(c,2)) { goto L_801BEF8C; } // 801BEF58
  W32(c->r[1]+0x00000018u,c->r[27]); // 801BEF5C
  c->r[6]=c->r[22]|c->r[22]; // 801BEF60
  c->r[4]=c->r[1]+0x00000018u; // 801BEF64
  c->r[5]=c->r[1]+0x0000000Cu; // 801BEF68
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 801BEF6C
  W32(c->r[1]+0x00000020u,c->r[15]); // 801BEF70
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BEF74
  c->r[3]=R32(c->r[22]+0x00000000u); // 801BEF78
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BEF7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BEF80
  c->ctr=c->r[12]; // 801BEF84
  if (true) { c->lr=0x801BEF8Cu; dispatch(c,c->ctr); } // 801BEF88
L_801BEF8C:;
  c->r[20]=c->r[20]+0x00000005u; // 801BEF8C
  goto L_801BF00C; // 801BEF90
L_801BEF94:;
  c->r[0]=R8(c->r[20]+0x00000001u); // 801BEF94
  c->r[29]=c->r[29]+0x00000001u; // 801BEF98
  c->r[3]=R8(c->r[20]+0x00000003u); // 801BEF9C
  c->r[5]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BEFA0
  c->r[4]=R8(c->r[20]+0x00000002u); // 801BEFA4
  c->r[0]=R8(c->r[20]+0x00000004u); // 801BEFA8
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BEFAC
  c->r[15]=c->r[5]+c->r[4]; // 801BEFB0
  c->r[23]=c->r[3]+c->r[0]; // 801BEFB4
  W32(c->r[30]+c->r[17],c->r[15]); // 801BEFB8
  c->r[4]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801BEFBC
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 801BEFC0
  c->r[4]=R32(c->r[19]+c->r[4]); // 801BEFC4
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)48); // 801BEFC8
  c->r[17]=c->r[17]+0x00000004u; // 801BEFCC
  W32(c->r[19]+c->r[0],c->r[4]); // 801BEFD0
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 801BEFD4
  c->r[3]=c->r[18]+c->r[3]; // 801BEFD8
  c->r[4]=c->r[18]+c->r[0]; // 801BEFDC
  c->lr=0x801BEFE4u; f_800EC0C0(c); // 801BEFE0
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)12); // 801BEFE4
  c->r[20]=c->r[20]+0x00000005u; // 801BEFE8
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)12); // 801BEFEC
  {uint32_t ea=c->r[3]+c->r[16]; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 801BEFF0
  c->r[4]=c->r[16]+c->r[0]; // 801BEFF4
  {uint32_t ea=c->r[16]+c->r[0]; WF32(ea,c->f[0]);} // 801BEFF8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BEFFC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 801BF000
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF004
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801BF008
L_801BF00C:;
  c->r[0]=R8(c->r[20]+0x00000000u); // 801BF00C
  cmpu(c,0,c->r[0],0x00000001u); // 801BF010
  if (!crb(c,2)) { IRQCHK(c); goto L_801BEBD4; } // 801BF014
  {uint32_t ea=c->r[2]+0xFFFF9C20u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BF018
  c->r[14]=0u+0x00000000u; // 801BF01C
  goto L_801BF070; // 801BF020
L_801BF024:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801BF024
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801BF028
  {uint32_t ea=c->r[16]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF02C
  c->r[3]=c->r[16]+c->r[0]; // 801BF030
  fcmp(c,0,c->f[31],c->f[0]); // 801BF034
  if (!crb(c,2)) { goto L_801BF054; } // 801BF038
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF03C
  fcmp(c,0,c->f[31],c->f[0]); // 801BF040
  if (!crb(c,2)) { goto L_801BF054; } // 801BF044
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF048
  fcmp(c,0,c->f[31],c->f[0]); // 801BF04C
  if (crb(c,2)) { goto L_801BF068; } // 801BF050
L_801BF054:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801BF054
  c->r[5]=c->r[16]+c->r[0]; // 801BF058
  c->r[3]=c->r[18]+c->r[3]; // 801BF05C
  c->r[4]=c->r[3]|c->r[3]; // 801BF060
  c->lr=0x801BF068u; f_801DB8C0(c); // 801BF064
L_801BF068:;
  c->r[30]=c->r[30]+0x00000004u; // 801BF068
  c->r[14]=c->r[14]+0x00000001u; // 801BF06C
L_801BF070:;
  cmpu(c,0,c->r[14],c->r[29]); // 801BF070
  if (crb(c,0)) { IRQCHK(c); goto L_801BF024; } // 801BF074
  cmps(c,0,(int32_t)c->r[22],0); // 801BF078
  if (crb(c,2)) { goto L_801BF0B4; } // 801BF07C
  c->r[0]=R8(c->r[22]+0x00000004u); // 801BF080
  c->r[3]=R32(c->r[21]+0x00000000u); // 801BF084
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801BF088
  if (crb(c,2)) { goto L_801BF0B4; } // 801BF08C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BF090
  c->r[4]=c->r[18]|c->r[18]; // 801BF094
  c->r[6]=c->r[22]|c->r[22]; // 801BF098
  c->r[5]=c->r[1]+0x00000008u; // 801BF09C
  c->r[3]=R32(c->r[22]+0x00000000u); // 801BF0A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BF0A4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801BF0A8
  c->ctr=c->r[12]; // 801BF0AC
  if (true) { c->lr=0x801BF0B4u; dispatch(c,c->ctr); } // 801BF0B0
L_801BF0B4:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801BF0B4
  c->r[11]=c->r[1]+0x000000C0u; // 801BF0B8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801BF0BC
  c->lr=0x801BF0C4u; f_80109F50(c); // 801BF0C0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801BF0C4
  c->lr=c->r[0]; // 801BF0C8
  c->r[1]=c->r[1]+0x000000D0u; // 801BF0CC
  return; // 801BF0D0
}

// fn_801BF0D4
void f_801BF0D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF0D4
  c->r[0]=c->lr; // 801BF0D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BF0DC
  c->r[11]=c->r[1]+0x00000030u; // 801BF0E0
  c->lr=0x801BF0E8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF0E4
  cmps(c,0,(int32_t)c->r[6],0); // 801BF0E8
  c->r[26]=c->r[3]|c->r[3]; // 801BF0EC
  c->r[27]=c->r[4]|c->r[4]; // 801BF0F0
  c->r[28]=c->r[5]|c->r[5]; // 801BF0F4
  c->r[29]=c->r[6]|c->r[6]; // 801BF0F8
  if (!crb(c,2)) { goto L_801BF118; } // 801BF0FC
  c->r[3]=c->r[28]|c->r[28]; // 801BF100
  c->r[4]=c->r[13]+0xFFFF9088u; // 801BF104
  c->lr=0x801BF10Cu; f_801A9978(c); // 801BF108
  cmps(c,0,(int32_t)c->r[3],0); // 801BF10C
  c->r[29]=c->r[3]|c->r[3]; // 801BF110
  if (crb(c,2)) { goto L_801BF398; } // 801BF114
L_801BF118:;
  c->lr=0x801BF11Cu; f_801BEAF8(c); // 801BF118
  c->r[30]=c->r[3]|c->r[3]; // 801BF11C
  c->r[31]=0u+0xF0000000u; // 801BF120
  goto L_801BF38C; // 801BF124
L_801BF128:;
  cmpu(c,0,c->r[0],0x00000003u); // 801BF128
  if (!crb(c,2)) { goto L_801BF34C; } // 801BF12C
  {uint32_t ea=c->r[2]+0xFFFF9C24u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF130
  c->r[3]=R8(c->r[29]+0x00000001u); // 801BF134
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801BF138
  c->r[0]=R8(c->r[29]+0x00000002u); // 801BF13C
  c->r[11]=R8(c->r[29]+0x00000003u); // 801BF140
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BF144
  c->r[10]=c->r[3]+c->r[0]; // 801BF148
  c->r[29]=c->r[29]+0x00000004u; // 801BF14C
  c->r[9]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801BF150
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801BF154
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801BF158
  cmpu(c,0,c->r[11],0x00000000u); // 801BF15C
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801BF160
  W32(c->r[27]+c->r[9],c->r[31]); // 801BF164
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 801BF168
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[5]=t0; c->ps1[5]=t1;} // 801BF16C
  if (!crb(c,1)) { goto L_801BF328; } // 801BF170
  c->r[0]=rotl(c->r[11],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 801BF174
  c->ctr=c->r[0]; // 801BF178
  if (crb(c,2)) { goto L_801BF298; } // 801BF17C
L_801BF180:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 801BF180
  c->r[0]=R8(c->r[29]+0x00000001u); // 801BF184
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BF188
  c->r[5]=R8(c->r[29]+0x00000003u); // 801BF18C
  c->r[0]=c->r[3]+c->r[0]; // 801BF190
  c->r[3]=R32(c->r[27]+c->r[9]); // 801BF194
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BF198
  c->r[7]=R8(c->r[29]+0x00000005u); // 801BF19C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF1A0
  c->r[8]=R8(c->r[29]+0x00000004u); // 801BF1A4
  c->r[0]=R32(c->r[27]+c->r[0]); // 801BF1A8
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 801BF1AC
  c->r[12]=c->r[30]+c->r[4]; // 801BF1B0
  c->r[6]=R8(c->r[29]+0x00000002u); // 801BF1B4
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 801BF1B8
  c->r[0]=c->r[3]&c->r[0]; // 801BF1BC
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 801BF1C0
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801BF1C4
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 801BF1C8
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801BF1CC
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 801BF1D0
  c->r[4]=c->r[7]|c->r[5]; // 801BF1D4
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 801BF1D8
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 801BF1DC
  W32(c->r[1]+0x00000008u,c->r[4]); // 801BF1E0
  W32(c->r[27]+c->r[9],c->r[0]); // 801BF1E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801BF1E8
  c->r[3]=R8(c->r[29]+0x00000006u); // 801BF1EC
  c->r[5]=R8(c->r[29]+0x00000009u); // 801BF1F0
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801BF1F4
  c->r[0]=R8(c->r[29]+0x00000007u); // 801BF1F8
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BF1FC
  c->r[8]=R8(c->r[29]+0x0000000Au); // 801BF200
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 801BF204
  c->r[0]=c->r[3]+c->r[0]; // 801BF208
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BF20C
  c->r[6]=R8(c->r[29]+0x00000008u); // 801BF210
  c->r[7]=R8(c->r[29]+0x0000000Bu); // 801BF214
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF218
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801BF21C
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801BF220
  c->r[12]=c->r[30]+c->r[4]; // 801BF224
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801BF228
  c->r[4]=c->r[7]|c->r[5]; // 801BF22C
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 801BF230
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 801BF234
  W32(c->r[1]+0x00000008u,c->r[4]); // 801BF238
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 801BF23C
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 801BF240
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 801BF244
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801BF248
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 801BF24C
  c->r[29]=c->r[29]+0x0000000Cu; // 801BF250
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 801BF254
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801BF258
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 801BF25C
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801BF260
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 801BF264
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 801BF268
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 801BF26C
  c->r[3]=R32(c->r[27]+c->r[9]); // 801BF270
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 801BF274
  c->r[0]=R32(c->r[27]+c->r[0]); // 801BF278
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 801BF27C
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 801BF280
  c->r[0]=c->r[3]&c->r[0]; // 801BF284
  W32(c->r[27]+c->r[9],c->r[0]); // 801BF288
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF180; } // 801BF28C
  c->r[11]=c->r[11]&0x00000001u; cr0(c,c->r[11]); // 801BF290
  if (crb(c,2)) { goto L_801BF328; } // 801BF294
L_801BF298:;
  c->ctr=c->r[11]; // 801BF298
L_801BF29C:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 801BF29C
  c->r[0]=R8(c->r[29]+0x00000001u); // 801BF2A0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BF2A4
  c->r[5]=R8(c->r[29]+0x00000003u); // 801BF2A8
  c->r[0]=c->r[3]+c->r[0]; // 801BF2AC
  c->r[8]=R8(c->r[29]+0x00000004u); // 801BF2B0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801BF2B4
  c->r[6]=R8(c->r[29]+0x00000002u); // 801BF2B8
  c->r[7]=R8(c->r[29]+0x00000005u); // 801BF2BC
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 801BF2C0
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801BF2C4
  c->r[3]=R32(c->r[27]+c->r[9]); // 801BF2C8
  c->r[12]=c->r[30]+c->r[4]; // 801BF2CC
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801BF2D0
  c->r[4]=c->r[7]|c->r[5]; // 801BF2D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF2D8
  W32(c->r[1]+0x00000008u,c->r[4]); // 801BF2DC
  c->r[29]=c->r[29]+0x00000006u; // 801BF2E0
  c->r[0]=R32(c->r[27]+c->r[0]); // 801BF2E4
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 801BF2E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801BF2EC
  c->r[0]=c->r[3]&c->r[0]; // 801BF2F0
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 801BF2F4
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 801BF2F8
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801BF2FC
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 801BF300
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 801BF304
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 801BF308
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 801BF30C
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 801BF310
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 801BF314
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 801BF318
  W32(c->r[27]+c->r[9],c->r[0]); // 801BF31C
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 801BF320
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF29C; } // 801BF324
L_801BF328:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)48); // 801BF328
  c->r[3]=c->r[26]+c->r[0]; // 801BF32C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801BF330
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 801BF334
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 801BF338
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,3,ea,0,0);} // 801BF33C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,4,ea,0,0);} // 801BF340
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,5,ea,0,0);} // 801BF344
  goto L_801BF38C; // 801BF348
L_801BF34C:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801BF34C
  c->r[3]=c->r[28]|c->r[28]; // 801BF350
  c->r[4]=R8(c->r[29]+0x00000003u); // 801BF354
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BF358
  c->r[5]=R8(c->r[29]+0x00000002u); // 801BF35C
  c->r[0]=R8(c->r[29]+0x00000004u); // 801BF360
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801BF364
  c->r[25]=c->r[6]+c->r[5]; // 801BF368
  c->r[4]=c->r[4]+c->r[0]; // 801BF36C
  c->lr=0x801BF374u; f_801A9AA4(c); // 801BF370
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)48); // 801BF374
  c->r[4]=c->r[3]+0x000000A0u; // 801BF378
  c->r[3]=c->r[26]+c->r[0]; // 801BF37C
  c->r[5]=c->r[30]+c->r[0]; // 801BF380
  c->lr=0x801BF388u; f_800EC0F4(c); // 801BF384
  c->r[29]=c->r[29]+0x00000005u; // 801BF388
L_801BF38C:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BF38C
  cmpu(c,0,c->r[0],0x00000001u); // 801BF390
  if (!crb(c,2)) { IRQCHK(c); goto L_801BF128; } // 801BF394
L_801BF398:;
  c->r[11]=c->r[1]+0x00000030u; // 801BF398
  c->lr=0x801BF3A0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BF39C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BF3A0
  c->lr=c->r[0]; // 801BF3A4
  c->r[1]=c->r[1]+0x00000030u; // 801BF3A8
  return; // 801BF3AC
}

// GetIndMtxOp__Q34nw4r3g3d6detailFQ34nw4r3g3d6ResMatQ34nw4r3g3d7ResNodeQ34nw4r3g3d6ResShp
void f_801BF3B0(Ctx* __restrict c) {
  trace_call(0x801BF3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF3B0
  c->r[0]=c->lr; // 801BF3B4
  W32(c->r[1]+0x00000134u,c->r[0]); // 801BF3B8
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 801BF3BC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 801BF3C0
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 801BF3C4
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 801BF3C8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 801BF3CC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 801BF3D0
  c->r[11]=c->r[1]+0x00000100u; // 801BF3D4
  c->lr=0x801BF3DCu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF3D8
  c->r[6]=R32(c->r[3]+0x00000000u); // 801BF3DC
  c->r[23]=c->r[3]|c->r[3]; // 801BF3E0
  c->r[24]=c->r[4]|c->r[4]; // 801BF3E4
  c->r[25]=c->r[5]|c->r[5]; // 801BF3E8
  cmps(c,0,(int32_t)c->r[6],0); // 801BF3EC
  if (crb(c,2)) { goto L_801BF400; } // 801BF3F0
  c->r[0]=R32(c->r[5]+0x00000000u); // 801BF3F4
  cmps(c,0,(int32_t)c->r[0],0); // 801BF3F8
  if (!crb(c,2)) { goto L_801BF408; } // 801BF3FC
L_801BF400:;
  c->r[3]=0u+0x00000000u; // 801BF400
  goto L_801BF89C; // 801BF404
L_801BF408:;
  c->r[0]=c->r[6]+0x0000001Cu; // 801BF408
  c->r[3]=c->r[1]+0x00000010u; // 801BF40C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801BF410
  c->r[5]=c->r[1]+0x00000068u; // 801BF414
  c->r[6]=c->r[1]+0x0000000Cu; // 801BF418
  c->r[4]=0u+0x00000001u; // 801BF41C
  c->lr=0x801BF424u; f_801ABCBC(c); // 801BF420
  c->r[3]=c->r[1]+0x00000010u; // 801BF424
  c->r[5]=c->r[1]+0x0000006Cu; // 801BF428
  c->r[6]=c->r[1]+0x0000000Du; // 801BF42C
  c->r[4]=0u+0x00000002u; // 801BF430
  c->lr=0x801BF438u; f_801ABCBC(c); // 801BF434
  c->r[3]=c->r[1]+0x00000010u; // 801BF438
  c->r[5]=c->r[1]+0x00000070u; // 801BF43C
  c->r[6]=c->r[1]+0x0000000Eu; // 801BF440
  c->r[4]=0u+0x00000003u; // 801BF444
  c->lr=0x801BF44Cu; f_801ABCBC(c); // 801BF448
  c->r[0]=R32(c->r[1]+0x00000068u); // 801BF44C
  cmps(c,0,(int32_t)c->r[0],0); // 801BF450
  if (!crb(c,2)) { goto L_801BF478; } // 801BF454
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 801BF458
  cmps(c,0,(int32_t)c->r[0],0); // 801BF45C
  if (!crb(c,2)) { goto L_801BF478; } // 801BF460
  c->r[0]=R32(c->r[1]+0x00000070u); // 801BF464
  cmps(c,0,(int32_t)c->r[0],0); // 801BF468
  if (!crb(c,2)) { goto L_801BF478; } // 801BF46C
  c->r[3]=0u+0x00000000u; // 801BF470
  goto L_801BF89C; // 801BF474
L_801BF478:;
  c->r[29]=0u+0x00000000u; // 801BF478
  c->lr=0x801BF480u; f_801BB0A8(c); // 801BF47C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BF480
  c->r[27]=c->r[3]|c->r[3]; // 801BF484
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BF488
  c->ctr=c->r[12]; // 801BF48C
  if (true) { c->lr=0x801BF494u; dispatch(c,c->ctr); } // 801BF490
  {uint32_t ea=c->r[2]+0xFFFF9C2Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 801BF494
  c->r[31]=c->r[1]+0x00000068u; // 801BF498
  {uint32_t ea=c->r[2]+0xFFFF9C30u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BF49C
  c->r[30]=c->r[1]+0x0000000Cu; // 801BF4A0
  {uint32_t ea=c->r[2]+0xFFFF9C28u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BF4A4
  c->r[28]=0u+0x00000000u; // 801BF4A8
L_801BF4AC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801BF4AC
  c->r[26]=c->r[28]+0x00000001u; // 801BF4B0
  cmps(c,0,(int32_t)c->r[0],0); // 801BF4B4
  if (crb(c,2)) { goto L_801BF884; } // 801BF4B8
  cmps(c,0,(int32_t)c->r[29],0); // 801BF4BC
  if (!crb(c,2)) { goto L_801BF6D0; } // 801BF4C0
  c->r[3]=R32(c->r[25]+0x00000000u); // 801BF4C4
  c->r[29]=0u+0x00000001u; // 801BF4C8
  c->r[3]=R32(c->r[3]+0x00000008u); // 801BF4CC
  cmps(c,0,(int32_t)c->r[3],0); // 801BF4D0
  if (crb(c,0)) { goto L_801BF6C4; } // 801BF4D4
  c->r[4]=R32(c->r[24]+0x00000000u); // 801BF4D8
  cmps(c,0,(int32_t)c->r[4],0); // 801BF4DC
  if (crb(c,2)) { goto L_801BF4EC; } // 801BF4E0
  c->r[0]=R32(c->r[4]+0x00000010u); // 801BF4E4
  goto L_801BF4F0; // 801BF4E8
L_801BF4EC:;
  c->r[0]=0u+0x00000000u; // 801BF4EC
L_801BF4F0:;
  cmpu(c,0,c->r[3],c->r[0]); // 801BF4F0
  if (!crb(c,2)) { goto L_801BF548; } // 801BF4F4
  c->lr=0x801BF4FCu; f_801BAF7C(c); // 801BF4F8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF4FC
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 801BF500
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF504
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 801BF508
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF50C
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 801BF510
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF514
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 801BF518
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF51C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 801BF520
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF524
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 801BF528
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF52C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 801BF530
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF534
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 801BF538
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF53C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 801BF540
  goto L_801BF600; // 801BF544
L_801BF548:;
  c->r[3]=c->r[23]|c->r[23]; // 801BF548
  c->lr=0x801BF550u; f_801AB580(c); // 801BF54C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BF550
  c->r[6]=c->r[3]+0x0000004Cu; // 801BF554
  c->r[4]=R32(c->r[25]+0x00000000u); // 801BF558
  c->r[3]=c->r[1]+0x00000008u; // 801BF55C
  c->r[5]=R32(c->r[6]+0x00000024u); // 801BF560
  c->r[0]=R32(c->r[4]+0x00000008u); // 801BF564
  c->r[4]=c->r[6]+c->r[5]; // 801BF568
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF56C
  c->r[4]=c->r[4]+c->r[0]; // 801BF570
  c->r[4]=R32(c->r[4]+0x00000004u); // 801BF574
  c->lr=0x801BF57Cu; f_801A9A50(c); // 801BF578
  c->r[4]=R32(c->r[24]+0x00000000u); // 801BF57C
  c->r[5]=c->r[1]+0x000000A8u; // 801BF580
  c->r[3]=c->r[3]+0x000000A0u; // 801BF584
  c->r[4]=c->r[4]+0x00000070u; // 801BF588
  c->lr=0x801BF590u; f_800EC0F4(c); // 801BF58C
  c->r[3]=R32(c->r[25]+0x00000000u); // 801BF590
  c->r[3]=R32(c->r[3]+0x00000008u); // 801BF594
  c->lr=0x801BF59Cu; f_801BAF7C(c); // 801BF598
  {uint32_t ea=c->r[3]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 801BF59C
  c->r[4]=c->r[1]+0x000000A8u; // 801BF5A0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801BF5A4
  c->r[5]=c->r[4]|c->r[4]; // 801BF5A8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 801BF5AC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BF5B0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BF5B4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BF5B8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF5BC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF5C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF5C4
  c->r[3]=c->r[1]+0x00000078u; // 801BF5C8
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 801BF5CC
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 801BF5D0
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 801BF5D4
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[31]);} // 801BF5D8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[3]);} // 801BF5DC
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 801BF5E0
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[5]);} // 801BF5E4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 801BF5E8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[6]);} // 801BF5EC
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[7]);} // 801BF5F0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[8]);} // 801BF5F4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[31]);} // 801BF5F8
  c->lr=0x801BF600u; f_800EC0F4(c); // 801BF5FC
L_801BF600:;
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF600
  c->r[3]=c->r[1]+0x0000005Cu; // 801BF604
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF608
  c->r[4]=c->r[3]|c->r[3]; // 801BF60C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF610
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[31]);} // 801BF614
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[31]);} // 801BF618
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[31]);} // 801BF61C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 801BF620
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801BF624
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 801BF628
  c->lr=0x801BF630u; f_800ECFD0(c); // 801BF62C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF630
  c->r[3]=c->r[1]+0x00000050u; // 801BF634
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF638
  c->r[4]=c->r[3]|c->r[3]; // 801BF63C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF640
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 801BF644
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801BF648
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BF64C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[2]);} // 801BF650
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 801BF654
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 801BF658
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 801BF65C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 801BF660
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[5]);} // 801BF664
  c->lr=0x801BF66Cu; f_800ECFD0(c); // 801BF668
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF66C
  c->r[3]=c->r[1]+0x00000044u; // 801BF670
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF674
  c->r[4]=c->r[3]|c->r[3]; // 801BF678
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF67C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BF680
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BF684
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BF688
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 801BF68C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 801BF690
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 801BF694
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 801BF698
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 801BF69C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[5]);} // 801BF6A0
  c->lr=0x801BF6A8u; f_800ECFD0(c); // 801BF6A4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF6A8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF6AC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF6B0
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[2]);} // 801BF6B4
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 801BF6B8
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 801BF6BC
  goto L_801BF6D0; // 801BF6C0
L_801BF6C4:;
  c->lr=0x801BF6C8u; f_801BB35C(c); // 801BF6C4
  c->r[4]=c->r[1]+0x000000A8u; // 801BF6C8
  c->lr=0x801BF6D0u; f_800EC0C0(c); // 801BF6CC
L_801BF6D0:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801BF6D0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801BF6D4
  c->lr=0x801BF6DCu; f_801BB224(c); // 801BF6D8
  cmps(c,0,(int32_t)c->r[3],0); // 801BF6DC
  c->r[22]=c->r[3]|c->r[3]; // 801BF6E0
  if (crb(c,2)) { goto L_801BF860; } // 801BF6E4
  c->r[4]=R32(c->r[3]+0x00000000u); // 801BF6E8
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801BF6EC
  if (crb(c,2)) { goto L_801BF860; } // 801BF6F0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801BF6F4
  if (crb(c,2)) { goto L_801BF780; } // 801BF6F8
  c->r[4]=c->r[1]+0x00000038u; // 801BF6FC
  c->lr=0x801BF704u; f_801CDFB0(c); // 801BF700
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF704
  fcmp(c,0,c->f[31],c->f[0]); // 801BF708
  if (!crb(c,2)) { goto L_801BF838; } // 801BF70C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF710
  fcmp(c,0,c->f[31],c->f[0]); // 801BF714
  if (!crb(c,2)) { goto L_801BF838; } // 801BF718
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF71C
  fcmp(c,0,c->f[31],c->f[0]); // 801BF720
  if (!crb(c,2)) { goto L_801BF838; } // 801BF724
  c->r[3]=c->r[22]|c->r[22]; // 801BF728
  c->r[4]=c->r[1]+0x00000038u; // 801BF72C
  c->lr=0x801BF734u; f_801CDF94(c); // 801BF730
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF734
  c->r[3]=c->r[1]+0x00000038u; // 801BF738
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF73C
  c->r[4]=c->r[3]|c->r[3]; // 801BF740
  c->f[2]=-c->f[0]; // 801BF744
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF748
  c->f[3]=-c->f[1]; // 801BF74C
  c->f[4]=-c->f[0]; // 801BF750
  c->f[0]=c->ps1[0]=S(c->f[2]); // 801BF754
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 801BF758
  c->f[1]=c->ps1[1]=S(c->f[3]); // 801BF75C
  c->f[2]=c->ps1[2]=S(c->f[4]); // 801BF760
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 801BF764
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 801BF768
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 801BF76C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801BF770
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801BF774
  c->lr=0x801BF77Cu; f_800ECFD0(c); // 801BF778
  goto L_801BF838; // 801BF77C
L_801BF780:;
  c->r[3]=0u+0x00000000u; // 801BF780
  if (!crb(c,2)) { goto L_801BF794; } // 801BF784
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801BF788
  if (!crb(c,2)) { goto L_801BF794; } // 801BF78C
  c->r[3]=0u+0x00000001u; // 801BF790
L_801BF794:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BF794
  if (crb(c,2)) { goto L_801BF7F4; } // 801BF798
  c->r[3]=c->r[22]|c->r[22]; // 801BF79C
  c->r[4]=c->r[1]+0x00000038u; // 801BF7A0
  c->lr=0x801BF7A8u; f_801CDF94(c); // 801BF7A4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF7A8
  c->r[3]=c->r[1]+0x00000038u; // 801BF7AC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF7B0
  c->r[4]=c->r[3]|c->r[3]; // 801BF7B4
  c->f[2]=-c->f[0]; // 801BF7B8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF7BC
  c->f[3]=-c->f[1]; // 801BF7C0
  c->f[4]=-c->f[0]; // 801BF7C4
  c->f[0]=c->ps1[0]=S(c->f[2]); // 801BF7C8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801BF7CC
  c->f[1]=c->ps1[1]=S(c->f[3]); // 801BF7D0
  c->f[2]=c->ps1[2]=S(c->f[4]); // 801BF7D4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 801BF7D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 801BF7DC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 801BF7E0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801BF7E4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801BF7E8
  c->lr=0x801BF7F0u; f_800ECFD0(c); // 801BF7EC
  goto L_801BF838; // 801BF7F0
L_801BF7F4:;
  c->r[3]=c->r[22]|c->r[22]; // 801BF7F4
  c->r[4]=c->r[1]+0x0000002Cu; // 801BF7F8
  c->lr=0x801BF800u; f_801CDFB0(c); // 801BF7FC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF800
  c->r[3]=c->r[1]+0x00000038u; // 801BF804
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF808
  c->r[4]=c->r[3]|c->r[3]; // 801BF80C
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[0]); // 801BF810
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF814
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801BF818
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801BF81C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BF820
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 801BF824
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 801BF828
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801BF82C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801BF830
  c->lr=0x801BF838u; f_800ECFD0(c); // 801BF834
L_801BF838:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801BF838
  c->r[3]=c->r[27]|c->r[27]; // 801BF83C
  c->r[4]=c->r[26]|c->r[26]; // 801BF840
  c->r[5]=c->r[1]+0x00000038u; // 801BF844
  c->r[12]=R32(c->r[12]+0x00000014u); // 801BF848
  c->r[6]=c->r[1]+0x000000A8u; // 801BF84C
  c->r[7]=R32(c->r[31]+0x00000000u); // 801BF850
  c->ctr=c->r[12]; // 801BF854
  if (true) { c->lr=0x801BF85Cu; dispatch(c,c->ctr); } // 801BF858
  goto L_801BF884; // 801BF85C
L_801BF860:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801BF860
  c->r[3]=c->r[27]|c->r[27]; // 801BF864
  c->r[4]=c->r[26]|c->r[26]; // 801BF868
  c->r[6]=c->r[1]+0x000000A8u; // 801BF86C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801BF870
  c->r[5]=0u+0x00000000u; // 801BF874
  c->r[7]=R32(c->r[31]+0x00000000u); // 801BF878
  c->ctr=c->r[12]; // 801BF87C
  if (true) { c->lr=0x801BF884u; dispatch(c,c->ctr); } // 801BF880
L_801BF884:;
  c->r[28]=c->r[28]+0x00000001u; // 801BF884
  c->r[30]=c->r[30]+0x00000001u; // 801BF888
  cmpu(c,0,c->r[28],0x00000003u); // 801BF88C
  c->r[31]=c->r[31]+0x00000004u; // 801BF890
  if (crb(c,0)) { IRQCHK(c); goto L_801BF4AC; } // 801BF894
  c->r[3]=c->r[27]|c->r[27]; // 801BF898
L_801BF89C:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 801BF89C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 801BF8A0
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 801BF8A4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 801BF8A8
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 801BF8AC
  c->r[11]=c->r[1]+0x00000100u; // 801BF8B0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 801BF8B4
  c->lr=0x801BF8BCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BF8B8
  c->r[0]=R32(c->r[1]+0x00000134u); // 801BF8BC
  c->lr=c->r[0]; // 801BF8C0
  c->r[1]=c->r[1]+0x00000130u; // 801BF8C4
  return; // 801BF8C8
}

// SetupDraw1Mat1ShpSwap__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FPQ34nw4r3g3d16Draw1Mat1ShpSwapPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_801BF8CC(Ctx* __restrict c) {
  trace_call(0x801BF8CCu);
  c->r[6]=R32(c->r[4]+0x00000008u); // 801BF8CC
  cmps(c,0,(int32_t)c->r[6],0); // 801BF8D0
  if (crb(c,2)) { goto L_801BF8E8; } // 801BF8D4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)260); // 801BF8D8
  c->r[0]=c->r[6]+c->r[0]; // 801BF8DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BF8E0
  goto L_801BF8F0; // 801BF8E4
L_801BF8E8:;
  c->r[0]=0u+0x00000000u; // 801BF8E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BF8EC
L_801BF8F0:;
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 801BF8F0
  cmps(c,0,(int32_t)c->r[6],0); // 801BF8F4
  if (crb(c,2)) { goto L_801BF90C; } // 801BF8F8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 801BF8FC
  c->r[0]=c->r[6]+c->r[0]; // 801BF900
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BF904
  goto L_801BF914; // 801BF908
L_801BF90C:;
  c->r[0]=0u+0x00000000u; // 801BF90C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BF910
L_801BF914:;
  c->r[6]=R32(c->r[4]+0x00000010u); // 801BF914
  cmps(c,0,(int32_t)c->r[6],0); // 801BF918
  if (crb(c,2)) { goto L_801BF930; } // 801BF91C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)584); // 801BF920
  c->r[0]=c->r[6]+c->r[0]; // 801BF924
  W32(c->r[3]+0x00000028u,c->r[0]); // 801BF928
  goto L_801BF938; // 801BF92C
L_801BF930:;
  c->r[0]=0u+0x00000000u; // 801BF930
  W32(c->r[3]+0x00000028u,c->r[0]); // 801BF934
L_801BF938:;
  c->r[6]=R32(c->r[4]+0x00000014u); // 801BF938
  cmps(c,0,(int32_t)c->r[6],0); // 801BF93C
  if (crb(c,2)) { goto L_801BF954; } // 801BF940
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)40); // 801BF944
  c->r[0]=c->r[6]+c->r[0]; // 801BF948
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801BF94C
  goto L_801BF95C; // 801BF950
L_801BF954:;
  c->r[0]=0u+0x00000000u; // 801BF954
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801BF958
L_801BF95C:;
  c->r[6]=R32(c->r[4]+0x00000018u); // 801BF95C
  cmps(c,0,(int32_t)c->r[6],0); // 801BF960
  if (crb(c,2)) { goto L_801BF978; } // 801BF964
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801BF968
  c->r[0]=c->r[6]+c->r[0]; // 801BF96C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BF970
  goto L_801BF980; // 801BF974
L_801BF978:;
  c->r[0]=0u+0x00000000u; // 801BF978
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BF97C
L_801BF980:;
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 801BF980
  cmps(c,0,(int32_t)c->r[6],0); // 801BF984
  if (crb(c,2)) { goto L_801BF99C; } // 801BF988
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 801BF98C
  c->r[0]=c->r[6]+c->r[0]; // 801BF990
  W32(c->r[3]+0x00000024u,c->r[0]); // 801BF994
  goto L_801BF9A4; // 801BF998
L_801BF99C:;
  c->r[0]=0u+0x00000000u; // 801BF99C
  W32(c->r[3]+0x00000024u,c->r[0]); // 801BF9A0
L_801BF9A4:;
  c->r[6]=R32(c->r[4]+0x00000020u); // 801BF9A4
  cmps(c,0,(int32_t)c->r[6],0); // 801BF9A8
  if (crb(c,2)) { goto L_801BF9C0; } // 801BF9AC
  c->r[0]=rotl(c->r[5],5)&0xFFFFFFE0u; // 801BF9B0
  c->r[0]=c->r[6]+c->r[0]; // 801BF9B4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801BF9B8
  goto L_801BF9C8; // 801BF9BC
L_801BF9C0:;
  c->r[0]=0u+0x00000000u; // 801BF9C0
  W32(c->r[3]+0x00000010u,c->r[0]); // 801BF9C4
L_801BF9C8:;
  c->r[6]=R32(c->r[4]+0x00000024u); // 801BF9C8
  cmps(c,0,(int32_t)c->r[6],0); // 801BF9CC
  if (crb(c,2)) { goto L_801BF9E4; } // 801BF9D0
  c->r[0]=rotl(c->r[5],7)&0xFFFFFF80u; // 801BF9D4
  c->r[0]=c->r[6]+c->r[0]; // 801BF9D8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801BF9DC
  goto L_801BF9EC; // 801BF9E0
L_801BF9E4:;
  c->r[0]=0u+0x00000000u; // 801BF9E4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801BF9E8
L_801BF9EC:;
  c->r[6]=R32(c->r[4]+0x00000028u); // 801BF9EC
  cmps(c,0,(int32_t)c->r[6],0); // 801BF9F0
  if (crb(c,2)) { goto L_801BFA08; } // 801BF9F4
  c->r[0]=rotl(c->r[5],6)&0xFFFFFFC0u; // 801BF9F8
  c->r[0]=c->r[6]+c->r[0]; // 801BF9FC
  W32(c->r[3]+0x00000018u,c->r[0]); // 801BFA00
  goto L_801BFA10; // 801BFA04
L_801BFA08:;
  c->r[0]=0u+0x00000000u; // 801BFA08
  W32(c->r[3]+0x00000018u,c->r[0]); // 801BFA0C
L_801BFA10:;
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 801BFA10
  cmps(c,0,(int32_t)c->r[6],0); // 801BFA14
  if (crb(c,2)) { goto L_801BFA2C; } // 801BFA18
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)160); // 801BFA1C
  c->r[0]=c->r[6]+c->r[0]; // 801BFA20
  W32(c->r[3]+0x00000020u,c->r[0]); // 801BFA24
  goto L_801BFA34; // 801BFA28
L_801BFA2C:;
  c->r[0]=0u+0x00000000u; // 801BFA2C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801BFA30
L_801BFA34:;
  c->r[6]=R32(c->r[4]+0x00000030u); // 801BFA34
  cmps(c,0,(int32_t)c->r[6],0); // 801BFA38
  if (crb(c,2)) { goto L_801BFA50; } // 801BFA3C
  c->r[0]=rotl(c->r[5],9)&0xFFFFFE00u; // 801BFA40
  c->r[0]=c->r[6]+c->r[0]; // 801BFA44
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BFA48
  goto L_801BFA58; // 801BFA4C
L_801BFA50:;
  c->r[0]=0u+0x00000000u; // 801BFA50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BFA54
L_801BFA58:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BFA58
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BFA5C
  if (crb(c,2)) { goto L_801BFA78; } // 801BFA60
  c->r[0]=0u+0x00000000u; // 801BFA64
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801BFA68
  W32(c->r[3]+0x00000030u,c->r[0]); // 801BFA6C
  W32(c->r[3]+0x00000034u,c->r[0]); // 801BFA70
  return; // 801BFA74
L_801BFA78:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 801BFA78
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801BFA7C
  c->r[0]=R32(c->r[4]+0x00000038u); // 801BFA80
  W32(c->r[3]+0x00000030u,c->r[0]); // 801BFA84
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801BFA88
  W32(c->r[3]+0x00000034u,c->r[0]); // 801BFA8C
  return; // 801BFA90
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCUcUl
void f_801BFA94(Ctx* __restrict c) {
  trace_call(0x801BFA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFA94
  c->r[0]=c->lr; // 801BFA98
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BFA9C
  c->r[11]=c->r[1]+0x00000050u; // 801BFAA0
  c->lr=0x801BFAA8u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BFAA4
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 801BFAA8
  c->r[24]=c->r[3]|c->r[3]; // 801BFAAC
  c->r[25]=c->r[4]|c->r[4]; // 801BFAB0
  c->r[27]=0u+0x00000000u; // 801BFAB4
  c->r[26]=0u+0x00000001u; // 801BFAB8
  if (crb(c,2)) { goto L_801BFAC4; } // 801BFABC
  c->r[26]=c->r[26]|0x00000008u; // 801BFAC0
L_801BFAC4:;
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 801BFAC4
  if (crb(c,2)) { goto L_801BFAD0; } // 801BFAC8
  c->r[26]=c->r[26]|0x00000010u; // 801BFACC
L_801BFAD0:;
  c->r[28]=c->r[26]|0x00000010u; // 801BFAD0
  c->r[31]=c->r[1]+0x00000008u; // 801BFAD4
  c->r[30]=c->r[1]+0x0000000Cu; // 801BFAD8
  c->r[29]=c->r[1]+0x00000010u; // 801BFADC
  goto L_801BFBB0; // 801BFAE0
L_801BFAE4:;
  c->r[0]=R8(c->r[25]+0x00000005u); // 801BFAE4
  c->r[3]=c->r[24]|c->r[24]; // 801BFAE8
  c->r[4]=R8(c->r[25]+0x00000006u); // 801BFAEC
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801BFAF0
  c->lr=0x801BFAF8u; f_801A9A50(c); // 801BFAF4
  c->r[0]=R8(c->r[25]+0x00000003u); // 801BFAF8
  c->r[21]=c->r[3]|c->r[3]; // 801BFAFC
  c->r[4]=R8(c->r[25]+0x00000004u); // 801BFB00
  c->r[3]=c->r[24]|c->r[24]; // 801BFB04
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801BFB08
  c->lr=0x801BFB10u; f_801AA084(c); // 801BFB0C
  cmps(c,0,(int32_t)c->r[21],0); // 801BFB10
  c->r[22]=c->r[3]|c->r[3]; // 801BFB14
  if (crb(c,2)) { goto L_801BFB28; } // 801BFB18
  c->r[0]=R32(c->r[21]+0x00000014u); // 801BFB1C
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 801BFB20
  goto L_801BFB2C; // 801BFB24
L_801BFB28:;
  c->r[0]=0u+0x00000000u; // 801BFB28
L_801BFB2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BFB2C
  if (crb(c,2)) { goto L_801BFBAC; } // 801BFB30
  c->r[0]=R32(c->r[22]+0x00000034u); // 801BFB34
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BFB38
  if (!crb(c,2)) { goto L_801BFBAC; } // 801BFB3C
  c->r[0]=R8(c->r[25]+0x00000001u); // 801BFB40
  c->r[3]=c->r[24]|c->r[24]; // 801BFB44
  c->r[4]=R8(c->r[25]+0x00000002u); // 801BFB48
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801BFB4C
  c->lr=0x801BFB54u; f_801A9FA8(c); // 801BFB50
  cmpu(c,0,c->r[3],c->r[27]); // 801BFB54
  W32(c->r[1]+0x00000008u,c->r[22]); // 801BFB58
  c->r[27]=c->r[3]|c->r[3]; // 801BFB5C
  c->r[23]=c->r[26]|c->r[26]; // 801BFB60
  W32(c->r[1]+0x0000000Cu,c->r[21]); // 801BFB64
  W32(c->r[1]+0x00000010u,c->r[3]); // 801BFB68
  if (!crb(c,2)) { goto L_801BFB74; } // 801BFB6C
  c->r[23]=c->r[28]|c->r[28]; // 801BFB70
L_801BFB74:;
  W32(c->r[1]+0x00000014u,c->r[22]); // 801BFB74
  c->r[3]=c->r[29]|c->r[29]; // 801BFB78
  c->r[4]=c->r[30]|c->r[30]; // 801BFB7C
  c->r[5]=c->r[31]|c->r[31]; // 801BFB80
  W32(c->r[1]+0x00000018u,c->r[27]); // 801BFB84
  c->lr=0x801BFB8Cu; f_801BF3B0(c); // 801BFB88
  c->r[9]=c->r[3]|c->r[3]; // 801BFB8C
  c->r[7]=c->r[23]|c->r[23]; // 801BFB90
  c->r[3]=c->r[1]+0x00000018u; // 801BFB94
  c->r[4]=c->r[1]+0x00000014u; // 801BFB98
  c->r[5]=0u+0x00000000u; // 801BFB9C
  c->r[6]=0u+0x00000000u; // 801BFBA0
  c->r[8]=0u+0x00000000u; // 801BFBA4
  c->lr=0x801BFBACu; f_801BC2B4(c); // 801BFBA8
L_801BFBAC:;
  c->r[25]=c->r[25]+0x00000008u; // 801BFBAC
L_801BFBB0:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 801BFBB0
  cmpu(c,0,c->r[0],0x00000001u); // 801BFBB4
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFAE4; } // 801BFBB8
  c->r[11]=c->r[1]+0x00000050u; // 801BFBBC
  c->lr=0x801BFBC4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFBC0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801BFBC4
  c->lr=c->r[0]; // 801BFBC8
  c->r[1]=c->r[1]+0x00000050u; // 801BFBCC
  return; // 801BFBD0
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_801BFBD4(Ctx* __restrict c) {
  trace_call(0x801BFBD4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFBD4
  c->r[0]=c->lr; // 801BFBD8
  W32(c->r[1]+0x00000094u,c->r[0]); // 801BFBDC
  c->r[11]=c->r[1]+0x00000090u; // 801BFBE0
  c->lr=0x801BFBE8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BFBE4
  c->r[25]=0u+0x00000000u; // 801BFBE8
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 801BFBEC
  W32(c->r[1]+0x00000020u,c->r[25]); // 801BFBF0
  c->r[21]=c->r[3]|c->r[3]; // 801BFBF4
  c->r[22]=c->r[4]|c->r[4]; // 801BFBF8
  c->r[23]=c->r[5]|c->r[5]; // 801BFBFC
  W32(c->r[1]+0x00000024u,c->r[25]); // 801BFC00
  c->r[24]=0u+0x00000001u; // 801BFC04
  W32(c->r[1]+0x00000028u,c->r[25]); // 801BFC08
  W32(c->r[1]+0x0000002Cu,c->r[25]); // 801BFC0C
  W32(c->r[1]+0x00000030u,c->r[25]); // 801BFC10
  W32(c->r[1]+0x00000034u,c->r[25]); // 801BFC14
  W32(c->r[1]+0x00000038u,c->r[25]); // 801BFC18
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 801BFC1C
  W32(c->r[1]+0x00000040u,c->r[25]); // 801BFC20
  W32(c->r[1]+0x00000044u,c->r[25]); // 801BFC24
  W32(c->r[1]+0x00000048u,c->r[25]); // 801BFC28
  W32(c->r[1]+0x0000004Cu,c->r[25]); // 801BFC2C
  W32(c->r[1]+0x00000050u,c->r[25]); // 801BFC30
  W32(c->r[1]+0x00000054u,c->r[25]); // 801BFC34
  if (crb(c,2)) { goto L_801BFC40; } // 801BFC38
  c->r[24]=c->r[24]|0x00000008u; // 801BFC3C
L_801BFC40:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 801BFC40
  if (crb(c,2)) { goto L_801BFC4C; } // 801BFC44
  c->r[24]=c->r[24]|0x00000010u; // 801BFC48
L_801BFC4C:;
  c->r[26]=c->r[24]|0x00000010u; // 801BFC4C
  c->r[29]=c->r[1]+0x00000008u; // 801BFC50
  c->r[28]=c->r[1]+0x0000000Cu; // 801BFC54
  c->r[27]=c->r[1]+0x00000010u; // 801BFC58
  goto L_801BFD74; // 801BFC5C
L_801BFC60:;
  c->r[0]=R8(c->r[22]+0x00000005u); // 801BFC60
  c->r[3]=c->r[21]|c->r[21]; // 801BFC64
  c->r[4]=R8(c->r[22]+0x00000006u); // 801BFC68
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801BFC6C
  c->lr=0x801BFC74u; f_801A9A50(c); // 801BFC70
  c->r[0]=R8(c->r[22]+0x00000003u); // 801BFC74
  c->r[30]=c->r[3]|c->r[3]; // 801BFC78
  c->r[4]=R8(c->r[22]+0x00000004u); // 801BFC7C
  c->r[3]=c->r[21]|c->r[21]; // 801BFC80
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801BFC84
  c->lr=0x801BFC8Cu; f_801AA084(c); // 801BFC88
  c->r[4]=R32(c->r[23]+0x00000004u); // 801BFC8C
  c->r[31]=c->r[3]|c->r[3]; // 801BFC90
  cmps(c,0,(int32_t)c->r[4],0); // 801BFC94
  if (crb(c,2)) { goto L_801BFCC4; } // 801BFC98
  cmps(c,0,(int32_t)c->r[30],0); // 801BFC9C
  if (crb(c,2)) { goto L_801BFCAC; } // 801BFCA0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801BFCA4
  goto L_801BFCB0; // 801BFCA8
L_801BFCAC:;
  c->r[0]=0u+0x00000000u; // 801BFCAC
L_801BFCB0:;
  c->r[3]=R8(c->r[4]+c->r[0]); // 801BFCB0
  c->r[0]=0u-c->r[3]; // 801BFCB4
  c->r[0]=c->r[0]|c->r[3]; // 801BFCB8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801BFCBC
  goto L_801BFCDC; // 801BFCC0
L_801BFCC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BFCC4
  if (crb(c,2)) { goto L_801BFCD8; } // 801BFCC8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801BFCCC
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 801BFCD0
  goto L_801BFCDC; // 801BFCD4
L_801BFCD8:;
  c->r[0]=0u+0x00000000u; // 801BFCD8
L_801BFCDC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BFCDC
  if (crb(c,2)) { goto L_801BFD70; } // 801BFCE0
  c->r[0]=R32(c->r[31]+0x00000034u); // 801BFCE4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BFCE8
  if (!crb(c,2)) { goto L_801BFD70; } // 801BFCEC
  c->r[0]=R8(c->r[22]+0x00000001u); // 801BFCF0
  c->r[3]=c->r[21]|c->r[21]; // 801BFCF4
  c->r[4]=R8(c->r[22]+0x00000002u); // 801BFCF8
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801BFCFC
  c->lr=0x801BFD04u; f_801A9FA8(c); // 801BFD00
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801BFD04
  c->r[20]=c->r[3]|c->r[3]; // 801BFD08
  c->r[4]=c->r[23]|c->r[23]; // 801BFD0C
  c->r[3]=c->r[1]+0x00000020u; // 801BFD10
  c->lr=0x801BFD18u; f_801BF8CC(c); // 801BFD14
  cmpu(c,0,c->r[20],c->r[25]); // 801BFD18
  W32(c->r[1]+0x00000008u,c->r[31]); // 801BFD1C
  c->r[25]=c->r[24]|c->r[24]; // 801BFD20
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801BFD24
  W32(c->r[1]+0x00000010u,c->r[20]); // 801BFD28
  if (!crb(c,2)) { goto L_801BFD34; } // 801BFD2C
  c->r[25]=c->r[26]|c->r[26]; // 801BFD30
L_801BFD34:;
  W32(c->r[1]+0x00000014u,c->r[31]); // 801BFD34
  c->r[3]=c->r[27]|c->r[27]; // 801BFD38
  c->r[4]=c->r[28]|c->r[28]; // 801BFD3C
  c->r[5]=c->r[29]|c->r[29]; // 801BFD40
  W32(c->r[1]+0x00000018u,c->r[20]); // 801BFD44
  c->lr=0x801BFD4Cu; f_801BF3B0(c); // 801BFD48
  c->r[9]=c->r[3]|c->r[3]; // 801BFD4C
  c->r[7]=c->r[25]|c->r[25]; // 801BFD50
  c->r[3]=c->r[1]+0x00000018u; // 801BFD54
  c->r[4]=c->r[1]+0x00000014u; // 801BFD58
  c->r[8]=c->r[1]+0x00000020u; // 801BFD5C
  c->r[5]=0u+0x00000000u; // 801BFD60
  c->r[6]=0u+0x00000000u; // 801BFD64
  c->lr=0x801BFD6Cu; f_801BC2B4(c); // 801BFD68
  c->r[25]=c->r[20]|c->r[20]; // 801BFD6C
L_801BFD70:;
  c->r[22]=c->r[22]+0x00000008u; // 801BFD70
L_801BFD74:;
  c->r[0]=R8(c->r[22]+0x00000000u); // 801BFD74
  cmpu(c,0,c->r[0],0x00000001u); // 801BFD78
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFC60; } // 801BFD7C
  c->r[11]=c->r[1]+0x00000090u; // 801BFD80
  c->lr=0x801BFD88u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFD84
  c->r[0]=R32(c->r[1]+0x00000094u); // 801BFD88
  c->lr=c->r[0]; // 801BFD8C
  c->r[1]=c->r[1]+0x00000090u; // 801BFD90
  return; // 801BFD94
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCQ54nw4r3g3d6detail7workmem4MdlZUlUl
void f_801BFD98(Ctx* __restrict c) {
  trace_call(0x801BFD98u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFD98
  c->r[0]=c->lr; // 801BFD9C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BFDA0
  c->r[11]=c->r[1]+0x00000050u; // 801BFDA4
  c->lr=0x801BFDACu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BFDA8
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 801BFDAC
  c->r[20]=c->r[3]|c->r[3]; // 801BFDB0
  c->r[21]=c->r[5]|c->r[5]; // 801BFDB4
  c->r[31]=0u+0x00000000u; // 801BFDB8
  c->r[22]=0u+0x00000001u; // 801BFDBC
  if (crb(c,2)) { goto L_801BFDC8; } // 801BFDC0
  c->r[22]=c->r[22]|0x00000008u; // 801BFDC4
L_801BFDC8:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 801BFDC8
  if (crb(c,2)) { goto L_801BFDD4; } // 801BFDCC
  c->r[22]=c->r[22]|0x00000010u; // 801BFDD0
L_801BFDD4:;
  c->r[25]=c->r[4]|c->r[4]; // 801BFDD4
  c->r[24]=c->r[22]|0x00000010u; // 801BFDD8
  c->r[28]=c->r[1]+0x00000008u; // 801BFDDC
  c->r[27]=c->r[1]+0x0000000Cu; // 801BFDE0
  c->r[26]=c->r[1]+0x00000010u; // 801BFDE4
  c->r[23]=0u+0x00000000u; // 801BFDE8
  goto L_801BFE88; // 801BFDEC
L_801BFDF0:;
  c->r[4]=R16(c->r[25]+0x0000000Au); // 801BFDF0
  c->r[3]=c->r[20]|c->r[20]; // 801BFDF4
  c->lr=0x801BFDFCu; f_801AA084(c); // 801BFDF8
  c->r[0]=R32(c->r[3]+0x00000034u); // 801BFDFC
  c->r[29]=c->r[3]|c->r[3]; // 801BFE00
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BFE04
  if (!crb(c,2)) { goto L_801BFE80; } // 801BFE08
  c->r[4]=R16(c->r[25]+0x00000008u); // 801BFE0C
  c->r[3]=c->r[20]|c->r[20]; // 801BFE10
  c->lr=0x801BFE18u; f_801A9FA8(c); // 801BFE14
  c->r[4]=R16(c->r[25]+0x00000006u); // 801BFE18
  c->r[30]=c->r[3]|c->r[3]; // 801BFE1C
  c->r[3]=c->r[20]|c->r[20]; // 801BFE20
  c->lr=0x801BFE28u; f_801A9A50(c); // 801BFE24
  cmpu(c,0,c->r[30],c->r[31]); // 801BFE28
  W32(c->r[1]+0x00000008u,c->r[29]); // 801BFE2C
  c->r[31]=c->r[22]|c->r[22]; // 801BFE30
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BFE34
  W32(c->r[1]+0x00000010u,c->r[30]); // 801BFE38
  if (!crb(c,2)) { goto L_801BFE44; } // 801BFE3C
  c->r[31]=c->r[24]|c->r[24]; // 801BFE40
L_801BFE44:;
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BFE44
  c->r[3]=c->r[26]|c->r[26]; // 801BFE48
  c->r[4]=c->r[27]|c->r[27]; // 801BFE4C
  c->r[5]=c->r[28]|c->r[28]; // 801BFE50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BFE54
  c->lr=0x801BFE5Cu; f_801BF3B0(c); // 801BFE58
  c->r[9]=c->r[3]|c->r[3]; // 801BFE5C
  c->r[7]=c->r[31]|c->r[31]; // 801BFE60
  c->r[3]=c->r[1]+0x00000018u; // 801BFE64
  c->r[4]=c->r[1]+0x00000014u; // 801BFE68
  c->r[5]=0u+0x00000000u; // 801BFE6C
  c->r[6]=0u+0x00000000u; // 801BFE70
  c->r[8]=0u+0x00000000u; // 801BFE74
  c->lr=0x801BFE7Cu; f_801BC2B4(c); // 801BFE78
  c->r[31]=c->r[30]|c->r[30]; // 801BFE7C
L_801BFE80:;
  c->r[25]=c->r[25]+0x0000000Cu; // 801BFE80
  c->r[23]=c->r[23]+0x00000001u; // 801BFE84
L_801BFE88:;
  cmpu(c,0,c->r[23],c->r[21]); // 801BFE88
  if (crb(c,0)) { IRQCHK(c); goto L_801BFDF0; } // 801BFE8C
  c->r[11]=c->r[1]+0x00000050u; // 801BFE90
  c->lr=0x801BFE98u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFE94
  c->r[0]=R32(c->r[1]+0x00000054u); // 801BFE98
  c->lr=c->r[0]; // 801BFE9C
  c->r[1]=c->r[1]+0x00000050u; // 801BFEA0
  return; // 801BFEA4
}

// DrawResMdlLoop__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FQ34nw4r3g3d6ResMdlPCQ54nw4r3g3d6detail7workmem4MdlZUlPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_801BFEA8(Ctx* __restrict c) {
  trace_call(0x801BFEA8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFEA8
  c->r[0]=c->lr; // 801BFEAC
  W32(c->r[1]+0x00000094u,c->r[0]); // 801BFEB0
  c->r[11]=c->r[1]+0x00000090u; // 801BFEB4
  c->lr=0x801BFEBCu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BFEB8
  c->r[27]=0u+0x00000000u; // 801BFEBC
  c->r[0]=rotl(c->r[7],0)&0x00000008u; cr0(c,c->r[0]); // 801BFEC0
  W32(c->r[1]+0x00000020u,c->r[27]); // 801BFEC4
  c->r[28]=c->r[3]|c->r[3]; // 801BFEC8
  c->r[29]=c->r[5]|c->r[5]; // 801BFECC
  c->r[30]=c->r[6]|c->r[6]; // 801BFED0
  W32(c->r[1]+0x00000024u,c->r[27]); // 801BFED4
  c->r[31]=0u+0x00000001u; // 801BFED8
  W32(c->r[1]+0x00000028u,c->r[27]); // 801BFEDC
  W32(c->r[1]+0x0000002Cu,c->r[27]); // 801BFEE0
  W32(c->r[1]+0x00000030u,c->r[27]); // 801BFEE4
  W32(c->r[1]+0x00000034u,c->r[27]); // 801BFEE8
  W32(c->r[1]+0x00000038u,c->r[27]); // 801BFEEC
  W32(c->r[1]+0x0000003Cu,c->r[27]); // 801BFEF0
  W32(c->r[1]+0x00000040u,c->r[27]); // 801BFEF4
  W32(c->r[1]+0x00000044u,c->r[27]); // 801BFEF8
  W32(c->r[1]+0x00000048u,c->r[27]); // 801BFEFC
  W32(c->r[1]+0x0000004Cu,c->r[27]); // 801BFF00
  W32(c->r[1]+0x00000050u,c->r[27]); // 801BFF04
  W32(c->r[1]+0x00000054u,c->r[27]); // 801BFF08
  if (crb(c,2)) { goto L_801BFF14; } // 801BFF0C
  c->r[31]=c->r[31]|0x00000008u; // 801BFF10
L_801BFF14:;
  c->r[0]=rotl(c->r[7],0)&0x00000004u; cr0(c,c->r[0]); // 801BFF14
  if (crb(c,2)) { goto L_801BFF20; } // 801BFF18
  c->r[31]=c->r[31]|0x00000010u; // 801BFF1C
L_801BFF20:;
  c->r[20]=c->r[4]|c->r[4]; // 801BFF20
  c->r[19]=c->r[31]|0x00000010u; // 801BFF24
  c->r[23]=c->r[1]+0x00000008u; // 801BFF28
  c->r[22]=c->r[1]+0x0000000Cu; // 801BFF2C
  c->r[21]=c->r[1]+0x00000010u; // 801BFF30
  c->r[18]=0u+0x00000000u; // 801BFF34
  goto L_801BFFE8; // 801BFF38
L_801BFF3C:;
  c->r[4]=R16(c->r[20]+0x0000000Au); // 801BFF3C
  c->r[3]=c->r[28]|c->r[28]; // 801BFF40
  c->lr=0x801BFF48u; f_801AA084(c); // 801BFF44
  c->r[0]=R32(c->r[3]+0x00000034u); // 801BFF48
  c->r[24]=c->r[3]|c->r[3]; // 801BFF4C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BFF50
  if (!crb(c,2)) { goto L_801BFFE0; } // 801BFF54
  c->r[4]=R16(c->r[20]+0x00000008u); // 801BFF58
  c->r[3]=c->r[28]|c->r[28]; // 801BFF5C
  c->lr=0x801BFF64u; f_801A9FA8(c); // 801BFF60
  c->r[4]=R16(c->r[20]+0x00000006u); // 801BFF64
  c->r[25]=c->r[3]|c->r[3]; // 801BFF68
  c->r[3]=c->r[28]|c->r[28]; // 801BFF6C
  c->lr=0x801BFF74u; f_801A9A50(c); // 801BFF70
  c->r[5]=R32(c->r[25]+0x0000000Cu); // 801BFF74
  c->r[26]=c->r[3]|c->r[3]; // 801BFF78
  c->r[4]=c->r[30]|c->r[30]; // 801BFF7C
  c->r[3]=c->r[1]+0x00000020u; // 801BFF80
  c->lr=0x801BFF88u; f_801BF8CC(c); // 801BFF84
  cmpu(c,0,c->r[25],c->r[27]); // 801BFF88
  W32(c->r[1]+0x00000008u,c->r[24]); // 801BFF8C
  c->r[27]=c->r[31]|c->r[31]; // 801BFF90
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 801BFF94
  W32(c->r[1]+0x00000010u,c->r[25]); // 801BFF98
  if (!crb(c,2)) { goto L_801BFFA4; } // 801BFF9C
  c->r[27]=c->r[19]|c->r[19]; // 801BFFA0
L_801BFFA4:;
  W32(c->r[1]+0x00000014u,c->r[24]); // 801BFFA4
  c->r[3]=c->r[21]|c->r[21]; // 801BFFA8
  c->r[4]=c->r[22]|c->r[22]; // 801BFFAC
  c->r[5]=c->r[23]|c->r[23]; // 801BFFB0
  W32(c->r[1]+0x00000018u,c->r[25]); // 801BFFB4
  c->lr=0x801BFFBCu; f_801BF3B0(c); // 801BFFB8
  c->r[9]=c->r[3]|c->r[3]; // 801BFFBC
  c->r[7]=c->r[27]|c->r[27]; // 801BFFC0
  c->r[3]=c->r[1]+0x00000018u; // 801BFFC4
  c->r[4]=c->r[1]+0x00000014u; // 801BFFC8
  c->r[8]=c->r[1]+0x00000020u; // 801BFFCC
  c->r[5]=0u+0x00000000u; // 801BFFD0
  c->r[6]=0u+0x00000000u; // 801BFFD4
  c->lr=0x801BFFDCu; f_801BC2B4(c); // 801BFFD8
  c->r[27]=c->r[25]|c->r[25]; // 801BFFDC
L_801BFFE0:;
  c->r[20]=c->r[20]+0x0000000Cu; // 801BFFE0
  c->r[18]=c->r[18]+0x00000001u; // 801BFFE4
L_801BFFE8:;
  cmpu(c,0,c->r[18],c->r[29]); // 801BFFE8
  if (crb(c,0)) { IRQCHK(c); goto L_801BFF3C; } // 801BFFEC
  c->r[11]=c->r[1]+0x00000090u; // 801BFFF0
  c->lr=0x801BFFF8u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFFF4
  c->r[0]=R32(c->r[1]+0x00000094u); // 801BFFF8
  c->lr=c->r[0]; // 801BFFFC
  c->r[1]=c->r[1]+0x00000090u; // 801C0000
  return; // 801C0004
}

// SetUpMdlZ__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FPUlQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCUcPQ34nw4r3g3d21DrawResMdlReplacement
void f_801C0008(Ctx* __restrict c) {
  trace_call(0x801C0008u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0008
  c->r[0]=c->lr; // 801C000C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C0010
  c->r[11]=c->r[1]+0x00000030u; // 801C0014
  c->lr=0x801C001Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0018
  c->r[24]=c->r[3]|c->r[3]; // 801C001C
  c->r[25]=c->r[4]|c->r[4]; // 801C0020
  c->r[26]=c->r[5]|c->r[5]; // 801C0024
  c->r[27]=c->r[6]|c->r[6]; // 801C0028
  c->r[28]=c->r[7]|c->r[7]; // 801C002C
  c->r[30]=0u+0x00000000u; // 801C0030
  c->lr=0x801C0038u; f_801BEAEC(c); // 801C0034
  c->r[29]=c->r[3]|c->r[3]; // 801C0038
  c->r[31]=c->r[29]|c->r[29]; // 801C003C
  goto L_801C0114; // 801C0040
L_801C0044:;
  c->r[0]=R8(c->r[27]+0x00000005u); // 801C0044
  c->r[3]=c->r[25]|c->r[25]; // 801C0048
  c->r[23]=R8(c->r[27]+0x00000006u); // 801C004C
  c->r[23]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[23]&~0x0000FF00u); // 801C0050
  c->r[4]=c->r[23]|c->r[23]; // 801C0054
  c->lr=0x801C005Cu; f_801A9A50(c); // 801C0058
  cmps(c,0,(int32_t)c->r[28],0); // 801C005C
  if (crb(c,2)) { goto L_801C0070; } // 801C0060
  c->r[4]=R32(c->r[28]+0x00000004u); // 801C0064
  cmps(c,0,(int32_t)c->r[4],0); // 801C0068
  if (!crb(c,2)) { goto L_801C008C; } // 801C006C
L_801C0070:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C0070
  if (crb(c,2)) { goto L_801C0084; } // 801C0074
  c->r[0]=R32(c->r[3]+0x00000014u); // 801C0078
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 801C007C
  goto L_801C00B0; // 801C0080
L_801C0084:;
  c->r[0]=0u+0x00000000u; // 801C0084
  goto L_801C00B0; // 801C0088
L_801C008C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C008C
  if (crb(c,2)) { goto L_801C009C; } // 801C0090
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C0094
  goto L_801C00A0; // 801C0098
L_801C009C:;
  c->r[0]=0u+0x00000000u; // 801C009C
L_801C00A0:;
  c->r[4]=R8(c->r[4]+c->r[0]); // 801C00A0
  c->r[0]=0u-c->r[4]; // 801C00A4
  c->r[0]=c->r[0]|c->r[4]; // 801C00A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C00AC
L_801C00B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C00B0
  if (crb(c,2)) { goto L_801C0110; } // 801C00B4
  c->r[0]=R8(c->r[27]+0x00000001u); // 801C00B8
  cmps(c,0,(int32_t)c->r[3],0); // 801C00BC
  c->r[5]=R8(c->r[27]+0x00000002u); // 801C00C0
  c->r[5]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[5]&~0x0000FF00u); // 801C00C4
  W16(c->r[31]+0x00000006u,c->r[23]); // 801C00C8
  c->r[4]=R8(c->r[27]+0x00000003u); // 801C00CC
  c->r[0]=R8(c->r[27]+0x00000004u); // 801C00D0
  W16(c->r[31]+0x00000008u,c->r[5]); // 801C00D4
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 801C00D8
  W16(c->r[31]+0x0000000Au,c->r[0]); // 801C00DC
  if (crb(c,2)) { goto L_801C00EC; } // 801C00E0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C00E4
  goto L_801C00F0; // 801C00E8
L_801C00EC:;
  c->r[0]=0u+0x00000000u; // 801C00EC
L_801C00F0:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801C00F0
  c->r[0]=R8(c->r[27]+0x00000007u); // 801C00F4
  c->r[30]=c->r[30]+0x00000001u; // 801C00F8
  c->r[3]=c->r[26]+c->r[3]; // 801C00FC
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0100
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801C0104
  W16(c->r[31]+0x00000004u,c->r[0]); // 801C0108
  c->r[31]=c->r[31]+0x0000000Cu; // 801C010C
L_801C0110:;
  c->r[27]=c->r[27]+0x00000008u; // 801C0110
L_801C0114:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801C0114
  cmpu(c,0,c->r[0],0x00000001u); // 801C0118
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0044; } // 801C011C
  W32(c->r[24]+0x00000000u,c->r[30]); // 801C0120
  c->r[11]=c->r[1]+0x00000030u; // 801C0124
  c->r[3]=c->r[29]|c->r[29]; // 801C0128
  c->lr=0x801C0130u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C012C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C0130
  c->lr=c->r[0]; // 801C0134
  c->r[1]=c->r[1]+0x00000030u; // 801C0138
  return; // 801C013C
}

// DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_801C0140(Ctx* __restrict c) {
  trace_call(0x801C0140u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0140
  c->r[0]=c->lr; // 801C0144
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C0148
  c->r[11]=c->r[1]+0x00000050u; // 801C014C
  c->lr=0x801C0154u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0150
  c->r[28]=c->r[4]|c->r[4]; // 801C0154
  c->r[27]=c->r[3]|c->r[3]; // 801C0158
  c->r[4]=c->r[5]|c->r[5]; // 801C015C
  c->r[5]=c->r[6]|c->r[6]; // 801C0160
  c->r[26]=c->r[7]|c->r[7]; // 801C0164
  c->r[29]=c->r[8]|c->r[8]; // 801C0168
  c->r[30]=c->r[9]|c->r[9]; // 801C016C
  c->r[31]=c->r[10]|c->r[10]; // 801C0170
  c->r[3]=c->r[28]|c->r[28]; // 801C0174
  c->lr=0x801C017Cu; f_801BAEF4(c); // 801C0178
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 801C017C
  if (!crb(c,2)) { goto L_801C0190; } // 801C0180
  c->r[3]=0u+0x00000000u; // 801C0184
  c->lr=0x801C018Cu; f_800E06DC(c); // 801C0188
  c->lr=0x801C0190u; f_800DDCE8(c); // 801C018C
L_801C0190:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C0190
  if (crb(c,2)) { goto L_801C0268; } // 801C0194
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801C0198
  if (crb(c,2)) { goto L_801C0228; } // 801C019C
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C01A0
  c->r[5]=c->r[28]|c->r[28]; // 801C01A4
  c->r[6]=c->r[26]|c->r[26]; // 801C01A8
  c->r[7]=c->r[30]|c->r[30]; // 801C01AC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801C01B0
  c->r[3]=c->r[1]+0x00000034u; // 801C01B4
  c->r[4]=c->r[1]+0x0000002Cu; // 801C01B8
  c->lr=0x801C01C0u; f_801C0008(c); // 801C01BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C01C0
  c->r[5]=0u+0x801C0000u; // 801C01C4
  c->r[26]=c->r[3]|c->r[3]; // 801C01C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801C01CC
  c->r[5]=c->r[5]+0x00000368u; // 801C01D0
  c->r[4]=c->r[3]+c->r[0]; // 801C01D4
  c->lr=0x801C01DCu; f_801C0408(c); // 801C01D8
  cmps(c,0,(int32_t)c->r[30],0); // 801C01DC
  if (crb(c,2)) { goto L_801C0208; } // 801C01E0
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C01E4
  c->r[4]=c->r[26]|c->r[26]; // 801C01E8
  c->r[5]=R32(c->r[1]+0x00000034u); // 801C01EC
  c->r[6]=c->r[30]|c->r[30]; // 801C01F0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C01F4
  c->r[7]=c->r[31]|c->r[31]; // 801C01F8
  c->r[3]=c->r[1]+0x00000028u; // 801C01FC
  c->lr=0x801C0204u; f_801BFEA8(c); // 801C0200
  goto L_801C0268; // 801C0204
L_801C0208:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C0208
  c->r[4]=c->r[26]|c->r[26]; // 801C020C
  c->r[5]=R32(c->r[1]+0x00000034u); // 801C0210
  c->r[6]=c->r[31]|c->r[31]; // 801C0214
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0218
  c->r[3]=c->r[1]+0x00000024u; // 801C021C
  c->lr=0x801C0224u; f_801BFD98(c); // 801C0220
  goto L_801C0268; // 801C0224
L_801C0228:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C0228
  if (crb(c,2)) { goto L_801C0250; } // 801C022C
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C0230
  c->r[4]=c->r[26]|c->r[26]; // 801C0234
  c->r[5]=c->r[30]|c->r[30]; // 801C0238
  c->r[6]=c->r[31]|c->r[31]; // 801C023C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801C0240
  c->r[3]=c->r[1]+0x00000020u; // 801C0244
  c->lr=0x801C024Cu; f_801BFBD4(c); // 801C0248
  goto L_801C0268; // 801C024C
L_801C0250:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C0250
  c->r[4]=c->r[26]|c->r[26]; // 801C0254
  c->r[5]=c->r[31]|c->r[31]; // 801C0258
  c->r[3]=c->r[1]+0x0000001Cu; // 801C025C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C0260
  c->lr=0x801C0268u; f_801BFA94(c); // 801C0264
L_801C0268:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C0268
  if (crb(c,2)) { goto L_801C0340; } // 801C026C
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801C0270
  if (crb(c,2)) { goto L_801C0300; } // 801C0274
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C0278
  c->r[5]=c->r[28]|c->r[28]; // 801C027C
  c->r[6]=c->r[29]|c->r[29]; // 801C0280
  c->r[7]=c->r[30]|c->r[30]; // 801C0284
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C0288
  c->r[3]=c->r[1]+0x00000030u; // 801C028C
  c->r[4]=c->r[1]+0x00000018u; // 801C0290
  c->lr=0x801C0298u; f_801C0008(c); // 801C0294
  c->r[0]=R32(c->r[1]+0x00000030u); // 801C0298
  c->r[5]=0u+0x801C0000u; // 801C029C
  c->r[26]=c->r[3]|c->r[3]; // 801C02A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801C02A4
  c->r[5]=c->r[5]+0x000003A4u; // 801C02A8
  c->r[4]=c->r[3]+c->r[0]; // 801C02AC
  c->lr=0x801C02B4u; f_801C0408(c); // 801C02B0
  cmps(c,0,(int32_t)c->r[30],0); // 801C02B4
  if (crb(c,2)) { goto L_801C02E0; } // 801C02B8
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C02BC
  c->r[4]=c->r[26]|c->r[26]; // 801C02C0
  c->r[5]=R32(c->r[1]+0x00000030u); // 801C02C4
  c->r[6]=c->r[30]|c->r[30]; // 801C02C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C02CC
  c->r[7]=c->r[31]|c->r[31]; // 801C02D0
  c->r[3]=c->r[1]+0x00000014u; // 801C02D4
  c->lr=0x801C02DCu; f_801BFEA8(c); // 801C02D8
  goto L_801C0340; // 801C02DC
L_801C02E0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C02E0
  c->r[4]=c->r[26]|c->r[26]; // 801C02E4
  c->r[5]=R32(c->r[1]+0x00000030u); // 801C02E8
  c->r[6]=c->r[31]|c->r[31]; // 801C02EC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C02F0
  c->r[3]=c->r[1]+0x00000010u; // 801C02F4
  c->lr=0x801C02FCu; f_801BFD98(c); // 801C02F8
  goto L_801C0340; // 801C02FC
L_801C0300:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C0300
  if (crb(c,2)) { goto L_801C0328; } // 801C0304
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C0308
  c->r[4]=c->r[29]|c->r[29]; // 801C030C
  c->r[5]=c->r[30]|c->r[30]; // 801C0310
  c->r[6]=c->r[31]|c->r[31]; // 801C0314
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C0318
  c->r[3]=c->r[1]+0x0000000Cu; // 801C031C
  c->lr=0x801C0324u; f_801BFBD4(c); // 801C0320
  goto L_801C0340; // 801C0324
L_801C0328:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C0328
  c->r[4]=c->r[29]|c->r[29]; // 801C032C
  c->r[5]=c->r[31]|c->r[31]; // 801C0330
  c->r[3]=c->r[1]+0x00000008u; // 801C0334
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C0338
  c->lr=0x801C0340u; f_801BFA94(c); // 801C033C
L_801C0340:;
  c->r[3]=0u+0x00000000u; // 801C0340
  c->r[4]=0u+0x00000000u; // 801C0344
  c->r[5]=0u+0x00000000u; // 801C0348
  c->lr=0x801C0350u; f_801BAEF4(c); // 801C034C
  c->r[11]=c->r[1]+0x00000050u; // 801C0350
  c->lr=0x801C0358u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0354
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C0358
  c->lr=c->r[0]; // 801C035C
  c->r[1]=c->r[1]+0x00000050u; // 801C0360
  return; // 801C0364
}

// FrontToBack__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ
void f_801C0368(Ctx* __restrict c) {
  trace_call(0x801C0368u);
  c->r[0]=R16(c->r[4]+0x00000004u); // 801C0368
  c->r[5]=R16(c->r[3]+0x00000004u); // 801C036C
  cmpu(c,0,c->r[5],c->r[0]); // 801C0370
  if (!crb(c,0)) { goto L_801C0380; } // 801C0374
  c->r[3]=0u+0x00000001u; // 801C0378
  return; // 801C037C
L_801C0380:;
  if (!crb(c,1)) { goto L_801C038C; } // 801C0380
  c->r[3]=0u+0x00000000u; // 801C0384
  return; // 801C0388
L_801C038C:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C038C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0390
  fcmp(c,0,c->f[1],c->f[0]); // 801C0394
  c->r[3]=c->cr; // 801C0398
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 801C039C
  return; // 801C03A0
}

// BackToFront__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ
void f_801C03A4(Ctx* __restrict c) {
  trace_call(0x801C03A4u);
  c->r[0]=R16(c->r[4]+0x00000004u); // 801C03A4
  c->r[5]=R16(c->r[3]+0x00000004u); // 801C03A8
  cmpu(c,0,c->r[5],c->r[0]); // 801C03AC
  if (!crb(c,0)) { goto L_801C03BC; } // 801C03B0
  c->r[3]=0u+0x00000001u; // 801C03B4
  return; // 801C03B8
L_801C03BC:;
  if (!crb(c,1)) { goto L_801C03C8; } // 801C03BC
  c->r[3]=0u+0x00000000u; // 801C03C0
  return; // 801C03C4
L_801C03C8:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C03C8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C03CC
  fcmp(c,0,c->f[1],c->f[0]); // 801C03D0
  if (!crb(c,0)) { goto L_801C03E0; } // 801C03D4
  c->r[3]=0u+0x00000001u; // 801C03D8
  return; // 801C03DC
L_801C03E0:;
  fcmp(c,0,c->f[1],c->f[0]); // 801C03E0
  if (!crb(c,2)) { goto L_801C0400; } // 801C03E4
  c->r[3]=R16(c->r[3]+0x00000008u); // 801C03E8
  c->r[0]=R16(c->r[4]+0x00000008u); // 801C03EC
  cmpu(c,0,c->r[3],c->r[0]); // 801C03F0
  if (!crb(c,0)) { goto L_801C0400; } // 801C03F4
  c->r[3]=0u+0x00000001u; // 801C03F8
  return; // 801C03FC
L_801C0400:;
  c->r[3]=0u+0x00000000u; // 801C0400
  return; // 801C0404
}

// sort<PQ54nw4r3g3d6detail7workmem4MdlZ,PFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_801C0408(Ctx* __restrict c) {
  trace_call(0x801C0408u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0408
  c->r[0]=c->lr; // 801C040C
  W32(c->r[1]+0x00000084u,c->r[0]); // 801C0410
  c->r[11]=c->r[1]+0x00000080u; // 801C0414
  c->lr=0x801C041Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0418
  c->r[24]=0u+0x2AAB0000u; // 801C041C
  c->r[6]=0u+0x66660000u; // 801C0420
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C0424
  c->r[25]=c->r[3]|c->r[3]; // 801C0428
  c->r[26]=c->r[4]|c->r[4]; // 801C042C
  c->r[31]=c->r[6]+0x00006667u; // 801C0430
  c->r[30]=c->r[24]+0xFFFFAAABu; // 801C0434
L_801C0438:;
  c->r[0]=c->r[26]-c->r[25]; // 801C0438
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 801C043C
  c->r[0]=sraw(c,c->r[0],1); // 801C0440
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C0444
  c->r[7]=c->r[0]+c->r[3]; // 801C0448
  cmps(c,0,(int32_t)c->r[7],1); // 801C044C
  if (!crb(c,1)) { goto L_801C09AC; } // 801C0450
  cmps(c,0,(int32_t)c->r[7],20); // 801C0454
  if (crb(c,1)) { goto L_801C052C; } // 801C0458
  cmpu(c,0,c->r[25],c->r[26]); // 801C045C
  if (crb(c,2)) { goto L_801C09AC; } // 801C0460
  c->r[24]=c->r[26]+0xFFFFFFF4u; // 801C0464
  goto L_801C0520; // 801C0468
L_801C046C:;
  cmpu(c,0,c->r[25],c->r[26]); // 801C046C
  c->r[27]=c->r[25]|c->r[25]; // 801C0470
  if (crb(c,2)) { goto L_801C04AC; } // 801C0474
  c->r[28]=c->r[25]+0x0000000Cu; // 801C0478
  goto L_801C04A4; // 801C047C
L_801C0480:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C0480
  c->r[3]=c->r[28]|c->r[28]; // 801C0484
  c->r[4]=c->r[27]|c->r[27]; // 801C0488
  c->ctr=c->r[12]; // 801C048C
  if (true) { c->lr=0x801C0494u; dispatch(c,c->ctr); } // 801C0490
  cmps(c,0,(int32_t)c->r[3],0); // 801C0494
  if (crb(c,2)) { goto L_801C04A0; } // 801C0498
  c->r[27]=c->r[28]|c->r[28]; // 801C049C
L_801C04A0:;
  c->r[28]=c->r[28]+0x0000000Cu; // 801C04A0
L_801C04A4:;
  cmpu(c,0,c->r[28],c->r[26]); // 801C04A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0480; } // 801C04A8
L_801C04AC:;
  cmpu(c,0,c->r[27],c->r[25]); // 801C04AC
  if (crb(c,2)) { goto L_801C051C; } // 801C04B0
  c->r[7]=R32(c->r[27]+0x00000000u); // 801C04B4
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C04B8
  c->r[3]=R32(c->r[27]+0x00000008u); // 801C04BC
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C04C0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801C04C4
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 801C04C8
  c->r[5]=R16(c->r[1]+0x0000004Cu); // 801C04CC
  c->r[0]=R16(c->r[25]+0x00000004u); // 801C04D0
  W32(c->r[1]+0x00000048u,c->r[7]); // 801C04D4
  c->r[4]=R16(c->r[1]+0x0000004Eu); // 801C04D8
  W16(c->r[27]+0x00000004u,c->r[0]); // 801C04DC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C04E0
  c->r[6]=R16(c->r[25]+0x00000006u); // 801C04E4
  W32(c->r[1]+0x00000050u,c->r[3]); // 801C04E8
  W16(c->r[27]+0x00000006u,c->r[6]); // 801C04EC
  c->r[3]=R16(c->r[1]+0x00000050u); // 801C04F0
  c->r[6]=R16(c->r[25]+0x00000008u); // 801C04F4
  c->r[0]=R16(c->r[1]+0x00000052u); // 801C04F8
  W16(c->r[27]+0x00000008u,c->r[6]); // 801C04FC
  c->r[6]=R16(c->r[25]+0x0000000Au); // 801C0500
  W16(c->r[27]+0x0000000Au,c->r[6]); // 801C0504
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 801C0508
  W16(c->r[25]+0x00000004u,c->r[5]); // 801C050C
  W16(c->r[25]+0x00000006u,c->r[4]); // 801C0510
  W16(c->r[25]+0x00000008u,c->r[3]); // 801C0514
  W16(c->r[25]+0x0000000Au,c->r[0]); // 801C0518
L_801C051C:;
  c->r[25]=c->r[25]+0x0000000Cu; // 801C051C
L_801C0520:;
  cmpu(c,0,c->r[25],c->r[24]); // 801C0520
  if (!crb(c,2)) { IRQCHK(c); goto L_801C046C; } // 801C0524
  goto L_801C09AC; // 801C0528
L_801C052C:;
  c->r[4]=R32(c->r[13]+0xFFFF9090u); // 801C052C
  c->r[0]=sraw(c,c->r[7],2); // 801C0530
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 801C0534
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 801C0538
  c->r[6]=c->r[4]+0x00000001u; // 801C053C
  cmps(c,0,(int32_t)c->r[6],5); // 801C0540
  c->r[0]=sraw(c,c->r[0],1); // 801C0544
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C0548
  c->r[0]=c->r[0]+c->r[3]; // 801C054C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801C0550
  c->r[0]=c->r[4]-c->r[0]; // 801C0554
  c->r[0]=c->r[5]+c->r[0]; // 801C0558
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801C055C
  c->r[3]=c->r[25]+c->r[0]; // 801C0560
  if (crb(c,0)) { goto L_801C056C; } // 801C0564
  c->r[6]=0u+0xFFFFFFFCu; // 801C0568
L_801C056C:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 801C056C
  c->r[0]=c->r[6]+0x00000001u; // 801C0570
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801C0574
  W32(c->r[13]+0xFFFF9090u,c->r[0]); // 801C0578
  cmps(c,0,(int32_t)c->r[0],5); // 801C057C
  c->r[0]=c->r[5]-c->r[7]; // 801C0580
  c->r[0]=sraw(c,c->r[0],2); // 801C0584
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 801C0588
  c->r[0]=sraw(c,c->r[4],1); // 801C058C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801C0590
  c->r[0]=c->r[0]+c->r[4]; // 801C0594
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801C0598
  c->r[0]=c->r[6]-c->r[0]; // 801C059C
  c->r[0]=c->r[5]+c->r[0]; // 801C05A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801C05A4
  c->r[4]=c->r[25]+c->r[0]; // 801C05A8
  if (crb(c,0)) { goto L_801C05B8; } // 801C05AC
  c->r[6]=0u+0xFFFFFFFCu; // 801C05B0
  W32(c->r[13]+0xFFFF9090u,c->r[6]); // 801C05B4
L_801C05B8:;
  c->r[27]=c->r[26]+0xFFFFFFF4u; // 801C05B8
  c->r[6]=c->r[1]+0x00000008u; // 801C05BC
  c->r[5]=c->r[27]|c->r[27]; // 801C05C0
  c->lr=0x801C05C8u; f_801C0F80(c); // 801C05C4
  c->r[29]=c->r[25]|c->r[25]; // 801C05C8
  c->r[28]=c->r[27]|c->r[27]; // 801C05CC
  goto L_801C05D8; // 801C05D0
L_801C05D4:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801C05D4
L_801C05D8:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C05D8
  c->r[3]=c->r[29]|c->r[29]; // 801C05DC
  c->r[4]=c->r[27]|c->r[27]; // 801C05E0
  c->ctr=c->r[12]; // 801C05E4
  if (true) { c->lr=0x801C05ECu; dispatch(c,c->ctr); } // 801C05E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C05EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C05D4; } // 801C05F0
L_801C05F4:;
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 801C05F4
  cmpu(c,0,c->r[29],c->r[28]); // 801C05F8
  if (crb(c,2)) { goto L_801C061C; } // 801C05FC
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C0600
  c->r[3]=c->r[28]|c->r[28]; // 801C0604
  c->r[4]=c->r[27]|c->r[27]; // 801C0608
  c->ctr=c->r[12]; // 801C060C
  if (true) { c->lr=0x801C0614u; dispatch(c,c->ctr); } // 801C0610
  cmps(c,0,(int32_t)c->r[3],0); // 801C0614
  if (crb(c,2)) { IRQCHK(c); goto L_801C05F4; } // 801C0618
L_801C061C:;
  cmpu(c,0,c->r[29],c->r[28]); // 801C061C
  if (!crb(c,0)) { goto L_801C074C; } // 801C0620
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C0624
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0628
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C062C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0630
  W32(c->r[1]+0x00000040u,c->r[0]); // 801C0634
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C0638
  c->r[5]=R16(c->r[1]+0x00000040u); // 801C063C
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C0640
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 801C0644
  c->r[4]=R16(c->r[1]+0x00000042u); // 801C0648
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C064C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0650
  c->r[6]=R16(c->r[28]+0x00000006u); // 801C0654
  W32(c->r[1]+0x00000044u,c->r[3]); // 801C0658
  W16(c->r[29]+0x00000006u,c->r[6]); // 801C065C
  c->r[3]=R16(c->r[1]+0x00000044u); // 801C0660
  c->r[6]=R16(c->r[28]+0x00000008u); // 801C0664
  c->r[0]=R16(c->r[1]+0x00000046u); // 801C0668
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C066C
  c->r[6]=R16(c->r[28]+0x0000000Au); // 801C0670
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C0674
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0678
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801C067C
  W16(c->r[28]+0x00000004u,c->r[5]); // 801C0680
  W16(c->r[28]+0x00000006u,c->r[4]); // 801C0684
  W16(c->r[28]+0x00000008u,c->r[3]); // 801C0688
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801C068C
  goto L_801C0698; // 801C0690
L_801C0694:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0694
L_801C0698:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C0698
  c->r[3]=c->r[29]|c->r[29]; // 801C069C
  c->r[4]=c->r[27]|c->r[27]; // 801C06A0
  c->ctr=c->r[12]; // 801C06A4
  if (true) { c->lr=0x801C06ACu; dispatch(c,c->ctr); } // 801C06A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C06AC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0694; } // 801C06B0
L_801C06B4:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C06B4
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 801C06B8
  c->r[3]=c->r[28]|c->r[28]; // 801C06BC
  c->r[4]=c->r[27]|c->r[27]; // 801C06C0
  c->ctr=c->r[12]; // 801C06C4
  if (true) { c->lr=0x801C06CCu; dispatch(c,c->ctr); } // 801C06C8
  cmps(c,0,(int32_t)c->r[3],0); // 801C06CC
  if (crb(c,2)) { IRQCHK(c); goto L_801C06B4; } // 801C06D0
  cmpu(c,0,c->r[29],c->r[28]); // 801C06D4
  if (!crb(c,0)) { goto L_801C074C; } // 801C06D8
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C06DC
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C06E0
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C06E4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C06E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C06EC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C06F0
  c->r[5]=R16(c->r[1]+0x00000034u); // 801C06F4
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C06F8
  W32(c->r[1]+0x00000030u,c->r[7]); // 801C06FC
  c->r[4]=R16(c->r[1]+0x00000036u); // 801C0700
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C0704
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0708
  c->r[6]=R16(c->r[28]+0x00000006u); // 801C070C
  W32(c->r[1]+0x00000038u,c->r[3]); // 801C0710
  W16(c->r[29]+0x00000006u,c->r[6]); // 801C0714
  c->r[3]=R16(c->r[1]+0x00000038u); // 801C0718
  c->r[6]=R16(c->r[28]+0x00000008u); // 801C071C
  c->r[0]=R16(c->r[1]+0x0000003Au); // 801C0720
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C0724
  c->r[6]=R16(c->r[28]+0x0000000Au); // 801C0728
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C072C
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0730
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801C0734
  W16(c->r[28]+0x00000004u,c->r[5]); // 801C0738
  W16(c->r[28]+0x00000006u,c->r[4]); // 801C073C
  W16(c->r[28]+0x00000008u,c->r[3]); // 801C0740
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801C0744
  IRQCHK(c); goto L_801C0698; // 801C0748
L_801C074C:;
  cmpu(c,0,c->r[29],c->r[25]); // 801C074C
  if (!crb(c,2)) { goto L_801C0948; } // 801C0750
  c->r[9]=R32(c->r[29]+0x00000000u); // 801C0754
  c->r[28]=c->r[26]+0xFFFFFFF4u; // 801C0758
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C075C
  c->r[3]=c->r[25]|c->r[25]; // 801C0760
  c->r[5]=R32(c->r[29]+0x00000008u); // 801C0764
  c->r[4]=c->r[28]|c->r[28]; // 801C0768
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C076C
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C0770
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C0774
  c->r[7]=R16(c->r[1]+0x00000028u); // 801C0778
  c->r[0]=R16(c->r[27]+0x00000004u); // 801C077C
  W32(c->r[1]+0x00000024u,c->r[9]); // 801C0780
  c->r[6]=R16(c->r[1]+0x0000002Au); // 801C0784
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C0788
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C078C
  c->r[8]=R16(c->r[27]+0x00000006u); // 801C0790
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801C0794
  W16(c->r[29]+0x00000006u,c->r[8]); // 801C0798
  c->r[5]=R16(c->r[1]+0x0000002Cu); // 801C079C
  c->r[8]=R16(c->r[27]+0x00000008u); // 801C07A0
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 801C07A4
  W16(c->r[29]+0x00000008u,c->r[8]); // 801C07A8
  c->r[8]=R16(c->r[27]+0x0000000Au); // 801C07AC
  W16(c->r[29]+0x0000000Au,c->r[8]); // 801C07B0
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 801C07B4
  W16(c->r[27]+0x00000004u,c->r[7]); // 801C07B8
  W16(c->r[27]+0x00000006u,c->r[6]); // 801C07BC
  W16(c->r[27]+0x00000008u,c->r[5]); // 801C07C0
  W16(c->r[27]+0x0000000Au,c->r[0]); // 801C07C4
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C07C8
  c->ctr=c->r[12]; // 801C07CC
  c->r[29]=c->r[29]+0x0000000Cu; // 801C07D0
  if (true) { c->lr=0x801C07D8u; dispatch(c,c->ctr); } // 801C07D4
  cmps(c,0,(int32_t)c->r[3],0); // 801C07D8
  if (!crb(c,2)) { goto L_801C087C; } // 801C07DC
  goto L_801C07E8; // 801C07E0
L_801C07E4:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801C07E4
L_801C07E8:;
  cmpu(c,0,c->r[29],c->r[26]); // 801C07E8
  if (crb(c,2)) { goto L_801C080C; } // 801C07EC
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C07F0
  c->r[3]=c->r[25]|c->r[25]; // 801C07F4
  c->r[4]=c->r[29]|c->r[29]; // 801C07F8
  c->ctr=c->r[12]; // 801C07FC
  if (true) { c->lr=0x801C0804u; dispatch(c,c->ctr); } // 801C0800
  cmps(c,0,(int32_t)c->r[3],0); // 801C0804
  if (crb(c,2)) { IRQCHK(c); goto L_801C07E4; } // 801C0808
L_801C080C:;
  cmpu(c,0,c->r[29],c->r[28]); // 801C080C
  if (!crb(c,0)) { goto L_801C087C; } // 801C0810
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C0814
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0818
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C081C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0820
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C0824
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C0828
  c->r[5]=R16(c->r[1]+0x0000001Cu); // 801C082C
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C0830
  W32(c->r[1]+0x00000018u,c->r[7]); // 801C0834
  c->r[4]=R16(c->r[1]+0x0000001Eu); // 801C0838
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C083C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0840
  c->r[6]=R16(c->r[28]+0x00000006u); // 801C0844
  W32(c->r[1]+0x00000020u,c->r[3]); // 801C0848
  W16(c->r[29]+0x00000006u,c->r[6]); // 801C084C
  c->r[3]=R16(c->r[1]+0x00000020u); // 801C0850
  c->r[6]=R16(c->r[28]+0x00000008u); // 801C0854
  c->r[0]=R16(c->r[1]+0x00000022u); // 801C0858
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C085C
  c->r[6]=R16(c->r[28]+0x0000000Au); // 801C0860
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C0864
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801C0868
  W16(c->r[28]+0x00000004u,c->r[5]); // 801C086C
  W16(c->r[28]+0x00000006u,c->r[4]); // 801C0870
  W16(c->r[28]+0x00000008u,c->r[3]); // 801C0874
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801C0878
L_801C087C:;
  cmpu(c,0,c->r[29],c->r[28]); // 801C087C
  if (!crb(c,0)) { goto L_801C0940; } // 801C0880
  goto L_801C088C; // 801C0884
L_801C0888:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0888
L_801C088C:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C088C
  c->r[3]=c->r[25]|c->r[25]; // 801C0890
  c->r[4]=c->r[29]|c->r[29]; // 801C0894
  c->ctr=c->r[12]; // 801C0898
  if (true) { c->lr=0x801C08A0u; dispatch(c,c->ctr); } // 801C089C
  cmps(c,0,(int32_t)c->r[3],0); // 801C08A0
  if (crb(c,2)) { IRQCHK(c); goto L_801C0888; } // 801C08A4
L_801C08A8:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 801C08A8
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 801C08AC
  c->r[3]=c->r[25]|c->r[25]; // 801C08B0
  c->r[4]=c->r[28]|c->r[28]; // 801C08B4
  c->ctr=c->r[12]; // 801C08B8
  if (true) { c->lr=0x801C08C0u; dispatch(c,c->ctr); } // 801C08BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C08C0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C08A8; } // 801C08C4
  cmpu(c,0,c->r[29],c->r[28]); // 801C08C8
  if (!crb(c,0)) { goto L_801C0940; } // 801C08CC
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C08D0
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C08D4
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C08D8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C08DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C08E0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C08E4
  c->r[5]=R16(c->r[1]+0x00000010u); // 801C08E8
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C08EC
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801C08F0
  c->r[4]=R16(c->r[1]+0x00000012u); // 801C08F4
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C08F8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C08FC
  c->r[6]=R16(c->r[28]+0x00000006u); // 801C0900
  W32(c->r[1]+0x00000014u,c->r[3]); // 801C0904
  W16(c->r[29]+0x00000006u,c->r[6]); // 801C0908
  c->r[3]=R16(c->r[1]+0x00000014u); // 801C090C
  c->r[6]=R16(c->r[28]+0x00000008u); // 801C0910
  c->r[0]=R16(c->r[1]+0x00000016u); // 801C0914
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C0918
  c->r[6]=R16(c->r[28]+0x0000000Au); // 801C091C
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C0920
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0924
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801C0928
  W16(c->r[28]+0x00000004u,c->r[5]); // 801C092C
  W16(c->r[28]+0x00000006u,c->r[4]); // 801C0930
  W16(c->r[28]+0x00000008u,c->r[3]); // 801C0934
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801C0938
  IRQCHK(c); goto L_801C088C; // 801C093C
L_801C0940:;
  c->r[25]=c->r[29]|c->r[29]; // 801C0940
  IRQCHK(c); goto L_801C0438; // 801C0944
L_801C0948:;
  c->r[0]=c->r[29]-c->r[25]; // 801C0948
  c->r[4]=c->r[24]+0xFFFFAAABu; // 801C094C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801C0950
  c->r[0]=c->r[26]-c->r[29]; // 801C0954
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801C0958
  c->r[3]=sraw(c,c->r[3],1); // 801C095C
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801C0960
  c->r[0]=sraw(c,c->r[0],1); // 801C0964
  c->r[4]=c->r[3]+c->r[4]; // 801C0968
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C096C
  c->r[0]=c->r[0]+c->r[3]; // 801C0970
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C0974
  if (!crb(c,0)) { goto L_801C0994; } // 801C0978
  c->r[3]=c->r[25]|c->r[25]; // 801C097C
  c->r[4]=c->r[29]|c->r[29]; // 801C0980
  c->r[5]=c->r[1]+0x00000008u; // 801C0984
  c->lr=0x801C098Cu; f_801C09C4(c); // 801C0988
  c->r[25]=c->r[29]|c->r[29]; // 801C098C
  IRQCHK(c); goto L_801C0438; // 801C0990
L_801C0994:;
  c->r[3]=c->r[29]|c->r[29]; // 801C0994
  c->r[4]=c->r[26]|c->r[26]; // 801C0998
  c->r[5]=c->r[1]+0x00000008u; // 801C099C
  c->lr=0x801C09A4u; f_801C09C4(c); // 801C09A0
  c->r[26]=c->r[29]|c->r[29]; // 801C09A4
  IRQCHK(c); goto L_801C0438; // 801C09A8
L_801C09AC:;
  c->r[11]=c->r[1]+0x00000080u; // 801C09AC
  c->lr=0x801C09B4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C09B0
  c->r[0]=R32(c->r[1]+0x00000084u); // 801C09B4
  c->lr=c->r[0]; // 801C09B8
  c->r[1]=c->r[1]+0x00000080u; // 801C09BC
  return; // 801C09C0
}

// sort<PQ54nw4r3g3d6detail7workmem4MdlZ,RPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZRPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_801C09C4(Ctx* __restrict c) {
  trace_call(0x801C09C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C09C4
  c->r[0]=c->lr; // 801C09C8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801C09CC
  c->r[11]=c->r[1]+0x00000080u; // 801C09D0
  c->lr=0x801C09D8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C09D4
  c->r[23]=0u+0x2AAB0000u; // 801C09D8
  c->r[6]=0u+0x66660000u; // 801C09DC
  c->r[24]=c->r[3]|c->r[3]; // 801C09E0
  c->r[25]=c->r[4]|c->r[4]; // 801C09E4
  c->r[26]=c->r[5]|c->r[5]; // 801C09E8
  c->r[31]=c->r[6]+0x00006667u; // 801C09EC
  c->r[30]=c->r[23]+0xFFFFAAABu; // 801C09F0
L_801C09F4:;
  c->r[0]=c->r[25]-c->r[24]; // 801C09F4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 801C09F8
  c->r[0]=sraw(c,c->r[0],1); // 801C09FC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C0A00
  c->r[7]=c->r[0]+c->r[3]; // 801C0A04
  cmps(c,0,(int32_t)c->r[7],1); // 801C0A08
  if (!crb(c,1)) { goto L_801C0F68; } // 801C0A0C
  cmps(c,0,(int32_t)c->r[7],20); // 801C0A10
  if (crb(c,1)) { goto L_801C0AE8; } // 801C0A14
  cmpu(c,0,c->r[24],c->r[25]); // 801C0A18
  if (crb(c,2)) { goto L_801C0F68; } // 801C0A1C
  c->r[23]=c->r[25]+0xFFFFFFF4u; // 801C0A20
  goto L_801C0ADC; // 801C0A24
L_801C0A28:;
  cmpu(c,0,c->r[24],c->r[25]); // 801C0A28
  c->r[27]=c->r[24]|c->r[24]; // 801C0A2C
  if (crb(c,2)) { goto L_801C0A68; } // 801C0A30
  c->r[28]=c->r[24]+0x0000000Cu; // 801C0A34
  goto L_801C0A60; // 801C0A38
L_801C0A3C:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0A3C
  c->r[3]=c->r[28]|c->r[28]; // 801C0A40
  c->r[4]=c->r[27]|c->r[27]; // 801C0A44
  c->ctr=c->r[12]; // 801C0A48
  if (true) { c->lr=0x801C0A50u; dispatch(c,c->ctr); } // 801C0A4C
  cmps(c,0,(int32_t)c->r[3],0); // 801C0A50
  if (crb(c,2)) { goto L_801C0A5C; } // 801C0A54
  c->r[27]=c->r[28]|c->r[28]; // 801C0A58
L_801C0A5C:;
  c->r[28]=c->r[28]+0x0000000Cu; // 801C0A5C
L_801C0A60:;
  cmpu(c,0,c->r[28],c->r[25]); // 801C0A60
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0A3C; } // 801C0A64
L_801C0A68:;
  cmpu(c,0,c->r[27],c->r[24]); // 801C0A68
  if (crb(c,2)) { goto L_801C0AD8; } // 801C0A6C
  c->r[7]=R32(c->r[27]+0x00000000u); // 801C0A70
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C0A74
  c->r[3]=R32(c->r[27]+0x00000008u); // 801C0A78
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0A7C
  W32(c->r[1]+0x00000048u,c->r[0]); // 801C0A80
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 801C0A84
  c->r[5]=R16(c->r[1]+0x00000048u); // 801C0A88
  c->r[0]=R16(c->r[24]+0x00000004u); // 801C0A8C
  W32(c->r[1]+0x00000044u,c->r[7]); // 801C0A90
  c->r[4]=R16(c->r[1]+0x0000004Au); // 801C0A94
  W16(c->r[27]+0x00000004u,c->r[0]); // 801C0A98
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0A9C
  c->r[6]=R16(c->r[24]+0x00000006u); // 801C0AA0
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801C0AA4
  W16(c->r[27]+0x00000006u,c->r[6]); // 801C0AA8
  c->r[3]=R16(c->r[1]+0x0000004Cu); // 801C0AAC
  c->r[6]=R16(c->r[24]+0x00000008u); // 801C0AB0
  c->r[0]=R16(c->r[1]+0x0000004Eu); // 801C0AB4
  W16(c->r[27]+0x00000008u,c->r[6]); // 801C0AB8
  c->r[6]=R16(c->r[24]+0x0000000Au); // 801C0ABC
  W16(c->r[27]+0x0000000Au,c->r[6]); // 801C0AC0
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 801C0AC4
  W16(c->r[24]+0x00000004u,c->r[5]); // 801C0AC8
  W16(c->r[24]+0x00000006u,c->r[4]); // 801C0ACC
  W16(c->r[24]+0x00000008u,c->r[3]); // 801C0AD0
  W16(c->r[24]+0x0000000Au,c->r[0]); // 801C0AD4
L_801C0AD8:;
  c->r[24]=c->r[24]+0x0000000Cu; // 801C0AD8
L_801C0ADC:;
  cmpu(c,0,c->r[24],c->r[23]); // 801C0ADC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0A28; } // 801C0AE0
  goto L_801C0F68; // 801C0AE4
L_801C0AE8:;
  c->r[4]=R32(c->r[13]+0xFFFF9094u); // 801C0AE8
  c->r[0]=sraw(c,c->r[7],2); // 801C0AEC
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 801C0AF0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 801C0AF4
  c->r[6]=c->r[4]+0x00000001u; // 801C0AF8
  cmps(c,0,(int32_t)c->r[6],5); // 801C0AFC
  c->r[0]=sraw(c,c->r[0],1); // 801C0B00
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C0B04
  c->r[0]=c->r[0]+c->r[3]; // 801C0B08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801C0B0C
  c->r[0]=c->r[4]-c->r[0]; // 801C0B10
  c->r[0]=c->r[5]+c->r[0]; // 801C0B14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801C0B18
  c->r[3]=c->r[24]+c->r[0]; // 801C0B1C
  if (crb(c,0)) { goto L_801C0B28; } // 801C0B20
  c->r[6]=0u+0xFFFFFFFCu; // 801C0B24
L_801C0B28:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 801C0B28
  c->r[0]=c->r[6]+0x00000001u; // 801C0B2C
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801C0B30
  W32(c->r[13]+0xFFFF9094u,c->r[0]); // 801C0B34
  cmps(c,0,(int32_t)c->r[0],5); // 801C0B38
  c->r[0]=c->r[5]-c->r[7]; // 801C0B3C
  c->r[0]=sraw(c,c->r[0],2); // 801C0B40
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 801C0B44
  c->r[0]=sraw(c,c->r[4],1); // 801C0B48
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801C0B4C
  c->r[0]=c->r[0]+c->r[4]; // 801C0B50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 801C0B54
  c->r[0]=c->r[6]-c->r[0]; // 801C0B58
  c->r[0]=c->r[5]+c->r[0]; // 801C0B5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801C0B60
  c->r[4]=c->r[24]+c->r[0]; // 801C0B64
  if (crb(c,0)) { goto L_801C0B74; } // 801C0B68
  c->r[6]=0u+0xFFFFFFFCu; // 801C0B6C
  W32(c->r[13]+0xFFFF9094u,c->r[6]); // 801C0B70
L_801C0B74:;
  c->r[27]=c->r[25]+0xFFFFFFF4u; // 801C0B74
  c->r[6]=c->r[26]|c->r[26]; // 801C0B78
  c->r[5]=c->r[27]|c->r[27]; // 801C0B7C
  c->lr=0x801C0B84u; f_801C0F80(c); // 801C0B80
  c->r[29]=c->r[24]|c->r[24]; // 801C0B84
  c->r[28]=c->r[27]|c->r[27]; // 801C0B88
  goto L_801C0B94; // 801C0B8C
L_801C0B90:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0B90
L_801C0B94:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0B94
  c->r[3]=c->r[29]|c->r[29]; // 801C0B98
  c->r[4]=c->r[27]|c->r[27]; // 801C0B9C
  c->ctr=c->r[12]; // 801C0BA0
  if (true) { c->lr=0x801C0BA8u; dispatch(c,c->ctr); } // 801C0BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801C0BA8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0B90; } // 801C0BAC
L_801C0BB0:;
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 801C0BB0
  cmpu(c,0,c->r[29],c->r[28]); // 801C0BB4
  if (crb(c,2)) { goto L_801C0BD8; } // 801C0BB8
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0BBC
  c->r[3]=c->r[28]|c->r[28]; // 801C0BC0
  c->r[4]=c->r[27]|c->r[27]; // 801C0BC4
  c->ctr=c->r[12]; // 801C0BC8
  if (true) { c->lr=0x801C0BD0u; dispatch(c,c->ctr); } // 801C0BCC
  cmps(c,0,(int32_t)c->r[3],0); // 801C0BD0
  if (crb(c,2)) { IRQCHK(c); goto L_801C0BB0; } // 801C0BD4
L_801C0BD8:;
  cmpu(c,0,c->r[29],c->r[28]); // 801C0BD8
  if (!crb(c,0)) { goto L_801C0D08; } // 801C0BDC
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C0BE0
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0BE4
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C0BE8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0BEC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801C0BF0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C0BF4
  c->r[5]=R16(c->r[1]+0x0000003Cu); // 801C0BF8
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C0BFC
  W32(c->r[1]+0x00000038u,c->r[7]); // 801C0C00
  c->r[4]=R16(c->r[1]+0x0000003Eu); // 801C0C04
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C0C08
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0C0C
  c->r[6]=R16(c->r[28]+0x00000006u); // 801C0C10
  W32(c->r[1]+0x00000040u,c->r[3]); // 801C0C14
  W16(c->r[29]+0x00000006u,c->r[6]); // 801C0C18
  c->r[3]=R16(c->r[1]+0x00000040u); // 801C0C1C
  c->r[6]=R16(c->r[28]+0x00000008u); // 801C0C20
  c->r[0]=R16(c->r[1]+0x00000042u); // 801C0C24
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C0C28
  c->r[6]=R16(c->r[28]+0x0000000Au); // 801C0C2C
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C0C30
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0C34
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801C0C38
  W16(c->r[28]+0x00000004u,c->r[5]); // 801C0C3C
  W16(c->r[28]+0x00000006u,c->r[4]); // 801C0C40
  W16(c->r[28]+0x00000008u,c->r[3]); // 801C0C44
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801C0C48
  goto L_801C0C54; // 801C0C4C
L_801C0C50:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0C50
L_801C0C54:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0C54
  c->r[3]=c->r[29]|c->r[29]; // 801C0C58
  c->r[4]=c->r[27]|c->r[27]; // 801C0C5C
  c->ctr=c->r[12]; // 801C0C60
  if (true) { c->lr=0x801C0C68u; dispatch(c,c->ctr); } // 801C0C64
  cmps(c,0,(int32_t)c->r[3],0); // 801C0C68
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0C50; } // 801C0C6C
L_801C0C70:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0C70
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 801C0C74
  c->r[3]=c->r[28]|c->r[28]; // 801C0C78
  c->r[4]=c->r[27]|c->r[27]; // 801C0C7C
  c->ctr=c->r[12]; // 801C0C80
  if (true) { c->lr=0x801C0C88u; dispatch(c,c->ctr); } // 801C0C84
  cmps(c,0,(int32_t)c->r[3],0); // 801C0C88
  if (crb(c,2)) { IRQCHK(c); goto L_801C0C70; } // 801C0C8C
  cmpu(c,0,c->r[29],c->r[28]); // 801C0C90
  if (!crb(c,0)) { goto L_801C0D08; } // 801C0C94
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C0C98
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0C9C
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C0CA0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0CA4
  W32(c->r[1]+0x00000030u,c->r[0]); // 801C0CA8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C0CAC
  c->r[5]=R16(c->r[1]+0x00000030u); // 801C0CB0
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C0CB4
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 801C0CB8
  c->r[4]=R16(c->r[1]+0x00000032u); // 801C0CBC
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C0CC0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0CC4
  c->r[6]=R16(c->r[28]+0x00000006u); // 801C0CC8
  W32(c->r[1]+0x00000034u,c->r[3]); // 801C0CCC
  W16(c->r[29]+0x00000006u,c->r[6]); // 801C0CD0
  c->r[3]=R16(c->r[1]+0x00000034u); // 801C0CD4
  c->r[6]=R16(c->r[28]+0x00000008u); // 801C0CD8
  c->r[0]=R16(c->r[1]+0x00000036u); // 801C0CDC
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C0CE0
  c->r[6]=R16(c->r[28]+0x0000000Au); // 801C0CE4
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C0CE8
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0CEC
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801C0CF0
  W16(c->r[28]+0x00000004u,c->r[5]); // 801C0CF4
  W16(c->r[28]+0x00000006u,c->r[4]); // 801C0CF8
  W16(c->r[28]+0x00000008u,c->r[3]); // 801C0CFC
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801C0D00
  IRQCHK(c); goto L_801C0C54; // 801C0D04
L_801C0D08:;
  cmpu(c,0,c->r[29],c->r[24]); // 801C0D08
  if (!crb(c,2)) { goto L_801C0F04; } // 801C0D0C
  c->r[9]=R32(c->r[29]+0x00000000u); // 801C0D10
  c->r[28]=c->r[25]+0xFFFFFFF4u; // 801C0D14
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0D18
  c->r[3]=c->r[24]|c->r[24]; // 801C0D1C
  c->r[5]=R32(c->r[29]+0x00000008u); // 801C0D20
  c->r[4]=c->r[28]|c->r[28]; // 801C0D24
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D28
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0D2C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C0D30
  c->r[7]=R16(c->r[1]+0x00000024u); // 801C0D34
  c->r[0]=R16(c->r[27]+0x00000004u); // 801C0D38
  W32(c->r[1]+0x00000020u,c->r[9]); // 801C0D3C
  c->r[6]=R16(c->r[1]+0x00000026u); // 801C0D40
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C0D44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D48
  c->r[8]=R16(c->r[27]+0x00000006u); // 801C0D4C
  W32(c->r[1]+0x00000028u,c->r[5]); // 801C0D50
  W16(c->r[29]+0x00000006u,c->r[8]); // 801C0D54
  c->r[5]=R16(c->r[1]+0x00000028u); // 801C0D58
  c->r[8]=R16(c->r[27]+0x00000008u); // 801C0D5C
  c->r[0]=R16(c->r[1]+0x0000002Au); // 801C0D60
  W16(c->r[29]+0x00000008u,c->r[8]); // 801C0D64
  c->r[8]=R16(c->r[27]+0x0000000Au); // 801C0D68
  W16(c->r[29]+0x0000000Au,c->r[8]); // 801C0D6C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 801C0D70
  W16(c->r[27]+0x00000004u,c->r[7]); // 801C0D74
  W16(c->r[27]+0x00000006u,c->r[6]); // 801C0D78
  W16(c->r[27]+0x00000008u,c->r[5]); // 801C0D7C
  W16(c->r[27]+0x0000000Au,c->r[0]); // 801C0D80
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0D84
  c->ctr=c->r[12]; // 801C0D88
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0D8C
  if (true) { c->lr=0x801C0D94u; dispatch(c,c->ctr); } // 801C0D90
  cmps(c,0,(int32_t)c->r[3],0); // 801C0D94
  if (!crb(c,2)) { goto L_801C0E38; } // 801C0D98
  goto L_801C0DA4; // 801C0D9C
L_801C0DA0:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0DA0
L_801C0DA4:;
  cmpu(c,0,c->r[29],c->r[25]); // 801C0DA4
  if (crb(c,2)) { goto L_801C0DC8; } // 801C0DA8
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0DAC
  c->r[3]=c->r[24]|c->r[24]; // 801C0DB0
  c->r[4]=c->r[29]|c->r[29]; // 801C0DB4
  c->ctr=c->r[12]; // 801C0DB8
  if (true) { c->lr=0x801C0DC0u; dispatch(c,c->ctr); } // 801C0DBC
  cmps(c,0,(int32_t)c->r[3],0); // 801C0DC0
  if (crb(c,2)) { IRQCHK(c); goto L_801C0DA0; } // 801C0DC4
L_801C0DC8:;
  cmpu(c,0,c->r[29],c->r[28]); // 801C0DC8
  if (!crb(c,0)) { goto L_801C0E38; } // 801C0DCC
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C0DD0
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0DD4
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C0DD8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0DDC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C0DE0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C0DE4
  c->r[5]=R16(c->r[1]+0x00000018u); // 801C0DE8
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C0DEC
  W32(c->r[1]+0x00000014u,c->r[7]); // 801C0DF0
  c->r[4]=R16(c->r[1]+0x0000001Au); // 801C0DF4
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C0DF8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0DFC
  c->r[6]=R16(c->r[28]+0x00000006u); // 801C0E00
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801C0E04
  W16(c->r[29]+0x00000006u,c->r[6]); // 801C0E08
  c->r[3]=R16(c->r[1]+0x0000001Cu); // 801C0E0C
  c->r[6]=R16(c->r[28]+0x00000008u); // 801C0E10
  c->r[0]=R16(c->r[1]+0x0000001Eu); // 801C0E14
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C0E18
  c->r[6]=R16(c->r[28]+0x0000000Au); // 801C0E1C
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C0E20
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801C0E24
  W16(c->r[28]+0x00000004u,c->r[5]); // 801C0E28
  W16(c->r[28]+0x00000006u,c->r[4]); // 801C0E2C
  W16(c->r[28]+0x00000008u,c->r[3]); // 801C0E30
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801C0E34
L_801C0E38:;
  cmpu(c,0,c->r[29],c->r[28]); // 801C0E38
  if (!crb(c,0)) { goto L_801C0EFC; } // 801C0E3C
  goto L_801C0E48; // 801C0E40
L_801C0E44:;
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0E44
L_801C0E48:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0E48
  c->r[3]=c->r[24]|c->r[24]; // 801C0E4C
  c->r[4]=c->r[29]|c->r[29]; // 801C0E50
  c->ctr=c->r[12]; // 801C0E54
  if (true) { c->lr=0x801C0E5Cu; dispatch(c,c->ctr); } // 801C0E58
  cmps(c,0,(int32_t)c->r[3],0); // 801C0E5C
  if (crb(c,2)) { IRQCHK(c); goto L_801C0E44; } // 801C0E60
L_801C0E64:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801C0E64
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 801C0E68
  c->r[3]=c->r[24]|c->r[24]; // 801C0E6C
  c->r[4]=c->r[28]|c->r[28]; // 801C0E70
  c->ctr=c->r[12]; // 801C0E74
  if (true) { c->lr=0x801C0E7Cu; dispatch(c,c->ctr); } // 801C0E78
  cmps(c,0,(int32_t)c->r[3],0); // 801C0E7C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0E64; } // 801C0E80
  cmpu(c,0,c->r[29],c->r[28]); // 801C0E84
  if (!crb(c,0)) { goto L_801C0EFC; } // 801C0E88
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C0E8C
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0E90
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C0E94
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0E98
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C0E9C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C0EA0
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 801C0EA4
  c->r[0]=R16(c->r[28]+0x00000004u); // 801C0EA8
  W32(c->r[1]+0x00000008u,c->r[7]); // 801C0EAC
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 801C0EB0
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C0EB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0EB8
  c->r[6]=R16(c->r[28]+0x00000006u); // 801C0EBC
  W32(c->r[1]+0x00000010u,c->r[3]); // 801C0EC0
  W16(c->r[29]+0x00000006u,c->r[6]); // 801C0EC4
  c->r[3]=R16(c->r[1]+0x00000010u); // 801C0EC8
  c->r[6]=R16(c->r[28]+0x00000008u); // 801C0ECC
  c->r[0]=R16(c->r[1]+0x00000012u); // 801C0ED0
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C0ED4
  c->r[6]=R16(c->r[28]+0x0000000Au); // 801C0ED8
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C0EDC
  c->r[29]=c->r[29]+0x0000000Cu; // 801C0EE0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801C0EE4
  W16(c->r[28]+0x00000004u,c->r[5]); // 801C0EE8
  W16(c->r[28]+0x00000006u,c->r[4]); // 801C0EEC
  W16(c->r[28]+0x00000008u,c->r[3]); // 801C0EF0
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801C0EF4
  IRQCHK(c); goto L_801C0E48; // 801C0EF8
L_801C0EFC:;
  c->r[24]=c->r[29]|c->r[29]; // 801C0EFC
  IRQCHK(c); goto L_801C09F4; // 801C0F00
L_801C0F04:;
  c->r[0]=c->r[29]-c->r[24]; // 801C0F04
  c->r[4]=c->r[23]+0xFFFFAAABu; // 801C0F08
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801C0F0C
  c->r[0]=c->r[25]-c->r[29]; // 801C0F10
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801C0F14
  c->r[3]=sraw(c,c->r[3],1); // 801C0F18
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801C0F1C
  c->r[0]=sraw(c,c->r[0],1); // 801C0F20
  c->r[4]=c->r[3]+c->r[4]; // 801C0F24
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C0F28
  c->r[0]=c->r[0]+c->r[3]; // 801C0F2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C0F30
  if (!crb(c,0)) { goto L_801C0F50; } // 801C0F34
  c->r[3]=c->r[24]|c->r[24]; // 801C0F38
  c->r[4]=c->r[29]|c->r[29]; // 801C0F3C
  c->r[5]=c->r[26]|c->r[26]; // 801C0F40
  c->lr=0x801C0F48u; f_801C09C4(c); // 801C0F44
  c->r[24]=c->r[29]|c->r[29]; // 801C0F48
  IRQCHK(c); goto L_801C09F4; // 801C0F4C
L_801C0F50:;
  c->r[3]=c->r[29]|c->r[29]; // 801C0F50
  c->r[4]=c->r[25]|c->r[25]; // 801C0F54
  c->r[5]=c->r[26]|c->r[26]; // 801C0F58
  c->lr=0x801C0F60u; f_801C09C4(c); // 801C0F5C
  c->r[25]=c->r[29]|c->r[29]; // 801C0F60
  IRQCHK(c); goto L_801C09F4; // 801C0F64
L_801C0F68:;
  c->r[11]=c->r[1]+0x00000080u; // 801C0F68
  c->lr=0x801C0F70u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0F6C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801C0F70
  c->lr=c->r[0]; // 801C0F74
  c->r[1]=c->r[1]+0x00000080u; // 801C0F78
  return; // 801C0F7C
}

// __sort132<RPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b,PQ54nw4r3g3d6detail7workmem4MdlZ>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZRPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_801C0F80(Ctx* __restrict c) {
  trace_call(0x801C0F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0F80
  c->r[0]=c->lr; // 801C0F84
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C0F88
  c->r[11]=c->r[1]+0x00000050u; // 801C0F8C
  c->lr=0x801C0F94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0F90
  c->r[12]=R32(c->r[6]+0x00000000u); // 801C0F94
  c->r[29]=c->r[3]|c->r[3]; // 801C0F98
  c->r[31]=c->r[5]|c->r[5]; // 801C0F9C
  c->r[30]=c->r[4]|c->r[4]; // 801C0FA0
  c->r[27]=c->r[6]|c->r[6]; // 801C0FA4
  c->r[4]=c->r[29]|c->r[29]; // 801C0FA8
  c->r[3]=c->r[31]|c->r[31]; // 801C0FAC
  c->ctr=c->r[12]; // 801C0FB0
  if (true) { c->lr=0x801C0FB8u; dispatch(c,c->ctr); } // 801C0FB4
  c->r[12]=R32(c->r[27]+0x00000000u); // 801C0FB8
  c->r[0]=cntlz(c->r[3]); // 801C0FBC
  c->r[3]=c->r[30]|c->r[30]; // 801C0FC0
  c->r[4]=c->r[31]|c->r[31]; // 801C0FC4
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0FC8
  c->ctr=c->r[12]; // 801C0FCC
  if (true) { c->lr=0x801C0FD4u; dispatch(c,c->ctr); } // 801C0FD0
  cmps(c,0,(int32_t)c->r[28],0); // 801C0FD4
  c->r[0]=cntlz(c->r[3]); // 801C0FD8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0FDC
  if (crb(c,2)) { goto L_801C0FEC; } // 801C0FE0
  cmps(c,0,(int32_t)c->r[0],0); // 801C0FE4
  if (!crb(c,2)) { goto L_801C11C8; } // 801C0FE8
L_801C0FEC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C0FEC
  if (!crb(c,2)) { goto L_801C1068; } // 801C0FF0
  cmps(c,0,(int32_t)c->r[0],0); // 801C0FF4
  if (!crb(c,2)) { goto L_801C1068; } // 801C0FF8
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C0FFC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1000
  c->r[4]=R32(c->r[29]+0x00000004u); // 801C1004
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C1008
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C100C
  c->r[0]=R16(c->r[30]+0x00000004u); // 801C1010
  W32(c->r[1]+0x00000030u,c->r[4]); // 801C1014
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C1018
  c->r[5]=R16(c->r[1]+0x00000030u); // 801C101C
  c->r[0]=R16(c->r[30]+0x00000006u); // 801C1020
  W32(c->r[1]+0x00000034u,c->r[3]); // 801C1024
  c->r[4]=R16(c->r[1]+0x00000032u); // 801C1028
  W16(c->r[29]+0x00000006u,c->r[0]); // 801C102C
  c->r[3]=R16(c->r[1]+0x00000034u); // 801C1030
  c->r[6]=R16(c->r[30]+0x00000008u); // 801C1034
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 801C1038
  c->r[0]=R16(c->r[1]+0x00000036u); // 801C103C
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C1040
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1044
  c->r[6]=R16(c->r[30]+0x0000000Au); // 801C1048
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C104C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C1050
  W16(c->r[30]+0x00000004u,c->r[5]); // 801C1054
  W16(c->r[30]+0x00000006u,c->r[4]); // 801C1058
  W16(c->r[30]+0x00000008u,c->r[3]); // 801C105C
  W16(c->r[30]+0x0000000Au,c->r[0]); // 801C1060
  goto L_801C11C8; // 801C1064
L_801C1068:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801C1068
  c->r[3]=c->r[30]|c->r[30]; // 801C106C
  c->r[4]=c->r[29]|c->r[29]; // 801C1070
  c->ctr=c->r[12]; // 801C1074
  if (true) { c->lr=0x801C107Cu; dispatch(c,c->ctr); } // 801C1078
  cmps(c,0,(int32_t)c->r[3],0); // 801C107C
  if (crb(c,2)) { goto L_801C10EC; } // 801C1080
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C1084
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1088
  c->r[4]=R32(c->r[29]+0x00000004u); // 801C108C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C1090
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C1094
  c->r[0]=R16(c->r[30]+0x00000004u); // 801C1098
  W32(c->r[1]+0x00000024u,c->r[4]); // 801C109C
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C10A0
  c->r[5]=R16(c->r[1]+0x00000024u); // 801C10A4
  c->r[0]=R16(c->r[30]+0x00000006u); // 801C10A8
  W32(c->r[1]+0x00000028u,c->r[3]); // 801C10AC
  c->r[4]=R16(c->r[1]+0x00000026u); // 801C10B0
  W16(c->r[29]+0x00000006u,c->r[0]); // 801C10B4
  c->r[3]=R16(c->r[1]+0x00000028u); // 801C10B8
  c->r[6]=R16(c->r[30]+0x00000008u); // 801C10BC
  W32(c->r[1]+0x00000020u,c->r[7]); // 801C10C0
  c->r[0]=R16(c->r[1]+0x0000002Au); // 801C10C4
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C10C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C10CC
  c->r[6]=R16(c->r[30]+0x0000000Au); // 801C10D0
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C10D4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C10D8
  W16(c->r[30]+0x00000004u,c->r[5]); // 801C10DC
  W16(c->r[30]+0x00000006u,c->r[4]); // 801C10E0
  W16(c->r[30]+0x00000008u,c->r[3]); // 801C10E4
  W16(c->r[30]+0x0000000Au,c->r[0]); // 801C10E8
L_801C10EC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C10EC
  if (crb(c,2)) { goto L_801C1160; } // 801C10F0
  c->r[7]=R32(c->r[30]+0x00000000u); // 801C10F4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C10F8
  c->r[4]=R32(c->r[30]+0x00000004u); // 801C10FC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C1100
  c->r[3]=R32(c->r[30]+0x00000008u); // 801C1104
  c->r[0]=R16(c->r[31]+0x00000004u); // 801C1108
  W32(c->r[1]+0x00000018u,c->r[4]); // 801C110C
  W16(c->r[30]+0x00000004u,c->r[0]); // 801C1110
  c->r[5]=R16(c->r[1]+0x00000018u); // 801C1114
  c->r[0]=R16(c->r[31]+0x00000006u); // 801C1118
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801C111C
  c->r[4]=R16(c->r[1]+0x0000001Au); // 801C1120
  W16(c->r[30]+0x00000006u,c->r[0]); // 801C1124
  c->r[3]=R16(c->r[1]+0x0000001Cu); // 801C1128
  c->r[6]=R16(c->r[31]+0x00000008u); // 801C112C
  W32(c->r[1]+0x00000014u,c->r[7]); // 801C1130
  c->r[0]=R16(c->r[1]+0x0000001Eu); // 801C1134
  W16(c->r[30]+0x00000008u,c->r[6]); // 801C1138
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C113C
  c->r[6]=R16(c->r[31]+0x0000000Au); // 801C1140
  W16(c->r[30]+0x0000000Au,c->r[6]); // 801C1144
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801C1148
  W16(c->r[31]+0x00000004u,c->r[5]); // 801C114C
  W16(c->r[31]+0x00000006u,c->r[4]); // 801C1150
  W16(c->r[31]+0x00000008u,c->r[3]); // 801C1154
  W16(c->r[31]+0x0000000Au,c->r[0]); // 801C1158
  goto L_801C11C8; // 801C115C
L_801C1160:;
  c->r[7]=R32(c->r[29]+0x00000000u); // 801C1160
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1164
  c->r[4]=R32(c->r[29]+0x00000004u); // 801C1168
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C116C
  c->r[3]=R32(c->r[29]+0x00000008u); // 801C1170
  c->r[0]=R16(c->r[31]+0x00000004u); // 801C1174
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801C1178
  W16(c->r[29]+0x00000004u,c->r[0]); // 801C117C
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 801C1180
  c->r[0]=R16(c->r[31]+0x00000006u); // 801C1184
  W32(c->r[1]+0x00000010u,c->r[3]); // 801C1188
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 801C118C
  W16(c->r[29]+0x00000006u,c->r[0]); // 801C1190
  c->r[3]=R16(c->r[1]+0x00000010u); // 801C1194
  c->r[6]=R16(c->r[31]+0x00000008u); // 801C1198
  W32(c->r[1]+0x00000008u,c->r[7]); // 801C119C
  c->r[0]=R16(c->r[1]+0x00000012u); // 801C11A0
  W16(c->r[29]+0x00000008u,c->r[6]); // 801C11A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C11A8
  c->r[6]=R16(c->r[31]+0x0000000Au); // 801C11AC
  W16(c->r[29]+0x0000000Au,c->r[6]); // 801C11B0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801C11B4
  W16(c->r[31]+0x00000004u,c->r[5]); // 801C11B8
  W16(c->r[31]+0x00000006u,c->r[4]); // 801C11BC
  W16(c->r[31]+0x00000008u,c->r[3]); // 801C11C0
  W16(c->r[31]+0x0000000Au,c->r[0]); // 801C11C4
L_801C11C8:;
  c->r[11]=c->r[1]+0x00000050u; // 801C11C8
  c->lr=0x801C11D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C11CC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C11D0
  c->lr=c->r[0]; // 801C11D4
  c->r[1]=c->r[1]+0x00000050u; // 801C11D8
  return; // 801C11DC
}

// __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
void f_801C11E0(Ctx* __restrict c) {
  trace_call(0x801C11E0u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C11E0
  return; // 801C11E4
}

// Init__Q34nw4r3g3d6CameraFv
void f_801C11E8(Ctx* __restrict c) {
  trace_call(0x801C11E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C11E8
  c->r[0]=c->lr; // 801C11EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C11F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C11F4
  c->r[31]=c->r[3]|c->r[3]; // 801C11F8
  c->lr=0x801C1200u; f_801BB670(c); // 801C11FC
  c->r[9]=c->r[3]|c->r[3]; // 801C1200
  c->r[4]=R16(c->r[3]+0x00000004u); // 801C1204
  c->r[5]=R16(c->r[3]+0x00000006u); // 801C1208
  c->r[3]=c->r[31]|c->r[31]; // 801C120C
  c->r[7]=R16(c->r[9]+0x00000008u); // 801C1210
  c->r[6]=c->r[4]|c->r[4]; // 801C1214
  c->r[8]=R16(c->r[9]+0x0000000Eu); // 801C1218
  c->r[9]=R16(c->r[9]+0x00000010u); // 801C121C
  c->lr=0x801C1224u; f_801C1238(c); // 801C1220
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1228
  c->lr=c->r[0]; // 801C122C
  c->r[1]=c->r[1]+0x00000010u; // 801C1230
  return; // 801C1234
}

// Init__Q34nw4r3g3d6CameraFUsUsUsUsUsUs
void f_801C1238(Ctx* __restrict c) {
  trace_call(0x801C1238u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1238
  c->r[0]=0u+0x43300000u; // 801C123C
  c->r[10]=R32(c->r[3]+0x00000000u); // 801C1240
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C1244
  cmps(c,0,(int32_t)c->r[10],0); // 801C1248
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C124C
  if (crb(c,2)) { goto L_801C134C; } // 801C1250
  c->r[3]=0u+0x00000021u; // 801C1254
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 801C1258
  {uint32_t ea=c->r[2]+0xFFFF9C38u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C125C
  c->r[0]=0u+0x00000000u; // 801C1260
  W32(c->r[10]+0x00000070u,c->r[3]); // 801C1264
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C1268
  {uint32_t ea=c->r[10]+0x00000074u; WF32(ea,c->f[8]);} // 801C126C
  {uint32_t ea=c->r[2]+0xFFFF9C3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1270
  {uint32_t ea=c->r[10]+0x00000078u; WF32(ea,c->f[8]);} // 801C1274
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[3]=RF64(ea);} // 801C1278
  {uint32_t ea=c->r[10]+0x0000007Cu; WF32(ea,c->f[1]);} // 801C127C
  {uint32_t ea=c->r[2]+0xFFFF9C40u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C1280
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801C1284
  {uint32_t ea=c->r[10]+0x00000080u; WF32(ea,c->f[8]);} // 801C1288
  {uint32_t ea=c->r[2]+0xFFFF9C44u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C128C
  {uint32_t ea=c->r[10]+0x00000084u; WF32(ea,c->f[7]);} // 801C1290
  {uint32_t ea=c->r[2]+0xFFFF9C48u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1294
  {uint32_t ea=c->r[10]+0x00000088u; WF32(ea,c->f[8]);} // 801C1298
  {uint32_t ea=c->r[2]+0xFFFF9C4Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C129C
  {uint32_t ea=c->r[10]+0x0000008Cu; WF32(ea,c->f[8]);} // 801C12A0
  {uint32_t ea=c->r[2]+0xFFFF9C50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C12A4
  {uint32_t ea=c->r[10]+0x00000090u; WF32(ea,c->f[8]);} // 801C12A8
  {uint32_t ea=c->r[2]+0xFFFF9C54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C12AC
  {uint32_t ea=c->r[10]+0x00000094u; WF32(ea,c->f[8]);} // 801C12B0
  {uint32_t ea=c->r[10]+0x00000098u; WF32(ea,c->f[8]);} // 801C12B4
  {uint32_t ea=c->r[10]+0x0000009Cu; WF32(ea,c->f[8]);} // 801C12B8
  {uint32_t ea=c->r[10]+0x000000A0u; WF32(ea,c->f[8]);} // 801C12BC
  {uint32_t ea=c->r[10]+0x000000A4u; WF32(ea,c->f[8]);} // 801C12C0
  W32(c->r[10]+0x000000A8u,c->r[0]); // 801C12C4
  {uint32_t ea=c->r[10]+0x000000ACu; WF32(ea,c->f[6]);} // 801C12C8
  {uint32_t ea=c->r[10]+0x000000B0u; WF32(ea,c->f[5]);} // 801C12CC
  {uint32_t ea=c->r[10]+0x000000B4u; WF32(ea,c->f[4]);} // 801C12D0
  {uint32_t ea=c->r[10]+0x000000B8u; WF32(ea,c->f[1]);} // 801C12D4
  W32(c->r[1]+0x00000014u,c->r[8]); // 801C12D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C12DC
  {uint32_t ea=c->r[10]+0x000000BCu; WF32(ea,c->f[8]);} // 801C12E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 801C12E4
  {uint32_t ea=c->r[10]+0x000000C0u; WF32(ea,c->f[2]);} // 801C12E8
  {uint32_t ea=c->r[10]+0x000000C4u; WF32(ea,c->f[8]);} // 801C12EC
  {uint32_t ea=c->r[10]+0x000000C8u; WF32(ea,c->f[1]);} // 801C12F0
  {uint32_t ea=c->r[10]+0x000000CCu; WF32(ea,c->f[0]);} // 801C12F4
  {uint32_t ea=c->r[10]+0x000000D0u; WF32(ea,c->f[0]);} // 801C12F8
  {uint32_t ea=c->r[10]+0x000000D4u; WF32(ea,c->f[0]);} // 801C12FC
  {uint32_t ea=c->r[10]+0x000000D8u; WF32(ea,c->f[0]);} // 801C1300
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801C1304
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C1308
  {uint32_t ea=c->r[10]+0x000000DCu; WF32(ea,c->f[8]);} // 801C130C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 801C1310
  W32(c->r[1]+0x00000014u,c->r[7]); // 801C1314
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801C1318
  {uint32_t ea=c->r[10]+0x000000E0u; WF32(ea,c->f[8]);} // 801C131C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801C1320
  {uint32_t ea=c->r[10]+0x000000E4u; WF32(ea,c->f[1]);} // 801C1324
  {uint32_t ea=c->r[10]+0x000000E8u; WF32(ea,c->f[0]);} // 801C1328
  {uint32_t ea=c->r[10]+0x000000ECu; WF32(ea,c->f[8]);} // 801C132C
  {uint32_t ea=c->r[10]+0x000000F0u; WF32(ea,c->f[7]);} // 801C1330
  W32(c->r[10]+0x000000F4u,c->r[0]); // 801C1334
  W32(c->r[10]+0x000000F8u,c->r[0]); // 801C1338
  W32(c->r[10]+0x000000FCu,c->r[4]); // 801C133C
  W32(c->r[10]+0x00000100u,c->r[5]); // 801C1340
  W32(c->r[10]+0x00000104u,c->r[0]); // 801C1344
  W32(c->r[10]+0x00000108u,c->r[0]); // 801C1348
L_801C134C:;
  c->r[1]=c->r[1]+0x00000020u; // 801C134C
  return; // 801C1350
}

// SetPosition__Q34nw4r3g3d6CameraFfff
void f_801C1354(Ctx* __restrict c) {
  trace_call(0x801C1354u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1354
  cmps(c,0,(int32_t)c->r[3],0); // 801C1358
  if (crb(c,2)) return; // 801C135C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 801C1360
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[2]);} // 801C1364
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[3]);} // 801C1368
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C136C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801C1370
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C1374
  return; // 801C1378
}

// SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3
void f_801C137C(Ctx* __restrict c) {
  trace_call(0x801C137Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C137C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1380
  if (crb(c,2)) return; // 801C1384
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1388
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C138C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801C1390
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1394
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 801C1398
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 801C139C
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C13A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801C13A4
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C13A8
  return; // 801C13AC
}

// fn_801C13B0
void f_801C13B0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801C13B0
  if (crb(c,2)) return; // 801C13B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C13B8
  cmps(c,0,(int32_t)c->r[3],0); // 801C13BC
  if (crb(c,2)) return; // 801C13C0
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C13C4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801C13C8
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C13CC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 801C13D0
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C13D4
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801C13D8
  return; // 801C13DC
}

// SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
void f_801C13E0(Ctx* __restrict c) {
  trace_call(0x801C13E0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C13E0
  cmps(c,0,(int32_t)c->r[3],0); // 801C13E4
  if (crb(c,2)) return; // 801C13E8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C13EC
  cmps(c,0,(int32_t)c->r[0],1); // 801C13F0
  if (crb(c,2)) { goto L_801C14EC; } // 801C13F4
  if (!crb(c,0)) { goto L_801C1408; } // 801C13F8
  cmps(c,0,(int32_t)c->r[0],0); // 801C13FC
  if (!crb(c,0)) { goto L_801C1414; } // 801C1400
  return; // 801C1404
L_801C1408:;
  cmps(c,0,(int32_t)c->r[0],3); // 801C1408
  if (!crb(c,0)) return; // 801C140C
  goto L_801C1568; // 801C1410
L_801C1414:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C1414
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C1418
  if (crb(c,2)) { goto L_801C14A0; } // 801C141C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1420
  c->r[0]=0u+0x00000000u; // 801C1424
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1428
  fcmp(c,0,c->f[1],c->f[0]); // 801C142C
  if (!crb(c,2)) { goto L_801C1454; } // 801C1430
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1434
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1438
  fcmp(c,0,c->f[1],c->f[0]); // 801C143C
  if (!crb(c,2)) { goto L_801C1454; } // 801C1440
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1444
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1448
  fcmp(c,0,c->f[1],c->f[0]); // 801C144C
  if (crb(c,2)) { goto L_801C1458; } // 801C1450
L_801C1454:;
  c->r[0]=0u+0x00000001u; // 801C1454
L_801C1458:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1458
  if (!crb(c,2)) { goto L_801C14A0; } // 801C145C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1460
  c->r[0]=0u+0x00000000u; // 801C1464
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1468
  fcmp(c,0,c->f[1],c->f[0]); // 801C146C
  if (!crb(c,2)) { goto L_801C1494; } // 801C1470
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1474
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1478
  fcmp(c,0,c->f[1],c->f[0]); // 801C147C
  if (!crb(c,2)) { goto L_801C1494; } // 801C1480
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1484
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1488
  fcmp(c,0,c->f[1],c->f[0]); // 801C148C
  if (crb(c,2)) { goto L_801C1498; } // 801C1490
L_801C1494:;
  c->r[0]=0u+0x00000001u; // 801C1494
L_801C1498:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1498
  if (crb(c,2)) return; // 801C149C
L_801C14A0:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C14A0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C14A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801C14A8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C14AC
  c->r[0]=c->r[0]|0x00000001u; // 801C14B0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C14B4
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C14B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801C14BC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C14C0
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 801C14C4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C14C8
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 801C14CC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C14D0
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[3]);} // 801C14D4
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[2]);} // 801C14D8
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 801C14DC
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 801C14E0
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C14E4
  return; // 801C14E8
L_801C14EC:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C14EC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C14F0
  if (crb(c,2)) { goto L_801C1538; } // 801C14F4
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C14F8
  c->r[0]=0u+0x00000000u; // 801C14FC
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1500
  fcmp(c,0,c->f[1],c->f[0]); // 801C1504
  if (!crb(c,2)) { goto L_801C152C; } // 801C1508
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C150C
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1510
  fcmp(c,0,c->f[1],c->f[0]); // 801C1514
  if (!crb(c,2)) { goto L_801C152C; } // 801C1518
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C151C
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1520
  fcmp(c,0,c->f[1],c->f[0]); // 801C1524
  if (crb(c,2)) { goto L_801C1530; } // 801C1528
L_801C152C:;
  c->r[0]=0u+0x00000001u; // 801C152C
L_801C1530:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1530
  if (crb(c,2)) return; // 801C1534
L_801C1538:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C1538
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C153C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1540
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801C1544
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 801C1548
  c->r[0]=c->r[0]|0x00000002u; // 801C154C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1550
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801C1554
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 801C1558
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 801C155C
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C1560
  return; // 801C1564
L_801C1568:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C1568
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C156C
  if (crb(c,2)) { goto L_801C15C4; } // 801C1570
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1574
  c->r[0]=0u+0x00000000u; // 801C1578
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C157C
  fcmp(c,0,c->f[1],c->f[0]); // 801C1580
  if (!crb(c,2)) { goto L_801C15A8; } // 801C1584
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1588
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C158C
  fcmp(c,0,c->f[1],c->f[0]); // 801C1590
  if (!crb(c,2)) { goto L_801C15A8; } // 801C1594
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1598
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C159C
  fcmp(c,0,c->f[1],c->f[0]); // 801C15A0
  if (crb(c,2)) { goto L_801C15AC; } // 801C15A4
L_801C15A8:;
  c->r[0]=0u+0x00000001u; // 801C15A8
L_801C15AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C15AC
  if (!crb(c,2)) { goto L_801C15C4; } // 801C15B0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C15B4
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C15B8
  fcmp(c,0,c->f[1],c->f[0]); // 801C15BC
  if (crb(c,2)) return; // 801C15C0
L_801C15C4:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C15C4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C15C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801C15CC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C15D0
  c->r[0]=c->r[0]|0x00000004u; // 801C15D4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C15D8
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C15DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801C15E0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C15E4
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[3]);} // 801C15E8
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[2]);} // 801C15EC
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 801C15F0
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 801C15F4
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C15F8
  return; // 801C15FC
}

// fn_801C1600
void f_801C1600(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801C1600
  if (crb(c,2)) return; // 801C1604
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1608
  cmps(c,0,(int32_t)c->r[3],0); // 801C160C
  if (crb(c,2)) return; // 801C1610
  c->r[5]=R32(c->r[3]+0x00000070u); // 801C1614
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801C1618
  if (crb(c,2)) { goto L_801C165C; } // 801C161C
  c->r[0]=0u+0x00000000u; // 801C1620
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C1624
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1628
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 801C162C
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1630
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801C1634
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1638
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C163C
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1640
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 801C1644
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1648
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 801C164C
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1650
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 801C1654
  return; // 801C1658
L_801C165C:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801C165C
  if (crb(c,2)) { goto L_801C1688; } // 801C1660
  c->r[0]=0u+0x00000001u; // 801C1664
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C1668
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C166C
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C1670
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1674
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[0]);} // 801C1678
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C167C
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 801C1680
  return; // 801C1684
L_801C1688:;
  c->r[0]=0u+0x00000002u; // 801C1688
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C168C
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1690
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 801C1694
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1698
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 801C169C
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C16A0
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 801C16A4
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C16A8
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 801C16AC
  return; // 801C16B0
}

// SetCameraMtxDirectly__Q34nw4r3g3d6CameraFRCQ34nw4r4math5MTX34
void f_801C16B4(Ctx* __restrict c) {
  trace_call(0x801C16B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C16B4
  c->r[0]=c->lr; // 801C16B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C16BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C16C0
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C16C4
  cmps(c,0,(int32_t)c->r[31],0); // 801C16C8
  if (crb(c,2)) { goto L_801C16E8; } // 801C16CC
  c->r[3]=c->r[4]|c->r[4]; // 801C16D0
  c->r[4]=c->r[31]|c->r[31]; // 801C16D4
  c->lr=0x801C16DCu; f_800EC0C0(c); // 801C16D8
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C16DC
  c->r[0]=c->r[0]|0x00000008u; // 801C16E0
  W32(c->r[31]+0x00000070u,c->r[0]); // 801C16E4
L_801C16E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C16E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C16EC
  c->lr=c->r[0]; // 801C16F0
  c->r[1]=c->r[1]+0x00000010u; // 801C16F4
  return; // 801C16F8
}

// SetPerspective__Q34nw4r3g3d6CameraFffff
void f_801C16FC(Ctx* __restrict c) {
  trace_call(0x801C16FCu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C16FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C1700
  if (crb(c,2)) return; // 801C1704
  c->r[0]=0u+0x00000000u; // 801C1708
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801C170C
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 801C1710
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[2]);} // 801C1714
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[3]);} // 801C1718
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[4]);} // 801C171C
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C1720
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 801C1724
  c->r[0]=c->r[0]|0x00000020u; // 801C1728
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C172C
  return; // 801C1730
}

// fn_801C1734
void f_801C1734(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1734
  cmps(c,0,(int32_t)c->r[3],0); // 801C1738
  if (crb(c,2)) return; // 801C173C
  c->r[0]=0u+0x00000000u; // 801C1740
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801C1744
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 801C1748
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 801C174C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[3]);} // 801C1750
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 801C1754
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[5]);} // 801C1758
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 801C175C
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C1760
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 801C1764
  c->r[0]=c->r[0]|0x00000010u; // 801C1768
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C176C
  return; // 801C1770
}

// SetOrtho__Q34nw4r3g3d6CameraFffffff
void f_801C1774(Ctx* __restrict c) {
  trace_call(0x801C1774u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1774
  cmps(c,0,(int32_t)c->r[3],0); // 801C1778
  if (crb(c,2)) return; // 801C177C
  c->r[0]=0u+0x00000001u; // 801C1780
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801C1784
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 801C1788
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 801C178C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[3]);} // 801C1790
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 801C1794
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[5]);} // 801C1798
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 801C179C
  c->r[0]=R32(c->r[3]+0x00000070u); // 801C17A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 801C17A4
  c->r[0]=c->r[0]|0x00000040u; // 801C17A8
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C17AC
  return; // 801C17B0
}

// fn_801C17B4
void f_801C17B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C17B4
  c->r[0]=c->lr; // 801C17B8
  cmps(c,0,(int32_t)c->r[4],0); // 801C17BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C17C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C17C4
  if (crb(c,2)) { goto L_801C17EC; } // 801C17C8
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C17CC
  cmps(c,0,(int32_t)c->r[31],0); // 801C17D0
  if (crb(c,2)) { goto L_801C17EC; } // 801C17D4
  c->r[3]=c->r[31]+0x00000030u; // 801C17D8
  c->lr=0x801C17E0u; f_801DBBDC(c); // 801C17DC
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C17E0
  c->r[0]=c->r[0]|0x00000080u; // 801C17E4
  W32(c->r[31]+0x00000070u,c->r[0]); // 801C17E8
L_801C17EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C17EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C17F0
  c->lr=c->r[0]; // 801C17F4
  c->r[1]=c->r[1]+0x00000010u; // 801C17F8
  return; // 801C17FC
}

// SetViewport__Q34nw4r3g3d6CameraFffff
void f_801C1800(Ctx* __restrict c) {
  trace_call(0x801C1800u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1800
  c->r[0]=c->lr; // 801C1804
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C1808
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 801C180C
  c->f[31]=c->f[4]; // 801C1810
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801C1814
  c->f[30]=c->f[3]; // 801C1818
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[29]);} // 801C181C
  c->f[29]=c->f[2]; // 801C1820
  W32(c->r[1]+0x00000014u,c->r[31]); // 801C1824
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C1828
  cmps(c,0,(int32_t)c->r[4],0); // 801C182C
  if (crb(c,2)) { goto L_801C187C; } // 801C1830
  {uint32_t ea=c->r[4]+0x000000DCu; WF32(ea,c->f[1]);} // 801C1834
  {uint32_t ea=c->r[4]+0x000000E0u; WF32(ea,c->f[2]);} // 801C1838
  {uint32_t ea=c->r[4]+0x000000E4u; WF32(ea,c->f[3]);} // 801C183C
  {uint32_t ea=c->r[4]+0x000000E8u; WF32(ea,c->f[4]);} // 801C1840
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C1844
  cmps(c,0,(int32_t)c->r[31],0); // 801C1848
  if (crb(c,2)) { goto L_801C187C; } // 801C184C
  c->lr=0x801C1854u; f_80109E10(c); // 801C1850
  c->f[1]=c->f[29]; // 801C1854
  W32(c->r[31]+0x000000F4u,c->r[3]); // 801C1858
  c->lr=0x801C1860u; f_80109E10(c); // 801C185C
  c->f[1]=c->f[30]; // 801C1860
  W32(c->r[31]+0x000000F8u,c->r[3]); // 801C1864
  c->lr=0x801C186Cu; f_80109E10(c); // 801C1868
  c->f[1]=c->f[31]; // 801C186C
  W32(c->r[31]+0x000000FCu,c->r[3]); // 801C1870
  c->lr=0x801C1878u; f_80109E10(c); // 801C1874
  W32(c->r[31]+0x00000100u,c->r[3]); // 801C1878
L_801C187C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C187C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 801C1880
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801C1884
  {uint32_t ea=c->r[1]+0x00000018u; c->f[29]=RF64(ea);} // 801C1888
  c->r[31]=R32(c->r[1]+0x00000014u); // 801C188C
  c->lr=c->r[0]; // 801C1890
  c->r[1]=c->r[1]+0x00000030u; // 801C1894
  return; // 801C1898
}

// GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
void f_801C189C(Ctx* __restrict c) {
  trace_call(0x801C189Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C189C
  cmps(c,0,(int32_t)c->r[3],0); // 801C18A0
  if (crb(c,2)) return; // 801C18A4
  cmps(c,0,(int32_t)c->r[4],0); // 801C18A8
  if (crb(c,2)) { goto L_801C18B8; } // 801C18AC
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C18B0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801C18B4
L_801C18B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C18B8
  if (crb(c,2)) { goto L_801C18C8; } // 801C18BC
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C18C0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801C18C4
L_801C18C8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C18C8
  if (crb(c,2)) { goto L_801C18D8; } // 801C18CC
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C18D0
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 801C18D4
L_801C18D8:;
  cmps(c,0,(int32_t)c->r[7],0); // 801C18D8
  if (crb(c,2)) { goto L_801C18E8; } // 801C18DC
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C18E0
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 801C18E4
L_801C18E8:;
  cmps(c,0,(int32_t)c->r[8],0); // 801C18E8
  if (crb(c,2)) { goto L_801C18F8; } // 801C18EC
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C18F0
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 801C18F4
L_801C18F8:;
  cmps(c,0,(int32_t)c->r[9],0); // 801C18F8
  if (crb(c,2)) return; // 801C18FC
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1900
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 801C1904
  return; // 801C1908
}

// Project__Q34nw4r3g3d6CameraCFPQ34nw4r4math4VEC3RCQ34nw4r4math4VEC3
void f_801C190C(Ctx* __restrict c) {
  trace_call(0x801C190Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C190C
  c->r[0]=c->lr; // 801C1910
  cmps(c,0,(int32_t)c->r[4],0); // 801C1914
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801C1918
  W32(c->r[1]+0x000000CCu,c->r[31]); // 801C191C
  c->r[31]=c->r[5]|c->r[5]; // 801C1920
  W32(c->r[1]+0x000000C8u,c->r[30]); // 801C1924
  c->r[30]=c->r[4]|c->r[4]; // 801C1928
  W32(c->r[1]+0x000000C4u,c->r[29]); // 801C192C
  c->r[29]=c->r[3]|c->r[3]; // 801C1930
  W32(c->r[1]+0x000000C0u,c->r[28]); // 801C1934
  if (crb(c,2)) { goto L_801C1AC8; } // 801C1938
  c->r[28]=R32(c->r[3]+0x00000000u); // 801C193C
  cmps(c,0,(int32_t)c->r[28],0); // 801C1940
  if (crb(c,2)) { goto L_801C1964; } // 801C1944
  c->r[0]=R32(c->r[28]+0x00000070u); // 801C1948
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801C194C
  if (!crb(c,2)) { goto L_801C1958; } // 801C1950
  c->lr=0x801C1958u; f_801C1F00(c); // 801C1954
L_801C1958:;
  c->r[3]=c->r[28]|c->r[28]; // 801C1958
  c->r[4]=c->r[1]+0x00000080u; // 801C195C
  c->lr=0x801C1964u; f_800EC0C0(c); // 801C1960
L_801C1964:;
  c->r[28]=R32(c->r[29]+0x00000000u); // 801C1964
  cmps(c,0,(int32_t)c->r[28],0); // 801C1968
  if (crb(c,2)) { goto L_801C1A08; } // 801C196C
  c->r[0]=R32(c->r[28]+0x00000070u); // 801C1970
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801C1974
  if (!crb(c,2)) { goto L_801C19FC; } // 801C1978
  c->r[3]=R32(c->r[28]+0x00000070u); // 801C197C
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801C1980
  if (crb(c,2)) { goto L_801C19AC; } // 801C1984
  {uint32_t ea=c->r[28]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1988
  c->r[3]=c->r[28]+0x00000030u; // 801C198C
  {uint32_t ea=c->r[28]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1990
  {uint32_t ea=c->r[28]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1994
  {uint32_t ea=c->r[28]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1998
  {uint32_t ea=c->r[28]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C199C
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C19A0
  c->lr=0x801C19A8u; f_800ECF14(c); // 801C19A4
  goto L_801C19F0; // 801C19A8
L_801C19AC:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801C19AC
  if (crb(c,2)) { goto L_801C19D8; } // 801C19B0
  {uint32_t ea=c->r[28]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C19B4
  c->r[3]=c->r[28]+0x00000030u; // 801C19B8
  {uint32_t ea=c->r[28]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C19BC
  {uint32_t ea=c->r[28]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C19C0
  {uint32_t ea=c->r[28]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C19C4
  {uint32_t ea=c->r[28]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C19C8
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C19CC
  c->lr=0x801C19D4u; f_800ECD8C(c); // 801C19D0
  goto L_801C19F0; // 801C19D4
L_801C19D8:;
  {uint32_t ea=c->r[28]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C19D8
  c->r[3]=c->r[28]+0x00000030u; // 801C19DC
  {uint32_t ea=c->r[28]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C19E0
  {uint32_t ea=c->r[28]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C19E4
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C19E8
  c->lr=0x801C19F0u; f_800ECE28(c); // 801C19EC
L_801C19F0:;
  c->r[0]=R32(c->r[28]+0x00000070u); // 801C19F0
  c->r[0]=c->r[0]|0x00000080u; // 801C19F4
  W32(c->r[28]+0x00000070u,c->r[0]); // 801C19F8
L_801C19FC:;
  c->r[3]=c->r[1]+0x00000040u; // 801C19FC
  c->r[4]=c->r[28]+0x00000030u; // 801C1A00
  c->lr=0x801C1A08u; f_801DBBDC(c); // 801C1A04
L_801C1A08:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C1A08
  c->r[0]=0u+0x43300000u; // 801C1A0C
  W32(c->r[1]+0x000000B0u,c->r[0]); // 801C1A10
  c->r[0]=R32(c->r[3]+0x000000A8u); // 801C1A14
  {uint32_t ea=c->r[1]+0x00000040u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1A18
  c->r[0]=c->r[0]^0x80000000u; // 801C1A1C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1A20
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801C1A24
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1A28
  {uint32_t ea=c->r[2]+0xFFFF9C60u; c->f[5]=RF64(ea);} // 801C1A2C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 801C1A30
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1A34
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[5]); // 801C1A38
  {uint32_t ea=c->r[2]+0xFFFF9C40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1A3C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801C1A40
  fcmp(c,0,c->f[0],c->f[5]); // 801C1A44
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 801C1A48
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 801C1A4C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C1A50
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801C1A54
  if (!crb(c,2)) { goto L_801C1A70; } // 801C1A58
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1A5C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1A60
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801C1A64
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801C1A68
  goto L_801C1A80; // 801C1A6C
L_801C1A70:;
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1A70
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1A74
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801C1A78
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801C1A7C
L_801C1A80:;
  c->r[3]=c->r[29]|c->r[29]; // 801C1A80
  c->r[4]=c->r[1]+0x00000028u; // 801C1A84
  c->r[5]=c->r[1]+0x0000002Cu; // 801C1A88
  c->r[6]=c->r[1]+0x00000030u; // 801C1A8C
  c->r[7]=c->r[1]+0x00000034u; // 801C1A90
  c->r[8]=c->r[1]+0x00000038u; // 801C1A94
  c->r[9]=c->r[1]+0x0000003Cu; // 801C1A98
  c->lr=0x801C1AA0u; f_801C189C(c); // 801C1A9C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1AA0
  c->r[6]=c->r[30]|c->r[30]; // 801C1AA4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1AA8
  c->r[3]=c->r[1]+0x00000080u; // 801C1AAC
  {uint32_t ea=c->r[31]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1AB0
  c->r[4]=c->r[1]+0x00000008u; // 801C1AB4
  c->r[5]=c->r[1]+0x00000028u; // 801C1AB8
  c->r[7]=c->r[30]+0x00000004u; // 801C1ABC
  c->r[8]=c->r[30]+0x00000008u; // 801C1AC0
  c->lr=0x801C1AC8u; f_80108678(c); // 801C1AC4
L_801C1AC8:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801C1AC8
  c->r[31]=R32(c->r[1]+0x000000CCu); // 801C1ACC
  c->r[30]=R32(c->r[1]+0x000000C8u); // 801C1AD0
  c->r[29]=R32(c->r[1]+0x000000C4u); // 801C1AD4
  c->r[28]=R32(c->r[1]+0x000000C0u); // 801C1AD8
  c->lr=c->r[0]; // 801C1ADC
  c->r[1]=c->r[1]+0x000000D0u; // 801C1AE0
  return; // 801C1AE4
}

// GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_801C1AE8(Ctx* __restrict c) {
  trace_call(0x801C1AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1AE8
  c->r[0]=c->lr; // 801C1AEC
  cmps(c,0,(int32_t)c->r[4],0); // 801C1AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1AF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1AF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C1AFC
  c->r[30]=c->r[4]|c->r[4]; // 801C1B00
  if (crb(c,2)) { goto L_801C1B30; } // 801C1B04
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C1B08
  cmps(c,0,(int32_t)c->r[31],0); // 801C1B0C
  if (crb(c,2)) { goto L_801C1B30; } // 801C1B10
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C1B14
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801C1B18
  if (!crb(c,2)) { goto L_801C1B24; } // 801C1B1C
  c->lr=0x801C1B24u; f_801C1F00(c); // 801C1B20
L_801C1B24:;
  c->r[3]=c->r[31]|c->r[31]; // 801C1B24
  c->r[4]=c->r[30]|c->r[30]; // 801C1B28
  c->lr=0x801C1B30u; f_800EC0C0(c); // 801C1B2C
L_801C1B30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1B30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1B34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C1B38
  c->lr=c->r[0]; // 801C1B3C
  c->r[1]=c->r[1]+0x00000010u; // 801C1B40
  return; // 801C1B44
}

// GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44
void f_801C1B48(Ctx* __restrict c) {
  trace_call(0x801C1B48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1B48
  c->r[0]=c->lr; // 801C1B4C
  cmps(c,0,(int32_t)c->r[4],0); // 801C1B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1B54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1B58
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C1B5C
  c->r[30]=c->r[4]|c->r[4]; // 801C1B60
  if (crb(c,2)) { goto L_801C1C0C; } // 801C1B64
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C1B68
  cmps(c,0,(int32_t)c->r[31],0); // 801C1B6C
  if (crb(c,2)) { goto L_801C1C0C; } // 801C1B70
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C1B74
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801C1B78
  if (!crb(c,2)) { goto L_801C1C00; } // 801C1B7C
  c->r[3]=R32(c->r[31]+0x00000070u); // 801C1B80
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801C1B84
  if (crb(c,2)) { goto L_801C1BB0; } // 801C1B88
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1B8C
  c->r[3]=c->r[31]+0x00000030u; // 801C1B90
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1B94
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1B98
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1B9C
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1BA0
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C1BA4
  c->lr=0x801C1BACu; f_800ECF14(c); // 801C1BA8
  goto L_801C1BF4; // 801C1BAC
L_801C1BB0:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801C1BB0
  if (crb(c,2)) { goto L_801C1BDC; } // 801C1BB4
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1BB8
  c->r[3]=c->r[31]+0x00000030u; // 801C1BBC
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1BC0
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1BC4
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1BC8
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1BCC
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C1BD0
  c->lr=0x801C1BD8u; f_800ECD8C(c); // 801C1BD4
  goto L_801C1BF4; // 801C1BD8
L_801C1BDC:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1BDC
  c->r[3]=c->r[31]+0x00000030u; // 801C1BE0
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1BE4
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1BE8
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1BEC
  c->lr=0x801C1BF4u; f_800ECE28(c); // 801C1BF0
L_801C1BF4:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C1BF4
  c->r[0]=c->r[0]|0x00000080u; // 801C1BF8
  W32(c->r[31]+0x00000070u,c->r[0]); // 801C1BFC
L_801C1C00:;
  c->r[3]=c->r[30]|c->r[30]; // 801C1C00
  c->r[4]=c->r[31]+0x00000030u; // 801C1C04
  c->lr=0x801C1C0Cu; f_801DBBDC(c); // 801C1C08
L_801C1C0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1C0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1C10
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C1C14
  c->lr=c->r[0]; // 801C1C18
  c->r[1]=c->r[1]+0x00000010u; // 801C1C1C
  return; // 801C1C20
}

// GetProjectionTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_801C1C24(Ctx* __restrict c) {
  trace_call(0x801C1C24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1C24
  c->r[0]=c->lr; // 801C1C28
  cmps(c,0,(int32_t)c->r[4],0); // 801C1C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1C30
  if (crb(c,2)) { goto L_801C1CE4; } // 801C1C34
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C1C38
  cmps(c,0,(int32_t)c->r[5],0); // 801C1C3C
  if (crb(c,2)) { goto L_801C1CE4; } // 801C1C40
  c->r[3]=R32(c->r[5]+0x00000070u); // 801C1C44
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801C1C48
  if (crb(c,2)) { goto L_801C1C80; } // 801C1C4C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C50
  c->r[3]=c->r[4]|c->r[4]; // 801C1C54
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1C58
  c->f[6]=-c->f[0]; // 801C1C5C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1C60
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1C64
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1C68
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1C6C
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C1C70
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C1C74
  c->lr=0x801C1C7Cu; f_800ECC24(c); // 801C1C78
  goto L_801C1CE4; // 801C1C7C
L_801C1C80:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801C1C80
  if (crb(c,2)) { goto L_801C1CC0; } // 801C1C84
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C88
  c->r[3]=c->r[4]|c->r[4]; // 801C1C8C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C1C90
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C94
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1C98
  c->f[7]=-c->f[0]; // 801C1C9C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1CA0
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1CA4
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1CA8
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1CAC
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C1CB0
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C1CB4
  c->lr=0x801C1CBCu; f_800ECA88(c); // 801C1CB8
  goto L_801C1CE4; // 801C1CBC
L_801C1CC0:;
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1CC0
  c->r[3]=c->r[4]|c->r[4]; // 801C1CC4
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1CC8
  c->f[4]=-c->f[0]; // 801C1CCC
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1CD0
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1CD4
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1CD8
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C1CDC
  c->lr=0x801C1CE4u; f_800ECB2C(c); // 801C1CE0
L_801C1CE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1CE4
  c->lr=c->r[0]; // 801C1CE8
  c->r[1]=c->r[1]+0x00000010u; // 801C1CEC
  return; // 801C1CF0
}

// GetEnvironmentTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_801C1CF4(Ctx* __restrict c) {
  trace_call(0x801C1CF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1CF4
  c->r[0]=c->lr; // 801C1CF8
  cmps(c,0,(int32_t)c->r[4],0); // 801C1CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1D04
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C1D08
  c->r[30]=c->r[4]|c->r[4]; // 801C1D0C
  if (crb(c,2)) { goto L_801C1D5C; } // 801C1D10
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C1D14
  cmps(c,0,(int32_t)c->r[31],0); // 801C1D18
  if (crb(c,2)) { goto L_801C1D5C; } // 801C1D1C
  c->r[3]=c->r[30]|c->r[30]; // 801C1D20
  c->lr=0x801C1D28u; f_800EC094(c); // 801C1D24
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1D28
  {uint32_t ea=c->r[2]+0xFFFF9C38u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1D2C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C1D30
  {uint32_t ea=c->r[2]+0xFFFF9C40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1D34
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1D38
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C1D3C
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1D40
  c->f[2]=-c->f[2]; // 801C1D44
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[2]);} // 801C1D48
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1D4C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C1D50
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 801C1D54
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C1D58
L_801C1D5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1D5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1D60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C1D64
  c->lr=c->r[0]; // 801C1D68
  c->r[1]=c->r[1]+0x00000010u; // 801C1D6C
  return; // 801C1D70
}

// GXSetViewport__Q34nw4r3g3d6CameraCFv
void f_801C1D74(Ctx* __restrict c) {
  trace_call(0x801C1D74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1D74
  c->r[0]=c->lr; // 801C1D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1D7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1D80
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C1D84
  cmps(c,0,(int32_t)c->r[31],0); // 801C1D88
  if (crb(c,2)) { goto L_801C1DE4; } // 801C1D8C
  c->lr=0x801C1D94u; f_801BB670(c); // 801C1D90
  c->r[0]=R8(c->r[3]+0x00000018u); // 801C1D94
  cmps(c,0,(int32_t)c->r[0],0); // 801C1D98
  if (crb(c,2)) { goto L_801C1DC8; } // 801C1D9C
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C1DA0
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1DA4
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1DA8
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 801C1DAC
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1DB0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1DB4
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1DB8
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C1DBC
  c->lr=0x801C1DC4u; f_80108BA0(c); // 801C1DC0
  goto L_801C1DE4; // 801C1DC4
L_801C1DC8:;
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1DC8
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1DCC
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1DD0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1DD4
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1DD8
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C1DDC
  c->lr=0x801C1DE4u; f_80108BDC(c); // 801C1DE0
L_801C1DE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1DE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1DE8
  c->lr=c->r[0]; // 801C1DEC
  c->r[1]=c->r[1]+0x00000010u; // 801C1DF0
  return; // 801C1DF4
}

// GXSetProjection__Q34nw4r3g3d6CameraCFv
void f_801C1DF8(Ctx* __restrict c) {
  trace_call(0x801C1DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1DF8
  c->r[0]=c->lr; // 801C1DFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1E00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1E04
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C1E08
  cmps(c,0,(int32_t)c->r[31],0); // 801C1E0C
  if (crb(c,2)) { goto L_801C1EAC; } // 801C1E10
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C1E14
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801C1E18
  if (!crb(c,2)) { goto L_801C1EA0; } // 801C1E1C
  c->r[3]=R32(c->r[31]+0x00000070u); // 801C1E20
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801C1E24
  if (crb(c,2)) { goto L_801C1E50; } // 801C1E28
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1E2C
  c->r[3]=c->r[31]+0x00000030u; // 801C1E30
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1E34
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1E38
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1E3C
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1E40
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C1E44
  c->lr=0x801C1E4Cu; f_800ECF14(c); // 801C1E48
  goto L_801C1E94; // 801C1E4C
L_801C1E50:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801C1E50
  if (crb(c,2)) { goto L_801C1E7C; } // 801C1E54
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1E58
  c->r[3]=c->r[31]+0x00000030u; // 801C1E5C
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1E60
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1E64
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1E68
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1E6C
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C1E70
  c->lr=0x801C1E78u; f_800ECD8C(c); // 801C1E74
  goto L_801C1E94; // 801C1E78
L_801C1E7C:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1E7C
  c->r[3]=c->r[31]+0x00000030u; // 801C1E80
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1E84
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1E88
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1E8C
  c->lr=0x801C1E94u; f_800ECE28(c); // 801C1E90
L_801C1E94:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C1E94
  c->r[0]=c->r[0]|0x00000080u; // 801C1E98
  W32(c->r[31]+0x00000070u,c->r[0]); // 801C1E9C
L_801C1EA0:;
  c->r[4]=R32(c->r[31]+0x000000A8u); // 801C1EA0
  c->r[3]=c->r[31]+0x00000030u; // 801C1EA4
  c->lr=0x801C1EACu; f_80108844(c); // 801C1EA8
L_801C1EAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1EAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1EB0
  c->lr=c->r[0]; // 801C1EB4
  c->r[1]=c->r[1]+0x00000010u; // 801C1EB8
  return; // 801C1EBC
}

// GXSetScissor__Q34nw4r3g3d6CameraCFv
void f_801C1EC0(Ctx* __restrict c) {
  trace_call(0x801C1EC0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 801C1EC0
  cmps(c,0,(int32_t)c->r[6],0); // 801C1EC4
  if (crb(c,2)) return; // 801C1EC8
  c->r[3]=R32(c->r[6]+0x000000F4u); // 801C1ECC
  c->r[4]=R32(c->r[6]+0x000000F8u); // 801C1ED0
  c->r[5]=R32(c->r[6]+0x000000FCu); // 801C1ED4
  c->r[6]=R32(c->r[6]+0x00000100u); // 801C1ED8
  f_80108C08(c); return; // 801C1EDC
  return; // 801C1EE0
}

// GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv
void f_801C1EE4(Ctx* __restrict c) {
  trace_call(0x801C1EE4u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C1EE4
  cmps(c,0,(int32_t)c->r[4],0); // 801C1EE8
  if (crb(c,2)) return; // 801C1EEC
  c->r[3]=R32(c->r[4]+0x00000104u); // 801C1EF0
  c->r[4]=R32(c->r[4]+0x00000108u); // 801C1EF4
  f_80108C70(c); return; // 801C1EF8
  return; // 801C1EFC
}

// UpdateCameraMtx__Q34nw4r3g3d6CameraCFv
void f_801C1F00(Ctx* __restrict c) {
  trace_call(0x801C1F00u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1F00
  c->r[0]=c->lr; // 801C1F04
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C1F08
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801C1F0C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801C1F10
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801C1F14
  c->r[31]=R32(c->r[3]+0x00000000u); // 801C1F18
  c->r[3]=R32(c->r[31]+0x00000070u); // 801C1F1C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801C1F20
  if (crb(c,2)) { goto L_801C1F40; } // 801C1F24
  c->r[3]=c->r[31]|c->r[31]; // 801C1F28
  c->r[4]=c->r[31]+0x00000074u; // 801C1F2C
  c->r[5]=c->r[31]+0x00000080u; // 801C1F30
  c->r[6]=c->r[31]+0x0000008Cu; // 801C1F34
  c->lr=0x801C1F3Cu; f_800EC914(c); // 801C1F38
  goto L_801C22DC; // 801C1F3C
L_801C1F40:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801C1F40
  if (crb(c,2)) { goto L_801C2178; } // 801C1F44
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1F48
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1F4C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1F50
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 801C1F54
  {uint32_t ea=c->r[31]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1F58
  {uint32_t ea=c->r[2]+0xFFFF9C38u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1F5C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1F60
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 801C1F64
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1F68
  fcmp(c,0,c->f[2],c->f[5]); // 801C1F6C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C1F70
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[5]);} // 801C1F74
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[3]);} // 801C1F78
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 801C1F7C
  if (!crb(c,2)) { goto L_801C2010; } // 801C1F80
  fcmp(c,0,c->f[2],c->f[3]); // 801C1F84
  if (!crb(c,2)) { goto L_801C2010; } // 801C1F88
  {uint32_t ea=c->r[2]+0xFFFF9C40u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1F8C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 801C1F90
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[2]);} // 801C1F94
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 801C1F98
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1F9C
  c->f[0]=-c->f[0]; // 801C1FA0
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C1FA4
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[2]);} // 801C1FA8
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 801C1FAC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[2]);} // 801C1FB0
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 801C1FB4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1FB8
  fcmp(c,0,c->f[0],c->f[2]); // 801C1FBC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C1FC0
  if (!crb(c,2)) { goto L_801C1FEC; } // 801C1FC4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 801C1FC8
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1FCC
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1FD0
  c->f[1]=-c->f[1]; // 801C1FD4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 801C1FD8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 801C1FDC
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1FE0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C1FE4
  goto L_801C22DC; // 801C1FE8
L_801C1FEC:;
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1FEC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801C1FF0
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1FF4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C1FF8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 801C1FFC
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2000
  c->f[0]=-c->f[0]; // 801C2004
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C2008
  goto L_801C22DC; // 801C200C
L_801C2010:;
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2010
  c->r[3]=c->r[1]+0x0000007Cu; // 801C2014
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2018
  c->r[4]=c->r[3]|c->r[3]; // 801C201C
  c->f[2]=-c->f[0]; // 801C2020
  {uint32_t ea=c->r[2]+0xFFFF9C38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2024
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 801C2028
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 801C202C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 801C2030
  c->lr=0x801C2038u; f_800ECFD0(c); // 801C2034
  c->r[3]=c->r[1]+0x00000070u; // 801C2038
  c->r[4]=c->r[3]|c->r[3]; // 801C203C
  c->lr=0x801C2044u; f_800ECFD0(c); // 801C2040
  c->r[3]=c->r[1]+0x0000007Cu; // 801C2044
  c->r[4]=c->r[1]+0x00000070u; // 801C2048
  c->r[5]=c->r[1]+0x00000064u; // 801C204C
  c->lr=0x801C2054u; f_800ED078(c); // 801C2050
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2054
  c->r[3]=c->r[1]+0x00000024u; // 801C2058
  {uint32_t ea=c->r[2]+0xFFFF9C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C205C
  c->r[4]=c->r[1]+0x00000020u; // 801C2060
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C2064
  c->lr=0x801C206Cu; f_801DB5C4(c); // 801C2068
  {uint32_t ea=c->r[1]+0x00000024u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C206C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2070
  {uint32_t ea=c->r[1]+0x00000020u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C2074
  {uint32_t ea=c->r[1]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2078
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[0]); // 801C207C
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 801C2080
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2084
  c->f[0]=c->ps1[0]=S(c->f[10]*c->f[4]); // 801C2088
  {uint32_t ea=c->r[1]+0x00000068u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C208C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2090
  c->f[7]=c->ps1[7]=S(c->f[11]*c->f[8]); // 801C2094
  c->f[9]=c->ps1[9]=S(c->f[2]+c->f[0]); // 801C2098
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[6]); // 801C209C
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[5]); // 801C20A0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[7]);} // 801C20A4
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[4]); // 801C20A8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[9]);} // 801C20AC
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[2]); // 801C20B0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801C20B4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[7]);} // 801C20B8
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[6]); // 801C20BC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 801C20C0
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[5]); // 801C20C4
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[8]); // 801C20C8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 801C20CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801C20D0
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,6,ea,0,0);} // 801C20D4
  {uint32_t ea=c->r[1]+0x0000005Cu; psq_load(c,5,ea,0,0);} // 801C20D8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[9]);} // 801C20DC
  {double t0=S(c->f[6]*c->f[5]), t1=S(c->ps1[6]*c->ps1[5]); c->f[6]=t0; c->ps1[6]=t1;} // 801C20E0
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 801C20E4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,4,ea,1,0);} // 801C20E8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 801C20EC
  {double t0=S(std::fma(c->f[0],c->f[4],c->f[6])), t1=S(std::fma(c->ps1[0],c->ps1[4],c->ps1[6])); c->f[5]=t0; c->ps1[5]=t1;} // 801C20F0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 801C20F4
  {uint32_t ea=c->r[1]+0x0000004Cu; psq_load(c,7,ea,1,0);} // 801C20F8
  {double t0=S(c->f[5]+c->ps1[6]), t1=S(c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 801C20FC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 801C2100
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,4,ea,0,0);} // 801C2104
  c->f[0]=-c->f[0]; // 801C2108
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C210C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 801C2110
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 801C2114
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 801C2118
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,0,0);} // 801C211C
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 801C2120
  {double t0=S(c->f[1]*c->f[4]), t1=S(c->ps1[1]*c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 801C2124
  {double t0=S(std::fma(c->f[0],c->f[7],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[7],c->ps1[1])); c->f[4]=t0; c->ps1[4]=t1;} // 801C2128
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801C212C
  c->f[0]=-c->f[0]; // 801C2130
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C2134
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2138
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 801C213C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2140
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 801C2144
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2148
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 801C214C
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,2,ea,0,0);} // 801C2150
  {uint32_t ea=c->r[1]+0x00000080u; psq_load(c,1,ea,0,0);} // 801C2154
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 801C2158
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801C215C
  {uint32_t ea=c->r[1]+0x0000007Cu; psq_load(c,1,ea,1,0);} // 801C2160
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 801C2164
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801C2168
  c->f[0]=-c->f[0]; // 801C216C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C2170
  goto L_801C22DC; // 801C2174
L_801C2178:;
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2178
  c->r[3]=c->r[1]+0x0000001Cu; // 801C217C
  {uint32_t ea=c->r[2]+0xFFFF9C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2180
  c->r[4]=c->r[1]+0x00000010u; // 801C2184
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C2188
  c->lr=0x801C2190u; f_801DB5C4(c); // 801C218C
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2190
  c->r[3]=c->r[1]+0x00000018u; // 801C2194
  {uint32_t ea=c->r[2]+0xFFFF9C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2198
  c->r[4]=c->r[1]+0x0000000Cu; // 801C219C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C21A0
  c->lr=0x801C21A8u; f_801DB5C4(c); // 801C21A4
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C21A8
  c->r[3]=c->r[1]+0x00000014u; // 801C21AC
  {uint32_t ea=c->r[2]+0xFFFF9C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C21B0
  c->r[4]=c->r[1]+0x00000008u; // 801C21B4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C21B8
  c->lr=0x801C21C0u; f_801DB5C4(c); // 801C21BC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C21C0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C21C4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[12]=c->ps1[12]=RF32(ea);} // 801C21C8
  c->f[0]=-c->f[2]; // 801C21CC
  c->f[13]=c->ps1[13]=S(c->f[2]*c->f[31]); // 801C21D0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 801C21D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C21D8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[12]); // 801C21DC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[11]); // 801C21E0
  c->f[7]=c->ps1[7]=S(c->f[12]*c->f[13]); // 801C21E4
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[10]); // 801C21E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C21EC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C21F0
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[4]); // 801C21F4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[10]); // 801C21F8
  c->f[9]=c->ps1[9]=S(c->f[7]+c->f[5]); // 801C21FC
  c->f[8]=c->ps1[8]=S(c->f[6]*c->f[12]); // 801C2200
  c->f[7]=c->ps1[7]=S(c->f[3]-c->f[2]); // 801C2204
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[9]);} // 801C2208
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[4]); // 801C220C
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[10]); // 801C2210
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[8]);} // 801C2214
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[31]); // 801C2218
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[1]); // 801C221C
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[11]); // 801C2220
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[7]);} // 801C2224
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[13]); // 801C2228
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 801C222C
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[12]); // 801C2230
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,8,ea,1,0);} // 801C2234
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[7]);} // 801C2238
  c->f[0]=c->ps1[0]=S(c->f[0]); // 801C223C
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[1]); // 801C2240
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 801C2244
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,9,ea,0,0);} // 801C2248
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,7,ea,0,0);} // 801C224C
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,1,ea,1,0);} // 801C2250
  {double t0=S(c->f[9]*c->f[7]), t1=S(c->ps1[9]*c->ps1[7]); c->f[9]=t0; c->ps1[9]=t1;} // 801C2254
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 801C2258
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 801C225C
  {double t0=S(std::fma(c->f[8],c->f[1],c->f[9])), t1=S(std::fma(c->ps1[8],c->ps1[1],c->ps1[9])); c->f[7]=t0; c->ps1[7]=t1;} // 801C2260
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,10,ea,1,0);} // 801C2264
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 801C2268
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,11,ea,0,0);} // 801C226C
  {double t0=S(c->f[7]+c->ps1[9]), t1=S(c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 801C2270
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[5]);} // 801C2274
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,8,ea,1,0);} // 801C2278
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[4]);} // 801C227C
  c->f[1]=-c->f[1]; // 801C2280
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,7,ea,0,0);} // 801C2284
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C2288
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[6]);} // 801C228C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[5]);} // 801C2290
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[4]);} // 801C2294
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,4,ea,0,0);} // 801C2298
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,1,ea,1,0);} // 801C229C
  {double t0=S(c->f[4]*c->f[7]), t1=S(c->ps1[4]*c->ps1[7]); c->f[4]=t0; c->ps1[4]=t1;} // 801C22A0
  {double t0=S(std::fma(c->f[1],c->f[10],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[10],c->ps1[4])); c->f[7]=t0; c->ps1[7]=t1;} // 801C22A4
  {double t0=S(c->f[7]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 801C22A8
  c->f[1]=-c->f[1]; // 801C22AC
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 801C22B0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 801C22B4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 801C22B8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 801C22BC
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,0,0);} // 801C22C0
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 801C22C4
  {double t0=S(c->f[1]*c->f[11]), t1=S(c->ps1[1]*c->ps1[11]); c->f[1]=t0; c->ps1[1]=t1;} // 801C22C8
  {double t0=S(std::fma(c->f[0],c->f[8],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[8],c->ps1[1])); c->f[11]=t0; c->ps1[11]=t1;} // 801C22CC
  {double t0=S(c->f[11]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801C22D0
  c->f[0]=-c->f[0]; // 801C22D4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C22D8
L_801C22DC:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 801C22DC
  c->r[0]=c->r[0]|0x00000008u; // 801C22E0
  W32(c->r[31]+0x00000070u,c->r[0]); // 801C22E4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801C22E8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801C22EC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801C22F0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C22F4
  c->lr=c->r[0]; // 801C22F8
  c->r[1]=c->r[1]+0x000000A0u; // 801C22FC
  return; // 801C2300
}

// CalcTexMtx_Basic__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_801C2304(Ctx* __restrict c) {
  trace_call(0x801C2304u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2304
  c->r[0]=c->lr; // 801C2308
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C230C
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 801C2310
  cmpu(c,0,c->r[0],0x00000007u); // 801C2314
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801C2318
  c->r[31]=c->r[5]|c->r[5]; // 801C231C
  W32(c->r[1]+0x00000048u,c->r[30]); // 801C2320
  c->r[30]=c->r[4]|c->r[4]; // 801C2324
  W32(c->r[1]+0x00000044u,c->r[29]); // 801C2328
  c->r[29]=c->r[3]|c->r[3]; // 801C232C
  if (!crb(c,2)) { goto L_801C233C; } // 801C2330
  c->r[3]=0u+0x00000000u; // 801C2334
  goto L_801C2444; // 801C2338
L_801C233C:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C233C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2340
  {uint32_t ea=c->r[2]+0xFFFF9C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2344
  c->r[4]=c->r[1]+0x00000008u; // 801C2348
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C234C
  c->lr=0x801C2354u; f_801DB5C4(c); // 801C2350
  cmps(c,0,(int32_t)c->r[30],0); // 801C2354
  if (crb(c,2)) { goto L_801C23CC; } // 801C2358
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C235C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2360
  {uint32_t ea=c->r[31]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2364
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 801C2368
  {uint32_t ea=c->r[2]+0xFFFF9C74u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C236C
  c->f[5]=-c->f[6]; // 801C2370
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2374
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2378
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801C237C
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2380
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2384
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 801C2388
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 801C238C
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C2390
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[4]);} // 801C2394
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2398
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801C239C
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[2]);} // 801C23A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C23A4
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 801C23A8
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 801C23AC
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[1]);} // 801C23B0
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[2]);} // 801C23B4
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 801C23B8
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 801C23BC
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 801C23C0
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[3]);} // 801C23C4
  goto L_801C2440; // 801C23C8
L_801C23CC:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C23CC
  c->r[4]=c->r[29]|c->r[29]; // 801C23D0
  {uint32_t ea=c->r[2]+0xFFFF9C74u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C23D4
  c->r[5]=c->r[29]|c->r[29]; // 801C23D8
  c->f[1]=-c->f[2]; // 801C23DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C23E0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C23E4
  c->r[3]=c->r[1]+0x00000010u; // 801C23E8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C23EC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 801C23F0
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801C23F4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C23F8
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[0]); // 801C23FC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2400
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[0]); // 801C2404
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2408
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 801C240C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 801C2410
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 801C2414
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 801C2418
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 801C241C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 801C2420
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 801C2424
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C2428
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[5]);} // 801C242C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[5]);} // 801C2430
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801C2434
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[5]);} // 801C2438
  c->lr=0x801C2440u; f_800EC0F4(c); // 801C243C
L_801C2440:;
  c->r[3]=0u+0x00000001u; // 801C2440
L_801C2444:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C2444
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801C2448
  c->r[30]=R32(c->r[1]+0x00000048u); // 801C244C
  c->r[29]=R32(c->r[1]+0x00000044u); // 801C2450
  c->lr=c->r[0]; // 801C2454
  c->r[1]=c->r[1]+0x00000050u; // 801C2458
  return; // 801C245C
}

// CalcWorldMtx_Basic__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
void f_801C2460(Ctx* __restrict c) {
  trace_call(0x801C2460u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2460
  c->r[0]=c->lr; // 801C2464
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C2468
  c->r[11]=c->r[1]+0x00000060u; // 801C246C
  c->lr=0x801C2474u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C2470
  c->r[31]=R32(c->r[8]+0x00000000u); // 801C2474
  c->r[26]=c->r[3]|c->r[3]; // 801C2478
  c->r[27]=c->r[4]|c->r[4]; // 801C247C
  c->r[28]=c->r[5]|c->r[5]; // 801C2480
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801C2484
  c->r[29]=c->r[7]|c->r[7]; // 801C2488
  c->r[30]=c->r[8]|c->r[8]; // 801C248C
  if (!crb(c,2)) { goto L_801C249C; } // 801C2490
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 801C2494
  if (crb(c,2)) { goto L_801C24C8; } // 801C2498
L_801C249C:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 801C249C
  if (crb(c,2)) { goto L_801C24B4; } // 801C24A0
  c->r[3]=c->r[28]|c->r[28]; // 801C24A4
  c->r[4]=c->r[26]|c->r[26]; // 801C24A8
  c->lr=0x801C24B0u; f_800EC0C0(c); // 801C24AC
  goto L_801C2564; // 801C24B0
L_801C24B4:;
  c->r[3]=c->r[26]|c->r[26]; // 801C24B4
  c->r[4]=c->r[28]|c->r[28]; // 801C24B8
  c->r[5]=c->r[6]|c->r[6]; // 801C24BC
  c->lr=0x801C24C4u; f_801DB8C0(c); // 801C24C0
  goto L_801C2564; // 801C24C4
L_801C24C8:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 801C24C8
  if (crb(c,2)) { goto L_801C252C; } // 801C24CC
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 801C24D0
  if (crb(c,2)) { goto L_801C2500; } // 801C24D4
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C24D8
  c->r[4]=c->r[28]|c->r[28]; // 801C24DC
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C24E0
  c->r[5]=c->r[1]+0x00000008u; // 801C24E4
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C24E8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C24EC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C24F0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801C24F4
  c->lr=0x801C24FCu; f_801DB914(c); // 801C24F8
  goto L_801C2564; // 801C24FC
L_801C2500:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2500
  c->r[3]=c->r[8]+0x0000001Cu; // 801C2504
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2508
  c->r[4]=c->r[1]+0x00000018u; // 801C250C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2510
  c->lr=0x801C2518u; f_800EC818(c); // 801C2514
  c->r[3]=c->r[28]|c->r[28]; // 801C2518
  c->r[5]=c->r[26]|c->r[26]; // 801C251C
  c->r[4]=c->r[1]+0x00000018u; // 801C2520
  c->lr=0x801C2528u; f_800EC0F4(c); // 801C2524
  goto L_801C2564; // 801C2528
L_801C252C:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 801C252C
  if (crb(c,2)) { goto L_801C2548; } // 801C2530
  c->r[3]=c->r[28]|c->r[28]; // 801C2534
  c->r[5]=c->r[26]|c->r[26]; // 801C2538
  c->r[4]=c->r[8]+0x0000001Cu; // 801C253C
  c->lr=0x801C2544u; f_800EC0F4(c); // 801C2540
  goto L_801C2564; // 801C2544
L_801C2548:;
  c->r[4]=c->r[28]|c->r[28]; // 801C2548
  c->r[5]=c->r[6]|c->r[6]; // 801C254C
  c->lr=0x801C2554u; f_801DB8C0(c); // 801C2550
  c->r[3]=c->r[26]|c->r[26]; // 801C2554
  c->r[5]=c->r[26]|c->r[26]; // 801C2558
  c->r[4]=c->r[30]+0x0000001Cu; // 801C255C
  c->lr=0x801C2564u; f_800EC0F4(c); // 801C2560
L_801C2564:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 801C2564
  if (crb(c,2)) { goto L_801C2584; } // 801C2568
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C256C
  c->r[4]=c->r[29]|0x40000000u; // 801C2570
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 801C2574
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 801C2578
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 801C257C
  goto L_801C25A0; // 801C2580
L_801C2584:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2584
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 801C2588
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C258C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2590
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[2]);} // 801C2594
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 801C2598
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 801C259C
L_801C25A0:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 801C25A0
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 801C25A4
  if (crb(c,2)) { goto L_801C25B0; } // 801C25A8
  c->r[3]=c->r[4]|0x10000000u; // 801C25AC
L_801C25B0:;
  c->r[11]=c->r[1]+0x00000060u; // 801C25B0
  c->lr=0x801C25B8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C25B4
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C25B8
  c->lr=c->r[0]; // 801C25BC
  c->r[1]=c->r[1]+0x00000060u; // 801C25C0
  return; // 801C25C4
}

// MakeTexSrtMtx_S__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C25C8(Ctx* __restrict c) {
  trace_call(0x801C25C8u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C25C8
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C25CC
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C25D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C25D4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C25D8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801C25DC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 801C25E0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801C25E4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C25E8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 801C25EC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801C25F0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C25F4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C25F8
  return; // 801C25FC
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2600(Ctx* __restrict c) {
  trace_call(0x801C2600u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2600
  c->r[0]=c->lr; // 801C2604
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2608
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C260C
  c->r[4]=c->r[1]+0x00000008u; // 801C2610
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2614
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C2618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C261C
  c->r[31]=c->r[3]|c->r[3]; // 801C2620
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2624
  c->lr=0x801C262Cu; f_801DB5C4(c); // 801C2628
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C262C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2630
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2634
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[1]); // 801C2638
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C263C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801C2640
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 801C2644
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 801C2648
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C264C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801C2650
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[3]); // 801C2654
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 801C2658
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[3]); // 801C265C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C2660
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2664
  c->f[1]=-c->f[1]; // 801C2668
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 801C266C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2670
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 801C2674
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 801C2678
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C267C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2680
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2684
  c->lr=c->r[0]; // 801C2688
  c->r[1]=c->r[1]+0x00000020u; // 801C268C
  return; // 801C2690
}

// MakeTexSrtMtx_T__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2694(Ctx* __restrict c) {
  trace_call(0x801C2694u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2694
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2698
  c->f[1]=-c->f[0]; // 801C269C
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C26A0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C26A4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 801C26A8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801C26AC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801C26B0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C26B4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 801C26B8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C26BC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C26C0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C26C4
  return; // 801C26C8
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C26CC(Ctx* __restrict c) {
  trace_call(0x801C26CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C26CC
  c->r[0]=c->lr; // 801C26D0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C26D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C26D8
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C26DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C26E0
  c->r[31]=c->r[4]|c->r[4]; // 801C26E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C26E8
  c->r[4]=c->r[1]+0x00000008u; // 801C26EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C26F0
  c->r[30]=c->r[3]|c->r[3]; // 801C26F4
  c->r[3]=c->r[1]+0x0000000Cu; // 801C26F8
  c->lr=0x801C2700u; f_801DB5C4(c); // 801C26FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2700
  {uint32_t ea=c->r[31]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C2704
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2708
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C270C
  c->f[11]=c->ps1[11]=S(c->f[7]*c->f[1]); // 801C2710
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[0]); // 801C2714
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2718
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[1]); // 801C271C
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2720
  c->f[10]=c->ps1[10]=S(c->f[8]*c->f[0]); // 801C2724
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[11]); // 801C2728
  c->f[3]=-c->f[3]; // 801C272C
  {uint32_t ea=c->r[2]+0xFFFF9C90u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2730
  c->f[5]=c->ps1[5]=S(c->f[10]+c->f[9]); // 801C2734
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2738
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[7]); // 801C273C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[9]);} // 801C2740
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[8]); // 801C2744
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801C2748
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[10]);} // 801C274C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 801C2750
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 801C2754
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C2758
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 801C275C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C2760
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[11]);} // 801C2764
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 801C2768
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C276C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2770
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2774
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2778
  c->lr=c->r[0]; // 801C277C
  c->r[1]=c->r[1]+0x00000020u; // 801C2780
  return; // 801C2784
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2788(Ctx* __restrict c) {
  trace_call(0x801C2788u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2788
  c->r[0]=c->lr; // 801C278C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2790
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2794
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2798
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C279C
  c->r[31]=c->r[4]|c->r[4]; // 801C27A0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C27A4
  c->r[4]=c->r[1]+0x00000008u; // 801C27A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C27AC
  c->r[30]=c->r[3]|c->r[3]; // 801C27B0
  c->r[3]=c->r[1]+0x0000000Cu; // 801C27B4
  c->lr=0x801C27BCu; f_801DB5C4(c); // 801C27B8
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C27BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C27C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C27C4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[1]); // 801C27C8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C27CC
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[3]); // 801C27D0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 801C27D4
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C27D8
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 801C27DC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C27E0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C27E4
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[6]); // 801C27E8
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 801C27EC
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[6]); // 801C27F0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 801C27F4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801C27F8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C27FC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C2800
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2804
  c->f[1]=-c->f[1]; // 801C2808
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 801C280C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2810
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 801C2814
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 801C2818
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C281C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2820
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2824
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2828
  c->lr=c->r[0]; // 801C282C
  c->r[1]=c->r[1]+0x00000020u; // 801C2830
  return; // 801C2834
}

// MakeTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2838(Ctx* __restrict c) {
  trace_call(0x801C2838u);
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2838
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C283C
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2840
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2844
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C2848
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C284C
  c->f[4]=-c->f[6]; // 801C2850
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2854
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C2858
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 801C285C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801C2860
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 801C2864
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C2868
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 801C286C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 801C2870
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 801C2874
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 801C2878
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 801C287C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C2880
  return; // 801C2884
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2888(Ctx* __restrict c) {
  trace_call(0x801C2888u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2888
  c->r[0]=c->lr; // 801C288C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2890
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2894
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C289C
  c->r[31]=c->r[4]|c->r[4]; // 801C28A0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C28A4
  c->r[4]=c->r[1]+0x00000008u; // 801C28A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C28AC
  c->r[30]=c->r[3]|c->r[3]; // 801C28B0
  c->r[3]=c->r[1]+0x0000000Cu; // 801C28B4
  c->lr=0x801C28BCu; f_801DB5C4(c); // 801C28B8
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C28BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C28C0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C28C4
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[0]); // 801C28C8
  {uint32_t ea=c->r[2]+0xFFFF9C90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C28CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C28D0
  c->f[3]=-c->f[4]; // 801C28D4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C28D8
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[0]); // 801C28DC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 801C28E0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C28E4
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 801C28E8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C28EC
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C28F0
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[2]); // 801C28F4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C28F8
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 801C28FC
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2900
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 801C2904
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 801C2908
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801C290C
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[8]); // 801C2910
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[7]);} // 801C2914
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[5]); // 801C2918
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 801C291C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[6]);} // 801C2920
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C2924
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C2928
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C292C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801C2930
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 801C2934
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2938
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 801C293C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[7]);} // 801C2940
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C2944
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 801C2948
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C294C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2950
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2954
  c->lr=c->r[0]; // 801C2958
  c->r[1]=c->r[1]+0x00000020u; // 801C295C
  return; // 801C2960
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2964(Ctx* __restrict c) {
  trace_call(0x801C2964u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2964
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2968
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C296C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[5]); // 801C2970
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2974
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 801C2978
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C297C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2980
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C2984
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 801C2988
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C298C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C2990
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 801C2994
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C2998
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C299C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C29A0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 801C29A4
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[9]); // 801C29A8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 801C29AC
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[9]); // 801C29B0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 801C29B4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 801C29B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 801C29BC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 801C29C0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 801C29C4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C29C8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C29CC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801C29D0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C29D4
  return; // 801C29D8
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C29DC(Ctx* __restrict c) {
  trace_call(0x801C29DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C29DC
  c->r[0]=c->lr; // 801C29E0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C29E4
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C29E8
  c->r[4]=c->r[1]+0x00000008u; // 801C29EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C29F0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C29F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C29F8
  c->r[31]=c->r[3]|c->r[3]; // 801C29FC
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2A00
  c->lr=0x801C2A08u; f_801DB5C4(c); // 801C2A04
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 801C2A08
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2A0C
  c->f[1]=-c->f[10]; // 801C2A10
  {uint32_t ea=c->r[31]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2A14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2A18
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[0]); // 801C2A1C
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[12]=c->ps1[12]=RF32(ea);} // 801C2A20
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[4]); // 801C2A24
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801C2A28
  {uint32_t ea=c->r[31]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C2A2C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C2A30
  {uint32_t ea=c->r[31]+0x00000014u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C2A34
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801C2A38
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[5]); // 801C2A3C
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 801C2A40
  {uint32_t ea=c->r[31]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C2A44
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 801C2A48
  c->f[0]=c->ps1[0]=S(c->f[12]*c->f[10]); // 801C2A4C
  c->f[1]=c->ps1[1]=S(c->f[12]-c->f[4]); // 801C2A50
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 801C2A54
  {uint32_t ea=c->r[31]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2A58
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2A5C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 801C2A60
  c->f[2]=-c->f[3]; // 801C2A64
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C2A68
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[8]); // 801C2A6C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2A70
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[11]); // 801C2A74
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[11]); // 801C2A78
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[8]); // 801C2A7C
  c->f[4]=c->ps1[4]=S(c->f[10]+c->f[4]); // 801C2A80
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801C2A84
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[4]);} // 801C2A88
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 801C2A8C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2A90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C2A94
  c->f[2]=-c->f[3]; // 801C2A98
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[6]); // 801C2A9C
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 801C2AA0
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[9]); // 801C2AA4
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[6]); // 801C2AA8
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[4]); // 801C2AAC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801C2AB0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 801C2AB4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 801C2AB8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2ABC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C2AC0
  c->f[2]=-c->f[3]; // 801C2AC4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[5]); // 801C2AC8
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 801C2ACC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[7]); // 801C2AD0
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[5]); // 801C2AD4
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[4]); // 801C2AD8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801C2ADC
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[4]); // 801C2AE0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801C2AE4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[0]); // 801C2AE8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C2AEC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C2AF0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C2AF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2AF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2AFC
  c->lr=c->r[0]; // 801C2B00
  c->r[1]=c->r[1]+0x00000020u; // 801C2B04
  return; // 801C2B08
}

// ProductTexSrtMtx_T__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2B0C(Ctx* __restrict c) {
  trace_call(0x801C2B0Cu);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2B0C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2B10
  c->f[3]=-c->f[0]; // 801C2B14
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2B18
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2B1C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 801C2B20
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C2B24
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C2B28
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C2B2C
  return; // 801C2B30
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2B34(Ctx* __restrict c) {
  trace_call(0x801C2B34u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2B34
  c->r[0]=c->lr; // 801C2B38
  W32(c->r[1]+0x00000084u,c->r[0]); // 801C2B3C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801C2B40
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801C2B44
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801C2B48
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801C2B4C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801C2B50
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801C2B54
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801C2B58
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801C2B5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801C2B60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801C2B64
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 801C2B68
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 801C2B6C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2B70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2B74
  c->r[31]=c->r[4]|c->r[4]; // 801C2B78
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2B7C
  c->r[4]=c->r[1]+0x00000008u; // 801C2B80
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2B84
  c->r[30]=c->r[3]|c->r[3]; // 801C2B88
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C2B8C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2B90
  c->lr=0x801C2B98u; f_801DB5C4(c); // 801C2B94
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2B98
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2B9C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C2BA0
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[6]); // 801C2BA4
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 801C2BA8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2BAC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[7]); // 801C2BB0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2BB4
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[0]); // 801C2BB8
  c->f[30]=-c->f[8]; // 801C2BBC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2BC0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[10]); // 801C2BC4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[26]=c->ps1[26]=RF32(ea);} // 801C2BC8
  c->f[8]=c->ps1[8]=S(c->f[2]-c->f[10]); // 801C2BCC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 801C2BD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[7]); // 801C2BD4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C2BD8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[6]); // 801C2BDC
  {uint32_t ea=c->r[30]+0x00000014u; c->f[13]=c->ps1[13]=RF32(ea);} // 801C2BE0
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[8]); // 801C2BE4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 801C2BE8
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[4]); // 801C2BEC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C2BF0
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[8]); // 801C2BF4
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[4]); // 801C2BF8
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2BFC
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 801C2C00
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[26]); // 801C2C04
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[26]); // 801C2C08
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 801C2C0C
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[28]); // 801C2C10
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[28]); // 801C2C14
  c->f[26]=c->ps1[26]=S(c->f[4]+c->f[5]); // 801C2C18
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 801C2C1C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[29]); // 801C2C20
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 801C2C24
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[26]);} // 801C2C28
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 801C2C2C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 801C2C30
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[31]); // 801C2C34
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 801C2C38
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 801C2C3C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[27]);} // 801C2C40
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[12]); // 801C2C44
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 801C2C48
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 801C2C4C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 801C2C50
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[11]); // 801C2C54
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[12]); // 801C2C58
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 801C2C5C
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 801C2C60
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 801C2C64
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[8]); // 801C2C68
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801C2C6C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 801C2C70
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C2C74
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 801C2C78
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C2C7C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801C2C80
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801C2C84
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801C2C88
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801C2C8C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801C2C90
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801C2C94
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801C2C98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801C2C9C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801C2CA0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801C2CA4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 801C2CA8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 801C2CAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2CB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2CB4
  c->r[0]=R32(c->r[1]+0x00000084u); // 801C2CB8
  c->lr=c->r[0]; // 801C2CBC
  c->r[1]=c->r[1]+0x00000080u; // 801C2CC0
  return; // 801C2CC4
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2CC8(Ctx* __restrict c) {
  trace_call(0x801C2CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2CC8
  c->r[0]=c->lr; // 801C2CCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C2CD0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801C2CD4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801C2CD8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2CDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2CE0
  c->r[31]=c->r[4]|c->r[4]; // 801C2CE4
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2CE8
  c->r[4]=c->r[1]+0x00000008u; // 801C2CEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2CF0
  c->r[30]=c->r[3]|c->r[3]; // 801C2CF4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C2CF8
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2CFC
  c->lr=0x801C2D04u; f_801DB5C4(c); // 801C2D00
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C2D04
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2D08
  c->f[1]=-c->f[7]; // 801C2D0C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2D10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2D14
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[0]); // 801C2D18
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[12]=c->ps1[12]=RF32(ea);} // 801C2D1C
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[4]); // 801C2D20
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801C2D24
  {uint32_t ea=c->r[2]+0xFFFF9C90u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2D28
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C2D2C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[13]=c->ps1[13]=RF32(ea);} // 801C2D30
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801C2D34
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[7]); // 801C2D38
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 801C2D3C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C2D40
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 801C2D44
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[5]); // 801C2D48
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[12]); // 801C2D4C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 801C2D50
  {uint32_t ea=c->r[30]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C2D54
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2D58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C2D5C
  c->f[3]=-c->f[4]; // 801C2D60
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C2D64
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[10]); // 801C2D68
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 801C2D6C
  c->f[12]=c->ps1[12]=S(c->f[31]*c->f[13]); // 801C2D70
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C2D74
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 801C2D78
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2D7C
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[10]); // 801C2D80
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2D84
  c->f[6]=c->ps1[6]=S(c->f[12]+c->f[6]); // 801C2D88
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801C2D8C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[6]);} // 801C2D90
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[3]);} // 801C2D94
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2D98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 801C2D9C
  c->f[3]=-c->f[4]; // 801C2DA0
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[8]); // 801C2DA4
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[11]); // 801C2DA8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[11]); // 801C2DAC
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[8]); // 801C2DB0
  c->f[6]=c->ps1[6]=S(c->f[10]+c->f[6]); // 801C2DB4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801C2DB8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 801C2DBC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[3]);} // 801C2DC0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2DC4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C2DC8
  c->f[3]=-c->f[4]; // 801C2DCC
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[7]); // 801C2DD0
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 801C2DD4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[9]); // 801C2DD8
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 801C2DDC
  c->f[6]=c->ps1[6]=S(c->f[8]+c->f[6]); // 801C2DE0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801C2DE4
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[6]); // 801C2DE8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 801C2DEC
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[0]); // 801C2DF0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C2DF4
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[5]); // 801C2DF8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801C2DFC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C2E00
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C2E04
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801C2E08
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801C2E0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2E10
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2E14
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C2E18
  c->lr=c->r[0]; // 801C2E1C
  c->r[1]=c->r[1]+0x00000030u; // 801C2E20
  return; // 801C2E24
}

// ProductTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2E28(Ctx* __restrict c) {
  trace_call(0x801C2E28u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2E28
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2E2C
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2E30
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801C2E34
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2E38
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2E3C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2E40
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C2E44
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2E48
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[4]); // 801C2E4C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C2E50
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 801C2E54
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2E58
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 801C2E5C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2E60
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C2E64
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C2E68
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C2E6C
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 801C2E70
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2E74
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 801C2E78
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 801C2E7C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 801C2E80
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 801C2E84
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 801C2E88
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 801C2E8C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C2E90
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 801C2E94
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 801C2E98
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 801C2E9C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C2EA0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C2EA4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C2EA8
  return; // 801C2EAC
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C2EB0(Ctx* __restrict c) {
  trace_call(0x801C2EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2EB0
  c->r[0]=c->lr; // 801C2EB4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801C2EB8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801C2EBC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801C2EC0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801C2EC4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801C2EC8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801C2ECC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801C2ED0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801C2ED4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801C2ED8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801C2EDC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801C2EE0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 801C2EE4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 801C2EE8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2EEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2EF0
  c->r[31]=c->r[4]|c->r[4]; // 801C2EF4
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2EF8
  c->r[4]=c->r[1]+0x00000008u; // 801C2EFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2F00
  c->r[30]=c->r[3]|c->r[3]; // 801C2F04
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C2F08
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2F0C
  c->lr=0x801C2F14u; f_801DB5C4(c); // 801C2F10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2F14
  {uint32_t ea=c->r[31]+0x00000004u; c->f[27]=c->ps1[27]=RF32(ea);} // 801C2F18
  {uint32_t ea=c->r[2]+0xFFFF9C8Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C2F1C
  c->f[4]=c->ps1[4]=S(c->f[27]*c->f[2]); // 801C2F20
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2F24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C2F28
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[7]); // 801C2F2C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2F30
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2F34
  c->f[5]=c->ps1[5]=S(c->f[7]-c->f[1]); // 801C2F38
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2F3C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2F40
  c->f[30]=-c->f[4]; // 801C2F44
  {uint32_t ea=c->r[30]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 801C2F48
  c->f[10]=c->ps1[10]=S(c->f[7]-c->f[1]); // 801C2F4C
  c->f[3]=c->ps1[3]=S(c->f[27]*c->f[9]); // 801C2F50
  {uint32_t ea=c->r[30]+0x00000000u; c->f[26]=c->ps1[26]=RF32(ea);} // 801C2F54
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[9]); // 801C2F58
  c->f[9]=c->ps1[9]=S(c->f[6]-c->f[7]); // 801C2F5C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[13]=c->ps1[13]=RF32(ea);} // 801C2F60
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 801C2F64
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[27]); // 801C2F68
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C2F6C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801C2F70
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[4]); // 801C2F74
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2F78
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[8]); // 801C2F7C
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[26]); // 801C2F80
  {uint32_t ea=c->r[30]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C2F84
  {uint32_t ea=c->r[30]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 801C2F88
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 801C2F8C
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[26]); // 801C2F90
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[28]); // 801C2F94
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 801C2F98
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[28]); // 801C2F9C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[29]); // 801C2FA0
  c->f[26]=c->ps1[26]=S(c->f[4]+c->f[5]); // 801C2FA4
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 801C2FA8
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 801C2FAC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[27]);} // 801C2FB0
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 801C2FB4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 801C2FB8
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[9]); // 801C2FBC
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[8]); // 801C2FC0
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 801C2FC4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[26]);} // 801C2FC8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[12]); // 801C2FCC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 801C2FD0
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[31]); // 801C2FD4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 801C2FD8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 801C2FDC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[11]); // 801C2FE0
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 801C2FE4
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 801C2FE8
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[12]); // 801C2FEC
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 801C2FF0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 801C2FF4
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[8]); // 801C2FF8
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801C2FFC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 801C3000
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C3004
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 801C3008
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C300C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801C3010
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801C3014
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801C3018
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801C301C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801C3020
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801C3024
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801C3028
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801C302C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801C3030
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801C3034
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 801C3038
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 801C303C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3040
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C3044
  c->r[0]=R32(c->r[1]+0x00000084u); // 801C3048
  c->lr=c->r[0]; // 801C304C
  c->r[1]=c->r[1]+0x00000080u; // 801C3050
  return; // 801C3054
}

// CalcTexMtx_Maya__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_801C3058(Ctx* __restrict c) {
  trace_call(0x801C3058u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3058
  c->r[0]=c->lr; // 801C305C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3060
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 801C3064
  cmpu(c,0,c->r[0],0x00000007u); // 801C3068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C306C
  c->r[31]=c->r[3]|c->r[3]; // 801C3070
  if (!crb(c,2)) { goto L_801C3080; } // 801C3074
  c->r[3]=0u+0x00000000u; // 801C3078
  goto L_801C30E0; // 801C307C
L_801C3080:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C3080
  if (crb(c,2)) { goto L_801C30A8; } // 801C3084
  c->r[6]=0u+0x80270000u; // 801C3088
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C308C
  c->r[6]=c->r[6]+0x00000D50u; // 801C3090
  c->r[4]=c->r[5]|c->r[5]; // 801C3094
  c->r[12]=R32(c->r[6]+c->r[0]); // 801C3098
  c->ctr=c->r[12]; // 801C309C
  if (true) { c->lr=0x801C30A4u; dispatch(c,c->ctr); } // 801C30A0
  goto L_801C30C4; // 801C30A4
L_801C30A8:;
  c->r[6]=0u+0x80270000u; // 801C30A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C30AC
  c->r[6]=c->r[6]+0x00000D6Cu; // 801C30B0
  c->r[4]=c->r[5]|c->r[5]; // 801C30B4
  c->r[12]=R32(c->r[6]+c->r[0]); // 801C30B8
  c->ctr=c->r[12]; // 801C30BC
  if (true) { c->lr=0x801C30C4u; dispatch(c,c->ctr); } // 801C30C0
L_801C30C4:;
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C30C4
  c->r[3]=0u+0x00000001u; // 801C30C8
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C30CC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 801C30D0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 801C30D4
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 801C30D8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C30DC
L_801C30E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C30E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C30E4
  c->lr=c->r[0]; // 801C30E8
  c->r[1]=c->r[1]+0x00000010u; // 801C30EC
  return; // 801C30F0
}

// CalcWorldMtx_Maya_SSC_Apply__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
void f_801C30F4(Ctx* __restrict c) {
  trace_call(0x801C30F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C30F4
  c->r[0]=c->lr; // 801C30F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C30FC
  c->r[11]=c->r[1]+0x00000040u; // 801C3100
  c->lr=0x801C3108u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3104
  c->r[31]=R32(c->r[8]+0x00000000u); // 801C3108
  c->r[25]=c->r[3]|c->r[3]; // 801C310C
  c->r[26]=c->r[4]|c->r[4]; // 801C3110
  c->r[27]=c->r[5]|c->r[5]; // 801C3114
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801C3118
  c->r[28]=c->r[6]|c->r[6]; // 801C311C
  c->r[29]=c->r[7]|c->r[7]; // 801C3120
  c->r[30]=c->r[8]|c->r[8]; // 801C3124
  if (!crb(c,2)) { goto L_801C3134; } // 801C3128
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 801C312C
  if (crb(c,2)) { goto L_801C3144; } // 801C3130
L_801C3134:;
  c->r[3]=c->r[27]|c->r[27]; // 801C3134
  c->r[4]=c->r[25]|c->r[25]; // 801C3138
  c->lr=0x801C3140u; f_800EC0C0(c); // 801C313C
  goto L_801C3224; // 801C3140
L_801C3144:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 801C3144
  if (crb(c,2)) { goto L_801C31BC; } // 801C3148
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 801C314C
  if (crb(c,2)) { goto L_801C317C; } // 801C3150
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3154
  c->r[4]=c->r[27]|c->r[27]; // 801C3158
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C315C
  c->r[5]=c->r[1]+0x00000014u; // 801C3160
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3164
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801C3168
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801C316C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C3170
  c->lr=0x801C3178u; f_801DB914(c); // 801C3174
  goto L_801C3224; // 801C3178
L_801C317C:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C317C
  c->r[4]=c->r[27]|c->r[27]; // 801C3180
  {uint32_t ea=c->r[8]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3184
  c->r[5]=c->r[1]+0x00000008u; // 801C3188
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C318C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 801C3190
  {uint32_t ea=c->r[8]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3194
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3198
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C319C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801C31A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 801C31A4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C31A8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C31AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C31B0
  c->lr=0x801C31B8u; f_801DB914(c); // 801C31B4
  goto L_801C3224; // 801C31B8
L_801C31BC:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 801C31BC
  if (crb(c,2)) { goto L_801C31D8; } // 801C31C0
  c->r[3]=c->r[27]|c->r[27]; // 801C31C4
  c->r[5]=c->r[25]|c->r[25]; // 801C31C8
  c->r[4]=c->r[8]+0x0000001Cu; // 801C31CC
  c->lr=0x801C31D4u; f_800EC0F4(c); // 801C31D0
  goto L_801C3224; // 801C31D4
L_801C31D8:;
  c->r[4]=c->r[25]|c->r[25]; // 801C31D8
  c->r[3]=c->r[8]+0x0000001Cu; // 801C31DC
  c->lr=0x801C31E4u; f_800EC0C0(c); // 801C31E0
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C31E4
  c->r[3]=c->r[27]|c->r[27]; // 801C31E8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C31EC
  c->r[4]=c->r[25]|c->r[25]; // 801C31F0
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C31F4
  c->r[5]=c->r[25]|c->r[25]; // 801C31F8
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 801C31FC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3200
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3204
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3208
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801C320C
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[4]);} // 801C3210
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C3214
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C3218
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C321C
  c->lr=0x801C3224u; f_800EC0F4(c); // 801C3220
L_801C3224:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 801C3224
  if (crb(c,2)) { goto L_801C3244; } // 801C3228
  {uint32_t ea=c->r[2]+0xFFFF9C84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C322C
  c->r[4]=c->r[29]|0x40000000u; // 801C3230
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 801C3234
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[0]);} // 801C3238
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[0]);} // 801C323C
  goto L_801C3260; // 801C3240
L_801C3244:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3244
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 801C3248
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C324C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3250
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[2]);} // 801C3254
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 801C3258
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 801C325C
L_801C3260:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 801C3260
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 801C3264
  if (crb(c,2)) { goto L_801C3270; } // 801C3268
  c->r[3]=c->r[4]|0x10000000u; // 801C326C
L_801C3270:;
  c->r[11]=c->r[1]+0x00000040u; // 801C3270
  c->lr=0x801C3278u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3274
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C3278
  c->lr=c->r[0]; // 801C327C
  c->r[1]=c->r[1]+0x00000040u; // 801C3280
  return; // 801C3284
}

// MakeTexSrtMtx_S__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3288(Ctx* __restrict c) {
  trace_call(0x801C3288u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3288
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C328C
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3290
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C3294
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3298
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801C329C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 801C32A0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801C32A4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C32A8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 801C32AC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801C32B0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C32B4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C32B8
  return; // 801C32BC
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C32C0(Ctx* __restrict c) {
  trace_call(0x801C32C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C32C0
  c->r[0]=c->lr; // 801C32C4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C32C8
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C32CC
  c->r[4]=c->r[1]+0x00000008u; // 801C32D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C32D4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C32D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C32DC
  c->r[31]=c->r[3]|c->r[3]; // 801C32E0
  c->r[3]=c->r[1]+0x0000000Cu; // 801C32E4
  c->lr=0x801C32ECu; f_801DB5C4(c); // 801C32E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C32EC
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C32F0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801C32F4
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C32F8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C32FC
  c->f[0]=-c->f[0]; // 801C3300
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 801C3304
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801C3308
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C330C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C3310
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3314
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 801C3318
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C331C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 801C3320
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 801C3324
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3328
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C332C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3330
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3334
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3338
  c->lr=c->r[0]; // 801C333C
  c->r[1]=c->r[1]+0x00000020u; // 801C3340
  return; // 801C3344
}

// MakeTexSrtMtx_T__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3348(Ctx* __restrict c) {
  trace_call(0x801C3348u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3348
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C334C
  c->f[1]=-c->f[0]; // 801C3350
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3354
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3358
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 801C335C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801C3360
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801C3364
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C3368
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 801C336C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C3370
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C3374
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3378
  return; // 801C337C
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3380(Ctx* __restrict c) {
  trace_call(0x801C3380u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3380
  c->r[0]=c->lr; // 801C3384
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3388
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C338C
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3390
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3394
  c->r[31]=c->r[4]|c->r[4]; // 801C3398
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C339C
  c->r[4]=c->r[1]+0x00000008u; // 801C33A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C33A4
  c->r[30]=c->r[3]|c->r[3]; // 801C33A8
  c->r[3]=c->r[1]+0x0000000Cu; // 801C33AC
  c->lr=0x801C33B4u; f_801DB5C4(c); // 801C33B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C33B4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C33B8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C33BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C33C0
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[0]); // 801C33C4
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 801C33C8
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C33CC
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[4]); // 801C33D0
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C33D4
  c->f[1]=-c->f[7]; // 801C33D8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 801C33DC
  c->f[3]=-c->f[6]; // 801C33E0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[5]);} // 801C33E4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C33E8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 801C33EC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[3]);} // 801C33F0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[6]);} // 801C33F4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 801C33F8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[7]);} // 801C33FC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 801C3400
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3404
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3408
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C340C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3410
  c->lr=c->r[0]; // 801C3414
  c->r[1]=c->r[1]+0x00000020u; // 801C3418
  return; // 801C341C
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3420(Ctx* __restrict c) {
  trace_call(0x801C3420u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3420
  c->r[0]=c->lr; // 801C3424
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3428
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C342C
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3430
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3434
  c->r[31]=c->r[4]|c->r[4]; // 801C3438
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C343C
  c->r[4]=c->r[1]+0x00000008u; // 801C3440
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3444
  c->r[30]=c->r[3]|c->r[3]; // 801C3448
  c->r[3]=c->r[1]+0x0000000Cu; // 801C344C
  c->lr=0x801C3454u; f_801DB5C4(c); // 801C3450
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3454
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3458
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C345C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C3460
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3464
  {uint32_t ea=c->r[31]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3468
  c->f[1]=-c->f[0]; // 801C346C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 801C3470
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3474
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 801C3478
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C347C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3480
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[6]); // 801C3484
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 801C3488
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C348C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801C3490
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C3494
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3498
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 801C349C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C34A0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 801C34A4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 801C34A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C34AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C34B0
  c->f[3]=-c->f[4]; // 801C34B4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[6]); // 801C34B8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[5]); // 801C34BC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801C34C0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C34C4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C34C8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C34CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C34D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C34D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C34D8
  c->lr=c->r[0]; // 801C34DC
  c->r[1]=c->r[1]+0x00000020u; // 801C34E0
  return; // 801C34E4
}

// MakeTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C34E8(Ctx* __restrict c) {
  trace_call(0x801C34E8u);
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C34E8
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C34EC
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C34F0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C34F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C34F8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C34FC
  c->f[4]=-c->f[6]; // 801C3500
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3504
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C3508
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 801C350C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801C3510
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 801C3514
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C3518
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 801C351C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 801C3520
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 801C3524
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 801C3528
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 801C352C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3530
  return; // 801C3534
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3538(Ctx* __restrict c) {
  trace_call(0x801C3538u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3538
  c->r[0]=c->lr; // 801C353C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3540
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3544
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C354C
  c->r[31]=c->r[4]|c->r[4]; // 801C3550
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C3554
  c->r[4]=c->r[1]+0x00000008u; // 801C3558
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C355C
  c->r[30]=c->r[3]|c->r[3]; // 801C3560
  c->r[3]=c->r[1]+0x0000000Cu; // 801C3564
  c->lr=0x801C356Cu; f_801DB5C4(c); // 801C3568
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C356C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3570
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3574
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3578
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[3]); // 801C357C
  c->f[10]=c->ps1[10]=S(c->f[0]*c->f[2]); // 801C3580
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3584
  c->f[7]=c->ps1[7]=S(c->f[5]*c->f[3]); // 801C3588
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C358C
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[2]); // 801C3590
  c->f[3]=-c->f[9]; // 801C3594
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[1]); // 801C3598
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C359C
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[1]); // 801C35A0
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C35A4
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 801C35A8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801C35AC
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[4]); // 801C35B0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[7]);} // 801C35B4
  c->f[5]=c->ps1[5]=S(c->f[8]-c->f[5]); // 801C35B8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C35BC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 801C35C0
  c->f[4]=-c->f[8]; // 801C35C4
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 801C35C8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[10]);} // 801C35CC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C35D0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[9]);} // 801C35D4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 801C35D8
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[4]);} // 801C35DC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C35E0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C35E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C35E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C35EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C35F0
  c->lr=c->r[0]; // 801C35F4
  c->r[1]=c->r[1]+0x00000020u; // 801C35F8
  return; // 801C35FC
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3600(Ctx* __restrict c) {
  trace_call(0x801C3600u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3600
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3604
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3608
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C360C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3610
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3614
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3618
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 801C361C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C3620
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 801C3624
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C3628
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 801C362C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C3630
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C3634
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C3638
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 801C363C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3640
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[9]); // 801C3644
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 801C3648
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[9]); // 801C364C
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[9]); // 801C3650
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C3654
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 801C3658
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 801C365C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 801C3660
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 801C3664
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C3668
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C366C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3670
  return; // 801C3674
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3678(Ctx* __restrict c) {
  trace_call(0x801C3678u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3678
  c->r[0]=c->lr; // 801C367C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3680
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3684
  c->r[4]=c->r[1]+0x00000008u; // 801C3688
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C368C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C3690
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3694
  c->r[31]=c->r[3]|c->r[3]; // 801C3698
  c->r[3]=c->r[1]+0x0000000Cu; // 801C369C
  c->lr=0x801C36A4u; f_801DB5C4(c); // 801C36A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C36A4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C36A8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C36AC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C36B0
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[2]); // 801C36B4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[2]); // 801C36B8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C36BC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801C36C0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C36C4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C36C8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C36CC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[1]); // 801C36D0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C36D4
  c->f[6]=c->ps1[6]=S(c->f[3]+c->f[0]); // 801C36D8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C36DC
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C36E0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[4]);} // 801C36E4
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C36E8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[6]);} // 801C36EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C36F0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C36F4
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 801C36F8
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[2]); // 801C36FC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[9]); // 801C3700
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 801C3704
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[6]); // 801C3708
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801C370C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[6]);} // 801C3710
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 801C3714
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C3718
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C371C
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 801C3720
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 801C3724
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[7]); // 801C3728
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 801C372C
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[4]); // 801C3730
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C3734
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 801C3738
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 801C373C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C3740
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3744
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[3]); // 801C3748
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 801C374C
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 801C3750
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801C3754
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C3758
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 801C375C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801C3760
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801C3764
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C3768
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C376C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3770
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3774
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3778
  c->lr=c->r[0]; // 801C377C
  c->r[1]=c->r[1]+0x00000020u; // 801C3780
  return; // 801C3784
}

// ProductTexSrtMtx_T__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3788(Ctx* __restrict c) {
  trace_call(0x801C3788u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3788
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C378C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3790
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3794
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801C3798
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C379C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C37A0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C37A4
  return; // 801C37A8
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C37AC(Ctx* __restrict c) {
  trace_call(0x801C37ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C37AC
  c->r[0]=c->lr; // 801C37B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C37B4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801C37B8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801C37BC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801C37C0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801C37C4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C37C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C37CC
  c->r[31]=c->r[4]|c->r[4]; // 801C37D0
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C37D4
  c->r[4]=c->r[1]+0x00000008u; // 801C37D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C37DC
  c->r[30]=c->r[3]|c->r[3]; // 801C37E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C37E4
  c->r[3]=c->r[1]+0x0000000Cu; // 801C37E8
  c->lr=0x801C37F0u; f_801DB5C4(c); // 801C37EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C37F0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C37F4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C37F8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 801C37FC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3800
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 801C3804
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C3808
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 801C380C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C3810
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 801C3814
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 801C3818
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[7]); // 801C381C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 801C3820
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[6]); // 801C3824
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C3828
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 801C382C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C3830
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[4]); // 801C3834
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3838
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[6]); // 801C383C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C3840
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 801C3844
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C3848
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 801C384C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[30]); // 801C3850
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 801C3854
  c->f[12]=c->ps1[12]=S(c->f[1]*c->f[13]); // 801C3858
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[30]); // 801C385C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[4]);} // 801C3860
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[11]); // 801C3864
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[12]); // 801C3868
  c->f[12]=c->ps1[12]=S(c->f[1]+c->f[6]); // 801C386C
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[13]); // 801C3870
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[10]); // 801C3874
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 801C3878
  c->f[13]=c->ps1[13]=S(c->f[7]+c->f[6]); // 801C387C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[12]);} // 801C3880
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[10]); // 801C3884
  c->f[10]=c->ps1[10]=S(c->f[5]-c->f[4]); // 801C3888
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[11]); // 801C388C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 801C3890
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[9]); // 801C3894
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[8]); // 801C3898
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[10]);} // 801C389C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 801C38A0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[9]); // 801C38A4
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 801C38A8
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 801C38AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C38B0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 801C38B4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 801C38B8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801C38BC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801C38C0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801C38C4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801C38C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801C38CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C38D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C38D4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C38D8
  c->lr=c->r[0]; // 801C38DC
  c->r[1]=c->r[1]+0x00000040u; // 801C38E0
  return; // 801C38E4
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C38E8(Ctx* __restrict c) {
  trace_call(0x801C38E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C38E8
  c->r[0]=c->lr; // 801C38EC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C38F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C38F4
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C38F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C38FC
  c->r[31]=c->r[4]|c->r[4]; // 801C3900
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C3904
  c->r[4]=c->r[1]+0x00000008u; // 801C3908
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C390C
  c->r[30]=c->r[3]|c->r[3]; // 801C3910
  c->r[3]=c->r[1]+0x0000000Cu; // 801C3914
  c->lr=0x801C391Cu; f_801DB5C4(c); // 801C3918
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C391C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3920
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3924
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 801C3928
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C392C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801C3930
  {uint32_t ea=c->r[30]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C3934
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801C3938
  {uint32_t ea=c->r[30]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C393C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 801C3940
  {uint32_t ea=c->r[30]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C3944
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 801C3948
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C394C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C3950
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 801C3954
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3958
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 801C395C
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 801C3960
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3964
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 801C3968
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C396C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C3970
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 801C3974
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3978
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 801C397C
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3980
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[7]); // 801C3984
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[10]); // 801C3988
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[7]); // 801C398C
  c->f[4]=c->ps1[4]=S(c->f[9]-c->f[4]); // 801C3990
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C3994
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[4]);} // 801C3998
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 801C399C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C39A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C39A4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[6]); // 801C39A8
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[8]); // 801C39AC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[8]); // 801C39B0
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[6]); // 801C39B4
  c->f[4]=c->ps1[4]=S(c->f[7]-c->f[4]); // 801C39B8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C39BC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 801C39C0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 801C39C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C39C8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C39CC
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[3]); // 801C39D0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 801C39D4
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 801C39D8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801C39DC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C39E0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 801C39E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801C39E8
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801C39EC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C39F0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C39F4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C39F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C39FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C3A00
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3A04
  c->lr=c->r[0]; // 801C3A08
  c->r[1]=c->r[1]+0x00000020u; // 801C3A0C
  return; // 801C3A10
}

// ProductTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3A14(Ctx* __restrict c) {
  trace_call(0x801C3A14u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3A14
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3A18
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3A1C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801C3A20
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C3A24
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3A28
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3A2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C3A30
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3A34
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[4]); // 801C3A38
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C3A3C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 801C3A40
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3A44
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 801C3A48
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3A4C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C3A50
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C3A54
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C3A58
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 801C3A5C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3A60
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 801C3A64
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 801C3A68
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 801C3A6C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 801C3A70
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 801C3A74
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 801C3A78
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C3A7C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 801C3A80
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 801C3A84
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 801C3A88
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C3A8C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C3A90
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3A94
  return; // 801C3A98
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3A9C(Ctx* __restrict c) {
  trace_call(0x801C3A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3A9C
  c->r[0]=c->lr; // 801C3AA0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C3AA4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801C3AA8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801C3AAC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801C3AB0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801C3AB4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 801C3AB8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 801C3ABC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3AC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3AC4
  c->r[31]=c->r[4]|c->r[4]; // 801C3AC8
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3ACC
  c->r[4]=c->r[1]+0x00000008u; // 801C3AD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3AD4
  c->r[30]=c->r[3]|c->r[3]; // 801C3AD8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C3ADC
  c->r[3]=c->r[1]+0x0000000Cu; // 801C3AE0
  c->lr=0x801C3AE8u; f_801DB5C4(c); // 801C3AE4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3AE8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3AEC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C3AF0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C3AF4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 801C3AF8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[6]); // 801C3AFC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3B00
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3B04
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[5]); // 801C3B08
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3B0C
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[1]); // 801C3B10
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[6]); // 801C3B14
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3B18
  {uint32_t ea=c->r[30]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 801C3B1C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 801C3B20
  {uint32_t ea=c->r[30]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C3B24
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[7]); // 801C3B28
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[7]); // 801C3B2C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[12]=c->ps1[12]=RF32(ea);} // 801C3B30
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[4]); // 801C3B34
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[4]); // 801C3B38
  {uint32_t ea=c->r[30]+0x00000014u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C3B3C
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 801C3B40
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 801C3B44
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3B48
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[7]); // 801C3B4C
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[31]); // 801C3B50
  {uint32_t ea=c->r[30]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C3B54
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 801C3B58
  c->f[8]=c->ps1[8]=S(c->f[1]+c->f[6]); // 801C3B5C
  {uint32_t ea=c->r[30]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C3B60
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[13]); // 801C3B64
  c->f[13]=c->ps1[13]=S(c->f[4]+c->f[5]); // 801C3B68
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[29]); // 801C3B6C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[8]);} // 801C3B70
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[31]); // 801C3B74
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[12]); // 801C3B78
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[30]);} // 801C3B7C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[11]); // 801C3B80
  c->f[29]=c->ps1[29]=S(c->f[7]+c->f[6]); // 801C3B84
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[13]);} // 801C3B88
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[12]); // 801C3B8C
  c->f[8]=c->ps1[8]=S(c->f[5]-c->f[4]); // 801C3B90
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[11]); // 801C3B94
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[29]);} // 801C3B98
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[10]); // 801C3B9C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[9]); // 801C3BA0
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[8]);} // 801C3BA4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[9]); // 801C3BA8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[10]); // 801C3BAC
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 801C3BB0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 801C3BB4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C3BB8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 801C3BBC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 801C3BC0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801C3BC4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801C3BC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801C3BCC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801C3BD0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801C3BD4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 801C3BD8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 801C3BDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3BE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C3BE4
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C3BE8
  c->lr=c->r[0]; // 801C3BEC
  c->r[1]=c->r[1]+0x00000050u; // 801C3BF0
  return; // 801C3BF4
}

// CalcTexMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_801C3BF8(Ctx* __restrict c) {
  trace_call(0x801C3BF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3BF8
  c->r[0]=c->lr; // 801C3BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3C00
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 801C3C04
  cmpu(c,0,c->r[0],0x00000007u); // 801C3C08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3C0C
  c->r[31]=c->r[3]|c->r[3]; // 801C3C10
  if (!crb(c,2)) { goto L_801C3C20; } // 801C3C14
  c->r[3]=0u+0x00000000u; // 801C3C18
  goto L_801C3C80; // 801C3C1C
L_801C3C20:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C3C20
  if (crb(c,2)) { goto L_801C3C48; } // 801C3C24
  c->r[6]=0u+0x80270000u; // 801C3C28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C3C2C
  c->r[6]=c->r[6]+0x00000D88u; // 801C3C30
  c->r[4]=c->r[5]|c->r[5]; // 801C3C34
  c->r[12]=R32(c->r[6]+c->r[0]); // 801C3C38
  c->ctr=c->r[12]; // 801C3C3C
  if (true) { c->lr=0x801C3C44u; dispatch(c,c->ctr); } // 801C3C40
  goto L_801C3C64; // 801C3C44
L_801C3C48:;
  c->r[6]=0u+0x80270000u; // 801C3C48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C3C4C
  c->r[6]=c->r[6]+0x00000DA4u; // 801C3C50
  c->r[4]=c->r[5]|c->r[5]; // 801C3C54
  c->r[12]=R32(c->r[6]+c->r[0]); // 801C3C58
  c->ctr=c->r[12]; // 801C3C5C
  if (true) { c->lr=0x801C3C64u; dispatch(c,c->ctr); } // 801C3C60
L_801C3C64:;
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3C64
  c->r[3]=0u+0x00000001u; // 801C3C68
  {uint32_t ea=c->r[2]+0xFFFF9C9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3C6C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 801C3C70
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 801C3C74
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 801C3C78
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C3C7C
L_801C3C80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3C80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3C84
  c->lr=c->r[0]; // 801C3C88
  c->r[1]=c->r[1]+0x00000010u; // 801C3C8C
  return; // 801C3C90
}

// CalcWorldMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
void f_801C3C94(Ctx* __restrict c) {
  trace_call(0x801C3C94u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3C94
  c->r[0]=c->lr; // 801C3C98
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C3C9C
  c->r[11]=c->r[1]+0x00000040u; // 801C3CA0
  c->lr=0x801C3CA8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3CA4
  c->r[31]=R32(c->r[8]+0x00000000u); // 801C3CA8
  c->r[25]=c->r[3]|c->r[3]; // 801C3CAC
  c->r[26]=c->r[4]|c->r[4]; // 801C3CB0
  c->r[27]=c->r[5]|c->r[5]; // 801C3CB4
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801C3CB8
  c->r[28]=c->r[6]|c->r[6]; // 801C3CBC
  c->r[29]=c->r[7]|c->r[7]; // 801C3CC0
  c->r[30]=c->r[8]|c->r[8]; // 801C3CC4
  if (!crb(c,2)) { goto L_801C3CD4; } // 801C3CC8
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 801C3CCC
  if (crb(c,2)) { goto L_801C3CE4; } // 801C3CD0
L_801C3CD4:;
  c->r[3]=c->r[27]|c->r[27]; // 801C3CD4
  c->r[4]=c->r[25]|c->r[25]; // 801C3CD8
  c->lr=0x801C3CE0u; f_800EC0C0(c); // 801C3CDC
  goto L_801C3DC4; // 801C3CE0
L_801C3CE4:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 801C3CE4
  if (crb(c,2)) { goto L_801C3D5C; } // 801C3CE8
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 801C3CEC
  if (crb(c,2)) { goto L_801C3D1C; } // 801C3CF0
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3CF4
  c->r[4]=c->r[27]|c->r[27]; // 801C3CF8
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3CFC
  c->r[5]=c->r[1]+0x00000014u; // 801C3D00
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D04
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801C3D08
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801C3D0C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C3D10
  c->lr=0x801C3D18u; f_801DB914(c); // 801C3D14
  goto L_801C3DC4; // 801C3D18
L_801C3D1C:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3D1C
  c->r[4]=c->r[27]|c->r[27]; // 801C3D20
  {uint32_t ea=c->r[8]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D24
  c->r[5]=c->r[1]+0x00000008u; // 801C3D28
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3D2C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 801C3D30
  {uint32_t ea=c->r[8]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3D34
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3D38
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D3C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801C3D40
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 801C3D44
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C3D48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C3D4C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C3D50
  c->lr=0x801C3D58u; f_801DB914(c); // 801C3D54
  goto L_801C3DC4; // 801C3D58
L_801C3D5C:;
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 801C3D5C
  if (crb(c,2)) { goto L_801C3D78; } // 801C3D60
  c->r[3]=c->r[27]|c->r[27]; // 801C3D64
  c->r[5]=c->r[25]|c->r[25]; // 801C3D68
  c->r[4]=c->r[8]+0x0000001Cu; // 801C3D6C
  c->lr=0x801C3D74u; f_800EC0F4(c); // 801C3D70
  goto L_801C3DC4; // 801C3D74
L_801C3D78:;
  c->r[4]=c->r[25]|c->r[25]; // 801C3D78
  c->r[3]=c->r[8]+0x0000001Cu; // 801C3D7C
  c->lr=0x801C3D84u; f_800EC0C0(c); // 801C3D80
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3D84
  c->r[3]=c->r[27]|c->r[27]; // 801C3D88
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D8C
  c->r[4]=c->r[25]|c->r[25]; // 801C3D90
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3D94
  c->r[5]=c->r[25]|c->r[25]; // 801C3D98
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 801C3D9C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3DA0
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3DA4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3DA8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801C3DAC
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[4]);} // 801C3DB0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C3DB4
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C3DB8
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C3DBC
  c->lr=0x801C3DC4u; f_800EC0F4(c); // 801C3DC0
L_801C3DC4:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 801C3DC4
  if (crb(c,2)) { goto L_801C3DEC; } // 801C3DC8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3DCC
  c->r[4]=c->r[29]|0x40000000u; // 801C3DD0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3DD4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3DD8
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[2]);} // 801C3DDC
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 801C3DE0
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 801C3DE4
  goto L_801C3E20; // 801C3DE8
L_801C3DEC:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3DEC
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 801C3DF0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3DF4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3DF8
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 801C3DFC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3E00
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3E04
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3E08
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801C3E0C
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[4]);} // 801C3E10
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C3E14
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[2]);} // 801C3E18
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 801C3E1C
L_801C3E20:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 801C3E20
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 801C3E24
  if (crb(c,2)) { goto L_801C3E30; } // 801C3E28
  c->r[3]=c->r[4]|0x10000000u; // 801C3E2C
L_801C3E30:;
  c->r[11]=c->r[1]+0x00000040u; // 801C3E30
  c->lr=0x801C3E38u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3E34
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C3E38
  c->lr=c->r[0]; // 801C3E3C
  c->r[1]=c->r[1]+0x00000040u; // 801C3E40
  return; // 801C3E44
}

// MakeTexSrtMtx_S__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3E48(Ctx* __restrict c) {
  trace_call(0x801C3E48u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3E48
  {uint32_t ea=c->r[2]+0xFFFF9CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3E4C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3E50
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 801C3E54
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3E58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C3E5C
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3E60
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[5]);} // 801C3E64
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801C3E68
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C3E6C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[4]);} // 801C3E70
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 801C3E74
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C3E78
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 801C3E7C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801C3E80
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 801C3E84
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3E88
  return; // 801C3E8C
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3E90(Ctx* __restrict c) {
  trace_call(0x801C3E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3E90
  c->r[0]=c->lr; // 801C3E94
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3E98
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3E9C
  c->r[4]=c->r[1]+0x00000008u; // 801C3EA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3EA4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C3EA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3EAC
  c->r[31]=c->r[3]|c->r[3]; // 801C3EB0
  c->r[3]=c->r[1]+0x0000000Cu; // 801C3EB4
  c->lr=0x801C3EBCu; f_801DB5C4(c); // 801C3EB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3EBC
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3EC0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801C3EC4
  {uint32_t ea=c->r[2]+0xFFFF9CB0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3EC8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3ECC
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3ED0
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801C3ED4
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 801C3ED8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3EDC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3EE0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C3EE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801C3EE8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C3EEC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C3EF0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3EF4
  c->f[0]=-c->f[0]; // 801C3EF8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 801C3EFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3F00
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 801C3F04
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[4]);} // 801C3F08
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3F0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3F10
  c->f[1]=-c->f[1]; // 801C3F14
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C3F18
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801C3F1C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C3F20
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3F24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3F28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3F2C
  c->lr=c->r[0]; // 801C3F30
  c->r[1]=c->r[1]+0x00000020u; // 801C3F34
  return; // 801C3F38
}

// MakeTexSrtMtx_T__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3F3C(Ctx* __restrict c) {
  trace_call(0x801C3F3Cu);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3F3C
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3F40
  c->f[1]=-c->f[0]; // 801C3F44
  {uint32_t ea=c->r[2]+0xFFFF9CB0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3F48
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3F4C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 801C3F50
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801C3F54
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801C3F58
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C3F5C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 801C3F60
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C3F64
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C3F68
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C3F6C
  return; // 801C3F70
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C3F74(Ctx* __restrict c) {
  trace_call(0x801C3F74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3F74
  c->r[0]=c->lr; // 801C3F78
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3F7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3F80
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3F84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3F88
  c->r[31]=c->r[4]|c->r[4]; // 801C3F8C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C3F90
  c->r[4]=c->r[1]+0x00000008u; // 801C3F94
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3F98
  c->r[30]=c->r[3]|c->r[3]; // 801C3F9C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C3FA0
  c->lr=0x801C3FA8u; f_801DB5C4(c); // 801C3FA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3FA8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3FAC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3FB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3FB4
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[1]); // 801C3FB8
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[1]); // 801C3FBC
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3FC0
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[2]); // 801C3FC4
  {uint32_t ea=c->r[2]+0xFFFF9CB0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3FC8
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[2]); // 801C3FCC
  c->f[1]=-c->f[9]; // 801C3FD0
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[7]); // 801C3FD4
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3FD8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[6]);} // 801C3FDC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[8]); // 801C3FE0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 801C3FE4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 801C3FE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801C3FEC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[5]);} // 801C3FF0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801C3FF4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 801C3FF8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C3FFC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C4000
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[8]);} // 801C4004
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 801C4008
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C400C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C4010
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4014
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4018
  c->lr=c->r[0]; // 801C401C
  c->r[1]=c->r[1]+0x00000020u; // 801C4020
  return; // 801C4024
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C4028(Ctx* __restrict c) {
  trace_call(0x801C4028u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4028
  c->r[0]=c->lr; // 801C402C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4030
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4034
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4038
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C403C
  c->r[31]=c->r[4]|c->r[4]; // 801C4040
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C4044
  c->r[4]=c->r[1]+0x00000008u; // 801C4048
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C404C
  c->r[30]=c->r[3]|c->r[3]; // 801C4050
  c->r[3]=c->r[1]+0x0000000Cu; // 801C4054
  c->lr=0x801C405Cu; f_801DB5C4(c); // 801C4058
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C405C
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C4060
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C4064
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C4068
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C406C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4070
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 801C4074
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4078
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[1]); // 801C407C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[5]);} // 801C4080
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 801C4084
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4088
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C408C
  c->f[1]=-c->f[1]; // 801C4090
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801C4094
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 801C4098
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C409C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801C40A0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C40A4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C40A8
  c->f[0]=-c->f[0]; // 801C40AC
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 801C40B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C40B4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 801C40B8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 801C40BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C40C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C40C4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 801C40C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801C40CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C40D0
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801C40D4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C40D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C40DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C40E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C40E4
  c->lr=c->r[0]; // 801C40E8
  c->r[1]=c->r[1]+0x00000020u; // 801C40EC
  return; // 801C40F0
}

// MakeTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C40F4(Ctx* __restrict c) {
  trace_call(0x801C40F4u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C40F4
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C40F8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C40FC
  c->f[4]=-c->f[6]; // 801C4100
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4104
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 801C4108
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C410C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801C4110
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C4114
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 801C4118
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801C411C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4120
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 801C4124
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801C4128
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 801C412C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 801C4130
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 801C4134
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C4138
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801C413C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 801C4140
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C4144
  return; // 801C4148
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C414C(Ctx* __restrict c) {
  trace_call(0x801C414Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C414C
  c->r[0]=c->lr; // 801C4150
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4154
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4158
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C415C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4160
  c->r[31]=c->r[4]|c->r[4]; // 801C4164
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C4168
  c->r[4]=c->r[1]+0x00000008u; // 801C416C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4170
  c->r[30]=c->r[3]|c->r[3]; // 801C4174
  c->r[3]=c->r[1]+0x0000000Cu; // 801C4178
  c->lr=0x801C4180u; f_801DB5C4(c); // 801C417C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4180
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4184
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4188
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C418C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 801C4190
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[3]); // 801C4194
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C4198
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[0]); // 801C419C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C41A0
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[3]); // 801C41A4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C41A8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[1]); // 801C41AC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[5]);} // 801C41B0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 801C41B4
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C41B8
  c->f[5]=-c->f[5]; // 801C41BC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 801C41C0
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[3]); // 801C41C4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 801C41C8
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[2]); // 801C41CC
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 801C41D0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[8]);} // 801C41D4
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801C41D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C41DC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 801C41E0
  c->f[1]=-c->f[9]; // 801C41E4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801C41E8
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801C41EC
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 801C41F0
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801C41F4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C41F8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C41FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C4200
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4204
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4208
  c->lr=c->r[0]; // 801C420C
  c->r[1]=c->r[1]+0x00000020u; // 801C4210
  return; // 801C4214
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C4218(Ctx* __restrict c) {
  trace_call(0x801C4218u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4218
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[6]=c->ps1[6]=RF32(ea);} // 801C421C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4220
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 801C4224
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C4228
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C422C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 801C4230
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C4234
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[1]); // 801C4238
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 801C423C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C4240
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 801C4244
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C4248
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C424C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4250
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4254
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 801C4258
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 801C425C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 801C4260
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 801C4264
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 801C4268
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 801C426C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 801C4270
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801C4274
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 801C4278
  c->f[0]=c->ps1[0]=S(c->f[6]+c->f[0]); // 801C427C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[5]);} // 801C4280
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 801C4284
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 801C4288
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801C428C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C4290
  return; // 801C4294
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C4298(Ctx* __restrict c) {
  trace_call(0x801C4298u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4298
  c->r[0]=c->lr; // 801C429C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C42A0
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C42A4
  c->r[4]=c->r[1]+0x00000008u; // 801C42A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C42AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C42B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C42B4
  c->r[31]=c->r[3]|c->r[3]; // 801C42B8
  c->r[3]=c->r[1]+0x0000000Cu; // 801C42BC
  c->lr=0x801C42C4u; f_801DB5C4(c); // 801C42C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C42C4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C42C8
  c->f[1]=-c->f[2]; // 801C42CC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C42D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C42D4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801C42D8
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C42DC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C42E0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 801C42E4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C42E8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801C42EC
  {uint32_t ea=c->r[31]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C42F0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C42F4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 801C42F8
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 801C42FC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4300
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4304
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 801C4308
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[7]); // 801C430C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C4310
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 801C4314
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 801C4318
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C431C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C4320
  c->f[0]=-c->f[1]; // 801C4324
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[5]); // 801C4328
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 801C432C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[10]); // 801C4330
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[5]); // 801C4334
  c->f[2]=c->ps1[2]=S(c->f[9]+c->f[2]); // 801C4338
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C433C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[2]);} // 801C4340
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 801C4344
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4348
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C434C
  c->f[0]=-c->f[1]; // 801C4350
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 801C4354
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[8]); // 801C4358
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[8]); // 801C435C
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[4]); // 801C4360
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 801C4364
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C4368
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 801C436C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801C4370
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4374
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C4378
  c->f[0]=-c->f[1]; // 801C437C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 801C4380
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 801C4384
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 801C4388
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 801C438C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801C4390
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C4394
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[2]); // 801C4398
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 801C439C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C43A0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C43A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C43A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C43AC
  c->lr=c->r[0]; // 801C43B0
  c->r[1]=c->r[1]+0x00000020u; // 801C43B4
  return; // 801C43B8
}

// ProductTexSrtMtx_T__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C43BC(Ctx* __restrict c) {
  trace_call(0x801C43BCu);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C43BC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C43C0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C43C4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C43C8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801C43CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C43D0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C43D4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C43D8
  return; // 801C43DC
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C43E0(Ctx* __restrict c) {
  trace_call(0x801C43E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C43E0
  c->r[0]=c->lr; // 801C43E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C43E8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801C43EC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801C43F0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801C43F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801C43F8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C43FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4400
  c->r[31]=c->r[4]|c->r[4]; // 801C4404
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4408
  c->r[4]=c->r[1]+0x00000008u; // 801C440C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4410
  c->r[30]=c->r[3]|c->r[3]; // 801C4414
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C4418
  c->r[3]=c->r[1]+0x0000000Cu; // 801C441C
  c->lr=0x801C4424u; f_801DB5C4(c); // 801C4420
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4424
  {uint32_t ea=c->r[31]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C4428
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C442C
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[0]); // 801C4430
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C4434
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 801C4438
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C443C
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C4440
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[6]); // 801C4444
  c->f[12]=-c->f[8]; // 801C4448
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C444C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[7]); // 801C4450
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 801C4454
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[7]); // 801C4458
  {uint32_t ea=c->r[30]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 801C445C
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 801C4460
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C4464
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 801C4468
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C446C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 801C4470
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C4474
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[4]); // 801C4478
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C447C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 801C4480
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 801C4484
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[30]); // 801C4488
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[13]); // 801C448C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801C4490
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[5]); // 801C4494
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[6]); // 801C4498
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[3]); // 801C449C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[4]);} // 801C44A0
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[30]); // 801C44A4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 801C44A8
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[11]); // 801C44AC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[7]);} // 801C44B0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 801C44B4
  c->f[13]=c->ps1[13]=S(c->f[6]+c->f[5]); // 801C44B8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 801C44BC
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[11]); // 801C44C0
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 801C44C4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[10]); // 801C44C8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 801C44CC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[9]); // 801C44D0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[8]); // 801C44D4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 801C44D8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 801C44DC
  c->f[1]=c->ps1[1]=S(c->f[12]*c->f[9]); // 801C44E0
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 801C44E4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 801C44E8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C44EC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[5]);} // 801C44F0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 801C44F4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801C44F8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801C44FC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801C4500
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801C4504
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801C4508
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C450C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4510
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C4514
  c->lr=c->r[0]; // 801C4518
  c->r[1]=c->r[1]+0x00000040u; // 801C451C
  return; // 801C4520
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C4524(Ctx* __restrict c) {
  trace_call(0x801C4524u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4524
  c->r[0]=c->lr; // 801C4528
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C452C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4530
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4534
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4538
  c->r[31]=c->r[4]|c->r[4]; // 801C453C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C4540
  c->r[4]=c->r[1]+0x00000008u; // 801C4544
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4548
  c->r[30]=c->r[3]|c->r[3]; // 801C454C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C4550
  c->lr=0x801C4558u; f_801DB5C4(c); // 801C4554
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4558
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C455C
  c->f[1]=-c->f[2]; // 801C4560
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C4564
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4568
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801C456C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C4570
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C4574
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 801C4578
  {uint32_t ea=c->r[30]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C457C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 801C4580
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C4584
  {uint32_t ea=c->r[30]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C4588
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 801C458C
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 801C4590
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4594
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4598
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 801C459C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801C45A0
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C45A4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[5]);} // 801C45A8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C45AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C45B0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C45B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C45B8
  c->f[1]=-c->f[3]; // 801C45BC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C45C0
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[6]); // 801C45C4
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 801C45C8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 801C45CC
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[6]); // 801C45D0
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[5]); // 801C45D4
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[7]); // 801C45D8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801C45DC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[5]);} // 801C45E0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 801C45E4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 801C45E8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C45EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C45F0
  c->f[0]=-c->f[1]; // 801C45F4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 801C45F8
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[8]); // 801C45FC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[8]); // 801C4600
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[4]); // 801C4604
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 801C4608
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C460C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 801C4610
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801C4614
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4618
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C461C
  c->f[0]=-c->f[1]; // 801C4620
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 801C4624
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 801C4628
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 801C462C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 801C4630
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 801C4634
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C4638
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[2]); // 801C463C
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 801C4640
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C4644
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C4648
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C464C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4650
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4654
  c->lr=c->r[0]; // 801C4658
  c->r[1]=c->r[1]+0x00000020u; // 801C465C
  return; // 801C4660
}

// ProductTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C4664(Ctx* __restrict c) {
  trace_call(0x801C4664u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4664
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4668
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C466C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4670
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C4674
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C4678
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 801C467C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C4680
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[7]); // 801C4684
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4688
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C468C
  c->f[6]=c->ps1[6]=S(c->f[4]-c->f[7]); // 801C4690
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C4694
  {uint32_t ea=c->r[4]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C4698
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 801C469C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C46A0
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[6]); // 801C46A4
  c->f[10]=c->ps1[10]=S(c->f[8]*c->f[11]); // 801C46A8
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 801C46AC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C46B0
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[2]); // 801C46B4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C46B8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C46BC
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[11]); // 801C46C0
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[11]); // 801C46C4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[10]);} // 801C46C8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 801C46CC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 801C46D0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 801C46D4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C46D8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[9]);} // 801C46DC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 801C46E0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 801C46E4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C46E8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C46EC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C46F0
  return; // 801C46F4
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_801C46F8(Ctx* __restrict c) {
  trace_call(0x801C46F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C46F8
  c->r[0]=c->lr; // 801C46FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C4700
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801C4704
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801C4708
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801C470C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801C4710
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 801C4714
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 801C4718
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C471C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4720
  c->r[31]=c->r[4]|c->r[4]; // 801C4724
  {uint32_t ea=c->r[2]+0xFFFF9CB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4728
  c->r[4]=c->r[1]+0x00000008u; // 801C472C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4730
  c->r[30]=c->r[3]|c->r[3]; // 801C4734
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C4738
  c->r[3]=c->r[1]+0x0000000Cu; // 801C473C
  c->lr=0x801C4744u; f_801DB5C4(c); // 801C4740
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4744
  {uint32_t ea=c->r[31]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C4748
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C474C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4750
  c->f[9]=c->ps1[9]=S(c->f[5]*c->f[2]); // 801C4754
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C4758
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 801C475C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C4760
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[2]); // 801C4764
  {uint32_t ea=c->r[2]+0xFFFF9CACu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C4768
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[6]); // 801C476C
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4770
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4774
  c->f[12]=-c->f[9]; // 801C4778
  {uint32_t ea=c->r[30]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 801C477C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[7]); // 801C4780
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 801C4784
  {uint32_t ea=c->r[30]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C4788
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 801C478C
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 801C4790
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C4794
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[7]); // 801C4798
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[4]); // 801C479C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C47A0
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 801C47A4
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 801C47A8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C47AC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 801C47B0
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[31]); // 801C47B4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C47B8
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 801C47BC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801C47C0
  c->f[4]=c->ps1[4]=S(c->f[30]+c->f[13]); // 801C47C4
  c->f[13]=c->ps1[13]=S(c->f[7]+c->f[5]); // 801C47C8
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[3]); // 801C47CC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[4]);} // 801C47D0
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[29]); // 801C47D4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[31]); // 801C47D8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[13]);} // 801C47DC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[11]); // 801C47E0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 801C47E4
  c->f[13]=c->ps1[13]=S(c->f[6]+c->f[5]); // 801C47E8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[7]);} // 801C47EC
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[11]); // 801C47F0
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 801C47F4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[10]); // 801C47F8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 801C47FC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[9]); // 801C4800
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[8]); // 801C4804
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 801C4808
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 801C480C
  c->f[1]=c->ps1[1]=S(c->f[12]*c->f[9]); // 801C4810
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 801C4814
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 801C4818
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C481C
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[5]);} // 801C4820
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 801C4824
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801C4828
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801C482C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801C4830
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801C4834
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801C4838
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 801C483C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 801C4840
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C4844
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4848
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C484C
  c->lr=c->r[0]; // 801C4850
  c->r[1]=c->r[1]+0x00000050u; // 801C4854
  return; // 801C4858
}

// CalcTexMtx_3dsmax__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_801C485C(Ctx* __restrict c) {
  trace_call(0x801C485Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C485C
  c->r[0]=c->lr; // 801C4860
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4864
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 801C4868
  cmpu(c,0,c->r[0],0x00000007u); // 801C486C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4870
  c->r[31]=c->r[3]|c->r[3]; // 801C4874
  if (!crb(c,2)) { goto L_801C4884; } // 801C4878
  c->r[3]=0u+0x00000000u; // 801C487C
  goto L_801C48E4; // 801C4880
L_801C4884:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C4884
  if (crb(c,2)) { goto L_801C48AC; } // 801C4888
  c->r[6]=0u+0x80270000u; // 801C488C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C4890
  c->r[6]=c->r[6]+0x00000DC0u; // 801C4894
  c->r[4]=c->r[5]|c->r[5]; // 801C4898
  c->r[12]=R32(c->r[6]+c->r[0]); // 801C489C
  c->ctr=c->r[12]; // 801C48A0
  if (true) { c->lr=0x801C48A8u; dispatch(c,c->ctr); } // 801C48A4
  goto L_801C48C8; // 801C48A8
L_801C48AC:;
  c->r[6]=0u+0x80270000u; // 801C48AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C48B0
  c->r[6]=c->r[6]+0x00000DDCu; // 801C48B4
  c->r[4]=c->r[5]|c->r[5]; // 801C48B8
  c->r[12]=R32(c->r[6]+c->r[0]); // 801C48BC
  c->ctr=c->r[12]; // 801C48C0
  if (true) { c->lr=0x801C48C8u; dispatch(c,c->ctr); } // 801C48C4
L_801C48C8:;
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C48C8
  c->r[3]=0u+0x00000001u; // 801C48CC
  {uint32_t ea=c->r[2]+0xFFFF9CB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C48D0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 801C48D4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 801C48D8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 801C48DC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C48E0
L_801C48E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C48E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C48E8
  c->lr=c->r[0]; // 801C48EC
  c->r[1]=c->r[1]+0x00000010u; // 801C48F0
  return; // 801C48F4
}

// CalcWorldMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34PUl
void f_801C48F8(Ctx* __restrict c) {
  trace_call(0x801C48F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C48F8
  c->r[0]=c->lr; // 801C48FC
  cmps(c,0,(int32_t)c->r[5],0); // 801C4900
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4908
  c->r[31]=c->r[3]|c->r[3]; // 801C490C
  if (crb(c,2)) { goto L_801C492C; } // 801C4910
  c->r[6]=R32(c->r[5]+0x00000000u); // 801C4914
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 801C4918
  if (crb(c,2)) { goto L_801C492C; } // 801C491C
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 801C4920
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4924
  goto L_801C498C; // 801C4928
L_801C492C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C492C
  if (crb(c,2)) { goto L_801C4964; } // 801C4930
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4934
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801C4938
  if (crb(c,2)) { goto L_801C4950; } // 801C493C
  c->r[3]=c->r[4]|c->r[4]; // 801C4940
  c->r[4]=c->r[31]+0x0000003Cu; // 801C4944
  c->lr=0x801C494Cu; f_800EC0C0(c); // 801C4948
  goto L_801C4970; // 801C494C
L_801C4950:;
  c->r[3]=c->r[4]|c->r[4]; // 801C4950
  c->r[4]=c->r[31]+0x0000000Cu; // 801C4954
  c->r[5]=c->r[31]+0x0000003Cu; // 801C4958
  c->lr=0x801C4960u; f_800EC0F4(c); // 801C495C
  goto L_801C4970; // 801C4960
L_801C4964:;
  c->r[3]=c->r[3]+0x0000000Cu; // 801C4964
  c->r[4]=c->r[31]+0x0000003Cu; // 801C4968
  c->lr=0x801C4970u; f_800EC0C0(c); // 801C496C
L_801C4970:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 801C4970
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 801C4974
  if (crb(c,2)) { goto L_801C498C; } // 801C4978
  c->r[3]=c->r[31]+0x000000B4u; // 801C497C
  c->r[4]=c->r[31]+0x0000009Cu; // 801C4980
  c->r[5]=c->r[31]+0x0000003Cu; // 801C4984
  c->lr=0x801C498Cu; f_801DBF00(c); // 801C4988
L_801C498C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C498C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4990
  c->lr=c->r[0]; // 801C4994
  c->r[1]=c->r[1]+0x00000010u; // 801C4998
  return; // 801C499C
}

// CalcViewMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34
void f_801C49A0(Ctx* __restrict c) {
  trace_call(0x801C49A0u);
  c->r[5]=c->r[3]|c->r[3]; // 801C49A0
  c->r[3]=c->r[4]|c->r[4]; // 801C49A4
  c->r[4]=c->r[5]+0x0000003Cu; // 801C49A8
  c->r[5]=c->r[5]+0x0000006Cu; // 801C49AC
  f_800EC0F4(c); return; // 801C49B0
}

// __ct__Q34nw4r3g3d6ScnObjFP12MEMAllocator
void f_801C49B4(Ctx* __restrict c) {
  trace_call(0x801C49B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C49B4
  c->r[0]=c->lr; // 801C49B8
  c->r[6]=0u+0x802A0000u; // 801C49BC
  c->r[7]=0u+0x00000000u; // 801C49C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C49C4
  c->r[5]=0u+0x00000080u; // 801C49C8
  c->r[6]=c->r[6]+0x000014D0u; // 801C49CC
  c->r[0]=c->r[7]|0x80000000u; // 801C49D0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C49D4
  c->r[31]=c->r[3]|c->r[3]; // 801C49D8
  W32(c->r[3]+0x00000004u,c->r[7]); // 801C49DC
  W32(c->r[3]+0x00000008u,c->r[4]); // 801C49E0
  W32(c->r[3]+0x00000000u,c->r[6]); // 801C49E4
  W8(c->r[3]+0x000000D0u,c->r[5]); // 801C49E8
  W8(c->r[3]+0x000000D1u,c->r[5]); // 801C49EC
  W8(c->r[3]+0x000000D2u,c->r[7]); // 801C49F0
  W8(c->r[3]+0x000000D3u,c->r[7]); // 801C49F4
  W32(c->r[3]+0x000000D4u,c->r[7]); // 801C49F8
  W8(c->r[3]+0x000000D8u,c->r[7]); // 801C49FC
  W8(c->r[3]+0x000000D9u,c->r[7]); // 801C4A00
  W16(c->r[3]+0x000000DAu,c->r[7]); // 801C4A04
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4A08
  c->r[3]=c->r[3]+0x0000000Cu; // 801C4A0C
  c->lr=0x801C4A14u; f_800EC094(c); // 801C4A10
  c->r[3]=c->r[31]+0x0000003Cu; // 801C4A14
  c->lr=0x801C4A1Cu; f_800EC094(c); // 801C4A18
  c->r[3]=c->r[31]+0x0000006Cu; // 801C4A1C
  c->lr=0x801C4A24u; f_800EC094(c); // 801C4A20
  {uint32_t ea=c->r[2]+0xFFFF9CC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4A24
  c->r[3]=c->r[31]|c->r[31]; // 801C4A28
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 801C4A2C
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 801C4A30
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 801C4A34
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 801C4A38
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 801C4A3C
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 801C4A40
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 801C4A44
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 801C4A48
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 801C4A4C
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 801C4A50
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 801C4A54
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 801C4A58
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C4A5C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C4A60
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C4A64
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801C4A68
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801C4A6C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801C4A70
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801C4A74
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801C4A78
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801C4A7C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801C4A80
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C4A84
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C4A88
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C4A8C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801C4A90
  c->lr=c->r[0]; // 801C4A94
  c->r[1]=c->r[1]+0x00000040u; // 801C4A98
  return; // 801C4A9C
}

// __dt__Q34nw4r3g3d6ScnObjFv
void f_801C4AA0(Ctx* __restrict c) {
  trace_call(0x801C4AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4AA0
  c->r[0]=c->lr; // 801C4AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801C4AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4AAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4AB0
  c->r[31]=c->r[3]|c->r[3]; // 801C4AB4
  if (crb(c,2)) { goto L_801C4B0C; } // 801C4AB8
  c->r[5]=R32(c->r[3]+0x000000D4u); // 801C4ABC
  c->r[4]=0u+0x802A0000u; // 801C4AC0
  c->r[4]=c->r[4]+0x000014D0u; // 801C4AC4
  cmps(c,1,(int32_t)c->r[5],0); // 801C4AC8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C4ACC
  if (crb(c,6)) { goto L_801C4B00; } // 801C4AD0
  c->r[0]=R8(c->r[3]+0x000000D9u); // 801C4AD4
  cmps(c,0,(int32_t)c->r[0],1); // 801C4AD8
  if (crb(c,2)) { goto L_801C4AE4; } // 801C4ADC
  goto L_801C4B00; // 801C4AE0
L_801C4AE4:;
  if (crb(c,6)) { goto L_801C4B00; } // 801C4AE4
  c->r[12]=R32(c->r[5]+0x00000000u); // 801C4AE8
  c->r[3]=c->r[5]|c->r[5]; // 801C4AEC
  c->r[4]=0u+0x00000001u; // 801C4AF0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C4AF4
  c->ctr=c->r[12]; // 801C4AF8
  if (true) { c->lr=0x801C4B00u; dispatch(c,c->ctr); } // 801C4AFC
L_801C4B00:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4B00
  c->r[4]=0u+0x00000000u; // 801C4B04
  c->lr=0x801C4B0Cu; f_801B7AB0(c); // 801C4B08
L_801C4B0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4B0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4B14
  c->lr=c->r[0]; // 801C4B18
  c->r[1]=c->r[1]+0x00000010u; // 801C4B1C
  return; // 801C4B20
}

// SetScnObjOption__Q34nw4r3g3d6ScnObjFUlUl
void f_801C4B24(Ctx* __restrict c) {
  trace_call(0x801C4B24u);
  cmpu(c,0,c->r[4],0x00000009u); // 801C4B24
  if (crb(c,1)) { goto L_801C4CAC; } // 801C4B28
  c->r[6]=0u+0x802A0000u; // 801C4B2C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C4B30
  c->r[6]=c->r[6]+0x00001440u; // 801C4B34
  c->r[6]=R32(c->r[6]+c->r[0]); // 801C4B38
  c->ctr=c->r[6]; // 801C4B3C
  if (true) { switch (c->ctr) { case 0x801C4B44u: goto L_801C4B44; case 0x801C4B6Cu: goto L_801C4B6C; case 0x801C4B94u: goto L_801C4B94; case 0x801C4BBCu: goto L_801C4BBC; case 0x801C4BE4u: goto L_801C4BE4; case 0x801C4C0Cu: goto L_801C4C0C; case 0x801C4C34u: goto L_801C4C34; case 0x801C4C5Cu: goto L_801C4C5C; case 0x801C4C84u: goto L_801C4C84; case 0x801C4CACu: goto L_801C4CAC; default: break; } dispatch(c,c->ctr); return; } // 801C4B40
L_801C4B44:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4B44
  if (crb(c,2)) { goto L_801C4B5C; } // 801C4B48
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4B4C
  c->r[0]=c->r[0]|0x00000010u; // 801C4B50
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4B54
  goto L_801C4CB4; // 801C4B58
L_801C4B5C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4B5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801C4B60
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4B64
  goto L_801C4CB4; // 801C4B68
L_801C4B6C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4B6C
  if (crb(c,2)) { goto L_801C4B84; } // 801C4B70
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4B74
  c->r[0]=c->r[0]|0x00000001u; // 801C4B78
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4B7C
  goto L_801C4CB4; // 801C4B80
L_801C4B84:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4B84
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801C4B88
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4B8C
  goto L_801C4CB4; // 801C4B90
L_801C4B94:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4B94
  if (crb(c,2)) { goto L_801C4BAC; } // 801C4B98
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4B9C
  c->r[0]=c->r[0]|0x00000002u; // 801C4BA0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4BA4
  goto L_801C4CB4; // 801C4BA8
L_801C4BAC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4BAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801C4BB0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4BB4
  goto L_801C4CB4; // 801C4BB8
L_801C4BBC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4BBC
  if (crb(c,2)) { goto L_801C4BD4; } // 801C4BC0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4BC4
  c->r[0]=c->r[0]|0x00000004u; // 801C4BC8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4BCC
  goto L_801C4CB4; // 801C4BD0
L_801C4BD4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4BD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801C4BD8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4BDC
  goto L_801C4CB4; // 801C4BE0
L_801C4BE4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4BE4
  if (crb(c,2)) { goto L_801C4BFC; } // 801C4BE8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4BEC
  c->r[0]=c->r[0]|0x00000008u; // 801C4BF0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4BF4
  goto L_801C4CB4; // 801C4BF8
L_801C4BFC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4BFC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801C4C00
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4C04
  goto L_801C4CB4; // 801C4C08
L_801C4C0C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4C0C
  if (crb(c,2)) { goto L_801C4C24; } // 801C4C10
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4C14
  c->r[0]=c->r[0]|0x00000020u; // 801C4C18
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4C1C
  goto L_801C4CB4; // 801C4C20
L_801C4C24:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4C24
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801C4C28
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4C2C
  goto L_801C4CB4; // 801C4C30
L_801C4C34:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4C34
  if (crb(c,2)) { goto L_801C4C4C; } // 801C4C38
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4C3C
  c->r[0]=c->r[0]|0x00000040u; // 801C4C40
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4C44
  goto L_801C4CB4; // 801C4C48
L_801C4C4C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4C4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801C4C50
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4C54
  goto L_801C4CB4; // 801C4C58
L_801C4C5C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4C5C
  if (crb(c,2)) { goto L_801C4C74; } // 801C4C60
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4C64
  c->r[0]=c->r[0]|0x00000080u; // 801C4C68
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4C6C
  goto L_801C4CB4; // 801C4C70
L_801C4C74:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4C74
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 801C4C78
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4C7C
  goto L_801C4CB4; // 801C4C80
L_801C4C84:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4C84
  if (crb(c,2)) { goto L_801C4C9C; } // 801C4C88
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4C8C
  c->r[0]=c->r[0]|0x10000000u; // 801C4C90
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4C94
  goto L_801C4CB4; // 801C4C98
L_801C4C9C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4C9C
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 801C4CA0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4CA4
  goto L_801C4CB4; // 801C4CA8
L_801C4CAC:;
  c->r[3]=0u+0x00000000u; // 801C4CAC
  return; // 801C4CB0
L_801C4CB4:;
  c->r[3]=0u+0x00000001u; // 801C4CB4
  return; // 801C4CB8
}

// GetScnObjOption__Q34nw4r3g3d6ScnObjCFUlPUl
void f_801C4CBC(Ctx* __restrict c) {
  trace_call(0x801C4CBCu);
  cmps(c,0,(int32_t)c->r[5],0); // 801C4CBC
  if (!crb(c,2)) { goto L_801C4CCC; } // 801C4CC0
  c->r[3]=0u+0x00000000u; // 801C4CC4
  return; // 801C4CC8
L_801C4CCC:;
  cmpu(c,0,c->r[4],0x00000009u); // 801C4CCC
  if (crb(c,1)) { goto L_801C4D7C; } // 801C4CD0
  c->r[6]=0u+0x802A0000u; // 801C4CD4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C4CD8
  c->r[6]=c->r[6]+0x00001468u; // 801C4CDC
  c->r[6]=R32(c->r[6]+c->r[0]); // 801C4CE0
  c->ctr=c->r[6]; // 801C4CE4
  if (true) { switch (c->ctr) { case 0x801C4CECu: goto L_801C4CEC; case 0x801C4CFCu: goto L_801C4CFC; case 0x801C4D0Cu: goto L_801C4D0C; case 0x801C4D1Cu: goto L_801C4D1C; case 0x801C4D2Cu: goto L_801C4D2C; case 0x801C4D3Cu: goto L_801C4D3C; case 0x801C4D4Cu: goto L_801C4D4C; case 0x801C4D5Cu: goto L_801C4D5C; case 0x801C4D6Cu: goto L_801C4D6C; case 0x801C4D7Cu: goto L_801C4D7C; default: break; } dispatch(c,c->ctr); return; } // 801C4CE8
L_801C4CEC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4CEC
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 801C4CF0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4CF4
  goto L_801C4D84; // 801C4CF8
L_801C4CFC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4CFC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801C4D00
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4D04
  goto L_801C4D84; // 801C4D08
L_801C4D0C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4D0C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 801C4D10
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4D14
  goto L_801C4D84; // 801C4D18
L_801C4D1C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4D1C
  c->r[0]=rotl(c->r[0],30)&0x00000001u; // 801C4D20
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4D24
  goto L_801C4D84; // 801C4D28
L_801C4D2C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4D2C
  c->r[0]=rotl(c->r[0],29)&0x00000001u; // 801C4D30
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4D34
  goto L_801C4D84; // 801C4D38
L_801C4D3C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4D3C
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801C4D40
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4D44
  goto L_801C4D84; // 801C4D48
L_801C4D4C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4D4C
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 801C4D50
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4D54
  goto L_801C4D84; // 801C4D58
L_801C4D5C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4D5C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 801C4D60
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4D64
  goto L_801C4D84; // 801C4D68
L_801C4D6C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4D6C
  c->r[0]=rotl(c->r[0],4)&0x00000001u; // 801C4D70
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C4D74
  goto L_801C4D84; // 801C4D78
L_801C4D7C:;
  c->r[3]=0u+0x00000000u; // 801C4D7C
  return; // 801C4D80
L_801C4D84:;
  c->r[3]=0u+0x00000001u; // 801C4D84
  return; // 801C4D88
}

// SetMtx__Q34nw4r3g3d6ScnObjFQ44nw4r3g3d6ScnObj13ScnObjMtxTypePCQ34nw4r4math5MTX34
void f_801C4D8C(Ctx* __restrict c) {
  trace_call(0x801C4D8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4D8C
  c->r[0]=c->lr; // 801C4D90
  cmpu(c,0,c->r[4],0x00000003u); // 801C4D94
  c->r[6]=c->r[3]|c->r[3]; // 801C4D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4D9C
  if (!crb(c,0)) { goto L_801C4E04; } // 801C4DA0
  cmps(c,0,(int32_t)c->r[5],0); // 801C4DA4
  if (crb(c,2)) { goto L_801C4DD8; } // 801C4DA8
  cmps(c,0,(int32_t)c->r[4],0); // 801C4DAC
  if (!crb(c,2)) { goto L_801C4DC0; } // 801C4DB0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4DB4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801C4DB8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4DBC
L_801C4DC0:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801C4DC0
  c->r[3]=c->r[5]|c->r[5]; // 801C4DC4
  c->r[4]=c->r[6]+c->r[0]; // 801C4DC8
  c->r[4]=c->r[4]+0x0000000Cu; // 801C4DCC
  c->lr=0x801C4DD4u; f_800EC0C0(c); // 801C4DD0
  goto L_801C4DFC; // 801C4DD4
L_801C4DD8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C4DD8
  if (!crb(c,2)) { goto L_801C4DEC; } // 801C4DDC
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4DE0
  c->r[0]=c->r[0]|0x80000000u; // 801C4DE4
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4DE8
L_801C4DEC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801C4DEC
  c->r[3]=c->r[3]+c->r[0]; // 801C4DF0
  c->r[3]=c->r[3]+0x0000000Cu; // 801C4DF4
  c->lr=0x801C4DFCu; f_800EC094(c); // 801C4DF8
L_801C4DFC:;
  c->r[3]=0u+0x00000001u; // 801C4DFC
  goto L_801C4E08; // 801C4E00
L_801C4E04:;
  c->r[3]=0u+0x00000000u; // 801C4E04
L_801C4E08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4E08
  c->lr=c->r[0]; // 801C4E0C
  c->r[1]=c->r[1]+0x00000010u; // 801C4E10
  return; // 801C4E14
}

// GetMtx__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6ScnObj13ScnObjMtxTypePQ34nw4r4math5MTX34
void f_801C4E18(Ctx* __restrict c) {
  trace_call(0x801C4E18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4E18
  c->r[0]=c->lr; // 801C4E1C
  cmps(c,0,(int32_t)c->r[5],0); // 801C4E20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4E24
  if (crb(c,2)) { goto L_801C4E50; } // 801C4E28
  cmpu(c,0,c->r[4],0x00000003u); // 801C4E2C
  if (!crb(c,0)) { goto L_801C4E50; } // 801C4E30
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801C4E34
  c->r[4]=c->r[5]|c->r[5]; // 801C4E38
  c->r[3]=c->r[3]+c->r[0]; // 801C4E3C
  c->r[3]=c->r[3]+0x0000000Cu; // 801C4E40
  c->lr=0x801C4E48u; f_800EC0C0(c); // 801C4E44
  c->r[3]=0u+0x00000001u; // 801C4E48
  goto L_801C4E54; // 801C4E4C
L_801C4E50:;
  c->r[3]=0u+0x00000000u; // 801C4E50
L_801C4E54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4E54
  c->lr=c->r[0]; // 801C4E58
  c->r[1]=c->r[1]+0x00000010u; // 801C4E5C
  return; // 801C4E60
}

// fn_801C4E64
void f_801C4E64(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4E64
  c->f[1]=-c->f[0]; // 801C4E68
  return; // 801C4E6C
}

// fn_801C4E70
void f_801C4E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4E70
  return; // 801C4E74
}

// fn_801C4E78
void f_801C4E78(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 801C4E78
  if (crb(c,2)) { goto L_801C4EE0; } // 801C4E7C
  cmps(c,0,(int32_t)c->r[4],2); // 801C4E80
  if (!crb(c,0)) { goto L_801C4ED8; } // 801C4E84
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 801C4E88
  c->r[6]=R32(c->r[5]+0x00000000u); // 801C4E8C
  c->r[0]=R32(c->r[5]+0x00000004u); // 801C4E90
  c->r[4]=0u+0x00000009u; // 801C4E94
  c->r[7]=c->r[3]+c->r[7]; // 801C4E98
  W32(c->r[7]+0x0000009Cu,c->r[6]); // 801C4E9C
  W32(c->r[7]+0x000000A0u,c->r[0]); // 801C4EA0
  c->r[0]=R32(c->r[5]+0x00000008u); // 801C4EA4
  W32(c->r[7]+0x000000A4u,c->r[0]); // 801C4EA8
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 801C4EAC
  c->r[0]=R32(c->r[5]+0x00000010u); // 801C4EB0
  W32(c->r[7]+0x000000A8u,c->r[6]); // 801C4EB4
  W32(c->r[7]+0x000000ACu,c->r[0]); // 801C4EB8
  c->r[0]=R32(c->r[5]+0x00000014u); // 801C4EBC
  c->r[5]=0u+0x00000001u; // 801C4EC0
  W32(c->r[7]+0x000000B0u,c->r[0]); // 801C4EC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C4EC8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801C4ECC
  c->ctr=c->r[12]; // 801C4ED0
  if (true) { dispatch(c,c->ctr); return; } // 801C4ED4
L_801C4ED8:;
  c->r[3]=0u+0x00000000u; // 801C4ED8
  return; // 801C4EDC
L_801C4EE0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C4EE0
  c->r[4]=0u+0x00000009u; // 801C4EE4
  c->r[5]=0u+0x00000000u; // 801C4EE8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801C4EEC
  c->ctr=c->r[12]; // 801C4EF0
  if (true) { dispatch(c,c->ctr); return; } // 801C4EF4
}

// fn_801C4EF8
void f_801C4EF8(Ctx* __restrict c) {
  return; // 801C4EF8
}

// GetBoundingVolume__Q34nw4r3g3d6ScnObjCFQ44nw4r3g3d6ScnObj24ScnObjBoundingVolumeTypePQ34nw4r4math4AABB
void f_801C4EFC(Ctx* __restrict c) {
  trace_call(0x801C4EFCu);
  cmps(c,0,(int32_t)c->r[5],0); // 801C4EFC
  if (crb(c,2)) { goto L_801C4F54; } // 801C4F00
  cmps(c,0,(int32_t)c->r[4],2); // 801C4F04
  if (!crb(c,0)) { goto L_801C4F4C; } // 801C4F08
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 801C4F0C
  c->r[10]=c->r[3]+c->r[0]; // 801C4F10
  c->r[3]=0u+0x00000001u; // 801C4F14
  c->r[9]=R32(c->r[10]+0x0000009Cu); // 801C4F18
  c->r[8]=R32(c->r[10]+0x000000A0u); // 801C4F1C
  c->r[7]=R32(c->r[10]+0x000000A4u); // 801C4F20
  c->r[6]=R32(c->r[10]+0x000000A8u); // 801C4F24
  c->r[4]=R32(c->r[10]+0x000000ACu); // 801C4F28
  c->r[0]=R32(c->r[10]+0x000000B0u); // 801C4F2C
  W32(c->r[5]+0x00000000u,c->r[9]); // 801C4F30
  W32(c->r[5]+0x00000004u,c->r[8]); // 801C4F34
  W32(c->r[5]+0x00000008u,c->r[7]); // 801C4F38
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 801C4F3C
  W32(c->r[5]+0x00000010u,c->r[4]); // 801C4F40
  W32(c->r[5]+0x00000014u,c->r[0]); // 801C4F44
  return; // 801C4F48
L_801C4F4C:;
  c->r[3]=0u+0x00000000u; // 801C4F4C
  return; // 801C4F50
L_801C4F54:;
  c->r[3]=0u+0x00000000u; // 801C4F54
  return; // 801C4F58
}

// ForEach__Q34nw4r3g3d7ScnLeafFPFPQ34nw4r3g3d6ScnObjPv_Q44nw4r3g3d6ScnObj13ForEachResultPvb
void f_801C4F5C(Ctx* __restrict c) {
  trace_call(0x801C4F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4F5C
  c->r[0]=c->lr; // 801C4F60
  c->r[12]=c->r[4]|c->r[4]; // 801C4F64
  c->r[4]=c->r[5]|c->r[5]; // 801C4F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4F6C
  c->ctr=c->r[12]; // 801C4F70
  if (true) { c->lr=0x801C4F78u; dispatch(c,c->ctr); } // 801C4F74
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C4F78
  c->r[0]=cntlz(c->r[0]); // 801C4F7C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C4F80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4F84
  c->lr=c->r[0]; // 801C4F88
  c->r[1]=c->r[1]+0x00000010u; // 801C4F8C
  return; // 801C4F90
}

// SetScnObjOption__Q34nw4r3g3d7ScnLeafFUlUl
void f_801C4F94(Ctx* __restrict c) {
  trace_call(0x801C4F94u);
  c->r[6]=0u+0x00010000u; // 801C4F94
  c->r[0]=c->r[6]+0x00000001u; // 801C4F98
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C4F9C
  if (crb(c,2)) { goto L_801C4FA8; } // 801C4FA0
  goto L_801C4FD0; // 801C4FA4
L_801C4FA8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C4FA8
  if (crb(c,2)) { goto L_801C4FC0; } // 801C4FAC
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4FB0
  c->r[0]=c->r[0]|0x00000060u; // 801C4FB4
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4FB8
  goto L_801C4FD4; // 801C4FBC
L_801C4FC0:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C4FC0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF9Fu; // 801C4FC4
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C4FC8
  goto L_801C4FD4; // 801C4FCC
L_801C4FD0:;
  f_801C4B24(c); return; // 801C4FD0
L_801C4FD4:;
  c->r[3]=0u+0x00000001u; // 801C4FD4
  return; // 801C4FD8
}

// GetScnObjOption__Q34nw4r3g3d7ScnLeafCFUlPUl
void f_801C4FDC(Ctx* __restrict c) {
  trace_call(0x801C4FDCu);
  cmps(c,0,(int32_t)c->r[5],0); // 801C4FDC
  if (!crb(c,2)) { goto L_801C4FEC; } // 801C4FE0
  c->r[3]=0u+0x00000000u; // 801C4FE4
  return; // 801C4FE8
L_801C4FEC:;
  c->r[6]=0u+0x00010000u; // 801C4FEC
  c->r[0]=c->r[6]+0x00000001u; // 801C4FF0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C4FF4
  if (crb(c,2)) { goto L_801C5000; } // 801C4FF8
  goto L_801C501C; // 801C4FFC
L_801C5000:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801C5000
  c->r[3]=rotl(c->r[0],0)&0x00000060u; // 801C5004
  c->r[0]=0u-c->r[3]; // 801C5008
  c->r[0]=c->r[0]|c->r[3]; // 801C500C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C5010
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C5014
  goto L_801C5020; // 801C5018
L_801C501C:;
  f_801C4CBC(c); return; // 801C501C
L_801C5020:;
  c->r[3]=0u+0x00000001u; // 801C5020
  return; // 801C5024
}


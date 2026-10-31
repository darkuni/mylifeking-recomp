#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GetChanCtrlNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D658C(Ctx* __restrict c) {
  trace_call(0x801D658Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D658C
  c->r[3]=rotl(c->r[0],7)&0x00000001u; // 801D6590
  return; // 801D6594
}

// GetMatColNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D6598(Ctx* __restrict c) {
  trace_call(0x801D6598u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D6598
  c->r[3]=rotl(c->r[0],5)&0x00000001u; // 801D659C
  return; // 801D65A0
}

// HasTevSwapTable__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D65A4(Ctx* __restrict c) {
  trace_call(0x801D65A4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D65A4
  c->r[3]=rotl(c->r[0],20)&0x00000001u; // 801D65A8
  return; // 801D65AC
}

// HasAlphaCompare__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D65B0(Ctx* __restrict c) {
  trace_call(0x801D65B0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D65B0
  c->r[3]=rotl(c->r[0],9)&0x00000001u; // 801D65B4
  return; // 801D65B8
}

// HasBlendMode__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D65BC(Ctx* __restrict c) {
  trace_call(0x801D65BCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D65BC
  c->r[3]=rotl(c->r[0],8)&0x00000001u; // 801D65C0
  return; // 801D65C4
}

// GetIndTexSRTNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D65C8(Ctx* __restrict c) {
  trace_call(0x801D65C8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D65C8
  c->r[3]=rotl(c->r[0],19)&0x00000003u; // 801D65CC
  return; // 801D65D0
}

// GetIndTexStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D65D4(Ctx* __restrict c) {
  trace_call(0x801D65D4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D65D4
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 801D65D8
  return; // 801D65DC
}

// GetTevStageNum__Q44nw4r3lyt3res19MaterialResourceNumCFv
void f_801D65E0(Ctx* __restrict c) {
  trace_call(0x801D65E0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D65E0
  c->r[3]=rotl(c->r[0],14)&0x0000001Fu; // 801D65E4
  return; // 801D65E8
}

// SetWrapMode__Q34nw4r3lyt6TexMapF14_GXTexWrapMode14_GXTexWrapMode
void f_801D65EC(Ctx* __restrict c) {
  trace_call(0x801D65ECu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D65EC
  c->r[0]=(rotl(c->r[4],25)&0x06000000u)|(c->r[0]&~0x06000000u); // 801D65F0
  c->r[0]=(rotl(c->r[5],23)&0x01800000u)|(c->r[0]&~0x01800000u); // 801D65F4
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D65F8
  return; // 801D65FC
}

// GetWarpModeS__Q44nw4r3lyt3res6TexMapCFv
void f_801D6600(Ctx* __restrict c) {
  trace_call(0x801D6600u);
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D6600
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 801D6604
  return; // 801D6608
}

// GetWarpModeT__Q44nw4r3lyt3res6TexMapCFv
void f_801D660C(Ctx* __restrict c) {
  trace_call(0x801D660Cu);
  c->r[0]=R8(c->r[3]+0x00000003u); // 801D660C
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 801D6610
  return; // 801D6614
}

// SetFilter__Q34nw4r3lyt6TexMapF12_GXTexFilter12_GXTexFilter
void f_801D6618(Ctx* __restrict c) {
  trace_call(0x801D6618u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D6618
  c->r[0]=(rotl(c->r[4],20)&0x00700000u)|(c->r[0]&~0x00700000u); // 801D661C
  c->r[0]=(rotl(c->r[5],19)&0x00080000u)|(c->r[0]&~0x00080000u); // 801D6620
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D6624
  return; // 801D6628
}

// GetMinFilter__Q44nw4r3lyt3res6TexMapCFv
void f_801D662C(Ctx* __restrict c) {
  trace_call(0x801D662Cu);
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D662C
  c->r[3]=rotl(c->r[0],30)&0x00000007u; // 801D6630
  c->r[0]=c->r[3]+0x00000001u; // 801D6634
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 801D6638
  return; // 801D663C
}

// GetMagFilter__Q44nw4r3lyt3res6TexMapCFv
void f_801D6640(Ctx* __restrict c) {
  trace_call(0x801D6640u);
  c->r[0]=R8(c->r[3]+0x00000003u); // 801D6640
  c->r[3]=rotl(c->r[0],30)&0x00000001u; // 801D6644
  c->r[0]=c->r[3]+0x00000001u; // 801D6648
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801D664C
  return; // 801D6650
}

// __as__Q34nw4r3lyt11TexCoordGenFRCQ34nw4r3lyt11TexCoordGen
void f_801D6654(Ctx* __restrict c) {
  trace_call(0x801D6654u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 801D6654
  c->r[6]=R8(c->r[4]+0x00000001u); // 801D6658
  c->r[5]=R8(c->r[4]+0x00000002u); // 801D665C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801D6660
  W8(c->r[3]+0x00000000u,c->r[7]); // 801D6664
  W8(c->r[3]+0x00000001u,c->r[6]); // 801D6668
  W8(c->r[3]+0x00000002u,c->r[5]); // 801D666C
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D6670
  return; // 801D6674
}

// __as__Q34nw4r3lyt8ChanCtrlFRCQ34nw4r3lyt8ChanCtrl
void f_801D6678(Ctx* __restrict c) {
  trace_call(0x801D6678u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 801D6678
  c->r[6]=R8(c->r[4]+0x00000001u); // 801D667C
  c->r[5]=R8(c->r[4]+0x00000002u); // 801D6680
  c->r[0]=R8(c->r[4]+0x00000003u); // 801D6684
  W8(c->r[3]+0x00000000u,c->r[7]); // 801D6688
  W8(c->r[3]+0x00000001u,c->r[6]); // 801D668C
  W8(c->r[3]+0x00000002u,c->r[5]); // 801D6690
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D6694
  return; // 801D6698
}

// __as__Q34nw4r3lyt11TevSwapModeFRCQ34nw4r3lyt11TevSwapMode
void f_801D669C(Ctx* __restrict c) {
  trace_call(0x801D669Cu);
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D669C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D66A0
  return; // 801D66A4
}

// __as__Q34nw4r3lyt6TexSRTFRCQ34nw4r3lyt6TexSRT
void f_801D66A8(Ctx* __restrict c) {
  trace_call(0x801D66A8u);
  c->r[7]=R32(c->r[4]+0x00000000u); // 801D66A8
  c->r[6]=R32(c->r[4]+0x00000004u); // 801D66AC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D66B0
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801D66B4
  c->r[0]=R32(c->r[4]+0x00000010u); // 801D66B8
  W32(c->r[3]+0x00000000u,c->r[7]); // 801D66BC
  W32(c->r[3]+0x00000004u,c->r[6]); // 801D66C0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801D66C4
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801D66C8
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D66CC
  return; // 801D66D0
}

// __as__Q34nw4r3lyt13IndirectStageFRCQ34nw4r3lyt13IndirectStage
void f_801D66D4(Ctx* __restrict c) {
  trace_call(0x801D66D4u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 801D66D4
  c->r[6]=R8(c->r[4]+0x00000001u); // 801D66D8
  c->r[5]=R8(c->r[4]+0x00000002u); // 801D66DC
  c->r[0]=R8(c->r[4]+0x00000003u); // 801D66E0
  W8(c->r[3]+0x00000000u,c->r[7]); // 801D66E4
  W8(c->r[3]+0x00000001u,c->r[6]); // 801D66E8
  W8(c->r[3]+0x00000002u,c->r[5]); // 801D66EC
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D66F0
  return; // 801D66F4
}

// __as__Q34nw4r3lyt8TevStageFRCQ34nw4r3lyt8TevStage
void f_801D66F8(Ctx* __restrict c) {
  trace_call(0x801D66F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D66F8
  c->r[0]=c->lr; // 801D66FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6700
  c->r[11]=c->r[1]+0x00000030u; // 801D6704
  c->lr=0x801D670Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6708
  c->r[25]=R8(c->r[4]+0x00000000u); // 801D670C
  c->r[26]=R8(c->r[4]+0x00000001u); // 801D6710
  c->r[27]=R8(c->r[4]+0x00000002u); // 801D6714
  c->r[28]=R8(c->r[4]+0x00000003u); // 801D6718
  c->r[29]=R8(c->r[4]+0x00000004u); // 801D671C
  c->r[30]=R8(c->r[4]+0x00000005u); // 801D6720
  c->r[31]=R8(c->r[4]+0x00000006u); // 801D6724
  c->r[12]=R8(c->r[4]+0x00000007u); // 801D6728
  c->r[11]=R8(c->r[4]+0x00000008u); // 801D672C
  c->r[10]=R8(c->r[4]+0x00000009u); // 801D6730
  c->r[9]=R8(c->r[4]+0x0000000Au); // 801D6734
  c->r[8]=R8(c->r[4]+0x0000000Bu); // 801D6738
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 801D673C
  c->r[6]=R8(c->r[4]+0x0000000Du); // 801D6740
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 801D6744
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801D6748
  W8(c->r[3]+0x00000008u,c->r[11]); // 801D674C
  c->r[11]=c->r[1]+0x00000030u; // 801D6750
  W8(c->r[3]+0x00000000u,c->r[25]); // 801D6754
  W8(c->r[3]+0x00000001u,c->r[26]); // 801D6758
  W8(c->r[3]+0x00000002u,c->r[27]); // 801D675C
  W8(c->r[3]+0x00000003u,c->r[28]); // 801D6760
  W8(c->r[3]+0x00000004u,c->r[29]); // 801D6764
  W8(c->r[3]+0x00000005u,c->r[30]); // 801D6768
  W8(c->r[3]+0x00000006u,c->r[31]); // 801D676C
  W8(c->r[3]+0x00000007u,c->r[12]); // 801D6770
  W8(c->r[3]+0x00000009u,c->r[10]); // 801D6774
  W8(c->r[3]+0x0000000Au,c->r[9]); // 801D6778
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 801D677C
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 801D6780
  W8(c->r[3]+0x0000000Du,c->r[6]); // 801D6784
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 801D6788
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801D678C
  c->lr=0x801D6794u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6790
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D6794
  c->lr=c->r[0]; // 801D6798
  c->r[1]=c->r[1]+0x00000030u; // 801D679C
  return; // 801D67A0
}

// __as__Q34nw4r3lyt12AlphaCompareFRCQ34nw4r3lyt12AlphaCompare
void f_801D67A4(Ctx* __restrict c) {
  trace_call(0x801D67A4u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 801D67A4
  c->r[6]=R8(c->r[4]+0x00000001u); // 801D67A8
  c->r[5]=R8(c->r[4]+0x00000002u); // 801D67AC
  c->r[0]=R8(c->r[4]+0x00000003u); // 801D67B0
  W8(c->r[3]+0x00000000u,c->r[7]); // 801D67B4
  W8(c->r[3]+0x00000001u,c->r[6]); // 801D67B8
  W8(c->r[3]+0x00000002u,c->r[5]); // 801D67BC
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D67C0
  return; // 801D67C4
}

// __as__Q34nw4r3lyt9BlendModeFRCQ34nw4r3lyt9BlendMode
void f_801D67C8(Ctx* __restrict c) {
  trace_call(0x801D67C8u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 801D67C8
  c->r[6]=R8(c->r[4]+0x00000001u); // 801D67CC
  c->r[5]=R8(c->r[4]+0x00000002u); // 801D67D0
  c->r[0]=R8(c->r[4]+0x00000003u); // 801D67D4
  W8(c->r[3]+0x00000000u,c->r[7]); // 801D67D8
  W8(c->r[3]+0x00000001u,c->r[6]); // 801D67DC
  W8(c->r[3]+0x00000002u,c->r[5]); // 801D67E0
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D67E4
  return; // 801D67E8
}

// ConvertOffsToPtr<Q34nw4r3lyt9BlendMode>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt9BlendMode
void f_801D67EC(Ctx* __restrict c) {
  trace_call(0x801D67ECu);
  c->r[3]=c->r[3]+c->r[4]; // 801D67EC
  return; // 801D67F0
}

// ConvertOffsToPtr<Q34nw4r3lyt12AlphaCompare>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt12AlphaCompare
void f_801D67F4(Ctx* __restrict c) {
  trace_call(0x801D67F4u);
  c->r[3]=c->r[3]+c->r[4]; // 801D67F4
  return; // 801D67F8
}

// ConvertOffsToPtr<Q34nw4r3lyt8TevStage>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt8TevStage
void f_801D67FC(Ctx* __restrict c) {
  trace_call(0x801D67FCu);
  c->r[3]=c->r[3]+c->r[4]; // 801D67FC
  return; // 801D6800
}

// ConvertOffsToPtr<Q34nw4r3lyt13IndirectStage>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt13IndirectStage
void f_801D6804(Ctx* __restrict c) {
  trace_call(0x801D6804u);
  c->r[3]=c->r[3]+c->r[4]; // 801D6804
  return; // 801D6808
}

// ConvertOffsToPtr<Q34nw4r3lyt11TevSwapMode>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt11TevSwapMode
void f_801D680C(Ctx* __restrict c) {
  trace_call(0x801D680Cu);
  c->r[3]=c->r[3]+c->r[4]; // 801D680C
  return; // 801D6810
}

// ConvertOffsToPtr<Q34nw4r2ut5Color>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r2ut5Color
void f_801D6814(Ctx* __restrict c) {
  trace_call(0x801D6814u);
  c->r[3]=c->r[3]+c->r[4]; // 801D6814
  return; // 801D6818
}

// ConvertOffsToPtr<Q34nw4r3lyt8ChanCtrl>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt8ChanCtrl
void f_801D681C(Ctx* __restrict c) {
  trace_call(0x801D681Cu);
  c->r[3]=c->r[3]+c->r[4]; // 801D681C
  return; // 801D6820
}

// ConvertOffsToPtr<c>__Q34nw4r3lyt6detailFPCvUi_PCc
void f_801D6824(Ctx* __restrict c) {
  trace_call(0x801D6824u);
  c->r[3]=c->r[3]+c->r[4]; // 801D6824
  return; // 801D6828
}

// ConvertOffsToPtr<Q44nw4r3lyt3res7Texture>__Q34nw4r3lyt6detailFPCvUi_PCQ44nw4r3lyt3res7Texture
void f_801D682C(Ctx* __restrict c) {
  trace_call(0x801D682Cu);
  c->r[3]=c->r[3]+c->r[4]; // 801D682C
  return; // 801D6830
}

// Min<Uc>__Q34nw4r2ut26@unnamed@lyt_material_cpp@FUcUc_Uc
void f_801D6834(Ctx* __restrict c) {
  trace_call(0x801D6834u);
  cmpu(c,0,c->r[3],c->r[4]); // 801D6834
  if (!crb(c,1)) return; // 801D6838
  c->r[3]=c->r[4]|c->r[4]; // 801D683C
  return; // 801D6840
}

// ConvertOffsToPtr<Q34nw4r3lyt11TexCoordGen>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt11TexCoordGen
void f_801D6844(Ctx* __restrict c) {
  trace_call(0x801D6844u);
  c->r[3]=c->r[3]+c->r[4]; // 801D6844
  return; // 801D6848
}

// ConvertOffsToPtr<Q34nw4r3lyt6TexSRT>__Q34nw4r3lyt6detailFPCvUi_PCQ34nw4r3lyt6TexSRT
void f_801D684C(Ctx* __restrict c) {
  trace_call(0x801D684Cu);
  c->r[3]=c->r[3]+c->r[4]; // 801D684C
  return; // 801D6850
}

// ConvertOffsToPtr<Q44nw4r3lyt3res6TexMap>__Q34nw4r3lyt6detailFPCvUi_PCQ44nw4r3lyt3res6TexMap
void f_801D6854(Ctx* __restrict c) {
  trace_call(0x801D6854u);
  c->r[3]=c->r[3]+c->r[4]; // 801D6854
  return; // 801D6858
}

// Init__Q34nw4r3lyt8MaterialFv
void f_801D685C(Ctx* __restrict c) {
  trace_call(0x801D685Cu);
  c->r[7]=c->r[2]+0xFFFFA1D0u; // 801D685C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D6860
  c->r[5]=R32(c->r[3]+0x00000038u); // 801D6864
  c->r[6]=0u+0x000000FFu; // 801D6868
  c->r[4]=0u+0x00000000u; // 801D686C
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFA1D0u); // 801D6870
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000002u); // 801D6874
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 801D6878
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000004u); // 801D687C
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801D6880
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000006u); // 801D6884
  W16(c->r[3]+0x00000010u,c->r[10]); // 801D6888
  W16(c->r[3]+0x00000012u,c->r[9]); // 801D688C
  W16(c->r[3]+0x00000014u,c->r[8]); // 801D6890
  W16(c->r[3]+0x00000016u,c->r[7]); // 801D6894
  W16(c->r[3]+0x00000018u,c->r[6]); // 801D6898
  W16(c->r[3]+0x0000001Au,c->r[6]); // 801D689C
  W16(c->r[3]+0x0000001Cu,c->r[6]); // 801D68A0
  W16(c->r[3]+0x0000001Eu,c->r[6]); // 801D68A4
  W16(c->r[3]+0x00000020u,c->r[6]); // 801D68A8
  W16(c->r[3]+0x00000022u,c->r[6]); // 801D68AC
  W16(c->r[3]+0x00000024u,c->r[6]); // 801D68B0
  W16(c->r[3]+0x00000026u,c->r[6]); // 801D68B4
  W32(c->r[3]+0x00000038u,c->r[5]); // 801D68B8
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801D68BC
  W8(c->r[3]+0x00000059u,c->r[4]); // 801D68C0
  W32(c->r[3]+0x00000040u,c->r[4]); // 801D68C4
  return; // 801D68C8
}

// __dt__Q34nw4r3lyt8MaterialFv
void f_801D68CC(Ctx* __restrict c) {
  trace_call(0x801D68CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D68CC
  c->r[0]=c->lr; // 801D68D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D68D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D68D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D68DC
  c->r[31]=c->r[4]|c->r[4]; // 801D68E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D68E4
  c->r[30]=c->r[3]|c->r[3]; // 801D68E8
  if (crb(c,2)) { goto L_801D695C; } // 801D68EC
  c->r[12]=0u+0x802A0000u; // 801D68F0
  c->r[12]=c->r[12]+0x00001AF0u; // 801D68F4
  W32(c->r[3]+0x00000000u,c->r[12]); // 801D68F8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D68FC
  c->ctr=c->r[12]; // 801D6900
  if (true) { c->lr=0x801D6908u; dispatch(c,c->ctr); } // 801D6904
  c->r[4]=R32(c->r[30]+0x00000040u); // 801D6908
  cmps(c,0,(int32_t)c->r[4],0); // 801D690C
  if (crb(c,2)) { goto L_801D6924; } // 801D6910
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D6914
  c->lr=0x801D691Cu; f_80128078(c); // 801D6918
  c->r[0]=0u+0x00000000u; // 801D691C
  W32(c->r[30]+0x00000040u,c->r[0]); // 801D6920
L_801D6924:;
  c->r[4]=0u+0x80040000u; // 801D6924
  c->r[3]=c->r[30]+0x00000028u; // 801D6928
  c->r[4]=c->r[4]+0xFFFFB540u; // 801D692C
  c->r[5]=0u+0x00000004u; // 801D6930
  c->r[6]=0u+0x00000004u; // 801D6934
  c->lr=0x801D693Cu; f_80109CC8(c); // 801D6938
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 801D693C
  if (crb(c,2)) { goto L_801D694C; } // 801D6940
  c->r[4]=0u+0x00000000u; // 801D6944
  c->lr=0x801D694Cu; f_8017A654(c); // 801D6948
L_801D694C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D694C
  if (!crb(c,1)) { goto L_801D695C; } // 801D6950
  c->r[3]=c->r[30]|c->r[30]; // 801D6954
  c->lr=0x801D695Cu; f_8009230C(c); // 801D6958
L_801D695C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D695C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6960
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6964
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6968
  c->lr=c->r[0]; // 801D696C
  c->r[1]=c->r[1]+0x00000010u; // 801D6970
  return; // 801D6974
}

// ReserveGXMem__Q34nw4r3lyt8MaterialFUcUcUcUcbUcUcbbbb
void f_801D6978(Ctx* __restrict c) {
  trace_call(0x801D6978u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6978
  c->r[0]=c->lr; // 801D697C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D6980
  c->r[11]=c->r[1]+0x00000060u; // 801D6984
  c->lr=0x801D698Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6988
  c->r[0]=R32(c->r[3]+0x00000038u); // 801D698C
  c->r[20]=c->r[3]|c->r[3]; // 801D6990
  c->r[28]=R8(c->r[1]+0x0000006Bu); // 801D6994
  c->r[21]=c->r[4]|c->r[4]; // 801D6998
  c->r[11]=rotl(c->r[0],4)&0x0000000Fu; // 801D699C
  c->r[29]=R8(c->r[1]+0x0000006Fu); // 801D69A0
  cmpu(c,0,c->r[11],c->r[4]); // 801D69A4
  c->r[30]=R8(c->r[1]+0x00000073u); // 801D69A8
  c->r[31]=R8(c->r[1]+0x00000077u); // 801D69AC
  c->r[22]=c->r[5]|c->r[5]; // 801D69B0
  c->r[23]=c->r[6]|c->r[6]; // 801D69B4
  c->r[24]=c->r[7]|c->r[7]; // 801D69B8
  c->r[25]=c->r[8]|c->r[8]; // 801D69BC
  c->r[26]=c->r[9]|c->r[9]; // 801D69C0
  c->r[27]=c->r[10]|c->r[10]; // 801D69C4
  if (crb(c,0)) { goto L_801D6A44; } // 801D69C8
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 801D69CC
  cmpu(c,0,c->r[4],c->r[5]); // 801D69D0
  if (crb(c,0)) { goto L_801D6A44; } // 801D69D4
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 801D69D8
  cmpu(c,0,c->r[4],c->r[6]); // 801D69DC
  if (crb(c,0)) { goto L_801D6A44; } // 801D69E0
  c->r[4]=rotl(c->r[0],23)&0x0000001Fu; // 801D69E4
  cmpu(c,0,c->r[4],c->r[7]); // 801D69E8
  if (crb(c,0)) { goto L_801D6A44; } // 801D69EC
  c->r[4]=rotl(c->r[0],18)&0x00000001u; // 801D69F0
  cmpu(c,0,c->r[4],c->r[8]); // 801D69F4
  if (crb(c,0)) { goto L_801D6A44; } // 801D69F8
  c->r[4]=rotl(c->r[0],17)&0x00000007u; // 801D69FC
  cmpu(c,0,c->r[4],c->r[9]); // 801D6A00
  if (crb(c,0)) { goto L_801D6A44; } // 801D6A04
  c->r[4]=rotl(c->r[0],14)&0x00000003u; // 801D6A08
  cmpu(c,0,c->r[4],c->r[10]); // 801D6A0C
  if (crb(c,0)) { goto L_801D6A44; } // 801D6A10
  c->r[4]=rotl(c->r[0],24)&0x00000001u; // 801D6A14
  cmpu(c,0,c->r[4],c->r[28]); // 801D6A18
  if (crb(c,0)) { goto L_801D6A44; } // 801D6A1C
  c->r[4]=rotl(c->r[0],25)&0x00000001u; // 801D6A20
  cmpu(c,0,c->r[4],c->r[29]); // 801D6A24
  if (crb(c,0)) { goto L_801D6A44; } // 801D6A28
  c->r[4]=rotl(c->r[0],26)&0x00000001u; // 801D6A2C
  cmpu(c,0,c->r[4],c->r[30]); // 801D6A30
  if (crb(c,0)) { goto L_801D6A44; } // 801D6A34
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801D6A38
  cmpu(c,0,c->r[0],c->r[31]); // 801D6A3C
  if (!crb(c,0)) { goto L_801D70CC; } // 801D6A40
L_801D6A44:;
  c->r[4]=R32(c->r[3]+0x00000040u); // 801D6A44
  cmps(c,0,(int32_t)c->r[4],0); // 801D6A48
  if (crb(c,2)) { goto L_801D6A78; } // 801D6A4C
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D6A50
  c->lr=0x801D6A58u; f_80128078(c); // 801D6A54
  c->r[3]=R32(c->r[20]+0x00000038u); // 801D6A58
  c->r[4]=0u+0x00000000u; // 801D6A5C
  c->r[0]=R32(c->r[20]+0x0000003Cu); // 801D6A60
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 801D6A64
  W32(c->r[20]+0x00000040u,c->r[4]); // 801D6A68
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801D6A6C
  W32(c->r[20]+0x00000038u,c->r[3]); // 801D6A70
  W32(c->r[20]+0x0000003Cu,c->r[0]); // 801D6A74
L_801D6A78:;
  c->r[4]=c->r[27]+c->r[22]; // 801D6A78
  c->r[0]=c->r[25]+c->r[28]; // 801D6A7C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 801D6A80
  c->r[5]=c->r[31]+c->r[29]; // 801D6A84
  c->r[3]=c->r[26]+c->r[23]; // 801D6A88
  c->r[4]=c->r[30]+c->r[0]; // 801D6A8C
  c->r[6]=c->r[5]+c->r[3]; // 801D6A90
  c->r[0]=rotl(c->r[24],4)&0x00000FF0u; // 801D6A94
  c->r[5]=(uint32_t)((int32_t)c->r[21]*(int32_t)28); // 801D6A98
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D6A9C
  c->r[4]=c->r[6]+c->r[4]; // 801D6AA0
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D6AA4
  c->r[4]=c->r[7]+c->r[4]; // 801D6AA8
  c->r[0]=c->r[5]+c->r[0]; // 801D6AAC
  c->r[4]=c->r[4]+c->r[0]; // 801D6AB0
  c->lr=0x801D6AB8u; f_80128068(c); // 801D6AB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D6AB8
  W32(c->r[20]+0x00000040u,c->r[3]); // 801D6ABC
  if (crb(c,2)) { goto L_801D70CC; } // 801D6AC0
  c->r[0]=R32(c->r[20]+0x00000038u); // 801D6AC4
  c->r[0]=(rotl(c->r[21],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 801D6AC8
  c->r[0]=(rotl(c->r[22],24)&0x0F000000u)|(c->r[0]&~0x0F000000u); // 801D6ACC
  c->r[4]=R32(c->r[20]+0x0000003Cu); // 801D6AD0
  c->r[0]=(rotl(c->r[23],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 801D6AD4
  c->r[6]=0u+0x00000000u; // 801D6AD8
  c->r[0]=(rotl(c->r[27],18)&0x000C0000u)|(c->r[0]&~0x000C0000u); // 801D6ADC
  c->r[0]=(rotl(c->r[26],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 801D6AE0
  c->r[0]=(rotl(c->r[25],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 801D6AE4
  c->r[0]=(rotl(c->r[24],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 801D6AE8
  c->r[0]=(rotl(c->r[28],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 801D6AEC
  c->r[0]=(rotl(c->r[29],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 801D6AF0
  c->r[0]=(rotl(c->r[30],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 801D6AF4
  c->r[0]=(rotl(c->r[31],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 801D6AF8
  c->r[4]=(rotl(c->r[0],0)&0x0F000000u)|(c->r[4]&~0x0F000000u); // 801D6AFC
  W32(c->r[20]+0x00000038u,c->r[0]); // 801D6B00
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D6B04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D6B08
  c->r[5]=rotl(c->r[4],8)&0x0000000Fu; cr0(c,c->r[5]); // 801D6B0C
  W32(c->r[20]+0x0000003Cu,c->r[4]); // 801D6B10
  c->r[4]=c->r[3]+c->r[0]; // 801D6B14
  if (crb(c,2)) { goto L_801D6CC0; } // 801D6B18
  cmpu(c,0,c->r[5],0x00000008u); // 801D6B1C
  c->r[3]=c->r[5]+0xFFFFFFF8u; // 801D6B20
  if (!crb(c,1)) { goto L_801D6C74; } // 801D6B24
  c->r[0]=c->r[3]+0x00000007u; // 801D6B28
  c->r[7]=c->r[4]|c->r[4]; // 801D6B2C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D6B30
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6B34
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6B38
  c->ctr=c->r[0]; // 801D6B3C
  cmpu(c,0,c->r[3],0x00000000u); // 801D6B40
  if (!crb(c,1)) { goto L_801D6C74; } // 801D6B44
L_801D6B48:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 801D6B48
  c->r[6]=c->r[6]+0x00000008u; // 801D6B4C
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 801D6B50
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 801D6B54
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D6B58
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 801D6B5C
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 801D6B60
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 801D6B64
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6B68
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 801D6B6C
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 801D6B70
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 801D6B74
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 801D6B78
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 801D6B7C
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 801D6B80
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 801D6B84
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 801D6B88
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 801D6B8C
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 801D6B90
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 801D6B94
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 801D6B98
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 801D6B9C
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 801D6BA0
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 801D6BA4
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D6BA8
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 801D6BAC
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 801D6BB0
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 801D6BB4
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 801D6BB8
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 801D6BBC
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 801D6BC0
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 801D6BC4
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 801D6BC8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6BCC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6BD0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6BD4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6BD8
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 801D6BDC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6BE0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6BE4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6BE8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6BEC
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 801D6BF0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6BF4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6BF8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6BFC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6C00
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 801D6C04
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6C08
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6C0C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6C10
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6C14
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 801D6C18
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6C1C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6C20
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6C24
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6C28
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 801D6C2C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6C30
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6C34
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6C38
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6C3C
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 801D6C40
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6C44
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6C48
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6C4C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6C50
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 801D6C54
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 801D6C58
  c->r[7]=c->r[7]+0x000000A0u; // 801D6C5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6C60
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6C64
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6C68
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6C6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6B48; } // 801D6C70
L_801D6C74:;
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 801D6C74
  c->r[0]=c->r[5]-c->r[6]; // 801D6C78
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6C7C
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6C80
  c->r[3]=c->r[4]+c->r[3]; // 801D6C84
  c->ctr=c->r[0]; // 801D6C88
  cmpu(c,0,c->r[6],c->r[5]); // 801D6C8C
  if (!crb(c,0)) { goto L_801D6CC0; } // 801D6C90
L_801D6C94:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801D6C94
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801D6C98
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801D6C9C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D6CA0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801D6CA4
  c->r[3]=c->r[3]+0x00000014u; // 801D6CA8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801D6CAC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6CB0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D6CB4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D6CB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6C94; } // 801D6CBC
L_801D6CC0:;
  c->r[10]=R32(c->r[20]+0x00000038u); // 801D6CC0
  c->r[4]=0u+0x00000000u; // 801D6CC4
  c->r[0]=R32(c->r[20]+0x00000038u); // 801D6CC8
  c->r[21]=R32(c->r[20]+0x0000003Cu); // 801D6CCC
  c->r[7]=rotl(c->r[10],27)&0x00000004u; // 801D6CD0
  c->r[21]=(rotl(c->r[0],0)&0x000C0000u)|(c->r[21]&~0x000C0000u); // 801D6CD4
  c->r[0]=rotl(c->r[10],26)&0x00000004u; // 801D6CD8
  c->r[5]=rotl(c->r[10],4)&0x0000000Fu; // 801D6CDC
  c->r[6]=rotl(c->r[10],8)&0x0000000Fu; // 801D6CE0
  c->r[0]=c->r[7]+c->r[0]; // 801D6CE4
  c->r[8]=rotl(c->r[10],28)&0x00000004u; // 801D6CE8
  c->r[9]=rotl(c->r[10],20)&0x00000004u; // 801D6CEC
  c->r[7]=rotl(c->r[10],14)&0x0000003Cu; // 801D6CF0
  c->r[9]=c->r[9]+c->r[7]; // 801D6CF4
  c->r[11]=rotl(c->r[10],19)&0x0000001Cu; // 801D6CF8
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 801D6CFC
  c->r[8]=c->r[8]+c->r[0]; // 801D6D00
  c->r[10]=rotl(c->r[10],29)&0x00000004u; // 801D6D04
  c->r[12]=R32(c->r[20]+0x00000040u); // 801D6D08
  c->r[3]=rotl(c->r[21],14)&0x00000003u; cr0(c,c->r[3]); // 801D6D0C
  W32(c->r[20]+0x0000003Cu,c->r[21]); // 801D6D10
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 801D6D14
  c->r[0]=c->r[11]+c->r[10]; // 801D6D18
  c->r[6]=c->r[9]+c->r[8]; // 801D6D1C
  c->r[0]=c->r[12]+c->r[0]; // 801D6D20
  c->r[5]=c->r[7]+c->r[5]; // 801D6D24
  c->r[5]=c->r[6]+c->r[5]; // 801D6D28
  c->r[6]=c->r[5]+c->r[0]; // 801D6D2C
  if (crb(c,2)) { goto L_801D6ED8; } // 801D6D30
  cmpu(c,0,c->r[3],0x00000008u); // 801D6D34
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 801D6D38
  if (!crb(c,1)) { goto L_801D6E8C; } // 801D6D3C
  c->r[0]=c->r[5]+0x00000007u; // 801D6D40
  c->r[7]=c->r[6]|c->r[6]; // 801D6D44
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D6D48
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6D4C
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6D50
  c->ctr=c->r[0]; // 801D6D54
  cmpu(c,0,c->r[5],0x00000000u); // 801D6D58
  if (!crb(c,1)) { goto L_801D6E8C; } // 801D6D5C
L_801D6D60:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 801D6D60
  c->r[4]=c->r[4]+0x00000008u; // 801D6D64
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 801D6D68
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 801D6D6C
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D6D70
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 801D6D74
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 801D6D78
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 801D6D7C
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 801D6D80
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 801D6D84
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 801D6D88
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 801D6D8C
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 801D6D90
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 801D6D94
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 801D6D98
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 801D6D9C
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 801D6DA0
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 801D6DA4
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 801D6DA8
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 801D6DAC
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 801D6DB0
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 801D6DB4
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 801D6DB8
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 801D6DBC
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D6DC0
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 801D6DC4
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 801D6DC8
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 801D6DCC
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 801D6DD0
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 801D6DD4
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 801D6DD8
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 801D6DDC
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 801D6DE0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6DE4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6DE8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6DEC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6DF0
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 801D6DF4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6DF8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6DFC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6E00
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6E04
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 801D6E08
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6E0C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6E10
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6E14
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6E18
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 801D6E1C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6E20
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6E24
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6E28
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6E2C
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 801D6E30
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6E34
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6E38
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6E3C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6E40
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 801D6E44
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6E48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6E4C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6E50
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6E54
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 801D6E58
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6E5C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6E60
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6E64
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6E68
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 801D6E6C
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 801D6E70
  c->r[7]=c->r[7]+0x000000A0u; // 801D6E74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6E78
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6E7C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6E80
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6E84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6D60; } // 801D6E88
L_801D6E8C:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 801D6E8C
  c->r[0]=c->r[3]-c->r[4]; // 801D6E90
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6E94
  {uint32_t ea=c->r[2]+0xFFFF9D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6E98
  c->r[5]=c->r[6]+c->r[5]; // 801D6E9C
  c->ctr=c->r[0]; // 801D6EA0
  cmpu(c,0,c->r[4],c->r[3]); // 801D6EA4
  if (!crb(c,0)) { goto L_801D6ED8; } // 801D6EA8
L_801D6EAC:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 801D6EAC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 801D6EB0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 801D6EB4
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D6EB8
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 801D6EBC
  c->r[5]=c->r[5]+0x00000014u; // 801D6EC0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D6EC4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D6EC8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D6ECC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D6ED0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6EAC; } // 801D6ED4
L_801D6ED8:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 801D6ED8
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 801D6EDC
  c->r[3]=(rotl(c->r[0],0)&0x00000100u)|(c->r[3]&~0x00000100u); // 801D6EE0
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 801D6EE4
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 801D6EE8
  if (crb(c,2)) { goto L_801D6F2C; } // 801D6EEC
  c->r[6]=R32(c->r[20]+0x00000038u); // 801D6EF0
  c->r[3]=0u+0x00000001u; // 801D6EF4
  c->r[7]=R32(c->r[20]+0x00000040u); // 801D6EF8
  c->r[0]=0u+0x00000000u; // 801D6EFC
  c->r[5]=rotl(c->r[6],8)&0x0000000Fu; // 801D6F00
  c->r[4]=rotl(c->r[6],4)&0x0000000Fu; // 801D6F04
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 801D6F08
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 801D6F0C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801D6F10
  c->r[5]=c->r[6]+c->r[5]; // 801D6F14
  c->r[4]=c->r[7]+c->r[4]; // 801D6F18
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 801D6F1C
  W8(c->r[4]+0x00000001u,c->r[3]); // 801D6F20
  W8(c->r[4]+0x00000002u,c->r[0]); // 801D6F24
  W8(c->r[4]+0x00000003u,c->r[0]); // 801D6F28
L_801D6F2C:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 801D6F2C
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 801D6F30
  c->r[3]=(rotl(c->r[0],0)&0x00000080u)|(c->r[3]&~0x00000080u); // 801D6F34
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 801D6F38
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 801D6F3C
  if (crb(c,2)) { goto L_801D6F78; } // 801D6F40
  c->r[5]=R32(c->r[20]+0x00000038u); // 801D6F44
  c->r[8]=0u+0xFFFFFFFFu; // 801D6F48
  c->r[7]=R32(c->r[20]+0x00000040u); // 801D6F4C
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 801D6F50
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 801D6F54
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D6F58
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 801D6F5C
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 801D6F60
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D6F64
  c->r[0]=c->r[6]+c->r[5]; // 801D6F68
  c->r[0]=c->r[7]+c->r[0]; // 801D6F6C
  c->r[3]=c->r[4]+c->r[3]; // 801D6F70
  W32(c->r[3]+c->r[0],c->r[8]); // 801D6F74
L_801D6F78:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 801D6F78
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 801D6F7C
  c->r[3]=(rotl(c->r[0],0)&0x00004000u)|(c->r[3]&~0x00004000u); // 801D6F80
  c->r[0]=rotl(c->r[3],18)&0x00000001u; cr0(c,c->r[0]); // 801D6F84
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 801D6F88
  if (crb(c,2)) { goto L_801D6FE4; } // 801D6F8C
  c->r[9]=R32(c->r[20]+0x00000038u); // 801D6F90
  c->r[5]=0u+0x000000E4u; // 801D6F94
  c->r[10]=R32(c->r[20]+0x00000040u); // 801D6F98
  c->r[4]=0u+0x000000C0u; // 801D6F9C
  c->r[3]=rotl(c->r[9],8)&0x0000000Fu; // 801D6FA0
  c->r[0]=rotl(c->r[9],4)&0x0000000Fu; // 801D6FA4
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D6FA8
  c->r[7]=rotl(c->r[9],27)&0x00000004u; // 801D6FAC
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 801D6FB0
  c->r[9]=rotl(c->r[9],14)&0x0000003Cu; // 801D6FB4
  c->r[6]=c->r[7]+c->r[6]; // 801D6FB8
  c->r[3]=0u+0x000000D5u; // 801D6FBC
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D6FC0
  c->r[0]=0u+0x000000EAu; // 801D6FC4
  c->r[6]=c->r[9]+c->r[6]; // 801D6FC8
  c->r[7]=c->r[8]+c->r[7]; // 801D6FCC
  c->r[6]=c->r[10]+c->r[6]; // 801D6FD0
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 801D6FD4
  W8(c->r[6]+0x00000001u,c->r[4]); // 801D6FD8
  W8(c->r[6]+0x00000002u,c->r[3]); // 801D6FDC
  W8(c->r[6]+0x00000003u,c->r[0]); // 801D6FE0
L_801D6FE4:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 801D6FE4
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 801D6FE8
  c->r[3]=(rotl(c->r[0],0)&0x00000040u)|(c->r[3]&~0x00000040u); // 801D6FEC
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 801D6FF0
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 801D6FF4
  if (crb(c,2)) { goto L_801D7050; } // 801D6FF8
  c->r[6]=R32(c->r[20]+0x00000038u); // 801D6FFC
  c->r[3]=0u+0x00000077u; // 801D7000
  c->r[11]=R32(c->r[20]+0x00000040u); // 801D7004
  c->r[0]=0u+0x00000000u; // 801D7008
  c->r[5]=rotl(c->r[6],8)&0x0000000Fu; // 801D700C
  c->r[4]=rotl(c->r[6],4)&0x0000000Fu; // 801D7010
  c->r[10]=rotl(c->r[6],20)&0x00000004u; // 801D7014
  c->r[7]=rotl(c->r[6],14)&0x0000003Cu; // 801D7018
  c->r[9]=rotl(c->r[6],27)&0x00000004u; // 801D701C
  c->r[8]=rotl(c->r[6],26)&0x00000004u; // 801D7020
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 801D7024
  c->r[7]=c->r[10]+c->r[7]; // 801D7028
  c->r[8]=c->r[9]+c->r[8]; // 801D702C
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801D7030
  c->r[4]=c->r[8]+c->r[7]; // 801D7034
  c->r[4]=c->r[11]+c->r[4]; // 801D7038
  c->r[5]=c->r[6]+c->r[5]; // 801D703C
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 801D7040
  W8(c->r[4]+0x00000001u,c->r[0]); // 801D7044
  W8(c->r[4]+0x00000002u,c->r[0]); // 801D7048
  W8(c->r[4]+0x00000003u,c->r[0]); // 801D704C
L_801D7050:;
  c->r[0]=R32(c->r[20]+0x00000038u); // 801D7050
  c->r[3]=R32(c->r[20]+0x0000003Cu); // 801D7054
  c->r[3]=(rotl(c->r[0],0)&0x00000020u)|(c->r[3]&~0x00000020u); // 801D7058
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 801D705C
  W32(c->r[20]+0x0000003Cu,c->r[3]); // 801D7060
  if (crb(c,2)) { goto L_801D70CC; } // 801D7064
  c->r[7]=R32(c->r[20]+0x00000038u); // 801D7068
  c->r[5]=0u+0x00000001u; // 801D706C
  c->r[11]=R32(c->r[20]+0x00000040u); // 801D7070
  c->r[4]=0u+0x00000004u; // 801D7074
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 801D7078
  c->r[0]=rotl(c->r[7],4)&0x0000000Fu; // 801D707C
  c->r[8]=rotl(c->r[7],27)&0x00000004u; // 801D7080
  c->r[6]=rotl(c->r[7],26)&0x00000004u; // 801D7084
  c->r[6]=c->r[8]+c->r[6]; // 801D7088
  c->r[10]=rotl(c->r[7],28)&0x00000004u; // 801D708C
  c->r[9]=rotl(c->r[7],20)&0x00000004u; // 801D7090
  c->r[7]=rotl(c->r[7],14)&0x0000003Cu; // 801D7094
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7098
  c->r[6]=c->r[10]+c->r[6]; // 801D709C
  c->r[9]=c->r[9]+c->r[7]; // 801D70A0
  c->r[3]=0u+0x00000005u; // 801D70A4
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D70A8
  c->r[6]=c->r[9]+c->r[6]; // 801D70AC
  c->r[0]=0u+0x0000000Fu; // 801D70B0
  c->r[6]=c->r[11]+c->r[6]; // 801D70B4
  c->r[7]=c->r[8]+c->r[7]; // 801D70B8
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 801D70BC
  W8(c->r[6]+0x00000001u,c->r[4]); // 801D70C0
  W8(c->r[6]+0x00000002u,c->r[3]); // 801D70C4
  W8(c->r[6]+0x00000003u,c->r[0]); // 801D70C8
L_801D70CC:;
  c->r[11]=c->r[1]+0x00000060u; // 801D70CC
  c->lr=0x801D70D4u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D70D0
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D70D4
  c->lr=c->r[0]; // 801D70D8
  c->r[1]=c->r[1]+0x00000060u; // 801D70DC
  return; // 801D70E0
}

// GetTexMapAry__Q34nw4r3lyt8MaterialCFv
void f_801D70E4(Ctx* __restrict c) {
  trace_call(0x801D70E4u);
  c->r[3]=R32(c->r[3]+0x00000040u); // 801D70E4
  return; // 801D70E8
}

// GetTexSRTAry__Q34nw4r3lyt8MaterialFv
void f_801D70EC(Ctx* __restrict c) {
  trace_call(0x801D70ECu);
  c->r[0]=R32(c->r[3]+0x00000038u); // 801D70EC
  c->r[3]=R32(c->r[3]+0x00000040u); // 801D70F0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D70F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D70F8
  c->r[3]=c->r[3]+c->r[0]; // 801D70FC
  return; // 801D7100
}

// GetTexCoordGenAry__Q34nw4r3lyt8MaterialFv
void f_801D7104(Ctx* __restrict c) {
  trace_call(0x801D7104u);
  c->r[0]=R32(c->r[3]+0x00000038u); // 801D7104
  c->r[5]=R32(c->r[3]+0x00000040u); // 801D7108
  c->r[3]=rotl(c->r[0],8)&0x0000000Fu; // 801D710C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D7110
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7114
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7118
  c->r[0]=c->r[5]+c->r[4]; // 801D711C
  c->r[3]=c->r[3]+c->r[0]; // 801D7120
  return; // 801D7124
}

// GetChanCtrlAry__Q34nw4r3lyt8MaterialFv
void f_801D7128(Ctx* __restrict c) {
  trace_call(0x801D7128u);
  c->r[4]=R32(c->r[3]+0x00000038u); // 801D7128
  c->r[5]=R32(c->r[3]+0x00000040u); // 801D712C
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 801D7130
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 801D7134
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7138
  c->r[4]=rotl(c->r[4],14)&0x0000003Cu; // 801D713C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7140
  c->r[0]=c->r[5]+c->r[0]; // 801D7144
  c->r[3]=c->r[4]+c->r[3]; // 801D7148
  c->r[3]=c->r[3]+c->r[0]; // 801D714C
  return; // 801D7150
}

// GetMatColAry__Q34nw4r3lyt8MaterialFv
void f_801D7154(Ctx* __restrict c) {
  trace_call(0x801D7154u);
  c->r[5]=R32(c->r[3]+0x00000038u); // 801D7154
  c->r[7]=R32(c->r[3]+0x00000040u); // 801D7158
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 801D715C
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 801D7160
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7164
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 801D7168
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 801D716C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7170
  c->r[0]=c->r[6]+c->r[5]; // 801D7174
  c->r[0]=c->r[7]+c->r[0]; // 801D7178
  c->r[3]=c->r[4]+c->r[3]; // 801D717C
  c->r[3]=c->r[3]+c->r[0]; // 801D7180
  return; // 801D7184
}

// GetTevSwapAry__Q34nw4r3lyt8MaterialFv
void f_801D7188(Ctx* __restrict c) {
  trace_call(0x801D7188u);
  c->r[6]=R32(c->r[3]+0x00000038u); // 801D7188
  c->r[8]=R32(c->r[3]+0x00000040u); // 801D718C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 801D7190
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 801D7194
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7198
  c->r[7]=rotl(c->r[6],27)&0x00000004u; // 801D719C
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 801D71A0
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 801D71A4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D71A8
  c->r[5]=c->r[7]+c->r[5]; // 801D71AC
  c->r[0]=c->r[6]+c->r[5]; // 801D71B0
  c->r[0]=c->r[8]+c->r[0]; // 801D71B4
  c->r[3]=c->r[4]+c->r[3]; // 801D71B8
  c->r[3]=c->r[3]+c->r[0]; // 801D71BC
  return; // 801D71C0
}

// GetAlphaComparePtr__Q34nw4r3lyt8MaterialFv
void f_801D71C4(Ctx* __restrict c) {
  trace_call(0x801D71C4u);
  c->r[4]=R32(c->r[3]+0x00000038u); // 801D71C4
  c->r[9]=R32(c->r[3]+0x00000040u); // 801D71C8
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 801D71CC
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 801D71D0
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 801D71D4
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 801D71D8
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 801D71DC
  c->r[6]=rotl(c->r[4],26)&0x00000004u; // 801D71E0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D71E4
  c->r[5]=c->r[8]+c->r[5]; // 801D71E8
  c->r[6]=c->r[7]+c->r[6]; // 801D71EC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D71F0
  c->r[0]=c->r[6]+c->r[5]; // 801D71F4
  c->r[0]=c->r[9]+c->r[0]; // 801D71F8
  c->r[3]=c->r[4]+c->r[3]; // 801D71FC
  c->r[3]=c->r[3]+c->r[0]; // 801D7200
  return; // 801D7204
}

// GetBlendModePtr__Q34nw4r3lyt8MaterialFv
void f_801D7208(Ctx* __restrict c) {
  trace_call(0x801D7208u);
  c->r[6]=R32(c->r[3]+0x00000038u); // 801D7208
  c->r[9]=R32(c->r[3]+0x00000040u); // 801D720C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 801D7210
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 801D7214
  c->r[5]=rotl(c->r[6],27)&0x00000004u; // 801D7218
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 801D721C
  c->r[5]=c->r[5]+c->r[4]; // 801D7220
  c->r[8]=rotl(c->r[6],28)&0x00000004u; // 801D7224
  c->r[7]=rotl(c->r[6],20)&0x00000004u; // 801D7228
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 801D722C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7230
  c->r[5]=c->r[8]+c->r[5]; // 801D7234
  c->r[6]=c->r[7]+c->r[6]; // 801D7238
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D723C
  c->r[0]=c->r[6]+c->r[5]; // 801D7240
  c->r[0]=c->r[9]+c->r[0]; // 801D7244
  c->r[3]=c->r[4]+c->r[3]; // 801D7248
  c->r[3]=c->r[3]+c->r[0]; // 801D724C
  return; // 801D7250
}

// GetIndirectStageAry__Q34nw4r3lyt8MaterialFv
void f_801D7254(Ctx* __restrict c) {
  trace_call(0x801D7254u);
  c->r[8]=R32(c->r[3]+0x00000038u); // 801D7254
  c->r[9]=R32(c->r[3]+0x00000040u); // 801D7258
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 801D725C
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 801D7260
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 801D7264
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 801D7268
  c->r[4]=c->r[5]+c->r[4]; // 801D726C
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 801D7270
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7274
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 801D7278
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 801D727C
  c->r[4]=c->r[7]+c->r[4]; // 801D7280
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7284
  c->r[5]=c->r[6]+c->r[5]; // 801D7288
  c->r[6]=rotl(c->r[8],29)&0x00000004u; // 801D728C
  c->r[0]=c->r[3]+c->r[0]; // 801D7290
  c->r[3]=c->r[5]+c->r[4]; // 801D7294
  c->r[3]=c->r[6]+c->r[3]; // 801D7298
  c->r[0]=c->r[9]+c->r[0]; // 801D729C
  c->r[3]=c->r[3]+c->r[0]; // 801D72A0
  return; // 801D72A4
}

// GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv
void f_801D72A8(Ctx* __restrict c) {
  trace_call(0x801D72A8u);
  c->r[10]=R32(c->r[3]+0x00000038u); // 801D72A8
  c->r[11]=R32(c->r[3]+0x00000040u); // 801D72AC
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 801D72B0
  c->r[0]=rotl(c->r[10],4)&0x0000000Fu; // 801D72B4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D72B8
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 801D72BC
  c->r[5]=rotl(c->r[10],26)&0x00000004u; // 801D72C0
  c->r[8]=rotl(c->r[10],28)&0x00000004u; // 801D72C4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D72C8
  c->r[5]=c->r[6]+c->r[5]; // 801D72CC
  c->r[7]=rotl(c->r[10],20)&0x00000004u; // 801D72D0
  c->r[6]=rotl(c->r[10],14)&0x0000003Cu; // 801D72D4
  c->r[9]=rotl(c->r[10],19)&0x0000001Cu; // 801D72D8
  c->r[0]=rotl(c->r[10],29)&0x00000004u; // 801D72DC
  c->r[0]=c->r[9]+c->r[0]; // 801D72E0
  c->r[6]=c->r[7]+c->r[6]; // 801D72E4
  c->r[5]=c->r[8]+c->r[5]; // 801D72E8
  c->r[3]=c->r[4]+c->r[3]; // 801D72EC
  c->r[4]=c->r[6]+c->r[5]; // 801D72F0
  c->r[0]=c->r[11]+c->r[0]; // 801D72F4
  c->r[3]=c->r[4]+c->r[3]; // 801D72F8
  c->r[3]=c->r[3]+c->r[0]; // 801D72FC
  return; // 801D7300
}

// GetTevStageAry__Q34nw4r3lyt8MaterialFv
void f_801D7304(Ctx* __restrict c) {
  trace_call(0x801D7304u);
  c->r[7]=R32(c->r[3]+0x00000038u); // 801D7304
  c->r[8]=R32(c->r[3]+0x00000040u); // 801D7308
  c->r[3]=rotl(c->r[7],14)&0x00000003u; // 801D730C
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 801D7310
  c->r[3]=c->r[3]+c->r[0]; // 801D7314
  c->r[5]=rotl(c->r[7],4)&0x0000000Fu; // 801D7318
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D731C
  c->r[4]=rotl(c->r[7],14)&0x0000003Cu; // 801D7320
  c->r[0]=rotl(c->r[7],26)&0x00000004u; // 801D7324
  c->r[3]=rotl(c->r[7],27)&0x00000004u; // 801D7328
  c->r[0]=c->r[4]+c->r[0]; // 801D732C
  c->r[4]=rotl(c->r[7],20)&0x00000004u; // 801D7330
  c->r[0]=c->r[3]+c->r[0]; // 801D7334
  c->r[3]=rotl(c->r[7],28)&0x00000004u; // 801D7338
  c->r[0]=c->r[4]+c->r[0]; // 801D733C
  c->r[4]=rotl(c->r[7],29)&0x00000004u; // 801D7340
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 801D7344
  c->r[0]=c->r[3]+c->r[0]; // 801D7348
  c->r[3]=rotl(c->r[7],19)&0x0000001Cu; // 801D734C
  c->r[5]=c->r[6]+c->r[5]; // 801D7350
  c->r[0]=c->r[5]+c->r[0]; // 801D7354
  c->r[3]=c->r[4]+c->r[3]; // 801D7358
  c->r[0]=c->r[8]+c->r[0]; // 801D735C
  c->r[3]=c->r[3]+c->r[0]; // 801D7360
  return; // 801D7364
}

// SetName__Q34nw4r3lyt8MaterialFPCc
void f_801D7368(Ctx* __restrict c) {
  trace_call(0x801D7368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7368
  c->r[0]=c->lr; // 801D736C
  c->r[5]=0u+0x00000014u; // 801D7370
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7374
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7378
  c->r[31]=c->r[3]|c->r[3]; // 801D737C
  c->r[3]=c->r[3]+0x00000044u; // 801D7380
  c->lr=0x801D7388u; f_801141CC(c); // 801D7384
  c->r[0]=0u+0x00000000u; // 801D7388
  W8(c->r[31]+0x00000058u,c->r[0]); // 801D738C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7390
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7394
  c->lr=c->r[0]; // 801D7398
  c->r[1]=c->r[1]+0x00000010u; // 801D739C
  return; // 801D73A0
}

// SetTextureNum__Q34nw4r3lyt8MaterialFUc
void f_801D73A4(Ctx* __restrict c) {
  trace_call(0x801D73A4u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D73A4
  if (crb(c,2)) { goto L_801D7424; } // 801D73A8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D73AC
  c->r[6]=0u+0x00000000u; // 801D73B0
  c->r[8]=R32(c->r[3]+0x00000040u); // 801D73B4
  c->r[5]=0u+0x00000001u; // 801D73B8
  c->r[9]=rotl(c->r[0],4)&0x0000000Fu; // 801D73BC
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D73C0
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)28); // 801D73C4
  c->r[0]=c->r[4]-c->r[9]; // 801D73C8
  c->r[7]=c->r[8]+c->r[7]; // 801D73CC
  c->ctr=c->r[0]; // 801D73D0
  cmpu(c,0,c->r[9],c->r[4]); // 801D73D4
  if (!crb(c,0)) { goto L_801D7424; } // 801D73D8
L_801D73DC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801D73DC
  if (crb(c,2)) { goto L_801D741C; } // 801D73E0
  W32(c->r[7]+0x00000000u,c->r[6]); // 801D73E4
  W16(c->r[7]+0x00000008u,c->r[6]); // 801D73E8
  W16(c->r[7]+0x0000000Au,c->r[6]); // 801D73EC
  c->r[0]=R32(c->r[7]+0x00000018u); // 801D73F0
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D73F4
  c->r[0]=rotl(c->r[0],0)&0x007FFFFFu; // 801D73F8
  c->r[0]=(rotl(c->r[5],20)&0x00700000u)|(c->r[0]&~0x00700000u); // 801D73FC
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 801D7400
  c->r[0]=c->r[0]|0x00080000u; // 801D7404
  c->r[0]=rotl(c->r[0],0)&0xFFF81FFFu; // 801D7408
  W16(c->r[7]+0x00000014u,c->r[6]); // 801D740C
  W32(c->r[7]+0x00000004u,c->r[6]); // 801D7410
  W32(c->r[7]+0x00000018u,c->r[0]); // 801D7414
  W16(c->r[7]+0x00000016u,c->r[6]); // 801D7418
L_801D741C:;
  c->r[7]=c->r[7]+0x0000001Cu; // 801D741C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D73DC; } // 801D7420
L_801D7424:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D7424
  c->r[0]=(rotl(c->r[4],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 801D7428
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801D742C
  return; // 801D7430
}

// SetTexCoordGenNum__Q34nw4r3lyt8MaterialFUc
void f_801D7434(Ctx* __restrict c) {
  trace_call(0x801D7434u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D7434
  if (crb(c,2)) { goto L_801D74AC; } // 801D7438
  c->r[0]=R32(c->r[3]+0x00000038u); // 801D743C
  c->r[8]=0u+0x00000000u; // 801D7440
  c->r[9]=R32(c->r[3]+0x0000003Cu); // 801D7444
  c->r[7]=0u+0x00000001u; // 801D7448
  c->r[5]=rotl(c->r[0],8)&0x0000000Fu; // 801D744C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D7450
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 801D7454
  c->r[6]=R32(c->r[3]+0x00000040u); // 801D7458
  c->r[11]=rotl(c->r[9],12)&0x0000000Fu; // 801D745C
  c->r[10]=rotl(c->r[9],14)&0x0000003Cu; // 801D7460
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7464
  c->r[0]=c->r[4]-c->r[11]; // 801D7468
  c->r[5]=c->r[6]+c->r[5]; // 801D746C
  c->r[6]=0u+0x00000004u; // 801D7470
  c->r[9]=c->r[9]+c->r[5]; // 801D7474
  c->r[5]=0u+0x0000003Cu; // 801D7478
  c->r[9]=c->r[10]+c->r[9]; // 801D747C
  c->ctr=c->r[0]; // 801D7480
  cmpu(c,0,c->r[11],c->r[4]); // 801D7484
  if (!crb(c,0)) { goto L_801D74AC; } // 801D7488
L_801D748C:;
  cmps(c,0,(int32_t)c->r[9],0); // 801D748C
  if (crb(c,2)) { goto L_801D74A4; } // 801D7490
  W8(c->r[9]+0x00000003u,c->r[8]); // 801D7494
  W8(c->r[9]+0x00000000u,c->r[7]); // 801D7498
  W8(c->r[9]+0x00000001u,c->r[6]); // 801D749C
  W8(c->r[9]+0x00000002u,c->r[5]); // 801D74A0
L_801D74A4:;
  c->r[9]=c->r[9]+0x00000004u; // 801D74A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D748C; } // 801D74A8
L_801D74AC:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D74AC
  c->r[0]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 801D74B0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801D74B4
  return; // 801D74B8
}

// SetTevStageNum__Q34nw4r3lyt8MaterialFUc
void f_801D74BC(Ctx* __restrict c) {
  trace_call(0x801D74BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D74BC
  cmps(c,0,(int32_t)c->r[4],0); // 801D74C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D74C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D74C8
  if (crb(c,2)) { goto L_801D75C0; } // 801D74CC
  c->r[10]=R32(c->r[3]+0x00000038u); // 801D74D0
  c->r[31]=0u+0x000000FFu; // 801D74D4
  c->r[30]=R32(c->r[3]+0x0000003Cu); // 801D74D8
  c->r[12]=0u+0x00000004u; // 801D74DC
  c->r[5]=rotl(c->r[10],14)&0x00000003u; // 801D74E0
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 801D74E4
  c->r[5]=c->r[5]+c->r[0]; // 801D74E8
  c->r[8]=rotl(c->r[10],4)&0x0000000Fu; // 801D74EC
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 801D74F0
  c->r[6]=rotl(c->r[10],14)&0x0000003Cu; // 801D74F4
  c->r[0]=rotl(c->r[10],26)&0x00000004u; // 801D74F8
  c->r[11]=R32(c->r[3]+0x00000040u); // 801D74FC
  c->r[5]=rotl(c->r[10],27)&0x00000004u; // 801D7500
  c->r[0]=c->r[6]+c->r[0]; // 801D7504
  c->r[5]=c->r[5]+c->r[0]; // 801D7508
  c->r[7]=rotl(c->r[10],20)&0x00000004u; // 801D750C
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)28); // 801D7510
  c->r[6]=rotl(c->r[10],28)&0x00000004u; // 801D7514
  c->r[5]=c->r[7]+c->r[5]; // 801D7518
  c->r[0]=rotl(c->r[30],23)&0x0000001Fu; // 801D751C
  c->r[7]=c->r[9]+c->r[8]; // 801D7520
  c->r[6]=c->r[6]+c->r[5]; // 801D7524
  c->r[6]=c->r[7]+c->r[6]; // 801D7528
  c->r[8]=rotl(c->r[10],29)&0x00000004u; // 801D752C
  c->r[5]=rotl(c->r[10],19)&0x0000001Cu; // 801D7530
  c->r[7]=rotl(c->r[30],27)&0x000001F0u; // 801D7534
  c->r[8]=c->r[8]+c->r[5]; // 801D7538
  c->r[6]=c->r[11]+c->r[6]; // 801D753C
  c->r[6]=c->r[8]+c->r[6]; // 801D7540
  c->r[5]=c->r[4]-c->r[0]; // 801D7544
  c->r[30]=c->r[7]+c->r[6]; // 801D7548
  c->r[11]=0u+0x00000000u; // 801D754C
  c->r[10]=0u+0x000000AFu; // 801D7550
  c->r[9]=0u+0x00000077u; // 801D7554
  c->r[8]=0u+0x00000057u; // 801D7558
  c->r[7]=0u+0x00000061u; // 801D755C
  c->r[6]=0u+0x00000081u; // 801D7560
  c->ctr=c->r[5]; // 801D7564
  cmpu(c,0,c->r[0],c->r[4]); // 801D7568
  if (!crb(c,0)) { goto L_801D75C0; } // 801D756C
L_801D7570:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D7570
  if (crb(c,2)) { goto L_801D75B8; } // 801D7574
  W8(c->r[30]+0x00000000u,c->r[31]); // 801D7578
  W8(c->r[30]+0x00000001u,c->r[12]); // 801D757C
  W8(c->r[30]+0x00000002u,c->r[31]); // 801D7580
  W8(c->r[30]+0x00000003u,c->r[11]); // 801D7584
  W8(c->r[30]+0x00000004u,c->r[31]); // 801D7588
  W8(c->r[30]+0x00000005u,c->r[10]); // 801D758C
  W8(c->r[30]+0x00000008u,c->r[9]); // 801D7590
  W8(c->r[30]+0x00000009u,c->r[8]); // 801D7594
  W8(c->r[30]+0x00000006u,c->r[11]); // 801D7598
  W8(c->r[30]+0x00000007u,c->r[7]); // 801D759C
  W8(c->r[30]+0x0000000Au,c->r[11]); // 801D75A0
  W8(c->r[30]+0x0000000Bu,c->r[6]); // 801D75A4
  W8(c->r[30]+0x0000000Cu,c->r[11]); // 801D75A8
  W8(c->r[30]+0x0000000Du,c->r[11]); // 801D75AC
  W8(c->r[30]+0x0000000Eu,c->r[11]); // 801D75B0
  W8(c->r[30]+0x0000000Fu,c->r[11]); // 801D75B4
L_801D75B8:;
  c->r[30]=c->r[30]+0x00000010u; // 801D75B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D7570; } // 801D75BC
L_801D75C0:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D75C0
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 801D75C4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801D75C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D75CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D75D0
  c->r[1]=c->r[1]+0x00000010u; // 801D75D4
  return; // 801D75D8
}

// SetIndStageNum__Q34nw4r3lyt8MaterialFUc
void f_801D75DC(Ctx* __restrict c) {
  trace_call(0x801D75DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D75DC
  cmps(c,0,(int32_t)c->r[4],0); // 801D75E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D75E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D75E8
  if (crb(c,2)) { goto L_801D7684; } // 801D75EC
  c->r[11]=R32(c->r[3]+0x00000038u); // 801D75F0
  c->r[5]=0u+0x00000000u; // 801D75F4
  c->r[31]=R32(c->r[3]+0x0000003Cu); // 801D75F8
  c->r[6]=rotl(c->r[11],8)&0x0000000Fu; // 801D75FC
  c->r[0]=rotl(c->r[11],4)&0x0000000Fu; // 801D7600
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 801D7604
  c->r[8]=rotl(c->r[11],27)&0x00000004u; // 801D7608
  c->r[7]=rotl(c->r[11],26)&0x00000004u; // 801D760C
  c->r[12]=R32(c->r[3]+0x00000040u); // 801D7610
  c->r[10]=rotl(c->r[11],28)&0x00000004u; // 801D7614
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7618
  c->r[8]=c->r[8]+c->r[7]; // 801D761C
  c->r[9]=rotl(c->r[11],20)&0x00000004u; // 801D7620
  c->r[0]=c->r[6]+c->r[0]; // 801D7624
  c->r[7]=rotl(c->r[11],14)&0x0000003Cu; // 801D7628
  c->r[6]=c->r[10]+c->r[8]; // 801D762C
  c->r[8]=rotl(c->r[11],29)&0x00000004u; // 801D7630
  c->r[7]=c->r[9]+c->r[7]; // 801D7634
  c->r[30]=rotl(c->r[31],17)&0x00000007u; // 801D7638
  c->r[6]=c->r[7]+c->r[6]; // 801D763C
  c->r[0]=c->r[12]+c->r[0]; // 801D7640
  c->r[6]=c->r[8]+c->r[6]; // 801D7644
  c->r[7]=rotl(c->r[31],19)&0x0000001Cu; // 801D7648
  c->r[6]=c->r[6]+c->r[0]; // 801D764C
  c->r[0]=c->r[4]-c->r[30]; // 801D7650
  c->r[6]=c->r[7]+c->r[6]; // 801D7654
  c->ctr=c->r[0]; // 801D7658
  cmpu(c,0,c->r[30],c->r[4]); // 801D765C
  if (!crb(c,0)) { goto L_801D7684; } // 801D7660
L_801D7664:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D7664
  if (crb(c,2)) { goto L_801D767C; } // 801D7668
  W8(c->r[6]+0x00000000u,c->r[5]); // 801D766C
  W8(c->r[6]+0x00000001u,c->r[5]); // 801D7670
  W8(c->r[6]+0x00000002u,c->r[5]); // 801D7674
  W8(c->r[6]+0x00000003u,c->r[5]); // 801D7678
L_801D767C:;
  c->r[6]=c->r[6]+0x00000004u; // 801D767C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D7664; } // 801D7680
L_801D7684:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D7684
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 801D7688
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801D768C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7690
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7694
  c->r[1]=c->r[1]+0x00000010u; // 801D7698
  return; // 801D769C
}

// SetColorElement__Q34nw4r3lyt8MaterialFUls
void f_801D76A0(Ctx* __restrict c) {
  trace_call(0x801D76A0u);
  cmps(c,0,(int32_t)c->r[4],16); // 801D76A0
  if (!crb(c,0)) { goto L_801D76BC; } // 801D76A4
  cmps(c,0,(int32_t)c->r[4],4); // 801D76A8
  if (!crb(c,0)) { goto L_801D7774; } // 801D76AC
  cmps(c,0,(int32_t)c->r[4],0); // 801D76B0
  if (!crb(c,0)) { goto L_801D76C8; } // 801D76B4
  return; // 801D76B8
L_801D76BC:;
  cmps(c,0,(int32_t)c->r[4],32); // 801D76BC
  if (!crb(c,0)) return; // 801D76C0
  goto L_801D77E8; // 801D76C4
L_801D76C8:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801D76C8
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 801D76CC
  cmpu(c,0,c->r[0],0x00000001u); // 801D76D0
  if (crb(c,0)) return; // 801D76D4
  c->r[7]=R32(c->r[3]+0x00000038u); // 801D76D8
  c->r[0]=sraw(c,c->r[5],31); // 801D76DC
  c->r[10]=c->r[5]&~c->r[0]; // 801D76E0
  c->r[9]=R32(c->r[3]+0x00000040u); // 801D76E4
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 801D76E8
  c->r[3]=rotl(c->r[7],4)&0x0000000Fu; // 801D76EC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D76F0
  c->r[8]=rotl(c->r[7],26)&0x00000004u; // 801D76F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[10]; // 801D76F8
  c->r[7]=rotl(c->r[7],14)&0x0000003Cu; // 801D76FC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 801D7700
  cmps(c,0,(int32_t)c->r[0],255); // 801D7704
  c->r[0]=c->r[8]+c->r[7]; // 801D7708
  c->r[3]=0u+0x000000FFu; // 801D770C
  c->r[5]=c->r[6]+c->r[5]; // 801D7710
  c->r[0]=c->r[9]+c->r[0]; // 801D7714
  c->r[5]=c->r[5]+c->r[0]; // 801D7718
  if (crb(c,1)) { goto L_801D7724; } // 801D771C
  c->r[3]=c->r[10]|c->r[10]; // 801D7720
L_801D7724:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801D7724
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D7728
  cmps(c,0,(int32_t)c->r[0],2); // 801D772C
  if (crb(c,2)) { goto L_801D7764; } // 801D7730
  if (!crb(c,0)) { goto L_801D7748; } // 801D7734
  cmps(c,0,(int32_t)c->r[0],0); // 801D7738
  if (crb(c,2)) { goto L_801D7754; } // 801D773C
  if (!crb(c,0)) { goto L_801D775C; } // 801D7740
  return; // 801D7744
L_801D7748:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D7748
  if (!crb(c,0)) return; // 801D774C
  goto L_801D776C; // 801D7750
L_801D7754:;
  W8(c->r[5]+0x00000000u,c->r[3]); // 801D7754
  return; // 801D7758
L_801D775C:;
  W8(c->r[5]+0x00000001u,c->r[3]); // 801D775C
  return; // 801D7760
L_801D7764:;
  W8(c->r[5]+0x00000002u,c->r[3]); // 801D7764
  return; // 801D7768
L_801D776C:;
  W8(c->r[5]+0x00000003u,c->r[3]); // 801D776C
  return; // 801D7770
L_801D7774:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 801D7774
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801D7778
  cmps(c,0,(int32_t)c->r[0],2); // 801D777C
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 801D7780
  if (crb(c,2)) { goto L_801D77C8; } // 801D7784
  if (!crb(c,0)) { goto L_801D779C; } // 801D7788
  cmps(c,0,(int32_t)c->r[0],0); // 801D778C
  if (crb(c,2)) { goto L_801D77A8; } // 801D7790
  if (!crb(c,0)) { goto L_801D77B8; } // 801D7794
  return; // 801D7798
L_801D779C:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D779C
  if (!crb(c,0)) return; // 801D77A0
  goto L_801D77D8; // 801D77A4
L_801D77A8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801D77A8
  c->r[3]=c->r[3]+c->r[0]; // 801D77AC
  W16(c->r[3]+0x00000010u,c->r[5]); // 801D77B0
  return; // 801D77B4
L_801D77B8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801D77B8
  c->r[3]=c->r[3]+c->r[0]; // 801D77BC
  W16(c->r[3]+0x00000012u,c->r[5]); // 801D77C0
  return; // 801D77C4
L_801D77C8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801D77C8
  c->r[3]=c->r[3]+c->r[0]; // 801D77CC
  W16(c->r[3]+0x00000014u,c->r[5]); // 801D77D0
  return; // 801D77D4
L_801D77D8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801D77D8
  c->r[3]=c->r[3]+c->r[0]; // 801D77DC
  W16(c->r[3]+0x00000016u,c->r[5]); // 801D77E0
  return; // 801D77E4
L_801D77E8:;
  c->r[0]=sraw(c,c->r[5],31); // 801D77E8
  c->r[6]=c->r[4]+0xFFFFFFF0u; // 801D77EC
  c->r[7]=c->r[5]&~c->r[0]; // 801D77F0
  c->r[5]=0u+0x000000FFu; // 801D77F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801D77F8
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 801D77FC
  cmps(c,0,(int32_t)c->r[0],255); // 801D7800
  if (crb(c,1)) { goto L_801D780C; } // 801D7804
  c->r[5]=c->r[7]|c->r[7]; // 801D7808
L_801D780C:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 801D780C
  c->r[4]=rotl(c->r[5],0)&0x000000FFu; // 801D7810
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 801D7814
  cmps(c,0,(int32_t)c->r[0],2); // 801D7818
  if (crb(c,2)) { goto L_801D7860; } // 801D781C
  if (!crb(c,0)) { goto L_801D7834; } // 801D7820
  cmps(c,0,(int32_t)c->r[0],0); // 801D7824
  if (crb(c,2)) { goto L_801D7840; } // 801D7828
  if (!crb(c,0)) { goto L_801D7850; } // 801D782C
  return; // 801D7830
L_801D7834:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D7834
  if (!crb(c,0)) return; // 801D7838
  goto L_801D7870; // 801D783C
L_801D7840:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D7840
  c->r[3]=c->r[3]+c->r[0]; // 801D7844
  W8(c->r[3]+0x00000028u,c->r[4]); // 801D7848
  return; // 801D784C
L_801D7850:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D7850
  c->r[3]=c->r[3]+c->r[0]; // 801D7854
  W8(c->r[3]+0x00000029u,c->r[4]); // 801D7858
  return; // 801D785C
L_801D7860:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D7860
  c->r[3]=c->r[3]+c->r[0]; // 801D7864
  W8(c->r[3]+0x0000002Au,c->r[4]); // 801D7868
  return; // 801D786C
L_801D7870:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D7870
  c->r[3]=c->r[3]+c->r[0]; // 801D7874
  W8(c->r[3]+0x0000002Bu,c->r[4]); // 801D7878
  return; // 801D787C
}

// SetupGX__Q34nw4r3lyt8MaterialFbUc
void f_801D7880(Ctx* __restrict c) {
  trace_call(0x801D7880u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7880
  c->r[0]=c->lr; // 801D7884
  W32(c->r[1]+0x00000124u,c->r[0]); // 801D7888
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 801D788C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 801D7890
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 801D7894
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 801D7898
  c->r[11]=c->r[1]+0x00000100u; // 801D789C
  c->lr=0x801D78A4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D78A0
  c->r[27]=c->r[3]|c->r[3]; // 801D78A4
  c->r[31]=c->r[4]|c->r[4]; // 801D78A8
  c->r[28]=c->r[5]|c->r[5]; // 801D78AC
  c->r[30]=0u+0x00000001u; // 801D78B0
  c->r[23]=0u+0x00000000u; // 801D78B4
  c->r[3]=0u+0x00000001u; // 801D78B8
  c->lr=0x801D78C0u; f_80106338(c); // 801D78BC
  c->r[4]=R32(c->r[27]+0x00000038u); // 801D78C0
  c->r[0]=rotl(c->r[4],24)&0x00000001u; cr0(c,c->r[0]); // 801D78C4
  if (crb(c,2)) { goto L_801D7970; } // 801D78C8
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 801D78CC
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 801D78D0
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D78D4
  c->r[6]=rotl(c->r[4],14)&0x0000003Cu; // 801D78D8
  c->r[7]=R32(c->r[27]+0x00000040u); // 801D78DC
  c->r[3]=0u+0x00000000u; // 801D78E0
  c->r[4]=0u+0x00000000u; // 801D78E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D78E8
  c->r[6]=c->r[6]+c->r[5]; // 801D78EC
  c->r[5]=0u+0x00000000u; // 801D78F0
  c->r[0]=c->r[7]+c->r[0]; // 801D78F4
  c->r[7]=0u+0x00000000u; // 801D78F8
  c->r[24]=c->r[6]+c->r[0]; // 801D78FC
  c->r[6]=R8(c->r[6]+c->r[0]); // 801D7900
  c->r[8]=0u+0x00000000u; // 801D7904
  c->r[9]=0u+0x00000002u; // 801D7908
  c->lr=0x801D7910u; f_8010635C(c); // 801D790C
  c->r[6]=R8(c->r[24]+0x00000001u); // 801D7910
  c->r[3]=0u+0x00000002u; // 801D7914
  c->r[4]=0u+0x00000000u; // 801D7918
  c->r[5]=0u+0x00000000u; // 801D791C
  c->r[7]=0u+0x00000000u; // 801D7920
  c->r[8]=0u+0x00000000u; // 801D7924
  c->r[9]=0u+0x00000002u; // 801D7928
  c->lr=0x801D7930u; f_8010635C(c); // 801D792C
  c->r[3]=R8(c->r[24]+0x00000000u); // 801D7930
  c->r[30]=0u+0x00000001u; // 801D7934
  cmps(c,0,(int32_t)c->r[3],1); // 801D7938
  if (crb(c,2)) { goto L_801D7950; } // 801D793C
  c->r[0]=R8(c->r[24]+0x00000001u); // 801D7940
  cmps(c,0,(int32_t)c->r[0],1); // 801D7944
  if (crb(c,2)) { goto L_801D7950; } // 801D7948
  c->r[30]=0u+0x00000000u; // 801D794C
L_801D7950:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D7950
  c->r[23]=0u+0x00000000u; // 801D7954
  if (crb(c,2)) { goto L_801D7968; } // 801D7958
  c->r[0]=R8(c->r[24]+0x00000001u); // 801D795C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7960
  if (!crb(c,2)) { goto L_801D7990; } // 801D7964
L_801D7968:;
  c->r[23]=0u+0x00000001u; // 801D7968
  goto L_801D7990; // 801D796C
L_801D7970:;
  c->r[3]=0u+0x00000004u; // 801D7970
  c->r[4]=0u+0x00000000u; // 801D7974
  c->r[5]=0u+0x00000000u; // 801D7978
  c->r[6]=0u+0x00000001u; // 801D797C
  c->r[7]=0u+0x00000000u; // 801D7980
  c->r[8]=0u+0x00000000u; // 801D7984
  c->r[9]=0u+0x00000002u; // 801D7988
  c->lr=0x801D7990u; f_8010635C(c); // 801D798C
L_801D7990:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D7990
  c->r[29]=0u+0x00000000u; // 801D7994
  if (crb(c,2)) { goto L_801D79AC; } // 801D7998
  cmps(c,0,(int32_t)c->r[31],0); // 801D799C
  c->r[29]=0u+0x00000001u; // 801D79A0
  if (!crb(c,2)) { goto L_801D79AC; } // 801D79A4
  c->r[29]=0u+0x00000000u; // 801D79A8
L_801D79AC:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D79AC
  if (crb(c,2)) { goto L_801D7A88; } // 801D79B0
  c->r[5]=R32(c->r[27]+0x00000038u); // 801D79B4
  c->r[0]=0u+0xFFFFFFFFu; // 801D79B8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801D79BC
  c->r[0]=rotl(c->r[5],25)&0x00000001u; cr0(c,c->r[0]); // 801D79C0
  if (crb(c,2)) { goto L_801D7A14; } // 801D79C4
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 801D79C8
  c->r[0]=rotl(c->r[5],4)&0x0000000Fu; // 801D79CC
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D79D0
  c->r[6]=rotl(c->r[5],26)&0x00000004u; // 801D79D4
  c->r[5]=rotl(c->r[5],14)&0x0000003Cu; // 801D79D8
  c->r[7]=R32(c->r[27]+0x00000040u); // 801D79DC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D79E0
  c->r[0]=c->r[6]+c->r[5]; // 801D79E4
  c->r[0]=c->r[7]+c->r[0]; // 801D79E8
  c->r[3]=c->r[4]+c->r[3]; // 801D79EC
  c->r[6]=c->r[3]+c->r[0]; // 801D79F0
  c->r[5]=R8(c->r[3]+c->r[0]); // 801D79F4
  c->r[4]=R8(c->r[6]+0x00000001u); // 801D79F8
  c->r[3]=R8(c->r[6]+0x00000002u); // 801D79FC
  c->r[0]=R8(c->r[6]+0x00000003u); // 801D7A00
  W8(c->r[1]+0x00000030u,c->r[5]); // 801D7A04
  W8(c->r[1]+0x00000031u,c->r[4]); // 801D7A08
  W8(c->r[1]+0x00000032u,c->r[3]); // 801D7A0C
  W8(c->r[1]+0x00000033u,c->r[0]); // 801D7A10
L_801D7A14:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 801D7A14
  c->r[5]=c->r[28]|c->r[28]; // 801D7A18
  c->r[3]=c->r[1]+0x00000024u; // 801D7A1C
  c->r[4]=c->r[1]+0x00000028u; // 801D7A20
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D7A24
  c->lr=0x801D7A2Cu; f_801DAB70(c); // 801D7A28
  c->r[7]=R8(c->r[1]+0x00000024u); // 801D7A2C
  c->r[4]=c->r[1]+0x00000020u; // 801D7A30
  c->r[6]=R8(c->r[1]+0x00000025u); // 801D7A34
  c->r[3]=0u+0x00000004u; // 801D7A38
  c->r[5]=R8(c->r[1]+0x00000026u); // 801D7A3C
  c->r[0]=R8(c->r[1]+0x00000027u); // 801D7A40
  W8(c->r[1]+0x00000030u,c->r[7]); // 801D7A44
  W8(c->r[1]+0x00000031u,c->r[6]); // 801D7A48
  W8(c->r[1]+0x00000032u,c->r[5]); // 801D7A4C
  W8(c->r[1]+0x00000033u,c->r[0]); // 801D7A50
  W8(c->r[1]+0x00000020u,c->r[7]); // 801D7A54
  W8(c->r[1]+0x00000021u,c->r[6]); // 801D7A58
  W8(c->r[1]+0x00000022u,c->r[5]); // 801D7A5C
  W8(c->r[1]+0x00000023u,c->r[0]); // 801D7A60
  c->lr=0x801D7A68u; f_80106260(c); // 801D7A64
  cmps(c,0,(int32_t)c->r[29],0); // 801D7A68
  c->r[29]=0u+0x00000000u; // 801D7A6C
  if (!crb(c,2)) { goto L_801D7A84; } // 801D7A70
  c->r[3]=R32(c->r[1]+0x00000030u); // 801D7A74
  c->r[0]=c->r[3]+0x00010000u; // 801D7A78
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801D7A7C
  if (crb(c,2)) { goto L_801D7A88; } // 801D7A80
L_801D7A84:;
  c->r[29]=0u+0x00000001u; // 801D7A84
L_801D7A88:;
  c->r[31]=0u+0x00000000u; // 801D7A88
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 801D7A8C
  W8(c->r[1]+0x0000005Du,c->r[31]); // 801D7A90
  W8(c->r[1]+0x0000005Eu,c->r[31]); // 801D7A94
  W8(c->r[1]+0x0000005Fu,c->r[31]); // 801D7A98
  W8(c->r[1]+0x00000060u,c->r[31]); // 801D7A9C
  W8(c->r[1]+0x00000061u,c->r[31]); // 801D7AA0
  W8(c->r[1]+0x00000062u,c->r[31]); // 801D7AA4
  W8(c->r[1]+0x00000063u,c->r[31]); // 801D7AA8
  W8(c->r[1]+0x00000064u,c->r[31]); // 801D7AAC
  W8(c->r[1]+0x00000065u,c->r[31]); // 801D7AB0
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D7AB4
  c->r[3]=rotl(c->r[0],12)&0x0000000Fu; // 801D7AB8
  c->lr=0x801D7AC0u; f_80104234(c); // 801D7ABC
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D7AC0
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; cr0(c,c->r[0]); // 801D7AC4
  if (crb(c,2)) { goto L_801D7B60; } // 801D7AC8
  c->r[0]=R32(c->r[27]+0x00000038u); // 801D7ACC
  c->r[3]=0u+0xAAAB0000u; // 801D7AD0
  c->r[5]=R32(c->r[27]+0x00000040u); // 801D7AD4
  c->r[25]=c->r[3]+0xFFFFAAABu; // 801D7AD8
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 801D7ADC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D7AE0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 801D7AE4
  c->r[26]=c->r[1]+0x0000005Cu; // 801D7AE8
  c->r[28]=0u+0x00000000u; // 801D7AEC
  c->r[24]=0u+0x00000001u; // 801D7AF0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7AF4
  c->r[0]=c->r[5]+c->r[4]; // 801D7AF8
  c->r[23]=c->r[3]+c->r[0]; // 801D7AFC
  goto L_801D7B50; // 801D7B00
L_801D7B04:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 801D7B04
  c->r[6]=R8(c->r[23]+0x00000002u); // 801D7B08
  cmps(c,0,(int32_t)c->r[0],1); // 801D7B0C
  if (!crb(c,2)) { goto L_801D7B30; } // 801D7B10
  cmpu(c,0,c->r[6],0x0000003Cu); // 801D7B14
  if (crb(c,2)) { goto L_801D7B30; } // 801D7B18
  c->r[0]=c->r[6]+0xFFFFFFE2u; // 801D7B1C
  c->r[31]=0u+0x00000001u; // 801D7B20
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 801D7B24
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D7B28
  W8(c->r[26]+c->r[0],c->r[24]); // 801D7B2C
L_801D7B30:;
  c->r[4]=R8(c->r[23]+0x00000000u); // 801D7B30
  c->r[3]=c->r[28]|c->r[28]; // 801D7B34
  c->r[5]=R8(c->r[23]+0x00000001u); // 801D7B38
  c->r[7]=0u+0x00000000u; // 801D7B3C
  c->r[8]=0u+0x0000007Du; // 801D7B40
  c->lr=0x801D7B48u; f_8010400C(c); // 801D7B44
  c->r[23]=c->r[23]+0x00000004u; // 801D7B48
  c->r[28]=c->r[28]+0x00000001u; // 801D7B4C
L_801D7B50:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D7B50
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 801D7B54
  cmpu(c,0,c->r[28],c->r[0]); // 801D7B58
  if (crb(c,0)) { IRQCHK(c); goto L_801D7B04; } // 801D7B5C
L_801D7B60:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D7B60
  if (crb(c,2)) { goto L_801D7BDC; } // 801D7B64
  c->r[0]=R32(c->r[27]+0x00000038u); // 801D7B68
  c->r[26]=c->r[1]+0x0000005Cu; // 801D7B6C
  c->r[3]=R32(c->r[27]+0x00000040u); // 801D7B70
  c->r[28]=0u+0x00000000u; // 801D7B74
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D7B78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7B7C
  c->r[23]=c->r[3]+c->r[0]; // 801D7B80
  goto L_801D7BC8; // 801D7B84
L_801D7B88:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801D7B88
  c->r[0]=R8(c->r[26]+c->r[3]); // 801D7B8C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7B90
  if (crb(c,2)) { goto L_801D7BC4; } // 801D7B94
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7B98
  c->r[3]=c->r[1]+0x000000A0u; // 801D7B9C
  c->r[4]=c->r[23]+c->r[0]; // 801D7BA0
  c->lr=0x801D7BA8u; f_801D5ABC(c); // 801D7BA4
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801D7BA8
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 801D7BAC
  c->r[4]=c->r[0]-c->r[3]; // 801D7BB0
  c->r[5]=0u+0x00000001u; // 801D7BB4
  c->r[3]=c->r[1]+0x000000A0u; // 801D7BB8
  c->r[4]=c->r[4]+0x0000001Eu; // 801D7BBC
  c->lr=0x801D7BC4u; f_80108A5C(c); // 801D7BC0
L_801D7BC4:;
  c->r[28]=c->r[28]+0x00000001u; // 801D7BC4
L_801D7BC8:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D7BC8
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801D7BCC
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 801D7BD0
  cmpu(c,0,c->r[3],c->r[0]); // 801D7BD4
  if (crb(c,0)) { IRQCHK(c); goto L_801D7B88; } // 801D7BD8
L_801D7BDC:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D7BDC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D7BE0
  if (crb(c,2)) { goto L_801D7C80; } // 801D7BE4
  c->r[24]=R32(c->r[27]+0x00000040u); // 801D7BE8
  c->r[23]=0u+0x00000000u; // 801D7BEC
  c->r[25]=0u+0x00000010u; // 801D7BF0
  c->r[26]=0u+0x00000000u; // 801D7BF4
  goto L_801D7C70; // 801D7BF8
L_801D7BFC:;
  c->r[3]=c->r[24]|c->r[24]; // 801D7BFC
  c->r[4]=c->r[1]+0x00000080u; // 801D7C00
  c->lr=0x801D7C08u; f_801D8920(c); // 801D7C04
  c->r[0]=R32(c->r[24]+0x00000018u); // 801D7C08
  c->r[3]=rotl(c->r[0],4)&0x0000000Fu; // 801D7C0C
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801D7C10
  cmpu(c,0,c->r[0],0x00000002u); // 801D7C14
  if (crb(c,1)) { goto L_801D7C5C; } // 801D7C18
  cmps(c,0,(int32_t)c->r[3],10); // 801D7C1C
  if (!crb(c,2)) { goto L_801D7C30; } // 801D7C20
  c->r[28]=c->r[25]|c->r[25]; // 801D7C24
  c->r[25]=c->r[25]+0x00000001u; // 801D7C28
  goto L_801D7C38; // 801D7C2C
L_801D7C30:;
  c->r[28]=c->r[23]|c->r[23]; // 801D7C30
  c->r[23]=c->r[23]+0x00000001u; // 801D7C34
L_801D7C38:;
  c->r[4]=c->r[28]|c->r[28]; // 801D7C38
  c->r[3]=c->r[1]+0x00000080u; // 801D7C3C
  c->lr=0x801D7C44u; f_80106950(c); // 801D7C40
  c->r[3]=c->r[24]|c->r[24]; // 801D7C44
  c->r[4]=c->r[1]+0x00000050u; // 801D7C48
  c->lr=0x801D7C50u; f_801D8A0C(c); // 801D7C4C
  c->r[4]=c->r[28]|c->r[28]; // 801D7C50
  c->r[3]=c->r[1]+0x00000050u; // 801D7C54
  c->lr=0x801D7C5Cu; f_80106CB0(c); // 801D7C58
L_801D7C5C:;
  c->r[4]=c->r[26]|c->r[26]; // 801D7C5C
  c->r[3]=c->r[1]+0x00000080u; // 801D7C60
  c->lr=0x801D7C68u; f_80106C34(c); // 801D7C64
  c->r[24]=c->r[24]+0x0000001Cu; // 801D7C68
  c->r[26]=c->r[26]+0x00000001u; // 801D7C6C
L_801D7C70:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D7C70
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D7C74
  cmpu(c,0,c->r[26],c->r[0]); // 801D7C78
  if (crb(c,0)) { IRQCHK(c); goto L_801D7BFC; } // 801D7C7C
L_801D7C80:;
  c->r[5]=R16(c->r[27]+0x00000010u); // 801D7C80
  c->r[4]=c->r[1]+0x00000048u; // 801D7C84
  c->r[0]=R16(c->r[27]+0x00000012u); // 801D7C88
  c->r[3]=0u+0x00000001u; // 801D7C8C
  W16(c->r[1]+0x00000048u,c->r[5]); // 801D7C90
  W16(c->r[1]+0x0000004Au,c->r[0]); // 801D7C94
  c->r[5]=R16(c->r[27]+0x00000014u); // 801D7C98
  c->r[0]=R16(c->r[27]+0x00000016u); // 801D7C9C
  W16(c->r[1]+0x0000004Cu,c->r[5]); // 801D7CA0
  W16(c->r[1]+0x0000004Eu,c->r[0]); // 801D7CA4
  c->lr=0x801D7CACu; f_80107A44(c); // 801D7CA8
  c->r[5]=R16(c->r[27]+0x00000018u); // 801D7CAC
  c->r[4]=c->r[1]+0x00000040u; // 801D7CB0
  c->r[0]=R16(c->r[27]+0x0000001Au); // 801D7CB4
  c->r[3]=0u+0x00000002u; // 801D7CB8
  W16(c->r[1]+0x00000040u,c->r[5]); // 801D7CBC
  W16(c->r[1]+0x00000042u,c->r[0]); // 801D7CC0
  c->r[5]=R16(c->r[27]+0x0000001Cu); // 801D7CC4
  c->r[0]=R16(c->r[27]+0x0000001Eu); // 801D7CC8
  W16(c->r[1]+0x00000044u,c->r[5]); // 801D7CCC
  W16(c->r[1]+0x00000046u,c->r[0]); // 801D7CD0
  c->lr=0x801D7CD8u; f_80107A44(c); // 801D7CD4
  c->r[5]=R16(c->r[27]+0x00000020u); // 801D7CD8
  c->r[4]=c->r[1]+0x00000038u; // 801D7CDC
  c->r[0]=R16(c->r[27]+0x00000022u); // 801D7CE0
  c->r[3]=0u+0x00000003u; // 801D7CE4
  W16(c->r[1]+0x00000038u,c->r[5]); // 801D7CE8
  W16(c->r[1]+0x0000003Au,c->r[0]); // 801D7CEC
  c->r[5]=R16(c->r[27]+0x00000024u); // 801D7CF0
  c->r[0]=R16(c->r[27]+0x00000026u); // 801D7CF4
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 801D7CF8
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 801D7CFC
  c->lr=0x801D7D04u; f_80107A44(c); // 801D7D00
  c->r[0]=R8(c->r[27]+0x00000028u); // 801D7D04
  c->r[4]=c->r[1]+0x0000001Cu; // 801D7D08
  c->r[3]=0u+0x00000000u; // 801D7D0C
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801D7D10
  c->r[0]=R8(c->r[27]+0x00000029u); // 801D7D14
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801D7D18
  c->r[0]=R8(c->r[27]+0x0000002Au); // 801D7D1C
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801D7D20
  c->r[0]=R8(c->r[27]+0x0000002Bu); // 801D7D24
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 801D7D28
  c->lr=0x801D7D30u; f_80107AA8(c); // 801D7D2C
  c->r[0]=R8(c->r[27]+0x0000002Cu); // 801D7D30
  c->r[4]=c->r[1]+0x00000018u; // 801D7D34
  c->r[3]=0u+0x00000001u; // 801D7D38
  W8(c->r[1]+0x00000018u,c->r[0]); // 801D7D3C
  c->r[0]=R8(c->r[27]+0x0000002Du); // 801D7D40
  W8(c->r[1]+0x00000019u,c->r[0]); // 801D7D44
  c->r[0]=R8(c->r[27]+0x0000002Eu); // 801D7D48
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801D7D4C
  c->r[0]=R8(c->r[27]+0x0000002Fu); // 801D7D50
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801D7D54
  c->lr=0x801D7D5Cu; f_80107AA8(c); // 801D7D58
  c->r[0]=R8(c->r[27]+0x00000030u); // 801D7D5C
  c->r[4]=c->r[1]+0x00000014u; // 801D7D60
  c->r[3]=0u+0x00000002u; // 801D7D64
  W8(c->r[1]+0x00000014u,c->r[0]); // 801D7D68
  c->r[0]=R8(c->r[27]+0x00000031u); // 801D7D6C
  W8(c->r[1]+0x00000015u,c->r[0]); // 801D7D70
  c->r[0]=R8(c->r[27]+0x00000032u); // 801D7D74
  W8(c->r[1]+0x00000016u,c->r[0]); // 801D7D78
  c->r[0]=R8(c->r[27]+0x00000033u); // 801D7D7C
  W8(c->r[1]+0x00000017u,c->r[0]); // 801D7D80
  c->lr=0x801D7D88u; f_80107AA8(c); // 801D7D84
  c->r[0]=R8(c->r[27]+0x00000034u); // 801D7D88
  c->r[4]=c->r[1]+0x00000010u; // 801D7D8C
  c->r[3]=0u+0x00000003u; // 801D7D90
  W8(c->r[1]+0x00000010u,c->r[0]); // 801D7D94
  c->r[0]=R8(c->r[27]+0x00000035u); // 801D7D98
  W8(c->r[1]+0x00000011u,c->r[0]); // 801D7D9C
  c->r[0]=R8(c->r[27]+0x00000036u); // 801D7DA0
  W8(c->r[1]+0x00000012u,c->r[0]); // 801D7DA4
  c->r[0]=R8(c->r[27]+0x00000037u); // 801D7DA8
  W8(c->r[1]+0x00000013u,c->r[0]); // 801D7DAC
  c->lr=0x801D7DB4u; f_80107AA8(c); // 801D7DB0
  c->r[6]=R32(c->r[27]+0x00000038u); // 801D7DB4
  c->r[0]=rotl(c->r[6],18)&0x00000001u; cr0(c,c->r[0]); // 801D7DB8
  if (crb(c,2)) { goto L_801D7E28; } // 801D7DBC
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 801D7DC0
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 801D7DC4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7DC8
  c->r[7]=rotl(c->r[6],27)&0x00000004u; // 801D7DCC
  c->r[5]=rotl(c->r[6],26)&0x00000004u; // 801D7DD0
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 801D7DD4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D7DD8
  c->r[5]=c->r[7]+c->r[5]; // 801D7DDC
  c->r[7]=R32(c->r[27]+0x00000040u); // 801D7DE0
  c->r[23]=0u+0x00000000u; // 801D7DE4
  c->r[0]=c->r[6]+c->r[5]; // 801D7DE8
  c->r[3]=c->r[4]+c->r[3]; // 801D7DEC
  c->r[0]=c->r[7]+c->r[0]; // 801D7DF0
  c->r[28]=c->r[3]+c->r[0]; // 801D7DF4
L_801D7DF8:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801D7DF8
  c->r[3]=c->r[23]|c->r[23]; // 801D7DFC
  c->r[4]=rotl(c->r[0],0)&0x00000003u; // 801D7E00
  c->r[5]=rotl(c->r[0],30)&0x00000003u; // 801D7E04
  c->r[6]=rotl(c->r[0],28)&0x00000003u; // 801D7E08
  c->r[7]=rotl(c->r[0],26)&0x00000003u; // 801D7E0C
  c->lr=0x801D7E14u; f_80107BE0(c); // 801D7E10
  c->r[23]=c->r[23]+0x00000001u; // 801D7E14
  c->r[28]=c->r[28]+0x00000001u; // 801D7E18
  cmps(c,0,(int32_t)c->r[23],4); // 801D7E1C
  if (crb(c,0)) { IRQCHK(c); goto L_801D7DF8; } // 801D7E20
  goto L_801D7E88; // 801D7E24
L_801D7E28:;
  c->r[3]=0u+0x00000000u; // 801D7E28
  c->r[4]=0u+0x00000000u; // 801D7E2C
  c->r[5]=0u+0x00000001u; // 801D7E30
  c->r[6]=0u+0x00000002u; // 801D7E34
  c->r[7]=0u+0x00000003u; // 801D7E38
  c->lr=0x801D7E40u; f_80107BE0(c); // 801D7E3C
  c->r[3]=0u+0x00000001u; // 801D7E40
  c->r[4]=0u+0x00000000u; // 801D7E44
  c->r[5]=0u+0x00000000u; // 801D7E48
  c->r[6]=0u+0x00000000u; // 801D7E4C
  c->r[7]=0u+0x00000003u; // 801D7E50
  c->lr=0x801D7E58u; f_80107BE0(c); // 801D7E54
  c->r[3]=0u+0x00000002u; // 801D7E58
  c->r[4]=0u+0x00000001u; // 801D7E5C
  c->r[5]=0u+0x00000001u; // 801D7E60
  c->r[6]=0u+0x00000001u; // 801D7E64
  c->r[7]=0u+0x00000003u; // 801D7E68
  c->lr=0x801D7E70u; f_80107BE0(c); // 801D7E6C
  c->r[3]=0u+0x00000003u; // 801D7E70
  c->r[4]=0u+0x00000002u; // 801D7E74
  c->r[5]=0u+0x00000002u; // 801D7E78
  c->r[6]=0u+0x00000002u; // 801D7E7C
  c->r[7]=0u+0x00000003u; // 801D7E80
  c->lr=0x801D7E88u; f_80107BE0(c); // 801D7E84
L_801D7E88:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D7E88
  c->r[28]=0u+0x00000000u; // 801D7E8C
  W8(c->r[1]+0x0000002Cu,c->r[28]); // 801D7E90
  c->r[3]=rotl(c->r[0],23)&0x0000001Fu; cr0(c,c->r[3]); // 801D7E94
  W8(c->r[1]+0x0000002Du,c->r[28]); // 801D7E98
  W8(c->r[1]+0x0000002Eu,c->r[28]); // 801D7E9C
  if (crb(c,2)) { goto L_801D8070; } // 801D7EA0
  c->lr=0x801D7EA8u; f_80107E7C(c); // 801D7EA4
  c->r[7]=R32(c->r[27]+0x00000038u); // 801D7EA8
  c->r[26]=c->r[1]+0x0000002Cu; // 801D7EAC
  c->r[8]=R32(c->r[27]+0x00000040u); // 801D7EB0
  c->r[29]=0u+0x00000000u; // 801D7EB4
  c->r[3]=rotl(c->r[7],14)&0x00000003u; // 801D7EB8
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 801D7EBC
  c->r[3]=c->r[3]+c->r[0]; // 801D7EC0
  c->r[5]=rotl(c->r[7],4)&0x0000000Fu; // 801D7EC4
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D7EC8
  c->r[4]=rotl(c->r[7],14)&0x0000003Cu; // 801D7ECC
  c->r[0]=rotl(c->r[7],26)&0x00000004u; // 801D7ED0
  c->r[3]=rotl(c->r[7],27)&0x00000004u; // 801D7ED4
  c->r[0]=c->r[4]+c->r[0]; // 801D7ED8
  c->r[4]=rotl(c->r[7],20)&0x00000004u; // 801D7EDC
  c->r[0]=c->r[3]+c->r[0]; // 801D7EE0
  c->r[3]=rotl(c->r[7],28)&0x00000004u; // 801D7EE4
  c->r[0]=c->r[4]+c->r[0]; // 801D7EE8
  c->r[4]=rotl(c->r[7],29)&0x00000004u; // 801D7EEC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 801D7EF0
  c->r[31]=0u+0x00000001u; // 801D7EF4
  c->r[0]=c->r[3]+c->r[0]; // 801D7EF8
  c->r[3]=rotl(c->r[7],19)&0x0000001Cu; // 801D7EFC
  c->r[5]=c->r[6]+c->r[5]; // 801D7F00
  c->r[0]=c->r[5]+c->r[0]; // 801D7F04
  c->r[3]=c->r[4]+c->r[3]; // 801D7F08
  c->r[0]=c->r[8]+c->r[0]; // 801D7F0C
  c->r[25]=c->r[3]+c->r[0]; // 801D7F10
  goto L_801D8058; // 801D7F14
L_801D7F18:;
  c->r[0]=R8(c->r[25]+0x00000003u); // 801D7F18
  c->r[3]=c->r[29]|c->r[29]; // 801D7F1C
  c->r[5]=R8(c->r[25]+0x00000002u); // 801D7F20
  c->r[4]=R8(c->r[25]+0x00000000u); // 801D7F24
  c->r[5]=(rotl(c->r[0],8)&0x00000100u)|(c->r[5]&~0x00000100u); // 801D7F28
  c->r[6]=R8(c->r[25]+0x00000001u); // 801D7F2C
  c->lr=0x801D7F34u; f_80107D20(c); // 801D7F30
  c->r[0]=R8(c->r[25]+0x00000003u); // 801D7F34
  c->r[3]=c->r[29]|c->r[29]; // 801D7F38
  c->r[4]=rotl(c->r[0],31)&0x00000003u; // 801D7F3C
  c->r[5]=rotl(c->r[0],29)&0x00000003u; // 801D7F40
  c->lr=0x801D7F48u; f_80107BA4(c); // 801D7F44
  c->r[0]=R8(c->r[25]+0x00000005u); // 801D7F48
  c->r[3]=c->r[29]|c->r[29]; // 801D7F4C
  c->r[5]=R8(c->r[25]+0x00000004u); // 801D7F50
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 801D7F54
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 801D7F58
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 801D7F5C
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 801D7F60
  c->lr=0x801D7F68u; f_801078B4(c); // 801D7F64
  c->r[6]=R8(c->r[25]+0x00000006u); // 801D7F68
  c->r[3]=c->r[29]|c->r[29]; // 801D7F6C
  c->r[0]=R8(c->r[25]+0x00000007u); // 801D7F70
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 801D7F74
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 801D7F78
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 801D7F7C
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 801D7F80
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 801D7F84
  c->lr=0x801D7F8Cu; f_80107934(c); // 801D7F88
  c->r[0]=R8(c->r[25]+0x00000007u); // 801D7F8C
  c->r[3]=c->r[29]|c->r[29]; // 801D7F90
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 801D7F94
  c->lr=0x801D7F9Cu; f_80107B04(c); // 801D7F98
  c->r[0]=R8(c->r[25]+0x00000009u); // 801D7F9C
  c->r[3]=c->r[29]|c->r[29]; // 801D7FA0
  c->r[5]=R8(c->r[25]+0x00000008u); // 801D7FA4
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 801D7FA8
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 801D7FAC
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 801D7FB0
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 801D7FB4
  c->lr=0x801D7FBCu; f_801078F4(c); // 801D7FB8
  c->r[6]=R8(c->r[25]+0x0000000Au); // 801D7FBC
  c->r[3]=c->r[29]|c->r[29]; // 801D7FC0
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 801D7FC4
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 801D7FC8
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 801D7FCC
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 801D7FD0
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 801D7FD4
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 801D7FD8
  c->lr=0x801D7FE0u; f_8010798C(c); // 801D7FDC
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 801D7FE0
  c->r[3]=c->r[29]|c->r[29]; // 801D7FE4
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 801D7FE8
  c->lr=0x801D7FF0u; f_80107B54(c); // 801D7FEC
  c->r[10]=R8(c->r[25]+0x0000000Fu); // 801D7FF0
  c->r[3]=c->r[29]|c->r[29]; // 801D7FF4
  c->r[6]=R8(c->r[25]+0x0000000Du); // 801D7FF8
  c->r[9]=R8(c->r[25]+0x0000000Eu); // 801D7FFC
  c->r[4]=rotl(c->r[10],29)&0x00000001u; // 801D8000
  c->r[24]=rotl(c->r[6],29)&0x0000000Fu; // 801D8004
  c->r[0]=rotl(c->r[10],28)&0x00000003u; // 801D8008
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D800C
  c->r[5]=rotl(c->r[10],0)&0x00000003u; // 801D8010
  c->r[8]=rotl(c->r[9],0)&0x00000007u; // 801D8014
  c->r[7]=c->r[24]|c->r[24]; // 801D8018
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D801C
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 801D8020
  c->r[9]=rotl(c->r[9],29)&0x00000007u; // 801D8024
  c->r[10]=rotl(c->r[10],30)&0x00000001u; // 801D8028
  c->r[4]=R8(c->r[25]+0x0000000Cu); // 801D802C
  c->lr=0x801D8034u; f_801073D4(c); // 801D8030
  cmps(c,0,(int32_t)c->r[24],1); // 801D8034
  if (crb(c,0)) { goto L_801D8050; } // 801D8038
  cmps(c,0,(int32_t)c->r[24],3); // 801D803C
  if (crb(c,1)) { goto L_801D8050; } // 801D8040
  c->r[3]=c->r[26]+c->r[24]; // 801D8044
  c->r[28]=0u+0x00000001u; // 801D8048
  W8(c->r[3]+0xFFFFFFFFu,c->r[31]); // 801D804C
L_801D8050:;
  c->r[25]=c->r[25]+0x00000010u; // 801D8050
  c->r[29]=c->r[29]+0x00000001u; // 801D8054
L_801D8058:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D8058
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 801D805C
  cmpu(c,0,c->r[29],c->r[0]); // 801D8060
  if (crb(c,0)) { IRQCHK(c); goto L_801D7F18; } // 801D8064
  c->r[29]=0u+0x00000001u; // 801D8068
  goto L_801D8438; // 801D806C
L_801D8070:;
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 801D8070
  c->r[31]=0u+0x00000000u; // 801D8074
  if (!crb(c,2)) { goto L_801D80CC; } // 801D8078
  c->r[3]=0u+0x00000000u; // 801D807C
  c->r[4]=0u+0x000000FFu; // 801D8080
  c->r[5]=0u+0x000000FFu; // 801D8084
  c->r[6]=0u+0x00000004u; // 801D8088
  c->lr=0x801D8090u; f_80107D20(c); // 801D808C
  c->r[3]=0u+0x00000000u; // 801D8090
  c->r[4]=0u+0x0000000Fu; // 801D8094
  c->r[5]=0u+0x00000004u; // 801D8098
  c->r[6]=0u+0x0000000Au; // 801D809C
  c->r[7]=0u+0x0000000Fu; // 801D80A0
  c->lr=0x801D80A8u; f_801078B4(c); // 801D80A4
  c->r[3]=0u+0x00000000u; // 801D80A8
  c->r[4]=0u+0x00000007u; // 801D80AC
  c->r[5]=0u+0x00000002u; // 801D80B0
  c->r[6]=0u+0x00000005u; // 801D80B4
  c->r[7]=0u+0x00000007u; // 801D80B8
  c->lr=0x801D80C0u; f_801078F4(c); // 801D80BC
  c->r[29]=0u+0x00000001u; // 801D80C0
  c->r[31]=0u+0x00000001u; // 801D80C4
  goto L_801D83C0; // 801D80C8
L_801D80CC:;
  cmpu(c,0,c->r[0],0x00000001u); // 801D80CC
  if (!crb(c,2)) { goto L_801D8120; } // 801D80D0
  c->r[3]=0u+0x00000000u; // 801D80D4
  c->r[4]=0u+0x00000000u; // 801D80D8
  c->r[5]=0u+0x00000000u; // 801D80DC
  c->r[6]=0u+0x000000FFu; // 801D80E0
  c->lr=0x801D80E8u; f_80107D20(c); // 801D80E4
  c->r[3]=0u+0x00000000u; // 801D80E8
  c->r[4]=0u+0x00000002u; // 801D80EC
  c->r[5]=0u+0x00000004u; // 801D80F0
  c->r[6]=0u+0x00000008u; // 801D80F4
  c->r[7]=0u+0x0000000Fu; // 801D80F8
  c->lr=0x801D8100u; f_801078B4(c); // 801D80FC
  c->r[3]=0u+0x00000000u; // 801D8100
  c->r[4]=0u+0x00000001u; // 801D8104
  c->r[5]=0u+0x00000002u; // 801D8108
  c->r[6]=0u+0x00000004u; // 801D810C
  c->r[7]=0u+0x00000007u; // 801D8110
  c->lr=0x801D8118u; f_801078F4(c); // 801D8114
  c->r[31]=0u+0x00000001u; // 801D8118
  goto L_801D836C; // 801D811C
L_801D8120:;
  cmpu(c,0,c->r[0],0x00000002u); // 801D8120
  if (!crb(c,2)) { goto L_801D81D8; } // 801D8124
  c->r[3]=0u+0x00000000u; // 801D8128
  c->r[4]=0u+0x00000000u; // 801D812C
  c->r[5]=0u+0x00000000u; // 801D8130
  c->r[6]=0u+0x000000FFu; // 801D8134
  c->lr=0x801D813Cu; f_80107D20(c); // 801D8138
  c->r[3]=0u+0x00000000u; // 801D813C
  c->r[4]=0u+0x0000000Fu; // 801D8140
  c->r[5]=0u+0x0000000Fu; // 801D8144
  c->r[6]=0u+0x0000000Fu; // 801D8148
  c->r[7]=0u+0x00000008u; // 801D814C
  c->lr=0x801D8154u; f_801078B4(c); // 801D8150
  c->r[3]=0u+0x00000000u; // 801D8154
  c->r[4]=0u+0x00000007u; // 801D8158
  c->r[5]=0u+0x00000007u; // 801D815C
  c->r[6]=0u+0x00000007u; // 801D8160
  c->r[7]=0u+0x00000004u; // 801D8164
  c->lr=0x801D816Cu; f_801078F4(c); // 801D8168
  c->r[3]=0u+0x00000001u; // 801D816C
  c->r[4]=0u+0x00000001u; // 801D8170
  c->r[5]=0u+0x00000001u; // 801D8174
  c->r[6]=0u+0x000000FFu; // 801D8178
  c->lr=0x801D8180u; f_80107D20(c); // 801D817C
  c->r[3]=0u+0x00000001u; // 801D8180
  c->r[4]=0u+0x00000008u; // 801D8184
  c->r[5]=0u+0x00000000u; // 801D8188
  c->r[6]=0u+0x0000000Eu; // 801D818C
  c->r[7]=0u+0x0000000Fu; // 801D8190
  c->lr=0x801D8198u; f_801078B4(c); // 801D8194
  c->r[3]=0u+0x00000001u; // 801D8198
  c->r[4]=0u+0x00000004u; // 801D819C
  c->r[5]=0u+0x00000000u; // 801D81A0
  c->r[6]=0u+0x00000006u; // 801D81A4
  c->r[7]=0u+0x00000007u; // 801D81A8
  c->lr=0x801D81B0u; f_801078F4(c); // 801D81AC
  c->r[4]=0u+0x802A0000u; // 801D81B0
  c->r[3]=0u+0x00000001u; // 801D81B4
  c->r[4]=R32(c->r[4]+0x00001AB0u); // 801D81B8
  c->lr=0x801D81C0u; f_80107B04(c); // 801D81BC
  c->r[4]=0u+0x802A0000u; // 801D81C0
  c->r[3]=0u+0x00000001u; // 801D81C4
  c->r[4]=R32(c->r[4]+0x00001AD0u); // 801D81C8
  c->lr=0x801D81D0u; f_80107B54(c); // 801D81CC
  c->r[31]=0u+0x00000002u; // 801D81D0
  goto L_801D828C; // 801D81D4
L_801D81D8:;
  c->r[24]=0u+0x802A0000u; // 801D81D8
  c->r[25]=0u+0x802A0000u; // 801D81DC
  c->r[24]=c->r[24]+0x00001AB0u; // 801D81E0
  c->r[23]=0u+0x00000000u; // 801D81E4
  c->r[25]=c->r[25]+0x00001AD0u; // 801D81E8
  goto L_801D827C; // 801D81EC
L_801D81F0:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 801D81F0
  c->r[4]=c->r[23]|c->r[23]; // 801D81F4
  c->r[3]=c->r[22]|c->r[22]; // 801D81F8
  c->r[5]=c->r[23]|c->r[23]; // 801D81FC
  c->r[6]=0u+0x000000FFu; // 801D8200
  c->lr=0x801D8208u; f_80107D20(c); // 801D8204
  cmps(c,0,(int32_t)c->r[23],0); // 801D8208
  c->r[7]=0u+0x00000000u; // 801D820C
  if (!crb(c,2)) { goto L_801D8218; } // 801D8210
  c->r[7]=0u+0x0000000Fu; // 801D8214
L_801D8218:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D8218
  c->r[26]=0u+0x00000000u; // 801D821C
  if (!crb(c,2)) { goto L_801D8228; } // 801D8220
  c->r[26]=0u+0x00000007u; // 801D8224
L_801D8228:;
  c->r[3]=c->r[22]|c->r[22]; // 801D8228
  c->r[4]=0u+0x0000000Fu; // 801D822C
  c->r[5]=0u+0x00000008u; // 801D8230
  c->r[6]=0u+0x0000000Eu; // 801D8234
  c->lr=0x801D823Cu; f_801078B4(c); // 801D8238
  c->r[3]=c->r[22]|c->r[22]; // 801D823C
  c->r[7]=c->r[26]|c->r[26]; // 801D8240
  c->r[4]=0u+0x00000007u; // 801D8244
  c->r[5]=0u+0x00000004u; // 801D8248
  c->r[6]=0u+0x00000006u; // 801D824C
  c->lr=0x801D8254u; f_801078F4(c); // 801D8250
  c->r[4]=R32(c->r[24]+0x00000000u); // 801D8254
  c->r[3]=c->r[22]|c->r[22]; // 801D8258
  c->lr=0x801D8260u; f_80107B04(c); // 801D825C
  c->r[4]=R32(c->r[25]+0x00000000u); // 801D8260
  c->r[3]=c->r[22]|c->r[22]; // 801D8264
  c->lr=0x801D826Cu; f_80107B54(c); // 801D8268
  c->r[31]=c->r[31]+0x00000001u; // 801D826C
  c->r[24]=c->r[24]+0x00000004u; // 801D8270
  c->r[25]=c->r[25]+0x00000004u; // 801D8274
  c->r[23]=c->r[23]+0x00000001u; // 801D8278
L_801D827C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D827C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D8280
  cmpu(c,0,c->r[23],c->r[0]); // 801D8284
  if (crb(c,0)) { IRQCHK(c); goto L_801D81F0; } // 801D8288
L_801D828C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000010u); // 801D828C
  c->r[5]=0u+0x00000000u; // 801D8290
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFA1D0u); // 801D8294
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D8298
  if (!crb(c,2)) { goto L_801D82D8; } // 801D829C
  c->r[4]=c->r[2]+0xFFFFA1D0u; // 801D82A0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000012u); // 801D82A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801D82A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D82AC
  if (!crb(c,2)) { goto L_801D82D8; } // 801D82B0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000014u); // 801D82B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 801D82B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D82BC
  if (!crb(c,2)) { goto L_801D82D8; } // 801D82C0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000016u); // 801D82C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 801D82C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D82CC
  if (!crb(c,2)) { goto L_801D82D8; } // 801D82D0
  c->r[5]=0u+0x00000001u; // 801D82D4
L_801D82D8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D82D8
  if (crb(c,2)) { goto L_801D8320; } // 801D82DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000018u); // 801D82E0
  c->r[3]=0u+0x00000000u; // 801D82E4
  cmps(c,0,(int32_t)c->r[0],255); // 801D82E8
  if (!crb(c,2)) { goto L_801D8318; } // 801D82EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Au); // 801D82F0
  cmps(c,0,(int32_t)c->r[0],255); // 801D82F4
  if (!crb(c,2)) { goto L_801D8318; } // 801D82F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Cu); // 801D82FC
  cmps(c,0,(int32_t)c->r[0],255); // 801D8300
  if (!crb(c,2)) { goto L_801D8318; } // 801D8304
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x0000001Eu); // 801D8308
  cmps(c,0,(int32_t)c->r[0],255); // 801D830C
  if (!crb(c,2)) { goto L_801D8318; } // 801D8310
  c->r[3]=0u+0x00000001u; // 801D8314
L_801D8318:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D8318
  if (!crb(c,2)) { goto L_801D836C; } // 801D831C
L_801D8320:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 801D8320
  c->r[4]=0u+0x000000FFu; // 801D8324
  c->r[3]=c->r[22]|c->r[22]; // 801D8328
  c->r[5]=0u+0x000000FFu; // 801D832C
  c->r[6]=0u+0x000000FFu; // 801D8330
  c->lr=0x801D8338u; f_80107D20(c); // 801D8334
  c->r[3]=c->r[22]|c->r[22]; // 801D8338
  c->r[4]=0u+0x00000002u; // 801D833C
  c->r[5]=0u+0x00000004u; // 801D8340
  c->r[6]=0u+0x00000000u; // 801D8344
  c->r[7]=0u+0x0000000Fu; // 801D8348
  c->lr=0x801D8350u; f_801078B4(c); // 801D834C
  c->r[3]=c->r[22]|c->r[22]; // 801D8350
  c->r[4]=0u+0x00000001u; // 801D8354
  c->r[5]=0u+0x00000002u; // 801D8358
  c->r[6]=0u+0x00000000u; // 801D835C
  c->r[7]=0u+0x00000007u; // 801D8360
  c->lr=0x801D8368u; f_801078F4(c); // 801D8364
  c->r[31]=c->r[31]+0x00000001u; // 801D8368
L_801D836C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D836C
  if (crb(c,2)) { goto L_801D83C0; } // 801D8370
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 801D8374
  c->r[4]=0u+0x000000FFu; // 801D8378
  c->r[3]=c->r[22]|c->r[22]; // 801D837C
  c->r[5]=0u+0x000000FFu; // 801D8380
  c->r[6]=0u+0x00000004u; // 801D8384
  c->lr=0x801D838Cu; f_80107D20(c); // 801D8388
  c->r[3]=c->r[22]|c->r[22]; // 801D838C
  c->r[4]=0u+0x0000000Fu; // 801D8390
  c->r[5]=0u+0x00000000u; // 801D8394
  c->r[6]=0u+0x0000000Au; // 801D8398
  c->r[7]=0u+0x0000000Fu; // 801D839C
  c->lr=0x801D83A4u; f_801078B4(c); // 801D83A0
  c->r[3]=c->r[22]|c->r[22]; // 801D83A4
  c->r[4]=0u+0x00000007u; // 801D83A8
  c->r[5]=0u+0x00000000u; // 801D83AC
  c->r[6]=0u+0x00000005u; // 801D83B0
  c->r[7]=0u+0x00000007u; // 801D83B4
  c->lr=0x801D83BCu; f_801078F4(c); // 801D83B8
  c->r[31]=c->r[31]+0x00000001u; // 801D83BC
L_801D83C0:;
  c->r[22]=rotl(c->r[31],0)&0x000000FFu; // 801D83C0
  c->r[23]=0u+0x00000000u; // 801D83C4
  goto L_801D8424; // 801D83C8
L_801D83CC:;
  c->r[24]=rotl(c->r[23],0)&0x000000FFu; // 801D83CC
  c->r[4]=0u+0x00000000u; // 801D83D0
  c->r[3]=c->r[24]|c->r[24]; // 801D83D4
  c->r[5]=0u+0x00000000u; // 801D83D8
  c->r[6]=0u+0x00000000u; // 801D83DC
  c->r[7]=0u+0x00000001u; // 801D83E0
  c->r[8]=0u+0x00000000u; // 801D83E4
  c->lr=0x801D83ECu; f_80107934(c); // 801D83E8
  c->r[3]=c->r[24]|c->r[24]; // 801D83EC
  c->r[4]=0u+0x00000000u; // 801D83F0
  c->r[5]=0u+0x00000000u; // 801D83F4
  c->r[6]=0u+0x00000000u; // 801D83F8
  c->r[7]=0u+0x00000001u; // 801D83FC
  c->r[8]=0u+0x00000000u; // 801D8400
  c->lr=0x801D8408u; f_8010798C(c); // 801D8404
  c->r[3]=c->r[24]|c->r[24]; // 801D8408
  c->lr=0x801D8410u; f_80107780(c); // 801D840C
  c->r[3]=c->r[24]|c->r[24]; // 801D8410
  c->r[4]=0u+0x00000000u; // 801D8414
  c->r[5]=0u+0x00000000u; // 801D8418
  c->lr=0x801D8420u; f_80107BA4(c); // 801D841C
  c->r[23]=c->r[23]+0x00000001u; // 801D8420
L_801D8424:;
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; // 801D8424
  cmpu(c,0,c->r[0],c->r[22]); // 801D8428
  if (crb(c,0)) { IRQCHK(c); goto L_801D83CC; } // 801D842C
  c->r[3]=c->r[22]|c->r[22]; // 801D8430
  c->lr=0x801D8438u; f_80107E7C(c); // 801D8434
L_801D8438:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D8438
  if (crb(c,2)) { goto L_801D853C; } // 801D843C
  c->r[8]=R32(c->r[27]+0x00000038u); // 801D8440
  c->r[31]=c->r[1]+0x0000002Cu; // 801D8444
  c->r[10]=R32(c->r[27]+0x00000040u); // 801D8448
  c->r[28]=0u+0x00000000u; // 801D844C
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 801D8450
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 801D8454
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 801D8458
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 801D845C
  c->r[4]=c->r[5]+c->r[4]; // 801D8460
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 801D8464
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D8468
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 801D846C
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 801D8470
  {uint32_t ea=c->r[2]+0xFFFF9D7Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801D8474
  c->r[9]=rotl(c->r[8],19)&0x0000001Cu; // 801D8478
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D847C
  c->r[8]=rotl(c->r[8],29)&0x00000004u; // 801D8480
  c->r[5]=c->r[6]+c->r[5]; // 801D8484
  c->r[4]=c->r[7]+c->r[4]; // 801D8488
  c->r[3]=c->r[3]+c->r[0]; // 801D848C
  c->r[0]=c->r[9]+c->r[8]; // 801D8490
  c->r[4]=c->r[5]+c->r[4]; // 801D8494
  c->r[3]=c->r[4]+c->r[3]; // 801D8498
  c->r[0]=c->r[10]+c->r[0]; // 801D849C
  c->r[24]=c->r[3]+c->r[0]; // 801D84A0
  goto L_801D852C; // 801D84A4
L_801D84A8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801D84A8
  cmps(c,0,(int32_t)c->r[0],0); // 801D84AC
  if (crb(c,2)) { goto L_801D8520; } // 801D84B0
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D84B4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 801D84B8
  c->lr=0x801D84C0u; f_801DB56C(c); // 801D84BC
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D84C0
  c->f[31]=c->f[1]; // 801D84C4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 801D84C8
  c->lr=0x801D84D0u; f_801DB504(c); // 801D84CC
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D84D0
  c->f[2]=-c->f[1]; // 801D84D4
  c->r[3]=c->r[28]+0x00000001u; // 801D84D8
  c->r[4]=c->r[1]+0x00000068u; // 801D84DC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801D84E0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 801D84E4
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D84E8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801D84EC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 801D84F0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D84F4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 801D84F8
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D84FC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D8500
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 801D8504
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8508
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801D850C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 801D8510
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8514
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 801D8518
  c->lr=0x801D8520u; f_801D5BC4(c); // 801D851C
L_801D8520:;
  c->r[31]=c->r[31]+0x00000001u; // 801D8520
  c->r[24]=c->r[24]+0x00000014u; // 801D8524
  c->r[28]=c->r[28]+0x00000001u; // 801D8528
L_801D852C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D852C
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 801D8530
  cmpu(c,0,c->r[28],c->r[0]); // 801D8534
  if (crb(c,0)) { IRQCHK(c); goto L_801D84A8; } // 801D8538
L_801D853C:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D853C
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 801D8540
  c->lr=0x801D8548u; f_80107760(c); // 801D8544
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D8548
  c->r[0]=rotl(c->r[0],17)&0x00000007u; cr0(c,c->r[0]); // 801D854C
  if (crb(c,2)) { goto L_801D85E4; } // 801D8550
  c->r[8]=R32(c->r[27]+0x00000038u); // 801D8554
  c->r[28]=0u+0x00000000u; // 801D8558
  c->r[9]=R32(c->r[27]+0x00000040u); // 801D855C
  c->r[3]=rotl(c->r[8],8)&0x0000000Fu; // 801D8560
  c->r[0]=rotl(c->r[8],4)&0x0000000Fu; // 801D8564
  c->r[5]=rotl(c->r[8],27)&0x00000004u; // 801D8568
  c->r[4]=rotl(c->r[8],26)&0x00000004u; // 801D856C
  c->r[4]=c->r[5]+c->r[4]; // 801D8570
  c->r[7]=rotl(c->r[8],28)&0x00000004u; // 801D8574
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D8578
  c->r[6]=rotl(c->r[8],20)&0x00000004u; // 801D857C
  c->r[5]=rotl(c->r[8],14)&0x0000003Cu; // 801D8580
  c->r[4]=c->r[7]+c->r[4]; // 801D8584
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D8588
  c->r[5]=c->r[6]+c->r[5]; // 801D858C
  c->r[6]=rotl(c->r[8],29)&0x00000004u; // 801D8590
  c->r[0]=c->r[3]+c->r[0]; // 801D8594
  c->r[3]=c->r[5]+c->r[4]; // 801D8598
  c->r[3]=c->r[6]+c->r[3]; // 801D859C
  c->r[0]=c->r[9]+c->r[0]; // 801D85A0
  c->r[24]=c->r[3]+c->r[0]; // 801D85A4
  goto L_801D85D4; // 801D85A8
L_801D85AC:;
  c->r[4]=R8(c->r[24]+0x00000000u); // 801D85AC
  c->r[3]=c->r[28]|c->r[28]; // 801D85B0
  c->r[5]=R8(c->r[24]+0x00000001u); // 801D85B4
  c->lr=0x801D85BCu; f_80107694(c); // 801D85B8
  c->r[4]=R8(c->r[24]+0x00000002u); // 801D85BC
  c->r[3]=c->r[28]|c->r[28]; // 801D85C0
  c->r[5]=R8(c->r[24]+0x00000003u); // 801D85C4
  c->lr=0x801D85CCu; f_80107590(c); // 801D85C8
  c->r[24]=c->r[24]+0x00000004u; // 801D85CC
  c->r[28]=c->r[28]+0x00000001u; // 801D85D0
L_801D85D4:;
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 801D85D4
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 801D85D8
  cmpu(c,0,c->r[28],c->r[0]); // 801D85DC
  if (crb(c,0)) { IRQCHK(c); goto L_801D85AC; } // 801D85E0
L_801D85E4:;
  c->r[4]=R32(c->r[27]+0x00000038u); // 801D85E4
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 801D85E8
  if (crb(c,2)) { goto L_801D864C; } // 801D85EC
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 801D85F0
  c->r[0]=rotl(c->r[4],4)&0x0000000Fu; // 801D85F4
  c->r[8]=rotl(c->r[4],20)&0x00000004u; // 801D85F8
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 801D85FC
  c->r[7]=rotl(c->r[4],27)&0x00000004u; // 801D8600
  c->r[6]=rotl(c->r[4],26)&0x00000004u; // 801D8604
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D8608
  c->r[5]=c->r[8]+c->r[5]; // 801D860C
  c->r[6]=c->r[7]+c->r[6]; // 801D8610
  c->r[7]=R32(c->r[27]+0x00000040u); // 801D8614
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D8618
  c->r[0]=c->r[6]+c->r[5]; // 801D861C
  c->r[0]=c->r[7]+c->r[0]; // 801D8620
  c->r[3]=c->r[4]+c->r[3]; // 801D8624
  c->r[6]=c->r[3]+c->r[0]; // 801D8628
  c->r[0]=R8(c->r[3]+c->r[0]); // 801D862C
  c->r[4]=R8(c->r[6]+0x00000002u); // 801D8630
  c->r[5]=R8(c->r[6]+0x00000001u); // 801D8634
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 801D8638
  c->r[7]=R8(c->r[6]+0x00000003u); // 801D863C
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 801D8640
  c->lr=0x801D8648u; f_80107C5C(c); // 801D8644
  goto L_801D8664; // 801D8648
L_801D864C:;
  c->r[3]=0u+0x00000007u; // 801D864C
  c->r[4]=0u+0x00000000u; // 801D8650
  c->r[5]=0u+0x00000000u; // 801D8654
  c->r[6]=0u+0x00000007u; // 801D8658
  c->r[7]=0u+0x00000000u; // 801D865C
  c->lr=0x801D8664u; f_80107C5C(c); // 801D8660
L_801D8664:;
  c->r[6]=R32(c->r[27]+0x00000038u); // 801D8664
  c->r[0]=rotl(c->r[6],27)&0x00000001u; cr0(c,c->r[0]); // 801D8668
  if (crb(c,2)) { goto L_801D86CC; } // 801D866C
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 801D8670
  c->r[0]=rotl(c->r[6],4)&0x0000000Fu; // 801D8674
  c->r[5]=rotl(c->r[6],27)&0x00000004u; // 801D8678
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 801D867C
  c->r[5]=c->r[5]+c->r[4]; // 801D8680
  c->r[8]=rotl(c->r[6],28)&0x00000004u; // 801D8684
  c->r[7]=rotl(c->r[6],20)&0x00000004u; // 801D8688
  c->r[6]=rotl(c->r[6],14)&0x0000003Cu; // 801D868C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D8690
  c->r[9]=R32(c->r[27]+0x00000040u); // 801D8694
  c->r[6]=c->r[7]+c->r[6]; // 801D8698
  c->r[5]=c->r[8]+c->r[5]; // 801D869C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D86A0
  c->r[0]=c->r[6]+c->r[5]; // 801D86A4
  c->r[3]=c->r[4]+c->r[3]; // 801D86A8
  c->r[0]=c->r[9]+c->r[0]; // 801D86AC
  c->r[6]=c->r[3]+c->r[0]; // 801D86B0
  c->r[3]=R8(c->r[3]+c->r[0]); // 801D86B4
  c->r[4]=R8(c->r[6]+0x00000001u); // 801D86B8
  c->r[5]=R8(c->r[6]+0x00000002u); // 801D86BC
  c->r[6]=R8(c->r[6]+0x00000003u); // 801D86C0
  c->lr=0x801D86C8u; f_80108350(c); // 801D86C4
  goto L_801D86E0; // 801D86C8
L_801D86CC:;
  c->r[3]=0u+0x00000001u; // 801D86CC
  c->r[4]=0u+0x00000004u; // 801D86D0
  c->r[5]=0u+0x00000005u; // 801D86D4
  c->r[6]=0u+0x0000000Fu; // 801D86D8
  c->lr=0x801D86E0u; f_80108350(c); // 801D86DC
L_801D86E0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D86E0
  c->r[3]=0u+0x00000000u; // 801D86E4
  if (crb(c,2)) { goto L_801D86F8; } // 801D86E8
  cmps(c,0,(int32_t)c->r[30],0); // 801D86EC
  if (crb(c,2)) { goto L_801D86F8; } // 801D86F0
  c->r[3]=0u+0x00000001u; // 801D86F4
L_801D86F8:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 801D86F8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 801D86FC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 801D8700
  c->r[11]=c->r[1]+0x00000100u; // 801D8704
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 801D8708
  c->lr=0x801D8710u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D870C
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D8710
  c->lr=c->r[0]; // 801D8714
  c->r[1]=c->r[1]+0x00000120u; // 801D8718
  return; // 801D871C
}

// BindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
void f_801D8720(Ctx* __restrict c) {
  trace_call(0x801D8720u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 801D8720
  c->r[0]=c->r[3]|c->r[3]; // 801D8724
  c->r[3]=c->r[4]|c->r[4]; // 801D8728
  c->r[5]=0u+0x00000000u; // 801D872C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D8730
  c->r[4]=c->r[0]|c->r[0]; // 801D8734
  c->ctr=c->r[12]; // 801D8738
  if (true) { dispatch(c,c->ctr); return; } // 801D873C
}

// UnbindAnimation__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
void f_801D8740(Ctx* __restrict c) {
  trace_call(0x801D8740u);
  c->r[3]=c->r[3]+0x00000004u; // 801D8740
  f_801DA210(c); return; // 801D8744
}

// UnbindAllAnimation__Q34nw4r3lyt8MaterialFv
void f_801D8748(Ctx* __restrict c) {
  trace_call(0x801D8748u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D8748
  c->r[4]=0u+0x00000000u; // 801D874C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D8750
  c->ctr=c->r[12]; // 801D8754
  if (true) { dispatch(c,c->ctr); return; } // 801D8758
}

// Animate__Q34nw4r3lyt8MaterialFv
void f_801D875C(Ctx* __restrict c) {
  trace_call(0x801D875Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D875C
  c->r[0]=c->lr; // 801D8760
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8764
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8768
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D876C
  c->r[30]=c->r[3]+0x00000008u; // 801D8770
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8774
  c->r[29]=c->r[3]|c->r[3]; // 801D8778
  c->r[31]=R32(c->r[3]+0x00000008u); // 801D877C
  goto L_801D87B0; // 801D8780
L_801D8784:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801D8784
  cmps(c,0,(int32_t)c->r[0],0); // 801D8788
  if (!crb(c,2)) { goto L_801D87AC; } // 801D878C
  c->r[3]=R32(c->r[31]+0x00000008u); // 801D8790
  c->r[5]=c->r[29]|c->r[29]; // 801D8794
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 801D8798
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D879C
  c->r[12]=R32(c->r[12]+0x00000020u); // 801D87A0
  c->ctr=c->r[12]; // 801D87A4
  if (true) { c->lr=0x801D87ACu; dispatch(c,c->ctr); } // 801D87A8
L_801D87AC:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D87AC
L_801D87B0:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D87B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8784; } // 801D87B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D87B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D87BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D87C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D87C4
  c->lr=c->r[0]; // 801D87C8
  c->r[1]=c->r[1]+0x00000020u; // 801D87CC
  return; // 801D87D0
}

// AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink
void f_801D87D4(Ctx* __restrict c) {
  trace_call(0x801D87D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D87D4
  c->r[0]=c->lr; // 801D87D8
  c->r[5]=c->r[4]|c->r[4]; // 801D87DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D87E0
  c->r[0]=c->r[3]+0x00000008u; // 801D87E4
  c->r[3]=c->r[3]+0x00000004u; // 801D87E8
  c->r[4]=c->r[1]+0x00000008u; // 801D87EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D87F0
  c->lr=0x801D87F8u; f_8017A764(c); // 801D87F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D87F8
  c->lr=c->r[0]; // 801D87FC
  c->r[1]=c->r[1]+0x00000010u; // 801D8800
  return; // 801D8804
}

// FindAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransform
void f_801D8808(Ctx* __restrict c) {
  trace_call(0x801D8808u);
  c->r[3]=c->r[3]+0x00000004u; // 801D8808
  f_801DA1A0(c); return; // 801D880C
}

// FindAnimationLink__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResource
void f_801D8810(Ctx* __restrict c) {
  trace_call(0x801D8810u);
  c->r[3]=c->r[3]+0x00000004u; // 801D8810
  f_801DA1D4(c); return; // 801D8814
}

// SetAnimationEnable__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimTransformb
void f_801D8818(Ctx* __restrict c) {
  trace_call(0x801D8818u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8818
  c->r[0]=c->lr; // 801D881C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8824
  c->r[31]=c->r[5]|c->r[5]; // 801D8828
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D882C
  c->r[12]=R32(c->r[12]+0x00000020u); // 801D8830
  c->ctr=c->r[12]; // 801D8834
  if (true) { c->lr=0x801D883Cu; dispatch(c,c->ctr); } // 801D8838
  cmps(c,0,(int32_t)c->r[3],0); // 801D883C
  if (crb(c,2)) { goto L_801D8850; } // 801D8840
  c->r[0]=cntlz(c->r[31]); // 801D8844
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801D8848
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801D884C
L_801D8850:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8850
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8854
  c->lr=c->r[0]; // 801D8858
  c->r[1]=c->r[1]+0x00000010u; // 801D885C
  return; // 801D8860
}

// SetAnimationEnable__Q34nw4r3lyt8MaterialFRCQ34nw4r3lyt12AnimResourceb
void f_801D8864(Ctx* __restrict c) {
  trace_call(0x801D8864u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8864
  c->r[0]=c->lr; // 801D8868
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D886C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8870
  c->r[31]=c->r[5]|c->r[5]; // 801D8874
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D8878
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D887C
  c->ctr=c->r[12]; // 801D8880
  if (true) { c->lr=0x801D8888u; dispatch(c,c->ctr); } // 801D8884
  cmps(c,0,(int32_t)c->r[3],0); // 801D8888
  if (crb(c,2)) { goto L_801D889C; } // 801D888C
  c->r[0]=cntlz(c->r[31]); // 801D8890
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801D8894
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801D8898
L_801D889C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D889C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D88A0
  c->lr=c->r[0]; // 801D88A4
  c->r[1]=c->r[1]+0x00000010u; // 801D88A8
  return; // 801D88AC
}

// GetTextureSize__Q34nw4r3lyt6detailFPQ34nw4r3lyt8MaterialUc
void f_801D88B0(Ctx* __restrict c) {
  trace_call(0x801D88B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D88B0
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801D88B4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D88B8
  cmpu(c,0,c->r[5],c->r[0]); // 801D88BC
  if (crb(c,0)) { goto L_801D88D4; } // 801D88C0
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D88C4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801D88C8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D88CC
  goto L_801D8918; // 801D88D0
L_801D88D4:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 801D88D4
  c->r[5]=0u+0x43300000u; // 801D88D8
  c->r[4]=R32(c->r[4]+0x00000040u); // 801D88DC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801D88E0
  c->r[6]=c->r[4]+c->r[0]; // 801D88E4
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[1]=RF64(ea);} // 801D88E8
  c->r[4]=R16(c->r[6]+0x0000000Au); // 801D88EC
  c->r[0]=R16(c->r[6]+0x00000008u); // 801D88F0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D88F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D88F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D88FC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 801D8900
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D8904
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801D8908
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801D890C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D8910
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801D8914
L_801D8918:;
  c->r[1]=c->r[1]+0x00000020u; // 801D8918
  return; // 801D891C
}

// Get__Q34nw4r3lyt6TexMapCFP9_GXTexObj
void f_801D8920(Ctx* __restrict c) {
  trace_call(0x801D8920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8920
  c->r[0]=c->lr; // 801D8924
  c->r[10]=R32(c->r[3]+0x00000018u); // 801D8928
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D892C
  c->r[7]=rotl(c->r[10],4)&0x0000000Fu; // 801D8930
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8934
  c->r[0]=c->r[7]+0xFFFFFFF8u; // 801D8938
  cmpu(c,0,c->r[0],0x00000002u); // 801D893C
  c->r[31]=c->r[4]|c->r[4]; // 801D8940
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8944
  c->r[30]=c->r[3]|c->r[3]; // 801D8948
  if (crb(c,1)) { goto L_801D8988; } // 801D894C
  c->r[3]=c->r[31]|c->r[31]; // 801D8950
  c->lr=0x801D8958u; f_80106AC8(c); // 801D8954
  c->r[0]=R32(c->r[30]+0x00000018u); // 801D8958
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D895C
  c->r[3]=c->r[31]|c->r[31]; // 801D8960
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D8964
  c->r[7]=rotl(c->r[0],4)&0x0000000Fu; // 801D8968
  c->r[5]=R16(c->r[30]+0x00000008u); // 801D896C
  c->r[8]=rotl(c->r[0],7)&0x00000003u; // 801D8970
  c->r[6]=R16(c->r[30]+0x0000000Au); // 801D8974
  c->r[9]=rotl(c->r[0],9)&0x00000003u; // 801D8978
  c->r[10]=rotl(c->r[0],5)&0x00000001u; // 801D897C
  c->lr=0x801D8984u; f_801067F0(c); // 801D8980
  goto L_801D89A8; // 801D8984
L_801D8988:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D8988
  c->r[3]=c->r[31]|c->r[31]; // 801D898C
  c->r[5]=R16(c->r[30]+0x00000008u); // 801D8990
  c->r[8]=rotl(c->r[10],7)&0x00000003u; // 801D8994
  c->r[9]=rotl(c->r[10],9)&0x00000003u; // 801D8998
  c->r[6]=R16(c->r[30]+0x0000000Au); // 801D899C
  c->r[10]=rotl(c->r[10],5)&0x00000001u; // 801D89A0
  c->lr=0x801D89A8u; f_801065E4(c); // 801D89A4
L_801D89A8:;
  c->r[4]=R16(c->r[30]+0x00000014u); // 801D89A8
  c->r[5]=0u+0x43300000u; // 801D89AC
  c->r[0]=R32(c->r[30]+0x00000018u); // 801D89B0
  c->r[3]=c->r[31]|c->r[31]; // 801D89B4
  W32(c->r[1]+0x00000014u,c->r[4]); // 801D89B8
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[3]=RF64(ea);} // 801D89BC
  c->r[4]=rotl(c->r[0],12)&0x00000007u; // 801D89C0
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D89C4
  c->r[5]=rotl(c->r[0],13)&0x00000001u; // 801D89C8
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D89CC
  c->r[6]=rotl(c->r[0],14)&0x00000001u; // 801D89D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801D89D4
  c->r[7]=rotl(c->r[0],15)&0x00000001u; // 801D89D8
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D89DC
  c->r[8]=rotl(c->r[0],17)&0x00000003u; // 801D89E0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 801D89E4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D89E8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801D89EC
  c->lr=0x801D89F4u; f_80106838(c); // 801D89F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D89F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D89F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D89FC
  c->lr=c->r[0]; // 801D8A00
  c->r[1]=c->r[1]+0x00000020u; // 801D8A04
  return; // 801D8A08
}

// Get__Q34nw4r3lyt6TexMapCFP10_GXTlutObj
void f_801D8A0C(Ctx* __restrict c) {
  trace_call(0x801D8A0Cu);
  c->r[5]=c->r[3]|c->r[3]; // 801D8A0C
  c->r[3]=c->r[4]|c->r[4]; // 801D8A10
  c->r[0]=R32(c->r[5]+0x00000018u); // 801D8A14
  c->r[4]=R32(c->r[5]+0x00000004u); // 801D8A18
  c->r[6]=R16(c->r[5]+0x00000016u); // 801D8A1C
  c->r[5]=rotl(c->r[0],19)&0x00000003u; // 801D8A20
  f_80106C88(c); return; // 801D8A24
}

// Set__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void f_801D8A28(Ctx* __restrict c) {
  trace_call(0x801D8A28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8A28
  c->r[0]=c->lr; // 801D8A2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8A30
  c->r[0]=0u+0x80000000u; // 801D8A34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8A38
  c->r[31]=c->r[5]|c->r[5]; // 801D8A3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8A40
  c->r[30]=c->r[4]|c->r[4]; // 801D8A44
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8A48
  c->r[29]=c->r[3]|c->r[3]; // 801D8A4C
  c->r[6]=R32(c->r[4]+0x00000008u); // 801D8A50
  cmpu(c,0,c->r[6],c->r[0]); // 801D8A54
  if (!crb(c,0)) { goto L_801D8A64; } // 801D8A58
  c->r[3]=c->r[30]|c->r[30]; // 801D8A5C
  c->lr=0x801D8A64u; f_80175DCC(c); // 801D8A60
L_801D8A64:;
  c->r[3]=c->r[30]|c->r[30]; // 801D8A64
  c->r[4]=c->r[31]|c->r[31]; // 801D8A68
  c->lr=0x801D8A70u; f_80175EE0(c); // 801D8A6C
  c->r[4]=c->r[3]|c->r[3]; // 801D8A70
  c->r[3]=c->r[29]|c->r[29]; // 801D8A74
  c->lr=0x801D8A7Cu; f_801D8A98(c); // 801D8A78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8A7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D8A80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D8A84
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D8A88
  c->lr=c->r[0]; // 801D8A8C
  c->r[1]=c->r[1]+0x00000020u; // 801D8A90
  return; // 801D8A94
}

// Set__Q34nw4r3lyt6TexMapFPC13TPLDescriptor
void f_801D8A98(Ctx* __restrict c) {
  trace_call(0x801D8A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8A98
  c->r[0]=0u+0x43300000u; // 801D8A9C
  c->r[7]=R32(c->r[4]+0x00000000u); // 801D8AA0
  c->r[8]=R32(c->r[4]+0x00000004u); // 801D8AA4
  c->r[4]=R32(c->r[7]+0x00000008u); // 801D8AA8
  c->r[6]=R32(c->r[3]+0x00000018u); // 801D8AAC
  cmps(c,0,(int32_t)c->r[8],0); // 801D8AB0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D8AB4
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[3]=RF64(ea);} // 801D8AB8
  c->r[5]=R16(c->r[7]+0x00000000u); // 801D8ABC
  c->r[4]=R16(c->r[7]+0x00000002u); // 801D8AC0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D8AC4
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8AC8
  W16(c->r[3]+0x00000008u,c->r[4]); // 801D8ACC
  W16(c->r[3]+0x0000000Au,c->r[5]); // 801D8AD0
  c->r[4]=R32(c->r[7]+0x00000004u); // 801D8AD4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D8AD8
  c->r[6]=(rotl(c->r[4],28)&0xF0000000u)|(c->r[6]&~0xF0000000u); // 801D8ADC
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D8AE0
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801D8AE4
  c->r[4]=R32(c->r[7]+0x00000010u); // 801D8AE8
  c->r[6]=(rotl(c->r[0],25)&0x06000000u)|(c->r[6]&~0x06000000u); // 801D8AEC
  c->r[6]=(rotl(c->r[4],23)&0x01800000u)|(c->r[6]&~0x01800000u); // 801D8AF0
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D8AF4
  c->r[5]=R8(c->r[7]+0x00000021u); // 801D8AF8
  c->r[0]=R8(c->r[7]+0x00000022u); // 801D8AFC
  c->r[4]=c->r[0]-c->r[5]; // 801D8B00
  c->r[0]=c->r[5]-c->r[0]; // 801D8B04
  c->r[0]=c->r[4]|c->r[0]; // 801D8B08
  c->r[6]=(rotl(c->r[0],28)&0x08000000u)|(c->r[6]&~0x08000000u); // 801D8B0C
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D8B10
  c->r[0]=R32(c->r[7]+0x00000014u); // 801D8B14
  c->r[4]=R32(c->r[7]+0x00000018u); // 801D8B18
  c->r[6]=(rotl(c->r[0],20)&0x00700000u)|(c->r[6]&~0x00700000u); // 801D8B1C
  c->r[6]=(rotl(c->r[4],19)&0x00080000u)|(c->r[6]&~0x00080000u); // 801D8B20
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D8B24
  c->r[4]=R8(c->r[7]+0x00000022u); // 801D8B28
  c->r[0]=R8(c->r[7]+0x00000021u); // 801D8B2C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D8B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8B34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801D8B38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801D8B3C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801D8B40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 801D8B44
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 801D8B48
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D8B4C
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8B50
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D8B54
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D8B58
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801D8B5C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801D8B60
  W16(c->r[3]+0x00000014u,c->r[0]); // 801D8B64
  c->r[4]=R8(c->r[7]+0x00000020u); // 801D8B68
  c->r[0]=0u-c->r[4]; // 801D8B6C
  c->r[0]=c->r[0]|c->r[4]; // 801D8B70
  c->r[6]=(rotl(c->r[0],18)&0x00020000u)|(c->r[6]&~0x00020000u); // 801D8B74
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D8B78
  if (crb(c,2)) { goto L_801D8BA0; } // 801D8B7C
  c->r[0]=R32(c->r[8]+0x00000008u); // 801D8B80
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D8B84
  c->r[0]=R32(c->r[8]+0x00000004u); // 801D8B88
  c->r[6]=(rotl(c->r[0],13)&0x00006000u)|(c->r[6]&~0x00006000u); // 801D8B8C
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D8B90
  c->r[0]=R16(c->r[8]+0x00000000u); // 801D8B94
  W16(c->r[3]+0x00000016u,c->r[0]); // 801D8B98
  goto L_801D8BB4; // 801D8B9C
L_801D8BA0:;
  c->r[4]=0u+0x00000000u; // 801D8BA0
  c->r[0]=rotl(c->r[6],0)&0xFFFF9FFFu; // 801D8BA4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D8BA8
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D8BAC
  W16(c->r[3]+0x00000016u,c->r[4]); // 801D8BB0
L_801D8BB4:;
  c->r[1]=c->r[1]+0x00000020u; // 801D8BB4
  return; // 801D8BB8
}

// ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void f_801D8BBC(Ctx* __restrict c) {
  trace_call(0x801D8BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8BBC
  c->r[0]=c->lr; // 801D8BC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8BC4
  c->r[0]=0u+0x80000000u; // 801D8BC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8BCC
  c->r[31]=c->r[5]|c->r[5]; // 801D8BD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8BD4
  c->r[30]=c->r[4]|c->r[4]; // 801D8BD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8BDC
  c->r[29]=c->r[3]|c->r[3]; // 801D8BE0
  c->r[6]=R32(c->r[4]+0x00000008u); // 801D8BE4
  cmpu(c,0,c->r[6],c->r[0]); // 801D8BE8
  if (!crb(c,0)) { goto L_801D8BF8; } // 801D8BEC
  c->r[3]=c->r[30]|c->r[30]; // 801D8BF0
  c->lr=0x801D8BF8u; f_80175DCC(c); // 801D8BF4
L_801D8BF8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D8BF8
  c->r[4]=c->r[31]|c->r[31]; // 801D8BFC
  c->lr=0x801D8C04u; f_80175EE0(c); // 801D8C00
  c->r[6]=R32(c->r[3]+0x00000000u); // 801D8C04
  c->r[4]=R32(c->r[29]+0x00000018u); // 801D8C08
  c->r[0]=R32(c->r[6]+0x00000008u); // 801D8C0C
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D8C10
  c->r[5]=R16(c->r[6]+0x00000000u); // 801D8C14
  c->r[0]=R16(c->r[6]+0x00000002u); // 801D8C18
  W16(c->r[29]+0x00000008u,c->r[0]); // 801D8C1C
  W16(c->r[29]+0x0000000Au,c->r[5]); // 801D8C20
  c->r[0]=R32(c->r[6]+0x00000004u); // 801D8C24
  c->r[4]=(rotl(c->r[0],28)&0xF0000000u)|(c->r[4]&~0xF0000000u); // 801D8C28
  W32(c->r[29]+0x00000018u,c->r[4]); // 801D8C2C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D8C30
  cmps(c,0,(int32_t)c->r[3],0); // 801D8C34
  if (crb(c,2)) { goto L_801D8C5C; } // 801D8C38
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D8C3C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801D8C40
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8C44
  c->r[4]=(rotl(c->r[0],13)&0x00006000u)|(c->r[4]&~0x00006000u); // 801D8C48
  W32(c->r[29]+0x00000018u,c->r[4]); // 801D8C4C
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D8C50
  W16(c->r[29]+0x00000016u,c->r[0]); // 801D8C54
  goto L_801D8C70; // 801D8C58
L_801D8C5C:;
  c->r[3]=0u+0x00000000u; // 801D8C5C
  c->r[0]=rotl(c->r[4],0)&0xFFFF9FFFu; // 801D8C60
  W32(c->r[29]+0x00000004u,c->r[3]); // 801D8C64
  W32(c->r[29]+0x00000018u,c->r[0]); // 801D8C68
  W16(c->r[29]+0x00000016u,c->r[3]); // 801D8C6C
L_801D8C70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8C70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D8C74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D8C78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D8C7C
  c->lr=c->r[0]; // 801D8C80
  c->r[1]=c->r[1]+0x00000020u; // 801D8C84
  return; // 801D8C88
}

// __ct__Q34nw4r3lyt8DrawInfoFv
void f_801D8C8C(Ctx* __restrict c) {
  trace_call(0x801D8C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8C8C
  c->r[0]=c->lr; // 801D8C90
  c->r[4]=0u+0x802A0000u; // 801D8C94
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8C9C
  c->r[4]=c->r[4]+0x00001B20u; // 801D8CA0
  {uint32_t ea=c->r[2]+0xFFFF9DB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8CA4
  c->r[5]=0u+0x00000001u; // 801D8CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8CAC
  c->r[31]=c->r[3]|c->r[3]; // 801D8CB0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D8CB4
  c->r[4]=0u+0x00000000u; // 801D8CB8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801D8CBC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 801D8CC0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801D8CC4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801D8CC8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801D8CCC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801D8CD0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801D8CD4
  c->r[3]=c->r[3]+0x00000050u; // 801D8CD8
  c->lr=0x801D8CE0u; f_8000443C(c); // 801D8CDC
  c->r[3]=c->r[31]+0x00000004u; // 801D8CE0
  c->lr=0x801D8CE8u; f_800EC094(c); // 801D8CE4
  c->r[3]=c->r[31]|c->r[31]; // 801D8CE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8CEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8CF0
  c->lr=c->r[0]; // 801D8CF4
  c->r[1]=c->r[1]+0x00000010u; // 801D8CF8
  return; // 801D8CFC
}

// __dt__Q34nw4r3lyt8DrawInfoFv
void f_801D8D00(Ctx* __restrict c) {
  trace_call(0x801D8D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8D00
  c->r[0]=c->lr; // 801D8D04
  cmps(c,0,(int32_t)c->r[3],0); // 801D8D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8D0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8D10
  c->r[31]=c->r[3]|c->r[3]; // 801D8D14
  if (crb(c,2)) { goto L_801D8D28; } // 801D8D18
  cmps(c,0,(int32_t)c->r[4],0); // 801D8D1C
  if (!crb(c,1)) { goto L_801D8D28; } // 801D8D20
  c->lr=0x801D8D28u; f_8009230C(c); // 801D8D24
L_801D8D28:;
  c->r[3]=c->r[31]|c->r[31]; // 801D8D28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8D2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8D30
  c->lr=c->r[0]; // 801D8D34
  c->r[1]=c->r[1]+0x00000010u; // 801D8D38
  return; // 801D8D3C
}

// GetStepCurveValue__Q34nw4r3lyt27@unnamed@lyt_animation_cpp@FfPCQ44nw4r3lyt3res7StepKeyUl
void f_801D8D40(Ctx* __restrict c) {
  trace_call(0x801D8D40u);
  cmpu(c,0,c->r[4],0x00000001u); // 801D8D40
  if (crb(c,2)) { goto L_801D8D58; } // 801D8D44
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8D48
  fcmp(c,0,c->f[1],c->f[0]); // 801D8D4C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D8D50
  if (!crb(c,2)) { goto L_801D8D60; } // 801D8D54
L_801D8D58:;
  c->r[3]=R16(c->r[3]+0x00000004u); // 801D8D58
  return; // 801D8D5C
L_801D8D60:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801D8D60
  c->r[5]=c->r[3]+c->r[0]; // 801D8D64
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8D68
  fcmp(c,0,c->f[1],c->f[0]); // 801D8D6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D8D70
  if (!crb(c,2)) { goto L_801D8D80; } // 801D8D74
  c->r[3]=R16(c->r[5]+0xFFFFFFFCu); // 801D8D78
  return; // 801D8D7C
L_801D8D80:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 801D8D80
  c->r[5]=0u+0x00000000u; // 801D8D84
  goto L_801D8DC4; // 801D8D88
L_801D8D8C:;
  c->r[4]=c->r[5]+c->r[6]; // 801D8D8C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801D8D90
  c->r[4]=c->r[0]+c->r[4]; // 801D8D94
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFF8u; // 801D8D98
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8D9C
  c->r[4]=sraw(c,c->r[4],1); // 801D8DA0
  fcmp(c,0,c->f[1],c->f[0]); // 801D8DA4
  c->r[0]=c->cr; // 801D8DA8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801D8DAC
  if (crb(c,2)) { goto L_801D8DB8; } // 801D8DB0
  c->r[6]=c->r[4]|c->r[4]; // 801D8DB4
L_801D8DB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D8DB8
  if (!crb(c,2)) { goto L_801D8DC4; } // 801D8DBC
  c->r[5]=c->r[4]|c->r[4]; // 801D8DC0
L_801D8DC4:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801D8DC4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801D8DC8
  if (crb(c,2)) { goto L_801D8DD8; } // 801D8DCC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801D8DD0
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8D8C; } // 801D8DD4
L_801D8DD8:;
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D8DD8
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8DDC
  {uint32_t ea=c->r[3]+c->r[4]; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8DE0
  c->r[0]=0u+0x00000000u; // 801D8DE4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D8DE8
  fcmp(c,0,c->f[0],c->f[1]); // 801D8DEC
  if (!crb(c,0)) { goto L_801D8E04; } // 801D8DF0
  {uint32_t ea=c->r[2]+0xFFFF9DBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8DF4
  fcmp(c,0,c->f[1],c->f[0]); // 801D8DF8
  if (!crb(c,0)) { goto L_801D8E04; } // 801D8DFC
  c->r[0]=0u+0x00000001u; // 801D8E00
L_801D8E04:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D8E04
  if (crb(c,2)) { goto L_801D8E18; } // 801D8E08
  c->r[3]=c->r[3]+c->r[4]; // 801D8E0C
  c->r[3]=R16(c->r[3]+0x00000004u); // 801D8E10
  return; // 801D8E14
L_801D8E18:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801D8E18
  c->r[3]=c->r[3]+c->r[0]; // 801D8E1C
  c->r[3]=R16(c->r[3]+0x00000004u); // 801D8E20
  return; // 801D8E24
}

// GetHermiteCurveValue__Q34nw4r3lyt27@unnamed@lyt_animation_cpp@FfPCQ44nw4r3lyt3res10HermiteKeyUl
void f_801D8E28(Ctx* __restrict c) {
  trace_call(0x801D8E28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8E28
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801D8E2C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801D8E30
  cmpu(c,0,c->r[4],0x00000001u); // 801D8E34
  if (crb(c,2)) { goto L_801D8E4C; } // 801D8E38
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8E3C
  fcmp(c,0,c->f[1],c->f[0]); // 801D8E40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D8E44
  if (!crb(c,2)) { goto L_801D8E54; } // 801D8E48
L_801D8E4C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8E4C
  goto L_801D8FD4; // 801D8E50
L_801D8E54:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801D8E54
  c->r[5]=c->r[3]+c->r[0]; // 801D8E58
  {uint32_t ea=c->r[5]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8E5C
  fcmp(c,0,c->f[1],c->f[0]); // 801D8E60
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D8E64
  if (!crb(c,2)) { goto L_801D8E74; } // 801D8E68
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8E6C
  goto L_801D8FD4; // 801D8E70
L_801D8E74:;
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801D8E74
  c->r[6]=0u+0x00000000u; // 801D8E78
  goto L_801D8EBC; // 801D8E7C
L_801D8E80:;
  c->r[5]=c->r[6]+c->r[7]; // 801D8E80
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 801D8E84
  c->r[0]=c->r[0]+c->r[5]; // 801D8E88
  c->r[5]=sraw(c,c->r[0],1); // 801D8E8C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 801D8E90
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8E94
  fcmp(c,0,c->f[1],c->f[0]); // 801D8E98
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D8E9C
  c->r[0]=c->cr; // 801D8EA0
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 801D8EA4
  if (crb(c,2)) { goto L_801D8EB0; } // 801D8EA8
  c->r[7]=c->r[5]|c->r[5]; // 801D8EAC
L_801D8EB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D8EB0
  if (!crb(c,2)) { goto L_801D8EBC; } // 801D8EB4
  c->r[6]=c->r[5]|c->r[5]; // 801D8EB8
L_801D8EBC:;
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801D8EBC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801D8EC0
  if (crb(c,2)) { goto L_801D8ED0; } // 801D8EC4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 801D8EC8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8E80; } // 801D8ECC
L_801D8ED0:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 801D8ED0
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8ED4
  c->r[0]=0u+0x00000000u; // 801D8ED8
  {uint32_t ea=c->r[3]+c->r[5]; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8EDC
  c->r[8]=c->r[3]+c->r[5]; // 801D8EE0
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D8EE4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 801D8EE8
  c->r[5]=c->r[3]+c->r[5]; // 801D8EEC
  fcmp(c,0,c->f[0],c->f[2]); // 801D8EF0
  if (!crb(c,0)) { goto L_801D8F08; } // 801D8EF4
  {uint32_t ea=c->r[2]+0xFFFF9DBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8EF8
  fcmp(c,0,c->f[2],c->f[0]); // 801D8EFC
  if (!crb(c,0)) { goto L_801D8F08; } // 801D8F00
  c->r[0]=0u+0x00000001u; // 801D8F04
L_801D8F08:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D8F08
  if (crb(c,2)) { goto L_801D8F48; } // 801D8F0C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D8F10
  cmpu(c,0,c->r[7],c->r[0]); // 801D8F14
  if (!crb(c,0)) { goto L_801D8F40; } // 801D8F18
  c->r[0]=c->r[7]+0x00000001u; // 801D8F1C
  {uint32_t ea=c->r[8]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8F20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D8F24
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8F28
  fcmp(c,0,c->f[1],c->f[0]); // 801D8F2C
  if (!crb(c,2)) { goto L_801D8F40; } // 801D8F30
  c->r[3]=c->r[3]+c->r[0]; // 801D8F34
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8F38
  goto L_801D8FD4; // 801D8F3C
L_801D8F40:;
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8F40
  goto L_801D8FD4; // 801D8F44
L_801D8F48:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8F48
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8F4C
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 801D8F50
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[6]=c->ps1[6]=RF32(ea);} // 801D8F54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D8F58
  {uint32_t ea=c->r[2]+0xFFFF9DC4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D8F5C
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8F60
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[7]); // 801D8F64
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[0]); // 801D8F68
  {uint32_t ea=c->r[2]+0xFFFF9DCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8F6C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801D8F70
  {uint32_t ea=c->r[8]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 801D8F74
  {uint32_t ea=c->r[5]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 801D8F78
  {uint32_t ea=c->r[8]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 801D8F7C
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[2]); // 801D8F80
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[5]); // 801D8F84
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 801D8F88
  c->f[13]=c->ps1[13]=S(c->f[7]*c->f[2]); // 801D8F8C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 801D8F90
  c->f[31]=c->ps1[31]=S(c->f[13]*c->f[5]); // 801D8F94
  c->f[3]=c->ps1[3]=S(c->f[13]-c->f[3]); // 801D8F98
  c->f[5]=c->ps1[5]=S(c->f[13]-c->f[12]); // 801D8F9C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[31]); // 801D8FA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801D8FA4
  c->f[3]=c->ps1[3]=S(c->f[7]+c->f[3]); // 801D8FA8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D8FAC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801D8FB0
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[3]); // 801D8FB4
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 801D8FB8
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 801D8FBC
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[5]); // 801D8FC0
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 801D8FC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D8FC8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801D8FCC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 801D8FD0
L_801D8FD4:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801D8FD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801D8FD8
  c->r[1]=c->r[1]+0x00000020u; // 801D8FDC
  return; // 801D8FE0
}

// GetFrameSize__Q34nw4r3lyt13AnimTransformCFv
void f_801D8FE4(Ctx* __restrict c) {
  trace_call(0x801D8FE4u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801D8FE4
  c->r[3]=R16(c->r[3]+0x00000008u); // 801D8FE8
  return; // 801D8FEC
}

// IsLoopData__Q34nw4r3lyt13AnimTransformCFv
void f_801D8FF0(Ctx* __restrict c) {
  trace_call(0x801D8FF0u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801D8FF0
  c->r[3]=R8(c->r[3]+0x0000000Au); // 801D8FF4
  c->r[0]=0u-c->r[3]; // 801D8FF8
  c->r[0]=c->r[0]|c->r[3]; // 801D8FFC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D9000
  return; // 801D9004
}

// __ct__Q34nw4r3lyt18AnimTransformBasicFv
void f_801D9008(Ctx* __restrict c) {
  trace_call(0x801D9008u);
  {uint32_t ea=c->r[2]+0xFFFF9DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9008
  c->r[4]=0u+0x802A0000u; // 801D900C
  c->r[0]=0u+0x00000000u; // 801D9010
  c->r[4]=c->r[4]+0x00001B30u; // 801D9014
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D9018
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D901C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D9020
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801D9024
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D9028
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D902C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D9030
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 801D9034
  return; // 801D9038
}

// __dt__Q34nw4r3lyt18AnimTransformBasicFv
void f_801D903C(Ctx* __restrict c) {
  trace_call(0x801D903Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D903C
  c->r[0]=c->lr; // 801D9040
  cmps(c,0,(int32_t)c->r[3],0); // 801D9044
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D904C
  c->r[31]=c->r[4]|c->r[4]; // 801D9050
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D9054
  c->r[30]=c->r[3]|c->r[3]; // 801D9058
  if (crb(c,2)) { goto L_801D90A4; } // 801D905C
  c->r[4]=R32(c->r[3]+0x00000018u); // 801D9060
  c->r[5]=0u+0x802A0000u; // 801D9064
  c->r[5]=c->r[5]+0x00001B30u; // 801D9068
  cmps(c,0,(int32_t)c->r[4],0); // 801D906C
  W32(c->r[3]+0x00000000u,c->r[5]); // 801D9070
  if (crb(c,2)) { goto L_801D9080; } // 801D9074
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D9078
  c->lr=0x801D9080u; f_80128078(c); // 801D907C
L_801D9080:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 801D9080
  cmps(c,0,(int32_t)c->r[4],0); // 801D9084
  if (crb(c,2)) { goto L_801D9094; } // 801D9088
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D908C
  c->lr=0x801D9094u; f_80128078(c); // 801D9090
L_801D9094:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D9094
  if (!crb(c,1)) { goto L_801D90A4; } // 801D9098
  c->r[3]=c->r[30]|c->r[30]; // 801D909C
  c->lr=0x801D90A4u; f_8009230C(c); // 801D90A0
L_801D90A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D90A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D90A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D90AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D90B0
  c->lr=c->r[0]; // 801D90B4
  c->r[1]=c->r[1]+0x00000010u; // 801D90B8
  return; // 801D90BC
}

// SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessor
void f_801D90C0(Ctx* __restrict c) {
  trace_call(0x801D90C0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D90C0
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 801D90C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D90C8
  c->ctr=c->r[12]; // 801D90CC
  if (true) { dispatch(c,c->ctr); return; } // 801D90D0
}

// SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessorUs
void f_801D90D4(Ctx* __restrict c) {
  trace_call(0x801D90D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D90D4
  c->r[0]=c->lr; // 801D90D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D90DC
  c->r[11]=c->r[1]+0x00000030u; // 801D90E0
  c->lr=0x801D90E8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D90E4
  c->r[27]=R16(c->r[4]+0x0000000Cu); // 801D90E8
  c->r[30]=0u+0x00000000u; // 801D90EC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801D90F0
  c->r[31]=c->r[3]|c->r[3]; // 801D90F4
  cmps(c,0,(int32_t)c->r[27],0); // 801D90F8
  c->r[24]=c->r[5]|c->r[5]; // 801D90FC
  W32(c->r[3]+0x00000014u,c->r[30]); // 801D9100
  c->r[25]=c->r[6]|c->r[6]; // 801D9104
  if (crb(c,2)) { goto L_801D91BC; } // 801D9108
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D910C
  c->r[4]=rotl(c->r[27],2)&0x0003FFFCu; // 801D9110
  c->lr=0x801D9118u; f_80128068(c); // 801D9114
  cmps(c,0,(int32_t)c->r[3],0); // 801D9118
  if (!crb(c,2)) { goto L_801D9128; } // 801D911C
  c->r[3]=0u+0x00000000u; // 801D9120
  goto L_801D914C; // 801D9124
L_801D9128:;
  c->r[4]=c->r[3]|c->r[3]; // 801D9128
  c->ctr=c->r[27]; // 801D912C
  cmpu(c,0,c->r[27],0x00000000u); // 801D9130
  if (!crb(c,1)) { goto L_801D914C; } // 801D9134
L_801D9138:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D9138
  if (crb(c,2)) { goto L_801D9144; } // 801D913C
  W32(c->r[4]+0x00000000u,c->r[30]); // 801D9140
L_801D9144:;
  c->r[4]=c->r[4]+0x00000004u; // 801D9144
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9138; } // 801D9148
L_801D914C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D914C
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D9150
  if (crb(c,2)) { goto L_801D91BC; } // 801D9154
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801D9158
  c->r[26]=0u+0x00000000u; // 801D915C
  c->r[27]=0u+0x00000000u; // 801D9160
  c->r[30]=0u+0x74690000u; // 801D9164
  c->r[29]=c->r[3]+0x00000014u; // 801D9168
  c->r[28]=c->r[29]|c->r[29]; // 801D916C
  goto L_801D91AC; // 801D9170
L_801D9174:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 801D9174
  c->r[3]=c->r[24]|c->r[24]; // 801D9178
  c->r[0]=R32(c->r[28]+0x00000000u); // 801D917C
  c->r[4]=c->r[30]+0x00006D67u; // 801D9180
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D9184
  c->r[6]=0u+0x00000000u; // 801D9188
  c->r[5]=c->r[29]+c->r[0]; // 801D918C
  c->ctr=c->r[12]; // 801D9190
  if (true) { c->lr=0x801D9198u; dispatch(c,c->ctr); } // 801D9194
  c->r[4]=R32(c->r[31]+0x00000014u); // 801D9198
  c->r[28]=c->r[28]+0x00000004u; // 801D919C
  c->r[26]=c->r[26]+0x00000001u; // 801D91A0
  W32(c->r[4]+c->r[27],c->r[3]); // 801D91A4
  c->r[27]=c->r[27]+0x00000004u; // 801D91A8
L_801D91AC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801D91AC
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 801D91B0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801D91B4
  if (crb(c,0)) { IRQCHK(c); goto L_801D9174; } // 801D91B8
L_801D91BC:;
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801D91BC
  c->r[4]=rotl(c->r[25],4)&0x000FFFF0u; // 801D91C0
  c->lr=0x801D91C8u; f_80128068(c); // 801D91C4
  cmps(c,0,(int32_t)c->r[3],0); // 801D91C8
  if (!crb(c,2)) { goto L_801D91D8; } // 801D91CC
  c->r[3]=0u+0x00000000u; // 801D91D0
  goto L_801D9210; // 801D91D4
L_801D91D8:;
  c->r[4]=c->r[3]|c->r[3]; // 801D91D8
  c->r[0]=0u+0x00000000u; // 801D91DC
  c->ctr=c->r[25]; // 801D91E0
  cmpu(c,0,c->r[25],0x00000000u); // 801D91E4
  if (!crb(c,1)) { goto L_801D9210; } // 801D91E8
L_801D91EC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D91EC
  if (crb(c,2)) { goto L_801D9208; } // 801D91F0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D91F4
  W32(c->r[4]+0x00000004u,c->r[0]); // 801D91F8
  W32(c->r[4]+0x00000008u,c->r[0]); // 801D91FC
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801D9200
  W8(c->r[4]+0x0000000Eu,c->r[0]); // 801D9204
L_801D9208:;
  c->r[4]=c->r[4]+0x00000010u; // 801D9208
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D91EC; } // 801D920C
L_801D9210:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D9210
  W32(c->r[31]+0x00000018u,c->r[3]); // 801D9214
  if (crb(c,2)) { goto L_801D9220; } // 801D9218
  W16(c->r[31]+0x0000001Cu,c->r[25]); // 801D921C
L_801D9220:;
  c->r[11]=c->r[1]+0x00000030u; // 801D9220
  c->lr=0x801D9228u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9224
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D9228
  c->lr=c->r[0]; // 801D922C
  c->r[1]=c->r[1]+0x00000030u; // 801D9230
  return; // 801D9234
}

// Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt4Panebb
void f_801D9238(Ctx* __restrict c) {
  trace_call(0x801D9238u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9238
  c->r[0]=c->lr; // 801D923C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D9240
  c->r[11]=c->r[1]+0x00000030u; // 801D9244
  c->lr=0x801D924Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9248
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801D924C
  c->r[25]=c->r[3]|c->r[3]; // 801D9250
  c->r[26]=c->r[4]|c->r[4]; // 801D9254
  c->r[27]=c->r[5]|c->r[5]; // 801D9258
  c->r[0]=R32(c->r[7]+0x00000010u); // 801D925C
  c->r[28]=c->r[6]|c->r[6]; // 801D9260
  c->r[31]=0u+0x00000000u; // 801D9264
  c->r[29]=0u+0x00000000u; // 801D9268
  c->r[30]=c->r[7]+c->r[0]; // 801D926C
  goto L_801D93D4; // 801D9270
L_801D9274:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 801D9274
  c->r[0]=R32(c->r[30]+c->r[0]); // 801D9278
  c->r[4]=c->r[4]+c->r[0]; // 801D927C
  c->r[0]=R8(c->r[4]+0x00000015u); // 801D9280
  cmps(c,0,(int32_t)c->r[0],0); // 801D9284
  if (!crb(c,2)) { goto L_801D9330; } // 801D9288
  c->r[12]=R32(c->r[26]+0x00000000u); // 801D928C
  c->r[3]=c->r[26]|c->r[26]; // 801D9290
  c->r[5]=c->r[27]|c->r[27]; // 801D9294
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D9298
  c->ctr=c->r[12]; // 801D929C
  if (true) { c->lr=0x801D92A4u; dispatch(c,c->ctr); } // 801D92A0
  cmps(c,0,(int32_t)c->r[3],0); // 801D92A4
  if (crb(c,2)) { goto L_801D93D0; } // 801D92A8
  cmps(c,0,(int32_t)c->r[31],0); // 801D92AC
  if (!crb(c,2)) { goto L_801D92B8; } // 801D92B0
  c->r[31]=R32(c->r[25]+0x00000018u); // 801D92B4
L_801D92B8:;
  c->r[0]=R16(c->r[25]+0x0000001Cu); // 801D92B8
  c->r[4]=R32(c->r[25]+0x00000018u); // 801D92BC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D92C0
  c->r[4]=c->r[4]+c->r[0]; // 801D92C4
  c->r[0]=c->r[4]+0x0000000Fu; // 801D92C8
  c->r[0]=c->r[0]-c->r[31]; // 801D92CC
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801D92D0
  c->ctr=c->r[0]; // 801D92D4
  cmpu(c,0,c->r[31],c->r[4]); // 801D92D8
  if (!crb(c,0)) { goto L_801D92F8; } // 801D92DC
L_801D92E0:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D92E0
  cmps(c,0,(int32_t)c->r[0],0); // 801D92E4
  if (!crb(c,2)) { goto L_801D92F0; } // 801D92E8
  goto L_801D92FC; // 801D92EC
L_801D92F0:;
  c->r[31]=c->r[31]+0x00000010u; // 801D92F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D92E0; } // 801D92F4
L_801D92F8:;
  c->r[31]=0u+0x00000000u; // 801D92F8
L_801D92FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D92FC
  if (!crb(c,2)) { goto L_801D930C; } // 801D9300
  c->r[31]=0u+0x00000000u; // 801D9304
  goto L_801D9324; // 801D9308
L_801D930C:;
  W32(c->r[31]+0x00000008u,c->r[25]); // 801D930C
  c->r[4]=c->r[31]|c->r[31]; // 801D9310
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 801D9314
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 801D9318
  c->lr=0x801D9320u; f_801CFC8C(c); // 801D931C
  c->r[31]=c->r[31]+0x00000010u; // 801D9320
L_801D9324:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D9324
  if (crb(c,2)) { goto L_801D93E8; } // 801D9328
  goto L_801D93D0; // 801D932C
L_801D9330:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801D9330
  c->r[3]=c->r[26]|c->r[26]; // 801D9334
  c->r[5]=c->r[27]|c->r[27]; // 801D9338
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D933C
  c->ctr=c->r[12]; // 801D9340
  if (true) { c->lr=0x801D9348u; dispatch(c,c->ctr); } // 801D9344
  cmps(c,0,(int32_t)c->r[3],0); // 801D9348
  if (crb(c,2)) { goto L_801D93D0; } // 801D934C
  cmps(c,0,(int32_t)c->r[31],0); // 801D9350
  if (!crb(c,2)) { goto L_801D935C; } // 801D9354
  c->r[31]=R32(c->r[25]+0x00000018u); // 801D9358
L_801D935C:;
  c->r[0]=R16(c->r[25]+0x0000001Cu); // 801D935C
  c->r[4]=R32(c->r[25]+0x00000018u); // 801D9360
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D9364
  c->r[4]=c->r[4]+c->r[0]; // 801D9368
  c->r[0]=c->r[4]+0x0000000Fu; // 801D936C
  c->r[0]=c->r[0]-c->r[31]; // 801D9370
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801D9374
  c->ctr=c->r[0]; // 801D9378
  cmpu(c,0,c->r[31],c->r[4]); // 801D937C
  if (!crb(c,0)) { goto L_801D939C; } // 801D9380
L_801D9384:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D9384
  cmps(c,0,(int32_t)c->r[0],0); // 801D9388
  if (!crb(c,2)) { goto L_801D9394; } // 801D938C
  goto L_801D93A0; // 801D9390
L_801D9394:;
  c->r[31]=c->r[31]+0x00000010u; // 801D9394
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9384; } // 801D9398
L_801D939C:;
  c->r[31]=0u+0x00000000u; // 801D939C
L_801D93A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D93A0
  if (!crb(c,2)) { goto L_801D93B0; } // 801D93A4
  c->r[31]=0u+0x00000000u; // 801D93A8
  goto L_801D93C8; // 801D93AC
L_801D93B0:;
  W32(c->r[31]+0x00000008u,c->r[25]); // 801D93B0
  c->r[4]=c->r[31]|c->r[31]; // 801D93B4
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 801D93B8
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 801D93BC
  c->lr=0x801D93C4u; f_801D87D4(c); // 801D93C0
  c->r[31]=c->r[31]+0x00000010u; // 801D93C4
L_801D93C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D93C8
  if (crb(c,2)) { goto L_801D93E8; } // 801D93CC
L_801D93D0:;
  c->r[29]=c->r[29]+0x00000001u; // 801D93D0
L_801D93D4:;
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 801D93D4
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801D93D8
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801D93DC
  cmpu(c,0,c->r[3],c->r[0]); // 801D93E0
  if (crb(c,0)) { IRQCHK(c); goto L_801D9274; } // 801D93E4
L_801D93E8:;
  c->r[11]=c->r[1]+0x00000030u; // 801D93E8
  c->lr=0x801D93F0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D93EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D93F0
  c->lr=c->r[0]; // 801D93F4
  c->r[1]=c->r[1]+0x00000030u; // 801D93F8
  return; // 801D93FC
}

// Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt8Materialb
void f_801D9400(Ctx* __restrict c) {
  trace_call(0x801D9400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9400
  c->r[0]=c->lr; // 801D9404
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9408
  c->r[11]=c->r[1]+0x00000020u; // 801D940C
  c->lr=0x801D9414u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9410
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 801D9414
  c->r[26]=c->r[3]|c->r[3]; // 801D9418
  c->r[27]=c->r[4]|c->r[4]; // 801D941C
  c->r[28]=c->r[5]|c->r[5]; // 801D9420
  c->r[0]=R32(c->r[6]+0x00000010u); // 801D9424
  c->r[31]=0u+0x00000000u; // 801D9428
  c->r[29]=0u+0x00000000u; // 801D942C
  c->r[30]=c->r[6]+c->r[0]; // 801D9430
  goto L_801D94E8; // 801D9434
L_801D9438:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 801D9438
  c->r[0]=R32(c->r[30]+c->r[0]); // 801D943C
  c->r[4]=c->r[4]+c->r[0]; // 801D9440
  c->r[0]=R8(c->r[4]+0x00000015u); // 801D9444
  cmpu(c,0,c->r[0],0x00000001u); // 801D9448
  if (!crb(c,2)) { goto L_801D94E4; } // 801D944C
  c->r[3]=c->r[27]+0x00000044u; // 801D9450
  c->lr=0x801D9458u; f_801DA83C(c); // 801D9454
  cmps(c,0,(int32_t)c->r[3],0); // 801D9458
  if (crb(c,2)) { goto L_801D94E4; } // 801D945C
  cmps(c,0,(int32_t)c->r[31],0); // 801D9460
  if (!crb(c,2)) { goto L_801D946C; } // 801D9464
  c->r[31]=R32(c->r[26]+0x00000018u); // 801D9468
L_801D946C:;
  c->r[0]=R16(c->r[26]+0x0000001Cu); // 801D946C
  c->r[3]=R32(c->r[26]+0x00000018u); // 801D9470
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D9474
  c->r[3]=c->r[3]+c->r[0]; // 801D9478
  c->r[0]=c->r[3]+0x0000000Fu; // 801D947C
  c->r[0]=c->r[0]-c->r[31]; // 801D9480
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801D9484
  c->ctr=c->r[0]; // 801D9488
  cmpu(c,0,c->r[31],c->r[3]); // 801D948C
  if (!crb(c,0)) { goto L_801D94AC; } // 801D9490
L_801D9494:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D9494
  cmps(c,0,(int32_t)c->r[0],0); // 801D9498
  if (!crb(c,2)) { goto L_801D94A4; } // 801D949C
  goto L_801D94B0; // 801D94A0
L_801D94A4:;
  c->r[31]=c->r[31]+0x00000010u; // 801D94A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9494; } // 801D94A8
L_801D94AC:;
  c->r[31]=0u+0x00000000u; // 801D94AC
L_801D94B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D94B0
  if (!crb(c,2)) { goto L_801D94C0; } // 801D94B4
  c->r[31]=0u+0x00000000u; // 801D94B8
  goto L_801D94DC; // 801D94BC
L_801D94C0:;
  W32(c->r[31]+0x00000008u,c->r[26]); // 801D94C0
  c->r[3]=c->r[27]|c->r[27]; // 801D94C4
  c->r[4]=c->r[31]|c->r[31]; // 801D94C8
  W16(c->r[31]+0x0000000Cu,c->r[29]); // 801D94CC
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 801D94D0
  c->lr=0x801D94D8u; f_801D87D4(c); // 801D94D4
  c->r[31]=c->r[31]+0x00000010u; // 801D94D8
L_801D94DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D94DC
  if (crb(c,2)) { goto L_801D94FC; } // 801D94E0
L_801D94E4:;
  c->r[29]=c->r[29]+0x00000001u; // 801D94E4
L_801D94E8:;
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801D94E8
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801D94EC
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801D94F0
  cmpu(c,0,c->r[3],c->r[0]); // 801D94F4
  if (crb(c,0)) { IRQCHK(c); goto L_801D9438; } // 801D94F8
L_801D94FC:;
  c->r[11]=c->r[1]+0x00000020u; // 801D94FC
  c->lr=0x801D9504u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9500
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9504
  c->lr=c->r[0]; // 801D9508
  c->r[1]=c->r[1]+0x00000020u; // 801D950C
  return; // 801D9510
}

// Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt4Pane
void f_801D9514(Ctx* __restrict c) {
  trace_call(0x801D9514u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9514
  c->r[0]=c->lr; // 801D9518
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D951C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801D9520
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801D9524
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801D9528
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801D952C
  c->r[11]=c->r[1]+0x00000040u; // 801D9530
  c->lr=0x801D9538u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9534
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 801D9538
  c->r[31]=0u+0x524C0000u; // 801D953C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D9540
  {uint32_t ea=c->r[2]+0xFFFF9DD4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D9544
  c->r[0]=R32(c->r[6]+0x00000010u); // 801D9548
  c->r[22]=c->r[3]|c->r[3]; // 801D954C
  c->r[23]=c->r[5]|c->r[5]; // 801D9550
  c->r[30]=c->r[31]+0x00005643u; // 801D9554
  c->r[0]=c->r[6]+c->r[0]; // 801D9558
  c->r[24]=0u+0x00000000u; // 801D955C
  c->r[0]=R32(c->r[4]+c->r[0]); // 801D9560
  c->r[28]=c->r[6]+c->r[0]; // 801D9564
  c->r[26]=c->r[28]+0x00000018u; // 801D9568
  goto L_801D96CC; // 801D956C
L_801D9570:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 801D9570
  c->r[3]=R32(c->r[28]+c->r[0]); // 801D9574
  c->r[27]=c->r[28]+c->r[0]; // 801D9578
  c->r[25]=c->r[27]+0x00000008u; // 801D957C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 801D9580
  if (crb(c,2)) { goto L_801D9658; } // 801D9584
  if (!crb(c,0)) { goto L_801D959C; } // 801D9588
  c->r[0]=c->r[31]+0x00005041u; // 801D958C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D9590
  if (crb(c,2)) { goto L_801D95AC; } // 801D9594
  goto L_801D96C4; // 801D9598
L_801D959C:;
  c->r[0]=c->r[31]+0x00005649u; // 801D959C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D95A0
  if (crb(c,2)) { goto L_801D95FC; } // 801D95A4
  goto L_801D96C4; // 801D95A8
L_801D95AC:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D95AC
  c->r[29]=0u+0x00000000u; // 801D95B0
  goto L_801D95EC; // 801D95B4
L_801D95B8:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 801D95B8
  c->f[1]=c->f[30]; // 801D95BC
  c->r[21]=c->r[27]+c->r[0]; // 801D95C0
  c->r[0]=R32(c->r[21]+0x00000008u); // 801D95C4
  c->r[4]=R16(c->r[21]+0x00000004u); // 801D95C8
  c->r[3]=c->r[21]+c->r[0]; // 801D95CC
  c->lr=0x801D95D4u; f_801D8E28(c); // 801D95D0
  c->r[0]=R8(c->r[21]+0x00000001u); // 801D95D4
  c->r[25]=c->r[25]+0x00000004u; // 801D95D8
  c->r[29]=c->r[29]+0x00000001u; // 801D95DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D95E0
  c->r[3]=c->r[23]+c->r[0]; // 801D95E4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801D95E8
L_801D95EC:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D95EC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D95F0
  if (crb(c,0)) { IRQCHK(c); goto L_801D95B8; } // 801D95F4
  goto L_801D96C4; // 801D95F8
L_801D95FC:;
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D95FC
  c->r[29]=0u+0x00000000u; // 801D9600
  goto L_801D9648; // 801D9604
L_801D9608:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 801D9608
  c->f[1]=c->f[30]; // 801D960C
  c->r[3]=c->r[27]+c->r[0]; // 801D9610
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D9614
  c->r[4]=R16(c->r[3]+0x00000004u); // 801D9618
  c->r[3]=c->r[3]+c->r[0]; // 801D961C
  c->lr=0x801D9624u; f_801D8D40(c); // 801D9620
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801D9624
  c->r[0]=R8(c->r[23]+0x000000BBu); // 801D9628
  c->r[3]=0u-c->r[4]; // 801D962C
  c->r[25]=c->r[25]+0x00000004u; // 801D9630
  c->r[3]=c->r[3]|c->r[4]; // 801D9634
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801D9638
  c->r[0]=(rotl(c->r[3],1)&0x00000001u)|(c->r[0]&~0x00000001u); // 801D963C
  c->r[29]=c->r[29]+0x00000001u; // 801D9640
  W8(c->r[23]+0x000000BBu,c->r[0]); // 801D9644
L_801D9648:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D9648
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D964C
  if (crb(c,0)) { IRQCHK(c); goto L_801D9608; } // 801D9650
  goto L_801D96C4; // 801D9654
L_801D9658:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D9658
  c->r[29]=0u+0x00000000u; // 801D965C
  {uint32_t ea=c->r[22]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D9660
  cmps(c,0,(int32_t)c->r[0],0); // 801D9664
  if (!crb(c,1)) { goto L_801D96C4; } // 801D9668
  goto L_801D96B8; // 801D966C
L_801D9670:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 801D9670
  c->f[1]=c->f[30]; // 801D9674
  c->r[21]=c->r[27]+c->r[0]; // 801D9678
  c->r[0]=R32(c->r[21]+0x00000008u); // 801D967C
  c->r[4]=R16(c->r[21]+0x00000004u); // 801D9680
  c->r[3]=c->r[21]+c->r[0]; // 801D9684
  c->lr=0x801D968Cu; f_801D8E28(c); // 801D9688
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 801D968C
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,2);} // 801D9690
  c->r[3]=c->r[23]|c->r[23]; // 801D9694
  c->r[12]=R32(c->r[23]+0x00000000u); // 801D9698
  c->r[5]=R8(c->r[1]+0x00000008u); // 801D969C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801D96A0
  c->r[4]=R8(c->r[21]+0x00000001u); // 801D96A4
  c->ctr=c->r[12]; // 801D96A8
  if (true) { c->lr=0x801D96B0u; dispatch(c,c->ctr); } // 801D96AC
  c->r[25]=c->r[25]+0x00000004u; // 801D96B0
  c->r[29]=c->r[29]+0x00000001u; // 801D96B4
L_801D96B8:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D96B8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D96BC
  if (crb(c,0)) { IRQCHK(c); goto L_801D9670; } // 801D96C0
L_801D96C4:;
  c->r[26]=c->r[26]+0x00000004u; // 801D96C4
  c->r[24]=c->r[24]+0x00000001u; // 801D96C8
L_801D96CC:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 801D96CC
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801D96D0
  if (crb(c,0)) { IRQCHK(c); goto L_801D9570; } // 801D96D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801D96D8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801D96DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801D96E0
  c->r[11]=c->r[1]+0x00000040u; // 801D96E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801D96E8
  c->lr=0x801D96F0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D96EC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D96F0
  c->lr=c->r[0]; // 801D96F4
  c->r[1]=c->r[1]+0x00000060u; // 801D96F8
  return; // 801D96FC
}

// Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt8Material
void f_801D9700(Ctx* __restrict c) {
  trace_call(0x801D9700u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9700
  c->r[0]=c->lr; // 801D9704
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D9708
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801D970C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801D9710
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801D9714
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801D9718
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801D971C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801D9720
  c->r[11]=c->r[1]+0x00000050u; // 801D9724
  c->lr=0x801D972Cu; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9728
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 801D972C
  c->r[31]=0u+0x524C0000u; // 801D9730
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D9734
  {uint32_t ea=c->r[2]+0xFFFF9DD4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D9738
  c->r[0]=R32(c->r[6]+0x00000010u); // 801D973C
  c->r[20]=c->r[3]|c->r[3]; // 801D9740
  c->r[21]=c->r[5]|c->r[5]; // 801D9744
  c->r[30]=c->r[31]+0x00005450u; // 801D9748
  c->r[0]=c->r[6]+c->r[0]; // 801D974C
  c->r[22]=0u+0x00000000u; // 801D9750
  c->r[0]=R32(c->r[4]+c->r[0]); // 801D9754
  c->r[28]=c->r[6]+c->r[0]; // 801D9758
  c->r[25]=c->r[28]+0x00000018u; // 801D975C
  goto L_801D99C0; // 801D9760
L_801D9764:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 801D9764
  c->r[3]=R32(c->r[28]+c->r[0]); // 801D9768
  c->r[27]=c->r[28]+c->r[0]; // 801D976C
  c->r[24]=c->r[27]+0x00000008u; // 801D9770
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 801D9774
  if (crb(c,2)) { goto L_801D98B4; } // 801D9778
  if (!crb(c,0)) { goto L_801D97A0; } // 801D977C
  c->r[0]=c->r[31]+0x00004D43u; // 801D9780
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D9784
  if (crb(c,2)) { goto L_801D97B0; } // 801D9788
  if (!crb(c,0)) { goto L_801D99B8; } // 801D978C
  c->r[0]=c->r[31]+0x0000494Du; // 801D9790
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D9794
  if (crb(c,2)) { goto L_801D9944; } // 801D9798
  goto L_801D99B8; // 801D979C
L_801D97A0:;
  c->r[0]=c->r[31]+0x00005453u; // 801D97A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D97A4
  if (crb(c,2)) { goto L_801D983C; } // 801D97A8
  goto L_801D99B8; // 801D97AC
L_801D97B0:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D97B0
  c->r[19]=0u+0x00000000u; // 801D97B4
  {uint32_t ea=c->r[20]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D97B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D97BC
  if (!crb(c,1)) { goto L_801D99B8; } // 801D97C0
  goto L_801D982C; // 801D97C4
L_801D97C8:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 801D97C8
  c->f[1]=c->f[31]; // 801D97CC
  c->r[23]=c->r[27]+c->r[0]; // 801D97D0
  c->r[0]=R32(c->r[23]+0x00000008u); // 801D97D4
  c->r[4]=R16(c->r[23]+0x00000004u); // 801D97D8
  c->r[3]=c->r[23]+c->r[0]; // 801D97DC
  c->lr=0x801D97E4u; f_801D8E28(c); // 801D97E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[30]); // 801D97E4
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 801D97E8
  c->r[6]=0u+0xFFFFFC00u; // 801D97EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 801D97F0
  cmps(c,0,(int32_t)c->r[0],-1024); // 801D97F4
  if (crb(c,0)) { goto L_801D9800; } // 801D97F8
  c->r[6]=c->r[0]|c->r[0]; // 801D97FC
L_801D9800:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 801D9800
  c->r[4]=R8(c->r[23]+0x00000001u); // 801D9804
  cmps(c,0,(int32_t)c->r[0],1023); // 801D9808
  c->r[3]=c->r[21]|c->r[21]; // 801D980C
  c->r[5]=0u+0x000003FFu; // 801D9810
  if (crb(c,1)) { goto L_801D981C; } // 801D9814
  c->r[5]=c->r[6]|c->r[6]; // 801D9818
L_801D981C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 801D981C
  c->lr=0x801D9824u; f_801D76A0(c); // 801D9820
  c->r[24]=c->r[24]+0x00000004u; // 801D9824
  c->r[19]=c->r[19]+0x00000001u; // 801D9828
L_801D982C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D982C
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 801D9830
  if (crb(c,0)) { IRQCHK(c); goto L_801D97C8; } // 801D9834
  goto L_801D99B8; // 801D9838
L_801D983C:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 801D983C
  c->r[29]=0u+0x00000000u; // 801D9840
  goto L_801D98A4; // 801D9844
L_801D9848:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 801D9848
  c->r[0]=R32(c->r[21]+0x00000038u); // 801D984C
  c->r[23]=c->r[27]+c->r[3]; // 801D9850
  c->r[3]=R8(c->r[27]+c->r[3]); // 801D9854
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 801D9858
  cmpu(c,0,c->r[3],c->r[0]); // 801D985C
  if (!crb(c,0)) { goto L_801D989C; } // 801D9860
  c->r[0]=R32(c->r[23]+0x00000008u); // 801D9864
  c->f[1]=c->f[29]; // 801D9868
  c->r[4]=R16(c->r[23]+0x00000004u); // 801D986C
  c->r[3]=c->r[23]+c->r[0]; // 801D9870
  c->lr=0x801D9878u; f_801D8E28(c); // 801D9874
  c->f[31]=c->f[1]; // 801D9878
  c->r[19]=R8(c->r[23]+0x00000001u); // 801D987C
  c->r[23]=R8(c->r[23]+0x00000000u); // 801D9880
  c->r[3]=c->r[21]|c->r[21]; // 801D9884
  c->lr=0x801D988Cu; f_801D70EC(c); // 801D9888
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)20); // 801D988C
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 801D9890
  c->r[3]=c->r[3]+c->r[4]; // 801D9894
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 801D9898
L_801D989C:;
  c->r[24]=c->r[24]+0x00000004u; // 801D989C
  c->r[29]=c->r[29]+0x00000001u; // 801D98A0
L_801D98A4:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D98A4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D98A8
  if (crb(c,0)) { IRQCHK(c); goto L_801D9848; } // 801D98AC
  goto L_801D99B8; // 801D98B0
L_801D98B4:;
  c->r[23]=R32(c->r[20]+0x00000014u); // 801D98B4
  cmps(c,0,(int32_t)c->r[23],0); // 801D98B8
  if (crb(c,2)) { goto L_801D99B8; } // 801D98BC
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 801D98C0
  c->r[29]=0u+0x00000000u; // 801D98C4
  goto L_801D9934; // 801D98C8
L_801D98CC:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 801D98CC
  c->r[0]=R32(c->r[21]+0x0000003Cu); // 801D98D0
  c->r[26]=c->r[27]+c->r[3]; // 801D98D4
  c->r[3]=R8(c->r[27]+c->r[3]); // 801D98D8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 801D98DC
  cmpu(c,0,c->r[3],c->r[0]); // 801D98E0
  if (!crb(c,0)) { goto L_801D992C; } // 801D98E4
  c->r[0]=R32(c->r[26]+0x00000008u); // 801D98E8
  c->f[1]=c->f[29]; // 801D98EC
  c->r[4]=R16(c->r[26]+0x00000004u); // 801D98F0
  c->r[3]=c->r[26]+c->r[0]; // 801D98F4
  c->lr=0x801D98FCu; f_801D8D40(c); // 801D98F8
  c->r[19]=rotl(c->r[3],2)&0x0003FFFCu; // 801D98FC
  c->r[0]=R32(c->r[23]+c->r[19]); // 801D9900
  cmps(c,0,(int32_t)c->r[0],0); // 801D9904
  if (crb(c,2)) { goto L_801D992C; } // 801D9908
  c->r[26]=R8(c->r[26]+0x00000000u); // 801D990C
  c->r[3]=c->r[21]|c->r[21]; // 801D9910
  c->lr=0x801D9918u; f_801D70E4(c); // 801D9914
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)28); // 801D9918
  c->r[4]=R32(c->r[23]+c->r[19]); // 801D991C
  c->r[5]=0u+0x00000000u; // 801D9920
  c->r[3]=c->r[3]+c->r[0]; // 801D9924
  c->lr=0x801D992Cu; f_801D8BBC(c); // 801D9928
L_801D992C:;
  c->r[24]=c->r[24]+0x00000004u; // 801D992C
  c->r[29]=c->r[29]+0x00000001u; // 801D9930
L_801D9934:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D9934
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D9938
  if (crb(c,0)) { IRQCHK(c); goto L_801D98CC; } // 801D993C
  goto L_801D99B8; // 801D9940
L_801D9944:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 801D9944
  c->r[29]=0u+0x00000000u; // 801D9948
  goto L_801D99AC; // 801D994C
L_801D9950:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 801D9950
  c->r[0]=R32(c->r[21]+0x00000038u); // 801D9954
  c->r[23]=c->r[27]+c->r[3]; // 801D9958
  c->r[3]=R8(c->r[27]+c->r[3]); // 801D995C
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 801D9960
  cmpu(c,0,c->r[3],c->r[0]); // 801D9964
  if (!crb(c,0)) { goto L_801D99A4; } // 801D9968
  c->r[0]=R32(c->r[23]+0x00000008u); // 801D996C
  c->f[1]=c->f[29]; // 801D9970
  c->r[4]=R16(c->r[23]+0x00000004u); // 801D9974
  c->r[3]=c->r[23]+c->r[0]; // 801D9978
  c->lr=0x801D9980u; f_801D8E28(c); // 801D997C
  c->f[31]=c->f[1]; // 801D9980
  c->r[19]=R8(c->r[23]+0x00000001u); // 801D9984
  c->r[23]=R8(c->r[23]+0x00000000u); // 801D9988
  c->r[3]=c->r[21]|c->r[21]; // 801D998C
  c->lr=0x801D9994u; f_801D72A8(c); // 801D9990
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)20); // 801D9994
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 801D9998
  c->r[3]=c->r[3]+c->r[4]; // 801D999C
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 801D99A0
L_801D99A4:;
  c->r[24]=c->r[24]+0x00000004u; // 801D99A4
  c->r[29]=c->r[29]+0x00000001u; // 801D99A8
L_801D99AC:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 801D99AC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D99B0
  if (crb(c,0)) { IRQCHK(c); goto L_801D9950; } // 801D99B4
L_801D99B8:;
  c->r[25]=c->r[25]+0x00000004u; // 801D99B8
  c->r[22]=c->r[22]+0x00000001u; // 801D99BC
L_801D99C0:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 801D99C0
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 801D99C4
  if (crb(c,0)) { IRQCHK(c); goto L_801D9764; } // 801D99C8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801D99CC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801D99D0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801D99D4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801D99D8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801D99DC
  c->r[11]=c->r[1]+0x00000050u; // 801D99E0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801D99E4
  c->lr=0x801D99ECu; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D99E8
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D99EC
  c->lr=c->r[0]; // 801D99F0
  c->r[1]=c->r[1]+0x00000080u; // 801D99F4
  return; // 801D99F8
}

// fn_801D99FC
void f_801D99FC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801D99FC
  if (!crb(c,2)) { goto L_801D9A08; } // 801D9A00
  c->r[4]=R32(c->r[3]+0x00000018u); // 801D9A04
L_801D9A08:;
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 801D9A08
  c->r[3]=R32(c->r[3]+0x00000018u); // 801D9A0C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D9A10
  c->r[3]=c->r[3]+c->r[0]; // 801D9A14
  c->r[0]=c->r[3]+0x0000000Fu; // 801D9A18
  c->r[0]=c->r[0]-c->r[4]; // 801D9A1C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801D9A20
  c->ctr=c->r[0]; // 801D9A24
  cmpu(c,0,c->r[4],c->r[3]); // 801D9A28
  if (!crb(c,0)) { goto L_801D9A4C; } // 801D9A2C
L_801D9A30:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 801D9A30
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A34
  if (!crb(c,2)) { goto L_801D9A44; } // 801D9A38
  c->r[3]=c->r[4]|c->r[4]; // 801D9A3C
  return; // 801D9A40
L_801D9A44:;
  c->r[4]=c->r[4]+0x00000010u; // 801D9A44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9A30; } // 801D9A48
L_801D9A4C:;
  c->r[3]=0u+0x00000000u; // 801D9A4C
  return; // 801D9A50
}

// __ct__Q34nw4r3lyt12AnimResourceFv
void f_801D9A54(Ctx* __restrict c) {
  trace_call(0x801D9A54u);
  c->r[0]=0u+0x00000000u; // 801D9A54
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D9A58
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D9A5C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D9A60
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D9A64
  return; // 801D9A68
}

// Set__Q34nw4r3lyt12AnimResourceFPCv
void f_801D9A6C(Ctx* __restrict c) {
  trace_call(0x801D9A6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9A6C
  c->r[0]=c->lr; // 801D9A70
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9A74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9A78
  c->r[31]=c->r[3]|c->r[3]; // 801D9A7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9A80
  c->r[30]=0u+0x00000000u; // 801D9A84
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9A88
  c->r[29]=c->r[4]|c->r[4]; // 801D9A8C
  c->r[4]=0u+0x524C0000u; // 801D9A90
  W32(c->r[3]+0x00000000u,c->r[30]); // 801D9A94
  c->r[4]=c->r[4]+0x0000414Eu; // 801D9A98
  W32(c->r[3]+0x00000004u,c->r[30]); // 801D9A9C
  W32(c->r[3]+0x00000008u,c->r[30]); // 801D9AA0
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 801D9AA4
  c->r[3]=c->r[29]|c->r[29]; // 801D9AA8
  c->lr=0x801D9AB0u; f_801DA868(c); // 801D9AAC
  cmps(c,0,(int32_t)c->r[3],0); // 801D9AB0
  if (crb(c,2)) { goto L_801D9B60; } // 801D9AB4
  c->r[3]=R16(c->r[29]+0x00000006u); // 801D9AB8
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; cr0(c,c->r[0]); // 801D9ABC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D9AC0
  if (!crb(c,2)) { goto L_801D9ADC; } // 801D9AC4
  cmpu(c,0,c->r[0],0x00000008u); // 801D9AC8
  if (crb(c,0)) { goto L_801D9ADC; } // 801D9ACC
  cmpu(c,0,c->r[0],0x0000000Au); // 801D9AD0
  if (crb(c,1)) { goto L_801D9ADC; } // 801D9AD4
  c->r[30]=0u+0x00000001u; // 801D9AD8
L_801D9ADC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D9ADC
  if (crb(c,2)) { goto L_801D9B60; } // 801D9AE0
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801D9AE4
  c->r[3]=0u+0x70610000u; // 801D9AE8
  W32(c->r[31]+0x00000000u,c->r[29]); // 801D9AEC
  c->r[6]=c->r[3]+0x00006931u; // 801D9AF0
  c->r[7]=c->r[29]+c->r[0]; // 801D9AF4
  c->r[4]=c->r[3]+0x00007431u; // 801D9AF8
  c->r[5]=c->r[3]+0x00006831u; // 801D9AFC
  c->r[8]=0u+0x00000000u; // 801D9B00
  goto L_801D9B50; // 801D9B04
L_801D9B08:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 801D9B08
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801D9B0C
  if (crb(c,2)) { goto L_801D9B40; } // 801D9B10
  if (!crb(c,0)) { goto L_801D9B24; } // 801D9B14
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801D9B18
  if (crb(c,2)) { goto L_801D9B38; } // 801D9B1C
  goto L_801D9B44; // 801D9B20
L_801D9B24:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D9B24
  if (crb(c,2)) { goto L_801D9B30; } // 801D9B28
  goto L_801D9B44; // 801D9B2C
L_801D9B30:;
  W32(c->r[31]+0x00000008u,c->r[7]); // 801D9B30
  goto L_801D9B44; // 801D9B34
L_801D9B38:;
  W32(c->r[31]+0x0000000Cu,c->r[7]); // 801D9B38
  goto L_801D9B44; // 801D9B3C
L_801D9B40:;
  W32(c->r[31]+0x00000004u,c->r[7]); // 801D9B40
L_801D9B44:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 801D9B44
  c->r[8]=c->r[8]+0x00000001u; // 801D9B48
  c->r[7]=c->r[7]+c->r[0]; // 801D9B4C
L_801D9B50:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D9B50
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 801D9B54
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801D9B58
  if (crb(c,0)) { IRQCHK(c); goto L_801D9B08; } // 801D9B5C
L_801D9B60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9B60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9B64
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9B68
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9B6C
  c->lr=c->r[0]; // 801D9B70
  c->r[1]=c->r[1]+0x00000020u; // 801D9B74
  return; // 801D9B78
}

// GetGroupNum__Q34nw4r3lyt12AnimResourceCFv
void f_801D9B7C(Ctx* __restrict c) {
  trace_call(0x801D9B7Cu);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D9B7C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9B80
  if (crb(c,2)) { goto L_801D9B90; } // 801D9B84
  c->r[3]=R16(c->r[3]+0x0000000Au); // 801D9B88
  return; // 801D9B8C
L_801D9B90:;
  c->r[3]=0u+0x00000000u; // 801D9B90
  return; // 801D9B94
}

// GetGroupArray__Q34nw4r3lyt12AnimResourceCFv
void f_801D9B98(Ctx* __restrict c) {
  trace_call(0x801D9B98u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D9B98
  cmps(c,0,(int32_t)c->r[3],0); // 801D9B9C
  if (crb(c,2)) { goto L_801D9BB0; } // 801D9BA0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D9BA4
  c->r[3]=c->r[3]+c->r[0]; // 801D9BA8
  return; // 801D9BAC
L_801D9BB0:;
  c->r[3]=0u+0x00000000u; // 801D9BB0
  return; // 801D9BB4
}

// IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv
void f_801D9BB8(Ctx* __restrict c) {
  trace_call(0x801D9BB8u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D9BB8
  cmps(c,0,(int32_t)c->r[3],0); // 801D9BBC
  if (crb(c,2)) { goto L_801D9BD0; } // 801D9BC0
  c->r[0]=R8(c->r[3]+0x00000018u); // 801D9BC4
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801D9BC8
  return; // 801D9BCC
L_801D9BD0:;
  c->r[3]=0u+0x00000000u; // 801D9BD0
  return; // 801D9BD4
}

// GetAnimationShareInfoNum__Q34nw4r3lyt12AnimResourceCFv
void f_801D9BD8(Ctx* __restrict c) {
  trace_call(0x801D9BD8u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801D9BD8
  cmps(c,0,(int32_t)c->r[3],0); // 801D9BDC
  if (crb(c,2)) { goto L_801D9BEC; } // 801D9BE0
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 801D9BE4
  return; // 801D9BE8
L_801D9BEC:;
  c->r[3]=0u+0x00000000u; // 801D9BEC
  return; // 801D9BF0
}

// GetAnimationShareInfoArray__Q34nw4r3lyt12AnimResourceCFv
void f_801D9BF4(Ctx* __restrict c) {
  trace_call(0x801D9BF4u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801D9BF4
  cmps(c,0,(int32_t)c->r[3],0); // 801D9BF8
  if (crb(c,2)) { goto L_801D9C0C; } // 801D9BFC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D9C00
  c->r[3]=c->r[3]+c->r[0]; // 801D9C04
  return; // 801D9C08
L_801D9C0C:;
  c->r[3]=0u+0x00000000u; // 801D9C0C
  return; // 801D9C10
}

// CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt4Paneb
void f_801D9C14(Ctx* __restrict c) {
  trace_call(0x801D9C14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9C14
  c->r[0]=c->lr; // 801D9C18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9C1C
  c->r[11]=c->r[1]+0x00000020u; // 801D9C20
  c->lr=0x801D9C28u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9C24
  c->r[6]=R32(c->r[3]+0x00000004u); // 801D9C28
  c->r[26]=c->r[3]|c->r[3]; // 801D9C2C
  c->r[27]=c->r[4]|c->r[4]; // 801D9C30
  c->r[28]=c->r[5]|c->r[5]; // 801D9C34
  c->r[0]=R32(c->r[6]+0x00000010u); // 801D9C38
  c->r[31]=0u+0x00000000u; // 801D9C3C
  c->r[29]=0u+0x00000000u; // 801D9C40
  c->r[30]=c->r[6]+c->r[0]; // 801D9C44
  goto L_801D9CBC; // 801D9C48
L_801D9C4C:;
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 801D9C4C
  c->r[0]=R32(c->r[30]+c->r[0]); // 801D9C50
  c->r[4]=c->r[4]+c->r[0]; // 801D9C54
  c->r[0]=R8(c->r[4]+0x00000015u); // 801D9C58
  cmps(c,0,(int32_t)c->r[0],0); // 801D9C5C
  if (!crb(c,2)) { goto L_801D9C8C; } // 801D9C60
  c->r[12]=R32(c->r[27]+0x00000000u); // 801D9C64
  c->r[3]=c->r[27]|c->r[27]; // 801D9C68
  c->r[5]=c->r[28]|c->r[28]; // 801D9C6C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D9C70
  c->ctr=c->r[12]; // 801D9C74
  if (true) { c->lr=0x801D9C7Cu; dispatch(c,c->ctr); } // 801D9C78
  cmps(c,0,(int32_t)c->r[3],0); // 801D9C7C
  if (crb(c,2)) { goto L_801D9CB8; } // 801D9C80
  c->r[31]=c->r[31]+0x00000001u; // 801D9C84
  goto L_801D9CB8; // 801D9C88
L_801D9C8C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801D9C8C
  c->r[3]=c->r[27]|c->r[27]; // 801D9C90
  c->r[5]=c->r[28]|c->r[28]; // 801D9C94
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D9C98
  c->ctr=c->r[12]; // 801D9C9C
  if (true) { c->lr=0x801D9CA4u; dispatch(c,c->ctr); } // 801D9CA0
  cmps(c,0,(int32_t)c->r[3],0); // 801D9CA4
  if (crb(c,2)) { goto L_801D9CB8; } // 801D9CA8
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 801D9CAC
  c->r[0]=c->r[3]+0x00000001u; // 801D9CB0
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9CB4
L_801D9CB8:;
  c->r[29]=c->r[29]+0x00000001u; // 801D9CB8
L_801D9CBC:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 801D9CBC
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801D9CC0
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801D9CC4
  cmpu(c,0,c->r[3],c->r[0]); // 801D9CC8
  if (crb(c,0)) { IRQCHK(c); goto L_801D9C4C; } // 801D9CCC
  c->r[11]=c->r[1]+0x00000020u; // 801D9CD0
  c->r[3]=c->r[31]|c->r[31]; // 801D9CD4
  c->lr=0x801D9CDCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9CD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9CDC
  c->lr=c->r[0]; // 801D9CE0
  c->r[1]=c->r[1]+0x00000020u; // 801D9CE4
  return; // 801D9CE8
}

// CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt5Groupb
void f_801D9CEC(Ctx* __restrict c) {
  trace_call(0x801D9CECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9CEC
  c->r[0]=c->lr; // 801D9CF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9CF4
  c->r[11]=c->r[1]+0x00000020u; // 801D9CF8
  c->lr=0x801D9D00u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9CFC
  c->r[31]=R32(c->r[4]+0x00000010u); // 801D9D00
  c->r[27]=c->r[3]|c->r[3]; // 801D9D04
  c->r[28]=c->r[5]|c->r[5]; // 801D9D08
  c->r[30]=c->r[4]+0x00000010u; // 801D9D0C
  c->r[29]=0u+0x00000000u; // 801D9D10
  goto L_801D9D30; // 801D9D14
L_801D9D18:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801D9D18
  c->r[3]=c->r[27]|c->r[27]; // 801D9D1C
  c->r[5]=c->r[28]|c->r[28]; // 801D9D20
  c->lr=0x801D9D28u; f_801D9C14(c); // 801D9D24
  c->r[29]=c->r[29]+c->r[3]; // 801D9D28
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D9D2C
L_801D9D30:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D9D30
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9D18; } // 801D9D34
  c->r[11]=c->r[1]+0x00000020u; // 801D9D38
  c->r[3]=c->r[29]|c->r[29]; // 801D9D3C
  c->lr=0x801D9D44u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9D40
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9D44
  c->lr=c->r[0]; // 801D9D48
  c->r[1]=c->r[1]+0x00000020u; // 801D9D4C
  return; // 801D9D50
}

// Init__Q44nw4r3lyt6detail12AnimPaneTreeFv
void f_801D9D54(Ctx* __restrict c) {
  trace_call(0x801D9D54u);
  c->r[0]=0u+0x00000000u; // 801D9D54
  W16(c->r[3]+0x00000012u,c->r[0]); // 801D9D58
  W16(c->r[3]+0x00000010u,c->r[0]); // 801D9D5C
  W8(c->r[3]+0x00000026u,c->r[0]); // 801D9D60
  W16(c->r[3]+0x00000014u,c->r[0]); // 801D9D64
  W16(c->r[3]+0x00000016u,c->r[0]); // 801D9D68
  W16(c->r[3]+0x00000018u,c->r[0]); // 801D9D6C
  W16(c->r[3]+0x0000001Au,c->r[0]); // 801D9D70
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 801D9D74
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 801D9D78
  W16(c->r[3]+0x00000020u,c->r[0]); // 801D9D7C
  W16(c->r[3]+0x00000022u,c->r[0]); // 801D9D80
  W16(c->r[3]+0x00000024u,c->r[0]); // 801D9D84
  return; // 801D9D88
}

// Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource
void f_801D9D8C(Ctx* __restrict c) {
  trace_call(0x801D9D8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9D8C
  c->r[0]=c->lr; // 801D9D90
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D9D94
  c->r[11]=c->r[1]+0x00000060u; // 801D9D98
  c->lr=0x801D9DA0u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9D9C
  c->r[25]=R32(c->r[5]+0x00000004u); // 801D9DA0
  c->r[18]=c->r[3]|c->r[3]; // 801D9DA4
  c->r[19]=c->r[4]|c->r[4]; // 801D9DA8
  c->r[20]=c->r[5]|c->r[5]; // 801D9DAC
  c->r[0]=R32(c->r[25]+0x00000010u); // 801D9DB0
  c->r[21]=c->r[4]+0x000000BCu; // 801D9DB4
  c->r[22]=0u+0x00000000u; // 801D9DB8
  c->r[28]=0u+0x00000000u; // 801D9DBC
  c->r[23]=c->r[25]+c->r[0]; // 801D9DC0
  goto L_801D9DF8; // 801D9DC4
L_801D9DC8:;
  c->r[0]=rotl(c->r[28],2)&0x0003FFFCu; // 801D9DC8
  c->r[0]=R32(c->r[23]+c->r[0]); // 801D9DCC
  c->r[3]=c->r[25]+c->r[0]; // 801D9DD0
  c->r[0]=R8(c->r[3]+0x00000015u); // 801D9DD4
  cmps(c,0,(int32_t)c->r[0],0); // 801D9DD8
  if (!crb(c,2)) { goto L_801D9DF4; } // 801D9DDC
  c->r[4]=c->r[21]|c->r[21]; // 801D9DE0
  c->lr=0x801D9DE8u; f_801DA83C(c); // 801D9DE4
  cmps(c,0,(int32_t)c->r[3],0); // 801D9DE8
  if (crb(c,2)) { goto L_801D9DF4; } // 801D9DEC
  goto L_801D9E10; // 801D9DF0
L_801D9DF4:;
  c->r[28]=c->r[28]+0x00000001u; // 801D9DF4
L_801D9DF8:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 801D9DF8
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801D9DFC
  cmpu(c,0,c->r[3],c->r[0]); // 801D9E00
  if (crb(c,0)) { IRQCHK(c); goto L_801D9DC8; } // 801D9E04
  c->r[3]=0u+0x00010000u; // 801D9E08
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 801D9E0C
L_801D9E10:;
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 801D9E10
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801D9E14
  if (crb(c,2)) { goto L_801D9E20; } // 801D9E18
  c->r[22]=0u+0x00000001u; // 801D9E1C
L_801D9E20:;
  c->r[12]=R32(c->r[19]+0x00000000u); // 801D9E20
  c->r[3]=c->r[19]|c->r[19]; // 801D9E24
  c->r[12]=R32(c->r[12]+0x00000064u); // 801D9E28
  c->ctr=c->r[12]; // 801D9E2C
  if (true) { c->lr=0x801D9E34u; dispatch(c,c->ctr); } // 801D9E30
  c->r[29]=c->r[3]|c->r[3]; // 801D9E34
  c->r[23]=c->r[1]+0x00000008u; // 801D9E38
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; // 801D9E3C
  c->r[21]=0u+0x00000000u; // 801D9E40
  c->r[30]=0u+0x00010000u; // 801D9E44
  goto L_801D9EDC; // 801D9E48
L_801D9E4C:;
  c->r[12]=R32(c->r[19]+0x00000000u); // 801D9E4C
  c->r[3]=c->r[19]|c->r[19]; // 801D9E50
  c->r[4]=rotl(c->r[21],0)&0x000000FFu; // 801D9E54
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801D9E58
  c->ctr=c->r[12]; // 801D9E5C
  if (true) { c->lr=0x801D9E64u; dispatch(c,c->ctr); } // 801D9E60
  c->r[0]=R32(c->r[25]+0x00000010u); // 801D9E64
  c->r[24]=c->r[3]+0x00000044u; // 801D9E68
  c->r[27]=0u+0x00000000u; // 801D9E6C
  c->r[26]=c->r[25]+c->r[0]; // 801D9E70
  goto L_801D9EA8; // 801D9E74
L_801D9E78:;
  c->r[0]=rotl(c->r[27],2)&0x0003FFFCu; // 801D9E78
  c->r[0]=R32(c->r[26]+c->r[0]); // 801D9E7C
  c->r[3]=c->r[25]+c->r[0]; // 801D9E80
  c->r[0]=R8(c->r[3]+0x00000015u); // 801D9E84
  cmpu(c,0,c->r[0],0x00000001u); // 801D9E88
  if (!crb(c,2)) { goto L_801D9EA4; } // 801D9E8C
  c->r[4]=c->r[24]|c->r[24]; // 801D9E90
  c->lr=0x801D9E98u; f_801DA83C(c); // 801D9E94
  cmps(c,0,(int32_t)c->r[3],0); // 801D9E98
  if (crb(c,2)) { goto L_801D9EA4; } // 801D9E9C
  goto L_801D9EBC; // 801D9EA0
L_801D9EA4:;
  c->r[27]=c->r[27]+0x00000001u; // 801D9EA4
L_801D9EA8:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 801D9EA8
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 801D9EAC
  cmpu(c,0,c->r[3],c->r[0]); // 801D9EB0
  if (crb(c,0)) { IRQCHK(c); goto L_801D9E78; } // 801D9EB4
  c->r[27]=c->r[30]+0xFFFFFFFFu; // 801D9EB8
L_801D9EBC:;
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 801D9EBC
  c->r[3]=rotl(c->r[21],1)&0x000001FEu; // 801D9EC0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801D9EC4
  W16(c->r[23]+c->r[3],c->r[27]); // 801D9EC8
  if (crb(c,2)) { goto L_801D9ED8; } // 801D9ECC
  c->r[0]=c->r[22]+0x00000001u; // 801D9ED0
  c->r[22]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9ED4
L_801D9ED8:;
  c->r[21]=c->r[21]+0x00000001u; // 801D9ED8
L_801D9EDC:;
  c->r[0]=rotl(c->r[21],0)&0x000000FFu; // 801D9EDC
  cmpu(c,0,c->r[0],c->r[31]); // 801D9EE0
  if (crb(c,0)) { IRQCHK(c); goto L_801D9E4C; } // 801D9EE4
  cmps(c,0,(int32_t)c->r[22],0); // 801D9EE8
  if (crb(c,2)) { goto L_801D9FD4; } // 801D9EEC
  c->r[6]=R32(c->r[20]+0x00000000u); // 801D9EF0
  cmps(c,0,(int32_t)c->r[31],0); // 801D9EF4
  c->r[5]=R32(c->r[20]+0x00000004u); // 801D9EF8
  c->r[3]=0u+0x00000000u; // 801D9EFC
  c->r[4]=R32(c->r[20]+0x00000008u); // 801D9F00
  c->r[0]=R32(c->r[20]+0x0000000Cu); // 801D9F04
  W32(c->r[18]+0x00000000u,c->r[6]); // 801D9F08
  W32(c->r[18]+0x00000004u,c->r[5]); // 801D9F0C
  W32(c->r[18]+0x00000008u,c->r[4]); // 801D9F10
  W32(c->r[18]+0x0000000Cu,c->r[0]); // 801D9F14
  W16(c->r[18]+0x00000010u,c->r[28]); // 801D9F18
  W8(c->r[18]+0x00000026u,c->r[29]); // 801D9F1C
  if (crb(c,2)) { goto L_801D9FD0; } // 801D9F20
  cmpu(c,0,c->r[31],0x00000008u); // 801D9F24
  c->r[0]=c->r[29]+0x000000F8u; // 801D9F28
  if (!crb(c,1)) { goto L_801D9F9C; } // 801D9F2C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D9F30
  c->r[0]=c->r[4]+0x00000007u; // 801D9F34
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D9F38
  c->ctr=c->r[0]; // 801D9F3C
  cmpu(c,0,c->r[4],0x00000000u); // 801D9F40
  if (!crb(c,1)) { goto L_801D9F9C; } // 801D9F44
L_801D9F48:;
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 801D9F48
  c->r[5]=c->r[1]+0x00000008u; // 801D9F4C
  {uint32_t ea=c->r[5]+c->r[0]; c->r[4]=R16(ea); c->r[5]=ea;} // 801D9F50
  c->r[6]=c->r[18]+c->r[0]; // 801D9F54
  c->r[3]=c->r[3]+0x00000008u; // 801D9F58
  W16(c->r[6]+0x00000014u,c->r[4]); // 801D9F5C
  c->r[0]=R16(c->r[5]+0x00000002u); // 801D9F60
  c->r[4]=R16(c->r[5]+0x00000004u); // 801D9F64
  W16(c->r[6]+0x00000016u,c->r[0]); // 801D9F68
  c->r[0]=R16(c->r[5]+0x00000006u); // 801D9F6C
  W16(c->r[6]+0x00000018u,c->r[4]); // 801D9F70
  c->r[4]=R16(c->r[5]+0x00000008u); // 801D9F74
  W16(c->r[6]+0x0000001Au,c->r[0]); // 801D9F78
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801D9F7C
  W16(c->r[6]+0x0000001Cu,c->r[4]); // 801D9F80
  c->r[4]=R16(c->r[5]+0x0000000Cu); // 801D9F84
  W16(c->r[6]+0x0000001Eu,c->r[0]); // 801D9F88
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 801D9F8C
  W16(c->r[6]+0x00000020u,c->r[4]); // 801D9F90
  W16(c->r[6]+0x00000022u,c->r[0]); // 801D9F94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9F48; } // 801D9F98
L_801D9F9C:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801D9F9C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801D9FA0
  c->r[0]=c->r[4]-c->r[5]; // 801D9FA4
  c->r[6]=c->r[1]+0x00000008u; // 801D9FA8
  c->ctr=c->r[0]; // 801D9FAC
  cmpu(c,0,c->r[5],c->r[4]); // 801D9FB0
  if (!crb(c,0)) { goto L_801D9FD0; } // 801D9FB4
L_801D9FB8:;
  c->r[4]=rotl(c->r[3],1)&0x000001FEu; // 801D9FB8
  c->r[3]=c->r[3]+0x00000001u; // 801D9FBC
  c->r[0]=R16(c->r[6]+c->r[4]); // 801D9FC0
  c->r[4]=c->r[18]+c->r[4]; // 801D9FC4
  W16(c->r[4]+0x00000014u,c->r[0]); // 801D9FC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9FB8; } // 801D9FCC
L_801D9FD0:;
  W16(c->r[18]+0x00000012u,c->r[22]); // 801D9FD0
L_801D9FD4:;
  c->r[11]=c->r[1]+0x00000060u; // 801D9FD4
  c->lr=0x801D9FDCu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9FD8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D9FDC
  c->lr=c->r[0]; // 801D9FE0
  c->r[1]=c->r[1]+0x00000060u; // 801D9FE4
  return; // 801D9FE8
}

// fn_801D9FEC
void f_801D9FEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9FEC
  c->r[0]=c->lr; // 801D9FF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D9FF4
  c->r[11]=c->r[1]+0x00000030u; // 801D9FF8
  c->lr=0x801DA000u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9FFC
  c->r[12]=R32(c->r[4]+0x00000000u); // 801DA000
  c->r[29]=c->r[3]|c->r[3]; // 801DA004
  c->r[3]=c->r[4]|c->r[4]; // 801DA008
  c->r[30]=c->r[5]|c->r[5]; // 801DA00C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DA010
  c->r[25]=c->r[6]|c->r[6]; // 801DA014
  c->ctr=c->r[12]; // 801DA018
  if (true) { c->lr=0x801DA020u; dispatch(c,c->ctr); } // 801DA01C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DA020
  c->r[31]=c->r[3]|c->r[3]; // 801DA024
  c->r[5]=c->r[25]|c->r[25]; // 801DA028
  c->r[4]=R32(c->r[29]+0x00000004u); // 801DA02C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DA030
  c->r[6]=R16(c->r[29]+0x00000012u); // 801DA034
  c->ctr=c->r[12]; // 801DA038
  if (true) { c->lr=0x801DA040u; dispatch(c,c->ctr); } // 801DA03C
  c->r[5]=R16(c->r[29]+0x00000010u); // 801DA040
  c->r[26]=0u+0x00000000u; // 801DA044
  cmpu(c,0,c->r[5],0x0000FFFFu); // 801DA048
  if (crb(c,2)) { goto L_801DA0C4; } // 801DA04C
  c->r[0]=R16(c->r[31]+0x0000001Cu); // 801DA050
  c->r[28]=R32(c->r[31]+0x00000018u); // 801DA054
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801DA058
  c->r[3]=c->r[28]+c->r[0]; // 801DA05C
  c->r[0]=c->r[3]+0x0000000Fu; // 801DA060
  c->r[0]=c->r[0]-c->r[28]; // 801DA064
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801DA068
  c->ctr=c->r[0]; // 801DA06C
  cmpu(c,0,c->r[28],c->r[3]); // 801DA070
  if (!crb(c,0)) { goto L_801DA090; } // 801DA074
L_801DA078:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801DA078
  cmps(c,0,(int32_t)c->r[0],0); // 801DA07C
  if (!crb(c,2)) { goto L_801DA088; } // 801DA080
  goto L_801DA094; // 801DA084
L_801DA088:;
  c->r[28]=c->r[28]+0x00000010u; // 801DA088
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA078; } // 801DA08C
L_801DA090:;
  c->r[28]=0u+0x00000000u; // 801DA090
L_801DA094:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DA094
  if (!crb(c,2)) { goto L_801DA0A4; } // 801DA098
  c->r[26]=0u+0x00000000u; // 801DA09C
  goto L_801DA0C4; // 801DA0A0
L_801DA0A4:;
  W32(c->r[28]+0x00000008u,c->r[31]); // 801DA0A4
  c->r[0]=0u+0x00000001u; // 801DA0A8
  c->r[3]=c->r[30]|c->r[30]; // 801DA0AC
  c->r[4]=c->r[28]|c->r[28]; // 801DA0B0
  W16(c->r[28]+0x0000000Cu,c->r[5]); // 801DA0B4
  W8(c->r[28]+0x0000000Eu,c->r[0]); // 801DA0B8
  c->lr=0x801DA0C0u; f_801CFC8C(c); // 801DA0BC
  c->r[26]=c->r[28]+0x00000010u; // 801DA0C0
L_801DA0C4:;
  c->r[25]=0u+0x00000000u; // 801DA0C4
  c->r[28]=0u+0x00000001u; // 801DA0C8
  goto L_801DA174; // 801DA0CC
L_801DA0D0:;
  c->r[0]=rotl(c->r[25],1)&0x000001FEu; // 801DA0D0
  c->r[3]=c->r[29]+c->r[0]; // 801DA0D4
  c->r[27]=R16(c->r[3]+0x00000014u); // 801DA0D8
  cmpu(c,0,c->r[27],0x0000FFFFu); // 801DA0DC
  if (crb(c,2)) { goto L_801DA170; } // 801DA0E0
  c->r[12]=R32(c->r[30]+0x00000000u); // 801DA0E4
  c->r[3]=c->r[30]|c->r[30]; // 801DA0E8
  c->r[12]=R32(c->r[12]+0x00000068u); // 801DA0EC
  c->ctr=c->r[12]; // 801DA0F0
  if (true) { c->lr=0x801DA0F8u; dispatch(c,c->ctr); } // 801DA0F4
  cmps(c,0,(int32_t)c->r[26],0); // 801DA0F8
  if (!crb(c,2)) { goto L_801DA104; } // 801DA0FC
  c->r[26]=R32(c->r[31]+0x00000018u); // 801DA100
L_801DA104:;
  c->r[0]=R16(c->r[31]+0x0000001Cu); // 801DA104
  c->r[4]=R32(c->r[31]+0x00000018u); // 801DA108
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801DA10C
  c->r[4]=c->r[4]+c->r[0]; // 801DA110
  c->r[0]=c->r[4]+0x0000000Fu; // 801DA114
  c->r[0]=c->r[0]-c->r[26]; // 801DA118
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801DA11C
  c->ctr=c->r[0]; // 801DA120
  cmpu(c,0,c->r[26],c->r[4]); // 801DA124
  if (!crb(c,0)) { goto L_801DA144; } // 801DA128
L_801DA12C:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 801DA12C
  cmps(c,0,(int32_t)c->r[0],0); // 801DA130
  if (!crb(c,2)) { goto L_801DA13C; } // 801DA134
  goto L_801DA148; // 801DA138
L_801DA13C:;
  c->r[26]=c->r[26]+0x00000010u; // 801DA13C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA12C; } // 801DA140
L_801DA144:;
  c->r[26]=0u+0x00000000u; // 801DA144
L_801DA148:;
  cmps(c,0,(int32_t)c->r[26],0); // 801DA148
  if (!crb(c,2)) { goto L_801DA158; } // 801DA14C
  c->r[26]=0u+0x00000000u; // 801DA150
  goto L_801DA170; // 801DA154
L_801DA158:;
  W32(c->r[26]+0x00000008u,c->r[31]); // 801DA158
  c->r[4]=c->r[26]|c->r[26]; // 801DA15C
  W16(c->r[26]+0x0000000Cu,c->r[27]); // 801DA160
  W8(c->r[26]+0x0000000Eu,c->r[28]); // 801DA164
  c->lr=0x801DA16Cu; f_801D87D4(c); // 801DA168
  c->r[26]=c->r[26]+0x00000010u; // 801DA16C
L_801DA170:;
  c->r[25]=c->r[25]+0x00000001u; // 801DA170
L_801DA174:;
  c->r[0]=R8(c->r[29]+0x00000026u); // 801DA174
  c->r[3]=rotl(c->r[25],0)&0x000000FFu; // 801DA178
  cmpu(c,0,c->r[3],c->r[0]); // 801DA17C
  if (crb(c,0)) { IRQCHK(c); goto L_801DA0D0; } // 801DA180
  c->r[11]=c->r[1]+0x00000030u; // 801DA184
  c->r[3]=c->r[31]|c->r[31]; // 801DA188
  c->lr=0x801DA190u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA18C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA190
  c->lr=c->r[0]; // 801DA194
  c->r[1]=c->r[1]+0x00000030u; // 801DA198
  return; // 801DA19C
}

// fn_801DA1A0
void f_801DA1A0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000004u); // 801DA1A0
  c->r[0]=c->r[3]+0x00000004u; // 801DA1A4
  goto L_801DA1C4; // 801DA1A8
L_801DA1AC:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 801DA1AC
  cmpu(c,0,c->r[4],c->r[3]); // 801DA1B0
  if (!crb(c,2)) { goto L_801DA1C0; } // 801DA1B4
  c->r[3]=c->r[5]|c->r[5]; // 801DA1B8
  return; // 801DA1BC
L_801DA1C0:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 801DA1C0
L_801DA1C4:;
  cmpu(c,0,c->r[5],c->r[0]); // 801DA1C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA1AC; } // 801DA1C8
  c->r[3]=0u+0x00000000u; // 801DA1CC
  return; // 801DA1D0
}

// FindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>RCQ34nw4r3lyt12AnimResource
void f_801DA1D4(Ctx* __restrict c) {
  trace_call(0x801DA1D4u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 801DA1D4
  c->r[0]=c->r[3]+0x00000004u; // 801DA1D8
  goto L_801DA200; // 801DA1DC
L_801DA1E0:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 801DA1E0
  c->r[6]=R32(c->r[4]+0x00000004u); // 801DA1E4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801DA1E8
  cmpu(c,0,c->r[6],c->r[3]); // 801DA1EC
  if (!crb(c,2)) { goto L_801DA1FC; } // 801DA1F0
  c->r[3]=c->r[5]|c->r[5]; // 801DA1F4
  return; // 801DA1F8
L_801DA1FC:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 801DA1FC
L_801DA200:;
  cmpu(c,0,c->r[5],c->r[0]); // 801DA200
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA1E0; } // 801DA204
  c->r[3]=0u+0x00000000u; // 801DA208
  return; // 801DA20C
}

// UnbindAnimationLink__Q34nw4r3lyt6detailFPQ34nw4r2ut38LinkList<Q34nw4r3lyt13AnimationLink,0>PQ34nw4r3lyt13AnimTransform
void f_801DA210(Ctx* __restrict c) {
  trace_call(0x801DA210u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA210
  c->r[0]=c->lr; // 801DA214
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA218
  c->r[11]=c->r[1]+0x00000030u; // 801DA21C
  c->lr=0x801DA224u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA220
  c->r[31]=R32(c->r[3]+0x00000004u); // 801DA224
  c->r[26]=c->r[3]|c->r[3]; // 801DA228
  c->r[27]=c->r[4]|c->r[4]; // 801DA22C
  c->r[30]=c->r[3]+0x00000004u; // 801DA230
  c->r[29]=0u+0x00000000u; // 801DA234
  goto L_801DA274; // 801DA238
L_801DA23C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DA23C
  c->r[28]=c->r[31]|c->r[31]; // 801DA240
  c->r[31]=R32(c->r[31]+0x00000000u); // 801DA244
  if (crb(c,2)) { goto L_801DA258; } // 801DA248
  c->r[0]=R32(c->r[28]+0x00000008u); // 801DA24C
  cmpu(c,0,c->r[0],c->r[27]); // 801DA250
  if (!crb(c,2)) { goto L_801DA274; } // 801DA254
L_801DA258:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 801DA258
  c->r[3]=c->r[26]|c->r[26]; // 801DA25C
  c->r[4]=c->r[1]+0x00000008u; // 801DA260
  c->lr=0x801DA268u; f_8017A6D8(c); // 801DA264
  W32(c->r[28]+0x00000008u,c->r[29]); // 801DA268
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 801DA26C
  W8(c->r[28]+0x0000000Eu,c->r[29]); // 801DA270
L_801DA274:;
  cmpu(c,0,c->r[31],c->r[30]); // 801DA274
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA23C; } // 801DA278
  c->r[11]=c->r[1]+0x00000030u; // 801DA27C
  c->lr=0x801DA284u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA280
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA284
  c->lr=c->r[0]; // 801DA288
  c->r[1]=c->r[1]+0x00000030u; // 801DA28C
  return; // 801DA290
}

// fn_801DA294
void f_801DA294(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA294
  c->r[0]=c->lr; // 801DA298
  cmps(c,0,(int32_t)c->r[3],0); // 801DA29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA2A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA2A4
  c->r[31]=c->r[3]|c->r[3]; // 801DA2A8
  if (crb(c,2)) { goto L_801DA2BC; } // 801DA2AC
  cmps(c,0,(int32_t)c->r[4],0); // 801DA2B0
  if (!crb(c,1)) { goto L_801DA2BC; } // 801DA2B4
  c->lr=0x801DA2BCu; f_8009230C(c); // 801DA2B8
L_801DA2BC:;
  c->r[3]=c->r[31]|c->r[31]; // 801DA2BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA2C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA2C4
  c->lr=c->r[0]; // 801DA2C8
  c->r[1]=c->r[1]+0x00000010u; // 801DA2CC
  return; // 801DA2D0
}

// fn_801DA2D4
void f_801DA2D4(Ctx* __restrict c) {
  c->r[4]=0u+0x802A0000u; // 801DA2D4
  c->r[4]=c->r[4]+0x00001B58u; // 801DA2D8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DA2DC
  return; // 801DA2E0
}

// fn_801DA2E4
void f_801DA2E4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801DA2E4
  return; // 801DA2E8
}

// FindNameResource__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCc
void f_801DA2EC(Ctx* __restrict c) {
  trace_call(0x801DA2ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA2EC
  c->r[0]=c->lr; // 801DA2F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DA2F4
  c->r[5]=c->r[1]+0x00000018u; // 801DA2F8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801DA2FC
  c->r[31]=0u+0xFFFFFFFFu; // 801DA300
  W32(c->r[1]+0x00000038u,c->r[30]); // 801DA304
  c->r[30]=c->r[4]|c->r[4]; // 801DA308
  c->r[4]=c->r[13]+0xFFFF90F8u; // 801DA30C
  W32(c->r[1]+0x00000034u,c->r[29]); // 801DA310
  c->r[29]=c->r[3]|c->r[3]; // 801DA314
  c->lr=0x801DA31Cu; f_80175C90(c); // 801DA318
  goto L_801DA37C; // 801DA31C
L_801DA320:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801DA320
  cmps(c,0,(int32_t)c->r[0],0); // 801DA324
  if (crb(c,2)) { goto L_801DA360; } // 801DA328
  c->r[4]=R32(c->r[1]+0x00000014u); // 801DA32C
  c->r[3]=c->r[29]|c->r[29]; // 801DA330
  c->lr=0x801DA338u; f_80175C38(c); // 801DA334
  c->r[3]=c->r[29]|c->r[29]; // 801DA338
  c->r[4]=c->r[30]|c->r[30]; // 801DA33C
  c->lr=0x801DA344u; f_801DA2EC(c); // 801DA340
  c->r[31]=c->r[3]|c->r[3]; // 801DA344
  c->r[3]=c->r[29]|c->r[29]; // 801DA348
  c->r[4]=c->r[13]+0xFFFF90FCu; // 801DA34C
  c->lr=0x801DA354u; f_80175C38(c); // 801DA350
  cmps(c,0,(int32_t)c->r[31],-1); // 801DA354
  if (!crb(c,2)) { goto L_801DA390; } // 801DA358
  goto L_801DA37C; // 801DA35C
L_801DA360:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 801DA360
  c->r[3]=c->r[30]|c->r[30]; // 801DA364
  c->lr=0x801DA36Cu; f_800DBD1C(c); // 801DA368
  cmps(c,0,(int32_t)c->r[3],0); // 801DA36C
  if (!crb(c,2)) { goto L_801DA37C; } // 801DA370
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA374
  goto L_801DA390; // 801DA378
L_801DA37C:;
  c->r[3]=c->r[1]+0x00000018u; // 801DA37C
  c->r[4]=c->r[1]+0x00000008u; // 801DA380
  c->lr=0x801DA388u; f_80175D0C(c); // 801DA384
  cmps(c,0,(int32_t)c->r[3],0); // 801DA388
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA320; } // 801DA38C
L_801DA390:;
  c->r[3]=c->r[1]+0x00000018u; // 801DA390
  c->lr=0x801DA398u; f_80175DC4(c); // 801DA394
  c->r[3]=c->r[31]|c->r[31]; // 801DA398
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801DA39C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801DA3A0
  c->r[29]=R32(c->r[1]+0x00000034u); // 801DA3A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DA3A8
  c->lr=c->r[0]; // 801DA3AC
  c->r[1]=c->r[1]+0x00000040u; // 801DA3B0
  return; // 801DA3B4
}

// GetResourceSub__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCcUlPCcPUl
void f_801DA3B8(Ctx* __restrict c) {
  trace_call(0x801DA3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA3B8
  c->r[0]=c->lr; // 801DA3BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DA3C0
  c->r[11]=c->r[1]+0x00000040u; // 801DA3C4
  c->lr=0x801DA3CCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA3C8
  c->r[26]=c->r[3]|c->r[3]; // 801DA3CC
  c->r[27]=c->r[4]|c->r[4]; // 801DA3D0
  c->r[28]=c->r[5]|c->r[5]; // 801DA3D4
  c->r[29]=c->r[6]|c->r[6]; // 801DA3D8
  c->r[30]=c->r[7]|c->r[7]; // 801DA3DC
  c->r[31]=0u+0xFFFFFFFFu; // 801DA3E0
  c->lr=0x801DA3E8u; f_801757E8(c); // 801DA3E4
  cmps(c,0,(int32_t)c->r[3],-1); // 801DA3E8
  if (crb(c,2)) { goto L_801DA494; } // 801DA3EC
  c->r[3]=c->r[26]|c->r[26]; // 801DA3F0
  c->r[4]=c->r[27]|c->r[27]; // 801DA3F4
  c->lr=0x801DA3FCu; f_80175C38(c); // 801DA3F8
  cmps(c,0,(int32_t)c->r[3],0); // 801DA3FC
  if (crb(c,2)) { goto L_801DA494; } // 801DA400
  cmps(c,0,(int32_t)c->r[28],0); // 801DA404
  if (!crb(c,2)) { goto L_801DA420; } // 801DA408
  c->r[3]=c->r[26]|c->r[26]; // 801DA40C
  c->r[4]=c->r[29]|c->r[29]; // 801DA410
  c->lr=0x801DA418u; f_801DA2EC(c); // 801DA414
  c->r[31]=c->r[3]|c->r[3]; // 801DA418
  goto L_801DA488; // 801DA41C
L_801DA420:;
  c->r[3]=rotl(c->r[28],8)&0x000000FFu; // 801DA420
  c->r[6]=rotl(c->r[28],16)&0x0000FFFFu; // 801DA424
  c->r[5]=rotl(c->r[28],24)&0x00FFFFFFu; // 801DA428
  c->r[0]=0u+0x00000000u; // 801DA42C
  W8(c->r[1]+0x00000008u,c->r[3]); // 801DA430
  c->r[3]=c->r[26]|c->r[26]; // 801DA434
  c->r[4]=c->r[1]+0x00000008u; // 801DA438
  W8(c->r[1]+0x00000009u,c->r[6]); // 801DA43C
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801DA440
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 801DA444
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DA448
  c->lr=0x801DA450u; f_801757E8(c); // 801DA44C
  cmps(c,0,(int32_t)c->r[3],-1); // 801DA450
  if (crb(c,2)) { goto L_801DA488; } // 801DA454
  c->r[3]=c->r[26]|c->r[26]; // 801DA458
  c->r[4]=c->r[1]+0x00000008u; // 801DA45C
  c->lr=0x801DA464u; f_80175C38(c); // 801DA460
  cmps(c,0,(int32_t)c->r[3],0); // 801DA464
  if (crb(c,2)) { goto L_801DA488; } // 801DA468
  c->r[3]=c->r[26]|c->r[26]; // 801DA46C
  c->r[4]=c->r[29]|c->r[29]; // 801DA470
  c->lr=0x801DA478u; f_801757E8(c); // 801DA474
  c->r[31]=c->r[3]|c->r[3]; // 801DA478
  c->r[3]=c->r[26]|c->r[26]; // 801DA47C
  c->r[4]=c->r[13]+0xFFFF90FCu; // 801DA480
  c->lr=0x801DA488u; f_80175C38(c); // 801DA484
L_801DA488:;
  c->r[3]=c->r[26]|c->r[26]; // 801DA488
  c->r[4]=c->r[13]+0xFFFF90FCu; // 801DA48C
  c->lr=0x801DA494u; f_80175C38(c); // 801DA490
L_801DA494:;
  cmps(c,0,(int32_t)c->r[31],-1); // 801DA494
  if (crb(c,2)) { goto L_801DA4DC; } // 801DA498
  c->r[3]=c->r[26]|c->r[26]; // 801DA49C
  c->r[4]=c->r[31]|c->r[31]; // 801DA4A0
  c->r[5]=c->r[1]+0x00000010u; // 801DA4A4
  c->lr=0x801DA4ACu; f_80175798(c); // 801DA4A8
  c->r[3]=c->r[1]+0x00000010u; // 801DA4AC
  c->lr=0x801DA4B4u; f_80175C14(c); // 801DA4B0
  cmps(c,0,(int32_t)c->r[30],0); // 801DA4B4
  c->r[31]=c->r[3]|c->r[3]; // 801DA4B8
  if (crb(c,2)) { goto L_801DA4CC; } // 801DA4BC
  c->r[3]=c->r[1]+0x00000010u; // 801DA4C0
  c->lr=0x801DA4C8u; f_80175C28(c); // 801DA4C4
  W32(c->r[30]+0x00000000u,c->r[3]); // 801DA4C8
L_801DA4CC:;
  c->r[3]=c->r[1]+0x00000010u; // 801DA4CC
  c->lr=0x801DA4D4u; f_80175C30(c); // 801DA4D0
  c->r[3]=c->r[31]|c->r[31]; // 801DA4D4
  goto L_801DA4E0; // 801DA4D8
L_801DA4DC:;
  c->r[3]=0u+0x00000000u; // 801DA4DC
L_801DA4E0:;
  c->r[11]=c->r[1]+0x00000040u; // 801DA4E0
  c->lr=0x801DA4E8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA4E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DA4E8
  c->lr=c->r[0]; // 801DA4EC
  c->r[1]=c->r[1]+0x00000040u; // 801DA4F0
  return; // 801DA4F4
}

// fn_801DA4F8
void f_801DA4F8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801DA4F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DA4FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DA500
  W32(c->r[3]+0x00000088u,c->r[0]); // 801DA504
  return; // 801DA508
}

// fn_801DA50C
void f_801DA50C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA50C
  c->r[0]=c->lr; // 801DA510
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA514
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA518
  c->r[31]=c->r[5]|c->r[5]; // 801DA51C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA520
  c->r[30]=c->r[3]|c->r[3]; // 801DA524
  c->r[3]=c->r[3]+0x00000008u; // 801DA528
  c->lr=0x801DA530u; f_8011410C(c); // 801DA52C
  W32(c->r[30]+0x00000088u,c->r[31]); // 801DA530
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA534
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA538
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA53C
  c->lr=c->r[0]; // 801DA540
  c->r[1]=c->r[1]+0x00000010u; // 801DA544
  return; // 801DA548
}

// fn_801DA54C
void f_801DA54C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA54C
  c->r[0]=c->lr; // 801DA550
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA554
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA558
  c->r[31]=c->r[5]|c->r[5]; // 801DA55C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA560
  c->r[30]=c->r[3]|c->r[3]; // 801DA564
  c->r[3]=c->r[4]|c->r[4]; // 801DA568
  c->r[4]=c->r[30]+0x00000008u; // 801DA56C
  c->lr=0x801DA574u; f_80175454(c); // 801DA570
  cmps(c,0,(int32_t)c->r[3],0); // 801DA574
  if (!crb(c,2)) { goto L_801DA584; } // 801DA578
  c->r[3]=0u+0x00000000u; // 801DA57C
  goto L_801DA5A0; // 801DA580
L_801DA584:;
  c->r[4]=c->r[31]|c->r[31]; // 801DA584
  c->r[3]=c->r[30]+0x00000024u; // 801DA588
  c->r[5]=0u+0x0000007Fu; // 801DA58C
  c->lr=0x801DA594u; f_801141CC(c); // 801DA590
  c->r[0]=0u+0x00000000u; // 801DA594
  c->r[3]=0u+0x00000001u; // 801DA598
  W8(c->r[30]+0x000000A3u,c->r[0]); // 801DA59C
L_801DA5A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA5A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA5A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA5A8
  c->lr=c->r[0]; // 801DA5AC
  c->r[1]=c->r[1]+0x00000010u; // 801DA5B0
  return; // 801DA5B4
}

// fn_801DA5B8
void f_801DA5B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA5B8
  c->r[0]=c->lr; // 801DA5BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA5C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA5C4
  c->r[31]=c->r[3]|c->r[3]; // 801DA5C8
  c->lr=0x801DA5D0u; f_801DA2D4(c); // 801DA5CC
  c->r[0]=0u+0x00000000u; // 801DA5D0
  c->r[4]=0u+0x802A0000u; // 801DA5D4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801DA5D8
  c->r[5]=c->r[31]+0x00000008u; // 801DA5DC
  c->r[4]=c->r[4]+0x00001B70u; // 801DA5E0
  c->r[6]=c->r[31]+0x00000014u; // 801DA5E4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801DA5E8
  c->r[3]=c->r[31]|c->r[31]; // 801DA5EC
  W32(c->r[31]+0x00000014u,c->r[0]); // 801DA5F0
  W32(c->r[31]+0x00000018u,c->r[0]); // 801DA5F4
  W32(c->r[31]+0x00000000u,c->r[4]); // 801DA5F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DA5FC
  W32(c->r[31]+0x00000008u,c->r[5]); // 801DA600
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 801DA604
  W32(c->r[31]+0x00000010u,c->r[0]); // 801DA608
  W32(c->r[31]+0x00000014u,c->r[6]); // 801DA60C
  W32(c->r[31]+0x00000018u,c->r[6]); // 801DA610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA614
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA618
  c->lr=c->r[0]; // 801DA61C
  c->r[1]=c->r[1]+0x00000010u; // 801DA620
  return; // 801DA624
}

// fn_801DA628
void f_801DA628(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA628
  c->r[0]=c->lr; // 801DA62C
  cmps(c,0,(int32_t)c->r[3],0); // 801DA630
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA638
  c->r[31]=c->r[4]|c->r[4]; // 801DA63C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA640
  c->r[30]=c->r[3]|c->r[3]; // 801DA644
  if (crb(c,2)) { goto L_801DA69C; } // 801DA648
  c->r[4]=0u+0x802A0000u; // 801DA64C
  c->r[4]=c->r[4]+0x00001B70u; // 801DA650
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DA654
  c->r[3]=c->r[3]+0x00000004u; // 801DA658
  c->lr=0x801DA660u; f_8017A720(c); // 801DA65C
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 801DA660
  if (crb(c,2)) { goto L_801DA670; } // 801DA664
  c->r[4]=0u+0x00000000u; // 801DA668
  c->lr=0x801DA670u; f_8017A654(c); // 801DA66C
L_801DA670:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 801DA670
  if (crb(c,2)) { goto L_801DA680; } // 801DA674
  c->r[4]=0u+0x00000000u; // 801DA678
  c->lr=0x801DA680u; f_8017A654(c); // 801DA67C
L_801DA680:;
  c->r[3]=c->r[30]|c->r[30]; // 801DA680
  c->r[4]=0u+0x00000000u; // 801DA684
  c->lr=0x801DA68Cu; f_801DA294(c); // 801DA688
  cmps(c,0,(int32_t)c->r[31],0); // 801DA68C
  if (!crb(c,1)) { goto L_801DA69C; } // 801DA690
  c->r[3]=c->r[30]|c->r[30]; // 801DA694
  c->lr=0x801DA69Cu; f_8009230C(c); // 801DA698
L_801DA69C:;
  c->r[3]=c->r[30]|c->r[30]; // 801DA69C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA6A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA6A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA6A8
  c->lr=c->r[0]; // 801DA6AC
  c->r[1]=c->r[1]+0x00000010u; // 801DA6B0
  return; // 801DA6B4
}

// fn_801DA6B8
void f_801DA6B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA6B8
  c->r[0]=c->lr; // 801DA6BC
  c->r[5]=c->r[4]|c->r[4]; // 801DA6C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA6C4
  c->r[0]=c->r[3]+0x00000008u; // 801DA6C8
  c->r[3]=c->r[3]+0x00000004u; // 801DA6CC
  c->r[4]=c->r[1]+0x00000008u; // 801DA6D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DA6D4
  c->lr=0x801DA6DCu; f_8017A764(c); // 801DA6D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA6DC
  c->lr=c->r[0]; // 801DA6E0
  c->r[1]=c->r[1]+0x00000010u; // 801DA6E4
  return; // 801DA6E8
}

// fn_801DA6EC
void f_801DA6EC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 801DA6EC
  f_8017A790(c); return; // 801DA6F0
}

// GetResource__Q34nw4r3lyt24MultiArcResourceAccessorFUlPCcPUl
void f_801DA6F4(Ctx* __restrict c) {
  trace_call(0x801DA6F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA6F4
  c->r[0]=c->lr; // 801DA6F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA6FC
  c->r[11]=c->r[1]+0x00000020u; // 801DA700
  c->lr=0x801DA708u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA704
  c->r[31]=R32(c->r[3]+0x00000008u); // 801DA708
  c->r[27]=c->r[4]|c->r[4]; // 801DA70C
  c->r[28]=c->r[5]|c->r[5]; // 801DA710
  c->r[29]=c->r[6]|c->r[6]; // 801DA714
  c->r[30]=c->r[3]+0x00000008u; // 801DA718
  goto L_801DA748; // 801DA71C
L_801DA720:;
  c->r[5]=c->r[27]|c->r[27]; // 801DA720
  c->r[6]=c->r[28]|c->r[28]; // 801DA724
  c->r[7]=c->r[29]|c->r[29]; // 801DA728
  c->r[3]=c->r[31]+0x00000008u; // 801DA72C
  c->r[4]=c->r[31]+0x00000024u; // 801DA730
  c->lr=0x801DA738u; f_801DA3B8(c); // 801DA734
  cmps(c,0,(int32_t)c->r[3],0); // 801DA738
  if (crb(c,2)) { goto L_801DA744; } // 801DA73C
  goto L_801DA754; // 801DA740
L_801DA744:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801DA744
L_801DA748:;
  cmpu(c,0,c->r[31],c->r[30]); // 801DA748
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA720; } // 801DA74C
  c->r[3]=0u+0x00000000u; // 801DA750
L_801DA754:;
  c->r[11]=c->r[1]+0x00000020u; // 801DA754
  c->lr=0x801DA75Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA758
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA75C
  c->lr=c->r[0]; // 801DA760
  c->r[1]=c->r[1]+0x00000020u; // 801DA764
  return; // 801DA768
}

// RegistFont__Q34nw4r3lyt24MultiArcResourceAccessorFPQ34nw4r3lyt11FontRefLink
void f_801DA76C(Ctx* __restrict c) {
  trace_call(0x801DA76Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA76C
  c->r[0]=c->lr; // 801DA770
  c->r[5]=c->r[4]|c->r[4]; // 801DA774
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA778
  c->r[0]=c->r[3]+0x00000014u; // 801DA77C
  c->r[3]=c->r[3]+0x00000010u; // 801DA780
  c->r[4]=c->r[1]+0x00000008u; // 801DA784
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DA788
  c->lr=0x801DA790u; f_8017A764(c); // 801DA78C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA790
  c->lr=c->r[0]; // 801DA794
  c->r[1]=c->r[1]+0x00000010u; // 801DA798
  return; // 801DA79C
}

// GetFont__Q34nw4r3lyt24MultiArcResourceAccessorFPCc
void f_801DA7A0(Ctx* __restrict c) {
  trace_call(0x801DA7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA7A0
  c->r[0]=c->lr; // 801DA7A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA7A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DA7AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DA7B0
  c->r[30]=c->r[3]+0x00000014u; // 801DA7B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DA7B8
  c->r[29]=c->r[4]|c->r[4]; // 801DA7BC
  c->r[31]=R32(c->r[3]+0x00000014u); // 801DA7C0
  goto L_801DA7E8; // 801DA7C4
L_801DA7C8:;
  c->r[3]=c->r[29]|c->r[29]; // 801DA7C8
  c->r[4]=c->r[31]+0x00000008u; // 801DA7CC
  c->lr=0x801DA7D4u; f_80114288(c); // 801DA7D0
  cmps(c,0,(int32_t)c->r[3],0); // 801DA7D4
  if (!crb(c,2)) { goto L_801DA7E4; } // 801DA7D8
  c->r[3]=R32(c->r[31]+0x00000088u); // 801DA7DC
  goto L_801DA7F4; // 801DA7E0
L_801DA7E4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801DA7E4
L_801DA7E8:;
  cmpu(c,0,c->r[31],c->r[30]); // 801DA7E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA7C8; } // 801DA7EC
  c->r[3]=0u+0x00000000u; // 801DA7F0
L_801DA7F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA7F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DA7F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DA7FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DA800
  c->lr=c->r[0]; // 801DA804
  c->r[1]=c->r[1]+0x00000020u; // 801DA808
  return; // 801DA80C
}

// EqualsResName__Q34nw4r3lyt6detailFPCcPCc
void f_801DA810(Ctx* __restrict c) {
  trace_call(0x801DA810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA810
  c->r[0]=c->lr; // 801DA814
  c->r[5]=0u+0x00000010u; // 801DA818
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA81C
  c->lr=0x801DA824u; f_801143A4(c); // 801DA820
  c->r[0]=cntlz(c->r[3]); // 801DA824
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DA828
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA82C
  c->lr=c->r[0]; // 801DA830
  c->r[1]=c->r[1]+0x00000010u; // 801DA834
  return; // 801DA838
}

// EqualsMaterialName__Q34nw4r3lyt6detailFPCcPCc
void f_801DA83C(Ctx* __restrict c) {
  trace_call(0x801DA83Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA83C
  c->r[0]=c->lr; // 801DA840
  c->r[5]=0u+0x00000014u; // 801DA844
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA848
  c->lr=0x801DA850u; f_801143A4(c); // 801DA84C
  c->r[0]=cntlz(c->r[3]); // 801DA850
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DA854
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA858
  c->lr=c->r[0]; // 801DA85C
  c->r[1]=c->r[1]+0x00000010u; // 801DA860
  return; // 801DA864
}

// TestFileHeader__Q34nw4r3lyt6detailFRCQ44nw4r3lyt3res16BinaryFileHeaderUl
void f_801DA868(Ctx* __restrict c) {
  trace_call(0x801DA868u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DA868
  c->r[5]=0u+0x00000000u; // 801DA86C
  cmpu(c,0,c->r[4],c->r[0]); // 801DA870
  if (!crb(c,2)) { goto L_801DA888; } // 801DA874
  c->r[0]=R16(c->r[3]+0x00000004u); // 801DA878
  cmpu(c,0,c->r[0],0x0000FEFFu); // 801DA87C
  if (!crb(c,2)) { goto L_801DA888; } // 801DA880
  c->r[5]=0u+0x00000001u; // 801DA884
L_801DA888:;
  c->r[3]=c->r[5]|c->r[5]; // 801DA888
  return; // 801DA88C
}

// __ct__Q44nw4r3lyt6detail11TexCoordAryFv
void f_801DA890(Ctx* __restrict c) {
  trace_call(0x801DA890u);
  c->r[0]=0u+0x00000000u; // 801DA890
  W8(c->r[3]+0x00000000u,c->r[0]); // 801DA894
  W8(c->r[3]+0x00000001u,c->r[0]); // 801DA898
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DA89C
  return; // 801DA8A0
}

// Free__Q44nw4r3lyt6detail11TexCoordAryFv
void f_801DA8A4(Ctx* __restrict c) {
  trace_call(0x801DA8A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA8A4
  c->r[0]=c->lr; // 801DA8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA8B0
  c->r[31]=c->r[3]|c->r[3]; // 801DA8B4
  c->r[4]=R32(c->r[3]+0x00000004u); // 801DA8B8
  cmps(c,0,(int32_t)c->r[4],0); // 801DA8BC
  if (crb(c,2)) { goto L_801DA8E0; } // 801DA8C0
  if (crb(c,2)) { goto L_801DA8D0; } // 801DA8C4
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801DA8C8
  c->lr=0x801DA8D0u; f_80128078(c); // 801DA8CC
L_801DA8D0:;
  c->r[0]=0u+0x00000000u; // 801DA8D0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DA8D4
  W8(c->r[31]+0x00000000u,c->r[0]); // 801DA8D8
  W8(c->r[31]+0x00000001u,c->r[0]); // 801DA8DC
L_801DA8E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA8E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA8E4
  c->lr=c->r[0]; // 801DA8E8
  c->r[1]=c->r[1]+0x00000010u; // 801DA8EC
  return; // 801DA8F0
}

// Reserve__Q44nw4r3lyt6detail11TexCoordAryFUc
void f_801DA8F4(Ctx* __restrict c) {
  trace_call(0x801DA8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA8F4
  c->r[0]=c->lr; // 801DA8F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA8FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA900
  c->r[31]=c->r[4]|c->r[4]; // 801DA904
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA908
  c->r[30]=c->r[3]|c->r[3]; // 801DA90C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DA910
  cmpu(c,0,c->r[0],c->r[4]); // 801DA914
  if (!crb(c,0)) { goto L_801DA970; } // 801DA918
  c->r[4]=R32(c->r[3]+0x00000004u); // 801DA91C
  cmps(c,0,(int32_t)c->r[4],0); // 801DA920
  if (crb(c,2)) { goto L_801DA944; } // 801DA924
  if (crb(c,2)) { goto L_801DA934; } // 801DA928
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801DA92C
  c->lr=0x801DA934u; f_80128078(c); // 801DA930
L_801DA934:;
  c->r[0]=0u+0x00000000u; // 801DA934
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DA938
  W8(c->r[30]+0x00000000u,c->r[0]); // 801DA93C
  W8(c->r[30]+0x00000001u,c->r[0]); // 801DA940
L_801DA944:;
  c->r[3]=R32(c->r[13]+0xFFFF9D78u); // 801DA944
  c->r[4]=rotl(c->r[31],5)&0x00001FE0u; // 801DA948
  c->lr=0x801DA950u; f_80128068(c); // 801DA94C
  cmps(c,0,(int32_t)c->r[3],0); // 801DA950
  if (crb(c,2)) { goto L_801DA95C; } // 801DA954
  goto L_801DA960; // 801DA958
L_801DA95C:;
  c->r[3]=0u+0x00000000u; // 801DA95C
L_801DA960:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DA960
  W32(c->r[30]+0x00000004u,c->r[3]); // 801DA964
  if (crb(c,2)) { goto L_801DA970; } // 801DA968
  W8(c->r[30]+0x00000000u,c->r[31]); // 801DA96C
L_801DA970:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA974
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA978
  c->lr=c->r[0]; // 801DA97C
  c->r[1]=c->r[1]+0x00000010u; // 801DA980
  return; // 801DA984
}

// SetSize__Q44nw4r3lyt6detail11TexCoordAryFUc
void f_801DA988(Ctx* __restrict c) {
  trace_call(0x801DA988u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DA988
  cmps(c,0,(int32_t)c->r[0],0); // 801DA98C
  if (crb(c,2)) return; // 801DA990
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DA994
  cmpu(c,0,c->r[4],c->r[0]); // 801DA998
  if (crb(c,1)) return; // 801DA99C
  c->r[0]=R8(c->r[13]+0xFFFF9DA0u); // 801DA9A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DA9A4
  if (!crb(c,2)) { goto L_801DA9E4; } // 801DA9A8
  c->r[6]=0u+0x80360000u; // 801DA9AC
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DA9B0
  c->r[5]=c->r[6]+0x00006900u; // 801DA9B4
  {uint32_t ea=c->r[2]+0xFFFF9DDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA9B8
  c->r[0]=0u+0x00000001u; // 801DA9BC
  {uint32_t ea=c->r[6]+0x00006900u; WF32(ea,c->f[1]);} // 801DA9C0
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 801DA9C4
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 801DA9C8
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[1]);} // 801DA9CC
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 801DA9D0
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 801DA9D4
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 801DA9D8
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 801DA9DC
  W8(c->r[13]+0xFFFF9DA0u,c->r[0]); // 801DA9E0
L_801DA9E4:;
  c->r[7]=R8(c->r[3]+0x00000001u); // 801DA9E4
  c->r[6]=0u+0x80360000u; // 801DA9E8
  c->r[5]=c->r[6]+0x00006900u; // 801DA9EC
  {uint32_t ea=c->r[6]+0x00006900u; c->f[7]=c->ps1[7]=RF32(ea);} // 801DA9F0
  c->r[0]=c->r[4]-c->r[7]; // 801DA9F4
  c->r[6]=rotl(c->r[7],5)&0xFFFFFFE0u; // 801DA9F8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DA9FC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DAA00
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801DAA04
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DAA08
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DAA0C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAA10
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAA14
  c->ctr=c->r[0]; // 801DAA18
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801DAA1C
  if (!crb(c,0)) { goto L_801DAA6C; } // 801DAA20
L_801DAA24:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAA24
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[7]);} // 801DAA28
  c->r[5]=c->r[0]+c->r[6]; // 801DAA2C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 801DAA30
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAA34
  c->r[5]=c->r[0]+c->r[6]; // 801DAA38
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 801DAA3C
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 801DAA40
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAA44
  c->r[5]=c->r[0]+c->r[6]; // 801DAA48
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 801DAA4C
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 801DAA50
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAA54
  c->r[5]=c->r[0]+c->r[6]; // 801DAA58
  c->r[6]=c->r[6]+0x00000020u; // 801DAA5C
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 801DAA60
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 801DAA64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAA24; } // 801DAA68
L_801DAA6C:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 801DAA6C
  return; // 801DAA70
}

// Copy__Q44nw4r3lyt6detail11TexCoordAryFPCvUc
void f_801DAA74(Ctx* __restrict c) {
  trace_call(0x801DAA74u);
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DAA74
  cmpu(c,0,c->r[0],c->r[5]); // 801DAA78
  if (!crb(c,0)) { goto L_801DAA84; } // 801DAA7C
  c->r[0]=c->r[5]|c->r[5]; // 801DAA80
L_801DAA84:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 801DAA84
  c->r[6]=0u+0x00000000u; // 801DAA88
  c->ctr=c->r[5]; // 801DAA8C
  cmps(c,0,(int32_t)c->r[5],0); // 801DAA90
  if (!crb(c,1)) return; // 801DAA94
L_801DAA98:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAA98
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAA9C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAAA0
  c->r[5]=c->r[0]+c->r[6]; // 801DAAA4
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[1]);} // 801DAAA8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAAAC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 801DAAB0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAAB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAAB8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DAABC
  c->r[5]=c->r[0]+c->r[6]; // 801DAAC0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DAAC4
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 801DAAC8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAACC
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DAAD0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAAD4
  c->r[4]=c->r[4]+0x00000020u; // 801DAAD8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAADC
  c->r[5]=c->r[0]+c->r[6]; // 801DAAE0
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 801DAAE4
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 801DAAE8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DAAEC
  c->r[5]=c->r[0]+c->r[6]; // 801DAAF0
  c->r[6]=c->r[6]+0x00000020u; // 801DAAF4
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 801DAAF8
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 801DAAFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAA98; } // 801DAB00
  return; // 801DAB04
}

// IsModulateVertexColor__Q34nw4r3lyt6detailFPQ34nw4r2ut5ColorUc
void f_801DAB08(Ctx* __restrict c) {
  trace_call(0x801DAB08u);
  cmpu(c,0,c->r[4],0x000000FFu); // 801DAB08
  if (crb(c,2)) { goto L_801DAB18; } // 801DAB0C
  c->r[3]=0u+0x00000001u; // 801DAB10
  return; // 801DAB14
L_801DAB18:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DAB18
  if (crb(c,2)) { goto L_801DAB68; } // 801DAB1C
  c->r[4]=R32(c->r[3]+0x00000000u); // 801DAB20
  c->r[0]=c->r[4]+0x00010000u; // 801DAB24
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DAB28
  if (!crb(c,2)) { goto L_801DAB60; } // 801DAB2C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801DAB30
  c->r[0]=c->r[4]+0x00010000u; // 801DAB34
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DAB38
  if (!crb(c,2)) { goto L_801DAB60; } // 801DAB3C
  c->r[4]=R32(c->r[3]+0x00000008u); // 801DAB40
  c->r[0]=c->r[4]+0x00010000u; // 801DAB44
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DAB48
  if (!crb(c,2)) { goto L_801DAB60; } // 801DAB4C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801DAB50
  c->r[0]=c->r[3]+0x00010000u; // 801DAB54
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DAB58
  if (crb(c,2)) { goto L_801DAB68; } // 801DAB5C
L_801DAB60:;
  c->r[3]=0u+0x00000001u; // 801DAB60
  return; // 801DAB64
L_801DAB68:;
  c->r[3]=0u+0x00000000u; // 801DAB68
  return; // 801DAB6C
}

// MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc
void f_801DAB70(Ctx* __restrict c) {
  trace_call(0x801DAB70u);
  c->r[8]=R8(c->r[4]+0x00000000u); // 801DAB70
  cmpu(c,0,c->r[5],0x000000FFu); // 801DAB74
  c->r[7]=R8(c->r[4]+0x00000001u); // 801DAB78
  c->r[6]=R8(c->r[4]+0x00000002u); // 801DAB7C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801DAB80
  W8(c->r[3]+0x00000000u,c->r[8]); // 801DAB84
  W8(c->r[3]+0x00000001u,c->r[7]); // 801DAB88
  W8(c->r[3]+0x00000002u,c->r[6]); // 801DAB8C
  W8(c->r[3]+0x00000003u,c->r[0]); // 801DAB90
  if (crb(c,2)) return; // 801DAB94
  c->r[0]=R8(c->r[4]+0x00000003u); // 801DAB98
  c->r[4]=0u+0x80810000u; // 801DAB9C
  c->r[4]=c->r[4]+0xFFFF8081u; // 801DABA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801DABA4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801DABA8
  c->r[0]=c->r[4]+c->r[0]; // 801DABAC
  c->r[0]=sraw(c,c->r[0],7); // 801DABB0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801DABB4
  c->r[0]=c->r[0]+c->r[4]; // 801DABB8
  W8(c->r[3]+0x00000003u,c->r[0]); // 801DABBC
  return; // 801DABC0
}

// SetVertexFormat__Q34nw4r3lyt6detailFbUc
void f_801DABC4(Ctx* __restrict c) {
  trace_call(0x801DABC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DABC4
  c->r[0]=c->lr; // 801DABC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DABCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DABD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DABD4
  c->r[30]=c->r[4]|c->r[4]; // 801DABD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DABDC
  c->r[29]=c->r[3]|c->r[3]; // 801DABE0
  c->lr=0x801DABE8u; f_80103938(c); // 801DABE4
  c->r[3]=0u+0x00000009u; // 801DABE8
  c->r[4]=0u+0x00000001u; // 801DABEC
  c->lr=0x801DABF4u; f_80103344(c); // 801DABF0
  cmps(c,0,(int32_t)c->r[29],0); // 801DABF4
  if (crb(c,2)) { goto L_801DAC08; } // 801DABF8
  c->r[3]=0u+0x0000000Bu; // 801DABFC
  c->r[4]=0u+0x00000001u; // 801DAC00
  c->lr=0x801DAC08u; f_80103344(c); // 801DAC04
L_801DAC08:;
  c->r[31]=0u+0x00000000u; // 801DAC08
  goto L_801DAC20; // 801DAC0C
L_801DAC10:;
  c->r[3]=c->r[31]+0x0000000Du; // 801DAC10
  c->r[4]=0u+0x00000001u; // 801DAC14
  c->lr=0x801DAC1Cu; f_80103344(c); // 801DAC18
  c->r[31]=c->r[31]+0x00000001u; // 801DAC1C
L_801DAC20:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 801DAC20
  if (crb(c,0)) { IRQCHK(c); goto L_801DAC10; } // 801DAC24
  c->r[3]=0u+0x00000000u; // 801DAC28
  c->r[4]=0u+0x00000009u; // 801DAC2C
  c->r[5]=0u+0x00000000u; // 801DAC30
  c->r[6]=0u+0x00000004u; // 801DAC34
  c->r[7]=0u+0x00000000u; // 801DAC38
  c->lr=0x801DAC40u; f_8010396C(c); // 801DAC3C
  cmps(c,0,(int32_t)c->r[29],0); // 801DAC40
  if (crb(c,2)) { goto L_801DAC60; } // 801DAC44
  c->r[3]=0u+0x00000000u; // 801DAC48
  c->r[4]=0u+0x0000000Bu; // 801DAC4C
  c->r[5]=0u+0x00000001u; // 801DAC50
  c->r[6]=0u+0x00000005u; // 801DAC54
  c->r[7]=0u+0x00000000u; // 801DAC58
  c->lr=0x801DAC60u; f_8010396C(c); // 801DAC5C
L_801DAC60:;
  c->r[31]=0u+0x00000000u; // 801DAC60
  goto L_801DAC84; // 801DAC64
L_801DAC68:;
  c->r[4]=c->r[31]+0x0000000Du; // 801DAC68
  c->r[3]=0u+0x00000000u; // 801DAC6C
  c->r[5]=0u+0x00000001u; // 801DAC70
  c->r[6]=0u+0x00000004u; // 801DAC74
  c->r[7]=0u+0x00000000u; // 801DAC78
  c->lr=0x801DAC80u; f_8010396C(c); // 801DAC7C
  c->r[31]=c->r[31]+0x00000001u; // 801DAC80
L_801DAC84:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 801DAC84
  if (crb(c,0)) { IRQCHK(c); goto L_801DAC68; } // 801DAC88
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DAC8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DAC90
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DAC94
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DAC98
  c->lr=c->r[0]; // 801DAC9C
  c->r[1]=c->r[1]+0x00000020u; // 801DACA0
  return; // 801DACA4
}

// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5Color
void f_801DACA8(Ctx* __restrict c) {
  trace_call(0x801DACA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DACA8
  c->r[0]=c->lr; // 801DACAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DACB0
  c->r[11]=c->r[1]+0x00000020u; // 801DACB4
  c->lr=0x801DACBCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DACB8
  c->r[27]=c->r[3]|c->r[3]; // 801DACBC
  c->r[28]=c->r[4]|c->r[4]; // 801DACC0
  c->r[29]=c->r[5]|c->r[5]; // 801DACC4
  c->r[30]=c->r[6]|c->r[6]; // 801DACC8
  c->r[31]=c->r[7]|c->r[7]; // 801DACCC
  c->r[3]=0u+0x00000080u; // 801DACD0
  c->r[4]=0u+0x00000000u; // 801DACD4
  c->r[5]=0u+0x00000004u; // 801DACD8
  c->lr=0x801DACE0u; f_80104E30(c); // 801DACDC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DACE0
  c->r[3]=0u+0xCC010000u; // 801DACE4
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DACE8
  cmps(c,0,(int32_t)c->r[31],0); // 801DACEC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DACF0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DACF4
  if (crb(c,2)) { goto L_801DAD04; } // 801DACF8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DACFC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801DAD00
L_801DAD04:;
  cmps(c,1,(int32_t)c->r[29],0); // 801DAD04
  c->r[6]=0u+0x00000000u; // 801DAD08
  if (!crb(c,5)) { goto L_801DAE1C; } // 801DAD0C
  cmps(c,0,(int32_t)c->r[29],8); // 801DAD10
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 801DAD14
  if (!crb(c,1)) { goto L_801DADE8; } // 801DAD18
  c->r[5]=0u+0x00000000u; // 801DAD1C
  if (crb(c,4)) { goto L_801DAD38; } // 801DAD20
  c->r[3]=0u+0x80000000u; // 801DAD24
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DAD28
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801DAD2C
  if (crb(c,1)) { goto L_801DAD38; } // 801DAD30
  c->r[5]=0u+0x00000001u; // 801DAD34
L_801DAD38:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DAD38
  if (crb(c,2)) { goto L_801DADE8; } // 801DAD3C
  c->r[0]=c->r[4]+0x00000007u; // 801DAD40
  c->r[5]=c->r[30]|c->r[30]; // 801DAD44
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801DAD48
  c->r[3]=0u+0xCC010000u; // 801DAD4C
  c->ctr=c->r[0]; // 801DAD50
  cmps(c,0,(int32_t)c->r[4],0); // 801DAD54
  if (!crb(c,1)) { goto L_801DADE8; } // 801DAD58
L_801DAD5C:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAD5C
  c->r[6]=c->r[6]+0x00000008u; // 801DAD60
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAD64
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAD68
  {uint32_t ea=c->r[5]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DAD6C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAD70
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAD74
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801DAD78
  {uint32_t ea=c->r[5]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAD7C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAD80
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAD84
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAD88
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAD8C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAD90
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAD94
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAD98
  {uint32_t ea=c->r[5]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAD9C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DADA0
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DADA4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DADA8
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DADAC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DADB0
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DADB4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DADB8
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DADBC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DADC0
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DADC4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DADC8
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DADCC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DADD0
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DADD4
  c->r[5]=c->r[5]+0x00000100u; // 801DADD8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DADDC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DADE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAD5C; } // 801DADE4
L_801DADE8:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 801DADE8
  c->r[0]=c->r[29]-c->r[6]; // 801DADEC
  c->r[4]=c->r[30]+c->r[3]; // 801DADF0
  c->r[3]=0u+0xCC010000u; // 801DADF4
  c->ctr=c->r[0]; // 801DADF8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 801DADFC
  if (!crb(c,0)) { goto L_801DAE1C; } // 801DAE00
L_801DAE04:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAE04
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAE08
  c->r[4]=c->r[4]+0x00000020u; // 801DAE0C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAE10
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAE14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAE04; } // 801DAE18
L_801DAE1C:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAE1C
  c->r[3]=0u+0xCC010000u; // 801DAE20
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAE24
  cmps(c,0,(int32_t)c->r[31],0); // 801DAE28
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DAE2C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801DAE30
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAE34
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801DAE38
  if (crb(c,2)) { goto L_801DAE48; } // 801DAE3C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DAE40
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801DAE44
L_801DAE48:;
  cmps(c,1,(int32_t)c->r[29],0); // 801DAE48
  c->r[6]=0u+0x00000000u; // 801DAE4C
  if (!crb(c,5)) { goto L_801DAF60; } // 801DAE50
  cmps(c,0,(int32_t)c->r[29],8); // 801DAE54
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 801DAE58
  if (!crb(c,1)) { goto L_801DAF2C; } // 801DAE5C
  c->r[5]=0u+0x00000000u; // 801DAE60
  if (crb(c,4)) { goto L_801DAE7C; } // 801DAE64
  c->r[3]=0u+0x80000000u; // 801DAE68
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DAE6C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801DAE70
  if (crb(c,1)) { goto L_801DAE7C; } // 801DAE74
  c->r[5]=0u+0x00000001u; // 801DAE78
L_801DAE7C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DAE7C
  if (crb(c,2)) { goto L_801DAF2C; } // 801DAE80
  c->r[0]=c->r[4]+0x00000007u; // 801DAE84
  c->r[5]=c->r[30]|c->r[30]; // 801DAE88
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801DAE8C
  c->r[3]=0u+0xCC010000u; // 801DAE90
  c->ctr=c->r[0]; // 801DAE94
  cmps(c,0,(int32_t)c->r[4],0); // 801DAE98
  if (!crb(c,1)) { goto L_801DAF2C; } // 801DAE9C
L_801DAEA0:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAEA0
  c->r[6]=c->r[6]+0x00000008u; // 801DAEA4
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAEA8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAEAC
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DAEB0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAEB4
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAEB8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801DAEBC
  {uint32_t ea=c->r[5]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAEC0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAEC4
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAEC8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAECC
  {uint32_t ea=c->r[5]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAED0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAED4
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAED8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAEDC
  {uint32_t ea=c->r[5]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAEE0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAEE4
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAEE8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAEEC
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAEF0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAEF4
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAEF8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAEFC
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAF00
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAF04
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAF08
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAF0C
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAF10
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAF14
  {uint32_t ea=c->r[5]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAF18
  c->r[5]=c->r[5]+0x00000100u; // 801DAF1C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAF20
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAF24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAEA0; } // 801DAF28
L_801DAF2C:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 801DAF2C
  c->r[0]=c->r[29]-c->r[6]; // 801DAF30
  c->r[4]=c->r[30]+c->r[3]; // 801DAF34
  c->r[3]=0u+0xCC010000u; // 801DAF38
  c->ctr=c->r[0]; // 801DAF3C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 801DAF40
  if (!crb(c,0)) { goto L_801DAF60; } // 801DAF44
L_801DAF48:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAF48
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAF4C
  c->r[4]=c->r[4]+0x00000020u; // 801DAF50
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAF54
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAF58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAF48; } // 801DAF5C
L_801DAF60:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAF60
  c->r[3]=0u+0xCC010000u; // 801DAF64
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAF68
  cmps(c,0,(int32_t)c->r[31],0); // 801DAF6C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DAF70
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801DAF74
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAF78
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801DAF7C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DAF80
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAF84
  if (crb(c,2)) { goto L_801DAF94; } // 801DAF88
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801DAF8C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801DAF90
L_801DAF94:;
  cmps(c,1,(int32_t)c->r[29],0); // 801DAF94
  c->r[6]=0u+0x00000000u; // 801DAF98
  if (!crb(c,5)) { goto L_801DB0AC; } // 801DAF9C
  cmps(c,0,(int32_t)c->r[29],8); // 801DAFA0
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 801DAFA4
  if (!crb(c,1)) { goto L_801DB078; } // 801DAFA8
  c->r[5]=0u+0x00000000u; // 801DAFAC
  if (crb(c,4)) { goto L_801DAFC8; } // 801DAFB0
  c->r[3]=0u+0x80000000u; // 801DAFB4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DAFB8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801DAFBC
  if (crb(c,1)) { goto L_801DAFC8; } // 801DAFC0
  c->r[5]=0u+0x00000001u; // 801DAFC4
L_801DAFC8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DAFC8
  if (crb(c,2)) { goto L_801DB078; } // 801DAFCC
  c->r[0]=c->r[4]+0x00000007u; // 801DAFD0
  c->r[5]=c->r[30]|c->r[30]; // 801DAFD4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801DAFD8
  c->r[3]=0u+0xCC010000u; // 801DAFDC
  c->ctr=c->r[0]; // 801DAFE0
  cmps(c,0,(int32_t)c->r[4],0); // 801DAFE4
  if (!crb(c,1)) { goto L_801DB078; } // 801DAFE8
L_801DAFEC:;
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAFEC
  c->r[6]=c->r[6]+0x00000008u; // 801DAFF0
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAFF4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DAFF8
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DAFFC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB000
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB004
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801DB008
  {uint32_t ea=c->r[5]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB00C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB010
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB014
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB018
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB01C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB020
  {uint32_t ea=c->r[5]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB024
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB028
  {uint32_t ea=c->r[5]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB02C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB030
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB034
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB038
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB03C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB040
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB044
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB048
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB04C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB050
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB054
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB058
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB05C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB060
  {uint32_t ea=c->r[5]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB064
  c->r[5]=c->r[5]+0x00000100u; // 801DB068
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB06C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB070
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAFEC; } // 801DB074
L_801DB078:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 801DB078
  c->r[0]=c->r[29]-c->r[6]; // 801DB07C
  c->r[4]=c->r[30]+c->r[3]; // 801DB080
  c->r[3]=0u+0xCC010000u; // 801DB084
  c->ctr=c->r[0]; // 801DB088
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 801DB08C
  if (!crb(c,0)) { goto L_801DB0AC; } // 801DB090
L_801DB094:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB094
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB098
  c->r[4]=c->r[4]+0x00000020u; // 801DB09C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB0A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB0A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB094; } // 801DB0A8
L_801DB0AC:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB0AC
  c->r[3]=0u+0xCC010000u; // 801DB0B0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB0B4
  cmps(c,0,(int32_t)c->r[31],0); // 801DB0B8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB0BC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801DB0C0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801DB0C4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB0C8
  if (crb(c,2)) { goto L_801DB0D8; } // 801DB0CC
  c->r[0]=R32(c->r[31]+0x00000008u); // 801DB0D0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801DB0D4
L_801DB0D8:;
  cmps(c,1,(int32_t)c->r[29],0); // 801DB0D8
  c->r[6]=0u+0x00000000u; // 801DB0DC
  if (!crb(c,5)) { goto L_801DB1F0; } // 801DB0E0
  cmps(c,0,(int32_t)c->r[29],8); // 801DB0E4
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 801DB0E8
  if (!crb(c,1)) { goto L_801DB1BC; } // 801DB0EC
  c->r[5]=0u+0x00000000u; // 801DB0F0
  if (crb(c,4)) { goto L_801DB10C; } // 801DB0F4
  c->r[3]=0u+0x80000000u; // 801DB0F8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DB0FC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801DB100
  if (crb(c,1)) { goto L_801DB10C; } // 801DB104
  c->r[5]=0u+0x00000001u; // 801DB108
L_801DB10C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DB10C
  if (crb(c,2)) { goto L_801DB1BC; } // 801DB110
  c->r[0]=c->r[4]+0x00000007u; // 801DB114
  c->r[5]=c->r[30]|c->r[30]; // 801DB118
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801DB11C
  c->r[3]=0u+0xCC010000u; // 801DB120
  c->ctr=c->r[0]; // 801DB124
  cmps(c,0,(int32_t)c->r[4],0); // 801DB128
  if (!crb(c,1)) { goto L_801DB1BC; } // 801DB12C
L_801DB130:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB130
  c->r[6]=c->r[6]+0x00000008u; // 801DB134
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB138
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB13C
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB140
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB144
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB148
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801DB14C
  {uint32_t ea=c->r[5]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB150
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB154
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB158
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB15C
  {uint32_t ea=c->r[5]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB160
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB164
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB168
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB16C
  {uint32_t ea=c->r[5]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB170
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB174
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB178
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB17C
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB180
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB184
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB188
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB18C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB190
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB194
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB198
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB19C
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB1A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB1A4
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB1A8
  c->r[5]=c->r[5]+0x00000100u; // 801DB1AC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB1B0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB1B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB130; } // 801DB1B8
L_801DB1BC:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 801DB1BC
  c->r[0]=c->r[29]-c->r[6]; // 801DB1C0
  c->r[4]=c->r[30]+c->r[3]; // 801DB1C4
  c->r[3]=0u+0xCC010000u; // 801DB1C8
  c->ctr=c->r[0]; // 801DB1CC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 801DB1D0
  if (!crb(c,0)) { goto L_801DB1F0; } // 801DB1D4
L_801DB1D8:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB1D8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB1DC
  c->r[4]=c->r[4]+0x00000020u; // 801DB1E0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801DB1E4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801DB1E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB1D8; } // 801DB1EC
L_801DB1F0:;
  c->r[11]=c->r[1]+0x00000020u; // 801DB1F0
  c->lr=0x801DB1F8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB1F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB1F8
  c->lr=c->r[0]; // 801DB1FC
  c->r[1]=c->r[1]+0x00000020u; // 801DB200
  return; // 801DB204
}

// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5ColorUc
void f_801DB208(Ctx* __restrict c) {
  trace_call(0x801DB208u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB208
  c->r[0]=c->lr; // 801DB20C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801DB210
  c->r[11]=c->r[1]+0x00000050u; // 801DB214
  c->lr=0x801DB21Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB218
  c->r[0]=0u+0xFFFFFFFFu; // 801DB21C
  cmps(c,0,(int32_t)c->r[7],0); // 801DB220
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DB224
  c->r[26]=c->r[3]|c->r[3]; // 801DB228
  c->r[27]=c->r[4]|c->r[4]; // 801DB22C
  c->r[28]=c->r[5]|c->r[5]; // 801DB230
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB234
  c->r[29]=c->r[6]|c->r[6]; // 801DB238
  c->r[30]=c->r[7]|c->r[7]; // 801DB23C
  c->r[31]=c->r[8]|c->r[8]; // 801DB240
  W32(c->r[1]+0x00000018u,c->r[0]); // 801DB244
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DB248
  if (crb(c,2)) { goto L_801DB2C0; } // 801DB24C
  c->r[24]=c->r[30]|c->r[30]; // 801DB250
  c->r[23]=c->r[1]+0x00000010u; // 801DB254
  c->r[25]=0u+0x00000000u; // 801DB258
L_801DB25C:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 801DB25C
  c->r[5]=c->r[31]|c->r[31]; // 801DB260
  c->r[3]=c->r[1]+0x0000000Cu; // 801DB264
  c->r[4]=c->r[1]+0x00000008u; // 801DB268
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DB26C
  c->r[0]=R8(c->r[24]+0x00000001u); // 801DB270
  W8(c->r[1]+0x00000009u,c->r[0]); // 801DB274
  c->r[0]=R8(c->r[24]+0x00000002u); // 801DB278
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801DB27C
  c->r[0]=R8(c->r[24]+0x00000003u); // 801DB280
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801DB284
  c->lr=0x801DB28Cu; f_801DAB70(c); // 801DB288
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801DB28C
  c->r[25]=c->r[25]+0x00000001u; // 801DB290
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801DB294
  cmps(c,0,(int32_t)c->r[25],4); // 801DB298
  W8(c->r[23]+0x00000000u,c->r[3]); // 801DB29C
  c->r[24]=c->r[24]+0x00000004u; // 801DB2A0
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 801DB2A4
  W8(c->r[23]+0x00000001u,c->r[0]); // 801DB2A8
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801DB2AC
  W8(c->r[23]+0x00000002u,c->r[3]); // 801DB2B0
  W8(c->r[23]+0x00000003u,c->r[0]); // 801DB2B4
  c->r[23]=c->r[23]+0x00000004u; // 801DB2B8
  if (crb(c,0)) { IRQCHK(c); goto L_801DB25C; } // 801DB2BC
L_801DB2C0:;
  c->r[3]=0u-c->r[30]; // 801DB2C0
  c->r[0]=c->r[1]+0x00000010u; // 801DB2C4
  c->r[4]=c->r[3]|c->r[30]; // 801DB2C8
  c->r[5]=c->r[28]|c->r[28]; // 801DB2CC
  c->r[7]=sraw(c,c->r[4],31); // 801DB2D0
  c->r[3]=c->r[26]|c->r[26]; // 801DB2D4
  c->r[4]=c->r[27]|c->r[27]; // 801DB2D8
  c->r[6]=c->r[29]|c->r[29]; // 801DB2DC
  c->r[7]=c->r[0]&c->r[7]; // 801DB2E0
  c->lr=0x801DB2E8u; f_801DACA8(c); // 801DB2E4
  c->r[11]=c->r[1]+0x00000050u; // 801DB2E8
  c->lr=0x801DB2F0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB2EC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801DB2F0
  c->lr=c->r[0]; // 801DB2F4
  c->r[1]=c->r[1]+0x00000050u; // 801DB2F8
  return; // 801DB2FC
}

// BindAnimation__Q24nw4r3lytFPQ34nw4r3lyt5GroupPQ34nw4r3lyt13AnimTransformbb
void f_801DB300(Ctx* __restrict c) {
  trace_call(0x801DB300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB300
  c->r[0]=c->lr; // 801DB304
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB308
  c->r[11]=c->r[1]+0x00000020u; // 801DB30C
  c->lr=0x801DB314u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB310
  c->r[31]=R32(c->r[3]+0x00000010u); // 801DB314
  c->r[27]=c->r[4]|c->r[4]; // 801DB318
  c->r[28]=c->r[5]|c->r[5]; // 801DB31C
  c->r[29]=c->r[6]|c->r[6]; // 801DB320
  c->r[30]=c->r[3]+0x00000010u; // 801DB324
  goto L_801DB350; // 801DB328
L_801DB32C:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801DB32C
  c->r[4]=c->r[27]|c->r[27]; // 801DB330
  c->r[5]=c->r[28]|c->r[28]; // 801DB334
  c->r[6]=c->r[29]|c->r[29]; // 801DB338
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DB33C
  c->r[12]=R32(c->r[12]+0x00000044u); // 801DB340
  c->ctr=c->r[12]; // 801DB344
  if (true) { c->lr=0x801DB34Cu; dispatch(c,c->ctr); } // 801DB348
  c->r[31]=R32(c->r[31]+0x00000000u); // 801DB34C
L_801DB350:;
  cmpu(c,0,c->r[31],c->r[30]); // 801DB350
  if (!crb(c,2)) { IRQCHK(c); goto L_801DB32C; } // 801DB354
  c->r[11]=c->r[1]+0x00000020u; // 801DB358
  c->lr=0x801DB360u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB35C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB360
  c->lr=c->r[0]; // 801DB364
  c->r[1]=c->r[1]+0x00000020u; // 801DB368
  return; // 801DB36C
}

// FExp__Q34nw4r4math6detailFf
void f_801DB370(Ctx* __restrict c) {
  trace_call(0x801DB370u);
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB370
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB374
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801DB378
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,1,5);} // 801DB37C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000018u); // 801DB380
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801DB384
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,5);} // 801DB388
  {uint32_t ea=c->r[2]+0xFFFF9DE4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DB38C
  {uint32_t ea=c->r[2]+0xFFFF9DE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB390
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801DB394
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DB398
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801DB39C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801DB3A0
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 801DB3A4
  c->r[3]=R16(c->r[1]+0x00000014u); // 801DB3A8
  W16(c->r[1]+0x00000008u,c->r[3]); // 801DB3AC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 801DB3B0
  c->r[5]=0u+0x802A0000u; // 801DB3B4
  c->r[6]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801DB3B8
  c->r[3]=rotl(c->r[0],23)&0xFF800000u; // 801DB3BC
  c->r[5]=c->r[5]+0x00001B88u; // 801DB3C0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 801DB3C4
  c->r[4]=c->r[5]+c->r[6]; // 801DB3C8
  {uint32_t ea=c->r[5]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB3CC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB3D0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801DB3D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801DB3D8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801DB3DC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801DB3E0
  c->r[0]=c->r[3]+c->r[0]; // 801DB3E4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801DB3E8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DB3EC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB3F0
  c->r[1]=c->r[1]+0x00000020u; // 801DB3F4
  return; // 801DB3F8
}

// FLog__Q34nw4r4math6detailFf
void f_801DB3FC(Ctx* __restrict c) {
  trace_call(0x801DB3FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB3FC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801DB400
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801DB404
  c->r[3]=R32(c->r[1]+0x00000018u); // 801DB408
  c->r[0]=R32(c->r[1]+0x00000010u); // 801DB40C
  c->r[3]=rotl(c->r[3],9)&0x000000FFu; // 801DB410
  c->r[0]=rotl(c->r[0],0)&0x807FFFFFu; // 801DB414
  c->r[3]=c->r[3]+0xFFFFFF81u; // 801DB418
  c->r[0]=c->r[0]|0x3F800000u; // 801DB41C
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801DB420
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB424
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB428
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,3,ea,1,5);} // 801DB42C
  {uint32_t ea=c->r[2]+0xFFFF9DF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB430
  {uint32_t ea=c->r[2]+0xFFFF9DECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB434
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801DB438
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 801DB43C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,2,ea,1,3);} // 801DB440
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 801DB444
  W16(c->r[1]+0x00000008u,c->r[0]); // 801DB448
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,1,ea,1,3);} // 801DB44C
  c->r[4]=0u+0x802A0000u; // 801DB450
  {uint32_t ea=c->r[2]+0xFFFF9DE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB454
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801DB458
  c->r[4]=c->r[4]+0x00001C90u; // 801DB45C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 801DB460
  c->r[3]=c->r[4]+c->r[0]; // 801DB464
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB468
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB46C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 801DB470
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801DB474
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801DB478
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801DB47C
  c->r[1]=c->r[1]+0x00000020u; // 801DB480
  return; // 801DB484
}

// FrSqrt__Q24nw4r4mathFf
void f_801DB488(Ctx* __restrict c) {
  trace_call(0x801DB488u);
  c->f[0]=frsqrte(c->f[1]); // 801DB488
  {uint32_t ea=c->r[2]+0xFFFF9DF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB48C
  {uint32_t ea=c->r[2]+0xFFFF9DF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DB490
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[0]); // 801DB494
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801DB498
  c->f[4]=c->ps1[4]=S(-std::fma(c->f[4],c->f[1],-c->f[3])); // 801DB49C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 801DB4A0
  c->f[1]=c->f[0]; // 801DB4A4
  return; // 801DB4A8
}

// fn_801DB4AC
void f_801DB4AC(Ctx* __restrict c) {
  c->r[6]=0u+0x55550000u; // 801DB4AC
  c->r[5]=0u+0x33330000u; // 801DB4B0
  c->r[7]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801DB4B4
  c->r[4]=0u+0x0F0F0000u; // 801DB4B8
  c->r[0]=c->r[6]+0x00005555u; // 801DB4BC
  c->r[5]=c->r[5]+0x00003333u; // 801DB4C0
  c->r[6]=c->r[7]&c->r[0]; // 801DB4C4
  c->r[0]=c->r[4]+0x00000F0Fu; // 801DB4C8
  c->r[4]=c->r[3]-c->r[6]; // 801DB4CC
  c->r[3]=rotl(c->r[4],30)&0x3FFFFFFFu; // 801DB4D0
  c->r[4]=c->r[4]&c->r[5]; // 801DB4D4
  c->r[3]=c->r[3]&c->r[5]; // 801DB4D8
  c->r[4]=c->r[4]+c->r[3]; // 801DB4DC
  c->r[3]=rotl(c->r[4],28)&0x0FFFFFFFu; // 801DB4E0
  c->r[3]=c->r[4]+c->r[3]; // 801DB4E4
  c->r[3]=c->r[3]&c->r[0]; // 801DB4E8
  c->r[0]=rotl(c->r[3],24)&0x00FFFFFFu; // 801DB4EC
  c->r[3]=c->r[3]+c->r[0]; // 801DB4F0
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 801DB4F4
  c->r[3]=c->r[3]+c->r[0]; // 801DB4F8
  c->r[3]=rotl(c->r[3],0)&0x0000003Fu; // 801DB4FC
  return; // 801DB500
}

// fn_801DB504
void f_801DB504(Ctx* __restrict c) {
  c->f[3]=std::fabs(c->f[1]); // 801DB504
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB508
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB50C
  goto L_801DB518; // 801DB510
L_801DB514:;
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 801DB514
L_801DB518:;
  fcmp(c,0,c->f[3],c->f[0]); // 801DB518
  if (crb(c,1)) { IRQCHK(c); goto L_801DB514; } // 801DB51C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,3,ea,1,3);} // 801DB520
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 801DB524
  W16(c->r[1]+0x00000008u,c->r[0]); // 801DB528
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 801DB52C
  c->r[4]=0u+0x80270000u; // 801DB530
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801DB534
  {uint32_t ea=c->r[2]+0xFFFF9E04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB538
  c->r[4]=c->r[4]+0x00000E80u; // 801DB53C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 801DB540
  c->r[3]=c->r[4]+c->r[0]; // 801DB544
  fcmp(c,0,c->f[1],c->f[0]); // 801DB548
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DB54C
  {uint32_t ea=c->r[4]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB550
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[3]); // 801DB554
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801DB558
  if (!crb(c,0)) { goto L_801DB564; } // 801DB55C
  c->f[1]=-c->f[1]; // 801DB560
L_801DB564:;
  c->r[1]=c->r[1]+0x00000010u; // 801DB564
  return; // 801DB568
}

// fn_801DB56C
void f_801DB56C(Ctx* __restrict c) {
  c->f[1]=std::fabs(c->f[1]); // 801DB56C
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB570
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB574
  goto L_801DB580; // 801DB578
L_801DB57C:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801DB57C
L_801DB580:;
  fcmp(c,0,c->f[1],c->f[0]); // 801DB580
  if (crb(c,1)) { IRQCHK(c); goto L_801DB57C; } // 801DB584
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 801DB588
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 801DB58C
  W16(c->r[1]+0x00000008u,c->r[0]); // 801DB590
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 801DB594
  c->r[3]=0u+0x80270000u; // 801DB598
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801DB59C
  c->r[3]=c->r[3]+0x00000E80u; // 801DB5A0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 801DB5A4
  c->r[3]=c->r[3]+c->r[0]; // 801DB5A8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB5AC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB5B0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801DB5B4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801DB5B8
  c->r[1]=c->r[1]+0x00000010u; // 801DB5BC
  return; // 801DB5C0
}

// fn_801DB5C4
void f_801DB5C4(Ctx* __restrict c) {
  c->f[0]=std::fabs(c->f[1]); // 801DB5C4
  c->r[5]=0u+0x80270000u; // 801DB5C8
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB5CC
  c->r[5]=c->r[5]+0x00000E80u; // 801DB5D0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,3);} // 801DB5D4
  fcmp(c,0,c->f[0],c->f[2]); // 801DB5D8
  if (!crb(c,1)) { goto L_801DB5F0; } // 801DB5DC
L_801DB5E0:;
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801DB5E0
  fcmp(c,0,c->f[0],c->f[2]); // 801DB5E4
  if (crb(c,1)) { IRQCHK(c); goto L_801DB5E0; } // 801DB5E8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,3);} // 801DB5EC
L_801DB5F0:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 801DB5F0
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[2]); // 801DB5F4
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801DB5F8
  c->r[5]=c->r[5]+c->r[0]; // 801DB5FC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,1,3);} // 801DB600
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,0);} // 801DB604
  fcmp(c,0,c->f[1],c->f[4]); // 801DB608
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 801DB60C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,0,0);} // 801DB610
  {double t0=S(std::fma(c->f[0],c->f[2],c->f[3])), t1=S(std::fma(c->ps1[0],c->f[2],c->ps1[3])); c->f[0]=t0; c->ps1[0]=t1;} // 801DB614
  {double t0=S(c->ps1[0]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801DB618
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,1,0);} // 801DB61C
  if (!crb(c,0)) { goto L_801DB628; } // 801DB620
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 801DB624
L_801DB628:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,1,0);} // 801DB628
  return; // 801DB62C
}

// fn_801DB630
void f_801DB630(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9E04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB630
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB634
  fcmp(c,0,c->f[1],c->f[0]); // 801DB638
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DB63C
  if (!crb(c,2)) { goto L_801DB6DC; } // 801DB640
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB644
  fcmp(c,0,c->f[1],c->f[0]); // 801DB648
  if (!crb(c,1)) { goto L_801DB69C; } // 801DB64C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 801DB650
  {uint32_t ea=c->r[2]+0xFFFF9E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB654
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801DB658
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,1,ea,1,3);} // 801DB65C
  c->r[0]=R16(c->r[1]+0x0000001Cu); // 801DB660
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DB664
  {uint32_t ea=c->r[1]+0x0000000Eu; psq_load(c,2,ea,1,3);} // 801DB668
  c->r[4]=0u+0x802A0000u; // 801DB66C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801DB670
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB674
  c->r[4]=c->r[4]+0x00002498u; // 801DB678
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 801DB67C
  c->r[3]=c->r[4]+c->r[0]; // 801DB680
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB684
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB688
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801DB68C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801DB690
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801DB694
  goto L_801DB778; // 801DB698
L_801DB69C:;
  {uint32_t ea=c->r[2]+0xFFFF9E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB69C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801DB6A0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,0,ea,1,3);} // 801DB6A4
  c->r[0]=R16(c->r[1]+0x00000018u); // 801DB6A8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801DB6AC
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,1,ea,1,3);} // 801DB6B0
  c->r[4]=0u+0x802A0000u; // 801DB6B4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801DB6B8
  c->r[4]=c->r[4]+0x00002498u; // 801DB6BC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 801DB6C0
  c->r[3]=c->r[4]+c->r[0]; // 801DB6C4
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB6C8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB6CC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801DB6D0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801DB6D4
  goto L_801DB778; // 801DB6D8
L_801DB6DC:;
  {uint32_t ea=c->r[2]+0xFFFF9E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB6DC
  fcmp(c,0,c->f[1],c->f[0]); // 801DB6E0
  if (!crb(c,0)) { goto L_801DB734; } // 801DB6E4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 801DB6E8
  {uint32_t ea=c->r[2]+0xFFFF9E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB6EC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801DB6F0
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 801DB6F4
  c->r[0]=R16(c->r[1]+0x00000014u); // 801DB6F8
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801DB6FC
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,3);} // 801DB700
  c->r[4]=0u+0x802A0000u; // 801DB704
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801DB708
  {uint32_t ea=c->r[2]+0xFFFF9E18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB70C
  c->r[4]=c->r[4]+0x00002498u; // 801DB710
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 801DB714
  c->r[3]=c->r[4]+c->r[0]; // 801DB718
  {uint32_t ea=c->r[4]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB71C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB720
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801DB724
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801DB728
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801DB72C
  goto L_801DB778; // 801DB730
L_801DB734:;
  c->f[1]=-c->f[1]; // 801DB734
  {uint32_t ea=c->r[2]+0xFFFF9E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB738
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801DB73C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,1,3);} // 801DB740
  c->r[0]=R16(c->r[1]+0x00000010u); // 801DB744
  W16(c->r[1]+0x00000008u,c->r[0]); // 801DB748
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 801DB74C
  c->r[4]=0u+0x802A0000u; // 801DB750
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801DB754
  c->r[4]=c->r[4]+0x00002498u; // 801DB758
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 801DB75C
  c->r[3]=c->r[4]+c->r[0]; // 801DB760
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB764
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB768
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801DB76C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801DB770
  c->f[1]=-c->f[0]; // 801DB774
L_801DB778:;
  c->r[1]=c->r[1]+0x00000020u; // 801DB778
  return; // 801DB77C
}

// MTX33Identity__Q24nw4r4mathFPQ34nw4r4math5MTX33
void f_801DB780(Ctx* __restrict c) {
  trace_call(0x801DB780u);
  {uint32_t ea=c->r[2]+0xFFFF9E20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB780
  {uint32_t ea=c->r[2]+0xFFFF9E24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB784
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801DB788
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801DB78C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801DB790
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 801DB794
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 801DB798
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801DB79C
  return; // 801DB7A0
}

// MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_801DB7A4(Ctx* __restrict c) {
  trace_call(0x801DB7A4u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 801DB7A4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 801DB7A8
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,0,0);} // 801DB7AC
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,0,0);} // 801DB7B0
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,0,0);} // 801DB7B4
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,5,ea,0,0);} // 801DB7B8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801DB7BC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DB7C0
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,2,ea,0,0);} // 801DB7C4
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,3,ea,1,0);} // 801DB7C8
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,4,ea,0,0);} // 801DB7CC
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,5,ea,1,0);} // 801DB7D0
  return; // 801DB7D4
}

// MTX34InvTranspose__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_801DB7D8(Ctx* __restrict c) {
  trace_call(0x801DB7D8u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,0);} // 801DB7D8
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,1,ea,0,0);} // 801DB7DC
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,1,0);} // 801DB7E0
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801DB7E4
  {uint32_t ea=c->r[4]+0x00000014u; psq_load(c,3,ea,0,0);} // 801DB7E8
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,1,0);} // 801DB7EC
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 801DB7F0
  {uint32_t ea=c->r[4]+0x00000024u; psq_load(c,5,ea,0,0);} // 801DB7F4
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 801DB7F8
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 801DB7FC
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 801DB800
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 801DB804
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 801DB808
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 801DB80C
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 801DB810
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 801DB814
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 801DB818
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 801DB81C
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 801DB820
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 801DB824
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 801DB828
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 801DB82C
  {double t0=S(c->f[1]-c->f[1]), t1=S(c->ps1[1]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DB830
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801DB834
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801DB838
  fcmp(c,0,c->f[7],c->f[1]); // 801DB83C
  if (!crb(c,2)) { goto L_801DB84C; } // 801DB840
  c->r[3]=0u+0x00000000u; // 801DB844
  return; // 801DB848
L_801DB84C:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 801DB84C
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801DB850
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 801DB854
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 801DB858
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801DB85C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 801DB860
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 801DB864
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 801DB868
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 801DB86C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,13,ea,0,0);} // 801DB870
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 801DB874
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,12,ea,0,0);} // 801DB878
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 801DB87C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,11,ea,0,0);} // 801DB880
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 801DB884
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,10,ea,1,0);} // 801DB888
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 801DB88C
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,9,ea,1,0);} // 801DB890
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,8,ea,1,0);} // 801DB894
  c->r[3]=0u+0x00000001u; // 801DB898
  return; // 801DB89C
}

// MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
void f_801DB8A0(Ctx* __restrict c) {
  trace_call(0x801DB8A0u);
  {uint32_t ea=c->r[2]+0xFFFF9E20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB8A0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801DB8A4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801DB8A8
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 801DB8AC
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801DB8B0
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 801DB8B4
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 801DB8B8
  return; // 801DB8BC
}

// MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_801DB8C0(Ctx* __restrict c) {
  trace_call(0x801DB8C0u);
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 801DB8C0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 801DB8C4
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,4,ea,0,0);} // 801DB8C8
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,5,ea,0,0);} // 801DB8CC
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801DB8D0
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 801DB8D4
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 801DB8D8
  {double t0=S(c->f[5]*c->f[0]), t1=S(c->ps1[5]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 801DB8DC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 801DB8E0
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,0,ea,0,0);} // 801DB8E4
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,6,ea,0,0);} // 801DB8E8
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 801DB8EC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 801DB8F0
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DB8F4
  {double t0=S(c->f[6]*c->f[1]), t1=S(c->ps1[6]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 801DB8F8
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,4,ea,0,0);} // 801DB8FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,0,0);} // 801DB900
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801DB904
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,5,ea,0,0);} // 801DB908
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,6,ea,0,0);} // 801DB90C
  return; // 801DB910
}

// MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_801DB914(Ctx* __restrict c) {
  trace_call(0x801DB914u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 801DB914
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 801DB918
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 801DB91C
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,4,ea,0,0);} // 801DB920
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 801DB924
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 801DB928
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,5,ea,0,0);} // 801DB92C
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 801DB930
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,6,ea,0,0);} // 801DB934
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 801DB938
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,7,ea,0,0);} // 801DB93C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,0,0);} // 801DB940
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 801DB944
  {double t0=S(std::fma(c->f[5],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 801DB948
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,5,ea,0,0);} // 801DB94C
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->ps1[0]); c->f[8]=t0; c->ps1[8]=t1;} // 801DB950
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,10,ea,1,0);} // 801DB954
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 801DB958
  {double t0=S(std::fma(c->f[7],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[7],c->ps1[1],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 801DB95C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,7,ea,0,0);} // 801DB960
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,10,ea,1,0);} // 801DB964
  {double t0=S(c->f[9]+c->ps1[9]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 801DB968
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 801DB96C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,4,ea,0,0);} // 801DB970
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,6,ea,0,0);} // 801DB974
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,10,ea,1,0);} // 801DB978
  return; // 801DB97C
}

// MTX34RotAxisFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3f
void f_801DB980(Ctx* __restrict c) {
  trace_call(0x801DB980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB980
  c->r[0]=c->lr; // 801DB984
  {uint32_t ea=c->r[2]+0xFFFF9E28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB988
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB98C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801DB990
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB994
  c->r[31]=c->r[3]|c->r[3]; // 801DB998
  c->lr=0x801DB9A0u; f_800EC6F4(c); // 801DB99C
  c->r[3]=c->r[31]|c->r[31]; // 801DB9A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB9A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB9A8
  c->lr=c->r[0]; // 801DB9AC
  c->r[1]=c->r[1]+0x00000010u; // 801DB9B0
  return; // 801DB9B4
}

// fn_801DB9B8
void f_801DB9B8(Ctx* __restrict c) {
  c->r[4]=0u+0x80270000u; // 801DB9B8
  c->r[0]=c->r[2]+0xFFFF9E30u; // 801DB9BC
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB9C0
  c->r[4]=c->r[4]+0x00000E80u; // 801DB9C4
  {uint32_t ea=0u+c->r[0]; psq_load(c,0,ea,0,0);} // 801DB9C8
  {double t0=S(c->f[1]), t1=S(c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 801DB9CC
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DB9D0
  {double t0=std::fabs(c->f[6]), t1=std::fabs(c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 801DB9D4
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 801DB9D8
  {double t0=S(c->f[0]-c->f[0]), t1=S(c->ps1[0]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801DB9DC
  fcmp(c,0,c->f[4],c->f[0]); // 801DB9E0
  if (!crb(c,1)) { goto L_801DB9F4; } // 801DB9E4
L_801DB9E8:;
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 801DB9E8
  fcmp(c,0,c->f[4],c->f[0]); // 801DB9EC
  if (crb(c,1)) { IRQCHK(c); goto L_801DB9E8; } // 801DB9F0
L_801DB9F4:;
  fcmp(c,0,c->ps1[4],c->ps1[0]); // 801DB9F4
  if (!crb(c,1)) { goto L_801DBA10; } // 801DB9F8
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 801DB9FC
L_801DBA00:;
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 801DBA00
  fcmp(c,0,c->f[4],c->f[0]); // 801DBA04
  if (crb(c,1)) { IRQCHK(c); goto L_801DBA00; } // 801DBA08
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[4]=t0; c->ps1[4]=t1;} // 801DBA0C
L_801DBA10:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,4,ea,0,3);} // 801DBA10
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,0,3);} // 801DBA14
  c->f[5]=std::fabs(c->f[3]); // 801DBA18
  c->r[0]=R32(c->r[1]+0x00000008u); // 801DBA1C
  fcmp(c,0,c->f[5],c->f[0]); // 801DBA20
  if (!crb(c,1)) { goto L_801DBA34; } // 801DBA24
L_801DBA28:;
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 801DBA28
  fcmp(c,0,c->f[5],c->f[0]); // 801DBA2C
  if (crb(c,1)) { IRQCHK(c); goto L_801DBA28; } // 801DBA30
L_801DBA34:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,5,ea,1,3);} // 801DBA34
  c->r[5]=rotl(c->r[0],20)&0x00000FF0u; // 801DBA38
  c->r[5]=c->r[4]+c->r[5]; // 801DBA3C
  {double t0=S(c->f[4]-c->f[7]), t1=S(c->ps1[4]-c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 801DBA40
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 801DBA44
  c->r[6]=rotl(c->r[0],4)&0x00000FF0u; // 801DBA48
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,8,ea,0,0);} // 801DBA4C
  fcmp(c,0,c->f[6],c->f[2]); // 801DBA50
  c->r[6]=c->r[4]+c->r[6]; // 801DBA54
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->f[7],c->ps1[4])); c->f[0]=t0; c->ps1[0]=t1;} // 801DBA58
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,4,ea,0,0);} // 801DBA5C
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,8,ea,0,0);} // 801DBA60
  c->r[0]=R16(c->r[1]+0x00000008u); // 801DBA64
  if (!crb(c,0)) { goto L_801DBA74; } // 801DBA68
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[9]=t0; c->ps1[9]=t1;} // 801DBA6C
  {double t0=S(c->f[9]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DBA70
L_801DBA74:;
  {double t0=S(std::fma(c->f[8],c->ps1[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->ps1[7],c->ps1[4])); c->f[1]=t0; c->ps1[1]=t1;} // 801DBA74
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,1,3);} // 801DBA78
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801DBA7C
  fcmp(c,0,c->ps1[6],c->ps1[2]); // 801DBA80
  c->r[5]=c->r[4]+c->r[0]; // 801DBA84
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 801DBA88
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 801DBA8C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,8,ea,0,0);} // 801DBA90
  if (!crb(c,0)) { goto L_801DBAA0; } // 801DBA94
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[9]=t0; c->ps1[9]=t1;} // 801DBA98
  {double t0=S(c->f[9]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DBA9C
L_801DBAA0:;
  fcmp(c,0,c->f[3],c->f[2]); // 801DBAA0
  {double t0=S(std::fma(c->f[8],c->f[7],c->f[4])), t1=S(std::fma(c->ps1[8],c->f[7],c->ps1[4])); c->f[2]=t0; c->ps1[2]=t1;} // 801DBAA4
  if (!crb(c,0)) { goto L_801DBAB4; } // 801DBAA8
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[9]=t0; c->ps1[9]=t1;} // 801DBAAC
  {double t0=S(c->f[9]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801DBAB0
L_801DBAB4:;
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 801DBAB4
  {double t0=S(c->f[2]*c->ps1[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 801DBAB8
  {double t0=S(c->f[0]-c->f[0]), t1=S(c->ps1[0]-c->ps1[0]); c->f[7]=t0; c->ps1[7]=t1;} // 801DBABC
  {double t0=S(c->ps1[3]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801DBAC0
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[6]=t0; c->ps1[6]=t1;} // 801DBAC4
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 801DBAC8
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,7,ea,1,0);} // 801DBACC
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->f[2]); c->f[8]=t0; c->ps1[8]=t1;} // 801DBAD0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,6,ea,1,0);} // 801DBAD4
  {double t0=S(c->f[0]*c->ps1[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 801DBAD8
  {double t0=S(c->f[3]*c->ps1[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801DBADC
  {double t0=S(std::fma(c->f[6],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[6],c->f[1],c->ps1[8])); c->f[6]=t0; c->ps1[6]=t1;} // 801DBAE0
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 801DBAE4
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,6,ea,0,0);} // 801DBAE8
  {double t0=S(c->f[7]), t1=S(c->f[5]); c->f[6]=t0; c->ps1[6]=t1;} // 801DBAEC
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,6,ea,0,0);} // 801DBAF0
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[2])); c->f[6]=t0; c->ps1[6]=t1;} // 801DBAF4
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,6,ea,0,0);} // 801DBAF8
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[6]=t0; c->ps1[6]=t1;} // 801DBAFC
  {double t0=S(c->f[7]), t1=S(c->f[6]); c->f[6]=t0; c->ps1[6]=t1;} // 801DBB00
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,6,ea,0,0);} // 801DBB04
  {double t0=S(c->f[0]*c->ps1[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 801DBB08
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,6,ea,0,0);} // 801DBB0C
  c->r[1]=c->r[1]+0x00000010u; // 801DBB10
  return; // 801DBB14
}

// VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
void f_801DBB18(Ctx* __restrict c) {
  trace_call(0x801DBB18u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DBB18
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DBB1C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBB20
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[2]); // 801DBB24
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBB28
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[2]); // 801DBB2C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DBB30
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 801DBB34
  {uint32_t ea=c->r[5]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBB38
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBB3C
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[5]); // 801DBB40
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DBB44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 801DBB48
  {uint32_t ea=c->r[4]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 801DBB4C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[5]); // 801DBB50
  {uint32_t ea=c->r[5]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 801DBB54
  {uint32_t ea=c->r[4]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBB58
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 801DBB5C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DBB60
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 801DBB64
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801DBB68
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBB6C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[9]); // 801DBB70
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[6]); // 801DBB74
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 801DBB78
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[3]); // 801DBB7C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801DBB80
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 801DBB84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801DBB88
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801DBB8C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 801DBB90
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801DBB94
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 801DBB98
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801DBB9C
  c->r[1]=c->r[1]+0x00000020u; // 801DBBA0
  return; // 801DBBA4
}

// MTX44Identity__Q24nw4r4mathFPQ34nw4r4math5MTX44
void f_801DBBA8(Ctx* __restrict c) {
  trace_call(0x801DBBA8u);
  {uint32_t ea=c->r[2]+0xFFFF9E20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBBA8
  {uint32_t ea=c->r[2]+0xFFFF9E24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBBAC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801DBBB0
  {double t0=S(c->f[0]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801DBBB4
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801DBBB8
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801DBBBC
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 801DBBC0
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 801DBBC4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DBBC8
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,1,ea,0,0);} // 801DBBCC
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 801DBBD0
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,2,ea,0,0);} // 801DBBD4
  return; // 801DBBD8
}

// MTX44Copy__Q24nw4r4mathFPQ34nw4r4math5MTX44PCQ34nw4r4math5MTX44
void f_801DBBDC(Ctx* __restrict c) {
  trace_call(0x801DBBDCu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 801DBBDC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 801DBBE0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,0,0);} // 801DBBE4
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,0,0);} // 801DBBE8
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,0,0);} // 801DBBEC
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,5,ea,0,0);} // 801DBBF0
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,6,ea,0,0);} // 801DBBF4
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,7,ea,0,0);} // 801DBBF8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801DBBFC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 801DBC00
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 801DBC04
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,3,ea,0,0);} // 801DBC08
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,4,ea,0,0);} // 801DBC0C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,5,ea,0,0);} // 801DBC10
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,6,ea,0,0);} // 801DBC14
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,7,ea,0,0);} // 801DBC18
  return; // 801DBC1C
}

// fn_801DBC20
void f_801DBC20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBC20
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801DBC24
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801DBC28
  {uint32_t ea=c->r[5]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 801DBC2C
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBC30
  {uint32_t ea=c->r[5]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 801DBC34
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBC38
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[12]); // 801DBC3C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBC40
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[9]); // 801DBC44
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DBC48
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBC4C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801DBC50
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBC54
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801DBC58
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DBC5C
  c->f[11]=c->ps1[11]=S(c->f[5]*c->f[12]); // 801DBC60
  c->f[10]=c->ps1[10]=S(c->f[4]*c->f[9]); // 801DBC64
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 801DBC68
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DBC6C
  {uint32_t ea=c->r[2]+0xFFFF9E24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBC70
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 801DBC74
  c->f[7]=c->ps1[7]=S(c->f[6]*c->f[12]); // 801DBC78
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[3]); // 801DBC7C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBC80
  c->f[10]=c->ps1[10]=S(c->f[11]+c->f[10]); // 801DBC84
  {uint32_t ea=c->r[4]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBC88
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 801DBC8C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[31]); // 801DBC90
  {uint32_t ea=c->r[4]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DBC94
  {uint32_t ea=c->r[4]+0x00000008u; c->f[13]=c->ps1[13]=RF32(ea);} // 801DBC98
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBC9C
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[9]); // 801DBCA0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBCA4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 801DBCA8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBCAC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 801DBCB0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 801DBCB4
  c->f[12]=c->ps1[12]=S(c->f[13]*c->f[0]); // 801DBCB8
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 801DBCBC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801DBCC0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[2]); // 801DBCC4
  c->f[7]=c->ps1[7]=S(c->f[12]+c->f[10]); // 801DBCC8
  c->f[3]=c->ps1[3]=S(c->f[8]+c->f[6]); // 801DBCCC
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[0]); // 801DBCD0
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801DBCD4
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[3]); // 801DBCD8
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 801DBCDC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[7]); // 801DBCE0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 801DBCE4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[3]); // 801DBCE8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 801DBCEC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801DBCF0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[2]); // 801DBCF4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801DBCF8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801DBCFC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801DBD00
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801DBD04
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801DBD08
  c->r[1]=c->r[1]+0x00000030u; // 801DBD0C
  return; // 801DBD10
}

// fn_801DBD14
void f_801DBD14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBD14
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801DBD18
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801DBD1C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801DBD20
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801DBD24
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 801DBD28
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 801DBD2C
  c->r[7]=c->r[3]|c->r[3]; // 801DBD30
  {uint32_t ea=c->r[2]+0xFFFF9E24u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DBD34
  c->ctr=c->r[6]; // 801DBD38
  cmpu(c,0,c->r[6],0x00000000u); // 801DBD3C
  if (!crb(c,1)) { goto L_801DBE24; } // 801DBD40
L_801DBD44:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 801DBD44
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBD48
  {uint32_t ea=c->r[5]+0x00000004u; c->f[12]=c->ps1[12]=RF32(ea);} // 801DBD4C
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBD50
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[31]); // 801DBD54
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBD58
  c->r[5]=c->r[5]+0x0000000Cu; // 801DBD5C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[12]); // 801DBD60
  {uint32_t ea=c->r[4]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBD64
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DBD68
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801DBD6C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBD70
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 801DBD74
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBD78
  c->f[13]=c->ps1[13]=S(c->f[6]*c->f[31]); // 801DBD7C
  c->f[11]=c->ps1[11]=S(c->f[5]*c->f[12]); // 801DBD80
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801DBD84
  {uint32_t ea=c->r[4]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBD88
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBD8C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DBD90
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[31]); // 801DBD94
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 801DBD98
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[12]); // 801DBD9C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBDA0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DBDA4
  c->f[30]=c->ps1[30]=S(c->f[6]*c->f[0]); // 801DBDA8
  c->f[29]=c->ps1[29]=S(c->f[2]/c->f[1]); // 801DBDAC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 801DBDB0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBDB4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 801DBDB8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801DBDBC
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBDC0
  c->f[11]=c->ps1[11]=S(c->f[13]+c->f[11]); // 801DBDC4
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[31]); // 801DBDC8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[12]); // 801DBDCC
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 801DBDD0
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 801DBDD4
  c->f[11]=c->ps1[11]=S(c->f[30]+c->f[11]); // 801DBDD8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801DBDDC
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 801DBDE0
  c->f[8]=c->ps1[8]=S(c->f[10]+c->f[11]); // 801DBDE4
  c->f[4]=c->ps1[4]=S(c->f[9]+c->f[7]); // 801DBDE8
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[3]); // 801DBDEC
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[8]); // 801DBDF0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[8]);} // 801DBDF4
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[4]); // 801DBDF8
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[3]); // 801DBDFC
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 801DBE00
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[4]); // 801DBE04
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[3]); // 801DBE08
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801DBE0C
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 801DBE10
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 801DBE14
  c->r[7]=c->r[7]+0x0000000Cu; // 801DBE18
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 801DBE1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DBD44; } // 801DBE20
L_801DBE24:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801DBE24
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801DBE28
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801DBE2C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801DBE30
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 801DBE34
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 801DBE38
  c->r[1]=c->r[1]+0x00000050u; // 801DBE3C
  return; // 801DBE40
}

// fn_801DBE44
void f_801DBE44(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DBE44
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801DBE48
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBE4C
  c->r[6]=c->r[4]+0x0000000Cu; // 801DBE50
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBE54
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 801DBE58
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801DBE5C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801DBE60
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801DBE64
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801DBE68
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801DBE6C
  c->ctr=c->r[0]; // 801DBE70
  cmpu(c,0,c->r[5],0x00000001u); // 801DBE74
  if (!crb(c,1)) return; // 801DBE78
L_801DBE7C:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBE7C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBE80
  fcmp(c,0,c->f[1],c->f[0]); // 801DBE84
  if (!crb(c,0)) { goto L_801DBE94; } // 801DBE88
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801DBE8C
  goto L_801DBEA4; // 801DBE90
L_801DBE94:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBE94
  fcmp(c,0,c->f[1],c->f[0]); // 801DBE98
  if (!crb(c,1)) { goto L_801DBEA4; } // 801DBE9C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801DBEA0
L_801DBEA4:;
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBEA4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBEA8
  fcmp(c,0,c->f[1],c->f[0]); // 801DBEAC
  if (!crb(c,0)) { goto L_801DBEBC; } // 801DBEB0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801DBEB4
  goto L_801DBECC; // 801DBEB8
L_801DBEBC:;
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBEBC
  fcmp(c,0,c->f[1],c->f[0]); // 801DBEC0
  if (!crb(c,1)) { goto L_801DBECC; } // 801DBEC4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801DBEC8
L_801DBECC:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBECC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBED0
  fcmp(c,0,c->f[1],c->f[0]); // 801DBED4
  if (!crb(c,0)) { goto L_801DBEE4; } // 801DBED8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801DBEDC
  goto L_801DBEF4; // 801DBEE0
L_801DBEE4:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBEE4
  fcmp(c,0,c->f[1],c->f[0]); // 801DBEE8
  if (!crb(c,1)) { goto L_801DBEF4; } // 801DBEEC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801DBEF0
L_801DBEF4:;
  c->r[6]=c->r[6]+0x0000000Cu; // 801DBEF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DBE7C; } // 801DBEF8
  return; // 801DBEFC
}

// fn_801DBF00
void f_801DBF00(Ctx* __restrict c) {
  {uint32_t ea=c->r[5]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBF00
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBF04
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DBF08
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 801DBF0C
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DBF10
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 801DBF14
  {uint32_t ea=c->r[5]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 801DBF18
  {uint32_t ea=c->r[4]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DBF1C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[3]); // 801DBF20
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 801DBF24
  {uint32_t ea=c->r[4]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBF28
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBF2C
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[6]); // 801DBF30
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DBF34
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBF38
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801DBF3C
  fcmp(c,0,c->f[0],c->f[2]); // 801DBF40
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[5]); // 801DBF44
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 801DBF48
  if (!crb(c,1)) { goto L_801DBF5C; } // 801DBF4C
  c->f[1]=c->f[0]; // 801DBF50
  c->f[0]=c->f[2]; // 801DBF54
  c->f[2]=c->f[1]; // 801DBF58
L_801DBF5C:;
  fcmp(c,0,c->f[6],c->f[5]); // 801DBF5C
  if (!crb(c,0)) { goto L_801DBF70; } // 801DBF60
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 801DBF64
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[5]); // 801DBF68
  goto L_801DBF78; // 801DBF6C
L_801DBF70:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[5]); // 801DBF70
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[6]); // 801DBF74
L_801DBF78:;
  fcmp(c,0,c->f[3],c->f[4]); // 801DBF78
  if (!crb(c,0)) { goto L_801DBF8C; } // 801DBF7C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 801DBF80
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 801DBF84
  goto L_801DBF94; // 801DBF88
L_801DBF8C:;
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 801DBF8C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 801DBF90
L_801DBF94:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DBF94
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DBF98
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DBF9C
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[3]); // 801DBFA0
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBFA4
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[1]); // 801DBFA8
  {uint32_t ea=c->r[5]+0x00000014u; c->f[9]=c->ps1[9]=RF32(ea);} // 801DBFAC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801DBFB0
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 801DBFB4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801DBFB8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 801DBFBC
  {uint32_t ea=c->r[5]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DBFC0
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801DBFC4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DBFC8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DBFCC
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 801DBFD0
  fcmp(c,0,c->f[1],c->f[3]); // 801DBFD4
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[7]); // 801DBFD8
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[4]); // 801DBFDC
  if (!crb(c,1)) { goto L_801DBFF0; } // 801DBFE0
  c->f[4]=c->f[1]; // 801DBFE4
  c->f[1]=c->f[3]; // 801DBFE8
  c->f[3]=c->f[4]; // 801DBFEC
L_801DBFF0:;
  fcmp(c,0,c->f[8],c->f[7]); // 801DBFF0
  if (!crb(c,0)) { goto L_801DC004; } // 801DBFF4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[8]); // 801DBFF8
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[7]); // 801DBFFC
  goto L_801DC00C; // 801DC000
L_801DC004:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[7]); // 801DC004
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[8]); // 801DC008
L_801DC00C:;
  fcmp(c,0,c->f[5],c->f[6]); // 801DC00C
  if (!crb(c,0)) { goto L_801DC020; } // 801DC010
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 801DC014
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[6]); // 801DC018
  goto L_801DC028; // 801DC01C
L_801DC020:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[6]); // 801DC020
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 801DC024
L_801DC028:;
  {uint32_t ea=c->r[5]+0x00000020u; c->f[7]=c->ps1[7]=RF32(ea);} // 801DC028
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DC02C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801DC030
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[5]); // 801DC034
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801DC038
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[4]); // 801DC03C
  {uint32_t ea=c->r[5]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 801DC040
  {uint32_t ea=c->r[4]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801DC044
  c->f[10]=c->ps1[10]=S(c->f[5]+c->f[6]); // 801DC048
  c->f[11]=c->ps1[11]=S(c->f[5]+c->f[4]); // 801DC04C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 801DC050
  {uint32_t ea=c->r[5]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DC054
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801DC058
  {uint32_t ea=c->r[4]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DC05C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DC060
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 801DC064
  fcmp(c,0,c->f[10],c->f[11]); // 801DC068
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[7]); // 801DC06C
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[4]); // 801DC070
  if (!crb(c,1)) { goto L_801DC084; } // 801DC074
  c->f[4]=c->f[10]; // 801DC078
  c->f[10]=c->f[11]; // 801DC07C
  c->f[11]=c->f[4]; // 801DC080
L_801DC084:;
  fcmp(c,0,c->f[8],c->f[7]); // 801DC084
  if (!crb(c,0)) { goto L_801DC098; } // 801DC088
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801DC08C
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[7]); // 801DC090
  goto L_801DC0A0; // 801DC094
L_801DC098:;
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[7]); // 801DC098
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[8]); // 801DC09C
L_801DC0A0:;
  fcmp(c,0,c->f[5],c->f[6]); // 801DC0A0
  if (!crb(c,0)) { goto L_801DC0B4; } // 801DC0A4
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[5]); // 801DC0A8
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[6]); // 801DC0AC
  goto L_801DC0BC; // 801DC0B0
L_801DC0B4:;
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[6]); // 801DC0B4
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[5]); // 801DC0B8
L_801DC0BC:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801DC0BC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801DC0C0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[10]);} // 801DC0C4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801DC0C8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 801DC0CC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[11]);} // 801DC0D0
  return; // 801DC0D4
}

// fn_801DC0D8
void f_801DC0D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC0D8
  c->r[0]=c->lr; // 801DC0DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DC0E0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801DC0E4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801DC0E8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801DC0EC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801DC0F0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 801DC0F4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 801DC0F8
  c->f[29]=c->f[2]; // 801DC0FC
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC100
  c->f[30]=c->f[3]; // 801DC104
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC108
  c->f[31]=c->f[4]; // 801DC10C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801DC110
  {uint32_t ea=c->r[2]+0xFFFF9E44u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DC114
  c->r[31]=c->r[4]|c->r[4]; // 801DC118
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DC11C
  c->r[30]=c->r[3]|c->r[3]; // 801DC120
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801DC124
  {uint32_t ea=c->r[2]+0xFFFF9E40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC128
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801DC12C
  c->lr=0x801DC134u; f_8011ABA8(c); // 801DC130
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801DC134
  c->r[3]=c->r[30]|c->r[30]; // 801DC138
  c->f[5]=c->f[30]; // 801DC13C
  c->r[4]=c->r[31]|c->r[31]; // 801DC140
  c->f[6]=c->f[31]; // 801DC144
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 801DC148
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[29]); // 801DC14C
  c->f[2]=-c->f[1]; // 801DC150
  c->f[3]=-c->f[4]; // 801DC154
  c->lr=0x801DC15Cu; f_801DC18C(c); // 801DC158
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801DC15C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801DC160
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801DC164
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801DC168
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 801DC16C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 801DC170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC174
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DC178
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DC17C
  c->lr=c->r[0]; // 801DC180
  c->r[1]=c->r[1]+0x00000040u; // 801DC184
  return; // 801DC188
}

// fn_801DC18C
void f_801DC18C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC18C
  c->r[0]=c->lr; // 801DC190
  W32(c->r[1]+0x00000294u,c->r[0]); // 801DC194
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[31]);} // 801DC198
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,31,ea,0,0);} // 801DC19C
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[30]);} // 801DC1A0
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,30,ea,0,0);} // 801DC1A4
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[29]);} // 801DC1A8
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,29,ea,0,0);} // 801DC1AC
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[28]);} // 801DC1B0
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,28,ea,0,0);} // 801DC1B4
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[27]);} // 801DC1B8
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,27,ea,0,0);} // 801DC1BC
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[26]);} // 801DC1C0
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,26,ea,0,0);} // 801DC1C4
  c->r[11]=c->r[1]+0x00000230u; // 801DC1C8
  c->lr=0x801DC1D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DC1CC
  c->f[26]=c->f[1]; // 801DC1D0
  c->r[28]=c->r[4]|c->r[4]; // 801DC1D4
  c->f[27]=c->f[2]; // 801DC1D8
  c->r[27]=c->r[3]|c->r[3]; // 801DC1DC
  c->f[28]=c->f[3]; // 801DC1E0
  c->r[3]=c->r[28]|c->r[28]; // 801DC1E4
  c->f[29]=c->f[4]; // 801DC1E8
  c->r[4]=c->r[1]+0x00000180u; // 801DC1EC
  c->f[30]=c->f[5]; // 801DC1F0
  c->f[31]=c->f[6]; // 801DC1F4
  c->lr=0x801DC1FCu; f_800EC358(c); // 801DC1F8
  c->r[3]=c->r[28]|c->r[28]; // 801DC1FC
  c->r[4]=c->r[27]|c->r[27]; // 801DC200
  c->lr=0x801DC208u; f_800EC0C0(c); // 801DC204
  c->f[6]=c->ps1[6]=S(c->f[31]/c->f[30]); // 801DC208
  {uint32_t ea=c->r[2]+0xFFFF9E3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC20C
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[28]);} // 801DC210
  c->r[29]=c->r[1]+0x000001B0u; // 801DC214
  c->r[3]=c->r[1]+0x0000014Cu; // 801DC218
  c->r[4]=c->r[1]+0x00000158u; // 801DC21C
  c->f[5]=-c->f[30]; // 801DC220
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 801DC224
  c->f[2]=-c->f[31]; // 801DC228
  c->r[31]=c->r[27]+0x00000030u; // 801DC22C
  c->f[4]=c->ps1[4]=S(c->f[6]*c->f[28]); // 801DC230
  {uint32_t ea=c->r[1]+0x00000174u; WF32(ea,c->f[0]);} // 801DC234
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[26]); // 801DC238
  {uint32_t ea=c->r[1]+0x00000178u; WF32(ea,c->f[0]);} // 801DC23C
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[29]); // 801DC240
  c->r[5]=c->r[1]+0x00000164u; // 801DC244
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[27]); // 801DC248
  {uint32_t ea=c->r[1]+0x000001B4u; WF32(ea,c->f[26]);} // 801DC24C
  {uint32_t ea=c->r[1]+0x000001B8u; WF32(ea,c->f[5]);} // 801DC250
  {uint32_t ea=c->r[1]+0x000001BCu; WF32(ea,c->f[29]);} // 801DC254
  {uint32_t ea=c->r[1]+0x000001C0u; WF32(ea,c->f[26]);} // 801DC258
  {uint32_t ea=c->r[1]+0x000001C4u; WF32(ea,c->f[5]);} // 801DC25C
  {uint32_t ea=c->r[1]+0x000001C8u; WF32(ea,c->f[29]);} // 801DC260
  {uint32_t ea=c->r[1]+0x000001CCu; WF32(ea,c->f[27]);} // 801DC264
  {uint32_t ea=c->r[1]+0x000001D0u; WF32(ea,c->f[5]);} // 801DC268
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[28]);} // 801DC26C
  {uint32_t ea=c->r[1]+0x000001D8u; WF32(ea,c->f[27]);} // 801DC270
  {uint32_t ea=c->r[1]+0x000001DCu; WF32(ea,c->f[5]);} // 801DC274
  {uint32_t ea=c->r[1]+0x000001E0u; WF32(ea,c->f[4]);} // 801DC278
  {uint32_t ea=c->r[1]+0x000001E4u; WF32(ea,c->f[3]);} // 801DC27C
  {uint32_t ea=c->r[1]+0x000001E8u; WF32(ea,c->f[2]);} // 801DC280
  {uint32_t ea=c->r[1]+0x000001ECu; WF32(ea,c->f[1]);} // 801DC284
  {uint32_t ea=c->r[1]+0x000001F0u; WF32(ea,c->f[3]);} // 801DC288
  {uint32_t ea=c->r[1]+0x000001F4u; WF32(ea,c->f[2]);} // 801DC28C
  {uint32_t ea=c->r[1]+0x000001F8u; WF32(ea,c->f[1]);} // 801DC290
  {uint32_t ea=c->r[1]+0x000001FCu; WF32(ea,c->f[0]);} // 801DC294
  {uint32_t ea=c->r[1]+0x00000200u; WF32(ea,c->f[2]);} // 801DC298
  {uint32_t ea=c->r[1]+0x00000204u; WF32(ea,c->f[4]);} // 801DC29C
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[0]);} // 801DC2A0
  {uint32_t ea=c->r[1]+0x0000020Cu; WF32(ea,c->f[2]);} // 801DC2A4
  {uint32_t ea=c->r[27]+0x00000070u; WF32(ea,c->f[5]);} // 801DC2A8
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[2]);} // 801DC2AC
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 801DC2B0
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 801DC2B4
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC2B8
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,0,ea,0,0);} // 801DC2BC
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC2C0
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,2,ea,1,0);} // 801DC2C4
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 801DC2C8
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC2CC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC2D0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC2D4
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,0,ea,1,0);} // 801DC2D8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC2DC
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC2E0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC2E4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC2E8
  c->lr=0x801DC2F0u; f_800ED078(c); // 801DC2EC
  c->r[4]=c->r[31]|c->r[31]; // 801DC2F0
  c->r[3]=c->r[1]+0x00000164u; // 801DC2F4
  c->lr=0x801DC2FCu; f_800ECFD0(c); // 801DC2F8
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC2FC
  c->r[3]=c->r[1]+0x00000128u; // 801DC300
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 801DC304
  c->r[4]=c->r[1]+0x00000134u; // 801DC308
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC30C
  c->r[30]=c->r[27]+0x00000040u; // 801DC310
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC314
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 801DC318
  c->r[5]=c->r[1]+0x00000140u; // 801DC31C
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC320
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC324
  c->f[0]=-c->f[0]; // 801DC328
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC32C
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 801DC330
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 801DC334
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC338
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 801DC33C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC340
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 801DC344
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 801DC348
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC34C
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 801DC350
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC354
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC358
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC35C
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC360
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC364
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC368
  c->lr=0x801DC370u; f_800ED078(c); // 801DC36C
  c->r[4]=c->r[30]|c->r[30]; // 801DC370
  c->r[3]=c->r[1]+0x00000140u; // 801DC374
  c->lr=0x801DC37Cu; f_800ECFD0(c); // 801DC378
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC37C
  c->r[3]=c->r[1]+0x00000104u; // 801DC380
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 801DC384
  c->r[4]=c->r[1]+0x00000110u; // 801DC388
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC38C
  c->r[31]=c->r[27]+0x00000050u; // 801DC390
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC394
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 801DC398
  c->r[5]=c->r[1]+0x0000011Cu; // 801DC39C
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC3A0
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC3A4
  c->f[0]=-c->f[0]; // 801DC3A8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC3AC
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 801DC3B0
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,2,ea,0,0);} // 801DC3B4
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC3B8
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 801DC3BC
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC3C0
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,2,ea,1,0);} // 801DC3C4
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 801DC3C8
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC3CC
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,0,ea,1,0);} // 801DC3D0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC3D4
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC3D8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC3DC
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC3E0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC3E4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC3E8
  c->lr=0x801DC3F0u; f_800ED078(c); // 801DC3EC
  c->r[4]=c->r[31]|c->r[31]; // 801DC3F0
  c->r[3]=c->r[1]+0x0000011Cu; // 801DC3F4
  c->lr=0x801DC3FCu; f_800ECFD0(c); // 801DC3F8
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC3FC
  c->r[3]=c->r[1]+0x000000E0u; // 801DC400
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 801DC404
  c->r[4]=c->r[1]+0x000000ECu; // 801DC408
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC40C
  c->r[30]=c->r[27]+0x00000060u; // 801DC410
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC414
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 801DC418
  c->r[5]=c->r[1]+0x000000F8u; // 801DC41C
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC420
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC424
  c->f[0]=-c->f[0]; // 801DC428
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC42C
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 801DC430
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,2,ea,0,0);} // 801DC434
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC438
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,0,ea,0,0);} // 801DC43C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC440
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,2,ea,1,0);} // 801DC444
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 801DC448
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC44C
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,0,ea,1,0);} // 801DC450
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC454
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC458
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC45C
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC460
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC464
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC468
  c->lr=0x801DC470u; f_800ED078(c); // 801DC46C
  c->r[4]=c->r[30]|c->r[30]; // 801DC470
  c->r[3]=c->r[1]+0x000000F8u; // 801DC474
  c->lr=0x801DC47Cu; f_800ECFD0(c); // 801DC478
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC47C
  c->r[31]=c->r[29]|c->r[29]; // 801DC480
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 801DC484
  c->r[28]=0u+0x00000000u; // 801DC488
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC48C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC490
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 801DC494
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC498
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC49C
  c->f[0]=-c->f[0]; // 801DC4A0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC4A4
L_801DC4A8:;
  c->r[4]=c->r[31]|c->r[31]; // 801DC4A8
  c->r[5]=c->r[29]|c->r[29]; // 801DC4AC
  c->r[3]=c->r[1]+0x00000180u; // 801DC4B0
  c->lr=0x801DC4B8u; f_800ECCAC(c); // 801DC4B4
  c->r[28]=c->r[28]+0x00000001u; // 801DC4B8
  c->r[31]=c->r[31]+0x0000000Cu; // 801DC4BC
  cmps(c,0,(int32_t)c->r[28],8); // 801DC4C0
  c->r[29]=c->r[29]+0x0000000Cu; // 801DC4C4
  if (crb(c,0)) { IRQCHK(c); goto L_801DC4A8; } // 801DC4C8
  c->r[4]=c->r[1]+0x00000170u; // 801DC4CC
  c->r[3]=c->r[1]+0x00000180u; // 801DC4D0
  c->r[5]=c->r[4]|c->r[4]; // 801DC4D4
  c->lr=0x801DC4DCu; f_800ECCAC(c); // 801DC4D8
  c->r[3]=c->r[27]+0x00000078u; // 801DC4DC
  c->r[4]=c->r[1]+0x000001B0u; // 801DC4E0
  c->r[5]=0u+0x00000008u; // 801DC4E4
  c->lr=0x801DC4ECu; f_801DBE44(c); // 801DC4E8
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 801DC4EC
  c->r[3]=c->r[1]+0x000000BCu; // 801DC4F0
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,2,ea,0,0);} // 801DC4F4
  c->r[4]=c->r[1]+0x000000C8u; // 801DC4F8
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC4FC
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,0,ea,0,0);} // 801DC500
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC504
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,2,ea,1,0);} // 801DC508
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 801DC50C
  c->r[30]=c->r[27]+0x00000090u; // 801DC510
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC514
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,0,ea,1,0);} // 801DC518
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC51C
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC520
  c->r[5]=c->r[1]+0x000000D4u; // 801DC524
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC528
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC52C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC530
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC534
  c->lr=0x801DC53Cu; f_800ED078(c); // 801DC538
  c->r[4]=c->r[30]|c->r[30]; // 801DC53C
  c->r[3]=c->r[1]+0x000000D4u; // 801DC540
  c->lr=0x801DC548u; f_800ECFD0(c); // 801DC544
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC548
  c->r[3]=c->r[1]+0x00000098u; // 801DC54C
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 801DC550
  c->r[4]=c->r[1]+0x000000A4u; // 801DC554
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC558
  c->r[31]=c->r[27]+0x000000A0u; // 801DC55C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC560
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 801DC564
  c->r[5]=c->r[1]+0x000000B0u; // 801DC568
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC56C
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC570
  c->f[0]=-c->f[0]; // 801DC574
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC578
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 801DC57C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 801DC580
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC584
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 801DC588
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC58C
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 801DC590
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 801DC594
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC598
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 801DC59C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC5A0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC5A4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC5A8
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC5AC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC5B0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC5B4
  c->lr=0x801DC5BCu; f_800ED078(c); // 801DC5B8
  c->r[4]=c->r[31]|c->r[31]; // 801DC5BC
  c->r[3]=c->r[1]+0x000000B0u; // 801DC5C0
  c->lr=0x801DC5C8u; f_800ECFD0(c); // 801DC5C4
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC5C8
  c->r[3]=c->r[1]+0x00000074u; // 801DC5CC
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 801DC5D0
  c->r[4]=c->r[1]+0x00000080u; // 801DC5D4
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC5D8
  c->r[30]=c->r[27]+0x000000B0u; // 801DC5DC
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC5E0
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 801DC5E4
  c->r[5]=c->r[1]+0x0000008Cu; // 801DC5E8
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC5EC
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC5F0
  c->f[0]=-c->f[0]; // 801DC5F4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC5F8
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,3,ea,0,0);} // 801DC5FC
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,2,ea,0,0);} // 801DC600
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC604
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,0,ea,0,0);} // 801DC608
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC60C
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,2,ea,1,0);} // 801DC610
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,3,ea,1,0);} // 801DC614
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC618
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,0,ea,1,0);} // 801DC61C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC620
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC624
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC628
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC62C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC630
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC634
  c->lr=0x801DC63Cu; f_800ED078(c); // 801DC638
  c->r[4]=c->r[30]|c->r[30]; // 801DC63C
  c->r[3]=c->r[1]+0x0000008Cu; // 801DC640
  c->lr=0x801DC648u; f_800ECFD0(c); // 801DC644
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC648
  c->r[3]=c->r[1]+0x00000050u; // 801DC64C
  {uint32_t ea=c->r[1]+0x000001B4u; psq_load(c,1,ea,0,0);} // 801DC650
  c->r[4]=c->r[1]+0x0000005Cu; // 801DC654
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC658
  c->r[31]=c->r[27]+0x000000C0u; // 801DC65C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC660
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,1,ea,1,0);} // 801DC664
  c->r[5]=c->r[1]+0x00000068u; // 801DC668
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC66C
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC670
  c->f[0]=-c->f[0]; // 801DC674
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC678
  {uint32_t ea=c->r[1]+0x000001E0u; psq_load(c,3,ea,0,0);} // 801DC67C
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,2,ea,0,0);} // 801DC680
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC684
  {uint32_t ea=c->r[1]+0x00000204u; psq_load(c,0,ea,0,0);} // 801DC688
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC68C
  {uint32_t ea=c->r[1]+0x00000200u; psq_load(c,2,ea,1,0);} // 801DC690
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,3,ea,1,0);} // 801DC694
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC698
  {uint32_t ea=c->r[1]+0x0000020Cu; psq_load(c,0,ea,1,0);} // 801DC69C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC6A0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC6A4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC6A8
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC6AC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC6B0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC6B4
  c->lr=0x801DC6BCu; f_800ED078(c); // 801DC6B8
  c->r[4]=c->r[31]|c->r[31]; // 801DC6BC
  c->r[3]=c->r[1]+0x00000068u; // 801DC6C0
  c->lr=0x801DC6C8u; f_800ECFD0(c); // 801DC6C4
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC6C8
  c->r[3]=c->r[1]+0x0000002Cu; // 801DC6CC
  {uint32_t ea=c->r[1]+0x000001E4u; psq_load(c,1,ea,0,0);} // 801DC6D0
  c->r[4]=c->r[1]+0x00000038u; // 801DC6D4
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC6D8
  c->r[30]=c->r[27]+0x000000D0u; // 801DC6DC
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC6E0
  {uint32_t ea=c->r[1]+0x000001E0u; psq_load(c,1,ea,1,0);} // 801DC6E4
  c->r[5]=c->r[1]+0x00000044u; // 801DC6E8
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC6EC
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC6F0
  c->f[0]=-c->f[0]; // 801DC6F4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC6F8
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 801DC6FC
  {uint32_t ea=c->r[1]+0x000001BCu; psq_load(c,2,ea,0,0);} // 801DC700
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC704
  {uint32_t ea=c->r[1]+0x000001B0u; psq_load(c,0,ea,0,0);} // 801DC708
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC70C
  {uint32_t ea=c->r[1]+0x000001C4u; psq_load(c,2,ea,1,0);} // 801DC710
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 801DC714
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC718
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,0,ea,1,0);} // 801DC71C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC720
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC724
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC728
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC72C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC730
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC734
  c->lr=0x801DC73Cu; f_800ED078(c); // 801DC738
  c->r[4]=c->r[30]|c->r[30]; // 801DC73C
  c->r[3]=c->r[1]+0x00000044u; // 801DC740
  c->lr=0x801DC748u; f_800ECFD0(c); // 801DC744
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC748
  c->r[3]=c->r[1]+0x00000008u; // 801DC74C
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 801DC750
  c->r[4]=c->r[1]+0x00000014u; // 801DC754
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC758
  c->r[31]=c->r[27]+0x000000E0u; // 801DC75C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC760
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 801DC764
  c->r[5]=c->r[1]+0x00000020u; // 801DC768
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC76C
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC770
  c->f[0]=-c->f[0]; // 801DC774
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC778
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,3,ea,0,0);} // 801DC77C
  {uint32_t ea=c->r[1]+0x000001D4u; psq_load(c,2,ea,0,0);} // 801DC780
  {double t0=c->f[3], t1=c->ps1[3]; c->f[1]=t0; c->ps1[1]=t1;} // 801DC784
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,0,ea,0,0);} // 801DC788
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC78C
  {uint32_t ea=c->r[1]+0x000001DCu; psq_load(c,2,ea,1,0);} // 801DC790
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,3,ea,1,0);} // 801DC794
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC798
  {uint32_t ea=c->r[1]+0x000001D0u; psq_load(c,0,ea,1,0);} // 801DC79C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801DC7A0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801DC7A4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801DC7A8
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC7AC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,1,0);} // 801DC7B0
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801DC7B4
  c->lr=0x801DC7BCu; f_800ED078(c); // 801DC7B8
  c->r[4]=c->r[31]|c->r[31]; // 801DC7BC
  c->r[3]=c->r[1]+0x00000020u; // 801DC7C0
  c->lr=0x801DC7C8u; f_800ECFD0(c); // 801DC7C4
  {uint32_t ea=c->r[31]+0x00000004u; psq_load(c,0,ea,0,0);} // 801DC7C8
  {uint32_t ea=c->r[1]+0x00000174u; psq_load(c,1,ea,0,0);} // 801DC7CC
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,1,0);} // 801DC7D0
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC7D4
  {uint32_t ea=c->r[1]+0x00000170u; psq_load(c,1,ea,1,0);} // 801DC7D8
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801DC7DC
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801DC7E0
  c->f[0]=-c->f[0]; // 801DC7E4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC7E8
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,31,ea,0,0);} // 801DC7EC
  {uint32_t ea=c->r[1]+0x00000280u; c->f[31]=RF64(ea);} // 801DC7F0
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,30,ea,0,0);} // 801DC7F4
  {uint32_t ea=c->r[1]+0x00000270u; c->f[30]=RF64(ea);} // 801DC7F8
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,29,ea,0,0);} // 801DC7FC
  {uint32_t ea=c->r[1]+0x00000260u; c->f[29]=RF64(ea);} // 801DC800
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,28,ea,0,0);} // 801DC804
  {uint32_t ea=c->r[1]+0x00000250u; c->f[28]=RF64(ea);} // 801DC808
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,27,ea,0,0);} // 801DC80C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[27]=RF64(ea);} // 801DC810
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,26,ea,0,0);} // 801DC814
  {uint32_t ea=c->r[1]+0x00000230u; c->f[26]=RF64(ea);} // 801DC818
  c->r[11]=c->r[1]+0x00000230u; // 801DC81C
  c->lr=0x801DC824u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DC820
  c->r[0]=R32(c->r[1]+0x00000294u); // 801DC824
  c->lr=c->r[0]; // 801DC828
  c->r[1]=c->r[1]+0x00000290u; // 801DC82C
  return; // 801DC830
}

// fn_801DC834
void f_801DC834(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC834
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC838
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC83C
  fcmp(c,0,c->f[1],c->f[0]); // 801DC840
  if (crb(c,1)) { goto L_801DC898; } // 801DC844
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC848
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC84C
  fcmp(c,0,c->f[1],c->f[0]); // 801DC850
  if (crb(c,1)) { goto L_801DC898; } // 801DC854
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC858
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC85C
  fcmp(c,0,c->f[1],c->f[0]); // 801DC860
  if (crb(c,1)) { goto L_801DC898; } // 801DC864
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC868
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC86C
  fcmp(c,0,c->f[1],c->f[0]); // 801DC870
  if (crb(c,1)) { goto L_801DC898; } // 801DC874
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC878
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC87C
  fcmp(c,0,c->f[1],c->f[0]); // 801DC880
  if (crb(c,1)) { goto L_801DC898; } // 801DC884
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC888
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC88C
  fcmp(c,0,c->f[1],c->f[0]); // 801DC890
  if (!crb(c,1)) { goto L_801DC8A0; } // 801DC894
L_801DC898:;
  c->r[0]=0u+0x00000000u; // 801DC898
  goto L_801DC8A4; // 801DC89C
L_801DC8A0:;
  c->r[0]=0u+0x00000001u; // 801DC8A0
L_801DC8A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DC8A4
  if (!crb(c,2)) { goto L_801DC8B4; } // 801DC8A8
  c->r[3]=0u+0x00000000u; // 801DC8AC
  goto L_801DC9D0; // 801DC8B0
L_801DC8B4:;
  c->r[0]=0u+0x00000006u; // 801DC8B4
  c->r[5]=c->r[3]|c->r[3]; // 801DC8B8
  c->r[6]=c->r[3]+0x00000090u; // 801DC8BC
  {uint32_t ea=c->r[2]+0xFFFF9E3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DC8C0
  c->r[3]=0u+0x00000001u; // 801DC8C4
  c->ctr=c->r[0]; // 801DC8C8
L_801DC8CC:;
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC8CC
  fcmp(c,0,c->f[0],c->f[2]); // 801DC8D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DC8D4
  if (!crb(c,2)) { goto L_801DC8F0; } // 801DC8D8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC8DC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC8E0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801DC8E4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801DC8E8
  goto L_801DC900; // 801DC8EC
L_801DC8F0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC8F0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC8F4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801DC8F8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801DC8FC
L_801DC900:;
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC900
  fcmp(c,0,c->f[0],c->f[2]); // 801DC904
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DC908
  if (!crb(c,2)) { goto L_801DC924; } // 801DC90C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC910
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC914
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801DC918
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC91C
  goto L_801DC934; // 801DC920
L_801DC924:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC924
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC928
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801DC92C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DC930
L_801DC934:;
  {uint32_t ea=c->r[5]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC934
  fcmp(c,0,c->f[0],c->f[2]); // 801DC938
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DC93C
  if (!crb(c,2)) { goto L_801DC958; } // 801DC940
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC944
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC948
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801DC94C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801DC950
  goto L_801DC968; // 801DC954
L_801DC958:;
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC958
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC95C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801DC960
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801DC964
L_801DC968:;
  {uint32_t ea=c->r[6]+0x00000004u; psq_load(c,1,ea,0,0);} // 801DC968
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,3,ea,0,0);} // 801DC96C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,4,ea,1,0);} // 801DC970
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC974
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,3,ea,1,0);} // 801DC978
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC97C
  {double t0=S(std::fma(c->f[4],c->f[3],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[3],c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 801DC980
  {double t0=S(c->f[3]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC984
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801DC988
  fcmp(c,0,c->f[1],c->f[2]); // 801DC98C
  if (!crb(c,1)) { goto L_801DC99C; } // 801DC990
  c->r[3]=0u+0x00000000u; // 801DC994
  goto L_801DC9D0; // 801DC998
L_801DC99C:;
  {uint32_t ea=c->r[6]+0x00000004u; psq_load(c,1,ea,0,0);} // 801DC99C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,3,ea,0,0);} // 801DC9A0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,5,ea,1,0);} // 801DC9A4
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC9A8
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[1])), t1=S(std::fma(c->ps1[4],c->ps1[5],c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 801DC9AC
  {double t0=S(c->f[3]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801DC9B0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801DC9B4
  fcmp(c,0,c->f[0],c->f[2]); // 801DC9B8
  if (!crb(c,1)) { goto L_801DC9C4; } // 801DC9BC
  c->r[3]=0u+0x00000002u; // 801DC9C0
L_801DC9C4:;
  c->r[5]=c->r[5]+0x00000010u; // 801DC9C4
  c->r[6]=c->r[6]+0x00000010u; // 801DC9C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC8CC; } // 801DC9CC
L_801DC9D0:;
  c->r[1]=c->r[1]+0x00000020u; // 801DC9D0
  return; // 801DC9D4
}

// fn_801DC9D8
void f_801DC9D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC9D8
  c->r[0]=c->lr; // 801DC9DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC9E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC9E4
  c->r[31]=c->r[6]|c->r[6]; // 801DC9E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DC9EC
  c->r[30]=c->r[5]|c->r[5]; // 801DC9F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DC9F4
  c->r[29]=c->r[3]|c->r[3]; // 801DC9F8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DC9FC
  c->r[3]=c->r[3]+0x00000004u; // 801DCA00
  c->lr=0x801DCA08u; f_801DE07C(c); // 801DCA04
  {uint32_t ea=c->r[2]+0xFFFF9E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DCA08
  c->r[0]=0u+0x00000000u; // 801DCA0C
  W32(c->r[29]+0x00000010u,c->r[30]); // 801DCA10
  c->r[3]=c->r[29]|c->r[29]; // 801DCA14
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DCA18
  W32(c->r[29]+0x00000014u,c->r[31]); // 801DCA1C
  W8(c->r[29]+0x00000018u,c->r[0]); // 801DCA20
  W8(c->r[29]+0x00000019u,c->r[0]); // 801DCA24
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801DCA28
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801DCA2C
  W32(c->r[29]+0x00000020u,c->r[0]); // 801DCA30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCA34
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DCA38
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DCA3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCA40
  c->lr=c->r[0]; // 801DCA44
  c->r[1]=c->r[1]+0x00000020u; // 801DCA48
  return; // 801DCA4C
}

// dtor_801DCA50
void f_801DCA50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCA50
  c->r[0]=c->lr; // 801DCA54
  cmps(c,0,(int32_t)c->r[3],0); // 801DCA58
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCA5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DCA60
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DCA64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DCA68
  c->r[29]=c->r[4]|c->r[4]; // 801DCA6C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DCA70
  c->r[28]=c->r[3]|c->r[3]; // 801DCA74
  if (crb(c,2)) { goto L_801DCAF4; } // 801DCA78
  c->r[0]=R8(c->r[3]+0x00000018u); // 801DCA7C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCA80
  if (crb(c,2)) { goto L_801DCAE4; } // 801DCA84
  c->r[31]=0u+0x00000000u; // 801DCA88
  c->r[30]=0u+0x00000000u; // 801DCA8C
  goto L_801DCAC8; // 801DCA90
L_801DCA94:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DCA94
  c->r[3]=R32(c->r[30]+c->r[0]); // 801DCA98
  c->r[4]=c->r[0]+c->r[30]; // 801DCA9C
  cmps(c,1,(int32_t)c->r[3],0); // 801DCAA0
  if (crb(c,6)) { goto L_801DCAC0; } // 801DCAA4
  c->r[0]=R8(c->r[4]+0x00000008u); // 801DCAA8
  cmps(c,0,(int32_t)c->r[0],0); // 801DCAAC
  if (crb(c,2)) { goto L_801DCAC0; } // 801DCAB0
  if (crb(c,6)) { goto L_801DCAC0; } // 801DCAB4
  c->r[4]=0u+0x00000000u; // 801DCAB8
  c->lr=0x801DCAC0u; f_801E3FB4(c); // 801DCABC
L_801DCAC0:;
  c->r[30]=c->r[30]+0x0000000Cu; // 801DCAC0
  c->r[31]=c->r[31]+0x00000001u; // 801DCAC4
L_801DCAC8:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801DCAC8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801DCACC
  if (crb(c,0)) { IRQCHK(c); goto L_801DCA94; } // 801DCAD0
  c->r[3]=c->r[28]+0x00000004u; // 801DCAD4
  c->lr=0x801DCADCu; f_801DE0F4(c); // 801DCAD8
  c->r[0]=0u+0x00000000u; // 801DCADC
  W8(c->r[28]+0x00000018u,c->r[0]); // 801DCAE0
L_801DCAE4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DCAE4
  if (!crb(c,1)) { goto L_801DCAF4; } // 801DCAE8
  c->r[3]=c->r[28]|c->r[28]; // 801DCAEC
  c->lr=0x801DCAF4u; f_8009230C(c); // 801DCAF0
L_801DCAF4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCAF4
  c->r[3]=c->r[28]|c->r[28]; // 801DCAF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DCAFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DCB00
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DCB04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCB08
  c->lr=c->r[0]; // 801DCB0C
  c->r[1]=c->r[1]+0x00000020u; // 801DCB10
  return; // 801DCB14
}

// fn_801DCB18
void f_801DCB18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCB18
  c->r[0]=c->lr; // 801DCB1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCB20
  c->r[11]=c->r[1]+0x00000020u; // 801DCB24
  c->lr=0x801DCB2Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DCB28
  c->r[0]=R8(c->r[3]+0x00000018u); // 801DCB2C
  c->r[27]=c->r[3]|c->r[3]; // 801DCB30
  c->r[28]=c->r[4]|c->r[4]; // 801DCB34
  c->r[29]=c->r[5]|c->r[5]; // 801DCB38
  cmps(c,0,(int32_t)c->r[0],0); // 801DCB3C
  if (crb(c,2)) { goto L_801DCBA4; } // 801DCB40
  if (crb(c,2)) { goto L_801DCBA4; } // 801DCB44
  c->r[31]=0u+0x00000000u; // 801DCB48
  c->r[30]=0u+0x00000000u; // 801DCB4C
  goto L_801DCB88; // 801DCB50
L_801DCB54:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 801DCB54
  c->r[3]=R32(c->r[30]+c->r[0]); // 801DCB58
  c->r[4]=c->r[0]+c->r[30]; // 801DCB5C
  cmps(c,1,(int32_t)c->r[3],0); // 801DCB60
  if (crb(c,6)) { goto L_801DCB80; } // 801DCB64
  c->r[0]=R8(c->r[4]+0x00000008u); // 801DCB68
  cmps(c,0,(int32_t)c->r[0],0); // 801DCB6C
  if (crb(c,2)) { goto L_801DCB80; } // 801DCB70
  if (crb(c,6)) { goto L_801DCB80; } // 801DCB74
  c->r[4]=0u+0x00000000u; // 801DCB78
  c->lr=0x801DCB80u; f_801E3FB4(c); // 801DCB7C
L_801DCB80:;
  c->r[30]=c->r[30]+0x0000000Cu; // 801DCB80
  c->r[31]=c->r[31]+0x00000001u; // 801DCB84
L_801DCB88:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 801DCB88
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801DCB8C
  if (crb(c,0)) { IRQCHK(c); goto L_801DCB54; } // 801DCB90
  c->r[3]=c->r[27]+0x00000004u; // 801DCB94
  c->lr=0x801DCB9Cu; f_801DE0F4(c); // 801DCB98
  c->r[0]=0u+0x00000000u; // 801DCB9C
  W8(c->r[27]+0x00000018u,c->r[0]); // 801DCBA0
L_801DCBA4:;
  c->r[4]=c->r[28]|c->r[28]; // 801DCBA4
  c->r[3]=c->r[27]+0x00000004u; // 801DCBA8
  c->lr=0x801DCBB0u; f_801DE088(c); // 801DCBAC
  cmps(c,0,(int32_t)c->r[3],0); // 801DCBB0
  if (!crb(c,2)) { goto L_801DCBC0; } // 801DCBB4
  c->r[4]=0u+0x00000000u; // 801DCBB8
  goto L_801DCBE0; // 801DCBBC
L_801DCBC0:;
  {uint32_t ea=c->r[2]+0xFFFF9E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DCBC0
  c->r[3]=0u+0x00000001u; // 801DCBC4
  c->r[0]=0u+0x00000000u; // 801DCBC8
  W8(c->r[27]+0x00000019u,c->r[3]); // 801DCBCC
  c->r[4]=0u+0x00000001u; // 801DCBD0
  W8(c->r[27]+0x00000018u,c->r[3]); // 801DCBD4
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DCBD8
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 801DCBDC
L_801DCBE0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DCBE0
  if (!crb(c,2)) { goto L_801DCBF0; } // 801DCBE4
  c->r[3]=0u+0x00000000u; // 801DCBE8
  goto L_801DCC00; // 801DCBEC
L_801DCBF0:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCBF0
  c->r[4]=c->r[29]|c->r[29]; // 801DCBF4
  c->lr=0x801DCBFCu; f_801DDF88(c); // 801DCBF8
  c->r[3]=0u+0x00000001u; // 801DCBFC
L_801DCC00:;
  c->r[11]=c->r[1]+0x00000020u; // 801DCC00
  c->lr=0x801DCC08u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DCC04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCC08
  c->lr=c->r[0]; // 801DCC0C
  c->r[1]=c->r[1]+0x00000020u; // 801DCC10
  return; // 801DCC14
}

// fn_801DCC18
void f_801DCC18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCC18
  c->r[0]=c->lr; // 801DCC1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCC20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DCC24
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DCC28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DCC2C
  c->r[29]=c->r[3]|c->r[3]; // 801DCC30
  c->r[0]=R8(c->r[3]+0x00000018u); // 801DCC34
  cmps(c,0,(int32_t)c->r[0],0); // 801DCC38
  if (crb(c,2)) { goto L_801DCC9C; } // 801DCC3C
  c->r[30]=0u+0x00000000u; // 801DCC40
  c->r[31]=0u+0x00000000u; // 801DCC44
  goto L_801DCC80; // 801DCC48
L_801DCC4C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801DCC4C
  c->r[3]=R32(c->r[31]+c->r[0]); // 801DCC50
  c->r[4]=c->r[0]+c->r[31]; // 801DCC54
  cmps(c,1,(int32_t)c->r[3],0); // 801DCC58
  if (crb(c,6)) { goto L_801DCC78; } // 801DCC5C
  c->r[0]=R8(c->r[4]+0x00000008u); // 801DCC60
  cmps(c,0,(int32_t)c->r[0],0); // 801DCC64
  if (crb(c,2)) { goto L_801DCC78; } // 801DCC68
  if (crb(c,6)) { goto L_801DCC78; } // 801DCC6C
  c->r[4]=0u+0x00000000u; // 801DCC70
  c->lr=0x801DCC78u; f_801E3FB4(c); // 801DCC74
L_801DCC78:;
  c->r[31]=c->r[31]+0x0000000Cu; // 801DCC78
  c->r[30]=c->r[30]+0x00000001u; // 801DCC7C
L_801DCC80:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801DCC80
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801DCC84
  if (crb(c,0)) { IRQCHK(c); goto L_801DCC4C; } // 801DCC88
  c->r[3]=c->r[29]+0x00000004u; // 801DCC8C
  c->lr=0x801DCC94u; f_801DE0F4(c); // 801DCC90
  c->r[0]=0u+0x00000000u; // 801DCC94
  W8(c->r[29]+0x00000018u,c->r[0]); // 801DCC98
L_801DCC9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCC9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCCA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DCCA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DCCA8
  c->lr=c->r[0]; // 801DCCAC
  c->r[1]=c->r[1]+0x00000020u; // 801DCCB0
  return; // 801DCCB4
}

// fn_801DCCB8
void f_801DCCB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCCB8
  c->r[0]=c->lr; // 801DCCBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DCCC0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801DCCC4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801DCCC8
  c->f[31]=c->f[1]; // 801DCCCC
  c->r[8]=0u+0x00000000u; // 801DCCD0
  c->r[7]=0u+0x00000000u; // 801DCCD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DCCD8
  c->r[31]=c->r[3]|c->r[3]; // 801DCCDC
  c->r[5]=0u+0x00000000u; // 801DCCE0
  goto L_801DCD08; // 801DCCE4
L_801DCCE8:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 801DCCE8
  c->r[6]=c->r[0]+c->r[7]; // 801DCCEC
  c->r[0]=R32(c->r[7]+c->r[0]); // 801DCCF0
  cmps(c,0,(int32_t)c->r[0],0); // 801DCCF4
  if (!crb(c,2)) { goto L_801DCD00; } // 801DCCF8
  W32(c->r[6]+0x00000004u,c->r[5]); // 801DCCFC
L_801DCD00:;
  c->r[7]=c->r[7]+0x0000000Cu; // 801DCD00
  c->r[8]=c->r[8]+0x00000001u; // 801DCD04
L_801DCD08:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801DCD08
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DCD0C
  if (crb(c,0)) { IRQCHK(c); goto L_801DCCE8; } // 801DCD10
  c->r[0]=R8(c->r[3]+0x00000019u); // 801DCD14
  cmps(c,0,(int32_t)c->r[0],0); // 801DCD18
  if (crb(c,2)) { goto L_801DCD9C; } // 801DCD1C
  cmps(c,0,(int32_t)c->r[4],0); // 801DCD20
  if (!crb(c,2)) { goto L_801DCD44; } // 801DCD24
  {uint32_t ea=c->r[2]+0xFFFF9E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DCD28
  c->r[5]=0u+0x00000001u; // 801DCD2C
  c->r[0]=0u+0x00000000u; // 801DCD30
  W8(c->r[3]+0x0000001Au,c->r[5]); // 801DCD34
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DCD38
  W8(c->r[3]+0x00000019u,c->r[0]); // 801DCD3C
  goto L_801DCD94; // 801DCD40
L_801DCD44:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DCD44
  cmps(c,0,(int32_t)c->r[0],0); // 801DCD48
  if (crb(c,2)) { goto L_801DCD5C; } // 801DCD4C
  c->r[5]=R32(c->r[3]+0x00000008u); // 801DCD50
  c->r[0]=R32(c->r[5]+0x00000008u); // 801DCD54
  goto L_801DCD60; // 801DCD58
L_801DCD5C:;
  c->r[0]=0u+0x00000000u; // 801DCD5C
L_801DCD60:;
  c->r[6]=0u+0x43300000u; // 801DCD60
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DCD64
  c->r[5]=0u+0x00000001u; // 801DCD68
  c->r[0]=0u+0x00000000u; // 801DCD6C
  W32(c->r[1]+0x00000008u,c->r[6]); // 801DCD70
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[2]=RF64(ea);} // 801DCD74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DCD78
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DCD7C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DCD80
  W8(c->r[3]+0x0000001Au,c->r[5]); // 801DCD84
  W8(c->r[3]+0x00000019u,c->r[0]); // 801DCD88
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801DCD8C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801DCD90
L_801DCD94:;
  c->r[0]=0u+0x00000000u; // 801DCD94
  W8(c->r[3]+0x00000019u,c->r[0]); // 801DCD98
L_801DCD9C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DCD9C
  if (!crb(c,2)) { goto L_801DCDB4; } // 801DCDA0
  c->f[1]=c->f[31]; // 801DCDA4
  c->r[3]=c->r[31]|c->r[31]; // 801DCDA8
  c->lr=0x801DCDB0u; f_801DCDE8(c); // 801DCDAC
  goto L_801DCDC0; // 801DCDB0
L_801DCDB4:;
  c->f[1]=c->f[31]; // 801DCDB4
  c->r[3]=c->r[31]|c->r[31]; // 801DCDB8
  c->lr=0x801DCDC0u; f_801DD004(c); // 801DCDBC
L_801DCDC0:;
  c->r[0]=0u+0x00000000u; // 801DCDC0
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[31]);} // 801DCDC4
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801DCDC8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801DCDCC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801DCDD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCDD4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DCDD8
  c->lr=c->r[0]; // 801DCDDC
  c->r[1]=c->r[1]+0x00000030u; // 801DCDE0
  return; // 801DCDE4
}

// fn_801DCDE8
void f_801DCDE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCDE8
  c->r[0]=c->lr; // 801DCDEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DCDF0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801DCDF4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801DCDF8
  c->f[31]=c->f[1]; // 801DCDFC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DCE00
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DCE04
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DCE08
  c->r[29]=c->r[3]|c->r[3]; // 801DCE0C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801DCE10
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DCE14
  c->f[1]=c->f[0]; // 801DCE18
  c->lr=0x801DCE20u; f_8011A69C(c); // 801DCE1C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801DCE20
  c->f[1]=c->f[31]; // 801DCE24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DCE28
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801DCE2C
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 801DCE30
  c->lr=0x801DCE38u; f_8011A69C(c); // 801DCE34
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801DCE38
  c->r[0]=R8(c->r[29]+0x0000001Au); // 801DCE3C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCE40
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DCE44
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801DCE48
  c->r[31]=R32(c->r[1]+0x00000014u); // 801DCE4C
  if (crb(c,2)) { goto L_801DCE80; } // 801DCE50
  c->r[3]=c->r[28]^0x80000000u; // 801DCE54
  c->r[0]=0u+0x43300000u; // 801DCE58
  W32(c->r[1]+0x00000014u,c->r[3]); // 801DCE5C
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=RF64(ea);} // 801DCE60
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DCE64
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DCE68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DCE6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801DCE70
  fcmp(c,0,c->f[2],c->f[0]); // 801DCE74
  if (!crb(c,2)) { goto L_801DCE80; } // 801DCE78
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 801DCE7C
L_801DCE80:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 801DCE80
  if (crb(c,2)) { goto L_801DCFDC; } // 801DCE84
  c->r[30]=c->r[28]+0x00000001u; // 801DCE88
L_801DCE8C:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 801DCE8C
  cmps(c,0,(int32_t)c->r[4],0); // 801DCE90
  if (crb(c,2)) { goto L_801DCEA4; } // 801DCE94
  c->r[3]=R32(c->r[29]+0x00000008u); // 801DCE98
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DCE9C
  goto L_801DCEA8; // 801DCEA0
L_801DCEA4:;
  c->r[0]=0u+0x00000000u; // 801DCEA4
L_801DCEA8:;
  cmpu(c,0,c->r[30],c->r[0]); // 801DCEA8
  if (!crb(c,2)) { goto L_801DCED8; } // 801DCEAC
  cmps(c,0,(int32_t)c->r[4],0); // 801DCEB0
  if (crb(c,2)) { goto L_801DCEC4; } // 801DCEB4
  c->r[3]=R32(c->r[29]+0x00000008u); // 801DCEB8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DCEBC
  goto L_801DCEC8; // 801DCEC0
L_801DCEC4:;
  c->r[0]=0u+0x00000000u; // 801DCEC4
L_801DCEC8:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801DCEC8
  c->r[30]=c->r[30]-c->r[0]; // 801DCECC
  c->r[0]=c->r[3]+0x00000001u; // 801DCED0
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801DCED4
L_801DCED8:;
  c->r[28]=0u+0x00000000u; // 801DCED8
  goto L_801DCFBC; // 801DCEDC
L_801DCEE0:;
  c->r[4]=c->r[28]|c->r[28]; // 801DCEE0
  c->r[3]=c->r[29]+0x00000004u; // 801DCEE4
  c->lr=0x801DCEECu; f_801DE148(c); // 801DCEE8
  cmps(c,0,(int32_t)c->r[3],0); // 801DCEEC
  c->r[4]=c->r[3]|c->r[3]; // 801DCEF0
  if (crb(c,2)) { goto L_801DCFB8; } // 801DCEF4
  c->r[5]=R8(c->r[3]+0x00000008u); // 801DCEF8
  c->r[7]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[7]); // 801DCEFC
  if (!crb(c,2)) { goto L_801DCF1C; } // 801DCF00
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 801DCF04
  if (!crb(c,2)) { goto L_801DCF14; } // 801DCF08
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801DCF0C
  if (crb(c,2)) { goto L_801DCF1C; } // 801DCF10
L_801DCF14:;
  c->r[0]=0u+0x00000001u; // 801DCF14
  goto L_801DCF88; // 801DCF18
L_801DCF1C:;
  c->r[6]=R32(c->r[29]+0x0000001Cu); // 801DCF1C
  c->r[5]=R8(c->r[3]+0x00000009u); // 801DCF20
  cmps(c,0,(int32_t)c->r[6],0); // 801DCF24
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801DCF28
  c->r[0]=sraw(c,c->r[5],31); // 801DCF2C
  c->r[0]=c->r[5]&~c->r[0]; // 801DCF30
  if (!crb(c,0)) { goto L_801DCF3C; } // 801DCF34
  c->r[6]=0u-c->r[6]; // 801DCF38
L_801DCF3C:;
  c->r[5]=R8(c->r[3]+0x0000000Au); // 801DCF3C
  cmps(c,0,(int32_t)c->r[5],0); // 801DCF40
  if (!crb(c,2)) { goto L_801DCF58; } // 801DCF44
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DCF48
  if (!crb(c,0)) { goto L_801DCF84; } // 801DCF4C
  c->r[0]=0u+0x00000000u; // 801DCF50
  goto L_801DCF88; // 801DCF54
L_801DCF58:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DCF58
  if (!crb(c,0)) { goto L_801DCF68; } // 801DCF5C
  c->r[0]=0u+0x00000000u; // 801DCF60
  goto L_801DCF88; // 801DCF64
L_801DCF68:;
  c->r[3]=c->r[6]-c->r[0]; // 801DCF68
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 801DCF6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801DCF70
  c->r[0]=c->r[3]-c->r[0]; cr0(c,c->r[0]); // 801DCF74
  if (crb(c,2)) { goto L_801DCF84; } // 801DCF78
  c->r[0]=0u+0x00000000u; // 801DCF7C
  goto L_801DCF88; // 801DCF80
L_801DCF84:;
  c->r[0]=0u+0x00000001u; // 801DCF84
L_801DCF88:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DCF88
  if (crb(c,2)) { goto L_801DCFB8; } // 801DCF8C
  cmps(c,0,(int32_t)c->r[7],0); // 801DCF90
  if (crb(c,2)) { goto L_801DCFAC; } // 801DCF94
  c->r[3]=c->r[29]|c->r[29]; // 801DCF98
  c->r[5]=c->r[30]|c->r[30]; // 801DCF9C
  c->r[6]=0u+0x00000000u; // 801DCFA0
  c->lr=0x801DCFA8u; f_801DD284(c); // 801DCFA4
  goto L_801DCFB8; // 801DCFA8
L_801DCFAC:;
  c->r[3]=c->r[29]|c->r[29]; // 801DCFAC
  c->r[5]=c->r[30]|c->r[30]; // 801DCFB0
  c->lr=0x801DCFB8u; f_801DD4F8(c); // 801DCFB4
L_801DCFB8:;
  c->r[28]=c->r[28]+0x00000001u; // 801DCFB8
L_801DCFBC:;
  c->r[3]=c->r[29]+0x00000004u; // 801DCFBC
  c->lr=0x801DCFC4u; f_801DE104(c); // 801DCFC0
  cmpu(c,0,c->r[28],c->r[3]); // 801DCFC4
  if (crb(c,0)) { IRQCHK(c); goto L_801DCEE0; } // 801DCFC8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 801DCFCC
  if (crb(c,2)) { goto L_801DCFDC; } // 801DCFD0
  c->r[30]=c->r[30]+0x00000001u; // 801DCFD4
  IRQCHK(c); goto L_801DCE8C; // 801DCFD8
L_801DCFDC:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801DCFDC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DCFE0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801DCFE4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DCFE8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DCFEC
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DCFF0
  c->r[28]=R32(c->r[1]+0x00000020u); // 801DCFF4
  c->lr=c->r[0]; // 801DCFF8
  c->r[1]=c->r[1]+0x00000040u; // 801DCFFC
  return; // 801DD000
}

// fn_801DD004
void f_801DD004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD004
  c->r[0]=c->lr; // 801DD008
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DD00C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801DD010
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801DD014
  c->f[31]=c->f[1]; // 801DD018
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DD01C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DD020
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DD024
  c->r[29]=c->r[3]|c->r[3]; // 801DD028
  W32(c->r[1]+0x00000020u,c->r[28]); // 801DD02C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DD030
  c->f[1]=c->f[0]; // 801DD034
  c->lr=0x801DD03Cu; f_8011A45C(c); // 801DD038
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801DD03C
  c->f[1]=c->f[31]; // 801DD040
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DD044
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801DD048
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 801DD04C
  c->lr=0x801DD054u; f_8011A45C(c); // 801DD050
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801DD054
  c->r[4]=R32(c->r[29]+0x00000004u); // 801DD058
  cmps(c,0,(int32_t)c->r[4],0); // 801DD05C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DD060
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801DD064
  c->r[31]=R32(c->r[1]+0x00000014u); // 801DD068
  if (crb(c,2)) { goto L_801DD07C; } // 801DD06C
  c->r[3]=R32(c->r[29]+0x00000008u); // 801DD070
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DD074
  goto L_801DD080; // 801DD078
L_801DD07C:;
  c->r[0]=0u+0x00000000u; // 801DD07C
L_801DD080:;
  cmpu(c,0,c->r[28],c->r[0]); // 801DD080
  if (crb(c,0)) { goto L_801DD0A4; } // 801DD084
  cmps(c,0,(int32_t)c->r[4],0); // 801DD088
  if (crb(c,2)) { goto L_801DD09C; } // 801DD08C
  c->r[3]=R32(c->r[29]+0x00000008u); // 801DD090
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DD094
  goto L_801DD0A0; // 801DD098
L_801DD09C:;
  c->r[0]=0u+0x00000000u; // 801DD09C
L_801DD0A0:;
  c->r[28]=c->r[28]-c->r[0]; // 801DD0A0
L_801DD0A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DD0A4
  if (crb(c,2)) { goto L_801DD0B8; } // 801DD0A8
  c->r[3]=R32(c->r[29]+0x00000008u); // 801DD0AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DD0B0
  goto L_801DD0BC; // 801DD0B4
L_801DD0B8:;
  c->r[0]=0u+0x00000000u; // 801DD0B8
L_801DD0BC:;
  cmpu(c,0,c->r[31],c->r[0]); // 801DD0BC
  if (crb(c,0)) { goto L_801DD0E0; } // 801DD0C0
  cmps(c,0,(int32_t)c->r[4],0); // 801DD0C4
  if (crb(c,2)) { goto L_801DD0D8; } // 801DD0C8
  c->r[3]=R32(c->r[29]+0x00000008u); // 801DD0CC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DD0D0
  goto L_801DD0DC; // 801DD0D4
L_801DD0D8:;
  c->r[0]=0u+0x00000000u; // 801DD0D8
L_801DD0DC:;
  c->r[31]=c->r[31]-c->r[0]; // 801DD0DC
L_801DD0E0:;
  c->r[0]=R8(c->r[29]+0x0000001Au); // 801DD0E0
  cmps(c,0,(int32_t)c->r[0],0); // 801DD0E4
  if (crb(c,2)) { goto L_801DD118; } // 801DD0E8
  c->r[3]=c->r[28]^0x80000000u; // 801DD0EC
  c->r[0]=0u+0x43300000u; // 801DD0F0
  W32(c->r[1]+0x00000014u,c->r[3]); // 801DD0F4
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=RF64(ea);} // 801DD0F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DD0FC
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DD100
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DD104
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801DD108
  fcmp(c,0,c->f[2],c->f[0]); // 801DD10C
  if (!crb(c,2)) { goto L_801DD118; } // 801DD110
  c->r[28]=c->r[28]+0x00000001u; // 801DD114
L_801DD118:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[31]); // 801DD118
  if (crb(c,2)) { goto L_801DD25C; } // 801DD11C
  c->r[30]=c->r[28]+0xFFFFFFFFu; // 801DD120
L_801DD124:;
  cmps(c,0,(int32_t)c->r[30],-1); // 801DD124
  if (!crb(c,2)) { goto L_801DD158; } // 801DD128
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD12C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD130
  if (crb(c,2)) { goto L_801DD144; } // 801DD134
  c->r[3]=R32(c->r[29]+0x00000008u); // 801DD138
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DD13C
  goto L_801DD148; // 801DD140
L_801DD144:;
  c->r[0]=0u+0x00000000u; // 801DD144
L_801DD148:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801DD148
  c->r[30]=c->r[30]+c->r[0]; // 801DD14C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DD150
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801DD154
L_801DD158:;
  c->r[28]=0u+0x00000000u; // 801DD158
  goto L_801DD23C; // 801DD15C
L_801DD160:;
  c->r[4]=c->r[28]|c->r[28]; // 801DD160
  c->r[3]=c->r[29]+0x00000004u; // 801DD164
  c->lr=0x801DD16Cu; f_801DE148(c); // 801DD168
  cmps(c,0,(int32_t)c->r[3],0); // 801DD16C
  c->r[4]=c->r[3]|c->r[3]; // 801DD170
  if (crb(c,2)) { goto L_801DD238; } // 801DD174
  c->r[5]=R8(c->r[3]+0x00000008u); // 801DD178
  c->r[7]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[7]); // 801DD17C
  if (!crb(c,2)) { goto L_801DD19C; } // 801DD180
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 801DD184
  if (!crb(c,2)) { goto L_801DD194; } // 801DD188
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801DD18C
  if (crb(c,2)) { goto L_801DD19C; } // 801DD190
L_801DD194:;
  c->r[0]=0u+0x00000001u; // 801DD194
  goto L_801DD208; // 801DD198
L_801DD19C:;
  c->r[6]=R32(c->r[29]+0x0000001Cu); // 801DD19C
  c->r[5]=R8(c->r[3]+0x00000009u); // 801DD1A0
  cmps(c,0,(int32_t)c->r[6],0); // 801DD1A4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801DD1A8
  c->r[0]=sraw(c,c->r[5],31); // 801DD1AC
  c->r[0]=c->r[5]&~c->r[0]; // 801DD1B0
  if (!crb(c,0)) { goto L_801DD1BC; } // 801DD1B4
  c->r[6]=0u-c->r[6]; // 801DD1B8
L_801DD1BC:;
  c->r[5]=R8(c->r[3]+0x0000000Au); // 801DD1BC
  cmps(c,0,(int32_t)c->r[5],0); // 801DD1C0
  if (!crb(c,2)) { goto L_801DD1D8; } // 801DD1C4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DD1C8
  if (!crb(c,0)) { goto L_801DD204; } // 801DD1CC
  c->r[0]=0u+0x00000000u; // 801DD1D0
  goto L_801DD208; // 801DD1D4
L_801DD1D8:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DD1D8
  if (!crb(c,0)) { goto L_801DD1E8; } // 801DD1DC
  c->r[0]=0u+0x00000000u; // 801DD1E0
  goto L_801DD208; // 801DD1E4
L_801DD1E8:;
  c->r[3]=c->r[6]-c->r[0]; // 801DD1E8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 801DD1EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801DD1F0
  c->r[0]=c->r[3]-c->r[0]; cr0(c,c->r[0]); // 801DD1F4
  if (crb(c,2)) { goto L_801DD204; } // 801DD1F8
  c->r[0]=0u+0x00000000u; // 801DD1FC
  goto L_801DD208; // 801DD200
L_801DD204:;
  c->r[0]=0u+0x00000001u; // 801DD204
L_801DD208:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DD208
  if (crb(c,2)) { goto L_801DD238; } // 801DD20C
  cmps(c,0,(int32_t)c->r[7],0); // 801DD210
  if (crb(c,2)) { goto L_801DD22C; } // 801DD214
  c->r[3]=c->r[29]|c->r[29]; // 801DD218
  c->r[5]=c->r[30]|c->r[30]; // 801DD21C
  c->r[6]=0u+0x00000001u; // 801DD220
  c->lr=0x801DD228u; f_801DD284(c); // 801DD224
  goto L_801DD238; // 801DD228
L_801DD22C:;
  c->r[3]=c->r[29]|c->r[29]; // 801DD22C
  c->r[5]=c->r[30]|c->r[30]; // 801DD230
  c->lr=0x801DD238u; f_801DD804(c); // 801DD234
L_801DD238:;
  c->r[28]=c->r[28]+0x00000001u; // 801DD238
L_801DD23C:;
  c->r[3]=c->r[29]+0x00000004u; // 801DD23C
  c->lr=0x801DD244u; f_801DE104(c); // 801DD240
  cmpu(c,0,c->r[28],c->r[3]); // 801DD244
  if (crb(c,0)) { IRQCHK(c); goto L_801DD160; } // 801DD248
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 801DD24C
  if (crb(c,2)) { goto L_801DD25C; } // 801DD250
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801DD254
  IRQCHK(c); goto L_801DD124; // 801DD258
L_801DD25C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801DD25C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DD260
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801DD264
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DD268
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DD26C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DD270
  c->r[28]=R32(c->r[1]+0x00000020u); // 801DD274
  c->lr=c->r[0]; // 801DD278
  c->r[1]=c->r[1]+0x00000040u; // 801DD27C
  return; // 801DD280
}

// fn_801DD284
void f_801DD284(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD284
  c->r[0]=c->lr; // 801DD288
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DD28C
  c->r[11]=c->r[1]+0x00000030u; // 801DD290
  c->lr=0x801DD298u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DD294
  c->r[28]=c->r[3]|c->r[3]; // 801DD298
  c->r[29]=c->r[4]|c->r[4]; // 801DD29C
  c->r[30]=c->r[5]|c->r[5]; // 801DD2A0
  c->r[23]=c->r[6]|c->r[6]; // 801DD2A4
  c->r[3]=c->r[3]+0x00000004u; // 801DD2A8
  c->lr=0x801DD2B0u; f_801DE1A0(c); // 801DD2AC
  cmps(c,0,(int32_t)c->r[3],0); // 801DD2B0
  c->r[31]=c->r[3]|c->r[3]; // 801DD2B4
  if (crb(c,2)) { goto L_801DD4E0; } // 801DD2B8
  c->r[3]=R8(c->r[29]+0x00000008u); // 801DD2BC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801DD2C0
  if (!crb(c,2)) { goto L_801DD4E0; } // 801DD2C4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801DD2C8
  if (crb(c,2)) { goto L_801DD37C; } // 801DD2CC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD2D0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD2D4
  if (!crb(c,2)) { goto L_801DD4E0; } // 801DD2D8
  c->r[26]=0u+0x00000000u; // 801DD2DC
  c->r[24]=0u+0x00000000u; // 801DD2E0
  c->r[27]=0u+0x00000000u; // 801DD2E4
  goto L_801DD320; // 801DD2E8
L_801DD2EC:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DD2EC
  c->r[29]=c->r[0]+c->r[24]; // 801DD2F0
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD2F4
  cmpu(c,0,c->r[0],c->r[31]); // 801DD2F8
  if (!crb(c,2)) { goto L_801DD318; } // 801DD2FC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801DD300
  cmps(c,0,(int32_t)c->r[3],0); // 801DD304
  if (crb(c,2)) { goto L_801DD314; } // 801DD308
  c->r[4]=0u+0x00000000u; // 801DD30C
  c->lr=0x801DD314u; f_801E3FB4(c); // 801DD310
L_801DD314:;
  W32(c->r[29]+0x00000004u,c->r[27]); // 801DD314
L_801DD318:;
  c->r[24]=c->r[24]+0x0000000Cu; // 801DD318
  c->r[26]=c->r[26]+0x00000001u; // 801DD31C
L_801DD320:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801DD320
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801DD324
  if (crb(c,0)) { IRQCHK(c); goto L_801DD2EC; } // 801DD328
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD32C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD330
  if (crb(c,2)) { goto L_801DD368; } // 801DD334
  c->r[3]=R8(c->r[31]+0x00000008u); // 801DD338
  c->r[5]=c->r[31]|c->r[31]; // 801DD33C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD340
  c->lr=0x801DD348u; f_801FBA20(c); // 801DD344
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD348
  c->r[5]=c->r[3]|c->r[3]; // 801DD34C
  c->r[4]=c->r[30]|c->r[30]; // 801DD350
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD354
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD358
  c->r[3]=0u+0x00000000u; // 801DD35C
  c->ctr=c->r[12]; // 801DD360
  if (true) { c->lr=0x801DD368u; dispatch(c,c->ctr); } // 801DD364
L_801DD368:;
  c->r[3]=c->r[28]|c->r[28]; // 801DD368
  c->r[4]=c->r[31]|c->r[31]; // 801DD36C
  c->r[5]=0u+0x00000001u; // 801DD370
  c->lr=0x801DD378u; f_801DDB10(c); // 801DD374
  goto L_801DD4E0; // 801DD378
L_801DD37C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD37C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD380
  if (!crb(c,2)) { goto L_801DD424; } // 801DD384
  c->r[25]=0u+0x00000000u; // 801DD388
  c->r[24]=0u+0x00000000u; // 801DD38C
  c->r[27]=0u+0x00000000u; // 801DD390
  goto L_801DD3CC; // 801DD394
L_801DD398:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DD398
  c->r[26]=c->r[0]+c->r[24]; // 801DD39C
  c->r[0]=R32(c->r[26]+0x00000004u); // 801DD3A0
  cmpu(c,0,c->r[0],c->r[31]); // 801DD3A4
  if (!crb(c,2)) { goto L_801DD3C4; } // 801DD3A8
  c->r[3]=R32(c->r[26]+0x00000000u); // 801DD3AC
  cmps(c,0,(int32_t)c->r[3],0); // 801DD3B0
  if (crb(c,2)) { goto L_801DD3C0; } // 801DD3B4
  c->r[4]=0u+0x00000000u; // 801DD3B8
  c->lr=0x801DD3C0u; f_801E3FB4(c); // 801DD3BC
L_801DD3C0:;
  W32(c->r[26]+0x00000004u,c->r[27]); // 801DD3C0
L_801DD3C4:;
  c->r[24]=c->r[24]+0x0000000Cu; // 801DD3C4
  c->r[25]=c->r[25]+0x00000001u; // 801DD3C8
L_801DD3CC:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801DD3CC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801DD3D0
  if (crb(c,0)) { IRQCHK(c); goto L_801DD398; } // 801DD3D4
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD3D8
  cmps(c,0,(int32_t)c->r[0],0); // 801DD3DC
  if (crb(c,2)) { goto L_801DD414; } // 801DD3E0
  c->r[3]=R8(c->r[31]+0x00000008u); // 801DD3E4
  c->r[5]=c->r[31]|c->r[31]; // 801DD3E8
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD3EC
  c->lr=0x801DD3F4u; f_801FBA20(c); // 801DD3F0
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD3F4
  c->r[5]=c->r[3]|c->r[3]; // 801DD3F8
  c->r[4]=c->r[30]|c->r[30]; // 801DD3FC
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD400
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD404
  c->r[3]=0u+0x00000000u; // 801DD408
  c->ctr=c->r[12]; // 801DD40C
  if (true) { c->lr=0x801DD414u; dispatch(c,c->ctr); } // 801DD410
L_801DD414:;
  c->r[3]=c->r[28]|c->r[28]; // 801DD414
  c->r[4]=c->r[31]|c->r[31]; // 801DD418
  c->r[5]=0u+0x00000001u; // 801DD41C
  c->lr=0x801DD424u; f_801DDB10(c); // 801DD420
L_801DD424:;
  cmps(c,0,(int32_t)c->r[23],0); // 801DD424
  if (!crb(c,2)) { goto L_801DD434; } // 801DD428
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD42C
  goto L_801DD44C; // 801DD430
L_801DD434:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD434
  c->r[3]=R32(c->r[29]+0x00000004u); // 801DD438
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD43C
  c->r[3]=c->r[0]-c->r[3]; // 801DD440
  c->r[0]=sraw(c,c->r[3],31); // 801DD444
  c->r[0]=c->r[3]&~c->r[0]; // 801DD448
L_801DD44C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD44C
  if (!crb(c,2)) { goto L_801DD4E0; } // 801DD450
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD454
  cmps(c,0,(int32_t)c->r[0],0); // 801DD458
  if (crb(c,2)) { goto L_801DD490; } // 801DD45C
  c->r[3]=R8(c->r[31]+0x00000008u); // 801DD460
  c->r[5]=c->r[31]|c->r[31]; // 801DD464
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD468
  c->lr=0x801DD470u; f_801FBA20(c); // 801DD46C
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD470
  c->r[5]=c->r[3]|c->r[3]; // 801DD474
  c->r[4]=c->r[30]|c->r[30]; // 801DD478
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD47C
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD480
  c->r[3]=0u+0x00000001u; // 801DD484
  c->ctr=c->r[12]; // 801DD488
  if (true) { c->lr=0x801DD490u; dispatch(c,c->ctr); } // 801DD48C
L_801DD490:;
  c->r[26]=0u+0x00000000u; // 801DD490
  c->r[27]=0u+0x00000000u; // 801DD494
  c->r[29]=0u+0x00000000u; // 801DD498
  goto L_801DD4D4; // 801DD49C
L_801DD4A0:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DD4A0
  c->r[25]=c->r[0]+c->r[27]; // 801DD4A4
  c->r[0]=R32(c->r[25]+0x00000004u); // 801DD4A8
  cmpu(c,0,c->r[0],c->r[31]); // 801DD4AC
  if (!crb(c,2)) { goto L_801DD4CC; } // 801DD4B0
  c->r[3]=R32(c->r[25]+0x00000000u); // 801DD4B4
  cmps(c,0,(int32_t)c->r[3],0); // 801DD4B8
  if (crb(c,2)) { goto L_801DD4C8; } // 801DD4BC
  c->r[4]=0u+0x00000000u; // 801DD4C0
  c->lr=0x801DD4C8u; f_801E3FB4(c); // 801DD4C4
L_801DD4C8:;
  W32(c->r[25]+0x00000004u,c->r[29]); // 801DD4C8
L_801DD4CC:;
  c->r[27]=c->r[27]+0x0000000Cu; // 801DD4CC
  c->r[26]=c->r[26]+0x00000001u; // 801DD4D0
L_801DD4D4:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801DD4D4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801DD4D8
  if (crb(c,0)) { IRQCHK(c); goto L_801DD4A0; } // 801DD4DC
L_801DD4E0:;
  c->r[11]=c->r[1]+0x00000030u; // 801DD4E0
  c->lr=0x801DD4E8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DD4E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DD4E8
  c->lr=c->r[0]; // 801DD4EC
  c->r[1]=c->r[1]+0x00000030u; // 801DD4F0
  return; // 801DD4F4
}

// fn_801DD4F8
void f_801DD4F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD4F8
  c->r[0]=c->lr; // 801DD4FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD500
  c->r[11]=c->r[1]+0x00000020u; // 801DD504
  c->lr=0x801DD50Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DD508
  c->r[28]=c->r[3]|c->r[3]; // 801DD50C
  c->r[29]=c->r[4]|c->r[4]; // 801DD510
  c->r[30]=c->r[5]|c->r[5]; // 801DD514
  c->r[3]=c->r[3]+0x00000004u; // 801DD518
  c->lr=0x801DD520u; f_801DE1A0(c); // 801DD51C
  cmps(c,0,(int32_t)c->r[3],0); // 801DD520
  c->r[31]=c->r[3]|c->r[3]; // 801DD524
  if (crb(c,2)) { goto L_801DD7EC; } // 801DD528
  c->r[4]=R8(c->r[29]+0x00000008u); // 801DD52C
  c->r[5]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[5]); // 801DD530
  if (crb(c,2)) { goto L_801DD554; } // 801DD534
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801DD538
  if (crb(c,2)) { goto L_801DD554; } // 801DD53C
  c->r[3]=c->r[28]|c->r[28]; // 801DD540
  c->r[4]=c->r[31]|c->r[31]; // 801DD544
  c->r[5]=0u+0x00000001u; // 801DD548
  c->lr=0x801DD550u; f_801DDCB0(c); // 801DD54C
  goto L_801DD7EC; // 801DD550
L_801DD554:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DD554
  if (crb(c,2)) { goto L_801DD644; } // 801DD558
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD55C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD560
  if (!crb(c,2)) { goto L_801DD5A4; } // 801DD564
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD568
  cmps(c,0,(int32_t)c->r[0],0); // 801DD56C
  if (crb(c,2)) { goto L_801DD5A4; } // 801DD570
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DD574
  c->r[5]=c->r[31]|c->r[31]; // 801DD578
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD57C
  c->lr=0x801DD584u; f_801FBA20(c); // 801DD580
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD584
  c->r[5]=c->r[3]|c->r[3]; // 801DD588
  c->r[4]=c->r[30]|c->r[30]; // 801DD58C
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD590
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD594
  c->r[3]=0u+0x00000003u; // 801DD598
  c->ctr=c->r[12]; // 801DD59C
  if (true) { c->lr=0x801DD5A4u; dispatch(c,c->ctr); } // 801DD5A0
L_801DD5A4:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 801DD5A4
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801DD5A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD5AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DD5B0
  if (!crb(c,0)) { goto L_801DD5CC; } // 801DD5B4
  c->r[3]=c->r[28]|c->r[28]; // 801DD5B8
  c->r[4]=c->r[31]|c->r[31]; // 801DD5BC
  c->r[5]=0u+0x00000001u; // 801DD5C0
  c->lr=0x801DD5C8u; f_801DDCB0(c); // 801DD5C4
  goto L_801DD7EC; // 801DD5C8
L_801DD5CC:;
  if (!crb(c,2)) { goto L_801DD7EC; } // 801DD5CC
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD5D0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801DD5D4
  if (!crb(c,0)) { goto L_801DD5F0; } // 801DD5D8
  c->r[3]=c->r[28]|c->r[28]; // 801DD5DC
  c->r[4]=c->r[31]|c->r[31]; // 801DD5E0
  c->r[5]=0u+0x00000001u; // 801DD5E4
  c->lr=0x801DD5ECu; f_801DDCB0(c); // 801DD5E8
  goto L_801DD7EC; // 801DD5EC
L_801DD5F0:;
  c->r[27]=0u+0x00000000u; // 801DD5F0
  c->r[26]=0u+0x00000000u; // 801DD5F4
  c->r[29]=0u+0x00000000u; // 801DD5F8
  goto L_801DD634; // 801DD5FC
L_801DD600:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DD600
  c->r[30]=c->r[0]+c->r[26]; // 801DD604
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DD608
  cmpu(c,0,c->r[0],c->r[31]); // 801DD60C
  if (!crb(c,2)) { goto L_801DD62C; } // 801DD610
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DD614
  cmps(c,0,(int32_t)c->r[3],0); // 801DD618
  if (crb(c,2)) { goto L_801DD628; } // 801DD61C
  c->r[4]=0u+0x00000000u; // 801DD620
  c->lr=0x801DD628u; f_801E3FB4(c); // 801DD624
L_801DD628:;
  W32(c->r[30]+0x00000004u,c->r[29]); // 801DD628
L_801DD62C:;
  c->r[26]=c->r[26]+0x0000000Cu; // 801DD62C
  c->r[27]=c->r[27]+0x00000001u; // 801DD630
L_801DD634:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801DD634
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DD638
  if (crb(c,0)) { IRQCHK(c); goto L_801DD600; } // 801DD63C
  goto L_801DD7EC; // 801DD640
L_801DD644:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801DD644
  if (crb(c,2)) { goto L_801DD6E0; } // 801DD648
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD64C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD650
  if (!crb(c,2)) { goto L_801DD694; } // 801DD654
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD658
  cmps(c,0,(int32_t)c->r[0],0); // 801DD65C
  if (crb(c,2)) { goto L_801DD694; } // 801DD660
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DD664
  c->r[5]=c->r[31]|c->r[31]; // 801DD668
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD66C
  c->lr=0x801DD674u; f_801FBA20(c); // 801DD670
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD674
  c->r[5]=c->r[3]|c->r[3]; // 801DD678
  c->r[4]=c->r[30]|c->r[30]; // 801DD67C
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD680
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD684
  c->r[3]=0u+0x00000002u; // 801DD688
  c->ctr=c->r[12]; // 801DD68C
  if (true) { c->lr=0x801DD694u; dispatch(c,c->ctr); } // 801DD690
L_801DD694:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 801DD694
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801DD698
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD69C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DD6A0
  if (!crb(c,1)) { goto L_801DD6BC; } // 801DD6A4
  c->r[3]=c->r[28]|c->r[28]; // 801DD6A8
  c->r[4]=c->r[31]|c->r[31]; // 801DD6AC
  c->r[5]=0u+0x00000001u; // 801DD6B0
  c->lr=0x801DD6B8u; f_801DDCB0(c); // 801DD6B4
  goto L_801DD7EC; // 801DD6B8
L_801DD6BC:;
  if (!crb(c,2)) { goto L_801DD7EC; } // 801DD6BC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD6C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD6C4
  if (crb(c,1)) { goto L_801DD7EC; } // 801DD6C8
  c->r[3]=c->r[28]|c->r[28]; // 801DD6CC
  c->r[4]=c->r[31]|c->r[31]; // 801DD6D0
  c->r[5]=0u+0x00000001u; // 801DD6D4
  c->lr=0x801DD6DCu; f_801DDCB0(c); // 801DD6D8
  goto L_801DD7EC; // 801DD6DC
L_801DD6E0:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD6E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD6E4
  if (!crb(c,2)) { goto L_801DD728; } // 801DD6E8
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD6EC
  cmps(c,0,(int32_t)c->r[0],0); // 801DD6F0
  if (crb(c,2)) { goto L_801DD728; } // 801DD6F4
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DD6F8
  c->r[5]=c->r[31]|c->r[31]; // 801DD6FC
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD700
  c->lr=0x801DD708u; f_801FBA20(c); // 801DD704
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD708
  c->r[5]=c->r[3]|c->r[3]; // 801DD70C
  c->r[4]=c->r[30]|c->r[30]; // 801DD710
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD714
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD718
  c->r[3]=0u+0x00000002u; // 801DD71C
  c->ctr=c->r[12]; // 801DD720
  if (true) { c->lr=0x801DD728u; dispatch(c,c->ctr); } // 801DD724
L_801DD728:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD728
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD72C
  if (!crb(c,2)) { goto L_801DD770; } // 801DD730
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD734
  cmps(c,0,(int32_t)c->r[0],0); // 801DD738
  if (crb(c,2)) { goto L_801DD770; } // 801DD73C
  c->r[3]=R8(c->r[31]+0x00000008u); // 801DD740
  c->r[5]=c->r[31]|c->r[31]; // 801DD744
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD748
  c->lr=0x801DD750u; f_801FBA20(c); // 801DD74C
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD750
  c->r[5]=c->r[3]|c->r[3]; // 801DD754
  c->r[4]=c->r[30]|c->r[30]; // 801DD758
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD75C
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD760
  c->r[3]=0u+0x00000003u; // 801DD764
  c->ctr=c->r[12]; // 801DD768
  if (true) { c->lr=0x801DD770u; dispatch(c,c->ctr); } // 801DD76C
L_801DD770:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD770
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD774
  if (crb(c,1)) { goto L_801DD79C; } // 801DD778
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD77C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801DD780
  if (!crb(c,0)) { goto L_801DD79C; } // 801DD784
  c->r[3]=c->r[28]|c->r[28]; // 801DD788
  c->r[4]=c->r[31]|c->r[31]; // 801DD78C
  c->r[5]=0u+0x00000001u; // 801DD790
  c->lr=0x801DD798u; f_801DDCB0(c); // 801DD794
  goto L_801DD7EC; // 801DD798
L_801DD79C:;
  c->r[30]=0u+0x00000000u; // 801DD79C
  c->r[26]=0u+0x00000000u; // 801DD7A0
  c->r[29]=0u+0x00000000u; // 801DD7A4
  goto L_801DD7E0; // 801DD7A8
L_801DD7AC:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DD7AC
  c->r[27]=c->r[0]+c->r[26]; // 801DD7B0
  c->r[0]=R32(c->r[27]+0x00000004u); // 801DD7B4
  cmpu(c,0,c->r[0],c->r[31]); // 801DD7B8
  if (!crb(c,2)) { goto L_801DD7D8; } // 801DD7BC
  c->r[3]=R32(c->r[27]+0x00000000u); // 801DD7C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DD7C4
  if (crb(c,2)) { goto L_801DD7D4; } // 801DD7C8
  c->r[4]=0u+0x00000000u; // 801DD7CC
  c->lr=0x801DD7D4u; f_801E3FB4(c); // 801DD7D0
L_801DD7D4:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 801DD7D4
L_801DD7D8:;
  c->r[26]=c->r[26]+0x0000000Cu; // 801DD7D8
  c->r[30]=c->r[30]+0x00000001u; // 801DD7DC
L_801DD7E0:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801DD7E0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801DD7E4
  if (crb(c,0)) { IRQCHK(c); goto L_801DD7AC; } // 801DD7E8
L_801DD7EC:;
  c->r[11]=c->r[1]+0x00000020u; // 801DD7EC
  c->lr=0x801DD7F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DD7F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD7F4
  c->lr=c->r[0]; // 801DD7F8
  c->r[1]=c->r[1]+0x00000020u; // 801DD7FC
  return; // 801DD800
}

// fn_801DD804
void f_801DD804(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD804
  c->r[0]=c->lr; // 801DD808
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD80C
  c->r[11]=c->r[1]+0x00000020u; // 801DD810
  c->lr=0x801DD818u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DD814
  c->r[28]=c->r[3]|c->r[3]; // 801DD818
  c->r[29]=c->r[4]|c->r[4]; // 801DD81C
  c->r[30]=c->r[5]|c->r[5]; // 801DD820
  c->r[3]=c->r[3]+0x00000004u; // 801DD824
  c->lr=0x801DD82Cu; f_801DE1A0(c); // 801DD828
  cmps(c,0,(int32_t)c->r[3],0); // 801DD82C
  c->r[31]=c->r[3]|c->r[3]; // 801DD830
  if (crb(c,2)) { goto L_801DDAF8; } // 801DD834
  c->r[4]=R8(c->r[29]+0x00000008u); // 801DD838
  c->r[5]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[5]); // 801DD83C
  if (crb(c,2)) { goto L_801DD860; } // 801DD840
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801DD844
  if (crb(c,2)) { goto L_801DD860; } // 801DD848
  c->r[3]=c->r[28]|c->r[28]; // 801DD84C
  c->r[4]=c->r[31]|c->r[31]; // 801DD850
  c->r[5]=0u+0x00000001u; // 801DD854
  c->lr=0x801DD85Cu; f_801DDCB0(c); // 801DD858
  goto L_801DDAF8; // 801DD85C
L_801DD860:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DD860
  if (crb(c,2)) { goto L_801DD8FC; } // 801DD864
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD868
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD86C
  if (!crb(c,2)) { goto L_801DD8B0; } // 801DD870
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD874
  cmps(c,0,(int32_t)c->r[0],0); // 801DD878
  if (crb(c,2)) { goto L_801DD8B0; } // 801DD87C
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DD880
  c->r[5]=c->r[31]|c->r[31]; // 801DD884
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD888
  c->lr=0x801DD890u; f_801FBA20(c); // 801DD88C
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD890
  c->r[5]=c->r[3]|c->r[3]; // 801DD894
  c->r[4]=c->r[30]|c->r[30]; // 801DD898
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD89C
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD8A0
  c->r[3]=0u+0x00000002u; // 801DD8A4
  c->ctr=c->r[12]; // 801DD8A8
  if (true) { c->lr=0x801DD8B0u; dispatch(c,c->ctr); } // 801DD8AC
L_801DD8B0:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 801DD8B0
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801DD8B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD8B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DD8BC
  if (!crb(c,0)) { goto L_801DD8D8; } // 801DD8C0
  c->r[3]=c->r[28]|c->r[28]; // 801DD8C4
  c->r[4]=c->r[31]|c->r[31]; // 801DD8C8
  c->r[5]=0u+0x00000001u; // 801DD8CC
  c->lr=0x801DD8D4u; f_801DDCB0(c); // 801DD8D0
  goto L_801DDAF8; // 801DD8D4
L_801DD8D8:;
  if (!crb(c,2)) { goto L_801DDAF8; } // 801DD8D8
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DD8DC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801DD8E0
  if (crb(c,1)) { goto L_801DDAF8; } // 801DD8E4
  c->r[3]=c->r[28]|c->r[28]; // 801DD8E8
  c->r[4]=c->r[31]|c->r[31]; // 801DD8EC
  c->r[5]=0u+0x00000001u; // 801DD8F0
  c->lr=0x801DD8F8u; f_801DDCB0(c); // 801DD8F4
  goto L_801DDAF8; // 801DD8F8
L_801DD8FC:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801DD8FC
  if (crb(c,2)) { goto L_801DD9EC; } // 801DD900
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD904
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD908
  if (!crb(c,2)) { goto L_801DD94C; } // 801DD90C
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD910
  cmps(c,0,(int32_t)c->r[0],0); // 801DD914
  if (crb(c,2)) { goto L_801DD94C; } // 801DD918
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DD91C
  c->r[5]=c->r[31]|c->r[31]; // 801DD920
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DD924
  c->lr=0x801DD92Cu; f_801FBA20(c); // 801DD928
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DD92C
  c->r[5]=c->r[3]|c->r[3]; // 801DD930
  c->r[4]=c->r[30]|c->r[30]; // 801DD934
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DD938
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DD93C
  c->r[3]=0u+0x00000003u; // 801DD940
  c->ctr=c->r[12]; // 801DD944
  if (true) { c->lr=0x801DD94Cu; dispatch(c,c->ctr); } // 801DD948
L_801DD94C:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 801DD94C
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801DD950
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD954
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DD958
  if (!crb(c,1)) { goto L_801DD974; } // 801DD95C
  c->r[3]=c->r[28]|c->r[28]; // 801DD960
  c->r[4]=c->r[31]|c->r[31]; // 801DD964
  c->r[5]=0u+0x00000001u; // 801DD968
  c->lr=0x801DD970u; f_801DDCB0(c); // 801DD96C
  goto L_801DDAF8; // 801DD970
L_801DD974:;
  if (!crb(c,2)) { goto L_801DDAF8; } // 801DD974
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD978
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD97C
  if (!crb(c,0)) { goto L_801DD998; } // 801DD980
  c->r[3]=c->r[28]|c->r[28]; // 801DD984
  c->r[4]=c->r[31]|c->r[31]; // 801DD988
  c->r[5]=0u+0x00000001u; // 801DD98C
  c->lr=0x801DD994u; f_801DDCB0(c); // 801DD990
  goto L_801DDAF8; // 801DD994
L_801DD998:;
  c->r[27]=0u+0x00000000u; // 801DD998
  c->r[26]=0u+0x00000000u; // 801DD99C
  c->r[29]=0u+0x00000000u; // 801DD9A0
  goto L_801DD9DC; // 801DD9A4
L_801DD9A8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DD9A8
  c->r[30]=c->r[0]+c->r[26]; // 801DD9AC
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DD9B0
  cmpu(c,0,c->r[0],c->r[31]); // 801DD9B4
  if (!crb(c,2)) { goto L_801DD9D4; } // 801DD9B8
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DD9BC
  cmps(c,0,(int32_t)c->r[3],0); // 801DD9C0
  if (crb(c,2)) { goto L_801DD9D0; } // 801DD9C4
  c->r[4]=0u+0x00000000u; // 801DD9C8
  c->lr=0x801DD9D0u; f_801E3FB4(c); // 801DD9CC
L_801DD9D0:;
  W32(c->r[30]+0x00000004u,c->r[29]); // 801DD9D0
L_801DD9D4:;
  c->r[26]=c->r[26]+0x0000000Cu; // 801DD9D4
  c->r[27]=c->r[27]+0x00000001u; // 801DD9D8
L_801DD9DC:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801DD9DC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DD9E0
  if (crb(c,0)) { IRQCHK(c); goto L_801DD9A8; } // 801DD9E4
  goto L_801DDAF8; // 801DD9E8
L_801DD9EC:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DD9EC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DD9F0
  if (!crb(c,2)) { goto L_801DDA34; } // 801DD9F4
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DD9F8
  cmps(c,0,(int32_t)c->r[0],0); // 801DD9FC
  if (crb(c,2)) { goto L_801DDA34; } // 801DDA00
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DDA04
  c->r[5]=c->r[31]|c->r[31]; // 801DDA08
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DDA0C
  c->lr=0x801DDA14u; f_801FBA20(c); // 801DDA10
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DDA14
  c->r[5]=c->r[3]|c->r[3]; // 801DDA18
  c->r[4]=c->r[30]|c->r[30]; // 801DDA1C
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DDA20
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DDA24
  c->r[3]=0u+0x00000003u; // 801DDA28
  c->ctr=c->r[12]; // 801DDA2C
  if (true) { c->lr=0x801DDA34u; dispatch(c,c->ctr); } // 801DDA30
L_801DDA34:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DDA34
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DDA38
  if (!crb(c,2)) { goto L_801DDA7C; } // 801DDA3C
  c->r[0]=R32(c->r[28]+0x00000020u); // 801DDA40
  cmps(c,0,(int32_t)c->r[0],0); // 801DDA44
  if (crb(c,2)) { goto L_801DDA7C; } // 801DDA48
  c->r[3]=R8(c->r[31]+0x00000008u); // 801DDA4C
  c->r[5]=c->r[31]|c->r[31]; // 801DDA50
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801DDA54
  c->lr=0x801DDA5Cu; f_801FBA20(c); // 801DDA58
  c->r[12]=R32(c->r[28]+0x00000020u); // 801DDA5C
  c->r[5]=c->r[3]|c->r[3]; // 801DDA60
  c->r[4]=c->r[30]|c->r[30]; // 801DDA64
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DDA68
  c->r[7]=R32(c->r[28]+0x00000024u); // 801DDA6C
  c->r[3]=0u+0x00000002u; // 801DDA70
  c->ctr=c->r[12]; // 801DDA74
  if (true) { c->lr=0x801DDA7Cu; dispatch(c,c->ctr); } // 801DDA78
L_801DDA7C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DDA7C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801DDA80
  if (!crb(c,0)) { goto L_801DDAA8; } // 801DDA84
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DDA88
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801DDA8C
  if (crb(c,1)) { goto L_801DDAA8; } // 801DDA90
  c->r[3]=c->r[28]|c->r[28]; // 801DDA94
  c->r[4]=c->r[31]|c->r[31]; // 801DDA98
  c->r[5]=0u+0x00000001u; // 801DDA9C
  c->lr=0x801DDAA4u; f_801DDCB0(c); // 801DDAA0
  goto L_801DDAF8; // 801DDAA4
L_801DDAA8:;
  c->r[30]=0u+0x00000000u; // 801DDAA8
  c->r[26]=0u+0x00000000u; // 801DDAAC
  c->r[29]=0u+0x00000000u; // 801DDAB0
  goto L_801DDAEC; // 801DDAB4
L_801DDAB8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801DDAB8
  c->r[27]=c->r[0]+c->r[26]; // 801DDABC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801DDAC0
  cmpu(c,0,c->r[0],c->r[31]); // 801DDAC4
  if (!crb(c,2)) { goto L_801DDAE4; } // 801DDAC8
  c->r[3]=R32(c->r[27]+0x00000000u); // 801DDACC
  cmps(c,0,(int32_t)c->r[3],0); // 801DDAD0
  if (crb(c,2)) { goto L_801DDAE0; } // 801DDAD4
  c->r[4]=0u+0x00000000u; // 801DDAD8
  c->lr=0x801DDAE0u; f_801E3FB4(c); // 801DDADC
L_801DDAE0:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 801DDAE0
L_801DDAE4:;
  c->r[26]=c->r[26]+0x0000000Cu; // 801DDAE4
  c->r[30]=c->r[30]+0x00000001u; // 801DDAE8
L_801DDAEC:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801DDAEC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801DDAF0
  if (crb(c,0)) { IRQCHK(c); goto L_801DDAB8; } // 801DDAF4
L_801DDAF8:;
  c->r[11]=c->r[1]+0x00000020u; // 801DDAF8
  c->lr=0x801DDB00u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DDAFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DDB00
  c->lr=c->r[0]; // 801DDB04
  c->r[1]=c->r[1]+0x00000020u; // 801DDB08
  return; // 801DDB0C
}

// fn_801DDB10
void f_801DDB10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDB10
  c->r[0]=c->lr; // 801DDB14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DDB18
  c->r[11]=c->r[1]+0x00000030u; // 801DDB1C
  c->lr=0x801DDB24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DDB20
  c->r[6]=R32(c->r[3]+0x00000014u); // 801DDB24
  c->r[31]=c->r[5]|c->r[5]; // 801DDB28
  c->r[29]=c->r[3]|c->r[3]; // 801DDB2C
  c->r[30]=c->r[4]|c->r[4]; // 801DDB30
  c->r[7]=0u+0x00000080u; // 801DDB34
  c->r[27]=0u+0xFFFFFFFFu; // 801DDB38
  c->r[8]=0u+0x00000000u; // 801DDB3C
  c->r[5]=0u+0x00000000u; // 801DDB40
  c->ctr=c->r[6]; // 801DDB44
  cmps(c,0,(int32_t)c->r[6],0); // 801DDB48
  if (!crb(c,1)) { goto L_801DDB8C; } // 801DDB4C
L_801DDB50:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 801DDB50
  c->r[4]=R32(c->r[4]+c->r[5]); // 801DDB54
  cmps(c,0,(int32_t)c->r[4],0); // 801DDB58
  if (crb(c,2)) { goto L_801DDB8C; } // 801DDB5C
  if (crb(c,2)) { goto L_801DDB6C; } // 801DDB60
  c->r[0]=R8(c->r[4]+0x0000008Cu); // 801DDB64
  goto L_801DDB70; // 801DDB68
L_801DDB6C:;
  c->r[0]=0u+0x00000000u; // 801DDB6C
L_801DDB70:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DDB70
  if (!crb(c,1)) { goto L_801DDB80; } // 801DDB74
  c->r[27]=c->r[8]|c->r[8]; // 801DDB78
  c->r[7]=c->r[0]|c->r[0]; // 801DDB7C
L_801DDB80:;
  c->r[5]=c->r[5]+0x0000000Cu; // 801DDB80
  c->r[8]=c->r[8]+0x00000001u; // 801DDB84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DDB50; } // 801DDB88
L_801DDB8C:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[6]); // 801DDB8C
  if (!crb(c,2)) { goto L_801DDBC0; } // 801DDB90
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 801DDB94
  c->r[3]=R32(c->r[3]+0x00000010u); // 801DDB98
  c->r[28]=c->r[3]+c->r[0]; // 801DDB9C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801DDBA0
  cmps(c,0,(int32_t)c->r[3],0); // 801DDBA4
  if (crb(c,2)) { goto L_801DDBB4; } // 801DDBA8
  c->r[4]=0u+0x00000000u; // 801DDBAC
  c->lr=0x801DDBB4u; f_801E3FB4(c); // 801DDBB0
L_801DDBB4:;
  c->r[0]=0u+0x00000000u; // 801DDBB4
  c->r[8]=c->r[27]|c->r[27]; // 801DDBB8
  W32(c->r[28]+0x00000004u,c->r[0]); // 801DDBBC
L_801DDBC0:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 801DDBC0
  c->r[3]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 801DDBC4
  c->r[4]=R32(c->r[29]+0x00000010u); // 801DDBC8
  c->r[0]=c->r[5]+0x00010000u; // 801DDBCC
  c->r[29]=R32(c->r[29]+0x00000000u); // 801DDBD0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DDBD4
  c->r[28]=c->r[4]+c->r[3]; // 801DDBD8
  if (!crb(c,2)) { goto L_801DDC14; } // 801DDBDC
  c->r[3]=R8(c->r[30]+0x00000008u); // 801DDBE0
  c->r[5]=c->r[30]|c->r[30]; // 801DDBE4
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801DDBE8
  c->lr=0x801DDBF0u; f_801FBA20(c); // 801DDBEC
  c->r[5]=c->r[3]|c->r[3]; // 801DDBF0
  c->r[3]=c->r[29]|c->r[29]; // 801DDBF4
  c->r[4]=c->r[28]|c->r[28]; // 801DDBF8
  c->r[6]=0u+0x00000000u; // 801DDBFC
  c->lr=0x801DDC04u; f_801F324C(c); // 801DDC00
  c->r[0]=cntlz(c->r[3]); // 801DDC04
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801DDC08
  if (!crb(c,2)) { goto L_801DDC30; } // 801DDC0C
  goto L_801DDC98; // 801DDC10
L_801DDC14:;
  c->r[3]=c->r[29]|c->r[29]; // 801DDC14
  c->r[4]=c->r[28]|c->r[28]; // 801DDC18
  c->r[6]=0u+0x00000000u; // 801DDC1C
  c->lr=0x801DDC24u; f_801F31EC(c); // 801DDC20
  c->r[0]=cntlz(c->r[3]); // 801DDC24
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801DDC28
  if (crb(c,2)) { goto L_801DDC98; } // 801DDC2C
L_801DDC30:;
  c->r[4]=R8(c->r[30]+0x00000010u); // 801DDC30
  cmpu(c,0,c->r[4],0x00000080u); // 801DDC34
  if (!crb(c,0)) { goto L_801DDC70; } // 801DDC38
  c->r[0]=0u+0x43300000u; // 801DDC3C
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DDC40
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DDC44
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[2]=RF64(ea);} // 801DDC48
  cmps(c,0,(int32_t)c->r[3],0); // 801DDC4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DDC50
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DDC54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DDC58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DDC5C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801DDC60
  if (crb(c,2)) { goto L_801DDC70; } // 801DDC64
  c->r[4]=0u+0x00000000u; // 801DDC68
  c->lr=0x801DDC70u; f_801E5034(c); // 801DDC6C
L_801DDC70:;
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DDC70
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DDC74
  fcmp(c,0,c->f[0],c->f[1]); // 801DDC78
  if (crb(c,2)) { goto L_801DDC90; } // 801DDC7C
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DDC80
  cmps(c,0,(int32_t)c->r[3],0); // 801DDC84
  if (crb(c,2)) { goto L_801DDC90; } // 801DDC88
  c->lr=0x801DDC90u; f_801E50D8(c); // 801DDC8C
L_801DDC90:;
  W32(c->r[28]+0x00000004u,c->r[30]); // 801DDC90
  W8(c->r[28]+0x00000008u,c->r[31]); // 801DDC94
L_801DDC98:;
  c->r[11]=c->r[1]+0x00000030u; // 801DDC98
  c->lr=0x801DDCA0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DDC9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DDCA0
  c->lr=c->r[0]; // 801DDCA4
  c->r[1]=c->r[1]+0x00000030u; // 801DDCA8
  return; // 801DDCAC
}

// fn_801DDCB0
void f_801DDCB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDCB0
  c->r[0]=c->lr; // 801DDCB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DDCB8
  c->r[11]=c->r[1]+0x00000030u; // 801DDCBC
  c->lr=0x801DDCC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DDCC0
  c->r[7]=R32(c->r[3]+0x00000014u); // 801DDCC4
  c->r[29]=c->r[3]|c->r[3]; // 801DDCC8
  c->r[30]=c->r[4]|c->r[4]; // 801DDCCC
  c->r[31]=c->r[5]|c->r[5]; // 801DDCD0
  c->r[8]=0u+0x00000080u; // 801DDCD4
  c->r[27]=0u+0xFFFFFFFFu; // 801DDCD8
  c->r[9]=0u+0x00000000u; // 801DDCDC
  c->r[6]=0u+0x00000000u; // 801DDCE0
  c->ctr=c->r[7]; // 801DDCE4
  cmps(c,0,(int32_t)c->r[7],0); // 801DDCE8
  if (!crb(c,1)) { goto L_801DDD48; } // 801DDCEC
L_801DDCF0:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 801DDCF0
  c->r[5]=c->r[0]+c->r[6]; // 801DDCF4
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DDCF8
  cmpu(c,0,c->r[4],c->r[0]); // 801DDCFC
  if (crb(c,2)) { goto L_801DDE60; } // 801DDD00
  c->r[5]=R32(c->r[5]+0x00000000u); // 801DDD04
  cmps(c,0,(int32_t)c->r[5],0); // 801DDD08
  if (!crb(c,2)) { goto L_801DDD1C; } // 801DDD0C
  c->r[27]=c->r[9]|c->r[9]; // 801DDD10
  c->r[8]=0u+0xFFFFFFFFu; // 801DDD14
  goto L_801DDD3C; // 801DDD18
L_801DDD1C:;
  if (crb(c,2)) { goto L_801DDD28; } // 801DDD1C
  c->r[0]=R8(c->r[5]+0x0000008Cu); // 801DDD20
  goto L_801DDD2C; // 801DDD24
L_801DDD28:;
  c->r[0]=0u+0x00000000u; // 801DDD28
L_801DDD2C:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DDD2C
  if (!crb(c,1)) { goto L_801DDD3C; } // 801DDD30
  c->r[27]=c->r[9]|c->r[9]; // 801DDD34
  c->r[8]=c->r[0]|c->r[0]; // 801DDD38
L_801DDD3C:;
  c->r[6]=c->r[6]+0x0000000Cu; // 801DDD3C
  c->r[9]=c->r[9]+0x00000001u; // 801DDD40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DDCF0; } // 801DDD44
L_801DDD48:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 801DDD48
  if (!crb(c,2)) { goto L_801DDD7C; } // 801DDD4C
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 801DDD50
  c->r[3]=R32(c->r[3]+0x00000010u); // 801DDD54
  c->r[28]=c->r[3]+c->r[0]; // 801DDD58
  c->r[3]=R32(c->r[3]+c->r[0]); // 801DDD5C
  cmps(c,0,(int32_t)c->r[3],0); // 801DDD60
  if (crb(c,2)) { goto L_801DDD70; } // 801DDD64
  c->r[4]=0u+0x00000000u; // 801DDD68
  c->lr=0x801DDD70u; f_801E3FB4(c); // 801DDD6C
L_801DDD70:;
  c->r[0]=0u+0x00000000u; // 801DDD70
  c->r[9]=c->r[27]|c->r[27]; // 801DDD74
  W32(c->r[28]+0x00000004u,c->r[0]); // 801DDD78
L_801DDD7C:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 801DDD7C
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801DDD80
  c->r[4]=R32(c->r[29]+0x00000010u); // 801DDD84
  c->r[0]=c->r[5]+0x00010000u; // 801DDD88
  c->r[29]=R32(c->r[29]+0x00000000u); // 801DDD8C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DDD90
  c->r[28]=c->r[4]+c->r[3]; // 801DDD94
  if (!crb(c,2)) { goto L_801DDDD0; } // 801DDD98
  c->r[3]=R8(c->r[30]+0x00000008u); // 801DDD9C
  c->r[5]=c->r[30]|c->r[30]; // 801DDDA0
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801DDDA4
  c->lr=0x801DDDACu; f_801FBA20(c); // 801DDDA8
  c->r[5]=c->r[3]|c->r[3]; // 801DDDAC
  c->r[3]=c->r[29]|c->r[29]; // 801DDDB0
  c->r[4]=c->r[28]|c->r[28]; // 801DDDB4
  c->r[6]=0u+0x00000000u; // 801DDDB8
  c->lr=0x801DDDC0u; f_801F33A0(c); // 801DDDBC
  c->r[0]=cntlz(c->r[3]); // 801DDDC0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801DDDC4
  if (!crb(c,2)) { goto L_801DDDEC; } // 801DDDC8
  goto L_801DDE60; // 801DDDCC
L_801DDDD0:;
  c->r[3]=c->r[29]|c->r[29]; // 801DDDD0
  c->r[4]=c->r[28]|c->r[28]; // 801DDDD4
  c->r[6]=0u+0x00000000u; // 801DDDD8
  c->lr=0x801DDDE0u; f_801F32F8(c); // 801DDDDC
  c->r[0]=cntlz(c->r[3]); // 801DDDE0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801DDDE4
  if (crb(c,2)) { goto L_801DDE60; } // 801DDDE8
L_801DDDEC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DDDEC
  c->r[4]=0u+0x00000000u; // 801DDDF0
  c->lr=0x801DDDF8u; f_801E4400(c); // 801DDDF4
  c->r[4]=R8(c->r[30]+0x00000010u); // 801DDDF8
  cmpu(c,0,c->r[4],0x00000080u); // 801DDDFC
  if (!crb(c,0)) { goto L_801DDE38; } // 801DDE00
  c->r[0]=0u+0x43300000u; // 801DDE04
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DDE08
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DDE0C
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[2]=RF64(ea);} // 801DDE10
  cmps(c,0,(int32_t)c->r[3],0); // 801DDE14
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DDE18
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DDE1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DDE20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DDE24
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801DDE28
  if (crb(c,2)) { goto L_801DDE38; } // 801DDE2C
  c->r[4]=0u+0x00000000u; // 801DDE30
  c->lr=0x801DDE38u; f_801E5034(c); // 801DDE34
L_801DDE38:;
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DDE38
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DDE3C
  fcmp(c,0,c->f[0],c->f[1]); // 801DDE40
  if (crb(c,2)) { goto L_801DDE58; } // 801DDE44
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DDE48
  cmps(c,0,(int32_t)c->r[3],0); // 801DDE4C
  if (crb(c,2)) { goto L_801DDE58; } // 801DDE50
  c->lr=0x801DDE58u; f_801E50D8(c); // 801DDE54
L_801DDE58:;
  W32(c->r[28]+0x00000004u,c->r[30]); // 801DDE58
  W8(c->r[28]+0x00000008u,c->r[31]); // 801DDE5C
L_801DDE60:;
  c->r[11]=c->r[1]+0x00000030u; // 801DDE60
  c->lr=0x801DDE68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DDE64
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DDE68
  c->lr=c->r[0]; // 801DDE6C
  c->r[1]=c->r[1]+0x00000030u; // 801DDE70
  return; // 801DDE74
}

// fn_801DDE78
void f_801DDE78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDE78
  c->r[0]=c->lr; // 801DDE7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DDE80
  c->r[11]=c->r[1]+0x00000020u; // 801DDE84
  c->lr=0x801DDE8Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DDE88
  c->r[27]=c->r[3]|c->r[3]; // 801DDE8C
  c->r[28]=0u+0x00000000u; // 801DDE90
  c->r[29]=0u+0x00000000u; // 801DDE94
  c->r[31]=0u+0x00000000u; // 801DDE98
  goto L_801DDEC8; // 801DDE9C
L_801DDEA0:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 801DDEA0
  c->r[3]=R32(c->r[29]+c->r[0]); // 801DDEA4
  c->r[30]=c->r[0]+c->r[29]; // 801DDEA8
  cmps(c,0,(int32_t)c->r[3],0); // 801DDEAC
  if (crb(c,2)) { goto L_801DDEBC; } // 801DDEB0
  c->r[4]=0u+0x00000000u; // 801DDEB4
  c->lr=0x801DDEBCu; f_801E3FB4(c); // 801DDEB8
L_801DDEBC:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 801DDEBC
  c->r[29]=c->r[29]+0x0000000Cu; // 801DDEC0
  c->r[28]=c->r[28]+0x00000001u; // 801DDEC4
L_801DDEC8:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 801DDEC8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801DDECC
  if (crb(c,0)) { IRQCHK(c); goto L_801DDEA0; } // 801DDED0
  c->r[11]=c->r[1]+0x00000020u; // 801DDED4
  c->lr=0x801DDEDCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DDED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DDEDC
  c->lr=c->r[0]; // 801DDEE0
  c->r[1]=c->r[1]+0x00000020u; // 801DDEE4
  return; // 801DDEE8
}

// fn_801DDEEC
void f_801DDEEC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801DDEEC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DDEF0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DDEF4
  W8(c->r[3]+0x00000008u,c->r[0]); // 801DDEF8
  return; // 801DDEFC
}

// fn_801DDF00
void f_801DDF00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDF00
  c->r[0]=c->lr; // 801DDF04
  cmps(c,0,(int32_t)c->r[3],0); // 801DDF08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DDF0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DDF10
  c->r[31]=c->r[4]|c->r[4]; // 801DDF14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DDF18
  c->r[30]=c->r[3]|c->r[3]; // 801DDF1C
  if (crb(c,2)) { goto L_801DDF6C; } // 801DDF20
  c->r[4]=R32(c->r[3]+0x00000000u); // 801DDF24
  cmps(c,1,(int32_t)c->r[4],0); // 801DDF28
  if (crb(c,6)) { goto L_801DDF4C; } // 801DDF2C
  c->r[0]=R8(c->r[3]+0x00000008u); // 801DDF30
  cmps(c,0,(int32_t)c->r[0],0); // 801DDF34
  if (crb(c,2)) { goto L_801DDF4C; } // 801DDF38
  if (crb(c,6)) { goto L_801DDF4C; } // 801DDF3C
  c->r[3]=c->r[4]|c->r[4]; // 801DDF40
  c->r[4]=0u+0x00000000u; // 801DDF44
  c->lr=0x801DDF4Cu; f_801E3FB4(c); // 801DDF48
L_801DDF4C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DDF4C
  if (crb(c,2)) { goto L_801DDF5C; } // 801DDF50
  c->r[3]=c->r[30]|c->r[30]; // 801DDF54
  c->lr=0x801DDF5Cu; f_801F270C(c); // 801DDF58
L_801DDF5C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DDF5C
  if (!crb(c,1)) { goto L_801DDF6C; } // 801DDF60
  c->r[3]=c->r[30]|c->r[30]; // 801DDF64
  c->lr=0x801DDF6Cu; f_8009230C(c); // 801DDF68
L_801DDF6C:;
  c->r[3]=c->r[30]|c->r[30]; // 801DDF6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DDF70
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DDF74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DDF78
  c->lr=c->r[0]; // 801DDF7C
  c->r[1]=c->r[1]+0x00000010u; // 801DDF80
  return; // 801DDF84
}

// fn_801DDF88
void f_801DDF88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDF88
  c->r[0]=c->lr; // 801DDF8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DDF90
  c->r[11]=c->r[1]+0x00000020u; // 801DDF94
  c->lr=0x801DDF9Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DDF98
  cmps(c,0,(int32_t)c->r[3],0); // 801DDF9C
  c->r[26]=c->r[4]|c->r[4]; // 801DDFA0
  if (crb(c,2)) { goto L_801DE064; } // 801DDFA4
  c->r[4]=R32(c->r[3]+0x00000000u); // 801DDFA8
  c->r[0]=c->r[4]+0xADBF0000u; // 801DDFAC
  cmpu(c,0,c->r[0],0x00005344u); // 801DDFB0
  if (crb(c,2)) { goto L_801DDFC0; } // 801DDFB4
  c->r[0]=0u+0x00000000u; // 801DDFB8
  goto L_801DDFEC; // 801DDFBC
L_801DDFC0:;
  c->r[5]=R16(c->r[3]+0x00000006u); // 801DDFC0
  cmpu(c,0,c->r[5],0x00000100u); // 801DDFC4
  if (!crb(c,0)) { goto L_801DDFD4; } // 801DDFC8
  c->r[0]=0u+0x00000000u; // 801DDFCC
  goto L_801DDFEC; // 801DDFD0
L_801DDFD4:;
  c->r[0]=addc(c,~c->r[5],0x00000100u,1); // 801DDFD4
  c->r[4]=0u+0x00000100u; // 801DDFD8
  c->r[4]=c->r[4]|~c->r[5]; // 801DDFDC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801DDFE0
  c->r[0]=c->r[4]-c->r[0]; // 801DDFE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DDFE8
L_801DDFEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DDFEC
  if (crb(c,2)) { goto L_801DE064; } // 801DDFF0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801DDFF4
  c->r[28]=c->r[0]+c->r[3]; // 801DDFF8
  c->r[3]=R8(c->r[28]+0x0000000Cu); // 801DDFFC
  c->r[5]=c->r[28]+0x00000008u; // 801DE000
  c->r[4]=R32(c->r[28]+0x00000010u); // 801DE004
  c->lr=0x801DE00Cu; f_801FB9FC(c); // 801DE008
  c->r[31]=c->r[3]|c->r[3]; // 801DE00C
  c->r[27]=0u+0x00000000u; // 801DE010
  c->r[29]=c->r[31]|c->r[31]; // 801DE014
  goto L_801DE058; // 801DE018
L_801DE01C:;
  c->r[3]=R8(c->r[29]+0x00000010u); // 801DE01C
  c->r[5]=c->r[28]+0x00000008u; // 801DE020
  c->r[4]=R32(c->r[29]+0x00000014u); // 801DE024
  c->lr=0x801DE02Cu; f_801FB9FC(c); // 801DE028
  c->r[30]=c->r[3]|c->r[3]; // 801DE02C
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DE030
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801DE034
  c->r[5]=c->r[30]|c->r[30]; // 801DE038
  c->lr=0x801DE040u; f_801FBA20(c); // 801DE03C
  c->r[4]=c->r[3]|c->r[3]; // 801DE040
  c->r[3]=c->r[26]|c->r[26]; // 801DE044
  c->lr=0x801DE04Cu; f_801EED1C(c); // 801DE048
  W32(c->r[30]+0x00000004u,c->r[3]); // 801DE04C
  c->r[29]=c->r[29]+0x00000014u; // 801DE050
  c->r[27]=c->r[27]+0x00000001u; // 801DE054
L_801DE058:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DE058
  cmpu(c,0,c->r[27],c->r[0]); // 801DE05C
  if (crb(c,0)) { IRQCHK(c); goto L_801DE01C; } // 801DE060
L_801DE064:;
  c->r[11]=c->r[1]+0x00000020u; // 801DE064
  c->lr=0x801DE06Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DE068
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE06C
  c->lr=c->r[0]; // 801DE070
  c->r[1]=c->r[1]+0x00000020u; // 801DE074
  return; // 801DE078
}

// fn_801DE07C
void f_801DE07C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801DE07C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DE080
  return; // 801DE084
}

// fn_801DE088
void f_801DE088(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000000u); // 801DE088
  c->r[0]=c->r[5]+0xADBF0000u; // 801DE08C
  cmpu(c,0,c->r[0],0x00005344u); // 801DE090
  if (crb(c,2)) { goto L_801DE0A0; } // 801DE094
  c->r[0]=0u+0x00000000u; // 801DE098
  goto L_801DE0CC; // 801DE09C
L_801DE0A0:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 801DE0A0
  cmpu(c,0,c->r[6],0x00000100u); // 801DE0A4
  if (!crb(c,0)) { goto L_801DE0B4; } // 801DE0A8
  c->r[0]=0u+0x00000000u; // 801DE0AC
  goto L_801DE0CC; // 801DE0B0
L_801DE0B4:;
  c->r[0]=addc(c,~c->r[6],0x00000100u,1); // 801DE0B4
  c->r[5]=0u+0x00000100u; // 801DE0B8
  c->r[5]=c->r[5]|~c->r[6]; // 801DE0BC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801DE0C0
  c->r[0]=c->r[5]-c->r[0]; // 801DE0C4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DE0C8
L_801DE0CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DE0CC
  if (!crb(c,2)) { goto L_801DE0DC; } // 801DE0D0
  c->r[3]=0u+0x00000000u; // 801DE0D4
  return; // 801DE0D8
L_801DE0DC:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 801DE0DC
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DE0E0
  c->r[0]=c->r[0]+c->r[4]; // 801DE0E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DE0E8
  c->r[3]=0u+0x00000001u; // 801DE0EC
  return; // 801DE0F0
}

// fn_801DE0F4
void f_801DE0F4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801DE0F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DE0F8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DE0FC
  return; // 801DE100
}

// fn_801DE104
void f_801DE104(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE104
  c->r[0]=c->lr; // 801DE108
  c->r[4]=R32(c->r[3]+0x00000004u); // 801DE10C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE110
  cmps(c,0,(int32_t)c->r[4],0); // 801DE114
  if (!crb(c,2)) { goto L_801DE124; } // 801DE118
  c->r[3]=0u+0x00000000u; // 801DE11C
  goto L_801DE134; // 801DE120
L_801DE124:;
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 801DE124
  c->r[5]=c->r[4]+0x00000008u; // 801DE128
  c->r[4]=R32(c->r[4]+0x00000010u); // 801DE12C
  c->lr=0x801DE134u; f_801FBA20(c); // 801DE130
L_801DE134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE134
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DE138
  c->lr=c->r[0]; // 801DE13C
  c->r[1]=c->r[1]+0x00000010u; // 801DE140
  return; // 801DE144
}

// fn_801DE148
void f_801DE148(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE148
  c->r[0]=c->lr; // 801DE14C
  c->r[6]=R32(c->r[3]+0x00000004u); // 801DE150
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE154
  cmps(c,0,(int32_t)c->r[6],0); // 801DE158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE15C
  c->r[31]=c->r[4]|c->r[4]; // 801DE160
  if (!crb(c,2)) { goto L_801DE170; } // 801DE164
  c->r[3]=0u+0x00000000u; // 801DE168
  goto L_801DE180; // 801DE16C
L_801DE170:;
  c->r[3]=R8(c->r[6]+0x0000000Cu); // 801DE170
  c->r[5]=c->r[6]+0x00000008u; // 801DE174
  c->r[4]=R32(c->r[6]+0x00000010u); // 801DE178
  c->lr=0x801DE180u; f_801FBA20(c); // 801DE17C
L_801DE180:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 801DE180
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE184
  c->r[3]=c->r[3]+c->r[0]; // 801DE188
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE18C
  c->r[3]=c->r[3]+0x00000004u; // 801DE190
  c->lr=c->r[0]; // 801DE194
  c->r[1]=c->r[1]+0x00000010u; // 801DE198
  return; // 801DE19C
}

// fn_801DE1A0
void f_801DE1A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE1A0
  c->r[0]=c->lr; // 801DE1A4
  cmps(c,0,(int32_t)c->r[4],0); // 801DE1A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE1AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE1B0
  c->r[31]=c->r[4]|c->r[4]; // 801DE1B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE1B8
  c->r[30]=c->r[3]|c->r[3]; // 801DE1BC
  if (!crb(c,2)) { goto L_801DE1CC; } // 801DE1C0
  c->r[3]=0u+0x00000000u; // 801DE1C4
  goto L_801DE1FC; // 801DE1C8
L_801DE1CC:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801DE1CC
  cmps(c,0,(int32_t)c->r[4],0); // 801DE1D0
  if (crb(c,2)) { goto L_801DE1E8; } // 801DE1D4
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 801DE1D8
  c->r[5]=c->r[4]+0x00000008u; // 801DE1DC
  c->r[4]=R32(c->r[4]+0x00000010u); // 801DE1E0
  c->lr=0x801DE1E8u; f_801FBA20(c); // 801DE1E4
L_801DE1E8:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 801DE1E8
  c->r[3]=R8(c->r[31]+0x0000000Cu); // 801DE1EC
  c->r[4]=R32(c->r[31]+0x00000010u); // 801DE1F0
  c->r[5]=c->r[5]+0x00000008u; // 801DE1F4
  c->lr=0x801DE1FCu; f_801FBA20(c); // 801DE1F8
L_801DE1FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE1FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE200
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE204
  c->lr=c->r[0]; // 801DE208
  c->r[1]=c->r[1]+0x00000010u; // 801DE20C
  return; // 801DE210
}

// fn_801DE214
void f_801DE214(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE214
  c->r[0]=c->lr; // 801DE218
  c->r[6]=0u+0x00000000u; // 801DE21C
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE220
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE224
  c->r[7]=c->r[3]+0x00000064u; // 801DE228
  c->r[4]=c->r[3]+0x00000084u; // 801DE22C
  c->r[8]=c->r[3]+0x0000000Cu; // 801DE230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE234
  c->r[5]=0u+0x00000001u; // 801DE238
  c->r[0]=0u+0xFFFFFFFFu; // 801DE23C
  cmpu(c,0,c->r[7],c->r[4]); // 801DE240
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 801DE244
  c->r[31]=c->r[3]|c->r[3]; // 801DE248
  W32(c->r[3]+0x00000010u,c->r[6]); // 801DE24C
  W32(c->r[3]+0x00000000u,c->r[6]); // 801DE250
  W32(c->r[3]+0x00000004u,c->r[6]); // 801DE254
  W32(c->r[3]+0x00000008u,c->r[6]); // 801DE258
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 801DE25C
  W32(c->r[3]+0x00000010u,c->r[8]); // 801DE260
  W8(c->r[3]+0x00000018u,c->r[6]); // 801DE264
  W8(c->r[3]+0x00000019u,c->r[5]); // 801DE268
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801DE26C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801DE270
  W32(c->r[3]+0x00000024u,c->r[6]); // 801DE274
  W32(c->r[3]+0x00000028u,c->r[6]); // 801DE278
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801DE27C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801DE280
  W32(c->r[3]+0x00000034u,c->r[6]); // 801DE284
  W32(c->r[3]+0x00000038u,c->r[6]); // 801DE288
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801DE28C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801DE290
  W32(c->r[3]+0x00000044u,c->r[6]); // 801DE294
  W32(c->r[3]+0x00000048u,c->r[6]); // 801DE298
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 801DE29C
  W32(c->r[3]+0x00000050u,c->r[0]); // 801DE2A0
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801DE2A4
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801DE2A8
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 801DE2AC
  W32(c->r[3]+0x00000060u,c->r[6]); // 801DE2B0
  if (!crb(c,0)) { goto L_801DE42C; } // 801DE2B4
  c->r[6]=c->r[3]+0x00000064u; // 801DE2B8
  c->r[5]=c->r[3]+0x00000004u; // 801DE2BC
  c->r[8]=c->r[4]-c->r[6]; // 801DE2C0
  c->r[9]=c->r[8]+0x0000000Fu; // 801DE2C4
  c->r[0]=sraw(c,c->r[9],4); // 801DE2C8
  c->r[10]=addc(c,c->r[0],0,c->xer_ca); // 801DE2CC
  c->r[11]=c->r[10]+0x00000001u; // 801DE2D0
  cmps(c,0,(int32_t)c->r[11],8); // 801DE2D4
  if (!crb(c,1)) { goto L_801DE3F0; } // 801DE2D8
  cmpu(c,0,c->r[6],c->r[4]); // 801DE2DC
  c->r[4]=0u+0x00000000u; // 801DE2E0
  c->r[6]=0u+0x00000000u; // 801DE2E4
  if (crb(c,1)) { goto L_801DE310; } // 801DE2E8
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 801DE2EC
  c->r[8]=0u+0x00000001u; // 801DE2F0
  if (!crb(c,2)) { goto L_801DE304; } // 801DE2F4
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 801DE2F8
  if (crb(c,2)) { goto L_801DE304; } // 801DE2FC
  c->r[8]=0u+0x00000000u; // 801DE300
L_801DE304:;
  cmps(c,0,(int32_t)c->r[8],0); // 801DE304
  if (crb(c,2)) { goto L_801DE310; } // 801DE308
  c->r[6]=0u+0x00000001u; // 801DE30C
L_801DE310:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DE310
  if (crb(c,2)) { goto L_801DE340; } // 801DE314
  c->r[8]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[8]); // 801DE318
  c->r[6]=0u+0x00000001u; // 801DE31C
  if (!crb(c,2)) { goto L_801DE334; } // 801DE320
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 801DE324
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DE328
  if (crb(c,2)) { goto L_801DE334; } // 801DE32C
  c->r[6]=0u+0x00000000u; // 801DE330
L_801DE334:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DE334
  if (crb(c,2)) { goto L_801DE340; } // 801DE338
  c->r[4]=0u+0x00000001u; // 801DE33C
L_801DE340:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DE340
  if (crb(c,2)) { goto L_801DE3F0; } // 801DE344
  c->r[0]=c->r[5]+0x0000007Fu; // 801DE348
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE34C
  c->r[0]=c->r[0]-c->r[7]; // 801DE350
  c->r[4]=0u+0x00000000u; // 801DE354
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 801DE358
  c->ctr=c->r[0]; // 801DE35C
  cmpu(c,0,c->r[7],c->r[5]); // 801DE360
  if (!crb(c,0)) { goto L_801DE3F0; } // 801DE364
L_801DE368:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 801DE368
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 801DE36C
  W32(c->r[7]+0x00000008u,c->r[4]); // 801DE370
  W32(c->r[7]+0x0000000Cu,c->r[4]); // 801DE374
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 801DE378
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 801DE37C
  W32(c->r[7]+0x00000018u,c->r[4]); // 801DE380
  W32(c->r[7]+0x0000001Cu,c->r[4]); // 801DE384
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 801DE388
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 801DE38C
  W32(c->r[7]+0x00000028u,c->r[4]); // 801DE390
  W32(c->r[7]+0x0000002Cu,c->r[4]); // 801DE394
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[0]);} // 801DE398
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 801DE39C
  W32(c->r[7]+0x00000038u,c->r[4]); // 801DE3A0
  W32(c->r[7]+0x0000003Cu,c->r[4]); // 801DE3A4
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[0]);} // 801DE3A8
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[0]);} // 801DE3AC
  W32(c->r[7]+0x00000048u,c->r[4]); // 801DE3B0
  W32(c->r[7]+0x0000004Cu,c->r[4]); // 801DE3B4
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[0]);} // 801DE3B8
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[0]);} // 801DE3BC
  W32(c->r[7]+0x00000058u,c->r[4]); // 801DE3C0
  W32(c->r[7]+0x0000005Cu,c->r[4]); // 801DE3C4
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 801DE3C8
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[0]);} // 801DE3CC
  W32(c->r[7]+0x00000068u,c->r[4]); // 801DE3D0
  W32(c->r[7]+0x0000006Cu,c->r[4]); // 801DE3D4
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 801DE3D8
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 801DE3DC
  W32(c->r[7]+0x00000078u,c->r[4]); // 801DE3E0
  W32(c->r[7]+0x0000007Cu,c->r[4]); // 801DE3E4
  c->r[7]=c->r[7]+0x00000080u; // 801DE3E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DE368; } // 801DE3EC
L_801DE3F0:;
  c->r[4]=c->r[3]+0x00000084u; // 801DE3F0
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE3F4
  c->r[0]=c->r[4]+0x0000000Fu; // 801DE3F8
  c->r[5]=0u+0x00000000u; // 801DE3FC
  c->r[0]=c->r[0]-c->r[7]; // 801DE400
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801DE404
  c->ctr=c->r[0]; // 801DE408
  cmpu(c,0,c->r[7],c->r[4]); // 801DE40C
  if (!crb(c,0)) { goto L_801DE42C; } // 801DE410
L_801DE414:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 801DE414
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 801DE418
  W32(c->r[7]+0x00000008u,c->r[5]); // 801DE41C
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 801DE420
  c->r[7]=c->r[7]+0x00000010u; // 801DE424
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DE414; } // 801DE428
L_801DE42C:;
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE42C
  c->r[6]=c->r[3]+0x00000094u; // 801DE430
  c->r[0]=0u+0x00000000u; // 801DE434
  c->r[4]=c->r[3]+0x000000B4u; // 801DE438
  cmpu(c,0,c->r[6],c->r[4]); // 801DE43C
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 801DE440
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 801DE444
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 801DE448
  W32(c->r[3]+0x00000090u,c->r[0]); // 801DE44C
  if (!crb(c,0)) { goto L_801DE5C8; } // 801DE450
  c->r[7]=c->r[3]+0x00000094u; // 801DE454
  c->r[5]=c->r[3]+0x00000034u; // 801DE458
  c->r[8]=c->r[4]-c->r[7]; // 801DE45C
  c->r[9]=c->r[8]+0x0000000Fu; // 801DE460
  c->r[0]=sraw(c,c->r[9],4); // 801DE464
  c->r[10]=addc(c,c->r[0],0,c->xer_ca); // 801DE468
  c->r[11]=c->r[10]+0x00000001u; // 801DE46C
  cmps(c,0,(int32_t)c->r[11],8); // 801DE470
  if (!crb(c,1)) { goto L_801DE58C; } // 801DE474
  cmpu(c,0,c->r[7],c->r[4]); // 801DE478
  c->r[4]=0u+0x00000000u; // 801DE47C
  c->r[7]=0u+0x00000000u; // 801DE480
  if (crb(c,1)) { goto L_801DE4AC; } // 801DE484
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 801DE488
  c->r[8]=0u+0x00000001u; // 801DE48C
  if (!crb(c,2)) { goto L_801DE4A0; } // 801DE490
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 801DE494
  if (crb(c,2)) { goto L_801DE4A0; } // 801DE498
  c->r[8]=0u+0x00000000u; // 801DE49C
L_801DE4A0:;
  cmps(c,0,(int32_t)c->r[8],0); // 801DE4A0
  if (crb(c,2)) { goto L_801DE4AC; } // 801DE4A4
  c->r[7]=0u+0x00000001u; // 801DE4A8
L_801DE4AC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DE4AC
  if (crb(c,2)) { goto L_801DE4DC; } // 801DE4B0
  c->r[8]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[8]); // 801DE4B4
  c->r[7]=0u+0x00000001u; // 801DE4B8
  if (!crb(c,2)) { goto L_801DE4D0; } // 801DE4BC
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 801DE4C0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DE4C4
  if (crb(c,2)) { goto L_801DE4D0; } // 801DE4C8
  c->r[7]=0u+0x00000000u; // 801DE4CC
L_801DE4D0:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DE4D0
  if (crb(c,2)) { goto L_801DE4DC; } // 801DE4D4
  c->r[4]=0u+0x00000001u; // 801DE4D8
L_801DE4DC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DE4DC
  if (crb(c,2)) { goto L_801DE58C; } // 801DE4E0
  c->r[0]=c->r[5]+0x0000007Fu; // 801DE4E4
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE4E8
  c->r[0]=c->r[0]-c->r[6]; // 801DE4EC
  c->r[4]=0u+0x00000000u; // 801DE4F0
  c->r[0]=rotl(c->r[0],25)&0x01FFFFFFu; // 801DE4F4
  c->ctr=c->r[0]; // 801DE4F8
  cmpu(c,0,c->r[6],c->r[5]); // 801DE4FC
  if (!crb(c,0)) { goto L_801DE58C; } // 801DE500
L_801DE504:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 801DE504
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 801DE508
  W32(c->r[6]+0x00000008u,c->r[4]); // 801DE50C
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 801DE510
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 801DE514
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 801DE518
  W32(c->r[6]+0x00000018u,c->r[4]); // 801DE51C
  W32(c->r[6]+0x0000001Cu,c->r[4]); // 801DE520
  {uint32_t ea=c->r[6]+0x00000020u; WF32(ea,c->f[0]);} // 801DE524
  {uint32_t ea=c->r[6]+0x00000024u; WF32(ea,c->f[0]);} // 801DE528
  W32(c->r[6]+0x00000028u,c->r[4]); // 801DE52C
  W32(c->r[6]+0x0000002Cu,c->r[4]); // 801DE530
  {uint32_t ea=c->r[6]+0x00000030u; WF32(ea,c->f[0]);} // 801DE534
  {uint32_t ea=c->r[6]+0x00000034u; WF32(ea,c->f[0]);} // 801DE538
  W32(c->r[6]+0x00000038u,c->r[4]); // 801DE53C
  W32(c->r[6]+0x0000003Cu,c->r[4]); // 801DE540
  {uint32_t ea=c->r[6]+0x00000040u; WF32(ea,c->f[0]);} // 801DE544
  {uint32_t ea=c->r[6]+0x00000044u; WF32(ea,c->f[0]);} // 801DE548
  W32(c->r[6]+0x00000048u,c->r[4]); // 801DE54C
  W32(c->r[6]+0x0000004Cu,c->r[4]); // 801DE550
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[0]);} // 801DE554
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 801DE558
  W32(c->r[6]+0x00000058u,c->r[4]); // 801DE55C
  W32(c->r[6]+0x0000005Cu,c->r[4]); // 801DE560
  {uint32_t ea=c->r[6]+0x00000060u; WF32(ea,c->f[0]);} // 801DE564
  {uint32_t ea=c->r[6]+0x00000064u; WF32(ea,c->f[0]);} // 801DE568
  W32(c->r[6]+0x00000068u,c->r[4]); // 801DE56C
  W32(c->r[6]+0x0000006Cu,c->r[4]); // 801DE570
  {uint32_t ea=c->r[6]+0x00000070u; WF32(ea,c->f[0]);} // 801DE574
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 801DE578
  W32(c->r[6]+0x00000078u,c->r[4]); // 801DE57C
  W32(c->r[6]+0x0000007Cu,c->r[4]); // 801DE580
  c->r[6]=c->r[6]+0x00000080u; // 801DE584
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DE504; } // 801DE588
L_801DE58C:;
  c->r[4]=c->r[3]+0x000000B4u; // 801DE58C
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE590
  c->r[0]=c->r[4]+0x0000000Fu; // 801DE594
  c->r[5]=0u+0x00000000u; // 801DE598
  c->r[0]=c->r[0]-c->r[6]; // 801DE59C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801DE5A0
  c->ctr=c->r[0]; // 801DE5A4
  cmpu(c,0,c->r[6],c->r[4]); // 801DE5A8
  if (!crb(c,0)) { goto L_801DE5C8; } // 801DE5AC
L_801DE5B0:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 801DE5B0
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 801DE5B4
  W32(c->r[6]+0x00000008u,c->r[5]); // 801DE5B8
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801DE5BC
  c->r[6]=c->r[6]+0x00000010u; // 801DE5C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DE5B0; } // 801DE5C4
L_801DE5C8:;
  c->r[4]=0u+0x801E0000u; // 801DE5C8
  c->r[5]=0u+0x801E0000u; // 801DE5CC
  c->r[4]=c->r[4]+0xFFFFE6BCu; // 801DE5D0
  c->r[6]=0u+0x0000000Cu; // 801DE5D4
  c->r[5]=c->r[5]+0xFFFFE6DCu; // 801DE5D8
  c->r[7]=0u+0x00000003u; // 801DE5DC
  c->r[3]=c->r[3]+0x000000B4u; // 801DE5E0
  c->lr=0x801DE5E8u; f_80109BD0(c); // 801DE5E4
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE5E8
  c->r[0]=0u+0x00000000u; // 801DE5EC
  W32(c->r[31]+0x00000034u,c->r[0]); // 801DE5F0
  c->r[3]=c->r[31]|c->r[31]; // 801DE5F4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801DE5F8
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801DE5FC
  W32(c->r[31]+0x00000038u,c->r[0]); // 801DE600
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801DE604
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 801DE608
  W32(c->r[31]+0x00000024u,c->r[0]); // 801DE60C
  W32(c->r[31]+0x00000028u,c->r[0]); // 801DE610
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 801DE614
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 801DE618
  W32(c->r[31]+0x00000044u,c->r[0]); // 801DE61C
  W32(c->r[31]+0x00000048u,c->r[0]); // 801DE620
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801DE624
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 801DE628
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 801DE62C
  W32(c->r[31]+0x00000060u,c->r[0]); // 801DE630
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 801DE634
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 801DE638
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 801DE63C
  W32(c->r[31]+0x00000090u,c->r[0]); // 801DE640
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801DE644
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801DE648
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801DE64C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 801DE650
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 801DE654
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 801DE658
  W32(c->r[31]+0x00000070u,c->r[0]); // 801DE65C
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 801DE660
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 801DE664
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 801DE668
  W32(c->r[31]+0x000000A0u,c->r[0]); // 801DE66C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 801DE670
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801DE674
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801DE678
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 801DE67C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 801DE680
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 801DE684
  W32(c->r[31]+0x00000080u,c->r[0]); // 801DE688
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 801DE68C
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 801DE690
  W32(c->r[31]+0x000000ACu,c->r[0]); // 801DE694
  W32(c->r[31]+0x000000B0u,c->r[0]); // 801DE698
  W32(c->r[31]+0x000000E0u,c->r[0]); // 801DE69C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801DE6A0
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801DE6A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE6A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE6AC
  c->lr=c->r[0]; // 801DE6B0
  c->r[1]=c->r[1]+0x00000010u; // 801DE6B4
  return; // 801DE6B8
}

// fn_801DE6BC
void f_801DE6BC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801DE6BC
  c->r[4]=c->r[3]+0x00000004u; // 801DE6C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DE6C4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801DE6C8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DE6CC
  W32(c->r[3]+0x00000004u,c->r[4]); // 801DE6D0
  W32(c->r[3]+0x00000008u,c->r[4]); // 801DE6D4
  return; // 801DE6D8
}

// fn_801DE6DC
void f_801DE6DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE6DC
  c->r[0]=c->lr; // 801DE6E0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE6E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE6E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE6EC
  c->r[31]=c->r[4]|c->r[4]; // 801DE6F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE6F4
  c->r[30]=c->r[3]|c->r[3]; // 801DE6F8
  if (crb(c,2)) { goto L_801DE718; } // 801DE6FC
  c->r[4]=0u+0x00000000u; // 801DE700
  c->lr=0x801DE708u; f_8017A654(c); // 801DE704
  cmps(c,0,(int32_t)c->r[31],0); // 801DE708
  if (!crb(c,1)) { goto L_801DE718; } // 801DE70C
  c->r[3]=c->r[30]|c->r[30]; // 801DE710
  c->lr=0x801DE718u; f_8009230C(c); // 801DE714
L_801DE718:;
  c->r[3]=c->r[30]|c->r[30]; // 801DE718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE71C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE720
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE724
  c->lr=c->r[0]; // 801DE728
  c->r[1]=c->r[1]+0x00000010u; // 801DE72C
  return; // 801DE730
}

// fn_801DE734
void f_801DE734(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE734
  c->r[0]=c->lr; // 801DE738
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE73C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE740
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DE744
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DE748
  if (!crb(c,2)) { goto L_801DE77C; } // 801DE74C
  c->r[31]=0u+0x80360000u; // 801DE750
  c->r[3]=c->r[31]+0x00006A30u; // 801DE754
  c->lr=0x801DE75Cu; f_801DE214(c); // 801DE758
  c->r[4]=0u+0x801E0000u; // 801DE75C
  c->r[5]=0u+0x80360000u; // 801DE760
  c->r[3]=c->r[31]+0x00006A30u; // 801DE764
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DE768
  c->r[5]=c->r[5]+0x00006A20u; // 801DE76C
  c->lr=0x801DE774u; f_8010967C(c); // 801DE770
  c->r[0]=0u+0x00000001u; // 801DE774
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DE778
L_801DE77C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE77C
  c->r[3]=0u+0x80360000u; // 801DE780
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE784
  c->r[3]=c->r[3]+0x00006A30u; // 801DE788
  c->lr=c->r[0]; // 801DE78C
  c->r[1]=c->r[1]+0x00000010u; // 801DE790
  return; // 801DE794
}

// fn_801DE798
void f_801DE798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE798
  c->r[0]=c->lr; // 801DE79C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE7A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE7A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE7A8
  c->r[31]=c->r[4]|c->r[4]; // 801DE7AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE7B0
  c->r[30]=c->r[3]|c->r[3]; // 801DE7B4
  if (crb(c,2)) { goto L_801DE7F4; } // 801DE7B8
  c->r[4]=0u+0x801E0000u; // 801DE7BC
  c->r[5]=0u+0x0000000Cu; // 801DE7C0
  c->r[4]=c->r[4]+0xFFFFE6DCu; // 801DE7C4
  c->r[6]=0u+0x00000003u; // 801DE7C8
  c->r[3]=c->r[3]+0x000000B4u; // 801DE7CC
  c->lr=0x801DE7D4u; f_80109CC8(c); // 801DE7D0
  c->r[3]=addc(c,c->r[30],0x00000008u,0); cr0(c,c->r[3]); // 801DE7D4
  if (crb(c,2)) { goto L_801DE7E4; } // 801DE7D8
  c->r[4]=0u+0x00000000u; // 801DE7DC
  c->lr=0x801DE7E4u; f_8017A654(c); // 801DE7E0
L_801DE7E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DE7E4
  if (!crb(c,1)) { goto L_801DE7F4; } // 801DE7E8
  c->r[3]=c->r[30]|c->r[30]; // 801DE7EC
  c->lr=0x801DE7F4u; f_8009230C(c); // 801DE7F0
L_801DE7F4:;
  c->r[3]=c->r[30]|c->r[30]; // 801DE7F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE7F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE7FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE800
  c->lr=c->r[0]; // 801DE804
  c->r[1]=c->r[1]+0x00000010u; // 801DE808
  return; // 801DE80C
}

// fn_801DE810
void f_801DE810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE810
  c->r[0]=c->lr; // 801DE814
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE81C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE820
  c->r[30]=c->r[3]|c->r[3]; // 801DE824
  c->r[0]=R8(c->r[3]+0x00000018u); // 801DE828
  cmps(c,0,(int32_t)c->r[0],0); // 801DE82C
  if (!crb(c,2)) { goto L_801DE8CC; } // 801DE830
  c->r[31]=0u+0x80360000u; // 801DE834
  c->r[4]=0u+0x00000000u; // 801DE838
  c->r[3]=c->r[31]+0x00006920u; // 801DE83C
  c->r[5]=0u+0x00000100u; // 801DE840
  c->lr=0x801DE848u; f_8000443C(c); // 801DE844
  c->r[3]=c->r[31]+0x00006920u; // 801DE848
  c->r[4]=0u+0x00000100u; // 801DE84C
  c->lr=0x801DE854u; f_800E0380(c); // 801DE850
  c->r[0]=c->r[31]+0x00006920u; // 801DE854
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DE858
  c->lr=0x801DE860u; f_800E4F54(c); // 801DE85C
  c->r[31]=c->r[3]|c->r[3]; // 801DE860
  c->r[3]=c->r[30]+0x000000D8u; // 801DE864
  c->r[4]=c->r[30]+0x000000E4u; // 801DE868
  c->lr=0x801DE870u; f_800FD674(c); // 801DE86C
  c->r[3]=c->r[30]+0x000000DCu; // 801DE870
  c->r[4]=c->r[30]+0x000000E8u; // 801DE874
  c->lr=0x801DE87Cu; f_800FD688(c); // 801DE878
  c->r[3]=c->r[30]+0x000000E0u; // 801DE87C
  c->r[4]=c->r[30]+0x000000ECu; // 801DE880
  c->lr=0x801DE888u; f_800FD69C(c); // 801DE884
  c->r[3]=0u+0x00000000u; // 801DE888
  c->r[4]=0u+0x00000000u; // 801DE88C
  c->lr=0x801DE894u; f_800FD548(c); // 801DE890
  c->r[3]=0u+0x00000000u; // 801DE894
  c->r[4]=0u+0x00000000u; // 801DE898
  c->lr=0x801DE8A0u; f_800FD5AC(c); // 801DE89C
  c->r[3]=0u+0x00000000u; // 801DE8A0
  c->r[4]=0u+0x00000000u; // 801DE8A4
  c->lr=0x801DE8ACu; f_800FD610(c); // 801DE8A8
  c->r[3]=0u+0x801E0000u; // 801DE8AC
  c->r[3]=c->r[3]+0xFFFFF064u; // 801DE8B0
  c->lr=0x801DE8B8u; f_800FE80C(c); // 801DE8B4
  c->r[0]=0u+0x00000001u; // 801DE8B8
  W32(c->r[30]+0x00000014u,c->r[3]); // 801DE8BC
  c->r[3]=c->r[31]|c->r[31]; // 801DE8C0
  W8(c->r[30]+0x00000018u,c->r[0]); // 801DE8C4
  c->lr=0x801DE8CCu; f_800E4F7C(c); // 801DE8C8
L_801DE8CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE8CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE8D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE8D4
  c->lr=c->r[0]; // 801DE8D8
  c->r[1]=c->r[1]+0x00000010u; // 801DE8DC
  return; // 801DE8E0
}

// Shutdown__Q44nw4r3snd6detail9AxManagerFv
void f_801DE8E4(Ctx* __restrict c) {
  trace_call(0x801DE8E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE8E4
  c->r[0]=c->lr; // 801DE8E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE8EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE8F0
  c->r[31]=c->r[3]|c->r[3]; // 801DE8F4
  c->r[0]=R8(c->r[3]+0x00000018u); // 801DE8F8
  cmps(c,0,(int32_t)c->r[0],0); // 801DE8FC
  if (crb(c,2)) { goto L_801DE978; } // 801DE900
  c->r[3]=R32(c->r[3]+0x00000014u); // 801DE904
  c->lr=0x801DE90Cu; f_800FE80C(c); // 801DE908
  c->r[3]=c->r[31]|c->r[31]; // 801DE90C
  c->r[4]=0u+0x00000000u; // 801DE910
  c->lr=0x801DE918u; f_801DF488(c); // 801DE914
  c->r[3]=c->r[31]|c->r[31]; // 801DE918
  c->r[4]=0u+0x00000001u; // 801DE91C
  c->lr=0x801DE924u; f_801DF488(c); // 801DE920
  c->r[3]=c->r[31]|c->r[31]; // 801DE924
  c->r[4]=0u+0x00000002u; // 801DE928
  c->lr=0x801DE930u; f_801DF488(c); // 801DE92C
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801DE930
  c->r[4]=R32(c->r[31]+0x000000E4u); // 801DE934
  c->lr=0x801DE93Cu; f_800FD548(c); // 801DE938
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801DE93C
  c->r[4]=R32(c->r[31]+0x000000E8u); // 801DE940
  c->lr=0x801DE948u; f_800FD5AC(c); // 801DE944
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801DE948
  c->r[4]=R32(c->r[31]+0x000000ECu); // 801DE94C
  c->lr=0x801DE954u; f_800FD610(c); // 801DE950
  c->r[0]=0u+0x00000000u; // 801DE954
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801DE958
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801DE95C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 801DE960
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801DE964
  W32(c->r[31]+0x000000E0u,c->r[0]); // 801DE968
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801DE96C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DE970
  W8(c->r[31]+0x00000018u,c->r[0]); // 801DE974
L_801DE978:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE97C
  c->lr=c->r[0]; // 801DE980
  c->r[1]=c->r[1]+0x00000010u; // 801DE984
  return; // 801DE988
}

// GetOutputVolume__Q44nw4r3snd6detail9AxManagerCFv
void f_801DE98C(Ctx* __restrict c) {
  trace_call(0x801DE98Cu);
  c->r[5]=R32(c->r[3]+0x00000024u); // 801DE98C
  c->r[0]=R32(c->r[3]+0x00000028u); // 801DE990
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE994
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801DE998
  if (crb(c,0)) { goto L_801DE9A8; } // 801DE99C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DE9A0
  goto L_801DE9F0; // 801DE9A4
L_801DE9A8:;
  c->r[4]=0u+0x43300000u; // 801DE9A8
  c->r[0]=c->r[0]^0x80000000u; // 801DE9AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DE9B0
  c->r[0]=c->r[5]^0x80000000u; // 801DE9B4
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[4]=RF64(ea);} // 801DE9B8
  W32(c->r[1]+0x00000008u,c->r[4]); // 801DE9BC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DE9C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DE9C4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DE9C8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801DE9CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE9D0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801DE9D4
  W32(c->r[1]+0x00000010u,c->r[4]); // 801DE9D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DE9DC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801DE9E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801DE9E4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DE9E8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801DE9EC
L_801DE9F0:;
  c->r[1]=c->r[1]+0x00000020u; // 801DE9F0
  return; // 801DE9F4
}

// Update__Q44nw4r3snd6detail9AxManagerFv
void f_801DE9F8(Ctx* __restrict c) {
  trace_call(0x801DE9F8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE9F8
  c->r[0]=c->lr; // 801DE9FC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801DEA00
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801DEA04
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801DEA08
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801DEA0C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801DEA10
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801DEA14
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801DEA18
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 801DEA1C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 801DEA20
  c->r[0]=0u+0x43300000u; // 801DEA24
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801DEA28
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DEA2C
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[29]=c->ps1[29]=RF32(ea);} // 801DEA30
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DEA34
  c->r[30]=0u+0x00000000u; // 801DEA38
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[31]=RF64(ea);} // 801DEA3C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DEA40
  c->r[29]=c->r[3]|c->r[3]; // 801DEA44
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[30]=c->ps1[30]=RF32(ea);} // 801DEA48
  c->r[31]=c->r[29]|c->r[29]; // 801DEA4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DEA50
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DEA54
L_801DEA58:;
  c->r[3]=R32(c->r[31]+0x00000090u); // 801DEA58
  c->r[4]=0u+0x00000000u; // 801DEA5C
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801DEA60
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEA64
  if (!crb(c,0)) { goto L_801DEA88; } // 801DEA68
  c->r[3]=R32(c->r[31]+0x00000090u); // 801DEA6C
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801DEA70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEA74
  if (!crb(c,0)) { goto L_801DEA84; } // 801DEA78
  c->r[0]=c->r[3]+0x00000001u; // 801DEA7C
  W32(c->r[31]+0x00000090u,c->r[0]); // 801DEA80
L_801DEA84:;
  c->r[4]=0u+0x00000001u; // 801DEA84
L_801DEA88:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 801DEA88
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 801DEA8C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEA90
  if (!crb(c,0)) { goto L_801DEAD0; } // 801DEA94
  c->r[3]=R32(c->r[31]+0x00000060u); // 801DEA98
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 801DEA9C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEAA0
  if (!crb(c,0)) { goto L_801DEAB0; } // 801DEAA4
  c->r[0]=c->r[3]+0x00000001u; // 801DEAA8
  W32(c->r[31]+0x00000060u,c->r[0]); // 801DEAAC
L_801DEAB0:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 801DEAB0
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 801DEAB4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEAB8
  if (crb(c,0)) { goto L_801DEACC; } // 801DEABC
  c->r[3]=c->r[29]|c->r[29]; // 801DEAC0
  c->r[4]=c->r[30]|c->r[30]; // 801DEAC4
  c->lr=0x801DEACCu; f_801DF488(c); // 801DEAC8
L_801DEACC:;
  c->r[4]=0u+0x00000001u; // 801DEACC
L_801DEAD0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DEAD0
  if (crb(c,2)) { goto L_801DEC10; } // 801DEAD4
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 801DEAD8
  c->r[0]=R32(c->r[31]+0x00000090u); // 801DEADC
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801DEAE0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DEAE4
  if (crb(c,0)) { goto L_801DEAF4; } // 801DEAE8
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DEAEC
  goto L_801DEB2C; // 801DEAF0
L_801DEAF4:;
  c->r[3]=c->r[0]^0x80000000u; // 801DEAF4
  c->r[0]=c->r[4]^0x80000000u; // 801DEAF8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801DEAFC
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DEB00
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DEB04
  {uint32_t ea=c->r[31]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DEB08
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 801DEB0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEB10
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801DEB14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DEB18
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801DEB1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801DEB20
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DEB24
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801DEB28
L_801DEB2C:;
  fcmp(c,0,c->f[0],c->f[28]); // 801DEB2C
  if (!crb(c,1)) { goto L_801DEB3C; } // 801DEB30
  c->f[0]=c->f[28]; // 801DEB34
  goto L_801DEB48; // 801DEB38
L_801DEB3C:;
  fcmp(c,0,c->f[0],c->f[29]); // 801DEB3C
  if (!crb(c,0)) { goto L_801DEB48; } // 801DEB40
  c->f[0]=c->f[29]; // 801DEB44
L_801DEB48:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 801DEB48
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801DEB4C
  c->r[0]=R32(c->r[31]+0x00000060u); // 801DEB50
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DEB54
  if (crb(c,0)) { goto L_801DEB64; } // 801DEB58
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DEB5C
  goto L_801DEB9C; // 801DEB60
L_801DEB64:;
  c->r[3]=c->r[0]^0x80000000u; // 801DEB64
  c->r[0]=c->r[4]^0x80000000u; // 801DEB68
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801DEB6C
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DEB70
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DEB74
  {uint32_t ea=c->r[31]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DEB78
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 801DEB7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEB80
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801DEB84
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DEB88
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801DEB8C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801DEB90
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DEB94
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801DEB98
L_801DEB9C:;
  fcmp(c,0,c->f[0],c->f[28]); // 801DEB9C
  if (!crb(c,1)) { goto L_801DEBAC; } // 801DEBA0
  c->f[0]=c->f[28]; // 801DEBA4
  goto L_801DEBB8; // 801DEBA8
L_801DEBAC:;
  fcmp(c,0,c->f[0],c->f[29]); // 801DEBAC
  if (!crb(c,0)) { goto L_801DEBB8; } // 801DEBB0
  c->f[0]=c->f[29]; // 801DEBB4
L_801DEBB8:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801DEBB8
  cmps(c,0,(int32_t)c->r[30],1); // 801DEBBC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[4]); // 801DEBC0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DEBC4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801DEBC8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801DEBCC
  if (crb(c,2)) { goto L_801DEBFC; } // 801DEBD0
  if (!crb(c,0)) { goto L_801DEBE4; } // 801DEBD4
  cmps(c,0,(int32_t)c->r[30],0); // 801DEBD8
  if (!crb(c,0)) { goto L_801DEBF0; } // 801DEBDC
  goto L_801DEC10; // 801DEBE0
L_801DEBE4:;
  cmps(c,0,(int32_t)c->r[30],3); // 801DEBE4
  if (!crb(c,0)) { goto L_801DEC10; } // 801DEBE8
  goto L_801DEC08; // 801DEBEC
L_801DEBF0:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEBF0
  c->lr=0x801DEBF8u; f_800FE120(c); // 801DEBF4
  goto L_801DEC10; // 801DEBF8
L_801DEBFC:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEBFC
  c->lr=0x801DEC04u; f_800FE128(c); // 801DEC00
  goto L_801DEC10; // 801DEC04
L_801DEC08:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEC08
  c->lr=0x801DEC10u; f_800FE130(c); // 801DEC0C
L_801DEC10:;
  c->r[30]=c->r[30]+0x00000001u; // 801DEC10
  c->r[31]=c->r[31]+0x00000010u; // 801DEC14
  cmps(c,0,(int32_t)c->r[30],3); // 801DEC18
  if (crb(c,0)) { IRQCHK(c); goto L_801DEA58; } // 801DEC1C
  c->r[3]=R32(c->r[29]+0x00000028u); // 801DEC20
  c->r[0]=R32(c->r[29]+0x00000024u); // 801DEC24
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEC28
  if (!crb(c,0)) { goto L_801DEC54; } // 801DEC2C
  c->r[3]=R32(c->r[29]+0x00000028u); // 801DEC30
  c->r[0]=R32(c->r[29]+0x00000024u); // 801DEC34
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEC38
  if (!crb(c,0)) { goto L_801DEC48; } // 801DEC3C
  c->r[0]=c->r[3]+0x00000001u; // 801DEC40
  W32(c->r[29]+0x00000028u,c->r[0]); // 801DEC44
L_801DEC48:;
  c->lr=0x801DEC4Cu; f_801FAE50(c); // 801DEC48
  c->r[4]=0u+0x00000008u; // 801DEC4C
  c->lr=0x801DEC54u; f_801FB54C(c); // 801DEC50
L_801DEC54:;
  c->r[3]=R32(c->r[29]+0x00000048u); // 801DEC54
  c->r[0]=R32(c->r[29]+0x00000044u); // 801DEC58
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEC5C
  if (!crb(c,0)) { goto L_801DEC7C; } // 801DEC60
  c->r[3]=R32(c->r[29]+0x00000048u); // 801DEC64
  c->r[0]=R32(c->r[29]+0x00000044u); // 801DEC68
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEC6C
  if (!crb(c,0)) { goto L_801DEC7C; } // 801DEC70
  c->r[0]=c->r[3]+0x00000001u; // 801DEC74
  W32(c->r[29]+0x00000048u,c->r[0]); // 801DEC78
L_801DEC7C:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 801DEC7C
  c->r[0]=R32(c->r[29]+0x00000034u); // 801DEC80
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEC84
  if (!crb(c,0)) { goto L_801DECA4; } // 801DEC88
  c->r[3]=R32(c->r[29]+0x00000038u); // 801DEC8C
  c->r[0]=R32(c->r[29]+0x00000034u); // 801DEC90
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEC94
  if (!crb(c,0)) { goto L_801DECA4; } // 801DEC98
  c->r[0]=c->r[3]+0x00000001u; // 801DEC9C
  W32(c->r[29]+0x00000038u,c->r[0]); // 801DECA0
L_801DECA4:;
  c->r[4]=R32(c->r[29]+0x00000034u); // 801DECA4
  c->r[0]=R32(c->r[29]+0x00000038u); // 801DECA8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DECAC
  if (crb(c,0)) { goto L_801DECBC; } // 801DECB0
  {uint32_t ea=c->r[29]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DECB4
  goto L_801DECF8; // 801DECB8
L_801DECBC:;
  c->r[3]=c->r[0]^0x80000000u; // 801DECBC
  c->r[0]=c->r[4]^0x80000000u; // 801DECC0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801DECC4
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[4]=RF64(ea);} // 801DECC8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801DECCC
  {uint32_t ea=c->r[29]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DECD0
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DECD4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801DECD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DECDC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DECE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DECE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801DECE8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801DECEC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DECF0
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[0]); // 801DECF4
L_801DECF8:;
  c->r[4]=R32(c->r[29]+0x00000044u); // 801DECF8
  c->r[0]=R32(c->r[29]+0x00000048u); // 801DECFC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DED00
  if (crb(c,0)) { goto L_801DED10; } // 801DED04
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DED08
  goto L_801DED4C; // 801DED0C
L_801DED10:;
  c->r[3]=c->r[0]^0x80000000u; // 801DED10
  c->r[0]=c->r[4]^0x80000000u; // 801DED14
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801DED18
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[4]=RF64(ea);} // 801DED1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801DED20
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DED24
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DED28
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801DED2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DED30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DED34
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DED38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801DED3C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801DED40
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DED44
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801DED48
L_801DED4C:;
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801DED4C
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DED50
  fcmp(c,0,c->f[0],c->f[1]); // 801DED54
  if (!crb(c,1)) { goto L_801DED60; } // 801DED58
  goto L_801DED74; // 801DED5C
L_801DED60:;
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DED60
  fcmp(c,0,c->f[0],c->f[1]); // 801DED64
  if (!crb(c,0)) { goto L_801DED70; } // 801DED68
  goto L_801DED74; // 801DED6C
L_801DED70:;
  c->f[1]=c->f[0]; // 801DED70
L_801DED74:;
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DED74
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801DED78
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DED7C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801DED80
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801DED84
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801DED88
  c->lr=0x801DED90u; f_800FE108(c); // 801DED8C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801DED90
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801DED94
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801DED98
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801DED9C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801DEDA0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801DEDA4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801DEDA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801DEDAC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DEDB0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DEDB4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801DEDB8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DEDBC
  c->lr=c->r[0]; // 801DEDC0
  c->r[1]=c->r[1]+0x00000070u; // 801DEDC4
  return; // 801DEDC8
}

// GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv
void f_801DEDCC(Ctx* __restrict c) {
  trace_call(0x801DEDCCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DEDCC
  return; // 801DEDD0
}

// RegisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNodePFv_v
void f_801DEDD4(Ctx* __restrict c) {
  trace_call(0x801DEDD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEDD4
  c->r[0]=c->lr; // 801DEDD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEDDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DEDE0
  c->r[31]=c->r[5]|c->r[5]; // 801DEDE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DEDE8
  c->r[30]=c->r[4]|c->r[4]; // 801DEDEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DEDF0
  c->r[29]=c->r[3]|c->r[3]; // 801DEDF4
  c->lr=0x801DEDFCu; f_800E4F54(c); // 801DEDF8
  W32(c->r[30]+0x00000008u,c->r[31]); // 801DEDFC
  c->r[0]=c->r[29]+0x0000000Cu; // 801DEE00
  c->r[31]=c->r[3]|c->r[3]; // 801DEE04
  c->r[5]=c->r[30]|c->r[30]; // 801DEE08
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DEE0C
  c->r[3]=c->r[29]+0x00000008u; // 801DEE10
  c->r[4]=c->r[1]+0x00000008u; // 801DEE14
  c->lr=0x801DEE1Cu; f_8017A764(c); // 801DEE18
  c->r[3]=c->r[31]|c->r[31]; // 801DEE1C
  c->lr=0x801DEE24u; f_800E4F7C(c); // 801DEE20
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEE24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEE28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEE2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEE30
  c->lr=c->r[0]; // 801DEE34
  c->r[1]=c->r[1]+0x00000020u; // 801DEE38
  return; // 801DEE3C
}

// UnregisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNode
void f_801DEE40(Ctx* __restrict c) {
  trace_call(0x801DEE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEE40
  c->r[0]=c->lr; // 801DEE44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEE48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DEE4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DEE50
  c->r[30]=c->r[4]|c->r[4]; // 801DEE54
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DEE58
  c->r[29]=c->r[3]|c->r[3]; // 801DEE5C
  c->lr=0x801DEE64u; f_800E4F54(c); // 801DEE60
  c->r[31]=c->r[3]|c->r[3]; // 801DEE64
  c->r[4]=c->r[30]|c->r[30]; // 801DEE68
  c->r[3]=c->r[29]+0x00000008u; // 801DEE6C
  c->lr=0x801DEE74u; f_8017A790(c); // 801DEE70
  c->r[3]=c->r[31]|c->r[31]; // 801DEE74
  c->lr=0x801DEE7Cu; f_800E4F7C(c); // 801DEE78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEE7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEE80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEE84
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEE88
  c->lr=c->r[0]; // 801DEE8C
  c->r[1]=c->r[1]+0x00000020u; // 801DEE90
  return; // 801DEE94
}

// SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode
void f_801DEE98(Ctx* __restrict c) {
  trace_call(0x801DEE98u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEE98
  c->r[0]=c->lr; // 801DEE9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DEEA0
  c->r[11]=c->r[1]+0x00000030u; // 801DEEA4
  c->lr=0x801DEEACu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DEEA8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DEEAC
  c->r[25]=c->r[3]|c->r[3]; // 801DEEB0
  c->r[26]=c->r[4]|c->r[4]; // 801DEEB4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DEEB8
  if (crb(c,2)) { goto L_801DEF88; } // 801DEEBC
  c->lr=0x801DEEC4u; f_800E4F54(c); // 801DEEC0
  cmps(c,0,(int32_t)c->r[26],2); // 801DEEC4
  W32(c->r[25]+0x00000000u,c->r[26]); // 801DEEC8
  c->r[31]=c->r[3]|c->r[3]; // 801DEECC
  if (crb(c,2)) { goto L_801DEF0C; } // 801DEED0
  if (!crb(c,0)) { goto L_801DEEE8; } // 801DEED4
  cmps(c,0,(int32_t)c->r[26],0); // 801DEED8
  if (crb(c,2)) { goto L_801DEEF4; } // 801DEEDC
  if (!crb(c,0)) { goto L_801DEF00; } // 801DEEE0
  goto L_801DEF20; // 801DEEE4
L_801DEEE8:;
  cmps(c,0,(int32_t)c->r[26],4); // 801DEEE8
  if (!crb(c,0)) { goto L_801DEF20; } // 801DEEEC
  goto L_801DEF18; // 801DEEF0
L_801DEEF4:;
  c->r[3]=0u+0x00000000u; // 801DEEF4
  c->lr=0x801DEEFCu; f_800FE0E8(c); // 801DEEF8
  goto L_801DEF20; // 801DEEFC
L_801DEF00:;
  c->r[3]=0u+0x00000001u; // 801DEF00
  c->lr=0x801DEF08u; f_800FE0E8(c); // 801DEF04
  goto L_801DEF20; // 801DEF08
L_801DEF0C:;
  c->r[3]=0u+0x00000002u; // 801DEF0C
  c->lr=0x801DEF14u; f_800FE0E8(c); // 801DEF10
  goto L_801DEF20; // 801DEF14
L_801DEF18:;
  c->r[3]=0u+0x00000000u; // 801DEF18
  c->lr=0x801DEF20u; f_800FE0E8(c); // 801DEF1C
L_801DEF20:;
  c->lr=0x801DEF24u; f_801FAE50(c); // 801DEF20
  c->r[4]=0u+0x00000010u; // 801DEF24
  c->lr=0x801DEF2Cu; f_801FB54C(c); // 801DEF28
  c->r[28]=c->r[25]+0x000000B4u; // 801DEF2C
  c->r[27]=0u+0x00000000u; // 801DEF30
L_801DEF34:;
  c->r[30]=R32(c->r[28]+0x00000004u); // 801DEF34
  c->r[29]=c->r[28]+0x00000004u; // 801DEF38
  goto L_801DEF58; // 801DEF3C
L_801DEF40:;
  c->r[12]=R32(c->r[30]+0xFFFFFFFCu); // 801DEF40
  c->r[3]=c->r[30]+0xFFFFFFFCu; // 801DEF44
  c->r[12]=R32(c->r[12]+0x00000018u); // 801DEF48
  c->ctr=c->r[12]; // 801DEF4C
  if (true) { c->lr=0x801DEF54u; dispatch(c,c->ctr); } // 801DEF50
  c->r[30]=R32(c->r[30]+0x00000000u); // 801DEF54
L_801DEF58:;
  cmpu(c,0,c->r[30],c->r[29]); // 801DEF58
  if (!crb(c,2)) { IRQCHK(c); goto L_801DEF40; } // 801DEF5C
  c->r[27]=c->r[27]+0x00000001u; // 801DEF60
  c->r[28]=c->r[28]+0x0000000Cu; // 801DEF64
  cmps(c,0,(int32_t)c->r[27],3); // 801DEF68
  if (crb(c,0)) { IRQCHK(c); goto L_801DEF34; } // 801DEF6C
  cmps(c,0,(int32_t)c->r[26],2); // 801DEF70
  if (!crb(c,2)) { goto L_801DEF80; } // 801DEF74
  c->r[0]=0u+0x00000000u; // 801DEF78
  W32(c->r[25]+0x000000FCu,c->r[0]); // 801DEF7C
L_801DEF80:;
  c->r[3]=c->r[31]|c->r[31]; // 801DEF80
  c->lr=0x801DEF88u; f_800E4F7C(c); // 801DEF84
L_801DEF88:;
  c->r[11]=c->r[1]+0x00000030u; // 801DEF88
  c->lr=0x801DEF90u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DEF8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DEF90
  c->lr=c->r[0]; // 801DEF94
  c->r[1]=c->r[1]+0x00000030u; // 801DEF98
  return; // 801DEF9C
}

// GetOutputMode__Q44nw4r3snd6detail9AxManagerFv
void f_801DEFA0(Ctx* __restrict c) {
  trace_call(0x801DEFA0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DEFA0
  return; // 801DEFA4
}

// fn_801DEFA8
void f_801DEFA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801DEFA8
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEFAC
  fcmp(c,0,c->f[1],c->f[5]); // 801DEFB0
  if (!crb(c,1)) { goto L_801DEFBC; } // 801DEFB4
  goto L_801DEFD0; // 801DEFB8
L_801DEFBC:;
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DEFBC
  fcmp(c,0,c->f[1],c->f[5]); // 801DEFC0
  if (!crb(c,0)) { goto L_801DEFCC; } // 801DEFC4
  goto L_801DEFD0; // 801DEFC8
L_801DEFCC:;
  c->f[5]=c->f[1]; // 801DEFCC
L_801DEFD0:;
  c->r[6]=R32(c->r[3]+0x00000034u); // 801DEFD0
  c->r[0]=R32(c->r[3]+0x00000038u); // 801DEFD4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801DEFD8
  if (crb(c,0)) { goto L_801DEFE8; } // 801DEFDC
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DEFE0
  goto L_801DF030; // 801DEFE4
L_801DEFE8:;
  c->r[5]=0u+0x43300000u; // 801DEFE8
  c->r[0]=c->r[0]^0x80000000u; // 801DEFEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DEFF0
  c->r[0]=c->r[6]^0x80000000u; // 801DEFF4
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[4]=RF64(ea);} // 801DEFF8
  W32(c->r[1]+0x00000008u,c->r[5]); // 801DEFFC
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DF000
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DF004
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DF008
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801DF00C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF010
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801DF014
  W32(c->r[1]+0x00000010u,c->r[5]); // 801DF018
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DF01C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801DF020
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801DF024
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DF028
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801DF02C
L_801DF030:;
  c->r[5]=0u+0x55550000u; // 801DF030
  c->r[0]=0u+0x00000000u; // 801DF034
  c->r[4]=c->r[4]+0x00000002u; // 801DF038
  W32(c->r[3]+0x00000038u,c->r[0]); // 801DF03C
  c->r[5]=c->r[5]+0x00005556u; // 801DF040
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[4])>>32); // 801DF044
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801DF048
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[5]);} // 801DF04C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801DF050
  c->r[0]=c->r[4]+c->r[0]; // 801DF054
  W32(c->r[3]+0x00000034u,c->r[0]); // 801DF058
  c->r[1]=c->r[1]+0x00000020u; // 801DF05C
  return; // 801DF060
}

// fn_801DF064
void f_801DF064(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF064
  c->r[0]=c->lr; // 801DF068
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DF06C
  c->r[11]=c->r[1]+0x00000030u; // 801DF070
  c->lr=0x801DF078u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF074
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF078
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF07C
  if (!crb(c,2)) { goto L_801DF0B0; } // 801DF080
  c->r[25]=0u+0x80360000u; // 801DF084
  c->r[3]=c->r[25]+0x00006A30u; // 801DF088
  c->lr=0x801DF090u; f_801DE214(c); // 801DF08C
  c->r[4]=0u+0x801E0000u; // 801DF090
  c->r[5]=0u+0x80360000u; // 801DF094
  c->r[3]=c->r[25]+0x00006A30u; // 801DF098
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF09C
  c->r[5]=c->r[5]+0x00006A20u; // 801DF0A0
  c->lr=0x801DF0A8u; f_8010967C(c); // 801DF0A4
  c->r[0]=0u+0x00000001u; // 801DF0A8
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF0AC
L_801DF0B0:;
  c->r[25]=0u+0x80360000u; // 801DF0B0
  c->r[27]=0u+0x801E0000u; // 801DF0B4
  c->r[26]=c->r[25]+0x00006A30u; // 801DF0B8
  c->r[28]=0u+0x80360000u; // 801DF0BC
  c->r[31]=R32(c->r[26]+0x0000000Cu); // 801DF0C0
  c->r[30]=c->r[26]+0x0000000Cu; // 801DF0C4
  c->r[29]=0u+0x00000001u; // 801DF0C8
  goto L_801DF0E4; // 801DF0CC
L_801DF0D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801DF0D0
  c->r[31]=R32(c->r[31]+0x00000000u); // 801DF0D4
  c->r[12]=R32(c->r[3]+0x00000008u); // 801DF0D8
  c->ctr=c->r[12]; // 801DF0DC
  if (true) { c->lr=0x801DF0E4u; dispatch(c,c->ctr); } // 801DF0E0
L_801DF0E4:;
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF0E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF0E8
  if (!crb(c,2)) { goto L_801DF10C; } // 801DF0EC
  c->r[3]=c->r[25]+0x00006A30u; // 801DF0F0
  c->lr=0x801DF0F8u; f_801DE214(c); // 801DF0F4
  c->r[3]=c->r[25]+0x00006A30u; // 801DF0F8
  c->r[4]=c->r[27]+0xFFFFE798u; // 801DF0FC
  c->r[5]=c->r[28]+0x00006A20u; // 801DF100
  c->lr=0x801DF108u; f_8010967C(c); // 801DF104
  W8(c->r[13]+0xFFFF9DA8u,c->r[29]); // 801DF108
L_801DF10C:;
  cmpu(c,0,c->r[31],c->r[30]); // 801DF10C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF0D0; } // 801DF110
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF114
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF118
  if (!crb(c,2)) { goto L_801DF148; } // 801DF11C
  c->r[3]=c->r[26]|c->r[26]; // 801DF120
  c->lr=0x801DF128u; f_801DE214(c); // 801DF124
  c->r[4]=0u+0x801E0000u; // 801DF128
  c->r[5]=0u+0x80360000u; // 801DF12C
  c->r[3]=c->r[26]|c->r[26]; // 801DF130
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF134
  c->r[5]=c->r[5]+0x00006A20u; // 801DF138
  c->lr=0x801DF140u; f_8010967C(c); // 801DF13C
  c->r[0]=0u+0x00000001u; // 801DF140
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF144
L_801DF148:;
  c->r[31]=0u+0x80360000u; // 801DF148
  c->r[31]=c->r[31]+0x00006A30u; // 801DF14C
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DF150
  cmps(c,0,(int32_t)c->r[0],0); // 801DF154
  if (crb(c,2)) { goto L_801DF1A4; } // 801DF158
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF15C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF160
  if (!crb(c,2)) { goto L_801DF190; } // 801DF164
  c->r[3]=c->r[31]|c->r[31]; // 801DF168
  c->lr=0x801DF170u; f_801DE214(c); // 801DF16C
  c->r[4]=0u+0x801E0000u; // 801DF170
  c->r[5]=0u+0x80360000u; // 801DF174
  c->r[3]=c->r[31]|c->r[31]; // 801DF178
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF17C
  c->r[5]=c->r[5]+0x00006A20u; // 801DF180
  c->lr=0x801DF188u; f_8010967C(c); // 801DF184
  c->r[0]=0u+0x00000001u; // 801DF188
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF18C
L_801DF190:;
  c->r[3]=0u+0x80360000u; // 801DF190
  c->r[3]=c->r[3]+0x00006A30u; // 801DF194
  c->r[12]=R32(c->r[3]+0x00000014u); // 801DF198
  c->ctr=c->r[12]; // 801DF19C
  if (true) { c->lr=0x801DF1A4u; dispatch(c,c->ctr); } // 801DF1A0
L_801DF1A4:;
  c->r[11]=c->r[1]+0x00000030u; // 801DF1A4
  c->lr=0x801DF1ACu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF1A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DF1AC
  c->lr=c->r[0]; // 801DF1B0
  c->r[1]=c->r[1]+0x00000030u; // 801DF1B4
  return; // 801DF1B8
}

// fn_801DF1BC
void f_801DF1BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF1BC
  c->r[0]=c->lr; // 801DF1C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DF1C4
  c->r[11]=c->r[1]+0x00000040u; // 801DF1C8
  c->lr=0x801DF1D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF1CC
  c->r[27]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801DF1D0
  c->r[29]=c->r[3]|c->r[3]; // 801DF1D4
  c->r[28]=c->r[3]+c->r[27]; // 801DF1D8
  c->r[30]=c->r[4]|c->r[4]; // 801DF1DC
  c->r[6]=R32(c->r[28]+0x00000060u); // 801DF1E0
  c->r[31]=c->r[5]|c->r[5]; // 801DF1E4
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 801DF1E8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DF1EC
  if (!crb(c,0)) { goto L_801DF1F8; } // 801DF1F0
  c->lr=0x801DF1F8u; f_801DF488(c); // 801DF1F4
L_801DF1F8:;
  c->r[5]=R32(c->r[28]+0x0000005Cu); // 801DF1F8
  c->r[0]=R32(c->r[28]+0x00000060u); // 801DF1FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801DF200
  if (crb(c,0)) { goto L_801DF214; } // 801DF204
  c->r[3]=c->r[29]+c->r[27]; // 801DF208
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DF20C
  goto L_801DF260; // 801DF210
L_801DF214:;
  c->r[3]=0u+0x43300000u; // 801DF214
  c->r[0]=c->r[0]^0x80000000u; // 801DF218
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF21C
  c->r[4]=c->r[29]+c->r[27]; // 801DF220
  c->r[0]=c->r[5]^0x80000000u; // 801DF224
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[4]=RF64(ea);} // 801DF228
  W32(c->r[1]+0x00000010u,c->r[3]); // 801DF22C
  {uint32_t ea=c->r[4]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DF230
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801DF234
  {uint32_t ea=c->r[4]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DF238
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801DF23C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DF240
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801DF244
  W32(c->r[1]+0x00000018u,c->r[3]); // 801DF248
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801DF24C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801DF250
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801DF254
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DF258
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801DF25C
L_801DF260:;
  c->r[3]=c->r[29]+c->r[27]; // 801DF260
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DF264
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 801DF268
  c->r[0]=0u+0x00000000u; // 801DF26C
  cmps(c,0,(int32_t)c->r[30],1); // 801DF270
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801DF274
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801DF278
  W32(c->r[3]+0x00000060u,c->r[0]); // 801DF27C
  if (crb(c,2)) { goto L_801DF2B4; } // 801DF280
  if (!crb(c,0)) { goto L_801DF294; } // 801DF284
  cmps(c,0,(int32_t)c->r[30],0); // 801DF288
  if (!crb(c,0)) { goto L_801DF2A0; } // 801DF28C
  goto L_801DF2D8; // 801DF290
L_801DF294:;
  cmps(c,0,(int32_t)c->r[30],3); // 801DF294
  if (!crb(c,0)) { goto L_801DF2D8; } // 801DF298
  goto L_801DF2C8; // 801DF29C
L_801DF2A0:;
  c->r[3]=0u+0x00010000u; // 801DF2A0
  c->r[0]=c->r[3]+0xFFFF8000u; // 801DF2A4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF2A8
  c->lr=0x801DF2B0u; f_800FE120(c); // 801DF2AC
  goto L_801DF2D8; // 801DF2B0
L_801DF2B4:;
  c->r[3]=0u+0x00010000u; // 801DF2B4
  c->r[0]=c->r[3]+0xFFFF8000u; // 801DF2B8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF2BC
  c->lr=0x801DF2C4u; f_800FE128(c); // 801DF2C0
  goto L_801DF2D8; // 801DF2C4
L_801DF2C8:;
  c->r[3]=0u+0x00010000u; // 801DF2C8
  c->r[0]=c->r[3]+0xFFFF8000u; // 801DF2CC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF2D0
  c->lr=0x801DF2D8u; f_800FE130(c); // 801DF2D4
L_801DF2D8:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801DF2D8
  c->r[3]=c->r[31]|c->r[31]; // 801DF2DC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801DF2E0
  c->ctr=c->r[12]; // 801DF2E4
  if (true) { c->lr=0x801DF2ECu; dispatch(c,c->ctr); } // 801DF2E8
  cmps(c,0,(int32_t)c->r[3],0); // 801DF2EC
  if (!crb(c,2)) { goto L_801DF2FC; } // 801DF2F0
  c->r[3]=0u+0x00000000u; // 801DF2F4
  goto L_801DF3A8; // 801DF2F8
L_801DF2FC:;
  c->lr=0x801DF300u; f_800E4F54(c); // 801DF2FC
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801DF300
  c->r[28]=c->r[3]|c->r[3]; // 801DF304
  c->r[3]=c->r[29]+c->r[0]; // 801DF308
  c->r[0]=R32(c->r[3]+0x000000B4u); // 801DF30C
  c->r[27]=c->r[3]+0x000000B4u; // 801DF310
  cmps(c,0,(int32_t)c->r[0],0); // 801DF314
  if (!crb(c,2)) { goto L_801DF384; } // 801DF318
  cmps(c,0,(int32_t)c->r[30],1); // 801DF31C
  if (crb(c,2)) { goto L_801DF354; } // 801DF320
  if (!crb(c,0)) { goto L_801DF334; } // 801DF324
  cmps(c,0,(int32_t)c->r[30],0); // 801DF328
  if (!crb(c,0)) { goto L_801DF340; } // 801DF32C
  goto L_801DF378; // 801DF330
L_801DF334:;
  cmps(c,0,(int32_t)c->r[30],3); // 801DF334
  if (!crb(c,0)) { goto L_801DF378; } // 801DF338
  goto L_801DF368; // 801DF33C
L_801DF340:;
  c->r[3]=0u+0x801E0000u; // 801DF340
  c->r[4]=c->r[30]|c->r[30]; // 801DF344
  c->r[3]=c->r[3]+0xFFFFF588u; // 801DF348
  c->lr=0x801DF350u; f_800FD548(c); // 801DF34C
  goto L_801DF378; // 801DF350
L_801DF354:;
  c->r[3]=0u+0x801E0000u; // 801DF354
  c->r[4]=c->r[30]|c->r[30]; // 801DF358
  c->r[3]=c->r[3]+0xFFFFF588u; // 801DF35C
  c->lr=0x801DF364u; f_800FD5AC(c); // 801DF360
  goto L_801DF378; // 801DF364
L_801DF368:;
  c->r[3]=0u+0x801E0000u; // 801DF368
  c->r[4]=c->r[30]|c->r[30]; // 801DF36C
  c->r[3]=c->r[3]+0xFFFFF588u; // 801DF370
  c->lr=0x801DF378u; f_800FD610(c); // 801DF374
L_801DF378:;
  c->r[3]=c->r[29]+c->r[30]; // 801DF378
  c->r[0]=0u+0x00000002u; // 801DF37C
  W8(c->r[3]+0x000000F0u,c->r[0]); // 801DF380
L_801DF384:;
  c->r[0]=c->r[27]+0x00000004u; // 801DF384
  c->r[3]=c->r[27]|c->r[27]; // 801DF388
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DF38C
  c->r[4]=c->r[1]+0x00000008u; // 801DF390
  c->r[5]=c->r[31]+0x00000004u; // 801DF394
  c->lr=0x801DF39Cu; f_8017A764(c); // 801DF398
  c->r[3]=c->r[28]|c->r[28]; // 801DF39C
  c->lr=0x801DF3A4u; f_800E4F7C(c); // 801DF3A0
  c->r[3]=0u+0x00000001u; // 801DF3A4
L_801DF3A8:;
  c->r[11]=c->r[1]+0x00000040u; // 801DF3A8
  c->lr=0x801DF3B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF3AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DF3B0
  c->lr=c->r[0]; // 801DF3B4
  c->r[1]=c->r[1]+0x00000040u; // 801DF3B8
  return; // 801DF3BC
}

// fn_801DF3C0
void f_801DF3C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF3C0
  c->r[0]=c->lr; // 801DF3C4
  cmps(c,0,(int32_t)c->r[5],0); // 801DF3C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF3CC
  if (!crb(c,2)) { goto L_801DF3DC; } // 801DF3D0
  c->lr=0x801DF3D8u; f_801DF488(c); // 801DF3D4
  goto L_801DF478; // 801DF3D8
L_801DF3DC:;
  c->r[8]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801DF3DC
  c->r[6]=c->r[3]+c->r[8]; // 801DF3E0
  c->r[7]=R32(c->r[6]+0x0000005Cu); // 801DF3E4
  c->r[0]=R32(c->r[6]+0x00000060u); // 801DF3E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 801DF3EC
  if (crb(c,0)) { goto L_801DF3FC; } // 801DF3F0
  {uint32_t ea=c->r[6]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DF3F4
  goto L_801DF444; // 801DF3F8
L_801DF3FC:;
  c->r[4]=0u+0x43300000u; // 801DF3FC
  c->r[0]=c->r[0]^0x80000000u; // 801DF400
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DF404
  c->r[0]=c->r[7]^0x80000000u; // 801DF408
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[4]=RF64(ea);} // 801DF40C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801DF410
  {uint32_t ea=c->r[6]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DF414
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DF418
  {uint32_t ea=c->r[6]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DF41C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801DF420
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF424
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801DF428
  W32(c->r[1]+0x00000010u,c->r[4]); // 801DF42C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DF430
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801DF434
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801DF438
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DF43C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801DF440
L_801DF444:;
  c->r[4]=0u+0x55550000u; // 801DF444
  c->r[6]=c->r[3]+c->r[8]; // 801DF448
  c->r[0]=c->r[5]+0x00000002u; // 801DF44C
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 801DF450
  c->r[3]=c->r[4]+0x00005556u; // 801DF454
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DF458
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801DF45C
  c->r[0]=0u+0x00000000u; // 801DF460
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[0]);} // 801DF464
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801DF468
  c->r[3]=c->r[4]+c->r[3]; // 801DF46C
  W32(c->r[6]+0x0000005Cu,c->r[3]); // 801DF470
  W32(c->r[6]+0x00000060u,c->r[0]); // 801DF474
L_801DF478:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF478
  c->lr=c->r[0]; // 801DF47C
  c->r[1]=c->r[1]+0x00000020u; // 801DF480
  return; // 801DF484
}

// fn_801DF488
void f_801DF488(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF488
  c->r[0]=c->lr; // 801DF48C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF490
  c->r[11]=c->r[1]+0x00000020u; // 801DF494
  c->lr=0x801DF49Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF498
  c->r[26]=c->r[3]|c->r[3]; // 801DF49C
  c->r[27]=c->r[4]|c->r[4]; // 801DF4A0
  c->lr=0x801DF4A8u; f_800E4F54(c); // 801DF4A4
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 801DF4A8
  c->r[31]=c->r[3]|c->r[3]; // 801DF4AC
  c->r[4]=c->r[26]+c->r[0]; // 801DF4B0
  c->r[0]=R32(c->r[4]+0x000000B4u); // 801DF4B4
  c->r[28]=c->r[4]+0x000000B4u; // 801DF4B8
  cmps(c,0,(int32_t)c->r[0],0); // 801DF4BC
  if (!crb(c,2)) { goto L_801DF4CC; } // 801DF4C0
  c->lr=0x801DF4C8u; f_800E4F7C(c); // 801DF4C4
  goto L_801DF570; // 801DF4C8
L_801DF4CC:;
  c->r[30]=R32(c->r[28]+0x00000004u); // 801DF4CC
  c->r[29]=c->r[28]+0x00000004u; // 801DF4D0
  goto L_801DF4F0; // 801DF4D4
L_801DF4D8:;
  c->r[12]=R32(c->r[30]+0xFFFFFFFCu); // 801DF4D8
  c->r[3]=c->r[30]+0xFFFFFFFCu; // 801DF4DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DF4E0
  c->ctr=c->r[12]; // 801DF4E4
  if (true) { c->lr=0x801DF4ECu; dispatch(c,c->ctr); } // 801DF4E8
  c->r[30]=R32(c->r[30]+0x00000000u); // 801DF4EC
L_801DF4F0:;
  cmpu(c,0,c->r[30],c->r[29]); // 801DF4F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF4D8; } // 801DF4F4
  c->r[3]=c->r[28]|c->r[28]; // 801DF4F8
  c->lr=0x801DF500u; f_8017A720(c); // 801DF4FC
  cmps(c,0,(int32_t)c->r[27],1); // 801DF500
  if (crb(c,2)) { goto L_801DF53C; } // 801DF504
  if (!crb(c,0)) { goto L_801DF518; } // 801DF508
  cmps(c,0,(int32_t)c->r[27],0); // 801DF50C
  if (!crb(c,0)) { goto L_801DF524; } // 801DF510
  goto L_801DF568; // 801DF514
L_801DF518:;
  cmps(c,0,(int32_t)c->r[27],3); // 801DF518
  if (!crb(c,0)) { goto L_801DF568; } // 801DF51C
  goto L_801DF554; // 801DF520
L_801DF524:;
  c->r[3]=0u+0x00000000u; // 801DF524
  c->r[4]=0u+0x00000000u; // 801DF528
  c->lr=0x801DF530u; f_800FD548(c); // 801DF52C
  c->r[0]=0u+0x00000000u; // 801DF530
  W32(c->r[26]+0x000000F4u,c->r[0]); // 801DF534
  goto L_801DF568; // 801DF538
L_801DF53C:;
  c->r[3]=0u+0x00000000u; // 801DF53C
  c->r[4]=0u+0x00000000u; // 801DF540
  c->lr=0x801DF548u; f_800FD5AC(c); // 801DF544
  c->r[0]=0u+0x00000000u; // 801DF548
  W32(c->r[26]+0x000000F8u,c->r[0]); // 801DF54C
  goto L_801DF568; // 801DF550
L_801DF554:;
  c->r[3]=0u+0x00000000u; // 801DF554
  c->r[4]=0u+0x00000000u; // 801DF558
  c->lr=0x801DF560u; f_800FD610(c); // 801DF55C
  c->r[0]=0u+0x00000000u; // 801DF560
  W32(c->r[26]+0x000000FCu,c->r[0]); // 801DF564
L_801DF568:;
  c->r[3]=c->r[31]|c->r[31]; // 801DF568
  c->lr=0x801DF570u; f_800E4F7C(c); // 801DF56C
L_801DF570:;
  c->r[11]=c->r[1]+0x00000020u; // 801DF570
  c->lr=0x801DF578u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF574
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF578
  c->lr=c->r[0]; // 801DF57C
  c->r[1]=c->r[1]+0x00000020u; // 801DF580
  return; // 801DF584
}

// fn_801DF588
void f_801DF588(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF588
  c->r[0]=c->lr; // 801DF58C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DF590
  c->r[11]=c->r[1]+0x00000040u; // 801DF594
  c->lr=0x801DF59Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DF598
  c->r[24]=c->r[3]|c->r[3]; // 801DF59C
  c->r[29]=c->r[4]|c->r[4]; // 801DF5A0
  c->lr=0x801DF5A8u; f_800E8FB4(c); // 801DF5A4
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF5A8
  c->r[31]=c->r[3]|c->r[3]; // 801DF5AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF5B0
  if (!crb(c,2)) { goto L_801DF5E4; } // 801DF5B4
  c->r[23]=0u+0x80360000u; // 801DF5B8
  c->r[3]=c->r[23]+0x00006A30u; // 801DF5BC
  c->lr=0x801DF5C4u; f_801DE214(c); // 801DF5C0
  c->r[4]=0u+0x801E0000u; // 801DF5C4
  c->r[5]=0u+0x80360000u; // 801DF5C8
  c->r[3]=c->r[23]+0x00006A30u; // 801DF5CC
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF5D0
  c->r[5]=c->r[5]+0x00006A20u; // 801DF5D4
  c->lr=0x801DF5DCu; f_8010967C(c); // 801DF5D8
  c->r[0]=0u+0x00000001u; // 801DF5DC
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF5E0
L_801DF5E4:;
  c->r[3]=0u+0x80360000u; // 801DF5E4
  c->r[0]=R32(c->r[3]+0x00006A30u); // 801DF5E8
  cmps(c,0,(int32_t)c->r[0],2); // 801DF5EC
  if (!crb(c,2)) { goto L_801DF61C; } // 801DF5F0
  c->r[0]=R32(c->r[24]+0x00000000u); // 801DF5F4
  c->r[30]=0u+0x00000004u; // 801DF5F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DF5FC
  c->r[0]=R32(c->r[24]+0x00000004u); // 801DF600
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DF604
  c->r[0]=R32(c->r[24]+0x00000008u); // 801DF608
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DF60C
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 801DF610
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF614
  goto L_801DF638; // 801DF618
L_801DF61C:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 801DF61C
  c->r[30]=0u+0x00000003u; // 801DF620
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DF624
  c->r[0]=R32(c->r[24]+0x00000004u); // 801DF628
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DF62C
  c->r[0]=R32(c->r[24]+0x00000008u); // 801DF630
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DF634
L_801DF638:;
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF638
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF63C
  if (!crb(c,2)) { goto L_801DF670; } // 801DF640
  c->r[23]=0u+0x80360000u; // 801DF644
  c->r[3]=c->r[23]+0x00006A30u; // 801DF648
  c->lr=0x801DF650u; f_801DE214(c); // 801DF64C
  c->r[4]=0u+0x801E0000u; // 801DF650
  c->r[5]=0u+0x80360000u; // 801DF654
  c->r[3]=c->r[23]+0x00006A30u; // 801DF658
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF65C
  c->r[5]=c->r[5]+0x00006A20u; // 801DF660
  c->lr=0x801DF668u; f_8010967C(c); // 801DF664
  c->r[0]=0u+0x00000001u; // 801DF668
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF66C
L_801DF670:;
  c->r[24]=0u+0x80360000u; // 801DF670
  c->r[24]=c->r[24]+0x00006A30u; // 801DF674
  c->r[23]=c->r[24]+c->r[29]; // 801DF678
  c->r[0]=R8(c->r[23]+0x000000F0u); // 801DF67C
  cmps(c,0,(int32_t)c->r[0],0); // 801DF680
  if (crb(c,2)) { goto L_801DF74C; } // 801DF684
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF688
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF68C
  if (!crb(c,2)) { goto L_801DF6BC; } // 801DF690
  c->r[3]=c->r[24]|c->r[24]; // 801DF694
  c->lr=0x801DF69Cu; f_801DE214(c); // 801DF698
  c->r[4]=0u+0x801E0000u; // 801DF69C
  c->r[5]=0u+0x80360000u; // 801DF6A0
  c->r[3]=c->r[24]|c->r[24]; // 801DF6A4
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF6A8
  c->r[5]=c->r[5]+0x00006A20u; // 801DF6AC
  c->lr=0x801DF6B4u; f_8010967C(c); // 801DF6B0
  c->r[0]=0u+0x00000001u; // 801DF6B4
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF6B8
L_801DF6BC:;
  c->r[3]=R8(c->r[23]+0x000000F0u); // 801DF6BC
  c->r[24]=c->r[1]+0x00000008u; // 801DF6C0
  c->r[25]=0u+0x00000000u; // 801DF6C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DF6C8
  W8(c->r[23]+0x000000F0u,c->r[0]); // 801DF6CC
  goto L_801DF6EC; // 801DF6D0
L_801DF6D4:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 801DF6D4
  c->r[4]=0u+0x00000000u; // 801DF6D8
  c->r[5]=0u+0x00000180u; // 801DF6DC
  c->lr=0x801DF6E4u; f_8000443C(c); // 801DF6E0
  c->r[24]=c->r[24]+0x00000004u; // 801DF6E4
  c->r[25]=c->r[25]+0x00000001u; // 801DF6E8
L_801DF6EC:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[30]); // 801DF6EC
  if (crb(c,0)) { IRQCHK(c); goto L_801DF6D4; } // 801DF6F0
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF6F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF6F8
  if (!crb(c,2)) { goto L_801DF72C; } // 801DF6FC
  c->r[23]=0u+0x80360000u; // 801DF700
  c->r[3]=c->r[23]+0x00006A30u; // 801DF704
  c->lr=0x801DF70Cu; f_801DE214(c); // 801DF708
  c->r[4]=0u+0x801E0000u; // 801DF70C
  c->r[5]=0u+0x80360000u; // 801DF710
  c->r[3]=c->r[23]+0x00006A30u; // 801DF714
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF718
  c->r[5]=c->r[5]+0x00006A20u; // 801DF71C
  c->lr=0x801DF724u; f_8010967C(c); // 801DF720
  c->r[0]=0u+0x00000001u; // 801DF724
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF728
L_801DF72C:;
  c->lr=0x801DF730u; f_800E8FB4(c); // 801DF72C
  c->r[4]=0u+0x80360000u; // 801DF730
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801DF734
  c->r[4]=c->r[4]+0x00006A30u; // 801DF738
  c->r[5]=c->r[3]-c->r[31]; // 801DF73C
  c->r[3]=c->r[4]+c->r[0]; // 801DF740
  W32(c->r[3]+0x000000F4u,c->r[5]); // 801DF744
  goto L_801DF94C; // 801DF748
L_801DF74C:;
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF74C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF750
  if (!crb(c,2)) { goto L_801DF780; } // 801DF754
  c->r[3]=c->r[24]|c->r[24]; // 801DF758
  c->lr=0x801DF760u; f_801DE214(c); // 801DF75C
  c->r[4]=0u+0x801E0000u; // 801DF760
  c->r[5]=0u+0x80360000u; // 801DF764
  c->r[3]=c->r[24]|c->r[24]; // 801DF768
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF76C
  c->r[5]=c->r[5]+0x00006A20u; // 801DF770
  c->lr=0x801DF778u; f_8010967C(c); // 801DF774
  c->r[0]=0u+0x00000001u; // 801DF778
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF77C
L_801DF780:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801DF780
  c->r[24]=0u+0x80360000u; // 801DF784
  c->r[24]=c->r[24]+0x00006A30u; // 801DF788
  c->r[23]=c->r[24]+c->r[0]; // 801DF78C
  c->r[0]=R32(c->r[23]+0x000000B4u); // 801DF790
  cmps(c,0,(int32_t)c->r[0],0); // 801DF794
  if (!crb(c,2)) { goto L_801DF820; } // 801DF798
  c->r[23]=c->r[1]+0x00000008u; // 801DF79C
  c->r[24]=0u+0x00000000u; // 801DF7A0
  goto L_801DF7C0; // 801DF7A4
L_801DF7A8:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 801DF7A8
  c->r[4]=0u+0x00000000u; // 801DF7AC
  c->r[5]=0u+0x00000180u; // 801DF7B0
  c->lr=0x801DF7B8u; f_8000443C(c); // 801DF7B4
  c->r[23]=c->r[23]+0x00000004u; // 801DF7B8
  c->r[24]=c->r[24]+0x00000001u; // 801DF7BC
L_801DF7C0:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[30]); // 801DF7C0
  if (crb(c,0)) { IRQCHK(c); goto L_801DF7A8; } // 801DF7C4
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF7C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF7CC
  if (!crb(c,2)) { goto L_801DF800; } // 801DF7D0
  c->r[23]=0u+0x80360000u; // 801DF7D4
  c->r[3]=c->r[23]+0x00006A30u; // 801DF7D8
  c->lr=0x801DF7E0u; f_801DE214(c); // 801DF7DC
  c->r[4]=0u+0x801E0000u; // 801DF7E0
  c->r[5]=0u+0x80360000u; // 801DF7E4
  c->r[3]=c->r[23]+0x00006A30u; // 801DF7E8
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF7EC
  c->r[5]=c->r[5]+0x00006A20u; // 801DF7F0
  c->lr=0x801DF7F8u; f_8010967C(c); // 801DF7F4
  c->r[0]=0u+0x00000001u; // 801DF7F8
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF7FC
L_801DF800:;
  c->lr=0x801DF804u; f_800E8FB4(c); // 801DF800
  c->r[4]=0u+0x80360000u; // 801DF804
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801DF808
  c->r[4]=c->r[4]+0x00006A30u; // 801DF80C
  c->r[5]=c->r[3]-c->r[31]; // 801DF810
  c->r[3]=c->r[4]+c->r[0]; // 801DF814
  W32(c->r[3]+0x000000F4u,c->r[5]); // 801DF818
  goto L_801DF94C; // 801DF81C
L_801DF820:;
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF820
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF824
  if (!crb(c,2)) { goto L_801DF854; } // 801DF828
  c->r[3]=c->r[24]|c->r[24]; // 801DF82C
  c->lr=0x801DF834u; f_801DE214(c); // 801DF830
  c->r[4]=0u+0x801E0000u; // 801DF834
  c->r[5]=0u+0x80360000u; // 801DF838
  c->r[3]=c->r[24]|c->r[24]; // 801DF83C
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF840
  c->r[5]=c->r[5]+0x00006A20u; // 801DF844
  c->lr=0x801DF84Cu; f_8010967C(c); // 801DF848
  c->r[0]=0u+0x00000001u; // 801DF84C
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF850
L_801DF854:;
  c->r[28]=R32(c->r[23]+0x000000B8u); // 801DF854
  c->r[27]=c->r[23]+0x000000B8u; // 801DF858
  c->r[23]=0u+0x80360000u; // 801DF85C
  c->r[24]=0u+0x801E0000u; // 801DF860
  c->r[25]=0u+0x80360000u; // 801DF864
  c->r[26]=0u+0x00000001u; // 801DF868
  goto L_801DF8C8; // 801DF86C
L_801DF870:;
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF870
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF874
  if (!crb(c,2)) { goto L_801DF898; } // 801DF878
  c->r[3]=c->r[23]+0x00006A30u; // 801DF87C
  c->lr=0x801DF884u; f_801DE214(c); // 801DF880
  c->r[3]=c->r[23]+0x00006A30u; // 801DF884
  c->r[4]=c->r[24]+0xFFFFE798u; // 801DF888
  c->r[5]=c->r[25]+0x00006A20u; // 801DF88C
  c->lr=0x801DF894u; f_8010967C(c); // 801DF890
  W8(c->r[13]+0xFFFF9DA8u,c->r[26]); // 801DF894
L_801DF898:;
  c->r[12]=R32(c->r[28]+0xFFFFFFFCu); // 801DF898
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 801DF89C
  c->r[4]=c->r[30]|c->r[30]; // 801DF8A0
  c->r[5]=c->r[1]+0x00000008u; // 801DF8A4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801DF8A8
  c->r[6]=0u+0x00000180u; // 801DF8AC
  {uint32_t ea=c->r[2]+0xFFFF9E7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DF8B0
  c->r[7]=0u+0x00000000u; // 801DF8B4
  c->r[8]=R32(c->r[23]+0x00006A30u); // 801DF8B8
  c->ctr=c->r[12]; // 801DF8BC
  if (true) { c->lr=0x801DF8C4u; dispatch(c,c->ctr); } // 801DF8C0
  c->r[28]=R32(c->r[28]+0x00000000u); // 801DF8C4
L_801DF8C8:;
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF8C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF8CC
  if (!crb(c,2)) { goto L_801DF8F0; } // 801DF8D0
  c->r[3]=c->r[23]+0x00006A30u; // 801DF8D4
  c->lr=0x801DF8DCu; f_801DE214(c); // 801DF8D8
  c->r[3]=c->r[23]+0x00006A30u; // 801DF8DC
  c->r[4]=c->r[24]+0xFFFFE798u; // 801DF8E0
  c->r[5]=c->r[25]+0x00006A20u; // 801DF8E4
  c->lr=0x801DF8ECu; f_8010967C(c); // 801DF8E8
  W8(c->r[13]+0xFFFF9DA8u,c->r[26]); // 801DF8EC
L_801DF8F0:;
  cmpu(c,0,c->r[28],c->r[27]); // 801DF8F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF870; } // 801DF8F4
  c->r[0]=R8(c->r[13]+0xFFFF9DA8u); // 801DF8F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DF8FC
  if (!crb(c,2)) { goto L_801DF930; } // 801DF900
  c->r[28]=0u+0x80360000u; // 801DF904
  c->r[3]=c->r[28]+0x00006A30u; // 801DF908
  c->lr=0x801DF910u; f_801DE214(c); // 801DF90C
  c->r[4]=0u+0x801E0000u; // 801DF910
  c->r[5]=0u+0x80360000u; // 801DF914
  c->r[3]=c->r[28]+0x00006A30u; // 801DF918
  c->r[4]=c->r[4]+0xFFFFE798u; // 801DF91C
  c->r[5]=c->r[5]+0x00006A20u; // 801DF920
  c->lr=0x801DF928u; f_8010967C(c); // 801DF924
  c->r[0]=0u+0x00000001u; // 801DF928
  W8(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801DF92C
L_801DF930:;
  c->lr=0x801DF934u; f_800E8FB4(c); // 801DF930
  c->r[4]=0u+0x80360000u; // 801DF934
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801DF938
  c->r[4]=c->r[4]+0x00006A30u; // 801DF93C
  c->r[5]=c->r[3]-c->r[31]; // 801DF940
  c->r[3]=c->r[4]+c->r[0]; // 801DF944
  W32(c->r[3]+0x000000F4u,c->r[5]); // 801DF948
L_801DF94C:;
  c->r[11]=c->r[1]+0x00000040u; // 801DF94C
  c->lr=0x801DF954u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DF950
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DF954
  c->lr=c->r[0]; // 801DF958
  c->r[1]=c->r[1]+0x00000040u; // 801DF95C
  return; // 801DF960
}

// __ct__Q44nw4r3snd6detail7AxVoiceFv
void f_801DF964(Ctx* __restrict c) {
  trace_call(0x801DF964u);
  c->r[4]=0u+0x00010000u; // 801DF964
  c->r[5]=0u+0x00000000u; // 801DF968
  c->r[0]=c->r[4]+0xFFFF8000u; // 801DF96C
  W32(c->r[3]+0x00000000u,c->r[5]); // 801DF970
  W16(c->r[3]+0x00000008u,c->r[0]); // 801DF974
  W32(c->r[3]+0x00000004u,c->r[5]); // 801DF978
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801DF97C
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 801DF980
  W16(c->r[3]+0x0000000Au,c->r[5]); // 801DF984
  W32(c->r[3]+0x00000010u,c->r[5]); // 801DF988
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 801DF98C
  W8(c->r[3]+0x0000001Du,c->r[5]); // 801DF990
  W32(c->r[3]+0x00000038u,c->r[5]); // 801DF994
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 801DF998
  W32(c->r[3]+0x00000040u,c->r[5]); // 801DF99C
  W32(c->r[3]+0x00000044u,c->r[5]); // 801DF9A0
  return; // 801DF9A4
}

// __dt__Q44nw4r3snd6detail7AxVoiceFv
void f_801DF9A8(Ctx* __restrict c) {
  trace_call(0x801DF9A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF9A8
  c->r[0]=c->lr; // 801DF9AC
  cmps(c,0,(int32_t)c->r[3],0); // 801DF9B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF9B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF9B8
  c->r[31]=c->r[3]|c->r[3]; // 801DF9BC
  if (crb(c,2)) { goto L_801DF9D0; } // 801DF9C0
  cmps(c,0,(int32_t)c->r[4],0); // 801DF9C4
  if (!crb(c,1)) { goto L_801DF9D0; } // 801DF9C8
  c->lr=0x801DF9D0u; f_8009230C(c); // 801DF9CC
L_801DF9D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801DF9D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF9D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF9D8
  c->lr=c->r[0]; // 801DF9DC
  c->r[1]=c->r[1]+0x00000010u; // 801DF9E0
  return; // 801DF9E4
}

// Setup__Q44nw4r3snd6detail7AxVoiceFPCvQ54nw4r3snd6detail7AxVoice6Formati
void f_801DF9E8(Ctx* __restrict c) {
  trace_call(0x801DF9E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF9E8
  c->r[0]=c->lr; // 801DF9EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF9F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF9F4
  c->r[31]=c->r[4]|c->r[4]; // 801DF9F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DF9FC
  c->r[30]=c->r[6]|c->r[6]; // 801DFA00
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DFA04
  c->r[29]=c->r[5]|c->r[5]; // 801DFA08
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DFA0C
  c->r[28]=c->r[3]|c->r[3]; // 801DFA10
  c->lr=0x801DFA18u; f_800E4F54(c); // 801DFA14
  W32(c->r[28]+0x00000010u,c->r[31]); // 801DFA18
  c->r[31]=c->r[3]|c->r[3]; // 801DFA1C
  c->r[3]=c->r[28]+0x0000001Eu; // 801DFA20
  c->r[4]=0u+0x00000000u; // 801DFA24
  W32(c->r[28]+0x00000014u,c->r[29]); // 801DFA28
  c->r[5]=0u+0x00000018u; // 801DFA2C
  W32(c->r[28]+0x00000018u,c->r[30]); // 801DFA30
  c->lr=0x801DFA38u; f_8000443C(c); // 801DFA34
  c->r[0]=0u+0x00000001u; // 801DFA38
  c->r[3]=c->r[31]|c->r[31]; // 801DFA3C
  W8(c->r[28]+0x0000001Cu,c->r[0]); // 801DFA40
  c->lr=0x801DFA48u; f_800E4F7C(c); // 801DFA44
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFA48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DFA4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DFA50
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DFA54
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DFA58
  c->lr=c->r[0]; // 801DFA5C
  c->r[1]=c->r[1]+0x00000020u; // 801DFA60
  return; // 801DFA64
}

// IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv
void f_801DFA68(Ctx* __restrict c) {
  trace_call(0x801DFA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFA68
  c->r[0]=c->lr; // 801DFA6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFA70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DFA74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DFA78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DFA7C
  c->r[29]=c->r[3]|c->r[3]; // 801DFA80
  c->lr=0x801DFA88u; f_800E4F54(c); // 801DFA84
  c->r[0]=R32(c->r[29]+0x00000010u); // 801DFA88
  c->r[31]=c->r[3]|c->r[3]; // 801DFA8C
  cmps(c,0,(int32_t)c->r[0],0); // 801DFA90
  if (!crb(c,2)) { goto L_801DFAA4; } // 801DFA94
  c->lr=0x801DFA9Cu; f_800E4F7C(c); // 801DFA98
  c->r[3]=0u+0x00000000u; // 801DFA9C
  goto L_801DFB94; // 801DFAA0
L_801DFAA4:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 801DFAA4
  cmps(c,0,(int32_t)c->r[4],0); // 801DFAA8
  if (crb(c,2)) { goto L_801DFAC4; } // 801DFAAC
  c->r[3]=R16(c->r[4]+0x000000A2u); // 801DFAB0
  c->r[0]=R16(c->r[4]+0x000000A4u); // 801DFAB4
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801DFAB8
  c->r[30]=c->r[3]+c->r[0]; // 801DFABC
  goto L_801DFAC8; // 801DFAC0
L_801DFAC4:;
  c->r[30]=0u+0x00000000u; // 801DFAC4
L_801DFAC8:;
  c->lr=0x801DFACCu; f_801DE734(c); // 801DFAC8
  c->lr=0x801DFAD0u; f_801DEDCC(c); // 801DFACC
  cmps(c,0,(int32_t)c->r[3],0); // 801DFAD0
  c->r[0]=R32(c->r[29]+0x00000014u); // 801DFAD4
  if (crb(c,2)) { goto L_801DFAE0; } // 801DFAD8
  c->r[3]=c->r[3]+0x80000000u; // 801DFADC
L_801DFAE0:;
  cmps(c,0,(int32_t)c->r[0],2); // 801DFAE0
  c->r[4]=0u+0x00000000u; // 801DFAE4
  if (crb(c,2)) { goto L_801DFB10; } // 801DFAE8
  if (!crb(c,0)) { goto L_801DFAFC; } // 801DFAEC
  cmps(c,0,(int32_t)c->r[0],1); // 801DFAF0
  if (!crb(c,0)) { goto L_801DFB18; } // 801DFAF4
  goto L_801DFB1C; // 801DFAF8
L_801DFAFC:;
  cmps(c,0,(int32_t)c->r[0],4); // 801DFAFC
  if (!crb(c,0)) { goto L_801DFB1C; } // 801DFB00
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801DFB04
  c->r[4]=c->r[3]+0x00000002u; // 801DFB08
  goto L_801DFB1C; // 801DFB0C
L_801DFB10:;
  c->r[4]=c->r[3]|c->r[3]; // 801DFB10
  goto L_801DFB1C; // 801DFB14
L_801DFB18:;
  c->r[4]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801DFB18
L_801DFB1C:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801DFB1C
  cmps(c,0,(int32_t)c->r[0],2); // 801DFB20
  if (crb(c,2)) { goto L_801DFB48; } // 801DFB24
  if (!crb(c,0)) { goto L_801DFB38; } // 801DFB28
  cmps(c,0,(int32_t)c->r[0],1); // 801DFB2C
  if (!crb(c,0)) { goto L_801DFB50; } // 801DFB30
  goto L_801DFB58; // 801DFB34
L_801DFB38:;
  cmps(c,0,(int32_t)c->r[0],4); // 801DFB38
  if (!crb(c,0)) { goto L_801DFB58; } // 801DFB3C
  c->r[0]=c->r[4]+0x00000200u; // 801DFB40
  goto L_801DFB68; // 801DFB44
L_801DFB48:;
  c->r[0]=c->r[4]+0x00000100u; // 801DFB48
  goto L_801DFB68; // 801DFB4C
L_801DFB50:;
  c->r[0]=c->r[4]+0x00000080u; // 801DFB50
  goto L_801DFB68; // 801DFB54
L_801DFB58:;
  c->r[3]=c->r[31]|c->r[31]; // 801DFB58
  c->lr=0x801DFB60u; f_800E4F7C(c); // 801DFB5C
  c->r[3]=0u+0x00000000u; // 801DFB60
  goto L_801DFB94; // 801DFB64
L_801DFB68:;
  cmpu(c,0,c->r[4],c->r[30]); // 801DFB68
  if (crb(c,1)) { goto L_801DFB88; } // 801DFB6C
  cmpu(c,0,c->r[30],c->r[0]); // 801DFB70
  if (!crb(c,0)) { goto L_801DFB88; } // 801DFB74
  c->r[3]=c->r[31]|c->r[31]; // 801DFB78
  c->lr=0x801DFB80u; f_800E4F7C(c); // 801DFB7C
  c->r[3]=0u+0x00000001u; // 801DFB80
  goto L_801DFB94; // 801DFB84
L_801DFB88:;
  c->r[3]=c->r[31]|c->r[31]; // 801DFB88
  c->lr=0x801DFB90u; f_800E4F7C(c); // 801DFB8C
  c->r[3]=0u+0x00000000u; // 801DFB90
L_801DFB94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFB94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DFB98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DFB9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DFBA0
  c->lr=c->r[0]; // 801DFBA4
  c->r[1]=c->r[1]+0x00000020u; // 801DFBA8
  return; // 801DFBAC
}

// SetLoopStart__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_801DFBB0(Ctx* __restrict c) {
  trace_call(0x801DFBB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFBB0
  c->r[0]=c->lr; // 801DFBB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFBB8
  c->r[11]=c->r[1]+0x00000020u; // 801DFBBC
  c->lr=0x801DFBC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFBC0
  c->r[31]=c->r[3]|c->r[3]; // 801DFBC4
  c->r[27]=c->r[4]|c->r[4]; // 801DFBC8
  c->r[28]=c->r[5]|c->r[5]; // 801DFBCC
  c->lr=0x801DFBD4u; f_800E4F54(c); // 801DFBD0
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DFBD4
  c->r[30]=c->r[3]|c->r[3]; // 801DFBD8
  cmps(c,0,(int32_t)c->r[0],0); // 801DFBDC
  if (!crb(c,2)) { goto L_801DFBEC; } // 801DFBE0
  c->lr=0x801DFBE8u; f_800E4F7C(c); // 801DFBE4
  goto L_801DFCB8; // 801DFBE8
L_801DFBEC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DFBEC
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DFBF0
  if (crb(c,2)) { goto L_801DFBFC; } // 801DFBF4
  c->r[27]=c->r[27]+0x80000000u; // 801DFBF8
L_801DFBFC:;
  cmps(c,0,(int32_t)c->r[0],2); // 801DFBFC
  c->r[29]=0u+0x00000000u; // 801DFC00
  if (crb(c,2)) { goto L_801DFC5C; } // 801DFC04
  if (!crb(c,0)) { goto L_801DFC18; } // 801DFC08
  cmps(c,0,(int32_t)c->r[0],1); // 801DFC0C
  if (!crb(c,0)) { goto L_801DFC64; } // 801DFC10
  goto L_801DFC6C; // 801DFC14
L_801DFC18:;
  cmps(c,0,(int32_t)c->r[0],4); // 801DFC18
  if (!crb(c,0)) { goto L_801DFC6C; } // 801DFC1C
  c->r[3]=0u+0x24920000u; // 801DFC20
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801DFC24
  c->r[3]=c->r[3]+0x00004925u; // 801DFC28
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[28])>>32); // 801DFC2C
  c->r[3]=c->r[28]-c->r[4]; // 801DFC30
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801DFC34
  c->r[4]=c->r[3]+c->r[4]; // 801DFC38
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801DFC3C
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801DFC40
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801DFC44
  c->r[4]=c->r[28]-c->r[5]; // 801DFC48
  c->r[0]=c->r[4]+c->r[0]; // 801DFC4C
  c->r[29]=c->r[0]+c->r[3]; // 801DFC50
  c->r[29]=c->r[29]+0x00000002u; // 801DFC54
  goto L_801DFC6C; // 801DFC58
L_801DFC5C:;
  c->r[29]=c->r[27]+c->r[28]; // 801DFC5C
  goto L_801DFC6C; // 801DFC60
L_801DFC64:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 801DFC64
  c->r[29]=c->r[0]+c->r[28]; // 801DFC68
L_801DFC6C:;
  c->lr=0x801DFC70u; f_800E4F54(c); // 801DFC6C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801DFC70
  cmps(c,0,(int32_t)c->r[4],0); // 801DFC74
  if (!crb(c,2)) { goto L_801DFC84; } // 801DFC78
  c->lr=0x801DFC80u; f_800E4F7C(c); // 801DFC7C
  goto L_801DFCB0; // 801DFC80
L_801DFC84:;
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801DFC84
  W16(c->r[4]+0x0000009Au,c->r[0]); // 801DFC88
  c->r[4]=R32(c->r[31]+0x00000000u); // 801DFC8C
  W16(c->r[4]+0x0000009Cu,c->r[29]); // 801DFC90
  c->r[5]=R32(c->r[31]+0x00000000u); // 801DFC94
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801DFC98
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801DFC9C
  if (!crb(c,2)) { goto L_801DFCAC; } // 801DFCA0
  c->r[0]=c->r[4]|0x00001000u; // 801DFCA4
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801DFCA8
L_801DFCAC:;
  c->lr=0x801DFCB0u; f_800E4F7C(c); // 801DFCAC
L_801DFCB0:;
  c->r[3]=c->r[30]|c->r[30]; // 801DFCB0
  c->lr=0x801DFCB8u; f_800E4F7C(c); // 801DFCB4
L_801DFCB8:;
  c->r[11]=c->r[1]+0x00000020u; // 801DFCB8
  c->lr=0x801DFCC0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DFCBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFCC0
  c->lr=c->r[0]; // 801DFCC4
  c->r[1]=c->r[1]+0x00000020u; // 801DFCC8
  return; // 801DFCCC
}

// SetLoopEnd__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_801DFCD0(Ctx* __restrict c) {
  trace_call(0x801DFCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFCD0
  c->r[0]=c->lr; // 801DFCD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFCD8
  c->r[11]=c->r[1]+0x00000020u; // 801DFCDC
  c->lr=0x801DFCE4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFCE0
  c->r[31]=c->r[3]|c->r[3]; // 801DFCE4
  c->r[27]=c->r[4]|c->r[4]; // 801DFCE8
  c->r[28]=c->r[5]|c->r[5]; // 801DFCEC
  c->lr=0x801DFCF4u; f_800E4F54(c); // 801DFCF0
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DFCF4
  c->r[30]=c->r[3]|c->r[3]; // 801DFCF8
  cmps(c,0,(int32_t)c->r[0],0); // 801DFCFC
  if (!crb(c,2)) { goto L_801DFD0C; } // 801DFD00
  c->lr=0x801DFD08u; f_800E4F7C(c); // 801DFD04
  goto L_801DFDE4; // 801DFD08
L_801DFD0C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DFD0C
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DFD10
  if (crb(c,2)) { goto L_801DFD1C; } // 801DFD14
  c->r[27]=c->r[27]+0x80000000u; // 801DFD18
L_801DFD1C:;
  cmps(c,0,(int32_t)c->r[0],2); // 801DFD1C
  c->r[29]=0u+0x00000000u; // 801DFD20
  if (crb(c,2)) { goto L_801DFD80; } // 801DFD24
  if (!crb(c,0)) { goto L_801DFD38; } // 801DFD28
  cmps(c,0,(int32_t)c->r[0],1); // 801DFD2C
  if (!crb(c,0)) { goto L_801DFD8C; } // 801DFD30
  goto L_801DFD98; // 801DFD34
L_801DFD38:;
  cmps(c,0,(int32_t)c->r[0],4); // 801DFD38
  if (!crb(c,0)) { goto L_801DFD98; } // 801DFD3C
  c->r[3]=0u+0x24920000u; // 801DFD40
  c->r[6]=c->r[28]+0xFFFFFFFFu; // 801DFD44
  c->r[3]=c->r[3]+0x00004925u; // 801DFD48
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801DFD4C
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 801DFD50
  c->r[3]=c->r[6]-c->r[4]; // 801DFD54
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801DFD58
  c->r[4]=c->r[3]+c->r[4]; // 801DFD5C
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801DFD60
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801DFD64
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801DFD68
  c->r[4]=c->r[6]-c->r[5]; // 801DFD6C
  c->r[0]=c->r[4]+c->r[0]; // 801DFD70
  c->r[29]=c->r[0]+c->r[3]; // 801DFD74
  c->r[29]=c->r[29]+0x00000002u; // 801DFD78
  goto L_801DFD98; // 801DFD7C
L_801DFD80:;
  c->r[29]=c->r[27]+c->r[28]; // 801DFD80
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 801DFD84
  goto L_801DFD98; // 801DFD88
L_801DFD8C:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 801DFD8C
  c->r[3]=c->r[28]+c->r[0]; // 801DFD90
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 801DFD94
L_801DFD98:;
  c->lr=0x801DFD9Cu; f_800E4F54(c); // 801DFD98
  c->r[4]=R32(c->r[31]+0x00000000u); // 801DFD9C
  cmps(c,0,(int32_t)c->r[4],0); // 801DFDA0
  if (!crb(c,2)) { goto L_801DFDB0; } // 801DFDA4
  c->lr=0x801DFDACu; f_800E4F7C(c); // 801DFDA8
  goto L_801DFDDC; // 801DFDAC
L_801DFDB0:;
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801DFDB0
  W16(c->r[4]+0x0000009Eu,c->r[0]); // 801DFDB4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801DFDB8
  W16(c->r[4]+0x000000A0u,c->r[29]); // 801DFDBC
  c->r[5]=R32(c->r[31]+0x00000000u); // 801DFDC0
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801DFDC4
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801DFDC8
  if (!crb(c,2)) { goto L_801DFDD8; } // 801DFDCC
  c->r[0]=c->r[4]|0x00002000u; // 801DFDD0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801DFDD4
L_801DFDD8:;
  c->lr=0x801DFDDCu; f_800E4F7C(c); // 801DFDD8
L_801DFDDC:;
  c->r[3]=c->r[30]|c->r[30]; // 801DFDDC
  c->lr=0x801DFDE4u; f_800E4F7C(c); // 801DFDE0
L_801DFDE4:;
  c->r[11]=c->r[1]+0x00000020u; // 801DFDE4
  c->lr=0x801DFDECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DFDE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFDEC
  c->lr=c->r[0]; // 801DFDF0
  c->r[1]=c->r[1]+0x00000020u; // 801DFDF4
  return; // 801DFDF8
}

// SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb
void f_801DFDFC(Ctx* __restrict c) {
  trace_call(0x801DFDFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFDFC
  c->r[0]=c->lr; // 801DFE00
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFE04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DFE08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DFE0C
  c->r[30]=c->r[4]|c->r[4]; // 801DFE10
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DFE14
  c->r[29]=c->r[3]|c->r[3]; // 801DFE18
  c->lr=0x801DFE20u; f_800E4F54(c); // 801DFE1C
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DFE20
  c->r[31]=c->r[3]|c->r[3]; // 801DFE24
  cmps(c,0,(int32_t)c->r[0],0); // 801DFE28
  if (!crb(c,2)) { goto L_801DFE38; } // 801DFE2C
  c->lr=0x801DFE34u; f_800E4F7C(c); // 801DFE30
  goto L_801DFE78; // 801DFE34
L_801DFE38:;
  c->lr=0x801DFE3Cu; f_800E4F54(c); // 801DFE38
  c->r[4]=R32(c->r[29]+0x00000000u); // 801DFE3C
  cmps(c,0,(int32_t)c->r[4],0); // 801DFE40
  if (!crb(c,2)) { goto L_801DFE50; } // 801DFE44
  c->lr=0x801DFE4Cu; f_800E4F7C(c); // 801DFE48
  goto L_801DFE70; // 801DFE4C
L_801DFE50:;
  W16(c->r[4]+0x00000096u,c->r[30]); // 801DFE50
  c->r[5]=R32(c->r[29]+0x00000000u); // 801DFE54
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801DFE58
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801DFE5C
  if (!crb(c,2)) { goto L_801DFE6C; } // 801DFE60
  c->r[0]=c->r[4]|0x00000800u; // 801DFE64
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801DFE68
L_801DFE6C:;
  c->lr=0x801DFE70u; f_800E4F7C(c); // 801DFE6C
L_801DFE70:;
  c->r[3]=c->r[31]|c->r[31]; // 801DFE70
  c->lr=0x801DFE78u; f_800E4F7C(c); // 801DFE74
L_801DFE78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DFE78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DFE7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DFE80
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DFE84
  c->lr=c->r[0]; // 801DFE88
  c->r[1]=c->r[1]+0x00000020u; // 801DFE8C
  return; // 801DFE90
}

// StopAtPoint__Q44nw4r3snd6detail7AxVoiceFPCvUl
void f_801DFE94(Ctx* __restrict c) {
  trace_call(0x801DFE94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFE94
  c->r[0]=c->lr; // 801DFE98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFE9C
  c->r[11]=c->r[1]+0x00000020u; // 801DFEA0
  c->lr=0x801DFEA8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFEA4
  c->r[30]=c->r[3]|c->r[3]; // 801DFEA8
  c->r[26]=c->r[4]|c->r[4]; // 801DFEAC
  c->r[27]=c->r[5]|c->r[5]; // 801DFEB0
  c->lr=0x801DFEB8u; f_800E4F54(c); // 801DFEB4
  c->r[0]=R32(c->r[30]+0x00000000u); // 801DFEB8
  c->r[29]=c->r[3]|c->r[3]; // 801DFEBC
  cmps(c,0,(int32_t)c->r[0],0); // 801DFEC0
  if (!crb(c,2)) { goto L_801DFED0; } // 801DFEC4
  c->lr=0x801DFECCu; f_800E4F7C(c); // 801DFEC8
  goto L_801E0078; // 801DFECC
L_801DFED0:;
  c->lr=0x801DFED4u; f_801DE734(c); // 801DFED0
  c->lr=0x801DFED8u; f_801DEDCC(c); // 801DFED4
  cmps(c,0,(int32_t)c->r[3],0); // 801DFED8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801DFEDC
  if (crb(c,2)) { goto L_801DFEE8; } // 801DFEE0
  c->r[3]=c->r[3]+0x80000000u; // 801DFEE4
L_801DFEE8:;
  cmps(c,0,(int32_t)c->r[0],2); // 801DFEE8
  c->r[31]=0u+0x00000000u; // 801DFEEC
  if (crb(c,2)) { goto L_801DFF18; } // 801DFEF0
  if (!crb(c,0)) { goto L_801DFF04; } // 801DFEF4
  cmps(c,0,(int32_t)c->r[0],1); // 801DFEF8
  if (!crb(c,0)) { goto L_801DFF20; } // 801DFEFC
  goto L_801DFF24; // 801DFF00
L_801DFF04:;
  cmps(c,0,(int32_t)c->r[0],4); // 801DFF04
  if (!crb(c,0)) { goto L_801DFF24; } // 801DFF08
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801DFF0C
  c->r[31]=c->r[3]+0x00000002u; // 801DFF10
  goto L_801DFF24; // 801DFF14
L_801DFF18:;
  c->r[31]=c->r[3]|c->r[3]; // 801DFF18
  goto L_801DFF24; // 801DFF1C
L_801DFF20:;
  c->r[31]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801DFF20
L_801DFF24:;
  cmps(c,0,(int32_t)c->r[26],0); // 801DFF24
  if (crb(c,2)) { goto L_801DFF30; } // 801DFF28
  c->r[26]=c->r[26]+0x80000000u; // 801DFF2C
L_801DFF30:;
  cmps(c,0,(int32_t)c->r[0],2); // 801DFF30
  c->r[28]=0u+0x00000000u; // 801DFF34
  if (crb(c,2)) { goto L_801DFF94; } // 801DFF38
  if (!crb(c,0)) { goto L_801DFF4C; } // 801DFF3C
  cmps(c,0,(int32_t)c->r[0],1); // 801DFF40
  if (!crb(c,0)) { goto L_801DFFA0; } // 801DFF44
  goto L_801DFFAC; // 801DFF48
L_801DFF4C:;
  cmps(c,0,(int32_t)c->r[0],4); // 801DFF4C
  if (!crb(c,0)) { goto L_801DFFAC; } // 801DFF50
  c->r[3]=0u+0x24920000u; // 801DFF54
  c->r[6]=c->r[27]+0xFFFFFFFFu; // 801DFF58
  c->r[3]=c->r[3]+0x00004925u; // 801DFF5C
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 801DFF60
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 801DFF64
  c->r[3]=c->r[6]-c->r[4]; // 801DFF68
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801DFF6C
  c->r[4]=c->r[3]+c->r[4]; // 801DFF70
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801DFF74
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801DFF78
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801DFF7C
  c->r[4]=c->r[6]-c->r[5]; // 801DFF80
  c->r[0]=c->r[4]+c->r[0]; // 801DFF84
  c->r[28]=c->r[0]+c->r[3]; // 801DFF88
  c->r[28]=c->r[28]+0x00000002u; // 801DFF8C
  goto L_801DFFAC; // 801DFF90
L_801DFF94:;
  c->r[28]=c->r[26]+c->r[27]; // 801DFF94
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 801DFF98
  goto L_801DFFAC; // 801DFF9C
L_801DFFA0:;
  c->r[0]=rotl(c->r[26],31)&0x7FFFFFFFu; // 801DFFA0
  c->r[3]=c->r[27]+c->r[0]; // 801DFFA4
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 801DFFA8
L_801DFFAC:;
  c->lr=0x801DFFB0u; f_800E4F54(c); // 801DFFAC
  c->r[4]=R32(c->r[30]+0x00000000u); // 801DFFB0
  cmps(c,0,(int32_t)c->r[4],0); // 801DFFB4
  if (!crb(c,2)) { goto L_801DFFC4; } // 801DFFB8
  c->lr=0x801DFFC0u; f_800E4F7C(c); // 801DFFBC
  goto L_801DFFF0; // 801DFFC0
L_801DFFC4:;
  c->r[0]=rotl(c->r[31],16)&0x0000FFFFu; // 801DFFC4
  W16(c->r[4]+0x0000009Au,c->r[0]); // 801DFFC8
  c->r[4]=R32(c->r[30]+0x00000000u); // 801DFFCC
  W16(c->r[4]+0x0000009Cu,c->r[31]); // 801DFFD0
  c->r[5]=R32(c->r[30]+0x00000000u); // 801DFFD4
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801DFFD8
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801DFFDC
  if (!crb(c,2)) { goto L_801DFFEC; } // 801DFFE0
  c->r[0]=c->r[4]|0x00001000u; // 801DFFE4
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801DFFE8
L_801DFFEC:;
  c->lr=0x801DFFF0u; f_800E4F7C(c); // 801DFFEC
L_801DFFF0:;
  c->lr=0x801DFFF4u; f_800E4F54(c); // 801DFFF0
  c->r[4]=R32(c->r[30]+0x00000000u); // 801DFFF4
  cmps(c,0,(int32_t)c->r[4],0); // 801DFFF8
  if (!crb(c,2)) { goto L_801E0008; } // 801DFFFC
  c->lr=0x801E0004u; f_800E4F7C(c); // 801E0000
  goto L_801E0034; // 801E0004
L_801E0008:;
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801E0008
  W16(c->r[4]+0x0000009Eu,c->r[0]); // 801E000C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E0010
  W16(c->r[4]+0x000000A0u,c->r[28]); // 801E0014
  c->r[5]=R32(c->r[30]+0x00000000u); // 801E0018
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801E001C
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801E0020
  if (!crb(c,2)) { goto L_801E0030; } // 801E0024
  c->r[0]=c->r[4]|0x00002000u; // 801E0028
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801E002C
L_801E0030:;
  c->lr=0x801E0034u; f_800E4F7C(c); // 801E0030
L_801E0034:;
  c->lr=0x801E0038u; f_800E4F54(c); // 801E0034
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E0038
  cmps(c,0,(int32_t)c->r[4],0); // 801E003C
  if (!crb(c,2)) { goto L_801E004C; } // 801E0040
  c->lr=0x801E0048u; f_800E4F7C(c); // 801E0044
  goto L_801E0070; // 801E0048
L_801E004C:;
  c->r[0]=0u+0x00000000u; // 801E004C
  W16(c->r[4]+0x00000096u,c->r[0]); // 801E0050
  c->r[5]=R32(c->r[30]+0x00000000u); // 801E0054
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801E0058
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801E005C
  if (!crb(c,2)) { goto L_801E006C; } // 801E0060
  c->r[0]=c->r[4]|0x00000800u; // 801E0064
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801E0068
L_801E006C:;
  c->lr=0x801E0070u; f_800E4F7C(c); // 801E006C
L_801E0070:;
  c->r[3]=c->r[29]|c->r[29]; // 801E0070
  c->lr=0x801E0078u; f_800E4F7C(c); // 801E0074
L_801E0078:;
  c->r[11]=c->r[1]+0x00000020u; // 801E0078
  c->lr=0x801E0080u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E007C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0080
  c->lr=c->r[0]; // 801E0084
  c->r[1]=c->r[1]+0x00000020u; // 801E0088
  return; // 801E008C
}

// IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv
void f_801E0090(Ctx* __restrict c) {
  trace_call(0x801E0090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0090
  c->r[0]=c->lr; // 801E0094
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0098
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E009C
  c->r[31]=c->r[3]|c->r[3]; // 801E00A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E00A4
  c->r[30]=c->r[5]|c->r[5]; // 801E00A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E00AC
  c->r[29]=c->r[4]|c->r[4]; // 801E00B0
  c->lr=0x801E00B8u; f_800E4F54(c); // 801E00B4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E00B8
  cmps(c,0,(int32_t)c->r[0],0); // 801E00BC
  if (!crb(c,2)) { goto L_801E00D0; } // 801E00C0
  c->lr=0x801E00C8u; f_800E4F7C(c); // 801E00C4
  c->r[3]=0u+0x00000000u; // 801E00C8
  goto L_801E010C; // 801E00CC
L_801E00D0:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 801E00D0
  c->r[31]=0u+0x00000000u; // 801E00D4
  cmps(c,0,(int32_t)c->r[4],0); // 801E00D8
  if (crb(c,2)) { goto L_801E0104; } // 801E00DC
  cmpu(c,0,c->r[29],c->r[4]); // 801E00E0
  c->r[0]=0u+0x00000000u; // 801E00E4
  if (crb(c,1)) { goto L_801E00F8; } // 801E00E8
  cmpu(c,0,c->r[4],c->r[30]); // 801E00EC
  if (crb(c,1)) { goto L_801E00F8; } // 801E00F0
  c->r[0]=0u+0x00000001u; // 801E00F4
L_801E00F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E00F8
  if (crb(c,2)) { goto L_801E0104; } // 801E00FC
  c->r[31]=0u+0x00000001u; // 801E0100
L_801E0104:;
  c->lr=0x801E0108u; f_800E4F7C(c); // 801E0104
  c->r[3]=c->r[31]|c->r[31]; // 801E0108
L_801E010C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E010C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0110
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0114
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0118
  c->lr=c->r[0]; // 801E011C
  c->r[1]=c->r[1]+0x00000020u; // 801E0120
  return; // 801E0124
}

// GetCurrentPlayingSample__Q44nw4r3snd6detail7AxVoiceCFv
void f_801E0128(Ctx* __restrict c) {
  trace_call(0x801E0128u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0128
  c->r[0]=c->lr; // 801E012C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0130
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0134
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0138
  c->r[30]=c->r[3]|c->r[3]; // 801E013C
  c->lr=0x801E0144u; f_800E4F54(c); // 801E0140
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E0144
  c->r[31]=c->r[3]|c->r[3]; // 801E0148
  cmps(c,0,(int32_t)c->r[0],0); // 801E014C
  if (!crb(c,2)) { goto L_801E0160; } // 801E0150
  c->lr=0x801E0158u; f_800E4F7C(c); // 801E0154
  c->r[3]=0u+0x00000000u; // 801E0158
  goto L_801E02BC; // 801E015C
L_801E0160:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E0160
  cmps(c,0,(int32_t)c->r[0],0); // 801E0164
  if (!crb(c,2)) { goto L_801E0178; } // 801E0168
  c->lr=0x801E0170u; f_800E4F7C(c); // 801E016C
  c->r[3]=0u+0x00000000u; // 801E0170
  goto L_801E02BC; // 801E0174
L_801E0178:;
  c->r[3]=c->r[30]|c->r[30]; // 801E0178
  c->lr=0x801E0180u; f_801DFA68(c); // 801E017C
  cmps(c,0,(int32_t)c->r[3],0); // 801E0180
  if (crb(c,2)) { goto L_801E0224; } // 801E0184
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E0188
  cmps(c,0,(int32_t)c->r[4],0); // 801E018C
  if (crb(c,2)) { goto L_801E01A8; } // 801E0190
  c->r[3]=R16(c->r[4]+0x0000009Eu); // 801E0194
  c->r[0]=R16(c->r[4]+0x000000A0u); // 801E0198
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801E019C
  c->r[3]=c->r[3]+c->r[0]; // 801E01A0
  goto L_801E01AC; // 801E01A4
L_801E01A8:;
  c->r[3]=0u+0x00000000u; // 801E01A8
L_801E01AC:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 801E01AC
  c->r[0]=R32(c->r[30]+0x00000014u); // 801E01B0
  cmps(c,0,(int32_t)c->r[4],0); // 801E01B4
  if (crb(c,2)) { goto L_801E01C0; } // 801E01B8
  c->r[4]=c->r[4]+0x80000000u; // 801E01BC
L_801E01C0:;
  cmps(c,0,(int32_t)c->r[0],2); // 801E01C0
  c->r[30]=0u+0x00000000u; // 801E01C4
  if (crb(c,2)) { goto L_801E0204; } // 801E01C8
  if (!crb(c,0)) { goto L_801E01DC; } // 801E01CC
  cmps(c,0,(int32_t)c->r[0],1); // 801E01D0
  if (!crb(c,0)) { goto L_801E020C; } // 801E01D4
  goto L_801E0214; // 801E01D8
L_801E01DC:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E01DC
  if (!crb(c,0)) { goto L_801E0214; } // 801E01E0
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801E01E4
  c->r[4]=c->r[3]-c->r[0]; // 801E01E8
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 801E01EC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801E01F0
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801E01F4
  c->r[3]=c->r[0]+c->r[3]; // 801E01F8
  c->r[30]=c->r[3]+0xFFFFFFFEu; // 801E01FC
  goto L_801E0214; // 801E0200
L_801E0204:;
  c->r[30]=c->r[3]-c->r[4]; // 801E0204
  goto L_801E0214; // 801E0208
L_801E020C:;
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801E020C
  c->r[30]=c->r[3]-c->r[0]; // 801E0210
L_801E0214:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0214
  c->lr=0x801E021Cu; f_800E4F7C(c); // 801E0218
  c->r[3]=c->r[30]+0x00000001u; // 801E021C
  goto L_801E02BC; // 801E0220
L_801E0224:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E0224
  cmps(c,0,(int32_t)c->r[4],0); // 801E0228
  if (crb(c,2)) { goto L_801E0244; } // 801E022C
  c->r[3]=R16(c->r[4]+0x000000A2u); // 801E0230
  c->r[0]=R16(c->r[4]+0x000000A4u); // 801E0234
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801E0238
  c->r[3]=c->r[3]+c->r[0]; // 801E023C
  goto L_801E0248; // 801E0240
L_801E0244:;
  c->r[3]=0u+0x00000000u; // 801E0244
L_801E0248:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 801E0248
  c->r[0]=R32(c->r[30]+0x00000014u); // 801E024C
  cmps(c,0,(int32_t)c->r[4],0); // 801E0250
  if (crb(c,2)) { goto L_801E025C; } // 801E0254
  c->r[4]=c->r[4]+0x80000000u; // 801E0258
L_801E025C:;
  cmps(c,0,(int32_t)c->r[0],2); // 801E025C
  c->r[30]=0u+0x00000000u; // 801E0260
  if (crb(c,2)) { goto L_801E02A0; } // 801E0264
  if (!crb(c,0)) { goto L_801E0278; } // 801E0268
  cmps(c,0,(int32_t)c->r[0],1); // 801E026C
  if (!crb(c,0)) { goto L_801E02A8; } // 801E0270
  goto L_801E02B0; // 801E0274
L_801E0278:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E0278
  if (!crb(c,0)) { goto L_801E02B0; } // 801E027C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801E0280
  c->r[4]=c->r[3]-c->r[0]; // 801E0284
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 801E0288
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801E028C
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801E0290
  c->r[3]=c->r[0]+c->r[3]; // 801E0294
  c->r[30]=c->r[3]+0xFFFFFFFEu; // 801E0298
  goto L_801E02B0; // 801E029C
L_801E02A0:;
  c->r[30]=c->r[3]-c->r[4]; // 801E02A0
  goto L_801E02B0; // 801E02A4
L_801E02A8:;
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801E02A8
  c->r[30]=c->r[3]-c->r[0]; // 801E02AC
L_801E02B0:;
  c->r[3]=c->r[31]|c->r[31]; // 801E02B0
  c->lr=0x801E02B8u; f_800E4F7C(c); // 801E02B4
  c->r[3]=c->r[30]|c->r[30]; // 801E02B8
L_801E02BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E02BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E02C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E02C4
  c->lr=c->r[0]; // 801E02C8
  c->r[1]=c->r[1]+0x00000010u; // 801E02CC
  return; // 801E02D0
}

// VoiceCallback__Q44nw4r3snd6detail7AxVoiceFPv
void f_801E02D4(Ctx* __restrict c) {
  trace_call(0x801E02D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E02D4
  c->r[0]=c->lr; // 801E02D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E02DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E02E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E02E4
  c->r[30]=c->r[3]|c->r[3]; // 801E02E8
  c->lr=0x801E02F0u; f_800E4F54(c); // 801E02EC
  c->r[30]=R32(c->r[30]+0x00000014u); // 801E02F0
  c->r[0]=0u+0x00000000u; // 801E02F4
  c->r[31]=c->r[3]|c->r[3]; // 801E02F8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E02FC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E0300
  c->lr=0x801E0308u; f_801E2400(c); // 801E0304
  c->r[4]=c->r[30]|c->r[30]; // 801E0308
  c->lr=0x801E0310u; f_801E2C08(c); // 801E030C
  c->r[3]=c->r[31]|c->r[31]; // 801E0310
  c->lr=0x801E0318u; f_800E4F7C(c); // 801E0314
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E031C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E0320
  c->lr=c->r[0]; // 801E0324
  c->r[1]=c->r[1]+0x00000010u; // 801E0328
  return; // 801E032C
}

// GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat
void f_801E0330(Ctx* __restrict c) {
  trace_call(0x801E0330u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E0330
  if (crb(c,2)) { goto L_801E033C; } // 801E0334
  c->r[3]=c->r[3]+0x80000000u; // 801E0338
L_801E033C:;
  cmps(c,0,(int32_t)c->r[5],2); // 801E033C
  c->r[0]=0u+0x00000000u; // 801E0340
  if (crb(c,2)) { goto L_801E0380; } // 801E0344
  if (!crb(c,0)) { goto L_801E0358; } // 801E0348
  cmps(c,0,(int32_t)c->r[5],1); // 801E034C
  if (!crb(c,0)) { goto L_801E0388; } // 801E0350
  goto L_801E0390; // 801E0354
L_801E0358:;
  cmps(c,0,(int32_t)c->r[5],4); // 801E0358
  if (!crb(c,0)) { goto L_801E0390; } // 801E035C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E0360
  c->r[4]=c->r[4]-c->r[0]; // 801E0364
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 801E0368
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801E036C
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801E0370
  c->r[3]=c->r[0]+c->r[3]; // 801E0374
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E0378
  goto L_801E0390; // 801E037C
L_801E0380:;
  c->r[0]=c->r[4]-c->r[3]; // 801E0380
  goto L_801E0390; // 801E0384
L_801E0388:;
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801E0388
  c->r[0]=c->r[4]-c->r[0]; // 801E038C
L_801E0390:;
  c->r[3]=c->r[0]|c->r[0]; // 801E0390
  return; // 801E0394
}

// SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
void f_801E0398(Ctx* __restrict c) {
  trace_call(0x801E0398u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E0398
  cmps(c,0,(int32_t)c->r[3],0); // 801E039C
  if (crb(c,2)) return; // 801E03A0
  f_800FCDE8(c); return; // 801E03A4
  return; // 801E03A8
}

// SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
void f_801E03AC(Ctx* __restrict c) {
  trace_call(0x801E03ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E03AC
  c->r[0]=c->lr; // 801E03B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E03B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E03B8
  c->r[31]=c->r[4]|c->r[4]; // 801E03BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E03C0
  c->r[30]=c->r[3]|c->r[3]; // 801E03C4
  c->lr=0x801E03CCu; f_800E4F54(c); // 801E03C8
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E03CC
  cmps(c,0,(int32_t)c->r[4],0); // 801E03D0
  if (!crb(c,2)) { goto L_801E03E0; } // 801E03D4
  c->lr=0x801E03DCu; f_800E4F7C(c); // 801E03D8
  goto L_801E03F4; // 801E03DC
L_801E03E0:;
  W16(c->r[4]+0x0000003Au,c->r[31]); // 801E03E0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E03E4
  c->r[0]=c->r[0]|0x00000008u; // 801E03E8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E03EC
  c->lr=0x801E03F4u; f_800E4F7C(c); // 801E03F0
L_801E03F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E03F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E03F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E03FC
  c->lr=c->r[0]; // 801E0400
  c->r[1]=c->r[1]+0x00000010u; // 801E0404
  return; // 801E0408
}

// EnableRemote__Q44nw4r3snd6detail7AxVoiceFb
void f_801E040C(Ctx* __restrict c) {
  trace_call(0x801E040Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E040C
  c->r[0]=c->lr; // 801E0410
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0414
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0418
  c->r[31]=c->r[4]|c->r[4]; // 801E041C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0420
  c->r[30]=c->r[3]|c->r[3]; // 801E0424
  c->lr=0x801E042Cu; f_800E4F54(c); // 801E0428
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E042C
  cmps(c,0,(int32_t)c->r[4],0); // 801E0430
  if (!crb(c,2)) { goto L_801E0440; } // 801E0434
  c->lr=0x801E043Cu; f_800E4F7C(c); // 801E0438
  goto L_801E0454; // 801E043C
L_801E0440:;
  W16(c->r[4]+0x000000FEu,c->r[31]); // 801E0440
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E0444
  c->r[0]=c->r[0]|0x00800000u; // 801E0448
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E044C
  c->lr=0x801E0454u; f_800E4F7C(c); // 801E0450
L_801E0454:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0458
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E045C
  c->lr=c->r[0]; // 801E0460
  c->r[1]=c->r[1]+0x00000010u; // 801E0464
  return; // 801E0468
}

// ResetDelta__Q44nw4r3snd6detail7AxVoiceFv
void f_801E046C(Ctx* __restrict c) {
  trace_call(0x801E046Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E046C
  c->r[0]=c->lr; // 801E0470
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E0474
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801E0478
  c->r[31]=c->r[3]|c->r[3]; // 801E047C
  W32(c->r[1]+0x00000038u,c->r[30]); // 801E0480
  c->lr=0x801E0488u; f_800E4F54(c); // 801E0484
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E0488
  c->r[30]=c->r[3]|c->r[3]; // 801E048C
  cmps(c,0,(int32_t)c->r[0],0); // 801E0490
  if (!crb(c,2)) { goto L_801E04A0; } // 801E0494
  c->lr=0x801E049Cu; f_800E4F7C(c); // 801E0498
  goto L_801E05A4; // 801E049C
L_801E04A0:;
  c->lr=0x801E04A4u; f_800E4F54(c); // 801E04A0
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E04A4
  cmps(c,0,(int32_t)c->r[4],0); // 801E04A8
  if (!crb(c,2)) { goto L_801E04B8; } // 801E04AC
  c->lr=0x801E04B4u; f_800E4F7C(c); // 801E04B0
  goto L_801E04F8; // 801E04B4
L_801E04B8:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 801E04B8
  c->r[0]=0u+0x00000000u; // 801E04BC
  c->r[6]=R16(c->r[31]+0x00000008u); // 801E04C0
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 801E04C4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E04C8
  c->r[5]=c->r[6]+c->r[5]; // 801E04CC
  W16(c->r[31]+0x00000008u,c->r[5]); // 801E04D0
  c->r[5]=R16(c->r[31]+0x00000008u); // 801E04D4
  W16(c->r[4]+0x00000092u,c->r[5]); // 801E04D8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E04DC
  W16(c->r[4]+0x00000094u,c->r[0]); // 801E04E0
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E04E4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801E04E8
  c->r[0]=c->r[0]|0x00000100u; // 801E04EC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801E04F0
  c->lr=0x801E04F8u; f_800E4F7C(c); // 801E04F4
L_801E04F8:;
  c->r[0]=R16(c->r[31]+0x0000001Eu); // 801E04F8
  c->r[6]=0u+0x00000000u; // 801E04FC
  c->r[3]=c->r[31]|c->r[31]; // 801E0500
  c->r[4]=c->r[1]+0x00000008u; // 801E0504
  W16(c->r[1]+0x00000008u,c->r[0]); // 801E0508
  c->r[5]=0u+0x00000001u; // 801E050C
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801E0510
  c->r[0]=R16(c->r[31]+0x00000020u); // 801E0514
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E0518
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 801E051C
  c->r[0]=R16(c->r[31]+0x00000024u); // 801E0520
  W16(c->r[1]+0x00000010u,c->r[0]); // 801E0524
  W16(c->r[1]+0x00000012u,c->r[6]); // 801E0528
  c->r[0]=R16(c->r[31]+0x00000026u); // 801E052C
  W16(c->r[1]+0x00000014u,c->r[0]); // 801E0530
  W16(c->r[1]+0x00000016u,c->r[6]); // 801E0534
  c->r[0]=R16(c->r[31]+0x0000002Au); // 801E0538
  W16(c->r[1]+0x00000018u,c->r[0]); // 801E053C
  W16(c->r[1]+0x0000001Au,c->r[6]); // 801E0540
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 801E0544
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801E0548
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 801E054C
  c->r[0]=R16(c->r[31]+0x00000030u); // 801E0550
  W16(c->r[1]+0x00000020u,c->r[0]); // 801E0554
  W16(c->r[1]+0x00000022u,c->r[6]); // 801E0558
  c->r[0]=R16(c->r[31]+0x00000032u); // 801E055C
  W16(c->r[1]+0x00000024u,c->r[0]); // 801E0560
  W16(c->r[1]+0x00000026u,c->r[6]); // 801E0564
  c->r[0]=R16(c->r[31]+0x00000022u); // 801E0568
  W16(c->r[1]+0x00000028u,c->r[0]); // 801E056C
  W16(c->r[1]+0x0000002Au,c->r[6]); // 801E0570
  c->r[0]=R16(c->r[31]+0x00000028u); // 801E0574
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801E0578
  W16(c->r[1]+0x0000002Eu,c->r[6]); // 801E057C
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 801E0580
  W16(c->r[1]+0x00000030u,c->r[0]); // 801E0584
  W16(c->r[1]+0x00000032u,c->r[6]); // 801E0588
  c->r[0]=R16(c->r[31]+0x00000034u); // 801E058C
  W16(c->r[1]+0x00000034u,c->r[0]); // 801E0590
  W16(c->r[1]+0x00000036u,c->r[6]); // 801E0594
  c->lr=0x801E059Cu; f_801E1D38(c); // 801E0598
  c->r[3]=c->r[30]|c->r[30]; // 801E059C
  c->lr=0x801E05A4u; f_800E4F7C(c); // 801E05A0
L_801E05A4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E05A4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801E05A8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801E05AC
  c->lr=c->r[0]; // 801E05B0
  c->r[1]=c->r[1]+0x00000040u; // 801E05B4
  return; // 801E05B8
}

// SetAddr__Q44nw4r3snd6detail7AxVoiceFbPCvUlUlUl
void f_801E05BC(Ctx* __restrict c) {
  trace_call(0x801E05BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E05BC
  c->r[0]=c->lr; // 801E05C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E05C4
  c->r[11]=c->r[1]+0x00000040u; // 801E05C8
  c->lr=0x801E05D0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E05CC
  c->r[26]=c->r[3]|c->r[3]; // 801E05D0
  c->r[27]=c->r[4]|c->r[4]; // 801E05D4
  c->r[28]=c->r[5]|c->r[5]; // 801E05D8
  c->r[29]=c->r[6]|c->r[6]; // 801E05DC
  c->r[30]=c->r[7]|c->r[7]; // 801E05E0
  c->r[31]=c->r[8]|c->r[8]; // 801E05E4
  c->lr=0x801E05ECu; f_800E4F54(c); // 801E05E8
  c->r[0]=R32(c->r[26]+0x00000000u); // 801E05EC
  c->r[25]=c->r[3]|c->r[3]; // 801E05F0
  cmps(c,0,(int32_t)c->r[0],0); // 801E05F4
  if (!crb(c,2)) { goto L_801E0604; } // 801E05F8
  c->lr=0x801E0600u; f_800E4F7C(c); // 801E05FC
  goto L_801E0978; // 801E0600
L_801E0604:;
  cmpu(c,0,c->r[29],c->r[31]); // 801E0604
  if (!crb(c,1)) { goto L_801E0704; } // 801E0608
  c->lr=0x801E0610u; f_801DE734(c); // 801E060C
  c->lr=0x801E0614u; f_801DEDCC(c); // 801E0610
  cmps(c,0,(int32_t)c->r[3],0); // 801E0614
  c->r[6]=R32(c->r[26]+0x00000014u); // 801E0618
  c->r[0]=c->r[3]|c->r[3]; // 801E061C
  c->r[27]=0u+0x00000000u; // 801E0620
  if (crb(c,2)) { goto L_801E062C; } // 801E0624
  c->r[0]=c->r[3]+0x80000000u; // 801E0628
L_801E062C:;
  cmps(c,0,(int32_t)c->r[6],2); // 801E062C
  c->r[4]=0u+0x00000000u; // 801E0630
  if (crb(c,2)) { goto L_801E065C; } // 801E0634
  if (!crb(c,0)) { goto L_801E0648; } // 801E0638
  cmps(c,0,(int32_t)c->r[6],1); // 801E063C
  if (!crb(c,0)) { goto L_801E0664; } // 801E0640
  goto L_801E0668; // 801E0644
L_801E0648:;
  cmps(c,0,(int32_t)c->r[6],4); // 801E0648
  if (!crb(c,0)) { goto L_801E0668; } // 801E064C
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E0650
  c->r[4]=c->r[4]+0x00000002u; // 801E0654
  goto L_801E0668; // 801E0658
L_801E065C:;
  c->r[4]=c->r[0]|c->r[0]; // 801E065C
  goto L_801E0668; // 801E0660
L_801E0664:;
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801E0664
L_801E0668:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E0668
  c->r[0]=c->r[3]|c->r[3]; // 801E066C
  if (crb(c,2)) { goto L_801E0678; } // 801E0670
  c->r[0]=c->r[3]+0x80000000u; // 801E0674
L_801E0678:;
  cmps(c,0,(int32_t)c->r[6],2); // 801E0678
  c->r[5]=0u+0x00000000u; // 801E067C
  if (crb(c,2)) { goto L_801E06A8; } // 801E0680
  if (!crb(c,0)) { goto L_801E0694; } // 801E0684
  cmps(c,0,(int32_t)c->r[6],1); // 801E0688
  if (!crb(c,0)) { goto L_801E06B0; } // 801E068C
  goto L_801E06B4; // 801E0690
L_801E0694:;
  cmps(c,0,(int32_t)c->r[6],4); // 801E0694
  if (!crb(c,0)) { goto L_801E06B4; } // 801E0698
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E069C
  c->r[5]=c->r[5]+0x00000002u; // 801E06A0
  goto L_801E06B4; // 801E06A4
L_801E06A8:;
  c->r[5]=c->r[0]|c->r[0]; // 801E06A8
  goto L_801E06B4; // 801E06AC
L_801E06B0:;
  c->r[5]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801E06B0
L_801E06B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E06B4
  if (crb(c,2)) { goto L_801E06C0; } // 801E06B8
  c->r[3]=c->r[3]+0x80000000u; // 801E06BC
L_801E06C0:;
  cmps(c,0,(int32_t)c->r[6],2); // 801E06C0
  c->r[8]=0u+0x00000000u; // 801E06C4
  if (crb(c,2)) { goto L_801E06F0; } // 801E06C8
  if (!crb(c,0)) { goto L_801E06DC; } // 801E06CC
  cmps(c,0,(int32_t)c->r[6],1); // 801E06D0
  if (!crb(c,0)) { goto L_801E06F8; } // 801E06D4
  goto L_801E08F0; // 801E06D8
L_801E06DC:;
  cmps(c,0,(int32_t)c->r[6],4); // 801E06DC
  if (!crb(c,0)) { goto L_801E08F0; } // 801E06E0
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E06E4
  c->r[8]=c->r[3]+0x00000003u; // 801E06E8
  goto L_801E08F0; // 801E06EC
L_801E06F0:;
  c->r[8]=c->r[3]+0x00000001u; // 801E06F0
  goto L_801E08F0; // 801E06F4
L_801E06F8:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801E06F8
  c->r[8]=c->r[3]+0x00000001u; // 801E06FC
  goto L_801E08F0; // 801E0700
L_801E0704:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E0704
  if (crb(c,2)) { goto L_801E0794; } // 801E0708
  cmps(c,0,(int32_t)c->r[28],0); // 801E070C
  c->r[0]=R32(c->r[26]+0x00000014u); // 801E0710
  c->r[3]=c->r[28]|c->r[28]; // 801E0714
  if (crb(c,2)) { goto L_801E0720; } // 801E0718
  c->r[3]=c->r[28]+0x80000000u; // 801E071C
L_801E0720:;
  cmps(c,0,(int32_t)c->r[0],2); // 801E0720
  c->r[5]=0u+0x00000000u; // 801E0724
  if (crb(c,2)) { goto L_801E0780; } // 801E0728
  if (!crb(c,0)) { goto L_801E073C; } // 801E072C
  cmps(c,0,(int32_t)c->r[0],1); // 801E0730
  if (!crb(c,0)) { goto L_801E0788; } // 801E0734
  goto L_801E07E8; // 801E0738
L_801E073C:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E073C
  if (!crb(c,0)) { goto L_801E07E8; } // 801E0740
  c->r[4]=0u+0x24920000u; // 801E0744
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E0748
  c->r[4]=c->r[4]+0x00004925u; // 801E074C
  c->r[5]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[30])>>32); // 801E0750
  c->r[4]=c->r[30]-c->r[5]; // 801E0754
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801E0758
  c->r[5]=c->r[4]+c->r[5]; // 801E075C
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801E0760
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)14); // 801E0764
  c->r[4]=rotl(c->r[5],1)&0xFFFFFFF0u; // 801E0768
  c->r[5]=c->r[30]-c->r[6]; // 801E076C
  c->r[3]=c->r[5]+c->r[3]; // 801E0770
  c->r[5]=c->r[3]+c->r[4]; // 801E0774
  c->r[5]=c->r[5]+0x00000002u; // 801E0778
  goto L_801E07E8; // 801E077C
L_801E0780:;
  c->r[5]=c->r[3]+c->r[30]; // 801E0780
  goto L_801E07E8; // 801E0784
L_801E0788:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801E0788
  c->r[5]=c->r[3]+c->r[30]; // 801E078C
  goto L_801E07E8; // 801E0790
L_801E0794:;
  c->lr=0x801E0798u; f_801DE734(c); // 801E0794
  c->lr=0x801E079Cu; f_801DEDCC(c); // 801E0798
  cmps(c,0,(int32_t)c->r[3],0); // 801E079C
  c->r[0]=R32(c->r[26]+0x00000014u); // 801E07A0
  if (crb(c,2)) { goto L_801E07AC; } // 801E07A4
  c->r[3]=c->r[3]+0x80000000u; // 801E07A8
L_801E07AC:;
  cmps(c,0,(int32_t)c->r[0],2); // 801E07AC
  c->r[5]=0u+0x00000000u; // 801E07B0
  if (crb(c,2)) { goto L_801E07DC; } // 801E07B4
  if (!crb(c,0)) { goto L_801E07C8; } // 801E07B8
  cmps(c,0,(int32_t)c->r[0],1); // 801E07BC
  if (!crb(c,0)) { goto L_801E07E4; } // 801E07C0
  goto L_801E07E8; // 801E07C4
L_801E07C8:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E07C8
  if (!crb(c,0)) { goto L_801E07E8; } // 801E07CC
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E07D0
  c->r[5]=c->r[3]+0x00000002u; // 801E07D4
  goto L_801E07E8; // 801E07D8
L_801E07DC:;
  c->r[5]=c->r[3]|c->r[3]; // 801E07DC
  goto L_801E07E8; // 801E07E0
L_801E07E4:;
  c->r[5]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801E07E4
L_801E07E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E07E8
  c->r[3]=c->r[28]|c->r[28]; // 801E07EC
  if (crb(c,2)) { goto L_801E07F8; } // 801E07F0
  c->r[3]=c->r[28]+0x80000000u; // 801E07F4
L_801E07F8:;
  cmps(c,0,(int32_t)c->r[0],2); // 801E07F8
  c->r[4]=0u+0x00000000u; // 801E07FC
  if (crb(c,2)) { goto L_801E0858; } // 801E0800
  if (!crb(c,0)) { goto L_801E0814; } // 801E0804
  cmps(c,0,(int32_t)c->r[0],1); // 801E0808
  if (!crb(c,0)) { goto L_801E0860; } // 801E080C
  goto L_801E0868; // 801E0810
L_801E0814:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E0814
  if (!crb(c,0)) { goto L_801E0868; } // 801E0818
  c->r[4]=0u+0x24920000u; // 801E081C
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E0820
  c->r[4]=c->r[4]+0x00004925u; // 801E0824
  c->r[6]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[29])>>32); // 801E0828
  c->r[4]=c->r[29]-c->r[6]; // 801E082C
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801E0830
  c->r[6]=c->r[4]+c->r[6]; // 801E0834
  c->r[4]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801E0838
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)14); // 801E083C
  c->r[4]=rotl(c->r[6],1)&0xFFFFFFF0u; // 801E0840
  c->r[6]=c->r[29]-c->r[7]; // 801E0844
  c->r[3]=c->r[6]+c->r[3]; // 801E0848
  c->r[4]=c->r[3]+c->r[4]; // 801E084C
  c->r[4]=c->r[4]+0x00000002u; // 801E0850
  goto L_801E0868; // 801E0854
L_801E0858:;
  c->r[4]=c->r[3]+c->r[29]; // 801E0858
  goto L_801E0868; // 801E085C
L_801E0860:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801E0860
  c->r[4]=c->r[3]+c->r[29]; // 801E0864
L_801E0868:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E0868
  if (crb(c,2)) { goto L_801E0874; } // 801E086C
  c->r[28]=c->r[28]+0x80000000u; // 801E0870
L_801E0874:;
  cmps(c,0,(int32_t)c->r[0],2); // 801E0874
  c->r[8]=0u+0x00000000u; // 801E0878
  if (crb(c,2)) { goto L_801E08D8; } // 801E087C
  if (!crb(c,0)) { goto L_801E0890; } // 801E0880
  cmps(c,0,(int32_t)c->r[0],1); // 801E0884
  if (!crb(c,0)) { goto L_801E08E4; } // 801E0888
  goto L_801E08F0; // 801E088C
L_801E0890:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E0890
  if (!crb(c,0)) { goto L_801E08F0; } // 801E0894
  c->r[3]=0u+0x24920000u; // 801E0898
  c->r[8]=c->r[31]+0xFFFFFFFFu; // 801E089C
  c->r[3]=c->r[3]+0x00004925u; // 801E08A0
  c->r[0]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801E08A4
  c->r[6]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[8])>>32); // 801E08A8
  c->r[3]=c->r[8]-c->r[6]; // 801E08AC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801E08B0
  c->r[6]=c->r[3]+c->r[6]; // 801E08B4
  c->r[3]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801E08B8
  c->r[7]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801E08BC
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFF0u; // 801E08C0
  c->r[6]=c->r[8]-c->r[7]; // 801E08C4
  c->r[0]=c->r[6]+c->r[0]; // 801E08C8
  c->r[8]=c->r[0]+c->r[3]; // 801E08CC
  c->r[8]=c->r[8]+0x00000002u; // 801E08D0
  goto L_801E08F0; // 801E08D4
L_801E08D8:;
  c->r[8]=c->r[28]+c->r[31]; // 801E08D8
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 801E08DC
  goto L_801E08F0; // 801E08E0
L_801E08E4:;
  c->r[0]=rotl(c->r[28],31)&0x7FFFFFFFu; // 801E08E4
  c->r[3]=c->r[31]+c->r[0]; // 801E08E8
  c->r[8]=c->r[3]+0xFFFFFFFFu; // 801E08EC
L_801E08F0:;
  W16(c->r[1]+0x00000008u,c->r[27]); // 801E08F0
  c->r[0]=R32(c->r[26]+0x00000014u); // 801E08F4
  cmps(c,0,(int32_t)c->r[0],2); // 801E08F8
  if (crb(c,2)) { goto L_801E0920; } // 801E08FC
  if (!crb(c,0)) { goto L_801E0910; } // 801E0900
  cmps(c,0,(int32_t)c->r[0],1); // 801E0904
  if (!crb(c,0)) { goto L_801E0928; } // 801E0908
  goto L_801E0930; // 801E090C
L_801E0910:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E0910
  if (!crb(c,0)) { goto L_801E0930; } // 801E0914
  c->r[7]=0u+0x00000000u; // 801E0918
  goto L_801E0934; // 801E091C
L_801E0920:;
  c->r[7]=0u+0x00000019u; // 801E0920
  goto L_801E0934; // 801E0924
L_801E0928:;
  c->r[7]=0u+0x0000000Au; // 801E0928
  goto L_801E0934; // 801E092C
L_801E0930:;
  c->r[7]=0u+0x00000000u; // 801E0930
L_801E0934:;
  c->r[6]=rotl(c->r[5],16)&0x0000FFFFu; // 801E0934
  c->r[3]=rotl(c->r[8],16)&0x0000FFFFu; // 801E0938
  c->r[0]=rotl(c->r[4],16)&0x0000FFFFu; // 801E093C
  W16(c->r[1]+0x0000000Au,c->r[7]); // 801E0940
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 801E0944
  W16(c->r[1]+0x0000000Eu,c->r[5]); // 801E0948
  W16(c->r[1]+0x00000010u,c->r[3]); // 801E094C
  W16(c->r[1]+0x00000012u,c->r[8]); // 801E0950
  W16(c->r[1]+0x00000014u,c->r[0]); // 801E0954
  W16(c->r[1]+0x00000016u,c->r[4]); // 801E0958
  c->r[3]=R32(c->r[26]+0x00000000u); // 801E095C
  cmps(c,0,(int32_t)c->r[3],0); // 801E0960
  if (crb(c,2)) { goto L_801E0970; } // 801E0964
  c->r[4]=c->r[1]+0x00000008u; // 801E0968
  c->lr=0x801E0970u; f_800FF9AC(c); // 801E096C
L_801E0970:;
  c->r[3]=c->r[25]|c->r[25]; // 801E0970
  c->lr=0x801E0978u; f_800E4F7C(c); // 801E0974
L_801E0978:;
  c->r[11]=c->r[1]+0x00000040u; // 801E0978
  c->lr=0x801E0980u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E097C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E0980
  c->lr=c->r[0]; // 801E0984
  c->r[1]=c->r[1]+0x00000040u; // 801E0988
  return; // 801E098C
}

// SetSrcType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice7SrcTypef
void f_801E0990(Ctx* __restrict c) {
  trace_call(0x801E0990u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0990
  c->r[0]=c->lr; // 801E0994
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E0998
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801E099C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801E09A0
  c->f[31]=c->f[1]; // 801E09A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E09A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E09AC
  c->r[30]=c->r[4]|c->r[4]; // 801E09B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E09B4
  c->r[29]=c->r[3]|c->r[3]; // 801E09B8
  c->lr=0x801E09C0u; f_800E4F54(c); // 801E09BC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E09C0
  c->r[31]=c->r[3]|c->r[3]; // 801E09C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E09C8
  if (!crb(c,2)) { goto L_801E09D8; } // 801E09CC
  c->lr=0x801E09D4u; f_800E4F7C(c); // 801E09D0
  goto L_801E0A4C; // 801E09D4
L_801E09D8:;
  cmps(c,0,(int32_t)c->r[30],5); // 801E09D8
  if (!crb(c,2)) { goto L_801E0A38; } // 801E09DC
  c->r[3]=R32(c->r[29]+0x00000018u); // 801E09E0
  c->r[0]=0u+0x43300000u; // 801E09E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E09E8
  c->r[0]=c->r[3]^0x80000000u; // 801E09EC
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[3]=RF64(ea);} // 801E09F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E09F4
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E09F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801E09FC
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E0A00
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801E0A04
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 801E0A08
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801E0A0C
  fcmp(c,0,c->f[1],c->f[0]); // 801E0A10
  if (!crb(c,1)) { goto L_801E0A20; } // 801E0A14
  c->r[30]=0u+0x00000002u; // 801E0A18
  goto L_801E0A38; // 801E0A1C
L_801E0A20:;
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E0A20
  fcmp(c,0,c->f[1],c->f[0]); // 801E0A24
  if (!crb(c,1)) { goto L_801E0A34; } // 801E0A28
  c->r[30]=0u+0x00000003u; // 801E0A2C
  goto L_801E0A38; // 801E0A30
L_801E0A34:;
  c->r[30]=0u+0x00000004u; // 801E0A34
L_801E0A38:;
  c->r[3]=c->r[29]|c->r[29]; // 801E0A38
  c->r[4]=c->r[30]|c->r[30]; // 801E0A3C
  c->lr=0x801E0A44u; f_801E1FB0(c); // 801E0A40
  c->r[3]=c->r[31]|c->r[31]; // 801E0A44
  c->lr=0x801E0A4Cu; f_800E4F7C(c); // 801E0A48
L_801E0A4C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801E0A4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E0A50
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801E0A54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0A58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0A5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0A60
  c->lr=c->r[0]; // 801E0A64
  c->r[1]=c->r[1]+0x00000030u; // 801E0A68
  return; // 801E0A6C
}

// SetAdpcm__Q44nw4r3snd6detail7AxVoiceFPCQ34nw4r3snd10AdpcmParam
void f_801E0A70(Ctx* __restrict c) {
  trace_call(0x801E0A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0A70
  c->r[0]=c->lr; // 801E0A74
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E0A78
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801E0A7C
  W32(c->r[1]+0x00000038u,c->r[30]); // 801E0A80
  c->r[30]=c->r[4]|c->r[4]; // 801E0A84
  W32(c->r[1]+0x00000034u,c->r[29]); // 801E0A88
  c->r[29]=c->r[3]|c->r[3]; // 801E0A8C
  c->lr=0x801E0A94u; f_800E4F54(c); // 801E0A90
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E0A94
  c->r[31]=c->r[3]|c->r[3]; // 801E0A98
  cmps(c,0,(int32_t)c->r[0],0); // 801E0A9C
  if (!crb(c,2)) { goto L_801E0AAC; } // 801E0AA0
  c->lr=0x801E0AA8u; f_800E4F7C(c); // 801E0AA4
  goto L_801E0BA0; // 801E0AA8
L_801E0AAC:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801E0AAC
  cmps(c,0,(int32_t)c->r[0],2); // 801E0AB0
  if (crb(c,2)) { goto L_801E0B30; } // 801E0AB4
  if (!crb(c,0)) { goto L_801E0AC8; } // 801E0AB8
  cmps(c,0,(int32_t)c->r[0],1); // 801E0ABC
  if (!crb(c,0)) { goto L_801E0B04; } // 801E0AC0
  goto L_801E0B58; // 801E0AC4
L_801E0AC8:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E0AC8
  if (!crb(c,0)) { goto L_801E0B58; } // 801E0ACC
  c->r[4]=c->r[30]|c->r[30]; // 801E0AD0
  c->r[3]=c->r[1]+0x00000008u; // 801E0AD4
  c->r[5]=0u+0x00000020u; // 801E0AD8
  c->lr=0x801E0AE0u; f_80004338(c); // 801E0ADC
  c->r[5]=R16(c->r[30]+0x00000020u); // 801E0AE0
  c->r[4]=R16(c->r[30]+0x00000022u); // 801E0AE4
  c->r[3]=R16(c->r[30]+0x00000024u); // 801E0AE8
  c->r[0]=R16(c->r[30]+0x00000026u); // 801E0AEC
  W16(c->r[1]+0x00000028u,c->r[5]); // 801E0AF0
  W16(c->r[1]+0x0000002Au,c->r[4]); // 801E0AF4
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 801E0AF8
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801E0AFC
  goto L_801E0B58; // 801E0B00
L_801E0B04:;
  c->r[3]=c->r[1]+0x00000008u; // 801E0B04
  c->r[4]=0u+0x00000000u; // 801E0B08
  c->r[5]=0u+0x00000020u; // 801E0B0C
  c->lr=0x801E0B14u; f_8000443C(c); // 801E0B10
  c->r[0]=0u+0x00000000u; // 801E0B14
  c->r[3]=0u+0x00000800u; // 801E0B18
  W16(c->r[1]+0x00000028u,c->r[3]); // 801E0B1C
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801E0B20
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801E0B24
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801E0B28
  goto L_801E0B58; // 801E0B2C
L_801E0B30:;
  c->r[3]=c->r[1]+0x00000008u; // 801E0B30
  c->r[4]=0u+0x00000000u; // 801E0B34
  c->r[5]=0u+0x00000020u; // 801E0B38
  c->lr=0x801E0B40u; f_8000443C(c); // 801E0B3C
  c->r[0]=0u+0x00000000u; // 801E0B40
  c->r[3]=0u+0x00000100u; // 801E0B44
  W16(c->r[1]+0x00000028u,c->r[3]); // 801E0B48
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801E0B4C
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801E0B50
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801E0B54
L_801E0B58:;
  c->lr=0x801E0B5Cu; f_800E4F54(c); // 801E0B58
  c->r[4]=R32(c->r[29]+0x00000000u); // 801E0B5C
  c->r[30]=c->r[3]|c->r[3]; // 801E0B60
  cmps(c,0,(int32_t)c->r[4],0); // 801E0B64
  if (!crb(c,2)) { goto L_801E0B74; } // 801E0B68
  c->lr=0x801E0B70u; f_800E4F7C(c); // 801E0B6C
  goto L_801E0B98; // 801E0B70
L_801E0B74:;
  c->r[3]=c->r[4]+0x000000A6u; // 801E0B74
  c->r[4]=c->r[1]+0x00000008u; // 801E0B78
  c->r[5]=0u+0x00000028u; // 801E0B7C
  c->lr=0x801E0B84u; f_80004338(c); // 801E0B80
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E0B84
  c->r[3]=c->r[30]|c->r[30]; // 801E0B88
  c->r[0]=c->r[0]|0x00008000u; // 801E0B8C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E0B90
  c->lr=0x801E0B98u; f_800E4F7C(c); // 801E0B94
L_801E0B98:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0B98
  c->lr=0x801E0BA0u; f_800E4F7C(c); // 801E0B9C
L_801E0BA0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E0BA0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801E0BA4
  c->r[30]=R32(c->r[1]+0x00000038u); // 801E0BA8
  c->r[29]=R32(c->r[1]+0x00000034u); // 801E0BAC
  c->lr=c->r[0]; // 801E0BB0
  c->r[1]=c->r[1]+0x00000040u; // 801E0BB4
  return; // 801E0BB8
}

// IsNeedNextUpdate__Q44nw4r3snd6detail7AxVoiceCFRCQ54nw4r3snd6detail7AxVoice8MixParam
void f_801E0BBC(Ctx* __restrict c) {
  trace_call(0x801E0BBCu);
  c->r[5]=R16(c->r[3]+0x0000001Eu); // 801E0BBC
  c->r[0]=R16(c->r[4]+0x00000000u); // 801E0BC0
  cmpu(c,0,c->r[5],c->r[0]); // 801E0BC4
  if (crb(c,2)) { goto L_801E0BD4; } // 801E0BC8
  c->r[3]=0u+0x00000001u; // 801E0BCC
  return; // 801E0BD0
L_801E0BD4:;
  c->r[5]=R16(c->r[3]+0x00000020u); // 801E0BD4
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E0BD8
  cmpu(c,0,c->r[5],c->r[0]); // 801E0BDC
  if (crb(c,2)) { goto L_801E0BEC; } // 801E0BE0
  c->r[3]=0u+0x00000001u; // 801E0BE4
  return; // 801E0BE8
L_801E0BEC:;
  c->r[5]=R16(c->r[3]+0x00000022u); // 801E0BEC
  c->r[0]=R16(c->r[4]+0x00000004u); // 801E0BF0
  cmpu(c,0,c->r[5],c->r[0]); // 801E0BF4
  if (crb(c,2)) { goto L_801E0C04; } // 801E0BF8
  c->r[3]=0u+0x00000001u; // 801E0BFC
  return; // 801E0C00
L_801E0C04:;
  c->r[5]=R16(c->r[3]+0x00000024u); // 801E0C04
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E0C08
  cmpu(c,0,c->r[5],c->r[0]); // 801E0C0C
  if (crb(c,2)) { goto L_801E0C1C; } // 801E0C10
  c->r[3]=0u+0x00000001u; // 801E0C14
  return; // 801E0C18
L_801E0C1C:;
  c->r[5]=R16(c->r[3]+0x00000026u); // 801E0C1C
  c->r[0]=R16(c->r[4]+0x00000008u); // 801E0C20
  cmpu(c,0,c->r[5],c->r[0]); // 801E0C24
  if (crb(c,2)) { goto L_801E0C34; } // 801E0C28
  c->r[3]=0u+0x00000001u; // 801E0C2C
  return; // 801E0C30
L_801E0C34:;
  c->r[5]=R16(c->r[3]+0x00000028u); // 801E0C34
  c->r[0]=R16(c->r[4]+0x0000000Au); // 801E0C38
  cmpu(c,0,c->r[5],c->r[0]); // 801E0C3C
  if (crb(c,2)) { goto L_801E0C4C; } // 801E0C40
  c->r[3]=0u+0x00000001u; // 801E0C44
  return; // 801E0C48
L_801E0C4C:;
  c->r[5]=R16(c->r[3]+0x0000002Au); // 801E0C4C
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801E0C50
  cmpu(c,0,c->r[5],c->r[0]); // 801E0C54
  if (crb(c,2)) { goto L_801E0C64; } // 801E0C58
  c->r[3]=0u+0x00000001u; // 801E0C5C
  return; // 801E0C60
L_801E0C64:;
  c->r[5]=R16(c->r[3]+0x0000002Cu); // 801E0C64
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801E0C68
  cmpu(c,0,c->r[5],c->r[0]); // 801E0C6C
  if (crb(c,2)) { goto L_801E0C7C; } // 801E0C70
  c->r[3]=0u+0x00000001u; // 801E0C74
  return; // 801E0C78
L_801E0C7C:;
  c->r[5]=R16(c->r[3]+0x0000002Eu); // 801E0C7C
  c->r[0]=R16(c->r[4]+0x00000010u); // 801E0C80
  cmpu(c,0,c->r[5],c->r[0]); // 801E0C84
  if (crb(c,2)) { goto L_801E0C94; } // 801E0C88
  c->r[3]=0u+0x00000001u; // 801E0C8C
  return; // 801E0C90
L_801E0C94:;
  c->r[5]=R16(c->r[3]+0x00000030u); // 801E0C94
  c->r[0]=R16(c->r[4]+0x00000012u); // 801E0C98
  cmpu(c,0,c->r[5],c->r[0]); // 801E0C9C
  if (crb(c,2)) { goto L_801E0CAC; } // 801E0CA0
  c->r[3]=0u+0x00000001u; // 801E0CA4
  return; // 801E0CA8
L_801E0CAC:;
  c->r[5]=R16(c->r[3]+0x00000032u); // 801E0CAC
  c->r[0]=R16(c->r[4]+0x00000014u); // 801E0CB0
  cmpu(c,0,c->r[5],c->r[0]); // 801E0CB4
  if (crb(c,2)) { goto L_801E0CC4; } // 801E0CB8
  c->r[3]=0u+0x00000001u; // 801E0CBC
  return; // 801E0CC0
L_801E0CC4:;
  c->r[5]=R16(c->r[3]+0x00000034u); // 801E0CC4
  c->r[0]=R16(c->r[4]+0x00000016u); // 801E0CC8
  c->r[3]=c->r[0]-c->r[5]; // 801E0CCC
  c->r[0]=c->r[5]-c->r[0]; // 801E0CD0
  c->r[0]=c->r[3]|c->r[0]; // 801E0CD4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E0CD8
  return; // 801E0CDC
}

// SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam
void f_801E0CE0(Ctx* __restrict c) {
  trace_call(0x801E0CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0CE0
  c->r[0]=c->lr; // 801E0CE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0CE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0CEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0CF0
  c->r[30]=c->r[4]|c->r[4]; // 801E0CF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E0CF8
  c->r[29]=c->r[3]|c->r[3]; // 801E0CFC
  c->lr=0x801E0D04u; f_800E4F54(c); // 801E0D00
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E0D04
  c->r[31]=c->r[3]|c->r[3]; // 801E0D08
  cmps(c,0,(int32_t)c->r[0],0); // 801E0D0C
  if (!crb(c,2)) { goto L_801E0D1C; } // 801E0D10
  c->lr=0x801E0D18u; f_800E4F7C(c); // 801E0D14
  goto L_801E0D9C; // 801E0D18
L_801E0D1C:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801E0D1C
  cmps(c,0,(int32_t)c->r[0],3); // 801E0D20
  if (!crb(c,2)) { goto L_801E0D44; } // 801E0D24
  c->r[4]=R16(c->r[30]+0x00000000u); // 801E0D28
  c->r[3]=R16(c->r[30]+0x00000002u); // 801E0D2C
  c->r[0]=R16(c->r[30]+0x00000004u); // 801E0D30
  W16(c->r[1]+0x00000008u,c->r[4]); // 801E0D34
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801E0D38
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E0D3C
  goto L_801E0D54; // 801E0D40
L_801E0D44:;
  c->r[0]=0u+0x00000000u; // 801E0D44
  W16(c->r[1]+0x00000008u,c->r[0]); // 801E0D48
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801E0D4C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E0D50
L_801E0D54:;
  c->lr=0x801E0D58u; f_800E4F54(c); // 801E0D54
  c->r[4]=R32(c->r[29]+0x00000000u); // 801E0D58
  c->r[30]=c->r[3]|c->r[3]; // 801E0D5C
  cmps(c,0,(int32_t)c->r[4],0); // 801E0D60
  if (!crb(c,2)) { goto L_801E0D70; } // 801E0D64
  c->lr=0x801E0D6Cu; f_800E4F7C(c); // 801E0D68
  goto L_801E0D94; // 801E0D6C
L_801E0D70:;
  c->r[3]=c->r[4]+0x000000DCu; // 801E0D70
  c->r[4]=c->r[1]+0x00000008u; // 801E0D74
  c->r[5]=0u+0x00000006u; // 801E0D78
  c->lr=0x801E0D80u; f_80004338(c); // 801E0D7C
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E0D80
  c->r[3]=c->r[30]|c->r[30]; // 801E0D84
  c->r[0]=c->r[0]|0x00040000u; // 801E0D88
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E0D8C
  c->lr=0x801E0D94u; f_800E4F7C(c); // 801E0D90
L_801E0D94:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0D94
  c->lr=0x801E0D9Cu; f_800E4F7C(c); // 801E0D98
L_801E0D9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0D9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0DA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0DA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0DA8
  c->lr=c->r[0]; // 801E0DAC
  c->r[1]=c->r[1]+0x00000020u; // 801E0DB0
  return; // 801E0DB4
}

// SetMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice8MixParam
void f_801E0DB8(Ctx* __restrict c) {
  trace_call(0x801E0DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0DB8
  c->r[0]=c->lr; // 801E0DBC
  W32(c->r[1]+0x00000084u,c->r[0]); // 801E0DC0
  c->r[11]=c->r[1]+0x00000080u; // 801E0DC4
  c->lr=0x801E0DCCu; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E0DC8
  c->r[17]=c->r[3]|c->r[3]; // 801E0DCC
  c->r[18]=c->r[4]|c->r[4]; // 801E0DD0
  c->lr=0x801E0DD8u; f_800E4F54(c); // 801E0DD4
  c->r[4]=R32(c->r[17]+0x00000000u); // 801E0DD8
  c->r[16]=c->r[3]|c->r[3]; // 801E0DDC
  cmps(c,1,(int32_t)c->r[4],0); // 801E0DE0
  if (!crb(c,6)) { goto L_801E0DF4; } // 801E0DE4
  c->lr=0x801E0DECu; f_800E4F7C(c); // 801E0DE8
  c->r[3]=0u+0x00000000u; // 801E0DEC
  goto L_801E13C4; // 801E0DF0
L_801E0DF4:;
  c->r[0]=R8(c->r[17]+0x0000001Cu); // 801E0DF4
  cmps(c,0,(int32_t)c->r[0],0); // 801E0DF8
  if (!crb(c,2)) { goto L_801E0E20; } // 801E0DFC
  c->r[3]=0u+0x00000000u; // 801E0E00
  if (crb(c,6)) { goto L_801E0E18; } // 801E0E04
  c->r[0]=R16(c->r[4]+0x00000038u); // 801E0E08
  cmpu(c,0,c->r[0],0x00000001u); // 801E0E0C
  if (!crb(c,2)) { goto L_801E0E18; } // 801E0E10
  c->r[3]=0u+0x00000001u; // 801E0E14
L_801E0E18:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E0E18
  if (!crb(c,2)) { goto L_801E0E88; } // 801E0E1C
L_801E0E20:;
  c->r[20]=R16(c->r[18]+0x00000000u); // 801E0E20
  c->r[0]=0u+0x00000000u; // 801E0E24
  c->r[19]=R16(c->r[18]+0x00000002u); // 801E0E28
  c->r[12]=R16(c->r[18]+0x00000004u); // 801E0E2C
  c->r[11]=R16(c->r[18]+0x00000006u); // 801E0E30
  c->r[10]=R16(c->r[18]+0x00000008u); // 801E0E34
  c->r[9]=R16(c->r[18]+0x0000000Au); // 801E0E38
  c->r[8]=R16(c->r[18]+0x0000000Cu); // 801E0E3C
  c->r[7]=R16(c->r[18]+0x0000000Eu); // 801E0E40
  c->r[6]=R16(c->r[18]+0x00000010u); // 801E0E44
  c->r[5]=R16(c->r[18]+0x00000012u); // 801E0E48
  c->r[4]=R16(c->r[18]+0x00000014u); // 801E0E4C
  c->r[3]=R16(c->r[18]+0x00000016u); // 801E0E50
  W16(c->r[17]+0x0000001Eu,c->r[20]); // 801E0E54
  W16(c->r[17]+0x00000020u,c->r[19]); // 801E0E58
  W16(c->r[17]+0x00000022u,c->r[12]); // 801E0E5C
  W16(c->r[17]+0x00000024u,c->r[11]); // 801E0E60
  W16(c->r[17]+0x00000026u,c->r[10]); // 801E0E64
  W16(c->r[17]+0x00000028u,c->r[9]); // 801E0E68
  W16(c->r[17]+0x0000002Au,c->r[8]); // 801E0E6C
  W16(c->r[17]+0x0000002Cu,c->r[7]); // 801E0E70
  W16(c->r[17]+0x0000002Eu,c->r[6]); // 801E0E74
  W16(c->r[17]+0x00000030u,c->r[5]); // 801E0E78
  W16(c->r[17]+0x00000032u,c->r[4]); // 801E0E7C
  W16(c->r[17]+0x00000034u,c->r[3]); // 801E0E80
  W8(c->r[17]+0x0000001Cu,c->r[0]); // 801E0E84
L_801E0E88:;
  c->r[3]=c->r[17]|c->r[17]; // 801E0E88
  c->r[4]=c->r[18]|c->r[18]; // 801E0E8C
  c->lr=0x801E0E94u; f_801E0BBC(c); // 801E0E90
  c->r[0]=R16(c->r[17]+0x0000001Eu); // 801E0E94
  c->r[19]=c->r[3]|c->r[3]; // 801E0E98
  c->r[4]=R16(c->r[18]+0x00000000u); // 801E0E9C
  W16(c->r[1]+0x00000008u,c->r[0]); // 801E0EA0
  c->r[0]=R16(c->r[17]+0x00000020u); // 801E0EA4
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E0EA8
  c->r[0]=R16(c->r[17]+0x00000022u); // 801E0EAC
  W16(c->r[1]+0x00000028u,c->r[0]); // 801E0EB0
  c->r[0]=R16(c->r[17]+0x00000024u); // 801E0EB4
  W16(c->r[1]+0x00000010u,c->r[0]); // 801E0EB8
  c->r[0]=R16(c->r[17]+0x00000026u); // 801E0EBC
  W16(c->r[1]+0x00000014u,c->r[0]); // 801E0EC0
  c->r[0]=R16(c->r[17]+0x00000028u); // 801E0EC4
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801E0EC8
  c->r[0]=R16(c->r[17]+0x0000002Au); // 801E0ECC
  W16(c->r[1]+0x00000018u,c->r[0]); // 801E0ED0
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 801E0ED4
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801E0ED8
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 801E0EDC
  W16(c->r[1]+0x00000030u,c->r[0]); // 801E0EE0
  c->r[0]=R16(c->r[17]+0x00000030u); // 801E0EE4
  W16(c->r[1]+0x00000020u,c->r[0]); // 801E0EE8
  c->r[0]=R16(c->r[17]+0x00000032u); // 801E0EEC
  W16(c->r[1]+0x00000024u,c->r[0]); // 801E0EF0
  c->r[0]=R16(c->r[17]+0x00000034u); // 801E0EF4
  W16(c->r[1]+0x00000034u,c->r[0]); // 801E0EF8
  c->r[0]=R16(c->r[17]+0x0000001Eu); // 801E0EFC
  cmpu(c,0,c->r[0],c->r[4]); // 801E0F00
  if (!crb(c,2)) { goto L_801E0F10; } // 801E0F04
  c->r[31]=0u+0x00000000u; // 801E0F08
  goto L_801E0F2C; // 801E0F0C
L_801E0F10:;
  c->r[3]=0u+0x2AAB0000u; // 801E0F10
  c->r[0]=c->r[4]-c->r[0]; // 801E0F14
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E0F18
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E0F1C
  c->r[0]=sraw(c,c->r[0],4); // 801E0F20
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E0F24
  c->r[31]=c->r[0]+c->r[3]; // 801E0F28
L_801E0F2C:;
  c->r[4]=R16(c->r[18]+0x00000002u); // 801E0F2C
  c->r[0]=R16(c->r[17]+0x00000020u); // 801E0F30
  cmpu(c,0,c->r[0],c->r[4]); // 801E0F34
  if (!crb(c,2)) { goto L_801E0F44; } // 801E0F38
  c->r[30]=0u+0x00000000u; // 801E0F3C
  goto L_801E0F60; // 801E0F40
L_801E0F44:;
  c->r[3]=0u+0x2AAB0000u; // 801E0F44
  c->r[0]=c->r[4]-c->r[0]; // 801E0F48
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E0F4C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E0F50
  c->r[0]=sraw(c,c->r[0],4); // 801E0F54
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E0F58
  c->r[30]=c->r[0]+c->r[3]; // 801E0F5C
L_801E0F60:;
  c->r[4]=R16(c->r[18]+0x00000004u); // 801E0F60
  c->r[0]=R16(c->r[17]+0x00000022u); // 801E0F64
  cmpu(c,0,c->r[0],c->r[4]); // 801E0F68
  if (!crb(c,2)) { goto L_801E0F78; } // 801E0F6C
  c->r[29]=0u+0x00000000u; // 801E0F70
  goto L_801E0F94; // 801E0F74
L_801E0F78:;
  c->r[3]=0u+0x2AAB0000u; // 801E0F78
  c->r[0]=c->r[4]-c->r[0]; // 801E0F7C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E0F80
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E0F84
  c->r[0]=sraw(c,c->r[0],4); // 801E0F88
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E0F8C
  c->r[29]=c->r[0]+c->r[3]; // 801E0F90
L_801E0F94:;
  c->r[4]=R16(c->r[18]+0x00000006u); // 801E0F94
  c->r[0]=R16(c->r[17]+0x00000024u); // 801E0F98
  cmpu(c,0,c->r[0],c->r[4]); // 801E0F9C
  if (!crb(c,2)) { goto L_801E0FAC; } // 801E0FA0
  c->r[28]=0u+0x00000000u; // 801E0FA4
  goto L_801E0FC8; // 801E0FA8
L_801E0FAC:;
  c->r[3]=0u+0x2AAB0000u; // 801E0FAC
  c->r[0]=c->r[4]-c->r[0]; // 801E0FB0
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E0FB4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E0FB8
  c->r[0]=sraw(c,c->r[0],4); // 801E0FBC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E0FC0
  c->r[28]=c->r[0]+c->r[3]; // 801E0FC4
L_801E0FC8:;
  c->r[4]=R16(c->r[18]+0x00000008u); // 801E0FC8
  c->r[0]=R16(c->r[17]+0x00000026u); // 801E0FCC
  cmpu(c,0,c->r[0],c->r[4]); // 801E0FD0
  if (!crb(c,2)) { goto L_801E0FE0; } // 801E0FD4
  c->r[27]=0u+0x00000000u; // 801E0FD8
  goto L_801E0FFC; // 801E0FDC
L_801E0FE0:;
  c->r[3]=0u+0x2AAB0000u; // 801E0FE0
  c->r[0]=c->r[4]-c->r[0]; // 801E0FE4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E0FE8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E0FEC
  c->r[0]=sraw(c,c->r[0],4); // 801E0FF0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E0FF4
  c->r[27]=c->r[0]+c->r[3]; // 801E0FF8
L_801E0FFC:;
  c->r[4]=R16(c->r[18]+0x0000000Au); // 801E0FFC
  c->r[0]=R16(c->r[17]+0x00000028u); // 801E1000
  cmpu(c,0,c->r[0],c->r[4]); // 801E1004
  if (!crb(c,2)) { goto L_801E1014; } // 801E1008
  c->r[26]=0u+0x00000000u; // 801E100C
  goto L_801E1030; // 801E1010
L_801E1014:;
  c->r[3]=0u+0x2AAB0000u; // 801E1014
  c->r[0]=c->r[4]-c->r[0]; // 801E1018
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E101C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E1020
  c->r[0]=sraw(c,c->r[0],4); // 801E1024
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E1028
  c->r[26]=c->r[0]+c->r[3]; // 801E102C
L_801E1030:;
  c->r[4]=R16(c->r[18]+0x0000000Cu); // 801E1030
  c->r[0]=R16(c->r[17]+0x0000002Au); // 801E1034
  cmpu(c,0,c->r[0],c->r[4]); // 801E1038
  if (!crb(c,2)) { goto L_801E1048; } // 801E103C
  c->r[25]=0u+0x00000000u; // 801E1040
  goto L_801E1064; // 801E1044
L_801E1048:;
  c->r[3]=0u+0x2AAB0000u; // 801E1048
  c->r[0]=c->r[4]-c->r[0]; // 801E104C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E1050
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E1054
  c->r[0]=sraw(c,c->r[0],4); // 801E1058
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E105C
  c->r[25]=c->r[0]+c->r[3]; // 801E1060
L_801E1064:;
  c->r[4]=R16(c->r[18]+0x0000000Eu); // 801E1064
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 801E1068
  cmpu(c,0,c->r[0],c->r[4]); // 801E106C
  if (!crb(c,2)) { goto L_801E107C; } // 801E1070
  c->r[24]=0u+0x00000000u; // 801E1074
  goto L_801E1098; // 801E1078
L_801E107C:;
  c->r[3]=0u+0x2AAB0000u; // 801E107C
  c->r[0]=c->r[4]-c->r[0]; // 801E1080
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E1084
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E1088
  c->r[0]=sraw(c,c->r[0],4); // 801E108C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E1090
  c->r[24]=c->r[0]+c->r[3]; // 801E1094
L_801E1098:;
  c->r[4]=R16(c->r[18]+0x00000010u); // 801E1098
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 801E109C
  cmpu(c,0,c->r[0],c->r[4]); // 801E10A0
  if (!crb(c,2)) { goto L_801E10B0; } // 801E10A4
  c->r[23]=0u+0x00000000u; // 801E10A8
  goto L_801E10CC; // 801E10AC
L_801E10B0:;
  c->r[3]=0u+0x2AAB0000u; // 801E10B0
  c->r[0]=c->r[4]-c->r[0]; // 801E10B4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E10B8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E10BC
  c->r[0]=sraw(c,c->r[0],4); // 801E10C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E10C4
  c->r[23]=c->r[0]+c->r[3]; // 801E10C8
L_801E10CC:;
  c->r[4]=R16(c->r[18]+0x00000012u); // 801E10CC
  c->r[0]=R16(c->r[17]+0x00000030u); // 801E10D0
  cmpu(c,0,c->r[0],c->r[4]); // 801E10D4
  if (!crb(c,2)) { goto L_801E10E4; } // 801E10D8
  c->r[22]=0u+0x00000000u; // 801E10DC
  goto L_801E1100; // 801E10E0
L_801E10E4:;
  c->r[3]=0u+0x2AAB0000u; // 801E10E4
  c->r[0]=c->r[4]-c->r[0]; // 801E10E8
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E10EC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E10F0
  c->r[0]=sraw(c,c->r[0],4); // 801E10F4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E10F8
  c->r[22]=c->r[0]+c->r[3]; // 801E10FC
L_801E1100:;
  c->r[4]=R16(c->r[18]+0x00000014u); // 801E1100
  c->r[0]=R16(c->r[17]+0x00000032u); // 801E1104
  cmpu(c,0,c->r[0],c->r[4]); // 801E1108
  if (!crb(c,2)) { goto L_801E1118; } // 801E110C
  c->r[21]=0u+0x00000000u; // 801E1110
  goto L_801E1134; // 801E1114
L_801E1118:;
  c->r[3]=0u+0x2AAB0000u; // 801E1118
  c->r[0]=c->r[4]-c->r[0]; // 801E111C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E1120
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E1124
  c->r[0]=sraw(c,c->r[0],4); // 801E1128
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E112C
  c->r[21]=c->r[0]+c->r[3]; // 801E1130
L_801E1134:;
  c->r[4]=R16(c->r[18]+0x00000016u); // 801E1134
  c->r[0]=R16(c->r[17]+0x00000034u); // 801E1138
  cmpu(c,0,c->r[0],c->r[4]); // 801E113C
  if (!crb(c,2)) { goto L_801E114C; } // 801E1140
  c->r[20]=0u+0x00000000u; // 801E1144
  goto L_801E1168; // 801E1148
L_801E114C:;
  c->r[3]=0u+0x2AAB0000u; // 801E114C
  c->r[0]=c->r[4]-c->r[0]; // 801E1150
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E1154
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E1158
  c->r[0]=sraw(c,c->r[0],4); // 801E115C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E1160
  c->r[20]=c->r[0]+c->r[3]; // 801E1164
L_801E1168:;
  W16(c->r[1]+0x0000000Au,c->r[31]); // 801E1168
  c->r[3]=c->r[17]|c->r[17]; // 801E116C
  c->r[4]=c->r[1]+0x00000008u; // 801E1170
  c->r[5]=0u+0x00000000u; // 801E1174
  W16(c->r[1]+0x0000000Eu,c->r[30]); // 801E1178
  W16(c->r[1]+0x0000002Au,c->r[29]); // 801E117C
  W16(c->r[1]+0x00000012u,c->r[28]); // 801E1180
  W16(c->r[1]+0x00000016u,c->r[27]); // 801E1184
  W16(c->r[1]+0x0000002Eu,c->r[26]); // 801E1188
  W16(c->r[1]+0x0000001Au,c->r[25]); // 801E118C
  W16(c->r[1]+0x0000001Eu,c->r[24]); // 801E1190
  W16(c->r[1]+0x00000032u,c->r[23]); // 801E1194
  W16(c->r[1]+0x00000022u,c->r[22]); // 801E1198
  W16(c->r[1]+0x00000026u,c->r[21]); // 801E119C
  W16(c->r[1]+0x00000036u,c->r[20]); // 801E11A0
  c->lr=0x801E11A8u; f_801E1D38(c); // 801E11A4
  c->r[0]=R16(c->r[18]+0x00000000u); // 801E11A8
  cmps(c,0,(int32_t)c->r[0],0); // 801E11AC
  if (crb(c,2)) { goto L_801E11BC; } // 801E11B0
  cmps(c,0,(int32_t)c->r[31],0); // 801E11B4
  if (!crb(c,2)) { goto L_801E11C4; } // 801E11B8
L_801E11BC:;
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 801E11BC
  goto L_801E11D4; // 801E11C0
L_801E11C4:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)96); // 801E11C4
  c->r[3]=R16(c->r[17]+0x0000001Eu); // 801E11C8
  c->r[0]=c->r[3]+c->r[0]; // 801E11CC
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 801E11D0
L_801E11D4:;
  c->r[0]=R16(c->r[18]+0x00000002u); // 801E11D4
  cmps(c,0,(int32_t)c->r[0],0); // 801E11D8
  if (crb(c,2)) { goto L_801E11E8; } // 801E11DC
  cmps(c,0,(int32_t)c->r[30],0); // 801E11E0
  if (!crb(c,2)) { goto L_801E11F0; } // 801E11E4
L_801E11E8:;
  W16(c->r[17]+0x00000020u,c->r[0]); // 801E11E8
  goto L_801E1200; // 801E11EC
L_801E11F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 801E11F0
  c->r[3]=R16(c->r[17]+0x00000020u); // 801E11F4
  c->r[0]=c->r[3]+c->r[0]; // 801E11F8
  W16(c->r[17]+0x00000020u,c->r[0]); // 801E11FC
L_801E1200:;
  c->r[0]=R16(c->r[18]+0x00000004u); // 801E1200
  cmps(c,0,(int32_t)c->r[0],0); // 801E1204
  if (crb(c,2)) { goto L_801E1214; } // 801E1208
  cmps(c,0,(int32_t)c->r[29],0); // 801E120C
  if (!crb(c,2)) { goto L_801E121C; } // 801E1210
L_801E1214:;
  W16(c->r[17]+0x00000022u,c->r[0]); // 801E1214
  goto L_801E122C; // 801E1218
L_801E121C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)96); // 801E121C
  c->r[3]=R16(c->r[17]+0x00000022u); // 801E1220
  c->r[0]=c->r[3]+c->r[0]; // 801E1224
  W16(c->r[17]+0x00000022u,c->r[0]); // 801E1228
L_801E122C:;
  c->r[0]=R16(c->r[18]+0x00000006u); // 801E122C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1230
  if (crb(c,2)) { goto L_801E1240; } // 801E1234
  cmps(c,0,(int32_t)c->r[28],0); // 801E1238
  if (!crb(c,2)) { goto L_801E1248; } // 801E123C
L_801E1240:;
  W16(c->r[17]+0x00000024u,c->r[0]); // 801E1240
  goto L_801E1258; // 801E1244
L_801E1248:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)96); // 801E1248
  c->r[3]=R16(c->r[17]+0x00000024u); // 801E124C
  c->r[0]=c->r[3]+c->r[0]; // 801E1250
  W16(c->r[17]+0x00000024u,c->r[0]); // 801E1254
L_801E1258:;
  c->r[0]=R16(c->r[18]+0x00000008u); // 801E1258
  cmps(c,0,(int32_t)c->r[0],0); // 801E125C
  if (crb(c,2)) { goto L_801E126C; } // 801E1260
  cmps(c,0,(int32_t)c->r[27],0); // 801E1264
  if (!crb(c,2)) { goto L_801E1274; } // 801E1268
L_801E126C:;
  W16(c->r[17]+0x00000026u,c->r[0]); // 801E126C
  goto L_801E1284; // 801E1270
L_801E1274:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)96); // 801E1274
  c->r[3]=R16(c->r[17]+0x00000026u); // 801E1278
  c->r[0]=c->r[3]+c->r[0]; // 801E127C
  W16(c->r[17]+0x00000026u,c->r[0]); // 801E1280
L_801E1284:;
  c->r[0]=R16(c->r[18]+0x0000000Au); // 801E1284
  cmps(c,0,(int32_t)c->r[0],0); // 801E1288
  if (crb(c,2)) { goto L_801E1298; } // 801E128C
  cmps(c,0,(int32_t)c->r[26],0); // 801E1290
  if (!crb(c,2)) { goto L_801E12A0; } // 801E1294
L_801E1298:;
  W16(c->r[17]+0x00000028u,c->r[0]); // 801E1298
  goto L_801E12B0; // 801E129C
L_801E12A0:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)96); // 801E12A0
  c->r[3]=R16(c->r[17]+0x00000028u); // 801E12A4
  c->r[0]=c->r[3]+c->r[0]; // 801E12A8
  W16(c->r[17]+0x00000028u,c->r[0]); // 801E12AC
L_801E12B0:;
  c->r[0]=R16(c->r[18]+0x0000000Cu); // 801E12B0
  cmps(c,0,(int32_t)c->r[0],0); // 801E12B4
  if (crb(c,2)) { goto L_801E12C4; } // 801E12B8
  cmps(c,0,(int32_t)c->r[25],0); // 801E12BC
  if (!crb(c,2)) { goto L_801E12CC; } // 801E12C0
L_801E12C4:;
  W16(c->r[17]+0x0000002Au,c->r[0]); // 801E12C4
  goto L_801E12DC; // 801E12C8
L_801E12CC:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)96); // 801E12CC
  c->r[3]=R16(c->r[17]+0x0000002Au); // 801E12D0
  c->r[0]=c->r[3]+c->r[0]; // 801E12D4
  W16(c->r[17]+0x0000002Au,c->r[0]); // 801E12D8
L_801E12DC:;
  c->r[0]=R16(c->r[18]+0x0000000Eu); // 801E12DC
  cmps(c,0,(int32_t)c->r[0],0); // 801E12E0
  if (crb(c,2)) { goto L_801E12F0; } // 801E12E4
  cmps(c,0,(int32_t)c->r[24],0); // 801E12E8
  if (!crb(c,2)) { goto L_801E12F8; } // 801E12EC
L_801E12F0:;
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 801E12F0
  goto L_801E1308; // 801E12F4
L_801E12F8:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)96); // 801E12F8
  c->r[3]=R16(c->r[17]+0x0000002Cu); // 801E12FC
  c->r[0]=c->r[3]+c->r[0]; // 801E1300
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 801E1304
L_801E1308:;
  c->r[0]=R16(c->r[18]+0x00000010u); // 801E1308
  cmps(c,0,(int32_t)c->r[0],0); // 801E130C
  if (crb(c,2)) { goto L_801E131C; } // 801E1310
  cmps(c,0,(int32_t)c->r[23],0); // 801E1314
  if (!crb(c,2)) { goto L_801E1324; } // 801E1318
L_801E131C:;
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 801E131C
  goto L_801E1334; // 801E1320
L_801E1324:;
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)96); // 801E1324
  c->r[3]=R16(c->r[17]+0x0000002Eu); // 801E1328
  c->r[0]=c->r[3]+c->r[0]; // 801E132C
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 801E1330
L_801E1334:;
  c->r[0]=R16(c->r[18]+0x00000012u); // 801E1334
  cmps(c,0,(int32_t)c->r[0],0); // 801E1338
  if (crb(c,2)) { goto L_801E1348; } // 801E133C
  cmps(c,0,(int32_t)c->r[22],0); // 801E1340
  if (!crb(c,2)) { goto L_801E1350; } // 801E1344
L_801E1348:;
  W16(c->r[17]+0x00000030u,c->r[0]); // 801E1348
  goto L_801E1360; // 801E134C
L_801E1350:;
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)96); // 801E1350
  c->r[3]=R16(c->r[17]+0x00000030u); // 801E1354
  c->r[0]=c->r[3]+c->r[0]; // 801E1358
  W16(c->r[17]+0x00000030u,c->r[0]); // 801E135C
L_801E1360:;
  c->r[0]=R16(c->r[18]+0x00000014u); // 801E1360
  cmps(c,0,(int32_t)c->r[0],0); // 801E1364
  if (crb(c,2)) { goto L_801E1374; } // 801E1368
  cmps(c,0,(int32_t)c->r[21],0); // 801E136C
  if (!crb(c,2)) { goto L_801E137C; } // 801E1370
L_801E1374:;
  W16(c->r[17]+0x00000032u,c->r[0]); // 801E1374
  goto L_801E138C; // 801E1378
L_801E137C:;
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)96); // 801E137C
  c->r[3]=R16(c->r[17]+0x00000032u); // 801E1380
  c->r[0]=c->r[3]+c->r[0]; // 801E1384
  W16(c->r[17]+0x00000032u,c->r[0]); // 801E1388
L_801E138C:;
  c->r[0]=R16(c->r[18]+0x00000016u); // 801E138C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1390
  if (crb(c,2)) { goto L_801E13A0; } // 801E1394
  cmps(c,0,(int32_t)c->r[20],0); // 801E1398
  if (!crb(c,2)) { goto L_801E13A8; } // 801E139C
L_801E13A0:;
  W16(c->r[17]+0x00000034u,c->r[0]); // 801E13A0
  goto L_801E13B8; // 801E13A4
L_801E13A8:;
  c->r[0]=(uint32_t)((int32_t)c->r[20]*(int32_t)96); // 801E13A8
  c->r[3]=R16(c->r[17]+0x00000034u); // 801E13AC
  c->r[0]=c->r[3]+c->r[0]; // 801E13B0
  W16(c->r[17]+0x00000034u,c->r[0]); // 801E13B4
L_801E13B8:;
  c->r[3]=c->r[16]|c->r[16]; // 801E13B8
  c->lr=0x801E13C0u; f_800E4F7C(c); // 801E13BC
  c->r[3]=c->r[19]|c->r[19]; // 801E13C0
L_801E13C4:;
  c->r[11]=c->r[1]+0x00000080u; // 801E13C4
  c->lr=0x801E13CCu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E13C8
  c->r[0]=R32(c->r[1]+0x00000084u); // 801E13CC
  c->lr=c->r[0]; // 801E13D0
  c->r[1]=c->r[1]+0x00000080u; // 801E13D4
  return; // 801E13D8
}

// SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam
void f_801E13DC(Ctx* __restrict c) {
  trace_call(0x801E13DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E13DC
  c->r[0]=c->lr; // 801E13E0
  c->r[12]=R16(c->r[4]+0x00000000u); // 801E13E4
  c->r[11]=0u+0x00000000u; // 801E13E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E13EC
  c->r[10]=R16(c->r[4]+0x00000002u); // 801E13F0
  c->r[9]=R16(c->r[4]+0x00000004u); // 801E13F4
  c->r[8]=R16(c->r[4]+0x00000006u); // 801E13F8
  c->r[7]=R16(c->r[4]+0x00000008u); // 801E13FC
  c->r[6]=R16(c->r[4]+0x0000000Au); // 801E1400
  c->r[5]=R16(c->r[4]+0x0000000Cu); // 801E1404
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801E1408
  c->r[4]=c->r[1]+0x00000008u; // 801E140C
  W16(c->r[1]+0x00000008u,c->r[12]); // 801E1410
  W16(c->r[1]+0x0000000Au,c->r[11]); // 801E1414
  W16(c->r[1]+0x0000000Cu,c->r[10]); // 801E1418
  W16(c->r[1]+0x0000000Eu,c->r[11]); // 801E141C
  W16(c->r[1]+0x00000010u,c->r[9]); // 801E1420
  W16(c->r[1]+0x00000012u,c->r[11]); // 801E1424
  W16(c->r[1]+0x00000014u,c->r[8]); // 801E1428
  W16(c->r[1]+0x00000016u,c->r[11]); // 801E142C
  W16(c->r[1]+0x00000018u,c->r[7]); // 801E1430
  W16(c->r[1]+0x0000001Au,c->r[11]); // 801E1434
  W16(c->r[1]+0x0000001Cu,c->r[6]); // 801E1438
  W16(c->r[1]+0x0000001Eu,c->r[11]); // 801E143C
  W16(c->r[1]+0x00000020u,c->r[5]); // 801E1440
  W16(c->r[1]+0x00000022u,c->r[11]); // 801E1444
  W16(c->r[1]+0x00000024u,c->r[0]); // 801E1448
  W16(c->r[1]+0x00000026u,c->r[11]); // 801E144C
  c->lr=0x801E1454u; f_801E2090(c); // 801E1450
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E1454
  c->lr=c->r[0]; // 801E1458
  c->r[1]=c->r[1]+0x00000030u; // 801E145C
  return; // 801E1460
}

// SetSrc__Q44nw4r3snd6detail7AxVoiceFfb
void f_801E1464(Ctx* __restrict c) {
  trace_call(0x801E1464u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1464
  c->r[0]=c->lr; // 801E1468
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E146C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801E1470
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801E1474
  c->f[31]=c->f[1]; // 801E1478
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E147C
  c->r[31]=c->r[3]|c->r[3]; // 801E1480
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E1484
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E1488
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E148C
  c->r[28]=c->r[4]|c->r[4]; // 801E1490
  c->lr=0x801E1498u; f_800E4F54(c); // 801E1494
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E1498
  c->r[30]=c->r[3]|c->r[3]; // 801E149C
  cmps(c,0,(int32_t)c->r[0],0); // 801E14A0
  if (!crb(c,2)) { goto L_801E14B0; } // 801E14A4
  c->lr=0x801E14ACu; f_800E4F7C(c); // 801E14A8
  goto L_801E1608; // 801E14AC
L_801E14B0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801E14B0
  if (crb(c,2)) { goto L_801E1580; } // 801E14B4
  c->r[3]=R32(c->r[31]+0x00000018u); // 801E14B8
  c->r[0]=0u+0x43300000u; // 801E14BC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E14C0
  c->r[0]=c->r[3]^0x80000000u; // 801E14C4
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[2]=RF64(ea);} // 801E14C8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E14CC
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E14D0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801E14D4
  {uint32_t ea=c->r[2]+0xFFFF9E98u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E14D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E14DC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801E14E0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E14E4
  fcmp(c,0,c->f[0],c->f[3]); // 801E14E8
  if (!crb(c,1)) { goto L_801E14F4; } // 801E14EC
  goto L_801E1508; // 801E14F0
L_801E14F4:;
  {uint32_t ea=c->r[2]+0xFFFF9E9Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801E14F4
  fcmp(c,0,c->f[0],c->f[3]); // 801E14F8
  if (!crb(c,0)) { goto L_801E1504; } // 801E14FC
  goto L_801E1508; // 801E1500
L_801E1504:;
  c->f[3]=c->f[0]; // 801E1504
L_801E1508:;
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E1508
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[3]); // 801E150C
  c->lr=0x801E1514u; f_80109E10(c); // 801E1510
  c->r[0]=0u+0x00000000u; // 801E1514
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 801E1518
  W16(c->r[1]+0x00000008u,c->r[4]); // 801E151C
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801E1520
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801E1524
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801E1528
  W16(c->r[1]+0x00000010u,c->r[0]); // 801E152C
  W16(c->r[1]+0x00000012u,c->r[0]); // 801E1530
  W16(c->r[1]+0x00000014u,c->r[0]); // 801E1534
  c->lr=0x801E153Cu; f_800E4F54(c); // 801E1538
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E153C
  c->r[29]=c->r[3]|c->r[3]; // 801E1540
  cmps(c,0,(int32_t)c->r[4],0); // 801E1544
  if (!crb(c,2)) { goto L_801E1554; } // 801E1548
  c->lr=0x801E1550u; f_800E4F7C(c); // 801E154C
  goto L_801E1600; // 801E1550
L_801E1554:;
  c->r[3]=c->r[4]+0x000000CEu; // 801E1554
  c->r[4]=c->r[1]+0x00000008u; // 801E1558
  c->r[5]=0u+0x0000000Eu; // 801E155C
  c->lr=0x801E1564u; f_80004338(c); // 801E1560
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E1564
  c->r[3]=c->r[29]|c->r[29]; // 801E1568
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 801E156C
  c->r[0]=c->r[0]|0x00010000u; // 801E1570
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E1574
  c->lr=0x801E157Cu; f_800E4F7C(c); // 801E1578
  goto L_801E1600; // 801E157C
L_801E1580:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 801E1580
  c->r[0]=0u+0x43300000u; // 801E1584
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E1588
  c->r[0]=c->r[3]^0x80000000u; // 801E158C
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[2]=RF64(ea);} // 801E1590
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E1594
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E1598
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801E159C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E15A0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801E15A4
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801E15A8
  c->lr=0x801E15B0u; f_800E4F54(c); // 801E15AC
  c->r[28]=R32(c->r[31]+0x00000000u); // 801E15B0
  c->r[29]=c->r[3]|c->r[3]; // 801E15B4
  cmps(c,0,(int32_t)c->r[28],0); // 801E15B8
  if (!crb(c,2)) { goto L_801E15C8; } // 801E15BC
  c->lr=0x801E15C4u; f_800E4F7C(c); // 801E15C0
  goto L_801E1600; // 801E15C4
L_801E15C8:;
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E15C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801E15CC
  c->lr=0x801E15D4u; f_80109E10(c); // 801E15D0
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 801E15D4
  W16(c->r[28]+0x000000CEu,c->r[0]); // 801E15D8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E15DC
  W16(c->r[4]+0x000000D0u,c->r[3]); // 801E15E0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801E15E4
  c->r[0]=rotl(c->r[3],0)&0x00010000u; cr0(c,c->r[0]); // 801E15E8
  if (!crb(c,2)) { goto L_801E15F8; } // 801E15EC
  c->r[0]=c->r[3]|0x00020000u; // 801E15F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E15F4
L_801E15F8:;
  c->r[3]=c->r[29]|c->r[29]; // 801E15F8
  c->lr=0x801E1600u; f_800E4F7C(c); // 801E15FC
L_801E1600:;
  c->r[3]=c->r[30]|c->r[30]; // 801E1600
  c->lr=0x801E1608u; f_800E4F7C(c); // 801E1604
L_801E1608:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801E1608
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E160C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801E1610
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E1614
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E1618
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E161C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E1620
  c->lr=c->r[0]; // 801E1624
  c->r[1]=c->r[1]+0x00000040u; // 801E1628
  return; // 801E162C
}

// SetVe__Q44nw4r3snd6detail7AxVoiceFff
void f_801E1630(Ctx* __restrict c) {
  trace_call(0x801E1630u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1630
  c->r[0]=c->lr; // 801E1634
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E1638
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801E163C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801E1640
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801E1644
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801E1648
  c->f[30]=c->f[1]; // 801E164C
  c->f[31]=c->f[2]; // 801E1650
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1654
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1658
  c->r[30]=c->r[3]|c->r[3]; // 801E165C
  c->lr=0x801E1664u; f_800E4F54(c); // 801E1660
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E1664
  c->r[31]=c->r[3]|c->r[3]; // 801E1668
  cmps(c,0,(int32_t)c->r[0],0); // 801E166C
  if (!crb(c,2)) { goto L_801E167C; } // 801E1670
  c->lr=0x801E1678u; f_800E4F7C(c); // 801E1674
  goto L_801E16E4; // 801E1678
L_801E167C:;
  c->lr=0x801E1680u; f_800E4F54(c); // 801E167C
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E1680
  cmps(c,0,(int32_t)c->r[0],0); // 801E1684
  if (!crb(c,2)) { goto L_801E1694; } // 801E1688
  c->lr=0x801E1690u; f_800E4F7C(c); // 801E168C
  goto L_801E16DC; // 801E1690
L_801E1694:;
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 801E1694
  cmps(c,0,(int32_t)c->r[0],0); // 801E1698
  if (crb(c,2)) { goto L_801E16C0; } // 801E169C
  {uint32_t ea=c->r[2]+0xFFFF9EA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E16A0
  c->r[0]=0u+0x00000000u; // 801E16A4
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801E16A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801E16AC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E16B0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801E16B4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E16B8
  W16(c->r[30]+0x00000008u,c->r[0]); // 801E16BC
L_801E16C0:;
  {uint32_t ea=c->r[2]+0xFFFF9EA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E16C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 801E16C4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E16C8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801E16CC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E16D0
  W16(c->r[30]+0x0000000Eu,c->r[0]); // 801E16D4
  c->lr=0x801E16DCu; f_800E4F7C(c); // 801E16D8
L_801E16DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E16DC
  c->lr=0x801E16E4u; f_800E4F7C(c); // 801E16E0
L_801E16E4:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801E16E4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801E16E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801E16EC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801E16F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E16F4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E16F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E16FC
  c->lr=c->r[0]; // 801E1700
  c->r[1]=c->r[1]+0x00000040u; // 801E1704
  return; // 801E1708
}

// SetLpf__Q44nw4r3snd6detail7AxVoiceFUs
void f_801E170C(Ctx* __restrict c) {
  trace_call(0x801E170Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E170C
  c->r[0]=c->lr; // 801E1710
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E1714
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E1718
  c->r[31]=c->r[3]|c->r[3]; // 801E171C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E1720
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E1724
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E1728
  c->r[28]=c->r[4]|c->r[4]; // 801E172C
  c->lr=0x801E1734u; f_800E4F54(c); // 801E1730
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E1734
  c->r[30]=c->r[3]|c->r[3]; // 801E1738
  cmps(c,1,(int32_t)c->r[4],0); // 801E173C
  if (!crb(c,6)) { goto L_801E174C; } // 801E1740
  c->lr=0x801E1748u; f_800E4F7C(c); // 801E1744
  goto L_801E187C; // 801E1748
L_801E174C:;
  cmpu(c,0,c->r[28],0x00003E80u); // 801E174C
  if (crb(c,0)) { goto L_801E17A4; } // 801E1750
  c->r[0]=0u+0x00000000u; // 801E1754
  W16(c->r[1]+0x00000018u,c->r[0]); // 801E1758
  W16(c->r[1]+0x0000001Au,c->r[0]); // 801E175C
  c->lr=0x801E1764u; f_800E4F54(c); // 801E1760
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E1764
  c->r[29]=c->r[3]|c->r[3]; // 801E1768
  cmps(c,0,(int32_t)c->r[4],0); // 801E176C
  if (!crb(c,2)) { goto L_801E177C; } // 801E1770
  c->lr=0x801E1778u; f_800E4F7C(c); // 801E1774
  goto L_801E1874; // 801E1778
L_801E177C:;
  c->r[3]=c->r[4]+0x000000E2u; // 801E177C
  c->r[4]=c->r[1]+0x00000018u; // 801E1780
  c->r[5]=0u+0x00000008u; // 801E1784
  c->lr=0x801E178Cu; f_80004338(c); // 801E1788
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E178C
  c->r[3]=c->r[29]|c->r[29]; // 801E1790
  c->r[0]=c->r[0]|0x00080000u; // 801E1794
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E1798
  c->lr=0x801E17A0u; f_800E4F7C(c); // 801E179C
  goto L_801E1874; // 801E17A0
L_801E17A4:;
  c->r[3]=0u+0x00000000u; // 801E17A4
  if (crb(c,6)) { goto L_801E17BC; } // 801E17A8
  c->r[0]=R16(c->r[4]+0x000000E2u); // 801E17AC
  cmpu(c,0,c->r[0],0x00000001u); // 801E17B0
  if (!crb(c,2)) { goto L_801E17BC; } // 801E17B4
  c->r[3]=0u+0x00000001u; // 801E17B8
L_801E17BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E17BC
  if (crb(c,2)) { goto L_801E1814; } // 801E17C0
  c->r[3]=c->r[28]|c->r[28]; // 801E17C4
  c->r[4]=c->r[1]+0x0000000Au; // 801E17C8
  c->r[5]=c->r[1]+0x00000008u; // 801E17CC
  c->lr=0x801E17D4u; f_800FFAA4(c); // 801E17D0
  c->r[28]=R16(c->r[1]+0x00000008u); // 801E17D4
  c->r[29]=R16(c->r[1]+0x0000000Au); // 801E17D8
  c->lr=0x801E17E0u; f_800E4F54(c); // 801E17DC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E17E0
  cmps(c,0,(int32_t)c->r[4],0); // 801E17E4
  if (!crb(c,2)) { goto L_801E17F4; } // 801E17E8
  c->lr=0x801E17F0u; f_800E4F7C(c); // 801E17EC
  goto L_801E1874; // 801E17F0
L_801E17F4:;
  W16(c->r[4]+0x000000E6u,c->r[29]); // 801E17F4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E17F8
  W16(c->r[4]+0x000000E8u,c->r[28]); // 801E17FC
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E1800
  c->r[0]=c->r[0]|0x00100000u; // 801E1804
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E1808
  c->lr=0x801E1810u; f_800E4F7C(c); // 801E180C
  goto L_801E1874; // 801E1810
L_801E1814:;
  c->r[3]=0u+0x00000001u; // 801E1814
  c->r[0]=0u+0x00000000u; // 801E1818
  W16(c->r[1]+0x00000010u,c->r[3]); // 801E181C
  c->r[3]=c->r[28]|c->r[28]; // 801E1820
  c->r[4]=c->r[1]+0x00000014u; // 801E1824
  c->r[5]=c->r[1]+0x00000016u; // 801E1828
  W16(c->r[1]+0x00000012u,c->r[0]); // 801E182C
  c->lr=0x801E1834u; f_800FFAA4(c); // 801E1830
  c->lr=0x801E1838u; f_800E4F54(c); // 801E1834
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E1838
  c->r[29]=c->r[3]|c->r[3]; // 801E183C
  cmps(c,0,(int32_t)c->r[4],0); // 801E1840
  if (!crb(c,2)) { goto L_801E1850; } // 801E1844
  c->lr=0x801E184Cu; f_800E4F7C(c); // 801E1848
  goto L_801E1874; // 801E184C
L_801E1850:;
  c->r[3]=c->r[4]+0x000000E2u; // 801E1850
  c->r[4]=c->r[1]+0x00000010u; // 801E1854
  c->r[5]=0u+0x00000008u; // 801E1858
  c->lr=0x801E1860u; f_80004338(c); // 801E185C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E1860
  c->r[3]=c->r[29]|c->r[29]; // 801E1864
  c->r[0]=c->r[0]|0x00080000u; // 801E1868
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E186C
  c->lr=0x801E1874u; f_800E4F7C(c); // 801E1870
L_801E1874:;
  c->r[3]=c->r[30]|c->r[30]; // 801E1874
  c->lr=0x801E187Cu; f_800E4F7C(c); // 801E1878
L_801E187C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E187C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E1880
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E1884
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E1888
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E188C
  c->lr=c->r[0]; // 801E1890
  c->r[1]=c->r[1]+0x00000030u; // 801E1894
  return; // 801E1898
}

// SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc
void f_801E189C(Ctx* __restrict c) {
  trace_call(0x801E189Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E189C
  c->r[0]=c->lr; // 801E18A0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E18A4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801E18A8
  W32(c->r[1]+0x00000048u,c->r[30]); // 801E18AC
  c->r[30]=c->r[4]|c->r[4]; // 801E18B0
  W32(c->r[1]+0x00000044u,c->r[29]); // 801E18B4
  c->r[29]=c->r[3]|c->r[3]; // 801E18B8
  c->lr=0x801E18C0u; f_800E4F54(c); // 801E18BC
  c->r[4]=R32(c->r[29]+0x00000000u); // 801E18C0
  c->r[31]=c->r[3]|c->r[3]; // 801E18C4
  cmps(c,1,(int32_t)c->r[4],0); // 801E18C8
  if (!crb(c,6)) { goto L_801E18D8; } // 801E18CC
  c->lr=0x801E18D4u; f_800E4F7C(c); // 801E18D0
  goto L_801E1A10; // 801E18D4
L_801E18D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E18D8
  if (!crb(c,2)) { goto L_801E192C; } // 801E18DC
  c->r[0]=0u+0x00000000u; // 801E18E0
  W16(c->r[1]+0x00000028u,c->r[0]); // 801E18E4
  c->lr=0x801E18ECu; f_800E4F54(c); // 801E18E8
  c->r[4]=R32(c->r[29]+0x00000000u); // 801E18EC
  c->r[30]=c->r[3]|c->r[3]; // 801E18F0
  cmps(c,0,(int32_t)c->r[4],0); // 801E18F4
  if (!crb(c,2)) { goto L_801E1904; } // 801E18F8
  c->lr=0x801E1900u; f_800E4F7C(c); // 801E18FC
  goto L_801E1A08; // 801E1900
L_801E1904:;
  c->r[3]=c->r[4]+0x0000013Cu; // 801E1904
  c->r[4]=c->r[1]+0x00000028u; // 801E1908
  c->r[5]=0u+0x00000014u; // 801E190C
  c->lr=0x801E1914u; f_80004338(c); // 801E1910
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E1914
  c->r[3]=c->r[30]|c->r[30]; // 801E1918
  c->r[0]=c->r[0]|0x10000000u; // 801E191C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E1920
  c->lr=0x801E1928u; f_800E4F7C(c); // 801E1924
  goto L_801E1A08; // 801E1928
L_801E192C:;
  c->r[3]=0u+0x00000000u; // 801E192C
  if (crb(c,6)) { goto L_801E1944; } // 801E1930
  c->r[0]=R16(c->r[4]+0x0000013Cu); // 801E1934
  cmpu(c,0,c->r[0],0x00000002u); // 801E1938
  if (!crb(c,2)) { goto L_801E1944; } // 801E193C
  c->r[3]=0u+0x00000001u; // 801E1940
L_801E1944:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E1944
  if (crb(c,2)) { goto L_801E1990; } // 801E1948
  c->r[3]=c->r[30]|c->r[30]; // 801E194C
  c->r[4]=c->r[1]+0x00000010u; // 801E1950
  c->r[5]=c->r[1]+0x0000000Eu; // 801E1954
  c->r[6]=c->r[1]+0x0000000Cu; // 801E1958
  c->r[7]=c->r[1]+0x0000000Au; // 801E195C
  c->r[8]=c->r[1]+0x00000008u; // 801E1960
  c->lr=0x801E1968u; f_801FB984(c); // 801E1964
  c->r[5]=R16(c->r[1]+0x00000010u); // 801E1968
  c->r[3]=c->r[29]|c->r[29]; // 801E196C
  c->r[6]=R16(c->r[1]+0x0000000Eu); // 801E1970
  c->r[4]=0u+0x00000002u; // 801E1974
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 801E1978
  c->r[8]=R16(c->r[1]+0x0000000Au); // 801E197C
  c->r[9]=R16(c->r[1]+0x00000008u); // 801E1980
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E1984
  c->lr=0x801E198Cu; f_801E227C(c); // 801E1988
  goto L_801E1A08; // 801E198C
L_801E1990:;
  c->r[0]=0u+0x00000000u; // 801E1990
  c->r[3]=0u+0x00000002u; // 801E1994
  W16(c->r[1]+0x00000014u,c->r[3]); // 801E1998
  c->r[3]=c->r[30]|c->r[30]; // 801E199C
  c->r[4]=c->r[1]+0x0000001Eu; // 801E19A0
  c->r[5]=c->r[1]+0x00000020u; // 801E19A4
  W16(c->r[1]+0x00000016u,c->r[0]); // 801E19A8
  c->r[6]=c->r[1]+0x00000022u; // 801E19AC
  c->r[7]=c->r[1]+0x00000024u; // 801E19B0
  c->r[8]=c->r[1]+0x00000026u; // 801E19B4
  W16(c->r[1]+0x00000018u,c->r[0]); // 801E19B8
  W16(c->r[1]+0x0000001Au,c->r[0]); // 801E19BC
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801E19C0
  c->lr=0x801E19C8u; f_801FB984(c); // 801E19C4
  c->lr=0x801E19CCu; f_800E4F54(c); // 801E19C8
  c->r[4]=R32(c->r[29]+0x00000000u); // 801E19CC
  c->r[30]=c->r[3]|c->r[3]; // 801E19D0
  cmps(c,0,(int32_t)c->r[4],0); // 801E19D4
  if (!crb(c,2)) { goto L_801E19E4; } // 801E19D8
  c->lr=0x801E19E0u; f_800E4F7C(c); // 801E19DC
  goto L_801E1A08; // 801E19E0
L_801E19E4:;
  c->r[3]=c->r[4]+0x0000013Cu; // 801E19E4
  c->r[4]=c->r[1]+0x00000014u; // 801E19E8
  c->r[5]=0u+0x00000014u; // 801E19EC
  c->lr=0x801E19F4u; f_80004338(c); // 801E19F0
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E19F4
  c->r[3]=c->r[30]|c->r[30]; // 801E19F8
  c->r[0]=c->r[0]|0x10000000u; // 801E19FC
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E1A00
  c->lr=0x801E1A08u; f_800E4F7C(c); // 801E1A04
L_801E1A08:;
  c->r[3]=c->r[31]|c->r[31]; // 801E1A08
  c->lr=0x801E1A10u; f_800E4F7C(c); // 801E1A0C
L_801E1A10:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E1A10
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801E1A14
  c->r[30]=R32(c->r[1]+0x00000048u); // 801E1A18
  c->r[29]=R32(c->r[1]+0x00000044u); // 801E1A1C
  c->lr=c->r[0]; // 801E1A20
  c->r[1]=c->r[1]+0x00000050u; // 801E1A24
  return; // 801E1A28
}

// CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ44nw4r3snd6detail10AdpcmParam
void f_801E1A2C(Ctx* __restrict c) {
  trace_call(0x801E1A2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1A2C
  c->r[0]=c->lr; // 801E1A30
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E1A34
  c->r[11]=c->r[1]+0x00000050u; // 801E1A38
  c->lr=0x801E1A40u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E1A3C
  c->r[31]=c->r[8]|c->r[8]; // 801E1A40
  c->r[27]=c->r[3]|c->r[3]; // 801E1A44
  c->r[28]=c->r[4]|c->r[4]; // 801E1A48
  c->r[29]=c->r[5]|c->r[5]; // 801E1A4C
  c->r[30]=c->r[6]|c->r[6]; // 801E1A50
  c->r[26]=c->r[7]|c->r[7]; // 801E1A54
  c->r[4]=c->r[31]|c->r[31]; // 801E1A58
  c->r[3]=c->r[1]+0x00000008u; // 801E1A5C
  c->r[5]=0u+0x00000020u; // 801E1A60
  c->lr=0x801E1A68u; f_80004338(c); // 801E1A64
  c->r[5]=R16(c->r[31]+0x00000020u); // 801E1A68
  cmps(c,0,(int32_t)c->r[26],0); // 801E1A6C
  c->r[4]=R16(c->r[31]+0x00000022u); // 801E1A70
  c->r[6]=c->r[26]|c->r[26]; // 801E1A74
  c->r[3]=R16(c->r[31]+0x00000024u); // 801E1A78
  c->r[0]=R16(c->r[31]+0x00000026u); // 801E1A7C
  W16(c->r[1]+0x00000028u,c->r[5]); // 801E1A80
  W16(c->r[1]+0x0000002Au,c->r[4]); // 801E1A84
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 801E1A88
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801E1A8C
  if (crb(c,2)) { goto L_801E1A98; } // 801E1A90
  c->r[6]=c->r[26]+0x80000000u; // 801E1A94
L_801E1A98:;
  cmps(c,0,(int32_t)c->r[26],0); // 801E1A98
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801E1A9C
  c->r[31]=c->r[3]+0x00000002u; // 801E1AA0
  if (crb(c,2)) { goto L_801E1AAC; } // 801E1AA4
  c->r[26]=c->r[26]+0x80000000u; // 801E1AA8
L_801E1AAC:;
  c->r[3]=0u+0x24920000u; // 801E1AAC
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 801E1AB0
  c->r[3]=c->r[3]+0x00004925u; // 801E1AB4
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[30])>>32); // 801E1AB8
  c->r[3]=c->r[30]-c->r[4]; // 801E1ABC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801E1AC0
  c->r[4]=c->r[3]+c->r[4]; // 801E1AC4
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801E1AC8
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801E1ACC
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801E1AD0
  c->r[4]=c->r[30]-c->r[5]; // 801E1AD4
  c->r[0]=c->r[4]+c->r[0]; // 801E1AD8
  c->r[30]=c->r[0]+c->r[3]; // 801E1ADC
  c->r[30]=c->r[30]+0x00000002u; // 801E1AE0
  goto L_801E1B30; // 801E1AE4
L_801E1AE8:;
  c->r[0]=rotl(c->r[31],0)&0x0000000Fu; cr0(c,c->r[0]); // 801E1AE8
  if (!crb(c,2)) { goto L_801E1B04; } // 801E1AEC
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801E1AF0
  c->r[31]=c->r[31]+0x00000002u; // 801E1AF4
  c->r[3]=c->r[3]+0x80000000u; // 801E1AF8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E1AFC
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801E1B00
L_801E1B04:;
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801E1B04
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801E1B08
  c->r[4]=c->r[3]+0x80000000u; // 801E1B0C
  c->r[4]=R8(c->r[4]+0x00000000u); // 801E1B10
  c->r[3]=c->r[1]+0x00000008u; // 801E1B14
  c->r[0]=sraw(c,c->r[4],4); // 801E1B18
  if (crb(c,2)) { goto L_801E1B24; } // 801E1B1C
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801E1B20
L_801E1B24:;
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801E1B24
  c->lr=0x801E1B2Cu; f_801FD554(c); // 801E1B28
  c->r[31]=c->r[31]+0x00000001u; // 801E1B2C
L_801E1B30:;
  cmpu(c,0,c->r[31],c->r[30]); // 801E1B30
  if (crb(c,0)) { IRQCHK(c); goto L_801E1AE8; } // 801E1B34
  c->r[0]=R16(c->r[1]+0x0000002Au); // 801E1B38
  c->r[11]=c->r[1]+0x00000050u; // 801E1B3C
  W16(c->r[27]+0x00000000u,c->r[0]); // 801E1B40
  c->r[0]=R16(c->r[1]+0x0000002Cu); // 801E1B44
  W16(c->r[28]+0x00000000u,c->r[0]); // 801E1B48
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 801E1B4C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801E1B50
  c->lr=0x801E1B58u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E1B54
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E1B58
  c->lr=c->r[0]; // 801E1B5C
  c->r[1]=c->r[1]+0x00000050u; // 801E1B60
  return; // 801E1B64
}

// Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv
void f_801E1B68(Ctx* __restrict c) {
  trace_call(0x801E1B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1B68
  c->r[0]=c->lr; // 801E1B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1B70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1B74
  c->r[31]=c->r[3]|c->r[3]; // 801E1B78
  c->lr=0x801E1B80u; f_800E4F54(c); // 801E1B7C
  c->r[5]=R32(c->r[31]+0x00000000u); // 801E1B80
  cmps(c,0,(int32_t)c->r[5],0); // 801E1B84
  if (!crb(c,2)) { goto L_801E1B94; } // 801E1B88
  c->lr=0x801E1B90u; f_800E4F7C(c); // 801E1B8C
  goto L_801E1CF8; // 801E1B90
L_801E1B94:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801E1B94
  c->r[4]=0u+0x2AAB0000u; // 801E1B98
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801E1B9C
  c->r[6]=0u+0xFFFFFFFFu; // 801E1BA0
  W16(c->r[5]+0x00000092u,c->r[0]); // 801E1BA4
  c->r[7]=R16(c->r[31]+0x0000000Eu); // 801E1BA8
  c->r[0]=R16(c->r[31]+0x00000008u); // 801E1BAC
  c->r[0]=c->r[7]-c->r[0]; // 801E1BB0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801E1BB4
  c->r[0]=sraw(c,c->r[0],4); // 801E1BB8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E1BBC
  c->r[0]=c->r[0]+c->r[4]; // 801E1BC0
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801E1BC4
  c->r[0]=0u-c->r[8]; // 801E1BC8
  c->r[0]=c->r[0]&~c->r[8]; // 801E1BCC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E1BD0
  c->r[0]=c->r[8]+c->r[0]; cr0(c,c->r[0]); // 801E1BD4
  if (crb(c,2)) { goto L_801E1BE0; } // 801E1BD8
  c->r[6]=0u+0x00000001u; // 801E1BDC
L_801E1BE0:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)96); // 801E1BE0
  c->r[5]=R16(c->r[31]+0x00000008u); // 801E1BE4
  c->r[4]=R16(c->r[31]+0x00000008u); // 801E1BE8
  c->r[0]=c->r[4]+c->r[0]; // 801E1BEC
  c->r[4]=c->r[7]-c->r[0]; cr0(c,c->r[4]); // 801E1BF0
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)96); // 801E1BF4
  c->r[0]=c->r[5]+c->r[0]; // 801E1BF8
  if (!crb(c,0)) { goto L_801E1C04; } // 801E1BFC
  c->r[4]=0u-c->r[4]; // 801E1C00
L_801E1C04:;
  c->r[0]=c->r[7]-c->r[0]; cr0(c,c->r[0]); // 801E1C04
  if (!crb(c,0)) { goto L_801E1C10; } // 801E1C08
  c->r[0]=0u-c->r[0]; // 801E1C0C
L_801E1C10:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801E1C10
  if (!crb(c,0)) { goto L_801E1C24; } // 801E1C14
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E1C18
  W16(c->r[4]+0x00000094u,c->r[8]); // 801E1C1C
  goto L_801E1C2C; // 801E1C20
L_801E1C24:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E1C24
  W16(c->r[4]+0x00000094u,c->r[6]); // 801E1C28
L_801E1C2C:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 801E1C2C
  c->r[4]=R16(c->r[31]+0x00000008u); // 801E1C30
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000094u); // 801E1C34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801E1C38
  c->r[0]=c->r[4]+c->r[0]; cr0(c,c->r[0]); // 801E1C3C
  if (!crb(c,0)) { goto L_801E1C6C; } // 801E1C40
  c->r[0]=R16(c->r[31]+0x00000008u); // 801E1C44
  c->r[4]=0u+0x2AAB0000u; // 801E1C48
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801E1C4C
  c->r[0]=0u-c->r[0]; // 801E1C50
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801E1C54
  c->r[0]=sraw(c,c->r[0],4); // 801E1C58
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E1C5C
  c->r[0]=c->r[0]+c->r[4]; // 801E1C60
  W16(c->r[5]+0x00000094u,c->r[0]); // 801E1C64
  goto L_801E1C98; // 801E1C68
L_801E1C6C:;
  cmps(c,0,(int32_t)c->r[0],32767); // 801E1C6C
  if (!crb(c,1)) { goto L_801E1C98; } // 801E1C70
  c->r[0]=R16(c->r[31]+0x00000008u); // 801E1C74
  c->r[4]=0u+0x2AAB0000u; // 801E1C78
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801E1C7C
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 801E1C80
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801E1C84
  c->r[0]=sraw(c,c->r[0],4); // 801E1C88
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E1C8C
  c->r[0]=c->r[0]+c->r[4]; // 801E1C90
  W16(c->r[5]+0x00000094u,c->r[0]); // 801E1C94
L_801E1C98:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E1C98
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 801E1C9C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1CA0
  if (!crb(c,2)) { goto L_801E1CBC; } // 801E1CA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 801E1CA8
  cmps(c,0,(int32_t)c->r[0],0); // 801E1CAC
  if (!crb(c,2)) { goto L_801E1CBC; } // 801E1CB0
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 801E1CB4
  W16(c->r[4]+0x00000092u,c->r[0]); // 801E1CB8
L_801E1CBC:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 801E1CBC
  c->r[0]=0u+0x00000000u; // 801E1CC0
  c->r[5]=R32(c->r[31]+0x00000000u); // 801E1CC4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFDFFu; // 801E1CC8
  c->r[6]=c->r[4]|0x00000100u; // 801E1CCC
  W32(c->r[31]+0x00000004u,c->r[6]); // 801E1CD0
  c->r[4]=R16(c->r[5]+0x00000092u); // 801E1CD4
  W16(c->r[31]+0x00000008u,c->r[4]); // 801E1CD8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000094u); // 801E1CDC
  W16(c->r[31]+0x0000000Au,c->r[4]); // 801E1CE0
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801E1CE4
  c->r[4]=c->r[4]|c->r[6]; // 801E1CE8
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801E1CEC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E1CF0
  c->lr=0x801E1CF8u; f_800E4F7C(c); // 801E1CF4
L_801E1CF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1CF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1CFC
  c->lr=c->r[0]; // 801E1D00
  c->r[1]=c->r[1]+0x00000010u; // 801E1D04
  return; // 801E1D08
}

// Set__Q44nw4r3snd6detail17AxVoiceParamBlockFP6_AXVPB
void f_801E1D0C(Ctx* __restrict c) {
  trace_call(0x801E1D0Cu);
  c->r[5]=0u+0x00010000u; // 801E1D0C
  c->r[6]=0u+0x00000000u; // 801E1D10
  c->r[0]=c->r[5]+0xFFFF8000u; // 801E1D14
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E1D18
  c->r[5]=0u+0x00000001u; // 801E1D1C
  W16(c->r[3]+0x00000008u,c->r[0]); // 801E1D20
  W32(c->r[3]+0x00000004u,c->r[6]); // 801E1D24
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801E1D28
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 801E1D2C
  W16(c->r[3]+0x0000000Au,c->r[6]); // 801E1D30
  return; // 801E1D34
}

// SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb
void f_801E1D38(Ctx* __restrict c) {
  trace_call(0x801E1D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1D38
  c->r[0]=c->lr; // 801E1D3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1D40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1D44
  c->r[31]=c->r[5]|c->r[5]; // 801E1D48
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1D4C
  c->r[30]=c->r[3]|c->r[3]; // 801E1D50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1D54
  c->r[29]=c->r[4]|c->r[4]; // 801E1D58
  c->lr=0x801E1D60u; f_800E4F54(c); // 801E1D5C
  c->r[6]=R32(c->r[30]+0x00000000u); // 801E1D60
  cmps(c,0,(int32_t)c->r[6],0); // 801E1D64
  if (!crb(c,2)) { goto L_801E1D74; } // 801E1D68
  c->lr=0x801E1D70u; f_800E4F7C(c); // 801E1D6C
  goto L_801E1F94; // 801E1D70
L_801E1D74:;
  c->r[4]=R16(c->r[29]+0x00000000u); // 801E1D74
  c->r[5]=c->r[6]+0x0000003Eu; // 801E1D78
  c->r[0]=0u+0x00000000u; // 801E1D7C
  cmps(c,0,(int32_t)c->r[4],0); // 801E1D80
  W16(c->r[6]+0x0000003Cu,c->r[4]); // 801E1D84
  if (crb(c,2)) { goto L_801E1D90; } // 801E1D88
  c->r[0]=c->r[0]|0x00000001u; // 801E1D8C
L_801E1D90:;
  c->r[6]=R16(c->r[29]+0x00000002u); // 801E1D90
  c->r[4]=c->r[29]+0x00000004u; // 801E1D94
  cmps(c,0,(int32_t)c->r[6],0); // 801E1D98
  W16(c->r[5]+0x00000000u,c->r[6]); // 801E1D9C
  if (crb(c,2)) { goto L_801E1DA8; } // 801E1DA0
  c->r[0]=c->r[0]|0x00000005u; // 801E1DA4
L_801E1DA8:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 801E1DA8
  cmps(c,0,(int32_t)c->r[6],0); // 801E1DAC
  W16(c->r[5]+0x00000002u,c->r[6]); // 801E1DB0
  if (crb(c,2)) { goto L_801E1DBC; } // 801E1DB4
  c->r[0]=c->r[0]|0x00000002u; // 801E1DB8
L_801E1DBC:;
  c->r[6]=R16(c->r[4]+0x00000002u); // 801E1DBC
  cmps(c,0,(int32_t)c->r[6],0); // 801E1DC0
  W16(c->r[5]+0x00000004u,c->r[6]); // 801E1DC4
  if (crb(c,2)) { goto L_801E1DD0; } // 801E1DC8
  c->r[0]=c->r[0]|0x00000006u; // 801E1DCC
L_801E1DD0:;
  c->r[6]=R16(c->r[4]+0x00000004u); // 801E1DD0
  cmps(c,0,(int32_t)c->r[6],0); // 801E1DD4
  W16(c->r[5]+0x00000006u,c->r[6]); // 801E1DD8
  if (crb(c,2)) { goto L_801E1DE4; } // 801E1DDC
  c->r[0]=c->r[0]|0x00010000u; // 801E1DE0
L_801E1DE4:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 801E1DE4
  cmps(c,0,(int32_t)c->r[6],0); // 801E1DE8
  W16(c->r[5]+0x00000008u,c->r[6]); // 801E1DEC
  if (crb(c,2)) { goto L_801E1DF8; } // 801E1DF0
  c->r[0]=c->r[0]|0x00050000u; // 801E1DF4
L_801E1DF8:;
  c->r[6]=R16(c->r[4]+0x00000008u); // 801E1DF8
  cmps(c,0,(int32_t)c->r[6],0); // 801E1DFC
  W16(c->r[5]+0x0000000Au,c->r[6]); // 801E1E00
  if (crb(c,2)) { goto L_801E1E0C; } // 801E1E04
  c->r[0]=c->r[0]|0x00020000u; // 801E1E08
L_801E1E0C:;
  c->r[6]=R16(c->r[4]+0x0000000Au); // 801E1E0C
  cmps(c,0,(int32_t)c->r[6],0); // 801E1E10
  W16(c->r[5]+0x0000000Cu,c->r[6]); // 801E1E14
  if (crb(c,2)) { goto L_801E1E20; } // 801E1E18
  c->r[0]=c->r[0]|0x00060000u; // 801E1E1C
L_801E1E20:;
  c->r[6]=R16(c->r[4]+0x0000000Cu); // 801E1E20
  cmps(c,0,(int32_t)c->r[6],0); // 801E1E24
  W16(c->r[5]+0x0000000Eu,c->r[6]); // 801E1E28
  if (crb(c,2)) { goto L_801E1E34; } // 801E1E2C
  c->r[0]=c->r[0]|0x00200000u; // 801E1E30
L_801E1E34:;
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 801E1E34
  cmps(c,0,(int32_t)c->r[6],0); // 801E1E38
  W16(c->r[5]+0x00000010u,c->r[6]); // 801E1E3C
  if (crb(c,2)) { goto L_801E1E48; } // 801E1E40
  c->r[0]=c->r[0]|0x00A00000u; // 801E1E44
L_801E1E48:;
  c->r[6]=R16(c->r[4]+0x00000010u); // 801E1E48
  cmps(c,0,(int32_t)c->r[6],0); // 801E1E4C
  W16(c->r[5]+0x00000012u,c->r[6]); // 801E1E50
  if (crb(c,2)) { goto L_801E1E5C; } // 801E1E54
  c->r[0]=c->r[0]|0x00400000u; // 801E1E58
L_801E1E5C:;
  c->r[6]=R16(c->r[4]+0x00000012u); // 801E1E5C
  cmps(c,0,(int32_t)c->r[6],0); // 801E1E60
  W16(c->r[5]+0x00000014u,c->r[6]); // 801E1E64
  if (crb(c,2)) { goto L_801E1E70; } // 801E1E68
  c->r[0]=c->r[0]|0x00C00000u; // 801E1E6C
L_801E1E70:;
  c->r[6]=R16(c->r[4]+0x00000014u); // 801E1E70
  cmps(c,0,(int32_t)c->r[6],0); // 801E1E74
  W16(c->r[5]+0x00000016u,c->r[6]); // 801E1E78
  if (crb(c,2)) { goto L_801E1E84; } // 801E1E7C
  c->r[0]=c->r[0]|0x04000000u; // 801E1E80
L_801E1E84:;
  c->r[6]=R16(c->r[4]+0x00000016u); // 801E1E84
  cmps(c,0,(int32_t)c->r[6],0); // 801E1E88
  W16(c->r[5]+0x00000018u,c->r[6]); // 801E1E8C
  if (crb(c,2)) { goto L_801E1E98; } // 801E1E90
  c->r[0]=c->r[0]|0x14000000u; // 801E1E94
L_801E1E98:;
  c->r[6]=R16(c->r[4]+0x00000018u); // 801E1E98
  cmps(c,0,(int32_t)c->r[6],0); // 801E1E9C
  W16(c->r[5]+0x0000001Au,c->r[6]); // 801E1EA0
  if (crb(c,2)) { goto L_801E1EAC; } // 801E1EA4
  c->r[0]=c->r[0]|0x08000000u; // 801E1EA8
L_801E1EAC:;
  c->r[6]=R16(c->r[4]+0x0000001Au); // 801E1EAC
  cmps(c,0,(int32_t)c->r[6],0); // 801E1EB0
  W16(c->r[5]+0x0000001Cu,c->r[6]); // 801E1EB4
  if (crb(c,2)) { goto L_801E1EC0; } // 801E1EB8
  c->r[0]=c->r[0]|0x18000000u; // 801E1EBC
L_801E1EC0:;
  c->r[6]=R16(c->r[4]+0x0000001Cu); // 801E1EC0
  cmps(c,0,(int32_t)c->r[6],0); // 801E1EC4
  W16(c->r[5]+0x0000001Eu,c->r[6]); // 801E1EC8
  if (crb(c,2)) { goto L_801E1ED4; } // 801E1ECC
  c->r[0]=c->r[0]|0x00000008u; // 801E1ED0
L_801E1ED4:;
  c->r[6]=R16(c->r[4]+0x0000001Eu); // 801E1ED4
  cmps(c,0,(int32_t)c->r[6],0); // 801E1ED8
  W16(c->r[5]+0x00000020u,c->r[6]); // 801E1EDC
  if (crb(c,2)) { goto L_801E1EE8; } // 801E1EE0
  c->r[0]=c->r[0]|0x00000018u; // 801E1EE4
L_801E1EE8:;
  c->r[6]=R16(c->r[4]+0x00000020u); // 801E1EE8
  cmps(c,0,(int32_t)c->r[6],0); // 801E1EEC
  W16(c->r[5]+0x00000022u,c->r[6]); // 801E1EF0
  if (crb(c,2)) { goto L_801E1EFC; } // 801E1EF4
  c->r[0]=c->r[0]|0x00080000u; // 801E1EF8
L_801E1EFC:;
  c->r[6]=R16(c->r[4]+0x00000022u); // 801E1EFC
  cmps(c,0,(int32_t)c->r[6],0); // 801E1F00
  W16(c->r[5]+0x00000024u,c->r[6]); // 801E1F04
  if (crb(c,2)) { goto L_801E1F10; } // 801E1F08
  c->r[0]=c->r[0]|0x00180000u; // 801E1F0C
L_801E1F10:;
  c->r[6]=R16(c->r[4]+0x00000024u); // 801E1F10
  cmps(c,0,(int32_t)c->r[6],0); // 801E1F14
  W16(c->r[5]+0x00000026u,c->r[6]); // 801E1F18
  if (crb(c,2)) { goto L_801E1F24; } // 801E1F1C
  c->r[0]=c->r[0]|0x01000000u; // 801E1F20
L_801E1F24:;
  c->r[6]=R16(c->r[4]+0x00000026u); // 801E1F24
  cmps(c,0,(int32_t)c->r[6],0); // 801E1F28
  W16(c->r[5]+0x00000028u,c->r[6]); // 801E1F2C
  if (crb(c,2)) { goto L_801E1F38; } // 801E1F30
  c->r[0]=c->r[0]|0x03000000u; // 801E1F34
L_801E1F38:;
  c->r[6]=R16(c->r[4]+0x00000028u); // 801E1F38
  cmps(c,0,(int32_t)c->r[6],0); // 801E1F3C
  W16(c->r[5]+0x0000002Au,c->r[6]); // 801E1F40
  if (crb(c,2)) { goto L_801E1F4C; } // 801E1F44
  c->r[0]=c->r[0]|0x20000000u; // 801E1F48
L_801E1F4C:;
  c->r[4]=R16(c->r[4]+0x0000002Au); // 801E1F4C
  cmps(c,0,(int32_t)c->r[4],0); // 801E1F50
  W16(c->r[5]+0x0000002Cu,c->r[4]); // 801E1F54
  if (crb(c,2)) { goto L_801E1F60; } // 801E1F58
  c->r[0]=c->r[0]|0x60000000u; // 801E1F5C
L_801E1F60:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E1F60
  cmps(c,0,(int32_t)c->r[31],0); // 801E1F64
  W32(c->r[4]+0x00000034u,c->r[0]); // 801E1F68
  if (crb(c,2)) { goto L_801E1F84; } // 801E1F6C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E1F70
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801E1F74
  c->r[0]=c->r[0]|0x00000012u; // 801E1F78
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801E1F7C
  goto L_801E1F90; // 801E1F80
L_801E1F84:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E1F84
  c->r[0]=c->r[0]|0x00000012u; // 801E1F88
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E1F8C
L_801E1F90:;
  c->lr=0x801E1F94u; f_800E4F7C(c); // 801E1F90
L_801E1F94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1F94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1F98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1F9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1FA0
  c->lr=c->r[0]; // 801E1FA4
  c->r[1]=c->r[1]+0x00000020u; // 801E1FA8
  return; // 801E1FAC
}

// SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl
void f_801E1FB0(Ctx* __restrict c) {
  trace_call(0x801E1FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1FB0
  c->r[0]=c->lr; // 801E1FB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1FB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1FBC
  c->r[31]=c->r[4]|c->r[4]; // 801E1FC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E1FC4
  c->r[30]=c->r[3]|c->r[3]; // 801E1FC8
  c->lr=0x801E1FD0u; f_800E4F54(c); // 801E1FCC
  c->r[5]=R32(c->r[30]+0x00000000u); // 801E1FD0
  cmps(c,0,(int32_t)c->r[5],0); // 801E1FD4
  if (!crb(c,2)) { goto L_801E1FE4; } // 801E1FD8
  c->lr=0x801E1FE0u; f_800E4F7C(c); // 801E1FDC
  goto L_801E2078; // 801E1FE0
L_801E1FE4:;
  cmps(c,0,(int32_t)c->r[31],2); // 801E1FE4
  if (crb(c,2)) { goto L_801E2028; } // 801E1FE8
  if (!crb(c,0)) { goto L_801E2000; } // 801E1FEC
  cmps(c,0,(int32_t)c->r[31],0); // 801E1FF0
  if (crb(c,2)) { goto L_801E2010; } // 801E1FF4
  if (!crb(c,0)) { goto L_801E201C; } // 801E1FF8
  goto L_801E2068; // 801E1FFC
L_801E2000:;
  cmps(c,0,(int32_t)c->r[31],4); // 801E2000
  if (crb(c,2)) { goto L_801E2054; } // 801E2004
  if (!crb(c,0)) { goto L_801E2068; } // 801E2008
  goto L_801E203C; // 801E200C
L_801E2010:;
  c->r[0]=0u+0x00000002u; // 801E2010
  W16(c->r[5]+0x00000030u,c->r[0]); // 801E2014
  goto L_801E2068; // 801E2018
L_801E201C:;
  c->r[0]=0u+0x00000001u; // 801E201C
  W16(c->r[5]+0x00000030u,c->r[0]); // 801E2020
  goto L_801E2068; // 801E2024
L_801E2028:;
  c->r[0]=0u+0x00000000u; // 801E2028
  W16(c->r[5]+0x00000030u,c->r[0]); // 801E202C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E2030
  W16(c->r[4]+0x00000032u,c->r[0]); // 801E2034
  goto L_801E2068; // 801E2038
L_801E203C:;
  c->r[4]=0u+0x00000000u; // 801E203C
  c->r[0]=0u+0x00000001u; // 801E2040
  W16(c->r[5]+0x00000030u,c->r[4]); // 801E2044
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E2048
  W16(c->r[4]+0x00000032u,c->r[0]); // 801E204C
  goto L_801E2068; // 801E2050
L_801E2054:;
  c->r[4]=0u+0x00000000u; // 801E2054
  c->r[0]=0u+0x00000002u; // 801E2058
  W16(c->r[5]+0x00000030u,c->r[4]); // 801E205C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E2060
  W16(c->r[4]+0x00000032u,c->r[0]); // 801E2064
L_801E2068:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E2068
  c->r[0]=c->r[0]|0x00000001u; // 801E206C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E2070
  c->lr=0x801E2078u; f_800E4F7C(c); // 801E2074
L_801E2078:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2078
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E207C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2080
  c->lr=c->r[0]; // 801E2084
  c->r[1]=c->r[1]+0x00000010u; // 801E2088
  return; // 801E208C
}

// SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX
void f_801E2090(Ctx* __restrict c) {
  trace_call(0x801E2090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2090
  c->r[0]=c->lr; // 801E2094
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E209C
  c->r[31]=c->r[3]|c->r[3]; // 801E20A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E20A4
  c->r[30]=c->r[4]|c->r[4]; // 801E20A8
  c->lr=0x801E20B0u; f_800E4F54(c); // 801E20AC
  c->r[5]=R32(c->r[31]+0x00000000u); // 801E20B0
  cmps(c,0,(int32_t)c->r[5],0); // 801E20B4
  if (!crb(c,2)) { goto L_801E20C4; } // 801E20B8
  c->lr=0x801E20C0u; f_800E4F7C(c); // 801E20BC
  goto L_801E2264; // 801E20C0
L_801E20C4:;
  c->r[0]=R16(c->r[30]+0x00000000u); // 801E20C4
  c->r[4]=c->r[5]+0x00000104u; // 801E20C8
  c->r[6]=0u+0x00000000u; // 801E20CC
  cmps(c,0,(int32_t)c->r[0],0); // 801E20D0
  W16(c->r[5]+0x00000102u,c->r[0]); // 801E20D4
  if (crb(c,2)) { goto L_801E20E0; } // 801E20D8
  c->r[6]=c->r[6]|0x00000001u; // 801E20DC
L_801E20E0:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801E20E0
  c->r[5]=c->r[30]+0x00000004u; // 801E20E4
  cmps(c,0,(int32_t)c->r[0],0); // 801E20E8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801E20EC
  if (crb(c,2)) { goto L_801E20FC; } // 801E20F0
  c->r[0]=c->r[6]|0x00000002u; // 801E20F4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E20F8
L_801E20FC:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 801E20FC
  cmps(c,0,(int32_t)c->r[0],0); // 801E2100
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E2104
  if (crb(c,2)) { goto L_801E2114; } // 801E2108
  c->r[0]=c->r[6]|0x00000004u; // 801E210C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2110
L_801E2114:;
  c->r[0]=R16(c->r[5]+0x00000002u); // 801E2114
  cmps(c,0,(int32_t)c->r[0],0); // 801E2118
  W16(c->r[4]+0x00000004u,c->r[0]); // 801E211C
  if (crb(c,2)) { goto L_801E212C; } // 801E2120
  c->r[0]=c->r[6]|0x00000008u; // 801E2124
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2128
L_801E212C:;
  c->r[0]=R16(c->r[5]+0x00000004u); // 801E212C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2130
  W16(c->r[4]+0x00000006u,c->r[0]); // 801E2134
  if (crb(c,2)) { goto L_801E2144; } // 801E2138
  c->r[0]=c->r[6]|0x00000010u; // 801E213C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2140
L_801E2144:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 801E2144
  cmps(c,0,(int32_t)c->r[0],0); // 801E2148
  W16(c->r[4]+0x00000008u,c->r[0]); // 801E214C
  if (crb(c,2)) { goto L_801E215C; } // 801E2150
  c->r[0]=c->r[6]|0x00000020u; // 801E2154
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2158
L_801E215C:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801E215C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2160
  W16(c->r[4]+0x0000000Au,c->r[0]); // 801E2164
  if (crb(c,2)) { goto L_801E2174; } // 801E2168
  c->r[0]=c->r[6]|0x00000040u; // 801E216C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2170
L_801E2174:;
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801E2174
  cmps(c,0,(int32_t)c->r[0],0); // 801E2178
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801E217C
  if (crb(c,2)) { goto L_801E218C; } // 801E2180
  c->r[0]=c->r[6]|0x00000080u; // 801E2184
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2188
L_801E218C:;
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801E218C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2190
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 801E2194
  if (crb(c,2)) { goto L_801E21A4; } // 801E2198
  c->r[0]=c->r[6]|0x00000100u; // 801E219C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E21A0
L_801E21A4:;
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 801E21A4
  cmps(c,0,(int32_t)c->r[0],0); // 801E21A8
  W16(c->r[4]+0x00000010u,c->r[0]); // 801E21AC
  if (crb(c,2)) { goto L_801E21BC; } // 801E21B0
  c->r[0]=c->r[6]|0x00000200u; // 801E21B4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E21B8
L_801E21BC:;
  c->r[0]=R16(c->r[5]+0x00000010u); // 801E21BC
  cmps(c,0,(int32_t)c->r[0],0); // 801E21C0
  W16(c->r[4]+0x00000012u,c->r[0]); // 801E21C4
  if (crb(c,2)) { goto L_801E21D4; } // 801E21C8
  c->r[0]=c->r[6]|0x00000400u; // 801E21CC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E21D0
L_801E21D4:;
  c->r[0]=R16(c->r[5]+0x00000012u); // 801E21D4
  cmps(c,0,(int32_t)c->r[0],0); // 801E21D8
  W16(c->r[4]+0x00000014u,c->r[0]); // 801E21DC
  if (crb(c,2)) { goto L_801E21EC; } // 801E21E0
  c->r[0]=c->r[6]|0x00000800u; // 801E21E4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E21E8
L_801E21EC:;
  c->r[0]=R16(c->r[5]+0x00000014u); // 801E21EC
  cmps(c,0,(int32_t)c->r[0],0); // 801E21F0
  W16(c->r[4]+0x00000016u,c->r[0]); // 801E21F4
  if (crb(c,2)) { goto L_801E2204; } // 801E21F8
  c->r[0]=c->r[6]|0x00001000u; // 801E21FC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2200
L_801E2204:;
  c->r[0]=R16(c->r[5]+0x00000016u); // 801E2204
  cmps(c,0,(int32_t)c->r[0],0); // 801E2208
  W16(c->r[4]+0x00000018u,c->r[0]); // 801E220C
  if (crb(c,2)) { goto L_801E221C; } // 801E2210
  c->r[0]=c->r[6]|0x00002000u; // 801E2214
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2218
L_801E221C:;
  c->r[0]=R16(c->r[5]+0x00000018u); // 801E221C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2220
  W16(c->r[4]+0x0000001Au,c->r[0]); // 801E2224
  if (crb(c,2)) { goto L_801E2234; } // 801E2228
  c->r[0]=c->r[6]|0x00004000u; // 801E222C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2230
L_801E2234:;
  c->r[0]=R16(c->r[5]+0x0000001Au); // 801E2234
  cmps(c,0,(int32_t)c->r[0],0); // 801E2238
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 801E223C
  if (crb(c,2)) { goto L_801E224C; } // 801E2240
  c->r[0]=c->r[6]|0x00008000u; // 801E2244
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801E2248
L_801E224C:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E224C
  W16(c->r[4]+0x00000100u,c->r[6]); // 801E2250
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E2254
  c->r[0]=c->r[0]|0x03000000u; // 801E2258
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E225C
  c->lr=0x801E2264u; f_800E4F7C(c); // 801E2260
L_801E2264:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2268
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E226C
  c->lr=c->r[0]; // 801E2270
  c->r[1]=c->r[1]+0x00000010u; // 801E2274
  return; // 801E2278
}

// SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse
void f_801E227C(Ctx* __restrict c) {
  trace_call(0x801E227Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E227C
  c->r[0]=c->lr; // 801E2280
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801E2284
  c->r[11]=c->r[1]+0x000000A0u; // 801E2288
  c->lr=0x801E2290u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E228C
  c->r[31]=c->r[3]|c->r[3]; // 801E2290
  c->r[26]=c->r[4]|c->r[4]; // 801E2294
  if (!crb(c,6)) { goto L_801E22BC; } // 801E2298
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801E229C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801E22A0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801E22A4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801E22A8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801E22AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801E22B0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801E22B4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801E22B8
L_801E22BC:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E22BC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E22C0
  W32(c->r[1]+0x00000010u,c->r[5]); // 801E22C4
  W32(c->r[1]+0x00000014u,c->r[6]); // 801E22C8
  W32(c->r[1]+0x00000018u,c->r[7]); // 801E22CC
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801E22D0
  W32(c->r[1]+0x00000020u,c->r[9]); // 801E22D4
  W32(c->r[1]+0x00000024u,c->r[10]); // 801E22D8
  c->lr=0x801E22E0u; f_800E4F54(c); // 801E22DC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E22E0
  c->r[30]=c->r[3]|c->r[3]; // 801E22E4
  cmps(c,0,(int32_t)c->r[0],0); // 801E22E8
  if (!crb(c,2)) { goto L_801E22F8; } // 801E22EC
  c->lr=0x801E22F4u; f_800E4F7C(c); // 801E22F0
  goto L_801E23E8; // 801E22F4
L_801E22F8:;
  cmpu(c,0,c->r[26],0x00000001u); // 801E22F8
  if (!crb(c,2)) { goto L_801E2308; } // 801E22FC
  c->r[27]=0u+0x00000002u; // 801E2300
  goto L_801E2320; // 801E2304
L_801E2308:;
  cmpu(c,0,c->r[26],0x00000002u); // 801E2308
  if (!crb(c,2)) { goto L_801E2318; } // 801E230C
  c->r[27]=0u+0x00000005u; // 801E2310
  goto L_801E2320; // 801E2314
L_801E2318:;
  c->lr=0x801E231Cu; f_800E4F7C(c); // 801E2318
  goto L_801E23E8; // 801E231C
L_801E2320:;
  c->r[3]=c->r[1]+0x000000A8u; // 801E2320
  c->r[0]=c->r[1]+0x00000008u; // 801E2324
  c->r[4]=0u+0x02000000u; // 801E2328
  W32(c->r[1]+0x00000078u,c->r[3]); // 801E232C
  c->r[29]=c->r[1]+0x00000068u; // 801E2330
  c->r[28]=0u+0x00000000u; // 801E2334
  W32(c->r[1]+0x00000074u,c->r[4]); // 801E2338
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801E233C
  goto L_801E2360; // 801E2340
L_801E2344:;
  c->r[3]=c->r[1]+0x00000074u; // 801E2344
  c->r[4]=0u+0x00000001u; // 801E2348
  c->lr=0x801E2350u; f_801095B4(c); // 801E234C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E2350
  c->r[28]=c->r[28]+0x00000001u; // 801E2354
  W16(c->r[29]+0x00000000u,c->r[0]); // 801E2358
  c->r[29]=c->r[29]+0x00000002u; // 801E235C
L_801E2360:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 801E2360
  if (crb(c,0)) { IRQCHK(c); goto L_801E2344; } // 801E2364
  cmpu(c,0,c->r[26],0x00000001u); // 801E2368
  if (!crb(c,2)) { goto L_801E2398; } // 801E236C
  c->r[4]=R16(c->r[1]+0x00000068u); // 801E2370
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E2374
  c->r[0]=R16(c->r[1]+0x0000006Au); // 801E2378
  W16(c->r[3]+0x00000140u,c->r[4]); // 801E237C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E2380
  W16(c->r[3]+0x00000142u,c->r[0]); // 801E2384
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E2388
  c->r[0]=c->r[0]|0x20000000u; // 801E238C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E2390
  goto L_801E23E0; // 801E2394
L_801E2398:;
  c->r[4]=R16(c->r[1]+0x00000068u); // 801E2398
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E239C
  c->r[0]=R16(c->r[1]+0x0000006Au); // 801E23A0
  W16(c->r[3]+0x00000146u,c->r[4]); // 801E23A4
  c->r[5]=R16(c->r[1]+0x0000006Cu); // 801E23A8
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E23AC
  c->r[4]=R16(c->r[1]+0x0000006Eu); // 801E23B0
  W16(c->r[3]+0x00000148u,c->r[0]); // 801E23B4
  c->r[0]=R16(c->r[1]+0x00000070u); // 801E23B8
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E23BC
  W16(c->r[3]+0x0000014Au,c->r[5]); // 801E23C0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E23C4
  W16(c->r[3]+0x0000014Cu,c->r[4]); // 801E23C8
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E23CC
  W16(c->r[3]+0x0000014Eu,c->r[0]); // 801E23D0
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E23D4
  c->r[0]=c->r[0]|0x40000000u; // 801E23D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E23DC
L_801E23E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E23E0
  c->lr=0x801E23E8u; f_800E4F7C(c); // 801E23E4
L_801E23E8:;
  c->r[11]=c->r[1]+0x000000A0u; // 801E23E8
  c->lr=0x801E23F0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E23EC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801E23F0
  c->lr=c->r[0]; // 801E23F4
  c->r[1]=c->r[1]+0x000000A0u; // 801E23F8
  return; // 801E23FC
}

// GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_801E2400(Ctx* __restrict c) {
  trace_call(0x801E2400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2400
  c->r[0]=c->lr; // 801E2404
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2408
  c->r[0]=R8(c->r[13]+0xFFFF9DB0u); // 801E240C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E2410
  if (!crb(c,2)) { goto L_801E248C; } // 801E2414
  c->r[6]=0u+0x80360000u; // 801E2418
  c->r[0]=0u+0x00000000u; // 801E241C
  c->r[3]=c->r[6]+0x00006B3Cu; // 801E2420
  c->r[4]=0u+0x801E0000u; // 801E2424
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E2428
  c->r[9]=c->r[3]+0x00000004u; // 801E242C
  c->r[8]=c->r[3]+0x00000010u; // 801E2430
  c->r[7]=c->r[3]+0x0000001Cu; // 801E2434
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E2438
  c->r[5]=0u+0x80360000u; // 801E243C
  c->r[4]=c->r[4]+0x000024A4u; // 801E2440
  W32(c->r[3]+0x00000010u,c->r[0]); // 801E2444
  c->r[5]=c->r[5]+0x00006B30u; // 801E2448
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E244C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801E2450
  W32(c->r[3]+0x00000020u,c->r[0]); // 801E2454
  W32(c->r[6]+0x00006B3Cu,c->r[0]); // 801E2458
  W32(c->r[3]+0x00000004u,c->r[9]); // 801E245C
  W32(c->r[3]+0x00000008u,c->r[9]); // 801E2460
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E2464
  W32(c->r[3]+0x00000010u,c->r[8]); // 801E2468
  W32(c->r[3]+0x00000014u,c->r[8]); // 801E246C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E2470
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 801E2474
  W32(c->r[3]+0x00000020u,c->r[7]); // 801E2478
  W8(c->r[3]+0x00000024u,c->r[0]); // 801E247C
  c->lr=0x801E2484u; f_8010967C(c); // 801E2480
  c->r[0]=0u+0x00000001u; // 801E2484
  W8(c->r[13]+0xFFFF9DB0u,c->r[0]); // 801E2488
L_801E248C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E248C
  c->r[3]=0u+0x80360000u; // 801E2490
  c->r[3]=c->r[3]+0x00006B3Cu; // 801E2494
  c->lr=c->r[0]; // 801E2498
  c->r[1]=c->r[1]+0x00000010u; // 801E249C
  return; // 801E24A0
}

// __dt__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_801E24A4(Ctx* __restrict c) {
  trace_call(0x801E24A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E24A4
  c->r[0]=c->lr; // 801E24A8
  cmps(c,0,(int32_t)c->r[3],0); // 801E24AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E24B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E24B4
  c->r[31]=c->r[4]|c->r[4]; // 801E24B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E24BC
  c->r[30]=c->r[3]|c->r[3]; // 801E24C0
  if (crb(c,2)) { goto L_801E250C; } // 801E24C4
  c->r[3]=addc(c,c->r[3],0x00000018u,0); cr0(c,c->r[3]); // 801E24C8
  if (crb(c,2)) { goto L_801E24D8; } // 801E24CC
  c->r[4]=0u+0x00000000u; // 801E24D0
  c->lr=0x801E24D8u; f_8017A654(c); // 801E24D4
L_801E24D8:;
  c->r[3]=addc(c,c->r[30],0x0000000Cu,0); cr0(c,c->r[3]); // 801E24D8
  if (crb(c,2)) { goto L_801E24E8; } // 801E24DC
  c->r[4]=0u+0x00000000u; // 801E24E0
  c->lr=0x801E24E8u; f_8017A654(c); // 801E24E4
L_801E24E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E24E8
  if (crb(c,2)) { goto L_801E24FC; } // 801E24EC
  c->r[3]=c->r[30]|c->r[30]; // 801E24F0
  c->r[4]=0u+0x00000000u; // 801E24F4
  c->lr=0x801E24FCu; f_8017A654(c); // 801E24F8
L_801E24FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E24FC
  if (!crb(c,1)) { goto L_801E250C; } // 801E2500
  c->r[3]=c->r[30]|c->r[30]; // 801E2504
  c->lr=0x801E250Cu; f_8009230C(c); // 801E2508
L_801E250C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E250C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2510
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2514
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2518
  c->lr=c->r[0]; // 801E251C
  c->r[1]=c->r[1]+0x00000010u; // 801E2520
  return; // 801E2524
}

// fn_801E2528
void f_801E2528(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x00000010u; // 801E2528
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)72); // 801E252C
  return; // 801E2530
}

// Setup__Q44nw4r3snd6detail14AxVoiceManagerFPvUl
void f_801E2534(Ctx* __restrict c) {
  trace_call(0x801E2534u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2534
  c->r[0]=c->lr; // 801E2538
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E253C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2540
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2544
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2548
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E254C
  c->r[28]=c->r[3]|c->r[3]; // 801E2550
  c->r[0]=R8(c->r[3]+0x00000024u); // 801E2554
  cmps(c,0,(int32_t)c->r[0],0); // 801E2558
  if (!crb(c,2)) { goto L_801E25B8; } // 801E255C
  c->r[6]=0u+0x38E40000u; // 801E2560
  c->r[30]=c->r[4]|c->r[4]; // 801E2564
  c->r[0]=c->r[6]+0xFFFF8E39u; // 801E2568
  c->r[29]=0u+0x00000000u; // 801E256C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801E2570
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; cr0(c,c->r[0]); // 801E2574
  W32(c->r[3]+0x00000028u,c->r[0]); // 801E2578
  if (crb(c,2)) { goto L_801E25B0; } // 801E257C
  c->r[31]=c->r[3]+0x00000010u; // 801E2580
  goto L_801E25A4; // 801E2584
L_801E2588:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E2588
  c->r[3]=c->r[28]+0x0000000Cu; // 801E258C
  c->r[4]=c->r[1]+0x00000008u; // 801E2590
  c->r[5]=c->r[30]+0x00000040u; // 801E2594
  c->lr=0x801E259Cu; f_8017A764(c); // 801E2598
  c->r[30]=c->r[30]+0x00000048u; // 801E259C
  c->r[29]=c->r[29]+0x00000001u; // 801E25A0
L_801E25A4:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 801E25A4
  cmpu(c,0,c->r[29],c->r[0]); // 801E25A8
  if (crb(c,0)) { IRQCHK(c); goto L_801E2588; } // 801E25AC
L_801E25B0:;
  c->r[0]=0u+0x00000001u; // 801E25B0
  W8(c->r[28]+0x00000024u,c->r[0]); // 801E25B4
L_801E25B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E25B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E25BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E25C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E25C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E25C8
  c->lr=c->r[0]; // 801E25CC
  c->r[1]=c->r[1]+0x00000020u; // 801E25D0
  return; // 801E25D4
}

// Shutdown__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_801E25D8(Ctx* __restrict c) {
  trace_call(0x801E25D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E25D8
  c->r[0]=c->lr; // 801E25DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E25E0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E25E4
  c->r[31]=c->r[3]|c->r[3]; // 801E25E8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E25EC
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E25F0
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E25F4
  c->r[0]=R8(c->r[3]+0x00000024u); // 801E25F8
  cmps(c,0,(int32_t)c->r[0],0); // 801E25FC
  if (!crb(c,2)) { goto L_801E2700; } // 801E2600
  goto L_801E284C; // 801E2604
  goto L_801E2700; // 801E2608
L_801E260C:;
  c->r[5]=R32(c->r[31]+0x00000004u); // 801E260C
  c->r[3]=c->r[31]|c->r[31]; // 801E2610
  c->r[4]=c->r[1]+0x00000018u; // 801E2614
  W32(c->r[1]+0x00000018u,c->r[5]); // 801E2618
  c->r[28]=c->r[5]+0xFFFFFFC0u; // 801E261C
  c->lr=0x801E2624u; f_8017A6D8(c); // 801E2620
  c->r[3]=R32(c->r[28]+0x00000000u); // 801E2624
  cmps(c,0,(int32_t)c->r[3],0); // 801E2628
  if (crb(c,2)) { goto L_801E2700; } // 801E262C
  c->r[4]=0u+0x00000000u; // 801E2630
  if (crb(c,2)) { goto L_801E2648; } // 801E2634
  c->r[0]=R16(c->r[3]+0x00000038u); // 801E2638
  cmpu(c,0,c->r[0],0x00000001u); // 801E263C
  if (!crb(c,2)) { goto L_801E2648; } // 801E2640
  c->r[4]=0u+0x00000001u; // 801E2644
L_801E2648:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E2648
  if (crb(c,2)) { goto L_801E2658; } // 801E264C
  c->r[4]=0u+0x00000000u; // 801E2650
  c->lr=0x801E2658u; f_800FF93C(c); // 801E2654
L_801E2658:;
  c->r[12]=R32(c->r[28]+0x00000038u); // 801E2658
  cmps(c,0,(int32_t)c->r[12],0); // 801E265C
  if (crb(c,2)) { goto L_801E2678; } // 801E2660
  c->r[3]=c->r[28]|c->r[28]; // 801E2664
  c->r[5]=R32(c->r[28]+0x0000003Cu); // 801E2668
  c->r[4]=0u+0x00000000u; // 801E266C
  c->ctr=c->r[12]; // 801E2670
  if (true) { c->lr=0x801E2678u; dispatch(c,c->ctr); } // 801E2674
L_801E2678:;
  c->lr=0x801E267Cu; f_800E4F54(c); // 801E2678
  c->r[0]=R32(c->r[28]+0x00000000u); // 801E267C
  c->r[30]=c->r[3]|c->r[3]; // 801E2680
  cmps(c,0,(int32_t)c->r[0],0); // 801E2684
  if (crb(c,2)) { goto L_801E2694; } // 801E2688
  c->r[3]=c->r[0]|c->r[0]; // 801E268C
  c->lr=0x801E2694u; f_800FCBEC(c); // 801E2690
L_801E2694:;
  c->r[3]=c->r[28]|c->r[28]; // 801E2694
  c->r[4]=0u+0xFFFFFFFFu; // 801E2698
  c->lr=0x801E26A0u; f_801DF9A8(c); // 801E269C
  c->lr=0x801E26A4u; f_800E4F54(c); // 801E26A0
  c->r[0]=R8(c->r[28]+0x0000001Du); // 801E26A4
  c->r[29]=c->r[3]|c->r[3]; // 801E26A8
  cmps(c,0,(int32_t)c->r[0],0); // 801E26AC
  if (crb(c,2)) { goto L_801E26C8; } // 801E26B0
  c->r[28]=c->r[28]+0x00000040u; // 801E26B4
  c->r[3]=c->r[31]+0x00000018u; // 801E26B8
  c->r[4]=c->r[28]|c->r[28]; // 801E26BC
  c->lr=0x801E26C4u; f_8017A790(c); // 801E26C0
  goto L_801E26D8; // 801E26C4
L_801E26C8:;
  c->r[28]=c->r[28]+0x00000040u; // 801E26C8
  c->r[3]=c->r[31]|c->r[31]; // 801E26CC
  c->r[4]=c->r[28]|c->r[28]; // 801E26D0
  c->lr=0x801E26D8u; f_8017A790(c); // 801E26D4
L_801E26D8:;
  c->r[0]=c->r[31]+0x00000010u; // 801E26D8
  c->r[5]=c->r[28]|c->r[28]; // 801E26DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E26E0
  c->r[3]=c->r[31]+0x0000000Cu; // 801E26E4
  c->r[4]=c->r[1]+0x00000014u; // 801E26E8
  c->lr=0x801E26F0u; f_8017A764(c); // 801E26EC
  c->r[3]=c->r[29]|c->r[29]; // 801E26F0
  c->lr=0x801E26F8u; f_800E4F7C(c); // 801E26F4
  c->r[3]=c->r[30]|c->r[30]; // 801E26F8
  c->lr=0x801E2700u; f_800E4F7C(c); // 801E26FC
L_801E2700:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E2700
  cmps(c,0,(int32_t)c->r[0],0); // 801E2704
  if (!crb(c,2)) { IRQCHK(c); goto L_801E260C; } // 801E2708
  goto L_801E2808; // 801E270C
L_801E2710:;
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 801E2710
  c->r[3]=c->r[31]|c->r[31]; // 801E2714
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E2718
  c->r[4]=c->r[1]+0x00000010u; // 801E271C
  c->r[28]=c->r[5]+0xFFFFFFC0u; // 801E2720
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E2724
  c->lr=0x801E272Cu; f_8017A6D8(c); // 801E2728
  c->r[3]=R32(c->r[28]+0x00000000u); // 801E272C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2730
  if (crb(c,2)) { goto L_801E2808; } // 801E2734
  c->r[4]=0u+0x00000000u; // 801E2738
  if (crb(c,2)) { goto L_801E2750; } // 801E273C
  c->r[0]=R16(c->r[3]+0x00000038u); // 801E2740
  cmpu(c,0,c->r[0],0x00000001u); // 801E2744
  if (!crb(c,2)) { goto L_801E2750; } // 801E2748
  c->r[4]=0u+0x00000001u; // 801E274C
L_801E2750:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E2750
  if (crb(c,2)) { goto L_801E2760; } // 801E2754
  c->r[4]=0u+0x00000000u; // 801E2758
  c->lr=0x801E2760u; f_800FF93C(c); // 801E275C
L_801E2760:;
  c->r[12]=R32(c->r[28]+0x00000038u); // 801E2760
  cmps(c,0,(int32_t)c->r[12],0); // 801E2764
  if (crb(c,2)) { goto L_801E2780; } // 801E2768
  c->r[3]=c->r[28]|c->r[28]; // 801E276C
  c->r[5]=R32(c->r[28]+0x0000003Cu); // 801E2770
  c->r[4]=0u+0x00000000u; // 801E2774
  c->ctr=c->r[12]; // 801E2778
  if (true) { c->lr=0x801E2780u; dispatch(c,c->ctr); } // 801E277C
L_801E2780:;
  c->lr=0x801E2784u; f_800E4F54(c); // 801E2780
  c->r[0]=R32(c->r[28]+0x00000000u); // 801E2784
  c->r[29]=c->r[3]|c->r[3]; // 801E2788
  cmps(c,0,(int32_t)c->r[0],0); // 801E278C
  if (crb(c,2)) { goto L_801E279C; } // 801E2790
  c->r[3]=c->r[0]|c->r[0]; // 801E2794
  c->lr=0x801E279Cu; f_800FCBEC(c); // 801E2798
L_801E279C:;
  c->r[3]=c->r[28]|c->r[28]; // 801E279C
  c->r[4]=0u+0xFFFFFFFFu; // 801E27A0
  c->lr=0x801E27A8u; f_801DF9A8(c); // 801E27A4
  c->lr=0x801E27ACu; f_800E4F54(c); // 801E27A8
  c->r[0]=R8(c->r[28]+0x0000001Du); // 801E27AC
  c->r[30]=c->r[3]|c->r[3]; // 801E27B0
  cmps(c,0,(int32_t)c->r[0],0); // 801E27B4
  if (crb(c,2)) { goto L_801E27D0; } // 801E27B8
  c->r[28]=c->r[28]+0x00000040u; // 801E27BC
  c->r[3]=c->r[31]+0x00000018u; // 801E27C0
  c->r[4]=c->r[28]|c->r[28]; // 801E27C4
  c->lr=0x801E27CCu; f_8017A790(c); // 801E27C8
  goto L_801E27E0; // 801E27CC
L_801E27D0:;
  c->r[28]=c->r[28]+0x00000040u; // 801E27D0
  c->r[3]=c->r[31]|c->r[31]; // 801E27D4
  c->r[4]=c->r[28]|c->r[28]; // 801E27D8
  c->lr=0x801E27E0u; f_8017A790(c); // 801E27DC
L_801E27E0:;
  c->r[0]=c->r[31]+0x00000010u; // 801E27E0
  c->r[5]=c->r[28]|c->r[28]; // 801E27E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E27E8
  c->r[3]=c->r[31]+0x0000000Cu; // 801E27EC
  c->r[4]=c->r[1]+0x0000000Cu; // 801E27F0
  c->lr=0x801E27F8u; f_8017A764(c); // 801E27F4
  c->r[3]=c->r[30]|c->r[30]; // 801E27F8
  c->lr=0x801E2800u; f_800E4F7C(c); // 801E27FC
  c->r[3]=c->r[29]|c->r[29]; // 801E2800
  c->lr=0x801E2808u; f_800E4F7C(c); // 801E2804
L_801E2808:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801E2808
  cmps(c,0,(int32_t)c->r[0],0); // 801E280C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2710; } // 801E2810
  goto L_801E2838; // 801E2814
L_801E2818:;
  c->r[28]=R32(c->r[31]+0x00000010u); // 801E2818
  c->r[3]=c->r[31]+0x0000000Cu; // 801E281C
  c->r[4]=c->r[1]+0x00000008u; // 801E2820
  W32(c->r[1]+0x00000008u,c->r[28]); // 801E2824
  c->lr=0x801E282Cu; f_8017A6D8(c); // 801E2828
  c->r[3]=c->r[28]+0xFFFFFFC0u; // 801E282C
  c->r[4]=0u+0xFFFFFFFFu; // 801E2830
  c->lr=0x801E2838u; f_801DF9A8(c); // 801E2834
L_801E2838:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801E2838
  cmps(c,0,(int32_t)c->r[0],0); // 801E283C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2818; } // 801E2840
  c->r[0]=0u+0x00000000u; // 801E2844
  W8(c->r[31]+0x00000024u,c->r[0]); // 801E2848
L_801E284C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E284C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E2850
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E2854
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E2858
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E285C
  c->lr=c->r[0]; // 801E2860
  c->r[1]=c->r[1]+0x00000030u; // 801E2864
  return; // 801E2868
}

// AcquireAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFUlPFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv_vPv
void f_801E286C(Ctx* __restrict c) {
  trace_call(0x801E286Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E286C
  c->r[0]=c->lr; // 801E2870
  W32(c->r[1]+0x00000064u,c->r[0]); // 801E2874
  c->r[11]=c->r[1]+0x00000060u; // 801E2878
  c->lr=0x801E2880u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E287C
  c->r[21]=c->r[3]|c->r[3]; // 801E2880
  c->r[22]=c->r[4]|c->r[4]; // 801E2884
  c->r[23]=c->r[5]|c->r[5]; // 801E2888
  c->r[24]=c->r[6]|c->r[6]; // 801E288C
  c->lr=0x801E2894u; f_800E4F54(c); // 801E2890
  c->r[20]=c->r[3]|c->r[3]; // 801E2894
  c->lr=0x801E289Cu; f_800E4F54(c); // 801E2898
  c->r[0]=R32(c->r[21]+0x00000018u); // 801E289C
  c->r[19]=c->r[3]|c->r[3]; // 801E28A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E28A4
  if (crb(c,2)) { goto L_801E29F0; } // 801E28A8
  c->r[27]=0u+0x80360000u; // 801E28AC
  c->r[28]=0u+0x00000000u; // 801E28B0
  c->r[26]=c->r[27]+0x00006B3Cu; // 801E28B4
  c->r[29]=0u+0x801E0000u; // 801E28B8
  c->r[30]=0u+0x80360000u; // 801E28BC
  c->r[31]=0u+0x00000001u; // 801E28C0
  c->r[16]=c->r[26]+0x00000010u; // 801E28C4
  goto L_801E29E4; // 801E28C8
L_801E28CC:;
  c->r[3]=R32(c->r[21]+0x0000001Cu); // 801E28CC
  c->r[12]=R32(c->r[3]+0xFFFFFFF8u); // 801E28D0
  c->r[25]=c->r[3]+0xFFFFFFC0u; // 801E28D4
  cmps(c,0,(int32_t)c->r[12],0); // 801E28D8
  if (crb(c,2)) { goto L_801E28F4; } // 801E28DC
  c->r[3]=c->r[25]|c->r[25]; // 801E28E0
  c->r[5]=R32(c->r[25]+0x0000003Cu); // 801E28E4
  c->r[4]=0u+0x00000001u; // 801E28E8
  c->ctr=c->r[12]; // 801E28EC
  if (true) { c->lr=0x801E28F4u; dispatch(c,c->ctr); } // 801E28F0
L_801E28F4:;
  c->r[0]=R8(c->r[13]+0xFFFF9DB0u); // 801E28F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E28F8
  if (!crb(c,2)) { goto L_801E2960; } // 801E28FC
  W32(c->r[26]+0x00000004u,c->r[28]); // 801E2900
  c->r[6]=c->r[26]+0x00000004u; // 801E2904
  c->r[7]=c->r[26]+0x00000010u; // 801E2908
  c->r[8]=c->r[26]+0x0000001Cu; // 801E290C
  W32(c->r[26]+0x00000008u,c->r[28]); // 801E2910
  c->r[3]=c->r[26]|c->r[26]; // 801E2914
  c->r[4]=c->r[29]+0x000024A4u; // 801E2918
  c->r[5]=c->r[30]+0x00006B30u; // 801E291C
  W32(c->r[26]+0x00000010u,c->r[28]); // 801E2920
  W32(c->r[26]+0x00000014u,c->r[28]); // 801E2924
  W32(c->r[26]+0x0000001Cu,c->r[28]); // 801E2928
  W32(c->r[26]+0x00000020u,c->r[28]); // 801E292C
  W32(c->r[27]+0x00006B3Cu,c->r[28]); // 801E2930
  W32(c->r[26]+0x00000004u,c->r[6]); // 801E2934
  W32(c->r[26]+0x00000008u,c->r[6]); // 801E2938
  W32(c->r[26]+0x0000000Cu,c->r[28]); // 801E293C
  W32(c->r[26]+0x00000010u,c->r[7]); // 801E2940
  W32(c->r[26]+0x00000014u,c->r[7]); // 801E2944
  W32(c->r[26]+0x00000018u,c->r[28]); // 801E2948
  W32(c->r[26]+0x0000001Cu,c->r[8]); // 801E294C
  W32(c->r[26]+0x00000020u,c->r[8]); // 801E2950
  W8(c->r[26]+0x00000024u,c->r[28]); // 801E2954
  c->lr=0x801E295Cu; f_8010967C(c); // 801E2958
  W8(c->r[13]+0xFFFF9DB0u,c->r[31]); // 801E295C
L_801E2960:;
  c->lr=0x801E2964u; f_800E4F54(c); // 801E2960
  c->r[0]=R32(c->r[25]+0x00000000u); // 801E2964
  c->r[18]=c->r[3]|c->r[3]; // 801E2968
  cmps(c,0,(int32_t)c->r[0],0); // 801E296C
  if (crb(c,2)) { goto L_801E297C; } // 801E2970
  c->r[3]=c->r[0]|c->r[0]; // 801E2974
  c->lr=0x801E297Cu; f_800FCBEC(c); // 801E2978
L_801E297C:;
  c->r[3]=c->r[25]|c->r[25]; // 801E297C
  c->r[4]=0u+0xFFFFFFFFu; // 801E2980
  c->lr=0x801E2988u; f_801DF9A8(c); // 801E2984
  c->lr=0x801E298Cu; f_800E4F54(c); // 801E2988
  c->r[0]=R8(c->r[25]+0x0000001Du); // 801E298C
  c->r[17]=c->r[3]|c->r[3]; // 801E2990
  cmps(c,0,(int32_t)c->r[0],0); // 801E2994
  if (crb(c,2)) { goto L_801E29B0; } // 801E2998
  c->r[25]=c->r[25]+0x00000040u; // 801E299C
  c->r[3]=c->r[26]+0x00000018u; // 801E29A0
  c->r[4]=c->r[25]|c->r[25]; // 801E29A4
  c->lr=0x801E29ACu; f_8017A790(c); // 801E29A8
  goto L_801E29C0; // 801E29AC
L_801E29B0:;
  c->r[25]=c->r[25]+0x00000040u; // 801E29B0
  c->r[3]=c->r[26]|c->r[26]; // 801E29B4
  c->r[4]=c->r[25]|c->r[25]; // 801E29B8
  c->lr=0x801E29C0u; f_8017A790(c); // 801E29BC
L_801E29C0:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 801E29C0
  c->r[5]=c->r[25]|c->r[25]; // 801E29C4
  c->r[3]=c->r[26]+0x0000000Cu; // 801E29C8
  c->r[4]=c->r[1]+0x0000000Cu; // 801E29CC
  c->lr=0x801E29D4u; f_8017A764(c); // 801E29D0
  c->r[3]=c->r[17]|c->r[17]; // 801E29D4
  c->lr=0x801E29DCu; f_800E4F7C(c); // 801E29D8
  c->r[3]=c->r[18]|c->r[18]; // 801E29DC
  c->lr=0x801E29E4u; f_800E4F7C(c); // 801E29E0
L_801E29E4:;
  c->r[0]=R32(c->r[21]+0x00000018u); // 801E29E4
  cmps(c,0,(int32_t)c->r[0],0); // 801E29E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801E28CC; } // 801E29EC
L_801E29F0:;
  c->r[0]=R32(c->r[21]+0x0000000Cu); // 801E29F0
  cmps(c,0,(int32_t)c->r[0],0); // 801E29F4
  if (!crb(c,2)) { goto L_801E2A0C; } // 801E29F8
  c->r[3]=c->r[19]|c->r[19]; // 801E29FC
  c->lr=0x801E2A04u; f_800E4F7C(c); // 801E2A00
  c->r[18]=0u+0x00000000u; // 801E2A04
  goto L_801E2A5C; // 801E2A08
L_801E2A0C:;
  c->r[5]=R32(c->r[21]+0x00000010u); // 801E2A0C
  c->r[3]=c->r[21]+0x0000000Cu; // 801E2A10
  c->r[4]=c->r[1]+0x00000010u; // 801E2A14
  W32(c->r[1]+0x00000010u,c->r[5]); // 801E2A18
  c->r[16]=c->r[5]+0xFFFFFFC0u; // 801E2A1C
  c->lr=0x801E2A24u; f_8017A6D8(c); // 801E2A20
  cmps(c,0,(int32_t)c->r[16],0); // 801E2A24
  c->r[18]=c->r[16]|c->r[16]; // 801E2A28
  if (crb(c,2)) { goto L_801E2A3C; } // 801E2A2C
  c->r[3]=c->r[16]|c->r[16]; // 801E2A30
  c->lr=0x801E2A38u; f_801DF964(c); // 801E2A34
  c->r[18]=c->r[3]|c->r[3]; // 801E2A38
L_801E2A3C:;
  c->r[0]=c->r[21]+0x00000004u; // 801E2A3C
  c->r[3]=c->r[21]|c->r[21]; // 801E2A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2A44
  c->r[4]=c->r[1]+0x00000014u; // 801E2A48
  c->r[5]=c->r[16]+0x00000040u; // 801E2A4C
  c->lr=0x801E2A54u; f_8017A764(c); // 801E2A50
  c->r[3]=c->r[19]|c->r[19]; // 801E2A54
  c->lr=0x801E2A5Cu; f_800E4F7C(c); // 801E2A58
L_801E2A5C:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E2A5C
  if (!crb(c,2)) { goto L_801E2A74; } // 801E2A60
  c->r[3]=c->r[20]|c->r[20]; // 801E2A64
  c->lr=0x801E2A6Cu; f_800E4F7C(c); // 801E2A68
  c->r[3]=0u+0x00000000u; // 801E2A6C
  goto L_801E2B24; // 801E2A70
L_801E2A74:;
  c->r[4]=0u+0x801E0000u; // 801E2A74
  c->r[3]=c->r[22]|c->r[22]; // 801E2A78
  c->r[5]=c->r[18]|c->r[18]; // 801E2A7C
  c->r[4]=c->r[4]+0x000002D4u; // 801E2A80
  c->lr=0x801E2A88u; f_800FCC68(c); // 801E2A84
  cmps(c,0,(int32_t)c->r[3],0); // 801E2A88
  c->r[4]=c->r[3]|c->r[3]; // 801E2A8C
  if (!crb(c,2)) { goto L_801E2B08; } // 801E2A90
  c->r[3]=c->r[18]|c->r[18]; // 801E2A94
  c->r[4]=0u+0xFFFFFFFFu; // 801E2A98
  c->lr=0x801E2AA0u; f_801DF9A8(c); // 801E2A9C
  c->lr=0x801E2AA4u; f_800E4F54(c); // 801E2AA0
  c->r[0]=R8(c->r[18]+0x0000001Du); // 801E2AA4
  c->r[17]=c->r[3]|c->r[3]; // 801E2AA8
  cmps(c,0,(int32_t)c->r[0],0); // 801E2AAC
  if (crb(c,2)) { goto L_801E2AC8; } // 801E2AB0
  c->r[16]=c->r[18]+0x00000040u; // 801E2AB4
  c->r[3]=c->r[21]+0x00000018u; // 801E2AB8
  c->r[4]=c->r[16]|c->r[16]; // 801E2ABC
  c->lr=0x801E2AC4u; f_8017A790(c); // 801E2AC0
  goto L_801E2AD8; // 801E2AC4
L_801E2AC8:;
  c->r[16]=c->r[18]+0x00000040u; // 801E2AC8
  c->r[3]=c->r[21]|c->r[21]; // 801E2ACC
  c->r[4]=c->r[16]|c->r[16]; // 801E2AD0
  c->lr=0x801E2AD8u; f_8017A790(c); // 801E2AD4
L_801E2AD8:;
  c->r[0]=c->r[21]+0x00000010u; // 801E2AD8
  c->r[5]=c->r[16]|c->r[16]; // 801E2ADC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E2AE0
  c->r[3]=c->r[21]+0x0000000Cu; // 801E2AE4
  c->r[4]=c->r[1]+0x00000008u; // 801E2AE8
  c->lr=0x801E2AF0u; f_8017A764(c); // 801E2AEC
  c->r[3]=c->r[17]|c->r[17]; // 801E2AF0
  c->lr=0x801E2AF8u; f_800E4F7C(c); // 801E2AF4
  c->r[3]=c->r[20]|c->r[20]; // 801E2AF8
  c->lr=0x801E2B00u; f_800E4F7C(c); // 801E2AFC
  c->r[3]=0u+0x00000000u; // 801E2B00
  goto L_801E2B24; // 801E2B04
L_801E2B08:;
  c->r[3]=c->r[18]|c->r[18]; // 801E2B08
  c->lr=0x801E2B10u; f_801E1D0C(c); // 801E2B0C
  W32(c->r[18]+0x00000038u,c->r[23]); // 801E2B10
  c->r[3]=c->r[20]|c->r[20]; // 801E2B14
  W32(c->r[18]+0x0000003Cu,c->r[24]); // 801E2B18
  c->lr=0x801E2B20u; f_800E4F7C(c); // 801E2B1C
  c->r[3]=c->r[18]|c->r[18]; // 801E2B20
L_801E2B24:;
  c->r[11]=c->r[1]+0x00000060u; // 801E2B24
  c->lr=0x801E2B2Cu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E2B28
  c->r[0]=R32(c->r[1]+0x00000064u); // 801E2B2C
  c->lr=c->r[0]; // 801E2B30
  c->r[1]=c->r[1]+0x00000060u; // 801E2B34
  return; // 801E2B38
}

// FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
void f_801E2B3C(Ctx* __restrict c) {
  trace_call(0x801E2B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2B3C
  c->r[0]=c->lr; // 801E2B40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2B44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2B48
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2B4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2B50
  c->r[29]=c->r[4]|c->r[4]; // 801E2B54
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2B58
  c->r[28]=c->r[3]|c->r[3]; // 801E2B5C
  c->lr=0x801E2B64u; f_800E4F54(c); // 801E2B60
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E2B64
  c->r[31]=c->r[3]|c->r[3]; // 801E2B68
  cmps(c,0,(int32_t)c->r[0],0); // 801E2B6C
  if (crb(c,2)) { goto L_801E2B7C; } // 801E2B70
  c->r[3]=c->r[0]|c->r[0]; // 801E2B74
  c->lr=0x801E2B7Cu; f_800FCBEC(c); // 801E2B78
L_801E2B7C:;
  c->r[3]=c->r[29]|c->r[29]; // 801E2B7C
  c->r[4]=0u+0xFFFFFFFFu; // 801E2B80
  c->lr=0x801E2B88u; f_801DF9A8(c); // 801E2B84
  c->lr=0x801E2B8Cu; f_800E4F54(c); // 801E2B88
  c->r[0]=R8(c->r[29]+0x0000001Du); // 801E2B8C
  c->r[30]=c->r[3]|c->r[3]; // 801E2B90
  cmps(c,0,(int32_t)c->r[0],0); // 801E2B94
  if (crb(c,2)) { goto L_801E2BB0; } // 801E2B98
  c->r[29]=c->r[29]+0x00000040u; // 801E2B9C
  c->r[3]=c->r[28]+0x00000018u; // 801E2BA0
  c->r[4]=c->r[29]|c->r[29]; // 801E2BA4
  c->lr=0x801E2BACu; f_8017A790(c); // 801E2BA8
  goto L_801E2BC0; // 801E2BAC
L_801E2BB0:;
  c->r[29]=c->r[29]+0x00000040u; // 801E2BB0
  c->r[3]=c->r[28]|c->r[28]; // 801E2BB4
  c->r[4]=c->r[29]|c->r[29]; // 801E2BB8
  c->lr=0x801E2BC0u; f_8017A790(c); // 801E2BBC
L_801E2BC0:;
  c->r[0]=c->r[28]+0x00000010u; // 801E2BC0
  c->r[5]=c->r[29]|c->r[29]; // 801E2BC4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E2BC8
  c->r[3]=c->r[28]+0x0000000Cu; // 801E2BCC
  c->r[4]=c->r[1]+0x00000008u; // 801E2BD0
  c->lr=0x801E2BD8u; f_8017A764(c); // 801E2BD4
  c->r[3]=c->r[30]|c->r[30]; // 801E2BD8
  c->lr=0x801E2BE0u; f_800E4F7C(c); // 801E2BDC
  c->r[3]=c->r[31]|c->r[31]; // 801E2BE0
  c->lr=0x801E2BE8u; f_800E4F7C(c); // 801E2BE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2BE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2BEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2BF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2BF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2BF8
  c->lr=c->r[0]; // 801E2BFC
  c->r[1]=c->r[1]+0x00000020u; // 801E2C00
  return; // 801E2C04
}

// ReserveForFreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
void f_801E2C08(Ctx* __restrict c) {
  trace_call(0x801E2C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2C08
  c->r[0]=c->lr; // 801E2C0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2C10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2C14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2C18
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2C1C
  c->r[29]=c->r[4]|c->r[4]; // 801E2C20
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2C24
  c->r[28]=c->r[3]|c->r[3]; // 801E2C28
  c->lr=0x801E2C30u; f_800E4F54(c); // 801E2C2C
  c->r[0]=0u+0x00000001u; // 801E2C30
  c->r[31]=c->r[3]|c->r[3]; // 801E2C34
  W8(c->r[29]+0x0000001Du,c->r[0]); // 801E2C38
  c->lr=0x801E2C40u; f_800E4F54(c); // 801E2C3C
  c->r[29]=c->r[29]+0x00000040u; // 801E2C40
  c->r[30]=c->r[3]|c->r[3]; // 801E2C44
  c->r[3]=c->r[28]|c->r[28]; // 801E2C48
  c->r[4]=c->r[29]|c->r[29]; // 801E2C4C
  c->lr=0x801E2C54u; f_8017A790(c); // 801E2C50
  c->r[0]=c->r[28]+0x0000001Cu; // 801E2C54
  c->r[5]=c->r[29]|c->r[29]; // 801E2C58
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E2C5C
  c->r[3]=c->r[28]+0x00000018u; // 801E2C60
  c->r[4]=c->r[1]+0x00000008u; // 801E2C64
  c->lr=0x801E2C6Cu; f_8017A764(c); // 801E2C68
  c->r[3]=c->r[30]|c->r[30]; // 801E2C6C
  c->lr=0x801E2C74u; f_800E4F7C(c); // 801E2C70
  c->r[3]=c->r[31]|c->r[31]; // 801E2C74
  c->lr=0x801E2C7Cu; f_800E4F7C(c); // 801E2C78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2C7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2C80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2C84
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2C88
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2C8C
  c->lr=c->r[0]; // 801E2C90
  c->r[1]=c->r[1]+0x00000020u; // 801E2C94
  return; // 801E2C98
}

// FreeAllReservedAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_801E2C9C(Ctx* __restrict c) {
  trace_call(0x801E2C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2C9C
  c->r[0]=c->lr; // 801E2CA0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E2CA4
  c->r[11]=c->r[1]+0x00000040u; // 801E2CA8
  c->lr=0x801E2CB0u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E2CAC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E2CB0
  c->r[31]=c->r[3]|c->r[3]; // 801E2CB4
  cmps(c,0,(int32_t)c->r[0],0); // 801E2CB8
  if (crb(c,2)) { goto L_801E2E04; } // 801E2CBC
  c->r[23]=0u+0x80360000u; // 801E2CC0
  c->r[24]=0u+0x00000000u; // 801E2CC4
  c->r[22]=c->r[23]+0x00006B3Cu; // 801E2CC8
  c->r[25]=0u+0x801E0000u; // 801E2CCC
  c->r[26]=0u+0x80360000u; // 801E2CD0
  c->r[27]=0u+0x00000001u; // 801E2CD4
  c->r[28]=c->r[22]+0x00000010u; // 801E2CD8
  goto L_801E2DF8; // 801E2CDC
L_801E2CE0:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801E2CE0
  c->r[12]=R32(c->r[3]+0xFFFFFFF8u); // 801E2CE4
  c->r[21]=c->r[3]+0xFFFFFFC0u; // 801E2CE8
  cmps(c,0,(int32_t)c->r[12],0); // 801E2CEC
  if (crb(c,2)) { goto L_801E2D08; } // 801E2CF0
  c->r[3]=c->r[21]|c->r[21]; // 801E2CF4
  c->r[5]=R32(c->r[21]+0x0000003Cu); // 801E2CF8
  c->r[4]=0u+0x00000001u; // 801E2CFC
  c->ctr=c->r[12]; // 801E2D00
  if (true) { c->lr=0x801E2D08u; dispatch(c,c->ctr); } // 801E2D04
L_801E2D08:;
  c->r[0]=R8(c->r[13]+0xFFFF9DB0u); // 801E2D08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E2D0C
  if (!crb(c,2)) { goto L_801E2D74; } // 801E2D10
  W32(c->r[22]+0x00000004u,c->r[24]); // 801E2D14
  c->r[6]=c->r[22]+0x00000004u; // 801E2D18
  c->r[7]=c->r[22]+0x00000010u; // 801E2D1C
  c->r[8]=c->r[22]+0x0000001Cu; // 801E2D20
  W32(c->r[22]+0x00000008u,c->r[24]); // 801E2D24
  c->r[3]=c->r[22]|c->r[22]; // 801E2D28
  c->r[4]=c->r[25]+0x000024A4u; // 801E2D2C
  c->r[5]=c->r[26]+0x00006B30u; // 801E2D30
  W32(c->r[22]+0x00000010u,c->r[24]); // 801E2D34
  W32(c->r[22]+0x00000014u,c->r[24]); // 801E2D38
  W32(c->r[22]+0x0000001Cu,c->r[24]); // 801E2D3C
  W32(c->r[22]+0x00000020u,c->r[24]); // 801E2D40
  W32(c->r[23]+0x00006B3Cu,c->r[24]); // 801E2D44
  W32(c->r[22]+0x00000004u,c->r[6]); // 801E2D48
  W32(c->r[22]+0x00000008u,c->r[6]); // 801E2D4C
  W32(c->r[22]+0x0000000Cu,c->r[24]); // 801E2D50
  W32(c->r[22]+0x00000010u,c->r[7]); // 801E2D54
  W32(c->r[22]+0x00000014u,c->r[7]); // 801E2D58
  W32(c->r[22]+0x00000018u,c->r[24]); // 801E2D5C
  W32(c->r[22]+0x0000001Cu,c->r[8]); // 801E2D60
  W32(c->r[22]+0x00000020u,c->r[8]); // 801E2D64
  W8(c->r[22]+0x00000024u,c->r[24]); // 801E2D68
  c->lr=0x801E2D70u; f_8010967C(c); // 801E2D6C
  W8(c->r[13]+0xFFFF9DB0u,c->r[27]); // 801E2D70
L_801E2D74:;
  c->lr=0x801E2D78u; f_800E4F54(c); // 801E2D74
  c->r[0]=R32(c->r[21]+0x00000000u); // 801E2D78
  c->r[30]=c->r[3]|c->r[3]; // 801E2D7C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2D80
  if (crb(c,2)) { goto L_801E2D90; } // 801E2D84
  c->r[3]=c->r[0]|c->r[0]; // 801E2D88
  c->lr=0x801E2D90u; f_800FCBEC(c); // 801E2D8C
L_801E2D90:;
  c->r[3]=c->r[21]|c->r[21]; // 801E2D90
  c->r[4]=0u+0xFFFFFFFFu; // 801E2D94
  c->lr=0x801E2D9Cu; f_801DF9A8(c); // 801E2D98
  c->lr=0x801E2DA0u; f_800E4F54(c); // 801E2D9C
  c->r[0]=R8(c->r[21]+0x0000001Du); // 801E2DA0
  c->r[29]=c->r[3]|c->r[3]; // 801E2DA4
  cmps(c,0,(int32_t)c->r[0],0); // 801E2DA8
  if (crb(c,2)) { goto L_801E2DC4; } // 801E2DAC
  c->r[21]=c->r[21]+0x00000040u; // 801E2DB0
  c->r[3]=c->r[22]+0x00000018u; // 801E2DB4
  c->r[4]=c->r[21]|c->r[21]; // 801E2DB8
  c->lr=0x801E2DC0u; f_8017A790(c); // 801E2DBC
  goto L_801E2DD4; // 801E2DC0
L_801E2DC4:;
  c->r[21]=c->r[21]+0x00000040u; // 801E2DC4
  c->r[3]=c->r[22]|c->r[22]; // 801E2DC8
  c->r[4]=c->r[21]|c->r[21]; // 801E2DCC
  c->lr=0x801E2DD4u; f_8017A790(c); // 801E2DD0
L_801E2DD4:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 801E2DD4
  c->r[5]=c->r[21]|c->r[21]; // 801E2DD8
  c->r[3]=c->r[22]+0x0000000Cu; // 801E2DDC
  c->r[4]=c->r[1]+0x00000008u; // 801E2DE0
  c->lr=0x801E2DE8u; f_8017A764(c); // 801E2DE4
  c->r[3]=c->r[29]|c->r[29]; // 801E2DE8
  c->lr=0x801E2DF0u; f_800E4F7C(c); // 801E2DEC
  c->r[3]=c->r[30]|c->r[30]; // 801E2DF0
  c->lr=0x801E2DF8u; f_800E4F7C(c); // 801E2DF4
L_801E2DF8:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801E2DF8
  cmps(c,0,(int32_t)c->r[0],0); // 801E2DFC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2CE0; } // 801E2E00
L_801E2E04:;
  c->r[11]=c->r[1]+0x00000040u; // 801E2E04
  c->lr=0x801E2E0Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E2E08
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E2E0C
  c->lr=c->r[0]; // 801E2E10
  c->r[1]=c->r[1]+0x00000040u; // 801E2E14
  return; // 801E2E18
}

// CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl
void f_801E2E1C(Ctx* __restrict c) {
  trace_call(0x801E2E1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2E1C
  c->r[0]=c->lr; // 801E2E20
  cmps(c,0,(int32_t)c->r[4],0); // 801E2E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2E28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2E2C
  c->r[31]=c->r[3]|c->r[3]; // 801E2E30
  if (crb(c,2)) { goto L_801E2E40; } // 801E2E34
  cmps(c,0,(int32_t)c->r[5],0); // 801E2E38
  if (!crb(c,2)) { goto L_801E2E50; } // 801E2E3C
L_801E2E40:;
  c->r[0]=0u+0x00000000u; // 801E2E40
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E2E44
  c->r[3]=0u+0x00000000u; // 801E2E48
  goto L_801E2E70; // 801E2E4C
L_801E2E50:;
  c->r[3]=c->r[4]|c->r[4]; // 801E2E50
  c->r[4]=c->r[5]|c->r[5]; // 801E2E54
  c->r[5]=0u+0x00000000u; // 801E2E58
  c->lr=0x801E2E60u; f_80127DDC(c); // 801E2E5C
  c->r[0]=0u-c->r[3]; // 801E2E60
  W32(c->r[31]+0x00000000u,c->r[3]); // 801E2E64
  c->r[0]=c->r[0]|c->r[3]; // 801E2E68
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E2E6C
L_801E2E70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2E70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2E74
  c->lr=c->r[0]; // 801E2E78
  c->r[1]=c->r[1]+0x00000010u; // 801E2E7C
  return; // 801E2E80
}

// DestroyHeap__Q44nw4r3snd6detail8AxfxImplFv
void f_801E2E84(Ctx* __restrict c) {
  trace_call(0x801E2E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2E84
  c->r[0]=c->lr; // 801E2E88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2E8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2E90
  c->r[31]=c->r[3]|c->r[3]; // 801E2E94
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E2E98
  cmps(c,0,(int32_t)c->r[0],0); // 801E2E9C
  if (crb(c,2)) { goto L_801E2EB4; } // 801E2EA0
  c->r[3]=c->r[0]|c->r[0]; // 801E2EA4
  c->lr=0x801E2EACu; f_80127E60(c); // 801E2EA8
  c->r[0]=0u+0x00000000u; // 801E2EAC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E2EB0
L_801E2EB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2EB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2EB8
  c->lr=c->r[0]; // 801E2EBC
  c->r[1]=c->r[1]+0x00000010u; // 801E2EC0
  return; // 801E2EC4
}

// HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
void f_801E2EC8(Ctx* __restrict c) {
  trace_call(0x801E2EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2EC8
  c->r[0]=c->lr; // 801E2ECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2ED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2ED4
  c->r[31]=c->r[3]|c->r[3]; // 801E2ED8
  c->r[3]=c->r[4]|c->r[4]; // 801E2EDC
  c->r[4]=c->r[5]|c->r[5]; // 801E2EE0
  c->lr=0x801E2EE8u; f_80100C40(c); // 801E2EE4
  c->r[3]=0u+0x801E0000u; // 801E2EE8
  c->r[4]=0u+0x801E0000u; // 801E2EEC
  c->r[3]=c->r[3]+0x00002F50u; // 801E2EF0
  c->r[4]=c->r[4]+0x00002FB0u; // 801E2EF4
  c->lr=0x801E2EFCu; f_80100C34(c); // 801E2EF8
  c->r[0]=0u+0x00000000u; // 801E2EFC
  W32(c->r[13]+0xFFFF9DB8u,c->r[31]); // 801E2F00
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801E2F04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2F08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2F0C
  c->lr=c->r[0]; // 801E2F10
  c->r[1]=c->r[1]+0x00000010u; // 801E2F14
  return; // 801E2F18
}

// RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
void f_801E2F1C(Ctx* __restrict c) {
  trace_call(0x801E2F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2F1C
  c->r[0]=c->lr; // 801E2F20
  c->r[3]=c->r[4]|c->r[4]; // 801E2F24
  c->r[4]=c->r[5]|c->r[5]; // 801E2F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2F2C
  c->lr=0x801E2F34u; f_80100C34(c); // 801E2F30
  c->r[0]=0u+0x00000000u; // 801E2F34
  c->r[3]=R32(c->r[13]+0xFFFF9DBCu); // 801E2F38
  W32(c->r[13]+0xFFFF9DB8u,c->r[0]); // 801E2F3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2F40
  c->lr=c->r[0]; // 801E2F44
  c->r[1]=c->r[1]+0x00000010u; // 801E2F48
  return; // 801E2F4C
}

// Alloc__Q44nw4r3snd6detail8AxfxImplFUl
void f_801E2F50(Ctx* __restrict c) {
  trace_call(0x801E2F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2F50
  c->r[0]=c->lr; // 801E2F54
  c->r[5]=0u+0x00000004u; // 801E2F58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2F60
  c->r[31]=c->r[3]|c->r[3]; // 801E2F64
  c->r[4]=c->r[31]|c->r[31]; // 801E2F68
  c->r[6]=R32(c->r[13]+0xFFFF9DB8u); // 801E2F6C
  c->r[3]=R32(c->r[6]+0x00000000u); // 801E2F70
  c->lr=0x801E2F78u; f_80127E90(c); // 801E2F74
  c->r[5]=R32(c->r[13]+0xFFFF9DB8u); // 801E2F78
  c->r[0]=c->r[31]+0x00000003u; // 801E2F7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801E2F80
  c->r[4]=R32(c->r[5]+0x00000004u); // 801E2F84
  c->r[4]=c->r[4]+0x00000001u; // 801E2F88
  W32(c->r[5]+0x00000004u,c->r[4]); // 801E2F8C
  c->r[4]=R32(c->r[13]+0xFFFF9DBCu); // 801E2F90
  c->r[0]=c->r[4]+c->r[0]; // 801E2F94
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801E2F98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2F9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2FA0
  c->lr=c->r[0]; // 801E2FA4
  c->r[1]=c->r[1]+0x00000010u; // 801E2FA8
  return; // 801E2FAC
}

// Free__Q44nw4r3snd6detail8AxfxImplFPv
void f_801E2FB0(Ctx* __restrict c) {
  trace_call(0x801E2FB0u);
  c->r[4]=R32(c->r[13]+0xFFFF9DB8u); // 801E2FB0
  c->r[3]=R32(c->r[4]+0x00000004u); // 801E2FB4
  cmps(c,0,(int32_t)c->r[3],0); // 801E2FB8
  if (crb(c,2)) { goto L_801E2FC8; } // 801E2FBC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E2FC0
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E2FC4
L_801E2FC8:;
  c->r[3]=R32(c->r[13]+0xFFFF9DB8u); // 801E2FC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E2FCC
  cmps(c,0,(int32_t)c->r[0],0); // 801E2FD0
  if (!crb(c,2)) return; // 801E2FD4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E2FD8
  c->r[4]=0u+0x00000003u; // 801E2FDC
  f_80127FB0(c); return; // 801E2FE0
  return; // 801E2FE4
}

// __ct__Q44nw4r3snd6detail4BankFPCv
void f_801E2FE8(Ctx* __restrict c) {
  trace_call(0x801E2FE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2FE8
  c->r[0]=c->lr; // 801E2FEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2FF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2FF4
  c->r[31]=c->r[3]|c->r[3]; // 801E2FF8
  c->lr=0x801E3000u; f_801E3258(c); // 801E2FFC
  c->r[0]=0u+0x00000000u; // 801E3000
  c->r[3]=c->r[31]|c->r[31]; // 801E3004
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E3008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E300C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3010
  c->lr=c->r[0]; // 801E3014
  c->r[1]=c->r[1]+0x00000010u; // 801E3018
  return; // 801E301C
}

// __dt__Q44nw4r3snd6detail4BankFv
void f_801E3020(Ctx* __restrict c) {
  trace_call(0x801E3020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3020
  c->r[0]=c->lr; // 801E3024
  cmps(c,0,(int32_t)c->r[3],0); // 801E3028
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E302C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3030
  c->r[31]=c->r[3]|c->r[3]; // 801E3034
  if (crb(c,2)) { goto L_801E3048; } // 801E3038
  cmps(c,0,(int32_t)c->r[4],0); // 801E303C
  if (!crb(c,1)) { goto L_801E3048; } // 801E3040
  c->lr=0x801E3048u; f_8009230C(c); // 801E3044
L_801E3048:;
  c->r[3]=c->r[31]|c->r[31]; // 801E3048
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E304C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3050
  c->lr=c->r[0]; // 801E3054
  c->r[1]=c->r[1]+0x00000010u; // 801E3058
  return; // 801E305C
}

// NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo
void f_801E3060(Ctx* __restrict c) {
  trace_call(0x801E3060u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3060
  c->r[0]=c->lr; // 801E3064
  c->r[5]=R32(c->r[4]+0x00000000u); // 801E3068
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801E306C
  c->r[0]=0u+0x43300000u; // 801E3070
  W32(c->r[1]+0x000000BCu,c->r[31]); // 801E3074
  c->r[31]=c->r[3]|c->r[3]; // 801E3078
  W32(c->r[1]+0x000000B8u,c->r[30]); // 801E307C
  c->r[30]=c->r[4]|c->r[4]; // 801E3080
  c->r[6]=R32(c->r[30]+0x00000004u); // 801E3084
  c->r[4]=c->r[1]+0x0000000Cu; // 801E3088
  W32(c->r[1]+0x000000A8u,c->r[0]); // 801E308C
  c->r[7]=R32(c->r[30]+0x00000008u); // 801E3090
  W32(c->r[1]+0x000000B0u,c->r[0]); // 801E3094
  c->lr=0x801E309Cu; f_801E33F4(c); // 801E3098
  cmps(c,0,(int32_t)c->r[3],0); // 801E309C
  if (!crb(c,2)) { goto L_801E30AC; } // 801E30A0
  c->r[3]=0u+0x00000000u; // 801E30A4
  goto L_801E3240; // 801E30A8
L_801E30AC:;
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 801E30AC
  c->r[3]=c->r[31]|c->r[31]; // 801E30B0
  c->r[4]=c->r[1]+0x00000028u; // 801E30B4
  c->r[5]=c->r[1]+0x0000000Cu; // 801E30B8
  c->r[7]=c->r[1]+0x00000008u; // 801E30BC
  c->lr=0x801E30C4u; f_801E36C0(c); // 801E30C0
  cmps(c,0,(int32_t)c->r[3],0); // 801E30C4
  if (!crb(c,2)) { goto L_801E30D4; } // 801E30C8
  c->r[3]=0u+0x00000000u; // 801E30CC
  goto L_801E3240; // 801E30D0
L_801E30D4:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 801E30D4
  c->r[3]=0u+0x00000002u; // 801E30D8
  cmps(c,0,(int32_t)c->r[0],2); // 801E30DC
  if (crb(c,1)) { goto L_801E30E8; } // 801E30E0
  c->r[3]=c->r[0]|c->r[0]; // 801E30E4
L_801E30E8:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 801E30E8
  c->r[5]=R32(c->r[30]+0x00000014u); // 801E30EC
  c->r[6]=R32(c->r[30]+0x0000001Cu); // 801E30F0
  c->r[7]=R32(c->r[30]+0x00000020u); // 801E30F4
  c->lr=0x801E30FCu; f_801E63A0(c); // 801E30F8
  cmps(c,0,(int32_t)c->r[3],0); // 801E30FC
  c->r[31]=c->r[3]|c->r[3]; // 801E3100
  if (!crb(c,2)) { goto L_801E3110; } // 801E3104
  c->r[3]=0u+0x00000000u; // 801E3108
  goto L_801E3240; // 801E310C
L_801E3110:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 801E3110
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E3114
  W32(c->r[3]+0x000000C4u,c->r[4]); // 801E3118
  c->r[0]=c->r[0]^0x80000000u; // 801E311C
  {uint32_t ea=c->r[2]+0xFFFF9EB8u; c->f[1]=RF64(ea);} // 801E3120
  c->r[4]=R8(c->r[1]+0x00000021u); // 801E3124
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801E3128
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E312C
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801E3130
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801E3134
  c->r[0]=R8(c->r[1]+0x00000023u); // 801E3138
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801E313C
  {uint32_t ea=c->r[2]+0xFFFF9EC0u; c->f[1]=RF64(ea);} // 801E3140
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801E3144
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 801E3148
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 801E314C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801E3150
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801E3154
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801E3158
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801E315C
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[3]);} // 801E3160
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3164
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 801E3168
  c->r[4]=R8(c->r[1]+0x00000014u); // 801E316C
  c->lr=0x801E3174u; f_801E6B68(c); // 801E3170
  c->r[4]=R8(c->r[1]+0x00000015u); // 801E3174
  c->r[3]=c->r[31]|c->r[31]; // 801E3178
  c->lr=0x801E3180u; f_801E6B80(c); // 801E317C
  c->r[4]=R8(c->r[1]+0x00000016u); // 801E3180
  c->r[3]=c->r[31]|c->r[31]; // 801E3184
  c->lr=0x801E318Cu; f_801E6B98(c); // 801E3188
  c->r[4]=R8(c->r[1]+0x00000017u); // 801E318C
  c->r[3]=c->r[31]|c->r[31]; // 801E3190
  c->lr=0x801E3198u; f_801E6C38(c); // 801E3194
  c->r[4]=R8(c->r[1]+0x00000018u); // 801E3198
  c->r[3]=c->r[31]|c->r[31]; // 801E319C
  c->lr=0x801E31A4u; f_801E6C40(c); // 801E31A0
  c->r[3]=R8(c->r[1]+0x00000022u); // 801E31A4
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E31A8
  c->r[3]=c->r[3]+0xFFFFFFC0u; // 801E31AC
  {uint32_t ea=c->r[2]+0xFFFF9EB8u; c->f[4]=RF64(ea);} // 801E31B0
  c->r[3]=c->r[3]^0x80000000u; // 801E31B4
  c->r[0]=c->r[0]^0x80000000u; // 801E31B8
  W32(c->r[1]+0x000000ACu,c->r[3]); // 801E31BC
  {uint32_t ea=c->r[2]+0xFFFF9EACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801E31C0
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801E31C4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801E31C8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=RF64(ea);} // 801E31CC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E31D0
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E31D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 801E31D8
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 801E31DC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801E31E0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 801E31E4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[3]);} // 801E31E8
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 801E31EC
  c->r[0]=R8(c->r[1]+0x00000020u); // 801E31F0
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801E31F4
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801E31F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E31FC
  c->r[0]=cntlz(c->r[0]); // 801E3200
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 801E3204
  W8(c->r[31]+0x0000003Au,c->r[0]); // 801E3208
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E320C
  cmps(c,0,(int32_t)c->r[0],2); // 801E3210
  if (!crb(c,2)) { goto L_801E3228; } // 801E3214
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E3218
  c->r[0]=R32(c->r[1]+0x00000010u); // 801E321C
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801E3220
  W32(c->r[31]+0x000000E8u,c->r[3]); // 801E3224
L_801E3228:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801E3228
  c->r[3]=c->r[31]|c->r[31]; // 801E322C
  c->r[4]=c->r[1]+0x00000028u; // 801E3230
  c->r[6]=0u+0x00000000u; // 801E3234
  c->lr=0x801E323Cu; f_801E5F94(c); // 801E3238
  c->r[3]=c->r[31]|c->r[31]; // 801E323C
L_801E3240:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801E3240
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801E3244
  c->r[30]=R32(c->r[1]+0x000000B8u); // 801E3248
  c->lr=c->r[0]; // 801E324C
  c->r[1]=c->r[1]+0x000000C0u; // 801E3250
  return; // 801E3254
}

// __ct__Q44nw4r3snd6detail14BankFileReaderFPCv
void f_801E3258(Ctx* __restrict c) {
  trace_call(0x801E3258u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 801E3258
  c->r[6]=0u+0x00000000u; // 801E325C
  W32(c->r[3]+0x00000000u,c->r[6]); // 801E3260
  c->r[0]=c->r[5]+0xADBE0000u; // 801E3264
  cmpu(c,0,c->r[0],0x00004E4Bu); // 801E3268
  W32(c->r[3]+0x00000004u,c->r[6]); // 801E326C
  W32(c->r[3]+0x00000008u,c->r[6]); // 801E3270
  if (crb(c,2)) { goto L_801E3280; } // 801E3274
  c->r[0]=0u+0x00000000u; // 801E3278
  goto L_801E32AC; // 801E327C
L_801E3280:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 801E3280
  cmpu(c,0,c->r[6],0x00000100u); // 801E3284
  if (!crb(c,0)) { goto L_801E3294; } // 801E3288
  c->r[0]=0u+0x00000000u; // 801E328C
  goto L_801E32AC; // 801E3290
L_801E3294:;
  c->r[0]=addc(c,~c->r[6],0x00000102u,1); // 801E3294
  c->r[5]=0u+0x00000102u; // 801E3298
  c->r[5]=c->r[5]|~c->r[6]; // 801E329C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801E32A0
  c->r[0]=c->r[5]-c->r[0]; // 801E32A4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E32A8
L_801E32AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E32AC
  if (crb(c,2)) return; // 801E32B0
  c->r[0]=R32(c->r[4]+0x00000010u); // 801E32B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E32B8
  cmps(c,0,(int32_t)c->r[0],0); // 801E32BC
  if (crb(c,2)) { goto L_801E32CC; } // 801E32C0
  c->r[0]=c->r[0]+c->r[4]; // 801E32C4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E32C8
L_801E32CC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801E32CC
  c->r[0]=R32(c->r[4]+0x00000018u); // 801E32D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E32D4
  if (crb(c,2)) return; // 801E32D8
  c->r[0]=c->r[0]+c->r[4]; // 801E32DC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E32E0
  return; // 801E32E4
}

// GetInstParam__Q44nw4r3snd6detail14BankFileReaderCFiii
void f_801E32E8(Ctx* __restrict c) {
  trace_call(0x801E32E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E32E8
  c->r[0]=c->lr; // 801E32EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E32F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E32F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E32F8
  c->r[31]=c->r[6]|c->r[6]; // 801E32FC
  cmps(c,0,(int32_t)c->r[0],0); // 801E3300
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E3304
  c->r[30]=c->r[3]|c->r[3]; // 801E3308
  if (!crb(c,2)) { goto L_801E3318; } // 801E330C
  c->r[3]=0u+0x00000000u; // 801E3310
  goto L_801E33DC; // 801E3314
L_801E3318:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E3318
  if (crb(c,0)) { goto L_801E3330; } // 801E331C
  c->r[6]=R32(c->r[3]+0x00000004u); // 801E3320
  c->r[0]=R32(c->r[6]+0x00000008u); // 801E3324
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E3328
  if (crb(c,0)) { goto L_801E3338; } // 801E332C
L_801E3330:;
  c->r[3]=0u+0x00000000u; // 801E3330
  goto L_801E33DC; // 801E3334
L_801E3338:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801E3338
  c->r[4]=c->r[6]+c->r[0]; // 801E333C
  c->r[4]=c->r[4]+0x0000000Cu; // 801E3340
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E3344
  cmpu(c,0,c->r[0],0x00000004u); // 801E3348
  if (!crb(c,2)) { goto L_801E3358; } // 801E334C
  c->r[3]=0u+0x00000000u; // 801E3350
  goto L_801E33DC; // 801E3354
L_801E3358:;
  cmpu(c,0,c->r[0],0x00000001u); // 801E3358
  if (crb(c,2)) { goto L_801E3378; } // 801E335C
  c->lr=0x801E3364u; f_801E3598(c); // 801E3360
  cmps(c,0,(int32_t)c->r[3],0); // 801E3364
  c->r[4]=c->r[3]|c->r[3]; // 801E3368
  if (!crb(c,2)) { goto L_801E3378; } // 801E336C
  c->r[3]=0u+0x00000000u; // 801E3370
  goto L_801E33DC; // 801E3374
L_801E3378:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E3378
  cmpu(c,0,c->r[0],0x00000004u); // 801E337C
  if (!crb(c,2)) { goto L_801E338C; } // 801E3380
  c->r[3]=0u+0x00000000u; // 801E3384
  goto L_801E33DC; // 801E3388
L_801E338C:;
  cmpu(c,0,c->r[0],0x00000001u); // 801E338C
  if (crb(c,2)) { goto L_801E33B4; } // 801E3390
  c->r[3]=c->r[30]|c->r[30]; // 801E3394
  c->r[5]=c->r[31]|c->r[31]; // 801E3398
  c->lr=0x801E33A0u; f_801E3598(c); // 801E339C
  cmps(c,0,(int32_t)c->r[3],0); // 801E33A0
  c->r[4]=c->r[3]|c->r[3]; // 801E33A4
  if (!crb(c,2)) { goto L_801E33B4; } // 801E33A8
  c->r[3]=0u+0x00000000u; // 801E33AC
  goto L_801E33DC; // 801E33B0
L_801E33B4:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E33B4
  cmpu(c,0,c->r[0],0x00000001u); // 801E33B8
  if (crb(c,2)) { goto L_801E33C8; } // 801E33BC
  c->r[3]=0u+0x00000000u; // 801E33C0
  goto L_801E33DC; // 801E33C4
L_801E33C8:;
  c->r[5]=R32(c->r[30]+0x00000004u); // 801E33C8
  c->r[3]=R8(c->r[4]+0x00000000u); // 801E33CC
  c->r[4]=R32(c->r[4]+0x00000004u); // 801E33D0
  c->r[5]=c->r[5]+0x00000008u; // 801E33D4
  c->lr=0x801E33DCu; f_801FBA20(c); // 801E33D8
L_801E33DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E33DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E33E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E33E4
  c->lr=c->r[0]; // 801E33E8
  c->r[1]=c->r[1]+0x00000010u; // 801E33EC
  return; // 801E33F0
}

// ReadInstInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8InstInfoiii
void f_801E33F4(Ctx* __restrict c) {
  trace_call(0x801E33F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E33F4
  c->r[0]=c->lr; // 801E33F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E33FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3400
  c->r[31]=c->r[4]|c->r[4]; // 801E3404
  c->r[4]=c->r[5]|c->r[5]; // 801E3408
  c->r[5]=c->r[6]|c->r[6]; // 801E340C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E3410
  c->r[30]=c->r[3]|c->r[3]; // 801E3414
  c->r[6]=c->r[7]|c->r[7]; // 801E3418
  c->lr=0x801E3420u; f_801E32E8(c); // 801E341C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3420
  if (!crb(c,2)) { goto L_801E3430; } // 801E3424
  c->r[3]=0u+0x00000000u; // 801E3428
  goto L_801E3580; // 801E342C
L_801E3430:;
  c->r[0]=R8(c->r[3]+0x00000009u); // 801E3430
  cmps(c,0,(int32_t)c->r[0],0); // 801E3434
  if (!crb(c,2)) { goto L_801E3464; } // 801E3438
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E343C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3440
  if (!crb(c,0)) { goto L_801E3450; } // 801E3444
  c->r[3]=0u+0x00000000u; // 801E3448
  goto L_801E3580; // 801E344C
L_801E3450:;
  c->r[0]=0u+0x00000000u; // 801E3450
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E3454
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E3458
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E345C
  goto L_801E34CC; // 801E3460
L_801E3464:;
  cmpu(c,0,c->r[0],0x00000001u); // 801E3464
  if (!crb(c,2)) { goto L_801E3494; } // 801E3468
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E346C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3470
  if (!crb(c,2)) { goto L_801E3480; } // 801E3474
  c->r[3]=0u+0x00000000u; // 801E3478
  goto L_801E3580; // 801E347C
L_801E3480:;
  c->r[0]=0u+0x00000001u; // 801E3480
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E3484
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E3488
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E348C
  goto L_801E34CC; // 801E3490
L_801E3494:;
  cmpu(c,0,c->r[0],0x00000002u); // 801E3494
  if (!crb(c,2)) { goto L_801E34C4; } // 801E3498
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E349C
  cmps(c,0,(int32_t)c->r[0],0); // 801E34A0
  if (!crb(c,2)) { goto L_801E34B0; } // 801E34A4
  c->r[3]=0u+0x00000000u; // 801E34A8
  goto L_801E3580; // 801E34AC
L_801E34B0:;
  c->r[0]=0u+0x00000002u; // 801E34B0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E34B4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E34B8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E34BC
  goto L_801E34CC; // 801E34C0
L_801E34C4:;
  c->r[3]=0u+0x00000000u; // 801E34C4
  goto L_801E3580; // 801E34C8
L_801E34CC:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 801E34CC
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E34D0
  W8(c->r[31]+0x00000008u,c->r[0]); // 801E34D4
  c->r[0]=R8(c->r[3]+0x00000008u); // 801E34D8
  W8(c->r[31]+0x00000009u,c->r[0]); // 801E34DC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801E34E0
  W8(c->r[31]+0x0000000Au,c->r[0]); // 801E34E4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801E34E8
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 801E34EC
  c->r[0]=R8(c->r[3]+0x00000007u); // 801E34F0
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 801E34F4
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801E34F8
  W8(c->r[31]+0x00000015u,c->r[0]); // 801E34FC
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801E3500
  W8(c->r[31]+0x00000016u,c->r[0]); // 801E3504
  c->r[0]=R16(c->r[4]+0x00000006u); // 801E3508
  cmpu(c,0,c->r[0],0x00000101u); // 801E350C
  if (crb(c,0)) { goto L_801E3528; } // 801E3510
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801E3514
  W8(c->r[31]+0x00000017u,c->r[0]); // 801E3518
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E351C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801E3520
  goto L_801E3538; // 801E3524
L_801E3528:;
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3528
  c->r[0]=0u+0x0000007Fu; // 801E352C
  W8(c->r[31]+0x00000017u,c->r[0]); // 801E3530
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801E3534
L_801E3538:;
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801E3538
  cmps(c,0,(int32_t)c->r[0],1); // 801E353C
  if (crb(c,2)) { goto L_801E3560; } // 801E3540
  if (!crb(c,0)) { goto L_801E356C; } // 801E3544
  cmps(c,0,(int32_t)c->r[0],0); // 801E3548
  if (!crb(c,0)) { goto L_801E3554; } // 801E354C
  goto L_801E356C; // 801E3550
L_801E3554:;
  c->r[0]=0u+0x00000000u; // 801E3554
  W32(c->r[31]+0x00000010u,c->r[0]); // 801E3558
  goto L_801E3574; // 801E355C
L_801E3560:;
  c->r[0]=0u+0x00000001u; // 801E3560
  W32(c->r[31]+0x00000010u,c->r[0]); // 801E3564
  goto L_801E3574; // 801E3568
L_801E356C:;
  c->r[3]=0u+0x00000000u; // 801E356C
  goto L_801E3580; // 801E3570
L_801E3574:;
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801E3574
  c->r[3]=0u+0x00000001u; // 801E3578
  W8(c->r[31]+0x00000014u,c->r[0]); // 801E357C
L_801E3580:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3584
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E3588
  c->lr=c->r[0]; // 801E358C
  c->r[1]=c->r[1]+0x00000010u; // 801E3590
  return; // 801E3594
}

// GetReferenceToSubRegion__Q44nw4r3snd6detail14BankFileReaderCFPCQ54nw4r3snd6detail4Util128DataRef<v,Q54nw4r3snd6detail8BankFile9InstParam,Q54nw4r3snd6detail8BankFile10RangeTable,Q54nw4r3snd6detail8BankFile10IndexTable>i
void f_801E3598(Ctx* __restrict c) {
  trace_call(0x801E3598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3598
  c->r[0]=c->lr; // 801E359C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E35A0
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E35A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E35A8
  c->r[31]=c->r[5]|c->r[5]; // 801E35AC
  cmps(c,0,(int32_t)c->r[0],2); // 801E35B0
  c->r[5]=0u+0x00000000u; // 801E35B4
  if (crb(c,2)) { goto L_801E35E4; } // 801E35B8
  if (!crb(c,0)) { goto L_801E35D0; } // 801E35BC
  cmps(c,0,(int32_t)c->r[0],0); // 801E35C0
  if (crb(c,2)) { goto L_801E36A8; } // 801E35C4
  if (!crb(c,0)) { goto L_801E35DC; } // 801E35C8
  goto L_801E36A8; // 801E35CC
L_801E35D0:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E35D0
  if (!crb(c,0)) { goto L_801E36A8; } // 801E35D4
  goto L_801E3654; // 801E35D8
L_801E35DC:;
  c->r[5]=c->r[4]|c->r[4]; // 801E35DC
  goto L_801E36A8; // 801E35E0
L_801E35E4:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 801E35E4
  c->r[3]=R8(c->r[4]+0x00000000u); // 801E35E8
  c->r[4]=R32(c->r[4]+0x00000004u); // 801E35EC
  c->r[5]=c->r[5]+0x00000008u; // 801E35F0
  c->lr=0x801E35F8u; f_801FBA20(c); // 801E35F4
  cmps(c,0,(int32_t)c->r[3],0); // 801E35F8
  if (!crb(c,2)) { goto L_801E3608; } // 801E35FC
  c->r[3]=0u+0x00000000u; // 801E3600
  goto L_801E36AC; // 801E3604
L_801E3608:;
  c->r[5]=0u+0x00000000u; // 801E3608
  goto L_801E3628; // 801E360C
L_801E3610:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E3610
  c->r[5]=c->r[5]+0x00000001u; // 801E3614
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E3618
  if (crb(c,0)) { goto L_801E3628; } // 801E361C
  c->r[3]=0u+0x00000000u; // 801E3620
  goto L_801E36AC; // 801E3624
L_801E3628:;
  c->r[4]=c->r[3]+c->r[5]; // 801E3628
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E362C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801E3630
  if (crb(c,1)) { IRQCHK(c); goto L_801E3610; } // 801E3634
  c->r[4]=R8(c->r[3]+0x00000000u); // 801E3638
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801E363C
  c->r[0]=c->r[3]+c->r[0]; // 801E3640
  c->r[3]=c->r[4]+0x00000004u; // 801E3644
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFCu; // 801E3648
  c->r[5]=c->r[3]+c->r[0]; // 801E364C
  goto L_801E36A8; // 801E3650
L_801E3654:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 801E3654
  c->r[3]=R8(c->r[4]+0x00000000u); // 801E3658
  c->r[4]=R32(c->r[4]+0x00000004u); // 801E365C
  c->r[5]=c->r[5]+0x00000008u; // 801E3660
  c->lr=0x801E3668u; f_801FBA20(c); // 801E3664
  cmps(c,0,(int32_t)c->r[3],0); // 801E3668
  if (!crb(c,2)) { goto L_801E3678; } // 801E366C
  c->r[3]=0u+0x00000000u; // 801E3670
  goto L_801E36AC; // 801E3674
L_801E3678:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 801E3678
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[4]); // 801E367C
  if (crb(c,0)) { goto L_801E3690; } // 801E3680
  c->r[0]=R8(c->r[3]+0x00000001u); // 801E3684
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801E3688
  if (!crb(c,1)) { goto L_801E3698; } // 801E368C
L_801E3690:;
  c->r[3]=0u+0x00000000u; // 801E3690
  goto L_801E36AC; // 801E3694
L_801E3698:;
  c->r[0]=c->r[31]-c->r[4]; // 801E3698
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E369C
  c->r[3]=c->r[3]+c->r[0]; // 801E36A0
  c->r[5]=c->r[3]+0x00000004u; // 801E36A4
L_801E36A8:;
  c->r[3]=c->r[5]|c->r[5]; // 801E36A8
L_801E36AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E36AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E36B0
  c->lr=c->r[0]; // 801E36B4
  c->r[1]=c->r[1]+0x00000010u; // 801E36B8
  return; // 801E36BC
}

// ReadWaveInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8WaveInfoRCQ54nw4r3snd6detail8InstInfo16WaveDataLocationPCvPPCQ44nw4r3snd6detail8WaveInfo
void f_801E36C0(Ctx* __restrict c) {
  trace_call(0x801E36C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E36C0
  c->r[0]=c->lr; // 801E36C4
  cmps(c,0,(int32_t)c->r[7],0); // 801E36C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E36CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E36D0
  c->r[31]=c->r[4]|c->r[4]; // 801E36D4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E36D8
  c->r[30]=c->r[7]|c->r[7]; // 801E36DC
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E36E0
  c->r[29]=c->r[6]|c->r[6]; // 801E36E4
  if (crb(c,2)) { goto L_801E36F4; } // 801E36E8
  c->r[0]=0u+0x00000000u; // 801E36EC
  W32(c->r[7]+0x00000000u,c->r[0]); // 801E36F0
L_801E36F4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E36F4
  cmps(c,0,(int32_t)c->r[0],0); // 801E36F8
  if (!crb(c,2)) { goto L_801E3708; } // 801E36FC
  c->r[3]=0u+0x00000000u; // 801E3700
  goto L_801E38F8; // 801E3704
L_801E3708:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E3708
  cmps(c,0,(int32_t)c->r[0],0); // 801E370C
  if (!crb(c,2)) { goto L_801E37C8; } // 801E3710
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E3714
  c->r[30]=R32(c->r[5]+0x00000004u); // 801E3718
  cmps(c,0,(int32_t)c->r[3],0); // 801E371C
  if (!crb(c,2)) { goto L_801E376C; } // 801E3720
  c->r[4]=c->r[29]|c->r[29]; // 801E3724
  c->r[3]=c->r[1]+0x00000010u; // 801E3728
  c->lr=0x801E3730u; f_801FBA44(c); // 801E372C
  c->r[4]=c->r[30]|c->r[30]; // 801E3730
  c->r[3]=c->r[1]+0x00000010u; // 801E3734
  c->lr=0x801E373Cu; f_801FBAB8(c); // 801E3738
  cmps(c,0,(int32_t)c->r[3],0); // 801E373C
  if (!crb(c,2)) { goto L_801E374C; } // 801E3740
  c->r[3]=0u+0x00000000u; // 801E3744
  goto L_801E38F8; // 801E3748
L_801E374C:;
  c->r[4]=c->r[3]|c->r[3]; // 801E374C
  c->r[3]=c->r[1]+0x0000000Cu; // 801E3750
  c->lr=0x801E3758u; f_801FBB40(c); // 801E3754
  c->r[4]=c->r[31]|c->r[31]; // 801E3758
  c->r[3]=c->r[1]+0x0000000Cu; // 801E375C
  c->r[5]=0u+0x00000000u; // 801E3760
  c->lr=0x801E3768u; f_801FBB68(c); // 801E3764
  goto L_801E38F8; // 801E3768
L_801E376C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E376C
  c->r[5]=c->r[3]+0x00000008u; // 801E3770
  cmpu(c,0,c->r[30],c->r[0]); // 801E3774
  if (crb(c,0)) { goto L_801E3784; } // 801E3778
  c->r[3]=0u+0x00000000u; // 801E377C
  goto L_801E38F8; // 801E3780
L_801E3784:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801E3784
  c->r[4]=c->r[3]+c->r[0]; // 801E3788
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 801E378C
  c->r[4]=R32(c->r[4]+0x00000010u); // 801E3790
  c->lr=0x801E3798u; f_801FBA20(c); // 801E3794
  cmps(c,0,(int32_t)c->r[3],0); // 801E3798
  if (!crb(c,2)) { goto L_801E37A8; } // 801E379C
  c->r[3]=0u+0x00000000u; // 801E37A0
  goto L_801E38F8; // 801E37A4
L_801E37A8:;
  c->r[4]=c->r[3]|c->r[3]; // 801E37A8
  c->r[3]=c->r[1]+0x00000008u; // 801E37AC
  c->lr=0x801E37B4u; f_801FBB60(c); // 801E37B0
  c->r[4]=c->r[31]|c->r[31]; // 801E37B4
  c->r[5]=c->r[29]|c->r[29]; // 801E37B8
  c->r[3]=c->r[1]+0x00000008u; // 801E37BC
  c->lr=0x801E37C4u; f_801FBB68(c); // 801E37C0
  goto L_801E38F8; // 801E37C4
L_801E37C8:;
  cmps(c,0,(int32_t)c->r[0],1); // 801E37C8
  if (!crb(c,2)) { goto L_801E3850; } // 801E37CC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801E37D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E37D4
  if (!crb(c,2)) { goto L_801E37E4; } // 801E37D8
  c->r[3]=0u+0x00000000u; // 801E37DC
  goto L_801E38F8; // 801E37E0
L_801E37E4:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E37E4
  if (crb(c,2)) { goto L_801E37F0; } // 801E37E8
  W32(c->r[7]+0x00000000u,c->r[0]); // 801E37EC
L_801E37F0:;
  c->r[7]=R32(c->r[5]+0x00000004u); // 801E37F0
  c->r[0]=0u+0x0000000Du; // 801E37F4
  c->r[6]=c->r[4]+0x00000014u; // 801E37F8
  c->r[3]=R32(c->r[7]+0x00000000u); // 801E37FC
  c->r[5]=c->r[7]+0x00000014u; // 801E3800
  W32(c->r[4]+0x00000000u,c->r[3]); // 801E3804
  c->r[3]=R8(c->r[7]+0x00000004u); // 801E3808
  W8(c->r[4]+0x00000004u,c->r[3]); // 801E380C
  c->r[3]=R32(c->r[7]+0x00000008u); // 801E3810
  W32(c->r[4]+0x00000008u,c->r[3]); // 801E3814
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 801E3818
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801E381C
  c->r[3]=R32(c->r[7]+0x00000010u); // 801E3820
  W32(c->r[4]+0x00000010u,c->r[3]); // 801E3824
  c->r[3]=R32(c->r[7]+0x00000014u); // 801E3828
  W32(c->r[4]+0x00000014u,c->r[3]); // 801E382C
  c->ctr=c->r[0]; // 801E3830
L_801E3834:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 801E3834
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801E3838
  W32(c->r[6]+0x00000004u,c->r[3]); // 801E383C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801E3840
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3834; } // 801E3844
  c->r[3]=0u+0x00000001u; // 801E3848
  goto L_801E38F8; // 801E384C
L_801E3850:;
  cmps(c,0,(int32_t)c->r[0],2); // 801E3850
  if (!crb(c,2)) { goto L_801E38F4; } // 801E3854
  c->r[3]=R32(c->r[5]+0x00000004u); // 801E3858
  cmps(c,0,(int32_t)c->r[3],0); // 801E385C
  if (!crb(c,2)) { goto L_801E386C; } // 801E3860
  c->r[3]=0u+0x00000000u; // 801E3864
  goto L_801E38F8; // 801E3868
L_801E386C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E386C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E3870
  c->ctr=c->r[12]; // 801E3874
  if (true) { c->lr=0x801E387Cu; dispatch(c,c->ctr); } // 801E3878
  cmps(c,0,(int32_t)c->r[3],0); // 801E387C
  if (!crb(c,2)) { goto L_801E388C; } // 801E3880
  c->r[3]=0u+0x00000000u; // 801E3884
  goto L_801E38F8; // 801E3888
L_801E388C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E388C
  if (crb(c,2)) { goto L_801E3898; } // 801E3890
  W32(c->r[30]+0x00000000u,c->r[3]); // 801E3894
L_801E3898:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 801E3898
  c->r[4]=c->r[3]+0x00000014u; // 801E389C
  c->r[0]=0u+0x0000000Du; // 801E38A0
  c->r[5]=c->r[31]+0x00000014u; // 801E38A4
  W32(c->r[31]+0x00000000u,c->r[6]); // 801E38A8
  c->r[6]=R8(c->r[3]+0x00000004u); // 801E38AC
  W8(c->r[31]+0x00000004u,c->r[6]); // 801E38B0
  c->r[6]=R32(c->r[3]+0x00000008u); // 801E38B4
  W32(c->r[31]+0x00000008u,c->r[6]); // 801E38B8
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 801E38BC
  W32(c->r[31]+0x0000000Cu,c->r[6]); // 801E38C0
  c->r[6]=R32(c->r[3]+0x00000010u); // 801E38C4
  W32(c->r[31]+0x00000010u,c->r[6]); // 801E38C8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801E38CC
  W32(c->r[31]+0x00000014u,c->r[3]); // 801E38D0
  c->ctr=c->r[0]; // 801E38D4
L_801E38D8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801E38D8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801E38DC
  W32(c->r[5]+0x00000004u,c->r[3]); // 801E38E0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801E38E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E38D8; } // 801E38E8
  c->r[3]=0u+0x00000001u; // 801E38EC
  goto L_801E38F8; // 801E38F0
L_801E38F4:;
  c->r[3]=0u+0x00000000u; // 801E38F4
L_801E38F8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E38F8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E38FC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E3900
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E3904
  c->lr=c->r[0]; // 801E3908
  c->r[1]=c->r[1]+0x00000030u; // 801E390C
  return; // 801E3910
}

// fn_801E3914
void f_801E3914(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3914
  c->r[4]=0u+0x802A0000u; // 801E3918
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E391C
  c->r[4]=c->r[4]+0x000025A0u; // 801E3920
  c->r[6]=c->r[3]+0x00000084u; // 801E3924
  c->r[5]=c->r[3]+0x000000CCu; // 801E3928
  cmpu(c,0,c->r[6],c->r[5]); // 801E392C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3930
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 801E3934
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 801E3938
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801E393C
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801E3940
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 801E3944
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 801E3948
  if (!crb(c,0)) { goto L_801E3B24; } // 801E394C
  c->r[8]=c->r[3]+0x00000084u; // 801E3950
  c->r[4]=0u+0x2AAB0000u; // 801E3954
  c->r[9]=c->r[5]-c->r[8]; // 801E3958
  c->r[7]=c->r[3]+0x0000000Cu; // 801E395C
  c->r[10]=c->r[9]+0x00000017u; // 801E3960
  c->r[0]=c->r[4]+0xFFFFAAABu; // 801E3964
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[10])>>32); // 801E3968
  c->r[0]=sraw(c,c->r[0],2); // 801E396C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E3970
  c->r[11]=c->r[0]+c->r[4]; // 801E3974
  c->r[12]=c->r[11]+0x00000001u; // 801E3978
  cmps(c,0,(int32_t)c->r[12],8); // 801E397C
  if (!crb(c,1)) { goto L_801E3ADC; } // 801E3980
  cmpu(c,0,c->r[8],c->r[5]); // 801E3984
  c->r[4]=0u+0x00000000u; // 801E3988
  c->r[5]=0u+0x00000000u; // 801E398C
  if (crb(c,1)) { goto L_801E39B8; } // 801E3990
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 801E3994
  c->r[8]=0u+0x00000001u; // 801E3998
  if (!crb(c,2)) { goto L_801E39AC; } // 801E399C
  c->r[0]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[0]); // 801E39A0
  if (crb(c,2)) { goto L_801E39AC; } // 801E39A4
  c->r[8]=0u+0x00000000u; // 801E39A8
L_801E39AC:;
  cmps(c,0,(int32_t)c->r[8],0); // 801E39AC
  if (crb(c,2)) { goto L_801E39B8; } // 801E39B0
  c->r[5]=0u+0x00000001u; // 801E39B4
L_801E39B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E39B8
  if (crb(c,2)) { goto L_801E39E8; } // 801E39BC
  c->r[8]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[8]); // 801E39C0
  c->r[5]=0u+0x00000001u; // 801E39C4
  if (!crb(c,2)) { goto L_801E39DC; } // 801E39C8
  c->r[0]=rotl(c->r[12],0)&0x80000000u; // 801E39CC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801E39D0
  if (crb(c,2)) { goto L_801E39DC; } // 801E39D4
  c->r[5]=0u+0x00000000u; // 801E39D8
L_801E39DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E39DC
  if (crb(c,2)) { goto L_801E39E8; } // 801E39E0
  c->r[4]=0u+0x00000001u; // 801E39E4
L_801E39E8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E39E8
  if (crb(c,2)) { goto L_801E3ADC; } // 801E39EC
  c->r[4]=c->r[7]+0x000000BFu; // 801E39F0
  c->r[0]=0u+0x000000C0u; // 801E39F4
  c->r[4]=c->r[4]-c->r[6]; // 801E39F8
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E39FC
  c->r[4]=divwu(c->r[4],c->r[0]); // 801E3A00
  {uint32_t ea=c->r[2]+0xFFFF9ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3A04
  c->ctr=c->r[4]; // 801E3A08
  cmpu(c,0,c->r[6],c->r[7]); // 801E3A0C
  if (!crb(c,0)) { goto L_801E3ADC; } // 801E3A10
L_801E3A14:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 801E3A14
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 801E3A18
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 801E3A1C
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E3A20
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 801E3A24
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 801E3A28
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[1]);} // 801E3A2C
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[1]);} // 801E3A30
  {uint32_t ea=c->r[6]+0x00000020u; WF32(ea,c->f[0]);} // 801E3A34
  {uint32_t ea=c->r[6]+0x00000024u; WF32(ea,c->f[0]);} // 801E3A38
  {uint32_t ea=c->r[6]+0x00000028u; WF32(ea,c->f[0]);} // 801E3A3C
  {uint32_t ea=c->r[6]+0x0000002Cu; WF32(ea,c->f[0]);} // 801E3A40
  {uint32_t ea=c->r[6]+0x00000030u; WF32(ea,c->f[1]);} // 801E3A44
  {uint32_t ea=c->r[6]+0x00000034u; WF32(ea,c->f[1]);} // 801E3A48
  {uint32_t ea=c->r[6]+0x00000038u; WF32(ea,c->f[0]);} // 801E3A4C
  {uint32_t ea=c->r[6]+0x0000003Cu; WF32(ea,c->f[0]);} // 801E3A50
  {uint32_t ea=c->r[6]+0x00000040u; WF32(ea,c->f[0]);} // 801E3A54
  {uint32_t ea=c->r[6]+0x00000044u; WF32(ea,c->f[0]);} // 801E3A58
  {uint32_t ea=c->r[6]+0x00000048u; WF32(ea,c->f[1]);} // 801E3A5C
  {uint32_t ea=c->r[6]+0x0000004Cu; WF32(ea,c->f[1]);} // 801E3A60
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[0]);} // 801E3A64
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 801E3A68
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[0]);} // 801E3A6C
  {uint32_t ea=c->r[6]+0x0000005Cu; WF32(ea,c->f[0]);} // 801E3A70
  {uint32_t ea=c->r[6]+0x00000060u; WF32(ea,c->f[1]);} // 801E3A74
  {uint32_t ea=c->r[6]+0x00000064u; WF32(ea,c->f[1]);} // 801E3A78
  {uint32_t ea=c->r[6]+0x00000068u; WF32(ea,c->f[0]);} // 801E3A7C
  {uint32_t ea=c->r[6]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E3A80
  {uint32_t ea=c->r[6]+0x00000070u; WF32(ea,c->f[0]);} // 801E3A84
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 801E3A88
  {uint32_t ea=c->r[6]+0x00000078u; WF32(ea,c->f[1]);} // 801E3A8C
  {uint32_t ea=c->r[6]+0x0000007Cu; WF32(ea,c->f[1]);} // 801E3A90
  {uint32_t ea=c->r[6]+0x00000080u; WF32(ea,c->f[0]);} // 801E3A94
  {uint32_t ea=c->r[6]+0x00000084u; WF32(ea,c->f[0]);} // 801E3A98
  {uint32_t ea=c->r[6]+0x00000088u; WF32(ea,c->f[0]);} // 801E3A9C
  {uint32_t ea=c->r[6]+0x0000008Cu; WF32(ea,c->f[0]);} // 801E3AA0
  {uint32_t ea=c->r[6]+0x00000090u; WF32(ea,c->f[1]);} // 801E3AA4
  {uint32_t ea=c->r[6]+0x00000094u; WF32(ea,c->f[1]);} // 801E3AA8
  {uint32_t ea=c->r[6]+0x00000098u; WF32(ea,c->f[0]);} // 801E3AAC
  {uint32_t ea=c->r[6]+0x0000009Cu; WF32(ea,c->f[0]);} // 801E3AB0
  {uint32_t ea=c->r[6]+0x000000A0u; WF32(ea,c->f[0]);} // 801E3AB4
  {uint32_t ea=c->r[6]+0x000000A4u; WF32(ea,c->f[0]);} // 801E3AB8
  {uint32_t ea=c->r[6]+0x000000A8u; WF32(ea,c->f[1]);} // 801E3ABC
  {uint32_t ea=c->r[6]+0x000000ACu; WF32(ea,c->f[1]);} // 801E3AC0
  {uint32_t ea=c->r[6]+0x000000B0u; WF32(ea,c->f[0]);} // 801E3AC4
  {uint32_t ea=c->r[6]+0x000000B4u; WF32(ea,c->f[0]);} // 801E3AC8
  {uint32_t ea=c->r[6]+0x000000B8u; WF32(ea,c->f[0]);} // 801E3ACC
  {uint32_t ea=c->r[6]+0x000000BCu; WF32(ea,c->f[0]);} // 801E3AD0
  c->r[6]=c->r[6]+0x000000C0u; // 801E3AD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3A14; } // 801E3AD8
L_801E3ADC:;
  c->r[5]=c->r[3]+0x000000CCu; // 801E3ADC
  c->r[0]=0u+0x00000018u; // 801E3AE0
  c->r[4]=c->r[5]+0x00000017u; // 801E3AE4
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3AE8
  c->r[4]=c->r[4]-c->r[6]; // 801E3AEC
  {uint32_t ea=c->r[2]+0xFFFF9ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3AF0
  c->r[4]=divwu(c->r[4],c->r[0]); // 801E3AF4
  c->ctr=c->r[4]; // 801E3AF8
  cmpu(c,0,c->r[6],c->r[5]); // 801E3AFC
  if (!crb(c,0)) { goto L_801E3B24; } // 801E3B00
L_801E3B04:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 801E3B04
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 801E3B08
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 801E3B0C
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E3B10
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 801E3B14
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 801E3B18
  c->r[6]=c->r[6]+0x00000018u; // 801E3B1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3B04; } // 801E3B20
L_801E3B24:;
  {uint32_t ea=c->r[2]+0xFFFF9ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3B24
  c->r[5]=0u+0x00000000u; // 801E3B28
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3B2C
  c->r[4]=0u+0x00000001u; // 801E3B30
  c->r[0]=0u+0xFFFFFFFFu; // 801E3B34
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E3B38
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801E3B3C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801E3B40
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801E3B44
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801E3B48
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801E3B4C
  W32(c->r[3]+0x00000018u,c->r[5]); // 801E3B50
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 801E3B54
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801E3B58
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801E3B5C
  W32(c->r[3]+0x00000028u,c->r[5]); // 801E3B60
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801E3B64
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801E3B68
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 801E3B6C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801E3B70
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801E3B74
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801E3B78
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801E3B7C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801E3B80
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 801E3B84
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801E3B88
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 801E3B8C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801E3B90
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801E3B94
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801E3B98
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801E3B9C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801E3BA0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 801E3BA4
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 801E3BA8
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801E3BAC
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801E3BB0
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 801E3BB4
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 801E3BB8
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 801E3BBC
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[1]);} // 801E3BC0
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 801E3BC4
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 801E3BC8
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 801E3BCC
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 801E3BD0
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 801E3BD4
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 801E3BD8
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 801E3BDC
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 801E3BE0
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 801E3BE4
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 801E3BE8
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 801E3BEC
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 801E3BF0
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 801E3BF4
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 801E3BF8
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 801E3BFC
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 801E3C00
  return; // 801E3C04
}

// fn_801E3C08
void f_801E3C08(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3C08
  c->r[4]=0u+0x00000000u; // 801E3C0C
  {uint32_t ea=c->r[2]+0xFFFF9ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3C10
  c->r[0]=0u+0x00000001u; // 801E3C14
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E3C18
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801E3C1C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801E3C20
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801E3C24
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801E3C28
  W32(c->r[3]+0x00000018u,c->r[4]); // 801E3C2C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801E3C30
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801E3C34
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801E3C38
  W32(c->r[3]+0x00000028u,c->r[4]); // 801E3C3C
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801E3C40
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801E3C44
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 801E3C48
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801E3C4C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801E3C50
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801E3C54
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801E3C58
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801E3C5C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 801E3C60
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801E3C64
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 801E3C68
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801E3C6C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801E3C70
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801E3C74
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801E3C78
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801E3C7C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 801E3C80
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 801E3C84
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801E3C88
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801E3C8C
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 801E3C90
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 801E3C94
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 801E3C98
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[1]);} // 801E3C9C
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 801E3CA0
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 801E3CA4
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 801E3CA8
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 801E3CAC
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 801E3CB0
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 801E3CB4
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 801E3CB8
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 801E3CBC
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 801E3CC0
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 801E3CC4
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 801E3CC8
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 801E3CCC
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 801E3CD0
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 801E3CD4
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 801E3CD8
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 801E3CDC
  return; // 801E3CE0
}

// fn_801E3CE4
void f_801E3CE4(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E3CE4
  c->r[3]=c->r[3]+c->r[0]; // 801E3CE8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801E3CEC
  return; // 801E3CF0
}

// fn_801E3CF4
void f_801E3CF4(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E3CF4
  c->r[3]=c->r[3]+c->r[0]; // 801E3CF8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3CFC
  return; // 801E3D00
}

// fn_801E3D04
void f_801E3D04(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E3D04
  c->r[3]=c->r[3]+c->r[0]; // 801E3D08
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801E3D0C
  return; // 801E3D10
}

// fn_801E3D14
void f_801E3D14(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E3D14
  c->r[3]=c->r[3]+c->r[0]; // 801E3D18
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3D1C
  return; // 801E3D20
}

// fn_801E3D24
void f_801E3D24(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E3D24
  c->r[3]=c->r[3]+c->r[0]; // 801E3D28
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3D2C
  return; // 801E3D30
}

// fn_801E3D34
void f_801E3D34(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E3D34
  c->r[3]=c->r[3]+c->r[0]; // 801E3D38
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3D3C
  return; // 801E3D40
}

// fn_801E3D44
void f_801E3D44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3D44
  c->r[0]=c->lr; // 801E3D48
  cmps(c,0,(int32_t)c->r[3],0); // 801E3D4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3D50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3D54
  c->r[31]=c->r[3]|c->r[3]; // 801E3D58
  if (crb(c,2)) { goto L_801E3D6C; } // 801E3D5C
  cmps(c,0,(int32_t)c->r[4],0); // 801E3D60
  if (!crb(c,1)) { goto L_801E3D6C; } // 801E3D64
  c->lr=0x801E3D6Cu; f_8009230C(c); // 801E3D68
L_801E3D6C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E3D6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3D70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3D74
  c->lr=c->r[0]; // 801E3D78
  c->r[1]=c->r[1]+0x00000010u; // 801E3D7C
  return; // 801E3D80
}

// fn_801E3D84
void f_801E3D84(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3D84
  c->r[8]=0u+0x802A0000u; // 801E3D88
  c->r[7]=0u+0x00000000u; // 801E3D8C
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3D90
  c->r[8]=c->r[8]+0x000025C8u; // 801E3D94
  c->r[6]=0u+0xFFFFFFFFu; // 801E3D98
  c->r[0]=0u+0x00000001u; // 801E3D9C
  W32(c->r[3]+0x00000000u,c->r[8]); // 801E3DA0
  W32(c->r[3]+0x00000004u,c->r[7]); // 801E3DA4
  W32(c->r[3]+0x00000008u,c->r[7]); // 801E3DA8
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801E3DAC
  W32(c->r[3]+0x00000010u,c->r[7]); // 801E3DB0
  W32(c->r[3]+0x00000014u,c->r[7]); // 801E3DB4
  W32(c->r[3]+0x00000018u,c->r[7]); // 801E3DB8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801E3DBC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801E3DC0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801E3DC4
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801E3DC8
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801E3DCC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801E3DD0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 801E3DD4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 801E3DD8
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801E3DDC
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801E3DE0
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801E3DE4
  W32(c->r[3]+0x00000060u,c->r[7]); // 801E3DE8
  W32(c->r[3]+0x00000064u,c->r[7]); // 801E3DEC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801E3DF0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E3DF4
  W32(c->r[3]+0x00000070u,c->r[7]); // 801E3DF8
  W32(c->r[3]+0x00000074u,c->r[7]); // 801E3DFC
  W32(c->r[3]+0x00000090u,c->r[6]); // 801E3E00
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 801E3E04
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 801E3E08
  W32(c->r[3]+0x0000009Cu,c->r[7]); // 801E3E0C
  W32(c->r[3]+0x000000A0u,c->r[7]); // 801E3E10
  W32(c->r[3]+0x000000E0u,c->r[7]); // 801E3E14
  W32(c->r[3]+0x000000E4u,c->r[7]); // 801E3E18
  W32(c->r[3]+0x000000E8u,c->r[7]); // 801E3E1C
  W32(c->r[3]+0x000000ECu,c->r[7]); // 801E3E20
  W32(c->r[3]+0x000000F0u,c->r[7]); // 801E3E24
  W32(c->r[3]+0x000000F4u,c->r[7]); // 801E3E28
  W32(c->r[3]+0x000000F8u,c->r[7]); // 801E3E2C
  W32(c->r[3]+0x000000FCu,c->r[7]); // 801E3E30
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 801E3E34
  W32(c->r[3]+0x00000020u,c->r[7]); // 801E3E38
  W32(c->r[3]+0x00000024u,c->r[7]); // 801E3E3C
  W32(c->r[3]+0x00000028u,c->r[7]); // 801E3E40
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 801E3E44
  W8(c->r[3]+0x0000008Du,c->r[0]); // 801E3E48
  W8(c->r[3]+0x0000008Cu,c->r[4]); // 801E3E4C
  W32(c->r[3]+0x00000048u,c->r[5]); // 801E3E50
  return; // 801E3E54
}

// fn_801E3E58
void f_801E3E58(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E3E58
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3E5C
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801E3E60
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[0]); // 801E3E64
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3E68
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 801E3E6C
  W8(c->r[3]+0x00000080u,c->r[0]); // 801E3E70
  W8(c->r[3]+0x00000078u,c->r[0]); // 801E3E74
  W8(c->r[3]+0x00000079u,c->r[0]); // 801E3E78
  W8(c->r[3]+0x0000007Au,c->r[0]); // 801E3E7C
  W8(c->r[3]+0x0000007Bu,c->r[0]); // 801E3E80
  W32(c->r[3]+0x00000084u,c->r[0]); // 801E3E84
  W32(c->r[3]+0x00000088u,c->r[0]); // 801E3E88
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[4]);} // 801E3E8C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[4]);} // 801E3E90
  W32(c->r[3]+0x00000060u,c->r[0]); // 801E3E94
  W32(c->r[3]+0x00000064u,c->r[0]); // 801E3E98
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801E3E9C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E3EA0
  W32(c->r[3]+0x00000070u,c->r[0]); // 801E3EA4
  W32(c->r[3]+0x00000074u,c->r[0]); // 801E3EA8
  if (crb(c,0)) { goto L_801E3EB4; } // 801E3EAC
  goto L_801E3EF0; // 801E3EB0
L_801E3EB4:;
  c->r[4]=c->r[0]^0x80000000u; // 801E3EB4
  c->r[0]=0u+0x43300000u; // 801E3EB8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E3EBC
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[4]); // 801E3EC0
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[3]=RF64(ea);} // 801E3EC4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E3EC8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E3ECC
  W32(c->r[1]+0x00000014u,c->r[4]); // 801E3ED0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801E3ED4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E3ED8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E3EDC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801E3EE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801E3EE4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E3EE8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 801E3EEC
L_801E3EF0:;
  c->r[5]=R32(c->r[3]+0x00000010u); // 801E3EF0
  c->r[0]=0u+0x00000000u; // 801E3EF4
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3EF8
  c->r[4]=0u+0x00000001u; // 801E3EFC
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3F00
  cmps(c,0,(int32_t)c->r[5],0); // 801E3F04
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[4]);} // 801E3F08
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 801E3F0C
  W32(c->r[3]+0x00000060u,c->r[4]); // 801E3F10
  W32(c->r[3]+0x00000064u,c->r[0]); // 801E3F14
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 801E3F18
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[1]);} // 801E3F1C
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 801E3F20
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 801E3F24
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 801E3F28
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[1]);} // 801E3F2C
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 801E3F30
  W32(c->r[3]+0x000000A0u,c->r[0]); // 801E3F34
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 801E3F38
  if (crb(c,2)) { goto L_801E3F44; } // 801E3F3C
  c->r[4]=R32(c->r[5]+0x00000034u); // 801E3F40
L_801E3F44:;
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3F44
  c->r[0]=0u+0x00000000u; // 801E3F48
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3F4C
  W32(c->r[3]+0x000000B8u,c->r[4]); // 801E3F50
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 801E3F54
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 801E3F58
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 801E3F5C
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 801E3F60
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 801E3F64
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[1]);} // 801E3F68
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[1]);} // 801E3F6C
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[1]);} // 801E3F70
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[1]);} // 801E3F74
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801E3F78
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801E3F7C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801E3F80
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801E3F84
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801E3F88
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801E3F8C
  W32(c->r[3]+0x00000048u,c->r[0]); // 801E3F90
  c->r[1]=c->r[1]+0x00000020u; // 801E3F94
  return; // 801E3F98
}

// fn_801E3F9C
void f_801E3F9C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000079u); // 801E3F9C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3FA0
  if (!crb(c,2)) return; // 801E3FA4
  c->r[0]=0u+0x00000001u; // 801E3FA8
  W8(c->r[3]+0x00000078u,c->r[0]); // 801E3FAC
  return; // 801E3FB0
}

// fn_801E3FB4
void f_801E3FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3FB4
  c->r[0]=c->lr; // 801E3FB8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E3FBC
  c->r[0]=0u+0x43300000u; // 801E3FC0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E3FC4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E3FC8
  c->r[30]=c->r[4]|c->r[4]; // 801E3FCC
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E3FD0
  c->r[29]=c->r[3]|c->r[3]; // 801E3FD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E3FD8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E3FDC
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E3FE0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E3FE4
  c->ctr=c->r[12]; // 801E3FE8
  if (true) { c->lr=0x801E3FF0u; dispatch(c,c->ctr); } // 801E3FEC
  cmps(c,0,(int32_t)c->r[30],0); // 801E3FF0
  c->r[31]=c->r[3]|c->r[3]; // 801E3FF4
  if (crb(c,2)) { goto L_801E404C; } // 801E3FF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E3FFC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801E4000
  c->ctr=c->r[12]; // 801E4004
  if (true) { c->lr=0x801E400Cu; dispatch(c,c->ctr); } // 801E4008
  cmps(c,0,(int32_t)c->r[3],0); // 801E400C
  if (crb(c,2)) { goto L_801E404C; } // 801E4010
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E4014
  c->r[3]=c->r[31]|c->r[31]; // 801E4018
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801E401C
  c->ctr=c->r[12]; // 801E4020
  if (true) { c->lr=0x801E4028u; dispatch(c,c->ctr); } // 801E4024
  cmps(c,0,(int32_t)c->r[3],0); // 801E4028
  if (crb(c,2)) { goto L_801E404C; } // 801E402C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E4030
  c->r[3]=c->r[31]|c->r[31]; // 801E4034
  c->r[12]=R32(c->r[12]+0x00000020u); // 801E4038
  c->ctr=c->r[12]; // 801E403C
  if (true) { c->lr=0x801E4044u; dispatch(c,c->ctr); } // 801E4040
  cmps(c,0,(int32_t)c->r[3],0); // 801E4044
  if (crb(c,2)) { goto L_801E4064; } // 801E4048
L_801E404C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E404C
  c->r[3]=c->r[29]|c->r[29]; // 801E4050
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4054
  c->ctr=c->r[12]; // 801E4058
  if (true) { c->lr=0x801E4060u; dispatch(c,c->ctr); } // 801E405C
  goto L_801E4180; // 801E4060
L_801E4064:;
  c->r[5]=R32(c->r[29]+0x00000060u); // 801E4064
  c->r[4]=R32(c->r[29]+0x00000064u); // 801E4068
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801E406C
  if (crb(c,0)) { goto L_801E407C; } // 801E4070
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4074
  goto L_801E40B8; // 801E4078
L_801E407C:;
  c->r[3]=c->r[4]^0x80000000u; // 801E407C
  c->r[0]=c->r[5]^0x80000000u; // 801E4080
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801E4084
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E4088
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E408C
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4090
  {uint32_t ea=c->r[29]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4094
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E4098
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E409C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E40A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E40A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E40A8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E40AC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E40B0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801E40B4
L_801E40B8:;
  c->r[0]=c->r[30]^0x80000000u; // 801E40B8
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E40BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E40C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801E40C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E40C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E40CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E40D0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E40D4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801E40D8
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 801E40DC
  if (crb(c,0)) { goto L_801E40EC; } // 801E40E0
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E40E4
  goto L_801E4124; // 801E40E8
L_801E40EC:;
  c->r[3]=c->r[4]^0x80000000u; // 801E40EC
  c->r[0]=c->r[5]^0x80000000u; // 801E40F0
  W32(c->r[1]+0x00000014u,c->r[3]); // 801E40F4
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E40F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E40FC
  {uint32_t ea=c->r[29]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4100
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801E4104
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E4108
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801E410C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E4110
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E4114
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E4118
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E411C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801E4120
L_801E4124:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801E4124
  c->r[0]=0u+0x00000000u; // 801E4128
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E412C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4130
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[1]);} // 801E4134
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 801E4138
  W32(c->r[29]+0x00000060u,c->r[6]); // 801E413C
  W32(c->r[29]+0x00000064u,c->r[0]); // 801E4140
  W8(c->r[29]+0x0000008Cu,c->r[0]); // 801E4144
  if (crb(c,2)) { goto L_801E4154; } // 801E4148
  c->r[4]=c->r[29]|c->r[29]; // 801E414C
  c->lr=0x801E4154u; f_801F29D0(c); // 801E4150
L_801E4154:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E4154
  c->r[3]=c->r[29]|c->r[29]; // 801E4158
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801E415C
  c->ctr=c->r[12]; // 801E4160
  if (true) { c->lr=0x801E4168u; dispatch(c,c->ctr); } // 801E4164
  c->r[3]=0u+0x00000000u; // 801E4168
  c->r[0]=0u+0x00000001u; // 801E416C
  W8(c->r[29]+0x0000007Au,c->r[3]); // 801E4170
  W32(c->r[29]+0x0000007Cu,c->r[3]); // 801E4174
  W8(c->r[29]+0x00000080u,c->r[3]); // 801E4178
  W8(c->r[29]+0x0000007Bu,c->r[0]); // 801E417C
L_801E4180:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E4180
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E4184
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E4188
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E418C
  c->lr=c->r[0]; // 801E4190
  c->r[1]=c->r[1]+0x00000030u; // 801E4194
  return; // 801E4198
}

// fn_801E419C
void f_801E419C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E419C
  c->r[0]=0u+0x43300000u; // 801E41A0
  cmps(c,0,(int32_t)c->r[4],0); // 801E41A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E41A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E41AC
  if (crb(c,2)) { goto L_801E42D8; } // 801E41B0
  c->r[0]=R32(c->r[3]+0x0000007Cu); // 801E41B4
  cmps(c,0,(int32_t)c->r[0],2); // 801E41B8
  if (crb(c,2)) { goto L_801E43F8; } // 801E41BC
  if (!crb(c,0)) { goto L_801E41D0; } // 801E41C0
  cmps(c,0,(int32_t)c->r[0],0); // 801E41C4
  if (!crb(c,0)) { goto L_801E41D8; } // 801E41C8
  goto L_801E43F8; // 801E41CC
L_801E41D0:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E41D0
  if (!crb(c,0)) { goto L_801E43F8; } // 801E41D4
L_801E41D8:;
  c->r[7]=R32(c->r[3]+0x00000070u); // 801E41D8
  c->r[6]=R32(c->r[3]+0x00000074u); // 801E41DC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 801E41E0
  if (crb(c,0)) { goto L_801E41F0; } // 801E41E4
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801E41E8
  goto L_801E422C; // 801E41EC
L_801E41F0:;
  c->r[4]=c->r[6]^0x80000000u; // 801E41F0
  c->r[0]=c->r[7]^0x80000000u; // 801E41F4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E41F8
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E41FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E4200
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4204
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4208
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E420C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4210
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E4214
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E4218
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E421C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E4220
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E4224
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801E4228
L_801E422C:;
  c->r[0]=c->r[5]^0x80000000u; // 801E422C
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[1]=RF64(ea);} // 801E4230
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E4234
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E4238
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801E423C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801E4240
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E4244
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801E4248
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801E424C
  cmps(c,0,(int32_t)c->r[5],0); // 801E4250
  if (crb(c,1)) { goto L_801E425C; } // 801E4254
  c->r[5]=0u+0x00000001u; // 801E4258
L_801E425C:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 801E425C
  if (crb(c,0)) { goto L_801E426C; } // 801E4260
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4264
  goto L_801E42A8; // 801E4268
L_801E426C:;
  c->r[4]=c->r[6]^0x80000000u; // 801E426C
  c->r[0]=c->r[7]^0x80000000u; // 801E4270
  W32(c->r[1]+0x00000014u,c->r[4]); // 801E4274
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E4278
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E427C
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4280
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4284
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E4288
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E428C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E4290
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E4294
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E4298
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E429C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E42A0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801E42A4
L_801E42A8:;
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E42A8
  c->r[4]=0u+0x00000000u; // 801E42AC
  c->r[0]=0u+0x00000001u; // 801E42B0
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 801E42B4
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E42B8
  W32(c->r[3]+0x00000070u,c->r[5]); // 801E42BC
  W32(c->r[3]+0x00000074u,c->r[4]); // 801E42C0
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 801E42C4
  W8(c->r[3]+0x00000080u,c->r[4]); // 801E42C8
  goto L_801E43F8; // 801E42CC
  goto L_801E43F8; // 801E42D0
  goto L_801E43F8; // 801E42D4
L_801E42D8:;
  c->r[0]=R32(c->r[3]+0x0000007Cu); // 801E42D8
  cmps(c,0,(int32_t)c->r[0],0); // 801E42DC
  if (crb(c,2)) { goto L_801E43F8; } // 801E42E0
  if (crb(c,0)) { goto L_801E43F8; } // 801E42E4
  cmps(c,0,(int32_t)c->r[0],4); // 801E42E8
  if (!crb(c,0)) { goto L_801E43F8; } // 801E42EC
  goto L_801E42F8; // 801E42F0
  goto L_801E43F8; // 801E42F4
L_801E42F8:;
  c->r[7]=R32(c->r[3]+0x00000070u); // 801E42F8
  c->r[6]=R32(c->r[3]+0x00000074u); // 801E42FC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 801E4300
  if (crb(c,0)) { goto L_801E4310; } // 801E4304
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4308
  goto L_801E434C; // 801E430C
L_801E4310:;
  c->r[4]=c->r[6]^0x80000000u; // 801E4310
  c->r[0]=c->r[7]^0x80000000u; // 801E4314
  W32(c->r[1]+0x00000014u,c->r[4]); // 801E4318
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E431C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E4320
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4324
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4328
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E432C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E4330
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E4334
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E4338
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E433C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E4340
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E4344
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801E4348
L_801E434C:;
  c->r[0]=c->r[5]^0x80000000u; // 801E434C
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4350
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4354
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801E4358
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[2]=RF64(ea);} // 801E435C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E4360
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E4364
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801E4368
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E436C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801E4370
  c->r[8]=R32(c->r[1]+0x0000001Cu); // 801E4374
  cmps(c,0,(int32_t)c->r[8],0); // 801E4378
  if (crb(c,1)) { goto L_801E4384; } // 801E437C
  c->r[8]=0u+0x00000001u; // 801E4380
L_801E4384:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 801E4384
  if (crb(c,0)) { goto L_801E4394; } // 801E4388
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E438C
  goto L_801E43D0; // 801E4390
L_801E4394:;
  c->r[4]=c->r[6]^0x80000000u; // 801E4394
  c->r[0]=c->r[7]^0x80000000u; // 801E4398
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E439C
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E43A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E43A4
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E43A8
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E43AC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E43B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E43B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E43B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E43BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E43C0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E43C4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E43C8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801E43CC
L_801E43D0:;
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E43D0
  c->r[5]=0u+0x00000000u; // 801E43D4
  c->r[4]=0u+0x00000003u; // 801E43D8
  c->r[0]=0u+0x00000001u; // 801E43DC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 801E43E0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E43E4
  W32(c->r[3]+0x00000070u,c->r[8]); // 801E43E8
  W32(c->r[3]+0x00000074u,c->r[5]); // 801E43EC
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 801E43F0
  W8(c->r[3]+0x00000080u,c->r[0]); // 801E43F4
L_801E43F8:;
  c->r[1]=c->r[1]+0x00000020u; // 801E43F8
  return; // 801E43FC
}

// fn_801E4400
void f_801E4400(Ctx* __restrict c) {
  c->r[0]=0u-c->r[4]; // 801E4400
  W32(c->r[3]+0x00000084u,c->r[4]); // 801E4404
  c->r[0]=c->r[0]&~c->r[4]; // 801E4408
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E440C
  W8(c->r[3]+0x0000007Au,c->r[0]); // 801E4410
  return; // 801E4414
}

// fn_801E4418
void f_801E4418(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4418
  c->r[0]=c->lr; // 801E441C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801E4420
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801E4424
  W32(c->r[1]+0x00000098u,c->r[30]); // 801E4428
  W32(c->r[1]+0x00000094u,c->r[29]); // 801E442C
  c->r[29]=c->r[3]|c->r[3]; // 801E4430
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E4434
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E4438
  c->ctr=c->r[12]; // 801E443C
  if (true) { c->lr=0x801E4444u; dispatch(c,c->ctr); } // 801E4440
  c->r[0]=R8(c->r[29]+0x0000007Au); // 801E4444
  c->r[31]=c->r[3]|c->r[3]; // 801E4448
  cmps(c,0,(int32_t)c->r[0],0); // 801E444C
  if (crb(c,2)) { goto L_801E44C0; } // 801E4450
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E4454
  c->r[12]=R32(c->r[12]+0x00000018u); // 801E4458
  c->ctr=c->r[12]; // 801E445C
  if (true) { c->lr=0x801E4464u; dispatch(c,c->ctr); } // 801E4460
  cmps(c,0,(int32_t)c->r[3],0); // 801E4464
  if (crb(c,2)) { goto L_801E44C0; } // 801E4468
  c->r[3]=R32(c->r[29]+0x00000084u); // 801E446C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4470
  if (!crb(c,2)) { goto L_801E44B8; } // 801E4474
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801E4478
  cmps(c,0,(int32_t)c->r[0],0); // 801E447C
  if (crb(c,2)) { goto L_801E448C; } // 801E4480
  cmps(c,0,(int32_t)c->r[0],3); // 801E4484
  if (!crb(c,2)) { goto L_801E44C0; } // 801E4488
L_801E448C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E448C
  c->r[3]=c->r[29]|c->r[29]; // 801E4490
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E4494
  c->ctr=c->r[12]; // 801E4498
  if (true) { c->lr=0x801E44A0u; dispatch(c,c->ctr); } // 801E449C
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E44A0
  c->r[3]=c->r[29]|c->r[29]; // 801E44A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E44A8
  c->ctr=c->r[12]; // 801E44AC
  if (true) { c->lr=0x801E44B4u; dispatch(c,c->ctr); } // 801E44B0
  goto L_801E4A00; // 801E44B4
L_801E44B8:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E44B8
  W32(c->r[29]+0x00000084u,c->r[0]); // 801E44BC
L_801E44C0:;
  c->r[0]=R8(c->r[29]+0x00000079u); // 801E44C0
  c->r[30]=0u+0x00000000u; // 801E44C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E44C8
  if (!crb(c,2)) { goto L_801E44FC; } // 801E44CC
  c->r[0]=R8(c->r[29]+0x00000078u); // 801E44D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E44D4
  if (crb(c,2)) { goto L_801E4A00; } // 801E44D8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E44DC
  c->r[3]=c->r[29]|c->r[29]; // 801E44E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E44E4
  c->ctr=c->r[12]; // 801E44E8
  if (true) { c->lr=0x801E44F0u; dispatch(c,c->ctr); } // 801E44EC
  cmps(c,0,(int32_t)c->r[3],0); // 801E44F0
  if (crb(c,2)) { goto L_801E4A00; } // 801E44F4
  c->r[30]=0u+0x00000001u; // 801E44F8
L_801E44FC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E44FC
  c->r[3]=c->r[31]|c->r[31]; // 801E4500
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801E4504
  c->ctr=c->r[12]; // 801E4508
  if (true) { c->lr=0x801E4510u; dispatch(c,c->ctr); } // 801E450C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4510
  if (crb(c,2)) { goto L_801E4530; } // 801E4514
  c->r[3]=R32(c->r[29]+0x00000088u); // 801E4518
  c->r[0]=0u+0xFFFFFFFFu; // 801E451C
  cmpu(c,0,c->r[3],c->r[0]); // 801E4520
  if (!crb(c,0)) { goto L_801E4530; } // 801E4524
  c->r[0]=c->r[3]+0x00000001u; // 801E4528
  W32(c->r[29]+0x00000088u,c->r[0]); // 801E452C
L_801E4530:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E4530
  c->r[3]=c->r[31]|c->r[31]; // 801E4534
  c->r[12]=R32(c->r[12]+0x00000018u); // 801E4538
  c->ctr=c->r[12]; // 801E453C
  if (true) { c->lr=0x801E4544u; dispatch(c,c->ctr); } // 801E4540
  cmps(c,0,(int32_t)c->r[3],0); // 801E4544
  if (!crb(c,2)) { goto L_801E4564; } // 801E4548
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E454C
  c->r[3]=c->r[29]|c->r[29]; // 801E4550
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4554
  c->ctr=c->r[12]; // 801E4558
  if (true) { c->lr=0x801E4560u; dispatch(c,c->ctr); } // 801E455C
  goto L_801E4A00; // 801E4560
L_801E4564:;
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801E4564
  cmps(c,0,(int32_t)c->r[0],1); // 801E4568
  if (crb(c,2)) { goto L_801E4578; } // 801E456C
  cmps(c,0,(int32_t)c->r[0],3); // 801E4570
  if (!crb(c,2)) { goto L_801E4594; } // 801E4574
L_801E4578:;
  c->r[3]=R32(c->r[29]+0x00000074u); // 801E4578
  c->r[0]=R32(c->r[29]+0x00000070u); // 801E457C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E4580
  if (!crb(c,0)) { goto L_801E45B0; } // 801E4584
  c->r[0]=c->r[3]+0x00000001u; // 801E4588
  W32(c->r[29]+0x00000074u,c->r[0]); // 801E458C
  goto L_801E45B0; // 801E4590
L_801E4594:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E4594
  if (!crb(c,2)) { goto L_801E45B0; } // 801E4598
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E459C
  c->r[3]=c->r[29]|c->r[29]; // 801E45A0
  c->r[12]=R32(c->r[12]+0x00000030u); // 801E45A4
  c->ctr=c->r[12]; // 801E45A8
  if (true) { c->lr=0x801E45B0u; dispatch(c,c->ctr); } // 801E45AC
L_801E45B0:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 801E45B0
  cmps(c,0,(int32_t)c->r[3],0); // 801E45B4
  if (crb(c,2)) { goto L_801E45D4; } // 801E45B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E45BC
  c->r[5]=c->r[29]|c->r[29]; // 801E45C0
  c->r[4]=R32(c->r[29]+0x00000028u); // 801E45C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E45C8
  c->ctr=c->r[12]; // 801E45CC
  if (true) { c->lr=0x801E45D4u; dispatch(c,c->ctr); } // 801E45D0
L_801E45D4:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801E45D4
  cmps(c,0,(int32_t)c->r[0],0); // 801E45D8
  if (crb(c,2)) { goto L_801E48B0; } // 801E45DC
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E45E0
  c->r[5]=c->r[1]+0x0000003Cu; // 801E45E4
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E45E8
  c->r[0]=c->r[1]+0x00000084u; // 801E45EC
  c->r[3]=0u+0x00000000u; // 801E45F0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801E45F4
  cmpu(c,1,c->r[5],c->r[0]); // 801E45F8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801E45FC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801E4600
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801E4604
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801E4608
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801E460C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801E4610
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801E4614
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801E4618
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801E461C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801E4620
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801E4624
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801E4628
  if (!crb(c,4)) { goto L_801E47FC; } // 801E462C
  c->r[7]=c->r[0]-c->r[5]; // 801E4630
  c->r[3]=0u+0x2AAB0000u; // 801E4634
  c->r[8]=c->r[7]+0x00000017u; // 801E4638
  c->r[4]=c->r[1]+0xFFFFFFC4u; // 801E463C
  c->r[0]=c->r[3]+0xFFFFAAABu; // 801E4640
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 801E4644
  c->r[0]=sraw(c,c->r[0],2); // 801E4648
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E464C
  c->r[9]=c->r[0]+c->r[3]; // 801E4650
  c->r[10]=c->r[9]+0x00000001u; // 801E4654
  cmps(c,0,(int32_t)c->r[10],8); // 801E4658
  if (!crb(c,1)) { goto L_801E47B4; } // 801E465C
  c->r[3]=0u+0x00000000u; // 801E4660
  c->r[6]=0u+0x00000000u; // 801E4664
  if (crb(c,5)) { goto L_801E4690; } // 801E4668
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 801E466C
  c->r[7]=0u+0x00000001u; // 801E4670
  if (!crb(c,2)) { goto L_801E4684; } // 801E4674
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 801E4678
  if (crb(c,2)) { goto L_801E4684; } // 801E467C
  c->r[7]=0u+0x00000000u; // 801E4680
L_801E4684:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E4684
  if (crb(c,2)) { goto L_801E4690; } // 801E4688
  c->r[6]=0u+0x00000001u; // 801E468C
L_801E4690:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E4690
  if (crb(c,2)) { goto L_801E46C0; } // 801E4694
  c->r[7]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[7]); // 801E4698
  c->r[6]=0u+0x00000001u; // 801E469C
  if (!crb(c,2)) { goto L_801E46B4; } // 801E46A0
  c->r[0]=rotl(c->r[10],0)&0x80000000u; // 801E46A4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801E46A8
  if (crb(c,2)) { goto L_801E46B4; } // 801E46AC
  c->r[6]=0u+0x00000000u; // 801E46B0
L_801E46B4:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E46B4
  if (crb(c,2)) { goto L_801E46C0; } // 801E46B8
  c->r[3]=0u+0x00000001u; // 801E46BC
L_801E46C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E46C0
  if (crb(c,2)) { goto L_801E47B4; } // 801E46C4
  c->r[3]=c->r[4]+0x000000BFu; // 801E46C8
  c->r[0]=0u+0x000000C0u; // 801E46CC
  c->r[3]=c->r[3]-c->r[5]; // 801E46D0
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E46D4
  c->r[3]=divwu(c->r[3],c->r[0]); // 801E46D8
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E46DC
  c->ctr=c->r[3]; // 801E46E0
  cmpu(c,0,c->r[5],c->r[4]); // 801E46E4
  if (!crb(c,0)) { goto L_801E47B4; } // 801E46E8
L_801E46EC:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 801E46EC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 801E46F0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 801E46F4
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E46F8
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 801E46FC
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 801E4700
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 801E4704
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[1]);} // 801E4708
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[0]);} // 801E470C
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[0]);} // 801E4710
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 801E4714
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 801E4718
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[1]);} // 801E471C
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[1]);} // 801E4720
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[0]);} // 801E4724
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 801E4728
  {uint32_t ea=c->r[5]+0x00000040u; WF32(ea,c->f[0]);} // 801E472C
  {uint32_t ea=c->r[5]+0x00000044u; WF32(ea,c->f[0]);} // 801E4730
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[1]);} // 801E4734
  {uint32_t ea=c->r[5]+0x0000004Cu; WF32(ea,c->f[1]);} // 801E4738
  {uint32_t ea=c->r[5]+0x00000050u; WF32(ea,c->f[0]);} // 801E473C
  {uint32_t ea=c->r[5]+0x00000054u; WF32(ea,c->f[0]);} // 801E4740
  {uint32_t ea=c->r[5]+0x00000058u; WF32(ea,c->f[0]);} // 801E4744
  {uint32_t ea=c->r[5]+0x0000005Cu; WF32(ea,c->f[0]);} // 801E4748
  {uint32_t ea=c->r[5]+0x00000060u; WF32(ea,c->f[1]);} // 801E474C
  {uint32_t ea=c->r[5]+0x00000064u; WF32(ea,c->f[1]);} // 801E4750
  {uint32_t ea=c->r[5]+0x00000068u; WF32(ea,c->f[0]);} // 801E4754
  {uint32_t ea=c->r[5]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E4758
  {uint32_t ea=c->r[5]+0x00000070u; WF32(ea,c->f[0]);} // 801E475C
  {uint32_t ea=c->r[5]+0x00000074u; WF32(ea,c->f[0]);} // 801E4760
  {uint32_t ea=c->r[5]+0x00000078u; WF32(ea,c->f[1]);} // 801E4764
  {uint32_t ea=c->r[5]+0x0000007Cu; WF32(ea,c->f[1]);} // 801E4768
  {uint32_t ea=c->r[5]+0x00000080u; WF32(ea,c->f[0]);} // 801E476C
  {uint32_t ea=c->r[5]+0x00000084u; WF32(ea,c->f[0]);} // 801E4770
  {uint32_t ea=c->r[5]+0x00000088u; WF32(ea,c->f[0]);} // 801E4774
  {uint32_t ea=c->r[5]+0x0000008Cu; WF32(ea,c->f[0]);} // 801E4778
  {uint32_t ea=c->r[5]+0x00000090u; WF32(ea,c->f[1]);} // 801E477C
  {uint32_t ea=c->r[5]+0x00000094u; WF32(ea,c->f[1]);} // 801E4780
  {uint32_t ea=c->r[5]+0x00000098u; WF32(ea,c->f[0]);} // 801E4784
  {uint32_t ea=c->r[5]+0x0000009Cu; WF32(ea,c->f[0]);} // 801E4788
  {uint32_t ea=c->r[5]+0x000000A0u; WF32(ea,c->f[0]);} // 801E478C
  {uint32_t ea=c->r[5]+0x000000A4u; WF32(ea,c->f[0]);} // 801E4790
  {uint32_t ea=c->r[5]+0x000000A8u; WF32(ea,c->f[1]);} // 801E4794
  {uint32_t ea=c->r[5]+0x000000ACu; WF32(ea,c->f[1]);} // 801E4798
  {uint32_t ea=c->r[5]+0x000000B0u; WF32(ea,c->f[0]);} // 801E479C
  {uint32_t ea=c->r[5]+0x000000B4u; WF32(ea,c->f[0]);} // 801E47A0
  {uint32_t ea=c->r[5]+0x000000B8u; WF32(ea,c->f[0]);} // 801E47A4
  {uint32_t ea=c->r[5]+0x000000BCu; WF32(ea,c->f[0]);} // 801E47A8
  c->r[5]=c->r[5]+0x000000C0u; // 801E47AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E46EC; } // 801E47B0
L_801E47B4:;
  c->r[4]=c->r[1]+0x00000084u; // 801E47B4
  c->r[0]=0u+0x00000018u; // 801E47B8
  c->r[3]=c->r[4]+0x00000017u; // 801E47BC
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E47C0
  c->r[3]=c->r[3]-c->r[5]; // 801E47C4
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E47C8
  c->r[3]=divwu(c->r[3],c->r[0]); // 801E47CC
  c->ctr=c->r[3]; // 801E47D0
  cmpu(c,0,c->r[5],c->r[4]); // 801E47D4
  if (!crb(c,0)) { goto L_801E47FC; } // 801E47D8
L_801E47DC:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 801E47DC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 801E47E0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 801E47E4
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E47E8
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 801E47EC
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 801E47F0
  c->r[5]=c->r[5]+0x00000018u; // 801E47F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E47DC; } // 801E47F8
L_801E47FC:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801E47FC
  c->r[7]=c->r[1]+0x00000008u; // 801E4800
  c->r[4]=R32(c->r[29]+0x00000028u); // 801E4804
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E4808
  c->r[5]=R32(c->r[29]+0x00000090u); // 801E480C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E4810
  c->r[6]=R8(c->r[29]+0x0000008Du); // 801E4814
  c->ctr=c->r[12]; // 801E4818
  if (true) { c->lr=0x801E4820u; dispatch(c,c->ctr); } // 801E481C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4820
  c->r[4]=c->r[31]|c->r[31]; // 801E4824
  c->r[3]=c->r[1]+0x00000008u; // 801E4828
  c->r[5]=0u+0x00000000u; // 801E482C
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 801E4830
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4834
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 801E4838
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E483C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 801E4840
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4844
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 801E4848
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E484C
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 801E4850
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4854
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 801E4858
  c->r[0]=R32(c->r[1]+0x00000020u); // 801E485C
  W32(c->r[29]+0x00000048u,c->r[0]); // 801E4860
  goto L_801E48A4; // 801E4864
L_801E4868:;
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4868
  c->r[5]=c->r[5]+0x00000001u; // 801E486C
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E4870
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4874
  {uint32_t ea=c->r[4]+0x00000070u; WF32(ea,c->f[0]);} // 801E4878
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E487C
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[0]);} // 801E4880
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4884
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[0]);} // 801E4888
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E488C
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 801E4890
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4894
  c->r[3]=c->r[3]+0x00000018u; // 801E4898
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[0]);} // 801E489C
  c->r[4]=c->r[4]+0x00000018u; // 801E48A0
L_801E48A4:;
  c->r[0]=R8(c->r[29]+0x0000008Du); // 801E48A4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E48A8
  if (crb(c,0)) { IRQCHK(c); goto L_801E4868; } // 801E48AC
L_801E48B0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801E48B0
  cmps(c,0,(int32_t)c->r[3],0); // 801E48B4
  if (crb(c,2)) { goto L_801E48D4; } // 801E48B8
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E48BC
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[0]);} // 801E48C0
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E48C4
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 801E48C8
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E48CC
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 801E48D0
L_801E48D4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E48D4
  c->r[3]=c->r[29]|c->r[29]; // 801E48D8
  c->r[12]=R32(c->r[12]+0x00000034u); // 801E48DC
  c->ctr=c->r[12]; // 801E48E0
  if (true) { c->lr=0x801E48E8u; dispatch(c,c->ctr); } // 801E48E4
  c->r[0]=R8(c->r[29]+0x0000007Bu); // 801E48E8
  cmps(c,0,(int32_t)c->r[0],0); // 801E48EC
  if (crb(c,2)) { goto L_801E4924; } // 801E48F0
  c->r[3]=R32(c->r[29]+0x00000064u); // 801E48F4
  c->r[0]=R32(c->r[29]+0x00000060u); // 801E48F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E48FC
  if (crb(c,0)) { goto L_801E4924; } // 801E4900
  c->r[0]=0u+0x00000000u; // 801E4904
  c->r[3]=c->r[29]|c->r[29]; // 801E4908
  W8(c->r[29]+0x0000007Bu,c->r[0]); // 801E490C
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E4910
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4914
  c->ctr=c->r[12]; // 801E4918
  if (true) { c->lr=0x801E4920u; dispatch(c,c->ctr); } // 801E491C
  goto L_801E4A00; // 801E4920
L_801E4924:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E4924
  if (crb(c,2)) { goto L_801E4974; } // 801E4928
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E492C
  c->r[3]=c->r[31]|c->r[31]; // 801E4930
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E4934
  c->ctr=c->r[12]; // 801E4938
  if (true) { c->lr=0x801E4940u; dispatch(c,c->ctr); } // 801E493C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4940
  if (crb(c,2)) { goto L_801E495C; } // 801E4944
  c->r[3]=0u+0x00000001u; // 801E4948
  c->r[0]=0u+0x00000000u; // 801E494C
  W8(c->r[29]+0x00000079u,c->r[3]); // 801E4950
  W8(c->r[29]+0x00000078u,c->r[0]); // 801E4954
  goto L_801E4974; // 801E4958
L_801E495C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801E495C
  c->r[3]=c->r[29]|c->r[29]; // 801E4960
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4964
  c->ctr=c->r[12]; // 801E4968
  if (true) { c->lr=0x801E4970u; dispatch(c,c->ctr); } // 801E496C
  goto L_801E4A00; // 801E4970
L_801E4974:;
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801E4974
  cmps(c,0,(int32_t)c->r[0],1); // 801E4978
  if (!crb(c,2)) { goto L_801E49B4; } // 801E497C
  c->r[3]=R32(c->r[29]+0x00000074u); // 801E4980
  c->r[0]=R32(c->r[29]+0x00000070u); // 801E4984
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E4988
  if (crb(c,0)) { goto L_801E49D4; } // 801E498C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E4990
  c->r[3]=c->r[31]|c->r[31]; // 801E4994
  c->r[4]=0u+0x00000001u; // 801E4998
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E499C
  c->ctr=c->r[12]; // 801E49A0
  if (true) { c->lr=0x801E49A8u; dispatch(c,c->ctr); } // 801E49A4
  c->r[0]=0u+0x00000002u; // 801E49A8
  W32(c->r[29]+0x0000007Cu,c->r[0]); // 801E49AC
  goto L_801E49D4; // 801E49B0
L_801E49B4:;
  cmps(c,0,(int32_t)c->r[0],3); // 801E49B4
  if (!crb(c,2)) { goto L_801E49D4; } // 801E49B8
  c->r[3]=R32(c->r[29]+0x00000074u); // 801E49BC
  c->r[0]=R32(c->r[29]+0x00000070u); // 801E49C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E49C4
  if (crb(c,0)) { goto L_801E49D4; } // 801E49C8
  c->r[0]=0u+0x00000000u; // 801E49CC
  W32(c->r[29]+0x0000007Cu,c->r[0]); // 801E49D0
L_801E49D4:;
  c->r[0]=R8(c->r[29]+0x00000080u); // 801E49D4
  cmps(c,0,(int32_t)c->r[0],0); // 801E49D8
  if (crb(c,2)) { goto L_801E4A00; } // 801E49DC
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E49E0
  c->r[3]=c->r[31]|c->r[31]; // 801E49E4
  c->r[4]=0u+0x00000000u; // 801E49E8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E49EC
  c->ctr=c->r[12]; // 801E49F0
  if (true) { c->lr=0x801E49F8u; dispatch(c,c->ctr); } // 801E49F4
  c->r[0]=0u+0x00000000u; // 801E49F8
  W8(c->r[29]+0x00000080u,c->r[0]); // 801E49FC
L_801E4A00:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801E4A00
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801E4A04
  c->r[30]=R32(c->r[1]+0x00000098u); // 801E4A08
  c->r[29]=R32(c->r[1]+0x00000094u); // 801E4A0C
  c->lr=c->r[0]; // 801E4A10
  c->r[1]=c->r[1]+0x000000A0u; // 801E4A14
  return; // 801E4A18
}

// fn_801E4A1C
void f_801E4A1C(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000064u); // 801E4A1C
  c->r[0]=R32(c->r[3]+0x00000060u); // 801E4A20
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E4A24
  if (!crb(c,0)) { goto L_801E4A34; } // 801E4A28
  c->r[0]=c->r[4]+0x00000001u; // 801E4A2C
  W32(c->r[3]+0x00000064u,c->r[0]); // 801E4A30
L_801E4A34:;
  c->r[4]=R32(c->r[3]+0x000000A0u); // 801E4A34
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 801E4A38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E4A3C
  if (!crb(c,0)) return; // 801E4A40
  c->r[0]=c->r[4]+0x00000001u; // 801E4A44
  W32(c->r[3]+0x000000A0u,c->r[0]); // 801E4A48
  return; // 801E4A4C
}

// fn_801E4A50
void f_801E4A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4A50
  c->r[0]=c->lr; // 801E4A54
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801E4A58
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 801E4A5C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 801E4A60
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 801E4A64
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 801E4A68
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 801E4A6C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 801E4A70
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 801E4A74
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 801E4A78
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 801E4A7C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 801E4A80
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[26]);} // 801E4A84
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,26,ea,0,0);} // 801E4A88
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[25]);} // 801E4A8C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,25,ea,0,0);} // 801E4A90
  c->r[11]=c->r[1]+0x00000050u; // 801E4A94
  c->lr=0x801E4A9Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4A98
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801E4A9C
  c->r[0]=0u+0x43300000u; // 801E4AA0
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4AA4
  c->r[31]=c->r[3]|c->r[3]; // 801E4AA8
  c->r[6]=R32(c->r[3]+0x00000010u); // 801E4AAC
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801E4AB0
  c->r[5]=R32(c->r[3]+0x0000009Cu); // 801E4AB4
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4AB8
  c->r[4]=R32(c->r[3]+0x000000A0u); // 801E4ABC
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801E4AC0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801E4AC4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801E4AC8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801E4ACC
  if (crb(c,0)) { goto L_801E4ADC; } // 801E4AD0
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4AD4
  goto L_801E4B18; // 801E4AD8
L_801E4ADC:;
  c->r[4]=c->r[4]^0x80000000u; // 801E4ADC
  c->r[0]=c->r[5]^0x80000000u; // 801E4AE0
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801E4AE4
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E4AE8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801E4AEC
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4AF0
  {uint32_t ea=c->r[3]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4AF4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E4AF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E4AFC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E4B00
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801E4B04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E4B08
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E4B0C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E4B10
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801E4B14
L_801E4B18:;
  c->r[5]=R32(c->r[3]+0x00000060u); // 801E4B18
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801E4B1C
  c->r[0]=R32(c->r[3]+0x00000064u); // 801E4B20
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801E4B24
  if (crb(c,0)) { goto L_801E4B34; } // 801E4B28
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4B2C
  goto L_801E4B70; // 801E4B30
L_801E4B34:;
  c->r[4]=c->r[0]^0x80000000u; // 801E4B34
  c->r[0]=c->r[5]^0x80000000u; // 801E4B38
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801E4B3C
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E4B40
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801E4B44
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4B48
  {uint32_t ea=c->r[3]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4B4C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E4B50
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E4B54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E4B58
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801E4B5C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E4B60
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E4B64
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E4B68
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801E4B6C
L_801E4B70:;
  c->r[5]=R32(c->r[3]+0x00000070u); // 801E4B70
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801E4B74
  c->r[0]=R32(c->r[3]+0x00000074u); // 801E4B78
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801E4B7C
  if (crb(c,0)) { goto L_801E4B8C; } // 801E4B80
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4B84
  goto L_801E4BC8; // 801E4B88
L_801E4B8C:;
  c->r[4]=c->r[0]^0x80000000u; // 801E4B8C
  c->r[0]=c->r[5]^0x80000000u; // 801E4B90
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801E4B94
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E4B98
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801E4B9C
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4BA0
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4BA4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801E4BA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E4BAC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E4BB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801E4BB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E4BB8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E4BBC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E4BC0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801E4BC4
L_801E4BC8:;
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801E4BC8
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[28]=c->ps1[28]=RF32(ea);} // 801E4BCC
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4BD0
  c->r[29]=c->r[31]|c->r[31]; // 801E4BD4
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[30]=c->ps1[30]=RF32(ea);} // 801E4BD8
  c->r[30]=c->r[1]+0x00000018u; // 801E4BDC
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4BE0
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801E4BE4
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4BE8
  c->r[27]=0u+0x00000000u; // 801E4BEC
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 801E4BF0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4BF4
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801E4BF8
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4BFC
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 801E4C00
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4C04
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801E4C08
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[29]=c->ps1[29]=RF32(ea);} // 801E4C0C
  {uint32_t ea=c->r[3]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4C10
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 801E4C14
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[1]); // 801E4C18
  {uint32_t ea=c->r[3]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4C1C
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801E4C20
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[2]); // 801E4C24
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4C28
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[27]=c->ps1[27]=RF32(ea);} // 801E4C2C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4C30
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[3]); // 801E4C34
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[26]=c->ps1[26]=RF32(ea);} // 801E4C38
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4C3C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[1]); // 801E4C40
  {uint32_t ea=c->r[6]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4C44
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 801E4C48
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[0]); // 801E4C4C
  {uint32_t ea=c->r[6]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4C50
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[1]); // 801E4C54
  c->r[28]=R32(c->r[3]+0x000000B8u); // 801E4C58
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[0]); // 801E4C5C
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[25]=c->ps1[25]=RF32(ea);} // 801E4C60
L_801E4C64:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[25]);} // 801E4C64
  c->r[4]=c->r[27]|c->r[27]; // 801E4C68
  c->r[3]=R32(c->r[31]+0x00000010u); // 801E4C6C
  c->lr=0x801E4C74u; f_801F29C0(c); // 801E4C70
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4C74
  c->r[27]=c->r[27]+0x00000001u; // 801E4C78
  {uint32_t ea=c->r[29]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4C7C
  cmps(c,0,(int32_t)c->r[27],4); // 801E4C80
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801E4C84
  c->r[29]=c->r[29]+0x00000004u; // 801E4C88
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801E4C8C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801E4C90
  c->r[30]=c->r[30]+0x00000004u; // 801E4C94
  if (crb(c,0)) { IRQCHK(c); goto L_801E4C64; } // 801E4C98
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[5]=c->ps1[5]=RF32(ea);} // 801E4C9C
  c->r[3]=c->r[31]|c->r[31]; // 801E4CA0
  c->r[4]=R32(c->r[31]+0x00000010u); // 801E4CA4
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4CA8
  c->f[25]=c->f[5]; // 801E4CAC
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4CB0
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[2]); // 801E4CB4
  {uint32_t ea=c->r[4]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E4CB8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 801E4CBC
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 801E4CC0
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4CC4
  {uint32_t ea=c->r[4]+0x00000054u; c->f[7]=c->ps1[7]=RF32(ea);} // 801E4CC8
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 801E4CCC
  {uint32_t ea=c->r[4]+0x00000058u; c->f[6]=c->ps1[6]=RF32(ea);} // 801E4CD0
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E4CD4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801E4CD8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 801E4CDC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[7]); // 801E4CE0
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E4CE4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[6]); // 801E4CE8
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4CEC
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[4]); // 801E4CF0
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801E4CF4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 801E4CF8
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 801E4CFC
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E4D00
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 801E4D04
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[4]); // 801E4D08
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801E4D0C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801E4D10
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801E4D14
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801E4D18
  c->ctr=c->r[12]; // 801E4D1C
  if (true) { c->lr=0x801E4D24u; dispatch(c,c->ctr); } // 801E4D20
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 801E4D24
  c->r[27]=c->r[3]|c->r[3]; // 801E4D28
  c->r[31]=c->r[1]+0x00000018u; // 801E4D2C
  c->r[29]=0u+0x00000000u; // 801E4D30
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 801E4D34
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[29]);} // 801E4D38
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[28]);} // 801E4D3C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[27]);} // 801E4D40
  W32(c->r[3]+0x0000001Cu,c->r[28]); // 801E4D44
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[26]);} // 801E4D48
L_801E4D4C:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4D4C
  c->r[3]=c->r[27]|c->r[27]; // 801E4D50
  c->r[4]=c->r[29]|c->r[29]; // 801E4D54
  c->lr=0x801E4D5Cu; f_801E3D04(c); // 801E4D58
  c->r[29]=c->r[29]+0x00000001u; // 801E4D5C
  c->r[31]=c->r[31]+0x00000004u; // 801E4D60
  cmps(c,0,(int32_t)c->r[29],4); // 801E4D64
  if (crb(c,0)) { IRQCHK(c); goto L_801E4D4C; } // 801E4D68
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[25]);} // 801E4D6C
  c->r[31]=c->r[1]+0x00000008u; // 801E4D70
  c->r[28]=0u+0x00000000u; // 801E4D74
L_801E4D78:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4D78
  c->r[3]=c->r[27]|c->r[27]; // 801E4D7C
  c->r[4]=c->r[28]|c->r[28]; // 801E4D80
  c->lr=0x801E4D88u; f_801E3CE4(c); // 801E4D84
  c->r[28]=c->r[28]+0x00000001u; // 801E4D88
  c->r[31]=c->r[31]+0x00000004u; // 801E4D8C
  cmps(c,0,(int32_t)c->r[28],3); // 801E4D90
  if (crb(c,0)) { IRQCHK(c); goto L_801E4D78; } // 801E4D94
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 801E4D98
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 801E4D9C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 801E4DA0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 801E4DA4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 801E4DA8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 801E4DAC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 801E4DB0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 801E4DB4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 801E4DB8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 801E4DBC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,26,ea,0,0);} // 801E4DC0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[26]=RF64(ea);} // 801E4DC4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,25,ea,0,0);} // 801E4DC8
  c->r[11]=c->r[1]+0x00000050u; // 801E4DCC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[25]=RF64(ea);} // 801E4DD0
  c->lr=0x801E4DD8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4DD4
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801E4DD8
  c->lr=c->r[0]; // 801E4DDC
  c->r[1]=c->r[1]+0x000000C0u; // 801E4DE0
  return; // 801E4DE4
}

// fn_801E4DE8
void f_801E4DE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4DE8
  c->r[0]=c->lr; // 801E4DEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4DF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4DF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E4DF8
  c->r[30]=c->r[3]|c->r[3]; // 801E4DFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E4E00
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E4E04
  c->ctr=c->r[12]; // 801E4E08
  if (true) { c->lr=0x801E4E10u; dispatch(c,c->ctr); } // 801E4E0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E4E10
  c->r[31]=c->r[3]|c->r[3]; // 801E4E14
  c->r[12]=R32(c->r[12]+0x00000018u); // 801E4E18
  c->ctr=c->r[12]; // 801E4E1C
  if (true) { c->lr=0x801E4E24u; dispatch(c,c->ctr); } // 801E4E20
  cmps(c,0,(int32_t)c->r[3],0); // 801E4E24
  if (crb(c,2)) { goto L_801E4E54; } // 801E4E28
  c->r[0]=R8(c->r[30]+0x0000007Bu); // 801E4E2C
  cmps(c,0,(int32_t)c->r[0],0); // 801E4E30
  if (crb(c,2)) { goto L_801E4E40; } // 801E4E34
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4E38
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801E4E3C
L_801E4E40:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E4E40
  c->r[3]=c->r[31]|c->r[31]; // 801E4E44
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4E48
  c->ctr=c->r[12]; // 801E4E4C
  if (true) { c->lr=0x801E4E54u; dispatch(c,c->ctr); } // 801E4E50
L_801E4E54:;
  c->r[31]=0u+0xFFFFFFFFu; // 801E4E54
  c->r[3]=c->r[30]|c->r[30]; // 801E4E58
  W32(c->r[30]+0x00000090u,c->r[31]); // 801E4E5C
  c->r[12]=R32(c->r[30]+0x00000000u); // 801E4E60
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E4E64
  c->ctr=c->r[12]; // 801E4E68
  if (true) { c->lr=0x801E4E70u; dispatch(c,c->ctr); } // 801E4E6C
  W32(c->r[3]+0x000000CCu,c->r[31]); // 801E4E70
  c->r[3]=R32(c->r[30]+0x00000008u); // 801E4E74
  cmps(c,0,(int32_t)c->r[3],0); // 801E4E78
  if (crb(c,2)) { goto L_801E4E84; } // 801E4E7C
  c->lr=0x801E4E84u; f_801F270C(c); // 801E4E80
L_801E4E84:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801E4E84
  cmps(c,0,(int32_t)c->r[3],0); // 801E4E88
  if (crb(c,2)) { goto L_801E4E94; } // 801E4E8C
  c->lr=0x801E4E94u; f_801F270C(c); // 801E4E90
L_801E4E94:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801E4E94
  c->r[3]=c->r[30]|c->r[30]; // 801E4E98
  c->r[12]=R32(c->r[12]+0x00000018u); // 801E4E9C
  c->ctr=c->r[12]; // 801E4EA0
  if (true) { c->lr=0x801E4EA8u; dispatch(c,c->ctr); } // 801E4EA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E4EA8
  if (crb(c,2)) { goto L_801E4EC4; } // 801E4EAC
  c->r[12]=R32(c->r[30]+0x00000000u); // 801E4EB0
  c->r[3]=c->r[30]|c->r[30]; // 801E4EB4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801E4EB8
  c->ctr=c->r[12]; // 801E4EBC
  if (true) { c->lr=0x801E4EC4u; dispatch(c,c->ctr); } // 801E4EC0
L_801E4EC4:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E4EC4
  cmps(c,0,(int32_t)c->r[0],0); // 801E4EC8
  if (crb(c,2)) { goto L_801E4EDC; } // 801E4ECC
  c->r[3]=R32(c->r[30]+0x00000010u); // 801E4ED0
  c->r[4]=c->r[30]|c->r[30]; // 801E4ED4
  c->lr=0x801E4EDCu; f_801F314C(c); // 801E4ED8
L_801E4EDC:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801E4EDC
  cmps(c,0,(int32_t)c->r[3],0); // 801E4EE0
  if (crb(c,2)) { goto L_801E4EF0; } // 801E4EE4
  c->r[4]=c->r[30]|c->r[30]; // 801E4EE8
  c->lr=0x801E4EF0u; f_801F2E40(c); // 801E4EEC
L_801E4EF0:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 801E4EF0
  cmps(c,0,(int32_t)c->r[3],0); // 801E4EF4
  if (crb(c,2)) { goto L_801E4F04; } // 801E4EF8
  c->r[4]=c->r[30]|c->r[30]; // 801E4EFC
  c->lr=0x801E4F04u; f_801E7060(c); // 801E4F00
L_801E4F04:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 801E4F04
  cmps(c,0,(int32_t)c->r[3],0); // 801E4F08
  if (crb(c,2)) { goto L_801E4F30; } // 801E4F0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E4F10
  c->r[5]=c->r[30]|c->r[30]; // 801E4F14
  c->r[4]=R32(c->r[30]+0x00000028u); // 801E4F18
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4F1C
  c->ctr=c->r[12]; // 801E4F20
  if (true) { c->lr=0x801E4F28u; dispatch(c,c->ctr); } // 801E4F24
  c->r[0]=0u+0x00000000u; // 801E4F28
  W32(c->r[30]+0x00000028u,c->r[0]); // 801E4F2C
L_801E4F30:;
  c->r[0]=0u+0x00000000u; // 801E4F30
  W8(c->r[30]+0x00000079u,c->r[0]); // 801E4F34
  W8(c->r[30]+0x0000007Bu,c->r[0]); // 801E4F38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4F3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4F40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4F44
  c->lr=c->r[0]; // 801E4F48
  c->r[1]=c->r[1]+0x00000010u; // 801E4F4C
  return; // 801E4F50
}

// fn_801E4F54
void f_801E4F54(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E4F54
  return; // 801E4F58
}

// fn_801E4F5C
void f_801E4F5C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E4F5C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E4F60
  return; // 801E4F64
}

// fn_801E4F68
void f_801E4F68(Ctx* __restrict c) {
  W32(c->r[3]+0x00000010u,c->r[4]); // 801E4F68
  return; // 801E4F6C
}

// fn_801E4F70
void f_801E4F70(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E4F70
  W32(c->r[3]+0x00000010u,c->r[0]); // 801E4F74
  return; // 801E4F78
}

// fn_801E4F7C
void f_801E4F7C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000014u,c->r[4]); // 801E4F7C
  return; // 801E4F80
}

// fn_801E4F84
void f_801E4F84(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E4F84
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E4F88
  return; // 801E4F8C
}

// fn_801E4F90
void f_801E4F90(Ctx* __restrict c) {
  W32(c->r[3]+0x00000018u,c->r[4]); // 801E4F90
  return; // 801E4F94
}

// fn_801E4F98
void f_801E4F98(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E4F98
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E4F9C
  return; // 801E4FA0
}

// fn_801E4FA4
void f_801E4FA4(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x0000008Du); // 801E4FA4
  return; // 801E4FA8
}

// fn_801E4FAC
void f_801E4FAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4FAC
  c->r[0]=c->lr; // 801E4FB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4FB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4FB8
  c->r[31]=c->r[3]|c->r[3]; // 801E4FBC
  c->r[0]=R32(c->r[3]+0x00000010u); // 801E4FC0
  W8(c->r[3]+0x0000008Cu,c->r[4]); // 801E4FC4
  cmps(c,0,(int32_t)c->r[0],0); // 801E4FC8
  if (crb(c,2)) { goto L_801E4FDC; } // 801E4FCC
  c->r[3]=c->r[0]|c->r[0]; // 801E4FD0
  c->r[4]=c->r[31]|c->r[31]; // 801E4FD4
  c->lr=0x801E4FDCu; f_801F29D0(c); // 801E4FD8
L_801E4FDC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E4FDC
  c->r[3]=c->r[31]|c->r[31]; // 801E4FE0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801E4FE4
  c->ctr=c->r[12]; // 801E4FE8
  if (true) { c->lr=0x801E4FF0u; dispatch(c,c->ctr); } // 801E4FEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4FF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4FF4
  c->lr=c->r[0]; // 801E4FF8
  c->r[1]=c->r[1]+0x00000010u; // 801E4FFC
  return; // 801E5000
}

// fn_801E5004
void f_801E5004(Ctx* __restrict c) {
  return; // 801E5004
}

// fn_801E5008
void f_801E5008(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5008
  fcmp(c,0,c->f[1],c->f[0]); // 801E500C
  if (!crb(c,1)) { goto L_801E5018; } // 801E5010
  goto L_801E502C; // 801E5014
L_801E5018:;
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5018
  fcmp(c,0,c->f[1],c->f[0]); // 801E501C
  if (!crb(c,0)) { goto L_801E5028; } // 801E5020
  goto L_801E502C; // 801E5024
L_801E5028:;
  c->f[0]=c->f[1]; // 801E5028
L_801E502C:;
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 801E502C
  return; // 801E5030
}

// fn_801E5034
void f_801E5034(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801E5034
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5038
  fcmp(c,0,c->f[1],c->f[5]); // 801E503C
  if (!crb(c,1)) { goto L_801E5048; } // 801E5040
  goto L_801E505C; // 801E5044
L_801E5048:;
  {uint32_t ea=c->r[2]+0xFFFF9EDCu; c->f[5]=c->ps1[5]=RF32(ea);} // 801E5048
  fcmp(c,0,c->f[1],c->f[5]); // 801E504C
  if (!crb(c,0)) { goto L_801E5058; } // 801E5050
  goto L_801E505C; // 801E5054
L_801E5058:;
  c->f[5]=c->f[1]; // 801E5058
L_801E505C:;
  c->r[6]=R32(c->r[3]+0x0000009Cu); // 801E505C
  c->r[0]=R32(c->r[3]+0x000000A0u); // 801E5060
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801E5064
  if (crb(c,0)) { goto L_801E5074; } // 801E5068
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E506C
  goto L_801E50BC; // 801E5070
L_801E5074:;
  c->r[5]=0u+0x43300000u; // 801E5074
  c->r[0]=c->r[0]^0x80000000u; // 801E5078
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E507C
  c->r[0]=c->r[6]^0x80000000u; // 801E5080
  {uint32_t ea=c->r[2]+0xFFFF9EE0u; c->f[4]=RF64(ea);} // 801E5084
  W32(c->r[1]+0x00000008u,c->r[5]); // 801E5088
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E508C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E5090
  {uint32_t ea=c->r[3]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E5094
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801E5098
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E509C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801E50A0
  W32(c->r[1]+0x00000010u,c->r[5]); // 801E50A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E50A8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E50AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801E50B0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801E50B4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801E50B8
L_801E50BC:;
  c->r[0]=0u+0x00000000u; // 801E50BC
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 801E50C0
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[5]);} // 801E50C4
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 801E50C8
  W32(c->r[3]+0x000000A0u,c->r[0]); // 801E50CC
  c->r[1]=c->r[1]+0x00000020u; // 801E50D0
  return; // 801E50D4
}

// fn_801E50D8
void f_801E50D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[1]);} // 801E50D8
  return; // 801E50DC
}

// fn_801E50E0
void f_801E50E0(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B8u,c->r[4]); // 801E50E0
  return; // 801E50E4
}

// fn_801E50E8
void f_801E50E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[1]);} // 801E50E8
  return; // 801E50EC
}

// fn_801E50F0
void f_801E50F0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E50F0
  c->r[3]=c->r[3]+c->r[0]; // 801E50F4
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[1]);} // 801E50F8
  return; // 801E50FC
}

// fn_801E5100
void f_801E5100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5100
  c->r[0]=c->lr; // 801E5104
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E510C
  c->r[31]=c->r[4]|c->r[4]; // 801E5110
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E5114
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E5118
  c->ctr=c->r[12]; // 801E511C
  if (true) { c->lr=0x801E5124u; dispatch(c,c->ctr); } // 801E5120
  W32(c->r[3]+0x00000018u,c->r[31]); // 801E5124
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5128
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E512C
  c->lr=c->r[0]; // 801E5130
  c->r[1]=c->r[1]+0x00000010u; // 801E5134
  return; // 801E5138
}

// fn_801E513C
void f_801E513C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E513C
  c->r[0]=c->lr; // 801E5140
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5148
  c->r[31]=c->r[4]|c->r[4]; // 801E514C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E5150
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E5154
  c->ctr=c->r[12]; // 801E5158
  if (true) { c->lr=0x801E5160u; dispatch(c,c->ctr); } // 801E515C
  W32(c->r[3]+0x00000028u,c->r[31]); // 801E5160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5164
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5168
  c->lr=c->r[0]; // 801E516C
  c->r[1]=c->r[1]+0x00000010u; // 801E5170
  return; // 801E5174
}

// fn_801E5178
void f_801E5178(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5178
  c->r[0]=c->lr; // 801E517C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5184
  c->r[31]=c->r[4]|c->r[4]; // 801E5188
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E518C
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E5190
  c->ctr=c->r[12]; // 801E5194
  if (true) { c->lr=0x801E519Cu; dispatch(c,c->ctr); } // 801E5198
  W32(c->r[3]+0x0000002Cu,c->r[31]); // 801E519C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E51A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E51A4
  c->lr=c->r[0]; // 801E51A8
  c->r[1]=c->r[1]+0x00000010u; // 801E51AC
  return; // 801E51B0
}

// fn_801E51B4
void f_801E51B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E51B4
  c->r[0]=c->lr; // 801E51B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E51BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E51C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E51C4
  c->r[30]=c->r[4]|c->r[4]; // 801E51C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E51CC
  c->r[29]=c->r[3]|c->r[3]; // 801E51D0
  c->r[3]=R32(c->r[4]+0x00000008u); // 801E51D4
  c->r[4]=R32(c->r[4]+0x00000010u); // 801E51D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E51DC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E51E0
  c->ctr=c->r[12]; // 801E51E4
  if (true) { c->lr=0x801E51ECu; dispatch(c,c->ctr); } // 801E51E8
  cmps(c,0,(int32_t)c->r[3],0); // 801E51EC
  c->r[31]=c->r[3]|c->r[3]; // 801E51F0
  if (crb(c,2)) { goto L_801E5264; } // 801E51F4
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801E51F8
  c->r[5]=R32(c->r[30]+0x00000010u); // 801E51FC
  c->lr=0x801E5204u; f_80004338(c); // 801E5200
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801E5204
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E5208
  W32(c->r[29]+0x00000028u,c->r[3]); // 801E520C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E5210
  cmps(c,0,(int32_t)c->r[0],0); // 801E5214
  c->r[5]=R32(c->r[30]+0x00000004u); // 801E5218
  c->r[4]=R32(c->r[30]+0x00000008u); // 801E521C
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E5220
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 801E5224
  W32(c->r[29]+0x00000020u,c->r[5]); // 801E5228
  W32(c->r[29]+0x00000024u,c->r[4]); // 801E522C
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 801E5230
  W32(c->r[29]+0x00000028u,c->r[31]); // 801E5234
  if (crb(c,2)) { goto L_801E5264; } // 801E5238
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E523C
  c->r[4]=c->r[31]|c->r[31]; // 801E5240
  c->r[5]=R32(c->r[29]+0x00000090u); // 801E5244
  c->r[12]=R32(c->r[12]+0x00000014u); // 801E5248
  c->ctr=c->r[12]; // 801E524C
  if (true) { c->lr=0x801E5254u; dispatch(c,c->ctr); } // 801E5250
  cmps(c,0,(int32_t)c->r[3],4); // 801E5254
  if (!crb(c,1)) { goto L_801E5260; } // 801E5258
  c->r[3]=0u+0x00000004u; // 801E525C
L_801E5260:;
  W8(c->r[29]+0x0000008Du,c->r[3]); // 801E5260
L_801E5264:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5264
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5268
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E526C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5270
  c->lr=c->r[0]; // 801E5274
  c->r[1]=c->r[1]+0x00000020u; // 801E5278
  return; // 801E527C
}

// fn_801E5280
void f_801E5280(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E5280
  c->r[6]=c->r[3]|c->r[3]; // 801E5284
  cmps(c,0,(int32_t)c->r[0],0); // 801E5288
  if (!crb(c,2)) { goto L_801E5298; } // 801E528C
  c->r[3]=0u+0x00000000u; // 801E5290
  return; // 801E5294
L_801E5298:;
  c->r[3]=c->r[0]|c->r[0]; // 801E5298
  c->r[5]=c->r[4]|c->r[4]; // 801E529C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E52A0
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801E52A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E52A8
  c->ctr=c->r[12]; // 801E52AC
  if (true) { dispatch(c,c->ctr); return; } // 801E52B0
}

// fn_801E52B4
void f_801E52B4(Ctx* __restrict c) {
  return; // 801E52B4
}

// fn_801E52B8
void f_801E52B8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E52B8
  c->r[0]=0u-c->r[3]; // 801E52BC
  c->r[0]=c->r[0]|c->r[3]; // 801E52C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E52C4
  return; // 801E52C8
}

// fn_801E52CC
void f_801E52CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801E52CC
  c->r[0]=0u-c->r[3]; // 801E52D0
  c->r[0]=c->r[0]|c->r[3]; // 801E52D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E52D8
  return; // 801E52DC
}

// fn_801E52E0
void f_801E52E0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E52E0
  f_801F270C(c); return; // 801E52E4
}


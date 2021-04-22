/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the R600 target                               *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

#if defined(GET_DAGISEL_DECL) && defined(GET_DAGISEL_BODY)
#error GET_DAGISEL_DECL and GET_DAGISEL_BODY cannot be both defined, undef both for inline definitions
#endif

#ifdef GET_DAGISEL_BODY
#define LOCAL_DAGISEL_STRINGIZE(X) LOCAL_DAGISEL_STRINGIZE_(X)
#define LOCAL_DAGISEL_STRINGIZE_(X) #X
static_assert(sizeof(LOCAL_DAGISEL_STRINGIZE(GET_DAGISEL_BODY)) > 1,
   "GET_DAGISEL_BODY is empty: it should be defined with the class name");
#undef LOCAL_DAGISEL_STRINGIZE_
#undef LOCAL_DAGISEL_STRINGIZE
#endif

#if !defined(GET_DAGISEL_DECL) && !defined(GET_DAGISEL_BODY)
#define DAGISEL_INLINE 1
#else
#define DAGISEL_INLINE 0
#endif

#if !DAGISEL_INLINE
#define DAGISEL_CLASS_COLONCOLON GET_DAGISEL_BODY ::
#else
#define DAGISEL_CLASS_COLONCOLON
#endif

#ifdef GET_DAGISEL_DECL
void SelectCode(SDNode *N);
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
void DAGISEL_CLASS_COLONCOLON SelectCode(SDNode *N)
{
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*     0*/  OPC_SwitchOpcode /*99 cases */, 99|128,2/*355*/, TARGET_VAL(ISD::SRL),// ->360
/*     5*/    OPC_Scope, 11|128,1/*139*/, /*->147*/ // 2 children in Scope
/*     8*/      OPC_MoveChild0,
/*     9*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*    12*/      OPC_RecordChild0, // #0 = $src
/*    13*/      OPC_MoveChild1,
/*    14*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*    17*/      OPC_CheckChild0Integer, 32, 
/*    19*/      OPC_RecordChild1, // #1 = $width
/*    20*/      OPC_CheckType, MVT::i32,
/*    22*/      OPC_MoveParent,
/*    23*/      OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*    25*/      OPC_MoveParent,
/*    26*/      OPC_MoveChild1,
/*    27*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*    30*/      OPC_CheckChild0Integer, 32, 
/*    32*/      OPC_CheckChild1Same, 1,
/*    34*/      OPC_CheckType, MVT::i32,
/*    36*/      OPC_MoveParent,
/*    37*/      OPC_CheckType, MVT::i32,
/*    39*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*    41*/      OPC_EmitInteger, MVT::i32, 0, 
/*    44*/      OPC_EmitInteger, MVT::i32, 0, 
/*    47*/      OPC_EmitInteger, MVT::i32, 0, 
/*    50*/      OPC_EmitInteger, MVT::i32, 0, 
/*    53*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    65*/      OPC_EmitInteger, MVT::i32, 0, 
/*    68*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*    75*/      OPC_EmitInteger, MVT::i32, 0, 
/*    78*/      OPC_EmitInteger, MVT::i32, 0, 
/*    81*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    93*/      OPC_EmitInteger, MVT::i32, 0, 
/*    96*/      OPC_EmitInteger, MVT::i32, 0, 
/*    99*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   111*/      OPC_EmitInteger, MVT::i32, 1, 
/*   114*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   117*/      OPC_EmitInteger, MVT::i32, 0, 
/*   120*/      OPC_EmitInteger, MVT::i32, 0, 
/*   123*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (srl:{ *:[i32] } (shl:{ *:[i32] } i32:{ *:[i32] }:$src, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_shl_oneuse>>, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width)) - Complexity = 23
                // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   147*/    /*Scope*/ 82|128,1/*210*/, /*->359*/
/*   149*/      OPC_RecordChild0, // #0 = $src0
/*   150*/      OPC_RecordChild1, // #1 = $src1
/*   151*/      OPC_CheckChild1Type, MVT::i32,
/*   153*/      OPC_CheckType, MVT::i32,
/*   155*/      OPC_Scope, 100, /*->257*/ // 2 children in Scope
/*   157*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   159*/        OPC_EmitInteger, MVT::i32, 0, 
/*   162*/        OPC_EmitInteger, MVT::i32, 0, 
/*   165*/        OPC_EmitInteger, MVT::i32, 1, 
/*   168*/        OPC_EmitInteger, MVT::i32, 0, 
/*   171*/        OPC_EmitInteger, MVT::i32, 0, 
/*   174*/        OPC_EmitInteger, MVT::i32, 0, 
/*   177*/        OPC_EmitInteger, MVT::i32, 0, 
/*   180*/        OPC_EmitInteger, MVT::i32, 0, 
/*   183*/        OPC_EmitInteger, MVT::i32, 0, 
/*   186*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   198*/        OPC_EmitInteger, MVT::i32, 0, 
/*   201*/        OPC_EmitInteger, MVT::i32, 0, 
/*   204*/        OPC_EmitInteger, MVT::i32, 0, 
/*   207*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   219*/        OPC_EmitInteger, MVT::i32, 1, 
/*   222*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   225*/        OPC_EmitInteger, MVT::i32, 0, 
/*   228*/        OPC_EmitInteger, MVT::i32, 0, 
/*   231*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LSHR_r600), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (srl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (LSHR_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   257*/      /*Scope*/ 100, /*->358*/
/*   258*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   260*/        OPC_EmitInteger, MVT::i32, 0, 
/*   263*/        OPC_EmitInteger, MVT::i32, 0, 
/*   266*/        OPC_EmitInteger, MVT::i32, 1, 
/*   269*/        OPC_EmitInteger, MVT::i32, 0, 
/*   272*/        OPC_EmitInteger, MVT::i32, 0, 
/*   275*/        OPC_EmitInteger, MVT::i32, 0, 
/*   278*/        OPC_EmitInteger, MVT::i32, 0, 
/*   281*/        OPC_EmitInteger, MVT::i32, 0, 
/*   284*/        OPC_EmitInteger, MVT::i32, 0, 
/*   287*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   299*/        OPC_EmitInteger, MVT::i32, 0, 
/*   302*/        OPC_EmitInteger, MVT::i32, 0, 
/*   305*/        OPC_EmitInteger, MVT::i32, 0, 
/*   308*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   320*/        OPC_EmitInteger, MVT::i32, 1, 
/*   323*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   326*/        OPC_EmitInteger, MVT::i32, 0, 
/*   329*/        OPC_EmitInteger, MVT::i32, 0, 
/*   332*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LSHR_eg), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (srl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (LSHR_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   358*/      0, /*End of Scope*/
/*   359*/    0, /*End of Scope*/
/*   360*/  /*SwitchOpcode*/ 99|128,2/*355*/, TARGET_VAL(ISD::SRA),// ->719
/*   364*/    OPC_Scope, 11|128,1/*139*/, /*->506*/ // 2 children in Scope
/*   367*/      OPC_MoveChild0,
/*   368*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   371*/      OPC_RecordChild0, // #0 = $src
/*   372*/      OPC_MoveChild1,
/*   373*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*   376*/      OPC_CheckChild0Integer, 32, 
/*   378*/      OPC_RecordChild1, // #1 = $width
/*   379*/      OPC_CheckType, MVT::i32,
/*   381*/      OPC_MoveParent,
/*   382*/      OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*   384*/      OPC_MoveParent,
/*   385*/      OPC_MoveChild1,
/*   386*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*   389*/      OPC_CheckChild0Integer, 32, 
/*   391*/      OPC_CheckChild1Same, 1,
/*   393*/      OPC_CheckType, MVT::i32,
/*   395*/      OPC_MoveParent,
/*   396*/      OPC_CheckType, MVT::i32,
/*   398*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   400*/      OPC_EmitInteger, MVT::i32, 0, 
/*   403*/      OPC_EmitInteger, MVT::i32, 0, 
/*   406*/      OPC_EmitInteger, MVT::i32, 0, 
/*   409*/      OPC_EmitInteger, MVT::i32, 0, 
/*   412*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   424*/      OPC_EmitInteger, MVT::i32, 0, 
/*   427*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*   434*/      OPC_EmitInteger, MVT::i32, 0, 
/*   437*/      OPC_EmitInteger, MVT::i32, 0, 
/*   440*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   452*/      OPC_EmitInteger, MVT::i32, 0, 
/*   455*/      OPC_EmitInteger, MVT::i32, 0, 
/*   458*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   470*/      OPC_EmitInteger, MVT::i32, 1, 
/*   473*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   476*/      OPC_EmitInteger, MVT::i32, 0, 
/*   479*/      OPC_EmitInteger, MVT::i32, 0, 
/*   482*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sra:{ *:[i32] } (shl:{ *:[i32] } i32:{ *:[i32] }:$src, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_shl_oneuse>>, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width)) - Complexity = 23
                // Dst: (BFE_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   506*/    /*Scope*/ 82|128,1/*210*/, /*->718*/
/*   508*/      OPC_RecordChild0, // #0 = $src0
/*   509*/      OPC_RecordChild1, // #1 = $src1
/*   510*/      OPC_CheckChild1Type, MVT::i32,
/*   512*/      OPC_CheckType, MVT::i32,
/*   514*/      OPC_Scope, 100, /*->616*/ // 2 children in Scope
/*   516*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   518*/        OPC_EmitInteger, MVT::i32, 0, 
/*   521*/        OPC_EmitInteger, MVT::i32, 0, 
/*   524*/        OPC_EmitInteger, MVT::i32, 1, 
/*   527*/        OPC_EmitInteger, MVT::i32, 0, 
/*   530*/        OPC_EmitInteger, MVT::i32, 0, 
/*   533*/        OPC_EmitInteger, MVT::i32, 0, 
/*   536*/        OPC_EmitInteger, MVT::i32, 0, 
/*   539*/        OPC_EmitInteger, MVT::i32, 0, 
/*   542*/        OPC_EmitInteger, MVT::i32, 0, 
/*   545*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   557*/        OPC_EmitInteger, MVT::i32, 0, 
/*   560*/        OPC_EmitInteger, MVT::i32, 0, 
/*   563*/        OPC_EmitInteger, MVT::i32, 0, 
/*   566*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   578*/        OPC_EmitInteger, MVT::i32, 1, 
/*   581*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   584*/        OPC_EmitInteger, MVT::i32, 0, 
/*   587*/        OPC_EmitInteger, MVT::i32, 0, 
/*   590*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ASHR_r600), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (sra:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ASHR_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   616*/      /*Scope*/ 100, /*->717*/
/*   617*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   619*/        OPC_EmitInteger, MVT::i32, 0, 
/*   622*/        OPC_EmitInteger, MVT::i32, 0, 
/*   625*/        OPC_EmitInteger, MVT::i32, 1, 
/*   628*/        OPC_EmitInteger, MVT::i32, 0, 
/*   631*/        OPC_EmitInteger, MVT::i32, 0, 
/*   634*/        OPC_EmitInteger, MVT::i32, 0, 
/*   637*/        OPC_EmitInteger, MVT::i32, 0, 
/*   640*/        OPC_EmitInteger, MVT::i32, 0, 
/*   643*/        OPC_EmitInteger, MVT::i32, 0, 
/*   646*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   658*/        OPC_EmitInteger, MVT::i32, 0, 
/*   661*/        OPC_EmitInteger, MVT::i32, 0, 
/*   664*/        OPC_EmitInteger, MVT::i32, 0, 
/*   667*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   679*/        OPC_EmitInteger, MVT::i32, 1, 
/*   682*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   685*/        OPC_EmitInteger, MVT::i32, 0, 
/*   688*/        OPC_EmitInteger, MVT::i32, 0, 
/*   691*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ASHR_eg), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (sra:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ASHR_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   717*/      0, /*End of Scope*/
/*   718*/    0, /*End of Scope*/
/*   719*/  /*SwitchOpcode*/ 126, TARGET_VAL(AMDGPUISD::R600_EXPORT),// ->848
/*   722*/    OPC_RecordNode, // #0 = 'R600_EXPORT' chained node
/*   723*/    OPC_RecordChild1, // #1 = $src
/*   724*/    OPC_CheckChild1Type, MVT::v4f32,
/*   726*/    OPC_RecordChild2, // #2 = $base
/*   727*/    OPC_MoveChild2,
/*   728*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   731*/    OPC_CheckType, MVT::i32,
/*   733*/    OPC_MoveParent,
/*   734*/    OPC_RecordChild3, // #3 = $type
/*   735*/    OPC_MoveChild3,
/*   736*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   739*/    OPC_CheckType, MVT::i32,
/*   741*/    OPC_MoveParent,
/*   742*/    OPC_RecordChild4, // #4 = $swz_x
/*   743*/    OPC_MoveChild4,
/*   744*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   747*/    OPC_CheckType, MVT::i32,
/*   749*/    OPC_MoveParent,
/*   750*/    OPC_RecordChild5, // #5 = $swz_y
/*   751*/    OPC_MoveChild5,
/*   752*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   755*/    OPC_CheckType, MVT::i32,
/*   757*/    OPC_MoveParent,
/*   758*/    OPC_RecordChild6, // #6 = $swz_z
/*   759*/    OPC_MoveChild6,
/*   760*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   763*/    OPC_CheckType, MVT::i32,
/*   765*/    OPC_MoveParent,
/*   766*/    OPC_RecordChild7, // #7 = $swz_w
/*   767*/    OPC_MoveChild7,
/*   768*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   771*/    OPC_CheckType, MVT::i32,
/*   773*/    OPC_MoveParent,
/*   774*/    OPC_Scope, 35, /*->811*/ // 2 children in Scope
/*   776*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   778*/      OPC_EmitMergeInputChains1_0,
/*   779*/      OPC_EmitConvertToTarget, 3,
/*   781*/      OPC_EmitConvertToTarget, 2,
/*   783*/      OPC_EmitConvertToTarget, 4,
/*   785*/      OPC_EmitConvertToTarget, 5,
/*   787*/      OPC_EmitConvertToTarget, 6,
/*   789*/      OPC_EmitConvertToTarget, 7,
/*   791*/      OPC_EmitInteger, MVT::i32, 39, 
/*   794*/      OPC_EmitInteger, MVT::i32, 0, 
/*   797*/      OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportSwz), 0|OPFL_Chain,
                    9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
                // Src: (R600_EXPORT R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w) - Complexity = 21
                // Dst: (R600_ExportSwz R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w, 39:{ *:[i32] }, 0:{ *:[i32] })
/*   811*/    /*Scope*/ 35, /*->847*/
/*   812*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   814*/      OPC_EmitMergeInputChains1_0,
/*   815*/      OPC_EmitConvertToTarget, 3,
/*   817*/      OPC_EmitConvertToTarget, 2,
/*   819*/      OPC_EmitConvertToTarget, 4,
/*   821*/      OPC_EmitConvertToTarget, 5,
/*   823*/      OPC_EmitConvertToTarget, 6,
/*   825*/      OPC_EmitConvertToTarget, 7,
/*   827*/      OPC_EmitInteger, MVT::i32, 83, 
/*   830*/      OPC_EmitInteger, MVT::i32, 0, 
/*   833*/      OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportSwz), 0|OPFL_Chain,
                    9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
                // Src: (R600_EXPORT R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w) - Complexity = 21
                // Dst: (EG_ExportSwz R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w, 83:{ *:[i32] }, 0:{ *:[i32] })
/*   847*/    0, /*End of Scope*/
/*   848*/  /*SwitchOpcode*/ 84|128,8/*1108*/, TARGET_VAL(ISD::AND),// ->1960
/*   852*/    OPC_Scope, 37|128,2/*293*/, /*->1148*/ // 5 children in Scope
/*   855*/      OPC_RecordChild0, // #0 = $src
/*   856*/      OPC_MoveChild1,
/*   857*/      OPC_SwitchOpcode /*2 cases */, 8|128,1/*136*/, TARGET_VAL(ISD::ADD),// ->998
/*   862*/        OPC_MoveChild0,
/*   863*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   866*/        OPC_CheckChild0Integer, 1, 
/*   868*/        OPC_RecordChild1, // #1 = $width
/*   869*/        OPC_CheckChild1Type, MVT::i32,
/*   871*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*   873*/        OPC_MoveParent,
/*   874*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   885*/        OPC_CheckPredicate, 0, // Predicate_add_oneuse
/*   887*/        OPC_MoveParent,
/*   888*/        OPC_CheckType, MVT::i32,
/*   890*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   892*/        OPC_EmitInteger, MVT::i32, 0, 
/*   895*/        OPC_EmitInteger, MVT::i32, 0, 
/*   898*/        OPC_EmitInteger, MVT::i32, 0, 
/*   901*/        OPC_EmitInteger, MVT::i32, 0, 
/*   904*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   916*/        OPC_EmitInteger, MVT::i32, 0, 
/*   919*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*   926*/        OPC_EmitInteger, MVT::i32, 0, 
/*   929*/        OPC_EmitInteger, MVT::i32, 0, 
/*   932*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   944*/        OPC_EmitInteger, MVT::i32, 0, 
/*   947*/        OPC_EmitInteger, MVT::i32, 0, 
/*   950*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   962*/        OPC_EmitInteger, MVT::i32, 1, 
/*   965*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   968*/        OPC_EmitInteger, MVT::i32, 0, 
/*   971*/        OPC_EmitInteger, MVT::i32, 0, 
/*   974*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_add_oneuse>>) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   998*/      /*SwitchOpcode*/ 17|128,1/*145*/, TARGET_VAL(ISD::XOR),// ->1147
/*  1002*/        OPC_MoveChild0,
/*  1003*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1006*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1017*/        OPC_RecordChild1, // #1 = $width
/*  1018*/        OPC_CheckChild1Type, MVT::i32,
/*  1020*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1022*/        OPC_MoveParent,
/*  1023*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1034*/        OPC_CheckPredicate, 0, // Predicate_xor_oneuse
/*  1036*/        OPC_MoveParent,
/*  1037*/        OPC_CheckType, MVT::i32,
/*  1039*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1041*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1044*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1047*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1050*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1053*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1065*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1068*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1075*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1078*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1081*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1093*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1096*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1099*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1111*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1114*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1117*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1120*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1123*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (xor:{ *:[i32] } (shl:{ *:[i32] } -1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_xor_oneuse>>) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1147*/      0, // EndSwitchOpcode
/*  1148*/    /*Scope*/ 38|128,2/*294*/, /*->1444*/
/*  1150*/      OPC_MoveChild0,
/*  1151*/      OPC_SwitchOpcode /*2 cases */, 9|128,1/*137*/, TARGET_VAL(ISD::ADD),// ->1293
/*  1156*/        OPC_MoveChild0,
/*  1157*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1160*/        OPC_CheckChild0Integer, 1, 
/*  1162*/        OPC_RecordChild1, // #0 = $width
/*  1163*/        OPC_CheckChild1Type, MVT::i32,
/*  1165*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1167*/        OPC_MoveParent,
/*  1168*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1179*/        OPC_CheckPredicate, 0, // Predicate_add_oneuse
/*  1181*/        OPC_MoveParent,
/*  1182*/        OPC_RecordChild1, // #1 = $src
/*  1183*/        OPC_CheckType, MVT::i32,
/*  1185*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1187*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1190*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1193*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1196*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1199*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1211*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1214*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1221*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1224*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1227*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1239*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1242*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1245*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1257*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1260*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1263*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1266*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1269*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_add_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1293*/      /*SwitchOpcode*/ 18|128,1/*146*/, TARGET_VAL(ISD::XOR),// ->1443
/*  1297*/        OPC_MoveChild0,
/*  1298*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1301*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1312*/        OPC_RecordChild1, // #0 = $width
/*  1313*/        OPC_CheckChild1Type, MVT::i32,
/*  1315*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1317*/        OPC_MoveParent,
/*  1318*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1329*/        OPC_CheckPredicate, 0, // Predicate_xor_oneuse
/*  1331*/        OPC_MoveParent,
/*  1332*/        OPC_RecordChild1, // #1 = $src
/*  1333*/        OPC_CheckType, MVT::i32,
/*  1335*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1337*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1340*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1343*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1346*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1349*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1361*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1364*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1371*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1374*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1377*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1389*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1392*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1395*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1407*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1410*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1413*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1416*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1419*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (xor:{ *:[i32] } (shl:{ *:[i32] } -1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_xor_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1443*/      0, // EndSwitchOpcode
/*  1444*/    /*Scope*/ 11|128,1/*139*/, /*->1585*/
/*  1446*/      OPC_RecordChild0, // #0 = $src
/*  1447*/      OPC_MoveChild1,
/*  1448*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*  1451*/      OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1462*/      OPC_MoveChild1,
/*  1463*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1466*/      OPC_CheckChild0Integer, 32, 
/*  1468*/      OPC_RecordChild1, // #1 = $width
/*  1469*/      OPC_CheckType, MVT::i32,
/*  1471*/      OPC_MoveParent,
/*  1472*/      OPC_CheckPredicate, 0, // Predicate_srl_oneuse
/*  1474*/      OPC_MoveParent,
/*  1475*/      OPC_CheckType, MVT::i32,
/*  1477*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1479*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1482*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1485*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1488*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1491*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1503*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1506*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1513*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1516*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1519*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1531*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1534*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1537*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1549*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1552*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1555*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1558*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1561*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (srl:{ *:[i32] } -1:{ *:[i32] }, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_srl_oneuse>>) - Complexity = 20
                // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1585*/    /*Scope*/ 11|128,2/*267*/, /*->1854*/
/*  1587*/      OPC_MoveChild0,
/*  1588*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*  1591*/      OPC_Scope, 7|128,1/*135*/, /*->1729*/ // 2 children in Scope
/*  1594*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1605*/        OPC_MoveChild1,
/*  1606*/        OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1609*/        OPC_CheckChild0Integer, 32, 
/*  1611*/        OPC_RecordChild1, // #0 = $width
/*  1612*/        OPC_CheckType, MVT::i32,
/*  1614*/        OPC_MoveParent,
/*  1615*/        OPC_CheckPredicate, 0, // Predicate_srl_oneuse
/*  1617*/        OPC_MoveParent,
/*  1618*/        OPC_RecordChild1, // #1 = $src
/*  1619*/        OPC_CheckType, MVT::i32,
/*  1621*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1623*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1626*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1629*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1632*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1635*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1647*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1650*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1657*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1660*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1663*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1675*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1678*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1681*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1693*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1696*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1699*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1702*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1705*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (srl:{ *:[i32] } -1:{ *:[i32] }, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_srl_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 20
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1729*/      /*Scope*/ 123, /*->1853*/
/*  1730*/        OPC_RecordChild0, // #0 = $src
/*  1731*/        OPC_RecordChild1, // #1 = $rshift
/*  1732*/        OPC_CheckChild1Type, MVT::i32,
/*  1734*/        OPC_MoveParent,
/*  1735*/        OPC_RecordChild1, // #2 = $mask
/*  1736*/        OPC_MoveChild1,
/*  1737*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1740*/        OPC_CheckPredicate, 1, // Predicate_IMMZeroBasedBitfieldMask
/*  1742*/        OPC_MoveParent,
/*  1743*/        OPC_CheckType, MVT::i32,
/*  1745*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1747*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1750*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1753*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1756*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1759*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1771*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1774*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1777*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1789*/        OPC_EmitNodeXForm, 0, 2, // IMMPopCount
/*  1792*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*  1799*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1802*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1805*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1817*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1820*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1823*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1826*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1829*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (and:{ *:[i32] } (srl:{ *:[i32] } i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$rshift), (imm:{ *:[i32] })<<P:Predicate_IMMZeroBasedBitfieldMask>>:$mask) - Complexity = 10
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, ?:{ *:[i32] }:$rshift, (MOV_IMM_I32:{ *:[i32] } (IMMPopCount:{ *:[i32] } ?:{ *:[i32] }:$mask)))
/*  1853*/      0, /*End of Scope*/
/*  1854*/    /*Scope*/ 104, /*->1959*/
/*  1855*/      OPC_RecordChild0, // #0 = $src0
/*  1856*/      OPC_RecordChild1, // #1 = $src1
/*  1857*/      OPC_CheckType, MVT::i32,
/*  1859*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1861*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1864*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1867*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1870*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1873*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1876*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1879*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1882*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1885*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1888*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1900*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1903*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1906*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1909*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1921*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1924*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1927*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1930*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1933*/      OPC_MorphNodeTo1, TARGET_VAL(R600::AND_INT), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (and:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (AND_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*  1959*/    0, /*End of Scope*/
/*  1960*/  /*SwitchOpcode*/ 118|128,3/*502*/, TARGET_VAL(ISD::INTRINSIC_VOID),// ->2466
/*  1964*/    OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*  1965*/    OPC_Scope, 64|128,2/*320*/, /*->2288*/ // 4 children in Scope
/*  1968*/      OPC_CheckChild1Integer, 4|128,47/*6020*/, 
/*  1971*/      OPC_RecordChild2, // #1 = $src
/*  1972*/      OPC_RecordChild3, // #2 = $arraybase
/*  1973*/      OPC_MoveChild3,
/*  1974*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1977*/      OPC_MoveParent,
/*  1978*/      OPC_Scope, 76, /*->2056*/ // 4 children in Scope
/*  1980*/        OPC_CheckChild4Integer, 0, 
/*  1982*/        OPC_RecordChild5, // #3 = $mask
/*  1983*/        OPC_MoveChild5,
/*  1984*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1987*/        OPC_MoveParent,
/*  1988*/        OPC_Scope, 32, /*->2022*/ // 2 children in Scope
/*  1990*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  1992*/          OPC_EmitMergeInputChains1_0,
/*  1993*/          OPC_EmitInteger, MVT::i32, 0, 
/*  1996*/          OPC_EmitConvertToTarget, 2,
/*  1998*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2002*/          OPC_EmitConvertToTarget, 3,
/*  2004*/          OPC_EmitInteger, MVT::i32, 32, 
/*  2007*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2010*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6020:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 0:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf R600_Reg128:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 32:{ *:[i32] }, 0:{ *:[i32] })
/*  2022*/        /*Scope*/ 32, /*->2055*/
/*  2023*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2025*/          OPC_EmitMergeInputChains1_0,
/*  2026*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2029*/          OPC_EmitConvertToTarget, 2,
/*  2031*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2035*/          OPC_EmitConvertToTarget, 3,
/*  2037*/          OPC_EmitInteger, MVT::i32, 64, 
/*  2040*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2043*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6020:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 0:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf R600_Reg128:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 64:{ *:[i32] }, 0:{ *:[i32] })
/*  2055*/        0, /*End of Scope*/
/*  2056*/      /*Scope*/ 76, /*->2133*/
/*  2057*/        OPC_CheckChild4Integer, 1, 
/*  2059*/        OPC_RecordChild5, // #3 = $mask
/*  2060*/        OPC_MoveChild5,
/*  2061*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2064*/        OPC_MoveParent,
/*  2065*/        OPC_Scope, 32, /*->2099*/ // 2 children in Scope
/*  2067*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2069*/          OPC_EmitMergeInputChains1_0,
/*  2070*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2073*/          OPC_EmitConvertToTarget, 2,
/*  2075*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2079*/          OPC_EmitConvertToTarget, 3,
/*  2081*/          OPC_EmitInteger, MVT::i32, 33, 
/*  2084*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2087*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6020:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 1:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 33:{ *:[i32] }, 0:{ *:[i32] })
/*  2099*/        /*Scope*/ 32, /*->2132*/
/*  2100*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2102*/          OPC_EmitMergeInputChains1_0,
/*  2103*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2106*/          OPC_EmitConvertToTarget, 2,
/*  2108*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2112*/          OPC_EmitConvertToTarget, 3,
/*  2114*/          OPC_EmitInteger, MVT::i32, 65, 
/*  2117*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2120*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6020:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 1:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 65:{ *:[i32] }, 0:{ *:[i32] })
/*  2132*/        0, /*End of Scope*/
/*  2133*/      /*Scope*/ 76, /*->2210*/
/*  2134*/        OPC_CheckChild4Integer, 2, 
/*  2136*/        OPC_RecordChild5, // #3 = $mask
/*  2137*/        OPC_MoveChild5,
/*  2138*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2141*/        OPC_MoveParent,
/*  2142*/        OPC_Scope, 32, /*->2176*/ // 2 children in Scope
/*  2144*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2146*/          OPC_EmitMergeInputChains1_0,
/*  2147*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2150*/          OPC_EmitConvertToTarget, 2,
/*  2152*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2156*/          OPC_EmitConvertToTarget, 3,
/*  2158*/          OPC_EmitInteger, MVT::i32, 34, 
/*  2161*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2164*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6020:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 2:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 34:{ *:[i32] }, 0:{ *:[i32] })
/*  2176*/        /*Scope*/ 32, /*->2209*/
/*  2177*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2179*/          OPC_EmitMergeInputChains1_0,
/*  2180*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2183*/          OPC_EmitConvertToTarget, 2,
/*  2185*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2189*/          OPC_EmitConvertToTarget, 3,
/*  2191*/          OPC_EmitInteger, MVT::i32, 66, 
/*  2194*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2197*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6020:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 2:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 66:{ *:[i32] }, 0:{ *:[i32] })
/*  2209*/        0, /*End of Scope*/
/*  2210*/      /*Scope*/ 76, /*->2287*/
/*  2211*/        OPC_CheckChild4Integer, 3, 
/*  2213*/        OPC_RecordChild5, // #3 = $mask
/*  2214*/        OPC_MoveChild5,
/*  2215*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2218*/        OPC_MoveParent,
/*  2219*/        OPC_Scope, 32, /*->2253*/ // 2 children in Scope
/*  2221*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2223*/          OPC_EmitMergeInputChains1_0,
/*  2224*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2227*/          OPC_EmitConvertToTarget, 2,
/*  2229*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2233*/          OPC_EmitConvertToTarget, 3,
/*  2235*/          OPC_EmitInteger, MVT::i32, 35, 
/*  2238*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2241*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6020:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 3:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 35:{ *:[i32] }, 0:{ *:[i32] })
/*  2253*/        /*Scope*/ 32, /*->2286*/
/*  2254*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2256*/          OPC_EmitMergeInputChains1_0,
/*  2257*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2260*/          OPC_EmitConvertToTarget, 2,
/*  2262*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2266*/          OPC_EmitConvertToTarget, 3,
/*  2268*/          OPC_EmitInteger, MVT::i32, 67, 
/*  2271*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2274*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 6020:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 3:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 67:{ *:[i32] }, 0:{ *:[i32] })
/*  2286*/        0, /*End of Scope*/
/*  2287*/      0, /*End of Scope*/
/*  2288*/    /*Scope*/ 49, /*->2338*/
/*  2289*/      OPC_CheckChild1Integer, 114|128,46/*6002*/, 
/*  2292*/      OPC_RecordChild2, // #1 = $rw_gpr
/*  2293*/      OPC_RecordChild3, // #2 = $index_gpr
/*  2294*/      OPC_RecordChild4, // #3 = $rat_id
/*  2295*/      OPC_MoveChild4,
/*  2296*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2299*/      OPC_MoveParent,
/*  2300*/      OPC_Scope, 17, /*->2319*/ // 2 children in Scope
/*  2302*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/*  2304*/        OPC_EmitMergeInputChains1_0,
/*  2305*/        OPC_EmitConvertToTarget, 3,
/*  2307*/        OPC_EmitInteger, MVT::i32, 0, 
/*  2310*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_TYPED_cm), 0|OPFL_Chain,
                      4/*#Ops*/, 1, 2, 4, 5, 
                  // Src: (intrinsic_void 6002:{ *:[iPTR] }, R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id) - Complexity = 11
                  // Dst: (RAT_STORE_TYPED_cm R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id)
/*  2319*/      /*Scope*/ 17, /*->2337*/
/*  2320*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2322*/        OPC_EmitMergeInputChains1_0,
/*  2323*/        OPC_EmitConvertToTarget, 3,
/*  2325*/        OPC_EmitInteger, MVT::i32, 0, 
/*  2328*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_TYPED_eg), 0|OPFL_Chain,
                      4/*#Ops*/, 1, 2, 4, 5, 
                  // Src: (intrinsic_void 6002:{ *:[iPTR] }, R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id) - Complexity = 11
                  // Dst: (RAT_STORE_TYPED_eg R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id)
/*  2337*/      0, /*End of Scope*/
/*  2338*/    /*Scope*/ 11, /*->2350*/
/*  2339*/      OPC_CheckChild1Integer, 111|128,46/*5999*/, 
/*  2342*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2344*/      OPC_EmitMergeInputChains1_0,
/*  2345*/      OPC_MorphNodeTo0, TARGET_VAL(R600::GROUP_BARRIER), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (intrinsic_void 5999:{ *:[iPTR] }) - Complexity = 8
                // Dst: (GROUP_BARRIER)
/*  2350*/    /*Scope*/ 114, /*->2465*/
/*  2351*/      OPC_CheckChild1Integer, 113|128,46/*6001*/, 
/*  2354*/      OPC_RecordChild2, // #1 = $src0
/*  2355*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2357*/      OPC_EmitMergeInputChains1_0,
/*  2358*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2361*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2364*/      OPC_EmitInteger, MVT::i32, 1, 
/*  2367*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2370*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2373*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2376*/      OPC_EmitRegister, MVT::f32, R600::ZERO,
/*  2379*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2382*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2385*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2388*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2400*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2403*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2406*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2409*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2421*/      OPC_EmitInteger, MVT::i32, 1, 
/*  2424*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2427*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2430*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2433*/      OPC_EmitNode1, TARGET_VAL(R600::KILLGT), 0|OPFL_Chain,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*  2459*/      OPC_MorphNodeTo0, TARGET_VAL(R600::MASK_WRITE), 0|OPFL_Chain,
                    1/*#Ops*/, 21, 
                // Src: (intrinsic_void 6001:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:{ *:[i32] } ZERO:{ *:[f32] }, ?:{ *:[f32] }:$src0))
/*  2465*/    0, /*End of Scope*/
/*  2466*/  /*SwitchOpcode*/ 15|128,116/*14863*/, TARGET_VAL(ISD::OR),// ->17333
/*  2470*/    OPC_Scope, 34|128,115/*14754*/, /*->17227*/ // 2 children in Scope
/*  2473*/      OPC_MoveChild0,
/*  2474*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2477*/      OPC_Scope, 93|128,5/*733*/, /*->3213*/ // 8 children in Scope
/*  2480*/        OPC_RecordChild0, // #0 = $y
/*  2481*/        OPC_Scope, 108|128,3/*492*/, /*->2976*/ // 2 children in Scope
/*  2484*/          OPC_RecordChild1, // #1 = $x
/*  2485*/          OPC_MoveParent,
/*  2486*/          OPC_MoveChild1,
/*  2487*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2490*/          OPC_Scope, 120, /*->2612*/ // 4 children in Scope
/*  2492*/            OPC_RecordChild0, // #2 = $z
/*  2493*/            OPC_MoveChild1,
/*  2494*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2497*/            OPC_CheckChild0Same, 1,
/*  2499*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2510*/            OPC_MoveParent,
/*  2511*/            OPC_MoveParent,
/*  2512*/            OPC_CheckType, MVT::i32,
/*  2514*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2516*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2519*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2522*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2525*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2528*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2540*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2543*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2546*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2558*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2561*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2564*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2576*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2579*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2582*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2585*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2588*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }))) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2612*/          /*Scope*/ 120, /*->2733*/
/*  2613*/            OPC_MoveChild0,
/*  2614*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2617*/            OPC_CheckChild0Same, 1,
/*  2619*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2630*/            OPC_MoveParent,
/*  2631*/            OPC_RecordChild1, // #2 = $z
/*  2632*/            OPC_MoveParent,
/*  2633*/            OPC_CheckType, MVT::i32,
/*  2635*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2637*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2640*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2643*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2646*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2649*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2661*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2664*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2667*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2679*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2682*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2685*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2697*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2700*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2703*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2706*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2709*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2733*/          /*Scope*/ 120, /*->2854*/
/*  2734*/            OPC_RecordChild0, // #2 = $z
/*  2735*/            OPC_MoveChild1,
/*  2736*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2739*/            OPC_CheckChild0Same, 0,
/*  2741*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2752*/            OPC_MoveParent,
/*  2753*/            OPC_MoveParent,
/*  2754*/            OPC_CheckType, MVT::i32,
/*  2756*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2758*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2761*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2764*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2767*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2770*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2782*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2785*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2788*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2800*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2803*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2806*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2818*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2821*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2824*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2827*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2830*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }))) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2854*/          /*Scope*/ 120, /*->2975*/
/*  2855*/            OPC_MoveChild0,
/*  2856*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2859*/            OPC_CheckChild0Same, 0,
/*  2861*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2872*/            OPC_MoveParent,
/*  2873*/            OPC_RecordChild1, // #2 = $z
/*  2874*/            OPC_MoveParent,
/*  2875*/            OPC_CheckType, MVT::i32,
/*  2877*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2879*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2882*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2885*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2888*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2891*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2903*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2906*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2909*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2921*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2924*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2927*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2939*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2942*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2945*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2948*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2951*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2975*/          0, /*End of Scope*/
/*  2976*/        /*Scope*/ 106|128,1/*234*/, /*->3212*/
/*  2978*/          OPC_MoveChild1,
/*  2979*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2982*/          OPC_RecordChild0, // #1 = $x
/*  2983*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2994*/          OPC_MoveParent,
/*  2995*/          OPC_MoveParent,
/*  2996*/          OPC_MoveChild1,
/*  2997*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3000*/          OPC_Scope, 104, /*->3106*/ // 2 children in Scope
/*  3002*/            OPC_RecordChild0, // #2 = $y
/*  3003*/            OPC_CheckChild1Same, 1,
/*  3005*/            OPC_MoveParent,
/*  3006*/            OPC_CheckType, MVT::i32,
/*  3008*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3010*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3013*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3016*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3019*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3022*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3034*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3037*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3040*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3052*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3055*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3070*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3073*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3076*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3079*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3082*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] })), (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3106*/          /*Scope*/ 104, /*->3211*/
/*  3107*/            OPC_CheckChild0Same, 1,
/*  3109*/            OPC_RecordChild1, // #2 = $y
/*  3110*/            OPC_MoveParent,
/*  3111*/            OPC_CheckType, MVT::i32,
/*  3113*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3115*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3118*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3121*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3124*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3127*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3139*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3142*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3145*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3157*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3160*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3163*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3175*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3178*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3181*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3184*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3187*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] })), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3211*/          0, /*End of Scope*/
/*  3212*/        0, /*End of Scope*/
/*  3213*/      /*Scope*/ 107|128,1/*235*/, /*->3450*/
/*  3215*/        OPC_MoveChild0,
/*  3216*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3219*/        OPC_RecordChild0, // #0 = $x
/*  3220*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3231*/        OPC_MoveParent,
/*  3232*/        OPC_RecordChild1, // #1 = $z
/*  3233*/        OPC_MoveParent,
/*  3234*/        OPC_MoveChild1,
/*  3235*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3238*/        OPC_Scope, 104, /*->3344*/ // 2 children in Scope
/*  3240*/          OPC_RecordChild0, // #2 = $y
/*  3241*/          OPC_CheckChild1Same, 0,
/*  3243*/          OPC_MoveParent,
/*  3244*/          OPC_CheckType, MVT::i32,
/*  3246*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3248*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3251*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3254*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3257*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3260*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3272*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3275*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3278*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3290*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3293*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3296*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3308*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3311*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3314*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3317*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3320*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x)) - Complexity = 17
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3344*/        /*Scope*/ 104, /*->3449*/
/*  3345*/          OPC_CheckChild0Same, 0,
/*  3347*/          OPC_RecordChild1, // #2 = $y
/*  3348*/          OPC_MoveParent,
/*  3349*/          OPC_CheckType, MVT::i32,
/*  3351*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3353*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3356*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3359*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3362*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3365*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3377*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3380*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3383*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3395*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3398*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3401*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3413*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3416*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3419*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3422*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3425*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y)) - Complexity = 17
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3449*/        0, /*End of Scope*/
/*  3450*/      /*Scope*/ 39|128,14/*1831*/, /*->5283*/
/*  3452*/        OPC_RecordChild0, // #0 = $y
/*  3453*/        OPC_Scope, 72|128,9/*1224*/, /*->4680*/ // 2 children in Scope
/*  3456*/          OPC_RecordChild1, // #1 = $x
/*  3457*/          OPC_MoveParent,
/*  3458*/          OPC_MoveChild1,
/*  3459*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3462*/          OPC_Scope, 46|128,2/*302*/, /*->3767*/ // 4 children in Scope
/*  3465*/            OPC_RecordChild0, // #2 = $z
/*  3466*/            OPC_MoveChild1,
/*  3467*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3470*/            OPC_CheckChild0Same, 1,
/*  3472*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3483*/            OPC_MoveParent,
/*  3484*/            OPC_MoveParent,
/*  3485*/            OPC_CheckType, MVT::i64,
/*  3487*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3489*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  3492*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3495*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3498*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3501*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  3509*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3512*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3515*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3527*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3530*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/*  3538*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3541*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3544*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3556*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3559*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  3567*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3570*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3573*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3585*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3588*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3591*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3594*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3597*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  3621*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3624*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3627*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3630*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3633*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  3641*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3644*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3647*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3659*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3662*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/*  3670*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3673*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3676*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3688*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3691*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  3699*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3702*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3705*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3717*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3720*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3723*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3726*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3729*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  3753*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3756*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }))) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  3767*/          /*Scope*/ 46|128,2/*302*/, /*->4071*/
/*  3769*/            OPC_MoveChild0,
/*  3770*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3773*/            OPC_CheckChild0Same, 1,
/*  3775*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3786*/            OPC_MoveParent,
/*  3787*/            OPC_RecordChild1, // #2 = $z
/*  3788*/            OPC_MoveParent,
/*  3789*/            OPC_CheckType, MVT::i64,
/*  3791*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3793*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  3796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3799*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3802*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3805*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  3813*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3816*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3819*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3831*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3834*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/*  3842*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3845*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3848*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3860*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3863*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  3871*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3874*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3877*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3889*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3892*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3895*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3898*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3901*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  3925*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3928*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3931*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3934*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3937*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  3945*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3948*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3951*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3963*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3966*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/*  3974*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3977*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3980*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3992*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3995*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4003*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4006*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4009*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4021*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4024*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4027*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4030*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4033*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4057*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4060*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4071*/          /*Scope*/ 46|128,2/*302*/, /*->4375*/
/*  4073*/            OPC_RecordChild0, // #2 = $z
/*  4074*/            OPC_MoveChild1,
/*  4075*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4078*/            OPC_CheckChild0Same, 0,
/*  4080*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4091*/            OPC_MoveParent,
/*  4092*/            OPC_MoveParent,
/*  4093*/            OPC_CheckType, MVT::i64,
/*  4095*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4097*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4100*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4103*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4106*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4109*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  4117*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4120*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4123*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4135*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4138*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/*  4146*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4149*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4164*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4167*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  4175*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4178*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4181*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4193*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4196*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4199*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4202*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4205*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4229*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4232*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4235*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4238*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4241*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  4249*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4252*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4255*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4267*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4270*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/*  4278*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4281*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4284*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4296*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4299*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4307*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4310*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4313*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4325*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4328*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4331*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4334*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4337*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4361*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4364*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }))) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4375*/          /*Scope*/ 46|128,2/*302*/, /*->4679*/
/*  4377*/            OPC_MoveChild0,
/*  4378*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4381*/            OPC_CheckChild0Same, 0,
/*  4383*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4394*/            OPC_MoveParent,
/*  4395*/            OPC_RecordChild1, // #2 = $z
/*  4396*/            OPC_MoveParent,
/*  4397*/            OPC_CheckType, MVT::i64,
/*  4399*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4401*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4404*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4407*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4410*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4413*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  4421*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4424*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4427*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4439*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4442*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/*  4450*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4453*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4456*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4468*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4471*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  4479*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4482*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4485*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4497*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4500*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4503*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4506*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4509*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4533*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4536*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4539*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4542*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4545*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  4553*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4556*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4559*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4571*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4574*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/*  4582*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4585*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4588*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4600*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4603*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4611*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4614*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4617*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4629*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4632*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4635*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4638*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4641*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4665*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4668*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y), (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4679*/          0, /*End of Scope*/
/*  4680*/        /*Scope*/ 88|128,4/*600*/, /*->5282*/
/*  4682*/          OPC_MoveChild1,
/*  4683*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4686*/          OPC_RecordChild0, // #1 = $x
/*  4687*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4698*/          OPC_MoveParent,
/*  4699*/          OPC_MoveParent,
/*  4700*/          OPC_MoveChild1,
/*  4701*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  4704*/          OPC_Scope, 30|128,2/*286*/, /*->4993*/ // 2 children in Scope
/*  4707*/            OPC_RecordChild0, // #2 = $y
/*  4708*/            OPC_CheckChild1Same, 1,
/*  4710*/            OPC_MoveParent,
/*  4711*/            OPC_CheckType, MVT::i64,
/*  4713*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4715*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4718*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4721*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4724*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4727*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  4735*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4738*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4741*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4753*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4756*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  4764*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4767*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4770*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4782*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4785*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/*  4793*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4811*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4814*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4817*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4820*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4823*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4847*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4850*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4853*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4856*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4859*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  4867*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4870*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4873*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4885*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4888*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  4896*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4899*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4902*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4914*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4917*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/*  4925*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4928*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4931*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4943*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4946*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4949*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4952*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4955*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4979*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4982*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] })), (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4993*/          /*Scope*/ 30|128,2/*286*/, /*->5281*/
/*  4995*/            OPC_CheckChild0Same, 1,
/*  4997*/            OPC_RecordChild1, // #2 = $y
/*  4998*/            OPC_MoveParent,
/*  4999*/            OPC_CheckType, MVT::i64,
/*  5001*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5003*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5006*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5009*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5012*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5015*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  5023*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5026*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5029*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5041*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5044*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5052*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5055*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5070*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5073*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/*  5081*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5084*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5087*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5099*/            OPC_EmitInteger, MVT::i32, 1, 
/*  5102*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5105*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5108*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5111*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5135*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5138*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5141*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5144*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5147*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  5155*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5158*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5161*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5173*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5176*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5184*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5187*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5190*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5202*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5205*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/*  5213*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5216*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5219*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5231*/            OPC_EmitInteger, MVT::i32, 1, 
/*  5234*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5237*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5240*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5243*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5267*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5270*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] })), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5281*/          0, /*End of Scope*/
/*  5282*/        0, /*End of Scope*/
/*  5283*/      /*Scope*/ 89|128,4/*601*/, /*->5886*/
/*  5285*/        OPC_MoveChild0,
/*  5286*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  5289*/        OPC_RecordChild0, // #0 = $x
/*  5290*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5301*/        OPC_MoveParent,
/*  5302*/        OPC_RecordChild1, // #1 = $z
/*  5303*/        OPC_MoveParent,
/*  5304*/        OPC_MoveChild1,
/*  5305*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5308*/        OPC_Scope, 30|128,2/*286*/, /*->5597*/ // 2 children in Scope
/*  5311*/          OPC_RecordChild0, // #2 = $y
/*  5312*/          OPC_CheckChild1Same, 0,
/*  5314*/          OPC_MoveParent,
/*  5315*/          OPC_CheckType, MVT::i64,
/*  5317*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5319*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5322*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5325*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5328*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5331*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  5339*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5342*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5345*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5357*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5360*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5368*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5371*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5374*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5386*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5389*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/*  5397*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5400*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5403*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5415*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5418*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5421*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5424*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5427*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5451*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5454*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5457*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5460*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5463*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  5471*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5474*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5477*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5489*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5492*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5500*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5503*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5506*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5518*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5521*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/*  5529*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5532*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5535*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5547*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5550*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5553*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5556*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5559*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5583*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5586*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x)) - Complexity = 17
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5597*/        /*Scope*/ 30|128,2/*286*/, /*->5885*/
/*  5599*/          OPC_CheckChild0Same, 0,
/*  5601*/          OPC_RecordChild1, // #2 = $y
/*  5602*/          OPC_MoveParent,
/*  5603*/          OPC_CheckType, MVT::i64,
/*  5605*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5607*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5610*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5613*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5616*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5619*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  5627*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5630*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5633*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5645*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5648*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5656*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5659*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5662*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5674*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5677*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/*  5685*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5688*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5691*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5703*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5706*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5709*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5712*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5715*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5739*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5742*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5745*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5748*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5751*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  5759*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5762*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5765*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5777*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5780*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5788*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5791*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5794*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5806*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5809*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/*  5817*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5820*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5823*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5835*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5838*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5841*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5844*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5847*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5871*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5874*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y)) - Complexity = 17
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5885*/        0, /*End of Scope*/
/*  5886*/      /*Scope*/ 18|128,19/*2450*/, /*->8338*/
/*  5888*/        OPC_RecordChild0, // #0 = $x
/*  5889*/        OPC_Scope, 30|128,13/*1694*/, /*->7586*/ // 2 children in Scope
/*  5892*/          OPC_RecordChild1, // #1 = $z
/*  5893*/          OPC_MoveParent,
/*  5894*/          OPC_MoveChild1,
/*  5895*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5898*/          OPC_Scope, 35|128,3/*419*/, /*->6320*/ // 4 children in Scope
/*  5901*/            OPC_RecordChild0, // #2 = $y
/*  5902*/            OPC_MoveChild1,
/*  5903*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  5906*/            OPC_Scope, 76|128,1/*204*/, /*->6113*/ // 2 children in Scope
/*  5909*/              OPC_CheckChild0Same, 0,
/*  5911*/              OPC_CheckChild1Same, 1,
/*  5913*/              OPC_MoveParent,
/*  5914*/              OPC_MoveParent,
/*  5915*/              OPC_CheckType, MVT::i32,
/*  5917*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5919*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5922*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5925*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5928*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5931*/              OPC_EmitInteger, MVT::i32, 1, 
/*  5934*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5937*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5940*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5943*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5946*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5949*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5952*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5964*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5967*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5970*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5973*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5985*/              OPC_EmitInteger, MVT::i32, 1, 
/*  5988*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5991*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5994*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5997*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6023*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6026*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6029*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6041*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6044*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6047*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6059*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6062*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6065*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6077*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6080*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6083*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6086*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6089*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6113*/            /*Scope*/ 76|128,1/*204*/, /*->6319*/
/*  6115*/              OPC_CheckChild0Same, 1,
/*  6117*/              OPC_CheckChild1Same, 0,
/*  6119*/              OPC_MoveParent,
/*  6120*/              OPC_MoveParent,
/*  6121*/              OPC_CheckType, MVT::i32,
/*  6123*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6125*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6128*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6131*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6134*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6137*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6140*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6143*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6146*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6149*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6152*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6155*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6158*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6170*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6173*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6176*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6179*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6191*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6194*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6197*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6200*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6203*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6229*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6232*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6235*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6247*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6250*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6253*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6265*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6268*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6271*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6283*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6286*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6289*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6292*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6295*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6319*/            0, /*End of Scope*/
/*  6320*/          /*Scope*/ 36|128,3/*420*/, /*->6742*/
/*  6322*/            OPC_MoveChild0,
/*  6323*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  6326*/            OPC_Scope, 77|128,1/*205*/, /*->6534*/ // 2 children in Scope
/*  6329*/              OPC_CheckChild0Same, 0,
/*  6331*/              OPC_CheckChild1Same, 1,
/*  6333*/              OPC_MoveParent,
/*  6334*/              OPC_RecordChild1, // #2 = $y
/*  6335*/              OPC_MoveParent,
/*  6336*/              OPC_CheckType, MVT::i32,
/*  6338*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6340*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6343*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6346*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6349*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6352*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6355*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6358*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6361*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6364*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6367*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6370*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6373*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6385*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6388*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6391*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6394*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6406*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6409*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6412*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6415*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6418*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6444*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6447*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6450*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6462*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6465*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6468*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6480*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6483*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6486*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6498*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6501*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6504*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6507*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6510*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6534*/            /*Scope*/ 77|128,1/*205*/, /*->6741*/
/*  6536*/              OPC_CheckChild0Same, 1,
/*  6538*/              OPC_CheckChild1Same, 0,
/*  6540*/              OPC_MoveParent,
/*  6541*/              OPC_RecordChild1, // #2 = $y
/*  6542*/              OPC_MoveParent,
/*  6543*/              OPC_CheckType, MVT::i32,
/*  6545*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6547*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6550*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6553*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6556*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6559*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6562*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6565*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6568*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6571*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6574*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6577*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6580*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6592*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6595*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6598*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6601*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6613*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6616*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6619*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6622*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6625*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6651*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6654*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6657*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6669*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6672*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6675*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6687*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6690*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6693*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6705*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6708*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6711*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6714*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6717*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6741*/            0, /*End of Scope*/
/*  6742*/          /*Scope*/ 35|128,3/*419*/, /*->7163*/
/*  6744*/            OPC_RecordChild0, // #2 = $y
/*  6745*/            OPC_MoveChild1,
/*  6746*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  6749*/            OPC_Scope, 76|128,1/*204*/, /*->6956*/ // 2 children in Scope
/*  6752*/              OPC_CheckChild0Same, 1,
/*  6754*/              OPC_CheckChild1Same, 0,
/*  6756*/              OPC_MoveParent,
/*  6757*/              OPC_MoveParent,
/*  6758*/              OPC_CheckType, MVT::i32,
/*  6760*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6762*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6765*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6768*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6771*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6774*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6777*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6780*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6783*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6786*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6789*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6792*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6795*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6807*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6810*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6813*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6816*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6828*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6831*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6834*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6837*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6840*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6866*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6869*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6872*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6884*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6887*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6890*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6902*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6905*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6908*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6920*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6923*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6926*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6929*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6932*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6956*/            /*Scope*/ 76|128,1/*204*/, /*->7162*/
/*  6958*/              OPC_CheckChild0Same, 0,
/*  6960*/              OPC_CheckChild1Same, 1,
/*  6962*/              OPC_MoveParent,
/*  6963*/              OPC_MoveParent,
/*  6964*/              OPC_CheckType, MVT::i32,
/*  6966*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6968*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6971*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6974*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6977*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6980*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6983*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6986*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6989*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6992*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6995*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6998*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7001*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7013*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7016*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7019*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7022*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7034*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7037*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7040*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7043*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7046*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7072*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7075*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7078*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7090*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7093*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7096*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7108*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7111*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7114*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7126*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7129*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7132*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7135*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7138*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7162*/            0, /*End of Scope*/
/*  7163*/          /*Scope*/ 36|128,3/*420*/, /*->7585*/
/*  7165*/            OPC_MoveChild0,
/*  7166*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  7169*/            OPC_Scope, 77|128,1/*205*/, /*->7377*/ // 2 children in Scope
/*  7172*/              OPC_CheckChild0Same, 1,
/*  7174*/              OPC_CheckChild1Same, 0,
/*  7176*/              OPC_MoveParent,
/*  7177*/              OPC_RecordChild1, // #2 = $y
/*  7178*/              OPC_MoveParent,
/*  7179*/              OPC_CheckType, MVT::i32,
/*  7181*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7183*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7186*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7189*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7192*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7195*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7198*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7201*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7204*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7207*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7210*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7213*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7216*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7228*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7231*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7234*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7237*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7249*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7252*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7255*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7258*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7261*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7287*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7290*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7293*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7305*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7308*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7311*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7323*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7326*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7329*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7341*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7344*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7347*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7350*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7353*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7377*/            /*Scope*/ 77|128,1/*205*/, /*->7584*/
/*  7379*/              OPC_CheckChild0Same, 0,
/*  7381*/              OPC_CheckChild1Same, 1,
/*  7383*/              OPC_MoveParent,
/*  7384*/              OPC_RecordChild1, // #2 = $y
/*  7385*/              OPC_MoveParent,
/*  7386*/              OPC_CheckType, MVT::i32,
/*  7388*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7390*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7393*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7396*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7399*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7402*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7405*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7408*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7411*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7414*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7417*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7420*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7423*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7435*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7438*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7441*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7444*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7456*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7459*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7462*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7465*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7468*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7494*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7497*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7500*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7512*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7515*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7518*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7530*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7533*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7536*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7548*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7551*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7554*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7557*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7560*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7584*/            0, /*End of Scope*/
/*  7585*/          0, /*End of Scope*/
/*  7586*/        /*Scope*/ 109|128,5/*749*/, /*->8337*/
/*  7588*/          OPC_MoveChild1,
/*  7589*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  7592*/          OPC_RecordChild0, // #1 = $x
/*  7593*/          OPC_RecordChild1, // #2 = $z
/*  7594*/          OPC_MoveParent,
/*  7595*/          OPC_MoveParent,
/*  7596*/          OPC_MoveChild1,
/*  7597*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  7600*/          OPC_Scope, 75|128,1/*203*/, /*->7806*/ // 3 children in Scope
/*  7603*/            OPC_CheckChild0Same, 1,
/*  7605*/            OPC_CheckChild1Same, 2,
/*  7607*/            OPC_MoveParent,
/*  7608*/            OPC_CheckType, MVT::i32,
/*  7610*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7612*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7615*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7618*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7621*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7624*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7627*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7630*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7633*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7636*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7639*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7642*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7645*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7657*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7660*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7663*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7666*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7678*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7681*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7684*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7687*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7690*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7716*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7719*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7722*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7734*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7737*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7740*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7752*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7755*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7758*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7770*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7773*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7776*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7779*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7782*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7806*/          /*Scope*/ 67|128,2/*323*/, /*->8131*/
/*  7808*/            OPC_CheckChild0Same, 2,
/*  7810*/            OPC_CheckChild1Same, 1,
/*  7812*/            OPC_MoveParent,
/*  7813*/            OPC_CheckType, MVT::i32,
/*  7815*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7817*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7820*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7823*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7826*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7829*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7832*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7835*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7838*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7841*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7844*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7847*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7850*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7862*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7865*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7868*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7871*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7883*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7886*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7889*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7892*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7895*/            OPC_Scope, 116, /*->8013*/ // 2 children in Scope
/*  7897*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7923*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7926*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7929*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7941*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7944*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7947*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7959*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7962*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7965*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7977*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7980*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7983*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7986*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7989*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8013*/            /*Scope*/ 116, /*->8130*/
/*  8014*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8040*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8043*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8046*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8058*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8061*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8064*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8076*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8079*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8082*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8094*/              OPC_EmitInteger, MVT::i32, 1, 
/*  8097*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8100*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8103*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8106*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8130*/            0, /*End of Scope*/
/*  8131*/          /*Scope*/ 75|128,1/*203*/, /*->8336*/
/*  8133*/            OPC_CheckChild0Same, 1,
/*  8135*/            OPC_CheckChild1Same, 2,
/*  8137*/            OPC_MoveParent,
/*  8138*/            OPC_CheckType, MVT::i32,
/*  8140*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8142*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8145*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8148*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8151*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8154*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8157*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8160*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8163*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8166*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8169*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8172*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8175*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8187*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8190*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8193*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8196*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8208*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8211*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8214*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8217*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8220*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8246*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8249*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8252*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8264*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8267*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8270*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8282*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8285*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8288*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8300*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8303*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8306*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8309*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8312*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8336*/          0, /*End of Scope*/
/*  8337*/        0, /*End of Scope*/
/*  8338*/      /*Scope*/ 110|128,5/*750*/, /*->9090*/
/*  8340*/        OPC_MoveChild0,
/*  8341*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  8344*/        OPC_RecordChild0, // #0 = $x
/*  8345*/        OPC_RecordChild1, // #1 = $z
/*  8346*/        OPC_MoveParent,
/*  8347*/        OPC_RecordChild1, // #2 = $y
/*  8348*/        OPC_MoveParent,
/*  8349*/        OPC_MoveChild1,
/*  8350*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  8353*/        OPC_Scope, 75|128,1/*203*/, /*->8559*/ // 3 children in Scope
/*  8356*/          OPC_CheckChild0Same, 0,
/*  8358*/          OPC_CheckChild1Same, 1,
/*  8360*/          OPC_MoveParent,
/*  8361*/          OPC_CheckType, MVT::i32,
/*  8363*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8365*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8368*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8371*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8374*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8377*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8380*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8383*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8386*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8389*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8392*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8395*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8398*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8410*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8413*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8416*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8419*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8431*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8434*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8437*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8440*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8443*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8469*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8472*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8475*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8487*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8490*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8493*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8505*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8508*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8511*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8523*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8526*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8529*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8532*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8535*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8559*/        /*Scope*/ 67|128,2/*323*/, /*->8884*/
/*  8561*/          OPC_CheckChild0Same, 1,
/*  8563*/          OPC_CheckChild1Same, 0,
/*  8565*/          OPC_MoveParent,
/*  8566*/          OPC_CheckType, MVT::i32,
/*  8568*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8570*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8573*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8576*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8579*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8582*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8585*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8588*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8591*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8594*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8597*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8600*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8603*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8615*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8618*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8621*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8624*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8636*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8639*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8642*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8645*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8648*/          OPC_Scope, 116, /*->8766*/ // 2 children in Scope
/*  8650*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8676*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8679*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8682*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8694*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8697*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8700*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8712*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8715*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8718*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8730*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8733*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8736*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8739*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8742*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8766*/          /*Scope*/ 116, /*->8883*/
/*  8767*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8793*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8811*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8814*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8817*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8829*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8832*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8835*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8847*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8850*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8853*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8856*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8859*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8883*/          0, /*End of Scope*/
/*  8884*/        /*Scope*/ 75|128,1/*203*/, /*->9089*/
/*  8886*/          OPC_CheckChild0Same, 0,
/*  8888*/          OPC_CheckChild1Same, 1,
/*  8890*/          OPC_MoveParent,
/*  8891*/          OPC_CheckType, MVT::i32,
/*  8893*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8895*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8898*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8901*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8904*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8907*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8910*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8913*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8916*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8919*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8922*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8925*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8928*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8940*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8943*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8946*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8949*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8961*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8964*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8967*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8970*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8973*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8999*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9002*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9005*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9017*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9020*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9023*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9035*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9038*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9041*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9053*/          OPC_EmitInteger, MVT::i32, 1, 
/*  9056*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9059*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9062*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9065*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  9089*/        0, /*End of Scope*/
/*  9090*/      /*Scope*/ 108|128,47/*6124*/, /*->15216*/
/*  9092*/        OPC_RecordChild0, // #0 = $x
/*  9093*/        OPC_Scope, 14|128,32/*4110*/, /*->13206*/ // 2 children in Scope
/*  9096*/          OPC_RecordChild1, // #1 = $z
/*  9097*/          OPC_MoveParent,
/*  9098*/          OPC_MoveChild1,
/*  9099*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  9102*/          OPC_Scope, 127|128,7/*1023*/, /*->10128*/ // 4 children in Scope
/*  9105*/            OPC_RecordChild0, // #2 = $y
/*  9106*/            OPC_MoveChild1,
/*  9107*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  9110*/            OPC_Scope, 122|128,3/*506*/, /*->9619*/ // 2 children in Scope
/*  9113*/              OPC_CheckChild0Same, 0,
/*  9115*/              OPC_CheckChild1Same, 1,
/*  9117*/              OPC_MoveParent,
/*  9118*/              OPC_MoveParent,
/*  9119*/              OPC_CheckType, MVT::i64,
/*  9121*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  9123*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  9126*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9129*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9132*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9135*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9138*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9141*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9144*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9147*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9150*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9153*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/*  9161*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9164*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9167*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9170*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9182*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9185*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/*  9193*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9196*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9199*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9202*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9214*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9217*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9220*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9223*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9226*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*  9252*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9255*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9258*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9270*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9273*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/*  9281*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9284*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9287*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9299*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9302*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/*  9310*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9313*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9316*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9328*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9331*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9334*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9337*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9340*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/*  9364*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9367*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9370*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9373*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9376*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9379*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9382*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9385*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9388*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9391*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9394*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/*  9402*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9405*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9408*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9411*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9423*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9426*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/*  9434*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9437*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9440*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9443*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9455*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9458*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9461*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9464*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9467*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/*  9493*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9496*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9499*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9511*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9514*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/*  9522*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9525*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9528*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9540*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9543*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/*  9551*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9554*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9557*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9569*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9572*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9575*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9578*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9581*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/*  9605*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9608*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  9619*/            /*Scope*/ 122|128,3/*506*/, /*->10127*/
/*  9621*/              OPC_CheckChild0Same, 1,
/*  9623*/              OPC_CheckChild1Same, 0,
/*  9625*/              OPC_MoveParent,
/*  9626*/              OPC_MoveParent,
/*  9627*/              OPC_CheckType, MVT::i64,
/*  9629*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  9631*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  9634*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9637*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9640*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9643*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9646*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9649*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9652*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9655*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9658*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9661*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/*  9669*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9672*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9675*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9678*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9690*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9693*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/*  9701*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9704*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9707*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9710*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9722*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9725*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9728*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9731*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9734*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*  9760*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9763*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9766*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9778*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9781*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/*  9789*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9792*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9795*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9807*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9810*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/*  9818*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9821*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9824*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9836*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9839*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9842*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9845*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9848*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/*  9872*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9875*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9878*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9881*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9884*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9887*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9890*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9893*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9896*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9899*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9902*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/*  9910*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9913*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9916*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9919*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9931*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9934*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/*  9942*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9945*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9948*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9951*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9963*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9966*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9969*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9972*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9975*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 10001*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10004*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10007*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10019*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10022*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 10030*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10033*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10036*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10048*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10051*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 10059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10062*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10065*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10077*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10080*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10083*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10086*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10089*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 10113*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10116*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 10127*/            0, /*End of Scope*/
/* 10128*/          /*Scope*/ 0|128,8/*1024*/, /*->11154*/
/* 10130*/            OPC_MoveChild0,
/* 10131*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 10134*/            OPC_Scope, 123|128,3/*507*/, /*->10644*/ // 2 children in Scope
/* 10137*/              OPC_CheckChild0Same, 0,
/* 10139*/              OPC_CheckChild1Same, 1,
/* 10141*/              OPC_MoveParent,
/* 10142*/              OPC_RecordChild1, // #2 = $y
/* 10143*/              OPC_MoveParent,
/* 10144*/              OPC_CheckType, MVT::i64,
/* 10146*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 10148*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 10151*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10154*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10157*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10160*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10163*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10166*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10169*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10172*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10175*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10178*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 10186*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10189*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10192*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10195*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10207*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10210*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 10218*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10221*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10224*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10227*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10239*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10242*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10245*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10248*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10251*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 10277*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10280*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10283*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10295*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10298*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 10306*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10309*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10312*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10324*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10327*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 10335*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10338*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10341*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10353*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10356*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10359*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10362*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10365*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 10389*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10392*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10395*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10398*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10401*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10404*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10407*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10410*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10413*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10416*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10419*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 10427*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10430*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10433*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10436*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10448*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10451*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 10459*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10462*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10465*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10468*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10480*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10483*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10486*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10489*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10492*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 10518*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10521*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10524*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10536*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10539*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 10547*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10550*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10553*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10565*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10568*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 10576*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10579*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10582*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10594*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10597*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10600*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10603*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10606*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 10630*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10633*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 10644*/            /*Scope*/ 123|128,3/*507*/, /*->11153*/
/* 10646*/              OPC_CheckChild0Same, 1,
/* 10648*/              OPC_CheckChild1Same, 0,
/* 10650*/              OPC_MoveParent,
/* 10651*/              OPC_RecordChild1, // #2 = $y
/* 10652*/              OPC_MoveParent,
/* 10653*/              OPC_CheckType, MVT::i64,
/* 10655*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 10657*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 10660*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10663*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10666*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10669*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10672*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10675*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10678*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10681*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10684*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10687*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 10695*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10698*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10701*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10704*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10716*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10719*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 10727*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10730*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10733*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10736*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10748*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10751*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10754*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10757*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10760*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 10786*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10789*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10792*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10804*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10807*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 10815*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10818*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10821*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10833*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10836*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 10844*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10847*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10850*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10862*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10865*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10868*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10871*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10874*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 10898*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10901*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10904*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10907*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10910*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10913*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10916*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10919*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10922*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10925*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10928*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 10936*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10939*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10942*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10945*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10957*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10960*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 10968*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10971*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10974*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10977*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10989*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10992*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10995*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10998*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11001*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 11027*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11030*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11033*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11045*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11048*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 11056*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11062*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11074*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11077*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 11085*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11088*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11091*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11103*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11106*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11109*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11112*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11115*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 11139*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11142*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 11153*/            0, /*End of Scope*/
/* 11154*/          /*Scope*/ 127|128,7/*1023*/, /*->12179*/
/* 11156*/            OPC_RecordChild0, // #2 = $y
/* 11157*/            OPC_MoveChild1,
/* 11158*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 11161*/            OPC_Scope, 122|128,3/*506*/, /*->11670*/ // 2 children in Scope
/* 11164*/              OPC_CheckChild0Same, 1,
/* 11166*/              OPC_CheckChild1Same, 0,
/* 11168*/              OPC_MoveParent,
/* 11169*/              OPC_MoveParent,
/* 11170*/              OPC_CheckType, MVT::i64,
/* 11172*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 11174*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 11177*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11180*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11183*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11186*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11189*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11192*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11195*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11198*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11201*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11204*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 11212*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11215*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11218*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11221*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11233*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11236*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 11244*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11247*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11250*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11253*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11265*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11268*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11271*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11274*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11277*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 11303*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11306*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11309*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11321*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11324*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 11332*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11335*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11338*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11350*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11353*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 11361*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11364*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11367*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11379*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11382*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11385*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11388*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11391*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 11415*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11418*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11421*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11424*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11427*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11430*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11433*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11436*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11439*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11442*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11445*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 11453*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11456*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11459*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11462*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11474*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11477*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 11485*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11488*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11491*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11494*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11506*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11509*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11512*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11515*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11518*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 11544*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11547*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11550*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11562*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11565*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 11573*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11576*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11579*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11591*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11594*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 11602*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11605*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11608*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11620*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11623*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11626*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11629*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11632*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 11656*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11659*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 11670*/            /*Scope*/ 122|128,3/*506*/, /*->12178*/
/* 11672*/              OPC_CheckChild0Same, 0,
/* 11674*/              OPC_CheckChild1Same, 1,
/* 11676*/              OPC_MoveParent,
/* 11677*/              OPC_MoveParent,
/* 11678*/              OPC_CheckType, MVT::i64,
/* 11680*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 11682*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 11685*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11688*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11691*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11694*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11697*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11700*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11703*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11706*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11709*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11712*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 11720*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11723*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11726*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11729*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11741*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11744*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 11752*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11755*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11758*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11761*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11773*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11776*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11779*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11782*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11785*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 11811*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11814*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11817*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11829*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11832*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 11840*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11843*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11846*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11858*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11861*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 11869*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11872*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11875*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11887*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11890*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11893*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11896*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11899*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 11923*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11926*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11929*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11932*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11935*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11938*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11941*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11944*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11947*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11950*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11953*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 11961*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11964*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11967*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11970*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11982*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11985*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 11993*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11996*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11999*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12002*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12014*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12017*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12020*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12023*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12026*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 12052*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12055*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12058*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12070*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12073*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 12081*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12084*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12087*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12099*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12102*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 12110*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12113*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12116*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12128*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12131*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12134*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12137*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12140*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 12164*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12167*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 12178*/            0, /*End of Scope*/
/* 12179*/          /*Scope*/ 0|128,8/*1024*/, /*->13205*/
/* 12181*/            OPC_MoveChild0,
/* 12182*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 12185*/            OPC_Scope, 123|128,3/*507*/, /*->12695*/ // 2 children in Scope
/* 12188*/              OPC_CheckChild0Same, 1,
/* 12190*/              OPC_CheckChild1Same, 0,
/* 12192*/              OPC_MoveParent,
/* 12193*/              OPC_RecordChild1, // #2 = $y
/* 12194*/              OPC_MoveParent,
/* 12195*/              OPC_CheckType, MVT::i64,
/* 12197*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 12199*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 12202*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12205*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12208*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12211*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12214*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12217*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12220*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12223*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12226*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12229*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 12237*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12240*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12243*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12246*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12258*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12261*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 12269*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12272*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12275*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12278*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12290*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12293*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12296*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12299*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12302*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 12328*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12331*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12334*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12346*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12349*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 12357*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12360*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12363*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12375*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12378*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 12386*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12389*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12392*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12404*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12407*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12410*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12413*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12416*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 12440*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12443*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12446*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12449*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12452*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12455*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12458*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12461*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12464*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12467*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12470*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 12478*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12481*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12484*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12487*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12499*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12502*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 12510*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12513*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12516*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12519*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12531*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12534*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12537*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12540*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12543*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 12569*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12572*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12575*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12587*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12590*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 12598*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12601*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12604*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12616*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12619*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 12627*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12630*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12633*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12645*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12648*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12651*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12654*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12657*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 12681*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12684*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 12695*/            /*Scope*/ 123|128,3/*507*/, /*->13204*/
/* 12697*/              OPC_CheckChild0Same, 0,
/* 12699*/              OPC_CheckChild1Same, 1,
/* 12701*/              OPC_MoveParent,
/* 12702*/              OPC_RecordChild1, // #2 = $y
/* 12703*/              OPC_MoveParent,
/* 12704*/              OPC_CheckType, MVT::i64,
/* 12706*/              OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 12708*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 12711*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12714*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12717*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12720*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12723*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12726*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12729*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12732*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12735*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12738*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 12746*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12749*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12752*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12755*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12767*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12770*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 12778*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12781*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12784*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12787*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12799*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12802*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12805*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12808*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12811*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 12837*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12840*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12843*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12855*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12858*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 12866*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12869*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12872*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12884*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12887*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 12895*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12898*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12901*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12913*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12916*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12919*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12922*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12925*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 12949*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12952*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12955*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12958*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12961*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12964*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12967*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12970*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12973*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12976*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12979*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 12987*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12990*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12993*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12996*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13008*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13011*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 13019*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13022*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13025*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13028*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13040*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13043*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13046*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13049*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13052*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 13078*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13081*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13084*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13096*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13099*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 13107*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13110*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13113*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13125*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13128*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 13136*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13139*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13142*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13154*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13157*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13160*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13163*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13166*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 13190*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13193*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 13204*/            0, /*End of Scope*/
/* 13205*/          0, /*End of Scope*/
/* 13206*/        /*Scope*/ 87|128,15/*2007*/, /*->15215*/
/* 13208*/          OPC_MoveChild1,
/* 13209*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 13212*/          OPC_RecordChild0, // #1 = $x
/* 13213*/          OPC_RecordChild1, // #2 = $z
/* 13214*/          OPC_MoveParent,
/* 13215*/          OPC_MoveParent,
/* 13216*/          OPC_MoveChild1,
/* 13217*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 13220*/          OPC_Scope, 121|128,3/*505*/, /*->13728*/ // 3 children in Scope
/* 13223*/            OPC_CheckChild0Same, 1,
/* 13225*/            OPC_CheckChild1Same, 2,
/* 13227*/            OPC_MoveParent,
/* 13228*/            OPC_CheckType, MVT::i64,
/* 13230*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 13232*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 13235*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13238*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13241*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13244*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13247*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13250*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13253*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13256*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13259*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13262*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 13270*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13273*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13276*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13279*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13291*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13294*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 13302*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13305*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13308*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13311*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13323*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13326*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13329*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13332*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13335*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 13361*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13364*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13367*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13379*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13382*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 32,  // Results = #33
/* 13390*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13393*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13396*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13408*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13411*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 13419*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13422*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13425*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13437*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13440*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13443*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13446*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13449*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 13473*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13476*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13479*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13482*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13485*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13488*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13491*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13494*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13497*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13500*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13503*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 13511*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13514*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13517*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13520*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13532*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13535*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 13543*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13546*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13549*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13552*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13564*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13567*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13570*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13573*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13576*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 13602*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13608*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13620*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13623*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 76,  // Results = #77
/* 13631*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13634*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13637*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13649*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13652*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 13660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13666*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13678*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13681*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13690*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 13714*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13717*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 13728*/          /*Scope*/ 81|128,7/*977*/, /*->14707*/
/* 13730*/            OPC_CheckChild0Same, 2,
/* 13732*/            OPC_CheckChild1Same, 1,
/* 13734*/            OPC_MoveParent,
/* 13735*/            OPC_CheckType, MVT::i64,
/* 13737*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 13739*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 13742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13745*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13748*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13751*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13754*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13757*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13766*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13769*/            OPC_Scope, 82|128,3/*466*/, /*->14238*/ // 2 children in Scope
/* 13772*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 13780*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13783*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13786*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13789*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13801*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13804*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 13812*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13815*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13818*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13821*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13833*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13836*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13839*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13842*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13845*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 13871*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13874*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13877*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13889*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13892*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 32,  // Results = #33
/* 13900*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13903*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13906*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13918*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13921*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 13929*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13932*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13935*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13947*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13950*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13953*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13956*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13959*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 13983*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13986*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13989*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13992*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13995*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13998*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14001*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14004*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14007*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14010*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14013*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 14021*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14024*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14027*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14030*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14042*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14045*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 14053*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14056*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14062*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14074*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14077*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14080*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14083*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14086*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 14112*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14115*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14118*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14130*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14133*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 76,  // Results = #77
/* 14141*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14144*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14147*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14159*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14162*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 14170*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14173*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14176*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14188*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14191*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14194*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14197*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14200*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 14224*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14227*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 14238*/            /*Scope*/ 82|128,3/*466*/, /*->14706*/
/* 14240*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 12,  // Results = #13
/* 14248*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14251*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14254*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14257*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14269*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14272*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 14280*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14283*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14286*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14289*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14301*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14304*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14307*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14310*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14313*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 14339*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14342*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14345*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14357*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14360*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 14368*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14371*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14374*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14386*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14389*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 14397*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14400*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14403*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14415*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14418*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14421*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14424*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14427*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 14451*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14454*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14457*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14460*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14463*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14466*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14469*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14472*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14475*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14478*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14481*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 56,  // Results = #57
/* 14489*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14492*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14495*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14498*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14510*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14513*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 14521*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14524*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14527*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14530*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14542*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14545*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14548*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14551*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14554*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 14580*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14583*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14586*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14598*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14601*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 14609*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14612*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14615*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14627*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14630*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 14638*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14641*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14644*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14656*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14659*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14662*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14665*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14668*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 14692*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14695*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 14706*/            0, /*End of Scope*/
/* 14707*/          /*Scope*/ 121|128,3/*505*/, /*->15214*/
/* 14709*/            OPC_CheckChild0Same, 1,
/* 14711*/            OPC_CheckChild1Same, 2,
/* 14713*/            OPC_MoveParent,
/* 14714*/            OPC_CheckType, MVT::i64,
/* 14716*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 14718*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 14721*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14724*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14727*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14730*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14733*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14736*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14739*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14745*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14748*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 12,  // Results = #13
/* 14756*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14759*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14762*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14765*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14777*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14780*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 14788*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14797*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14809*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14812*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14815*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14818*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14821*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 14847*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14850*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14853*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14865*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14868*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 14876*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14879*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14882*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14894*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14897*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 14905*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14908*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14911*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14923*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14926*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14929*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14932*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14935*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 14959*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14962*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14965*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14968*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14971*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14974*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14977*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14980*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14983*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14986*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14989*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 56,  // Results = #57
/* 14997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15006*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15018*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15021*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 15029*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15032*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15035*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15038*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15050*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15053*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15056*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15059*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15062*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 15088*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15094*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15106*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15109*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 15117*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15120*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15123*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15135*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15138*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 15146*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15149*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15164*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15167*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15170*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15173*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15176*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 15200*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15203*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 15214*/          0, /*End of Scope*/
/* 15215*/        0, /*End of Scope*/
/* 15216*/      /*Scope*/ 88|128,15/*2008*/, /*->17226*/
/* 15218*/        OPC_MoveChild0,
/* 15219*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 15222*/        OPC_RecordChild0, // #0 = $x
/* 15223*/        OPC_RecordChild1, // #1 = $z
/* 15224*/        OPC_MoveParent,
/* 15225*/        OPC_RecordChild1, // #2 = $y
/* 15226*/        OPC_MoveParent,
/* 15227*/        OPC_MoveChild1,
/* 15228*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 15231*/        OPC_Scope, 121|128,3/*505*/, /*->15739*/ // 3 children in Scope
/* 15234*/          OPC_CheckChild0Same, 0,
/* 15236*/          OPC_CheckChild1Same, 1,
/* 15238*/          OPC_MoveParent,
/* 15239*/          OPC_CheckType, MVT::i64,
/* 15241*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 15243*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 15246*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15249*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15252*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15255*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15258*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15261*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15264*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15267*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15270*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15273*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 15281*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15284*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15287*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15290*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15302*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15305*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 15313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15316*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15319*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15322*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15334*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15337*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15340*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15343*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15346*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 15372*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15375*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15378*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15390*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15393*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 15401*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15404*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15407*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15419*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15422*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 15430*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15436*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15448*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15451*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15454*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15457*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15460*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 15484*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15487*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15490*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15493*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15496*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15499*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15502*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15505*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15508*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15511*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15514*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 15522*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15525*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15528*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15531*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15543*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15546*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 15554*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15557*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15563*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15575*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15578*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15581*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15584*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15587*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 15613*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15616*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15619*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15631*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15634*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 15642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15648*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15660*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15663*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 15671*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15674*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15677*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15689*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15692*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15695*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15698*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15701*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 15725*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15728*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 15739*/        /*Scope*/ 81|128,7/*977*/, /*->16718*/
/* 15741*/          OPC_CheckChild0Same, 1,
/* 15743*/          OPC_CheckChild1Same, 0,
/* 15745*/          OPC_MoveParent,
/* 15746*/          OPC_CheckType, MVT::i64,
/* 15748*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 15750*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 15753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15756*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15759*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15762*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15765*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15768*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15771*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15774*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15777*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15780*/          OPC_Scope, 82|128,3/*466*/, /*->16249*/ // 2 children in Scope
/* 15783*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 15791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15797*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15800*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15812*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15815*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 15823*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15826*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15829*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15832*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15844*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15847*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15850*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15853*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15856*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 15882*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15885*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15888*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15900*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15903*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 15911*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15914*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15917*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15929*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15932*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 15940*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15943*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15946*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15958*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15961*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15964*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15967*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15970*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 15994*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16006*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16009*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16012*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16015*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16018*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16021*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16024*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 16032*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16035*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16038*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16041*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16053*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16056*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 16064*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16067*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16070*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16073*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16085*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16088*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16094*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16097*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 16123*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16126*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16129*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16141*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16144*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 16152*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16155*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16158*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16170*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16173*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 16181*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16184*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16187*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16199*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16202*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16205*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16208*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16211*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 16235*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16238*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 16249*/          /*Scope*/ 82|128,3/*466*/, /*->16717*/
/* 16251*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 16259*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16262*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16265*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16268*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16280*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16283*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 16291*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16294*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16297*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16300*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16312*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16315*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16318*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16321*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16324*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 16350*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16353*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16356*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16368*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16371*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 16379*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16382*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16385*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16397*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16400*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 16408*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16411*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16414*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16426*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16429*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16432*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16435*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16438*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 16462*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16465*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16468*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16471*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16474*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16477*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16480*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16483*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16486*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16489*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16492*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 16500*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16503*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16506*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16509*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16521*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16524*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 16532*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16535*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16538*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16541*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16553*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16556*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16559*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16562*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16565*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 16591*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16594*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16597*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16609*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16612*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 16620*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16623*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16626*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16638*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16641*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 16649*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16652*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16655*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16667*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16670*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16673*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16676*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16679*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 16703*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16706*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 16717*/          0, /*End of Scope*/
/* 16718*/        /*Scope*/ 121|128,3/*505*/, /*->17225*/
/* 16720*/          OPC_CheckChild0Same, 0,
/* 16722*/          OPC_CheckChild1Same, 1,
/* 16724*/          OPC_MoveParent,
/* 16725*/          OPC_CheckType, MVT::i64,
/* 16727*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 16729*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 16732*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16735*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16738*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16741*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16744*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16747*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16750*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16756*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16759*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 16767*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16770*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16773*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16776*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16788*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16791*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 16799*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16802*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16805*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16808*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16820*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16823*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16832*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 16858*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16861*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16864*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16876*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16879*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 16887*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16890*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16893*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16905*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16908*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 16916*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16919*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16922*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16934*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16937*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16943*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16946*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 16970*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16973*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16976*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16982*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16985*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16988*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16991*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16994*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16997*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17000*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 17008*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17011*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17014*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17017*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17029*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17032*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 17040*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17043*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17046*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17049*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17061*/          OPC_EmitInteger, MVT::i32, 1, 
/* 17064*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17067*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17070*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17073*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 17099*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17105*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17117*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17120*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 17128*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17131*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17134*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17146*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17149*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 17157*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17160*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17163*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17175*/          OPC_EmitInteger, MVT::i32, 1, 
/* 17178*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17181*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17187*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 17211*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17214*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 17225*/        0, /*End of Scope*/
/* 17226*/      0, /*End of Scope*/
/* 17227*/    /*Scope*/ 104, /*->17332*/
/* 17228*/      OPC_RecordChild0, // #0 = $src0
/* 17229*/      OPC_RecordChild1, // #1 = $src1
/* 17230*/      OPC_CheckType, MVT::i32,
/* 17232*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17234*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17237*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17240*/      OPC_EmitInteger, MVT::i32, 1, 
/* 17243*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17246*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17249*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17252*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17255*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17258*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17261*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17273*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17282*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17294*/      OPC_EmitInteger, MVT::i32, 1, 
/* 17297*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17300*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17303*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17306*/      OPC_MorphNodeTo1, TARGET_VAL(R600::OR_INT), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (or:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (OR_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 17332*/    0, /*End of Scope*/
/* 17333*/  /*SwitchOpcode*/ 25, TARGET_VAL(AMDGPUISD::REGISTER_LOAD),// ->17361
/* 17336*/    OPC_RecordNode, // #0 = 'AMDGPUregister_load' chained node
/* 17337*/    OPC_RecordChild1, // #1 = $addr
/* 17338*/    OPC_RecordChild2, // #2 = $chan
/* 17339*/    OPC_MoveChild2,
/* 17340*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/* 17343*/    OPC_CheckType, MVT::i32,
/* 17345*/    OPC_MoveParent,
/* 17346*/    OPC_CheckType, MVT::i32,
/* 17348*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #3 #4
/* 17351*/    OPC_EmitMergeInputChains1_0,
/* 17352*/    OPC_MorphNodeTo1, TARGET_VAL(R600::R600_RegisterLoad), 0|OPFL_Chain,
                  MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (AMDGPUregister_load:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan) - Complexity = 15
              // Dst: (R600_RegisterLoad:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan)
/* 17361*/  /*SwitchOpcode*/ 26, TARGET_VAL(AMDGPUISD::REGISTER_STORE),// ->17390
/* 17364*/    OPC_RecordNode, // #0 = 'AMDGPUregister_store' chained node
/* 17365*/    OPC_RecordChild1, // #1 = $val
/* 17366*/    OPC_CheckChild1Type, MVT::i32,
/* 17368*/    OPC_RecordChild2, // #2 = $addr
/* 17369*/    OPC_RecordChild3, // #3 = $chan
/* 17370*/    OPC_MoveChild3,
/* 17371*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/* 17374*/    OPC_CheckType, MVT::i32,
/* 17376*/    OPC_MoveParent,
/* 17377*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #4 #5
/* 17380*/    OPC_EmitMergeInputChains1_0,
/* 17381*/    OPC_MorphNodeTo0, TARGET_VAL(R600::R600_RegisterStore), 0|OPFL_Chain,
                  4/*#Ops*/, 1, 4, 5, 3, 
              // Src: (AMDGPUregister_store i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan) - Complexity = 15
              // Dst: (R600_RegisterStore i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan)
/* 17390*/  /*SwitchOpcode*/ 45|128,35/*4525*/, TARGET_VAL(ISD::SELECT_CC),// ->21919
/* 17394*/    OPC_RecordChild0, // #0 = $src0
/* 17395*/    OPC_Scope, 60|128,23/*3004*/, /*->20402*/ // 2 children in Scope
/* 17398*/      OPC_CheckChild0Type, MVT::f32,
/* 17400*/      OPC_Scope, 72|128,13/*1736*/, /*->19139*/ // 2 children in Scope
/* 17403*/        OPC_RecordChild1, // #1 = $src1
/* 17404*/        OPC_Scope, 96|128,6/*864*/, /*->18271*/ // 2 children in Scope
/* 17407*/          OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17418*/          OPC_CheckChild3Integer, 0, 
/* 17420*/          OPC_MoveChild4,
/* 17421*/          OPC_Scope, 105, /*->17528*/ // 8 children in Scope
/* 17423*/            OPC_CheckCondCode, ISD::SETOEQ,
/* 17425*/            OPC_MoveParent,
/* 17426*/            OPC_CheckType, MVT::i32,
/* 17428*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17430*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17433*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17436*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17439*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17442*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17445*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17448*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17451*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17454*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17457*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17469*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17472*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17475*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17478*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17490*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17493*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17496*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17499*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17502*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETOEQ:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17528*/          /*Scope*/ 105, /*->17634*/
/* 17529*/            OPC_CheckCondCode, ISD::SETEQ,
/* 17531*/            OPC_MoveParent,
/* 17532*/            OPC_CheckType, MVT::i32,
/* 17534*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17536*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17539*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17542*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17545*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17548*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17551*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17554*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17557*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17560*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17563*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17575*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17578*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17581*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17584*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17596*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17599*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17602*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17608*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETEQ:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17634*/          /*Scope*/ 105, /*->17740*/
/* 17635*/            OPC_CheckCondCode, ISD::SETOGT,
/* 17637*/            OPC_MoveParent,
/* 17638*/            OPC_CheckType, MVT::i32,
/* 17640*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17642*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17645*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17648*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17651*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17654*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17657*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17666*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17669*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17681*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17690*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17702*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17705*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17708*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17711*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17714*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETOGT:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETGT_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17740*/          /*Scope*/ 105, /*->17846*/
/* 17741*/            OPC_CheckCondCode, ISD::SETGT,
/* 17743*/            OPC_MoveParent,
/* 17744*/            OPC_CheckType, MVT::i32,
/* 17746*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17748*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17751*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17754*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17757*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17766*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17769*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17772*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17775*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17787*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17790*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17793*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17796*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17808*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17811*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17814*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17817*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17820*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETGT_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17846*/          /*Scope*/ 105, /*->17952*/
/* 17847*/            OPC_CheckCondCode, ISD::SETOGE,
/* 17849*/            OPC_MoveParent,
/* 17850*/            OPC_CheckType, MVT::i32,
/* 17852*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17854*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17857*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17860*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17863*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17866*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17869*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17872*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17875*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17878*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17881*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17893*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17896*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17899*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17902*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17914*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17917*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17920*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17923*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17926*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETOGE:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETGE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17952*/          /*Scope*/ 105, /*->18058*/
/* 17953*/            OPC_CheckCondCode, ISD::SETGE,
/* 17955*/            OPC_MoveParent,
/* 17956*/            OPC_CheckType, MVT::i32,
/* 17958*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17960*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17963*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17966*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17969*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17972*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17975*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17978*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17981*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17984*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17987*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17999*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18002*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18005*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18008*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18020*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18023*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18026*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18029*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18032*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGE:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETGE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18058*/          /*Scope*/ 105, /*->18164*/
/* 18059*/            OPC_CheckCondCode, ISD::SETUNE,
/* 18061*/            OPC_MoveParent,
/* 18062*/            OPC_CheckType, MVT::i32,
/* 18064*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18066*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18069*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18072*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18075*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18078*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18081*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18084*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18087*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18090*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18093*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18105*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18108*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18111*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18114*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18126*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18129*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18132*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18135*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18138*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUNE:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETNE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18164*/          /*Scope*/ 105, /*->18270*/
/* 18165*/            OPC_CheckCondCode, ISD::SETNE,
/* 18167*/            OPC_MoveParent,
/* 18168*/            OPC_CheckType, MVT::i32,
/* 18170*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18172*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18175*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18178*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18181*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18184*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18187*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18190*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18193*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18196*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18199*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18211*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18214*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18217*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18220*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18232*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18235*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18238*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18241*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18244*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 13
                      // Dst: (SETNE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18270*/          0, /*End of Scope*/
/* 18271*/        /*Scope*/ 97|128,6/*865*/, /*->19138*/
/* 18273*/          OPC_MoveChild2,
/* 18274*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 18277*/          OPC_CheckPredicate, 2, // Predicate_FP_ONE
/* 18279*/          OPC_MoveParent,
/* 18280*/          OPC_MoveChild3,
/* 18281*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 18284*/          OPC_CheckPredicate, 3, // Predicate_FP_ZERO
/* 18286*/          OPC_MoveParent,
/* 18287*/          OPC_MoveChild4,
/* 18288*/          OPC_Scope, 105, /*->18395*/ // 8 children in Scope
/* 18290*/            OPC_CheckCondCode, ISD::SETOEQ,
/* 18292*/            OPC_MoveParent,
/* 18293*/            OPC_CheckType, MVT::f32,
/* 18295*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18297*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18300*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18303*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18306*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18309*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18312*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18315*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18318*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18321*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18324*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18336*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18339*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18342*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18345*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18357*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18360*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18363*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18366*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18369*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETOEQ:{ *:[Other] }) - Complexity = 11
                      // Dst: (SETE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18395*/          /*Scope*/ 105, /*->18501*/
/* 18396*/            OPC_CheckCondCode, ISD::SETEQ,
/* 18398*/            OPC_MoveParent,
/* 18399*/            OPC_CheckType, MVT::f32,
/* 18401*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18403*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18406*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18409*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18412*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18415*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18418*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18421*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18424*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18427*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18430*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18442*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18445*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18448*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18451*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18463*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18466*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18469*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18472*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18475*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETEQ:{ *:[Other] }) - Complexity = 11
                      // Dst: (SETE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18501*/          /*Scope*/ 105, /*->18607*/
/* 18502*/            OPC_CheckCondCode, ISD::SETOGT,
/* 18504*/            OPC_MoveParent,
/* 18505*/            OPC_CheckType, MVT::f32,
/* 18507*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18509*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18512*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18515*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18518*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18521*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18524*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18527*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18530*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18533*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18536*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18548*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18551*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18554*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18557*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18569*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18572*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18575*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18578*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18581*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGT), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETOGT:{ *:[Other] }) - Complexity = 11
                      // Dst: (SGT:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18607*/          /*Scope*/ 105, /*->18713*/
/* 18608*/            OPC_CheckCondCode, ISD::SETGT,
/* 18610*/            OPC_MoveParent,
/* 18611*/            OPC_CheckType, MVT::f32,
/* 18613*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18615*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18618*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18621*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18624*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18627*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18630*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18633*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18636*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18639*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18642*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18654*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18657*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18663*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18675*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18678*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18681*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18687*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGT), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETGT:{ *:[Other] }) - Complexity = 11
                      // Dst: (SGT:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18713*/          /*Scope*/ 105, /*->18819*/
/* 18714*/            OPC_CheckCondCode, ISD::SETOGE,
/* 18716*/            OPC_MoveParent,
/* 18717*/            OPC_CheckType, MVT::f32,
/* 18719*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18721*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18724*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18727*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18730*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18733*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18736*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18739*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18745*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18748*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18766*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18769*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18781*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18784*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18787*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18790*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18793*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETOGE:{ *:[Other] }) - Complexity = 11
                      // Dst: (SGE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18819*/          /*Scope*/ 105, /*->18925*/
/* 18820*/            OPC_CheckCondCode, ISD::SETGE,
/* 18822*/            OPC_MoveParent,
/* 18823*/            OPC_CheckType, MVT::f32,
/* 18825*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18827*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18830*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18833*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18836*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18839*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18842*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18845*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18848*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18851*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18854*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18866*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18869*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18872*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18875*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18887*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18890*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18893*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18896*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18899*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETGE:{ *:[Other] }) - Complexity = 11
                      // Dst: (SGE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18925*/          /*Scope*/ 105, /*->19031*/
/* 18926*/            OPC_CheckCondCode, ISD::SETUNE,
/* 18928*/            OPC_MoveParent,
/* 18929*/            OPC_CheckType, MVT::f32,
/* 18931*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18933*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18936*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18939*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18942*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18945*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18948*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18951*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18954*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18957*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18960*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18972*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18975*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18978*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18981*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18993*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18996*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18999*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19002*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19005*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SNE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETUNE:{ *:[Other] }) - Complexity = 11
                      // Dst: (SNE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 19031*/          /*Scope*/ 105, /*->19137*/
/* 19032*/            OPC_CheckCondCode, ISD::SETNE,
/* 19034*/            OPC_MoveParent,
/* 19035*/            OPC_CheckType, MVT::f32,
/* 19037*/            OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19039*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19042*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19045*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19048*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19051*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19054*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19057*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19060*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19063*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19066*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19078*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19081*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19084*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19087*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19099*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19102*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19105*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19108*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19111*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SNE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, SETNE:{ *:[Other] }) - Complexity = 11
                      // Dst: (SNE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 19137*/          0, /*End of Scope*/
/* 19138*/        0, /*End of Scope*/
/* 19139*/      /*Scope*/ 108|128,9/*1260*/, /*->20401*/
/* 19141*/        OPC_MoveChild1,
/* 19142*/        OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 19145*/        OPC_CheckPredicate, 3, // Predicate_FP_ZERO
/* 19147*/        OPC_MoveParent,
/* 19148*/        OPC_RecordChild2, // #1 = $src1
/* 19149*/        OPC_RecordChild3, // #2 = $src2
/* 19150*/        OPC_MoveChild4,
/* 19151*/        OPC_Scope, 103, /*->19256*/ // 12 children in Scope
/* 19153*/          OPC_CheckCondCode, ISD::SETOEQ,
/* 19155*/          OPC_MoveParent,
/* 19156*/          OPC_CheckType, MVT::f32,
/* 19158*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19160*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19163*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19166*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19169*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19172*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19187*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19190*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19202*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19205*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19208*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19220*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19223*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19226*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19229*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19232*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOEQ:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19256*/        /*Scope*/ 103, /*->19360*/
/* 19257*/          OPC_CheckCondCode, ISD::SETEQ,
/* 19259*/          OPC_MoveParent,
/* 19260*/          OPC_CheckType, MVT::f32,
/* 19262*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19264*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19267*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19270*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19273*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19276*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19288*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19291*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19294*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19306*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19309*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19312*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19324*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19327*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19330*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19333*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19336*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19360*/        /*Scope*/ 103, /*->19464*/
/* 19361*/          OPC_CheckCondCode, ISD::SETOGT,
/* 19363*/          OPC_MoveParent,
/* 19364*/          OPC_CheckType, MVT::f32,
/* 19366*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19368*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19371*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19374*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19377*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19380*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19392*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19395*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19398*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19410*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19413*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19416*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19428*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19431*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19434*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19437*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19440*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOGT:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGT_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19464*/        /*Scope*/ 103, /*->19568*/
/* 19465*/          OPC_CheckCondCode, ISD::SETGT,
/* 19467*/          OPC_MoveParent,
/* 19468*/          OPC_CheckType, MVT::f32,
/* 19470*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19472*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19475*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19478*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19481*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19484*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19496*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19499*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19502*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19514*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19517*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19520*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19532*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19535*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19538*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19541*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19544*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGT_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19568*/        /*Scope*/ 103, /*->19672*/
/* 19569*/          OPC_CheckCondCode, ISD::SETOGE,
/* 19571*/          OPC_MoveParent,
/* 19572*/          OPC_CheckType, MVT::f32,
/* 19574*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19576*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19579*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19582*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19585*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19588*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19600*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19603*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19606*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19618*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19621*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19624*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19636*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19639*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19648*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOGE:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19672*/        /*Scope*/ 103, /*->19776*/
/* 19673*/          OPC_CheckCondCode, ISD::SETGE,
/* 19675*/          OPC_MoveParent,
/* 19676*/          OPC_CheckType, MVT::f32,
/* 19678*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 19680*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19683*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19686*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19689*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19692*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19704*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19707*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19710*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19722*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19725*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19728*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19740*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19743*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19746*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19749*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19752*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19776*/        /*Scope*/ 103, /*->19880*/
/* 19777*/          OPC_CheckCondCode, ISD::SETOEQ,
/* 19779*/          OPC_MoveParent,
/* 19780*/          OPC_CheckType, MVT::f32,
/* 19782*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19784*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19787*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19790*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19793*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19796*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19808*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19811*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19814*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19832*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19844*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19847*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19850*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19853*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19856*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOEQ:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19880*/        /*Scope*/ 103, /*->19984*/
/* 19881*/          OPC_CheckCondCode, ISD::SETEQ,
/* 19883*/          OPC_MoveParent,
/* 19884*/          OPC_CheckType, MVT::f32,
/* 19886*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19888*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19891*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19894*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19897*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19900*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19912*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19915*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19918*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19930*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19933*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19936*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19948*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19951*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19954*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19957*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19960*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 19984*/        /*Scope*/ 103, /*->20088*/
/* 19985*/          OPC_CheckCondCode, ISD::SETOGT,
/* 19987*/          OPC_MoveParent,
/* 19988*/          OPC_CheckType, MVT::f32,
/* 19990*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19992*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19995*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19998*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20001*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20004*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20016*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20019*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20022*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20034*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20037*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20040*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20052*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20055*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20058*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20061*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20064*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOGT:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGT_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 20088*/        /*Scope*/ 103, /*->20192*/
/* 20089*/          OPC_CheckCondCode, ISD::SETGT,
/* 20091*/          OPC_MoveParent,
/* 20092*/          OPC_CheckType, MVT::f32,
/* 20094*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20096*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20099*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20105*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20108*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20120*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20123*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20126*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20138*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20141*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20144*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20156*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20159*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20162*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20165*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20168*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGT_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 20192*/        /*Scope*/ 103, /*->20296*/
/* 20193*/          OPC_CheckCondCode, ISD::SETOGE,
/* 20195*/          OPC_MoveParent,
/* 20196*/          OPC_CheckType, MVT::f32,
/* 20198*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20200*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20203*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20206*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20209*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20212*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20224*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20227*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20230*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20242*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20245*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20248*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20260*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20263*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20266*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20269*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20272*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETOGE:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 20296*/        /*Scope*/ 103, /*->20400*/
/* 20297*/          OPC_CheckCondCode, ISD::SETGE,
/* 20299*/          OPC_MoveParent,
/* 20300*/          OPC_CheckType, MVT::f32,
/* 20302*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20304*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20307*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20310*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20316*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20328*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20331*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20334*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20346*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20349*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20352*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20364*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20367*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20370*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20373*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20376*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 7
                    // Dst: (CNDGE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 20400*/        0, /*End of Scope*/
/* 20401*/      0, /*End of Scope*/
/* 20402*/    /*Scope*/ 106|128,11/*1514*/, /*->21918*/
/* 20404*/      OPC_CheckChild0Type, MVT::i32,
/* 20406*/      OPC_Scope, 13|128,5/*653*/, /*->21062*/ // 3 children in Scope
/* 20409*/        OPC_RecordChild1, // #1 = $src1
/* 20410*/        OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20421*/        OPC_CheckChild3Integer, 0, 
/* 20423*/        OPC_MoveChild4,
/* 20424*/        OPC_Scope, 105, /*->20531*/ // 6 children in Scope
/* 20426*/          OPC_CheckCondCode, ISD::SETEQ,
/* 20428*/          OPC_MoveParent,
/* 20429*/          OPC_CheckType, MVT::i32,
/* 20431*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20436*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20439*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20442*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20445*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20448*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20451*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20454*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20457*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20460*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20472*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20475*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20478*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20481*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20493*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20496*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20499*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20502*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20505*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETEQ:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20531*/        /*Scope*/ 105, /*->20637*/
/* 20532*/          OPC_CheckCondCode, ISD::SETGT,
/* 20534*/          OPC_MoveParent,
/* 20535*/          OPC_CheckType, MVT::i32,
/* 20537*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20539*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20542*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20545*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20548*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20551*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20554*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20557*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20563*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20566*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20578*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20581*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20584*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20587*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20599*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20602*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20605*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20608*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20611*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGT_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20637*/        /*Scope*/ 105, /*->20743*/
/* 20638*/          OPC_CheckCondCode, ISD::SETGE,
/* 20640*/          OPC_MoveParent,
/* 20641*/          OPC_CheckType, MVT::i32,
/* 20643*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20648*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20651*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20654*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20657*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20660*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20663*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20666*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20669*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20672*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20684*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20687*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20690*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20693*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20705*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20708*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20711*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20714*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20717*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20743*/        /*Scope*/ 105, /*->20849*/
/* 20744*/          OPC_CheckCondCode, ISD::SETNE,
/* 20746*/          OPC_MoveParent,
/* 20747*/          OPC_CheckType, MVT::i32,
/* 20749*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20751*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20754*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20757*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20760*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20763*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20766*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20769*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20772*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20775*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20778*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20790*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20793*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20796*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20799*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20811*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20814*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20817*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20820*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20823*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETNE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20849*/        /*Scope*/ 105, /*->20955*/
/* 20850*/          OPC_CheckCondCode, ISD::SETUGT,
/* 20852*/          OPC_MoveParent,
/* 20853*/          OPC_CheckType, MVT::i32,
/* 20855*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20857*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20860*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20863*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20866*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20869*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20872*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20875*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20878*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20881*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20884*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20896*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20899*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20902*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20905*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20917*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20920*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20923*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20926*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20929*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_UINT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUGT:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGT_UINT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 20955*/        /*Scope*/ 105, /*->21061*/
/* 20956*/          OPC_CheckCondCode, ISD::SETUGE,
/* 20958*/          OPC_MoveParent,
/* 20959*/          OPC_CheckType, MVT::i32,
/* 20961*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20963*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20966*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20969*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20972*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20975*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20978*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20981*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20984*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20987*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20990*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21002*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21005*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21008*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21011*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21023*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21026*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21029*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21032*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21035*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_UINT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUGE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGE_UINT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 21061*/        0, /*End of Scope*/
/* 21062*/      /*Scope*/ 95|128,5/*735*/, /*->21799*/
/* 21064*/        OPC_CheckChild1Integer, 0, 
/* 21066*/        OPC_RecordChild2, // #1 = $src1
/* 21067*/        OPC_RecordChild3, // #2 = $src2
/* 21068*/        OPC_MoveChild4,
/* 21069*/        OPC_Scope, 103, /*->21174*/ // 7 children in Scope
/* 21071*/          OPC_CheckCondCode, ISD::SETEQ,
/* 21073*/          OPC_MoveParent,
/* 21074*/          OPC_CheckType, MVT::i32,
/* 21076*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21078*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21081*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21084*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21087*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21090*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21105*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21108*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21120*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21123*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21126*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21138*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21141*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21144*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21147*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21150*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 21174*/        /*Scope*/ 103, /*->21278*/
/* 21175*/          OPC_CheckCondCode, ISD::SETUEQ,
/* 21177*/          OPC_MoveParent,
/* 21178*/          OPC_CheckType, MVT::i32,
/* 21180*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21182*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21185*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21188*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21191*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21194*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21206*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21209*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21212*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21224*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21227*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21230*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21242*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21245*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21248*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21251*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21254*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETUEQ:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 21278*/        /*Scope*/ 103, /*->21382*/
/* 21279*/          OPC_CheckCondCode, ISD::SETGE,
/* 21281*/          OPC_MoveParent,
/* 21282*/          OPC_CheckType, MVT::i32,
/* 21284*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21286*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21289*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21292*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21295*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21298*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21310*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21316*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21328*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21331*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21334*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21346*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21349*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21352*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21355*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21358*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 21382*/        /*Scope*/ 103, /*->21486*/
/* 21383*/          OPC_CheckCondCode, ISD::SETGT,
/* 21385*/          OPC_MoveParent,
/* 21386*/          OPC_CheckType, MVT::i32,
/* 21388*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21390*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21393*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21396*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21399*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21402*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21414*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21417*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21420*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21432*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21435*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21438*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21450*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21453*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21456*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21459*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21462*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_INT), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGT_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 21486*/        /*Scope*/ 103, /*->21590*/
/* 21487*/          OPC_CheckCondCode, ISD::SETEQ,
/* 21489*/          OPC_MoveParent,
/* 21490*/          OPC_CheckType, MVT::f32,
/* 21492*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21494*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21497*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21500*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21503*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21506*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21518*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21521*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21524*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21536*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21539*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21542*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21554*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21557*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21563*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21566*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDE_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 21590*/        /*Scope*/ 103, /*->21694*/
/* 21591*/          OPC_CheckCondCode, ISD::SETGT,
/* 21593*/          OPC_MoveParent,
/* 21594*/          OPC_CheckType, MVT::f32,
/* 21596*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21598*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21601*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21604*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21607*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21610*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21622*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21625*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21628*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21640*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21643*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21646*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21658*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21661*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21664*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21667*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21670*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGT_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 21694*/        /*Scope*/ 103, /*->21798*/
/* 21695*/          OPC_CheckCondCode, ISD::SETGE,
/* 21697*/          OPC_MoveParent,
/* 21698*/          OPC_CheckType, MVT::f32,
/* 21700*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21702*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21705*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21708*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21711*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21714*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21726*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21729*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21732*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21744*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21747*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21750*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21762*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21765*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21768*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21771*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21774*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGE_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 21798*/        0, /*End of Scope*/
/* 21799*/      /*Scope*/ 117, /*->21917*/
/* 21800*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21811*/        OPC_RecordChild2, // #1 = $src1
/* 21812*/        OPC_RecordChild3, // #2 = $src2
/* 21813*/        OPC_MoveChild4,
/* 21814*/        OPC_CheckCondCode, ISD::SETGT,
/* 21816*/        OPC_MoveParent,
/* 21817*/        OPC_CheckType, MVT::i32,
/* 21819*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21821*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21824*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21827*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21830*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21833*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21845*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21848*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21851*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21863*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21866*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21869*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21881*/        OPC_EmitInteger, MVT::i32, 1, 
/* 21884*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21887*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21890*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21893*/        OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, -1:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 8
                  // Dst: (CNDGE_INT:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 21917*/      0, /*End of Scope*/
/* 21918*/    0, /*End of Scope*/
/* 21919*/  /*SwitchOpcode*/ 100|128,7/*996*/, TARGET_VAL(ISD::LOAD),// ->22919
/* 21923*/    OPC_RecordMemRef,
/* 21924*/    OPC_RecordNode, // #0 = 'ld' chained node
/* 21925*/    OPC_RecordChild1, // #1 = $addr
/* 21926*/    OPC_CheckPredicate, 4, // Predicate_unindexedload
/* 21928*/    OPC_Scope, 22, /*->21952*/ // 4 children in Scope
/* 21930*/      OPC_CheckPredicate, 5, // Predicate_load_private
/* 21932*/      OPC_CheckType, MVT::i32,
/* 21934*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21936*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #2 #3
/* 21939*/      OPC_EmitMergeInputChains1_0,
/* 21940*/      OPC_EmitInteger, MVT::i32, 0, 
/* 21943*/      OPC_MorphNodeTo1, TARGET_VAL(R600::R600_RegisterLoad), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load_private>> - Complexity = 13
                // Dst: (R600_RegisterLoad:{ *:[i32] } FRAMEri:{ *:[iPTR] }:$addr, 0:{ *:[i32] })
/* 21952*/    /*Scope*/ 66|128,3/*450*/, /*->22404*/
/* 21954*/      OPC_CheckChild1Type, MVT::i32,
/* 21956*/      OPC_CheckType, MVT::i32,
/* 21958*/      OPC_Scope, 50, /*->22010*/ // 12 children in Scope
/* 21960*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 21962*/        OPC_Scope, 22, /*->21986*/ // 2 children in Scope
/* 21964*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 21966*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_az_extloadi8
/* 21968*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21970*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21973*/          OPC_EmitMergeInputChains1_0,
/* 21974*/          OPC_EmitInteger, MVT::i8, 3, 
/* 21977*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id3_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21986*/        /*Scope*/ 22, /*->22009*/
/* 21987*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 21989*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_az_extloadi16
/* 21991*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21993*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21996*/          OPC_EmitMergeInputChains1_0,
/* 21997*/          OPC_EmitInteger, MVT::i8, 3, 
/* 22000*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id3_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22009*/        0, /*End of Scope*/
/* 22010*/      /*Scope*/ 22, /*->22033*/
/* 22011*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22013*/        OPC_CheckPredicate, 8, // Predicate_vtx_id3_load
/* 22015*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22017*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22020*/        OPC_EmitMergeInputChains1_0,
/* 22021*/        OPC_EmitInteger, MVT::i8, 3, 
/* 22024*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22033*/      /*Scope*/ 50, /*->22084*/
/* 22034*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22036*/        OPC_Scope, 22, /*->22060*/ // 2 children in Scope
/* 22038*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22040*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_az_extloadi8
/* 22042*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22044*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22047*/          OPC_EmitMergeInputChains1_0,
/* 22048*/          OPC_EmitInteger, MVT::i8, 2, 
/* 22051*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id2_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22060*/        /*Scope*/ 22, /*->22083*/
/* 22061*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22063*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_az_extloadi16
/* 22065*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22067*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22070*/          OPC_EmitMergeInputChains1_0,
/* 22071*/          OPC_EmitInteger, MVT::i8, 2, 
/* 22074*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id2_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22083*/        0, /*End of Scope*/
/* 22084*/      /*Scope*/ 22, /*->22107*/
/* 22085*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22087*/        OPC_CheckPredicate, 11, // Predicate_vtx_id2_load
/* 22089*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22091*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22094*/        OPC_EmitMergeInputChains1_0,
/* 22095*/        OPC_EmitInteger, MVT::i8, 2, 
/* 22098*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22107*/      /*Scope*/ 50, /*->22158*/
/* 22108*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22110*/        OPC_Scope, 22, /*->22134*/ // 2 children in Scope
/* 22112*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22114*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_az_extloadi8
/* 22116*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22118*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22121*/          OPC_EmitMergeInputChains1_0,
/* 22122*/          OPC_EmitInteger, MVT::i8, 1, 
/* 22125*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id1_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22134*/        /*Scope*/ 22, /*->22157*/
/* 22135*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22137*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_az_extloadi16
/* 22139*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22141*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22144*/          OPC_EmitMergeInputChains1_0,
/* 22145*/          OPC_EmitInteger, MVT::i8, 1, 
/* 22148*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id1_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22157*/        0, /*End of Scope*/
/* 22158*/      /*Scope*/ 22, /*->22181*/
/* 22159*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22161*/        OPC_CheckPredicate, 12, // Predicate_vtx_id1_load
/* 22163*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22165*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22168*/        OPC_EmitMergeInputChains1_0,
/* 22169*/        OPC_EmitInteger, MVT::i8, 1, 
/* 22172*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22181*/      /*Scope*/ 50, /*->22232*/
/* 22182*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22184*/        OPC_Scope, 22, /*->22208*/ // 2 children in Scope
/* 22186*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22188*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_az_extloadi8
/* 22190*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22192*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22195*/          OPC_EmitMergeInputChains1_0,
/* 22196*/          OPC_EmitInteger, MVT::i8, 3, 
/* 22199*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id3_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22208*/        /*Scope*/ 22, /*->22231*/
/* 22209*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22211*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_az_extloadi16
/* 22213*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22215*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22218*/          OPC_EmitMergeInputChains1_0,
/* 22219*/          OPC_EmitInteger, MVT::i8, 3, 
/* 22222*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id3_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22231*/        0, /*End of Scope*/
/* 22232*/      /*Scope*/ 22, /*->22255*/
/* 22233*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22235*/        OPC_CheckPredicate, 8, // Predicate_vtx_id3_load
/* 22237*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22239*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22242*/        OPC_EmitMergeInputChains1_0,
/* 22243*/        OPC_EmitInteger, MVT::i8, 3, 
/* 22246*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22255*/      /*Scope*/ 50, /*->22306*/
/* 22256*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22258*/        OPC_Scope, 22, /*->22282*/ // 2 children in Scope
/* 22260*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22262*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_az_extloadi8
/* 22264*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22266*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22269*/          OPC_EmitMergeInputChains1_0,
/* 22270*/          OPC_EmitInteger, MVT::i8, 2, 
/* 22273*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id2_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22282*/        /*Scope*/ 22, /*->22305*/
/* 22283*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22285*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_az_extloadi16
/* 22287*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22289*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22292*/          OPC_EmitMergeInputChains1_0,
/* 22293*/          OPC_EmitInteger, MVT::i8, 2, 
/* 22296*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id2_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22305*/        0, /*End of Scope*/
/* 22306*/      /*Scope*/ 22, /*->22329*/
/* 22307*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22309*/        OPC_CheckPredicate, 11, // Predicate_vtx_id2_load
/* 22311*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22313*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22316*/        OPC_EmitMergeInputChains1_0,
/* 22317*/        OPC_EmitInteger, MVT::i8, 2, 
/* 22320*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22329*/      /*Scope*/ 50, /*->22380*/
/* 22330*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22332*/        OPC_Scope, 22, /*->22356*/ // 2 children in Scope
/* 22334*/          OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22336*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_az_extloadi8
/* 22338*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22340*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22343*/          OPC_EmitMergeInputChains1_0,
/* 22344*/          OPC_EmitInteger, MVT::i8, 1, 
/* 22347*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id1_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22356*/        /*Scope*/ 22, /*->22379*/
/* 22357*/          OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22359*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_az_extloadi16
/* 22361*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22363*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22366*/          OPC_EmitMergeInputChains1_0,
/* 22367*/          OPC_EmitInteger, MVT::i8, 1, 
/* 22370*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id1_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22379*/        0, /*End of Scope*/
/* 22380*/      /*Scope*/ 22, /*->22403*/
/* 22381*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22383*/        OPC_CheckPredicate, 12, // Predicate_vtx_id1_load
/* 22385*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22387*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22390*/        OPC_EmitMergeInputChains1_0,
/* 22391*/        OPC_EmitInteger, MVT::i8, 1, 
/* 22394*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22403*/      0, /*End of Scope*/
/* 22404*/    /*Scope*/ 43, /*->22448*/
/* 22405*/      OPC_CheckPredicate, 13, // Predicate_load_local
/* 22407*/      OPC_CheckType, MVT::i32,
/* 22409*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22411*/      OPC_EmitMergeInputChains1_0,
/* 22412*/      OPC_EmitInteger, MVT::i32, 0, 
/* 22415*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22427*/      OPC_EmitInteger, MVT::i32, 1, 
/* 22430*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22433*/      OPC_EmitInteger, MVT::i32, 0, 
/* 22436*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                // Src: (ld:{ *:[i32] } R600_Reg32:{ *:[iPTR] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load_local>> - Complexity = 4
                // Dst: (LDS_READ_RET:{ *:[i32] } R600_Reg32:{ *:[iPTR] }:$src0)
/* 22448*/    /*Scope*/ 84|128,3/*468*/, /*->22918*/
/* 22450*/      OPC_CheckChild1Type, MVT::i32,
/* 22452*/      OPC_Scope, 45, /*->22499*/ // 5 children in Scope
/* 22454*/        OPC_CheckPredicate, 14, // Predicate_sextload
/* 22456*/        OPC_CheckPredicate, 15, // Predicate_sextloadi8_local
/* 22458*/        OPC_CheckType, MVT::i32,
/* 22460*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22462*/        OPC_EmitMergeInputChains1_0,
/* 22463*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22466*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22478*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22481*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22484*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22487*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_BYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_local>> - Complexity = 4
                  // Dst: (LDS_BYTE_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 22499*/      /*Scope*/ 47, /*->22547*/
/* 22500*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22502*/        OPC_CheckPredicate, 7, // Predicate_az_extloadi8
/* 22504*/        OPC_CheckPredicate, 16, // Predicate_az_extloadi8_local
/* 22506*/        OPC_CheckType, MVT::i32,
/* 22508*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22510*/        OPC_EmitMergeInputChains1_0,
/* 22511*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22514*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22526*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22529*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22532*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22535*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_UBYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_local>> - Complexity = 4
                  // Dst: (LDS_UBYTE_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 22547*/      /*Scope*/ 45, /*->22593*/
/* 22548*/        OPC_CheckPredicate, 14, // Predicate_sextload
/* 22550*/        OPC_CheckPredicate, 17, // Predicate_sextloadi16_local
/* 22552*/        OPC_CheckType, MVT::i32,
/* 22554*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22556*/        OPC_EmitMergeInputChains1_0,
/* 22557*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22560*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22572*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22575*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22578*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22581*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_SHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16_local>> - Complexity = 4
                  // Dst: (LDS_SHORT_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 22593*/      /*Scope*/ 47, /*->22641*/
/* 22594*/        OPC_CheckPredicate, 6, // Predicate_az_extload
/* 22596*/        OPC_CheckPredicate, 9, // Predicate_az_extloadi16
/* 22598*/        OPC_CheckPredicate, 16, // Predicate_az_extloadi16_local
/* 22600*/        OPC_CheckType, MVT::i32,
/* 22602*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22604*/        OPC_EmitMergeInputChains1_0,
/* 22605*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22608*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22620*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22623*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22626*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22629*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_USHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_local>> - Complexity = 4
                  // Dst: (LDS_USHORT_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 22641*/      /*Scope*/ 18|128,2/*274*/, /*->22917*/
/* 22643*/        OPC_CheckPredicate, 10, // Predicate_load
/* 22645*/        OPC_Scope, 44, /*->22691*/ // 6 children in Scope
/* 22647*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_load
/* 22649*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22670
/* 22652*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22654*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22657*/            OPC_EmitMergeInputChains1_0,
/* 22658*/            OPC_EmitInteger, MVT::i8, 3, 
/* 22661*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22670*/          /*SwitchType*/ 18, MVT::v4i32,// ->22690
/* 22672*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22674*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22677*/            OPC_EmitMergeInputChains1_0,
/* 22678*/            OPC_EmitInteger, MVT::i8, 3, 
/* 22681*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22690*/          0, // EndSwitchType
/* 22691*/        /*Scope*/ 44, /*->22736*/
/* 22692*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_load
/* 22694*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22715
/* 22697*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22699*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22702*/            OPC_EmitMergeInputChains1_0,
/* 22703*/            OPC_EmitInteger, MVT::i8, 2, 
/* 22706*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22715*/          /*SwitchType*/ 18, MVT::v4i32,// ->22735
/* 22717*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22719*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22722*/            OPC_EmitMergeInputChains1_0,
/* 22723*/            OPC_EmitInteger, MVT::i8, 2, 
/* 22726*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22735*/          0, // EndSwitchType
/* 22736*/        /*Scope*/ 44, /*->22781*/
/* 22737*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_load
/* 22739*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22760
/* 22742*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22744*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22747*/            OPC_EmitMergeInputChains1_0,
/* 22748*/            OPC_EmitInteger, MVT::i8, 1, 
/* 22751*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22760*/          /*SwitchType*/ 18, MVT::v4i32,// ->22780
/* 22762*/            OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 22764*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22767*/            OPC_EmitMergeInputChains1_0,
/* 22768*/            OPC_EmitInteger, MVT::i8, 1, 
/* 22771*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22780*/          0, // EndSwitchType
/* 22781*/        /*Scope*/ 44, /*->22826*/
/* 22782*/          OPC_CheckPredicate, 8, // Predicate_vtx_id3_load
/* 22784*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22805
/* 22787*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22789*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22792*/            OPC_EmitMergeInputChains1_0,
/* 22793*/            OPC_EmitInteger, MVT::i8, 3, 
/* 22796*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22805*/          /*SwitchType*/ 18, MVT::v4i32,// ->22825
/* 22807*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22809*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22812*/            OPC_EmitMergeInputChains1_0,
/* 22813*/            OPC_EmitInteger, MVT::i8, 3, 
/* 22816*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 22825*/          0, // EndSwitchType
/* 22826*/        /*Scope*/ 44, /*->22871*/
/* 22827*/          OPC_CheckPredicate, 11, // Predicate_vtx_id2_load
/* 22829*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22850
/* 22832*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22834*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22837*/            OPC_EmitMergeInputChains1_0,
/* 22838*/            OPC_EmitInteger, MVT::i8, 2, 
/* 22841*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22850*/          /*SwitchType*/ 18, MVT::v4i32,// ->22870
/* 22852*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22854*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22857*/            OPC_EmitMergeInputChains1_0,
/* 22858*/            OPC_EmitInteger, MVT::i8, 2, 
/* 22861*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 22870*/          0, // EndSwitchType
/* 22871*/        /*Scope*/ 44, /*->22916*/
/* 22872*/          OPC_CheckPredicate, 12, // Predicate_vtx_id1_load
/* 22874*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->22895
/* 22877*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22879*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22882*/            OPC_EmitMergeInputChains1_0,
/* 22883*/            OPC_EmitInteger, MVT::i8, 1, 
/* 22886*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22895*/          /*SwitchType*/ 18, MVT::v4i32,// ->22915
/* 22897*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 22899*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 22902*/            OPC_EmitMergeInputChains1_0,
/* 22903*/            OPC_EmitInteger, MVT::i8, 1, 
/* 22906*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 22915*/          0, // EndSwitchType
/* 22916*/        0, /*End of Scope*/
/* 22917*/      0, /*End of Scope*/
/* 22918*/    0, /*End of Scope*/
/* 22919*/  /*SwitchOpcode*/ 74|128,2/*330*/, TARGET_VAL(ISD::STORE),// ->23253
/* 22923*/    OPC_RecordMemRef,
/* 22924*/    OPC_RecordNode, // #0 = 'st' chained node
/* 22925*/    OPC_RecordChild1, // #1 = $val
/* 22926*/    OPC_Scope, 119|128,1/*247*/, /*->23176*/ // 3 children in Scope
/* 22929*/      OPC_CheckChild1Type, MVT::i32,
/* 22931*/      OPC_RecordChild2, // #2 = $addr
/* 22932*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/* 22934*/      OPC_Scope, 20, /*->22956*/ // 3 children in Scope
/* 22936*/        OPC_CheckPredicate, 19, // Predicate_store_private
/* 22938*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22940*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #3 #4
/* 22943*/        OPC_EmitMergeInputChains1_0,
/* 22944*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22947*/        OPC_MorphNodeTo0, TARGET_VAL(R600::R600_RegisterStore), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store_private>> - Complexity = 13
                  // Dst: (R600_RegisterStore i32:{ *:[i32] }:$val, FRAMEri:{ *:[iPTR] }:$addr, 0:{ *:[i32] })
/* 22956*/      /*Scope*/ 58, /*->23015*/
/* 22957*/        OPC_CheckPredicate, 20, // Predicate_store_local
/* 22959*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22961*/        OPC_EmitMergeInputChains1_0,
/* 22962*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22965*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22977*/        OPC_EmitInteger, MVT::i32, 0, 
/* 22980*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22992*/        OPC_EmitInteger, MVT::i32, 1, 
/* 22995*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22998*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23001*/        OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                      9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                  // Src: (st R600_Reg32:{ *:[i32] }:$src1, R600_Reg32:{ *:[iPTR] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store_local>> - Complexity = 4
                  // Dst: (LDS_WRITE R600_Reg32:{ *:[iPTR] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 23015*/      /*Scope*/ 30|128,1/*158*/, /*->23175*/
/* 23017*/        OPC_CheckChild2Type, MVT::i32,
/* 23019*/        OPC_Scope, 122, /*->23143*/ // 2 children in Scope
/* 23021*/          OPC_CheckPredicate, 21, // Predicate_truncstore
/* 23023*/          OPC_Scope, 58, /*->23083*/ // 2 children in Scope
/* 23025*/            OPC_CheckPredicate, 15, // Predicate_truncstorei8_local
/* 23027*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23029*/            OPC_EmitMergeInputChains1_0,
/* 23030*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23033*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23045*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23048*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23060*/            OPC_EmitInteger, MVT::i32, 1, 
/* 23063*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23066*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23069*/            OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_BYTE_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_local>> - Complexity = 4
                      // Dst: (LDS_BYTE_WRITE i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 23083*/          /*Scope*/ 58, /*->23142*/
/* 23084*/            OPC_CheckPredicate, 17, // Predicate_truncstorei16_local
/* 23086*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23088*/            OPC_EmitMergeInputChains1_0,
/* 23089*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23092*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23104*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23107*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23119*/            OPC_EmitInteger, MVT::i32, 1, 
/* 23122*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23125*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23128*/            OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_SHORT_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16_local>> - Complexity = 4
                      // Dst: (LDS_SHORT_WRITE i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 23142*/          0, /*End of Scope*/
/* 23143*/        /*Scope*/ 30, /*->23174*/
/* 23144*/          OPC_CheckPredicate, 22, // Predicate_store_global
/* 23146*/          OPC_Scope, 10, /*->23158*/ // 2 children in Scope
/* 23148*/            OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23150*/            OPC_EmitMergeInputChains1_0,
/* 23151*/            OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD32), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 2, 
                      // Src: (st i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                      // Dst: (RAT_STORE_DWORD32 i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23158*/          /*Scope*/ 14, /*->23173*/
/* 23159*/            OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23161*/            OPC_EmitMergeInputChains1_0,
/* 23162*/            OPC_EmitInteger, MVT::i32, 0, 
/* 23165*/            OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 1, 2, 3, 
                      // Src: (st i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                      // Dst: (RAT_WRITE_CACHELESS_32_eg i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23173*/          0, /*End of Scope*/
/* 23174*/        0, /*End of Scope*/
/* 23175*/      0, /*End of Scope*/
/* 23176*/    /*Scope*/ 37, /*->23214*/
/* 23177*/      OPC_CheckChild1Type, MVT::v2i32,
/* 23179*/      OPC_RecordChild2, // #2 = $index_gpr
/* 23180*/      OPC_CheckChild2Type, MVT::i32,
/* 23182*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/* 23184*/      OPC_CheckPredicate, 22, // Predicate_store_global
/* 23186*/      OPC_Scope, 10, /*->23198*/ // 2 children in Scope
/* 23188*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23190*/        OPC_EmitMergeInputChains1_0,
/* 23191*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_STORE_DWORD64 v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23198*/      /*Scope*/ 14, /*->23213*/
/* 23199*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23201*/        OPC_EmitMergeInputChains1_0,
/* 23202*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23205*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_64_eg v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23213*/      0, /*End of Scope*/
/* 23214*/    /*Scope*/ 37, /*->23252*/
/* 23215*/      OPC_CheckChild1Type, MVT::v4i32,
/* 23217*/      OPC_RecordChild2, // #2 = $index_gpr
/* 23218*/      OPC_CheckChild2Type, MVT::i32,
/* 23220*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/* 23222*/      OPC_CheckPredicate, 22, // Predicate_store_global
/* 23224*/      OPC_Scope, 10, /*->23236*/ // 2 children in Scope
/* 23226*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23228*/        OPC_EmitMergeInputChains1_0,
/* 23229*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD128), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_STORE_DWORD128 v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23236*/      /*Scope*/ 14, /*->23251*/
/* 23237*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23239*/        OPC_EmitMergeInputChains1_0,
/* 23240*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23243*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_128_eg v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 23251*/      0, /*End of Scope*/
/* 23252*/    0, /*End of Scope*/
/* 23253*/  /*SwitchOpcode*/ 90|128,7/*986*/, TARGET_VAL(ISD::ADD),// ->24243
/* 23257*/    OPC_Scope, 90|128,1/*218*/, /*->23478*/ // 4 children in Scope
/* 23260*/      OPC_MoveChild0,
/* 23261*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),
/* 23264*/      OPC_Scope, 105, /*->23371*/ // 2 children in Scope
/* 23266*/        OPC_CheckChild0Integer, 119|128,10/*1399*/, 
/* 23269*/        OPC_RecordChild1, // #0 = $src0
/* 23270*/        OPC_RecordChild2, // #1 = $src1
/* 23271*/        OPC_MoveParent,
/* 23272*/        OPC_RecordChild1, // #2 = $src2
/* 23273*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23275*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23278*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23281*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23284*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23287*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23299*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23302*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23305*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23317*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23320*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23323*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23335*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23338*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23341*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23344*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23347*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (intrinsic_wo_chain:{ *:[i32] } 1399:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 13
                  // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23371*/      /*Scope*/ 105, /*->23477*/
/* 23372*/        OPC_CheckChild0Integer, 118|128,10/*1398*/, 
/* 23375*/        OPC_RecordChild1, // #0 = $src0
/* 23376*/        OPC_RecordChild2, // #1 = $src1
/* 23377*/        OPC_MoveParent,
/* 23378*/        OPC_RecordChild1, // #2 = $src2
/* 23379*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23381*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23384*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23387*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23390*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23393*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23405*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23408*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23411*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23423*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23426*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23429*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23441*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23444*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23447*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23450*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23453*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (intrinsic_wo_chain:{ *:[i32] } 1398:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 13
                  // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23477*/      0, /*End of Scope*/
/* 23478*/    /*Scope*/ 89|128,1/*217*/, /*->23697*/
/* 23480*/      OPC_RecordChild0, // #0 = $src2
/* 23481*/      OPC_MoveChild1,
/* 23482*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),
/* 23485*/      OPC_Scope, 104, /*->23591*/ // 2 children in Scope
/* 23487*/        OPC_CheckChild0Integer, 119|128,10/*1399*/, 
/* 23490*/        OPC_RecordChild1, // #1 = $src0
/* 23491*/        OPC_RecordChild2, // #2 = $src1
/* 23492*/        OPC_MoveParent,
/* 23493*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23495*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23498*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23501*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23504*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23507*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23519*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23522*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23525*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23537*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23540*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23543*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23555*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23558*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23561*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23564*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23567*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (intrinsic_wo_chain:{ *:[i32] } 1399:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 13
                  // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23591*/      /*Scope*/ 104, /*->23696*/
/* 23592*/        OPC_CheckChild0Integer, 118|128,10/*1398*/, 
/* 23595*/        OPC_RecordChild1, // #1 = $src0
/* 23596*/        OPC_RecordChild2, // #2 = $src1
/* 23597*/        OPC_MoveParent,
/* 23598*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23600*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23603*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23606*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23609*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23612*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23624*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23627*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23630*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23642*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23645*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23648*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23660*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23663*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23666*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23669*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23672*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (intrinsic_wo_chain:{ *:[i32] } 1398:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 13
                  // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23696*/      0, /*End of Scope*/
/* 23697*/    /*Scope*/ 89|128,1/*217*/, /*->23916*/
/* 23699*/      OPC_MoveChild0,
/* 23700*/      OPC_SwitchOpcode /*2 cases */, 104, TARGET_VAL(AMDGPUISD::MUL_U24),// ->23808
/* 23704*/        OPC_RecordChild0, // #0 = $src0
/* 23705*/        OPC_RecordChild1, // #1 = $src1
/* 23706*/        OPC_MoveParent,
/* 23707*/        OPC_RecordChild1, // #2 = $src2
/* 23708*/        OPC_CheckType, MVT::i32,
/* 23710*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23712*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23715*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23718*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23721*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23724*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23736*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23739*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23742*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23754*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23757*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23760*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23772*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23775*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23778*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23781*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23784*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (AMDGPUmul_u24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23808*/      /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_I24),// ->23915
/* 23811*/        OPC_RecordChild0, // #0 = $src0
/* 23812*/        OPC_RecordChild1, // #1 = $src1
/* 23813*/        OPC_MoveParent,
/* 23814*/        OPC_RecordChild1, // #2 = $src2
/* 23815*/        OPC_CheckType, MVT::i32,
/* 23817*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 23819*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23822*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23825*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23828*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23831*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23843*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23846*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23849*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23861*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23864*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23867*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23879*/        OPC_EmitInteger, MVT::i32, 1, 
/* 23882*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23885*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23888*/        OPC_EmitInteger, MVT::i32, 0, 
/* 23891*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (AMDGPUmul_i24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 23915*/      0, // EndSwitchOpcode
/* 23916*/    /*Scope*/ 68|128,2/*324*/, /*->24242*/
/* 23918*/      OPC_RecordChild0, // #0 = $src2
/* 23919*/      OPC_Scope, 87|128,1/*215*/, /*->24137*/ // 2 children in Scope
/* 23922*/        OPC_MoveChild1,
/* 23923*/        OPC_SwitchOpcode /*2 cases */, 103, TARGET_VAL(AMDGPUISD::MUL_U24),// ->24030
/* 23927*/          OPC_RecordChild0, // #1 = $src0
/* 23928*/          OPC_RecordChild1, // #2 = $src1
/* 23929*/          OPC_MoveParent,
/* 23930*/          OPC_CheckType, MVT::i32,
/* 23932*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23934*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23937*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23943*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23946*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23958*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23961*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23964*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23976*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23982*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23994*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23997*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24000*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24003*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24006*/          OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (AMDGPUmul_u24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 8
                    // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 24030*/        /*SwitchOpcode*/ 103, TARGET_VAL(AMDGPUISD::MUL_I24),// ->24136
/* 24033*/          OPC_RecordChild0, // #1 = $src0
/* 24034*/          OPC_RecordChild1, // #2 = $src1
/* 24035*/          OPC_MoveParent,
/* 24036*/          OPC_CheckType, MVT::i32,
/* 24038*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 24040*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24043*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24046*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24049*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24052*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24064*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24067*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24070*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24082*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24085*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24088*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24100*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24103*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24106*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24109*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24112*/          OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (AMDGPUmul_i24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 8
                    // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 24136*/        0, // EndSwitchOpcode
/* 24137*/      /*Scope*/ 103, /*->24241*/
/* 24138*/        OPC_RecordChild1, // #1 = $src1
/* 24139*/        OPC_CheckType, MVT::i32,
/* 24141*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24143*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24146*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24149*/        OPC_EmitInteger, MVT::i32, 1, 
/* 24152*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24155*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24158*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24161*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24164*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24167*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24170*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24182*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24185*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24188*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24191*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24203*/        OPC_EmitInteger, MVT::i32, 1, 
/* 24206*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24209*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24212*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24215*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ADD_INT), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ADD_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 24241*/      0, /*End of Scope*/
/* 24242*/    0, /*End of Scope*/
/* 24243*/  /*SwitchOpcode*/ 113|128,26/*3441*/, TARGET_VAL(ISD::XOR),// ->27688
/* 24247*/    OPC_Scope, 66|128,3/*450*/, /*->24700*/ // 5 children in Scope
/* 24250*/      OPC_RecordChild0, // #0 = $z
/* 24251*/      OPC_MoveChild1,
/* 24252*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 24255*/      OPC_Scope, 91|128,1/*219*/, /*->24477*/ // 2 children in Scope
/* 24258*/        OPC_RecordChild0, // #1 = $x
/* 24259*/        OPC_MoveChild1,
/* 24260*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24263*/        OPC_Scope, 105, /*->24370*/ // 2 children in Scope
/* 24265*/          OPC_RecordChild0, // #2 = $y
/* 24266*/          OPC_CheckChild1Same, 0,
/* 24268*/          OPC_MoveParent,
/* 24269*/          OPC_MoveParent,
/* 24270*/          OPC_CheckType, MVT::i32,
/* 24272*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24274*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24277*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24280*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24283*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24286*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24298*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24301*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24304*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24316*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24319*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24322*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24334*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24337*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24340*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24343*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24346*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z))) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24370*/        /*Scope*/ 105, /*->24476*/
/* 24371*/          OPC_CheckChild0Same, 0,
/* 24373*/          OPC_RecordChild1, // #2 = $y
/* 24374*/          OPC_MoveParent,
/* 24375*/          OPC_MoveParent,
/* 24376*/          OPC_CheckType, MVT::i32,
/* 24378*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24380*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24383*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24386*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24389*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24392*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24404*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24407*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24410*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24422*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24425*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24428*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24440*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24443*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24446*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24449*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24452*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y))) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24476*/        0, /*End of Scope*/
/* 24477*/      /*Scope*/ 92|128,1/*220*/, /*->24699*/
/* 24479*/        OPC_MoveChild0,
/* 24480*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24483*/        OPC_Scope, 106, /*->24591*/ // 2 children in Scope
/* 24485*/          OPC_RecordChild0, // #1 = $y
/* 24486*/          OPC_CheckChild1Same, 0,
/* 24488*/          OPC_MoveParent,
/* 24489*/          OPC_RecordChild1, // #2 = $x
/* 24490*/          OPC_MoveParent,
/* 24491*/          OPC_CheckType, MVT::i32,
/* 24493*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24495*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24498*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24501*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24504*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24507*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24519*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24522*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24525*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24537*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24540*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24543*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24555*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24558*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24561*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24564*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24567*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$x)) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24591*/        /*Scope*/ 106, /*->24698*/
/* 24592*/          OPC_CheckChild0Same, 0,
/* 24594*/          OPC_RecordChild1, // #1 = $y
/* 24595*/          OPC_MoveParent,
/* 24596*/          OPC_RecordChild1, // #2 = $x
/* 24597*/          OPC_MoveParent,
/* 24598*/          OPC_CheckType, MVT::i32,
/* 24600*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24602*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24605*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24608*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24611*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24614*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24626*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24629*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24632*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24644*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24647*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24650*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24662*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24665*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24668*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24671*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24674*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$x)) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24698*/        0, /*End of Scope*/
/* 24699*/      0, /*End of Scope*/
/* 24700*/    /*Scope*/ 56|128,3/*440*/, /*->25142*/
/* 24702*/      OPC_MoveChild0,
/* 24703*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 24706*/      OPC_Scope, 87|128,1/*215*/, /*->24924*/ // 2 children in Scope
/* 24709*/        OPC_RecordChild0, // #0 = $x
/* 24710*/        OPC_MoveChild1,
/* 24711*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24714*/        OPC_RecordChild0, // #1 = $y
/* 24715*/        OPC_RecordChild1, // #2 = $z
/* 24716*/        OPC_MoveParent,
/* 24717*/        OPC_MoveParent,
/* 24718*/        OPC_CheckType, MVT::i32,
/* 24720*/        OPC_Scope, 100, /*->24822*/ // 2 children in Scope
/* 24722*/          OPC_CheckChild1Same, 2,
/* 24724*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24726*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24729*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24732*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24735*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24738*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24750*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24756*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24768*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24771*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24774*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24786*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24789*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24792*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24795*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24798*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z)), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24822*/        /*Scope*/ 100, /*->24923*/
/* 24823*/          OPC_CheckChild1Same, 1,
/* 24825*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24827*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24830*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24833*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24836*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24839*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24851*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24854*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24857*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24869*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24872*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24875*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24887*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24890*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24893*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24896*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24899*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 24923*/        0, /*End of Scope*/
/* 24924*/      /*Scope*/ 87|128,1/*215*/, /*->25141*/
/* 24926*/        OPC_MoveChild0,
/* 24927*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24930*/        OPC_RecordChild0, // #0 = $y
/* 24931*/        OPC_RecordChild1, // #1 = $z
/* 24932*/        OPC_MoveParent,
/* 24933*/        OPC_RecordChild1, // #2 = $x
/* 24934*/        OPC_MoveParent,
/* 24935*/        OPC_CheckType, MVT::i32,
/* 24937*/        OPC_Scope, 100, /*->25039*/ // 2 children in Scope
/* 24939*/          OPC_CheckChild1Same, 1,
/* 24941*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24943*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24946*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24949*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24952*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24955*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24967*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24970*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24973*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24985*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24988*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24991*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25003*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25006*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25009*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25012*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25015*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 0, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 25039*/        /*Scope*/ 100, /*->25140*/
/* 25040*/          OPC_CheckChild1Same, 0,
/* 25042*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25044*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25047*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25050*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25053*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25056*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25068*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25071*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25074*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25086*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25089*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25092*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25104*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25107*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25110*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25113*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25116*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 25140*/        0, /*End of Scope*/
/* 25141*/      0, /*End of Scope*/
/* 25142*/    /*Scope*/ 30|128,9/*1182*/, /*->26326*/
/* 25144*/      OPC_RecordChild0, // #0 = $z
/* 25145*/      OPC_MoveChild1,
/* 25146*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 25149*/      OPC_Scope, 73|128,4/*585*/, /*->25737*/ // 2 children in Scope
/* 25152*/        OPC_RecordChild0, // #1 = $x
/* 25153*/        OPC_MoveChild1,
/* 25154*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 25157*/        OPC_Scope, 31|128,2/*287*/, /*->25447*/ // 2 children in Scope
/* 25160*/          OPC_RecordChild0, // #2 = $y
/* 25161*/          OPC_CheckChild1Same, 0,
/* 25163*/          OPC_MoveParent,
/* 25164*/          OPC_MoveParent,
/* 25165*/          OPC_CheckType, MVT::i64,
/* 25167*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25169*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 25172*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25175*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25178*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25181*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/* 25189*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25192*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25195*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25207*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25210*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 25218*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25221*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25224*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25236*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25239*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 25247*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25250*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25253*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25265*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25268*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25271*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25274*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25277*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 25301*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25304*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25307*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25310*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25313*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/* 25321*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25324*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25327*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25339*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25342*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 25350*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25353*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25356*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25368*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25371*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 25379*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25382*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25385*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25397*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25400*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25403*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25406*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25409*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 25433*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25436*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z))) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 25447*/        /*Scope*/ 31|128,2/*287*/, /*->25736*/
/* 25449*/          OPC_CheckChild0Same, 0,
/* 25451*/          OPC_RecordChild1, // #2 = $y
/* 25452*/          OPC_MoveParent,
/* 25453*/          OPC_MoveParent,
/* 25454*/          OPC_CheckType, MVT::i64,
/* 25456*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25458*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 25461*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25464*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25467*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25470*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/* 25478*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25481*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25484*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25496*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25499*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 25507*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25510*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25513*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25525*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25528*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 25536*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25539*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25542*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25554*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25557*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25563*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25566*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 25590*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25593*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25596*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25599*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25602*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/* 25610*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25613*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25616*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25628*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25631*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 25639*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25645*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25657*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25660*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 25668*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25671*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25674*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25686*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25689*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25692*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25695*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25698*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 25722*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25725*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y))) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 25736*/        0, /*End of Scope*/
/* 25737*/      /*Scope*/ 74|128,4/*586*/, /*->26325*/
/* 25739*/        OPC_MoveChild0,
/* 25740*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 25743*/        OPC_Scope, 32|128,2/*288*/, /*->26034*/ // 2 children in Scope
/* 25746*/          OPC_RecordChild0, // #1 = $y
/* 25747*/          OPC_CheckChild1Same, 0,
/* 25749*/          OPC_MoveParent,
/* 25750*/          OPC_RecordChild1, // #2 = $x
/* 25751*/          OPC_MoveParent,
/* 25752*/          OPC_CheckType, MVT::i64,
/* 25754*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25756*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 25759*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25762*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25765*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25768*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 25776*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25779*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25782*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25794*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25797*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 25805*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25808*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25811*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25823*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25826*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 25834*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25837*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25840*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25852*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25855*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25858*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25861*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25864*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 25888*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25891*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25894*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25897*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25900*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 25908*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25911*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25914*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25926*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25929*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 25937*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25943*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25955*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25958*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 25966*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25969*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25972*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25984*/          OPC_EmitInteger, MVT::i32, 1, 
/* 25987*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25990*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25993*/          OPC_EmitInteger, MVT::i32, 0, 
/* 25996*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 26020*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26023*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$x)) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 26034*/        /*Scope*/ 32|128,2/*288*/, /*->26324*/
/* 26036*/          OPC_CheckChild0Same, 0,
/* 26038*/          OPC_RecordChild1, // #1 = $y
/* 26039*/          OPC_MoveParent,
/* 26040*/          OPC_RecordChild1, // #2 = $x
/* 26041*/          OPC_MoveParent,
/* 26042*/          OPC_CheckType, MVT::i64,
/* 26044*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26046*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 26049*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26052*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26055*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26058*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 26066*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26069*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26072*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26084*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26087*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 26095*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26098*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26101*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26113*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26116*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 26124*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26127*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26130*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26142*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26145*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26148*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26151*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26154*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 26178*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26181*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26187*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26190*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 26198*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26201*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26204*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26216*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26219*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 26227*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26230*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26233*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26245*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26248*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 26256*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26259*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26262*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26274*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26277*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26280*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26283*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26286*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 26310*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26313*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y), i64:{ *:[i64] }:$x)) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 26324*/        0, /*End of Scope*/
/* 26325*/      0, /*End of Scope*/
/* 26326*/    /*Scope*/ 20|128,9/*1172*/, /*->27500*/
/* 26328*/      OPC_MoveChild0,
/* 26329*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 26332*/      OPC_Scope, 69|128,4/*581*/, /*->26916*/ // 2 children in Scope
/* 26335*/        OPC_RecordChild0, // #0 = $x
/* 26336*/        OPC_MoveChild1,
/* 26337*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 26340*/        OPC_RecordChild0, // #1 = $y
/* 26341*/        OPC_RecordChild1, // #2 = $z
/* 26342*/        OPC_MoveParent,
/* 26343*/        OPC_MoveParent,
/* 26344*/        OPC_CheckType, MVT::i64,
/* 26346*/        OPC_Scope, 26|128,2/*282*/, /*->26631*/ // 2 children in Scope
/* 26349*/          OPC_CheckChild1Same, 2,
/* 26351*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26353*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 26356*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26359*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26362*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26365*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/* 26373*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26376*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26379*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26391*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26394*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 26402*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26405*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26408*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26420*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26423*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/* 26431*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26434*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26437*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26449*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26452*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26455*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26458*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26461*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 26485*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26488*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26491*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26494*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26497*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/* 26505*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26508*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26511*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26523*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26526*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 26534*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26537*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26540*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26552*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26555*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/* 26563*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26566*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26569*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26581*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26584*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26587*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26590*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26593*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 26617*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26620*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z)), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 26631*/        /*Scope*/ 26|128,2/*282*/, /*->26915*/
/* 26633*/          OPC_CheckChild1Same, 1,
/* 26635*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26637*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 26640*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26643*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26646*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26649*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/* 26657*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26660*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26663*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26675*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26678*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 26686*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26689*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26692*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26704*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26707*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/* 26715*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26718*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26721*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26733*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26736*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26739*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26742*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26745*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 26769*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26772*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26775*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26778*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26781*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/* 26789*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26792*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26795*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26807*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26810*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 26818*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26821*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26824*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26836*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26839*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/* 26847*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26850*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26853*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26865*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26868*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26871*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26874*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26877*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 26901*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26904*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y)), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 26915*/        0, /*End of Scope*/
/* 26916*/      /*Scope*/ 69|128,4/*581*/, /*->27499*/
/* 26918*/        OPC_MoveChild0,
/* 26919*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 26922*/        OPC_RecordChild0, // #0 = $y
/* 26923*/        OPC_RecordChild1, // #1 = $z
/* 26924*/        OPC_MoveParent,
/* 26925*/        OPC_RecordChild1, // #2 = $x
/* 26926*/        OPC_MoveParent,
/* 26927*/        OPC_CheckType, MVT::i64,
/* 26929*/        OPC_Scope, 26|128,2/*282*/, /*->27214*/ // 2 children in Scope
/* 26932*/          OPC_CheckChild1Same, 1,
/* 26934*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26936*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 26939*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26942*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26945*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26948*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 26956*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26959*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26962*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26974*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26977*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/* 26985*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26988*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26991*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27003*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27006*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/* 27014*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27017*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27020*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27032*/          OPC_EmitInteger, MVT::i32, 1, 
/* 27035*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27038*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27041*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27044*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 27068*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27071*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27074*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27077*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27080*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 27088*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27091*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27094*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27106*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27109*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/* 27117*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27120*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27123*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27135*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27138*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/* 27146*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27149*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27152*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27164*/          OPC_EmitInteger, MVT::i32, 1, 
/* 27167*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27170*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27173*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27176*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 27200*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27203*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 27214*/        /*Scope*/ 26|128,2/*282*/, /*->27498*/
/* 27216*/          OPC_CheckChild1Same, 0,
/* 27218*/          OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27220*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 27223*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27226*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27229*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27232*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 27240*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27243*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27246*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27258*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27261*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 27269*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27272*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27275*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27287*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27290*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 27298*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27301*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27304*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27316*/          OPC_EmitInteger, MVT::i32, 1, 
/* 27319*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27322*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27325*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27328*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 27352*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27355*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27358*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27361*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27364*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 27372*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27375*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27378*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27390*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27393*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 27401*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27404*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27407*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27419*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27422*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 27430*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27436*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27448*/          OPC_EmitInteger, MVT::i32, 1, 
/* 27451*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27454*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27457*/          OPC_EmitInteger, MVT::i32, 0, 
/* 27460*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 27484*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27487*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y), i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 27498*/        0, /*End of Scope*/
/* 27499*/      0, /*End of Scope*/
/* 27500*/    /*Scope*/ 57|128,1/*185*/, /*->27687*/
/* 27502*/      OPC_RecordChild0, // #0 = $src0
/* 27503*/      OPC_CheckType, MVT::i32,
/* 27505*/      OPC_Scope, 77, /*->27584*/ // 2 children in Scope
/* 27507*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27518*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27520*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27523*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27526*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27529*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27532*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27535*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27538*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27541*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27553*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27556*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27559*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27562*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27565*/        OPC_MorphNodeTo1, TARGET_VAL(R600::NOT_INT), 0,
                      MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (xor:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, -1:{ *:[i32] }) - Complexity = 8
                  // Dst: (NOT_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 27584*/      /*Scope*/ 101, /*->27686*/
/* 27585*/        OPC_RecordChild1, // #1 = $src1
/* 27586*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27588*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27591*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27594*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27597*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27600*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27603*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27606*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27609*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27612*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27615*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27627*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27630*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27633*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27636*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27648*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27651*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27654*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27657*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27660*/        OPC_MorphNodeTo1, TARGET_VAL(R600::XOR_INT), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (xor:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (XOR_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 27686*/      0, /*End of Scope*/
/* 27687*/    0, /*End of Scope*/
/* 27688*/  /*SwitchOpcode*/ 45, TARGET_VAL(AMDGPUISD::CONST_ADDRESS),// ->27736
/* 27691*/    OPC_RecordChild0, // #0 = $src
/* 27692*/    OPC_CheckChild0Type, MVT::i32,
/* 27694*/    OPC_Scope, 12, /*->27708*/ // 2 children in Scope
/* 27696*/      OPC_CheckType, MVT::i32,
/* 27698*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectGlobalValueConstantOffset:$src #1
/* 27701*/      OPC_MorphNodeTo1, TARGET_VAL(R600::CONST_COPY), 0|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (CONST_ADDRESS:{ *:[i32] } ADDRGA_CONST_OFFSET:{ *:[i32] }:$src) - Complexity = 9
                // Dst: (CONST_COPY:{ *:[i32] } ADDRGA_CONST_OFFSET:{ *:[i32] }:$src)
/* 27708*/    /*Scope*/ 26, /*->27735*/
/* 27709*/      OPC_RecordChild1, // #1 = $buffer_id
/* 27710*/      OPC_MoveChild1,
/* 27711*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 27714*/      OPC_CheckType, MVT::i32,
/* 27716*/      OPC_MoveParent,
/* 27717*/      OPC_CheckType, MVT::v4i32,
/* 27719*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27721*/      OPC_CheckComplexPat, /*CP*/3, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/* 27724*/      OPC_EmitConvertToTarget, 1,
/* 27726*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_VTX_CONSTBUF), 0|OPFL_Variadic2,
                    MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (CONST_ADDRESS:{ *:[v4i32] } ADDRGA_VAR_OFFSET:{ *:[i32] }:$ptr, (imm:{ *:[i32] }):$buffer_id) - Complexity = 15
                // Dst: (TEX_VTX_CONSTBUF:{ *:[v4i32] } ADDRGA_VAR_OFFSET:{ *:[i32] }:$ptr, (imm:{ *:[i32] }):$buffer_id)
/* 27735*/    0, /*End of Scope*/
/* 27736*/  /*SwitchOpcode*/ 125|128,1/*253*/, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->27993
/* 27740*/    OPC_RecordMemRef,
/* 27741*/    OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/* 27742*/    OPC_RecordChild1, // #1 = $ptr
/* 27743*/    OPC_CheckChild1Type, MVT::i32,
/* 27745*/    OPC_CheckType, MVT::i32,
/* 27747*/    OPC_Scope, 63, /*->27812*/ // 3 children in Scope
/* 27749*/      OPC_CheckChild2Integer, 1, 
/* 27751*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_add_global_noret_32
/* 27753*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27755*/      OPC_EmitMergeInputChains1_0,
/* 27756*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 27762*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27774*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 27781*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27784*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 27793*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_INC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 27801*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27804*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, 1:{ *:[i32] })<<P:Predicate_atomic_load_add_global_noret_32>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_INC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27812*/    /*Scope*/ 72, /*->27885*/
/* 27813*/      OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27824*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_add_global_noret_32
/* 27826*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27828*/      OPC_EmitMergeInputChains1_0,
/* 27829*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 27835*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27847*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 27854*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27857*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 27866*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_DEC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 27874*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27877*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, -1:{ *:[i32] })<<P:Predicate_atomic_load_add_global_noret_32>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_DEC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27885*/    /*Scope*/ 106, /*->27992*/
/* 27886*/      OPC_RecordChild2, // #2 = $data
/* 27887*/      OPC_Scope, 42, /*->27931*/ // 2 children in Scope
/* 27889*/        OPC_CheckPredicate, 23, // Predicate_atomic_load_add_global_noret_32
/* 27891*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27893*/        OPC_EmitMergeInputChains1_0,
/* 27894*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27900*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27903*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27912*/        OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_ADD_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27920*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27923*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                      MVT::i32, 2/*#Ops*/, 6, 7, 
                  // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_add_global_noret_32>> - Complexity = 4
                  // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_ADD_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27931*/      /*Scope*/ 59, /*->27991*/
/* 27932*/        OPC_CheckPredicate, 24, // Predicate_atomic_load_add_local_32
/* 27934*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27936*/        OPC_EmitMergeInputChains1_0,
/* 27937*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27940*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27952*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27955*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27967*/        OPC_EmitInteger, MVT::i32, 1, 
/* 27970*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27973*/        OPC_EmitInteger, MVT::i32, 0, 
/* 27976*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_ADD_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                  // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_add_local_32>> - Complexity = 4
                  // Dst: (LDS_ADD_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27991*/      0, /*End of Scope*/
/* 27992*/    0, /*End of Scope*/
/* 27993*/  /*SwitchOpcode*/ 125|128,1/*253*/, TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->28250
/* 27997*/    OPC_RecordMemRef,
/* 27998*/    OPC_RecordNode, // #0 = 'atomic_load_sub' chained node
/* 27999*/    OPC_RecordChild1, // #1 = $ptr
/* 28000*/    OPC_CheckChild1Type, MVT::i32,
/* 28002*/    OPC_CheckType, MVT::i32,
/* 28004*/    OPC_Scope, 72, /*->28078*/ // 3 children in Scope
/* 28006*/      OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28017*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_sub_global_noret_32
/* 28019*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28021*/      OPC_EmitMergeInputChains1_0,
/* 28022*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 28028*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28040*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 28047*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28050*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 28059*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_INC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 28067*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28070*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, -1:{ *:[i32] })<<P:Predicate_atomic_load_sub_global_noret_32>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_INC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 28078*/    /*Scope*/ 63, /*->28142*/
/* 28079*/      OPC_CheckChild2Integer, 1, 
/* 28081*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_sub_global_noret_32
/* 28083*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28085*/      OPC_EmitMergeInputChains1_0,
/* 28086*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 28092*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28104*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 28111*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28114*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 28123*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_DEC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 28131*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28134*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, 1:{ *:[i32] })<<P:Predicate_atomic_load_sub_global_noret_32>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_DEC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 28142*/    /*Scope*/ 106, /*->28249*/
/* 28143*/      OPC_RecordChild2, // #2 = $data
/* 28144*/      OPC_Scope, 42, /*->28188*/ // 2 children in Scope
/* 28146*/        OPC_CheckPredicate, 23, // Predicate_atomic_load_sub_global_noret_32
/* 28148*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28150*/        OPC_EmitMergeInputChains1_0,
/* 28151*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 28157*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28160*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 28169*/        OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_SUB_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 28177*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28180*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                      MVT::i32, 2/*#Ops*/, 6, 7, 
                  // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_sub_global_noret_32>> - Complexity = 4
                  // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_SUB_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 28188*/      /*Scope*/ 59, /*->28248*/
/* 28189*/        OPC_CheckPredicate, 24, // Predicate_atomic_load_sub_local_32
/* 28191*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28193*/        OPC_EmitMergeInputChains1_0,
/* 28194*/        OPC_EmitInteger, MVT::i32, 0, 
/* 28197*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28209*/        OPC_EmitInteger, MVT::i32, 0, 
/* 28212*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28224*/        OPC_EmitInteger, MVT::i32, 1, 
/* 28227*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28230*/        OPC_EmitInteger, MVT::i32, 0, 
/* 28233*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_SUB_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                  // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_sub_local_32>> - Complexity = 4
                  // Dst: (LDS_SUB_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 28248*/      0, /*End of Scope*/
/* 28249*/    0, /*End of Scope*/
/* 28250*/  /*SwitchOpcode*/ 25|128,2/*281*/, TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->28535
/* 28254*/    OPC_RecordChild0, // #0 = $src
/* 28255*/    OPC_SwitchType /*2 cases */, 8|128,1/*136*/, MVT::i32,// ->28395
/* 28259*/      OPC_Scope, 82, /*->28343*/ // 2 children in Scope
/* 28261*/        OPC_CheckChild0Type, MVT::v4i32,
/* 28263*/        OPC_Scope, 15, /*->28280*/ // 5 children in Scope
/* 28265*/          OPC_CheckChild1Integer, 0, 
/* 28267*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28269*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28272*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub0:{ *:[i32] })
/* 28280*/        /*Scope*/ 15, /*->28296*/
/* 28281*/          OPC_CheckChild1Integer, 1, 
/* 28283*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28285*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28288*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub1:{ *:[i32] })
/* 28296*/        /*Scope*/ 15, /*->28312*/
/* 28297*/          OPC_CheckChild1Integer, 2, 
/* 28299*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28301*/          OPC_EmitInteger, MVT::i32, R600::sub2,
/* 28304*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 2:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub2:{ *:[i32] })
/* 28312*/        /*Scope*/ 15, /*->28328*/
/* 28313*/          OPC_CheckChild1Integer, 3, 
/* 28315*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28317*/          OPC_EmitInteger, MVT::i32, R600::sub3,
/* 28320*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 3:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub3:{ *:[i32] })
/* 28328*/        /*Scope*/ 13, /*->28342*/
/* 28329*/          OPC_RecordChild1, // #1 = $index
/* 28330*/          OPC_CheckChild1Type, MVT::i32,
/* 28332*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28334*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V4), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V4:{ *:[i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$index)
/* 28342*/        0, /*End of Scope*/
/* 28343*/      /*Scope*/ 50, /*->28394*/
/* 28344*/        OPC_CheckChild0Type, MVT::v2i32,
/* 28346*/        OPC_Scope, 15, /*->28363*/ // 3 children in Scope
/* 28348*/          OPC_CheckChild1Integer, 0, 
/* 28350*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28352*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28355*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v2i32] }:$src, sub0:{ *:[i32] })
/* 28363*/        /*Scope*/ 15, /*->28379*/
/* 28364*/          OPC_CheckChild1Integer, 1, 
/* 28366*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28368*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28371*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v2i32] }:$src, sub1:{ *:[i32] })
/* 28379*/        /*Scope*/ 13, /*->28393*/
/* 28380*/          OPC_RecordChild1, // #1 = $index
/* 28381*/          OPC_CheckChild1Type, MVT::i32,
/* 28383*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28385*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V2), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V2:{ *:[i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$index)
/* 28393*/        0, /*End of Scope*/
/* 28394*/      0, /*End of Scope*/
/* 28395*/    /*SwitchType*/ 8|128,1/*136*/, MVT::f32,// ->28534
/* 28398*/      OPC_Scope, 82, /*->28482*/ // 2 children in Scope
/* 28400*/        OPC_CheckChild0Type, MVT::v4f32,
/* 28402*/        OPC_Scope, 15, /*->28419*/ // 5 children in Scope
/* 28404*/          OPC_CheckChild1Integer, 0, 
/* 28406*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28408*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28411*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub0:{ *:[i32] })
/* 28419*/        /*Scope*/ 15, /*->28435*/
/* 28420*/          OPC_CheckChild1Integer, 1, 
/* 28422*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28424*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28427*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub1:{ *:[i32] })
/* 28435*/        /*Scope*/ 15, /*->28451*/
/* 28436*/          OPC_CheckChild1Integer, 2, 
/* 28438*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28440*/          OPC_EmitInteger, MVT::i32, R600::sub2,
/* 28443*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 2:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub2:{ *:[i32] })
/* 28451*/        /*Scope*/ 15, /*->28467*/
/* 28452*/          OPC_CheckChild1Integer, 3, 
/* 28454*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28456*/          OPC_EmitInteger, MVT::i32, R600::sub3,
/* 28459*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 3:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub3:{ *:[i32] })
/* 28467*/        /*Scope*/ 13, /*->28481*/
/* 28468*/          OPC_RecordChild1, // #1 = $index
/* 28469*/          OPC_CheckChild1Type, MVT::i32,
/* 28471*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28473*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V4), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V4:{ *:[f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[i32] }:$index)
/* 28481*/        0, /*End of Scope*/
/* 28482*/      /*Scope*/ 50, /*->28533*/
/* 28483*/        OPC_CheckChild0Type, MVT::v2f32,
/* 28485*/        OPC_Scope, 15, /*->28502*/ // 3 children in Scope
/* 28487*/          OPC_CheckChild1Integer, 0, 
/* 28489*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28491*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 28494*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v2f32] }:$src, sub0:{ *:[i32] })
/* 28502*/        /*Scope*/ 15, /*->28518*/
/* 28503*/          OPC_CheckChild1Integer, 1, 
/* 28505*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28507*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 28510*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v2f32] }:$src, sub1:{ *:[i32] })
/* 28518*/        /*Scope*/ 13, /*->28532*/
/* 28519*/          OPC_RecordChild1, // #1 = $index
/* 28520*/          OPC_CheckChild1Type, MVT::i32,
/* 28522*/          OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28524*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V2), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V2:{ *:[f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[i32] }:$index)
/* 28532*/        0, /*End of Scope*/
/* 28533*/      0, /*End of Scope*/
/* 28534*/    0, // EndSwitchType
/* 28535*/  /*SwitchOpcode*/ 22|128,9/*1174*/, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->29713
/* 28539*/    OPC_Scope, 105, /*->28646*/ // 7 children in Scope
/* 28541*/      OPC_CheckChild0Integer, 119|128,10/*1399*/, 
/* 28544*/      OPC_RecordChild1, // #0 = $src0
/* 28545*/      OPC_RecordChild2, // #1 = $src1
/* 28546*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28548*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28551*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28554*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28557*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28560*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28563*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28566*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28569*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28572*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28575*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28587*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28590*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28593*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28596*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28608*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28611*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28614*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28617*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28620*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_UINT24_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 1399:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 8
                // Dst: (MUL_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 28646*/    /*Scope*/ 105, /*->28752*/
/* 28647*/      OPC_CheckChild0Integer, 118|128,10/*1398*/, 
/* 28650*/      OPC_RecordChild1, // #0 = $src0
/* 28651*/      OPC_RecordChild2, // #1 = $src1
/* 28652*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 28654*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28657*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28660*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28663*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28666*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28669*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28672*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28675*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28678*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28681*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28693*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28696*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28699*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28702*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28714*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28717*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28720*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28723*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28726*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_INT24_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (intrinsic_wo_chain:{ *:[i32] } 1398:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 8
                // Dst: (MUL_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 28752*/    /*Scope*/ 46|128,3/*430*/, /*->29184*/
/* 28754*/      OPC_CheckChild0Integer, 16|128,11/*1424*/, 
/* 28757*/      OPC_Scope, 85|128,1/*213*/, /*->28973*/ // 2 children in Scope
/* 28760*/        OPC_MoveChild1,
/* 28761*/        OPC_CheckOpcode, TARGET_VAL(ISD::FSQRT),
/* 28764*/        OPC_RecordChild0, // #0 = $src
/* 28765*/        OPC_CheckType, MVT::f32,
/* 28767*/        OPC_MoveParent,
/* 28768*/        OPC_CheckType, MVT::f32,
/* 28770*/        OPC_Scope, 66, /*->28838*/ // 3 children in Scope
/* 28772*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28774*/          OPC_EmitInteger, MVT::i32, 1, 
/* 28777*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28780*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28783*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28786*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28789*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28792*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28795*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28807*/          OPC_EmitInteger, MVT::i32, 1, 
/* 28810*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28813*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28816*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28819*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1424:{ *:[iPTR] }, (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 11
                    // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 28838*/        /*Scope*/ 66, /*->28905*/
/* 28839*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 28841*/          OPC_EmitInteger, MVT::i32, 1, 
/* 28844*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28847*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28850*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28853*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28856*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28859*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28862*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28874*/          OPC_EmitInteger, MVT::i32, 1, 
/* 28877*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28880*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28883*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28886*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1424:{ *:[iPTR] }, (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 11
                    // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 28905*/        /*Scope*/ 66, /*->28972*/
/* 28906*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 28908*/          OPC_EmitInteger, MVT::i32, 1, 
/* 28911*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28914*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28917*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28920*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28923*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28926*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28929*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28941*/          OPC_EmitInteger, MVT::i32, 1, 
/* 28944*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28947*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28950*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28953*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1424:{ *:[iPTR] }, (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 11
                    // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 28972*/        0, /*End of Scope*/
/* 28973*/      /*Scope*/ 80|128,1/*208*/, /*->29183*/
/* 28975*/        OPC_RecordChild1, // #0 = $src0
/* 28976*/        OPC_CheckChild1Type, MVT::f32,
/* 28978*/        OPC_CheckType, MVT::f32,
/* 28980*/        OPC_Scope, 66, /*->29048*/ // 3 children in Scope
/* 28982*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28984*/          OPC_EmitInteger, MVT::i32, 1, 
/* 28987*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28990*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28993*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28996*/          OPC_EmitInteger, MVT::i32, 0, 
/* 28999*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29002*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29005*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29017*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29020*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29023*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29026*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29029*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1424:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                    // Dst: (RECIP_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 29048*/        /*Scope*/ 66, /*->29115*/
/* 29049*/          OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29051*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29054*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29057*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29060*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29063*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29066*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29069*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29072*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29084*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29087*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29090*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29093*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29096*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1424:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                    // Dst: (RECIP_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 29115*/        /*Scope*/ 66, /*->29182*/
/* 29116*/          OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 29118*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29121*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29124*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29127*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29130*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29133*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29136*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29139*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29151*/          OPC_EmitInteger, MVT::i32, 1, 
/* 29154*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29157*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29160*/          OPC_EmitInteger, MVT::i32, 0, 
/* 29163*/          OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                        MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                    // Src: (intrinsic_wo_chain:{ *:[f32] } 1424:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                    // Dst: (RECIP_IEEE_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 29182*/        0, /*End of Scope*/
/* 29183*/      0, /*End of Scope*/
/* 29184*/    /*Scope*/ 74, /*->29259*/
/* 29185*/      OPC_CheckChild0Integer, 120|128,6/*888*/, 
/* 29188*/      OPC_RecordChild1, // #0 = $src0
/* 29189*/      OPC_CheckChild1Type, MVT::f32,
/* 29191*/      OPC_CheckType, MVT::f32,
/* 29193*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29195*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29198*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29201*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29204*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29207*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29210*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29213*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29216*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29228*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29231*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29234*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29237*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29240*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FRACT), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:{ *:[f32] } 888:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                // Dst: (FRACT:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29259*/    /*Scope*/ 83|128,1/*211*/, /*->29472*/
/* 29261*/      OPC_CheckChild0Integer, 21|128,11/*1429*/, 
/* 29264*/      OPC_RecordChild1, // #0 = $src0
/* 29265*/      OPC_CheckChild1Type, MVT::f32,
/* 29267*/      OPC_CheckType, MVT::f32,
/* 29269*/      OPC_Scope, 66, /*->29337*/ // 3 children in Scope
/* 29271*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29273*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29276*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29279*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29282*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29285*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29288*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29291*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29294*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29306*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29309*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29312*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29315*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29318*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1429:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_CLAMPED_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29337*/      /*Scope*/ 66, /*->29404*/
/* 29338*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29340*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29343*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29346*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29349*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29352*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29355*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29358*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29361*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29373*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29376*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29379*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29382*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29385*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1429:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_CLAMPED_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29404*/      /*Scope*/ 66, /*->29471*/
/* 29405*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 29407*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29410*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29413*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29416*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29419*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29422*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29425*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29428*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29440*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29443*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29446*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29449*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29452*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1429:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_CLAMPED_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29471*/      0, /*End of Scope*/
/* 29472*/    /*Scope*/ 83|128,1/*211*/, /*->29685*/
/* 29474*/      OPC_CheckChild0Integer, 20|128,11/*1428*/, 
/* 29477*/      OPC_RecordChild1, // #0 = $src0
/* 29478*/      OPC_CheckChild1Type, MVT::f32,
/* 29480*/      OPC_CheckType, MVT::f32,
/* 29482*/      OPC_Scope, 66, /*->29550*/ // 3 children in Scope
/* 29484*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29486*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29489*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29492*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29495*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29498*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29501*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29504*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29507*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29519*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29522*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29525*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29528*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29531*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1428:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29550*/      /*Scope*/ 66, /*->29617*/
/* 29551*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29553*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29556*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29559*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29562*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29565*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29568*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29571*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29574*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29586*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29589*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29592*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29595*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29598*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1428:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29617*/      /*Scope*/ 66, /*->29684*/
/* 29618*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 29620*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29623*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29626*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29629*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29632*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29635*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29638*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29641*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29653*/        OPC_EmitInteger, MVT::i32, 1, 
/* 29656*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29659*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29662*/        OPC_EmitInteger, MVT::i32, 0, 
/* 29665*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (intrinsic_wo_chain:{ *:[f32] } 1428:{ *:[iPTR] }, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 8
                  // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 29684*/      0, /*End of Scope*/
/* 29685*/    /*Scope*/ 26, /*->29712*/
/* 29686*/      OPC_CheckChild0Integer, 107|128,46/*5995*/, 
/* 29689*/      OPC_RecordChild1, // #0 = $src0
/* 29690*/      OPC_Scope, 9, /*->29701*/ // 2 children in Scope
/* 29692*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29694*/        OPC_MorphNodeTo1, TARGET_VAL(R600::CUBE_r600_pseudo), 0,
                      MVT::v4f32, 1/*#Ops*/, 0, 
                  // Src: (intrinsic_wo_chain:{ *:[v4f32] } 5995:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$src0) - Complexity = 8
                  // Dst: (CUBE_r600_pseudo:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$src0)
/* 29701*/      /*Scope*/ 9, /*->29711*/
/* 29702*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29704*/        OPC_MorphNodeTo1, TARGET_VAL(R600::CUBE_eg_pseudo), 0,
                      MVT::v4f32, 1/*#Ops*/, 0, 
                  // Src: (intrinsic_wo_chain:{ *:[v4f32] } 5995:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$src0) - Complexity = 8
                  // Dst: (CUBE_eg_pseudo:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$src0)
/* 29711*/      0, /*End of Scope*/
/* 29712*/    0, /*End of Scope*/
/* 29713*/  /*SwitchOpcode*/ 15, TARGET_VAL(AMDGPUISD::CONST_DATA_PTR),// ->29731
/* 29716*/    OPC_RecordChild0, // #0 = $addr
/* 29717*/    OPC_MoveChild0,
/* 29718*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/* 29721*/    OPC_MoveParent,
/* 29722*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29724*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_GLOBAL_ADDR), 0,
                  MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (AMDGPUconstdata_ptr:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$addr) - Complexity = 6
              // Dst: (MOV_IMM_GLOBAL_ADDR:{ *:[iPTR] } (tglobaladdr:{ *:[i32] }):$addr)
/* 29731*/  /*SwitchOpcode*/ 20, TARGET_VAL(AMDGPUISD::STORE_MSKOR),// ->29754
/* 29734*/    OPC_RecordMemRef,
/* 29735*/    OPC_RecordNode, // #0 = 'AMDGPUstore_mskor' chained node
/* 29736*/    OPC_RecordChild1, // #1 = $rw_gpr
/* 29737*/    OPC_CheckChild1Type, MVT::v4i32,
/* 29739*/    OPC_RecordChild2, // #2 = $index_gpr
/* 29740*/    OPC_CheckChild2Type, MVT::i32,
/* 29742*/    OPC_CheckPredicate, 25, // Predicate_mskor_global
/* 29744*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29746*/    OPC_EmitMergeInputChains1_0,
/* 29747*/    OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_MSKOR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#Ops*/, 1, 2, 
              // Src: (AMDGPUstore_mskor v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_mskor_global>> - Complexity = 4
              // Dst: (RAT_MSKOR v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 29754*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_SWAP),// ->29870
/* 29757*/    OPC_RecordMemRef,
/* 29758*/    OPC_RecordNode, // #0 = 'atomic_swap' chained node
/* 29759*/    OPC_RecordChild1, // #1 = $ptr
/* 29760*/    OPC_CheckChild1Type, MVT::i32,
/* 29762*/    OPC_RecordChild2, // #2 = $data
/* 29763*/    OPC_CheckType, MVT::i32,
/* 29765*/    OPC_Scope, 42, /*->29809*/ // 2 children in Scope
/* 29767*/      OPC_CheckPredicate, 23, // Predicate_atomic_swap_global_noret_32
/* 29769*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29771*/      OPC_EmitMergeInputChains1_0,
/* 29772*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 29778*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 29781*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 29790*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_XCHG_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 29798*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 29801*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_swap:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_swap_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_XCHG_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 29809*/    /*Scope*/ 59, /*->29869*/
/* 29810*/      OPC_CheckPredicate, 24, // Predicate_atomic_swap_local_32
/* 29812*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29814*/      OPC_EmitMergeInputChains1_0,
/* 29815*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29818*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29830*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29833*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29845*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29848*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29851*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29854*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_WRXCHG_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_swap:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_swap_local_32>> - Complexity = 4
                // Dst: (LDS_WRXCHG_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 29869*/    0, /*End of Scope*/
/* 29870*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->29986
/* 29873*/    OPC_RecordMemRef,
/* 29874*/    OPC_RecordNode, // #0 = 'atomic_load_min' chained node
/* 29875*/    OPC_RecordChild1, // #1 = $ptr
/* 29876*/    OPC_CheckChild1Type, MVT::i32,
/* 29878*/    OPC_RecordChild2, // #2 = $data
/* 29879*/    OPC_CheckType, MVT::i32,
/* 29881*/    OPC_Scope, 42, /*->29925*/ // 2 children in Scope
/* 29883*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_min_global_noret_32
/* 29885*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29887*/      OPC_EmitMergeInputChains1_0,
/* 29888*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 29894*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 29897*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 29906*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MIN_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 29914*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 29917*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_min:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_min_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MIN_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 29925*/    /*Scope*/ 59, /*->29985*/
/* 29926*/      OPC_CheckPredicate, 24, // Predicate_atomic_load_min_local_32
/* 29928*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 29930*/      OPC_EmitMergeInputChains1_0,
/* 29931*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29934*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29946*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29949*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29961*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29964*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29967*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29970*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MIN_INT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_min:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_min_local_32>> - Complexity = 4
                // Dst: (LDS_MIN_INT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 29985*/    0, /*End of Scope*/
/* 29986*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->30102
/* 29989*/    OPC_RecordMemRef,
/* 29990*/    OPC_RecordNode, // #0 = 'atomic_load_umin' chained node
/* 29991*/    OPC_RecordChild1, // #1 = $ptr
/* 29992*/    OPC_CheckChild1Type, MVT::i32,
/* 29994*/    OPC_RecordChild2, // #2 = $data
/* 29995*/    OPC_CheckType, MVT::i32,
/* 29997*/    OPC_Scope, 42, /*->30041*/ // 2 children in Scope
/* 29999*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_umin_global_noret_32
/* 30001*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30003*/      OPC_EmitMergeInputChains1_0,
/* 30004*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30010*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30013*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30022*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MIN_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30030*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30033*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_umin:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_umin_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MIN_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30041*/    /*Scope*/ 59, /*->30101*/
/* 30042*/      OPC_CheckPredicate, 24, // Predicate_atomic_load_umin_local_32
/* 30044*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30046*/      OPC_EmitMergeInputChains1_0,
/* 30047*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30050*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30062*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30065*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30077*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30080*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30083*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30086*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MIN_UINT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_umin:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_umin_local_32>> - Complexity = 4
                // Dst: (LDS_MIN_UINT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30101*/    0, /*End of Scope*/
/* 30102*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->30218
/* 30105*/    OPC_RecordMemRef,
/* 30106*/    OPC_RecordNode, // #0 = 'atomic_load_max' chained node
/* 30107*/    OPC_RecordChild1, // #1 = $ptr
/* 30108*/    OPC_CheckChild1Type, MVT::i32,
/* 30110*/    OPC_RecordChild2, // #2 = $data
/* 30111*/    OPC_CheckType, MVT::i32,
/* 30113*/    OPC_Scope, 42, /*->30157*/ // 2 children in Scope
/* 30115*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_max_global_noret_32
/* 30117*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30119*/      OPC_EmitMergeInputChains1_0,
/* 30120*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30126*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30129*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30138*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MAX_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30146*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30149*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_max:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_max_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MAX_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30157*/    /*Scope*/ 59, /*->30217*/
/* 30158*/      OPC_CheckPredicate, 24, // Predicate_atomic_load_max_local_32
/* 30160*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30162*/      OPC_EmitMergeInputChains1_0,
/* 30163*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30166*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30178*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30181*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30193*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30196*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30199*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30202*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MAX_INT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_max:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_max_local_32>> - Complexity = 4
                // Dst: (LDS_MAX_INT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30217*/    0, /*End of Scope*/
/* 30218*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->30334
/* 30221*/    OPC_RecordMemRef,
/* 30222*/    OPC_RecordNode, // #0 = 'atomic_load_umax' chained node
/* 30223*/    OPC_RecordChild1, // #1 = $ptr
/* 30224*/    OPC_CheckChild1Type, MVT::i32,
/* 30226*/    OPC_RecordChild2, // #2 = $data
/* 30227*/    OPC_CheckType, MVT::i32,
/* 30229*/    OPC_Scope, 42, /*->30273*/ // 2 children in Scope
/* 30231*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_umax_global_noret_32
/* 30233*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30235*/      OPC_EmitMergeInputChains1_0,
/* 30236*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30242*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30245*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30254*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MAX_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30262*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30265*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_umax:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_umax_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MAX_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30273*/    /*Scope*/ 59, /*->30333*/
/* 30274*/      OPC_CheckPredicate, 24, // Predicate_atomic_load_umax_local_32
/* 30276*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30278*/      OPC_EmitMergeInputChains1_0,
/* 30279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30282*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30294*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30297*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30309*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30312*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30315*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30318*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MAX_UINT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_umax:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_umax_local_32>> - Complexity = 4
                // Dst: (LDS_MAX_UINT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30333*/    0, /*End of Scope*/
/* 30334*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->30450
/* 30337*/    OPC_RecordMemRef,
/* 30338*/    OPC_RecordNode, // #0 = 'atomic_load_and' chained node
/* 30339*/    OPC_RecordChild1, // #1 = $ptr
/* 30340*/    OPC_CheckChild1Type, MVT::i32,
/* 30342*/    OPC_RecordChild2, // #2 = $data
/* 30343*/    OPC_CheckType, MVT::i32,
/* 30345*/    OPC_Scope, 42, /*->30389*/ // 2 children in Scope
/* 30347*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_and_global_noret_32
/* 30349*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30351*/      OPC_EmitMergeInputChains1_0,
/* 30352*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30358*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30361*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30370*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_AND_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30378*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30381*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_and:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_and_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_AND_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30389*/    /*Scope*/ 59, /*->30449*/
/* 30390*/      OPC_CheckPredicate, 24, // Predicate_atomic_load_and_local_32
/* 30392*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30394*/      OPC_EmitMergeInputChains1_0,
/* 30395*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30398*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30410*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30413*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30425*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30428*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30431*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30434*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_AND_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_and:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_and_local_32>> - Complexity = 4
                // Dst: (LDS_AND_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30449*/    0, /*End of Scope*/
/* 30450*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->30566
/* 30453*/    OPC_RecordMemRef,
/* 30454*/    OPC_RecordNode, // #0 = 'atomic_load_or' chained node
/* 30455*/    OPC_RecordChild1, // #1 = $ptr
/* 30456*/    OPC_CheckChild1Type, MVT::i32,
/* 30458*/    OPC_RecordChild2, // #2 = $data
/* 30459*/    OPC_CheckType, MVT::i32,
/* 30461*/    OPC_Scope, 42, /*->30505*/ // 2 children in Scope
/* 30463*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_or_global_noret_32
/* 30465*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30467*/      OPC_EmitMergeInputChains1_0,
/* 30468*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30474*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30477*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30486*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_OR_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30494*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30497*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_or:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_or_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_OR_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30505*/    /*Scope*/ 59, /*->30565*/
/* 30506*/      OPC_CheckPredicate, 24, // Predicate_atomic_load_or_local_32
/* 30508*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30510*/      OPC_EmitMergeInputChains1_0,
/* 30511*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30514*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30526*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30529*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30541*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30544*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30547*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30550*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_OR_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_or:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_or_local_32>> - Complexity = 4
                // Dst: (LDS_OR_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30565*/    0, /*End of Scope*/
/* 30566*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->30682
/* 30569*/    OPC_RecordMemRef,
/* 30570*/    OPC_RecordNode, // #0 = 'atomic_load_xor' chained node
/* 30571*/    OPC_RecordChild1, // #1 = $ptr
/* 30572*/    OPC_CheckChild1Type, MVT::i32,
/* 30574*/    OPC_RecordChild2, // #2 = $data
/* 30575*/    OPC_CheckType, MVT::i32,
/* 30577*/    OPC_Scope, 42, /*->30621*/ // 2 children in Scope
/* 30579*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_xor_global_noret_32
/* 30581*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30583*/      OPC_EmitMergeInputChains1_0,
/* 30584*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 30590*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30593*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 30602*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_XOR_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 30610*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30613*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_xor:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_load_xor_global_noret_32>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_XOR_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30621*/    /*Scope*/ 59, /*->30681*/
/* 30622*/      OPC_CheckPredicate, 24, // Predicate_atomic_load_xor_local_32
/* 30624*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30626*/      OPC_EmitMergeInputChains1_0,
/* 30627*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30630*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30642*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30645*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30657*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30660*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30663*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30666*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_XOR_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_xor:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_xor_local_32>> - Complexity = 4
                // Dst: (LDS_XOR_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 30681*/    0, /*End of Scope*/
/* 30682*/  /*SwitchOpcode*/ 16|128,1/*144*/, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->30830
/* 30686*/    OPC_RecordMemRef,
/* 30687*/    OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/* 30688*/    OPC_RecordChild1, // #1 = $ptr
/* 30689*/    OPC_CheckChild1Type, MVT::i32,
/* 30691*/    OPC_RecordChild2, // #2 = $cmp
/* 30692*/    OPC_RecordChild3, // #3 = $data
/* 30693*/    OPC_CheckType, MVT::i32,
/* 30695*/    OPC_Scope, 54, /*->30751*/ // 2 children in Scope
/* 30697*/      OPC_CheckPredicate, 26, // Predicate_atomic_cmp_swap_global_noret
/* 30699*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30701*/      OPC_EmitMergeInputChains1_0,
/* 30702*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #4
/* 30708*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 30711*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 4, 2, 5,  // Results = #6
/* 30720*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 30723*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 6, 3, 7,  // Results = #8
/* 30732*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_CMPXCHG_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 8, 1,  // Results = #9
/* 30740*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 30743*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 9, 10, 
                // Src: (atomic_cmp_swap:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$cmp, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_cmp_swap_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_CMPXCHG_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$cmp, sub3:{ *:[i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 30751*/    /*Scope*/ 77, /*->30829*/
/* 30752*/      OPC_CheckPredicate, 24, // Predicate_atomic_cmp_swap_local_32
/* 30754*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30756*/      OPC_EmitMergeInputChains1_0,
/* 30757*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30760*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30772*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30775*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30787*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30790*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30802*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30805*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30808*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30811*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_CMPST_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 12/*#Ops*/, 1, 4, 5, 2, 6, 7, 3, 8, 9, 10, 11, 12, 
                // Src: (atomic_cmp_swap:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)<<P:Predicate_atomic_cmp_swap_local_32>> - Complexity = 4
                // Dst: (LDS_CMPST_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 30829*/    0, /*End of Scope*/
/* 30830*/  /*SwitchOpcode*/ 57, TARGET_VAL(ISD::BITCAST),// ->30890
/* 30833*/    OPC_RecordChild0, // #0 = $src0
/* 30834*/    OPC_SwitchType /*6 cases */, 7, MVT::i32,// ->30844
/* 30837*/      OPC_CheckChild0Type, MVT::f32,
/* 30839*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30841*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg32:{ *:[i32] }:$src0
/* 30844*/    /*SwitchType*/ 7, MVT::f32,// ->30853
/* 30846*/      OPC_CheckChild0Type, MVT::i32,
/* 30848*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30850*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg32:{ *:[f32] }:$src0
/* 30853*/    /*SwitchType*/ 7, MVT::v2i32,// ->30862
/* 30855*/      OPC_CheckChild0Type, MVT::v2f32,
/* 30857*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30859*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v2i32] } R600_Reg64:{ *:[v2f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg64:{ *:[v2i32] }:$src0
/* 30862*/    /*SwitchType*/ 7, MVT::v4i32,// ->30871
/* 30864*/      OPC_CheckChild0Type, MVT::v4f32,
/* 30866*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30868*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v4i32] } R600_Reg128:{ *:[v4f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg128:{ *:[v4i32] }:$src0
/* 30871*/    /*SwitchType*/ 7, MVT::v2f32,// ->30880
/* 30873*/      OPC_CheckChild0Type, MVT::v2i32,
/* 30875*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30877*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v2f32] } R600_Reg64:{ *:[v2i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg64:{ *:[v2f32] }:$src0
/* 30880*/    /*SwitchType*/ 7, MVT::v4f32,// ->30889
/* 30882*/      OPC_CheckChild0Type, MVT::v4i32,
/* 30884*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30886*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg128:{ *:[v4f32] }:$src0
/* 30889*/    0, // EndSwitchType
/* 30890*/  /*SwitchOpcode*/ 8, TARGET_VAL(AMDGPUISD::DWORDADDR),// ->30901
/* 30893*/    OPC_RecordChild0, // #0 = $addr
/* 30894*/    OPC_CheckType, MVT::i32,
/* 30896*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30898*/    OPC_CompleteMatch, 1, 0, 
               // Src: (AMDGPUdwordaddr:{ *:[i32] } R600_Reg32:{ *:[i32] }:$addr) - Complexity = 3
               // Dst: R600_Reg32:{ *:[i32] }:$addr
/* 30901*/  /*SwitchOpcode*/ 9, TARGET_VAL(AMDGPUISD::DUMMY_CHAIN),// ->30913
/* 30904*/    OPC_RecordNode, // #0 = 'R600dummy_chain' chained node
/* 30905*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30907*/    OPC_EmitMergeInputChains1_0,
/* 30908*/    OPC_MorphNodeTo0, TARGET_VAL(R600::DUMMY_CHAIN), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (R600dummy_chain) - Complexity = 3
              // Dst: (DUMMY_CHAIN)
/* 30913*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SUB),// ->31020
/* 30916*/    OPC_RecordChild0, // #0 = $src0
/* 30917*/    OPC_RecordChild1, // #1 = $src1
/* 30918*/    OPC_CheckType, MVT::i32,
/* 30920*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30922*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30925*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30928*/    OPC_EmitInteger, MVT::i32, 1, 
/* 30931*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30934*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30937*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30940*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30943*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30946*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30949*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30961*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30964*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30967*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30970*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30982*/    OPC_EmitInteger, MVT::i32, 1, 
/* 30985*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30988*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30991*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30994*/    OPC_MorphNodeTo1, TARGET_VAL(R600::SUB_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sub:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (SUB_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31020*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SMAX),// ->31127
/* 31023*/    OPC_RecordChild0, // #0 = $src0
/* 31024*/    OPC_RecordChild1, // #1 = $src1
/* 31025*/    OPC_CheckType, MVT::i32,
/* 31027*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31029*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31032*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31035*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31038*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31041*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31044*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31047*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31050*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31053*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31056*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31068*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31071*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31074*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31077*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31089*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31092*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31095*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31098*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31101*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (smax:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MAX_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31127*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SMIN),// ->31234
/* 31130*/    OPC_RecordChild0, // #0 = $src0
/* 31131*/    OPC_RecordChild1, // #1 = $src1
/* 31132*/    OPC_CheckType, MVT::i32,
/* 31134*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31136*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31139*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31142*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31145*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31148*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31151*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31154*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31157*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31160*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31163*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31175*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31178*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31181*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31184*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31196*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31199*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31202*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31205*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31208*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (smin:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MIN_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31234*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::UMAX),// ->31341
/* 31237*/    OPC_RecordChild0, // #0 = $src0
/* 31238*/    OPC_RecordChild1, // #1 = $src1
/* 31239*/    OPC_CheckType, MVT::i32,
/* 31241*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31243*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31246*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31249*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31252*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31255*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31258*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31261*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31264*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31267*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31270*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31282*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31285*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31288*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31291*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31303*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31306*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31309*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31312*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31315*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (umax:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MAX_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31341*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::UMIN),// ->31448
/* 31344*/    OPC_RecordChild0, // #0 = $src0
/* 31345*/    OPC_RecordChild1, // #1 = $src1
/* 31346*/    OPC_CheckType, MVT::i32,
/* 31348*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31350*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31353*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31356*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31359*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31362*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31365*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31368*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31371*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31374*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31377*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31389*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31392*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31395*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31398*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31410*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31413*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31416*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31419*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31422*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (umin:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MIN_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31448*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FP_TO_SINT),// ->31658
/* 31452*/    OPC_RecordChild0, // #0 = $src0
/* 31453*/    OPC_CheckChild0Type, MVT::f32,
/* 31455*/    OPC_CheckType, MVT::i32,
/* 31457*/    OPC_Scope, 66, /*->31525*/ // 2 children in Scope
/* 31459*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 31461*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31464*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31467*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31470*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31473*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31476*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31479*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31482*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31494*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31497*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31500*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31503*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31506*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_INT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_sint:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_r600:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 31525*/    /*Scope*/ 2|128,1/*130*/, /*->31657*/
/* 31527*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31529*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31532*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31535*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31538*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31541*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31544*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31547*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31550*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31553*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31556*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31559*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31562*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31574*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31577*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31580*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31583*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31586*/      OPC_EmitNode1, TARGET_VAL(R600::TRUNC), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 31605*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31608*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31611*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31614*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31626*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31629*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31632*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31635*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31638*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_INT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_sint:{ *:[i32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_eg:{ *:[i32] } (TRUNC:{ *:[i32] } ?:{ *:[f32] }:$src0))
/* 31657*/    0, /*End of Scope*/
/* 31658*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FP_TO_UINT),// ->31868
/* 31662*/    OPC_RecordChild0, // #0 = $src0
/* 31663*/    OPC_CheckChild0Type, MVT::f32,
/* 31665*/    OPC_CheckType, MVT::i32,
/* 31667*/    OPC_Scope, 66, /*->31735*/ // 2 children in Scope
/* 31669*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 31671*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31674*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31677*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31680*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31683*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31686*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31689*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31692*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31704*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31707*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31710*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31713*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31716*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_uint:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 31735*/    /*Scope*/ 2|128,1/*130*/, /*->31867*/
/* 31737*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31739*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31742*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31745*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31748*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31751*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31754*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31757*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31760*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31763*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31766*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31769*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31772*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31784*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31787*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31790*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31793*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31796*/      OPC_EmitNode1, TARGET_VAL(R600::TRUNC), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 31815*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31818*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31821*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31824*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31836*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31839*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31842*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31845*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31848*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_uint:{ *:[i32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_eg:{ *:[i32] } (TRUNC:{ *:[i32] } ?:{ *:[f32] }:$src0))
/* 31867*/    0, /*End of Scope*/
/* 31868*/  /*SwitchOpcode*/ 82|128,1/*210*/, TARGET_VAL(ISD::SHL),// ->32082
/* 31872*/    OPC_RecordChild0, // #0 = $src0
/* 31873*/    OPC_RecordChild1, // #1 = $src1
/* 31874*/    OPC_CheckChild1Type, MVT::i32,
/* 31876*/    OPC_CheckType, MVT::i32,
/* 31878*/    OPC_Scope, 100, /*->31980*/ // 2 children in Scope
/* 31880*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 31882*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31885*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31888*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31891*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31894*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31897*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31900*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31903*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31906*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31909*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31921*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31924*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31927*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31930*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31942*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31945*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31948*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31951*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31954*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LSHL_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (LSHL_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31980*/    /*Scope*/ 100, /*->32081*/
/* 31981*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31983*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31986*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31989*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31992*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31995*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31998*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32001*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32004*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32007*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32010*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32022*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32025*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32028*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32031*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32043*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32046*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32049*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32052*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32055*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LSHL_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (LSHL_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32081*/    0, /*End of Scope*/
/* 32082*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MUL),// ->32395
/* 32086*/    OPC_RecordChild0, // #0 = $src0
/* 32087*/    OPC_RecordChild1, // #1 = $src1
/* 32088*/    OPC_CheckType, MVT::i32,
/* 32090*/    OPC_Scope, 100, /*->32192*/ // 3 children in Scope
/* 32092*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32094*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32097*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32100*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32103*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32106*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32109*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32112*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32115*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32118*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32121*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32133*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32136*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32139*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32142*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32154*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32157*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32160*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32163*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32166*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32192*/    /*Scope*/ 100, /*->32293*/
/* 32193*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32195*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32198*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32201*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32204*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32207*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32210*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32213*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32216*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32219*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32222*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32234*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32237*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32240*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32243*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32255*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32258*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32261*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32264*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32267*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32293*/    /*Scope*/ 100, /*->32394*/
/* 32294*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 32296*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32299*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32302*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32305*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32308*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32311*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32314*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32317*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32320*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32323*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32335*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32338*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32341*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32344*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32356*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32359*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32362*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32365*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32368*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32394*/    0, /*End of Scope*/
/* 32395*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MULHS),// ->32708
/* 32399*/    OPC_RecordChild0, // #0 = $src0
/* 32400*/    OPC_RecordChild1, // #1 = $src1
/* 32401*/    OPC_CheckType, MVT::i32,
/* 32403*/    OPC_Scope, 100, /*->32505*/ // 3 children in Scope
/* 32405*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32407*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32410*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32413*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32416*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32419*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32422*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32425*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32428*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32431*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32434*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32446*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32449*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32452*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32455*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32467*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32470*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32473*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32476*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32479*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32505*/    /*Scope*/ 100, /*->32606*/
/* 32506*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32508*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32511*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32514*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32517*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32520*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32523*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32526*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32529*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32532*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32535*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32547*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32550*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32553*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32556*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32568*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32571*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32574*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32577*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32580*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32606*/    /*Scope*/ 100, /*->32707*/
/* 32607*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 32609*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32612*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32615*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32618*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32621*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32624*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32627*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32630*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32633*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32636*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32648*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32651*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32654*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32657*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32669*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32672*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32675*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32678*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32681*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32707*/    0, /*End of Scope*/
/* 32708*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MULHU),// ->33021
/* 32712*/    OPC_RecordChild0, // #0 = $src0
/* 32713*/    OPC_RecordChild1, // #1 = $src1
/* 32714*/    OPC_CheckType, MVT::i32,
/* 32716*/    OPC_Scope, 100, /*->32818*/ // 3 children in Scope
/* 32718*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32720*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32723*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32726*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32729*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32732*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32735*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32738*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32741*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32744*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32747*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32759*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32762*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32765*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32768*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32780*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32783*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32786*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32789*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32792*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32818*/    /*Scope*/ 100, /*->32919*/
/* 32819*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32821*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32824*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32827*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32830*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32833*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32836*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32839*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32842*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32845*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32848*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32860*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32863*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32866*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32869*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32881*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32884*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32887*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32890*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32893*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32919*/    /*Scope*/ 100, /*->33020*/
/* 32920*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 32922*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32925*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32928*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32931*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32934*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32937*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32940*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32943*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32946*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32949*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32961*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32964*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32967*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32970*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32982*/      OPC_EmitInteger, MVT::i32, 1, 
/* 32985*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32988*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32991*/      OPC_EmitInteger, MVT::i32, 0, 
/* 32994*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 33020*/    0, /*End of Scope*/
/* 33021*/  /*SwitchOpcode*/ 63|128,3/*447*/, TARGET_VAL(AMDGPUISD::URECIP),// ->33472
/* 33025*/    OPC_RecordChild0, // #0 = $src0
/* 33026*/    OPC_CheckType, MVT::i32,
/* 33028*/    OPC_Scope, 66, /*->33096*/ // 3 children in Scope
/* 33030*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 33032*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33035*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33038*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33041*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33044*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33047*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33050*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33053*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33065*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33068*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33071*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33074*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33077*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_UINT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUurecip:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (RECIP_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 33096*/    /*Scope*/ 66, /*->33163*/
/* 33097*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33099*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33102*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33105*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33108*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33111*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33114*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33117*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33120*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33132*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33135*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33138*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33141*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33144*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUurecip:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (RECIP_UINT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 33163*/    /*Scope*/ 50|128,2/*306*/, /*->33471*/
/* 33165*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 33167*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33170*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33173*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33176*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33179*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33182*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33185*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33188*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33191*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33194*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33197*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33200*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33203*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33206*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33209*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33212*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33215*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33218*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33221*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33224*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33227*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33230*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33242*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33245*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33248*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33251*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33254*/      OPC_EmitNode1, TARGET_VAL(R600::UINT_TO_FLT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/* 33273*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33282*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33294*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33297*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33300*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33303*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33306*/      OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 27, 28, 29, 30, 31, 32, 33, 34, 35,  // Results = #36
/* 33325*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33328*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33331*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33334*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33346*/      OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/* 33353*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 41,  // Results = #42
/* 33360*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33363*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33366*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33369*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33381*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33384*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33387*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33390*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33393*/      OPC_EmitNode1, TARGET_VAL(R600::MUL_IEEE), 0,
                    MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50,  // Results = #51
/* 33419*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33422*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33425*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33428*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33440*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33443*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33446*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33449*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33452*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
                // Src: (AMDGPUurecip:{ *:[i32] } i32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_eg:{ *:[i32] } (MUL_IEEE:{ *:[i32] } (RECIP_IEEE_cm:{ *:[i32] } (UINT_TO_FLT_eg:{ *:[i32] } ?:{ *:[i32] }:$src0)), (MOV_IMM_I32:{ *:[i32] } 1333788672:{ *:[i32] })))
/* 33471*/    0, /*End of Scope*/
/* 33472*/  /*SwitchOpcode*/ 80|128,1/*208*/, TARGET_VAL(AMDGPUISD::MULHI_U24),// ->33684
/* 33476*/    OPC_RecordChild0, // #0 = $src0
/* 33477*/    OPC_RecordChild1, // #1 = $src1
/* 33478*/    OPC_CheckType, MVT::i32,
/* 33480*/    OPC_Scope, 100, /*->33582*/ // 2 children in Scope
/* 33482*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33484*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33487*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33490*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33493*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33496*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33499*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33502*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33505*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33508*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33511*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33523*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33526*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33529*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33532*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33544*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33547*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33550*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33553*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33556*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT24_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (AMDGPUmulhi_u24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT24_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 33582*/    /*Scope*/ 100, /*->33683*/
/* 33583*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 33585*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33588*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33591*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33594*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33597*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33600*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33603*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33606*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33609*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33612*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33624*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33627*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33630*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33633*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33645*/      OPC_EmitInteger, MVT::i32, 1, 
/* 33648*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33651*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33654*/      OPC_EmitInteger, MVT::i32, 0, 
/* 33657*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_cm24), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (AMDGPUmulhi_u24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_cm24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 33683*/    0, /*End of Scope*/
/* 33684*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFE_U32),// ->33792
/* 33687*/    OPC_RecordChild0, // #0 = $src0
/* 33688*/    OPC_RecordChild1, // #1 = $src1
/* 33689*/    OPC_RecordChild2, // #2 = $src2
/* 33690*/    OPC_CheckChild2Type, MVT::i32,
/* 33692*/    OPC_CheckType, MVT::i32,
/* 33694*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33696*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33699*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33702*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33705*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33708*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33720*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33723*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33726*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33738*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33741*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33744*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33756*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33759*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33762*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33765*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33768*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfe_u32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFE_UINT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 33792*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFE_I32),// ->33900
/* 33795*/    OPC_RecordChild0, // #0 = $src0
/* 33796*/    OPC_RecordChild1, // #1 = $src1
/* 33797*/    OPC_RecordChild2, // #2 = $src2
/* 33798*/    OPC_CheckChild2Type, MVT::i32,
/* 33800*/    OPC_CheckType, MVT::i32,
/* 33802*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33804*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33807*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33810*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33813*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33816*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33828*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33831*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33834*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33846*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33849*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33852*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33864*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33867*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33870*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33873*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33876*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfe_i32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 33900*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFI),// ->34008
/* 33903*/    OPC_RecordChild0, // #0 = $src0
/* 33904*/    OPC_RecordChild1, // #1 = $src1
/* 33905*/    OPC_RecordChild2, // #2 = $src2
/* 33906*/    OPC_CheckChild2Type, MVT::i32,
/* 33908*/    OPC_CheckType, MVT::i32,
/* 33910*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33912*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33915*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33918*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33921*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33924*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33936*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33939*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33942*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33954*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33957*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33960*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33972*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33975*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33978*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33981*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33984*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfi:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFI_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 34008*/  /*SwitchOpcode*/ 92|128,2/*348*/, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->34360
/* 34012*/    OPC_RecordChild0, // #0 = $src
/* 34013*/    OPC_MoveChild1,
/* 34014*/    OPC_Scope, 109, /*->34125*/ // 3 children in Scope
/* 34016*/      OPC_CheckValueType, MVT::i1,
/* 34018*/      OPC_MoveParent,
/* 34019*/      OPC_CheckType, MVT::i32,
/* 34021*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34023*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34026*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34029*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34032*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34035*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34047*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 34050*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34053*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34056*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34068*/      OPC_EmitRegister, MVT::i32, R600::ONE_INT,
/* 34071*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34074*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34077*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34089*/      OPC_EmitInteger, MVT::i32, 1, 
/* 34092*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34095*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34098*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34101*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i1:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, ONE_INT:{ *:[i32] })
/* 34125*/    /*Scope*/ 116, /*->34242*/
/* 34126*/      OPC_CheckValueType, MVT::i8,
/* 34128*/      OPC_MoveParent,
/* 34129*/      OPC_CheckType, MVT::i32,
/* 34131*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34133*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34136*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34139*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34142*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34145*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34157*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 34160*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34163*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34166*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34178*/      OPC_EmitInteger, MVT::i32, 8, 
/* 34181*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 10,  // Results = #11
/* 34188*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34191*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34194*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34206*/      OPC_EmitInteger, MVT::i32, 1, 
/* 34209*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34212*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34215*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34218*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i8:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, (MOV_IMM_I32:{ *:[i32] } 8:{ *:[i32] }))
/* 34242*/    /*Scope*/ 116, /*->34359*/
/* 34243*/      OPC_CheckValueType, MVT::i16,
/* 34245*/      OPC_MoveParent,
/* 34246*/      OPC_CheckType, MVT::i32,
/* 34248*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34250*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34253*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34256*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34259*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34262*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34274*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 34277*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34280*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34283*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34295*/      OPC_EmitInteger, MVT::i32, 16, 
/* 34298*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 10,  // Results = #11
/* 34305*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34308*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34311*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34323*/      OPC_EmitInteger, MVT::i32, 1, 
/* 34326*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34329*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34332*/      OPC_EmitInteger, MVT::i32, 0, 
/* 34335*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i16:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, (MOV_IMM_I32:{ *:[i32] } 16:{ *:[i32] }))
/* 34359*/    0, /*End of Scope*/
/* 34360*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::BFM),// ->34467
/* 34363*/    OPC_RecordChild0, // #0 = $src0
/* 34364*/    OPC_RecordChild1, // #1 = $src1
/* 34365*/    OPC_CheckType, MVT::i32,
/* 34367*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34369*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34372*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34375*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34378*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34381*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34384*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34387*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34390*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34393*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34396*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34408*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34411*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34414*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34417*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34429*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34432*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34435*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34438*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34441*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFM_INT_eg), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUbfm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (BFM_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 34467*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::MAD_U24),// ->34575
/* 34470*/    OPC_RecordChild0, // #0 = $src0
/* 34471*/    OPC_RecordChild1, // #1 = $src1
/* 34472*/    OPC_RecordChild2, // #2 = $src2
/* 34473*/    OPC_CheckChild2Type, MVT::i32,
/* 34475*/    OPC_CheckType, MVT::i32,
/* 34477*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34479*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34482*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34485*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34488*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34491*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34503*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34506*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34509*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34521*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34524*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34527*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34539*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34542*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34545*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34548*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34551*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUmad_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MULADD_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 34575*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::ROTR),// ->34682
/* 34578*/    OPC_RecordChild0, // #0 = $src0
/* 34579*/    OPC_RecordChild1, // #1 = $src1
/* 34580*/    OPC_CheckChild1Type, MVT::i32,
/* 34582*/    OPC_CheckType, MVT::i32,
/* 34584*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34586*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34589*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34592*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34595*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34598*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34610*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34613*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34616*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34628*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34631*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34634*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34646*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34649*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34652*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34655*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34658*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BIT_ALIGN_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 16, 
              // Src: (rotr:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (BIT_ALIGN_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1)
/* 34682*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_U24),// ->34789
/* 34685*/    OPC_RecordChild0, // #0 = $src0
/* 34686*/    OPC_RecordChild1, // #1 = $src1
/* 34687*/    OPC_CheckType, MVT::i32,
/* 34689*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34691*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34694*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34697*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34700*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34703*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34706*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34709*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34712*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34715*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34718*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34730*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34733*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34736*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34739*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34751*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34754*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34757*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34760*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34763*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_UINT24_eg), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmul_u24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MUL_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 34789*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::CARRY),// ->34896
/* 34792*/    OPC_RecordChild0, // #0 = $src0
/* 34793*/    OPC_RecordChild1, // #1 = $src1
/* 34794*/    OPC_CheckType, MVT::i32,
/* 34796*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34798*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34801*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34804*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34807*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34810*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34813*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34816*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34819*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34822*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34825*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34837*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34840*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34843*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34846*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34858*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34861*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34864*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34867*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34870*/    OPC_MorphNodeTo1, TARGET_VAL(R600::ADDC_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUcarry:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (ADDC_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 34896*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::BORROW),// ->35003
/* 34899*/    OPC_RecordChild0, // #0 = $src0
/* 34900*/    OPC_RecordChild1, // #1 = $src1
/* 34901*/    OPC_CheckType, MVT::i32,
/* 34903*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34905*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34908*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34911*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34914*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34917*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34920*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34923*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34926*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34929*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34932*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34944*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34947*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34950*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34953*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34965*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34968*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34971*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34974*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34977*/    OPC_MorphNodeTo1, TARGET_VAL(R600::SUBB_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUborrow:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (SUBB_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 35003*/  /*SwitchOpcode*/ 71, TARGET_VAL(AMDGPUISD::FP_TO_FP16),// ->35077
/* 35006*/    OPC_RecordChild0, // #0 = $src0
/* 35007*/    OPC_CheckChild0Type, MVT::f32,
/* 35009*/    OPC_CheckType, MVT::i32,
/* 35011*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35013*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35016*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35019*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35022*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35025*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35028*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35031*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35034*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35046*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35049*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35052*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35055*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35058*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLT32_TO_FLT16), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfp_to_f16:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FLT32_TO_FLT16:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35077*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::CTPOP),// ->35151
/* 35080*/    OPC_RecordChild0, // #0 = $src0
/* 35081*/    OPC_CheckChild0Type, MVT::i32,
/* 35083*/    OPC_CheckType, MVT::i32,
/* 35085*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35087*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35090*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35093*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35096*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35099*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35102*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35105*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35108*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35120*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35123*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35126*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35129*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35132*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BCNT_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ctpop:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (BCNT_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 35151*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FFBH_U32),// ->35223
/* 35154*/    OPC_RecordChild0, // #0 = $src0
/* 35155*/    OPC_CheckType, MVT::i32,
/* 35157*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35159*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35162*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35165*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35168*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35171*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35174*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35177*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35180*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35192*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35195*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35198*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35201*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35204*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBH_UINT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUffbh_u32:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBH_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 35223*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FFBL_B32),// ->35295
/* 35226*/    OPC_RecordChild0, // #0 = $src0
/* 35227*/    OPC_CheckType, MVT::i32,
/* 35229*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35231*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35234*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35237*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35240*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35243*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35246*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35249*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35252*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35264*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35267*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35270*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35273*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35276*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBL_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUffbl_b32:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBL_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 35295*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::MAD_I24),// ->35403
/* 35298*/    OPC_RecordChild0, // #0 = $src0
/* 35299*/    OPC_RecordChild1, // #1 = $src1
/* 35300*/    OPC_RecordChild2, // #2 = $src2
/* 35301*/    OPC_CheckChild2Type, MVT::i32,
/* 35303*/    OPC_CheckType, MVT::i32,
/* 35305*/    OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 35307*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35310*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35313*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35316*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35319*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35331*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35334*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35337*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35349*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35352*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35355*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35367*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35370*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35373*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35376*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35379*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUmad_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MULADD_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 35403*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_I24),// ->35510
/* 35406*/    OPC_RecordChild0, // #0 = $src0
/* 35407*/    OPC_RecordChild1, // #1 = $src1
/* 35408*/    OPC_CheckType, MVT::i32,
/* 35410*/    OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 35412*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35415*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35418*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35421*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35424*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35427*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35430*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35433*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35436*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35439*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35451*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35454*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35457*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35460*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35472*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35475*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35478*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35481*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35484*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_INT24_cm), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmul_i24_impl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MUL_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 35510*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MULHI_I24),// ->35617
/* 35513*/    OPC_RecordChild0, // #0 = $src0
/* 35514*/    OPC_RecordChild1, // #1 = $src1
/* 35515*/    OPC_CheckType, MVT::i32,
/* 35517*/    OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 35519*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35522*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35525*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35528*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35531*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35534*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35537*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35540*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35543*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35546*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35558*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35561*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35564*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35567*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35579*/    OPC_EmitInteger, MVT::i32, 1, 
/* 35582*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35585*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35588*/    OPC_EmitInteger, MVT::i32, 0, 
/* 35591*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_cm24), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmulhi_i24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MULHI_INT_cm24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 35617*/  /*SwitchOpcode*/ 8, TARGET_VAL(AMDGPUISD::ENDPGM),// ->35628
/* 35620*/    OPC_RecordNode, // #0 = 'AMDGPUendpgm' chained node
/* 35621*/    OPC_CaptureGlueInput,
/* 35622*/    OPC_EmitMergeInputChains1_0,
/* 35623*/    OPC_MorphNodeTo0, TARGET_VAL(R600::RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#Ops*/, 
              // Src: (AMDGPUendpgm) - Complexity = 3
              // Dst: (RETURN)
/* 35628*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::Constant),// ->35645
/* 35631*/    OPC_RecordNode, // #0 = $val
/* 35632*/    OPC_CheckType, MVT::i32,
/* 35634*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35636*/    OPC_EmitConvertToTarget, 0,
/* 35638*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:{ *:[i32] }):$val - Complexity = 3
              // Dst: (MOV_IMM_I32:{ *:[i32] } (imm:{ *:[i32] }):$val)
/* 35645*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->35662
/* 35648*/    OPC_RecordNode, // #0 = 'br' chained node
/* 35649*/    OPC_RecordChild1, // #1 = $target
/* 35650*/    OPC_MoveChild1,
/* 35651*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/* 35654*/    OPC_MoveParent,
/* 35655*/    OPC_EmitMergeInputChains1_0,
/* 35656*/    OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$target) - Complexity = 3
              // Dst: (BRANCH (bb:{ *:[Other] }):$target)
/* 35662*/  /*SwitchOpcode*/ 32, TARGET_VAL(AMDGPUISD::BRANCH_COND),// ->35697
/* 35665*/    OPC_RecordNode, // #0 = 'IL_brcond' chained node
/* 35666*/    OPC_RecordChild1, // #1 = $target
/* 35667*/    OPC_MoveChild1,
/* 35668*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/* 35671*/    OPC_MoveParent,
/* 35672*/    OPC_RecordChild2, // #2 = $src0
/* 35673*/    OPC_Scope, 10, /*->35685*/ // 2 children in Scope
/* 35675*/      OPC_CheckChild2Type, MVT::i32,
/* 35677*/      OPC_EmitMergeInputChains1_0,
/* 35678*/      OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH_COND_i32), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (IL_brcond (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (BRANCH_COND_i32 (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[i32] }:$src0)
/* 35685*/    /*Scope*/ 10, /*->35696*/
/* 35686*/      OPC_CheckChild2Type, MVT::f32,
/* 35688*/      OPC_EmitMergeInputChains1_0,
/* 35689*/      OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH_COND_f32), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (IL_brcond (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (BRANCH_COND_f32 (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[f32] }:$src0)
/* 35696*/    0, /*End of Scope*/
/* 35697*/  /*SwitchOpcode*/ 83|128,5/*723*/, TARGET_VAL(ISD::FDIV),// ->36424
/* 35701*/    OPC_Scope, 85|128,1/*213*/, /*->35917*/ // 2 children in Scope
/* 35704*/      OPC_MoveChild0,
/* 35705*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 35708*/      OPC_CheckPredicate, 2, // Predicate_FP_ONE
/* 35710*/      OPC_MoveParent,
/* 35711*/      OPC_RecordChild1, // #0 = $src
/* 35712*/      OPC_CheckType, MVT::f32,
/* 35714*/      OPC_Scope, 66, /*->35782*/ // 3 children in Scope
/* 35716*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35718*/        OPC_EmitInteger, MVT::i32, 1, 
/* 35721*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35724*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35727*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35730*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35733*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35736*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35739*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35751*/        OPC_EmitInteger, MVT::i32, 1, 
/* 35754*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35757*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35760*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35763*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 35782*/      /*Scope*/ 66, /*->35849*/
/* 35783*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35785*/        OPC_EmitInteger, MVT::i32, 1, 
/* 35788*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35791*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35794*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35797*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35800*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35803*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35806*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35818*/        OPC_EmitInteger, MVT::i32, 1, 
/* 35821*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35824*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35827*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35830*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 35849*/      /*Scope*/ 66, /*->35916*/
/* 35850*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 35852*/        OPC_EmitInteger, MVT::i32, 1, 
/* 35855*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35858*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35861*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35864*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35867*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35870*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35873*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35885*/        OPC_EmitInteger, MVT::i32, 1, 
/* 35888*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35891*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35894*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35897*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 35916*/      0, /*End of Scope*/
/* 35917*/    /*Scope*/ 120|128,3/*504*/, /*->36423*/
/* 35919*/      OPC_RecordChild0, // #0 = $src0
/* 35920*/      OPC_RecordChild1, // #1 = $src1
/* 35921*/      OPC_CheckType, MVT::f32,
/* 35923*/      OPC_Scope, 36|128,1/*164*/, /*->36090*/ // 3 children in Scope
/* 35926*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35928*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35931*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35934*/        OPC_EmitInteger, MVT::i32, 1, 
/* 35937*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35940*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35943*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35946*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35949*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35952*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35955*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35967*/        OPC_EmitInteger, MVT::i32, 1, 
/* 35970*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35973*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35976*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35979*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35982*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35985*/        OPC_EmitInteger, MVT::i32, 0, 
/* 35988*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36000*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36003*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36006*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36009*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36012*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 36031*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36034*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36037*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36040*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36052*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36055*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36058*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36061*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36064*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_r600:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 36090*/      /*Scope*/ 36|128,1/*164*/, /*->36256*/
/* 36092*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36094*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36097*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36100*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36103*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36106*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36109*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36112*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36115*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36118*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36121*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36133*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36136*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36139*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36142*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36145*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36148*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36151*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36154*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36166*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36169*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36172*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36175*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36178*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 36197*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36200*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36203*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36206*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36218*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36221*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36224*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36227*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36230*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_eg:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 36256*/      /*Scope*/ 36|128,1/*164*/, /*->36422*/
/* 36258*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 36260*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36263*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36266*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36269*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36272*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36275*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36278*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36281*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36284*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36287*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36299*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36302*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36305*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36308*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36311*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36314*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36317*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36320*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36332*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36335*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36338*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36341*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36344*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 36363*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36366*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36369*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36372*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36384*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36387*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36390*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36393*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36396*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_cm:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 36422*/      0, /*End of Scope*/
/* 36423*/    0, /*End of Scope*/
/* 36424*/  /*SwitchOpcode*/ 39|128,3/*423*/, TARGET_VAL(AMDGPUISD::RCP),// ->36851
/* 36428*/    OPC_Scope, 83|128,1/*211*/, /*->36642*/ // 2 children in Scope
/* 36431*/      OPC_MoveChild0,
/* 36432*/      OPC_CheckOpcode, TARGET_VAL(ISD::FSQRT),
/* 36435*/      OPC_RecordChild0, // #0 = $src
/* 36436*/      OPC_MoveParent,
/* 36437*/      OPC_CheckType, MVT::f32,
/* 36439*/      OPC_Scope, 66, /*->36507*/ // 3 children in Scope
/* 36441*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36443*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36446*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36449*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36452*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36455*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36458*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36461*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36464*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36476*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36479*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36482*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36485*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36488*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 36507*/      /*Scope*/ 66, /*->36574*/
/* 36508*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36510*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36513*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36516*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36519*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36522*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36525*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36528*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36531*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36543*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36546*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36549*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36552*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36555*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 36574*/      /*Scope*/ 66, /*->36641*/
/* 36575*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 36577*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36580*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36583*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36586*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36589*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36592*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36595*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36598*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36610*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36613*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36616*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36619*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36622*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 36641*/      0, /*End of Scope*/
/* 36642*/    /*Scope*/ 78|128,1/*206*/, /*->36850*/
/* 36644*/      OPC_RecordChild0, // #0 = $src0
/* 36645*/      OPC_CheckType, MVT::f32,
/* 36647*/      OPC_Scope, 66, /*->36715*/ // 3 children in Scope
/* 36649*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36651*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36654*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36657*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36660*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36663*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36666*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36669*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36672*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36684*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36687*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36690*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36693*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36696*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36715*/      /*Scope*/ 66, /*->36782*/
/* 36716*/        OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36718*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36721*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36724*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36727*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36730*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36733*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36736*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36739*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36751*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36754*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36757*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36760*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36763*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36782*/      /*Scope*/ 66, /*->36849*/
/* 36783*/        OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 36785*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36788*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36791*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36794*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36797*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36800*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36803*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36806*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36818*/        OPC_EmitInteger, MVT::i32, 1, 
/* 36821*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36824*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36827*/        OPC_EmitInteger, MVT::i32, 0, 
/* 36830*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp_impl:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36849*/      0, /*End of Scope*/
/* 36850*/    0, /*End of Scope*/
/* 36851*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FADD),// ->36958
/* 36854*/    OPC_RecordChild0, // #0 = $src0
/* 36855*/    OPC_RecordChild1, // #1 = $src1
/* 36856*/    OPC_CheckType, MVT::f32,
/* 36858*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36860*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36863*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36866*/    OPC_EmitInteger, MVT::i32, 1, 
/* 36869*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36872*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36875*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36878*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36881*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36884*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36887*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36899*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36902*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36905*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36908*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36920*/    OPC_EmitInteger, MVT::i32, 1, 
/* 36923*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36926*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36929*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36932*/    OPC_MorphNodeTo1, TARGET_VAL(R600::ADD), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fadd:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (ADD:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 36958*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMUL),// ->37065
/* 36961*/    OPC_RecordChild0, // #0 = $src0
/* 36962*/    OPC_RecordChild1, // #1 = $src1
/* 36963*/    OPC_CheckType, MVT::f32,
/* 36965*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36967*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36970*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36973*/    OPC_EmitInteger, MVT::i32, 1, 
/* 36976*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36979*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36982*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36985*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36988*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36991*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36994*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37006*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37009*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37012*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37015*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37027*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37030*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37033*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37036*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37039*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmul:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MUL_IEEE:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37065*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::FMAX_LEGACY),// ->37172
/* 37068*/    OPC_RecordChild0, // #0 = $src0
/* 37069*/    OPC_RecordChild1, // #1 = $src1
/* 37070*/    OPC_CheckType, MVT::f32,
/* 37072*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37074*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37077*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37080*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37083*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37086*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37089*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37092*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37095*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37098*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37101*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37113*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37116*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37119*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37122*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37134*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37137*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37140*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37143*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37146*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmax_legacy:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MAX:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37172*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::FMIN_LEGACY),// ->37279
/* 37175*/    OPC_RecordChild0, // #0 = $src0
/* 37176*/    OPC_RecordChild1, // #1 = $src1
/* 37177*/    OPC_CheckType, MVT::f32,
/* 37179*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37181*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37184*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37187*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37190*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37193*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37196*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37199*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37202*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37205*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37208*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37220*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37223*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37226*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37229*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37241*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37244*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37247*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37250*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37253*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmin_legacy:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MIN:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37279*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMAXNUM),// ->37386
/* 37282*/    OPC_RecordChild0, // #0 = $src0
/* 37283*/    OPC_RecordChild1, // #1 = $src1
/* 37284*/    OPC_CheckType, MVT::f32,
/* 37286*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37288*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37291*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37294*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37297*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37300*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37303*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37306*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37309*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37312*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37315*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37327*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37330*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37333*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37336*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37348*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37351*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37354*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37357*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37360*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_DX10), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmaxnum:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MAX_DX10:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37386*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMINNUM),// ->37493
/* 37389*/    OPC_RecordChild0, // #0 = $src0
/* 37390*/    OPC_RecordChild1, // #1 = $src1
/* 37391*/    OPC_CheckType, MVT::f32,
/* 37393*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37395*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37398*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37401*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37404*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37407*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37410*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37413*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37416*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37419*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37422*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37434*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37437*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37440*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37443*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37455*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37458*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37461*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37464*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37467*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_DX10), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fminnum:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MIN_DX10:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 37493*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FRACT),// ->37565
/* 37496*/    OPC_RecordChild0, // #0 = $src0
/* 37497*/    OPC_CheckType, MVT::f32,
/* 37499*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37501*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37504*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37507*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37510*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37513*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37516*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37519*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37522*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37534*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37537*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37540*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37543*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37546*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FRACT), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfract_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FRACT:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 37565*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FTRUNC),// ->37637
/* 37568*/    OPC_RecordChild0, // #0 = $src0
/* 37569*/    OPC_CheckType, MVT::f32,
/* 37571*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37573*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37576*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37579*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37582*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37585*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37588*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37591*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37594*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37606*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37609*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37612*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37615*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37618*/    OPC_MorphNodeTo1, TARGET_VAL(R600::TRUNC), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ftrunc:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (TRUNC:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 37637*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FCEIL),// ->37709
/* 37640*/    OPC_RecordChild0, // #0 = $src0
/* 37641*/    OPC_CheckType, MVT::f32,
/* 37643*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37645*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37648*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37651*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37654*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37657*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37660*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37663*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37666*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37678*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37681*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37684*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37687*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37690*/    OPC_MorphNodeTo1, TARGET_VAL(R600::CEIL), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fceil:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (CEIL:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 37709*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FRINT),// ->37781
/* 37712*/    OPC_RecordChild0, // #0 = $src0
/* 37713*/    OPC_CheckType, MVT::f32,
/* 37715*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37717*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37720*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37723*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37726*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37729*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37732*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37735*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37738*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37750*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37753*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37756*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37759*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37762*/    OPC_MorphNodeTo1, TARGET_VAL(R600::RNDNE), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (frint:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (RNDNE:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 37781*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FFLOOR),// ->37853
/* 37784*/    OPC_RecordChild0, // #0 = $src0
/* 37785*/    OPC_CheckType, MVT::f32,
/* 37787*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37789*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37792*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37795*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37798*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37801*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37804*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37807*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37810*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37822*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37825*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37828*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37831*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37834*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLOOR), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ffloor:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FLOOR:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 37853*/  /*SwitchOpcode*/ 90|128,2/*346*/, TARGET_VAL(AMDGPUISD::DOT4),// ->38203
/* 37857*/    OPC_RecordChild0, // #0 = $src0_X
/* 37858*/    OPC_RecordChild1, // #1 = $src1_X
/* 37859*/    OPC_RecordChild2, // #2 = $src0_Y
/* 37860*/    OPC_RecordChild3, // #3 = $src1_Y
/* 37861*/    OPC_RecordChild4, // #4 = $src0_Z
/* 37862*/    OPC_RecordChild5, // #5 = $src1_Z
/* 37863*/    OPC_RecordChild6, // #6 = $src0_W
/* 37864*/    OPC_RecordChild7, // #7 = $src1_W
/* 37865*/    OPC_CheckType, MVT::f32,
/* 37867*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37869*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37872*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37875*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37878*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37881*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37884*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37887*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37890*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37893*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37896*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37908*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37911*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37914*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37917*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37929*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37932*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37935*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37938*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37941*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37944*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37947*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37950*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37953*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37956*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37959*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37971*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37974*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37977*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37980*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37992*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37995*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37998*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38001*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38004*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38007*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38010*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38013*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38016*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38019*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38022*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38034*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38037*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38040*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38043*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38055*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38058*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38061*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38064*/    OPC_EmitInteger, MVT::i32, 1, 
/* 38067*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38070*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38073*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38076*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38079*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38082*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38085*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38097*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38100*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38103*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38106*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38118*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38121*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38124*/    OPC_EmitInteger, MVT::i32, 0, 
/* 38127*/    OPC_MorphNodeTo1, TARGET_VAL(R600::DOT_4), 0,
                  MVT::f32, 70/*#Ops*/, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 4, 44, 45, 46, 47, 5, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 6, 59, 60, 61, 62, 7, 63, 64, 65, 66, 67, 68, 69, 
              // Src: (DOT4:{ *:[f32] } R600_TReg32_X:{ *:[f32] }:$src0_X, R600_TReg32_X:{ *:[f32] }:$src1_X, R600_TReg32_Y:{ *:[f32] }:$src0_Y, R600_TReg32_Y:{ *:[f32] }:$src1_Y, R600_TReg32_Z:{ *:[f32] }:$src0_Z, R600_TReg32_Z:{ *:[f32] }:$src1_Z, R600_TReg32_W:{ *:[f32] }:$src0_W, R600_TReg32_W:{ *:[f32] }:$src1_W) - Complexity = 3
              // Dst: (DOT_4:{ *:[f32] } R600_TReg32_X:{ *:[f32] }:$src0_X, R600_TReg32_X:{ *:[f32] }:$src1_X, R600_TReg32_Y:{ *:[f32] }:$src0_Y, R600_TReg32_Y:{ *:[f32] }:$src1_Y, R600_TReg32_Z:{ *:[f32] }:$src0_Z, R600_TReg32_Z:{ *:[f32] }:$src1_Z, R600_TReg32_W:{ *:[f32] }:$src0_W, R600_TReg32_W:{ *:[f32] }:$src1_W)
/* 38203*/  /*SwitchOpcode*/ 77|128,1/*205*/, TARGET_VAL(ISD::FMAD),// ->38412
/* 38207*/    OPC_RecordChild0, // #0 = $src0
/* 38208*/    OPC_RecordChild1, // #1 = $src1
/* 38209*/    OPC_RecordChild2, // #2 = $src2
/* 38210*/    OPC_CheckType, MVT::f32,
/* 38212*/    OPC_Scope, 98, /*->38312*/ // 2 children in Scope
/* 38214*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 38216*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38219*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38222*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38225*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38228*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38240*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38243*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38246*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38258*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38261*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38264*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38276*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38279*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38282*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38285*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38288*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_IEEE_r600), 0,
                    MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fmad:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
                // Dst: (MULADD_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 38312*/    /*Scope*/ 98, /*->38411*/
/* 38313*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38315*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38318*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38321*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38324*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38327*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38339*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38342*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38345*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38357*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38360*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38363*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38375*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38378*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38381*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38384*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38387*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_IEEE_eg), 0,
                    MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fmad:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
                // Dst: (MULADD_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 38411*/    0, /*End of Scope*/
/* 38412*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FEXP2),// ->38622
/* 38416*/    OPC_RecordChild0, // #0 = $src0
/* 38417*/    OPC_CheckType, MVT::f32,
/* 38419*/    OPC_Scope, 66, /*->38487*/ // 3 children in Scope
/* 38421*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 38423*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38426*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38429*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38432*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38435*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38438*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38441*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38444*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38456*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38459*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38462*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38465*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38468*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38487*/    /*Scope*/ 66, /*->38554*/
/* 38488*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 38490*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38493*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38496*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38499*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38502*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38505*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38508*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38511*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38523*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38526*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38529*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38532*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38535*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38554*/    /*Scope*/ 66, /*->38621*/
/* 38555*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 38557*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38560*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38563*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38566*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38569*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38572*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38575*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38578*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38590*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38593*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38596*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38599*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38602*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38621*/    0, /*End of Scope*/
/* 38622*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FLOG2),// ->38832
/* 38626*/    OPC_RecordChild0, // #0 = $src0
/* 38627*/    OPC_CheckType, MVT::f32,
/* 38629*/    OPC_Scope, 66, /*->38697*/ // 3 children in Scope
/* 38631*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 38633*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38636*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38639*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38642*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38645*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38648*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38651*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38654*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38666*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38669*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38672*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38675*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38678*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38697*/    /*Scope*/ 66, /*->38764*/
/* 38698*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 38700*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38703*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38706*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38709*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38712*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38715*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38718*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38721*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38733*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38736*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38739*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38742*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38745*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38764*/    /*Scope*/ 66, /*->38831*/
/* 38765*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 38767*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38770*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38773*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38776*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38779*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38782*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38785*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38788*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38800*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38803*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38806*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38809*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38812*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38831*/    0, /*End of Scope*/
/* 38832*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(AMDGPUISD::RSQ_CLAMP),// ->39042
/* 38836*/    OPC_RecordChild0, // #0 = $src0
/* 38837*/    OPC_CheckType, MVT::f32,
/* 38839*/    OPC_Scope, 66, /*->38907*/ // 3 children in Scope
/* 38841*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 38843*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38846*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38849*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38852*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38855*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38858*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38861*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38864*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38876*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38879*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38882*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38885*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38888*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38907*/    /*Scope*/ 66, /*->38974*/
/* 38908*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 38910*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38913*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38916*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38919*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38922*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38925*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38928*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38931*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38943*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38946*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38949*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38952*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38955*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 38974*/    /*Scope*/ 66, /*->39041*/
/* 38975*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 38977*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38980*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38983*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38986*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38989*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38992*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38995*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38998*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39010*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39013*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39016*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39019*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39022*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39041*/    0, /*End of Scope*/
/* 39042*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(AMDGPUISD::RSQ),// ->39252
/* 39046*/    OPC_RecordChild0, // #0 = $src0
/* 39047*/    OPC_CheckType, MVT::f32,
/* 39049*/    OPC_Scope, 66, /*->39117*/ // 3 children in Scope
/* 39051*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39053*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39056*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39059*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39062*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39065*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39068*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39071*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39074*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39086*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39089*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39092*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39095*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39098*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39117*/    /*Scope*/ 66, /*->39184*/
/* 39118*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 39120*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39123*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39126*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39129*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39132*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39135*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39138*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39141*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39153*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39156*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39159*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39162*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39165*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39184*/    /*Scope*/ 66, /*->39251*/
/* 39185*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 39187*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39190*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39193*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39196*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39199*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39202*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39205*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39208*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39220*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39223*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39226*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39229*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39232*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_impl:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 39251*/    0, /*End of Scope*/
/* 39252*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(ISD::SINT_TO_FP),// ->39397
/* 39256*/    OPC_RecordChild0, // #0 = $src0
/* 39257*/    OPC_CheckChild0Type, MVT::i32,
/* 39259*/    OPC_CheckType, MVT::f32,
/* 39261*/    OPC_Scope, 66, /*->39329*/ // 2 children in Scope
/* 39263*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39265*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39268*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39271*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39274*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39277*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39280*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39283*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39286*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39298*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39301*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39304*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39307*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39310*/      OPC_MorphNodeTo1, TARGET_VAL(R600::INT_TO_FLT_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_r600:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 39329*/    /*Scope*/ 66, /*->39396*/
/* 39330*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39332*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39335*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39338*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39341*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39344*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39347*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39350*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39353*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39365*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39368*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39371*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39374*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39377*/      OPC_MorphNodeTo1, TARGET_VAL(R600::INT_TO_FLT_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_eg:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 39396*/    0, /*End of Scope*/
/* 39397*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(ISD::UINT_TO_FP),// ->39542
/* 39401*/    OPC_RecordChild0, // #0 = $src0
/* 39402*/    OPC_CheckChild0Type, MVT::i32,
/* 39404*/    OPC_CheckType, MVT::f32,
/* 39406*/    OPC_Scope, 66, /*->39474*/ // 2 children in Scope
/* 39408*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39410*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39413*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39416*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39419*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39422*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39425*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39428*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39431*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39443*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39446*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39449*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39452*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39455*/      OPC_MorphNodeTo1, TARGET_VAL(R600::UINT_TO_FLT_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (uint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (UINT_TO_FLT_r600:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 39474*/    /*Scope*/ 66, /*->39541*/
/* 39475*/      OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39477*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39480*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39483*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39486*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39489*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39492*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39495*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39498*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39510*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39513*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39516*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39519*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39522*/      OPC_MorphNodeTo1, TARGET_VAL(R600::UINT_TO_FLT_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (uint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (UINT_TO_FLT_eg:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 39541*/    0, /*End of Scope*/
/* 39542*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(AMDGPUISD::SIN_HW),// ->39821
/* 39546*/    OPC_RecordChild0, // #0 = $src0
/* 39547*/    OPC_CheckChild0Type, MVT::f32,
/* 39549*/    OPC_CheckType, MVT::f32,
/* 39551*/    OPC_Scope, 66, /*->39619*/ // 4 children in Scope
/* 39553*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39555*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39558*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39561*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39564*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39567*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39570*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39573*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39576*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39588*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39591*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39594*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39597*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39600*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 39619*/    /*Scope*/ 66, /*->39686*/
/* 39620*/      OPC_CheckPatternPredicate, 5, // (Subtarget->getGeneration() == AMDGPUSubtarget::R700)
/* 39622*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39625*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39628*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39631*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39634*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39637*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39640*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39643*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39655*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39658*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39661*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39664*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39667*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_r700), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_r700:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 39686*/    /*Scope*/ 66, /*->39753*/
/* 39687*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 39689*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39692*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39695*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39698*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39701*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39704*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39707*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39710*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39722*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39725*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39728*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39731*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39734*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 39753*/    /*Scope*/ 66, /*->39820*/
/* 39754*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 39756*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39759*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39762*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39765*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39768*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39771*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39774*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39777*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39789*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39792*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39795*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39798*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39801*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 39820*/    0, /*End of Scope*/
/* 39821*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(AMDGPUISD::COS_HW),// ->40100
/* 39825*/    OPC_RecordChild0, // #0 = $src0
/* 39826*/    OPC_CheckChild0Type, MVT::f32,
/* 39828*/    OPC_CheckType, MVT::f32,
/* 39830*/    OPC_Scope, 66, /*->39898*/ // 4 children in Scope
/* 39832*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 39834*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39837*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39840*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39843*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39846*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39849*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39852*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39855*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39867*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39870*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39873*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39876*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39879*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 39898*/    /*Scope*/ 66, /*->39965*/
/* 39899*/      OPC_CheckPatternPredicate, 5, // (Subtarget->getGeneration() == AMDGPUSubtarget::R700)
/* 39901*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39904*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39907*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39910*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39913*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39916*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39919*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39922*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 39934*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39937*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 39940*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39943*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39946*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_r700), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_r700:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 39965*/    /*Scope*/ 66, /*->40032*/
/* 39966*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 39968*/      OPC_EmitInteger, MVT::i32, 1, 
/* 39971*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39974*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39977*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39980*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39983*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39986*/      OPC_EmitInteger, MVT::i32, 0, 
/* 39989*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40001*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40004*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40007*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40010*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40013*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40032*/    /*Scope*/ 66, /*->40099*/
/* 40033*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 40035*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40038*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40041*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40044*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40047*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40050*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40053*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40056*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40068*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40071*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40074*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40077*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40080*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 40099*/    0, /*End of Scope*/
/* 40100*/  /*SwitchOpcode*/ 103, TARGET_VAL(ISD::FMA),// ->40206
/* 40103*/    OPC_RecordChild0, // #0 = $src0
/* 40104*/    OPC_RecordChild1, // #1 = $src1
/* 40105*/    OPC_RecordChild2, // #2 = $src2
/* 40106*/    OPC_CheckType, MVT::f32,
/* 40108*/    OPC_CheckPatternPredicate, 6, // (Subtarget->hasFMA()) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40110*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40113*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40116*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40119*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40122*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40134*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40137*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40140*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40152*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40155*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40158*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40170*/    OPC_EmitInteger, MVT::i32, 1, 
/* 40173*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40176*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40179*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40182*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FMA_eg), 0,
                  MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (fma:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
              // Dst: (FMA_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 40206*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::FP16_TO_FP),// ->40280
/* 40209*/    OPC_RecordChild0, // #0 = $src0
/* 40210*/    OPC_CheckChild0Type, MVT::i32,
/* 40212*/    OPC_CheckType, MVT::f32,
/* 40214*/    OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40216*/    OPC_EmitInteger, MVT::i32, 1, 
/* 40219*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40222*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40225*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40228*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40231*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40234*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40237*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40249*/    OPC_EmitInteger, MVT::i32, 1, 
/* 40252*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40255*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40258*/    OPC_EmitInteger, MVT::i32, 0, 
/* 40261*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLT16_TO_FLT32), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (f16_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FLT16_TO_FLT32:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 40280*/  /*SwitchOpcode*/ 119|128,3/*503*/, TARGET_VAL(ISD::FSQRT),// ->40787
/* 40284*/    OPC_RecordChild0, // #0 = $src
/* 40285*/    OPC_CheckType, MVT::f32,
/* 40287*/    OPC_Scope, 36|128,1/*164*/, /*->40454*/ // 3 children in Scope
/* 40290*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 40292*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40295*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40298*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40301*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40304*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40307*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40310*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40313*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40316*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40319*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40331*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40334*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40337*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40340*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40343*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40346*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40349*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40352*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40364*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40367*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40370*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40373*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40376*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 40395*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40398*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40401*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40404*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40416*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40419*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40422*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40425*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40428*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } ?:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_r600:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 40454*/    /*Scope*/ 36|128,1/*164*/, /*->40620*/
/* 40456*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 40458*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40461*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40464*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40467*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40470*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40473*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40476*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40479*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40482*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40485*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40497*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40500*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40503*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40506*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40509*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40512*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40515*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40518*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40530*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40533*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40536*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40539*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40542*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 40561*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40564*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40567*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40570*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40582*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40585*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40588*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40591*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40594*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } ?:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_eg:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 40620*/    /*Scope*/ 36|128,1/*164*/, /*->40786*/
/* 40622*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 40624*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40627*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40630*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40633*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40636*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40639*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40642*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40645*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40648*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40651*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40663*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40666*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40669*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40672*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40675*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40678*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40681*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40684*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40696*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40699*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40702*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40705*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40708*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 40727*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40730*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40733*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40736*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40748*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40751*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40754*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40757*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40760*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_cm:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 40786*/    0, /*End of Scope*/
/* 40787*/  /*SwitchOpcode*/ 56|128,5/*696*/, TARGET_VAL(ISD::FPOW),// ->41487
/* 40791*/    OPC_RecordChild0, // #0 = $src0
/* 40792*/    OPC_RecordChild1, // #1 = $src1
/* 40793*/    OPC_CheckType, MVT::f32,
/* 40795*/    OPC_Scope, 100|128,1/*228*/, /*->41026*/ // 3 children in Scope
/* 40798*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 40800*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40803*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40806*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40809*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40812*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40815*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40818*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40821*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40824*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40827*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40830*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40833*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40836*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40839*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40851*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40854*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40857*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40860*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40863*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40866*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40869*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40872*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40884*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40887*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40890*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40893*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40896*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_r600), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 40915*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40918*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40921*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40924*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40936*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40939*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 40942*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40945*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40948*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 40974*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40977*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40980*/      OPC_EmitInteger, MVT::i32, 0, 
/* 40983*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 40995*/      OPC_EmitInteger, MVT::i32, 1, 
/* 40998*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41001*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41004*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41007*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_r600:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_r600:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 41026*/    /*Scope*/ 100|128,1/*228*/, /*->41256*/
/* 41028*/      OPC_CheckPatternPredicate, 4, // (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 41030*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41033*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41036*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41039*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41042*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41045*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41048*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41051*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41054*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41057*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41060*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41063*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41066*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41069*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41081*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41084*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41087*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41090*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41093*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41096*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41099*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41102*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41114*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41117*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41120*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41123*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41126*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_eg), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 41145*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41148*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41151*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41154*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41166*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41169*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41172*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41175*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41178*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 41204*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41207*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41210*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41213*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41225*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41228*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41231*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41234*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41237*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_eg:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_eg:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 41256*/    /*Scope*/ 100|128,1/*228*/, /*->41486*/
/* 41258*/      OPC_CheckPatternPredicate, 3, // (Subtarget->hasCaymanISA())
/* 41260*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41263*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41266*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41269*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41272*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41275*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41278*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41281*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41284*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41287*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41290*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41293*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41296*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41299*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41311*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41314*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41317*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41320*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41323*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41326*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41329*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41332*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41344*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41347*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41350*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41353*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41356*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 41375*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41378*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41381*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41384*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41396*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41399*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41402*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41405*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41408*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 41434*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41437*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41440*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41443*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41455*/      OPC_EmitInteger, MVT::i32, 1, 
/* 41458*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41461*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41464*/      OPC_EmitInteger, MVT::i32, 0, 
/* 41467*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_cm:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_cm:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 41486*/    0, /*End of Scope*/
/* 41487*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::ConstantFP),// ->41504
/* 41490*/    OPC_RecordNode, // #0 = $val
/* 41491*/    OPC_CheckType, MVT::f32,
/* 41493*/    OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41495*/    OPC_EmitConvertToTarget, 0,
/* 41497*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_F32), 0,
                  MVT::f32, 1/*#Ops*/, 1, 
              // Src: (fpimm:{ *:[f32] }):$val - Complexity = 3
              // Dst: (MOV_IMM_F32:{ *:[f32] } (fpimm:{ *:[f32] }):$val)
/* 41504*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::FABS),// ->41517
/* 41507*/    OPC_RecordChild0, // #0 = $src0
/* 41508*/    OPC_CheckType, MVT::f32,
/* 41510*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FABS_R600), 0,
                  MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FABS_R600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 41517*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::FNEG),// ->41530
/* 41520*/    OPC_RecordChild0, // #0 = $src0
/* 41521*/    OPC_CheckType, MVT::f32,
/* 41523*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FNEG_R600), 0,
                  MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FNEG_R600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 41530*/  /*SwitchOpcode*/ 68|128,4/*580*/, TARGET_VAL(ISD::FCOPYSIGN),// ->42114
/* 41534*/    OPC_RecordChild0, // #0 = $src0
/* 41535*/    OPC_RecordChild1, // #1 = $src1
/* 41536*/    OPC_Scope, 19|128,2/*275*/, /*->41814*/ // 2 children in Scope
/* 41539*/      OPC_CheckChild1Type, MVT::f32,
/* 41541*/      OPC_SwitchType /*2 cases */, 112, MVT::f32,// ->41656
/* 41544*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41546*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41549*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41552*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 41559*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/* 41566*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41569*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41572*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41584*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41587*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41590*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41602*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41605*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41608*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41620*/        OPC_EmitInteger, MVT::i32, 1, 
/* 41623*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41626*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41629*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41632*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::f32, 18/*#Ops*/, 2, 3, 5, 6, 7, 8, 0, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (BFI_INT_eg:{ *:[f32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), ?:{ *:[f32] }:$src0, ?:{ *:[f32] }:$src1)
/* 41656*/      /*SwitchType*/ 26|128,1/*154*/, MVT::f64,// ->41813
/* 41659*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41661*/        OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 41664*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 41667*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/* 41675*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 41678*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41681*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41684*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 41691*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/* 41698*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41701*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41704*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41716*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 41719*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 13,  // Results = #14
/* 41727*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41730*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41733*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41745*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41748*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41751*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41763*/        OPC_EmitInteger, MVT::i32, 1, 
/* 41766*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41769*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41772*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41775*/        OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 41799*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 41802*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                      MVT::f64, 5/*#Ops*/, 2, 4, 5, 25, 26, 
                  // Src: (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (REG_SEQUENCE:{ *:[f64] } R600_Reg64:{ *:[i32] }, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub0:{ *:[i32] }), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[f64] }:$src0, sub1:{ *:[i32] }), ?:{ *:[f32] }:$src1), sub1:{ *:[i32] })
/* 41813*/      0, // EndSwitchType
/* 41814*/    /*Scope*/ 41|128,2/*297*/, /*->42113*/
/* 41816*/      OPC_CheckChild1Type, MVT::f64,
/* 41818*/      OPC_SwitchType /*2 cases */, 123, MVT::f32,// ->41944
/* 41821*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41823*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41826*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41829*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 41836*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/* 41843*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41846*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41849*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41861*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41864*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41867*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41879*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 41882*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 41890*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41893*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41896*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 41908*/        OPC_EmitInteger, MVT::i32, 1, 
/* 41911*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 41914*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41917*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41920*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::f32, 18/*#Ops*/, 2, 3, 5, 6, 7, 8, 0, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 
                  // Src: (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$src0, f64:{ *:[f64] }:$src1) - Complexity = 3
                  // Dst: (BFI_INT_eg:{ *:[f32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), ?:{ *:[f32] }:$src0, (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[f64] }:$src1, sub1:{ *:[i32] }))
/* 41944*/      /*SwitchType*/ 37|128,1/*165*/, MVT::f64,// ->42112
/* 41947*/        OPC_CheckPatternPredicate, 0, // (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41949*/        OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 41952*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 41955*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/* 41963*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 41966*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41969*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41972*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 41979*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/* 41986*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41989*/        OPC_EmitInteger, MVT::i32, 0, 
/* 41992*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42004*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42007*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 13,  // Results = #14
/* 42015*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42018*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42021*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42033*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42036*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 1, 18,  // Results = #19
/* 42044*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42047*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42050*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 42062*/        OPC_EmitInteger, MVT::i32, 1, 
/* 42065*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 42068*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42071*/        OPC_EmitInteger, MVT::i32, 0, 
/* 42074*/        OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/* 42098*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42101*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                      MVT::f64, 5/*#Ops*/, 2, 4, 5, 27, 28, 
                  // Src: (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$src0, f64:{ *:[f64] }:$src1) - Complexity = 3
                  // Dst: (REG_SEQUENCE:{ *:[f64] } R600_Reg64:{ *:[i32] }, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub0:{ *:[i32] }), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[f64] }:$src0, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } R600_Reg64:{ *:[f64] }:$src1, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 42112*/      0, // EndSwitchType
/* 42113*/    0, /*End of Scope*/
/* 42114*/  /*SwitchOpcode*/ 36|128,2/*292*/, TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->42410
/* 42118*/    OPC_RecordChild0, // #0 = $vec
/* 42119*/    OPC_RecordChild1, // #1 = $elem
/* 42120*/    OPC_Scope, 36, /*->42158*/ // 10 children in Scope
/* 42122*/      OPC_CheckChild2Integer, 0, 
/* 42124*/      OPC_SwitchType /*2 cases */, 14, MVT::v4i32,// ->42141
/* 42127*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42129*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42132*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub0:{ *:[i32] })
/* 42141*/      /*SwitchType*/ 14, MVT::v2i32,// ->42157
/* 42143*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42145*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42148*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$elem, sub0:{ *:[i32] })
/* 42157*/      0, // EndSwitchType
/* 42158*/    /*Scope*/ 36, /*->42195*/
/* 42159*/      OPC_CheckChild2Integer, 1, 
/* 42161*/      OPC_SwitchType /*2 cases */, 14, MVT::v4i32,// ->42178
/* 42164*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42166*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42169*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub1:{ *:[i32] })
/* 42178*/      /*SwitchType*/ 14, MVT::v2i32,// ->42194
/* 42180*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42182*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42185*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$elem, sub1:{ *:[i32] })
/* 42194*/      0, // EndSwitchType
/* 42195*/    /*Scope*/ 18, /*->42214*/
/* 42196*/      OPC_CheckChild2Integer, 2, 
/* 42198*/      OPC_CheckType, MVT::v4i32,
/* 42200*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42202*/      OPC_EmitInteger, MVT::i32, R600::sub2,
/* 42205*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 2:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub2:{ *:[i32] })
/* 42214*/    /*Scope*/ 18, /*->42233*/
/* 42215*/      OPC_CheckChild2Integer, 3, 
/* 42217*/      OPC_CheckType, MVT::v4i32,
/* 42219*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42221*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 42224*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 3:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub3:{ *:[i32] })
/* 42233*/    /*Scope*/ 31, /*->42265*/
/* 42234*/      OPC_RecordChild2, // #2 = $index
/* 42235*/      OPC_CheckChild2Type, MVT::i32,
/* 42237*/      OPC_SwitchType /*2 cases */, 11, MVT::v2i32,// ->42251
/* 42240*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42242*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V2), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V2:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$value, ?:{ *:[i32] }:$index)
/* 42251*/      /*SwitchType*/ 11, MVT::v4i32,// ->42264
/* 42253*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42255*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V4), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V4:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$value, ?:{ *:[i32] }:$index)
/* 42264*/      0, // EndSwitchType
/* 42265*/    /*Scope*/ 36, /*->42302*/
/* 42266*/      OPC_CheckChild2Integer, 0, 
/* 42268*/      OPC_SwitchType /*2 cases */, 14, MVT::v4f32,// ->42285
/* 42271*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42273*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42276*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub0:{ *:[i32] })
/* 42285*/      /*SwitchType*/ 14, MVT::v2f32,// ->42301
/* 42287*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42289*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 42292*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$elem, sub0:{ *:[i32] })
/* 42301*/      0, // EndSwitchType
/* 42302*/    /*Scope*/ 36, /*->42339*/
/* 42303*/      OPC_CheckChild2Integer, 1, 
/* 42305*/      OPC_SwitchType /*2 cases */, 14, MVT::v4f32,// ->42322
/* 42308*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42310*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42313*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub1:{ *:[i32] })
/* 42322*/      /*SwitchType*/ 14, MVT::v2f32,// ->42338
/* 42324*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42326*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 42329*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$elem, sub1:{ *:[i32] })
/* 42338*/      0, // EndSwitchType
/* 42339*/    /*Scope*/ 18, /*->42358*/
/* 42340*/      OPC_CheckChild2Integer, 2, 
/* 42342*/      OPC_CheckType, MVT::v4f32,
/* 42344*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42346*/      OPC_EmitInteger, MVT::i32, R600::sub2,
/* 42349*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 2:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub2:{ *:[i32] })
/* 42358*/    /*Scope*/ 18, /*->42377*/
/* 42359*/      OPC_CheckChild2Integer, 3, 
/* 42361*/      OPC_CheckType, MVT::v4f32,
/* 42363*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42365*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 42368*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 3:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub3:{ *:[i32] })
/* 42377*/    /*Scope*/ 31, /*->42409*/
/* 42378*/      OPC_RecordChild2, // #2 = $index
/* 42379*/      OPC_CheckChild2Type, MVT::i32,
/* 42381*/      OPC_SwitchType /*2 cases */, 11, MVT::v2f32,// ->42395
/* 42384*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42386*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V2), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V2:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$value, ?:{ *:[i32] }:$index)
/* 42395*/      /*SwitchType*/ 11, MVT::v4f32,// ->42408
/* 42397*/        OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42399*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V4), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V4:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$value, ?:{ *:[i32] }:$index)
/* 42408*/      0, // EndSwitchType
/* 42409*/    0, /*End of Scope*/
/* 42410*/  /*SwitchOpcode*/ 96|128,18/*2400*/, TARGET_VAL(AMDGPUISD::TEXTURE_FETCH),// ->44814
/* 42414*/    OPC_Scope, 88|128,1/*216*/, /*->42633*/ // 11 children in Scope
/* 42417*/      OPC_CheckChild0Integer, 0, 
/* 42419*/      OPC_CheckChild0Type, MVT::i32,
/* 42421*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 42422*/      OPC_CheckChild1Type, MVT::v4f32,
/* 42424*/      OPC_RecordChild2, // #1 = $srcx
/* 42425*/      OPC_MoveChild2,
/* 42426*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42429*/      OPC_CheckType, MVT::i32,
/* 42431*/      OPC_MoveParent,
/* 42432*/      OPC_RecordChild3, // #2 = $srcy
/* 42433*/      OPC_MoveChild3,
/* 42434*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42437*/      OPC_CheckType, MVT::i32,
/* 42439*/      OPC_MoveParent,
/* 42440*/      OPC_RecordChild4, // #3 = $srcz
/* 42441*/      OPC_MoveChild4,
/* 42442*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42445*/      OPC_CheckType, MVT::i32,
/* 42447*/      OPC_MoveParent,
/* 42448*/      OPC_RecordChild5, // #4 = $srcw
/* 42449*/      OPC_MoveChild5,
/* 42450*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42453*/      OPC_CheckType, MVT::i32,
/* 42455*/      OPC_MoveParent,
/* 42456*/      OPC_RecordChild6, // #5 = $offsetx
/* 42457*/      OPC_MoveChild6,
/* 42458*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42461*/      OPC_CheckType, MVT::i32,
/* 42463*/      OPC_MoveParent,
/* 42464*/      OPC_RecordChild7, // #6 = $offsety
/* 42465*/      OPC_MoveChild7,
/* 42466*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42469*/      OPC_CheckType, MVT::i32,
/* 42471*/      OPC_MoveParent,
/* 42472*/      OPC_MoveChild, 8,
/* 42474*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42477*/      OPC_RecordNode, // #7 = $offsetz
/* 42478*/      OPC_CheckType, MVT::i32,
/* 42480*/      OPC_MoveParent,
/* 42481*/      OPC_MoveChild, 9,
/* 42483*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42486*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 42487*/      OPC_CheckType, MVT::i32,
/* 42489*/      OPC_MoveParent,
/* 42490*/      OPC_MoveChild, 10,
/* 42492*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42495*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 42496*/      OPC_CheckType, MVT::i32,
/* 42498*/      OPC_MoveParent,
/* 42499*/      OPC_MoveChild, 11,
/* 42501*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42504*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 42505*/      OPC_CheckType, MVT::i32,
/* 42507*/      OPC_MoveParent,
/* 42508*/      OPC_MoveChild, 12,
/* 42510*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42513*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 42514*/      OPC_CheckType, MVT::i32,
/* 42516*/      OPC_MoveParent,
/* 42517*/      OPC_MoveChild, 13,
/* 42519*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42522*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 42523*/      OPC_CheckType, MVT::i32,
/* 42525*/      OPC_MoveParent,
/* 42526*/      OPC_MoveChild, 14,
/* 42528*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42531*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 42532*/      OPC_CheckType, MVT::i32,
/* 42534*/      OPC_MoveParent,
/* 42535*/      OPC_MoveChild, 15,
/* 42537*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42540*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 42541*/      OPC_CheckType, MVT::i32,
/* 42543*/      OPC_MoveParent,
/* 42544*/      OPC_MoveChild, 16,
/* 42546*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42549*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 42550*/      OPC_CheckType, MVT::i32,
/* 42552*/      OPC_MoveParent,
/* 42553*/      OPC_MoveChild, 17,
/* 42555*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42558*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 42559*/      OPC_CheckType, MVT::i32,
/* 42561*/      OPC_MoveParent,
/* 42562*/      OPC_MoveChild, 18,
/* 42564*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42567*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 42568*/      OPC_CheckType, MVT::i32,
/* 42570*/      OPC_MoveParent,
/* 42571*/      OPC_CheckType, MVT::v4f32,
/* 42573*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42575*/      OPC_EmitConvertToTarget, 1,
/* 42577*/      OPC_EmitConvertToTarget, 2,
/* 42579*/      OPC_EmitConvertToTarget, 3,
/* 42581*/      OPC_EmitConvertToTarget, 4,
/* 42583*/      OPC_EmitConvertToTarget, 5,
/* 42585*/      OPC_EmitConvertToTarget, 6,
/* 42587*/      OPC_EmitConvertToTarget, 7,
/* 42589*/      OPC_EmitConvertToTarget, 8,
/* 42591*/      OPC_EmitConvertToTarget, 9,
/* 42593*/      OPC_EmitConvertToTarget, 10,
/* 42595*/      OPC_EmitConvertToTarget, 11,
/* 42597*/      OPC_EmitConvertToTarget, 12,
/* 42599*/      OPC_EmitConvertToTarget, 13,
/* 42601*/      OPC_EmitConvertToTarget, 14,
/* 42603*/      OPC_EmitConvertToTarget, 15,
/* 42605*/      OPC_EmitConvertToTarget, 16,
/* 42607*/      OPC_EmitConvertToTarget, 17,
/* 42609*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 0:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 42633*/    /*Scope*/ 88|128,1/*216*/, /*->42851*/
/* 42635*/      OPC_CheckChild0Integer, 1, 
/* 42637*/      OPC_CheckChild0Type, MVT::i32,
/* 42639*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 42640*/      OPC_CheckChild1Type, MVT::v4f32,
/* 42642*/      OPC_RecordChild2, // #1 = $srcx
/* 42643*/      OPC_MoveChild2,
/* 42644*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42647*/      OPC_CheckType, MVT::i32,
/* 42649*/      OPC_MoveParent,
/* 42650*/      OPC_RecordChild3, // #2 = $srcy
/* 42651*/      OPC_MoveChild3,
/* 42652*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42655*/      OPC_CheckType, MVT::i32,
/* 42657*/      OPC_MoveParent,
/* 42658*/      OPC_RecordChild4, // #3 = $srcz
/* 42659*/      OPC_MoveChild4,
/* 42660*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42663*/      OPC_CheckType, MVT::i32,
/* 42665*/      OPC_MoveParent,
/* 42666*/      OPC_RecordChild5, // #4 = $srcw
/* 42667*/      OPC_MoveChild5,
/* 42668*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42671*/      OPC_CheckType, MVT::i32,
/* 42673*/      OPC_MoveParent,
/* 42674*/      OPC_RecordChild6, // #5 = $offsetx
/* 42675*/      OPC_MoveChild6,
/* 42676*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42679*/      OPC_CheckType, MVT::i32,
/* 42681*/      OPC_MoveParent,
/* 42682*/      OPC_RecordChild7, // #6 = $offsety
/* 42683*/      OPC_MoveChild7,
/* 42684*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42687*/      OPC_CheckType, MVT::i32,
/* 42689*/      OPC_MoveParent,
/* 42690*/      OPC_MoveChild, 8,
/* 42692*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42695*/      OPC_RecordNode, // #7 = $offsetz
/* 42696*/      OPC_CheckType, MVT::i32,
/* 42698*/      OPC_MoveParent,
/* 42699*/      OPC_MoveChild, 9,
/* 42701*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42704*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 42705*/      OPC_CheckType, MVT::i32,
/* 42707*/      OPC_MoveParent,
/* 42708*/      OPC_MoveChild, 10,
/* 42710*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42713*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 42714*/      OPC_CheckType, MVT::i32,
/* 42716*/      OPC_MoveParent,
/* 42717*/      OPC_MoveChild, 11,
/* 42719*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42722*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 42723*/      OPC_CheckType, MVT::i32,
/* 42725*/      OPC_MoveParent,
/* 42726*/      OPC_MoveChild, 12,
/* 42728*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42731*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 42732*/      OPC_CheckType, MVT::i32,
/* 42734*/      OPC_MoveParent,
/* 42735*/      OPC_MoveChild, 13,
/* 42737*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42740*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 42741*/      OPC_CheckType, MVT::i32,
/* 42743*/      OPC_MoveParent,
/* 42744*/      OPC_MoveChild, 14,
/* 42746*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42749*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 42750*/      OPC_CheckType, MVT::i32,
/* 42752*/      OPC_MoveParent,
/* 42753*/      OPC_MoveChild, 15,
/* 42755*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42758*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 42759*/      OPC_CheckType, MVT::i32,
/* 42761*/      OPC_MoveParent,
/* 42762*/      OPC_MoveChild, 16,
/* 42764*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42767*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 42768*/      OPC_CheckType, MVT::i32,
/* 42770*/      OPC_MoveParent,
/* 42771*/      OPC_MoveChild, 17,
/* 42773*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42776*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 42777*/      OPC_CheckType, MVT::i32,
/* 42779*/      OPC_MoveParent,
/* 42780*/      OPC_MoveChild, 18,
/* 42782*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42785*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 42786*/      OPC_CheckType, MVT::i32,
/* 42788*/      OPC_MoveParent,
/* 42789*/      OPC_CheckType, MVT::v4f32,
/* 42791*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 42793*/      OPC_EmitConvertToTarget, 1,
/* 42795*/      OPC_EmitConvertToTarget, 2,
/* 42797*/      OPC_EmitConvertToTarget, 3,
/* 42799*/      OPC_EmitConvertToTarget, 4,
/* 42801*/      OPC_EmitConvertToTarget, 5,
/* 42803*/      OPC_EmitConvertToTarget, 6,
/* 42805*/      OPC_EmitConvertToTarget, 7,
/* 42807*/      OPC_EmitConvertToTarget, 8,
/* 42809*/      OPC_EmitConvertToTarget, 9,
/* 42811*/      OPC_EmitConvertToTarget, 10,
/* 42813*/      OPC_EmitConvertToTarget, 11,
/* 42815*/      OPC_EmitConvertToTarget, 12,
/* 42817*/      OPC_EmitConvertToTarget, 13,
/* 42819*/      OPC_EmitConvertToTarget, 14,
/* 42821*/      OPC_EmitConvertToTarget, 15,
/* 42823*/      OPC_EmitConvertToTarget, 16,
/* 42825*/      OPC_EmitConvertToTarget, 17,
/* 42827*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 1:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 42851*/    /*Scope*/ 88|128,1/*216*/, /*->43069*/
/* 42853*/      OPC_CheckChild0Integer, 2, 
/* 42855*/      OPC_CheckChild0Type, MVT::i32,
/* 42857*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 42858*/      OPC_CheckChild1Type, MVT::v4f32,
/* 42860*/      OPC_RecordChild2, // #1 = $srcx
/* 42861*/      OPC_MoveChild2,
/* 42862*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42865*/      OPC_CheckType, MVT::i32,
/* 42867*/      OPC_MoveParent,
/* 42868*/      OPC_RecordChild3, // #2 = $srcy
/* 42869*/      OPC_MoveChild3,
/* 42870*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42873*/      OPC_CheckType, MVT::i32,
/* 42875*/      OPC_MoveParent,
/* 42876*/      OPC_RecordChild4, // #3 = $srcz
/* 42877*/      OPC_MoveChild4,
/* 42878*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42881*/      OPC_CheckType, MVT::i32,
/* 42883*/      OPC_MoveParent,
/* 42884*/      OPC_RecordChild5, // #4 = $srcw
/* 42885*/      OPC_MoveChild5,
/* 42886*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42889*/      OPC_CheckType, MVT::i32,
/* 42891*/      OPC_MoveParent,
/* 42892*/      OPC_RecordChild6, // #5 = $offsetx
/* 42893*/      OPC_MoveChild6,
/* 42894*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42897*/      OPC_CheckType, MVT::i32,
/* 42899*/      OPC_MoveParent,
/* 42900*/      OPC_RecordChild7, // #6 = $offsety
/* 42901*/      OPC_MoveChild7,
/* 42902*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42905*/      OPC_CheckType, MVT::i32,
/* 42907*/      OPC_MoveParent,
/* 42908*/      OPC_MoveChild, 8,
/* 42910*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42913*/      OPC_RecordNode, // #7 = $offsetz
/* 42914*/      OPC_CheckType, MVT::i32,
/* 42916*/      OPC_MoveParent,
/* 42917*/      OPC_MoveChild, 9,
/* 42919*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42922*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 42923*/      OPC_CheckType, MVT::i32,
/* 42925*/      OPC_MoveParent,
/* 42926*/      OPC_MoveChild, 10,
/* 42928*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42931*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 42932*/      OPC_CheckType, MVT::i32,
/* 42934*/      OPC_MoveParent,
/* 42935*/      OPC_MoveChild, 11,
/* 42937*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42940*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 42941*/      OPC_CheckType, MVT::i32,
/* 42943*/      OPC_MoveParent,
/* 42944*/      OPC_MoveChild, 12,
/* 42946*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42949*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 42950*/      OPC_CheckType, MVT::i32,
/* 42952*/      OPC_MoveParent,
/* 42953*/      OPC_MoveChild, 13,
/* 42955*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42958*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 42959*/      OPC_CheckType, MVT::i32,
/* 42961*/      OPC_MoveParent,
/* 42962*/      OPC_MoveChild, 14,
/* 42964*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42967*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 42968*/      OPC_CheckType, MVT::i32,
/* 42970*/      OPC_MoveParent,
/* 42971*/      OPC_MoveChild, 15,
/* 42973*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42976*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 42977*/      OPC_CheckType, MVT::i32,
/* 42979*/      OPC_MoveParent,
/* 42980*/      OPC_MoveChild, 16,
/* 42982*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42985*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 42986*/      OPC_CheckType, MVT::i32,
/* 42988*/      OPC_MoveParent,
/* 42989*/      OPC_MoveChild, 17,
/* 42991*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 42994*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 42995*/      OPC_CheckType, MVT::i32,
/* 42997*/      OPC_MoveParent,
/* 42998*/      OPC_MoveChild, 18,
/* 43000*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43003*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43004*/      OPC_CheckType, MVT::i32,
/* 43006*/      OPC_MoveParent,
/* 43007*/      OPC_CheckType, MVT::v4f32,
/* 43009*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43011*/      OPC_EmitConvertToTarget, 1,
/* 43013*/      OPC_EmitConvertToTarget, 2,
/* 43015*/      OPC_EmitConvertToTarget, 3,
/* 43017*/      OPC_EmitConvertToTarget, 4,
/* 43019*/      OPC_EmitConvertToTarget, 5,
/* 43021*/      OPC_EmitConvertToTarget, 6,
/* 43023*/      OPC_EmitConvertToTarget, 7,
/* 43025*/      OPC_EmitConvertToTarget, 8,
/* 43027*/      OPC_EmitConvertToTarget, 9,
/* 43029*/      OPC_EmitConvertToTarget, 10,
/* 43031*/      OPC_EmitConvertToTarget, 11,
/* 43033*/      OPC_EmitConvertToTarget, 12,
/* 43035*/      OPC_EmitConvertToTarget, 13,
/* 43037*/      OPC_EmitConvertToTarget, 14,
/* 43039*/      OPC_EmitConvertToTarget, 15,
/* 43041*/      OPC_EmitConvertToTarget, 16,
/* 43043*/      OPC_EmitConvertToTarget, 17,
/* 43045*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_L), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 2:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_L:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43069*/    /*Scope*/ 88|128,1/*216*/, /*->43287*/
/* 43071*/      OPC_CheckChild0Integer, 3, 
/* 43073*/      OPC_CheckChild0Type, MVT::i32,
/* 43075*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43076*/      OPC_CheckChild1Type, MVT::v4f32,
/* 43078*/      OPC_RecordChild2, // #1 = $srcx
/* 43079*/      OPC_MoveChild2,
/* 43080*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43083*/      OPC_CheckType, MVT::i32,
/* 43085*/      OPC_MoveParent,
/* 43086*/      OPC_RecordChild3, // #2 = $srcy
/* 43087*/      OPC_MoveChild3,
/* 43088*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43091*/      OPC_CheckType, MVT::i32,
/* 43093*/      OPC_MoveParent,
/* 43094*/      OPC_RecordChild4, // #3 = $srcz
/* 43095*/      OPC_MoveChild4,
/* 43096*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43099*/      OPC_CheckType, MVT::i32,
/* 43101*/      OPC_MoveParent,
/* 43102*/      OPC_RecordChild5, // #4 = $srcw
/* 43103*/      OPC_MoveChild5,
/* 43104*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43107*/      OPC_CheckType, MVT::i32,
/* 43109*/      OPC_MoveParent,
/* 43110*/      OPC_RecordChild6, // #5 = $offsetx
/* 43111*/      OPC_MoveChild6,
/* 43112*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43115*/      OPC_CheckType, MVT::i32,
/* 43117*/      OPC_MoveParent,
/* 43118*/      OPC_RecordChild7, // #6 = $offsety
/* 43119*/      OPC_MoveChild7,
/* 43120*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43123*/      OPC_CheckType, MVT::i32,
/* 43125*/      OPC_MoveParent,
/* 43126*/      OPC_MoveChild, 8,
/* 43128*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43131*/      OPC_RecordNode, // #7 = $offsetz
/* 43132*/      OPC_CheckType, MVT::i32,
/* 43134*/      OPC_MoveParent,
/* 43135*/      OPC_MoveChild, 9,
/* 43137*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43140*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 43141*/      OPC_CheckType, MVT::i32,
/* 43143*/      OPC_MoveParent,
/* 43144*/      OPC_MoveChild, 10,
/* 43146*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43149*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 43150*/      OPC_CheckType, MVT::i32,
/* 43152*/      OPC_MoveParent,
/* 43153*/      OPC_MoveChild, 11,
/* 43155*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43158*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 43159*/      OPC_CheckType, MVT::i32,
/* 43161*/      OPC_MoveParent,
/* 43162*/      OPC_MoveChild, 12,
/* 43164*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43167*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 43168*/      OPC_CheckType, MVT::i32,
/* 43170*/      OPC_MoveParent,
/* 43171*/      OPC_MoveChild, 13,
/* 43173*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43176*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43177*/      OPC_CheckType, MVT::i32,
/* 43179*/      OPC_MoveParent,
/* 43180*/      OPC_MoveChild, 14,
/* 43182*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43185*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43186*/      OPC_CheckType, MVT::i32,
/* 43188*/      OPC_MoveParent,
/* 43189*/      OPC_MoveChild, 15,
/* 43191*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43194*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43195*/      OPC_CheckType, MVT::i32,
/* 43197*/      OPC_MoveParent,
/* 43198*/      OPC_MoveChild, 16,
/* 43200*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43203*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43204*/      OPC_CheckType, MVT::i32,
/* 43206*/      OPC_MoveParent,
/* 43207*/      OPC_MoveChild, 17,
/* 43209*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43212*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43213*/      OPC_CheckType, MVT::i32,
/* 43215*/      OPC_MoveParent,
/* 43216*/      OPC_MoveChild, 18,
/* 43218*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43221*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43222*/      OPC_CheckType, MVT::i32,
/* 43224*/      OPC_MoveParent,
/* 43225*/      OPC_CheckType, MVT::v4f32,
/* 43227*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43229*/      OPC_EmitConvertToTarget, 1,
/* 43231*/      OPC_EmitConvertToTarget, 2,
/* 43233*/      OPC_EmitConvertToTarget, 3,
/* 43235*/      OPC_EmitConvertToTarget, 4,
/* 43237*/      OPC_EmitConvertToTarget, 5,
/* 43239*/      OPC_EmitConvertToTarget, 6,
/* 43241*/      OPC_EmitConvertToTarget, 7,
/* 43243*/      OPC_EmitConvertToTarget, 8,
/* 43245*/      OPC_EmitConvertToTarget, 9,
/* 43247*/      OPC_EmitConvertToTarget, 10,
/* 43249*/      OPC_EmitConvertToTarget, 11,
/* 43251*/      OPC_EmitConvertToTarget, 12,
/* 43253*/      OPC_EmitConvertToTarget, 13,
/* 43255*/      OPC_EmitConvertToTarget, 14,
/* 43257*/      OPC_EmitConvertToTarget, 15,
/* 43259*/      OPC_EmitConvertToTarget, 16,
/* 43261*/      OPC_EmitConvertToTarget, 17,
/* 43263*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C_L), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 3:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C_L:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43287*/    /*Scope*/ 88|128,1/*216*/, /*->43505*/
/* 43289*/      OPC_CheckChild0Integer, 4, 
/* 43291*/      OPC_CheckChild0Type, MVT::i32,
/* 43293*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43294*/      OPC_CheckChild1Type, MVT::v4f32,
/* 43296*/      OPC_RecordChild2, // #1 = $srcx
/* 43297*/      OPC_MoveChild2,
/* 43298*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43301*/      OPC_CheckType, MVT::i32,
/* 43303*/      OPC_MoveParent,
/* 43304*/      OPC_RecordChild3, // #2 = $srcy
/* 43305*/      OPC_MoveChild3,
/* 43306*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43309*/      OPC_CheckType, MVT::i32,
/* 43311*/      OPC_MoveParent,
/* 43312*/      OPC_RecordChild4, // #3 = $srcz
/* 43313*/      OPC_MoveChild4,
/* 43314*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43317*/      OPC_CheckType, MVT::i32,
/* 43319*/      OPC_MoveParent,
/* 43320*/      OPC_RecordChild5, // #4 = $srcw
/* 43321*/      OPC_MoveChild5,
/* 43322*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43325*/      OPC_CheckType, MVT::i32,
/* 43327*/      OPC_MoveParent,
/* 43328*/      OPC_RecordChild6, // #5 = $offsetx
/* 43329*/      OPC_MoveChild6,
/* 43330*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43333*/      OPC_CheckType, MVT::i32,
/* 43335*/      OPC_MoveParent,
/* 43336*/      OPC_RecordChild7, // #6 = $offsety
/* 43337*/      OPC_MoveChild7,
/* 43338*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43341*/      OPC_CheckType, MVT::i32,
/* 43343*/      OPC_MoveParent,
/* 43344*/      OPC_MoveChild, 8,
/* 43346*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43349*/      OPC_RecordNode, // #7 = $offsetz
/* 43350*/      OPC_CheckType, MVT::i32,
/* 43352*/      OPC_MoveParent,
/* 43353*/      OPC_MoveChild, 9,
/* 43355*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43358*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 43359*/      OPC_CheckType, MVT::i32,
/* 43361*/      OPC_MoveParent,
/* 43362*/      OPC_MoveChild, 10,
/* 43364*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43367*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 43368*/      OPC_CheckType, MVT::i32,
/* 43370*/      OPC_MoveParent,
/* 43371*/      OPC_MoveChild, 11,
/* 43373*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43376*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 43377*/      OPC_CheckType, MVT::i32,
/* 43379*/      OPC_MoveParent,
/* 43380*/      OPC_MoveChild, 12,
/* 43382*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43385*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 43386*/      OPC_CheckType, MVT::i32,
/* 43388*/      OPC_MoveParent,
/* 43389*/      OPC_MoveChild, 13,
/* 43391*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43394*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43395*/      OPC_CheckType, MVT::i32,
/* 43397*/      OPC_MoveParent,
/* 43398*/      OPC_MoveChild, 14,
/* 43400*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43403*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43404*/      OPC_CheckType, MVT::i32,
/* 43406*/      OPC_MoveParent,
/* 43407*/      OPC_MoveChild, 15,
/* 43409*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43412*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43413*/      OPC_CheckType, MVT::i32,
/* 43415*/      OPC_MoveParent,
/* 43416*/      OPC_MoveChild, 16,
/* 43418*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43421*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43422*/      OPC_CheckType, MVT::i32,
/* 43424*/      OPC_MoveParent,
/* 43425*/      OPC_MoveChild, 17,
/* 43427*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43430*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43431*/      OPC_CheckType, MVT::i32,
/* 43433*/      OPC_MoveParent,
/* 43434*/      OPC_MoveChild, 18,
/* 43436*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43439*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43440*/      OPC_CheckType, MVT::i32,
/* 43442*/      OPC_MoveParent,
/* 43443*/      OPC_CheckType, MVT::v4f32,
/* 43445*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43447*/      OPC_EmitConvertToTarget, 1,
/* 43449*/      OPC_EmitConvertToTarget, 2,
/* 43451*/      OPC_EmitConvertToTarget, 3,
/* 43453*/      OPC_EmitConvertToTarget, 4,
/* 43455*/      OPC_EmitConvertToTarget, 5,
/* 43457*/      OPC_EmitConvertToTarget, 6,
/* 43459*/      OPC_EmitConvertToTarget, 7,
/* 43461*/      OPC_EmitConvertToTarget, 8,
/* 43463*/      OPC_EmitConvertToTarget, 9,
/* 43465*/      OPC_EmitConvertToTarget, 10,
/* 43467*/      OPC_EmitConvertToTarget, 11,
/* 43469*/      OPC_EmitConvertToTarget, 12,
/* 43471*/      OPC_EmitConvertToTarget, 13,
/* 43473*/      OPC_EmitConvertToTarget, 14,
/* 43475*/      OPC_EmitConvertToTarget, 15,
/* 43477*/      OPC_EmitConvertToTarget, 16,
/* 43479*/      OPC_EmitConvertToTarget, 17,
/* 43481*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_LB), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 4:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_LB:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43505*/    /*Scope*/ 88|128,1/*216*/, /*->43723*/
/* 43507*/      OPC_CheckChild0Integer, 5, 
/* 43509*/      OPC_CheckChild0Type, MVT::i32,
/* 43511*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43512*/      OPC_CheckChild1Type, MVT::v4f32,
/* 43514*/      OPC_RecordChild2, // #1 = $srcx
/* 43515*/      OPC_MoveChild2,
/* 43516*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43519*/      OPC_CheckType, MVT::i32,
/* 43521*/      OPC_MoveParent,
/* 43522*/      OPC_RecordChild3, // #2 = $srcy
/* 43523*/      OPC_MoveChild3,
/* 43524*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43527*/      OPC_CheckType, MVT::i32,
/* 43529*/      OPC_MoveParent,
/* 43530*/      OPC_RecordChild4, // #3 = $srcz
/* 43531*/      OPC_MoveChild4,
/* 43532*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43535*/      OPC_CheckType, MVT::i32,
/* 43537*/      OPC_MoveParent,
/* 43538*/      OPC_RecordChild5, // #4 = $srcw
/* 43539*/      OPC_MoveChild5,
/* 43540*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43543*/      OPC_CheckType, MVT::i32,
/* 43545*/      OPC_MoveParent,
/* 43546*/      OPC_RecordChild6, // #5 = $offsetx
/* 43547*/      OPC_MoveChild6,
/* 43548*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43551*/      OPC_CheckType, MVT::i32,
/* 43553*/      OPC_MoveParent,
/* 43554*/      OPC_RecordChild7, // #6 = $offsety
/* 43555*/      OPC_MoveChild7,
/* 43556*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43559*/      OPC_CheckType, MVT::i32,
/* 43561*/      OPC_MoveParent,
/* 43562*/      OPC_MoveChild, 8,
/* 43564*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43567*/      OPC_RecordNode, // #7 = $offsetz
/* 43568*/      OPC_CheckType, MVT::i32,
/* 43570*/      OPC_MoveParent,
/* 43571*/      OPC_MoveChild, 9,
/* 43573*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43576*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 43577*/      OPC_CheckType, MVT::i32,
/* 43579*/      OPC_MoveParent,
/* 43580*/      OPC_MoveChild, 10,
/* 43582*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43585*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 43586*/      OPC_CheckType, MVT::i32,
/* 43588*/      OPC_MoveParent,
/* 43589*/      OPC_MoveChild, 11,
/* 43591*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43594*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 43595*/      OPC_CheckType, MVT::i32,
/* 43597*/      OPC_MoveParent,
/* 43598*/      OPC_MoveChild, 12,
/* 43600*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43603*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 43604*/      OPC_CheckType, MVT::i32,
/* 43606*/      OPC_MoveParent,
/* 43607*/      OPC_MoveChild, 13,
/* 43609*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43612*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43613*/      OPC_CheckType, MVT::i32,
/* 43615*/      OPC_MoveParent,
/* 43616*/      OPC_MoveChild, 14,
/* 43618*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43621*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43622*/      OPC_CheckType, MVT::i32,
/* 43624*/      OPC_MoveParent,
/* 43625*/      OPC_MoveChild, 15,
/* 43627*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43630*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43631*/      OPC_CheckType, MVT::i32,
/* 43633*/      OPC_MoveParent,
/* 43634*/      OPC_MoveChild, 16,
/* 43636*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43639*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43640*/      OPC_CheckType, MVT::i32,
/* 43642*/      OPC_MoveParent,
/* 43643*/      OPC_MoveChild, 17,
/* 43645*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43648*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43649*/      OPC_CheckType, MVT::i32,
/* 43651*/      OPC_MoveParent,
/* 43652*/      OPC_MoveChild, 18,
/* 43654*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43657*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43658*/      OPC_CheckType, MVT::i32,
/* 43660*/      OPC_MoveParent,
/* 43661*/      OPC_CheckType, MVT::v4f32,
/* 43663*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43665*/      OPC_EmitConvertToTarget, 1,
/* 43667*/      OPC_EmitConvertToTarget, 2,
/* 43669*/      OPC_EmitConvertToTarget, 3,
/* 43671*/      OPC_EmitConvertToTarget, 4,
/* 43673*/      OPC_EmitConvertToTarget, 5,
/* 43675*/      OPC_EmitConvertToTarget, 6,
/* 43677*/      OPC_EmitConvertToTarget, 7,
/* 43679*/      OPC_EmitConvertToTarget, 8,
/* 43681*/      OPC_EmitConvertToTarget, 9,
/* 43683*/      OPC_EmitConvertToTarget, 10,
/* 43685*/      OPC_EmitConvertToTarget, 11,
/* 43687*/      OPC_EmitConvertToTarget, 12,
/* 43689*/      OPC_EmitConvertToTarget, 13,
/* 43691*/      OPC_EmitConvertToTarget, 14,
/* 43693*/      OPC_EmitConvertToTarget, 15,
/* 43695*/      OPC_EmitConvertToTarget, 16,
/* 43697*/      OPC_EmitConvertToTarget, 17,
/* 43699*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C_LB), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 5:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C_LB:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43723*/    /*Scope*/ 88|128,1/*216*/, /*->43941*/
/* 43725*/      OPC_CheckChild0Integer, 6, 
/* 43727*/      OPC_CheckChild0Type, MVT::i32,
/* 43729*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43730*/      OPC_CheckChild1Type, MVT::v4i32,
/* 43732*/      OPC_RecordChild2, // #1 = $srcx
/* 43733*/      OPC_MoveChild2,
/* 43734*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43737*/      OPC_CheckType, MVT::i32,
/* 43739*/      OPC_MoveParent,
/* 43740*/      OPC_RecordChild3, // #2 = $srcy
/* 43741*/      OPC_MoveChild3,
/* 43742*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43745*/      OPC_CheckType, MVT::i32,
/* 43747*/      OPC_MoveParent,
/* 43748*/      OPC_RecordChild4, // #3 = $srcz
/* 43749*/      OPC_MoveChild4,
/* 43750*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43753*/      OPC_CheckType, MVT::i32,
/* 43755*/      OPC_MoveParent,
/* 43756*/      OPC_RecordChild5, // #4 = $srcw
/* 43757*/      OPC_MoveChild5,
/* 43758*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43761*/      OPC_CheckType, MVT::i32,
/* 43763*/      OPC_MoveParent,
/* 43764*/      OPC_RecordChild6, // #5 = $offsetx
/* 43765*/      OPC_MoveChild6,
/* 43766*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43769*/      OPC_CheckType, MVT::i32,
/* 43771*/      OPC_MoveParent,
/* 43772*/      OPC_RecordChild7, // #6 = $offsety
/* 43773*/      OPC_MoveChild7,
/* 43774*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43777*/      OPC_CheckType, MVT::i32,
/* 43779*/      OPC_MoveParent,
/* 43780*/      OPC_MoveChild, 8,
/* 43782*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43785*/      OPC_RecordNode, // #7 = $offsetz
/* 43786*/      OPC_CheckType, MVT::i32,
/* 43788*/      OPC_MoveParent,
/* 43789*/      OPC_MoveChild, 9,
/* 43791*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43794*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 43795*/      OPC_CheckType, MVT::i32,
/* 43797*/      OPC_MoveParent,
/* 43798*/      OPC_MoveChild, 10,
/* 43800*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43803*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 43804*/      OPC_CheckType, MVT::i32,
/* 43806*/      OPC_MoveParent,
/* 43807*/      OPC_MoveChild, 11,
/* 43809*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43812*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 43813*/      OPC_CheckType, MVT::i32,
/* 43815*/      OPC_MoveParent,
/* 43816*/      OPC_MoveChild, 12,
/* 43818*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43821*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 43822*/      OPC_CheckType, MVT::i32,
/* 43824*/      OPC_MoveParent,
/* 43825*/      OPC_MoveChild, 13,
/* 43827*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43830*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 43831*/      OPC_CheckType, MVT::i32,
/* 43833*/      OPC_MoveParent,
/* 43834*/      OPC_MoveChild, 14,
/* 43836*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43839*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 43840*/      OPC_CheckType, MVT::i32,
/* 43842*/      OPC_MoveParent,
/* 43843*/      OPC_MoveChild, 15,
/* 43845*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43848*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 43849*/      OPC_CheckType, MVT::i32,
/* 43851*/      OPC_MoveParent,
/* 43852*/      OPC_MoveChild, 16,
/* 43854*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43857*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 43858*/      OPC_CheckType, MVT::i32,
/* 43860*/      OPC_MoveParent,
/* 43861*/      OPC_MoveChild, 17,
/* 43863*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43866*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 43867*/      OPC_CheckType, MVT::i32,
/* 43869*/      OPC_MoveParent,
/* 43870*/      OPC_MoveChild, 18,
/* 43872*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43875*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 43876*/      OPC_CheckType, MVT::i32,
/* 43878*/      OPC_MoveParent,
/* 43879*/      OPC_CheckType, MVT::v4f32,
/* 43881*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 43883*/      OPC_EmitConvertToTarget, 1,
/* 43885*/      OPC_EmitConvertToTarget, 2,
/* 43887*/      OPC_EmitConvertToTarget, 3,
/* 43889*/      OPC_EmitConvertToTarget, 4,
/* 43891*/      OPC_EmitConvertToTarget, 5,
/* 43893*/      OPC_EmitConvertToTarget, 6,
/* 43895*/      OPC_EmitConvertToTarget, 7,
/* 43897*/      OPC_EmitConvertToTarget, 8,
/* 43899*/      OPC_EmitConvertToTarget, 9,
/* 43901*/      OPC_EmitConvertToTarget, 10,
/* 43903*/      OPC_EmitConvertToTarget, 11,
/* 43905*/      OPC_EmitConvertToTarget, 12,
/* 43907*/      OPC_EmitConvertToTarget, 13,
/* 43909*/      OPC_EmitConvertToTarget, 14,
/* 43911*/      OPC_EmitConvertToTarget, 15,
/* 43913*/      OPC_EmitConvertToTarget, 16,
/* 43915*/      OPC_EmitConvertToTarget, 17,
/* 43917*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_LD), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 6:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_LD:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 43941*/    /*Scope*/ 88|128,1/*216*/, /*->44159*/
/* 43943*/      OPC_CheckChild0Integer, 7, 
/* 43945*/      OPC_CheckChild0Type, MVT::i32,
/* 43947*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 43948*/      OPC_CheckChild1Type, MVT::v4i32,
/* 43950*/      OPC_RecordChild2, // #1 = $srcx
/* 43951*/      OPC_MoveChild2,
/* 43952*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43955*/      OPC_CheckType, MVT::i32,
/* 43957*/      OPC_MoveParent,
/* 43958*/      OPC_RecordChild3, // #2 = $srcy
/* 43959*/      OPC_MoveChild3,
/* 43960*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43963*/      OPC_CheckType, MVT::i32,
/* 43965*/      OPC_MoveParent,
/* 43966*/      OPC_RecordChild4, // #3 = $srcz
/* 43967*/      OPC_MoveChild4,
/* 43968*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43971*/      OPC_CheckType, MVT::i32,
/* 43973*/      OPC_MoveParent,
/* 43974*/      OPC_RecordChild5, // #4 = $srcw
/* 43975*/      OPC_MoveChild5,
/* 43976*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43979*/      OPC_CheckType, MVT::i32,
/* 43981*/      OPC_MoveParent,
/* 43982*/      OPC_RecordChild6, // #5 = $offsetx
/* 43983*/      OPC_MoveChild6,
/* 43984*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43987*/      OPC_CheckType, MVT::i32,
/* 43989*/      OPC_MoveParent,
/* 43990*/      OPC_RecordChild7, // #6 = $offsety
/* 43991*/      OPC_MoveChild7,
/* 43992*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 43995*/      OPC_CheckType, MVT::i32,
/* 43997*/      OPC_MoveParent,
/* 43998*/      OPC_MoveChild, 8,
/* 44000*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44003*/      OPC_RecordNode, // #7 = $offsetz
/* 44004*/      OPC_CheckType, MVT::i32,
/* 44006*/      OPC_MoveParent,
/* 44007*/      OPC_MoveChild, 9,
/* 44009*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44012*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44013*/      OPC_CheckType, MVT::i32,
/* 44015*/      OPC_MoveParent,
/* 44016*/      OPC_MoveChild, 10,
/* 44018*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44021*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44022*/      OPC_CheckType, MVT::i32,
/* 44024*/      OPC_MoveParent,
/* 44025*/      OPC_MoveChild, 11,
/* 44027*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44030*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44031*/      OPC_CheckType, MVT::i32,
/* 44033*/      OPC_MoveParent,
/* 44034*/      OPC_MoveChild, 12,
/* 44036*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44039*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44040*/      OPC_CheckType, MVT::i32,
/* 44042*/      OPC_MoveParent,
/* 44043*/      OPC_MoveChild, 13,
/* 44045*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44048*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44049*/      OPC_CheckType, MVT::i32,
/* 44051*/      OPC_MoveParent,
/* 44052*/      OPC_MoveChild, 14,
/* 44054*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44057*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44058*/      OPC_CheckType, MVT::i32,
/* 44060*/      OPC_MoveParent,
/* 44061*/      OPC_MoveChild, 15,
/* 44063*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44066*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44067*/      OPC_CheckType, MVT::i32,
/* 44069*/      OPC_MoveParent,
/* 44070*/      OPC_MoveChild, 16,
/* 44072*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44075*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44076*/      OPC_CheckType, MVT::i32,
/* 44078*/      OPC_MoveParent,
/* 44079*/      OPC_MoveChild, 17,
/* 44081*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44084*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 44085*/      OPC_CheckType, MVT::i32,
/* 44087*/      OPC_MoveParent,
/* 44088*/      OPC_MoveChild, 18,
/* 44090*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44093*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 44094*/      OPC_CheckType, MVT::i32,
/* 44096*/      OPC_MoveParent,
/* 44097*/      OPC_CheckType, MVT::v4f32,
/* 44099*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 44101*/      OPC_EmitConvertToTarget, 1,
/* 44103*/      OPC_EmitConvertToTarget, 2,
/* 44105*/      OPC_EmitConvertToTarget, 3,
/* 44107*/      OPC_EmitConvertToTarget, 4,
/* 44109*/      OPC_EmitConvertToTarget, 5,
/* 44111*/      OPC_EmitConvertToTarget, 6,
/* 44113*/      OPC_EmitConvertToTarget, 7,
/* 44115*/      OPC_EmitConvertToTarget, 8,
/* 44117*/      OPC_EmitConvertToTarget, 9,
/* 44119*/      OPC_EmitConvertToTarget, 10,
/* 44121*/      OPC_EmitConvertToTarget, 11,
/* 44123*/      OPC_EmitConvertToTarget, 12,
/* 44125*/      OPC_EmitConvertToTarget, 13,
/* 44127*/      OPC_EmitConvertToTarget, 14,
/* 44129*/      OPC_EmitConvertToTarget, 15,
/* 44131*/      OPC_EmitConvertToTarget, 16,
/* 44133*/      OPC_EmitConvertToTarget, 17,
/* 44135*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_TEXTURE_RESINFO), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 7:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_TEXTURE_RESINFO:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 44159*/    /*Scope*/ 88|128,1/*216*/, /*->44377*/
/* 44161*/      OPC_CheckChild0Integer, 8, 
/* 44163*/      OPC_CheckChild0Type, MVT::i32,
/* 44165*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 44166*/      OPC_CheckChild1Type, MVT::v4f32,
/* 44168*/      OPC_RecordChild2, // #1 = $srcx
/* 44169*/      OPC_MoveChild2,
/* 44170*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44173*/      OPC_CheckType, MVT::i32,
/* 44175*/      OPC_MoveParent,
/* 44176*/      OPC_RecordChild3, // #2 = $srcy
/* 44177*/      OPC_MoveChild3,
/* 44178*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44181*/      OPC_CheckType, MVT::i32,
/* 44183*/      OPC_MoveParent,
/* 44184*/      OPC_RecordChild4, // #3 = $srcz
/* 44185*/      OPC_MoveChild4,
/* 44186*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44189*/      OPC_CheckType, MVT::i32,
/* 44191*/      OPC_MoveParent,
/* 44192*/      OPC_RecordChild5, // #4 = $srcw
/* 44193*/      OPC_MoveChild5,
/* 44194*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44197*/      OPC_CheckType, MVT::i32,
/* 44199*/      OPC_MoveParent,
/* 44200*/      OPC_RecordChild6, // #5 = $offsetx
/* 44201*/      OPC_MoveChild6,
/* 44202*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44205*/      OPC_CheckType, MVT::i32,
/* 44207*/      OPC_MoveParent,
/* 44208*/      OPC_RecordChild7, // #6 = $offsety
/* 44209*/      OPC_MoveChild7,
/* 44210*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44213*/      OPC_CheckType, MVT::i32,
/* 44215*/      OPC_MoveParent,
/* 44216*/      OPC_MoveChild, 8,
/* 44218*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44221*/      OPC_RecordNode, // #7 = $offsetz
/* 44222*/      OPC_CheckType, MVT::i32,
/* 44224*/      OPC_MoveParent,
/* 44225*/      OPC_MoveChild, 9,
/* 44227*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44230*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44231*/      OPC_CheckType, MVT::i32,
/* 44233*/      OPC_MoveParent,
/* 44234*/      OPC_MoveChild, 10,
/* 44236*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44239*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44240*/      OPC_CheckType, MVT::i32,
/* 44242*/      OPC_MoveParent,
/* 44243*/      OPC_MoveChild, 11,
/* 44245*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44248*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44249*/      OPC_CheckType, MVT::i32,
/* 44251*/      OPC_MoveParent,
/* 44252*/      OPC_MoveChild, 12,
/* 44254*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44257*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44258*/      OPC_CheckType, MVT::i32,
/* 44260*/      OPC_MoveParent,
/* 44261*/      OPC_MoveChild, 13,
/* 44263*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44266*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44267*/      OPC_CheckType, MVT::i32,
/* 44269*/      OPC_MoveParent,
/* 44270*/      OPC_MoveChild, 14,
/* 44272*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44275*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44276*/      OPC_CheckType, MVT::i32,
/* 44278*/      OPC_MoveParent,
/* 44279*/      OPC_MoveChild, 15,
/* 44281*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44284*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44285*/      OPC_CheckType, MVT::i32,
/* 44287*/      OPC_MoveParent,
/* 44288*/      OPC_MoveChild, 16,
/* 44290*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44293*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44294*/      OPC_CheckType, MVT::i32,
/* 44296*/      OPC_MoveParent,
/* 44297*/      OPC_MoveChild, 17,
/* 44299*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44302*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 44303*/      OPC_CheckType, MVT::i32,
/* 44305*/      OPC_MoveParent,
/* 44306*/      OPC_MoveChild, 18,
/* 44308*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44311*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 44312*/      OPC_CheckType, MVT::i32,
/* 44314*/      OPC_MoveParent,
/* 44315*/      OPC_CheckType, MVT::v4f32,
/* 44317*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 44319*/      OPC_EmitConvertToTarget, 1,
/* 44321*/      OPC_EmitConvertToTarget, 2,
/* 44323*/      OPC_EmitConvertToTarget, 3,
/* 44325*/      OPC_EmitConvertToTarget, 4,
/* 44327*/      OPC_EmitConvertToTarget, 5,
/* 44329*/      OPC_EmitConvertToTarget, 6,
/* 44331*/      OPC_EmitConvertToTarget, 7,
/* 44333*/      OPC_EmitConvertToTarget, 8,
/* 44335*/      OPC_EmitConvertToTarget, 9,
/* 44337*/      OPC_EmitConvertToTarget, 10,
/* 44339*/      OPC_EmitConvertToTarget, 11,
/* 44341*/      OPC_EmitConvertToTarget, 12,
/* 44343*/      OPC_EmitConvertToTarget, 13,
/* 44345*/      OPC_EmitConvertToTarget, 14,
/* 44347*/      OPC_EmitConvertToTarget, 15,
/* 44349*/      OPC_EmitConvertToTarget, 16,
/* 44351*/      OPC_EmitConvertToTarget, 17,
/* 44353*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_GRADIENTS_H), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 8:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_GRADIENTS_H:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 44377*/    /*Scope*/ 88|128,1/*216*/, /*->44595*/
/* 44379*/      OPC_CheckChild0Integer, 9, 
/* 44381*/      OPC_CheckChild0Type, MVT::i32,
/* 44383*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 44384*/      OPC_CheckChild1Type, MVT::v4f32,
/* 44386*/      OPC_RecordChild2, // #1 = $srcx
/* 44387*/      OPC_MoveChild2,
/* 44388*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44391*/      OPC_CheckType, MVT::i32,
/* 44393*/      OPC_MoveParent,
/* 44394*/      OPC_RecordChild3, // #2 = $srcy
/* 44395*/      OPC_MoveChild3,
/* 44396*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44399*/      OPC_CheckType, MVT::i32,
/* 44401*/      OPC_MoveParent,
/* 44402*/      OPC_RecordChild4, // #3 = $srcz
/* 44403*/      OPC_MoveChild4,
/* 44404*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44407*/      OPC_CheckType, MVT::i32,
/* 44409*/      OPC_MoveParent,
/* 44410*/      OPC_RecordChild5, // #4 = $srcw
/* 44411*/      OPC_MoveChild5,
/* 44412*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44415*/      OPC_CheckType, MVT::i32,
/* 44417*/      OPC_MoveParent,
/* 44418*/      OPC_RecordChild6, // #5 = $offsetx
/* 44419*/      OPC_MoveChild6,
/* 44420*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44423*/      OPC_CheckType, MVT::i32,
/* 44425*/      OPC_MoveParent,
/* 44426*/      OPC_RecordChild7, // #6 = $offsety
/* 44427*/      OPC_MoveChild7,
/* 44428*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44431*/      OPC_CheckType, MVT::i32,
/* 44433*/      OPC_MoveParent,
/* 44434*/      OPC_MoveChild, 8,
/* 44436*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44439*/      OPC_RecordNode, // #7 = $offsetz
/* 44440*/      OPC_CheckType, MVT::i32,
/* 44442*/      OPC_MoveParent,
/* 44443*/      OPC_MoveChild, 9,
/* 44445*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44448*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44449*/      OPC_CheckType, MVT::i32,
/* 44451*/      OPC_MoveParent,
/* 44452*/      OPC_MoveChild, 10,
/* 44454*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44457*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44458*/      OPC_CheckType, MVT::i32,
/* 44460*/      OPC_MoveParent,
/* 44461*/      OPC_MoveChild, 11,
/* 44463*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44466*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44467*/      OPC_CheckType, MVT::i32,
/* 44469*/      OPC_MoveParent,
/* 44470*/      OPC_MoveChild, 12,
/* 44472*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44475*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44476*/      OPC_CheckType, MVT::i32,
/* 44478*/      OPC_MoveParent,
/* 44479*/      OPC_MoveChild, 13,
/* 44481*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44484*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44485*/      OPC_CheckType, MVT::i32,
/* 44487*/      OPC_MoveParent,
/* 44488*/      OPC_MoveChild, 14,
/* 44490*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44493*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44494*/      OPC_CheckType, MVT::i32,
/* 44496*/      OPC_MoveParent,
/* 44497*/      OPC_MoveChild, 15,
/* 44499*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44502*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44503*/      OPC_CheckType, MVT::i32,
/* 44505*/      OPC_MoveParent,
/* 44506*/      OPC_MoveChild, 16,
/* 44508*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44511*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44512*/      OPC_CheckType, MVT::i32,
/* 44514*/      OPC_MoveParent,
/* 44515*/      OPC_MoveChild, 17,
/* 44517*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44520*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 44521*/      OPC_CheckType, MVT::i32,
/* 44523*/      OPC_MoveParent,
/* 44524*/      OPC_MoveChild, 18,
/* 44526*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44529*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 44530*/      OPC_CheckType, MVT::i32,
/* 44532*/      OPC_MoveParent,
/* 44533*/      OPC_CheckType, MVT::v4f32,
/* 44535*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 44537*/      OPC_EmitConvertToTarget, 1,
/* 44539*/      OPC_EmitConvertToTarget, 2,
/* 44541*/      OPC_EmitConvertToTarget, 3,
/* 44543*/      OPC_EmitConvertToTarget, 4,
/* 44545*/      OPC_EmitConvertToTarget, 5,
/* 44547*/      OPC_EmitConvertToTarget, 6,
/* 44549*/      OPC_EmitConvertToTarget, 7,
/* 44551*/      OPC_EmitConvertToTarget, 8,
/* 44553*/      OPC_EmitConvertToTarget, 9,
/* 44555*/      OPC_EmitConvertToTarget, 10,
/* 44557*/      OPC_EmitConvertToTarget, 11,
/* 44559*/      OPC_EmitConvertToTarget, 12,
/* 44561*/      OPC_EmitConvertToTarget, 13,
/* 44563*/      OPC_EmitConvertToTarget, 14,
/* 44565*/      OPC_EmitConvertToTarget, 15,
/* 44567*/      OPC_EmitConvertToTarget, 16,
/* 44569*/      OPC_EmitConvertToTarget, 17,
/* 44571*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_GRADIENTS_V), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 9:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_GRADIENTS_V:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 44595*/    /*Scope*/ 88|128,1/*216*/, /*->44813*/
/* 44597*/      OPC_CheckChild0Integer, 10, 
/* 44599*/      OPC_CheckChild0Type, MVT::i32,
/* 44601*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 44602*/      OPC_CheckChild1Type, MVT::v4i32,
/* 44604*/      OPC_RecordChild2, // #1 = $srcx
/* 44605*/      OPC_MoveChild2,
/* 44606*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44609*/      OPC_CheckType, MVT::i32,
/* 44611*/      OPC_MoveParent,
/* 44612*/      OPC_RecordChild3, // #2 = $srcy
/* 44613*/      OPC_MoveChild3,
/* 44614*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44617*/      OPC_CheckType, MVT::i32,
/* 44619*/      OPC_MoveParent,
/* 44620*/      OPC_RecordChild4, // #3 = $srcz
/* 44621*/      OPC_MoveChild4,
/* 44622*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44625*/      OPC_CheckType, MVT::i32,
/* 44627*/      OPC_MoveParent,
/* 44628*/      OPC_RecordChild5, // #4 = $srcw
/* 44629*/      OPC_MoveChild5,
/* 44630*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44633*/      OPC_CheckType, MVT::i32,
/* 44635*/      OPC_MoveParent,
/* 44636*/      OPC_RecordChild6, // #5 = $offsetx
/* 44637*/      OPC_MoveChild6,
/* 44638*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44641*/      OPC_CheckType, MVT::i32,
/* 44643*/      OPC_MoveParent,
/* 44644*/      OPC_RecordChild7, // #6 = $offsety
/* 44645*/      OPC_MoveChild7,
/* 44646*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44649*/      OPC_CheckType, MVT::i32,
/* 44651*/      OPC_MoveParent,
/* 44652*/      OPC_MoveChild, 8,
/* 44654*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44657*/      OPC_RecordNode, // #7 = $offsetz
/* 44658*/      OPC_CheckType, MVT::i32,
/* 44660*/      OPC_MoveParent,
/* 44661*/      OPC_MoveChild, 9,
/* 44663*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44666*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 44667*/      OPC_CheckType, MVT::i32,
/* 44669*/      OPC_MoveParent,
/* 44670*/      OPC_MoveChild, 10,
/* 44672*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44675*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 44676*/      OPC_CheckType, MVT::i32,
/* 44678*/      OPC_MoveParent,
/* 44679*/      OPC_MoveChild, 11,
/* 44681*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44684*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 44685*/      OPC_CheckType, MVT::i32,
/* 44687*/      OPC_MoveParent,
/* 44688*/      OPC_MoveChild, 12,
/* 44690*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44693*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 44694*/      OPC_CheckType, MVT::i32,
/* 44696*/      OPC_MoveParent,
/* 44697*/      OPC_MoveChild, 13,
/* 44699*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44702*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 44703*/      OPC_CheckType, MVT::i32,
/* 44705*/      OPC_MoveParent,
/* 44706*/      OPC_MoveChild, 14,
/* 44708*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44711*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 44712*/      OPC_CheckType, MVT::i32,
/* 44714*/      OPC_MoveParent,
/* 44715*/      OPC_MoveChild, 15,
/* 44717*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44720*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 44721*/      OPC_CheckType, MVT::i32,
/* 44723*/      OPC_MoveParent,
/* 44724*/      OPC_MoveChild, 16,
/* 44726*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44729*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 44730*/      OPC_CheckType, MVT::i32,
/* 44732*/      OPC_MoveParent,
/* 44733*/      OPC_MoveChild, 17,
/* 44735*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44738*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 44739*/      OPC_CheckType, MVT::i32,
/* 44741*/      OPC_MoveParent,
/* 44742*/      OPC_MoveChild, 18,
/* 44744*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 44747*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 44748*/      OPC_CheckType, MVT::i32,
/* 44750*/      OPC_MoveParent,
/* 44751*/      OPC_CheckType, MVT::v4f32,
/* 44753*/      OPC_CheckPatternPredicate, 2, // (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 44755*/      OPC_EmitConvertToTarget, 1,
/* 44757*/      OPC_EmitConvertToTarget, 2,
/* 44759*/      OPC_EmitConvertToTarget, 3,
/* 44761*/      OPC_EmitConvertToTarget, 4,
/* 44763*/      OPC_EmitConvertToTarget, 5,
/* 44765*/      OPC_EmitConvertToTarget, 6,
/* 44767*/      OPC_EmitConvertToTarget, 7,
/* 44769*/      OPC_EmitConvertToTarget, 8,
/* 44771*/      OPC_EmitConvertToTarget, 9,
/* 44773*/      OPC_EmitConvertToTarget, 10,
/* 44775*/      OPC_EmitConvertToTarget, 11,
/* 44777*/      OPC_EmitConvertToTarget, 12,
/* 44779*/      OPC_EmitConvertToTarget, 13,
/* 44781*/      OPC_EmitConvertToTarget, 14,
/* 44783*/      OPC_EmitConvertToTarget, 15,
/* 44785*/      OPC_EmitConvertToTarget, 16,
/* 44787*/      OPC_EmitConvertToTarget, 17,
/* 44789*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_LDPTR), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 10:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_LDPTR:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 44813*/    0, /*End of Scope*/
/* 44814*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 44816 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 145
  // #OPC_RecordNode                           = 145
  // #OPC_RecordChild                          = 405
  // #OPC_RecordMemRef                         = 14
  // #OPC_CaptureGlueInput                     = 1
  // #OPC_MoveChild                            = 288
  // #OPC_MoveParent                           = 396
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 90
  // #OPC_CheckPatternPredicate                = 393
  // #OPC_CheckPredicate                       = 117
  // #OPC_CheckOpcode                          = 277
  // #OPC_SwitchOpcode                         = 5
  // #OPC_CheckType                            = 427
  // #OPC_SwitchType                           = 16
  // #OPC_CheckChildType                       = 95
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 89
  // #OPC_CheckCondCode                        = 42
  // #OPC_CheckChild2CondCode                  = 0
  // #OPC_CheckValueType                       = 3
  // #OPC_CheckComplexPat                      = 36
  // #OPC_CheckAndImm                          = 0
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 5225
  // #OPC_EmitStringInteger                    = 383
  // #OPC_EmitRegister                         = 376
  // #OPC_EmitConvertToTarget                  = 220
  // #OPC_EmitMergeInputChains                 = 94
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 428
  // #OPC_EmitNodeXForm                        = 1
  // #OPC_CompleteMatch                        = 7
  // #OPC_MorphNodeTo                          = 399

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckPatternPredicate(unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckPatternPredicate(unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 1: return (Subtarget->getGeneration() <= AMDGPUSubtarget::R700);
  case 2: return (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 3: return (Subtarget->hasCaymanISA());
  case 4: return (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA());
  case 5: return (Subtarget->getGeneration() == AMDGPUSubtarget::R700);
  case 6: return (Subtarget->hasFMA()) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckNodePredicate(SDNode *Node, unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_shl_oneuse
    // Predicate_add_oneuse
    // Predicate_xor_oneuse
    // Predicate_srl_oneuse
    SDNode *N = Node;
    (void)N;
 return N->hasOneUse(); 
  }
  case 1: { 
    // Predicate_IMMZeroBasedBitfieldMask
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

  return isMask_32(Imm);

  }
  case 2: { 
    // Predicate_FP_ONE
    auto *N = cast<ConstantFPSDNode>(Node);
    (void)N;
return N->isExactlyValue(1.0);
  }
  case 3: { 
    // Predicate_FP_ZERO
    auto *N = cast<ConstantFPSDNode>(Node);
    (void)N;
return N->getValueAPF().isZero();
  }
  case 4: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 5: { 
    // Predicate_load_private
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 5)
return false;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 6: { 
    // Predicate_az_extload
    SDNode *N = Node;
    (void)N;

  LoadSDNode *L = cast<LoadSDNode>(N);
  return L->getExtensionType() == ISD::ZEXTLOAD ||
         L->getExtensionType() == ISD::EXTLOAD;

  }
  case 7: { 
    // Predicate_az_extloadi8
    SDNode *N = Node;
    (void)N;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { 
    // Predicate_vtx_id3_az_extloadi8
    // Predicate_vtx_id3_az_extloadi16
    // Predicate_vtx_id3_load
    SDNode *N = Node;
    (void)N;
 return isConstantLoad(cast<LoadSDNode>(N), 0) ||
            (cast<LoadSDNode>(N)->getAddressSpace() == AMDGPUAS::PARAM_I_ADDRESS); 
  }
  case 9: { 
    // Predicate_az_extloadi16
    SDNode *N = Node;
    (void)N;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 10: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 11: { 
    // Predicate_vtx_id2_az_extloadi8
    // Predicate_vtx_id2_az_extloadi16
    // Predicate_vtx_id2_load
    SDNode *N = Node;
    (void)N;

  const MemSDNode *LD = cast<MemSDNode>(N);
  return LD->getAddressSpace() == AMDGPUAS::CONSTANT_ADDRESS &&
         isa<GlobalValue>(GetUnderlyingObject(
         LD->getMemOperand()->getValue(), CurDAG->getDataLayout()));

  }
  case 12: { 
    // Predicate_vtx_id1_az_extloadi8
    // Predicate_vtx_id1_az_extloadi16
    // Predicate_vtx_id1_load
    SDNode *N = Node;
    (void)N;

  const MemSDNode *LD = cast<MemSDNode>(N);
  return LD->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS ||
         (LD->getAddressSpace() == AMDGPUAS::CONSTANT_ADDRESS &&
           !isa<GlobalValue>(GetUnderlyingObject(
           LD->getMemOperand()->getValue(), CurDAG->getDataLayout())));

  }
  case 13: { 
    // Predicate_load_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 14: { 
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 15: { 
    // Predicate_sextloadi8_local
    // Predicate_truncstorei8_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 16: { 
    // Predicate_az_extloadi8_local
    // Predicate_az_extloadi16_local
    SDNode *N = Node;
    (void)N;

  return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::LOCAL_ADDRESS;

  }
  case 17: { 
    // Predicate_sextloadi16_local
    // Predicate_truncstorei16_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 18: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 19: { 
    // Predicate_store_private
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 5)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 20: { 
    // Predicate_store_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 21: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 22: { 
    // Predicate_store_global
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 1 && AddrSpace != 4)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 23: { 
    // Predicate_atomic_load_add_global_noret_32
    // Predicate_atomic_load_sub_global_noret_32
    // Predicate_atomic_swap_global_noret_32
    // Predicate_atomic_load_min_global_noret_32
    // Predicate_atomic_load_umin_global_noret_32
    // Predicate_atomic_load_max_global_noret_32
    // Predicate_atomic_load_umax_global_noret_32
    // Predicate_atomic_load_and_global_noret_32
    // Predicate_atomic_load_or_global_noret_32
    // Predicate_atomic_load_xor_global_noret_32
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 1 && AddrSpace != 4)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return (SDValue(N, 0).use_empty());
  }
  case 24: { 
    // Predicate_atomic_load_add_local_32
    // Predicate_atomic_load_sub_local_32
    // Predicate_atomic_swap_local_32
    // Predicate_atomic_load_min_local_32
    // Predicate_atomic_load_umin_local_32
    // Predicate_atomic_load_max_local_32
    // Predicate_atomic_load_umax_local_32
    // Predicate_atomic_load_and_local_32
    // Predicate_atomic_load_or_local_32
    // Predicate_atomic_load_xor_local_32
    // Predicate_atomic_cmp_swap_local_32
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 25: { 
    // Predicate_mskor_global
    SDNode *N = Node;
    (void)N;

  return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS;

  }
  case 26: { 
    // Predicate_atomic_cmp_swap_global_noret
    SDNode *N = Node;
    (void)N;
return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS && (SDValue(N, 0).use_empty());
  }
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result)
#if DAGISEL_INLINE
  override
#endif
{
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
  return SelectADDRIndirect(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectADDRVTX_READ(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+1);
  return SelectGlobalValueConstantOffset(N, Result[NextRes+0].first);
  case 3:
    Result.resize(NextRes+2);
  return SelectGlobalValueVariableOffset(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
SDValue DAGISEL_CLASS_COLONCOLON RunSDNodeXForm(SDValue V, unsigned XFormNo)
#if DAGISEL_INLINE
  override
#endif
{
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // IMMPopCount
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(countPopulation(N->getZExtValue()), SDLoc(N),
                                   MVT::i32);

  }
  }
}
#endif // GET_DAGISEL_BODY


#ifdef DAGISEL_INLINE
#undef DAGISEL_INLINE
#endif
#ifdef DAGISEL_CLASS_COLONCOLON
#undef DAGISEL_CLASS_COLONCOLON
#endif
#ifdef GET_DAGISEL_DECL
#undef GET_DAGISEL_DECL
#endif
#ifdef GET_DAGISEL_BODY
#undef GET_DAGISEL_BODY
#endif

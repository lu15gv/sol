/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the BPF target                                *|
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
/*     0*/  OPC_SwitchOpcode /*29 cases */, 21|128,1/*149*/, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->154
/*     5*/    OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*     6*/    OPC_Scope, 28, /*->36*/ // 4 children in Scope
/*     8*/      OPC_CheckChild1Integer, 67|128,14/*1859*/, 
/*    11*/      OPC_RecordChild2, // #1 = $pseudo
/*    12*/      OPC_MoveChild2,
/*    13*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    16*/      OPC_MoveParent,
/*    17*/      OPC_RecordChild3, // #2 = $imm
/*    18*/      OPC_MoveChild3,
/*    19*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    22*/      OPC_MoveParent,
/*    23*/      OPC_EmitMergeInputChains1_0,
/*    24*/      OPC_EmitConvertToTarget, 1,
/*    26*/      OPC_EmitConvertToTarget, 2,
/*    28*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_pseudo), 0|OPFL_Chain,
                    MVT::i64, 2/*#Ops*/, 3, 4, 
                // Src: (intrinsic_w_chain:{ *:[i64] } 1859:{ *:[iPTR] }, (imm:{ *:[i64] }):$pseudo, (imm:{ *:[i64] }):$imm) - Complexity = 14
                // Dst: (LD_pseudo:{ *:[i64] } (imm:{ *:[i64] }):$pseudo, (imm:{ *:[i64] }):$imm)
/*    36*/    /*Scope*/ 38, /*->75*/
/*    37*/      OPC_CheckChild1Integer, 63|128,14/*1855*/, 
/*    40*/      OPC_RecordChild2, // #1 = $skb
/*    41*/      OPC_CheckChild2Type, MVT::i64,
/*    43*/      OPC_RecordChild3, // #2 = $imm
/*    44*/      OPC_Scope, 18, /*->64*/ // 2 children in Scope
/*    46*/        OPC_MoveChild3,
/*    47*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    50*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*    52*/        OPC_MoveParent,
/*    53*/        OPC_EmitMergeInputChains1_0,
/*    54*/        OPC_EmitConvertToTarget, 2,
/*    56*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_B), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1855:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_B:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*    64*/      /*Scope*/ 9, /*->74*/
/*    65*/        OPC_EmitMergeInputChains1_0,
/*    66*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_B), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1855:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_B:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*    74*/      0, /*End of Scope*/
/*    75*/    /*Scope*/ 38, /*->114*/
/*    76*/      OPC_CheckChild1Integer, 64|128,14/*1856*/, 
/*    79*/      OPC_RecordChild2, // #1 = $skb
/*    80*/      OPC_CheckChild2Type, MVT::i64,
/*    82*/      OPC_RecordChild3, // #2 = $imm
/*    83*/      OPC_Scope, 18, /*->103*/ // 2 children in Scope
/*    85*/        OPC_MoveChild3,
/*    86*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    89*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*    91*/        OPC_MoveParent,
/*    92*/        OPC_EmitMergeInputChains1_0,
/*    93*/        OPC_EmitConvertToTarget, 2,
/*    95*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_H), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1856:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_H:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*   103*/      /*Scope*/ 9, /*->113*/
/*   104*/        OPC_EmitMergeInputChains1_0,
/*   105*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_H), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1856:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_H:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*   113*/      0, /*End of Scope*/
/*   114*/    /*Scope*/ 38, /*->153*/
/*   115*/      OPC_CheckChild1Integer, 65|128,14/*1857*/, 
/*   118*/      OPC_RecordChild2, // #1 = $skb
/*   119*/      OPC_CheckChild2Type, MVT::i64,
/*   121*/      OPC_RecordChild3, // #2 = $imm
/*   122*/      OPC_Scope, 18, /*->142*/ // 2 children in Scope
/*   124*/        OPC_MoveChild3,
/*   125*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   128*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*   130*/        OPC_MoveParent,
/*   131*/        OPC_EmitMergeInputChains1_0,
/*   132*/        OPC_EmitConvertToTarget, 2,
/*   134*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_W), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1857:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_W:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*   142*/      /*Scope*/ 9, /*->152*/
/*   143*/        OPC_EmitMergeInputChains1_0,
/*   144*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_W), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1857:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_W:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*   152*/      0, /*End of Scope*/
/*   153*/    0, /*End of Scope*/
/*   154*/  /*SwitchOpcode*/ 114|128,1/*242*/, TARGET_VAL(ISD::STORE),// ->400
/*   158*/    OPC_RecordMemRef,
/*   159*/    OPC_RecordNode, // #0 = 'st' chained node
/*   160*/    OPC_RecordChild1, // #1 = $src
/*   161*/    OPC_Scope, 41|128,1/*169*/, /*->333*/ // 2 children in Scope
/*   164*/      OPC_CheckChild1Type, MVT::i64,
/*   166*/      OPC_RecordChild2, // #2 = $addr
/*   167*/      OPC_CheckChild2Type, MVT::i64,
/*   169*/      OPC_CheckPredicate, 1, // Predicate_unindexedstore
/*   171*/      OPC_Scope, 55, /*->228*/ // 3 children in Scope
/*   173*/        OPC_CheckPredicate, 2, // Predicate_truncstore
/*   175*/        OPC_Scope, 16, /*->193*/ // 3 children in Scope
/*   177*/          OPC_CheckPredicate, 3, // Predicate_truncstorei32
/*   179*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   181*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   184*/          OPC_EmitMergeInputChains1_0,
/*   185*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STW), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   193*/        /*Scope*/ 16, /*->210*/
/*   194*/          OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   196*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   198*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   201*/          OPC_EmitMergeInputChains1_0,
/*   202*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   210*/        /*Scope*/ 16, /*->227*/
/*   211*/          OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   213*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   215*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   218*/          OPC_EmitMergeInputChains1_0,
/*   219*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   227*/        0, /*End of Scope*/
/*   228*/      /*Scope*/ 14, /*->243*/
/*   229*/        OPC_CheckPredicate, 6, // Predicate_store
/*   231*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   234*/        OPC_EmitMergeInputChains1_0,
/*   235*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::STD), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STD i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   243*/      /*Scope*/ 88, /*->332*/
/*   244*/        OPC_CheckPredicate, 2, // Predicate_truncstore
/*   246*/        OPC_Scope, 27, /*->275*/ // 3 children in Scope
/*   248*/          OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   250*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   252*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*   255*/          OPC_EmitMergeInputChains1_0,
/*   256*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   259*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*   267*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STB32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 6, 3, 4, 
                    // Src: (st GPR:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB32 (EXTRACT_SUBREG:{ *:[i32] } GPR:{ *:[i64] }:$src, sub_32:{ *:[i32] }), ADDRri:{ *:[i64] }:$dst)
/*   275*/        /*Scope*/ 27, /*->303*/
/*   276*/          OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   278*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   280*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*   283*/          OPC_EmitMergeInputChains1_0,
/*   284*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   287*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*   295*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 6, 3, 4, 
                    // Src: (st GPR:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH32 (EXTRACT_SUBREG:{ *:[i32] } GPR:{ *:[i64] }:$src, sub_32:{ *:[i32] }), ADDRri:{ *:[i64] }:$dst)
/*   303*/        /*Scope*/ 27, /*->331*/
/*   304*/          OPC_CheckPredicate, 3, // Predicate_truncstorei32
/*   306*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   308*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*   311*/          OPC_EmitMergeInputChains1_0,
/*   312*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   315*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*   323*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STW32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 6, 3, 4, 
                    // Src: (st GPR:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW32 (EXTRACT_SUBREG:{ *:[i32] } GPR:{ *:[i64] }:$src, sub_32:{ *:[i32] }), ADDRri:{ *:[i64] }:$dst)
/*   331*/        0, /*End of Scope*/
/*   332*/      0, /*End of Scope*/
/*   333*/    /*Scope*/ 65, /*->399*/
/*   334*/      OPC_CheckChild1Type, MVT::i32,
/*   336*/      OPC_RecordChild2, // #2 = $addr
/*   337*/      OPC_CheckChild2Type, MVT::i64,
/*   339*/      OPC_CheckPredicate, 1, // Predicate_unindexedstore
/*   341*/      OPC_Scope, 16, /*->359*/ // 2 children in Scope
/*   343*/        OPC_CheckPredicate, 6, // Predicate_store
/*   345*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   347*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   350*/        OPC_EmitMergeInputChains1_0,
/*   351*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::STW32), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW32 i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   359*/      /*Scope*/ 38, /*->398*/
/*   360*/        OPC_CheckPredicate, 2, // Predicate_truncstore
/*   362*/        OPC_Scope, 16, /*->380*/ // 2 children in Scope
/*   364*/          OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   366*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   368*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   371*/          OPC_EmitMergeInputChains1_0,
/*   372*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH32 i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   380*/        /*Scope*/ 16, /*->397*/
/*   381*/          OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   383*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   385*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   388*/          OPC_EmitMergeInputChains1_0,
/*   389*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STB32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB32 i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   397*/        0, /*End of Scope*/
/*   398*/      0, /*End of Scope*/
/*   399*/    0, /*End of Scope*/
/*   400*/  /*SwitchOpcode*/ 58|128,3/*442*/, TARGET_VAL(ISD::LOAD),// ->846
/*   404*/    OPC_RecordMemRef,
/*   405*/    OPC_RecordNode, // #0 = 'ld' chained node
/*   406*/    OPC_RecordChild1, // #1 = $addr
/*   407*/    OPC_CheckChild1Type, MVT::i64,
/*   409*/    OPC_CheckPredicate, 7, // Predicate_unindexedload
/*   411*/    OPC_SwitchType /*2 cases */, 75|128,2/*331*/, MVT::i64,// ->746
/*   415*/      OPC_Scope, 55, /*->472*/ // 5 children in Scope
/*   417*/        OPC_CheckPredicate, 8, // Predicate_zextload
/*   419*/        OPC_Scope, 16, /*->437*/ // 3 children in Scope
/*   421*/          OPC_CheckPredicate, 3, // Predicate_zextloadi32
/*   423*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   425*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   428*/          OPC_EmitMergeInputChains1_0,
/*   429*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                    // Dst: (LDW:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   437*/        /*Scope*/ 16, /*->454*/
/*   438*/          OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*   440*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   442*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   445*/          OPC_EmitMergeInputChains1_0,
/*   446*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDH:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   454*/        /*Scope*/ 16, /*->471*/
/*   455*/          OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*   457*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   459*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   462*/          OPC_EmitMergeInputChains1_0,
/*   463*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDB:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   471*/        0, /*End of Scope*/
/*   472*/      /*Scope*/ 14, /*->487*/
/*   473*/        OPC_CheckPredicate, 9, // Predicate_load
/*   475*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   478*/        OPC_EmitMergeInputChains1_0,
/*   479*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDD), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDD:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   487*/      /*Scope*/ 55, /*->543*/
/*   488*/        OPC_CheckPredicate, 10, // Predicate_extload
/*   490*/        OPC_Scope, 16, /*->508*/ // 3 children in Scope
/*   492*/          OPC_CheckPredicate, 5, // Predicate_extloadi8
/*   494*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   496*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   499*/          OPC_EmitMergeInputChains1_0,
/*   500*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDB:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   508*/        /*Scope*/ 16, /*->525*/
/*   509*/          OPC_CheckPredicate, 4, // Predicate_extloadi16
/*   511*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   513*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   516*/          OPC_EmitMergeInputChains1_0,
/*   517*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDH:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   525*/        /*Scope*/ 16, /*->542*/
/*   526*/          OPC_CheckPredicate, 3, // Predicate_extloadi32
/*   528*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   530*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   533*/          OPC_EmitMergeInputChains1_0,
/*   534*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                    // Dst: (LDW:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   542*/        0, /*End of Scope*/
/*   543*/      /*Scope*/ 100, /*->644*/
/*   544*/        OPC_CheckPredicate, 8, // Predicate_zextload
/*   546*/        OPC_Scope, 31, /*->579*/ // 3 children in Scope
/*   548*/          OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*   550*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   552*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   555*/          OPC_EmitMergeInputChains1_0,
/*   556*/          OPC_EmitInteger, MVT::i64, 0, 
/*   559*/          OPC_EmitNode1, TARGET_VAL(BPF::LDB32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   567*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   570*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDB32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   579*/        /*Scope*/ 31, /*->611*/
/*   580*/          OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*   582*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   584*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   587*/          OPC_EmitMergeInputChains1_0,
/*   588*/          OPC_EmitInteger, MVT::i64, 0, 
/*   591*/          OPC_EmitNode1, TARGET_VAL(BPF::LDH32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   599*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   602*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDH32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   611*/        /*Scope*/ 31, /*->643*/
/*   612*/          OPC_CheckPredicate, 3, // Predicate_zextloadi32
/*   614*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   616*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   619*/          OPC_EmitMergeInputChains1_0,
/*   620*/          OPC_EmitInteger, MVT::i64, 0, 
/*   623*/          OPC_EmitNode1, TARGET_VAL(BPF::LDW32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   631*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   634*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDW32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   643*/        0, /*End of Scope*/
/*   644*/      /*Scope*/ 100, /*->745*/
/*   645*/        OPC_CheckPredicate, 10, // Predicate_extload
/*   647*/        OPC_Scope, 31, /*->680*/ // 3 children in Scope
/*   649*/          OPC_CheckPredicate, 5, // Predicate_extloadi8
/*   651*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   653*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   656*/          OPC_EmitMergeInputChains1_0,
/*   657*/          OPC_EmitInteger, MVT::i64, 0, 
/*   660*/          OPC_EmitNode1, TARGET_VAL(BPF::LDB32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   668*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   671*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDB32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   680*/        /*Scope*/ 31, /*->712*/
/*   681*/          OPC_CheckPredicate, 4, // Predicate_extloadi16
/*   683*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   685*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   688*/          OPC_EmitMergeInputChains1_0,
/*   689*/          OPC_EmitInteger, MVT::i64, 0, 
/*   692*/          OPC_EmitNode1, TARGET_VAL(BPF::LDH32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   700*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   703*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDH32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   712*/        /*Scope*/ 31, /*->744*/
/*   713*/          OPC_CheckPredicate, 3, // Predicate_extloadi32
/*   715*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   717*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   720*/          OPC_EmitMergeInputChains1_0,
/*   721*/          OPC_EmitInteger, MVT::i64, 0, 
/*   724*/          OPC_EmitNode1, TARGET_VAL(BPF::LDW32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   732*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   735*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDW32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   744*/        0, /*End of Scope*/
/*   745*/      0, /*End of Scope*/
/*   746*/    /*SwitchType*/ 97, MVT::i32,// ->845
/*   748*/      OPC_Scope, 16, /*->766*/ // 3 children in Scope
/*   750*/        OPC_CheckPredicate, 9, // Predicate_load
/*   752*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   754*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   757*/        OPC_EmitMergeInputChains1_0,
/*   758*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW32), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDW32:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)
/*   766*/      /*Scope*/ 38, /*->805*/
/*   767*/        OPC_CheckPredicate, 8, // Predicate_zextload
/*   769*/        OPC_Scope, 16, /*->787*/ // 2 children in Scope
/*   771*/          OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*   773*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   775*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   778*/          OPC_EmitMergeInputChains1_0,
/*   779*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDH32:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)
/*   787*/        /*Scope*/ 16, /*->804*/
/*   788*/          OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*   790*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   792*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   795*/          OPC_EmitMergeInputChains1_0,
/*   796*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDB32:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)
/*   804*/        0, /*End of Scope*/
/*   805*/      /*Scope*/ 38, /*->844*/
/*   806*/        OPC_CheckPredicate, 10, // Predicate_extload
/*   808*/        OPC_Scope, 16, /*->826*/ // 2 children in Scope
/*   810*/          OPC_CheckPredicate, 5, // Predicate_extloadi8
/*   812*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   814*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   817*/          OPC_EmitMergeInputChains1_0,
/*   818*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDB32:{ *:[i32] } ADDRri:{ *:[i64] }:$src)
/*   826*/        /*Scope*/ 16, /*->843*/
/*   827*/          OPC_CheckPredicate, 4, // Predicate_extloadi16
/*   829*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   831*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   834*/          OPC_EmitMergeInputChains1_0,
/*   835*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDH32:{ *:[i32] } ADDRri:{ *:[i64] }:$src)
/*   843*/        0, /*End of Scope*/
/*   844*/      0, /*End of Scope*/
/*   845*/    0, // EndSwitchType
/*   846*/  /*SwitchOpcode*/ 65, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->914
/*   849*/    OPC_RecordMemRef,
/*   850*/    OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/*   851*/    OPC_RecordChild1, // #1 = $addr
/*   852*/    OPC_CheckChild1Type, MVT::i64,
/*   854*/    OPC_RecordChild2, // #2 = $val
/*   855*/    OPC_Scope, 38, /*->895*/ // 2 children in Scope
/*   857*/      OPC_CheckPredicate, 3, // Predicate_atomic_load_add_32
/*   859*/      OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->877
/*   862*/        OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   864*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*   867*/        OPC_EmitMergeInputChains1_0,
/*   868*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XADDW), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_load_add:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                  // Dst: (XADDW:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)
/*   877*/      /*SwitchType*/ 15, MVT::i32,// ->894
/*   879*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   881*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*   884*/        OPC_EmitMergeInputChains1_0,
/*   885*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XADDW32), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_load_add:{ *:[i32] } ADDRri:{ *:[i64] }:$addr, GPR32:{ *:[i32] }:$val)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                  // Dst: (XADDW32:{ *:[i32] } ADDRri:{ *:[i64] }:$addr, GPR32:{ *:[i32] }:$val)
/*   894*/      0, // EndSwitchType
/*   895*/    /*Scope*/ 17, /*->913*/
/*   896*/      OPC_CheckPredicate, 11, // Predicate_atomic_load_add_64
/*   898*/      OPC_CheckType, MVT::i64,
/*   900*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*   903*/      OPC_EmitMergeInputChains1_0,
/*   904*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XADDD), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
                // Dst: (XADDD:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)
/*   913*/    0, /*End of Scope*/
/*   914*/  /*SwitchOpcode*/ 105|128,6/*873*/, TARGET_VAL(BPFISD::BR_CC),// ->1791
/*   918*/    OPC_RecordNode, // #0 = 'BPFbrcc' chained node
/*   919*/    OPC_CaptureGlueInput,
/*   920*/    OPC_RecordChild1, // #1 = $dst
/*   921*/    OPC_Scope, 48|128,3/*432*/, /*->1356*/ // 2 children in Scope
/*   924*/      OPC_CheckChild1Type, MVT::i64,
/*   926*/      OPC_RecordChild2, // #2 = $imm
/*   927*/      OPC_Scope, 97|128,1/*225*/, /*->1155*/ // 2 children in Scope
/*   930*/        OPC_MoveChild2,
/*   931*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   934*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*   936*/        OPC_MoveParent,
/*   937*/        OPC_MoveChild3,
/*   938*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   941*/        OPC_CheckType, MVT::i64,
/*   943*/        OPC_Scope, 20, /*->965*/ // 10 children in Scope
/*   945*/          OPC_CheckPredicate, 12, // Predicate_BPF_CC_EQ
/*   947*/          OPC_MoveParent,
/*   948*/          OPC_RecordChild4, // #3 = $BrDst
/*   949*/          OPC_MoveChild4,
/*   950*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   953*/          OPC_MoveParent,
/*   954*/          OPC_EmitMergeInputChains1_0,
/*   955*/          OPC_EmitConvertToTarget, 2,
/*   957*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_EQ>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JEQ_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   965*/        /*Scope*/ 20, /*->986*/
/*   966*/          OPC_CheckPredicate, 13, // Predicate_BPF_CC_GTU
/*   968*/          OPC_MoveParent,
/*   969*/          OPC_RecordChild4, // #3 = $BrDst
/*   970*/          OPC_MoveChild4,
/*   971*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   974*/          OPC_MoveParent,
/*   975*/          OPC_EmitMergeInputChains1_0,
/*   976*/          OPC_EmitConvertToTarget, 2,
/*   978*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JUGT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   986*/        /*Scope*/ 20, /*->1007*/
/*   987*/          OPC_CheckPredicate, 14, // Predicate_BPF_CC_GEU
/*   989*/          OPC_MoveParent,
/*   990*/          OPC_RecordChild4, // #3 = $BrDst
/*   991*/          OPC_MoveChild4,
/*   992*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   995*/          OPC_MoveParent,
/*   996*/          OPC_EmitMergeInputChains1_0,
/*   997*/          OPC_EmitConvertToTarget, 2,
/*   999*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JUGE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1007*/        /*Scope*/ 20, /*->1028*/
/*  1008*/          OPC_CheckPredicate, 15, // Predicate_BPF_CC_NE
/*  1010*/          OPC_MoveParent,
/*  1011*/          OPC_RecordChild4, // #3 = $BrDst
/*  1012*/          OPC_MoveChild4,
/*  1013*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1016*/          OPC_MoveParent,
/*  1017*/          OPC_EmitMergeInputChains1_0,
/*  1018*/          OPC_EmitConvertToTarget, 2,
/*  1020*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_NE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JNE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1028*/        /*Scope*/ 20, /*->1049*/
/*  1029*/          OPC_CheckPredicate, 16, // Predicate_BPF_CC_GT
/*  1031*/          OPC_MoveParent,
/*  1032*/          OPC_RecordChild4, // #3 = $BrDst
/*  1033*/          OPC_MoveChild4,
/*  1034*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1037*/          OPC_MoveParent,
/*  1038*/          OPC_EmitMergeInputChains1_0,
/*  1039*/          OPC_EmitConvertToTarget, 2,
/*  1041*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JSGT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1049*/        /*Scope*/ 20, /*->1070*/
/*  1050*/          OPC_CheckPredicate, 17, // Predicate_BPF_CC_GE
/*  1052*/          OPC_MoveParent,
/*  1053*/          OPC_RecordChild4, // #3 = $BrDst
/*  1054*/          OPC_MoveChild4,
/*  1055*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1058*/          OPC_MoveParent,
/*  1059*/          OPC_EmitMergeInputChains1_0,
/*  1060*/          OPC_EmitConvertToTarget, 2,
/*  1062*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JSGE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1070*/        /*Scope*/ 20, /*->1091*/
/*  1071*/          OPC_CheckPredicate, 18, // Predicate_BPF_CC_LTU
/*  1073*/          OPC_MoveParent,
/*  1074*/          OPC_RecordChild4, // #3 = $BrDst
/*  1075*/          OPC_MoveChild4,
/*  1076*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1079*/          OPC_MoveParent,
/*  1080*/          OPC_EmitMergeInputChains1_0,
/*  1081*/          OPC_EmitConvertToTarget, 2,
/*  1083*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JULT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JULT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1091*/        /*Scope*/ 20, /*->1112*/
/*  1092*/          OPC_CheckPredicate, 19, // Predicate_BPF_CC_LEU
/*  1094*/          OPC_MoveParent,
/*  1095*/          OPC_RecordChild4, // #3 = $BrDst
/*  1096*/          OPC_MoveChild4,
/*  1097*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1100*/          OPC_MoveParent,
/*  1101*/          OPC_EmitMergeInputChains1_0,
/*  1102*/          OPC_EmitConvertToTarget, 2,
/*  1104*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JULE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JULE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1112*/        /*Scope*/ 20, /*->1133*/
/*  1113*/          OPC_CheckPredicate, 20, // Predicate_BPF_CC_LT
/*  1115*/          OPC_MoveParent,
/*  1116*/          OPC_RecordChild4, // #3 = $BrDst
/*  1117*/          OPC_MoveChild4,
/*  1118*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1121*/          OPC_MoveParent,
/*  1122*/          OPC_EmitMergeInputChains1_0,
/*  1123*/          OPC_EmitConvertToTarget, 2,
/*  1125*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JSLT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1133*/        /*Scope*/ 20, /*->1154*/
/*  1134*/          OPC_CheckPredicate, 21, // Predicate_BPF_CC_LE
/*  1136*/          OPC_MoveParent,
/*  1137*/          OPC_RecordChild4, // #3 = $BrDst
/*  1138*/          OPC_MoveChild4,
/*  1139*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1142*/          OPC_MoveParent,
/*  1143*/          OPC_EmitMergeInputChains1_0,
/*  1144*/          OPC_EmitConvertToTarget, 2,
/*  1146*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JSLE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1154*/        0, /*End of Scope*/
/*  1155*/      /*Scope*/ 70|128,1/*198*/, /*->1355*/
/*  1157*/        OPC_MoveChild3,
/*  1158*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1161*/        OPC_CheckType, MVT::i64,
/*  1163*/        OPC_Scope, 18, /*->1183*/ // 10 children in Scope
/*  1165*/          OPC_CheckPredicate, 12, // Predicate_BPF_CC_EQ
/*  1167*/          OPC_MoveParent,
/*  1168*/          OPC_RecordChild4, // #3 = $BrDst
/*  1169*/          OPC_MoveChild4,
/*  1170*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1173*/          OPC_MoveParent,
/*  1174*/          OPC_EmitMergeInputChains1_0,
/*  1175*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_EQ>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JEQ_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1183*/        /*Scope*/ 18, /*->1202*/
/*  1184*/          OPC_CheckPredicate, 13, // Predicate_BPF_CC_GTU
/*  1186*/          OPC_MoveParent,
/*  1187*/          OPC_RecordChild4, // #3 = $BrDst
/*  1188*/          OPC_MoveChild4,
/*  1189*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1192*/          OPC_MoveParent,
/*  1193*/          OPC_EmitMergeInputChains1_0,
/*  1194*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JUGT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1202*/        /*Scope*/ 18, /*->1221*/
/*  1203*/          OPC_CheckPredicate, 14, // Predicate_BPF_CC_GEU
/*  1205*/          OPC_MoveParent,
/*  1206*/          OPC_RecordChild4, // #3 = $BrDst
/*  1207*/          OPC_MoveChild4,
/*  1208*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1211*/          OPC_MoveParent,
/*  1212*/          OPC_EmitMergeInputChains1_0,
/*  1213*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JUGE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1221*/        /*Scope*/ 18, /*->1240*/
/*  1222*/          OPC_CheckPredicate, 15, // Predicate_BPF_CC_NE
/*  1224*/          OPC_MoveParent,
/*  1225*/          OPC_RecordChild4, // #3 = $BrDst
/*  1226*/          OPC_MoveChild4,
/*  1227*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1230*/          OPC_MoveParent,
/*  1231*/          OPC_EmitMergeInputChains1_0,
/*  1232*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_NE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JNE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1240*/        /*Scope*/ 18, /*->1259*/
/*  1241*/          OPC_CheckPredicate, 16, // Predicate_BPF_CC_GT
/*  1243*/          OPC_MoveParent,
/*  1244*/          OPC_RecordChild4, // #3 = $BrDst
/*  1245*/          OPC_MoveChild4,
/*  1246*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1249*/          OPC_MoveParent,
/*  1250*/          OPC_EmitMergeInputChains1_0,
/*  1251*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JSGT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1259*/        /*Scope*/ 18, /*->1278*/
/*  1260*/          OPC_CheckPredicate, 17, // Predicate_BPF_CC_GE
/*  1262*/          OPC_MoveParent,
/*  1263*/          OPC_RecordChild4, // #3 = $BrDst
/*  1264*/          OPC_MoveChild4,
/*  1265*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1268*/          OPC_MoveParent,
/*  1269*/          OPC_EmitMergeInputChains1_0,
/*  1270*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JSGE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1278*/        /*Scope*/ 18, /*->1297*/
/*  1279*/          OPC_CheckPredicate, 18, // Predicate_BPF_CC_LTU
/*  1281*/          OPC_MoveParent,
/*  1282*/          OPC_RecordChild4, // #3 = $BrDst
/*  1283*/          OPC_MoveChild4,
/*  1284*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1287*/          OPC_MoveParent,
/*  1288*/          OPC_EmitMergeInputChains1_0,
/*  1289*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JULT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JULT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1297*/        /*Scope*/ 18, /*->1316*/
/*  1298*/          OPC_CheckPredicate, 19, // Predicate_BPF_CC_LEU
/*  1300*/          OPC_MoveParent,
/*  1301*/          OPC_RecordChild4, // #3 = $BrDst
/*  1302*/          OPC_MoveChild4,
/*  1303*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1306*/          OPC_MoveParent,
/*  1307*/          OPC_EmitMergeInputChains1_0,
/*  1308*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JULE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JULE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1316*/        /*Scope*/ 18, /*->1335*/
/*  1317*/          OPC_CheckPredicate, 20, // Predicate_BPF_CC_LT
/*  1319*/          OPC_MoveParent,
/*  1320*/          OPC_RecordChild4, // #3 = $BrDst
/*  1321*/          OPC_MoveChild4,
/*  1322*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1325*/          OPC_MoveParent,
/*  1326*/          OPC_EmitMergeInputChains1_0,
/*  1327*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JSLT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1335*/        /*Scope*/ 18, /*->1354*/
/*  1336*/          OPC_CheckPredicate, 21, // Predicate_BPF_CC_LE
/*  1338*/          OPC_MoveParent,
/*  1339*/          OPC_RecordChild4, // #3 = $BrDst
/*  1340*/          OPC_MoveChild4,
/*  1341*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1344*/          OPC_MoveParent,
/*  1345*/          OPC_EmitMergeInputChains1_0,
/*  1346*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JSLE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1354*/        0, /*End of Scope*/
/*  1355*/      0, /*End of Scope*/
/*  1356*/    /*Scope*/ 48|128,3/*432*/, /*->1790*/
/*  1358*/      OPC_CheckChild1Type, MVT::i32,
/*  1360*/      OPC_RecordChild2, // #2 = $imm
/*  1361*/      OPC_Scope, 97|128,1/*225*/, /*->1589*/ // 2 children in Scope
/*  1364*/        OPC_MoveChild2,
/*  1365*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1368*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  1370*/        OPC_MoveParent,
/*  1371*/        OPC_MoveChild3,
/*  1372*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1375*/        OPC_CheckType, MVT::i32,
/*  1377*/        OPC_Scope, 20, /*->1399*/ // 10 children in Scope
/*  1379*/          OPC_CheckPredicate, 12, // Predicate_BPF_CC_EQ_32
/*  1381*/          OPC_MoveParent,
/*  1382*/          OPC_RecordChild4, // #3 = $BrDst
/*  1383*/          OPC_MoveChild4,
/*  1384*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1387*/          OPC_MoveParent,
/*  1388*/          OPC_EmitMergeInputChains1_0,
/*  1389*/          OPC_EmitConvertToTarget, 2,
/*  1391*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_EQ_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JEQ_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1399*/        /*Scope*/ 20, /*->1420*/
/*  1400*/          OPC_CheckPredicate, 13, // Predicate_BPF_CC_GTU_32
/*  1402*/          OPC_MoveParent,
/*  1403*/          OPC_RecordChild4, // #3 = $BrDst
/*  1404*/          OPC_MoveChild4,
/*  1405*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1408*/          OPC_MoveParent,
/*  1409*/          OPC_EmitMergeInputChains1_0,
/*  1410*/          OPC_EmitConvertToTarget, 2,
/*  1412*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_GTU_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JUGT_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1420*/        /*Scope*/ 20, /*->1441*/
/*  1421*/          OPC_CheckPredicate, 14, // Predicate_BPF_CC_GEU_32
/*  1423*/          OPC_MoveParent,
/*  1424*/          OPC_RecordChild4, // #3 = $BrDst
/*  1425*/          OPC_MoveChild4,
/*  1426*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1429*/          OPC_MoveParent,
/*  1430*/          OPC_EmitMergeInputChains1_0,
/*  1431*/          OPC_EmitConvertToTarget, 2,
/*  1433*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_GEU_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JUGE_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1441*/        /*Scope*/ 20, /*->1462*/
/*  1442*/          OPC_CheckPredicate, 15, // Predicate_BPF_CC_NE_32
/*  1444*/          OPC_MoveParent,
/*  1445*/          OPC_RecordChild4, // #3 = $BrDst
/*  1446*/          OPC_MoveChild4,
/*  1447*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1450*/          OPC_MoveParent,
/*  1451*/          OPC_EmitMergeInputChains1_0,
/*  1452*/          OPC_EmitConvertToTarget, 2,
/*  1454*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_NE_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JNE_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1462*/        /*Scope*/ 20, /*->1483*/
/*  1463*/          OPC_CheckPredicate, 16, // Predicate_BPF_CC_GT_32
/*  1465*/          OPC_MoveParent,
/*  1466*/          OPC_RecordChild4, // #3 = $BrDst
/*  1467*/          OPC_MoveChild4,
/*  1468*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1471*/          OPC_MoveParent,
/*  1472*/          OPC_EmitMergeInputChains1_0,
/*  1473*/          OPC_EmitConvertToTarget, 2,
/*  1475*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_GT_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JSGT_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1483*/        /*Scope*/ 20, /*->1504*/
/*  1484*/          OPC_CheckPredicate, 17, // Predicate_BPF_CC_GE_32
/*  1486*/          OPC_MoveParent,
/*  1487*/          OPC_RecordChild4, // #3 = $BrDst
/*  1488*/          OPC_MoveChild4,
/*  1489*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1492*/          OPC_MoveParent,
/*  1493*/          OPC_EmitMergeInputChains1_0,
/*  1494*/          OPC_EmitConvertToTarget, 2,
/*  1496*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_GE_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JSGE_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1504*/        /*Scope*/ 20, /*->1525*/
/*  1505*/          OPC_CheckPredicate, 18, // Predicate_BPF_CC_LTU_32
/*  1507*/          OPC_MoveParent,
/*  1508*/          OPC_RecordChild4, // #3 = $BrDst
/*  1509*/          OPC_MoveChild4,
/*  1510*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1513*/          OPC_MoveParent,
/*  1514*/          OPC_EmitMergeInputChains1_0,
/*  1515*/          OPC_EmitConvertToTarget, 2,
/*  1517*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JULT_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_LTU_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JULT_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1525*/        /*Scope*/ 20, /*->1546*/
/*  1526*/          OPC_CheckPredicate, 19, // Predicate_BPF_CC_LEU_32
/*  1528*/          OPC_MoveParent,
/*  1529*/          OPC_RecordChild4, // #3 = $BrDst
/*  1530*/          OPC_MoveChild4,
/*  1531*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1534*/          OPC_MoveParent,
/*  1535*/          OPC_EmitMergeInputChains1_0,
/*  1536*/          OPC_EmitConvertToTarget, 2,
/*  1538*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JULE_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_LEU_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JULE_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1546*/        /*Scope*/ 20, /*->1567*/
/*  1547*/          OPC_CheckPredicate, 20, // Predicate_BPF_CC_LT_32
/*  1549*/          OPC_MoveParent,
/*  1550*/          OPC_RecordChild4, // #3 = $BrDst
/*  1551*/          OPC_MoveChild4,
/*  1552*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1555*/          OPC_MoveParent,
/*  1556*/          OPC_EmitMergeInputChains1_0,
/*  1557*/          OPC_EmitConvertToTarget, 2,
/*  1559*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLT_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_LT_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JSLT_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1567*/        /*Scope*/ 20, /*->1588*/
/*  1568*/          OPC_CheckPredicate, 21, // Predicate_BPF_CC_LE_32
/*  1570*/          OPC_MoveParent,
/*  1571*/          OPC_RecordChild4, // #3 = $BrDst
/*  1572*/          OPC_MoveChild4,
/*  1573*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1576*/          OPC_MoveParent,
/*  1577*/          OPC_EmitMergeInputChains1_0,
/*  1578*/          OPC_EmitConvertToTarget, 2,
/*  1580*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLE_ri_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 4, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_LE_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                    // Dst: (JSLE_ri_32 i32:{ *:[i32] }:$dst, (imm:{ *:[i32] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1588*/        0, /*End of Scope*/
/*  1589*/      /*Scope*/ 70|128,1/*198*/, /*->1789*/
/*  1591*/        OPC_MoveChild3,
/*  1592*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1595*/        OPC_CheckType, MVT::i32,
/*  1597*/        OPC_Scope, 18, /*->1617*/ // 10 children in Scope
/*  1599*/          OPC_CheckPredicate, 12, // Predicate_BPF_CC_EQ_32
/*  1601*/          OPC_MoveParent,
/*  1602*/          OPC_RecordChild4, // #3 = $BrDst
/*  1603*/          OPC_MoveChild4,
/*  1604*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1607*/          OPC_MoveParent,
/*  1608*/          OPC_EmitMergeInputChains1_0,
/*  1609*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_EQ_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JEQ_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1617*/        /*Scope*/ 18, /*->1636*/
/*  1618*/          OPC_CheckPredicate, 13, // Predicate_BPF_CC_GTU_32
/*  1620*/          OPC_MoveParent,
/*  1621*/          OPC_RecordChild4, // #3 = $BrDst
/*  1622*/          OPC_MoveChild4,
/*  1623*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1626*/          OPC_MoveParent,
/*  1627*/          OPC_EmitMergeInputChains1_0,
/*  1628*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_GTU_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JUGT_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1636*/        /*Scope*/ 18, /*->1655*/
/*  1637*/          OPC_CheckPredicate, 14, // Predicate_BPF_CC_GEU_32
/*  1639*/          OPC_MoveParent,
/*  1640*/          OPC_RecordChild4, // #3 = $BrDst
/*  1641*/          OPC_MoveChild4,
/*  1642*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1645*/          OPC_MoveParent,
/*  1646*/          OPC_EmitMergeInputChains1_0,
/*  1647*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_GEU_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JUGE_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1655*/        /*Scope*/ 18, /*->1674*/
/*  1656*/          OPC_CheckPredicate, 15, // Predicate_BPF_CC_NE_32
/*  1658*/          OPC_MoveParent,
/*  1659*/          OPC_RecordChild4, // #3 = $BrDst
/*  1660*/          OPC_MoveChild4,
/*  1661*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1664*/          OPC_MoveParent,
/*  1665*/          OPC_EmitMergeInputChains1_0,
/*  1666*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_NE_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JNE_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1674*/        /*Scope*/ 18, /*->1693*/
/*  1675*/          OPC_CheckPredicate, 16, // Predicate_BPF_CC_GT_32
/*  1677*/          OPC_MoveParent,
/*  1678*/          OPC_RecordChild4, // #3 = $BrDst
/*  1679*/          OPC_MoveChild4,
/*  1680*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1683*/          OPC_MoveParent,
/*  1684*/          OPC_EmitMergeInputChains1_0,
/*  1685*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_GT_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JSGT_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1693*/        /*Scope*/ 18, /*->1712*/
/*  1694*/          OPC_CheckPredicate, 17, // Predicate_BPF_CC_GE_32
/*  1696*/          OPC_MoveParent,
/*  1697*/          OPC_RecordChild4, // #3 = $BrDst
/*  1698*/          OPC_MoveChild4,
/*  1699*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1702*/          OPC_MoveParent,
/*  1703*/          OPC_EmitMergeInputChains1_0,
/*  1704*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_GE_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JSGE_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1712*/        /*Scope*/ 18, /*->1731*/
/*  1713*/          OPC_CheckPredicate, 18, // Predicate_BPF_CC_LTU_32
/*  1715*/          OPC_MoveParent,
/*  1716*/          OPC_RecordChild4, // #3 = $BrDst
/*  1717*/          OPC_MoveChild4,
/*  1718*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1721*/          OPC_MoveParent,
/*  1722*/          OPC_EmitMergeInputChains1_0,
/*  1723*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JULT_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_LTU_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JULT_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1731*/        /*Scope*/ 18, /*->1750*/
/*  1732*/          OPC_CheckPredicate, 19, // Predicate_BPF_CC_LEU_32
/*  1734*/          OPC_MoveParent,
/*  1735*/          OPC_RecordChild4, // #3 = $BrDst
/*  1736*/          OPC_MoveChild4,
/*  1737*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1740*/          OPC_MoveParent,
/*  1741*/          OPC_EmitMergeInputChains1_0,
/*  1742*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JULE_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_LEU_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JULE_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1750*/        /*Scope*/ 18, /*->1769*/
/*  1751*/          OPC_CheckPredicate, 20, // Predicate_BPF_CC_LT_32
/*  1753*/          OPC_MoveParent,
/*  1754*/          OPC_RecordChild4, // #3 = $BrDst
/*  1755*/          OPC_MoveChild4,
/*  1756*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1759*/          OPC_MoveParent,
/*  1760*/          OPC_EmitMergeInputChains1_0,
/*  1761*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLT_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_LT_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JSLT_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1769*/        /*Scope*/ 18, /*->1788*/
/*  1770*/          OPC_CheckPredicate, 21, // Predicate_BPF_CC_LE_32
/*  1772*/          OPC_MoveParent,
/*  1773*/          OPC_RecordChild4, // #3 = $BrDst
/*  1774*/          OPC_MoveChild4,
/*  1775*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1778*/          OPC_MoveParent,
/*  1779*/          OPC_EmitMergeInputChains1_0,
/*  1780*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLE_rr_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                        3/*#Ops*/, 1, 2, 3, 
                    // Src: (BPFbrcc i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (imm:{ *:[i32] })<<P:Predicate_BPF_CC_LE_32>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                    // Dst: (JSLE_rr_32 i32:{ *:[i32] }:$dst, i32:{ *:[i32] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1788*/        0, /*End of Scope*/
/*  1789*/      0, /*End of Scope*/
/*  1790*/    0, /*End of Scope*/
/*  1791*/  /*SwitchOpcode*/ 11|128,1/*139*/, TARGET_VAL(ISD::SRL),// ->1934
/*  1795*/    OPC_Scope, 64, /*->1861*/ // 2 children in Scope
/*  1797*/      OPC_MoveChild0,
/*  1798*/      OPC_CheckOpcode, TARGET_VAL(ISD::BSWAP),
/*  1801*/      OPC_RecordChild0, // #0 = $src
/*  1802*/      OPC_MoveParent,
/*  1803*/      OPC_CheckType, MVT::i64,
/*  1805*/      OPC_Scope, 26, /*->1833*/ // 2 children in Scope
/*  1807*/        OPC_CheckChild1Integer, 48, 
/*  1809*/        OPC_CheckChild1Type, MVT::i64,
/*  1811*/        OPC_Scope, 9, /*->1822*/ // 2 children in Scope
/*  1813*/          OPC_CheckPatternPredicate, 2, // (CurDAG->getDataLayout().isLittleEndian())
/*  1815*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::BE16), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 48:{ *:[i64] }) - Complexity = 11
                    // Dst: (BE16:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1822*/        /*Scope*/ 9, /*->1832*/
/*  1823*/          OPC_CheckPatternPredicate, 3, // (!CurDAG->getDataLayout().isLittleEndian())
/*  1825*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LE16), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 48:{ *:[i64] }) - Complexity = 11
                    // Dst: (LE16:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1832*/        0, /*End of Scope*/
/*  1833*/      /*Scope*/ 26, /*->1860*/
/*  1834*/        OPC_CheckChild1Integer, 32, 
/*  1836*/        OPC_CheckChild1Type, MVT::i64,
/*  1838*/        OPC_Scope, 9, /*->1849*/ // 2 children in Scope
/*  1840*/          OPC_CheckPatternPredicate, 2, // (CurDAG->getDataLayout().isLittleEndian())
/*  1842*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::BE32), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 32:{ *:[i64] }) - Complexity = 11
                    // Dst: (BE32:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1849*/        /*Scope*/ 9, /*->1859*/
/*  1850*/          OPC_CheckPatternPredicate, 3, // (!CurDAG->getDataLayout().isLittleEndian())
/*  1852*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LE32), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 32:{ *:[i64] }) - Complexity = 11
                    // Dst: (LE32:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1859*/        0, /*End of Scope*/
/*  1860*/      0, /*End of Scope*/
/*  1861*/    /*Scope*/ 71, /*->1933*/
/*  1862*/      OPC_RecordChild0, // #0 = $src2
/*  1863*/      OPC_RecordChild1, // #1 = $imm
/*  1864*/      OPC_Scope, 40, /*->1906*/ // 3 children in Scope
/*  1866*/        OPC_MoveChild1,
/*  1867*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1870*/        OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->1888
/*  1873*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1875*/          OPC_MoveParent,
/*  1876*/          OPC_CheckType, MVT::i64,
/*  1878*/          OPC_EmitConvertToTarget, 1,
/*  1880*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (srl:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (SRL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1888*/        /*SwitchType*/ 15, MVT::i32,// ->1905
/*  1890*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  1892*/          OPC_MoveParent,
/*  1893*/          OPC_CheckType, MVT::i32,
/*  1895*/          OPC_EmitConvertToTarget, 1,
/*  1897*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (srl:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (SRL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  1905*/        0, // EndSwitchType
/*  1906*/      /*Scope*/ 12, /*->1919*/
/*  1907*/        OPC_CheckChild1Type, MVT::i64,
/*  1909*/        OPC_CheckType, MVT::i64,
/*  1911*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (SRL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1919*/      /*Scope*/ 12, /*->1932*/
/*  1920*/        OPC_CheckChild1Type, MVT::i32,
/*  1922*/        OPC_CheckType, MVT::i32,
/*  1924*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (SRL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1932*/      0, /*End of Scope*/
/*  1933*/    0, /*End of Scope*/
/*  1934*/  /*SwitchOpcode*/ 82|128,1/*210*/, TARGET_VAL(BPFISD::SELECT_CC),// ->2148
/*  1938*/    OPC_CaptureGlueInput,
/*  1939*/    OPC_RecordChild0, // #0 = $lhs
/*  1940*/    OPC_Scope, 102, /*->2044*/ // 2 children in Scope
/*  1942*/      OPC_CheckChild0Type, MVT::i64,
/*  1944*/      OPC_RecordChild1, // #1 = $rhs
/*  1945*/      OPC_Scope, 53, /*->2000*/ // 2 children in Scope
/*  1947*/        OPC_MoveChild1,
/*  1948*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1951*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1953*/        OPC_MoveParent,
/*  1954*/        OPC_RecordChild2, // #2 = $imm
/*  1955*/        OPC_MoveChild2,
/*  1956*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1959*/        OPC_CheckType, MVT::i64,
/*  1961*/        OPC_MoveParent,
/*  1962*/        OPC_RecordChild3, // #3 = $src
/*  1963*/        OPC_RecordChild4, // #4 = $src2
/*  1964*/        OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->1982
/*  1967*/          OPC_EmitConvertToTarget, 1,
/*  1969*/          OPC_EmitConvertToTarget, 2,
/*  1971*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri), 0|OPFL_GlueInput,
                        MVT::i64, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i64] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 10
                    // Dst: (Select_Ri:{ *:[i64] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] }):$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  1982*/        /*SwitchType*/ 15, MVT::i32,// ->1999
/*  1984*/          OPC_EmitConvertToTarget, 1,
/*  1986*/          OPC_EmitConvertToTarget, 2,
/*  1988*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri_64_32), 0|OPFL_GlueInput,
                        MVT::i32, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i32] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$rhs, (imm:{ *:[i64] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2) - Complexity = 10
                    // Dst: (Select_Ri_64_32:{ *:[i32] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] }):$rhs, (imm:{ *:[i64] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2)
/*  1999*/        0, // EndSwitchType
/*  2000*/      /*Scope*/ 42, /*->2043*/
/*  2001*/        OPC_RecordChild2, // #2 = $imm
/*  2002*/        OPC_MoveChild2,
/*  2003*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2006*/        OPC_CheckType, MVT::i64,
/*  2008*/        OPC_MoveParent,
/*  2009*/        OPC_RecordChild3, // #3 = $src
/*  2010*/        OPC_RecordChild4, // #4 = $src2
/*  2011*/        OPC_SwitchType /*2 cases */, 13, MVT::i64,// ->2027
/*  2014*/          OPC_EmitConvertToTarget, 2,
/*  2016*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select), 0|OPFL_GlueInput,
                        MVT::i64, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i64] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 6
                    // Dst: (Select:{ *:[i64] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  2027*/        /*SwitchType*/ 13, MVT::i32,// ->2042
/*  2029*/          OPC_EmitConvertToTarget, 2,
/*  2031*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_64_32), 0|OPFL_GlueInput,
                        MVT::i32, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i32] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2) - Complexity = 6
                    // Dst: (Select_64_32:{ *:[i32] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2)
/*  2042*/        0, // EndSwitchType
/*  2043*/      0, /*End of Scope*/
/*  2044*/    /*Scope*/ 102, /*->2147*/
/*  2045*/      OPC_CheckChild0Type, MVT::i32,
/*  2047*/      OPC_RecordChild1, // #1 = $rhs
/*  2048*/      OPC_Scope, 53, /*->2103*/ // 2 children in Scope
/*  2050*/        OPC_MoveChild1,
/*  2051*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2054*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2056*/        OPC_MoveParent,
/*  2057*/        OPC_RecordChild2, // #2 = $imm
/*  2058*/        OPC_MoveChild2,
/*  2059*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2062*/        OPC_CheckType, MVT::i32,
/*  2064*/        OPC_MoveParent,
/*  2065*/        OPC_RecordChild3, // #3 = $src
/*  2066*/        OPC_RecordChild4, // #4 = $src2
/*  2067*/        OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->2085
/*  2070*/          OPC_EmitConvertToTarget, 1,
/*  2072*/          OPC_EmitConvertToTarget, 2,
/*  2074*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri_32), 0|OPFL_GlueInput,
                        MVT::i32, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i32] } i32:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$rhs, (imm:{ *:[i32] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2) - Complexity = 10
                    // Dst: (Select_Ri_32:{ *:[i32] } i32:{ *:[i32] }:$lhs, (imm:{ *:[i32] }):$rhs, (imm:{ *:[i32] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2)
/*  2085*/        /*SwitchType*/ 15, MVT::i64,// ->2102
/*  2087*/          OPC_EmitConvertToTarget, 1,
/*  2089*/          OPC_EmitConvertToTarget, 2,
/*  2091*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri_32_64), 0|OPFL_GlueInput,
                        MVT::i64, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i64] } i32:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$rhs, (imm:{ *:[i32] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 10
                    // Dst: (Select_Ri_32_64:{ *:[i64] } i32:{ *:[i32] }:$lhs, (imm:{ *:[i32] }):$rhs, (imm:{ *:[i32] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  2102*/        0, // EndSwitchType
/*  2103*/      /*Scope*/ 42, /*->2146*/
/*  2104*/        OPC_RecordChild2, // #2 = $imm
/*  2105*/        OPC_MoveChild2,
/*  2106*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2109*/        OPC_CheckType, MVT::i32,
/*  2111*/        OPC_MoveParent,
/*  2112*/        OPC_RecordChild3, // #3 = $src
/*  2113*/        OPC_RecordChild4, // #4 = $src2
/*  2114*/        OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->2130
/*  2117*/          OPC_EmitConvertToTarget, 2,
/*  2119*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_32), 0|OPFL_GlueInput,
                        MVT::i32, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i32] } i32:{ *:[i32] }:$lhs, i32:{ *:[i32] }:$rhs, (imm:{ *:[i32] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2) - Complexity = 6
                    // Dst: (Select_32:{ *:[i32] } i32:{ *:[i32] }:$lhs, i32:{ *:[i32] }:$rhs, (imm:{ *:[i32] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2)
/*  2130*/        /*SwitchType*/ 13, MVT::i64,// ->2145
/*  2132*/          OPC_EmitConvertToTarget, 2,
/*  2134*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_32_64), 0|OPFL_GlueInput,
                        MVT::i64, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i64] } i32:{ *:[i32] }:$lhs, i32:{ *:[i32] }:$rhs, (imm:{ *:[i32] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 6
                    // Dst: (Select_32_64:{ *:[i64] } i32:{ *:[i32] }:$lhs, i32:{ *:[i32] }:$rhs, (imm:{ *:[i32] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  2145*/        0, // EndSwitchType
/*  2146*/      0, /*End of Scope*/
/*  2147*/    0, /*End of Scope*/
/*  2148*/  /*SwitchOpcode*/ 83, TARGET_VAL(ISD::ADD),// ->2234
/*  2151*/    OPC_Scope, 14, /*->2167*/ // 2 children in Scope
/*  2153*/      OPC_RecordNode, // #0 = $addr
/*  2154*/      OPC_CheckType, MVT::i64,
/*  2156*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectFIAddr:$addr #1 #2
/*  2159*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::FI_ri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: FIri:{ *:[i64] }:$addr - Complexity = 9
                // Dst: (FI_ri:{ *:[i64] } FIri:{ *:[i64] }:$addr)
/*  2167*/    /*Scope*/ 65, /*->2233*/
/*  2168*/      OPC_RecordChild0, // #0 = $src2
/*  2169*/      OPC_RecordChild1, // #1 = $imm
/*  2170*/      OPC_Scope, 38, /*->2210*/ // 3 children in Scope
/*  2172*/        OPC_MoveChild1,
/*  2173*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2176*/        OPC_Scope, 15, /*->2193*/ // 2 children in Scope
/*  2178*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2180*/          OPC_MoveParent,
/*  2181*/          OPC_CheckType, MVT::i64,
/*  2183*/          OPC_EmitConvertToTarget, 1,
/*  2185*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (ADD_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2193*/        /*Scope*/ 15, /*->2209*/
/*  2194*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2196*/          OPC_MoveParent,
/*  2197*/          OPC_CheckType, MVT::i32,
/*  2199*/          OPC_EmitConvertToTarget, 1,
/*  2201*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (ADD_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2209*/        0, /*End of Scope*/
/*  2210*/      /*Scope*/ 10, /*->2221*/
/*  2211*/        OPC_CheckType, MVT::i64,
/*  2213*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (ADD_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2221*/      /*Scope*/ 10, /*->2232*/
/*  2222*/        OPC_CheckType, MVT::i32,
/*  2224*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (ADD_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2232*/      0, /*End of Scope*/
/*  2233*/    0, /*End of Scope*/
/*  2234*/  /*SwitchOpcode*/ 83, TARGET_VAL(ISD::OR),// ->2320
/*  2237*/    OPC_Scope, 14, /*->2253*/ // 2 children in Scope
/*  2239*/      OPC_RecordNode, // #0 = $addr
/*  2240*/      OPC_CheckType, MVT::i64,
/*  2242*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectFIAddr:$addr #1 #2
/*  2245*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::FI_ri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: FIri:{ *:[i64] }:$addr - Complexity = 9
                // Dst: (FI_ri:{ *:[i64] } FIri:{ *:[i64] }:$addr)
/*  2253*/    /*Scope*/ 65, /*->2319*/
/*  2254*/      OPC_RecordChild0, // #0 = $src2
/*  2255*/      OPC_RecordChild1, // #1 = $imm
/*  2256*/      OPC_Scope, 38, /*->2296*/ // 3 children in Scope
/*  2258*/        OPC_MoveChild1,
/*  2259*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2262*/        OPC_Scope, 15, /*->2279*/ // 2 children in Scope
/*  2264*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2266*/          OPC_MoveParent,
/*  2267*/          OPC_CheckType, MVT::i64,
/*  2269*/          OPC_EmitConvertToTarget, 1,
/*  2271*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (OR_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2279*/        /*Scope*/ 15, /*->2295*/
/*  2280*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2282*/          OPC_MoveParent,
/*  2283*/          OPC_CheckType, MVT::i32,
/*  2285*/          OPC_EmitConvertToTarget, 1,
/*  2287*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (OR_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2295*/        0, /*End of Scope*/
/*  2296*/      /*Scope*/ 10, /*->2307*/
/*  2297*/        OPC_CheckType, MVT::i64,
/*  2299*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (OR_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2307*/      /*Scope*/ 10, /*->2318*/
/*  2308*/        OPC_CheckType, MVT::i32,
/*  2310*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (OR_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2318*/      0, /*End of Scope*/
/*  2319*/    0, /*End of Scope*/
/*  2320*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_START),// ->2345
/*  2323*/    OPC_RecordNode, // #0 = 'BPFcallseq_start' chained node
/*  2324*/    OPC_RecordChild1, // #1 = $amt1
/*  2325*/    OPC_MoveChild1,
/*  2326*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  2329*/    OPC_MoveParent,
/*  2330*/    OPC_RecordChild2, // #2 = $amt2
/*  2331*/    OPC_MoveChild2,
/*  2332*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  2335*/    OPC_MoveParent,
/*  2336*/    OPC_EmitMergeInputChains1_0,
/*  2337*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (BPFcallseq_start (timm:{ *:[iPTR] }):$amt1, (timm:{ *:[iPTR] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:{ *:[i64] } (timm:{ *:[i64] }):$amt1, (timm:{ *:[i64] }):$amt2)
/*  2345*/  /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->2371
/*  2348*/    OPC_RecordNode, // #0 = 'BPFcallseq_end' chained node
/*  2349*/    OPC_CaptureGlueInput,
/*  2350*/    OPC_RecordChild1, // #1 = $amt1
/*  2351*/    OPC_MoveChild1,
/*  2352*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  2355*/    OPC_MoveParent,
/*  2356*/    OPC_RecordChild2, // #2 = $amt2
/*  2357*/    OPC_MoveChild2,
/*  2358*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  2361*/    OPC_MoveParent,
/*  2362*/    OPC_EmitMergeInputChains1_0,
/*  2363*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (BPFcallseq_end (timm:{ *:[iPTR] }):$amt1, (timm:{ *:[iPTR] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:{ *:[i64] } (timm:{ *:[i64] }):$amt1, (timm:{ *:[i64] }):$amt2)
/*  2371*/  /*SwitchOpcode*/ 30, TARGET_VAL(BPFISD::MEMCPY),// ->2404
/*  2374*/    OPC_RecordNode, // #0 = 'BPFmemcpy' chained node
/*  2375*/    OPC_CaptureGlueInput,
/*  2376*/    OPC_RecordChild1, // #1 = $dst
/*  2377*/    OPC_RecordChild2, // #2 = $src
/*  2378*/    OPC_RecordChild3, // #3 = $len
/*  2379*/    OPC_MoveChild3,
/*  2380*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2383*/    OPC_MoveParent,
/*  2384*/    OPC_RecordChild4, // #4 = $align
/*  2385*/    OPC_MoveChild4,
/*  2386*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2389*/    OPC_MoveParent,
/*  2390*/    OPC_EmitMergeInputChains1_0,
/*  2391*/    OPC_EmitConvertToTarget, 3,
/*  2393*/    OPC_EmitConvertToTarget, 4,
/*  2395*/    OPC_MorphNodeTo0, TARGET_VAL(BPF::MEMCPY), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  4/*#Ops*/, 1, 2, 5, 6, 
              // Src: (BPFmemcpy GPR:{ *:[i64] }:$dst, GPR:{ *:[i64] }:$src, (imm:{ *:[i64] }):$len, (imm:{ *:[i64] }):$align) - Complexity = 9
              // Dst: (MEMCPY GPR:{ *:[i64] }:$dst, GPR:{ *:[i64] }:$src, (imm:{ *:[i64] }):$len, (imm:{ *:[i64] }):$align)
/*  2404*/  /*SwitchOpcode*/ 92, TARGET_VAL(ISD::SUB),// ->2499
/*  2407*/    OPC_Scope, 23, /*->2432*/ // 2 children in Scope
/*  2409*/      OPC_CheckChild0Integer, 0, 
/*  2411*/      OPC_RecordChild1, // #0 = $src
/*  2412*/      OPC_SwitchType /*2 cases */, 7, MVT::i64,// ->2422
/*  2415*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::NEG_64), 0,
                      MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i64] } 0:{ *:[i64] }, i64:{ *:[i64] }:$src) - Complexity = 8
                  // Dst: (NEG_64:{ *:[i64] } i64:{ *:[i64] }:$src)
/*  2422*/      /*SwitchType*/ 7, MVT::i32,// ->2431
/*  2424*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::NEG_32), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i32] } 0:{ *:[i32] }, i32:{ *:[i32] }:$src) - Complexity = 8
                  // Dst: (NEG_32:{ *:[i32] } i32:{ *:[i32] }:$src)
/*  2431*/      0, // EndSwitchType
/*  2432*/    /*Scope*/ 65, /*->2498*/
/*  2433*/      OPC_RecordChild0, // #0 = $src2
/*  2434*/      OPC_RecordChild1, // #1 = $imm
/*  2435*/      OPC_Scope, 38, /*->2475*/ // 3 children in Scope
/*  2437*/        OPC_MoveChild1,
/*  2438*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2441*/        OPC_Scope, 15, /*->2458*/ // 2 children in Scope
/*  2443*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2445*/          OPC_MoveParent,
/*  2446*/          OPC_CheckType, MVT::i64,
/*  2448*/          OPC_EmitConvertToTarget, 1,
/*  2450*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (SUB_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2458*/        /*Scope*/ 15, /*->2474*/
/*  2459*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2461*/          OPC_MoveParent,
/*  2462*/          OPC_CheckType, MVT::i32,
/*  2464*/          OPC_EmitConvertToTarget, 1,
/*  2466*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (SUB_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2474*/        0, /*End of Scope*/
/*  2475*/      /*Scope*/ 10, /*->2486*/
/*  2476*/        OPC_CheckType, MVT::i64,
/*  2478*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (SUB_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2486*/      /*Scope*/ 10, /*->2497*/
/*  2487*/        OPC_CheckType, MVT::i32,
/*  2489*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (SUB_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2497*/      0, /*End of Scope*/
/*  2498*/    0, /*End of Scope*/
/*  2499*/  /*SwitchOpcode*/ 100, TARGET_VAL(ISD::AND),// ->2602
/*  2502*/    OPC_Scope, 31, /*->2535*/ // 2 children in Scope
/*  2504*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*  2510*/      OPC_RecordChild0, // #0 = $src
/*  2511*/      OPC_CheckType, MVT::i64,
/*  2513*/      OPC_EmitInteger, MVT::i64, 32, 
/*  2516*/      OPC_EmitNode1, TARGET_VAL(BPF::SLL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*  2524*/      OPC_EmitInteger, MVT::i64, 32, 
/*  2527*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (and:{ *:[i64] } GPR:{ *:[i64] }:$src, 4294967295:{ *:[i64] }) - Complexity = 8
                // Dst: (SRL_ri:{ *:[i64] } (SLL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src, 32:{ *:[i64] }), 32:{ *:[i64] })
/*  2535*/    /*Scope*/ 65, /*->2601*/
/*  2536*/      OPC_RecordChild0, // #0 = $src2
/*  2537*/      OPC_RecordChild1, // #1 = $imm
/*  2538*/      OPC_Scope, 38, /*->2578*/ // 3 children in Scope
/*  2540*/        OPC_MoveChild1,
/*  2541*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2544*/        OPC_Scope, 15, /*->2561*/ // 2 children in Scope
/*  2546*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2548*/          OPC_MoveParent,
/*  2549*/          OPC_CheckType, MVT::i64,
/*  2551*/          OPC_EmitConvertToTarget, 1,
/*  2553*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (AND_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2561*/        /*Scope*/ 15, /*->2577*/
/*  2562*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2564*/          OPC_MoveParent,
/*  2565*/          OPC_CheckType, MVT::i32,
/*  2567*/          OPC_EmitConvertToTarget, 1,
/*  2569*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (AND_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2577*/        0, /*End of Scope*/
/*  2578*/      /*Scope*/ 10, /*->2589*/
/*  2579*/        OPC_CheckType, MVT::i64,
/*  2581*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (AND_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2589*/      /*Scope*/ 10, /*->2600*/
/*  2590*/        OPC_CheckType, MVT::i32,
/*  2592*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (AND_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2600*/      0, /*End of Scope*/
/*  2601*/    0, /*End of Scope*/
/*  2602*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::SHL),// ->2676
/*  2605*/    OPC_RecordChild0, // #0 = $src2
/*  2606*/    OPC_RecordChild1, // #1 = $imm
/*  2607*/    OPC_Scope, 40, /*->2649*/ // 3 children in Scope
/*  2609*/      OPC_MoveChild1,
/*  2610*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2613*/      OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->2631
/*  2616*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2618*/        OPC_MoveParent,
/*  2619*/        OPC_CheckType, MVT::i64,
/*  2621*/        OPC_EmitConvertToTarget, 1,
/*  2623*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SLL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2631*/      /*SwitchType*/ 15, MVT::i32,// ->2648
/*  2633*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2635*/        OPC_MoveParent,
/*  2636*/        OPC_CheckType, MVT::i32,
/*  2638*/        OPC_EmitConvertToTarget, 1,
/*  2640*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SLL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2648*/      0, // EndSwitchType
/*  2649*/    /*Scope*/ 12, /*->2662*/
/*  2650*/      OPC_CheckChild1Type, MVT::i64,
/*  2652*/      OPC_CheckType, MVT::i64,
/*  2654*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (SLL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2662*/    /*Scope*/ 12, /*->2675*/
/*  2663*/      OPC_CheckChild1Type, MVT::i32,
/*  2665*/      OPC_CheckType, MVT::i32,
/*  2667*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (SLL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2675*/    0, /*End of Scope*/
/*  2676*/  /*SwitchOpcode*/ 65, TARGET_VAL(ISD::XOR),// ->2744
/*  2679*/    OPC_RecordChild0, // #0 = $src2
/*  2680*/    OPC_RecordChild1, // #1 = $imm
/*  2681*/    OPC_Scope, 38, /*->2721*/ // 3 children in Scope
/*  2683*/      OPC_MoveChild1,
/*  2684*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2687*/      OPC_Scope, 15, /*->2704*/ // 2 children in Scope
/*  2689*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2691*/        OPC_MoveParent,
/*  2692*/        OPC_CheckType, MVT::i64,
/*  2694*/        OPC_EmitConvertToTarget, 1,
/*  2696*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (XOR_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2704*/      /*Scope*/ 15, /*->2720*/
/*  2705*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2707*/        OPC_MoveParent,
/*  2708*/        OPC_CheckType, MVT::i32,
/*  2710*/        OPC_EmitConvertToTarget, 1,
/*  2712*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (XOR_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2720*/      0, /*End of Scope*/
/*  2721*/    /*Scope*/ 10, /*->2732*/
/*  2722*/      OPC_CheckType, MVT::i64,
/*  2724*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (XOR_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2732*/    /*Scope*/ 10, /*->2743*/
/*  2733*/      OPC_CheckType, MVT::i32,
/*  2735*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (XOR_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2743*/    0, /*End of Scope*/
/*  2744*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::SRA),// ->2818
/*  2747*/    OPC_RecordChild0, // #0 = $src2
/*  2748*/    OPC_RecordChild1, // #1 = $imm
/*  2749*/    OPC_Scope, 40, /*->2791*/ // 3 children in Scope
/*  2751*/      OPC_MoveChild1,
/*  2752*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2755*/      OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->2773
/*  2758*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2760*/        OPC_MoveParent,
/*  2761*/        OPC_CheckType, MVT::i64,
/*  2763*/        OPC_EmitConvertToTarget, 1,
/*  2765*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SRA_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2773*/      /*SwitchType*/ 15, MVT::i32,// ->2790
/*  2775*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2777*/        OPC_MoveParent,
/*  2778*/        OPC_CheckType, MVT::i32,
/*  2780*/        OPC_EmitConvertToTarget, 1,
/*  2782*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SRA_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2790*/      0, // EndSwitchType
/*  2791*/    /*Scope*/ 12, /*->2804*/
/*  2792*/      OPC_CheckChild1Type, MVT::i64,
/*  2794*/      OPC_CheckType, MVT::i64,
/*  2796*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (SRA_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2804*/    /*Scope*/ 12, /*->2817*/
/*  2805*/      OPC_CheckChild1Type, MVT::i32,
/*  2807*/      OPC_CheckType, MVT::i32,
/*  2809*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (SRA_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2817*/    0, /*End of Scope*/
/*  2818*/  /*SwitchOpcode*/ 65, TARGET_VAL(ISD::MUL),// ->2886
/*  2821*/    OPC_RecordChild0, // #0 = $src2
/*  2822*/    OPC_RecordChild1, // #1 = $imm
/*  2823*/    OPC_Scope, 38, /*->2863*/ // 3 children in Scope
/*  2825*/      OPC_MoveChild1,
/*  2826*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2829*/      OPC_Scope, 15, /*->2846*/ // 2 children in Scope
/*  2831*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2833*/        OPC_MoveParent,
/*  2834*/        OPC_CheckType, MVT::i64,
/*  2836*/        OPC_EmitConvertToTarget, 1,
/*  2838*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (MUL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2846*/      /*Scope*/ 15, /*->2862*/
/*  2847*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2849*/        OPC_MoveParent,
/*  2850*/        OPC_CheckType, MVT::i32,
/*  2852*/        OPC_EmitConvertToTarget, 1,
/*  2854*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (MUL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2862*/      0, /*End of Scope*/
/*  2863*/    /*Scope*/ 10, /*->2874*/
/*  2864*/      OPC_CheckType, MVT::i64,
/*  2866*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (MUL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2874*/    /*Scope*/ 10, /*->2885*/
/*  2875*/      OPC_CheckType, MVT::i32,
/*  2877*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (MUL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2885*/    0, /*End of Scope*/
/*  2886*/  /*SwitchOpcode*/ 65, TARGET_VAL(ISD::UDIV),// ->2954
/*  2889*/    OPC_RecordChild0, // #0 = $src2
/*  2890*/    OPC_RecordChild1, // #1 = $imm
/*  2891*/    OPC_Scope, 38, /*->2931*/ // 3 children in Scope
/*  2893*/      OPC_MoveChild1,
/*  2894*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2897*/      OPC_Scope, 15, /*->2914*/ // 2 children in Scope
/*  2899*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2901*/        OPC_MoveParent,
/*  2902*/        OPC_CheckType, MVT::i64,
/*  2904*/        OPC_EmitConvertToTarget, 1,
/*  2906*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (udiv:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (DIV_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2914*/      /*Scope*/ 15, /*->2930*/
/*  2915*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2917*/        OPC_MoveParent,
/*  2918*/        OPC_CheckType, MVT::i32,
/*  2920*/        OPC_EmitConvertToTarget, 1,
/*  2922*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (udiv:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (DIV_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2930*/      0, /*End of Scope*/
/*  2931*/    /*Scope*/ 10, /*->2942*/
/*  2932*/      OPC_CheckType, MVT::i64,
/*  2934*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (DIV_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2942*/    /*Scope*/ 10, /*->2953*/
/*  2943*/      OPC_CheckType, MVT::i32,
/*  2945*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (DIV_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2953*/    0, /*End of Scope*/
/*  2954*/  /*SwitchOpcode*/ 15, TARGET_VAL(BPFISD::Wrapper),// ->2972
/*  2957*/    OPC_RecordChild0, // #0 = $in
/*  2958*/    OPC_MoveChild0,
/*  2959*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*  2962*/    OPC_MoveParent,
/*  2963*/    OPC_CheckType, MVT::i64,
/*  2965*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_imm64), 0,
                  MVT::i64, 1/*#Ops*/, 0, 
              // Src: (BPFWrapper:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in) - Complexity = 6
              // Dst: (LD_imm64:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in)
/*  2972*/  /*SwitchOpcode*/ 58, TARGET_VAL(BPFISD::CALL),// ->3033
/*  2975*/    OPC_RecordNode, // #0 = 'BPFcall' chained node
/*  2976*/    OPC_CaptureGlueInput,
/*  2977*/    OPC_RecordChild1, // #1 = $dst
/*  2978*/    OPC_Scope, 41, /*->3021*/ // 2 children in Scope
/*  2980*/      OPC_MoveChild1,
/*  2981*/      OPC_SwitchOpcode /*3 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->2994
/*  2985*/        OPC_MoveParent,
/*  2986*/        OPC_EmitMergeInputChains1_0,
/*  2987*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (BPFcall (tglobaladdr:{ *:[iPTR] }):$dst) - Complexity = 6
                  // Dst: (JAL:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$dst)
/*  2994*/      /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->3006
/*  2997*/        OPC_MoveParent,
/*  2998*/        OPC_EmitMergeInputChains1_0,
/*  2999*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (BPFcall (texternalsym:{ *:[iPTR] }):$dst) - Complexity = 6
                  // Dst: (JAL:{ *:[i64] } (texternalsym:{ *:[i64] }):$dst)
/*  3006*/      /*SwitchOpcode*/ 11, TARGET_VAL(ISD::Constant),// ->3020
/*  3009*/        OPC_MoveParent,
/*  3010*/        OPC_EmitMergeInputChains1_0,
/*  3011*/        OPC_EmitConvertToTarget, 1,
/*  3013*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (BPFcall (imm:{ *:[iPTR] }):$dst) - Complexity = 6
                  // Dst: (JAL:{ *:[i64] } (imm:{ *:[i64] }):$dst)
/*  3020*/      0, // EndSwitchOpcode
/*  3021*/    /*Scope*/ 10, /*->3032*/
/*  3022*/      OPC_CheckChild1Type, MVT::i64,
/*  3024*/      OPC_EmitMergeInputChains1_0,
/*  3025*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::JALX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (BPFcall GPR:{ *:[i64] }:$dst) - Complexity = 3
                // Dst: (JALX:{ *:[i64] } GPR:{ *:[i64] }:$dst)
/*  3032*/    0, /*End of Scope*/
/*  3033*/  /*SwitchOpcode*/ 42, TARGET_VAL(ISD::Constant),// ->3078
/*  3036*/    OPC_RecordNode, // #0 = $imm
/*  3037*/    OPC_SwitchType /*2 cases */, 24, MVT::i64,// ->3064
/*  3040*/      OPC_Scope, 11, /*->3053*/ // 2 children in Scope
/*  3042*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  3044*/        OPC_EmitConvertToTarget, 0,
/*  3046*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MOV_ri), 0,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm - Complexity = 4
                  // Dst: (MOV_ri:{ *:[i64] } (imm:{ *:[i64] }):$imm)
/*  3053*/      /*Scope*/ 9, /*->3063*/
/*  3054*/        OPC_EmitConvertToTarget, 0,
/*  3056*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_imm64), 0,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i64] }):$imm - Complexity = 3
                  // Dst: (LD_imm64:{ *:[i64] } (imm:{ *:[i64] }):$imm)
/*  3063*/      0, /*End of Scope*/
/*  3064*/    /*SwitchType*/ 11, MVT::i32,// ->3077
/*  3066*/      OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  3068*/      OPC_EmitConvertToTarget, 0,
/*  3070*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MOV_ri_32), 0,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm - Complexity = 4
                // Dst: (MOV_ri_32:{ *:[i32] } (imm:{ *:[i32] }):$imm)
/*  3077*/    0, // EndSwitchType
/*  3078*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->3095
/*  3081*/    OPC_RecordNode, // #0 = 'br' chained node
/*  3082*/    OPC_RecordChild1, // #1 = $BrDst
/*  3083*/    OPC_MoveChild1,
/*  3084*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  3087*/    OPC_MoveParent,
/*  3088*/    OPC_EmitMergeInputChains1_0,
/*  3089*/    OPC_MorphNodeTo0, TARGET_VAL(BPF::JMP), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$BrDst) - Complexity = 3
              // Dst: (JMP (bb:{ *:[Other] }):$BrDst)
/*  3095*/  /*SwitchOpcode*/ 8, TARGET_VAL(BPFISD::RET_FLAG),// ->3106
/*  3098*/    OPC_RecordNode, // #0 = 'BPFretflag' chained node
/*  3099*/    OPC_CaptureGlueInput,
/*  3100*/    OPC_EmitMergeInputChains1_0,
/*  3101*/    OPC_MorphNodeTo0, TARGET_VAL(BPF::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (BPFretflag) - Complexity = 3
              // Dst: (RET)
/*  3106*/  /*SwitchOpcode*/ 25, TARGET_VAL(ISD::BSWAP),// ->3134
/*  3109*/    OPC_RecordChild0, // #0 = $src
/*  3110*/    OPC_CheckType, MVT::i64,
/*  3112*/    OPC_Scope, 9, /*->3123*/ // 2 children in Scope
/*  3114*/      OPC_CheckPatternPredicate, 2, // (CurDAG->getDataLayout().isLittleEndian())
/*  3116*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::BE64), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (BE64:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  3123*/    /*Scope*/ 9, /*->3133*/
/*  3124*/      OPC_CheckPatternPredicate, 3, // (!CurDAG->getDataLayout().isLittleEndian())
/*  3126*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LE64), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (LE64:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  3133*/    0, /*End of Scope*/
/*  3134*/  /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TRUNCATE),// ->3149
/*  3137*/    OPC_RecordChild0, // #0 = $src
/*  3138*/    OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*  3141*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:{ *:[i32] } GPR:{ *:[i64] }:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:{ *:[i32] } GPR:{ *:[i64] }:$src, sub_32:{ *:[i32] })
/*  3149*/  /*SwitchOpcode*/ 19, TARGET_VAL(ISD::ANY_EXTEND),// ->3171
/*  3152*/    OPC_RecordChild0, // #0 = $src
/*  3153*/    OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  MVT::i64, 0/*#Ops*/,  // Results = #1
/*  3159*/    OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*  3162*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  MVT::i64, 3/*#Ops*/, 1, 0, 2, 
              // Src: (anyext:{ *:[i64] } GPR32:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (INSERT_SUBREG:{ *:[i64] } (IMPLICIT_DEF:{ *:[i64] }), GPR32:{ *:[i32] }:$src, sub_32:{ *:[i32] })
/*  3171*/  /*SwitchOpcode*/ 30, TARGET_VAL(ISD::SIGN_EXTEND),// ->3204
/*  3174*/    OPC_RecordChild0, // #0 = $src
/*  3175*/    OPC_EmitNode1, TARGET_VAL(BPF::MOV_32_64), 0,
                  MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*  3182*/    OPC_EmitInteger, MVT::i64, 32, 
/*  3185*/    OPC_EmitNode1, TARGET_VAL(BPF::SLL_ri), 0,
                  MVT::i64, 2/*#Ops*/, 1, 2,  // Results = #3
/*  3193*/    OPC_EmitInteger, MVT::i64, 32, 
/*  3196*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri), 0,
                  MVT::i64, 2/*#Ops*/, 3, 4, 
              // Src: (sext:{ *:[i64] } GPR32:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (SRA_ri:{ *:[i64] } (SLL_ri:{ *:[i64] } (MOV_32_64:{ *:[i64] } GPR32:{ *:[i32] }:$src), 32:{ *:[i64] }), 32:{ *:[i64] })
/*  3204*/  /*SwitchOpcode*/ 30, TARGET_VAL(ISD::ZERO_EXTEND),// ->3237
/*  3207*/    OPC_RecordChild0, // #0 = $src
/*  3208*/    OPC_EmitNode1, TARGET_VAL(BPF::MOV_32_64), 0,
                  MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*  3215*/    OPC_EmitInteger, MVT::i64, 32, 
/*  3218*/    OPC_EmitNode1, TARGET_VAL(BPF::SLL_ri), 0,
                  MVT::i64, 2/*#Ops*/, 1, 2,  // Results = #3
/*  3226*/    OPC_EmitInteger, MVT::i64, 32, 
/*  3229*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                  MVT::i64, 2/*#Ops*/, 3, 4, 
              // Src: (zext:{ *:[i64] } GPR32:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (SRL_ri:{ *:[i64] } (SLL_ri:{ *:[i64] } (MOV_32_64:{ *:[i64] } GPR32:{ *:[i32] }:$src), 32:{ *:[i64] }), 32:{ *:[i64] })
/*  3237*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 3239 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 57
  // #OPC_RecordNode                           = 14
  // #OPC_RecordChild                          = 111
  // #OPC_RecordMemRef                         = 3
  // #OPC_CaptureGlueInput                     = 6
  // #OPC_MoveChild                            = 77
  // #OPC_MoveParent                           = 125
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 0
  // #OPC_CheckPatternPredicate                = 34
  // #OPC_CheckPredicate                       = 111
  // #OPC_CheckOpcode                          = 76
  // #OPC_SwitchOpcode                         = 2
  // #OPC_CheckType                            = 55
  // #OPC_SwitchType                           = 11
  // #OPC_CheckChildType                       = 22
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 7
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckChild2CondCode                  = 0
  // #OPC_CheckValueType                       = 0
  // #OPC_CheckComplexPat                      = 33
  // #OPC_CheckAndImm                          = 1
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 12
  // #OPC_EmitStringInteger                    = 11
  // #OPC_EmitRegister                         = 0
  // #OPC_EmitConvertToTarget                  = 63
  // #OPC_EmitMergeInputChains                 = 87
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 15
  // #OPC_EmitNodeXForm                        = 0
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 154

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
  case 0: return (!Subtarget->getHasAlu32());
  case 1: return (Subtarget->getHasAlu32());
  case 2: return (CurDAG->getDataLayout().isLittleEndian());
  case 3: return (!CurDAG->getDataLayout().isLittleEndian());
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
    // Predicate_i64immSExt32
    // Predicate_i32immSExt32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return isInt<32>(N->getSExtValue()); 
  }
  case 1: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 2: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 3: { 
    // Predicate_truncstorei32
    // Predicate_zextloadi32
    // Predicate_extloadi32
    // Predicate_atomic_load_add_32
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 4: { 
    // Predicate_truncstorei16
    // Predicate_zextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 5: { 
    // Predicate_truncstorei8
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 6: { 
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 7: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 8: { 
    // Predicate_zextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 9: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 10: { 
    // Predicate_extload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 11: { 
    // Predicate_atomic_load_add_64
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i64) return false;
return true;

  }
  case 12: { 
    // Predicate_BPF_CC_EQ
    // Predicate_BPF_CC_EQ_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETEQ);
  }
  case 13: { 
    // Predicate_BPF_CC_GTU
    // Predicate_BPF_CC_GTU_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETUGT);
  }
  case 14: { 
    // Predicate_BPF_CC_GEU
    // Predicate_BPF_CC_GEU_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETUGE);
  }
  case 15: { 
    // Predicate_BPF_CC_NE
    // Predicate_BPF_CC_NE_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETNE);
  }
  case 16: { 
    // Predicate_BPF_CC_GT
    // Predicate_BPF_CC_GT_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETGT);
  }
  case 17: { 
    // Predicate_BPF_CC_GE
    // Predicate_BPF_CC_GE_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETGE);
  }
  case 18: { 
    // Predicate_BPF_CC_LTU
    // Predicate_BPF_CC_LTU_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETULT);
  }
  case 19: { 
    // Predicate_BPF_CC_LEU
    // Predicate_BPF_CC_LEU_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETULE);
  }
  case 20: { 
    // Predicate_BPF_CC_LT
    // Predicate_BPF_CC_LT_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETLT);
  }
  case 21: { 
    // Predicate_BPF_CC_LE
    // Predicate_BPF_CC_LE_32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETLE);
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
  return SelectAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectFIAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
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

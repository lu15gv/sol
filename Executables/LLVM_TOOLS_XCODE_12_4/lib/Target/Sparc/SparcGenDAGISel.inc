/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Sparc target                              *|
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
/*     0*/  OPC_SwitchOpcode /*69 cases */, 39|128,4/*551*/, TARGET_VAL(ISD::STORE),// ->556
/*     5*/    OPC_RecordMemRef,
/*     6*/    OPC_RecordNode, // #0 = 'st' chained node
/*     7*/    OPC_Scope, 90, /*->99*/ // 2 children in Scope
/*     9*/      OPC_CheckChild1Integer, 0, 
/*    11*/      OPC_Scope, 41, /*->54*/ // 2 children in Scope
/*    13*/        OPC_CheckChild1Type, MVT::i32,
/*    15*/        OPC_RecordChild2, // #1 = $dst
/*    16*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*    18*/        OPC_CheckPredicate, 1, // Predicate_store
/*    20*/        OPC_Scope, 15, /*->37*/ // 2 children in Scope
/*    22*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*    25*/          OPC_EmitMergeInputChains1_0,
/*    26*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*    29*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:{ *:[i32] }, ADDRrr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STrr ADDRrr:{ *:[iPTR] }:$dst, G0:{ *:[i32] })
/*    37*/        /*Scope*/ 15, /*->53*/
/*    38*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*    41*/          OPC_EmitMergeInputChains1_0,
/*    42*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*    45*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:{ *:[i32] }, ADDRri:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STri ADDRri:{ *:[iPTR] }:$dst, G0:{ *:[i32] })
/*    53*/        0, /*End of Scope*/
/*    54*/      /*Scope*/ 43, /*->98*/
/*    55*/        OPC_CheckChild1Type, MVT::i64,
/*    57*/        OPC_RecordChild2, // #1 = $dst
/*    58*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*    60*/        OPC_CheckPredicate, 1, // Predicate_store
/*    62*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*    64*/        OPC_Scope, 15, /*->81*/ // 2 children in Scope
/*    66*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #2 #3
/*    69*/          OPC_EmitMergeInputChains1_0,
/*    70*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*    73*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:{ *:[i64] }, ADDRrr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STXrr ADDRrr:{ *:[iPTR] }:$dst, G0:{ *:[i64] })
/*    81*/        /*Scope*/ 15, /*->97*/
/*    82*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #2 #3
/*    85*/          OPC_EmitMergeInputChains1_0,
/*    86*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*    89*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 2, 3, 4, 
                    // Src: (st 0:{ *:[i64] }, ADDRri:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                    // Dst: (STXri ADDRri:{ *:[iPTR] }:$dst, G0:{ *:[i64] })
/*    97*/        0, /*End of Scope*/
/*    98*/      0, /*End of Scope*/
/*    99*/    /*Scope*/ 70|128,3/*454*/, /*->555*/
/*   101*/      OPC_RecordChild1, // #1 = $rd
/*   102*/      OPC_Scope, 3|128,1/*131*/, /*->236*/ // 6 children in Scope
/*   105*/        OPC_CheckChild1Type, MVT::i32,
/*   107*/        OPC_RecordChild2, // #2 = $addr
/*   108*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*   110*/        OPC_Scope, 66, /*->178*/ // 2 children in Scope
/*   112*/          OPC_CheckPredicate, 2, // Predicate_truncstore
/*   114*/          OPC_Scope, 30, /*->146*/ // 2 children in Scope
/*   116*/            OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*   118*/            OPC_Scope, 12, /*->132*/ // 2 children in Scope
/*   120*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   123*/              OPC_EmitMergeInputChains1_0,
/*   124*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:{ *:[i32] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBrr ADDRrr:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$rd)
/*   132*/            /*Scope*/ 12, /*->145*/
/*   133*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   136*/              OPC_EmitMergeInputChains1_0,
/*   137*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:{ *:[i32] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBri ADDRri:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$rd)
/*   145*/            0, /*End of Scope*/
/*   146*/          /*Scope*/ 30, /*->177*/
/*   147*/            OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   149*/            OPC_Scope, 12, /*->163*/ // 2 children in Scope
/*   151*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   154*/              OPC_EmitMergeInputChains1_0,
/*   155*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:{ *:[i32] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHrr ADDRrr:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$rd)
/*   163*/            /*Scope*/ 12, /*->176*/
/*   164*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   167*/              OPC_EmitMergeInputChains1_0,
/*   168*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i32:{ *:[i32] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHri ADDRri:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$rd)
/*   176*/            0, /*End of Scope*/
/*   177*/          0, /*End of Scope*/
/*   178*/        /*Scope*/ 56, /*->235*/
/*   179*/          OPC_CheckPredicate, 1, // Predicate_store
/*   181*/          OPC_Scope, 12, /*->195*/ // 4 children in Scope
/*   183*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   186*/            OPC_EmitMergeInputChains1_0,
/*   187*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:{ *:[i32] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STrr ADDRrr:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$rd)
/*   195*/          /*Scope*/ 12, /*->208*/
/*   196*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   199*/            OPC_EmitMergeInputChains1_0,
/*   200*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:{ *:[i32] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STri ADDRri:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$rd)
/*   208*/          /*Scope*/ 12, /*->221*/
/*   209*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   212*/            OPC_EmitMergeInputChains1_0,
/*   213*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STCrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:{ *:[i32] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STCrr ADDRrr:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$rd)
/*   221*/          /*Scope*/ 12, /*->234*/
/*   222*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   225*/            OPC_EmitMergeInputChains1_0,
/*   226*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STCri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i32:{ *:[i32] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STCri ADDRri:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$rd)
/*   234*/          0, /*End of Scope*/
/*   235*/        0, /*End of Scope*/
/*   236*/      /*Scope*/ 61, /*->298*/
/*   237*/        OPC_CheckChild1Type, MVT::v2i32,
/*   239*/        OPC_RecordChild2, // #2 = $addr
/*   240*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*   242*/        OPC_CheckPredicate, 1, // Predicate_store
/*   244*/        OPC_Scope, 12, /*->258*/ // 4 children in Scope
/*   246*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   249*/          OPC_EmitMergeInputChains1_0,
/*   250*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:{ *:[v2i32] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDrr ADDRrr:{ *:[iPTR] }:$addr, v2i32:{ *:[v2i32] }:$rd)
/*   258*/        /*Scope*/ 12, /*->271*/
/*   259*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   262*/          OPC_EmitMergeInputChains1_0,
/*   263*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STDri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:{ *:[v2i32] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDri ADDRri:{ *:[iPTR] }:$addr, v2i32:{ *:[v2i32] }:$rd)
/*   271*/        /*Scope*/ 12, /*->284*/
/*   272*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   275*/          OPC_EmitMergeInputChains1_0,
/*   276*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:{ *:[v2i32] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDCrr ADDRrr:{ *:[iPTR] }:$addr, v2i32:{ *:[v2i32] }:$rd)
/*   284*/        /*Scope*/ 12, /*->297*/
/*   285*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   288*/          OPC_EmitMergeInputChains1_0,
/*   289*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STDCri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st v2i32:{ *:[v2i32] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDCri ADDRri:{ *:[iPTR] }:$addr, v2i32:{ *:[v2i32] }:$rd)
/*   297*/        0, /*End of Scope*/
/*   298*/      /*Scope*/ 35, /*->334*/
/*   299*/        OPC_CheckChild1Type, MVT::f32,
/*   301*/        OPC_RecordChild2, // #2 = $addr
/*   302*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*   304*/        OPC_CheckPredicate, 1, // Predicate_store
/*   306*/        OPC_Scope, 12, /*->320*/ // 2 children in Scope
/*   308*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   311*/          OPC_EmitMergeInputChains1_0,
/*   312*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f32:{ *:[f32] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STFrr ADDRrr:{ *:[iPTR] }:$addr, f32:{ *:[f32] }:$rd)
/*   320*/        /*Scope*/ 12, /*->333*/
/*   321*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   324*/          OPC_EmitMergeInputChains1_0,
/*   325*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f32:{ *:[f32] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STFri ADDRri:{ *:[iPTR] }:$addr, f32:{ *:[f32] }:$rd)
/*   333*/        0, /*End of Scope*/
/*   334*/      /*Scope*/ 35, /*->370*/
/*   335*/        OPC_CheckChild1Type, MVT::f64,
/*   337*/        OPC_RecordChild2, // #2 = $addr
/*   338*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*   340*/        OPC_CheckPredicate, 1, // Predicate_store
/*   342*/        OPC_Scope, 12, /*->356*/ // 2 children in Scope
/*   344*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   347*/          OPC_EmitMergeInputChains1_0,
/*   348*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f64:{ *:[f64] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDFrr ADDRrr:{ *:[iPTR] }:$addr, f64:{ *:[f64] }:$rd)
/*   356*/        /*Scope*/ 12, /*->369*/
/*   357*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   360*/          OPC_EmitMergeInputChains1_0,
/*   361*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f64:{ *:[f64] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDFri ADDRri:{ *:[iPTR] }:$addr, f64:{ *:[f64] }:$rd)
/*   369*/        0, /*End of Scope*/
/*   370*/      /*Scope*/ 37, /*->408*/
/*   371*/        OPC_CheckChild1Type, MVT::f128,
/*   373*/        OPC_RecordChild2, // #2 = $addr
/*   374*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*   376*/        OPC_CheckPredicate, 1, // Predicate_store
/*   378*/        OPC_CheckPatternPredicate, 1, // (Subtarget->hasHardQuad()) && (Subtarget->isV9())
/*   380*/        OPC_Scope, 12, /*->394*/ // 2 children in Scope
/*   382*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   385*/          OPC_EmitMergeInputChains1_0,
/*   386*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f128:{ *:[f128] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STQFrr ADDRrr:{ *:[iPTR] }:$addr, f128:{ *:[f128] }:$rd)
/*   394*/        /*Scope*/ 12, /*->407*/
/*   395*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   398*/          OPC_EmitMergeInputChains1_0,
/*   399*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STQFri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st f128:{ *:[f128] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STQFri ADDRri:{ *:[iPTR] }:$addr, f128:{ *:[f128] }:$rd)
/*   407*/        0, /*End of Scope*/
/*   408*/      /*Scope*/ 16|128,1/*144*/, /*->554*/
/*   410*/        OPC_CheckChild1Type, MVT::i64,
/*   412*/        OPC_RecordChild2, // #2 = $addr
/*   413*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*   415*/        OPC_Scope, 32, /*->449*/ // 2 children in Scope
/*   417*/          OPC_CheckPredicate, 1, // Predicate_store
/*   419*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   421*/          OPC_Scope, 12, /*->435*/ // 2 children in Scope
/*   423*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   426*/            OPC_EmitMergeInputChains1_0,
/*   427*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:{ *:[i64] }:$rd, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STXrr ADDRrr:{ *:[iPTR] }:$addr, i64:{ *:[i64] }:$rd)
/*   435*/          /*Scope*/ 12, /*->448*/
/*   436*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   439*/            OPC_EmitMergeInputChains1_0,
/*   440*/            OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 1, 
                      // Src: (st i64:{ *:[i64] }:$rd, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                      // Dst: (STXri ADDRri:{ *:[iPTR] }:$addr, i64:{ *:[i64] }:$rd)
/*   448*/          0, /*End of Scope*/
/*   449*/        /*Scope*/ 103, /*->553*/
/*   450*/          OPC_CheckPredicate, 2, // Predicate_truncstore
/*   452*/          OPC_Scope, 32, /*->486*/ // 3 children in Scope
/*   454*/            OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*   456*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   458*/            OPC_Scope, 12, /*->472*/ // 2 children in Scope
/*   460*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   463*/              OPC_EmitMergeInputChains1_0,
/*   464*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:{ *:[i64] }:$src, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBrr ADDRrr:{ *:[iPTR] }:$addr, ?:{ *:[i64] }:$src)
/*   472*/            /*Scope*/ 12, /*->485*/
/*   473*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   476*/              OPC_EmitMergeInputChains1_0,
/*   477*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                        // Dst: (STBri ADDRri:{ *:[iPTR] }:$addr, ?:{ *:[i64] }:$src)
/*   485*/            0, /*End of Scope*/
/*   486*/          /*Scope*/ 32, /*->519*/
/*   487*/            OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   489*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   491*/            OPC_Scope, 12, /*->505*/ // 2 children in Scope
/*   493*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   496*/              OPC_EmitMergeInputChains1_0,
/*   497*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:{ *:[i64] }:$src, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHrr ADDRrr:{ *:[iPTR] }:$addr, ?:{ *:[i64] }:$src)
/*   505*/            /*Scope*/ 12, /*->518*/
/*   506*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   509*/              OPC_EmitMergeInputChains1_0,
/*   510*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                        // Dst: (STHri ADDRri:{ *:[iPTR] }:$addr, ?:{ *:[i64] }:$src)
/*   518*/            0, /*End of Scope*/
/*   519*/          /*Scope*/ 32, /*->552*/
/*   520*/            OPC_CheckPredicate, 5, // Predicate_truncstorei32
/*   522*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   524*/            OPC_Scope, 12, /*->538*/ // 2 children in Scope
/*   526*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*   529*/              OPC_EmitMergeInputChains1_0,
/*   530*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:{ *:[i64] }:$src, ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                        // Dst: (STrr ADDRrr:{ *:[iPTR] }:$addr, ?:{ *:[i64] }:$src)
/*   538*/            /*Scope*/ 12, /*->551*/
/*   539*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*   542*/              OPC_EmitMergeInputChains1_0,
/*   543*/              OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                            3/*#Ops*/, 3, 4, 1, 
                        // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                        // Dst: (STri ADDRri:{ *:[iPTR] }:$addr, ?:{ *:[i64] }:$src)
/*   551*/            0, /*End of Scope*/
/*   552*/          0, /*End of Scope*/
/*   553*/        0, /*End of Scope*/
/*   554*/      0, /*End of Scope*/
/*   555*/    0, /*End of Scope*/
/*   556*/  /*SwitchOpcode*/ 39, TARGET_VAL(SPISD::TLS_LD),// ->598
/*   559*/    OPC_RecordChild0, // #0 = $addr
/*   560*/    OPC_RecordChild1, // #1 = $sym
/*   561*/    OPC_MoveChild1,
/*   562*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*   565*/    OPC_MoveParent,
/*   566*/    OPC_SwitchType /*2 cases */, 12, MVT::i32,// ->581
/*   569*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRrr:$addr #2 #3
/*   572*/      OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_LDrr), 0,
                    MVT::i32, 3/*#Ops*/, 2, 3, 1, 
                // Src: (tlsld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr, (tglobaltlsaddr:{ *:[iPTR] }):$sym) - Complexity = 15
                // Dst: (TLS_LDrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr, (tglobaltlsaddr:{ *:[iPTR] }):$sym)
/*   581*/    /*SwitchType*/ 14, MVT::i64,// ->597
/*   583*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   585*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRrr:$addr #2 #3
/*   588*/      OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_LDXrr), 0,
                    MVT::i64, 3/*#Ops*/, 2, 3, 1, 
                // Src: (tlsld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr, (tglobaltlsaddr:{ *:[iPTR] }):$sym) - Complexity = 15
                // Dst: (TLS_LDXrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr, (tglobaltlsaddr:{ *:[iPTR] }):$sym)
/*   597*/    0, // EndSwitchType
/*   598*/  /*SwitchOpcode*/ 17|128,3/*401*/, TARGET_VAL(ISD::ADD),// ->1003
/*   602*/    OPC_Scope, 125, /*->729*/ // 4 children in Scope
/*   604*/      OPC_MoveChild0,
/*   605*/      OPC_SwitchOpcode /*2 cases */, 58, TARGET_VAL(SPISD::Hi),// ->667
/*   609*/        OPC_RecordChild0, // #0 = $in1
/*   610*/        OPC_MoveChild0,
/*   611*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*   614*/        OPC_MoveParent,
/*   615*/        OPC_MoveParent,
/*   616*/        OPC_MoveChild1,
/*   617*/        OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*   620*/        OPC_RecordChild0, // #1 = $in2
/*   621*/        OPC_MoveChild0,
/*   622*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*   625*/        OPC_MoveParent,
/*   626*/        OPC_MoveParent,
/*   627*/        OPC_Scope, 17, /*->646*/ // 2 children in Scope
/*   629*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*   631*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*   638*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 1, 
                    // Src: (add:{ *:[iPTR] } (SPhi:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in1), (SPlo:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in2)) - Complexity = 15
                    // Dst: (ADDri:{ *:[iPTR] } (SETHIi:{ *:[i32] } (tglobaltlsaddr:{ *:[i32] }):$in1), (tglobaltlsaddr:{ *:[i32] }):$in2)
/*   646*/        /*Scope*/ 19, /*->666*/
/*   647*/          OPC_CheckType, MVT::i64,
/*   649*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   651*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 0,  // Results = #2
/*   658*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 1, 
                    // Src: (add:{ *:[i64] } (SPhi:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in1), (SPlo:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in2)) - Complexity = 15
                    // Dst: (ADDXri:{ *:[i64] } (SETHIXi:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in1), (tglobaltlsaddr:{ *:[i64] }):$in2)
/*   666*/        0, /*End of Scope*/
/*   667*/      /*SwitchOpcode*/ 58, TARGET_VAL(SPISD::Lo),// ->728
/*   670*/        OPC_RecordChild0, // #0 = $in2
/*   671*/        OPC_MoveChild0,
/*   672*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*   675*/        OPC_MoveParent,
/*   676*/        OPC_MoveParent,
/*   677*/        OPC_MoveChild1,
/*   678*/        OPC_CheckOpcode, TARGET_VAL(SPISD::Hi),
/*   681*/        OPC_RecordChild0, // #1 = $in1
/*   682*/        OPC_MoveChild0,
/*   683*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*   686*/        OPC_MoveParent,
/*   687*/        OPC_MoveParent,
/*   688*/        OPC_Scope, 17, /*->707*/ // 2 children in Scope
/*   690*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*   692*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*   699*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 0, 
                    // Src: (add:{ *:[iPTR] } (SPlo:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in2), (SPhi:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in1)) - Complexity = 15
                    // Dst: (ADDri:{ *:[iPTR] } (SETHIi:{ *:[i32] } (tglobaltlsaddr:{ *:[i32] }):$in1), (tglobaltlsaddr:{ *:[i32] }):$in2)
/*   707*/        /*Scope*/ 19, /*->727*/
/*   708*/          OPC_CheckType, MVT::i64,
/*   710*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   712*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*   719*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 0, 
                    // Src: (add:{ *:[i64] } (SPlo:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in2), (SPhi:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in1)) - Complexity = 15
                    // Dst: (ADDXri:{ *:[i64] } (SETHIXi:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in1), (tglobaltlsaddr:{ *:[i64] }):$in2)
/*   727*/        0, /*End of Scope*/
/*   728*/      0, // EndSwitchOpcode
/*   729*/    /*Scope*/ 102, /*->832*/
/*   730*/      OPC_RecordChild0, // #0 = $r
/*   731*/      OPC_MoveChild1,
/*   732*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*   735*/      OPC_RecordChild0, // #1 = $in
/*   736*/      OPC_MoveChild0,
/*   737*/      OPC_SwitchOpcode /*3 cases */, 28, TARGET_VAL(ISD::TargetGlobalAddress),// ->769
/*   741*/        OPC_MoveParent,
/*   742*/        OPC_MoveParent,
/*   743*/        OPC_Scope, 10, /*->755*/ // 2 children in Scope
/*   745*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*   747*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[iPTR] } iPTR:{ *:[iPTR] }:$r, (SPlo:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$in)) - Complexity = 9
                    // Dst: (ADDri:{ *:[iPTR] } ?:{ *:[iPTR] }:$r, (tglobaladdr:{ *:[i32] }):$in)
/*   755*/        /*Scope*/ 12, /*->768*/
/*   756*/          OPC_CheckType, MVT::i64,
/*   758*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   760*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[i64] } iPTR:{ *:[i64] }:$r, (SPlo:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in)) - Complexity = 9
                    // Dst: (ADDXri:{ *:[i64] } ?:{ *:[i64] }:$r, (tglobaladdr:{ *:[i64] }):$in)
/*   768*/        0, /*End of Scope*/
/*   769*/      /*SwitchOpcode*/ 28, TARGET_VAL(ISD::TargetConstantPool),// ->800
/*   772*/        OPC_MoveParent,
/*   773*/        OPC_MoveParent,
/*   774*/        OPC_Scope, 10, /*->786*/ // 2 children in Scope
/*   776*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*   778*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[iPTR] } iPTR:{ *:[iPTR] }:$r, (SPlo:{ *:[iPTR] } (tconstpool:{ *:[iPTR] }):$in)) - Complexity = 9
                    // Dst: (ADDri:{ *:[iPTR] } ?:{ *:[iPTR] }:$r, (tconstpool:{ *:[i32] }):$in)
/*   786*/        /*Scope*/ 12, /*->799*/
/*   787*/          OPC_CheckType, MVT::i64,
/*   789*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   791*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[i64] } iPTR:{ *:[i64] }:$r, (SPlo:{ *:[i64] } (tconstpool:{ *:[i64] }):$in)) - Complexity = 9
                    // Dst: (ADDXri:{ *:[i64] } ?:{ *:[i64] }:$r, (tconstpool:{ *:[i64] }):$in)
/*   799*/        0, /*End of Scope*/
/*   800*/      /*SwitchOpcode*/ 28, TARGET_VAL(ISD::TargetBlockAddress),// ->831
/*   803*/        OPC_MoveParent,
/*   804*/        OPC_MoveParent,
/*   805*/        OPC_Scope, 10, /*->817*/ // 2 children in Scope
/*   807*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*   809*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[iPTR] } iPTR:{ *:[iPTR] }:$r, (SPlo:{ *:[iPTR] } (tblockaddress:{ *:[iPTR] }):$in)) - Complexity = 9
                    // Dst: (ADDri:{ *:[iPTR] } ?:{ *:[iPTR] }:$r, (tblockaddress:{ *:[i32] }):$in)
/*   817*/        /*Scope*/ 12, /*->830*/
/*   818*/          OPC_CheckType, MVT::i64,
/*   820*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   822*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:{ *:[i64] } iPTR:{ *:[i64] }:$r, (SPlo:{ *:[i64] } (tblockaddress:{ *:[i64] }):$in)) - Complexity = 9
                    // Dst: (ADDXri:{ *:[i64] } ?:{ *:[i64] }:$r, (tblockaddress:{ *:[i64] }):$in)
/*   830*/        0, /*End of Scope*/
/*   831*/      0, // EndSwitchOpcode
/*   832*/    /*Scope*/ 104, /*->937*/
/*   833*/      OPC_MoveChild0,
/*   834*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*   837*/      OPC_RecordChild0, // #0 = $in
/*   838*/      OPC_MoveChild0,
/*   839*/      OPC_SwitchOpcode /*3 cases */, 29, TARGET_VAL(ISD::TargetGlobalAddress),// ->872
/*   843*/        OPC_MoveParent,
/*   844*/        OPC_MoveParent,
/*   845*/        OPC_RecordChild1, // #1 = $r
/*   846*/        OPC_Scope, 10, /*->858*/ // 2 children in Scope
/*   848*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*   850*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:{ *:[iPTR] } (SPlo:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$in), iPTR:{ *:[iPTR] }:$r) - Complexity = 9
                    // Dst: (ADDri:{ *:[iPTR] } ?:{ *:[iPTR] }:$r, (tglobaladdr:{ *:[i32] }):$in)
/*   858*/        /*Scope*/ 12, /*->871*/
/*   859*/          OPC_CheckType, MVT::i64,
/*   861*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   863*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:{ *:[i64] } (SPlo:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in), iPTR:{ *:[i64] }:$r) - Complexity = 9
                    // Dst: (ADDXri:{ *:[i64] } ?:{ *:[i64] }:$r, (tglobaladdr:{ *:[i64] }):$in)
/*   871*/        0, /*End of Scope*/
/*   872*/      /*SwitchOpcode*/ 29, TARGET_VAL(ISD::TargetConstantPool),// ->904
/*   875*/        OPC_MoveParent,
/*   876*/        OPC_MoveParent,
/*   877*/        OPC_RecordChild1, // #1 = $r
/*   878*/        OPC_Scope, 10, /*->890*/ // 2 children in Scope
/*   880*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*   882*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:{ *:[iPTR] } (SPlo:{ *:[iPTR] } (tconstpool:{ *:[iPTR] }):$in), iPTR:{ *:[iPTR] }:$r) - Complexity = 9
                    // Dst: (ADDri:{ *:[iPTR] } ?:{ *:[iPTR] }:$r, (tconstpool:{ *:[i32] }):$in)
/*   890*/        /*Scope*/ 12, /*->903*/
/*   891*/          OPC_CheckType, MVT::i64,
/*   893*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   895*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:{ *:[i64] } (SPlo:{ *:[i64] } (tconstpool:{ *:[i64] }):$in), iPTR:{ *:[i64] }:$r) - Complexity = 9
                    // Dst: (ADDXri:{ *:[i64] } ?:{ *:[i64] }:$r, (tconstpool:{ *:[i64] }):$in)
/*   903*/        0, /*End of Scope*/
/*   904*/      /*SwitchOpcode*/ 29, TARGET_VAL(ISD::TargetBlockAddress),// ->936
/*   907*/        OPC_MoveParent,
/*   908*/        OPC_MoveParent,
/*   909*/        OPC_RecordChild1, // #1 = $r
/*   910*/        OPC_Scope, 10, /*->922*/ // 2 children in Scope
/*   912*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*   914*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::iPTR, 2/*#Ops*/, 1, 0, 
                    // Src: (add:{ *:[iPTR] } (SPlo:{ *:[iPTR] } (tblockaddress:{ *:[iPTR] }):$in), iPTR:{ *:[iPTR] }:$r) - Complexity = 9
                    // Dst: (ADDri:{ *:[iPTR] } ?:{ *:[iPTR] }:$r, (tblockaddress:{ *:[i32] }):$in)
/*   922*/        /*Scope*/ 12, /*->935*/
/*   923*/          OPC_CheckType, MVT::i64,
/*   925*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   927*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:{ *:[i64] } (SPlo:{ *:[i64] } (tblockaddress:{ *:[i64] }):$in), iPTR:{ *:[i64] }:$r) - Complexity = 9
                    // Dst: (ADDXri:{ *:[i64] } ?:{ *:[i64] }:$r, (tblockaddress:{ *:[i64] }):$in)
/*   935*/        0, /*End of Scope*/
/*   936*/      0, // EndSwitchOpcode
/*   937*/    /*Scope*/ 64, /*->1002*/
/*   938*/      OPC_RecordChild0, // #0 = $rs1
/*   939*/      OPC_RecordChild1, // #1 = $simm13
/*   940*/      OPC_Scope, 35, /*->977*/ // 3 children in Scope
/*   942*/        OPC_MoveChild1,
/*   943*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   946*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*   948*/        OPC_MoveParent,
/*   949*/        OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->962
/*   952*/          OPC_EmitConvertToTarget, 1,
/*   954*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDri), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ADDri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*   962*/        /*SwitchType*/ 12, MVT::i64,// ->976
/*   964*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   966*/          OPC_EmitConvertToTarget, 1,
/*   968*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                    // Dst: (ADDXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] }):$simm13)
/*   976*/        0, // EndSwitchType
/*   977*/      /*Scope*/ 10, /*->988*/
/*   978*/        OPC_CheckType, MVT::i32,
/*   980*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (ADDrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*   988*/      /*Scope*/ 12, /*->1001*/
/*   989*/        OPC_CheckType, MVT::i64,
/*   991*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*   993*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ADDXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2) - Complexity = 3
                  // Dst: (ADDXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2)
/*  1001*/      0, /*End of Scope*/
/*  1002*/    0, /*End of Scope*/
/*  1003*/  /*SwitchOpcode*/ 99|128,2/*355*/, TARGET_VAL(ISD::XOR),// ->1362
/*  1007*/    OPC_Scope, 65|128,1/*193*/, /*->1203*/ // 4 children in Scope
/*  1010*/      OPC_MoveChild0,
/*  1011*/      OPC_SwitchOpcode /*3 cases */, 58, TARGET_VAL(SPISD::Hi),// ->1073
/*  1015*/        OPC_RecordChild0, // #0 = $in1
/*  1016*/        OPC_MoveChild0,
/*  1017*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*  1020*/        OPC_MoveParent,
/*  1021*/        OPC_MoveParent,
/*  1022*/        OPC_MoveChild1,
/*  1023*/        OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*  1026*/        OPC_RecordChild0, // #1 = $in2
/*  1027*/        OPC_MoveChild0,
/*  1028*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*  1031*/        OPC_MoveParent,
/*  1032*/        OPC_MoveParent,
/*  1033*/        OPC_Scope, 17, /*->1052*/ // 2 children in Scope
/*  1035*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  1037*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*  1044*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 1, 
                    // Src: (xor:{ *:[iPTR] } (SPhi:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in1), (SPlo:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in2)) - Complexity = 15
                    // Dst: (XORri:{ *:[iPTR] } (SETHIi:{ *:[i32] } (tglobaltlsaddr:{ *:[i32] }):$in1), (tglobaltlsaddr:{ *:[i32] }):$in2)
/*  1052*/        /*Scope*/ 19, /*->1072*/
/*  1053*/          OPC_CheckType, MVT::i64,
/*  1055*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1057*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 0,  // Results = #2
/*  1064*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 1, 
                    // Src: (xor:{ *:[i64] } (SPhi:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in1), (SPlo:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in2)) - Complexity = 15
                    // Dst: (XORXri:{ *:[i64] } (SETHIXi:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in1), (tglobaltlsaddr:{ *:[i64] }):$in2)
/*  1072*/        0, /*End of Scope*/
/*  1073*/      /*SwitchOpcode*/ 58, TARGET_VAL(SPISD::Lo),// ->1134
/*  1076*/        OPC_RecordChild0, // #0 = $in2
/*  1077*/        OPC_MoveChild0,
/*  1078*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*  1081*/        OPC_MoveParent,
/*  1082*/        OPC_MoveParent,
/*  1083*/        OPC_MoveChild1,
/*  1084*/        OPC_CheckOpcode, TARGET_VAL(SPISD::Hi),
/*  1087*/        OPC_RecordChild0, // #1 = $in1
/*  1088*/        OPC_MoveChild0,
/*  1089*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*  1092*/        OPC_MoveParent,
/*  1093*/        OPC_MoveParent,
/*  1094*/        OPC_Scope, 17, /*->1113*/ // 2 children in Scope
/*  1096*/          OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  1098*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*  1105*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                        MVT::iPTR, 2/*#Ops*/, 2, 0, 
                    // Src: (xor:{ *:[iPTR] } (SPlo:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in2), (SPhi:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in1)) - Complexity = 15
                    // Dst: (XORri:{ *:[iPTR] } (SETHIi:{ *:[i32] } (tglobaltlsaddr:{ *:[i32] }):$in1), (tglobaltlsaddr:{ *:[i32] }):$in2)
/*  1113*/        /*Scope*/ 19, /*->1133*/
/*  1114*/          OPC_CheckType, MVT::i64,
/*  1116*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1118*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*  1125*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                        MVT::i64, 2/*#Ops*/, 2, 0, 
                    // Src: (xor:{ *:[i64] } (SPlo:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in2), (SPhi:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in1)) - Complexity = 15
                    // Dst: (XORXri:{ *:[i64] } (SETHIXi:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in1), (tglobaltlsaddr:{ *:[i64] }):$in2)
/*  1133*/        0, /*End of Scope*/
/*  1134*/      /*SwitchOpcode*/ 65, TARGET_VAL(ISD::XOR),// ->1202
/*  1137*/        OPC_RecordChild0, // #0 = $rs1
/*  1138*/        OPC_Scope, 37, /*->1177*/ // 2 children in Scope
/*  1140*/          OPC_RecordChild1, // #1 = $rs2
/*  1141*/          OPC_MoveParent,
/*  1142*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1153*/          OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->1164
/*  1156*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                          MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (xor:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2), -1:{ *:[i32] }) - Complexity = 11
                      // Dst: (XNORrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  1164*/          /*SwitchType*/ 10, MVT::i64,// ->1176
/*  1166*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1168*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                          MVT::i64, 2/*#Ops*/, 0, 1, 
                      // Src: (xor:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$b, i64:{ *:[i64] }:$c), -1:{ *:[i64] }) - Complexity = 11
                      // Dst: (XNORXrr:{ *:[i64] } i64:{ *:[i64] }:$b, i64:{ *:[i64] }:$c)
/*  1176*/          0, // EndSwitchType
/*  1177*/        /*Scope*/ 23, /*->1201*/
/*  1178*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1189*/          OPC_MoveParent,
/*  1190*/          OPC_RecordChild1, // #1 = $rs2
/*  1191*/          OPC_CheckType, MVT::i32,
/*  1193*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rs1, -1:{ *:[i32] }), i32:{ *:[i32] }:$rs2) - Complexity = 11
                    // Dst: (XNORrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  1201*/        0, /*End of Scope*/
/*  1202*/      0, // EndSwitchOpcode
/*  1203*/    /*Scope*/ 28, /*->1232*/
/*  1204*/      OPC_RecordChild0, // #0 = $rs2
/*  1205*/      OPC_MoveChild1,
/*  1206*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  1209*/      OPC_RecordChild0, // #1 = $rs1
/*  1210*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1221*/      OPC_MoveParent,
/*  1222*/      OPC_CheckType, MVT::i32,
/*  1224*/      OPC_MorphNodeTo1, TARGET_VAL(SP::XNORrr), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$rs2, (xor:{ *:[i32] } i32:{ *:[i32] }:$rs1, -1:{ *:[i32] })) - Complexity = 11
                // Dst: (XNORrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  1232*/    /*Scope*/ 30, /*->1263*/
/*  1233*/      OPC_MoveChild0,
/*  1234*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  1237*/      OPC_RecordChild0, // #0 = $b
/*  1238*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1249*/      OPC_MoveParent,
/*  1250*/      OPC_RecordChild1, // #1 = $c
/*  1251*/      OPC_CheckType, MVT::i64,
/*  1253*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1255*/      OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$b, -1:{ *:[i64] }), i64:{ *:[i64] }:$c) - Complexity = 11
                // Dst: (XNORXrr:{ *:[i64] } i64:{ *:[i64] }:$b, i64:{ *:[i64] }:$c)
/*  1263*/    /*Scope*/ 97, /*->1361*/
/*  1264*/      OPC_RecordChild0, // #0 = $c
/*  1265*/      OPC_Scope, 29, /*->1296*/ // 2 children in Scope
/*  1267*/        OPC_MoveChild1,
/*  1268*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  1271*/        OPC_RecordChild0, // #1 = $b
/*  1272*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1283*/        OPC_MoveParent,
/*  1284*/        OPC_CheckType, MVT::i64,
/*  1286*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1288*/        OPC_MorphNodeTo1, TARGET_VAL(SP::XNORXrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$c, (xor:{ *:[i64] } i64:{ *:[i64] }:$b, -1:{ *:[i64] })) - Complexity = 11
                  // Dst: (XNORXrr:{ *:[i64] } i64:{ *:[i64] }:$b, i64:{ *:[i64] }:$c)
/*  1296*/      /*Scope*/ 63, /*->1360*/
/*  1297*/        OPC_RecordChild1, // #1 = $simm13
/*  1298*/        OPC_Scope, 35, /*->1335*/ // 3 children in Scope
/*  1300*/          OPC_MoveChild1,
/*  1301*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1304*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*  1306*/          OPC_MoveParent,
/*  1307*/          OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->1320
/*  1310*/            OPC_EmitConvertToTarget, 1,
/*  1312*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (XORri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  1320*/          /*SwitchType*/ 12, MVT::i64,// ->1334
/*  1322*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1324*/            OPC_EmitConvertToTarget, 1,
/*  1326*/            OPC_MorphNodeTo1, TARGET_VAL(SP::XORXri), 0,
                          MVT::i64, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (XORXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] }):$simm13)
/*  1334*/          0, // EndSwitchType
/*  1335*/        /*Scope*/ 10, /*->1346*/
/*  1336*/          OPC_CheckType, MVT::i32,
/*  1338*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XORrr), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                    // Dst: (XORrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  1346*/        /*Scope*/ 12, /*->1359*/
/*  1347*/          OPC_CheckType, MVT::i64,
/*  1349*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1351*/          OPC_MorphNodeTo1, TARGET_VAL(SP::XORXrr), 0,
                        MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2) - Complexity = 3
                    // Dst: (XORXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2)
/*  1359*/        0, /*End of Scope*/
/*  1360*/      0, /*End of Scope*/
/*  1361*/    0, /*End of Scope*/
/*  1362*/  /*SwitchOpcode*/ 39|128,7/*935*/, TARGET_VAL(ISD::LOAD),// ->2301
/*  1366*/    OPC_RecordMemRef,
/*  1367*/    OPC_RecordNode, // #0 = 'ld' chained node
/*  1368*/    OPC_RecordChild1, // #1 = $addr
/*  1369*/    OPC_CheckPredicate, 7, // Predicate_unindexedload
/*  1371*/    OPC_Scope, 68, /*->1441*/ // 18 children in Scope
/*  1373*/      OPC_CheckPredicate, 8, // Predicate_sextload
/*  1375*/      OPC_CheckType, MVT::i32,
/*  1377*/      OPC_Scope, 30, /*->1409*/ // 2 children in Scope
/*  1379*/        OPC_CheckPredicate, 3, // Predicate_sextloadi8
/*  1381*/        OPC_Scope, 12, /*->1395*/ // 2 children in Scope
/*  1383*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1386*/          OPC_EmitMergeInputChains1_0,
/*  1387*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                    // Dst: (LDSBrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1395*/        /*Scope*/ 12, /*->1408*/
/*  1396*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1399*/          OPC_EmitMergeInputChains1_0,
/*  1400*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                    // Dst: (LDSBri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)
/*  1408*/        0, /*End of Scope*/
/*  1409*/      /*Scope*/ 30, /*->1440*/
/*  1410*/        OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*  1412*/        OPC_Scope, 12, /*->1426*/ // 2 children in Scope
/*  1414*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1417*/          OPC_EmitMergeInputChains1_0,
/*  1418*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                    // Dst: (LDSHrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1426*/        /*Scope*/ 12, /*->1439*/
/*  1427*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1430*/          OPC_EmitMergeInputChains1_0,
/*  1431*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                    // Dst: (LDSHri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)
/*  1439*/        0, /*End of Scope*/
/*  1440*/      0, /*End of Scope*/
/*  1441*/    /*Scope*/ 68, /*->1510*/
/*  1442*/      OPC_CheckPredicate, 9, // Predicate_zextload
/*  1444*/      OPC_CheckType, MVT::i32,
/*  1446*/      OPC_Scope, 30, /*->1478*/ // 2 children in Scope
/*  1448*/        OPC_CheckPredicate, 3, // Predicate_zextloadi8
/*  1450*/        OPC_Scope, 12, /*->1464*/ // 2 children in Scope
/*  1452*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1455*/          OPC_EmitMergeInputChains1_0,
/*  1456*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDUBrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1464*/        /*Scope*/ 12, /*->1477*/
/*  1465*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1468*/          OPC_EmitMergeInputChains1_0,
/*  1469*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDUBri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)
/*  1477*/        0, /*End of Scope*/
/*  1478*/      /*Scope*/ 30, /*->1509*/
/*  1479*/        OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*  1481*/        OPC_Scope, 12, /*->1495*/ // 2 children in Scope
/*  1483*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1486*/          OPC_EmitMergeInputChains1_0,
/*  1487*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDUHrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1495*/        /*Scope*/ 12, /*->1508*/
/*  1496*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1499*/          OPC_EmitMergeInputChains1_0,
/*  1500*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDUHri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)
/*  1508*/        0, /*End of Scope*/
/*  1509*/      0, /*End of Scope*/
/*  1510*/    /*Scope*/ 58, /*->1569*/
/*  1511*/      OPC_CheckPredicate, 10, // Predicate_load
/*  1513*/      OPC_CheckType, MVT::i32,
/*  1515*/      OPC_Scope, 12, /*->1529*/ // 4 children in Scope
/*  1517*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1520*/        OPC_EmitMergeInputChains1_0,
/*  1521*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1529*/      /*Scope*/ 12, /*->1542*/
/*  1530*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1533*/        OPC_EmitMergeInputChains1_0,
/*  1534*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)
/*  1542*/      /*Scope*/ 12, /*->1555*/
/*  1543*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1546*/        OPC_EmitMergeInputChains1_0,
/*  1547*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDCrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1555*/      /*Scope*/ 12, /*->1568*/
/*  1556*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1559*/        OPC_EmitMergeInputChains1_0,
/*  1560*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDCri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDCri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr)
/*  1568*/      0, /*End of Scope*/
/*  1569*/    /*Scope*/ 99, /*->1669*/
/*  1570*/      OPC_CheckPredicate, 11, // Predicate_extload
/*  1572*/      OPC_CheckType, MVT::i32,
/*  1574*/      OPC_Scope, 30, /*->1606*/ // 3 children in Scope
/*  1576*/        OPC_CheckPredicate, 12, // Predicate_extloadi1
/*  1578*/        OPC_Scope, 12, /*->1592*/ // 2 children in Scope
/*  1580*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*  1583*/          OPC_EmitMergeInputChains1_0,
/*  1584*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                    // Dst: (LDUBrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)
/*  1592*/        /*Scope*/ 12, /*->1605*/
/*  1593*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*  1596*/          OPC_EmitMergeInputChains1_0,
/*  1597*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                    // Dst: (LDUBri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)
/*  1605*/        0, /*End of Scope*/
/*  1606*/      /*Scope*/ 30, /*->1637*/
/*  1607*/        OPC_CheckPredicate, 3, // Predicate_extloadi8
/*  1609*/        OPC_Scope, 12, /*->1623*/ // 2 children in Scope
/*  1611*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*  1614*/          OPC_EmitMergeInputChains1_0,
/*  1615*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDUBrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)
/*  1623*/        /*Scope*/ 12, /*->1636*/
/*  1624*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*  1627*/          OPC_EmitMergeInputChains1_0,
/*  1628*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDUBri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)
/*  1636*/        0, /*End of Scope*/
/*  1637*/      /*Scope*/ 30, /*->1668*/
/*  1638*/        OPC_CheckPredicate, 4, // Predicate_extloadi16
/*  1640*/        OPC_Scope, 12, /*->1654*/ // 2 children in Scope
/*  1642*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*  1645*/          OPC_EmitMergeInputChains1_0,
/*  1646*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDUHrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)
/*  1654*/        /*Scope*/ 12, /*->1667*/
/*  1655*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*  1658*/          OPC_EmitMergeInputChains1_0,
/*  1659*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDUHri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)
/*  1667*/        0, /*End of Scope*/
/*  1668*/      0, /*End of Scope*/
/*  1669*/    /*Scope*/ 34, /*->1704*/
/*  1670*/      OPC_CheckPredicate, 9, // Predicate_zextload
/*  1672*/      OPC_CheckPredicate, 12, // Predicate_zextloadi1
/*  1674*/      OPC_CheckType, MVT::i32,
/*  1676*/      OPC_Scope, 12, /*->1690*/ // 2 children in Scope
/*  1678*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*  1681*/        OPC_EmitMergeInputChains1_0,
/*  1682*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)
/*  1690*/      /*Scope*/ 12, /*->1703*/
/*  1691*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*  1694*/        OPC_EmitMergeInputChains1_0,
/*  1695*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)
/*  1703*/      0, /*End of Scope*/
/*  1704*/    /*Scope*/ 34, /*->1739*/
/*  1705*/      OPC_CheckPredicate, 10, // Predicate_load
/*  1707*/      OPC_CheckType, MVT::i64,
/*  1709*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1711*/      OPC_Scope, 12, /*->1725*/ // 2 children in Scope
/*  1713*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1716*/        OPC_EmitMergeInputChains1_0,
/*  1717*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDXrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1725*/      /*Scope*/ 12, /*->1738*/
/*  1726*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1729*/        OPC_EmitMergeInputChains1_0,
/*  1730*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDXri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  1738*/      0, /*End of Scope*/
/*  1739*/    /*Scope*/ 36, /*->1776*/
/*  1740*/      OPC_CheckPredicate, 9, // Predicate_zextload
/*  1742*/      OPC_CheckPredicate, 12, // Predicate_zextloadi1
/*  1744*/      OPC_CheckType, MVT::i64,
/*  1746*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1748*/      OPC_Scope, 12, /*->1762*/ // 2 children in Scope
/*  1750*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1753*/        OPC_EmitMergeInputChains1_0,
/*  1754*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1762*/      /*Scope*/ 12, /*->1775*/
/*  1763*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1766*/        OPC_EmitMergeInputChains1_0,
/*  1767*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDUBri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  1775*/      0, /*End of Scope*/
/*  1776*/    /*Scope*/ 36, /*->1813*/
/*  1777*/      OPC_CheckPredicate, 11, // Predicate_extload
/*  1779*/      OPC_CheckPredicate, 12, // Predicate_extloadi1
/*  1781*/      OPC_CheckType, MVT::i64,
/*  1783*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1785*/      OPC_Scope, 12, /*->1799*/ // 2 children in Scope
/*  1787*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1790*/        OPC_EmitMergeInputChains1_0,
/*  1791*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1799*/      /*Scope*/ 12, /*->1812*/
/*  1800*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1803*/        OPC_EmitMergeInputChains1_0,
/*  1804*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  1812*/      0, /*End of Scope*/
/*  1813*/    /*Scope*/ 36, /*->1850*/
/*  1814*/      OPC_CheckPredicate, 9, // Predicate_zextload
/*  1816*/      OPC_CheckPredicate, 3, // Predicate_zextloadi8
/*  1818*/      OPC_CheckType, MVT::i64,
/*  1820*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1822*/      OPC_Scope, 12, /*->1836*/ // 2 children in Scope
/*  1824*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1827*/        OPC_EmitMergeInputChains1_0,
/*  1828*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1836*/      /*Scope*/ 12, /*->1849*/
/*  1837*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1840*/        OPC_EmitMergeInputChains1_0,
/*  1841*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  1849*/      0, /*End of Scope*/
/*  1850*/    /*Scope*/ 36, /*->1887*/
/*  1851*/      OPC_CheckPredicate, 11, // Predicate_extload
/*  1853*/      OPC_CheckPredicate, 3, // Predicate_extloadi8
/*  1855*/      OPC_CheckType, MVT::i64,
/*  1857*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1859*/      OPC_Scope, 12, /*->1873*/ // 2 children in Scope
/*  1861*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1864*/        OPC_EmitMergeInputChains1_0,
/*  1865*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1873*/      /*Scope*/ 12, /*->1886*/
/*  1874*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1877*/        OPC_EmitMergeInputChains1_0,
/*  1878*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  1886*/      0, /*End of Scope*/
/*  1887*/    /*Scope*/ 36, /*->1924*/
/*  1888*/      OPC_CheckPredicate, 8, // Predicate_sextload
/*  1890*/      OPC_CheckPredicate, 3, // Predicate_sextloadi8
/*  1892*/      OPC_CheckType, MVT::i64,
/*  1894*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1896*/      OPC_Scope, 12, /*->1910*/ // 2 children in Scope
/*  1898*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1901*/        OPC_EmitMergeInputChains1_0,
/*  1902*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1910*/      /*Scope*/ 12, /*->1923*/
/*  1911*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1914*/        OPC_EmitMergeInputChains1_0,
/*  1915*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  1923*/      0, /*End of Scope*/
/*  1924*/    /*Scope*/ 36, /*->1961*/
/*  1925*/      OPC_CheckPredicate, 9, // Predicate_zextload
/*  1927*/      OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*  1929*/      OPC_CheckType, MVT::i64,
/*  1931*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1933*/      OPC_Scope, 12, /*->1947*/ // 2 children in Scope
/*  1935*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1938*/        OPC_EmitMergeInputChains1_0,
/*  1939*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1947*/      /*Scope*/ 12, /*->1960*/
/*  1948*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1951*/        OPC_EmitMergeInputChains1_0,
/*  1952*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  1960*/      0, /*End of Scope*/
/*  1961*/    /*Scope*/ 36, /*->1998*/
/*  1962*/      OPC_CheckPredicate, 11, // Predicate_extload
/*  1964*/      OPC_CheckPredicate, 4, // Predicate_extloadi16
/*  1966*/      OPC_CheckType, MVT::i64,
/*  1968*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  1970*/      OPC_Scope, 12, /*->1984*/ // 2 children in Scope
/*  1972*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  1975*/        OPC_EmitMergeInputChains1_0,
/*  1976*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  1984*/      /*Scope*/ 12, /*->1997*/
/*  1985*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  1988*/        OPC_EmitMergeInputChains1_0,
/*  1989*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  1997*/      0, /*End of Scope*/
/*  1998*/    /*Scope*/ 36, /*->2035*/
/*  1999*/      OPC_CheckPredicate, 8, // Predicate_sextload
/*  2001*/      OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*  2003*/      OPC_CheckType, MVT::i64,
/*  2005*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2007*/      OPC_Scope, 12, /*->2021*/ // 2 children in Scope
/*  2009*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2012*/        OPC_EmitMergeInputChains1_0,
/*  2013*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2021*/      /*Scope*/ 12, /*->2034*/
/*  2022*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2025*/        OPC_EmitMergeInputChains1_0,
/*  2026*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  2034*/      0, /*End of Scope*/
/*  2035*/    /*Scope*/ 36, /*->2072*/
/*  2036*/      OPC_CheckPredicate, 9, // Predicate_zextload
/*  2038*/      OPC_CheckPredicate, 5, // Predicate_zextloadi32
/*  2040*/      OPC_CheckType, MVT::i64,
/*  2042*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2044*/      OPC_Scope, 12, /*->2058*/ // 2 children in Scope
/*  2046*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2049*/        OPC_EmitMergeInputChains1_0,
/*  2050*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2058*/      /*Scope*/ 12, /*->2071*/
/*  2059*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2062*/        OPC_EmitMergeInputChains1_0,
/*  2063*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LDri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  2071*/      0, /*End of Scope*/
/*  2072*/    /*Scope*/ 36, /*->2109*/
/*  2073*/      OPC_CheckPredicate, 11, // Predicate_extload
/*  2075*/      OPC_CheckPredicate, 5, // Predicate_extloadi32
/*  2077*/      OPC_CheckType, MVT::i64,
/*  2079*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2081*/      OPC_Scope, 12, /*->2095*/ // 2 children in Scope
/*  2083*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2086*/        OPC_EmitMergeInputChains1_0,
/*  2087*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2095*/      /*Scope*/ 12, /*->2108*/
/*  2096*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2099*/        OPC_EmitMergeInputChains1_0,
/*  2100*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LDri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  2108*/      0, /*End of Scope*/
/*  2109*/    /*Scope*/ 36, /*->2146*/
/*  2110*/      OPC_CheckPredicate, 8, // Predicate_sextload
/*  2112*/      OPC_CheckPredicate, 5, // Predicate_sextloadi32
/*  2114*/      OPC_CheckType, MVT::i64,
/*  2116*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2118*/      OPC_Scope, 12, /*->2132*/ // 2 children in Scope
/*  2120*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2123*/        OPC_EmitMergeInputChains1_0,
/*  2124*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDSWrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LDSWrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2132*/      /*Scope*/ 12, /*->2145*/
/*  2133*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2136*/        OPC_EmitMergeInputChains1_0,
/*  2137*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDSWri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LDSWri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$addr)
/*  2145*/      0, /*End of Scope*/
/*  2146*/    /*Scope*/ 24|128,1/*152*/, /*->2300*/
/*  2148*/      OPC_CheckPredicate, 10, // Predicate_load
/*  2150*/      OPC_SwitchType /*4 cases */, 28, MVT::f32,// ->2181
/*  2153*/        OPC_Scope, 12, /*->2167*/ // 2 children in Scope
/*  2155*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2158*/          OPC_EmitMergeInputChains1_0,
/*  2159*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[f32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDFrr:{ *:[f32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2167*/        /*Scope*/ 12, /*->2180*/
/*  2168*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2171*/          OPC_EmitMergeInputChains1_0,
/*  2172*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[f32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDFri:{ *:[f32] } ADDRri:{ *:[iPTR] }:$addr)
/*  2180*/        0, /*End of Scope*/
/*  2181*/      /*SwitchType*/ 28, MVT::f64,// ->2211
/*  2183*/        OPC_Scope, 12, /*->2197*/ // 2 children in Scope
/*  2185*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2188*/          OPC_EmitMergeInputChains1_0,
/*  2189*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[f64] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDFrr:{ *:[f64] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2197*/        /*Scope*/ 12, /*->2210*/
/*  2198*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2201*/          OPC_EmitMergeInputChains1_0,
/*  2202*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[f64] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDFri:{ *:[f64] } ADDRri:{ *:[iPTR] }:$addr)
/*  2210*/        0, /*End of Scope*/
/*  2211*/      /*SwitchType*/ 30, MVT::f128,// ->2243
/*  2213*/        OPC_CheckPatternPredicate, 1, // (Subtarget->hasHardQuad()) && (Subtarget->isV9())
/*  2215*/        OPC_Scope, 12, /*->2229*/ // 2 children in Scope
/*  2217*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2220*/          OPC_EmitMergeInputChains1_0,
/*  2221*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDQFrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f128, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[f128] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDQFrr:{ *:[f128] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2229*/        /*Scope*/ 12, /*->2242*/
/*  2230*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2233*/          OPC_EmitMergeInputChains1_0,
/*  2234*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDQFri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::f128, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[f128] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDQFri:{ *:[f128] } ADDRri:{ *:[iPTR] }:$addr)
/*  2242*/        0, /*End of Scope*/
/*  2243*/      /*SwitchType*/ 54, MVT::v2i32,// ->2299
/*  2245*/        OPC_Scope, 12, /*->2259*/ // 4 children in Scope
/*  2247*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2250*/          OPC_EmitMergeInputChains1_0,
/*  2251*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[v2i32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDrr:{ *:[v2i32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2259*/        /*Scope*/ 12, /*->2272*/
/*  2260*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2263*/          OPC_EmitMergeInputChains1_0,
/*  2264*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDDri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[v2i32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDri:{ *:[v2i32] } ADDRri:{ *:[iPTR] }:$addr)
/*  2272*/        /*Scope*/ 12, /*->2285*/
/*  2273*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*  2276*/          OPC_EmitMergeInputChains1_0,
/*  2277*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDDCrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[v2i32] } ADDRrr:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDCrr:{ *:[v2i32] } ADDRrr:{ *:[iPTR] }:$addr)
/*  2285*/        /*Scope*/ 12, /*->2298*/
/*  2286*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*  2289*/          OPC_EmitMergeInputChains1_0,
/*  2290*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDDCri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[v2i32] } ADDRri:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDDCri:{ *:[v2i32] } ADDRri:{ *:[iPTR] }:$addr)
/*  2298*/        0, /*End of Scope*/
/*  2299*/      0, // EndSwitchType
/*  2300*/    0, /*End of Scope*/
/*  2301*/  /*SwitchOpcode*/ 38, TARGET_VAL(ISD::ATOMIC_SWAP),// ->2342
/*  2304*/    OPC_RecordMemRef,
/*  2305*/    OPC_RecordNode, // #0 = 'atomic_swap' chained node
/*  2306*/    OPC_RecordChild1, // #1 = $addr
/*  2307*/    OPC_RecordChild2, // #2 = $val
/*  2308*/    OPC_CheckPredicate, 5, // Predicate_atomic_swap_32
/*  2310*/    OPC_CheckType, MVT::i32,
/*  2312*/    OPC_Scope, 13, /*->2327*/ // 2 children in Scope
/*  2314*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #3 #4
/*  2317*/      OPC_EmitMergeInputChains1_0,
/*  2318*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SWAPrr), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$val)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (SWAPrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$val)
/*  2327*/    /*Scope*/ 13, /*->2341*/
/*  2328*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #3 #4
/*  2331*/      OPC_EmitMergeInputChains1_0,
/*  2332*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SWAPri), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$val)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (SWAPri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$addr, i32:{ *:[i32] }:$val)
/*  2341*/    0, /*End of Scope*/
/*  2342*/  /*SwitchOpcode*/ 8|128,1/*136*/, TARGET_VAL(ISD::ATOMIC_LOAD),// ->2482
/*  2346*/    OPC_RecordMemRef,
/*  2347*/    OPC_RecordNode, // #0 = 'atomic_load' chained node
/*  2348*/    OPC_RecordChild1, // #1 = $src
/*  2349*/    OPC_SwitchType /*2 cases */, 95, MVT::i32,// ->2447
/*  2352*/      OPC_Scope, 30, /*->2384*/ // 3 children in Scope
/*  2354*/        OPC_CheckPredicate, 3, // Predicate_atomic_load_8
/*  2356*/        OPC_Scope, 12, /*->2370*/ // 2 children in Scope
/*  2358*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*  2361*/          OPC_EmitMergeInputChains1_0,
/*  2362*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)<<P:Predicate_atomic_load_8>> - Complexity = 13
                    // Dst: (LDUBrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)
/*  2370*/        /*Scope*/ 12, /*->2383*/
/*  2371*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*  2374*/          OPC_EmitMergeInputChains1_0,
/*  2375*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)<<P:Predicate_atomic_load_8>> - Complexity = 13
                    // Dst: (LDUBri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)
/*  2383*/        0, /*End of Scope*/
/*  2384*/      /*Scope*/ 30, /*->2415*/
/*  2385*/        OPC_CheckPredicate, 4, // Predicate_atomic_load_16
/*  2387*/        OPC_Scope, 12, /*->2401*/ // 2 children in Scope
/*  2389*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*  2392*/          OPC_EmitMergeInputChains1_0,
/*  2393*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)<<P:Predicate_atomic_load_16>> - Complexity = 13
                    // Dst: (LDUHrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)
/*  2401*/        /*Scope*/ 12, /*->2414*/
/*  2402*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*  2405*/          OPC_EmitMergeInputChains1_0,
/*  2406*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)<<P:Predicate_atomic_load_16>> - Complexity = 13
                    // Dst: (LDUHri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)
/*  2414*/        0, /*End of Scope*/
/*  2415*/      /*Scope*/ 30, /*->2446*/
/*  2416*/        OPC_CheckPredicate, 5, // Predicate_atomic_load_32
/*  2418*/        OPC_Scope, 12, /*->2432*/ // 2 children in Scope
/*  2420*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*  2423*/          OPC_EmitMergeInputChains1_0,
/*  2424*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)<<P:Predicate_atomic_load_32>> - Complexity = 13
                    // Dst: (LDrr:{ *:[i32] } ADDRrr:{ *:[iPTR] }:$src)
/*  2432*/        /*Scope*/ 12, /*->2445*/
/*  2433*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*  2436*/          OPC_EmitMergeInputChains1_0,
/*  2437*/          OPC_MorphNodeTo1, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (atomic_load:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)<<P:Predicate_atomic_load_32>> - Complexity = 13
                    // Dst: (LDri:{ *:[i32] } ADDRri:{ *:[iPTR] }:$src)
/*  2445*/        0, /*End of Scope*/
/*  2446*/      0, /*End of Scope*/
/*  2447*/    /*SwitchType*/ 32, MVT::i64,// ->2481
/*  2449*/      OPC_CheckPredicate, 13, // Predicate_atomic_load_64
/*  2451*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2453*/      OPC_Scope, 12, /*->2467*/ // 2 children in Scope
/*  2455*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*  2458*/        OPC_EmitMergeInputChains1_0,
/*  2459*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$src)<<P:Predicate_atomic_load_64>> - Complexity = 13
                  // Dst: (LDXrr:{ *:[i64] } ADDRrr:{ *:[iPTR] }:$src)
/*  2467*/      /*Scope*/ 12, /*->2480*/
/*  2468*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*  2471*/        OPC_EmitMergeInputChains1_0,
/*  2472*/        OPC_MorphNodeTo1, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (atomic_load:{ *:[i64] } ADDRri:{ *:[iPTR] }:$src)<<P:Predicate_atomic_load_64>> - Complexity = 13
                  // Dst: (LDXri:{ *:[i64] } ADDRri:{ *:[iPTR] }:$src)
/*  2480*/      0, /*End of Scope*/
/*  2481*/    0, // EndSwitchType
/*  2482*/  /*SwitchOpcode*/ 11|128,1/*139*/, TARGET_VAL(ISD::ATOMIC_STORE),// ->2625
/*  2486*/    OPC_RecordMemRef,
/*  2487*/    OPC_RecordNode, // #0 = 'atomic_store' chained node
/*  2488*/    OPC_RecordChild1, // #1 = $dst
/*  2489*/    OPC_RecordChild2, // #2 = $val
/*  2490*/    OPC_Scope, 97, /*->2589*/ // 2 children in Scope
/*  2492*/      OPC_CheckChild2Type, MVT::i32,
/*  2494*/      OPC_Scope, 30, /*->2526*/ // 3 children in Scope
/*  2496*/        OPC_CheckPredicate, 3, // Predicate_atomic_store_8
/*  2498*/        OPC_Scope, 12, /*->2512*/ // 2 children in Scope
/*  2500*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*  2503*/          OPC_EmitMergeInputChains1_0,
/*  2504*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:{ *:[iPTR] }:$dst, i32:{ *:[i32] }:$val)<<P:Predicate_atomic_store_8>> - Complexity = 13
                    // Dst: (STBrr ADDRrr:{ *:[iPTR] }:$dst, ?:{ *:[i32] }:$val)
/*  2512*/        /*Scope*/ 12, /*->2525*/
/*  2513*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*  2516*/          OPC_EmitMergeInputChains1_0,
/*  2517*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:{ *:[iPTR] }:$dst, i32:{ *:[i32] }:$val)<<P:Predicate_atomic_store_8>> - Complexity = 13
                    // Dst: (STBri ADDRri:{ *:[iPTR] }:$dst, ?:{ *:[i32] }:$val)
/*  2525*/        0, /*End of Scope*/
/*  2526*/      /*Scope*/ 30, /*->2557*/
/*  2527*/        OPC_CheckPredicate, 4, // Predicate_atomic_store_16
/*  2529*/        OPC_Scope, 12, /*->2543*/ // 2 children in Scope
/*  2531*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*  2534*/          OPC_EmitMergeInputChains1_0,
/*  2535*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:{ *:[iPTR] }:$dst, i32:{ *:[i32] }:$val)<<P:Predicate_atomic_store_16>> - Complexity = 13
                    // Dst: (STHrr ADDRrr:{ *:[iPTR] }:$dst, ?:{ *:[i32] }:$val)
/*  2543*/        /*Scope*/ 12, /*->2556*/
/*  2544*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*  2547*/          OPC_EmitMergeInputChains1_0,
/*  2548*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:{ *:[iPTR] }:$dst, i32:{ *:[i32] }:$val)<<P:Predicate_atomic_store_16>> - Complexity = 13
                    // Dst: (STHri ADDRri:{ *:[iPTR] }:$dst, ?:{ *:[i32] }:$val)
/*  2556*/        0, /*End of Scope*/
/*  2557*/      /*Scope*/ 30, /*->2588*/
/*  2558*/        OPC_CheckPredicate, 5, // Predicate_atomic_store_32
/*  2560*/        OPC_Scope, 12, /*->2574*/ // 2 children in Scope
/*  2562*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*  2565*/          OPC_EmitMergeInputChains1_0,
/*  2566*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRrr:{ *:[iPTR] }:$dst, i32:{ *:[i32] }:$val)<<P:Predicate_atomic_store_32>> - Complexity = 13
                    // Dst: (STrr ADDRrr:{ *:[iPTR] }:$dst, ?:{ *:[i32] }:$val)
/*  2574*/        /*Scope*/ 12, /*->2587*/
/*  2575*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*  2578*/          OPC_EmitMergeInputChains1_0,
/*  2579*/          OPC_MorphNodeTo0, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 2, 
                    // Src: (atomic_store ADDRri:{ *:[iPTR] }:$dst, i32:{ *:[i32] }:$val)<<P:Predicate_atomic_store_32>> - Complexity = 13
                    // Dst: (STri ADDRri:{ *:[iPTR] }:$dst, ?:{ *:[i32] }:$val)
/*  2587*/        0, /*End of Scope*/
/*  2588*/      0, /*End of Scope*/
/*  2589*/    /*Scope*/ 34, /*->2624*/
/*  2590*/      OPC_CheckChild2Type, MVT::i64,
/*  2592*/      OPC_CheckPredicate, 13, // Predicate_atomic_store_64
/*  2594*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2596*/      OPC_Scope, 12, /*->2610*/ // 2 children in Scope
/*  2598*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$dst #3 #4
/*  2601*/        OPC_EmitMergeInputChains1_0,
/*  2602*/        OPC_MorphNodeTo0, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRrr:{ *:[iPTR] }:$dst, i64:{ *:[i64] }:$val)<<P:Predicate_atomic_store_64>> - Complexity = 13
                  // Dst: (STXrr ADDRrr:{ *:[iPTR] }:$dst, ?:{ *:[i64] }:$val)
/*  2610*/      /*Scope*/ 12, /*->2623*/
/*  2611*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$dst #3 #4
/*  2614*/        OPC_EmitMergeInputChains1_0,
/*  2615*/        OPC_MorphNodeTo0, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 2, 
                  // Src: (atomic_store ADDRri:{ *:[iPTR] }:$dst, i64:{ *:[i64] }:$val)<<P:Predicate_atomic_store_64>> - Complexity = 13
                  // Dst: (STXri ADDRri:{ *:[iPTR] }:$dst, ?:{ *:[i64] }:$val)
/*  2623*/      0, /*End of Scope*/
/*  2624*/    0, /*End of Scope*/
/*  2625*/  /*SwitchOpcode*/ 28, TARGET_VAL(ISD::BRIND),// ->2656
/*  2628*/    OPC_RecordNode, // #0 = 'brind' chained node
/*  2629*/    OPC_RecordChild1, // #1 = $ptr
/*  2630*/    OPC_Scope, 11, /*->2643*/ // 2 children in Scope
/*  2632*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*  2635*/      OPC_EmitMergeInputChains1_0,
/*  2636*/      OPC_MorphNodeTo0, TARGET_VAL(SP::BINDrr), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (brind ADDRrr:{ *:[iPTR] }:$ptr) - Complexity = 12
                // Dst: (BINDrr ADDRrr:{ *:[iPTR] }:$ptr)
/*  2643*/    /*Scope*/ 11, /*->2655*/
/*  2644*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*  2647*/      OPC_EmitMergeInputChains1_0,
/*  2648*/      OPC_MorphNodeTo0, TARGET_VAL(SP::BINDri), 0|OPFL_Chain,
                    2/*#Ops*/, 2, 3, 
                // Src: (brind ADDRri:{ *:[iPTR] }:$ptr) - Complexity = 12
                // Dst: (BINDri ADDRri:{ *:[iPTR] }:$ptr)
/*  2655*/    0, /*End of Scope*/
/*  2656*/  /*SwitchOpcode*/ 55, TARGET_VAL(SPISD::CALL),// ->2714
/*  2659*/    OPC_RecordNode, // #0 = 'call' chained node
/*  2660*/    OPC_CaptureGlueInput,
/*  2661*/    OPC_RecordChild1, // #1 = $ptr
/*  2662*/    OPC_Scope, 11, /*->2675*/ // 3 children in Scope
/*  2664*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*  2667*/      OPC_EmitMergeInputChains1_0,
/*  2668*/      OPC_MorphNodeTo0, TARGET_VAL(SP::CALLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    2/*#Ops*/, 2, 3, 
                // Src: (call ADDRrr:{ *:[i32] }:$ptr) - Complexity = 12
                // Dst: (CALLrr ADDRrr:{ *:[i32] }:$ptr)
/*  2675*/    /*Scope*/ 11, /*->2687*/
/*  2676*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*  2679*/      OPC_EmitMergeInputChains1_0,
/*  2680*/      OPC_MorphNodeTo0, TARGET_VAL(SP::CALLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    2/*#Ops*/, 2, 3, 
                // Src: (call ADDRri:{ *:[i32] }:$ptr) - Complexity = 12
                // Dst: (CALLri ADDRri:{ *:[i32] }:$ptr)
/*  2687*/    /*Scope*/ 25, /*->2713*/
/*  2688*/      OPC_MoveChild1,
/*  2689*/      OPC_SwitchOpcode /*2 cases */, 8, TARGET_VAL(ISD::TargetGlobalAddress),// ->2701
/*  2693*/        OPC_MoveParent,
/*  2694*/        OPC_EmitMergeInputChains1_0,
/*  2695*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#Ops*/, 1, 
                  // Src: (call (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                  // Dst: (CALL (tglobaladdr:{ *:[i32] }):$dst)
/*  2701*/      /*SwitchOpcode*/ 8, TARGET_VAL(ISD::TargetExternalSymbol),// ->2712
/*  2704*/        OPC_MoveParent,
/*  2705*/        OPC_EmitMergeInputChains1_0,
/*  2706*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#Ops*/, 1, 
                  // Src: (call (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                  // Dst: (CALL (texternalsym:{ *:[i32] }):$dst)
/*  2712*/      0, // EndSwitchOpcode
/*  2713*/    0, /*End of Scope*/
/*  2714*/  /*SwitchOpcode*/ 77|128,1/*205*/, TARGET_VAL(ISD::AND),// ->2923
/*  2718*/    OPC_Scope, 42, /*->2762*/ // 4 children in Scope
/*  2720*/      OPC_RecordChild0, // #0 = $rs1
/*  2721*/      OPC_MoveChild1,
/*  2722*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2725*/      OPC_RecordChild0, // #1 = $rs2
/*  2726*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2737*/      OPC_MoveParent,
/*  2738*/      OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2749
/*  2741*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ANDNrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$rs1, (xor:{ *:[i32] } i32:{ *:[i32] }:$rs2, -1:{ *:[i32] })) - Complexity = 11
                  // Dst: (ANDNrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  2749*/      /*SwitchType*/ 10, MVT::i64,// ->2761
/*  2751*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2753*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i64] } i64:{ *:[i64] }:$b, (xor:{ *:[i64] } i64:{ *:[i64] }:$c, -1:{ *:[i64] })) - Complexity = 11
                  // Dst: (ANDXNrr:{ *:[i64] } i64:{ *:[i64] }:$b, i64:{ *:[i64] }:$c)
/*  2761*/      0, // EndSwitchType
/*  2762*/    /*Scope*/ 42, /*->2805*/
/*  2763*/      OPC_MoveChild0,
/*  2764*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2767*/      OPC_RecordChild0, // #0 = $rs2
/*  2768*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2779*/      OPC_MoveParent,
/*  2780*/      OPC_RecordChild1, // #1 = $rs1
/*  2781*/      OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2792
/*  2784*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ANDNrr), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rs2, -1:{ *:[i32] }), i32:{ *:[i32] }:$rs1) - Complexity = 11
                  // Dst: (ANDNrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  2792*/      /*SwitchType*/ 10, MVT::i64,// ->2804
/*  2794*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2796*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$c, -1:{ *:[i64] }), i64:{ *:[i64] }:$b) - Complexity = 11
                  // Dst: (ANDXNrr:{ *:[i64] } i64:{ *:[i64] }:$b, i64:{ *:[i64] }:$c)
/*  2804*/      0, // EndSwitchType
/*  2805*/    /*Scope*/ 22, /*->2828*/
/*  2806*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*  2812*/      OPC_RecordChild0, // #0 = $val
/*  2813*/      OPC_CheckType, MVT::i64,
/*  2815*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2817*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2820*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:{ *:[i64] } i64:{ *:[i64] }:$val, 4294967295:{ *:[i64] }) - Complexity = 8
                // Dst: (SRLri:{ *:[i64] } ?:{ *:[i64] }:$val, 0:{ *:[i32] })
/*  2828*/    /*Scope*/ 93, /*->2922*/
/*  2829*/      OPC_RecordChild0, // #0 = $rs1
/*  2830*/      OPC_RecordChild1, // #1 = $simm13
/*  2831*/      OPC_Scope, 64, /*->2897*/ // 3 children in Scope
/*  2833*/        OPC_MoveChild1,
/*  2834*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2837*/        OPC_Scope, 31, /*->2870*/ // 2 children in Scope
/*  2839*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*  2841*/          OPC_MoveParent,
/*  2842*/          OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->2855
/*  2845*/            OPC_EmitConvertToTarget, 1,
/*  2847*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ANDri), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (ANDri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  2855*/          /*SwitchType*/ 12, MVT::i64,// ->2869
/*  2857*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2859*/            OPC_EmitConvertToTarget, 1,
/*  2861*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXri), 0,
                          MVT::i64, 2/*#Ops*/, 0, 2, 
                      // Src: (and:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (ANDXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] }):$simm13)
/*  2869*/          0, // EndSwitchType
/*  2870*/        /*Scope*/ 25, /*->2896*/
/*  2871*/          OPC_CheckPredicate, 14, // Predicate_SETHIimm_not
/*  2873*/          OPC_MoveParent,
/*  2874*/          OPC_CheckType, MVT::i32,
/*  2876*/          OPC_EmitConvertToTarget, 1,
/*  2878*/          OPC_EmitNodeXForm, 0, 2, // HI22_not
/*  2881*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*  2888*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ANDNrr), 0,
                        MVT::i32, 2/*#Ops*/, 0, 4, 
                    // Src: (and:{ *:[i32] } IntRegs:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_SETHIimm_not>><<X:HI22_not>>:$rs2) - Complexity = 7
                    // Dst: (ANDNrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, (SETHIi:{ *:[i32] } (HI22_not:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_SETHIimm_not>>:$rs2)))
/*  2896*/        0, /*End of Scope*/
/*  2897*/      /*Scope*/ 10, /*->2908*/
/*  2898*/        OPC_CheckType, MVT::i32,
/*  2900*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ANDrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (ANDrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  2908*/      /*Scope*/ 12, /*->2921*/
/*  2909*/        OPC_CheckType, MVT::i64,
/*  2911*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2913*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ANDXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2) - Complexity = 3
                  // Dst: (ANDXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2)
/*  2921*/      0, /*End of Scope*/
/*  2922*/    0, /*End of Scope*/
/*  2923*/  /*SwitchOpcode*/ 54|128,1/*182*/, TARGET_VAL(ISD::OR),// ->3109
/*  2927*/    OPC_Scope, 42, /*->2971*/ // 3 children in Scope
/*  2929*/      OPC_RecordChild0, // #0 = $rs1
/*  2930*/      OPC_MoveChild1,
/*  2931*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2934*/      OPC_RecordChild0, // #1 = $rs2
/*  2935*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2946*/      OPC_MoveParent,
/*  2947*/      OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->2958
/*  2950*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORNrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i32] } i32:{ *:[i32] }:$rs1, (xor:{ *:[i32] } i32:{ *:[i32] }:$rs2, -1:{ *:[i32] })) - Complexity = 11
                  // Dst: (ORNrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  2958*/      /*SwitchType*/ 10, MVT::i64,// ->2970
/*  2960*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  2962*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i64] } i64:{ *:[i64] }:$b, (xor:{ *:[i64] } i64:{ *:[i64] }:$c, -1:{ *:[i64] })) - Complexity = 11
                  // Dst: (ORXNrr:{ *:[i64] } i64:{ *:[i64] }:$b, i64:{ *:[i64] }:$c)
/*  2970*/      0, // EndSwitchType
/*  2971*/    /*Scope*/ 42, /*->3014*/
/*  2972*/      OPC_MoveChild0,
/*  2973*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2976*/      OPC_RecordChild0, // #0 = $rs2
/*  2977*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2988*/      OPC_MoveParent,
/*  2989*/      OPC_RecordChild1, // #1 = $rs1
/*  2990*/      OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3001
/*  2993*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORNrr), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rs2, -1:{ *:[i32] }), i32:{ *:[i32] }:$rs1) - Complexity = 11
                  // Dst: (ORNrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  3001*/      /*SwitchType*/ 10, MVT::i64,// ->3013
/*  3003*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3005*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORXNrr), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$c, -1:{ *:[i64] }), i64:{ *:[i64] }:$b) - Complexity = 11
                  // Dst: (ORXNrr:{ *:[i64] } i64:{ *:[i64] }:$b, i64:{ *:[i64] }:$c)
/*  3013*/      0, // EndSwitchType
/*  3014*/    /*Scope*/ 93, /*->3108*/
/*  3015*/      OPC_RecordChild0, // #0 = $rs1
/*  3016*/      OPC_RecordChild1, // #1 = $simm13
/*  3017*/      OPC_Scope, 64, /*->3083*/ // 3 children in Scope
/*  3019*/        OPC_MoveChild1,
/*  3020*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3023*/        OPC_Scope, 31, /*->3056*/ // 2 children in Scope
/*  3025*/          OPC_CheckPredicate, 6, // Predicate_simm13
/*  3027*/          OPC_MoveParent,
/*  3028*/          OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->3041
/*  3031*/            OPC_EmitConvertToTarget, 1,
/*  3033*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                          MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (or:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (ORri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  3041*/          /*SwitchType*/ 12, MVT::i64,// ->3055
/*  3043*/            OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3045*/            OPC_EmitConvertToTarget, 1,
/*  3047*/            OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                          MVT::i64, 2/*#Ops*/, 0, 2, 
                      // Src: (or:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                      // Dst: (ORXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] }):$simm13)
/*  3055*/          0, // EndSwitchType
/*  3056*/        /*Scope*/ 25, /*->3082*/
/*  3057*/          OPC_CheckPredicate, 14, // Predicate_SETHIimm_not
/*  3059*/          OPC_MoveParent,
/*  3060*/          OPC_CheckType, MVT::i32,
/*  3062*/          OPC_EmitConvertToTarget, 1,
/*  3064*/          OPC_EmitNodeXForm, 0, 2, // HI22_not
/*  3067*/          OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*  3074*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORNrr), 0,
                        MVT::i32, 2/*#Ops*/, 0, 4, 
                    // Src: (or:{ *:[i32] } IntRegs:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_SETHIimm_not>><<X:HI22_not>>:$rs2) - Complexity = 7
                    // Dst: (ORNrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, (SETHIi:{ *:[i32] } (HI22_not:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_SETHIimm_not>>:$rs2)))
/*  3082*/        0, /*End of Scope*/
/*  3083*/      /*Scope*/ 10, /*->3094*/
/*  3084*/        OPC_CheckType, MVT::i32,
/*  3086*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (ORrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  3094*/      /*Scope*/ 12, /*->3107*/
/*  3095*/        OPC_CheckType, MVT::i64,
/*  3097*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3099*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2) - Complexity = 3
                  // Dst: (ORXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2)
/*  3107*/      0, /*End of Scope*/
/*  3108*/    0, /*End of Scope*/
/*  3109*/  /*SwitchOpcode*/ 74|128,1/*202*/, TARGET_VAL(SPISD::SELECT_ICC),// ->3315
/*  3113*/    OPC_CaptureGlueInput,
/*  3114*/    OPC_RecordChild0, // #0 = $simm11
/*  3115*/    OPC_Scope, 51, /*->3168*/ // 2 children in Scope
/*  3117*/      OPC_MoveChild0,
/*  3118*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3121*/      OPC_CheckPredicate, 15, // Predicate_simm11
/*  3123*/      OPC_MoveParent,
/*  3124*/      OPC_RecordChild1, // #1 = $f
/*  3125*/      OPC_RecordChild2, // #2 = $cond
/*  3126*/      OPC_MoveChild2,
/*  3127*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3130*/      OPC_MoveParent,
/*  3131*/      OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3149
/*  3134*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3136*/        OPC_EmitConvertToTarget, 0,
/*  3138*/        OPC_EmitConvertToTarget, 2,
/*  3140*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselecticc:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_simm11>>:$simm11, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 10
                  // Dst: (MOVICCri:{ *:[i32] } (imm:{ *:[i32] }):$simm11, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3149*/      /*SwitchType*/ 16, MVT::i64,// ->3167
/*  3151*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3153*/        OPC_EmitNodeXForm, 1, 0, // as_i32imm
/*  3156*/        OPC_EmitConvertToTarget, 2,
/*  3158*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselecticc:{ *:[i64] } (imm:{ *:[i64] })<<P:Predicate_simm11>>:$t, i64:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 10
                  // Dst: (MOVICCri:{ *:[i64] } (as_i32imm:{ *:[i32] } ?:{ *:[i64] }:$t), ?:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3167*/      0, // EndSwitchType
/*  3168*/    /*Scope*/ 16|128,1/*144*/, /*->3314*/
/*  3170*/      OPC_RecordChild1, // #1 = $f
/*  3171*/      OPC_RecordChild2, // #2 = $cond
/*  3172*/      OPC_MoveChild2,
/*  3173*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3176*/      OPC_MoveParent,
/*  3177*/      OPC_SwitchType /*5 cases */, 28, MVT::i32,// ->3208
/*  3180*/        OPC_Scope, 13, /*->3195*/ // 2 children in Scope
/*  3182*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3184*/          OPC_EmitConvertToTarget, 2,
/*  3186*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:{ *:[i32] } i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                    // Dst: (MOVICCrr:{ *:[i32] } i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3195*/        /*Scope*/ 11, /*->3207*/
/*  3196*/          OPC_EmitConvertToTarget, 2,
/*  3198*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:{ *:[i32] } i32:{ *:[i32] }:$T, i32:{ *:[i32] }:$F, (imm:{ *:[i32] }):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_Int_ICC:{ *:[i32] } i32:{ *:[i32] }:$T, i32:{ *:[i32] }:$F, (imm:{ *:[i32] }):$Cond)
/*  3207*/        0, /*End of Scope*/
/*  3208*/      /*SwitchType*/ 13, MVT::i64,// ->3223
/*  3210*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3212*/        OPC_EmitConvertToTarget, 2,
/*  3214*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:{ *:[i64] } i64:{ *:[i64] }:$t, i64:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                  // Dst: (MOVICCrr:{ *:[i64] } ?:{ *:[i64] }:$t, ?:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3223*/      /*SwitchType*/ 28, MVT::f32,// ->3253
/*  3225*/        OPC_Scope, 13, /*->3240*/ // 2 children in Scope
/*  3227*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3229*/          OPC_EmitConvertToTarget, 2,
/*  3231*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:{ *:[f32] } f32:{ *:[f32] }:$rs2, f32:{ *:[f32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                    // Dst: (FMOVS_ICC:{ *:[f32] } f32:{ *:[f32] }:$rs2, f32:{ *:[f32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3240*/        /*Scope*/ 11, /*->3252*/
/*  3241*/          OPC_EmitConvertToTarget, 2,
/*  3243*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:{ *:[f32] } f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F, (imm:{ *:[i32] }):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_FP_ICC:{ *:[f32] } f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F, (imm:{ *:[i32] }):$Cond)
/*  3252*/        0, /*End of Scope*/
/*  3253*/      /*SwitchType*/ 28, MVT::f64,// ->3283
/*  3255*/        OPC_Scope, 13, /*->3270*/ // 2 children in Scope
/*  3257*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3259*/          OPC_EmitConvertToTarget, 2,
/*  3261*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:{ *:[f64] } f64:{ *:[f64] }:$rs2, f64:{ *:[f64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                    // Dst: (FMOVD_ICC:{ *:[f64] } f64:{ *:[f64] }:$rs2, f64:{ *:[f64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3270*/        /*Scope*/ 11, /*->3282*/
/*  3271*/          OPC_EmitConvertToTarget, 2,
/*  3273*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:{ *:[f64] } f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F, (imm:{ *:[i32] }):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_DFP_ICC:{ *:[f64] } f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F, (imm:{ *:[i32] }):$Cond)
/*  3282*/        0, /*End of Scope*/
/*  3283*/      /*SwitchType*/ 28, MVT::f128,// ->3313
/*  3285*/        OPC_Scope, 13, /*->3300*/ // 2 children in Scope
/*  3287*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3289*/          OPC_EmitConvertToTarget, 2,
/*  3291*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_ICC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:{ *:[f128] } f128:{ *:[f128] }:$rs2, f128:{ *:[f128] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                    // Dst: (FMOVQ_ICC:{ *:[f128] } f128:{ *:[f128] }:$rs2, f128:{ *:[f128] }:$f, (imm:{ *:[i32] }):$cond)
/*  3300*/        /*Scope*/ 11, /*->3312*/
/*  3301*/          OPC_EmitConvertToTarget, 2,
/*  3303*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_QFP_ICC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselecticc:{ *:[f128] } f128:{ *:[f128] }:$T, f128:{ *:[f128] }:$F, (imm:{ *:[i32] }):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_QFP_ICC:{ *:[f128] } f128:{ *:[f128] }:$T, f128:{ *:[f128] }:$F, (imm:{ *:[i32] }):$Cond)
/*  3312*/        0, /*End of Scope*/
/*  3313*/      0, // EndSwitchType
/*  3314*/    0, /*End of Scope*/
/*  3315*/  /*SwitchOpcode*/ 74|128,1/*202*/, TARGET_VAL(SPISD::SELECT_FCC),// ->3521
/*  3319*/    OPC_CaptureGlueInput,
/*  3320*/    OPC_RecordChild0, // #0 = $simm11
/*  3321*/    OPC_Scope, 51, /*->3374*/ // 2 children in Scope
/*  3323*/      OPC_MoveChild0,
/*  3324*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3327*/      OPC_CheckPredicate, 15, // Predicate_simm11
/*  3329*/      OPC_MoveParent,
/*  3330*/      OPC_RecordChild1, // #1 = $f
/*  3331*/      OPC_RecordChild2, // #2 = $cond
/*  3332*/      OPC_MoveChild2,
/*  3333*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3336*/      OPC_MoveParent,
/*  3337*/      OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3355
/*  3340*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3342*/        OPC_EmitConvertToTarget, 0,
/*  3344*/        OPC_EmitConvertToTarget, 2,
/*  3346*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectfcc:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_simm11>>:$simm11, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 10
                  // Dst: (MOVFCCri:{ *:[i32] } (imm:{ *:[i32] }):$simm11, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3355*/      /*SwitchType*/ 16, MVT::i64,// ->3373
/*  3357*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3359*/        OPC_EmitNodeXForm, 1, 0, // as_i32imm
/*  3362*/        OPC_EmitConvertToTarget, 2,
/*  3364*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectfcc:{ *:[i64] } (imm:{ *:[i64] })<<P:Predicate_simm11>>:$t, i64:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 10
                  // Dst: (MOVFCCri:{ *:[i64] } (as_i32imm:{ *:[i32] } ?:{ *:[i64] }:$t), ?:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3373*/      0, // EndSwitchType
/*  3374*/    /*Scope*/ 16|128,1/*144*/, /*->3520*/
/*  3376*/      OPC_RecordChild1, // #1 = $f
/*  3377*/      OPC_RecordChild2, // #2 = $cond
/*  3378*/      OPC_MoveChild2,
/*  3379*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3382*/      OPC_MoveParent,
/*  3383*/      OPC_SwitchType /*5 cases */, 28, MVT::i32,// ->3414
/*  3386*/        OPC_Scope, 13, /*->3401*/ // 2 children in Scope
/*  3388*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3390*/          OPC_EmitConvertToTarget, 2,
/*  3392*/          OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:{ *:[i32] } i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                    // Dst: (MOVFCCrr:{ *:[i32] } i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3401*/        /*Scope*/ 11, /*->3413*/
/*  3402*/          OPC_EmitConvertToTarget, 2,
/*  3404*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                        MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:{ *:[i32] } i32:{ *:[i32] }:$T, i32:{ *:[i32] }:$F, (imm:{ *:[i32] }):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_Int_FCC:{ *:[i32] } i32:{ *:[i32] }:$T, i32:{ *:[i32] }:$F, (imm:{ *:[i32] }):$Cond)
/*  3413*/        0, /*End of Scope*/
/*  3414*/      /*SwitchType*/ 13, MVT::i64,// ->3429
/*  3416*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3418*/        OPC_EmitConvertToTarget, 2,
/*  3420*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:{ *:[i64] } i64:{ *:[i64] }:$t, i64:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                  // Dst: (MOVFCCrr:{ *:[i64] } ?:{ *:[i64] }:$t, ?:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3429*/      /*SwitchType*/ 28, MVT::f32,// ->3459
/*  3431*/        OPC_Scope, 13, /*->3446*/ // 2 children in Scope
/*  3433*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3435*/          OPC_EmitConvertToTarget, 2,
/*  3437*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:{ *:[f32] } f32:{ *:[f32] }:$rs2, f32:{ *:[f32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                    // Dst: (FMOVS_FCC:{ *:[f32] } f32:{ *:[f32] }:$rs2, f32:{ *:[f32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3446*/        /*Scope*/ 11, /*->3458*/
/*  3447*/          OPC_EmitConvertToTarget, 2,
/*  3449*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                        MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:{ *:[f32] } f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F, (imm:{ *:[i32] }):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_FP_FCC:{ *:[f32] } f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F, (imm:{ *:[i32] }):$Cond)
/*  3458*/        0, /*End of Scope*/
/*  3459*/      /*SwitchType*/ 28, MVT::f64,// ->3489
/*  3461*/        OPC_Scope, 13, /*->3476*/ // 2 children in Scope
/*  3463*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3465*/          OPC_EmitConvertToTarget, 2,
/*  3467*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:{ *:[f64] } f64:{ *:[f64] }:$rs2, f64:{ *:[f64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                    // Dst: (FMOVD_FCC:{ *:[f64] } f64:{ *:[f64] }:$rs2, f64:{ *:[f64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3476*/        /*Scope*/ 11, /*->3488*/
/*  3477*/          OPC_EmitConvertToTarget, 2,
/*  3479*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                        MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:{ *:[f64] } f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F, (imm:{ *:[i32] }):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_DFP_FCC:{ *:[f64] } f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F, (imm:{ *:[i32] }):$Cond)
/*  3488*/        0, /*End of Scope*/
/*  3489*/      /*SwitchType*/ 28, MVT::f128,// ->3519
/*  3491*/        OPC_Scope, 13, /*->3506*/ // 2 children in Scope
/*  3493*/          OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3495*/          OPC_EmitConvertToTarget, 2,
/*  3497*/          OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_FCC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:{ *:[f128] } f128:{ *:[f128] }:$rs2, f128:{ *:[f128] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                    // Dst: (FMOVQ_FCC:{ *:[f128] } f128:{ *:[f128] }:$rs2, f128:{ *:[f128] }:$f, (imm:{ *:[i32] }):$cond)
/*  3506*/        /*Scope*/ 11, /*->3518*/
/*  3507*/          OPC_EmitConvertToTarget, 2,
/*  3509*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SELECT_CC_QFP_FCC), 0|OPFL_GlueInput,
                        MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                    // Src: (SPselectfcc:{ *:[f128] } f128:{ *:[f128] }:$T, f128:{ *:[f128] }:$F, (imm:{ *:[i32] }):$Cond) - Complexity = 6
                    // Dst: (SELECT_CC_QFP_FCC:{ *:[f128] } f128:{ *:[f128] }:$T, f128:{ *:[f128] }:$F, (imm:{ *:[i32] }):$Cond)
/*  3518*/        0, /*End of Scope*/
/*  3519*/      0, // EndSwitchType
/*  3520*/    0, /*End of Scope*/
/*  3521*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(SPISD::SELECT_XCC),// ->3666
/*  3525*/    OPC_CaptureGlueInput,
/*  3526*/    OPC_RecordChild0, // #0 = $simm11
/*  3527*/    OPC_Scope, 51, /*->3580*/ // 2 children in Scope
/*  3529*/      OPC_MoveChild0,
/*  3530*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3533*/      OPC_CheckPredicate, 15, // Predicate_simm11
/*  3535*/      OPC_MoveParent,
/*  3536*/      OPC_RecordChild1, // #1 = $f
/*  3537*/      OPC_RecordChild2, // #2 = $cond
/*  3538*/      OPC_MoveChild2,
/*  3539*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3542*/      OPC_MoveParent,
/*  3543*/      OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->3561
/*  3546*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3548*/        OPC_EmitConvertToTarget, 0,
/*  3550*/        OPC_EmitConvertToTarget, 2,
/*  3552*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectxcc:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_simm11>>:$simm11, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 10
                  // Dst: (MOVXCCri:{ *:[i32] } (imm:{ *:[i32] }):$simm11, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3561*/      /*SwitchType*/ 16, MVT::i64,// ->3579
/*  3563*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3565*/        OPC_EmitNodeXForm, 1, 0, // as_i32imm
/*  3568*/        OPC_EmitConvertToTarget, 2,
/*  3570*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (SPselectxcc:{ *:[i64] } (imm:{ *:[i64] })<<P:Predicate_simm11>>:$t, i64:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 10
                  // Dst: (MOVXCCri:{ *:[i64] } (as_i32imm:{ *:[i32] } ?:{ *:[i64] }:$t), ?:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3579*/      0, // EndSwitchType
/*  3580*/    /*Scope*/ 84, /*->3665*/
/*  3581*/      OPC_RecordChild1, // #1 = $f
/*  3582*/      OPC_RecordChild2, // #2 = $cond
/*  3583*/      OPC_MoveChild2,
/*  3584*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3587*/      OPC_MoveParent,
/*  3588*/      OPC_SwitchType /*5 cases */, 13, MVT::i32,// ->3604
/*  3591*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3593*/        OPC_EmitConvertToTarget, 2,
/*  3595*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:{ *:[i32] } i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                  // Dst: (MOVXCCrr:{ *:[i32] } i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3604*/      /*SwitchType*/ 13, MVT::i64,// ->3619
/*  3606*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3608*/        OPC_EmitConvertToTarget, 2,
/*  3610*/        OPC_MorphNodeTo1, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                      MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:{ *:[i64] } i64:{ *:[i64] }:$t, i64:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                  // Dst: (MOVXCCrr:{ *:[i64] } ?:{ *:[i64] }:$t, ?:{ *:[i64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3619*/      /*SwitchType*/ 13, MVT::f32,// ->3634
/*  3621*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3623*/        OPC_EmitConvertToTarget, 2,
/*  3625*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVS_XCC), 0|OPFL_GlueInput,
                      MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:{ *:[f32] } f32:{ *:[f32] }:$rs2, f32:{ *:[f32] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                  // Dst: (FMOVS_XCC:{ *:[f32] } f32:{ *:[f32] }:$rs2, f32:{ *:[f32] }:$f, (imm:{ *:[i32] }):$cond)
/*  3634*/      /*SwitchType*/ 13, MVT::f64,// ->3649
/*  3636*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3638*/        OPC_EmitConvertToTarget, 2,
/*  3640*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVD_XCC), 0|OPFL_GlueInput,
                      MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:{ *:[f64] } f64:{ *:[f64] }:$rs2, f64:{ *:[f64] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                  // Dst: (FMOVD_XCC:{ *:[f64] } f64:{ *:[f64] }:$rs2, f64:{ *:[f64] }:$f, (imm:{ *:[i32] }):$cond)
/*  3649*/      /*SwitchType*/ 13, MVT::f128,// ->3664
/*  3651*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3653*/        OPC_EmitConvertToTarget, 2,
/*  3655*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FMOVQ_XCC), 0|OPFL_GlueInput,
                      MVT::f128, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectxcc:{ *:[f128] } f128:{ *:[f128] }:$rs2, f128:{ *:[f128] }:$f, (imm:{ *:[i32] }):$cond) - Complexity = 6
                  // Dst: (FMOVQ_XCC:{ *:[f128] } f128:{ *:[f128] }:$rs2, f128:{ *:[f128] }:$f, (imm:{ *:[i32] }):$cond)
/*  3664*/      0, // EndSwitchType
/*  3665*/    0, /*End of Scope*/
/*  3666*/  /*SwitchOpcode*/ 21, TARGET_VAL(ISD::CALLSEQ_START),// ->3690
/*  3669*/    OPC_RecordNode, // #0 = 'callseq_start' chained node
/*  3670*/    OPC_RecordChild1, // #1 = $amt1
/*  3671*/    OPC_MoveChild1,
/*  3672*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  3675*/    OPC_MoveParent,
/*  3676*/    OPC_RecordChild2, // #2 = $amt2
/*  3677*/    OPC_MoveChild2,
/*  3678*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  3681*/    OPC_MoveParent,
/*  3682*/    OPC_EmitMergeInputChains1_0,
/*  3683*/    OPC_MorphNodeTo0, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_start (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2)
/*  3690*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_END),// ->3715
/*  3693*/    OPC_RecordNode, // #0 = 'callseq_end' chained node
/*  3694*/    OPC_CaptureGlueInput,
/*  3695*/    OPC_RecordChild1, // #1 = $amt1
/*  3696*/    OPC_MoveChild1,
/*  3697*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  3700*/    OPC_MoveParent,
/*  3701*/    OPC_RecordChild2, // #2 = $amt2
/*  3702*/    OPC_MoveChild2,
/*  3703*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  3706*/    OPC_MoveParent,
/*  3707*/    OPC_EmitMergeInputChains1_0,
/*  3708*/    OPC_MorphNodeTo0, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2)
/*  3715*/  /*SwitchOpcode*/ 35, TARGET_VAL(ISD::FrameIndex),// ->3753
/*  3718*/    OPC_RecordNode, // #0 = $addr
/*  3719*/    OPC_Scope, 15, /*->3736*/ // 2 children in Scope
/*  3721*/      OPC_CheckType, MVT::iPTR,
/*  3723*/      OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  3725*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*  3728*/      OPC_MorphNodeTo1, TARGET_VAL(SP::LEA_ADDri), 0,
                    MVT::iPTR, 2/*#Ops*/, 1, 2, 
                // Src: ADDRri:{ *:[iPTR] }:$addr - Complexity = 9
                // Dst: (LEA_ADDri:{ *:[iPTR] } ADDRri:{ *:[iPTR] }:$addr)
/*  3736*/    /*Scope*/ 15, /*->3752*/
/*  3737*/      OPC_CheckType, MVT::i64,
/*  3739*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3741*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*  3744*/      OPC_MorphNodeTo1, TARGET_VAL(SP::LEAX_ADDri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: ADDRri:{ *:[i64] }:$addr - Complexity = 9
                // Dst: (LEAX_ADDri:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*  3752*/    0, /*End of Scope*/
/*  3753*/  /*SwitchOpcode*/ 22, TARGET_VAL(SPISD::TLS_CALL),// ->3778
/*  3756*/    OPC_RecordNode, // #0 = 'tlscall' chained node
/*  3757*/    OPC_CaptureGlueInput,
/*  3758*/    OPC_RecordChild1, // #1 = $disp
/*  3759*/    OPC_MoveChild1,
/*  3760*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetExternalSymbol),
/*  3763*/    OPC_MoveParent,
/*  3764*/    OPC_RecordChild2, // #2 = $sym
/*  3765*/    OPC_MoveChild2,
/*  3766*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*  3769*/    OPC_MoveParent,
/*  3770*/    OPC_EmitMergeInputChains1_0,
/*  3771*/    OPC_MorphNodeTo0, TARGET_VAL(SP::TLS_CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic2,
                  2/*#Ops*/, 1, 2, 
              // Src: (tlscall (texternalsym:{ *:[i32] }):$disp, (tglobaltlsaddr:{ *:[iPTR] }):$sym) - Complexity = 9
              // Dst: (TLS_CALL (texternalsym:{ *:[i32] }):$disp, (tglobaltlsaddr:{ *:[iPTR] }):$sym)
/*  3778*/  /*SwitchOpcode*/ 35, TARGET_VAL(ISD::ATOMIC_FENCE),// ->3816
/*  3781*/    OPC_RecordNode, // #0 = 'atomic_fence' chained node
/*  3782*/    OPC_MoveChild1,
/*  3783*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  3786*/    OPC_MoveParent,
/*  3787*/    OPC_MoveChild2,
/*  3788*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  3791*/    OPC_MoveParent,
/*  3792*/    OPC_Scope, 8, /*->3802*/ // 2 children in Scope
/*  3794*/      OPC_CheckPatternPredicate, 4, // (!Subtarget->isV9())
/*  3796*/      OPC_EmitMergeInputChains1_0,
/*  3797*/      OPC_MorphNodeTo0, TARGET_VAL(SP::STBAR), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (atomic_fence (timm:{ *:[iPTR] }), (timm:{ *:[iPTR] })) - Complexity = 9
                // Dst: (STBAR)
/*  3802*/    /*Scope*/ 12, /*->3815*/
/*  3803*/      OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  3805*/      OPC_EmitMergeInputChains1_0,
/*  3806*/      OPC_EmitInteger, MVT::i32, 15, 
/*  3809*/      OPC_MorphNodeTo0, TARGET_VAL(SP::MEMBARi), 0|OPFL_Chain,
                    1/*#Ops*/, 1, 
                // Src: (atomic_fence (timm:{ *:[iPTR] }), (timm:{ *:[iPTR] })) - Complexity = 9
                // Dst: (MEMBARi 15:{ *:[i32] })
/*  3815*/    0, /*End of Scope*/
/*  3816*/  /*SwitchOpcode*/ 31, TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->3850
/*  3819*/    OPC_RecordChild0, // #0 = $Rn
/*  3820*/    OPC_Scope, 13, /*->3835*/ // 2 children in Scope
/*  3822*/      OPC_CheckChild1Integer, 0, 
/*  3824*/      OPC_EmitInteger, MVT::i32, SP::sub_even,
/*  3827*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (extractelt:{ *:[i32] } IntPair:{ *:[v2i32] }:$Rn, 0:{ *:[iPTR] }) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } IntPair:{ *:[v2i32] }:$Rn, sub_even:{ *:[i32] })
/*  3835*/    /*Scope*/ 13, /*->3849*/
/*  3836*/      OPC_CheckChild1Integer, 1, 
/*  3838*/      OPC_EmitInteger, MVT::i32, SP::sub_odd,
/*  3841*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (extractelt:{ *:[i32] } IntPair:{ *:[v2i32] }:$Rn, 1:{ *:[iPTR] }) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } IntPair:{ *:[v2i32] }:$Rn, sub_odd:{ *:[i32] })
/*  3849*/    0, /*End of Scope*/
/*  3850*/  /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SHL),// ->3925
/*  3853*/    OPC_RecordChild0, // #0 = $rs1
/*  3854*/    OPC_RecordChild1, // #1 = $simm13
/*  3855*/    OPC_Scope, 40, /*->3897*/ // 2 children in Scope
/*  3857*/      OPC_MoveChild1,
/*  3858*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3861*/      OPC_CheckType, MVT::i32,
/*  3863*/      OPC_Scope, 15, /*->3880*/ // 2 children in Scope
/*  3865*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*  3867*/        OPC_MoveParent,
/*  3868*/        OPC_CheckType, MVT::i32,
/*  3870*/        OPC_EmitConvertToTarget, 1,
/*  3872*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SLLri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SLLri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  3880*/      /*Scope*/ 15, /*->3896*/
/*  3881*/        OPC_MoveParent,
/*  3882*/        OPC_CheckType, MVT::i64,
/*  3884*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3886*/        OPC_EmitConvertToTarget, 1,
/*  3888*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SLLXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i32] }):$shcnt) - Complexity = 6
                  // Dst: (SLLXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i32] }):$shcnt)
/*  3896*/      0, /*End of Scope*/
/*  3897*/    /*Scope*/ 26, /*->3924*/
/*  3898*/      OPC_CheckChild1Type, MVT::i32,
/*  3900*/      OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3911
/*  3903*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SLLrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (SLLrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  3911*/      /*SwitchType*/ 10, MVT::i64,// ->3923
/*  3913*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3915*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SLLXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:{ *:[i64] } i64:{ *:[i64] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (SLLXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  3923*/      0, // EndSwitchType
/*  3924*/    0, /*End of Scope*/
/*  3925*/  /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SRL),// ->4000
/*  3928*/    OPC_RecordChild0, // #0 = $rs1
/*  3929*/    OPC_RecordChild1, // #1 = $simm13
/*  3930*/    OPC_Scope, 40, /*->3972*/ // 2 children in Scope
/*  3932*/      OPC_MoveChild1,
/*  3933*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3936*/      OPC_CheckType, MVT::i32,
/*  3938*/      OPC_Scope, 15, /*->3955*/ // 2 children in Scope
/*  3940*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*  3942*/        OPC_MoveParent,
/*  3943*/        OPC_CheckType, MVT::i32,
/*  3945*/        OPC_EmitConvertToTarget, 1,
/*  3947*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SRLri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  3955*/      /*Scope*/ 15, /*->3971*/
/*  3956*/        OPC_MoveParent,
/*  3957*/        OPC_CheckType, MVT::i64,
/*  3959*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3961*/        OPC_EmitConvertToTarget, 1,
/*  3963*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRLXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (srl:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i32] }):$shcnt) - Complexity = 6
                  // Dst: (SRLXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i32] }):$shcnt)
/*  3971*/      0, /*End of Scope*/
/*  3972*/    /*Scope*/ 26, /*->3999*/
/*  3973*/      OPC_CheckChild1Type, MVT::i32,
/*  3975*/      OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->3986
/*  3978*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRLrr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (SRLrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  3986*/      /*SwitchType*/ 10, MVT::i64,// ->3998
/*  3988*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  3990*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRLXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i64] } i64:{ *:[i64] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (SRLXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  3998*/      0, // EndSwitchType
/*  3999*/    0, /*End of Scope*/
/*  4000*/  /*SwitchOpcode*/ 72, TARGET_VAL(ISD::SRA),// ->4075
/*  4003*/    OPC_RecordChild0, // #0 = $rs1
/*  4004*/    OPC_RecordChild1, // #1 = $simm13
/*  4005*/    OPC_Scope, 40, /*->4047*/ // 2 children in Scope
/*  4007*/      OPC_MoveChild1,
/*  4008*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4011*/      OPC_CheckType, MVT::i32,
/*  4013*/      OPC_Scope, 15, /*->4030*/ // 2 children in Scope
/*  4015*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*  4017*/        OPC_MoveParent,
/*  4018*/        OPC_CheckType, MVT::i32,
/*  4020*/        OPC_EmitConvertToTarget, 1,
/*  4022*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SRAri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4030*/      /*Scope*/ 15, /*->4046*/
/*  4031*/        OPC_MoveParent,
/*  4032*/        OPC_CheckType, MVT::i64,
/*  4034*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4036*/        OPC_EmitConvertToTarget, 1,
/*  4038*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRAXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i32] }):$shcnt) - Complexity = 6
                  // Dst: (SRAXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i32] }):$shcnt)
/*  4046*/      0, /*End of Scope*/
/*  4047*/    /*Scope*/ 26, /*->4074*/
/*  4048*/      OPC_CheckChild1Type, MVT::i32,
/*  4050*/      OPC_SwitchType /*2 cases */, 8, MVT::i32,// ->4061
/*  4053*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRArr), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (SRArr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4061*/      /*SwitchType*/ 10, MVT::i64,// ->4073
/*  4063*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4065*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SRAXrr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:{ *:[i64] } i64:{ *:[i64] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (SRAXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4073*/      0, // EndSwitchType
/*  4074*/    0, /*End of Scope*/
/*  4075*/  /*SwitchOpcode*/ 35, TARGET_VAL(ISD::ADDC),// ->4113
/*  4078*/    OPC_RecordChild0, // #0 = $rs1
/*  4079*/    OPC_RecordChild1, // #1 = $simm13
/*  4080*/    OPC_Scope, 19, /*->4101*/ // 2 children in Scope
/*  4082*/      OPC_MoveChild1,
/*  4083*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4086*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4088*/      OPC_MoveParent,
/*  4089*/      OPC_CheckType, MVT::i32,
/*  4091*/      OPC_EmitConvertToTarget, 1,
/*  4093*/      OPC_MorphNodeTo1, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (ADDCCri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4101*/    /*Scope*/ 10, /*->4112*/
/*  4102*/      OPC_CheckType, MVT::i32,
/*  4104*/      OPC_MorphNodeTo1, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                // Dst: (ADDCCrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4112*/    0, /*End of Scope*/
/*  4113*/  /*SwitchOpcode*/ 36, TARGET_VAL(ISD::ADDE),// ->4152
/*  4116*/    OPC_CaptureGlueInput,
/*  4117*/    OPC_RecordChild0, // #0 = $rs1
/*  4118*/    OPC_RecordChild1, // #1 = $simm13
/*  4119*/    OPC_Scope, 19, /*->4140*/ // 2 children in Scope
/*  4121*/      OPC_MoveChild1,
/*  4122*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4125*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4127*/      OPC_MoveParent,
/*  4128*/      OPC_CheckType, MVT::i32,
/*  4130*/      OPC_EmitConvertToTarget, 1,
/*  4132*/      OPC_MorphNodeTo1, TARGET_VAL(SP::ADDEri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (adde:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (ADDEri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4140*/    /*Scope*/ 10, /*->4151*/
/*  4141*/      OPC_CheckType, MVT::i32,
/*  4143*/      OPC_MorphNodeTo1, TARGET_VAL(SP::ADDErr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                // Dst: (ADDErr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4151*/    0, /*End of Scope*/
/*  4152*/  /*SwitchOpcode*/ 64, TARGET_VAL(ISD::SUB),// ->4219
/*  4155*/    OPC_RecordChild0, // #0 = $rs1
/*  4156*/    OPC_RecordChild1, // #1 = $simm13
/*  4157*/    OPC_Scope, 35, /*->4194*/ // 3 children in Scope
/*  4159*/      OPC_MoveChild1,
/*  4160*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4163*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4165*/      OPC_MoveParent,
/*  4166*/      OPC_SwitchType /*2 cases */, 10, MVT::i32,// ->4179
/*  4169*/        OPC_EmitConvertToTarget, 1,
/*  4171*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBri), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SUBri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4179*/      /*SwitchType*/ 12, MVT::i64,// ->4193
/*  4181*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4183*/        OPC_EmitConvertToTarget, 1,
/*  4185*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SUBXri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (SUBXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] }):$simm13)
/*  4193*/      0, // EndSwitchType
/*  4194*/    /*Scope*/ 10, /*->4205*/
/*  4195*/      OPC_CheckType, MVT::i32,
/*  4197*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SUBrr), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                // Dst: (SUBrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4205*/    /*Scope*/ 12, /*->4218*/
/*  4206*/      OPC_CheckType, MVT::i64,
/*  4208*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4210*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SUBXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2) - Complexity = 3
                // Dst: (SUBXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2)
/*  4218*/    0, /*End of Scope*/
/*  4219*/  /*SwitchOpcode*/ 36, TARGET_VAL(ISD::SUBE),// ->4258
/*  4222*/    OPC_CaptureGlueInput,
/*  4223*/    OPC_RecordChild0, // #0 = $rs1
/*  4224*/    OPC_RecordChild1, // #1 = $simm13
/*  4225*/    OPC_Scope, 19, /*->4246*/ // 2 children in Scope
/*  4227*/      OPC_MoveChild1,
/*  4228*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4231*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4233*/      OPC_MoveParent,
/*  4234*/      OPC_CheckType, MVT::i32,
/*  4236*/      OPC_EmitConvertToTarget, 1,
/*  4238*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SUBEri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sube:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SUBEri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4246*/    /*Scope*/ 10, /*->4257*/
/*  4247*/      OPC_CheckType, MVT::i32,
/*  4249*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SUBErr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                // Dst: (SUBErr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4257*/    0, /*End of Scope*/
/*  4258*/  /*SwitchOpcode*/ 35, TARGET_VAL(ISD::SUBC),// ->4296
/*  4261*/    OPC_RecordChild0, // #0 = $rs1
/*  4262*/    OPC_RecordChild1, // #1 = $simm13
/*  4263*/    OPC_Scope, 19, /*->4284*/ // 2 children in Scope
/*  4265*/      OPC_MoveChild1,
/*  4266*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4269*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4271*/      OPC_MoveParent,
/*  4272*/      OPC_CheckType, MVT::i32,
/*  4274*/      OPC_EmitConvertToTarget, 1,
/*  4276*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (subc:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SUBCCri:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4284*/    /*Scope*/ 10, /*->4295*/
/*  4285*/      OPC_CheckType, MVT::i32,
/*  4287*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                // Dst: (SUBCCrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4295*/    0, /*End of Scope*/
/*  4296*/  /*SwitchOpcode*/ 70, TARGET_VAL(SPISD::CMPICC),// ->4369
/*  4299*/    OPC_RecordChild0, // #0 = $rs1
/*  4300*/    OPC_Scope, 30, /*->4332*/ // 2 children in Scope
/*  4302*/      OPC_CheckChild0Type, MVT::i32,
/*  4304*/      OPC_RecordChild1, // #1 = $simm13
/*  4305*/      OPC_Scope, 16, /*->4323*/ // 2 children in Scope
/*  4307*/        OPC_MoveChild1,
/*  4308*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4311*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*  4313*/        OPC_MoveParent,
/*  4314*/        OPC_EmitConvertToTarget, 1,
/*  4316*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 2, 
                  // Src: (SPcmpicc i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                  // Dst: (CMPri i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4323*/      /*Scope*/ 7, /*->4331*/
/*  4324*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 1, 
                  // Src: (SPcmpicc i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                  // Dst: (CMPrr i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4331*/      0, /*End of Scope*/
/*  4332*/    /*Scope*/ 35, /*->4368*/
/*  4333*/      OPC_CheckChild0Type, MVT::i64,
/*  4335*/      OPC_RecordChild1, // #1 = $b
/*  4336*/      OPC_Scope, 19, /*->4357*/ // 2 children in Scope
/*  4338*/        OPC_MoveChild1,
/*  4339*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4342*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*  4344*/        OPC_MoveParent,
/*  4345*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4347*/        OPC_EmitNodeXForm, 1, 1, // as_i32imm
/*  4350*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CMPri), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 2, 
                  // Src: (SPcmpicc i64:{ *:[i64] }:$a, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (CMPri ?:{ *:[i64] }:$a, (as_i32imm:{ *:[i32] } ?:{ *:[i64] }:$b))
/*  4357*/      /*Scope*/ 9, /*->4367*/
/*  4358*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4360*/        OPC_MorphNodeTo0, TARGET_VAL(SP::CMPrr), 0|OPFL_GlueOutput,
                      2/*#Ops*/, 0, 1, 
                  // Src: (SPcmpicc i64:{ *:[i64] }:$a, i64:{ *:[i64] }:$b) - Complexity = 3
                  // Dst: (CMPrr ?:{ *:[i64] }:$a, ?:{ *:[i64] }:$b)
/*  4367*/      0, /*End of Scope*/
/*  4368*/    0, /*End of Scope*/
/*  4369*/  /*SwitchOpcode*/ 37, TARGET_VAL(ISD::UMUL_LOHI),// ->4409
/*  4372*/    OPC_RecordChild0, // #0 = $rs1
/*  4373*/    OPC_RecordChild1, // #1 = $simm13
/*  4374*/    OPC_Scope, 20, /*->4396*/ // 2 children in Scope
/*  4376*/      OPC_MoveChild1,
/*  4377*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4380*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4382*/      OPC_MoveParent,
/*  4383*/      OPC_CheckType, MVT::i32,
/*  4385*/      OPC_EmitConvertToTarget, 1,
/*  4387*/      OPC_MorphNodeTo2, TARGET_VAL(SP::UMULri), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (umullohi:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (UMULri:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4396*/    /*Scope*/ 11, /*->4408*/
/*  4397*/      OPC_CheckType, MVT::i32,
/*  4399*/      OPC_MorphNodeTo2, TARGET_VAL(SP::UMULrr), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (umullohi:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                // Dst: (UMULrr:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4408*/    0, /*End of Scope*/
/*  4409*/  /*SwitchOpcode*/ 37, TARGET_VAL(ISD::SMUL_LOHI),// ->4449
/*  4412*/    OPC_RecordChild0, // #0 = $rs1
/*  4413*/    OPC_RecordChild1, // #1 = $simm13
/*  4414*/    OPC_Scope, 20, /*->4436*/ // 2 children in Scope
/*  4416*/      OPC_MoveChild1,
/*  4417*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4420*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4422*/      OPC_MoveParent,
/*  4423*/      OPC_CheckType, MVT::i32,
/*  4425*/      OPC_EmitConvertToTarget, 1,
/*  4427*/      OPC_MorphNodeTo2, TARGET_VAL(SP::SMULri), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (smullohi:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SMULri:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rs1, (imm:{ *:[i32] }):$simm13)
/*  4436*/    /*Scope*/ 11, /*->4448*/
/*  4437*/      OPC_CheckType, MVT::i32,
/*  4439*/      OPC_MorphNodeTo2, TARGET_VAL(SP::SMULrr), 0,
                    MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (smullohi:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2) - Complexity = 3
                // Dst: (SMULrr:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2)
/*  4448*/    0, /*End of Scope*/
/*  4449*/  /*SwitchOpcode*/ 19, TARGET_VAL(SPISD::RET_FLAG),// ->4471
/*  4452*/    OPC_RecordNode, // #0 = 'retflag' chained node
/*  4453*/    OPC_CaptureGlueInput,
/*  4454*/    OPC_RecordChild1, // #1 = $val
/*  4455*/    OPC_MoveChild1,
/*  4456*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4459*/    OPC_CheckPredicate, 6, // Predicate_simm13
/*  4461*/    OPC_MoveParent,
/*  4462*/    OPC_EmitMergeInputChains1_0,
/*  4463*/    OPC_EmitConvertToTarget, 1,
/*  4465*/    OPC_MorphNodeTo0, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  1/*#Ops*/, 2, 
              // Src: (retflag (imm:{ *:[i32] })<<P:Predicate_simm13>>:$val) - Complexity = 7
              // Dst: (RETL (imm:{ *:[i32] }):$val)
/*  4471*/  /*SwitchOpcode*/ 39, TARGET_VAL(ISD::MUL),// ->4513
/*  4474*/    OPC_RecordChild0, // #0 = $rs1
/*  4475*/    OPC_RecordChild1, // #1 = $simm13
/*  4476*/    OPC_Scope, 21, /*->4499*/ // 2 children in Scope
/*  4478*/      OPC_MoveChild1,
/*  4479*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4482*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4484*/      OPC_MoveParent,
/*  4485*/      OPC_CheckType, MVT::i64,
/*  4487*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4489*/      OPC_EmitConvertToTarget, 1,
/*  4491*/      OPC_MorphNodeTo1, TARGET_VAL(SP::MULXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (MULXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] }):$simm13)
/*  4499*/    /*Scope*/ 12, /*->4512*/
/*  4500*/      OPC_CheckType, MVT::i64,
/*  4502*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4504*/      OPC_MorphNodeTo1, TARGET_VAL(SP::MULXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2) - Complexity = 3
                // Dst: (MULXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2)
/*  4512*/    0, /*End of Scope*/
/*  4513*/  /*SwitchOpcode*/ 39, TARGET_VAL(ISD::SDIV),// ->4555
/*  4516*/    OPC_RecordChild0, // #0 = $rs1
/*  4517*/    OPC_RecordChild1, // #1 = $simm13
/*  4518*/    OPC_Scope, 21, /*->4541*/ // 2 children in Scope
/*  4520*/      OPC_MoveChild1,
/*  4521*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4524*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4526*/      OPC_MoveParent,
/*  4527*/      OPC_CheckType, MVT::i64,
/*  4529*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4531*/      OPC_EmitConvertToTarget, 1,
/*  4533*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SDIVXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sdiv:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (SDIVXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] }):$simm13)
/*  4541*/    /*Scope*/ 12, /*->4554*/
/*  4542*/      OPC_CheckType, MVT::i64,
/*  4544*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4546*/      OPC_MorphNodeTo1, TARGET_VAL(SP::SDIVXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sdiv:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2) - Complexity = 3
                // Dst: (SDIVXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2)
/*  4554*/    0, /*End of Scope*/
/*  4555*/  /*SwitchOpcode*/ 39, TARGET_VAL(ISD::UDIV),// ->4597
/*  4558*/    OPC_RecordChild0, // #0 = $rs1
/*  4559*/    OPC_RecordChild1, // #1 = $simm13
/*  4560*/    OPC_Scope, 21, /*->4583*/ // 2 children in Scope
/*  4562*/      OPC_MoveChild1,
/*  4563*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4566*/      OPC_CheckPredicate, 6, // Predicate_simm13
/*  4568*/      OPC_MoveParent,
/*  4569*/      OPC_CheckType, MVT::i64,
/*  4571*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4573*/      OPC_EmitConvertToTarget, 1,
/*  4575*/      OPC_MorphNodeTo1, TARGET_VAL(SP::UDIVXri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (udiv:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] })<<P:Predicate_simm13>>:$simm13) - Complexity = 7
                // Dst: (UDIVXri:{ *:[i64] } i64:{ *:[i64] }:$rs1, (imm:{ *:[i64] }):$simm13)
/*  4583*/    /*Scope*/ 12, /*->4596*/
/*  4584*/      OPC_CheckType, MVT::i64,
/*  4586*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4588*/      OPC_MorphNodeTo1, TARGET_VAL(SP::UDIVXrr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2) - Complexity = 3
                // Dst: (UDIVXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2)
/*  4596*/    0, /*End of Scope*/
/*  4597*/  /*SwitchOpcode*/ 24, TARGET_VAL(SPISD::BRICC),// ->4624
/*  4600*/    OPC_RecordNode, // #0 = 'SPbricc' chained node
/*  4601*/    OPC_CaptureGlueInput,
/*  4602*/    OPC_RecordChild1, // #1 = $imm22
/*  4603*/    OPC_MoveChild1,
/*  4604*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  4607*/    OPC_MoveParent,
/*  4608*/    OPC_RecordChild2, // #2 = $cond
/*  4609*/    OPC_MoveChild2,
/*  4610*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4613*/    OPC_MoveParent,
/*  4614*/    OPC_EmitMergeInputChains1_0,
/*  4615*/    OPC_EmitConvertToTarget, 2,
/*  4617*/    OPC_MorphNodeTo0, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (SPbricc (bb:{ *:[Other] }):$imm22, (imm:{ *:[i32] }):$cond) - Complexity = 6
              // Dst: (BCOND (bb:{ *:[Other] }):$imm22, (imm:{ *:[i32] }):$cond)
/*  4624*/  /*SwitchOpcode*/ 35, TARGET_VAL(SPISD::BRFCC),// ->4662
/*  4627*/    OPC_RecordNode, // #0 = 'SPbrfcc' chained node
/*  4628*/    OPC_CaptureGlueInput,
/*  4629*/    OPC_RecordChild1, // #1 = $imm22
/*  4630*/    OPC_MoveChild1,
/*  4631*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  4634*/    OPC_MoveParent,
/*  4635*/    OPC_RecordChild2, // #2 = $cond
/*  4636*/    OPC_MoveChild2,
/*  4637*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4640*/    OPC_MoveParent,
/*  4641*/    OPC_EmitMergeInputChains1_0,
/*  4642*/    OPC_EmitConvertToTarget, 2,
/*  4644*/    OPC_Scope, 7, /*->4653*/ // 2 children in Scope
/*  4646*/      OPC_MorphNodeTo0, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                    2/*#Ops*/, 1, 3, 
                // Src: (SPbrfcc (bb:{ *:[Other] }):$imm22, (imm:{ *:[i32] }):$cond) - Complexity = 6
                // Dst: (FBCOND (bb:{ *:[Other] }):$imm22, (imm:{ *:[i32] }):$cond)
/*  4653*/    /*Scope*/ 7, /*->4661*/
/*  4654*/      OPC_MorphNodeTo0, TARGET_VAL(SP::CBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                    2/*#Ops*/, 1, 3, 
                // Src: (SPbrfcc (bb:{ *:[Other] }):$imm22, (imm:{ *:[i32] }):$cond) - Complexity = 6
                // Dst: (CBCOND (bb:{ *:[Other] }):$imm22, (imm:{ *:[i32] }):$cond)
/*  4661*/    0, /*End of Scope*/
/*  4662*/  /*SwitchOpcode*/ 46, TARGET_VAL(SPISD::TLS_ADD),// ->4711
/*  4665*/    OPC_RecordChild0, // #0 = $rs1
/*  4666*/    OPC_RecordChild1, // #1 = $rs2
/*  4667*/    OPC_Scope, 19, /*->4688*/ // 2 children in Scope
/*  4669*/      OPC_CheckChild1Type, MVT::i32,
/*  4671*/      OPC_RecordChild2, // #2 = $sym
/*  4672*/      OPC_MoveChild2,
/*  4673*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*  4676*/      OPC_MoveParent,
/*  4677*/      OPC_CheckType, MVT::i32,
/*  4679*/      OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_ADDrr), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (tlsadd:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2, (tglobaltlsaddr:{ *:[iPTR] }):$sym) - Complexity = 6
                // Dst: (TLS_ADDrr:{ *:[i32] } i32:{ *:[i32] }:$rs1, i32:{ *:[i32] }:$rs2, (tglobaltlsaddr:{ *:[iPTR] }):$sym)
/*  4688*/    /*Scope*/ 21, /*->4710*/
/*  4689*/      OPC_CheckChild1Type, MVT::i64,
/*  4691*/      OPC_RecordChild2, // #2 = $sym
/*  4692*/      OPC_MoveChild2,
/*  4693*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*  4696*/      OPC_MoveParent,
/*  4697*/      OPC_CheckType, MVT::i64,
/*  4699*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4701*/      OPC_MorphNodeTo1, TARGET_VAL(SP::TLS_ADDXrr), 0,
                    MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (tlsadd:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2, (tglobaltlsaddr:{ *:[iPTR] }):$sym) - Complexity = 6
                // Dst: (TLS_ADDXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2, (tglobaltlsaddr:{ *:[iPTR] }):$sym)
/*  4710*/    0, /*End of Scope*/
/*  4711*/  /*SwitchOpcode*/ 108, TARGET_VAL(SPISD::Hi),// ->4822
/*  4714*/    OPC_RecordChild0, // #0 = $in
/*  4715*/    OPC_MoveChild0,
/*  4716*/    OPC_SwitchOpcode /*4 cases */, 23, TARGET_VAL(ISD::TargetGlobalAddress),// ->4743
/*  4720*/      OPC_MoveParent,
/*  4721*/      OPC_Scope, 9, /*->4732*/ // 2 children in Scope
/*  4723*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  4725*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (SETHIi:{ *:[iPTR] } (tglobaladdr:{ *:[i32] }):$in)
/*  4732*/      /*Scope*/ 9, /*->4742*/
/*  4733*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4735*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (SETHIi:{ *:[iPTR] } (tglobaladdr:{ *:[i32] }):$in)
/*  4742*/      0, /*End of Scope*/
/*  4743*/    /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetConstantPool),// ->4769
/*  4746*/      OPC_MoveParent,
/*  4747*/      OPC_Scope, 9, /*->4758*/ // 2 children in Scope
/*  4749*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  4751*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:{ *:[iPTR] } (tconstpool:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (SETHIi:{ *:[iPTR] } (tconstpool:{ *:[i32] }):$in)
/*  4758*/      /*Scope*/ 9, /*->4768*/
/*  4759*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4761*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:{ *:[iPTR] } (tconstpool:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (SETHIi:{ *:[iPTR] } (tconstpool:{ *:[i32] }):$in)
/*  4768*/      0, /*End of Scope*/
/*  4769*/    /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->4795
/*  4772*/      OPC_MoveParent,
/*  4773*/      OPC_Scope, 9, /*->4784*/ // 2 children in Scope
/*  4775*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  4777*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (SETHIi:{ *:[iPTR] } (tglobaltlsaddr:{ *:[i32] }):$in)
/*  4784*/      /*Scope*/ 9, /*->4794*/
/*  4785*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4787*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (SETHIi:{ *:[iPTR] } (tglobaltlsaddr:{ *:[i32] }):$in)
/*  4794*/      0, /*End of Scope*/
/*  4795*/    /*SwitchOpcode*/ 23, TARGET_VAL(ISD::TargetBlockAddress),// ->4821
/*  4798*/      OPC_MoveParent,
/*  4799*/      OPC_Scope, 9, /*->4810*/ // 2 children in Scope
/*  4801*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  4803*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:{ *:[iPTR] } (tblockaddress:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (SETHIi:{ *:[iPTR] } (tblockaddress:{ *:[i32] }):$in)
/*  4810*/      /*Scope*/ 9, /*->4820*/
/*  4811*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4813*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::iPTR, 1/*#Ops*/, 0, 
                  // Src: (SPhi:{ *:[iPTR] } (tblockaddress:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (SETHIi:{ *:[iPTR] } (tblockaddress:{ *:[i32] }):$in)
/*  4820*/      0, /*End of Scope*/
/*  4821*/    0, // EndSwitchOpcode
/*  4822*/  /*SwitchOpcode*/ 20|128,1/*148*/, TARGET_VAL(SPISD::Lo),// ->4974
/*  4826*/    OPC_RecordChild0, // #0 = $in
/*  4827*/    OPC_MoveChild0,
/*  4828*/    OPC_SwitchOpcode /*4 cases */, 33, TARGET_VAL(ISD::TargetGlobalAddress),// ->4865
/*  4832*/      OPC_MoveParent,
/*  4833*/      OPC_Scope, 13, /*->4848*/ // 2 children in Scope
/*  4835*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  4837*/        OPC_EmitRegister, MVT::i32, SP::G0,
/*  4840*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (ORri:{ *:[iPTR] } G0:{ *:[i32] }, (tglobaladdr:{ *:[i32] }):$in)
/*  4848*/      /*Scope*/ 15, /*->4864*/
/*  4849*/        OPC_CheckType, MVT::i64,
/*  4851*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4853*/        OPC_EmitRegister, MVT::i64, SP::G0,
/*  4856*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in) - Complexity = 6
                  // Dst: (ORXri:{ *:[i64] } G0:{ *:[i64] }, (tglobaladdr:{ *:[i64] }):$in)
/*  4864*/      0, /*End of Scope*/
/*  4865*/    /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetConstantPool),// ->4901
/*  4868*/      OPC_MoveParent,
/*  4869*/      OPC_Scope, 13, /*->4884*/ // 2 children in Scope
/*  4871*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  4873*/        OPC_EmitRegister, MVT::i32, SP::G0,
/*  4876*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:{ *:[iPTR] } (tconstpool:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (ORri:{ *:[iPTR] } G0:{ *:[i32] }, (tconstpool:{ *:[i32] }):$in)
/*  4884*/      /*Scope*/ 15, /*->4900*/
/*  4885*/        OPC_CheckType, MVT::i64,
/*  4887*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4889*/        OPC_EmitRegister, MVT::i64, SP::G0,
/*  4892*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:{ *:[i64] } (tconstpool:{ *:[i64] }):$in) - Complexity = 6
                  // Dst: (ORXri:{ *:[i64] } G0:{ *:[i64] }, (tconstpool:{ *:[i64] }):$in)
/*  4900*/      0, /*End of Scope*/
/*  4901*/    /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->4937
/*  4904*/      OPC_MoveParent,
/*  4905*/      OPC_Scope, 13, /*->4920*/ // 2 children in Scope
/*  4907*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  4909*/        OPC_EmitRegister, MVT::i32, SP::G0,
/*  4912*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:{ *:[iPTR] } (tglobaltlsaddr:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (ORri:{ *:[iPTR] } G0:{ *:[i32] }, (tglobaltlsaddr:{ *:[i32] }):$in)
/*  4920*/      /*Scope*/ 15, /*->4936*/
/*  4921*/        OPC_CheckType, MVT::i64,
/*  4923*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4925*/        OPC_EmitRegister, MVT::i64, SP::G0,
/*  4928*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:{ *:[i64] } (tglobaltlsaddr:{ *:[i64] }):$in) - Complexity = 6
                  // Dst: (ORXri:{ *:[i64] } G0:{ *:[i64] }, (tglobaltlsaddr:{ *:[i64] }):$in)
/*  4936*/      0, /*End of Scope*/
/*  4937*/    /*SwitchOpcode*/ 33, TARGET_VAL(ISD::TargetBlockAddress),// ->4973
/*  4940*/      OPC_MoveParent,
/*  4941*/      OPC_Scope, 13, /*->4956*/ // 2 children in Scope
/*  4943*/        OPC_CheckPatternPredicate, 2, // (!Subtarget->is64Bit())
/*  4945*/        OPC_EmitRegister, MVT::i32, SP::G0,
/*  4948*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::iPTR, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:{ *:[iPTR] } (tblockaddress:{ *:[iPTR] }):$in) - Complexity = 6
                  // Dst: (ORri:{ *:[iPTR] } G0:{ *:[i32] }, (tblockaddress:{ *:[i32] }):$in)
/*  4956*/      /*Scope*/ 15, /*->4972*/
/*  4957*/        OPC_CheckType, MVT::i64,
/*  4959*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4961*/        OPC_EmitRegister, MVT::i64, SP::G0,
/*  4964*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORXri), 0,
                      MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (SPlo:{ *:[i64] } (tblockaddress:{ *:[i64] }):$in) - Complexity = 6
                  // Dst: (ORXri:{ *:[i64] } G0:{ *:[i64] }, (tblockaddress:{ *:[i64] }):$in)
/*  4972*/      0, /*End of Scope*/
/*  4973*/    0, // EndSwitchOpcode
/*  4974*/  /*SwitchOpcode*/ 26, TARGET_VAL(SPISD::BRXCC),// ->5003
/*  4977*/    OPC_RecordNode, // #0 = 'SPbrxcc' chained node
/*  4978*/    OPC_CaptureGlueInput,
/*  4979*/    OPC_RecordChild1, // #1 = $imm19
/*  4980*/    OPC_MoveChild1,
/*  4981*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  4984*/    OPC_MoveParent,
/*  4985*/    OPC_RecordChild2, // #2 = $cond
/*  4986*/    OPC_MoveChild2,
/*  4987*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4990*/    OPC_MoveParent,
/*  4991*/    OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  4993*/    OPC_EmitMergeInputChains1_0,
/*  4994*/    OPC_EmitConvertToTarget, 2,
/*  4996*/    OPC_MorphNodeTo0, TARGET_VAL(SP::BPXCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (SPbrxcc (bb:{ *:[Other] }):$imm19, (imm:{ *:[i32] }):$cond) - Complexity = 6
              // Dst: (BPXCC (bb:{ *:[Other] }):$imm19, (imm:{ *:[i32] }):$cond)
/*  5003*/  /*SwitchOpcode*/ 6|128,2/*262*/, TARGET_VAL(ISD::Constant),// ->5269
/*  5007*/    OPC_Scope, 18, /*->5027*/ // 2 children in Scope
/*  5009*/      OPC_CheckInteger, 0, 
/*  5011*/      OPC_CheckType, MVT::i32,
/*  5013*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*  5016*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*  5019*/      OPC_MorphNodeTo1, TARGET_VAL(SP::ORrr), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: 0:{ *:[i32] } - Complexity = 5
                // Dst: (ORrr:{ *:[i32] } G0:{ *:[i32] }, G0:{ *:[i32] })
/*  5027*/    /*Scope*/ 111|128,1/*239*/, /*->5268*/
/*  5029*/      OPC_RecordNode, // #0 = $imm22
/*  5030*/      OPC_Scope, 16, /*->5048*/ // 7 children in Scope
/*  5032*/        OPC_CheckPredicate, 16, // Predicate_SETHIimm
/*  5034*/        OPC_CheckType, MVT::i32,
/*  5036*/        OPC_EmitConvertToTarget, 0,
/*  5038*/        OPC_EmitNodeXForm, 2, 1, // HI22
/*  5041*/        OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (imm:{ *:[i32] })<<P:Predicate_SETHIimm>><<X:HI22>>:$imm22 - Complexity = 4
                  // Dst: (SETHIi:{ *:[i32] } (HI22:{ *:[i32] } (imm:{ *:[i32] }):$imm22))
/*  5048*/      /*Scope*/ 35, /*->5084*/
/*  5049*/        OPC_CheckPredicate, 6, // Predicate_simm13
/*  5051*/        OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->5067
/*  5054*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*  5057*/          OPC_EmitConvertToTarget, 0,
/*  5059*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                        MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (imm:{ *:[i32] })<<P:Predicate_simm13>>:$val - Complexity = 4
                    // Dst: (ORri:{ *:[i32] } G0:{ *:[i32] }, (imm:{ *:[i32] }):$val)
/*  5067*/        /*SwitchType*/ 14, MVT::i64,// ->5083
/*  5069*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*  5072*/          OPC_EmitNodeXForm, 1, 0, // as_i32imm
/*  5075*/          OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                        MVT::i64, 2/*#Ops*/, 1, 2, 
                    // Src: (imm:{ *:[i64] })<<P:Predicate_simm13>>:$val - Complexity = 4
                    // Dst: (ORri:{ *:[i64] } G0:{ *:[i64] }, (as_i32imm:{ *:[i32] } ?:{ *:[i64] }:$val))
/*  5083*/        0, // EndSwitchType
/*  5084*/      /*Scope*/ 32, /*->5117*/
/*  5085*/        OPC_CheckPredicate, 16, // Predicate_SETHIimm
/*  5087*/        OPC_CheckType, MVT::i64,
/*  5089*/        OPC_Scope, 10, /*->5101*/ // 2 children in Scope
/*  5091*/          OPC_EmitNodeXForm, 2, 0, // HI22
/*  5094*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIi), 0,
                        MVT::i64, 1/*#Ops*/, 1, 
                    // Src: (imm:{ *:[i64] })<<P:Predicate_SETHIimm>><<X:HI22>>:$val - Complexity = 4
                    // Dst: (SETHIi:{ *:[i64] } (HI22:{ *:[i32] } ?:{ *:[i64] }:$val))
/*  5101*/        /*Scope*/ 14, /*->5116*/
/*  5102*/          OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5104*/          OPC_EmitConvertToTarget, 0,
/*  5106*/          OPC_EmitNodeXForm, 2, 1, // HI22
/*  5109*/          OPC_MorphNodeTo1, TARGET_VAL(SP::SETHIXi), 0,
                        MVT::i64, 1/*#Ops*/, 2, 
                    // Src: (imm:{ *:[i64] })<<P:Predicate_SETHIimm>><<X:HI22>>:$imm22 - Complexity = 4
                    // Dst: (SETHIXi:{ *:[i64] } (HI22:{ *:[i64] } (imm:{ *:[i64] }):$imm22))
/*  5116*/        0, /*End of Scope*/
/*  5117*/      /*Scope*/ 27, /*->5145*/
/*  5118*/        OPC_CheckPredicate, 17, // Predicate_uimm32
/*  5120*/        OPC_CheckType, MVT::i64,
/*  5122*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5124*/        OPC_EmitNodeXForm, 2, 0, // HI22
/*  5127*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*  5134*/        OPC_EmitNodeXForm, 3, 0, // LO10
/*  5137*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (imm:{ *:[i64] })<<P:Predicate_uimm32>>:$val - Complexity = 4
                  // Dst: (ORri:{ *:[i64] } (SETHIi:{ *:[i32] } (HI22:{ *:[i32] } ?:{ *:[i64] }:$val)), (LO10:{ *:[i32] } ?:{ *:[i64] }:$val))
/*  5145*/      /*Scope*/ 27, /*->5173*/
/*  5146*/        OPC_CheckPredicate, 18, // Predicate_nimm33
/*  5148*/        OPC_CheckType, MVT::i64,
/*  5150*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5152*/        OPC_EmitNodeXForm, 4, 0, // HIX22
/*  5155*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*  5162*/        OPC_EmitNodeXForm, 5, 0, // LOX10
/*  5165*/        OPC_MorphNodeTo1, TARGET_VAL(SP::XORri), 0,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (imm:{ *:[i64] })<<P:Predicate_nimm33>>:$val - Complexity = 4
                  // Dst: (XORri:{ *:[i64] } (SETHIi:{ *:[i32] } (HIX22:{ *:[i32] } ?:{ *:[i64] }:$val)), (LOX10:{ *:[i32] } ?:{ *:[i64] }:$val))
/*  5173*/      /*Scope*/ 27, /*->5201*/
/*  5174*/        OPC_CheckType, MVT::i32,
/*  5176*/        OPC_EmitConvertToTarget, 0,
/*  5178*/        OPC_EmitNodeXForm, 2, 1, // HI22
/*  5181*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*  5188*/        OPC_EmitConvertToTarget, 0,
/*  5190*/        OPC_EmitNodeXForm, 3, 4, // LO10
/*  5193*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORri), 0,
                      MVT::i32, 2/*#Ops*/, 3, 5, 
                  // Src: (imm:{ *:[i32] }):$val - Complexity = 3
                  // Dst: (ORri:{ *:[i32] } (SETHIi:{ *:[i32] } (HI22:{ *:[i32] } (imm:{ *:[i32] }):$val)), (LO10:{ *:[i32] } (imm:{ *:[i32] }):$val))
/*  5201*/      /*Scope*/ 65, /*->5267*/
/*  5202*/        OPC_CheckType, MVT::i64,
/*  5204*/        OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5206*/        OPC_EmitNodeXForm, 6, 0, // HH22
/*  5209*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*  5216*/        OPC_EmitNodeXForm, 7, 0, // HM10
/*  5219*/        OPC_EmitNode1, TARGET_VAL(SP::ORri), 0,
                      MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*  5227*/        OPC_EmitInteger, MVT::i32, 32, 
/*  5230*/        OPC_EmitNode1, TARGET_VAL(SP::SLLXri), 0,
                      MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6
/*  5238*/        OPC_EmitNodeXForm, 2, 0, // HI22
/*  5241*/        OPC_EmitNode1, TARGET_VAL(SP::SETHIi), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  5248*/        OPC_EmitNodeXForm, 3, 0, // LO10
/*  5251*/        OPC_EmitNode1, TARGET_VAL(SP::ORri), 0,
                      MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*  5259*/        OPC_MorphNodeTo1, TARGET_VAL(SP::ORrr), 0,
                      MVT::i64, 2/*#Ops*/, 6, 10, 
                  // Src: (imm:{ *:[i64] }):$val - Complexity = 3
                  // Dst: (ORrr:{ *:[i64] } (SLLXri:{ *:[i64] } (ORri:{ *:[i64] } (SETHIi:{ *:[i32] } (HH22:{ *:[i32] } ?:{ *:[i64] }:$val)), (HM10:{ *:[i32] } ?:{ *:[i64] }:$val)), 32:{ *:[i32] }), (ORri:{ *:[i32] } (SETHIi:{ *:[i32] } (HI22:{ *:[i32] } ?:{ *:[i64] }:$val)), (LO10:{ *:[i32] } ?:{ *:[i64] }:$val)))
/*  5267*/      0, /*End of Scope*/
/*  5268*/    0, /*End of Scope*/
/*  5269*/  /*SwitchOpcode*/ 59, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->5331
/*  5272*/    OPC_RecordMemRef,
/*  5273*/    OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/*  5274*/    OPC_RecordChild1, // #1 = $rs1
/*  5275*/    OPC_SwitchType /*2 cases */, 32, MVT::i32,// ->5310
/*  5278*/      OPC_RecordChild2, // #2 = $rs2
/*  5279*/      OPC_RecordChild3, // #3 = $swap
/*  5280*/      OPC_CheckPredicate, 5, // Predicate_atomic_cmp_swap_32
/*  5282*/      OPC_Scope, 12, /*->5296*/ // 2 children in Scope
/*  5284*/        OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  5286*/        OPC_EmitMergeInputChains1_0,
/*  5287*/        OPC_MorphNodeTo1, TARGET_VAL(SP::CASrr), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:{ *:[i32] } iPTR:{ *:[iPTR] }:$rs1, i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (CASrr:{ *:[i32] } iPTR:{ *:[iPTR] }:$rs1, i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$swap)
/*  5296*/      /*Scope*/ 12, /*->5309*/
/*  5297*/        OPC_CheckPatternPredicate, 5, // (Subtarget->hasLeonCasa())
/*  5299*/        OPC_EmitMergeInputChains1_0,
/*  5300*/        OPC_MorphNodeTo1, TARGET_VAL(SP::CASAasi10), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:{ *:[i32] } iPTR:{ *:[iPTR] }:$rs1, i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (CASAasi10:{ *:[i32] } iPTR:{ *:[iPTR] }:$rs1, i32:{ *:[i32] }:$rs2, i32:{ *:[i32] }:$swap)
/*  5309*/      0, /*End of Scope*/
/*  5310*/    /*SwitchType*/ 18, MVT::i64,// ->5330
/*  5312*/      OPC_CheckChild1Type, MVT::i64,
/*  5314*/      OPC_RecordChild2, // #2 = $rs2
/*  5315*/      OPC_RecordChild3, // #3 = $swap
/*  5316*/      OPC_CheckPredicate, 13, // Predicate_atomic_cmp_swap_64
/*  5318*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5320*/      OPC_EmitMergeInputChains1_0,
/*  5321*/      OPC_MorphNodeTo1, TARGET_VAL(SP::CASXrr), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2, i64:{ *:[i64] }:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (CASXrr:{ *:[i64] } i64:{ *:[i64] }:$rs1, i64:{ *:[i64] }:$rs2, i64:{ *:[i64] }:$swap)
/*  5330*/    0, // EndSwitchType
/*  5331*/  /*SwitchOpcode*/ 19, TARGET_VAL(SPISD::FLUSHW),// ->5353
/*  5334*/    OPC_RecordNode, // #0 = 'flushw' chained node
/*  5335*/    OPC_Scope, 8, /*->5345*/ // 2 children in Scope
/*  5337*/      OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  5339*/      OPC_EmitMergeInputChains1_0,
/*  5340*/      OPC_MorphNodeTo0, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (flushw) - Complexity = 3
                // Dst: (FLUSHW)
/*  5345*/    /*Scope*/ 6, /*->5352*/
/*  5346*/      OPC_EmitMergeInputChains1_0,
/*  5347*/      OPC_MorphNodeTo0, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (flushw) - Complexity = 3
                // Dst: (TA3)
/*  5352*/    0, /*End of Scope*/
/*  5353*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->5370
/*  5356*/    OPC_RecordNode, // #0 = 'br' chained node
/*  5357*/    OPC_RecordChild1, // #1 = $imm22
/*  5358*/    OPC_MoveChild1,
/*  5359*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  5362*/    OPC_MoveParent,
/*  5363*/    OPC_EmitMergeInputChains1_0,
/*  5364*/    OPC_MorphNodeTo0, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$imm22) - Complexity = 3
              // Dst: (BA (bb:{ *:[Other] }):$imm22)
/*  5370*/  /*SwitchOpcode*/ 7, TARGET_VAL(ISD::TRAP),// ->5380
/*  5373*/    OPC_RecordNode, // #0 = 'trap' chained node
/*  5374*/    OPC_EmitMergeInputChains1_0,
/*  5375*/    OPC_MorphNodeTo0, TARGET_VAL(SP::TA5), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (trap) - Complexity = 3
              // Dst: (TA5)
/*  5380*/  /*SwitchOpcode*/ 7, TARGET_VAL(ISD::DEBUGTRAP),// ->5390
/*  5383*/    OPC_RecordNode, // #0 = 'debugtrap' chained node
/*  5384*/    OPC_EmitMergeInputChains1_0,
/*  5385*/    OPC_MorphNodeTo0, TARGET_VAL(SP::TA1), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (debugtrap) - Complexity = 3
              // Dst: (TA1)
/*  5390*/  /*SwitchOpcode*/ 41, TARGET_VAL(SPISD::CMPFCC),// ->5434
/*  5393*/    OPC_RecordChild0, // #0 = $rs1
/*  5394*/    OPC_Scope, 11, /*->5407*/ // 3 children in Scope
/*  5396*/      OPC_CheckChild0Type, MVT::f32,
/*  5398*/      OPC_RecordChild1, // #1 = $rs2
/*  5399*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FCMPS:{ *:[i1] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2)
/*  5407*/    /*Scope*/ 11, /*->5419*/
/*  5408*/      OPC_CheckChild0Type, MVT::f64,
/*  5410*/      OPC_RecordChild1, // #1 = $rs2
/*  5411*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FCMPD:{ *:[i1] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2)
/*  5419*/    /*Scope*/ 13, /*->5433*/
/*  5420*/      OPC_CheckChild0Type, MVT::f128,
/*  5422*/      OPC_RecordChild1, // #1 = $rs2
/*  5423*/      OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5425*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FCMPQ), 0|OPFL_GlueOutput,
                    MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (SPcmpfcc f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FCMPQ:{ *:[i1] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2)
/*  5433*/    0, /*End of Scope*/
/*  5434*/  /*SwitchOpcode*/ 18, TARGET_VAL(ISD::ANY_EXTEND),// ->5455
/*  5437*/    OPC_RecordChild0, // #0 = $val
/*  5438*/    OPC_CheckChild0Type, MVT::i32,
/*  5440*/    OPC_CheckType, MVT::i64,
/*  5442*/    OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5444*/    OPC_EmitInteger, MVT::i32, SP::I64RegsRegClassID,
/*  5447*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (anyext:{ *:[i64] } i32:{ *:[i32] }:$val) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:{ *:[i64] } ?:{ *:[i32] }:$val, I64Regs:{ *:[i32] })
/*  5455*/  /*SwitchOpcode*/ 16, TARGET_VAL(ISD::TRUNCATE),// ->5474
/*  5458*/    OPC_RecordChild0, // #0 = $val
/*  5459*/    OPC_CheckType, MVT::i32,
/*  5461*/    OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5463*/    OPC_EmitInteger, MVT::i32, SP::IntRegsRegClassID,
/*  5466*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:{ *:[i32] } i64:{ *:[i64] }:$val) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:{ *:[i32] } ?:{ *:[i64] }:$val, IntRegs:{ *:[i32] })
/*  5474*/  /*SwitchOpcode*/ 18, TARGET_VAL(ISD::ZERO_EXTEND),// ->5495
/*  5477*/    OPC_RecordChild0, // #0 = $val
/*  5478*/    OPC_CheckChild0Type, MVT::i32,
/*  5480*/    OPC_CheckType, MVT::i64,
/*  5482*/    OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5484*/    OPC_EmitInteger, MVT::i32, 0, 
/*  5487*/    OPC_MorphNodeTo1, TARGET_VAL(SP::SRLri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (zext:{ *:[i64] } i32:{ *:[i32] }:$val) - Complexity = 3
              // Dst: (SRLri:{ *:[i64] } ?:{ *:[i32] }:$val, 0:{ *:[i32] })
/*  5495*/  /*SwitchOpcode*/ 18, TARGET_VAL(ISD::SIGN_EXTEND),// ->5516
/*  5498*/    OPC_RecordChild0, // #0 = $val
/*  5499*/    OPC_CheckChild0Type, MVT::i32,
/*  5501*/    OPC_CheckType, MVT::i64,
/*  5503*/    OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5505*/    OPC_EmitInteger, MVT::i32, 0, 
/*  5508*/    OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sext:{ *:[i64] } i32:{ *:[i32] }:$val) - Complexity = 3
              // Dst: (SRAri:{ *:[i64] } ?:{ *:[i32] }:$val, 0:{ *:[i32] })
/*  5516*/  /*SwitchOpcode*/ 18, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->5537
/*  5519*/    OPC_RecordChild0, // #0 = $val
/*  5520*/    OPC_MoveChild1,
/*  5521*/    OPC_CheckValueType, MVT::i32,
/*  5523*/    OPC_MoveParent,
/*  5524*/    OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5526*/    OPC_EmitInteger, MVT::i32, 0, 
/*  5529*/    OPC_MorphNodeTo1, TARGET_VAL(SP::SRAri), 0,
                  MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:{ *:[i64] } i64:{ *:[i64] }:$val, i32:{ *:[Other] }) - Complexity = 3
              // Dst: (SRAri:{ *:[i64] } ?:{ *:[i64] }:$val, 0:{ *:[i32] })
/*  5537*/  /*SwitchOpcode*/ 38, TARGET_VAL(ISD::CTPOP),// ->5578
/*  5540*/    OPC_RecordChild0, // #0 = $src
/*  5541*/    OPC_SwitchType /*2 cases */, 11, MVT::i64,// ->5555
/*  5544*/      OPC_CheckChild0Type, MVT::i64,
/*  5546*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  5548*/      OPC_MorphNodeTo1, TARGET_VAL(SP::POPCrr), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctpop:{ *:[i64] } i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (POPCrr:{ *:[i64] } ?:{ *:[i64] }:$src)
/*  5555*/    /*SwitchType*/ 20, MVT::i32,// ->5577
/*  5557*/      OPC_CheckChild0Type, MVT::i32,
/*  5559*/      OPC_EmitInteger, MVT::i32, 0, 
/*  5562*/      OPC_EmitNode1, TARGET_VAL(SP::SRLri), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*  5570*/      OPC_MorphNodeTo1, TARGET_VAL(SP::POPCrr), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ctpop:{ *:[i32] } i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (POPCrr:{ *:[i32] } (SRLri:{ *:[i32] } ?:{ *:[i32] }:$src, 0:{ *:[i32] }))
/*  5577*/    0, // EndSwitchType
/*  5578*/  /*SwitchOpcode*/ 93, TARGET_VAL(ISD::FMUL),// ->5674
/*  5581*/    OPC_Scope, 51, /*->5634*/ // 2 children in Scope
/*  5583*/      OPC_MoveChild0,
/*  5584*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*  5587*/      OPC_RecordChild0, // #0 = $rs1
/*  5588*/      OPC_Scope, 19, /*->5609*/ // 2 children in Scope
/*  5590*/        OPC_MoveParent,
/*  5591*/        OPC_MoveChild1,
/*  5592*/        OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*  5595*/        OPC_RecordChild0, // #1 = $rs2
/*  5596*/        OPC_MoveParent,
/*  5597*/        OPC_CheckType, MVT::f64,
/*  5599*/        OPC_CheckPatternPredicate, 7, // (!Subtarget->hasNoFSMULD())
/*  5601*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSMULD), 0,
                      MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:{ *:[f64] } (fpextend:{ *:[f64] } f32:{ *:[f32] }:$rs1), (fpextend:{ *:[f64] } f32:{ *:[f32] }:$rs2)) - Complexity = 9
                  // Dst: (FSMULD:{ *:[f64] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2)
/*  5609*/      /*Scope*/ 23, /*->5633*/
/*  5610*/        OPC_CheckChild0Type, MVT::f64,
/*  5612*/        OPC_MoveParent,
/*  5613*/        OPC_MoveChild1,
/*  5614*/        OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*  5617*/        OPC_RecordChild0, // #1 = $rs2
/*  5618*/        OPC_CheckChild0Type, MVT::f64,
/*  5620*/        OPC_MoveParent,
/*  5621*/        OPC_CheckType, MVT::f128,
/*  5623*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5625*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDMULQ), 0,
                      MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:{ *:[f128] } (fpextend:{ *:[f128] } f64:{ *:[f64] }:$rs1), (fpextend:{ *:[f128] } f64:{ *:[f64] }:$rs2)) - Complexity = 9
                  // Dst: (FDMULQ:{ *:[f128] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2)
/*  5633*/      0, /*End of Scope*/
/*  5634*/    /*Scope*/ 38, /*->5673*/
/*  5635*/      OPC_RecordChild0, // #0 = $rs1
/*  5636*/      OPC_RecordChild1, // #1 = $rs2
/*  5637*/      OPC_SwitchType /*3 cases */, 10, MVT::f32,// ->5650
/*  5640*/        OPC_CheckPatternPredicate, 8, // (!Subtarget->hasNoFMULS())
/*  5642*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FMULS), 0,
                      MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:{ *:[f32] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2) - Complexity = 3
                  // Dst: (FMULS:{ *:[f32] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2)
/*  5650*/      /*SwitchType*/ 8, MVT::f64,// ->5660
/*  5652*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FMULD), 0,
                      MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:{ *:[f64] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2) - Complexity = 3
                  // Dst: (FMULD:{ *:[f64] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2)
/*  5660*/      /*SwitchType*/ 10, MVT::f128,// ->5672
/*  5662*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5664*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FMULQ), 0,
                      MVT::f128, 2/*#Ops*/, 0, 1, 
                  // Src: (fmul:{ *:[f128] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2) - Complexity = 3
                  // Dst: (FMULQ:{ *:[f128] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2)
/*  5672*/      0, // EndSwitchType
/*  5673*/    0, /*End of Scope*/
/*  5674*/  /*SwitchOpcode*/ 32, TARGET_VAL(SPISD::ITOF),// ->5709
/*  5677*/    OPC_RecordChild0, // #0 = $rs2
/*  5678*/    OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5688
/*  5681*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FITOS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPitof:{ *:[f32] } FPRegs:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FITOS:{ *:[f32] } FPRegs:{ *:[f32] }:$rs2)
/*  5688*/    /*SwitchType*/ 7, MVT::f64,// ->5697
/*  5690*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FITOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPitof:{ *:[f64] } FPRegs:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FITOD:{ *:[f64] } FPRegs:{ *:[f32] }:$rs2)
/*  5697*/    /*SwitchType*/ 9, MVT::f128,// ->5708
/*  5699*/      OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5701*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FITOQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (SPitof:{ *:[f128] } FPRegs:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FITOQ:{ *:[f128] } FPRegs:{ *:[f32] }:$rs2)
/*  5708*/    0, // EndSwitchType
/*  5709*/  /*SwitchOpcode*/ 35, TARGET_VAL(SPISD::FTOI),// ->5747
/*  5712*/    OPC_RecordChild0, // #0 = $rs2
/*  5713*/    OPC_Scope, 9, /*->5724*/ // 3 children in Scope
/*  5715*/      OPC_CheckChild0Type, MVT::f32,
/*  5717*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:{ *:[f32] } FPRegs:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FSTOI:{ *:[f32] } FPRegs:{ *:[f32] }:$rs2)
/*  5724*/    /*Scope*/ 9, /*->5734*/
/*  5725*/      OPC_CheckChild0Type, MVT::f64,
/*  5727*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:{ *:[f32] } DFPRegs:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FDTOI:{ *:[f32] } DFPRegs:{ *:[f64] }:$rs2)
/*  5734*/    /*Scope*/ 11, /*->5746*/
/*  5735*/      OPC_CheckChild0Type, MVT::f128,
/*  5737*/      OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5739*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOI), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPftoi:{ *:[f32] } QFPRegs:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FQTOI:{ *:[f32] } QFPRegs:{ *:[f128] }:$rs2)
/*  5746*/    0, /*End of Scope*/
/*  5747*/  /*SwitchOpcode*/ 40, TARGET_VAL(ISD::FP_EXTEND),// ->5790
/*  5750*/    OPC_RecordChild0, // #0 = $rs2
/*  5751*/    OPC_SwitchType /*2 cases */, 7, MVT::f64,// ->5761
/*  5754*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpextend:{ *:[f64] } f32:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FSTOD:{ *:[f64] } f32:{ *:[f32] }:$rs2)
/*  5761*/    /*SwitchType*/ 26, MVT::f128,// ->5789
/*  5763*/      OPC_Scope, 11, /*->5776*/ // 2 children in Scope
/*  5765*/        OPC_CheckChild0Type, MVT::f32,
/*  5767*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5769*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOQ), 0,
                      MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fpextend:{ *:[f128] } f32:{ *:[f32] }:$rs2) - Complexity = 3
                  // Dst: (FSTOQ:{ *:[f128] } f32:{ *:[f32] }:$rs2)
/*  5776*/      /*Scope*/ 11, /*->5788*/
/*  5777*/        OPC_CheckChild0Type, MVT::f64,
/*  5779*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5781*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOQ), 0,
                      MVT::f128, 1/*#Ops*/, 0, 
                  // Src: (fpextend:{ *:[f128] } f64:{ *:[f64] }:$rs2) - Complexity = 3
                  // Dst: (FDTOQ:{ *:[f128] } f64:{ *:[f64] }:$rs2)
/*  5788*/      0, /*End of Scope*/
/*  5789*/    0, // EndSwitchType
/*  5790*/  /*SwitchOpcode*/ 40, TARGET_VAL(ISD::FP_ROUND),// ->5833
/*  5793*/    OPC_RecordChild0, // #0 = $rs2
/*  5794*/    OPC_SwitchType /*2 cases */, 24, MVT::f32,// ->5821
/*  5797*/      OPC_Scope, 9, /*->5808*/ // 2 children in Scope
/*  5799*/        OPC_CheckChild0Type, MVT::f64,
/*  5801*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOS), 0,
                      MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fpround:{ *:[f32] } f64:{ *:[f64] }:$rs2) - Complexity = 3
                  // Dst: (FDTOS:{ *:[f32] } f64:{ *:[f64] }:$rs2)
/*  5808*/      /*Scope*/ 11, /*->5820*/
/*  5809*/        OPC_CheckChild0Type, MVT::f128,
/*  5811*/        OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5813*/        OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOS), 0,
                      MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fpround:{ *:[f32] } f128:{ *:[f128] }:$rs2) - Complexity = 3
                  // Dst: (FQTOS:{ *:[f32] } f128:{ *:[f128] }:$rs2)
/*  5820*/      0, /*End of Scope*/
/*  5821*/    /*SwitchType*/ 9, MVT::f64,// ->5832
/*  5823*/      OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5825*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpround:{ *:[f64] } f128:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FQTOD:{ *:[f64] } f128:{ *:[f128] }:$rs2)
/*  5832*/    0, // EndSwitchType
/*  5833*/  /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FNEG),// ->5870
/*  5836*/    OPC_RecordChild0, // #0 = $rs2
/*  5837*/    OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5847
/*  5840*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:{ *:[f32] } f32:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FNEGS:{ *:[f32] } f32:{ *:[f32] }:$rs2)
/*  5847*/    /*SwitchType*/ 9, MVT::f64,// ->5858
/*  5849*/      OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  5851*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:{ *:[f64] } f64:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FNEGD:{ *:[f64] } f64:{ *:[f64] }:$rs2)
/*  5858*/    /*SwitchType*/ 9, MVT::f128,// ->5869
/*  5860*/      OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  5862*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FNEGQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fneg:{ *:[f128] } f128:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FNEGQ:{ *:[f128] } f128:{ *:[f128] }:$rs2)
/*  5869*/    0, // EndSwitchType
/*  5870*/  /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FABS),// ->5907
/*  5873*/    OPC_RecordChild0, // #0 = $rs2
/*  5874*/    OPC_SwitchType /*3 cases */, 7, MVT::f32,// ->5884
/*  5877*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FABSS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fabs:{ *:[f32] } f32:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FABSS:{ *:[f32] } f32:{ *:[f32] }:$rs2)
/*  5884*/    /*SwitchType*/ 9, MVT::f64,// ->5895
/*  5886*/      OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  5888*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FABSD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:{ *:[f64] } f64:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FABSD:{ *:[f64] } f64:{ *:[f64] }:$rs2)
/*  5895*/    /*SwitchType*/ 9, MVT::f128,// ->5906
/*  5897*/      OPC_CheckPatternPredicate, 3, // (Subtarget->isV9())
/*  5899*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FABSQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fabs:{ *:[f128] } f128:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FABSQ:{ *:[f128] } f128:{ *:[f128] }:$rs2)
/*  5906*/    0, // EndSwitchType
/*  5907*/  /*SwitchOpcode*/ 34, TARGET_VAL(ISD::FSQRT),// ->5944
/*  5910*/    OPC_RecordChild0, // #0 = $rs2
/*  5911*/    OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->5923
/*  5914*/      OPC_CheckPatternPredicate, 9, // (!Subtarget->fixAllFDIVSQRT())
/*  5916*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FSQRTS:{ *:[f32] } f32:{ *:[f32] }:$rs2)
/*  5923*/    /*SwitchType*/ 7, MVT::f64,// ->5932
/*  5925*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:{ *:[f64] } f64:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FSQRTD:{ *:[f64] } f64:{ *:[f64] }:$rs2)
/*  5932*/    /*SwitchType*/ 9, MVT::f128,// ->5943
/*  5934*/      OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5936*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSQRTQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:{ *:[f128] } f128:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FSQRTQ:{ *:[f128] } f128:{ *:[f128] }:$rs2)
/*  5943*/    0, // EndSwitchType
/*  5944*/  /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FADD),// ->5983
/*  5947*/    OPC_RecordChild0, // #0 = $rs1
/*  5948*/    OPC_RecordChild1, // #1 = $rs2
/*  5949*/    OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->5960
/*  5952*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FADDS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:{ *:[f32] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FADDS:{ *:[f32] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2)
/*  5960*/    /*SwitchType*/ 8, MVT::f64,// ->5970
/*  5962*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FADDD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:{ *:[f64] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FADDD:{ *:[f64] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2)
/*  5970*/    /*SwitchType*/ 10, MVT::f128,// ->5982
/*  5972*/      OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  5974*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FADDQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:{ *:[f128] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FADDQ:{ *:[f128] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2)
/*  5982*/    0, // EndSwitchType
/*  5983*/  /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FSUB),// ->6022
/*  5986*/    OPC_RecordChild0, // #0 = $rs1
/*  5987*/    OPC_RecordChild1, // #1 = $rs2
/*  5988*/    OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->5999
/*  5991*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:{ *:[f32] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FSUBS:{ *:[f32] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2)
/*  5999*/    /*SwitchType*/ 8, MVT::f64,// ->6009
/*  6001*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:{ *:[f64] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FSUBD:{ *:[f64] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2)
/*  6009*/    /*SwitchType*/ 10, MVT::f128,// ->6021
/*  6011*/      OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  6013*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSUBQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:{ *:[f128] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FSUBQ:{ *:[f128] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2)
/*  6021*/    0, // EndSwitchType
/*  6022*/  /*SwitchOpcode*/ 36, TARGET_VAL(ISD::FDIV),// ->6061
/*  6025*/    OPC_RecordChild0, // #0 = $rs1
/*  6026*/    OPC_RecordChild1, // #1 = $rs2
/*  6027*/    OPC_SwitchType /*3 cases */, 8, MVT::f32,// ->6038
/*  6030*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVS), 0,
                    MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FDIVS:{ *:[f32] } f32:{ *:[f32] }:$rs1, f32:{ *:[f32] }:$rs2)
/*  6038*/    /*SwitchType*/ 8, MVT::f64,// ->6048
/*  6040*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVD), 0,
                    MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:{ *:[f64] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FDIVD:{ *:[f64] } f64:{ *:[f64] }:$rs1, f64:{ *:[f64] }:$rs2)
/*  6048*/    /*SwitchType*/ 10, MVT::f128,// ->6060
/*  6050*/      OPC_CheckPatternPredicate, 6, // (Subtarget->hasHardQuad())
/*  6052*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FDIVQ), 0,
                    MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:{ *:[f128] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FDIVQ:{ *:[f128] } f128:{ *:[f128] }:$rs1, f128:{ *:[f128] }:$rs2)
/*  6060*/    0, // EndSwitchType
/*  6061*/  /*SwitchOpcode*/ 36, TARGET_VAL(SPISD::XTOF),// ->6100
/*  6064*/    OPC_RecordChild0, // #0 = $rs2
/*  6065*/    OPC_SwitchType /*3 cases */, 9, MVT::f32,// ->6077
/*  6068*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  6070*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOS), 0,
                    MVT::f32, 1/*#Ops*/, 0, 
                // Src: (SPxtof:{ *:[f32] } DFPRegs:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FXTOS:{ *:[f32] } DFPRegs:{ *:[f64] }:$rs2)
/*  6077*/    /*SwitchType*/ 9, MVT::f64,// ->6088
/*  6079*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  6081*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOD), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPxtof:{ *:[f64] } DFPRegs:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FXTOD:{ *:[f64] } DFPRegs:{ *:[f64] }:$rs2)
/*  6088*/    /*SwitchType*/ 9, MVT::f128,// ->6099
/*  6090*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  6092*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FXTOQ), 0,
                    MVT::f128, 1/*#Ops*/, 0, 
                // Src: (SPxtof:{ *:[f128] } DFPRegs:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FXTOQ:{ *:[f128] } DFPRegs:{ *:[f64] }:$rs2)
/*  6099*/    0, // EndSwitchType
/*  6100*/  /*SwitchOpcode*/ 39, TARGET_VAL(SPISD::FTOX),// ->6142
/*  6103*/    OPC_RecordChild0, // #0 = $rs2
/*  6104*/    OPC_Scope, 11, /*->6117*/ // 3 children in Scope
/*  6106*/      OPC_CheckChild0Type, MVT::f32,
/*  6108*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  6110*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FSTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:{ *:[f64] } FPRegs:{ *:[f32] }:$rs2) - Complexity = 3
                // Dst: (FSTOX:{ *:[f64] } FPRegs:{ *:[f32] }:$rs2)
/*  6117*/    /*Scope*/ 11, /*->6129*/
/*  6118*/      OPC_CheckChild0Type, MVT::f64,
/*  6120*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  6122*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FDTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:{ *:[f64] } DFPRegs:{ *:[f64] }:$rs2) - Complexity = 3
                // Dst: (FDTOX:{ *:[f64] } DFPRegs:{ *:[f64] }:$rs2)
/*  6129*/    /*Scope*/ 11, /*->6141*/
/*  6130*/      OPC_CheckChild0Type, MVT::f128,
/*  6132*/      OPC_CheckPatternPredicate, 0, // (Subtarget->is64Bit())
/*  6134*/      OPC_MorphNodeTo1, TARGET_VAL(SP::FQTOX), 0,
                    MVT::f64, 1/*#Ops*/, 0, 
                // Src: (SPftox:{ *:[f64] } QFPRegs:{ *:[f128] }:$rs2) - Complexity = 3
                // Dst: (FQTOX:{ *:[f64] } QFPRegs:{ *:[f128] }:$rs2)
/*  6141*/    0, /*End of Scope*/
/*  6142*/  /*SwitchOpcode*/ 38, TARGET_VAL(ISD::BUILD_VECTOR),// ->6183
/*  6145*/    OPC_RecordChild0, // #0 = $a1
/*  6146*/    OPC_CheckChild0Type, MVT::i32,
/*  6148*/    OPC_RecordChild1, // #1 = $a2
/*  6149*/    OPC_CheckChild1Type, MVT::i32,
/*  6151*/    OPC_CheckType, MVT::v2i32,
/*  6153*/    OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  MVT::v2i32, 0/*#Ops*/,  // Results = #2
/*  6159*/    OPC_EmitInteger, MVT::i32, SP::sub_even,
/*  6162*/    OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*  6171*/    OPC_EmitInteger, MVT::i32, SP::sub_odd,
/*  6174*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  MVT::v2i32, 3/*#Ops*/, 4, 1, 5, 
              // Src: (build_vector:{ *:[v2i32] } IntRegs:{ *:[i32] }:$a1, IntRegs:{ *:[i32] }:$a2) - Complexity = 3
              // Dst: (INSERT_SUBREG:{ *:[v2i32] } (INSERT_SUBREG:{ *:[v2i32] } (IMPLICIT_DEF:{ *:[v2i32] }), IntRegs:{ *:[i32] }:$a1, sub_even:{ *:[i32] }), IntRegs:{ *:[i32] }:$a2, sub_odd:{ *:[i32] })
/*  6183*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 6185 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 140
  // #OPC_RecordNode                           = 22
  // #OPC_RecordChild                          = 160
  // #OPC_RecordMemRef                         = 6
  // #OPC_CaptureGlueInput                     = 12
  // #OPC_MoveChild                            = 79
  // #OPC_MoveParent                           = 104
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 0
  // #OPC_CheckPatternPredicate                = 157
  // #OPC_CheckPredicate                       = 102
  // #OPC_CheckOpcode                          = 71
  // #OPC_SwitchOpcode                         = 8
  // #OPC_CheckType                            = 94
  // #OPC_SwitchType                           = 36
  // #OPC_CheckChildType                       = 40
  // #OPC_CheckInteger                         = 1
  // #OPC_CheckChildInteger                    = 12
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckChild2CondCode                  = 0
  // #OPC_CheckValueType                       = 1
  // #OPC_CheckComplexPat                      = 110
  // #OPC_CheckAndImm                          = 1
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 7
  // #OPC_EmitStringInteger                    = 6
  // #OPC_EmitRegister                         = 16
  // #OPC_EmitConvertToTarget                  = 69
  // #OPC_EmitMergeInputChains                 = 125
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 21
  // #OPC_EmitNodeXForm                        = 20
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 332

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
  case 0: return (Subtarget->is64Bit());
  case 1: return (Subtarget->hasHardQuad()) && (Subtarget->isV9());
  case 2: return (!Subtarget->is64Bit());
  case 3: return (Subtarget->isV9());
  case 4: return (!Subtarget->isV9());
  case 5: return (Subtarget->hasLeonCasa());
  case 6: return (Subtarget->hasHardQuad());
  case 7: return (!Subtarget->hasNoFSMULD());
  case 8: return (!Subtarget->hasNoFMULS());
  case 9: return (!Subtarget->fixAllFDIVSQRT());
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
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 1: { 
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
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
    // Predicate_truncstorei8
    // Predicate_sextloadi8
    // Predicate_zextloadi8
    // Predicate_extloadi8
    // Predicate_atomic_load_8
    // Predicate_atomic_store_8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 4: { 
    // Predicate_truncstorei16
    // Predicate_sextloadi16
    // Predicate_zextloadi16
    // Predicate_extloadi16
    // Predicate_atomic_load_16
    // Predicate_atomic_store_16
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 5: { 
    // Predicate_truncstorei32
    // Predicate_zextloadi32
    // Predicate_extloadi32
    // Predicate_sextloadi32
    // Predicate_atomic_swap_32
    // Predicate_atomic_load_32
    // Predicate_atomic_store_32
    // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 6: { 
    // Predicate_simm13
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
 return isInt<13>(N->getSExtValue()); 
  }
  case 7: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 8: { 
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 9: { 
    // Predicate_zextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 10: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 11: { 
    // Predicate_extload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 12: { 
    // Predicate_extloadi1
    // Predicate_zextloadi1
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i1) return false;
return true;

  }
  case 13: { 
    // Predicate_atomic_load_64
    // Predicate_atomic_store_64
    // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i64) return false;
return true;

  }
  case 14: { 
    // Predicate_SETHIimm_not
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

  return N->hasOneUse() && isShiftedUInt<22, 10>(~(unsigned)N->getZExtValue());

  }
  case 15: { 
    // Predicate_simm11
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
 return isInt<11>(N->getSExtValue()); 
  }
  case 16: { 
    // Predicate_SETHIimm
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

  return isShiftedUInt<22, 10>(N->getZExtValue());

  }
  case 17: { 
    // Predicate_uimm32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
 return isUInt<32>(N->getZExtValue()); 
  }
  case 18: { 
    // Predicate_nimm33
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

  int64_t Imm = N->getSExtValue();
  return Imm < 0 && isInt<33>(Imm);

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
  return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
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
  case 0: {  // HI22_not
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(unsigned)N->getZExtValue() >> 10, SDLoc(N),
                                   MVT::i32);

  }
  case 1: {  // as_i32imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), SDLoc(N), MVT::i32);

  }
  case 2: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, SDLoc(N),
                                   MVT::i32);

  }
  case 3: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023, SDLoc(N),
                                   MVT::i32);

  }
  case 4: {  // HIX22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (~N->getZExtValue() >> 10) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

  }
  case 5: {  // LOX10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(~N->getZExtValue() & 0x3ff), SDLoc(N),
                                   MVT::i32);

  }
  case 6: {  // HH22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 42) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

  }
  case 7: {  // HM10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 32) & ((1u << 10) - 1);
  return CurDAG->getTargetConstant(Val, SDLoc(N), MVT::i32);

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

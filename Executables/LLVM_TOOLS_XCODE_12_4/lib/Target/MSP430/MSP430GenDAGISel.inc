/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the MSP430 target                             *|
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
/*     0*/  OPC_SwitchOpcode /*36 cases */, 25|128,39/*5017*/, TARGET_VAL(ISD::STORE),// ->5022
/*     5*/    OPC_RecordMemRef,
/*     6*/    OPC_RecordNode, // #0 = 'st' chained node
/*     7*/    OPC_Scope, 127|128,37/*4863*/, /*->4873*/ // 2 children in Scope
/*    10*/      OPC_MoveChild1,
/*    11*/      OPC_SwitchOpcode /*16 cases */, 32|128,12/*1568*/, TARGET_VAL(ISD::AND),// ->1584
/*    16*/        OPC_Scope, 89|128,11/*1497*/, /*->1516*/ // 2 children in Scope
/*    19*/          OPC_MoveChild0,
/*    20*/          OPC_SwitchOpcode /*2 cases */, 56|128,6/*824*/, TARGET_VAL(ISD::LOAD),// ->849
/*    25*/            OPC_RecordMemRef,
/*    26*/            OPC_RecordNode, // #1 = 'ld' chained node
/*    27*/            OPC_CheckFoldableChainNode,
/*    28*/            OPC_RecordChild1, // #2 = $dst
/*    29*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*    31*/            OPC_CheckPredicate, 1, // Predicate_load
/*    33*/            OPC_MoveParent,
/*    34*/            OPC_Scope, 115|128,4/*627*/, /*->664*/ // 2 children in Scope
/*    37*/              OPC_MoveChild1,
/*    38*/              OPC_SwitchOpcode /*2 cases */, 99|128,3/*483*/, TARGET_VAL(ISD::XOR),// ->526
/*    43*/                OPC_Scope, 87, /*->132*/ // 6 children in Scope
/*    45*/                  OPC_MoveChild0,
/*    46*/                  OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*    49*/                  OPC_RecordMemRef,
/*    50*/                  OPC_RecordNode, // #3 = 'ld' chained node
/*    51*/                  OPC_CheckFoldableChainNode,
/*    52*/                  OPC_RecordChild1, // #4 = $src
/*    53*/                  OPC_CheckPredicate, 0, // Predicate_unindexedload
/*    55*/                  OPC_CheckPredicate, 1, // Predicate_load
/*    57*/                  OPC_MoveParent,
/*    58*/                  OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    69*/                  OPC_MoveParent,
/*    70*/                  OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->101
/*    73*/                    OPC_MoveParent,
/*    74*/                    OPC_CheckChild2Same, 2,
/*    76*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*    78*/                    OPC_CheckPredicate, 3, // Predicate_store
/*    80*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*    83*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*    86*/                    OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*    91*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:{ *:[i8] })), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                              // Dst: (BIC8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*   101*/                  /*SwitchType*/ 28, MVT::i16,// ->131
/*   103*/                    OPC_MoveParent,
/*   104*/                    OPC_CheckChild2Same, 2,
/*   106*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   108*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   110*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*   113*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*   116*/                    OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*   121*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:{ *:[i16] })), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                              // Dst: (BIC16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*   131*/                  0, // EndSwitchType
/*   132*/                /*Scope*/ 93, /*->226*/
/*   133*/                  OPC_RecordChild0, // #3 = $imm
/*   134*/                  OPC_MoveChild0,
/*   135*/                  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   138*/                  OPC_Scope, 42, /*->182*/ // 2 children in Scope
/*   140*/                    OPC_CheckPredicate, 4, // Predicate_cg8imm
/*   142*/                    OPC_MoveParent,
/*   143*/                    OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   154*/                    OPC_MoveParent,
/*   155*/                    OPC_CheckType, MVT::i8,
/*   157*/                    OPC_MoveParent,
/*   158*/                    OPC_CheckChild2Same, 2,
/*   160*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   162*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   164*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   167*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   171*/                    OPC_EmitConvertToTarget, 3,
/*   173*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mc), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i8] } (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm, -1:{ *:[i8] })), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 41
                              // Dst: (BIC8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*   182*/                  /*Scope*/ 42, /*->225*/
/*   183*/                    OPC_CheckPredicate, 5, // Predicate_cg16imm
/*   185*/                    OPC_MoveParent,
/*   186*/                    OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   197*/                    OPC_MoveParent,
/*   198*/                    OPC_CheckType, MVT::i16,
/*   200*/                    OPC_MoveParent,
/*   201*/                    OPC_CheckChild2Same, 2,
/*   203*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   205*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   207*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   210*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   214*/                    OPC_EmitConvertToTarget, 3,
/*   216*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mc), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i16] } (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm, -1:{ *:[i16] })), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 41
                              // Dst: (BIC16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*   225*/                  0, /*End of Scope*/
/*   226*/                /*Scope*/ 82, /*->309*/
/*   227*/                  OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   238*/                  OPC_RecordChild1, // #3 = $imm
/*   239*/                  OPC_MoveChild1,
/*   240*/                  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   243*/                  OPC_Scope, 31, /*->276*/ // 2 children in Scope
/*   245*/                    OPC_CheckPredicate, 4, // Predicate_cg8imm
/*   247*/                    OPC_MoveParent,
/*   248*/                    OPC_MoveParent,
/*   249*/                    OPC_CheckType, MVT::i8,
/*   251*/                    OPC_MoveParent,
/*   252*/                    OPC_CheckChild2Same, 2,
/*   254*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   256*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   258*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   261*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   265*/                    OPC_EmitConvertToTarget, 3,
/*   267*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mc), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i8] } -1:{ *:[i8] }, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm)), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 41
                              // Dst: (BIC8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*   276*/                  /*Scope*/ 31, /*->308*/
/*   277*/                    OPC_CheckPredicate, 5, // Predicate_cg16imm
/*   279*/                    OPC_MoveParent,
/*   280*/                    OPC_MoveParent,
/*   281*/                    OPC_CheckType, MVT::i16,
/*   283*/                    OPC_MoveParent,
/*   284*/                    OPC_CheckChild2Same, 2,
/*   286*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   288*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   290*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   293*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   297*/                    OPC_EmitConvertToTarget, 3,
/*   299*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mc), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i16] } -1:{ *:[i16] }, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm)), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 41
                              // Dst: (BIC16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*   308*/                  0, /*End of Scope*/
/*   309*/                /*Scope*/ 74, /*->384*/
/*   310*/                  OPC_RecordChild0, // #3 = $imm
/*   311*/                  OPC_MoveChild0,
/*   312*/                  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   315*/                  OPC_MoveParent,
/*   316*/                  OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   327*/                  OPC_MoveParent,
/*   328*/                  OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->356
/*   331*/                    OPC_MoveParent,
/*   332*/                    OPC_CheckChild2Same, 2,
/*   334*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   336*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   338*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   341*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   345*/                    OPC_EmitConvertToTarget, 3,
/*   347*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mi), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i8] } (imm:{ *:[i8] }):$imm, -1:{ *:[i8] })), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 40
                              // Dst: (BIC8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*   356*/                  /*SwitchType*/ 25, MVT::i16,// ->383
/*   358*/                    OPC_MoveParent,
/*   359*/                    OPC_CheckChild2Same, 2,
/*   361*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   363*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   365*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   368*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   372*/                    OPC_EmitConvertToTarget, 3,
/*   374*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mi), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i16] } (imm:{ *:[i16] }):$imm, -1:{ *:[i16] })), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 40
                              // Dst: (BIC16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*   383*/                  0, // EndSwitchType
/*   384*/                /*Scope*/ 74, /*->459*/
/*   385*/                  OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   396*/                  OPC_RecordChild1, // #3 = $imm
/*   397*/                  OPC_MoveChild1,
/*   398*/                  OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   401*/                  OPC_MoveParent,
/*   402*/                  OPC_MoveParent,
/*   403*/                  OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->431
/*   406*/                    OPC_MoveParent,
/*   407*/                    OPC_CheckChild2Same, 2,
/*   409*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   411*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   413*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   416*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   420*/                    OPC_EmitConvertToTarget, 3,
/*   422*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mi), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i8] } -1:{ *:[i8] }, (imm:{ *:[i8] }):$imm)), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 40
                              // Dst: (BIC8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*   431*/                  /*SwitchType*/ 25, MVT::i16,// ->458
/*   433*/                    OPC_MoveParent,
/*   434*/                    OPC_CheckChild2Same, 2,
/*   436*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   438*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   440*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   443*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   447*/                    OPC_EmitConvertToTarget, 3,
/*   449*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mi), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i16] } -1:{ *:[i16] }, (imm:{ *:[i16] }):$imm)), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 40
                              // Dst: (BIC16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*   458*/                  0, // EndSwitchType
/*   459*/                /*Scope*/ 65, /*->525*/
/*   460*/                  OPC_RecordChild0, // #3 = $rs
/*   461*/                  OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   472*/                  OPC_MoveParent,
/*   473*/                  OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->499
/*   476*/                    OPC_MoveParent,
/*   477*/                    OPC_CheckChild2Same, 2,
/*   479*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   481*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   483*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   486*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   490*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mr), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i8] } GR8:{ *:[i8] }:$rs, -1:{ *:[i8] })), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                              // Dst: (BIC8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*   499*/                  /*SwitchType*/ 23, MVT::i16,// ->524
/*   501*/                    OPC_MoveParent,
/*   502*/                    OPC_CheckChild2Same, 2,
/*   504*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   506*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   508*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   511*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   515*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mr), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:{ *:[i16] } GR16:{ *:[i16] }:$rs, -1:{ *:[i16] })), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                              // Dst: (BIC16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*   524*/                  0, // EndSwitchType
/*   525*/                0, /*End of Scope*/
/*   526*/              /*SwitchOpcode*/ 5|128,1/*133*/, TARGET_VAL(ISD::LOAD),// ->663
/*   530*/                OPC_RecordMemRef,
/*   531*/                OPC_RecordNode, // #3 = 'ld' chained node
/*   532*/                OPC_CheckFoldableChainNode,
/*   533*/                OPC_RecordChild1, // #4 = $src
/*   534*/                OPC_CheckPredicate, 0, // Predicate_unindexedload
/*   536*/                OPC_CheckPredicate, 1, // Predicate_load
/*   538*/                OPC_MoveParent,
/*   539*/                OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->601
/*   542*/                  OPC_MoveParent,
/*   543*/                  OPC_Scope, 27, /*->572*/ // 2 children in Scope
/*   545*/                    OPC_CheckChild2Same, 2,
/*   547*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   549*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   551*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*   554*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*   557*/                    OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*   562*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                              // Dst: (AND8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*   572*/                  /*Scope*/ 27, /*->600*/
/*   573*/                    OPC_CheckChild2Same, 4,
/*   575*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   577*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   579*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*   582*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*   585*/                    OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*   590*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                              // Dst: (AND8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*   600*/                  0, /*End of Scope*/
/*   601*/                /*SwitchType*/ 59, MVT::i16,// ->662
/*   603*/                  OPC_MoveParent,
/*   604*/                  OPC_Scope, 27, /*->633*/ // 2 children in Scope
/*   606*/                    OPC_CheckChild2Same, 2,
/*   608*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   610*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   612*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*   615*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*   618*/                    OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*   623*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                              // Dst: (AND16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*   633*/                  /*Scope*/ 27, /*->661*/
/*   634*/                    OPC_CheckChild2Same, 4,
/*   636*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   638*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   640*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*   643*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*   646*/                    OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*   651*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                              // Dst: (AND16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*   661*/                  0, /*End of Scope*/
/*   662*/                0, // EndSwitchType
/*   663*/              0, // EndSwitchOpcode
/*   664*/            /*Scope*/ 54|128,1/*182*/, /*->848*/
/*   666*/              OPC_RecordChild1, // #3 = $imm
/*   667*/              OPC_Scope, 126, /*->795*/ // 3 children in Scope
/*   669*/                OPC_MoveChild1,
/*   670*/                OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   673*/                OPC_Scope, 30, /*->705*/ // 3 children in Scope
/*   675*/                  OPC_CheckPredicate, 4, // Predicate_cg8imm
/*   677*/                  OPC_MoveParent,
/*   678*/                  OPC_CheckType, MVT::i8,
/*   680*/                  OPC_MoveParent,
/*   681*/                  OPC_CheckChild2Same, 2,
/*   683*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   685*/                  OPC_CheckPredicate, 3, // Predicate_store
/*   687*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   690*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*   694*/                  OPC_EmitConvertToTarget, 3,
/*   696*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mc), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                            // Dst: (AND8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*   705*/                /*Scope*/ 30, /*->736*/
/*   706*/                  OPC_CheckPredicate, 5, // Predicate_cg16imm
/*   708*/                  OPC_MoveParent,
/*   709*/                  OPC_CheckType, MVT::i16,
/*   711*/                  OPC_MoveParent,
/*   712*/                  OPC_CheckChild2Same, 2,
/*   714*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   716*/                  OPC_CheckPredicate, 3, // Predicate_store
/*   718*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   721*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*   725*/                  OPC_EmitConvertToTarget, 3,
/*   727*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mc), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                            // Dst: (AND16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*   736*/                /*Scope*/ 57, /*->794*/
/*   737*/                  OPC_MoveParent,
/*   738*/                  OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->766
/*   741*/                    OPC_MoveParent,
/*   742*/                    OPC_CheckChild2Same, 2,
/*   744*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   746*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   748*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   751*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   755*/                    OPC_EmitConvertToTarget, 3,
/*   757*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mi), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                              // Dst: (AND8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*   766*/                  /*SwitchType*/ 25, MVT::i16,// ->793
/*   768*/                    OPC_MoveParent,
/*   769*/                    OPC_CheckChild2Same, 2,
/*   771*/                    OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   773*/                    OPC_CheckPredicate, 3, // Predicate_store
/*   775*/                    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   778*/                    OPC_EmitMergeInputChains, 2, 0, 1, 
/*   782*/                    OPC_EmitConvertToTarget, 3,
/*   784*/                    OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mi), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                              // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                              // Dst: (AND16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*   793*/                  0, // EndSwitchType
/*   794*/                0, /*End of Scope*/
/*   795*/              /*Scope*/ 25, /*->821*/
/*   796*/                OPC_CheckType, MVT::i8,
/*   798*/                OPC_MoveParent,
/*   799*/                OPC_CheckChild2Same, 2,
/*   801*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   803*/                OPC_CheckPredicate, 3, // Predicate_store
/*   805*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   808*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*   812*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mr), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                          // Src: (st (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                          // Dst: (AND8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*   821*/              /*Scope*/ 25, /*->847*/
/*   822*/                OPC_CheckType, MVT::i16,
/*   824*/                OPC_MoveParent,
/*   825*/                OPC_CheckChild2Same, 2,
/*   827*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   829*/                OPC_CheckPredicate, 3, // Predicate_store
/*   831*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*   834*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*   838*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mr), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                          // Src: (st (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                          // Dst: (AND16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*   847*/              0, /*End of Scope*/
/*   848*/            0, /*End of Scope*/
/*   849*/          /*SwitchOpcode*/ 22|128,5/*662*/, TARGET_VAL(ISD::XOR),// ->1515
/*   853*/            OPC_Scope, 100, /*->955*/ // 10 children in Scope
/*   855*/              OPC_MoveChild0,
/*   856*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*   859*/              OPC_RecordMemRef,
/*   860*/              OPC_RecordNode, // #1 = 'ld' chained node
/*   861*/              OPC_CheckFoldableChainNode,
/*   862*/              OPC_RecordChild1, // #2 = $src
/*   863*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*   865*/              OPC_CheckPredicate, 1, // Predicate_load
/*   867*/              OPC_MoveParent,
/*   868*/              OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   879*/              OPC_MoveParent,
/*   880*/              OPC_MoveChild1,
/*   881*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*   884*/              OPC_RecordMemRef,
/*   885*/              OPC_RecordNode, // #3 = 'ld' chained node
/*   886*/              OPC_CheckFoldableChainNode,
/*   887*/              OPC_RecordChild1, // #4 = $dst
/*   888*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*   890*/              OPC_CheckPredicate, 1, // Predicate_load
/*   892*/              OPC_MoveParent,
/*   893*/              OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->924
/*   896*/                OPC_MoveParent,
/*   897*/                OPC_CheckChild2Same, 4,
/*   899*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   901*/                OPC_CheckPredicate, 3, // Predicate_store
/*   903*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*   906*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*   909*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*   914*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (and:{ *:[i8] } (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:{ *:[i8] }), (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                          // Dst: (BIC8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*   924*/              /*SwitchType*/ 28, MVT::i16,// ->954
/*   926*/                OPC_MoveParent,
/*   927*/                OPC_CheckChild2Same, 4,
/*   929*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   931*/                OPC_CheckPredicate, 3, // Predicate_store
/*   933*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*   936*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*   939*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*   944*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (and:{ *:[i16] } (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:{ *:[i16] }), (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                          // Dst: (BIC16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*   954*/              0, // EndSwitchType
/*   955*/            /*Scope*/ 60, /*->1016*/
/*   956*/              OPC_RecordChild0, // #1 = $imm
/*   957*/              OPC_MoveChild0,
/*   958*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   961*/              OPC_CheckPredicate, 4, // Predicate_cg8imm
/*   963*/              OPC_MoveParent,
/*   964*/              OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   975*/              OPC_MoveParent,
/*   976*/              OPC_MoveChild1,
/*   977*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*   980*/              OPC_RecordMemRef,
/*   981*/              OPC_RecordNode, // #2 = 'ld' chained node
/*   982*/              OPC_CheckFoldableChainNode,
/*   983*/              OPC_RecordChild1, // #3 = $dst
/*   984*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*   986*/              OPC_CheckPredicate, 1, // Predicate_load
/*   988*/              OPC_MoveParent,
/*   989*/              OPC_CheckType, MVT::i8,
/*   991*/              OPC_MoveParent,
/*   992*/              OPC_CheckChild2Same, 3,
/*   994*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*   996*/              OPC_CheckPredicate, 3, // Predicate_store
/*   998*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1001*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1005*/              OPC_EmitConvertToTarget, 1,
/*  1007*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mc), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (and:{ *:[i8] } (xor:{ *:[i8] } (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm, -1:{ *:[i8] }), (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 41
                        // Dst: (BIC8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  1016*/            /*Scope*/ 60, /*->1077*/
/*  1017*/              OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1028*/              OPC_RecordChild1, // #1 = $imm
/*  1029*/              OPC_MoveChild1,
/*  1030*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1033*/              OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  1035*/              OPC_MoveParent,
/*  1036*/              OPC_MoveParent,
/*  1037*/              OPC_MoveChild1,
/*  1038*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1041*/              OPC_RecordMemRef,
/*  1042*/              OPC_RecordNode, // #2 = 'ld' chained node
/*  1043*/              OPC_CheckFoldableChainNode,
/*  1044*/              OPC_RecordChild1, // #3 = $dst
/*  1045*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1047*/              OPC_CheckPredicate, 1, // Predicate_load
/*  1049*/              OPC_MoveParent,
/*  1050*/              OPC_CheckType, MVT::i8,
/*  1052*/              OPC_MoveParent,
/*  1053*/              OPC_CheckChild2Same, 3,
/*  1055*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1057*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1059*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1062*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1066*/              OPC_EmitConvertToTarget, 1,
/*  1068*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mc), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (and:{ *:[i8] } (xor:{ *:[i8] } -1:{ *:[i8] }, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 41
                        // Dst: (BIC8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  1077*/            /*Scope*/ 60, /*->1138*/
/*  1078*/              OPC_RecordChild0, // #1 = $imm
/*  1079*/              OPC_MoveChild0,
/*  1080*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1083*/              OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  1085*/              OPC_MoveParent,
/*  1086*/              OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1097*/              OPC_MoveParent,
/*  1098*/              OPC_MoveChild1,
/*  1099*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1102*/              OPC_RecordMemRef,
/*  1103*/              OPC_RecordNode, // #2 = 'ld' chained node
/*  1104*/              OPC_CheckFoldableChainNode,
/*  1105*/              OPC_RecordChild1, // #3 = $dst
/*  1106*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1108*/              OPC_CheckPredicate, 1, // Predicate_load
/*  1110*/              OPC_MoveParent,
/*  1111*/              OPC_CheckType, MVT::i16,
/*  1113*/              OPC_MoveParent,
/*  1114*/              OPC_CheckChild2Same, 3,
/*  1116*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1118*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1120*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1123*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1127*/              OPC_EmitConvertToTarget, 1,
/*  1129*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mc), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (and:{ *:[i16] } (xor:{ *:[i16] } (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm, -1:{ *:[i16] }), (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 41
                        // Dst: (BIC16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  1138*/            /*Scope*/ 60, /*->1199*/
/*  1139*/              OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1150*/              OPC_RecordChild1, // #1 = $imm
/*  1151*/              OPC_MoveChild1,
/*  1152*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1155*/              OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  1157*/              OPC_MoveParent,
/*  1158*/              OPC_MoveParent,
/*  1159*/              OPC_MoveChild1,
/*  1160*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1163*/              OPC_RecordMemRef,
/*  1164*/              OPC_RecordNode, // #2 = 'ld' chained node
/*  1165*/              OPC_CheckFoldableChainNode,
/*  1166*/              OPC_RecordChild1, // #3 = $dst
/*  1167*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1169*/              OPC_CheckPredicate, 1, // Predicate_load
/*  1171*/              OPC_MoveParent,
/*  1172*/              OPC_CheckType, MVT::i16,
/*  1174*/              OPC_MoveParent,
/*  1175*/              OPC_CheckChild2Same, 3,
/*  1177*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1179*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1181*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1184*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1188*/              OPC_EmitConvertToTarget, 1,
/*  1190*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mc), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (and:{ *:[i16] } (xor:{ *:[i16] } -1:{ *:[i16] }, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 41
                        // Dst: (BIC16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  1199*/            /*Scope*/ 58, /*->1258*/
/*  1200*/              OPC_RecordChild0, // #1 = $imm
/*  1201*/              OPC_MoveChild0,
/*  1202*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1205*/              OPC_MoveParent,
/*  1206*/              OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1217*/              OPC_MoveParent,
/*  1218*/              OPC_MoveChild1,
/*  1219*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1222*/              OPC_RecordMemRef,
/*  1223*/              OPC_RecordNode, // #2 = 'ld' chained node
/*  1224*/              OPC_CheckFoldableChainNode,
/*  1225*/              OPC_RecordChild1, // #3 = $dst
/*  1226*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1228*/              OPC_CheckPredicate, 1, // Predicate_load
/*  1230*/              OPC_MoveParent,
/*  1231*/              OPC_CheckType, MVT::i8,
/*  1233*/              OPC_MoveParent,
/*  1234*/              OPC_CheckChild2Same, 3,
/*  1236*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1238*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1240*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1243*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1247*/              OPC_EmitConvertToTarget, 1,
/*  1249*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mi), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (and:{ *:[i8] } (xor:{ *:[i8] } (imm:{ *:[i8] }):$imm, -1:{ *:[i8] }), (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 40
                        // Dst: (BIC8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  1258*/            /*Scope*/ 58, /*->1317*/
/*  1259*/              OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1270*/              OPC_RecordChild1, // #1 = $imm
/*  1271*/              OPC_MoveChild1,
/*  1272*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1275*/              OPC_MoveParent,
/*  1276*/              OPC_MoveParent,
/*  1277*/              OPC_MoveChild1,
/*  1278*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1281*/              OPC_RecordMemRef,
/*  1282*/              OPC_RecordNode, // #2 = 'ld' chained node
/*  1283*/              OPC_CheckFoldableChainNode,
/*  1284*/              OPC_RecordChild1, // #3 = $dst
/*  1285*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1287*/              OPC_CheckPredicate, 1, // Predicate_load
/*  1289*/              OPC_MoveParent,
/*  1290*/              OPC_CheckType, MVT::i8,
/*  1292*/              OPC_MoveParent,
/*  1293*/              OPC_CheckChild2Same, 3,
/*  1295*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1297*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1299*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1302*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1306*/              OPC_EmitConvertToTarget, 1,
/*  1308*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mi), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (and:{ *:[i8] } (xor:{ *:[i8] } -1:{ *:[i8] }, (imm:{ *:[i8] }):$imm), (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 40
                        // Dst: (BIC8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  1317*/            /*Scope*/ 58, /*->1376*/
/*  1318*/              OPC_RecordChild0, // #1 = $imm
/*  1319*/              OPC_MoveChild0,
/*  1320*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1323*/              OPC_MoveParent,
/*  1324*/              OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1335*/              OPC_MoveParent,
/*  1336*/              OPC_MoveChild1,
/*  1337*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1340*/              OPC_RecordMemRef,
/*  1341*/              OPC_RecordNode, // #2 = 'ld' chained node
/*  1342*/              OPC_CheckFoldableChainNode,
/*  1343*/              OPC_RecordChild1, // #3 = $dst
/*  1344*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1346*/              OPC_CheckPredicate, 1, // Predicate_load
/*  1348*/              OPC_MoveParent,
/*  1349*/              OPC_CheckType, MVT::i16,
/*  1351*/              OPC_MoveParent,
/*  1352*/              OPC_CheckChild2Same, 3,
/*  1354*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1356*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1358*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1361*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1365*/              OPC_EmitConvertToTarget, 1,
/*  1367*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mi), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (and:{ *:[i16] } (xor:{ *:[i16] } (imm:{ *:[i16] }):$imm, -1:{ *:[i16] }), (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 40
                        // Dst: (BIC16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  1376*/            /*Scope*/ 58, /*->1435*/
/*  1377*/              OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1388*/              OPC_RecordChild1, // #1 = $imm
/*  1389*/              OPC_MoveChild1,
/*  1390*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1393*/              OPC_MoveParent,
/*  1394*/              OPC_MoveParent,
/*  1395*/              OPC_MoveChild1,
/*  1396*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1399*/              OPC_RecordMemRef,
/*  1400*/              OPC_RecordNode, // #2 = 'ld' chained node
/*  1401*/              OPC_CheckFoldableChainNode,
/*  1402*/              OPC_RecordChild1, // #3 = $dst
/*  1403*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1405*/              OPC_CheckPredicate, 1, // Predicate_load
/*  1407*/              OPC_MoveParent,
/*  1408*/              OPC_CheckType, MVT::i16,
/*  1410*/              OPC_MoveParent,
/*  1411*/              OPC_CheckChild2Same, 3,
/*  1413*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1415*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1417*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1420*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1424*/              OPC_EmitConvertToTarget, 1,
/*  1426*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mi), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (and:{ *:[i16] } (xor:{ *:[i16] } -1:{ *:[i16] }, (imm:{ *:[i16] }):$imm), (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 40
                        // Dst: (BIC16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  1435*/            /*Scope*/ 78, /*->1514*/
/*  1436*/              OPC_RecordChild0, // #1 = $rs
/*  1437*/              OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1448*/              OPC_MoveParent,
/*  1449*/              OPC_MoveChild1,
/*  1450*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1453*/              OPC_RecordMemRef,
/*  1454*/              OPC_RecordNode, // #2 = 'ld' chained node
/*  1455*/              OPC_CheckFoldableChainNode,
/*  1456*/              OPC_RecordChild1, // #3 = $dst
/*  1457*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1459*/              OPC_CheckPredicate, 1, // Predicate_load
/*  1461*/              OPC_MoveParent,
/*  1462*/              OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->1488
/*  1465*/                OPC_MoveParent,
/*  1466*/                OPC_CheckChild2Same, 3,
/*  1468*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1470*/                OPC_CheckPredicate, 3, // Predicate_store
/*  1472*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1475*/                OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1479*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mr), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                          // Src: (st (and:{ *:[i8] } (xor:{ *:[i8] } GR8:{ *:[i8] }:$rs, -1:{ *:[i8] }), (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                          // Dst: (BIC8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  1488*/              /*SwitchType*/ 23, MVT::i16,// ->1513
/*  1490*/                OPC_MoveParent,
/*  1491*/                OPC_CheckChild2Same, 3,
/*  1493*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1495*/                OPC_CheckPredicate, 3, // Predicate_store
/*  1497*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1500*/                OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1504*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mr), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                          // Src: (st (and:{ *:[i16] } (xor:{ *:[i16] } GR16:{ *:[i16] }:$rs, -1:{ *:[i16] }), (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                          // Dst: (BIC16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  1513*/              0, // EndSwitchType
/*  1514*/            0, /*End of Scope*/
/*  1515*/          0, // EndSwitchOpcode
/*  1516*/        /*Scope*/ 66, /*->1583*/
/*  1517*/          OPC_RecordChild0, // #1 = $rs
/*  1518*/          OPC_MoveChild1,
/*  1519*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1522*/          OPC_RecordMemRef,
/*  1523*/          OPC_RecordNode, // #2 = 'ld' chained node
/*  1524*/          OPC_CheckFoldableChainNode,
/*  1525*/          OPC_RecordChild1, // #3 = $dst
/*  1526*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1528*/          OPC_CheckPredicate, 1, // Predicate_load
/*  1530*/          OPC_MoveParent,
/*  1531*/          OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->1557
/*  1534*/            OPC_MoveParent,
/*  1535*/            OPC_CheckChild2Same, 3,
/*  1537*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1539*/            OPC_CheckPredicate, 3, // Predicate_store
/*  1541*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1544*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1548*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (and:{ *:[i8] } GR8:{ *:[i8] }:$rs, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (AND8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  1557*/          /*SwitchType*/ 23, MVT::i16,// ->1582
/*  1559*/            OPC_MoveParent,
/*  1560*/            OPC_CheckChild2Same, 3,
/*  1562*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1564*/            OPC_CheckPredicate, 3, // Predicate_store
/*  1566*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1569*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1573*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (and:{ *:[i16] } GR16:{ *:[i16] }:$rs, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (AND16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  1582*/          0, // EndSwitchType
/*  1583*/        0, /*End of Scope*/
/*  1584*/      /*SwitchOpcode*/ 25|128,3/*409*/, TARGET_VAL(ISD::ADD),// ->1997
/*  1588*/        OPC_Scope, 82|128,2/*338*/, /*->1929*/ // 2 children in Scope
/*  1591*/          OPC_MoveChild0,
/*  1592*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1595*/          OPC_RecordMemRef,
/*  1596*/          OPC_RecordNode, // #1 = 'ld' chained node
/*  1597*/          OPC_CheckFoldableChainNode,
/*  1598*/          OPC_RecordChild1, // #2 = $dst
/*  1599*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1601*/          OPC_CheckPredicate, 1, // Predicate_load
/*  1603*/          OPC_MoveParent,
/*  1604*/          OPC_Scope, 9|128,1/*137*/, /*->1744*/ // 2 children in Scope
/*  1607*/            OPC_MoveChild1,
/*  1608*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1611*/            OPC_RecordMemRef,
/*  1612*/            OPC_RecordNode, // #3 = 'ld' chained node
/*  1613*/            OPC_CheckFoldableChainNode,
/*  1614*/            OPC_RecordChild1, // #4 = $src
/*  1615*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1617*/            OPC_CheckPredicate, 1, // Predicate_load
/*  1619*/            OPC_MoveParent,
/*  1620*/            OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->1682
/*  1623*/              OPC_MoveParent,
/*  1624*/              OPC_Scope, 27, /*->1653*/ // 2 children in Scope
/*  1626*/                OPC_CheckChild2Same, 2,
/*  1628*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1630*/                OPC_CheckPredicate, 3, // Predicate_store
/*  1632*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  1635*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  1638*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  1643*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (add:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  1653*/              /*Scope*/ 27, /*->1681*/
/*  1654*/                OPC_CheckChild2Same, 4,
/*  1656*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1658*/                OPC_CheckPredicate, 3, // Predicate_store
/*  1660*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  1663*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  1666*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  1671*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (add:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  1681*/              0, /*End of Scope*/
/*  1682*/            /*SwitchType*/ 59, MVT::i16,// ->1743
/*  1684*/              OPC_MoveParent,
/*  1685*/              OPC_Scope, 27, /*->1714*/ // 2 children in Scope
/*  1687*/                OPC_CheckChild2Same, 2,
/*  1689*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1691*/                OPC_CheckPredicate, 3, // Predicate_store
/*  1693*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  1696*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  1699*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  1704*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (add:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  1714*/              /*Scope*/ 27, /*->1742*/
/*  1715*/                OPC_CheckChild2Same, 4,
/*  1717*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1719*/                OPC_CheckPredicate, 3, // Predicate_store
/*  1721*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  1724*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  1727*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  1732*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (add:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  1742*/              0, /*End of Scope*/
/*  1743*/            0, // EndSwitchType
/*  1744*/          /*Scope*/ 54|128,1/*182*/, /*->1928*/
/*  1746*/            OPC_RecordChild1, // #3 = $imm
/*  1747*/            OPC_Scope, 126, /*->1875*/ // 3 children in Scope
/*  1749*/              OPC_MoveChild1,
/*  1750*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1753*/              OPC_Scope, 30, /*->1785*/ // 3 children in Scope
/*  1755*/                OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  1757*/                OPC_MoveParent,
/*  1758*/                OPC_CheckType, MVT::i8,
/*  1760*/                OPC_MoveParent,
/*  1761*/                OPC_CheckChild2Same, 2,
/*  1763*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1765*/                OPC_CheckPredicate, 3, // Predicate_store
/*  1767*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  1770*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  1774*/                OPC_EmitConvertToTarget, 3,
/*  1776*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mc), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (add:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                          // Dst: (ADD8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  1785*/              /*Scope*/ 30, /*->1816*/
/*  1786*/                OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  1788*/                OPC_MoveParent,
/*  1789*/                OPC_CheckType, MVT::i16,
/*  1791*/                OPC_MoveParent,
/*  1792*/                OPC_CheckChild2Same, 2,
/*  1794*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1796*/                OPC_CheckPredicate, 3, // Predicate_store
/*  1798*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  1801*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  1805*/                OPC_EmitConvertToTarget, 3,
/*  1807*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mc), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (add:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                          // Dst: (ADD16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  1816*/              /*Scope*/ 57, /*->1874*/
/*  1817*/                OPC_MoveParent,
/*  1818*/                OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->1846
/*  1821*/                  OPC_MoveParent,
/*  1822*/                  OPC_CheckChild2Same, 2,
/*  1824*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1826*/                  OPC_CheckPredicate, 3, // Predicate_store
/*  1828*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  1831*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*  1835*/                  OPC_EmitConvertToTarget, 3,
/*  1837*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mi), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (add:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (ADD8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  1846*/                /*SwitchType*/ 25, MVT::i16,// ->1873
/*  1848*/                  OPC_MoveParent,
/*  1849*/                  OPC_CheckChild2Same, 2,
/*  1851*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1853*/                  OPC_CheckPredicate, 3, // Predicate_store
/*  1855*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  1858*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*  1862*/                  OPC_EmitConvertToTarget, 3,
/*  1864*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mi), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (add:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (ADD16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  1873*/                0, // EndSwitchType
/*  1874*/              0, /*End of Scope*/
/*  1875*/            /*Scope*/ 25, /*->1901*/
/*  1876*/              OPC_CheckType, MVT::i8,
/*  1878*/              OPC_MoveParent,
/*  1879*/              OPC_CheckChild2Same, 2,
/*  1881*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1883*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1885*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  1888*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  1892*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (add:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADD8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  1901*/            /*Scope*/ 25, /*->1927*/
/*  1902*/              OPC_CheckType, MVT::i16,
/*  1904*/              OPC_MoveParent,
/*  1905*/              OPC_CheckChild2Same, 2,
/*  1907*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1909*/              OPC_CheckPredicate, 3, // Predicate_store
/*  1911*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  1914*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  1918*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (add:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADD16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  1927*/            0, /*End of Scope*/
/*  1928*/          0, /*End of Scope*/
/*  1929*/        /*Scope*/ 66, /*->1996*/
/*  1930*/          OPC_RecordChild0, // #1 = $rs
/*  1931*/          OPC_MoveChild1,
/*  1932*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  1935*/          OPC_RecordMemRef,
/*  1936*/          OPC_RecordNode, // #2 = 'ld' chained node
/*  1937*/          OPC_CheckFoldableChainNode,
/*  1938*/          OPC_RecordChild1, // #3 = $dst
/*  1939*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  1941*/          OPC_CheckPredicate, 1, // Predicate_load
/*  1943*/          OPC_MoveParent,
/*  1944*/          OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->1970
/*  1947*/            OPC_MoveParent,
/*  1948*/            OPC_CheckChild2Same, 3,
/*  1950*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1952*/            OPC_CheckPredicate, 3, // Predicate_store
/*  1954*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1957*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1961*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (add:{ *:[i8] } GR8:{ *:[i8] }:$rs, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  1970*/          /*SwitchType*/ 23, MVT::i16,// ->1995
/*  1972*/            OPC_MoveParent,
/*  1973*/            OPC_CheckChild2Same, 3,
/*  1975*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  1977*/            OPC_CheckPredicate, 3, // Predicate_store
/*  1979*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  1982*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  1986*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (add:{ *:[i16] } GR16:{ *:[i16] }:$rs, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  1995*/          0, // EndSwitchType
/*  1996*/        0, /*End of Scope*/
/*  1997*/      /*SwitchOpcode*/ 27|128,3/*411*/, TARGET_VAL(ISD::ADDE),// ->2412
/*  2001*/        OPC_RecordNode, // #1 = 'adde' glue output node
/*  2002*/        OPC_CaptureGlueInput,
/*  2003*/        OPC_Scope, 82|128,2/*338*/, /*->2344*/ // 2 children in Scope
/*  2006*/          OPC_MoveChild0,
/*  2007*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  2010*/          OPC_RecordMemRef,
/*  2011*/          OPC_RecordNode, // #1 = 'ld' chained node
/*  2012*/          OPC_CheckFoldableChainNode,
/*  2013*/          OPC_RecordChild1, // #2 = $dst
/*  2014*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  2016*/          OPC_CheckPredicate, 1, // Predicate_load
/*  2018*/          OPC_MoveParent,
/*  2019*/          OPC_Scope, 9|128,1/*137*/, /*->2159*/ // 2 children in Scope
/*  2022*/            OPC_MoveChild1,
/*  2023*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  2026*/            OPC_RecordMemRef,
/*  2027*/            OPC_RecordNode, // #3 = 'ld' chained node
/*  2028*/            OPC_CheckFoldableChainNode,
/*  2029*/            OPC_RecordChild1, // #4 = $src
/*  2030*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  2032*/            OPC_CheckPredicate, 1, // Predicate_load
/*  2034*/            OPC_MoveParent,
/*  2035*/            OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->2097
/*  2038*/              OPC_MoveParent,
/*  2039*/              OPC_Scope, 27, /*->2068*/ // 2 children in Scope
/*  2041*/                OPC_CheckChild2Same, 2,
/*  2043*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2045*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2047*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  2050*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  2053*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2058*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (adde:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADDC8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2068*/              /*Scope*/ 27, /*->2096*/
/*  2069*/                OPC_CheckChild2Same, 4,
/*  2071*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2073*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2075*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  2078*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  2081*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2086*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (adde:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADDC8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2096*/              0, /*End of Scope*/
/*  2097*/            /*SwitchType*/ 59, MVT::i16,// ->2158
/*  2099*/              OPC_MoveParent,
/*  2100*/              OPC_Scope, 27, /*->2129*/ // 2 children in Scope
/*  2102*/                OPC_CheckChild2Same, 2,
/*  2104*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2106*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2108*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  2111*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  2114*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2119*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (adde:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADDC16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2129*/              /*Scope*/ 27, /*->2157*/
/*  2130*/                OPC_CheckChild2Same, 4,
/*  2132*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2134*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2136*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  2139*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  2142*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2147*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (adde:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADDC16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2157*/              0, /*End of Scope*/
/*  2158*/            0, // EndSwitchType
/*  2159*/          /*Scope*/ 54|128,1/*182*/, /*->2343*/
/*  2161*/            OPC_RecordChild1, // #3 = $imm
/*  2162*/            OPC_Scope, 126, /*->2290*/ // 3 children in Scope
/*  2164*/              OPC_MoveChild1,
/*  2165*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2168*/              OPC_Scope, 30, /*->2200*/ // 3 children in Scope
/*  2170*/                OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  2172*/                OPC_MoveParent,
/*  2173*/                OPC_CheckType, MVT::i8,
/*  2175*/                OPC_MoveParent,
/*  2176*/                OPC_CheckChild2Same, 2,
/*  2178*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2180*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2182*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2185*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2189*/                OPC_EmitConvertToTarget, 3,
/*  2191*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC8mc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (adde:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                          // Dst: (ADDC8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  2200*/              /*Scope*/ 30, /*->2231*/
/*  2201*/                OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  2203*/                OPC_MoveParent,
/*  2204*/                OPC_CheckType, MVT::i16,
/*  2206*/                OPC_MoveParent,
/*  2207*/                OPC_CheckChild2Same, 2,
/*  2209*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2211*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2213*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2216*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2220*/                OPC_EmitConvertToTarget, 3,
/*  2222*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC16mc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (adde:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                          // Dst: (ADDC16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  2231*/              /*Scope*/ 57, /*->2289*/
/*  2232*/                OPC_MoveParent,
/*  2233*/                OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->2261
/*  2236*/                  OPC_MoveParent,
/*  2237*/                  OPC_CheckChild2Same, 2,
/*  2239*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2241*/                  OPC_CheckPredicate, 3, // Predicate_store
/*  2243*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2246*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2250*/                  OPC_EmitConvertToTarget, 3,
/*  2252*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC8mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (adde:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (ADDC8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  2261*/                /*SwitchType*/ 25, MVT::i16,// ->2288
/*  2263*/                  OPC_MoveParent,
/*  2264*/                  OPC_CheckChild2Same, 2,
/*  2266*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2268*/                  OPC_CheckPredicate, 3, // Predicate_store
/*  2270*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2273*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2277*/                  OPC_EmitConvertToTarget, 3,
/*  2279*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC16mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (adde:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (ADDC16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  2288*/                0, // EndSwitchType
/*  2289*/              0, /*End of Scope*/
/*  2290*/            /*Scope*/ 25, /*->2316*/
/*  2291*/              OPC_CheckType, MVT::i8,
/*  2293*/              OPC_MoveParent,
/*  2294*/              OPC_CheckChild2Same, 2,
/*  2296*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2298*/              OPC_CheckPredicate, 3, // Predicate_store
/*  2300*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2303*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2307*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (adde:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADDC8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  2316*/            /*Scope*/ 25, /*->2342*/
/*  2317*/              OPC_CheckType, MVT::i16,
/*  2319*/              OPC_MoveParent,
/*  2320*/              OPC_CheckChild2Same, 2,
/*  2322*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2324*/              OPC_CheckPredicate, 3, // Predicate_store
/*  2326*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2329*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2333*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (adde:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADDC16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  2342*/            0, /*End of Scope*/
/*  2343*/          0, /*End of Scope*/
/*  2344*/        /*Scope*/ 66, /*->2411*/
/*  2345*/          OPC_RecordChild0, // #1 = $rs
/*  2346*/          OPC_MoveChild1,
/*  2347*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  2350*/          OPC_RecordMemRef,
/*  2351*/          OPC_RecordNode, // #2 = 'ld' chained node
/*  2352*/          OPC_CheckFoldableChainNode,
/*  2353*/          OPC_RecordChild1, // #3 = $dst
/*  2354*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  2356*/          OPC_CheckPredicate, 1, // Predicate_load
/*  2358*/          OPC_MoveParent,
/*  2359*/          OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->2385
/*  2362*/            OPC_MoveParent,
/*  2363*/            OPC_CheckChild2Same, 3,
/*  2365*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2367*/            OPC_CheckPredicate, 3, // Predicate_store
/*  2369*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  2372*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  2376*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (adde:{ *:[i8] } GR8:{ *:[i8] }:$rs, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADDC8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  2385*/          /*SwitchType*/ 23, MVT::i16,// ->2410
/*  2387*/            OPC_MoveParent,
/*  2388*/            OPC_CheckChild2Same, 3,
/*  2390*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2392*/            OPC_CheckPredicate, 3, // Predicate_store
/*  2394*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  2397*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  2401*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADDC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (adde:{ *:[i16] } GR16:{ *:[i16] }:$rs, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADDC16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  2410*/          0, // EndSwitchType
/*  2411*/        0, /*End of Scope*/
/*  2412*/      /*SwitchOpcode*/ 25|128,3/*409*/, TARGET_VAL(ISD::OR),// ->2825
/*  2416*/        OPC_Scope, 82|128,2/*338*/, /*->2757*/ // 2 children in Scope
/*  2419*/          OPC_MoveChild0,
/*  2420*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  2423*/          OPC_RecordMemRef,
/*  2424*/          OPC_RecordNode, // #1 = 'ld' chained node
/*  2425*/          OPC_CheckFoldableChainNode,
/*  2426*/          OPC_RecordChild1, // #2 = $dst
/*  2427*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  2429*/          OPC_CheckPredicate, 1, // Predicate_load
/*  2431*/          OPC_MoveParent,
/*  2432*/          OPC_Scope, 9|128,1/*137*/, /*->2572*/ // 2 children in Scope
/*  2435*/            OPC_MoveChild1,
/*  2436*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  2439*/            OPC_RecordMemRef,
/*  2440*/            OPC_RecordNode, // #3 = 'ld' chained node
/*  2441*/            OPC_CheckFoldableChainNode,
/*  2442*/            OPC_RecordChild1, // #4 = $src
/*  2443*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  2445*/            OPC_CheckPredicate, 1, // Predicate_load
/*  2447*/            OPC_MoveParent,
/*  2448*/            OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->2510
/*  2451*/              OPC_MoveParent,
/*  2452*/              OPC_Scope, 27, /*->2481*/ // 2 children in Scope
/*  2454*/                OPC_CheckChild2Same, 2,
/*  2456*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2458*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2460*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  2463*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  2466*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2471*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (or:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (BIS8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2481*/              /*Scope*/ 27, /*->2509*/
/*  2482*/                OPC_CheckChild2Same, 4,
/*  2484*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2486*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2488*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  2491*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  2494*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2499*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (or:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (BIS8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2509*/              0, /*End of Scope*/
/*  2510*/            /*SwitchType*/ 59, MVT::i16,// ->2571
/*  2512*/              OPC_MoveParent,
/*  2513*/              OPC_Scope, 27, /*->2542*/ // 2 children in Scope
/*  2515*/                OPC_CheckChild2Same, 2,
/*  2517*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2519*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2521*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  2524*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  2527*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2532*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (or:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (BIS16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2542*/              /*Scope*/ 27, /*->2570*/
/*  2543*/                OPC_CheckChild2Same, 4,
/*  2545*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2547*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2549*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  2552*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  2555*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2560*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (or:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (BIS16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2570*/              0, /*End of Scope*/
/*  2571*/            0, // EndSwitchType
/*  2572*/          /*Scope*/ 54|128,1/*182*/, /*->2756*/
/*  2574*/            OPC_RecordChild1, // #3 = $imm
/*  2575*/            OPC_Scope, 126, /*->2703*/ // 3 children in Scope
/*  2577*/              OPC_MoveChild1,
/*  2578*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2581*/              OPC_Scope, 30, /*->2613*/ // 3 children in Scope
/*  2583*/                OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  2585*/                OPC_MoveParent,
/*  2586*/                OPC_CheckType, MVT::i8,
/*  2588*/                OPC_MoveParent,
/*  2589*/                OPC_CheckChild2Same, 2,
/*  2591*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2593*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2595*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2598*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2602*/                OPC_EmitConvertToTarget, 3,
/*  2604*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS8mc), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (or:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                          // Dst: (BIS8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  2613*/              /*Scope*/ 30, /*->2644*/
/*  2614*/                OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  2616*/                OPC_MoveParent,
/*  2617*/                OPC_CheckType, MVT::i16,
/*  2619*/                OPC_MoveParent,
/*  2620*/                OPC_CheckChild2Same, 2,
/*  2622*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2624*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2626*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2629*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2633*/                OPC_EmitConvertToTarget, 3,
/*  2635*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS16mc), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (or:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                          // Dst: (BIS16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  2644*/              /*Scope*/ 57, /*->2702*/
/*  2645*/                OPC_MoveParent,
/*  2646*/                OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->2674
/*  2649*/                  OPC_MoveParent,
/*  2650*/                  OPC_CheckChild2Same, 2,
/*  2652*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2654*/                  OPC_CheckPredicate, 3, // Predicate_store
/*  2656*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2659*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2663*/                  OPC_EmitConvertToTarget, 3,
/*  2665*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS8mi), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (or:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (BIS8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  2674*/                /*SwitchType*/ 25, MVT::i16,// ->2701
/*  2676*/                  OPC_MoveParent,
/*  2677*/                  OPC_CheckChild2Same, 2,
/*  2679*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2681*/                  OPC_CheckPredicate, 3, // Predicate_store
/*  2683*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2686*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2690*/                  OPC_EmitConvertToTarget, 3,
/*  2692*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS16mi), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (or:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (BIS16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  2701*/                0, // EndSwitchType
/*  2702*/              0, /*End of Scope*/
/*  2703*/            /*Scope*/ 25, /*->2729*/
/*  2704*/              OPC_CheckType, MVT::i8,
/*  2706*/              OPC_MoveParent,
/*  2707*/              OPC_CheckChild2Same, 2,
/*  2709*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2711*/              OPC_CheckPredicate, 3, // Predicate_store
/*  2713*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2716*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2720*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS8mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (or:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (BIS8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  2729*/            /*Scope*/ 25, /*->2755*/
/*  2730*/              OPC_CheckType, MVT::i16,
/*  2732*/              OPC_MoveParent,
/*  2733*/              OPC_CheckChild2Same, 2,
/*  2735*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2737*/              OPC_CheckPredicate, 3, // Predicate_store
/*  2739*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  2742*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  2746*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS16mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (or:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (BIS16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  2755*/            0, /*End of Scope*/
/*  2756*/          0, /*End of Scope*/
/*  2757*/        /*Scope*/ 66, /*->2824*/
/*  2758*/          OPC_RecordChild0, // #1 = $rs
/*  2759*/          OPC_MoveChild1,
/*  2760*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  2763*/          OPC_RecordMemRef,
/*  2764*/          OPC_RecordNode, // #2 = 'ld' chained node
/*  2765*/          OPC_CheckFoldableChainNode,
/*  2766*/          OPC_RecordChild1, // #3 = $dst
/*  2767*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  2769*/          OPC_CheckPredicate, 1, // Predicate_load
/*  2771*/          OPC_MoveParent,
/*  2772*/          OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->2798
/*  2775*/            OPC_MoveParent,
/*  2776*/            OPC_CheckChild2Same, 3,
/*  2778*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2780*/            OPC_CheckPredicate, 3, // Predicate_store
/*  2782*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  2785*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  2789*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (or:{ *:[i8] } GR8:{ *:[i8] }:$rs, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (BIS8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  2798*/          /*SwitchType*/ 23, MVT::i16,// ->2823
/*  2800*/            OPC_MoveParent,
/*  2801*/            OPC_CheckChild2Same, 3,
/*  2803*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2805*/            OPC_CheckPredicate, 3, // Predicate_store
/*  2807*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  2810*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  2814*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIS16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (or:{ *:[i16] } GR16:{ *:[i16] }:$rs, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (BIS16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  2823*/          0, // EndSwitchType
/*  2824*/        0, /*End of Scope*/
/*  2825*/      /*SwitchOpcode*/ 25|128,3/*409*/, TARGET_VAL(ISD::XOR),// ->3238
/*  2829*/        OPC_Scope, 82|128,2/*338*/, /*->3170*/ // 2 children in Scope
/*  2832*/          OPC_MoveChild0,
/*  2833*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  2836*/          OPC_RecordMemRef,
/*  2837*/          OPC_RecordNode, // #1 = 'ld' chained node
/*  2838*/          OPC_CheckFoldableChainNode,
/*  2839*/          OPC_RecordChild1, // #2 = $dst
/*  2840*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  2842*/          OPC_CheckPredicate, 1, // Predicate_load
/*  2844*/          OPC_MoveParent,
/*  2845*/          OPC_Scope, 9|128,1/*137*/, /*->2985*/ // 2 children in Scope
/*  2848*/            OPC_MoveChild1,
/*  2849*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  2852*/            OPC_RecordMemRef,
/*  2853*/            OPC_RecordNode, // #3 = 'ld' chained node
/*  2854*/            OPC_CheckFoldableChainNode,
/*  2855*/            OPC_RecordChild1, // #4 = $src
/*  2856*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  2858*/            OPC_CheckPredicate, 1, // Predicate_load
/*  2860*/            OPC_MoveParent,
/*  2861*/            OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->2923
/*  2864*/              OPC_MoveParent,
/*  2865*/              OPC_Scope, 27, /*->2894*/ // 2 children in Scope
/*  2867*/                OPC_CheckChild2Same, 2,
/*  2869*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2871*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2873*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  2876*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  2879*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2884*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (XOR8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2894*/              /*Scope*/ 27, /*->2922*/
/*  2895*/                OPC_CheckChild2Same, 4,
/*  2897*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2899*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2901*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  2904*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  2907*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2912*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (XOR8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2922*/              0, /*End of Scope*/
/*  2923*/            /*SwitchType*/ 59, MVT::i16,// ->2984
/*  2925*/              OPC_MoveParent,
/*  2926*/              OPC_Scope, 27, /*->2955*/ // 2 children in Scope
/*  2928*/                OPC_CheckChild2Same, 2,
/*  2930*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2932*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2934*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  2937*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  2940*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2945*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (XOR16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2955*/              /*Scope*/ 27, /*->2983*/
/*  2956*/                OPC_CheckChild2Same, 4,
/*  2958*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  2960*/                OPC_CheckPredicate, 3, // Predicate_store
/*  2962*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  2965*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  2968*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  2973*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (XOR16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  2983*/              0, /*End of Scope*/
/*  2984*/            0, // EndSwitchType
/*  2985*/          /*Scope*/ 54|128,1/*182*/, /*->3169*/
/*  2987*/            OPC_RecordChild1, // #3 = $imm
/*  2988*/            OPC_Scope, 126, /*->3116*/ // 3 children in Scope
/*  2990*/              OPC_MoveChild1,
/*  2991*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2994*/              OPC_Scope, 30, /*->3026*/ // 3 children in Scope
/*  2996*/                OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  2998*/                OPC_MoveParent,
/*  2999*/                OPC_CheckType, MVT::i8,
/*  3001*/                OPC_MoveParent,
/*  3002*/                OPC_CheckChild2Same, 2,
/*  3004*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3006*/                OPC_CheckPredicate, 3, // Predicate_store
/*  3008*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3011*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3015*/                OPC_EmitConvertToTarget, 3,
/*  3017*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mc), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                          // Dst: (XOR8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  3026*/              /*Scope*/ 30, /*->3057*/
/*  3027*/                OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  3029*/                OPC_MoveParent,
/*  3030*/                OPC_CheckType, MVT::i16,
/*  3032*/                OPC_MoveParent,
/*  3033*/                OPC_CheckChild2Same, 2,
/*  3035*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3037*/                OPC_CheckPredicate, 3, // Predicate_store
/*  3039*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3042*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3046*/                OPC_EmitConvertToTarget, 3,
/*  3048*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mc), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                          // Dst: (XOR16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  3057*/              /*Scope*/ 57, /*->3115*/
/*  3058*/                OPC_MoveParent,
/*  3059*/                OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->3087
/*  3062*/                  OPC_MoveParent,
/*  3063*/                  OPC_CheckChild2Same, 2,
/*  3065*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3067*/                  OPC_CheckPredicate, 3, // Predicate_store
/*  3069*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3072*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3076*/                  OPC_EmitConvertToTarget, 3,
/*  3078*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mi), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (XOR8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  3087*/                /*SwitchType*/ 25, MVT::i16,// ->3114
/*  3089*/                  OPC_MoveParent,
/*  3090*/                  OPC_CheckChild2Same, 2,
/*  3092*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3094*/                  OPC_CheckPredicate, 3, // Predicate_store
/*  3096*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3099*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3103*/                  OPC_EmitConvertToTarget, 3,
/*  3105*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mi), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (XOR16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  3114*/                0, // EndSwitchType
/*  3115*/              0, /*End of Scope*/
/*  3116*/            /*Scope*/ 25, /*->3142*/
/*  3117*/              OPC_CheckType, MVT::i8,
/*  3119*/              OPC_MoveParent,
/*  3120*/              OPC_CheckChild2Same, 2,
/*  3122*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3124*/              OPC_CheckPredicate, 3, // Predicate_store
/*  3126*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3129*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3133*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (XOR8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  3142*/            /*Scope*/ 25, /*->3168*/
/*  3143*/              OPC_CheckType, MVT::i16,
/*  3145*/              OPC_MoveParent,
/*  3146*/              OPC_CheckChild2Same, 2,
/*  3148*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3150*/              OPC_CheckPredicate, 3, // Predicate_store
/*  3152*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3155*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3159*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (XOR16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  3168*/            0, /*End of Scope*/
/*  3169*/          0, /*End of Scope*/
/*  3170*/        /*Scope*/ 66, /*->3237*/
/*  3171*/          OPC_RecordChild0, // #1 = $rs
/*  3172*/          OPC_MoveChild1,
/*  3173*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  3176*/          OPC_RecordMemRef,
/*  3177*/          OPC_RecordNode, // #2 = 'ld' chained node
/*  3178*/          OPC_CheckFoldableChainNode,
/*  3179*/          OPC_RecordChild1, // #3 = $dst
/*  3180*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  3182*/          OPC_CheckPredicate, 1, // Predicate_load
/*  3184*/          OPC_MoveParent,
/*  3185*/          OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->3211
/*  3188*/            OPC_MoveParent,
/*  3189*/            OPC_CheckChild2Same, 3,
/*  3191*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3193*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3195*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  3198*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  3202*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (xor:{ *:[i8] } GR8:{ *:[i8] }:$rs, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (XOR8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  3211*/          /*SwitchType*/ 23, MVT::i16,// ->3236
/*  3213*/            OPC_MoveParent,
/*  3214*/            OPC_CheckChild2Same, 3,
/*  3216*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3218*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3220*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  3223*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  3227*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (xor:{ *:[i16] } GR16:{ *:[i16] }:$rs, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (XOR16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  3236*/          0, // EndSwitchType
/*  3237*/        0, /*End of Scope*/
/*  3238*/      /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(ISD::SUB),// ->3517
/*  3242*/        OPC_MoveChild0,
/*  3243*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  3246*/        OPC_RecordMemRef,
/*  3247*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  3248*/        OPC_CheckFoldableChainNode,
/*  3249*/        OPC_RecordChild1, // #2 = $dst
/*  3250*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  3252*/        OPC_CheckPredicate, 1, // Predicate_load
/*  3254*/        OPC_MoveParent,
/*  3255*/        OPC_Scope, 75, /*->3332*/ // 2 children in Scope
/*  3257*/          OPC_MoveChild1,
/*  3258*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  3261*/          OPC_RecordMemRef,
/*  3262*/          OPC_RecordNode, // #3 = 'ld' chained node
/*  3263*/          OPC_CheckFoldableChainNode,
/*  3264*/          OPC_RecordChild1, // #4 = $src
/*  3265*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  3267*/          OPC_CheckPredicate, 1, // Predicate_load
/*  3269*/          OPC_MoveParent,
/*  3270*/          OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->3301
/*  3273*/            OPC_MoveParent,
/*  3274*/            OPC_CheckChild2Same, 2,
/*  3276*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3278*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3280*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  3283*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  3286*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  3291*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (sub:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUB8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  3301*/          /*SwitchType*/ 28, MVT::i16,// ->3331
/*  3303*/            OPC_MoveParent,
/*  3304*/            OPC_CheckChild2Same, 2,
/*  3306*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3308*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3310*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  3313*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  3316*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  3321*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (sub:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUB16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  3331*/          0, // EndSwitchType
/*  3332*/        /*Scope*/ 54|128,1/*182*/, /*->3516*/
/*  3334*/          OPC_RecordChild1, // #3 = $imm
/*  3335*/          OPC_Scope, 126, /*->3463*/ // 3 children in Scope
/*  3337*/            OPC_MoveChild1,
/*  3338*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3341*/            OPC_Scope, 30, /*->3373*/ // 3 children in Scope
/*  3343*/              OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  3345*/              OPC_MoveParent,
/*  3346*/              OPC_CheckType, MVT::i8,
/*  3348*/              OPC_MoveParent,
/*  3349*/              OPC_CheckChild2Same, 2,
/*  3351*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3353*/              OPC_CheckPredicate, 3, // Predicate_store
/*  3355*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3358*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3362*/              OPC_EmitConvertToTarget, 3,
/*  3364*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mc), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (sub:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                        // Dst: (SUB8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  3373*/            /*Scope*/ 30, /*->3404*/
/*  3374*/              OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  3376*/              OPC_MoveParent,
/*  3377*/              OPC_CheckType, MVT::i16,
/*  3379*/              OPC_MoveParent,
/*  3380*/              OPC_CheckChild2Same, 2,
/*  3382*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3384*/              OPC_CheckPredicate, 3, // Predicate_store
/*  3386*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3389*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3393*/              OPC_EmitConvertToTarget, 3,
/*  3395*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mc), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (sub:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                        // Dst: (SUB16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  3404*/            /*Scope*/ 57, /*->3462*/
/*  3405*/              OPC_MoveParent,
/*  3406*/              OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->3434
/*  3409*/                OPC_MoveParent,
/*  3410*/                OPC_CheckChild2Same, 2,
/*  3412*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3414*/                OPC_CheckPredicate, 3, // Predicate_store
/*  3416*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3419*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3423*/                OPC_EmitConvertToTarget, 3,
/*  3425*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (sub:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (SUB8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  3434*/              /*SwitchType*/ 25, MVT::i16,// ->3461
/*  3436*/                OPC_MoveParent,
/*  3437*/                OPC_CheckChild2Same, 2,
/*  3439*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3441*/                OPC_CheckPredicate, 3, // Predicate_store
/*  3443*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3446*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3450*/                OPC_EmitConvertToTarget, 3,
/*  3452*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (sub:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (SUB16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  3461*/              0, // EndSwitchType
/*  3462*/            0, /*End of Scope*/
/*  3463*/          /*Scope*/ 25, /*->3489*/
/*  3464*/            OPC_CheckType, MVT::i8,
/*  3466*/            OPC_MoveParent,
/*  3467*/            OPC_CheckChild2Same, 2,
/*  3469*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3471*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3473*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3476*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3480*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sub:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUB8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  3489*/          /*Scope*/ 25, /*->3515*/
/*  3490*/            OPC_CheckType, MVT::i16,
/*  3492*/            OPC_MoveParent,
/*  3493*/            OPC_CheckChild2Same, 2,
/*  3495*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3497*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3499*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3502*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3506*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sub:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUB16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  3515*/          0, /*End of Scope*/
/*  3516*/        0, /*End of Scope*/
/*  3517*/      /*SwitchOpcode*/ 21|128,2/*277*/, TARGET_VAL(ISD::SUBE),// ->3798
/*  3521*/        OPC_RecordNode, // #1 = 'sube' glue output node
/*  3522*/        OPC_CaptureGlueInput,
/*  3523*/        OPC_MoveChild0,
/*  3524*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  3527*/        OPC_RecordMemRef,
/*  3528*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  3529*/        OPC_CheckFoldableChainNode,
/*  3530*/        OPC_RecordChild1, // #2 = $dst
/*  3531*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  3533*/        OPC_CheckPredicate, 1, // Predicate_load
/*  3535*/        OPC_MoveParent,
/*  3536*/        OPC_Scope, 75, /*->3613*/ // 2 children in Scope
/*  3538*/          OPC_MoveChild1,
/*  3539*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  3542*/          OPC_RecordMemRef,
/*  3543*/          OPC_RecordNode, // #3 = 'ld' chained node
/*  3544*/          OPC_CheckFoldableChainNode,
/*  3545*/          OPC_RecordChild1, // #4 = $src
/*  3546*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  3548*/          OPC_CheckPredicate, 1, // Predicate_load
/*  3550*/          OPC_MoveParent,
/*  3551*/          OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->3582
/*  3554*/            OPC_MoveParent,
/*  3555*/            OPC_CheckChild2Same, 2,
/*  3557*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3559*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3561*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  3564*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  3567*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  3572*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUBC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (sube:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUBC8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  3582*/          /*SwitchType*/ 28, MVT::i16,// ->3612
/*  3584*/            OPC_MoveParent,
/*  3585*/            OPC_CheckChild2Same, 2,
/*  3587*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3589*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3591*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  3594*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  3597*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  3602*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUBC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (sube:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUBC16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  3612*/          0, // EndSwitchType
/*  3613*/        /*Scope*/ 54|128,1/*182*/, /*->3797*/
/*  3615*/          OPC_RecordChild1, // #3 = $imm
/*  3616*/          OPC_Scope, 126, /*->3744*/ // 3 children in Scope
/*  3618*/            OPC_MoveChild1,
/*  3619*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3622*/            OPC_Scope, 30, /*->3654*/ // 3 children in Scope
/*  3624*/              OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  3626*/              OPC_MoveParent,
/*  3627*/              OPC_CheckType, MVT::i8,
/*  3629*/              OPC_MoveParent,
/*  3630*/              OPC_CheckChild2Same, 2,
/*  3632*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3634*/              OPC_CheckPredicate, 3, // Predicate_store
/*  3636*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3639*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3643*/              OPC_EmitConvertToTarget, 3,
/*  3645*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUBC8mc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (sube:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                        // Dst: (SUBC8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  3654*/            /*Scope*/ 30, /*->3685*/
/*  3655*/              OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  3657*/              OPC_MoveParent,
/*  3658*/              OPC_CheckType, MVT::i16,
/*  3660*/              OPC_MoveParent,
/*  3661*/              OPC_CheckChild2Same, 2,
/*  3663*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3665*/              OPC_CheckPredicate, 3, // Predicate_store
/*  3667*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3670*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3674*/              OPC_EmitConvertToTarget, 3,
/*  3676*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUBC16mc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (sube:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                        // Dst: (SUBC16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  3685*/            /*Scope*/ 57, /*->3743*/
/*  3686*/              OPC_MoveParent,
/*  3687*/              OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->3715
/*  3690*/                OPC_MoveParent,
/*  3691*/                OPC_CheckChild2Same, 2,
/*  3693*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3695*/                OPC_CheckPredicate, 3, // Predicate_store
/*  3697*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3700*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3704*/                OPC_EmitConvertToTarget, 3,
/*  3706*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUBC8mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (sube:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (SUBC8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  3715*/              /*SwitchType*/ 25, MVT::i16,// ->3742
/*  3717*/                OPC_MoveParent,
/*  3718*/                OPC_CheckChild2Same, 2,
/*  3720*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3722*/                OPC_CheckPredicate, 3, // Predicate_store
/*  3724*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3727*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3731*/                OPC_EmitConvertToTarget, 3,
/*  3733*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUBC16mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (sube:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (SUBC16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  3742*/              0, // EndSwitchType
/*  3743*/            0, /*End of Scope*/
/*  3744*/          /*Scope*/ 25, /*->3770*/
/*  3745*/            OPC_CheckType, MVT::i8,
/*  3747*/            OPC_MoveParent,
/*  3748*/            OPC_CheckChild2Same, 2,
/*  3750*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3752*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3754*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3757*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3761*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUBC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sube:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUBC8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  3770*/          /*Scope*/ 25, /*->3796*/
/*  3771*/            OPC_CheckType, MVT::i16,
/*  3773*/            OPC_MoveParent,
/*  3774*/            OPC_CheckChild2Same, 2,
/*  3776*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3778*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3780*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3783*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3787*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUBC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sube:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUBC16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  3796*/          0, /*End of Scope*/
/*  3797*/        0, /*End of Scope*/
/*  3798*/      /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(MSP430ISD::DADD),// ->4077
/*  3802*/        OPC_MoveChild0,
/*  3803*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  3806*/        OPC_RecordMemRef,
/*  3807*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  3808*/        OPC_CheckFoldableChainNode,
/*  3809*/        OPC_RecordChild1, // #2 = $dst
/*  3810*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  3812*/        OPC_CheckPredicate, 1, // Predicate_load
/*  3814*/        OPC_MoveParent,
/*  3815*/        OPC_Scope, 75, /*->3892*/ // 2 children in Scope
/*  3817*/          OPC_MoveChild1,
/*  3818*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  3821*/          OPC_RecordMemRef,
/*  3822*/          OPC_RecordNode, // #3 = 'ld' chained node
/*  3823*/          OPC_CheckFoldableChainNode,
/*  3824*/          OPC_RecordChild1, // #4 = $src
/*  3825*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  3827*/          OPC_CheckPredicate, 1, // Predicate_load
/*  3829*/          OPC_MoveParent,
/*  3830*/          OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->3861
/*  3833*/            OPC_MoveParent,
/*  3834*/            OPC_CheckChild2Same, 2,
/*  3836*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3838*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3840*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  3843*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  3846*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  3851*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::DADD8mm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (MSP430dadd:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (DADD8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  3861*/          /*SwitchType*/ 28, MVT::i16,// ->3891
/*  3863*/            OPC_MoveParent,
/*  3864*/            OPC_CheckChild2Same, 2,
/*  3866*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3868*/            OPC_CheckPredicate, 3, // Predicate_store
/*  3870*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  3873*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  3876*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  3881*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::DADD16mm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (MSP430dadd:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (DADD16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  3891*/          0, // EndSwitchType
/*  3892*/        /*Scope*/ 54|128,1/*182*/, /*->4076*/
/*  3894*/          OPC_RecordChild1, // #3 = $imm
/*  3895*/          OPC_Scope, 126, /*->4023*/ // 3 children in Scope
/*  3897*/            OPC_MoveChild1,
/*  3898*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  3901*/            OPC_Scope, 30, /*->3933*/ // 3 children in Scope
/*  3903*/              OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  3905*/              OPC_MoveParent,
/*  3906*/              OPC_CheckType, MVT::i8,
/*  3908*/              OPC_MoveParent,
/*  3909*/              OPC_CheckChild2Same, 2,
/*  3911*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3913*/              OPC_CheckPredicate, 3, // Predicate_store
/*  3915*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3918*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3922*/              OPC_EmitConvertToTarget, 3,
/*  3924*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::DADD8mc), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (MSP430dadd:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                        // Dst: (DADD8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  3933*/            /*Scope*/ 30, /*->3964*/
/*  3934*/              OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  3936*/              OPC_MoveParent,
/*  3937*/              OPC_CheckType, MVT::i16,
/*  3939*/              OPC_MoveParent,
/*  3940*/              OPC_CheckChild2Same, 2,
/*  3942*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3944*/              OPC_CheckPredicate, 3, // Predicate_store
/*  3946*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3949*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3953*/              OPC_EmitConvertToTarget, 3,
/*  3955*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::DADD16mc), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (MSP430dadd:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                        // Dst: (DADD16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  3964*/            /*Scope*/ 57, /*->4022*/
/*  3965*/              OPC_MoveParent,
/*  3966*/              OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->3994
/*  3969*/                OPC_MoveParent,
/*  3970*/                OPC_CheckChild2Same, 2,
/*  3972*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  3974*/                OPC_CheckPredicate, 3, // Predicate_store
/*  3976*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  3979*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  3983*/                OPC_EmitConvertToTarget, 3,
/*  3985*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::DADD8mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (MSP430dadd:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (DADD8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  3994*/              /*SwitchType*/ 25, MVT::i16,// ->4021
/*  3996*/                OPC_MoveParent,
/*  3997*/                OPC_CheckChild2Same, 2,
/*  3999*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4001*/                OPC_CheckPredicate, 3, // Predicate_store
/*  4003*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  4006*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4010*/                OPC_EmitConvertToTarget, 3,
/*  4012*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::DADD16mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (MSP430dadd:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (DADD16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  4021*/              0, // EndSwitchType
/*  4022*/            0, /*End of Scope*/
/*  4023*/          /*Scope*/ 25, /*->4049*/
/*  4024*/            OPC_CheckType, MVT::i8,
/*  4026*/            OPC_MoveParent,
/*  4027*/            OPC_CheckChild2Same, 2,
/*  4029*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4031*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4033*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  4036*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4040*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::DADD8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (MSP430dadd:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (DADD8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  4049*/          /*Scope*/ 25, /*->4075*/
/*  4050*/            OPC_CheckType, MVT::i16,
/*  4052*/            OPC_MoveParent,
/*  4053*/            OPC_CheckChild2Same, 2,
/*  4055*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4057*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4059*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  4062*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4066*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::DADD16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (MSP430dadd:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (DADD16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  4075*/          0, /*End of Scope*/
/*  4076*/        0, /*End of Scope*/
/*  4077*/      /*SwitchOpcode*/ 24|128,2/*280*/, TARGET_VAL(ISD::ADDC),// ->4361
/*  4081*/        OPC_RecordNode, // #1 = 'addc' glue output node
/*  4082*/        OPC_Scope, 80|128,1/*208*/, /*->4293*/ // 2 children in Scope
/*  4085*/          OPC_MoveChild0,
/*  4086*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4089*/          OPC_RecordMemRef,
/*  4090*/          OPC_RecordNode, // #1 = 'ld' chained node
/*  4091*/          OPC_CheckFoldableChainNode,
/*  4092*/          OPC_RecordChild1, // #2 = $dst
/*  4093*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4095*/          OPC_CheckPredicate, 1, // Predicate_load
/*  4097*/          OPC_MoveParent,
/*  4098*/          OPC_Scope, 9|128,1/*137*/, /*->4238*/ // 2 children in Scope
/*  4101*/            OPC_MoveChild1,
/*  4102*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4105*/            OPC_RecordMemRef,
/*  4106*/            OPC_RecordNode, // #3 = 'ld' chained node
/*  4107*/            OPC_CheckFoldableChainNode,
/*  4108*/            OPC_RecordChild1, // #4 = $src
/*  4109*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4111*/            OPC_CheckPredicate, 1, // Predicate_load
/*  4113*/            OPC_MoveParent,
/*  4114*/            OPC_SwitchType /*2 cases */, 59, MVT::i16,// ->4176
/*  4117*/              OPC_MoveParent,
/*  4118*/              OPC_Scope, 27, /*->4147*/ // 2 children in Scope
/*  4120*/                OPC_CheckChild2Same, 2,
/*  4122*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4124*/                OPC_CheckPredicate, 3, // Predicate_store
/*  4126*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  4129*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  4132*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  4137*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (addc:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  4147*/              /*Scope*/ 27, /*->4175*/
/*  4148*/                OPC_CheckChild2Same, 4,
/*  4150*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4152*/                OPC_CheckPredicate, 3, // Predicate_store
/*  4154*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  4157*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  4160*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  4165*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (addc:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  4175*/              0, /*End of Scope*/
/*  4176*/            /*SwitchType*/ 59, MVT::i8,// ->4237
/*  4178*/              OPC_MoveParent,
/*  4179*/              OPC_Scope, 27, /*->4208*/ // 2 children in Scope
/*  4181*/                OPC_CheckChild2Same, 2,
/*  4183*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4185*/                OPC_CheckPredicate, 3, // Predicate_store
/*  4187*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  4190*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  4193*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  4198*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (addc:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  4208*/              /*Scope*/ 27, /*->4236*/
/*  4209*/                OPC_CheckChild2Same, 4,
/*  4211*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4213*/                OPC_CheckPredicate, 3, // Predicate_store
/*  4215*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*  4218*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*  4221*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  4226*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (addc:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  4236*/              0, /*End of Scope*/
/*  4237*/            0, // EndSwitchType
/*  4238*/          /*Scope*/ 53, /*->4292*/
/*  4239*/            OPC_RecordChild1, // #3 = $src
/*  4240*/            OPC_SwitchType /*2 cases */, 23, MVT::i16,// ->4266
/*  4243*/              OPC_MoveParent,
/*  4244*/              OPC_CheckChild2Same, 2,
/*  4246*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4248*/              OPC_CheckPredicate, 3, // Predicate_store
/*  4250*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  4253*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4257*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (addc:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$src), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADD16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$src)
/*  4266*/            /*SwitchType*/ 23, MVT::i8,// ->4291
/*  4268*/              OPC_MoveParent,
/*  4269*/              OPC_CheckChild2Same, 2,
/*  4271*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4273*/              OPC_CheckPredicate, 3, // Predicate_store
/*  4275*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  4278*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4282*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (addc:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$src), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADD8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$src)
/*  4291*/            0, // EndSwitchType
/*  4292*/          0, /*End of Scope*/
/*  4293*/        /*Scope*/ 66, /*->4360*/
/*  4294*/          OPC_RecordChild0, // #1 = $src
/*  4295*/          OPC_MoveChild1,
/*  4296*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4299*/          OPC_RecordMemRef,
/*  4300*/          OPC_RecordNode, // #2 = 'ld' chained node
/*  4301*/          OPC_CheckFoldableChainNode,
/*  4302*/          OPC_RecordChild1, // #3 = $dst
/*  4303*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4305*/          OPC_CheckPredicate, 1, // Predicate_load
/*  4307*/          OPC_MoveParent,
/*  4308*/          OPC_SwitchType /*2 cases */, 23, MVT::i16,// ->4334
/*  4311*/            OPC_MoveParent,
/*  4312*/            OPC_CheckChild2Same, 3,
/*  4314*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4316*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4318*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  4321*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  4325*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (addc:{ *:[i16] } GR16:{ *:[i16] }:$src, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$src)
/*  4334*/          /*SwitchType*/ 23, MVT::i8,// ->4359
/*  4336*/            OPC_MoveParent,
/*  4337*/            OPC_CheckChild2Same, 3,
/*  4339*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4341*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4343*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*  4346*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  4350*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (addc:{ *:[i8] } GR8:{ *:[i8] }:$src, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$src)
/*  4359*/          0, // EndSwitchType
/*  4360*/        0, /*End of Scope*/
/*  4361*/      /*SwitchOpcode*/ 18|128,1/*146*/, TARGET_VAL(ISD::SUBC),// ->4511
/*  4365*/        OPC_RecordNode, // #1 = 'subc' glue output node
/*  4366*/        OPC_MoveChild0,
/*  4367*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4370*/        OPC_RecordMemRef,
/*  4371*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  4372*/        OPC_CheckFoldableChainNode,
/*  4373*/        OPC_RecordChild1, // #2 = $dst
/*  4374*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4376*/        OPC_CheckPredicate, 1, // Predicate_load
/*  4378*/        OPC_MoveParent,
/*  4379*/        OPC_Scope, 75, /*->4456*/ // 2 children in Scope
/*  4381*/          OPC_MoveChild1,
/*  4382*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4385*/          OPC_RecordMemRef,
/*  4386*/          OPC_RecordNode, // #3 = 'ld' chained node
/*  4387*/          OPC_CheckFoldableChainNode,
/*  4388*/          OPC_RecordChild1, // #4 = $src
/*  4389*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4391*/          OPC_CheckPredicate, 1, // Predicate_load
/*  4393*/          OPC_MoveParent,
/*  4394*/          OPC_SwitchType /*2 cases */, 28, MVT::i16,// ->4425
/*  4397*/            OPC_MoveParent,
/*  4398*/            OPC_CheckChild2Same, 2,
/*  4400*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4402*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4404*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  4407*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  4410*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  4415*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (subc:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUB16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  4425*/          /*SwitchType*/ 28, MVT::i8,// ->4455
/*  4427*/            OPC_MoveParent,
/*  4428*/            OPC_CheckChild2Same, 2,
/*  4430*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4432*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4434*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*  4437*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*  4440*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*  4445*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (subc:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUB8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  4455*/          0, // EndSwitchType
/*  4456*/        /*Scope*/ 53, /*->4510*/
/*  4457*/          OPC_RecordChild1, // #3 = $src
/*  4458*/          OPC_SwitchType /*2 cases */, 23, MVT::i16,// ->4484
/*  4461*/            OPC_MoveParent,
/*  4462*/            OPC_CheckChild2Same, 2,
/*  4464*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4466*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4468*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  4471*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4475*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (subc:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$src), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUB16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$src)
/*  4484*/          /*SwitchType*/ 23, MVT::i8,// ->4509
/*  4486*/            OPC_MoveParent,
/*  4487*/            OPC_CheckChild2Same, 2,
/*  4489*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4491*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4493*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*  4496*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4500*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (subc:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$src), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUB8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$src)
/*  4509*/          0, // EndSwitchType
/*  4510*/        0, /*End of Scope*/
/*  4511*/      /*SwitchOpcode*/ 63, TARGET_VAL(MSP430ISD::RRA),// ->4577
/*  4514*/        OPC_MoveChild0,
/*  4515*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4518*/        OPC_RecordMemRef,
/*  4519*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  4520*/        OPC_CheckFoldableChainNode,
/*  4521*/        OPC_RecordChild1, // #2 = $src
/*  4522*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4524*/        OPC_CheckPredicate, 1, // Predicate_load
/*  4526*/        OPC_MoveParent,
/*  4527*/        OPC_SwitchType /*2 cases */, 22, MVT::i8,// ->4552
/*  4530*/          OPC_MoveParent,
/*  4531*/          OPC_CheckChild2Same, 2,
/*  4533*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4535*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4537*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  4540*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4544*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::RRA8m), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i16, 2/*#Ops*/, 3, 4, 
                    // Src: (st (MSP430rra:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (RRA8m:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  4552*/        /*SwitchType*/ 22, MVT::i16,// ->4576
/*  4554*/          OPC_MoveParent,
/*  4555*/          OPC_CheckChild2Same, 2,
/*  4557*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4559*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4561*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  4564*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4568*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::RRA16m), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i16, 2/*#Ops*/, 3, 4, 
                    // Src: (st (MSP430rra:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (RRA16m:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  4576*/        0, // EndSwitchType
/*  4577*/      /*SwitchOpcode*/ 63, TARGET_VAL(MSP430ISD::RRC),// ->4643
/*  4580*/        OPC_MoveChild0,
/*  4581*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4584*/        OPC_RecordMemRef,
/*  4585*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  4586*/        OPC_CheckFoldableChainNode,
/*  4587*/        OPC_RecordChild1, // #2 = $src
/*  4588*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4590*/        OPC_CheckPredicate, 1, // Predicate_load
/*  4592*/        OPC_MoveParent,
/*  4593*/        OPC_SwitchType /*2 cases */, 22, MVT::i8,// ->4618
/*  4596*/          OPC_MoveParent,
/*  4597*/          OPC_CheckChild2Same, 2,
/*  4599*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4601*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4603*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  4606*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4610*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::RRC8m), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i16, 2/*#Ops*/, 3, 4, 
                    // Src: (st (MSP430rrc:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (RRC8m:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  4618*/        /*SwitchType*/ 22, MVT::i16,// ->4642
/*  4620*/          OPC_MoveParent,
/*  4621*/          OPC_CheckChild2Same, 2,
/*  4623*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4625*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4627*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  4630*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4634*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::RRC16m), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i16, 2/*#Ops*/, 3, 4, 
                    // Src: (st (MSP430rrc:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (RRC16m:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  4642*/        0, // EndSwitchType
/*  4643*/      /*SwitchOpcode*/ 41, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4687
/*  4646*/        OPC_MoveChild0,
/*  4647*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4650*/        OPC_RecordMemRef,
/*  4651*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  4652*/        OPC_CheckFoldableChainNode,
/*  4653*/        OPC_RecordChild1, // #2 = $src
/*  4654*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4656*/        OPC_CheckPredicate, 6, // Predicate_extload
/*  4658*/        OPC_CheckPredicate, 7, // Predicate_extloadi8
/*  4660*/        OPC_MoveParent,
/*  4661*/        OPC_MoveChild1,
/*  4662*/        OPC_CheckValueType, MVT::i8,
/*  4664*/        OPC_MoveParent,
/*  4665*/        OPC_MoveParent,
/*  4666*/        OPC_CheckChild2Same, 2,
/*  4668*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4670*/        OPC_CheckPredicate, 3, // Predicate_store
/*  4672*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  4675*/        OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4679*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::SEXT16m), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, 2/*#Ops*/, 3, 4, 
                  // Src: (st (sext_inreg:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, i8:{ *:[Other] }), addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                  // Dst: (SEXT16m:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  4687*/      /*SwitchOpcode*/ 36, TARGET_VAL(ISD::BSWAP),// ->4726
/*  4690*/        OPC_MoveChild0,
/*  4691*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  4694*/        OPC_RecordMemRef,
/*  4695*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  4696*/        OPC_CheckFoldableChainNode,
/*  4697*/        OPC_RecordChild1, // #2 = $src
/*  4698*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4700*/        OPC_CheckPredicate, 1, // Predicate_load
/*  4702*/        OPC_MoveParent,
/*  4703*/        OPC_CheckType, MVT::i16,
/*  4705*/        OPC_MoveParent,
/*  4706*/        OPC_CheckChild2Same, 2,
/*  4708*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4710*/        OPC_CheckPredicate, 3, // Predicate_store
/*  4712*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  4715*/        OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4719*/        OPC_MorphNodeTo0, TARGET_VAL(MSP430::SWPB16m), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 3, 4, 
                  // Src: (st (bswap:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                  // Dst: (SWPB16m addr:{ *:[i16] }:$src)
/*  4726*/      /*SwitchOpcode*/ 64, TARGET_VAL(ISD::LOAD),// ->4793
/*  4729*/        OPC_RecordMemRef,
/*  4730*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  4731*/        OPC_CheckFoldableChainNode,
/*  4732*/        OPC_RecordChild1, // #2 = $src
/*  4733*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  4735*/        OPC_CheckPredicate, 1, // Predicate_load
/*  4737*/        OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->4765
/*  4740*/          OPC_MoveParent,
/*  4741*/          OPC_RecordChild2, // #3 = $dst
/*  4742*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4744*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4746*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #4 #5
/*  4749*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*  4752*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4756*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV8mm), 0|OPFL_Chain|OPFL_MemRefs,
                        4/*#Ops*/, 6, 7, 4, 5, 
                    // Src: (st (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 26
                    // Dst: (MOV8mm addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  4765*/        /*SwitchType*/ 25, MVT::i16,// ->4792
/*  4767*/          OPC_MoveParent,
/*  4768*/          OPC_RecordChild2, // #3 = $dst
/*  4769*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4771*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4773*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #4 #5
/*  4776*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*  4779*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*  4783*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mm), 0|OPFL_Chain|OPFL_MemRefs,
                        4/*#Ops*/, 6, 7, 4, 5, 
                    // Src: (st (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 26
                    // Dst: (MOV16mm addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  4792*/        0, // EndSwitchType
/*  4793*/      /*SwitchOpcode*/ 76, TARGET_VAL(MSP430ISD::Wrapper),// ->4872
/*  4796*/        OPC_RecordChild0, // #1 = $src
/*  4797*/        OPC_MoveChild0,
/*  4798*/        OPC_SwitchOpcode /*3 cases */, 21, TARGET_VAL(ISD::TargetGlobalAddress),// ->4823
/*  4802*/          OPC_MoveParent,
/*  4803*/          OPC_CheckType, MVT::i16,
/*  4805*/          OPC_MoveParent,
/*  4806*/          OPC_RecordChild2, // #2 = $dst
/*  4807*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4809*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4811*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  4814*/          OPC_EmitMergeInputChains1_0,
/*  4815*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st (MSP430Wrapper:{ *:[i16] } (tglobaladdr:{ *:[i16] }):$src), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                    // Dst: (MOV16mi addr:{ *:[i16] }:$dst, (tglobaladdr:{ *:[i16] }):$src)
/*  4823*/        /*SwitchOpcode*/ 21, TARGET_VAL(ISD::TargetExternalSymbol),// ->4847
/*  4826*/          OPC_MoveParent,
/*  4827*/          OPC_CheckType, MVT::i16,
/*  4829*/          OPC_MoveParent,
/*  4830*/          OPC_RecordChild2, // #2 = $dst
/*  4831*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4833*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4835*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  4838*/          OPC_EmitMergeInputChains1_0,
/*  4839*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st (MSP430Wrapper:{ *:[i16] } (texternalsym:{ *:[i16] }):$src), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                    // Dst: (MOV16mi addr:{ *:[i16] }:$dst, (texternalsym:{ *:[i16] }):$src)
/*  4847*/        /*SwitchOpcode*/ 21, TARGET_VAL(ISD::TargetBlockAddress),// ->4871
/*  4850*/          OPC_MoveParent,
/*  4851*/          OPC_CheckType, MVT::i16,
/*  4853*/          OPC_MoveParent,
/*  4854*/          OPC_RecordChild2, // #2 = $dst
/*  4855*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4857*/          OPC_CheckPredicate, 3, // Predicate_store
/*  4859*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  4862*/          OPC_EmitMergeInputChains1_0,
/*  4863*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st (MSP430Wrapper:{ *:[i16] } (tblockaddress:{ *:[i16] }):$src), addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                    // Dst: (MOV16mi addr:{ *:[i16] }:$dst, (tblockaddress:{ *:[i16] }):$src)
/*  4871*/        0, // EndSwitchOpcode
/*  4872*/      0, // EndSwitchOpcode
/*  4873*/    /*Scope*/ 18|128,1/*146*/, /*->5021*/
/*  4875*/      OPC_RecordChild1, // #1 = $imm
/*  4876*/      OPC_Scope, 102, /*->4980*/ // 3 children in Scope
/*  4878*/        OPC_MoveChild1,
/*  4879*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  4882*/        OPC_SwitchType /*2 cases */, 46, MVT::i8,// ->4931
/*  4885*/          OPC_Scope, 22, /*->4909*/ // 2 children in Scope
/*  4887*/            OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  4889*/            OPC_MoveParent,
/*  4890*/            OPC_RecordChild2, // #2 = $dst
/*  4891*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4893*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4895*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  4898*/            OPC_EmitMergeInputChains1_0,
/*  4899*/            OPC_EmitConvertToTarget, 1,
/*  4901*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV8mc), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 5, 
                      // Src: (st (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm, addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                      // Dst: (MOV8mc addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  4909*/          /*Scope*/ 20, /*->4930*/
/*  4910*/            OPC_MoveParent,
/*  4911*/            OPC_RecordChild2, // #2 = $dst
/*  4912*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4914*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4916*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  4919*/            OPC_EmitMergeInputChains1_0,
/*  4920*/            OPC_EmitConvertToTarget, 1,
/*  4922*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV8mi), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 5, 
                      // Src: (st (imm:{ *:[i8] }):$imm, addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                      // Dst: (MOV8mi addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  4930*/          0, /*End of Scope*/
/*  4931*/        /*SwitchType*/ 46, MVT::i16,// ->4979
/*  4933*/          OPC_Scope, 22, /*->4957*/ // 2 children in Scope
/*  4935*/            OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  4937*/            OPC_MoveParent,
/*  4938*/            OPC_RecordChild2, // #2 = $dst
/*  4939*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4941*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4943*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  4946*/            OPC_EmitMergeInputChains1_0,
/*  4947*/            OPC_EmitConvertToTarget, 1,
/*  4949*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mc), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 5, 
                      // Src: (st (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm, addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                      // Dst: (MOV16mc addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  4957*/          /*Scope*/ 20, /*->4978*/
/*  4958*/            OPC_MoveParent,
/*  4959*/            OPC_RecordChild2, // #2 = $dst
/*  4960*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4962*/            OPC_CheckPredicate, 3, // Predicate_store
/*  4964*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  4967*/            OPC_EmitMergeInputChains1_0,
/*  4968*/            OPC_EmitConvertToTarget, 1,
/*  4970*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 3, 4, 5, 
                      // Src: (st (imm:{ *:[i16] }):$imm, addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                      // Dst: (MOV16mi addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  4978*/          0, /*End of Scope*/
/*  4979*/        0, // EndSwitchType
/*  4980*/      /*Scope*/ 19, /*->5000*/
/*  4981*/        OPC_CheckChild1Type, MVT::i8,
/*  4983*/        OPC_RecordChild2, // #2 = $dst
/*  4984*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  4986*/        OPC_CheckPredicate, 3, // Predicate_store
/*  4988*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  4991*/        OPC_EmitMergeInputChains1_0,
/*  4992*/        OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV8mr), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 1, 
                  // Src: (st GR8:{ *:[i8] }:$rs, addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (MOV8mr addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  5000*/      /*Scope*/ 19, /*->5020*/
/*  5001*/        OPC_CheckChild1Type, MVT::i16,
/*  5003*/        OPC_RecordChild2, // #2 = $dst
/*  5004*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*  5006*/        OPC_CheckPredicate, 3, // Predicate_store
/*  5008*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*  5011*/        OPC_EmitMergeInputChains1_0,
/*  5012*/        OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mr), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 1, 
                  // Src: (st GR16:{ *:[i16] }:$rs, addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (MOV16mr addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  5020*/      0, /*End of Scope*/
/*  5021*/    0, /*End of Scope*/
/*  5022*/  /*SwitchOpcode*/ 108|128,6/*876*/, TARGET_VAL(MSP430ISD::CMP),// ->5902
/*  5026*/    OPC_Scope, 106|128,3/*490*/, /*->5519*/ // 4 children in Scope
/*  5029*/      OPC_MoveChild0,
/*  5030*/      OPC_SwitchOpcode /*2 cases */, 47|128,2/*303*/, TARGET_VAL(ISD::AND),// ->5338
/*  5035*/        OPC_Scope, 61|128,1/*189*/, /*->5227*/ // 3 children in Scope
/*  5038*/          OPC_MoveChild0,
/*  5039*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5042*/          OPC_RecordMemRef,
/*  5043*/          OPC_RecordNode, // #0 = 'ld' chained node
/*  5044*/          OPC_CheckFoldableChainNode,
/*  5045*/          OPC_RecordChild1, // #1 = $dst
/*  5046*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5048*/          OPC_CheckPredicate, 1, // Predicate_load
/*  5050*/          OPC_MoveParent,
/*  5051*/          OPC_Scope, 67, /*->5120*/ // 2 children in Scope
/*  5053*/            OPC_MoveChild1,
/*  5054*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5057*/            OPC_RecordMemRef,
/*  5058*/            OPC_RecordNode, // #2 = 'ld' chained node
/*  5059*/            OPC_CheckFoldableChainNode,
/*  5060*/            OPC_RecordChild1, // #3 = $src
/*  5061*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5063*/            OPC_CheckPredicate, 1, // Predicate_load
/*  5065*/            OPC_MoveParent,
/*  5066*/            OPC_CheckPredicate, 8, // Predicate_and_su
/*  5068*/            OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->5094
/*  5071*/              OPC_MoveParent,
/*  5072*/              OPC_CheckChild1Integer, 0, 
/*  5074*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #4 #5
/*  5077*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src #6 #7
/*  5080*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  5084*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 4/*#Ops*/, 4, 5, 6, 7, 
                        // Src: (MSP430cmp (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:{ *:[i8] }) - Complexity = 38
                        // Dst: (BIT8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  5094*/            /*SwitchType*/ 23, MVT::i16,// ->5119
/*  5096*/              OPC_MoveParent,
/*  5097*/              OPC_CheckChild1Integer, 0, 
/*  5099*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #4 #5
/*  5102*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src #6 #7
/*  5105*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*  5109*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 4/*#Ops*/, 4, 5, 6, 7, 
                        // Src: (MSP430cmp (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:{ *:[i16] }) - Complexity = 38
                        // Dst: (BIT16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  5119*/            0, // EndSwitchType
/*  5120*/          /*Scope*/ 105, /*->5226*/
/*  5121*/            OPC_RecordChild1, // #2 = $imm
/*  5122*/            OPC_MoveChild1,
/*  5123*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  5126*/            OPC_Scope, 25, /*->5153*/ // 3 children in Scope
/*  5128*/              OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  5130*/              OPC_MoveParent,
/*  5131*/              OPC_CheckPredicate, 8, // Predicate_and_su
/*  5133*/              OPC_CheckType, MVT::i8,
/*  5135*/              OPC_MoveParent,
/*  5136*/              OPC_CheckChild1Integer, 0, 
/*  5138*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5141*/              OPC_EmitMergeInputChains1_0,
/*  5142*/              OPC_EmitConvertToTarget, 2,
/*  5144*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8mc), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                        // Src: (MSP430cmp (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm)<<P:Predicate_and_su>>, 0:{ *:[i8] }) - Complexity = 29
                        // Dst: (BIT8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  5153*/            /*Scope*/ 25, /*->5179*/
/*  5154*/              OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  5156*/              OPC_MoveParent,
/*  5157*/              OPC_CheckPredicate, 8, // Predicate_and_su
/*  5159*/              OPC_CheckType, MVT::i16,
/*  5161*/              OPC_MoveParent,
/*  5162*/              OPC_CheckChild1Integer, 0, 
/*  5164*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5167*/              OPC_EmitMergeInputChains1_0,
/*  5168*/              OPC_EmitConvertToTarget, 2,
/*  5170*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16mc), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                        // Src: (MSP430cmp (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm)<<P:Predicate_and_su>>, 0:{ *:[i16] }) - Complexity = 29
                        // Dst: (BIT16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  5179*/            /*Scope*/ 45, /*->5225*/
/*  5180*/              OPC_MoveParent,
/*  5181*/              OPC_CheckPredicate, 8, // Predicate_and_su
/*  5183*/              OPC_SwitchType /*2 cases */, 18, MVT::i8,// ->5204
/*  5186*/                OPC_MoveParent,
/*  5187*/                OPC_CheckChild1Integer, 0, 
/*  5189*/                OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5192*/                OPC_EmitMergeInputChains1_0,
/*  5193*/                OPC_EmitConvertToTarget, 2,
/*  5195*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                          // Src: (MSP430cmp (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm)<<P:Predicate_and_su>>, 0:{ *:[i8] }) - Complexity = 28
                          // Dst: (BIT8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  5204*/              /*SwitchType*/ 18, MVT::i16,// ->5224
/*  5206*/                OPC_MoveParent,
/*  5207*/                OPC_CheckChild1Integer, 0, 
/*  5209*/                OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5212*/                OPC_EmitMergeInputChains1_0,
/*  5213*/                OPC_EmitConvertToTarget, 2,
/*  5215*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                          // Src: (MSP430cmp (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm)<<P:Predicate_and_su>>, 0:{ *:[i16] }) - Complexity = 28
                          // Dst: (BIT16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  5224*/              0, // EndSwitchType
/*  5225*/            0, /*End of Scope*/
/*  5226*/          0, /*End of Scope*/
/*  5227*/        /*Scope*/ 54, /*->5282*/
/*  5228*/          OPC_RecordChild0, // #0 = $rd
/*  5229*/          OPC_MoveChild1,
/*  5230*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5233*/          OPC_RecordMemRef,
/*  5234*/          OPC_RecordNode, // #1 = 'ld' chained node
/*  5235*/          OPC_CheckFoldableChainNode,
/*  5236*/          OPC_RecordChild1, // #2 = $src
/*  5237*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5239*/          OPC_CheckPredicate, 1, // Predicate_load
/*  5241*/          OPC_MoveParent,
/*  5242*/          OPC_CheckPredicate, 8, // Predicate_and_su
/*  5244*/          OPC_SwitchType /*2 cases */, 16, MVT::i8,// ->5263
/*  5247*/            OPC_MoveParent,
/*  5248*/            OPC_CheckChild1Integer, 0, 
/*  5250*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  5253*/            OPC_EmitMergeInputChains1_1,
/*  5254*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                      // Src: (MSP430cmp (and:{ *:[i8] } GR8:{ *:[i8] }:$rd, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:{ *:[i8] }) - Complexity = 25
                      // Dst: (BIT8rm:{ *:[i16] } GR8:{ *:[i8] }:$rd, addr:{ *:[i16] }:$src)
/*  5263*/          /*SwitchType*/ 16, MVT::i16,// ->5281
/*  5265*/            OPC_MoveParent,
/*  5266*/            OPC_CheckChild1Integer, 0, 
/*  5268*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  5271*/            OPC_EmitMergeInputChains1_1,
/*  5272*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                      // Src: (MSP430cmp (and:{ *:[i16] } GR16:{ *:[i16] }:$rd, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:{ *:[i16] }) - Complexity = 25
                      // Dst: (BIT16rm:{ *:[i16] } GR16:{ *:[i16] }:$rd, addr:{ *:[i16] }:$src)
/*  5281*/          0, // EndSwitchType
/*  5282*/        /*Scope*/ 54, /*->5337*/
/*  5283*/          OPC_MoveChild0,
/*  5284*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5287*/          OPC_RecordMemRef,
/*  5288*/          OPC_RecordNode, // #0 = 'ld' chained node
/*  5289*/          OPC_CheckFoldableChainNode,
/*  5290*/          OPC_RecordChild1, // #1 = $dst
/*  5291*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5293*/          OPC_CheckPredicate, 1, // Predicate_load
/*  5295*/          OPC_MoveParent,
/*  5296*/          OPC_RecordChild1, // #2 = $rs
/*  5297*/          OPC_CheckPredicate, 8, // Predicate_and_su
/*  5299*/          OPC_SwitchType /*2 cases */, 16, MVT::i8,// ->5318
/*  5302*/            OPC_MoveParent,
/*  5303*/            OPC_CheckChild1Integer, 0, 
/*  5305*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5308*/            OPC_EmitMergeInputChains1_0,
/*  5309*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                      // Src: (MSP430cmp (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs)<<P:Predicate_and_su>>, 0:{ *:[i8] }) - Complexity = 25
                      // Dst: (BIT8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  5318*/          /*SwitchType*/ 16, MVT::i16,// ->5336
/*  5320*/            OPC_MoveParent,
/*  5321*/            OPC_CheckChild1Integer, 0, 
/*  5323*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5326*/            OPC_EmitMergeInputChains1_0,
/*  5327*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                      // Src: (MSP430cmp (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs)<<P:Predicate_and_su>>, 0:{ *:[i16] }) - Complexity = 25
                      // Dst: (BIT16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  5336*/          0, // EndSwitchType
/*  5337*/        0, /*End of Scope*/
/*  5338*/      /*SwitchOpcode*/ 48|128,1/*176*/, TARGET_VAL(ISD::LOAD),// ->5518
/*  5342*/        OPC_RecordMemRef,
/*  5343*/        OPC_RecordNode, // #0 = 'ld' chained node
/*  5344*/        OPC_CheckFoldableChainNode,
/*  5345*/        OPC_RecordChild1, // #1 = $dst
/*  5346*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5348*/        OPC_CheckPredicate, 1, // Predicate_load
/*  5350*/        OPC_SwitchType /*2 cases */, 81, MVT::i8,// ->5434
/*  5353*/          OPC_MoveParent,
/*  5354*/          OPC_Scope, 33, /*->5389*/ // 2 children in Scope
/*  5356*/            OPC_MoveChild1,
/*  5357*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5360*/            OPC_RecordMemRef,
/*  5361*/            OPC_RecordNode, // #2 = 'ld' chained node
/*  5362*/            OPC_CheckFoldableChainNode,
/*  5363*/            OPC_RecordChild1, // #3 = $src
/*  5364*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5366*/            OPC_CheckPredicate, 1, // Predicate_load
/*  5368*/            OPC_MoveParent,
/*  5369*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #4 #5
/*  5372*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src #6 #7
/*  5375*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  5379*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 4, 5, 6, 7, 
                      // Src: (MSP430cmp (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 29
                      // Dst: (CMP8mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  5389*/          /*Scope*/ 43, /*->5433*/
/*  5390*/            OPC_RecordChild1, // #2 = $imm
/*  5391*/            OPC_MoveChild1,
/*  5392*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  5395*/            OPC_Scope, 18, /*->5415*/ // 2 children in Scope
/*  5397*/              OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  5399*/              OPC_MoveParent,
/*  5400*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5403*/              OPC_EmitMergeInputChains1_0,
/*  5404*/              OPC_EmitConvertToTarget, 2,
/*  5406*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8mc), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                        // Src: (MSP430cmp (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 20
                        // Dst: (CMP8mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  5415*/            /*Scope*/ 16, /*->5432*/
/*  5416*/              OPC_MoveParent,
/*  5417*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5420*/              OPC_EmitMergeInputChains1_0,
/*  5421*/              OPC_EmitConvertToTarget, 2,
/*  5423*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                        // Src: (MSP430cmp (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i8] }):$imm) - Complexity = 19
                        // Dst: (CMP8mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i8] }):$imm)
/*  5432*/            0, /*End of Scope*/
/*  5433*/          0, /*End of Scope*/
/*  5434*/        /*SwitchType*/ 81, MVT::i16,// ->5517
/*  5436*/          OPC_MoveParent,
/*  5437*/          OPC_Scope, 33, /*->5472*/ // 2 children in Scope
/*  5439*/            OPC_MoveChild1,
/*  5440*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5443*/            OPC_RecordMemRef,
/*  5444*/            OPC_RecordNode, // #2 = 'ld' chained node
/*  5445*/            OPC_CheckFoldableChainNode,
/*  5446*/            OPC_RecordChild1, // #3 = $src
/*  5447*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5449*/            OPC_CheckPredicate, 1, // Predicate_load
/*  5451*/            OPC_MoveParent,
/*  5452*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #4 #5
/*  5455*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src #6 #7
/*  5458*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*  5462*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 4, 5, 6, 7, 
                      // Src: (MSP430cmp (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 29
                      // Dst: (CMP16mm:{ *:[i16] } addr:{ *:[i16] }:$dst, addr:{ *:[i16] }:$src)
/*  5472*/          /*Scope*/ 43, /*->5516*/
/*  5473*/            OPC_RecordChild1, // #2 = $imm
/*  5474*/            OPC_MoveChild1,
/*  5475*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  5478*/            OPC_Scope, 18, /*->5498*/ // 2 children in Scope
/*  5480*/              OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  5482*/              OPC_MoveParent,
/*  5483*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5486*/              OPC_EmitMergeInputChains1_0,
/*  5487*/              OPC_EmitConvertToTarget, 2,
/*  5489*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16mc), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                        // Src: (MSP430cmp (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 20
                        // Dst: (CMP16mc:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  5498*/            /*Scope*/ 16, /*->5515*/
/*  5499*/              OPC_MoveParent,
/*  5500*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5503*/              OPC_EmitMergeInputChains1_0,
/*  5504*/              OPC_EmitConvertToTarget, 2,
/*  5506*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                        // Src: (MSP430cmp (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:{ *:[i16] }):$imm) - Complexity = 19
                        // Dst: (CMP16mi:{ *:[i16] } addr:{ *:[i16] }:$dst, (imm:{ *:[i16] }):$imm)
/*  5515*/            0, /*End of Scope*/
/*  5516*/          0, /*End of Scope*/
/*  5517*/        0, // EndSwitchType
/*  5518*/      0, // EndSwitchOpcode
/*  5519*/    /*Scope*/ 61, /*->5581*/
/*  5520*/      OPC_RecordChild0, // #0 = $rd
/*  5521*/      OPC_Scope, 28, /*->5551*/ // 2 children in Scope
/*  5523*/        OPC_CheckChild0Type, MVT::i8,
/*  5525*/        OPC_MoveChild1,
/*  5526*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5529*/        OPC_RecordMemRef,
/*  5530*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  5531*/        OPC_CheckFoldableChainNode,
/*  5532*/        OPC_RecordChild1, // #2 = $src
/*  5533*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5535*/        OPC_CheckPredicate, 1, // Predicate_load
/*  5537*/        OPC_MoveParent,
/*  5538*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  5541*/        OPC_EmitMergeInputChains1_1,
/*  5542*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (MSP430cmp GR8:{ *:[i8] }:$rd, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (CMP8rm:{ *:[i16] } GR8:{ *:[i8] }:$rd, addr:{ *:[i16] }:$src)
/*  5551*/      /*Scope*/ 28, /*->5580*/
/*  5552*/        OPC_CheckChild0Type, MVT::i16,
/*  5554*/        OPC_MoveChild1,
/*  5555*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5558*/        OPC_RecordMemRef,
/*  5559*/        OPC_RecordNode, // #1 = 'ld' chained node
/*  5560*/        OPC_CheckFoldableChainNode,
/*  5561*/        OPC_RecordChild1, // #2 = $src
/*  5562*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5564*/        OPC_CheckPredicate, 1, // Predicate_load
/*  5566*/        OPC_MoveParent,
/*  5567*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  5570*/        OPC_EmitMergeInputChains1_1,
/*  5571*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (MSP430cmp GR16:{ *:[i16] }:$rd, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (CMP16rm:{ *:[i16] } GR16:{ *:[i16] }:$rd, addr:{ *:[i16] }:$src)
/*  5580*/      0, /*End of Scope*/
/*  5581*/    /*Scope*/ 90|128,1/*218*/, /*->5801*/
/*  5583*/      OPC_MoveChild0,
/*  5584*/      OPC_SwitchOpcode /*3 cases */, 44, TARGET_VAL(ISD::LOAD),// ->5632
/*  5588*/        OPC_RecordMemRef,
/*  5589*/        OPC_RecordNode, // #0 = 'ld' chained node
/*  5590*/        OPC_CheckFoldableChainNode,
/*  5591*/        OPC_RecordChild1, // #1 = $dst
/*  5592*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5594*/        OPC_CheckPredicate, 1, // Predicate_load
/*  5596*/        OPC_SwitchType /*2 cases */, 15, MVT::i8,// ->5614
/*  5599*/          OPC_MoveParent,
/*  5600*/          OPC_RecordChild1, // #2 = $rs
/*  5601*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5604*/          OPC_EmitMergeInputChains1_0,
/*  5605*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                    // Src: (MSP430cmp (ld:{ *:[i8] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$rs) - Complexity = 16
                    // Dst: (CMP8mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR8:{ *:[i8] }:$rs)
/*  5614*/        /*SwitchType*/ 15, MVT::i16,// ->5631
/*  5616*/          OPC_MoveParent,
/*  5617*/          OPC_RecordChild1, // #2 = $rs
/*  5618*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #3 #4
/*  5621*/          OPC_EmitMergeInputChains1_0,
/*  5622*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                    // Src: (MSP430cmp (ld:{ *:[i16] } addr:{ *:[iPTR] }:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$rs) - Complexity = 16
                    // Dst: (CMP16mr:{ *:[i16] } addr:{ *:[i16] }:$dst, GR16:{ *:[i16] }:$rs)
/*  5631*/        0, // EndSwitchType
/*  5632*/      /*SwitchOpcode*/ 120, TARGET_VAL(ISD::AND),// ->5755
/*  5635*/        OPC_RecordChild0, // #0 = $rd
/*  5636*/        OPC_RecordChild1, // #1 = $imm
/*  5637*/        OPC_Scope, 84, /*->5723*/ // 2 children in Scope
/*  5639*/          OPC_MoveChild1,
/*  5640*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  5643*/          OPC_Scope, 20, /*->5665*/ // 3 children in Scope
/*  5645*/            OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  5647*/            OPC_MoveParent,
/*  5648*/            OPC_CheckPredicate, 8, // Predicate_and_su
/*  5650*/            OPC_CheckType, MVT::i8,
/*  5652*/            OPC_MoveParent,
/*  5653*/            OPC_CheckChild1Integer, 0, 
/*  5655*/            OPC_EmitConvertToTarget, 1,
/*  5657*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8rc), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430cmp (and:{ *:[i8] } GR8:{ *:[i8] }:$rd, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm)<<P:Predicate_and_su>>, 0:{ *:[i8] }) - Complexity = 16
                      // Dst: (BIT8rc:{ *:[i16] } GR8:{ *:[i8] }:$rd, (imm:{ *:[i8] }):$imm)
/*  5665*/          /*Scope*/ 20, /*->5686*/
/*  5666*/            OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  5668*/            OPC_MoveParent,
/*  5669*/            OPC_CheckPredicate, 8, // Predicate_and_su
/*  5671*/            OPC_CheckType, MVT::i16,
/*  5673*/            OPC_MoveParent,
/*  5674*/            OPC_CheckChild1Integer, 0, 
/*  5676*/            OPC_EmitConvertToTarget, 1,
/*  5678*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16rc), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430cmp (and:{ *:[i16] } GR16:{ *:[i16] }:$rd, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm)<<P:Predicate_and_su>>, 0:{ *:[i16] }) - Complexity = 16
                      // Dst: (BIT16rc:{ *:[i16] } GR16:{ *:[i16] }:$rd, (imm:{ *:[i16] }):$imm)
/*  5686*/          /*Scope*/ 35, /*->5722*/
/*  5687*/            OPC_MoveParent,
/*  5688*/            OPC_CheckPredicate, 8, // Predicate_and_su
/*  5690*/            OPC_SwitchType /*2 cases */, 13, MVT::i8,// ->5706
/*  5693*/              OPC_MoveParent,
/*  5694*/              OPC_CheckChild1Integer, 0, 
/*  5696*/              OPC_EmitConvertToTarget, 1,
/*  5698*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8ri), 0|OPFL_GlueOutput,
                            MVT::i16, 2/*#Ops*/, 0, 2, 
                        // Src: (MSP430cmp (and:{ *:[i8] } GR8:{ *:[i8] }:$rd, (imm:{ *:[i8] }):$imm)<<P:Predicate_and_su>>, 0:{ *:[i8] }) - Complexity = 15
                        // Dst: (BIT8ri:{ *:[i16] } GR8:{ *:[i8] }:$rd, (imm:{ *:[i8] }):$imm)
/*  5706*/            /*SwitchType*/ 13, MVT::i16,// ->5721
/*  5708*/              OPC_MoveParent,
/*  5709*/              OPC_CheckChild1Integer, 0, 
/*  5711*/              OPC_EmitConvertToTarget, 1,
/*  5713*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16ri), 0|OPFL_GlueOutput,
                            MVT::i16, 2/*#Ops*/, 0, 2, 
                        // Src: (MSP430cmp (and:{ *:[i16] } GR16:{ *:[i16] }:$rd, (imm:{ *:[i16] }):$imm)<<P:Predicate_and_su>>, 0:{ *:[i16] }) - Complexity = 15
                        // Dst: (BIT16ri:{ *:[i16] } GR16:{ *:[i16] }:$rd, (imm:{ *:[i16] }):$imm)
/*  5721*/            0, // EndSwitchType
/*  5722*/          0, /*End of Scope*/
/*  5723*/        /*Scope*/ 30, /*->5754*/
/*  5724*/          OPC_CheckPredicate, 8, // Predicate_and_su
/*  5726*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->5740
/*  5729*/            OPC_MoveParent,
/*  5730*/            OPC_CheckChild1Integer, 0, 
/*  5732*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8rr), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 1, 
                      // Src: (MSP430cmp (and:{ *:[i8] } GR8:{ *:[i8] }:$rd, GR8:{ *:[i8] }:$rs)<<P:Predicate_and_su>>, 0:{ *:[i8] }) - Complexity = 12
                      // Dst: (BIT8rr:{ *:[i16] } GR8:{ *:[i8] }:$rd, GR8:{ *:[i8] }:$rs)
/*  5740*/          /*SwitchType*/ 11, MVT::i16,// ->5753
/*  5742*/            OPC_MoveParent,
/*  5743*/            OPC_CheckChild1Integer, 0, 
/*  5745*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16rr), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 1, 
                      // Src: (MSP430cmp (and:{ *:[i16] } GR16:{ *:[i16] }:$rd, GR16:{ *:[i16] }:$rs)<<P:Predicate_and_su>>, 0:{ *:[i16] }) - Complexity = 12
                      // Dst: (BIT16rr:{ *:[i16] } GR16:{ *:[i16] }:$rd, GR16:{ *:[i16] }:$rs)
/*  5753*/          0, // EndSwitchType
/*  5754*/        0, /*End of Scope*/
/*  5755*/      /*SwitchOpcode*/ 42, TARGET_VAL(ISD::TRUNCATE),// ->5800
/*  5758*/        OPC_MoveChild0,
/*  5759*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5762*/        OPC_RecordChild0, // #0 = $src
/*  5763*/        OPC_RecordChild1, // #1 = $src2
/*  5764*/        OPC_CheckPredicate, 8, // Predicate_and_su
/*  5766*/        OPC_MoveParent,
/*  5767*/        OPC_MoveParent,
/*  5768*/        OPC_CheckChild1Integer, 0, 
/*  5770*/        OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*  5773*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i8, 2/*#Ops*/, 0, 2,  // Results = #3
/*  5781*/        OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*  5784*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i8, 2/*#Ops*/, 1, 4,  // Results = #5
/*  5792*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8rr), 0|OPFL_GlueOutput,
                      MVT::i16, 2/*#Ops*/, 3, 5, 
                  // Src: (MSP430cmp (trunc:{ *:[i8] } (and:{ *:[i16] } GR16:{ *:[i16] }:$src, GR16:{ *:[i16] }:$src2)<<P:Predicate_and_su>>), 0:{ *:[i8] }) - Complexity = 15
                  // Dst: (BIT8rr:{ *:[i16] } (EXTRACT_SUBREG:{ *:[i8] } GR16:{ *:[i16] }:$src, subreg_8bit:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i8] } GR16:{ *:[i16] }:$src2, subreg_8bit:{ *:[i32] }))
/*  5800*/      0, // EndSwitchOpcode
/*  5801*/    /*Scope*/ 99, /*->5901*/
/*  5802*/      OPC_RecordChild0, // #0 = $rd
/*  5803*/      OPC_Scope, 47, /*->5852*/ // 2 children in Scope
/*  5805*/        OPC_CheckChild0Type, MVT::i8,
/*  5807*/        OPC_RecordChild1, // #1 = $imm
/*  5808*/        OPC_Scope, 32, /*->5842*/ // 2 children in Scope
/*  5810*/          OPC_MoveChild1,
/*  5811*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  5814*/          OPC_Scope, 13, /*->5829*/ // 2 children in Scope
/*  5816*/            OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  5818*/            OPC_MoveParent,
/*  5819*/            OPC_EmitConvertToTarget, 1,
/*  5821*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8rc), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430cmp GR8:{ *:[i8] }:$rd, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                      // Dst: (CMP8rc:{ *:[i16] } GR8:{ *:[i8] }:$rd, (imm:{ *:[i8] }):$imm)
/*  5829*/          /*Scope*/ 11, /*->5841*/
/*  5830*/            OPC_MoveParent,
/*  5831*/            OPC_EmitConvertToTarget, 1,
/*  5833*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8ri), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430cmp GR8:{ *:[i8] }:$rd, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (CMP8ri:{ *:[i16] } GR8:{ *:[i8] }:$rd, (imm:{ *:[i8] }):$imm)
/*  5841*/          0, /*End of Scope*/
/*  5842*/        /*Scope*/ 8, /*->5851*/
/*  5843*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8rr), 0|OPFL_GlueOutput,
                        MVT::i16, 2/*#Ops*/, 0, 1, 
                    // Src: (MSP430cmp GR8:{ *:[i8] }:$rd, GR8:{ *:[i8] }:$rs) - Complexity = 3
                    // Dst: (CMP8rr:{ *:[i16] } GR8:{ *:[i8] }:$rd, GR8:{ *:[i8] }:$rs)
/*  5851*/        0, /*End of Scope*/
/*  5852*/      /*Scope*/ 47, /*->5900*/
/*  5853*/        OPC_CheckChild0Type, MVT::i16,
/*  5855*/        OPC_RecordChild1, // #1 = $imm
/*  5856*/        OPC_Scope, 32, /*->5890*/ // 2 children in Scope
/*  5858*/          OPC_MoveChild1,
/*  5859*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  5862*/          OPC_Scope, 13, /*->5877*/ // 2 children in Scope
/*  5864*/            OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  5866*/            OPC_MoveParent,
/*  5867*/            OPC_EmitConvertToTarget, 1,
/*  5869*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16rc), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430cmp GR16:{ *:[i16] }:$rd, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                      // Dst: (CMP16rc:{ *:[i16] } GR16:{ *:[i16] }:$rd, (imm:{ *:[i16] }):$imm)
/*  5877*/          /*Scope*/ 11, /*->5889*/
/*  5878*/            OPC_MoveParent,
/*  5879*/            OPC_EmitConvertToTarget, 1,
/*  5881*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16ri), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430cmp GR16:{ *:[i16] }:$rd, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (CMP16ri:{ *:[i16] } GR16:{ *:[i16] }:$rd, (imm:{ *:[i16] }):$imm)
/*  5889*/          0, /*End of Scope*/
/*  5890*/        /*Scope*/ 8, /*->5899*/
/*  5891*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16rr), 0|OPFL_GlueOutput,
                        MVT::i16, 2/*#Ops*/, 0, 1, 
                    // Src: (MSP430cmp GR16:{ *:[i16] }:$rd, GR16:{ *:[i16] }:$rs) - Complexity = 3
                    // Dst: (CMP16rr:{ *:[i16] } GR16:{ *:[i16] }:$rd, GR16:{ *:[i16] }:$rs)
/*  5899*/        0, /*End of Scope*/
/*  5900*/      0, /*End of Scope*/
/*  5901*/    0, /*End of Scope*/
/*  5902*/  /*SwitchOpcode*/ 105|128,7/*1001*/, TARGET_VAL(ISD::AND),// ->6907
/*  5906*/    OPC_Scope, 64, /*->5972*/ // 16 children in Scope
/*  5908*/      OPC_RecordChild0, // #0 = $src2
/*  5909*/      OPC_MoveChild1,
/*  5910*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  5913*/      OPC_MoveChild0,
/*  5914*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5917*/      OPC_RecordMemRef,
/*  5918*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  5919*/      OPC_CheckFoldableChainNode,
/*  5920*/      OPC_RecordChild1, // #2 = $src
/*  5921*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5923*/      OPC_CheckPredicate, 1, // Predicate_load
/*  5925*/      OPC_MoveParent,
/*  5926*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5937*/      OPC_MoveParent,
/*  5938*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->5955
/*  5941*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  5944*/        OPC_EmitMergeInputChains1_1,
/*  5945*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:{ *:[i8] })) - Complexity = 24
                  // Dst: (BIC8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  5955*/      /*SwitchType*/ 14, MVT::i16,// ->5971
/*  5957*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  5960*/        OPC_EmitMergeInputChains1_1,
/*  5961*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:{ *:[i16] })) - Complexity = 24
                  // Dst: (BIC16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  5971*/      0, // EndSwitchType
/*  5972*/    /*Scope*/ 64, /*->6037*/
/*  5973*/      OPC_MoveChild0,
/*  5974*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  5977*/      OPC_MoveChild0,
/*  5978*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  5981*/      OPC_RecordMemRef,
/*  5982*/      OPC_RecordNode, // #0 = 'ld' chained node
/*  5983*/      OPC_CheckFoldableChainNode,
/*  5984*/      OPC_RecordChild1, // #1 = $src
/*  5985*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  5987*/      OPC_CheckPredicate, 1, // Predicate_load
/*  5989*/      OPC_MoveParent,
/*  5990*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6001*/      OPC_MoveParent,
/*  6002*/      OPC_RecordChild1, // #2 = $src2
/*  6003*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->6020
/*  6006*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  6009*/        OPC_EmitMergeInputChains1_0,
/*  6010*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (and:{ *:[i8] } (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:{ *:[i8] }), GR8:{ *:[i8] }:$src2) - Complexity = 24
                  // Dst: (BIC8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  6020*/      /*SwitchType*/ 14, MVT::i16,// ->6036
/*  6022*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  6025*/        OPC_EmitMergeInputChains1_0,
/*  6026*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (and:{ *:[i16] } (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:{ *:[i16] }), GR16:{ *:[i16] }:$src2) - Complexity = 24
                  // Dst: (BIC16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  6036*/      0, // EndSwitchType
/*  6037*/    /*Scope*/ 48, /*->6086*/
/*  6038*/      OPC_RecordChild0, // #0 = $src2
/*  6039*/      OPC_MoveChild1,
/*  6040*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  6043*/      OPC_RecordMemRef,
/*  6044*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  6045*/      OPC_CheckFoldableChainNode,
/*  6046*/      OPC_RecordChild1, // #2 = $src
/*  6047*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  6049*/      OPC_CheckPredicate, 1, // Predicate_load
/*  6051*/      OPC_MoveParent,
/*  6052*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->6069
/*  6055*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  6058*/        OPC_EmitMergeInputChains1_1,
/*  6059*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (AND8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  6069*/      /*SwitchType*/ 14, MVT::i16,// ->6085
/*  6071*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  6074*/        OPC_EmitMergeInputChains1_1,
/*  6075*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (AND16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  6085*/      0, // EndSwitchType
/*  6086*/    /*Scope*/ 48, /*->6135*/
/*  6087*/      OPC_MoveChild0,
/*  6088*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  6091*/      OPC_RecordMemRef,
/*  6092*/      OPC_RecordNode, // #0 = 'ld' chained node
/*  6093*/      OPC_CheckFoldableChainNode,
/*  6094*/      OPC_RecordChild1, // #1 = $src
/*  6095*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  6097*/      OPC_CheckPredicate, 1, // Predicate_load
/*  6099*/      OPC_MoveParent,
/*  6100*/      OPC_RecordChild1, // #2 = $src2
/*  6101*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->6118
/*  6104*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  6107*/        OPC_EmitMergeInputChains1_0,
/*  6108*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (and:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$src2) - Complexity = 16
                  // Dst: (AND8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  6118*/      /*SwitchType*/ 14, MVT::i16,// ->6134
/*  6120*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  6123*/        OPC_EmitMergeInputChains1_0,
/*  6124*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (and:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$src2) - Complexity = 16
                  // Dst: (AND16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  6134*/      0, // EndSwitchType
/*  6135*/    /*Scope*/ 107, /*->6243*/
/*  6136*/      OPC_RecordChild0, // #0 = $src2
/*  6137*/      OPC_MoveChild1,
/*  6138*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6141*/      OPC_Scope, 65, /*->6208*/ // 2 children in Scope
/*  6143*/        OPC_RecordChild0, // #1 = $imm
/*  6144*/        OPC_MoveChild0,
/*  6145*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6148*/        OPC_Scope, 28, /*->6178*/ // 2 children in Scope
/*  6150*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  6152*/          OPC_MoveParent,
/*  6153*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6164*/          OPC_MoveParent,
/*  6165*/          OPC_CheckType, MVT::i8,
/*  6167*/          OPC_EmitConvertToTarget, 1,
/*  6169*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rc), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (xor:{ *:[i8] } (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm, -1:{ *:[i8] })) - Complexity = 15
                    // Dst: (BIC8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6178*/        /*Scope*/ 28, /*->6207*/
/*  6179*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  6181*/          OPC_MoveParent,
/*  6182*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6193*/          OPC_MoveParent,
/*  6194*/          OPC_CheckType, MVT::i16,
/*  6196*/          OPC_EmitConvertToTarget, 1,
/*  6198*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rc), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (xor:{ *:[i16] } (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm, -1:{ *:[i16] })) - Complexity = 15
                    // Dst: (BIC16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6207*/        0, /*End of Scope*/
/*  6208*/      /*Scope*/ 33, /*->6242*/
/*  6209*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6220*/        OPC_RecordChild1, // #1 = $imm
/*  6221*/        OPC_MoveChild1,
/*  6222*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6225*/        OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  6227*/        OPC_MoveParent,
/*  6228*/        OPC_MoveParent,
/*  6229*/        OPC_CheckType, MVT::i8,
/*  6231*/        OPC_EmitConvertToTarget, 1,
/*  6233*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rc), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (xor:{ *:[i8] } -1:{ *:[i8] }, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm)) - Complexity = 15
                  // Dst: (BIC8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6242*/      0, /*End of Scope*/
/*  6243*/    /*Scope*/ 76, /*->6320*/
/*  6244*/      OPC_MoveChild0,
/*  6245*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6248*/      OPC_Scope, 34, /*->6284*/ // 2 children in Scope
/*  6250*/        OPC_RecordChild0, // #0 = $imm
/*  6251*/        OPC_MoveChild0,
/*  6252*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6255*/        OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  6257*/        OPC_MoveParent,
/*  6258*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6269*/        OPC_MoveParent,
/*  6270*/        OPC_RecordChild1, // #1 = $src2
/*  6271*/        OPC_CheckType, MVT::i8,
/*  6273*/        OPC_EmitConvertToTarget, 0,
/*  6275*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rc), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 1, 2, 
                  // Src: (and:{ *:[i8] } (xor:{ *:[i8] } (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm, -1:{ *:[i8] }), GR8:{ *:[i8] }:$src2) - Complexity = 15
                  // Dst: (BIC8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6284*/      /*Scope*/ 34, /*->6319*/
/*  6285*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6296*/        OPC_RecordChild1, // #0 = $imm
/*  6297*/        OPC_MoveChild1,
/*  6298*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6301*/        OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  6303*/        OPC_MoveParent,
/*  6304*/        OPC_MoveParent,
/*  6305*/        OPC_RecordChild1, // #1 = $src2
/*  6306*/        OPC_CheckType, MVT::i8,
/*  6308*/        OPC_EmitConvertToTarget, 0,
/*  6310*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rc), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 1, 2, 
                  // Src: (and:{ *:[i8] } (xor:{ *:[i8] } -1:{ *:[i8] }, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm), GR8:{ *:[i8] }:$src2) - Complexity = 15
                  // Dst: (BIC8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6319*/      0, /*End of Scope*/
/*  6320*/    /*Scope*/ 38, /*->6359*/
/*  6321*/      OPC_RecordChild0, // #0 = $src2
/*  6322*/      OPC_MoveChild1,
/*  6323*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6326*/      OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6337*/      OPC_RecordChild1, // #1 = $imm
/*  6338*/      OPC_MoveChild1,
/*  6339*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6342*/      OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  6344*/      OPC_MoveParent,
/*  6345*/      OPC_MoveParent,
/*  6346*/      OPC_CheckType, MVT::i16,
/*  6348*/      OPC_EmitConvertToTarget, 1,
/*  6350*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rc), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (xor:{ *:[i16] } -1:{ *:[i16] }, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm)) - Complexity = 15
                // Dst: (BIC16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6359*/    /*Scope*/ 76, /*->6436*/
/*  6360*/      OPC_MoveChild0,
/*  6361*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6364*/      OPC_Scope, 34, /*->6400*/ // 2 children in Scope
/*  6366*/        OPC_RecordChild0, // #0 = $imm
/*  6367*/        OPC_MoveChild0,
/*  6368*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6371*/        OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  6373*/        OPC_MoveParent,
/*  6374*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6385*/        OPC_MoveParent,
/*  6386*/        OPC_RecordChild1, // #1 = $src2
/*  6387*/        OPC_CheckType, MVT::i16,
/*  6389*/        OPC_EmitConvertToTarget, 0,
/*  6391*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rc), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 2, 
                  // Src: (and:{ *:[i16] } (xor:{ *:[i16] } (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm, -1:{ *:[i16] }), GR16:{ *:[i16] }:$src2) - Complexity = 15
                  // Dst: (BIC16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6400*/      /*Scope*/ 34, /*->6435*/
/*  6401*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6412*/        OPC_RecordChild1, // #0 = $imm
/*  6413*/        OPC_MoveChild1,
/*  6414*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6417*/        OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  6419*/        OPC_MoveParent,
/*  6420*/        OPC_MoveParent,
/*  6421*/        OPC_RecordChild1, // #1 = $src2
/*  6422*/        OPC_CheckType, MVT::i16,
/*  6424*/        OPC_EmitConvertToTarget, 0,
/*  6426*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rc), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 2, 
                  // Src: (and:{ *:[i16] } (xor:{ *:[i16] } -1:{ *:[i16] }, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm), GR16:{ *:[i16] }:$src2) - Complexity = 15
                  // Dst: (BIC16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6435*/      0, /*End of Scope*/
/*  6436*/    /*Scope*/ 86, /*->6523*/
/*  6437*/      OPC_RecordChild0, // #0 = $src2
/*  6438*/      OPC_MoveChild1,
/*  6439*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6442*/      OPC_Scope, 46, /*->6490*/ // 2 children in Scope
/*  6444*/        OPC_RecordChild0, // #1 = $imm
/*  6445*/        OPC_MoveChild0,
/*  6446*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6449*/        OPC_MoveParent,
/*  6450*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6461*/        OPC_MoveParent,
/*  6462*/        OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->6476
/*  6465*/          OPC_EmitConvertToTarget, 1,
/*  6467*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8ri), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (xor:{ *:[i8] } (imm:{ *:[i8] }):$imm, -1:{ *:[i8] })) - Complexity = 14
                    // Dst: (BIC8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6476*/        /*SwitchType*/ 11, MVT::i16,// ->6489
/*  6478*/          OPC_EmitConvertToTarget, 1,
/*  6480*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16ri), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (xor:{ *:[i16] } (imm:{ *:[i16] }):$imm, -1:{ *:[i16] })) - Complexity = 14
                    // Dst: (BIC16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6489*/        0, // EndSwitchType
/*  6490*/      /*Scope*/ 31, /*->6522*/
/*  6491*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6502*/        OPC_RecordChild1, // #1 = $imm
/*  6503*/        OPC_MoveChild1,
/*  6504*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6507*/        OPC_MoveParent,
/*  6508*/        OPC_MoveParent,
/*  6509*/        OPC_CheckType, MVT::i8,
/*  6511*/        OPC_EmitConvertToTarget, 1,
/*  6513*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8ri), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (xor:{ *:[i8] } -1:{ *:[i8] }, (imm:{ *:[i8] }):$imm)) - Complexity = 14
                  // Dst: (BIC8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6522*/      0, /*End of Scope*/
/*  6523*/    /*Scope*/ 72, /*->6596*/
/*  6524*/      OPC_MoveChild0,
/*  6525*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6528*/      OPC_Scope, 32, /*->6562*/ // 2 children in Scope
/*  6530*/        OPC_RecordChild0, // #0 = $imm
/*  6531*/        OPC_MoveChild0,
/*  6532*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6535*/        OPC_MoveParent,
/*  6536*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6547*/        OPC_MoveParent,
/*  6548*/        OPC_RecordChild1, // #1 = $src2
/*  6549*/        OPC_CheckType, MVT::i8,
/*  6551*/        OPC_EmitConvertToTarget, 0,
/*  6553*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8ri), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 1, 2, 
                  // Src: (and:{ *:[i8] } (xor:{ *:[i8] } (imm:{ *:[i8] }):$imm, -1:{ *:[i8] }), GR8:{ *:[i8] }:$src2) - Complexity = 14
                  // Dst: (BIC8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6562*/      /*Scope*/ 32, /*->6595*/
/*  6563*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6574*/        OPC_RecordChild1, // #0 = $imm
/*  6575*/        OPC_MoveChild1,
/*  6576*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6579*/        OPC_MoveParent,
/*  6580*/        OPC_MoveParent,
/*  6581*/        OPC_RecordChild1, // #1 = $src2
/*  6582*/        OPC_CheckType, MVT::i8,
/*  6584*/        OPC_EmitConvertToTarget, 0,
/*  6586*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8ri), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 1, 2, 
                  // Src: (and:{ *:[i8] } (xor:{ *:[i8] } -1:{ *:[i8] }, (imm:{ *:[i8] }):$imm), GR8:{ *:[i8] }:$src2) - Complexity = 14
                  // Dst: (BIC8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6595*/      0, /*End of Scope*/
/*  6596*/    /*Scope*/ 36, /*->6633*/
/*  6597*/      OPC_RecordChild0, // #0 = $src2
/*  6598*/      OPC_MoveChild1,
/*  6599*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6602*/      OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6613*/      OPC_RecordChild1, // #1 = $imm
/*  6614*/      OPC_MoveChild1,
/*  6615*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6618*/      OPC_MoveParent,
/*  6619*/      OPC_MoveParent,
/*  6620*/      OPC_CheckType, MVT::i16,
/*  6622*/      OPC_EmitConvertToTarget, 1,
/*  6624*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16ri), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (xor:{ *:[i16] } -1:{ *:[i16] }, (imm:{ *:[i16] }):$imm)) - Complexity = 14
                // Dst: (BIC16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6633*/    /*Scope*/ 72, /*->6706*/
/*  6634*/      OPC_MoveChild0,
/*  6635*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6638*/      OPC_Scope, 32, /*->6672*/ // 2 children in Scope
/*  6640*/        OPC_RecordChild0, // #0 = $imm
/*  6641*/        OPC_MoveChild0,
/*  6642*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6645*/        OPC_MoveParent,
/*  6646*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6657*/        OPC_MoveParent,
/*  6658*/        OPC_RecordChild1, // #1 = $src2
/*  6659*/        OPC_CheckType, MVT::i16,
/*  6661*/        OPC_EmitConvertToTarget, 0,
/*  6663*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 2, 
                  // Src: (and:{ *:[i16] } (xor:{ *:[i16] } (imm:{ *:[i16] }):$imm, -1:{ *:[i16] }), GR16:{ *:[i16] }:$src2) - Complexity = 14
                  // Dst: (BIC16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6672*/      /*Scope*/ 32, /*->6705*/
/*  6673*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6684*/        OPC_RecordChild1, // #0 = $imm
/*  6685*/        OPC_MoveChild1,
/*  6686*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6689*/        OPC_MoveParent,
/*  6690*/        OPC_MoveParent,
/*  6691*/        OPC_RecordChild1, // #1 = $src2
/*  6692*/        OPC_CheckType, MVT::i16,
/*  6694*/        OPC_EmitConvertToTarget, 0,
/*  6696*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 2, 
                  // Src: (and:{ *:[i16] } (xor:{ *:[i16] } -1:{ *:[i16] }, (imm:{ *:[i16] }):$imm), GR16:{ *:[i16] }:$src2) - Complexity = 14
                  // Dst: (BIC16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6705*/      0, /*End of Scope*/
/*  6706*/    /*Scope*/ 42, /*->6749*/
/*  6707*/      OPC_RecordChild0, // #0 = $src2
/*  6708*/      OPC_MoveChild1,
/*  6709*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6712*/      OPC_RecordChild0, // #1 = $rs
/*  6713*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6724*/      OPC_MoveParent,
/*  6725*/      OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->6737
/*  6728*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (xor:{ *:[i8] } GR8:{ *:[i8] }:$rs, -1:{ *:[i8] })) - Complexity = 11
                  // Dst: (BIC8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  6737*/      /*SwitchType*/ 9, MVT::i16,// ->6748
/*  6739*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (xor:{ *:[i16] } GR16:{ *:[i16] }:$rs, -1:{ *:[i16] })) - Complexity = 11
                  // Dst: (BIC16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  6748*/      0, // EndSwitchType
/*  6749*/    /*Scope*/ 42, /*->6792*/
/*  6750*/      OPC_MoveChild0,
/*  6751*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  6754*/      OPC_RecordChild0, // #0 = $rs
/*  6755*/      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6766*/      OPC_MoveParent,
/*  6767*/      OPC_RecordChild1, // #1 = $src2
/*  6768*/      OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->6780
/*  6771*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (and:{ *:[i8] } (xor:{ *:[i8] } GR8:{ *:[i8] }:$rs, -1:{ *:[i8] }), GR8:{ *:[i8] }:$src2) - Complexity = 11
                  // Dst: (BIC8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  6780*/      /*SwitchType*/ 9, MVT::i16,// ->6791
/*  6782*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (and:{ *:[i16] } (xor:{ *:[i16] } GR16:{ *:[i16] }:$rs, -1:{ *:[i16] }), GR16:{ *:[i16] }:$src2) - Complexity = 11
                  // Dst: (BIC16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  6791*/      0, // EndSwitchType
/*  6792*/    /*Scope*/ 13, /*->6806*/
/*  6793*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*  6796*/      OPC_RecordChild0, // #0 = $src
/*  6797*/      OPC_CheckType, MVT::i16,
/*  6799*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::ZEXT16r), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src, 255:{ *:[i16] }) - Complexity = 8
                // Dst: (ZEXT16r:{ *:[i16] } GR16:{ *:[i16] }:$src)
/*  6806*/    /*Scope*/ 99, /*->6906*/
/*  6807*/      OPC_RecordChild0, // #0 = $src2
/*  6808*/      OPC_RecordChild1, // #1 = $imm
/*  6809*/      OPC_Scope, 70, /*->6881*/ // 3 children in Scope
/*  6811*/        OPC_MoveChild1,
/*  6812*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  6815*/        OPC_Scope, 16, /*->6833*/ // 3 children in Scope
/*  6817*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  6819*/          OPC_MoveParent,
/*  6820*/          OPC_CheckType, MVT::i8,
/*  6822*/          OPC_EmitConvertToTarget, 1,
/*  6824*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8rc), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                    // Dst: (AND8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6833*/        /*Scope*/ 16, /*->6850*/
/*  6834*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  6836*/          OPC_MoveParent,
/*  6837*/          OPC_CheckType, MVT::i16,
/*  6839*/          OPC_EmitConvertToTarget, 1,
/*  6841*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16rc), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                    // Dst: (AND16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6850*/        /*Scope*/ 29, /*->6880*/
/*  6851*/          OPC_MoveParent,
/*  6852*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->6866
/*  6855*/            OPC_EmitConvertToTarget, 1,
/*  6857*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8ri), 0,
                          MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (AND8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  6866*/          /*SwitchType*/ 11, MVT::i16,// ->6879
/*  6868*/            OPC_EmitConvertToTarget, 1,
/*  6870*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16ri), 0,
                          MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (AND16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  6879*/          0, // EndSwitchType
/*  6880*/        0, /*End of Scope*/
/*  6881*/      /*Scope*/ 11, /*->6893*/
/*  6882*/        OPC_CheckType, MVT::i8,
/*  6884*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i8] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (AND8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  6893*/      /*Scope*/ 11, /*->6905*/
/*  6894*/        OPC_CheckType, MVT::i16,
/*  6896*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (AND16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  6905*/      0, /*End of Scope*/
/*  6906*/    0, /*End of Scope*/
/*  6907*/  /*SwitchOpcode*/ 58, TARGET_VAL(ISD::BRIND),// ->6968
/*  6910*/    OPC_RecordNode, // #0 = 'brind' chained node
/*  6911*/    OPC_Scope, 27, /*->6940*/ // 2 children in Scope
/*  6913*/      OPC_MoveChild1,
/*  6914*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  6917*/      OPC_RecordMemRef,
/*  6918*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  6919*/      OPC_CheckFoldableChainNode,
/*  6920*/      OPC_RecordChild1, // #2 = $src
/*  6921*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  6923*/      OPC_CheckPredicate, 1, // Predicate_load
/*  6925*/      OPC_MoveParent,
/*  6926*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  6929*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*  6933*/      OPC_MorphNodeTo0, TARGET_VAL(MSP430::Bm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#Ops*/, 3, 4, 
                // Src: (brind (ld:{ *:[iPTR] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (Bm addr:{ *:[i16] }:$src)
/*  6940*/    /*Scope*/ 26, /*->6967*/
/*  6941*/      OPC_RecordChild1, // #1 = $imm
/*  6942*/      OPC_Scope, 12, /*->6956*/ // 2 children in Scope
/*  6944*/        OPC_MoveChild1,
/*  6945*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetBlockAddress),
/*  6948*/        OPC_MoveParent,
/*  6949*/        OPC_EmitMergeInputChains1_0,
/*  6950*/        OPC_MorphNodeTo0, TARGET_VAL(MSP430::Bi), 0|OPFL_Chain,
                      1/*#Ops*/, 1, 
                  // Src: (brind (tblockaddress:{ *:[iPTR] }):$imm) - Complexity = 6
                  // Dst: (Bi (tblockaddress:{ *:[i16] }):$imm)
/*  6956*/      /*Scope*/ 9, /*->6966*/
/*  6957*/        OPC_CheckChild1Type, MVT::i16,
/*  6959*/        OPC_EmitMergeInputChains1_0,
/*  6960*/        OPC_MorphNodeTo0, TARGET_VAL(MSP430::Br), 0|OPFL_Chain,
                      1/*#Ops*/, 1, 
                  // Src: (brind GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (Br GR16:{ *:[i16] }:$rs)
/*  6966*/      0, /*End of Scope*/
/*  6967*/    0, /*End of Scope*/
/*  6968*/  /*SwitchOpcode*/ 94, TARGET_VAL(MSP430ISD::CALL),// ->7065
/*  6971*/    OPC_RecordNode, // #0 = 'MSP430call' chained node
/*  6972*/    OPC_CaptureGlueInput,
/*  6973*/    OPC_Scope, 28, /*->7003*/ // 2 children in Scope
/*  6975*/      OPC_MoveChild1,
/*  6976*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  6979*/      OPC_RecordMemRef,
/*  6980*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  6981*/      OPC_CheckFoldableChainNode,
/*  6982*/      OPC_RecordChild1, // #2 = $src
/*  6983*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  6985*/      OPC_CheckPredicate, 1, // Predicate_load
/*  6987*/      OPC_MoveParent,
/*  6988*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  6991*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*  6995*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs|OPFL_Variadic1,
                    MVT::i16, 2/*#Ops*/, 3, 4, 
                // Src: (MSP430call (ld:{ *:[iPTR] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (CALLm:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  7003*/    /*Scope*/ 60, /*->7064*/
/*  7004*/      OPC_RecordChild1, // #1 = $imm
/*  7005*/      OPC_Scope, 45, /*->7052*/ // 2 children in Scope
/*  7007*/        OPC_MoveChild1,
/*  7008*/        OPC_SwitchOpcode /*3 cases */, 11, TARGET_VAL(ISD::Constant),// ->7023
/*  7012*/          OPC_MoveParent,
/*  7013*/          OPC_EmitMergeInputChains1_0,
/*  7014*/          OPC_EmitConvertToTarget, 1,
/*  7016*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                        MVT::i16, 1/*#Ops*/, 2, 
                    // Src: (MSP430call (imm:{ *:[iPTR] }):$imm) - Complexity = 6
                    // Dst: (CALLi:{ *:[i16] } (imm:{ *:[i16] }):$imm)
/*  7023*/        /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetGlobalAddress),// ->7037
/*  7026*/          OPC_CheckType, MVT::i16,
/*  7028*/          OPC_MoveParent,
/*  7029*/          OPC_EmitMergeInputChains1_0,
/*  7030*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                        MVT::i16, 1/*#Ops*/, 1, 
                    // Src: (MSP430call (tglobaladdr:{ *:[i16] }):$dst) - Complexity = 6
                    // Dst: (CALLi:{ *:[i16] } (tglobaladdr:{ *:[i16] }):$dst)
/*  7037*/        /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetExternalSymbol),// ->7051
/*  7040*/          OPC_CheckType, MVT::i16,
/*  7042*/          OPC_MoveParent,
/*  7043*/          OPC_EmitMergeInputChains1_0,
/*  7044*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                        MVT::i16, 1/*#Ops*/, 1, 
                    // Src: (MSP430call (texternalsym:{ *:[i16] }):$dst) - Complexity = 6
                    // Dst: (CALLi:{ *:[i16] } (texternalsym:{ *:[i16] }):$dst)
/*  7051*/        0, // EndSwitchOpcode
/*  7052*/      /*Scope*/ 10, /*->7063*/
/*  7053*/        OPC_CheckChild1Type, MVT::i16,
/*  7055*/        OPC_EmitMergeInputChains1_0,
/*  7056*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i16, 1/*#Ops*/, 1, 
                  // Src: (MSP430call GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (CALLr:{ *:[i16] } GR16:{ *:[i16] }:$rs)
/*  7063*/      0, /*End of Scope*/
/*  7064*/    0, /*End of Scope*/
/*  7065*/  /*SwitchOpcode*/ 62|128,2/*318*/, TARGET_VAL(ISD::ADD),// ->7387
/*  7069*/    OPC_Scope, 48, /*->7119*/ // 5 children in Scope
/*  7071*/      OPC_RecordChild0, // #0 = $src2
/*  7072*/      OPC_MoveChild1,
/*  7073*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  7076*/      OPC_RecordMemRef,
/*  7077*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  7078*/      OPC_CheckFoldableChainNode,
/*  7079*/      OPC_RecordChild1, // #2 = $src
/*  7080*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  7082*/      OPC_CheckPredicate, 1, // Predicate_load
/*  7084*/      OPC_MoveParent,
/*  7085*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->7102
/*  7088*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  7091*/        OPC_EmitMergeInputChains1_1,
/*  7092*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (add:{ *:[i8] } GR8:{ *:[i8] }:$src2, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADD8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  7102*/      /*SwitchType*/ 14, MVT::i16,// ->7118
/*  7104*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  7107*/        OPC_EmitMergeInputChains1_1,
/*  7108*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (add:{ *:[i16] } GR16:{ *:[i16] }:$src2, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADD16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  7118*/      0, // EndSwitchType
/*  7119*/    /*Scope*/ 48, /*->7168*/
/*  7120*/      OPC_MoveChild0,
/*  7121*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  7124*/      OPC_RecordMemRef,
/*  7125*/      OPC_RecordNode, // #0 = 'ld' chained node
/*  7126*/      OPC_CheckFoldableChainNode,
/*  7127*/      OPC_RecordChild1, // #1 = $src
/*  7128*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  7130*/      OPC_CheckPredicate, 1, // Predicate_load
/*  7132*/      OPC_MoveParent,
/*  7133*/      OPC_RecordChild1, // #2 = $src2
/*  7134*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->7151
/*  7137*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  7140*/        OPC_EmitMergeInputChains1_0,
/*  7141*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (add:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$src2) - Complexity = 16
                  // Dst: (ADD8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  7151*/      /*SwitchType*/ 14, MVT::i16,// ->7167
/*  7153*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  7156*/        OPC_EmitMergeInputChains1_0,
/*  7157*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (add:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$src2) - Complexity = 16
                  // Dst: (ADD16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  7167*/      0, // EndSwitchType
/*  7168*/    /*Scope*/ 57, /*->7226*/
/*  7169*/      OPC_RecordChild0, // #0 = $src
/*  7170*/      OPC_MoveChild1,
/*  7171*/      OPC_CheckOpcode, TARGET_VAL(MSP430ISD::Wrapper),
/*  7174*/      OPC_RecordChild0, // #1 = $src2
/*  7175*/      OPC_MoveChild0,
/*  7176*/      OPC_SwitchOpcode /*3 cases */, 13, TARGET_VAL(ISD::TargetGlobalAddress),// ->7193
/*  7180*/        OPC_MoveParent,
/*  7181*/        OPC_MoveParent,
/*  7182*/        OPC_CheckType, MVT::i16,
/*  7184*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i16] } GR16:{ *:[i16] }:$src, (MSP430Wrapper:{ *:[i16] } (tglobaladdr:{ *:[i16] }):$src2)) - Complexity = 9
                  // Dst: (ADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, (tglobaladdr:{ *:[i16] }):$src2)
/*  7193*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetExternalSymbol),// ->7209
/*  7196*/        OPC_MoveParent,
/*  7197*/        OPC_MoveParent,
/*  7198*/        OPC_CheckType, MVT::i16,
/*  7200*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i16] } GR16:{ *:[i16] }:$src, (MSP430Wrapper:{ *:[i16] } (texternalsym:{ *:[i16] }):$src2)) - Complexity = 9
                  // Dst: (ADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, (texternalsym:{ *:[i16] }):$src2)
/*  7209*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetBlockAddress),// ->7225
/*  7212*/        OPC_MoveParent,
/*  7213*/        OPC_MoveParent,
/*  7214*/        OPC_CheckType, MVT::i16,
/*  7216*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i16] } GR16:{ *:[i16] }:$src, (MSP430Wrapper:{ *:[i16] } (tblockaddress:{ *:[i16] }):$src2)) - Complexity = 9
                  // Dst: (ADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, (tblockaddress:{ *:[i16] }):$src2)
/*  7225*/      0, // EndSwitchOpcode
/*  7226*/    /*Scope*/ 59, /*->7286*/
/*  7227*/      OPC_MoveChild0,
/*  7228*/      OPC_CheckOpcode, TARGET_VAL(MSP430ISD::Wrapper),
/*  7231*/      OPC_RecordChild0, // #0 = $src2
/*  7232*/      OPC_MoveChild0,
/*  7233*/      OPC_SwitchOpcode /*3 cases */, 14, TARGET_VAL(ISD::TargetGlobalAddress),// ->7251
/*  7237*/        OPC_MoveParent,
/*  7238*/        OPC_MoveParent,
/*  7239*/        OPC_RecordChild1, // #1 = $src
/*  7240*/        OPC_CheckType, MVT::i16,
/*  7242*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (add:{ *:[i16] } (MSP430Wrapper:{ *:[i16] } (tglobaladdr:{ *:[i16] }):$src2), GR16:{ *:[i16] }:$src) - Complexity = 9
                  // Dst: (ADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, (tglobaladdr:{ *:[i16] }):$src2)
/*  7251*/      /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetExternalSymbol),// ->7268
/*  7254*/        OPC_MoveParent,
/*  7255*/        OPC_MoveParent,
/*  7256*/        OPC_RecordChild1, // #1 = $src
/*  7257*/        OPC_CheckType, MVT::i16,
/*  7259*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (add:{ *:[i16] } (MSP430Wrapper:{ *:[i16] } (texternalsym:{ *:[i16] }):$src2), GR16:{ *:[i16] }:$src) - Complexity = 9
                  // Dst: (ADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, (texternalsym:{ *:[i16] }):$src2)
/*  7268*/      /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetBlockAddress),// ->7285
/*  7271*/        OPC_MoveParent,
/*  7272*/        OPC_MoveParent,
/*  7273*/        OPC_RecordChild1, // #1 = $src
/*  7274*/        OPC_CheckType, MVT::i16,
/*  7276*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (add:{ *:[i16] } (MSP430Wrapper:{ *:[i16] } (tblockaddress:{ *:[i16] }):$src2), GR16:{ *:[i16] }:$src) - Complexity = 9
                  // Dst: (ADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, (tblockaddress:{ *:[i16] }):$src2)
/*  7285*/      0, // EndSwitchOpcode
/*  7286*/    /*Scope*/ 99, /*->7386*/
/*  7287*/      OPC_RecordChild0, // #0 = $src2
/*  7288*/      OPC_RecordChild1, // #1 = $imm
/*  7289*/      OPC_Scope, 70, /*->7361*/ // 3 children in Scope
/*  7291*/        OPC_MoveChild1,
/*  7292*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  7295*/        OPC_Scope, 16, /*->7313*/ // 3 children in Scope
/*  7297*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  7299*/          OPC_MoveParent,
/*  7300*/          OPC_CheckType, MVT::i8,
/*  7302*/          OPC_EmitConvertToTarget, 1,
/*  7304*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rc), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                    // Dst: (ADD8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  7313*/        /*Scope*/ 16, /*->7330*/
/*  7314*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  7316*/          OPC_MoveParent,
/*  7317*/          OPC_CheckType, MVT::i16,
/*  7319*/          OPC_EmitConvertToTarget, 1,
/*  7321*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rc), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                    // Dst: (ADD16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  7330*/        /*Scope*/ 29, /*->7360*/
/*  7331*/          OPC_MoveParent,
/*  7332*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->7346
/*  7335*/            OPC_EmitConvertToTarget, 1,
/*  7337*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8ri), 0,
                          MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (add:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (ADD8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  7346*/          /*SwitchType*/ 11, MVT::i16,// ->7359
/*  7348*/            OPC_EmitConvertToTarget, 1,
/*  7350*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                          MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (add:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (ADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  7359*/          0, // EndSwitchType
/*  7360*/        0, /*End of Scope*/
/*  7361*/      /*Scope*/ 11, /*->7373*/
/*  7362*/        OPC_CheckType, MVT::i8,
/*  7364*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i8] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (ADD8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  7373*/      /*Scope*/ 11, /*->7385*/
/*  7374*/        OPC_CheckType, MVT::i16,
/*  7376*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (ADD16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  7385*/      0, /*End of Scope*/
/*  7386*/    0, /*End of Scope*/
/*  7387*/  /*SwitchOpcode*/ 73|128,1/*201*/, TARGET_VAL(ISD::ADDE),// ->7592
/*  7391*/    OPC_CaptureGlueInput,
/*  7392*/    OPC_Scope, 48, /*->7442*/ // 3 children in Scope
/*  7394*/      OPC_RecordChild0, // #0 = $src2
/*  7395*/      OPC_MoveChild1,
/*  7396*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  7399*/      OPC_RecordMemRef,
/*  7400*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  7401*/      OPC_CheckFoldableChainNode,
/*  7402*/      OPC_RecordChild1, // #2 = $src
/*  7403*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  7405*/      OPC_CheckPredicate, 1, // Predicate_load
/*  7407*/      OPC_MoveParent,
/*  7408*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->7425
/*  7411*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  7414*/        OPC_EmitMergeInputChains1_1,
/*  7415*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (adde:{ *:[i8] } GR8:{ *:[i8] }:$src2, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADDC8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  7425*/      /*SwitchType*/ 14, MVT::i16,// ->7441
/*  7427*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  7430*/        OPC_EmitMergeInputChains1_1,
/*  7431*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (adde:{ *:[i16] } GR16:{ *:[i16] }:$src2, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADDC16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  7441*/      0, // EndSwitchType
/*  7442*/    /*Scope*/ 48, /*->7491*/
/*  7443*/      OPC_MoveChild0,
/*  7444*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  7447*/      OPC_RecordMemRef,
/*  7448*/      OPC_RecordNode, // #0 = 'ld' chained node
/*  7449*/      OPC_CheckFoldableChainNode,
/*  7450*/      OPC_RecordChild1, // #1 = $src
/*  7451*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  7453*/      OPC_CheckPredicate, 1, // Predicate_load
/*  7455*/      OPC_MoveParent,
/*  7456*/      OPC_RecordChild1, // #2 = $src2
/*  7457*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->7474
/*  7460*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  7463*/        OPC_EmitMergeInputChains1_0,
/*  7464*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (adde:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$src2) - Complexity = 16
                  // Dst: (ADDC8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  7474*/      /*SwitchType*/ 14, MVT::i16,// ->7490
/*  7476*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  7479*/        OPC_EmitMergeInputChains1_0,
/*  7480*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (adde:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$src2) - Complexity = 16
                  // Dst: (ADDC16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  7490*/      0, // EndSwitchType
/*  7491*/    /*Scope*/ 99, /*->7591*/
/*  7492*/      OPC_RecordChild0, // #0 = $src2
/*  7493*/      OPC_RecordChild1, // #1 = $imm
/*  7494*/      OPC_Scope, 70, /*->7566*/ // 3 children in Scope
/*  7496*/        OPC_MoveChild1,
/*  7497*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  7500*/        OPC_Scope, 16, /*->7518*/ // 3 children in Scope
/*  7502*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  7504*/          OPC_MoveParent,
/*  7505*/          OPC_CheckType, MVT::i8,
/*  7507*/          OPC_EmitConvertToTarget, 1,
/*  7509*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC8rc), 0|OPFL_GlueInput|OPFL_GlueOutput,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (adde:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                    // Dst: (ADDC8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  7518*/        /*Scope*/ 16, /*->7535*/
/*  7519*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  7521*/          OPC_MoveParent,
/*  7522*/          OPC_CheckType, MVT::i16,
/*  7524*/          OPC_EmitConvertToTarget, 1,
/*  7526*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC16rc), 0|OPFL_GlueInput|OPFL_GlueOutput,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (adde:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                    // Dst: (ADDC16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  7535*/        /*Scope*/ 29, /*->7565*/
/*  7536*/          OPC_MoveParent,
/*  7537*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->7551
/*  7540*/            OPC_EmitConvertToTarget, 1,
/*  7542*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC8ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                          MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (adde:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (ADDC8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  7551*/          /*SwitchType*/ 11, MVT::i16,// ->7564
/*  7553*/            OPC_EmitConvertToTarget, 1,
/*  7555*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC16ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                          MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (adde:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (ADDC16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  7564*/          0, // EndSwitchType
/*  7565*/        0, /*End of Scope*/
/*  7566*/      /*Scope*/ 11, /*->7578*/
/*  7567*/        OPC_CheckType, MVT::i8,
/*  7569*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC8rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (adde:{ *:[i8] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (ADDC8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  7578*/      /*Scope*/ 11, /*->7590*/
/*  7579*/        OPC_CheckType, MVT::i16,
/*  7581*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADDC16rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (adde:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (ADDC16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  7590*/      0, /*End of Scope*/
/*  7591*/    0, /*End of Scope*/
/*  7592*/  /*SwitchOpcode*/ 72|128,1/*200*/, TARGET_VAL(ISD::OR),// ->7796
/*  7596*/    OPC_Scope, 48, /*->7646*/ // 3 children in Scope
/*  7598*/      OPC_RecordChild0, // #0 = $src2
/*  7599*/      OPC_MoveChild1,
/*  7600*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  7603*/      OPC_RecordMemRef,
/*  7604*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  7605*/      OPC_CheckFoldableChainNode,
/*  7606*/      OPC_RecordChild1, // #2 = $src
/*  7607*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  7609*/      OPC_CheckPredicate, 1, // Predicate_load
/*  7611*/      OPC_MoveParent,
/*  7612*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->7629
/*  7615*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  7618*/        OPC_EmitMergeInputChains1_1,
/*  7619*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (or:{ *:[i8] } GR8:{ *:[i8] }:$src2, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (BIS8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  7629*/      /*SwitchType*/ 14, MVT::i16,// ->7645
/*  7631*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  7634*/        OPC_EmitMergeInputChains1_1,
/*  7635*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (or:{ *:[i16] } GR16:{ *:[i16] }:$src2, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (BIS16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  7645*/      0, // EndSwitchType
/*  7646*/    /*Scope*/ 48, /*->7695*/
/*  7647*/      OPC_MoveChild0,
/*  7648*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  7651*/      OPC_RecordMemRef,
/*  7652*/      OPC_RecordNode, // #0 = 'ld' chained node
/*  7653*/      OPC_CheckFoldableChainNode,
/*  7654*/      OPC_RecordChild1, // #1 = $src
/*  7655*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  7657*/      OPC_CheckPredicate, 1, // Predicate_load
/*  7659*/      OPC_MoveParent,
/*  7660*/      OPC_RecordChild1, // #2 = $src2
/*  7661*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->7678
/*  7664*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  7667*/        OPC_EmitMergeInputChains1_0,
/*  7668*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (or:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$src2) - Complexity = 16
                  // Dst: (BIS8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  7678*/      /*SwitchType*/ 14, MVT::i16,// ->7694
/*  7680*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  7683*/        OPC_EmitMergeInputChains1_0,
/*  7684*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (or:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$src2) - Complexity = 16
                  // Dst: (BIS16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  7694*/      0, // EndSwitchType
/*  7695*/    /*Scope*/ 99, /*->7795*/
/*  7696*/      OPC_RecordChild0, // #0 = $src2
/*  7697*/      OPC_RecordChild1, // #1 = $imm
/*  7698*/      OPC_Scope, 70, /*->7770*/ // 3 children in Scope
/*  7700*/        OPC_MoveChild1,
/*  7701*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  7704*/        OPC_Scope, 16, /*->7722*/ // 3 children in Scope
/*  7706*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  7708*/          OPC_MoveParent,
/*  7709*/          OPC_CheckType, MVT::i8,
/*  7711*/          OPC_EmitConvertToTarget, 1,
/*  7713*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS8rc), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                    // Dst: (BIS8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  7722*/        /*Scope*/ 16, /*->7739*/
/*  7723*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  7725*/          OPC_MoveParent,
/*  7726*/          OPC_CheckType, MVT::i16,
/*  7728*/          OPC_EmitConvertToTarget, 1,
/*  7730*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS16rc), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                    // Dst: (BIS16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  7739*/        /*Scope*/ 29, /*->7769*/
/*  7740*/          OPC_MoveParent,
/*  7741*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->7755
/*  7744*/            OPC_EmitConvertToTarget, 1,
/*  7746*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS8ri), 0,
                          MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (or:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (BIS8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  7755*/          /*SwitchType*/ 11, MVT::i16,// ->7768
/*  7757*/            OPC_EmitConvertToTarget, 1,
/*  7759*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS16ri), 0,
                          MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (or:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (BIS16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  7768*/          0, // EndSwitchType
/*  7769*/        0, /*End of Scope*/
/*  7770*/      /*Scope*/ 11, /*->7782*/
/*  7771*/        OPC_CheckType, MVT::i8,
/*  7773*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i8] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (BIS8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  7782*/      /*Scope*/ 11, /*->7794*/
/*  7783*/        OPC_CheckType, MVT::i16,
/*  7785*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIS16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (BIS16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  7794*/      0, /*End of Scope*/
/*  7795*/    0, /*End of Scope*/
/*  7796*/  /*SwitchOpcode*/ 72|128,1/*200*/, TARGET_VAL(ISD::XOR),// ->8000
/*  7800*/    OPC_Scope, 48, /*->7850*/ // 3 children in Scope
/*  7802*/      OPC_RecordChild0, // #0 = $src2
/*  7803*/      OPC_MoveChild1,
/*  7804*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  7807*/      OPC_RecordMemRef,
/*  7808*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  7809*/      OPC_CheckFoldableChainNode,
/*  7810*/      OPC_RecordChild1, // #2 = $src
/*  7811*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  7813*/      OPC_CheckPredicate, 1, // Predicate_load
/*  7815*/      OPC_MoveParent,
/*  7816*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->7833
/*  7819*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  7822*/        OPC_EmitMergeInputChains1_1,
/*  7823*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (xor:{ *:[i8] } GR8:{ *:[i8] }:$src2, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (XOR8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  7833*/      /*SwitchType*/ 14, MVT::i16,// ->7849
/*  7835*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  7838*/        OPC_EmitMergeInputChains1_1,
/*  7839*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (xor:{ *:[i16] } GR16:{ *:[i16] }:$src2, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (XOR16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  7849*/      0, // EndSwitchType
/*  7850*/    /*Scope*/ 48, /*->7899*/
/*  7851*/      OPC_MoveChild0,
/*  7852*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  7855*/      OPC_RecordMemRef,
/*  7856*/      OPC_RecordNode, // #0 = 'ld' chained node
/*  7857*/      OPC_CheckFoldableChainNode,
/*  7858*/      OPC_RecordChild1, // #1 = $src
/*  7859*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  7861*/      OPC_CheckPredicate, 1, // Predicate_load
/*  7863*/      OPC_MoveParent,
/*  7864*/      OPC_RecordChild1, // #2 = $src2
/*  7865*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->7882
/*  7868*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  7871*/        OPC_EmitMergeInputChains1_0,
/*  7872*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (xor:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$src2) - Complexity = 16
                  // Dst: (XOR8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  7882*/      /*SwitchType*/ 14, MVT::i16,// ->7898
/*  7884*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*  7887*/        OPC_EmitMergeInputChains1_0,
/*  7888*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (xor:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$src2) - Complexity = 16
                  // Dst: (XOR16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  7898*/      0, // EndSwitchType
/*  7899*/    /*Scope*/ 99, /*->7999*/
/*  7900*/      OPC_RecordChild0, // #0 = $src2
/*  7901*/      OPC_RecordChild1, // #1 = $imm
/*  7902*/      OPC_Scope, 70, /*->7974*/ // 3 children in Scope
/*  7904*/        OPC_MoveChild1,
/*  7905*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  7908*/        OPC_Scope, 16, /*->7926*/ // 3 children in Scope
/*  7910*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  7912*/          OPC_MoveParent,
/*  7913*/          OPC_CheckType, MVT::i8,
/*  7915*/          OPC_EmitConvertToTarget, 1,
/*  7917*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8rc), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (xor:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                    // Dst: (XOR8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  7926*/        /*Scope*/ 16, /*->7943*/
/*  7927*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  7929*/          OPC_MoveParent,
/*  7930*/          OPC_CheckType, MVT::i16,
/*  7932*/          OPC_EmitConvertToTarget, 1,
/*  7934*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16rc), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (xor:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                    // Dst: (XOR16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  7943*/        /*Scope*/ 29, /*->7973*/
/*  7944*/          OPC_MoveParent,
/*  7945*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->7959
/*  7948*/            OPC_EmitConvertToTarget, 1,
/*  7950*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8ri), 0,
                          MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (XOR8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  7959*/          /*SwitchType*/ 11, MVT::i16,// ->7972
/*  7961*/            OPC_EmitConvertToTarget, 1,
/*  7963*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16ri), 0,
                          MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (xor:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (XOR16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  7972*/          0, // EndSwitchType
/*  7973*/        0, /*End of Scope*/
/*  7974*/      /*Scope*/ 11, /*->7986*/
/*  7975*/        OPC_CheckType, MVT::i8,
/*  7977*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:{ *:[i8] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (XOR8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  7986*/      /*Scope*/ 11, /*->7998*/
/*  7987*/        OPC_CheckType, MVT::i16,
/*  7989*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (XOR16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  7998*/      0, /*End of Scope*/
/*  7999*/    0, /*End of Scope*/
/*  8000*/  /*SwitchOpcode*/ 22|128,1/*150*/, TARGET_VAL(ISD::SUB),// ->8154
/*  8004*/    OPC_RecordChild0, // #0 = $src2
/*  8005*/    OPC_Scope, 47, /*->8054*/ // 2 children in Scope
/*  8007*/      OPC_MoveChild1,
/*  8008*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  8011*/      OPC_RecordMemRef,
/*  8012*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  8013*/      OPC_CheckFoldableChainNode,
/*  8014*/      OPC_RecordChild1, // #2 = $src
/*  8015*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  8017*/      OPC_CheckPredicate, 1, // Predicate_load
/*  8019*/      OPC_MoveParent,
/*  8020*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->8037
/*  8023*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  8026*/        OPC_EmitMergeInputChains1_1,
/*  8027*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (sub:{ *:[i8] } GR8:{ *:[i8] }:$src2, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUB8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  8037*/      /*SwitchType*/ 14, MVT::i16,// ->8053
/*  8039*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  8042*/        OPC_EmitMergeInputChains1_1,
/*  8043*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (sub:{ *:[i16] } GR16:{ *:[i16] }:$src2, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUB16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  8053*/      0, // EndSwitchType
/*  8054*/    /*Scope*/ 98, /*->8153*/
/*  8055*/      OPC_RecordChild1, // #1 = $imm
/*  8056*/      OPC_Scope, 70, /*->8128*/ // 3 children in Scope
/*  8058*/        OPC_MoveChild1,
/*  8059*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  8062*/        OPC_Scope, 16, /*->8080*/ // 3 children in Scope
/*  8064*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  8066*/          OPC_MoveParent,
/*  8067*/          OPC_CheckType, MVT::i8,
/*  8069*/          OPC_EmitConvertToTarget, 1,
/*  8071*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rc), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                    // Dst: (SUB8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  8080*/        /*Scope*/ 16, /*->8097*/
/*  8081*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  8083*/          OPC_MoveParent,
/*  8084*/          OPC_CheckType, MVT::i16,
/*  8086*/          OPC_EmitConvertToTarget, 1,
/*  8088*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rc), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                    // Dst: (SUB16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  8097*/        /*Scope*/ 29, /*->8127*/
/*  8098*/          OPC_MoveParent,
/*  8099*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->8113
/*  8102*/            OPC_EmitConvertToTarget, 1,
/*  8104*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8ri), 0,
                          MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (sub:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (SUB8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  8113*/          /*SwitchType*/ 11, MVT::i16,// ->8126
/*  8115*/            OPC_EmitConvertToTarget, 1,
/*  8117*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16ri), 0,
                          MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (sub:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (SUB16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  8126*/          0, // EndSwitchType
/*  8127*/        0, /*End of Scope*/
/*  8128*/      /*Scope*/ 11, /*->8140*/
/*  8129*/        OPC_CheckType, MVT::i8,
/*  8131*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i8] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (SUB8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  8140*/      /*Scope*/ 11, /*->8152*/
/*  8141*/        OPC_CheckType, MVT::i16,
/*  8143*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (SUB16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  8152*/      0, /*End of Scope*/
/*  8153*/    0, /*End of Scope*/
/*  8154*/  /*SwitchOpcode*/ 23|128,1/*151*/, TARGET_VAL(ISD::SUBE),// ->8309
/*  8158*/    OPC_CaptureGlueInput,
/*  8159*/    OPC_RecordChild0, // #0 = $src2
/*  8160*/    OPC_Scope, 47, /*->8209*/ // 2 children in Scope
/*  8162*/      OPC_MoveChild1,
/*  8163*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  8166*/      OPC_RecordMemRef,
/*  8167*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  8168*/      OPC_CheckFoldableChainNode,
/*  8169*/      OPC_RecordChild1, // #2 = $src
/*  8170*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  8172*/      OPC_CheckPredicate, 1, // Predicate_load
/*  8174*/      OPC_MoveParent,
/*  8175*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->8192
/*  8178*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  8181*/        OPC_EmitMergeInputChains1_1,
/*  8182*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUBC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (sube:{ *:[i8] } GR8:{ *:[i8] }:$src2, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUBC8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  8192*/      /*SwitchType*/ 14, MVT::i16,// ->8208
/*  8194*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  8197*/        OPC_EmitMergeInputChains1_1,
/*  8198*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUBC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (sube:{ *:[i16] } GR16:{ *:[i16] }:$src2, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUBC16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  8208*/      0, // EndSwitchType
/*  8209*/    /*Scope*/ 98, /*->8308*/
/*  8210*/      OPC_RecordChild1, // #1 = $imm
/*  8211*/      OPC_Scope, 70, /*->8283*/ // 3 children in Scope
/*  8213*/        OPC_MoveChild1,
/*  8214*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  8217*/        OPC_Scope, 16, /*->8235*/ // 3 children in Scope
/*  8219*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  8221*/          OPC_MoveParent,
/*  8222*/          OPC_CheckType, MVT::i8,
/*  8224*/          OPC_EmitConvertToTarget, 1,
/*  8226*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUBC8rc), 0|OPFL_GlueInput|OPFL_GlueOutput,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (sube:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                    // Dst: (SUBC8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  8235*/        /*Scope*/ 16, /*->8252*/
/*  8236*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  8238*/          OPC_MoveParent,
/*  8239*/          OPC_CheckType, MVT::i16,
/*  8241*/          OPC_EmitConvertToTarget, 1,
/*  8243*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUBC16rc), 0|OPFL_GlueInput|OPFL_GlueOutput,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (sube:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                    // Dst: (SUBC16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  8252*/        /*Scope*/ 29, /*->8282*/
/*  8253*/          OPC_MoveParent,
/*  8254*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->8268
/*  8257*/            OPC_EmitConvertToTarget, 1,
/*  8259*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUBC8ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                          MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (sube:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (SUBC8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  8268*/          /*SwitchType*/ 11, MVT::i16,// ->8281
/*  8270*/            OPC_EmitConvertToTarget, 1,
/*  8272*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUBC16ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                          MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (sube:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (SUBC16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  8281*/          0, // EndSwitchType
/*  8282*/        0, /*End of Scope*/
/*  8283*/      /*Scope*/ 11, /*->8295*/
/*  8284*/        OPC_CheckType, MVT::i8,
/*  8286*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUBC8rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sube:{ *:[i8] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (SUBC8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  8295*/      /*Scope*/ 11, /*->8307*/
/*  8296*/        OPC_CheckType, MVT::i16,
/*  8298*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUBC16rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sube:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (SUBC16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  8307*/      0, /*End of Scope*/
/*  8308*/    0, /*End of Scope*/
/*  8309*/  /*SwitchOpcode*/ 22|128,1/*150*/, TARGET_VAL(MSP430ISD::DADD),// ->8463
/*  8313*/    OPC_RecordChild0, // #0 = $src2
/*  8314*/    OPC_Scope, 47, /*->8363*/ // 2 children in Scope
/*  8316*/      OPC_MoveChild1,
/*  8317*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  8320*/      OPC_RecordMemRef,
/*  8321*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  8322*/      OPC_CheckFoldableChainNode,
/*  8323*/      OPC_RecordChild1, // #2 = $src
/*  8324*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  8326*/      OPC_CheckPredicate, 1, // Predicate_load
/*  8328*/      OPC_MoveParent,
/*  8329*/      OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->8346
/*  8332*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  8335*/        OPC_EmitMergeInputChains1_1,
/*  8336*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::DADD8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (MSP430dadd:{ *:[i8] } GR8:{ *:[i8] }:$src2, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (DADD8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, addr:{ *:[i16] }:$src)
/*  8346*/      /*SwitchType*/ 14, MVT::i16,// ->8362
/*  8348*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*  8351*/        OPC_EmitMergeInputChains1_1,
/*  8352*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::DADD16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (MSP430dadd:{ *:[i16] } GR16:{ *:[i16] }:$src2, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (DADD16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, addr:{ *:[i16] }:$src)
/*  8362*/      0, // EndSwitchType
/*  8363*/    /*Scope*/ 98, /*->8462*/
/*  8364*/      OPC_RecordChild1, // #1 = $imm
/*  8365*/      OPC_Scope, 70, /*->8437*/ // 3 children in Scope
/*  8367*/        OPC_MoveChild1,
/*  8368*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  8371*/        OPC_Scope, 16, /*->8389*/ // 3 children in Scope
/*  8373*/          OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  8375*/          OPC_MoveParent,
/*  8376*/          OPC_CheckType, MVT::i8,
/*  8378*/          OPC_EmitConvertToTarget, 1,
/*  8380*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::DADD8rc), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (MSP430dadd:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm) - Complexity = 7
                    // Dst: (DADD8rc:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  8389*/        /*Scope*/ 16, /*->8406*/
/*  8390*/          OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  8392*/          OPC_MoveParent,
/*  8393*/          OPC_CheckType, MVT::i16,
/*  8395*/          OPC_EmitConvertToTarget, 1,
/*  8397*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::DADD16rc), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (MSP430dadd:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm) - Complexity = 7
                    // Dst: (DADD16rc:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  8406*/        /*Scope*/ 29, /*->8436*/
/*  8407*/          OPC_MoveParent,
/*  8408*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->8422
/*  8411*/            OPC_EmitConvertToTarget, 1,
/*  8413*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::DADD8ri), 0,
                          MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430dadd:{ *:[i8] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm) - Complexity = 6
                      // Dst: (DADD8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$imm)
/*  8422*/          /*SwitchType*/ 11, MVT::i16,// ->8435
/*  8424*/            OPC_EmitConvertToTarget, 1,
/*  8426*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::DADD16ri), 0,
                          MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430dadd:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm) - Complexity = 6
                      // Dst: (DADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, (imm:{ *:[i16] }):$imm)
/*  8435*/          0, // EndSwitchType
/*  8436*/        0, /*End of Scope*/
/*  8437*/      /*Scope*/ 11, /*->8449*/
/*  8438*/        OPC_CheckType, MVT::i8,
/*  8440*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::DADD8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (MSP430dadd:{ *:[i8] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (DADD8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src2, GR8:{ *:[i8] }:$rs)
/*  8449*/      /*Scope*/ 11, /*->8461*/
/*  8450*/        OPC_CheckType, MVT::i16,
/*  8452*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::DADD16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (MSP430dadd:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs) - Complexity = 3
                  // Dst: (DADD16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src2, GR16:{ *:[i16] }:$rs)
/*  8461*/      0, /*End of Scope*/
/*  8462*/    0, /*End of Scope*/
/*  8463*/  /*SwitchOpcode*/ 35|128,1/*163*/, TARGET_VAL(ISD::ADDC),// ->8630
/*  8467*/    OPC_Scope, 48, /*->8517*/ // 3 children in Scope
/*  8469*/      OPC_RecordChild0, // #0 = $src
/*  8470*/      OPC_MoveChild1,
/*  8471*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  8474*/      OPC_RecordMemRef,
/*  8475*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  8476*/      OPC_CheckFoldableChainNode,
/*  8477*/      OPC_RecordChild1, // #2 = $src2
/*  8478*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  8480*/      OPC_CheckPredicate, 1, // Predicate_load
/*  8482*/      OPC_MoveParent,
/*  8483*/      OPC_SwitchType /*2 cases */, 14, MVT::i16,// ->8500
/*  8486*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*  8489*/        OPC_EmitMergeInputChains1_1,
/*  8490*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (addc:{ *:[i16] } GR16:{ *:[i16] }:$src, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADD16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, addr:{ *:[i16] }:$src2)
/*  8500*/      /*SwitchType*/ 14, MVT::i8,// ->8516
/*  8502*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*  8505*/        OPC_EmitMergeInputChains1_1,
/*  8506*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (addc:{ *:[i8] } GR8:{ *:[i8] }:$src, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADD8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, addr:{ *:[i16] }:$src2)
/*  8516*/      0, // EndSwitchType
/*  8517*/    /*Scope*/ 48, /*->8566*/
/*  8518*/      OPC_MoveChild0,
/*  8519*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  8522*/      OPC_RecordMemRef,
/*  8523*/      OPC_RecordNode, // #0 = 'ld' chained node
/*  8524*/      OPC_CheckFoldableChainNode,
/*  8525*/      OPC_RecordChild1, // #1 = $src2
/*  8526*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  8528*/      OPC_CheckPredicate, 1, // Predicate_load
/*  8530*/      OPC_MoveParent,
/*  8531*/      OPC_RecordChild1, // #2 = $src
/*  8532*/      OPC_SwitchType /*2 cases */, 14, MVT::i16,// ->8549
/*  8535*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*  8538*/        OPC_EmitMergeInputChains1_0,
/*  8539*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (addc:{ *:[i16] } (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:{ *:[i16] }:$src) - Complexity = 16
                  // Dst: (ADD16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, addr:{ *:[i16] }:$src2)
/*  8549*/      /*SwitchType*/ 14, MVT::i8,// ->8565
/*  8551*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*  8554*/        OPC_EmitMergeInputChains1_0,
/*  8555*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (addc:{ *:[i8] } (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:{ *:[i8] }:$src) - Complexity = 16
                  // Dst: (ADD8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, addr:{ *:[i16] }:$src2)
/*  8565*/      0, // EndSwitchType
/*  8566*/    /*Scope*/ 62, /*->8629*/
/*  8567*/      OPC_RecordChild0, // #0 = $src
/*  8568*/      OPC_RecordChild1, // #1 = $src2
/*  8569*/      OPC_Scope, 33, /*->8604*/ // 3 children in Scope
/*  8571*/        OPC_MoveChild1,
/*  8572*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  8575*/        OPC_MoveParent,
/*  8576*/        OPC_SwitchType /*2 cases */, 11, MVT::i16,// ->8590
/*  8579*/          OPC_EmitConvertToTarget, 1,
/*  8581*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0|OPFL_GlueOutput,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (addc:{ *:[i16] } GR16:{ *:[i16] }:$src, (imm:{ *:[i16] }):$src2) - Complexity = 6
                    // Dst: (ADD16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, (imm:{ *:[i16] }):$src2)
/*  8590*/        /*SwitchType*/ 11, MVT::i8,// ->8603
/*  8592*/          OPC_EmitConvertToTarget, 1,
/*  8594*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8ri), 0|OPFL_GlueOutput,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (addc:{ *:[i8] } GR8:{ *:[i8] }:$src, (imm:{ *:[i8] }):$src2) - Complexity = 6
                    // Dst: (ADD8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, (imm:{ *:[i8] }):$src2)
/*  8603*/        0, // EndSwitchType
/*  8604*/      /*Scope*/ 11, /*->8616*/
/*  8605*/        OPC_CheckType, MVT::i16,
/*  8607*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rr), 0|OPFL_GlueOutput,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (addc:{ *:[i16] } GR16:{ *:[i16] }:$src, GR16:{ *:[i16] }:$src2) - Complexity = 3
                  // Dst: (ADD16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, GR16:{ *:[i16] }:$src2)
/*  8616*/      /*Scope*/ 11, /*->8628*/
/*  8617*/        OPC_CheckType, MVT::i8,
/*  8619*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rr), 0|OPFL_GlueOutput,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (addc:{ *:[i8] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$src2) - Complexity = 3
                  // Dst: (ADD8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$src2)
/*  8628*/      0, /*End of Scope*/
/*  8629*/    0, /*End of Scope*/
/*  8630*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::SUBC),// ->8746
/*  8633*/    OPC_RecordChild0, // #0 = $src
/*  8634*/    OPC_Scope, 47, /*->8683*/ // 2 children in Scope
/*  8636*/      OPC_MoveChild1,
/*  8637*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*  8640*/      OPC_RecordMemRef,
/*  8641*/      OPC_RecordNode, // #1 = 'ld' chained node
/*  8642*/      OPC_CheckFoldableChainNode,
/*  8643*/      OPC_RecordChild1, // #2 = $src2
/*  8644*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  8646*/      OPC_CheckPredicate, 1, // Predicate_load
/*  8648*/      OPC_MoveParent,
/*  8649*/      OPC_SwitchType /*2 cases */, 14, MVT::i16,// ->8666
/*  8652*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*  8655*/        OPC_EmitMergeInputChains1_1,
/*  8656*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (subc:{ *:[i16] } GR16:{ *:[i16] }:$src, (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUB16rm:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, addr:{ *:[i16] }:$src2)
/*  8666*/      /*SwitchType*/ 14, MVT::i8,// ->8682
/*  8668*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*  8671*/        OPC_EmitMergeInputChains1_1,
/*  8672*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (subc:{ *:[i8] } GR8:{ *:[i8] }:$src, (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUB8rm:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, addr:{ *:[i16] }:$src2)
/*  8682*/      0, // EndSwitchType
/*  8683*/    /*Scope*/ 61, /*->8745*/
/*  8684*/      OPC_RecordChild1, // #1 = $src2
/*  8685*/      OPC_Scope, 33, /*->8720*/ // 3 children in Scope
/*  8687*/        OPC_MoveChild1,
/*  8688*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  8691*/        OPC_MoveParent,
/*  8692*/        OPC_SwitchType /*2 cases */, 11, MVT::i16,// ->8706
/*  8695*/          OPC_EmitConvertToTarget, 1,
/*  8697*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16ri), 0|OPFL_GlueOutput,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (subc:{ *:[i16] } GR16:{ *:[i16] }:$src, (imm:{ *:[i16] }):$src2) - Complexity = 6
                    // Dst: (SUB16ri:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, (imm:{ *:[i16] }):$src2)
/*  8706*/        /*SwitchType*/ 11, MVT::i8,// ->8719
/*  8708*/          OPC_EmitConvertToTarget, 1,
/*  8710*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8ri), 0|OPFL_GlueOutput,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (subc:{ *:[i8] } GR8:{ *:[i8] }:$src, (imm:{ *:[i8] }):$src2) - Complexity = 6
                    // Dst: (SUB8ri:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, (imm:{ *:[i8] }):$src2)
/*  8719*/        0, // EndSwitchType
/*  8720*/      /*Scope*/ 11, /*->8732*/
/*  8721*/        OPC_CheckType, MVT::i16,
/*  8723*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rr), 0|OPFL_GlueOutput,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (subc:{ *:[i16] } GR16:{ *:[i16] }:$src, GR16:{ *:[i16] }:$src2) - Complexity = 3
                  // Dst: (SUB16rr:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, GR16:{ *:[i16] }:$src2)
/*  8732*/      /*Scope*/ 11, /*->8744*/
/*  8733*/        OPC_CheckType, MVT::i8,
/*  8735*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rr), 0|OPFL_GlueOutput,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (subc:{ *:[i8] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$src2) - Complexity = 3
                  // Dst: (SUB8rr:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$src2)
/*  8744*/      0, /*End of Scope*/
/*  8745*/    0, /*End of Scope*/
/*  8746*/  /*SwitchOpcode*/ 102, TARGET_VAL(ISD::LOAD),// ->8851
/*  8749*/    OPC_RecordMemRef,
/*  8750*/    OPC_RecordNode, // #0 = 'ld' chained node
/*  8751*/    OPC_RecordChild1, // #1 = $src
/*  8752*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*  8754*/    OPC_Scope, 56, /*->8812*/ // 3 children in Scope
/*  8756*/      OPC_CheckPredicate, 1, // Predicate_load
/*  8758*/      OPC_SwitchType /*2 cases */, 24, MVT::i8,// ->8785
/*  8761*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*  8764*/        OPC_EmitMergeInputChains1_0,
/*  8765*/        OPC_Scope, 8, /*->8775*/ // 2 children in Scope
/*  8767*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV8rm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i8, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i8] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (MOV8rm:{ *:[i8] } addr:{ *:[i16] }:$src)
/*  8775*/        /*Scope*/ 8, /*->8784*/
/*  8776*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV8rn), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i8, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i8] } addr:{ *:[iPTR] }:$rs)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (MOV8rn:{ *:[i8] } addr:{ *:[i16] }:$rs)
/*  8784*/        0, /*End of Scope*/
/*  8785*/      /*SwitchType*/ 24, MVT::i16,// ->8811
/*  8787*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*  8790*/        OPC_EmitMergeInputChains1_0,
/*  8791*/        OPC_Scope, 8, /*->8801*/ // 2 children in Scope
/*  8793*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16rm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i16, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (MOV16rm:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  8801*/        /*Scope*/ 8, /*->8810*/
/*  8802*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16rn), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i16, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i16] } addr:{ *:[iPTR] }:$rs)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (MOV16rn:{ *:[i16] } addr:{ *:[i16] }:$rs)
/*  8810*/        0, /*End of Scope*/
/*  8811*/      0, // EndSwitchType
/*  8812*/    /*Scope*/ 18, /*->8831*/
/*  8813*/      OPC_CheckPredicate, 9, // Predicate_zextload
/*  8815*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*  8817*/      OPC_CheckType, MVT::i16,
/*  8819*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*  8822*/      OPC_EmitMergeInputChains1_0,
/*  8823*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOVZX16rm8), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i16, 2/*#Ops*/, 2, 3, 
                // Src: (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (MOVZX16rm8:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  8831*/    /*Scope*/ 18, /*->8850*/
/*  8832*/      OPC_CheckPredicate, 6, // Predicate_extload
/*  8834*/      OPC_CheckPredicate, 7, // Predicate_extloadi8
/*  8836*/      OPC_CheckType, MVT::i16,
/*  8838*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*  8841*/      OPC_EmitMergeInputChains1_0,
/*  8842*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOVZX16rm8), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i16, 2/*#Ops*/, 2, 3, 
                // Src: (ld:{ *:[i16] } addr:{ *:[iPTR] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (MOVZX16rm8:{ *:[i16] } addr:{ *:[i16] }:$src)
/*  8850*/    0, /*End of Scope*/
/*  8851*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_START),// ->8876
/*  8854*/    OPC_RecordNode, // #0 = 'MSP430callseq_start' chained node
/*  8855*/    OPC_RecordChild1, // #1 = $amt1
/*  8856*/    OPC_MoveChild1,
/*  8857*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  8860*/    OPC_MoveParent,
/*  8861*/    OPC_RecordChild2, // #2 = $amt2
/*  8862*/    OPC_MoveChild2,
/*  8863*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  8866*/    OPC_MoveParent,
/*  8867*/    OPC_EmitMergeInputChains1_0,
/*  8868*/    OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i16, 2/*#Ops*/, 1, 2, 
              // Src: (MSP430callseq_start (timm:{ *:[i16] }):$amt1, (timm:{ *:[i16] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:{ *:[i16] } (timm:{ *:[i16] }):$amt1, (timm:{ *:[i16] }):$amt2)
/*  8876*/  /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->8902
/*  8879*/    OPC_RecordNode, // #0 = 'MSP430callseq_end' chained node
/*  8880*/    OPC_CaptureGlueInput,
/*  8881*/    OPC_RecordChild1, // #1 = $amt1
/*  8882*/    OPC_MoveChild1,
/*  8883*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  8886*/    OPC_MoveParent,
/*  8887*/    OPC_RecordChild2, // #2 = $amt2
/*  8888*/    OPC_MoveChild2,
/*  8889*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  8892*/    OPC_MoveParent,
/*  8893*/    OPC_EmitMergeInputChains1_0,
/*  8894*/    OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i16, 2/*#Ops*/, 1, 2, 
              // Src: (MSP430callseq_end (timm:{ *:[i16] }):$amt1, (timm:{ *:[i16] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:{ *:[i16] } (timm:{ *:[i16] }):$amt1, (timm:{ *:[i16] }):$amt2)
/*  8902*/  /*SwitchOpcode*/ 24, TARGET_VAL(MSP430ISD::BR_CC),// ->8929
/*  8905*/    OPC_RecordNode, // #0 = 'MSP430brcc' chained node
/*  8906*/    OPC_CaptureGlueInput,
/*  8907*/    OPC_RecordChild1, // #1 = $dst
/*  8908*/    OPC_MoveChild1,
/*  8909*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  8912*/    OPC_MoveParent,
/*  8913*/    OPC_RecordChild2, // #2 = $cond
/*  8914*/    OPC_MoveChild2,
/*  8915*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  8918*/    OPC_MoveParent,
/*  8919*/    OPC_EmitMergeInputChains1_0,
/*  8920*/    OPC_EmitConvertToTarget, 2,
/*  8922*/    OPC_MorphNodeTo0, TARGET_VAL(MSP430::JCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (MSP430brcc (bb:{ *:[Other] }):$dst, (imm:{ *:[i8] }):$cond) - Complexity = 6
              // Dst: (JCC (bb:{ *:[Other] }):$dst, (imm:{ *:[i8] }):$cond)
/*  8929*/  /*SwitchOpcode*/ 48, TARGET_VAL(ISD::ZERO_EXTEND),// ->8980
/*  8932*/    OPC_Scope, 13, /*->8947*/ // 2 children in Scope
/*  8934*/      OPC_MoveChild0,
/*  8935*/      OPC_CheckOpcode, TARGET_VAL(ISD::TRUNCATE),
/*  8938*/      OPC_RecordChild0, // #0 = $rs
/*  8939*/      OPC_MoveParent,
/*  8940*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::ZEXT16r), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (zext:{ *:[i16] } (trunc:{ *:[i8] } GR16:{ *:[i16] }:$rs)) - Complexity = 6
                // Dst: (ZEXT16r:{ *:[i16] } GR16:{ *:[i16] }:$rs)
/*  8947*/    /*Scope*/ 31, /*->8979*/
/*  8948*/      OPC_RecordChild0, // #0 = $src
/*  8949*/      OPC_Scope, 19, /*->8970*/ // 2 children in Scope
/*  8951*/        OPC_MoveChild0,
/*  8952*/        OPC_CheckPredicate, 10, // Predicate_def8
/*  8954*/        OPC_MoveParent,
/*  8955*/        OPC_EmitInteger, MVT::i16, 0, 
/*  8958*/        OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*  8961*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0,
                      MVT::i16, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (zext:{ *:[i16] } GR8:{ *:[i8] }<<P:Predicate_def8>>:$src) - Complexity = 4
                  // Dst: (SUBREG_TO_REG:{ *:[i16] } 0:{ *:[i16] }, GR8:{ *:[i8] }:$src, subreg_8bit:{ *:[i32] })
/*  8970*/      /*Scope*/ 7, /*->8978*/
/*  8971*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOVZX16rr8), 0,
                      MVT::i16, 1/*#Ops*/, 0, 
                  // Src: (zext:{ *:[i16] } GR8:{ *:[i8] }:$rs) - Complexity = 3
                  // Dst: (MOVZX16rr8:{ *:[i16] } GR8:{ *:[i8] }:$rs)
/*  8978*/      0, /*End of Scope*/
/*  8979*/    0, /*End of Scope*/
/*  8980*/  /*SwitchOpcode*/ 43, TARGET_VAL(MSP430ISD::Wrapper),// ->9026
/*  8983*/    OPC_RecordChild0, // #0 = $dst
/*  8984*/    OPC_MoveChild0,
/*  8985*/    OPC_SwitchOpcode /*3 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->8999
/*  8989*/      OPC_MoveParent,
/*  8990*/      OPC_CheckType, MVT::i16,
/*  8992*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16ri), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430Wrapper:{ *:[i16] } (tglobaladdr:{ *:[i16] }):$dst) - Complexity = 6
                // Dst: (MOV16ri:{ *:[i16] } (tglobaladdr:{ *:[i16] }):$dst)
/*  8999*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->9012
/*  9002*/      OPC_MoveParent,
/*  9003*/      OPC_CheckType, MVT::i16,
/*  9005*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16ri), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430Wrapper:{ *:[i16] } (texternalsym:{ *:[i16] }):$dst) - Complexity = 6
                // Dst: (MOV16ri:{ *:[i16] } (texternalsym:{ *:[i16] }):$dst)
/*  9012*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->9025
/*  9015*/      OPC_MoveParent,
/*  9016*/      OPC_CheckType, MVT::i16,
/*  9018*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16ri), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430Wrapper:{ *:[i16] } (tblockaddress:{ *:[i16] }):$dst) - Complexity = 6
                // Dst: (MOV16ri:{ *:[i16] } (tblockaddress:{ *:[i16] }):$dst)
/*  9025*/    0, // EndSwitchOpcode
/*  9026*/  /*SwitchOpcode*/ 37, TARGET_VAL(MSP430ISD::SELECT_CC),// ->9066
/*  9029*/    OPC_CaptureGlueInput,
/*  9030*/    OPC_RecordChild0, // #0 = $src
/*  9031*/    OPC_RecordChild1, // #1 = $src2
/*  9032*/    OPC_RecordChild2, // #2 = $cc
/*  9033*/    OPC_MoveChild2,
/*  9034*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  9037*/    OPC_MoveParent,
/*  9038*/    OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->9052
/*  9041*/      OPC_EmitConvertToTarget, 2,
/*  9043*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::Select8), 0|OPFL_GlueInput,
                    MVT::i8, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MSP430selectcc:{ *:[i8] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$cc) - Complexity = 6
                // Dst: (Select8:{ *:[i8] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$src2, (imm:{ *:[i8] }):$cc)
/*  9052*/    /*SwitchType*/ 11, MVT::i16,// ->9065
/*  9054*/      OPC_EmitConvertToTarget, 2,
/*  9056*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::Select16), 0|OPFL_GlueInput,
                    MVT::i16, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MSP430selectcc:{ *:[i16] } GR16:{ *:[i16] }:$src, GR16:{ *:[i16] }:$src2, (imm:{ *:[i8] }):$cc) - Complexity = 6
                // Dst: (Select16:{ *:[i16] } GR16:{ *:[i16] }:$src, GR16:{ *:[i16] }:$src2, (imm:{ *:[i8] }):$cc)
/*  9065*/    0, // EndSwitchType
/*  9066*/  /*SwitchOpcode*/ 55, TARGET_VAL(ISD::Constant),// ->9124
/*  9069*/    OPC_RecordNode, // #0 = $imm
/*  9070*/    OPC_SwitchType /*2 cases */, 24, MVT::i8,// ->9097
/*  9073*/      OPC_Scope, 11, /*->9086*/ // 2 children in Scope
/*  9075*/        OPC_CheckPredicate, 4, // Predicate_cg8imm
/*  9077*/        OPC_EmitConvertToTarget, 0,
/*  9079*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV8rc), 0,
                      MVT::i8, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i8] })<<P:Predicate_cg8imm>>:$imm - Complexity = 4
                  // Dst: (MOV8rc:{ *:[i8] } (imm:{ *:[i8] }):$imm)
/*  9086*/      /*Scope*/ 9, /*->9096*/
/*  9087*/        OPC_EmitConvertToTarget, 0,
/*  9089*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV8ri), 0,
                      MVT::i8, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i8] }):$imm - Complexity = 3
                  // Dst: (MOV8ri:{ *:[i8] } (imm:{ *:[i8] }):$imm)
/*  9096*/      0, /*End of Scope*/
/*  9097*/    /*SwitchType*/ 24, MVT::i16,// ->9123
/*  9099*/      OPC_Scope, 11, /*->9112*/ // 2 children in Scope
/*  9101*/        OPC_CheckPredicate, 5, // Predicate_cg16imm
/*  9103*/        OPC_EmitConvertToTarget, 0,
/*  9105*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16rc), 0,
                      MVT::i16, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i16] })<<P:Predicate_cg16imm>>:$imm - Complexity = 4
                  // Dst: (MOV16rc:{ *:[i16] } (imm:{ *:[i16] }):$imm)
/*  9112*/      /*Scope*/ 9, /*->9122*/
/*  9113*/        OPC_EmitConvertToTarget, 0,
/*  9115*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16ri), 0,
                      MVT::i16, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i16] }):$imm - Complexity = 3
                  // Dst: (MOV16ri:{ *:[i16] } (imm:{ *:[i16] }):$imm)
/*  9122*/      0, /*End of Scope*/
/*  9123*/    0, // EndSwitchType
/*  9124*/  /*SwitchOpcode*/ 8, TARGET_VAL(MSP430ISD::RET_FLAG),// ->9135
/*  9127*/    OPC_RecordNode, // #0 = 'MSP430retflag' chained node
/*  9128*/    OPC_CaptureGlueInput,
/*  9129*/    OPC_EmitMergeInputChains1_0,
/*  9130*/    OPC_MorphNodeTo0, TARGET_VAL(MSP430::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (MSP430retflag) - Complexity = 3
              // Dst: (RET)
/*  9135*/  /*SwitchOpcode*/ 8, TARGET_VAL(MSP430ISD::RETI_FLAG),// ->9146
/*  9138*/    OPC_RecordNode, // #0 = 'MSP430retiflag' chained node
/*  9139*/    OPC_CaptureGlueInput,
/*  9140*/    OPC_EmitMergeInputChains1_0,
/*  9141*/    OPC_MorphNodeTo0, TARGET_VAL(MSP430::RETI), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (MSP430retiflag) - Complexity = 3
              // Dst: (RETI)
/*  9146*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->9163
/*  9149*/    OPC_RecordNode, // #0 = 'br' chained node
/*  9150*/    OPC_RecordChild1, // #1 = $dst
/*  9151*/    OPC_MoveChild1,
/*  9152*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  9155*/    OPC_MoveParent,
/*  9156*/    OPC_EmitMergeInputChains1_0,
/*  9157*/    OPC_MorphNodeTo0, TARGET_VAL(MSP430::JMP), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$dst) - Complexity = 3
              // Dst: (JMP (bb:{ *:[Other] }):$dst)
/*  9163*/  /*SwitchOpcode*/ 25, TARGET_VAL(MSP430ISD::RLA),// ->9191
/*  9166*/    OPC_RecordChild0, // #0 = $dst
/*  9167*/    OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->9179
/*  9170*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rr), 0,
                    MVT::i8, MVT::i16, 2/*#Ops*/, 0, 0, 
                // Src: (MSP430rla:{ *:[i8] } GR8:{ *:[i8] }:$dst) - Complexity = 3
                // Dst: (ADD8rr:{ *:[i8] }:{ *:[i16] } ?:{ *:[i8] }:$dst, ?:{ *:[i8] }:$dst)
/*  9179*/    /*SwitchType*/ 9, MVT::i16,// ->9190
/*  9181*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rr), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 0, 
                // Src: (MSP430rla:{ *:[i16] } GR16:{ *:[i16] }:$dst) - Complexity = 3
                // Dst: (ADD16rr:{ *:[i16] }:{ *:[i16] } ?:{ *:[i16] }:$dst, ?:{ *:[i16] }:$dst)
/*  9190*/    0, // EndSwitchType
/*  9191*/  /*SwitchOpcode*/ 23, TARGET_VAL(MSP430ISD::RRA),// ->9217
/*  9194*/    OPC_RecordChild0, // #0 = $rs
/*  9195*/    OPC_SwitchType /*2 cases */, 8, MVT::i8,// ->9206
/*  9198*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::RRA8r), 0,
                    MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rra:{ *:[i8] } GR8:{ *:[i8] }:$rs) - Complexity = 3
                // Dst: (RRA8r:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$rs)
/*  9206*/    /*SwitchType*/ 8, MVT::i16,// ->9216
/*  9208*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::RRA16r), 0,
                    MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rra:{ *:[i16] } GR16:{ *:[i16] }:$rs) - Complexity = 3
                // Dst: (RRA16r:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$rs)
/*  9216*/    0, // EndSwitchType
/*  9217*/  /*SwitchOpcode*/ 23, TARGET_VAL(MSP430ISD::RRC),// ->9243
/*  9220*/    OPC_RecordChild0, // #0 = $rs
/*  9221*/    OPC_SwitchType /*2 cases */, 8, MVT::i8,// ->9232
/*  9224*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::RRC8r), 0,
                    MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rrc:{ *:[i8] } GR8:{ *:[i8] }:$rs) - Complexity = 3
                // Dst: (RRC8r:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$rs)
/*  9232*/    /*SwitchType*/ 8, MVT::i16,// ->9242
/*  9234*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::RRC16r), 0,
                    MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rrc:{ *:[i16] } GR16:{ *:[i16] }:$rs) - Complexity = 3
                // Dst: (RRC16r:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$rs)
/*  9242*/    0, // EndSwitchType
/*  9243*/  /*SwitchOpcode*/ 13, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9259
/*  9246*/    OPC_RecordChild0, // #0 = $rs
/*  9247*/    OPC_MoveChild1,
/*  9248*/    OPC_CheckValueType, MVT::i8,
/*  9250*/    OPC_MoveParent,
/*  9251*/    OPC_MorphNodeTo2, TARGET_VAL(MSP430::SEXT16r), 0,
                  MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:{ *:[i16] } GR16:{ *:[i16] }:$rs, i8:{ *:[Other] }) - Complexity = 3
              // Dst: (SEXT16r:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$rs)
/*  9259*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::BSWAP),// ->9272
/*  9262*/    OPC_RecordChild0, // #0 = $rs
/*  9263*/    OPC_CheckType, MVT::i16,
/*  9265*/    OPC_MorphNodeTo1, TARGET_VAL(MSP430::SWPB16r), 0,
                  MVT::i16, 1/*#Ops*/, 0, 
              // Src: (bswap:{ *:[i16] } GR16:{ *:[i16] }:$rs) - Complexity = 3
              // Dst: (SWPB16r:{ *:[i16] } GR16:{ *:[i16] }:$rs)
/*  9272*/  /*SwitchOpcode*/ 16, TARGET_VAL(ISD::ANY_EXTEND),// ->9291
/*  9275*/    OPC_RecordChild0, // #0 = $src
/*  9276*/    OPC_EmitInteger, MVT::i16, 0, 
/*  9279*/    OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*  9282*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0,
                  MVT::i16, 3/*#Ops*/, 1, 0, 2, 
              // Src: (anyext:{ *:[i16] } GR8:{ *:[i8] }:$src) - Complexity = 3
              // Dst: (SUBREG_TO_REG:{ *:[i16] } 0:{ *:[i16] }, GR8:{ *:[i8] }:$src, subreg_8bit:{ *:[i32] })
/*  9291*/  /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TRUNCATE),// ->9306
/*  9294*/    OPC_RecordChild0, // #0 = $src
/*  9295*/    OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*  9298*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  MVT::i8, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:{ *:[i8] } GR16:{ *:[i16] }:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:{ *:[i8] } GR16:{ *:[i16] }:$src, subreg_8bit:{ *:[i32] })
/*  9306*/  /*SwitchOpcode*/ 28, TARGET_VAL(ISD::SHL),// ->9337
/*  9309*/    OPC_RecordChild0, // #0 = $src
/*  9310*/    OPC_RecordChild1, // #1 = $cnt
/*  9311*/    OPC_CheckChild1Type, MVT::i8,
/*  9313*/    OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->9325
/*  9316*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::Shl8), 0,
                    MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i8] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$cnt) - Complexity = 3
                // Dst: (Shl8:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$cnt)
/*  9325*/    /*SwitchType*/ 9, MVT::i16,// ->9336
/*  9327*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::Shl16), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i16] } GR16:{ *:[i16] }:$src, GR8:{ *:[i8] }:$cnt) - Complexity = 3
                // Dst: (Shl16:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, GR8:{ *:[i8] }:$cnt)
/*  9336*/    0, // EndSwitchType
/*  9337*/  /*SwitchOpcode*/ 28, TARGET_VAL(ISD::SRA),// ->9368
/*  9340*/    OPC_RecordChild0, // #0 = $src
/*  9341*/    OPC_RecordChild1, // #1 = $cnt
/*  9342*/    OPC_CheckChild1Type, MVT::i8,
/*  9344*/    OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->9356
/*  9347*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::Sra8), 0,
                    MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i8] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$cnt) - Complexity = 3
                // Dst: (Sra8:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$cnt)
/*  9356*/    /*SwitchType*/ 9, MVT::i16,// ->9367
/*  9358*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::Sra16), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i16] } GR16:{ *:[i16] }:$src, GR8:{ *:[i8] }:$cnt) - Complexity = 3
                // Dst: (Sra16:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, GR8:{ *:[i8] }:$cnt)
/*  9367*/    0, // EndSwitchType
/*  9368*/  /*SwitchOpcode*/ 28, TARGET_VAL(ISD::SRL),// ->9399
/*  9371*/    OPC_RecordChild0, // #0 = $src
/*  9372*/    OPC_RecordChild1, // #1 = $cnt
/*  9373*/    OPC_CheckChild1Type, MVT::i8,
/*  9375*/    OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->9387
/*  9378*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::Srl8), 0,
                    MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (srl:{ *:[i8] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$cnt) - Complexity = 3
                // Dst: (Srl8:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src, GR8:{ *:[i8] }:$cnt)
/*  9387*/    /*SwitchType*/ 9, MVT::i16,// ->9398
/*  9389*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::Srl16), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (srl:{ *:[i16] } GR16:{ *:[i16] }:$src, GR8:{ *:[i8] }:$cnt) - Complexity = 3
                // Dst: (Srl16:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src, GR8:{ *:[i8] }:$cnt)
/*  9398*/    0, // EndSwitchType
/*  9399*/  /*SwitchOpcode*/ 23, TARGET_VAL(MSP430ISD::RRCL),// ->9425
/*  9402*/    OPC_RecordChild0, // #0 = $src
/*  9403*/    OPC_SwitchType /*2 cases */, 8, MVT::i8,// ->9414
/*  9406*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::Rrcl8), 0,
                    MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rrcl:{ *:[i8] } GR8:{ *:[i8] }:$src) - Complexity = 3
                // Dst: (Rrcl8:{ *:[i8] }:{ *:[i16] } GR8:{ *:[i8] }:$src)
/*  9414*/    /*SwitchType*/ 8, MVT::i16,// ->9424
/*  9416*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::Rrcl16), 0,
                    MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rrcl:{ *:[i16] } GR16:{ *:[i16] }:$src) - Complexity = 3
                // Dst: (Rrcl16:{ *:[i16] }:{ *:[i16] } GR16:{ *:[i16] }:$src)
/*  9424*/    0, // EndSwitchType
/*  9425*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 9427 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 114
  // #OPC_RecordNode                           = 88
  // #OPC_RecordChild                          = 232
  // #OPC_RecordMemRef                         = 75
  // #OPC_CaptureGlueInput                     = 10
  // #OPC_MoveChild                            = 157
  // #OPC_MoveParent                           = 379
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 126
  // #OPC_CheckPatternPredicate                = 0
  // #OPC_CheckPredicate                       = 499
  // #OPC_CheckOpcode                          = 144
  // #OPC_SwitchOpcode                         = 11
  // #OPC_CheckType                            = 117
  // #OPC_SwitchType                           = 85
  // #OPC_CheckChildType                       = 11
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 53
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckChild2CondCode                  = 0
  // #OPC_CheckValueType                       = 2
  // #OPC_CheckComplexPat                      = 241
  // #OPC_CheckAndImm                          = 1
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 73
  // #OPC_EmitInteger                          = 2
  // #OPC_EmitStringInteger                    = 5
  // #OPC_EmitRegister                         = 0
  // #OPC_EmitConvertToTarget                  = 128
  // #OPC_EmitMergeInputChains                 = 211
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 2
  // #OPC_EmitNodeXForm                        = 0
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 339

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
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
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 1: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 2: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 3: { 
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 4: { 
    // Predicate_cg8imm
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == 0 || Imm == 1 || Imm == 2 ||
                                  Imm == 4 || Imm == 8 || Imm == -1;
  }
  case 5: { 
    // Predicate_cg16imm
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == 0 || Imm == 1 || Imm == 2 ||
                                    Imm == 4 || Imm == 8 || Imm == -1;
  }
  case 6: { 
    // Predicate_extload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 7: { 
    // Predicate_extloadi8
    // Predicate_zextloadi8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 8: { 
    // Predicate_and_su
    SDNode *N = Node;
    (void)N;

  return N->hasOneUse();

  }
  case 9: { 
    // Predicate_zextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 10: { 
    // Predicate_def8
    SDNode *N = Node;
    (void)N;

  return N->getOpcode() != ISD::TRUNCATE &&
         N->getOpcode() != TargetOpcode::EXTRACT_SUBREG &&
         N->getOpcode() != ISD::CopyFromReg;

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

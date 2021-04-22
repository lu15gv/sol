/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Lanai target                              *|
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
/*     0*/  OPC_SwitchOpcode /*34 cases */, 1|128,2/*257*/, TARGET_VAL(ISD::LOAD),// ->262
/*     5*/    OPC_RecordMemRef,
/*     6*/    OPC_RecordNode, // #0 = 'ld' chained node
/*     7*/    OPC_RecordChild1, // #1 = $src
/*     8*/    OPC_CheckChild1Type, MVT::i32,
/*    10*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*    12*/    OPC_CheckType, MVT::i32,
/*    14*/    OPC_Scope, 32, /*->48*/ // 9 children in Scope
/*    16*/      OPC_CheckPredicate, 1, // Predicate_load
/*    18*/      OPC_Scope, 13, /*->33*/ // 2 children in Scope
/*    20*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRi:$src #2 #3 #4
/*    23*/        OPC_EmitMergeInputChains1_0,
/*    24*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRri:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDW_RI:{ *:[i32] } ADDRri:{ *:[i32] }:$src)
/*    33*/      /*Scope*/ 13, /*->47*/
/*    34*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*    37*/        OPC_EmitMergeInputChains1_0,
/*    38*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDW_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*    47*/      0, /*End of Scope*/
/*    48*/    /*Scope*/ 52, /*->101*/
/*    49*/      OPC_CheckPredicate, 2, // Predicate_zextload
/*    51*/      OPC_Scope, 15, /*->68*/ // 3 children in Scope
/*    53*/        OPC_CheckPredicate, 3, // Predicate_zextloadi32
/*    55*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*    58*/        OPC_EmitMergeInputChains1_0,
/*    59*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDWz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LDWz_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*    68*/      /*Scope*/ 15, /*->84*/
/*    69*/        OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*    71*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*    74*/        OPC_EmitMergeInputChains1_0,
/*    75*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LDHz_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*    84*/      /*Scope*/ 15, /*->100*/
/*    85*/        OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*    87*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*    90*/        OPC_EmitMergeInputChains1_0,
/*    91*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LDBz_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*   100*/      0, /*End of Scope*/
/*   101*/    /*Scope*/ 36, /*->138*/
/*   102*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*   104*/      OPC_Scope, 15, /*->121*/ // 2 children in Scope
/*   106*/        OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*   108*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*   111*/        OPC_EmitMergeInputChains1_0,
/*   112*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LDHs_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*   121*/      /*Scope*/ 15, /*->137*/
/*   122*/        OPC_CheckPredicate, 5, // Predicate_sextloadi8
/*   124*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddrRr:$src #2 #3 #4
/*   127*/        OPC_EmitMergeInputChains1_0,
/*   128*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LDBs_RR:{ *:[i32] } ADDRrr:{ *:[i32] }:$src)
/*   137*/      0, /*End of Scope*/
/*   138*/    /*Scope*/ 17, /*->156*/
/*   139*/      OPC_CheckPredicate, 2, // Predicate_zextload
/*   141*/      OPC_CheckPredicate, 4, // Predicate_zextloadi16
/*   143*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   146*/      OPC_EmitMergeInputChains1_0,
/*   147*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LDHz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   156*/    /*Scope*/ 17, /*->174*/
/*   157*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*   159*/      OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*   161*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   164*/      OPC_EmitMergeInputChains1_0,
/*   165*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LDHs_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   174*/    /*Scope*/ 17, /*->192*/
/*   175*/      OPC_CheckPredicate, 2, // Predicate_zextload
/*   177*/      OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*   179*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   182*/      OPC_EmitMergeInputChains1_0,
/*   183*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LDBz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   192*/    /*Scope*/ 17, /*->210*/
/*   193*/      OPC_CheckPredicate, 6, // Predicate_sextload
/*   195*/      OPC_CheckPredicate, 5, // Predicate_sextloadi8
/*   197*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   200*/      OPC_EmitMergeInputChains1_0,
/*   201*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBs_RI), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LDBs_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   210*/    /*Scope*/ 36, /*->247*/
/*   211*/      OPC_CheckPredicate, 7, // Predicate_extload
/*   213*/      OPC_Scope, 15, /*->230*/ // 2 children in Scope
/*   215*/        OPC_CheckPredicate, 5, // Predicate_extloadi8
/*   217*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   220*/        OPC_EmitMergeInputChains1_0,
/*   221*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LDBz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   230*/      /*Scope*/ 15, /*->246*/
/*   231*/        OPC_CheckPredicate, 4, // Predicate_extloadi16
/*   233*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   236*/        OPC_EmitMergeInputChains1_0,
/*   237*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDHz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LDHz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   246*/      0, /*End of Scope*/
/*   247*/    /*Scope*/ 13, /*->261*/
/*   248*/      OPC_CheckPredicate, 1, // Predicate_load
/*   250*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrSls:$src #2
/*   253*/      OPC_EmitMergeInputChains1_0,
/*   254*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDADDR), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:{ *:[i32] } ADDRsls:{ *:[i32] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                // Dst: (LDADDR:{ *:[i32] } ADDRsls:{ *:[i32] }:$src)
/*   261*/    0, /*End of Scope*/
/*   262*/  /*SwitchOpcode*/ 0|128,1/*128*/, TARGET_VAL(ISD::STORE),// ->394
/*   266*/    OPC_RecordMemRef,
/*   267*/    OPC_RecordNode, // #0 = 'st' chained node
/*   268*/    OPC_RecordChild1, // #1 = $Rd
/*   269*/    OPC_CheckChild1Type, MVT::i32,
/*   271*/    OPC_RecordChild2, // #2 = $dst
/*   272*/    OPC_CheckChild2Type, MVT::i32,
/*   274*/    OPC_CheckPredicate, 8, // Predicate_unindexedstore
/*   276*/    OPC_Scope, 32, /*->310*/ // 3 children in Scope
/*   278*/      OPC_CheckPredicate, 9, // Predicate_store
/*   280*/      OPC_Scope, 13, /*->295*/ // 2 children in Scope
/*   282*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*   285*/        OPC_EmitMergeInputChains1_0,
/*   286*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SW_RR GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)
/*   295*/      /*Scope*/ 13, /*->309*/
/*   296*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRi:$dst #3 #4 #5
/*   299*/        OPC_EmitMergeInputChains1_0,
/*   300*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::SW_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRri:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SW_RI GPR:{ *:[i32] }:$Rd, ADDRri:{ *:[i32] }:$dst)
/*   309*/      0, /*End of Scope*/
/*   310*/    /*Scope*/ 68, /*->379*/
/*   311*/      OPC_CheckPredicate, 10, // Predicate_truncstore
/*   313*/      OPC_Scope, 15, /*->330*/ // 4 children in Scope
/*   315*/        OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   317*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*   320*/        OPC_EmitMergeInputChains1_0,
/*   321*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (STH_RR GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)
/*   330*/      /*Scope*/ 15, /*->346*/
/*   331*/        OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   333*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddrRr:$dst #3 #4 #5
/*   336*/        OPC_EmitMergeInputChains1_0,
/*   337*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RR), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                  // Dst: (STB_RR GPR:{ *:[i32] }:$Rd, ADDRrr:{ *:[i32] }:$dst)
/*   346*/      /*Scope*/ 15, /*->362*/
/*   347*/        OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   349*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectAddrSpls:$dst #3 #4 #5
/*   352*/        OPC_EmitMergeInputChains1_0,
/*   353*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::STH_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRspls:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (STH_RI GPR:{ *:[i32] }:$Rd, ADDRspls:{ *:[i32] }:$dst)
/*   362*/      /*Scope*/ 15, /*->378*/
/*   363*/        OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   365*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectAddrSpls:$dst #3 #4 #5
/*   368*/        OPC_EmitMergeInputChains1_0,
/*   369*/        OPC_MorphNodeTo0, TARGET_VAL(Lanai::STB_RI), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GPR:{ *:[i32] }:$Rd, ADDRspls:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                  // Dst: (STB_RI GPR:{ *:[i32] }:$Rd, ADDRspls:{ *:[i32] }:$dst)
/*   378*/      0, /*End of Scope*/
/*   379*/    /*Scope*/ 13, /*->393*/
/*   380*/      OPC_CheckPredicate, 9, // Predicate_store
/*   382*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrSls:$dst #3
/*   385*/      OPC_EmitMergeInputChains1_0,
/*   386*/      OPC_MorphNodeTo0, TARGET_VAL(Lanai::STADDR), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#Ops*/, 1, 3, 
                // Src: (st GPR:{ *:[i32] }:$Rd, ADDRsls:{ *:[i32] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 10
                // Dst: (STADDR GPR:{ *:[i32] }:$Rd, ADDRsls:{ *:[i32] }:$dst)
/*   393*/    0, /*End of Scope*/
/*   394*/  /*SwitchOpcode*/ 20, TARGET_VAL(ISD::ATOMIC_LOAD),// ->417
/*   397*/    OPC_RecordMemRef,
/*   398*/    OPC_RecordNode, // #0 = 'atomic_load' chained node
/*   399*/    OPC_RecordChild1, // #1 = $src
/*   400*/    OPC_CheckChild1Type, MVT::i32,
/*   402*/    OPC_CheckPredicate, 5, // Predicate_atomic_load_8
/*   404*/    OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectAddrSpls:$src #2 #3 #4
/*   407*/    OPC_EmitMergeInputChains1_0,
/*   408*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LDBz_RI), 0|OPFL_Chain|OPFL_MemRefs,
                  MVT::i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (atomic_load:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)<<P:Predicate_atomic_load_8>> - Complexity = 16
              // Dst: (LDBz_RI:{ *:[i32] } ADDRspls:{ *:[i32] }:$src)
/*   417*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_START),// ->442
/*   420*/    OPC_RecordNode, // #0 = 'CallSeqStart' chained node
/*   421*/    OPC_RecordChild1, // #1 = $amt1
/*   422*/    OPC_MoveChild1,
/*   423*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*   426*/    OPC_MoveParent,
/*   427*/    OPC_RecordChild2, // #2 = $amt2
/*   428*/    OPC_MoveChild2,
/*   429*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*   432*/    OPC_MoveParent,
/*   433*/    OPC_EmitMergeInputChains1_0,
/*   434*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (CallSeqStart (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:{ *:[i32] } (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2)
/*   442*/  /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->468
/*   445*/    OPC_RecordNode, // #0 = 'CallSeqEnd' chained node
/*   446*/    OPC_CaptureGlueInput,
/*   447*/    OPC_RecordChild1, // #1 = $amt1
/*   448*/    OPC_MoveChild1,
/*   449*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*   452*/    OPC_MoveParent,
/*   453*/    OPC_RecordChild2, // #2 = $amt2
/*   454*/    OPC_MoveChild2,
/*   455*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*   458*/    OPC_MoveParent,
/*   459*/    OPC_EmitMergeInputChains1_0,
/*   460*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (CallSeqEnd (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:{ *:[i32] } (timm:{ *:[i32] }):$amt1, (timm:{ *:[i32] }):$amt2)
/*   468*/  /*SwitchOpcode*/ 124|128,2/*380*/, TARGET_VAL(ISD::OR),// ->852
/*   472*/    OPC_Scope, 50|128,1/*178*/, /*->653*/ // 3 children in Scope
/*   475*/      OPC_RecordChild0, // #0 = $hi
/*   476*/      OPC_MoveChild1,
/*   477*/      OPC_SwitchOpcode /*2 cases */, 79, TARGET_VAL(LanaiISD::LO),// ->560
/*   481*/        OPC_RecordChild0, // #1 = $lo
/*   482*/        OPC_MoveChild0,
/*   483*/        OPC_SwitchOpcode /*5 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->499
/*   487*/          OPC_MoveParent,
/*   488*/          OPC_MoveParent,
/*   489*/          OPC_CheckType, MVT::i32,
/*   491*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tglobaladdr:{ *:[i32] }):$lo)
/*   499*/        /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetExternalSymbol),// ->514
/*   502*/          OPC_MoveParent,
/*   503*/          OPC_MoveParent,
/*   504*/          OPC_CheckType, MVT::i32,
/*   506*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (texternalsym:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (texternalsym:{ *:[i32] }):$lo)
/*   514*/        /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetBlockAddress),// ->529
/*   517*/          OPC_MoveParent,
/*   518*/          OPC_MoveParent,
/*   519*/          OPC_CheckType, MVT::i32,
/*   521*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (tblockaddress:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tblockaddress:{ *:[i32] }):$lo)
/*   529*/        /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetJumpTable),// ->544
/*   532*/          OPC_MoveParent,
/*   533*/          OPC_MoveParent,
/*   534*/          OPC_CheckType, MVT::i32,
/*   536*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (tjumptable:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tjumptable:{ *:[i32] }):$lo)
/*   544*/        /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetConstantPool),// ->559
/*   547*/          OPC_MoveParent,
/*   548*/          OPC_MoveParent,
/*   549*/          OPC_CheckType, MVT::i32,
/*   551*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$hi, (LanaiLo:{ *:[i32] } (tconstpool:{ *:[i32] }):$lo)) - Complexity = 9
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tconstpool:{ *:[i32] }):$lo)
/*   559*/        0, // EndSwitchOpcode
/*   560*/      /*SwitchOpcode*/ 89, TARGET_VAL(LanaiISD::SMALL),// ->652
/*   563*/        OPC_RecordChild0, // #1 = $small
/*   564*/        OPC_MoveChild0,
/*   565*/        OPC_SwitchOpcode /*5 cases */, 14, TARGET_VAL(ISD::TargetGlobalAddress),// ->583
/*   569*/          OPC_MoveParent,
/*   570*/          OPC_MoveParent,
/*   571*/          OPC_CheckType, MVT::i32,
/*   573*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   576*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$small)
/*   583*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetExternalSymbol),// ->600
/*   586*/          OPC_MoveParent,
/*   587*/          OPC_MoveParent,
/*   588*/          OPC_CheckType, MVT::i32,
/*   590*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   593*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (texternalsym:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (texternalsym:{ *:[i32] }):$small)
/*   600*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetBlockAddress),// ->617
/*   603*/          OPC_MoveParent,
/*   604*/          OPC_MoveParent,
/*   605*/          OPC_CheckType, MVT::i32,
/*   607*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   610*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (tblockaddress:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (tblockaddress:{ *:[i32] }):$small)
/*   617*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetJumpTable),// ->634
/*   620*/          OPC_MoveParent,
/*   621*/          OPC_MoveParent,
/*   622*/          OPC_CheckType, MVT::i32,
/*   624*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   627*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (tjumptable:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (tjumptable:{ *:[i32] }):$small)
/*   634*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetConstantPool),// ->651
/*   637*/          OPC_MoveParent,
/*   638*/          OPC_MoveParent,
/*   639*/          OPC_CheckType, MVT::i32,
/*   641*/          OPC_EmitCopyToReg, 0, Lanai::R0,
/*   644*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0|OPFL_GlueInput,
                        MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (or:{ *:[i32] } R0:{ *:[i32] }, (LanaiSmall:{ *:[i32] } (tconstpool:{ *:[i32] }):$small)) - Complexity = 9
                    // Dst: (SLI:{ *:[i32] } (tconstpool:{ *:[i32] }):$small)
/*   651*/        0, // EndSwitchOpcode
/*   652*/      0, // EndSwitchOpcode
/*   653*/    /*Scope*/ 88, /*->742*/
/*   654*/      OPC_MoveChild0,
/*   655*/      OPC_CheckOpcode, TARGET_VAL(LanaiISD::LO),
/*   658*/      OPC_RecordChild0, // #0 = $lo
/*   659*/      OPC_MoveChild0,
/*   660*/      OPC_SwitchOpcode /*5 cases */, 13, TARGET_VAL(ISD::TargetGlobalAddress),// ->677
/*   664*/        OPC_MoveParent,
/*   665*/        OPC_MoveParent,
/*   666*/        OPC_RecordChild1, // #1 = $hi
/*   667*/        OPC_CheckType, MVT::i32,
/*   669*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tglobaladdr:{ *:[i32] }):$lo)
/*   677*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetExternalSymbol),// ->693
/*   680*/        OPC_MoveParent,
/*   681*/        OPC_MoveParent,
/*   682*/        OPC_RecordChild1, // #1 = $hi
/*   683*/        OPC_CheckType, MVT::i32,
/*   685*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (texternalsym:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (texternalsym:{ *:[i32] }):$lo)
/*   693*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetBlockAddress),// ->709
/*   696*/        OPC_MoveParent,
/*   697*/        OPC_MoveParent,
/*   698*/        OPC_RecordChild1, // #1 = $hi
/*   699*/        OPC_CheckType, MVT::i32,
/*   701*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (tblockaddress:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tblockaddress:{ *:[i32] }):$lo)
/*   709*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetJumpTable),// ->725
/*   712*/        OPC_MoveParent,
/*   713*/        OPC_MoveParent,
/*   714*/        OPC_RecordChild1, // #1 = $hi
/*   715*/        OPC_CheckType, MVT::i32,
/*   717*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (tjumptable:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tjumptable:{ *:[i32] }):$lo)
/*   725*/      /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetConstantPool),// ->741
/*   728*/        OPC_MoveParent,
/*   729*/        OPC_MoveParent,
/*   730*/        OPC_RecordChild1, // #1 = $hi
/*   731*/        OPC_CheckType, MVT::i32,
/*   733*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (or:{ *:[i32] } (LanaiLo:{ *:[i32] } (tconstpool:{ *:[i32] }):$lo), GPR:{ *:[i32] }:$hi) - Complexity = 9
                  // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$hi, (tconstpool:{ *:[i32] }):$lo)
/*   741*/      0, // EndSwitchOpcode
/*   742*/    /*Scope*/ 108, /*->851*/
/*   743*/      OPC_RecordChild0, // #0 = $Rs1
/*   744*/      OPC_RecordChild1, // #1 = $imm16
/*   745*/      OPC_Scope, 76, /*->823*/ // 2 children in Scope
/*   747*/        OPC_MoveChild1,
/*   748*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   751*/        OPC_Scope, 16, /*->769*/ // 4 children in Scope
/*   753*/          OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*   755*/          OPC_MoveParent,
/*   756*/          OPC_EmitConvertToTarget, 1,
/*   758*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*   761*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (OR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   769*/        /*Scope*/ 16, /*->786*/
/*   770*/          OPC_CheckPredicate, 12, // Predicate_i32hi16
/*   772*/          OPC_MoveParent,
/*   773*/          OPC_EmitConvertToTarget, 1,
/*   775*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*   778*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_HI), 0,
                        MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (OR_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   786*/        /*Scope*/ 17, /*->804*/
/*   787*/          OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*   789*/          OPC_MoveParent,
/*   790*/          OPC_EmitConvertToTarget, 1,
/*   792*/          OPC_EmitNodeXForm, 0, 2, // LO16
/*   795*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_LO), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (OR_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   804*/        /*Scope*/ 17, /*->822*/
/*   805*/          OPC_CheckPredicate, 12, // Predicate_i32hi16
/*   807*/          OPC_MoveParent,
/*   808*/          OPC_EmitConvertToTarget, 1,
/*   810*/          OPC_EmitNodeXForm, 1, 2, // HI16
/*   813*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_I_HI), 0,
                        MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                    // Dst: (OR_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   822*/        0, /*End of Scope*/
/*   823*/      /*Scope*/ 26, /*->850*/
/*   824*/        OPC_EmitInteger, MVT::i32, 0, 
/*   827*/        OPC_Scope, 9, /*->838*/ // 2 children in Scope
/*   829*/          OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_R), 0,
                        MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                    // Dst: (OR_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*   838*/        /*Scope*/ 10, /*->849*/
/*   839*/          OPC_MorphNodeTo2, TARGET_VAL(Lanai::OR_F_R), 0,
                        MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (or:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                    // Dst: (OR_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*   849*/        0, /*End of Scope*/
/*   850*/      0, /*End of Scope*/
/*   851*/    0, /*End of Scope*/
/*   852*/  /*SwitchOpcode*/ 108, TARGET_VAL(ISD::AND),// ->963
/*   855*/    OPC_RecordChild0, // #0 = $Rs1
/*   856*/    OPC_RecordChild1, // #1 = $imm16
/*   857*/    OPC_Scope, 76, /*->935*/ // 2 children in Scope
/*   859*/      OPC_MoveChild1,
/*   860*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   863*/      OPC_Scope, 16, /*->881*/ // 4 children in Scope
/*   865*/        OPC_CheckPredicate, 13, // Predicate_i32lo16and
/*   867*/        OPC_MoveParent,
/*   868*/        OPC_EmitConvertToTarget, 1,
/*   870*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*   873*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16and>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (AND_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   881*/      /*Scope*/ 16, /*->898*/
/*   882*/        OPC_CheckPredicate, 14, // Predicate_i32hi16and
/*   884*/        OPC_MoveParent,
/*   885*/        OPC_EmitConvertToTarget, 1,
/*   887*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*   890*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16and>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (AND_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   898*/      /*Scope*/ 17, /*->916*/
/*   899*/        OPC_CheckPredicate, 13, // Predicate_i32lo16and
/*   901*/        OPC_MoveParent,
/*   902*/        OPC_EmitConvertToTarget, 1,
/*   904*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*   907*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_LO), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16and>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (AND_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   916*/      /*Scope*/ 17, /*->934*/
/*   917*/        OPC_CheckPredicate, 14, // Predicate_i32hi16and
/*   919*/        OPC_MoveParent,
/*   920*/        OPC_EmitConvertToTarget, 1,
/*   922*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*   925*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_I_HI), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16and>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (AND_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   934*/      0, /*End of Scope*/
/*   935*/    /*Scope*/ 26, /*->962*/
/*   936*/      OPC_EmitInteger, MVT::i32, 0, 
/*   939*/      OPC_Scope, 9, /*->950*/ // 2 children in Scope
/*   941*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_R), 0,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (AND_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*   950*/      /*Scope*/ 10, /*->961*/
/*   951*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::AND_F_R), 0,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (and:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (AND_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*   961*/      0, /*End of Scope*/
/*   962*/    0, /*End of Scope*/
/*   963*/  /*SwitchOpcode*/ 108, TARGET_VAL(ISD::XOR),// ->1074
/*   966*/    OPC_RecordChild0, // #0 = $Rs1
/*   967*/    OPC_RecordChild1, // #1 = $imm16
/*   968*/    OPC_Scope, 76, /*->1046*/ // 2 children in Scope
/*   970*/      OPC_MoveChild1,
/*   971*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   974*/      OPC_Scope, 16, /*->992*/ // 4 children in Scope
/*   976*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*   978*/        OPC_MoveParent,
/*   979*/        OPC_EmitConvertToTarget, 1,
/*   981*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*   984*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*   992*/      /*Scope*/ 16, /*->1009*/
/*   993*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*   995*/        OPC_MoveParent,
/*   996*/        OPC_EmitConvertToTarget, 1,
/*   998*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1001*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1009*/      /*Scope*/ 17, /*->1027*/
/*  1010*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1012*/        OPC_MoveParent,
/*  1013*/        OPC_EmitConvertToTarget, 1,
/*  1015*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1018*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_LO), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1027*/      /*Scope*/ 17, /*->1045*/
/*  1028*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1030*/        OPC_MoveParent,
/*  1031*/        OPC_EmitConvertToTarget, 1,
/*  1033*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1036*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_I_HI), 0,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (XOR_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1045*/      0, /*End of Scope*/
/*  1046*/    /*Scope*/ 26, /*->1073*/
/*  1047*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1050*/      OPC_Scope, 9, /*->1061*/ // 2 children in Scope
/*  1052*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::XOR_R), 0,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (XOR_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1061*/      /*Scope*/ 10, /*->1072*/
/*  1062*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::XOR_F_R), 0,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (XOR_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1072*/      0, /*End of Scope*/
/*  1073*/    0, /*End of Scope*/
/*  1074*/  /*SwitchOpcode*/ 73, TARGET_VAL(ISD::ADD),// ->1150
/*  1077*/    OPC_RecordChild0, // #0 = $Rs1
/*  1078*/    OPC_RecordChild1, // #1 = $imm
/*  1079*/    OPC_Scope, 55, /*->1136*/ // 2 children in Scope
/*  1081*/      OPC_MoveChild1,
/*  1082*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1085*/      OPC_Scope, 16, /*->1103*/ // 3 children in Scope
/*  1087*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1089*/        OPC_MoveParent,
/*  1090*/        OPC_EmitConvertToTarget, 1,
/*  1092*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1095*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1103*/      /*Scope*/ 16, /*->1120*/
/*  1104*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1106*/        OPC_MoveParent,
/*  1107*/        OPC_EmitConvertToTarget, 1,
/*  1109*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1112*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1120*/      /*Scope*/ 14, /*->1135*/
/*  1121*/        OPC_CheckPredicate, 15, // Predicate_i32neg16
/*  1123*/        OPC_MoveParent,
/*  1124*/        OPC_EmitNodeXForm, 2, 1, // NEG
/*  1127*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32neg16>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (NEG:{ *:[i32] } ?:{ *:[i32] }:$imm))
/*  1135*/      0, /*End of Scope*/
/*  1136*/    /*Scope*/ 12, /*->1149*/
/*  1137*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1140*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (add:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (ADD_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1149*/    0, /*End of Scope*/
/*  1150*/  /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SUB),// ->1226
/*  1153*/    OPC_RecordChild0, // #0 = $Rs1
/*  1154*/    OPC_RecordChild1, // #1 = $imm
/*  1155*/    OPC_Scope, 55, /*->1212*/ // 2 children in Scope
/*  1157*/      OPC_MoveChild1,
/*  1158*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1161*/      OPC_Scope, 16, /*->1179*/ // 3 children in Scope
/*  1163*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1165*/        OPC_MoveParent,
/*  1166*/        OPC_EmitConvertToTarget, 1,
/*  1168*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1171*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1179*/      /*Scope*/ 16, /*->1196*/
/*  1180*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1182*/        OPC_MoveParent,
/*  1183*/        OPC_EmitConvertToTarget, 1,
/*  1185*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1188*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_I_HI), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUB_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1196*/      /*Scope*/ 14, /*->1211*/
/*  1197*/        OPC_CheckPredicate, 15, // Predicate_i32neg16
/*  1199*/        OPC_MoveParent,
/*  1200*/        OPC_EmitNodeXForm, 2, 1, // NEG
/*  1203*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADD_I_LO), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32neg16>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (NEG:{ *:[i32] } ?:{ *:[i32] }:$imm))
/*  1211*/      0, /*End of Scope*/
/*  1212*/    /*Scope*/ 12, /*->1225*/
/*  1213*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1216*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (sub:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SUB_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1225*/    0, /*End of Scope*/
/*  1226*/  /*SwitchOpcode*/ 61, TARGET_VAL(ISD::ADDC),// ->1290
/*  1229*/    OPC_RecordChild0, // #0 = $Rs1
/*  1230*/    OPC_RecordChild1, // #1 = $imm
/*  1231*/    OPC_Scope, 42, /*->1275*/ // 2 children in Scope
/*  1233*/      OPC_MoveChild1,
/*  1234*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1237*/      OPC_Scope, 17, /*->1256*/ // 2 children in Scope
/*  1239*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1241*/        OPC_MoveParent,
/*  1242*/        OPC_EmitConvertToTarget, 1,
/*  1244*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1247*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_LO), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADD_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1256*/      /*Scope*/ 17, /*->1274*/
/*  1257*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1259*/        OPC_MoveParent,
/*  1260*/        OPC_EmitConvertToTarget, 1,
/*  1262*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1265*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_I_HI), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADD_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1274*/      0, /*End of Scope*/
/*  1275*/    /*Scope*/ 13, /*->1289*/
/*  1276*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1279*/      OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADD_F_R), 0|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (addc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (ADD_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1289*/    0, /*End of Scope*/
/*  1290*/  /*SwitchOpcode*/ 61, TARGET_VAL(ISD::SUBC),// ->1354
/*  1293*/    OPC_RecordChild0, // #0 = $Rs1
/*  1294*/    OPC_RecordChild1, // #1 = $imm
/*  1295*/    OPC_Scope, 42, /*->1339*/ // 2 children in Scope
/*  1297*/      OPC_MoveChild1,
/*  1298*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1301*/      OPC_Scope, 17, /*->1320*/ // 2 children in Scope
/*  1303*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1305*/        OPC_MoveParent,
/*  1306*/        OPC_EmitConvertToTarget, 1,
/*  1308*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1311*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_LO), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUB_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1320*/      /*Scope*/ 17, /*->1338*/
/*  1321*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1323*/        OPC_MoveParent,
/*  1324*/        OPC_EmitConvertToTarget, 1,
/*  1326*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1329*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_I_HI), 0|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (subc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUB_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1338*/      0, /*End of Scope*/
/*  1339*/    /*Scope*/ 13, /*->1353*/
/*  1340*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1343*/      OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUB_F_R), 0|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (subc:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SUB_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1353*/    0, /*End of Scope*/
/*  1354*/  /*SwitchOpcode*/ 73, TARGET_VAL(ISD::ADDE),// ->1430
/*  1357*/    OPC_CaptureGlueInput,
/*  1358*/    OPC_RecordChild0, // #0 = $Rs1
/*  1359*/    OPC_RecordChild1, // #1 = $imm
/*  1360*/    OPC_Scope, 40, /*->1402*/ // 2 children in Scope
/*  1362*/      OPC_MoveChild1,
/*  1363*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1366*/      OPC_Scope, 16, /*->1384*/ // 2 children in Scope
/*  1368*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1370*/        OPC_MoveParent,
/*  1371*/        OPC_EmitConvertToTarget, 1,
/*  1373*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1376*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (adde:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (ADDC_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1384*/      /*Scope*/ 16, /*->1401*/
/*  1385*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1387*/        OPC_MoveParent,
/*  1388*/        OPC_EmitConvertToTarget, 1,
/*  1390*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1393*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (adde:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDC_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1401*/      0, /*End of Scope*/
/*  1402*/    /*Scope*/ 26, /*->1429*/
/*  1403*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1406*/      OPC_Scope, 9, /*->1417*/ // 2 children in Scope
/*  1408*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::ADDC_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (adde:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (ADDC_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1417*/      /*Scope*/ 10, /*->1428*/
/*  1418*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADDC_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (adde:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (ADDC_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1428*/      0, /*End of Scope*/
/*  1429*/    0, /*End of Scope*/
/*  1430*/  /*SwitchOpcode*/ 73, TARGET_VAL(ISD::SUBE),// ->1506
/*  1433*/    OPC_CaptureGlueInput,
/*  1434*/    OPC_RecordChild0, // #0 = $Rs1
/*  1435*/    OPC_RecordChild1, // #1 = $imm
/*  1436*/    OPC_Scope, 40, /*->1478*/ // 2 children in Scope
/*  1438*/      OPC_MoveChild1,
/*  1439*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1442*/      OPC_Scope, 16, /*->1460*/ // 2 children in Scope
/*  1444*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1446*/        OPC_MoveParent,
/*  1447*/        OPC_EmitConvertToTarget, 1,
/*  1449*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1452*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sube:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_I_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1460*/      /*Scope*/ 16, /*->1477*/
/*  1461*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1463*/        OPC_MoveParent,
/*  1464*/        OPC_EmitConvertToTarget, 1,
/*  1466*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1469*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sube:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_I_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1477*/      0, /*End of Scope*/
/*  1478*/    /*Scope*/ 26, /*->1505*/
/*  1479*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1482*/      OPC_Scope, 9, /*->1493*/ // 2 children in Scope
/*  1484*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SUBB_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (sube:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (SUBB_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1493*/      /*Scope*/ 10, /*->1504*/
/*  1494*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (sube:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                  // Dst: (SUBB_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1504*/      0, /*End of Scope*/
/*  1505*/    0, /*End of Scope*/
/*  1506*/  /*SwitchOpcode*/ 65, TARGET_VAL(LanaiISD::SUBBF),// ->1574
/*  1509*/    OPC_CaptureGlueInput,
/*  1510*/    OPC_RecordChild0, // #0 = $Rs1
/*  1511*/    OPC_Scope, 43, /*->1556*/ // 2 children in Scope
/*  1513*/      OPC_RecordChild1, // #1 = $imm
/*  1514*/      OPC_MoveChild1,
/*  1515*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1518*/      OPC_Scope, 17, /*->1537*/ // 2 children in Scope
/*  1520*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1522*/        OPC_MoveParent,
/*  1523*/        OPC_EmitConvertToTarget, 1,
/*  1525*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1528*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_LO), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSubbF GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_F_I_LO:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16z>>:$imm))
/*  1537*/      /*Scope*/ 17, /*->1555*/
/*  1538*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1540*/        OPC_MoveParent,
/*  1541*/        OPC_EmitConvertToTarget, 1,
/*  1543*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1546*/        OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_I_HI), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSubbF GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (SUBB_F_I_HI:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16>>:$imm))
/*  1555*/      0, /*End of Scope*/
/*  1556*/    /*Scope*/ 16, /*->1573*/
/*  1557*/      OPC_CheckChild0Type, MVT::i32,
/*  1559*/      OPC_RecordChild1, // #1 = $Rs2
/*  1560*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1563*/      OPC_MorphNodeTo2, TARGET_VAL(Lanai::SUBB_F_R), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    MVT::i32, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (LanaiSubbF GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SUBB_F_R:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1573*/    0, /*End of Scope*/
/*  1574*/  /*SwitchOpcode*/ 35, TARGET_VAL(ISD::SHL),// ->1612
/*  1577*/    OPC_RecordChild0, // #0 = $Rs1
/*  1578*/    OPC_RecordChild1, // #1 = $imm16
/*  1579*/    OPC_Scope, 17, /*->1598*/ // 2 children in Scope
/*  1581*/      OPC_MoveChild1,
/*  1582*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1585*/      OPC_CheckPredicate, 16, // Predicate_immShift
/*  1587*/      OPC_MoveParent,
/*  1588*/      OPC_EmitConvertToTarget, 1,
/*  1590*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_immShift>>:$imm16) - Complexity = 7
                // Dst: (SL_I:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] }):$imm16)
/*  1598*/    /*Scope*/ 12, /*->1611*/
/*  1599*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1602*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SHL_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (shl:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SHL_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1611*/    0, /*End of Scope*/
/*  1612*/  /*SwitchOpcode*/ 51, TARGET_VAL(ISD::SRL),// ->1666
/*  1615*/    OPC_RecordChild0, // #0 = $Rs1
/*  1616*/    OPC_RecordChild1, // #1 = $imm
/*  1617*/    OPC_Scope, 18, /*->1637*/ // 2 children in Scope
/*  1619*/      OPC_MoveChild1,
/*  1620*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1623*/      OPC_CheckPredicate, 16, // Predicate_immShift
/*  1625*/      OPC_MoveParent,
/*  1626*/      OPC_EmitNodeXForm, 2, 1, // NEG
/*  1629*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SL_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_immShift>>:$imm) - Complexity = 7
                // Dst: (SL_I:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (NEG:{ *:[i32] } ?:{ *:[i32] }:$imm))
/*  1637*/    /*Scope*/ 27, /*->1665*/
/*  1638*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  1641*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1644*/      OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*  1653*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1656*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRL_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 4, 5, 
                // Src: (srl:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SRL_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (SUB_R:{ *:[i32] } R0:{ *:[i32] }, GPR:{ *:[i32] }:$Rs2))
/*  1665*/    0, /*End of Scope*/
/*  1666*/  /*SwitchOpcode*/ 51, TARGET_VAL(ISD::SRA),// ->1720
/*  1669*/    OPC_RecordChild0, // #0 = $Rs1
/*  1670*/    OPC_RecordChild1, // #1 = $imm
/*  1671*/    OPC_Scope, 18, /*->1691*/ // 2 children in Scope
/*  1673*/      OPC_MoveChild1,
/*  1674*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1677*/      OPC_CheckPredicate, 16, // Predicate_immShift
/*  1679*/      OPC_MoveParent,
/*  1680*/      OPC_EmitNodeXForm, 2, 1, // NEG
/*  1683*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SA_I), 0,
                    MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_immShift>>:$imm) - Complexity = 7
                // Dst: (SA_I:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (NEG:{ *:[i32] } ?:{ *:[i32] }:$imm))
/*  1691*/    /*Scope*/ 27, /*->1719*/
/*  1692*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  1695*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1698*/      OPC_EmitNode1, TARGET_VAL(Lanai::SUB_R), 0,
                    MVT::i32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*  1707*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1710*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SRA_R), 0,
                    MVT::i32, 3/*#Ops*/, 0, 4, 5, 
                // Src: (sra:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SRA_R:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (SUB_R:{ *:[i32] } R0:{ *:[i32] }, GPR:{ *:[i32] }:$Rs2))
/*  1719*/    0, /*End of Scope*/
/*  1720*/  /*SwitchOpcode*/ 57, TARGET_VAL(LanaiISD::SET_FLAG),// ->1780
/*  1723*/    OPC_RecordChild0, // #0 = $Rs1
/*  1724*/    OPC_Scope, 41, /*->1767*/ // 2 children in Scope
/*  1726*/      OPC_RecordChild1, // #1 = $imm16
/*  1727*/      OPC_MoveChild1,
/*  1728*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1731*/      OPC_Scope, 16, /*->1749*/ // 2 children in Scope
/*  1733*/        OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  1735*/        OPC_MoveParent,
/*  1736*/        OPC_EmitConvertToTarget, 1,
/*  1738*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*  1741*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_LO), 0|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSetFlag GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm16) - Complexity = 7
                  // Dst: (SFSUB_F_RI_LO:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1749*/      /*Scope*/ 16, /*->1766*/
/*  1750*/        OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  1752*/        OPC_MoveParent,
/*  1753*/        OPC_EmitConvertToTarget, 1,
/*  1755*/        OPC_EmitNodeXForm, 1, 2, // HI16
/*  1758*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RI_HI), 0|OPFL_GlueOutput,
                      MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (LanaiSetFlag GPR:{ *:[i32] }:$Rs1, (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16) - Complexity = 7
                  // Dst: (SFSUB_F_RI_HI:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  1766*/      0, /*End of Scope*/
/*  1767*/    /*Scope*/ 11, /*->1779*/
/*  1768*/      OPC_CheckChild0Type, MVT::i32,
/*  1770*/      OPC_RecordChild1, // #1 = $Rs2
/*  1771*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SFSUB_F_RR), 0|OPFL_GlueOutput,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (LanaiSetFlag GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2) - Complexity = 3
                // Dst: (SFSUB_F_RR:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2)
/*  1779*/    0, /*End of Scope*/
/*  1780*/  /*SwitchOpcode*/ 24, TARGET_VAL(LanaiISD::BR_CC),// ->1807
/*  1783*/    OPC_RecordNode, // #0 = 'LanaiBrCC' chained node
/*  1784*/    OPC_CaptureGlueInput,
/*  1785*/    OPC_RecordChild1, // #1 = $addr
/*  1786*/    OPC_MoveChild1,
/*  1787*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1790*/    OPC_MoveParent,
/*  1791*/    OPC_RecordChild2, // #2 = $DDDI
/*  1792*/    OPC_MoveChild2,
/*  1793*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1796*/    OPC_MoveParent,
/*  1797*/    OPC_EmitMergeInputChains1_0,
/*  1798*/    OPC_EmitConvertToTarget, 2,
/*  1800*/    OPC_MorphNodeTo0, TARGET_VAL(Lanai::BRCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (LanaiBrCC (bb:{ *:[Other] }):$addr, (imm:{ *:[i32] }):$DDDI) - Complexity = 6
              // Dst: (BRCC (bb:{ *:[Other] }):$addr, (imm:{ *:[i32] }):$DDDI)
/*  1807*/  /*SwitchOpcode*/ 16, TARGET_VAL(LanaiISD::SETCC),// ->1826
/*  1810*/    OPC_CaptureGlueInput,
/*  1811*/    OPC_RecordChild0, // #0 = $DDDI
/*  1812*/    OPC_MoveChild0,
/*  1813*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1816*/    OPC_MoveParent,
/*  1817*/    OPC_EmitConvertToTarget, 0,
/*  1819*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SCC), 0|OPFL_GlueInput,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (LanaiSetCC:{ *:[i32] } (imm:{ *:[i32] }):$DDDI) - Complexity = 6
              // Dst: (SCC:{ *:[i32] } (imm:{ *:[i32] }):$DDDI)
/*  1826*/  /*SwitchOpcode*/ 22, TARGET_VAL(LanaiISD::SELECT_CC),// ->1851
/*  1829*/    OPC_CaptureGlueInput,
/*  1830*/    OPC_RecordChild0, // #0 = $Rs1
/*  1831*/    OPC_RecordChild1, // #1 = $Rs2
/*  1832*/    OPC_RecordChild2, // #2 = $DDDI
/*  1833*/    OPC_MoveChild2,
/*  1834*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1837*/    OPC_MoveParent,
/*  1838*/    OPC_CheckType, MVT::i32,
/*  1840*/    OPC_EmitConvertToTarget, 2,
/*  1842*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::SELECT), 0|OPFL_GlueInput,
                  MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (LanaiSelectCC:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2, (imm:{ *:[i32] }):$DDDI) - Complexity = 6
              // Dst: (SELECT:{ *:[i32] } GPR:{ *:[i32] }:$Rs1, GPR:{ *:[i32] }:$Rs2, (imm:{ *:[i32] }):$DDDI)
/*  1851*/  /*SwitchOpcode*/ 42, TARGET_VAL(LanaiISD::CALL),// ->1896
/*  1854*/    OPC_RecordNode, // #0 = 'Call' chained node
/*  1855*/    OPC_CaptureGlueInput,
/*  1856*/    OPC_RecordChild1, // #1 = $dst
/*  1857*/    OPC_Scope, 27, /*->1886*/ // 2 children in Scope
/*  1859*/      OPC_MoveChild1,
/*  1860*/      OPC_SwitchOpcode /*2 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->1873
/*  1864*/        OPC_MoveParent,
/*  1865*/        OPC_EmitMergeInputChains1_0,
/*  1866*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                  // Dst: (CALL:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst)
/*  1873*/      /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->1885
/*  1876*/        OPC_MoveParent,
/*  1877*/        OPC_EmitMergeInputChains1_0,
/*  1878*/        OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (Call (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                  // Dst: (CALL:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst)
/*  1885*/      0, // EndSwitchOpcode
/*  1886*/    /*Scope*/ 8, /*->1895*/
/*  1887*/      OPC_EmitMergeInputChains1_0,
/*  1888*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::CALLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (Call GPR:{ *:[i32] }:$Rs1) - Complexity = 3
                // Dst: (CALLR:{ *:[i32] } GPR:{ *:[i32] }:$Rs1)
/*  1895*/    0, /*End of Scope*/
/*  1896*/  /*SwitchOpcode*/ 69, TARGET_VAL(LanaiISD::HI),// ->1968
/*  1899*/    OPC_RecordChild0, // #0 = $dst
/*  1900*/    OPC_MoveChild0,
/*  1901*/    OPC_SwitchOpcode /*5 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->1915
/*  1905*/      OPC_MoveParent,
/*  1906*/      OPC_CheckType, MVT::i32,
/*  1908*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst)
/*  1915*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->1928
/*  1918*/      OPC_MoveParent,
/*  1919*/      OPC_CheckType, MVT::i32,
/*  1921*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst)
/*  1928*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->1941
/*  1931*/      OPC_MoveParent,
/*  1932*/      OPC_CheckType, MVT::i32,
/*  1934*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst)
/*  1941*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetJumpTable),// ->1954
/*  1944*/      OPC_MoveParent,
/*  1945*/      OPC_CheckType, MVT::i32,
/*  1947*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst)
/*  1954*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->1967
/*  1957*/      OPC_MoveParent,
/*  1958*/      OPC_CheckType, MVT::i32,
/*  1960*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiHi:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (MOVHI:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst)
/*  1967*/    0, // EndSwitchOpcode
/*  1968*/  /*SwitchOpcode*/ 89, TARGET_VAL(LanaiISD::LO),// ->2060
/*  1971*/    OPC_RecordChild0, // #0 = $dst
/*  1972*/    OPC_MoveChild0,
/*  1973*/    OPC_SwitchOpcode /*5 cases */, 14, TARGET_VAL(ISD::TargetGlobalAddress),// ->1991
/*  1977*/      OPC_MoveParent,
/*  1978*/      OPC_CheckType, MVT::i32,
/*  1980*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  1983*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (tglobaladdr:{ *:[i32] }):$dst)
/*  1991*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetExternalSymbol),// ->2008
/*  1994*/      OPC_MoveParent,
/*  1995*/      OPC_CheckType, MVT::i32,
/*  1997*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  2000*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (texternalsym:{ *:[i32] }):$dst)
/*  2008*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetBlockAddress),// ->2025
/*  2011*/      OPC_MoveParent,
/*  2012*/      OPC_CheckType, MVT::i32,
/*  2014*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  2017*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (tblockaddress:{ *:[i32] }):$dst)
/*  2025*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetJumpTable),// ->2042
/*  2028*/      OPC_MoveParent,
/*  2029*/      OPC_CheckType, MVT::i32,
/*  2031*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  2034*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (tjumptable:{ *:[i32] }):$dst)
/*  2042*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetConstantPool),// ->2059
/*  2045*/      OPC_MoveParent,
/*  2046*/      OPC_CheckType, MVT::i32,
/*  2048*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  2051*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (LanaiLo:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (tconstpool:{ *:[i32] }):$dst)
/*  2059*/    0, // EndSwitchOpcode
/*  2060*/  /*SwitchOpcode*/ 69, TARGET_VAL(LanaiISD::SMALL),// ->2132
/*  2063*/    OPC_RecordChild0, // #0 = $dst
/*  2064*/    OPC_MoveChild0,
/*  2065*/    OPC_SwitchOpcode /*5 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->2079
/*  2069*/      OPC_MoveParent,
/*  2070*/      OPC_CheckType, MVT::i32,
/*  2072*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (tglobaladdr:{ *:[i32] }):$dst)
/*  2079*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->2092
/*  2082*/      OPC_MoveParent,
/*  2083*/      OPC_CheckType, MVT::i32,
/*  2085*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (texternalsym:{ *:[i32] }):$dst)
/*  2092*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->2105
/*  2095*/      OPC_MoveParent,
/*  2096*/      OPC_CheckType, MVT::i32,
/*  2098*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (tblockaddress:{ *:[i32] }):$dst)
/*  2105*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetJumpTable),// ->2118
/*  2108*/      OPC_MoveParent,
/*  2109*/      OPC_CheckType, MVT::i32,
/*  2111*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (tjumptable:{ *:[i32] }):$dst)
/*  2118*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetConstantPool),// ->2131
/*  2121*/      OPC_MoveParent,
/*  2122*/      OPC_CheckType, MVT::i32,
/*  2124*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 0, 
                // Src: (LanaiSmall:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst) - Complexity = 6
                // Dst: (SLI:{ *:[i32] } (tconstpool:{ *:[i32] }):$dst)
/*  2131*/    0, // EndSwitchOpcode
/*  2132*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::Constant),// ->2248
/*  2135*/    OPC_RecordNode, // #0 = $imm
/*  2136*/    OPC_Scope, 18, /*->2156*/ // 6 children in Scope
/*  2138*/      OPC_CheckPredicate, 13, // Predicate_i32lo16and
/*  2140*/      OPC_EmitRegister, MVT::i32, Lanai::R1,
/*  2143*/      OPC_EmitConvertToTarget, 0,
/*  2145*/      OPC_EmitNodeXForm, 0, 2, // LO16
/*  2148*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32lo16and>><<X:LO16>>:$imm - Complexity = 4
                // Dst: (AND_I_LO:{ *:[i32] } R1:{ *:[i32] }, (LO16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32lo16and>>:$imm))
/*  2156*/    /*Scope*/ 18, /*->2175*/
/*  2157*/      OPC_CheckPredicate, 14, // Predicate_i32hi16and
/*  2159*/      OPC_EmitRegister, MVT::i32, Lanai::R1,
/*  2162*/      OPC_EmitConvertToTarget, 0,
/*  2164*/      OPC_EmitNodeXForm, 1, 2, // HI16
/*  2167*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::AND_I_HI), 0,
                    MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32hi16and>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (AND_I_HI:{ *:[i32] } R1:{ *:[i32] }, (HI16:{ *:[i32] } (imm:{ *:[i32] })<<P:Predicate_i32hi16and>>:$imm))
/*  2175*/    /*Scope*/ 14, /*->2190*/
/*  2176*/      OPC_CheckPredicate, 12, // Predicate_i32hi16
/*  2178*/      OPC_EmitConvertToTarget, 0,
/*  2180*/      OPC_EmitNodeXForm, 1, 1, // HI16
/*  2183*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32hi16>><<X:HI16>>:$imm16 - Complexity = 4
                // Dst: (MOVHI:{ *:[i32] } (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm16))
/*  2190*/    /*Scope*/ 14, /*->2205*/
/*  2191*/      OPC_CheckPredicate, 17, // Predicate_i32lo21
/*  2193*/      OPC_EmitConvertToTarget, 0,
/*  2195*/      OPC_EmitNodeXForm, 3, 1, // LO21
/*  2198*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::SLI), 0,
                    MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32lo21>><<X:LO21>>:$imm - Complexity = 4
                // Dst: (SLI:{ *:[i32] } (LO21:{ *:[i32] } (imm:{ *:[i32] }):$imm))
/*  2205*/    /*Scope*/ 15, /*->2221*/
/*  2206*/      OPC_CheckPredicate, 11, // Predicate_i32lo16z
/*  2208*/      OPC_EmitRegister, MVT::i32, Lanai::R0,
/*  2211*/      OPC_EmitConvertToTarget, 0,
/*  2213*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32lo16z>><<X:LO16>>:$imm - Complexity = 4
                // Dst: (OR_I_LO:{ *:[i32] } R0:{ *:[i32] }, (imm:{ *:[i32] }):$imm)
/*  2221*/    /*Scope*/ 25, /*->2247*/
/*  2222*/      OPC_EmitConvertToTarget, 0,
/*  2224*/      OPC_EmitNodeXForm, 1, 1, // HI16
/*  2227*/      OPC_EmitNode1, TARGET_VAL(Lanai::MOVHI), 0,
                    MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*  2234*/      OPC_EmitConvertToTarget, 0,
/*  2236*/      OPC_EmitNodeXForm, 0, 4, // LO16
/*  2239*/      OPC_MorphNodeTo1, TARGET_VAL(Lanai::OR_I_LO), 0,
                    MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:{ *:[i32] }):$imm - Complexity = 3
                // Dst: (OR_I_LO:{ *:[i32] } (MOVHI:{ *:[i32] } (HI16:{ *:[i32] } (imm:{ *:[i32] }):$imm)), (LO16:{ *:[i32] } (imm:{ *:[i32] }):$imm))
/*  2247*/    0, /*End of Scope*/
/*  2248*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->2265
/*  2251*/    OPC_RecordNode, // #0 = 'br' chained node
/*  2252*/    OPC_RecordChild1, // #1 = $addr
/*  2253*/    OPC_MoveChild1,
/*  2254*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2257*/    OPC_MoveParent,
/*  2258*/    OPC_EmitMergeInputChains1_0,
/*  2259*/    OPC_MorphNodeTo0, TARGET_VAL(Lanai::BT), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$addr) - Complexity = 3
              // Dst: (BT (bb:{ *:[Other] }):$addr)
/*  2265*/  /*SwitchOpcode*/ 11, TARGET_VAL(ISD::BRIND),// ->2279
/*  2268*/    OPC_RecordNode, // #0 = 'brind' chained node
/*  2269*/    OPC_RecordChild1, // #1 = $Rs2
/*  2270*/    OPC_CheckChild1Type, MVT::i32,
/*  2272*/    OPC_EmitMergeInputChains1_0,
/*  2273*/    OPC_MorphNodeTo0, TARGET_VAL(Lanai::JR), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (brind GPR:{ *:[i32] }:$Rs2) - Complexity = 3
              // Dst: (JR GPR:{ *:[i32] }:$Rs2)
/*  2279*/  /*SwitchOpcode*/ 8, TARGET_VAL(LanaiISD::RET_FLAG),// ->2290
/*  2282*/    OPC_RecordNode, // #0 = 'RetFlag' chained node
/*  2283*/    OPC_CaptureGlueInput,
/*  2284*/    OPC_EmitMergeInputChains1_0,
/*  2285*/    OPC_MorphNodeTo0, TARGET_VAL(Lanai::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (RetFlag) - Complexity = 3
              // Dst: (RET)
/*  2290*/  /*SwitchOpcode*/ 9, TARGET_VAL(LanaiISD::ADJDYNALLOC),// ->2302
/*  2293*/    OPC_RecordChild0, // #0 = $src
/*  2294*/    OPC_MorphNodeTo2, TARGET_VAL(Lanai::ADJDYNALLOC), 0,
                  MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (LanaiAdjDynAlloc:{ *:[i32] } GPR:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (ADJDYNALLOC:{ *:[i32] }:{ *:[i32] } GPR:{ *:[i32] }:$src)
/*  2302*/  /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTPOP),// ->2313
/*  2305*/    OPC_RecordChild0, // #0 = $Rs1
/*  2306*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::POPC), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:{ *:[i32] } GPR:{ *:[i32] }:$Rs1) - Complexity = 3
              // Dst: (POPC:{ *:[i32] } GPR:{ *:[i32] }:$Rs1)
/*  2313*/  /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTLZ),// ->2324
/*  2316*/    OPC_RecordChild0, // #0 = $Rs1
/*  2317*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::LEADZ), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:{ *:[i32] } GPR:{ *:[i32] }:$Rs1) - Complexity = 3
              // Dst: (LEADZ:{ *:[i32] } GPR:{ *:[i32] }:$Rs1)
/*  2324*/  /*SwitchOpcode*/ 8, TARGET_VAL(ISD::CTTZ),// ->2335
/*  2327*/    OPC_RecordChild0, // #0 = $Rs1
/*  2328*/    OPC_MorphNodeTo1, TARGET_VAL(Lanai::TRAILZ), 0,
                  MVT::i32, 1/*#Ops*/, 0, 
              // Src: (cttz:{ *:[i32] } GPR:{ *:[i32] }:$Rs1) - Complexity = 3
              // Dst: (TRAILZ:{ *:[i32] } GPR:{ *:[i32] }:$Rs1)
/*  2335*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 2337 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 41
  // #OPC_RecordNode                           = 11
  // #OPC_RecordChild                          = 63
  // #OPC_RecordMemRef                         = 3
  // #OPC_CaptureGlueInput                     = 9
  // #OPC_MoveChild                            = 32
  // #OPC_MoveParent                           = 89
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 0
  // #OPC_CheckPatternPredicate                = 0
  // #OPC_CheckPredicate                       = 68
  // #OPC_CheckOpcode                          = 24
  // #OPC_SwitchOpcode                         = 9
  // #OPC_CheckType                            = 32
  // #OPC_SwitchType                           = 0
  // #OPC_CheckChildType                       = 7
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 0
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckChild2CondCode                  = 0
  // #OPC_CheckValueType                       = 0
  // #OPC_CheckComplexPat                      = 22
  // #OPC_CheckAndImm                          = 0
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 15
  // #OPC_EmitStringInteger                    = 0
  // #OPC_EmitRegister                         = 10
  // #OPC_EmitConvertToTarget                  = 39
  // #OPC_EmitMergeInputChains                 = 31
  // #OPC_EmitCopyToReg                        = 5
  // #OPC_EmitNode                             = 3
  // #OPC_EmitNodeXForm                        = 38
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 125

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
    // Predicate_zextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 3: { 
    // Predicate_zextloadi32
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 4: { 
    // Predicate_zextloadi16
    // Predicate_sextloadi16
    // Predicate_extloadi16
    // Predicate_truncstorei16
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 5: { 
    // Predicate_zextloadi8
    // Predicate_sextloadi8
    // Predicate_extloadi8
    // Predicate_truncstorei8
    // Predicate_atomic_load_8
    SDNode *N = Node;
    (void)N;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 6: { 
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 7: { 
    // Predicate_extload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 8: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 9: { 
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 10: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 11: { 
    // Predicate_i32lo16z
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32lo16 predicate - true if the 32-bit immediate has only rightmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFFUL) == N->getZExtValue());
  }
  case 12: { 
    // Predicate_i32hi16
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32hi16 predicate - true if the 32-bit immediate has only leftmost 16
    // bits set.
    return ((N->getZExtValue() & 0xFFFF0000UL) == N->getZExtValue());
  }
  case 13: { 
    // Predicate_i32lo16and
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32lo16 predicate - true if the 32-bit immediate has the rightmost 16
    // bits set and the leftmost 16 bits 1's.
    return (N->getZExtValue() >= 0xFFFF0000UL);
  }
  case 14: { 
    // Predicate_i32hi16and
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32lo16 predicate - true if the 32-bit immediate has the leftmost 16
    // bits set and the rightmost 16 bits 1's.
    return ((N->getZExtValue() & 0xFFFFUL) == 0xFFFFUL);
  }
  case 15: { 
    // Predicate_i32neg16
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32neg16 predicate - true if the 32-bit immediate is negative and can
    // be represented by a 16 bit integer.
    int Imm = N->getSExtValue();
    return (Imm < 0) && (isInt<16>(Imm));
  }
  case 16: { 
    // Predicate_immShift
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    int Imm = N->getSExtValue();
    return Imm >= -31 && Imm <= 31;
  }
  case 17: { 
    // Predicate_i32lo21
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

    // i32lo21 predicate - true if the 32-bit immediate has only rightmost 21
    // bits set.
    return ((N->getZExtValue() & 0x1FFFFFUL) == N->getZExtValue());
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
    Result.resize(NextRes+3);
  return selectAddrRi(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+3);
  return selectAddrRr(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+3);
  return selectAddrSpls(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 3:
    Result.resize(NextRes+1);
  return selectAddrSls(N, Result[NextRes+0].first);
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
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0xffff,
                                   SDLoc(N), MVT::i32);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() >> 16, SDLoc(N),
                                   MVT::i32);

  }
  case 2: {  // NEG
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(-N->getSExtValue(), SDLoc(N), MVT::i32);

  }
  case 3: {  // LO21
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((uint64_t)N->getZExtValue() & 0x1fffff,
                                   SDLoc(N), MVT::i32);

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
